"""
skeletons10.6.py
High-Performance X3D -> glTF 2.0 / 2.1 Binary (.glb) Converter

Features:
  * Fast Babylon.js load speed matching skeletons10.1.py (compact O(N) graph).
  * Glowing translucent blue bone highlighting (1.5% shell, zero z-fighting).
  * RGB joint rotation center axes display at anatomical sockets.
  * Dual-action framing: camera flies to bone Viewpoint (or scales+centers if none).
  * Toggle support: click once to focus/highlight/zoom, click again to return home.
  * Skips visible="false" subtrees unless a ROUTE targets that node's visible field.
  * Robust geometry handling (IndexedFaceSet, TriangleSet, LineSet, Box, Cylinder, Sphere).
"""

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, urllib.request, urllib.parse, math, mimetypes, base64, re, gzip, copy, ssl, posixpath
from pygltflib import *

BROWSER_HEADERS = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/124.0.0.0 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
    'Connection': 'keep-alive',
}

_SHARED_SESSION = None

def _get_requests_session():
    global _SHARED_SESSION
    if _SHARED_SESSION is None:
        try:
            import requests
            s = requests.Session()
            s.headers.update(BROWSER_HEADERS)
            _SHARED_SESSION = s
        except ImportError:
            _SHARED_SESSION = False
    return _SHARED_SESSION

def _fetch_remote_bytes(target: str, timeout: int = 20) -> bytes:
    session = _get_requests_session()
    if session:
        resp = session.get(target, timeout=timeout)
        resp.raise_for_status()
        return resp.content

    ctx = ssl.create_default_context()
    ctx.check_hostname = False
    ctx.verify_mode = ssl.CERT_NONE

    opener = urllib.request.build_opener(
        urllib.request.HTTPSHandler(context=ctx)
    )
    req = urllib.request.Request(target, headers=BROWSER_HEADERS)
    with opener.open(req, timeout=timeout) as r:
        return r.read()

LOCAL_MIRROR_ROOTS = [p for p in os.environ.get('X3D_LOCAL_ROOTS', '').split(os.pathsep) if p]
X3D_ALT_ENCODINGS = {'.x3dv', '.wrl', '.x3dvz', '.wrz', '.x3dj', '.json', '.x3db', '.x3dz'}
X3D_UNSUPPORTED_EXTS = {'.x3dv', '.wrl', '.x3dvz', '.wrz', '.x3dj', '.json', '.x3db', '.gltf', '.glb'}

def _is_x3d_xml(ref):
    return ref.split('?')[0].lower().endswith('.x3d')

def _x3d_variants(ref):
    path, sep, query = ref.partition('?')
    stem, ext = os.path.splitext(path)
    if ext.lower() in X3D_ALT_ENCODINGS:
        return [stem + '.x3d' + sep + query, ref]
    return [ref]

def _local_paths_for(resolved, base):
    if not _is_remote(resolved):
        return [resolved]
    parsed = urllib.parse.urlparse(resolved)
    rel = urllib.parse.unquote(parsed.path).lstrip('/')
    paths = [os.path.normpath(os.path.join(root, parsed.hostname or '', rel)) for root in LOCAL_MIRROR_ROOTS]
    if base and not _is_remote(base) and posixpath.basename(rel):
        paths.append(os.path.normpath(os.path.join(base, posixpath.basename(rel))))
    return paths

def _dedupe(seq):
    seen, out = set(), []
    for x in seq:
        if x not in seen: seen.add(x); out.append(x)
    return out

def _url_candidates(urls, base, prefer_x3d=True):
    local, remote, skipped = [], [], []
    for url in urls:
        file_part, _, frag = url.partition('#')
        file_part = file_part.strip()
        if not file_part:
            skipped.append((url, 'no file part')); continue
        resolved = _resolve_ref(base, file_part)
        for p in _local_paths_for(resolved, base):
            for v in (_x3d_variants(p) if prefer_x3d else [p]): local.append((v, frag))
        if _is_remote(resolved):
            for v in (_x3d_variants(resolved) if prefer_x3d else [resolved]): remote.append((v, frag))
    if prefer_x3d:
        local.sort(key=lambda c: not _is_x3d_xml(c[0]))
        remote.sort(key=lambda c: not _is_x3d_xml(c[0]))
    return ([(t, f, 'local') for t, f in _dedupe(local)] +
            [(t, f, 'remote') for t, f in _dedupe(remote)]), skipped

def _iter_x3d_docs(urls, base, load_stack=(), tried=None):
    tried = tried if tried is not None else []
    cands, skipped = _url_candidates(urls, base)
    tried.extend(skipped)
    for target, frag, origin in cands:
        ext = os.path.splitext(target.split('?')[0])[1].lower()
        if ext in X3D_UNSUPPORTED_EXTS:
            tried.append((target, f'unsupported format {ext}')); continue
        if origin == 'local' and not os.path.isfile(target):
            tried.append((target, 'not found locally')); continue
        if target in load_stack:
            tried.append((target, 'cyclic Inline')); continue
        try:
            ext_root = ET.fromstring(_read_x3d_bytes(target))
        except Exception as e:
            tried.append((target, f'{origin}: {type(e).__name__}: {e}')); continue
        strip_namespaces(ext_root)
        yield {'root': ext_root, 'target': target, 'frag': frag, 'origin': origin}

def _load_inline_target(urls, scope, ctx):
    tried = []
    for item in _iter_x3d_docs(urls, scope.base, ctx.load_stack, tried):
        frag, ext_root = item['frag'], item['root']
        if frag:
            content = next((e for e in ext_root.iter() if e.get('DEF') == frag), None)
            if content is None:
                scene = ext_root.find('Scene')
                content = scene if scene is not None else ext_root
        else:
            scene = ext_root.find('Scene')
            content = scene if scene is not None else ext_root
        return {
            'root': ext_root,
            'content': content,
            'target': item['target'],
            'frag': frag,
            'origin': item['origin']
        }, tried
    return None, tried

def strip_namespaces(node):
    if '}' in node.tag:
        node.tag = node.tag.split('}', 1)[1]
    for k in list(node.attrib.keys()):
        if '}' in k:
            node.attrib[k.split('}', 1)[1]] = node.attrib.pop(k)
    for child in node:
        strip_namespaces(child)

def parse_mfstring(val_str):
    if not val_str: return []
    matches = re.findall(r'"([^"]*)"|\'([^\']*)\'', val_str)
    if matches:
        return [m[0] if m[0] else m[1] for m in matches]
    return val_str.split()

def parse_array(val_str, type_cast=float, default=None):
    if val_str is None: return default if default is not None else []
    if isinstance(val_str, (list, tuple)): return [type_cast(v) for v in val_str]
    val_str = val_str.strip()
    if not val_str: return default if default is not None else []
    return [type_cast(v) for v in val_str.replace(',', ' ').split()]

def parse_x3d_indices(index_str):
    raw = parse_array(index_str, int)
    polys, current = [], []
    for idx in raw:
        if idx == -1:
            if current: polys.append(current)
            current = []
        else:
            current.append(idx)
    if current: polys.append(current)
    return polys

def to_plain(obj):
    if obj is None: return None
    if isinstance(obj, (bool, int, float, str)): return obj
    if isinstance(obj, np.number): return obj.item()
    if isinstance(obj, np.ndarray): return obj.tolist()
    if isinstance(obj, (list, tuple)): return [to_plain(v) for v in obj if v is not None]
    if isinstance(obj, dict): return {k: to_plain(v) for k, v in obj.items() if v is not None}
    if hasattr(obj, '__dataclass_fields__'):
        return {k: to_plain(getattr(obj, k)) for k in obj.__dataclass_fields__ if getattr(obj, k) not in (None, [])}
    if hasattr(obj, '__dict__'):
        return {k: to_plain(v) for k, v in obj.__dict__.items() if not k.startswith('_') and v not in (None, [])}
    return obj

def append_to_buffer(buf: bytearray, data: bytes):
    pad = (4 - len(buf) % 4) % 4
    buf.extend(b'\x00' * pad)
    off = len(buf)
    buf.extend(data)
    return off, len(data)

def axis_angle_to_quat(x, y, z, angle):
    s = math.sin(angle / 2.0)
    length = math.sqrt(x*x + y*y + z*z)
    if length < 1e-8: return [0.0, 0.0, 0.0, 1.0]
    return [(x/length)*s, (y/length)*s, (z/length)*s, math.cos(angle / 2.0)]

def compute_normals(positions, indices, ccw=True):
    normals = np.zeros_like(positions, dtype=np.float64)
    tris = indices.reshape(-1, 3).astype(np.int64)
    v0, v1, v2 = positions[tris[:, 0]], positions[tris[:, 1]], positions[tris[:, 2]]
    face_normals = np.cross(v1 - v0, v2 - v0)
    if not ccw: face_normals = -face_normals
    for i in range(3): np.add.at(normals, tris[:, i], face_normals)
    norms = np.linalg.norm(normals, axis=1, keepdims=True)
    bad_norms = (norms < 1e-10).flatten()
    normals[bad_norms] = [0.0, 1.0, 0.0]
    norms[bad_norms] = 1.0
    return (normals / norms).astype(np.float32)

def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target, add_min_max=False):
    off, length = append_to_buffer(bin_blob, data.tobytes())
    bv = BufferView(buffer=0, byteOffset=off, byteLength=length)
    if target is not None:
        bv.target = target
    gltf.bufferViews.append(bv)
    min_v = max_v = None
    if add_min_max and len(data) > 0:
        clean = lambda v: 0.0 if abs(float(v)) < 1e-6 else float(v)
        if data.ndim == 1:
            min_v, max_v = [clean(data.min())], [clean(data.max())]
        else:
            min_v = [clean(x) for x in data.min(axis=0)]
            max_v = [clean(x) for x in data.max(axis=0)]
    gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=comp_type, count=len(data), type=gltf_type, min=min_v, max=max_v))
    return len(gltf.accessors) - 1

def write_glb(gltf_dict: dict, bin_blob: bytearray, output_path: str):
    if 'buffers' not in gltf_dict or not gltf_dict['buffers']: gltf_dict['buffers'] = [{'byteLength': len(bin_blob)}]
    else: gltf_dict['buffers'][0]['byteLength'] = len(bin_blob)

    json_bytes = json.dumps(gltf_dict, separators=(',', ':')).encode('utf-8')
    json_bytes += b'\x20' * ((4 - len(json_bytes) % 4) % 4)
    bin_padded = bytes(bin_blob) + b'\x00' * ((4 - len(bin_blob) % 4) % 4)
    with open(output_path, 'wb') as f:
        f.write(struct.pack('<III', 0x46546C67, 2, 12 + 8 + len(json_bytes) + 8 + len(bin_padded)))
        f.write(struct.pack('<II',  len(json_bytes), 0x4E4F534A))
        f.write(json_bytes)
        f.write(struct.pack('<II',  len(bin_padded), 0x004E4942))
        f.write(bin_padded)

def tag_node_interactivity(node, selectable=None, hoverable=None, visible=None):
    if node.extensions is None: node.extensions = {}
    if selectable is not None: node.extensions["KHR_node_selectability"] = {"selectable": bool(selectable)}
    if hoverable is not None:  node.extensions["KHR_node_hoverability"] = {"hoverable": bool(hoverable)}
    if visible is not None:    node.extensions["KHR_node_visibility"] = {"visible": bool(visible)}

# ---------------------------------------------------------------------------
# Visual Materials & XYZ Axes Mesh
# ---------------------------------------------------------------------------

def create_axes_mesh(gltf, bin_blob, mat_list, axis_length=0.08):
    positions = np.array([
        [-axis_length, 0, 0], [axis_length, 0, 0],
        [0, -axis_length, 0], [0, axis_length, 0],
        [0, 0, -axis_length], [0, 0, axis_length]
    ], dtype=np.float32)
    colors = np.array([
        [1.0, 0.0, 0.0, 1.0], [1.0, 0.0, 0.0, 1.0],  # X - Red
        [0.0, 1.0, 0.0, 1.0], [0.0, 1.0, 0.0, 1.0],  # Y - Green
        [0.0, 0.35, 1.0, 1.0], [0.0, 0.35, 1.0, 1.0] # Z - Blue
    ], dtype=np.float32)
    indices = np.array([0, 1, 2, 3, 4, 5], dtype=np.uint16)

    mat_dict = {
        "name": "AxesDisplayMaterial",
        "pbrMetallicRoughness": {
            "baseColorFactor": [1.0, 1.0, 1.0, 1.0],
            "metallicFactor": 0.0,
            "roughnessFactor": 1.0
        },
        "emissiveFactor": [1.0, 1.0, 1.0]
    }
    mat_list.append(mat_dict)
    mat_idx = len(mat_list) - 1

    prim_attrs = {
        "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
        "COLOR_0": add_accessor(gltf, bin_blob, colors, VEC4, FLOAT, ARRAY_BUFFER)
    }
    mesh = Mesh(primitives=[{
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "attributes": prim_attrs,
        "material": mat_idx,
        "mode": 1
    }])
    gltf.meshes.append(mesh)
    return len(gltf.meshes) - 1

def get_or_create_highlight_material(mat_list):
    for i, m in enumerate(mat_list):
        if m.get("name") == "BoneHighlightMaterial":
            return i
    highlight_mat = {
        "name": "BoneHighlightMaterial",
        "pbrMetallicRoughness": {
            "baseColorFactor": [0.2, 0.55, 1.0, 0.85],
            "metallicFactor": 0.0,
            "roughnessFactor": 0.3
        },
        "emissiveFactor": [0.45, 0.7, 1.0],
        "doubleSided": True,
        "alphaMode": "BLEND"
    }
    mat_list.append(highlight_mat)
    return len(mat_list) - 1

# ---------------------------------------------------------------------------
# Scope & Context
# ---------------------------------------------------------------------------

MAX_INLINE_DEPTH = 16
STRUCTURAL_TAGS = {
    'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite', 'Billboard'
}

def _collect_visible_route_targets(root):
    """DEF names whose visible field is driven by a ROUTE (may become true at runtime)."""
    targets = set()
    for el in root.iter():
        if el.tag != 'ROUTE':
            continue
        to_field = (el.get('toField') or '').strip().lower()
        if to_field in ('visible', 'set_visible'):
            to_node = (el.get('toNode') or '').strip()
            if to_node:
                targets.add(to_node)
    return targets


def _x3d_attr_is_false(val):
    if val is None:
        return False
    return str(val).strip().lower() in ('false', '0')


def _should_skip_invisible(xml_node, scope):
    """Skip node + children when visible=false unless a ROUTE can turn it back on."""
    if not _x3d_attr_is_false(xml_node.get('visible')):
        return False
    def_name = (xml_node.get('DEF') or '').strip()
    if def_name and def_name in getattr(scope, 'visible_route_targets', ()):
        return False
    return True


class Scope:
    def __init__(self, root, content, base, prefix, filename):
        self.root = root
        self.content = content
        self.base = base
        self.prefix = prefix
        self.filename = filename
        self.def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}
        self.inline_children = {}
        self.unit_scale = 1.0
        self.visible_route_targets = _collect_visible_route_targets(root)

class ConvertCtx:
    def __init__(self, gltf, bin_blob):
        self.gltf = gltf
        self.bin_blob = bin_blob
        self.mat_list = []
        self.def_to_node_idx = {}
        self.scopes = []
        self.load_stack = []
        self.used_prefixes = set()
        
        # Interactive bones
        self.interactive_bones = []
        self.model_root_idx = 1
        self.main_camera_node_idx = 2
        self.shared_axes_mesh_idx = None

# ---------------------------------------------------------------------------
# Mesh & Material Resolution
# ---------------------------------------------------------------------------

def resolve_material(app_node, def_map, mat_list):
    if app_node is None: return None
    mat_node = app_node.find('.//Material')
    if mat_node is None: return None
    diffuse = parse_array(mat_node.get('diffuseColor', '0.8 0.8 0.8'), default=[0.8, 0.8, 0.8])
    mat_dict = {
        "name": mat_node.get('DEF', "Mat"),
        "doubleSided": True,
        "pbrMetallicRoughness": {
            "baseColorFactor": [max(0.0, min(1.0, c)) for c in diffuse[:3]] + [1.0],
            "metallicFactor": 0.0,
            "roughnessFactor": 0.4
        }
    }
    mat_list.append(mat_dict)
    return len(mat_list) - 1

def box_to_ifs(box_node):
    hx, hy, hz = [s/2.0 for s in parse_array(box_node.get('size', '2 2 2'))]
    p = [
         [ hx,  hy,  hz], [-hx,  hy,  hz], [-hx, -hy,  hz], [ hx, -hy,  hz],
         [ hx,  hy, -hz], [ hx, -hy, -hz], [-hx, -hy, -hz], [-hx,  hy, -hz],
         [ hx,  hy,  hz], [ hx, -hy,  hz], [ hx, -hy, -hz], [ hx,  hy, -hz],
         [-hx,  hy,  hz], [-hx,  hy, -hz], [-hx, -hy, -hz], [-hx, -hy,  hz],
         [ hx,  hy,  hz], [ hx,  hy, -hz], [-hx,  hy, -hz], [-hx,  hy,  hz],
         [ hx, -hy,  hz], [-hx, -hy,  hz], [-hx, -hy, -hz], [ hx, -hy, -hz]
    ]
    ifs = ET.Element('IndexedFaceSet', {'coordIndex': ' '.join([f"{i*4} {i*4+1} {i*4+2} {i*4+3} -1" for i in range(6)])})
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in p])})
    return ifs

def process_mesh_primitives(geom_nodes, gltf, bin_blob, def_map, mat_list):
    primitives = []
    for node in geom_nodes:
        facesets = (node.findall('.//IndexedFaceSet') +
                    node.findall('.//IndexedTriangleSet') +
                    node.findall('.//TriangleSet'))
        facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])
        app_node = node.find('.//Appearance')

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is None: continue
            raw_pos = parse_array(coord.get('point', ''))
            if not raw_pos: continue
            pos_arr = np.asarray(raw_pos, dtype=np.float32).reshape(-1, 3)

            if face_set.tag == 'TriangleSet':
                n = len(pos_arr)
                pos_polys = [[i, i+1, i+2] for i in range(0, n - 2, 3)]
            else:
                pos_polys = parse_x3d_indices(face_set.get('coordIndex') or face_set.get('index', ''))

            out_positions, unified_indices = [], []
            vert_map = {}

            for poly in pos_polys:
                if len(poly) < 3: continue
                for i in range(1, len(poly) - 1):
                    for idx_v in (poly[0], poly[i], poly[i + 1]):
                        if idx_v not in vert_map:
                            vert_map[idx_v] = len(out_positions)
                            out_positions.append(pos_arr[idx_v])
                        unified_indices.append(vert_map[idx_v])

            if not unified_indices: continue
            positions = np.asarray(out_positions, dtype=np.float32)
            indices = np.asarray(unified_indices, dtype=np.uint16)
            normals = compute_normals(positions, indices)

            mat_idx = resolve_material(app_node, def_map, mat_list)
            prim_attrs = {
                "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
                "NORMAL": add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER)
            }
            primitives.append({
                "indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, ELEMENT_ARRAY_BUFFER, add_min_max=True),
                "attributes": prim_attrs,
                "material": mat_idx
            })

    if not primitives: return None
    mesh_idx = len(gltf.meshes)
    gltf.meshes.append(Mesh(primitives=primitives))
    return mesh_idx

# ---------------------------------------------------------------------------
# DOM Traversal & Local Bone Registration
# ---------------------------------------------------------------------------

def _is_remote(s): return re.match(r'https?://', s, re.I) is not None
def _resolve_ref(base, ref):
    ref = ref.strip().replace('\\', '/')
    if _is_remote(ref): return ref
    if _is_remote(base): return urllib.parse.urljoin(base, ref)
    return os.path.normpath(os.path.join(base, ref))
def _base_of(target): return target.rsplit('/', 1)[0] + '/' if _is_remote(target) else os.path.dirname(target)
def _read_x3d_bytes(target):
    if _is_remote(target):
        req = urllib.request.Request(target, headers=BROWSER_HEADERS)
        with urllib.request.urlopen(req, timeout=15) as r: data = r.read()
    else:
        with open(target, 'rb') as f: data = f.read()
    if data[:2] == b'\x1f\x8b': data = gzip.decompress(data)
    return data

def _handle_inline(xml_node, parent_idx, ctx, scope):
    if _should_skip_invisible(xml_node, scope):
        return

    gltf = ctx.gltf
    urls = parse_mfstring(xml_node.get('url', ''))
    label = xml_node.get('DEF') or f"Bone_{len(ctx.interactive_bones) + 1}"

    # Auto-synthesize AxesDisplay if requested in bone file
    if any("axesdisplay" in u.lower() for u in urls):
        if ctx.shared_axes_mesh_idx is None:
            ctx.shared_axes_mesh_idx = create_axes_mesh(gltf, ctx.bin_blob, ctx.mat_list)
        axis_node_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=f"{scope.prefix}AxesGizmo", mesh=ctx.shared_axes_mesh_idx))
        if parent_idx is not None:
            p = gltf.nodes[parent_idx]
            if p.children is None: p.children = []
            p.children.append(axis_node_idx)
        return

    res, tried = _load_inline_target(urls, scope, ctx)
    if res is None: return

    child_scope = Scope(res['root'], res['content'], _base_of(res['target']), f"{scope.prefix}{label}/", os.path.basename(res['target']))
    ctx.scopes.append(child_scope)

    bone_wrapper_idx = len(gltf.nodes)
    bone_node = Node(name=label, children=[])
    tag_node_interactivity(bone_node, selectable=True, hoverable=True, visible=True)
    gltf.nodes.append(bone_node)

    if parent_idx is not None:
        p = gltf.nodes[parent_idx]
        if p.children is None: p.children = []
        p.children.append(bone_wrapper_idx)

    bone_rec = {
        "node_idx": bone_wrapper_idx,
        "name": label,
        "axes_node": None,
        "highlight_nodes": [],
        "mesh_nodes": [],
        "viewpoint_local_pos": None,
        "viewpoint_local_quat": None,
    }
    ctx.interactive_bones.append(bone_rec)

    ctx.load_stack.append(res['target'])
    try:
        traverse_x3d_node(child_scope.content, bone_wrapper_idx, ctx, child_scope, bone_rec)
    finally:
        ctx.load_stack.pop()

def traverse_x3d_node(xml_node, parent_idx, ctx, scope, current_bone=None):
    gltf = ctx.gltf
    tag = xml_node.tag

    if _should_skip_invisible(xml_node, scope):
        return

    def attach(child_idx):
        if parent_idx is not None:
            p = gltf.nodes[parent_idx]
            if p.children is None: p.children = []
            if child_idx not in p.children: p.children.append(child_idx)

    if tag in ('Inline', 'InlineGeometry'):
        _handle_inline(xml_node, parent_idx, ctx, scope)
        return

    if tag in STRUCTURAL_TAGS:
        def_name = xml_node.get('DEF', '')
        t = parse_array(xml_node.get('translation'), default=[0,0,0])
        r = parse_array(xml_node.get('rotation'), default=[0,1,0,0])
        s = parse_array(xml_node.get('scale'), default=[1,1,1])

        node_idx = len(gltf.nodes)
        node_obj = Node(
            name=scope.prefix + (def_name or f"Trans_{node_idx}"),
            translation=[float(x) for x in t],
            rotation=axis_angle_to_quat(*r),
            scale=[float(x) for x in s],
            children=[]
        )

        is_axes = (def_name == "CenterOfRotationForJoint")
        if is_axes:
            # Initially scale down to zero so it's invisible until clicked
            node_obj.scale = [0.0, 0.0, 0.0]
            tag_node_interactivity(node_obj, selectable=False, hoverable=False)
            if current_bone:
                current_bone["axes_node"] = node_idx
        else:
            tag_node_interactivity(node_obj, selectable=True, hoverable=True, visible=True)

        gltf.nodes.append(node_obj)
        attach(node_idx)

        for child in xml_node:
            traverse_x3d_node(child, node_idx, ctx, scope, current_bone)
        return

    if tag == 'Viewpoint':
        # Prefer HiddenViewpoint, then ViewFromFront, else first Viewpoint under this bone
        if current_bone is not None:
            def_name = (xml_node.get('DEF') or '')
            pos = parse_array(xml_node.get('position'), default=[0, 0, 10])
            ori = parse_array(xml_node.get('orientation'), default=[0, 1, 0, 0])
            quat = axis_angle_to_quat(*ori)
            existing = current_bone.get('_vp_def')
            take = False
            if current_bone.get('viewpoint_local_pos') is None:
                take = True
            elif def_name == 'HiddenViewpoint':
                take = True
            elif def_name == 'ViewFromFront' and existing != 'HiddenViewpoint':
                take = True
            if take:
                current_bone['viewpoint_local_pos'] = [float(x) for x in pos[:3]]
                current_bone['viewpoint_local_quat'] = [float(x) for x in quat]
                current_bone['_vp_def'] = def_name
        return

    if tag == 'Shape':
        mesh_idx = process_mesh_primitives([xml_node], gltf, ctx.bin_blob, scope.def_map, ctx.mat_list)
        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            shape_name = scope.prefix + xml_node.get('DEF', f"Shape_{shape_idx}")
            shape_node = Node(name=shape_name, mesh=mesh_idx)
            tag_node_interactivity(shape_node, selectable=True, hoverable=True, visible=True)
            gltf.nodes.append(shape_node)
            attach(shape_idx)

            if current_bone:
                current_bone["mesh_nodes"].append(shape_idx)

            # Translucent blue highlight overlay (initially scale 0)
            hl_mat_idx = get_or_create_highlight_material(ctx.mat_list)
            base_mesh = gltf.meshes[mesh_idx]
            hl_prims = []
            for p in base_mesh.primitives:
                p_copy = copy.deepcopy(p if isinstance(p, dict) else p.__dict__)
                p_copy["material"] = hl_mat_idx
                hl_prims.append(p_copy)
            gltf.meshes.append(Mesh(primitives=hl_prims))

            hl_node_idx = len(gltf.nodes)
            hl_node = Node(name=f"{shape_name}_Highlight", mesh=len(gltf.meshes) - 1, scale=[0.0, 0.0, 0.0])
            tag_node_interactivity(hl_node, selectable=False, hoverable=False)
            gltf.nodes.append(hl_node)
            attach(hl_node_idx)

            if current_bone:
                current_bone["highlight_nodes"].append(hl_node_idx)
        return

    for child in xml_node:
        traverse_x3d_node(child, parent_idx, ctx, scope, current_bone)

# ---------------------------------------------------------------------------
# World Calculations
# ---------------------------------------------------------------------------

def _node_local_mat(node):
    t = np.asarray(node.translation or [0.0, 0.0, 0.0], dtype=np.float64)
    q = np.asarray(node.rotation or [0.0, 0.0, 0.0, 1.0], dtype=np.float64)
    sc = np.asarray(node.scale or [1.0, 1.0, 1.0], dtype=np.float64)
    x, y, z, w = q
    R = np.array([
        [1-2*(y*y+z*z), 2*(x*y-z*w), 2*(x*z+y*w)],
        [2*(x*y+z*w), 1-2*(x*x+z*z), 2*(y*z-x*w)],
        [2*(x*z-y*w), 2*(y*z+x*w), 1-2*(x*x+y*y)]], dtype=np.float64)
    M = np.eye(4, dtype=np.float64)
    M[:3, :3] = R @ np.diag(sc)
    M[:3, 3] = t
    return M

def _calc_world_mats(gltf):
    worlds = [None] * len(gltf.nodes)
    def visit(idx, parent):
        if idx < 0 or idx >= len(gltf.nodes) or worlds[idx] is not None: return
        world = parent @ _node_local_mat(gltf.nodes[idx])
        worlds[idx] = world
        for child in (gltf.nodes[idx].children or []):
            visit(child, world)
    for root_idx in gltf.scenes[0].nodes:
        visit(root_idx, np.eye(4))
    return worlds

def _node_world_bounds(ctx, root_idx, worlds):
    """Return (center, half_extents, max_extent) of subtree in world space. Skips highlights."""
    gltf = ctx.gltf
    lo = np.array([np.inf, np.inf, np.inf], dtype=np.float64)
    hi = np.array([-np.inf, -np.inf, -np.inf], dtype=np.float64)
    stack = [root_idx]
    while stack:
        ni = stack.pop()
        node = gltf.nodes[ni]
        if node.mesh is not None and node.mesh < len(gltf.meshes):
            mesh = gltf.meshes[node.mesh]
            if "highlight" in (node.name or "").lower():
                continue
            for prim in mesh.primitives:
                attrs = prim.get('attributes') if isinstance(prim, dict) else getattr(prim, 'attributes', None)
                if not attrs:
                    continue
                pos_idx = attrs.get('POSITION') if isinstance(attrs, dict) else getattr(attrs, 'POSITION', None)
                if pos_idx is None or pos_idx >= len(gltf.accessors):
                    continue
                acc = gltf.accessors[pos_idx]
                if not acc.min or not acc.max:
                    continue
                mn = np.asarray(acc.min, dtype=np.float64)
                mx = np.asarray(acc.max, dtype=np.float64)
                corners = np.array([[x, y, z, 1.0]
                                    for x in (mn[0], mx[0])
                                    for y in (mn[1], mx[1])
                                    for z in (mn[2], mx[2])])
                wc = (worlds[ni] @ corners.T).T[:, :3]
                lo = np.minimum(lo, wc.min(axis=0))
                hi = np.maximum(hi, wc.max(axis=0))
        stack.extend(node.children or [])
    if not np.all(np.isfinite(lo)) or not np.all(np.isfinite(hi)):
        c = worlds[root_idx][:3, 3]
        return c, np.array([0.05, 0.05, 0.05], dtype=np.float64), 0.1
    center = (lo + hi) * 0.5
    half = (hi - lo) * 0.5
    max_extent = float(np.max(half) * 2.0)
    return center, half, max_extent


def _node_world_center(ctx, root_idx, worlds):
    center, _, _ = _node_world_bounds(ctx, root_idx, worlds)
    return center


def _collect_descendant_mesh_nodes(gltf, root_idx):
    """All node indices under root_idx that have a real (non-highlight) mesh."""
    out = []
    stack = [root_idx]
    seen = set()
    while stack:
        ni = stack.pop()
        if ni in seen or ni < 0 or ni >= len(gltf.nodes):
            continue
        seen.add(ni)
        node = gltf.nodes[ni]
        name = (node.name or "").lower()
        if node.mesh is not None and "highlight" not in name and "pickproxy" not in name.replace("_", ""):
            out.append(ni)
        for c in (node.children or []):
            stack.append(c)
    return out


def _get_or_create_pick_proxy_material(mat_list):
    for i, m in enumerate(mat_list):
        if m.get("name") == "BonePickProxyMaterial":
            return i
    mat_list.append({
        "name": "BonePickProxyMaterial",
        "pbrMetallicRoughness": {
            "baseColorFactor": [0.0, 0.0, 0.0, 0.0],
            "metallicFactor": 0.0,
            "roughnessFactor": 1.0,
        },
        "alphaMode": "BLEND",
        "doubleSided": True,
    })
    return len(mat_list) - 1


def _add_box_mesh(gltf, bin_blob, mat_idx, half_extents):
    """Axis-aligned box centered at origin with the given half-extents."""
    hx, hy, hz = [float(max(abs(h), 0.005)) for h in half_extents]
    corners = np.array([
        [-hx, -hy, -hz], [ hx, -hy, -hz], [ hx,  hy, -hz], [-hx,  hy, -hz],
        [-hx, -hy,  hz], [ hx, -hy,  hz], [ hx,  hy,  hz], [-hx,  hy,  hz],
    ], dtype=np.float32)
    faces = [
        0, 1, 2, 0, 2, 3,
        4, 6, 5, 4, 7, 6,
        0, 5, 1, 0, 4, 5,
        3, 2, 6, 3, 6, 7,
        0, 3, 7, 0, 7, 4,
        1, 5, 6, 1, 6, 2,
    ]
    indices = np.asarray(faces, dtype=np.uint16)
    normals = compute_normals(corners, indices)
    prim = {
        "attributes": {
            "POSITION": add_accessor(gltf, bin_blob, corners, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
            "NORMAL": add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER),
        },
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "material": mat_idx,
    }
    gltf.meshes.append(Mesh(primitives=[prim]))
    return len(gltf.meshes) - 1


def _finalize_bone_pick_targets(ctx):
    """Wire pick targets: each bone keeps its own geometry meshes only.

    No full-AABB pick proxies — those covered child bones and stole clicks,
    which made selection feel inverted (parent/composite selected instead of
    the leaf bone under the cursor).

    Meshes are owned by the deepest interactive bone that contains them so a
    click hits the leaf bone, not an ancestor composite.
    """
    gltf = ctx.gltf
    bone_root_set = {b["node_idx"] for b in ctx.interactive_bones}

    parent = {i: None for i in range(len(gltf.nodes))}
    for i, node in enumerate(gltf.nodes):
        for c in (node.children or []):
            parent[c] = i

    def deepest_bone_root(mesh_ni):
        ni = mesh_ni
        while ni is not None:
            if ni in bone_root_set:
                return ni
            ni = parent.get(ni)
        return None

    owned = {b["node_idx"]: set() for b in ctx.interactive_bones}
    # Start from meshes recorded during traverse
    for b in ctx.interactive_bones:
        for mi in b.get("mesh_nodes") or []:
            root = deepest_bone_root(mi) or b["node_idx"]
            if root in owned:
                owned[root].add(mi)
    # Any other real meshes under a bone tree
    for b in ctx.interactive_bones:
        for mi in _collect_descendant_mesh_nodes(gltf, b["node_idx"]):
            root = deepest_bone_root(mi)
            if root is not None and root in owned:
                owned[root].add(mi)

    for bone in ctx.interactive_bones:
        meshes = sorted(owned.get(bone["node_idx"], set()))
        bone["mesh_nodes"] = list(meshes)
        bone["pickable"] = len(meshes) > 0
        bone["pick_proxy"] = False


def generate_focus_and_reset_animations(ctx, duration=1.0):
    """Reset + per-bone focus clips.

    * Click bone  → pan/zoom model to bone + turn highlight (and axes) ON
    * Click again → clear highlights + return model to home
    * Click other → clear highlights + focus new bone
    Viewpoint / camera-fly intentionally omitted (unstable in common viewers).
    """
    gltf, blob = ctx.gltf, ctx.bin_blob
    worlds = _calc_world_mats(gltf)
    root_idx = ctx.model_root_idx

    scene_center, _, _scene_extent = _node_world_bounds(ctx, root_idx, worlds)
    TARGET_BONE_SIZE = 1.25
    MIN_FOCUS_SCALE = 1.0
    MAX_FOCUS_SCALE = 12.0

    def add_acc(data, typ, count, mn=None, mx=None):
        off, length = append_to_buffer(blob, data.tobytes())
        gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length))
        kw = dict(bufferView=len(gltf.bufferViews) - 1, componentType=FLOAT, count=count, type=typ)
        if mn is not None:
            kw['min'] = mn
        if mx is not None:
            kw['max'] = mx
        gltf.accessors.append(Accessor(**kw))
        return len(gltf.accessors) - 1

    t_samples = np.array([0.0, float(duration)], dtype=np.float32)
    t_acc = add_acc(t_samples, SCALAR, 2, [0.0], [float(duration)])

    home_pos = np.array([0.0, 0.0, 0.0], dtype=np.float32)
    zero_scale = np.zeros((2, 3), dtype=np.float32)
    one_scale = np.ones((2, 3), dtype=np.float32)
    # Highlight: 0 → 1.02 over the clip
    shell_keys = np.array([[1.02, 1.02, 1.02], [1.02, 1.02, 1.02]], dtype=np.float32)
    axes_keys = np.array([[1.0, 1.0, 1.0], [1.0, 1.0, 1.0]], dtype=np.float32)

    zero_scale_acc = add_acc(zero_scale, VEC3, 2)
    one_scale_acc = add_acc(one_scale, VEC3, 2)
    shell_scale_acc = add_acc(shell_keys, VEC3, 2)
    axes_scale_acc = add_acc(axes_keys, VEC3, 2)
    home_pos_acc = add_acc(np.asarray([home_pos, home_pos], dtype=np.float32), VEC3, 2)

    # ----- Reset home: model only -----
    reset_samplers = [
        AnimationSampler(input=t_acc, output=home_pos_acc, interpolation="LINEAR"),
        AnimationSampler(input=t_acc, output=one_scale_acc, interpolation="LINEAR"),
    ]
    reset_channels = [
        AnimationChannel(sampler=0, target=AnimationChannelTarget(node=root_idx, path="translation")),
        AnimationChannel(sampler=1, target=AnimationChannelTarget(node=root_idx, path="scale")),
    ]
    anim_reset = Animation(name="Anim_Reset_Home", samplers=reset_samplers, channels=reset_channels)
    anim_reset.extras = {"duration": float(duration)}
    ctx.reset_anim_idx = len(gltf.animations)
    gltf.animations.append(anim_reset)

    # ----- Chunked clear: zero all highlights + axes -----
    clear_targets = []
    for b in ctx.interactive_bones:
        clear_targets.extend(b.get("highlight_nodes") or [])
        if b.get("axes_node") is not None:
            clear_targets.append(b["axes_node"])

    CHUNK = 64
    ctx.clear_anim_indices = []
    for ci in range(0, len(clear_targets), CHUNK):
        chunk = clear_targets[ci:ci + CHUNK]
        if not chunk:
            break
        samplers = [AnimationSampler(input=t_acc, output=zero_scale_acc, interpolation="LINEAR")]
        channels = [
            AnimationChannel(sampler=0, target=AnimationChannelTarget(node=ni, path="scale"))
            for ni in chunk
        ]
        anim_c = Animation(name=f"Anim_ClearHighlights_{ci // CHUNK}", samplers=samplers, channels=channels)
        anim_c.extras = {"duration": float(duration)}
        ctx.clear_anim_indices.append(len(gltf.animations))
        gltf.animations.append(anim_c)

    # ----- Per-bone focus: pan/zoom + highlight ON -----
    for bone in ctx.interactive_bones:
        b_idx = bone["node_idx"]
        b_name = bone["name"]
        bone_center, _, bone_extent = _node_world_bounds(ctx, b_idx, worlds)

        if bone_extent < 1e-6:
            focus_scale = 1.0
        else:
            focus_scale = float(np.clip(TARGET_BONE_SIZE / bone_extent, MIN_FOCUS_SCALE, MAX_FOCUS_SCALE))

        root_delta = scene_center - (focus_scale * bone_center) + np.array([0.0, 0.0, 0.12], dtype=np.float64)
        root_trans = np.asarray([home_pos, (home_pos + root_delta).astype(np.float32)], dtype=np.float32)
        root_p_acc = add_acc(root_trans, VEC3, 2)
        root_scale_curve = np.asarray(
            [[1.0, 1.0, 1.0], [focus_scale, focus_scale, focus_scale]], dtype=np.float32)
        root_s_acc = add_acc(root_scale_curve, VEC3, 2)

        samplers = [
            AnimationSampler(input=t_acc, output=root_p_acc, interpolation="LINEAR"),      # 0 model trans
            AnimationSampler(input=t_acc, output=root_s_acc, interpolation="LINEAR"),      # 1 model scale
            AnimationSampler(input=t_acc, output=shell_scale_acc, interpolation="LINEAR"),  # 2 highlight ON
            AnimationSampler(input=t_acc, output=axes_scale_acc, interpolation="LINEAR"),   # 3 axes ON
        ]
        channels = [
            AnimationChannel(sampler=0, target=AnimationChannelTarget(node=root_idx, path="translation")),
            AnimationChannel(sampler=1, target=AnimationChannelTarget(node=root_idx, path="scale")),
        ]
        for hl_idx in bone.get("highlight_nodes") or []:
            channels.append(AnimationChannel(sampler=2, target=AnimationChannelTarget(node=hl_idx, path="scale")))
        if bone.get("axes_node") is not None:
            channels.append(AnimationChannel(sampler=3, target=AnimationChannelTarget(node=bone["axes_node"], path="scale")))

        anim = Animation(name=f"Anim_Focus_{b_name}", samplers=samplers, channels=channels)
        anim.extras = {"duration": float(duration)}
        bone["focus_anim_idx"] = len(gltf.animations)
        gltf.animations.append(anim)


def build_khr_interactivity(ctx):
    gltf = ctx.gltf
    graph_nodes = []

    types, type_idx = [], {}
    def T(sig):
        if sig not in type_idx:
            type_idx[sig] = len(types)
            types.append({"signature": sig})
        return type_idx[sig]

    declarations, decl_idx = [], {}
    def D(op, extension=None, outputs=None):
        key = (op, extension)
        if key not in decl_idx:
            d = {"op": op}
            if extension: d["extension"] = extension
            if outputs: d["outputValueSockets"] = {k: {"type": T(v)} for k, v in outputs.items()}
            decl_idx[key] = len(declarations)
            declarations.append(d)
        return decl_idx[key]

    ON_SELECT_OUTPUTS = {
        "selectedNode": "ref", "controllerIndex": "int",
        "selectionPoint": "float3", "selectionRayOrigin": "float3",
        "event": "ref"
    }

    def lit(sig, v): return {"type": T(sig), "value": [v]}
    def link(node, socket="value"): return {"node": node, "socket": socket}
    def cfg(**kw): return {k: {"value": v if isinstance(v, list) else [v]} for k, v in kw.items()}

    def add_node(op, configuration=None, values=None, extension=None, outputs=None):
        node_def = {"declaration": D(op, extension, outputs)}
        if configuration: node_def["configuration"] = configuration
        if values: node_def["values"] = values
        graph_nodes.append(node_def)
        return len(graph_nodes) - 1

    def connect(src, dst, out="out"):
        graph_nodes[src].setdefault("flows", {})[out] = {"node": dst, "socket": "in"}

    def play_anim(anim_idx, duration=1.0, start_time=0.0):
        return add_node("animation/start", values={
            "animation": lit("ref", f"/animations/{anim_idx}"),
            "startTime": lit("float", float(start_time)),
            "endTime":   lit("float", float(duration)),
            "speed":     lit("float", 1.0),
        })

    def on_select(node_idx):
        return add_node("event/onSelect", configuration=cfg(nodeIndex=node_idx),
                        extension="KHR_node_selectability", outputs=ON_SELECT_OUTPUTS)

    # Global active bone tracking
    active_var_idx = 0
    variables = [{"name": "active_bone", "type": T("int"), "value": [-1]}]
    get_active = add_node("variable/get", configuration=cfg(variable=active_var_idx))

    def chain_anims(anim_indices, duration=1.0, start_time=0.0):
        """Play animations in sequence; return (first_node, last_node)."""
        if not anim_indices:
            return None, None
        nodes = [play_anim(ai, duration, start_time) for ai in anim_indices]
        for a, b in zip(nodes, nodes[1:]):
            connect(a, b)
        return nodes[0], nodes[-1]

    clear_ids = list(getattr(ctx, "clear_anim_indices", []) or [])

    # Wire onSelect on each bone mesh_nodes (real geometry or pick-proxy)
    for i, bone in enumerate(ctx.interactive_bones):
        anim_idx = bone.get("focus_anim_idx")
        if anim_idx is None:
            continue
        targets = list(bone.get("mesh_nodes") or [])
        if not targets:
            targets = [bone["node_idx"]]
        for tr_idx in targets:
            sel = on_select(tr_idx)

            eq_node = add_node("math/eq", values={"a": link(get_active), "b": lit("int", i)})
            branch_node = add_node("flow/branch", values={"condition": link(eq_node)})
            connect(sel, branch_node)

            # true: clear highlights then reset model -> home
            clear_first, clear_last = chain_anims(clear_ids, 1.0, start_time=1.0)
            reset_play = play_anim(ctx.reset_anim_idx, 1.0)
            if clear_first is not None:
                graph_nodes[branch_node].setdefault("flows", {})["true"] = {"node": clear_first, "socket": "in"}
                connect(clear_last, reset_play)
            else:
                graph_nodes[branch_node].setdefault("flows", {})["true"] = {"node": reset_play, "socket": "in"}
            set_reset_var = add_node("variable/set", configuration=cfg(variables=[active_var_idx]),
                                     values={str(active_var_idx): lit("int", -1)})
            connect(reset_play, set_reset_var)

            # false: clear highlights, snap model home, then focus this bone
            clear_first2, clear_last2 = chain_anims(clear_ids, 1.0, start_time=1.0)
            snap_reset = play_anim(ctx.reset_anim_idx, 1.0, start_time=1.0)
            focus_play = play_anim(anim_idx, 1.0)
            if clear_first2 is not None:
                graph_nodes[branch_node].setdefault("flows", {})["false"] = {"node": clear_first2, "socket": "in"}
                connect(clear_last2, snap_reset)
            else:
                graph_nodes[branch_node].setdefault("flows", {})["false"] = {"node": snap_reset, "socket": "in"}
            connect(snap_reset, focus_play)
            set_focus_var = add_node("variable/set", configuration=cfg(variables=[active_var_idx]),
                                     values={str(active_var_idx): lit("int", i)})
            connect(focus_play, set_focus_var)

    return {
        "graph": 0,
        "graphs": [{
            "types": types,
            "declarations": declarations,
            "variables": variables,
            "nodes": graph_nodes
        }]
    }

# ---------------------------------------------------------------------------
# Main Conversion Routine
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    print(f"\nConverting: {x3d_filepath}")
    main_path = os.path.abspath(x3d_filepath)
    try:
        root = ET.fromstring(_read_x3d_bytes(main_path))
        strip_namespaces(root)
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}"); return False

    bin_blob = bytearray()
    
    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB High-Speed Bones Converter", version="2.0"),
        scene=0,
        scenes=[Scene(nodes=[0])],
        nodes=[
            Node(name="WorldRoot", children=[1, 2]),
            Node(name="ModelContainer", translation=[0.0, 0.0, 0.0], children=[]),
            Node(name="MainSceneCamera", translation=[0.0, 0.95, 2.0], camera=0)
        ],
        cameras=[Camera(type="perspective", perspective=Perspective(yfov=0.785398, znear=0.01, zfar=100.0))],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[]
    )
    ctx = ConvertCtx(gltf, bin_blob)
    ctx.model_root_idx = 1
    ctx.main_camera_node_idx = 2

    head = root.find('head')
    if head is not None:
        extras = {m.get('name'): m.get('content') for m in head.findall('meta') if m.get('name') and m.get('content')}
        if extras: gltf.asset.extras = {"X3D_Metadata": extras}

    scene_elem = root.find('Scene')
    scene_root = scene_elem if scene_elem is not None else root
    main_scope = Scope(root, scene_root, os.path.dirname(main_path), '', os.path.basename(main_path))
    ctx.scopes.append(main_scope)
    ctx.load_stack.append(main_path)

    traverse_x3d_node(main_scope.content, ctx.model_root_idx, ctx, main_scope, None)

    _finalize_bone_pick_targets(ctx)
    generate_focus_and_reset_animations(ctx)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)
    gltf_dict = to_plain(gltf)
    if ctx.mat_list: gltf_dict['materials'] = ctx.mat_list

    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [
            to_plain(p) for p in mesh_obj.primitives 
            if (isinstance(p, dict) and p.get('attributes')) or getattr(p, 'attributes', None)
        ]

    for anim_dict in gltf_dict.get('animations', []):
        dur = anim_dict.get('extras', {}).get('duration', 1.0)
        anim_dict.setdefault('extensions', {})['KHR_interactivity'] = {"maxTime": dur}

    interactivity_data = build_khr_interactivity(ctx)
    if interactivity_data:
        gltf_dict.setdefault('extensions', {})['KHR_interactivity'] = interactivity_data
        for ext in ("KHR_interactivity", "KHR_node_selectability", "KHR_node_hoverability"):
            gltf_dict.setdefault('extensionsUsed', [])
            if ext not in gltf_dict['extensionsUsed']:
                gltf_dict['extensionsUsed'].append(ext)

    write_glb(gltf_dict, bin_blob, glb_filepath)
    size_kb = os.path.getsize(glb_filepath) / 1024
    n_pick = sum(1 for b in ctx.interactive_bones if b.get("pickable"))
    print(f"  OK: {glb_filepath} ({size_kb:.1f} KB) | nodes={len(gltf_dict.get('nodes', []))} | "
          f"interactive_bones={len(ctx.interactive_bones)} (pickable={n_pick}, no-mesh={len(ctx.interactive_bones)-n_pick})")
    return True

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        in_f = sys.argv[1]
        out_f = sys.argv[2] if len(sys.argv) > 2 else os.path.splitext(in_f)[0] + ".glb"
        convert_x3d_to_glb(in_f, out_f)
    else:
        base = "/home/yottzumm/www.web3d.org/x3d/content/examples/HumanoidAnimation/Bones"
        convert_x3d_to_glb(f"{base}/pelvis.x3d", "pelvis.glb")
        convert_x3d_to_glb(f"{base}/AllBonesJohn.x3d", "AllBonesJohn.glb")
        convert_x3d_to_glb(f"{base}/AllBonesCollection.x3d", "AllBonesCollection.glb")
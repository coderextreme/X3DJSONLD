# --- START OF FILE x3d_to_binary.py ---

"""
x3d_to_binary.py
X3D → glTF 2.0 Binary (.glb) converter.

Features Expanded:
  • Geometry: IndexedFaceSet, IndexedTriangleSet, TriangleSet, Box, Coordinate, TextureCoordinate, Shape.
  • Text Support: Rasterizes <Text> and <FontStyle> to textured glTF quads (Requires PIL).
  • Materials & Textures: Resolves Appearance, Material, and embeds ImageTexture.
  • MFString Parsing: Correctly parses X3D multi-quoted strings for URLs and Text.
  • Missing Image Fallback: Embeds a 1x1 placeholder texture if files are missing.
  • Multi-URL Fallbacks: Tries successive URLs in MFStrings if a texture or inline file is missing.
  • Lexical DEF/USE Scoping: Every Inline has isolated DEF dictionaries as per X3D Spec.
  • IMPORT / EXPORT: Resolves bridged DEFs across scopes.
  • Shape-Injected Geometry: Handles <InlineGeometry> acting as a geometry source inside <Shape>.
  • Context-Aware Paths: Handles relative texture paths for Inlines loaded from sub-directories.
  • Validator Compliant: Fixes instant-cut animations and missing TEXCOORD_0 arrays automatically.
  • Morph Targets: HAnimDisplacer and CoordinateInterpolator mapped dynamically.

Citation: https://github.com/gonnavis/glpower
"""

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, urllib.request, math, mimetypes, base64, re
from pygltflib import *

# Module-level map from id(Element) -> X3DScope.
_element_scope_map: dict = {}

try:
    from PIL import Image as PILImage, ImageDraw, ImageFont
    HAS_PIL = True
except ImportError:
    HAS_PIL = False

# ---------------------------------------------------------------------------
# Low-level helpers
# ---------------------------------------------------------------------------

def strip_namespaces(node):
    if '}' in node.tag: node.tag = node.tag.split('}', 1)[1]
    for k in list(node.attrib.keys()):
        if '}' in k: node.attrib[k.split('}', 1)[1]] = node.attrib.pop(k)
    for child in node: strip_namespaces(child)

def parse_mfstring(val_str):
    if not val_str: return []
    matches = re.findall(r'"([^"]*)"|\'([^\']*)\'', val_str)
    if matches: return [m[0] if m[0] else m[1] for m in matches]
    return val_str.split()

def parse_array(val_str, type_cast=float, default=None):
    if val_str is None: return default if default is not None else[]
    if isinstance(val_str, (list, tuple)): return [type_cast(v) for v in val_str]
    val_str = val_str.strip()
    if not val_str: return default if default is not None else[]
    return [type_cast(v) for v in val_str.replace(',', ' ').split()]

def parse_x3d_indices(index_str):
    raw = parse_array(index_str, int)
    polys, current = [],[]
    for idx in raw:
        if idx == -1:
            if current: polys.append(current)
            current =[]
        else:
            current.append(idx)
    if current: polys.append(current)
    return polys

def to_plain(obj):
    if obj is None: return None
    if isinstance(obj, (bool, int, float, str)): return obj
    if isinstance(obj, (list, tuple)): return[to_plain(v) for v in obj if v is not None]
    if isinstance(obj, dict): return {k: to_plain(v) for k, v in obj.items() if v is not None}
    if hasattr(obj, '__dataclass_fields__'):
        return {k: to_plain(getattr(obj, k)) for k in obj.__dataclass_fields__ if getattr(obj, k) not in (None,[])}
    if hasattr(obj, '__dict__'):
        return {k: to_plain(v) for k, v in obj.__dict__.items() if not k.startswith('_') and v not in (None,[])}
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
    if length < 1e-8: return[0.0, 0.0, 0.0, 1.0]
    return[(x/length)*s, (y/length)*s, (z/length)*s, math.cos(angle / 2.0)]

def dir_to_quat(d):
    norm = math.sqrt(d[0]**2 + d[1]**2 + d[2]**2)
    if norm < 1e-6: return[0.0, 0.0, 0.0, 1.0]
    dx, dy, dz = d[0]/norm, d[1]/norm, d[2]/norm
    if dz < -0.99999: return[0.0, 0.0, 0.0, 1.0]
    if dz > 0.99999:  return[0.0, 1.0, 0.0, 0.0]
    s = math.sqrt((1.0 - dz) * 2.0)
    return[dy / s, -dx / s, 0.0, s / 2.0]

def compute_normals(positions, indices, ccw=True):
    normals = np.zeros_like(positions, dtype=np.float64)
    tris = indices.reshape(-1, 3).astype(np.int64)
    v0, v1, v2 = positions[tris[:, 0]], positions[tris[:, 1]], positions[tris[:, 2]]
    face_normals = np.cross(v1 - v0, v2 - v0)
    if not ccw: face_normals = -face_normals
    for i in range(3): np.add.at(normals, tris[:, i], face_normals)
    norms = np.linalg.norm(normals, axis=1, keepdims=True)
    bad_norms = (norms < 1e-10).flatten()
    normals[bad_norms] =[0.0, 1.0, 0.0]
    norms[bad_norms] = 1.0
    return (normals / norms).astype(np.float32)

def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target=None, add_min_max=False):
    off, length = append_to_buffer(bin_blob, data.tobytes())
    view_args = {'buffer': 0, 'byteOffset': off, 'byteLength': length}
    if target is not None: view_args['target'] = target
    gltf.bufferViews.append(BufferView(**view_args))
    min_v = max_v = None
    if add_min_max and len(data) > 0:
        if data.ndim == 1: min_v, max_v = [float(data.min())], [float(data.max())]
        else: min_v, max_v = [float(x) for x in data.min(axis=0)],[float(x) for x in data.max(axis=0)]
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

# ---------------------------------------------------------------------------
# Scoping & Resolution (DEF, USE, IMPORT, EXPORT)
# ---------------------------------------------------------------------------

class X3DScope:
    def __init__(self, root, base_path):
        self.root = root
        self.base_path = base_path
        self.def_map = {}
        self.export_map = {}
        self.inline_exports = {}

def resolve_use(node):
    if node is not None and node.get('USE') and id(node) in _element_scope_map:
        return _element_scope_map[id(node)].def_map.get(node.get('USE'), node)
    return node

def parse_x3d_scope_tree(root, base_path, inline_cache, scopes_list):
    strip_namespaces(root)
    scope = X3DScope(root, base_path)
    scopes_list.append(scope)

    for el in root.iter():
        _element_scope_map[id(el)] = scope
        if el.get('DEF'): scope.def_map[el.get('DEF')] = el

    for inl in root.iter():
        if inl.tag in ('Inline', 'InlineGeometry'):
            url_str = inl.get('url', '')
            child_scope, frag = load_scope_from_url(url_str, base_path, inline_cache, scopes_list)
            if child_scope:
                inline_cache[id(inl)] = (child_scope, frag)
                inl_def = inl.get('DEF')
                if inl_def: scope.inline_exports[inl_def] = child_scope.export_map

    for exp in root.iter('EXPORT'):
        loc, asn = exp.get('localDEF'), exp.get('AS', exp.get('localDEF'))
        if loc in scope.def_map: scope.export_map[asn] = scope.def_map[loc]

    for imp in root.iter('IMPORT'):
        inl_def, exp_def = imp.get('inlineDEF'), imp.get('exportedDEF')
        asn = imp.get('AS', exp_def)
        if inl_def in scope.inline_exports:
            imported_node = scope.inline_exports[inl_def].get(exp_def)
            if imported_node is not None: scope.def_map[asn] = imported_node

    return scope

def load_scope_from_url(url_str, current_base_path, inline_cache, scopes_list):
    urls = parse_mfstring(url_str)
    for i, url in enumerate(urls):
        file_url, frag = (url.split('#', 1) if '#' in url else (url, None))
        is_http = file_url.startswith('http')
        local = os.path.join(current_base_path, file_url.replace('\\', '/')) if not is_http else file_url

        try:
            if is_http:
                print(f"    Fetching remote X3D: {file_url}")
                req = urllib.request.Request(file_url, headers={'User-Agent': 'Mozilla/5.0'})
                with urllib.request.urlopen(req, timeout=5) as r:
                    ext_root = ET.fromstring(r.read())
                ext_base = os.path.dirname(file_url)
            elif os.path.exists(local):
                ext_root = ET.parse(local).getroot()
                ext_base = os.path.dirname(local)
            else:
                ext_root = None

            if ext_root is not None:
                return parse_x3d_scope_tree(ext_root, ext_base, inline_cache, scopes_list), frag
        except Exception as e:
            print(f"    Failed loading external X3D '{local}': {e}")
        if i < len(urls) - 1: print(f"    Fallback: '{local}' not loaded. Trying next URL...")

    return None, None

# ---------------------------------------------------------------------------
# Materials, Textures, and Primitives
# ---------------------------------------------------------------------------

def add_raw_image(gltf, bin_blob, img_bytes, mime="image/png"):
    off, length = append_to_buffer(bin_blob, img_bytes)
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length))
    gltf.images.append(Image(bufferView=len(gltf.bufferViews)-1, mimeType=mime))
    gltf.textures.append(Texture(source=len(gltf.images)-1))
    return len(gltf.textures) - 1

def embed_texture(url_str, base_path, gltf, bin_blob):
    urls = parse_mfstring(url_str)
    data, mime = None, "image/jpeg"

    for i, u in enumerate(urls):
        u = u.strip().rstrip(',')
        if not u: continue

        if u.startswith('data:image'):
            try:
                head, b64data = u.split(',', 1)
                data, mime = base64.b64decode(b64data), head.split(';')[0].replace('data:', '')
                break
            except: continue

        local = os.path.join(base_path, u.replace('\\', '/'))
        if os.path.exists(local):
            with open(local, 'rb') as f: data = f.read()
            mime = mimetypes.guess_type(u)[0] or "image/jpeg"
            break
        elif u.startswith('http'):
            try:
                req = urllib.request.Request(u, headers={'User-Agent': 'Mozilla/5.0'})
                with urllib.request.urlopen(req, timeout=5) as r:
                    data, mime = r.read(), r.info().get_content_type() or mimetypes.guess_type(u)[0] or "image/jpeg"
                break
            except: pass
        if i < len(urls) - 1: print(f"    Fallback: '{u}' not found. Trying next URL...")

    if not data:
        data = base64.b64decode("iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAQAAAC1HAwCAAAAC0lEQVR42mP8/x8AAwMCAO+ip1sAAAAASUVORK5CYII=")
        mime = "image/png"

    return add_raw_image(gltf, bin_blob, data, mime)

def resolve_material(app_node, mat_list, gltf, bin_blob):
    app_node = resolve_use(app_node)
    if app_node is None: return None

    mat_node = resolve_use(app_node.find('.//Material'))
    img_node = resolve_use(app_node.find('.//ImageTexture'))
    if mat_node is None and img_node is None: return None

    def rgb(attr, default): return parse_array(mat_node.get(attr, '') if mat_node is not None else '', default=list(default))
    diffuse = rgb('diffuseColor', [0.8, 0.8, 0.8])
    transparency = float(mat_node.get('transparency', '0') if mat_node is not None else 0)
    roughness = max(0.0, min(1.0, 1.0 - float(mat_node.get('shininess', '0.2') if mat_node is not None else 0.2)))
    alpha = max(0.0, min(1.0, 1.0 - transparency))

    mat_dict = {
        "name": (mat_node.get('DEF', 'X3DMat') if mat_node is not None else "TexturedMat"),
        "doubleSided": True,
        "pbrMetallicRoughness": {
            "baseColorFactor":[max(0., min(1., c)) for c in diffuse[:3]] + [round(alpha, 5)],
            "metallicFactor": 0.0, "roughnessFactor": roughness
        }
    }

    if img_node is not None:
        tex_idx = embed_texture(img_node.get('url', ''), _element_scope_map[id(img_node)].base_path, gltf, bin_blob)
        if tex_idx is not None:
            mat_dict["pbrMetallicRoughness"]["baseColorTexture"] = {"index": tex_idx}
            mat_dict["pbrMetallicRoughness"]["baseColorFactor"] =[1.0, 1.0, 1.0, round(alpha, 5)]

    if transparency > 0.01: mat_dict["alphaMode"] = "BLEND"
    elif transparency > 0:  mat_dict["alphaMode"] = "MASK"; mat_dict["alphaCutoff"] = 0.5

    mat_list.append(mat_dict)
    return len(mat_list) - 1

# ---------------------------------------------------------------------------
# Mesh Primitives & Morph Targets
# ---------------------------------------------------------------------------

def box_to_ifs(box_node):
    hx, hy, hz =[s/2.0 for s in parse_array(box_node.get('size', '2 2 2'))]
    p = [[ hx,  hy,  hz], [-hx,  hy,  hz], [-hx, -hy,  hz],[ hx, -hy,  hz],
         [ hx,  hy, -hz],[ hx, -hy, -hz], [-hx, -hy, -hz], [-hx,  hy, -hz],
         [ hx,  hy,  hz], [ hx, -hy,  hz],[ hx, -hy, -hz], [ hx,  hy, -hz],[-hx,  hy,  hz], [-hx,  hy, -hz], [-hx, -hy, -hz],[-hx, -hy,  hz],
         [ hx,  hy,  hz],[ hx,  hy, -hz], [-hx,  hy, -hz], [-hx,  hy,  hz],
         [ hx, -hy,  hz], [-hx, -hy,  hz],[-hx, -hy, -hz], [ hx, -hy, -hz]
    ]
    u = [[1,1],[0,1],[0,0],[1,0]] * 6
    n = [[0,0,1]]*4 + [[0,0,-1]]*4 + [[1,0,0]]*4 + [[-1,0,0]]*4 + [[0,1,0]]*4 + [[0,-1,0]]*4
    ifs = ET.Element('IndexedFaceSet', {'coordIndex': ' '.join([f"{i*4} {i*4+1} {i*4+2} {i*4+3} -1" for i in range(6)])})
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in p])})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join([f"{v[0]} {v[1]}" for v in u])})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in n])})
    return ifs

def process_mesh_primitives(geom_nodes, gltf, bin_blob, mat_list, current_displacers, global_inverse_routes, mesh_to_mtd):
    primitives =[]
    mtd_list =[]
    mtd_list_initialized = False

    for node in geom_nodes:
        is_faceset = node.tag in ('IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet')
        facesets = ([node] if is_faceset else
                    node.findall('.//IndexedFaceSet') +
                    node.findall('.//IndexedTriangleSet') +
                    node.findall('.//TriangleSet'))
        if not is_faceset: facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])

        app_node = None if is_faceset else node.find('.//Appearance')

        for face_set in facesets:
            coord = resolve_use(face_set.find('.//Coordinate'))
            if coord is None: continue

            raw_pos = parse_array(coord.get('point', ''))
            if not raw_pos: continue
            pos_arr = np.array(raw_pos, dtype=np.float32).reshape(-1, 3)

            # --- Morph Targets Definitions ---
            if not mtd_list_initialized:
                for disp in current_displacers:
                    mtd_list.append({'type': 'displacer', 'node': disp})
                for src_node, src_fld in global_inverse_routes.get((id(coord), 'set_point'),[]) + global_inverse_routes.get((id(coord), 'point'),[]):
                    if src_node.tag == 'CoordinateInterpolator':
                        raw_keys = parse_array(src_node.get('key', ''), float)
                        raw_kvs = parse_array(src_node.get('keyValue', ''), float)
                        expected_floats = len(pos_arr) * 3
                        if expected_floats > 0:
                            num_frames = len(raw_kvs) // expected_floats
                            for i in range(min(len(raw_keys), num_frames)):
                                mtd_list.append({'type': 'coord_interp', 'node': src_node, 'key_idx': i})
                mtd_list_initialized = True

            # --- Texture Coordinates & Normals ---
            tex_coord = resolve_use(face_set.find('.//TextureCoordinate'))
            if tex_coord is not None:
                uv_arr = np.array(parse_array(tex_coord.get('point', '')), dtype=np.float32).reshape(-1, 2)
                if len(uv_arr) > 0: uv_arr[:, 1] = 1.0 - uv_arr[:, 1]
            else: uv_arr =[]

            norm_node = resolve_use(face_set.find('.//Normal'))
            norm_arr = np.array(parse_array(norm_node.get('vector', '')), dtype=np.float32).reshape(-1, 3) if norm_node is not None else[]

            # --- Indices ---
            if face_set.tag == 'TriangleSet':
                pos_polys = [[i, i+1, i+2] for i in range(0, len(pos_arr) - 2, 3)]
                tex_polys = norm_polys = pos_polys
            else:
                pos_polys = parse_x3d_indices(face_set.get('coordIndex') or face_set.get('index', ''))
                tex_polys = parse_x3d_indices(face_set.get('texCoordIndex', '')) if face_set.get('texCoordIndex') else pos_polys
                norm_polys = parse_x3d_indices(face_set.get('normalIndex', '')) if face_set.get('normalIndex') else pos_polys

            unified_verts, p_idx_to_gltf_v_idx, out_positions, out_uvs, out_normals, unified_indices = {}, {}, [], [], [],[]

            for pi, poly in enumerate(pos_polys):
                t_poly = tex_polys[pi] if pi < len(tex_polys) else poly
                n_poly = norm_polys[pi] if pi < len(norm_polys) else poly

                for i in range(1, len(poly) - 1):
                    for j in (0, i, i+1):
                        p_idx = poly[j]
                        t_idx = t_poly[j] if j < len(t_poly) else p_idx
                        n_idx = n_poly[j] if j < len(n_poly) else p_idx

                        v_tuple = (p_idx, t_idx, n_idx)
                        if v_tuple not in unified_verts:
                            v_idx = len(out_positions)
                            unified_verts[v_tuple] = v_idx
                            p_idx_to_gltf_v_idx.setdefault(p_idx, []).append(v_idx)
                            out_positions.append(pos_arr[p_idx] if p_idx < len(pos_arr) else [0,0,0])
                            if len(uv_arr): out_uvs.append(uv_arr[t_idx] if t_idx < len(uv_arr) else [0,0])
                            if len(norm_arr): out_normals.append(norm_arr[n_idx] if n_idx < len(norm_arr) else[0,1,0])
                        unified_indices.append(unified_verts[v_tuple])

            if not unified_indices: continue

            positions = np.array(out_positions, dtype=np.float32)
            indices = np.array(unified_indices, dtype=np.uint32)
            normals = np.array(out_normals, dtype=np.float32) if out_normals else compute_normals(positions, indices, ccw=(face_set.get('ccw', 'true').strip().lower() not in ('false', '0')))
            idx_comp = UNSIGNED_SHORT if indices.max() < 65536 else UNSIGNED_INT

            prim_attrs = {"POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True),
                          "NORMAL":   add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, target=ARRAY_BUFFER)}
            if len(out_uvs) > 0:
                prim_attrs["TEXCOORD_0"] = add_accessor(gltf, bin_blob, np.array(out_uvs, dtype=np.float32), VEC2, FLOAT, target=ARRAY_BUFFER)

            # --- Target Accessor Generation ---
            targets =[]
            if mtd_list:
                for mtd in mtd_list:
                    delta_pos = np.zeros_like(positions)
                    if mtd['type'] == 'displacer':
                        c_idx = parse_array(mtd['node'].get('coordIndex', ''), int)
                        raw_disps = parse_array(mtd['node'].get('displacements', ''), float)
                        valid_len = (len(raw_disps) // 3) * 3
                        disps_np = np.array(raw_disps[:valid_len], dtype=np.float32).reshape(-1, 3)
                        for i, o_idx in enumerate(c_idx):
                            if i < len(disps_np) and o_idx in p_idx_to_gltf_v_idx:
                                for v_idx in p_idx_to_gltf_v_idx[o_idx]: delta_pos[v_idx] = disps_np[i]
                    elif mtd['type'] == 'coord_interp':
                        raw_kvs = parse_array(mtd['node'].get('keyValue', ''), float)
                        num_verts = len(pos_arr)
                        expected_floats = num_verts * 3
                        if expected_floats > 0:
                            start_idx = mtd['key_idx'] * expected_floats
                            end_idx = start_idx + expected_floats
                            if end_idx <= len(raw_kvs):
                                t_pos = np.array(raw_kvs[start_idx:end_idx], dtype=np.float32).reshape(num_verts, 3)
                                for o_idx, v_idxs in p_idx_to_gltf_v_idx.items():
                                    if o_idx < num_verts:
                                        delta = t_pos[o_idx] - pos_arr[o_idx]
                                        for v_idx in v_idxs: delta_pos[v_idx] = delta
                    # Note: target=None is correct for glTF Morph Targets (they don't use ARRAY_BUFFER)
                    targets.append({"POSITION": add_accessor(gltf, bin_blob, delta_pos, VEC3, FLOAT, target=None, add_min_max=True)})

            mat_idx = resolve_material(app_node, mat_list, gltf, bin_blob)
            if mat_idx is not None and "baseColorTexture" in mat_list[mat_idx].get("pbrMetallicRoughness", {}):
                if "TEXCOORD_0" not in prim_attrs:
                    prim_attrs["TEXCOORD_0"] = add_accessor(gltf, bin_blob, np.zeros((len(positions), 2), dtype=np.float32), VEC2, FLOAT, target=ARRAY_BUFFER)

            prim_dict = {"indices": add_accessor(gltf, bin_blob, indices.astype(np.uint16) if idx_comp == UNSIGNED_SHORT else indices, SCALAR, idx_comp, target=ELEMENT_ARRAY_BUFFER, add_min_max=True),
                         "attributes": prim_attrs}
            if mat_idx is not None: prim_dict["material"] = mat_idx
            if targets: prim_dict["targets"] = targets

            primitives.append(prim_dict)

    if not primitives: return None
    mesh_obj = Mesh(primitives=primitives)
    if mtd_list:
        mesh_obj.weights = [float(mtd['node'].get('weight', '0')) if mtd['type'] == 'displacer' else 0.0 for mtd in mtd_list]

    gltf.meshes.append(mesh_obj)
    mesh_idx = len(gltf.meshes) - 1
    if mtd_list: mesh_to_mtd[mesh_idx] = mtd_list
    return mesh_idx

def get_local_displacers(node):
    disps =[]
    for child in node:
        if child.tag == 'HAnimDisplacer': disps.append(child)
        elif child.tag not in ('HAnimSegment', 'HAnimJoint', 'HAnimHumanoid'):
            disps.extend(get_local_displacers(child))
    return disps

def process_text_primitives(text_node, app_node, gltf, bin_blob, mat_list):
    if not HAS_PIL: return None
    lines = parse_mfstring(text_node.get('string', ''))
    if not lines: return None

    fs_node = resolve_use(text_node.find('.//FontStyle'))
    size, family, justify = 1.0, "SERIF", ["BEGIN", "FIRST"]
    if fs_node is not None:
        size = float(fs_node.get('size', 1.0))
        family_arr = parse_mfstring(fs_node.get('family', '"SERIF"'))
        if family_arr: family = family_arr[0]
        justify_arr = parse_mfstring(fs_node.get('justify', '"BEGIN" "FIRST"'))
        if justify_arr: justify = justify_arr

    font_size_px = max(10, int(size * 128))
    font = None
    try:
        for fn in (["arial.ttf"] if "SANS" in family.upper() else ["times.ttf"]):
            try: font = ImageFont.truetype(fn, font_size_px); break
            except: pass
    except: pass
    if not font: font = ImageFont.load_default()

    d = ImageDraw.Draw(PILImage.new("RGBA", (1, 1), (0,0,0,0)))
    max_w, total_h, line_heights = 0, 0,[]
    for line in lines:
        try: bbox = d.textbbox((0,0), line, font=font)
        except: bbox = (0, 0, len(line)*font_size_px*0.6, font_size_px)
        w, h = bbox[2] - bbox[0], bbox[3] - bbox[1] + (font_size_px * 0.2)
        max_w = max(max_w, w); line_heights.append(h); total_h += h

    width, height = max(int(max_w), 1), max(int(total_h), 1)
    img = PILImage.new("RGBA", (width, height), (0,0,0,0))
    d = ImageDraw.Draw(img)
    y = 0
    for i, line in enumerate(lines):
        d.text((0, y), line, font=font, fill=(255, 255, 255, 255)); y += line_heights[i]

    import io
    img_io = io.BytesIO()
    img.save(img_io, format="PNG")
    tex_idx = add_raw_image(gltf, bin_blob, img_io.getvalue(), "image/png")

    aspect = float(width) / float(height)
    quad_h, quad_w = size * len(lines), size * len(lines) * aspect
    jx = justify[0].upper() if len(justify) > 0 else "BEGIN"
    x0, x1 = (-quad_w/2, quad_w/2) if jx == "MIDDLE" else (-quad_w, 0) if jx == "END" else (0, quad_w)
    jy = justify[1].upper() if len(justify) > 1 else "FIRST"
    y0, y1 = (-quad_h/2, quad_h/2) if jy == "MIDDLE" else (-quad_h, 0)

    pos = np.array([[x0,y0,0], [x1,y0,0], [x1,y1,0],[x0,y1,0]], dtype=np.float32)
    indices = np.array([0, 1, 2, 0, 2, 3], dtype=np.uint16)
    prim_attrs = {
        "POSITION": add_accessor(gltf, bin_blob, pos, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True),
        "NORMAL":   add_accessor(gltf, bin_blob, np.array([[0,0,1]] * 4, dtype=np.float32), VEC3, FLOAT, target=ARRAY_BUFFER),
        "TEXCOORD_0": add_accessor(gltf, bin_blob, np.array([[0,1], [1,1], [1,0], [0,0]], dtype=np.float32), VEC2, FLOAT, target=ARRAY_BUFFER)
    }

    mat_idx = resolve_material(app_node, mat_list, gltf, bin_blob)
    if mat_idx is None:
        mat_list.append({"name": "TextMat", "doubleSided": True, "alphaMode": "BLEND",
                         "pbrMetallicRoughness": {"baseColorFactor":[1,1,1,1], "metallicFactor": 0.0, "roughnessFactor": 1.0}})
        mat_idx = len(mat_list) - 1

    mat_list[mat_idx]["alphaMode"] = "BLEND"
    mat_list[mat_idx].setdefault("pbrMetallicRoughness", {})["baseColorTexture"] = {"index": tex_idx}
    gltf.meshes.append(Mesh(primitives=[{"indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, target=ELEMENT_ARRAY_BUFFER, add_min_max=True), "attributes": prim_attrs, "material": mat_idx}]))
    return len(gltf.meshes) - 1

# ---------------------------------------------------------------------------
# DOM Traversal & Scene Graph
# ---------------------------------------------------------------------------

def traverse_x3d_node(xml_node, parent_idx, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache, current_displacers, global_inverse_routes, node_to_morph_targets):
    logic_tags = {'BooleanFilter', 'BooleanSequencer', 'NavigationInfo', 'ProximitySensor', 'TimeTrigger', 'TouchSensor'}
    if xml_node.tag in logic_tags: return

    if xml_node.tag == 'Switch':
        switch_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=xml_node.get('DEF', f"Switch_{switch_idx}"), children=[]))
        element_to_gltf_idx[id(xml_node)] = switch_idx

        if parent_idx is not None:
            if gltf.nodes[parent_idx].children is None:
                gltf.nodes[parent_idx].children = []
            gltf.nodes[parent_idx].children.append(switch_idx)

        which_choice = int(xml_node.get('whichChoice', '-1'))
        choices =[c for c in xml_node if c.tag not in ('ROUTE', 'IS') and not c.tag.startswith('Metadata')]
        if 0 <= which_choice < len(choices):
            traverse_x3d_node(choices[which_choice], switch_idx, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache, current_displacers, global_inverse_routes, node_to_morph_targets)
        return

    if xml_node.tag in ('Inline', 'InlineGeometry'):
        if id(xml_node) in inline_cache:
            child_scope, frag = inline_cache[id(xml_node)]
            target = child_scope.def_map.get(frag) if frag else child_scope.root
            if target is not None:
                traverse_x3d_node(target, parent_idx, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache, current_displacers, global_inverse_routes, node_to_morph_targets)
        return

    if xml_node.tag == 'Viewpoint':
        cam_idx = len(gltf.cameras)
        gltf.cameras.append(Camera(type="perspective", perspective=Perspective(yfov=float(xml_node.get('fieldOfView', '0.785398')), znear=0.1, zfar=1000.0)))
        node_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=xml_node.get('DEF', f"Viewpoint_{cam_idx}"), translation=parse_array(xml_node.get('position', '0 0 10')), rotation=axis_angle_to_quat(*parse_array(xml_node.get('orientation', '0 0 1 0'))), camera=cam_idx))

        if parent_idx is not None:
            if gltf.nodes[parent_idx].children is None:
                gltf.nodes[parent_idx].children = []
            gltf.nodes[parent_idx].children.append(node_idx)
        return

    if xml_node.tag == 'HAnimSegment':
        current_displacers = get_local_displacers(xml_node)

    if xml_node.tag in {'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite'}:
        t = np.array(parse_array(xml_node.get('translation'), default=[0,0,0]))
        c = np.array(parse_array(xml_node.get('center'), default=[0,0,0]))
        outer_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=xml_node.get('DEF', f"{xml_node.tag}_{outer_idx}"),
            translation=[float(x) for x in (t + c)],
            rotation=axis_angle_to_quat(*parse_array(xml_node.get('rotation'), default=[0,1,0,0])),
            scale=parse_array(xml_node.get('scale'), default=[1,1,1]), children=[]
        ))

        element_to_gltf_idx[id(xml_node)] = outer_idx
        element_to_center[id(xml_node)] = c
        if parent_idx is not None:
            if gltf.nodes[parent_idx].children is None:
                gltf.nodes[parent_idx].children = []
            gltf.nodes[parent_idx].children.append(outer_idx)

        inner_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=f"{xml_node.get('DEF') or xml_node.tag}_Inner", translation=[float(x) for x in -c], children=[]))
        gltf.nodes[outer_idx].children.append(inner_idx)

        for child in xml_node:
            traverse_x3d_node(child, inner_idx, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache, current_displacers, global_inverse_routes, node_to_morph_targets)

    elif xml_node.tag == 'Shape':
        for ig in xml_node.findall('.//InlineGeometry') + xml_node.findall('.//Inline'):
            if id(ig) in inline_cache:
                child_scope, frag = inline_cache[id(ig)]
                if frag and frag in child_scope.def_map: xml_node.append(child_scope.def_map[frag])
                elif not frag: xml_node.append(child_scope.root)

        text_node = xml_node.find('.//Text')
        mesh_to_mtd = {}
        if text_node is not None:
            mesh_idx = process_text_primitives(text_node, xml_node.find('.//Appearance'), gltf, bin_blob, mat_list)
        else:
            mesh_idx = process_mesh_primitives([xml_node], gltf, bin_blob, mat_list, current_displacers, global_inverse_routes, mesh_to_mtd)

        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            gltf.nodes.append(Node(name=xml_node.get('DEF', f"Shape_{shape_idx}"), mesh=mesh_idx))
            if parent_idx is not None:
                if gltf.nodes[parent_idx].children is None:
                    gltf.nodes[parent_idx].children = []
                gltf.nodes[parent_idx].children.append(shape_idx)
            if mesh_idx in mesh_to_mtd:
                node_to_morph_targets[shape_idx] = mesh_to_mtd[mesh_idx]

    else:
        for child in xml_node: traverse_x3d_node(child, parent_idx, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache, current_displacers, global_inverse_routes, node_to_morph_targets)

# ---------------------------------------------------------------------------
# Animations & Morph Weights Analysis
# ---------------------------------------------------------------------------

def get_interp_weights(keys, k_val):
    if not keys: return {}
    if k_val <= keys[0]: return {0: 1.0}
    if k_val >= keys[-1]: return {len(keys)-1: 1.0}
    for i in range(len(keys)-1):
        if keys[i] <= k_val <= keys[i+1]:
            denom = keys[i+1] - keys[i]
            if denom == 0: return {i: 1.0}
            f = (k_val - keys[i]) / denom
            return {i: 1.0 - f, i+1: f}
    return {}

def evaluate_scalar_interp(interp, k_val):
    keys, kvs = parse_array(interp.get('key', ''), float), parse_array(interp.get('keyValue', ''), float)
    if not keys or not kvs: return 0.0
    weights = get_interp_weights(keys, k_val)
    return sum(kvs[idx] * w for idx, w in weights.items() if idx < len(kvs))

def find_driving_timesensor(node_id, global_inverse_routes, visited=None):
    """Recursively walks upstream routes to find the originating TimeSensor."""
    if visited is None: visited = set()
    if node_id in visited: return None
    visited.add(node_id)

    for (t_id, t_fld), routes in global_inverse_routes.items():
        if t_id == node_id:
            for src_node, src_fld in routes:
                if src_node.tag == 'TimeSensor': return src_node
                ts = find_driving_timesensor(id(src_node), global_inverse_routes, visited)
                if ts is not None: return ts
    return None

def convert_animations(scopes_list, gltf, bin_blob, element_to_gltf_idx, element_to_center, global_inverse_routes, node_to_morph_targets):
    for scope in scopes_list:
        routes = {}
        for route in scope.root.iter('ROUTE'):
            f_el, t_el = scope.def_map.get(route.get('fromNode')), scope.def_map.get(route.get('toNode'))
            if f_el is not None and t_el is not None:
                routes.setdefault((id(f_el), route.get('fromField')),[]).append((id(t_el), route.get('toField')))

        all_interps = {id(n): n for tag in ('PositionInterpolator', 'OrientationInterpolator') for n in scope.root.iter(tag)}

        for ts in scope.root.iter('TimeSensor'):
            ts_id = id(ts)
            cycle = float(ts.get('cycleInterval', '1.0'))
            driven = [all_interps[t_id] for out_field in ('fraction_changed', 'cycleTime', 'time') for t_id, t_fld in routes.get((ts_id, out_field),[]) if t_fld == 'set_fraction' and t_id in all_interps]

            samplers, channels, seen_targets = [],[], set()
            for interp in driven:
                targets = routes.get((id(interp), 'value_changed'),[])
                keys = np.array(parse_array(interp.get('key', '')), dtype=np.float32) * cycle
                for k_idx in range(1, len(keys)):
                    if keys[k_idx] <= keys[k_idx-1]: keys[k_idx] = keys[k_idx-1] + 1e-5

                kv_raw = parse_array(interp.get('keyValue', ''))
                if not targets or len(keys) < 2 or not kv_raw: continue

                for (t_id, t_fld) in targets:
                    gltf_path = {'translation': 'translation', 'set_translation': 'translation', 'rotation': 'rotation', 'set_rotation': 'rotation'}.get(t_fld)
                    if not gltf_path or t_id not in element_to_gltf_idx: continue
                    node_idx = element_to_gltf_idx[t_id]
                    if (node_idx, gltf_path) in seen_targets: continue
                    seen_targets.add((node_idx, gltf_path))

                    if interp.tag == 'OrientationInterpolator':
                        valid_len = (len(kv_raw) // 4) * 4
                        if valid_len == 0: continue
                        vals = np.array([axis_angle_to_quat(*row) for row in np.array(kv_raw[:valid_len], dtype=np.float64).reshape(-1, 4)], dtype=np.float32)
                        out_type = VEC4
                    else:
                        valid_len = (len(kv_raw) // 3) * 3
                        if valid_len == 0: continue
                        vals = np.array(kv_raw[:valid_len], dtype=np.float32).reshape(-1, 3)
                        if gltf_path == 'translation' and t_id in element_to_center: vals += element_to_center[t_id]
                        out_type = VEC3

                    if len(vals) != len(keys): continue

                    acc_t = add_accessor(gltf, bin_blob, keys, SCALAR, FLOAT, target=None, add_min_max=True)
                    acc_v = add_accessor(gltf, bin_blob, vals, out_type, FLOAT, target=None, add_min_max=False)
                    samplers.append(AnimationSampler(input=acc_t, output=acc_v, interpolation="LINEAR"))
                    channels.append(AnimationChannel(sampler=len(samplers)-1, target=AnimationChannelTarget(node=node_idx, path=gltf_path)))

            if channels:
                ts_def = ts.get('DEF', f"TimeSensor_{ts_id}")
                gltf.animations.append(Animation(name=f"Anim_{ts_def}", samplers=samplers, channels=channels))

    # Convert Morph Weight Animations using recursive routing resolution
    for node_idx, mtd_list in node_to_morph_targets.items():
        driving_interps = set()
        for mtd in mtd_list:
            if mtd['type'] == 'coord_interp':
                driving_interps.add(mtd['node'])
            elif mtd['type'] == 'displacer':
                for src_node, fld in global_inverse_routes.get((id(mtd['node']), 'set_weight'),[]) + global_inverse_routes.get((id(mtd['node']), 'weight'),[]):
                    driving_interps.add(src_node)

        if not driving_interps: continue

        time_sensor = None
        for interp in driving_interps:
            ts = find_driving_timesensor(id(interp), global_inverse_routes)
            if ts is not None:
                time_sensor = ts
                break

        if time_sensor is None: continue

        cycle = float(time_sensor.get('cycleInterval', '1.0'))

        all_keys = set()
        for interp in driving_interps:
            for k in parse_array(interp.get('key', ''), float): all_keys.add(k)
        sorted_keys = sorted(list(all_keys))
        if len(sorted_keys) < 2: continue

        time_keys = np.array(sorted_keys, dtype=np.float32) * cycle

        weights_data =[]
        for k_val in sorted_keys:
            for mtd in mtd_list:
                w = 0.0
                if mtd['type'] == 'displacer':
                    anim_interp = next((src for src, fld in (global_inverse_routes.get((id(mtd['node']), 'set_weight'),[]) + global_inverse_routes.get((id(mtd['node']), 'weight'),[]))), None)
                    if anim_interp is not None and anim_interp.tag == 'ScalarInterpolator':
                        w = evaluate_scalar_interp(anim_interp, k_val)
                    else:
                        w = float(mtd['node'].get('weight', '0'))
                elif mtd['type'] == 'coord_interp':
                    w = get_interp_weights(parse_array(mtd['node'].get('key', ''), float), k_val).get(mtd['key_idx'], 0.0)
                weights_data.append(w)

        weights_array = np.array(weights_data, dtype=np.float32)

        acc_t = add_accessor(gltf, bin_blob, time_keys, SCALAR, FLOAT, target=None, add_min_max=True)
        acc_w = add_accessor(gltf, bin_blob, weights_array, SCALAR, FLOAT, target=None, add_min_max=False)

        ts_def = time_sensor.get('DEF', f"TimeSensor_{id(time_sensor)}")
        anim = next((a for a in gltf.animations if a.name == f"Anim_{ts_def}"), None)
        if not anim:
            anim = Animation(name=f"Anim_{ts_def}", samplers=[], channels=[])
            gltf.animations.append(anim)

        s_idx = len(anim.samplers)
        anim.samplers.append(AnimationSampler(input=acc_t, output=acc_w, interpolation="LINEAR"))
        anim.channels.append(AnimationChannel(sampler=s_idx, target=AnimationChannelTarget(node=node_idx, path="weights")))


def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    print(f"\nConverting: {x3d_filepath}")
    base_path = os.path.dirname(os.path.abspath(x3d_filepath))
    try: root = ET.parse(x3d_filepath).getroot()
    except Exception as e: print(f"  ERROR parsing X3D: {e}"); return

    bin_blob = bytearray()
    mat_list =[]

    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Advanced Converter", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[], cameras=[], images=[], textures=[]
    )

    head = root.find('head')
    if head is not None:
        extras = {m.get('name'): m.get('content') for m in head.findall('meta') if m.get('name') and m.get('content')}
        if extras: gltf.asset.extras = {"X3D_Metadata": extras}

    inline_cache, scopes_list = {},[]
    parse_x3d_scope_tree(root, base_path, inline_cache, scopes_list)

    global_inverse_routes, global_forward_routes = {}, {}
    for scope in scopes_list:
        for route in scope.root.iter('ROUTE'):
            f_str, f_fld = route.get('fromNode'), route.get('fromField')
            t_str, t_fld = route.get('toNode'), route.get('toField')
            f_el, t_el = scope.def_map.get(f_str), scope.def_map.get(t_str)
            if f_el is not None and t_el is not None:
                global_forward_routes.setdefault((id(f_el), f_fld),[]).append((t_el, t_fld))
                global_inverse_routes.setdefault((id(t_el), t_fld),[]).append((f_el, f_fld))

    element_to_gltf_idx, element_to_center, node_to_morph_targets = {}, {}, {}

    scene_node = root.find('.//Scene')
    if scene_node is None:
        scene_node = root

    traverse_x3d_node(scene_node, 0, gltf, bin_blob, mat_list, element_to_gltf_idx, element_to_center, inline_cache,[], global_inverse_routes, node_to_morph_targets)
    convert_animations(scopes_list, gltf, bin_blob, element_to_gltf_idx, element_to_center, global_inverse_routes, node_to_morph_targets)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)

    gltf_dict = to_plain(gltf)
    if mat_list: gltf_dict['materials'] = mat_list

    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes',[]), gltf.meshes):
        mesh_plain['primitives'] =[to_plain(p) for p in mesh_obj.primitives]

    lights, light_nodes = [],[]
    for dlight in root.findall('.//DirectionalLight'):
        if dlight.get('on', 'true').lower() in ('false', '0'): continue
        lights.append({"type": "directional", "color": parse_array(dlight.get('color', '1 1 1')), "intensity": float(dlight.get('intensity', '1.0'))})
        node = {"name": dlight.get('DEF', f"DirLight_{len(lights)-1}"), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}}
        rot = dir_to_quat(parse_array(dlight.get('direction', '0 0 -1')))
        if rot !=[0, 0, 0, 1]: node["rotation"] = rot
        light_nodes.append(node)

    if lights:
        gltf_dict.setdefault('extensionsUsed',[]).append('KHR_lights_punctual')
        gltf_dict.setdefault('extensions', {})['KHR_lights_punctual'] = {"lights": lights}
        start_idx = len(gltf_dict.get('nodes',[]))
        gltf_dict['nodes'].extend(light_nodes)
        gltf_dict['nodes'][0].setdefault('children',[]).extend(range(start_idx, start_idx + len(light_nodes)))

    write_glb(gltf_dict, bin_blob, glb_filepath)
    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath}  ({size_kb:.1f} KB) | nodes={len(gltf_dict.get('nodes',[]))} | meshes={len(gltf_dict.get('meshes',[]))} | animations={len(gltf_dict.get('animations',[]))}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        in_f  = sys.argv[1]
        out_f = sys.argv[2] if len(sys.argv) > 2 else os.path.splitext(in_f)[0] + ".glb"
        convert_x3d_to_glb(in_f, out_f)
    else:
        base = "C:/Users/jcarl/www.web3d.org/x3d/content/examples/HumanoidAnimation/Medical"
        convert_x3d_to_glb(f"{base}/LaughingUpperSkeleton.x3d",               "LaughingUpperSkeleton.glb")
        convert_x3d_to_glb(f"{base}/AnimatedAssembledHumanSkeleton.x3d", "AnimatedAssembledHumanSkeleton.glb")
        convert_x3d_to_glb(f"../../medicalbones/0scaled/0skeleton1AImapped.x3d", "0skeleton1.glb")
        convert_x3d_to_glb(f"{base}/../Bones/AllBonesLOA5Skeletons.x3d", "AllBonesLOA5Skeletons.glb")
        convert_x3d_to_glb(f"{base}/../FacialAnimation/JinFacsAu27MouthStretchMorpher.x3d", "JinFacsAu27MouthStretchMorpher.glb")
        convert_x3d_to_glb(f"../../ci2had/resources/JinMouthStretch.x3d", "JinMouthStretch.glb")
        convert_x3d_to_glb(f"../../ci2had/resources/CleanedYouClocks.x3d", "CleanedYouClocks.glb")

# --- END OF FILE x3d_to_binary.py ---

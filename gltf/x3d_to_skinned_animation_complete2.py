"""
x3d_to_binary.py
X3D → glTF 2.0 Binary (.glb) converter.

Features Expanded:
  • Geometry: IndexedFaceSet, IndexedTriangleSet, TriangleSet, Box, Coordinate, TextureCoordinate, Shape.
  • Text Support: Rasterizes <Text> and <FontStyle> to textured glTF quads (Requires PIL).
  • Materials & Textures: Resolves Appearance, Material, and embeds ImageTexture.
  • MFString Parsing: Correctly parses X3D multi-quoted strings for URLs and Text.
  • Missing Image Fallback: Embeds a 1x1 placeholder texture if files are missing.
  • DEF/USE Resolving: Fully resolves USE tags for all nodes.
  • XML Namespaces: Strips namespaces automatically to guarantee node discovery.
  • FULL HANIM SKINNING SUPPORT: HAnimHumanoid + HAnimJoint.skinCoordIndex / skinCoordWeight.
    • Builds glTF Skin with inverseBindMatrices (computed from bind-pose world transforms).
    • Aggregates per-vertex joint/weight data across all joints (normalizes, caps at 4 influences).
    • Adds JOINTS_0 + WEIGHTS_0 attributes + skin index.
  • FULL SKINNED ANIMATION SUPPORT: Translates and rotates joint *centers* correctly.
    • Dual-node pattern (outer = T+C, inner = -C) is preserved for rigid hierarchy.
    • All skinned meshes are re-parented to WorldRoot with identity transform.
    • This guarantees that animation of joint translation/rotation (around centers)
      deforms the skin exactly as in X3D viewers, without hierarchy offsets.
"""

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, urllib.request, urllib.parse, math, mimetypes, base64, re, gzip
from pygltflib import *

# Attempt to load Pillow for X3D Text rendering
try:
    from PIL import Image as PILImage, ImageDraw, ImageFont
    HAS_PIL = True
except ImportError:
    HAS_PIL = False

# ---------------------------------------------------------------------------
# Low-level helpers
# ---------------------------------------------------------------------------

def strip_namespaces(node):
    """Removes XML namespaces so standard tag searches (.find) don't fail silently."""
    if '}' in node.tag:
        node.tag = node.tag.split('}', 1)[1]
    for k in list(node.attrib.keys()):
        if '}' in k:
            node.attrib[k.split('}', 1)[1]] = node.attrib.pop(k)
    for child in node:
        strip_namespaces(child)

def parse_mfstring(val_str):
    """Parses X3D MFString e.g. '"string1" "string2"' into a list of strings."""
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

def dir_to_quat(d):
    norm = math.sqrt(d[0]**2 + d[1]**2 + d[2]**2)
    if norm < 1e-6: return [0.0, 0.0, 0.0, 1.0]
    dx, dy, dz = d[0]/norm, d[1]/norm, d[2]/norm
    if dz < -0.99999: return [0.0, 0.0, 0.0, 1.0]
    if dz > 0.99999:  return [0.0, 1.0, 0.0, 0.0]
    s = math.sqrt((1.0 - dz) * 2.0)
    return [dy / s, -dx / s, 0.0, s / 2.0]

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
    """target may be None for inverseBindMatrices (no bufferView.target)."""
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


#def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target, add_min_max=False):
#    """target may be None for inverseBindMatrices (no bufferView.target)."""
#    off, length = append_to_buffer(bin_blob, data.tobytes())
#    bv = BufferView(buffer=0, byteOffset=off, byteLength=length)
#    if target is not None:
#        bv.target = target
#    gltf.bufferViews.append(bv)
#    min_v = max_v = None
#    if add_min_max and len(data) > 0:
#        if data.ndim == 1: min_v, max_v = [float(data.min())], [float(data.max())]
#        else: min_v, max_v = [float(x) for x in data.min(axis=0)], [float(x) for x in data.max(axis=0)]
#    gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=comp_type, count=len(data), type=gltf_type, min=min_v, max=max_v))
#    return len(gltf.accessors) - 1

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
# World-matrix helper for inverseBindMatrices (bind-pose skinning)
# ---------------------------------------------------------------------------
def compute_world_matrices(gltf_nodes):
    """Compute world 4x4 matrices for every node (bind pose)."""
    world_mats = [np.eye(4, dtype=np.float32) for _ in gltf_nodes]

    def get_local_matrix(node):
        if node.matrix:
            return np.array(node.matrix, dtype=np.float32).reshape((4, 4), order='F')

        t = node.translation or [0.0, 0.0, 0.0]
        r = node.rotation or [0.0, 0.0, 0.0, 1.0]
        s = node.scale or [1.0, 1.0, 1.0]

        mat = np.eye(4, dtype=np.float32)

        # Quaternion → rotation matrix
        qx, qy, qz, qw = r
        r_mat = np.array([
            [1 - 2*qy*qy - 2*qz*qz, 2*qx*qy - 2*qz*qw,     2*qx*qz + 2*qy*qw],
            [2*qx*qy + 2*qz*qw,     1 - 2*qx*qx - 2*qz*qz, 2*qy*qz - 2*qx*qw],
            [2*qx*qz - 2*qy*qw,     2*qy*qz + 2*qx*qw,     1 - 2*qx*qx - 2*qy*qy]
        ], dtype=np.float32)

        # Scale and Rotation: R * diag(s)
        mat[0:3, 0:3] = r_mat * np.asarray(s, dtype=np.float32)

        # Translation
        mat[0:3, 3] = t
        return mat

    def dfs(node_idx, parent_mat):
        node = gltf_nodes[node_idx]
        local = get_local_matrix(node)
        world = np.dot(parent_mat, local)
        world_mats[node_idx] = world

        if node.children:
            for child_idx in node.children:
                if 0 <= child_idx < len(gltf_nodes):
                    dfs(child_idx, world)

    if gltf_nodes:
        dfs(0, np.eye(4, dtype=np.float32))  # start at WorldRoot
    return world_mats

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
    data = None
    mime = "image/jpeg"

    for u in urls:
        u = u.strip()
        if not u: continue

        if u.startswith('data:image'):
            try:
                head, b64data = u.split(',', 1)
                data = base64.b64decode(b64data)
                mime = head.split(';')[0].replace('data:', '')
                break
            except: continue

        local = os.path.join(base_path, u.replace('\\', '/'))
        if os.path.exists(local):
            with open(local, 'rb') as f: data = f.read()
            mime = mimetypes.guess_type(u)[0] or "image/jpeg"
            break
        elif u.startswith('http'):
            print(f"    Fetching remote texture: {u}")
            try:
                req = urllib.request.Request(u, headers={'User-Agent': 'Mozilla/5.0'})
                with urllib.request.urlopen(req, timeout=5) as r:
                    data = r.read()
                    mime = r.info().get_content_type() or mimetypes.guess_type(u)[0] or "image/jpeg"
                break
            except Exception as e:
                print(f"      Fetch failed: {e}")

    if not data:
        print(f"    WARN: Texture not found, generating 1x1 Dummy Fallback: {urls}")
        data = base64.b64decode("iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAQAAAC1HAwCAAAAC0lEQVR42mP8/x8AAwMCAO+ip1sAAAAASUVORK5CYII=")
        mime = "image/png"

    return add_raw_image(gltf, bin_blob, data, mime)

def resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path):
    if app_node is None: return None

    if app_node.get('USE'):
        app_node = def_map.get(app_node.get('USE'), app_node)

    mat_node = app_node.find('.//Material')
    img_node = app_node.find('.//ImageTexture')

    if mat_node is not None and mat_node.get('USE'): mat_node = def_map.get(mat_node.get('USE'), mat_node)
    if img_node is not None and img_node.get('USE'): img_node = def_map.get(img_node.get('USE'), img_node)

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
            "baseColorFactor": [max(0., min(1., c)) for c in diffuse[:3]] + [round(alpha, 5)],
            "metallicFactor": 0.0, "roughnessFactor": roughness
        }
    }

    if img_node is not None:
        tex_idx = embed_texture(img_node.get('url', ''), base_path, gltf, bin_blob)
        if tex_idx is not None:
            mat_dict["pbrMetallicRoughness"]["baseColorTexture"] = {"index": tex_idx}
            mat_dict["pbrMetallicRoughness"]["baseColorFactor"] = [1.0, 1.0, 1.0, round(alpha, 5)]

    if transparency > 0.01: mat_dict["alphaMode"] = "BLEND"
    elif transparency > 0:  mat_dict["alphaMode"] = "MASK"; mat_dict["alphaCutoff"] = 0.5

    mat_list.append(mat_dict)
    return len(mat_list) - 1

# ---------------------------------------------------------------------------
# X3D Text to glTF Quad Generator
# ---------------------------------------------------------------------------
def process_text_primitives(text_node, app_node, gltf, bin_blob, def_map, mat_list, base_path):
    if not HAS_PIL:
        print("    WARN: X3D <Text> node found, but 'Pillow' is not installed. Skipping. (Run: pip install Pillow)")
        return None

    lines = parse_mfstring(text_node.get('string', ''))
    if not lines: return None

    fs_node = text_node.find('.//FontStyle')
    size = 1.0
    family = "SERIF"
    justify = ["BEGIN", "FIRST"]

    if fs_node is not None:
        if fs_node.get('USE'): fs_node = def_map.get(fs_node.get('USE'), fs_node)
        size = float(fs_node.get('size', 1.0))
        family_arr = parse_mfstring(fs_node.get('family', '"SERIF"'))
        if family_arr: family = family_arr[0]
        justify_arr = parse_mfstring(fs_node.get('justify', '"BEGIN" "FIRST"'))
        if justify_arr: justify = justify_arr

    px_per_unit = 128
    font_size_px = max(10, int(size * px_per_unit))
    font = None

    try:
        fonts_to_try = ["arial.ttf"] if "SANS" in family.upper() else ["times.ttf"]
        for fn in fonts_to_try:
            try: font = ImageFont.truetype(fn, font_size_px); break
            except: pass
    except: pass
    if not font: font = ImageFont.load_default()

    dummy_img = PILImage.new("RGBA", (1, 1), (0,0,0,0))
    d = ImageDraw.Draw(dummy_img)

    max_w, total_h = 0, 0
    line_heights = []
    for line in lines:
        try: bbox = d.textbbox((0,0), line, font=font)
        except: bbox = (0, 0, len(line)*font_size_px*0.6, font_size_px)
        w = bbox[2] - bbox[0]
        h = bbox[3] - bbox[1] + (font_size_px * 0.2)
        max_w = max(max_w, w)
        line_heights.append(h)
        total_h += h

    width = max(int(max_w), 1)
    height = max(int(total_h), 1)

    img = PILImage.new("RGBA", (width, height), (0,0,0,0))
    d = ImageDraw.Draw(img)
    y = 0
    for i, line in enumerate(lines):
        d.text((0, y), line, font=font, fill=(255, 255, 255, 255))
        y += line_heights[i]

    import io
    img_io = io.BytesIO()
    img.save(img_io, format="PNG")
    tex_idx = add_raw_image(gltf, bin_blob, img_io.getvalue(), "image/png")

    aspect = float(width) / float(height)
    quad_h = size * len(lines)
    quad_w = quad_h * aspect

    jx = justify[0].upper() if len(justify) > 0 else "BEGIN"
    if jx == "MIDDLE": x0, x1 = -quad_w/2, quad_w/2
    elif jx == "END":  x0, x1 = -quad_w, 0
    else:              x0, x1 = 0, quad_w

    jy = justify[1].upper() if len(justify) > 1 else "FIRST"
    if jy == "MIDDLE": y0, y1 = -quad_h/2, quad_h/2
    else:              y0, y1 = -quad_h, 0

    pos = np.array([
        [x0, y0, 0], [x1, y0, 0], [x1, y1, 0], [x0, y1, 0]
    ], dtype=np.float32)
    norms = np.array([[0,0,1]] * 4, dtype=np.float32)
    uvs = np.array([[0,1], [1,1], [1,0], [0,0]], dtype=np.float32)
    indices = np.array([0, 1, 2, 0, 2, 3], dtype=np.uint16)

    prim_attrs = {
        "POSITION": add_accessor(gltf, bin_blob, pos, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
        "NORMAL":   add_accessor(gltf, bin_blob, norms, VEC3, FLOAT, ARRAY_BUFFER),
        "TEXCOORD_0": add_accessor(gltf, bin_blob, uvs, VEC2, FLOAT, ARRAY_BUFFER)
    }

    mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
    if mat_idx is None:
        mat_list.append({"name": "TextMat", "doubleSided": True, "alphaMode": "BLEND",
                         "pbrMetallicRoughness": {"baseColorFactor": [1,1,1,1], "metallicFactor": 0.0, "roughnessFactor": 1.0}})
        mat_idx = len(mat_list) - 1

    mat_list[mat_idx]["alphaMode"] = "BLEND"
    mat_list[mat_idx].setdefault("pbrMetallicRoughness", {})["baseColorTexture"] = {"index": tex_idx}

    gltf.meshes.append(Mesh(primitives=[{
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "attributes": prim_attrs,
        "material": mat_idx
    }]))

    return len(gltf.meshes) - 1

# ---------------------------------------------------------------------------
# Mesh Primitives
# ---------------------------------------------------------------------------

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
    u = [[1,1],[0,1],[0,0],[1,0]] * 6
    n = [[0,0,1]]*4 + [[0,0,-1]]*4 + [[1,0,0]]*4 + [[-1,0,0]]*4 + [[0,1,0]]*4 + [[0,-1,0]]*4
    ifs = ET.Element('IndexedFaceSet', {'coordIndex': ' '.join([f"{i*4} {i*4+1} {i*4+2} {i*4+3} -1" for i in range(6)])})
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in p])})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join([f"{v[0]} {v[1]}" for v in u])})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in n])})
    return ifs

def _resolve_child(node, tag, def_map):
    found = node.find('.//' + tag)
    if found is not None and found.get('USE'):
        found = def_map.get(found.get('USE'), found)
    return found

def _parse_color_rgba(color_node, def_map):
    if color_node is None:
        return None
    if color_node.get('USE'):
        color_node = def_map.get(color_node.get('USE'), color_node)
    raw = parse_array(color_node.get('color', color_node.get('colorRGBA', '')))
    if not raw or len(raw) % 4 != 0:
        return None
    return np.asarray(raw, dtype=np.float32).reshape(-1, 4)

def _make_sphere_primitive(sphere_node, app_node, def_map, gltf, bin_blob, mat_list, base_path):
    radius = float(sphere_node.get('radius', '1'))
    seg, rings = 32, 16
    pos, uv, idx = [], [], []
    for r in range(rings + 1):
        v = r / rings
        phi = math.pi * v
        sp, cp = math.sin(phi), math.cos(phi)
        for s in range(seg):
            u = s / seg
            th = 2.0 * math.pi * u
            pos.append([radius * sp * math.cos(th),
                        radius * cp,
                        radius * sp * math.sin(th)])
            uv.append([u, 1.0 - v])
    for r in range(rings):
        for s in range(seg):
            a = r * seg + s
            b = r * seg + (s + 1) % seg
            c = (r + 1) * seg + (s + 1) % seg
            d = (r + 1) * seg + s
            if r != 0:
                idx.extend([a, b, d])
            if r != rings - 1:
                idx.extend([b, c, d])
    positions = np.asarray(pos, dtype=np.float32)
    normals = positions / max(radius, 1e-12)
    uvs = np.asarray(uv, dtype=np.float32)
    indices = np.asarray(idx, dtype=np.uint32)
    if len(indices) and indices.max() < 65536:
        indices = indices.astype(np.uint16)
        idx_comp = UNSIGNED_SHORT
    else:
        idx_comp = UNSIGNED_INT
    attrs = {
        "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
        "NORMAL": add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER),
        "TEXCOORD_0": add_accessor(gltf, bin_blob, uvs, VEC2, FLOAT, ARRAY_BUFFER),
    }
    mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
    prim = {
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp,
                                ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "attributes": attrs,
        "mode": 4
    }
    if mat_idx is not None:
        prim["material"] = mat_idx
    return prim

#def _make_sphere_mesh(sphere_node, app_node, def_map, gltf, bin_blob, mat_list, base_path):
#    radius = float(sphere_node.get('radius', '1'))
#    seg, rings = 32, 16
#    pos, uv, idx = [], [], []
#    for r in range(rings + 1):
#        v = r / rings
#        phi = math.pi * v
#        sp, cp = math.sin(phi), math.cos(phi)
#        for s in range(seg):
#            u = s / seg
#            th = 2.0 * math.pi * u
#            pos.append([radius * sp * math.cos(th),
#                        radius * cp,
#                        radius * sp * math.sin(th)])
#            uv.append([u, 1.0 - v])
#    for r in range(rings):
#        for s in range(seg):
#            a = r * seg + s
#            b = r * seg + (s + 1) % seg
#            c = (r + 1) * seg + (s + 1) % seg
#            d = (r + 1) * seg + s
#            if r != 0:
#                idx.extend([a, b, d])
#            if r != rings - 1:
#                idx.extend([b, c, d])
#    positions = np.asarray(pos, dtype=np.float32)
#    normals = positions / max(radius, 1e-12)
#    uvs = np.asarray(uv, dtype=np.float32)
#    indices = np.asarray(idx, dtype=np.uint32)
#    if len(indices) and indices.max() < 65536:
#        indices = indices.astype(np.uint16)
#        idx_comp = UNSIGNED_SHORT
#    else:
#        idx_comp = UNSIGNED_INT
#    attrs = {
#        "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
#        "NORMAL": add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER),
#        "TEXCOORD_0": add_accessor(gltf, bin_blob, uvs, VEC2, FLOAT, ARRAY_BUFFER),
#    }
#    mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
#    prim = {
#        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp,
#                                ELEMENT_ARRAY_BUFFER, add_min_max=True),
#        "attributes": attrs
#    }
#    if mat_idx is not None:
#        prim["material"] = mat_idx
#    gltf.meshes.append(Mesh(primitives=[prim]))
#    return len(gltf.meshes) - 1

def process_mesh_primitives(geom_nodes, gltf, bin_blob, def_map, mat_list, base_path,
                            temp_skin_info):
    primitives = []

    for node in geom_nodes:
        is_faceset = node.tag in ('IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet')
        is_line = node.tag in ('LineSet', 'IndexedLineSet')
        facesets = ([node] if is_faceset or is_line else
                    node.findall('.//IndexedFaceSet') +
                    node.findall('.//IndexedTriangleSet') +
                    node.findall('.//TriangleSet') +
                    node.findall('.//LineSet') +
                    node.findall('.//IndexedLineSet'))

        app_node = None if (is_faceset or is_line) else node.find('.//Appearance')

        # Box is represented by the existing canonical IFS generator.
        if not is_faceset and not is_line:
            facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])

        # Sphere generates its own primitive directly
        if not is_faceset and not is_line:
            for sphere in node.findall('.//Sphere'):
                sphere_prim = _make_sphere_primitive(
                    sphere, app_node, def_map, gltf, bin_blob, mat_list, base_path)
                if sphere_prim:
                    primitives.append(sphere_prim)


#        if not is_faceset and not is_line:
#            facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])
#
#        if not is_faceset and not is_line:
#            for sphere in node.findall('.//Sphere'):
#                mesh_idx = _make_sphere_mesh(
#                    sphere, app_node, def_map, gltf, bin_blob, mat_list, base_path)
#                primitives.append({
#                    "indices": None,
#                    "attributes": None,
#                    "_existing_mesh": mesh_idx,
#                    "_p_indices": []
#                })

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is not None and coord.get('USE'):
                coord = def_map.get(coord.get('USE'), coord)
            if coord is None:
                continue

            raw_pos = parse_array(coord.get('point', ''))
            if not raw_pos:
                continue
            pos_arr = np.asarray(raw_pos, dtype=np.float32).reshape(-1, 3)

            tex_coord = face_set.find('.//TextureCoordinate')
            if tex_coord is not None and tex_coord.get('USE'):
                tex_coord = def_map.get(tex_coord.get('USE'), tex_coord)
            if tex_coord is not None:
                raw_uv = parse_array(tex_coord.get('point', ''))
                uv_arr = np.asarray(raw_uv, dtype=np.float32).reshape(-1, 2) if raw_uv else np.empty((0,2), np.float32)
                if len(uv_arr):
                    uv_arr[:, 1] = 1.0 - uv_arr[:, 1]
            else:
                uv_arr = np.empty((0, 2), np.float32)

            norm_node = face_set.find('.//Normal')
            if norm_node is not None and norm_node.get('USE'):
                norm_node = def_map.get(norm_node.get('USE'), norm_node)
            raw_norm = parse_array(norm_node.get('vector', '')) if norm_node is not None else []
            norm_arr = np.asarray(raw_norm, dtype=np.float32).reshape(-1, 3) if raw_norm else np.empty((0,3), np.float32)

            color_node = _resolve_child(node, 'ColorRGBA', def_map)
            colors = _parse_color_rgba(color_node, def_map)

            if face_set.tag == 'TriangleSet':
                n = len(pos_arr)
                pos_polys = [[i, i+1, i+2] for i in range(0, n - 2, 3)]
                tex_polys = pos_polys
                norm_polys = pos_polys
                color_polys = pos_polys
                primitive_mode = 4
            elif face_set.tag == 'LineSet':
                counts = parse_array(face_set.get('vertexCount', ''), int, default=[])
                pos_polys, cursor = [], 0
                for count in counts:
                    line = list(range(cursor, min(cursor + count, len(pos_arr))))
                    cursor += count
                    if len(line) >= 2:
                        for k in range(len(line) - 1):
                            pos_polys.append([line[k], line[k+1]])
                tex_polys = pos_polys
                norm_polys = pos_polys
                color_polys = pos_polys
                primitive_mode = 1
            elif face_set.tag == 'IndexedLineSet':
                pos_polys = parse_x3d_indices(face_set.get('coordIndex', ''))
                expanded = []
                for line in pos_polys:
                    for k in range(len(line) - 1):
                        expanded.append([line[k], line[k+1]])
                pos_polys = expanded
                tex_polys = pos_polys
                norm_polys = pos_polys
                color_polys = pos_polys
                primitive_mode = 1
            else:
                pos_polys = parse_x3d_indices(
                    face_set.get('coordIndex') or face_set.get('index', ''))
                tex_polys = parse_x3d_indices(face_set.get('texCoordIndex', '')) \
                    if face_set.get('texCoordIndex') else pos_polys
                norm_polys = parse_x3d_indices(face_set.get('normalIndex', '')) \
                    if face_set.get('normalIndex') else pos_polys
                color_polys = parse_x3d_indices(face_set.get('colorIndex', '')) \
                    if face_set.get('colorIndex') else pos_polys
                primitive_mode = 4

            unified_verts = {}
            out_positions, out_uvs, out_normals, out_colors = [], [], [], []
            unified_indices, p_indices_list = [], []

            for pi, poly in enumerate(pos_polys):
                if len(poly) < 2:
                    continue
                t_poly = tex_polys[pi] if pi < len(tex_polys) else poly
                n_poly = norm_polys[pi] if pi < len(norm_polys) else poly
                c_poly = color_polys[pi] if pi < len(color_polys) else poly

                local_sequences = [(0, i, i+1) for i in range(1, len(poly)-1)] \
                    if primitive_mode == 4 else [(0, 1)]
                for seq in local_sequences:
                    for j in seq:
                        p_idx = poly[j]
                        t_idx = t_poly[j] if j < len(t_poly) else p_idx
                        n_idx = n_poly[j] if j < len(n_poly) else p_idx
                        c_idx = c_poly[j] if j < len(c_poly) else p_idx
                        v_tuple = (p_idx, t_idx, n_idx, c_idx)
                        if v_tuple not in unified_verts:
                            unified_verts[v_tuple] = len(out_positions)
                            out_positions.append(
                                pos_arr[p_idx] if 0 <= p_idx < len(pos_arr) else [0,0,0])
                            if len(uv_arr):
                                out_uvs.append(uv_arr[t_idx] if 0 <= t_idx < len(uv_arr) else [0,0])
                            if len(norm_arr):
                                out_normals.append(
                                    norm_arr[n_idx] if 0 <= n_idx < len(norm_arr) else [0,1,0])
                            if colors is not None and len(colors):
                                ci = c_idx if c_idx < len(colors) else 0
                                out_colors.append(colors[ci] if ci < len(colors) else [1,1,1,1])
                            p_indices_list.append(p_idx)
                        unified_indices.append(unified_verts[v_tuple])

            if not unified_indices:
                continue

            positions = np.asarray(out_positions, dtype=np.float32)
            indices = np.asarray(unified_indices, dtype=np.uint32)
            if primitive_mode == 4:
                normals = np.asarray(out_normals, dtype=np.float32) if out_normals else \
                    compute_normals(positions, indices,
                                    ccw=(face_set.get('ccw','true').strip().lower() not in ('false','0')))
            else:
                normals = np.asarray(out_normals, dtype=np.float32) if out_normals else \
                    np.zeros_like(positions, dtype=np.float32)

            idx_comp = UNSIGNED_SHORT if len(indices) and indices.max() < 65536 else UNSIGNED_INT
            if idx_comp == UNSIGNED_SHORT:
                indices = indices.astype(np.uint16)

            prim_attrs = {
                "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT,
                                          ARRAY_BUFFER, add_min_max=True)
            }
            if primitive_mode == 4:
                prim_attrs["NORMAL"] = add_accessor(
                    gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER)
            if len(out_uvs):
                prim_attrs["TEXCOORD_0"] = add_accessor(
                    gltf, bin_blob, np.asarray(out_uvs, np.float32), VEC2, FLOAT, ARRAY_BUFFER)
            if len(out_colors):
                prim_attrs["COLOR_0"] = add_accessor(
                    gltf, bin_blob, np.asarray(out_colors, np.float32), VEC4, FLOAT, ARRAY_BUFFER)

            mat_idx = resolve_material(
                app_node, def_map, mat_list, gltf, bin_blob, base_path)
            prim_dict = {
                "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp,
                                        ELEMENT_ARRAY_BUFFER, add_min_max=True),
                "attributes": prim_attrs,
                "_p_indices": p_indices_list,
                "mode": primitive_mode
            }
            if mat_idx is not None:
                prim_dict["material"] = mat_idx

            line_props = _resolve_child(node, 'LineProperties', def_map)
            if line_props is not None:
                prim_dict["_x3d_lineProperties"] = {
                    "linewidthScaleFactor": float(line_props.get('linewidthScaleFactor','1')),
                    "linetype": int(line_props.get('linetype','1'))
                }
            primitives.append(prim_dict)

#    existing_meshes = [p.pop("_existing_mesh") for p in primitives if "_existing_mesh" in p]
#    primitives = [p for p in primitives if "_existing_mesh" not in p]
#
#    for sphere_idx in existing_meshes:
#        if 0 <= sphere_idx < len(gltf.meshes):
#            primitives.extend(gltf.meshes[sphere_idx].primitives)
#    if existing_meshes:
#        first_temp = min(existing_meshes)
#        if first_temp < len(gltf.meshes):
#            del gltf.meshes[first_temp:]
    if not primitives:
        return None

    mesh_idx = len(gltf.meshes)
    mesh = Mesh(primitives=[])
    gltf.meshes.append(mesh)
    for p in primitives:
        line_props = p.pop("_x3d_lineProperties", None)
        if line_props:
            mesh.extras = dict(mesh.extras or {})
            mesh.extras.setdefault("x3d_lineProperties", []).append(line_props)
        p_list = p.pop("_p_indices", None)
        mesh.primitives.append(p)
        if p_list is not None:
            temp_skin_info.append((mesh_idx, len(mesh.primitives)-1, p_list))
    return mesh_idx

# ---------------------------------------------------------------------------
# Conversion Context & Scoping
# ---------------------------------------------------------------------------

MAX_INLINE_DEPTH = 16
STRUCTURAL_TAGS = {'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite'}
IGNORED_BEHAVIOUR_TAGS = {'BooleanFilter', 'BooleanSequencer', 'NavigationInfo',
                          'ProximitySensor', 'TimeTrigger', 'TouchSensor'}

HANDLED_TAGS = STRUCTURAL_TAGS | {
    'X3D', 'head', 'meta', 'Scene',
    'Shape', 'Appearance', 'Material', 'ImageTexture',
    'IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet', 'LineSet', 'IndexedLineSet',
    'Box', 'Sphere', 'Text', 'FontStyle', 'ColorRGBA', 'LineProperties',
    'Coordinate', 'TextureCoordinate', 'Normal',
    'WorldInfo', 'NavigationInfo', 'Background', 'AudioClip', 'Sound', 'LoadSensor',
    'Switch', 'HAnimMotion',
    'Viewpoint', 'Inline', 'InlineGeometry',
    'DirectionalLight', 'PointLight',
    'TimeSensor', 'PositionInterpolator', 'OrientationInterpolator',
    'ROUTE', 'IMPORT', 'EXPORT',
}

SHAPE_CONSUMED_TAGS = {
    'Appearance', 'Material', 'ImageTexture', 'FontStyle',
    'IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet', 'LineSet', 'IndexedLineSet',
    'Box', 'Sphere', 'Text', 'ColorRGBA', 'LineProperties',
    'Coordinate', 'TextureCoordinate', 'Normal',
}

UNHANDLED_REASONS = {
    'Switch':             'children traversed, but whichChoice is ignored (every choice is exported)',
    'LOD':                'children traversed, but level selection is ignored (every level is exported)',
    'Anchor':             'children traversed, hyperlink ignored',
    'Billboard':          'children traversed, billboard behaviour ignored',
    'Collision':          'children traversed, collision behaviour ignored',
    'StaticGroup':        'children traversed',
    'ProtoDeclare':       'PROTO definition body is traversed as if it were live content; instances are NOT expanded',
    'ProtoBody':          'PROTO body is traversed as if it were live content',
    'ProtoInterface':     'PROTO interface ignored',
    'ProtoInstance':      'PROTO instance not expanded',
    'ExternProtoDeclare': 'EXTERNPROTO not resolved',
}
DEFAULT_UNHANDLED_REASON = 'no converter for this node type (children are still traversed)'
UNSUPPORTED_INLINE_EXT = {'.x3dv', '.wrl', '.x3dvz', '.wrz', '.x3dj', '.json', '.x3db', '.gltf', '.glb'}

#class Scope:
#    def __init__(self, root, content, base, prefix, filename):
#        self.root = root
#        self.content = content
#        self.base = base
#        self.prefix = prefix
#        self.filename = filename
#        self.def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}
#        self.inline_children = {}

class Scope:
    """One X3D file: the main file, or the content of one loaded Inline."""
    def __init__(self, root, content, base, prefix, filename):
        self.root = root
        self.content = content
        self.base = base
        self.prefix = prefix
        self.filename = filename
        self.def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}
        self.inline_children = {}
        self.unit_scale = self._parse_unit_scale(root)

    @staticmethod
    def _parse_unit_scale(root):
        head = root.find('head')
        if head is not None:
            for u in head.findall('unit'):
                if u.get('category') == 'length':
                    try:
                        return float(u.get('conversionFactor', '1.0'))
                    except (ValueError, TypeError):
                        pass
        return 1.0

class SkinGroup:
    def __init__(self, name, scope, skincoord_name):
        self.name = name
        self.scope = scope
        self.skincoord_name = skincoord_name
        self.inner_idx = None
        self.joint_skinning = {}
        self.meshes = []

class ConvertCtx:
    def __init__(self, gltf, bin_blob):
        self.gltf = gltf
        self.bin_blob = bin_blob
        self.mat_list = []
        self.def_to_node_idx = {}
        self.node_to_center = {}
        self.scopes = []
        self.skin_groups = []
        self.orphan_shapes = []
        self.mesh_to_node = {}
        self.def_to_shape_node = {}
        self.def_to_mesh = {}
        self.behavior = []
        self.units = []
        self.inlines = []
        self.unhandled = {}
        self.load_stack = []
        self.used_prefixes = set()

    def note_unhandled(self, tag, reason, scope, xml_node=None, example=None):
        rec = self.unhandled.setdefault(tag, {'count': 0, 'reasons': [], 'examples': []})
        rec['count'] += 1
        if reason not in rec['reasons']:
            rec['reasons'].append(reason)
        if example is None and xml_node is not None:
            example = f"{scope.filename}::{xml_node.get('DEF') or xml_node.get('USE') or '(unnamed)'}"
        if example and example not in rec['examples'] and len(rec['examples']) < 3:
            rec['examples'].append(example)

    def note_use(self, tag, scope, xml_node):
        if tag in ('HAnimJoint', 'HAnimSegment', 'HAnimSite') and xml_node.get('containerField') in ('joints', 'segments', 'sites', 'skeleton'):
            # This is an actual X3D reference to the already-created joint/segment/site,
            # not a request for another skeleton node. The DEF occurrence
            # supplies the glTF node and the USE list entry is bookkeeping only.
            return
        reason = 'USE reference is NOT instanced (nothing is duplicated)'
        self.note_unhandled(f"{tag} (USE)", reason, scope, xml_node)

# ---------------------------------------------------------------------------
# Inline loading
# ---------------------------------------------------------------------------

def _is_remote(s):
    return re.match(r'https?://', s, re.I) is not None

def _resolve_ref(base, ref):
    ref = ref.strip().replace('\\', '/')
    if _is_remote(ref): return ref
    if ref.lower().startswith('file:'):
        ref = re.sub(r'^file:(//)?', '', ref, flags=re.I)
        if re.match(r'^/[A-Za-z]:', ref): ref = ref[1:]
    ref = urllib.parse.unquote(ref)
    if _is_remote(base): return urllib.parse.urljoin(base, ref)
    return os.path.normpath(os.path.join(base, ref))

def _base_of(target):
    return target.rsplit('/', 1)[0] + '/' if _is_remote(target) else os.path.dirname(target)

def _read_x3d_bytes(target):
    if _is_remote(target):
        req = urllib.request.Request(target, headers={'User-Agent': 'Mozilla/5.0'})
        with urllib.request.urlopen(req, timeout=15) as r: data = r.read()
    else:
        with open(target, 'rb') as f: data = f.read()
    if data[:2] == b'\x1f\x8b': data = gzip.decompress(data)
    return data

def _load_inline_target(urls, scope, ctx):
    tried = []
    for url in urls:
        file_part, _, frag = url.partition('#')
        file_part = file_part.strip()
        if not file_part:
            tried.append((url, 'no file part')); continue
        target = _resolve_ref(scope.base, file_part)
        ext = os.path.splitext(target.split('?')[0])[1].lower()
        if ext in UNSUPPORTED_INLINE_EXT:
            tried.append((url, f'unsupported format {ext} (only XML .x3d / .x3dz)')); continue
        if not _is_remote(target) and not os.path.isfile(target):
            tried.append((url, 'file not found')); continue
        if target in ctx.load_stack:
            tried.append((url, 'cyclic Inline (file is already being loaded)')); continue
        try:
            ext_root = ET.fromstring(_read_x3d_bytes(target))
        except Exception as e:
            tried.append((url, f'{type(e).__name__}: {e}')); continue
        strip_namespaces(ext_root)
        if frag:
            content = next((e for e in ext_root.iter() if e.get('DEF') == frag), None)
            if content is None:
                tried.append((url, f'#{frag} not found in file')); continue
        else:
            content = ext_root.find('Scene')
            if content is None: content = ext_root
        return {'root': ext_root, 'content': content, 'target': target, 'frag': frag}, tried
    return None, tried

def _handle_inline(xml_node, parent_idx, ctx, scope):
    gltf = ctx.gltf
    src = xml_node
    use = xml_node.get('USE')
    if use:
        src = scope.def_map.get(use)
    def_name = src.get('DEF') if src is not None else None
    label = def_name or use or f"Inline{len(ctx.inlines) + 1}"
    urls = parse_mfstring(src.get('url', '')) if src is not None else []

    rec = {'name': f"{scope.prefix}{use} [USE]" if use else f"{scope.prefix}{label}", 'in_file': scope.filename, 'urls': urls,
           'status': None, 'detail': '', 'file': None, 'nodes': 0, 'meshes': 0}
    ctx.inlines.append(rec)

    def finish(status, detail=''):
        rec['status'], rec['detail'] = status, detail
        extra = f"  [+{rec['nodes']} nodes, +{rec['meshes']} meshes]" if status == 'LOADED' else ''
        shown = ' | '.join(urls) if urls else '(none)'
        print(f"  INLINE {rec['name']:<28} {status:<8} url={shown}{(' -> ' + rec['file']) if rec['file'] else ''}{extra}"
              f"{(' : ' + detail) if detail else ''}")

    if src is None or src.tag not in ('Inline', 'InlineGeometry'):
        return finish('FAILED', f'USE="{use}" does not resolve to an Inline')
    if src.get('load', 'true').strip().lower() in ('false', '0'):
        return finish('SKIPPED', 'load="false"')
    if not urls:
        return finish('FAILED', 'empty url field')
    if len(ctx.load_stack) >= MAX_INLINE_DEPTH:
        return finish('FAILED', f'Inline nesting deeper than {MAX_INLINE_DEPTH}')

    res, tried = _load_inline_target(urls, scope, ctx)
    if res is None:
        return finish('FAILED', '; '.join(f"{u!r}: {why}" for u, why in tried))

    full_prefix, n = f"{scope.prefix}{label}/", 2
    while full_prefix in ctx.used_prefixes:
        full_prefix = f"{scope.prefix}{label}#{n}/"; n += 1
    ctx.used_prefixes.add(full_prefix)

    child = Scope(res['root'], res['content'], _base_of(res['target']), full_prefix,
                  os.path.basename(res['target'].split('?')[0]))
    ctx.scopes.append(child)
    scope.inline_children.setdefault(def_name or use or label, child)
    rec['file'] = res['target']

    wrapper_idx = len(gltf.nodes)
    # wrapper node: groups everything that came from this Inline and applies unit scaling
    wrapper_idx = len(gltf.nodes)
    scale_vec = [child.unit_scale, child.unit_scale, child.unit_scale] if child.unit_scale != 1.0 else None
    
    gltf.nodes.append(Node(
        name=f"Inline_{full_prefix.rstrip('/')}",
        scale=scale_vec,
        children=[],
        extras={"x3d_inline_url": urls, "x3d_inline_file": res['target']}
    ))

    #gltf.nodes.append(Node(name=f"Inline_{full_prefix.rstrip('/')}", children=[],
    #                       extras={"x3d_inline_url": urls, "x3d_inline_file": res['target']}))
    if parent_idx is not None:
        p = gltf.nodes[parent_idx]
        if p.children is None: p.children = []
        p.children.append(wrapper_idx)

    n0, m0 = len(gltf.nodes), len(gltf.meshes)
    ctx.load_stack.append(res['target'])
    try:
        traverse_x3d_node(child.content, wrapper_idx, ctx, child, None)
    finally:
        ctx.load_stack.pop()
    rec['nodes'], rec['meshes'] = len(gltf.nodes) - n0, len(gltf.meshes) - m0
    finish('LOADED')

# ---------------------------------------------------------------------------
# DOM Traversal & Dual-Node Pattern
# ---------------------------------------------------------------------------

def _clone_gltf_subtree(gltf, source_idx, name_suffix="__USE"):
    """Clone a glTF node hierarchy while reusing meshes/materials/skins."""
    def copy_node(idx):
        s = gltf.nodes[idx]
        n = Node(
            name=(s.name or f"Node_{idx}") + name_suffix,
            translation=list(s.translation) if s.translation is not None else None,
            rotation=list(s.rotation) if s.rotation is not None else None,
            scale=list(s.scale) if s.scale is not None else None,
            matrix=list(s.matrix) if s.matrix is not None else None,
            mesh=s.mesh,
            skin=s.skin,
            camera=s.camera,
            children=[]
        )
        s_weights = getattr(s, 'weights', None)
        if s_weights is not None:
            n.weights = list(s_weights)
        if s.extras is not None:
            n.extras = dict(s.extras)
        if s.extensions is not None:
            n.extensions = dict(s.extensions)
        new_idx = len(gltf.nodes)
        gltf.nodes.append(n)
        for child in (s.children or []):
            n.children.append(copy_node(child))
        return new_idx
    return copy_node(source_idx)

def _preserve_behavior(ctx, scope, xml_node, kind=None):
    rec = {
        "file": scope.filename,
        "prefix": scope.prefix,
        "type": xml_node.tag,
        "DEF": xml_node.get("DEF"),
        "USE": xml_node.get("USE"),
        "attributes": dict(xml_node.attrib),
        "children": [
            {"type": child.tag, "DEF": child.get("DEF"), "USE": child.get("USE"),
             "attributes": dict(child.attrib)}
            for child in xml_node
        ]
    }
    if kind:
        rec["kind"] = kind
    ctx.behavior.append(rec)

def _shape_children_consumed(el):
    return el.tag in SHAPE_CONSUMED_TAGS or el.tag in {
        'ColorRGBA', 'Color', 'LineProperties'
    }

def traverse_x3d_node(xml_node, parent_idx, ctx, scope, skin_group=None):
    gltf = ctx.gltf
    tag = xml_node.tag

    def attach(child_idx):
        if parent_idx is not None:
            p = gltf.nodes[parent_idx]
            if p.children is None:
                p.children = []
            if child_idx not in p.children:
                p.children.append(child_idx)

    if tag in IGNORED_BEHAVIOUR_TAGS:
        _preserve_behavior(ctx, scope, xml_node, "behavior")
        return

    if tag in ('Inline', 'InlineGeometry'):
        _handle_inline(xml_node, parent_idx, ctx, scope)
        return

    if tag == 'Viewpoint':
        cam_idx = len(gltf.cameras)
        gltf.cameras.append(Camera(
            type="perspective",
            perspective=Perspective(
                yfov=float(xml_node.get('fieldOfView', '0.785398')),
                znear=0.1, zfar=1000.0)
        ))
        node_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=scope.prefix + xml_node.get('DEF', f"Viewpoint_{cam_idx}"),
            translation=parse_array(xml_node.get('position', '0 0 10')),
            rotation=axis_angle_to_quat(*parse_array(xml_node.get('orientation', '0 0 1 0'))),
            camera=cam_idx
        ))
        attach(node_idx)
        if xml_node.get('DEF'):
            ctx.def_to_node_idx[scope.prefix + xml_node.get('DEF')] = node_idx
        return

    if tag == 'Switch':
        choice = int(xml_node.get('whichChoice', '-1'))
        children = list(xml_node)
        if 0 <= choice < len(children):
            traverse_x3d_node(children[choice], parent_idx, ctx, scope, skin_group)
        elif choice >= len(children):
            ctx.note_unhandled('Switch', 'whichChoice is outside available children', scope, xml_node)
        _preserve_behavior(ctx, scope, xml_node, "switch")
        return

    if tag in STRUCTURAL_TAGS:
        use = xml_node.get('USE')
        if use:
            # HAnimHumanoid joint/segment/site USE entries refer to an existing
            # node. They are not additional skeleton joints.
            if tag in ('HAnimJoint', 'HAnimSegment', 'HAnimSite') and xml_node.get('containerField') in ('joints', 'segments', 'sites', 'skeleton'):
                ctx.note_use(tag, scope, xml_node)
                return
            key = scope.prefix + use
            source_idx = ctx.def_to_node_idx.get(key)
            if source_idx is not None:
                clone_idx = _clone_gltf_subtree(gltf, source_idx)
                attach(clone_idx)
                return
            source = scope.def_map.get(use)
            if source is not None and source is not xml_node:
                traverse_x3d_node(source, parent_idx, ctx, scope, skin_group)
                source_idx = ctx.def_to_node_idx.get(key)
                if source_idx is not None:
                    clone_idx = _clone_gltf_subtree(gltf, source_idx)
                    attach(clone_idx)
                    return
            ctx.note_use(tag, scope, xml_node)
            return

        def_name = xml_node.get('DEF')
        key = scope.prefix + def_name if def_name else None
        t = np.asarray(parse_array(xml_node.get('translation'), default=[0,0,0]), dtype=float)
        c = np.asarray(parse_array(xml_node.get('center'), default=[0,0,0]), dtype=float)
        outer_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=key or f"{scope.prefix}{tag}_{outer_idx}",
            translation=[float(x) for x in (t + c)],
            rotation=axis_angle_to_quat(*parse_array(
                xml_node.get('rotation'), default=[0,1,0,0])),
            scale=parse_array(xml_node.get('scale'), default=[1,1,1]),
            children=[]
        ))
        if key:
            ctx.def_to_node_idx[key] = outer_idx
        ctx.node_to_center[outer_idx] = c
        attach(outer_idx)

        inner_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=f"{key or scope.prefix + tag}_Inner",
            translation=[float(x) for x in -c],
            children=[]
        ))
        gltf.nodes[outer_idx].children.append(inner_idx)

        group = skin_group
        if tag == 'HAnimHumanoid':
            sc = next((ch for ch in xml_node if ch.get('containerField') == 'skinCoord'), None)
            sc_name = (sc.get('DEF') or sc.get('USE')) if sc is not None else None
            group = SkinGroup(
                key or f"{scope.prefix}Humanoid_{outer_idx}", scope, sc_name)
            group.inner_idx = inner_idx
            ctx.skin_groups.append(group)

        if tag == 'HAnimJoint' and key:
            skin_idx = parse_array(xml_node.get('skinCoordIndex', ''), int, default=[])
            skin_wgt = parse_array(xml_node.get('skinCoordWeight', ''), float, default=[])
            if skin_idx:
                if group is not None:
                    group.joint_skinning[key] = list(zip(skin_idx, skin_wgt))
                else:
                    ctx.note_unhandled(
                        'HAnimJoint',
                        'skinCoordIndex outside an HAnimHumanoid: skinning ignored',
                        scope, xml_node)

        for child in xml_node:
            traverse_x3d_node(child, inner_idx, ctx, scope, group)
        return

    if tag == 'Shape':
        use = xml_node.get('USE')
        if use:
            source_idx = ctx.def_to_shape_node.get(scope.prefix + use)
            if source_idx is None:
                source = scope.def_map.get(use)
                if source is not None and source is not xml_node:
                    traverse_x3d_node(source, parent_idx, ctx, scope, skin_group)
                    source_idx = ctx.def_to_shape_node.get(scope.prefix + use)
            if source_idx is not None:
                clone_idx = _clone_gltf_subtree(gltf, source_idx)
                attach(clone_idx)
                return
            ctx.note_use(tag, scope, xml_node)
            return

        text_node = xml_node.find('.//Text')
        local_skin = []
        if text_node is not None:
            mesh_idx = process_text_primitives(
                text_node, xml_node.find('.//Appearance'), gltf, ctx.bin_blob,
                scope.def_map, ctx.mat_list, scope.base)
            if mesh_idx is None:
                ctx.note_unhandled(
                    'Text', 'could not be rasterised (see warnings above)',
                    scope, text_node)
        else:
            mesh_idx = process_mesh_primitives(
                [xml_node], gltf, ctx.bin_blob, scope.def_map, ctx.mat_list,
                scope.base, local_skin)

        for el in xml_node.iter():
            if el is xml_node or _shape_children_consumed(el):
                continue
            ctx.note_unhandled(
                el.tag,
                'inside Shape: ' +
                ('Shape DROPPED (no supported geometry)' if mesh_idx is None
                 else 'ignored (Shape is still exported)'),
                scope, el)

        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            shape_name = scope.prefix + xml_node.get(
                'DEF', f"Shape_{shape_idx}")
            gltf.nodes.append(Node(name=shape_name, mesh=mesh_idx))
            attach(shape_idx)
            ctx.mesh_to_node[mesh_idx] = shape_idx
            if xml_node.get('DEF'):
                ctx.def_to_shape_node[scope.prefix + xml_node.get('DEF')] = shape_idx
                ctx.def_to_mesh[scope.prefix + xml_node.get('DEF')] = mesh_idx
            if local_skin:
                if skin_group is not None:
                    skin_group.meshes.extend(local_skin)
                else:
                    coord = xml_node.find('.//Coordinate')
                    cname = (coord.get('DEF') or coord.get('USE')) \
                        if coord is not None else None
                    ctx.orphan_shapes.append((scope, cname, local_skin))
        return

    if tag in ('WorldInfo', 'NavigationInfo', 'Background', 'AudioClip',
               'Sound', 'LoadSensor'):
        _preserve_behavior(ctx, scope, xml_node, "scene")
        return

    if tag == 'component':
        _preserve_behavior(ctx, scope, xml_node, "component")
        return

    if tag in ('ColorRGBA', 'LineProperties', 'Appearance', 'Material',
               'ImageTexture', 'Coordinate', 'TextureCoordinate', 'Normal',
               'FontStyle'):
        return

    if tag not in HANDLED_TAGS:
        ctx.note_unhandled(
            tag, UNHANDLED_REASONS.get(tag, DEFAULT_UNHANDLED_REASON),
            scope, xml_node)

    for child in xml_node:
        traverse_x3d_node(child, parent_idx, ctx, scope, skin_group)

# ---------------------------------------------------------------------------
# Animations
# ---------------------------------------------------------------------------

def convert_animations(root, gltf, bin_blob, def_to_node_idx, node_to_center, prefix='', imports=None):
    imports = imports or {}
    consumed, used_defs = set(), set()

    def lookup(name):
        return def_to_node_idx.get(imports.get(name, prefix + name))

    routes = {}
    for route in root.findall('.//ROUTE'):
        routes.setdefault((route.get('fromNode'), route.get('fromField')), []).append((route.get('toNode'), route.get('toField'), route))
    all_interps = {node.get('DEF'): node for tag in ('PositionInterpolator', 'OrientationInterpolator') for node in root.findall(f'.//{tag}') if node.get('DEF')}

    for ts in root.findall('.//TimeSensor'):
        ts_def = ts.get('DEF')
        if not ts_def: continue
        cycle = float(ts.get('cycleInterval', '1.0'))
        driven = [(all_interps[to_node], r_el)
                  for out_field in ('fraction_changed', 'cycleTime', 'time')
                  for (to_node, to_field, r_el) in routes.get((ts_def, out_field), [])
                  if to_field == 'set_fraction' and to_node in all_interps]

        samplers, channels = [], []
        seen_targets = set()

        for interp, ts_route in driven:
            targets = routes.get((interp.get('DEF'), 'value_changed'), [])
            keys = np.array(parse_array(interp.get('key', '')), dtype=np.float32) * cycle
            kv_raw = parse_array(interp.get('keyValue', ''))
            if not targets or len(keys) < 2 or not kv_raw: continue
            made_any = False

            for (to_node, to_field, r_el) in targets:
                node_idx = lookup(to_node)
                if node_idx is None: continue
                gltf_path = {'translation': 'translation', 'set_translation': 'translation', 'rotation': 'rotation', 'set_rotation': 'rotation'}.get(to_field)
                if not gltf_path: continue

                if (node_idx, gltf_path) in seen_targets: continue
                seen_targets.add((node_idx, gltf_path))

                if interp.tag == 'OrientationInterpolator':
                    vals = np.array([axis_angle_to_quat(*row) for row in np.array(kv_raw, dtype=np.float64).reshape(-1, 4)], dtype=np.float32)
                    out_type = VEC4
                else:
                    vals = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                    if gltf_path == 'translation' and node_idx in node_to_center:
                        vals += node_to_center[node_idx]
                    out_type = VEC3

                if len(vals) != len(keys): continue
                t_off, t_len = append_to_buffer(bin_blob, keys.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=t_off, byteLength=t_len))
                gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT, count=len(keys), type=SCALAR, min=[float(keys.min())], max=[float(keys.max())]))
                acc_t = len(gltf.accessors) - 1

                v_off, v_len = append_to_buffer(bin_blob, vals.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=v_off, byteLength=v_len))
                gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT, count=len(vals), type=out_type))

                samplers.append(AnimationSampler(input=acc_t, output=len(gltf.accessors)-1, interpolation="LINEAR"))
                channels.append(AnimationChannel(sampler=len(samplers)-1, target=AnimationChannelTarget(node=node_idx, path=gltf_path)))
                consumed.add(id(r_el)); made_any = True

            if made_any:
                consumed.add(id(ts_route)); used_defs.update((ts_def, interp.get('DEF')))

        if channels: gltf.animations.append(Animation(name=f"Anim_{prefix}{ts_def}", samplers=samplers, channels=channels))
    return consumed, used_defs

def _build_imports(scope, ctx):
    imports = {}
    for imp in scope.root.iter('IMPORT'):
        child = scope.inline_children.get(imp.get('inlineDEF'))
        imported = imp.get('importedDEF')
        if child is None or not imported:
            ctx.note_unhandled('IMPORT', 'inlineDEF did not resolve to a loaded Inline (imported name unusable)', scope, imp,
                               example=f"{scope.filename}::{imp.get('inlineDEF')}.{imported}")
            continue
        imports[imp.get('AS') or imported] = child.prefix + imported
    return imports

def _parse_hanim_motion_channels(channels):
    if not channels:
        return []
    tokens = re.findall(r'([A-Za-z_][\w.-]*)\s*(?:\[\s*|\s+)(translation|rotation|scale)\s*\]?',
                        channels)
    if tokens:
        return [(j, f, 4 if f == 'rotation' else 3) for j, f in tokens]

    raw = re.sub(r'[\[\],]', ' ', channels).split()
    out = []
    i = 0
    while i + 1 < len(raw):
        if raw[i+1] in ('translation', 'rotation', 'scale'):
            f = raw[i+1]
            out.append((raw[i], f, 4 if f == 'rotation' else 3))
            i += 2
        else:
            i += 1
    return out

def convert_hanim_motions(scope, gltf, bin_blob, def_to_node_idx, node_to_center, prefix=''):
    used = set()
    for motion in scope.root.findall('.//HAnimMotion'):
        values = np.asarray(parse_array(motion.get('values', '')), dtype=np.float32)
        channels = _parse_hanim_motion_channels(motion.get('channels', ''))
        joints = parse_mfstring(motion.get('joints', '')) or \
                 motion.get('joints', '').replace(',', ' ').split()

        if not channels or not values.size:
            ctx_rec = {
                "file": scope.filename, "prefix": prefix, "type": "HAnimMotion",
                "DEF": motion.get("DEF"), "attributes": dict(motion.attrib),
                "converted": False,
                "reason": "preserved because channels/values could not be decoded"
            }
            if not hasattr(scope, "_unconverted_motion"):
                scope._unconverted_motion = []
            scope._unconverted_motion.append(ctx_rec)
            continue

        if len(channels) == 0 and joints:
            channels = [(j, 'rotation', 4) for j in joints]
        elif joints and len(channels) != len(joints):
            field_tokens = [x for x in re.sub(r'[\[\],]', ' ', motion.get('channels','')).split()
                            if x in ('translation','rotation','scale')]
            if field_tokens and len(field_tokens) == len(joints):
                channels = [(j, f, 4 if f == 'rotation' else 3)
                            for j, f in zip(joints, field_tokens)]

        width = sum(w for _, _, w in channels)
        if width <= 0 or len(values) < width:
            continue
        frame_count = len(values) // width
        values = values[:frame_count * width].reshape(frame_count, width)
        start_frame = max(0, int(motion.get('startFrame', '0')))
        end_frame = int(motion.get('endFrame', '0'))
        if end_frame > start_frame:
            stop = min(frame_count, end_frame - start_frame + 1)
        else:
            stop = frame_count
        values = values[:stop]
        if len(values) < 1:
            continue

        dt = max(float(motion.get('frameDuration', '0.1')), 1e-9)
        times = (np.arange(len(values), dtype=np.float32) * dt)
        samplers, channels_out = [], []
        cursor = 0

        enabled_raw = parse_array(motion.get('channelsEnabled', ''), str, default=[])
        for ch_i, (joint, field, w) in enumerate(channels):
            enabled = True
            if ch_i < len(enabled_raw):
                enabled = str(enabled_raw[ch_i]).lower() not in ('false','0')
            data = values[:, cursor:cursor+w]
            cursor += w
            if not enabled:
                continue

            node_idx = def_to_node_idx.get(prefix + joint)
            if node_idx is None:
                node_idx = def_to_node_idx.get(joint)
            if node_idx is None:
                continue

            if field == 'rotation':
                out = np.asarray(
                    [axis_angle_to_quat(*row) for row in data], dtype=np.float32)
                path = 'rotation'
                typ = VEC4
            elif field == 'translation':
                out = data.astype(np.float32).copy()
                if node_idx in node_to_center:
                    out += node_to_center[node_idx]
                path = 'translation'
                typ = VEC3
            else:
                out = data.astype(np.float32)
                path = 'scale'
                typ = VEC3

            t_off, t_len = append_to_buffer(bin_blob, times.tobytes())
            gltf.bufferViews.append(BufferView(
                buffer=0, byteOffset=t_off, byteLength=t_len))
            gltf.accessors.append(Accessor(
                bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                count=len(times), type=SCALAR,
                min=[float(times.min())], max=[float(times.max())]))
            t_acc = len(gltf.accessors)-1

            v_off, v_len = append_to_buffer(bin_blob, out.tobytes())
            gltf.bufferViews.append(BufferView(
                buffer=0, byteOffset=v_off, byteLength=v_len))
            gltf.accessors.append(Accessor(
                bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                count=len(out), type=typ))
            v_acc = len(gltf.accessors)-1

            samplers.append(AnimationSampler(
                input=t_acc, output=v_acc, interpolation='LINEAR'))
            channels_out.append(AnimationChannel(
                sampler=len(samplers)-1,
                target=AnimationChannelTarget(node=node_idx, path=path)))

        if channels_out:
            name = motion.get('name') or motion.get('DEF') or 'HAnimMotion'
            gltf.animations.append(Animation(
                name=f"Anim_{prefix}{name}", samplers=samplers,
                channels=channels_out))
            used.add(motion.get('DEF'))
    return used

def _audit_animation(scope, ctx, consumed, used_defs):
    for r in scope.root.findall('.//ROUTE'):
        if id(r) not in consumed:
            rec = {
                "file": scope.filename,
                "prefix": scope.prefix,
                "fromNode": r.get('fromNode'),
                "fromField": r.get('fromField'),
                "toNode": r.get('toNode'),
                "toField": r.get('toField'),
                "converted": False,
                "reason": "ROUTE preserved; no standard glTF event-routing equivalent"
            }
            ctx.behavior.append({"type": "ROUTE", **rec})

    for tag in ('TimeSensor', 'PositionInterpolator', 'OrientationInterpolator', 'HAnimMotion'):
        for el in scope.root.findall(f'.//{tag}'):
            if el.get('DEF') not in used_defs:
                ctx.behavior.append({
                    "file": scope.filename,
                    "prefix": scope.prefix,
                    "type": tag,
                    "DEF": el.get('DEF'),
                    "attributes": dict(el.attrib),
                    "converted": False,
                    "reason": "node preserved; it did not contribute to a native glTF animation channel"
                })

# ---------------------------------------------------------------------------
# Skins: one glTF skin per HAnimHumanoid
# ---------------------------------------------------------------------------

def build_skins(ctx):
    gltf, bin_blob = ctx.gltf, ctx.bin_blob

    for scope, cname, entries in ctx.orphan_shapes:
        owner = next((g for g in ctx.skin_groups if cname and g.scope is scope and g.skincoord_name == cname), None)
        if owner is not None: owner.meshes.extend(entries)

    world_mats = compute_world_matrices(gltf.nodes)
    skinned_nodes = []

    for g in ctx.skin_groups:
        if not g.joint_skinning: continue

        joint_defs = sorted(g.joint_skinning.keys(), key=lambda d: ctx.def_to_node_idx.get(d, 999999))
        joint_node_indices, joint_order = [], {}
        for d in joint_defs:
            if d in ctx.def_to_node_idx:
                joint_order[d] = len(joint_node_indices)
                joint_node_indices.append(ctx.def_to_node_idx[d])
        if not joint_node_indices: continue
        print(f"  INFO: HAnim skinning '{g.name}': {len(joint_node_indices)} joints, {len(g.meshes)} skin primitive(s) – building glTF Skin…")

        per_vertex = {}
        for j_def, infl in g.joint_skinning.items():
            if j_def not in joint_order: continue
            for coord_idx, weight in infl:
                per_vertex.setdefault(coord_idx, []).append((joint_order[j_def], weight))

        for v in per_vertex.values():
            if not v: continue
            v.sort(key=lambda x: x[1], reverse=True)
            if len(v) > 4: v[:] = v[:4]
            total = sum(w for _, w in v)
            if total > 0.0:
                for i in range(len(v)): v[i] = (v[i][0], v[i][1] / total)
            else:
                v[:] = [(0, 1.0)]


        # 4. inverse bind matrices.
        #    The skinned mesh is re-parented to WorldRoot with identity, so the humanoid's own placement
        #    (e.g. the Transform an Inline sits under) has to be baked into the IBM:  IBM = inv(jointWorld) * humanoidWorld.
        #    glTF stores matrices column-major, hence the transpose before flattening.
        humanoid_world = world_mats[g.inner_idx].astype(np.float64)
        ibms = []
        for j in joint_node_indices:
            m = np.linalg.pinv(world_mats[j].astype(np.float64)) @ humanoid_world
            
            # Snap small values close to zero (within 6 decimal digits) to 0.0
            m[np.abs(m) < 1e-6] = 0.0
            
            # glTF requires inverseBindMatrices to be affine: bottom row MUST be [0, 0, 0, 1]
            m[3, :3] = 0.0
            m[3, 3] = 1.0
            
            ibms.append(m.T.flatten())

        ibm_array = np.array(ibms, dtype=np.float32)
        # Final pass on float32 array to eliminate any residual -0.0 or near-zero float noise
        ibm_array[np.abs(ibm_array) < 1e-6] = 0.0

        ibm_acc = add_accessor(gltf, bin_blob, ibm_array, MAT4, FLOAT, None)



#        humanoid_world = world_mats[g.inner_idx].astype(np.float64)
#        ibm_array = np.array([(np.linalg.pinv(world_mats[j].astype(np.float64)) @ humanoid_world).T.flatten()
#                              for j in joint_node_indices], dtype=np.float32)
#        ibm_acc = add_accessor(gltf, bin_blob, ibm_array, MAT4, FLOAT, None)

        gltf.skins.append(Skin(name=g.name, joints=joint_node_indices, inverseBindMatrices=ibm_acc))
        skin_idx = len(gltf.skins) - 1

        for mesh_idx, prim_local_idx, p_indices_list in g.meshes:
            prim = gltf.meshes[mesh_idx].primitives[prim_local_idx]
            prim_attrs = prim.setdefault("attributes", {})
            num_verts = len(p_indices_list)
            joints_data = np.zeros((num_verts, 4), dtype=np.uint16)
            weights_data = np.zeros((num_verts, 4), dtype=np.float32)

            for v in range(num_verts):
                infs = per_vertex.get(p_indices_list[v])
                if infs:
                    infs.sort(key=lambda x: x[1], reverse=True)
                    total_w = 0.0
                    for k in range(min(len(infs), 4)):
                        joints_data[v, k] = infs[k][0]
                        weights_data[v, k] = infs[k][1]
                        total_w += infs[k][1]
                    if total_w > 0: weights_data[v, :4] /= total_w
                    else:           joints_data[v, 0], weights_data[v, 0] = 0, 1.0
                else:
                    joints_data[v, 0], weights_data[v, 0] = 0, 1.0

            prim_attrs["JOINTS_0"] = add_accessor(gltf, bin_blob, joints_data, VEC4, UNSIGNED_SHORT, ARRAY_BUFFER)
            prim_attrs["WEIGHTS_0"] = add_accessor(gltf, bin_blob, weights_data, VEC4, FLOAT, ARRAY_BUFFER)

            node_idx = ctx.mesh_to_node.get(mesh_idx)
            if node_idx is not None:
                gltf.nodes[node_idx].skin = skin_idx
                if node_idx not in skinned_nodes: skinned_nodes.append(node_idx)

    if skinned_nodes:
        print(f"  INFO: Reparenting {len(skinned_nodes)} skinned mesh node(s) to root (identity transform) for correct joint-center animation")
        parent_of = {c: i for i, n in enumerate(gltf.nodes) for c in (n.children or [])}
        root_node = gltf.nodes[0]
        if root_node.children is None: root_node.children = []
        for n_idx in skinned_nodes:
            node = gltf.nodes[n_idx]
            node.translation, node.rotation, node.scale = [0.0, 0.0, 0.0], [0.0, 0.0, 0.0, 1.0], [1.0, 1.0, 1.0]
            old = parent_of.get(n_idx)
            if old is not None and gltf.nodes[old].children and n_idx in gltf.nodes[old].children:
                gltf.nodes[old].children.remove(n_idx)
            if n_idx not in root_node.children: root_node.children.append(n_idx)

# ---------------------------------------------------------------------------
# Reports
# ---------------------------------------------------------------------------

def print_reports(ctx):
    inl = ctx.inlines
    print("\n  ---- Inline report ----")
    if not inl:
        print("  No Inline nodes encountered.")
    else:
        by = lambda s: sum(1 for r in inl if r['status'] == s)
        print(f"  Inline nodes encountered: {len(inl)}  (loaded {by('LOADED')}, skipped {by('SKIPPED')}, failed {by('FAILED')})")
        for r in inl:
            if r['status'] != 'LOADED':
                print(f"    {r['status']:<8} {r['name']} (in {r['in_file']}): {r['detail']}")

    print("\n  ---- Unhandled X3D nodes ----")
    if not ctx.unhandled:
        print("  None – every node encountered was handled.")
    else:
        total = sum(v['count'] for v in ctx.unhandled.values())
        print(f"  {len(ctx.unhandled)} node type(s), {total} instance(s) not (fully) handled:")
        for tag, v in sorted(ctx.unhandled.items(), key=lambda kv: (-kv[1]['count'], kv[0])):
            print(f"    {tag:<28} x{v['count']:<4} {' | '.join(v['reasons'])}")
            print(f"    {'':<28}       e.g. {', '.join(v['examples'])}")
    print()

# ---------------------------------------------------------------------------
# Main converter
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    print(f"\nConverting: {x3d_filepath}")
    main_path = os.path.abspath(x3d_filepath)
    try:
        root = ET.fromstring(_read_x3d_bytes(main_path))
        strip_namespaces(root)
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}"); return None

    bin_blob = bytearray()
    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Advanced Converter + Full HAnim Skinning & Animation + Multi-Inline", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[], cameras=[], images=[], textures=[],
        skins=[]
    )
    ctx = ConvertCtx(gltf, bin_blob)

    head = root.find('head')
    if head is not None:
        extras = {m.get('name'): m.get('content') for m in head.findall('meta') if m.get('name') and m.get('content')}
        if extras: gltf.asset.extras = {"X3D_Metadata": extras}

    scene_root = root.find('Scene')
    if scene_root is None:
        scene_root = root
#    main_scope = Scope(root, scene_root, os.path.dirname(main_path), '', os.path.basename(main_path))
#    ctx.scopes.append(main_scope)
#    ctx.load_stack.append(main_path)

    main_scope = Scope(root, scene_root, os.path.dirname(main_path), '', os.path.basename(main_path))
    ctx.scopes.append(main_scope)
    ctx.load_stack.append(main_path)

    # If the root file has a unit length conversion factor, scale WorldRoot
    if main_scope.unit_scale != 1.0:
        gltf.nodes[0].scale = [main_scope.unit_scale, main_scope.unit_scale, main_scope.unit_scale]

    if head is not None:
        for el in head:
            if el.tag == 'meta':
                continue
            if el.tag == 'component':
                ctx.behavior.append({
                    "file": main_scope.filename,
                    "type": "component",
                    "attributes": dict(el.attrib),
                    "converted": True,
                    "reason": "preserved as X3D profile metadata"
                })
            elif el.tag == 'unit':
                ctx.units.append(dict(el.attrib))
            else:
                ctx.note_unhandled(
                    el.tag,
                    'head element not representable as a glTF node',
                    main_scope, el)

    traverse_x3d_node(main_scope.content, 0, ctx, main_scope, None)

    for scope in list(ctx.scopes):
        motion_used = convert_hanim_motions(
            scope, gltf, bin_blob, ctx.def_to_node_idx, ctx.node_to_center,
            prefix=scope.prefix)
        consumed, used = convert_animations(
            scope.root, gltf, bin_blob, ctx.def_to_node_idx, ctx.node_to_center,
            prefix=scope.prefix, imports=_build_imports(scope, ctx))
        used.update(motion_used)
        _audit_animation(scope, ctx, consumed, used)

    build_skins(ctx)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)

    gltf_dict = to_plain(gltf)
    if ctx.mat_list:
        gltf_dict['materials'] = ctx.mat_list

    if ctx.behavior:
        gltf_dict.setdefault('asset', {}).setdefault('extras', {})['x3d_behavior'] = ctx.behavior
    if ctx.units:
        gltf_dict.setdefault('asset', {}).setdefault('extras', {})['x3d_units'] = ctx.units

#    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
#        mesh_plain['primitives'] = [to_plain(p) for p in mesh_obj.primitives]
    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [
            to_plain(p) for p in mesh_obj.primitives 
            if (isinstance(p, dict) and p.get('attributes')) or getattr(p, 'attributes', None)
        ]

    lights, light_nodes = [], []
    for scope in ctx.scopes:
        for dlight in scope.root.findall('.//DirectionalLight'):
            if dlight.get('on', 'true').lower() in ('false', '0'): continue
            lights.append({"type": "directional", "color": parse_array(dlight.get('color', '1 1 1')), "intensity": float(dlight.get('intensity', '1.0'))})
            node = {"name": scope.prefix + dlight.get('DEF', f"DirLight_{len(lights)-1}"), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}}
            rot = dir_to_quat(parse_array(dlight.get('direction', '0 0 -1')))
            if rot != [0, 0, 0, 1]: node["rotation"] = rot
            light_nodes.append(node)
        for plight in scope.root.findall('.//PointLight'):
            if plight.get('on', 'true').lower() in ('false', '0'): continue
            lights.append({"type": "point", "color": parse_array(plight.get('color', '1 1 1')), "intensity": float(plight.get('intensity', '1.0'))})
            light_nodes.append({"name": scope.prefix + plight.get('DEF', f"PtLight_{len(lights)-1}"), "translation": parse_array(plight.get('location', '0 0 0')), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}})

    if lights:
        gltf_dict.setdefault('extensionsUsed', []).append('KHR_lights_punctual')
        gltf_dict.setdefault('extensions', {})['KHR_lights_punctual'] = {"lights": lights}
        start_idx = len(gltf_dict.get('nodes', []))
        gltf_dict['nodes'].extend(light_nodes)
        gltf_dict['nodes'][0].setdefault('children', []).extend(range(start_idx, start_idx + len(light_nodes)))

    write_glb(gltf_dict, bin_blob, glb_filepath)
    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath}  ({size_kb:.1f} KB) | files={len(ctx.scopes)} | nodes={len(gltf_dict.get('nodes', []))} | meshes={len(gltf_dict.get('meshes', []))} | animations={len(gltf_dict.get('animations', []))} | textures={len(gltf_dict.get('textures', []))} | skins={len(gltf_dict.get('skins', []))}")

    print_reports(ctx)
    return {'inlines': ctx.inlines, 'unhandled': ctx.unhandled}

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        in_f  = sys.argv[1]
        out_f = sys.argv[2] if len(sys.argv) > 2 else os.path.splitext(in_f)[0] + ".glb"
        convert_x3d_to_glb(in_f, out_f)
    else:
        base = "/home/yottzumm/www.web3d.org/x3d/content/examples/HumanoidAnimation/Medical"
        convert_x3d_to_glb(f"{base}/LaughingUpperSkeleton.x3d",               "LaughingUpperSkeleton.glb")
        convert_x3d_to_glb(f"{base}/AnimatedAssembledHumanSkeleton.x3d", "AnimatedAssembledHumanSkeleton.glb")
        convert_x3d_to_glb(f"../../medicalbones/0scaled/0skeleton1AImapped.x3d", "0skeleton1.glb")
        convert_x3d_to_glb(f"HumanoidComplete.x3d", "HumanoidComplete.glb")
        convert_x3d_to_glb(f"HumanoidCompleteShort.x3d", "HumanoidCompleteShort.glb")
        convert_x3d_to_glb(f"JoeKickAnimation.x3d", "JoeKickAnimation.glb")
        convert_x3d_to_glb(f"Gramps8Final.x3d", "Gramps8Final.glb")
        convert_x3d_to_glb(f"/home/yottzumm/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/AllCharactersMainStage.x3d", "AllCharactersMainStage.glb")

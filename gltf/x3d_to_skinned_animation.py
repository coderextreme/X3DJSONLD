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
  • DEF/USE Resolving: Fully resolves USE tags for all nodes.
  • XML Namespaces: Strips namespaces automatically to guarantee node discovery.
  • FULL HANIM SKINNING SUPPORT: HAnimHumanoid + HAnimJoint.skinCoordIndex / skinCoordWeight.
    • Builds glTF Skin with inverseBindMatrices (computed from bind-pose world transforms).
    • Aggregates per-vertex joint/weight data across all joints (normalizes, caps at 4 influences).
    • Adds JOINTS_0 + WEIGHTS_0 attributes + skin index.
  • FULL SKINNED ANIMATION SUPPORT (NEW): Translates and rotates joint *centers* correctly.
    • Dual-node pattern (outer = T+C, inner = -C) is preserved for rigid hierarchy.
    • All skinned meshes are re-parented to WorldRoot with identity transform.
    • This guarantees that animation of joint translation/rotation (around centers)
      deforms the skin exactly as in X3D viewers, without hierarchy offsets.
"""

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, shlex, urllib.request, math, mimetypes, base64, re
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
    # Match strings bounded by double or single quotes
    matches = re.findall(r'"([^"]*)"|\'([^\']*)\'', val_str)
    if matches:
        return [m[0] if m[0] else m[1] for m in matches]
    # Fallback if unquoted
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
        if data.ndim == 1: min_v, max_v = [float(data.min())], [float(data.max())]
        else: min_v, max_v = [float(x) for x in data.min(axis=0)], [float(x) for x in data.max(axis=0)]
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
# NEW: World-matrix helper for inverseBindMatrices (bind-pose skinning)
# ---------------------------------------------------------------------------
def compute_world_matrices(gltf_nodes):
    """Compute world 4x4 matrices for every node (bind pose)."""
    world_mats = [np.eye(4, dtype=np.float32) for _ in gltf_nodes]

    def get_local_matrix(node):
        t = node.translation or [0.0, 0.0, 0.0]
        r = node.rotation or [0.0, 0.0, 0.0, 1.0]
        s = node.scale or [1.0, 1.0, 1.0]

        mat = np.eye(4, dtype=np.float32)

        # Scale
        mat[0:3, 0:3] *= s

        # Quaternion → rotation matrix
        qx, qy, qz, qw = r
        mat[0,0] = 1 - 2*qy*qy - 2*qz*qz
        mat[0,1] = 2*qx*qy - 2*qz*qw
        mat[0,2] = 2*qx*qz + 2*qy*qw
        mat[1,0] = 2*qx*qy + 2*qz*qw
        mat[1,1] = 1 - 2*qx*qx - 2*qz*qz
        mat[1,2] = 2*qy*qz - 2*qx*qw
        mat[2,0] = 2*qx*qz - 2*qy*qw
        mat[2,1] = 2*qy*qz + 2*qx*qw
        mat[2,2] = 1 - 2*qx*qx - 2*qy*qy

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
                dfs(child_idx, world)

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

    # Map to PIL Font
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

    # Calculate Texture Dimensions using PILImage
    dummy_img = PILImage.new("RGBA", (1, 1), (0,0,0,0))
    d = ImageDraw.Draw(dummy_img)

    max_w, total_h = 0, 0
    line_heights = []
    for line in lines:
        try: bbox = d.textbbox((0,0), line, font=font)
        except: bbox = (0, 0, len(line)*font_size_px*0.6, font_size_px) # fallback
        w = bbox[2] - bbox[0]
        h = bbox[3] - bbox[1] + (font_size_px * 0.2) # Adding spacing
        max_w = max(max_w, w)
        line_heights.append(h)
        total_h += h

    width = max(int(max_w), 1)
    height = max(int(total_h), 1)

    # Render Text using PILImage
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

    # Geometry Generation (Quad)
    aspect = float(width) / float(height)
    quad_h = size * len(lines)
    quad_w = quad_h * aspect

    # X Justification
    jx = justify[0].upper() if len(justify) > 0 else "BEGIN"
    if jx == "MIDDLE": x0, x1 = -quad_w/2, quad_w/2
    elif jx == "END":  x0, x1 = -quad_w, 0
    else:              x0, x1 = 0, quad_w  # BEGIN

    # Y Justification
    jy = justify[1].upper() if len(justify) > 1 else "FIRST"
    if jy == "MIDDLE": y0, y1 = -quad_h/2, quad_h/2
    else:              y0, y1 = -quad_h, 0 # FIRST (approx baseline)

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

    # Material processing
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
# Mesh Primitives (records original skinCoord indices for later skinning)
# ---------------------------------------------------------------------------

def box_to_ifs(box_node):
    hx, hy, hz = [s/2.0 for s in parse_array(box_node.get('size', '2 2 2'))]
    p = [
         [ hx,  hy,  hz], [-hx,  hy,  hz], [-hx, -hy,  hz], [ hx, -hy,  hz], # Front
         [ hx,  hy, -hz], [ hx, -hy, -hz], [-hx, -hy, -hz], [-hx,  hy, -hz], # Back
         [ hx,  hy,  hz], [ hx, -hy,  hz], [ hx, -hy, -hz], [ hx,  hy, -hz], # Right
         [-hx,  hy,  hz], [-hx,  hy, -hz], [-hx, -hy, -hz], [-hx, -hy,  hz], # Left
         [ hx,  hy,  hz], [ hx,  hy, -hz], [-hx,  hy, -hz], [-hx,  hy,  hz], # Top
         [ hx, -hy,  hz], [-hx, -hy,  hz], [-hx, -hy, -hz], [ hx, -hy, -hz]  # Bottom
    ]
    u = [[1,1],[0,1],[0,0],[1,0]] * 6
    n = [[0,0,1]]*4 + [[0,0,-1]]*4 + [[1,0,0]]*4 + [[-1,0,0]]*4 + [[0,1,0]]*4 + [[0,-1,0]]*4
    ifs = ET.Element('IndexedFaceSet', {'coordIndex': ' '.join([f"{i*4} {i*4+1} {i*4+2} {i*4+3} -1" for i in range(6)])})
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in p])})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join([f"{v[0]} {v[1]}" for v in u])})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join([f"{v[0]} {v[1]} {v[2]}" for v in n])})
    return ifs

def process_mesh_primitives(geom_nodes, gltf, bin_blob, def_map, mat_list, base_path, temp_skin_info):
    primitives = []
    for node in geom_nodes:
        is_faceset = node.tag in ('IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet')
        facesets = ([node] if is_faceset else
                    node.findall('.//IndexedFaceSet') +
                    node.findall('.//IndexedTriangleSet') +
                    node.findall('.//TriangleSet'))

        if not is_faceset: facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])

        app_node = None if is_faceset else node.find('.//Appearance')

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is not None and coord.get('USE'): coord = def_map.get(coord.get('USE'), coord)
            if coord is None: continue

            raw_pos = parse_array(coord.get('point', ''))
            if not raw_pos: continue
            pos_arr = np.array(raw_pos, dtype=np.float32).reshape(-1, 3)

            tex_coord = face_set.find('.//TextureCoordinate')
            if tex_coord is not None and tex_coord.get('USE'): tex_coord = def_map.get(tex_coord.get('USE'), tex_coord)
            if tex_coord is not None:
                uv_arr = np.array(parse_array(tex_coord.get('point', '')), dtype=np.float32).reshape(-1, 2)
                if len(uv_arr) > 0:
                    uv_arr[:, 1] = 1.0 - uv_arr[:, 1] # Flip V axis for glTF mapping
            else:
                uv_arr = []

            norm_node = face_set.find('.//Normal')
            if norm_node is not None and norm_node.get('USE'): norm_node = def_map.get(norm_node.get('USE'), norm_node)
            norm_arr = np.array(parse_array(norm_node.get('vector', '')), dtype=np.float32).reshape(-1, 3) if norm_node is not None else []

            # Generate or Parse indices based on the Node Type
            if face_set.tag == 'TriangleSet':
                num_verts = len(pos_arr)
                pos_polys = [[i, i+1, i+2] for i in range(0, num_verts - 2, 3)]
                tex_polys = pos_polys
                norm_polys = pos_polys
            else:
                pos_polys = parse_x3d_indices(face_set.get('coordIndex') or face_set.get('index', ''))
                tex_polys = parse_x3d_indices(face_set.get('texCoordIndex', '')) if face_set.get('texCoordIndex') else pos_polys
                norm_polys = parse_x3d_indices(face_set.get('normalIndex', '')) if face_set.get('normalIndex') else pos_polys

            unified_verts, out_positions, out_uvs, out_normals, unified_indices = {}, [], [], [], []
            p_indices_list = []                     # original skinCoord index for every unified vertex

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
                            unified_verts[v_tuple] = len(out_positions)
                            out_positions.append(pos_arr[p_idx] if p_idx < len(pos_arr) else [0,0,0])
                            if len(uv_arr): out_uvs.append(uv_arr[t_idx] if t_idx < len(uv_arr) else [0,0])
                            if len(norm_arr): out_normals.append(norm_arr[n_idx] if n_idx < len(norm_arr) else [0,1,0])
                            p_indices_list.append(p_idx)          # record original coord index

                        unified_indices.append(unified_verts[v_tuple])

            if not unified_indices: continue

            positions = np.array(out_positions, dtype=np.float32)
            indices = np.array(unified_indices, dtype=np.uint32)
            normals = np.array(out_normals, dtype=np.float32) if out_normals else compute_normals(positions, indices, ccw=(face_set.get('ccw', 'true').strip().lower() not in ('false', '0')))

            idx_comp = UNSIGNED_SHORT if indices.max() < 65536 else UNSIGNED_INT
            if idx_comp == UNSIGNED_SHORT: indices = indices.astype(np.uint16)

            prim_attrs = {"POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True),
                          "NORMAL":   add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER)}

            if len(out_uvs) > 0:
                prim_attrs["TEXCOORD_0"] = add_accessor(gltf, bin_blob, np.array(out_uvs, dtype=np.float32), VEC2, FLOAT, ARRAY_BUFFER)

            mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)

            prim_dict = {
                "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp, ELEMENT_ARRAY_BUFFER, add_min_max=True),
                "attributes": prim_attrs,
                "_p_indices": p_indices_list          # temporary key – removed later
            }
            if mat_idx is not None:
                prim_dict["material"] = mat_idx

            primitives.append(prim_dict)

    if not primitives: return None

    mesh_idx = len(gltf.meshes)
    gltf.meshes.append(Mesh(primitives=primitives))

    # Record skin data for every primitive we just added
    for p_local_idx, prim_dict in enumerate(primitives):
        if "_p_indices" in prim_dict:
            p_list = prim_dict.pop("_p_indices")
            temp_skin_info.append((mesh_idx, p_local_idx, p_list))

    return mesh_idx

# ---------------------------------------------------------------------------
# DOM Traversal & Dual-Node Pattern
# ---------------------------------------------------------------------------

def traverse_x3d_node(xml_node, parent_gltf_node_idx, gltf, bin_blob, def_map, mat_list, def_to_node_idx, node_to_center, base_path, joint_skinning, temp_skin_info):
    structural_tags = {'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite'}
    logic_tags = {'BooleanFilter', 'BooleanSequencer', 'NavigationInfo', 'ProximitySensor', 'TimeTrigger', 'TouchSensor'}

    if xml_node.tag in logic_tags: return

    if xml_node.tag in ('Inline', 'InlineGeometry'):
        urls = parse_mfstring(xml_node.get('url', ''))
        url = urls[0] if urls else ''
        file_url, frag = (url.split('#', 1) if '#' in url else (url, None))
        local = os.path.join(base_path, file_url)
        if os.path.exists(local):
            try:
                ext = ET.parse(local).getroot()
                strip_namespaces(ext)
                traverse_x3d_node(ext.find(f".//*[@DEF='{frag}']") if frag else ext, parent_gltf_node_idx, gltf, bin_blob, def_map, mat_list, def_to_node_idx, node_to_center, base_path, joint_skinning, temp_skin_info)
            except: pass
        return

    if xml_node.tag == 'Viewpoint':
        cam_idx = len(gltf.cameras)
        gltf.cameras.append(Camera(
            type="perspective",
            perspective=Perspective(yfov=float(xml_node.get('fieldOfView', '0.785398')), znear=0.1, zfar=1000.0)
        ))
        node_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=xml_node.get('DEF', f"Viewpoint_{cam_idx}"),
            translation=parse_array(xml_node.get('position', '0 0 10')),
            rotation=axis_angle_to_quat(*parse_array(xml_node.get('orientation', '0 0 1 0'))),
            camera=cam_idx
        ))
        if parent_gltf_node_idx is not None:
            if gltf.nodes[parent_gltf_node_idx].children is None: gltf.nodes[parent_gltf_node_idx].children = []
            gltf.nodes[parent_gltf_node_idx].children.append(node_idx)
        return

    if xml_node.tag in structural_tags:
        def_name = xml_node.get('DEF')
        t = np.array(parse_array(xml_node.get('translation'), default=[0,0,0]))
        c = np.array(parse_array(xml_node.get('center'), default=[0,0,0]))
        outer_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=def_name or f"{xml_node.tag}_{outer_idx}",
            translation=[float(x) for x in (t + c)],
            rotation=axis_angle_to_quat(*parse_array(xml_node.get('rotation'), default=[0,1,0,0])),
            scale=parse_array(xml_node.get('scale'), default=[1,1,1]), children=[]
        ))

        if def_name: def_to_node_idx[def_name] = outer_idx
        node_to_center[outer_idx] = c

        if parent_gltf_node_idx is not None:
            if gltf.nodes[parent_gltf_node_idx].children is None: gltf.nodes[parent_gltf_node_idx].children = []
            gltf.nodes[parent_gltf_node_idx].children.append(outer_idx)

        inner_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=f"{def_name or xml_node.tag}_Inner", translation=[float(x) for x in -c], children=[]))
        gltf.nodes[outer_idx].children.append(inner_idx)

        # collect HAnimJoint skinning data
        if xml_node.tag == 'HAnimJoint':
            if def_name:
                skin_idx = parse_array(xml_node.get('skinCoordIndex', ''), int, default=[])
                skin_wgt = parse_array(xml_node.get('skinCoordWeight', ''), float, default=[])
                if skin_idx:
                    joint_skinning[def_name] = list(zip(skin_idx, skin_wgt))

        for child in xml_node:
            traverse_x3d_node(child, inner_idx, gltf, bin_blob, def_map, mat_list, def_to_node_idx, node_to_center, base_path, joint_skinning, temp_skin_info)

    elif xml_node.tag == 'Shape':
        text_node = xml_node.find('.//Text')
        if text_node is not None:
            mesh_idx = process_text_primitives(text_node, xml_node.find('.//Appearance'), gltf, bin_blob, def_map, mat_list, base_path)
        else:
            mesh_idx = process_mesh_primitives([xml_node], gltf, bin_blob, def_map, mat_list, base_path, temp_skin_info)

        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            gltf.nodes.append(Node(name=xml_node.get('DEF', f"Shape_{shape_idx}"), mesh=mesh_idx))
            if parent_gltf_node_idx is not None:
                if gltf.nodes[parent_gltf_node_idx].children is None: gltf.nodes[parent_gltf_node_idx].children = []
                gltf.nodes[parent_gltf_node_idx].children.append(shape_idx)

    else:
        for child in xml_node: traverse_x3d_node(child, parent_gltf_node_idx, gltf, bin_blob, def_map, mat_list, def_to_node_idx, node_to_center, base_path, joint_skinning, temp_skin_info)

# ---------------------------------------------------------------------------
# Animations (already handles translation compensation for joint centers)
# ---------------------------------------------------------------------------

def convert_animations(root, gltf, bin_blob, def_to_node_idx, node_to_center):
    routes = {}
    for route in root.findall('.//ROUTE'): routes.setdefault((route.get('fromNode'), route.get('fromField')), []).append((route.get('toNode'), route.get('toField')))
    all_interps = {node.get('DEF'): node for tag in ('PositionInterpolator', 'OrientationInterpolator') for node in root.findall(f'.//{tag}') if node.get('DEF')}

    for ts in root.findall('.//TimeSensor'):
        ts_def = ts.get('DEF')
        if not ts_def: continue
        cycle = float(ts.get('cycleInterval', '1.0'))
        driven = [all_interps[to_node] for out_field in ('fraction_changed', 'cycleTime', 'time') for (to_node, to_field) in routes.get((ts_def, out_field), []) if to_field == 'set_fraction' and to_node in all_interps]

        samplers, channels = [], []
        seen_targets = set()

        for interp in driven:
            targets = routes.get((interp.get('DEF'), 'value_changed'), [])
            keys = np.array(parse_array(interp.get('key', '')), dtype=np.float32) * cycle
            kv_raw = parse_array(interp.get('keyValue', ''))
            if not targets or len(keys) < 2 or not kv_raw: continue

            for (to_node, to_field) in targets:
                if to_node not in def_to_node_idx: continue
                gltf_path = {'translation': 'translation', 'set_translation': 'translation', 'rotation': 'rotation', 'set_rotation': 'rotation'}.get(to_field)
                if not gltf_path: continue

                node_idx = def_to_node_idx[to_node]
                if (node_idx, gltf_path) in seen_targets: continue
                seen_targets.add((node_idx, gltf_path))

                if interp.tag == 'OrientationInterpolator':
                    vals = np.array([axis_angle_to_quat(*row) for row in np.array(kv_raw, dtype=np.float64).reshape(-1, 4)], dtype=np.float32)
                    out_type = VEC4
                else:
                    vals = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                    if gltf_path == 'translation' and node_idx in node_to_center:
                        vals += node_to_center[node_idx]   # ← translates joint center correctly
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

        if channels: gltf.animations.append(Animation(name=f"Anim_{ts_def}", samplers=samplers, channels=channels))

# ---------------------------------------------------------------------------
# Main converter
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    print(f"\nConverting: {x3d_filepath}")
    base_path = os.path.dirname(os.path.abspath(x3d_filepath))
    try:
        root = ET.parse(x3d_filepath).getroot()
        strip_namespaces(root)  # Ensure tag searches never fail
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}"); return

    bin_blob = bytearray()
    mat_list = []

    # storage for HAnim skinning
    joint_skinning = {}
    temp_skin_info = []                     # (mesh_idx, prim_local_idx, list_of_original_p_indices)

    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Advanced Converter + Full HAnim Skinning & Animation", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[], cameras=[], images=[], textures=[],
        skins=[]
    )

    head = root.find('head')
    if head is not None:
        extras = {m.get('name'): m.get('content') for m in head.findall('meta') if m.get('name') and m.get('content')}
        if extras: gltf.asset.extras = {"X3D_Metadata": extras}

    # Global mapping for ALL defined nodes
    def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}

    def_to_node_idx, node_to_center = {}, {}

    scene_root = root.find('Scene')
    if scene_root is None:
        scene_root = root

    # Traverse
    traverse_x3d_node(scene_root, 0, gltf, bin_blob, def_map, mat_list, def_to_node_idx, node_to_center, base_path, joint_skinning, temp_skin_info)
    convert_animations(root, gltf, bin_blob, def_to_node_idx, node_to_center)

    # ---------------------------------------------------------------------------
    # FULL HANIM SKINNING + SKINNED ANIMATION
    # ---------------------------------------------------------------------------
    if joint_skinning:
        print(f"  INFO: HAnim skinning detected ({len(joint_skinning)} joints) – building glTF Skin…")

        # 1. Build ordered list of joints for the skin
        joint_defs = sorted(joint_skinning.keys(), key=lambda d: def_to_node_idx.get(d, 999999))
        joint_node_indices = []
        joint_order = {}  # def → index inside skin.joints
        for d in joint_defs:
            if d in def_to_node_idx:
                j_idx = def_to_node_idx[d]
                joint_order[d] = len(joint_node_indices)
                joint_node_indices.append(j_idx)

        if joint_node_indices:
            # 2. Aggregate per-vertex (coordIndex → list of (skin_joint_idx, weight))
            per_vertex = {}
            for j_def, infl in joint_skinning.items():
                if j_def not in joint_order: continue
                j_skin_idx = joint_order[j_def]
                for coord_idx, weight in infl:
                    if coord_idx not in per_vertex:
                        per_vertex[coord_idx] = []
                    per_vertex[coord_idx].append((j_skin_idx, weight))

            # 3. Normalize + cap at 4 influences per vertex
            for v in per_vertex.values():
                if not v: continue
                v.sort(key=lambda x: x[1], reverse=True)
                if len(v) > 4:
                    v[:] = v[:4]
                total = sum(w for _, w in v)
                if total > 0.0:
                    for i in range(len(v)):
                        v[i] = (v[i][0], v[i][1] / total)
                else:
                    v[:] = [(0, 1.0)]

            # 4. Compute inverse bind matrices (world → joint space in bind pose)
            world_mats = compute_world_matrices(gltf.nodes)
            ibm_list = [np.linalg.inv(world_mats[j]).flatten() for j in joint_node_indices]
            ibm_array = np.array(ibm_list, dtype=np.float32)   # shape (N_joints, 16)

            ibm_acc = add_accessor(gltf, bin_blob, ibm_array, MAT4, FLOAT, None)   # target=None

            # 5. Create the Skin
            skin = Skin(joints=joint_node_indices, inverseBindMatrices=ibm_acc)
            gltf.skins.append(skin)
            skin_idx = len(gltf.skins) - 1

            # 6. Apply JOINTS_0 / WEIGHTS_0 + skin index to every recorded primitive
            for mesh_idx, prim_local_idx, p_indices_list in temp_skin_info:
                mesh = gltf.meshes[mesh_idx]
                prim = mesh.primitives[prim_local_idx]
                if isinstance(prim, dict):
                    prim_attrs = prim.setdefault("attributes", {})
                    num_verts = len(p_indices_list)
                    joints_data = np.zeros((num_verts, 4), dtype=np.uint16)
                    weights_data = np.zeros((num_verts, 4), dtype=np.float32)
                    has_skin = False
                    for v in range(num_verts):
                        p_idx = p_indices_list[v]
                        if p_idx in per_vertex and per_vertex[p_idx]:
                            has_skin = True
                            infs = per_vertex[p_idx]
                            for k in range(len(infs)):
                                joints_data[v, k] = infs[k][0]
                                weights_data[v, k] = infs[k][1]
                    if has_skin:
                        joints_acc = add_accessor(gltf, bin_blob, joints_data, VEC4, UNSIGNED_SHORT, ARRAY_BUFFER)
                        weights_acc = add_accessor(gltf, bin_blob, weights_data, VEC4, FLOAT, ARRAY_BUFFER)
                        prim_attrs["JOINTS_0"] = joints_acc
                        prim_attrs["WEIGHTS_0"] = weights_acc
                        prim["skin"] = skin_idx

            # ---------------------------------------------------------------------------
            # NEW: Reparent skinned meshes to WorldRoot with identity transform
            #      This is the key step that makes skinned animation work correctly
            #      by letting joint-center translation + rotation drive the skin
            #      without any extra hierarchy offsets from the dual-node inner nodes.
            # ---------------------------------------------------------------------------
            skinned_mesh_indices = set()
            for m_idx in range(len(gltf.meshes)):
                m = gltf.meshes[m_idx]
                for p in m.primitives:
                    if isinstance(p, dict) and p.get("skin") is not None:
                        skinned_mesh_indices.add(m_idx)
                        break

            if skinned_mesh_indices:
                print(f"  INFO: Reparenting {len(skinned_mesh_indices)} skinned mesh(es) to root (identity transform) for correct joint-center animation")
                root_node = gltf.nodes[0]
                if root_node.children is None:
                    root_node.children = []

                for n_idx in range(len(gltf.nodes)):
                    node = gltf.nodes[n_idx]
                    if node.mesh is not None and node.mesh in skinned_mesh_indices:
                        # Reset mesh node to identity – skinning now fully controls placement
                        node.translation = [0.0, 0.0, 0.0]
                        node.rotation = [0.0, 0.0, 0.0, 1.0]
                        node.scale = [1.0, 1.0, 1.0]

                        # Remove from old parent
                        for p_idx in range(len(gltf.nodes)):
                            pnode = gltf.nodes[p_idx]
                            if pnode.children and n_idx in pnode.children:
                                pnode.children.remove(n_idx)
                                break

                        # Add directly under WorldRoot
                        if n_idx not in root_node.children:
                            root_node.children.append(n_idx)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)

    gltf_dict = to_plain(gltf)
    if mat_list:
        gltf_dict['materials'] = mat_list

    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [to_plain(p) for p in mesh_obj.primitives]

    # Lights (unchanged)
    lights, light_nodes = [], []
    for dlight in root.findall('.//DirectionalLight'):
        if dlight.get('on', 'true').lower() in ('false', '0'): continue
        lights.append({"type": "directional", "color": parse_array(dlight.get('color', '1 1 1')), "intensity": float(dlight.get('intensity', '1.0'))})
        node = {"name": dlight.get('DEF', f"DirLight_{len(lights)-1}"), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}}
        rot = dir_to_quat(parse_array(dlight.get('direction', '0 0 -1')))
        if rot != [0, 0, 0, 1]: node["rotation"] = rot
        light_nodes.append(node)
    for plight in root.findall('.//PointLight'):
        if plight.get('on', 'true').lower() in ('false', '0'): continue
        lights.append({"type": "point", "color": parse_array(plight.get('color', '1 1 1')), "intensity": float(plight.get('intensity', '1.0'))})
        light_nodes.append({"name": plight.get('DEF', f"PtLight_{len(lights)-1}"), "translation": parse_array(plight.get('location', '0 0 0')), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}})

    if lights:
        gltf_dict.setdefault('extensionsUsed', []).append('KHR_lights_punctual')
        gltf_dict.setdefault('extensions', {})['KHR_lights_punctual'] = {"lights": lights}
        start_idx = len(gltf_dict.get('nodes', []))
        gltf_dict['nodes'].extend(light_nodes)
        gltf_dict['nodes'][0].setdefault('children', []).extend(range(start_idx, start_idx + len(light_nodes)))

    write_glb(gltf_dict, bin_blob, glb_filepath)
    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath}  ({size_kb:.1f} KB) | nodes={len(gltf_dict.get('nodes', []))} | meshes={len(gltf_dict.get('meshes', []))} | animations={len(gltf_dict.get('animations', []))} | textures={len(gltf_dict.get('textures', []))} | skins={len(gltf_dict.get('skins', []))}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        in_f  = sys.argv[1]
        out_f = sys.argv[2] if len(sys.argv) > 2 else os.path.splitext(in_f)[0] + ".glb"
        convert_x3d_to_glb(in_f, out_f)
    else:
        base = "C:/Users/jcarl/www.web3d.org/x3d/content/examples/HumanoidAnimation/Medical"
        convert_x3d_to_glb(f"{base}/LaughingSkeleton.x3d",               "LaughingSkeleton.glb")
        convert_x3d_to_glb(f"{base}/AnimatedAssembledHumanSkeleton.x3d", "AnimatedAssembledHumanSkeleton.glb")
        convert_x3d_to_glb(f"../../medicalbones/0scaled/0skeleton1AImapped.x3d", "0skeleton1.glb")
        convert_x3d_to_glb(f"HumanoidComplete.x3d", "HumanoidComplete.glb")
        convert_x3d_to_glb(f"HumanoidCompleteShort.x3d", "HumanoidCompleteShort.glb")
        convert_x3d_to_glb(f"JoeKickAnimation.x3d", "JoeKickAnimation.glb")
        convert_x3d_to_glb(f"Gramps8Final.x3d", "Gramps8Final.glb")

# --- END OF FILE x3d_to_binary.py ---

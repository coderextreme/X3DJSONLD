"""
x3d_to_gltf_advanced.py
X3D → glTF 2.0 Binary (.glb) converter.

Fixes applied based on glTF validator report:
  • to_plain() now skips empty lists as well as None — stops pygltflib default []
    fields (extensionsUsed, extensionsRequired, cameras, images, meshes[N].weights,
    accessor min/max) from appearing as invalid EMPTY_ENTITY arrays in output.
  • TEXCOORD_0 removed from all primitives — we have no textures, so dummy zero-UV
    accessors were wasted bytes and caused UNUSED_OBJECT warnings on every primitive.
  • Dummy 1×1 PNG image / sampler / texture removed (unused, caused EMPTY_ENTITY
    on /images when the array remained).
  • Skinned meshes extracted from joints to explicit root Nodes to avoid NODE_SKINNED_MESH_NON_ROOT.
  • Skin skeleton assigned to common root node (0) to avoid SKIN_SKELETON_INVALID.
  • Unreferenced/degenerate vertex normals forced to [1,0,0] to avoid ACCESSOR_VECTOR3_NON_UNIT.
  • Duplicate animation targets filtered per-animation to avoid ANIMATION_DUPLICATE_TARGETS.
  • Duplicate/backward time keys deduplicated to avoid ACCESSOR_ANIMATION_INPUT_NON_INCREASING.

GLB format (spec §4):
  [12-byte file header]  magic 0x46546C67 / version 2 / total length
  [JSON chunk]           chunkLength + 0x4E4F534A + UTF-8 JSON padded with 0x20
  [BIN  chunk]           chunkLength + 0x004E4942 + raw binary padded with 0x00

The JSON buffer entry has no "uri" — the BIN chunk is implicitly buffer 0.
"""

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, shlex, urllib.request, math
from pygltflib import *


# ---------------------------------------------------------------------------
# Low-level helpers
# ---------------------------------------------------------------------------

def parse_array(val_str, type_cast=float, default=None):
    """Parse an X3D space/comma-separated string, or pass through a list default."""
    if val_str is None:
        return default if default is not None else []
    if isinstance(val_str, (list, tuple)):
        return [type_cast(v) for v in val_str]
    val_str = val_str.strip()
    if not val_str:
        return default if default is not None else []
    return [type_cast(v) for v in val_str.replace(',', ' ').split()]


def to_plain(obj):
    """
    Recursively convert pygltflib dataclasses / objects into plain Python
    dicts / lists so json.dumps never hits a non-serialisable type.
    """
    if obj is None:
        return None
    if isinstance(obj, (bool, int, float, str)):
        return obj
    if isinstance(obj, (list, tuple)):
        return [to_plain(v) for v in obj if v is not None]
    if isinstance(obj, dict):
        return {k: to_plain(v) for k, v in obj.items() if v is not None}
    if hasattr(obj, '__dataclass_fields__'):
        result = {}
        for k in obj.__dataclass_fields__:
            v = getattr(obj, k)
            if v is None or v == []:
                continue
            result[k] = to_plain(v)
        return result
    if hasattr(obj, '__dict__'):
        return {k: to_plain(v) for k, v in obj.__dict__.items()
                if not k.startswith('_') and v is not None and v != []}
    return obj


def append_to_buffer(buf: bytearray, data: bytes):
    """Append data to buf with 4-byte alignment. Returns (offset, length)."""
    pad = (4 - len(buf) % 4) % 4
    buf.extend(b'\x00' * pad)
    off = len(buf)
    buf.extend(data)
    return off, len(data)


def axis_angle_to_quat(x, y, z, angle):
    s = math.sin(angle / 2.0)
    length = math.sqrt(x*x + y*y + z*z)
    if length < 1e-8:
        return [0.0, 0.0, 0.0, 1.0]
    return [(x/length)*s, (y/length)*s, (z/length)*s, math.cos(angle / 2.0)]


def compute_normals(positions, indices, ccw=True):
    """Area-weighted per-vertex smooth normals."""
    normals = np.zeros_like(positions, dtype=np.float64)
    tris = indices.reshape(-1, 3).astype(np.int64)
    v0 = positions[tris[:, 0]].astype(np.float64)
    v1 = positions[tris[:, 1]].astype(np.float64)
    v2 = positions[tris[:, 2]].astype(np.float64)
    face_normals = np.cross(v1 - v0, v2 - v0)
    if not ccw:
        face_normals = -face_normals
    for i in range(3):
        np.add.at(normals, tris[:, i], face_normals)
    norms = np.linalg.norm(normals, axis=1, keepdims=True)

    bad_norms = (norms < 1e-10).flatten()
    normals[bad_norms] = [1.0, 0.0, 0.0]
    norms[bad_norms] = 1.0

    return (normals / norms).astype(np.float32)


def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target, add_min_max=False):
    off, length = append_to_buffer(bin_blob, data.tobytes())
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length, target=target))
    min_v = max_v = None
    if add_min_max and len(data) > 0:
        if data.ndim == 1:
            min_v, max_v = [float(data.min())], [float(data.max())]
        else:
            min_v = [float(x) for x in data.min(axis=0)]
            max_v = [float(x) for x in data.max(axis=0)]
    gltf.accessors.append(Accessor(
        bufferView=len(gltf.bufferViews)-1, componentType=comp_type,
        count=len(data), type=gltf_type, min=min_v, max=max_v
    ))
    return len(gltf.accessors) - 1


# ---------------------------------------------------------------------------
# GLB writer
# ---------------------------------------------------------------------------

def write_glb(gltf_dict: dict, bin_blob: bytearray, output_path: str):
    if 'buffers' not in gltf_dict or not gltf_dict['buffers']:
        gltf_dict['buffers'] = [{'byteLength': len(bin_blob)}]
    else:
        buf0 = dict(gltf_dict['buffers'][0])
        buf0.pop('uri', None)
        buf0['byteLength'] = len(bin_blob)
        gltf_dict['buffers'][0] = buf0

    json_bytes = json.dumps(gltf_dict, separators=(',', ':')).encode('utf-8')
    json_pad   = (4 - len(json_bytes) % 4) % 4
    json_bytes += b'\x20' * json_pad

    bin_pad    = (4 - len(bin_blob) % 4) % 4
    bin_padded = bytes(bin_blob) + b'\x00' * bin_pad

    total = 12 + 8 + len(json_bytes) + 8 + len(bin_padded)

    with open(output_path, 'wb') as f:
        f.write(struct.pack('<III', 0x46546C67, 2, total))
        f.write(struct.pack('<II',  len(json_bytes), 0x4E4F534A))
        f.write(json_bytes)
        f.write(struct.pack('<II',  len(bin_padded), 0x004E4942))
        f.write(bin_padded)


# ---------------------------------------------------------------------------
# X3D Material → glTF PBR
# ---------------------------------------------------------------------------

def x3d_material_to_gltf_dict(mat_node):
    def rgb(attr, default):
        return parse_array(mat_node.get(attr, ''), default=list(default))

    diffuse      = rgb('diffuseColor',   [0.8, 0.8, 0.8])
    emissive     = rgb('emissiveColor',  [0.0, 0.0, 0.0])
    specular     = rgb('specularColor',  [0.0, 0.0, 0.0])
    transparency = float(mat_node.get('transparency',    '0'))
    shininess    = float(mat_node.get('shininess',       '0.2'))
    ambient      = float(mat_node.get('ambientIntensity','0.2'))

    alpha     = max(0.0, min(1.0, 1.0 - transparency))
    diffuse   = [max(0.0, min(1.0, c)) for c in diffuse[:3]]
    emissive  = [max(0.0, min(1.0, c)) for c in emissive[:3]]
    roughness = max(0.0, min(1.0, 1.0 - shininess))

    spec_lum = 0.2126*specular[0] + 0.7152*specular[1] + 0.0722*specular[2]
    diff_lum = 0.2126*diffuse[0]  + 0.7152*diffuse[1]  + 0.0722*diffuse[2]
    metallic = max(0.0, min(0.5, spec_lum - diff_lum)) if spec_lum > diff_lum else 0.0

    base = [min(1.0, c * (1.0 + 0.3 * ambient)) for c in diffuse]

    mat = {
        "name":        mat_node.get('DEF', 'X3DMat'),
        "doubleSided": True,
        "pbrMetallicRoughness": {
            "baseColorFactor": [round(c, 5) for c in base] + [round(alpha, 5)],
            "metallicFactor":  round(metallic, 4),
            "roughnessFactor": round(roughness, 4),
        },
    }

    if any(e > 0.001 for e in emissive):
        mat["emissiveFactor"] = [round(e, 5) for e in emissive]

    if transparency > 0.01:
        mat["alphaMode"] = "BLEND"
    elif transparency > 0:
        mat["alphaMode"]   = "MASK"
        mat["alphaCutoff"] = 0.5

    return mat


def build_material_def_map(root):
    return {m.get('DEF'): m for m in root.iter('Material') if m.get('DEF')}


def resolve_material(app_node, mat_def_map, mat_list):
    if app_node is None:
        return 0
    mat_node = app_node.find('Material')
    if mat_node is None:
        for child in app_node:
            use = child.get('USE')
            if use and use in mat_def_map:
                mat_node = mat_def_map[use]
                break
    if mat_node is None:
        return 0
    mat_list.append(x3d_material_to_gltf_dict(mat_node))
    return len(mat_list) - 1


# ---------------------------------------------------------------------------
# Geometry helpers
# ---------------------------------------------------------------------------

def extract_vertex_colors(geom_node):
    c = geom_node.find('.//Color')
    if c is not None:
        return np.array(parse_array(c.get('color', '')), dtype=np.float32).reshape(-1, 3), VEC3
    c = geom_node.find('.//ColorRGBA')
    if c is not None:
        return np.array(parse_array(c.get('color', '')), dtype=np.float32).reshape(-1, 4), VEC4
    return None, None


def triangulate_indices(x3d_indices):
    triangles, poly = [], []
    for idx in x3d_indices:
        if idx == -1:
            for i in range(1, len(poly) - 1):
                triangles.extend([poly[0], poly[i], poly[i+1]])
            poly = []
        else:
            poly.append(idx)
    if len(poly) >= 3:
        for i in range(1, len(poly) - 1):
            triangles.extend([poly[0], poly[i], poly[i+1]])
    return triangles


def fetch_inline_geometry(url_string, base_path):
    for u in shlex.split(url_string):
        file_url, frag_id = (u.split('#', 1) if '#' in u else (u, None))
        local = os.path.join(base_path, file_url)
        tree = ET.parse(local) if os.path.exists(local) else None
        if tree is None and file_url.startswith('http'):
            try:
                req = urllib.request.Request(file_url, headers={'User-Agent': 'Mozilla'})
                with urllib.request.urlopen(req) as r:
                    tree = ET.parse(r)
            except Exception:
                continue
        if tree is not None:
            root = tree.getroot()
            if frag_id:
                node = root.find(f".//*[@DEF='{frag_id}']")
                if node is not None:
                    return node
            else:
                return root
    return None


def process_mesh_primitives(geom_nodes, gltf, bin_blob, mat_def_map, mat_list, skin_idx=None):
    primitives = []

    for node in geom_nodes:
        is_faceset = node.tag.startswith('Indexed')
        facesets   = ([node] if is_faceset
                      else node.findall('.//IndexedFaceSet') + node.findall('.//IndexedTriangleSet'))
        app_node   = None if is_faceset else node.find('.//Appearance')

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is None:
                continue

            positions = np.array(parse_array(coord.get('point', '')), dtype=np.float32).reshape(-1, 3)
            if len(positions) == 0:
                continue

            raw_idx = parse_array(face_set.get('coordIndex') or face_set.get('index', ''), int)
            indices = np.array(
                triangulate_indices(raw_idx) if face_set.tag == 'IndexedFaceSet' else raw_idx,
                dtype=np.uint32
            )
            if len(indices) == 0:
                continue

            if indices.max() < 65536:
                indices  = indices.astype(np.uint16)
                idx_comp = UNSIGNED_SHORT
            else:
                idx_comp = UNSIGNED_INT

            ccw     = face_set.get('ccw', 'true').strip().lower() not in ('false', '0')
            normals = compute_normals(positions, indices, ccw=ccw)

            weights_arr = np.zeros((len(positions), 4), dtype=np.float32)
            weights_arr[:, 0] = 1.0

            idx_acc  = add_accessor(gltf, bin_blob, indices,   SCALAR, idx_comp, ELEMENT_ARRAY_BUFFER, add_min_max=True)
            pos_acc  = add_accessor(gltf, bin_blob, positions, VEC3,   FLOAT,    ARRAY_BUFFER,         add_min_max=True)
            norm_acc = add_accessor(gltf, bin_blob, normals,   VEC3,   FLOAT,    ARRAY_BUFFER)

            prim_attrs = {"POSITION": pos_acc, "NORMAL": norm_acc}

            if skin_idx is not None:
                j_data = np.full((len(positions), 4), [skin_idx, 0, 0, 0], dtype=np.uint16)
                j_acc  = add_accessor(gltf, bin_blob, j_data,      VEC4, UNSIGNED_SHORT, ARRAY_BUFFER)
                w_acc  = add_accessor(gltf, bin_blob, weights_arr, VEC4, FLOAT,          ARRAY_BUFFER)
                prim_attrs["JOINTS_0"]  = j_acc
                prim_attrs["WEIGHTS_0"] = w_acc

            colors, c_type = extract_vertex_colors(face_set)
            if colors is not None and len(colors) == len(positions):
                c_acc = add_accessor(gltf, bin_blob, colors, c_type, FLOAT, ARRAY_BUFFER)
                prim_attrs["COLOR_0"] = c_acc

            mat_idx = resolve_material(app_node, mat_def_map, mat_list)
            primitives.append({"indices": idx_acc, "attributes": prim_attrs, "material": mat_idx})

    if not primitives:
        return None
    gltf.meshes.append(Mesh(primitives=primitives))
    return len(gltf.meshes) - 1


# ---------------------------------------------------------------------------
# Animation pipeline
# ---------------------------------------------------------------------------

def build_route_graph(root):
    graph = {}
    for route in root.findall('.//ROUTE'):
        key = (route.get('fromNode'), route.get('fromField'))
        graph.setdefault(key, []).append((route.get('toNode'), route.get('toField')))
    return graph


_FIELD_TO_PATH = {
    'translation':     'translation',
    'set_translation': 'translation',
    'rotation':        'rotation',
    'set_rotation':    'rotation',
    'scale':           'scale',
    'set_scale':       'scale',
}

_TS_OUT_FIELDS = ('fraction_changed', 'cycleTime', 'time')


def convert_animations(root, gltf, bin_blob, def_to_node_idx):
    routes = build_route_graph(root)

    all_interps = {}
    for tag in ('PositionInterpolator', 'OrientationInterpolator',
                'ScalarInterpolator', 'ColorInterpolator'):
        for node in root.findall(f'.//{tag}'):
            if node.get('DEF'):
                all_interps[node.get('DEF')] = node

    for ts in root.findall('.//TimeSensor'):
        ts_def = ts.get('DEF')
        if not ts_def:
            continue
        cycle = float(ts.get('cycleInterval', '1.0'))

        driven = []
        for out_field in _TS_OUT_FIELDS:
            for (to_node, to_field) in routes.get((ts_def, out_field), []):
                if to_field == 'set_fraction' and to_node in all_interps:
                    driven.append(all_interps[to_node])

        if not driven:
            continue

        samplers, channels = [], []

        # Track targets already animated by this TimeSensor to prevent glTF duplication
        seen_targets = set()

        for interp in driven:
            interp_def = interp.get('DEF')
            targets    = routes.get((interp_def, 'value_changed'), [])
            if not targets:
                continue

            keys_raw = parse_array(interp.get('key', ''))
            if len(keys_raw) < 2:
                continue
            keys = np.array(keys_raw, dtype=np.float32) * cycle  # fractions → seconds

            kv_raw = parse_array(interp.get('keyValue', ''))
            if not kv_raw:
                continue

            for (to_node, to_field) in targets:
                if to_node not in def_to_node_idx:
                    continue
                gltf_path = _FIELD_TO_PATH.get(to_field)
                if gltf_path is None:
                    continue

                node_idx = def_to_node_idx[to_node]

                # Check for duplicate target (node+property) in the same animation
                target_key = (node_idx, gltf_path)
                if target_key in seen_targets:
                    # Ignore the duplicate route to maintain glTF validity
                    continue
                seen_targets.add(target_key)

                if interp.tag == 'OrientationInterpolator':
                    raw4 = np.array(kv_raw, dtype=np.float64).reshape(-1, 4)
                    vals = np.array([axis_angle_to_quat(*row) for row in raw4], dtype=np.float32)
                    out_type = VEC4
                elif interp.tag == 'PositionInterpolator':
                    vals     = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                    out_type = VEC3
                elif interp.tag == 'ScalarInterpolator':
                    vals     = np.array(kv_raw, dtype=np.float32)
                    out_type = SCALAR
                elif interp.tag == 'ColorInterpolator':
                    vals     = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                    out_type = VEC3
                else:
                    continue

                if len(vals) != len(keys):
                    print(f"    WARN: key/value count mismatch for {interp_def} "
                          f"({len(keys)} vs {len(vals)}) — skipping")
                    continue

                # FIX: Ensure strictly increasing keys. glTF requires monotonically increasing times.
                # If there are duplicates (used for step animations in X3D) or invalid reverse times, deduplicate them.
                unique_keys = []
                unique_vals = []
                for idx_k in range(len(keys)):
                    # If this key has the exact same time as the next one, skip it (we keep the *latest* value for this timestamp)
                    if idx_k < len(keys) - 1 and keys[idx_k] >= keys[idx_k+1]:
                        continue
                    # If this key goes backward compared to the cleaned sequence, ignore it entirely
                    if unique_keys and keys[idx_k] <= unique_keys[-1]:
                        continue

                    unique_keys.append(keys[idx_k])
                    unique_vals.append(vals[idx_k])

                clean_keys = np.array(unique_keys, dtype=np.float32)
                clean_vals = np.array(unique_vals, dtype=vals.dtype)

                if len(clean_keys) < 2:
                    continue

                # Time accessor — min/max required by spec for animation inputs
                t_off, t_len = append_to_buffer(bin_blob, clean_keys.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=t_off, byteLength=t_len))
                gltf.accessors.append(Accessor(
                    bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                    count=len(clean_keys), type=SCALAR,
                    min=[float(clean_keys.min())], max=[float(clean_keys.max())]
                ))
                acc_t = len(gltf.accessors) - 1

                # Value accessor — min/max not required for animation outputs
                v_off, v_len = append_to_buffer(bin_blob, clean_vals.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=v_off, byteLength=v_len))
                gltf.accessors.append(Accessor(
                    bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                    count=len(clean_vals), type=out_type
                ))
                acc_v = len(gltf.accessors) - 1

                s_idx = len(samplers)
                samplers.append(AnimationSampler(input=acc_t, output=acc_v, interpolation="LINEAR"))
                channels.append(AnimationChannel(
                    sampler=s_idx,
                    target=AnimationChannelTarget(node=node_idx, path=gltf_path)
                ))

        if channels:
            anim_name = f"Anim_{ts_def}"
            gltf.animations.append(Animation(name=anim_name, samplers=samplers, channels=channels))
            print(f"    Animation '{anim_name}': {len(channels)} channels, cycleInterval={cycle}s")

    # Fallback dummy animation (Babylon.js requires at least one)
    if not gltf.animations:
        print("    No animations found — inserting dummy.")
        times = np.array([0.0, 1.0], dtype=np.float32)
        rots  = np.array([[0, 0, 0, 1], [0, 0, 0, 1]], dtype=np.float32)
        t_off, t_len = append_to_buffer(bin_blob, times.tobytes())
        gltf.bufferViews.append(BufferView(buffer=0, byteOffset=t_off, byteLength=t_len))
        gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                                        count=2, type=SCALAR, min=[0.0], max=[1.0]))
        t_acc = len(gltf.accessors) - 1
        r_off, r_len = append_to_buffer(bin_blob, rots.tobytes())
        gltf.bufferViews.append(BufferView(buffer=0, byteOffset=r_off, byteLength=r_len))
        gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                                        count=2, type=VEC4))
        r_acc = len(gltf.accessors) - 1
        gltf.animations.append(Animation(
            samplers=[AnimationSampler(input=t_acc, output=r_acc, interpolation="LINEAR")],
            channels=[AnimationChannel(sampler=0,
                                        target=AnimationChannelTarget(node=0, path="rotation"))]
        ))


# ---------------------------------------------------------------------------
# Main converter
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    base_path = os.path.dirname(os.path.abspath(x3d_filepath))
    print(f"\nConverting: {x3d_filepath}")

    try:
        root = ET.parse(x3d_filepath).getroot()
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}")
        return

    bin_blob = bytearray()

    mat_list = [{
        "name":        "DefaultMat",
        "doubleSided": True,
        "pbrMetallicRoughness": {
            "baseColorFactor": [0.8, 0.8, 0.8, 1.0],
            "metallicFactor":  0.0,
            "roughnessFactor": 0.8,
        }
    }]

    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Converter", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])],
        nodes=[Node(name="RootNode", children=[])],
        meshes=[], animations=[], skins=[],
        accessors=[], materials=[], textures=[], images=[],
        samplers=[], bufferViews=[], buffers=[]
    )

    mat_def_map = build_material_def_map(root)

    parent_map      = {c: p for p in root.iter() for c in p}
    hanim_joints    = root.findall('.//HAnimJoint')
    def_to_node_idx = {}
    joint_indices, ibm_matrices = [], []

    for i, joint in enumerate(hanim_joints):
        node_idx = len(gltf.nodes)
        def_name = joint.get('DEF')
        if def_name:
            def_to_node_idx[def_name] = node_idx

        joint_indices.append(node_idx)
        center      = np.array(parse_array(joint.get('center'),      default=[0,0,0]), dtype=np.float64)
        translation = np.array(parse_array(joint.get('translation'), default=[0,0,0]), dtype=np.float64)

        parent = parent_map.get(joint)
        while parent is not None and parent.tag not in ('HAnimJoint', 'HAnimHumanoid'):
            parent = parent_map.get(parent)

        if parent is not None and parent.tag == 'HAnimJoint':
            parent_center = np.array(parse_array(parent.get('center'), default=[0,0,0]), dtype=np.float64)
            local_trans   = (center - parent_center) + translation
            p_idx = def_to_node_idx.get(parent.get('DEF'))
            if p_idx is not None:
                if gltf.nodes[p_idx].children is None:
                    gltf.nodes[p_idx].children = []
                gltf.nodes[p_idx].children.append(node_idx)
        else:
            local_trans = center + translation
            gltf.nodes[0].children.append(node_idx)

        ibm = np.eye(4, dtype=np.float32)
        ibm[0, 3] = float(-center[0])
        ibm[1, 3] = float(-center[1])
        ibm[2, 3] = float(-center[2])
        ibm_matrices.append(ibm.T.flatten().tolist())

        gltf.nodes.append(Node(name=def_name or f"Joint_{i}",
                               translation=[float(v) for v in local_trans]))

    for i, joint in enumerate(hanim_joints):
        geom_nodes = []
        for elem in joint.iter():
            if elem.tag == 'Shape':
                geom_nodes.append(elem)
            elif elem.tag in ('InlineGeometry', 'Inline'):
                ext = fetch_inline_geometry(elem.get('url', ''), base_path)
                if ext is not None:
                    geom_nodes.extend(ext.findall('.//Shape') + ext.findall('.//IndexedFaceSet'))

        if geom_nodes:
            mesh_idx = process_mesh_primitives(
                geom_nodes, gltf, bin_blob, mat_def_map, mat_list, skin_idx=i
            )
            if mesh_idx is not None:
                mesh_node_idx = len(gltf.nodes)
                mesh_name = joint.get('DEF') or f"Joint_{i}"
                gltf.nodes.append(Node(
                    name=f"{mesh_name}_Mesh",
                    mesh=mesh_idx,
                    skin=0
                ))
                gltf.scenes[0].nodes.append(mesh_node_idx)

    for transform in root.findall('.//Transform'):
        def_name = transform.get('DEF')
        if def_name and def_name not in def_to_node_idx:
            node_idx = len(gltf.nodes)
            def_to_node_idx[def_name] = node_idx
            trans  = parse_array(transform.get('translation'), default=[0, 0, 0])
            rot_aa = parse_array(transform.get('rotation'),    default=[0, 1, 0, 0])
            quat   = axis_angle_to_quat(*rot_aa)
            scale  = parse_array(transform.get('scale'),       default=[1, 1, 1])
            gltf.nodes[0].children.append(node_idx)
            gltf.nodes.append(Node(
                name=def_name,
                translation=[float(v) for v in trans],
                rotation=[float(v) for v in quat],
                scale=[float(v) for v in scale],
            ))

    if joint_indices:
        ibm_flat = np.array(ibm_matrices, dtype=np.float32)
        off, length = append_to_buffer(bin_blob, ibm_flat.tobytes())
        gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length))
        gltf.accessors.append(Accessor(
            bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
            count=len(joint_indices), type=MAT4
        ))
        gltf.skins.append(Skin(
            name="HAnim_Skin",
            joints=joint_indices,
            inverseBindMatrices=len(gltf.accessors)-1,
            skeleton=0
        ))

    convert_animations(root, gltf, bin_blob, def_to_node_idx)

    if len(bin_blob) == 0:
        bin_blob.extend(b'\x00' * 4)

    gltf_dict = to_plain(gltf)
    gltf_dict['materials'] = mat_list

    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [
            p if isinstance(p, dict) else to_plain(p)
            for p in mesh_obj.primitives
        ]

    write_glb(gltf_dict, bin_blob, glb_filepath)

    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath}  ({size_kb:.1f} KB) | "
          f"nodes={len(gltf_dict.get('nodes', []))}  "
          f"meshes={len(gltf_dict.get('meshes', []))}  "
          f"materials={len(mat_list)}  "
          f"animations={len(gltf_dict.get('animations', []))}")


# ---------------------------------------------------------------------------

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
        convert_x3d_to_glb(f"../../medicalbones/0scaled/0skeleton1scaled.x3d", "0skeleton1.glb")

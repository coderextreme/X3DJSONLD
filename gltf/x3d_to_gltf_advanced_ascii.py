"""
x3d_to_gltf_advanced.py
X3D → glTF 2.0 converter with:
  • Full animation pipeline: TimeSensor + ROUTE graph → glTF animations
  • One glTF Animation per TimeSensor (correct independent cycle intervals)
  • OrientationInterpolator axis-angle → quaternion
  • Full X3D Material → PBR conversion
  • Smooth normals with robust NaN/Inf/degenerate handling
  • Root-level nodes for skinned meshes
  • Strict glTF Compliance (No empty entities, deduplicated targets, monotonic keys, finite floats)
  • KHR_materials_punctual_lights extension for X3D Directional/Point/Spot lights
  • Automatic generation of an X3D wrapper file bridging the lights and the glTF
"""

import xml.etree.ElementTree as ET
import numpy as np
import json, os, shlex, urllib.request, math, base64
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
    Recursively convert a pygltflib object tree into plain Python dicts/lists.
    Strips out empty lists and dicts to comply with glTF validation (EMPTY_ENTITY).
    """
    if obj is None:
        return None
    if isinstance(obj, (bool, int, float, str)):
        return obj
    if isinstance(obj, (list, tuple)):
        res = [to_plain(v) for v in obj]
        res = [v for v in res if v is not None]
        return res if len(res) > 0 else None
    if isinstance(obj, dict):
        res = {k: to_plain(v) for k, v in obj.items()}
        res = {k: v for k, v in res.items() if v is not None}
        return res if len(res) > 0 else None

    res = {}
    if hasattr(obj, '__dataclass_fields__'):
        for k in obj.__dataclass_fields__:
            v = getattr(obj, k)
            pv = to_plain(v)
            if pv is not None:
                res[k] = pv
    elif hasattr(obj, '__dict__'):
        for k, v in obj.__dict__.items():
            if not k.startswith('_'):
                pv = to_plain(v)
                if pv is not None:
                    res[k] = pv
    else:
        return obj

    return res if len(res) > 0 else None


def append_to_buffer(buf: bytearray, data: bytes):
    pad = (4 - len(buf) % 4) % 4
    buf.extend(b'\x00' * pad)
    off = len(buf)
    buf.extend(data)
    return off, len(data)


def axis_angle_to_quat(x, y, z, angle):
    s = math.sin(angle / 2.0)
    length = math.sqrt(x*x + y*y + z*z)
    if length < 1e-8 or not math.isfinite(length):
        return [0.0, 0.0, 0.0, 1.0]
    return [(x/length)*s, (y/length)*s, (z/length)*s, math.cos(angle / 2.0)]


def vector_to_quat(v_dir):
    """Convert an X3D direction vector to a quaternion rotating from -Z (glTF default light dir)"""
    v = np.array(v_dir, dtype=np.float64)
    norm = np.linalg.norm(v)
    if norm < 1e-8 or not math.isfinite(norm):
        return [0.0, 0.0, 0.0, 1.0]
    v = v / norm
    up = np.array([0.0, 0.0, -1.0])
    dot = np.dot(up, v)

    if dot > 0.999999:  # Already pointing -Z
        return [0.0, 0.0, 0.0, 1.0]
    if dot < -0.999999: # Pointing exactly +Z
        return [0.0, 1.0, 0.0, 0.0]

    axis = np.cross(up, v)
    axis_norm = np.linalg.norm(axis)
    if axis_norm < 1e-8:
        return [0.0, 1.0, 0.0, 0.0]
    axis = axis / axis_norm
    angle = math.acos(dot)
    return axis_angle_to_quat(axis[0], axis[1], axis[2], angle)


def compute_normals(positions, indices, ccw=True):
    """Area-weighted per-vertex smooth normals with Inf/NaN protection."""
    normals = np.zeros_like(positions, dtype=np.float64)
    tris = indices.reshape(-1, 3).astype(np.int64)
    v0 = positions[tris[:, 0]].astype(np.float64)
    v1 = positions[tris[:, 1]].astype(np.float64)
    v2 = positions[tris[:, 2]].astype(np.float64)

    face_normals = np.cross(v1 - v0, v2 - v0)
    invalid_faces = ~np.isfinite(face_normals).any(axis=1)
    face_normals[invalid_faces] = [0.0, 0.0, 0.0]

    if not ccw:
        face_normals = -face_normals

    for i in range(3):
        np.add.at(normals, tris[:, i], face_normals)

    norms = np.linalg.norm(normals, axis=1, keepdims=True)
    invalid_mask = (norms.flatten() < 1e-10) | ~np.isfinite(norms.flatten())
    normals[invalid_mask] = [0.0, 1.0, 0.0]
    norms[invalid_mask] = 1.0

    res = (normals / norms).astype(np.float32)
    bad_final = ~np.isfinite(res).any(axis=1)
    res[bad_final] = [0.0, 1.0, 0.0]
    return res


def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target, add_min_max=False):
    """Adds data to glTF buffers, strictly policing non-finite numbers."""
    if data.dtype.kind == 'f' and not np.isfinite(data).all():
        data = np.nan_to_num(data, nan=0.0, posinf=0.0, neginf=0.0)

    off, length = append_to_buffer(bin_blob, data.tobytes())
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length, target=target))
    min_v = max_v = None
    if add_min_max:
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
# X3D Material -> glTF PBR
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

    spec_lum  = 0.2126*specular[0] + 0.7152*specular[1] + 0.0722*specular[2]
    diff_lum  = 0.2126*diffuse[0]  + 0.7152*diffuse[1]  + 0.0722*diffuse[2]
    metallic  = max(0.0, min(0.5, spec_lum - diff_lum)) if spec_lum > diff_lum else 0.0
    base = [min(1.0, c * (1.0 + 0.3 * ambient)) for c in diffuse]

    mat = {
        "name":       mat_node.get('DEF', 'X3DMat'),
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
        mat["alphaMode"]    = "MASK"
        mat["alphaCutoff"]  = 0.5

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
# Geometry & Animation Pipeline
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
                indices   = indices.astype(np.uint16)
                idx_comp  = UNSIGNED_SHORT
            else:
                idx_comp  = UNSIGNED_INT

            ccw     = face_set.get('ccw', 'true').strip().lower() not in ('false', '0')
            normals = compute_normals(positions, indices, ccw=ccw)

            weights_arr = np.zeros((len(positions), 4), dtype=np.float32)
            weights_arr[:, 0] = 1.0

            idx_acc  = add_accessor(gltf, bin_blob, indices,   SCALAR, idx_comp, ELEMENT_ARRAY_BUFFER, add_min_max=True)
            pos_acc  = add_accessor(gltf, bin_blob, positions, VEC3,   FLOAT,    ARRAY_BUFFER,         add_min_max=True)
            norm_acc = add_accessor(gltf, bin_blob, normals,   VEC3,   FLOAT,    ARRAY_BUFFER)
            uv_acc   = add_accessor(gltf, bin_blob, np.zeros((len(positions), 2), dtype=np.float32),
                                    VEC2, FLOAT, ARRAY_BUFFER)

            prim_attrs = {"POSITION": pos_acc, "NORMAL": norm_acc, "TEXCOORD_0": uv_acc}

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
        animated_targets = set()

        for interp in driven:
            interp_def = interp.get('DEF')
            targets    = routes.get((interp_def, 'value_changed'), [])
            if not targets:
                continue

            keys_raw = parse_array(interp.get('key', ''))
            if len(keys_raw) < 2:
                continue

            keys = np.array(keys_raw, dtype=np.float32) * cycle

            for k_idx in range(1, len(keys)):
                if keys[k_idx] <= keys[k_idx-1]:
                    keys[k_idx] = keys[k_idx-1] + 0.0001

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

                target_key = (node_idx, gltf_path)
                if target_key in animated_targets:
                    continue

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
                    continue

                animated_targets.add(target_key)

                t_off, t_len = append_to_buffer(bin_blob, keys.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=t_off, byteLength=t_len))
                gltf.accessors.append(Accessor(
                    bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                    count=len(keys), type=SCALAR,
                    min=[float(keys.min())], max=[float(keys.max())]
                ))
                acc_t = len(gltf.accessors) - 1

                v_off, v_len = append_to_buffer(bin_blob, vals.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=v_off, byteLength=v_len))
                gltf.accessors.append(Accessor(
                    bufferView=len(gltf.bufferViews)-1, componentType=FLOAT,
                    count=len(vals), type=out_type
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

    if not gltf.animations:
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

def generate_x3d_wrapper(x3d_root, original_gltf_path):
    """
    Creates an X3D wrapper file that includes the generated glTF via an Inline,
    but preserves the lighting from the original file natively.
    """
    base_name = os.path.splitext(original_gltf_path)[0]
    wrapper_path = f"{base_name}_wrapper.x3d"

    with open(wrapper_path, 'w') as wf:
        wf.write('<?xml version="1.0" encoding="UTF-8"?>\n')
        wf.write('<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "http://www.web3d.org/specifications/x3d-4.0.dtd">\n')
        wf.write('<X3D profile="Immersive" version="4.0">\n')
        wf.write('  <Scene>\n')

        # Rip existing lights from original X3D
        for elem in x3d_root.iter():
            if elem.tag in ('DirectionalLight', 'PointLight', 'SpotLight'):
                attrs = " ".join([f"{k}='{v}'" for k, v in elem.attrib.items()])
                wf.write(f'    <{elem.tag} {attrs}/>\n')

        # Inject the glTF inline
        gltf_filename = os.path.basename(original_gltf_path)
        wf.write(f'    <Inline url=\'"{gltf_filename}"\'/>\n')
        wf.write('  </Scene>\n')
        wf.write('</X3D>\n')

    return wrapper_path


def convert_x3d_to_full_gltf(x3d_filepath, gltf_filepath):
    base_path = os.path.dirname(os.path.abspath(x3d_filepath))
    print(f"\nConverting: {x3d_filepath}")

    try:
        root = ET.parse(x3d_filepath).getroot()
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}")
        return

    bin_blob = bytearray()

    mat_list = [{
        "name":       "DefaultMat",
        "doubleSided": True,
        "pbrMetallicRoughness": {
            "baseColorFactor": [0.8, 0.8, 0.8, 1.0],
            "metallicFactor":  0.0,
            "roughnessFactor": 0.8,
        }
    }]

    gltf = GLTF2(
        asset=Asset(generator="X3D Advanced Converter", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])],
        nodes=[Node(name="RootNode", children=[])],
        meshes=[], animations=[], skins=[],
        accessors=[], materials=[], textures=[], images=[],
        samplers=[], bufferViews=[], buffers=[]
    )

    mat_def_map = build_material_def_map(root)

    # Scrape geometry nodes
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
                mesh_name = f"{joint.get('DEF', f'Joint_{i}')}_Mesh"
                gltf.nodes.append(Node(name=mesh_name, mesh=mesh_idx, skin=0))
                gltf.nodes[0].children.append(mesh_node_idx)

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
            inverseBindMatrices=len(gltf.accessors)-1
        ))

    convert_animations(root, gltf, bin_blob, def_to_node_idx)

    # ── Map X3D Lights to glTF extensions ────────────────────────
    ext_lights = []
    light_nodes = []

    for light_elem in root.iter():
        if light_elem.tag not in ('DirectionalLight', 'PointLight', 'SpotLight'):
            continue

        name = light_elem.get('DEF', light_elem.tag)
        intensity = float(light_elem.get('intensity', '1.0'))
        color = parse_array(light_elem.get('color', '1 1 1'))

        light_def = {"color": color, "intensity": intensity}
        node_def = {"name": name, "extensions": {"KHR_materials_punctual_lights": {"light": len(ext_lights)}}}

        if light_elem.tag == 'DirectionalLight':
            light_def["type"] = "directional"
            direction = parse_array(light_elem.get('direction', '0 0 -1'))
            node_def["rotation"] = vector_to_quat(direction)

        elif light_elem.tag == 'PointLight':
            light_def["type"] = "point"
            location = parse_array(light_elem.get('location', '0 0 0'))
            node_def["translation"] = location

        elif light_elem.tag == 'SpotLight':
            light_def["type"] = "spot"
            location = parse_array(light_elem.get('location', '0 0 0'))
            direction = parse_array(light_elem.get('direction', '0 0 -1'))
            cut_off = float(light_elem.get('cutOffAngle', '0.785398'))
            beam = float(light_elem.get('beamWidth', '1.570796'))

            node_def["translation"] = location
            node_def["rotation"] = vector_to_quat(direction)
            light_def["spot"] = {
                "innerConeAngle": min(beam, cut_off),
                "outerConeAngle": cut_off
            }

        ext_lights.append(light_def)
        light_nodes.append(node_def)

    if len(bin_blob) == 0:
        bin_blob.extend(b'\x00' * 4)
    b64 = base64.b64encode(bin_blob).decode('ascii')
    gltf.buffers.append(Buffer(
        uri=f"data:application/octet-stream;base64,{b64}",
        byteLength=len(bin_blob)
    ))

    # Convert to pure nested python dictionaries
    gltf_dict = to_plain(gltf)
    gltf_dict['materials'] = mat_list

    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [
            p if isinstance(p, dict) else to_plain(p)
            for p in mesh_obj.primitives
        ]

    # Inject Light Extension dicts
    if ext_lights:
        if 'extensionsUsed' not in gltf_dict:
            gltf_dict['extensionsUsed'] = []
        if 'KHR_materials_punctual_lights' not in gltf_dict['extensionsUsed']:
            gltf_dict['extensionsUsed'].append('KHR_materials_punctual_lights')

        if 'extensions' not in gltf_dict:
            gltf_dict['extensions'] = {}
        gltf_dict['extensions']['KHR_materials_punctual_lights'] = {"lights": ext_lights}

        for l_node in light_nodes:
            gltf_dict['nodes'].append(l_node)
            idx = len(gltf_dict['nodes']) - 1
            if 'children' not in gltf_dict['nodes'][0]:
                gltf_dict['nodes'][0]['children'] = []
            gltf_dict['nodes'][0]['children'].append(idx)

    # Save glTF
    with open(gltf_filepath, 'w') as f:
        json.dump(gltf_dict, f, indent=2)

    # Save X3D Wrapper
    wrapper_path = generate_x3d_wrapper(root, gltf_filepath)

    n_anim   = len(gltf_dict.get('animations', []))
    n_nodes  = len(gltf_dict.get('nodes', []))
    n_meshes = len(gltf_dict.get('meshes', []))
    n_lights = len(ext_lights)
    print(f"  OK: {gltf_filepath} | nodes={n_nodes} meshes={n_meshes} materials={len(mat_list)} anims={n_anim} lights={n_lights}")
    print(f"  OK: Wrapper generated -> {wrapper_path}")


if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        in_f  = sys.argv[1]
        out_f = sys.argv[2] if len(sys.argv) > 2 else "output.gltf"
        convert_x3d_to_full_gltf(in_f, out_f)
    else:
        base = "C:/Users/jcarl/www.web3d.org/x3d/content/examples/HumanoidAnimation/Medical"
        convert_x3d_to_full_gltf(f"{base}/LaughingSkeleton.x3d", "LaughingSkeleton.gltf")
        convert_x3d_to_full_gltf(f"{base}/AnimatedAssembledHumanSkeleton.x3d", "AnimatedAssembledHumanSkeleton.gltf")
        convert_x3d_to_full_gltf(f"../../medicalbones/0scaled/0skeleton1AImapped.x3d", "0skeleton1.gltf")

# --- START OF FILE x3d_to_gltf_advanced_binary.py ---

"""
x3d_to_gltf_advanced_binary.py
X3D → glTF 2.0 Binary (.glb) converter.

Hierarchy & Animation Fixes (The "Dual-Node" Pattern):
  • Converts X3D's global `center` pivoting into a native, rigid glTF Node hierarchy.
  • Creates an Outer Pivot Node (T + C) and an Inner Restoring Node (-C) for every joint.
  • Automatically adds the `+C` offset into `PositionInterpolator` keyframes so translational
    animations (like walking/root motion) don't disconnect the bones from their sockets.

Robust Inline Parsing:
  • Catches XML parsing errors on referenced <Inline> files safely so corrupted or .x3dv
    files don't crash the script.

Lighting Features:
  • KHR_lights_punctual mappings for PointLight, SpotLight, and DirectionalLight.
  • EXT_lights_image_based mappings for X3D V4 EnvironmentLight node.
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
    if val_str is None: return default if default is not None else []
    if isinstance(val_str, (list, tuple)): return [type_cast(v) for v in val_str]
    val_str = val_str.strip()
    if not val_str: return default if default is not None else []
    return [type_cast(v) for v in val_str.replace(',', ' ').split()]

def to_plain(obj):
    if obj is None: return None
    if isinstance(obj, (bool, int, float, str)): return obj
    if isinstance(obj, (list, tuple)): return [to_plain(v) for v in obj if v is not None]
    if isinstance(obj, dict): return {k: to_plain(v) for k, v in obj.items() if v is not None}
    if hasattr(obj, '__dataclass_fields__'):
        result = {}
        for k in obj.__dataclass_fields__:
            v = getattr(obj, k)
            if v is None or v == []: continue
            result[k] = to_plain(v)
        return result
    if hasattr(obj, '__dict__'):
        return {k: to_plain(v) for k, v in obj.__dict__.items() if not k.startswith('_') and v is not None and v != []}
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
    cx, cy, cz = dy, -dx, 0.0
    s = math.sqrt((1.0 - dz) * 2.0)
    return [cx / s, cy / s, cz / s, s / 2.0]

def compute_normals(positions, indices, ccw=True):
    normals = np.zeros_like(positions, dtype=np.float64)
    tris = indices.reshape(-1, 3).astype(np.int64)
    v0, v1, v2 = positions[tris[:, 0]], positions[tris[:, 1]], positions[tris[:, 2]]
    face_normals = np.cross(v1 - v0, v2 - v0)
    if not ccw: face_normals = -face_normals
    for i in range(3): np.add.at(normals, tris[:, i], face_normals)
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
        if data.ndim == 1: min_v, max_v = [float(data.min())], [float(data.max())]
        else: min_v, max_v = [float(x) for x in data.min(axis=0)], [float(x) for x in data.max(axis=0)]
    gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=comp_type, count=len(data), type=gltf_type, min=min_v, max=max_v))
    return len(gltf.accessors) - 1

def write_glb(gltf_dict: dict, bin_blob: bytearray, output_path: str):
    if 'buffers' not in gltf_dict or not gltf_dict['buffers']:
        gltf_dict['buffers'] = [{'byteLength': len(bin_blob)}]
    else:
        buf0 = dict(gltf_dict['buffers'][0])
        buf0.pop('uri', None)
        buf0['byteLength'] = len(bin_blob)
        gltf_dict['buffers'][0] = buf0
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
# Materials, Lights, and Geometry
# ---------------------------------------------------------------------------

def x3d_material_to_gltf_dict(mat_node):
    def rgb(attr, default): return parse_array(mat_node.get(attr, ''), default=list(default))
    diffuse, emissive, specular = rgb('diffuseColor', [0.8, 0.8, 0.8]), rgb('emissiveColor', [0.0, 0.0, 0.0]), rgb('specularColor', [0.0, 0.0, 0.0])
    transparency, shininess, ambient = float(mat_node.get('transparency', '0')), float(mat_node.get('shininess', '0.2')), float(mat_node.get('ambientIntensity', '0.2'))
    alpha, roughness = max(0.0, min(1.0, 1.0 - transparency)), max(0.0, min(1.0, 1.0 - shininess))
    diffuse = [max(0.0, min(1.0, c)) for c in diffuse[:3]]
    spec_lum, diff_lum = 0.2126*specular[0] + 0.7152*specular[1] + 0.0722*specular[2], 0.2126*diffuse[0] + 0.7152*diffuse[1] + 0.0722*diffuse[2]
    metallic = max(0.0, min(0.5, spec_lum - diff_lum)) if spec_lum > diff_lum else 0.0
    mat = {
        "name": mat_node.get('DEF', 'X3DMat'), "doubleSided": True,
        "pbrMetallicRoughness": {"baseColorFactor": [round(min(1.0, c * (1.0 + 0.3 * ambient)), 5) for c in diffuse] + [round(alpha, 5)], "metallicFactor": round(metallic, 4), "roughnessFactor": round(roughness, 4)},
    }
    if any(e > 0.001 for e in emissive): mat["emissiveFactor"] = [round(e, 5) for e in emissive[:3]]
    if transparency > 0.01: mat["alphaMode"] = "BLEND"
    elif transparency > 0:  mat["alphaMode"] = "MASK"; mat["alphaCutoff"] = 0.5
    return mat

def build_material_def_map(root): return {m.get('DEF'): m for m in root.iter('Material') if m.get('DEF')}

def resolve_material(app_node, mat_def_map, mat_list):
    if app_node is None: return 0
    mat_node = app_node.find('Material')
    if mat_node is None:
        for child in app_node:
            if child.get('USE') in mat_def_map: mat_node = mat_def_map[child.get('USE')]; break
    if mat_node is None: return 0
    mat_list.append(x3d_material_to_gltf_dict(mat_node))
    return len(mat_list) - 1

def extract_lights(root):
    lights, light_nodes, env_lights = [], [], []
    for dlight in root.findall('.//DirectionalLight'):
        if dlight.get('on', 'true').lower() in ('false', '0'): continue
        lights.append({"type": "directional", "color": parse_array(dlight.get('color', '1 1 1')), "intensity": float(dlight.get('intensity', '1.0'))})
        node = {"name": dlight.get('DEF', f"DirectionLight_{len(lights)-1}"), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}}
        rot = dir_to_quat(parse_array(dlight.get('direction', '0 0 -1')))
        if rot != [0, 0, 0, 1]: node["rotation"] = rot
        light_nodes.append(node)
    for plight in root.findall('.//PointLight'):
        if plight.get('on', 'true').lower() in ('false', '0'): continue
        ldict = {"type": "point", "color": parse_array(plight.get('color', '1 1 1')), "intensity": float(plight.get('intensity', '1.0'))}
        if float(plight.get('radius', '100')) > 0: ldict["range"] = float(plight.get('radius', '100'))
        lights.append(ldict)
        light_nodes.append({"name": plight.get('DEF', f"PointLight_{len(lights)-1}"), "translation": parse_array(plight.get('location', '0 0 0')), "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}})
    for elight in root.findall('.//EnvironmentLight'):
        if elight.get('on', 'true').lower() in ('false', '0'): continue
        env_lights.append({"intensity": float(elight.get('ambientIntensity', '1.0')), "irradianceCoefficients": [[0.0,0.0,0.0]]*9, "specularImageSize": 256, "specularImages": []})
        rot = dir_to_quat(parse_array(elight.get('direction', '0 0 -1')))
        if rot != [0, 0, 0, 1]: env_lights[-1]["rotation"] = rot
    return lights, light_nodes, env_lights

def fetch_inline_geometry(url_string, base_path):
    for u in shlex.split(url_string):
        file_url, frag_id = (u.split('#', 1) if '#' in u else (u, None))
        local = os.path.join(base_path, file_url)
        tree = None

        if os.path.exists(local):
            try:
                tree = ET.parse(local)
            except Exception as e:
                print(f"    WARN: Failed to parse local inline file '{local}': {e}")
                pass

        if tree is None and file_url.startswith('http'):
            try:
                req = urllib.request.Request(file_url, headers={'User-Agent': 'Mozilla'})
                with urllib.request.urlopen(req) as r:
                    tree = ET.parse(r)
            except Exception as e:
                print(f"    WARN: Failed to fetch/parse remote inline file '{file_url}': {e}")
                continue

        if tree is not None:
            root = tree.getroot()
            return root.find(f".//*[@DEF='{frag_id}']") if frag_id else root

    return None

def process_mesh_primitives(geom_nodes, gltf, bin_blob, mat_def_map, mat_list):
    primitives = []
    for node in geom_nodes:
        is_faceset = node.tag.startswith('Indexed')
        facesets = ([node] if is_faceset else node.findall('.//IndexedFaceSet') + node.findall('.//IndexedTriangleSet'))
        app_node = None if is_faceset else node.find('.//Appearance')

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is None: continue
            positions = np.array(parse_array(coord.get('point', '')), dtype=np.float32).reshape(-1, 3)
            if len(positions) == 0: continue

            raw_idx = parse_array(face_set.get('coordIndex') or face_set.get('index', ''), int)
            triangles, poly = [], []
            for idx in raw_idx:
                if idx == -1:
                    for i in range(1, len(poly) - 1): triangles.extend([poly[0], poly[i], poly[i+1]])
                    poly = []
                else: poly.append(idx)
            if len(poly) >= 3:
                for i in range(1, len(poly) - 1): triangles.extend([poly[0], poly[i], poly[i+1]])

            indices = np.array(triangles if face_set.tag == 'IndexedFaceSet' else raw_idx, dtype=np.uint32)
            if len(indices) == 0: continue

            idx_comp = UNSIGNED_SHORT if indices.max() < 65536 else UNSIGNED_INT
            if idx_comp == UNSIGNED_SHORT: indices = indices.astype(np.uint16)

            normals = compute_normals(positions, indices, ccw=(face_set.get('ccw', 'true').strip().lower() not in ('false', '0')))
            idx_acc  = add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp, ELEMENT_ARRAY_BUFFER, add_min_max=True)
            pos_acc  = add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, ARRAY_BUFFER, add_min_max=True)
            norm_acc = add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, ARRAY_BUFFER)
            prim_attrs = {"POSITION": pos_acc, "NORMAL": norm_acc}

            c = face_set.find('.//Color') or face_set.find('.//ColorRGBA')
            if c is not None:
                colors = np.array(parse_array(c.get('color', '')), dtype=np.float32).reshape(-1, 3 if c.tag == 'Color' else 4)
                if len(colors) == len(positions): prim_attrs["COLOR_0"] = add_accessor(gltf, bin_blob, colors, VEC3 if c.tag == 'Color' else VEC4, FLOAT, ARRAY_BUFFER)

            primitives.append({"indices": idx_acc, "attributes": prim_attrs, "material": resolve_material(app_node, mat_def_map, mat_list)})

    if not primitives: return None
    gltf.meshes.append(Mesh(primitives=primitives))
    return len(gltf.meshes) - 1

# ---------------------------------------------------------------------------
# DOM Traversal & Dual-Node Pattern
# ---------------------------------------------------------------------------

def traverse_x3d_node(xml_node, parent_gltf_node_idx, gltf, bin_blob, mat_def_map, mat_list, def_to_node_idx, node_to_center, base_path):
    structural_tags = {'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite'}

    # 1. Resolve Externals safely
    if xml_node.tag in ('Inline', 'InlineGeometry'):
        ext = fetch_inline_geometry(xml_node.get('url', ''), base_path)
        if ext is not None:
            traverse_x3d_node(ext, parent_gltf_node_idx, gltf, bin_blob, mat_def_map, mat_list, def_to_node_idx, node_to_center, base_path)
        return

    # 2. Process Structural Pivot Nodes (The Dual-Node strategy)
    if xml_node.tag in structural_tags:
        def_name = xml_node.get('DEF')

        t = np.array(parse_array(xml_node.get('translation'), default=[0,0,0]))
        c = np.array(parse_array(xml_node.get('center'), default=[0,0,0]))
        r = parse_array(xml_node.get('rotation'), default=[0,1,0,0])
        s = parse_array(xml_node.get('scale'), default=[1,1,1])

        # Outer Pivot Node
        outer_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=def_name or f"{xml_node.tag}_{outer_idx}",
            translation=[float(x) for x in (t + c)],
            rotation=axis_angle_to_quat(*r),
            scale=[float(x) for x in s],
            children=[]
        ))

        if def_name: def_to_node_idx[def_name] = outer_idx
        node_to_center[outer_idx] = c  # Store for animation translation correction

        if parent_gltf_node_idx is not None:
            if gltf.nodes[parent_gltf_node_idx].children is None: gltf.nodes[parent_gltf_node_idx].children = []
            gltf.nodes[parent_gltf_node_idx].children.append(outer_idx)

        # Inner Restorer Node
        inner_idx = len(gltf.nodes)
        gltf.nodes.append(Node(
            name=f"{def_name or xml_node.tag}_Inner",
            translation=[float(x) for x in -c],
            children=[]
        ))
        gltf.nodes[outer_idx].children.append(inner_idx)

        # Recurse with Inner Node as Parent
        for child in xml_node:
            traverse_x3d_node(child, inner_idx, gltf, bin_blob, mat_def_map, mat_list, def_to_node_idx, node_to_center, base_path)

    # 3. Process Geometries
    elif xml_node.tag == 'Shape':
        mesh_idx = process_mesh_primitives([xml_node], gltf, bin_blob, mat_def_map, mat_list)
        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            gltf.nodes.append(Node(name=xml_node.get('DEF', f"Shape_{shape_idx}"), mesh=mesh_idx))
            if parent_gltf_node_idx is not None:
                if gltf.nodes[parent_gltf_node_idx].children is None: gltf.nodes[parent_gltf_node_idx].children = []
                gltf.nodes[parent_gltf_node_idx].children.append(shape_idx)

    # 4. Pass-Through everything else
    else:
        for child in xml_node:
            traverse_x3d_node(child, parent_gltf_node_idx, gltf, bin_blob, mat_def_map, mat_list, def_to_node_idx, node_to_center, base_path)

# ---------------------------------------------------------------------------
# Animations
# ---------------------------------------------------------------------------

def convert_animations(root, gltf, bin_blob, def_to_node_idx, node_to_center):
    routes = {}
    for route in root.findall('.//ROUTE'):
        routes.setdefault((route.get('fromNode'), route.get('fromField')), []).append((route.get('toNode'), route.get('toField')))

    all_interps = {node.get('DEF'): node for tag in ('PositionInterpolator', 'OrientationInterpolator', 'ScalarInterpolator') for node in root.findall(f'.//{tag}') if node.get('DEF')}

    for ts in root.findall('.//TimeSensor'):
        ts_def = ts.get('DEF')
        if not ts_def: continue
        cycle = float(ts.get('cycleInterval', '1.0'))

        driven = [all_interps[to_node] for out_field in ('fraction_changed', 'cycleTime', 'time') for (to_node, to_field) in routes.get((ts_def, out_field), []) if to_field == 'set_fraction' and to_node in all_interps]
        if not driven: continue

        samplers, channels = [], []
        seen_targets = set()

        for interp in driven:
            targets = routes.get((interp.get('DEF'), 'value_changed'), [])
            keys = np.array(parse_array(interp.get('key', '')), dtype=np.float32) * cycle
            kv_raw = parse_array(interp.get('keyValue', ''))
            if not targets or len(keys) < 2 or not kv_raw: continue

            for (to_node, to_field) in targets:
                if to_node not in def_to_node_idx: continue
                gltf_path = {'translation': 'translation', 'set_translation': 'translation', 'rotation': 'rotation', 'set_rotation': 'rotation', 'scale': 'scale', 'set_scale': 'scale'}.get(to_field)
                if not gltf_path: continue

                node_idx = def_to_node_idx[to_node]
                if (node_idx, gltf_path) in seen_targets: continue
                seen_targets.add((node_idx, gltf_path))

                if interp.tag == 'OrientationInterpolator':
                    raw4 = np.array(kv_raw, dtype=np.float64).reshape(-1, 4)
                    vals = np.array([axis_angle_to_quat(*row) for row in raw4], dtype=np.float32)
                    out_type = VEC4
                elif interp.tag == 'PositionInterpolator':
                    vals = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                    # CRITICAL: Re-add the joint's base Center offset to position keyframes
                    if gltf_path == 'translation' and node_idx in node_to_center:
                        vals += node_to_center[node_idx]
                    out_type = VEC3
                elif interp.tag == 'ScalarInterpolator':
                    vals = np.array(kv_raw, dtype=np.float32)
                    out_type = SCALAR
                else: continue

                if len(vals) != len(keys): continue

                unique_keys, unique_vals = [], []
                for idx_k in range(len(keys)):
                    if idx_k < len(keys) - 1 and keys[idx_k] >= keys[idx_k+1]: continue
                    if unique_keys and keys[idx_k] <= unique_keys[-1]: continue
                    unique_keys.append(keys[idx_k])
                    unique_vals.append(vals[idx_k])

                if len(unique_keys) < 2: continue
                clean_keys = np.array(unique_keys, dtype=np.float32)
                clean_vals = np.array(unique_vals, dtype=vals.dtype)

                t_off, t_len = append_to_buffer(bin_blob, clean_keys.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=t_off, byteLength=t_len))
                gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT, count=len(clean_keys), type=SCALAR, min=[float(clean_keys.min())], max=[float(clean_keys.max())]))
                acc_t = len(gltf.accessors) - 1

                v_off, v_len = append_to_buffer(bin_blob, clean_vals.tobytes())
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=v_off, byteLength=v_len))
                gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT, count=len(clean_vals), type=out_type))
                acc_v = len(gltf.accessors) - 1

                samplers.append(AnimationSampler(input=acc_t, output=acc_v, interpolation="LINEAR"))
                channels.append(AnimationChannel(sampler=len(samplers)-1, target=AnimationChannelTarget(node=node_idx, path=gltf_path)))

        if channels: gltf.animations.append(Animation(name=f"Anim_{ts_def}", samplers=samplers, channels=channels))

# ---------------------------------------------------------------------------
# Main converter
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_filepath, glb_filepath):
    print(f"\nConverting: {x3d_filepath}")
    base_path = os.path.dirname(os.path.abspath(x3d_filepath))

    try: root = ET.parse(x3d_filepath).getroot()
    except Exception as e: print(f"  ERROR parsing X3D: {e}"); return

    bin_blob = bytearray()
    mat_list = [{"name": "DefaultMat", "doubleSided": True, "pbrMetallicRoughness": {"baseColorFactor": [0.8, 0.8, 0.8, 1.0], "metallicFactor": 0.0, "roughnessFactor": 0.8}}]

    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Dual-Node Extractor", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[]
    )

    mat_def_map = build_material_def_map(root)
    def_to_node_idx, node_to_center = {}, {}

    scene_root = root.find('Scene')
    if scene_root is None: scene_root = root

    # Execute recursive DOM hierarchy build
    traverse_x3d_node(scene_root, 0, gltf, bin_blob, mat_def_map, mat_list, def_to_node_idx, node_to_center, base_path)

    # Process animations using the Dual-Node offsets to prevent limb tearing
    convert_animations(root, gltf, bin_blob, def_to_node_idx, node_to_center)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)

    gltf_dict = to_plain(gltf)
    gltf_dict['materials'] = mat_list
    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [p if isinstance(p, dict) else to_plain(p) for p in mesh_obj.primitives]

    punctual_lights, light_nodes, env_lights = extract_lights(root)

    if punctual_lights or env_lights:
        gltf_dict.setdefault('extensionsUsed', [])
        gltf_dict.setdefault('extensions', {})

    if punctual_lights:
        if 'KHR_lights_punctual' not in gltf_dict['extensionsUsed']: gltf_dict['extensionsUsed'].append('KHR_lights_punctual')
        gltf_dict['extensions']['KHR_lights_punctual'] = {"lights": punctual_lights}
        start_node_idx = len(gltf_dict.get('nodes', []))
        root_children = gltf_dict['nodes'][0].get('children', [])
        for i, lnode in enumerate(light_nodes):
            gltf_dict['nodes'].append(lnode)
            root_children.append(start_node_idx + i)
        gltf_dict['nodes'][0]['children'] = root_children

    if env_lights:
        if 'EXT_lights_image_based' not in gltf_dict['extensionsUsed']: gltf_dict['extensionsUsed'].append('EXT_lights_image_based')
        gltf_dict['extensions']['EXT_lights_image_based'] = {"lights": env_lights}
        if 'scenes' in gltf_dict and len(gltf_dict['scenes']) > 0:
            gltf_dict['scenes'][0].setdefault('extensions', {})['EXT_lights_image_based'] = {"light": 0}

    write_glb(gltf_dict, bin_blob, glb_filepath)

    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath}  ({size_kb:.1f} KB) | nodes={len(gltf_dict.get('nodes', []))} | meshes={len(gltf_dict.get('meshes', []))} | animations={len(gltf_dict.get('animations', []))}")


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
        convert_x3d_to_glb(f"JoeKickAnimation.x3d", "JoeKickAnimation.glb")

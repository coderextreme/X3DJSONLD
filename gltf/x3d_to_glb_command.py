import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, math, re
from pygltflib import *

# ---------------------------------------------------------------------------
# Utility Functions
# ---------------------------------------------------------------------------

def strip_ns(node):
    if node is None: return
    node.tag = node.tag.split('}', 1)[-1]
    for k in list(node.attrib.keys()):
        node.attrib[k.split('}', 1)[-1]] = node.attrib.pop(k)
    for child in node: strip_ns(child)

def parse_array(val, type_cast=float, default=None):
    if val is None or not val.strip(): return default or []
    # Remove commas and split by whitespace
    return [type_cast(x) for x in val.replace(',', ' ').split()]

def parse_indices(val):
    raw = parse_array(val, int)
    polys, cur = [], []
    for i in raw:
        if i == -1:
            if cur: polys.append(cur); cur = []
        else: cur.append(i)
    if cur: polys.append(cur)
    return polys

def axis_angle_to_quat(x, y, z, angle):
    s = math.sin(angle / 2.0)
    l = math.sqrt(x*x + y*y + z*z)
    if l < 1e-8: return [0.0, 0.0, 0.0, 1.0]
    return [(x/l)*s, (y/l)*s, (z/l)*s, math.cos(angle / 2.0)]

# ---------------------------------------------------------------------------
# Logic
# ---------------------------------------------------------------------------

def convert_x3d_to_glb(x3d_path, glb_path):
    print(f"Parsing X3D: {x3d_path}")
    tree = ET.parse(x3d_path)
    root = tree.getroot()
    strip_ns(root)

    # Pre-map DEFs for USE lookups
    def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}

    # Initialize GLTF with a WorldRoot
    gltf = GLTF2(scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])])
    bin_blob = bytearray()
    def_to_nidx, joint_weights, skin_prim_info = {}, {}, []

    def add_node_to_parent(parent_idx, node_obj):
        new_idx = len(gltf.nodes)
        gltf.nodes.append(node_obj)

        # Safety: Ensure parent_idx is valid
        if parent_idx is None or not (0 <= parent_idx < new_idx):
            parent_idx = 0  # Fallback to WorldRoot

        parent = gltf.nodes[parent_idx]
        if parent.children is None: parent.children = []
        parent.children.append(new_idx)
        return new_idx

    def traverse(node, p_idx):
        if node is None: return

        # Handle USE nodes (instancing)
        if node.get('USE'):
            ref = def_map.get(node.get('USE'))
            if ref is not None:
                # If it's a structural node, we still need a transform node for it
                # but we don't want to infinite-loop if there are circular refs
                node = ref

        tag = node.tag
        if tag in ('Transform', 'Group', 'HAnimJoint', 'HAnimHumanoid', 'HAnimSegment', 'HAnimSite'):
            dname = node.get('DEF')
            t = np.array(parse_array(node.get('translation'), default=[0,0,0]))
            c = np.array(parse_array(node.get('center'), default=[0,0,0]))
            r = parse_array(node.get('rotation'), default=[0,1,0,0])

            # Outer Node (Position + Rotation)
            outer_idx = add_node_to_parent(p_idx, Node(
                name=dname or tag,
                translation=[float(x) for x in (t + c)],
                rotation=axis_angle_to_quat(*r)
            ))
            if dname: def_to_nidx[dname] = outer_idx

            # Inner offset node (handles pivot/center offset)
            inner_idx = add_node_to_parent(outer_idx, Node(name=f"Offset_{dname or tag}", translation=[float(x) for x in -c]))

            if tag == 'HAnimJoint' and dname:
                idxs = parse_array(node.get('skinCoordIndex', ''), int)
                wgts = parse_array(node.get('skinCoordWeight', ''), float)
                if idxs: joint_weights[dname] = list(zip(idxs, wgts))

            for child in node: traverse(child, inner_idx)

        elif tag == 'Shape':
            # Fix DeprecationWarning: explicit 'is not None'
            geom = node.find('IndexedFaceSet')
            if geom is None: geom = node.find('IndexedTriangleSet')
            if geom is None: geom = node.find('TriangleSet')
            if geom is None: return

            coord = geom.find('Coordinate')
            if coord is not None and coord.get('USE'):
                coord = def_map.get(coord.get('USE'))

            if coord is None or not coord.get('point'): return

            pts = np.array(parse_array(coord.get('point')), dtype=np.float32).reshape(-1, 3)
            idx_polys = parse_indices(geom.get('coordIndex')) if geom.tag == 'IndexedFaceSet' else [[i, i+1, i+2] for i in range(0, len(pts), 3)]

            u_pos, u_idx, global_map, u_verts = [], [], [], {}
            for poly in idx_polys:
                for i in range(1, len(poly)-1):
                    for j in (0, i, i+1):
                        p_idx_val = poly[j]
                        if p_idx_val not in u_verts:
                            u_verts[p_idx_val] = len(u_pos)
                            u_pos.append(pts[p_idx_val])
                            global_map.append(p_idx_val)
                        u_idx.append(u_verts[p_idx_val])

            if not u_idx: return

            pos_bin = np.array(u_pos, dtype=np.float32)
            idx_type = UNSIGNED_INT if len(u_pos) > 65535 else UNSIGNED_SHORT
            idx_bin = np.array(u_idx, dtype=np.uint32 if idx_type == UNSIGNED_INT else np.uint16)

            def add_data(data, target):
                raw = data.tobytes()
                pad = (4 - len(bin_blob) % 4) % 4
                bin_blob.extend(b'\x00' * pad)
                off = len(bin_blob)
                bin_blob.extend(raw)
                gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=len(raw), target=target))
                gltf.accessors.append(Accessor(
                    bufferView=len(gltf.bufferViews)-1,
                    componentType=UNSIGNED_INT if data.dtype == np.uint32 else (UNSIGNED_SHORT if data.dtype == np.uint16 else FLOAT),
                    count=len(data), type=SCALAR if data.ndim == 1 else VEC3,
                    min=[float(x) for x in data.min(axis=0)] if data.ndim > 1 else [float(data.min())],
                    max=[float(x) for x in data.max(axis=0)] if data.ndim > 1 else [float(data.max())]
                ))
                return len(gltf.accessors) - 1

            mesh_idx = len(gltf.meshes)
            prim = Primitive(indices=add_data(idx_bin, ELEMENT_ARRAY_BUFFER), attributes={"POSITION": add_data(pos_bin, ARRAY_BUFFER)})
            gltf.meshes.append(Mesh(primitives=[prim]))

            shape_node_idx = add_node_to_parent(p_idx, Node(name=f"Shape_{mesh_idx}", mesh=mesh_idx))
            skin_prim_info.append((shape_node_idx, mesh_idx, global_map))

        else:
            for child in node: traverse(child, p_idx)

    # Start recursion
    scene_element = root.find('Scene')
    traverse(scene_element if scene_element is not None else root, 0)

    # Handle Skinning / HAnim Joints
    if joint_weights:
        j_names = sorted(joint_weights.keys(), key=lambda x: def_to_nidx.get(x, 0))
        j_nidxs = [def_to_nidx[n] for n in j_names if n in def_to_nidx]

        def get_world_mats():
            mats = [np.eye(4, dtype=np.float32) for _ in gltf.nodes]
            def dfs(idx, p_m):
                n = gltf.nodes[idx]
                t, r = n.translation or [0,0,0], n.rotation or [0,0,0,1]
                m = np.eye(4, dtype=np.float32)
                m[0:3, 3] = t
                qx, qy, qz, qw = r
                m[0,0], m[0,1], m[0,2] = 1-2*qy**2-2*qz**2, 2*qx*qy-2*qz*qw, 2*qx*qz+2*qy*qw
                m[1,0], m[1,1], m[1,2] = 2*qx*qy+2*qz*qw, 1-2*qx**2-2*qz**2, 2*qy*qz-2*qx*qw
                m[2,0], m[2,1], m[2,2] = 2*qx*qz-2*qy*qw, 2*qy*qz+2*qx*qw, 1-2*qx**2-2*qy**2
                mats[idx] = np.dot(p_m, m)
                for c in n.children or []: dfs(c, mats[idx])
            dfs(0, np.eye(4, dtype=np.float32))
            return mats

        world_mats = get_world_mats()
        ibm_data = np.array([np.linalg.inv(world_mats[j]).flatten() for j in j_nidxs], dtype=np.float32)

        def add_acc(data, g_type):
            raw = data.tobytes()
            pad = (4 - len(bin_blob) % 4) % 4
            bin_blob.extend(b'\x00' * pad)
            off = len(bin_blob)
            bin_blob.extend(raw)
            gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=len(raw)))
            gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=FLOAT if data.dtype==np.float32 else UNSIGNED_SHORT, count=len(data), type=g_type))
            return len(gltf.accessors) - 1

        skin_idx = len(gltf.skins)
        gltf.skins.append(Skin(joints=j_nidxs, inverseBindMatrices=add_acc(ibm_data, MAT4)))

        j_map = {name: i for i, name in enumerate(j_names)}
        v_weights = {}
        for name, infl in joint_weights.items():
            for v_idx, w in infl: v_weights.setdefault(v_idx, []).append((j_map[name], w))

        for n_idx, m_idx, g_map in skin_prim_info:
            node = gltf.nodes[n_idx]
            node.skin = skin_idx
            node.translation = [0,0,0]

            for prim in gltf.meshes[m_idx].primitives:
                nv = len(g_map)
                j_arr, w_arr = np.zeros((nv, 4), dtype=np.uint16), np.zeros((nv, 4), dtype=np.float32)
                for i in range(nv):
                    infs = sorted(v_weights.get(g_map[i], [(0, 1.0)]), key=lambda x: x[1], reverse=True)[:4]
                    total = sum(inf[1] for inf in infs)
                    for k, (j, w) in enumerate(infs):
                        j_arr[i, k], w_arr[i, k] = j, w / (total if total > 0 else 1.0)
                prim.attributes["JOINTS_0"] = add_acc(j_arr, VEC4)
                prim.attributes["WEIGHTS_0"] = add_acc(w_arr, VEC4)

    # Serialization
    def to_p(obj):
        if isinstance(obj, list): return [to_p(i) for i in obj]
        if hasattr(obj, "__dict__"): return {k: to_p(v) for k, v in obj.__dict__.items() if v is not None}
        return obj

    final_dict = to_p(gltf)
    final_dict['buffers'] = [{'byteLength': len(bin_blob)}]
    js_bytes = json.dumps(final_dict, separators=(',', ':')).encode('utf-8')
    js_bytes += b'\x20' * ((4 - len(js_bytes) % 4) % 4)
    bin_padded = bytes(bin_blob) + b'\x00' * ((4 - len(bin_blob) % 4) % 4)

    with open(glb_path, 'wb') as f:
        f.write(struct.pack('<III', 0x46546C67, 2, 12 + 8 + len(js_bytes) + 8 + len(bin_padded)))
        f.write(struct.pack('<II',  len(js_bytes), 0x4E4F534A))
        f.write(js_bytes)
        f.write(struct.pack('<II',  len(bin_padded), 0x004E4942))
        f.write(bin_padded)
    print(f"Success: {glb_path}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1: convert_x3d_to_glb(sys.argv[1], sys.argv[2] if len(sys.argv)>2 else "output.glb")

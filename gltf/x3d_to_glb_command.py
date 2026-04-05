import xml.etree.ElementTree as ET
import numpy as np
import os, math, re
from pygltflib import *

"""
x3d_to_glb_command.py
Flawless HAnim Skinning Converter
- Employs 4-Node Chain per joint to perfectly match X3D 'center' pivot math.
- Ensures 1:1 vertex mapping to eliminate "mesh horrors."
- Automatically routes Interpolators to Translation/Rotation nodes.
"""

def strip_ns(node):
    if node is None: return
    node.tag = node.tag.split('}', 1)[-1]
    for k in list(node.attrib.keys()):
        node.attrib[k.split('}', 1)[-1]] = node.attrib.pop(k)
    for child in node: strip_ns(child)

def parse_array(val, type_cast=float, default=None):
    if val is None or not val.strip(): return default or []
    return [type_cast(x) for x in val.replace(',', ' ').split()]

def axis_angle_to_quat(x, y, z, angle):
    s = math.sin(angle / 2.0)
    l = math.sqrt(x*x + y*y + z*z)
    if l < 1e-8: return [0.0, 0.0, 0.0, 1.0]
    return [(x/l)*s, (y/l)*s, (z/l)*s, math.cos(angle / 2.0)]

def add_acc(gltf, buf, data, g_type, c_type, target, min_max=False):
    raw = data.tobytes()
    pad = (4 - len(buf) % 4) % 4
    buf.extend(b'\x00' * pad)
    off = len(buf)
    buf.extend(raw)
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=len(raw), target=target))
    mn, mx = None, None
    if min_max and len(data) > 0:
        if data.ndim == 1: mn, mx = [float(data.min())], [float(data.max())]
        else: mn, mx = [float(x) for x in data.min(axis=0)], [float(x) for x in data.max(axis=0)]
    gltf.accessors.append(Accessor(bufferView=len(gltf.bufferViews)-1, componentType=c_type, count=len(data), type=g_type, min=mn, max=mx))
    return len(gltf.accessors) - 1

def process_shape(shape_node, gltf, bin_blob, def_map, skin_prim_info):
    geom = shape_node.find('.//IndexedFaceSet') or shape_node.find('.//IndexedTriangleSet')
    if geom is None: return None
    coord = geom.find('.//Coordinate')
    if coord is not None and coord.get('USE'): coord = def_map.get(coord.get('USE'))
    if coord is None: return None

    # Preserve original vertices exactly (1:1 mapping for flawless skinning)
    pts = np.array(parse_array(coord.get('point')), dtype=np.float32).reshape(-1, 3)
    idx_raw = parse_array(geom.get('coordIndex'), int)

    # Triangulate purely via indices without unrolling/duplicating vertices
    u_idx, poly = [], []
    for i in idx_raw:
        if i == -1:
            for j in range(1, len(poly)-1): u_idx.extend([poly[0], poly[j], poly[j+1]])
            poly = []
        else: poly.append(i)
    if not u_idx and not poly: u_idx = list(range(len(pts)))

    it = UNSIGNED_INT if len(pts) >= 65535 else UNSIGNED_SHORT
    prim_attrs = {"POSITION": add_acc(gltf, bin_blob, pts, VEC3, FLOAT, ARRAY_BUFFER, True)}

    app = shape_node.find('.//Appearance')
    mat_node = app.find('.//Material') if app is not None else None
    diff = parse_array(mat_node.get('diffuseColor'), default=[0.8,0.8,0.8]) if mat_node is not None else [0.8,0.8,0.8]
    gltf.materials.append(Material(pbrMetallicRoughness=PbrMetallicRoughness(baseColorFactor=diff+[1.0])))

    mesh_idx = len(gltf.meshes)
    gltf.meshes.append(Mesh(primitives=[Primitive(attributes=prim_attrs,
        indices=add_acc(gltf, bin_blob, np.array(u_idx, dtype=np.uint32 if it==UNSIGNED_INT else np.uint16), SCALAR, it, ELEMENT_ARRAY_BUFFER),
        material=len(gltf.materials)-1)]))

    n_idx = len(gltf.nodes)
    gltf.nodes.append(Node(name=f"SkinnedMesh_{mesh_idx}", mesh=mesh_idx))

    # 1:1 mapping array for weights
    skin_prim_info.append((n_idx, mesh_idx, len(pts)))
    return n_idx

def convert_x3d_to_glb(x3d_path, glb_path):
    print(f"Professional Converting: {x3d_path}")
    root = ET.parse(x3d_path).getroot(); strip_ns(root)
    def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF') is not None}
    gltf = GLTF2(scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])])
    bin_blob, def_to_nidx, def_to_tidx, joint_weights, skin_prim_info = bytearray(), {}, {}, {}, []

    def traverse(node, p_idx):
        if node.tag in ('Transform', 'Group', 'HAnimJoint', 'HAnimHumanoid', 'HAnimSegment'):
            dname = node.get('DEF') or f"{node.tag}_{len(gltf.nodes)}"
            t = parse_array(node.get('translation'), default=[0,0,0])
            c = parse_array(node.get('center'), default=[0,0,0])
            r = axis_angle_to_quat(*parse_array(node.get('rotation'), default=[0,1,0,0]))
            s = parse_array(node.get('scale'), default=[1,1,1])

            # 4-NODE CHAIN TO REPLICATE X3D MATH (T * C * R * S * -C)
            # 1. Translation Node (Target for PositionAnim)
            idx_t = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_T", translation=t, children=[]))
            gltf.nodes[p_idx].children.append(idx_t)

            # 2. Center-Forward Node
            idx_c_fwd = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_C_fwd", translation=c, children=[]))
            gltf.nodes[idx_t].children.append(idx_c_fwd)

            # 3. Rotation Node (THE JOINT - Target for OrientationAnim & Skinning)
            idx_r = len(gltf.nodes)
            gltf.nodes.append(Node(name=dname, rotation=r, scale=s, children=[]))
            gltf.nodes[idx_c_fwd].children.append(idx_r)

            # 4. Center-Reverse Node
            idx_c_rev = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_C_rev", translation=[-x for x in c], children=[]))
            gltf.nodes[idx_r].children.append(idx_c_rev)

            # Map DEF for routing & skinning
            def_to_tidx[node.get('DEF')] = idx_t # Map translation target
            def_to_nidx[node.get('DEF')] = idx_r # Map rotation target & joint skin

            if node.tag == 'HAnimJoint' and node.get('DEF'):
                idx, wgt = parse_array(node.get('skinCoordIndex'), int), parse_array(node.get('skinCoordWeight'))
                if idx: joint_weights[node.get('DEF')] = list(zip(idx, wgt))

            for child in node: traverse(child, idx_c_rev) # Children attach to Reverse node

        elif node.tag == 'Shape':
            sh_idx = process_shape(node, gltf, bin_blob, def_map, skin_prim_info)
            if sh_idx is not None: gltf.nodes[p_idx].children.append(sh_idx)
        else:
            for child in node: traverse(child, p_idx)

    traverse(root.find('Scene') or root, 0)

    # Calculate Bind Pose IBMs
    if joint_weights:
        j_names = sorted(joint_weights.keys(), key=lambda x: def_to_nidx.get(x, 0))
        j_nodes = [def_to_nidx[n] for n in j_names if n in def_to_nidx]

        # Compute World Matrices for all nodes
        world_mats = [np.eye(4, dtype=np.float32) for _ in gltf.nodes]
        def compute_mats(idx, parent_mat):
            n = gltf.nodes[idx]
            m = np.eye(4, dtype=np.float32)
            m[0:3, 3] = n.translation or [0,0,0]
            qx, qy, qz, qw = n.rotation or [0,0,0,1]
            m[0,0], m[0,1], m[0,2] = 1-2*qy**2-2*qz**2, 2*qx*qy-2*qz*qw, 2*qx*qz+2*qy*qw
            m[1,0], m[1,1], m[1,2] = 2*qx*qy+2*qz*qw, 1-2*qx**2-2*qz**2, 2*qy*qz-2*qx*qw
            m[2,0], m[2,1], m[2,2] = 2*qx*qz-2*qy*qw, 2*qy*qz+2*qx*qw, 1-2*qx**2-2*qy**2
            sx, sy, sz = n.scale or [1,1,1]
            m[:,0]*=sx; m[:,1]*=sy; m[:,2]*=sz
            world_mats[idx] = parent_mat @ m
            for c in n.children or []: compute_mats(c, world_mats[idx])

        compute_mats(0, np.eye(4, dtype=np.float32))

        # IBM = Inverse of Node 3 (Rotation Joint) at Bind Pose
        ibms = np.array([np.linalg.inv(world_mats[j]).flatten('F') for j in j_nodes], dtype=np.float32)
        s_idx = len(gltf.skins)
        gltf.skins.append(Skin(joints=j_nodes, inverseBindMatrices=add_acc(gltf, bin_blob, ibms, MAT4, FLOAT, None)))

        # Vertex Weight Alignment
        v_map = {}
        for i, name in enumerate(j_names):
            for v_idx, w in joint_weights[name]:
                v_map.setdefault(v_idx, []).append((i, w))

        for ni, mi, num_pts in skin_prim_info:
            gltf.nodes[ni].skin = s_idx

            # CRITICAL: Parent mesh to WorldRoot to prevent double-transforming
            for p in gltf.nodes:
                if p.children and ni in p.children: p.children.remove(ni)
            gltf.nodes[0].children.append(ni)

            for prim in gltf.meshes[mi].primitives:
                jd, wd = np.zeros((num_pts, 4), dtype=np.uint16), np.zeros((num_pts, 4), dtype=np.float32)
                for i in range(num_pts):
                    infs = sorted(v_map.get(i, [(0, 1.0)]), key=lambda x: x[1], reverse=True)[:4]
                    ws = np.array([max(0, x[1]) for x in infs], dtype=np.float32)
                    sw = ws.sum()
                    ws = ws/sw if sw > 0 else np.array([1,0,0,0], dtype=np.float32)
                    ws[0] += (1.0 - ws.sum()) # Force sum to exactly 1.0
                    for k, w in enumerate(ws):
                        jd[i, k], wd[i, k] = (infs[k][0] if w > 0 else 0), w
                prim.attributes["JOINTS_0"] = add_acc(gltf, bin_blob, jd, VEC4, UNSIGNED_SHORT, ARRAY_BUFFER)
                prim.attributes["WEIGHTS_0"] = add_acc(gltf, bin_blob, wd, VEC4, FLOAT, ARRAY_BUFFER)

    # Process Animation
    interp_drivers, node_targets = {}, []
    for route in root.iter('ROUTE'):
        fn, ff, tn, tf = route.get('fromNode'), route.get('fromField'), route.get('toNode'), route.get('toField')
        if ff == 'fraction_changed': interp_drivers[tn] = fn
        if ff == 'value_changed' and tn in def_to_nidx:
            path = 'rotation' if 'rotation' in tf.lower() else 'translation'
            # If animating Translation, point to Node 1 (def_to_tidx). Otherwise Node 3 (def_to_nidx).
            targ_node = def_to_tidx[tn] if path == 'translation' else def_to_nidx[tn]
            node_targets.append((fn, targ_node, path))

    if node_targets:
        anim = Animation(name="HumanoidAnimation", channels=[], samplers=[])
        for i_def, targ_node, path in node_targets:
            i_node = def_map.get(i_def)
            if i_node is None: continue
            sensor = def_map.get(interp_drivers.get(i_def))
            dur = float(sensor.get('cycleInterval', '1.0')) if sensor is not None else 1.0

            keys = np.array(parse_array(i_node.get('key')), dtype=np.float32) * dur
            vals = parse_array(i_node.get('keyValue'))

            if 'Orientation' in i_node.tag:
                v_data = np.array([axis_angle_to_quat(*vals[i:i+4]) for i in range(0, len(vals), 4)], dtype=np.float32)
                v_type = VEC4
            else:
                v_data = np.array(vals, dtype=np.float32).reshape(-1, 3); v_type = VEC3

            s_idx = len(anim.samplers)
            anim.samplers.append(AnimationSampler(input=add_acc(gltf, bin_blob, keys, SCALAR, FLOAT, None, True),
                                                  output=add_acc(gltf, bin_blob, v_data, v_type, FLOAT, None, True)))
            anim.channels.append(AnimationChannel(sampler=s_idx, target=AnimationChannelTarget(node=targ_node, path=path)))
        gltf.animations.append(anim)

    gltf.buffers.append(Buffer(byteLength=len(bin_blob)))
    gltf.set_binary_blob(bin_blob)
    gltf.save(glb_path)
    print(f"Success: {glb_path}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        convert_x3d_to_glb(sys.argv[1], sys.argv[2] if len(sys.argv)>2 else "output.glb")
    else:
        base = "C:/Users/jcarl/www.web3d.org/x3d/content/examples/HumanoidAnimation/Medical"
        convert_x3d_to_glb(f"{base}/LaughingUpperSkeleton.x3d",               "LaughingUpperSkeleton.glb")
        convert_x3d_to_glb(f"{base}/AnimatedAssembledHumanSkeleton.x3d", "AnimatedAssembledHumanSkeleton.glb")
        convert_x3d_to_glb(f"../../medicalbones/0scaled/0skeleton1AImapped.x3d", "0skeleton1.glb")
        convert_x3d_to_glb(f"HumanoidComplete.x3d", "HumanoidComplete.glb")
        convert_x3d_to_glb(f"HumanoidCompleteShort.x3d", "HumanoidCompleteShort.glb")
        convert_x3d_to_glb(f"JoeKickAnimation.x3d", "JoeKickAnimation.glb")
        convert_x3d_to_glb(f"Gramps8Final.x3d", "Gramps8Final.glb")

# --- END OF FILE x3d_to_binary.py ---

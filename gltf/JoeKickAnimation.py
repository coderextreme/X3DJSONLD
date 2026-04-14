import xml.etree.ElementTree as ET
import numpy as np
import os, math, re, mimetypes, base64, copy
from pygltflib import *

"""
x3d_to_glb_command.py
Flawless HAnim Skinning Converter + UV/Textures + Accurate Line Colors + Texture Animations
- Employs 4-Node Chain per joint to perfectly match X3D 'center' pivot math.
- Embeds ImageTextures and dynamically supplies missing UVs (Aspect-Ratio Bounding Box).
- Exact Mathematical UV pivot translations injected natively into KHR_texture_transform.
- Broadcaster handles translating X3D ScalarInterpolators into valid GLTF VEC2 Offsets.
- Dual-target Emissive/BaseColor synchronization for perfectly glowing texture animations.
- Promotes Skinned Meshes to Scene Root (Fixes Validator Warning & Sunrize Stack Overflow).
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

def parse_mfstring(val_str):
    if not val_str: return []
    matches = re.findall(r'"([^"]*)"|\'([^\']*)\'', val_str)
    if matches: return [m[0] if m[0] else m[1] for m in matches]
    return val_str.split()

def parse_indices_nested(val):
    if not val: return []
    raw = [int(x) for x in val.replace(',', ' ').split()]
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

def embed_texture(url_str, base_path, gltf, bin_blob):
    urls = parse_mfstring(url_str)
    data, mime = None, "image/jpeg"
    for u in urls:
        u = u.strip()
        if u.startswith('data:image'):
            try:
                head, b64 = u.split(',', 1)
                data = base64.b64decode(b64); mime = head.split(';')[0].replace('data:', '')
                break
            except: continue
        local = os.path.join(base_path, u.replace('\\', '/'))
        if os.path.exists(local):
            with open(local, 'rb') as f: data = f.read()
            mime = mimetypes.guess_type(u)[0] or "image/jpeg"
            break
    if not data: return None

    pad = (4 - len(bin_blob) % 4) % 4
    bin_blob.extend(b'\x00' * pad)
    off = len(bin_blob)
    bin_blob.extend(data)
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=len(data)))
    gltf.images.append(Image(bufferView=len(gltf.bufferViews)-1, mimeType=mime))
    gltf.textures.append(Texture(source=len(gltf.images)-1))
    return len(gltf.textures) - 1

def resolve_material(shape_node, def_map, gltf, bin_blob, base_path, tex_transform_targets, tex_transform_nodes, mat_cache):
    app = shape_node.find('.//Appearance')
    if app is not None and app.get('USE'):
        app = def_map.get(app.get('USE'), app)
    if app is None: return None

    app_key = app.get('DEF') or str(id(app))
    if app_key in mat_cache:
        return mat_cache[app_key]

    mat_node = app.find('.//Material')
    if mat_node is not None and mat_node.get('USE'): mat_node = def_map.get(mat_node.get('USE'), mat_node)

    img_node = app.find('.//ImageTexture')
    if img_node is not None and img_node.get('USE'): img_node = def_map.get(img_node.get('USE'), img_node)

    tx_node  = app.find('.//TextureTransform')
    if tx_node is not None and tx_node.get('USE'): tx_node = def_map.get(tx_node.get('USE'), tx_node)

    diff = parse_array(mat_node.get('diffuseColor', '0.8 0.8 0.8')) if mat_node is not None else [0.8, 0.8, 0.8]
    emis = parse_array(mat_node.get('emissiveColor', '0.0 0.0 0.0')) if mat_node is not None else [0.0, 0.0, 0.0]

    pbr = PbrMetallicRoughness(baseColorFactor=diff + [1.0], metallicFactor=0.0, roughnessFactor=0.8)

    if img_node is not None:
        tex_idx = embed_texture(img_node.get('url', ''), base_path, gltf, bin_blob)
        if tex_idx is not None:
            ti = TextureInfo(index=tex_idx)
            if tx_node is not None:
                t = parse_array(tx_node.get('translation', '0 0'), float, [0, 0])
                r = parse_array(tx_node.get('rotation', '0'), float, [0])[0]
                s = parse_array(tx_node.get('scale', '1 1'), float, [1, 1])
                c = parse_array(tx_node.get('center', '0 0'), float, [0, 0])

                # GLTF Math for Unified Scale/Rotation Pivot alignment
                cos_r = math.cos(r)
                sin_r = math.sin(r)
                off_x = t[0] + c[0] - s[0] * cos_r * c[0] - s[1] * sin_r * (1.0 - c[1])
                off_y = 1.0 - t[1] - c[1] + s[0] * sin_r * c[0] - s[1] * cos_r * (1.0 - c[1])

                ti.extensions = {"KHR_texture_transform": {
                    "offset": [off_x, off_y],
                    "rotation": -r,
                    "scale": [s[0], s[1]]
                }}
            else:
                ti.extensions = {"KHR_texture_transform": {"offset": [0.0, 0.0], "rotation": 0.0, "scale": [1.0, 1.0]}}

            pbr.baseColorTexture = ti

    mat = Material(pbrMetallicRoughness=pbr, doubleSided=True)
    if sum(emis) > 0.0:
        mat.emissiveFactor = emis
        # Map active textures to emissive bounds so neon animations glow natively
        if pbr.baseColorTexture is not None:
            mat.emissiveTexture = copy.deepcopy(pbr.baseColorTexture)

    mat_idx = len(gltf.materials)
    gltf.materials.append(mat)
    mat_cache[app_key] = mat_idx

    # Generate Physical Proxy Nodes and Material Target Pointers
    if tx_node is not None and tx_node.get('DEF'):
        tx_def = tx_node.get('DEF')

        if tx_def not in tex_transform_nodes:
            t = parse_array(tx_node.get('translation', '0 0'), float, [0, 0])
            r = parse_array(tx_node.get('rotation', '0'), float, [0])[0]
            s = parse_array(tx_node.get('scale', '1 1'), float, [1, 1])
            c = parse_array(tx_node.get('center', '0 0'), float, [0, 0])

            idx_t = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{tx_def}_T", translation=[t[0], t[1], 0], children=[]))

            idx_c_fwd = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{tx_def}_C_fwd", translation=[c[0], c[1], 0], children=[]))
            gltf.nodes[idx_t].children.append(idx_c_fwd)

            idx_r = len(gltf.nodes)
            quat = axis_angle_to_quat(0, 0, 1, r)
            gltf.nodes.append(Node(name=tx_def, rotation=quat, scale=[s[0], s[1], 1], children=[]))
            gltf.nodes[idx_c_fwd].children.append(idx_r)

            idx_c_rev = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{tx_def}_C_rev", translation=[-c[0], -c[1], 0], children=[]))
            gltf.nodes[idx_r].children.append(idx_c_rev)

            gltf.nodes[0].children.append(idx_t)
            tex_transform_nodes[tx_def] = {'T': idx_t, 'R': idx_r}

        if pbr.baseColorTexture is not None:
            if tx_def not in tex_transform_targets: tex_transform_targets[tx_def] = []

            base_ptr = f"/materials/{mat_idx}/pbrMetallicRoughness/baseColorTexture/extensions/KHR_texture_transform"
            tex_transform_targets[tx_def].append(base_ptr)

            if sum(emis) > 0.0:
                emis_ptr = f"/materials/{mat_idx}/emissiveTexture/extensions/KHR_texture_transform"
                tex_transform_targets[tx_def].append(emis_ptr)

    return mat_idx

def process_shape(shape_node, gltf, bin_blob, def_map, base_path, skin_prim_info, tex_transform_targets, tex_transform_nodes, mat_cache):
    geom = shape_node.find('.//IndexedFaceSet')
    if geom is None: geom = shape_node.find('.//IndexedTriangleSet')
    if geom is None: return None

    coord = geom.find('.//Coordinate')
    if coord is not None and coord.get('USE'): coord = def_map.get(coord.get('USE'))
    if coord is None: return None

    pts = np.array(parse_array(coord.get('point')), dtype=np.float32).reshape(-1, 3)

    tex_node = geom.find('.//TextureCoordinate')
    if tex_node is not None and tex_node.get('USE'): tex_node = def_map.get(tex_node.get('USE'))
    uvs = np.array(parse_array(tex_node.get('point')), dtype=np.float32).reshape(-1, 2) if tex_node is not None else []
    if len(uvs) > 0: uvs[:, 1] = 1.0 - uvs[:, 1]

    app = shape_node.find('.//Appearance')
    if app is not None and app.get('USE'): app = def_map.get(app.get('USE'), app)
    has_texture = False
    if app is not None:
        img_node = app.find('.//ImageTexture')
        if img_node is not None and img_node.get('USE'): img_node = def_map.get(img_node.get('USE'), img_node)
        if img_node is not None: has_texture = True

    need_uvs = (len(uvs) > 0) or has_texture

    if need_uvs:
        min_p = np.min(pts, axis=0)
        max_p = np.max(pts, axis=0)
        size = max_p - min_p

        size_biased = size + np.array([0.003, 0.002, 0.001])
        dims = np.argsort(size_biased)[::-1]
        dimS, dimT = dims[0], dims[1]
        s_size = size[dimS] if size[dimS] > 1e-5 else 1.0

        def get_fallback_uv(pt):
            s = (pt[dimS] - min_p[dimS]) / s_size
            t = (pt[dimT] - min_p[dimT]) / s_size
            return [s, 1.0 - t]

    p_polys = parse_indices_nested(geom.get('coordIndex')) or [[i,i+1,i+2] for i in range(0, len(pts), 3)]
    t_polys = parse_indices_nested(geom.get('texCoordIndex')) or p_polys

    u_pos, u_uvs, u_idx, g_map, u_verts = [], [], [], [], {}
    for pi, poly in enumerate(p_polys):
        t_poly = t_polys[pi] if pi < len(t_polys) else poly
        for i in range(1, len(poly)-1):
            for j in (0, i, i+1):
                p_i = poly[j]
                t_i = t_poly[j] if j < len(t_poly) else p_i

                v_key = (p_i, t_i)
                if v_key not in u_verts:
                    u_verts[v_key] = len(u_pos)
                    u_pos.append(pts[p_i])
                    g_map.append(p_i)

                    if need_uvs:
                        if t_i < len(uvs) and t_i >= 0: u_uvs.append(uvs[t_i])
                        else: u_uvs.append(get_fallback_uv(pts[p_i]))

                u_idx.append(u_verts[v_key])

    if not u_idx: return None

    it = UNSIGNED_INT if len(u_pos) >= 65535 else UNSIGNED_SHORT
    prim_attrs = {"POSITION": add_acc(gltf, bin_blob, np.array(u_pos, dtype=np.float32), VEC3, FLOAT, ARRAY_BUFFER, True)}
    if need_uvs: prim_attrs["TEXCOORD_0"] = add_acc(gltf, bin_blob, np.array(u_uvs, dtype=np.float32), VEC2, FLOAT, ARRAY_BUFFER)

    m_idx = resolve_material(shape_node, def_map, gltf, bin_blob, base_path, tex_transform_targets, tex_transform_nodes, mat_cache)

    mesh_idx = len(gltf.meshes)
    gltf.meshes.append(Mesh(primitives=[Primitive(attributes=prim_attrs,
        indices=add_acc(gltf, bin_blob, np.array(u_idx, dtype=np.uint32 if it==UNSIGNED_INT else np.uint16), SCALAR, it, ELEMENT_ARRAY_BUFFER),
        material=m_idx)]))

    n_idx = len(gltf.nodes)
    gltf.nodes.append(Node(name=f"SkinnedMesh_{mesh_idx}", mesh=mesh_idx))

    skin_prim_info.append((n_idx, mesh_idx, g_map))
    return n_idx

def process_line_shape(shape_node, gltf, bin_blob, def_map):
    geom = shape_node.find('.//IndexedLineSet')
    if geom is None: return None
    if geom.get('USE'): geom = def_map.get(geom.get('USE'), geom)

    coord = geom.find('.//Coordinate')
    if coord is not None and coord.get('USE'): coord = def_map.get(coord.get('USE'), coord)
    if coord is None: return None
    pts = np.array(parse_array(coord.get('point')), dtype=np.float32).reshape(-1, 3)

    color_node = geom.find('.//Color')
    if color_node is not None and color_node.get('USE'):
        color_node = def_map.get(color_node.get('USE'), color_node)

    colors = None
    if color_node is not None:
        c = parse_array(color_node.get('color'))
        if c: colors = np.array(c, dtype=np.float32).reshape(-1, 3)
    color_per_vertex = geom.get('colorPerVertex', 'true').lower() != 'false'
    color_index = parse_array(geom.get('colorIndex', ''), int)

    base_color = [1.0, 1.0, 1.0, 1.0]
    if colors is None:
        app = shape_node.find('.//Appearance')
        if app is not None and app.get('USE'): app = def_map.get(app.get('USE'), app)
        if app is not None:
            mat = app.find('.//Material')
            if mat is not None and mat.get('USE'): mat = def_map.get(mat.get('USE'), mat)
            if mat is not None:
                emissive = parse_array(mat.get('emissiveColor', '0 0 0'))
                diffuse  = parse_array(mat.get('diffuseColor', '0 0 0'))
                if sum(emissive) > 0.0: base_color = emissive + [1.0]
                elif sum(diffuse) > 0.0: base_color = diffuse + [1.0]

    pbr = PbrMetallicRoughness(baseColorFactor=base_color, metallicFactor=0.0, roughnessFactor=1.0)
    mat_idx = len(gltf.materials)
    gltf.materials.append(Material(pbrMetallicRoughness=pbr, doubleSided=True))

    raw_idx = parse_array(geom.get('coordIndex', ''), int)
    polylines, cur = [], []
    for i in raw_idx:
        if i == -1:
            if len(cur) >= 2: polylines.append(cur)
            cur = []
        else: cur.append(i)
    if len(cur) >= 2: polylines.append(cur)
    if not polylines: return None

    if colors is not None and not color_per_vertex:
        line_pts, line_cols = [], []
        for seg_i, poly in enumerate(polylines):
            cidx = color_index[seg_i] if seg_i < len(color_index) else seg_i
            c = colors[cidx] if cidx < len(colors) else np.array([1.0, 1.0, 1.0])
            for k in range(len(poly) - 1):
                line_pts.extend([pts[poly[k]], pts[poly[k + 1]]])
                line_cols.extend([c, c])
        prim_attrs = {
            "POSITION": add_acc(gltf, bin_blob, np.array(line_pts, dtype=np.float32), VEC3, FLOAT, ARRAY_BUFFER, True),
            "COLOR_0":  add_acc(gltf, bin_blob, np.array(line_cols, dtype=np.float32), VEC3, FLOAT, ARRAY_BUFFER),
        }
        primitives = [Primitive(attributes=prim_attrs, mode=1, material=mat_idx)]
    else:
        primitives = []
        for poly in polylines:
            line_pts = np.array([pts[i] for i in poly], dtype=np.float32)
            prim_attrs = {"POSITION": add_acc(gltf, bin_blob, line_pts, VEC3, FLOAT, ARRAY_BUFFER, True)}
            if colors is not None and color_per_vertex:
                vc = np.array([colors[i] if i < len(colors) else [1, 1, 1] for i in poly], dtype=np.float32)
                prim_attrs["COLOR_0"] = add_acc(gltf, bin_blob, vc, VEC3, FLOAT, ARRAY_BUFFER)
            primitives.append(Primitive(attributes=prim_attrs, mode=3, material=mat_idx))

    if not primitives: return None
    mesh_idx = len(gltf.meshes)
    gltf.meshes.append(Mesh(primitives=primitives))
    n_idx = len(gltf.nodes)
    gltf.nodes.append(Node(name=f"LineMesh_{mesh_idx}", mesh=mesh_idx))
    return n_idx

def convert_x3d_to_glb(x3d_path, glb_path):
    print(f"Professional Converting: {x3d_path}")
    base_dir = os.path.dirname(os.path.abspath(x3d_path))
    root = ET.parse(x3d_path).getroot(); strip_ns(root)
    def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF') is not None}

    gltf = GLTF2(scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])])
    bin_blob, def_to_nidx, def_to_tidx, joint_weights, skin_prim_info = bytearray(), {}, {}, {}, []

    mat_cache = {}
    tex_transform_nodes = {}
    tex_transform_targets = {}

    def traverse(node, p_idx, inside_hanim=False):
        if node.tag in ('Transform', 'Group', 'HAnimJoint', 'HAnimHumanoid', 'HAnimSegment', 'HAnimSite'):
            dname = node.get('DEF') or f"{node.tag}_{len(gltf.nodes)}"
            t = parse_array(node.get('translation'), default=[0,0,0])
            c = parse_array(node.get('center'), default=[0,0,0])
            r = axis_angle_to_quat(*parse_array(node.get('rotation'), default=[0,1,0,0]))
            s = parse_array(node.get('scale'), default=[1,1,1])

            idx_t = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_T", translation=t, children=[]))
            gltf.nodes[p_idx].children.append(idx_t)

            idx_c_fwd = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_C_fwd", translation=c, children=[]))
            gltf.nodes[idx_t].children.append(idx_c_fwd)

            idx_r = len(gltf.nodes)
            gltf.nodes.append(Node(name=dname, rotation=r, scale=s, children=[]))
            gltf.nodes[idx_c_fwd].children.append(idx_r)

            idx_c_rev = len(gltf.nodes)
            gltf.nodes.append(Node(name=f"{dname}_C_rev", translation=[-x for x in c], children=[]))
            gltf.nodes[idx_r].children.append(idx_c_rev)

            def_to_tidx[node.get('DEF')] = idx_t
            def_to_nidx[node.get('DEF')] = idx_r

            if node.tag == 'HAnimJoint' and node.get('DEF'):
                idx, wgt = parse_array(node.get('skinCoordIndex'), int), parse_array(node.get('skinCoordWeight'))
                if idx: joint_weights[node.get('DEF')] = list(zip(idx, wgt))

            child_inside_hanim = inside_hanim or node.tag == 'HAnimHumanoid'
            for child in node: traverse(child, idx_c_rev, child_inside_hanim)

        elif node.tag == 'Shape':
            actual_node = (def_map.get(node.get('USE'), node) if node.get('USE') and not node.get('DEF') else node)

            if (actual_node.find('.//IndexedFaceSet') is not None or actual_node.find('.//IndexedTriangleSet') is not None):
                prims_target = skin_prim_info if inside_hanim else []
                sh_idx = process_shape(actual_node, gltf, bin_blob, def_map,
                                       base_dir, prims_target, tex_transform_targets, tex_transform_nodes, mat_cache)
            else:
                sh_idx = process_line_shape(actual_node, gltf, bin_blob, def_map)

            if sh_idx is not None: gltf.nodes[p_idx].children.append(sh_idx)
        else:
            for child in node: traverse(child, p_idx, inside_hanim)

    scene_node = root.find('Scene')
    traverse(scene_node if scene_node is not None else root, 0)

    # Compute Standard Skin Bind Poses
    if joint_weights:
        j_names = sorted(joint_weights.keys(), key=lambda x: def_to_nidx.get(x, 0))
        j_nodes = [def_to_nidx[n] for n in j_names if n in def_to_nidx]

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

        ibms = np.array([np.linalg.inv(world_mats[j]).flatten('F') for j in j_nodes], dtype=np.float32)
        s_idx = len(gltf.skins)
        gltf.skins.append(Skin(joints=j_nodes, inverseBindMatrices=add_acc(gltf, bin_blob, ibms, MAT4, FLOAT, None)))

        v_map = {}
        for i, name in enumerate(j_names):
            for v_idx, w in joint_weights[name]:
                v_map.setdefault(v_idx, []).append((i, w))

        for ni, mi, gmap in skin_prim_info:
            gltf.nodes[ni].skin = s_idx

            for p in gltf.nodes:
                if p.children and ni in p.children: p.children.remove(ni)
            if ni not in gltf.scenes[0].nodes:
                gltf.scenes[0].nodes.append(ni)

            for prim in gltf.meshes[mi].primitives:
                num_pts = len(gmap)
                jd, wd = np.zeros((num_pts, 4), dtype=np.uint16), np.zeros((num_pts, 4), dtype=np.float32)
                for i in range(num_pts):
                    original_idx = gmap[i]
                    infs = sorted(v_map.get(original_idx, [(0, 1.0)]), key=lambda x: x[1], reverse=True)[:4]
                    ws = np.array([max(0, x[1]) for x in infs], dtype=np.float32)
                    sw = ws.sum()
                    ws = ws/sw if sw > 0 else np.array([1,0,0,0], dtype=np.float32)
                    ws[0] += (1.0 - ws.sum())
                    for k, w in enumerate(ws):
                        jd[i, k], wd[i, k] = (infs[k][0] if w > 0 else 0), w
                prim.attributes["JOINTS_0"] = add_acc(gltf, bin_blob, jd, VEC4, UNSIGNED_SHORT, ARRAY_BUFFER)
                prim.attributes["WEIGHTS_0"] = add_acc(gltf, bin_blob, wd, VEC4, FLOAT, ARRAY_BUFFER)

    # Process Inter-nodal Routing & Synchronized Textural Animations
    interp_drivers, node_targets, tex_transform_anims = {}, [], []
    for route in root.iter('ROUTE'):
        fn, ff, tn, tf = route.get('fromNode'), route.get('fromField'), route.get('toNode'), route.get('toField')
        if ff == 'fraction_changed': interp_drivers[tn] = fn
        if ff == 'value_changed':
            path = 'rotation' if 'rotation' in tf.lower() else 'translation'

            if tn in def_to_nidx:
                targ_node = def_to_tidx[tn] if path == 'translation' else def_to_nidx[tn]
                node_targets.append((fn, targ_node, path, False))

            elif tn in tex_transform_nodes:
                if 'translation' in tf.lower(): path = 'translation'
                elif 'scale' in tf.lower(): path = 'scale'
                else: path = 'rotation'

                targ_node = tex_transform_nodes[tn]['T'] if path == 'translation' else tex_transform_nodes[tn]['R']
                node_targets.append((fn, targ_node, path, True))

                if tn in tex_transform_targets:
                    for base_ptr in tex_transform_targets[tn]:
                        pointer_prop = 'offset' if path == 'translation' else path
                        pointer = f"{base_ptr}/{pointer_prop}"
                        tex_transform_anims.append((fn, pointer, pointer_prop, tn))

    if node_targets or tex_transform_anims:
        anim = Animation(name="HumanoidAnimation", channels=[], samplers=[])

        # 1. Dispatch Skeleton and Proxy Transforms
        for i_def, targ_node, path, is_tx in node_targets:
            i_node = def_map.get(i_def)
            if i_node is None: continue
            sensor = def_map.get(interp_drivers.get(i_def))
            dur = float(sensor.get('cycleInterval', '1.0')) if sensor is not None else 1.0

            keys = np.array(parse_array(i_node.get('key')), dtype=np.float32) * dur
            vals = parse_array(i_node.get('keyValue'))

            if is_tx:
                if path == 'rotation':
                    r_x3d = np.array(vals, dtype=np.float32)
                    v_data = np.zeros((len(r_x3d), 4), dtype=np.float32)
                    v_data[:, 2] = np.sin(r_x3d / 2.0)
                    v_data[:, 3] = np.cos(r_x3d / 2.0)
                    v_type = VEC4
                else:
                    if i_node.tag == 'ScalarInterpolator':
                        s_vals = np.array(vals, dtype=np.float32).reshape(-1)
                        v_2d = np.column_stack((s_vals, s_vals))
                    else:
                        v_2d = np.array(vals, dtype=np.float32).reshape(-1, 2)

                    v_data = np.zeros((len(v_2d), 3), dtype=np.float32)
                    v_data[:, 0:2] = v_2d
                    if path == 'scale': v_data[:, 2] = 1.0
                    v_type = VEC3
            else:
                if 'Orientation' in i_node.tag or path == 'rotation':
                    if len(vals) < 4: continue
                    v_data = np.array([axis_angle_to_quat(*vals[i:i+4]) for i in range(0, len(vals)-3, 4)], dtype=np.float32)
                    v_type = VEC4
                else:
                    if len(vals) < 3: continue
                    v_data = np.array(vals, dtype=np.float32)
                    v_data = v_data[:len(v_data) - (len(v_data) % 3)].reshape(-1, 3)
                    v_type = VEC3

            min_len = min(len(keys), len(v_data))
            if min_len == 0: continue

            s_idx = len(anim.samplers)
            anim.samplers.append(AnimationSampler(
                input=add_acc(gltf, bin_blob, keys[:min_len], SCALAR, FLOAT, None, True),
                output=add_acc(gltf, bin_blob, v_data[:min_len], v_type, FLOAT, None, True)))
            anim.channels.append(AnimationChannel(sampler=s_idx, target=AnimationChannelTarget(node=targ_node, path=path)))

        # 2. Emissive Glow Extrapolated Texture Transform Baking Vectors
        for i_def, pointer, prop, tx_def in tex_transform_anims:
            i_node = def_map.get(i_def)
            if i_node is None: continue
            sensor = def_map.get(interp_drivers.get(i_def))
            dur = float(sensor.get('cycleInterval', '1.0')) if sensor is not None else 1.0

            keys_arr = np.array(parse_array(i_node.get('key')), dtype=np.float32) * dur
            vals_arr = parse_array(i_node.get('keyValue'))

            tx_node = def_map.get(tx_def)
            base_t = parse_array(tx_node.get('translation', '0 0'), float, [0.0, 0.0]) if tx_node is not None else [0.0, 0.0]
            base_r = parse_array(tx_node.get('rotation', '0'), float, [0.0])[0] if tx_node is not None else 0.0
            base_s = parse_array(tx_node.get('scale', '1 1'), float, [1.0, 1.0]) if tx_node is not None else [1.0, 1.0]
            base_c = parse_array(tx_node.get('center', '0 0'), float, [0.0, 0.0]) if tx_node is not None else [0.0, 0.0]

            tracks_to_add = []

            if prop == 'offset':
                if i_node.tag == 'ScalarInterpolator':
                    scalar_vals = np.array(vals_arr, dtype=np.float32).reshape(-1)
                    v_data = np.column_stack((scalar_vals, scalar_vals))
                else:
                    v_data = np.array(vals_arr, dtype=np.float32).reshape(-1, 2)

                tx, ty = v_data[:, 0], v_data[:, 1]
                cx, cy = base_c
                sx, sy = base_s
                cos_r, sin_r = math.cos(base_r), math.sin(base_r)

                off_x = tx + cx - sx * cos_r * cx - sy * sin_r * (1.0 - cy)
                off_y = 1.0 - ty - cy + sx * sin_r * cx - sy * cos_r * (1.0 - cy)
                out_data = np.column_stack((off_x, off_y))

                tracks_to_add.append((pointer, out_data, VEC2))

            elif prop == 'scale':
                if i_node.tag == 'ScalarInterpolator':
                    scalar_vals = np.array(vals_arr, dtype=np.float32).reshape(-1)
                    v_data = np.column_stack((scalar_vals, scalar_vals))
                else:
                    v_data = np.array(vals_arr, dtype=np.float32).reshape(-1, 2)

                tracks_to_add.append((pointer, v_data, VEC2))

                base_pointer = pointer.rsplit('/', 1)[0]
                tx, ty = base_t
                cx, cy = base_c
                sx, sy = v_data[:, 0], v_data[:, 1]
                cos_r, sin_r = math.cos(base_r), math.sin(base_r)

                off_x = tx + cx - sx * cos_r * cx - sy * sin_r * (1.0 - cy)
                off_y = 1.0 - ty - cy + sx * sin_r * cx - sy * cos_r * (1.0 - cy)
                out_data = np.column_stack((off_x, off_y))

                tracks_to_add.append((f"{base_pointer}/offset", out_data, VEC2))

            elif prop == 'rotation':
                r_x3d = np.array(vals_arr, dtype=np.float32).reshape(-1)
                r_gltf = -r_x3d
                tracks_to_add.append((pointer, r_gltf.reshape(-1, 1), SCALAR))

                base_pointer = pointer.rsplit('/', 1)[0]
                tx, ty = base_t
                cx, cy = base_c
                sx, sy = base_s
                cos_r, sin_r = np.cos(r_x3d), np.sin(r_x3d)

                off_x = tx + cx - sx * cos_r * cx - sy * sin_r * (1.0 - cy)
                off_y = 1.0 - ty - cy + sx * sin_r * cx - sy * cos_r * (1.0 - cy)
                out_data = np.column_stack((off_x, off_y))

                tracks_to_add.append((f"{base_pointer}/offset", out_data, VEC2))

            # Commit Safe Synchronized Extension Keyframes
            for trk_ptr, trk_data, trk_type in tracks_to_add:
                min_len = min(len(keys_arr), len(trk_data))
                if min_len == 0: continue

                s_idx = len(anim.samplers)
                anim.samplers.append(AnimationSampler(
                    input=add_acc(gltf, bin_blob, keys_arr[:min_len], SCALAR, FLOAT, None, True),
                    output=add_acc(gltf, bin_blob, trk_data[:min_len], trk_type, FLOAT, None, True)))

                chan = AnimationChannel(sampler=s_idx, target=AnimationChannelTarget(path="pointer"))
                chan.target.extensions = {"KHR_animation_pointer": {"pointer": trk_ptr}}
                anim.channels.append(chan)

        gltf.animations.append(anim)

    ext_used = []
    if tex_transform_anims: ext_used += ["KHR_texture_transform", "KHR_animation_pointer"]
    if ext_used: gltf.extensionsUsed = ext_used

    gltf.buffers.append(Buffer(byteLength=len(bin_blob)))
    gltf.set_binary_blob(bin_blob)
    gltf.save(glb_path)
    print(f"Success: {glb_path}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        convert_x3d_to_glb(sys.argv[1], sys.argv[2] if len(sys.argv)>2 else "output.glb")
    else:
        convert_x3d_to_glb(f"JoeSkinTexcoordDisplacerKick.x3d", "JoeSkinTexcoordDisplacerKick.glb")
        convert_x3d_to_glb(f"JoeKickAnimation.x3d", "JoeKickAnimation.glb")

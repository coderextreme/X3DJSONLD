#!/usr/bin/env python3
r"""
Integrated converter release: x3d_to_glb_merged9.py.

What Has Been Integrated

1.  Dynamic CoordinateInterpolator Morph Target Generation:
      - glTF does not have per-vertex point interpolators; the converter
        transforms each keyframe of a CoordinateInterpolator into a glTF morph
        target (\Delta = P_{\text{key}} - P_{\text{base}}) on the target mesh
        primitive.
      - At runtime, linear blending between adjacent keyframes is synthesized by
        computing the corresponding morph target weights.
2.  HAnimDisplacer Morph Targets with Direct Vertex Index Mapping:
      - coordIndex and displacements are mapped directly to vertex positions
        through p_idx_to_gltf_v_idx (handling vertex splits caused by UVs,
        normals, or colors).
      - Generates glTF 2.0 compliant morph target accessors (target=None on
        buffer views).
3.  Route Graph Resolution & Morph Animation Tracks:
      - Upstream route walking (find_driving_timesensor and get_incoming_routes)
        connects TimeSensor \to ScalarInterpolator \to HAnimDisplacer.weight or
        TimeSensor \to CoordinateInterpolator \to Coordinate.point.
      - Produces glTF AnimationChannel targeting path="weights" on the
        corresponding glTF node.
4.  Skinned Mesh Compatibility:
      - Skinned meshes (e.g. H-Anim character bodies) and morph targets (e.g.
        facial action units on characters like JinLOA4 or CleanedYouClocks)
        coexist on the same node and primitive without conflicts.

Added in merged5 (from the JoeKickAnimation work):
5.  HAnimJoint / HAnimHumanoid HAnimDisplacer -> skinCoord morph targets:
      - HAnimDisplacer nodes that live under an HAnimJoint (or directly under the
        HAnimHumanoid) index into the humanoid's skinCoord, so they become morph
        targets on every skin Shape that shares that Coordinate.  Displacers
        under an HAnimSegment keep their old behaviour (the segment's own shapes).
6.  TextureTransform animation:
      - ScalarInterpolator -> TextureTransform.rotation and
        PositionInterpolator2D -> translation / scale / center are converted to
        KHR_animation_pointer channels on KHR_texture_transform
        (offset / rotation / scale) for every material that uses that
        TextureTransform, on the same animation as the driving TimeSensor.
      - TextureTransform -> KHR_texture_transform now accounts for glTF's
        flipped V axis (see TT_V_FLIP_CORRECT).
"""

# -*- coding: utf-8 -*-
# JoeKickAnimation integration retained in this release:
#   * Joint/Humanoid-owned HAnimDisplacer nodes are collected as skinCoord
#     morph targets and mapped through the final unified vertex index map.
#   * Displacer weights and CoordinateInterpolator morph weights are emitted
#     as glTF animation weights channels on the generated skin meshes.
#   * TextureTransform animation is baked across the union of routed keys
#     and emitted with KHR_animation_pointer targeting KHR_texture_transform.
#   * TextureTransform center/translation/scale/rotation effects are folded
#     into the correct KHR offset, rotation, and scale values.
# ==============================================================================
# x3d_to_glb_merged9.py
# IndexedLineSet color export: X3D Color/ColorRGBA -> glTF COLOR_0, with
# colorPerVertex/colorIndex applied to individual line segments. RGB receives
# alpha=1; ColorRGBA alpha is retained.
# JoeKick texture validation: report locally embedded textures and make missing
# texture fallback explicit. UV repair, seam splitting, mipmaps, and animated
# KHR_texture_transform support are retained from merged7.
# Unified X3D -> glTF 2.0 / 2.1 Binary (.glb) Converter
#
# Features:
#   * Geometry: IndexedFaceSet, IndexedTriangleSet, TriangleSet, Box, Sphere,
#     Cone, Cylinder, Extrusion, Rectangle2D, LineSet, IndexedLineSet, InlineGeometry.
#   * Materials & Textures: PBR Metallic-Roughness, Appearance, Material
#     (diffuse, emissive, shininess), ImageTexture, TextureTransform
#     (KHR_texture_transform), ColorRGBA, LineProperties.
#   * Morph Targets: Full HAnimDisplacer shape keys and CoordinateInterpolator
#     keyframe conversion into glTF morph targets with animated weights.
#   * H-Anim Skinning: HAnimHumanoid, HAnimJoint (dual-node center pattern,
#     strictly normalized non-negative skin weights, inverse bind matrices),
#     and HAnimMotion.
#   * Animation: Shortest-path quaternion SLERP, strictly increasing timestamps,
#     Position/Orientation/Scalar/CoordinateInterpolators, viewpoint tours.
#   * Interactivity: KHR_interactivity behavior graphs (TouchSensor, TimeSensor,
#     BooleanToggle, ProximitySensor, selectable CylinderSensor/PlaneSensor targets,
#     and conservative Script initialize() literal-to-TRS translation).
#   * Interactive Bone Mode: Auto-detected or via --bones. Click bones to
#     glide/focus camera with highlight shells and joint-rotation axes.
#   * Layering & Lighting: LayerSet, Layer (renderingGroupId, selectability),
#     DirectionalLight, PointLight, SpotLight (KHR_lights_punctual).
# ==============================================================================

import struct
import xml.etree.ElementTree as ET
import numpy as np
import json, os, urllib.request, urllib.parse, math, mimetypes, base64, re, gzip, copy, ssl, posixpath
from pygltflib import *

# Attempt to load Pillow for X3D Text rendering
try:
    from PIL import Image as PILImage, ImageDraw, ImageFont
    HAS_PIL = True
except ImportError:
    HAS_PIL = False

# ---------------------------------------------------------------------------
# High-Speed Local & Remote Resource Resolution
# ---------------------------------------------------------------------------

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

def convert_sequenced_viewpoints(ctx):
    """
    Translates X3D TimeSensor -> BooleanSequencer -> Viewpoint.set_bind graphs
    into an animated glTF Director Camera track synchronized with the master clock.
    """
    gltf = ctx.gltf
    bin_blob = ctx.bin_blob
    world_mats = _world_matrices(gltf)

    # 1. Create a dedicated Director Camera if not already present
    cam_data_idx = len(gltf.cameras)
    gltf.cameras.append(Camera(
        type="perspective",
        perspective=Perspective(yfov=0.785398, znear=0.1, zfar=2000.0)
    ))
    director_node_idx = len(gltf.nodes)
    gltf.nodes.append(Node(
        name="DirectorCamera",
        camera=cam_data_idx,
        translation=[0.0, 1.5, 5.0],
        rotation=[0.0, 0.0, 0.0, 1.0]
    ))
    gltf.scenes[0].nodes.insert(0, director_node_idx)

    # 2. Inspect all scopes for TimeSensor -> BooleanSequencer -> Viewpoint chains
    for scope in ctx.scopes:
        # Find all routes targeting set_bind on Viewpoints
        bind_routes = [r for r in scope.root.findall('.//ROUTE') if r.get('toField') in ('set_bind', 'bind')]
        if not bind_routes:
            continue

        seq_to_vp = {}
        for r in bind_routes:
            seq_to_vp[r.get('fromNode')] = r.get('toNode')

        # Find TimeSensors driving these sequencers
        for ts in scope.root.findall('.//TimeSensor'):
            ts_def = ts.get('DEF')
            cycle = float(ts.get('cycleInterval', '1.0'))
            ts_routes = [r for r in scope.root.findall('.//ROUTE') 
                         if r.get('fromNode') == ts_def and r.get('toNode') in seq_to_vp]

            if not ts_routes:
                continue

            events = []
            for r in ts_routes:
                bs_name = r.get('toNode')
                vp_name = seq_to_vp.get(bs_name)
                bs_el = scope.def_map.get(bs_name)
                vp_el = scope.def_map.get(vp_name)
                if bs_el is None or vp_el is None:
                    continue

                keys = parse_array(bs_el.get('key', ''), float)
                vals = [v.lower() in ('true', '1') for v in bs_el.get('keyValue', '').split()]
                
                # Check transitionTime from NavigationInfo if present
                nav_info = vp_el.find('.//NavigationInfo')
                trans_time = float(nav_info.get('transitionTime', '1.5')) if nav_info is not None else 1.5

                for k, v in zip(keys, vals):
                    if v:  # BooleanSequencer outputs true -> bind event
                        t = float(k) * cycle
                        events.append((t, vp_name, vp_el, trans_time))

            if not events:
                continue

            # Sort chronological shot transitions
            events.sort(key=lambda e: e[0])

            # Ensure event at t=0
            if events[0][0] > 0.0:
                first_vp = scope.root.find('.//Viewpoint')
                first_name = first_vp.get('DEF') if first_vp is not None else events[0][1]
                events.insert(0, (0.0, first_name, first_vp or events[0][2], 0.0))

            # Sample camera pose for each shot
            times = []
            pos_samples = []
            rot_samples = []

            for idx, (t, vp_name, vp_el, trans_time) in enumerate(events):
                # Resolve world transform of the target viewpoint
                vp_node_idx = ctx.def_to_node_idx.get(scope.prefix + vp_name) or ctx.def_to_node_idx.get(vp_name)
                if vp_node_idx is not None and vp_node_idx < len(world_mats):
                    wm = world_mats[vp_node_idx]
                    t_vec = wm[:3, 3].tolist()
                    # Extract rotation matrix to quaternion
                    R = wm[:3, :3]
                    # Normalize rotation columns to prevent scale distortion
                    for c in range(3):
                        n = np.linalg.norm(R[:, c])
                        if n > 1e-6: R[:, c] /= n
                    q_w = math.sqrt(max(0.0, 1.0 + R[0,0] + R[1,1] + R[2,2])) / 2.0
                    q_x = (R[2,1] - R[1,2]) / (4.0 * q_w) if q_w > 1e-4 else 0.0
                    q_y = (R[0,2] - R[2,0]) / (4.0 * q_w) if q_w > 1e-4 else 0.0
                    q_z = (R[1,0] - R[0,1]) / (4.0 * q_w) if q_w > 1e-4 else 1.0
                    r_vec = [float(q_x), float(q_y), float(q_z), float(q_w)]
                else:
                    # Fallback to local viewpoint attributes
                    t_vec = parse_array(vp_el.get('position', '0 0 10'))
                    r_vec = axis_angle_to_quat(*parse_array(vp_el.get('orientation', '0 0 1 0')))

                # Add keyframes: smoothly fly to the new view, then hold
                if idx > 0 and trans_time > 0.0:
                    t_fly = min(t + trans_time, cycle)
                    times.extend([t, t_fly])
                    pos_samples.extend([pos_samples[-1], t_vec])
                    rot_samples.extend([rot_samples[-1], r_vec])
                else:
                    times.append(t)
                    pos_samples.append(t_vec)
                    rot_samples.append(r_vec)

            # Ensure final hold at cycle end
            if times[-1] < cycle:
                times.append(cycle)
                pos_samples.append(pos_samples[-1])
                rot_samples.append(rot_samples[-1])

            # Ensure strictly increasing timestamps and shortest-path SLERP
            keys_clean, pos_clean = sanitize_animation_tracks(times, np.array(pos_samples, dtype=np.float32))
            _, rot_clean = sanitize_animation_tracks(times, np.array(rot_samples, dtype=np.float32))
            for k_i in range(1, len(rot_clean)):
                if np.dot(rot_clean[k_i - 1], rot_clean[k_i]) < 0.0:
                    rot_clean[k_i] = -rot_clean[k_i]

            acc_t = add_accessor(gltf, bin_blob, keys_clean, SCALAR, FLOAT, target=None, add_min_max=True)
            acc_p = add_accessor(gltf, bin_blob, pos_clean, VEC3, FLOAT, target=None)
            acc_r = add_accessor(gltf, bin_blob, rot_clean, VEC4, FLOAT, target=None)

            # Attach camera channels directly to the master animation
            anim_name = f"Anim_{scope.prefix}{ts_def}"
            anim = next((a for a in gltf.animations if a.name == anim_name), None)
            if anim is None:
                anim = Animation(name=anim_name, samplers=[], channels=[])
                anim.extras = {"duration": cycle}
                gltf.animations.append(anim)

            s_p = len(anim.samplers)
            anim.samplers.append(AnimationSampler(input=acc_t, output=acc_p, interpolation="LINEAR"))
            anim.channels.append(AnimationChannel(sampler=s_p, target=AnimationChannelTarget(node=director_node_idx, path="translation")))

            s_r = len(anim.samplers)
            anim.samplers.append(AnimationSampler(input=acc_t, output=acc_r, interpolation="LINEAR"))
            anim.channels.append(AnimationChannel(sampler=s_r, target=AnimationChannelTarget(node=director_node_idx, path="rotation")))
            print(f"  INFO: Synthesized Director Camera track for master clock '{ts_def}' ({len(events)} camera cuts)")

class HeaderPreservingRedirectHandler(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        new_req = super().redirect_request(req, fp, code, msg, headers, newurl)
        if new_req is not None:
            for k, v in req.headers.items():
                new_req.add_header(k, v)
        return new_req

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
        HeaderPreservingRedirectHandler(),
        urllib.request.HTTPSHandler(context=ctx)
    )
    req = urllib.request.Request(target, headers=BROWSER_HEADERS)
    with opener.open(req, timeout=timeout) as r:
        return r.read()

LOCAL_MIRROR_ROOTS = [p for p in os.environ.get('X3D_LOCAL_ROOTS', '').split(os.pathsep) if p]
X3D_ALT_ENCODINGS = {'.x3dv', '.wrl', '.x3dvz', '.wrz', '.x3dj', '.json', '.x3db', '.x3dz'}
X3D_UNSUPPORTED_EXTS = {'.x3dv', '.wrl', '.x3dvz', '.wrz', '.x3dj', '.json', '.x3db', '.gltf', '.glb'}

def _is_remote(s):
    return re.match(r'https?://', s, re.I) is not None

def _is_x3d_xml(ref):
    return ref.split('?')[0].lower().endswith('.x3d')

def _x3d_variants(ref):
    path, sep, query = ref.partition('?')
    stem, ext = os.path.splitext(path)
    if ext.lower() in X3D_ALT_ENCODINGS:
        return [stem + '.x3d' + sep + query, ref]
    return [ref]

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
        data = _fetch_remote_bytes(target, timeout=15)
    else:
        with open(target, 'rb') as f:
            data = f.read()
    if data[:2] == b'\x1f\x8b':
        data = gzip.decompress(data)
    return data

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
        if x not in seen:
            seen.add(x)
            out.append(x)
    return out

def _url_candidates(urls, base, prefer_x3d=True):
    local, remote, skipped = [], [], []
    for url in urls:
        file_part, _, frag = url.partition('#')
        file_part = file_part.strip()
        if not file_part:
            skipped.append((url, 'no file part'))
            continue
        resolved = _resolve_ref(base, file_part)
        for p in _local_paths_for(resolved, base):
            for v in (_x3d_variants(p) if prefer_x3d else [p]):
                local.append((v, frag))
        if _is_remote(resolved):
            for v in (_x3d_variants(resolved) if prefer_x3d else [resolved]):
                remote.append((v, frag))
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
            tried.append((target, f'unsupported format {ext}'))
            continue
        if origin == 'local' and not os.path.isfile(target):
            tried.append((target, 'not found locally'))
            continue
        if target in load_stack:
            tried.append((target, 'cyclic Inline'))
            continue
        try:
            raw_bytes = _read_x3d_bytes(target)
            try:
                ext_root = ET.fromstring(raw_bytes)
            except ET.ParseError:
                text = raw_bytes.decode('utf-8', errors='replace')
                text = re.sub(r'<\?xml[^>]+encoding=["\'][^"\']+["\'][^>]*\?>', '<?xml version="1.0"?>', text, count=1)
                ext_root = ET.fromstring(text.encode('utf-8'))
        except Exception as e:
            tried.append((target, f'{origin}: {type(e).__name__}: {e}'))
            continue
        strip_namespaces(ext_root)
        yield {'root': ext_root, 'target': target, 'frag': frag, 'origin': origin}

def _absolutize_urls(elem, base):
    for el in elem.iter():
        if el.tag in ('Inline', 'InlineGeometry', 'ImageTexture', 'ExternProtoDeclare') and el.get('url'):
            out = []
            for u in parse_mfstring(el.get('url')):
                if u.startswith('data:'):
                    out.append(u)
                    continue
                fp, hash_, frag = u.partition('#')
                out.append(_resolve_ref(base, fp) + (hash_ + frag if hash_ else ''))
            el.set('url', ' '.join(f'"{u}"' for u in out))

def _load_extern_proto(extern_el, owner_scope, ctx):
    cache = ctx.extern_proto_cache
    key = id(extern_el)
    if key in cache: return cache[key]
    name = extern_el.get('name')
    urls = parse_mfstring(extern_el.get('url', ''))
    tried, found = [], None
    for res in _iter_x3d_docs(urls, owner_scope.base, ctx.load_stack, tried):
        decls = [d for d in res['root'].iter('ProtoDeclare') if d.get('name')]
        decl = next((d for d in decls if d.get('name') == res['frag']), None) if res['frag'] else None
        if decl is None: decl = next((d for d in decls if d.get('name') == name), None)
        if decl is None and decls: decl = decls[0]
        if decl is None:
            tried.append((res['target'], 'no ProtoDeclare in file'))
            continue
        found = (decl, _base_of(res['target']))
        print(f"  EXTERNPROTO {name:<24} LOADED   ({res['origin']}) -> {res['target']}")
        break
    if found is None:
        print(f"  EXTERNPROTO {name:<24} FAILED   " + '; '.join(f"{u!r}: {why}" for u, why in tried))
    cache[key] = found
    return found

# X3D sensor note: CylinderSensor and PlaneSensor preserve their full X3D
# parameters and expose selectable target meshes through KHR_node_selectability
# / KHR_interactivity. KHR_interactivity has no standardized pointer-drag delta
# or keyboard text-entry event, so continuous drag and StringSensor editing
# require a viewer-side input adapter. Script source is preserved; only simple
# initialize() literal assignments routed to node TRS are translated.
#
# ---------------------------------------------------------------------------
# Low-Level Conversion Helpers
# ---------------------------------------------------------------------------

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

def add_accessor(gltf, bin_blob, data, gltf_type, comp_type, target=None, add_min_max=False):
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

# ---------------------------------------------------------------------------
# Matrix Operations & World Transform Resolution
# ---------------------------------------------------------------------------

def compute_world_matrices(gltf_nodes):
    world_mats = [np.eye(4, dtype=np.float32) for _ in gltf_nodes]

    def get_local_matrix(node):
        if getattr(node, 'matrix', None):
            return np.array(node.matrix, dtype=np.float32).reshape((4, 4), order='F')

        t = node.translation or [0.0, 0.0, 0.0]
        r = node.rotation or [0.0, 0.0, 0.0, 1.0]
        s = node.scale or [1.0, 1.0, 1.0]

        mat = np.eye(4, dtype=np.float32)
        qx, qy, qz, qw = r
        r_mat = np.array([
            [1.0 - 2.0*(qy*qy + qz*qz), 2.0*(qx*qy - qz*qw),       2.0*(qx*qz + qy*qw)],
            [2.0*(qx*qy + qz*qw),       1.0 - 2.0*(qx*qx + qz*qz), 2.0*(qy*qz - qx*qw)],
            [2.0*(qx*qz - qy*qw),       2.0*(qy*qz + qx*qw),       1.0 - 2.0*(qx*qx + qy*qy)]
        ], dtype=np.float32)

        mat[0:3, 0:3] = r_mat * np.asarray(s, dtype=np.float32)
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
        dfs(0, np.eye(4, dtype=np.float32))
    return world_mats

def _node_local_matrix(node):
    t = np.asarray(node.translation or [0.0, 0.0, 0.0], dtype=np.float64)
    q = np.asarray(node.rotation or [0.0, 0.0, 0.0, 1.0], dtype=np.float64)
    sc = np.asarray(node.scale or [1.0, 1.0, 1.0], dtype=np.float64)
    x, y, z, w = q
    R = np.array([
        [1.0 - 2.0*(y*y + z*z), 2.0*(x*y - z*w),       2.0*(x*z + y*w)],
        [2.0*(x*y + z*w),       1.0 - 2.0*(x*x + z*z), 2.0*(y*z - x*w)],
        [2.0*(x*z - y*w),       2.0*(y*z + x*w),       1.0 - 2.0*(x*x + y*y)]
    ], dtype=np.float64)
    M = np.eye(4, dtype=np.float64)
    M[:3, :3] = R @ np.diag(sc)
    M[:3, 3] = t
    return M

def _world_matrices(gltf):
    worlds = [None] * len(gltf.nodes)
    def visit(idx, parent):
        if idx < 0 or idx >= len(gltf.nodes): return
        if worlds[idx] is not None: return
        world = parent @ _node_local_matrix(gltf.nodes[idx])
        worlds[idx] = world
        for child in (gltf.nodes[idx].children or []):
            visit(child, world)
    roots = gltf.scenes[0].nodes if gltf.scenes else [0]
    for root_idx in roots or [0]: visit(root_idx, np.eye(4))
    for idx in range(len(gltf.nodes)):
        if worlds[idx] is None: visit(idx, np.eye(4))
    return worlds

# ---------------------------------------------------------------------------
# Metadata Parsing
# ---------------------------------------------------------------------------

def parse_metadata_node(meta_el):
    tag = meta_el.tag
    name = meta_el.get('name', tag)
    if tag == 'MetadataString':
        vals = parse_mfstring(meta_el.get('value', ''))
        return name, vals[0] if len(vals) == 1 else (vals if vals else "")
    elif tag in ('MetadataInteger', 'MetadataFloat', 'MetadataDouble'):
        vals = parse_array(meta_el.get('value', ''))
        return name, vals[0] if len(vals) == 1 else vals
    elif tag == 'MetadataBoolean':
        vals = [v.lower() in ('true', '1') for v in meta_el.get('value', '').split()]
        return name, vals[0] if len(vals) == 1 else vals
    elif tag == 'MetadataSet':
        d = {}
        for child in meta_el:
            if child.tag.startswith('Metadata'):
                k, v = parse_metadata_node(child)
                d[k] = v
        return name, d
    return name, meta_el.attrib

def generate_geometry_uvs(positions):
    """Generate stable UVs when an X3D mesh has no usable per-vertex UV map.

    Vertically elongated meshes use a Y-axis cylindrical projection, which is
    a practical fallback for humanoids.  Near-spherical meshes use longitude /
    latitude coordinates.  The returned UVs are in X3D's V-up convention; the
    normal export path performs the single V flip.
    """
    pts = np.asarray(positions, dtype=np.float32).reshape(-1, 3)
    if len(pts) == 0:
        return np.empty((0, 2), dtype=np.float32)
    lo = pts.min(axis=0); hi = pts.max(axis=0)
    extent = np.maximum(hi - lo, 1.0e-8)
    center = (lo + hi) * 0.5
    horizontal = math.hypot(float(extent[0]), float(extent[2]))
    if float(extent[1]) >= 1.35 * max(float(extent[0]), float(extent[2])) and horizontal > 1.0e-7:
        u = (np.arctan2(pts[:, 2] - center[2], pts[:, 0] - center[0]) / (2.0 * np.pi) + 0.5)
        v = (pts[:, 1] - lo[1]) / extent[1]
    else:
        rel = pts - center
        radius = np.linalg.norm(rel, axis=1)
        safe = np.maximum(radius, 1.0e-8)
        u = np.arctan2(rel[:, 2], rel[:, 0]) / (2.0 * np.pi) + 0.5
        y = np.clip(rel[:, 1] / safe, -1.0, 1.0)
        v = 1.0 - np.arccos(y) / np.pi
        # Degenerate / nearly planar meshes are better served by XY projection.
        if float(extent[2]) < 1.0e-6:
            u = (pts[:, 0] - lo[0]) / extent[0]
            v = (pts[:, 1] - lo[1]) / extent[1]
    return np.column_stack((u, v)).astype(np.float32)


# ---------------------------------------------------------------------------
# Materials, Textures, and Shaders
# ---------------------------------------------------------------------------

def add_raw_image(gltf, bin_blob, img_bytes, mime="image/png"):
    off, length = append_to_buffer(bin_blob, img_bytes)
    gltf.bufferViews.append(BufferView(buffer=0, byteOffset=off, byteLength=length))
    gltf.images.append(Image(bufferView=len(gltf.bufferViews)-1, mimeType=mime))
    # Use mipmaps for stable sampling of fine, animated contour patterns.  The
    # glTF runtime generates the mip chain from the embedded base image.
    if not getattr(gltf, "samplers", None):
        gltf.samplers.append(Sampler(magFilter=9729, minFilter=9987,
                                     wrapS=10497, wrapT=10497))
    gltf.textures.append(Texture(source=len(gltf.images)-1, sampler=0))
    return len(gltf.textures) - 1

def embed_texture(url_str, base_path, gltf, bin_blob):
    urls = [u.strip() for u in parse_mfstring(url_str) if u.strip()]
    data = None
    mime = "image/jpeg"

    for u in urls:
        if u.startswith('data:image'):
            try:
                head, b64data = u.split(',', 1)
                data = base64.b64decode(b64data)
                mime = head.split(';')[0].replace('data:', '')
                break
            except Exception: continue
        resolved = _resolve_ref(base_path, u.split('#')[0])
        for local in _local_paths_for(resolved, base_path):
            local = local.split('?')[0] if not os.path.isfile(local) else local
            if os.path.isfile(local):
                with open(local, 'rb') as f: data = f.read()
                mime = mimetypes.guess_type(local)[0] or "image/jpeg"
                print(f"  TEXTURE: embedded local image {os.path.basename(local)} ({len(data):,} bytes, {mime})")
                break
        if data: break

    if not data:
        for u in urls:
            resolved = _resolve_ref(base_path, u.split('#')[0])
            if not _is_remote(resolved): continue
            try:
                data = _fetch_remote_bytes(resolved, timeout=10)
                mime = mimetypes.guess_type(resolved)[0] or "image/jpeg"
                break
            except Exception: pass

    if not data:
        print(f"  WARNING: ImageTexture resource not found; using 1x1 placeholder: {url_str!r}")
        data = base64.b64decode("iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAQAAAC1HAwCAAAAC0lEQVR42mP8/x8AAwMCAO+ip1sAAAAASUVORK5CYII=")
        mime = "image/png"

    return add_raw_image(gltf, bin_blob, data, mime)

# When True, TextureTransform -> KHR_texture_transform is computed in glTF's
# V-down UV space (this converter flips V on export), so rotation/centre pivot
# exactly as in X3D.  Set False to restore the older merged4 formula.
TT_V_FLIP_CORRECT = True

# id(TextureTransform element) -> [material indices that carry its transform]
_TT_MATERIALS = {}

def _x3d_tt_to_khr(trans, scale, rot, center):
    """X3D TextureTransform fields -> (offset, scale, rotation) for KHR_texture_transform.

    X3D (V up):   p' = R*S*(p - C) + C + T
    glTF (V down, v_g = 1 - v):  uv' = T_khr + R_khr*S*uv  with
    R_khr = [[cos, sin], [-sin, cos]]; rotation and scale carry over unchanged
    and only the offset differs.
    """
    tx, ty = float(trans[0]), float(trans[1])
    sx, sy = float(scale[0]), float(scale[1])
    cx, cy = float(center[0]), float(center[1])
    c, s = math.cos(rot), math.sin(rot)
    if not TT_V_FLIP_CORRECT:
        ox = -sx * (c * cx - s * cy) + cx + tx
        oy = -sy * (s * cx + c * cy) + cy + ty
        return [float(ox), float(oy)], [sx, sy], float(rot)
    bx = cx + tx - (c * sx * cx - s * sy * cy)
    by = cy + ty - (s * sx * cx + c * sy * cy)
    ox = bx - s * sy
    oy = 1.0 - by - c * sy
    return [float(ox), float(oy)], [sx, sy], float(rot)

def resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path):
    if app_node is None: return None
    if app_node.get('USE'): app_node = def_map.get(app_node.get('USE'), app_node)

    mat_node = app_node.find('.//Material')
    img_node = app_node.find('.//ImageTexture')
    tt_node = app_node.find('.//TextureTransform')

    if mat_node is not None and mat_node.get('USE'): mat_node = def_map.get(mat_node.get('USE'), mat_node)
    if img_node is not None and img_node.get('USE'): img_node = def_map.get(img_node.get('USE'), img_node)
    if tt_node is not None and tt_node.get('USE'): tt_node = def_map.get(tt_node.get('USE'), tt_node)
    if mat_node is None and img_node is None: return None

    def rgb(attr, default): return parse_array(mat_node.get(attr, '') if mat_node is not None else '', default=list(default))
    diffuse = rgb('diffuseColor', [0.8, 0.8, 0.8])
    emissive = rgb('emissiveColor', [0.0, 0.0, 0.0])
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

    if any(c > 0.0 for c in emissive[:3]):
        mat_dict["emissiveFactor"] = [max(0.0, min(1.0, c)) for c in emissive[:3]]

    if img_node is not None:
        tex_idx = embed_texture(img_node.get('url', ''), base_path, gltf, bin_blob)
        if tex_idx is not None:
            tex_obj = {"index": tex_idx}
            if tt_node is not None:
                trans = parse_array(tt_node.get('translation', '0 0'), default=[0.0, 0.0])
                scale = parse_array(tt_node.get('scale', '1 1'), default=[1.0, 1.0])
                rot = float(tt_node.get('rotation', '0'))
                center = parse_array(tt_node.get('center', '0 0'), default=[0.0, 0.0])
                
                offset, k_scale, k_rot = _x3d_tt_to_khr(trans, scale, rot, center)
                tex_obj["extensions"] = {
                    "KHR_texture_transform": {
                        "offset": offset,
                        "scale": k_scale,
                        "rotation": k_rot
                    }
                }
                _TT_MATERIALS.setdefault(id(tt_node), []).append(len(mat_list))
            mat_dict["pbrMetallicRoughness"]["baseColorTexture"] = tex_obj
            mat_dict["pbrMetallicRoughness"]["baseColorFactor"] = [1.0, 1.0, 1.0, round(alpha, 5)]

    if transparency > 0.01: mat_dict["alphaMode"] = "BLEND"
    elif transparency > 0:  mat_dict["alphaMode"] = "MASK"; mat_dict["alphaCutoff"] = 0.5

    mat_list.append(mat_dict)
    return len(mat_list) - 1

# ---------------------------------------------------------------------------
# X3D Text Rasterization
# ---------------------------------------------------------------------------

TEXT_SCALE = 1.0

def process_text_primitives(text_node, app_node, gltf, bin_blob, def_map, mat_list, base_path):
    if not HAS_PIL: return None
    if text_node.get('USE'):
        text_node = def_map.get(text_node.get('USE'), text_node)
    lines = parse_mfstring(text_node.get('string', ''))
    if not lines: return None

    fs_node = text_node.find('.//FontStyle')
    size, family, justify = 1.0, "SERIF", ["BEGIN", "FIRST"]
    if fs_node is not None:
        if fs_node.get('USE'): fs_node = def_map.get(fs_node.get('USE'), fs_node)
        size = float(fs_node.get('size', 1.0))
        family_arr = parse_mfstring(fs_node.get('family', '"SERIF"'))
        if family_arr: family = family_arr[0]
        justify_arr = parse_mfstring(fs_node.get('justify', '"BEGIN" "FIRST"'))
        if justify_arr: justify = justify_arr

    font_size_px = max(48, min(512, int(size * 128 * 2)))
    font = None
    is_sans = "SANS" in family.upper()
    fonts_to_try = (
        ["DejaVuSans.ttf", "LiberationSans-Regular.ttf", "FreeSans.ttf", "arial.ttf", "Arial.ttf", "Helvetica.ttf"]
        if is_sans else
        ["DejaVuSerif.ttf", "LiberationSerif-Regular.ttf", "FreeSerif.ttf", "times.ttf", "Times.ttf", "Times New Roman.ttf", "DejaVuSans.ttf"]
    )
    for fn in fonts_to_try:
        try:
            font = ImageFont.truetype(fn, font_size_px)
            break
        except Exception:
            pass
    if not font:
        try:
            font = ImageFont.load_default(size=font_size_px)
        except TypeError:
            font = ImageFont.load_default()

    dummy_img = PILImage.new("RGBA", (1, 1), (0, 0, 0, 0))
    d = ImageDraw.Draw(dummy_img)
    max_w, total_h, line_heights = 0, 0, []
    for line in lines:
        try:
            bbox = d.textbbox((0, 0), line, font=font)
        except Exception:
            bbox = (0, 0, len(line) * font_size_px * 0.6, font_size_px)
        w = bbox[2] - bbox[0]
        h = bbox[3] - bbox[1] + (font_size_px * 0.2)
        max_w = max(max_w, w)
        line_heights.append(h)
        total_h += h

    width, height = max(int(max_w), 1), max(int(total_h), 1)
    img = PILImage.new("RGBA", (width, height), (0, 0, 0, 0))
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
    quad_h = size * len(lines) * TEXT_SCALE
    quad_w = quad_h * aspect

    max_extent = float(text_node.get('maxExtent', '0'))
    if max_extent > 0.0:
        quad_w = max_extent * TEXT_SCALE

    jx = justify[0].upper() if len(justify) > 0 else "BEGIN"
    if jx == "MIDDLE": x0, x1 = -quad_w / 2.0, quad_w / 2.0
    elif jx == "END":  x0, x1 = -quad_w, 0.0
    else:              x0, x1 = 0.0, quad_w

    jy = justify[1].upper() if len(justify) > 1 else "FIRST"
    if jy == "MIDDLE": y0, y1 = -quad_h / 2.0, quad_h / 2.0
    else:              y0, y1 = -quad_h, 0.0

    pos = np.array([[x0, y0, 0], [x1, y0, 0], [x1, y1, 0], [x0, y1, 0]], dtype=np.float32)
    norms = np.array([[0, 0, 1]] * 4, dtype=np.float32)
    uvs = np.array([[0, 1], [1, 1], [1, 0], [0, 0]], dtype=np.float32)
    indices = np.array([0, 1, 2, 0, 2, 3], dtype=np.uint16)

    prim_attrs = {
        "POSITION": add_accessor(gltf, bin_blob, pos, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True),
        "NORMAL":   add_accessor(gltf, bin_blob, norms, VEC3, FLOAT, target=ARRAY_BUFFER),
        "TEXCOORD_0": add_accessor(gltf, bin_blob, uvs, VEC2, FLOAT, target=ARRAY_BUFFER)
    }

    base_mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
    if base_mat_idx is not None and 0 <= base_mat_idx < len(mat_list):
        text_mat = copy.deepcopy(mat_list[base_mat_idx])
        text_mat["name"] = text_mat.get("name", "Mat") + "_Text"
    else:
        text_mat = {
            "name": "TextMat",
            "pbrMetallicRoughness": {
                "baseColorFactor": [1.0, 1.0, 1.0, 1.0],
                "metallicFactor": 0.0,
                "roughnessFactor": 1.0
            }
        }

    text_mat["doubleSided"] = True
    text_mat["alphaMode"] = "BLEND"
    pbr = text_mat.setdefault("pbrMetallicRoughness", {})
    pbr["baseColorTexture"] = {"index": tex_idx}

    bcf = pbr.get("baseColorFactor", [1.0, 1.0, 1.0, 1.0])
    if max(bcf[:3]) < 0.15:
        em = text_mat.get("emissiveFactor", [1.0, 1.0, 1.0])
        if max(em[:3]) > 0.1:
            pbr["baseColorFactor"] = [em[0], em[1], em[2], bcf[3] if len(bcf) > 3 else 1.0]
        else:
            pbr["baseColorFactor"] = [1.0, 1.0, 1.0, bcf[3] if len(bcf) > 3 else 1.0]

    text_color = pbr.get("baseColorFactor", [1.0, 1.0, 1.0, 1.0])[:3]
    if "emissiveFactor" not in text_mat or max(text_mat["emissiveFactor"]) < 0.01:
        text_mat["emissiveFactor"] = [float(c) for c in text_color]

    mat_list.append(text_mat)
    mat_idx = len(mat_list) - 1

    gltf.meshes.append(Mesh(primitives=[{
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, UNSIGNED_SHORT, target=ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "attributes": prim_attrs,
        "material": mat_idx
    }]))
    return len(gltf.meshes) - 1

# ---------------------------------------------------------------------------
# Mesh Primitives (Box, Rectangle2D, Cylinder, Cone, Sphere)
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

def rectangle2d_to_ifs(rect_node):
    raw_size = parse_array(rect_node.get('size', '2 2'), default=[2.0, 2.0])
    sx = float(raw_size[0]) if len(raw_size) > 0 else 2.0
    sy = float(raw_size[1]) if len(raw_size) > 1 else 2.0
    hx, hy = abs(sx) / 2.0, abs(sy) / 2.0
    p = [[-hx, -hy, 0.0], [hx, -hy, 0.0], [hx, hy, 0.0], [-hx, hy, 0.0]]
    u = [[0.0, 0.0], [1.0, 0.0], [1.0, 1.0], [0.0, 1.0]]
    n = [[0.0, 0.0, 1.0]] * 4
    solid = rect_node.get('solid', 'true').strip().lower()
    ifs = ET.Element('IndexedFaceSet', {'coordIndex': '0 1 2 3 -1', 'solid': solid, 'ccw': 'true'})
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join(f"{v[0]} {v[1]} {v[2]}" for v in p)})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join(f"{v[0]} {v[1]}" for v in u)})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join(f"{v[0]} {v[1]} {v[2]}" for v in n)})
    return ifs

def cylinder_to_ifs(cyl_node):
    height = float(cyl_node.get('height', '2'))
    radius = float(cyl_node.get('radius', '1'))
    bottom = cyl_node.get('bottom', 'true').strip().lower() not in ('false', '0')
    top = cyl_node.get('top', 'true').strip().lower() not in ('false', '0')
    side = cyl_node.get('side', 'true').strip().lower() not in ('false', '0')
    solid = cyl_node.get('solid', 'true').strip().lower()

    seg = 32
    points, normals, tex_coords, coord_index = [], [], [], []
    half_h = height / 2.0

    if side:
        base_v = len(points)
        for i in range(seg + 1):
            u = i / seg
            th = 2.0 * math.pi * u
            cos_th, sin_th = math.cos(th), math.sin(th)
            x, z = radius * cos_th, radius * sin_th
            points.append([x, half_h, z])
            normals.append([cos_th, 0.0, sin_th])
            tex_coords.append([u, 1.0])
            points.append([x, -half_h, z])
            normals.append([cos_th, 0.0, sin_th])
            tex_coords.append([u, 0.0])

        for i in range(seg):
            v0 = base_v + i * 2
            v1 = base_v + i * 2 + 1
            v2 = base_v + (i + 1) * 2 + 1
            v3 = base_v + (i + 1) * 2
            coord_index.extend([v0, v1, v2, v3, -1])

    if top:
        top_center = len(points)
        points.append([0.0, half_h, 0.0])
        normals.append([0.0, 1.0, 0.0])
        tex_coords.append([0.5, 0.5])
        base_top = len(points)
        for i in range(seg):
            th = 2.0 * math.pi * (i / seg)
            cos_th, sin_th = math.cos(th), math.sin(th)
            points.append([radius * cos_th, half_h, radius * sin_th])
            normals.append([0.0, 1.0, 0.0])
            tex_coords.append([0.5 + 0.5 * cos_th, 0.5 - 0.5 * sin_th])
        for i in range(seg):
            coord_index.extend([top_center, base_top + i, base_top + (i + 1) % seg, -1])

    if bottom:
        bot_center = len(points)
        points.append([0.0, -half_h, 0.0])
        normals.append([0.0, -1.0, 0.0])
        tex_coords.append([0.5, 0.5])
        base_bot = len(points)
        for i in range(seg):
            th = 2.0 * math.pi * (i / seg)
            cos_th, sin_th = math.cos(th), math.sin(th)
            points.append([radius * cos_th, -half_h, radius * sin_th])
            normals.append([0.0, -1.0, 0.0])
            tex_coords.append([0.5 + 0.5 * cos_th, 0.5 + 0.5 * sin_th])
        for i in range(seg):
            coord_index.extend([bot_center, base_bot + (i + 1) % seg, base_bot + i, -1])

    ifs = ET.Element('IndexedFaceSet', {
        'coordIndex': ' '.join(str(idx) for idx in coord_index),
        'solid': solid, 'ccw': 'true'
    })
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join(f"{p[0]} {p[1]} {p[2]}" for p in points)})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join(f"{n[0]} {n[1]} {n[2]}" for n in normals)})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join(f"{t[0]} {t[1]}" for t in tex_coords)})
    return ifs

def cone_to_ifs(cone_node):
    height = float(cone_node.get('height', '2'))
    bottom_radius = float(cone_node.get('bottomRadius', '1'))
    bottom = cone_node.get('bottom', 'true').strip().lower() not in ('false', '0')
    side = cone_node.get('side', 'true').strip().lower() not in ('false', '0')
    solid = cone_node.get('solid', 'true').strip().lower()

    seg = 32
    points, normals, tex_coords, coord_index = [], [], [], []
    half_h = height / 2.0
    slant = math.sqrt(bottom_radius * bottom_radius + height * height)
    ny = bottom_radius / slant if slant > 0 else 0.0
    nr = height / slant if slant > 0 else 1.0

    if side:
        base_v = len(points)
        for i in range(seg + 1):
            u = i / seg
            th = 2.0 * math.pi * u
            cos_th, sin_th = math.cos(th), math.sin(th)
            points.append([0.0, half_h, 0.0])
            normals.append([nr * cos_th, ny, nr * sin_th])
            tex_coords.append([u, 1.0])
            points.append([bottom_radius * cos_th, -half_h, bottom_radius * sin_th])
            normals.append([nr * cos_th, ny, nr * sin_th])
            tex_coords.append([u, 0.0])

        for i in range(seg):
            apex = base_v + i * 2
            v_curr = base_v + i * 2 + 1
            v_next = base_v + (i + 1) * 2 + 1
            coord_index.extend([apex, v_curr, v_next, -1])

    if bottom:
        bot_center = len(points)
        points.append([0.0, -half_h, 0.0])
        normals.append([0.0, -1.0, 0.0])
        tex_coords.append([0.5, 0.5])
        base_bot = len(points)
        for i in range(seg):
            th = 2.0 * math.pi * (i / seg)
            cos_th, sin_th = math.cos(th), math.sin(th)
            points.append([bottom_radius * cos_th, -half_h, bottom_radius * sin_th])
            normals.append([0.0, -1.0, 0.0])
            tex_coords.append([0.5 + 0.5 * cos_th, 0.5 + 0.5 * sin_th])
        for i in range(seg):
            coord_index.extend([bot_center, base_bot + (i + 1) % seg, base_bot + i, -1])

    ifs = ET.Element('IndexedFaceSet', {
        'coordIndex': ' '.join(str(idx) for idx in coord_index),
        'solid': solid, 'ccw': 'true'
    })
    ET.SubElement(ifs, 'Coordinate', {'point': ' '.join(f"{p[0]} {p[1]} {p[2]}" for p in points)})
    ET.SubElement(ifs, 'Normal', {'vector': ' '.join(f"{n[0]} {n[1]} {n[2]}" for n in normals)})
    ET.SubElement(ifs, 'TextureCoordinate', {'point': ' '.join(f"{t[0]} {t[1]}" for t in tex_coords)})
    return ifs


def extrusion_to_ifs(extrusion_node, segments=32):
    """Generate an X3D Extrusion as an IndexedFaceSet.

    The sweep uses a stable local frame at each spine point, interpolates
    crossSection/scale/orientation per spine station, and honors beginCap,
    endCap, ccw and solid. Degenerate stations are skipped safely.
    """
    cross = parse_array(extrusion_node.get('crossSection', '1 1 1 -1 -1 -1 -1 1 1 1'))
    spine = parse_array(extrusion_node.get('spine', '0 0 0 0 1 0'))
    if len(cross) < 6 or len(cross) % 2 or len(spine) < 6 or len(spine) % 3:
        return None
    section = np.asarray(cross, dtype=np.float64).reshape(-1, 2)
    path = np.asarray(spine, dtype=np.float64).reshape(-1, 3)
    # Remove duplicate closing cross-section point; close it explicitly below.
    closed = np.linalg.norm(section[0] - section[-1]) < 1e-8
    if closed:
        section = section[:-1]
    if len(section) < 3 or len(path) < 2:
        return None

    raw_scale = parse_array(extrusion_node.get('scale', ''), default=[1.0, 1.0])
    scales = np.asarray(raw_scale, dtype=np.float64).reshape(-1, 2)
    raw_orient = parse_array(extrusion_node.get('orientation', ''), default=[0, 0, 1, 0])
    orientations = np.asarray(raw_orient, dtype=np.float64).reshape(-1, 4)

    def station_value(arr, i, default):
        return arr[min(i, len(arr)-1)] if len(arr) else default

    verts = []
    for i, center in enumerate(path):
        if i == 0:
            tangent = path[1] - path[0]
        elif i == len(path)-1:
            tangent = path[-1] - path[-2]
        else:
            tangent = path[i+1] - path[i-1]
        tn = np.linalg.norm(tangent)
        if tn < 1e-10:
            tangent = np.array([0.0, 1.0, 0.0])
        else:
            tangent /= tn
        # Local extrusion frame: local +Y follows spine; X is kept as close
        # as possible to world +X, with a fallback for near-parallel vectors.
        ref = np.array([1.0, 0.0, 0.0])
        if abs(np.dot(ref, tangent)) > 0.95:
            ref = np.array([0.0, 0.0, 1.0])
        axis_x = ref - np.dot(ref, tangent) * tangent
        axis_x /= max(np.linalg.norm(axis_x), 1e-12)
        axis_z = np.cross(axis_x, tangent)
        axis_z /= max(np.linalg.norm(axis_z), 1e-12)
        frame = np.column_stack((axis_x, tangent, axis_z))
        sc = station_value(scales, i, np.array([1.0, 1.0]))
        ori = station_value(orientations, i, np.array([0.0, 0.0, 1.0, 0.0]))
        rot = axis_angle_to_quat(*ori)
        x, y, z, w = rot
        R = np.array([
            [1-2*(y*y+z*z), 2*(x*y-z*w), 2*(x*z+y*w)],
            [2*(x*y+z*w), 1-2*(x*x+z*z), 2*(y*z-x*w)],
            [2*(x*z-y*w), 2*(y*z+x*w), 1-2*(x*x+y*y)]
        ], dtype=np.float64)
        local = np.column_stack((section[:, 0] * sc[0], np.zeros(len(section)),
                                 section[:, 1] * sc[1]))
        ring = (frame @ (R @ local.T)).T + center
        verts.extend(ring.tolist())

    nsec, nspine = len(section), len(path)
    faces = []
    edge_count = nsec if closed else nsec - 1
    for j in range(nspine - 1):
        for k in range(edge_count):
            kn = (k + 1) % nsec
            a = j*nsec + k
            b = j*nsec + kn
            c = (j+1)*nsec + kn
            d = (j+1)*nsec + k
            faces.append([a, b, c, d])
    if extrusion_node.get('beginCap', 'true').lower() not in ('false', '0'):
        faces.append(list(reversed(range(nsec))))
    if extrusion_node.get('endCap', 'true').lower() not in ('false', '0'):
        faces.append([(nspine-1)*nsec+k for k in range(nsec)])

    coord_idx = ' '.join(' '.join(map(str, f)) + ' -1' for f in faces)
    if extrusion_node.get('ccw', 'true').lower() in ('false', '0'):
        faces = [list(reversed(f)) for f in faces]
        coord_idx = ' '.join(' '.join(map(str, f)) + ' -1' for f in faces)
    ifs = ET.Element('IndexedFaceSet', {
        'coordIndex': coord_idx,
        'solid': extrusion_node.get('solid', 'true'),
        'ccw': 'true'
    })
    ET.SubElement(ifs, 'Coordinate', {
        'point': ' '.join(f'{v[0]:.9g} {v[1]:.9g} {v[2]:.9g}' for v in verts)
    })
    return ifs


def _x3d_script_metadata(script_node):
    """Preserve Script declarations and source; translation is intentionally conservative."""
    fields = []
    for field in script_node.findall('./field'):
        fields.append({
            'name': field.get('name'),
            'type': field.get('type'),
            'accessType': field.get('accessType'),
            'value': field.get('value')
        })
    urls = parse_mfstring(script_node.get('url', ''))
    inline_code = [u for u in urls if u.lstrip().startswith(('ecmascript:', 'javascript:'))]
    return {
        'directOutput': script_node.get('directOutput', 'false').lower() in ('true', '1'),
        'mustEvaluate': script_node.get('mustEvaluate', 'false').lower() in ('true', '1'),
        'fields': fields,
        'url': urls,
        'inlineSource': inline_code
    }


def _sensor_extras(tag, xml_node):
    """Serialize the X3D sensor's complete interaction contract for runtime adapters."""
    attrs = {k: v for k, v in xml_node.attrib.items() if k not in ('DEF', 'USE')}
    return {'x3d_' + tag[0].lower() + tag[1:]: attrs,
            'x3d_interaction': {
                'sensorType': tag,
                'runtimeInputRequired': True,
                'outputs': {
                    'CylinderSensor': ['rotation_changed', 'trackPoint_changed', 'isActive', 'isOver', 'offset_changed'],
                    'PlaneSensor': ['translation_changed', 'trackPoint_changed', 'isActive', 'isOver', 'offset_changed'],
                    'StringSensor': ['enteredText', 'finalText', 'isActive']
                }.get(tag, [])
            }}


def _resolve_child(node, tag, def_map):
    found = node.find('.//' + tag)
    if found is not None and found.get('USE'):
        found = def_map.get(found.get('USE'), found)
    return found

def _parse_color_rgba(color_node, def_map):
    """Read X3D Color (RGB) or ColorRGBA and return glTF-compatible RGBA."""
    if color_node is None:
        return None
    if color_node.get('USE'):
        color_node = def_map.get(color_node.get('USE'), color_node)
    if color_node is None:
        return None
    raw = parse_array(color_node.get('color', color_node.get('colorRGBA', '')))
    if not raw:
        return None
    channels = 4 if color_node.tag == 'ColorRGBA' else 3
    if len(raw) % channels:
        print(f"  WARNING: Ignoring malformed {color_node.tag} color array")
        return None
    values = np.asarray(raw, dtype=np.float32).reshape(-1, channels)
    if channels == 3:
        values = np.concatenate((values, np.ones((len(values), 1), dtype=np.float32)), axis=1)
    return np.clip(values, 0.0, 1.0)

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
            pos.append([radius * sp * math.cos(th), radius * cp, radius * sp * math.sin(th)])
            uv.append([u, 1.0 - v])
    for r in range(rings):
        for s in range(seg):
            a, b, c, d = r * seg + s, r * seg + (s + 1) % seg, (r + 1) * seg + (s + 1) % seg, (r + 1) * seg + s
            if r != 0: idx.extend([a, b, d])
            if r != rings - 1: idx.extend([b, c, d])

    positions = np.asarray(pos, dtype=np.float32)
    normals = positions / max(radius, 1e-12)
    uvs = np.asarray(uv, dtype=np.float32)
    indices = np.asarray(idx, dtype=np.uint32)
    idx_comp = UNSIGNED_SHORT if len(indices) and indices.max() < 65536 else UNSIGNED_INT
    if idx_comp == UNSIGNED_SHORT: indices = indices.astype(np.uint16)

    attrs = {
        "POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True),
        "NORMAL": add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, target=ARRAY_BUFFER),
        "TEXCOORD_0": add_accessor(gltf, bin_blob, uvs, VEC2, FLOAT, target=ARRAY_BUFFER),
    }
    mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
    prim = {
        "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp, target=ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "attributes": attrs,
        "mode": 4
    }
    if mat_idx is not None: prim["material"] = mat_idx
    return prim

# ---------------------------------------------------------------------------
# Integrated Mesh & Morph Target (HAnimDisplacer + CoordinateInterpolator)
# ---------------------------------------------------------------------------

def process_mesh_primitives(geom_nodes, gltf, bin_blob, def_map, mat_list, base_path, temp_skin_info,
                            current_displacers, ctx, mesh_to_mtd):
    primitives = []
    mtd_list = []
    mtd_list_initialized = False

    for node in geom_nodes:
        is_faceset = node.tag in ('IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet')
        is_line = node.tag in ('LineSet', 'IndexedLineSet')
        is_rect = node.tag == 'Rectangle2D'
        is_cyl = node.tag == 'Cylinder'
        is_cone = node.tag == 'Cone'
        is_extrusion = node.tag == 'Extrusion'

        facesets = ([node] if is_faceset or is_line else
                    node.findall('.//IndexedFaceSet') +
                    node.findall('.//IndexedTriangleSet') +
                    node.findall('.//TriangleSet') +
                    node.findall('.//LineSet') +
                    node.findall('.//IndexedLineSet'))

        app_node = None if (is_faceset or is_line) else node.find('.//Appearance')

        if not is_faceset and not is_line:
            facesets.extend([box_to_ifs(b) for b in node.findall('.//Box')])
            facesets.extend([rectangle2d_to_ifs(r) for r in node.findall('.//Rectangle2D')])
            facesets.extend([cylinder_to_ifs(c) for c in node.findall('.//Cylinder')])
            facesets.extend([cone_to_ifs(c) for c in node.findall('.//Cone')])
            facesets.extend([g for g in (extrusion_to_ifs(e) for e in node.findall('.//Extrusion')) if g is not None])
            if is_rect: facesets.append(rectangle2d_to_ifs(node))
            if is_cyl:  facesets.append(cylinder_to_ifs(node))
            if is_cone: facesets.append(cone_to_ifs(node))
            if is_extrusion:
                generated = extrusion_to_ifs(node)
                if generated is not None: facesets.append(generated)

            for ig in node.findall('.//InlineGeometry'):
                urls = parse_mfstring(ig.get('url', ''))
                tried = []
                for res in _iter_x3d_docs(urls, base_path, (), tried):
                    try:
                        ext_root, frag = res['root'], res['frag']
                        sub_target = next((e for e in ext_root.iter() if e.get('DEF') == frag), None) if frag else None
                        if sub_target is None:
                            for gtag in ('IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet', 'LineSet', 'IndexedLineSet', 'Box', 'Sphere', 'Cone', 'Cylinder', 'Rectangle2D', 'Extrusion'):
                                found_g = ext_root.find(f'.//{gtag}')
                                if found_g is not None:
                                    sub_target = found_g; break
                        if sub_target is not None:
                            if sub_target.tag == 'Box': facesets.append(box_to_ifs(sub_target))
                            elif sub_target.tag == 'Rectangle2D': facesets.append(rectangle2d_to_ifs(sub_target))
                            elif sub_target.tag == 'Cylinder': facesets.append(cylinder_to_ifs(sub_target))
                            elif sub_target.tag == 'Cone': facesets.append(cone_to_ifs(sub_target))
                            elif sub_target.tag == 'Extrusion':
                                generated = extrusion_to_ifs(sub_target)
                                if generated is not None: facesets.append(generated)
                            elif sub_target.tag == 'Sphere':
                                s_prim = _make_sphere_primitive(sub_target, app_node, def_map, gltf, bin_blob, mat_list, base_path)
                                if s_prim: primitives.append(s_prim)
                            else:
                                facesets.append(sub_target)
                            break
                    except Exception as e:
                        print(f"  WARNING: Failed to load InlineGeometry {res['target']}: {e}")

        if not is_faceset and not is_line:
            for sphere in node.findall('.//Sphere'):
                s_prim = _make_sphere_primitive(sphere, app_node, def_map, gltf, bin_blob, mat_list, base_path)
                if s_prim: primitives.append(s_prim)

        for face_set in facesets:
            coord = face_set.find('.//Coordinate')
            if coord is not None and coord.get('USE'): coord = def_map.get(coord.get('USE'), coord)
            if coord is None: continue
            raw_pos = parse_array(coord.get('point', ''))
            if not raw_pos: continue
            pos_arr = np.asarray(raw_pos, dtype=np.float32).reshape(-1, 3)
            if len(pos_arr) == 0: continue

            # --- Morph Target Discovery for this Mesh ---
            if not mtd_list_initialized:
                # 1. Displacers in local hierarchy (HAnimSegment / current Shape)
                local_disps = list(current_displacers)
                for d in node.findall('.//HAnimDisplacer') + face_set.findall('.//HAnimDisplacer'):
                    if d not in local_disps:
                        local_disps.append(d)
                # 2. Add displacers matching this coordinate
                for disp in local_disps:
                    if disp.get('USE'): disp = def_map.get(disp.get('USE'), disp)
                    mtd_list.append({'type': 'displacer', 'node': disp})

                # 3. CoordinateInterpolators routing into this Coordinate point field
                incoming_routes = ctx.get_incoming_routes(coord, ['point', 'set_point'])
                incoming_routes += ctx.get_incoming_routes(face_set, ['coord', 'set_coord'])
                for src_node, src_fld in incoming_routes:
                    if src_node.tag == 'CoordinateInterpolator':
                        raw_keys = parse_array(src_node.get('key', ''), float)
                        raw_kvs = parse_array(src_node.get('keyValue', ''), float)
                        expected_floats = len(pos_arr) * 3
                        if expected_floats > 0:
                            num_frames = len(raw_kvs) // expected_floats
                            for i in range(min(len(raw_keys), num_frames)):
                                mtd_list.append({'type': 'coord_interp', 'node': src_node, 'key_idx': i})

                mtd_list_initialized = True

            tex_coord = face_set.find('.//TextureCoordinate')
            if tex_coord is not None and tex_coord.get('USE'): tex_coord = def_map.get(tex_coord.get('USE'), tex_coord)
            if tex_coord is not None:
                raw_uv = parse_array(tex_coord.get('point', ''))
                uv_arr = np.asarray(raw_uv, dtype=np.float32).reshape(-1, 2) if raw_uv else np.empty((0,2), np.float32)
            else:
                uv_arr = np.empty((0, 2), np.float32)

            # Some X3D humanoid assets contain only a handful of TextureCoordinate
            # points for a many-hundred-vertex skin mesh (JoeKickAnimation is one).
            # Without texCoordIndex this maps most vertices to UV=(0,0), producing
            # a collapsed / smeared texture.  Repair only that invalid/incomplete
            # case; explicit texture-coordinate index maps remain untouched.
            generated_uvs = False
            has_explicit_texcoord_index = bool(face_set.get('texCoordIndex', '').strip())
            if not has_explicit_texcoord_index and len(uv_arr) < len(pos_arr):
                uv_arr = generate_geometry_uvs(pos_arr)
                generated_uvs = True
                if tex_coord is not None:
                    print(f"  INFO: Generated {len(uv_arr)} geometry UVs for incomplete TextureCoordinate data")
            if len(uv_arr):
                uv_arr[:, 1] = 1.0 - uv_arr[:, 1]

            norm_node = face_set.find('.//Normal')
            if norm_node is not None and norm_node.get('USE'): norm_node = def_map.get(norm_node.get('USE'), norm_node)
            raw_norm = parse_array(norm_node.get('vector', '')) if norm_node is not None else []
            norm_arr = np.asarray(raw_norm, dtype=np.float32).reshape(-1, 3) if raw_norm else np.empty((0,3), np.float32)

            # Resolve color on the geometry first; IndexedLineSet carries its
            # own Color/ColorRGBA child, not an Appearance material color.
            color_node = None
            for candidate in (
                _resolve_child(face_set, 'ColorRGBA', def_map),
                _resolve_child(face_set, 'Color', def_map),
                _resolve_child(node, 'ColorRGBA', def_map),
                _resolve_child(node, 'Color', def_map),
            ):
                if candidate is not None:
                    color_node = candidate
                    break
            colors = _parse_color_rgba(color_node, def_map)

            if face_set.tag == 'TriangleSet':
                n = len(pos_arr)
                pos_polys = [[i, i+1, i+2] for i in range(0, n - 2, 3)]
                tex_polys = norm_polys = color_polys = pos_polys
                primitive_mode = 4
            elif face_set.tag == 'LineSet':
                counts = parse_array(face_set.get('vertexCount', ''), int, default=[])
                pos_polys, cursor = [], 0
                for count in counts:
                    line = list(range(cursor, min(cursor + count, len(pos_arr))))
                    cursor += count
                    if len(line) >= 2:
                        for k in range(len(line) - 1): pos_polys.append([line[k], line[k+1]])
                tex_polys = norm_polys = color_polys = pos_polys
                primitive_mode = 1
            elif face_set.tag == 'IndexedLineSet':
                source_lines = parse_x3d_indices(face_set.get('coordIndex', ''))
                pos_polys, color_polys = [], []
                color_per_vertex = face_set.get('colorPerVertex', 'true').strip().lower() not in ('false', '0')
                source_color_lines = parse_x3d_indices(face_set.get('colorIndex', '')) if face_set.get('colorIndex') else []
                for line_no, line in enumerate(source_lines):
                    if len(line) < 2:
                        continue
                    if color_per_vertex:
                        line_colors = (source_color_lines[line_no]
                                       if line_no < len(source_color_lines) else list(line))
                        if len(line_colors) < len(line):
                            line_colors = line_colors + list(line[len(line_colors):])
                        for k in range(len(line) - 1):
                            pos_polys.append([line[k], line[k + 1]])
                            color_polys.append([line_colors[k], line_colors[k + 1]])
                    else:
                        if source_color_lines and any(len(v) > 1 for v in source_color_lines):
                            line_color = (source_color_lines[line_no][0]
                                          if line_no < len(source_color_lines) and source_color_lines[line_no]
                                          else line_no)
                        elif source_color_lines and source_color_lines[0]:
                            flat_color_indices = source_color_lines[0]
                            line_color = flat_color_indices[line_no] if line_no < len(flat_color_indices) else line_no
                        else:
                            line_color = line_no
                        for k in range(len(line) - 1):
                            pos_polys.append([line[k], line[k + 1]])
                            color_polys.append([line_color, line_color])
                tex_polys = norm_polys = pos_polys
                primitive_mode = 1
            else:
                pos_polys = parse_x3d_indices(face_set.get('coordIndex') or face_set.get('index', ''))
                tex_polys = parse_x3d_indices(face_set.get('texCoordIndex', '')) if face_set.get('texCoordIndex') else pos_polys
                norm_polys = parse_x3d_indices(face_set.get('normalIndex', '')) if face_set.get('normalIndex') else pos_polys
                color_polys = parse_x3d_indices(face_set.get('colorIndex', '')) if face_set.get('colorIndex') else pos_polys
                primitive_mode = 4

            unified_verts = {}
            p_idx_to_gltf_v_idx = {}
            out_positions, out_uvs, out_normals, out_colors = [], [], [], []
            unified_indices, p_indices_list = [], []

            for pi, poly in enumerate(pos_polys):
                if len(poly) < 2: continue
                t_poly = tex_polys[pi] if pi < len(tex_polys) else poly
                n_poly = norm_polys[pi] if pi < len(norm_polys) else poly
                c_poly = color_polys[pi] if pi < len(color_polys) else poly

                # Avoid long interpolation across the U seam on generated UVs.
                poly_uvs = []
                if len(uv_arr):
                    for corner, p_idx_for_uv in enumerate(poly):
                        t_idx_for_uv = t_poly[corner] if corner < len(t_poly) else p_idx_for_uv
                        poly_uvs.append(uv_arr[t_idx_for_uv] if 0 <= t_idx_for_uv < len(uv_arr) else np.array([0.0, 0.0], dtype=np.float32))
                    if generated_uvs and len(poly_uvs) > 1:
                        us = [float(v[0]) for v in poly_uvs]
                        if max(us) - min(us) > 0.5:
                            poly_uvs = [np.array([float(v[0]) + (1.0 if float(v[0]) < 0.5 else 0.0), float(v[1])], dtype=np.float32) for v in poly_uvs]

                local_sequences = [(0, i, i+1) for i in range(1, len(poly)-1)] if primitive_mode == 4 else [(0, 1)]
                for seq in local_sequences:
                    for j in seq:
                        p_idx = poly[j]
                        t_idx = t_poly[j] if j < len(t_poly) else p_idx
                        n_idx = n_poly[j] if j < len(n_poly) else p_idx
                        c_idx = c_poly[j] if j < len(c_poly) else p_idx
                        uv_value = poly_uvs[j] if j < len(poly_uvs) else (uv_arr[t_idx] if 0 <= t_idx < len(uv_arr) else np.array([0.0, 0.0], dtype=np.float32))
                        # Include the seam side in the unified key because one
                        # geometric vertex can require U and U+1 variants.
                        uv_variant = 1 if generated_uvs and float(uv_value[0]) >= 1.0 else 0
                        v_tuple = (p_idx, t_idx, n_idx, c_idx, uv_variant)
                        if v_tuple not in unified_verts:
                            v_idx = len(out_positions)
                            unified_verts[v_tuple] = v_idx
                            p_idx_to_gltf_v_idx.setdefault(p_idx, []).append(v_idx)
                            out_positions.append(pos_arr[p_idx] if 0 <= p_idx < len(pos_arr) else [0,0,0])
                            if len(uv_arr): out_uvs.append(uv_value)
                            if len(norm_arr): out_normals.append(norm_arr[n_idx] if 0 <= n_idx < len(norm_arr) else [0,1,0])
                            if colors is not None and len(colors):
                                ci = c_idx if c_idx < len(colors) else 0
                                out_colors.append(colors[ci] if ci < len(colors) else [1,1,1,1])
                            p_indices_list.append(p_idx)
                        unified_indices.append(unified_verts[v_tuple])

            if not unified_indices: continue

            positions = np.asarray(out_positions, dtype=np.float32)
            indices = np.asarray(unified_indices, dtype=np.uint32)
            if primitive_mode == 4:
                normals = np.asarray(out_normals, dtype=np.float32) if out_normals else \
                    compute_normals(positions, indices, ccw=(face_set.get('ccw','true').strip().lower() not in ('false','0')))
            else:
                normals = np.asarray(out_normals, dtype=np.float32) if out_normals else np.zeros_like(positions, dtype=np.float32)

            idx_comp = UNSIGNED_SHORT if len(indices) and indices.max() < 65536 else UNSIGNED_INT
            if idx_comp == UNSIGNED_SHORT: indices = indices.astype(np.uint16)

            mat_idx = resolve_material(app_node, def_map, mat_list, gltf, bin_blob, base_path)
            prim_attrs = {"POSITION": add_accessor(gltf, bin_blob, positions, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True)}
            if primitive_mode == 4:
                prim_attrs["NORMAL"] = add_accessor(gltf, bin_blob, normals, VEC3, FLOAT, target=ARRAY_BUFFER)

            if len(out_uvs):
                prim_attrs["TEXCOORD_0"] = add_accessor(gltf, bin_blob, np.asarray(out_uvs, np.float32), VEC2, FLOAT, target=ARRAY_BUFFER)
            elif mat_idx is not None and mat_idx < len(mat_list):
                mat_dict = mat_list[mat_idx]
                has_tex = (
                    ("pbrMetallicRoughness" in mat_dict and "baseColorTexture" in mat_dict["pbrMetallicRoughness"]) or
                    ("normalTexture" in mat_dict) or ("occlusionTexture" in mat_dict) or ("emissiveTexture" in mat_dict)
                )
                if has_tex and len(positions) > 0:
                    mins = positions.min(axis=0)
                    maxs = positions.max(axis=0)
                    sizes = maxs - mins
                    order = np.argsort(sizes)[::-1]
                    ax_u, ax_v = order[0], order[1]
                    sz_u = max(float(sizes[ax_u]), 1e-6)
                    sz_v = max(float(sizes[ax_v]), 1e-6)
                    gen_uvs = np.zeros((len(positions), 2), dtype=np.float32)
                    gen_uvs[:, 0] = (positions[:, ax_u] - mins[ax_u]) / sz_u
                    gen_uvs[:, 1] = 1.0 - (positions[:, ax_v] - mins[ax_v]) / sz_v
                    prim_attrs["TEXCOORD_0"] = add_accessor(gltf, bin_blob, gen_uvs, VEC2, FLOAT, target=ARRAY_BUFFER)

            if len(out_colors):
                prim_attrs["COLOR_0"] = add_accessor(gltf, bin_blob, np.asarray(out_colors, np.float32), VEC4, FLOAT, target=ARRAY_BUFFER)

            # --- Target Accessor Generation for Primitive ---
            targets = []
            if mtd_list and primitive_mode == 4:
                for mtd in mtd_list:
                    delta_pos = np.zeros_like(positions)
                    if mtd['type'] == 'displacer':
                        c_idx = parse_array(mtd['node'].get('coordIndex', ''), int)
                        raw_disps = parse_array(mtd['node'].get('displacements', ''), float)
                        valid_len = (len(raw_disps) // 3) * 3
                        disps_np = np.asarray(raw_disps[:valid_len], dtype=np.float32).reshape(-1, 3)
                        for d_i, o_idx in enumerate(c_idx):
                            if d_i < len(disps_np) and o_idx in p_idx_to_gltf_v_idx:
                                for v_idx in p_idx_to_gltf_v_idx[o_idx]:
                                    delta_pos[v_idx] = disps_np[d_i]
                    elif mtd['type'] == 'coord_interp':
                        raw_kvs = parse_array(mtd['node'].get('keyValue', ''), float)
                        num_verts = len(pos_arr)
                        expected_floats = num_verts * 3
                        if expected_floats > 0:
                            start_idx = mtd['key_idx'] * expected_floats
                            end_idx = start_idx + expected_floats
                            if end_idx <= len(raw_kvs):
                                t_pos = np.asarray(raw_kvs[start_idx:end_idx], dtype=np.float32).reshape(num_verts, 3)
                                for o_idx, v_idxs in p_idx_to_gltf_v_idx.items():
                                    if o_idx < num_verts:
                                        delta = t_pos[o_idx] - pos_arr[o_idx]
                                        for v_idx in v_idxs:
                                            delta_pos[v_idx] = delta

                    # glTF Morph Targets must not define bufferView target
                    d_acc = add_accessor(gltf, bin_blob, delta_pos, VEC3, FLOAT, target=None, add_min_max=True)
                    targets.append({"POSITION": d_acc})

            prim_dict = {
                "indices": add_accessor(gltf, bin_blob, indices, SCALAR, idx_comp, target=ELEMENT_ARRAY_BUFFER, add_min_max=True),
                "attributes": prim_attrs,
                "_p_indices": p_indices_list,
                "mode": primitive_mode
            }
            if mat_idx is not None: prim_dict["material"] = mat_idx
            if targets: prim_dict["targets"] = targets

            line_props = _resolve_child(node, 'LineProperties', def_map)
            if line_props is not None:
                prim_dict["_x3d_lineProperties"] = {
                    "linewidthScaleFactor": float(line_props.get('linewidthScaleFactor','1')),
                    "linetype": int(line_props.get('linetype','1'))
                }
            primitives.append(prim_dict)

    if not primitives: return None

    mesh_idx = len(gltf.meshes)
    mesh = Mesh(primitives=[])
    if mtd_list:
        mesh.weights = [float(mtd['node'].get('weight', '0')) if mtd['type'] == 'displacer' else 0.0 for mtd in mtd_list]
        mesh_to_mtd[mesh_idx] = mtd_list

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

def collect_skin_displacers(hum_el, def_map):
    """HAnimDisplacer nodes owned by an HAnimHumanoid's joints (or the humanoid itself).

    These index into the humanoid's skinCoord.  Displacers inside an HAnimSegment
    index into that segment's own shapes and are handled by get_local_displacers.
    """
    out, seen = [], set()
    def walk(el, in_segment):
        for ch in el:
            if ch.tag == 'HAnimDisplacer':
                if in_segment: continue
                d = def_map.get(ch.get('USE'), ch) if ch.get('USE') else ch
                if id(d) not in seen:
                    seen.add(id(d)); out.append(d)
            else:
                walk(ch, in_segment or ch.tag == 'HAnimSegment')
    walk(hum_el, False)
    return out

def get_local_displacers(node):
    disps = []
    for child in node:
        if child.tag == 'HAnimDisplacer':
            disps.append(child)
        elif child.tag not in ('HAnimSegment', 'HAnimJoint', 'HAnimHumanoid'):
            disps.extend(get_local_displacers(child))
    return disps

# ---------------------------------------------------------------------------
# Scope, Context, and Tag Handlers
# ---------------------------------------------------------------------------

MAX_INLINE_DEPTH = 16
STRUCTURAL_TAGS = {
    'Transform', 'Group', 'HAnimJoint', 'HAnimSegment', 'HAnimHumanoid', 'HAnimSite',
    'LayerSet', 'Layer', 'Billboard'
}
IGNORED_BEHAVIOUR_TAGS = {
    'BooleanFilter', 'BooleanSequencer', 'NavigationInfo', 'TimeTrigger'
}
HANDLED_TAGS = STRUCTURAL_TAGS | {
    'X3D', 'head', 'meta', 'Scene',
    'Shape', 'Appearance', 'Material', 'ImageTexture', 'TextureTransform',
    'IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet', 'LineSet', 'IndexedLineSet',
    'Box', 'Sphere', 'Cone', 'Cylinder', 'Rectangle2D', 'Extrusion', 'Text', 'FontStyle', 'ColorRGBA', 'LineProperties',
    'Coordinate', 'TextureCoordinate', 'Normal',
    'WorldInfo', 'NavigationInfo', 'Background', 'AudioClip', 'Sound', 'LoadSensor',
    'Switch', 'HAnimMotion', 'TouchSensor', 'ProximitySensor', 'HAnimDisplacer',
    'LayerSet', 'Layer',
    'Viewpoint', 'Inline', 'InlineGeometry',
    'DirectionalLight', 'PointLight', 'SpotLight',
    'CylinderSensor', 'PlaneSensor', 'StringSensor', 'Script', 'TimeSensor', 'PositionInterpolator', 'OrientationInterpolator', 'ScalarInterpolator', 'CoordinateInterpolator', 'PositionInterpolator2D', 'IntegerSequencer',
    'BooleanToggle',
    'MetadataSet', 'MetadataString', 'MetadataInteger', 'MetadataFloat', 'MetadataDouble', 'MetadataBoolean',
    'ProtoDeclare', 'ExternProtoDeclare', 'ProtoInterface', 'ProtoBody', 'ProtoInstance', 'field', 'fieldValue', 'IS', 'connect',
    'ROUTE', 'IMPORT', 'EXPORT',
}
SHAPE_CONSUMED_TAGS = {
    'Appearance', 'Material', 'ImageTexture', 'TextureTransform', 'FontStyle',
    'IndexedFaceSet', 'IndexedTriangleSet', 'TriangleSet', 'LineSet', 'IndexedLineSet',
    'Box', 'Sphere', 'Cone', 'Cylinder', 'Rectangle2D', 'Extrusion', 'Text', 'ColorRGBA', 'LineProperties',
    'Coordinate', 'TextureCoordinate', 'Normal', 'InlineGeometry', 'HAnimDisplacer',
    'MetadataSet', 'MetadataString', 'MetadataInteger', 'MetadataFloat', 'MetadataDouble', 'MetadataBoolean',
    'IS', 'connect', 'field', 'fieldValue'
}

def _collect_visible_route_targets(root):
    targets = set()
    for el in root.iter():
        if el.tag != 'ROUTE': continue
        if (el.get('toField') or '').strip().lower() in ('visible', 'set_visible'):
            to_node = (el.get('toNode') or '').strip()
            if to_node: targets.add(to_node)
    return targets

def _x3d_attr_is_false(val):
    return val is not None and str(val).strip().lower() in ('false', '0')

def _should_skip_invisible(xml_node, scope):
    if xml_node is None or not _x3d_attr_is_false(xml_node.get('visible')): return False
    def_name = (xml_node.get('DEF') or '').strip()
    return not (def_name and def_name in getattr(scope, 'visible_route_targets', ()))

class Scope:
    def __init__(self, root, content, base, prefix, filename):
        self.root = root
        self.content = content
        self.base = base
        self.prefix = prefix
        self.filename = filename
        self.def_map = {el.get('DEF'): el for el in root.iter() if el.get('DEF')}
        self.inline_children = {}
        self.export_map = {}
        for exp in root.iter('EXPORT'):
            local_def = exp.get('localDEF')
            exported_name = exp.get('AS') or local_def
            if local_def and exported_name and local_def in self.def_map:
                self.export_map[exported_name] = local_def
        self.unit_scale = self._parse_unit_scale(root)
        self.proto_map = {el.get('name'): el for el in root.iter('ProtoDeclare') if el.get('name')}
        self.extern_map = {el.get('name'): el for el in root.iter('ExternProtoDeclare') if el.get('name')}
        self.visible_route_targets = _collect_visible_route_targets(root)

    @staticmethod
    def _parse_unit_scale(root):
        head = root.find('head')
        if head is not None:
            for u in head.findall('unit'):
                if u.get('category') == 'length':
                    try:
                        return float(u.get('conversionFactor', '1.0'))
                    except (ValueError, TypeError): pass
        return 1.0

def _find_proto(proto_name, scope, ctx):
    if proto_name in scope.proto_map:
        return scope.proto_map[proto_name]
    for s in ctx.scopes:
        if proto_name in s.proto_map:
            return s.proto_map[proto_name]
    for s in [scope] + [x for x in ctx.scopes if x is not scope]:
        ext = s.extern_map.get(proto_name)
        if ext is not None:
            res = _load_extern_proto(ext, s, ctx)
            if res:
                decl, base = res
                ctx.extern_proto_base[id(decl)] = base
                return decl
    return None

class SkinGroup:
    def __init__(self, name, scope, skincoord_name):
        self.name = name
        self.scope = scope
        self.skincoord_name = skincoord_name
        self.inner_idx = None
        self.joint_skinning = {}
        self.meshes = []
        self.joint_displacers = []

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
        self.extern_proto_cache = {}
        self.extern_proto_base = {}
        self.used_prefixes = set()
        self.displacers = []
        self.node_to_morph_targets = {}
        self.proximity_sensors = []
        self.sensor_nodes = []
        self.layers = []
        self.layer_sets = []
        self.invisible_skipped = 0
        self.bone_mode = False
        self.interactive_bones = []
        self.current_bone = None
        self.model_root_idx = None
        self.main_camera_node_idx = None
        self.shared_axes_mesh_idx = None
        self.shell_cache = {}
        self.scene_center = None
        self.camera_dist = None
        self.reset_anim_idx = None
        self.clear_anim_indices = []

        self.global_forward_routes = {}
        self.global_inverse_routes = {}

    def get_incoming_routes(self, target_el, field_names=None):
        routes = []
        target_id = id(target_el)
        target_def = target_el.get('DEF')

        check_fields = [None] if field_names is None else field_names
        for fld in check_fields:
            if fld is not None:
                routes.extend(self.global_inverse_routes.get((target_id, fld), []))
                if target_def:
                    routes.extend(self.global_inverse_routes.get((target_def, fld), []))
            else:
                for (t_key, _fld), src_list in self.global_inverse_routes.items():
                    if t_key in (target_id, target_def):
                        routes.extend(src_list)

        # De-duplicate while ensuring every src_node is an Element
        deduped = []
        seen = set()
        for src_node, src_field in routes:
            # If a DEF name string was ever stored, resolve it to an XML Element
            if isinstance(src_node, str):
                resolved = None
                for s in self.scopes:
                    if src_node in s.def_map:
                        resolved = s.def_map[src_node]
                        break
                if resolved is None:
                    continue
                src_node = resolved

            route_key = (id(src_node), src_field)
            if route_key not in seen:
                seen.add(route_key)
                deduped.append((src_node, src_field))
        return deduped

#    def get_incoming_routes(self, target_el, field_names=None):
#        routes = []
#        target_id = id(target_el)
#        target_def = target_el.get('DEF')
#
#        check_fields = [None] if field_names is None else field_names
#        for fld in check_fields:
#            if fld is not None:
#                routes.extend(self.global_inverse_routes.get((target_id, fld), []))
#                if target_def:
#                    routes.extend(self.global_inverse_routes.get((target_def, fld), []))
#            else:
#                for (t_key, _fld), src_list in self.global_inverse_routes.items():
#                    if t_key in (target_id, target_def):
#                        routes.extend(src_list)
#        return routes
#
    def note_unhandled(self, tag, reason, scope, xml_node=None, example=None):
        rec = self.unhandled.setdefault(tag, {'count': 0, 'reasons': [], 'examples': []})
        rec['count'] += 1
        if reason not in rec['reasons']: rec['reasons'].append(reason)
        if example is None and xml_node is not None:
            example = f"{scope.filename}::{xml_node.get('DEF') or xml_node.get('USE') or '(unnamed)'}"
        if example and example not in rec['examples'] and len(rec['examples']) < 3:
            rec['examples'].append(example)

    def note_use(self, tag, scope, xml_node):
        if tag in ('HAnimJoint', 'HAnimSegment', 'HAnimSite') and xml_node.get('containerField') in ('joints', 'segments', 'sites', 'skeleton'):
            return
        reason = 'USE reference is NOT instanced (nothing is duplicated)'
        self.note_unhandled(f"{tag} (USE)", reason, scope, xml_node)

def tag_node_interactivity(node, selectable=None, hoverable=None, visible=None):
    if node.extensions is None: node.extensions = {}
    if selectable is not None: node.extensions["KHR_node_selectability"] = {"selectable": bool(selectable)}
    if hoverable is not None:  node.extensions["KHR_node_hoverability"] = {"hoverable": bool(hoverable)}
    if visible is not None:    node.extensions["KHR_node_visibility"] = {"visible": bool(visible)}

# ---------------------------------------------------------------------------
# Bone Mode Gizmos & Highlights
# ---------------------------------------------------------------------------

BONE_FILE_NAMES = {'pelvis.x3d', 'allbonesjohn.x3d', 'allbonescollection.x3d'}
HIGHLIGHT_SHELL_SCALE = 1.02
AXES_HALF_LENGTH = 0.08
FOCUS_MIN_SCALE, FOCUS_MAX_SCALE = 1.0, 12.0
FOCUS_FILL = 0.75

def _detect_bone_mode(main_path, root, override=None):
    if override is not None: return bool(override)
    env = os.environ.get('X3D_BONE_MODE', '').strip().lower()
    if env in ('1', 'true', 'yes', 'on'): return True
    if env in ('0', 'false', 'no', 'off'): return False
    if os.path.basename(main_path).lower() in BONE_FILE_NAMES: return True
    base, checked = os.path.dirname(main_path), 0
    for el in root.iter():
        if el.get('DEF') == 'CenterOfRotationForJoint': return True
        if el.tag != 'Inline': continue
        if 'axesdisplay' in (el.get('url') or '').lower(): return True
        for u in parse_mfstring(el.get('url', '')):
            if checked >= 25: break
            fp = _resolve_ref(base, u.partition('#')[0])
            if _is_remote(fp) or not os.path.isfile(fp): continue
            checked += 1
            try:
                with open(fp, 'rb') as f: head = f.read(262144)
            except OSError: continue
            if b'CenterOfRotationForJoint' in head or b'AxesDisplay' in head: return True
            break
    return False

def _new_bone_rec(node_idx, name):
    return {"node_idx": node_idx, "name": name, "mesh_nodes": [], "highlight_nodes": [],
            "axes_nodes": [], "pickable": False, "focus_anim_idx": None, "return_anim_idx": None}

def _node_marks(node):
    ex = getattr(node, 'extras', None)
    return ex if isinstance(ex, dict) else {}

def _is_overlay(node):
    m = _node_marks(node)
    return 'x3d_highlight' in m or 'x3d_axes' in m or 'x3d_axes_gizmo' in m

def _get_or_create_material(ctx, name, mat):
    for i, m in enumerate(ctx.mat_list):
        if m.get("name") == name: return i
    ctx.mat_list.append(dict(mat, name=name))
    return len(ctx.mat_list) - 1

def get_or_create_highlight_material(ctx):
    return _get_or_create_material(ctx, "BoneHighlightMaterial", {
        "pbrMetallicRoughness": {"baseColorFactor": [0.2, 0.55, 1.0, 0.85], "metallicFactor": 0.0, "roughnessFactor": 0.3},
        "emissiveFactor": [0.45, 0.7, 1.0], "doubleSided": True, "alphaMode": "BLEND"})

def create_axes_mesh(ctx, half=AXES_HALF_LENGTH):
    gltf, blob = ctx.gltf, ctx.bin_blob
    pos = np.array([[-half, 0, 0], [half, 0, 0], [0, -half, 0], [0, half, 0], [0, 0, -half], [0, 0, half]], dtype=np.float32)
    col = np.array([[1, 0, 0, 1]] * 2 + [[0, 1, 0, 1]] * 2 + [[0, 0.35, 1, 1]] * 2, dtype=np.float32)
    idx = np.arange(6, dtype=np.uint16)
    mat_idx = _get_or_create_material(ctx, "AxesDisplayMaterial", {
        "pbrMetallicRoughness": {"baseColorFactor": [1, 1, 1, 1], "metallicFactor": 0.0, "roughnessFactor": 1.0},
        "emissiveFactor": [1.0, 1.0, 1.0]})
    gltf.meshes.append(Mesh(primitives=[{
        "attributes": {"POSITION": add_accessor(gltf, blob, pos, VEC3, FLOAT, target=ARRAY_BUFFER, add_min_max=True),
                       "COLOR_0":  add_accessor(gltf, blob, col, VEC4, FLOAT, target=ARRAY_BUFFER)},
        "indices": add_accessor(gltf, blob, idx, SCALAR, UNSIGNED_SHORT, target=ELEMENT_ARRAY_BUFFER, add_min_max=True),
        "material": mat_idx, "mode": 1}]))
    return len(gltf.meshes) - 1

def _add_axes_gizmo(ctx, scope, parent_idx):
    gltf = ctx.gltf
    if ctx.shared_axes_mesh_idx is None: ctx.shared_axes_mesh_idx = create_axes_mesh(ctx)
    idx = len(gltf.nodes)
    node = Node(name=f"{scope.prefix}AxesGizmo", mesh=ctx.shared_axes_mesh_idx, extras={"x3d_axes_gizmo": True})
    tag_node_interactivity(node, selectable=False, hoverable=False)
    gltf.nodes.append(node)
    if parent_idx is not None:
        p = gltf.nodes[parent_idx]
        if p.children is None: p.children = []
        p.children.append(idx)

def _prim_dict(p):
    return p if isinstance(p, dict) else to_plain(p)

def _get_highlight_shell(ctx, mesh_idx):
    if mesh_idx in ctx.shell_cache: return ctx.shell_cache[mesh_idx]
    gltf = ctx.gltf
    mat_idx = get_or_create_highlight_material(ctx)
    prims, lo, hi = [], None, None
    for p in gltf.meshes[mesh_idx].primitives or []:
        pd = _prim_dict(p)
        attrs = pd.get('attributes') or {}
        if pd.get('mode', 4) != 4 or 'POSITION' not in attrs: continue
        new_p = {"attributes": {k: v for k, v in attrs.items() if k in ('POSITION', 'NORMAL')}, "material": mat_idx}
        if pd.get('indices') is not None: new_p["indices"] = pd['indices']
        prims.append(new_p)
        acc = gltf.accessors[attrs['POSITION']]
        if acc.min and acc.max:
            mn, mx = np.asarray(acc.min, dtype=np.float64), np.asarray(acc.max, dtype=np.float64)
            lo = mn if lo is None else np.minimum(lo, mn)
            hi = mx if hi is None else np.maximum(hi, mx)
    if not prims:
        ctx.shell_cache[mesh_idx] = None
        return None
    center = ((lo + hi) * 0.5) if lo is not None else np.zeros(3)
    gltf.meshes.append(Mesh(primitives=prims))
    ctx.shell_cache[mesh_idx] = (len(gltf.meshes) - 1, center)
    return ctx.shell_cache[mesh_idx]

def _bone_register_shape(ctx, shape_idx, mesh_idx, attach, shape_name):
    gltf = ctx.gltf
    tag_node_interactivity(gltf.nodes[shape_idx], selectable=True, hoverable=True)
    shell = _get_highlight_shell(ctx, mesh_idx)
    if shell is None: return
    shell_mesh, c = shell
    k = HIGHLIGHT_SHELL_SCALE
    hl_idx = len(gltf.nodes)
    hl = Node(name=f"{shape_name}_Highlight", mesh=shell_mesh,
              translation=[float(v * (1.0 - k)) for v in c],
              scale=[0.0, 0.0, 0.0],
              extras={"x3d_highlight": {"on_scale": k}})
    tag_node_interactivity(hl, selectable=False, hoverable=False)
    gltf.nodes.append(hl)
    attach(hl_idx)

def _setup_bone_scene(ctx, main_scope, main_path):
    gltf = ctx.gltf
    u = main_scope.unit_scale
    container = Node(name="ModelContainer", children=[], scale=[u, u, u] if u != 1.0 else None)
    ctx.model_root_idx = len(gltf.nodes)
    gltf.nodes.append(container)
    gltf.nodes[0].children.append(ctx.model_root_idx)

    gltf.cameras.append(Camera(type="perspective", perspective=Perspective(yfov=0.785398, znear=0.01, zfar=100.0)))
    ctx.main_camera_node_idx = len(gltf.nodes)
    gltf.nodes.append(Node(name="MainSceneCamera", translation=[0.0, 0.95, 2.0], camera=len(gltf.cameras) - 1))
    gltf.nodes[0].children.append(ctx.main_camera_node_idx)

    inlines = [e for e in main_scope.content.iter('Inline') if 'axesdisplay' not in (e.get('url') or '').lower()]
    if inlines:
        traverse_x3d_node(main_scope.content, ctx.model_root_idx, ctx, main_scope, None)
        return

    label = os.path.splitext(os.path.basename(main_path))[0]
    wrapper_idx = len(gltf.nodes)
    wrapper = Node(name=label, children=[])
    tag_node_interactivity(wrapper, selectable=True, hoverable=True)
    gltf.nodes.append(wrapper)
    container.children.append(wrapper_idx)
    rec = _new_bone_rec(wrapper_idx, label)
    ctx.interactive_bones.append(rec)
    ctx.current_bone = rec
    try:
        traverse_x3d_node(main_scope.content, wrapper_idx, ctx, main_scope, None)
    finally:
        ctx.current_bone = None

def _node_mesh_bounds(gltf, node, world):
    lo = hi = None
    if node.mesh is None or not (0 <= node.mesh < len(gltf.meshes)): return None
    for p in gltf.meshes[node.mesh].primitives or []:
        attrs = _prim_dict(p).get('attributes') or {}
        pi = attrs.get('POSITION')
        if pi is None or pi >= len(gltf.accessors): continue
        acc = gltf.accessors[pi]
        if not acc.min or not acc.max: continue
        mn, mx = np.asarray(acc.min, dtype=np.float64), np.asarray(acc.max, dtype=np.float64)
        corners = np.array([[x, y, z, 1.0] for x in (mn[0], mx[0]) for y in (mn[1], mx[1]) for z in (mn[2], mx[2])])
        wc = (world @ corners.T).T[:, :3]
        lo = wc.min(axis=0) if lo is None else np.minimum(lo, wc.min(axis=0))
        hi = wc.max(axis=0) if hi is None else np.maximum(hi, wc.max(axis=0))
    return None if lo is None else (lo, hi)

def _meshes_world_bounds(gltf, node_idxs, worlds):
    lo = hi = None
    for ni in node_idxs:
        b = _node_mesh_bounds(gltf, gltf.nodes[ni], worlds[ni])
        if b is None: continue
        lo = b[0] if lo is None else np.minimum(lo, b[0])
        hi = b[1] if hi is None else np.maximum(hi, b[1])
    return None if lo is None else (lo, hi)

def _subtree_world_bounds(gltf, root_idx, worlds):
    found, stack = [], [root_idx]
    while stack:
        ni = stack.pop()
        node = gltf.nodes[ni]
        if _is_overlay(node): continue
        if node.mesh is not None: found.append(ni)
        stack.extend(node.children or [])
    return _meshes_world_bounds(gltf, found, worlds)

def _finalize_bone_pick_targets(ctx):
    gltf = ctx.gltf
    by_root = {b['node_idx']: b for b in ctx.interactive_bones}
    parent = {}
    for i, n in enumerate(gltf.nodes):
        for c in (n.children or []): parent[c] = i
    for b in ctx.interactive_bones:
        b['mesh_nodes'], b['highlight_nodes'], b['axes_nodes'] = [], [], []

    for i, n in enumerate(gltf.nodes):
        marks = _node_marks(n)
        under_axes, owner, cur = False, None, i
        while cur is not None:
            if cur != i and 'x3d_axes' in _node_marks(gltf.nodes[cur]): under_axes = True
            if cur in by_root: owner = by_root[cur]; break
            cur = parent.get(cur)
        if owner is None: continue
        if 'x3d_highlight' in marks:       owner['highlight_nodes'].append(i)
        elif 'x3d_axes' in marks:          owner['axes_nodes'].append(i)
        elif 'x3d_axes_gizmo' in marks:    continue
        elif n.mesh is not None and not under_axes: owner['mesh_nodes'].append(i)

    for b in ctx.interactive_bones:
        b['pickable'] = len(b['mesh_nodes']) > 0

def _place_bone_camera(ctx):
    gltf = ctx.gltf
    cam_node = gltf.nodes[ctx.main_camera_node_idx]
    persp = gltf.cameras[cam_node.camera].perspective
    worlds = _world_matrices(gltf)
    b = _subtree_world_bounds(gltf, ctx.model_root_idx, worlds)
    if b is None:
        ctx.scene_center, ctx.camera_dist = np.array([0.0, 0.95, 0.0]), 2.0
        return
    lo, hi = b
    center, half = (lo + hi) * 0.5, (hi - lo) * 0.5
    t = math.tan(persp.yfov * 0.5)
    need_h = max(half[1], half[0] / 1.6)
    dist = max(need_h * 1.15 / t + half[2], 0.25)
    cam_node.translation = [float(center[0]), float(center[1]), float(center[2] + dist)]
    persp.zfar = float(max(100.0, dist * 50.0))
    ctx.scene_center, ctx.camera_dist = center, float(dist)

def generate_bone_focus_animations(ctx, duration=1.0):
    gltf, blob = ctx.gltf, ctx.bin_blob
    ctx.reset_anim_idx, ctx.clear_anim_indices = None, []
    bones = [b for b in ctx.interactive_bones if b.get('pickable')]
    if not bones or ctx.model_root_idx is None or ctx.camera_dist is None: return

    root_idx = ctx.model_root_idx
    root = gltf.nodes[root_idx]
    home_t = np.asarray(root.translation or [0.0, 0.0, 0.0], dtype=np.float64)
    home_s = np.asarray(root.scale or [1.0, 1.0, 1.0], dtype=np.float64)
    worlds = _world_matrices(gltf)

    fov = gltf.cameras[gltf.nodes[ctx.main_camera_node_idx].camera].perspective.yfov
    visible_h = 2.0 * ctx.camera_dist * math.tan(fov * 0.5)
    target_size = FOCUS_FILL * visible_h
    target_point = np.asarray(ctx.scene_center, dtype=np.float64) + np.array([0.0, 0.0, 0.06 * ctx.camera_dist])

    t_acc = add_accessor(gltf, blob, np.array([0.0, duration], dtype=np.float32), SCALAR, FLOAT, target=None, add_min_max=True)
    acc_cache = {}
    def vec2(a, b):
        key = tuple(round(float(v), 9) for v in list(a) + list(b))
        if key not in acc_cache:
            acc_cache[key] = add_accessor(gltf, blob, np.asarray([a, b], dtype=np.float32), VEC3, FLOAT, target=None)
        return acc_cache[key]

    names = set(a.name for a in gltf.animations)
    def make_anim(name, specs):
        base, n = name, 2
        while name in names: name = f"{base}_{n}"; n += 1
        names.add(name)
        samplers, sampler_of, channels = [], {}, []
        for node_idx, path, out_acc in specs:
            if out_acc not in sampler_of:
                sampler_of[out_acc] = len(samplers)
                samplers.append(AnimationSampler(input=t_acc, output=out_acc, interpolation="LINEAR"))
            channels.append(AnimationChannel(sampler=sampler_of[out_acc],
                                             target=AnimationChannelTarget(node=node_idx, path=path)))
        anim = Animation(name=name, samplers=samplers, channels=channels)
        anim.extras = {"duration": float(duration)}
        gltf.animations.append(anim)
        return len(gltf.animations) - 1

    ctx.reset_anim_idx = make_anim("Anim_Reset_Home", [
        (root_idx, "translation", vec2(home_t, home_t)),
        (root_idx, "scale",       vec2(home_s, home_s))])

    zero = [0.0, 0.0, 0.0]
    overlays = [n for b in bones for n in b['highlight_nodes'] + b['axes_nodes']]
    for ci in range(0, len(overlays), 64):
        chunk = overlays[ci:ci + 64]
        ctx.clear_anim_indices.append(make_anim(f"Anim_ClearHighlights_{ci // 64}",
                                                [(n, "scale", vec2(zero, zero)) for n in chunk]))

    def on_scale(node_idx):
        m = _node_marks(gltf.nodes[node_idx])
        if 'x3d_highlight' in m:
            k = float(m['x3d_highlight'].get('on_scale', HIGHLIGHT_SHELL_SCALE)); return [k, k, k]
        return [float(v) for v in m['x3d_axes'].get('on_scale', [1.0, 1.0, 1.0])]

    for b in bones:
        bounds = _meshes_world_bounds(gltf, b['mesh_nodes'], worlds)
        if bounds is None: continue
        lo, hi = bounds
        center, extent = (lo + hi) * 0.5, float(np.max(hi - lo))
        f = float(np.clip(target_size / extent, FOCUS_MIN_SCALE, FOCUS_MAX_SCALE)) if extent > 1e-9 else 1.0
        pose_t = target_point - f * (center - home_t)
        pose_s = home_s * f
        overlay_nodes = b['highlight_nodes'] + b['axes_nodes']

        focus = [(root_idx, "translation", vec2(home_t, pose_t)), (root_idx, "scale", vec2(home_s, pose_s))]
        back  = [(root_idx, "translation", vec2(pose_t, home_t)), (root_idx, "scale", vec2(pose_s, home_s))]
        for n in overlay_nodes:
            on = on_scale(n)
            focus.append((n, "scale", vec2(on, on)))
            back.append((n, "scale", vec2(on, zero)))
        b['focus_anim_idx'] = make_anim(f"Anim_Focus_{b['name']}", focus)
        b['return_anim_idx'] = make_anim(f"Anim_Return_{b['name']}", back)

# ---------------------------------------------------------------------------
# DOM Traversal & Cloning
# ---------------------------------------------------------------------------

def _clone_gltf_subtree(gltf, source_idx, name_suffix="__USE"):
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
        if s_weights is not None: n.weights = list(s_weights)
        if s.extras is not None: n.extras = dict(s.extras)
        if s.extensions is not None: n.extensions = dict(s.extensions)

        new_idx = len(gltf.nodes)
        gltf.nodes.append(n)
        for child in (s.children or []):
            n.children.append(copy_node(child))
        return new_idx
    return copy_node(source_idx)

def _preserve_behavior(ctx, scope, xml_node, kind=None):
    rec = {
        "file": scope.filename, "prefix": scope.prefix, "type": xml_node.tag,
        "DEF": xml_node.get("DEF"), "USE": xml_node.get("USE"),
        "attributes": dict(xml_node.attrib),
        "children": [{"type": ch.tag, "DEF": ch.get("DEF"), "USE": ch.get("USE"), "attributes": dict(ch.attrib)} for ch in xml_node]
    }
    if kind: rec["kind"] = kind
    ctx.behavior.append(rec)

def _shape_children_consumed(el):
    return el.tag in SHAPE_CONSUMED_TAGS or el.tag in {'ColorRGBA', 'Color', 'LineProperties'}

def _handle_inline(xml_node, parent_idx, ctx, scope, current_displacers):
    gltf = ctx.gltf
    src = xml_node
    use = xml_node.get('USE')
    if use: src = scope.def_map.get(use)
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
    if _should_skip_invisible(src, scope):
        ctx.invisible_skipped += 1
        return finish('SKIPPED', 'visible="false"')
    if not urls: return finish('FAILED', 'empty url field')
    if ctx.bone_mode and src.tag == 'Inline' and any('axesdisplay' in u.lower() for u in urls):
        _add_axes_gizmo(ctx, scope, parent_idx)
        rec['nodes'] = 1
        return finish('LOADED', 'synthesized RGB axes gizmo')
    if len(ctx.load_stack) >= MAX_INLINE_DEPTH: return finish('FAILED', 'Nesting depth exceeded')

    tried = []
    res = None
    fallback = None
    for item in _iter_x3d_docs(urls, scope.base, ctx.load_stack, tried):
        frag, ext_root = item['frag'], item['root']
        if frag:
            content = next((e for e in ext_root.iter() if e.get('DEF') == frag), None)
            if content is None:
                tried.append((item['target'], f'#{frag} not found'))
                if fallback is None: fallback = item
                continue
        else:
            scene = ext_root.find('Scene')
            content = scene if scene is not None else ext_root
        res = {'root': ext_root, 'content': content, 'target': item['target'], 'frag': frag, 'origin': item['origin']}
        break

    if res is None and fallback is not None:
        ext_root = fallback['root']
        scene = ext_root.find('Scene')
        res = {'root': ext_root, 'content': scene if scene is not None else ext_root, 'target': fallback['target'], 'frag': None, 'origin': fallback['origin']}

    if res is None: return finish('FAILED', '; '.join(f"{u!r}: {why}" for u, why in tried))

    full_prefix, n = f"{scope.prefix}{label}/", 2
    while full_prefix in ctx.used_prefixes:
        full_prefix = f"{scope.prefix}{label}#{n}/"; n += 1
    ctx.used_prefixes.add(full_prefix)

    child = Scope(res['root'], res['content'], _base_of(res['target']), full_prefix, os.path.basename(res['target'].split('?')[0]))
    ctx.scopes.append(child)
    populate_scope_routes(child, ctx)  # <--- Add this so child Inline ROUTEs are indexed


    inline_key = def_name or use or label
    scope.inline_children.setdefault(inline_key, child)
    if use: scope.inline_children.setdefault(use, child)
    if def_name: scope.inline_children.setdefault(def_name, child)

    rec['file'] = res['target']
    rec['origin'] = res['origin']

    wrapper_idx = len(gltf.nodes)
    scale_vec = [child.unit_scale, child.unit_scale, child.unit_scale] if child.unit_scale != 1.0 else None

    gltf.nodes.append(Node(
        name=f"Inline_{full_prefix.rstrip('/')}",
        scale=scale_vec,
        children=[],
        extras={"x3d_inline_url": urls, "x3d_inline_file": res['target']}
    ))
    if parent_idx is not None:
        p = gltf.nodes[parent_idx]
        if p.children is None: p.children = []
        p.children.append(wrapper_idx)

    bone_rec = None
    if ctx.bone_mode and src.tag == 'Inline':
        tag_node_interactivity(gltf.nodes[wrapper_idx], selectable=True, hoverable=True)
        if def_name:
            ctx.def_to_node_idx[scope.prefix + def_name] = wrapper_idx
        bone_rec = _new_bone_rec(wrapper_idx, label)
        ctx.interactive_bones.append(bone_rec)

    n0, m0 = len(gltf.nodes), len(gltf.meshes)
    prev_bone = ctx.current_bone
    if bone_rec is not None: ctx.current_bone = bone_rec
    ctx.load_stack.append(res['target'])
    try:
        traverse_x3d_node(child.content, wrapper_idx, ctx, child, None, current_displacers)
    finally:
        ctx.load_stack.pop()
        ctx.current_bone = prev_bone
    rec['nodes'], rec['meshes'] = len(gltf.nodes) - n0, len(gltf.meshes) - m0
    finish('LOADED')

def traverse_x3d_node(xml_node, parent_idx, ctx, scope, skin_group=None, current_displacers=None):
    gltf = ctx.gltf
    tag = xml_node.tag
    if current_displacers is None:
        current_displacers = []

    def attach(child_idx):
        if parent_idx is not None:
            p = gltf.nodes[parent_idx]
            if p.children is None: p.children = []
            if child_idx not in p.children: p.children.append(child_idx)

    if _should_skip_invisible(xml_node, scope):
        ctx.invisible_skipped += 1
        return

    if tag.startswith('Metadata') and tag in ('MetadataSet', 'MetadataString', 'MetadataInteger', 'MetadataFloat', 'MetadataDouble', 'MetadataBoolean'):
        if parent_idx is not None and 0 <= parent_idx < len(gltf.nodes):
            p = gltf.nodes[parent_idx]
            if p.extras is None: p.extras = {}
            k, v = parse_metadata_node(xml_node)
            p.extras[k] = v
        return

    if tag in IGNORED_BEHAVIOUR_TAGS:
        _preserve_behavior(ctx, scope, xml_node, "behavior")
        return

    if tag in ('CylinderSensor', 'PlaneSensor', 'StringSensor'):
        sensor_def = xml_node.get('DEF')
        sensor_idx = len(gltf.nodes)
        sensor_name = scope.prefix + (sensor_def or f'{tag}_{sensor_idx}')
        node = Node(name=sensor_name, children=[], extras=_sensor_extras(tag, xml_node))
        # X3D sensor nodes are event producers, not visible geometry.
        tag_node_interactivity(node, selectable=True)
        gltf.nodes.append(node)
        attach(sensor_idx)
        if sensor_def:
            ctx.def_to_node_idx[scope.prefix + sensor_def] = sensor_idx
            ctx.def_to_node_idx[sensor_def] = sensor_idx
        ctx.sensor_nodes.append({'type': tag, 'def': sensor_def, 'node_idx': sensor_idx,
                                 'parent_idx': parent_idx, 'attributes': dict(xml_node.attrib),
                                 'scope': scope.prefix})
        ctx.behavior.append({
            'type': tag, 'DEF': sensor_def, 'scope': scope.prefix,
            'attributes': dict(xml_node.attrib),
            'translation': 'runtime input adapter required'
        })
        return

    if tag == 'Script':
        script_def = xml_node.get('DEF')
        script_idx = len(gltf.nodes)
        script_name = scope.prefix + (script_def or f'Script_{script_idx}')
        script_meta = _x3d_script_metadata(xml_node)
        node = Node(name=script_name, children=[], extras={'x3d_script': script_meta})
        gltf.nodes.append(node)
        attach(script_idx)
        if script_def:
            ctx.def_to_node_idx[scope.prefix + script_def] = script_idx
            ctx.def_to_node_idx[script_def] = script_idx
        ctx.behavior.append({
            'type': 'Script', 'DEF': script_def, 'scope': scope.prefix,
            'translated': False,
            'reason': 'Script source and field declarations preserved; only statically mappable event logic is eligible for KHR_interactivity translation.',
            'fields': script_meta['fields']
        })
        return

    if tag == 'ProximitySensor':
        sensor_def = xml_node.get('DEF')
        enabled = xml_node.get('enabled', 'true').strip().lower() not in ('false', '0')
        center = parse_array(xml_node.get('center', '0 0 0'), default=[0.0, 0.0, 0.0])
        size = parse_array(xml_node.get('size', '0 0 0'), default=[0.0, 0.0, 0.0])

        sensor_idx = len(gltf.nodes)
        scale_val = [max(1e-6, float(s)) for s in size]
        sensor_name = scope.prefix + (sensor_def or f"ProximitySensor_{sensor_idx}")

        gltf.nodes.append(Node(
            name=sensor_name,
            translation=[float(x) for x in center],
            scale=scale_val,
            extras={"x3d_proximitySensor": {"size": size, "center": center, "enabled": enabled}}
        ))
        attach(sensor_idx)
        if sensor_def:
            ctx.def_to_node_idx[scope.prefix + sensor_def] = sensor_idx
            ctx.def_to_node_idx[sensor_def] = sensor_idx

        ctx.proximity_sensors.append({
            "def": scope.prefix + sensor_def if sensor_def else sensor_name,
            "node_idx": sensor_idx,
            "size": size,
            "center": center,
            "enabled": enabled,
            "scope": scope,
            "xml_node": xml_node
        })
        _preserve_behavior(ctx, scope, xml_node, "proximity_sensor")
        return

    if tag == 'LayerSet':
        order = parse_array(xml_node.get('order', ''), int)
        active_layer = int(xml_node.get('activeLayer', '0'))
        def_name = xml_node.get('DEF')
        layer_set_idx = len(gltf.nodes)
        layer_set_name = scope.prefix + (def_name or f"LayerSet_{layer_set_idx}")

        gltf.nodes.append(Node(
            name=layer_set_name,
            children=[],
            extras={"x3d_layerSet": {"order": order, "activeLayer": active_layer}}
        ))
        attach(layer_set_idx)
        if def_name:
            ctx.def_to_node_idx[scope.prefix + def_name] = layer_set_idx
            ctx.def_to_node_idx[def_name] = layer_set_idx

        ctx.layer_sets.append({
            "name": layer_set_name,
            "node_idx": layer_set_idx,
            "order": order,
            "activeLayer": active_layer
        })
        for child in xml_node:
            traverse_x3d_node(child, layer_set_idx, ctx, scope, skin_group, current_displacers)
        return

    if tag == 'Layer':
        is_pickable = xml_node.get('isPickable', 'true').strip().lower() not in ('false', '0')
        def_name = xml_node.get('DEF')
        layer_idx = len(gltf.nodes)
        layer_name = scope.prefix + (def_name or f"Layer_{layer_idx}")

        layer_order_pos = len(ctx.layers)
        if ctx.layer_sets and ctx.layer_sets[-1].get('order'):
            orders = ctx.layer_sets[-1]['order']
            if layer_order_pos < len(orders):
                layer_order_pos = orders[layer_order_pos]

        layer_node = Node(
            name=layer_name,
            children=[],
            extras={
                "x3d_layer": {
                    "isPickable": is_pickable,
                    "order": layer_order_pos,
                    "name": layer_name
                },
                "renderingGroupId": layer_order_pos
            }
        )
        tag_node_interactivity(layer_node, selectable=is_pickable)
        gltf.nodes.append(layer_node)
        attach(layer_idx)
        if def_name:
            ctx.def_to_node_idx[scope.prefix + def_name] = layer_idx
            ctx.def_to_node_idx[def_name] = layer_idx

        ctx.layers.append({
            "name": layer_name,
            "node_idx": layer_idx,
            "isPickable": is_pickable,
            "order": layer_order_pos,
            "scope": scope
        })
        for child in xml_node:
            traverse_x3d_node(child, layer_idx, ctx, scope, skin_group, current_displacers)
        return

    if tag == 'HAnimSegment':
        current_displacers = get_local_displacers(xml_node)

    if tag in ('ProtoDeclare', 'ExternProtoDeclare', 'ProtoInterface', 'ProtoBody', 'field', 'fieldValue', 'IS', 'connect'):
        _preserve_behavior(ctx, scope, xml_node, "prototype")
        return

    if tag in ('IntegerSequencer', 'BooleanToggle'):
        _preserve_behavior(ctx, scope, xml_node, "sequencer" if tag == 'IntegerSequencer' else "filter")
        return

    if tag == 'ProtoInstance':
        use = xml_node.get('USE')
        if use:
            key = scope.prefix + use
            source_idx = ctx.def_to_node_idx.get(key)
            if source_idx is not None:
                clone_idx = _clone_gltf_subtree(gltf, source_idx)
                attach(clone_idx)
                return
            ctx.note_use(tag, scope, xml_node)
            return

        proto_name = xml_node.get('name')
        proto_decl = _find_proto(proto_name, scope, ctx)
        if proto_decl is None:
            ctx.note_unhandled(tag, f"ProtoDeclare '{proto_name}' not found", scope, xml_node)
            return

        proto_body = proto_decl.find('ProtoBody')
        if proto_body is None: return

        body_clone = copy.deepcopy(proto_body)
        extern_base = ctx.extern_proto_base.get(id(proto_decl))
        if extern_base is not None: _absolutize_urls(body_clone, extern_base)
        field_vals, field_nodes = {}, {}
        p_interface = proto_decl.find('ProtoInterface')
        if p_interface is not None:
            for f in p_interface.findall('field'):
                fname = f.get('name')
                if fname:
                    val = f.get('value')
                    if val is not None: field_vals[fname] = val
                    ch_list = [ch for ch in f if ch.tag not in ('IS', 'connect')]
                    if ch_list: field_nodes[fname] = ch_list

        for fv in xml_node.findall('fieldValue'):
            fname = fv.get('name')
            if fname:
                val = fv.get('value')
                if val is not None: field_vals[fname] = val
                ch_list = [ch for ch in fv if ch.tag not in ('IS', 'connect')]
                if ch_list: field_nodes[fname] = ch_list

        parent_map = {c: p for p in body_clone.iter() for c in p}
        for is_el in list(body_clone.iter('IS')):
            parent_el = parent_map.get(is_el)
            if parent_el is None: continue
            for conn in is_el.findall('connect'):
                node_field = conn.get('nodeField')
                proto_field = conn.get('protoField')
                if not node_field or not proto_field: continue
                if proto_field in field_vals: parent_el.set(node_field, field_vals[proto_field])
                if proto_field in field_nodes:
                    for nd in field_nodes[proto_field]: parent_el.append(copy.deepcopy(nd))
            try: parent_el.remove(is_el)
            except ValueError: pass

        for el in body_clone.iter():
            if el.get('DEF'): scope.def_map[el.get('DEF')] = el

        for r in body_clone.iter('ROUTE'): scope.root.append(r)

        inst_def = xml_node.get('DEF')
        if inst_def:
            wrapper = ET.Element('Group', {'DEF': inst_def})
            for ch in body_clone: wrapper.append(ch)
            traverse_x3d_node(wrapper, parent_idx, ctx, scope, skin_group, current_displacers)
        else:
            for ch in body_clone: traverse_x3d_node(ch, parent_idx, ctx, scope, skin_group, current_displacers)
        return

    if tag in ('Inline', 'InlineGeometry'):
        _handle_inline(xml_node, parent_idx, ctx, scope, current_displacers)
        return

    if tag == 'TouchSensor':
        sensor_def = xml_node.get('DEF')
        if parent_idx is not None and 0 <= parent_idx < len(gltf.nodes):
            tag_node_interactivity(gltf.nodes[parent_idx], selectable=True, hoverable=True)
            if sensor_def: ctx.def_to_node_idx[scope.prefix + sensor_def] = parent_idx
        _preserve_behavior(ctx, scope, xml_node, "sensor")
        return

    if tag == 'Viewpoint' and ctx.bone_mode and ctx.current_bone is not None:
        wrapper = gltf.nodes[ctx.current_bone['node_idx']]
        if wrapper.extras is None: wrapper.extras = {}
        wrapper.extras.setdefault('x3d_viewpoints', []).append({
            'name': xml_node.get('DEF') or xml_node.get('description') or 'Viewpoint',
            'position': parse_array(xml_node.get('position', '0 0 10')),
            'orientation': parse_array(xml_node.get('orientation', '0 0 1 0'))})
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
        if xml_node.get('DEF'): ctx.def_to_node_idx[scope.prefix + xml_node.get('DEF')] = node_idx
        return

    if tag == 'Switch':
        choice = int(xml_node.get('whichChoice', '-1'))
        children = list(xml_node)
        switch_idx = len(gltf.nodes)
        gltf.nodes.append(Node(name=scope.prefix + xml_node.get('DEF', f"Switch_{switch_idx}"), children=[]))
        attach(switch_idx)

        for i, child_el in enumerate(children):
            c_idx = len(gltf.nodes)
            traverse_x3d_node(child_el, switch_idx, ctx, scope, skin_group, current_displacers)
            if c_idx < len(gltf.nodes):
                is_active = (i == choice)
                tag_node_interactivity(gltf.nodes[c_idx], visible=is_active)
        _preserve_behavior(ctx, scope, xml_node, "switch")
        return

    if tag == 'Billboard':
        axis = parse_array(xml_node.get('axisOfRotation', '0 1 0'), default=[0.0, 1.0, 0.0])
        b_idx = len(gltf.nodes)
        b_name = scope.prefix + xml_node.get('DEF', f"Billboard_{b_idx}")
        gltf.nodes.append(Node(
            name=b_name,
            children=[],
            extras={"x3d_billboard": {"axisOfRotation": axis}}
        ))
        attach(b_idx)
        if xml_node.get('DEF'): ctx.def_to_node_idx[scope.prefix + xml_node.get('DEF')] = b_idx
        for child in xml_node: traverse_x3d_node(child, b_idx, ctx, scope, skin_group, current_displacers)
        return

    if tag in STRUCTURAL_TAGS:
        use = xml_node.get('USE')
        if use:
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
                traverse_x3d_node(source, parent_idx, ctx, scope, skin_group, current_displacers)
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
            rotation=axis_angle_to_quat(*parse_array(xml_node.get('rotation'), default=[0,1,0,0])),
            scale=parse_array(xml_node.get('scale'), default=[1,1,1]),
            children=[]
        ))
        if key: ctx.def_to_node_idx[key] = outer_idx
        ctx.node_to_center[outer_idx] = c
        attach(outer_idx)

        if ctx.bone_mode and ctx.current_bone is not None and xml_node.get('DEF') == 'CenterOfRotationForJoint':
            outer = gltf.nodes[outer_idx]
            on_scale = [float(v) for v in (outer.scale or [1.0, 1.0, 1.0])]
            outer.scale = [0.0, 0.0, 0.0]
            outer.extras = {"x3d_axes": {"on_scale": on_scale}}
            tag_node_interactivity(outer, selectable=False, hoverable=False)

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
            group = SkinGroup(key or f"{scope.prefix}Humanoid_{outer_idx}", scope, sc_name)
            group.inner_idx = inner_idx
            group.joint_displacers = collect_skin_displacers(xml_node, scope.def_map)
            ctx.skin_groups.append(group)

        if tag == 'HAnimJoint' and key:
            skin_idx = parse_array(xml_node.get('skinCoordIndex', ''), int, default=[])
            skin_wgt = parse_array(xml_node.get('skinCoordWeight', ''), float, default=[])
            if skin_idx:
                if group is not None:
                    valid_infl = []
                    for i, idx_val in enumerate(skin_idx):
                        w_val = float(skin_wgt[i]) if i < len(skin_wgt) else 1.0
                        if w_val > 1e-6:
                            valid_infl.append((idx_val, w_val))
                    group.joint_skinning[key] = valid_infl
                else:
                    ctx.note_unhandled('HAnimJoint', 'skinCoordIndex outside humanoid', scope, xml_node)

        for child in xml_node:
            traverse_x3d_node(child, inner_idx, ctx, scope, group, current_displacers)
        return

    if tag == 'Shape':
        use = xml_node.get('USE')
        if use:
            mesh_idx = ctx.def_to_mesh.get(scope.prefix + use) or ctx.def_to_mesh.get(use)
            source_idx = ctx.def_to_shape_node.get(scope.prefix + use) or ctx.def_to_shape_node.get(use)

            if mesh_idx is None and source_idx is None:
                source = scope.def_map.get(use)
                if source is None:
                    for s in ctx.scopes:
                        if use in s.def_map: source = s.def_map[use]; break
                if source is not None and source is not xml_node:
                    traverse_x3d_node(source, None, ctx, scope, skin_group, current_displacers)
                    mesh_idx = ctx.def_to_mesh.get(scope.prefix + use) or ctx.def_to_mesh.get(use)
                    source_idx = ctx.def_to_shape_node.get(scope.prefix + use) or ctx.def_to_shape_node.get(use)

            if mesh_idx is not None:
                shape_idx = len(gltf.nodes)
                shape_name = scope.prefix + (xml_node.get('DEF') or use)
                gltf.nodes.append(Node(name=shape_name, mesh=mesh_idx))
                attach(shape_idx)
                if ctx.bone_mode and ctx.current_bone is not None and skin_group is None:
                    _bone_register_shape(ctx, shape_idx, mesh_idx, attach, shape_name)
                return
            if source_idx is not None:
                clone_idx = _clone_gltf_subtree(gltf, source_idx)
                attach(clone_idx)
                return
            ctx.note_use(tag, scope, xml_node)
            return

        text_node = xml_node.find('.//Text')
        local_skin = []
        mesh_to_mtd = {}
        if text_node is not None:
            mesh_idx = process_text_primitives(text_node, xml_node.find('.//Appearance'), gltf, ctx.bin_blob,
                                               scope.def_map, ctx.mat_list, scope.base)
        else:
            shape_disps = current_displacers
            if skin_group is not None and skin_group.joint_displacers:
                _sc = xml_node.find('.//Coordinate')
                _sc_name = (_sc.get('DEF') or _sc.get('USE')) if _sc is not None else None
                if _sc_name and _sc_name == skin_group.skincoord_name:
                    shape_disps = list(current_displacers) + [d for d in skin_group.joint_displacers
                                                              if d not in current_displacers]
            mesh_idx = process_mesh_primitives([xml_node], gltf, ctx.bin_blob, scope.def_map, ctx.mat_list,
                                               scope.base, local_skin, shape_disps, ctx, mesh_to_mtd)

        for el in xml_node.iter():
            if el is xml_node or _shape_children_consumed(el): continue
            ctx.note_unhandled(el.tag, 'inside Shape', scope, el)

        if mesh_idx is not None:
            shape_idx = len(gltf.nodes)
            shape_name = scope.prefix + xml_node.get('DEF', f"Shape_{shape_idx}")
            gltf.nodes.append(Node(name=shape_name, mesh=mesh_idx))
            attach(shape_idx)
            ctx.mesh_to_node[mesh_idx] = shape_idx
            if xml_node.get('DEF'):
                ctx.def_to_shape_node[scope.prefix + xml_node.get('DEF')] = shape_idx
                ctx.def_to_mesh[scope.prefix + xml_node.get('DEF')] = mesh_idx

            if mesh_idx in mesh_to_mtd:
                ctx.node_to_morph_targets[shape_idx] = mesh_to_mtd[mesh_idx]

            if ctx.bone_mode and ctx.current_bone is not None and text_node is None and skin_group is None:
                _bone_register_shape(ctx, shape_idx, mesh_idx, attach, shape_name)
            if local_skin:
                if skin_group is not None: skin_group.meshes.extend(local_skin)
                else:
                    coord = xml_node.find('.//Coordinate')
                    cname = (coord.get('DEF') or coord.get('USE')) if coord is not None else None
                    ctx.orphan_shapes.append((scope, cname, local_skin))
        return

    if tag in ('WorldInfo', 'NavigationInfo', 'Background', 'AudioClip', 'Sound', 'LoadSensor', 'DirectionalLight', 'PointLight', 'SpotLight'):
        _preserve_behavior(ctx, scope, xml_node, "scene")
        return

    if tag == 'component':
        _preserve_behavior(ctx, scope, xml_node, "component")
        return

    if tag in ('ColorRGBA', 'LineProperties', 'Appearance', 'Material', 'ImageTexture', 'TextureTransform', 'Coordinate', 'TextureCoordinate', 'Normal', 'FontStyle'):
        return

    if tag not in HANDLED_TAGS:
        ctx.note_unhandled(tag, 'Unhandled tag (children still traversed)', scope, xml_node)

    for child in xml_node:
        traverse_x3d_node(child, parent_idx, ctx, scope, skin_group, current_displacers)

# ---------------------------------------------------------------------------
# Animation & Morph Weight Evaluation
# ---------------------------------------------------------------------------

def sanitize_animation_tracks(keys, vals, eps=1e-5):
    if len(keys) < 2: return keys, vals

    clean_keys = [float(keys[0])]
    clean_vals = [vals[0]]

    for i in range(1, len(keys)):
        k = float(keys[i])
        v = vals[i]
        prev_k = clean_keys[-1]

        if k <= prev_k:
            if np.allclose(v, clean_vals[-1], atol=1e-6):
                continue
            next_k = float(keys[i + 1]) if (i + 1 < len(keys)) else None
            nudge = min(eps, (next_k - prev_k) * 0.5) if (next_k is not None and next_k > prev_k) else eps
            k = prev_k + nudge

        clean_keys.append(k)
        clean_vals.append(v)

    if len(clean_keys) < 2: return keys, vals
    return np.asarray(clean_keys, dtype=np.float32), np.asarray(clean_vals, dtype=vals.dtype)

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
    keys = parse_array(interp.get('key', ''), float)
    kvs = parse_array(interp.get('keyValue', ''), float)
    if not keys or not kvs: return 0.0
    weights = get_interp_weights(keys, k_val)
    return float(sum(kvs[idx] * w for idx, w in weights.items() if idx < len(kvs)))

def find_driving_timesensor(node, ctx, visited=None):
    if visited is None: visited = set()
    node_id = id(node)
    if node_id in visited: return None
    visited.add(node_id)

    incoming = ctx.get_incoming_routes(node)
    for src_node, _src_field in incoming:
        if src_node.tag == 'TimeSensor':
            return src_node
        ts = find_driving_timesensor(src_node, ctx, visited)
        if ts is not None:
            return ts
    return None

def _eval_interp_vec(interp, k_val, ncomp):
    keys = parse_array(interp.get('key', ''), float)
    kvs = parse_array(interp.get('keyValue', ''), float)
    if not keys or len(kvs) < len(keys) * ncomp: return None
    w = get_interp_weights(keys, k_val)
    return [sum(kvs[i * ncomp + c] * wt for i, wt in w.items()) for c in range(ncomp)]

def convert_texture_transform_animations(ctx, scope, consumed):
    """Animate TextureTransform via KHR_animation_pointer on KHR_texture_transform.

    ScalarInterpolator -> rotation; PositionInterpolator2D -> translation, scale
    or center.  Because the glTF offset depends on all four X3D fields, every
    animated field is sampled on the union of the interpolators' keys and the
    resulting offset (plus rotation / scale when they change) is baked per key.

    Rotation is emitted as a scalar KHR_animation_pointer channel, matching
    X3D ScalarInterpolator semantics.  This supports JoeKick's KickTimer ->
    SkinInterpolator -> KickTextureTransform.rotation route without replacing
    the source texture with a frame-by-frame image sequence.
    """
    gltf, bin_blob = ctx.gltf, ctx.bin_blob
    field_alias = {'rotation': 'rotation', 'set_rotation': 'rotation',
                   'translation': 'translation', 'set_translation': 'translation',
                   'scale': 'scale', 'set_scale': 'scale',
                   'center': 'center', 'set_center': 'center'}
    expected_tag = {'rotation': ('ScalarInterpolator', 1),
                    'translation': ('PositionInterpolator2D', 2),
                    'scale': ('PositionInterpolator2D', 2),
                    'center': ('PositionInterpolator2D', 2)}

    for tt in scope.root.iter('TextureTransform'):
        tt_def = tt.get('DEF')
        mats = _TT_MATERIALS.get(id(tt))
        if not tt_def or not mats: continue

        # field -> (interp element, route element), grouped by driving TimeSensor
        by_ts = {}
        for r in scope.root.findall('.//ROUTE'):
            if r.get('toNode') != tt_def or r.get('fromField') != 'value_changed': continue
            fld = field_alias.get(r.get('toField'))
            interp = scope.def_map.get(r.get('fromNode'))
            if fld is None or interp is None: continue
            tag, _n = expected_tag[fld]
            if interp.tag != tag: continue
            ts = find_driving_timesensor(interp, ctx)
            if ts is None or not ts.get('DEF'): continue
            by_ts.setdefault(ts.get('DEF'), (ts, {}))[1][fld] = (interp, r)

        for ts_def, (ts, fields) in by_ts.items():
            cycle = float(ts.get('cycleInterval', '1.0'))
            keys_union = set()
            for interp, _r in fields.values():
                keys_union.update(parse_array(interp.get('key', ''), float))
            sorted_keys = sorted(keys_union)
            if len(sorted_keys) < 2: continue

            st_trans = parse_array(tt.get('translation', '0 0'), default=[0.0, 0.0])
            st_scale = parse_array(tt.get('scale', '1 1'), default=[1.0, 1.0])
            st_rot = float(tt.get('rotation', '0'))
            st_center = parse_array(tt.get('center', '0 0'), default=[0.0, 0.0])

            offs, rots, scls = [], [], []
            for k in sorted_keys:
                trans, scale, center, rot = st_trans, st_scale, st_center, st_rot
                if 'rotation' in fields:
                    v = _eval_interp_vec(fields['rotation'][0], k, 1)
                    if v is not None: rot = v[0]
                for name in ('translation', 'scale', 'center'):
                    if name in fields:
                        v = _eval_interp_vec(fields[name][0], k, 2)
                        if v is not None:
                            if name == 'translation': trans = v
                            elif name == 'scale': scale = v
                            else: center = v
                k_off, k_scl, k_rot = _x3d_tt_to_khr(trans, scale, rot, center)
                offs.append(k_off); scls.append(k_scl); rots.append(k_rot)

            time_keys = np.asarray(sorted_keys, dtype=np.float32) * cycle
            acc_t = add_accessor(gltf, bin_blob, time_keys, SCALAR, FLOAT, target=None, add_min_max=True)
            tracks = [('offset', np.asarray(offs, dtype=np.float32), VEC2)]
            if 'rotation' in fields:
                tracks.append(('rotation', np.asarray(rots, dtype=np.float32), SCALAR))
            if 'scale' in fields:
                tracks.append(('scale', np.asarray(scls, dtype=np.float32), VEC2))

            anim_name = f"Anim_{scope.prefix}{ts_def}"
            anim = next((a for a in gltf.animations if a.name == anim_name), None)
            if anim is None:
                anim = Animation(name=anim_name, samplers=[], channels=[])
                anim.extras = {"duration": float(time_keys.max())}
                gltf.animations.append(anim)
            if not isinstance(anim.extras, dict): anim.extras = {}
            anim.extras['duration'] = max(float(anim.extras.get('duration', 0.0)), float(time_keys.max()))

            for prop, arr, a_type in tracks:
                acc_v = add_accessor(gltf, bin_blob, arr, a_type, FLOAT, target=None, add_min_max=False)
                s_idx = len(anim.samplers)
                anim.samplers.append(AnimationSampler(input=acc_t, output=acc_v, interpolation="LINEAR"))
                for m_idx in mats:
                    ptr = (f"/materials/{m_idx}/pbrMetallicRoughness/baseColorTexture/"
                           f"extensions/KHR_texture_transform/{prop}")
                    anim.channels.append(AnimationChannel(
                        sampler=s_idx,
                        target=AnimationChannelTarget(path="pointer",
                                                      extensions={"KHR_animation_pointer": {"pointer": ptr}})))

            for _fld, (interp, r_el) in fields.items():
                consumed.add(id(r_el))
                for r in scope.root.findall('.//ROUTE'):
                    if r.get('toNode') == interp.get('DEF') and r.get('fromNode') == ts_def:
                        consumed.add(id(r))

def convert_animations(ctx):
    gltf = ctx.gltf
    bin_blob = ctx.bin_blob
    def_to_node_idx = ctx.def_to_node_idx
    node_to_center = ctx.node_to_center

    target_path_map = {
        'translation': 'translation', 'set_translation': 'translation',
        'position': 'translation',    'set_position': 'translation',
        'rotation': 'rotation',       'set_rotation': 'rotation',
        'orientation': 'rotation',    'set_orientation': 'rotation',
        'scale': 'scale',             'set_scale': 'scale',
        'weight': 'weights',          'set_weight': 'weights',
        'weights': 'weights',         'set_weights': 'weights'
    }

    scope_audits = []
    for scope in ctx.scopes:
        imports = _build_imports(scope, ctx)
        consumed, used_defs = set(), set()

        def lookup(name):
            return def_to_node_idx.get(imports.get(name, scope.prefix + name))

        routes = {}
        for route in scope.root.findall('.//ROUTE'):
            routes.setdefault((route.get('fromNode'), route.get('fromField')), []).append((route.get('toNode'), route.get('toField'), route))

        all_interps = {
            node.get('DEF'): node
            for tag in ('PositionInterpolator', 'OrientationInterpolator', 'ScalarInterpolator')
            for node in scope.root.findall(f'.//{tag}') if node.get('DEF')
        }

        for ts in scope.root.findall('.//TimeSensor'):
            ts_def = ts.get('DEF')
            if not ts_def: continue
            cycle = float(ts.get('cycleInterval', '1.0'))
            driven = [(all_interps[to_node], r_el)
                      for out_field in ('fraction_changed', 'cycleTime', 'time')
                      for (to_node, to_field, r_el) in routes.get((ts_def, out_field), [])
                      if to_field == 'set_fraction' and to_node in all_interps]

            samplers, channels = [], []
            seen_targets = set()
            anim_max_time = 0.0

            for interp, ts_route in driven:
                targets = routes.get((interp.get('DEF'), 'value_changed'), [])
                raw_keys = parse_array(interp.get('key', ''))
                kv_raw = parse_array(interp.get('keyValue', ''))
                if not targets or len(raw_keys) < 2 or not kv_raw: continue

                keys = np.array(raw_keys, dtype=np.float32) * cycle
                made_any = False

                for (to_node, to_field, r_el) in targets:
                    node_idx = lookup(to_node)
                    if node_idx is None: continue
                    gltf_path = target_path_map.get(to_field)
                    if not gltf_path: continue

                    if (node_idx, gltf_path) in seen_targets: continue
                    seen_targets.add((node_idx, gltf_path))

                    if interp.tag == 'OrientationInterpolator':
                        raw_quats = [axis_angle_to_quat(*row) for row in np.array(kv_raw, dtype=np.float64).reshape(-1, 4)]
                        for k in range(1, len(raw_quats)):
                            if sum(a * b for a, b in zip(raw_quats[k-1], raw_quats[k])) < 0.0:
                                raw_quats[k] = [-x for x in raw_quats[k]]
                        vals = np.array(raw_quats, dtype=np.float32)
                        out_type = VEC4
                    elif interp.tag == 'ScalarInterpolator':
                        vals = np.array(kv_raw, dtype=np.float32).reshape(len(keys), -1)
                        out_type = SCALAR if vals.shape[1] == 1 else VEC2
                    else:
                        vals = np.array(kv_raw, dtype=np.float32).reshape(-1, 3)
                        if gltf_path == 'translation' and node_idx in node_to_center:
                            vals += node_to_center[node_idx]
                        out_type = VEC3

                    if len(vals) != len(keys): continue

                    cur_keys, cur_vals = sanitize_animation_tracks(keys, vals)
                    if len(cur_keys) < 2: continue
                    anim_max_time = max(anim_max_time, float(cur_keys.max()))

                    acc_t = add_accessor(gltf, bin_blob, cur_keys, SCALAR, FLOAT, target=None, add_min_max=True)
                    acc_v = add_accessor(gltf, bin_blob, cur_vals, out_type, FLOAT, target=None, add_min_max=False)

                    samplers.append(AnimationSampler(input=acc_t, output=acc_v, interpolation="LINEAR"))
                    channels.append(AnimationChannel(sampler=len(samplers)-1, target=AnimationChannelTarget(node=node_idx, path=gltf_path)))
                    consumed.add(id(r_el)); made_any = True

                if made_any:
                    consumed.add(id(ts_route)); used_defs.update((ts_def, interp.get('DEF')))

            if channels:
                anim = Animation(name=f"Anim_{scope.prefix}{ts_def}", samplers=samplers, channels=channels)
                anim.extras = {"duration": anim_max_time or cycle}
                gltf.animations.append(anim)

        convert_texture_transform_animations(ctx, scope, consumed)
        scope_audits.append((scope, consumed, used_defs))

    # --- Convert Morph Weight Animations (CoordinateInterpolator & HAnimDisplacer) ---
    morph_interp_defs, morph_disp_defs, morph_ts_defs = set(), set(), set()
    for node_idx, mtd_list in ctx.node_to_morph_targets.items():
        driving_interps = set()
        for mtd in mtd_list:
            if mtd['type'] == 'coord_interp':
                driving_interps.add(mtd['node'])
            elif mtd['type'] == 'displacer':
                for src_node, _fld in ctx.get_incoming_routes(mtd['node'], ['weight', 'set_weight']):
                    driving_interps.add(src_node)

        if not driving_interps: continue

        time_sensor = None
        for interp in driving_interps:
            ts = find_driving_timesensor(interp, ctx)
            if ts is not None:
                time_sensor = ts
                break

        if time_sensor is None: continue

        cycle = float(time_sensor.get('cycleInterval', '1.0'))
        all_keys = set()
        for interp in driving_interps:
            for k in parse_array(interp.get('key', ''), float):
                all_keys.add(k)

        sorted_keys = sorted(list(all_keys))
        if len(sorted_keys) < 2: continue

        time_keys = np.asarray(sorted_keys, dtype=np.float32) * cycle
        for k_i in range(1, len(time_keys)):
            if time_keys[k_i] <= time_keys[k_i-1]:
                time_keys[k_i] = time_keys[k_i-1] + 1e-5

        weights_data = []
        for k_val in sorted_keys:
            for mtd in mtd_list:
                w = 0.0
                if mtd['type'] == 'displacer':
                    anim_interp = next((src for src, _fld in ctx.get_incoming_routes(mtd['node'], ['weight', 'set_weight']) if src in driving_interps), None)
                    if anim_interp is not None and anim_interp.tag == 'ScalarInterpolator':
                        w = evaluate_scalar_interp(anim_interp, k_val)
                    else:
                        w = float(mtd['node'].get('weight', '0'))
                elif mtd['type'] == 'coord_interp':
                    if mtd['node'] in driving_interps:
                        w = get_interp_weights(parse_array(mtd['node'].get('key', ''), float), k_val).get(mtd['key_idx'], 0.0)
                weights_data.append(w)

        weights_array = np.asarray(weights_data, dtype=np.float32)
        acc_t = add_accessor(gltf, bin_blob, time_keys, SCALAR, FLOAT, target=None, add_min_max=True)
        acc_w = add_accessor(gltf, bin_blob, weights_array, SCALAR, FLOAT, target=None, add_min_max=False)

        ts_def = time_sensor.get('DEF', f"TimeSensor_{id(time_sensor)}")
        anim_name = f"Anim_{ts_def}"
        anim = next((a for a in gltf.animations if a.name == anim_name), None)
        if not anim:
            anim = Animation(name=anim_name, samplers=[], channels=[])
            anim.extras = {"duration": float(time_keys.max())}
            gltf.animations.append(anim)
        else:
            if hasattr(anim, 'extras') and isinstance(anim.extras, dict):
                anim.extras['duration'] = max(anim.extras.get('duration', 0.0), float(time_keys.max()))

        s_idx = len(anim.samplers)
        anim.samplers.append(AnimationSampler(input=acc_t, output=acc_w, interpolation="LINEAR"))
        anim.channels.append(AnimationChannel(sampler=s_idx, target=AnimationChannelTarget(node=node_idx, path="weights")))

        morph_ts_defs.add(time_sensor.get('DEF'))
        morph_interp_defs.update(i.get('DEF') for i in driving_interps if i.get('DEF'))
        morph_disp_defs.update(m['node'].get('DEF') for m in mtd_list
                               if m['type'] == 'displacer' and m['node'].get('DEF'))

    # Mark the ROUTEs that the morph-weight tracks above consumed, then audit.
    for scope, consumed, used_defs in scope_audits:
        for r in scope.root.findall('.//ROUTE'):
            fn, tn, tf = r.get('fromNode'), r.get('toNode'), r.get('toField')
            if tn in morph_disp_defs and tf in ('weight', 'set_weight') and fn in morph_interp_defs:
                consumed.add(id(r))
            elif tn in morph_interp_defs and tf == 'set_fraction' and fn in morph_ts_defs:
                consumed.add(id(r))
            elif tn in morph_interp_defs and tf == 'set_point':
                consumed.add(id(r))
        _audit_animation(scope, ctx, consumed, used_defs)

def generate_viewpoint_animations(ctx, duration_per_view=3.0):
    gltf, bin_blob = ctx.gltf, ctx.bin_blob
    camera_nodes = [(idx, node) for idx, node in enumerate(gltf.nodes) if getattr(node, 'camera', None) is not None]
    if len(camera_nodes) < 1: return

    active_cam_idx, active_cam_node = camera_nodes[0]
    home_pos = active_cam_node.translation or [0.0, 0.0, 10.0]
    home_rot = active_cam_node.rotation or [0.0, 0.0, 0.0, 1.0]

    for target_idx, target_node in camera_nodes:
        if target_idx == active_cam_idx: continue
        vp_name = target_node.name or f"Viewpoint_{target_idx}"
        target_pos = target_node.translation or [0.0, 0.0, 10.0]
        target_rot = list(target_node.rotation or [0.0, 0.0, 0.0, 1.0])
        if sum(a * b for a, b in zip(home_rot, target_rot)) < 0.0:
            target_rot = [-x for x in target_rot]

        times = np.array([0.0, duration_per_view], dtype=np.float32)
        pos_data = np.array([home_pos, target_pos], dtype=np.float32)
        rot_data = np.array([home_rot, target_rot], dtype=np.float32)

        time_acc = add_accessor(gltf, bin_blob, times, SCALAR, FLOAT, target=None, add_min_max=True)
        pos_acc = add_accessor(gltf, bin_blob, pos_data, VEC3, FLOAT, target=None)
        rot_acc = add_accessor(gltf, bin_blob, rot_data, VEC4, FLOAT, target=None)

        samplers = [AnimationSampler(input=time_acc, output=pos_acc, interpolation="LINEAR"),
                    AnimationSampler(input=time_acc, output=rot_acc, interpolation="LINEAR")]
        channels = [AnimationChannel(sampler=0, target=AnimationChannelTarget(node=active_cam_idx, path="translation")),
                    AnimationChannel(sampler=1, target=AnimationChannelTarget(node=active_cam_idx, path="rotation"))]
        anim = Animation(name=f"Anim_FlyTo_{vp_name}", samplers=samplers, channels=channels)
        anim.extras = {"duration": float(duration_per_view)}
        gltf.animations.append(anim)

    if len(camera_nodes) > 1:
        tour_times, tour_pos, tour_rot = [], [], []
        t_cursor = 0.0
        prev_q = None

        for _, node in camera_nodes:
            pos = node.translation or [0.0, 0.0, 10.0]
            rot = list(node.rotation or [0.0, 0.0, 0.0, 1.0])
            if prev_q is not None and sum(a * b for a, b in zip(prev_q, rot)) < 0.0:
                rot = [-x for x in rot]
            prev_q = rot
            tour_times.append(t_cursor)
            tour_pos.append(pos)
            tour_rot.append(rot)
            t_cursor += duration_per_view

        tour_times = np.array(tour_times, dtype=np.float32)
        tour_pos = np.array(tour_pos, dtype=np.float32)
        tour_rot = np.array(tour_rot, dtype=np.float32)

        t_acc = add_accessor(gltf, bin_blob, tour_times, SCALAR, FLOAT, target=None, add_min_max=True)
        p_acc = add_accessor(gltf, bin_blob, tour_pos, VEC3, FLOAT, target=None)
        r_acc = add_accessor(gltf, bin_blob, tour_rot, VEC4, FLOAT, target=None)

        samplers = [AnimationSampler(input=t_acc, output=p_acc, interpolation="LINEAR"),
                    AnimationSampler(input=t_acc, output=r_acc, interpolation="LINEAR")]
        channels = [AnimationChannel(sampler=0, target=AnimationChannelTarget(node=active_cam_idx, path="translation")),
                    AnimationChannel(sampler=1, target=AnimationChannelTarget(node=active_cam_idx, path="rotation"))]
        anim = Animation(name="Anim_ViewpointTour", samplers=samplers, channels=channels)
        anim.extras = {"duration": float(tour_times.max())}
        gltf.animations.append(anim)

def _build_imports(scope, ctx):
    imports = {}
    for imp in scope.root.iter('IMPORT'):
        inline_def = imp.get('inlineDEF')
        exported_name = imp.get('exportedDEF') or imp.get('importedDEF')
        if not inline_def or not exported_name:
            continue
        child = scope.inline_children.get(inline_def)
        if child is None:
            continue
        local_def = child.export_map.get(exported_name)
        if local_def is None and exported_name in child.def_map:
            local_def = exported_name
        if local_def is None:
            continue
        visible_name = imp.get('AS') or exported_name
        imports[visible_name] = child.prefix + local_def
    return imports

def _parse_hanim_motion_channels(channels):
    if not channels: return []
    tokens = re.findall(r'([A-Za-z_][\w.-]*)\s*(?:\[\s*|\s+)(translation|rotation|scale)\s*\]?', channels)
    if tokens: return [(j, f, 4 if f == 'rotation' else 3) for j, f in tokens]

    raw = re.sub(r'[\[\],]', ' ', channels).split()
    out, i = [], 0
    while i + 1 < len(raw):
        if raw[i+1] in ('translation', 'rotation', 'scale'):
            f = raw[i+1]
            out.append((raw[i], f, 4 if f == 'rotation' else 3))
            i += 2
        else: i += 1
    return out

def convert_hanim_motions(scope, gltf, bin_blob, def_to_node_idx, node_to_center, prefix=''):
    used = set()
    for motion in scope.root.findall('.//HAnimMotion'):
        values = np.asarray(parse_array(motion.get('values', '')), dtype=np.float32)
        channels = _parse_hanim_motion_channels(motion.get('channels', ''))
        joints = parse_mfstring(motion.get('joints', '')) or motion.get('joints', '').replace(',', ' ').split()

        if not channels or not values.size: continue
        if len(channels) == 0 and joints: channels = [(j, 'rotation', 4) for j in joints]

        width = sum(w for _, _, w in channels)
        if width <= 0 or len(values) < width: continue
        frame_count = len(values) // width
        values = values[:frame_count * width].reshape(frame_count, width)

        dt = max(float(motion.get('frameDuration', '0.1')), 1e-9)
        times = (np.arange(len(values), dtype=np.float32) * dt)
        samplers, channels_out = [], []
        cursor = 0

        for ch_i, (joint, field, w) in enumerate(channels):
            data = values[:, cursor:cursor+w]
            cursor += w
            node_idx = def_to_node_idx.get(prefix + joint) or def_to_node_idx.get(joint)
            if node_idx is None: continue

            if field == 'rotation':
                out = np.asarray([axis_angle_to_quat(*row) for row in data], dtype=np.float32)
                path, typ = 'rotation', VEC4
            elif field == 'translation':
                out = data.astype(np.float32).copy()
                if node_idx in node_to_center: out += node_to_center[node_idx]
                path, typ = 'translation', VEC3
            else:
                out = data.astype(np.float32)
                path, typ = 'scale', VEC3

            t_acc = add_accessor(gltf, bin_blob, times, SCALAR, FLOAT, target=None, add_min_max=True)
            v_acc = add_accessor(gltf, bin_blob, out, typ, FLOAT, target=None)

            samplers.append(AnimationSampler(input=t_acc, output=v_acc, interpolation='LINEAR'))
            channels_out.append(AnimationChannel(sampler=len(samplers)-1, target=AnimationChannelTarget(node=node_idx, path=path)))

        if channels_out:
            name = motion.get('name') or motion.get('DEF') or 'HAnimMotion'
            anim = Animation(name=f"Anim_{prefix}{name}", samplers=samplers, channels=channels_out)
            anim.extras = {"duration": float(times.max()) if len(times) else 1.0}
            gltf.animations.append(anim)
            used.add(motion.get('DEF'))
    return used

def _audit_animation(scope, ctx, consumed, used_defs):
    for r in scope.root.findall('.//ROUTE'):
        if id(r) not in consumed:
            ctx.behavior.append({
                "type": "ROUTE", "file": scope.filename, "prefix": scope.prefix,
                "fromNode": r.get('fromNode'), "fromField": r.get('fromField'),
                "toNode": r.get('toNode'), "toField": r.get('toField'),
                "converted": False
            })

# ---------------------------------------------------------------------------
# KHR_interactivity Behavior Graph Generator
# ---------------------------------------------------------------------------

EXCLUSIVE_AUTOSTART = False

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
            if extension:
                d["extension"] = extension
            if outputs:
                d["outputValueSockets"] = {k: {"type": T(v)} for k, v in outputs.items()}
            decl_idx[key] = len(declarations)
            declarations.append(d)
        return decl_idx[key]

    ON_SELECT_OUTPUTS = {
        "selectedNode": "ref", "controllerIndex": "int",
        "selectionPoint": "float3", "selectionRayOrigin": "float3",
        "event": "ref"
    }

    def lit(sig, v):
        return {"type": T(sig), "value": [v]}

    def link(node, socket="value"):
        return {"node": node, "socket": socket}

    def cfg(**kw):
        return {k: {"value": v if isinstance(v, list) else [v]} for k, v in kw.items()}

    def add_node(op, configuration=None, values=None, extension=None, outputs=None):
        node_def = {"declaration": D(op, extension, outputs)}
        if configuration: node_def["configuration"] = configuration
        if values:        node_def["values"] = values
        graph_nodes.append(node_def)
        return len(graph_nodes) - 1

    def connect(src, dst, out="out"):
        assert dst > src, "flows must target a higher node index"
        graph_nodes[src].setdefault("flows", {})[out] = {"node": dst, "socket": "in"}

    def chain(first, rest):
        prev = first
        for n in rest:
            connect(prev, n)
            prev = n
        return prev

    variables, var_map = [], {}
    def get_or_create_var(var_name, sig="bool", default_val=False):
        if var_name not in var_map:
            var_map[var_name] = len(variables)
            variables.append({"name": var_name, "type": T(sig), "value": [default_val]})
        return var_map[var_name]

    anim_name_to_idx = {anim.name: idx for idx, anim in enumerate(gltf.animations)}
    ts_info = {}
    for scope in ctx.scopes:
        for ts in scope.root.findall('.//TimeSensor'):
            ts_key = scope.prefix + (ts.get('DEF') or '')
            anim_idx = anim_name_to_idx.get(f"Anim_{ts_key}")
            if anim_idx is not None:
                dur = 1.0
                if anim_idx < len(gltf.animations):
                    dur = getattr(gltf.animations[anim_idx], 'extras', {}).get('duration', float(ts.get('cycleInterval', '1.0')))
                ts_info[ts_key] = {
                    "anim": anim_idx,
                    "loop": ts.get('loop', 'false').lower() in ('true', '1'),
                    "enabled": ts.get('enabled', 'true').lower() in ('true', '1'),
                    "start_time": float(ts.get('startTime', '0')),
                    "duration": dur
                }

    def play_nodes(anim_idx, loop, duration=1.0):
        if loop:
            end_src = add_node("math/Inf")
            end_val = link(end_src)
        else:
            end_src = None
            end_val = lit("float", float(duration))

        start = add_node("animation/start", values={
            "animation": lit("ref", f"/animations/{anim_idx}"),
            "startTime": lit("float", 0.0),
            "endTime":   end_val,
            "speed":     lit("float", 1.0),
        })
        return ([end_src, start] if end_src is not None else [start])

    def stop_node(anim_idx):
        return add_node("animation/stop", values={"animation": lit("ref", f"/animations/{anim_idx}")})

    def set_visible_node(node_idx, flag):
        return add_node("pointer/set",
                        configuration=cfg(pointer=f"/nodes/{node_idx}/extensions/KHR_node_visibility/visible",
                                          type=T("bool")),
                        values={"value": lit("bool", flag)})

    def set_var_node(var_idx, flag):
        return add_node("variable/set", configuration=cfg(variables=[var_idx]),
                        values={str(var_idx): lit("bool", flag)})

    def on_select(node_idx):
        return add_node("event/onSelect", configuration=cfg(nodeIndex=node_idx),
                        extension="KHR_node_selectability", outputs=ON_SELECT_OUTPUTS)

    # X3D drag/text sensors are represented as selectable interactivity endpoints.
    # The extension can expose selection, but does not define a generic pointer-drag
    # stream or text-entry widget; runtime adapters consume the preserved X3D metadata.
    if ctx.sensor_nodes:
        active_sensor = get_or_create_var("active_x3d_sensor", "int", -1)
        for sensor in ctx.sensor_nodes:
            if sensor["type"] == "StringSensor":
                # KHR_interactivity has no standardized keyboard/text-entry event.
                continue
            # X3D sensors are non-rendering siblings of the geometry they sense.
            # Make rendered descendants selectable and bind their click event to
            # this sensor's identity; actual drag deltas still need a viewer adapter.
            root_idx = sensor.get("parent_idx")
            candidates, stack, seen = [], ([root_idx] if root_idx is not None else []), set()
            while stack:
                current = stack.pop()
                if current in seen or current is None or current < 0 or current >= len(gltf.nodes):
                    continue
                seen.add(current)
                gn = gltf.nodes[current]
                if gn.mesh is not None:
                    tag_node_interactivity(gn, selectable=True)
                    candidates.append(current)
                stack.extend(gn.children or [])
            for target_idx in candidates:
                selected = on_select(target_idx)
                set_active_sensor = add_node(
                    "variable/set",
                    configuration=cfg(variables=[active_sensor]),
                    values={str(active_sensor): lit("int", sensor["node_idx"])})
                connect(selected, set_active_sensor)

    # Bones Interactive Selection
    sel_bones = [(n, b) for n, b in enumerate(ctx.interactive_bones)
                 if b.get('pickable') and b.get('focus_anim_idx') is not None]
    if sel_bones:
        active_var = get_or_create_var("active_bone", "int", -1)
        get_active = add_node("variable/get", configuration=cfg(variable=active_var))
        clear_ids = list(ctx.clear_anim_indices)

        def play_clip(anim_idx, start=0.0, end=1.0):
            return add_node("animation/start", values={
                "animation": lit("ref", f"/animations/{anim_idx}"),
                "startTime": lit("float", float(start)),
                "endTime":   lit("float", float(end)),
                "speed":     lit("float", 1.0),
            })

        def set_active(v):
            return add_node("variable/set", configuration=cfg(variables=[active_var]),
                            values={str(active_var): lit("int", v)})

        for bone_no, bone in sel_bones:
            sels = [on_select(ni) for ni in bone['mesh_nodes']]
            eq = add_node("math/eq", values={"a": link(get_active), "b": lit("int", bone_no)})
            br = add_node("flow/branch", values={"condition": link(eq)})
            for sel in sels: connect(sel, br)

            ret = play_clip(bone['return_anim_idx'])
            off = set_active(-1)
            connect(ret, off)
            graph_nodes[br].setdefault("flows", {})["true"] = {"node": ret, "socket": "in"}

            seq = [play_clip(ai, 1.0, 1.0) for ai in clear_ids]
            if ctx.reset_anim_idx is not None: seq.append(play_clip(ctx.reset_anim_idx, 1.0, 1.0))
            seq.append(play_clip(bone['focus_anim_idx']))
            seq.append(set_active(bone_no))
            for x, y in zip(seq, seq[1:]): connect(x, y)
            graph_nodes[br].setdefault("flows", {})["false"] = {"node": seq[0], "socket": "in"}

    all_routes = []
    for scope in ctx.scopes:
        for r in scope.root.findall('.//ROUTE'):
            all_routes.append({
                "fromNode": scope.prefix + (r.get('fromNode') or ''),
                "fromField": r.get('fromField'),
                "toNode": scope.prefix + (r.get('toNode') or ''),
                "toField": r.get('toField'),
                "scope": scope
            })


    # 3. Conservative Script translation:
    # Translate initialize() assignments of literal numeric/bool values to
    # Script outputOnly fields when those outputs ROUTE to glTF node TRS fields.
    # Arbitrary ECMAScript, loops, callbacks, string operations and directOutput
    # are intentionally preserved as source metadata, not miscompiled.
    for scope in ctx.scopes:
        for script_el in scope.root.findall('.//Script'):
            script_def = script_el.get('DEF')
            if not script_def:
                continue
            script_key = scope.prefix + script_def
            sources = _x3d_script_metadata(script_el).get('inlineSource', [])
            code = '\n'.join(sources)
            init_match = re.search(
                r'function\s+initialize\s*\([^)]*\)\s*\{([\s\S]*?)\}',
                code, re.I)
            if not init_match:
                continue
            body = init_match.group(1)
            field_defs = {
                f.get('name'): f for f in script_el.findall('./field')
                if f.get('name') and f.get('accessType') in ('outputOnly', 'inputOutput')
            }
            assignments = {}
            for fname, f_el in field_defs.items():
                m = re.search(r'(?:this\s*\.\s*)?' + re.escape(fname) +
                              r'\s*=\s*([^;]+);', body)
                if not m:
                    continue
                expr = m.group(1).strip()
                val = None
                if expr.lower() in ('true', 'false'):
                    val = ('bool', expr.lower() == 'true')
                else:
                    nums = re.findall(r'[-+]?(?:\d+\.?\d*|\.\d+)(?:[eE][-+]?\d+)?', expr)
                    if nums and re.fullmatch(
                        r'\s*(?:new\s+\w+\s*\()?\s*[-+\d.eE,\s]+\)?\s*', expr):
                        arr = [float(x) for x in nums]
                        ftype = (f_el.get('type') or '').lower()
                        if ftype in ('sfvec2f', 'sfvec2d') and len(arr) >= 2:
                            val = ('float2', arr[:2])
                        elif ftype in ('sfvec3f', 'sfvec3d') and len(arr) >= 3:
                            val = ('float3', arr[:3])
                        elif ftype in ('sfvec4f', 'sfvec4d') and len(arr) >= 4:
                            val = ('float4', arr[:4])
                        elif len(arr) == 1:
                            val = ('float', arr[0])
                if val is not None:
                    assignments[fname] = val

            for out_field, (sig, value) in assignments.items():
                outgoing = [r for r in all_routes
                            if r['fromNode'] == script_key and r['fromField'] == out_field]
                for route in outgoing:
                    target_idx = ctx.def_to_node_idx.get(route['toNode'])
                    target_field = (route['toField'] or '').replace('set_', '')
                    target_path = {'translation': 'translation', 'rotation': 'rotation',
                                   'scale': 'scale'}.get(target_field)
                    expected_sig = {'translation': 'float3', 'rotation': 'float4',
                                    'scale': 'float3'}.get(target_field)
                    if target_idx is None or target_path is None or sig != expected_sig:
                        continue
                    start = add_node('event/onStart')
                    set_value = add_node(
                        'pointer/set',
                        configuration=cfg(pointer=f'/nodes/{target_idx}/{target_path}',
                                          type=T(sig)),
                        values={'value': lit(sig, value)})
                    connect(start, set_value)

    # TouchSensor -> TimeSensor grouping
    START_FIELDS = ('set_startTime', 'set_triggerTime', 'startTime')
    STOP_FIELDS  = ('set_stopTime', 'stopTime')
    touch_ctl = {}
    for r in all_routes:
        if r["fromField"] not in ('touchTime', 'isActive') or r["toNode"] not in ts_info:
            continue
        if r["toField"] in START_FIELDS:
            touch_ctl.setdefault(r["fromNode"], {"start": [], "stop": []})["start"].append(r["toNode"])
        elif r["toField"] in STOP_FIELDS:
            touch_ctl.setdefault(r["fromNode"], {"start": [], "stop": []})["stop"].append(r["toNode"])

    parent = {k: k for k in ts_info}
    def find(k):
        while parent[k] != k:
            parent[k] = parent[parent[k]]
            k = parent[k]
        return k
    for ctl in touch_ctl.values():
        members = ctl["start"] + ctl["stop"]
        for m in members[1:]:
            parent[find(m)] = find(members[0])

    # 1. Autostart TimeSensors
    autoplay = [k for k, info in ts_info.items()
                if info["enabled"] and (info["loop"] or info["start_time"] <= 0)]
    if EXCLUSIVE_AUTOSTART:
        seen_groups, kept = set(), []
        for k in autoplay:
            g = find(k)
            if g in seen_groups and any(k in c["start"] + c["stop"] for c in touch_ctl.values()):
                continue
            seen_groups.add(g)
            kept.append(k)
        autoplay = kept
    for ts_key in autoplay:
        info = ts_info[ts_key]
        on_start = add_node("event/onStart")
        res_nodes = play_nodes(info["anim"], info["loop"], info["duration"])
        connect(on_start, res_nodes[-1])

    # 2. TouchSensor -> Start/Stop TimeSensors
    for sensor_key, ctl in touch_ctl.items():
        touch_node_idx = ctx.def_to_node_idx.get(sensor_key)
        if touch_node_idx is None:
            continue
        stop_keys = []
        for k in ctl["stop"] + ctl["start"]:
            if k not in stop_keys:
                stop_keys.append(k)
        sel = on_select(touch_node_idx)
        flow = [stop_node(ts_info[k]["anim"]) for k in stop_keys]
        for k in ctl["start"]:
            res_nodes = play_nodes(ts_info[k]["anim"], ts_info[k]["loop"], ts_info[k]["duration"])
            flow.append(res_nodes[-1])
        chain(sel, flow)

    # 3. TouchSensor -> BooleanToggle
    toggle_routes = [
        r for r in all_routes
        if r["fromField"] in ('touchTime', 'isActive', 'isOver') and r["toField"] in ('set_boolean', 'toggle')
    ]

    for tr in toggle_routes:
        trigger_node_idx = ctx.def_to_node_idx.get(tr["fromNode"])
        toggle_def = tr["toNode"]
        if trigger_node_idx is None:
            continue

        var_idx = get_or_create_var(f"toggle_{toggle_def}", "bool", False)
        get_var = add_node("variable/get", configuration=cfg(variable=var_idx))
        sel     = on_select(trigger_node_idx)
        branch  = add_node("flow/branch", values={"condition": link(get_var)})
        connect(sel, branch)

        downstream = [r for r in all_routes
                      if r["fromNode"] == toggle_def and r["fromField"] in ('toggle', 'toggle_changed', 'bool_changed')]

        for state_after, out_socket in ((True, "false"), (False, "true")):
            arm = []
            for dr in downstream:
                info = ts_info.get(dr["toNode"])
                target_node_idx = ctx.def_to_node_idx.get(dr["toNode"])
                if info is not None and dr["toField"] in ('enabled', 'set_enabled'):
                    if state_after:
                        arm.extend(play_nodes(info["anim"], info["loop"], info["duration"]))
                    else:
                        arm.append(stop_node(info["anim"]))
                elif target_node_idx is not None:
                    arm.append(set_visible_node(target_node_idx, state_after))
            arm.append(set_var_node(var_idx, state_after))
            flow_arm = [n for n in arm if graph_nodes[n]["declaration"] != decl_idx.get(("math/Inf", None))]
            if flow_arm:
                graph_nodes[branch].setdefault("flows", {})[out_socket] = {"node": flow_arm[0], "socket": "in"}
                chain(flow_arm[0], flow_arm[1:])

    # 4. ProximitySensor & HUD Tracking
    for ps in ctx.proximity_sensors:
        if not ps.get('enabled', True): continue
        sensor_def = ps.get('def')
        sensor_node_idx = ps.get('node_idx')
        if sensor_node_idx is None: continue

        downstream = [r for r in all_routes if r["fromNode"] == sensor_def]
        if not downstream: continue

        var_inside_idx = get_or_create_var(f"inside_{sensor_def}", "bool", False)

        cam_pos_node = add_node("pointer/get", configuration=cfg(
            pointer="/extensions/KHR_interactivity/activeCamera/position",
            type=T("float3")
        ))
        mat_node = add_node("pointer/get", configuration=cfg(
            pointer=f"/nodes/{sensor_node_idx}/globalMatrix",
            type=T("float4x4")
        ))
        inv_mat_node = add_node("math/inverse", values={"a": link(mat_node)})

        T("float4")
        cam_xyz = add_node("math/extract3", values={"a": link(cam_pos_node)})
        cam_h = add_node("math/combine4", values={
            "a": link(cam_xyz, "0"), "b": link(cam_xyz, "1"),
            "c": link(cam_xyz, "2"), "d": lit("float", 1.0)})
        local_pos_node = add_node("math/transform", values={"a": link(cam_h), "b": link(inv_mat_node)})

        extract_node = add_node("math/extract4", values={"a": link(local_pos_node)})
        abs_x = add_node("math/abs", values={"a": link(extract_node, "0")})
        abs_y = add_node("math/abs", values={"a": link(extract_node, "1")})
        abs_z = add_node("math/abs", values={"a": link(extract_node, "2")})
        le_x = add_node("math/le", values={"a": link(abs_x), "b": lit("float", 0.5)})
        le_y = add_node("math/le", values={"a": link(abs_y), "b": lit("float", 0.5)})
        le_z = add_node("math/le", values={"a": link(abs_z), "b": lit("float", 0.5)})
        and_xy = add_node("math/and", values={"a": link(le_x), "b": link(le_y)})
        is_inside = add_node("math/and", values={"a": link(and_xy), "b": link(le_z)})

        prev_inside = add_node("variable/get", configuration=cfg(variable=var_inside_idx))
        same_state = add_node("math/eq", values={"a": link(is_inside), "b": link(prev_inside)})
        has_changed = add_node("math/not", values={"a": link(same_state)})

        on_tick = add_node("event/onTick")
        branch_changed = add_node("flow/branch", values={"condition": link(has_changed)})
        connect(on_tick, branch_changed)

        set_inside = add_node("variable/set", configuration=cfg(variables=[var_inside_idx]),
                              values={str(var_inside_idx): link(is_inside)})
        connect(branch_changed, set_inside, "true")

        branch_state = add_node("flow/branch", values={"condition": link(is_inside)})
        connect(set_inside, branch_state)

        enter_actions = []
        exit_actions = []

        for dr in downstream:
            field = dr["fromField"]
            info = ts_info.get(dr["toNode"])
            target_node_idx = ctx.def_to_node_idx.get(dr["toNode"])

            if info is not None:
                if field in ('isActive', 'enterTime'):
                    enter_actions.extend(play_nodes(info["anim"], info["loop"], info["duration"]))
                if field in ('isActive', 'exitTime'):
                    exit_actions.append(stop_node(info["anim"]))
            elif target_node_idx is not None:
                if field in ('isActive', 'enterTime'):
                    enter_actions.append(set_visible_node(target_node_idx, True))
                if field in ('isActive', 'exitTime'):
                    exit_actions.append(set_visible_node(target_node_idx, False))

        flow_enter = [n for n in enter_actions if graph_nodes[n]["declaration"] != decl_idx.get(("math/Inf", None))]
        flow_exit = [n for n in exit_actions if graph_nodes[n]["declaration"] != decl_idx.get(("math/Inf", None))]

        if flow_enter:
            graph_nodes[branch_state].setdefault("flows", {})["true"] = {"node": flow_enter[0], "socket": "in"}
            chain(flow_enter[0], flow_enter[1:])

        if flow_exit:
            graph_nodes[branch_state].setdefault("flows", {})["false"] = {"node": flow_exit[0], "socket": "in"}
            chain(flow_exit[0], flow_exit[1:])

        def _track_targets(src_field, dst_fields):
            return [ctx.def_to_node_idx.get(dr["toNode"]) for dr in downstream
                    if dr["fromField"] == src_field and dr["toField"] in dst_fields
                    and ctx.def_to_node_idx.get(dr["toNode"]) is not None]

        pos_targets = _track_targets("position_changed", ("set_translation", "translation"))
        rot_targets = _track_targets("orientation_changed", ("set_rotation", "rotation"))

        if pos_targets or rot_targets:
            pos_vec = rot_get = None
            if pos_targets:
                size_v = [max(1e-6, float(v)) for v in (ps.get("size") or [1, 1, 1])]
                ctr_v = [float(v) for v in (ps.get("center") or [0, 0, 0])]
                comps = []
                for k in range(3):
                    mul_k = add_node("math/mul", values={"a": link(extract_node, str(k)), "b": lit("float", size_v[k])})
                    add_k = add_node("math/add", values={"a": link(mul_k), "b": lit("float", ctr_v[k])})
                    comps.append(add_k)
                pos_vec = add_node("math/combine3", values={"a": link(comps[0]), "b": link(comps[1]), "c": link(comps[2])})
            if rot_targets:
                rot_get = add_node("pointer/get", configuration=cfg(
                    pointer="/extensions/KHR_interactivity/activeCamera/rotation",
                    type=T("float4")))
            hud_tick = add_node("event/onTick")
            prev_flow = hud_tick
            for t_idx in pos_targets:
                st = add_node("pointer/set",
                              configuration=cfg(pointer=f"/nodes/{t_idx}/translation", type=T("float3")),
                              values={"value": link(pos_vec)})
                connect(prev_flow, st)
                prev_flow = st
            for t_idx in rot_targets:
                st = add_node("pointer/set",
                              configuration=cfg(pointer=f"/nodes/{t_idx}/rotation", type=T("float4")),
                              values={"value": link(rot_get)})
                connect(prev_flow, st)
                prev_flow = st

    if not graph_nodes:
        return None

    graph_dict = {
        "types": types,
        "declarations": declarations,
        "nodes": graph_nodes
    }
    # Only include "variables" if there is at least 1 variable (satisfies minItems: 1)
    if variables:
        graph_dict["variables"] = variables

    return {
        "graph": 0,
        "graphs": [graph_dict]
    }

def _interactivity_extensions_used(gltf_dict, interactivity_data):
    used = ["KHR_interactivity"]
    graph_json = json.dumps(interactivity_data)
    for g in interactivity_data["graphs"]:
        for d in g.get("declarations", []):
            if d.get("extension") and d["extension"] not in used:
                used.append(d["extension"])
    if "KHR_node_visibility" in graph_json and "KHR_node_visibility" not in used:
        used.append("KHR_node_visibility")
    for n in gltf_dict.get("nodes", []):
        for ext in (n.get("extensions") or {}):
            if ext.startswith("KHR_node_") and ext not in used:
                used.append(ext)
    return used

# ---------------------------------------------------------------------------
# H-Anim Skinning & Inverse Bind Matrix Evaluation
# ---------------------------------------------------------------------------

def build_skins(ctx):
    gltf = ctx.gltf
    bin_blob = ctx.bin_blob

    for scope, cname, entries in ctx.orphan_shapes:
        owner = next((g for g in ctx.skin_groups if cname and g.scope is scope and g.skincoord_name == cname), None)
        if owner is not None:
            owner.meshes.extend(entries)

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
        print(f"  INFO: HAnim skinning '{g.name}': {len(joint_node_indices)} joints, {len(g.meshes)} skin primitive(s)")

        per_vertex = {}
        for j_def, infl in g.joint_skinning.items():
            if j_def not in joint_order: continue
            for coord_idx, weight in infl:
                if weight > 1e-6:
                    per_vertex.setdefault(coord_idx, []).append((joint_order[j_def], float(weight)))

        for v in per_vertex.values():
            if not v: continue
            v.sort(key=lambda x: x[1], reverse=True)
            if len(v) > 4: v[:] = v[:4]
            total = sum(w for _, w in v)
            if total > 0.0:
                for i in range(len(v)): v[i] = (v[i][0], v[i][1] / total)
            else:
                v[:] = [(0, 1.0)]

        humanoid_world = world_mats[g.inner_idx].astype(np.float64)
        ibms = []
        for j in joint_node_indices:
            m = np.linalg.pinv(world_mats[j].astype(np.float64)) @ humanoid_world
            m[np.abs(m) < 1e-6] = 0.0
            m[3, :3] = 0.0
            m[3, 3] = 1.0
            ibms.append(m.T.flatten())

        ibm_array = np.array(ibms, dtype=np.float32)
        ibm_array[np.abs(ibm_array) < 1e-6] = 0.0
        ibm_acc = add_accessor(gltf, bin_blob, ibm_array, MAT4, FLOAT, target=None)

        gltf.skins.append(Skin(name=g.name, joints=joint_node_indices, inverseBindMatrices=ibm_acc))
        skin_idx = len(gltf.skins) - 1

        for mesh_idx, prim_local_idx, p_indices_list in g.meshes:
            prim = gltf.meshes[mesh_idx].primitives[prim_local_idx]
            if isinstance(prim, dict):
                prim_attrs = prim.setdefault("attributes", {})
            else:
                if getattr(prim, 'attributes', None) is None:
                    prim.attributes = {}
                prim_attrs = prim.attributes

            num_verts = len(p_indices_list)
            joints_data = np.zeros((num_verts, 4), dtype=np.uint16)
            weights_data = np.zeros((num_verts, 4), dtype=np.float32)

            for v in range(num_verts):
                infs = per_vertex.get(p_indices_list[v])
                if infs:
                    infs = [x for x in infs if x[1] > 1e-6]
                    infs.sort(key=lambda x: x[1], reverse=True)
                    k_max = min(len(infs), 4)
                    w_sum = sum(infs[k][1] for k in range(k_max))
                    if w_sum > 0.0:
                        for k in range(k_max):
                            joints_data[v, k] = infs[k][0]
                            weights_data[v, k] = max(0.0, float(infs[k][1]) / w_sum)
                    else:
                        joints_data[v, 0], weights_data[v, 0] = 0, 1.0
                else:
                    joints_data[v, 0], weights_data[v, 0] = 0, 1.0

            weights_data = np.maximum(0.0, weights_data)
            row_sums = weights_data.sum(axis=1)
            bad_rows = (row_sums <= 1e-7)
            weights_data[bad_rows] = [1.0, 0.0, 0.0, 0.0]
            joints_data[bad_rows, 0] = 0

            good_rows = ~bad_rows
            weights_data[good_rows] /= row_sums[good_rows, np.newaxis]

            row_diffs = 1.0 - weights_data.sum(axis=1)
            max_cols = np.argmax(weights_data, axis=1)
            weights_data[np.arange(num_verts), max_cols] += row_diffs
            weights_data = np.clip(weights_data, 0.0, 1.0).astype(np.float32)

            j_acc = add_accessor(gltf, bin_blob, joints_data, VEC4, UNSIGNED_SHORT, target=ARRAY_BUFFER)
            w_acc = add_accessor(gltf, bin_blob, weights_data, VEC4, FLOAT, target=ARRAY_BUFFER)

            if isinstance(prim_attrs, dict):
                prim_attrs["JOINTS_0"] = j_acc
                prim_attrs["WEIGHTS_0"] = w_acc
            else:
                setattr(prim_attrs, "JOINTS_0", j_acc)
                setattr(prim_attrs, "WEIGHTS_0", w_acc)

            node_idx = ctx.mesh_to_node.get(mesh_idx)
            if node_idx is not None:
                gltf.nodes[node_idx].skin = skin_idx
                if node_idx not in skinned_nodes:
                    skinned_nodes.append(node_idx)

    if skinned_nodes:
        parent_of = {c: i for i, n in enumerate(gltf.nodes) for c in (n.children or [])}
        root_node = gltf.nodes[0]
        if root_node.children is None: root_node.children = []
        for n_idx in skinned_nodes:
            node = gltf.nodes[n_idx]
            node.translation, node.rotation, node.scale = [0.0, 0.0, 0.0], [0.0, 0.0, 0.0, 1.0], [1.0, 1.0, 1.0]
            old = parent_of.get(n_idx)
            if old is not None and gltf.nodes[old].children and n_idx in gltf.nodes[old].children:
                gltf.nodes[old].children.remove(n_idx)
            if n_idx not in root_node.children:
                root_node.children.append(n_idx)

# ---------------------------------------------------------------------------
# Conversion Driver & Route Pre-population
# ---------------------------------------------------------------------------

def populate_scope_routes(scope, ctx):
    """Index forward and reverse ROUTE bindings so interpolators and displacers are queryable."""
    for r in scope.root.iter('ROUTE'):
        f_name = r.get('fromNode')
        f_field = r.get('fromField')
        t_name = r.get('toNode')
        t_field = r.get('toField')
        if not f_name or not t_name:
            continue

        f_el = scope.def_map.get(f_name)
        t_el = scope.def_map.get(t_name)

        # Search other scopes if not in the local def_map
        if f_el is None:
            for s in ctx.scopes:
                if f_name in s.def_map:
                    f_el = s.def_map[f_name]
                    break
        if t_el is None:
            for s in ctx.scopes:
                if t_name in s.def_map:
                    t_el = s.def_map[t_name]
                    break

        if f_el is None or t_el is None:
            continue

        # Register by Element ID
        ctx.global_forward_routes.setdefault((id(f_el), f_field), []).append((t_el, t_field))
        ctx.global_inverse_routes.setdefault((id(t_el), t_field), []).append((f_el, f_field))

        # Normalize set_ prefix aliases for ID
        if t_field.startswith('set_'):
            ctx.global_inverse_routes.setdefault((id(t_el), t_field[4:]), []).append((f_el, f_field))
        else:
            ctx.global_inverse_routes.setdefault((id(t_el), 'set_' + t_field), []).append((f_el, f_field))

        # Register by DEF Name using verified Element references (never strings or `or` truth checks)
        ctx.global_forward_routes.setdefault((f_name, f_field), []).append((t_el, t_field))
        ctx.global_inverse_routes.setdefault((t_name, t_field), []).append((f_el, f_field))
        if t_field.startswith('set_'):
            ctx.global_inverse_routes.setdefault((t_name, t_field[4:]), []).append((f_el, f_field))
        else:
            ctx.global_inverse_routes.setdefault((t_name, 'set_' + t_field), []).append((f_el, f_field))

#def populate_scope_routes(scope, ctx):
#    """Index forward and reverse ROUTE bindings so interpolators and displacers are queryable."""
#    for r in scope.root.iter('ROUTE'):
#        f_name = r.get('fromNode')
#        f_field = r.get('fromField')
#        t_name = r.get('toNode')
#        t_field = r.get('toField')
#        if not f_name or not t_name: continue
#
#        f_el = scope.def_map.get(f_name)
#        t_el = scope.def_map.get(t_name)
#
#        if f_el is not None and t_el is not None:
#            ctx.global_forward_routes.setdefault((id(f_el), f_field), []).append((t_el, t_field))
#            ctx.global_inverse_routes.setdefault((id(t_el), t_field), []).append((f_el, f_field))
#            # Also normalize set_ prefix aliases
#            if t_field.startswith('set_'):
#                ctx.global_inverse_routes.setdefault((id(t_el), t_field[4:]), []).append((f_el, f_field))
#            else:
#                ctx.global_inverse_routes.setdefault((id(t_el), 'set_' + t_field), []).append((f_el, f_field))
#
#        if f_name:
#            ctx.global_forward_routes.setdefault((f_name, f_field), []).append((t_el or t_name, t_field))
#        if t_name:
#            ctx.global_inverse_routes.setdefault((t_name, t_field), []).append((f_el or f_name, f_field))
#            if t_field.startswith('set_'):
#                ctx.global_inverse_routes.setdefault((t_name, t_field[4:]), []).append((f_el or f_name, f_field))
#            else:
#                ctx.global_inverse_routes.setdefault((t_name, 'set_' + t_field), []).append((f_el or f_name, f_field))

def print_reports(ctx):
    inl = ctx.inlines
    print("\n  ---- Inline report ----")
    if not inl: print("  No Inline nodes encountered.")
    else:
        by = lambda s: sum(1 for r in inl if r['status'] == s)
        print(f"  Inline nodes encountered: {len(inl)} (loaded {by('LOADED')}, skipped {by('SKIPPED')}, failed {by('FAILED')})")

    print("\n  ---- Unhandled X3D nodes ----")
    if not ctx.unhandled: print("  None - all encountered nodes were handled.")
    else:
        for tag, v in sorted(ctx.unhandled.items(), key=lambda kv: (-kv[1]['count'], kv[0])):
            print(f"    {tag:<28} x{v['count']:<4} {' | '.join(v['reasons'])}")
    print()

def convert_x3d_to_glb(x3d_filepath, glb_filepath, bone_mode=None):
    print(f"\nConverting: {x3d_filepath}")
    _TT_MATERIALS.clear()
    main_path = os.path.abspath(x3d_filepath)
    try:
        raw_bytes = _read_x3d_bytes(main_path)
        try:
            root = ET.fromstring(raw_bytes)
        except ET.ParseError:
            text = raw_bytes.decode('utf-8', errors='replace')
            text = re.sub(r'<\?xml[^>]+encoding=["\'][^"\']+["\'][^>]*\?>', '<?xml version="1.0"?>', text, count=1)
            root = ET.fromstring(text.encode('utf-8'))
        strip_namespaces(root)
    except Exception as e:
        print(f"  ERROR parsing X3D: {e}"); return None

    bin_blob = bytearray()
    gltf = GLTF2(
        asset=Asset(generator="X3D-to-GLB Advanced Converter merged8 + KHR_interactivity / KHR_animation_pointer", version="2.0"),
        scene=0, scenes=[Scene(nodes=[0])], nodes=[Node(name="WorldRoot", children=[])],
        meshes=[], animations=[], accessors=[], materials=[], bufferViews=[], buffers=[], cameras=[], images=[], textures=[], skins=[]
    )
    ctx = ConvertCtx(gltf, bin_blob)
    ctx.bone_mode = _detect_bone_mode(main_path, root, bone_mode)
    if ctx.bone_mode: print("  Bone mode: ON (interactive bone selection)")

    head = root.find('head')
    if head is not None:
        extras = {m.get('name'): m.get('content') for m in head.findall('meta') if m.get('name') and m.get('content')}
        for m in head:
            if m.tag.startswith('Metadata'):
                k, v = parse_metadata_node(m)
                extras[k] = v
        if extras: gltf.asset.extras = {"X3D_Metadata": extras}

    scene = root.find('Scene')
    scene_root = scene if scene is not None else root
    main_scope = Scope(root, scene_root, os.path.dirname(main_path), '', os.path.basename(main_path))
    ctx.scopes.append(main_scope)
    ctx.load_stack.append(main_path)

    # Pre-populate routes from root so CoordinateInterpolators and Displacers bind accurately
    populate_scope_routes(main_scope, ctx)

    if ctx.bone_mode:
        _setup_bone_scene(ctx, main_scope, main_path)
    else:
        if main_scope.unit_scale != 1.0:
            gltf.nodes[0].scale = [main_scope.unit_scale, main_scope.unit_scale, main_scope.unit_scale]
        traverse_x3d_node(main_scope.content, 0, ctx, main_scope, None)

    # Convert motions and TRS / morph animations
    for scope in list(ctx.scopes):
        convert_hanim_motions(scope, gltf, bin_blob, ctx.def_to_node_idx, ctx.node_to_center, prefix=scope.prefix)

    convert_animations(ctx)

    convert_sequenced_viewpoints(ctx)

    if ctx.bone_mode:
        _finalize_bone_pick_targets(ctx)
        _place_bone_camera(ctx)

    generate_viewpoint_animations(ctx)

    if ctx.bone_mode:
        generate_bone_focus_animations(ctx)

    # Build H-Anim skins and inverse bind matrices
    build_skins(ctx)

    if len(bin_blob) == 0: bin_blob.extend(b'\x00' * 4)
    gltf_dict = to_plain(gltf)
    if ctx.mat_list: gltf_dict['materials'] = ctx.mat_list

    # Ensure valid mesh primitives with attributes and morph targets
    for mesh_plain, mesh_obj in zip(gltf_dict.get('meshes', []), gltf.meshes):
        mesh_plain['primitives'] = [
            to_plain(p) for p in mesh_obj.primitives 
            if (isinstance(p, dict) and p.get('attributes')) or getattr(p, 'attributes', None)
        ]
        if hasattr(mesh_obj, 'weights') and mesh_obj.weights:
            mesh_plain['weights'] = to_plain(mesh_obj.weights)

    if ctx.layers:
        active_layer_idx = 0
        layer_order = [l['order'] for l in ctx.layers]
        if ctx.layer_sets:
            active_layer_idx = ctx.layer_sets[0].get('activeLayer', 0)
            if ctx.layer_sets[0].get('order'):
                layer_order = ctx.layer_sets[0]['order']

        scene0 = gltf_dict['scenes'][0]
        if 'extras' not in scene0: scene0['extras'] = {}
        scene0['extras']['x3d_layerSet'] = {"order": layer_order, "activeLayer": active_layer_idx}

        for layer in ctx.layers:
            gltf_dict['scenes'].append({
                "name": layer['name'],
                "nodes": [layer['node_idx']],
                "extras": {
                    "x3d_layer": {
                        "isPickable": layer['isPickable'],
                        "order": layer['order']
                    },
                    "renderingGroupId": layer['order']
                }
            })

        for layer in ctx.layers:
            gid = layer['order']
            pickable = layer['isPickable']
            stack = [layer['node_idx']]
            while stack:
                curr_idx = stack.pop()
                if 0 <= curr_idx < len(gltf_dict['nodes']):
                    n_dict = gltf_dict['nodes'][curr_idx]
                    n_dict.setdefault('extras', {})['renderingGroupId'] = gid
                    if not pickable:
                        exts = n_dict.setdefault('extensions', {})
                        exts.setdefault('KHR_node_selectability', {})['selectable'] = False
                        exts.setdefault('KHR_node_hoverability', {})['hoverable'] = False
                    for ch in n_dict.get('children', []):
                        stack.append(ch)

    for anim_dict in gltf_dict.get('animations', []):
        dur = anim_dict.get('extras', {}).get('duration', 1.0)
        anim_dict.setdefault('extensions', {})['KHR_interactivity'] = {"maxTime": dur}

    # Lights
    lights, light_nodes = [], []
    for scope in ([sc for sc in ctx.scopes if sc.prefix == ''] if ctx.bone_mode else ctx.scopes):
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
        for slight in scope.root.findall('.//SpotLight'):
            if slight.get('on', 'true').lower() in ('false', '0'): continue
            beam_w = float(slight.get('beamWidth', '0.785398'))
            cutoff = float(slight.get('cutOffAngle', '1.570796'))
            radius = float(slight.get('radius', '100'))
            light_data = {
                "type": "spot",
                "color": parse_array(slight.get('color', '1 1 1')),
                "intensity": float(slight.get('intensity', '1.0')),
                "spot": {
                    "innerConeAngle": min(beam_w, cutoff),
                    "outerConeAngle": max(beam_w, cutoff)
                }
            }
            if radius > 0: light_data["range"] = radius
            lights.append(light_data)
            node = {
                "name": scope.prefix + slight.get('DEF', f"SpotLight_{len(lights)-1}"),
                "translation": parse_array(slight.get('location', '0 0 0')),
                "extensions": {"KHR_lights_punctual": {"light": len(lights)-1}}
            }
            rot = dir_to_quat(parse_array(slight.get('direction', '0 0 -1')))
            if rot != [0, 0, 0, 1]: node["rotation"] = rot
            light_nodes.append(node)

    if lights:
        gltf_dict.setdefault('extensionsUsed', []).append('KHR_lights_punctual')
        gltf_dict.setdefault('extensions', {})['KHR_lights_punctual'] = {"lights": lights}
        start_idx = len(gltf_dict.get('nodes', []))
        gltf_dict['nodes'].extend(light_nodes)
        gltf_dict['nodes'][0].setdefault('children', []).extend(range(start_idx, start_idx + len(light_nodes)))

    for mat in gltf_dict.get('materials', []):
        base_tex = mat.get('pbrMetallicRoughness', {}).get('baseColorTexture')
        if base_tex and 'KHR_texture_transform' in base_tex.get('extensions', {}):
            gltf_dict.setdefault('extensionsUsed', [])
            if 'KHR_texture_transform' not in gltf_dict['extensionsUsed']:
                gltf_dict['extensionsUsed'].append('KHR_texture_transform')
            break

    if any(ch.get('target', {}).get('path') == 'pointer'
           for a in gltf_dict.get('animations', []) for ch in a.get('channels', [])):
        gltf_dict.setdefault('extensionsUsed', [])
        if 'KHR_animation_pointer' not in gltf_dict['extensionsUsed']:
            gltf_dict['extensionsUsed'].append('KHR_animation_pointer')

    materials_with_textures = set()
    for m_i, m in enumerate(gltf_dict.get('materials', [])):
        pbr = m.get('pbrMetallicRoughness', {})
        if 'baseColorTexture' in pbr or 'metallicRoughnessTexture' in pbr or 'normalTexture' in m or 'occlusionTexture' in m or 'emissiveTexture' in m:
            materials_with_textures.add(m_i)

    for mesh in gltf_dict.get('meshes', []):
        for prim in mesh.get('primitives', []):
            mat_idx = prim.get('material')
            if mat_idx is not None and mat_idx in materials_with_textures:
                attrs = prim.setdefault('attributes', {})
                if 'TEXCOORD_0' not in attrs:
                    pos_acc_idx = attrs.get('POSITION')
                    if pos_acc_idx is not None and pos_acc_idx < len(gltf.accessors):
                        count = gltf.accessors[pos_acc_idx].count
                        dummy_uvs = np.zeros((count, 2), dtype=np.float32)
                        uv_acc = add_accessor(gltf, bin_blob, dummy_uvs, VEC2, FLOAT, target=ARRAY_BUFFER)
                        attrs['TEXCOORD_0'] = uv_acc

    interactivity_data = build_khr_interactivity(ctx)
    if interactivity_data:
        gltf_dict.setdefault('extensions', {})['KHR_interactivity'] = interactivity_data
        for ext in _interactivity_extensions_used(gltf_dict, interactivity_data):
            gltf_dict.setdefault('extensionsUsed', [])
            if ext not in gltf_dict['extensionsUsed']:
                gltf_dict['extensionsUsed'].append(ext)

    write_glb(gltf_dict, bin_blob, glb_filepath)
    size_kb = os.path.getsize(glb_filepath) / 1024
    print(f"  OK: {glb_filepath} ({size_kb:.1f} KB) | nodes={len(gltf_dict.get('nodes', []))} | meshes={len(gltf_dict.get('meshes', []))} | animations={len(gltf_dict.get('animations', []))} | skins={len(gltf_dict.get('skins', []))}")
    if ctx.bone_mode:
        pick = sum(1 for b in ctx.interactive_bones if b.get('pickable'))
        print(f"  Bones: {len(ctx.interactive_bones)} (selectable: {pick}, empty: {len(ctx.interactive_bones) - pick})")
    if ctx.invisible_skipped:
        print(f"  Skipped {ctx.invisible_skipped} visible=\"false\" node(s)")
    print_reports(ctx)
    return {'inlines': ctx.inlines, 'unhandled': ctx.unhandled}

if __name__ == "__main__":
    import sys
    flags = {a for a in sys.argv[1:] if a.startswith('--')}
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    override = True if '--bones' in flags else (False if '--no-bones' in flags else None)
    if args:
        in_f = args[0]
        out_f = args[1] if len(args) > 1 else os.path.splitext(in_f)[0] + ".glb"
        convert_x3d_to_glb(in_f, out_f, bone_mode=override)
    else:
        for f in ["JoeKickAnimation.x3d", "HAnimGimbalJointController18.x3d", "JinFacsAu27MouthStretchMorpher.x3d", "CleanedYouClocks.x3d", "HumanoidComplete.x3d", "pelvis.x3d"]:
            if os.path.exists(f):
                convert_x3d_to_glb(f, os.path.splitext(f)[0] + ".glb", bone_mode=override)

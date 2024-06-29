import xml.etree.ElementTree as ET
import bpy
from mathutils import Matrix, Vector, Quaternion

def parse_transform(transform):
    translation = transform.get('translation', '0 0 0')
    rotation = transform.get('rotation', '0 0 1 0')
    scale = transform.get('scale', '1 1 1')
    center = transform.get('center', '0 0 0')

    tx, ty, tz = map(float, translation.split())
    rx, ry, rz, angle = map(float, rotation.split())
    sx, sy, sz = map(float, scale.split())
    cx, cy, cz = map(float, center.split())

    return (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz)

def create_empty(name, matrix):
    bpy.ops.object.empty_add(type='ARROWS')
    empty = bpy.context.active_object
    empty.name = name
    empty.matrix_world = matrix
    return empty

def create_box(name, size, matrix):
    bpy.ops.mesh.primitive_cube_add(size=1)
    box = bpy.context.active_object
    box.name = name
    box.scale = size
    box.matrix_world = matrix
    return box

def create_lineset(name, coordinates, matrix):
    print(f"Creating LineSet: {name}")
    print(f"Coordinates: {coordinates}")
    mesh = bpy.data.meshes.new(name)
    obj = bpy.data.objects.new(name, mesh)
    bpy.context.collection.objects.link(obj)
    obj.matrix_world = matrix

    vertices = [Vector((float(x), float(y), float(z))) for x, y, z in zip(*[iter(coordinates)]*3)]
    edges = [(i, i + 1) for i in range(0, len(vertices) - 1, 2)]

    mesh.from_pydata(vertices, edges, [])
    mesh.update()
    return obj

def create_indexedfaceset(name, coordinates, coord_indices, matrix, max_faces_per_mesh=1000):
    """Creates an IndexedFaceSet, splitting it into multiple meshes if needed."""
    vertices = [Vector((float(x), float(y), float(z))) for x, y, z in zip(*[iter(coordinates)]*3)]

    num_faces = len(coord_indices) // 4
    num_meshes = num_faces // max_faces_per_mesh + 1

    for mesh_index in range(num_meshes):
        start_index = mesh_index * max_faces_per_mesh * 4
        end_index = min((mesh_index + 1) * max_faces_per_mesh * 4, num_faces * 4)
        mesh_faces = coord_indices[start_index:end_index]

        mesh_name = f"{name}_{mesh_index}"
        mesh = bpy.data.meshes.new(mesh_name)
        obj = bpy.data.objects.new(mesh_name, mesh)
        bpy.context.collection.objects.link(obj)
        obj.matrix_world = matrix

        faces = [tuple(map(int, mesh_faces[i:i+4])) for i in range(0, len(mesh_faces), 4) if -1 not in mesh_faces[i:i+4]]
        mesh.from_pydata(vertices, [], faces)
        mesh.update()

    return obj

def create_sphere(name, radius, matrix):
    bpy.ops.mesh.primitive_uv_sphere_add(radius=radius)
    sphere = bpy.context.active_object
    sphere.name = name
    sphere.matrix_world = matrix
    return sphere

def process_node(node, parent_object=None, def_nodes=None):
    animated_objects = {}
    cx = 0
    cy = 0
    cz = 0

    use_name = node.get('USE')
    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif use_name and def_nodes and use_name in def_nodes:
        def_node = def_nodes[use_name]
        new_object = def_node.copy()
        new_object.parent = parent_object
        bpy.context.scene.collection.objects.link(new_object)
        animated_objects[use_name] = new_object
        return animated_objects

    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif node.tag in ('Transform', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'Group', 'HAnimSegment'):
        if not node.tag in ('Group', 'HAnimSegment'):
            (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = parse_transform(node)

            translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
            rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
            scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))

            transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
        else:
            transform_matrix = Matrix.Identity(4)
            translation_matrix = Matrix.Identity(4)

        name = node.get('DEF', node.tag)
        empty = create_empty(name, transform_matrix)
        if cx != 0 or cy != 0 or cz != 0:
            empty['x3dtranslation'] = translation_matrix
        else:
            empty['x3dtranslation'] = None
        animated_objects[name] = empty

        def_name = node.get('DEF')
        if def_name and def_nodes is not None:
            def_nodes[def_name] = empty

        if parent_object:
            empty.parent = parent_object

        current_object = empty

        for child in node:
            if child.tag == 'Shape':
                box = child.find('Box')
                if box is not None:
                    box_name = f"{name}_box"
                    size = tuple(map(float, box.get('size', '1 1 1').split()))
                    box_object = create_box(box_name, size, Matrix.Identity(4))
                    box_object.parent = current_object
                    animated_objects[box_name] = box_object
                
                lineset = child.find('LineSet')
                if lineset is not None:
                    coordinate = lineset.find('Coordinate')
                    if coordinate is not None:
                        points = coordinate.get('point').split()
                        lineset_object = create_lineset(f"{name}_lineset", points, Matrix.Identity(4))
                        lineset_object.parent = current_object
                        animated_objects[f"{name}_lineset"] = lineset_object

                indexedfaceset = child.find('IndexedFaceSet')
                if indexedfaceset is not None:
                    coordinate = indexedfaceset.find('Coordinate')
                    if coordinate is not None:
                        points = coordinate.get('point').split()
                        coord_index = indexedfaceset.get('coordIndex').split()
                        indexedfaceset_object = create_indexedfaceset(f"{name}_indexedfaceset", points, coord_index, Matrix.Identity(4))
                        indexedfaceset_object.parent = current_object
                        animated_objects[f"{name}_indexedfaceset"] = indexedfaceset_object
                
                # Handle Sphere
                sphere = child.find('Sphere')
                if sphere is not None:
                    radius = float(sphere.get('radius', '1'))
                    sphere_object = create_sphere(f"{name}_sphere", radius, Matrix.Identity(4))
                    sphere_object.parent = current_object
                    animated_objects[f"{name}_sphere"] = sphere_object
            else:
                animated_objects.update(process_node(child, current_object, def_nodes=def_nodes))
    else:
        for child in node:
            animated_objects.update(process_node(child, parent_object, def_nodes=def_nodes))

    return animated_objects

def create_animation(obj, keyframes, data_path):
    if not obj.animation_data:
        obj.animation_data_create()
    action = bpy.data.actions.new(name=f"{obj.name}_Action")
    obj.animation_data.action = action

    for i in range(3):  # x, y, z
        fc = action.fcurves.new(data_path=data_path, index=i)
        for frame, value in keyframes:
            fc.keyframe_points.insert(frame, value[i])

    if obj['x3dtranslation'] and data_path == "rotation_euler":
        center = Matrix(obj['x3dtranslation']).to_translation()
        print(f"center {center}")
        for i in range(3):  # x, y, z
            fc = action.fcurves.new(data_path="location", index=i)
            for frame, rotation in keyframes:
                offset = center - rotation.to_matrix() @ center
                fc.keyframe_points.insert(frame, offset[i])

def parse_interpolators(root):
    interpolators = {}
    for interp in root.findall(".//OrientationInterpolator") + root.findall(".//PositionInterpolator"):
        interp_type = interp.tag
        interp_def = interp.get('DEF')
        keys = list(map(float, interp.get('key').split()))
        key_values = list(map(float, interp.get('keyValue').split()))

        keyframes = []
        for i, key in enumerate(keys):
            frame = int(key * 100)
            if interp_type == 'OrientationInterpolator':
                axis = Vector(key_values[i*4:i*4+3])
                angle = key_values[i*4+3]
                rotation = Quaternion(axis, angle).to_euler()
                keyframes.append((frame, rotation))
            elif interp_type == 'PositionInterpolator':
                position = Vector(key_values[i*3:i*3+3])
                keyframes.append((frame, position))
        
        interpolators[interp_def] = (interp_type, keyframes)
    return interpolators

def apply_interpolations(root, animated_objects, interpolators):
    for route in root.findall(".//ROUTE"):
        from_node = route.get('fromNode')
        to_node = route.get('toNode')
        to_field = route.get('toField')

        if to_node in animated_objects and from_node in interpolators:
            obj = animated_objects[to_node]
            interp_type, keyframes = interpolators[from_node]
            if interp_type == 'OrientationInterpolator' and to_field == 'rotation':
                create_animation(obj, keyframes, "rotation_euler")
            elif interp_type == 'PositionInterpolator' and to_field == 'translation':
                create_animation(obj, keyframes, "location")
            print(f"Animating {obj.name} for {to_field}")

def main(file_path):
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete()

    tree = ET.parse(file_path)
    root = tree.getroot()

    def_nodes = {}

    scene = root.find('Scene')
    if scene is not None:
        animated_objects = process_node(scene, def_nodes=def_nodes)

    interpolators = parse_interpolators(root)
    apply_interpolations(root, animated_objects, interpolators)

    hanim_humanoid = animated_objects.get('hanim_JinLOA1')
    if hanim_humanoid:
        hanim_humanoid.scale = Vector((1.0, 1.0, 1.0))
        bpy.ops.object.select_all(action='DESELECT')  # Deselect all to avoid accidentally applying scale to other objects
        hanim_humanoid.select_set(True)
        bpy.ops.object.transform_apply(location=False, rotation=False, scale=True)

    bpy.context.scene.frame_start = 0
    bpy.context.scene.frame_end = 100
    bpy.context.scene.render.fps = 30

    bpy.ops.object.camera_add(location=(0, -20, 20))
    camera = bpy.context.active_object
    bpy.context.scene.camera = camera

    bpy.ops.object.light_add(type='SUN', location=(5, 5, 5))

file_path = "JinLOA1scaled1.x3d"  # Replace with your X3D file path
main(file_path)

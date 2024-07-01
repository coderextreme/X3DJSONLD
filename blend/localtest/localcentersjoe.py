import xml.etree.ElementTree as ET
import bpy
from mathutils import Matrix, Vector, Quaternion, Euler

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

def create_sphere(name, radius, matrix):
    bpy.ops.mesh.primitive_uv_sphere_add(radius=radius)
    sphere = bpy.context.active_object
    sphere.name = name
    sphere.matrix_world = matrix
    return sphere

def process_node(node, parent_object=None, def_nodes=None):
    animated_objects = {}
    cx, cy, cz = 0, 0, 0

    use_name = node.get('USE')
    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif node.tag in ('HAnimSegment') and node.get('containerField') == 'segments':
        pass
    elif use_name and def_nodes and use_name in def_nodes:
        new_object = def_nodes[use_name].copy()
        new_object.parent = parent_object
        bpy.context.scene.collection.objects.link(new_object)
        animated_objects[use_name] = new_object
        return animated_objects

    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif node.tag in ('HAnimSegment') and node.get('containerField') == 'segments':
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
                shape_object = process_shape(child, current_object)
                if shape_object:
                    animated_objects.update(shape_object)
            else:
                child_objects = process_node(child, current_object, def_nodes)
                animated_objects.update(child_objects)
    else:
        current_object = parent_object
        for child in node:
            child_objects = process_node(child, current_object, def_nodes)
            animated_objects.update(child_objects)

    return animated_objects

def process_shape(shape_node, parent_object):
    shape_objects = {}
    for child in shape_node:
        if child.tag == 'Box':
            box_name = f"{parent_object.name}_box"
            size = tuple(map(float, child.get('size', '1 1 1').split()))
            box_object = create_box(box_name, size, Matrix.Identity(4))
            box_object.parent = parent_object
            shape_objects[box_name] = box_object
        elif child.tag == 'LineSet':
            coordinate = child.find('Coordinate')
            if coordinate is not None:
                points = coordinate.get('point').split()
                lineset_object = create_lineset(f"{parent_object.name}_lineset", points, Matrix.Identity(4))
                lineset_object.parent = parent_object
                shape_objects[f"{parent_object.name}_lineset"] = lineset_object
        elif child.tag == 'Sphere':
            radius = float(child.get('radius', '1'))
            sphere_object = create_sphere(f"{parent_object.name}_sphere", radius, Matrix.Identity(4))
            sphere_object.parent = parent_object
            shape_objects[f"{parent_object.name}_sphere"] = sphere_object
        elif child.tag == 'IndexedFaceSet':
            indexed_face_set_object = process_indexed_face_set(child, parent_object)
            if indexed_face_set_object:
                shape_objects.update(indexed_face_set_object)
    return shape_objects

def process_indexed_face_set(indexed_face_set, parent_object):
    coordinate = indexed_face_set.find('Coordinate')
    if coordinate is not None:
        points = coordinate.get('point').split()
        vertices = [Vector((float(x), float(y), float(z))) for x, y, z in zip(*[iter(points)]*3)]

        coord_index = indexed_face_set.get('coordIndex')
        if coord_index is not None:
            faces = [int(x) for x in coord_index.split() if x != "-1"]
            mesh = bpy.data.meshes.new(f"{parent_object.name}_mesh")
            obj = bpy.data.objects.new(f"{parent_object.name}_mesh", mesh)
            bpy.context.collection.objects.link(obj)
            obj.parent = parent_object
            mesh.from_pydata(vertices, [], [faces[i:i+3] for i in range(0, len(faces), 3)])
            mesh.update()
            return {f"{parent_object.name}_mesh": obj}
    return None

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

def set_view_to_positive_z():
    # Get the 3D view area
    # area = next(area for area in bpy.context.screen.areas if area.type == 'VIEW_3D')
    for area in bpy.context.screen.areas:
        # Get the 3D view space
        #space = area.spaces.active
        for space in area.spaces:

            # Turn off the grid floor
            # space.overlay.show_floor = False

            # If you also want to turn off the axes
            #space.overlay.show_axis_x = False
            #space.overlay.show_axis_y = False
            #space.overlay.show_axis_z = False

            if hasattr(space, "region_3d"):
                # Set the view to orthographic
                space.region_3d.view_perspective = 'ORTHO'

                # Set the view rotation
                rotation = Euler((0, 0, 0), 'XYZ')  # no rotation
                space.region_3d.view_rotation = rotation.to_quaternion()

                # Optionally, you can set the view distance
                space.region_3d.view_distance = 20

    # Update the view
    bpy.context.view_layer.update()

# Call the function to set the view
set_view_to_positive_z()

#file_path = "JinScaledV2L1LOA4MinimumSkeleton20c.x3d"  # Replace with your X3D file path
file_path = "localcentersjoe.x3d"  # Replace with your X3D file path

main(file_path)

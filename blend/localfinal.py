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

def process_node(node, parent_object=None, def_nodes=None):
    animated_objects = {}
    cx = 0
    cy = 0
    cz = 0

    # Check if this is a USE node
    use_name = node.get('USE')
    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif use_name and def_nodes and use_name in def_nodes:
        # If it's a USE node, retrieve the corresponding DEF node
        def_node = def_nodes[use_name]
        # Create a copy of the DEF node's Blender object
        new_object = def_node.copy()
        new_object.parent = parent_object
        bpy.context.scene.collection.objects.link(new_object)
        animated_objects[use_name] = new_object
        return animated_objects

    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass # no children
    elif node.tag in ('Transform', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'Group', 'HAnimSegment'):
        if not node.tag in ('Group', 'HAnimSegment'):
            (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = parse_transform(node)

            translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
            rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
            scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))

            transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
        else:
            transform_matrix = Matrix()
            translation_matrix = Matrix()

        name = node.get('DEF', node.tag)
        empty = create_empty(name, transform_matrix)
        if cx != 0 or cy != 0 or cz != 0:
            empty['x3dtranslation'] = translation_matrix
        else:
            empty['x3dtranslation'] = None
        animated_objects[name] = empty

        # If this is a DEF node, add it to the def_nodes dictionary
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
            else:
                animated_objects.update(process_node(child, current_object, def_nodes=def_nodes))
    else:
        for child in node:
            animated_objects.update(process_node(child, parent_object, def_nodes=def_nodes))

    return animated_objects

#def create_animation_center(obj, keyframes):
#    if not obj.animation_data:
#        obj.animation_data_create()
#    action = bpy.data.actions.new(name=f"{obj.name}_Action")
#    obj.animation_data.action = action
#
#    center = Vector(obj['x3dlocation'][:])
#
#    for i in range(3):  # x, y, z
#        fc = action.fcurves.new(data_path="rotation_euler", index=i)
#        for frame, value in keyframes:
#            fc.keyframe_points.insert(frame, value[i])
#
#    # Add keyframes for location to compensate for rotation around center
#    for i in range(3):  # x, y, z
#        fc = action.fcurves.new(data_path="location", index=i)
#        for frame, rotation in keyframes:
#            offset = center - rotation.to_matrix() @ center
#            fc.keyframe_points.insert(frame, offset[i])

def create_animation(obj, keyframes):
    if not obj.animation_data:
        obj.animation_data_create()
    action = bpy.data.actions.new(name=f"{obj.name}_Action")
    obj.animation_data.action = action

    for i in range(3):  # x, y, z
        fc = action.fcurves.new(data_path="rotation_euler", index=i)
        for frame, value in keyframes:
            fc.keyframe_points.insert(frame, value[i])

    if obj['x3dtranslation']:
        center = Matrix(obj['x3dtranslation']).to_translation()
        print(f"center {center}")
        # if center[0] == 0 and center[1] == 0 and center[2] == 0:
        # center = matrix.to_translation()
        # Add keyframes for location to compensate for rotation around center
        for i in range(3):  # x, y, z
            fc = action.fcurves.new(data_path="location", index=i)
            for frame, rotation in keyframes:
                offset = center - rotation.to_matrix() @ center
                fc.keyframe_points.insert(frame, offset[i])

def main(file_path):
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete()

    tree = ET.parse(file_path)
    root = tree.getroot()

    def_nodes = {}

    scene = root.find('Scene')
    if scene is not None:
        animated_objects = process_node(scene, def_nodes=def_nodes)

    # Animation setup
    orientationInterpolator = root.find(".//OrientationInterpolator[@DEF='Rotater']")
    if orientationInterpolator is not None:
        keys = list(map(float, orientationInterpolator.get('key').split()))
        keyValues = list(map(float, orientationInterpolator.get('keyValue').split()))

        keyframes = []
        for i, key in enumerate(keys):
            frame = int(key * 100)  # Assuming 100 frames for full animation
            axis = Vector(keyValues[i*4:i*4+3])
            angle = keyValues[i*4+3]
            rotation = Quaternion(axis, angle).to_euler()
            keyframes.append((frame, rotation))

        # Find all objects that should be animated based on ROUTE nodes
        route_targets = set()
        for route in root.findall(".//ROUTE"):
            if route.get('toField') == 'rotation':
                route_targets.add(route.get('toNode'))

        for obj_name in route_targets:
            if obj_name in animated_objects:
                obj = animated_objects[obj_name]
                create_animation(obj, keyframes)
                print(f"Animating {obj.name}")


    # Set up animation playback
    bpy.context.scene.frame_start = 0
    bpy.context.scene.frame_end = 100
    bpy.context.scene.render.fps = 30

    # Set up camera
    bpy.ops.object.camera_add(location=(0, -20, 20))
    camera = bpy.context.active_object
    bpy.context.scene.camera = camera

    # Set up lighting
    bpy.ops.object.light_add(type='SUN', location=(5, 5, 5))

# Choose which file to load
file_path = "localcentersjoe.x3d"  # Replace with your X3D file path

main(file_path)


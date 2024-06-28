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

def process_node(node, parent_object=None):
    if node.tag == 'Transform':
        (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = parse_transform(node)
        
        translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
        rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
        scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))
        
        transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
        
        name = node.get('DEF', 'Transform')
        empty = create_empty(name, transform_matrix)
        
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
            else:
                process_node(child, current_object)
    else:
        for child in node:
            process_node(child, parent_object)

def create_animation(obj, keyframes):
    if not obj.animation_data:
        obj.animation_data_create()
    action = bpy.data.actions.new(name=f"{obj.name}_Action")
    obj.animation_data.action = action

    for i in range(3):  # x, y, z
        fc = action.fcurves.new(data_path="rotation_euler", index=i)
        for frame, value in keyframes:
            fc.keyframe_points.insert(frame, value[i], options={'FAST'})

def main(file_path):
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete()

    tree = ET.parse(file_path)
    root = tree.getroot()
    
    scene = root.find('Scene')
    if scene is not None:
        process_node(scene)

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

        # Find all objects that should be animated and apply the animation only once
        animated_object_names = {'TransformTargetParent', 'TransformTargetChild'}
        animated_objects = [obj for obj in bpy.data.objects if obj.name in animated_object_names]
        
        for obj in animated_objects:
            create_animation(obj, keyframes)

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
file_path = "localrotation.x3d"  # Replace with your X3D file path
main(file_path)


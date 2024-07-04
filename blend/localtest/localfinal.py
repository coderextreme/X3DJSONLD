import xml.etree.ElementTree as ET
import bpy
from mathutils import Matrix, Vector, Quaternion, Euler


def strip_commas_and_split(value):
    #if not value:
    #    return []
    return value.replace(',', ' ').split()

def parse_transform(transform):
    try:
        translation = strip_commas_and_split(transform.get('translation', '0 0 0'))
        rotation = strip_commas_and_split(transform.get('rotation', '0 0 1 0'))
        scale = strip_commas_and_split(transform.get('scale', '1 1 1'))
        center = strip_commas_and_split(transform.get('center', '0 0 0'))

        tx, ty, tz = map(float, translation)
        rx, ry, rz, angle = map(float, rotation)
        sx, sy, sz = map(float, scale)
        cx, cy, cz = map(float, center)

        return (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz)
    except ValueError as e:
        print(f"Error parsing transform: {e}")
        return (0, 0, 0), (0, 0, 1, 0), (1, 1, 1), (0, 0, 0)

def create_empty(name, matrix):
    try:
        bpy.ops.object.empty_add(type='PLAIN_AXES')
        bpy.ops.transform.resize(value=(0.01, 0.01, 0.01))
        empty = bpy.context.active_object
        empty.name = name
        empty.matrix_world = matrix
        return empty
    except RuntimeError as e:
        print(f"Error creating empty object: {e}")
        return None

def create_text_shape(text_node, parent_object):
    string = text_node.get('string', '')
    font_style = text_node.find('FontStyle')

    # Create text object
    bpy.ops.object.text_add()
    text_object = bpy.context.active_object
    text_object.data.body = string

    # Set font properties if FontStyle is present
    if font_style is not None:
        family = font_style.get('family', 'SERIF')
        style = font_style.get('style', 'PLAIN')
        size = float(font_style.get('size', '1.0'))

        # Set font (you may need to adjust this based on available fonts)
        # For now, we'll use the default font

        # Set style
        if 'ITALIC' in style.upper():
            text_object.data.shear = 0.2  # Simulate italic
        if 'BOLD' in style.upper():
            text_object.data.extrude = 0.1  # Simulate bold

        # Set size
        text_object.scale = Vector((size, size, size))

    # Parent the text object
    text_object.parent = parent_object

    return text_object

def create_empty_hanim(name, transform_data, parent=None):
    (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = transform_data
    
    bpy.ops.object.empty_add(type='PLAIN_AXES')
    bpy.ops.transform.resize(value=(0.01, 0.01, 0.01))
    empty = bpy.context.active_object
    empty.name = name
    
    translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
    rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
    scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))
    transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
    
    if parent:
        empty.parent = parent
        # Convert the global coordinates to local coordinates
        local_matrix = parent.matrix_world.inverted() @ transform_matrix
        empty.matrix_local = local_matrix
    else:
        empty.matrix_world = transform_matrix
    
    if cx != 0 or cy != 0 or cz != 0:
        empty['x3dtranslation'] = translation_matrix
    else:
        empty['x3dtranslation'] = None
    
    print(f"Created empty object '{name}' at global {transform_matrix.to_translation()}, local {empty.location}")
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

    if len(coordinates) < 6:  # At least two points (6 coordinates) are needed
        print(f"Not enough coordinates for LineSet {name}")
        return None

    mesh = bpy.data.meshes.new(name)
    obj = bpy.data.objects.new(name, mesh)
    bpy.context.collection.objects.link(obj)
    obj.matrix_world = matrix

    try:
        vertices = [Vector((float(x), float(y), float(z))) for x, y, z in zip(*[iter(coordinates)]*3)]
        edges = [(i, i + 1) for i in range(0, len(vertices) - 1, 2)]

        mesh.from_pydata(vertices, edges, [])
        mesh.update()
    except ValueError as e:
        print(f"Error creating LineSet {name}: {e}")
        bpy.data.objects.remove(obj)
        return None

    return obj

def create_sphere(name, radius, matrix):
    bpy.ops.mesh.primitive_uv_sphere_add(radius=radius)
    sphere = bpy.context.active_object
    sphere.name = name
    sphere.matrix_world = matrix
    return sphere

def process_node(node, parent_object=None, def_nodes=None):
    if node.tag in ('HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'HAnimSegment'):
        return process_node_hanim(node, parent_object, def_nodes)

    animated_objects = {}
    cx, cy, cz = 0, 0, 0

    use_name = node.get('USE')
    if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
        pass
    elif node.tag in ('HAnimSegment') and node.get('containerField') == 'segments':
        pass
    elif node.tag in ('HAnimSite') and node.get('containerField') == 'sites':
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
    elif node.tag in ('HAnimSite') and node.get('containerField') == 'sites':
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

def process_node_hanim(node, parent_object=None, def_nodes=None):
    if node.tag in ('Transform', 'Group'):
        return process_node(node, parent_object, def_nodes)

    animated_objects = {}
    
    use_name = node.get('USE')
    if node.tag in ('HAnimJoint', 'HAnimSegment', 'HAnimSite') and node.get('containerField') in ('joints', 'segments', 'sites'):
        return animated_objects
    elif use_name and def_nodes and use_name in def_nodes:
        new_object = def_nodes[use_name].copy()
        new_object.parent = parent_object
        bpy.context.scene.collection.objects.link(new_object)
        animated_objects[use_name] = new_object
        return animated_objects

    if node.tag in ('Transform', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'Group', 'HAnimSegment'):
        if node.tag not in ('Group', 'HAnimSegment'):
            transform_data = parse_transform(node)
        else:
            transform_data = ((0, 0, 0), (0, 0, 1, 0), (1, 1, 1), (0, 0, 0))

        name = node.get('DEF', node.tag)
        empty = create_empty_hanim(name, transform_data, parent_object)
        animated_objects[name] = empty

        def_name = node.get('DEF')
        if def_name and def_nodes is not None:
            def_nodes[def_name] = empty

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

def create_material(material_node):
    material = bpy.data.materials.new(name="X3DMaterial")
    material.use_nodes = True
    nodes = material.node_tree.nodes
    principled = nodes["Principled BSDF"]

    diffuse_color = list(map(float, material_node.get('diffuseColor', '0.8 0.8 0.8').split()))
    specular_color = list(map(float, material_node.get('specularColor', '0.2 0.2 0.2').split()))
    emissive_color = list(map(float, material_node.get('emissiveColor', '0 0 0').split()))
    ambient_intensity = float(material_node.get('ambientIntensity', '0.2'))
    shininess = float(material_node.get('shininess', '0.2'))
    transparency = float(material_node.get('transparency', '0'))

    # Helper function to safely set input values
    def set_input(name, value):
        if name in principled.inputs:
            if principled.inputs[name].type == 'RGBA':
                principled.inputs[name].default_value = (*value, 1)
            elif principled.inputs[name].type == 'VALUE':
                principled.inputs[name].default_value = value if isinstance(value, float) else sum(value) / len(value)

    set_input('Base Color', diffuse_color)
    set_input('Specular', specular_color)
    set_input('Specular Tint', specular_color)
    set_input('Emission', emissive_color)
    set_input('Emission Color', emissive_color)

    # Convert shininess to roughness (Blender uses roughness instead of shininess)
    roughness = 1 - (shininess / 1)  # Assuming shininess is in [0, 1] range
    set_input('Roughness', roughness)

    set_input('Alpha', 1 - transparency)
    set_input('Transmission', transparency)

    return material

def process_shape(shape_node, parent_object):
    shape_objects = {}
    material = None
    
    appearance = shape_node.find('Appearance')
    if appearance is not None:
        material_node = appearance.find('Material')
        if material_node is not None:
            material = create_material(material_node)

    for child in shape_node:
        if child.tag == 'Box':
            box_name = f"{parent_object.name}_box"
            size = tuple(map(float, child.get('size', '1 1 1').split()))
            box_object = create_box(box_name, size, Matrix.Identity(4))
            box_object.parent = parent_object
            if material:
                box_object.data.materials.append(material)
            shape_objects[box_name] = box_object
        elif child.tag == 'LineSet':
            coordinate = child.find('Coordinate')
            if coordinate is not None:
                points = strip_commas_and_split(coordinate.get('point'))
                lineset_object = create_lineset(f"{parent_object.name}_lineset", points, Matrix.Identity(4))
                lineset_object.parent = parent_object
                if material:
                    lineset_object.data.materials.append(material)
                shape_objects[f"{parent_object.name}_lineset"] = lineset_object
        elif child.tag == 'Sphere':
            radius = float(child.get('radius', '1'))
            sphere_object = create_sphere(f"{parent_object.name}_sphere", radius, Matrix.Identity(4))
            sphere_object.parent = parent_object
            if material:
                sphere_object.data.materials.append(material)
            shape_objects[f"{parent_object.name}_sphere"] = sphere_object
        elif child.tag == 'IndexedFaceSet':
            coord_element = child.find('Coordinate')
            if coord_element is not None:
                indexed_face_set_object = process_indexed_face_set(child, coord_element)
                indexed_face_set_object.parent = parent_object
                if material:
                    indexed_face_set_object.data.materials.append(material)
                shape_objects[f"{parent_object.name}_mesh"] = indexed_face_set_object
        elif child.tag == 'Text':
            text_object = create_text_shape(child, parent_object)
            if material:
                text_object.data.materials.append(material)
            shape_objects[f"{parent_object.name}_text"] = text_object

    return shape_objects

def triangulate_face(indices):
    if len(indices) < 3:
        return []
    if len(indices) == 3:
        return [indices]
    triangles = []
    for i in range(1, len(indices) - 1):
        triangles.append([indices[0], indices[i], indices[i + 1]])
    return triangles

def process_indexed_face_set(face_set, coordinates):
    coord_index = list(map(int, strip_commas_and_split(face_set.get('coordIndex', ''))))
    vertices = list(map(float, strip_commas_and_split(coordinates.get('point', ''))))
    vertex_tuples = list(zip(*[iter(vertices)]*3))

    faces = []
    current_face = []

    for index in coord_index:
        if index == -1:
            if len(current_face) > 2:
                faces.extend(triangulate_face(current_face))
            current_face = []
        else:
            current_face.append(index)

    if current_face:
        if len(current_face) > 2:
            faces.extend(triangulate_face(current_face))

    mesh = bpy.data.meshes.new("mesh")
    obj = bpy.data.objects.new("object", mesh)
    bpy.context.collection.objects.link(obj)

    mesh.from_pydata(vertex_tuples, [], faces)
    mesh.update()

    return obj

def create_animation(obj, keyframes, data_path):
    if not obj.animation_data:
        obj.animation_data_create()
    action = bpy.data.actions.new(name=f"{obj.name}_Action")
    obj.animation_data.action = action

    for i in range(3):  # x, y, z
        fc = action.fcurves.new(data_path=data_path, index=i)
        for frame, value in keyframes:
            try:
                fc.keyframe_points.insert(frame, value[i])
            except (IndexError, TypeError) as e:
                print(f"Error inserting keyframe for {obj.name}: {e}")

    if obj.get('x3dtranslation') and data_path == "rotation_euler":
        try:
            center = Matrix(obj['x3dtranslation']).to_translation()
            print(f"center {center}")
            for i in range(3):  # x, y, z
                fc = action.fcurves.new(data_path="location", index=i)
                for frame, rotation in keyframes:
                    offset = center - rotation.to_matrix() @ center
                    fc.keyframe_points.insert(frame, offset[i])
        except Exception as e:
            print(f"Error creating animation for {obj.name}: {e}")

def parse_interpolators(root):
    interpolators = {}
    for interp in root.findall(".//OrientationInterpolator") + root.findall(".//PositionInterpolator"):
        interp_type = interp.tag
        interp_def = interp.get('DEF')
        keys = list(map(float, strip_commas_and_split(interp.get('key'))))
        key_values = list(map(float, strip_commas_and_split(interp.get('keyValue'))))

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

    try:
        tree = ET.parse(file_path)
        root = tree.getroot()
    except ET.ParseError as e:
        print(f"Error parsing X3D file: {e}")
        return

    def_nodes = {}

    scene = root.find('Scene')
    if scene is not None:
        animated_objects = process_node(scene, def_nodes=def_nodes)

    interpolators = parse_interpolators(root)
    apply_interpolations(root, animated_objects, interpolators)

    #hanim_humanoid = animated_objects.get('hanim_JinLOA1')
    #if hanim_humanoid:
    #    hanim_humanoid.scale = Vector((1.0, 1.0, 1.0))
    #    bpy.ops.object.select_all(action='DESELECT')  # Deselect all to avoid accidentally applying scale to other objects
    #    hanim_humanoid.select_set(True)
    #    bpy.ops.object.transform_apply(location=False, rotation=False, scale=True)

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

            if space.type == 'VIEW_3D':
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
#file_path = "JinScaledV2L1LOA4OnlyMarkers11f.x3d"  # Replace with your X3D file path
#file_path = "JinScaledV2L1LOA4OnlyMarkers11g.x3d"  # Replace with your X3D file path
#file_path = "JinConcat11f.x3d"  # Replace with your X3D file path
#file_path = "localrotation.x3d"  # Replace with your X3D file path
file_path = "JinLOA1scaled1.x3d"  # Replace with your X3D file path

main(file_path)

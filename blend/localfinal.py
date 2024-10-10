import xml.etree.ElementTree as ET
import bpy
import os
import sys
from mathutils import Matrix, Vector, Quaternion, Euler

#############################################################
objs = bpy.data.objects
bpy.context.view_layer.objects.active = objs["Cube"]
objs.remove(objs["Cube"], do_unlink=True)
#############################################################

#############################################################
# Get the default camera
camera = bpy.data.objects["Camera"]

# Remove the camera from all collections
for collection in bpy.data.collections:
    if camera.name in collection.objects:
        collection.objects.unlink(camera)

# Remove the camera from the scene
if camera.name in bpy.context.scene.collection.objects:
    bpy.context.scene.collection.objects.unlink(camera)

# Delete the camera object
bpy.data.objects.remove(camera, do_unlink=True)
#############################################################


#############################################################
# Get the default light
light = bpy.data.objects["Light"]

# Remove the light from all collections
for collection in bpy.data.collections:
    if light.name in collection.objects:
        collection.objects.unlink(light)

# Remove the light from the scene
if light.name in bpy.context.scene.collection.objects:
    bpy.context.scene.collection.objects.unlink(light)

# Delete the light object
bpy.data.objects.remove(light, do_unlink=True)
#############################################################

def strip_commas_and_split(value):
    #if not value:
    #    return []
    return value.replace(',', ' ').split()

def compose_name(node):
    node_def = node.get('DEF')
    node_use = node.get('USE')
    if node.tag.startswith("HAnim"):
        if node_def is not None:
            name = node.tag+"."+node_def+".0"
        elif node_use is not None:
            name = node.tag+"."+node_use+".0"
        else:
            name = node.tag+"."+node.get('name')+".0"
    elif node_def is not None:
        name = node.tag+"."+node_def+".0"
    elif node_use is not None:
        name = node.tag+"."+node_use+".0"
    else:
        name = node.tag+".0"
    return name

def compose_use(node):
    return compose_name(node)+str(unique.getNext())

def put_value(name, def_nodes, obj):
    # print('PUT', name)
    if obj is not None and name is not None and def_nodes is not None :
        def_nodes[name] = obj
    # print(f"def_nodes node {node} obj {obj} def_name {def_name} {def_nodes} node.tag {node.tag}")

def get_value(name, def_nodes):
    # print('GET', name)
    if name is not None and def_nodes is not None and name in def_nodes:
        return def_nodes[name]
    return None

def child_lookup(parent_node, def_nodes, child_tag):
    child_node = parent_node.find(child_tag)
    if child_node is not None:
        name = compose_name(child_node) 
        if child_node.get('DEF'):
            put_value(name, def_nodes, child_node)
        elif child_node.get('USE'):
            child_node = get_value(name, def_nodes)
        return child_node
    elif child_tag != 'Appearance':
        print(f"No valid {child_tag} for {parent_node.tag}")
        return None

def color_lookup(parent_node, def_nodes, child_tag):
    color = parent_node.find(child_tag)
    color_values = None
    if color is not None:
        if color.get('color'):
            color_values = strip_commas_and_split(color.get('color'))
        color_def = color.get('DEF')
        color_use = color.get('USE')
        color_name = compose_name(color)
        if color_def is not None:
            put_value(color_name, def_nodes, color_values)
        elif color_use is not None:
            color_values = get_value(color_name, def_nodes)
    return color_values

def def_lookup(node, def_nodes, value, parent_object, animated_objects):
    if node is not None:
        node_def = node.get('DEF')
        node_use = node.get('USE')
        name = compose_name(node)
        if node_use is not None:
            value = get_value(name, def_nodes)
        if value is None:
            # print('NEW', name)
            value = bpy.data.objects.new(name, None)
            # bpy.ops.object.empty_add(type='SINGLE_ARROW')
            # value = bpy.context.active_object
            bpy.ops.transform.resize(value=(0.01, 0.01, 0.01))
            value.name = name
            bpy.context.collection.objects.link(value)
            if node_def is not None:
                animated_objects[node_def] = value
                put_value(name, def_nodes, value)
                # print('PUT', name)
        else:
            # print('FOUND', name)
            pass
    if hasattr(value, "parent") and parent_object is not None:
        value.parent = parent_object
    return value


class uniqueClass:
    uniqueIdCounter = 0
    def getNext(self):
        self.uniqueIdCounter += 1
        if self.uniqueIdCounter % 25 == 0:
            print(f"{self.uniqueIdCounter}")

        return self.uniqueIdCounter
    def copy(self, node, def_nodes, parent_object, animated_objects):
        use_name = node.get('USE')
        name = compose_name(node) 
        # print('COPY?', name)
        if use_name is not None:
            old_obj = get_value(name, def_nodes)
            if old_obj is not None:
                # print('COPYING', name)
                new_obj = old_obj.copy()
                if hasattr(new_obj, "name"):
                    new_obj.name = compose_use(node)
                    print(f"COPYED {new_obj.name}")
                if hasattr(new_obj, "parent"):
                    new_obj.parent = parent_object
                    bpy.context.scene.collection.objects.link(new_obj)
                animated_objects[use_name] = new_obj
                return new_obj
        return None

unique = uniqueClass()

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

def create_transform(node, def_nodes, parent_object, animated_objects):
    # print('CREATE', node.tag)
    transform_data = parse_transform(node)
    try:
        (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = transform_data

        translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
        rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
        scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))
        transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
    

        empty = def_lookup(node, def_nodes, None, parent_object, animated_objects)
        if cx != 0 or cy != 0 or cz != 0:
            empty['x3dtranslation'] = translation_matrix
        else:
            empty['x3dtranslation'] = None

        if parent_object:
            # empty.matrix_world = parent_object.matrix_world @ transform_matrix
            empty.matrix_world = transform_matrix
        else:
            empty.matrix_world = transform_matrix

        return empty
    except RuntimeError as e:
        print(f"Error creating transform object: {e}")
        return None

def create_empty(node, def_nodes, parent_object, animated_objects):
    # print('CREATE', node.tag)
    try:
        empty = def_lookup(node, def_nodes, None, parent_object, animated_objects)
        if node.tag == "TouchSensor":
            node_def = node.get('DEF')
            node_use = node.get('USE')
            description = node.get('description')
            if description is not None:
                description = "."+(description.replace(' ', '\$'))
            else:
                description = ""
            if node_def is not None:
                empty.name = node.tag+description+"."+node_def
            elif node_use is not None:
                empty.name = node.tag+description+"."+node_use
            else:
                empty.name = node.tag+description
        return empty
    except Exception as ex:
        print(f"Error handling empty node: {ex}")
        return None

    

def create_text(name, node, def_nodes):
    # print('CREATE', node.tag)
    string = node.get('string', '')
    body = [w.strip('"') for w in string.split('" "')]
    font_curve = bpy.data.curves.new(type="FONT", name=name+"_data")
    font_curve.body = "\n".join(body)
    font_obj = bpy.data.objects.new(name=name, object_data=font_curve)
    bpy.context.scene.collection.objects.link(font_obj)

    font_style = child_lookup(node, def_nodes, "FontStyle")
    # Set font properties if FontStyle is present
    if font_style is not None:
        family = font_style.get('family', 'SERIF')
        style = font_style.get('style', 'PLAIN')
        size = float(font_style.get('size', '1.0'))

        # Set font (you may need to adjust this based on available fonts)
        font_obj.data.family = family

        # Set style
        if 'ITALIC' in style.upper():
            font_obj.data.shear = 0.2  # Simulate italic
        if 'BOLD' in style.upper():
            font_obj.data.extrude = 0.1  # Simulate bold


        # Set size
        font_obj.scale = Vector((size, size, size))
        # text_object.data.size = size

    return font_obj

def create_box(name, node, def_nodes):
    # print('CREATE', node.tag)
    scale = tuple(map(float, node.get('size', '1 1 1').split()))
    # print(f"box size {size}")
    # bpy.ops.mesh.primitive_cube_add(size=(size[0] + size[1] + size[2])/3)  # sorry, no prisms
    bpy.ops.mesh.primitive_cube_add(size=2, enter_editmode=False, align='WORLD', scale=scale)
    box = bpy.context.active_object
    # box.matrix_local = matrix.copy()
    # box.matrix_local = matrix
    return box

def get_color_values(node, def_nodes):
    colorRGBA = node.find('ColorRGBA')
    color = node.find('Color')
    colorRGBA_values = color_lookup(node, def_nodes, "ColorRGBA")
    color_values = color_lookup(node, def_nodes, "Color")
    if colorRGBA_values is not None:
        colors = [tuple(map(float, colorRGBA_values[i:i+4])) for i in range(0, len(colorRGBA_values), 4)]
        return colors
    elif color_values is not None:
        colors = [tuple(map(float, color_values[i:i+3] + [1.0])) for i in range(0, len(color_values), 3)]
        return colors
    else:
        return None

def create_indexed_line_set(name, node, def_nodes):
    # print('CREATE', node.tag)
    coordinate = child_lookup(node, def_nodes, "Coordinate")
    if coordinate is not None:
        coord_index = list(map(int, strip_commas_and_split(node.get('coordIndex', ''))))
        color_index = list(map(int, strip_commas_and_split(node.get('colorIndex', ''))))
        points = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))
    if not coord_index or not points:
        print(f"Invalid data for IndexedLineSet {name}: coord_index or points are missing")
        return None

    if len(points) % 3 != 0:
        print(f"Points array length {len(points)} is not a multiple of 3 for IndexedLineSet {name}")
        return None

    # Convert points to tuples of coordinates
    vertices = [(points[i], points[i+1], points[i+2]) for i in range(0, len(points), 3)]

    # Ensure coord_index is properly aligned
    if max(coord_index) >= len(vertices):
        print(f"coord_index contains values outside the range of vertices in IndexedLineSet {name}")
        return None

    #print(f"vertices {vertices}")
    # Split the coord_index into separate segments by detecting -1, which usually indicates the end of a segment
    segments = [vertices[idx] for idx in coord_index if idx != -1]
    #print(f"segments {segments}")

    # Validate and process color information
    colors = get_color_values(node, def_nodes)
    expanded_colors = [(colors[i], colors[i]) for i in color_index]
    return create_common_line_set(name, segments, expanded_colors)

def create_line_set(name, node, def_nodes):
    # print('CREATE', node.tag)
    coordinate = child_lookup(node, def_nodes, "Coordinate")
    if coordinate is not None:
        points = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))
        vertices = [(points[i], points[i+1], points[i+2]) for i in range(0, len(points), 3)]
        colors = get_color_values(node, def_nodes)
        expanded_colors = [(col, col) for col in colors]
        #print(f"expanded_colors {expanded_colors}")
        obj = create_common_line_set(name, vertices, expanded_colors)
        return obj

def create_common_line_set(name, segments, colors):
    # print(f"COLOR {name} {colors}")
    if not segments:
        print(f"No valid segments to create LineSet {name}")
        return None

    curve_data = bpy.data.curves.new(name+"_data", 'CURVE')
    curve_data.dimensions = '3D'
    # print('NEW', name)
    curve_object = bpy.data.objects.new(name, curve_data)
    bpy.context.collection.objects.link(curve_object)

    polyline = curve_data.splines.new('POLY')
    polyline.points.add(len(segments)-1)
    for i in range(len(segments)):
        if i % 2 == 0:
            polyline.points[i].co = (*segments[i], 1)
            polyline.points[i+1].co = (*segments[i+1], 1)

        # Create a material and assign the colors
    for color in colors:
        # print(f"create color {color[:]}")
        for end_color in color:
            material = bpy.data.materials.new(name=f"{name}_segment_{color.index(end_color)}_material")
            material.use_nodes = True
            material.diffuse_color = end_color
            curve_data.materials.append(material)

    return curve_object

#def create_old_line_set(name, coordinate, colors):
#    if len(coordinate) % 3 != 0:
#        print(f"Not enough coordinates for LineSet {name}")
#        return None
#
#    # Create a new curve object
#    curve_data = bpy.data.curves.new(name=name, type='CURVE')
#    curve_data.dimensions = '3D'
#    curve_object = bpy.data.objects.new(name, curve_data)
#    bpy.context.collection.objects.link(curve_object)
#    # curve_object.matrix_local = matrix.copy()
#    # curve_object.matrix_local = matrix
#
#    # Create a new spline in the curve
#    polyline = curve_data.splines.new('POLY')
#    polyline.points.add(len(coordinate) // 3 - 1)
#
#    # Set coordinate for the points
#    for i, point in enumerate(zip(*[iter(coordinate)]*3)):
#        polyline.points[i].co = (*point, 1)  # W-component is 1 for linear interpolation
#
#    # Set up the material
#    material = bpy.data.materials.new(name=f"{name}_material")
#    material.use_nodes = True
#    curve_object.data.materials.append(material)
#
#    # Set up nodes for gradient coloring
#    nodes = material.node_tree.nodes
#    links = material.node_tree.links
#    nodes.clear()
#
#    node_output = nodes.new(type='ShaderNodeOutputMaterial')
#    node_emission = nodes.new(type='ShaderNodeEmission')
#    node_gradient = nodes.new(type='ShaderNodeTexGradient')
#    node_coord = nodes.new(type='ShaderNodeTexCoord')
#    node_mapping = nodes.new(type='ShaderNodeMapping')
#    
#    links.new(node_emission.outputs['Emission'], node_output.inputs['Surface'])
#    links.new(node_coord.outputs['Generated'], node_mapping.inputs['Vector'])
#    links.new(node_mapping.outputs['Vector'], node_gradient.inputs['Vector'])
#    links.new(node_gradient.outputs['Color'], node_emission.inputs['Color'])
#
#    # Configure gradient
#    node_mapping.inputs['Location'].default_value[2] = 0
#    node_mapping.inputs['Rotation'].default_value[2] = 1.5708  # Rotate 90 degrees to align gradient with curve
#
#    # Configure colors
#    if colors:
#        color_ramp = nodes.new(type='ShaderNodeValToRGB')
#        links.new(node_gradient.outputs['Fac'], color_ramp.inputs['Fac'])
#        links.new(color_ramp.outputs['Color'], node_emission.inputs['Color'])
#        
#        color_ramp.color_ramp.elements.remove(color_ramp.color_ramp.elements[1])
#        color_ramp.color_ramp.elements[0].color = colors[0]
#
#        for i, color in enumerate(colors[1:], start=1):
#            color_element = color_ramp.color_ramp.elements.new(i / (len(colors) - 1))
#            color_element.color = color
#    else:
#        # Default to a white gradient if no colors are provided
#        node_emission.inputs['Color'].default_value = (1, 1, 1, 1)
#
#    # Set curve appearance
#    curve_data.bevel_depth = 0.01  # Adjust this value to change the thickness of the line
#    curve_data.use_fill_caps = True
#
#    return curve_object

def create_sphere(name, node, def_nodes):
    # print('CREATE', node.tag)
    radius = float(node.get('radius', '1'))
    # bpy.ops.mesh.primitive_uv_sphere_add(radius=radius)
    bpy.ops.surface.primitive_nurbs_surface_sphere_add(radius=radius, enter_editmode=False, align='WORLD')
    sphere = bpy.context.active_object
    # sphere.matrix_local = matrix.copy()
    # sphere.matrix_local = matrix
    return sphere

def process_node(node, parent_object=None, def_nodes=None):
    animated_objects = {}
    cx, cy, cz = 0, 0, 0

    #if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
    #    return animated_objects
    #elif node.tag in ('HAnimSegment') and node.get('containerField') == 'segments':
    #    return animated_objects
    #elif node.tag in ('HAnimSite') and node.get('containerField') == 'sites':
    #    return animated_objects
    #el
    if node.tag in ('Shape', 'Transform', 'Group', 'TouchSensor', 'Billboard', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'HAnimSegment'):
        if def_nodes is not None:
            new_object = unique.copy(node, def_nodes, parent_object, animated_objects)
        if new_object is not None:
            # print(f"Created new copy of  {new_object}")
            return animated_objects

        if node.tag in ('Transform', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid'):
            parent_object = create_transform(node, def_nodes, parent_object, animated_objects)
        else:
            parent_object = create_empty(node, def_nodes, parent_object, animated_objects)

        # parent_object.hide_viewport = True

        if node.tag in ('Shape'):
            shape_objects = process_shape(node, parent_object, def_nodes, animated_objects)
            for name in shape_objects:
                shape = shape_objects[name]
                shape = def_lookup(node, def_nodes, shape, parent_object, animated_objects)
                animated_objects.update(shape)

    for child in node:
        child_objects = process_node(child, parent_object=parent_object, def_nodes=def_nodes)
        animated_objects.update(child_objects)
    return animated_objects

def create_material(node):
    # print('CREATE', node.tag)
    material = bpy.data.materials.new(name=compose_name(node))
    material.use_nodes = True
    nodes = material.node_tree.nodes
    principled = nodes["Principled BSDF"]

    diffuse_color = list(map(float, node.get('diffuseColor', '0.8 0.8 0.8').split()))
    specular_color = list(map(float, node.get('specularColor', '0.2 0.2 0.2').split()))
    emissive_color = list(map(float, node.get('emissiveColor', '0 0 0').split()))
    ambient_intensity = float(node.get('ambientIntensity', '0.2'))
    shininess = float(node.get('shininess', '0.2'))
    transparency = float(node.get('transparency', '0'))

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

    material.diffuse_color = diffuse_color + [1.0]
    material.specular_color = specular_color

    return material

def process_shape(shape_node, parent_object, def_nodes, animated_objects):
    shape_objects = {}
    material = None
    
    #print('S', shape_node.tag)
    name = compose_name(shape_node)
    #print(name)
    if def_nodes:
        new_object = unique.copy(shape_node, def_nodes, parent_object, animated_objects)
        if new_object is not None:
            print(f"Created new copy of {new_object.name} {new_object}")
            shape_objects[new_object.name] = new_object
            return shape_objects

    for child in shape_node:
        #print('CH3', child.tag)
        name = compose_name(child)
        #print(name)
        if child.tag in ('Box', 'LineSet', 'IndexedLineSet', 'Sphere', 'IndexedFaceSet', 'Text'):
            if def_nodes:
                new_object = unique.copy(child, def_nodes, parent_object, animated_objects)
                if new_object is not None:
                    print(f"Created new copy of {new_object.name} {new_object}")
                    shape_objects[new_object.name] = new_object
                    continue
            if child.tag == 'Box':
                obj = create_box(name, child, def_nodes)
            elif child.tag == 'LineSet':
                obj = create_line_set(name, child, def_nodes)
            elif child.tag == 'IndexedLineSet':
                obj = create_indexed_line_set(name, child, def_nodes)
            elif child.tag == 'Sphere':
                obj = create_sphere(name, child, def_nodes)
            elif child.tag == 'IndexedFaceSet':
                obj = create_indexed_face_set(name, child, def_nodes)
            elif child.tag == 'Text':
                obj = create_text(name, child, def_nodes)
            else:
                obj = None
                print(f"{name} didn't get created")

            if obj is not None:
                if parent_object is None:
                    print(f"Couldn't find parent object")
                else:
                    obj.parent = parent_object
                    # print(f"Could find object {obj.name} parent {parent_object.name} grand {parent_object.parent.name}")
                obj.name = name
                shape_objects[name] = obj
                obj = def_lookup(child, def_nodes, obj, parent_object, animated_objects)

                appearance = child_lookup(shape_node, def_nodes, 'Appearance')
                if appearance is not None:
                    material_node = child_lookup(appearance, def_nodes, 'Material')
                    if material_node is not None:
                        material = create_material(material_node)
                        if material is not None:
                            obj.data.materials.append(material)
                        else:
                            print(f"Couldn't create material")
                    else:
                        print(f"Couldn't find material {appearance}")
                else:
                    # get defaults
                    material = create_material(shape_node)
                    if material is not None:
                        obj.data.materials.append(material)
                    else:
                        print(f"Couldn't create material for shape_node")

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

def create_indexed_face_set(name, node, def_nodes):
    # print('CREATE', node.tag)
    coordinate = child_lookup(node, def_nodes, "Coordinate")
    if coordinate is not None:
        coord_index = list(map(int, strip_commas_and_split(node.get('coordIndex', ''))))
        vertices = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))
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

        # print('NEW', name)
        mesh = bpy.data.meshes.new(name+"_data")
        obj = bpy.data.objects.new(name, mesh)
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
            # print(f"center {center}")
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
        #print('I', interp.tag)
        name = compose_name(interp)
        #print(name)
        keys = list(map(float, strip_commas_and_split(interp.get('key'))))
        key_values = list(map(float, strip_commas_and_split(interp.get('keyValue'))))

        keyframes = []
        for i, key in enumerate(keys):
            frame = int(key * 250)
            if interp_type == 'OrientationInterpolator':
                axis = Vector(key_values[i*4:i*4+3])
                angle = key_values[i*4+3]
                rotation = Quaternion(axis, angle).to_euler()
                keyframes.append((frame, rotation))
            elif interp_type == 'PositionInterpolator':
                position = Vector(key_values[i*3:i*3+3])
                keyframes.append((frame, position))
        
        interpolators[name] = (interp_type, keyframes)
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
            elif interp_type == 'OrientationInterpolator' and to_field == 'set_rotation':
                create_animation(obj, keyframes, "rotation_euler")
            elif interp_type == 'PositionInterpolator' and to_field == 'translation':
                create_animation(obj, keyframes, "location")
            elif interp_type == 'PositionInterpolator' and to_field == 'set_translation':
                create_animation(obj, keyframes, "location")
            # print(f"Animating {obj.name} for {to_field}")

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

    bpy.context.scene.frame_start = 0
    bpy.context.scene.frame_end = 250
    bpy.context.scene.render.fps = 30

    bpy.ops.object.camera_add(location=(0, 1, 2))
    camera = bpy.context.active_object
    bpy.context.scene.camera = camera
    camera.location = Vector((0, 1, 2))
    camera.matrix_world = Matrix.Translation(Vector((0, 1, 2)))
    camera.matrix_local = Matrix.Translation(Vector((0, 1, 2)))
    # print(f"Camera location2 {camera.location[:]}")

    bpy.ops.object.light_add(type='SUN', location=(0, 0, 1))
    light = bpy.context.active_object
    light.matrix_world = Matrix.Rotation(3.1416, 4, Vector((0, 1, 0)))
    #direction = Vector((0,0,-1))
    #light.rotation_euler = direction.to_track_quat('-Z', 'Y').to_euler()

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


#file_path = "JinScaledV2L1LOA4MinimumSkeleton20c.x3d"
#file_path = "JinScaledV2L1LOA4MinimumSkeleton20e.x3d"
#file_path = "JinScaledV2L1LOA4MinimumSkeleton20f.x3d"
#file_path = "JinScaledV2L1LOA4OnlyMarkers11f.x3d"
#file_path = "JinScaledV2L1LOA4OnlyMarkers11g.x3d"
#file_path = "Jin11gNoUSE.x3d"
#file_path = "JinConcat11g.x3d"
#file_path = "JinConcat10h.x3d"
#file_path = "localrotation.x3d"
#file_path = "localcenters.x3d"
#file_path = "localcentersjoe.x3d"
#file_path = "JinLOA1scaled1.x3d"
#file_path = "HAnim2SpecificationLOA3Illustrated.x3d"
#file_path = "Humanoid4.1.x3d"


#file_path = 'Jin11gNoAnimation.x3d'
#file_path = 'Jin20fBillboarded5.x3d'
#file_path = 'Jin20fSegmented.x3d'
file_path = 'Jin20fOneAnimation.x3d'

print(f"Opening {file_path}")

main(file_path)

bpy.ops.export_scene.x3dv(filepath=file_path[0:-4]+"Export.x3d", export_hanim_prefix='hanim_', export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
# bpy.ops.export_scene.x3d(filepath=file_path[0:-4]+"Export.x3d", export_yup=True, export_normals=True, export_format="X3D")

dirpath = "."
bpy.ops.export_scene.gltf(
    filepath=os.path.join(dirpath, file_path[0:-4]+"Export.gltf"),
    export_yup=False,
    export_format="GLTF_SEPARATE",
    # export_format="GLB",
    use_active_collection=True
)

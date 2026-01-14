import xml.etree.ElementTree as ET
import bpy
import os
import sys
from mathutils import Matrix, Vector, Quaternion, Euler
from typing import Union, Optional
from math import sqrt, pi

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


for c in bpy.context.scene.collection.children:
    bpy.context.scene.collection.children.unlink(c)

for c in bpy.data.collections:
    if not c.users:
        bpy.data.collections.remove(c)
#############################################################

active_object = None

def_objects = {}
def_nodes = {}


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
    return str(name)

def compose_use(node):
    return compose_name(node)+str(unique.getNext())

def put_value(name, def_objects, obj):
    print('PUT', name, obj)
    if obj is not None and name is not None and def_objects is not None :
        def_objects[name] = obj
    # print(f"def_objects node {node} obj {obj} def_name {def_name} {def_objects} node.tag {node.tag}")

def get_value(name, def_objects):
    if name is not None and def_objects is not None and name in def_objects:
        print('GET', name, def_objects[name])
        return def_objects[name]
    else:
        print('GET', name, "FAILED!")
        return None

def put_node(name, obj):
    print('PUTN', name, obj)
    if obj is not None and name is not None and def_nodes is not None :
        def_nodes[name] = obj
    # print(f"def_nodes node {node} obj {obj} def_name {def_name} {def_nodes} node.tag {node.tag}")

def get_node(name):
    if name is not None and def_nodes is not None and name in def_nodes:
        print('GETN', name, def_nodes[name])
        return def_nodes[name]
    else:
        print('GETN', name, "FAILED!")
        return None

def child_lookup(parent_node, child_tag):
    if parent_node is None:
        print(f"No valid {child_tag} for None!")
    else:
        print(f"valid {parent_node.tag} for searching for {child_tag}!")
        child_node = parent_node.find(child_tag)
        if child_node is not None:
            name = compose_name(child_node) 
            print(f"sub element {child_tag} {name} node {child_node} for {parent_node.tag}")
            if child_node.get('DEF'):
                put_node(name, child_node)
                # print(f"child_node {child_tag} is {child_node} registering {name}")
            elif child_node.get('USE'):
                child_node = get_node(name)
                # print(f"child_node {child_tag} is {child_node} reusing {name}")
            print(f"returning {child_node} from child_lookup")
            return child_node
        else:
            print(f"No sub element {child_tag} for {parent_node.tag}")
            return None

def color_lookup(parent_node, def_objects, child_tag):
    color = parent_node.find(child_tag)
    color_values = None
    if color is not None:
        if color.get('color'):
            color_values = strip_commas_and_split(color.get('color'))
        color_def = color.get('DEF')
        color_use = color.get('USE')
        color_name = compose_name(color)
        if color_def is not None:
            put_value(color_name, def_objects, color_values)
        elif color_use is not None:
            color_values = get_value(color_name, def_objects)
    return color_values

def materials_lookup(node, def_objects, value, parent_object, animated_objects):
    if node is not None:
        node_def = node.get('DEF')
        node_use = node.get('USE')
        name = compose_name(node)
        if node_use is not None:
            value = get_value(name, def_objects)
        if value is None:
            print('NEW', name)
            value = bpy.data.materials.new(name=name)
            if node_def is not None:
                animated_objects[node_def] = value
                put_value(name, def_objects, value)
        else:
            print('FOUND', name, value)
            pass
    animated_objects.update(value)
    return value

def object_lookup(node, def_objects, value, parent_object, animated_objects, data):
    if node is not None:
        node_def = node.get('DEF')
        node_use = node.get('USE')
        name = compose_name(node)
        if node_use is not None:
            value = get_value(name, def_objects)
        if value is None:
            # print('NEW', name)
            value = bpy.data.objects.new(name=name, object_data=data)
            # bpy.ops.object.empty_add(type='SINGLE_ARROW')
            if value.type == 'EMPTY' and node.tag not in ('Transform', 'Group', 'Shape', 'HAnimHumanoid'):
                # value.hide_viewport = True
                value.hide_render = True
            bpy.ops.transform.resize(value=(0.01, 0.01, 0.01))
            value.name = name
            bpy.context.scene.collection.objects.link(value)
            bpy.context.view_layer.objects.active = value
            active_object = bpy.context.active_object
            if node_def is not None:
                animated_objects[node_def] = value
                put_value(name, def_objects, value)
        else:
            # print('FOUND', name)
            pass
    if hasattr(value, "parent") and parent_object is not None and not isinstance(parent_object, ET.Element):
        value.parent = parent_object
    else:
        print(f"WARNING:  Couldn't set parent {parent_object} for object")
    animated_objects.update(value)
    return value


class uniqueClass:
    uniqueIdCounter = 0
    def getNext(self):
        self.uniqueIdCounter += 1
        if self.uniqueIdCounter % 25 == 0:
            print(f"{self.uniqueIdCounter}")

        return self.uniqueIdCounter
    def copy(self, node, def_objects, parent_object, animated_objects):
        use_name = node.get('USE')
        if use_name is not None:
            name = compose_name(node) 
            print('LOOKING UP', name)
            old_obj = get_value(name, def_objects)
            if old_obj is not None:
                # print('COPYING', name)
                new_obj = old_obj.copy()
                if hasattr(new_obj, "name"):
                    new_obj.name = compose_use(node)
                    # print(f"COPYED {new_obj.name}")
                if hasattr(new_obj, "parent"):
                    new_obj.parent = parent_object
                    bpy.context.scene.collection.objects.link(new_obj)
                    bpy.context.view_layer.objects.active = new_obj
                    active_object = bpy.context.active_object
                animated_objects[use_name] = new_obj
                return new_obj
            else:
                print('DID NOT FIND', name)
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

def create_transform(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    transform_data = parse_transform(node)
    try:
        (tx, ty, tz), (rx, ry, rz, angle), (sx, sy, sz), (cx, cy, cz) = transform_data

        translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
        rotation_matrix = Matrix.Rotation(angle, 4, Vector((rx, ry, rz)))
        scale_matrix = Matrix.Scale(sx, 4, (1, 0, 0)) @ Matrix.Scale(sy, 4, (0, 1, 0)) @ Matrix.Scale(sz, 4, (0, 0, 1))
        transform_matrix = translation_matrix @ rotation_matrix @ scale_matrix
    

        empty = object_lookup(node, def_objects, None, parent_object, animated_objects, None)
        if cx != 0 or cy != 0 or cz != 0:
            empty['x3dtranslation'] = translation_matrix
        else:
            empty['x3dtranslation'] = None

        if parent_object:
            empty.matrix_world = parent_object.matrix_world @ transform_matrix
            # empty.matrix_world = transform_matrix
            # empty.matrix_local = parent_object.matrix_world @ transform_matrix
        else:
            empty.matrix_world = transform_matrix

        return empty
    except RuntimeError as e:
        print(f"Error creating transform object: {e}")
        return None

def create_empty(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    try:
        empty = object_lookup(node, def_objects, None, parent_object, animated_objects, None)
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

def create_point_light(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    """Create a point light from X3D PointLight node."""
    name = compose_name(node)
    light_data = bpy.data.lights.new(name=name, type='POINT')
    light_obj = object_lookup(node, def_objects, None, parent_object, animated_objects, light_data)
    
    # Set location
    location = node.get('location', '0 0 0').split()
    light_obj.location = Vector([float(x) for x in location])
    
    # Set intensity
    intensity = float(node.get('intensity', '1.0'))
    light_data.energy = 100 * intensity  # Scale factor for Blender
    
    # Set color
    color = node.get('color', '1 1 1').split()
    light_data.color = [float(x) for x in color]
    
    # Set attenuation
    radius = float(node.get('radius', '100'))
    light_data.distance = radius
    if hasattr(light_obj, "parent") and parent_object is not None:
        light_obj.parent = parent_object
    else:
        print(f"WARNING:  Couldn't set parent for {light_obj.name}")
    
    return light_obj

def create_directional_light(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    """Create a directional light from X3D DirectionalLight node."""
    name = compose_name(node)
    light_data = bpy.data.lights.new(name=name, type='SUN')
    light_obj = object_lookup(node, def_objects, None, parent_object, animated_objects, light_data)
    
    # Set direction
    direction = node.get('direction', '0 -1 0').split()
    dir_vector = Vector([float(x) for x in direction])
    
    # Convert direction to rotation
    rot = dir_vector.to_track_quat('-Z', 'Y').to_euler()
    light_obj.rotation_euler = rot
    
    # Set intensity
    intensity = float(node.get('intensity', '1.0'))
    light_data.energy = 100 * intensity
    
    # Set color
    color = node.get('color', '1 1 1').split()
    light_data.color = [float(x) for x in color]
    if hasattr(light_obj, "parent") and parent_object is not None:
        light_obj.parent = parent_object
    else:
        print(f"WARNING:  Couldn't set parent for {light_obj.name}")
    
    return light_obj

def create_spot_light(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    """Create a spot light from X3D SpotLight node."""
    name = compose_name(node)
    light_data = bpy.data.lights.new(name=name, type='SPOT')
    light_obj = object_lookup(node, def_objects, None, parent_object, animated_objects, light_data)
    
    # Set location
    location = node.get('location', '0 0 0').split()
    light_obj.location = Vector([float(x) for x in location])
    
    # Set direction
    direction = node.get('direction', '0 -1 0').split()
    dir_vector = Vector([float(x) for x in direction])
    rot = dir_vector.to_track_quat('-Z', 'Y').to_euler()
    light_obj.rotation_euler = rot
    
    # Set intensity
    intensity = float(node.get('intensity', '1.0'))
    light_data.energy = 100 * intensity
    
    # Set color
    color = node.get('color', '1 1 1').split()
    light_data.color = [float(x) for x in color]
    
    # Set spot angle
    cutoff_angle = float(node.get('cutOffAngle', '0.785398'))  # Default is PI/4
    light_data.spot_size = 2 * cutoff_angle
    
    # Set beam width
    beam_width = float(node.get('beamWidth', cutoff_angle))
    light_data.spot_blend = 1 - (beam_width / cutoff_angle)
    
    if hasattr(light_obj, "parent") and parent_object is not None:
        light_obj.parent = parent_object
    else:
        print(f"WARNING:  Couldn't set parent for {light_obj.name}")
    
    return light_obj

        
def create_text(name, node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    font_curve = bpy.data.curves.new(name=name+"_data", type="FONT")
    font_obj = object_lookup(node, def_objects, None, parent_object, animated_objects, font_curve)

    string = node.get('string', '')
    body = [w.strip('"') for w in string.split('" "')]
    font_curve.body = "\n".join(body)

    font_style = child_lookup(node, "FontStyle")
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

def create_box(name, node, def_objects):
    # print('CREATE', node.tag)
    scale = tuple(map(float, node.get('size', '1 1 1').split()))
    # print(f"box size {size}")
    # bpy.ops.mesh.primitive_cube_add(size=(size[0] + size[1] + size[2])/3)  # sorry, no prisms
    bpy.ops.mesh.primitive_cube_add(size=2, enter_editmode=False, align='WORLD', scale=scale)
    box = bpy.context.active_object
    # box.matrix_local = matrix.copy()
    # box.matrix_local = matrix
    return box

def get_color_values(node, def_objects):
    colorRGBA = node.find('ColorRGBA')
    color = node.find('Color')
    colorRGBA_values = color_lookup(node, def_objects, "ColorRGBA")
    color_values = color_lookup(node, def_objects, "Color")
    if colorRGBA_values is not None:
        colors = [tuple(map(float, colorRGBA_values[i:i+4])) for i in range(0, len(colorRGBA_values), 4)]
        return colors
    elif color_values is not None:
        colors = [tuple(map(float, color_values[i:i+3] + [1.0])) for i in range(0, len(color_values), 3)]
        return colors
    else:
        return []

def create_indexed_line_set(name, node, def_objects, parent_object, animated_objects):
    # print('CREATE', compose_name(node))
    coordinate = child_lookup(node, "Coordinate")
    if coordinate is not None:
        coord_index = list(map(int, strip_commas_and_split(node.get('coordIndex', ''))))
        color_index = list(map(int, strip_commas_and_split(node.get('colorIndex', ''))))
        points = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))
    else:
        coord_index = None
        color_index = None
        points = None
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
    colors = get_color_values(node, def_objects)
    expanded_colors = [(colors[i], colors[i]) for i in color_index]
    return create_common_line_set(node, name, segments, expanded_colors, def_objects, parent_object, animated_objects)

def create_line_set(name, node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    coordinate = child_lookup(node, "Coordinate")
    if coordinate is not None:
        points = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))
        vertices = [(points[i], points[i+1], points[i+2]) for i in range(0, len(points), 3)]
        colors = get_color_values(node, def_objects)
        expanded_colors = [(col, col) for col in colors]
        #print(f"expanded_colors {expanded_colors}")
        obj = create_common_line_set(node, name, vertices, expanded_colors, def_objects, parent_object, animated_objects)
        return obj

def create_common_line_set(node, name, segments, colors, def_objects, parent_object, animated_objects):
    # print(f"COLOR {name} {colors}")
    if not segments:
        print(f"No valid segments to create LineSet {name}")
        return None

    curve_data = bpy.data.curves.new(name=name+"_data", type='CURVE')
    curve_object = object_lookup(node, def_objects, None, parent_object, animated_objects, curve_data)

    curve_data.dimensions = '3D'

    polyline = curve_data.splines.new('POLY')
    polyline.points.add(len(segments)-1)
    for i in range(len(segments)):
        if i % 2 == 1:
            polyline.points[i-1].co = (*segments[i-1], 1)
            polyline.points[i].co = (*segments[i], 1)

        # Create a material and assign the colors
    for color in colors:
        # print(f"create color {color[:]}")
        for end_color in color:
            material = bpy.data.materials.new(name=f"{name}_segment_{color.index(end_color)}_material")
            material.use_nodes = True
            material.diffuse_color = end_color
            curve_data.materials.append(material)
    # print(f"Here's common line set {name}");

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
#    bpy.context.scene.collection.objects.link(curve_object)
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

def create_sphere(name, node, def_objects):
    # print('CREATE', node.tag)
    radius = float(node.get('radius', '1'))
    # bpy.ops.mesh.primitive_uv_sphere_add(radius=radius)
    bpy.ops.surface.primitive_nurbs_surface_sphere_add(radius=radius, enter_editmode=False, align='WORLD')
    sphere = bpy.context.active_object
    # sphere.matrix_local = matrix.copy()
    # sphere.matrix_local = matrix
    return sphere

def process_node(node, parent_object=None, def_objects=None):
    animated_objects = {}
    cx, cy, cz = 0, 0, 0

    #if node.tag in ('HAnimJoint') and node.get('containerField') == 'joints':
    #    return animated_objects
    #elif node.tag in ('HAnimSegment') and node.get('containerField') == 'segments':
    #    return animated_objects
    #elif node.tag in ('HAnimSite') and node.get('containerField') == 'sites':
    #    return animated_objects
    #el
    if node.tag in ('PointLight', 'DirectionalLight', 'SpotLight', 'Shape', 'Appearance', 'Viewpoint', 'Material', 'Transform', 'Group', 'TouchSensor', 'Billboard', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid', 'HAnimSegment'):
        if node.tag not in ('Material'):
            if def_objects is not None:
                new_object = unique.copy(node, def_objects, parent_object, animated_objects)
            if new_object is not None:
                # print(f"Created new copy of  {new_object}")
                return animated_objects

        if node.tag in ('Transform', 'Group', 'HAnimJoint', 'HAnimSite', 'HAnimHumanoid'):
            parent_object = create_transform(node, def_objects, parent_object, animated_objects)
        elif node.tag in ('Viewpoint'):
            camera = create_camera(node, def_objects, parent_object, animated_objects)
        elif node.tag == 'PointLight':
            light = create_point_light(node, def_objects, parent_object, animated_objects)
        elif node.tag == 'DirectionalLight':
            light = create_directional_light(node, def_objects, parent_object, animated_objects)
        elif node.tag == 'SpotLight':
            light = create_spot_light(node, def_objects, parent_object, animated_objects)
        else:
            parent_object = create_empty(node, def_objects, parent_object, animated_objects)

        # parent_object.hide_viewport = True

        if node.tag in ('Shape'):
            shape_objects = process_shape(node, parent_object, def_objects, animated_objects)
            for name in shape_objects:
                shape = shape_objects[name]
                shape = object_lookup(node, def_objects, shape, parent_object, animated_objects, None)

    for child in node:
        child_objects = process_node(child, parent_object=parent_object, def_objects=def_objects)
        animated_objects.update(child_objects)
    return animated_objects

from pathlib import Path

def create_image_texture(image_texture, def_objects, parent_object, animated_objects):
    texture_name = compose_name(image_texture)
    node_def = image_texture.get('DEF')
    node_use = image_texture.get('USE')
    if node_def:
        put_value(node_def, def_objects, image_texture.get('url'))
        url = get_value(node_def, def_objects);
    elif node_use:
        url = get_value(node_use, def_objects);
    else:
        url = image_texture.get('url')


    if url is None:
        raise ValueError(f"ImageTexture node {node_ef} has no URL attribute")
    else:
        print('URL', url)

    # Handle multiple URLs (takes first one)
    if ',' in url:
        url = url.split(',')[0]

    # Remove quotes if present
    url = url.strip('"\'')

    # Get absolute path if relative
    if not os.path.isabs(url):
        x3d_dir = os.path.dirname(os.path.abspath(file_path))
        url = os.path.join(x3d_dir, url)

    # Load image in Blender
    img = bpy.data.images.load(url)

    # Create texture
    tex = bpy.data.textures.new(name=texture_name, type='IMAGE')
    tex.image = img

    # Create material
    mat = bpy.data.materials.new(name=texture_name)
    mat.use_nodes = True
    nodes = mat.node_tree.nodes

    # Clear default nodes
    nodes.clear()

    # Create nodes
    texImage = nodes.new('ShaderNodeTexImage')
    texImage.image = img

    principled = nodes.new('ShaderNodeBsdfPrincipled')
    output = nodes.new('ShaderNodeOutputMaterial')

    # Link nodes
    links = mat.node_tree.links
    links.new(texImage.outputs['Color'], principled.inputs['Base Color'])
    links.new(principled.outputs['BSDF'], output.inputs['Surface'])

    # Get repeatS and repeatT attributes if present
    repeat_s = image_texture.get('repeatS', 'true').lower() == 'true'
    repeat_t = image_texture.get('repeatT', 'true').lower() == 'true'

    # Set texture mapping
    texImage.extension = 'REPEAT' if (repeat_s or repeat_t) else 'CLIP'

    return mat

def parse_color(color_str: str) -> tuple[float, float, float]:
    """Parse X3D color string to RGB tuple."""
    try:
        return tuple(float(x) for x in color_str.strip().split())
    except (ValueError, AttributeError):
        return (0.8, 0.8, 0.8)  # Default gray

def parse_float(value_str: str, default: float = 0.0) -> float:
    """Parse X3D float string to float value."""
    try:
        return float(value_str)
    except (ValueError, TypeError, AttributeError):
        return default

def create_material(material, def_objects, appearance, animated_objects):
    """
    Convert X3D XML string containing Appearance and Material nodes to Blender material

    Example XML input:
    <Shape>
        <Appearance>
            <Material diffuseColor='0.8 0.1 0.1'
                     specularColor='1.0 1.0 1.0'
                     emissiveColor='0.0 0.0 0.0'
                     ambientIntensity='0.2'
                     shininess='0.7'
                     transparency='0.0'/>
        </Appearance>
    </Shape>
    """

    mat = materials_lookup(material, def_objects, None, appearance, animated_objects)
    mat.use_nodes = True
    nodes = mat.node_tree.nodes

    # Clear default nodes
    nodes.clear()

    # Create Principled BSDF node
    principled = nodes.new('ShaderNodeBsdfPrincipled')
    principled.location = (0, 0)

    # Create Material Output node
    material_output = nodes.new('ShaderNodeOutputMaterial')
    material_output.location = (300, 0)

    # Link Principled BSDF to Material Output
    links = mat.node_tree.links
    links.new(principled.outputs[0], material_output.inputs[0])

    # Convert X3D material attributes to Blender properties
    def set_input(name, value):
        if name in principled.inputs:
            if principled.inputs[name].type == 'RGBA':
                principled.inputs[name].default_value = value
            elif principled.inputs[name].type == 'VALUE':
                principled.inputs[name].default_value = value if isinstance(value, float) else sum(value) / len(value)

    # Diffuse Color
    if 'diffuseColor' in material.attrib:
        r, g, b = parse_color(material.get('diffuseColor'))
        set_input('Base Color', (r, g, b, 1))
        principled.inputs['Base Color'].default_value = (r, g, b, 1)

    # Emissive Color
    if 'emissiveColor' in material.attrib:
        r, g, b = parse_color(material.get('emissiveColor'))
        set_input('Emission', (r, g, b, 1))
        # principled.inputs['Emission'].default_value = (r, g, b, 1)
        # If any emission color is set, set emission strength
        if any([r, g, b]):
            set_input('Emission Strength', 1.0)
            principled.inputs['Emission Strength'].default_value = 1.0

    # Specular Color
    if 'specularColor' in material.attrib:
        r, g, b = parse_color(material.get('specularColor'))
        # Approximate specular color using metallic
        avg_spec = (r + g + b) / 3
        set_input('Metallic', avg_spec)
        principled.inputs['Metallic'].default_value = avg_spec

    # Shininess
    if 'shininess' in material.attrib:
        shininess = parse_float(material.get('shininess'), 0.0)
        # Convert X3D shininess [0,1] to Blender roughness [0,1]
        set_input('Roughness', 1.0 - shininess)
        principled.inputs['Roughness'].default_value = 1.0 - shininess

    # Transparency
    if 'transparency' in material.attrib:
        transparency = parse_float(material.get('transparency'), 0.0)
        set_input('Alpha', 1.0 - transparency)
        principled.inputs['Alpha'].default_value = 1.0 - transparency
        if transparency > 0:
            mat.blend_method = 'BLEND'

    # Ambient Intensity
    if 'ambientIntensity' in material.attrib:
        ambient = parse_float(material.get('ambientIntensity'), 0.2)
        set_input('Subsurface', ambient)
        # principled.inputs['Subsurface'].default_value = ambient

    image_texture = child_lookup(material, 'ImageTexture')
    it_material = None
    print(f"Node tag {material} image_texture tag {image_texture}")
    if image_texture is not None:
        it_material = create_image_texture(image_texture, def_objects, material, animated_objects)
        if it_material is not None:
            active_object = bpy.context.active_object
            if active_object.data:
                if active_object.data.materials:
                    active_object.data.materials[0] = it_material
                else:
                    active_object.data.materials.append(it_material)
            else:
                print(f"WARNING: No active object for image texture")
        else:
            print(f"There is no image texture object")
    else:
        print(f"Couldn't find ImageTexture, {material.USE if hasattr(material, 'USE') else ''}")

    if mat is None:
        print(f"There is no material object")

    return mat


def assign_material_to_object(
    obj: Union[bpy.types.Object, str],
    material: Union[bpy.types.Material, str],
    index: int = 0,
    clean_existing: bool = False
) -> bool:
    """
    Assign a material to a Blender object

    Parameters:
    obj (Union[bpy.types.Object, str]): Blender object or object name
    material (Union[bpy.types.Material, str]): Material or material name
    index (int): Material slot index (for objects with multiple materials)
    clean_existing (bool): If True, removes all existing materials before assignment

    Returns:
    bool: True if successful, False if failed
    """
    # Get object if string name provided
    if isinstance(obj, str):
        obj = bpy.data.objects.get(obj)
        if obj is None:
            print(f"Object '{obj}' not found")
            return False

    # Get material if string name provided
    if isinstance(material, str):
        material = bpy.data.materials.get(material)
        if material is None:
            print(f"Material '{material}' not found")
            return False

    try:
        # Clean existing materials if requested
        if clean_existing:
            obj.data.materials.clear()

        # Make sure we have enough material slots
        while len(obj.material_slots) <= index:
            obj.data.materials.append(None)

        # Assign material to slot
        obj.material_slots[index].material = material
        return True

    except Exception as e:
        print(f"Error assigning material: {e}")
        return False

def assign_material_to_faces(
    obj: Union[bpy.types.Object, str],
    material: Union[bpy.types.Material, str],
    face_indices: list[int] = None
) -> bool:
    """
    Assign a material to specific faces of a mesh object

    Parameters:
    obj (Union[bpy.types.Object, str]): Blender mesh object or object name
    material (Union[bpy.types.Material, str]): Material or material name
    face_indices (list[int]): List of face indices to assign material to. If None, assigns to all faces

    Returns:
    bool: True if successful, False if failed
    """
    # Get object if string name provided
    if isinstance(obj, str):
        obj = bpy.data.objects.get(obj)
        if obj is None:
            print(f"Object '{obj}' not found")
            return False

    # Ensure object is a mesh
    if obj.type != 'MESH':
        print(f"Object '{obj.name}' is not a mesh")
        return False

    # Get material if string name provided
    if isinstance(material, str):
        material = bpy.data.materials.get(material)
        if material is None:
            print(f"Material '{material}' not found")
            return False

    try:
        # Add material to object if not already present
        if material.name not in obj.data.materials:
            obj.data.materials.append(material)

        material_index = list(obj.data.materials).index(material)

        # If no face indices provided, assign to all faces
        if face_indices is None:
            face_indices = range(len(obj.data.polygons))

        # Assign material to specified faces
        for face_idx in face_indices:
            if face_idx < len(obj.data.polygons):
                obj.data.polygons[face_idx].material_index = material_index

        return True

    except Exception as e:
        print(f"Error assigning material to faces: {e}")
        return False

# Example usage combining X3D material conversion and assignment:
"""
# Create material from X3D
x3d_xml = '''
<Shape>
    <Appearance>
        <Material diffuseColor='0.8 0.1 0.1'
                 specularColor='1.0 1.0 1.0'
                 shininess='0.7'/>
    </Appearance>
</Shape>
'''
material = x3d_xml_to_blender(x3d_xml, "RedMaterial")

# Assign to entire object
assign_material_to_object("Cube", material)

# Or assign to specific faces
assign_material_to_faces("Cube", material, [0, 1, 2])  # Assign to first three faces

# Example of multiple materials
assign_material_to_object("Cube", "Material1", index=0)  # First material slot
assign_material_to_object("Cube", "Material2", index=1)  # Second material slot

# Clean and assign single material
assign_material_to_object("Cube", "Material1", clean_existing=True)
"""

def apply_material(obj, mat, face_indices=None):
    if face_indices is not None:
        return assign_material_to_faces(obj, mat, face_indices)
    else:
        return assign_material_to_object(obj, mat)

def old_create_material(node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    material = None
    it_material = None
    if node is not None:
        material = materials_lookup(node, def_objects, None, parent_object, animated_objects)
        material.use_nodes = True
        nodes = material.node_tree.nodes
        principled = nodes["Principled BSDF"]

        diffuse_color = list(map(float, node.get('diffuseColor', '0.1 0.0 0.0').split()))
        specular_color = list(map(float, node.get('specularColor', '0.2 0.2 0.2').split()))
        emissive_color = list(map(float, node.get('emissiveColor', '0 0 0').split()))
        ambient_intensity = float(node.get('ambientIntensity', '0.2'))
        shininess = float(node.get('shininess', '0.2'))
        transparency = float(node.get('transparency', '0'))

        # Helper function to safely set input values
        def set_input(name, value):
            if name in principled.inputs:
                if principled.inputs[name].type == 'RGBA':
                    principled.inputs[name].default_value = value
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

        if material is not None:
            active_object = bpy.context.active_object
            if active_object.data:
                if active_object.data.materials:
                    active_object.data.materials[0] = material
                else:
                    active_object.data.materials.append(material)
            else:
                print(f"WARNING: No active object")


        image_texture = child_lookup(node, 'ImageTexture')
        print(f"Node tag {node} image_texture tag {image_texture}")
        if image_texture is not None:
            it_material = create_image_texture(image_texture, def_objects, node, animated_objects)
            if it_material is not None:
                active_object = bpy.context.active_object
                if active_object.data:
                    if active_object.data.materials:
                        active_object.data.materials[0] = it_material
                    else:
                        active_object.data.materials.append(it_material)
                else:
                    print(f"WARNING: No active object for image texture")
            else:
                print(f"Create image texture returned None")
        else:
            print(f"Couldn't find ImageTexture, {node.USE if hasattr(node, 'USE') else ''}")

    if material is None:
        print(f"There is no material object")

    return material

def process_shape(shape_node, parent_object, def_objects, animated_objects):
    shape_objects = {}
    material = None
    
    #print('S', shape_node.tag)
    name = compose_name(shape_node)
    # print(f"Shape node {name}")
    if def_objects:
        new_object = unique.copy(shape_node, def_objects, parent_object, animated_objects)
        if new_object is not None:
            # print(f"Created new copy of {new_object.name} {new_object}")
            shape_objects[new_object.name] = new_object
            return shape_objects

    # Note, there hould only be one Appearance child abnd one Geometry child
    obj = None
    material = None
    for child in shape_node:
        #print('CH3', child.tag)
        name = compose_name(child)
        #print(name)
        if child.tag in ('Box', 'LineSet', 'IndexedLineSet', 'Sphere', 'IndexedTriangleSet', 'IndexedFaceSet', 'Text'):
            if def_objects is not None:
                # print(f"def_objects is not None")
                new_object = unique.copy(child, def_objects, parent_object, animated_objects)
                if new_object is not None:
                    # print(f"Created new copy of {new_object.name} {new_object}")
                    shape_objects[new_object.name] = new_object
                    continue
            if child.tag == 'Box':
                obj = create_box(name, child, def_objects)
            elif child.tag == 'LineSet':
                obj = create_line_set(name, child, def_objects, parent_object, animated_objects)
            elif child.tag == 'IndexedLineSet':
                obj = create_indexed_line_set(name, child, def_objects, parent_object, animated_objects)
                #print(f"Here's indexed line set {obj.name}");
            elif child.tag == 'Sphere':
                obj = create_sphere(name, child, def_objects)
            elif child.tag == 'IndexedFaceSet':
                obj = create_indexed_face_set(name, child, def_objects, parent_object, animated_objects)
            elif child.tag == 'IndexedTriangleSet':
                obj = create_indexed_triangle_set(name, child, def_objects, parent_object, animated_objects)
            elif child.tag == 'Text':
                obj = create_text(name, child, def_objects, parent_object, animated_objects)

            if obj is not None:
                if parent_object is None:
                    # print(f"Couldn't find parent object")
                    pass
                else:
                    obj.parent = parent_object
                    # print(f"Could find object {obj.name} parent {parent_object.name} grand {parent_object.parent.name}")
                obj.name = name
                shape_objects[name] = obj
                obj = object_lookup(child, def_objects, obj, parent_object, animated_objects, None)
                if obj is not None:
                    # print(f"Found object_lookup {obj.name}")
                    put_value(obj.name, def_objects, obj)
            else:
                print(f"obj is None {child.tag}")
        elif child.tag in ('Appearance'):
            print(f"Appearance node {child}")
            material_node = child_lookup(child, 'Material')
            if material_node is not None:
                print(f"create material, has Material {material_node}")
                material = create_material(material_node, def_objects, child, animated_objects)
            else:
                material_node = child_lookup(child, 'PhysicalMaterial')
                if material_node is not None:
                    material = create_pbr_material(material_node, def_objects, child, animated_objects, use_cycles=True)
                else:
                    print(f"Couldn't create material, no Material or PhysicalMaterial")


    if material is None:
        print(f"WARNING: material is None")
    elif obj is None:
        print(f"WARNING: object is None")
    else:
        apply_material(obj, material)
        print(f"SUCCESS: both material and geometry are present")


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

def create_indexed_triangle_set(name, node, def_objects, parent_object, animated_objects):
    coordinate = child_lookup(node, "Coordinate")
    if coordinate is not None:
        vertices = []
        indices = []

        for coord in node.findall('.//Coordinate'):
            points = list(map(float, strip_commas_and_split(coordinate.get('point', ''))))

        vertices = [(points[i], points[i+1], points[i+2]) for i in range(0, len(points), 3)]

        indices = list(map(int, strip_commas_and_split(node.get('index', ''))))

        mesh = bpy.data.meshes.new(name=name+"_data")
        mesh.from_pydata(vertices, [], [indices])
        mesh.update()

        obj = bpy.data.objects.new(name, mesh)
        bpy.context.collection.objects.link(obj)
        return obj
    else:
        print(f"Couldn't create indexed triangle set {name}")

def create_indexed_face_set(name, node, def_objects, parent_object, animated_objects):
    # print('CREATE', node.tag)
    coordinate = child_lookup(node, "Coordinate")
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
        mesh = bpy.data.meshes.new(name=name+"_data")
        obj = object_lookup(node, def_objects, None, parent_object, animated_objects, mesh)

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

def create_camera(node, def_objects, parent_object, animated_objects):
    position = strip_commas_and_split(node.get('position', '0 0 0'))
    orientation = strip_commas_and_split(node.get('orientation', '0 0 1 0'))
    centerOfRotation = strip_commas_and_split(node.get('centerOfRotation', '0 0 0'))
    nearDistance = node.get('nearDistance', '-1')
    farDistance = node.get('farDistance', '-1')

    tx, ty, tz = map(float, position)
    rx, ry, rz, angle = map(float, orientation)
    cx, cy, cz = map(float, centerOfRotation)
    nd = float(nearDistance)
    fd = float(farDistance)
    rot = Vector((rx, ry, rz))
    pos = Vector(map(float, position))
    translation_matrix = Matrix.Translation(Vector((tx + cx, ty + cy, tz + cz)))
    rotation_matrix = Matrix.Rotation(angle, 4, rot)
    transform_matrix = translation_matrix @ rotation_matrix

    name = compose_name(node)

    camera_data = bpy.data.cameras.new(name=name)
    camera_object = object_lookup(node, def_objects, None, parent_object, animated_objects, camera_data)

    # TODO pick right Viewpoint
    camera_data.clip_start = nd
    camera_data.clip_end = fd
    bpy.context.scene.camera = camera_object

    camera_object.location = Vector(pos)
    camera_object.rotation_quaternion = rotation_matrix.to_quaternion()
    if parent_object:
        camera_object.matrix_world = parent_object.matrix_world @ transform_matrix
    else:
        camera_object.matrix_world = transform_matrix
    camera_object.matrix_local = transform_matrix

    return camera_object

def setup_iridescence_nodes(nodes, links, principled, iridescence_data, location=(-600, 300)):
    """
    Create node setup for X_ITE iridescence effect
    """
    # Create fresnel node for iridescence
    fresnel = nodes.new('ShaderNodeFresnel')
    fresnel.location = location
    fresnel.inputs['IOR'].default_value = iridescence_data.get('ior', 1.3)
    
    # Create color ramp for iridescent effect
    ramp = nodes.new('ShaderNodeValToRGB')
    ramp.location = (location[0] + 200, location[1])
    
    # Calculate thickness range
    min_thickness = iridescence_data.get('thickness_min', 100)  # nanometers
    max_thickness = iridescence_data.get('thickness_max', 400)  # nanometers
    
    # Set up color stops based on thin film interference
    ramp.color_ramp.elements[0].position = 0.0
    ramp.color_ramp.elements[1].position = 1.0
    
    # Create mix factor node
    mix_factor = nodes.new('ShaderNodeValue')
    mix_factor.location = (location[0] + 400, location[1] + 100)
    mix_factor.outputs[0].default_value = iridescence_data.get('factor', 0.0)
    
    return fresnel, ramp, mix_factor

def setup_volume_nodes(nodes, links, volume_data, location=(-600, -300)):
    """
    Create node setup for X_ITE volume effects
    """
    volume_thickness = volume_data.get('thickness', 0.0)
    attenuation_distance = volume_data.get('attenuation_distance', 1000000.0)
    attenuation_color = volume_data.get('attenuation_color', (1.0, 1.0, 1.0))
    
    # Create volume absorption node
    absorption = nodes.new('ShaderNodeVolumeAbsorption')
    absorption.location = location
    absorption.inputs['Color'].default_value = (*attenuation_color, 1.0)
    absorption.inputs['Density'].default_value = 1.0 / max(attenuation_distance, 0.0001)
    
    # Only create thickness setup if thickness > 0
    if volume_thickness > 0:
        # Create volume info node
        vol_info = nodes.new('ShaderNodeVolumeInfo')
        vol_info.location = (location[0], location[1] + 200)
        
        # Create math node for thickness
        thickness = nodes.new('ShaderNodeMath')
        thickness.operation = 'MULTIPLY'
        thickness.location = (location[0] + 200, location[1] + 200)
        thickness.inputs[1].default_value = volume_thickness
        
        links.new(vol_info.outputs['Density'], thickness.inputs[0])
        links.new(thickness.outputs[0], absorption.inputs['Density'])
    
    return absorption

def create_pbr_material(material_node, def_objects, appearance, animated_objects, use_cycles=True):
    """
    Create a Blender PBR material from X3D PBR material node with X_ITE extensions
    """
    mat = materials_lookup(material_node, def_objects, None, appearance, animated_objects)
    mat.use_nodes = True
    
    if use_cycles:
        mat.cycles.use_square_rough_map = True
    
    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()
    
    # Create main nodes
    principled = nodes.new('ShaderNodeBsdfPrincipled')
    principled.location = (0, 0)
    
    output = nodes.new('ShaderNodeOutputMaterial')
    output.location = (300, 0)
    
    def set_input(name, value):
        if name in principled.inputs:
            if principled.inputs[name].type == 'RGBA':
                principled.inputs[name].default_value = value
            elif principled.inputs[name].type == 'VALUE':
                principled.inputs[name].default_value = value if isinstance(value, float) else sum(value) / len(value)

    # Process IORMaterialExtension
    ior_extension = material_node.find('.//IORMaterialExtension')
    if ior_extension is not None:
        ior = float(ior_extension.get('indexOfRefraction', '1.5'))
        # TODO, we may want < 1.0
        set_input('IOR', max(1.0, ior))
        principled.inputs['IOR'].default_value = max(1.0, ior)
    
    # Process IridescenceMaterialExtension
    iridescence_extension = material_node.find('.//IridescenceMaterialExtension')
    if iridescence_extension is not None:
        iridescence_data = {
            'factor': float(iridescence_extension.get('iridescence', '0')),
            'ior': float(iridescence_extension.get('iridescenceIndexOfRefraction', '1.3')),
            'thickness_min': float(iridescence_extension.get('iridescenceThicknessMinimum', '100')),
            'thickness_max': float(iridescence_extension.get('iridescenceThicknessMaximum', '400'))
        }
        
        if iridescence_data['factor'] > 0:
            fresnel, ramp, mix_factor = setup_iridescence_nodes(nodes, links, principled, iridescence_data)
            
            # Handle iridescence texture if present
            iridescence_texture = iridescence_extension.find('iridescenceTexture')
            if iridescence_texture is not None:
                tex_node = nodes.new('ShaderNodeTexImage')
                tex_node.location = (-800, 300)
                # Load texture image here
                links.new(tex_node.outputs['Color'], mix_factor.inputs[0])
    
    # Process TransmissionMaterialExtension
    transmission_extension = material_node.find('.//TransmissionMaterialExtension')
    if transmission_extension is not None:
        transmission = float(transmission_extension.get('transmission', '0'))
        set_input('Transmission', transmission)
        # TODO
        # principled.inputs['Transmission'].default_value = transmission
        
        # Handle transmission texture if present
        transmission_texture = transmission_extension.find('transmissionTexture')
        if transmission_texture is not None:
            tex_node = nodes.new('ShaderNodeTexImage')
            tex_node.location = (-800, 0)
            # Load texture image here
            links.new(tex_node.outputs['Color'], principled.inputs['Transmission'])
    
    # Process VolumeMaterialExtension
    volume_extension = material_node.find('.//VolumeMaterialExtension')
    if volume_extension is not None and use_cycles:
        volume_data = {
            'thickness': float(volume_extension.get('thickness', '0')),
            'attenuation_distance': float(volume_extension.get('attenuationDistance', '1000000')),
            'attenuation_color': [float(c) for c in volume_extension.get('attenuationColor', '1 1 1').split()]
        }
        
        volume_absorption = setup_volume_nodes(nodes, links, volume_data)
        
        # Handle thickness texture if present
        thickness_texture = volume_extension.find('thicknessTexture')
        if thickness_texture is not None:
            tex_node = nodes.new('ShaderNodeTexImage')
            tex_node.location = (-800, -300)
            tex_node.image_user.use_auto_refresh = True
            # Load texture image here
            # Extract G channel for thickness
            separate_rgb = nodes.new('ShaderNodeSeparateRGB')
            separate_rgb.location = (-600, -300)
            links.new(tex_node.outputs['Color'], separate_rgb.inputs[0])
            links.new(separate_rgb.outputs['G'], volume_absorption.inputs['Density'])
        
        links.new(volume_absorption.outputs['Volume'], output.inputs['Volume'])
    
    # Link surface shader
    links.new(principled.outputs['BSDF'], output.inputs['Surface'])
    
    return mat

# [Rest of the addon registration code remains the same]
def main(file_path):
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete()

    try:
        tree = ET.parse(file_path)
        root = tree.getroot()
    except ET.ParseError as e:
        print(f"Error parsing X3D file: {e}")
        return

    scene = root.find('Scene')
    if scene is not None:
        animated_objects = process_node(scene, parent_object=None, def_objects=def_objects)

    interpolators = parse_interpolators(root)
    apply_interpolations(root, animated_objects, interpolators)

    bpy.context.scene.frame_start = 0
    bpy.context.scene.frame_end = 250
    bpy.context.scene.render.fps = 30

for screen in bpy.data.screens:
    for area in screen.areas:
        if area.type == 'VIEW_3D':
            space_3d = area.spaces[0]
            rv3d = space_3d.region_3d
            rv3d.view_rotation = Quaternion((1.0, 0.0, 0.0, 0.0))
            rv3d.update()

#file_path = "JinScaledV2L1LOA4MinimumSkeleton20c.x3d"
#file_path = "JinScaledV2L1LOA4MinimumSkeleton20e.x3d"
#file_path = "JinScaledV2L1LOA4MinimumSkeleton20f.x3d"
#file_path = "JinScaledV2L1LOA4OnlyMarkers11f.x3d"
#file_path = "JinScaledV2L1LOA4OnlyMarkers11g.x3d"
#file_path = "Jin11gNoUSE.x3d"
#file_path = "JinConcat11g.x3d"
#file_path = "JinConcat10h.x3d"
#file_path = "JinConconcatenated.x3d"
#file_path = "localrotation.x3d"
file_path = "localcenters.x3d"
#file_path = "localcentersjoe.x3d"
#file_path = "JinLOA1scaled1.x3d"
#file_path = "HAnim2SpecificationLOA3Illustrated.x3d"
#file_path = "Humanoid4.1.x3d"


#file_path = 'Jin11gNoAnimation.x3d'
#file_path = 'Jin20fBillboarded5.x3d'
#file_path = 'Jin20fSegmented.x3d'
#file_path = 'Jin20fOneAnimation.x3d'
#file_path = 'JoeSkinTexcoordDisplacerKickUpdate2.x3d'
#file_path = 'JinLOA1.x3d'
#file_path = 'maleWaving.x3d'
# file_path = 'IridescentDishWithOlives.x3d'



# print(f"Opening {file_path}")

main(file_path)

# bpy.ops.export_scene.x3dv(filepath=file_path[0:-4]+"Export.x3d", export_hanim_prefix='', export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
# bpy.ops.export_scene.x3d(filepath=file_path[0:-4]+"Export.x3d", export_yup=True, export_normals=True, export_format="X3D")

#dirpath = "."
#bpy.ops.export_scene.gltf(
#    filepath=os.path.join(dirpath, file_path[0:-4]+"Export.gltf"),
#    export_yup=False,
#    export_format="GLTF_SEPARATE",
#    # export_format="GLB",
#    use_active_collection=True
#)

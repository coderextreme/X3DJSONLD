import bpy
import xml.etree.ElementTree as ET
import os
from math import sqrt, pi
from mathutils import Vector

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

def create_pbr_material(material_node, material_name, use_cycles=True):
    """
    Create a Blender PBR material from X3D PBR material node with X_ITE extensions
    """
    mat = bpy.data.materials.new(name=material_name)
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
    
    # Process IORMaterialExtension
    ior_extension = material_node.find('.//IORMaterialExtension')
    if ior_extension is not None:
        ior = float(ior_extension.get('indexOfRefraction', '1.5'))
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
        principled.inputs['Transmission'].default_value = transmission
        
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

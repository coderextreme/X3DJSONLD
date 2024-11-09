import bpy
import xml.etree.ElementTree as ET
import os
from math import sqrt, pi
from mathutils import Vector

def setup_iridescence_nodes(nodes, links, principled, location=(-600, 300)):
    """
    Create node setup for iridescence effect
    """
    # Create fresnel node for iridescence
    fresnel = nodes.new('ShaderNodeFresnel')
    fresnel.location = location
    
    # Create color ramp for iridescent color
    ramp = nodes.new('ShaderNodeValToRGB')
    ramp.location = (location[0] + 200, location[1])
    
    # Set color ramp stops for iridescent effect
    ramp.color_ramp.elements[0].position = 0.0
    ramp.color_ramp.elements[0].color = (1, 0, 0, 1)  # Red
    ramp.color_ramp.elements[1].position = 0.5
    ramp.color_ramp.elements[1].color = (0, 1, 0, 1)  # Green
    
    # Add blue stop
    blue_stop = ramp.color_ramp.elements.new(1.0)
    blue_stop.color = (0, 0, 1, 1)  # Blue
    
    return fresnel, ramp

def setup_volume_nodes(nodes, links, location=(-600, -300)):
    """
    Create node setup for volume effects
    """
    # Create volume scatter node
    vol_scatter = nodes.new('ShaderNodeVolumeScatter')
    vol_scatter.location = location
    
    # Create volume absorption node
    vol_absorption = nodes.new('ShaderNodeVolumeAbsorption')
    vol_absorption.location = (location[0], location[1] - 200)
    
    # Create mix shader for volumes
    mix_volume = nodes.new('ShaderNodeMixShader')
    mix_volume.location = (location[0] + 200, location[1] - 100)
    
    # Link nodes
    links.new(vol_scatter.outputs['Volume'], mix_volume.inputs[1])
    links.new(vol_absorption.outputs['Volume'], mix_volume.inputs[2])
    
    return mix_volume, vol_scatter, vol_absorption

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
    
    # Process X_ITE IORMaterialExtension
    ior_extension = material_node.find('.//IORMaterialExtension')
    if ior_extension is not None:
        # Handle floatIOR and complexIOR
        float_ior = ior_extension.get('floatIOR')
        if float_ior:
            principled.inputs['IOR'].default_value = float(float_ior)
            
        complex_ior = ior_extension.get('complexIOR')
        if complex_ior:
            # Parse complex IOR (n,k) values
            n, k = map(float, complex_ior.split())
            # Convert complex IOR to approx real IOR for Principled BSDF
            approx_ior = sqrt((n**2 + k**2 + 1)/3)
            principled.inputs['IOR'].default_value = approx_ior
            
        # Handle iridescence
        iridescence_extension = material_node.find('.//IridescenceMaterialExtension')
        if iridescence_extension is not None:
            iridescence_factor = float(iridescence_extension.get('iridescenceFactor', '0'))
            iridescence_ior = float(iridescence_extension.get('iridescenceIOR', '1.3'))
            iridescence_thickness = float(iridescence_extension.get('iridescenceThicknessRange', '400'))
            
            if iridescence_factor > 0:
                fresnel, ramp = setup_iridescence_nodes(nodes, links, principled)
                fresnel.inputs['IOR'].default_value = iridescence_ior
                
                # Create mix RGB node for iridescence blend
                mix_irid = nodes.new('ShaderNodeMixRGB')
                mix_irid.location = (-200, 200)
                mix_irid.inputs['Fac'].default_value = iridescence_factor
                
                # Link iridescence nodes
                links.new(fresnel.outputs['Fac'], ramp.inputs['Fac'])
                links.new(ramp.outputs['Color'], mix_irid.inputs[2])
                links.new(mix_irid.outputs['Color'], principled.inputs['Base Color'])
    
    # Process TransmissionMaterialExtension
    transmission_extension = material_node.find('.//TransmissionMaterialExtension')
    if transmission_extension is not None:
        transmission_factor = float(transmission_extension.get('transmissionFactor', '0'))
        transmission_color = transmission_extension.get('transmissionColor', '1 1 1').split()
        transmission_color = [float(c) for c in transmission_color]
        
        principled.inputs['Transmission'].default_value = transmission_factor
        
        if transmission_factor > 0:
            # Create volume absorption for colored transmission
            volume_abs = nodes.new('ShaderNodeVolumeAbsorption')
            volume_abs.location = (0, -200)
            volume_abs.inputs['Color'].default_value = (*transmission_color, 1.0)
            
            links.new(volume_abs.outputs['Volume'], output.inputs['Volume'])
    
    # Process VolumeMaterialExtension
    volume_extension = material_node.find('.//VolumeMaterialExtension')
    if volume_extension is not None and use_cycles:
        thickness_factor = float(volume_extension.get('thicknessFactor', '0'))
        thickness_color = volume_extension.get('thicknessColor', '1 1 1').split()
        thickness_color = [float(c) for c in thickness_color]
        
        attenuation_distance = float(volume_extension.get('attenuationDistance', '1.0'))
        attenuation_color = volume_extension.get('attenuationColor', '1 1 1').split()
        attenuation_color = [float(c) for c in attenuation_color]
        
        if thickness_factor > 0:
            mix_volume, vol_scatter, vol_absorption = setup_volume_nodes(nodes, links)
            
            # Set volume properties
            vol_scatter.inputs['Color'].default_value = (*thickness_color, 1.0)
            vol_scatter.inputs['Distance'].default_value = attenuation_distance
            
            vol_absorption.inputs['Color'].default_value = (*attenuation_color, 1.0)
            
            # Link final volume
            links.new(mix_volume.outputs['Shader'], output.inputs['Volume'])
    
    # Link surface shader
    links.new(principled.outputs['BSDF'], output.inputs['Surface'])
    
    return mat

# [Rest of the file remains the same as in previous artifact]

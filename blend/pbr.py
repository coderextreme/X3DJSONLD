import bpy
import xml.etree.ElementTree as ET
import os
from math import sqrt

def create_pbr_material(material_node, material_name, use_cycles=True):
    """
    Create a Blender PBR material from X3D PBR material node
    Args:
        material_node: XML node containing material properties
        material_name: Name for the new material
        use_cycles: Boolean to optimize for Cycles renderer
    """
    """
    Under PhysicalMaterial (material_node), we see:
    IORMaterialExtension
    IridescenceMaterialExtension
    TransmissionMaterialExtension
    VolumeMaterialExtension
    """
    # Create new material
    mat = bpy.data.materials.new(name=material_name)
    mat.use_nodes = True
    
    # Set to use Cycles if specified
    if use_cycles:
        mat.cycles.use_square_rough_map = True  # Better roughness handling
    
    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    
    # Clear default nodes
    nodes.clear()
    
    # Create main PBR node
    principled = nodes.new('ShaderNodeBsdfPrincipled')
    principled.location = (0, 0)
    
    # Create output node
    output = nodes.new('ShaderNodeOutputMaterial')
    output.location = (300, 0)
    
    # Link principled to output
    links.new(principled.outputs['BSDF'], output.inputs['Surface'])
    
    # Parse basic X3D material properties
    base_color = material_node.get('baseColor', '1 1 1').split()
    base_color = [float(c) for c in base_color]
    
    metallic = float(material_node.get('metallic', '0'))
    roughness = float(material_node.get('roughness', '0.5'))
    
    # Parse advanced PBR properties
    ior = float(material_node.get('ior', '1.45'))
    transmission = float(material_node.get('transmission', '0'))
    thickness = float(material_node.get('thickness', '0'))
    attenuation_color = material_node.get('attenuationColor', '1 1 1').split()
    attenuation_color = [float(c) for c in attenuation_color]
    attenuation_distance = float(material_node.get('attenuationDistance', '1.0'))
    
    # Handle discrete IOR presets if specified
    discrete_ior = material_node.get('discreteIOR')
    if discrete_ior:
        # Common material IOR values
        ior_presets = {
            'water': 1.333,
            'ice': 1.309,
            'glass': 1.52,
            'diamond': 2.417,
            'sapphire': 1.77,
            'ruby': 1.757,
            'platinum': 2.33,
            'gold': 0.47,
            'silver': 0.055,
            'copper': 0.271,
            'aluminum': 1.09,
            'plastic': 1.46,
        }
        ior = ior_presets.get(discrete_ior.lower(), 1.45)
    
    # Handle clearcoat properties
    clearcoat = float(material_node.get('clearcoat', '0'))
    clearcoat_roughness = float(material_node.get('clearcoatRoughness', '0'))
    
    # Handle subsurface properties
    subsurface = float(material_node.get('subsurface', '0'))
    subsurface_radius = material_node.get('subsurfaceRadius', '1 1 1').split()
    subsurface_radius = [float(c) for c in subsurface_radius]
    
    # Optional properties
    emission_color = material_node.get('emissiveColor', '0 0 0').split()
    emission_color = [float(c) for c in emission_color]
    emission_strength = float(material_node.get('emissiveIntensity', '1.0'))
    
    normal_scale = float(material_node.get('normalScale', '1.0'))
    alpha = float(material_node.get('transparency', '1.0'))
    
    # Set principled node parameters
    principled.inputs['Base Color'].default_value = (*base_color, 1.0)
    principled.inputs['Metallic'].default_value = metallic
    principled.inputs['Roughness'].default_value = roughness
    principled.inputs['IOR'].default_value = ior
    principled.inputs['Transmission'].default_value = transmission
    principled.inputs['Alpha'].default_value = alpha
    
    # Set advanced properties
    if use_cycles:
        principled.inputs['Clearcoat'].default_value = clearcoat
        principled.inputs['Clearcoat Roughness'].default_value = clearcoat_roughness
        principled.inputs['Subsurface'].default_value = subsurface
        if 'Subsurface Radius' in principled.inputs:
            principled.inputs['Subsurface Radius'].default_value = (*subsurface_radius,)
        principled.inputs['Emission'].default_value = (*emission_color, emission_strength)
        
        # Handle transmission properties
        if transmission > 0:
            # Add volume absorption for colored glass
            volume = nodes.new('ShaderNodeVolumeAbsorption')
            volume.location = (0, -200)
            volume.inputs['Color'].default_value = (*attenuation_color, 1.0)
            volume.inputs['Density'].default_value = 1.0 / max(attenuation_distance, 0.0001)
            
            # Add volume output
            links.new(volume.outputs['Volume'], output.inputs['Volume'])
    
    # Handle textures
    texture_maps = {
        'baseColorTexture': 'Base Color',
        'metallicRoughnessTexture': 'Metallic',
        'normalTexture': 'Normal',
        'emissiveTexture': 'Emission',
        'transmissionTexture': 'Transmission',
        'clearcoatTexture': 'Clearcoat',
        'clearcoatRoughnessTexture': 'Clearcoat Roughness',
        'occlusionTexture': 'Ambient Occlusion',
        'iorTexture': 'IOR'
    }
    
    for x3d_tex_name, blender_input_name in texture_maps.items():
        texture_url = material_node.get(x3d_tex_name)
        if texture_url:
            # Create texture node
            tex_node = nodes.new('ShaderNodeTexImage')
            tex_node.location = (-300, len(nodes) * -100)
            
            # Load and assign texture
            try:
                img = bpy.data.images.load(texture_url)
                tex_node.image = img
                
                # Set color space based on texture type
                if x3d_tex_name in ['normalTexture', 'metallicRoughnessTexture', 'clearcoatRoughnessTexture']:
                    tex_node.image.colorspace_settings.name = 'Non-Color'
            except:
                print(f"Could not load texture: {texture_url}")
                continue
            
            # Special handling for normal maps
            if x3d_tex_name == 'normalTexture':
                normal_map = nodes.new('ShaderNodeNormalMap')
                normal_map.location = (-100, tex_node.location.y)
                normal_map.inputs['Strength'].default_value = normal_scale
                links.new(tex_node.outputs['Color'], normal_map.inputs['Color'])
                links.new(normal_map.outputs['Normal'], principled.inputs['Normal'])
            
            # Special handling for metallic-roughness texture
            elif x3d_tex_name == 'metallicRoughnessTexture':
                separate_rgb = nodes.new('ShaderNodeSeparateRGB')
                separate_rgb.location = (-100, tex_node.location.y)
                links.new(tex_node.outputs['Color'], separate_rgb.inputs['Image'])
                links.new(separate_rgb.outputs['B'], principled.inputs['Metallic'])
                links.new(separate_rgb.outputs['G'], principled.inputs['Roughness'])
            else:
                links.new(tex_node.outputs['Color'], principled.inputs[blender_input_name])
    
    return mat

def import_x3d_materials(filepath, use_cycles=True):
    """
    Import PBR materials from X3D file
    Args:
        filepath: Path to X3D file
        use_cycles: Boolean to optimize for Cycles renderer
    """
    try:
        tree = ET.parse(filepath)
        root = tree.getroot()
        
        # Find all PBR material nodes
        # Using both X3D and X_ITE namespaces
        materials = root.findall(".//PhysicalMaterial")
        materials.extend(root.findall(".//{http://www.web3d.org/specifications/x3d-namespace}PhysicalMaterial"))
        
        imported_materials = []
        
        for i, material in enumerate(materials):
            material_name = material.get('DEF', f'X3D_Material_{i}')
            imported_materials.append(create_pbr_material(material, material_name, use_cycles))
            
        return imported_materials
            
    except Exception as e:
        print(f"Error importing X3D materials: {str(e)}")
        return []

# Example usage
if __name__ == "__main__":
    # Register as Blender addon
    bl_info = {
        "name": "X3D PBR Material Importer",
        "author": "Your Name",
        "version": (1, 0),
        "blender": (2, 80, 0),
        "category": "Material"
    }
    
    class ImportX3DPBR(bpy.types.Operator):
        bl_idname = "material.x3d_pbr_import"
        bl_label = "Import X3D PBR Materials"
        
        filepath: bpy.props.StringProperty(subtype="FILE_PATH")
        use_cycles: bpy.props.BoolProperty(
            name="Optimize for Cycles",
            description="Enable Cycles-specific optimizations",
            default=True
        )
        
        def execute(self, context):
            materials = import_x3d_materials(self.filepath, self.use_cycles)
            self.report({'INFO'}, f"Imported {len(materials)} materials")
            return {'FINISHED'}
        
        def invoke(self, context, event):
            context.window_manager.fileselect_add(self)
            return {'RUNNING_MODAL'}
    
    def menu_func_import(self, context):
        self.layout.operator("material.x3d_pbr_import", 
                           text="X3D PBR Materials (.x3d)")
    
    def register():
        bpy.utils.register_class(ImportX3DPBR)
        bpy.types.TOPBAR_MT_file_import.append(menu_func_import)
    
    def unregister():
        bpy.utils.unregister_class(ImportX3DPBR)
        bpy.types.TOPBAR_MT_file_import.remove(menu_func_import)

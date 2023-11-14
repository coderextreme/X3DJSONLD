import bpy

length_unit = bpy.context.scene.unit_settings.length_unit 
print(f"scene scale is {length_unit}")
system_rotation = bpy.context.scene.unit_settings.system_rotation
print(f"scene rotation system  is {system_rotation}")

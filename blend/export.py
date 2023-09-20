import bpy

# bpy.ops.import_scene.fbx(filepath = "../../Tufani/LILY_7_3_BLEND.fbx")
bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")
bpy.ops.export_scene.x3d(filepath="fooLily.x3d")

import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)
bpy.ops.import_scene.fbx(filepath = "../../Tufani/LILY_7_3_BLEND.fbx")
# bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")
#bpy.ops.export_scene.gltf(filepath="blenderLily.gltf", export_format='GLTF_EMBEDDED')
# bpy.ops.export_scene.gltf(filepath="blenderLily2.gltf", export_format='GLTF_SEPARATE') #, export_texture_dir="./textures/")

#bpy.ops.export_scene.gltf(filepath="blenderLily.glb", export_format='GLB')
bpy.ops.export_scene.x3dv(filepath="blenderLily.json", export_format="JSON")
bpy.ops.export_scene.x3dv(filepath="blenderLily.html", export_format="HTML")
bpy.ops.export_scene.x3dv(filepath="blenderLily.x3d", export_format="X3D")
bpy.ops.export_scene.x3dv(filepath="blenderLily.x3dv", export_format="X3DV")

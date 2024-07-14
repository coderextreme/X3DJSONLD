import bpy
import os

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


bpy.ops.import_scene.x3d(filepath="JoeSkinTexcoordDisplacerKickUpdate2.x3d", axis_forward='Y', axis_up='Z')
# bpy.ops.import_scene.x3d(filepath="JoeSkinTexcoordDisplacerKickUpdate2.x3d")
# bpy.ops.import_scene.x3d(filepath="JoeKick.x3d", axis_forward='Y', axis_up='Z')
# bpy.ops.export_scene.x3dv(filepath="JoeBlender.x3d", export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JoeSkinTexcoordDisplacerKickUpdate2Export.x3d", export_hanim_prefix='Joe_',export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
# bpy.ops.export_scene.x3dv(filepath="JoeSkinTexcoordDisplacerKickUpdate2Export.x3d", export_round_precision=6, export_normals=True, export_format="X3D")
#bpy.ops.export_scene.gltf(filepath="JoeKick.gltf", export_normals=True, export_format="GLTF_SEPARATE", export_texture_dir="./textures/")
#filepath = "C:/Temp"
#
#bpy.ops.export_scene.gltf(
#    filepath=os.path.join(filepath, f"JoeKick.gltf"),
#    export_yup=False,
#    export_format="GLTF_SEPARATE",
#    # export_format="GLB",
#    use_active_collection=True
#)

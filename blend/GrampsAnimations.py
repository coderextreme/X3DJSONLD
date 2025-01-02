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

#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.scaled.blend")
#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.blend")
# bpy.ops.wm.open_mainfile(filepath="gramps_animated_full_1.blend")
bpy.ops.wm.open_mainfile(filepath="gramps_animated_full_1.scaled.blend")
# bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
#bpy.ops.export_scene.x3dv(filepath="GrampsAnimations.x3dv",
#                         export_round_precision=20,
#                         export_yup=True,
#                         export_normals=True,
#                         export_format="X3DV"
#                          )
bpy.ops.export_scene.x3dv(filepath="GrampsAnimations.x3d",
                         export_round_precision=20,
                         export_yup=False,
                         export_normals=True,
                         export_format="X3D"
                         )
#
#bpy.ops.export_scene.gltf(
#    filepath=os.path.join(".", f"GrampsAnimations.glb"),
#    export_yup=False,
#    # export_format="GLTF_SEPARATE",
#    export_format="GLB",
#    export_nla_strips_merged_animation_name='Animation',
#    export_animation_mode="ACTIVE_ACTIONS", #"SCENE", 
#    export_influence_nb=40,
#    export_all_influences=True,
#    use_active_collection=True
#)
#

import bpy
import os
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
# Set Y Up
for screen in bpy.data.screens:
    for area in screen.areas:
        if area.type == 'VIEW_3D':
            space_3d = area.spaces[0]
            rv3d = space_3d.region_3d
            rv3d.view_rotation = Quaternion((1.0, 0.0, 0.0, 0.0))
            rv3d.update()



bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d")
#bpy.ops.import_scene.x3d(filepath="Gramps8Final.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.export_scene.x3dv(filepath="GrampsAnimationsExport.x3d", export_hanim_prefix='', export_round_precision=20, export_yup=False, export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3d(filepath="GrampsBlender.x3d")
#filepath = "C:/Temp"
#
#bpy.ops.export_scene.gltf(
#    filepath=os.path.join(filepath, f"Gramps8Final.glb"),
#    export_yup=False,
#    # export_format="GLTF_SEPARATE",
#    export_format="GLB",
#    use_active_collection=True
#)

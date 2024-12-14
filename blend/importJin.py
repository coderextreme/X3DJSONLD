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

#bpy.ops.import_scene.x3d(filepath="JinLOA4.scaled1.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.import_scene.x3d(filepath="JinConconcatenated.x3d", prefer_flat=False, axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinConcat06gForJohn2.x3d", axis_forward='Y', axis_up='Z')
# bpy.ops.import_scene.x3d(filepath="JinConcat08o.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinConcat10h.x3d")
#bpy.ops.import_scene.x3d(filepath="JinConcat11c.x3d")
# bpy.ops.import_scene.x3d(filepath="JinLOA4.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="ItsAFACSJack.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20b.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20c.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20e.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20f.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="Jin20fBillboarded5.x3d", axis_forward='Z', axis_up='Y')
# bpy.ops.import_scene.x3d(filepath="JinLOA4.x3dv", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="Humanoid4.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4OnlyMarkers11f.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="JinNoMove10h.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4Sites10h.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4Sites09x.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinSample.x3d", axis_forward='Y', axis_up='Z')

# bpy.ops.export_scene.x3dv(filepath="JinLOA4Export.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
# bpy.ops.export_scene.x3d(filepath="JinBlender.x3d")
# bpy.ops.export_scene.x3dv(filepath="JinBlender.x3d", export_format="X3D")
# bpy.ops.export_scene.x3dv(filepath="JinConcat10hExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinConcat10hExport.x3d", export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinConcat11cExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3d(filepath="JinConcat11cExportTransforms.x3d")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4MinimumSkeleton20bExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4MinimumSkeleton20cExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4OnlyMarkers11fExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinConcat11fExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4MinimumSkeleton20eExport.x3d", export_round_precision=20, export_yup=True, export_normals=True, export_format="X3D")

for screen in bpy.data.screens:
    for area in screen.areas:
        if area.type == 'VIEW_3D':
            space_3d = area.spaces[0]
            rv3d = space_3d.region_3d
            rv3d.view_rotation = Quaternion((1.0, 0.0, 0.0, 0.0))
            rv3d.update()

#
filepath = "."
bpy.ops.export_scene.gltf(
    filepath=os.path.join(filepath, f"JinConconcatenated.glb"),
    export_yup=False,
    # export_format="GLTF_SEPARATE",
    export_format="GLB",
    export_nla_strips_merged_animation_name='Animation',
    export_animation_mode="ACTIVE_ACTIONS", #"SCENE", 
    export_influence_nb=40,
    export_all_influences=True,
    use_active_collection=True
)
#
#filepath = "."
#bpy.ops.export_scene.vrm(
#    filepath=os.path.join(filepath, f"JinScaledV2L1LOA4OnlyMarkers11fExport.vrm")
#)

#filepath = "."
#bpy.ops.wm.usd_export(
#    filepath=os.path.join(filepath, f"JinScaledV2L1LOA4OnlyMarkers11fExport.usda")
#)

#destination_folder = "."
#filename = "JinConcat11c.blend"
#filepath = os.path.join(destination_folder, filename)
#bpy.ops.wm.save_as_mainfile(filepath=filepath)

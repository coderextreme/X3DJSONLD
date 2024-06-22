import bpy
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

#bpy.ops.import_scene.x3d(filepath="JinConcat06gForJohn2.x3d", axis_forward='Y', axis_up='Z')
# bpy.ops.import_scene.x3d(filepath="JinConcat08o.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinConcat10h.x3d")
#bpy.ops.import_scene.x3d(filepath="JinConcat11c.x3d")
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20b.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4MinimumSkeleton20c.x3d", axis_forward='Z', axis_up='Y')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4OnlyMarkers11c.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinNoMove10h.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4Sites10h.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4Sites09x.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinSample.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JinConconcatenated.x3d", axis_forward='Y', axis_up='Z')

# bpy.ops.export_scene.x3d(filepath="JinBlender.x3d")
# bpy.ops.export_scene.x3dv(filepath="JinBlender.x3d", export_format="X3D")
# bpy.ops.export_scene.x3dv(filepath="JinConcat10hExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinConcat10hExport.x3d", export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinConcat11cExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4MinimumSkeleton20bExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JinScaledV2L1LOA4MinimumSkeleton20cExport.x3d", export_hanim_prefix='hanim_', export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3d(filepath="JinConcat11cExportTransforms.x3d")
#
filepath = "."
bpy.ops.export_scene.gltf(
    filepath=os.path.join(filepath, f"JinScaledV2L1LOA4MinimumSkeleton20cExport.gltf"),
    export_yup=True,
    export_format="GLTF_SEPARATE",
    # export_format="GLB",
    use_active_collection=True
)

#filepath = "."
#bpy.ops.export_scene.vrm(
#    filepath=os.path.join(filepath, f"JinScaledV2L1LOA4MinimumSkeleton20cExport.vrm")
#)

#destination_folder = "."
#filename = "JinConcat11c.blend"
#filepath = os.path.join(destination_folder, filename)
#bpy.ops.wm.save_as_mainfile(filepath=filepath)

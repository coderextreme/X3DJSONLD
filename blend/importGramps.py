import bpy
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d")
#bpy.ops.import_scene.x3d(filepath="Gramps8Final.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.export_scene.x3dv(filepath="GrampsAnimationsExport.x3d", export_hanim_prefix='hanim_', export_round_precision=20, export_yup=True, export_normals=True, export_format="X3D")
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

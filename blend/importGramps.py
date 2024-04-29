import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="GrampsAnimations.x3d")
#bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4Sites08e.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="Gramps8Final.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.export_scene.x3dv(filepath="GrampsBlender.x3d", export_round_precision=20, export_yup=True, export_normals=True, export_format="X3D")

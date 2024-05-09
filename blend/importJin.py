import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="JinSpastic09x.x3d", axis_forward='Y', axis_up='Z')

# bpy.ops.import_scene.x3d(filepath="JinLOA4JohnCamera.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.export_scene.x3dv(filepath="JinBlender.x3d", export_format="X3D")
# bpy.ops.export_scene.x3dv(filepath="JinBlender.x3d", export_round_precision=20, export_yup=True, export_normals=True, export_format="X3D")

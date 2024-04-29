import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="bubs2.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.export_scene.x3dv(filepath="bubs2out.x3d", export_format="X3D")

import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="skipping.x3d", axis_forward='Y', axis_up='Z')

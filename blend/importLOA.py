import bpy
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="localLOAminus1.x3d", axis_forward='Y', axis_up='Z')

#destination_folder = "."
#filename = "localLOAminus1.blend"
#filepath = os.path.join(destination_folder, filename)
#bpy.ops.wm.save_as_mainfile(filepath=filepath)

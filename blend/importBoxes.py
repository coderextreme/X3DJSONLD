import bpy
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.x3d(filepath="localrotation.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="localcenters.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="localcentersjoe.x3d", axis_forward='Y', axis_up='Z')

#destination_folder = "."
#filename = "localrotation.blend"
#filepath = os.path.join(destination_folder, filename)
#bpy.ops.wm.save_as_mainfile(filepath=filepath)

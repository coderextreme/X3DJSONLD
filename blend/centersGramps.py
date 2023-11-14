import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)
bpy.ops.wm.collada_import(filepath = "gramps-ANIM.dae", auto_connect = True, find_chains = True, fix_orientation = True)
bpy.ops.export_scene.x3dv(filepath="blenderGramps_centers.x3dv", export_normals=True, export_format="X3DV")

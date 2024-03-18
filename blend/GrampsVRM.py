import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.scaled.blend")
#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.blend")
# bpy.ops.wm.open_mainfile(filepath="gramps_animated_full_1.blend")
bpy.ops.wm.open_mainfile(filepath="gramps_animated_full_1.scaled.blend")
# bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
result = bpy.ops.export_scene.vrm(filepath="GrampAnimations.vrm")

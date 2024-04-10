import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_anim.bvh(
    filepath="skip7300_7500.bvh",
    axis_up='Z',
    axis_forward='Z',
    filter_glob="*.bvh",
    target='ARMATURE',
    global_scale=1.0,
    frame_start=1,
    use_fps_scale=False,
    use_cyclic=False,
    rotate_mode='NATIVE'
)

bpy.ops.export_scene.x3dv(filepath="skip7300_7500.x3dv", export_format="X3DV")

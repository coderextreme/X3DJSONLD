import bpy

from pathlib import Path

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

output_filepath = str(Path.home() / "skipping.vrm")
#animation_output_filepath = str(Path.home() / "skipping.vrma")

bpy.ops.import_anim.bvh(
    filepath="../../amc2bvh/skipping.bvh",
    axis_up='Y',
    axis_forward='Z',
    filter_glob="*.bvh",
    target='ARMATURE',
    global_scale=1.0,
    frame_start=1,
    use_fps_scale=False,
    use_cyclic=False,
    rotate_mode='NATIVE'
)

bpy.ops.export_scene.x3dv(filepath="skipping.x3d", export_format="X3D", export_round_precision=20, export_yup=True, export_normals=True)
bpy.ops.export_scene.x3dv(filepath="skipping.x3dv", export_format="X3DV", export_round_precision=20, export_yup=True, export_normals=True)

# bpy.ops.import_scene.x3d(filepath="skipping.x3d", axis_forward='Y', axis_up='Z')
result = bpy.ops.export_scene.vrm(filepath=output_filepath)

print(f"{output_filepath}")

if result != {"FINISHED"}:
    raise Exception(f"Failed to export .vrm: {result}")

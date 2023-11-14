import bpy
from decimal import Decimal, getcontext

getcontext().prec = 100

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.scaled.blend")
#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.blend")
#bpy.ops.wm.open_mainfile(filepath="gramps_animated_full_1.blend")
# bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
bpy.ops.export_scene.x3dv(filepath="fooGrampsVRML.x3dv", export_round_precision=20, export_yup=True, export_normals=True, export_format="X3DV")
bpy.ops.export_scene.x3dv(filepath="fooGrampsXML.x3d", export_round_precision=20, export_yup=True, export_normals=True, export_format="X3D")

for im in bpy.data.images:
    print(f"{im} {im.filepath}")
    if im.filepath:
        im.save()

import bpy
import sys
import bmesh

# bpy.ops.import_scene.fbx(filepath = "../../WinterAndSpring/LILY_7_3_BLEND.fbx")
bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")

def get_weights(ob, vgroup):
    group_index = vgroup.index
    for i, v in enumerate(ob.data.vertices):
        for g in v.groups:
            if g.group == group_index:
                yield (i, g.weight)
                break

def listVertexGroups(obj):
    if obj != None:
        obj.select_set(True)
        bpy.context.view_layer.objects.active = obj
        mesh = obj
        for i, group in enumerate(mesh.vertex_groups):
            print(f"\n<{group.name}>\n")
            for j, w in get_weights(obj, group):
                print(f"({j}) = {w}")

for obj in bpy.context.scene.objects:
    if obj.type == 'ARMATURE':
        armature = obj
        armature.select_set(True)
        bpy.context.view_layer.objects.active = armature
        # modes ('OBJECT', 'EDIT', 'SCULPT', 'VERTEX_PAINT', 'WEIGHT_PAINT', 'TEXTURE_PAINT')
        bpy.ops.object.mode_set(mode='POSE')
        # listVertexGroups(armature)
    if obj.type == 'MESH':
        mesh = obj
        mesh.select_set(True)
        bpy.context.view_layer.objects.active = mesh
        # modes ('OBJECT', 'EDIT', 'SCULPT', 'VERTEX_PAINT', 'WEIGHT_PAINT', 'TEXTURE_PAINT')
        bpy.ops.object.mode_set(mode='WEIGHT_PAINT')
        listVertexGroups(mesh)

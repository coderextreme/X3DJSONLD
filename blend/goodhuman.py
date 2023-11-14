import bpy

# Create armature object
armature = bpy.data.objects.new("Armature", bpy.data.armatures.new("Armature"))
bpy.context.collection.objects.link(armature)
bpy.context.view_layer.objects.active = armature
armature.select_set(True)

# Enter edit mode
bpy.ops.object.mode_set(mode='EDIT')

# Create bones
bones = [
    ("root", (0, 0, 0), (0, 0, 0)),
    ("pelvis", (0, 0, 1), (0, 0, 0)),
    ("spine", (0, 0, 2), (0, 0, 0)),
    ("chest", (0, 0, 3), (0, 0, 0)),
    ("neck", (0, 0, 4), (0, 0, 0)),
    ("head", (0, 0, 5), (0, 0, 0)),
    ("shoulder.L", (-1, 0, 4), (0, 0, 0)),
    ("upper_arm.L", (-2, 0, 4), (0, 0, 0)),
    ("forearm.L", (-3, 0, 4), (0, 0, 0)),
    ("hand.L", (-4, 0, 4), (0, 0, 0)),
    ("shoulder.R", (1, 0, 4), (0, 0, 0)),
    ("upper_arm.R", (2, 0, 4), (0, 0, 0)),
    ("forearm.R", (3, 0, 4), (0, 0, 0)),
    ("hand.R", (4, 0, 4), (0, 0, 0)),
    ("hip.L", (-1, 0, 1), (0, 0, 0)),
    ("thigh.L", (-1, 0, 0), (0, 0, 0)),
    ("shin.L", (-1, 0, -1), (0, 0, 0)),
    ("foot.L", (-1, 0, -2), (0, 0, 0)),
    ("toe.L", (-1, 0, -3), (0, 0, 0)),
    ("hip.R", (1, 0, 1), (0, 0, 0)),
    ("thigh.R", (1, 0, 0), (0, 0, 0)),
    ("shin.R", (1, 0, -1), (0, 0, 0)),
    ("foot.R", (1, 0, -2), (0, 0, 0)),
    ("toe.R", (1, 0, -3), (0, 0, 0))
]

for bone in bones:
    bone_name, bone_head, bone_tail = bone
    bpy.ops.armature.bone_primitive_add(name=bone_name)
    new_bone = armature.data.edit_bones[bone_name]
    new_bone.head = bone_head
    new_bone.tail = bone_tail

# Connect bones
bone_connections = [
    ("root", "pelvis"),
    ("pelvis", "spine"),
    ("spine", "chest"),
    ("chest", "neck"),
    ("neck", "head"),
    ("chest", "shoulder.L"),
    ("shoulder.L", "upper_arm.L"),
    ("upper_arm.L", "forearm.L"),
    ("forearm.L", "hand.L"),
    ("chest", "shoulder.R"),
    ("shoulder.R", "upper_arm.R"),
    ("upper_arm.R", "forearm.R"),
    ("forearm.R", "hand.R"),
    ("pelvis", "hip.L"),
    ("hip.L", "thigh.L"),
    ("thigh.L", "shin.L"),
    ("shin.L", "foot.L"),
    ("foot.L", "toe.L"),
    ("pelvis", "hip.R"),
    ("hip.R", "thigh.R"),
    ("thigh.R", "shin.R"),
    ("shin.R", "foot.R"),
    ("foot.R", "toe.R")
]

for connection in bone_connections:
    parent_bone, child_bone = connection
    parent = armature.data.edit_bones[parent_bone]
    child = armature.data.edit_bones[child_bone]
    child.parent = parent

# Exit edit mode
bpy.ops.object.mode_set(mode='OBJECT')

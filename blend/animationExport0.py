import bpy
import sys
import bmesh
import json
from anytree import Node, RenderTree

output_path = "BlenderAnimations.json"

# bpy.ops.import_scene.fbx(filepath = "../../Tufani/LILY_7_3_BLEND.fbx")
bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")

def outputWeights(vertex_groups):
    for group in vertex_groups:
        group_name = group.name
        print(f"")
        print(f"<{group_name}>")
        print(f"")
        if group:
            group_index = group.index
            group_weight = group.weight(group_index)
            print(f"({group_index}) = {group_weight}")


joint_lookup = {}

armature = None
for obj in bpy.context.scene.objects:
    if obj.type == 'ARMATURE':
        armature = obj
        humanoid_root = Node(obj.name)
        joint_lookup[obj.name] = humanoid_root;
        break

if armature:
    armature.select_set(True)
    bpy.context.view_layer.objects.active = armature
    # modes ('OBJECT', 'EDIT', 'SCULPT', 'VERTEX_PAINT', 'WEIGHT_PAINT', 'TEXTURE_PAINT')
    bpy.ops.object.mode_set(mode='POSE')
    for bone in armature.pose.bones:
        # Access bone name, location, rotation, and scale
        joint_name = bone.name
        joint_location = bone.location
        joint_rotation = bone.rotation_euler
        joint_scale = bone.scale
        # Do something with this bone information
        print('<HAnimJoint DEF="Toddler_%s" name="%s" ' % (joint_name, joint_name))
        if bone.parent:
            joint_parent_name = bone.parent.name
        else:
            joint_parent_name = armature.name
        # print(f"Bone Parent: {joint_parent_name}")
        node = Node(joint_name, parent=joint_lookup[joint_parent_name])
        joint_lookup[joint_name] = node;

        print(' center="%s %s %s"' % (joint_location[:]))
        # joint_rotation = joint_rotation.to_axis_angle()  # originally in euler, see above
        # joint_rotation = (*rot[0], joint_rotation[1])
        print(' rotation="%s %s %s"' % (joint_rotation[:]))
        print(' scale="%s %s %s">' % (joint_scale[:]))
        for jnt in bone.children:
            print(f"child {jnt.name}")
        print('</HAnimJoint>\n')

# def dumpHAnim(node):


#for pre, fill, node in RenderTree(humanoid_root):
    #print("%s%s" % (pre, node.name))

# see skinweights.py
#if armature:
#    # obj = bpy.data.objects['YourMeshObjectName']
#    for obj in bpy.context.selected_objects:
#        if obj.type == 'MESH':
#            mesh_data = obj.data
#            for vertex in mesh_data.vertices:
#                    # Access vertex coordinates  
#                    vertex_index = vertex.index
#                    vertex_coords = vertex.co
#                    # Do something with this vertex information
#                    print(f"Vertex Coordinates {vertex_index} {vertex_coords}")
#            vertex_groups = obj.vertex_groups
#            outputWeights(vertex_groups)

if armature:
    # Get the animation data for the armature
    animation_data = armature.animation_data
    if animation_data:
        # Access the action (animation) associated with the armature
        action = animation_data.action
        if action:
            # Create a data structure to store animation data
            animation_data = {
                "frames": [],
                "bone_animations": {}
            }
            
            # Collect animation data for each frame
            for frame in range(int(action.frame_range.x), int(action.frame_range.y) + 1):
                bpy.context.scene.frame_set(frame)
                
                frame_data = {
                    "frame_number": frame,
                    "bone_transforms": {}
                }
                
                # Collect bone transformation data for each bone
                for bone in armature.pose.bones:
                    bone_data = {
                        "location": bone.location[:],
                        "rotation": bone.rotation_euler[:],
                        "scale": bone.scale[:]
                    }
                    frame_data["bone_transforms"][bone.name] = bone_data
                
                animation_data["frames"].append(frame_data)
                
            # Export the animation data to your custom format
            with open(output_path, 'w') as file:
                # Implement your custom export format logic here
                # Write animation_data to the file in your desired format
                file.write(json.dumps(animation_data))
                
            print(f"Animation data exported to {output_path}")
        else:
            print("No animation data associated with the armature.")
    else:
        print("No animation data found for the armature.")
else:
    print("No armature found in the scene.")

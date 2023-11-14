import bpy

# Define the path where you want to save the animation data
output_path = "/path/to/your/output/file.humanoidanim"

# Access the armature object
armature = None
for obj in bpy.context.scene.objects:
    if obj.type == 'ARMATURE':
        armature = obj
        break

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

            print(f"Animation data exported to {output_path}")
        else:
            print("No animation data associated with the armature.")
    else:
        print("No animation data found for the armature.")
else:
    print("No armature found in the scene.")

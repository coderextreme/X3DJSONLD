import bpy
import json
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

# from Claude.ai

# Load bone mapping from file
def load_bone_mapping(file_path):
    with open(file_path, 'r') as f:
        return json.load(f)

# Set up bone mapping for all armatures in the scene
def setup_bone_mapping(mapping):
    for obj in bpy.data.objects:
        if obj.type == 'ARMATURE':
            for vrm_bone, blender_bone in mapping.items():
                if blender_bone in obj.pose.bones:
                    obj.pose.bones[blender_bone].bone.vrm_bone_name = vrm_bone
                if blender_bone in obj.edit.bones:
                    obj.edit.bones[blender_bone].bone.vrm_bone_name = vrm_bone

# Prepare scene for export
def prepare_scene(context):
    # Select all armatures and their associated meshes
    bpy.ops.object.select_all(action='DESELECT')
    for obj in bpy.data.objects:
        if obj.type == 'ARMATURE':
            obj.select_set(True)
            # Select meshes parented to this armature
            for child in obj.children:
                if child.type == 'MESH':
                    child.select_set(True)

    # Set the active object to the first selected armature
    for obj in context.selected_objects:
        if obj.type == 'ARMATURE':
            context.view_layer.objects.active = obj
            break

# Export VRM
def export_vrm(context, filepath):
    bpy.ops.export_scene.vrm(
        filepath=os.path.join(filepath, "JinScaledV2L1LOA4OnlyMarkers11fExport.vrm")
    )

# Main function
def main():
    context = bpy.context

    # Load bone mapping
    bone_mapping = load_bone_mapping('C:/Users/john/Documents/bonemapping.json')


    # Set up bone mapping for all armatures
    setup_bone_mapping(bone_mapping)

    # import scene
    bpy.ops.import_scene.x3d(filepath="JinScaledV2L1LOA4OnlyMarkers11f.x3d", axis_forward='Y', axis_up='Z')

    # Prepare scene
    prepare_scene(context)

    # Export VRM
    export_filepath = '.'
    export_vrm(context, export_filepath)

if __name__ == "__main__":
    main()

import bpy

def get_skinning_weights(obj=None):
    ## create the dict for the groups attache the index to the name
    if obj is None:
        obj = bpy.context.active_object
    print(f"Armature {obj.name}")

    # get the names of the bones in the armature associated with the object
    for modifier in obj.modifiers:
        if modifier.type == 'ARMATURE':
            armature = modifier.object.data
            armature_bones = {bone.name for bone in armature.bones}
            break
        
    # get the mapping from group indices to bones
    group_to_bone = {i: group.name for i, group in enumerate(obj.vertex_groups)}
    
    # determine the bone weights associated with each vertex
    mesh = obj.data
    for vertex in mesh.vertices: ##in each vertex of the mesh
        print('Vertex', vertex.index)
        for group in vertex.groups: #first loop to calculate the total weight and the space allowed if some are locked
            group_index = group.group
            group_bone = group_to_bone[group_index]
            if group_bone in armature_bones: ##if it's a bone
                print('\t', group_bone, group.weight)
            else:
                print('\t', 'NOT A BONE:', group_bone, group.weight)

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)
bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")
for obj in bpy.context.scene.objects:
    #if obj.type == 'ARMATURE':
        #armature = obj
    if obj.type == 'MESH':
        mesh = obj.data
        bpy.context.view_layer.objects.active = obj
        get_skinning_weights(obj)

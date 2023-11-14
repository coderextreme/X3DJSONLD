        armature_bones = {bone.name for bone in armature.pose.bones}
        skinCoordInfo = {}
        for obj in bpy.data.objects:
            if obj.type == 'MESH':
                if obj.parent == armature:
                    group_to_bone = {i: group.name for i, group in enumerate(obj.vertex_groups)}
        
                    # determine the bone weights associated with each vertex
                    mesh = obj.data
                    for vertex in mesh.vertices: ##in each vertex of the mesh
                        #print('Vertex', vertex.index)
                        for group in vertex.groups: #first loop to calculate the total weight and the space allowed if some are locked
                            group_index = group.group
                            group_bone = group_to_bone[group_index]
                            if group_bone in armature_bones: ##if it's a bone
                                print('\t', group_bone, group.weight)
                                try:
                                    if skinCoordInfo[group_bone] is None:
                                        skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                                except:
                                        skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                                skinCoordInfo[group_bone]['indices'].append(vertex.index)
                                    
                                skinCoordInfo[group_bone]['weights'].append(group.weight)
                            else:
                                print('\t', 'NOT A BONE:', group_bone, group.weight)

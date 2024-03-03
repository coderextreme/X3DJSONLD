import bpy

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
#bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.blend")
# bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
#bpy.ops.wm.collada_import(
#    filepath = "gramps-ANIM.dae",
#    auto_connect = True,
#    find_chains = True,
#    fix_orientation = True)
#bpy.ops.import_scene.fbx(filepath = "../../WinterAndSpring/InputDir73/maya to c4d files/gramps_my_c4d_anim.fbx")
#bpy.ops.import_scene.gltf(filepath = "../../WinterAndSpring/HAnimDecoratorAssembly/gramps73/gramps_c4d_omni.gltf")

skinCoordInfo = {}

for obj in bpy.context.scene.objects:
    if obj.type == 'MESH':
        obj.select_set(True)
        bpy.context.view_layer.objects.active = obj
        bpy.ops.object.mode_set(mode='OBJECT')


obj = bpy.context.active_object
mesh = bpy.data.objects[obj.name].data
mesh_name = bpy.data.objects[obj.name].data.name
listbones = {}
b=0


## check the armature attached to the object
for modifiers in bpy.data.objects[obj.name].modifiers:
    if modifiers.type == 'ARMATURE':
        data = bpy.data.objects[modifiers.object.name].data.name
        for bones in bpy.data.armatures[data].bones:
            #print(f"Listing bones {bones.name}")
            listbones[bones.name] = b
            b+=1


## create the dict for the groups attache the index to the name
DictGroup = {} ##ask the index it will give you the name

i=0
for group in bpy.context.active_object.vertex_groups:
    #print(f"Listing group {group.name}")
    DictGroup[i]=group.name
    i+=1

if bpy.context.mode == 'OBJECT':
    for vertex in bpy.data.meshes[mesh_name].vertices: ##in each vertex of the mesh
        total_weight=0 ##where to add the total of unlock
        space_left=1 ##goal less the locked ones

        for group in vertex.groups: #first loop to calculate the total weight and the space allowed if some are locked
            if DictGroup[group.group] in listbones: ##if it's a bone
                # group.weight
                # print("this is a bone " + str(DictGroup[group.group]))
                pass
            else:
                print("this is not a bone group " + str(DictGroup[group.group]))

        for group in vertex.groups: #second on is to assign the new weight
            if DictGroup[group.group] in listbones:
                if not obj.vertex_groups[DictGroup[group.group]].lock_weight: ##if it's not locked!
                    this_weight = group.weight
                    # print(f"OBJECT bone {DictGroup[group.group]} index {vertex.index} weight {this_weight}")
                    group_bone = DictGroup[group.group]
                    try:
                        if skinCoordInfo[group_bone] is None:
                            skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                    except:
                            skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                    skinCoordInfo[group_bone]['indices'].append(vertex.index)
                    skinCoordInfo[group_bone]['weights'].append(this_weight)

                    # obj.vertex_groups[DictGroup[group.group]].add([vertex.index],new_weight,'REPLACE')

if bpy.context.mode == 'EDIT_MESH':
    myVertex = {}
    v=0
    bpy.ops.object.mode_set(mode='OBJECT')
    for vertex in bpy.data.meshes[mesh_name].vertices:
        if vertex.select==True:
            myVertex[v]=vertex.index
            v+=1

    for each in myVertex:
        for group in mesh.vertices[myVertex[each]].groups: #first loop to calculate the total weight and the space allowed if some are locked
            # print(group.weight)
            if DictGroup[group.group] in listbones: ##if it's a bone
                #print("this is a bone " + str(DictGroup[group.group]))
                pass
            else:
                print("this is not a bone group " + str(DictGroup[group.group]))

        for group in mesh.vertices[myVertex[each]].groups: #second on is to assign the new weight
            if DictGroup[group.group] in listbones:
                if not obj.vertex_groups[DictGroup[group.group]].lock_weight: ##if it's not locked!
                    this_weight = group.weight
                    # print(f"EDIT MESH bone {DictGroup[group.group]} index {myVertex[each]} weight {this_weight}")
                    group_bone = DictGroup[group.group]
                    try:
                        if skinCoordInfo[group_bone] is None:
                            skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                    except:
                            skinCoordInfo = {**skinCoordInfo, group_bone : { 'indices' : [], 'weights': []}}
                    skinCoordInfo[group_bone]['indices'].append(vertex.index)
                    skinCoordInfo[group_bone]['weights'].append(this_weight)

bpy.ops.object.mode_set(mode='EDIT')
for group_bone in skinCoordInfo:
    try:
        info = skinCoordInfo[group_bone]
        print(f"\n<{group_bone}>\n")
        indices = info['indices']
        weights = info['weights']
        for i in range(len(info['indices'])):
            print(f"({indices[i]}) = {weights[i]}")
    except:
        pass

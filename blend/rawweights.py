import bpy
print("Post import")

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)
print("Pre-open")

print("open lily")
#bpy.ops.wm.open_mainfile(filepath="LILY_7_3_BLEND.blend")
print("open gramps")
bpy.ops.wm.open_mainfile(filepath="gramps_anim_short.blend")
# bpy.ops.import_scene.fbx(filepath = "gramps_anim_short.fbx")
print("Post-open")

for obj in bpy.context.scene.objects:
    if obj.type == 'MESH':
        obj.select_set(True)
        bpy.context.view_layer.objects.active = obj
        bpy.ops.object.mode_set(mode='WEIGHT_PAINT') #  ('OBJECT', 'EDIT', 'SCULPT', 'VERTEX_PAINT', 'WEIGHT_PAINT', 'TEXTURE_PAINT')

obj = bpy.context.active_object
mesh = bpy.data.objects[obj.name].data
mesh_name = bpy.data.objects[obj.name].data.name
listbones = {}
b=0
print("Got here 0")


## check the armature attached to the object
for modifiers in bpy.data.objects[obj.name].modifiers:
    if modifiers.type == 'ARMATURE':
        data = bpy.data.objects[modifiers.object.name].data.name
        for bones in bpy.data.armatures[data].bones:
            listbones[bones.name] = b
            b+=1
print("Got here 1")


## create the dict for the groups attache the index to the name
DictGroup = {} ##ask the index it will give you the name

i=0
for group in bpy.context.active_object.vertex_groups:
    DictGroup[i]=group.name
    i+=1
print("Got here 2")
            
if bpy.context.mode == 'OBJECT':
    for vertex in bpy.data.meshes[mesh_name].vertices: ##in each vertex of the mesh
        total_weight=0 ##where to add the total of unlock
        space_left=1 ##goal less the locked ones
                
        for group in vertex.groups: #first loop to calculate the total weight and the space allowed if some are locked
            if DictGroup[group.group] in listbones: ##if it's a bone
                if obj.vertex_groups[DictGroup[group.group]].lock_weight:
                    space_left-=group.weight
                else:
                    total_weight+=group.weight
            else:
                print("this is not a bone group " + str(DictGroup[group.group])) 
  
        for group in vertex.groups: #second on is to assign the new weight
            if DictGroup[group.group] in listbones: 
                if not obj.vertex_groups[DictGroup[group.group]].lock_weight: ##if it's not locked!
                    this_weight = group.weight
                    if space_left > 0 and total_weight!=0:
                        new_weight = this_weight * (space_left/total_weight)
                    else:
                        new_weight = 0
                        
                    obj.vertex_groups[DictGroup[group.group]].add([vertex.index],new_weight,'REPLACE')
print("Got here 3")
                    
if bpy.context.mode == 'EDIT_MESH':
    print("")
    print("start")
    myVertex = {}
    v=0
    bpy.ops.object.mode_set(mode='OBJECT')
    for vertex in bpy.data.meshes[mesh_name].vertices:
        if vertex.select==True:
            myVertex[v]=vertex.index
            v+=1
    
    for each in myVertex:
        print(myVertex[each])
        total_weight=0 ##where to add the total of unlock
        space_left=1 ##goal less the locked ones
        #print(mesh.vertices[each].index)
               
        for group in mesh.vertices[myVertex[each]].groups: #first loop to calculate the total weight and the space allowed if some are locked
            print(group.weight)              
            if DictGroup[group.group] in listbones: ##if it's a bone
                print("this is a bone " + str(DictGroup[group.group]))

                if obj.vertex_groups[DictGroup[group.group]].lock_weight:
                    space_left-=group.weight
                else:
                    total_weight+=group.weight
            else:
                print("this is not a bone group " + str(DictGroup[group.group])) 
   
        for group in mesh.vertices[myVertex[each]].groups: #second on is to assign the new weight
            if DictGroup[group.group] in listbones: 
                if not obj.vertex_groups[DictGroup[group.group]].lock_weight: ##if it's not locked!
                    this_weight = group.weight
                    if space_left > 0 and total_weight!=0:
                        new_weight = this_weight * (space_left/total_weight)
                    else:
                        new_weight = 0
                        
                    obj.vertex_groups[DictGroup[group.group]].add([myVertex[each]],new_weight,'REPLACE')
print("Got here 4")
bpy.ops.object.mode_set(mode='EDIT')
print("Got here 5")

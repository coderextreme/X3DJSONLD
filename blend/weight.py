import bpy

# Ensure the object is selected and active
obj = bpy.context.active_object

# Check if the object is a mesh
if obj and obj.type == 'MESH':
    # Ensure the object is in Object mode
    bpy.ops.object.mode_set(mode='OBJECT')
    
    # Create a new vertex group if it doesn't exist
    if not obj.vertex_groups:
        obj.vertex_groups.new(name="Group")
    
    # Switch to Weight Paint mode
    bpy.ops.object.mode_set(mode='WEIGHT_PAINT')
    
    # Example of setting weight for a vertex
    vertex_index = 0  # Index of the vertex you want to paint
    weight = 1.0  # Weight value between 0 and 1
    
    # Assign weight to the vertex
    group = obj.vertex_groups["Group"]
    group.add([vertex_index], weight, 'REPLACE')
else:
    print("Selected object is not a mesh or no object is selected.")

bpy.ops.mesh.primitive_plane_add(size=2, enter_editmode=False, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))
bpy.ops.object.origin_set(type='ORIGIN_CURSOR', center='MEDIAN')
bpy.context.space_data.context = 'MODIFIER'
bpy.context.space_data.context = 'CONSTRAINT'
bpy.ops.object.constraint_add(type='FLOOR')
bpy.context.object.constraints["Floor"].floor_location = 'FLOOR_Y'
bpy.context.object.constraints["Floor"].use_rotation = True
bpy.ops.transform.rotate(value=-1.58834, orient_axis='X', orient_type='GLOBAL', orient_matrix=((1, 0, 0), (0, 1, 0), (0, 0, 1)), orient_matrix_type='GLOBAL', constraint_axis=(True, False, False), mirror=False, use_proportional_edit=False, proportional_edit_falloff='SMOOTH', proportional_size=1, use_proportional_connected=False, use_proportional_projected=False, snap=False, snap_elements={'INCREMENT'}, use_snap_project=False, snap_target='CLOSEST', use_snap_self=True, use_snap_edit=True, use_snap_nonedit=True, use_snap_selectable=False, release_confirm=True)
bpy.context.space_data.context = 'OBJECT'
bpy.context.object.rotation_euler[0] = -1.5708
bpy.ops.object.origin_set(type='ORIGIN_CURSOR', center='MEDIAN')
bpy.context.area.ui_type = 'INFO'


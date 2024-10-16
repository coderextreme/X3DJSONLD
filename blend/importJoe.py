import bpy
import os
from mathutils import Matrix, Vector, Quaternion, Euler

#############################################################
objs = bpy.data.objects
bpy.context.view_layer.objects.active = objs["Cube"]
objs.remove(objs["Cube"], do_unlink=True)
#############################################################

#############################################################
# Get the default camera
camera = bpy.data.objects["Camera"]

# Remove the camera from all collections
for collection in bpy.data.collections:
    if camera.name in collection.objects:
        collection.objects.unlink(camera)

# Remove the camera from the scene
if camera.name in bpy.context.scene.collection.objects:
    bpy.context.scene.collection.objects.unlink(camera)

# Delete the camera object
bpy.data.objects.remove(camera, do_unlink=True)
#############################################################


#############################################################
# Get the default light
light = bpy.data.objects["Light"]

# Remove the light from all collections
for collection in bpy.data.collections:
    if light.name in collection.objects:
        collection.objects.unlink(light)

# Remove the light from the scene
if light.name in bpy.context.scene.collection.objects:
    bpy.context.scene.collection.objects.unlink(light)

# Delete the light object
bpy.data.objects.remove(light, do_unlink=True)
#############################################################


#bpy.ops.import_scene.x3d(filepath="JoeSkinTexcoordDisplacerKickUpdate2NoROUTE.x3d", axis_forward='Y', axis_up='Z')
bpy.ops.import_scene.x3d(filepath="JoeSkinTexcoordDisplacerKickUpdate2.x3d", axis_forward='Y', axis_up='Z')
#bpy.ops.import_scene.x3d(filepath="JoeKick.x3dv", axis_forward='Y', axis_up='Z')
#bpy.ops.export_scene.x3dv(filepath="JoeBlender.x3d", export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
#bpy.ops.export_scene.x3dv(filepath="JoeSkinTexcoordDisplacerKickUpdate2Export.x3d", export_hanim_prefix='Joe_',export_round_precision=6, export_yup=True, export_normals=True, export_format="X3D")
# bpy.ops.export_scene.x3dv(filepath="JoeSkinTexcoordDisplacerKickUpdate2Export.x3d", export_round_precision=6, export_normals=True, export_format="X3D")
#bpy.ops.export_scene.gltf(filepath="JoeKick.gltf", export_normals=True, export_format="GLTF_SEPARATE", export_texture_dir="./textures/")
#filepath = "C:/Temp"
#
bpy.ops.export_scene.gltf(
    filepath=os.path.join(".", f"JoeSkinTexcoordDisplacerKickUpdate2Export.glb"),
    export_yup=False,
    # export_format="GLTF_SEPARATE",
    export_format="GLB",
    export_nla_strips_merged_animation_name='Animation',
    export_animation_mode="ACTIVE_ACTIONS", #"SCENE", 
    export_influence_nb=40,
    export_all_influences=True,
    use_active_collection=True
)

def set_view_to_positive_z():
    # Get the 3D view area
    # area = next(area for area in bpy.context.screen.areas if area.type == 'VIEW_3D')
    for area in bpy.context.screen.areas:
        # Get the 3D view space
        #space = area.spaces.active
        for space in area.spaces:

            if space.type == 'VIEW_3D':
                # Turn off the grid floor
                # space.overlay.show_floor = False

                # If you also want to turn off the axes
                #space.overlay.show_axis_x = False
                #space.overlay.show_axis_y = False
                #space.overlay.show_axis_z = False

                if hasattr(space, "region_3d"):
                    # Set the view to orthographic
                    space.region_3d.view_perspective = 'ORTHO'

                    # Set the view rotation
                    rotation = Euler((0, 0, 0), 'XYZ')  # no rotation
                    space.region_3d.view_rotation = rotation.to_quaternion()

                    # Optionally, you can set the view distance
                    space.region_3d.view_distance = 20

    # Update the view
    bpy.context.view_layer.update()

# Call the function to set the view
set_view_to_positive_z()

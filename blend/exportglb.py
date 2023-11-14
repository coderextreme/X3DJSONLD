import bpy
import os

objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)
#bpy.ops.import_scene.fbx(filepath = "../../Tufani/InputDir73/maya to c4d files/gramps_my_c4d_anim.fbx")
bpy.ops.wm.collada_import(filepath = "../../Tufani/InputDir73/maya to c4d files/gramps-ANIM.dae", auto_connect = True, find_chains = True, fix_orientation = True)

def export_objects(path):
    # path fixing (many other validations to be added here)
    path = os.path.abspath(path)

    # get list of objects
    obj_list = bpy.context.selected_objects

    # deselect all in scene
    bpy.ops.object.select_all(action='TOGGLE')

    # loop all initial objects
    for o in obj_list:

        # select the object
        bpy.context.scene.objects[o.name].select_set(True)

        # create directory
        outpath = os.path.join(path, o.name)
        os.mkdir(outpath)

        # set filename
        outpath = os.path.join(outpath, o.name+'.glb')

        # export it
        # many other parameters can be added here

        bpy.ops.export_scene.gltf(
            filepath=outpath,
            use_selection=True
        )

export_objects('C:\\Users\\john\\X3DJSONLD\\blend\\')

import bpy

# remove initial cube
objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

skeleton = bpy.data.objects.new("humanoid_root", bpy.data.armatures.new("Armature"))
bpy.context.collection.objects.link(skeleton)
bpy.context.view_layer.objects.active = skeleton
skeleton.select_set(True)
bpy.ops.object.mode_set(mode='EDIT')

# Create joints
joints = [
("humanoid_root", (0, -2.95823e-32, 0), (0, 0, 0)),
              ("l_tarsal_distal_interphalangeal_2", (3.57628e-08, -1.19209e-08, 0.269543), (-2.14577e-07, -9.83477e-08, 1.22365)),
            ("l_metatarsophalangeal_2", (-2.14577e-07, -9.83477e-08, 1.22365), (-1.19209e-08, -7.15256e-08, 1.05154)),
          ("l_talocrural", (-1.19209e-08, -7.15256e-08, 1.05154), (0.632165, -0.0218624, -0.000942702)),
        ("l_knee", (0.632165, -0.0218624, -0.000942702), (-0.00600664, 0.0258689, 4.86199)),
      ("l_hip", (-0.00600664, 0.0258689, 4.86199), (-6.02828e-05, 0.000259622, -0.0487953)),
              ("r_tarsal_distal_interphalangeal_2", (-1.37091e-07, -2.38419e-07, 0.244856), (1.19209e-08, -3.09944e-07, 1.21069)),
            ("r_metatarsophalangeal_2", (1.19209e-08, -3.09944e-07, 1.21069), (-2.5332e-08, -1.3411e-08, 1.00791)),
          ("r_talocrural", (-2.5332e-08, -1.3411e-08, 1.00791), (-0.371319, 0.255446, -0.0093133)),
        ("r_knee", (-0.371319, 0.255446, -0.0093133), (-0.00600664, 0.0258689, 4.86199)),
      ("r_hip", (-0.00600664, 0.0258689, 4.86199), (-6.02828e-05, 0.000259622, -0.0487953)),
  ("sacroiliac", (-6.02828e-05, 0.000259622, -0.0487953), (0, -2.95823e-32, 0)),
                  ("skullbase", (-2.08616e-08, 5.12839e-08, 0.172234), (7.30157e-08, 3.12924e-08, 0.294529)),
                ("vc3", (7.30157e-08, 3.12924e-08, 0.294529), (6.33299e-09, 4.93601e-09, 0.230443)),
              ("vc7", (6.33299e-09, 4.93601e-09, 0.230443), (-2.6077e-09, -4.88013e-08, 0.221224)),
                            ("l_carpal_interphalangeal_1", (6.25849e-08, -1.3113e-07, 0.090866), (-2.563e-07, -4.17233e-08, 0.0705006)),
                          ("l_metacarpophalangeal_1", (-2.563e-07, -4.17233e-08, 0.0705006), (5.96046e-08, -8.41916e-08, 0.606581)),
                        ("l_carpometacarpal_1", (5.96046e-08, -8.41916e-08, 0.606581), (1.49012e-07, -5.96046e-09, 0.610989)),
                              ("l_carpal_distal_interphalangeal_2", (3.57628e-08, 3.57628e-08, 0.100184), (3.57628e-08, 2.98023e-08, 0.180541)),
                            ("l_carpal_proximal_interphalangeal_2", (3.57628e-08, 2.98023e-08, 0.180541), (0.00824935, 0.0474083, 0.070245)),
                          ("l_metacarpophalangeal_2", (0.00824935, 0.0474083, 0.070245), (5.96046e-08, -8.41916e-08, 0.606581)),
                        ("l_carpometacarpal_2", (5.96046e-08, -8.41916e-08, 0.606581), (1.49012e-07, -5.96046e-09, 0.610989)),
                              ("l_carpal_distal_interphalangeal_3", (6.55651e-08, -1.14739e-07, 0.116451), (5.96046e-08, -2.5034e-07, 0.183302)),
                            ("l_carpal_proximal_interphalangeal_3", (5.96046e-08, -2.5034e-07, 0.183302), (0.00748079, -0.00180886, -0.00861347)),
                          ("l_metacarpophalangeal_3", (0.00748079, -0.00180886, -0.00861347), (5.96046e-08, -8.41916e-08, 0.606581)),
                        ("l_carpometacarpal_3", (5.96046e-08, -8.41916e-08, 0.606581), (1.49012e-07, -5.96046e-09, 0.610989)),
                              ("l_carpal_distal_interphalangeal_4", (-3.57628e-08, 9.53674e-08, 0.0971972), (-3.57628e-08, -2.6226e-07, 0.169769)),
                            ("l_carpal_proximal_interphalangeal_4", (-3.57628e-08, -2.6226e-07, 0.169769), (-0.00194269, -0.0202627, -0.0467341)),
                          ("l_metacarpophalangeal_4", (-0.00194269, -0.0202627, -0.0467341), (5.96046e-08, -8.41916e-08, 0.606581)),
                        ("l_carpometacarpal_4", (5.96046e-08, -8.41916e-08, 0.606581), (1.49012e-07, -5.96046e-09, 0.610989)),
                              ("l_carpal_distal_interphalangeal_5", (-1.19209e-08, -4.17233e-08, 0.0831431), (4.47035e-09, 2.5332e-07, 0.131985)),
                            ("l_carpal_proximal_interphalangeal_5", (4.47035e-09, 2.5332e-07, 0.131985), (-0.0160443, -0.0549881, -0.102727)),
                          ("l_metacarpophalangeal_5", (-0.0160443, -0.0549881, -0.102727), (5.96046e-08, -8.41916e-08, 0.606581)),
                        ("l_carpometacarpal_5", (5.96046e-08, -8.41916e-08, 0.606581), (1.49012e-07, -5.96046e-09, 0.610989)),
                    ("l_radiocarpal", (1.49012e-07, -5.96046e-09, 0.610989), (5.96046e-08, -1.66893e-07, 0.425543)),
                  ("l_elbow", (5.96046e-08, -1.66893e-07, 0.425543), (0.231818, -0.0695866, -0.159132)),
                ("l_shoulder", (0.231818, -0.0695866, -0.159132), (6.33299e-09, 4.93601e-09, 0.230443)),
              ("l_sternoclavicular", (6.33299e-09, 4.93601e-09, 0.230443), (-2.6077e-09, -4.88013e-08, 0.221224)),
                            ("r_carpal_interphalangeal_1", (5.96046e-08, -3.8147e-07, 0.0887248), (-4.76837e-08, 1.19209e-08, 0.0870555)),
                          ("r_metacarpophalangeal_1", (-4.76837e-08, 1.19209e-08, 0.0870555), (2.35252e-07, 0, 0.63663)),
                        ("r_carpometacarpal_1", (2.35252e-07, 0, 0.63663), (-1.19209e-07, -2.38419e-08, 0.580767)),
                              ("r_carpal_distal_interphalangeal_2", (2.98023e-08, -1.2517e-07, 0.096962), (1.19209e-08, 1.57952e-07, 0.200307)),
                            ("r_carpal_proximal_interphalangeal_2", (1.19209e-08, 1.57952e-07, 0.200307), (-0.0532893, 0.0304679, 0.117645)),
                          ("r_metacarpophalangeal_2", (-0.0532893, 0.0304679, 0.117645), (2.35252e-07, 0, 0.63663)),
                        ("r_carpometacarpal_2", (2.35252e-07, 0, 0.63663), (-1.19209e-07, -2.38419e-08, 0.580767)),
                              ("r_carpal_distal_interphalangeal_3", (-1.19209e-08, -2.02656e-07, 0.110767), (-1.78814e-08, 0, 0.206476)),
                            ("r_carpal_proximal_interphalangeal_3", (-1.78814e-08, 0, 0.206476), (-0.00664537, 0.0621772, 0.0232517)),
                          ("r_metacarpophalangeal_3", (-0.00664537, 0.0621772, 0.0232517), (2.35252e-07, 0, 0.63663)),
                        ("r_carpometacarpal_3", (2.35252e-07, 0, 0.63663), (-1.19209e-07, -2.38419e-08, 0.580767)),
                              ("r_carpal_distal_interphalangeal_4", (-2.75671e-07, -5.96046e-09, 0.112128), (-2.98023e-07, 8.9407e-08, 0.179757)),
                            ("r_carpal_proximal_interphalangeal_4", (-2.98023e-07, 8.9407e-08, 0.179757), (0.0103402, 0.0303, -0.0230945)),
                          ("r_metacarpophalangeal_4", (0.0103402, 0.0303, -0.0230945), (2.35252e-07, 0, 0.63663)),
                        ("r_carpometacarpal_4", (2.35252e-07, 0, 0.63663), (-1.19209e-07, -2.38419e-08, 0.580767)),
                              ("r_carpal_distal_interphalangeal_5", (3.94881e-08, -2.38419e-08, 0.0501066), (2.68221e-08, 1.10269e-07, 0.139257)),
                            ("r_carpal_proximal_interphalangeal_5", (2.68221e-08, 1.10269e-07, 0.139257), (0.034228, -0.0512736, -0.0839285)),
                          ("r_metacarpophalangeal_5", (0.034228, -0.0512736, -0.0839285), (2.35252e-07, 0, 0.63663)),
                        ("r_carpometacarpal_5", (2.35252e-07, 0, 0.63663), (-1.19209e-07, -2.38419e-08, 0.580767)),
                    ("r_radiocarpal", (-1.19209e-07, -2.38419e-08, 0.580767), (9.53674e-08, 1.96695e-07, 0.400056)),
                  ("r_elbow", (9.53674e-08, 1.96695e-07, 0.400056), (-0.316977, -0.229429, -0.106526)),
                ("r_shoulder", (-0.316977, -0.229429, -0.106526), (6.33299e-09, 4.93601e-09, 0.230443)),
              ("r_sternoclavicular", (6.33299e-09, 4.93601e-09, 0.230443), (-2.6077e-09, -4.88013e-08, 0.221224)),
          ("vt4", (-2.6077e-09, -4.88013e-08, 0.221224), (5.58794e-10, -1.59256e-08, 0.221354)),
        ("vt9", (5.58794e-10, -1.59256e-08, 0.221354), (2.98023e-09, -1.35973e-08, 0.222897)),
      ("vt12", (2.98023e-09, -1.35973e-08, 0.222897), (2.29285e-10, -1.15962e-09, 2.69923)),
    ("vl3", (2.29285e-10, -1.15962e-09, 2.69923), (-6.02828e-05, 0.000259622, -0.0487953)),
  ("vl5", (-6.02828e-05, 0.000259622, -0.0487953), (0, -2.95823e-32, 0)),
]

for joint in joints:
    joint_name, joint_start, joint_end = joint
    bpy.ops.armature.bone_primitive_add(name=joint_name)
    new_segment = skeleton.data.edit_bones[joint_name]
    new_segment.head = joint_start
    new_segment.tail = joint_end

# Connect joints
segments = [
              ("l_metatarsophalangeal_2", "l_tarsal_distal_interphalangeal_2"),
            ("l_talocrural", "l_metatarsophalangeal_2"),
          ("l_knee", "l_talocrural"),
        ("l_hip", "l_knee"),
      ("sacroiliac", "l_hip"),
              ("r_metatarsophalangeal_2", "r_tarsal_distal_interphalangeal_2"),
            ("r_talocrural", "r_metatarsophalangeal_2"),
          ("r_knee", "r_talocrural"),
        ("r_hip", "r_knee"),
      ("sacroiliac", "r_hip"),
  ("humanoid_root", "sacroiliac"),
                  ("vc3", "skullbase"),
                ("vc7", "vc3"),
              ("vt4", "vc7"),
                            ("l_metacarpophalangeal_1", "l_carpal_interphalangeal_1"),
                          ("l_carpometacarpal_1", "l_metacarpophalangeal_1"),
                        ("l_radiocarpal", "l_carpometacarpal_1"),
                              ("l_carpal_proximal_interphalangeal_2", "l_carpal_distal_interphalangeal_2"),
                            ("l_metacarpophalangeal_2", "l_carpal_proximal_interphalangeal_2"),
                          ("l_carpometacarpal_2", "l_metacarpophalangeal_2"),
                        ("l_radiocarpal", "l_carpometacarpal_2"),
                              ("l_carpal_proximal_interphalangeal_3", "l_carpal_distal_interphalangeal_3"),
                            ("l_metacarpophalangeal_3", "l_carpal_proximal_interphalangeal_3"),
                          ("l_carpometacarpal_3", "l_metacarpophalangeal_3"),
                        ("l_radiocarpal", "l_carpometacarpal_3"),
                              ("l_carpal_proximal_interphalangeal_4", "l_carpal_distal_interphalangeal_4"),
                            ("l_metacarpophalangeal_4", "l_carpal_proximal_interphalangeal_4"),
                          ("l_carpometacarpal_4", "l_metacarpophalangeal_4"),
                        ("l_radiocarpal", "l_carpometacarpal_4"),
                              ("l_carpal_proximal_interphalangeal_5", "l_carpal_distal_interphalangeal_5"),
                            ("l_metacarpophalangeal_5", "l_carpal_proximal_interphalangeal_5"),
                          ("l_carpometacarpal_5", "l_metacarpophalangeal_5"),
                        ("l_radiocarpal", "l_carpometacarpal_5"),
                    ("l_elbow", "l_radiocarpal"),
                  ("l_shoulder", "l_elbow"),
                ("l_sternoclavicular", "l_shoulder"),
              ("vt4", "l_sternoclavicular"),
                            ("r_metacarpophalangeal_1", "r_carpal_interphalangeal_1"),
                          ("r_carpometacarpal_1", "r_metacarpophalangeal_1"),
                        ("r_radiocarpal", "r_carpometacarpal_1"),
                              ("r_carpal_proximal_interphalangeal_2", "r_carpal_distal_interphalangeal_2"),
                            ("r_metacarpophalangeal_2", "r_carpal_proximal_interphalangeal_2"),
                          ("r_carpometacarpal_2", "r_metacarpophalangeal_2"),
                        ("r_radiocarpal", "r_carpometacarpal_2"),
                              ("r_carpal_proximal_interphalangeal_3", "r_carpal_distal_interphalangeal_3"),
                            ("r_metacarpophalangeal_3", "r_carpal_proximal_interphalangeal_3"),
                          ("r_carpometacarpal_3", "r_metacarpophalangeal_3"),
                        ("r_radiocarpal", "r_carpometacarpal_3"),
                              ("r_carpal_proximal_interphalangeal_4", "r_carpal_distal_interphalangeal_4"),
                            ("r_metacarpophalangeal_4", "r_carpal_proximal_interphalangeal_4"),
                          ("r_carpometacarpal_4", "r_metacarpophalangeal_4"),
                        ("r_radiocarpal", "r_carpometacarpal_4"),
                              ("r_carpal_proximal_interphalangeal_5", "r_carpal_distal_interphalangeal_5"),
                            ("r_metacarpophalangeal_5", "r_carpal_proximal_interphalangeal_5"),
                          ("r_carpometacarpal_5", "r_metacarpophalangeal_5"),
                        ("r_radiocarpal", "r_carpometacarpal_5"),
                    ("r_elbow", "r_radiocarpal"),
                  ("r_shoulder", "r_elbow"),
                ("r_sternoclavicular", "r_shoulder"),
              ("vt4", "r_sternoclavicular"),
          ("vt9", "vt4"),
        ("vt12", "vt9"),
      ("vl3", "vt12"),
    ("vl5", "vl3"),
  ("humanoid_root", "vl5"),
]

for segment in segments:
    parent_joint, child_joint = segment
    parent = skeleton.data.edit_bones[parent_joint]
    child = skeleton.data.edit_bones[child_joint]
    child.parent = parent

# Exit edit mode
bpy.ops.object.mode_set(mode='OBJECT')
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.json", export_format="JSON")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.html", export_format="HTML")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.x3d", export_format="X3D")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.x3dv", export_format="X3DV")

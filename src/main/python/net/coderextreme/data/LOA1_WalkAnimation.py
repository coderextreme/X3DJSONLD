print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "LOA1_WalkAnimation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Humanoid animation prototype reusable by any Humanoid."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Cindy Ballreich cindy@ballreich.net 3Name3D"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "rights"
meta5.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "1 October 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 09 Feb 2026 07:12:35 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://HAnim.org/Specifications/HAnim2001"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://HAnim.org/Models"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://HAnim.org/Nodes"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "subject"
meta13.content = "Nancy Walk Animation HAnim 2001"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.name = "LOA1_WalkAnimation"
ProtoInterface17 = x3d.ProtoInterface()
field18 = x3d.field()
field18.accessType = "inputOutput"
field18.type = "SFTime"
field18.name = "cycleInterval"
field18.value = 2

ProtoInterface17.field.append(field18)
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFBool"
field19.name = "enabled"
field19.value = True

ProtoInterface17.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFBool"
field20.name = "loop"
field20.value = True

ProtoInterface17.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFTime"
field21.name = "startTime"
field21.value = 0

ProtoInterface17.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFTime"
field22.name = "stopTime"

ProtoInterface17.field.append(field22)
field23 = x3d.field()
field23.accessType = "outputOnly"
field23.type = "SFFloat"
field23.name = "fraction_changed"

ProtoInterface17.field.append(field23)
field24 = x3d.field()
field24.accessType = "outputOnly"
field24.type = "SFBool"
field24.name = "isActive"

ProtoInterface17.field.append(field24)
field25 = x3d.field()
field25.accessType = "outputOnly"
field25.type = "SFVec3f"
field25.name = "HumanoidRoot_translation_changed"

ProtoInterface17.field.append(field25)
field26 = x3d.field()
field26.accessType = "outputOnly"
field26.type = "SFRotation"
field26.name = "HumanoidRoot_rotation_changed"

ProtoInterface17.field.append(field26)
field27 = x3d.field()
field27.accessType = "outputOnly"
field27.type = "SFRotation"
field27.name = "lower_body_rotation_changed"

ProtoInterface17.field.append(field27)
field28 = x3d.field()
field28.accessType = "outputOnly"
field28.type = "SFRotation"
field28.name = "l_hip_rotation_changed"

ProtoInterface17.field.append(field28)
field29 = x3d.field()
field29.accessType = "outputOnly"
field29.type = "SFRotation"
field29.name = "l_knee_rotation_changed"

ProtoInterface17.field.append(field29)
field30 = x3d.field()
field30.accessType = "outputOnly"
field30.type = "SFRotation"
field30.name = "l_ankle_rotation_changed"

ProtoInterface17.field.append(field30)
field31 = x3d.field()
field31.accessType = "outputOnly"
field31.type = "SFRotation"
field31.name = "l_midtarsal_rotation_changed"

ProtoInterface17.field.append(field31)
field32 = x3d.field()
field32.accessType = "outputOnly"
field32.type = "SFRotation"
field32.name = "r_hip_rotation_changed"

ProtoInterface17.field.append(field32)
field33 = x3d.field()
field33.accessType = "outputOnly"
field33.type = "SFRotation"
field33.name = "r_knee_rotation_changed"

ProtoInterface17.field.append(field33)
field34 = x3d.field()
field34.accessType = "outputOnly"
field34.type = "SFRotation"
field34.name = "r_ankle_rotation_changed"

ProtoInterface17.field.append(field34)
field35 = x3d.field()
field35.accessType = "outputOnly"
field35.type = "SFRotation"
field35.name = "r_midtarsal_rotation_changed"

ProtoInterface17.field.append(field35)
field36 = x3d.field()
field36.accessType = "outputOnly"
field36.type = "SFRotation"
field36.name = "vl5_rotation_changed"

ProtoInterface17.field.append(field36)
field37 = x3d.field()
field37.accessType = "outputOnly"
field37.type = "SFRotation"
field37.name = "skullbase_rotation_changed"

ProtoInterface17.field.append(field37)
field38 = x3d.field()
field38.accessType = "outputOnly"
field38.type = "SFRotation"
field38.name = "l_shoulder_rotation_changed"

ProtoInterface17.field.append(field38)
field39 = x3d.field()
field39.accessType = "outputOnly"
field39.type = "SFRotation"
field39.name = "l_elbow_rotation_changed"

ProtoInterface17.field.append(field39)
field40 = x3d.field()
field40.accessType = "outputOnly"
field40.type = "SFRotation"
field40.name = "l_wrist_rotation_changed"

ProtoInterface17.field.append(field40)
field41 = x3d.field()
field41.accessType = "outputOnly"
field41.type = "SFRotation"
field41.name = "r_shoulder_rotation_changed"

ProtoInterface17.field.append(field41)
field42 = x3d.field()
field42.accessType = "outputOnly"
field42.type = "SFRotation"
field42.name = "r_elbow_rotation_changed"

ProtoInterface17.field.append(field42)
field43 = x3d.field()
field43.accessType = "outputOnly"
field43.type = "SFRotation"
field43.name = "r_wrist_rotation_changed"

ProtoInterface17.field.append(field43)

ProtoDeclare16.ProtoInterface = ProtoInterface17
ProtoBody44 = x3d.ProtoBody()
Group45 = x3d.Group()
TimeSensor46 = x3d.TimeSensor(DEF="TIMER")
IS47 = x3d.IS()
connect48 = x3d.connect()
connect48.nodeField = "enabled"
connect48.protoField = "enabled"

IS47.connect.append(connect48)
connect49 = x3d.connect()
connect49.nodeField = "cycleInterval"
connect49.protoField = "cycleInterval"

IS47.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "loop"
connect50.protoField = "loop"

IS47.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "startTime"
connect51.protoField = "startTime"

IS47.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "stopTime"
connect52.protoField = "stopTime"

IS47.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "isActive"
connect53.protoField = "isActive"

IS47.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "fraction_changed"
connect54.protoField = "fraction_changed"

IS47.connect.append(connect54)

TimeSensor46.IS = IS47

Group45.children.append(TimeSensor46)
PositionInterpolator55 = x3d.PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator55.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator55.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.nodeField = "value_changed"
connect57.protoField = "HumanoidRoot_translation_changed"

IS56.connect.append(connect57)

PositionInterpolator55.IS = IS56

Group45.children.append(PositionInterpolator55)
OrientationInterpolator58 = x3d.OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR")
OrientationInterpolator58.key = [0,1]
OrientationInterpolator58.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0)]
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.nodeField = "value_changed"
connect60.protoField = "HumanoidRoot_rotation_changed"

IS59.connect.append(connect60)

OrientationInterpolator58.IS = IS59

Group45.children.append(OrientationInterpolator58)
OrientationInterpolator61 = x3d.OrientationInterpolator(DEF="SACROILIAC_ANIMATOR")
OrientationInterpolator61.key = [0,0.5,1]
OrientationInterpolator61.keyValue = [(0, 0, -1, 0.1056),(0, 0, 1, 0.09018),(0, 0, -1, 0.1056)]
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "value_changed"
connect63.protoField = "lower_body_rotation_changed"

IS62.connect.append(connect63)

OrientationInterpolator61.IS = IS62

Group45.children.append(OrientationInterpolator61)
OrientationInterpolator64 = x3d.OrientationInterpolator(DEF="L_HIP_ANIMATOR")
OrientationInterpolator64.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator64.keyValue = [(-0.873, 0.06094, 0.484, 0.2865),(0.9963, -0.01057, 0.08481, 0.2488),(0.9965, 0.01591, -0.08222, 0.3836),(-0.7018, -0.03223, -0.7117, 0.1289),(-1, 0, 0, 0.5518),(-0.9964, 0.02231, 0.0817, 0.5351),(-0.9809, 0.04912, 0.1881, 0.5204),(-0.873, 0.06094, 0.484, 0.2865)]
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "value_changed"
connect66.protoField = "l_hip_rotation_changed"

IS65.connect.append(connect66)

OrientationInterpolator64.IS = IS65

Group45.children.append(OrientationInterpolator64)
OrientationInterpolator67 = x3d.OrientationInterpolator(DEF="L_KNEE_ANIMATOR")
OrientationInterpolator67.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator67.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.08678),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.09961),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]
IS68 = x3d.IS()
connect69 = x3d.connect()
connect69.nodeField = "value_changed"
connect69.protoField = "l_knee_rotation_changed"

IS68.connect.append(connect69)

OrientationInterpolator67.IS = IS68

Group45.children.append(OrientationInterpolator67)
OrientationInterpolator70 = x3d.OrientationInterpolator(DEF="L_ANKLE_ANIMATOR")
OrientationInterpolator70.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator70.keyValue = [(-1, 0, 0, 0.06714),(-1, 0, 0, 0.2152),(-1, 0, 0, 0.3184),(-1, 0, 0, 0.4717),(-1, 0, 0, 0.2912),(1, 0, 0, 0.1222),(-1, 0, 0, 0.06714)]
IS71 = x3d.IS()
connect72 = x3d.connect()
connect72.nodeField = "value_changed"
connect72.protoField = "l_ankle_rotation_changed"

IS71.connect.append(connect72)

OrientationInterpolator70.IS = IS71

Group45.children.append(OrientationInterpolator70)
OrientationInterpolator73 = x3d.OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR")
OrientationInterpolator73.key = [0,0.5,1]
OrientationInterpolator73.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.2),(1, 0, 0, 0)]
IS74 = x3d.IS()
connect75 = x3d.connect()
connect75.nodeField = "value_changed"
connect75.protoField = "l_midtarsal_rotation_changed"

IS74.connect.append(connect75)

OrientationInterpolator73.IS = IS74

Group45.children.append(OrientationInterpolator73)
OrientationInterpolator76 = x3d.OrientationInterpolator(DEF="R_HIP_ANIMATOR")
OrientationInterpolator76.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator76.keyValue = [(-0.5831, 0.03511, 0.8116, 0.1481),(-0.995, 0.02296, 0.09674, 0.4683),(-1, 0.00192, 0.007964, 0.4732),(-0.998, -0.0158, -0.06102, 0.5079),(-0.9911, -0.03541, -0.1286, 0.5419),(-0.9131, -0.06243, -0.403, 0.3361),(-0.4306, -0.07962, -0.899, 0.07038),(1, 0, 0, 0.2571),(0.9891, -0.02805, 0.1444, 0.3879),(-0.5831, 0.03511, 0.8116, 0.1481)]
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "value_changed"
connect78.protoField = "r_hip_rotation_changed"

IS77.connect.append(connect78)

OrientationInterpolator76.IS = IS77

Group45.children.append(OrientationInterpolator76)
OrientationInterpolator79 = x3d.OrientationInterpolator(DEF="R_KNEE_ANIMATOR")
OrientationInterpolator79.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator79.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.8926),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, -1.176e-8, -4.971e-9, 0.09354),(1, 0, 0, 0.08558),(1, 0, 0, 0.2475),(1, 0, 0, 0.8573)]
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.nodeField = "value_changed"
connect81.protoField = "r_knee_rotation_changed"

IS80.connect.append(connect81)

OrientationInterpolator79.IS = IS80

Group45.children.append(OrientationInterpolator79)
OrientationInterpolator82 = x3d.OrientationInterpolator(DEF="R_ANKLE_ANIMATOR")
OrientationInterpolator82.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator82.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.3533),(-1, 0, 0, 0.1072),(1, 0, 0, 0.2612),(1, -1.641e-7, 1.827e-8, 0.1268),(-1, 0, 0, 0.01793),(-1, 0, 0, 0.05824),(-1, 0, 0, 0.2398),(-1, 0, 0, 0.35),(-1, 0, 0, 0.3322),(0, 0, 1, 0)]
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "value_changed"
connect84.protoField = "r_ankle_rotation_changed"

IS83.connect.append(connect84)

OrientationInterpolator82.IS = IS83

Group45.children.append(OrientationInterpolator82)
OrientationInterpolator85 = x3d.OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR")
OrientationInterpolator85.key = [0,0.5,1]
OrientationInterpolator85.keyValue = [(1, 0, 0, -0.2),(1, 0, 0, 0),(1, 0, 0, -0.2)]
IS86 = x3d.IS()
connect87 = x3d.connect()
connect87.nodeField = "value_changed"
connect87.protoField = "r_midtarsal_rotation_changed"

IS86.connect.append(connect87)

OrientationInterpolator85.IS = IS86

Group45.children.append(OrientationInterpolator85)
OrientationInterpolator88 = x3d.OrientationInterpolator(DEF="VL5_ANIMATOR")
OrientationInterpolator88.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator88.keyValue = [(0, 1, 0, 0.0826),(-0.01972, -0.5974, 0.8017, 0.08231),(0.009296, -0.9648, 0.2627, 0.1734),(-0.01238, 0.9549, -0.2968, 0.08732),(-0.008125, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.nodeField = "value_changed"
connect90.protoField = "vl5_rotation_changed"

IS89.connect.append(connect90)

OrientationInterpolator88.IS = IS89

Group45.children.append(OrientationInterpolator88)
OrientationInterpolator91 = x3d.OrientationInterpolator(DEF="SKULLBASE_ANIMATOR")
OrientationInterpolator91.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator91.keyValue = [(0, -1, 0, 0.08642),(0, 1, 0, 0.1825),(0, 1, 0, 0.1505),(0, 1, 0, 0.1053),(0, 1, 0, 0.04391),(0, -1, 0, 0.03119),(0, -1, 0, 0.07936),(0, -1, 0, 0.1616),(0, -1, 0, 0.155),(0, -1, 0, 0.08642)]
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.nodeField = "value_changed"
connect93.protoField = "skullbase_rotation_changed"

IS92.connect.append(connect93)

OrientationInterpolator91.IS = IS92

Group45.children.append(OrientationInterpolator91)
OrientationInterpolator94 = x3d.OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR")
OrientationInterpolator94.key = [0,0.375,0.9167,1]
OrientationInterpolator94.keyValue = [(1, 0, 0, 0.1189),(-1, -5.928e-7, 1.525e-7, 0.1861),(1, -2.038e-7, -1.257e-7, 0.3357),(1, 0, 0, 0.1189)]
IS95 = x3d.IS()
connect96 = x3d.connect()
connect96.nodeField = "value_changed"
connect96.protoField = "l_shoulder_rotation_changed"

IS95.connect.append(connect96)

OrientationInterpolator94.IS = IS95

Group45.children.append(OrientationInterpolator94)
OrientationInterpolator97 = x3d.OrientationInterpolator(DEF="L_ELBOW_ANIMATOR")
OrientationInterpolator97.key = [0,0.375,0.9167,1]
OrientationInterpolator97.keyValue = [(-1, -1.58298e-7, 8.15967e-8, 0.0659878),(-1, -3.28826e-8, -2.31665e-8, 0.488383),(-1, 0.00000306462, -0.00000311947, 0.0177536),(-1, -1.58298e-7, 8.15967e-8, 0.0659878)]
IS98 = x3d.IS()
connect99 = x3d.connect()
connect99.nodeField = "value_changed"
connect99.protoField = "l_elbow_rotation_changed"

IS98.connect.append(connect99)

OrientationInterpolator97.IS = IS98

Group45.children.append(OrientationInterpolator97)
OrientationInterpolator100 = x3d.OrientationInterpolator(DEF="L_WRIST_ANIMATOR")
OrientationInterpolator100.key = [0,0.375,0.9167,1]
OrientationInterpolator100.keyValue = [(0.00000151276, -1, 0.0000017724, 0.461076),(-0.330195, -0.927451, 0.175516, 0.538852),(0.0327774, -0.999314, -0.0172185, 0.492033),(0.00000151276, -1, 0.0000017724, 0.461076)]
IS101 = x3d.IS()
connect102 = x3d.connect()
connect102.nodeField = "value_changed"
connect102.protoField = "l_wrist_rotation_changed"

IS101.connect.append(connect102)

OrientationInterpolator100.IS = IS101

Group45.children.append(OrientationInterpolator100)
OrientationInterpolator103 = x3d.OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR")
OrientationInterpolator103.key = [0,0.375,0.9167,1]
OrientationInterpolator103.keyValue = [(-1, -7.689e-7, -1.48e-7, 0.09346),(1, 5.004e-8, 2.254e-8, 0.3197),(-1, -1.104e-7, 5.267e-10, 0.1564),(-1, -7.689e-7, -1.48e-7, 0.09346)]
IS104 = x3d.IS()
connect105 = x3d.connect()
connect105.nodeField = "value_changed"
connect105.protoField = "r_shoulder_rotation_changed"

IS104.connect.append(connect105)

OrientationInterpolator103.IS = IS104

Group45.children.append(OrientationInterpolator103)
OrientationInterpolator106 = x3d.OrientationInterpolator(DEF="R_ELBOW_ANIMATOR")
OrientationInterpolator106.key = [0,0.375,0.9167,1]
OrientationInterpolator106.keyValue = [(-1, -4.45619e-8, 2.70318e-8, 0.411508),(-1, 8.16742e-7, -1.09556e-7, 0.0925011),(-1, -2.47628e-8, -7.02862e-9, 0.572568),(-1, -4.45619e-8, 2.70318e-8, 0.411508)]
IS107 = x3d.IS()
connect108 = x3d.connect()
connect108.nodeField = "value_changed"
connect108.protoField = "r_elbow_rotation_changed"

IS107.connect.append(connect108)

OrientationInterpolator106.IS = IS107

Group45.children.append(OrientationInterpolator106)
OrientationInterpolator109 = x3d.OrientationInterpolator(DEF="R_WRIST_ANIMATOR")
OrientationInterpolator109.key = [0,0.375,0.9167,1]
OrientationInterpolator109.keyValue = [(-0.8129, 0.4759, -0.3357, 0.1346),(0.1533, -0.9878, 0.02582, 0.3902),(-0.5701, 0.7604, -0.311, 0.366),(-0.8129, 0.4759, -0.3357, 0.1346)]
IS110 = x3d.IS()
connect111 = x3d.connect()
connect111.nodeField = "value_changed"
connect111.protoField = "r_wrist_rotation_changed"

IS110.connect.append(connect111)

OrientationInterpolator109.IS = IS110

Group45.children.append(OrientationInterpolator109)

ProtoBody44.children.append(Group45)
ROUTE112 = x3d.ROUTE()
ROUTE112.fromNode = "TIMER"
ROUTE112.fromField = "fraction_changed"
ROUTE112.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE112.toField = "set_fraction"

ProtoBody44.children.append(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.fromNode = "TIMER"
ROUTE113.fromField = "fraction_changed"
ROUTE113.toNode = "HUMANOIDROOT_ANIMATOR"
ROUTE113.toField = "set_fraction"

ProtoBody44.children.append(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.fromNode = "TIMER"
ROUTE114.fromField = "fraction_changed"
ROUTE114.toNode = "SACROILIAC_ANIMATOR"
ROUTE114.toField = "set_fraction"

ProtoBody44.children.append(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.fromNode = "TIMER"
ROUTE115.fromField = "fraction_changed"
ROUTE115.toNode = "L_HIP_ANIMATOR"
ROUTE115.toField = "set_fraction"

ProtoBody44.children.append(ROUTE115)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromNode = "TIMER"
ROUTE116.fromField = "fraction_changed"
ROUTE116.toNode = "L_KNEE_ANIMATOR"
ROUTE116.toField = "set_fraction"

ProtoBody44.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromNode = "TIMER"
ROUTE117.fromField = "fraction_changed"
ROUTE117.toNode = "L_ANKLE_ANIMATOR"
ROUTE117.toField = "set_fraction"

ProtoBody44.children.append(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.fromNode = "TIMER"
ROUTE118.fromField = "fraction_changed"
ROUTE118.toNode = "L_MIDTARSAL_ANIMATOR"
ROUTE118.toField = "set_fraction"

ProtoBody44.children.append(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.fromNode = "TIMER"
ROUTE119.fromField = "fraction_changed"
ROUTE119.toNode = "R_HIP_ANIMATOR"
ROUTE119.toField = "set_fraction"

ProtoBody44.children.append(ROUTE119)
ROUTE120 = x3d.ROUTE()
ROUTE120.fromNode = "TIMER"
ROUTE120.fromField = "fraction_changed"
ROUTE120.toNode = "R_KNEE_ANIMATOR"
ROUTE120.toField = "set_fraction"

ProtoBody44.children.append(ROUTE120)
ROUTE121 = x3d.ROUTE()
ROUTE121.fromNode = "TIMER"
ROUTE121.fromField = "fraction_changed"
ROUTE121.toNode = "R_ANKLE_ANIMATOR"
ROUTE121.toField = "set_fraction"

ProtoBody44.children.append(ROUTE121)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromNode = "TIMER"
ROUTE122.fromField = "fraction_changed"
ROUTE122.toNode = "R_MIDTARSAL_ANIMATOR"
ROUTE122.toField = "set_fraction"

ProtoBody44.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromNode = "TIMER"
ROUTE123.fromField = "fraction_changed"
ROUTE123.toNode = "VL5_ANIMATOR"
ROUTE123.toField = "set_fraction"

ProtoBody44.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromNode = "TIMER"
ROUTE124.fromField = "fraction_changed"
ROUTE124.toNode = "SKULLBASE_ANIMATOR"
ROUTE124.toField = "set_fraction"

ProtoBody44.children.append(ROUTE124)
ROUTE125 = x3d.ROUTE()
ROUTE125.fromNode = "TIMER"
ROUTE125.fromField = "fraction_changed"
ROUTE125.toNode = "L_SHOULDER_ANIMATOR"
ROUTE125.toField = "set_fraction"

ProtoBody44.children.append(ROUTE125)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromNode = "TIMER"
ROUTE126.fromField = "fraction_changed"
ROUTE126.toNode = "L_ELBOW_ANIMATOR"
ROUTE126.toField = "set_fraction"

ProtoBody44.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromNode = "TIMER"
ROUTE127.fromField = "fraction_changed"
ROUTE127.toNode = "L_WRIST_ANIMATOR"
ROUTE127.toField = "set_fraction"

ProtoBody44.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromNode = "TIMER"
ROUTE128.fromField = "fraction_changed"
ROUTE128.toNode = "R_SHOULDER_ANIMATOR"
ROUTE128.toField = "set_fraction"

ProtoBody44.children.append(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.fromNode = "TIMER"
ROUTE129.fromField = "fraction_changed"
ROUTE129.toNode = "R_ELBOW_ANIMATOR"
ROUTE129.toField = "set_fraction"

ProtoBody44.children.append(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.fromNode = "TIMER"
ROUTE130.fromField = "fraction_changed"
ROUTE130.toNode = "R_WRIST_ANIMATOR"
ROUTE130.toField = "set_fraction"

ProtoBody44.children.append(ROUTE130)

ProtoDeclare16.ProtoBody = ProtoBody44

Scene15.children.append(ProtoDeclare16)
WorldInfo131 = x3d.WorldInfo()
WorldInfo131.title = "LOA1_WalkAnimation.x3d"

Scene15.children.append(WorldInfo131)
Anchor132 = x3d.Anchor()
Anchor132.description = "InterchangableActorsViaDynamicRouting"
Anchor132.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Anchor132.parameter = ["target=_blank"]
Shape133 = x3d.Shape()
Appearance134 = x3d.Appearance()
Material135 = x3d.Material()
Material135.diffuseColor = [1,1,0.2]

Appearance134.material = Material135

Shape133.appearance = Appearance134
Text136 = x3d.Text()
Text136.string = ["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle137 = x3d.FontStyle()
FontStyle137.size = 0.8
FontStyle137.justify = ["MIDDLE","MIDDLE"]

Text136.fontStyle = FontStyle137

Shape133.geometry = Text136

Anchor132.children.append(Shape133)

Scene15.children.append(Anchor132)

X3D0.Scene = Scene15
f = open("../data/LOA1_WalkAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_WalkAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/LOA1_WalkAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

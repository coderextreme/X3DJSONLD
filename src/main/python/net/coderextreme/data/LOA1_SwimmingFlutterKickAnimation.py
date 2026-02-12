print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "LOA1_SwimmingFlutterKickAnimation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Humanoid animation prototype reusable by any Humanoid."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Etsuko Lippi"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "13 December 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "23 May 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "warning"
meta7.content = "not yet tested, need to compare with NancyDivingExample interpolators"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://www.HAnim.org"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://HAnim.org/Models"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://HAnim.org/Nodes"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "subject"
meta11.content = "Swimming flutter kick Animation HAnim 2001"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "LOA1_SwimmingFlutterKickAnimation.x3d"

Scene15.children.append(WorldInfo16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "LOA1_DivingAnimation"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.name = "cycleInterval"
field19.accessType = "inputOutput"
field19.type = "SFTime"
field19.value = 7

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.name = "enabled"
field20.accessType = "inputOutput"
field20.type = "SFBool"
field20.value = True

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.name = "loop"
field21.accessType = "inputOutput"
field21.type = "SFBool"
field21.value = True

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.name = "startTime"
field22.accessType = "inputOutput"
field22.type = "SFTime"
field22.value = 0

ProtoInterface18.field.append(field22)
field23 = x3d.field()
field23.name = "stopTime"
field23.accessType = "inputOutput"
field23.type = "SFTime"
field23.value = -1

ProtoInterface18.field.append(field23)
field24 = x3d.field()
field24.name = "fraction_changed"
field24.accessType = "outputOnly"
field24.type = "SFFloat"

ProtoInterface18.field.append(field24)
field25 = x3d.field()
field25.name = "isActive"
field25.accessType = "outputOnly"
field25.type = "SFBool"

ProtoInterface18.field.append(field25)
field26 = x3d.field()
field26.name = "HumanoidRoot_translation_changed"
field26.accessType = "outputOnly"
field26.type = "SFVec3f"

ProtoInterface18.field.append(field26)
field27 = x3d.field()
field27.name = "HumanoidRoot_rotation_changed"
field27.accessType = "outputOnly"
field27.type = "SFRotation"

ProtoInterface18.field.append(field27)
field28 = x3d.field()
field28.name = "lower_body_rotation_changed"
field28.accessType = "outputOnly"
field28.type = "SFRotation"

ProtoInterface18.field.append(field28)
field29 = x3d.field()
field29.name = "l_hip_rotation_changed"
field29.accessType = "outputOnly"
field29.type = "SFRotation"

ProtoInterface18.field.append(field29)
field30 = x3d.field()
field30.name = "l_knee_rotation_changed"
field30.accessType = "outputOnly"
field30.type = "SFRotation"

ProtoInterface18.field.append(field30)
field31 = x3d.field()
field31.name = "l_ankle_rotation_changed"
field31.accessType = "outputOnly"
field31.type = "SFRotation"

ProtoInterface18.field.append(field31)
field32 = x3d.field()
field32.name = "l_midtarsal_rotation_changed"
field32.accessType = "outputOnly"
field32.type = "SFRotation"

ProtoInterface18.field.append(field32)
field33 = x3d.field()
field33.name = "r_hip_rotation_changed"
field33.accessType = "outputOnly"
field33.type = "SFRotation"

ProtoInterface18.field.append(field33)
field34 = x3d.field()
field34.name = "r_knee_rotation_changed"
field34.accessType = "outputOnly"
field34.type = "SFRotation"

ProtoInterface18.field.append(field34)
field35 = x3d.field()
field35.name = "r_ankle_rotation_changed"
field35.accessType = "outputOnly"
field35.type = "SFRotation"

ProtoInterface18.field.append(field35)
field36 = x3d.field()
field36.name = "r_midtarsal_rotation_changed"
field36.accessType = "outputOnly"
field36.type = "SFRotation"

ProtoInterface18.field.append(field36)
field37 = x3d.field()
field37.name = "vl5_rotation_changed"
field37.accessType = "outputOnly"
field37.type = "SFRotation"

ProtoInterface18.field.append(field37)
field38 = x3d.field()
field38.name = "skullbase_rotation_changed"
field38.accessType = "outputOnly"
field38.type = "SFRotation"

ProtoInterface18.field.append(field38)
field39 = x3d.field()
field39.name = "l_shoulder_rotation_changed"
field39.accessType = "outputOnly"
field39.type = "SFRotation"

ProtoInterface18.field.append(field39)
field40 = x3d.field()
field40.name = "l_elbow_rotation_changed"
field40.accessType = "outputOnly"
field40.type = "SFRotation"

ProtoInterface18.field.append(field40)
field41 = x3d.field()
field41.name = "l_wrist_rotation_changed"
field41.accessType = "outputOnly"
field41.type = "SFRotation"

ProtoInterface18.field.append(field41)
field42 = x3d.field()
field42.name = "r_shoulder_rotation_changed"
field42.accessType = "outputOnly"
field42.type = "SFRotation"

ProtoInterface18.field.append(field42)
field43 = x3d.field()
field43.name = "r_elbow_rotation_changed"
field43.accessType = "outputOnly"
field43.type = "SFRotation"

ProtoInterface18.field.append(field43)
field44 = x3d.field()
field44.name = "r_wrist_rotation_changed"
field44.accessType = "outputOnly"
field44.type = "SFRotation"

ProtoInterface18.field.append(field44)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody45 = x3d.ProtoBody()
Group46 = x3d.Group()
TimeSensor47 = x3d.TimeSensor(DEF="TIMER")
TimeSensor47.loop = True
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.nodeField = "cycleInterval"
connect49.protoField = "cycleInterval"

IS48.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "enabled"
connect50.protoField = "enabled"

IS48.connect.append(connect50)
connect51 = x3d.connect()
connect51.nodeField = "loop"
connect51.protoField = "loop"

IS48.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "startTime"
connect52.protoField = "startTime"

IS48.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "stopTime"
connect53.protoField = "stopTime"

IS48.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "fraction_changed"
connect54.protoField = "fraction_changed"

IS48.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "isActive"
connect55.protoField = "isActive"

IS48.connect.append(connect55)

TimeSensor47.IS = IS48

Group46.children.append(TimeSensor47)
PositionInterpolator56 = x3d.PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator56.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator56.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.nodeField = "value_changed"
connect58.protoField = "HumanoidRoot_translation_changed"

IS57.connect.append(connect58)

PositionInterpolator56.IS = IS57

Group46.children.append(PositionInterpolator56)
OrientationInterpolator59 = x3d.OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR")
OrientationInterpolator59.key = [0,1]
OrientationInterpolator59.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS60 = x3d.IS()
connect61 = x3d.connect()
connect61.nodeField = "value_changed"
connect61.protoField = "HumanoidRoot_rotation_changed"

IS60.connect.append(connect61)

OrientationInterpolator59.IS = IS60

Group46.children.append(OrientationInterpolator59)
Group46.children.append(x3d.Comment("""no SACROILIAC_ANIMATOR"""))
OrientationInterpolator62 = x3d.OrientationInterpolator(DEF="L_HIP_ANIMATOR")
OrientationInterpolator62.key = [0,0.25,0.375,0.6667,0.7917,0.9167,1]
OrientationInterpolator62.keyValue = [(-0.873, 0.06094, 0.484, 0.2865),(0.9963, -0.01057, 0.08481, 0.2488),(0.9965, 0.01591, -0.08222, 0.3836),(-1, 0, 0, 0.5518),(-0.9964, 0.02231, 0.0817, 0.5351),(-0.9809, 0.04912, 0.1881, 0.5204),(-0.873, 0.06094, 0.484, 0.2865)]
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.nodeField = "value_changed"
connect64.protoField = "l_hip_rotation_changed"

IS63.connect.append(connect64)

OrientationInterpolator62.IS = IS63

Group46.children.append(OrientationInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator(DEF="L_KNEE_ANIMATOR")
OrientationInterpolator65.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator65.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.08678),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.09961),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.nodeField = "value_changed"
connect67.protoField = "l_knee_rotation_changed"

IS66.connect.append(connect67)

OrientationInterpolator65.IS = IS66

Group46.children.append(OrientationInterpolator65)
OrientationInterpolator68 = x3d.OrientationInterpolator(DEF="L_ANKLE_ANIMATOR")
OrientationInterpolator68.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator68.keyValue = [(1, 0, 0, 0.6001),(1, 0, 0, 0.6509),(1, 0, 0, 0.6001),(1, 0, 0, 0.6001),(1, 0, 0, 0.6509),(1, 0, 0, 0.6001),(1, 0, 0, 0.6001),(1, 0, 0, 0.6509),(1, 0, 0, 0.6001),(1, 0, 0, 0.6509),(1, 0, 0, 0.6001)]
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.nodeField = "value_changed"
connect70.protoField = "l_ankle_rotation_changed"

IS69.connect.append(connect70)

OrientationInterpolator68.IS = IS69

Group46.children.append(OrientationInterpolator68)
Group46.children.append(x3d.Comment("""no L_MIDTARSAL_ANIMATOR"""))
OrientationInterpolator71 = x3d.OrientationInterpolator(DEF="R_HIP_ANIMATOR")
OrientationInterpolator71.key = [0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]
OrientationInterpolator71.keyValue = [(-0.5831, 0.03511, 0.8116, 0.1481),(-0.995, 0.02296, 0.09674, 0.4683),(-1, 0.00192, 0.007964, 0.4732),(-0.998, -0.0158, -0.06102, 0.5079),(-0.9131, -0.06243, -0.403, 0.3361),(1, 0, 0, 0.2571),(0.9891, -0.02805, 0.1444, 0.3879),(-0.5831, 0.03511, 0.8116, 0.1481)]
IS72 = x3d.IS()
connect73 = x3d.connect()
connect73.nodeField = "value_changed"
connect73.protoField = "r_hip_rotation_changed"

IS72.connect.append(connect73)

OrientationInterpolator71.IS = IS72

Group46.children.append(OrientationInterpolator71)
OrientationInterpolator74 = x3d.OrientationInterpolator(DEF="R_KNEE_ANIMATOR")
OrientationInterpolator74.key = [0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]
OrientationInterpolator74.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, 0, 0, 0.09354),(1, 0, 0, 0.08558),(1, 0, 0, 0.8573)]
IS75 = x3d.IS()
connect76 = x3d.connect()
connect76.nodeField = "value_changed"
connect76.protoField = "r_knee_rotation_changed"

IS75.connect.append(connect76)

OrientationInterpolator74.IS = IS75

Group46.children.append(OrientationInterpolator74)
OrientationInterpolator77 = x3d.OrientationInterpolator(DEF="R_ANKLE_ANIMATOR")
OrientationInterpolator77.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator77.keyValue = [(1, 0, 0, 0.8001),(1, 0, 0, 0.8509),(1, 0, 0, 0.8001),(1, 0, 0, 0.8001),(1, 0, 0, 0.8509),(1, 0, 0, 0.8001),(1, 0, 0, 0.8001),(1, 0, 0, 0.8001),(1, 0, 0, 0.8001),(1, 0, 0, 0.8509),(1, 0, 0, 0.86001)]
IS78 = x3d.IS()
connect79 = x3d.connect()
connect79.nodeField = "value_changed"
connect79.protoField = "r_ankle_rotation_changed"

IS78.connect.append(connect79)

OrientationInterpolator77.IS = IS78

Group46.children.append(OrientationInterpolator77)
Group46.children.append(x3d.Comment("""no L_MIDTARSAL_ANIMATOR"""))
OrientationInterpolator80 = x3d.OrientationInterpolator(DEF="VL5_ANIMATOR")
OrientationInterpolator80.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator80.keyValue = [(0, 1, 0, 0.0826),(-0.01972, -0.5974, 0.8017, 0.08231),(0.009296, -0.9648, 0.2627, 0.1734),(-0.01238, 0.9549, -0.2968, 0.08732),(-0.008125, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.nodeField = "value_changed"
connect82.protoField = "vl5_rotation_changed"

IS81.connect.append(connect82)

OrientationInterpolator80.IS = IS81

Group46.children.append(OrientationInterpolator80)
OrientationInterpolator83 = x3d.OrientationInterpolator(DEF="SKULLBASE_ANIMATOR")
OrientationInterpolator83.key = [0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]
OrientationInterpolator83.keyValue = [(-1, 0, 0, 1),(-1, 0, 0, 1),(-1, 0, 0, 0.999),(-1, 0, 0, 0.99),(-1, 0, 0, 0.99),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 0.9),(-1, 0, 0, 1)]
IS84 = x3d.IS()
connect85 = x3d.connect()
connect85.nodeField = "value_changed"
connect85.protoField = "skullbase_rotation_changed"

IS84.connect.append(connect85)

OrientationInterpolator83.IS = IS84

Group46.children.append(OrientationInterpolator83)
OrientationInterpolator86 = x3d.OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR")
OrientationInterpolator86.key = [0,0.25,0.375,0.6667,0.7917,0.9167,1]
OrientationInterpolator86.keyValue = [(0, 0, 1, 0.1),(0, 0, 1, 0.2),(0, 0, 1, 0.2),(0.86, 0.25, 0.42, 0.5),(0.86, 0.25, 0.42, 0.8),(0.86, 0.25, 0.42, 0.4),(0.86, 0.25, 0.42, 0.2)]
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.nodeField = "value_changed"
connect88.protoField = "l_shoulder_rotation_changed"

IS87.connect.append(connect88)

OrientationInterpolator86.IS = IS87

Group46.children.append(OrientationInterpolator86)
OrientationInterpolator89 = x3d.OrientationInterpolator(DEF="L_ELBOW_ANIMATOR")
OrientationInterpolator89.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator89.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.1229),(-1, 0, 0, 0.1229),(-1, 0, 0, 0.5976),(-1, 0, 0, 0.3917),(0, 0, 1, 0)]
IS90 = x3d.IS()
connect91 = x3d.connect()
connect91.nodeField = "value_changed"
connect91.protoField = "l_elbow_rotation_changed"

IS90.connect.append(connect91)

OrientationInterpolator89.IS = IS90

Group46.children.append(OrientationInterpolator89)
OrientationInterpolator92 = x3d.OrientationInterpolator(DEF="L_WRIST_ANIMATOR")
OrientationInterpolator92.key = [0,0.32,0.64,0.88,1]
OrientationInterpolator92.keyValue = [(0, 0, 1, 0),(0.067, 0.98, -0.128, 4.15),(0.067, 0.98, -0.128, 4.15),(0.067, 0.98, -0.128, 4.15),(0, 0, 1, 0)]
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.nodeField = "value_changed"
connect94.protoField = "l_wrist_rotation_changed"

IS93.connect.append(connect94)

OrientationInterpolator92.IS = IS93

Group46.children.append(OrientationInterpolator92)
OrientationInterpolator95 = x3d.OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR")
OrientationInterpolator95.key = [0,0.45,0.64,0.76,0.88,1]
OrientationInterpolator95.keyValue = [(0, 0, 1, 0),(0.9992, 0.02042, 0.03558, 7.2),(0.9989, -0.04623, 0.005159, 4.079),(-0.8687, -0.2525, -0.4261, 1.501),(-0.941, -0.2893, -0.1754, 0.4788),(0, 0, 1, 0)]
IS96 = x3d.IS()
connect97 = x3d.connect()
connect97.nodeField = "value_changed"
connect97.protoField = "r_shoulder_rotation_changed"

IS96.connect.append(connect97)

OrientationInterpolator95.IS = IS96

Group46.children.append(OrientationInterpolator95)
OrientationInterpolator98 = x3d.OrientationInterpolator(DEF="R_ELBOW_ANIMATOR")
OrientationInterpolator98.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator98.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.5855),(-1, 0, 0, 0.5852),(0, 0, 1, 0)]
IS99 = x3d.IS()
connect100 = x3d.connect()
connect100.nodeField = "value_changed"
connect100.protoField = "r_elbow_rotation_changed"

IS99.connect.append(connect100)

OrientationInterpolator98.IS = IS99

Group46.children.append(OrientationInterpolator98)
OrientationInterpolator101 = x3d.OrientationInterpolator(DEF="R_WRIST_ANIMATOR")
OrientationInterpolator101.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator101.keyValue = [(0, 0, 1, 0),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.00222418, 0.99801, -0.0630095, 1.46072),(0, 1, 0, 0.497349),(0, 0, 1, 0)]
IS102 = x3d.IS()
connect103 = x3d.connect()
connect103.nodeField = "value_changed"
connect103.protoField = "r_wrist_rotation_changed"

IS102.connect.append(connect103)

OrientationInterpolator101.IS = IS102

Group46.children.append(OrientationInterpolator101)

ProtoBody45.children.append(Group46)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromField = "fraction_changed"
ROUTE104.fromNode = "TIMER"
ROUTE104.toField = "set_fraction"
ROUTE104.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"

ProtoBody45.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromField = "fraction_changed"
ROUTE105.fromNode = "TIMER"
ROUTE105.toField = "set_fraction"
ROUTE105.toNode = "HUMANOIDROOT_ANIMATOR"

ProtoBody45.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromField = "fraction_changed"
ROUTE106.fromNode = "TIMER"
ROUTE106.toField = "set_fraction"
ROUTE106.toNode = "SKULLBASE_ANIMATOR"

ProtoBody45.children.append(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromField = "fraction_changed"
ROUTE107.fromNode = "TIMER"
ROUTE107.toField = "set_fraction"
ROUTE107.toNode = "VL5_ANIMATOR"

ProtoBody45.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromField = "fraction_changed"
ROUTE108.fromNode = "TIMER"
ROUTE108.toField = "set_fraction"
ROUTE108.toNode = "L_HIP_ANIMATOR"

ProtoBody45.children.append(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.fromField = "fraction_changed"
ROUTE109.fromNode = "TIMER"
ROUTE109.toField = "set_fraction"
ROUTE109.toNode = "L_KNEE_ANIMATOR"

ProtoBody45.children.append(ROUTE109)
ROUTE110 = x3d.ROUTE()
ROUTE110.fromField = "fraction_changed"
ROUTE110.fromNode = "TIMER"
ROUTE110.toField = "set_fraction"
ROUTE110.toNode = "L_ANKLE_ANIMATOR"

ProtoBody45.children.append(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.fromField = "fraction_changed"
ROUTE111.fromNode = "TIMER"
ROUTE111.toField = "set_fraction"
ROUTE111.toNode = "R_HIP_ANIMATOR"

ProtoBody45.children.append(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.fromField = "fraction_changed"
ROUTE112.fromNode = "TIMER"
ROUTE112.toField = "set_fraction"
ROUTE112.toNode = "R_KNEE_ANIMATOR"

ProtoBody45.children.append(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.fromField = "fraction_changed"
ROUTE113.fromNode = "TIMER"
ROUTE113.toField = "set_fraction"
ROUTE113.toNode = "R_ANKLE_ANIMATOR"

ProtoBody45.children.append(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.fromField = "fraction_changed"
ROUTE114.fromNode = "TIMER"
ROUTE114.toField = "set_fraction"
ROUTE114.toNode = "L_SHOULDER_ANIMATOR"

ProtoBody45.children.append(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.fromField = "fraction_changed"
ROUTE115.fromNode = "TIMER"
ROUTE115.toField = "set_fraction"
ROUTE115.toNode = "L_ELBOW_ANIMATOR"

ProtoBody45.children.append(ROUTE115)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromField = "fraction_changed"
ROUTE116.fromNode = "TIMER"
ROUTE116.toField = "set_fraction"
ROUTE116.toNode = "L_WRIST_ANIMATOR"

ProtoBody45.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromField = "fraction_changed"
ROUTE117.fromNode = "TIMER"
ROUTE117.toField = "set_fraction"
ROUTE117.toNode = "R_SHOULDER_ANIMATOR"

ProtoBody45.children.append(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.fromField = "fraction_changed"
ROUTE118.fromNode = "TIMER"
ROUTE118.toField = "set_fraction"
ROUTE118.toNode = "R_ELBOW_ANIMATOR"

ProtoBody45.children.append(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.fromField = "fraction_changed"
ROUTE119.fromNode = "TIMER"
ROUTE119.toField = "set_fraction"
ROUTE119.toNode = "R_WRIST_ANIMATOR"

ProtoBody45.children.append(ROUTE119)

ProtoDeclare17.ProtoBody = ProtoBody45

Scene15.children.append(ProtoDeclare17)
Viewpoint120 = x3d.Viewpoint()
Viewpoint120.description = "LOA1_SwimmingFlutterKickAnimation scene"
Viewpoint120.position = [0,0,12]

Scene15.children.append(Viewpoint120)
Anchor121 = x3d.Anchor()
Anchor121.description = "Nancy Diving"
Anchor121.parameter = ["target=_blank"]
Anchor121.url = ["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"]
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.string = ["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."]
FontStyle124 = x3d.FontStyle()
FontStyle124.justify = ["MIDDLE","MIDDLE"]
FontStyle124.size = 0.8

Text123.fontStyle = FontStyle124

Shape122.geometry = Text123
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.diffuseColor = [1,1,0.2]

Appearance125.material = Material126

Shape122.appearance = Appearance125

Anchor121.children.append(Shape122)

Scene15.children.append(Anchor121)

X3D0.Scene = Scene15
f = open("../data/LOA1_SwimmingFlutterKickAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_SwimmingFlutterKickAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/LOA1_SwimmingFlutterKickAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

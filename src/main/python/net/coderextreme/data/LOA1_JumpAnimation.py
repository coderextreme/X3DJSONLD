print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "LOA1_JumpAnimation.x3d"

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
meta6.content = "Scott Tufts"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "1 December 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "23 May 2020"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.HAnim.org"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://HAnim.org/Models"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "http://HAnim.org/Nodes"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "subject"
meta13.content = "InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "../license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.title = "LOA1_JumpAnimation.x3d"

Scene17.children.append(WorldInfo18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.name = "LOA1_JumpAnimation"
ProtoInterface20 = x3d.ProtoInterface()
field21 = x3d.field()
field21.name = "cycleInterval"
field21.accessType = "inputOutput"
field21.type = "SFTime"
field21.value = 2

ProtoInterface20.field.append(field21)
field22 = x3d.field()
field22.name = "enabled"
field22.accessType = "inputOutput"
field22.type = "SFBool"
field22.value = True

ProtoInterface20.field.append(field22)
field23 = x3d.field()
field23.name = "loop"
field23.accessType = "inputOutput"
field23.type = "SFBool"
field23.value = True

ProtoInterface20.field.append(field23)
field24 = x3d.field()
field24.name = "startTime"
field24.accessType = "inputOutput"
field24.type = "SFTime"
field24.value = 0

ProtoInterface20.field.append(field24)
field25 = x3d.field()
field25.name = "stopTime"
field25.accessType = "inputOutput"
field25.type = "SFTime"
field25.value = -1

ProtoInterface20.field.append(field25)
field26 = x3d.field()
field26.name = "fraction_changed"
field26.accessType = "outputOnly"
field26.type = "SFFloat"

ProtoInterface20.field.append(field26)
field27 = x3d.field()
field27.name = "isActive"
field27.accessType = "outputOnly"
field27.type = "SFBool"

ProtoInterface20.field.append(field27)
field28 = x3d.field()
field28.name = "HumanoidRoot_translation_changed"
field28.accessType = "outputOnly"
field28.type = "SFVec3f"

ProtoInterface20.field.append(field28)
field29 = x3d.field()
field29.name = "HumanoidRoot_rotation_changed"
field29.accessType = "outputOnly"
field29.type = "SFRotation"

ProtoInterface20.field.append(field29)
field30 = x3d.field()
field30.name = "lower_body_rotation_changed"
field30.accessType = "outputOnly"
field30.type = "SFRotation"

ProtoInterface20.field.append(field30)
field31 = x3d.field()
field31.name = "l_hip_rotation_changed"
field31.accessType = "outputOnly"
field31.type = "SFRotation"

ProtoInterface20.field.append(field31)
field32 = x3d.field()
field32.name = "l_knee_rotation_changed"
field32.accessType = "outputOnly"
field32.type = "SFRotation"

ProtoInterface20.field.append(field32)
field33 = x3d.field()
field33.name = "l_ankle_rotation_changed"
field33.accessType = "outputOnly"
field33.type = "SFRotation"

ProtoInterface20.field.append(field33)
field34 = x3d.field()
field34.name = "l_midtarsal_rotation_changed"
field34.accessType = "outputOnly"
field34.type = "SFRotation"

ProtoInterface20.field.append(field34)
field35 = x3d.field()
field35.name = "r_hip_rotation_changed"
field35.accessType = "outputOnly"
field35.type = "SFRotation"

ProtoInterface20.field.append(field35)
field36 = x3d.field()
field36.name = "r_knee_rotation_changed"
field36.accessType = "outputOnly"
field36.type = "SFRotation"

ProtoInterface20.field.append(field36)
field37 = x3d.field()
field37.name = "r_ankle_rotation_changed"
field37.accessType = "outputOnly"
field37.type = "SFRotation"

ProtoInterface20.field.append(field37)
field38 = x3d.field()
field38.name = "r_midtarsal_rotation_changed"
field38.accessType = "outputOnly"
field38.type = "SFRotation"

ProtoInterface20.field.append(field38)
field39 = x3d.field()
field39.name = "vl5_rotation_changed"
field39.accessType = "outputOnly"
field39.type = "SFRotation"

ProtoInterface20.field.append(field39)
field40 = x3d.field()
field40.name = "skullbase_rotation_changed"
field40.accessType = "outputOnly"
field40.type = "SFRotation"

ProtoInterface20.field.append(field40)
field41 = x3d.field()
field41.name = "l_shoulder_rotation_changed"
field41.accessType = "outputOnly"
field41.type = "SFRotation"

ProtoInterface20.field.append(field41)
field42 = x3d.field()
field42.name = "l_elbow_rotation_changed"
field42.accessType = "outputOnly"
field42.type = "SFRotation"

ProtoInterface20.field.append(field42)
field43 = x3d.field()
field43.name = "l_wrist_rotation_changed"
field43.accessType = "outputOnly"
field43.type = "SFRotation"

ProtoInterface20.field.append(field43)
field44 = x3d.field()
field44.name = "r_shoulder_rotation_changed"
field44.accessType = "outputOnly"
field44.type = "SFRotation"

ProtoInterface20.field.append(field44)
field45 = x3d.field()
field45.name = "r_elbow_rotation_changed"
field45.accessType = "outputOnly"
field45.type = "SFRotation"

ProtoInterface20.field.append(field45)
field46 = x3d.field()
field46.name = "r_wrist_rotation_changed"
field46.accessType = "outputOnly"
field46.type = "SFRotation"

ProtoInterface20.field.append(field46)

ProtoDeclare19.ProtoInterface = ProtoInterface20
ProtoBody47 = x3d.ProtoBody()
Group48 = x3d.Group()
TimeSensor49 = x3d.TimeSensor()
TimeSensor49.DEF = "TIMER"
TimeSensor49.loop = True
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.nodeField = "cycleInterval"
connect51.protoField = "cycleInterval"

IS50.connect.append(connect51)
connect52 = x3d.connect()
connect52.nodeField = "enabled"
connect52.protoField = "enabled"

IS50.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "loop"
connect53.protoField = "loop"

IS50.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "startTime"
connect54.protoField = "startTime"

IS50.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "stopTime"
connect55.protoField = "stopTime"

IS50.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "fraction_changed"
connect56.protoField = "fraction_changed"

IS50.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "isActive"
connect57.protoField = "isActive"

IS50.connect.append(connect57)

TimeSensor49.IS = IS50

Group48.children.append(TimeSensor49)
PositionInterpolator58 = x3d.PositionInterpolator()
PositionInterpolator58.DEF = "HUMANOIDROOT_POSITION_ANIMATOR"
PositionInterpolator58.key = [0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.nodeField = "value_changed"
connect60.protoField = "HumanoidRoot_translation_changed"

IS59.connect.append(connect60)

PositionInterpolator58.IS = IS59

Group48.children.append(PositionInterpolator58)
OrientationInterpolator61 = x3d.OrientationInterpolator()
OrientationInterpolator61.DEF = "HUMANOIDROOT_ANIMATOR"
OrientationInterpolator61.key = [0,0.28,0.32,0.48,0.64,0.76,1]
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "value_changed"
connect63.protoField = "HumanoidRoot_rotation_changed"

IS62.connect.append(connect63)

OrientationInterpolator61.IS = IS62

Group48.children.append(OrientationInterpolator61)
OrientationInterpolator64 = x3d.OrientationInterpolator()
OrientationInterpolator64.DEF = "SACROILIAC_ANIMATOR"
OrientationInterpolator64.key = [0,0.28,0.32,0.48,0.76,1]
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "value_changed"
connect66.protoField = "lower_body_rotation_changed"

IS65.connect.append(connect66)

OrientationInterpolator64.IS = IS65

Group48.children.append(OrientationInterpolator64)
OrientationInterpolator67 = x3d.OrientationInterpolator()
OrientationInterpolator67.DEF = "L_HIP_ANIMATOR"
OrientationInterpolator67.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
IS68 = x3d.IS()
connect69 = x3d.connect()
connect69.nodeField = "value_changed"
connect69.protoField = "l_hip_rotation_changed"

IS68.connect.append(connect69)

OrientationInterpolator67.IS = IS68

Group48.children.append(OrientationInterpolator67)
OrientationInterpolator70 = x3d.OrientationInterpolator()
OrientationInterpolator70.DEF = "L_KNEE_ANIMATOR"
OrientationInterpolator70.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
IS71 = x3d.IS()
connect72 = x3d.connect()
connect72.nodeField = "value_changed"
connect72.protoField = "l_knee_rotation_changed"

IS71.connect.append(connect72)

OrientationInterpolator70.IS = IS71

Group48.children.append(OrientationInterpolator70)
OrientationInterpolator73 = x3d.OrientationInterpolator()
OrientationInterpolator73.DEF = "L_ANKLE_ANIMATOR"
OrientationInterpolator73.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
IS74 = x3d.IS()
connect75 = x3d.connect()
connect75.nodeField = "value_changed"
connect75.protoField = "l_ankle_rotation_changed"

IS74.connect.append(connect75)

OrientationInterpolator73.IS = IS74

Group48.children.append(OrientationInterpolator73)
OrientationInterpolator76 = x3d.OrientationInterpolator()
OrientationInterpolator76.DEF = "L_MIDTARSAL_ANIMATOR"
OrientationInterpolator76.key = [0,0.5,1]
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "value_changed"
connect78.protoField = "l_midtarsal_rotation_changed"

IS77.connect.append(connect78)

OrientationInterpolator76.IS = IS77

Group48.children.append(OrientationInterpolator76)
OrientationInterpolator79 = x3d.OrientationInterpolator()
OrientationInterpolator79.DEF = "R_HIP_ANIMATOR"
OrientationInterpolator79.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.nodeField = "value_changed"
connect81.protoField = "r_hip_rotation_changed"

IS80.connect.append(connect81)

OrientationInterpolator79.IS = IS80

Group48.children.append(OrientationInterpolator79)
OrientationInterpolator82 = x3d.OrientationInterpolator()
OrientationInterpolator82.DEF = "R_KNEE_ANIMATOR"
OrientationInterpolator82.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "value_changed"
connect84.protoField = "r_knee_rotation_changed"

IS83.connect.append(connect84)

OrientationInterpolator82.IS = IS83

Group48.children.append(OrientationInterpolator82)
OrientationInterpolator85 = x3d.OrientationInterpolator()
OrientationInterpolator85.DEF = "R_ANKLE_ANIMATOR"
OrientationInterpolator85.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
IS86 = x3d.IS()
connect87 = x3d.connect()
connect87.nodeField = "value_changed"
connect87.protoField = "r_ankle_rotation_changed"

IS86.connect.append(connect87)

OrientationInterpolator85.IS = IS86

Group48.children.append(OrientationInterpolator85)
OrientationInterpolator88 = x3d.OrientationInterpolator()
OrientationInterpolator88.DEF = "R_MIDTARSAL_ANIMATOR"
OrientationInterpolator88.key = [0,0.5,1]
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.nodeField = "value_changed"
connect90.protoField = "r_midtarsal_rotation_changed"

IS89.connect.append(connect90)

OrientationInterpolator88.IS = IS89

Group48.children.append(OrientationInterpolator88)
OrientationInterpolator91 = x3d.OrientationInterpolator()
OrientationInterpolator91.DEF = "VL5_ANIMATOR"
OrientationInterpolator91.key = [0,0.2083,0.375,0.75,0.8333,1]
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.nodeField = "value_changed"
connect93.protoField = "vl5_rotation_changed"

IS92.connect.append(connect93)

OrientationInterpolator91.IS = IS92

Group48.children.append(OrientationInterpolator91)
OrientationInterpolator94 = x3d.OrientationInterpolator()
OrientationInterpolator94.DEF = "SKULLBASE_ANIMATOR"
OrientationInterpolator94.key = [0,0.28,0.32,0.48,0.76,1]
IS95 = x3d.IS()
connect96 = x3d.connect()
connect96.nodeField = "value_changed"
connect96.protoField = "skullbase_rotation_changed"

IS95.connect.append(connect96)

OrientationInterpolator94.IS = IS95

Group48.children.append(OrientationInterpolator94)
OrientationInterpolator97 = x3d.OrientationInterpolator()
OrientationInterpolator97.DEF = "L_SHOULDER_ANIMATOR"
OrientationInterpolator97.key = [0,0.28,0.32,0.64,0.76,0.88,1]
IS98 = x3d.IS()
connect99 = x3d.connect()
connect99.nodeField = "value_changed"
connect99.protoField = "l_shoulder_rotation_changed"

IS98.connect.append(connect99)

OrientationInterpolator97.IS = IS98

Group48.children.append(OrientationInterpolator97)
OrientationInterpolator100 = x3d.OrientationInterpolator()
OrientationInterpolator100.DEF = "L_ELBOW_ANIMATOR"
OrientationInterpolator100.key = [0,0.28,0.32,0.64,0.76,1]
IS101 = x3d.IS()
connect102 = x3d.connect()
connect102.nodeField = "value_changed"
connect102.protoField = "l_elbow_rotation_changed"

IS101.connect.append(connect102)

OrientationInterpolator100.IS = IS101

Group48.children.append(OrientationInterpolator100)
OrientationInterpolator103 = x3d.OrientationInterpolator()
OrientationInterpolator103.DEF = "L_WRIST_ANIMATOR"
OrientationInterpolator103.key = [0,0.28,0.32,0.64,0.76,0.88,1]
IS104 = x3d.IS()
connect105 = x3d.connect()
connect105.nodeField = "value_changed"
connect105.protoField = "l_wrist_rotation_changed"

IS104.connect.append(connect105)

OrientationInterpolator103.IS = IS104

Group48.children.append(OrientationInterpolator103)
OrientationInterpolator106 = x3d.OrientationInterpolator()
OrientationInterpolator106.DEF = "R_SHOULDER_ANIMATOR"
OrientationInterpolator106.key = [0,0.28,0.32,0.64,0.76,0.88,1]
IS107 = x3d.IS()
connect108 = x3d.connect()
connect108.nodeField = "value_changed"
connect108.protoField = "r_shoulder_rotation_changed"

IS107.connect.append(connect108)

OrientationInterpolator106.IS = IS107

Group48.children.append(OrientationInterpolator106)
OrientationInterpolator109 = x3d.OrientationInterpolator()
OrientationInterpolator109.DEF = "R_ELBOW_ANIMATOR"
OrientationInterpolator109.key = [0,0.28,0.32,0.64,0.76,1]
IS110 = x3d.IS()
connect111 = x3d.connect()
connect111.nodeField = "value_changed"
connect111.protoField = "r_elbow_rotation_changed"

IS110.connect.append(connect111)

OrientationInterpolator109.IS = IS110

Group48.children.append(OrientationInterpolator109)
OrientationInterpolator112 = x3d.OrientationInterpolator()
OrientationInterpolator112.DEF = "R_WRIST_ANIMATOR"
OrientationInterpolator112.key = [0,0.28,0.32,0.64,0.76,1]
IS113 = x3d.IS()
connect114 = x3d.connect()
connect114.nodeField = "value_changed"
connect114.protoField = "r_wrist_rotation_changed"

IS113.connect.append(connect114)

OrientationInterpolator112.IS = IS113

Group48.children.append(OrientationInterpolator112)

ProtoBody47.children.append(Group48)
ROUTE115 = x3d.ROUTE()
ROUTE115.fromField = "fraction_changed"
ROUTE115.fromNode = "TIMER"
ROUTE115.toField = "set_fraction"
ROUTE115.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"

ProtoBody47.children.append(ROUTE115)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromField = "fraction_changed"
ROUTE116.fromNode = "TIMER"
ROUTE116.toField = "set_fraction"
ROUTE116.toNode = "HUMANOIDROOT_ANIMATOR"

ProtoBody47.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromField = "fraction_changed"
ROUTE117.fromNode = "TIMER"
ROUTE117.toField = "set_fraction"
ROUTE117.toNode = "SACROILIAC_ANIMATOR"

ProtoBody47.children.append(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.fromField = "fraction_changed"
ROUTE118.fromNode = "TIMER"
ROUTE118.toField = "set_fraction"
ROUTE118.toNode = "L_HIP_ANIMATOR"

ProtoBody47.children.append(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.fromField = "fraction_changed"
ROUTE119.fromNode = "TIMER"
ROUTE119.toField = "set_fraction"
ROUTE119.toNode = "L_KNEE_ANIMATOR"

ProtoBody47.children.append(ROUTE119)
ROUTE120 = x3d.ROUTE()
ROUTE120.fromField = "fraction_changed"
ROUTE120.fromNode = "TIMER"
ROUTE120.toField = "set_fraction"
ROUTE120.toNode = "L_ANKLE_ANIMATOR"

ProtoBody47.children.append(ROUTE120)
ROUTE121 = x3d.ROUTE()
ROUTE121.fromField = "fraction_changed"
ROUTE121.fromNode = "TIMER"
ROUTE121.toField = "set_fraction"
ROUTE121.toNode = "L_MIDTARSAL_ANIMATOR"

ProtoBody47.children.append(ROUTE121)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromField = "fraction_changed"
ROUTE122.fromNode = "TIMER"
ROUTE122.toField = "set_fraction"
ROUTE122.toNode = "R_HIP_ANIMATOR"

ProtoBody47.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromField = "fraction_changed"
ROUTE123.fromNode = "TIMER"
ROUTE123.toField = "set_fraction"
ROUTE123.toNode = "R_KNEE_ANIMATOR"

ProtoBody47.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromField = "fraction_changed"
ROUTE124.fromNode = "TIMER"
ROUTE124.toField = "set_fraction"
ROUTE124.toNode = "R_ANKLE_ANIMATOR"

ProtoBody47.children.append(ROUTE124)
ROUTE125 = x3d.ROUTE()
ROUTE125.fromField = "fraction_changed"
ROUTE125.fromNode = "TIMER"
ROUTE125.toField = "set_fraction"
ROUTE125.toNode = "R_MIDTARSAL_ANIMATOR"

ProtoBody47.children.append(ROUTE125)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromField = "fraction_changed"
ROUTE126.fromNode = "TIMER"
ROUTE126.toField = "set_fraction"
ROUTE126.toNode = "VL5_ANIMATOR"

ProtoBody47.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromField = "fraction_changed"
ROUTE127.fromNode = "TIMER"
ROUTE127.toField = "set_fraction"
ROUTE127.toNode = "SKULLBASE_ANIMATOR"

ProtoBody47.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromField = "fraction_changed"
ROUTE128.fromNode = "TIMER"
ROUTE128.toField = "set_fraction"
ROUTE128.toNode = "L_SHOULDER_ANIMATOR"

ProtoBody47.children.append(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.fromField = "fraction_changed"
ROUTE129.fromNode = "TIMER"
ROUTE129.toField = "set_fraction"
ROUTE129.toNode = "L_ELBOW_ANIMATOR"

ProtoBody47.children.append(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.fromField = "fraction_changed"
ROUTE130.fromNode = "TIMER"
ROUTE130.toField = "set_fraction"
ROUTE130.toNode = "L_WRIST_ANIMATOR"

ProtoBody47.children.append(ROUTE130)
ROUTE131 = x3d.ROUTE()
ROUTE131.fromField = "fraction_changed"
ROUTE131.fromNode = "TIMER"
ROUTE131.toField = "set_fraction"
ROUTE131.toNode = "R_SHOULDER_ANIMATOR"

ProtoBody47.children.append(ROUTE131)
ROUTE132 = x3d.ROUTE()
ROUTE132.fromField = "fraction_changed"
ROUTE132.fromNode = "TIMER"
ROUTE132.toField = "set_fraction"
ROUTE132.toNode = "R_ELBOW_ANIMATOR"

ProtoBody47.children.append(ROUTE132)
ROUTE133 = x3d.ROUTE()
ROUTE133.fromField = "fraction_changed"
ROUTE133.fromNode = "TIMER"
ROUTE133.toField = "set_fraction"
ROUTE133.toNode = "R_WRIST_ANIMATOR"

ProtoBody47.children.append(ROUTE133)

ProtoDeclare19.ProtoBody = ProtoBody47

Scene17.children.append(ProtoDeclare19)
Anchor134 = x3d.Anchor()
Anchor134.description = "see InterchangableActorsViaDynamicRouting scene"
Anchor134.parameter = ["target=_blank"]
Anchor134.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Shape135 = x3d.Shape()
Text136 = x3d.Text()
Text136.string = ["LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle137 = x3d.FontStyle()
FontStyle137.justify = ["MIDDLE","MIDDLE"]
FontStyle137.size = 0.8

Text136.fontStyle = FontStyle137

Shape135.geometry = Text136
Appearance138 = x3d.Appearance()
Material139 = x3d.Material()
Material139.diffuseColor = [1,1,0.2]

Appearance138.material = Material139

Shape135.appearance = Appearance138

Anchor134.children.append(Shape135)

Scene17.children.append(Anchor134)

X3D0.Scene = Scene17
f = open("../data/LOA1_JumpAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_JumpAnimation.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

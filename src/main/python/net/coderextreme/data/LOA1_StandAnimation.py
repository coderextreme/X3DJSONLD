print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "LOA1_StandAnimation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Humanoid animation prototype reusable by any Humanoid."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "rights"
meta5.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Ozan APAYDIN"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "1 December 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "23 May 2020"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "consider adding eyeball animation"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://www.HAnim.org"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "http://HAnim.org/Models"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "http://HAnim.org/Nodes"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "subject"
meta14.content = "Nancy Stand Animation HAnim 2001"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "license"
meta17.content = "../license.html"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.title = "LOA1_StandAnimation.x3d"

Scene18.children.append(WorldInfo19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.name = "LOA1_StandAnimation"
ProtoInterface21 = x3d.ProtoInterface()
field22 = x3d.field()
field22.name = "cycleInterval"
field22.accessType = "inputOutput"
field22.type = "SFTime"
field22.value = 0.009999999776482582

ProtoInterface21.field.append(field22)
field23 = x3d.field()
field23.name = "enabled"
field23.accessType = "inputOutput"
field23.type = "SFBool"
field23.value = True

ProtoInterface21.field.append(field23)
field24 = x3d.field()
field24.name = "loop"
field24.accessType = "inputOutput"
field24.type = "SFBool"
field24.value = True

ProtoInterface21.field.append(field24)
field25 = x3d.field()
field25.name = "startTime"
field25.accessType = "inputOutput"
field25.type = "SFTime"
field25.value = 0

ProtoInterface21.field.append(field25)
field26 = x3d.field()
field26.name = "stopTime"
field26.accessType = "inputOutput"
field26.type = "SFTime"
field26.value = -1

ProtoInterface21.field.append(field26)
field27 = x3d.field()
field27.name = "fraction_changed"
field27.accessType = "outputOnly"
field27.type = "SFFloat"

ProtoInterface21.field.append(field27)
field28 = x3d.field()
field28.name = "isActive"
field28.accessType = "outputOnly"
field28.type = "SFBool"

ProtoInterface21.field.append(field28)
field29 = x3d.field()
field29.name = "HumanoidRoot_translation_changed"
field29.accessType = "outputOnly"
field29.type = "SFVec3f"

ProtoInterface21.field.append(field29)
field30 = x3d.field()
field30.name = "HumanoidRoot_rotation_changed"
field30.accessType = "outputOnly"
field30.type = "SFRotation"

ProtoInterface21.field.append(field30)
field31 = x3d.field()
field31.name = "lower_body_rotation_changed"
field31.accessType = "outputOnly"
field31.type = "SFRotation"

ProtoInterface21.field.append(field31)
field32 = x3d.field()
field32.name = "l_hip_rotation_changed"
field32.accessType = "outputOnly"
field32.type = "SFRotation"

ProtoInterface21.field.append(field32)
field33 = x3d.field()
field33.name = "l_knee_rotation_changed"
field33.accessType = "outputOnly"
field33.type = "SFRotation"

ProtoInterface21.field.append(field33)
field34 = x3d.field()
field34.name = "l_ankle_rotation_changed"
field34.accessType = "outputOnly"
field34.type = "SFRotation"

ProtoInterface21.field.append(field34)
field35 = x3d.field()
field35.name = "l_midtarsal_rotation_changed"
field35.accessType = "outputOnly"
field35.type = "SFRotation"

ProtoInterface21.field.append(field35)
field36 = x3d.field()
field36.name = "r_hip_rotation_changed"
field36.accessType = "outputOnly"
field36.type = "SFRotation"

ProtoInterface21.field.append(field36)
field37 = x3d.field()
field37.name = "r_knee_rotation_changed"
field37.accessType = "outputOnly"
field37.type = "SFRotation"

ProtoInterface21.field.append(field37)
field38 = x3d.field()
field38.name = "r_ankle_rotation_changed"
field38.accessType = "outputOnly"
field38.type = "SFRotation"

ProtoInterface21.field.append(field38)
field39 = x3d.field()
field39.name = "r_midtarsal_rotation_changed"
field39.accessType = "outputOnly"
field39.type = "SFRotation"

ProtoInterface21.field.append(field39)
field40 = x3d.field()
field40.name = "vl5_rotation_changed"
field40.accessType = "outputOnly"
field40.type = "SFRotation"

ProtoInterface21.field.append(field40)
field41 = x3d.field()
field41.name = "skullbase_rotation_changed"
field41.accessType = "outputOnly"
field41.type = "SFRotation"

ProtoInterface21.field.append(field41)
field42 = x3d.field()
field42.name = "l_shoulder_rotation_changed"
field42.accessType = "outputOnly"
field42.type = "SFRotation"

ProtoInterface21.field.append(field42)
field43 = x3d.field()
field43.name = "l_elbow_rotation_changed"
field43.accessType = "outputOnly"
field43.type = "SFRotation"

ProtoInterface21.field.append(field43)
field44 = x3d.field()
field44.name = "l_wrist_rotation_changed"
field44.accessType = "outputOnly"
field44.type = "SFRotation"

ProtoInterface21.field.append(field44)
field45 = x3d.field()
field45.name = "r_shoulder_rotation_changed"
field45.accessType = "outputOnly"
field45.type = "SFRotation"

ProtoInterface21.field.append(field45)
field46 = x3d.field()
field46.name = "r_elbow_rotation_changed"
field46.accessType = "outputOnly"
field46.type = "SFRotation"

ProtoInterface21.field.append(field46)
field47 = x3d.field()
field47.name = "r_wrist_rotation_changed"
field47.accessType = "outputOnly"
field47.type = "SFRotation"

ProtoInterface21.field.append(field47)

ProtoDeclare20.ProtoInterface = ProtoInterface21
ProtoBody48 = x3d.ProtoBody()
Group49 = x3d.Group()
TimeSensor50 = x3d.TimeSensor()
TimeSensor50.DEF = "TIMER"
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.nodeField = "cycleInterval"
connect52.protoField = "cycleInterval"

IS51.connect.append(connect52)
connect53 = x3d.connect()
connect53.nodeField = "enabled"
connect53.protoField = "enabled"

IS51.connect.append(connect53)
connect54 = x3d.connect()
connect54.nodeField = "loop"
connect54.protoField = "loop"

IS51.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "startTime"
connect55.protoField = "startTime"

IS51.connect.append(connect55)
connect56 = x3d.connect()
connect56.nodeField = "stopTime"
connect56.protoField = "stopTime"

IS51.connect.append(connect56)
connect57 = x3d.connect()
connect57.nodeField = "fraction_changed"
connect57.protoField = "fraction_changed"

IS51.connect.append(connect57)
connect58 = x3d.connect()
connect58.nodeField = "isActive"
connect58.protoField = "isActive"

IS51.connect.append(connect58)

TimeSensor50.IS = IS51

Group49.children.append(TimeSensor50)
PositionInterpolator59 = x3d.PositionInterpolator()
PositionInterpolator59.DEF = "HUMANOIDROOT_POSITION_ANIMATOR"
PositionInterpolator59.key = [0,1]
IS60 = x3d.IS()
connect61 = x3d.connect()
connect61.nodeField = "value_changed"
connect61.protoField = "HumanoidRoot_translation_changed"

IS60.connect.append(connect61)

PositionInterpolator59.IS = IS60

Group49.children.append(PositionInterpolator59)
OrientationInterpolator62 = x3d.OrientationInterpolator()
OrientationInterpolator62.DEF = "HUMANOIDROOT_ANIMATOR"
OrientationInterpolator62.key = [0,1]
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.nodeField = "value_changed"
connect64.protoField = "HumanoidRoot_rotation_changed"

IS63.connect.append(connect64)

OrientationInterpolator62.IS = IS63

Group49.children.append(OrientationInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator()
OrientationInterpolator65.DEF = "SACROILIAC_ANIMATOR"
OrientationInterpolator65.key = [0,1]
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.nodeField = "value_changed"
connect67.protoField = "lower_body_rotation_changed"

IS66.connect.append(connect67)

OrientationInterpolator65.IS = IS66

Group49.children.append(OrientationInterpolator65)
OrientationInterpolator68 = x3d.OrientationInterpolator()
OrientationInterpolator68.DEF = "L_HIP_ANIMATOR"
OrientationInterpolator68.key = [0,1]
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.nodeField = "value_changed"
connect70.protoField = "l_hip_rotation_changed"

IS69.connect.append(connect70)

OrientationInterpolator68.IS = IS69

Group49.children.append(OrientationInterpolator68)
OrientationInterpolator71 = x3d.OrientationInterpolator()
OrientationInterpolator71.DEF = "L_KNEE_ANIMATOR"
OrientationInterpolator71.key = [0,1]
IS72 = x3d.IS()
connect73 = x3d.connect()
connect73.nodeField = "value_changed"
connect73.protoField = "l_knee_rotation_changed"

IS72.connect.append(connect73)

OrientationInterpolator71.IS = IS72

Group49.children.append(OrientationInterpolator71)
OrientationInterpolator74 = x3d.OrientationInterpolator()
OrientationInterpolator74.DEF = "L_ANKLE_ANIMATOR"
OrientationInterpolator74.key = [0,1]
IS75 = x3d.IS()
connect76 = x3d.connect()
connect76.nodeField = "value_changed"
connect76.protoField = "l_ankle_rotation_changed"

IS75.connect.append(connect76)

OrientationInterpolator74.IS = IS75

Group49.children.append(OrientationInterpolator74)
OrientationInterpolator77 = x3d.OrientationInterpolator()
OrientationInterpolator77.DEF = "L_MIDTARSAL_ANIMATOR"
OrientationInterpolator77.key = [0,1]
IS78 = x3d.IS()
connect79 = x3d.connect()
connect79.nodeField = "value_changed"
connect79.protoField = "l_midtarsal_rotation_changed"

IS78.connect.append(connect79)

OrientationInterpolator77.IS = IS78

Group49.children.append(OrientationInterpolator77)
OrientationInterpolator80 = x3d.OrientationInterpolator()
OrientationInterpolator80.DEF = "R_HIP_ANIMATOR"
OrientationInterpolator80.key = [0,1]
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.nodeField = "value_changed"
connect82.protoField = "r_hip_rotation_changed"

IS81.connect.append(connect82)

OrientationInterpolator80.IS = IS81

Group49.children.append(OrientationInterpolator80)
OrientationInterpolator83 = x3d.OrientationInterpolator()
OrientationInterpolator83.DEF = "R_KNEE_ANIMATOR"
OrientationInterpolator83.key = [0,1]
IS84 = x3d.IS()
connect85 = x3d.connect()
connect85.nodeField = "value_changed"
connect85.protoField = "r_knee_rotation_changed"

IS84.connect.append(connect85)

OrientationInterpolator83.IS = IS84

Group49.children.append(OrientationInterpolator83)
OrientationInterpolator86 = x3d.OrientationInterpolator()
OrientationInterpolator86.DEF = "R_ANKLE_ANIMATOR"
OrientationInterpolator86.key = [0,1]
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.nodeField = "value_changed"
connect88.protoField = "r_ankle_rotation_changed"

IS87.connect.append(connect88)

OrientationInterpolator86.IS = IS87

Group49.children.append(OrientationInterpolator86)
OrientationInterpolator89 = x3d.OrientationInterpolator()
OrientationInterpolator89.DEF = "R_MIDTARSAL_ANIMATOR"
OrientationInterpolator89.key = [0,1]
IS90 = x3d.IS()
connect91 = x3d.connect()
connect91.nodeField = "value_changed"
connect91.protoField = "r_midtarsal_rotation_changed"

IS90.connect.append(connect91)

OrientationInterpolator89.IS = IS90

Group49.children.append(OrientationInterpolator89)
OrientationInterpolator92 = x3d.OrientationInterpolator()
OrientationInterpolator92.DEF = "VL5_ANIMATOR"
OrientationInterpolator92.key = [0,1]
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.nodeField = "value_changed"
connect94.protoField = "vl5_rotation_changed"

IS93.connect.append(connect94)

OrientationInterpolator92.IS = IS93

Group49.children.append(OrientationInterpolator92)
OrientationInterpolator95 = x3d.OrientationInterpolator()
OrientationInterpolator95.DEF = "SKULLBASE_ANIMATOR"
OrientationInterpolator95.key = [0,0.5,1]
IS96 = x3d.IS()
connect97 = x3d.connect()
connect97.nodeField = "value_changed"
connect97.protoField = "skullbase_rotation_changed"

IS96.connect.append(connect97)

OrientationInterpolator95.IS = IS96

Group49.children.append(OrientationInterpolator95)
OrientationInterpolator98 = x3d.OrientationInterpolator()
OrientationInterpolator98.DEF = "L_SHOULDER_ANIMATOR"
OrientationInterpolator98.key = [0,1]
IS99 = x3d.IS()
connect100 = x3d.connect()
connect100.nodeField = "value_changed"
connect100.protoField = "l_shoulder_rotation_changed"

IS99.connect.append(connect100)

OrientationInterpolator98.IS = IS99

Group49.children.append(OrientationInterpolator98)
OrientationInterpolator101 = x3d.OrientationInterpolator()
OrientationInterpolator101.DEF = "L_ELBOW_ANIMATOR"
OrientationInterpolator101.key = [0,1]
IS102 = x3d.IS()
connect103 = x3d.connect()
connect103.nodeField = "value_changed"
connect103.protoField = "l_elbow_rotation_changed"

IS102.connect.append(connect103)

OrientationInterpolator101.IS = IS102

Group49.children.append(OrientationInterpolator101)
OrientationInterpolator104 = x3d.OrientationInterpolator()
OrientationInterpolator104.DEF = "L_WRIST_ANIMATOR"
OrientationInterpolator104.key = [0,1]
IS105 = x3d.IS()
connect106 = x3d.connect()
connect106.nodeField = "value_changed"
connect106.protoField = "l_wrist_rotation_changed"

IS105.connect.append(connect106)

OrientationInterpolator104.IS = IS105

Group49.children.append(OrientationInterpolator104)
OrientationInterpolator107 = x3d.OrientationInterpolator()
OrientationInterpolator107.DEF = "R_SHOULDER_ANIMATOR"
OrientationInterpolator107.key = [0,1]
IS108 = x3d.IS()
connect109 = x3d.connect()
connect109.nodeField = "value_changed"
connect109.protoField = "r_shoulder_rotation_changed"

IS108.connect.append(connect109)

OrientationInterpolator107.IS = IS108

Group49.children.append(OrientationInterpolator107)
OrientationInterpolator110 = x3d.OrientationInterpolator()
OrientationInterpolator110.DEF = "R_ELBOW_ANIMATOR"
OrientationInterpolator110.key = [0,1]
IS111 = x3d.IS()
connect112 = x3d.connect()
connect112.nodeField = "value_changed"
connect112.protoField = "r_elbow_rotation_changed"

IS111.connect.append(connect112)

OrientationInterpolator110.IS = IS111

Group49.children.append(OrientationInterpolator110)
OrientationInterpolator113 = x3d.OrientationInterpolator()
OrientationInterpolator113.DEF = "R_WRIST_ANIMATOR"
OrientationInterpolator113.key = [0,1]
IS114 = x3d.IS()
connect115 = x3d.connect()
connect115.nodeField = "value_changed"
connect115.protoField = "r_wrist_rotation_changed"

IS114.connect.append(connect115)

OrientationInterpolator113.IS = IS114

Group49.children.append(OrientationInterpolator113)

ProtoBody48.children.append(Group49)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromField = "fraction_changed"
ROUTE116.fromNode = "TIMER"
ROUTE116.toField = "set_fraction"
ROUTE116.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"

ProtoBody48.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromField = "fraction_changed"
ROUTE117.fromNode = "TIMER"
ROUTE117.toField = "set_fraction"
ROUTE117.toNode = "HUMANOIDROOT_ANIMATOR"

ProtoBody48.children.append(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.fromField = "fraction_changed"
ROUTE118.fromNode = "TIMER"
ROUTE118.toField = "set_fraction"
ROUTE118.toNode = "SACROILIAC_ANIMATOR"

ProtoBody48.children.append(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.fromField = "fraction_changed"
ROUTE119.fromNode = "TIMER"
ROUTE119.toField = "set_fraction"
ROUTE119.toNode = "L_HIP_ANIMATOR"

ProtoBody48.children.append(ROUTE119)
ROUTE120 = x3d.ROUTE()
ROUTE120.fromField = "fraction_changed"
ROUTE120.fromNode = "TIMER"
ROUTE120.toField = "set_fraction"
ROUTE120.toNode = "L_KNEE_ANIMATOR"

ProtoBody48.children.append(ROUTE120)
ROUTE121 = x3d.ROUTE()
ROUTE121.fromField = "fraction_changed"
ROUTE121.fromNode = "TIMER"
ROUTE121.toField = "set_fraction"
ROUTE121.toNode = "L_ANKLE_ANIMATOR"

ProtoBody48.children.append(ROUTE121)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromField = "fraction_changed"
ROUTE122.fromNode = "TIMER"
ROUTE122.toField = "set_fraction"
ROUTE122.toNode = "L_MIDTARSAL_ANIMATOR"

ProtoBody48.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromField = "fraction_changed"
ROUTE123.fromNode = "TIMER"
ROUTE123.toField = "set_fraction"
ROUTE123.toNode = "R_HIP_ANIMATOR"

ProtoBody48.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromField = "fraction_changed"
ROUTE124.fromNode = "TIMER"
ROUTE124.toField = "set_fraction"
ROUTE124.toNode = "R_KNEE_ANIMATOR"

ProtoBody48.children.append(ROUTE124)
ROUTE125 = x3d.ROUTE()
ROUTE125.fromField = "fraction_changed"
ROUTE125.fromNode = "TIMER"
ROUTE125.toField = "set_fraction"
ROUTE125.toNode = "R_ANKLE_ANIMATOR"

ProtoBody48.children.append(ROUTE125)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromField = "fraction_changed"
ROUTE126.fromNode = "TIMER"
ROUTE126.toField = "set_fraction"
ROUTE126.toNode = "R_MIDTARSAL_ANIMATOR"

ProtoBody48.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromField = "fraction_changed"
ROUTE127.fromNode = "TIMER"
ROUTE127.toField = "set_fraction"
ROUTE127.toNode = "VL5_ANIMATOR"

ProtoBody48.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromField = "fraction_changed"
ROUTE128.fromNode = "TIMER"
ROUTE128.toField = "set_fraction"
ROUTE128.toNode = "SKULLBASE_ANIMATOR"

ProtoBody48.children.append(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.fromField = "fraction_changed"
ROUTE129.fromNode = "TIMER"
ROUTE129.toField = "set_fraction"
ROUTE129.toNode = "L_SHOULDER_ANIMATOR"

ProtoBody48.children.append(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.fromField = "fraction_changed"
ROUTE130.fromNode = "TIMER"
ROUTE130.toField = "set_fraction"
ROUTE130.toNode = "L_ELBOW_ANIMATOR"

ProtoBody48.children.append(ROUTE130)
ROUTE131 = x3d.ROUTE()
ROUTE131.fromField = "fraction_changed"
ROUTE131.fromNode = "TIMER"
ROUTE131.toField = "set_fraction"
ROUTE131.toNode = "L_WRIST_ANIMATOR"

ProtoBody48.children.append(ROUTE131)
ROUTE132 = x3d.ROUTE()
ROUTE132.fromField = "fraction_changed"
ROUTE132.fromNode = "TIMER"
ROUTE132.toField = "set_fraction"
ROUTE132.toNode = "R_SHOULDER_ANIMATOR"

ProtoBody48.children.append(ROUTE132)
ROUTE133 = x3d.ROUTE()
ROUTE133.fromField = "fraction_changed"
ROUTE133.fromNode = "TIMER"
ROUTE133.toField = "set_fraction"
ROUTE133.toNode = "R_ELBOW_ANIMATOR"

ProtoBody48.children.append(ROUTE133)
ROUTE134 = x3d.ROUTE()
ROUTE134.fromField = "fraction_changed"
ROUTE134.fromNode = "TIMER"
ROUTE134.toField = "set_fraction"
ROUTE134.toNode = "R_WRIST_ANIMATOR"

ProtoBody48.children.append(ROUTE134)

ProtoDeclare20.ProtoBody = ProtoBody48

Scene18.children.append(ProtoDeclare20)
"""======================================"""
"""Point to example use in case someone inspects this file"""
Anchor135 = x3d.Anchor()
Anchor135.description = "InterchangableActorsViaDynamicRouting"
Anchor135.parameter = ["target=_blank"]
Anchor135.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Shape136 = x3d.Shape()
Text137 = x3d.Text()
Text137.string = ["LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle138 = x3d.FontStyle()
FontStyle138.justify = ["MIDDLE","MIDDLE"]
FontStyle138.size = 0.8

Text137.fontStyle = FontStyle138

Shape136.geometry = Text137
Appearance139 = x3d.Appearance()
Material140 = x3d.Material()
Material140.diffuseColor = [1,1,0.2]

Appearance139.material = Material140

Shape136.appearance = Appearance139

Anchor135.children.append(Shape136)

Scene18.children.append(Anchor135)

X3D0.Scene = Scene18
f = open("../data/LOA1_StandAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_StandAnimation.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

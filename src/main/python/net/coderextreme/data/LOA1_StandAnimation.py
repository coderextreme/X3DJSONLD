print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta8.content = "Mon, 09 Feb 2026 07:12:35 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "consider adding eyeball animation"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://www.HAnim.org"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://HAnim.org/Models"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://HAnim.org/Nodes"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "subject"
meta14.content = "Nancy Stand Animation HAnim 2001"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.name = "LOA1_StandAnimation"
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.accessType = "inputOutput"
field19.type = "SFTime"
field19.name = "cycleInterval"
field19.value = 0.00999999977648258

ProtoInterface18.field.append(field19)
field20 = x3d.field()
field20.accessType = "inputOutput"
field20.type = "SFBool"
field20.name = "enabled"
field20.value = True

ProtoInterface18.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOutput"
field21.type = "SFBool"
field21.name = "loop"
field21.value = True

ProtoInterface18.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFTime"
field22.name = "startTime"
field22.value = 0

ProtoInterface18.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFTime"
field23.name = "stopTime"

ProtoInterface18.field.append(field23)
field24 = x3d.field()
field24.accessType = "outputOnly"
field24.type = "SFFloat"
field24.name = "fraction_changed"

ProtoInterface18.field.append(field24)
field25 = x3d.field()
field25.accessType = "outputOnly"
field25.type = "SFBool"
field25.name = "isActive"

ProtoInterface18.field.append(field25)
field26 = x3d.field()
field26.accessType = "outputOnly"
field26.type = "SFVec3f"
field26.name = "HumanoidRoot_translation_changed"

ProtoInterface18.field.append(field26)
field27 = x3d.field()
field27.accessType = "outputOnly"
field27.type = "SFRotation"
field27.name = "HumanoidRoot_rotation_changed"

ProtoInterface18.field.append(field27)
field28 = x3d.field()
field28.accessType = "outputOnly"
field28.type = "SFRotation"
field28.name = "lower_body_rotation_changed"

ProtoInterface18.field.append(field28)
field29 = x3d.field()
field29.accessType = "outputOnly"
field29.type = "SFRotation"
field29.name = "l_hip_rotation_changed"

ProtoInterface18.field.append(field29)
field30 = x3d.field()
field30.accessType = "outputOnly"
field30.type = "SFRotation"
field30.name = "l_knee_rotation_changed"

ProtoInterface18.field.append(field30)
field31 = x3d.field()
field31.accessType = "outputOnly"
field31.type = "SFRotation"
field31.name = "l_ankle_rotation_changed"

ProtoInterface18.field.append(field31)
field32 = x3d.field()
field32.accessType = "outputOnly"
field32.type = "SFRotation"
field32.name = "l_midtarsal_rotation_changed"

ProtoInterface18.field.append(field32)
field33 = x3d.field()
field33.accessType = "outputOnly"
field33.type = "SFRotation"
field33.name = "r_hip_rotation_changed"

ProtoInterface18.field.append(field33)
field34 = x3d.field()
field34.accessType = "outputOnly"
field34.type = "SFRotation"
field34.name = "r_knee_rotation_changed"

ProtoInterface18.field.append(field34)
field35 = x3d.field()
field35.accessType = "outputOnly"
field35.type = "SFRotation"
field35.name = "r_ankle_rotation_changed"

ProtoInterface18.field.append(field35)
field36 = x3d.field()
field36.accessType = "outputOnly"
field36.type = "SFRotation"
field36.name = "r_midtarsal_rotation_changed"

ProtoInterface18.field.append(field36)
field37 = x3d.field()
field37.accessType = "outputOnly"
field37.type = "SFRotation"
field37.name = "vl5_rotation_changed"

ProtoInterface18.field.append(field37)
field38 = x3d.field()
field38.accessType = "outputOnly"
field38.type = "SFRotation"
field38.name = "skullbase_rotation_changed"

ProtoInterface18.field.append(field38)
field39 = x3d.field()
field39.accessType = "outputOnly"
field39.type = "SFRotation"
field39.name = "l_shoulder_rotation_changed"

ProtoInterface18.field.append(field39)
field40 = x3d.field()
field40.accessType = "outputOnly"
field40.type = "SFRotation"
field40.name = "l_elbow_rotation_changed"

ProtoInterface18.field.append(field40)
field41 = x3d.field()
field41.accessType = "outputOnly"
field41.type = "SFRotation"
field41.name = "l_wrist_rotation_changed"

ProtoInterface18.field.append(field41)
field42 = x3d.field()
field42.accessType = "outputOnly"
field42.type = "SFRotation"
field42.name = "r_shoulder_rotation_changed"

ProtoInterface18.field.append(field42)
field43 = x3d.field()
field43.accessType = "outputOnly"
field43.type = "SFRotation"
field43.name = "r_elbow_rotation_changed"

ProtoInterface18.field.append(field43)
field44 = x3d.field()
field44.accessType = "outputOnly"
field44.type = "SFRotation"
field44.name = "r_wrist_rotation_changed"

ProtoInterface18.field.append(field44)

ProtoDeclare17.ProtoInterface = ProtoInterface18
ProtoBody45 = x3d.ProtoBody()
Group46 = x3d.Group()
TimeSensor47 = x3d.TimeSensor(DEF="TIMER")
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.nodeField = "enabled"
connect49.protoField = "enabled"

IS48.connect.append(connect49)
connect50 = x3d.connect()
connect50.nodeField = "cycleInterval"
connect50.protoField = "cycleInterval"

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
connect54.nodeField = "isActive"
connect54.protoField = "isActive"

IS48.connect.append(connect54)
connect55 = x3d.connect()
connect55.nodeField = "fraction_changed"
connect55.protoField = "fraction_changed"

IS48.connect.append(connect55)

TimeSensor47.IS = IS48

Group46.children.append(TimeSensor47)
PositionInterpolator56 = x3d.PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator56.key = [0,1]
PositionInterpolator56.keyValue = [(0, 0, 0),(0, 0, 0)]
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
OrientationInterpolator62 = x3d.OrientationInterpolator(DEF="SACROILIAC_ANIMATOR")
OrientationInterpolator62.key = [0,1]
OrientationInterpolator62.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.nodeField = "value_changed"
connect64.protoField = "lower_body_rotation_changed"

IS63.connect.append(connect64)

OrientationInterpolator62.IS = IS63

Group46.children.append(OrientationInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator(DEF="L_HIP_ANIMATOR")
OrientationInterpolator65.key = [0,1]
OrientationInterpolator65.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.nodeField = "value_changed"
connect67.protoField = "l_hip_rotation_changed"

IS66.connect.append(connect67)

OrientationInterpolator65.IS = IS66

Group46.children.append(OrientationInterpolator65)
OrientationInterpolator68 = x3d.OrientationInterpolator(DEF="L_KNEE_ANIMATOR")
OrientationInterpolator68.key = [0,1]
OrientationInterpolator68.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.nodeField = "value_changed"
connect70.protoField = "l_knee_rotation_changed"

IS69.connect.append(connect70)

OrientationInterpolator68.IS = IS69

Group46.children.append(OrientationInterpolator68)
OrientationInterpolator71 = x3d.OrientationInterpolator(DEF="L_ANKLE_ANIMATOR")
OrientationInterpolator71.key = [0,1]
OrientationInterpolator71.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS72 = x3d.IS()
connect73 = x3d.connect()
connect73.nodeField = "value_changed"
connect73.protoField = "l_ankle_rotation_changed"

IS72.connect.append(connect73)

OrientationInterpolator71.IS = IS72

Group46.children.append(OrientationInterpolator71)
OrientationInterpolator74 = x3d.OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR")
OrientationInterpolator74.key = [0,1]
OrientationInterpolator74.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0)]
IS75 = x3d.IS()
connect76 = x3d.connect()
connect76.nodeField = "value_changed"
connect76.protoField = "l_midtarsal_rotation_changed"

IS75.connect.append(connect76)

OrientationInterpolator74.IS = IS75

Group46.children.append(OrientationInterpolator74)
OrientationInterpolator77 = x3d.OrientationInterpolator(DEF="R_HIP_ANIMATOR")
OrientationInterpolator77.key = [0,1]
OrientationInterpolator77.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS78 = x3d.IS()
connect79 = x3d.connect()
connect79.nodeField = "value_changed"
connect79.protoField = "r_hip_rotation_changed"

IS78.connect.append(connect79)

OrientationInterpolator77.IS = IS78

Group46.children.append(OrientationInterpolator77)
OrientationInterpolator80 = x3d.OrientationInterpolator(DEF="R_KNEE_ANIMATOR")
OrientationInterpolator80.key = [0,1]
OrientationInterpolator80.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.nodeField = "value_changed"
connect82.protoField = "r_knee_rotation_changed"

IS81.connect.append(connect82)

OrientationInterpolator80.IS = IS81

Group46.children.append(OrientationInterpolator80)
OrientationInterpolator83 = x3d.OrientationInterpolator(DEF="R_ANKLE_ANIMATOR")
OrientationInterpolator83.key = [0,1]
OrientationInterpolator83.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS84 = x3d.IS()
connect85 = x3d.connect()
connect85.nodeField = "value_changed"
connect85.protoField = "r_ankle_rotation_changed"

IS84.connect.append(connect85)

OrientationInterpolator83.IS = IS84

Group46.children.append(OrientationInterpolator83)
OrientationInterpolator86 = x3d.OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR")
OrientationInterpolator86.key = [0,1]
OrientationInterpolator86.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0)]
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.nodeField = "value_changed"
connect88.protoField = "r_midtarsal_rotation_changed"

IS87.connect.append(connect88)

OrientationInterpolator86.IS = IS87

Group46.children.append(OrientationInterpolator86)
OrientationInterpolator89 = x3d.OrientationInterpolator(DEF="VL5_ANIMATOR")
OrientationInterpolator89.key = [0,1]
OrientationInterpolator89.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS90 = x3d.IS()
connect91 = x3d.connect()
connect91.nodeField = "value_changed"
connect91.protoField = "vl5_rotation_changed"

IS90.connect.append(connect91)

OrientationInterpolator89.IS = IS90

Group46.children.append(OrientationInterpolator89)
OrientationInterpolator92 = x3d.OrientationInterpolator(DEF="SKULLBASE_ANIMATOR")
OrientationInterpolator92.key = [0,0.5,1]
OrientationInterpolator92.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(0, 0, 1, 0)]
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.nodeField = "value_changed"
connect94.protoField = "skullbase_rotation_changed"

IS93.connect.append(connect94)

OrientationInterpolator92.IS = IS93

Group46.children.append(OrientationInterpolator92)
OrientationInterpolator95 = x3d.OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR")
OrientationInterpolator95.key = [0,1]
OrientationInterpolator95.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS96 = x3d.IS()
connect97 = x3d.connect()
connect97.nodeField = "value_changed"
connect97.protoField = "l_shoulder_rotation_changed"

IS96.connect.append(connect97)

OrientationInterpolator95.IS = IS96

Group46.children.append(OrientationInterpolator95)
OrientationInterpolator98 = x3d.OrientationInterpolator(DEF="L_ELBOW_ANIMATOR")
OrientationInterpolator98.key = [0,1]
OrientationInterpolator98.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS99 = x3d.IS()
connect100 = x3d.connect()
connect100.nodeField = "value_changed"
connect100.protoField = "l_elbow_rotation_changed"

IS99.connect.append(connect100)

OrientationInterpolator98.IS = IS99

Group46.children.append(OrientationInterpolator98)
OrientationInterpolator101 = x3d.OrientationInterpolator(DEF="L_WRIST_ANIMATOR")
OrientationInterpolator101.key = [0,1]
OrientationInterpolator101.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS102 = x3d.IS()
connect103 = x3d.connect()
connect103.nodeField = "value_changed"
connect103.protoField = "l_wrist_rotation_changed"

IS102.connect.append(connect103)

OrientationInterpolator101.IS = IS102

Group46.children.append(OrientationInterpolator101)
OrientationInterpolator104 = x3d.OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR")
OrientationInterpolator104.key = [0,1]
OrientationInterpolator104.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS105 = x3d.IS()
connect106 = x3d.connect()
connect106.nodeField = "value_changed"
connect106.protoField = "r_shoulder_rotation_changed"

IS105.connect.append(connect106)

OrientationInterpolator104.IS = IS105

Group46.children.append(OrientationInterpolator104)
OrientationInterpolator107 = x3d.OrientationInterpolator(DEF="R_ELBOW_ANIMATOR")
OrientationInterpolator107.key = [0,1]
OrientationInterpolator107.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS108 = x3d.IS()
connect109 = x3d.connect()
connect109.nodeField = "value_changed"
connect109.protoField = "r_elbow_rotation_changed"

IS108.connect.append(connect109)

OrientationInterpolator107.IS = IS108

Group46.children.append(OrientationInterpolator107)
OrientationInterpolator110 = x3d.OrientationInterpolator(DEF="R_WRIST_ANIMATOR")
OrientationInterpolator110.key = [0,1]
OrientationInterpolator110.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]
IS111 = x3d.IS()
connect112 = x3d.connect()
connect112.nodeField = "value_changed"
connect112.protoField = "r_wrist_rotation_changed"

IS111.connect.append(connect112)

OrientationInterpolator110.IS = IS111

Group46.children.append(OrientationInterpolator110)

ProtoBody45.children.append(Group46)
ROUTE113 = x3d.ROUTE()
ROUTE113.fromNode = "TIMER"
ROUTE113.fromField = "fraction_changed"
ROUTE113.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE113.toField = "set_fraction"

ProtoBody45.children.append(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.fromNode = "TIMER"
ROUTE114.fromField = "fraction_changed"
ROUTE114.toNode = "HUMANOIDROOT_ANIMATOR"
ROUTE114.toField = "set_fraction"

ProtoBody45.children.append(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.fromNode = "TIMER"
ROUTE115.fromField = "fraction_changed"
ROUTE115.toNode = "SACROILIAC_ANIMATOR"
ROUTE115.toField = "set_fraction"

ProtoBody45.children.append(ROUTE115)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromNode = "TIMER"
ROUTE116.fromField = "fraction_changed"
ROUTE116.toNode = "L_HIP_ANIMATOR"
ROUTE116.toField = "set_fraction"

ProtoBody45.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromNode = "TIMER"
ROUTE117.fromField = "fraction_changed"
ROUTE117.toNode = "L_KNEE_ANIMATOR"
ROUTE117.toField = "set_fraction"

ProtoBody45.children.append(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.fromNode = "TIMER"
ROUTE118.fromField = "fraction_changed"
ROUTE118.toNode = "L_ANKLE_ANIMATOR"
ROUTE118.toField = "set_fraction"

ProtoBody45.children.append(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.fromNode = "TIMER"
ROUTE119.fromField = "fraction_changed"
ROUTE119.toNode = "L_MIDTARSAL_ANIMATOR"
ROUTE119.toField = "set_fraction"

ProtoBody45.children.append(ROUTE119)
ROUTE120 = x3d.ROUTE()
ROUTE120.fromNode = "TIMER"
ROUTE120.fromField = "fraction_changed"
ROUTE120.toNode = "R_HIP_ANIMATOR"
ROUTE120.toField = "set_fraction"

ProtoBody45.children.append(ROUTE120)
ROUTE121 = x3d.ROUTE()
ROUTE121.fromNode = "TIMER"
ROUTE121.fromField = "fraction_changed"
ROUTE121.toNode = "R_KNEE_ANIMATOR"
ROUTE121.toField = "set_fraction"

ProtoBody45.children.append(ROUTE121)
ROUTE122 = x3d.ROUTE()
ROUTE122.fromNode = "TIMER"
ROUTE122.fromField = "fraction_changed"
ROUTE122.toNode = "R_ANKLE_ANIMATOR"
ROUTE122.toField = "set_fraction"

ProtoBody45.children.append(ROUTE122)
ROUTE123 = x3d.ROUTE()
ROUTE123.fromNode = "TIMER"
ROUTE123.fromField = "fraction_changed"
ROUTE123.toNode = "R_MIDTARSAL_ANIMATOR"
ROUTE123.toField = "set_fraction"

ProtoBody45.children.append(ROUTE123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromNode = "TIMER"
ROUTE124.fromField = "fraction_changed"
ROUTE124.toNode = "VL5_ANIMATOR"
ROUTE124.toField = "set_fraction"

ProtoBody45.children.append(ROUTE124)
ROUTE125 = x3d.ROUTE()
ROUTE125.fromNode = "TIMER"
ROUTE125.fromField = "fraction_changed"
ROUTE125.toNode = "SKULLBASE_ANIMATOR"
ROUTE125.toField = "set_fraction"

ProtoBody45.children.append(ROUTE125)
ROUTE126 = x3d.ROUTE()
ROUTE126.fromNode = "TIMER"
ROUTE126.fromField = "fraction_changed"
ROUTE126.toNode = "L_SHOULDER_ANIMATOR"
ROUTE126.toField = "set_fraction"

ProtoBody45.children.append(ROUTE126)
ROUTE127 = x3d.ROUTE()
ROUTE127.fromNode = "TIMER"
ROUTE127.fromField = "fraction_changed"
ROUTE127.toNode = "L_ELBOW_ANIMATOR"
ROUTE127.toField = "set_fraction"

ProtoBody45.children.append(ROUTE127)
ROUTE128 = x3d.ROUTE()
ROUTE128.fromNode = "TIMER"
ROUTE128.fromField = "fraction_changed"
ROUTE128.toNode = "L_WRIST_ANIMATOR"
ROUTE128.toField = "set_fraction"

ProtoBody45.children.append(ROUTE128)
ROUTE129 = x3d.ROUTE()
ROUTE129.fromNode = "TIMER"
ROUTE129.fromField = "fraction_changed"
ROUTE129.toNode = "R_SHOULDER_ANIMATOR"
ROUTE129.toField = "set_fraction"

ProtoBody45.children.append(ROUTE129)
ROUTE130 = x3d.ROUTE()
ROUTE130.fromNode = "TIMER"
ROUTE130.fromField = "fraction_changed"
ROUTE130.toNode = "R_ELBOW_ANIMATOR"
ROUTE130.toField = "set_fraction"

ProtoBody45.children.append(ROUTE130)
ROUTE131 = x3d.ROUTE()
ROUTE131.fromNode = "TIMER"
ROUTE131.fromField = "fraction_changed"
ROUTE131.toNode = "R_WRIST_ANIMATOR"
ROUTE131.toField = "set_fraction"

ProtoBody45.children.append(ROUTE131)

ProtoDeclare17.ProtoBody = ProtoBody45

Scene16.children.append(ProtoDeclare17)
WorldInfo132 = x3d.WorldInfo()
WorldInfo132.title = "LOA1_StandAnimation.x3d"

Scene16.children.append(WorldInfo132)
Anchor133 = x3d.Anchor()
Anchor133.description = "InterchangableActorsViaDynamicRouting"
Anchor133.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Anchor133.parameter = ["target=_blank"]
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.diffuseColor = [1,1,0.2]

Appearance135.material = Material136

Shape134.appearance = Appearance135
Text137 = x3d.Text()
Text137.string = ["LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle138 = x3d.FontStyle()
FontStyle138.size = 0.8
FontStyle138.justify = ["MIDDLE","MIDDLE"]

Text137.fontStyle = FontStyle138

Shape134.geometry = Text137

Anchor133.children.append(Shape134)

Scene16.children.append(Anchor133)

X3D0.Scene = Scene16
f = open("../data/LOA1_StandAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_StandAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/LOA1_StandAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

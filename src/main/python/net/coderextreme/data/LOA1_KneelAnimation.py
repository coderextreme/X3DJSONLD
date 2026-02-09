print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "LOA1_KneelAnimation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Humanoid animation prototype reusable by any Humanoid."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Tom Miller"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "Curt Blais"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translated"
meta6.content = "1 December 2001"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 09 Feb 2026 07:12:35 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.HAnim.org"

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
meta13.content = "Nancy kneel Animation HAnim 2001"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.name = "LOA1_KneelAnimation"
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
PositionInterpolator55.key = [0,0.3125,0.625,1]
PositionInterpolator55.keyValue = [(0, 0, 0),(0, -0.049999, 0),(0, -0.195, 0),(0, -0.439997, 0)]
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
OrientationInterpolator61 = x3d.OrientationInterpolator(DEF="L_HIP_ANIMATOR")
OrientationInterpolator61.key = [0,0.3125,0.625,1]
OrientationInterpolator61.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.619393),(-1, 0, 0, 1.069302),(-1, 0, 0, 1.937315)]
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "value_changed"
connect63.protoField = "l_hip_rotation_changed"

IS62.connect.append(connect63)

OrientationInterpolator61.IS = IS62

Group45.children.append(OrientationInterpolator61)
OrientationInterpolator64 = x3d.OrientationInterpolator(DEF="L_KNEE_ANIMATOR")
OrientationInterpolator64.key = [0,0.3125,0.625,1]
OrientationInterpolator64.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.615228),(1, 0, 0, 0.984524),(1, 0, 0, 2.076941)]
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "value_changed"
connect66.protoField = "l_knee_rotation_changed"

IS65.connect.append(connect66)

OrientationInterpolator64.IS = IS65

Group45.children.append(OrientationInterpolator64)
OrientationInterpolator67 = x3d.OrientationInterpolator(DEF="L_ANKLE_ANIMATOR")
OrientationInterpolator67.key = [0,0.3125,0.625,1]
OrientationInterpolator67.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.017453),(-1, 0, 0, 0.069812),(1, 0, 0, 0.261799)]
IS68 = x3d.IS()
connect69 = x3d.connect()
connect69.nodeField = "value_changed"
connect69.protoField = "l_ankle_rotation_changed"

IS68.connect.append(connect69)

OrientationInterpolator67.IS = IS68

Group45.children.append(OrientationInterpolator67)
OrientationInterpolator70 = x3d.OrientationInterpolator(DEF="R_HIP_ANIMATOR")
OrientationInterpolator70.key = [0,0.3125,1]
OrientationInterpolator70.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.523598),(-1, 0, 0, 0.157079)]
IS71 = x3d.IS()
connect72 = x3d.connect()
connect72.nodeField = "value_changed"
connect72.protoField = "r_hip_rotation_changed"

IS71.connect.append(connect72)

OrientationInterpolator70.IS = IS71

Group45.children.append(OrientationInterpolator70)
OrientationInterpolator73 = x3d.OrientationInterpolator(DEF="R_KNEE_ANIMATOR")
OrientationInterpolator73.key = [0,0.3125,0.625,1]
OrientationInterpolator73.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.349065),(1, 0, 0, 1.023397),(0.999934, 0.008043, 0.008185, 1.727938)]
IS74 = x3d.IS()
connect75 = x3d.connect()
connect75.nodeField = "value_changed"
connect75.protoField = "r_knee_rotation_changed"

IS74.connect.append(connect75)

OrientationInterpolator73.IS = IS74

Group45.children.append(OrientationInterpolator73)
OrientationInterpolator76 = x3d.OrientationInterpolator(DEF="R_ANKLE_ANIMATOR")
OrientationInterpolator76.key = [0,0.3125,0.625,1]
OrientationInterpolator76.keyValue = [(1, 0, 0, 0),(-0.991692, -0.072372, 0.106338, 0.205053),(-0.981083, -0.103267, 0.163741, 0.272231),(-1, 0, 0, 0.349065)]
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "value_changed"
connect78.protoField = "r_ankle_rotation_changed"

IS77.connect.append(connect78)

OrientationInterpolator76.IS = IS77

Group45.children.append(OrientationInterpolator76)
OrientationInterpolator79 = x3d.OrientationInterpolator(DEF="VL5_ANIMATOR")
OrientationInterpolator79.key = [0,1]
OrientationInterpolator79.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.174533)]
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.nodeField = "value_changed"
connect81.protoField = "vl5_rotation_changed"

IS80.connect.append(connect81)

OrientationInterpolator79.IS = IS80

Group45.children.append(OrientationInterpolator79)
OrientationInterpolator82 = x3d.OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR")
OrientationInterpolator82.key = [0,0.3125,0.625,1]
OrientationInterpolator82.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.279252),(-1, 0, 0, 0.506145),(-1, 0, 0, 0.191986)]
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "value_changed"
connect84.protoField = "l_shoulder_rotation_changed"

IS83.connect.append(connect84)

OrientationInterpolator82.IS = IS83

Group45.children.append(OrientationInterpolator82)
OrientationInterpolator85 = x3d.OrientationInterpolator(DEF="L_ELBOW_ANIMATOR")
OrientationInterpolator85.key = [0,0.3125,0.625,1]
OrientationInterpolator85.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.052359),(-1, 0, 0, 0.296706),(-1, 0, 0, 1.431169)]
IS86 = x3d.IS()
connect87 = x3d.connect()
connect87.nodeField = "value_changed"
connect87.protoField = "l_elbow_rotation_changed"

IS86.connect.append(connect87)

OrientationInterpolator85.IS = IS86

Group45.children.append(OrientationInterpolator85)
OrientationInterpolator88 = x3d.OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR")
OrientationInterpolator88.key = [0,0.3125,0.625,1]
OrientationInterpolator88.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.104719),(-1, 0, 0, 0.157079),(1, 0, 0, 0.314159)]
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.nodeField = "value_changed"
connect90.protoField = "r_shoulder_rotation_changed"

IS89.connect.append(connect90)

OrientationInterpolator88.IS = IS89

Group45.children.append(OrientationInterpolator88)
OrientationInterpolator91 = x3d.OrientationInterpolator(DEF="R_ELBOW_ANIMATOR")
OrientationInterpolator91.key = [0,0.3125,0.625,1]
OrientationInterpolator91.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.837757),(-1, 0, 0, 1.239183),(-1, 0, 0, 1.500983)]
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.nodeField = "value_changed"
connect93.protoField = "r_elbow_rotation_changed"

IS92.connect.append(connect93)

OrientationInterpolator91.IS = IS92

Group45.children.append(OrientationInterpolator91)

ProtoBody44.children.append(Group45)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromNode = "TIMER"
ROUTE94.fromField = "fraction_changed"
ROUTE94.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE94.toField = "set_fraction"

ProtoBody44.children.append(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.fromNode = "TIMER"
ROUTE95.fromField = "fraction_changed"
ROUTE95.toNode = "HUMANOIDROOT_ANIMATOR"
ROUTE95.toField = "set_fraction"

ProtoBody44.children.append(ROUTE95)
ROUTE96 = x3d.ROUTE()
ROUTE96.fromNode = "TIMER"
ROUTE96.fromField = "fraction_changed"
ROUTE96.toNode = "L_HIP_ANIMATOR"
ROUTE96.toField = "set_fraction"

ProtoBody44.children.append(ROUTE96)
ROUTE97 = x3d.ROUTE()
ROUTE97.fromNode = "TIMER"
ROUTE97.fromField = "fraction_changed"
ROUTE97.toNode = "L_KNEE_ANIMATOR"
ROUTE97.toField = "set_fraction"

ProtoBody44.children.append(ROUTE97)
ROUTE98 = x3d.ROUTE()
ROUTE98.fromNode = "TIMER"
ROUTE98.fromField = "fraction_changed"
ROUTE98.toNode = "L_ANKLE_ANIMATOR"
ROUTE98.toField = "set_fraction"

ProtoBody44.children.append(ROUTE98)
ROUTE99 = x3d.ROUTE()
ROUTE99.fromNode = "TIMER"
ROUTE99.fromField = "fraction_changed"
ROUTE99.toNode = "R_HIP_ANIMATOR"
ROUTE99.toField = "set_fraction"

ProtoBody44.children.append(ROUTE99)
ROUTE100 = x3d.ROUTE()
ROUTE100.fromNode = "TIMER"
ROUTE100.fromField = "fraction_changed"
ROUTE100.toNode = "R_KNEE_ANIMATOR"
ROUTE100.toField = "set_fraction"

ProtoBody44.children.append(ROUTE100)
ROUTE101 = x3d.ROUTE()
ROUTE101.fromNode = "TIMER"
ROUTE101.fromField = "fraction_changed"
ROUTE101.toNode = "R_ANKLE_ANIMATOR"
ROUTE101.toField = "set_fraction"

ProtoBody44.children.append(ROUTE101)
ROUTE102 = x3d.ROUTE()
ROUTE102.fromNode = "TIMER"
ROUTE102.fromField = "fraction_changed"
ROUTE102.toNode = "VL5_ANIMATOR"
ROUTE102.toField = "set_fraction"

ProtoBody44.children.append(ROUTE102)
ROUTE103 = x3d.ROUTE()
ROUTE103.fromNode = "TIMER"
ROUTE103.fromField = "fraction_changed"
ROUTE103.toNode = "L_SHOULDER_ANIMATOR"
ROUTE103.toField = "set_fraction"

ProtoBody44.children.append(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromNode = "TIMER"
ROUTE104.fromField = "fraction_changed"
ROUTE104.toNode = "L_ELBOW_ANIMATOR"
ROUTE104.toField = "set_fraction"

ProtoBody44.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromNode = "TIMER"
ROUTE105.fromField = "fraction_changed"
ROUTE105.toNode = "R_SHOULDER_ANIMATOR"
ROUTE105.toField = "set_fraction"

ProtoBody44.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromNode = "TIMER"
ROUTE106.fromField = "fraction_changed"
ROUTE106.toNode = "R_ELBOW_ANIMATOR"
ROUTE106.toField = "set_fraction"

ProtoBody44.children.append(ROUTE106)

ProtoDeclare16.ProtoBody = ProtoBody44

Scene15.children.append(ProtoDeclare16)
WorldInfo107 = x3d.WorldInfo()
WorldInfo107.title = "LOA1_KneelAnimation.x3d"

Scene15.children.append(WorldInfo107)
Anchor108 = x3d.Anchor()
Anchor108.description = "InterchangableActorsViaDynamicRouting"
Anchor108.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Anchor108.parameter = ["target=_blank"]
Shape109 = x3d.Shape()
Appearance110 = x3d.Appearance()
Material111 = x3d.Material()
Material111.diffuseColor = [1,1,0.2]

Appearance110.material = Material111

Shape109.appearance = Appearance110
Text112 = x3d.Text()
Text112.string = ["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle113 = x3d.FontStyle()
FontStyle113.size = 0.8
FontStyle113.justify = ["MIDDLE","MIDDLE"]

Text112.fontStyle = FontStyle113

Shape109.geometry = Text112

Anchor108.children.append(Shape109)

Scene15.children.append(Anchor108)

X3D0.Scene = Scene15
f = open("../data/LOA1_KneelAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_KneelAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/LOA1_KneelAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

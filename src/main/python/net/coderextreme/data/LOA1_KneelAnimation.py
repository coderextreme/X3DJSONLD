print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta7.content = "23 May 2020"

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
WorldInfo18.title = "LOA1_KneelAnimation.x3d"

Scene17.children.append(WorldInfo18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.name = "LOA1_KneelAnimation"
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
field23.value = False

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
PositionInterpolator58.key = [0,0.3125,0.625,1]
PositionInterpolator58.keyValue = [(0, 0, 0),(0, -0.049999, 0),(0, -0.195, 0),(0, -0.439997, 0)]
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.nodeField = "value_changed"
connect60.protoField = "HumanoidRoot_translation_changed"

IS59.connect.append(connect60)

PositionInterpolator58.IS = IS59

Group48.children.append(PositionInterpolator58)
OrientationInterpolator61 = x3d.OrientationInterpolator()
OrientationInterpolator61.DEF = "HUMANOIDROOT_ANIMATOR"
OrientationInterpolator61.key = [0,1]
OrientationInterpolator61.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0)]
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.nodeField = "value_changed"
connect63.protoField = "HumanoidRoot_rotation_changed"

IS62.connect.append(connect63)

OrientationInterpolator61.IS = IS62

Group48.children.append(OrientationInterpolator61)
"""no SACROILIAC_ANIMATOR"""
OrientationInterpolator64 = x3d.OrientationInterpolator()
OrientationInterpolator64.DEF = "L_HIP_ANIMATOR"
OrientationInterpolator64.key = [0,0.3125,0.625,1]
OrientationInterpolator64.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.619393),(-1, 0, 0, 1.069302),(-1, 0, 0, 1.937315)]
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.nodeField = "value_changed"
connect66.protoField = "l_hip_rotation_changed"

IS65.connect.append(connect66)

OrientationInterpolator64.IS = IS65

Group48.children.append(OrientationInterpolator64)
OrientationInterpolator67 = x3d.OrientationInterpolator()
OrientationInterpolator67.DEF = "L_KNEE_ANIMATOR"
OrientationInterpolator67.key = [0,0.3125,0.625,1]
OrientationInterpolator67.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.615228),(1, 0, 0, 0.984524),(1, 0, 0, 2.076941)]
IS68 = x3d.IS()
connect69 = x3d.connect()
connect69.nodeField = "value_changed"
connect69.protoField = "l_knee_rotation_changed"

IS68.connect.append(connect69)

OrientationInterpolator67.IS = IS68

Group48.children.append(OrientationInterpolator67)
OrientationInterpolator70 = x3d.OrientationInterpolator()
OrientationInterpolator70.DEF = "L_ANKLE_ANIMATOR"
OrientationInterpolator70.key = [0,0.3125,0.625,1]
OrientationInterpolator70.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.017453),(-1, 0, 0, 0.069812),(1, 0, 0, 0.261799)]
IS71 = x3d.IS()
connect72 = x3d.connect()
connect72.nodeField = "value_changed"
connect72.protoField = "l_ankle_rotation_changed"

IS71.connect.append(connect72)

OrientationInterpolator70.IS = IS71

Group48.children.append(OrientationInterpolator70)
"""no L_MIDTARSAL_ANIMATOR"""
OrientationInterpolator73 = x3d.OrientationInterpolator()
OrientationInterpolator73.DEF = "R_HIP_ANIMATOR"
OrientationInterpolator73.key = [0,0.3125,1]
OrientationInterpolator73.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.523598),(-1, 0, 0, 0.157079)]
IS74 = x3d.IS()
connect75 = x3d.connect()
connect75.nodeField = "value_changed"
connect75.protoField = "r_hip_rotation_changed"

IS74.connect.append(connect75)

OrientationInterpolator73.IS = IS74

Group48.children.append(OrientationInterpolator73)
OrientationInterpolator76 = x3d.OrientationInterpolator()
OrientationInterpolator76.DEF = "R_KNEE_ANIMATOR"
OrientationInterpolator76.key = [0,0.3125,0.625,1]
OrientationInterpolator76.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.349065),(1, 0, 0, 1.023397),(0.999934, 0.008043, 0.008185, 1.727938)]
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "value_changed"
connect78.protoField = "r_knee_rotation_changed"

IS77.connect.append(connect78)

OrientationInterpolator76.IS = IS77

Group48.children.append(OrientationInterpolator76)
OrientationInterpolator79 = x3d.OrientationInterpolator()
OrientationInterpolator79.DEF = "R_ANKLE_ANIMATOR"
OrientationInterpolator79.key = [0,0.3125,0.625,1]
OrientationInterpolator79.keyValue = [(1, 0, 0, 0),(-0.991692, -0.072372, 0.106338, 0.205053),(-0.981083, -0.103267, 0.163741, 0.272231),(-1, 0, 0, 0.349065)]
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.nodeField = "value_changed"
connect81.protoField = "r_ankle_rotation_changed"

IS80.connect.append(connect81)

OrientationInterpolator79.IS = IS80

Group48.children.append(OrientationInterpolator79)
"""no R_MIDTARSAL_ANIMATOR"""
OrientationInterpolator82 = x3d.OrientationInterpolator()
OrientationInterpolator82.DEF = "VL5_ANIMATOR"
OrientationInterpolator82.key = [0,1]
OrientationInterpolator82.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.174533)]
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.nodeField = "value_changed"
connect84.protoField = "vl5_rotation_changed"

IS83.connect.append(connect84)

OrientationInterpolator82.IS = IS83

Group48.children.append(OrientationInterpolator82)
"""no SKULLBASE_ANIMATOR"""
OrientationInterpolator85 = x3d.OrientationInterpolator()
OrientationInterpolator85.DEF = "L_SHOULDER_ANIMATOR"
OrientationInterpolator85.key = [0,0.3125,0.625,1]
OrientationInterpolator85.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.279252),(-1, 0, 0, 0.506145),(-1, 0, 0, 0.191986)]
IS86 = x3d.IS()
connect87 = x3d.connect()
connect87.nodeField = "value_changed"
connect87.protoField = "l_shoulder_rotation_changed"

IS86.connect.append(connect87)

OrientationInterpolator85.IS = IS86

Group48.children.append(OrientationInterpolator85)
OrientationInterpolator88 = x3d.OrientationInterpolator()
OrientationInterpolator88.DEF = "L_ELBOW_ANIMATOR"
OrientationInterpolator88.key = [0,0.3125,0.625,1]
OrientationInterpolator88.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.052359),(-1, 0, 0, 0.296706),(-1, 0, 0, 1.431169)]
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.nodeField = "value_changed"
connect90.protoField = "l_elbow_rotation_changed"

IS89.connect.append(connect90)

OrientationInterpolator88.IS = IS89

Group48.children.append(OrientationInterpolator88)
"""no L_WRIST_ANIMATOR"""
OrientationInterpolator91 = x3d.OrientationInterpolator()
OrientationInterpolator91.DEF = "R_SHOULDER_ANIMATOR"
OrientationInterpolator91.key = [0,0.3125,0.625,1]
OrientationInterpolator91.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.104719),(-1, 0, 0, 0.157079),(1, 0, 0, 0.314159)]
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.nodeField = "value_changed"
connect93.protoField = "r_shoulder_rotation_changed"

IS92.connect.append(connect93)

OrientationInterpolator91.IS = IS92

Group48.children.append(OrientationInterpolator91)
OrientationInterpolator94 = x3d.OrientationInterpolator()
OrientationInterpolator94.DEF = "R_ELBOW_ANIMATOR"
OrientationInterpolator94.key = [0,0.3125,0.625,1]
OrientationInterpolator94.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.837757),(-1, 0, 0, 1.239183),(-1, 0, 0, 1.500983)]
IS95 = x3d.IS()
connect96 = x3d.connect()
connect96.nodeField = "value_changed"
connect96.protoField = "r_elbow_rotation_changed"

IS95.connect.append(connect96)

OrientationInterpolator94.IS = IS95

Group48.children.append(OrientationInterpolator94)
"""no R_WRIST_ANIMATOR"""

ProtoBody47.children.append(Group48)
ROUTE97 = x3d.ROUTE()
ROUTE97.fromField = "fraction_changed"
ROUTE97.fromNode = "TIMER"
ROUTE97.toField = "set_fraction"
ROUTE97.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"

ProtoBody47.children.append(ROUTE97)
ROUTE98 = x3d.ROUTE()
ROUTE98.fromField = "fraction_changed"
ROUTE98.fromNode = "TIMER"
ROUTE98.toField = "set_fraction"
ROUTE98.toNode = "HUMANOIDROOT_ANIMATOR"

ProtoBody47.children.append(ROUTE98)
ROUTE99 = x3d.ROUTE()
ROUTE99.fromField = "fraction_changed"
ROUTE99.fromNode = "TIMER"
ROUTE99.toField = "set_fraction"
ROUTE99.toNode = "L_HIP_ANIMATOR"

ProtoBody47.children.append(ROUTE99)
ROUTE100 = x3d.ROUTE()
ROUTE100.fromField = "fraction_changed"
ROUTE100.fromNode = "TIMER"
ROUTE100.toField = "set_fraction"
ROUTE100.toNode = "L_KNEE_ANIMATOR"

ProtoBody47.children.append(ROUTE100)
ROUTE101 = x3d.ROUTE()
ROUTE101.fromField = "fraction_changed"
ROUTE101.fromNode = "TIMER"
ROUTE101.toField = "set_fraction"
ROUTE101.toNode = "L_ANKLE_ANIMATOR"

ProtoBody47.children.append(ROUTE101)
ROUTE102 = x3d.ROUTE()
ROUTE102.fromField = "fraction_changed"
ROUTE102.fromNode = "TIMER"
ROUTE102.toField = "set_fraction"
ROUTE102.toNode = "R_HIP_ANIMATOR"

ProtoBody47.children.append(ROUTE102)
ROUTE103 = x3d.ROUTE()
ROUTE103.fromField = "fraction_changed"
ROUTE103.fromNode = "TIMER"
ROUTE103.toField = "set_fraction"
ROUTE103.toNode = "R_KNEE_ANIMATOR"

ProtoBody47.children.append(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromField = "fraction_changed"
ROUTE104.fromNode = "TIMER"
ROUTE104.toField = "set_fraction"
ROUTE104.toNode = "R_ANKLE_ANIMATOR"

ProtoBody47.children.append(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.fromField = "fraction_changed"
ROUTE105.fromNode = "TIMER"
ROUTE105.toField = "set_fraction"
ROUTE105.toNode = "VL5_ANIMATOR"

ProtoBody47.children.append(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.fromField = "fraction_changed"
ROUTE106.fromNode = "TIMER"
ROUTE106.toField = "set_fraction"
ROUTE106.toNode = "L_SHOULDER_ANIMATOR"

ProtoBody47.children.append(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromField = "fraction_changed"
ROUTE107.fromNode = "TIMER"
ROUTE107.toField = "set_fraction"
ROUTE107.toNode = "L_ELBOW_ANIMATOR"

ProtoBody47.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromField = "fraction_changed"
ROUTE108.fromNode = "TIMER"
ROUTE108.toField = "set_fraction"
ROUTE108.toNode = "R_SHOULDER_ANIMATOR"

ProtoBody47.children.append(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.fromField = "fraction_changed"
ROUTE109.fromNode = "TIMER"
ROUTE109.toField = "set_fraction"
ROUTE109.toNode = "R_ELBOW_ANIMATOR"

ProtoBody47.children.append(ROUTE109)

ProtoDeclare19.ProtoBody = ProtoBody47

Scene17.children.append(ProtoDeclare19)
Anchor110 = x3d.Anchor()
Anchor110.description = "InterchangableActorsViaDynamicRouting"
Anchor110.parameter = ["target=_blank"]
Anchor110.url = ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]
Shape111 = x3d.Shape()
Text112 = x3d.Text()
Text112.string = ["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]
FontStyle113 = x3d.FontStyle()
FontStyle113.justify = ["MIDDLE","MIDDLE"]
FontStyle113.size = 0.8

Text112.fontStyle = FontStyle113

Shape111.geometry = Text112
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.diffuseColor = [1,1,0.2]

Appearance114.material = Material115

Shape111.appearance = Appearance114

Anchor110.children.append(Shape111)

Scene17.children.append(Anchor110)

X3D0.Scene = Scene17
f = open("../data/LOA1_KneelAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/LOA1_KneelAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/LOA1_KneelAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

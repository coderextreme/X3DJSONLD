import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("LOA1_KneelAnimation.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Humanoid animation prototype reusable by any Humanoid.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Tom Miller")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("Curt Blais")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translated")
meta6.setContent("1 December 2001")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("23 May 2020")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://www.HAnim.org")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("http://HAnim.org/Models")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("http://HAnim.org/Nodes")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("Nancy kneel Animation HAnim 2001")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setTitle("LOA1_KneelAnimation.x3d")

Scene17.addChildren(WorldInfo18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.setName("LOA1_KneelAnimation")
ProtoInterface20 = x3d.ProtoInterface()
field21 = x3d.field()
field21.setName("cycleInterval")
field21.setAccessType("inputOutput")
field21.setType("SFTime")
field21.setValue("2")

ProtoInterface20.addField(field21)
field22 = x3d.field()
field22.setName("enabled")
field22.setAccessType("inputOutput")
field22.setType("SFBool")
field22.setValue("true")

ProtoInterface20.addField(field22)
field23 = x3d.field()
field23.setName("loop")
field23.setAccessType("inputOutput")
field23.setType("SFBool")
field23.setValue("false")

ProtoInterface20.addField(field23)
field24 = x3d.field()
field24.setName("startTime")
field24.setAccessType("inputOutput")
field24.setType("SFTime")
field24.setValue("0")

ProtoInterface20.addField(field24)
field25 = x3d.field()
field25.setName("stopTime")
field25.setAccessType("inputOutput")
field25.setType("SFTime")
field25.setValue("-1")

ProtoInterface20.addField(field25)
field26 = x3d.field()
field26.setName("fraction_changed")
field26.setAccessType("outputOnly")
field26.setType("SFFloat")

ProtoInterface20.addField(field26)
field27 = x3d.field()
field27.setName("isActive")
field27.setAccessType("outputOnly")
field27.setType("SFBool")

ProtoInterface20.addField(field27)
field28 = x3d.field()
field28.setName("HumanoidRoot_translation_changed")
field28.setAccessType("outputOnly")
field28.setType("SFVec3f")

ProtoInterface20.addField(field28)
field29 = x3d.field()
field29.setName("HumanoidRoot_rotation_changed")
field29.setAccessType("outputOnly")
field29.setType("SFRotation")

ProtoInterface20.addField(field29)
field30 = x3d.field()
field30.setName("lower_body_rotation_changed")
field30.setAccessType("outputOnly")
field30.setType("SFRotation")

ProtoInterface20.addField(field30)
field31 = x3d.field()
field31.setName("l_hip_rotation_changed")
field31.setAccessType("outputOnly")
field31.setType("SFRotation")

ProtoInterface20.addField(field31)
field32 = x3d.field()
field32.setName("l_knee_rotation_changed")
field32.setAccessType("outputOnly")
field32.setType("SFRotation")

ProtoInterface20.addField(field32)
field33 = x3d.field()
field33.setName("l_ankle_rotation_changed")
field33.setAccessType("outputOnly")
field33.setType("SFRotation")

ProtoInterface20.addField(field33)
field34 = x3d.field()
field34.setName("l_midtarsal_rotation_changed")
field34.setAccessType("outputOnly")
field34.setType("SFRotation")

ProtoInterface20.addField(field34)
field35 = x3d.field()
field35.setName("r_hip_rotation_changed")
field35.setAccessType("outputOnly")
field35.setType("SFRotation")

ProtoInterface20.addField(field35)
field36 = x3d.field()
field36.setName("r_knee_rotation_changed")
field36.setAccessType("outputOnly")
field36.setType("SFRotation")

ProtoInterface20.addField(field36)
field37 = x3d.field()
field37.setName("r_ankle_rotation_changed")
field37.setAccessType("outputOnly")
field37.setType("SFRotation")

ProtoInterface20.addField(field37)
field38 = x3d.field()
field38.setName("r_midtarsal_rotation_changed")
field38.setAccessType("outputOnly")
field38.setType("SFRotation")

ProtoInterface20.addField(field38)
field39 = x3d.field()
field39.setName("vl5_rotation_changed")
field39.setAccessType("outputOnly")
field39.setType("SFRotation")

ProtoInterface20.addField(field39)
field40 = x3d.field()
field40.setName("skullbase_rotation_changed")
field40.setAccessType("outputOnly")
field40.setType("SFRotation")

ProtoInterface20.addField(field40)
field41 = x3d.field()
field41.setName("l_shoulder_rotation_changed")
field41.setAccessType("outputOnly")
field41.setType("SFRotation")

ProtoInterface20.addField(field41)
field42 = x3d.field()
field42.setName("l_elbow_rotation_changed")
field42.setAccessType("outputOnly")
field42.setType("SFRotation")

ProtoInterface20.addField(field42)
field43 = x3d.field()
field43.setName("l_wrist_rotation_changed")
field43.setAccessType("outputOnly")
field43.setType("SFRotation")

ProtoInterface20.addField(field43)
field44 = x3d.field()
field44.setName("r_shoulder_rotation_changed")
field44.setAccessType("outputOnly")
field44.setType("SFRotation")

ProtoInterface20.addField(field44)
field45 = x3d.field()
field45.setName("r_elbow_rotation_changed")
field45.setAccessType("outputOnly")
field45.setType("SFRotation")

ProtoInterface20.addField(field45)
field46 = x3d.field()
field46.setName("r_wrist_rotation_changed")
field46.setAccessType("outputOnly")
field46.setType("SFRotation")

ProtoInterface20.addField(field46)

ProtoDeclare19.setProtoInterface(ProtoInterface20)
ProtoBody47 = x3d.ProtoBody()
Group48 = x3d.Group()
TimeSensor49 = x3d.TimeSensor()
TimeSensor49.setDEF("TIMER")
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.setNodeField("cycleInterval")
connect51.setProtoField("cycleInterval")

IS50.addConnect(connect51)
connect52 = x3d.connect()
connect52.setNodeField("enabled")
connect52.setProtoField("enabled")

IS50.addConnect(connect52)
connect53 = x3d.connect()
connect53.setNodeField("loop")
connect53.setProtoField("loop")

IS50.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("startTime")
connect54.setProtoField("startTime")

IS50.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("stopTime")
connect55.setProtoField("stopTime")

IS50.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("fraction_changed")
connect56.setProtoField("fraction_changed")

IS50.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("isActive")
connect57.setProtoField("isActive")

IS50.addConnect(connect57)

TimeSensor49.setIS(IS50)

Group48.addChildren(TimeSensor49)
PositionInterpolator58 = x3d.PositionInterpolator()
PositionInterpolator58.setDEF("HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator58.setKey([0,0.3125,0.625,1])
PositionInterpolator58.setKeyValue([0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0])
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.setNodeField("value_changed")
connect60.setProtoField("HumanoidRoot_translation_changed")

IS59.addConnect(connect60)

PositionInterpolator58.setIS(IS59)

Group48.addChildren(PositionInterpolator58)
OrientationInterpolator61 = x3d.OrientationInterpolator()
OrientationInterpolator61.setDEF("HUMANOIDROOT_ANIMATOR")
OrientationInterpolator61.setKey([0,1])
OrientationInterpolator61.setKeyValue([0,1,0,0,0,1,0,0])
IS62 = x3d.IS()
connect63 = x3d.connect()
connect63.setNodeField("value_changed")
connect63.setProtoField("HumanoidRoot_rotation_changed")

IS62.addConnect(connect63)

OrientationInterpolator61.setIS(IS62)

Group48.addChildren(OrientationInterpolator61)
#no SACROILIAC_ANIMATOR
OrientationInterpolator64 = x3d.OrientationInterpolator()
OrientationInterpolator64.setDEF("L_HIP_ANIMATOR")
OrientationInterpolator64.setKey([0,0.3125,0.625,1])
OrientationInterpolator64.setKeyValue([1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315])
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.setNodeField("value_changed")
connect66.setProtoField("l_hip_rotation_changed")

IS65.addConnect(connect66)

OrientationInterpolator64.setIS(IS65)

Group48.addChildren(OrientationInterpolator64)
OrientationInterpolator67 = x3d.OrientationInterpolator()
OrientationInterpolator67.setDEF("L_KNEE_ANIMATOR")
OrientationInterpolator67.setKey([0,0.3125,0.625,1])
OrientationInterpolator67.setKeyValue([1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941])
IS68 = x3d.IS()
connect69 = x3d.connect()
connect69.setNodeField("value_changed")
connect69.setProtoField("l_knee_rotation_changed")

IS68.addConnect(connect69)

OrientationInterpolator67.setIS(IS68)

Group48.addChildren(OrientationInterpolator67)
OrientationInterpolator70 = x3d.OrientationInterpolator()
OrientationInterpolator70.setDEF("L_ANKLE_ANIMATOR")
OrientationInterpolator70.setKey([0,0.3125,0.625,1])
OrientationInterpolator70.setKeyValue([1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799])
IS71 = x3d.IS()
connect72 = x3d.connect()
connect72.setNodeField("value_changed")
connect72.setProtoField("l_ankle_rotation_changed")

IS71.addConnect(connect72)

OrientationInterpolator70.setIS(IS71)

Group48.addChildren(OrientationInterpolator70)
#no L_MIDTARSAL_ANIMATOR
OrientationInterpolator73 = x3d.OrientationInterpolator()
OrientationInterpolator73.setDEF("R_HIP_ANIMATOR")
OrientationInterpolator73.setKey([0,0.3125,1])
OrientationInterpolator73.setKeyValue([1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079])
IS74 = x3d.IS()
connect75 = x3d.connect()
connect75.setNodeField("value_changed")
connect75.setProtoField("r_hip_rotation_changed")

IS74.addConnect(connect75)

OrientationInterpolator73.setIS(IS74)

Group48.addChildren(OrientationInterpolator73)
OrientationInterpolator76 = x3d.OrientationInterpolator()
OrientationInterpolator76.setDEF("R_KNEE_ANIMATOR")
OrientationInterpolator76.setKey([0,0.3125,0.625,1])
OrientationInterpolator76.setKeyValue([1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938])
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.setNodeField("value_changed")
connect78.setProtoField("r_knee_rotation_changed")

IS77.addConnect(connect78)

OrientationInterpolator76.setIS(IS77)

Group48.addChildren(OrientationInterpolator76)
OrientationInterpolator79 = x3d.OrientationInterpolator()
OrientationInterpolator79.setDEF("R_ANKLE_ANIMATOR")
OrientationInterpolator79.setKey([0,0.3125,0.625,1])
OrientationInterpolator79.setKeyValue([1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065])
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.setNodeField("value_changed")
connect81.setProtoField("r_ankle_rotation_changed")

IS80.addConnect(connect81)

OrientationInterpolator79.setIS(IS80)

Group48.addChildren(OrientationInterpolator79)
#no R_MIDTARSAL_ANIMATOR
OrientationInterpolator82 = x3d.OrientationInterpolator()
OrientationInterpolator82.setDEF("VL5_ANIMATOR")
OrientationInterpolator82.setKey([0,1])
OrientationInterpolator82.setKeyValue([1,0,0,0,1,0,0,0.174533])
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.setNodeField("value_changed")
connect84.setProtoField("vl5_rotation_changed")

IS83.addConnect(connect84)

OrientationInterpolator82.setIS(IS83)

Group48.addChildren(OrientationInterpolator82)
#no SKULLBASE_ANIMATOR
OrientationInterpolator85 = x3d.OrientationInterpolator()
OrientationInterpolator85.setDEF("L_SHOULDER_ANIMATOR")
OrientationInterpolator85.setKey([0,0.3125,0.625,1])
OrientationInterpolator85.setKeyValue([1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986])
IS86 = x3d.IS()
connect87 = x3d.connect()
connect87.setNodeField("value_changed")
connect87.setProtoField("l_shoulder_rotation_changed")

IS86.addConnect(connect87)

OrientationInterpolator85.setIS(IS86)

Group48.addChildren(OrientationInterpolator85)
OrientationInterpolator88 = x3d.OrientationInterpolator()
OrientationInterpolator88.setDEF("L_ELBOW_ANIMATOR")
OrientationInterpolator88.setKey([0,0.3125,0.625,1])
OrientationInterpolator88.setKeyValue([1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169])
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.setNodeField("value_changed")
connect90.setProtoField("l_elbow_rotation_changed")

IS89.addConnect(connect90)

OrientationInterpolator88.setIS(IS89)

Group48.addChildren(OrientationInterpolator88)
#no L_WRIST_ANIMATOR
OrientationInterpolator91 = x3d.OrientationInterpolator()
OrientationInterpolator91.setDEF("R_SHOULDER_ANIMATOR")
OrientationInterpolator91.setKey([0,0.3125,0.625,1])
OrientationInterpolator91.setKeyValue([1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159])
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.setNodeField("value_changed")
connect93.setProtoField("r_shoulder_rotation_changed")

IS92.addConnect(connect93)

OrientationInterpolator91.setIS(IS92)

Group48.addChildren(OrientationInterpolator91)
OrientationInterpolator94 = x3d.OrientationInterpolator()
OrientationInterpolator94.setDEF("R_ELBOW_ANIMATOR")
OrientationInterpolator94.setKey([0,0.3125,0.625,1])
OrientationInterpolator94.setKeyValue([1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983])
IS95 = x3d.IS()
connect96 = x3d.connect()
connect96.setNodeField("value_changed")
connect96.setProtoField("r_elbow_rotation_changed")

IS95.addConnect(connect96)

OrientationInterpolator94.setIS(IS95)

Group48.addChildren(OrientationInterpolator94)
#no R_WRIST_ANIMATOR

ProtoBody47.addChildren(Group48)
ROUTE97 = x3d.ROUTE()
ROUTE97.setFromField("fraction_changed")
ROUTE97.setFromNode("TIMER")
ROUTE97.setToField("set_fraction")
ROUTE97.setToNode("HUMANOIDROOT_POSITION_ANIMATOR")

ProtoBody47.addChildren(ROUTE97)
ROUTE98 = x3d.ROUTE()
ROUTE98.setFromField("fraction_changed")
ROUTE98.setFromNode("TIMER")
ROUTE98.setToField("set_fraction")
ROUTE98.setToNode("HUMANOIDROOT_ANIMATOR")

ProtoBody47.addChildren(ROUTE98)
ROUTE99 = x3d.ROUTE()
ROUTE99.setFromField("fraction_changed")
ROUTE99.setFromNode("TIMER")
ROUTE99.setToField("set_fraction")
ROUTE99.setToNode("L_HIP_ANIMATOR")

ProtoBody47.addChildren(ROUTE99)
ROUTE100 = x3d.ROUTE()
ROUTE100.setFromField("fraction_changed")
ROUTE100.setFromNode("TIMER")
ROUTE100.setToField("set_fraction")
ROUTE100.setToNode("L_KNEE_ANIMATOR")

ProtoBody47.addChildren(ROUTE100)
ROUTE101 = x3d.ROUTE()
ROUTE101.setFromField("fraction_changed")
ROUTE101.setFromNode("TIMER")
ROUTE101.setToField("set_fraction")
ROUTE101.setToNode("L_ANKLE_ANIMATOR")

ProtoBody47.addChildren(ROUTE101)
ROUTE102 = x3d.ROUTE()
ROUTE102.setFromField("fraction_changed")
ROUTE102.setFromNode("TIMER")
ROUTE102.setToField("set_fraction")
ROUTE102.setToNode("R_HIP_ANIMATOR")

ProtoBody47.addChildren(ROUTE102)
ROUTE103 = x3d.ROUTE()
ROUTE103.setFromField("fraction_changed")
ROUTE103.setFromNode("TIMER")
ROUTE103.setToField("set_fraction")
ROUTE103.setToNode("R_KNEE_ANIMATOR")

ProtoBody47.addChildren(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.setFromField("fraction_changed")
ROUTE104.setFromNode("TIMER")
ROUTE104.setToField("set_fraction")
ROUTE104.setToNode("R_ANKLE_ANIMATOR")

ProtoBody47.addChildren(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.setFromField("fraction_changed")
ROUTE105.setFromNode("TIMER")
ROUTE105.setToField("set_fraction")
ROUTE105.setToNode("VL5_ANIMATOR")

ProtoBody47.addChildren(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.setFromField("fraction_changed")
ROUTE106.setFromNode("TIMER")
ROUTE106.setToField("set_fraction")
ROUTE106.setToNode("L_SHOULDER_ANIMATOR")

ProtoBody47.addChildren(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.setFromField("fraction_changed")
ROUTE107.setFromNode("TIMER")
ROUTE107.setToField("set_fraction")
ROUTE107.setToNode("L_ELBOW_ANIMATOR")

ProtoBody47.addChildren(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.setFromField("fraction_changed")
ROUTE108.setFromNode("TIMER")
ROUTE108.setToField("set_fraction")
ROUTE108.setToNode("R_SHOULDER_ANIMATOR")

ProtoBody47.addChildren(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.setFromField("fraction_changed")
ROUTE109.setFromNode("TIMER")
ROUTE109.setToField("set_fraction")
ROUTE109.setToNode("R_ELBOW_ANIMATOR")

ProtoBody47.addChildren(ROUTE109)

ProtoDeclare19.setProtoBody(ProtoBody47)

Scene17.addChildren(ProtoDeclare19)
Anchor110 = x3d.Anchor()
Anchor110.setDescription("InterchangableActorsViaDynamicRouting")
Anchor110.setParameter(["target=_blank"])
Anchor110.setUrl(["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"])
Shape111 = x3d.Shape()
Text112 = x3d.Text()
Text112.setString(["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."])
FontStyle113 = x3d.FontStyle()
FontStyle113.setJustify(["MIDDLE","MIDDLE"])
FontStyle113.setSize(0.8)

Text112.setFontStyle(FontStyle113)

Shape111.setGeometry(Text112)
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.setDiffuseColor([1,1,0.2])

Appearance114.setMaterial(Material115)

Shape111.setAppearance(Appearance114)

Anchor110.addChildren(Shape111)

Scene17.addChildren(Anchor110)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/LOA1_KneelAnimation.new.python.x3d")
X3D0.toFileJSON("../data/LOA1_KneelAnimation.new.python.json")

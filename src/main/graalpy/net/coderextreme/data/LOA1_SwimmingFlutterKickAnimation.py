import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("LOA1_SwimmingFlutterKickAnimation.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Humanoid animation prototype reusable by any Humanoid.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Etsuko Lippi")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("13 December 2001")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("23 May 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("warning")
meta7.setContent("not yet tested, need to compare with NancyDivingExample interpolators")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://www.HAnim.org")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("http://HAnim.org/Models")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://HAnim.org/Nodes")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("subject")
meta11.setContent("Swimming flutter kick Animation HAnim 2001")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.setTitle("LOA1_SwimmingFlutterKickAnimation.x3d")

Scene15.addChild(WorldInfo16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("LOA1_DivingAnimation")
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.setName("cycleInterval")
field19.setAccessType("inputOutput")
field19.setType("SFTime")
field19.setValue("7")

ProtoInterface18.addField(field19)
field20 = x3d.field()
field20.setName("enabled")
field20.setAccessType("inputOutput")
field20.setType("SFBool")
field20.setValue("true")

ProtoInterface18.addField(field20)
field21 = x3d.field()
field21.setName("loop")
field21.setAccessType("inputOutput")
field21.setType("SFBool")
field21.setValue("true")

ProtoInterface18.addField(field21)
field22 = x3d.field()
field22.setName("startTime")
field22.setAccessType("inputOutput")
field22.setType("SFTime")
field22.setValue("0")

ProtoInterface18.addField(field22)
field23 = x3d.field()
field23.setName("stopTime")
field23.setAccessType("inputOutput")
field23.setType("SFTime")
field23.setValue("-1")

ProtoInterface18.addField(field23)
field24 = x3d.field()
field24.setName("fraction_changed")
field24.setAccessType("outputOnly")
field24.setType("SFFloat")

ProtoInterface18.addField(field24)
field25 = x3d.field()
field25.setName("isActive")
field25.setAccessType("outputOnly")
field25.setType("SFBool")

ProtoInterface18.addField(field25)
field26 = x3d.field()
field26.setName("HumanoidRoot_translation_changed")
field26.setAccessType("outputOnly")
field26.setType("SFVec3f")

ProtoInterface18.addField(field26)
field27 = x3d.field()
field27.setName("HumanoidRoot_rotation_changed")
field27.setAccessType("outputOnly")
field27.setType("SFRotation")

ProtoInterface18.addField(field27)
field28 = x3d.field()
field28.setName("lower_body_rotation_changed")
field28.setAccessType("outputOnly")
field28.setType("SFRotation")

ProtoInterface18.addField(field28)
field29 = x3d.field()
field29.setName("l_hip_rotation_changed")
field29.setAccessType("outputOnly")
field29.setType("SFRotation")

ProtoInterface18.addField(field29)
field30 = x3d.field()
field30.setName("l_knee_rotation_changed")
field30.setAccessType("outputOnly")
field30.setType("SFRotation")

ProtoInterface18.addField(field30)
field31 = x3d.field()
field31.setName("l_ankle_rotation_changed")
field31.setAccessType("outputOnly")
field31.setType("SFRotation")

ProtoInterface18.addField(field31)
field32 = x3d.field()
field32.setName("l_midtarsal_rotation_changed")
field32.setAccessType("outputOnly")
field32.setType("SFRotation")

ProtoInterface18.addField(field32)
field33 = x3d.field()
field33.setName("r_hip_rotation_changed")
field33.setAccessType("outputOnly")
field33.setType("SFRotation")

ProtoInterface18.addField(field33)
field34 = x3d.field()
field34.setName("r_knee_rotation_changed")
field34.setAccessType("outputOnly")
field34.setType("SFRotation")

ProtoInterface18.addField(field34)
field35 = x3d.field()
field35.setName("r_ankle_rotation_changed")
field35.setAccessType("outputOnly")
field35.setType("SFRotation")

ProtoInterface18.addField(field35)
field36 = x3d.field()
field36.setName("r_midtarsal_rotation_changed")
field36.setAccessType("outputOnly")
field36.setType("SFRotation")

ProtoInterface18.addField(field36)
field37 = x3d.field()
field37.setName("vl5_rotation_changed")
field37.setAccessType("outputOnly")
field37.setType("SFRotation")

ProtoInterface18.addField(field37)
field38 = x3d.field()
field38.setName("skullbase_rotation_changed")
field38.setAccessType("outputOnly")
field38.setType("SFRotation")

ProtoInterface18.addField(field38)
field39 = x3d.field()
field39.setName("l_shoulder_rotation_changed")
field39.setAccessType("outputOnly")
field39.setType("SFRotation")

ProtoInterface18.addField(field39)
field40 = x3d.field()
field40.setName("l_elbow_rotation_changed")
field40.setAccessType("outputOnly")
field40.setType("SFRotation")

ProtoInterface18.addField(field40)
field41 = x3d.field()
field41.setName("l_wrist_rotation_changed")
field41.setAccessType("outputOnly")
field41.setType("SFRotation")

ProtoInterface18.addField(field41)
field42 = x3d.field()
field42.setName("r_shoulder_rotation_changed")
field42.setAccessType("outputOnly")
field42.setType("SFRotation")

ProtoInterface18.addField(field42)
field43 = x3d.field()
field43.setName("r_elbow_rotation_changed")
field43.setAccessType("outputOnly")
field43.setType("SFRotation")

ProtoInterface18.addField(field43)
field44 = x3d.field()
field44.setName("r_wrist_rotation_changed")
field44.setAccessType("outputOnly")
field44.setType("SFRotation")

ProtoInterface18.addField(field44)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody45 = x3d.ProtoBody()
Group46 = x3d.Group()
TimeSensor47 = x3d.TimeSensor()
TimeSensor47.setDEF("TIMER")
TimeSensor47.setLoop(True)
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.setNodeField("cycleInterval")
connect49.setProtoField("cycleInterval")

IS48.addConnect(connect49)
connect50 = x3d.connect()
connect50.setNodeField("enabled")
connect50.setProtoField("enabled")

IS48.addConnect(connect50)
connect51 = x3d.connect()
connect51.setNodeField("loop")
connect51.setProtoField("loop")

IS48.addConnect(connect51)
connect52 = x3d.connect()
connect52.setNodeField("startTime")
connect52.setProtoField("startTime")

IS48.addConnect(connect52)
connect53 = x3d.connect()
connect53.setNodeField("stopTime")
connect53.setProtoField("stopTime")

IS48.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("fraction_changed")
connect54.setProtoField("fraction_changed")

IS48.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("isActive")
connect55.setProtoField("isActive")

IS48.addConnect(connect55)

TimeSensor47.setIS(IS48)

Group46.addChild(TimeSensor47)
PositionInterpolator56 = x3d.PositionInterpolator()
PositionInterpolator56.setDEF("HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator56.setKey(x3d.doubleToFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]))
PositionInterpolator56.setKeyValue(x3d.doubleToFloat([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]))
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.setNodeField("value_changed")
connect58.setProtoField("HumanoidRoot_translation_changed")

IS57.addConnect(connect58)

PositionInterpolator56.setIS(IS57)

Group46.addChild(PositionInterpolator56)
OrientationInterpolator59 = x3d.OrientationInterpolator()
OrientationInterpolator59.setDEF("HUMANOIDROOT_ANIMATOR")
OrientationInterpolator59.setKey(x3d.doubleToFloat([0,1]))
OrientationInterpolator59.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0]))
IS60 = x3d.IS()
connect61 = x3d.connect()
connect61.setNodeField("value_changed")
connect61.setProtoField("HumanoidRoot_rotation_changed")

IS60.addConnect(connect61)

OrientationInterpolator59.setIS(IS60)

Group46.addChild(OrientationInterpolator59)

Group46.addComments(x3d.CommentsBlock('''no SACROILIAC_ANIMATOR'''))
OrientationInterpolator62 = x3d.OrientationInterpolator()
OrientationInterpolator62.setDEF("L_HIP_ANIMATOR")
OrientationInterpolator62.setKey(x3d.doubleToFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]))
OrientationInterpolator62.setKeyValue(x3d.doubleToFloat([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]))
IS63 = x3d.IS()
connect64 = x3d.connect()
connect64.setNodeField("value_changed")
connect64.setProtoField("l_hip_rotation_changed")

IS63.addConnect(connect64)

OrientationInterpolator62.setIS(IS63)

Group46.addChild(OrientationInterpolator62)
OrientationInterpolator65 = x3d.OrientationInterpolator()
OrientationInterpolator65.setDEF("L_KNEE_ANIMATOR")
OrientationInterpolator65.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator65.setKeyValue(x3d.doubleToFloat([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]))
IS66 = x3d.IS()
connect67 = x3d.connect()
connect67.setNodeField("value_changed")
connect67.setProtoField("l_knee_rotation_changed")

IS66.addConnect(connect67)

OrientationInterpolator65.setIS(IS66)

Group46.addChild(OrientationInterpolator65)
OrientationInterpolator68 = x3d.OrientationInterpolator()
OrientationInterpolator68.setDEF("L_ANKLE_ANIMATOR")
OrientationInterpolator68.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]))
OrientationInterpolator68.setKeyValue(x3d.doubleToFloat([1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]))
IS69 = x3d.IS()
connect70 = x3d.connect()
connect70.setNodeField("value_changed")
connect70.setProtoField("l_ankle_rotation_changed")

IS69.addConnect(connect70)

OrientationInterpolator68.setIS(IS69)

Group46.addChild(OrientationInterpolator68)

Group46.addComments(x3d.CommentsBlock('''no L_MIDTARSAL_ANIMATOR'''))
OrientationInterpolator71 = x3d.OrientationInterpolator()
OrientationInterpolator71.setDEF("R_HIP_ANIMATOR")
OrientationInterpolator71.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]))
OrientationInterpolator71.setKeyValue(x3d.doubleToFloat([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]))
IS72 = x3d.IS()
connect73 = x3d.connect()
connect73.setNodeField("value_changed")
connect73.setProtoField("r_hip_rotation_changed")

IS72.addConnect(connect73)

OrientationInterpolator71.setIS(IS72)

Group46.addChild(OrientationInterpolator71)
OrientationInterpolator74 = x3d.OrientationInterpolator()
OrientationInterpolator74.setDEF("R_KNEE_ANIMATOR")
OrientationInterpolator74.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]))
OrientationInterpolator74.setKeyValue(x3d.doubleToFloat([1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]))
IS75 = x3d.IS()
connect76 = x3d.connect()
connect76.setNodeField("value_changed")
connect76.setProtoField("r_knee_rotation_changed")

IS75.addConnect(connect76)

OrientationInterpolator74.setIS(IS75)

Group46.addChild(OrientationInterpolator74)
OrientationInterpolator77 = x3d.OrientationInterpolator()
OrientationInterpolator77.setDEF("R_ANKLE_ANIMATOR")
OrientationInterpolator77.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]))
OrientationInterpolator77.setKeyValue(x3d.doubleToFloat([1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]))
IS78 = x3d.IS()
connect79 = x3d.connect()
connect79.setNodeField("value_changed")
connect79.setProtoField("r_ankle_rotation_changed")

IS78.addConnect(connect79)

OrientationInterpolator77.setIS(IS78)

Group46.addChild(OrientationInterpolator77)

Group46.addComments(x3d.CommentsBlock('''no L_MIDTARSAL_ANIMATOR'''))
OrientationInterpolator80 = x3d.OrientationInterpolator()
OrientationInterpolator80.setDEF("VL5_ANIMATOR")
OrientationInterpolator80.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.75,0.8333,1]))
OrientationInterpolator80.setKeyValue(x3d.doubleToFloat([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]))
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.setNodeField("value_changed")
connect82.setProtoField("vl5_rotation_changed")

IS81.addConnect(connect82)

OrientationInterpolator80.setIS(IS81)

Group46.addChild(OrientationInterpolator80)
OrientationInterpolator83 = x3d.OrientationInterpolator()
OrientationInterpolator83.setDEF("SKULLBASE_ANIMATOR")
OrientationInterpolator83.setKey(x3d.doubleToFloat([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]))
OrientationInterpolator83.setKeyValue(x3d.doubleToFloat([-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]))
IS84 = x3d.IS()
connect85 = x3d.connect()
connect85.setNodeField("value_changed")
connect85.setProtoField("skullbase_rotation_changed")

IS84.addConnect(connect85)

OrientationInterpolator83.setIS(IS84)

Group46.addChild(OrientationInterpolator83)
OrientationInterpolator86 = x3d.OrientationInterpolator()
OrientationInterpolator86.setDEF("L_SHOULDER_ANIMATOR")
OrientationInterpolator86.setKey(x3d.doubleToFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]))
OrientationInterpolator86.setKeyValue(x3d.doubleToFloat([0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]))
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.setNodeField("value_changed")
connect88.setProtoField("l_shoulder_rotation_changed")

IS87.addConnect(connect88)

OrientationInterpolator86.setIS(IS87)

Group46.addChild(OrientationInterpolator86)
OrientationInterpolator89 = x3d.OrientationInterpolator()
OrientationInterpolator89.setDEF("L_ELBOW_ANIMATOR")
OrientationInterpolator89.setKey(x3d.doubleToFloat([0,0.28,0.32,0.64,0.76,1]))
OrientationInterpolator89.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]))
IS90 = x3d.IS()
connect91 = x3d.connect()
connect91.setNodeField("value_changed")
connect91.setProtoField("l_elbow_rotation_changed")

IS90.addConnect(connect91)

OrientationInterpolator89.setIS(IS90)

Group46.addChild(OrientationInterpolator89)
OrientationInterpolator92 = x3d.OrientationInterpolator()
OrientationInterpolator92.setDEF("L_WRIST_ANIMATOR")
OrientationInterpolator92.setKey(x3d.doubleToFloat([0,0.32,0.64,0.88,1]))
OrientationInterpolator92.setKeyValue(x3d.doubleToFloat([0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]))
IS93 = x3d.IS()
connect94 = x3d.connect()
connect94.setNodeField("value_changed")
connect94.setProtoField("l_wrist_rotation_changed")

IS93.addConnect(connect94)

OrientationInterpolator92.setIS(IS93)

Group46.addChild(OrientationInterpolator92)
OrientationInterpolator95 = x3d.OrientationInterpolator()
OrientationInterpolator95.setDEF("R_SHOULDER_ANIMATOR")
OrientationInterpolator95.setKey(x3d.doubleToFloat([0,0.45,0.64,0.76,0.88,1]))
OrientationInterpolator95.setKeyValue(x3d.doubleToFloat([0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]))
IS96 = x3d.IS()
connect97 = x3d.connect()
connect97.setNodeField("value_changed")
connect97.setProtoField("r_shoulder_rotation_changed")

IS96.addConnect(connect97)

OrientationInterpolator95.setIS(IS96)

Group46.addChild(OrientationInterpolator95)
OrientationInterpolator98 = x3d.OrientationInterpolator()
OrientationInterpolator98.setDEF("R_ELBOW_ANIMATOR")
OrientationInterpolator98.setKey(x3d.doubleToFloat([0,0.28,0.32,0.64,0.76,1]))
OrientationInterpolator98.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]))
IS99 = x3d.IS()
connect100 = x3d.connect()
connect100.setNodeField("value_changed")
connect100.setProtoField("r_elbow_rotation_changed")

IS99.addConnect(connect100)

OrientationInterpolator98.setIS(IS99)

Group46.addChild(OrientationInterpolator98)
OrientationInterpolator101 = x3d.OrientationInterpolator()
OrientationInterpolator101.setDEF("R_WRIST_ANIMATOR")
OrientationInterpolator101.setKey(x3d.doubleToFloat([0,0.28,0.32,0.64,0.76,1]))
OrientationInterpolator101.setKeyValue(x3d.doubleToFloat([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]))
IS102 = x3d.IS()
connect103 = x3d.connect()
connect103.setNodeField("value_changed")
connect103.setProtoField("r_wrist_rotation_changed")

IS102.addConnect(connect103)

OrientationInterpolator101.setIS(IS102)

Group46.addChild(OrientationInterpolator101)

ProtoBody45.addChild(Group46)
ROUTE104 = x3d.ROUTE()
ROUTE104.setFromField("fraction_changed")
ROUTE104.setFromNode("TIMER")
ROUTE104.setToField("set_fraction")
ROUTE104.setToNode("HUMANOIDROOT_POSITION_ANIMATOR")

ProtoBody45.addChild(ROUTE104)
ROUTE105 = x3d.ROUTE()
ROUTE105.setFromField("fraction_changed")
ROUTE105.setFromNode("TIMER")
ROUTE105.setToField("set_fraction")
ROUTE105.setToNode("HUMANOIDROOT_ANIMATOR")

ProtoBody45.addChild(ROUTE105)
ROUTE106 = x3d.ROUTE()
ROUTE106.setFromField("fraction_changed")
ROUTE106.setFromNode("TIMER")
ROUTE106.setToField("set_fraction")
ROUTE106.setToNode("SKULLBASE_ANIMATOR")

ProtoBody45.addChild(ROUTE106)
ROUTE107 = x3d.ROUTE()
ROUTE107.setFromField("fraction_changed")
ROUTE107.setFromNode("TIMER")
ROUTE107.setToField("set_fraction")
ROUTE107.setToNode("VL5_ANIMATOR")

ProtoBody45.addChild(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.setFromField("fraction_changed")
ROUTE108.setFromNode("TIMER")
ROUTE108.setToField("set_fraction")
ROUTE108.setToNode("L_HIP_ANIMATOR")

ProtoBody45.addChild(ROUTE108)
ROUTE109 = x3d.ROUTE()
ROUTE109.setFromField("fraction_changed")
ROUTE109.setFromNode("TIMER")
ROUTE109.setToField("set_fraction")
ROUTE109.setToNode("L_KNEE_ANIMATOR")

ProtoBody45.addChild(ROUTE109)
ROUTE110 = x3d.ROUTE()
ROUTE110.setFromField("fraction_changed")
ROUTE110.setFromNode("TIMER")
ROUTE110.setToField("set_fraction")
ROUTE110.setToNode("L_ANKLE_ANIMATOR")

ProtoBody45.addChild(ROUTE110)
ROUTE111 = x3d.ROUTE()
ROUTE111.setFromField("fraction_changed")
ROUTE111.setFromNode("TIMER")
ROUTE111.setToField("set_fraction")
ROUTE111.setToNode("R_HIP_ANIMATOR")

ProtoBody45.addChild(ROUTE111)
ROUTE112 = x3d.ROUTE()
ROUTE112.setFromField("fraction_changed")
ROUTE112.setFromNode("TIMER")
ROUTE112.setToField("set_fraction")
ROUTE112.setToNode("R_KNEE_ANIMATOR")

ProtoBody45.addChild(ROUTE112)
ROUTE113 = x3d.ROUTE()
ROUTE113.setFromField("fraction_changed")
ROUTE113.setFromNode("TIMER")
ROUTE113.setToField("set_fraction")
ROUTE113.setToNode("R_ANKLE_ANIMATOR")

ProtoBody45.addChild(ROUTE113)
ROUTE114 = x3d.ROUTE()
ROUTE114.setFromField("fraction_changed")
ROUTE114.setFromNode("TIMER")
ROUTE114.setToField("set_fraction")
ROUTE114.setToNode("L_SHOULDER_ANIMATOR")

ProtoBody45.addChild(ROUTE114)
ROUTE115 = x3d.ROUTE()
ROUTE115.setFromField("fraction_changed")
ROUTE115.setFromNode("TIMER")
ROUTE115.setToField("set_fraction")
ROUTE115.setToNode("L_ELBOW_ANIMATOR")

ProtoBody45.addChild(ROUTE115)
ROUTE116 = x3d.ROUTE()
ROUTE116.setFromField("fraction_changed")
ROUTE116.setFromNode("TIMER")
ROUTE116.setToField("set_fraction")
ROUTE116.setToNode("L_WRIST_ANIMATOR")

ProtoBody45.addChild(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.setFromField("fraction_changed")
ROUTE117.setFromNode("TIMER")
ROUTE117.setToField("set_fraction")
ROUTE117.setToNode("R_SHOULDER_ANIMATOR")

ProtoBody45.addChild(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.setFromField("fraction_changed")
ROUTE118.setFromNode("TIMER")
ROUTE118.setToField("set_fraction")
ROUTE118.setToNode("R_ELBOW_ANIMATOR")

ProtoBody45.addChild(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.setFromField("fraction_changed")
ROUTE119.setFromNode("TIMER")
ROUTE119.setToField("set_fraction")
ROUTE119.setToNode("R_WRIST_ANIMATOR")

ProtoBody45.addChild(ROUTE119)

ProtoDeclare17.setProtoBody(ProtoBody45)

Scene15.addChild(ProtoDeclare17)
Viewpoint120 = x3d.Viewpoint()
Viewpoint120.setDescription("LOA1_SwimmingFlutterKickAnimation scene")
Viewpoint120.setPosition(x3d.doubleToFloat([0,0,12]))

Scene15.addChild(Viewpoint120)
Anchor121 = x3d.Anchor()
Anchor121.setDescription("Nancy Diving")
Anchor121.setParameter(["target=_blank"])
Anchor121.setUrl(["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"])
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.setString(["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."])
FontStyle124 = x3d.FontStyle()
FontStyle124.setJustify(["MIDDLE","MIDDLE"])
FontStyle124.setSize(0.8)

Text123.setFontStyle(FontStyle124)

Shape122.setGeometry(Text123)
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.setDiffuseColor(x3d.doubleToFloat([1,1,0.2]))

Appearance125.setMaterial(Material126)

Shape122.setAppearance(Appearance125)

Anchor121.addChild(Shape122)

Scene15.addChild(Anchor121)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/LOA1_SwimmingFlutterKickAnimation.new.graalpy.x3d")
X3D0.toFileJSON("../data/LOA1_SwimmingFlutterKickAnimation.new.graalpy.json")

import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("HAnimPosePrototype.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("info")
meta4.setContent("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("2 October 2025")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("14 December 2025")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("Don Brutzman")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("Joe Williams")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("contributor")
meta9.setContent("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnimPosePrototype.console.txt")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("MovingImage")
meta11.setContent("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("Image")
meta12.setContent("HAnimPoseExampleTouchDown.png")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("Image")
meta13.setContent("HAnimPoseExampleTouchDownFaceLeftAPose.png")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("Image")
meta14.setContent("images/HAnimPoseExampleBoxMan1.png")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("Image")
meta15.setContent("images/HAnimPoseExampleBoxMan2.png")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("Image")
meta16.setContent("images/HAnimPoseExampleJoeKick.png")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("Image")
meta17.setContent("images/HAnimPoseExampleJoeSkeletonSkinSite.png")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("Image")
meta18.setContent("images/HAnimPoseExampleKoreanCharacter01Jin.png")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Image")
meta19.setContent("images/HAnimPoseExampleKoreanCharacter02Chul.png")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("images/HAnimPoseExampleKoreanCharacter03Hyun.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("images/HAnimPoseExampleKoreanCharacter04Young.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("Image")
meta22.setContent("images/HAnimPoseExampleKoreanCharacter05Ju.png")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("images/HAnimPoseExampleKoreanCharacter06Ga.png")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("Image")
meta24.setContent("images/HAnimPoseExampleKoreanCharacter07No.png")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("Image")
meta25.setContent("images/HAnimPoseExampleKoreanCharacter08Da.png")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("Image")
meta26.setContent("images/HAnimPoseExampleKoreanCharacter09Ru.png")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("Image")
meta27.setContent("images/HAnimPoseExampleKoreanCharacter10Mi.png")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("Image")
meta28.setContent("images/HAnimPoseExampleKoreanCharacter11Min.png")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("Image")
meta29.setContent("images/HAnimPoseExampleKoreanCharacter12Sun.png")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("specificationSection")
meta30.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("specificationUrl")
meta31.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose")

head1.addMeta(meta31)
meta32 = x3d.meta()
meta32.setName("specificationSection")
meta32.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures")

head1.addMeta(meta32)
meta33 = x3d.meta()
meta33.setName("specificationUrl")
meta33.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures")

head1.addMeta(meta33)
meta34 = x3d.meta()
meta34.setName("specificationSection")
meta34.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses")

head1.addMeta(meta34)
meta35 = x3d.meta()
meta35.setName("specificationUrl")
meta35.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses")

head1.addMeta(meta35)
meta36 = x3d.meta()
meta36.setName("reference")
meta36.setContent("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript")

head1.addMeta(meta36)
meta37 = x3d.meta()
meta37.setName("reference")
meta37.setContent("earlier version of this prototype: originals/HAnimPosePreliminary.x3d")

head1.addMeta(meta37)
meta38 = x3d.meta()
meta38.setName("generator")
meta38.setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta38)
meta39 = x3d.meta()
meta39.setName("generator")
meta39.setContent("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize")

head1.addMeta(meta39)
meta40 = x3d.meta()
meta40.setName("identifier")
meta40.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d")

head1.addMeta(meta40)
meta41 = x3d.meta()
meta41.setName("license")
meta41.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta41)

X3D0.setHead(head1)
Scene42 = x3d.Scene()
WorldInfo43 = x3d.WorldInfo()
WorldInfo43.setDEF("ModelInfo")
WorldInfo43.setInfo(["Design to illustrate a potential HAnimPose node"])
WorldInfo43.setTitle("HAnimPosePrototype.x3d")

Scene42.addChild(WorldInfo43)
Background44 = x3d.Background()
Background44.setSkyColor(x3d.doubleToFloat([0.8,0.8,1]))

Scene42.addChild(Background44)
NavigationInfo45 = x3d.NavigationInfo()

Scene42.addChild(NavigationInfo45)
Group46 = x3d.Group()
Group46.setDEF("HandleInlineLoading")

Group46.addComments(x3d.CommentsBlock("""Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"""))

Group46.addComments(x3d.CommentsBlock("""Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"""))
Inline47 = x3d.Inline()
Inline47.setDEF("HumanoidInline")
Inline47.setDescription("remote HAnimHumanoid for IMPORT")
Inline47.setUrl(["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"])

Group46.addChild(Inline47)

Group46.addComments(x3d.CommentsBlock("""Note that the following importedDEF must match the EXPORT name found in remote file"""))
IMPORT48 = x3d.IMPORT()
IMPORT48.setAS("HumanoidImported")
IMPORT48.setImportedDEF("BoxMan2")
IMPORT48.setInlineDEF("HumanoidInline")

Group46.addChild(IMPORT48)
LoadSensor49 = x3d.LoadSensor()
LoadSensor49.setDEF("HumanoidInlineLoadSensor")
LoadSensor49.setTimeOut(2)
Inline50 = x3d.Inline()
Inline50.setUSE("HumanoidInline")

LoadSensor49.addChild(Inline50)

Group46.addChild(LoadSensor49)

Scene42.addChild(Group46)
ProtoDeclare51 = x3d.ProtoDeclare()
ProtoDeclare51.setName("HAnimPose")
ProtoDeclare51.setAppinfo("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.")
ProtoInterface52 = x3d.ProtoInterface()
field53 = x3d.field()
field53.setName("parentHAnimHumanoid")
field53.setAccessType("inputOutput")
field53.setAppinfo("HAnimHumanoid for this Pose to act upon")
field53.setType("SFNode")

field53.addComments(x3d.CommentsBlock("""HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation"""))

ProtoInterface52.addField(field53)
field54 = x3d.field()
field54.setName("name")
field54.setAccessType("inputOutput")
field54.setAppinfo("name of this pose")
field54.setType("SFString")
field54.setValue("newPoseName")

ProtoInterface52.addField(field54)
field55 = x3d.field()
field55.setName("children")
field55.setAccessType("inputOutput")
field55.setAppinfo("joint values to apply to HAnimHumanoid")
field55.setType("MFNode")

field55.addComments(x3d.CommentsBlock("""initializating Joint nodes (if any) go here"""))

ProtoInterface52.addField(field55)
field56 = x3d.field()
field56.setName("description")
field56.setAccessType("inputOutput")
field56.setAppinfo("explanation of purpose")
field56.setType("SFString")

ProtoInterface52.addField(field56)
field57 = x3d.field()
field57.setName("enabled")
field57.setAccessType("inputOutput")
field57.setAppinfo("default value true")
field57.setType("SFBool")
field57.setValue("true")

ProtoInterface52.addField(field57)
field58 = x3d.field()
field58.setName("loa")
field58.setAccessType("initializeOnly")
field58.setAppinfo("default is no loa")
field58.setType("SFInt32")
field58.setValue("-1")

ProtoInterface52.addField(field58)
field59 = x3d.field()
field59.setName("transitionDuration")
field59.setAccessType("inputOutput")
field59.setAppinfo("how many seconds to achieve the pose")
field59.setType("SFTime")
field59.setValue("0")

ProtoInterface52.addField(field59)
field60 = x3d.field()
field60.setName("metadata")
field60.setAccessType("inputOutput")
field60.setAppinfo("single Metadata* node")
field60.setType("SFNode")

ProtoInterface52.addField(field60)
field61 = x3d.field()
field61.setName("isActive")
field61.setAccessType("outputOnly")
field61.setAppinfo("event indicating when pose transition is active")
field61.setType("SFBool")

ProtoInterface52.addField(field61)
field62 = x3d.field()
field62.setName("commencePose")
field62.setAccessType("inputOnly")
field62.setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")
field62.setType("SFBool")

ProtoInterface52.addField(field62)
field63 = x3d.field()
field63.setName("resetAllJoints")
field63.setAccessType("inputOnly")
field63.setAppinfo("reset the skeleton to I pose with all joints zeroed")
field63.setType("SFBool")

ProtoInterface52.addField(field63)
field64 = x3d.field()
field64.setName("set_fraction")
field64.setAccessType("inputOnly")
field64.setAppinfo("allows transition to proceed incrementally from fraction [0..10")
field64.setType("SFFloat")

ProtoInterface52.addField(field64)
field65 = x3d.field()
field65.setName("set_startTime")
field65.setAccessType("inputOnly")
field65.setAppinfo("starts the animation clock")
field65.setType("SFTime")

ProtoInterface52.addField(field65)
field66 = x3d.field()
field66.setName("isLoaded")
field66.setAccessType("inputOnly")
field66.setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")
field66.setType("SFBool")

ProtoInterface52.addField(field66)
field67 = x3d.field()
field67.setName("traceEnabled")
field67.setAccessType("inputOutput")
field67.setAppinfo("debug trace to Browser output console this is a local prototype field")
field67.setType("SFBool")
field67.setValue("true")

ProtoInterface52.addField(field67)

ProtoDeclare51.setProtoInterface(ProtoInterface52)
ProtoBody68 = x3d.ProtoBody()
TimeSensor69 = x3d.TimeSensor()
TimeSensor69.setDEF("ClockTimeSensor")
TimeSensor69.setDescription("control timing of pose animation when triggered")
IS70 = x3d.IS()
connect71 = x3d.connect()
connect71.setNodeField("enabled")
connect71.setProtoField("enabled")

IS70.addConnect(connect71)
connect72 = x3d.connect()
connect72.setNodeField("cycleInterval")
connect72.setProtoField("transitionDuration")

IS70.addConnect(connect72)
connect73 = x3d.connect()
connect73.setNodeField("isActive")
connect73.setProtoField("isActive")

IS70.addConnect(connect73)
connect74 = x3d.connect()
connect74.setNodeField("startTime")
connect74.setProtoField("set_startTime")

IS70.addConnect(connect74)
connect75 = x3d.connect()
connect75.setNodeField("metadata")
connect75.setProtoField("metadata")

IS70.addConnect(connect75)

TimeSensor69.setIS(IS70)

ProtoBody68.addChild(TimeSensor69)
TimeSensor76 = x3d.TimeSensor()
TimeSensor76.setDEF("ResetTimeSensor")
TimeSensor76.setDescription("control timing of skeleton reset to \"A\" pose when triggered")
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.setNodeField("enabled")
connect78.setProtoField("enabled")

IS77.addConnect(connect78)
connect79 = x3d.connect()
connect79.setNodeField("cycleInterval")
connect79.setProtoField("transitionDuration")

IS77.addConnect(connect79)
connect80 = x3d.connect()
connect80.setNodeField("startTime")
connect80.setProtoField("set_startTime")

IS77.addConnect(connect80)

IS77.addComments(x3d.CommentsBlock("""no need to report isActive since that would be duplicative"""))

TimeSensor76.setIS(IS77)

ProtoBody68.addChild(TimeSensor76)
Group81 = x3d.Group()
Group81.setDEF("PoseInterpolatorGroup")

Group81.addComments(x3d.CommentsBlock("""interpolators generated by prototype script appear here at runtime"""))

ProtoBody68.addChild(Group81)
Group82 = x3d.Group()
Group82.setDEF("ResetInterpolatorGroup")

Group82.addComments(x3d.CommentsBlock("""interpolators generated by prototype script appear here at runtime"""))

ProtoBody68.addChild(Group82)
Script83 = x3d.Script()
Script83.setDEF("HAnimPoseScript")
Script83.setDirectOutput(True)
Script83.setUrl(["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"])
field84 = x3d.field()
field84.setName("parentHAnimHumanoid")
field84.setAccessType("inputOutput")
field84.setAppinfo("Humanoid for this Pose to act upon")
field84.setType("SFNode")

field84.addComments(x3d.CommentsBlock("""initialization node (if any) goes here"""))

Script83.addField(field84)
field85 = x3d.field()
field85.setName("name")
field85.setAccessType("inputOutput")
field85.setAppinfo("name of this pose")
field85.setType("SFString")

Script83.addField(field85)
field86 = x3d.field()
field86.setName("loa")
field86.setAccessType("initializeOnly")
field86.setAppinfo("default is no loa")
field86.setType("SFInt32")

Script83.addField(field86)
field87 = x3d.field()
field87.setName("description")
field87.setAccessType("inputOutput")
field87.setAppinfo("explanation of purpose")
field87.setType("SFString")

Script83.addField(field87)
field88 = x3d.field()
field88.setName("enabled")
field88.setAccessType("inputOutput")
field88.setAppinfo("default value true")
field88.setType("SFBool")

Script83.addField(field88)
field89 = x3d.field()
field89.setName("resetAllJoints")
field89.setAccessType("inputOnly")
field89.setAppinfo("reset the skeleton to I pose with all joints zeroed")
field89.setType("SFBool")

Script83.addField(field89)
field90 = x3d.field()
field90.setName("children")
field90.setAccessType("inputOutput")
field90.setAppinfo("joint values to apply to HAnimHumanoid")
field90.setType("MFNode")

field90.addComments(x3d.CommentsBlock("""initializating Joint nodes (if any) go here"""))

Script83.addField(field90)
field91 = x3d.field()
field91.setName("transitionDuration")
field91.setAccessType("inputOutput")
field91.setAppinfo("how many seconds to achieve the pose")
field91.setType("SFTime")

Script83.addField(field91)
field92 = x3d.field()
field92.setName("commencePose")
field92.setAccessType("inputOnly")
field92.setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")
field92.setType("SFBool")

Script83.addField(field92)
field93 = x3d.field()
field93.setName("set_fraction")
field93.setAccessType("inputOnly")
field93.setAppinfo("allows transition to proceed incrementally from fraction [0..10")
field93.setType("SFFloat")

Script83.addField(field93)
field94 = x3d.field()
field94.setName("set_startTime")
field94.setAccessType("inputOnly")
field94.setAppinfo("starts the animation clock")
field94.setType("SFTime")

Script83.addField(field94)
field95 = x3d.field()
field95.setName("isLoaded")
field95.setAccessType("inputOnly")
field95.setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")
field95.setType("SFBool")

Script83.addField(field95)
field96 = x3d.field()
field96.setName("traceEnabled")
field96.setAccessType("inputOutput")
field96.setAppinfo("debug trace to Browser output console")
field96.setType("SFBool")

Script83.addField(field96)
field97 = x3d.field()
field97.setName("numberPoseJoints")
field97.setAccessType("initializeOnly")
field97.setAppinfo("number of joints found in children field")
field97.setType("SFInt32")
field97.setValue("0")

Script83.addField(field97)
field98 = x3d.field()
field98.setName("numberSkeletonJoints")
field98.setAccessType("initializeOnly")
field98.setAppinfo("number of joints found in Humanoid")
field98.setType("SFInt32")
field98.setValue("0")

Script83.addField(field98)
field99 = x3d.field()
field99.setName("jointOrientationInterpolators")
field99.setAccessType("initializeOnly")
field99.setAppinfo("OrientationInterpolator node array matching number of children")
field99.setType("MFNode")

field99.addComments(x3d.CommentsBlock("""initializating Joint nodes (if any) go here"""))

Script83.addField(field99)
IS100 = x3d.IS()
connect101 = x3d.connect()
connect101.setNodeField("parentHAnimHumanoid")
connect101.setProtoField("parentHAnimHumanoid")

IS100.addConnect(connect101)
connect102 = x3d.connect()
connect102.setNodeField("name")
connect102.setProtoField("name")

IS100.addConnect(connect102)
connect103 = x3d.connect()
connect103.setNodeField("loa")
connect103.setProtoField("loa")

IS100.addConnect(connect103)
connect104 = x3d.connect()
connect104.setNodeField("description")
connect104.setProtoField("description")

IS100.addConnect(connect104)
connect105 = x3d.connect()
connect105.setNodeField("enabled")
connect105.setProtoField("enabled")

IS100.addConnect(connect105)
connect106 = x3d.connect()
connect106.setNodeField("resetAllJoints")
connect106.setProtoField("resetAllJoints")

IS100.addConnect(connect106)
connect107 = x3d.connect()
connect107.setNodeField("children")
connect107.setProtoField("children")

IS100.addConnect(connect107)
connect108 = x3d.connect()
connect108.setNodeField("transitionDuration")
connect108.setProtoField("transitionDuration")

IS100.addConnect(connect108)
connect109 = x3d.connect()
connect109.setNodeField("commencePose")
connect109.setProtoField("commencePose")

IS100.addConnect(connect109)
connect110 = x3d.connect()
connect110.setNodeField("set_fraction")
connect110.setProtoField("set_fraction")

IS100.addConnect(connect110)
connect111 = x3d.connect()
connect111.setNodeField("set_startTime")
connect111.setProtoField("set_startTime")

IS100.addConnect(connect111)
connect112 = x3d.connect()
connect112.setNodeField("isLoaded")
connect112.setProtoField("isLoaded")

IS100.addConnect(connect112)
connect113 = x3d.connect()
connect113.setNodeField("traceEnabled")
connect113.setProtoField("traceEnabled")

IS100.addConnect(connect113)

Script83.setIS(IS100)

ProtoBody68.addChild(Script83)

ProtoDeclare51.setProtoBody(ProtoBody68)

Scene42.addChild(ProtoDeclare51)
Viewpoint114 = x3d.Viewpoint()
Viewpoint114.setDescription("HAnimPose for HumanoidInline IMPORT model")
Viewpoint114.setPosition(x3d.doubleToFloat([0,1,4]))

Scene42.addChild(Viewpoint114)

Scene42.addComments(x3d.CommentsBlock("""no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."""))
ProtoInstance115 = x3d.ProtoInstance()
ProtoInstance115.setName("HAnimPose")
ProtoInstance115.setDEF("T_Pose")
fieldValue116 = x3d.fieldValue()
fieldValue116.setName("name")
fieldValue116.setValue("T")

ProtoInstance115.addFieldValue(fieldValue116)
fieldValue117 = x3d.fieldValue()
fieldValue117.setName("enabled")
fieldValue117.setValue("true")

ProtoInstance115.addFieldValue(fieldValue117)
fieldValue118 = x3d.fieldValue()
fieldValue118.setName("parentHAnimHumanoid")

fieldValue118.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))

fieldValue118.addComments(x3d.CommentsBlock("""debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>"""))
HAnimHumanoid119 = x3d.HAnimHumanoid()
HAnimHumanoid119.setUSE("HumanoidImported")

fieldValue118.addChild(HAnimHumanoid119)

ProtoInstance115.addFieldValue(fieldValue118)
fieldValue120 = x3d.fieldValue()
fieldValue120.setName("loa")
fieldValue120.setValue("1")

ProtoInstance115.addFieldValue(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("description")
fieldValue121.setValue("arms stretched outward and level similar to letter T")

ProtoInstance115.addFieldValue(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("children")
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("l_shoulder")
HAnimJoint123.setDEF("PoseJoint_l_shoulder_1")
HAnimJoint123.setDescription("left shoulder")
HAnimJoint123.setRotation(x3d.doubleToFloat([0,0,1,1.57]))
HAnimJoint123.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint123.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue122.addChild(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.setName("r_shoulder")
HAnimJoint124.setDEF("PoseJoint_r_shoulder_1")
HAnimJoint124.setDescription("right shoulder")
HAnimJoint124.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
HAnimJoint124.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint124.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue122.addChild(HAnimJoint124)

fieldValue122.addComments(x3d.CommentsBlock("""test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/"""))

ProtoInstance115.addFieldValue(fieldValue122)
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("transitionDuration")
fieldValue125.setValue("1.3")

ProtoInstance115.addFieldValue(fieldValue125)

Scene42.addChild(ProtoInstance115)
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.setName("HAnimPose")
ProtoInstance126.setDEF("A_Pose")
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("name")
fieldValue127.setValue("A")

ProtoInstance126.addFieldValue(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("enabled")
fieldValue128.setValue("true")

ProtoInstance126.addFieldValue(fieldValue128)
fieldValue129 = x3d.fieldValue()
fieldValue129.setName("parentHAnimHumanoid")

fieldValue129.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid130 = x3d.HAnimHumanoid()
HAnimHumanoid130.setUSE("HumanoidImported")

fieldValue129.addChild(HAnimHumanoid130)

ProtoInstance126.addFieldValue(fieldValue129)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("loa")
fieldValue131.setValue("1")

ProtoInstance126.addFieldValue(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.setName("description")
fieldValue132.setValue("arms stretched outward and downward similar to letter A")

ProtoInstance126.addFieldValue(fieldValue132)
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("children")
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.setName("l_shoulder")
HAnimJoint134.setDEF("PoseJoint_l_shoulder")
HAnimJoint134.setDescription("left shoulder")
HAnimJoint134.setRotation(x3d.doubleToFloat([0,0,1,0.5]))
HAnimJoint134.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint134.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue133.addChild(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.setName("r_shoulder")
HAnimJoint135.setDEF("PoseJoint_r_shoulder")
HAnimJoint135.setDescription("right shoulder")
HAnimJoint135.setRotation(x3d.doubleToFloat([0,0,-1,0.5]))
HAnimJoint135.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint135.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue133.addChild(HAnimJoint135)

ProtoInstance126.addFieldValue(fieldValue133)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("transitionDuration")
fieldValue136.setValue("1.2")

ProtoInstance126.addFieldValue(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("traceEnabled")
fieldValue137.setValue("true")

ProtoInstance126.addFieldValue(fieldValue137)

Scene42.addChild(ProtoInstance126)
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.setName("HAnimPose")
ProtoInstance138.setDEF("TouchDown_Pose")

ProtoInstance138.addComments(x3d.CommentsBlock("""thanks Joe"""))
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("name")
fieldValue139.setValue("TouchDown")

ProtoInstance138.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("enabled")
fieldValue140.setValue("true")

ProtoInstance138.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("parentHAnimHumanoid")

fieldValue141.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid142 = x3d.HAnimHumanoid()
HAnimHumanoid142.setUSE("HumanoidImported")

fieldValue141.addChild(HAnimHumanoid142)

ProtoInstance138.addFieldValue(fieldValue141)
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("loa")
fieldValue143.setValue("1")

ProtoInstance138.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("description")
fieldValue144.setValue("arms and legs stretched outward providing a TouchDown gesture")

ProtoInstance138.addFieldValue(fieldValue144)
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("children")
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.setName("humanoid_root")
HAnimJoint146.setRotation(x3d.doubleToFloat([0,1,0,-0.698132]))
HAnimJoint146.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint146.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.setName("l_hip")
HAnimJoint147.setRotation(x3d.doubleToFloat([-1,1,1,1]))
HAnimJoint147.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint147.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("l_knee")
HAnimJoint148.setRotation(x3d.doubleToFloat([1,0,0,1]))
HAnimJoint148.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint148.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setName("l_talocrural")
HAnimJoint149.setRotation(x3d.doubleToFloat([-0.2,0,0.1,0.225]))
HAnimJoint149.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint149.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setName("r_hip")
HAnimJoint150.setRotation(x3d.doubleToFloat([-1,-1,-1,1]))
HAnimJoint150.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint150.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setName("r_knee")
HAnimJoint151.setRotation(x3d.doubleToFloat([1,0,0,1]))
HAnimJoint151.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint151.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("r_talocrural")
HAnimJoint152.setRotation(x3d.doubleToFloat([-0.2,0,0.1,0.25]))
HAnimJoint152.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint152.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("vl5")
HAnimJoint153.setRotation(x3d.doubleToFloat([0,0,0.01,0.2]))
HAnimJoint153.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint153.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setName("vt10")
HAnimJoint154.setRotation(x3d.doubleToFloat([0,0,0.01,0.1]))
HAnimJoint154.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint154.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.setName("vc4")
HAnimJoint155.setRotation(x3d.doubleToFloat([0,0,-0.01,0.15]))
HAnimJoint155.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint155.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.setName("l_shoulder")
HAnimJoint156.setRotation(x3d.doubleToFloat([-1,0.5,1,2]))
HAnimJoint156.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint156.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setName("l_elbow")
HAnimJoint157.setRotation(x3d.doubleToFloat([-1,0,0,1]))
HAnimJoint157.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint157.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setName("l_radiocarpal")
HAnimJoint158.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint158.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("r_shoulder")
HAnimJoint159.setRotation(x3d.doubleToFloat([-1,-0.5,-1,2.6]))
HAnimJoint159.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint159.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.setName("r_elbow")
HAnimJoint160.setRotation(x3d.doubleToFloat([-1,0,0,1]))
HAnimJoint160.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint160.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("r_radiocarpal")
HAnimJoint161.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint161.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue145.addChild(HAnimJoint161)

ProtoInstance138.addFieldValue(fieldValue145)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("transitionDuration")
fieldValue162.setValue("1.2")

ProtoInstance138.addFieldValue(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("traceEnabled")
fieldValue163.setValue("true")

ProtoInstance138.addFieldValue(fieldValue163)

Scene42.addChild(ProtoInstance138)
ProtoInstance164 = x3d.ProtoInstance()
ProtoInstance164.setName("HAnimPose")
ProtoInstance164.setDEF("I_Pose")
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("name")
fieldValue165.setValue("I")

ProtoInstance164.addFieldValue(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("enabled")
fieldValue166.setValue("true")

ProtoInstance164.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("parentHAnimHumanoid")

fieldValue167.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid168 = x3d.HAnimHumanoid()
HAnimHumanoid168.setUSE("HumanoidImported")

fieldValue167.addChild(HAnimHumanoid168)

ProtoInstance164.addFieldValue(fieldValue167)
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("loa")
fieldValue169.setValue("1")

ProtoInstance164.addFieldValue(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("description")
fieldValue170.setValue("arms and legs straight down default binding pose for baseline Humanoid")

ProtoInstance164.addFieldValue(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("children")

fieldValue171.addComments(x3d.CommentsBlock("""not defining any children equals the default \"I\" pose"""))

ProtoInstance164.addFieldValue(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("transitionDuration")
fieldValue172.setValue("1.5")

ProtoInstance164.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("traceEnabled")
fieldValue173.setValue("true")

ProtoInstance164.addFieldValue(fieldValue173)

Scene42.addChild(ProtoInstance164)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("HAnimPose")
ProtoInstance174.setDEF("H_Pose")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("H")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("enabled")
fieldValue176.setValue("false")

ProtoInstance174.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("description")
fieldValue177.setValue("TODO experimental pose not yet implemented")

ProtoInstance174.addFieldValue(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("transitionDuration")
fieldValue178.setValue("1.4")

ProtoInstance174.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("traceEnabled")
fieldValue179.setValue("true")

ProtoInstance174.addFieldValue(fieldValue179)

ProtoInstance174.addComments(x3d.CommentsBlock("""<fieldValue name='loa' value='1'/>"""))

Scene42.addChild(ProtoInstance174)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("HAnimPose")
ProtoInstance180.setDEF("FaceLeft_Pose")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("FaceLeft")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("enabled")
fieldValue182.setValue("true")

ProtoInstance180.addFieldValue(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("parentHAnimHumanoid")

fieldValue183.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid184 = x3d.HAnimHumanoid()
HAnimHumanoid184.setUSE("HumanoidImported")

fieldValue183.addChild(HAnimHumanoid184)

ProtoInstance180.addFieldValue(fieldValue183)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("loa")
fieldValue185.setValue("0")

ProtoInstance180.addFieldValue(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("description")
fieldValue186.setValue("Only modify humanoid_root Joint node to face left")

ProtoInstance180.addFieldValue(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("children")
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.setName("humanoid_root")
HAnimJoint188.setDEF("FaceLeft_humanoid_root")
HAnimJoint188.setDescription("Only rotate the model")
HAnimJoint188.setRotation(x3d.doubleToFloat([0,1,0,1.570796]))
HAnimJoint188.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint188.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue187.addChild(HAnimJoint188)

ProtoInstance180.addFieldValue(fieldValue187)
fieldValue189 = x3d.fieldValue()
fieldValue189.setName("transitionDuration")
fieldValue189.setValue("1.1")

ProtoInstance180.addFieldValue(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("traceEnabled")
fieldValue190.setValue("true")

ProtoInstance180.addFieldValue(fieldValue190)

Scene42.addChild(ProtoInstance180)
ProtoInstance191 = x3d.ProtoInstance()
ProtoInstance191.setName("HAnimPose")
ProtoInstance191.setDEF("FaceRight_Pose")
fieldValue192 = x3d.fieldValue()
fieldValue192.setName("name")
fieldValue192.setValue("FaceRight")

ProtoInstance191.addFieldValue(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("enabled")
fieldValue193.setValue("true")

ProtoInstance191.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("parentHAnimHumanoid")

fieldValue194.addComments(x3d.CommentsBlock("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid195 = x3d.HAnimHumanoid()
HAnimHumanoid195.setUSE("HumanoidImported")

fieldValue194.addChild(HAnimHumanoid195)

ProtoInstance191.addFieldValue(fieldValue194)
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("loa")
fieldValue196.setValue("0")

ProtoInstance191.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("description")
fieldValue197.setValue("Only modify humanoid_root Joint node to face right")

ProtoInstance191.addFieldValue(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("children")
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.setName("humanoid_root")
HAnimJoint199.setDEF("FaceRight_humanoid_root")
HAnimJoint199.setDescription("Only rotate the model")
HAnimJoint199.setRotation(x3d.doubleToFloat([0,1,0,-1.570796]))
HAnimJoint199.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint199.setLlimit(x3d.doubleToFloat([0,0,0]))

fieldValue198.addChild(HAnimJoint199)

ProtoInstance191.addFieldValue(fieldValue198)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("transitionDuration")
fieldValue200.setValue("1.1")

ProtoInstance191.addFieldValue(fieldValue200)
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("traceEnabled")
fieldValue201.setValue("true")

ProtoInstance191.addFieldValue(fieldValue201)

Scene42.addChild(ProtoInstance191)
Group202 = x3d.Group()
Group202.setDEF("InterfaceButtonsGroup")
Transform203 = x3d.Transform()
Transform203.setDEF("DisplayHeader")
Transform203.setTranslation(x3d.doubleToFloat([0,2,0]))
Shape204 = x3d.Shape()
Text205 = x3d.Text()
Text205.setString(["HAnimPosePrototype example implementation"])
FontStyle206 = x3d.FontStyle()
FontStyle206.setDEF("HeaderFont")
FontStyle206.setFamily(["SANS"])
FontStyle206.setJustify(["MIDDLE","MIDDLE"])
FontStyle206.setSize(0.15)
FontStyle206.setStyle("BOLD")

Text205.setFontStyle(FontStyle206)

Shape204.setGeometry(Text205)
Appearance207 = x3d.Appearance()
Appearance207.setDEF("PoseTextAppearance")
Material208 = x3d.Material()
Material208.setDiffuseColor(x3d.doubleToFloat([0.1,0.5,0.3]))

Appearance207.setMaterial(Material208)

Shape204.setAppearance(Appearance207)

Transform203.addChild(Shape204)

Group202.addChild(Transform203)
Transform209 = x3d.Transform()
Transform209.setDEF("T_PoseInterface")
Transform209.setTranslation(x3d.doubleToFloat([-1.5,1.5,0]))
Shape210 = x3d.Shape()
Text211 = x3d.Text()
Text211.setString(["\"T\" Pose"])
FontStyle212 = x3d.FontStyle()
FontStyle212.setDEF("SharedFont")
FontStyle212.setFamily(["SANS"])
FontStyle212.setJustify(["MIDDLE","MIDDLE"])
FontStyle212.setSize(0.1)
FontStyle212.setStyle("BOLD")

Text211.setFontStyle(FontStyle212)

Shape210.setGeometry(Text211)
Appearance213 = x3d.Appearance()
Appearance213.setUSE("PoseTextAppearance")

Shape210.setAppearance(Appearance213)

Transform209.addChild(Shape210)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Appearance215.setDEF("TransparentAppearance")
Material216 = x3d.Material()
Material216.setTransparency(0.8)

Appearance215.setMaterial(Material216)

Shape214.setAppearance(Appearance215)
Box217 = x3d.Box()
Box217.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape214.setGeometry(Box217)

Transform209.addChild(Shape214)
TouchSensor218 = x3d.TouchSensor()
TouchSensor218.setDEF("T_PoseTouchSensor")
TouchSensor218.setDescription("select to move shoulders to \"T\" pose, leave other joints unchanged")

Transform209.addChild(TouchSensor218)
ROUTE219 = x3d.ROUTE()
ROUTE219.setFromField("isActive")
ROUTE219.setFromNode("T_PoseTouchSensor")
ROUTE219.setToField("commencePose")
ROUTE219.setToNode("T_Pose")

Transform209.addChild(ROUTE219)

Group202.addChild(Transform209)
Transform220 = x3d.Transform()
Transform220.setDEF("A_PoseInterface")
Transform220.setTranslation(x3d.doubleToFloat([-1.5,1,0]))
Shape221 = x3d.Shape()
Text222 = x3d.Text()
Text222.setString(["\"A\" Pose"])
FontStyle223 = x3d.FontStyle()
FontStyle223.setUSE("SharedFont")

Text222.setFontStyle(FontStyle223)

Shape221.setGeometry(Text222)
Appearance224 = x3d.Appearance()
Appearance224.setUSE("PoseTextAppearance")

Shape221.setAppearance(Appearance224)

Transform220.addChild(Shape221)
Shape225 = x3d.Shape()

Shape225.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance226 = x3d.Appearance()
Appearance226.setUSE("TransparentAppearance")

Shape225.setAppearance(Appearance226)
Box227 = x3d.Box()
Box227.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape225.setGeometry(Box227)

Transform220.addChild(Shape225)
TouchSensor228 = x3d.TouchSensor()
TouchSensor228.setDEF("A_PoseTouchSensor")
TouchSensor228.setDescription("select to move shoulders to \"A\" pose, leave other joints unchanged")

Transform220.addChild(TouchSensor228)
ROUTE229 = x3d.ROUTE()
ROUTE229.setFromField("isActive")
ROUTE229.setFromNode("A_PoseTouchSensor")
ROUTE229.setToField("commencePose")
ROUTE229.setToNode("A_Pose")

Transform220.addChild(ROUTE229)

Group202.addChild(Transform220)
Transform230 = x3d.Transform()
Transform230.setDEF("TouchDown_PoseInterface")
Transform230.setTranslation(x3d.doubleToFloat([-1.5,0.5,0]))
Shape231 = x3d.Shape()
Text232 = x3d.Text()
Text232.setString(["TouchDown Pose"])
FontStyle233 = x3d.FontStyle()
FontStyle233.setUSE("SharedFont")

Text232.setFontStyle(FontStyle233)

Shape231.setGeometry(Text232)
Appearance234 = x3d.Appearance()
Appearance234.setUSE("PoseTextAppearance")

Shape231.setAppearance(Appearance234)

Transform230.addChild(Shape231)
Shape235 = x3d.Shape()

Shape235.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance236 = x3d.Appearance()
Appearance236.setUSE("TransparentAppearance")

Shape235.setAppearance(Appearance236)
Box237 = x3d.Box()
Box237.setSize(x3d.doubleToFloat([0.85,0.2,0.001]))

Shape235.setGeometry(Box237)

Transform230.addChild(Shape235)
TouchSensor238 = x3d.TouchSensor()
TouchSensor238.setDEF("TouchDown_PoseTouchSensor")
TouchSensor238.setDescription("select to transition all joints to TouchDown pose")

Transform230.addChild(TouchSensor238)
ROUTE239 = x3d.ROUTE()
ROUTE239.setFromField("isActive")
ROUTE239.setFromNode("TouchDown_PoseTouchSensor")
ROUTE239.setToField("commencePose")
ROUTE239.setToNode("TouchDown_Pose")

Transform230.addChild(ROUTE239)

Group202.addChild(Transform230)
Transform240 = x3d.Transform()
Transform240.setDEF("I_PoseInterface")
Transform240.setTranslation(x3d.doubleToFloat([-1.5,0,0]))
Shape241 = x3d.Shape()
Text242 = x3d.Text()
Text242.setString(["\"I\" Pose"])
FontStyle243 = x3d.FontStyle()
FontStyle243.setUSE("SharedFont")

Text242.setFontStyle(FontStyle243)

Shape241.setGeometry(Text242)
Appearance244 = x3d.Appearance()
Appearance244.setUSE("PoseTextAppearance")

Shape241.setAppearance(Appearance244)

Transform240.addChild(Shape241)
Shape245 = x3d.Shape()

Shape245.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance246 = x3d.Appearance()
Appearance246.setUSE("TransparentAppearance")

Shape245.setAppearance(Appearance246)
Box247 = x3d.Box()
Box247.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape245.setGeometry(Box247)

Transform240.addChild(Shape245)
TouchSensor248 = x3d.TouchSensor()
TouchSensor248.setDEF("I_PoseTouchSensor")
TouchSensor248.setDescription("select to transition all joints to \"I\" pose")

Transform240.addChild(TouchSensor248)
ROUTE249 = x3d.ROUTE()
ROUTE249.setFromField("isActive")
ROUTE249.setFromNode("I_PoseTouchSensor")
ROUTE249.setToField("commencePose")
ROUTE249.setToNode("I_Pose")

Transform240.addChild(ROUTE249)

Group202.addChild(Transform240)
Transform250 = x3d.Transform()
Transform250.setDEF("FaceLeftPoseInterface")
Transform250.setTranslation(x3d.doubleToFloat([1.5,1.5,0]))
Shape251 = x3d.Shape()
Text252 = x3d.Text()
Text252.setString(["Face Left Pose"])
FontStyle253 = x3d.FontStyle()
FontStyle253.setUSE("SharedFont")

Text252.setFontStyle(FontStyle253)

Shape251.setGeometry(Text252)
Appearance254 = x3d.Appearance()
Appearance254.setUSE("PoseTextAppearance")

Shape251.setAppearance(Appearance254)

Transform250.addChild(Shape251)
Shape255 = x3d.Shape()
Appearance256 = x3d.Appearance()
Appearance256.setUSE("TransparentAppearance")

Shape255.setAppearance(Appearance256)
Box257 = x3d.Box()
Box257.setSize(x3d.doubleToFloat([0.9,0.2,0.001]))

Shape255.setGeometry(Box257)

Transform250.addChild(Shape255)
TouchSensor258 = x3d.TouchSensor()
TouchSensor258.setDEF("FaceLeftTouchSensor")
TouchSensor258.setDescription("select to rotate body and Face Left, leave other joints unchanged")

Transform250.addChild(TouchSensor258)
ROUTE259 = x3d.ROUTE()
ROUTE259.setFromField("isActive")
ROUTE259.setFromNode("FaceLeftTouchSensor")
ROUTE259.setToField("commencePose")
ROUTE259.setToNode("FaceLeft_Pose")

Transform250.addChild(ROUTE259)

Group202.addChild(Transform250)
Transform260 = x3d.Transform()
Transform260.setDEF("FaceRightPoseInterface")
Transform260.setTranslation(x3d.doubleToFloat([1.5,1,0]))
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.setString(["Face Right Pose"])
FontStyle263 = x3d.FontStyle()
FontStyle263.setUSE("SharedFont")

Text262.setFontStyle(FontStyle263)

Shape261.setGeometry(Text262)
Appearance264 = x3d.Appearance()
Appearance264.setUSE("PoseTextAppearance")

Shape261.setAppearance(Appearance264)

Transform260.addChild(Shape261)
Shape265 = x3d.Shape()

Shape265.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance266 = x3d.Appearance()
Appearance266.setUSE("TransparentAppearance")

Shape265.setAppearance(Appearance266)
Box267 = x3d.Box()
Box267.setSize(x3d.doubleToFloat([0.9,0.2,0.001]))

Shape265.setGeometry(Box267)

Transform260.addChild(Shape265)
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.setDEF("FaceRightTouchSensor")
TouchSensor268.setDescription("select to rotate body and Face Right, leave other joints unchanged")

Transform260.addChild(TouchSensor268)
ROUTE269 = x3d.ROUTE()
ROUTE269.setFromField("isActive")
ROUTE269.setFromNode("FaceRightTouchSensor")
ROUTE269.setToField("commencePose")
ROUTE269.setToNode("FaceRight_Pose")

Transform260.addChild(ROUTE269)

Group202.addChild(Transform260)
Transform270 = x3d.Transform()
Transform270.setDEF("AnimatePosesInterface")
Transform270.setTranslation(x3d.doubleToFloat([1.5,0.5,0]))
Shape271 = x3d.Shape()
Text272 = x3d.Text()
Text272.setString(["Direct animation","to, from \"I\" Pose"])
FontStyle273 = x3d.FontStyle()
FontStyle273.setUSE("SharedFont")

Text272.setFontStyle(FontStyle273)

Shape271.setGeometry(Text272)
Appearance274 = x3d.Appearance()
Appearance274.setDEF("AnimationTextAppearance")
Material275 = x3d.Material()
Material275.setDiffuseColor(x3d.doubleToFloat([0.1,0.2,0.3]))

Appearance274.setMaterial(Material275)

Shape271.setAppearance(Appearance274)

Transform270.addChild(Shape271)
Shape276 = x3d.Shape()

Shape276.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance277 = x3d.Appearance()
Appearance277.setUSE("TransparentAppearance")

Shape276.setAppearance(Appearance277)
Box278 = x3d.Box()
Box278.setSize(x3d.doubleToFloat([0.9,0.25,0.001]))

Shape276.setGeometry(Box278)

Transform270.addChild(Shape276)
TouchSensor279 = x3d.TouchSensor()
TouchSensor279.setDEF("AnimatePosesTouchSensor")
TouchSensor279.setDescription("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events")

Transform270.addChild(TouchSensor279)

Transform270.addComments(x3d.CommentsBlock("""cycleInterval=4 also hard-coded in script execution message"""))
TimeSensor280 = x3d.TimeSensor()
TimeSensor280.setDEF("AnimatePosesClock")
TimeSensor280.setCycleInterval(4)
TimeSensor280.setDescription("directly animate several poses")

Transform270.addChild(TimeSensor280)
ScalarInterpolator281 = x3d.ScalarInterpolator()
ScalarInterpolator281.setDEF("AnimatePosesLoopInterpolator")
ScalarInterpolator281.setKey(x3d.doubleToFloat([0,0.05,0.45,0.55,0.95,1]))
ScalarInterpolator281.setKeyValue(x3d.doubleToFloat([0,0,1,1,0,0]))

Transform270.addChild(ScalarInterpolator281)
ROUTE282 = x3d.ROUTE()
ROUTE282.setFromField("touchTime")
ROUTE282.setFromNode("AnimatePosesTouchSensor")
ROUTE282.setToField("startTime")
ROUTE282.setToNode("AnimatePosesClock")

Transform270.addChild(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.setFromField("fraction_changed")
ROUTE283.setFromNode("AnimatePosesClock")
ROUTE283.setToField("set_fraction")
ROUTE283.setToNode("AnimatePosesLoopInterpolator")

Transform270.addChild(ROUTE283)
ROUTE284 = x3d.ROUTE()
ROUTE284.setFromField("value_changed")
ROUTE284.setFromNode("AnimatePosesLoopInterpolator")
ROUTE284.setToField("set_fraction")
ROUTE284.setToNode("I_Pose")

Transform270.addChild(ROUTE284)

Group202.addChild(Transform270)
Transform285 = x3d.Transform()
Transform285.setDEF("ResetDefaultPoseInterface")
Transform285.setTranslation(x3d.doubleToFloat([1.5,0,0]))
Shape286 = x3d.Shape()
Text287 = x3d.Text()
Text287.setString(["Reset All Joints","to Default \"I\" Pose"])
FontStyle288 = x3d.FontStyle()
FontStyle288.setUSE("SharedFont")

Text287.setFontStyle(FontStyle288)

Shape286.setGeometry(Text287)
Appearance289 = x3d.Appearance()
Appearance289.setUSE("AnimationTextAppearance")

Shape286.setAppearance(Appearance289)

Transform285.addChild(Shape286)
Shape290 = x3d.Shape()

Shape290.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance291 = x3d.Appearance()
Appearance291.setUSE("TransparentAppearance")

Shape290.setAppearance(Appearance291)
Box292 = x3d.Box()
Box292.setSize(x3d.doubleToFloat([0.9,0.25,0.001]))

Shape290.setGeometry(Box292)

Transform285.addChild(Shape290)
TouchSensor293 = x3d.TouchSensor()
TouchSensor293.setDEF("ResetPoseTouchSensor")
TouchSensor293.setDescription("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event")

Transform285.addChild(TouchSensor293)
ROUTE294 = x3d.ROUTE()
ROUTE294.setFromField("isActive")
ROUTE294.setFromNode("ResetPoseTouchSensor")
ROUTE294.setToField("resetAllJoints")
ROUTE294.setToNode("FaceLeft_Pose")

Transform285.addChild(ROUTE294)

Group202.addChild(Transform285)

Scene42.addChild(Group202)
Group295 = x3d.Group()
Group295.setDEF("HandleInlineLoadsensorRouting")
ROUTE296 = x3d.ROUTE()
ROUTE296.setFromField("isLoaded")
ROUTE296.setFromNode("HumanoidInlineLoadSensor")
ROUTE296.setToField("isLoaded")
ROUTE296.setToNode("A_Pose")

Group295.addChild(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.setFromField("isLoaded")
ROUTE297.setFromNode("HumanoidInlineLoadSensor")
ROUTE297.setToField("isLoaded")
ROUTE297.setToNode("H_Pose")

Group295.addChild(ROUTE297)
ROUTE298 = x3d.ROUTE()
ROUTE298.setFromField("isLoaded")
ROUTE298.setFromNode("HumanoidInlineLoadSensor")
ROUTE298.setToField("isLoaded")
ROUTE298.setToNode("I_Pose")

Group295.addChild(ROUTE298)
ROUTE299 = x3d.ROUTE()
ROUTE299.setFromField("isLoaded")
ROUTE299.setFromNode("HumanoidInlineLoadSensor")
ROUTE299.setToField("isLoaded")
ROUTE299.setToNode("T_Pose")

Group295.addChild(ROUTE299)
ROUTE300 = x3d.ROUTE()
ROUTE300.setFromField("isLoaded")
ROUTE300.setFromNode("HumanoidInlineLoadSensor")
ROUTE300.setToField("isLoaded")
ROUTE300.setToNode("FaceLeft_Pose")

Group295.addChild(ROUTE300)
ROUTE301 = x3d.ROUTE()
ROUTE301.setFromField("isLoaded")
ROUTE301.setFromNode("HumanoidInlineLoadSensor")
ROUTE301.setToField("isLoaded")
ROUTE301.setToNode("FaceRight_Pose")

Group295.addChild(ROUTE301)
ROUTE302 = x3d.ROUTE()
ROUTE302.setFromField("isLoaded")
ROUTE302.setFromNode("HumanoidInlineLoadSensor")
ROUTE302.setToField("isLoaded")
ROUTE302.setToNode("TouchDown_Pose")

Group295.addChild(ROUTE302)

Scene42.addChild(Group295)

X3D0.setScene(Scene42)
X3D0.toFileX3D("../data/HAnimPosePrototype.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimPosePrototype.new.graalpy.x3dj")

print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HAnimPosePrototype.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "2 October 2025"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "14 December 2025"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Don Brutzman"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "Joe Williams"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "contributor"
meta9.content = "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HAnimPosePrototype.console.txt"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "MovingImage"
meta11.content = "demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "Image"
meta12.content = "HAnimPoseExampleTouchDown.png"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "Image"
meta13.content = "HAnimPoseExampleTouchDownFaceLeftAPose.png"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "Image"
meta14.content = "images/HAnimPoseExampleBoxMan1.png"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "Image"
meta15.content = "images/HAnimPoseExampleBoxMan2.png"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "Image"
meta16.content = "images/HAnimPoseExampleJoeKick.png"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "Image"
meta17.content = "images/HAnimPoseExampleJoeSkeletonSkinSite.png"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Image"
meta18.content = "images/HAnimPoseExampleKoreanCharacter01Jin.png"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "images/HAnimPoseExampleKoreanCharacter02Chul.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "images/HAnimPoseExampleKoreanCharacter03Hyun.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "images/HAnimPoseExampleKoreanCharacter04Young.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "images/HAnimPoseExampleKoreanCharacter05Ju.png"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "Image"
meta23.content = "images/HAnimPoseExampleKoreanCharacter06Ga.png"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "Image"
meta24.content = "images/HAnimPoseExampleKoreanCharacter07No.png"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "Image"
meta25.content = "images/HAnimPoseExampleKoreanCharacter08Da.png"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "Image"
meta26.content = "images/HAnimPoseExampleKoreanCharacter09Ru.png"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "Image"
meta27.content = "images/HAnimPoseExampleKoreanCharacter10Mi.png"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "Image"
meta28.content = "images/HAnimPoseExampleKoreanCharacter11Min.png"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "Image"
meta29.content = "images/HAnimPoseExampleKoreanCharacter12Sun.png"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "specificationSection"
meta30.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "specificationUrl"
meta31.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "specificationSection"
meta32.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"

head1.children.append(meta32)
meta33 = x3d.meta()
meta33.name = "specificationUrl"
meta33.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"

head1.children.append(meta33)
meta34 = x3d.meta()
meta34.name = "specificationSection"
meta34.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"

head1.children.append(meta34)
meta35 = x3d.meta()
meta35.name = "specificationUrl"
meta35.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"

head1.children.append(meta35)
meta36 = x3d.meta()
meta36.name = "reference"
meta36.content = "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"

head1.children.append(meta36)
meta37 = x3d.meta()
meta37.name = "reference"
meta37.content = "earlier version of this prototype: originals/HAnimPosePreliminary.x3d"

head1.children.append(meta37)
meta38 = x3d.meta()
meta38.name = "generator"
meta38.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta38)
meta39 = x3d.meta()
meta39.name = "generator"
meta39.content = "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"

head1.children.append(meta39)
meta40 = x3d.meta()
meta40.name = "identifier"
meta40.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"

head1.children.append(meta40)
meta41 = x3d.meta()
meta41.name = "license"
meta41.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta41)

X3D0.head = head1
Scene42 = x3d.Scene()
WorldInfo43 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo43.info = ["Design to illustrate a potential HAnimPose node"]
WorldInfo43.title = "HAnimPosePrototype.x3d"

Scene42.children.append(WorldInfo43)
Background44 = x3d.Background()
Background44.skyColor = [(0.8, 0.8, 1)]

Scene42.children.append(Background44)
NavigationInfo45 = x3d.NavigationInfo()

Scene42.children.append(NavigationInfo45)
Group46 = x3d.Group(DEF="HandleInlineLoading")
Group46.children.append(x3d.Comment("""Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"""))
Group46.children.append(x3d.Comment("""Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"""))
Inline47 = x3d.Inline(DEF="HumanoidInline")
Inline47.description = "remote HAnimHumanoid for IMPORT"
Inline47.url = ["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"]

Group46.children.append(Inline47)
Group46.children.append(x3d.Comment("""Note that the following importedDEF must match the EXPORT name found in remote file"""))
IMPORT48 = x3d.IMPORT()
IMPORT48.AS = "HumanoidImported"
IMPORT48.importedDEF = "BoxMan2"
IMPORT48.inlineDEF = "HumanoidInline"

Group46.children.append(IMPORT48)
LoadSensor49 = x3d.LoadSensor(DEF="HumanoidInlineLoadSensor")
LoadSensor49.timeOut = 2
Inline50 = x3d.Inline(USE="HumanoidInline")

LoadSensor49.children.append(Inline50)

Group46.children.append(LoadSensor49)

Scene42.children.append(Group46)
ProtoDeclare51 = x3d.ProtoDeclare()
ProtoDeclare51.name = "HAnimPose"
ProtoDeclare51.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."
ProtoInterface52 = x3d.ProtoInterface()
field53 = x3d.field()
field53.name = "parentHAnimHumanoid"
field53.accessType = "inputOutput"
field53.appinfo = "HAnimHumanoid for this Pose to act upon"
field53.type = "SFNode"
field53.children.append(x3d.Comment("""HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation"""))

ProtoInterface52.field.append(field53)
field54 = x3d.field()
field54.name = "name"
field54.accessType = "inputOutput"
field54.appinfo = "name of this pose"
field54.type = "SFString"
field54.value = "newPoseName"

ProtoInterface52.field.append(field54)
field55 = x3d.field()
field55.name = "children"
field55.accessType = "inputOutput"
field55.appinfo = "joint values to apply to HAnimHumanoid"
field55.type = "MFNode"
field55.children.append(x3d.Comment("""initializating Joint nodes (if any) go here"""))

ProtoInterface52.field.append(field55)
field56 = x3d.field()
field56.name = "description"
field56.accessType = "inputOutput"
field56.appinfo = "explanation of purpose"
field56.type = "SFString"

ProtoInterface52.field.append(field56)
field57 = x3d.field()
field57.name = "enabled"
field57.accessType = "inputOutput"
field57.appinfo = "default value true"
field57.type = "SFBool"
field57.value = True

ProtoInterface52.field.append(field57)
field58 = x3d.field()
field58.name = "loa"
field58.accessType = "initializeOnly"
field58.appinfo = "default is no loa"
field58.type = "SFInt32"
field58.value = -1

ProtoInterface52.field.append(field58)
field59 = x3d.field()
field59.name = "transitionDuration"
field59.accessType = "inputOutput"
field59.appinfo = "how many seconds to achieve the pose"
field59.type = "SFTime"
field59.value = 0

ProtoInterface52.field.append(field59)
field60 = x3d.field()
field60.name = "metadata"
field60.accessType = "inputOutput"
field60.appinfo = "single Metadata* node"
field60.type = "SFNode"

ProtoInterface52.field.append(field60)
field61 = x3d.field()
field61.name = "isActive"
field61.accessType = "outputOnly"
field61.appinfo = "event indicating when pose transition is active"
field61.type = "SFBool"

ProtoInterface52.field.append(field61)
field62 = x3d.field()
field62.name = "commencePose"
field62.accessType = "inputOnly"
field62.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"
field62.type = "SFBool"

ProtoInterface52.field.append(field62)
field63 = x3d.field()
field63.name = "resetAllJoints"
field63.accessType = "inputOnly"
field63.appinfo = "reset the skeleton to I pose with all joints zeroed"
field63.type = "SFBool"

ProtoInterface52.field.append(field63)
field64 = x3d.field()
field64.name = "set_fraction"
field64.accessType = "inputOnly"
field64.appinfo = "allows transition to proceed incrementally from fraction [0..10"
field64.type = "SFFloat"

ProtoInterface52.field.append(field64)
field65 = x3d.field()
field65.name = "set_startTime"
field65.accessType = "inputOnly"
field65.appinfo = "starts the animation clock"
field65.type = "SFTime"

ProtoInterface52.field.append(field65)
field66 = x3d.field()
field66.name = "isLoaded"
field66.accessType = "inputOnly"
field66.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"
field66.type = "SFBool"

ProtoInterface52.field.append(field66)
field67 = x3d.field()
field67.name = "traceEnabled"
field67.accessType = "inputOutput"
field67.appinfo = "debug trace to Browser output console this is a local prototype field"
field67.type = "SFBool"
field67.value = True

ProtoInterface52.field.append(field67)

ProtoDeclare51.ProtoInterface = ProtoInterface52
ProtoBody68 = x3d.ProtoBody()
TimeSensor69 = x3d.TimeSensor(DEF="ClockTimeSensor")
TimeSensor69.description = "control timing of pose animation when triggered"
IS70 = x3d.IS()
connect71 = x3d.connect()
connect71.nodeField = "enabled"
connect71.protoField = "enabled"

IS70.connect.append(connect71)
connect72 = x3d.connect()
connect72.nodeField = "cycleInterval"
connect72.protoField = "transitionDuration"

IS70.connect.append(connect72)
connect73 = x3d.connect()
connect73.nodeField = "isActive"
connect73.protoField = "isActive"

IS70.connect.append(connect73)
connect74 = x3d.connect()
connect74.nodeField = "startTime"
connect74.protoField = "set_startTime"

IS70.connect.append(connect74)
connect75 = x3d.connect()
connect75.nodeField = "metadata"
connect75.protoField = "metadata"

IS70.connect.append(connect75)

TimeSensor69.IS = IS70

ProtoBody68.children.append(TimeSensor69)
TimeSensor76 = x3d.TimeSensor(DEF="ResetTimeSensor")
TimeSensor76.description = "control timing of skeleton reset to \"A\" pose when triggered"
IS77 = x3d.IS()
connect78 = x3d.connect()
connect78.nodeField = "enabled"
connect78.protoField = "enabled"

IS77.connect.append(connect78)
connect79 = x3d.connect()
connect79.nodeField = "cycleInterval"
connect79.protoField = "transitionDuration"

IS77.connect.append(connect79)
connect80 = x3d.connect()
connect80.nodeField = "startTime"
connect80.protoField = "set_startTime"

IS77.connect.append(connect80)
IS77.children.append(x3d.Comment("""no need to report isActive since that would be duplicative"""))

TimeSensor76.IS = IS77

ProtoBody68.children.append(TimeSensor76)
Group81 = x3d.Group(DEF="PoseInterpolatorGroup")
Group81.children.append(x3d.Comment("""interpolators generated by prototype script appear here at runtime"""))

ProtoBody68.children.append(Group81)
Group82 = x3d.Group(DEF="ResetInterpolatorGroup")
Group82.children.append(x3d.Comment("""interpolators generated by prototype script appear here at runtime"""))

ProtoBody68.children.append(Group82)
Script83 = x3d.Script(DEF="HAnimPoseScript")
Script83.directOutput = True
Script83.url = ["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"]
field84 = x3d.field()
field84.name = "parentHAnimHumanoid"
field84.accessType = "inputOutput"
field84.appinfo = "Humanoid for this Pose to act upon"
field84.type = "SFNode"
field84.children.append(x3d.Comment("""initialization node (if any) goes here"""))

Script83.field.append(field84)
field85 = x3d.field()
field85.name = "name"
field85.accessType = "inputOutput"
field85.appinfo = "name of this pose"
field85.type = "SFString"

Script83.field.append(field85)
field86 = x3d.field()
field86.name = "loa"
field86.accessType = "initializeOnly"
field86.appinfo = "default is no loa"
field86.type = "SFInt32"

Script83.field.append(field86)
field87 = x3d.field()
field87.name = "description"
field87.accessType = "inputOutput"
field87.appinfo = "explanation of purpose"
field87.type = "SFString"

Script83.field.append(field87)
field88 = x3d.field()
field88.name = "enabled"
field88.accessType = "inputOutput"
field88.appinfo = "default value true"
field88.type = "SFBool"

Script83.field.append(field88)
field89 = x3d.field()
field89.name = "resetAllJoints"
field89.accessType = "inputOnly"
field89.appinfo = "reset the skeleton to I pose with all joints zeroed"
field89.type = "SFBool"

Script83.field.append(field89)
field90 = x3d.field()
field90.name = "children"
field90.accessType = "inputOutput"
field90.appinfo = "joint values to apply to HAnimHumanoid"
field90.type = "MFNode"
field90.children.append(x3d.Comment("""initializating Joint nodes (if any) go here"""))

Script83.field.append(field90)
field91 = x3d.field()
field91.name = "transitionDuration"
field91.accessType = "inputOutput"
field91.appinfo = "how many seconds to achieve the pose"
field91.type = "SFTime"

Script83.field.append(field91)
field92 = x3d.field()
field92.name = "commencePose"
field92.accessType = "inputOnly"
field92.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"
field92.type = "SFBool"

Script83.field.append(field92)
field93 = x3d.field()
field93.name = "set_fraction"
field93.accessType = "inputOnly"
field93.appinfo = "allows transition to proceed incrementally from fraction [0..10"
field93.type = "SFFloat"

Script83.field.append(field93)
field94 = x3d.field()
field94.name = "set_startTime"
field94.accessType = "inputOnly"
field94.appinfo = "starts the animation clock"
field94.type = "SFTime"

Script83.field.append(field94)
field95 = x3d.field()
field95.name = "isLoaded"
field95.accessType = "inputOnly"
field95.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"
field95.type = "SFBool"

Script83.field.append(field95)
field96 = x3d.field()
field96.name = "traceEnabled"
field96.accessType = "inputOutput"
field96.appinfo = "debug trace to Browser output console"
field96.type = "SFBool"

Script83.field.append(field96)
field97 = x3d.field()
field97.name = "numberPoseJoints"
field97.accessType = "initializeOnly"
field97.appinfo = "number of joints found in children field"
field97.type = "SFInt32"
field97.value = 0

Script83.field.append(field97)
field98 = x3d.field()
field98.name = "numberSkeletonJoints"
field98.accessType = "initializeOnly"
field98.appinfo = "number of joints found in Humanoid"
field98.type = "SFInt32"
field98.value = 0

Script83.field.append(field98)
field99 = x3d.field()
field99.name = "jointOrientationInterpolators"
field99.accessType = "initializeOnly"
field99.appinfo = "OrientationInterpolator node array matching number of children"
field99.type = "MFNode"
field99.children.append(x3d.Comment("""initializating Joint nodes (if any) go here"""))

Script83.field.append(field99)
IS100 = x3d.IS()
connect101 = x3d.connect()
connect101.nodeField = "parentHAnimHumanoid"
connect101.protoField = "parentHAnimHumanoid"

IS100.connect.append(connect101)
connect102 = x3d.connect()
connect102.nodeField = "name"
connect102.protoField = "name"

IS100.connect.append(connect102)
connect103 = x3d.connect()
connect103.nodeField = "loa"
connect103.protoField = "loa"

IS100.connect.append(connect103)
connect104 = x3d.connect()
connect104.nodeField = "description"
connect104.protoField = "description"

IS100.connect.append(connect104)
connect105 = x3d.connect()
connect105.nodeField = "enabled"
connect105.protoField = "enabled"

IS100.connect.append(connect105)
connect106 = x3d.connect()
connect106.nodeField = "resetAllJoints"
connect106.protoField = "resetAllJoints"

IS100.connect.append(connect106)
connect107 = x3d.connect()
connect107.nodeField = "children"
connect107.protoField = "children"

IS100.connect.append(connect107)
connect108 = x3d.connect()
connect108.nodeField = "transitionDuration"
connect108.protoField = "transitionDuration"

IS100.connect.append(connect108)
connect109 = x3d.connect()
connect109.nodeField = "commencePose"
connect109.protoField = "commencePose"

IS100.connect.append(connect109)
connect110 = x3d.connect()
connect110.nodeField = "set_fraction"
connect110.protoField = "set_fraction"

IS100.connect.append(connect110)
connect111 = x3d.connect()
connect111.nodeField = "set_startTime"
connect111.protoField = "set_startTime"

IS100.connect.append(connect111)
connect112 = x3d.connect()
connect112.nodeField = "isLoaded"
connect112.protoField = "isLoaded"

IS100.connect.append(connect112)
connect113 = x3d.connect()
connect113.nodeField = "traceEnabled"
connect113.protoField = "traceEnabled"

IS100.connect.append(connect113)

Script83.IS = IS100

ProtoBody68.children.append(Script83)

ProtoDeclare51.ProtoBody = ProtoBody68

Scene42.children.append(ProtoDeclare51)
Viewpoint114 = x3d.Viewpoint()
Viewpoint114.description = "HAnimPose for HumanoidInline IMPORT model"
Viewpoint114.position = [0,1,4]

Scene42.children.append(Viewpoint114)
Scene42.children.append(x3d.Comment("""no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."""))
ProtoInstance115 = x3d.ProtoInstance(DEF="T_Pose")
ProtoInstance115.name = "HAnimPose"
fieldValue116 = x3d.fieldValue()
fieldValue116.name = "name"
fieldValue116.value = "T"

ProtoInstance115.fieldValue.append(fieldValue116)
fieldValue117 = x3d.fieldValue()
fieldValue117.name = "enabled"
fieldValue117.value = "true"

ProtoInstance115.fieldValue.append(fieldValue117)
fieldValue118 = x3d.fieldValue()
fieldValue118.name = "parentHAnimHumanoid"
fieldValue118.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
fieldValue118.children.append(x3d.Comment("""debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>"""))
HAnimHumanoid119 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue118.children.append(HAnimHumanoid119)

ProtoInstance115.fieldValue.append(fieldValue118)
fieldValue120 = x3d.fieldValue()
fieldValue120.name = "loa"
fieldValue120.value = "1"

ProtoInstance115.fieldValue.append(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.name = "description"
fieldValue121.value = "arms stretched outward and level similar to letter T"

ProtoInstance115.fieldValue.append(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.name = "children"
HAnimJoint123 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder_1")
HAnimJoint123.name = "l_shoulder"
HAnimJoint123.description = "left shoulder"
HAnimJoint123.rotation = [0,0,1,1.57]
HAnimJoint123.ulimit = [0,0,0]
HAnimJoint123.llimit = [0,0,0]

fieldValue122.children.append(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder_1")
HAnimJoint124.name = "r_shoulder"
HAnimJoint124.description = "right shoulder"
HAnimJoint124.rotation = [0,0,-1,1.57]
HAnimJoint124.ulimit = [0,0,0]
HAnimJoint124.llimit = [0,0,0]

fieldValue122.children.append(HAnimJoint124)
fieldValue122.children.append(x3d.Comment("""test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/"""))

ProtoInstance115.fieldValue.append(fieldValue122)
fieldValue125 = x3d.fieldValue()
fieldValue125.name = "transitionDuration"
fieldValue125.value = "1.3"

ProtoInstance115.fieldValue.append(fieldValue125)

Scene42.children.append(ProtoInstance115)
ProtoInstance126 = x3d.ProtoInstance(DEF="A_Pose")
ProtoInstance126.name = "HAnimPose"
fieldValue127 = x3d.fieldValue()
fieldValue127.name = "name"
fieldValue127.value = "A"

ProtoInstance126.fieldValue.append(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.name = "enabled"
fieldValue128.value = "true"

ProtoInstance126.fieldValue.append(fieldValue128)
fieldValue129 = x3d.fieldValue()
fieldValue129.name = "parentHAnimHumanoid"
fieldValue129.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid130 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue129.children.append(HAnimHumanoid130)

ProtoInstance126.fieldValue.append(fieldValue129)
fieldValue131 = x3d.fieldValue()
fieldValue131.name = "loa"
fieldValue131.value = "1"

ProtoInstance126.fieldValue.append(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.name = "description"
fieldValue132.value = "arms stretched outward and downward similar to letter A"

ProtoInstance126.fieldValue.append(fieldValue132)
fieldValue133 = x3d.fieldValue()
fieldValue133.name = "children"
HAnimJoint134 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder")
HAnimJoint134.name = "l_shoulder"
HAnimJoint134.description = "left shoulder"
HAnimJoint134.rotation = [0,0,1,0.5]
HAnimJoint134.ulimit = [0,0,0]
HAnimJoint134.llimit = [0,0,0]

fieldValue133.children.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder")
HAnimJoint135.name = "r_shoulder"
HAnimJoint135.description = "right shoulder"
HAnimJoint135.rotation = [0,0,-1,0.5]
HAnimJoint135.ulimit = [0,0,0]
HAnimJoint135.llimit = [0,0,0]

fieldValue133.children.append(HAnimJoint135)

ProtoInstance126.fieldValue.append(fieldValue133)
fieldValue136 = x3d.fieldValue()
fieldValue136.name = "transitionDuration"
fieldValue136.value = "1.2"

ProtoInstance126.fieldValue.append(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.name = "traceEnabled"
fieldValue137.value = "true"

ProtoInstance126.fieldValue.append(fieldValue137)

Scene42.children.append(ProtoInstance126)
ProtoInstance138 = x3d.ProtoInstance(DEF="TouchDown_Pose")
ProtoInstance138.name = "HAnimPose"
ProtoInstance138.children.append(x3d.Comment("""thanks Joe"""))
fieldValue139 = x3d.fieldValue()
fieldValue139.name = "name"
fieldValue139.value = "TouchDown"

ProtoInstance138.fieldValue.append(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.name = "enabled"
fieldValue140.value = "true"

ProtoInstance138.fieldValue.append(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.name = "parentHAnimHumanoid"
fieldValue141.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid142 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue141.children.append(HAnimHumanoid142)

ProtoInstance138.fieldValue.append(fieldValue141)
fieldValue143 = x3d.fieldValue()
fieldValue143.name = "loa"
fieldValue143.value = "1"

ProtoInstance138.fieldValue.append(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.name = "description"
fieldValue144.value = "arms and legs stretched outward providing a TouchDown gesture"

ProtoInstance138.fieldValue.append(fieldValue144)
fieldValue145 = x3d.fieldValue()
fieldValue145.name = "children"
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.name = "humanoid_root"
HAnimJoint146.rotation = [0,1,0,-0.698132]
HAnimJoint146.ulimit = [0,0,0]
HAnimJoint146.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.name = "l_hip"
HAnimJoint147.rotation = [-1,1,1,1]
HAnimJoint147.ulimit = [0,0,0]
HAnimJoint147.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.name = "l_knee"
HAnimJoint148.rotation = [1,0,0,1]
HAnimJoint148.ulimit = [0,0,0]
HAnimJoint148.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.name = "l_talocrural"
HAnimJoint149.rotation = [-0.2,0,0.1,0.225]
HAnimJoint149.ulimit = [0,0,0]
HAnimJoint149.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.name = "r_hip"
HAnimJoint150.rotation = [-1,-1,-1,1]
HAnimJoint150.ulimit = [0,0,0]
HAnimJoint150.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.name = "r_knee"
HAnimJoint151.rotation = [1,0,0,1]
HAnimJoint151.ulimit = [0,0,0]
HAnimJoint151.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.name = "r_talocrural"
HAnimJoint152.rotation = [-0.2,0,0.1,0.25]
HAnimJoint152.ulimit = [0,0,0]
HAnimJoint152.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.name = "vl5"
HAnimJoint153.rotation = [0,0,0.01,0.2]
HAnimJoint153.ulimit = [0,0,0]
HAnimJoint153.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.name = "vt10"
HAnimJoint154.rotation = [0,0,0.01,0.1]
HAnimJoint154.ulimit = [0,0,0]
HAnimJoint154.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.name = "vc4"
HAnimJoint155.rotation = [0,0,-0.01,0.15]
HAnimJoint155.ulimit = [0,0,0]
HAnimJoint155.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.name = "l_shoulder"
HAnimJoint156.rotation = [-1,0.5,1,2]
HAnimJoint156.ulimit = [0,0,0]
HAnimJoint156.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.name = "l_elbow"
HAnimJoint157.rotation = [-1,0,0,1]
HAnimJoint157.ulimit = [0,0,0]
HAnimJoint157.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.name = "l_radiocarpal"
HAnimJoint158.ulimit = [0,0,0]
HAnimJoint158.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.name = "r_shoulder"
HAnimJoint159.rotation = [-1,-0.5,-1,2.6]
HAnimJoint159.ulimit = [0,0,0]
HAnimJoint159.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.name = "r_elbow"
HAnimJoint160.rotation = [-1,0,0,1]
HAnimJoint160.ulimit = [0,0,0]
HAnimJoint160.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.name = "r_radiocarpal"
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]

fieldValue145.children.append(HAnimJoint161)

ProtoInstance138.fieldValue.append(fieldValue145)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "transitionDuration"
fieldValue162.value = "1.2"

ProtoInstance138.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "traceEnabled"
fieldValue163.value = "true"

ProtoInstance138.fieldValue.append(fieldValue163)

Scene42.children.append(ProtoInstance138)
ProtoInstance164 = x3d.ProtoInstance(DEF="I_Pose")
ProtoInstance164.name = "HAnimPose"
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "name"
fieldValue165.value = "I"

ProtoInstance164.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "enabled"
fieldValue166.value = "true"

ProtoInstance164.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "parentHAnimHumanoid"
fieldValue167.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid168 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue167.children.append(HAnimHumanoid168)

ProtoInstance164.fieldValue.append(fieldValue167)
fieldValue169 = x3d.fieldValue()
fieldValue169.name = "loa"
fieldValue169.value = "1"

ProtoInstance164.fieldValue.append(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.name = "description"
fieldValue170.value = "arms and legs straight down default binding pose for baseline Humanoid"

ProtoInstance164.fieldValue.append(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "children"
fieldValue171.children.append(x3d.Comment("""not defining any children equals the default \"I\" pose"""))

ProtoInstance164.fieldValue.append(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "transitionDuration"
fieldValue172.value = "1.5"

ProtoInstance164.fieldValue.append(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "traceEnabled"
fieldValue173.value = "true"

ProtoInstance164.fieldValue.append(fieldValue173)

Scene42.children.append(ProtoInstance164)
ProtoInstance174 = x3d.ProtoInstance(DEF="H_Pose")
ProtoInstance174.name = "HAnimPose"
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "name"
fieldValue175.value = "H"

ProtoInstance174.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "enabled"
fieldValue176.value = "false"

ProtoInstance174.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "description"
fieldValue177.value = "TODO experimental pose not yet implemented"

ProtoInstance174.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "transitionDuration"
fieldValue178.value = "1.4"

ProtoInstance174.fieldValue.append(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.name = "traceEnabled"
fieldValue179.value = "true"

ProtoInstance174.fieldValue.append(fieldValue179)
ProtoInstance174.children.append(x3d.Comment("""<fieldValue name='loa' value='1'/>"""))

Scene42.children.append(ProtoInstance174)
ProtoInstance180 = x3d.ProtoInstance(DEF="FaceLeft_Pose")
ProtoInstance180.name = "HAnimPose"
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "name"
fieldValue181.value = "FaceLeft"

ProtoInstance180.fieldValue.append(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "enabled"
fieldValue182.value = "true"

ProtoInstance180.fieldValue.append(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "parentHAnimHumanoid"
fieldValue183.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid184 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue183.children.append(HAnimHumanoid184)

ProtoInstance180.fieldValue.append(fieldValue183)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "loa"
fieldValue185.value = "0"

ProtoInstance180.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "description"
fieldValue186.value = "Only modify humanoid_root Joint node to face left"

ProtoInstance180.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "children"
HAnimJoint188 = x3d.HAnimJoint(DEF="FaceLeft_humanoid_root")
HAnimJoint188.name = "humanoid_root"
HAnimJoint188.description = "Only rotate the model"
HAnimJoint188.rotation = [0,1,0,1.570796]
HAnimJoint188.ulimit = [0,0,0]
HAnimJoint188.llimit = [0,0,0]

fieldValue187.children.append(HAnimJoint188)

ProtoInstance180.fieldValue.append(fieldValue187)
fieldValue189 = x3d.fieldValue()
fieldValue189.name = "transitionDuration"
fieldValue189.value = "1.1"

ProtoInstance180.fieldValue.append(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.name = "traceEnabled"
fieldValue190.value = "true"

ProtoInstance180.fieldValue.append(fieldValue190)

Scene42.children.append(ProtoInstance180)
ProtoInstance191 = x3d.ProtoInstance(DEF="FaceRight_Pose")
ProtoInstance191.name = "HAnimPose"
fieldValue192 = x3d.fieldValue()
fieldValue192.name = "name"
fieldValue192.value = "FaceRight"

ProtoInstance191.fieldValue.append(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.name = "enabled"
fieldValue193.value = "true"

ProtoInstance191.fieldValue.append(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.name = "parentHAnimHumanoid"
fieldValue194.children.append(x3d.Comment("""HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"""))
HAnimHumanoid195 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue194.children.append(HAnimHumanoid195)

ProtoInstance191.fieldValue.append(fieldValue194)
fieldValue196 = x3d.fieldValue()
fieldValue196.name = "loa"
fieldValue196.value = "0"

ProtoInstance191.fieldValue.append(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.name = "description"
fieldValue197.value = "Only modify humanoid_root Joint node to face right"

ProtoInstance191.fieldValue.append(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.name = "children"
HAnimJoint199 = x3d.HAnimJoint(DEF="FaceRight_humanoid_root")
HAnimJoint199.name = "humanoid_root"
HAnimJoint199.description = "Only rotate the model"
HAnimJoint199.rotation = [0,1,0,-1.570796]
HAnimJoint199.ulimit = [0,0,0]
HAnimJoint199.llimit = [0,0,0]

fieldValue198.children.append(HAnimJoint199)

ProtoInstance191.fieldValue.append(fieldValue198)
fieldValue200 = x3d.fieldValue()
fieldValue200.name = "transitionDuration"
fieldValue200.value = "1.1"

ProtoInstance191.fieldValue.append(fieldValue200)
fieldValue201 = x3d.fieldValue()
fieldValue201.name = "traceEnabled"
fieldValue201.value = "true"

ProtoInstance191.fieldValue.append(fieldValue201)

Scene42.children.append(ProtoInstance191)
Group202 = x3d.Group(DEF="InterfaceButtonsGroup")
Transform203 = x3d.Transform(DEF="DisplayHeader")
Transform203.translation = [0,2,0]
Shape204 = x3d.Shape()
Text205 = x3d.Text()
Text205.string = ["HAnimPosePrototype example implementation"]
FontStyle206 = x3d.FontStyle(DEF="HeaderFont")
FontStyle206.family = ["SANS"]
FontStyle206.justify = ["MIDDLE","MIDDLE"]
FontStyle206.size = 0.15
FontStyle206.style = "BOLD"

Text205.fontStyle = FontStyle206

Shape204.geometry = Text205
Appearance207 = x3d.Appearance(DEF="PoseTextAppearance")
Material208 = x3d.Material()
Material208.diffuseColor = [0.1,0.5,0.3]

Appearance207.material = Material208

Shape204.appearance = Appearance207

Transform203.children.append(Shape204)

Group202.children.append(Transform203)
Transform209 = x3d.Transform(DEF="T_PoseInterface")
Transform209.translation = [-1.5,1.5,0]
Shape210 = x3d.Shape()
Text211 = x3d.Text()
Text211.string = ["\"T\" Pose"]
FontStyle212 = x3d.FontStyle(DEF="SharedFont")
FontStyle212.family = ["SANS"]
FontStyle212.justify = ["MIDDLE","MIDDLE"]
FontStyle212.size = 0.1
FontStyle212.style = "BOLD"

Text211.fontStyle = FontStyle212

Shape210.geometry = Text211
Appearance213 = x3d.Appearance(USE="PoseTextAppearance")

Shape210.appearance = Appearance213

Transform209.children.append(Shape210)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance(DEF="TransparentAppearance")
Material216 = x3d.Material()
Material216.transparency = 0.8

Appearance215.material = Material216

Shape214.appearance = Appearance215
Box217 = x3d.Box()
Box217.size = [0.45,0.2,0.001]

Shape214.geometry = Box217

Transform209.children.append(Shape214)
TouchSensor218 = x3d.TouchSensor(DEF="T_PoseTouchSensor")
TouchSensor218.description = "select to move shoulders to \"T\" pose, leave other joints unchanged"

Transform209.children.append(TouchSensor218)
ROUTE219 = x3d.ROUTE()
ROUTE219.fromField = "isActive"
ROUTE219.fromNode = "T_PoseTouchSensor"
ROUTE219.toField = "commencePose"
ROUTE219.toNode = "T_Pose"

Transform209.children.append(ROUTE219)

Group202.children.append(Transform209)
Transform220 = x3d.Transform(DEF="A_PoseInterface")
Transform220.translation = [-1.5,1,0]
Shape221 = x3d.Shape()
Text222 = x3d.Text()
Text222.string = ["\"A\" Pose"]
FontStyle223 = x3d.FontStyle(USE="SharedFont")

Text222.fontStyle = FontStyle223

Shape221.geometry = Text222
Appearance224 = x3d.Appearance(USE="PoseTextAppearance")

Shape221.appearance = Appearance224

Transform220.children.append(Shape221)
Shape225 = x3d.Shape()
Shape225.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance226 = x3d.Appearance(USE="TransparentAppearance")

Shape225.appearance = Appearance226
Box227 = x3d.Box()
Box227.size = [0.45,0.2,0.001]

Shape225.geometry = Box227

Transform220.children.append(Shape225)
TouchSensor228 = x3d.TouchSensor(DEF="A_PoseTouchSensor")
TouchSensor228.description = "select to move shoulders to \"A\" pose, leave other joints unchanged"

Transform220.children.append(TouchSensor228)
ROUTE229 = x3d.ROUTE()
ROUTE229.fromField = "isActive"
ROUTE229.fromNode = "A_PoseTouchSensor"
ROUTE229.toField = "commencePose"
ROUTE229.toNode = "A_Pose"

Transform220.children.append(ROUTE229)

Group202.children.append(Transform220)
Transform230 = x3d.Transform(DEF="TouchDown_PoseInterface")
Transform230.translation = [-1.5,0.5,0]
Shape231 = x3d.Shape()
Text232 = x3d.Text()
Text232.string = ["TouchDown Pose"]
FontStyle233 = x3d.FontStyle(USE="SharedFont")

Text232.fontStyle = FontStyle233

Shape231.geometry = Text232
Appearance234 = x3d.Appearance(USE="PoseTextAppearance")

Shape231.appearance = Appearance234

Transform230.children.append(Shape231)
Shape235 = x3d.Shape()
Shape235.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance236 = x3d.Appearance(USE="TransparentAppearance")

Shape235.appearance = Appearance236
Box237 = x3d.Box()
Box237.size = [0.85,0.2,0.001]

Shape235.geometry = Box237

Transform230.children.append(Shape235)
TouchSensor238 = x3d.TouchSensor(DEF="TouchDown_PoseTouchSensor")
TouchSensor238.description = "select to transition all joints to TouchDown pose"

Transform230.children.append(TouchSensor238)
ROUTE239 = x3d.ROUTE()
ROUTE239.fromField = "isActive"
ROUTE239.fromNode = "TouchDown_PoseTouchSensor"
ROUTE239.toField = "commencePose"
ROUTE239.toNode = "TouchDown_Pose"

Transform230.children.append(ROUTE239)

Group202.children.append(Transform230)
Transform240 = x3d.Transform(DEF="I_PoseInterface")
Transform240.translation = [-1.5,0,0]
Shape241 = x3d.Shape()
Text242 = x3d.Text()
Text242.string = ["\"I\" Pose"]
FontStyle243 = x3d.FontStyle(USE="SharedFont")

Text242.fontStyle = FontStyle243

Shape241.geometry = Text242
Appearance244 = x3d.Appearance(USE="PoseTextAppearance")

Shape241.appearance = Appearance244

Transform240.children.append(Shape241)
Shape245 = x3d.Shape()
Shape245.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance246 = x3d.Appearance(USE="TransparentAppearance")

Shape245.appearance = Appearance246
Box247 = x3d.Box()
Box247.size = [0.45,0.2,0.001]

Shape245.geometry = Box247

Transform240.children.append(Shape245)
TouchSensor248 = x3d.TouchSensor(DEF="I_PoseTouchSensor")
TouchSensor248.description = "select to transition all joints to \"I\" pose"

Transform240.children.append(TouchSensor248)
ROUTE249 = x3d.ROUTE()
ROUTE249.fromField = "isActive"
ROUTE249.fromNode = "I_PoseTouchSensor"
ROUTE249.toField = "commencePose"
ROUTE249.toNode = "I_Pose"

Transform240.children.append(ROUTE249)

Group202.children.append(Transform240)
Transform250 = x3d.Transform(DEF="FaceLeftPoseInterface")
Transform250.translation = [1.5,1.5,0]
Shape251 = x3d.Shape()
Text252 = x3d.Text()
Text252.string = ["Face Left Pose"]
FontStyle253 = x3d.FontStyle(USE="SharedFont")

Text252.fontStyle = FontStyle253

Shape251.geometry = Text252
Appearance254 = x3d.Appearance(USE="PoseTextAppearance")

Shape251.appearance = Appearance254

Transform250.children.append(Shape251)
Shape255 = x3d.Shape()
Appearance256 = x3d.Appearance(USE="TransparentAppearance")

Shape255.appearance = Appearance256
Box257 = x3d.Box()
Box257.size = [0.9,0.2,0.001]

Shape255.geometry = Box257

Transform250.children.append(Shape255)
TouchSensor258 = x3d.TouchSensor(DEF="FaceLeftTouchSensor")
TouchSensor258.description = "select to rotate body and Face Left, leave other joints unchanged"

Transform250.children.append(TouchSensor258)
ROUTE259 = x3d.ROUTE()
ROUTE259.fromField = "isActive"
ROUTE259.fromNode = "FaceLeftTouchSensor"
ROUTE259.toField = "commencePose"
ROUTE259.toNode = "FaceLeft_Pose"

Transform250.children.append(ROUTE259)

Group202.children.append(Transform250)
Transform260 = x3d.Transform(DEF="FaceRightPoseInterface")
Transform260.translation = [1.5,1,0]
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.string = ["Face Right Pose"]
FontStyle263 = x3d.FontStyle(USE="SharedFont")

Text262.fontStyle = FontStyle263

Shape261.geometry = Text262
Appearance264 = x3d.Appearance(USE="PoseTextAppearance")

Shape261.appearance = Appearance264

Transform260.children.append(Shape261)
Shape265 = x3d.Shape()
Shape265.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance266 = x3d.Appearance(USE="TransparentAppearance")

Shape265.appearance = Appearance266
Box267 = x3d.Box()
Box267.size = [0.9,0.2,0.001]

Shape265.geometry = Box267

Transform260.children.append(Shape265)
TouchSensor268 = x3d.TouchSensor(DEF="FaceRightTouchSensor")
TouchSensor268.description = "select to rotate body and Face Right, leave other joints unchanged"

Transform260.children.append(TouchSensor268)
ROUTE269 = x3d.ROUTE()
ROUTE269.fromField = "isActive"
ROUTE269.fromNode = "FaceRightTouchSensor"
ROUTE269.toField = "commencePose"
ROUTE269.toNode = "FaceRight_Pose"

Transform260.children.append(ROUTE269)

Group202.children.append(Transform260)
Transform270 = x3d.Transform(DEF="AnimatePosesInterface")
Transform270.translation = [1.5,0.5,0]
Shape271 = x3d.Shape()
Text272 = x3d.Text()
Text272.string = ["Direct animation","to, from \"I\" Pose"]
FontStyle273 = x3d.FontStyle(USE="SharedFont")

Text272.fontStyle = FontStyle273

Shape271.geometry = Text272
Appearance274 = x3d.Appearance(DEF="AnimationTextAppearance")
Material275 = x3d.Material()
Material275.diffuseColor = [0.1,0.2,0.3]

Appearance274.material = Material275

Shape271.appearance = Appearance274

Transform270.children.append(Shape271)
Shape276 = x3d.Shape()
Shape276.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance277 = x3d.Appearance(USE="TransparentAppearance")

Shape276.appearance = Appearance277
Box278 = x3d.Box()
Box278.size = [0.9,0.25,0.001]

Shape276.geometry = Box278

Transform270.children.append(Shape276)
TouchSensor279 = x3d.TouchSensor(DEF="AnimatePosesTouchSensor")
TouchSensor279.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"

Transform270.children.append(TouchSensor279)
Transform270.children.append(x3d.Comment("""cycleInterval=4 also hard-coded in script execution message"""))
TimeSensor280 = x3d.TimeSensor(DEF="AnimatePosesClock")
TimeSensor280.cycleInterval = 4
TimeSensor280.description = "directly animate several poses"

Transform270.children.append(TimeSensor280)
ScalarInterpolator281 = x3d.ScalarInterpolator(DEF="AnimatePosesLoopInterpolator")
ScalarInterpolator281.key = [0,0.05,0.45,0.55,0.95,1]
ScalarInterpolator281.keyValue = [0,0,1,1,0,0]

Transform270.children.append(ScalarInterpolator281)
ROUTE282 = x3d.ROUTE()
ROUTE282.fromField = "touchTime"
ROUTE282.fromNode = "AnimatePosesTouchSensor"
ROUTE282.toField = "startTime"
ROUTE282.toNode = "AnimatePosesClock"

Transform270.children.append(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.fromField = "fraction_changed"
ROUTE283.fromNode = "AnimatePosesClock"
ROUTE283.toField = "set_fraction"
ROUTE283.toNode = "AnimatePosesLoopInterpolator"

Transform270.children.append(ROUTE283)
ROUTE284 = x3d.ROUTE()
ROUTE284.fromField = "value_changed"
ROUTE284.fromNode = "AnimatePosesLoopInterpolator"
ROUTE284.toField = "set_fraction"
ROUTE284.toNode = "I_Pose"

Transform270.children.append(ROUTE284)

Group202.children.append(Transform270)
Transform285 = x3d.Transform(DEF="ResetDefaultPoseInterface")
Transform285.translation = [1.5,0,0]
Shape286 = x3d.Shape()
Text287 = x3d.Text()
Text287.string = ["Reset All Joints","to Default \"I\" Pose"]
FontStyle288 = x3d.FontStyle(USE="SharedFont")

Text287.fontStyle = FontStyle288

Shape286.geometry = Text287
Appearance289 = x3d.Appearance(USE="AnimationTextAppearance")

Shape286.appearance = Appearance289

Transform285.children.append(Shape286)
Shape290 = x3d.Shape()
Shape290.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance291 = x3d.Appearance(USE="TransparentAppearance")

Shape290.appearance = Appearance291
Box292 = x3d.Box()
Box292.size = [0.9,0.25,0.001]

Shape290.geometry = Box292

Transform285.children.append(Shape290)
TouchSensor293 = x3d.TouchSensor(DEF="ResetPoseTouchSensor")
TouchSensor293.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"

Transform285.children.append(TouchSensor293)
ROUTE294 = x3d.ROUTE()
ROUTE294.fromField = "isActive"
ROUTE294.fromNode = "ResetPoseTouchSensor"
ROUTE294.toField = "resetAllJoints"
ROUTE294.toNode = "FaceLeft_Pose"

Transform285.children.append(ROUTE294)

Group202.children.append(Transform285)

Scene42.children.append(Group202)
Group295 = x3d.Group(DEF="HandleInlineLoadsensorRouting")
ROUTE296 = x3d.ROUTE()
ROUTE296.fromField = "isLoaded"
ROUTE296.fromNode = "HumanoidInlineLoadSensor"
ROUTE296.toField = "isLoaded"
ROUTE296.toNode = "A_Pose"

Group295.children.append(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.fromField = "isLoaded"
ROUTE297.fromNode = "HumanoidInlineLoadSensor"
ROUTE297.toField = "isLoaded"
ROUTE297.toNode = "H_Pose"

Group295.children.append(ROUTE297)
ROUTE298 = x3d.ROUTE()
ROUTE298.fromField = "isLoaded"
ROUTE298.fromNode = "HumanoidInlineLoadSensor"
ROUTE298.toField = "isLoaded"
ROUTE298.toNode = "I_Pose"

Group295.children.append(ROUTE298)
ROUTE299 = x3d.ROUTE()
ROUTE299.fromField = "isLoaded"
ROUTE299.fromNode = "HumanoidInlineLoadSensor"
ROUTE299.toField = "isLoaded"
ROUTE299.toNode = "T_Pose"

Group295.children.append(ROUTE299)
ROUTE300 = x3d.ROUTE()
ROUTE300.fromField = "isLoaded"
ROUTE300.fromNode = "HumanoidInlineLoadSensor"
ROUTE300.toField = "isLoaded"
ROUTE300.toNode = "FaceLeft_Pose"

Group295.children.append(ROUTE300)
ROUTE301 = x3d.ROUTE()
ROUTE301.fromField = "isLoaded"
ROUTE301.fromNode = "HumanoidInlineLoadSensor"
ROUTE301.toField = "isLoaded"
ROUTE301.toNode = "FaceRight_Pose"

Group295.children.append(ROUTE301)
ROUTE302 = x3d.ROUTE()
ROUTE302.fromField = "isLoaded"
ROUTE302.fromNode = "HumanoidInlineLoadSensor"
ROUTE302.toField = "isLoaded"
ROUTE302.toNode = "TouchDown_Pose"

Group295.children.append(ROUTE302)

Scene42.children.append(Group295)

X3D0.Scene = Scene42
f = open("../data/HAnimPosePrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

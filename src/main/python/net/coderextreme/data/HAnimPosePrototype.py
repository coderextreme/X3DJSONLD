print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 12:24:16 GMT"

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
meta38.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta38)
meta39 = x3d.meta()
meta39.name = "generator"
meta39.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta39)

X3D0.head = head1
Scene40 = x3d.Scene()
ProtoDeclare41 = x3d.ProtoDeclare()
ProtoDeclare41.name = "HAnimPose"
ProtoDeclare41.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."
ProtoInterface42 = x3d.ProtoInterface()
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFNode"
field43.name = "parentHAnimHumanoid"
field43.appinfo = "HAnimHumanoid for this Pose to act upon"

ProtoInterface42.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFString"
field44.name = "name"
field44.value = "newPoseName"
field44.appinfo = "name of this pose"

ProtoInterface42.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "MFNode"
field45.name = "children"
field45.appinfo = "joint values to apply to HAnimHumanoid"

ProtoInterface42.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFString"
field46.name = "description"
field46.appinfo = "explanation of purpose"

ProtoInterface42.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOutput"
field47.type = "SFBool"
field47.name = "enabled"
field47.value = True
field47.appinfo = "default value true"

ProtoInterface42.field.append(field47)
field48 = x3d.field()
field48.accessType = "initializeOnly"
field48.type = "SFInt32"
field48.name = "loa"
field48.value = -1
field48.appinfo = "default is no loa"

ProtoInterface42.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFTime"
field49.name = "transitionDuration"
field49.value = 0
field49.appinfo = "how many seconds to achieve the pose"

ProtoInterface42.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFNode"
field50.name = "metadata"
field50.appinfo = "single Metadata* node"

ProtoInterface42.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "SFBool"
field51.name = "isActive"
field51.appinfo = "event indicating when pose transition is active"

ProtoInterface42.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOnly"
field52.type = "SFBool"
field52.name = "commencePose"
field52.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"

ProtoInterface42.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOnly"
field53.type = "SFBool"
field53.name = "resetAllJoints"
field53.appinfo = "reset the skeleton to I pose with all joints zeroed"

ProtoInterface42.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFFloat"
field54.name = "set_fraction"
field54.appinfo = "allows transition to proceed incrementally from fraction [0..10"

ProtoInterface42.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOnly"
field55.type = "SFTime"
field55.name = "set_startTime"
field55.appinfo = "starts the animation clock"

ProtoInterface42.field.append(field55)
field56 = x3d.field()
field56.accessType = "inputOnly"
field56.type = "SFBool"
field56.name = "isLoaded"
field56.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"

ProtoInterface42.field.append(field56)
field57 = x3d.field()
field57.accessType = "inputOutput"
field57.type = "SFBool"
field57.name = "traceEnabled"
field57.value = True
field57.appinfo = "debug trace to Browser output console this is a local prototype field"

ProtoInterface42.field.append(field57)

ProtoDeclare41.ProtoInterface = ProtoInterface42
ProtoBody58 = x3d.ProtoBody()
TimeSensor59 = x3d.TimeSensor(DEF="ClockTimeSensor")
TimeSensor59.description = "control timing of pose animation when triggered"
IS60 = x3d.IS()
connect61 = x3d.connect()
connect61.nodeField = "metadata"
connect61.protoField = "metadata"

IS60.connect.append(connect61)
connect62 = x3d.connect()
connect62.nodeField = "enabled"
connect62.protoField = "enabled"

IS60.connect.append(connect62)
connect63 = x3d.connect()
connect63.nodeField = "cycleInterval"
connect63.protoField = "transitionDuration"

IS60.connect.append(connect63)
connect64 = x3d.connect()
connect64.nodeField = "startTime"
connect64.protoField = "set_startTime"

IS60.connect.append(connect64)
connect65 = x3d.connect()
connect65.nodeField = "isActive"
connect65.protoField = "isActive"

IS60.connect.append(connect65)

TimeSensor59.IS = IS60

ProtoBody58.children.append(TimeSensor59)
TimeSensor66 = x3d.TimeSensor(DEF="ResetTimeSensor")
TimeSensor66.description = "control timing of skeleton reset to \"A\" pose when triggered"
IS67 = x3d.IS()
connect68 = x3d.connect()
connect68.nodeField = "enabled"
connect68.protoField = "enabled"

IS67.connect.append(connect68)
connect69 = x3d.connect()
connect69.nodeField = "cycleInterval"
connect69.protoField = "transitionDuration"

IS67.connect.append(connect69)
connect70 = x3d.connect()
connect70.nodeField = "startTime"
connect70.protoField = "set_startTime"

IS67.connect.append(connect70)

TimeSensor66.IS = IS67

ProtoBody58.children.append(TimeSensor66)
Group71 = x3d.Group(DEF="PoseInterpolatorGroup")

ProtoBody58.children.append(Group71)
Group72 = x3d.Group(DEF="ResetInterpolatorGroup")

ProtoBody58.children.append(Group72)
Script73 = x3d.Script(DEF="HAnimPoseScript")
Script73.url = ["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"]
Script73.directOutput = True
field74 = x3d.field()
field74.accessType = "inputOutput"
field74.type = "SFNode"
field74.name = "parentHAnimHumanoid"
field74.appinfo = "Humanoid for this Pose to act upon"

Script73.field.append(field74)
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "SFString"
field75.name = "name"
field75.appinfo = "name of this pose"

Script73.field.append(field75)
field76 = x3d.field()
field76.accessType = "initializeOnly"
field76.type = "SFInt32"
field76.name = "loa"
field76.appinfo = "default is no loa"

Script73.field.append(field76)
field77 = x3d.field()
field77.accessType = "inputOutput"
field77.type = "SFString"
field77.name = "description"
field77.appinfo = "explanation of purpose"

Script73.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "SFBool"
field78.name = "enabled"
field78.appinfo = "default value true"

Script73.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOnly"
field79.type = "SFBool"
field79.name = "resetAllJoints"
field79.appinfo = "reset the skeleton to I pose with all joints zeroed"

Script73.field.append(field79)
field80 = x3d.field()
field80.accessType = "inputOutput"
field80.type = "MFNode"
field80.name = "children"
field80.appinfo = "joint values to apply to HAnimHumanoid"

Script73.field.append(field80)
field81 = x3d.field()
field81.accessType = "inputOutput"
field81.type = "SFTime"
field81.name = "transitionDuration"
field81.appinfo = "how many seconds to achieve the pose"

Script73.field.append(field81)
field82 = x3d.field()
field82.accessType = "inputOnly"
field82.type = "SFBool"
field82.name = "commencePose"
field82.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"

Script73.field.append(field82)
field83 = x3d.field()
field83.accessType = "inputOnly"
field83.type = "SFFloat"
field83.name = "set_fraction"
field83.appinfo = "allows transition to proceed incrementally from fraction [0..10"

Script73.field.append(field83)
field84 = x3d.field()
field84.accessType = "inputOnly"
field84.type = "SFTime"
field84.name = "set_startTime"
field84.appinfo = "starts the animation clock"

Script73.field.append(field84)
field85 = x3d.field()
field85.accessType = "inputOnly"
field85.type = "SFBool"
field85.name = "isLoaded"
field85.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"

Script73.field.append(field85)
field86 = x3d.field()
field86.accessType = "inputOutput"
field86.type = "SFBool"
field86.name = "traceEnabled"
field86.appinfo = "debug trace to Browser output console"

Script73.field.append(field86)
field87 = x3d.field()
field87.accessType = "initializeOnly"
field87.type = "SFInt32"
field87.name = "numberPoseJoints"
field87.appinfo = "number of joints found in children field"

Script73.field.append(field87)
field88 = x3d.field()
field88.accessType = "initializeOnly"
field88.type = "SFInt32"
field88.name = "numberSkeletonJoints"
field88.appinfo = "number of joints found in Humanoid"

Script73.field.append(field88)
field89 = x3d.field()
field89.accessType = "initializeOnly"
field89.type = "MFNode"
field89.name = "jointOrientationInterpolators"
field89.appinfo = "OrientationInterpolator node array matching number of children"

Script73.field.append(field89)
IS90 = x3d.IS()
connect91 = x3d.connect()
connect91.nodeField = "parentHAnimHumanoid"
connect91.protoField = "parentHAnimHumanoid"

IS90.connect.append(connect91)
connect92 = x3d.connect()
connect92.nodeField = "name"
connect92.protoField = "name"

IS90.connect.append(connect92)
connect93 = x3d.connect()
connect93.nodeField = "loa"
connect93.protoField = "loa"

IS90.connect.append(connect93)
connect94 = x3d.connect()
connect94.nodeField = "description"
connect94.protoField = "description"

IS90.connect.append(connect94)
connect95 = x3d.connect()
connect95.nodeField = "enabled"
connect95.protoField = "enabled"

IS90.connect.append(connect95)
connect96 = x3d.connect()
connect96.nodeField = "resetAllJoints"
connect96.protoField = "resetAllJoints"

IS90.connect.append(connect96)
connect97 = x3d.connect()
connect97.nodeField = "children"
connect97.protoField = "children"

IS90.connect.append(connect97)
connect98 = x3d.connect()
connect98.nodeField = "transitionDuration"
connect98.protoField = "transitionDuration"

IS90.connect.append(connect98)
connect99 = x3d.connect()
connect99.nodeField = "commencePose"
connect99.protoField = "commencePose"

IS90.connect.append(connect99)
connect100 = x3d.connect()
connect100.nodeField = "set_fraction"
connect100.protoField = "set_fraction"

IS90.connect.append(connect100)
connect101 = x3d.connect()
connect101.nodeField = "set_startTime"
connect101.protoField = "set_startTime"

IS90.connect.append(connect101)
connect102 = x3d.connect()
connect102.nodeField = "isLoaded"
connect102.protoField = "isLoaded"

IS90.connect.append(connect102)
connect103 = x3d.connect()
connect103.nodeField = "traceEnabled"
connect103.protoField = "traceEnabled"

IS90.connect.append(connect103)

Script73.IS = IS90

ProtoBody58.children.append(Script73)

ProtoDeclare41.ProtoBody = ProtoBody58

Scene40.children.append(ProtoDeclare41)
WorldInfo104 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo104.title = "HAnimPosePrototype.x3d"
WorldInfo104.info = ["Design to illustrate a potential HAnimPose node"]

Scene40.children.append(WorldInfo104)
Background105 = x3d.Background()
Background105.skyColor = [(0.8, 0.8, 1)]

Scene40.children.append(Background105)
NavigationInfo106 = x3d.NavigationInfo()

Scene40.children.append(NavigationInfo106)
Group107 = x3d.Group(DEF="HandleInlineLoading")
Inline108 = x3d.Inline(DEF="HumanoidInline")
Inline108.description = "remote HAnimHumanoid for IMPORT"
Inline108.url = ["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"]

Group107.children.append(Inline108)
LoadSensor109 = x3d.LoadSensor(DEF="HumanoidInlineLoadSensor")
LoadSensor109.timeOut = 2
Inline110 = x3d.Inline(USE="HumanoidInline")

LoadSensor109.children.append(Inline110)

Group107.children.append(LoadSensor109)

Scene40.children.append(Group107)
Viewpoint111 = x3d.Viewpoint()
Viewpoint111.description = "HAnimPose for HumanoidInline IMPORT model"
Viewpoint111.position = [0,1,4]

Scene40.children.append(Viewpoint111)
ProtoInstance112 = x3d.ProtoInstance(DEF="T_Pose")
ProtoInstance112.name = "HAnimPose"
fieldValue113 = x3d.fieldValue()
fieldValue113.name = "parentHAnimHumanoid"
HAnimHumanoid114 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue113.children.append(HAnimHumanoid114)

ProtoInstance112.fieldValue.append(fieldValue113)
fieldValue115 = x3d.fieldValue()
fieldValue115.name = "name"
fieldValue115.value = "T"

ProtoInstance112.fieldValue.append(fieldValue115)
fieldValue116 = x3d.fieldValue()
fieldValue116.name = "children"
HAnimJoint117 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder_1")
HAnimJoint117.description = "left shoulder"
HAnimJoint117.name = "l_shoulder"
HAnimJoint117.rotation = [0,0,1,1.57]

fieldValue116.children.append(HAnimJoint117)
HAnimJoint118 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder_1")
HAnimJoint118.description = "right shoulder"
HAnimJoint118.name = "r_shoulder"
HAnimJoint118.rotation = [0,0,-1,1.57]

fieldValue116.children.append(HAnimJoint118)

ProtoInstance112.fieldValue.append(fieldValue116)
fieldValue119 = x3d.fieldValue()
fieldValue119.name = "description"
fieldValue119.value = "arms stretched outward and level similar to letter T"

ProtoInstance112.fieldValue.append(fieldValue119)
fieldValue120 = x3d.fieldValue()
fieldValue120.name = "loa"
fieldValue120.value = "1"

ProtoInstance112.fieldValue.append(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.name = "transitionDuration"
fieldValue121.value = "1.3"

ProtoInstance112.fieldValue.append(fieldValue121)

Scene40.children.append(ProtoInstance112)
ProtoInstance122 = x3d.ProtoInstance(DEF="A_Pose")
ProtoInstance122.name = "HAnimPose"
fieldValue123 = x3d.fieldValue()
fieldValue123.name = "parentHAnimHumanoid"
HAnimHumanoid124 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue123.children.append(HAnimHumanoid124)

ProtoInstance122.fieldValue.append(fieldValue123)
fieldValue125 = x3d.fieldValue()
fieldValue125.name = "name"
fieldValue125.value = "A"

ProtoInstance122.fieldValue.append(fieldValue125)
fieldValue126 = x3d.fieldValue()
fieldValue126.name = "children"
HAnimJoint127 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder")
HAnimJoint127.description = "left shoulder"
HAnimJoint127.name = "l_shoulder"
HAnimJoint127.rotation = [0,0,1,0.5]

fieldValue126.children.append(HAnimJoint127)
HAnimJoint128 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder")
HAnimJoint128.description = "right shoulder"
HAnimJoint128.name = "r_shoulder"
HAnimJoint128.rotation = [0,0,-1,0.5]

fieldValue126.children.append(HAnimJoint128)

ProtoInstance122.fieldValue.append(fieldValue126)
fieldValue129 = x3d.fieldValue()
fieldValue129.name = "description"
fieldValue129.value = "arms stretched outward and downward similar to letter A"

ProtoInstance122.fieldValue.append(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.name = "loa"
fieldValue130.value = "1"

ProtoInstance122.fieldValue.append(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.name = "transitionDuration"
fieldValue131.value = "1.2"

ProtoInstance122.fieldValue.append(fieldValue131)

Scene40.children.append(ProtoInstance122)
ProtoInstance132 = x3d.ProtoInstance(DEF="TouchDown_Pose")
ProtoInstance132.name = "HAnimPose"
fieldValue133 = x3d.fieldValue()
fieldValue133.name = "parentHAnimHumanoid"
HAnimHumanoid134 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue133.children.append(HAnimHumanoid134)

ProtoInstance132.fieldValue.append(fieldValue133)
fieldValue135 = x3d.fieldValue()
fieldValue135.name = "name"
fieldValue135.value = "TouchDown"

ProtoInstance132.fieldValue.append(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.name = "children"
HAnimJoint137 = x3d.HAnimJoint(DEF="_1")
HAnimJoint137.name = "humanoid_root"
HAnimJoint137.rotation = [0,1,0,-0.698132]

fieldValue136.children.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint(DEF="_2")
HAnimJoint138.name = "l_hip"
HAnimJoint138.rotation = [-1,1,1,1]

fieldValue136.children.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint(DEF="_3")
HAnimJoint139.name = "l_knee"
HAnimJoint139.rotation = [1,0,0,1]

fieldValue136.children.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint(DEF="_4")
HAnimJoint140.name = "l_talocrural"
HAnimJoint140.rotation = [-0.2,0,0.1,0.225]

fieldValue136.children.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint(DEF="_5")
HAnimJoint141.name = "r_hip"
HAnimJoint141.rotation = [-1,-1,-1,1]

fieldValue136.children.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint(DEF="_6")
HAnimJoint142.name = "r_knee"
HAnimJoint142.rotation = [1,0,0,1]

fieldValue136.children.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint(DEF="_7")
HAnimJoint143.name = "r_talocrural"
HAnimJoint143.rotation = [-0.2,0,0.1,0.25]

fieldValue136.children.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint(DEF="_8")
HAnimJoint144.name = "vl5"
HAnimJoint144.rotation = [0,0,0.01,0.2]

fieldValue136.children.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint(DEF="_9")
HAnimJoint145.name = "vt10"
HAnimJoint145.rotation = [0,0,0.01,0.1]

fieldValue136.children.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint(DEF="_10")
HAnimJoint146.name = "vc4"
HAnimJoint146.rotation = [0,0,-0.01,0.15]

fieldValue136.children.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint(DEF="_11")
HAnimJoint147.name = "l_shoulder"
HAnimJoint147.rotation = [-1,0.5,1,2]

fieldValue136.children.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint(DEF="_12")
HAnimJoint148.name = "l_elbow"
HAnimJoint148.rotation = [-1,0,0,1]

fieldValue136.children.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint(DEF="_13")
HAnimJoint149.name = "l_radiocarpal"

fieldValue136.children.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint(DEF="_14")
HAnimJoint150.name = "r_shoulder"
HAnimJoint150.rotation = [-1,-0.5,-1,2.6]

fieldValue136.children.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint(DEF="_15")
HAnimJoint151.name = "r_elbow"
HAnimJoint151.rotation = [-1,0,0,1]

fieldValue136.children.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint(DEF="_16")
HAnimJoint152.name = "r_radiocarpal"

fieldValue136.children.append(HAnimJoint152)

ProtoInstance132.fieldValue.append(fieldValue136)
fieldValue153 = x3d.fieldValue()
fieldValue153.name = "description"
fieldValue153.value = "arms and legs stretched outward providing a TouchDown gesture"

ProtoInstance132.fieldValue.append(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.name = "loa"
fieldValue154.value = "1"

ProtoInstance132.fieldValue.append(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.name = "transitionDuration"
fieldValue155.value = "1.2"

ProtoInstance132.fieldValue.append(fieldValue155)

Scene40.children.append(ProtoInstance132)
ProtoInstance156 = x3d.ProtoInstance(DEF="I_Pose")
ProtoInstance156.name = "HAnimPose"
fieldValue157 = x3d.fieldValue()
fieldValue157.name = "parentHAnimHumanoid"
HAnimHumanoid158 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue157.children.append(HAnimHumanoid158)

ProtoInstance156.fieldValue.append(fieldValue157)
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "name"
fieldValue159.value = "I"

ProtoInstance156.fieldValue.append(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.name = "description"
fieldValue160.value = "arms and legs straight down default binding pose for baseline Humanoid"

ProtoInstance156.fieldValue.append(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "loa"
fieldValue161.value = "1"

ProtoInstance156.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "transitionDuration"
fieldValue162.value = "1.5"

ProtoInstance156.fieldValue.append(fieldValue162)

Scene40.children.append(ProtoInstance156)
ProtoInstance163 = x3d.ProtoInstance(DEF="H_Pose")
ProtoInstance163.name = "HAnimPose"
fieldValue164 = x3d.fieldValue()
fieldValue164.name = "name"
fieldValue164.value = "H"

ProtoInstance163.fieldValue.append(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "description"
fieldValue165.value = "TODO experimental pose not yet implemented"

ProtoInstance163.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "enabled"
fieldValue166.value = "false"

ProtoInstance163.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "transitionDuration"
fieldValue167.value = "1.4"

ProtoInstance163.fieldValue.append(fieldValue167)

Scene40.children.append(ProtoInstance163)
ProtoInstance168 = x3d.ProtoInstance(DEF="FaceLeft_Pose")
ProtoInstance168.name = "HAnimPose"
fieldValue169 = x3d.fieldValue()
fieldValue169.name = "parentHAnimHumanoid"
HAnimHumanoid170 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue169.children.append(HAnimHumanoid170)

ProtoInstance168.fieldValue.append(fieldValue169)
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "name"
fieldValue171.value = "FaceLeft"

ProtoInstance168.fieldValue.append(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "children"
HAnimJoint173 = x3d.HAnimJoint(DEF="FaceLeft_humanoid_root")
HAnimJoint173.description = "Only rotate the model"
HAnimJoint173.name = "humanoid_root"
HAnimJoint173.rotation = [0,1,0,1.570796]

fieldValue172.children.append(HAnimJoint173)

ProtoInstance168.fieldValue.append(fieldValue172)
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "description"
fieldValue174.value = "Only modify humanoid_root Joint node to face left"

ProtoInstance168.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "loa"
fieldValue175.value = "0"

ProtoInstance168.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "transitionDuration"
fieldValue176.value = "1.1"

ProtoInstance168.fieldValue.append(fieldValue176)

Scene40.children.append(ProtoInstance168)
ProtoInstance177 = x3d.ProtoInstance(DEF="FaceRight_Pose")
ProtoInstance177.name = "HAnimPose"
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "parentHAnimHumanoid"
HAnimHumanoid179 = x3d.HAnimHumanoid(USE="HumanoidImported")

fieldValue178.children.append(HAnimHumanoid179)

ProtoInstance177.fieldValue.append(fieldValue178)
fieldValue180 = x3d.fieldValue()
fieldValue180.name = "name"
fieldValue180.value = "FaceRight"

ProtoInstance177.fieldValue.append(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "children"
HAnimJoint182 = x3d.HAnimJoint(DEF="FaceRight_humanoid_root")
HAnimJoint182.description = "Only rotate the model"
HAnimJoint182.name = "humanoid_root"
HAnimJoint182.rotation = [0,1,0,-1.570796]

fieldValue181.children.append(HAnimJoint182)

ProtoInstance177.fieldValue.append(fieldValue181)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "description"
fieldValue183.value = "Only modify humanoid_root Joint node to face right"

ProtoInstance177.fieldValue.append(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.name = "loa"
fieldValue184.value = "0"

ProtoInstance177.fieldValue.append(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "transitionDuration"
fieldValue185.value = "1.1"

ProtoInstance177.fieldValue.append(fieldValue185)

Scene40.children.append(ProtoInstance177)
Group186 = x3d.Group(DEF="InterfaceButtonsGroup")
Transform187 = x3d.Transform(DEF="DisplayHeader")
Transform187.translation = [0,2,0]
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance(DEF="PoseTextAppearance")
Material190 = x3d.Material()
Material190.diffuseColor = [0.1,0.5,0.3]

Appearance189.material = Material190

Shape188.appearance = Appearance189
Text191 = x3d.Text()
Text191.string = ["HAnimPosePrototype example implementation"]
FontStyle192 = x3d.FontStyle(DEF="HeaderFont")
FontStyle192.family = ["SANS"]
FontStyle192.style = "BOLD"
FontStyle192.size = 0.15
FontStyle192.justify = ["MIDDLE","MIDDLE"]

Text191.fontStyle = FontStyle192

Shape188.geometry = Text191

Transform187.children.append(Shape188)

Group186.children.append(Transform187)
Transform193 = x3d.Transform(DEF="T_PoseInterface")
Transform193.translation = [-1.5,1.5,0]
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance(USE="PoseTextAppearance")

Shape194.appearance = Appearance195
Text196 = x3d.Text()
Text196.string = ["\"T\" Pose"]
FontStyle197 = x3d.FontStyle(DEF="SharedFont")
FontStyle197.family = ["SANS"]
FontStyle197.style = "BOLD"
FontStyle197.size = 0.1
FontStyle197.justify = ["MIDDLE","MIDDLE"]

Text196.fontStyle = FontStyle197

Shape194.geometry = Text196

Transform193.children.append(Shape194)
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance(DEF="TransparentAppearance")
Material200 = x3d.Material()
Material200.transparency = 0.8

Appearance199.material = Material200

Shape198.appearance = Appearance199
Box201 = x3d.Box()
Box201.size = [0.45,0.2,0.001]

Shape198.geometry = Box201

Transform193.children.append(Shape198)
TouchSensor202 = x3d.TouchSensor(DEF="T_PoseTouchSensor")
TouchSensor202.description = "select to move shoulders to \"T\" pose, leave other joints unchanged"

Transform193.children.append(TouchSensor202)

Group186.children.append(Transform193)
Transform203 = x3d.Transform(DEF="A_PoseInterface")
Transform203.translation = [-1.5,1,0]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance(USE="PoseTextAppearance")

Shape204.appearance = Appearance205
Text206 = x3d.Text()
Text206.string = ["\"A\" Pose"]
FontStyle207 = x3d.FontStyle(USE="SharedFont")

Text206.fontStyle = FontStyle207

Shape204.geometry = Text206

Transform203.children.append(Shape204)
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance(USE="TransparentAppearance")

Shape208.appearance = Appearance209
Box210 = x3d.Box()
Box210.size = [0.45,0.2,0.001]

Shape208.geometry = Box210

Transform203.children.append(Shape208)
TouchSensor211 = x3d.TouchSensor(DEF="A_PoseTouchSensor")
TouchSensor211.description = "select to move shoulders to \"A\" pose, leave other joints unchanged"

Transform203.children.append(TouchSensor211)

Group186.children.append(Transform203)
Transform212 = x3d.Transform(DEF="TouchDown_PoseInterface")
Transform212.translation = [-1.5,0.5,0]
Shape213 = x3d.Shape()
Appearance214 = x3d.Appearance(USE="PoseTextAppearance")

Shape213.appearance = Appearance214
Text215 = x3d.Text()
Text215.string = ["TouchDown Pose"]
FontStyle216 = x3d.FontStyle(USE="SharedFont")

Text215.fontStyle = FontStyle216

Shape213.geometry = Text215

Transform212.children.append(Shape213)
Shape217 = x3d.Shape()
Appearance218 = x3d.Appearance(USE="TransparentAppearance")

Shape217.appearance = Appearance218
Box219 = x3d.Box()
Box219.size = [0.85,0.2,0.001]

Shape217.geometry = Box219

Transform212.children.append(Shape217)
TouchSensor220 = x3d.TouchSensor(DEF="TouchDown_PoseTouchSensor")
TouchSensor220.description = "select to transition all joints to TouchDown pose"

Transform212.children.append(TouchSensor220)

Group186.children.append(Transform212)
Transform221 = x3d.Transform(DEF="I_PoseInterface")
Transform221.translation = [-1.5,0,0]
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance(USE="PoseTextAppearance")

Shape222.appearance = Appearance223
Text224 = x3d.Text()
Text224.string = ["\"I\" Pose"]
FontStyle225 = x3d.FontStyle(USE="SharedFont")

Text224.fontStyle = FontStyle225

Shape222.geometry = Text224

Transform221.children.append(Shape222)
Shape226 = x3d.Shape()
Appearance227 = x3d.Appearance(USE="TransparentAppearance")

Shape226.appearance = Appearance227
Box228 = x3d.Box()
Box228.size = [0.45,0.2,0.001]

Shape226.geometry = Box228

Transform221.children.append(Shape226)
TouchSensor229 = x3d.TouchSensor(DEF="I_PoseTouchSensor")
TouchSensor229.description = "select to transition all joints to \"I\" pose"

Transform221.children.append(TouchSensor229)

Group186.children.append(Transform221)
Transform230 = x3d.Transform(DEF="FaceLeftPoseInterface")
Transform230.translation = [1.5,1.5,0]
Shape231 = x3d.Shape()
Appearance232 = x3d.Appearance(USE="PoseTextAppearance")

Shape231.appearance = Appearance232
Text233 = x3d.Text()
Text233.string = ["Face Left Pose"]
FontStyle234 = x3d.FontStyle(USE="SharedFont")

Text233.fontStyle = FontStyle234

Shape231.geometry = Text233

Transform230.children.append(Shape231)
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance(USE="TransparentAppearance")

Shape235.appearance = Appearance236
Box237 = x3d.Box()
Box237.size = [0.9,0.2,0.001]

Shape235.geometry = Box237

Transform230.children.append(Shape235)
TouchSensor238 = x3d.TouchSensor(DEF="FaceLeftTouchSensor")
TouchSensor238.description = "select to rotate body and Face Left, leave other joints unchanged"

Transform230.children.append(TouchSensor238)

Group186.children.append(Transform230)
Transform239 = x3d.Transform(DEF="FaceRightPoseInterface")
Transform239.translation = [1.5,1,0]
Shape240 = x3d.Shape()
Appearance241 = x3d.Appearance(USE="PoseTextAppearance")

Shape240.appearance = Appearance241
Text242 = x3d.Text()
Text242.string = ["Face Right Pose"]
FontStyle243 = x3d.FontStyle(USE="SharedFont")

Text242.fontStyle = FontStyle243

Shape240.geometry = Text242

Transform239.children.append(Shape240)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance(USE="TransparentAppearance")

Shape244.appearance = Appearance245
Box246 = x3d.Box()
Box246.size = [0.9,0.2,0.001]

Shape244.geometry = Box246

Transform239.children.append(Shape244)
TouchSensor247 = x3d.TouchSensor(DEF="FaceRightTouchSensor")
TouchSensor247.description = "select to rotate body and Face Right, leave other joints unchanged"

Transform239.children.append(TouchSensor247)

Group186.children.append(Transform239)
Transform248 = x3d.Transform(DEF="AnimatePosesInterface")
Transform248.translation = [1.5,0.5,0]
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance(DEF="AnimationTextAppearance")
Material251 = x3d.Material()
Material251.diffuseColor = [0.1,0.2,0.3]

Appearance250.material = Material251

Shape249.appearance = Appearance250
Text252 = x3d.Text()
Text252.string = ["Direct animation","to, from \"I\" Pose"]
FontStyle253 = x3d.FontStyle(USE="SharedFont")

Text252.fontStyle = FontStyle253

Shape249.geometry = Text252

Transform248.children.append(Shape249)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance(USE="TransparentAppearance")

Shape254.appearance = Appearance255
Box256 = x3d.Box()
Box256.size = [0.9,0.25,0.001]

Shape254.geometry = Box256

Transform248.children.append(Shape254)
TouchSensor257 = x3d.TouchSensor(DEF="AnimatePosesTouchSensor")
TouchSensor257.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"

Transform248.children.append(TouchSensor257)
TimeSensor258 = x3d.TimeSensor(DEF="AnimatePosesClock")
TimeSensor258.description = "directly animate several poses"
TimeSensor258.cycleInterval = 4

Transform248.children.append(TimeSensor258)
ScalarInterpolator259 = x3d.ScalarInterpolator(DEF="AnimatePosesLoopInterpolator")
ScalarInterpolator259.key = [0,0.05,0.45,0.55,0.95,1]
ScalarInterpolator259.keyValue = [0,0,1,1,0,0]

Transform248.children.append(ScalarInterpolator259)

Group186.children.append(Transform248)
Transform260 = x3d.Transform(DEF="ResetDefaultPoseInterface")
Transform260.translation = [1.5,0,0]
Shape261 = x3d.Shape()
Appearance262 = x3d.Appearance(USE="AnimationTextAppearance")

Shape261.appearance = Appearance262
Text263 = x3d.Text()
Text263.string = ["Reset All Joints","to Default \"I\" Pose"]
FontStyle264 = x3d.FontStyle(USE="SharedFont")

Text263.fontStyle = FontStyle264

Shape261.geometry = Text263

Transform260.children.append(Shape261)
Shape265 = x3d.Shape()
Appearance266 = x3d.Appearance(USE="TransparentAppearance")

Shape265.appearance = Appearance266
Box267 = x3d.Box()
Box267.size = [0.9,0.25,0.001]

Shape265.geometry = Box267

Transform260.children.append(Shape265)
TouchSensor268 = x3d.TouchSensor(DEF="ResetPoseTouchSensor")
TouchSensor268.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"

Transform260.children.append(TouchSensor268)

Group186.children.append(Transform260)

Scene40.children.append(Group186)
Group269 = x3d.Group(DEF="HandleInlineLoadsensorRouting")

Scene40.children.append(Group269)
IMPORT270 = x3d.IMPORT()
IMPORT270.inlineDEF = "HumanoidInline"
IMPORT270.importedDEF = "BoxMan2"
IMPORT270.AS = "HumanoidImported"

Scene40.children.append(IMPORT270)
ROUTE271 = x3d.ROUTE()
ROUTE271.fromNode = "T_PoseTouchSensor"
ROUTE271.fromField = "isActive"
ROUTE271.toNode = "T_Pose"
ROUTE271.toField = "commencePose"

Scene40.children.append(ROUTE271)
ROUTE272 = x3d.ROUTE()
ROUTE272.fromNode = "A_PoseTouchSensor"
ROUTE272.fromField = "isActive"
ROUTE272.toNode = "A_Pose"
ROUTE272.toField = "commencePose"

Scene40.children.append(ROUTE272)
ROUTE273 = x3d.ROUTE()
ROUTE273.fromNode = "TouchDown_PoseTouchSensor"
ROUTE273.fromField = "isActive"
ROUTE273.toNode = "TouchDown_Pose"
ROUTE273.toField = "commencePose"

Scene40.children.append(ROUTE273)
ROUTE274 = x3d.ROUTE()
ROUTE274.fromNode = "I_PoseTouchSensor"
ROUTE274.fromField = "isActive"
ROUTE274.toNode = "I_Pose"
ROUTE274.toField = "commencePose"

Scene40.children.append(ROUTE274)
ROUTE275 = x3d.ROUTE()
ROUTE275.fromNode = "FaceLeftTouchSensor"
ROUTE275.fromField = "isActive"
ROUTE275.toNode = "FaceLeft_Pose"
ROUTE275.toField = "commencePose"

Scene40.children.append(ROUTE275)
ROUTE276 = x3d.ROUTE()
ROUTE276.fromNode = "FaceRightTouchSensor"
ROUTE276.fromField = "isActive"
ROUTE276.toNode = "FaceRight_Pose"
ROUTE276.toField = "commencePose"

Scene40.children.append(ROUTE276)
ROUTE277 = x3d.ROUTE()
ROUTE277.fromNode = "AnimatePosesTouchSensor"
ROUTE277.fromField = "touchTime"
ROUTE277.toNode = "AnimatePosesClock"
ROUTE277.toField = "set_startTime"

Scene40.children.append(ROUTE277)
ROUTE278 = x3d.ROUTE()
ROUTE278.fromNode = "AnimatePosesClock"
ROUTE278.fromField = "fraction_changed"
ROUTE278.toNode = "AnimatePosesLoopInterpolator"
ROUTE278.toField = "set_fraction"

Scene40.children.append(ROUTE278)
ROUTE279 = x3d.ROUTE()
ROUTE279.fromNode = "AnimatePosesLoopInterpolator"
ROUTE279.fromField = "value_changed"
ROUTE279.toNode = "I_Pose"
ROUTE279.toField = "set_fraction"

Scene40.children.append(ROUTE279)
ROUTE280 = x3d.ROUTE()
ROUTE280.fromNode = "ResetPoseTouchSensor"
ROUTE280.fromField = "isActive"
ROUTE280.toNode = "FaceLeft_Pose"
ROUTE280.toField = "resetAllJoints"

Scene40.children.append(ROUTE280)
ROUTE281 = x3d.ROUTE()
ROUTE281.fromNode = "HumanoidInlineLoadSensor"
ROUTE281.fromField = "isLoaded"
ROUTE281.toNode = "A_Pose"
ROUTE281.toField = "isLoaded"

Scene40.children.append(ROUTE281)
ROUTE282 = x3d.ROUTE()
ROUTE282.fromNode = "HumanoidInlineLoadSensor"
ROUTE282.fromField = "isLoaded"
ROUTE282.toNode = "H_Pose"
ROUTE282.toField = "isLoaded"

Scene40.children.append(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.fromNode = "HumanoidInlineLoadSensor"
ROUTE283.fromField = "isLoaded"
ROUTE283.toNode = "I_Pose"
ROUTE283.toField = "isLoaded"

Scene40.children.append(ROUTE283)
ROUTE284 = x3d.ROUTE()
ROUTE284.fromNode = "HumanoidInlineLoadSensor"
ROUTE284.fromField = "isLoaded"
ROUTE284.toNode = "T_Pose"
ROUTE284.toField = "isLoaded"

Scene40.children.append(ROUTE284)
ROUTE285 = x3d.ROUTE()
ROUTE285.fromNode = "HumanoidInlineLoadSensor"
ROUTE285.fromField = "isLoaded"
ROUTE285.toNode = "FaceLeft_Pose"
ROUTE285.toField = "isLoaded"

Scene40.children.append(ROUTE285)
ROUTE286 = x3d.ROUTE()
ROUTE286.fromNode = "HumanoidInlineLoadSensor"
ROUTE286.fromField = "isLoaded"
ROUTE286.toNode = "FaceRight_Pose"
ROUTE286.toField = "isLoaded"

Scene40.children.append(ROUTE286)
ROUTE287 = x3d.ROUTE()
ROUTE287.fromNode = "HumanoidInlineLoadSensor"
ROUTE287.fromField = "isLoaded"
ROUTE287.toNode = "TouchDown_Pose"
ROUTE287.toField = "isLoaded"

Scene40.children.append(ROUTE287)

X3D0.Scene = Scene40
f = open("../data/HAnimPosePrototype.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPosePrototype.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

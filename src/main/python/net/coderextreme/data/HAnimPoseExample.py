print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "HAnimPoseExample.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "created"
meta4.content = "11 December 2025"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "14 December 2025"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "warning"
meta7.content = "under development for X3D 4.1"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "specificationSection"
meta8.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "specificationUrl"
meta9.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "specificationSection"
meta10.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "specificationUrl"
meta11.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "specificationSection"
meta12.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "specificationUrl"
meta13.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "https://www.web3d.org/x3d/content/examples/license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo18.info = ["Example scene for HAnimPose node"]
WorldInfo18.title = "HAnimPoseExample.x3d"

Scene17.children.append(WorldInfo18)
Background19 = x3d.Background()
Background19.skyColor = [(0.8, 0.8, 1)]

Scene17.children.append(Background19)
NavigationInfo20 = x3d.NavigationInfo()

Scene17.children.append(NavigationInfo20)
Group21 = x3d.Group(DEF="HandleInlineLoading")
Group21.children.append(x3d.Comment("""Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"""))
Group21.children.append(x3d.Comment("""Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"""))
Inline22 = x3d.Inline(DEF="HumanoidInline")
Inline22.description = "remote HAnimHumanoid for IMPORT"
Inline22.url = ["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"]

Group21.children.append(Inline22)
Group21.children.append(x3d.Comment("""Note that the following importedDEF must match the EXPORT name found in remote file"""))
IMPORT23 = x3d.IMPORT()
IMPORT23.AS = "HumanoidImported"
IMPORT23.importedDEF = "JoeSkeletonSkinSite"
IMPORT23.inlineDEF = "HumanoidInline"

Group21.children.append(IMPORT23)
LoadSensor24 = x3d.LoadSensor(DEF="HumanoidInlineLoadSensor")
LoadSensor24.timeOut = 2
Inline25 = x3d.Inline(USE="HumanoidInline")

LoadSensor24.children.append(Inline25)

Group21.children.append(LoadSensor24)

Scene17.children.append(Group21)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.description = "HAnimPose for HumanoidInline IMPORT model"
Viewpoint26.position = [0,1,4]

Scene17.children.append(Viewpoint26)
Scene17.children.append(x3d.Comment("""no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."""))
HAnimPose27 = x3d.HAnimPose(DEF="T_Pose")
HAnimPose27.name = "T"
HAnimPose27.description = "arms stretched outward and level similar to letter T"
HAnimPose27.loa = 1
HAnimPose27.transitionDuration = 1.3
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "metadataTest"
MetadataString28.value = ["hello HAnimPose metadata"]

HAnimPose27.metadata = MetadataString28
HAnimPose27.children.append(x3d.Comment("""test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/"""))
HAnimJoint29 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder_1")
HAnimJoint29.name = "l_shoulder"
HAnimJoint29.description = "left shoulder"
HAnimJoint29.rotation = [0,0,1,1.57]
HAnimJoint29.ulimit = [0,0,0]
HAnimJoint29.llimit = [0,0,0]

HAnimPose27.children.append(HAnimJoint29)
HAnimJoint30 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder_1")
HAnimJoint30.name = "r_shoulder"
HAnimJoint30.description = "right shoulder"
HAnimJoint30.rotation = [0,0,-1,1.57]
HAnimJoint30.ulimit = [0,0,0]
HAnimJoint30.llimit = [0,0,0]

HAnimPose27.children.append(HAnimJoint30)

Scene17.children.append(HAnimPose27)
HAnimPose31 = x3d.HAnimPose(DEF="A_Pose")
HAnimPose31.name = "A"
HAnimPose31.description = "arms stretched outward and downward similar to letter A"
HAnimPose31.loa = 1
HAnimPose31.transitionDuration = 1.2
HAnimJoint32 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder")
HAnimJoint32.name = "l_shoulder"
HAnimJoint32.description = "left shoulder"
HAnimJoint32.rotation = [0,0,1,0.5]
HAnimJoint32.ulimit = [0,0,0]
HAnimJoint32.llimit = [0,0,0]

HAnimPose31.children.append(HAnimJoint32)
HAnimJoint33 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder")
HAnimJoint33.name = "r_shoulder"
HAnimJoint33.description = "right shoulder"
HAnimJoint33.rotation = [0,0,-1,0.5]
HAnimJoint33.ulimit = [0,0,0]
HAnimJoint33.llimit = [0,0,0]

HAnimPose31.children.append(HAnimJoint33)

Scene17.children.append(HAnimPose31)
HAnimPose34 = x3d.HAnimPose(DEF="TouchDown_Pose")
HAnimPose34.name = "TouchDown"
HAnimPose34.description = "arms and legs stretched outward providing a TouchDown gesture"
HAnimPose34.loa = 1
HAnimPose34.transitionDuration = 1.2
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.name = "humanoid_root"
HAnimJoint35.rotation = [0,1,0,-0.698132]
HAnimJoint35.ulimit = [0,0,0]
HAnimJoint35.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint35)
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.name = "l_hip"
HAnimJoint36.rotation = [-1,1,1,1]
HAnimJoint36.ulimit = [0,0,0]
HAnimJoint36.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint36)
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.name = "l_knee"
HAnimJoint37.rotation = [1,0,0,1]
HAnimJoint37.ulimit = [0,0,0]
HAnimJoint37.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint37)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.name = "l_talocrural"
HAnimJoint38.rotation = [-0.2,0,0.1,0.225]
HAnimJoint38.ulimit = [0,0,0]
HAnimJoint38.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint38)
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.name = "r_hip"
HAnimJoint39.rotation = [-1,-1,-1,1]
HAnimJoint39.ulimit = [0,0,0]
HAnimJoint39.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint39)
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.name = "r_knee"
HAnimJoint40.rotation = [1,0,0,1]
HAnimJoint40.ulimit = [0,0,0]
HAnimJoint40.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint40)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.name = "r_talocrural"
HAnimJoint41.rotation = [-0.2,0,0.1,0.25]
HAnimJoint41.ulimit = [0,0,0]
HAnimJoint41.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint41)
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.name = "vl5"
HAnimJoint42.rotation = [0,0,0.01,0.2]
HAnimJoint42.ulimit = [0,0,0]
HAnimJoint42.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint42)
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.name = "vt10"
HAnimJoint43.rotation = [0,0,0.01,0.1]
HAnimJoint43.ulimit = [0,0,0]
HAnimJoint43.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint43)
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.name = "vc4"
HAnimJoint44.rotation = [0,0,-0.01,0.15]
HAnimJoint44.ulimit = [0,0,0]
HAnimJoint44.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint44)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "l_shoulder"
HAnimJoint45.rotation = [-1,0.5,1,2]
HAnimJoint45.ulimit = [0,0,0]
HAnimJoint45.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint45)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.name = "l_elbow"
HAnimJoint46.rotation = [-1,0,0,1]
HAnimJoint46.ulimit = [0,0,0]
HAnimJoint46.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint46)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.name = "l_radiocarpal"
HAnimJoint47.ulimit = [0,0,0]
HAnimJoint47.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint47)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.name = "r_shoulder"
HAnimJoint48.rotation = [-1,-0.5,-1,2.6]
HAnimJoint48.ulimit = [0,0,0]
HAnimJoint48.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint48)
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.name = "r_elbow"
HAnimJoint49.rotation = [-1,0,0,1]
HAnimJoint49.ulimit = [0,0,0]
HAnimJoint49.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint49)
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.name = "r_radiocarpal"
HAnimJoint50.ulimit = [0,0,0]
HAnimJoint50.llimit = [0,0,0]

HAnimPose34.children.append(HAnimJoint50)

Scene17.children.append(HAnimPose34)
HAnimPose51 = x3d.HAnimPose(DEF="I_Pose")
HAnimPose51.name = "I"
HAnimPose51.description = "arms and legs straight down default binding pose for baseline Humanoid"
HAnimPose51.loa = 1
HAnimPose51.transitionDuration = 1.5
HAnimPose51.children.append(x3d.Comment("""not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose"""))

Scene17.children.append(HAnimPose51)
HAnimPose52 = x3d.HAnimPose(DEF="H_Pose")
HAnimPose52.name = "H"
HAnimPose52.description = "TODO experimental pose not yet implemented"
HAnimPose52.enabled = False
HAnimPose52.transitionDuration = 1.4
HAnimPose52.loa = -1
HAnimPose52.children.append(x3d.Comment("""TODO define poseJoint HAnimJoint nodes"""))

Scene17.children.append(HAnimPose52)
HAnimPose53 = x3d.HAnimPose(DEF="FaceLeft_Pose")
HAnimPose53.name = "FaceLeft"
HAnimPose53.description = "Only modify humanoid_root Joint node to face left"
HAnimPose53.loa = 0
HAnimPose53.transitionDuration = 1.1
HAnimJoint54 = x3d.HAnimJoint(DEF="FaceLeft_humanoid_root")
HAnimJoint54.name = "humanoid_root"
HAnimJoint54.description = "Only rotate the model"
HAnimJoint54.rotation = [0,1,0,1.570796]
HAnimJoint54.ulimit = [0,0,0]
HAnimJoint54.llimit = [0,0,0]

HAnimPose53.children.append(HAnimJoint54)

Scene17.children.append(HAnimPose53)
HAnimPose55 = x3d.HAnimPose(DEF="FaceRight_Pose")
HAnimPose55.name = "FaceRight"
HAnimPose55.description = "Only modify humanoid_root Joint node to face right"
HAnimPose55.loa = 0
HAnimPose55.transitionDuration = 1.1
HAnimJoint56 = x3d.HAnimJoint(DEF="FaceRight_humanoid_root")
HAnimJoint56.name = "humanoid_root"
HAnimJoint56.description = "Only rotate the model"
HAnimJoint56.rotation = [0,1,0,-1.570796]
HAnimJoint56.ulimit = [0,0,0]
HAnimJoint56.llimit = [0,0,0]

HAnimPose55.children.append(HAnimJoint56)

Scene17.children.append(HAnimPose55)
Group57 = x3d.Group(DEF="InterfaceButtonsGroup")
Transform58 = x3d.Transform(DEF="DisplayHeader")
Transform58.translation = [0,2,0]
Shape59 = x3d.Shape()
Text60 = x3d.Text()
Text60.string = ["HAnimPosePrototype example implementation"]
FontStyle61 = x3d.FontStyle(DEF="HeaderFont")
FontStyle61.family = ["SANS"]
FontStyle61.justify = ["MIDDLE","MIDDLE"]
FontStyle61.size = 0.15
FontStyle61.style = "BOLD"

Text60.fontStyle = FontStyle61

Shape59.geometry = Text60
Appearance62 = x3d.Appearance(DEF="PoseTextAppearance")
Material63 = x3d.Material()
Material63.diffuseColor = [0.1,0.5,0.3]

Appearance62.material = Material63

Shape59.appearance = Appearance62

Transform58.children.append(Shape59)

Group57.children.append(Transform58)
Transform64 = x3d.Transform(DEF="T_PoseInterface")
Transform64.translation = [-1.5,1.5,0]
Shape65 = x3d.Shape()
Text66 = x3d.Text()
Text66.string = ["\"T\" Pose"]
FontStyle67 = x3d.FontStyle(DEF="SharedFont")
FontStyle67.family = ["SANS"]
FontStyle67.justify = ["MIDDLE","MIDDLE"]
FontStyle67.size = 0.1
FontStyle67.style = "BOLD"

Text66.fontStyle = FontStyle67

Shape65.geometry = Text66
Appearance68 = x3d.Appearance(USE="PoseTextAppearance")

Shape65.appearance = Appearance68

Transform64.children.append(Shape65)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance(DEF="TransparentAppearance")
Material71 = x3d.Material()
Material71.transparency = 0.8

Appearance70.material = Material71

Shape69.appearance = Appearance70
Box72 = x3d.Box()
Box72.size = [0.45,0.2,0.001]

Shape69.geometry = Box72

Transform64.children.append(Shape69)
TouchSensor73 = x3d.TouchSensor(DEF="T_PoseTouchSensor")
TouchSensor73.description = "select to move shoulders to \"T\" pose, leave other joints unchanged"

Transform64.children.append(TouchSensor73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromField = "isActive"
ROUTE74.fromNode = "T_PoseTouchSensor"
ROUTE74.toField = "commencePose"
ROUTE74.toNode = "T_Pose"

Transform64.children.append(ROUTE74)

Group57.children.append(Transform64)
Transform75 = x3d.Transform(DEF="A_PoseInterface")
Transform75.translation = [-1.5,1,0]
Shape76 = x3d.Shape()
Text77 = x3d.Text()
Text77.string = ["\"A\" Pose"]
FontStyle78 = x3d.FontStyle(USE="SharedFont")

Text77.fontStyle = FontStyle78

Shape76.geometry = Text77
Appearance79 = x3d.Appearance(USE="PoseTextAppearance")

Shape76.appearance = Appearance79

Transform75.children.append(Shape76)
Shape80 = x3d.Shape()
Shape80.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance81 = x3d.Appearance(USE="TransparentAppearance")

Shape80.appearance = Appearance81
Box82 = x3d.Box()
Box82.size = [0.45,0.2,0.001]

Shape80.geometry = Box82

Transform75.children.append(Shape80)
TouchSensor83 = x3d.TouchSensor(DEF="A_PoseTouchSensor")
TouchSensor83.description = "select to move shoulders to \"A\" pose, leave other joints unchanged"

Transform75.children.append(TouchSensor83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromField = "isActive"
ROUTE84.fromNode = "A_PoseTouchSensor"
ROUTE84.toField = "commencePose"
ROUTE84.toNode = "A_Pose"

Transform75.children.append(ROUTE84)

Group57.children.append(Transform75)
Transform85 = x3d.Transform(DEF="TouchDown_PoseInterface")
Transform85.translation = [-1.5,0.5,0]
Shape86 = x3d.Shape()
Text87 = x3d.Text()
Text87.string = ["TouchDown Pose"]
FontStyle88 = x3d.FontStyle(USE="SharedFont")

Text87.fontStyle = FontStyle88

Shape86.geometry = Text87
Appearance89 = x3d.Appearance(USE="PoseTextAppearance")

Shape86.appearance = Appearance89

Transform85.children.append(Shape86)
Shape90 = x3d.Shape()
Shape90.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance91 = x3d.Appearance(USE="TransparentAppearance")

Shape90.appearance = Appearance91
Box92 = x3d.Box()
Box92.size = [0.85,0.2,0.001]

Shape90.geometry = Box92

Transform85.children.append(Shape90)
TouchSensor93 = x3d.TouchSensor(DEF="TouchDown_PoseTouchSensor")
TouchSensor93.description = "select to transition all joints to TouchDown pose"

Transform85.children.append(TouchSensor93)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromField = "isActive"
ROUTE94.fromNode = "TouchDown_PoseTouchSensor"
ROUTE94.toField = "commencePose"
ROUTE94.toNode = "TouchDown_Pose"

Transform85.children.append(ROUTE94)

Group57.children.append(Transform85)
Transform95 = x3d.Transform(DEF="I_PoseInterface")
Transform95.translation = [-1.5,0,0]
Shape96 = x3d.Shape()
Text97 = x3d.Text()
Text97.string = ["\"I\" Pose"]
FontStyle98 = x3d.FontStyle(USE="SharedFont")

Text97.fontStyle = FontStyle98

Shape96.geometry = Text97
Appearance99 = x3d.Appearance(USE="PoseTextAppearance")

Shape96.appearance = Appearance99

Transform95.children.append(Shape96)
Shape100 = x3d.Shape()
Shape100.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance101 = x3d.Appearance(USE="TransparentAppearance")

Shape100.appearance = Appearance101
Box102 = x3d.Box()
Box102.size = [0.45,0.2,0.001]

Shape100.geometry = Box102

Transform95.children.append(Shape100)
TouchSensor103 = x3d.TouchSensor(DEF="I_PoseTouchSensor")
TouchSensor103.description = "select to transition all joints to \"I\" pose"

Transform95.children.append(TouchSensor103)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromField = "isActive"
ROUTE104.fromNode = "I_PoseTouchSensor"
ROUTE104.toField = "commencePose"
ROUTE104.toNode = "I_Pose"

Transform95.children.append(ROUTE104)

Group57.children.append(Transform95)
Transform105 = x3d.Transform(DEF="FaceLeftPoseInterface")
Transform105.translation = [1.5,1.5,0]
Shape106 = x3d.Shape()
Text107 = x3d.Text()
Text107.string = ["Face Left Pose"]
FontStyle108 = x3d.FontStyle(USE="SharedFont")

Text107.fontStyle = FontStyle108

Shape106.geometry = Text107
Appearance109 = x3d.Appearance(USE="PoseTextAppearance")

Shape106.appearance = Appearance109

Transform105.children.append(Shape106)
Shape110 = x3d.Shape()
Appearance111 = x3d.Appearance(USE="TransparentAppearance")

Shape110.appearance = Appearance111
Box112 = x3d.Box()
Box112.size = [0.9,0.2,0.001]

Shape110.geometry = Box112

Transform105.children.append(Shape110)
TouchSensor113 = x3d.TouchSensor(DEF="FaceLeftTouchSensor")
TouchSensor113.description = "select to rotate body and Face Left, leave other joints unchanged"

Transform105.children.append(TouchSensor113)
ROUTE114 = x3d.ROUTE()
ROUTE114.fromField = "isActive"
ROUTE114.fromNode = "FaceLeftTouchSensor"
ROUTE114.toField = "commencePose"
ROUTE114.toNode = "FaceLeft_Pose"

Transform105.children.append(ROUTE114)

Group57.children.append(Transform105)
Transform115 = x3d.Transform(DEF="FaceRightPoseInterface")
Transform115.translation = [1.5,1,0]
Shape116 = x3d.Shape()
Text117 = x3d.Text()
Text117.string = ["Face Right Pose"]
FontStyle118 = x3d.FontStyle(USE="SharedFont")

Text117.fontStyle = FontStyle118

Shape116.geometry = Text117
Appearance119 = x3d.Appearance(USE="PoseTextAppearance")

Shape116.appearance = Appearance119

Transform115.children.append(Shape116)
Shape120 = x3d.Shape()
Shape120.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance121 = x3d.Appearance(USE="TransparentAppearance")

Shape120.appearance = Appearance121
Box122 = x3d.Box()
Box122.size = [0.9,0.2,0.001]

Shape120.geometry = Box122

Transform115.children.append(Shape120)
TouchSensor123 = x3d.TouchSensor(DEF="FaceRightTouchSensor")
TouchSensor123.description = "select to rotate body and Face Right, leave other joints unchanged"

Transform115.children.append(TouchSensor123)
ROUTE124 = x3d.ROUTE()
ROUTE124.fromField = "isActive"
ROUTE124.fromNode = "FaceRightTouchSensor"
ROUTE124.toField = "commencePose"
ROUTE124.toNode = "FaceRight_Pose"

Transform115.children.append(ROUTE124)

Group57.children.append(Transform115)
Transform125 = x3d.Transform(DEF="AnimatePosesInterface")
Transform125.translation = [1.5,0.5,0]
Shape126 = x3d.Shape()
Text127 = x3d.Text()
Text127.string = ["Direct animation","to, from \"I\" Pose"]
FontStyle128 = x3d.FontStyle(USE="SharedFont")

Text127.fontStyle = FontStyle128

Shape126.geometry = Text127
Appearance129 = x3d.Appearance(DEF="AnimationTextAppearance")
Material130 = x3d.Material()
Material130.diffuseColor = [0.1,0.2,0.3]

Appearance129.material = Material130

Shape126.appearance = Appearance129

Transform125.children.append(Shape126)
Shape131 = x3d.Shape()
Shape131.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance132 = x3d.Appearance(USE="TransparentAppearance")

Shape131.appearance = Appearance132
Box133 = x3d.Box()
Box133.size = [0.9,0.25,0.001]

Shape131.geometry = Box133

Transform125.children.append(Shape131)
TouchSensor134 = x3d.TouchSensor(DEF="AnimatePosesTouchSensor")
TouchSensor134.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"

Transform125.children.append(TouchSensor134)
Transform125.children.append(x3d.Comment("""cycleInterval=4 also hard-coded in script execution message"""))
TimeSensor135 = x3d.TimeSensor(DEF="AnimatePosesClock")
TimeSensor135.cycleInterval = 4
TimeSensor135.description = "directly animate several poses"

Transform125.children.append(TimeSensor135)
ScalarInterpolator136 = x3d.ScalarInterpolator(DEF="AnimatePosesLoopInterpolator")
ScalarInterpolator136.key = [0,0.05,0.45,0.55,0.95,1]
ScalarInterpolator136.keyValue = [0,0,1,1,0,0]

Transform125.children.append(ScalarInterpolator136)
ROUTE137 = x3d.ROUTE()
ROUTE137.fromField = "touchTime"
ROUTE137.fromNode = "AnimatePosesTouchSensor"
ROUTE137.toField = "startTime"
ROUTE137.toNode = "AnimatePosesClock"

Transform125.children.append(ROUTE137)
ROUTE138 = x3d.ROUTE()
ROUTE138.fromField = "fraction_changed"
ROUTE138.fromNode = "AnimatePosesClock"
ROUTE138.toField = "set_fraction"
ROUTE138.toNode = "AnimatePosesLoopInterpolator"

Transform125.children.append(ROUTE138)
ROUTE139 = x3d.ROUTE()
ROUTE139.fromField = "value_changed"
ROUTE139.fromNode = "AnimatePosesLoopInterpolator"
ROUTE139.toField = "set_fraction"
ROUTE139.toNode = "I_Pose"

Transform125.children.append(ROUTE139)

Group57.children.append(Transform125)
Transform140 = x3d.Transform(DEF="ResetDefaultPoseInterface")
Transform140.translation = [1.5,0,0]
Shape141 = x3d.Shape()
Text142 = x3d.Text()
Text142.string = ["Reset All Joints","to Default \"I\" Pose"]
FontStyle143 = x3d.FontStyle(USE="SharedFont")

Text142.fontStyle = FontStyle143

Shape141.geometry = Text142
Appearance144 = x3d.Appearance(USE="AnimationTextAppearance")

Shape141.appearance = Appearance144

Transform140.children.append(Shape141)
Shape145 = x3d.Shape()
Shape145.children.append(x3d.Comment("""Selectable Text transparent Box for easy user selection"""))
Appearance146 = x3d.Appearance(USE="TransparentAppearance")

Shape145.appearance = Appearance146
Box147 = x3d.Box()
Box147.size = [0.9,0.25,0.001]

Shape145.geometry = Box147

Transform140.children.append(Shape145)
TouchSensor148 = x3d.TouchSensor(DEF="ResetPoseTouchSensor")
TouchSensor148.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"

Transform140.children.append(TouchSensor148)
ROUTE149 = x3d.ROUTE()
ROUTE149.fromField = "isActive"
ROUTE149.fromNode = "ResetPoseTouchSensor"
ROUTE149.toField = "resetAllJoints"
ROUTE149.toNode = "FaceLeft_Pose"

Transform140.children.append(ROUTE149)

Group57.children.append(Transform140)

Scene17.children.append(Group57)
Group150 = x3d.Group(DEF="HandleInlineLoadsensorRouting")
ROUTE151 = x3d.ROUTE()
ROUTE151.fromField = "isLoaded"
ROUTE151.fromNode = "HumanoidInlineLoadSensor"
ROUTE151.toField = "isLoaded"
ROUTE151.toNode = "A_Pose"

Group150.children.append(ROUTE151)
ROUTE152 = x3d.ROUTE()
ROUTE152.fromField = "isLoaded"
ROUTE152.fromNode = "HumanoidInlineLoadSensor"
ROUTE152.toField = "isLoaded"
ROUTE152.toNode = "H_Pose"

Group150.children.append(ROUTE152)
ROUTE153 = x3d.ROUTE()
ROUTE153.fromField = "isLoaded"
ROUTE153.fromNode = "HumanoidInlineLoadSensor"
ROUTE153.toField = "isLoaded"
ROUTE153.toNode = "I_Pose"

Group150.children.append(ROUTE153)
ROUTE154 = x3d.ROUTE()
ROUTE154.fromField = "isLoaded"
ROUTE154.fromNode = "HumanoidInlineLoadSensor"
ROUTE154.toField = "isLoaded"
ROUTE154.toNode = "T_Pose"

Group150.children.append(ROUTE154)
ROUTE155 = x3d.ROUTE()
ROUTE155.fromField = "isLoaded"
ROUTE155.fromNode = "HumanoidInlineLoadSensor"
ROUTE155.toField = "isLoaded"
ROUTE155.toNode = "FaceLeft_Pose"

Group150.children.append(ROUTE155)
ROUTE156 = x3d.ROUTE()
ROUTE156.fromField = "isLoaded"
ROUTE156.fromNode = "HumanoidInlineLoadSensor"
ROUTE156.toField = "isLoaded"
ROUTE156.toNode = "FaceRight_Pose"

Group150.children.append(ROUTE156)
ROUTE157 = x3d.ROUTE()
ROUTE157.fromField = "isLoaded"
ROUTE157.fromNode = "HumanoidInlineLoadSensor"
ROUTE157.toField = "isLoaded"
ROUTE157.toNode = "TouchDown_Pose"

Group150.children.append(ROUTE157)

Scene17.children.append(Group150)
HAnimHumanoid158 = x3d.HAnimHumanoid()
HAnimHumanoid158.name = "HumanoidStub"
HAnimHumanoid158.info = ["humanoidVersion=2.0"]
HAnimHumanoid158.version = "2.0"
HAnimPose159 = x3d.HAnimPose(USE="A_Pose")

HAnimHumanoid158.children.append(HAnimPose159)
HAnimPose160 = x3d.HAnimPose(USE="T_Pose")

HAnimHumanoid158.children.append(HAnimPose160)
HAnimPose161 = x3d.HAnimPose(USE="I_Pose")

HAnimHumanoid158.children.append(HAnimPose161)
HAnimPose162 = x3d.HAnimPose(USE="H_Pose")

HAnimHumanoid158.children.append(HAnimPose162)
HAnimPose163 = x3d.HAnimPose(USE="FaceLeft_Pose")

HAnimHumanoid158.children.append(HAnimPose163)
HAnimPose164 = x3d.HAnimPose(USE="FaceRight_Pose")

HAnimHumanoid158.children.append(HAnimPose164)
HAnimPose165 = x3d.HAnimPose(USE="TouchDown_Pose")

HAnimHumanoid158.children.append(HAnimPose165)

Scene17.children.append(HAnimHumanoid158)

X3D0.Scene = Scene17
f = open("../data/HAnimPoseExample.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPoseExample.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPoseExample.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

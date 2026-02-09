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
meta5.content = "Mon, 09 Feb 2026 07:11:17 GMT"

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
meta14.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo(DEF="ModelInfo")
WorldInfo16.title = "HAnimPoseExample.x3d"
WorldInfo16.info = ["Example scene for HAnimPose node"]

Scene15.children.append(WorldInfo16)
Background17 = x3d.Background()
Background17.skyColor = [(0.8, 0.8, 1)]

Scene15.children.append(Background17)
NavigationInfo18 = x3d.NavigationInfo()

Scene15.children.append(NavigationInfo18)
Group19 = x3d.Group(DEF="HandleInlineLoading")
Inline20 = x3d.Inline(DEF="HumanoidInline")
Inline20.description = "remote HAnimHumanoid for IMPORT"
Inline20.url = ["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"]

Group19.children.append(Inline20)
LoadSensor21 = x3d.LoadSensor(DEF="HumanoidInlineLoadSensor")
LoadSensor21.timeOut = 2
Inline22 = x3d.Inline(USE="HumanoidInline")

LoadSensor21.children.append(Inline22)

Group19.children.append(LoadSensor21)

Scene15.children.append(Group19)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.description = "HAnimPose for HumanoidInline IMPORT model"
Viewpoint23.position = [0,1,4]

Scene15.children.append(Viewpoint23)
HAnimPose24 = x3d.HAnimPose(DEF="T_Pose")
HAnimPose24.description = "arms stretched outward and level similar to letter T"
HAnimPose24.name = "T"
HAnimPose24.loa = 1
HAnimPose24.transitionDuration = 1.3
MetadataString25 = x3d.MetadataString()
MetadataString25.name = "metadataTest"
MetadataString25.value = ["hello HAnimPose metadata"]

HAnimPose24.metadata = MetadataString25
HAnimJoint26 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder_1")
HAnimJoint26.description = "left shoulder"
HAnimJoint26.name = "l_shoulder"
HAnimJoint26.rotation = [0,0,1,1.57]

HAnimPose24.children.append(HAnimJoint26)
HAnimJoint27 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder_1")
HAnimJoint27.description = "right shoulder"
HAnimJoint27.name = "r_shoulder"
HAnimJoint27.rotation = [0,0,-1,1.57]

HAnimPose24.children.append(HAnimJoint27)

Scene15.children.append(HAnimPose24)
HAnimPose28 = x3d.HAnimPose(DEF="A_Pose")
HAnimPose28.description = "arms stretched outward and downward similar to letter A"
HAnimPose28.name = "A"
HAnimPose28.loa = 1
HAnimPose28.transitionDuration = 1.2
HAnimJoint29 = x3d.HAnimJoint(DEF="PoseJoint_l_shoulder")
HAnimJoint29.description = "left shoulder"
HAnimJoint29.name = "l_shoulder"
HAnimJoint29.rotation = [0,0,1,0.5]

HAnimPose28.children.append(HAnimJoint29)
HAnimJoint30 = x3d.HAnimJoint(DEF="PoseJoint_r_shoulder")
HAnimJoint30.description = "right shoulder"
HAnimJoint30.name = "r_shoulder"
HAnimJoint30.rotation = [0,0,-1,0.5]

HAnimPose28.children.append(HAnimJoint30)

Scene15.children.append(HAnimPose28)
HAnimPose31 = x3d.HAnimPose(DEF="TouchDown_Pose")
HAnimPose31.description = "arms and legs stretched outward providing a TouchDown gesture"
HAnimPose31.name = "TouchDown"
HAnimPose31.loa = 1
HAnimPose31.transitionDuration = 1.2
HAnimJoint32 = x3d.HAnimJoint()
HAnimJoint32.name = "humanoid_root"
HAnimJoint32.rotation = [0,1,0,-0.698132]

HAnimPose31.children.append(HAnimJoint32)
HAnimJoint33 = x3d.HAnimJoint()
HAnimJoint33.name = "l_hip"
HAnimJoint33.rotation = [-1,1,1,1]

HAnimPose31.children.append(HAnimJoint33)
HAnimJoint34 = x3d.HAnimJoint()
HAnimJoint34.name = "l_knee"
HAnimJoint34.rotation = [1,0,0,1]

HAnimPose31.children.append(HAnimJoint34)
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.name = "l_talocrural"
HAnimJoint35.rotation = [-0.2,0,0.1,0.225]

HAnimPose31.children.append(HAnimJoint35)
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.name = "r_hip"
HAnimJoint36.rotation = [-1,-1,-1,1]

HAnimPose31.children.append(HAnimJoint36)
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.name = "r_knee"
HAnimJoint37.rotation = [1,0,0,1]

HAnimPose31.children.append(HAnimJoint37)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.name = "r_talocrural"
HAnimJoint38.rotation = [-0.2,0,0.1,0.25]

HAnimPose31.children.append(HAnimJoint38)
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.name = "vl5"
HAnimJoint39.rotation = [0,0,0.01,0.2]

HAnimPose31.children.append(HAnimJoint39)
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.name = "vt10"
HAnimJoint40.rotation = [0,0,0.01,0.1]

HAnimPose31.children.append(HAnimJoint40)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.name = "vc4"
HAnimJoint41.rotation = [0,0,-0.01,0.15]

HAnimPose31.children.append(HAnimJoint41)
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.name = "l_shoulder"
HAnimJoint42.rotation = [-1,0.5,1,2]

HAnimPose31.children.append(HAnimJoint42)
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.name = "l_elbow"
HAnimJoint43.rotation = [-1,0,0,1]

HAnimPose31.children.append(HAnimJoint43)
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.name = "l_radiocarpal"

HAnimPose31.children.append(HAnimJoint44)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "r_shoulder"
HAnimJoint45.rotation = [-1,-0.5,-1,2.6]

HAnimPose31.children.append(HAnimJoint45)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.name = "r_elbow"
HAnimJoint46.rotation = [-1,0,0,1]

HAnimPose31.children.append(HAnimJoint46)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.name = "r_radiocarpal"

HAnimPose31.children.append(HAnimJoint47)

Scene15.children.append(HAnimPose31)
HAnimPose48 = x3d.HAnimPose(DEF="I_Pose")
HAnimPose48.description = "arms and legs straight down default binding pose for baseline Humanoid"
HAnimPose48.name = "I"
HAnimPose48.loa = 1
HAnimPose48.transitionDuration = 1.5

Scene15.children.append(HAnimPose48)
HAnimPose49 = x3d.HAnimPose(DEF="H_Pose")
HAnimPose49.description = "TODO experimental pose not yet implemented"
HAnimPose49.name = "H"
HAnimPose49.enabled = False
HAnimPose49.transitionDuration = 1.4

Scene15.children.append(HAnimPose49)
HAnimPose50 = x3d.HAnimPose(DEF="FaceLeft_Pose")
HAnimPose50.description = "Only modify humanoid_root Joint node to face left"
HAnimPose50.name = "FaceLeft"
HAnimPose50.loa = 0
HAnimPose50.transitionDuration = 1.1
HAnimJoint51 = x3d.HAnimJoint(DEF="FaceLeft_humanoid_root")
HAnimJoint51.description = "Only rotate the model"
HAnimJoint51.name = "humanoid_root"
HAnimJoint51.rotation = [0,1,0,1.570796]

HAnimPose50.children.append(HAnimJoint51)

Scene15.children.append(HAnimPose50)
HAnimPose52 = x3d.HAnimPose(DEF="FaceRight_Pose")
HAnimPose52.description = "Only modify humanoid_root Joint node to face right"
HAnimPose52.name = "FaceRight"
HAnimPose52.loa = 0
HAnimPose52.transitionDuration = 1.1
HAnimJoint53 = x3d.HAnimJoint(DEF="FaceRight_humanoid_root")
HAnimJoint53.description = "Only rotate the model"
HAnimJoint53.name = "humanoid_root"
HAnimJoint53.rotation = [0,1,0,-1.570796]

HAnimPose52.children.append(HAnimJoint53)

Scene15.children.append(HAnimPose52)
Group54 = x3d.Group(DEF="InterfaceButtonsGroup")
Transform55 = x3d.Transform(DEF="DisplayHeader")
Transform55.translation = [0,2,0]
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance(DEF="PoseTextAppearance")
Material58 = x3d.Material()
Material58.diffuseColor = [0.1,0.5,0.3]

Appearance57.material = Material58

Shape56.appearance = Appearance57
Text59 = x3d.Text()
Text59.string = ["HAnimPosePrototype example implementation"]
FontStyle60 = x3d.FontStyle(DEF="HeaderFont")
FontStyle60.family = ["SANS"]
FontStyle60.style = "BOLD"
FontStyle60.size = 0.15
FontStyle60.justify = ["MIDDLE","MIDDLE"]

Text59.fontStyle = FontStyle60

Shape56.geometry = Text59

Transform55.children.append(Shape56)

Group54.children.append(Transform55)
Transform61 = x3d.Transform(DEF="T_PoseInterface")
Transform61.translation = [-1.5,1.5,0]
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance(USE="PoseTextAppearance")

Shape62.appearance = Appearance63
Text64 = x3d.Text()
Text64.string = ["\"T\" Pose"]
FontStyle65 = x3d.FontStyle(DEF="SharedFont")
FontStyle65.family = ["SANS"]
FontStyle65.style = "BOLD"
FontStyle65.size = 0.1
FontStyle65.justify = ["MIDDLE","MIDDLE"]

Text64.fontStyle = FontStyle65

Shape62.geometry = Text64

Transform61.children.append(Shape62)
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance(DEF="TransparentAppearance")
Material68 = x3d.Material()
Material68.transparency = 0.8

Appearance67.material = Material68

Shape66.appearance = Appearance67
Box69 = x3d.Box()
Box69.size = [0.45,0.2,0.001]

Shape66.geometry = Box69

Transform61.children.append(Shape66)
TouchSensor70 = x3d.TouchSensor(DEF="T_PoseTouchSensor")
TouchSensor70.description = "select to move shoulders to \"T\" pose, leave other joints unchanged"

Transform61.children.append(TouchSensor70)

Group54.children.append(Transform61)
Transform71 = x3d.Transform(DEF="A_PoseInterface")
Transform71.translation = [-1.5,1,0]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance(USE="PoseTextAppearance")

Shape72.appearance = Appearance73
Text74 = x3d.Text()
Text74.string = ["\"A\" Pose"]
FontStyle75 = x3d.FontStyle(USE="SharedFont")

Text74.fontStyle = FontStyle75

Shape72.geometry = Text74

Transform71.children.append(Shape72)
Shape76 = x3d.Shape()
Appearance77 = x3d.Appearance(USE="TransparentAppearance")

Shape76.appearance = Appearance77
Box78 = x3d.Box()
Box78.size = [0.45,0.2,0.001]

Shape76.geometry = Box78

Transform71.children.append(Shape76)
TouchSensor79 = x3d.TouchSensor(DEF="A_PoseTouchSensor")
TouchSensor79.description = "select to move shoulders to \"A\" pose, leave other joints unchanged"

Transform71.children.append(TouchSensor79)

Group54.children.append(Transform71)
Transform80 = x3d.Transform(DEF="TouchDown_PoseInterface")
Transform80.translation = [-1.5,0.5,0]
Shape81 = x3d.Shape()
Appearance82 = x3d.Appearance(USE="PoseTextAppearance")

Shape81.appearance = Appearance82
Text83 = x3d.Text()
Text83.string = ["TouchDown Pose"]
FontStyle84 = x3d.FontStyle(USE="SharedFont")

Text83.fontStyle = FontStyle84

Shape81.geometry = Text83

Transform80.children.append(Shape81)
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance(USE="TransparentAppearance")

Shape85.appearance = Appearance86
Box87 = x3d.Box()
Box87.size = [0.85,0.2,0.001]

Shape85.geometry = Box87

Transform80.children.append(Shape85)
TouchSensor88 = x3d.TouchSensor(DEF="TouchDown_PoseTouchSensor")
TouchSensor88.description = "select to transition all joints to TouchDown pose"

Transform80.children.append(TouchSensor88)

Group54.children.append(Transform80)
Transform89 = x3d.Transform(DEF="I_PoseInterface")
Transform89.translation = [-1.5,0,0]
Shape90 = x3d.Shape()
Appearance91 = x3d.Appearance(USE="PoseTextAppearance")

Shape90.appearance = Appearance91
Text92 = x3d.Text()
Text92.string = ["\"I\" Pose"]
FontStyle93 = x3d.FontStyle(USE="SharedFont")

Text92.fontStyle = FontStyle93

Shape90.geometry = Text92

Transform89.children.append(Shape90)
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance(USE="TransparentAppearance")

Shape94.appearance = Appearance95
Box96 = x3d.Box()
Box96.size = [0.45,0.2,0.001]

Shape94.geometry = Box96

Transform89.children.append(Shape94)
TouchSensor97 = x3d.TouchSensor(DEF="I_PoseTouchSensor")
TouchSensor97.description = "select to transition all joints to \"I\" pose"

Transform89.children.append(TouchSensor97)

Group54.children.append(Transform89)
Transform98 = x3d.Transform(DEF="FaceLeftPoseInterface")
Transform98.translation = [1.5,1.5,0]
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance(USE="PoseTextAppearance")

Shape99.appearance = Appearance100
Text101 = x3d.Text()
Text101.string = ["Face Left Pose"]
FontStyle102 = x3d.FontStyle(USE="SharedFont")

Text101.fontStyle = FontStyle102

Shape99.geometry = Text101

Transform98.children.append(Shape99)
Shape103 = x3d.Shape()
Appearance104 = x3d.Appearance(USE="TransparentAppearance")

Shape103.appearance = Appearance104
Box105 = x3d.Box()
Box105.size = [0.9,0.2,0.001]

Shape103.geometry = Box105

Transform98.children.append(Shape103)
TouchSensor106 = x3d.TouchSensor(DEF="FaceLeftTouchSensor")
TouchSensor106.description = "select to rotate body and Face Left, leave other joints unchanged"

Transform98.children.append(TouchSensor106)

Group54.children.append(Transform98)
Transform107 = x3d.Transform(DEF="FaceRightPoseInterface")
Transform107.translation = [1.5,1,0]
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance(USE="PoseTextAppearance")

Shape108.appearance = Appearance109
Text110 = x3d.Text()
Text110.string = ["Face Right Pose"]
FontStyle111 = x3d.FontStyle(USE="SharedFont")

Text110.fontStyle = FontStyle111

Shape108.geometry = Text110

Transform107.children.append(Shape108)
Shape112 = x3d.Shape()
Appearance113 = x3d.Appearance(USE="TransparentAppearance")

Shape112.appearance = Appearance113
Box114 = x3d.Box()
Box114.size = [0.9,0.2,0.001]

Shape112.geometry = Box114

Transform107.children.append(Shape112)
TouchSensor115 = x3d.TouchSensor(DEF="FaceRightTouchSensor")
TouchSensor115.description = "select to rotate body and Face Right, leave other joints unchanged"

Transform107.children.append(TouchSensor115)

Group54.children.append(Transform107)
Transform116 = x3d.Transform(DEF="AnimatePosesInterface")
Transform116.translation = [1.5,0.5,0]
Shape117 = x3d.Shape()
Appearance118 = x3d.Appearance(DEF="AnimationTextAppearance")
Material119 = x3d.Material()
Material119.diffuseColor = [0.1,0.2,0.3]

Appearance118.material = Material119

Shape117.appearance = Appearance118
Text120 = x3d.Text()
Text120.string = ["Direct animation","to, from \"I\" Pose"]
FontStyle121 = x3d.FontStyle(USE="SharedFont")

Text120.fontStyle = FontStyle121

Shape117.geometry = Text120

Transform116.children.append(Shape117)
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance(USE="TransparentAppearance")

Shape122.appearance = Appearance123
Box124 = x3d.Box()
Box124.size = [0.9,0.25,0.001]

Shape122.geometry = Box124

Transform116.children.append(Shape122)
TouchSensor125 = x3d.TouchSensor(DEF="AnimatePosesTouchSensor")
TouchSensor125.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"

Transform116.children.append(TouchSensor125)
TimeSensor126 = x3d.TimeSensor(DEF="AnimatePosesClock")
TimeSensor126.description = "directly animate several poses"
TimeSensor126.cycleInterval = 4

Transform116.children.append(TimeSensor126)
ScalarInterpolator127 = x3d.ScalarInterpolator(DEF="AnimatePosesLoopInterpolator")
ScalarInterpolator127.key = [0,0.05,0.45,0.55,0.95,1]
ScalarInterpolator127.keyValue = [0,0,1,1,0,0]

Transform116.children.append(ScalarInterpolator127)

Group54.children.append(Transform116)
Transform128 = x3d.Transform(DEF="ResetDefaultPoseInterface")
Transform128.translation = [1.5,0,0]
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance(USE="AnimationTextAppearance")

Shape129.appearance = Appearance130
Text131 = x3d.Text()
Text131.string = ["Reset All Joints","to Default \"I\" Pose"]
FontStyle132 = x3d.FontStyle(USE="SharedFont")

Text131.fontStyle = FontStyle132

Shape129.geometry = Text131

Transform128.children.append(Shape129)
Shape133 = x3d.Shape()
Appearance134 = x3d.Appearance(USE="TransparentAppearance")

Shape133.appearance = Appearance134
Box135 = x3d.Box()
Box135.size = [0.9,0.25,0.001]

Shape133.geometry = Box135

Transform128.children.append(Shape133)
TouchSensor136 = x3d.TouchSensor(DEF="ResetPoseTouchSensor")
TouchSensor136.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"

Transform128.children.append(TouchSensor136)

Group54.children.append(Transform128)

Scene15.children.append(Group54)
Group137 = x3d.Group(DEF="HandleInlineLoadsensorRouting")

Scene15.children.append(Group137)
HAnimHumanoid138 = x3d.HAnimHumanoid()
HAnimHumanoid138.name = "HumanoidStub"
HAnimHumanoid138.info = ["humanoidVersion=2.0"]
HAnimHumanoid138.version = "2.0"
HAnimPose139 = x3d.HAnimPose(USE="A_Pose")

HAnimHumanoid138.children.append(HAnimPose139)
HAnimPose140 = x3d.HAnimPose(USE="T_Pose")

HAnimHumanoid138.children.append(HAnimPose140)
HAnimPose141 = x3d.HAnimPose(USE="I_Pose")

HAnimHumanoid138.children.append(HAnimPose141)
HAnimPose142 = x3d.HAnimPose(USE="H_Pose")

HAnimHumanoid138.children.append(HAnimPose142)
HAnimPose143 = x3d.HAnimPose(USE="FaceLeft_Pose")

HAnimHumanoid138.children.append(HAnimPose143)
HAnimPose144 = x3d.HAnimPose(USE="FaceRight_Pose")

HAnimHumanoid138.children.append(HAnimPose144)
HAnimPose145 = x3d.HAnimPose(USE="TouchDown_Pose")

HAnimHumanoid138.children.append(HAnimPose145)

Scene15.children.append(HAnimHumanoid138)
IMPORT146 = x3d.IMPORT()
IMPORT146.inlineDEF = "HumanoidInline"
IMPORT146.importedDEF = "JoeSkeletonSkinSite"
IMPORT146.AS = "HumanoidImported"

Scene15.children.append(IMPORT146)
ROUTE147 = x3d.ROUTE()
ROUTE147.fromNode = "T_PoseTouchSensor"
ROUTE147.fromField = "isActive"
ROUTE147.toNode = "T_Pose"
ROUTE147.toField = "commencePose"

Scene15.children.append(ROUTE147)
ROUTE148 = x3d.ROUTE()
ROUTE148.fromNode = "A_PoseTouchSensor"
ROUTE148.fromField = "isActive"
ROUTE148.toNode = "A_Pose"
ROUTE148.toField = "commencePose"

Scene15.children.append(ROUTE148)
ROUTE149 = x3d.ROUTE()
ROUTE149.fromNode = "TouchDown_PoseTouchSensor"
ROUTE149.fromField = "isActive"
ROUTE149.toNode = "TouchDown_Pose"
ROUTE149.toField = "commencePose"

Scene15.children.append(ROUTE149)
ROUTE150 = x3d.ROUTE()
ROUTE150.fromNode = "I_PoseTouchSensor"
ROUTE150.fromField = "isActive"
ROUTE150.toNode = "I_Pose"
ROUTE150.toField = "commencePose"

Scene15.children.append(ROUTE150)
ROUTE151 = x3d.ROUTE()
ROUTE151.fromNode = "FaceLeftTouchSensor"
ROUTE151.fromField = "isActive"
ROUTE151.toNode = "FaceLeft_Pose"
ROUTE151.toField = "commencePose"

Scene15.children.append(ROUTE151)
ROUTE152 = x3d.ROUTE()
ROUTE152.fromNode = "FaceRightTouchSensor"
ROUTE152.fromField = "isActive"
ROUTE152.toNode = "FaceRight_Pose"
ROUTE152.toField = "commencePose"

Scene15.children.append(ROUTE152)
ROUTE153 = x3d.ROUTE()
ROUTE153.fromNode = "AnimatePosesTouchSensor"
ROUTE153.fromField = "touchTime"
ROUTE153.toNode = "AnimatePosesClock"
ROUTE153.toField = "set_startTime"

Scene15.children.append(ROUTE153)
ROUTE154 = x3d.ROUTE()
ROUTE154.fromNode = "AnimatePosesClock"
ROUTE154.fromField = "fraction_changed"
ROUTE154.toNode = "AnimatePosesLoopInterpolator"
ROUTE154.toField = "set_fraction"

Scene15.children.append(ROUTE154)
ROUTE155 = x3d.ROUTE()
ROUTE155.fromNode = "AnimatePosesLoopInterpolator"
ROUTE155.fromField = "value_changed"
ROUTE155.toNode = "I_Pose"
ROUTE155.toField = "set_fraction"

Scene15.children.append(ROUTE155)
ROUTE156 = x3d.ROUTE()
ROUTE156.fromNode = "ResetPoseTouchSensor"
ROUTE156.fromField = "isActive"
ROUTE156.toNode = "FaceLeft_Pose"
ROUTE156.toField = "resetAllJoints"

Scene15.children.append(ROUTE156)

X3D0.Scene = Scene15
f = open("../data/HAnimPoseExample.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimPoseExample.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimPoseExample.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

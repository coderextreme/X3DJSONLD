print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "BoxMan3.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "James Smith - james@vapourtech.com"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Don Brutzman and Matt Beitler"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "1 March 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translated"
meta8.content = "19 October 2001"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "Tue, 09 Sep 2025 19:37:50 GMT"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "error"
meta10.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://HAnim.org"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "originals/boxman.wrl"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "BoxMan3.js"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "BoxManAnimationPanel.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "http://www.vapourtech.com/team/james/boxman.wrl"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "http://HAnim.org/Specifications/HAnim2001"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "http://HAnim.org/Models"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "http://HAnim.org/Nodes"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "reference"
meta20.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "reference"
meta21.content = "http://www.vapourtech.com"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "warning"
meta22.content = "Skin mesh is split across multiple shapes within a Group, should that be allowed?"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "TODO"
meta23.content = "What does the original animation script accomplish? It is not hooked up, script source contains errors..."

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "TODO"
meta24.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "Image"
meta25.content = "BoxManViewInclined.png"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "Image"
meta26.content = "BoxManViewFront.png"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "Image"
meta27.content = "BoxManViewRight.png"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "Image"
meta28.content = "BoxManViewLeft.png"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "Image"
meta29.content = "BoxManViewTop.png"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "rights"
meta30.content = "(C) 2000 James Smith - james@vapourtech.com"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "subject"
meta31.content = "BoxMan HAnim 2.0"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "identifier"
meta32.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d"

head1.children.append(meta32)

X3D0.head = head1
Scene33 = x3d.Scene()
ExternProtoDeclare34 = x3d.ExternProtoDeclare()
ExternProtoDeclare34.name = "LOA1_WalkAnimation"
ExternProtoDeclare34.url = ["../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"]
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFTime"
field35.name = "cycleInterval"

ExternProtoDeclare34.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFBool"
field36.name = "enabled"

ExternProtoDeclare34.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFBool"
field37.name = "loop"

ExternProtoDeclare34.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFTime"
field38.name = "startTime"

ExternProtoDeclare34.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFTime"
field39.name = "stopTime"

ExternProtoDeclare34.field.append(field39)
field40 = x3d.field()
field40.accessType = "outputOnly"
field40.type = "SFFloat"
field40.name = "fraction_changed"

ExternProtoDeclare34.field.append(field40)
field41 = x3d.field()
field41.accessType = "outputOnly"
field41.type = "SFVec3f"
field41.name = "HumanoidRoot_translation_changed"

ExternProtoDeclare34.field.append(field41)
field42 = x3d.field()
field42.accessType = "outputOnly"
field42.type = "SFRotation"
field42.name = "HumanoidRoot_rotation_changed"

ExternProtoDeclare34.field.append(field42)
field43 = x3d.field()
field43.accessType = "outputOnly"
field43.type = "SFRotation"
field43.name = "l_hip_rotation_changed"

ExternProtoDeclare34.field.append(field43)
field44 = x3d.field()
field44.accessType = "outputOnly"
field44.type = "SFRotation"
field44.name = "l_knee_rotation_changed"

ExternProtoDeclare34.field.append(field44)
field45 = x3d.field()
field45.accessType = "outputOnly"
field45.type = "SFRotation"
field45.name = "l_ankle_rotation_changed"

ExternProtoDeclare34.field.append(field45)
field46 = x3d.field()
field46.accessType = "outputOnly"
field46.type = "SFRotation"
field46.name = "l_midtarsal_rotation_changed"

ExternProtoDeclare34.field.append(field46)
field47 = x3d.field()
field47.accessType = "outputOnly"
field47.type = "SFRotation"
field47.name = "r_hip_rotation_changed"

ExternProtoDeclare34.field.append(field47)
field48 = x3d.field()
field48.accessType = "outputOnly"
field48.type = "SFRotation"
field48.name = "r_knee_rotation_changed"

ExternProtoDeclare34.field.append(field48)
field49 = x3d.field()
field49.accessType = "outputOnly"
field49.type = "SFRotation"
field49.name = "r_ankle_rotation_changed"

ExternProtoDeclare34.field.append(field49)
field50 = x3d.field()
field50.accessType = "outputOnly"
field50.type = "SFRotation"
field50.name = "r_midtarsal_rotation_changed"

ExternProtoDeclare34.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "SFRotation"
field51.name = "vl5_rotation_changed"

ExternProtoDeclare34.field.append(field51)
field52 = x3d.field()
field52.accessType = "outputOnly"
field52.type = "SFRotation"
field52.name = "skullbase_rotation_changed"

ExternProtoDeclare34.field.append(field52)
field53 = x3d.field()
field53.accessType = "outputOnly"
field53.type = "SFRotation"
field53.name = "l_shoulder_rotation_changed"

ExternProtoDeclare34.field.append(field53)
field54 = x3d.field()
field54.accessType = "outputOnly"
field54.type = "SFRotation"
field54.name = "l_elbow_rotation_changed"

ExternProtoDeclare34.field.append(field54)
field55 = x3d.field()
field55.accessType = "outputOnly"
field55.type = "SFRotation"
field55.name = "l_wrist_rotation_changed"

ExternProtoDeclare34.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "SFRotation"
field56.name = "r_shoulder_rotation_changed"

ExternProtoDeclare34.field.append(field56)
field57 = x3d.field()
field57.accessType = "outputOnly"
field57.type = "SFRotation"
field57.name = "r_elbow_rotation_changed"

ExternProtoDeclare34.field.append(field57)
field58 = x3d.field()
field58.accessType = "outputOnly"
field58.type = "SFRotation"
field58.name = "r_wrist_rotation_changed"

ExternProtoDeclare34.field.append(field58)
field59 = x3d.field()
field59.accessType = "outputOnly"
field59.type = "SFBool"
field59.name = "isActive"

ExternProtoDeclare34.field.append(field59)
field60 = x3d.field()
field60.accessType = "outputOnly"
field60.type = "SFRotation"
field60.name = "lower_body_rotation_changed"

ExternProtoDeclare34.field.append(field60)

Scene33.children.append(ExternProtoDeclare34)
WorldInfo61 = x3d.WorldInfo()
WorldInfo61.title = "BoxMan3 - A Seamless VRML Human"
WorldInfo61.info = ["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]

Scene33.children.append(WorldInfo61)
Background62 = x3d.Background()
Background62.skyColor = [(0.75, 0.75, 0.75)]
Background62.groundColor = [(0.6, 0.6, 0.6)]

Scene33.children.append(Background62)
HAnimHumanoid63 = x3d.HAnimHumanoid()
HAnimHumanoid63.DEF = "boxman_Humanoid"
HAnimHumanoid63.name = "Humanoid"
HAnimHumanoid63.info = ["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]
HAnimHumanoid63.version = "1.0"
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.DEF = "boxman_humanoid_root"
HAnimJoint64.name = "humanoid_root"
HAnimJoint64.center = [0,0.9723,-0.0728]
HAnimJoint64.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9,10,11]
HAnimJoint64.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.DEF = "boxman_sacrum"
HAnimSegment65.name = "sacrum"
Transform66 = x3d.Transform()
Transform66.translation = [0,0.9723,-0.0728]
Shape67 = x3d.Shape()
Shape67.DEF = "SphereYellow"
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.diffuseColor = [1,1,0]

Appearance68.material = Material69

Shape67.appearance = Appearance68
Sphere70 = x3d.Sphere()
Sphere70.radius = 0.02

Shape67.geometry = Sphere70

Transform66.children.append(Shape67)

HAnimSegment65.children.append(Transform66)

HAnimJoint64.children.append(HAnimSegment65)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.DEF = "boxman_l_hip"
HAnimJoint71.name = "l_hip"
HAnimJoint71.center = [0.0956,0.9364,0]
HAnimJoint71.skinCoordIndex = [12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]
HAnimJoint71.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.DEF = "boxman_l_thigh"
HAnimSegment72.name = "l_thigh"
Transform73 = x3d.Transform()
Transform73.translation = [0.0956,0.9364,0]
Shape74 = x3d.Shape()
Shape74.USE = "SphereYellow"

Transform73.children.append(Shape74)

HAnimSegment72.children.append(Transform73)

HAnimJoint71.children.append(HAnimSegment72)
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.DEF = "boxman_l_knee"
HAnimJoint75.name = "l_knee"
HAnimJoint75.center = [0.0956,0.5095,-0.0036]
HAnimJoint75.skinCoordIndex = [36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]
HAnimJoint75.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment76 = x3d.HAnimSegment()
HAnimSegment76.DEF = "boxman_l_calf"
HAnimSegment76.name = "l_calf"
Transform77 = x3d.Transform()
Transform77.translation = [0.0956,0.5095,-0.0036]
Shape78 = x3d.Shape()
Shape78.USE = "SphereYellow"

Transform77.children.append(Shape78)

HAnimSegment76.children.append(Transform77)

HAnimJoint75.children.append(HAnimSegment76)
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.DEF = "boxman_l_ankle"
HAnimJoint79.name = "l_ankle"
HAnimJoint79.center = [0.0946,0.0762,-0.0261]
HAnimJoint79.skinCoordIndex = [64,65,66,67,68,69,70,71]
HAnimJoint79.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment80 = x3d.HAnimSegment()
HAnimSegment80.DEF = "boxman_l_hindfoot"
HAnimSegment80.name = "l_hindfoot"
Transform81 = x3d.Transform()
Transform81.translation = [0.0946,0.0762,-0.0261]
Shape82 = x3d.Shape()
Shape82.USE = "SphereYellow"

Transform81.children.append(Shape82)

HAnimSegment80.children.append(Transform81)

HAnimJoint79.children.append(HAnimSegment80)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.DEF = "boxman_l_midtarsal"
HAnimJoint83.name = "l_midtarsal"
HAnimJoint83.center = [0.1079,0.0317,0.067]
HAnimJoint83.skinCoordIndex = [72,73,74,75,76,77,78,79]
HAnimJoint83.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment84 = x3d.HAnimSegment()
HAnimSegment84.DEF = "boxman_l_middistal"
HAnimSegment84.name = "l_middistal"
Transform85 = x3d.Transform()
Transform85.translation = [0.1079,0.0317,0.067]
Shape86 = x3d.Shape()
Shape86.USE = "SphereYellow"

Transform85.children.append(Shape86)

HAnimSegment84.children.append(Transform85)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.DEF = "boxman_l_middistal_tip"
HAnimSite87.name = "l_middistal_tip"
HAnimSite87.translation = [0.095,0.0005,0.1924]
Shape88 = x3d.Shape()
Shape88.DEF = "SphereRed"
Appearance89 = x3d.Appearance()
Material90 = x3d.Material()
Material90.diffuseColor = [1,0,0]

Appearance89.material = Material90

Shape88.appearance = Appearance89
Sphere91 = x3d.Sphere()
Sphere91.radius = 0.02

Shape88.geometry = Sphere91

HAnimSite87.children.append(Shape88)

HAnimSegment84.children.append(HAnimSite87)

HAnimJoint83.children.append(HAnimSegment84)

HAnimJoint79.children.append(HAnimJoint83)

HAnimJoint75.children.append(HAnimJoint79)

HAnimJoint71.children.append(HAnimJoint75)

HAnimJoint64.children.append(HAnimJoint71)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "boxman_r_hip"
HAnimJoint92.name = "r_hip"
HAnimJoint92.center = [-0.0956,0.9364,0]
HAnimJoint92.skinCoordIndex = [80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.DEF = "boxman_r_thigh"
HAnimSegment93.name = "r_thigh"
Transform94 = x3d.Transform()
Transform94.translation = [-0.0956,0.9364,0]
Shape95 = x3d.Shape()
Shape95.USE = "SphereYellow"

Transform94.children.append(Shape95)

HAnimSegment93.children.append(Transform94)

HAnimJoint92.children.append(HAnimSegment93)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.DEF = "boxman_r_knee"
HAnimJoint96.name = "r_knee"
HAnimJoint96.center = [-0.0956,0.5095,-0.0036]
HAnimJoint96.skinCoordIndex = [104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]
HAnimJoint96.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.DEF = "boxman_r_calf"
HAnimSegment97.name = "r_calf"
Transform98 = x3d.Transform()
Transform98.translation = [-0.0956,0.5095,-0.0036]
Shape99 = x3d.Shape()
Shape99.USE = "SphereYellow"

Transform98.children.append(Shape99)

HAnimSegment97.children.append(Transform98)

HAnimJoint96.children.append(HAnimSegment97)
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.DEF = "boxman_r_ankle"
HAnimJoint100.name = "r_ankle"
HAnimJoint100.center = [-0.0946,0.0762,-0.0261]
HAnimJoint100.skinCoordIndex = [132,133,134,135,136,137,138,139]
HAnimJoint100.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment101 = x3d.HAnimSegment()
HAnimSegment101.DEF = "boxman_r_hindfoot"
HAnimSegment101.name = "r_hindfoot"
Transform102 = x3d.Transform()
Transform102.translation = [-0.0946,0.0762,-0.0261]
Shape103 = x3d.Shape()
Shape103.USE = "SphereYellow"

Transform102.children.append(Shape103)

HAnimSegment101.children.append(Transform102)

HAnimJoint100.children.append(HAnimSegment101)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.DEF = "boxman_r_midtarsal"
HAnimJoint104.name = "r_midtarsal"
HAnimJoint104.center = [-0.1079,0.0317,0.067]
HAnimJoint104.skinCoordIndex = [140,141,142,143,144,145,146,147]
HAnimJoint104.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.DEF = "boxman_r_middistal"
HAnimSegment105.name = "r_middistal"
Transform106 = x3d.Transform()
Transform106.translation = [-0.1079,0.0317,0.067]
Shape107 = x3d.Shape()
Shape107.USE = "SphereYellow"

Transform106.children.append(Shape107)

HAnimSegment105.children.append(Transform106)
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.DEF = "boxman_r_middistal_tip"
HAnimSite108.name = "r_middistal_tip"
HAnimSite108.translation = [-0.095,0.0005,0.1924]
Shape109 = x3d.Shape()
Shape109.USE = "SphereRed"

HAnimSite108.children.append(Shape109)

HAnimSegment105.children.append(HAnimSite108)

HAnimJoint104.children.append(HAnimSegment105)

HAnimJoint100.children.append(HAnimJoint104)

HAnimJoint96.children.append(HAnimJoint100)

HAnimJoint92.children.append(HAnimJoint96)

HAnimJoint64.children.append(HAnimJoint92)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.DEF = "boxman_vl5"
HAnimJoint110.name = "vl5"
HAnimJoint110.center = [0,1.0817,-0.0728]
HAnimJoint110.skinCoordIndex = [148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]
HAnimJoint110.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment111 = x3d.HAnimSegment()
HAnimSegment111.DEF = "boxman_l5"
HAnimSegment111.name = "l5"
Transform112 = x3d.Transform()
Transform112.translation = [0,1.0817,-0.0728]
Shape113 = x3d.Shape()
Shape113.USE = "SphereYellow"

Transform112.children.append(Shape113)

HAnimSegment111.children.append(Transform112)

HAnimJoint110.children.append(HAnimSegment111)
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.DEF = "boxman_skullbase"
HAnimJoint114.name = "skullbase"
HAnimJoint114.center = [0,1.644,0.036]
HAnimJoint114.skinCoordIndex = [168,169,170,171,172,173,174,175]
HAnimJoint114.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment115 = x3d.HAnimSegment()
HAnimSegment115.DEF = "boxman_skull"
HAnimSegment115.name = "skull"
Transform116 = x3d.Transform()
Transform116.translation = [0,1.644,0.036]
Shape117 = x3d.Shape()
Shape117.USE = "SphereYellow"

Transform116.children.append(Shape117)

HAnimSegment115.children.append(Transform116)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.DEF = "boxman_skull_tip"
HAnimSite118.name = "skull_tip"
HAnimSite118.translation = [-0.0029,1.7771,0.0274]
Shape119 = x3d.Shape()
Shape119.USE = "SphereYellow"

HAnimSite118.children.append(Shape119)

HAnimSegment115.children.append(HAnimSite118)

HAnimJoint114.children.append(HAnimSegment115)

HAnimJoint110.children.append(HAnimJoint114)
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.DEF = "boxman_l_shoulder"
HAnimJoint120.name = "l_shoulder"
HAnimJoint120.center = [0.1968,1.4642,-0.0265]
HAnimJoint120.skinCoordIndex = [176,177,178,179,180,181,182,183]
HAnimJoint120.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment121 = x3d.HAnimSegment()
HAnimSegment121.DEF = "boxman_l_upperarm"
HAnimSegment121.name = "l_upperarm"
Transform122 = x3d.Transform()
Transform122.translation = [0.1968,1.4642,-0.0265]
Shape123 = x3d.Shape()
Shape123.USE = "SphereYellow"

Transform122.children.append(Shape123)

HAnimSegment121.children.append(Transform122)

HAnimJoint120.children.append(HAnimSegment121)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "boxman_l_elbow"
HAnimJoint124.name = "l_elbow"
HAnimJoint124.center = [0.1982,1.1622,-0.0557]
HAnimJoint124.skinCoordIndex = [184,185,186,187,188,189,190,191]
HAnimJoint124.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment125 = x3d.HAnimSegment()
HAnimSegment125.DEF = "boxman_l_forearm"
HAnimSegment125.name = "l_forearm"
Transform126 = x3d.Transform()
Transform126.translation = [0.1982,1.1622,-0.0557]
Shape127 = x3d.Shape()
Shape127.USE = "SphereYellow"

Transform126.children.append(Shape127)

HAnimSegment125.children.append(Transform126)

HAnimJoint124.children.append(HAnimSegment125)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "boxman_l_wrist"
HAnimJoint128.name = "l_wrist"
HAnimJoint128.center = [0.1972,0.8929,-0.069]
HAnimJoint128.skinCoordIndex = [192,193,194,195,196,197,198,199]
HAnimJoint128.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.DEF = "boxman_l_hand"
HAnimSegment129.name = "l_hand"
Transform130 = x3d.Transform()
Transform130.translation = [0.1972,0.8929,-0.069]
Shape131 = x3d.Shape()
Shape131.USE = "SphereYellow"

Transform130.children.append(Shape131)

HAnimSegment129.children.append(Transform130)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.DEF = "boxman_l_hand_tip"
HAnimSite132.name = "l_hand_tip"
HAnimSite132.translation = [0.1912,0.6976,-0.071]
Shape133 = x3d.Shape()
Shape133.USE = "SphereRed"

HAnimSite132.children.append(Shape133)

HAnimSegment129.children.append(HAnimSite132)

HAnimJoint128.children.append(HAnimSegment129)

HAnimJoint124.children.append(HAnimJoint128)

HAnimJoint120.children.append(HAnimJoint124)

HAnimJoint110.children.append(HAnimJoint120)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.DEF = "boxman_r_shoulder"
HAnimJoint134.name = "r_shoulder"
HAnimJoint134.center = [-0.1968,1.4642,-0.0265]
HAnimJoint134.skinCoordIndex = [200,201,202,203,204,205,206,207]
HAnimJoint134.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.DEF = "boxman_r_upperarm"
HAnimSegment135.name = "r_upperarm"
Transform136 = x3d.Transform()
Transform136.translation = [-0.1968,1.4642,-0.0265]
Shape137 = x3d.Shape()
Shape137.USE = "SphereYellow"

Transform136.children.append(Shape137)

HAnimSegment135.children.append(Transform136)

HAnimJoint134.children.append(HAnimSegment135)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.DEF = "boxman_r_elbow"
HAnimJoint138.name = "r_elbow"
HAnimJoint138.center = [-0.1982,1.1622,-0.0557]
HAnimJoint138.skinCoordIndex = [208,209,210,211,212,213,214,215]
HAnimJoint138.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.DEF = "boxman_r_forearm"
HAnimSegment139.name = "r_forearm"
Transform140 = x3d.Transform()
Transform140.translation = [-0.1982,1.1622,-0.0557]
Shape141 = x3d.Shape()
Shape141.USE = "SphereYellow"

Transform140.children.append(Shape141)

HAnimSegment139.children.append(Transform140)

HAnimJoint138.children.append(HAnimSegment139)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.DEF = "boxman_r_wrist"
HAnimJoint142.name = "r_wrist"
HAnimJoint142.center = [-0.1972,0.8929,-0.069]
HAnimJoint142.skinCoordIndex = [216,217,218,219,220,221,222,223]
HAnimJoint142.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.DEF = "boxman_r_hand"
HAnimSegment143.name = "r_hand"
Transform144 = x3d.Transform()
Transform144.translation = [-0.1972,0.8929,-0.069]
Shape145 = x3d.Shape()
Shape145.USE = "SphereYellow"

Transform144.children.append(Shape145)

HAnimSegment143.children.append(Transform144)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.DEF = "boxman_r_hand_tip"
HAnimSite146.name = "r_hand_tip"
HAnimSite146.translation = [-0.1912,0.6976,-0.071]
Shape147 = x3d.Shape()
Shape147.USE = "SphereRed"

HAnimSite146.children.append(Shape147)

HAnimSegment143.children.append(HAnimSite146)

HAnimJoint142.children.append(HAnimSegment143)

HAnimJoint138.children.append(HAnimJoint142)

HAnimJoint134.children.append(HAnimJoint138)

HAnimJoint110.children.append(HAnimJoint134)

HAnimJoint64.children.append(HAnimJoint110)

HAnimHumanoid63.skeleton.append(HAnimJoint64)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.USE = "boxman_humanoid_root"

HAnimHumanoid63.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.USE = "boxman_skullbase"

HAnimHumanoid63.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.USE = "boxman_vl5"

HAnimHumanoid63.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.USE = "boxman_l_ankle"

HAnimHumanoid63.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.USE = "boxman_r_ankle"

HAnimHumanoid63.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.USE = "boxman_l_elbow"

HAnimHumanoid63.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.USE = "boxman_r_elbow"

HAnimHumanoid63.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.USE = "boxman_l_hip"

HAnimHumanoid63.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.USE = "boxman_r_hip"

HAnimHumanoid63.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.USE = "boxman_l_knee"

HAnimHumanoid63.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.USE = "boxman_r_knee"

HAnimHumanoid63.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.USE = "boxman_l_midtarsal"

HAnimHumanoid63.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.USE = "boxman_r_midtarsal"

HAnimHumanoid63.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.USE = "boxman_l_shoulder"

HAnimHumanoid63.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.USE = "boxman_r_shoulder"

HAnimHumanoid63.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.USE = "boxman_l_wrist"

HAnimHumanoid63.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "boxman_r_wrist"

HAnimHumanoid63.joints.append(HAnimJoint164)
HAnimSegment165 = x3d.HAnimSegment()
HAnimSegment165.USE = "boxman_l5"

HAnimHumanoid63.segments.append(HAnimSegment165)
HAnimSegment166 = x3d.HAnimSegment()
HAnimSegment166.USE = "boxman_sacrum"

HAnimHumanoid63.segments.append(HAnimSegment166)
HAnimSegment167 = x3d.HAnimSegment()
HAnimSegment167.USE = "boxman_skull"

HAnimHumanoid63.segments.append(HAnimSegment167)
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.USE = "boxman_l_calf"

HAnimHumanoid63.segments.append(HAnimSegment168)
HAnimSegment169 = x3d.HAnimSegment()
HAnimSegment169.USE = "boxman_r_calf"

HAnimHumanoid63.segments.append(HAnimSegment169)
HAnimSegment170 = x3d.HAnimSegment()
HAnimSegment170.USE = "boxman_l_forearm"

HAnimHumanoid63.segments.append(HAnimSegment170)
HAnimSegment171 = x3d.HAnimSegment()
HAnimSegment171.USE = "boxman_r_forearm"

HAnimHumanoid63.segments.append(HAnimSegment171)
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.USE = "boxman_l_hand"

HAnimHumanoid63.segments.append(HAnimSegment172)
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.USE = "boxman_r_hand"

HAnimHumanoid63.segments.append(HAnimSegment173)
HAnimSegment174 = x3d.HAnimSegment()
HAnimSegment174.USE = "boxman_l_hindfoot"

HAnimHumanoid63.segments.append(HAnimSegment174)
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.USE = "boxman_r_hindfoot"

HAnimHumanoid63.segments.append(HAnimSegment175)
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.USE = "boxman_l_middistal"

HAnimHumanoid63.segments.append(HAnimSegment176)
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.USE = "boxman_r_middistal"

HAnimHumanoid63.segments.append(HAnimSegment177)
HAnimSegment178 = x3d.HAnimSegment()
HAnimSegment178.USE = "boxman_l_thigh"

HAnimHumanoid63.segments.append(HAnimSegment178)
HAnimSegment179 = x3d.HAnimSegment()
HAnimSegment179.USE = "boxman_r_thigh"

HAnimHumanoid63.segments.append(HAnimSegment179)
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.USE = "boxman_l_upperarm"

HAnimHumanoid63.segments.append(HAnimSegment180)
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.USE = "boxman_r_upperarm"

HAnimHumanoid63.segments.append(HAnimSegment181)
HAnimSite182 = x3d.HAnimSite()
HAnimSite182.USE = "boxman_skull_tip"

HAnimHumanoid63.sites.append(HAnimSite182)
HAnimSite183 = x3d.HAnimSite()
HAnimSite183.USE = "boxman_l_hand_tip"

HAnimHumanoid63.sites.append(HAnimSite183)
HAnimSite184 = x3d.HAnimSite()
HAnimSite184.USE = "boxman_r_hand_tip"

HAnimHumanoid63.sites.append(HAnimSite184)
HAnimSite185 = x3d.HAnimSite()
HAnimSite185.USE = "boxman_l_middistal_tip"

HAnimHumanoid63.sites.append(HAnimSite185)
HAnimSite186 = x3d.HAnimSite()
HAnimSite186.USE = "boxman_r_middistal_tip"

HAnimHumanoid63.sites.append(HAnimSite186)
HAnimSite187 = x3d.HAnimSite()
HAnimSite187.DEF = "boxman_BoxMan_view"
HAnimSite187.name = "BoxMan_view"
Viewpoint188 = x3d.Viewpoint()
Viewpoint188.DEF = "Inclined_View"
Viewpoint188.description = "Inclined View"
Viewpoint188.position = [2,0.9,2]
Viewpoint188.orientation = [0,1,0,0.78]

HAnimSite187.children.append(Viewpoint188)
Viewpoint189 = x3d.Viewpoint()
Viewpoint189.DEF = "Front_View"
Viewpoint189.description = "Front View"
Viewpoint189.position = [0,1,3]

HAnimSite187.children.append(Viewpoint189)
Viewpoint190 = x3d.Viewpoint()
Viewpoint190.DEF = "Right_View"
Viewpoint190.description = "Right-side View"
Viewpoint190.position = [-3,1,0]
Viewpoint190.orientation = [0,1,0,-1.57]

HAnimSite187.children.append(Viewpoint190)
Viewpoint191 = x3d.Viewpoint()
Viewpoint191.DEF = "Left_View"
Viewpoint191.description = "Left-side View"
Viewpoint191.position = [3,1,0]
Viewpoint191.orientation = [0,1,0,1.57]

HAnimSite187.children.append(Viewpoint191)
Viewpoint192 = x3d.Viewpoint()
Viewpoint192.DEF = "Top_View"
Viewpoint192.description = "Top View"
Viewpoint192.position = [0,3,0]
Viewpoint192.orientation = [1,0,0,-1.57]

HAnimSite187.children.append(Viewpoint192)

HAnimHumanoid63.viewpoints.append(HAnimSite187)
Coordinate193 = x3d.Coordinate()
Coordinate193.DEF = "SKINCOORD"
Coordinate193.point = [(-0.05, 1, 0.05),(0.05, 1, 0.05),(0.03, 0.97, -0.1),(-0.03, 0.97, -0.1),(0.03, 0.94, -0.075),(-0.03, 0.94, -0.075),(0, 0.92, 0),(0, 0.94, 0.03),(-0.12, 1.06, 0.05),(0.12, 1.06, 0.05),(0.12, 1.06, -0.1),(-0.12, 1.06, -0.1),(0.0456, 0.9364, 0.05),(0.1456, 0.9364, 0.05),(0.1456, 0.9364, -0.05),(0.0456, 0.9364, -0.05),(0.0456, 0.9, 0.05),(0.1456, 0.9, 0.05),(0.1456, 0.9, -0.05),(0.0456, 0.9, -0.05),(0.0456, 0.8, 0.05),(0.1456, 0.8, 0.05),(0.1456, 0.8, -0.05),(0.0456, 0.8, -0.05),(0.0456, 0.7, 0.05),(0.1456, 0.7, 0.05),(0.1456, 0.7, -0.05),(0.0456, 0.7, -0.05),(0.0456, 0.6, 0.05),(0.1456, 0.6, 0.05),(0.1456, 0.6, -0.05),(0.0456, 0.6, -0.05),(0.0456, 0.55, 0.05),(0.1456, 0.55, 0.05),(0.1456, 0.55, -0.05),(0.0456, 0.55, -0.05),(0.0456, 0.52, 0.05),(0.1456, 0.52, 0.05),(0.1456, 0.52, -0.05),(0.0456, 0.52, -0.05),(0.0456, 0.5, 0.05),(0.1456, 0.5, 0.05),(0.1456, 0.5, -0.05),(0.0456, 0.5, -0.05),(0.0454, 0.43, 0.045),(0.1454, 0.43, 0.045),(0.1454, 0.43, -0.055),(0.0454, 0.43, -0.055),(0.0452, 0.36, 0.04),(0.1452, 0.36, 0.04),(0.1452, 0.36, -0.06),(0.0452, 0.36, -0.06),(0.045, 0.29, 0.035),(0.145, 0.29, 0.035),(0.145, 0.29, -0.065),(0.045, 0.29, -0.065),(0.0448, 0.21, 0.03),(0.1448, 0.21, 0.03),(0.1448, 0.21, -0.07),(0.0448, 0.21, -0.07),(0.0446, 0.1262, 0.025),(0.1446, 0.1262, 0.025),(0.1446, 0.1262, -0.075),(0.0446, 0.1262, -0.075),(0.0446, 0.0762, 0.025),(0.1446, 0.0762, 0.025),(0.1446, 0, -0.075),(0.0446, 0, -0.075),(0.0446, 0.0562, 0.057),(0.1446, 0.0562, 0.057),(0.1446, 0, 0.057),(0.0446, 0, 0.057),(0.0446, 0.0562, 0.087),(0.1446, 0.0562, 0.087),(0.1446, 0, 0.087),(0.0446, 0, 0.087),(0.0446, 0.0562, 0.1924),(0.1446, 0.0562, 0.1924),(0.1446, 0, 0.1924),(0.0446, 0, 0.1924),(-0.0456, 0.9364, 0.05),(-0.1456, 0.9364, 0.05),(-0.1456, 0.9364, -0.05),(-0.0456, 0.9364, -0.05),(-0.0456, 0.9, 0.05),(-0.1456, 0.9, 0.05),(-0.1456, 0.9, -0.05),(-0.0456, 0.9, -0.05),(-0.0456, 0.8, 0.05),(-0.1456, 0.8, 0.05),(-0.1456, 0.8, -0.05),(-0.0456, 0.8, -0.05),(-0.0456, 0.7, 0.05),(-0.1456, 0.7, 0.05),(-0.1456, 0.7, -0.05),(-0.0456, 0.7, -0.05),(-0.0456, 0.6, 0.05),(-0.1456, 0.6, 0.05),(-0.1456, 0.6, -0.05),(-0.0456, 0.6, -0.05),(-0.0456, 0.55, 0.05),(-0.1456, 0.55, 0.05),(-0.1456, 0.55, -0.05),(-0.0456, 0.55, -0.05),(-0.0456, 0.52, 0.05),(-0.1456, 0.52, 0.05),(-0.1456, 0.52, -0.05),(-0.0456, 0.52, -0.05),(-0.0456, 0.5, 0.05),(-0.1456, 0.5, 0.05),(-0.1456, 0.5, -0.05),(-0.0456, 0.5, -0.05),(-0.0454, 0.43, 0.045),(-0.1454, 0.43, 0.045),(-0.1454, 0.43, -0.055),(-0.0454, 0.43, -0.055),(-0.0452, 0.36, 0.04),(-0.1452, 0.36, 0.04),(-0.1452, 0.36, -0.06),(-0.0452, 0.36, -0.06),(-0.045, 0.29, 0.035),(-0.145, 0.29, 0.035),(-0.145, 0.29, -0.065),(-0.045, 0.29, -0.065),(-0.0448, 0.21, 0.03),(-0.1448, 0.21, 0.03),(-0.1448, 0.21, -0.07),(-0.0448, 0.21, -0.07),(-0.0446, 0.1262, 0.025),(-0.1446, 0.1262, 0.025),(-0.1446, 0.1262, -0.075),(-0.0446, 0.1262, -0.075),(-0.0446, 0.0762, 0.025),(-0.1446, 0.0762, 0.025),(-0.1446, 0, -0.075),(-0.0446, 0, -0.075),(-0.0446, 0.0562, 0.057),(-0.1446, 0.0562, 0.057),(-0.1446, 0, 0.057),(-0.0446, 0, 0.057),(-0.0446, 0.0562, 0.087),(-0.1446, 0.0562, 0.087),(-0.1446, 0, 0.087),(-0.0446, 0, 0.087),(-0.0446, 0.0562, 0.1924),(-0.1446, 0.0562, 0.1924),(-0.1446, 0, 0.1924),(-0.0446, 0, 0.1924),(-0.12, 1.1, 0.05),(0.12, 1.1, 0.05),(0.12, 1.1, -0.1),(-0.12, 1.1, -0.1),(-0.14, 1.42, 0.045),(0.14, 1.42, 0.045),(0.14, 1.42, -0.09),(-0.14, 1.42, -0.09),(-0.24, 1.52, 0.035),(0.24, 1.52, 0.035),(0.24, 1.52, -0.09),(-0.24, 1.52, -0.09),(-0.05, 1.56, 0.03),(0.05, 1.56, 0.03),(0.05, 1.56, -0.06),(-0.05, 1.56, -0.06),(-0.05, 1.6, 0.06),(0.05, 1.6, 0.06),(0.05, 1.62, -0.03),(-0.05, 1.62, -0.03),(-0.07, 1.777, 0.13),(0.07, 1.777, 0.13),(0.07, 1.777, -0.03),(-0.07, 1.777, -0.03),(-0.07, 1.6, 0.13),(0.07, 1.6, 0.13),(0.07, 1.66, -0.03),(-0.07, 1.66, -0.03),(0.16, 1.42, 0.015),(0.24, 1.5, 0.015),(0.24, 1.5, -0.075),(0.16, 1.42, -0.075),(0.17, 1.18, -0.025),(0.23, 1.18, -0.025),(0.23, 1.18, -0.085),(0.17, 1.18, -0.085),(0.17, 1.14, -0.025),(0.23, 1.14, -0.025),(0.23, 1.14, -0.085),(0.17, 1.14, -0.085),(0.18, 0.91, -0.05),(0.22, 0.91, -0.05),(0.22, 0.91, -0.09),(0.18, 0.91, -0.09),(0.18, 0.87, -0.02),(0.22, 0.87, -0.02),(0.22, 0.87, -0.1),(0.18, 0.87, -0.1),(0.18, 0.6976, -0.02),(0.22, 0.6976, -0.02),(0.22, 0.6976, -0.1),(0.18, 0.6976, -0.1),(-0.16, 1.42, 0.015),(-0.24, 1.5, 0.015),(-0.24, 1.5, -0.075),(-0.16, 1.42, -0.075),(-0.17, 1.18, -0.025),(-0.23, 1.18, -0.025),(-0.23, 1.18, -0.085),(-0.17, 1.18, -0.085),(-0.17, 1.14, -0.025),(-0.23, 1.14, -0.025),(-0.23, 1.14, -0.085),(-0.17, 1.14, -0.085),(-0.18, 0.91, -0.05),(-0.22, 0.91, -0.05),(-0.22, 0.91, -0.09),(-0.18, 0.91, -0.09),(-0.18, 0.87, -0.02),(-0.22, 0.87, -0.02),(-0.22, 0.87, -0.1),(-0.18, 0.87, -0.1),(-0.18, 0.6976, -0.02),(-0.22, 0.6976, -0.02),(-0.22, 0.6976, -0.1),(-0.18, 0.6976, -0.1)]

HAnimHumanoid63.skinCoord = Coordinate193
Group194 = x3d.Group()
Shape195 = x3d.Shape()
Shape195.DEF = "TrouserSkin"
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.diffuseColor = [0,0,1]
Material197.transparency = 0.5

Appearance196.material = Material197

Shape195.appearance = Appearance196
IndexedFaceSet198 = x3d.IndexedFaceSet()
IndexedFaceSet198.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]
Coordinate199 = x3d.Coordinate()
Coordinate199.USE = "SKINCOORD"

IndexedFaceSet198.coord = Coordinate199

Shape195.geometry = IndexedFaceSet198

Group194.children.append(Shape195)
Shape200 = x3d.Shape()
Shape200.DEF = "ShoeSkin"
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.diffuseColor = [0,0,0]
Material202.transparency = 0.5

Appearance201.material = Material202

Shape200.appearance = Appearance201
IndexedFaceSet203 = x3d.IndexedFaceSet()
IndexedFaceSet203.coordIndex = [60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]
Coordinate204 = x3d.Coordinate()
Coordinate204.USE = "SKINCOORD"

IndexedFaceSet203.coord = Coordinate204

Shape200.geometry = IndexedFaceSet203

Group194.children.append(Shape200)
Shape205 = x3d.Shape()
Shape205.DEF = "ShirtSkin"
Appearance206 = x3d.Appearance()
Material207 = x3d.Material()
Material207.diffuseColor = [1,1,0]
Material207.transparency = 0.5

Appearance206.material = Material207

Shape205.appearance = Appearance206
IndexedFaceSet208 = x3d.IndexedFaceSet()
IndexedFaceSet208.coordIndex = [148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]
Coordinate209 = x3d.Coordinate()
Coordinate209.USE = "SKINCOORD"

IndexedFaceSet208.coord = Coordinate209

Shape205.geometry = IndexedFaceSet208

Group194.children.append(Shape205)
Shape210 = x3d.Shape()
Shape210.DEF = "HeadHandsFleshToneSkin"
Appearance211 = x3d.Appearance()
Material212 = x3d.Material()
Material212.diffuseColor = [1,0.75,0.75]
Material212.transparency = 0.5

Appearance211.material = Material212

Shape210.appearance = Appearance211
IndexedFaceSet213 = x3d.IndexedFaceSet()
IndexedFaceSet213.coordIndex = [172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]
Coordinate214 = x3d.Coordinate()
Coordinate214.USE = "SKINCOORD"

IndexedFaceSet213.coord = Coordinate214

Shape210.geometry = IndexedFaceSet213

Group194.children.append(Shape210)
Shape215 = x3d.Shape()
Shape215.DEF = "SkinLines"
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.diffuseColor = [0,0,0]

Appearance216.material = Material217

Shape215.appearance = Appearance216
IndexedLineSet218 = x3d.IndexedLineSet()
IndexedLineSet218.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]
Coordinate219 = x3d.Coordinate()
Coordinate219.USE = "SKINCOORD"

IndexedLineSet218.coord = Coordinate219

Shape215.geometry = IndexedLineSet218

Group194.children.append(Shape215)

HAnimHumanoid63.skin.append(Group194)

Scene33.children.append(HAnimHumanoid63)
ProtoInstance220 = x3d.ProtoInstance()
ProtoInstance220.DEF = "ANIMATOR"
ProtoInstance220.name = "LOA1_WalkAnimation"

Scene33.children.append(ProtoInstance220)
Script221 = x3d.Script()
Script221.DEF = "ENGINE"
Script221.url = ["BoxMan3.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js"]
Script221.directOutput = True
field222 = x3d.field()
field222.accessType = "inputOnly"
field222.type = "SFRotation"
field222.name = "update"

Script221.field.append(field222)
field223 = x3d.field()
field223.accessType = "initializeOnly"
field223.type = "SFNode"
field223.name = "humanoid"
HAnimHumanoid224 = x3d.HAnimHumanoid()
HAnimHumanoid224.USE = "boxman_Humanoid"

field223.children.append(HAnimHumanoid224)

Script221.field.append(field223)
field225 = x3d.field()
field225.accessType = "initializeOnly"
field225.type = "MFVec3f"
field225.name = "coordList"

Script221.field.append(field225)
field226 = x3d.field()
field226.accessType = "initializeOnly"
field226.type = "SFNode"
field226.name = "joint"

Script221.field.append(field226)
field227 = x3d.field()
field227.accessType = "initializeOnly"
field227.type = "SFVec3f"
field227.name = "translation"

Script221.field.append(field227)
field228 = x3d.field()
field228.accessType = "initializeOnly"
field228.type = "SFRotation"
field228.name = "rotation"

Script221.field.append(field228)
field229 = x3d.field()
field229.accessType = "initializeOnly"
field229.type = "SFVec3f"
field229.name = "scale"
field229.value = [1,1,1]

Script221.field.append(field229)

Scene33.children.append(Script221)
ROUTE230 = x3d.ROUTE()
ROUTE230.fromNode = "ANIMATOR"
ROUTE230.fromField = "HumanoidRoot_translation_changed"
ROUTE230.toNode = "boxman_humanoid_root"
ROUTE230.toField = "set_translation"

Scene33.children.append(ROUTE230)
ROUTE231 = x3d.ROUTE()
ROUTE231.fromNode = "ANIMATOR"
ROUTE231.fromField = "HumanoidRoot_rotation_changed"
ROUTE231.toNode = "boxman_humanoid_root"
ROUTE231.toField = "set_rotation"

Scene33.children.append(ROUTE231)
ROUTE232 = x3d.ROUTE()
ROUTE232.fromNode = "ANIMATOR"
ROUTE232.fromField = "l_hip_rotation_changed"
ROUTE232.toNode = "boxman_l_hip"
ROUTE232.toField = "set_rotation"

Scene33.children.append(ROUTE232)
ROUTE233 = x3d.ROUTE()
ROUTE233.fromNode = "ANIMATOR"
ROUTE233.fromField = "l_knee_rotation_changed"
ROUTE233.toNode = "boxman_l_knee"
ROUTE233.toField = "set_rotation"

Scene33.children.append(ROUTE233)
ROUTE234 = x3d.ROUTE()
ROUTE234.fromNode = "ANIMATOR"
ROUTE234.fromField = "l_ankle_rotation_changed"
ROUTE234.toNode = "boxman_l_ankle"
ROUTE234.toField = "set_rotation"

Scene33.children.append(ROUTE234)
ROUTE235 = x3d.ROUTE()
ROUTE235.fromNode = "ANIMATOR"
ROUTE235.fromField = "l_midtarsal_rotation_changed"
ROUTE235.toNode = "boxman_l_midtarsal"
ROUTE235.toField = "set_rotation"

Scene33.children.append(ROUTE235)
ROUTE236 = x3d.ROUTE()
ROUTE236.fromNode = "ANIMATOR"
ROUTE236.fromField = "r_hip_rotation_changed"
ROUTE236.toNode = "boxman_r_hip"
ROUTE236.toField = "set_rotation"

Scene33.children.append(ROUTE236)
ROUTE237 = x3d.ROUTE()
ROUTE237.fromNode = "ANIMATOR"
ROUTE237.fromField = "r_knee_rotation_changed"
ROUTE237.toNode = "boxman_r_knee"
ROUTE237.toField = "set_rotation"

Scene33.children.append(ROUTE237)
ROUTE238 = x3d.ROUTE()
ROUTE238.fromNode = "ANIMATOR"
ROUTE238.fromField = "r_ankle_rotation_changed"
ROUTE238.toNode = "boxman_r_ankle"
ROUTE238.toField = "set_rotation"

Scene33.children.append(ROUTE238)
ROUTE239 = x3d.ROUTE()
ROUTE239.fromNode = "ANIMATOR"
ROUTE239.fromField = "r_midtarsal_rotation_changed"
ROUTE239.toNode = "boxman_r_midtarsal"
ROUTE239.toField = "set_rotation"

Scene33.children.append(ROUTE239)
ROUTE240 = x3d.ROUTE()
ROUTE240.fromNode = "ANIMATOR"
ROUTE240.fromField = "vl5_rotation_changed"
ROUTE240.toNode = "boxman_vl5"
ROUTE240.toField = "set_rotation"

Scene33.children.append(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.fromNode = "ANIMATOR"
ROUTE241.fromField = "skullbase_rotation_changed"
ROUTE241.toNode = "boxman_skullbase"
ROUTE241.toField = "set_rotation"

Scene33.children.append(ROUTE241)
ROUTE242 = x3d.ROUTE()
ROUTE242.fromNode = "ANIMATOR"
ROUTE242.fromField = "l_shoulder_rotation_changed"
ROUTE242.toNode = "boxman_l_shoulder"
ROUTE242.toField = "set_rotation"

Scene33.children.append(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.fromNode = "ANIMATOR"
ROUTE243.fromField = "l_elbow_rotation_changed"
ROUTE243.toNode = "boxman_l_elbow"
ROUTE243.toField = "set_rotation"

Scene33.children.append(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.fromNode = "ANIMATOR"
ROUTE244.fromField = "l_wrist_rotation_changed"
ROUTE244.toNode = "boxman_l_wrist"
ROUTE244.toField = "set_rotation"

Scene33.children.append(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.fromNode = "ANIMATOR"
ROUTE245.fromField = "r_shoulder_rotation_changed"
ROUTE245.toNode = "boxman_r_shoulder"
ROUTE245.toField = "set_rotation"

Scene33.children.append(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.fromNode = "ANIMATOR"
ROUTE246.fromField = "r_elbow_rotation_changed"
ROUTE246.toNode = "boxman_r_elbow"
ROUTE246.toField = "set_rotation"

Scene33.children.append(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.fromNode = "ANIMATOR"
ROUTE247.fromField = "r_wrist_rotation_changed"
ROUTE247.toNode = "boxman_r_wrist"
ROUTE247.toField = "set_rotation"

Scene33.children.append(ROUTE247)

X3D0.Scene = Scene33
f = open("../data/BoxMan3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/BoxMan3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/BoxMan3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

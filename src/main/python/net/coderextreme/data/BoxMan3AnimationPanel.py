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
meta3.content = "BoxMan3AnimationPanel.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe Williams and James Smith - james@vapourtech.com"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Joe Williams and Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = ".x3d to .x3d translation used BS Contact Geo 8.203"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "created"
meta10.content = "1 March 2001"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "revision"
meta11.content = "12 January 2017"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "translated"
meta12.content = "14 January 2017"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "modified"
meta13.content = "Tue, 09 Sep 2025 19:37:50 GMT"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "error"
meta14.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "Image"
meta15.content = "BoxManAnimationPanelInclined.png"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "MovingImage"
meta16.content = "BoxManAnimationPanel.mp4"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "MovingImage"
meta17.content = "https://www.youtube.com/watch?v=8tI83Rtg_DU"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "https://twitter.com/Web3DConsortium/status/820638047523913728"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "https://twitter.com/Web3DConsortium/status/820642726009978881"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "reference"
meta20.content = "http://HAnim.org"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "reference"
meta21.content = "originals/boxman.wrl"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "reference"
meta22.content = "BoxMan3.x3d"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "reference"
meta23.content = "http://HAnim.org/Models/HAnim2001/boxman"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "reference"
meta24.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "reference"
meta25.content = "http://www.vapourtech.com/team/james/boxman.wrl"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "reference"
meta26.content = "http://HAnim.org/Specifications/HAnim2001"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "reference"
meta27.content = "http://HAnim.org/Models"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "reference"
meta28.content = "http://HAnim.org/Nodes"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "reference"
meta29.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "reference"
meta30.content = "http://www.vapourtech.com"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "TODO"
meta31.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "rights"
meta32.content = "(C) 2000 James Smith - james@vapourtech.com"

head1.children.append(meta32)

X3D0.head = head1
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.title = "BoxMan3 - A Seamless VRML Human"
WorldInfo34.info = ["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]

Scene33.children.append(WorldInfo34)
Background35 = x3d.Background()
Background35.skyColor = [(0.75, 0.75, 0.75)]
Background35.groundColor = [(0.6, 0.6, 0.6)]

Scene33.children.append(Background35)
HAnimHumanoid36 = x3d.HAnimHumanoid()
HAnimHumanoid36.DEF = "boxman_Humanoid"
HAnimHumanoid36.name = "Humanoid"
HAnimHumanoid36.info = ["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]
HAnimHumanoid36.version = "1.0"
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.DEF = "boxman_humanoid_root"
HAnimJoint37.name = "humanoid_root"
HAnimJoint37.center = [0,0.9723,-0.0728]
HAnimJoint37.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9,10,11]
HAnimJoint37.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment38 = x3d.HAnimSegment()
HAnimSegment38.DEF = "boxman_sacrum"
HAnimSegment38.name = "sacrum"
Transform39 = x3d.Transform()
Transform39.translation = [0,0.9723,-0.0728]
Shape40 = x3d.Shape()
Shape40.DEF = "SphereYellow"
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.diffuseColor = [1,1,0]

Appearance41.material = Material42

Shape40.appearance = Appearance41
Sphere43 = x3d.Sphere()
Sphere43.radius = 0.02

Shape40.geometry = Sphere43

Transform39.children.append(Shape40)

HAnimSegment38.children.append(Transform39)

HAnimJoint37.children.append(HAnimSegment38)
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.DEF = "boxman_l_hip"
HAnimJoint44.name = "l_hip"
HAnimJoint44.center = [0.0956,0.9364,0]
HAnimJoint44.skinCoordIndex = [12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]
HAnimJoint44.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.DEF = "boxman_l_thigh"
HAnimSegment45.name = "l_thigh"
Transform46 = x3d.Transform()
Transform46.translation = [0.0956,0.9364,0]
Shape47 = x3d.Shape()
Shape47.USE = "SphereYellow"

Transform46.children.append(Shape47)

HAnimSegment45.children.append(Transform46)

HAnimJoint44.children.append(HAnimSegment45)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.DEF = "boxman_l_knee"
HAnimJoint48.name = "l_knee"
HAnimJoint48.center = [0.0956,0.5095,-0.0036]
HAnimJoint48.skinCoordIndex = [36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]
HAnimJoint48.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.DEF = "boxman_l_calf"
HAnimSegment49.name = "l_calf"
Transform50 = x3d.Transform()
Transform50.translation = [0.0956,0.5095,-0.0036]
Shape51 = x3d.Shape()
Shape51.USE = "SphereYellow"

Transform50.children.append(Shape51)

HAnimSegment49.children.append(Transform50)

HAnimJoint48.children.append(HAnimSegment49)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "boxman_l_ankle"
HAnimJoint52.name = "l_ankle"
HAnimJoint52.rotation = [-0.999999999999999,0,0,0.934517418078819]
HAnimJoint52.center = [0.0946,0.0762,-0.0261]
HAnimJoint52.skinCoordIndex = [64,65,66,67,68,69,70,71]
HAnimJoint52.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.DEF = "boxman_l_hindfoot"
HAnimSegment53.name = "l_hindfoot"
Transform54 = x3d.Transform()
Transform54.translation = [0.0946,0.0762,-0.0261]
Shape55 = x3d.Shape()
Shape55.USE = "SphereYellow"

Transform54.children.append(Shape55)

HAnimSegment53.children.append(Transform54)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "boxman_l_midtarsal"
HAnimJoint56.name = "l_midtarsal"
HAnimJoint56.center = [0.1079,0.0317,0.067]
HAnimJoint56.skinCoordIndex = [72,73,74,75,76,77,78,79]
HAnimJoint56.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.DEF = "boxman_l_middistal"
HAnimSegment57.name = "l_middistal"
Transform58 = x3d.Transform()
Transform58.translation = [0.1079,0.0317,0.067]
Shape59 = x3d.Shape()
Shape59.USE = "SphereYellow"

Transform58.children.append(Shape59)

HAnimSegment57.children.append(Transform58)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.DEF = "boxman_l_middistal_tip"
HAnimSite60.name = "l_middistal_tip"
HAnimSite60.translation = [0.095,0.0005,0.1924]
Shape61 = x3d.Shape()
Shape61.DEF = "SphereRed"
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.diffuseColor = [1,0,0]

Appearance62.material = Material63

Shape61.appearance = Appearance62
Sphere64 = x3d.Sphere()
Sphere64.radius = 0.02

Shape61.geometry = Sphere64

HAnimSite60.children.append(Shape61)

HAnimSegment57.children.append(HAnimSite60)

HAnimJoint56.children.append(HAnimSegment57)

HAnimJoint52.children.append(HAnimJoint56)

HAnimJoint48.children.append(HAnimJoint52)

HAnimJoint44.children.append(HAnimJoint48)

HAnimJoint37.children.append(HAnimJoint44)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.DEF = "boxman_r_hip"
HAnimJoint65.name = "r_hip"
HAnimJoint65.rotation = [-1,0,0,1.84517416925276]
HAnimJoint65.center = [-0.0956,0.9364,0]
HAnimJoint65.skinCoordIndex = [80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]
HAnimJoint65.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]
HAnimSegment66 = x3d.HAnimSegment()
HAnimSegment66.DEF = "boxman_r_thigh"
HAnimSegment66.name = "r_thigh"
Transform67 = x3d.Transform()
Transform67.translation = [-0.0956,0.9364,0]
Shape68 = x3d.Shape()
Shape68.USE = "SphereYellow"

Transform67.children.append(Shape68)

HAnimSegment66.children.append(Transform67)

HAnimJoint65.children.append(HAnimSegment66)
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "boxman_r_knee"
HAnimJoint69.name = "r_knee"
HAnimJoint69.rotation = [1,0,0,1.81193032768473]
HAnimJoint69.center = [-0.0956,0.5095,-0.0036]
HAnimJoint69.skinCoordIndex = [104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]
HAnimJoint69.skinCoordWeight = [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment70 = x3d.HAnimSegment()
HAnimSegment70.DEF = "boxman_r_calf"
HAnimSegment70.name = "r_calf"
Transform71 = x3d.Transform()
Transform71.translation = [-0.0956,0.5095,-0.0036]
Shape72 = x3d.Shape()
Shape72.USE = "SphereYellow"

Transform71.children.append(Shape72)

HAnimSegment70.children.append(Transform71)

HAnimJoint69.children.append(HAnimSegment70)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.DEF = "boxman_r_ankle"
HAnimJoint73.name = "r_ankle"
HAnimJoint73.rotation = [-0.999999999999999,0,0,0.934517418078819]
HAnimJoint73.center = [-0.0946,0.0762,-0.0261]
HAnimJoint73.skinCoordIndex = [132,133,134,135,136,137,138,139]
HAnimJoint73.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.DEF = "boxman_r_hindfoot"
HAnimSegment74.name = "r_hindfoot"
Transform75 = x3d.Transform()
Transform75.translation = [-0.0946,0.0762,-0.0261]
Shape76 = x3d.Shape()
Shape76.USE = "SphereYellow"

Transform75.children.append(Shape76)

HAnimSegment74.children.append(Transform75)

HAnimJoint73.children.append(HAnimSegment74)
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.DEF = "boxman_r_midtarsal"
HAnimJoint77.name = "r_midtarsal"
HAnimJoint77.center = [-0.1079,0.0317,0.067]
HAnimJoint77.skinCoordIndex = [140,141,142,143,144,145,146,147]
HAnimJoint77.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment78 = x3d.HAnimSegment()
HAnimSegment78.DEF = "boxman_r_middistal"
HAnimSegment78.name = "r_middistal"
Transform79 = x3d.Transform()
Transform79.translation = [-0.1079,0.0317,0.067]
Shape80 = x3d.Shape()
Shape80.USE = "SphereYellow"

Transform79.children.append(Shape80)

HAnimSegment78.children.append(Transform79)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.DEF = "boxman_r_middistal_tip"
HAnimSite81.name = "r_middistal_tip"
HAnimSite81.translation = [-0.095,0.0005,0.1924]
Shape82 = x3d.Shape()
Shape82.USE = "SphereRed"

HAnimSite81.children.append(Shape82)

HAnimSegment78.children.append(HAnimSite81)

HAnimJoint77.children.append(HAnimSegment78)

HAnimJoint73.children.append(HAnimJoint77)

HAnimJoint69.children.append(HAnimJoint73)

HAnimJoint65.children.append(HAnimJoint69)

HAnimJoint37.children.append(HAnimJoint65)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.DEF = "boxman_vl5"
HAnimJoint83.name = "vl5"
HAnimJoint83.center = [0,1.0817,-0.0728]
HAnimJoint83.skinCoordIndex = [148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]
HAnimJoint83.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment84 = x3d.HAnimSegment()
HAnimSegment84.DEF = "boxman_l5"
HAnimSegment84.name = "l5"
Transform85 = x3d.Transform()
Transform85.translation = [0,1.0817,-0.0728]
Shape86 = x3d.Shape()
Shape86.USE = "SphereYellow"

Transform85.children.append(Shape86)

HAnimSegment84.children.append(Transform85)

HAnimJoint83.children.append(HAnimSegment84)
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.DEF = "boxman_skullbase"
HAnimJoint87.name = "skullbase"
HAnimJoint87.rotation = [-0.999999999999998,0,0,0.567582977341481]
HAnimJoint87.center = [0,1.644,0.036]
HAnimJoint87.skinCoordIndex = [168,169,170,171,172,173,174,175]
HAnimJoint87.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment88 = x3d.HAnimSegment()
HAnimSegment88.DEF = "boxman_skull"
HAnimSegment88.name = "skull"
Transform89 = x3d.Transform()
Transform89.translation = [0,1.644,0.036]
Shape90 = x3d.Shape()
Shape90.USE = "SphereYellow"

Transform89.children.append(Shape90)

HAnimSegment88.children.append(Transform89)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.DEF = "boxman_skull_tip"
HAnimSite91.name = "skull_tip"
HAnimSite91.translation = [-0.0029,1.7771,0.0274]
Shape92 = x3d.Shape()
Shape92.USE = "SphereYellow"

HAnimSite91.children.append(Shape92)

HAnimSegment88.children.append(HAnimSite91)

HAnimJoint87.children.append(HAnimSegment88)

HAnimJoint83.children.append(HAnimJoint87)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.DEF = "boxman_l_shoulder"
HAnimJoint93.name = "l_shoulder"
HAnimJoint93.rotation = [-0.168396082523642,0,0.98571941209996,1.75368175088092]
HAnimJoint93.center = [0.1968,1.4642,-0.0265]
HAnimJoint93.skinCoordIndex = [176,177,178,179,180,181,182,183]
HAnimJoint93.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment94 = x3d.HAnimSegment()
HAnimSegment94.DEF = "boxman_l_upperarm"
HAnimSegment94.name = "l_upperarm"
Transform95 = x3d.Transform()
Transform95.translation = [0.1968,1.4642,-0.0265]
Shape96 = x3d.Shape()
Shape96.USE = "SphereYellow"

Transform95.children.append(Shape96)

HAnimSegment94.children.append(Transform95)

HAnimJoint93.children.append(HAnimSegment94)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "boxman_l_elbow"
HAnimJoint97.name = "l_elbow"
HAnimJoint97.rotation = [0.976795664618561,-0.214173363382058,0,4.35600755948079]
HAnimJoint97.center = [0.1982,1.1622,-0.0557]
HAnimJoint97.skinCoordIndex = [184,185,186,187,188,189,190,191]
HAnimJoint97.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment98 = x3d.HAnimSegment()
HAnimSegment98.DEF = "boxman_l_forearm"
HAnimSegment98.name = "l_forearm"
Transform99 = x3d.Transform()
Transform99.translation = [0.1982,1.1622,-0.0557]
Shape100 = x3d.Shape()
Shape100.USE = "SphereYellow"

Transform99.children.append(Shape100)

HAnimSegment98.children.append(Transform99)

HAnimJoint97.children.append(HAnimSegment98)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.DEF = "boxman_l_wrist"
HAnimJoint101.name = "l_wrist"
HAnimJoint101.rotation = [0,1,0,0.379691598867005]
HAnimJoint101.center = [0.1972,0.8929,-0.069]
HAnimJoint101.skinCoordIndex = [192,193,194,195,196,197,198,199]
HAnimJoint101.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.DEF = "boxman_l_hand"
HAnimSegment102.name = "l_hand"
Transform103 = x3d.Transform()
Transform103.translation = [0.1972,0.8929,-0.069]
Shape104 = x3d.Shape()
Shape104.USE = "SphereYellow"

Transform103.children.append(Shape104)

HAnimSegment102.children.append(Transform103)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.DEF = "boxman_l_hand_tip"
HAnimSite105.name = "l_hand_tip"
HAnimSite105.translation = [0.1912,0.6976,-0.071]
Shape106 = x3d.Shape()
Shape106.USE = "SphereRed"

HAnimSite105.children.append(Shape106)

HAnimSegment102.children.append(HAnimSite105)

HAnimJoint101.children.append(HAnimSegment102)

HAnimJoint97.children.append(HAnimJoint101)

HAnimJoint93.children.append(HAnimJoint97)

HAnimJoint83.children.append(HAnimJoint93)
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.DEF = "boxman_r_shoulder"
HAnimJoint107.name = "r_shoulder"
HAnimJoint107.rotation = [0.168396082523642,0,0.98571941209996,4.52950355629867]
HAnimJoint107.center = [-0.1968,1.4642,-0.0265]
HAnimJoint107.skinCoordIndex = [200,201,202,203,204,205,206,207]
HAnimJoint107.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment108 = x3d.HAnimSegment()
HAnimSegment108.DEF = "boxman_r_upperarm"
HAnimSegment108.name = "r_upperarm"
Transform109 = x3d.Transform()
Transform109.translation = [-0.1968,1.4642,-0.0265]
Shape110 = x3d.Shape()
Shape110.USE = "SphereYellow"

Transform109.children.append(Shape110)

HAnimSegment108.children.append(Transform109)

HAnimJoint107.children.append(HAnimSegment108)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.DEF = "boxman_r_elbow"
HAnimJoint111.name = "r_elbow"
HAnimJoint111.rotation = [0.976795664618562,0.214173363382058,0,4.35600755948079]
HAnimJoint111.center = [-0.1982,1.1622,-0.0557]
HAnimJoint111.skinCoordIndex = [208,209,210,211,212,213,214,215]
HAnimJoint111.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.DEF = "boxman_r_forearm"
HAnimSegment112.name = "r_forearm"
Transform113 = x3d.Transform()
Transform113.translation = [-0.1982,1.1622,-0.0557]
Shape114 = x3d.Shape()
Shape114.USE = "SphereYellow"

Transform113.children.append(Shape114)

HAnimSegment112.children.append(Transform113)

HAnimJoint111.children.append(HAnimSegment112)
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "boxman_r_wrist"
HAnimJoint115.name = "r_wrist"
HAnimJoint115.rotation = [0,-1,0,0.379691598867005]
HAnimJoint115.center = [-0.1972,0.8929,-0.069]
HAnimJoint115.skinCoordIndex = [216,217,218,219,220,221,222,223]
HAnimJoint115.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment116 = x3d.HAnimSegment()
HAnimSegment116.DEF = "boxman_r_hand"
HAnimSegment116.name = "r_hand"
Transform117 = x3d.Transform()
Transform117.translation = [-0.1972,0.8929,-0.069]
Shape118 = x3d.Shape()
Shape118.USE = "SphereYellow"

Transform117.children.append(Shape118)

HAnimSegment116.children.append(Transform117)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.DEF = "boxman_r_hand_tip"
HAnimSite119.name = "r_hand_tip"
HAnimSite119.translation = [-0.1912,0.6976,-0.071]
Shape120 = x3d.Shape()
Shape120.USE = "SphereRed"

HAnimSite119.children.append(Shape120)

HAnimSegment116.children.append(HAnimSite119)

HAnimJoint115.children.append(HAnimSegment116)

HAnimJoint111.children.append(HAnimJoint115)

HAnimJoint107.children.append(HAnimJoint111)

HAnimJoint83.children.append(HAnimJoint107)

HAnimJoint37.children.append(HAnimJoint83)

HAnimHumanoid36.skeleton.append(HAnimJoint37)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.USE = "boxman_humanoid_root"

HAnimHumanoid36.joints.append(HAnimJoint121)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.USE = "boxman_skullbase"

HAnimHumanoid36.joints.append(HAnimJoint122)
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.USE = "boxman_vl5"

HAnimHumanoid36.joints.append(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.USE = "boxman_r_ankle"

HAnimHumanoid36.joints.append(HAnimJoint124)
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.USE = "boxman_l_ankle"

HAnimHumanoid36.joints.append(HAnimJoint125)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.USE = "boxman_r_elbow"

HAnimHumanoid36.joints.append(HAnimJoint126)
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.USE = "boxman_l_elbow"

HAnimHumanoid36.joints.append(HAnimJoint127)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.USE = "boxman_r_hip"

HAnimHumanoid36.joints.append(HAnimJoint128)
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.USE = "boxman_l_hip"

HAnimHumanoid36.joints.append(HAnimJoint129)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.USE = "boxman_r_knee"

HAnimHumanoid36.joints.append(HAnimJoint130)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.USE = "boxman_l_knee"

HAnimHumanoid36.joints.append(HAnimJoint131)
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.USE = "boxman_r_midtarsal"

HAnimHumanoid36.joints.append(HAnimJoint132)
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.USE = "boxman_l_midtarsal"

HAnimHumanoid36.joints.append(HAnimJoint133)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.USE = "boxman_r_shoulder"

HAnimHumanoid36.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.USE = "boxman_l_shoulder"

HAnimHumanoid36.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.USE = "boxman_r_wrist"

HAnimHumanoid36.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.USE = "boxman_l_wrist"

HAnimHumanoid36.joints.append(HAnimJoint137)
HAnimSegment138 = x3d.HAnimSegment()
HAnimSegment138.USE = "boxman_sacrum"

HAnimHumanoid36.segments.append(HAnimSegment138)
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.USE = "boxman_l5"

HAnimHumanoid36.segments.append(HAnimSegment139)
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.USE = "boxman_skull"

HAnimHumanoid36.segments.append(HAnimSegment140)
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.USE = "boxman_l_calf"

HAnimHumanoid36.segments.append(HAnimSegment141)
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.USE = "boxman_r_calf"

HAnimHumanoid36.segments.append(HAnimSegment142)
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.USE = "boxman_l_forearm"

HAnimHumanoid36.segments.append(HAnimSegment143)
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.USE = "boxman_r_forearm"

HAnimHumanoid36.segments.append(HAnimSegment144)
HAnimSegment145 = x3d.HAnimSegment()
HAnimSegment145.USE = "boxman_l_hand"

HAnimHumanoid36.segments.append(HAnimSegment145)
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.USE = "boxman_r_hand"

HAnimHumanoid36.segments.append(HAnimSegment146)
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.USE = "boxman_l_hindfoot"

HAnimHumanoid36.segments.append(HAnimSegment147)
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.USE = "boxman_r_hindfoot"

HAnimHumanoid36.segments.append(HAnimSegment148)
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.USE = "boxman_l_middistal"

HAnimHumanoid36.segments.append(HAnimSegment149)
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.USE = "boxman_r_middistal"

HAnimHumanoid36.segments.append(HAnimSegment150)
HAnimSegment151 = x3d.HAnimSegment()
HAnimSegment151.USE = "boxman_l_thigh"

HAnimHumanoid36.segments.append(HAnimSegment151)
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.USE = "boxman_r_thigh"

HAnimHumanoid36.segments.append(HAnimSegment152)
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.USE = "boxman_l_upperarm"

HAnimHumanoid36.segments.append(HAnimSegment153)
HAnimSegment154 = x3d.HAnimSegment()
HAnimSegment154.USE = "boxman_r_upperarm"

HAnimHumanoid36.segments.append(HAnimSegment154)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.USE = "boxman_skull_tip"

HAnimHumanoid36.sites.append(HAnimSite155)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.USE = "boxman_l_hand_tip"

HAnimHumanoid36.sites.append(HAnimSite156)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.USE = "boxman_r_hand_tip"

HAnimHumanoid36.sites.append(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.USE = "boxman_l_middistal_tip"

HAnimHumanoid36.sites.append(HAnimSite158)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.USE = "boxman_r_middistal_tip"

HAnimHumanoid36.sites.append(HAnimSite159)
HAnimSite160 = x3d.HAnimSite()
HAnimSite160.DEF = "boxman_BoxMan_view"
HAnimSite160.name = "BoxMan_view"
Viewpoint161 = x3d.Viewpoint()
Viewpoint161.DEF = "Inclined_View"
Viewpoint161.description = "Inclined View"
Viewpoint161.position = [2,0.9,2]
Viewpoint161.orientation = [0,1,0,0.78]

HAnimSite160.children.append(Viewpoint161)
Viewpoint162 = x3d.Viewpoint()
Viewpoint162.DEF = "Front_View"
Viewpoint162.description = "Front View"
Viewpoint162.position = [0,1,3]

HAnimSite160.children.append(Viewpoint162)
Viewpoint163 = x3d.Viewpoint()
Viewpoint163.DEF = "Best_View"
Viewpoint163.description = "Right-side View"
Viewpoint163.position = [-3,1,0]
Viewpoint163.orientation = [0,1,0,-1.57]

HAnimSite160.children.append(Viewpoint163)
Viewpoint164 = x3d.Viewpoint()
Viewpoint164.DEF = "Side_View"
Viewpoint164.description = "Left-side View"
Viewpoint164.position = [3,1,0]
Viewpoint164.orientation = [0,1,0,1.57]

HAnimSite160.children.append(Viewpoint164)
Viewpoint165 = x3d.Viewpoint()
Viewpoint165.DEF = "Top_View"
Viewpoint165.description = "Top View"
Viewpoint165.position = [0,3,0]
Viewpoint165.orientation = [1,0,0,-1.57]

HAnimSite160.children.append(Viewpoint165)

HAnimHumanoid36.viewpoints.append(HAnimSite160)
Coordinate166 = x3d.Coordinate()
Coordinate166.DEF = "SKINCOORD"
Coordinate166.point = [(-0.05, 1, 0.05),(0.05, 1, 0.05),(0.03, 0.97, -0.1),(-0.03, 0.97, -0.1),(0.03, 0.94, -0.075),(-0.03, 0.94, -0.075),(0, 0.92, 0),(0, 0.94, 0.03),(-0.12, 1.06, 0.05),(0.12, 1.06, 0.05),(0.12, 1.06, -0.1),(-0.12, 1.06, -0.1),(0.0456, 0.9364, 0.05),(0.1456, 0.9364, 0.05),(0.1456, 0.9364, -0.05),(0.0456, 0.9364, -0.05),(0.0456, 0.9, 0.05),(0.1456, 0.9, 0.05),(0.1456, 0.9, -0.05),(0.0456, 0.9, -0.05),(0.0456, 0.8, 0.05),(0.1456, 0.8, 0.05),(0.1456, 0.8, -0.05),(0.0456, 0.8, -0.05),(0.0456, 0.7, 0.05),(0.1456, 0.7, 0.05),(0.1456, 0.7, -0.05),(0.0456, 0.7, -0.05),(0.0456, 0.6, 0.05),(0.1456, 0.6, 0.05),(0.1456, 0.6, -0.05),(0.0456, 0.6, -0.05),(0.0456, 0.55, 0.05),(0.1456, 0.55, 0.05),(0.1456, 0.55, -0.05),(0.0456, 0.55, -0.05),(0.0456, 0.52, 0.05),(0.1456, 0.52, 0.05),(0.1456, 0.52, -0.05),(0.0456, 0.52, -0.05),(0.0456, 0.5, 0.05),(0.1456, 0.5, 0.05),(0.1456, 0.5, -0.05),(0.0456, 0.5, -0.05),(0.0454, 0.43, 0.045),(0.1454, 0.43, 0.045),(0.1454, 0.43, -0.055),(0.0454, 0.43, -0.055),(0.0452, 0.36, 0.04),(0.1452, 0.36, 0.04),(0.1452, 0.36, -0.06),(0.0452, 0.36, -0.06),(0.045, 0.29, 0.035),(0.145, 0.29, 0.035),(0.145, 0.29, -0.065),(0.045, 0.29, -0.065),(0.0448, 0.21, 0.03),(0.1448, 0.21, 0.03),(0.1448, 0.21, -0.07),(0.0448, 0.21, -0.07),(0.0446, 0.1262, 0.025),(0.1446, 0.1262, 0.025),(0.1446, 0.1262, -0.075),(0.0446, 0.1262, -0.075),(0.0446, 0.0762, 0.025),(0.1446, 0.0762, 0.025),(0.1446, 0, -0.075),(0.0446, 0, -0.075),(0.0446, 0.0562, 0.057),(0.1446, 0.0562, 0.057),(0.1446, 0, 0.057),(0.0446, 0, 0.057),(0.0446, 0.0562, 0.087),(0.1446, 0.0562, 0.087),(0.1446, 0, 0.087),(0.0446, 0, 0.087),(0.0446, 0.0562, 0.1924),(0.1446, 0.0562, 0.1924),(0.1446, 0, 0.1924),(0.0446, 0, 0.1924),(-0.0456, 0.9364, 0.05),(-0.1456, 0.9364, 0.05),(-0.1456, 0.9364, -0.05),(-0.0456, 0.9364, -0.05),(-0.0456, 0.9, 0.05),(-0.1456, 0.9, 0.05),(-0.1456, 0.9, -0.05),(-0.0456, 0.9, -0.05),(-0.0456, 0.8, 0.05),(-0.1456, 0.8, 0.05),(-0.1456, 0.8, -0.05),(-0.0456, 0.8, -0.05),(-0.0456, 0.7, 0.05),(-0.1456, 0.7, 0.05),(-0.1456, 0.7, -0.05),(-0.0456, 0.7, -0.05),(-0.0456, 0.6, 0.05),(-0.1456, 0.6, 0.05),(-0.1456, 0.6, -0.05),(-0.0456, 0.6, -0.05),(-0.0456, 0.55, 0.05),(-0.1456, 0.55, 0.05),(-0.1456, 0.55, -0.05),(-0.0456, 0.55, -0.05),(-0.0456, 0.52, 0.05),(-0.1456, 0.52, 0.05),(-0.1456, 0.52, -0.05),(-0.0456, 0.52, -0.05),(-0.0456, 0.5, 0.05),(-0.1456, 0.5, 0.05),(-0.1456, 0.5, -0.05),(-0.0456, 0.5, -0.05),(-0.0454, 0.43, 0.045),(-0.1454, 0.43, 0.045),(-0.1454, 0.43, -0.055),(-0.0454, 0.43, -0.055),(-0.0452, 0.36, 0.04),(-0.1452, 0.36, 0.04),(-0.1452, 0.36, -0.06),(-0.0452, 0.36, -0.06),(-0.045, 0.29, 0.035),(-0.145, 0.29, 0.035),(-0.145, 0.29, -0.065),(-0.045, 0.29, -0.065),(-0.0448, 0.21, 0.03),(-0.1448, 0.21, 0.03),(-0.1448, 0.21, -0.07),(-0.0448, 0.21, -0.07),(-0.0446, 0.1262, 0.025),(-0.1446, 0.1262, 0.025),(-0.1446, 0.1262, -0.075),(-0.0446, 0.1262, -0.075),(-0.0446, 0.0762, 0.025),(-0.1446, 0.0762, 0.025),(-0.1446, 0, -0.075),(-0.0446, 0, -0.075),(-0.0446, 0.0562, 0.057),(-0.1446, 0.0562, 0.057),(-0.1446, 0, 0.057),(-0.0446, 0, 0.057),(-0.0446, 0.0562, 0.087),(-0.1446, 0.0562, 0.087),(-0.1446, 0, 0.087),(-0.0446, 0, 0.087),(-0.0446, 0.0562, 0.1924),(-0.1446, 0.0562, 0.1924),(-0.1446, 0, 0.1924),(-0.0446, 0, 0.1924),(-0.12, 1.1, 0.05),(0.12, 1.1, 0.05),(0.12, 1.1, -0.1),(-0.12, 1.1, -0.1),(-0.14, 1.42, 0.045),(0.14, 1.42, 0.045),(0.14, 1.42, -0.09),(-0.14, 1.42, -0.09),(-0.24, 1.52, 0.035),(0.24, 1.52, 0.035),(0.24, 1.52, -0.09),(-0.24, 1.52, -0.09),(-0.05, 1.56, 0.03),(0.05, 1.56, 0.03),(0.05, 1.56, -0.06),(-0.05, 1.56, -0.06),(-0.05, 1.6, 0.06),(0.05, 1.6, 0.06),(0.05, 1.62, -0.03),(-0.05, 1.62, -0.03),(-0.07, 1.777, 0.13),(0.07, 1.777, 0.13),(0.07, 1.777, -0.03),(-0.07, 1.777, -0.03),(-0.07, 1.6, 0.13),(0.07, 1.6, 0.13),(0.07, 1.66, -0.03),(-0.07, 1.66, -0.03),(0.16, 1.42, 0.015),(0.24, 1.5, 0.015),(0.24, 1.5, -0.075),(0.16, 1.42, -0.075),(0.17, 1.18, -0.025),(0.23, 1.18, -0.025),(0.23, 1.18, -0.085),(0.17, 1.18, -0.085),(0.17, 1.14, -0.025),(0.23, 1.14, -0.025),(0.23, 1.14, -0.085),(0.17, 1.14, -0.085),(0.18, 0.91, -0.05),(0.22, 0.91, -0.05),(0.22, 0.91, -0.09),(0.18, 0.91, -0.09),(0.18, 0.87, -0.02),(0.22, 0.87, -0.02),(0.22, 0.87, -0.1),(0.18, 0.87, -0.1),(0.18, 0.6976, -0.02),(0.22, 0.6976, -0.02),(0.22, 0.6976, -0.1),(0.18, 0.6976, -0.1),(-0.16, 1.42, 0.015),(-0.24, 1.5, 0.015),(-0.24, 1.5, -0.075),(-0.16, 1.42, -0.075),(-0.17, 1.18, -0.025),(-0.23, 1.18, -0.025),(-0.23, 1.18, -0.085),(-0.17, 1.18, -0.085),(-0.17, 1.14, -0.025),(-0.23, 1.14, -0.025),(-0.23, 1.14, -0.085),(-0.17, 1.14, -0.085),(-0.18, 0.91, -0.05),(-0.22, 0.91, -0.05),(-0.22, 0.91, -0.09),(-0.18, 0.91, -0.09),(-0.18, 0.87, -0.02),(-0.22, 0.87, -0.02),(-0.22, 0.87, -0.1),(-0.18, 0.87, -0.1),(-0.18, 0.6976, -0.02),(-0.22, 0.6976, -0.02),(-0.22, 0.6976, -0.1),(-0.18, 0.6976, -0.1)]

HAnimHumanoid36.skinCoord = Coordinate166
Group167 = x3d.Group()
Shape168 = x3d.Shape()
Shape168.DEF = "TrouserSkin"
Appearance169 = x3d.Appearance()
Material170 = x3d.Material()
Material170.diffuseColor = [0,0,1]
Material170.transparency = 0.5

Appearance169.material = Material170

Shape168.appearance = Appearance169
IndexedFaceSet171 = x3d.IndexedFaceSet()
IndexedFaceSet171.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]
Coordinate172 = x3d.Coordinate()
Coordinate172.USE = "SKINCOORD"

IndexedFaceSet171.coord = Coordinate172

Shape168.geometry = IndexedFaceSet171

Group167.children.append(Shape168)
Shape173 = x3d.Shape()
Shape173.DEF = "ShoeSkin"
Appearance174 = x3d.Appearance()
Material175 = x3d.Material()
Material175.diffuseColor = [0,0,0]
Material175.transparency = 0.5

Appearance174.material = Material175

Shape173.appearance = Appearance174
IndexedFaceSet176 = x3d.IndexedFaceSet()
IndexedFaceSet176.coordIndex = [60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]
Coordinate177 = x3d.Coordinate()
Coordinate177.USE = "SKINCOORD"

IndexedFaceSet176.coord = Coordinate177

Shape173.geometry = IndexedFaceSet176

Group167.children.append(Shape173)
Shape178 = x3d.Shape()
Shape178.DEF = "ShirtSkin"
Appearance179 = x3d.Appearance()
Material180 = x3d.Material()
Material180.diffuseColor = [1,1,0]
Material180.transparency = 0.5

Appearance179.material = Material180

Shape178.appearance = Appearance179
IndexedFaceSet181 = x3d.IndexedFaceSet()
IndexedFaceSet181.coordIndex = [148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]
Coordinate182 = x3d.Coordinate()
Coordinate182.USE = "SKINCOORD"

IndexedFaceSet181.coord = Coordinate182

Shape178.geometry = IndexedFaceSet181

Group167.children.append(Shape178)
Shape183 = x3d.Shape()
Shape183.DEF = "HeadHandsFleshToneSkin"
Appearance184 = x3d.Appearance()
Material185 = x3d.Material()
Material185.diffuseColor = [1,0.75,0.75]
Material185.transparency = 0.5

Appearance184.material = Material185

Shape183.appearance = Appearance184
IndexedFaceSet186 = x3d.IndexedFaceSet()
IndexedFaceSet186.coordIndex = [172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]
Coordinate187 = x3d.Coordinate()
Coordinate187.USE = "SKINCOORD"

IndexedFaceSet186.coord = Coordinate187

Shape183.geometry = IndexedFaceSet186

Group167.children.append(Shape183)
Shape188 = x3d.Shape()
Shape188.DEF = "SkinLines"
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.diffuseColor = [0,0,0]

Appearance189.material = Material190

Shape188.appearance = Appearance189
IndexedLineSet191 = x3d.IndexedLineSet()
IndexedLineSet191.coordIndex = [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]
Coordinate192 = x3d.Coordinate()
Coordinate192.USE = "SKINCOORD"

IndexedLineSet191.coord = Coordinate192

Shape188.geometry = IndexedLineSet191

Group167.children.append(Shape188)

HAnimHumanoid36.skin.append(Group167)

Scene33.children.append(HAnimHumanoid36)
Group193 = x3d.Group()
Group193.DEF = "StopAnimation"
TimeSensor194 = x3d.TimeSensor()
TimeSensor194.DEF = "StopTimer"
TimeSensor194.cycleInterval = 5.73
TimeSensor194.loop = True

Group193.children.append(TimeSensor194)
PositionInterpolator195 = x3d.PositionInterpolator()
PositionInterpolator195.DEF = "Stop_humanoid_root_TranslationInterpolator"
PositionInterpolator195.key = [0,0.5,1]
PositionInterpolator195.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group193.children.append(PositionInterpolator195)
OrientationInterpolator196 = x3d.OrientationInterpolator()
OrientationInterpolator196.DEF = "Stop_humanoid_root_RotationInterpolator"
OrientationInterpolator196.key = [0,0.5,1]
OrientationInterpolator196.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator196)
OrientationInterpolator197 = x3d.OrientationInterpolator()
OrientationInterpolator197.DEF = "Stop_sacroiliac_RotationInterpolator"
OrientationInterpolator197.key = [0,0.5,1]
OrientationInterpolator197.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator197)
OrientationInterpolator198 = x3d.OrientationInterpolator()
OrientationInterpolator198.DEF = "Stop_l_hip_RotationInterpolator"
OrientationInterpolator198.key = [0,0.5,1]
OrientationInterpolator198.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator198)
OrientationInterpolator199 = x3d.OrientationInterpolator()
OrientationInterpolator199.DEF = "Stop_l_knee_RotationInterpolator"
OrientationInterpolator199.key = [0,0.5,1]
OrientationInterpolator199.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator199)
OrientationInterpolator200 = x3d.OrientationInterpolator()
OrientationInterpolator200.DEF = "Stop_l_ankle_RotationInterpolator"
OrientationInterpolator200.key = [0,0.5,1]
OrientationInterpolator200.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator200)
OrientationInterpolator201 = x3d.OrientationInterpolator()
OrientationInterpolator201.DEF = "Stop_l_subtalar_RotationInterpolator"
OrientationInterpolator201.key = [0,0.5,1]
OrientationInterpolator201.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator201)
OrientationInterpolator202 = x3d.OrientationInterpolator()
OrientationInterpolator202.DEF = "Stop_l_midtarsal_RotationInterpolator"
OrientationInterpolator202.key = [0,0.5,1]
OrientationInterpolator202.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator202)
OrientationInterpolator203 = x3d.OrientationInterpolator()
OrientationInterpolator203.DEF = "Stop_l_metatarsal_RotationInterpolator"
OrientationInterpolator203.key = [0,0.5,1]
OrientationInterpolator203.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator203)
OrientationInterpolator204 = x3d.OrientationInterpolator()
OrientationInterpolator204.DEF = "Stop_r_hip_RotationInterpolator"
OrientationInterpolator204.key = [0,0.5,1]
OrientationInterpolator204.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator204)
OrientationInterpolator205 = x3d.OrientationInterpolator()
OrientationInterpolator205.DEF = "Stop_r_knee_RotationInterpolator"
OrientationInterpolator205.key = [0,0.5,1]
OrientationInterpolator205.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator205)
OrientationInterpolator206 = x3d.OrientationInterpolator()
OrientationInterpolator206.DEF = "Stop_r_ankle_RotationInterpolator"
OrientationInterpolator206.key = [0,0.5,1]
OrientationInterpolator206.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator206)
OrientationInterpolator207 = x3d.OrientationInterpolator()
OrientationInterpolator207.DEF = "Stop_r_subtalar_RotationInterpolator"
OrientationInterpolator207.key = [0,0.5,1]
OrientationInterpolator207.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator207)
OrientationInterpolator208 = x3d.OrientationInterpolator()
OrientationInterpolator208.DEF = "Stop_r_midtarsal_RotationInterpolator"
OrientationInterpolator208.key = [0,0.5,1]
OrientationInterpolator208.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator208)
OrientationInterpolator209 = x3d.OrientationInterpolator()
OrientationInterpolator209.DEF = "Stop_r_metatarsal_RotationInterpolator"
OrientationInterpolator209.key = [0,0.5,1]
OrientationInterpolator209.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator209)
OrientationInterpolator210 = x3d.OrientationInterpolator()
OrientationInterpolator210.DEF = "Stop_vl5_RotationInterpolator"
OrientationInterpolator210.key = [0,0.5,1]
OrientationInterpolator210.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator210)
OrientationInterpolator211 = x3d.OrientationInterpolator()
OrientationInterpolator211.DEF = "Stop_vl4_RotationInterpolator"
OrientationInterpolator211.key = [0,0.5,1]
OrientationInterpolator211.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator211)
OrientationInterpolator212 = x3d.OrientationInterpolator()
OrientationInterpolator212.DEF = "Stop_vl3_RotationInterpolator"
OrientationInterpolator212.key = [0,0.5,1]
OrientationInterpolator212.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator212)
OrientationInterpolator213 = x3d.OrientationInterpolator()
OrientationInterpolator213.DEF = "Stop_vl2_RotationInterpolator"
OrientationInterpolator213.key = [0,0.5,1]
OrientationInterpolator213.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator213)
OrientationInterpolator214 = x3d.OrientationInterpolator()
OrientationInterpolator214.DEF = "Stop_vl1_RotationInterpolator"
OrientationInterpolator214.key = [0,0.5,1]
OrientationInterpolator214.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator214)
OrientationInterpolator215 = x3d.OrientationInterpolator()
OrientationInterpolator215.DEF = "Stop_vt12_RotationInterpolator"
OrientationInterpolator215.key = [0,0.5,1]
OrientationInterpolator215.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator215)
OrientationInterpolator216 = x3d.OrientationInterpolator()
OrientationInterpolator216.DEF = "Stop_vt11_RotationInterpolator"
OrientationInterpolator216.key = [0,0.5,1]
OrientationInterpolator216.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator216)
OrientationInterpolator217 = x3d.OrientationInterpolator()
OrientationInterpolator217.DEF = "Stop_vt10_RotationInterpolator"
OrientationInterpolator217.key = [0,0.5,1]
OrientationInterpolator217.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator217)
OrientationInterpolator218 = x3d.OrientationInterpolator()
OrientationInterpolator218.DEF = "Stop_vt9_RotationInterpolator"
OrientationInterpolator218.key = [0,0.5,1]
OrientationInterpolator218.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator218)
OrientationInterpolator219 = x3d.OrientationInterpolator()
OrientationInterpolator219.DEF = "Stop_vt8_RotationInterpolator"
OrientationInterpolator219.key = [0,0.5,1]
OrientationInterpolator219.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator219)
OrientationInterpolator220 = x3d.OrientationInterpolator()
OrientationInterpolator220.DEF = "Stop_vt7_RotationInterpolator"
OrientationInterpolator220.key = [0,0.5,1]
OrientationInterpolator220.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator220)
OrientationInterpolator221 = x3d.OrientationInterpolator()
OrientationInterpolator221.DEF = "Stop_vt6_RotationInterpolator"
OrientationInterpolator221.key = [0,0.5,1]
OrientationInterpolator221.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator221)
OrientationInterpolator222 = x3d.OrientationInterpolator()
OrientationInterpolator222.DEF = "Stop_vt5_RotationInterpolator"
OrientationInterpolator222.key = [0,0.5,1]
OrientationInterpolator222.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator222)
OrientationInterpolator223 = x3d.OrientationInterpolator()
OrientationInterpolator223.DEF = "Stop_vt4_RotationInterpolator"
OrientationInterpolator223.key = [0,0.5,1]
OrientationInterpolator223.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator223)
OrientationInterpolator224 = x3d.OrientationInterpolator()
OrientationInterpolator224.DEF = "Stop_vt3_RotationInterpolator"
OrientationInterpolator224.key = [0,0.5,1]
OrientationInterpolator224.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator224)
OrientationInterpolator225 = x3d.OrientationInterpolator()
OrientationInterpolator225.DEF = "Stop_vt2_RotationInterpolator"
OrientationInterpolator225.key = [0,0.5,1]
OrientationInterpolator225.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator225)
OrientationInterpolator226 = x3d.OrientationInterpolator()
OrientationInterpolator226.DEF = "Stop_vt1_RotationInterpolator"
OrientationInterpolator226.key = [0,0.5,1]
OrientationInterpolator226.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator226)
OrientationInterpolator227 = x3d.OrientationInterpolator()
OrientationInterpolator227.DEF = "Stop_vc7_RotationInterpolator"
OrientationInterpolator227.key = [0,0.5,1]
OrientationInterpolator227.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator227)
OrientationInterpolator228 = x3d.OrientationInterpolator()
OrientationInterpolator228.DEF = "Stop_vc6_RotationInterpolator"
OrientationInterpolator228.key = [0,0.5,1]
OrientationInterpolator228.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator228)
OrientationInterpolator229 = x3d.OrientationInterpolator()
OrientationInterpolator229.DEF = "Stop_vc5_RotationInterpolator"
OrientationInterpolator229.key = [0,0.5,1]
OrientationInterpolator229.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator229)
OrientationInterpolator230 = x3d.OrientationInterpolator()
OrientationInterpolator230.DEF = "Stop_vc4_RotationInterpolator"
OrientationInterpolator230.key = [0,0.5,1]
OrientationInterpolator230.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator230)
OrientationInterpolator231 = x3d.OrientationInterpolator()
OrientationInterpolator231.DEF = "Stop_vc3_RotationInterpolator"
OrientationInterpolator231.key = [0,0.5,1]
OrientationInterpolator231.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator231)
OrientationInterpolator232 = x3d.OrientationInterpolator()
OrientationInterpolator232.DEF = "Stop_vc2_RotationInterpolator"
OrientationInterpolator232.key = [0,0.5,1]
OrientationInterpolator232.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator232)
OrientationInterpolator233 = x3d.OrientationInterpolator()
OrientationInterpolator233.DEF = "Stop_vc1_RotationInterpolator"
OrientationInterpolator233.key = [0,0.5,1]
OrientationInterpolator233.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator233)
OrientationInterpolator234 = x3d.OrientationInterpolator()
OrientationInterpolator234.DEF = "Stop_skullbase_RotationInterpolator"
OrientationInterpolator234.key = [0,0.5,1]
OrientationInterpolator234.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator234)
OrientationInterpolator235 = x3d.OrientationInterpolator()
OrientationInterpolator235.DEF = "Stop_l_eyeball_joint_RotationInterpolator"
OrientationInterpolator235.key = [0,0.5,1]
OrientationInterpolator235.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator235)
OrientationInterpolator236 = x3d.OrientationInterpolator()
OrientationInterpolator236.DEF = "Stop_r_eyeball_joint_RotationInterpolator"
OrientationInterpolator236.key = [0,0.5,1]
OrientationInterpolator236.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator236)
OrientationInterpolator237 = x3d.OrientationInterpolator()
OrientationInterpolator237.DEF = "Stop_l_sternoclavicular_RotationInterpolator"
OrientationInterpolator237.key = [0,0.5,1]
OrientationInterpolator237.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator237)
OrientationInterpolator238 = x3d.OrientationInterpolator()
OrientationInterpolator238.DEF = "Stop_l_acromioclavicular_RotationInterpolator"
OrientationInterpolator238.key = [0,0.5,1]
OrientationInterpolator238.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator238)
OrientationInterpolator239 = x3d.OrientationInterpolator()
OrientationInterpolator239.DEF = "Stop_l_shoulder_RotationInterpolator"
OrientationInterpolator239.key = [0,0.5,1]
OrientationInterpolator239.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator239)
OrientationInterpolator240 = x3d.OrientationInterpolator()
OrientationInterpolator240.DEF = "Stop_l_elbow_RotationInterpolator"
OrientationInterpolator240.key = [0,0.5,1]
OrientationInterpolator240.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator240)
OrientationInterpolator241 = x3d.OrientationInterpolator()
OrientationInterpolator241.DEF = "Stop_l_wrist_RotationInterpolator"
OrientationInterpolator241.key = [0,0.5,1]
OrientationInterpolator241.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator241)
OrientationInterpolator242 = x3d.OrientationInterpolator()
OrientationInterpolator242.DEF = "Stop_l_thumb1_RotationInterpolator"
OrientationInterpolator242.key = [0,0.5,1]
OrientationInterpolator242.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator242)
OrientationInterpolator243 = x3d.OrientationInterpolator()
OrientationInterpolator243.DEF = "Stop_l_thumb2_RotationInterpolator"
OrientationInterpolator243.key = [0,0.5,1]
OrientationInterpolator243.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator243)
OrientationInterpolator244 = x3d.OrientationInterpolator()
OrientationInterpolator244.DEF = "Stop_l_thumb3_RotationInterpolator"
OrientationInterpolator244.key = [0,0.5,1]
OrientationInterpolator244.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator244)
OrientationInterpolator245 = x3d.OrientationInterpolator()
OrientationInterpolator245.DEF = "Stop_l_index0_RotationInterpolator"
OrientationInterpolator245.key = [0,0.5,1]
OrientationInterpolator245.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator245)
OrientationInterpolator246 = x3d.OrientationInterpolator()
OrientationInterpolator246.DEF = "Stop_l_index1_RotationInterpolator"
OrientationInterpolator246.key = [0,0.5,1]
OrientationInterpolator246.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator246)
OrientationInterpolator247 = x3d.OrientationInterpolator()
OrientationInterpolator247.DEF = "Stop_l_index2_RotationInterpolator"
OrientationInterpolator247.key = [0,0.5,1]
OrientationInterpolator247.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator247)
OrientationInterpolator248 = x3d.OrientationInterpolator()
OrientationInterpolator248.DEF = "Stop_l_index3_RotationInterpolator"
OrientationInterpolator248.key = [0,0.5,1]
OrientationInterpolator248.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator248)
OrientationInterpolator249 = x3d.OrientationInterpolator()
OrientationInterpolator249.DEF = "Stop_l_middle0_RotationInterpolator"
OrientationInterpolator249.key = [0,0.5,1]
OrientationInterpolator249.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator249)
OrientationInterpolator250 = x3d.OrientationInterpolator()
OrientationInterpolator250.DEF = "Stop_l_middle1_RotationInterpolator"
OrientationInterpolator250.key = [0,0.5,1]
OrientationInterpolator250.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator250)
OrientationInterpolator251 = x3d.OrientationInterpolator()
OrientationInterpolator251.DEF = "Stop_l_middle2_RotationInterpolator"
OrientationInterpolator251.key = [0,0.5,1]
OrientationInterpolator251.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator251)
OrientationInterpolator252 = x3d.OrientationInterpolator()
OrientationInterpolator252.DEF = "Stop_l_middle3_RotationInterpolator"
OrientationInterpolator252.key = [0,0.5,1]
OrientationInterpolator252.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator252)
OrientationInterpolator253 = x3d.OrientationInterpolator()
OrientationInterpolator253.DEF = "Stop_l_ring0_RotationInterpolator"
OrientationInterpolator253.key = [0,0.5,1]
OrientationInterpolator253.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator253)
OrientationInterpolator254 = x3d.OrientationInterpolator()
OrientationInterpolator254.DEF = "Stop_l_ring1_RotationInterpolator"
OrientationInterpolator254.key = [0,0.5,1]
OrientationInterpolator254.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator254)
OrientationInterpolator255 = x3d.OrientationInterpolator()
OrientationInterpolator255.DEF = "Stop_l_ring2_RotationInterpolator"
OrientationInterpolator255.key = [0,0.5,1]
OrientationInterpolator255.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator255)
OrientationInterpolator256 = x3d.OrientationInterpolator()
OrientationInterpolator256.DEF = "Stop_l_ring3_RotationInterpolator"
OrientationInterpolator256.key = [0,0.5,1]
OrientationInterpolator256.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator256)
OrientationInterpolator257 = x3d.OrientationInterpolator()
OrientationInterpolator257.DEF = "Stop_l_pinky0_RotationInterpolator"
OrientationInterpolator257.key = [0,0.5,1]
OrientationInterpolator257.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator257)
OrientationInterpolator258 = x3d.OrientationInterpolator()
OrientationInterpolator258.DEF = "Stop_l_pinky1_RotationInterpolator"
OrientationInterpolator258.key = [0,0.5,1]
OrientationInterpolator258.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator258)
OrientationInterpolator259 = x3d.OrientationInterpolator()
OrientationInterpolator259.DEF = "Stop_l_pinky2_RotationInterpolator"
OrientationInterpolator259.key = [0,0.5,1]
OrientationInterpolator259.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator259)
OrientationInterpolator260 = x3d.OrientationInterpolator()
OrientationInterpolator260.DEF = "Stop_l_pinky3_RotationInterpolator"
OrientationInterpolator260.key = [0,0.5,1]
OrientationInterpolator260.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator260)
OrientationInterpolator261 = x3d.OrientationInterpolator()
OrientationInterpolator261.DEF = "Stop_r_sternoclavicular_RotationInterpolator"
OrientationInterpolator261.key = [0,0.5,1]
OrientationInterpolator261.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator261)
OrientationInterpolator262 = x3d.OrientationInterpolator()
OrientationInterpolator262.DEF = "Stop_r_acromioclavicular_RotationInterpolator"
OrientationInterpolator262.key = [0,0.5,1]
OrientationInterpolator262.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator262)
OrientationInterpolator263 = x3d.OrientationInterpolator()
OrientationInterpolator263.DEF = "Stop_r_shoulder_RotationInterpolator"
OrientationInterpolator263.key = [0,0.5,1]
OrientationInterpolator263.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator263)
OrientationInterpolator264 = x3d.OrientationInterpolator()
OrientationInterpolator264.DEF = "Stop_r_elbow_RotationInterpolator"
OrientationInterpolator264.key = [0,0.5,1]
OrientationInterpolator264.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator264)
OrientationInterpolator265 = x3d.OrientationInterpolator()
OrientationInterpolator265.DEF = "Stop_r_wrist_RotationInterpolator"
OrientationInterpolator265.key = [0,0.5,1]
OrientationInterpolator265.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator265)
OrientationInterpolator266 = x3d.OrientationInterpolator()
OrientationInterpolator266.DEF = "Stop_r_thumb1_RotationInterpolator"
OrientationInterpolator266.key = [0,0.5,1]
OrientationInterpolator266.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator266)
OrientationInterpolator267 = x3d.OrientationInterpolator()
OrientationInterpolator267.DEF = "Stop_r_thumb2_RotationInterpolator"
OrientationInterpolator267.key = [0,0.5,1]
OrientationInterpolator267.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator267)
OrientationInterpolator268 = x3d.OrientationInterpolator()
OrientationInterpolator268.DEF = "Stop_r_thumb3_RotationInterpolator"
OrientationInterpolator268.key = [0,0.5,1]
OrientationInterpolator268.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator268)
OrientationInterpolator269 = x3d.OrientationInterpolator()
OrientationInterpolator269.DEF = "Stop_r_index0_RotationInterpolator"
OrientationInterpolator269.key = [0,0.5,1]
OrientationInterpolator269.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator269)
OrientationInterpolator270 = x3d.OrientationInterpolator()
OrientationInterpolator270.DEF = "Stop_r_index1_RotationInterpolator"
OrientationInterpolator270.key = [0,0.5,1]
OrientationInterpolator270.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator270)
OrientationInterpolator271 = x3d.OrientationInterpolator()
OrientationInterpolator271.DEF = "Stop_r_index2_RotationInterpolator"
OrientationInterpolator271.key = [0,0.5,1]
OrientationInterpolator271.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator271)
OrientationInterpolator272 = x3d.OrientationInterpolator()
OrientationInterpolator272.DEF = "Stop_r_index3_RotationInterpolator"
OrientationInterpolator272.key = [0,0.5,1]
OrientationInterpolator272.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator272)
OrientationInterpolator273 = x3d.OrientationInterpolator()
OrientationInterpolator273.DEF = "Stop_r_middle0_RotationInterpolator"
OrientationInterpolator273.key = [0,0.5,1]
OrientationInterpolator273.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator273)
OrientationInterpolator274 = x3d.OrientationInterpolator()
OrientationInterpolator274.DEF = "Stop_r_middle1_RotationInterpolator"
OrientationInterpolator274.key = [0,0.5,1]
OrientationInterpolator274.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator274)
OrientationInterpolator275 = x3d.OrientationInterpolator()
OrientationInterpolator275.DEF = "Stop_r_middle2_RotationInterpolator"
OrientationInterpolator275.key = [0,0.5,1]
OrientationInterpolator275.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator275)
OrientationInterpolator276 = x3d.OrientationInterpolator()
OrientationInterpolator276.DEF = "Stop_r_middle3_RotationInterpolator"
OrientationInterpolator276.key = [0,0.5,1]
OrientationInterpolator276.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator276)
OrientationInterpolator277 = x3d.OrientationInterpolator()
OrientationInterpolator277.DEF = "Stop_r_ring0_RotationInterpolator"
OrientationInterpolator277.key = [0,0.5,1]
OrientationInterpolator277.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator277)
OrientationInterpolator278 = x3d.OrientationInterpolator()
OrientationInterpolator278.DEF = "Stop_r_ring1_RotationInterpolator"
OrientationInterpolator278.key = [0,0.5,1]
OrientationInterpolator278.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator278)
OrientationInterpolator279 = x3d.OrientationInterpolator()
OrientationInterpolator279.DEF = "Stop_r_ring2_RotationInterpolator"
OrientationInterpolator279.key = [0,0.5,1]
OrientationInterpolator279.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator279)
OrientationInterpolator280 = x3d.OrientationInterpolator()
OrientationInterpolator280.DEF = "Stop_r_ring3_RotationInterpolator"
OrientationInterpolator280.key = [0,0.5,1]
OrientationInterpolator280.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator280)
OrientationInterpolator281 = x3d.OrientationInterpolator()
OrientationInterpolator281.DEF = "Stop_r_pinky0_RotationInterpolator"
OrientationInterpolator281.key = [0,0.5,1]
OrientationInterpolator281.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator281)
OrientationInterpolator282 = x3d.OrientationInterpolator()
OrientationInterpolator282.DEF = "Stop_r_pinky1_RotationInterpolator"
OrientationInterpolator282.key = [0,0.5,1]
OrientationInterpolator282.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator282)
OrientationInterpolator283 = x3d.OrientationInterpolator()
OrientationInterpolator283.DEF = "Stop_r_pinky2_RotationInterpolator"
OrientationInterpolator283.key = [0,0.5,1]
OrientationInterpolator283.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator283)
OrientationInterpolator284 = x3d.OrientationInterpolator()
OrientationInterpolator284.DEF = "Stop_r_pinky3_RotationInterpolator"
OrientationInterpolator284.key = [0,0.5,1]
OrientationInterpolator284.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group193.children.append(OrientationInterpolator284)

Scene33.children.append(Group193)
Group285 = x3d.Group()
Group285.DEF = "StandAnimation"
TimeSensor286 = x3d.TimeSensor()
TimeSensor286.DEF = "StandTimer"
TimeSensor286.cycleInterval = 5.73
TimeSensor286.loop = True

Group285.children.append(TimeSensor286)
OrientationInterpolator287 = x3d.OrientationInterpolator()
OrientationInterpolator287.DEF = "Stand_r_metatarsal_PitchInterpolator"
OrientationInterpolator287.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator287.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.015),(1, 0, 0, 0.17),(-1, 0, 0, 0.025),(1, 0, 0, 0.01),(1, 0, 0, 0)]

Group285.children.append(OrientationInterpolator287)
OrientationInterpolator288 = x3d.OrientationInterpolator()
OrientationInterpolator288.DEF = "Stand_r_ankle_RotationInterpolator"
OrientationInterpolator288.key = [0,0.5,1]
OrientationInterpolator288.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator288)
OrientationInterpolator289 = x3d.OrientationInterpolator()
OrientationInterpolator289.DEF = "Stand_r_knee_RotationInterpolator"
OrientationInterpolator289.key = [0,0.5,1]
OrientationInterpolator289.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator289)
OrientationInterpolator290 = x3d.OrientationInterpolator()
OrientationInterpolator290.DEF = "Stand_r_hip_RotationInterpolator"
OrientationInterpolator290.key = [0,0.5,1]
OrientationInterpolator290.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator290)
OrientationInterpolator291 = x3d.OrientationInterpolator()
OrientationInterpolator291.DEF = "Stand_l_ankle_RotationInterpolator"
OrientationInterpolator291.key = [0,0.5,1]
OrientationInterpolator291.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator291)
OrientationInterpolator292 = x3d.OrientationInterpolator()
OrientationInterpolator292.DEF = "Stand_l_knee_RotationInterpolator"
OrientationInterpolator292.key = [0,0.5,1]
OrientationInterpolator292.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator292)
OrientationInterpolator293 = x3d.OrientationInterpolator()
OrientationInterpolator293.DEF = "Stand_l_hip_RotationInterpolator"
OrientationInterpolator293.key = [0,0.5,1]
OrientationInterpolator293.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator293)
OrientationInterpolator294 = x3d.OrientationInterpolator()
OrientationInterpolator294.DEF = "Stand_r_wrist_RotationInterpolator"
OrientationInterpolator294.key = [0,0.5,1]
OrientationInterpolator294.keyValue = [(0, 0, 1, 0),(0, 0, -1, 0.25),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator294)
OrientationInterpolator295 = x3d.OrientationInterpolator()
OrientationInterpolator295.DEF = "Stand_r_elbow_RotationInterpolator"
OrientationInterpolator295.key = [0,0.5,1]
OrientationInterpolator295.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator295)
OrientationInterpolator296 = x3d.OrientationInterpolator()
OrientationInterpolator296.DEF = "Stand_r_shoulder_RotationInterpolator"
OrientationInterpolator296.key = [0,0.5,1]
OrientationInterpolator296.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator296)
OrientationInterpolator297 = x3d.OrientationInterpolator()
OrientationInterpolator297.DEF = "Stand_l_wrist_RotationInterpolator"
OrientationInterpolator297.key = [0,0.5,1]
OrientationInterpolator297.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator297)
OrientationInterpolator298 = x3d.OrientationInterpolator()
OrientationInterpolator298.DEF = "Stand_l_elbow_RotationInterpolator"
OrientationInterpolator298.key = [0,0.5,1]
OrientationInterpolator298.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator298)
OrientationInterpolator299 = x3d.OrientationInterpolator()
OrientationInterpolator299.DEF = "Stand_l_shoulder_RotationInterpolator"
OrientationInterpolator299.key = [0,0.5,1]
OrientationInterpolator299.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator299)
OrientationInterpolator300 = x3d.OrientationInterpolator()
OrientationInterpolator300.DEF = "Stand_head_RotationInterpolator"
OrientationInterpolator300.key = [0,0.5,1]
OrientationInterpolator300.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator300)
OrientationInterpolator301 = x3d.OrientationInterpolator()
OrientationInterpolator301.DEF = "Stand_neck_RotationInterpolator"
OrientationInterpolator301.key = [0,0.5,1]
OrientationInterpolator301.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator301)
OrientationInterpolator302 = x3d.OrientationInterpolator()
OrientationInterpolator302.DEF = "Stand_l_eyeball_RotationInterpolator"
OrientationInterpolator302.key = [0,0.4,0.7,1]
OrientationInterpolator302.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(1, 0, 0, 0.45),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator302)
OrientationInterpolator303 = x3d.OrientationInterpolator()
OrientationInterpolator303.DEF = "Stand_r_eyeball_RotationInterpolator"
OrientationInterpolator303.key = [0,0.4,0.7,1]
OrientationInterpolator303.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(1, 0, 0, 0.45),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator303)
OrientationInterpolator304 = x3d.OrientationInterpolator()
OrientationInterpolator304.DEF = "Stand_lower_body_RotationInterpolator"
OrientationInterpolator304.key = [0,0.5,1]
OrientationInterpolator304.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator304)
OrientationInterpolator305 = x3d.OrientationInterpolator()
OrientationInterpolator305.DEF = "Stand_upper_body_RotationInterpolator"
OrientationInterpolator305.key = [0,0.5,1]
OrientationInterpolator305.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator305)
OrientationInterpolator306 = x3d.OrientationInterpolator()
OrientationInterpolator306.DEF = "Stand_whole_body_RotationInterpolator"
OrientationInterpolator306.key = [0,0.5,1]
OrientationInterpolator306.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator306)
PositionInterpolator307 = x3d.PositionInterpolator()
PositionInterpolator307.DEF = "Stand_whole_body_TranslationInterpolator"
PositionInterpolator307.key = [0,0.5,1]
PositionInterpolator307.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group285.children.append(PositionInterpolator307)
OrientationInterpolator308 = x3d.OrientationInterpolator()
OrientationInterpolator308.DEF = "Stand_l_sternoclavicular_RollInterpolator"
OrientationInterpolator308.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator308.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator308)
OrientationInterpolator309 = x3d.OrientationInterpolator()
OrientationInterpolator309.DEF = "Stand_l_acromioclavicular_RollInterpolator"
OrientationInterpolator309.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator309.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator309)
OrientationInterpolator310 = x3d.OrientationInterpolator()
OrientationInterpolator310.DEF = "Stand_r_sternoclavicular_RollInterpolator"
OrientationInterpolator310.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator310.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator310)
OrientationInterpolator311 = x3d.OrientationInterpolator()
OrientationInterpolator311.DEF = "Stand_r_acromioclavicular_RollInterpolator"
OrientationInterpolator311.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator311.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator311)
OrientationInterpolator312 = x3d.OrientationInterpolator()
OrientationInterpolator312.DEF = "Stand_sacroiliac_YawInterpolator"
OrientationInterpolator312.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator312.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator312)
OrientationInterpolator313 = x3d.OrientationInterpolator()
OrientationInterpolator313.DEF = "Stand_vl5_YawInterpolator"
OrientationInterpolator313.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator313.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator313)
OrientationInterpolator314 = x3d.OrientationInterpolator()
OrientationInterpolator314.DEF = "Stand_vc6_YawInterpolator"
OrientationInterpolator314.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator314.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0),(0, -1, 0, 0),(0, 1, 0, 0)]

Group285.children.append(OrientationInterpolator314)
OrientationInterpolator315 = x3d.OrientationInterpolator()
OrientationInterpolator315.DEF = "Stand_l_thumb1_PitchInterpolator"
OrientationInterpolator315.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator315.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator315)
OrientationInterpolator316 = x3d.OrientationInterpolator()
OrientationInterpolator316.DEF = "Stand_r_thumb1_PitchInterpolator"
OrientationInterpolator316.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator316.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 0.1),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group285.children.append(OrientationInterpolator316)
OrientationInterpolator317 = x3d.OrientationInterpolator()
OrientationInterpolator317.DEF = "Stand_r_index1_RollInterpolator"
OrientationInterpolator317.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator317.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.1),(0, 0, 1, 0.2),(0, 0, 1, 0.3),(0, 0, 1, 0),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator317)
OrientationInterpolator318 = x3d.OrientationInterpolator()
OrientationInterpolator318.DEF = "Stand_r_index2_RollInterpolator"
OrientationInterpolator318.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator318.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.4),(0, 0, 1, 0.32),(0, 0, 1, 0.25),(0, 0, 1, 0.2),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator318)
OrientationInterpolator319 = x3d.OrientationInterpolator()
OrientationInterpolator319.DEF = "Stand_r_index3_RollInterpolator"
OrientationInterpolator319.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator319.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.3),(0, 0, 1, 0.35),(0, 0, 1, 0.2),(0, 0, 1, 0)]

Group285.children.append(OrientationInterpolator319)

Scene33.children.append(Group285)
Group320 = x3d.Group()
Group320.DEF = "PitchesAnimation"
TimeSensor321 = x3d.TimeSensor()
TimeSensor321.DEF = "PitchTimer"
TimeSensor321.cycleInterval = 5.73
TimeSensor321.loop = True

Group320.children.append(TimeSensor321)
OrientationInterpolator322 = x3d.OrientationInterpolator()
OrientationInterpolator322.DEF = "Pitch_r_metatarsal_PitchInterpolator"
OrientationInterpolator322.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator322.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.5),(-1, 0, 0, 0.7),(1, 0, 0, 0.75),(-1, 0, 0, 0.2),(1, 0, 0, 0)]

Group320.children.append(OrientationInterpolator322)
OrientationInterpolator323 = x3d.OrientationInterpolator()
OrientationInterpolator323.DEF = "Pitches_r_ankle_RotationInterpolator"
OrientationInterpolator323.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator323.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator323)
OrientationInterpolator324 = x3d.OrientationInterpolator()
OrientationInterpolator324.DEF = "Pitches_r_knee_RotationInterpolator"
OrientationInterpolator324.key = [0,0.5,1]
OrientationInterpolator324.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator324)
OrientationInterpolator325 = x3d.OrientationInterpolator()
OrientationInterpolator325.DEF = "Pitches_r_hip_RotationInterpolator"
OrientationInterpolator325.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator325.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator325)
OrientationInterpolator326 = x3d.OrientationInterpolator()
OrientationInterpolator326.DEF = "Pitches_l_ankle_RotationInterpolator"
OrientationInterpolator326.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator326.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator326)
OrientationInterpolator327 = x3d.OrientationInterpolator()
OrientationInterpolator327.DEF = "Pitches_l_knee_RotationInterpolator"
OrientationInterpolator327.key = [0,0.5,1]
OrientationInterpolator327.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator327)
OrientationInterpolator328 = x3d.OrientationInterpolator()
OrientationInterpolator328.DEF = "Pitches_l_hip_RotationInterpolator"
OrientationInterpolator328.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator328.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator328)
OrientationInterpolator329 = x3d.OrientationInterpolator()
OrientationInterpolator329.DEF = "Pitches_r_wrist_RotationInterpolator"
OrientationInterpolator329.key = [0,0.5,1]
OrientationInterpolator329.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator329)
OrientationInterpolator330 = x3d.OrientationInterpolator()
OrientationInterpolator330.DEF = "Pitches_r_elbow_RotationInterpolator"
OrientationInterpolator330.key = [0,0.5,1]
OrientationInterpolator330.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator330)
OrientationInterpolator331 = x3d.OrientationInterpolator()
OrientationInterpolator331.DEF = "Pitches_r_shoulder_RotationInterpolator"
OrientationInterpolator331.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator331.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator331)
OrientationInterpolator332 = x3d.OrientationInterpolator()
OrientationInterpolator332.DEF = "Pitches_l_wrist_RotationInterpolator"
OrientationInterpolator332.key = [0,0.5,1]
OrientationInterpolator332.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator332)
OrientationInterpolator333 = x3d.OrientationInterpolator()
OrientationInterpolator333.DEF = "Pitches_l_elbow_RotationInterpolator"
OrientationInterpolator333.key = [0,0.5,1]
OrientationInterpolator333.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator333)
OrientationInterpolator334 = x3d.OrientationInterpolator()
OrientationInterpolator334.DEF = "Pitches_l_shoulder_RotationInterpolator"
OrientationInterpolator334.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator334.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator334)
OrientationInterpolator335 = x3d.OrientationInterpolator()
OrientationInterpolator335.DEF = "Pitches_head_RotationInterpolator"
OrientationInterpolator335.key = [0,0.5,1]
OrientationInterpolator335.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator335)
OrientationInterpolator336 = x3d.OrientationInterpolator()
OrientationInterpolator336.DEF = "Pitches_neck_RotationInterpolator"
OrientationInterpolator336.key = [0,0.25,0.55,1]
OrientationInterpolator336.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.55),(-1, 0, 0, 1.05),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator336)
OrientationInterpolator337 = x3d.OrientationInterpolator()
OrientationInterpolator337.DEF = "Pitches_lower_body_RotationInterpolator"
OrientationInterpolator337.key = [0,0.5,1]
OrientationInterpolator337.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator337)
OrientationInterpolator338 = x3d.OrientationInterpolator()
OrientationInterpolator338.DEF = "Pitches_upper_body_RotationInterpolator"
OrientationInterpolator338.key = [0,0.5,1]
OrientationInterpolator338.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator338)
OrientationInterpolator339 = x3d.OrientationInterpolator()
OrientationInterpolator339.DEF = "Pitches_whole_body_RotationInterpolator"
OrientationInterpolator339.key = [0,0.5,1]
OrientationInterpolator339.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator339)
PositionInterpolator340 = x3d.PositionInterpolator()
PositionInterpolator340.DEF = "Pitches_whole_body_TranslationInterpolator"
PositionInterpolator340.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]
PositionInterpolator340.keyValue = [(0, 0, 0),(0, -0.15, 0),(0, -0.7, 0),(0, -0.15, 0),(0, 0, 0),(0, -0.15, 0),(0, -0.7, 0),(0, -0.15, 0),(0, 0, 0)]

Group320.children.append(PositionInterpolator340)
OrientationInterpolator341 = x3d.OrientationInterpolator()
OrientationInterpolator341.DEF = "Pitch_l_sternoclavicular_RollInterpolator"
OrientationInterpolator341.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator341.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator341)
OrientationInterpolator342 = x3d.OrientationInterpolator()
OrientationInterpolator342.DEF = "Pitch_l_acromioclavicular_RollInterpolator"
OrientationInterpolator342.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator342.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator342)
OrientationInterpolator343 = x3d.OrientationInterpolator()
OrientationInterpolator343.DEF = "Pitch_r_sternoclavicular_RollInterpolator"
OrientationInterpolator343.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator343.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator343)
OrientationInterpolator344 = x3d.OrientationInterpolator()
OrientationInterpolator344.DEF = "Pitch_r_acromioclavicular_RollInterpolator"
OrientationInterpolator344.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator344.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator344)
OrientationInterpolator345 = x3d.OrientationInterpolator()
OrientationInterpolator345.DEF = "Pitch_sacroiliac_YawInterpolator"
OrientationInterpolator345.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator345.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator345)
OrientationInterpolator346 = x3d.OrientationInterpolator()
OrientationInterpolator346.DEF = "Pitch_vl5_YawInterpolator"
OrientationInterpolator346.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator346.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator346)
OrientationInterpolator347 = x3d.OrientationInterpolator()
OrientationInterpolator347.DEF = "Pitch_vc6_YawInterpolator"
OrientationInterpolator347.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator347.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group320.children.append(OrientationInterpolator347)
OrientationInterpolator348 = x3d.OrientationInterpolator()
OrientationInterpolator348.DEF = "Pitch_l_thumb1_PitchInterpolator"
OrientationInterpolator348.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator348.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.3),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group320.children.append(OrientationInterpolator348)
OrientationInterpolator349 = x3d.OrientationInterpolator()
OrientationInterpolator349.DEF = "Pitch_r_thumb1_PitchInterpolator"
OrientationInterpolator349.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator349.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.3),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group320.children.append(OrientationInterpolator349)

Scene33.children.append(Group320)
Group350 = x3d.Group()
Group350.DEF = "YawsAnimation"
TimeSensor351 = x3d.TimeSensor()
TimeSensor351.DEF = "YawTimer"
TimeSensor351.cycleInterval = 5.73
TimeSensor351.loop = True

Group350.children.append(TimeSensor351)
OrientationInterpolator352 = x3d.OrientationInterpolator()
OrientationInterpolator352.DEF = "Yaw_r_metatarsal_PitchInterpolator"
OrientationInterpolator352.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator352.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator352)
OrientationInterpolator353 = x3d.OrientationInterpolator()
OrientationInterpolator353.DEF = "Yaws_r_ankle_RotationInterpolator"
OrientationInterpolator353.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator353.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator353)
OrientationInterpolator354 = x3d.OrientationInterpolator()
OrientationInterpolator354.DEF = "Yaws_r_knee_RotationInterpolator"
OrientationInterpolator354.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator354.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator354)
OrientationInterpolator355 = x3d.OrientationInterpolator()
OrientationInterpolator355.DEF = "Yaws_r_hip_RotationInterpolator"
OrientationInterpolator355.key = [0,0.5,1]
OrientationInterpolator355.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator355)
OrientationInterpolator356 = x3d.OrientationInterpolator()
OrientationInterpolator356.DEF = "Yaws_l_ankle_RotationInterpolator"
OrientationInterpolator356.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator356.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator356)
OrientationInterpolator357 = x3d.OrientationInterpolator()
OrientationInterpolator357.DEF = "Yaws_l_knee_RotationInterpolator"
OrientationInterpolator357.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator357.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator357)
OrientationInterpolator358 = x3d.OrientationInterpolator()
OrientationInterpolator358.DEF = "Yaws_l_hip_RotationInterpolator"
OrientationInterpolator358.key = [0,0.5,1]
OrientationInterpolator358.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator358)
OrientationInterpolator359 = x3d.OrientationInterpolator()
OrientationInterpolator359.DEF = "Yaws_r_wrist_RotationInterpolator"
OrientationInterpolator359.key = [0,0.5,1]
OrientationInterpolator359.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator359)
OrientationInterpolator360 = x3d.OrientationInterpolator()
OrientationInterpolator360.DEF = "Yaws_r_elbow_RotationInterpolator"
OrientationInterpolator360.key = [0,0.5,1]
OrientationInterpolator360.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator360)
OrientationInterpolator361 = x3d.OrientationInterpolator()
OrientationInterpolator361.DEF = "Yaws_r_shoulder_RotationInterpolator"
OrientationInterpolator361.key = [0,0.5,1]
OrientationInterpolator361.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator361)
OrientationInterpolator362 = x3d.OrientationInterpolator()
OrientationInterpolator362.DEF = "Yaws_l_wrist_RotationInterpolator"
OrientationInterpolator362.key = [0,0.5,1]
OrientationInterpolator362.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator362)
OrientationInterpolator363 = x3d.OrientationInterpolator()
OrientationInterpolator363.DEF = "Yaws_l_elbow_RotationInterpolator"
OrientationInterpolator363.key = [0,0.5,1]
OrientationInterpolator363.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator363)
OrientationInterpolator364 = x3d.OrientationInterpolator()
OrientationInterpolator364.DEF = "Yaws_l_shoulder_RotationInterpolator"
OrientationInterpolator364.key = [0,0.5,1]
OrientationInterpolator364.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator364)
OrientationInterpolator365 = x3d.OrientationInterpolator()
OrientationInterpolator365.DEF = "Yaws_head_RotationInterpolator"
OrientationInterpolator365.key = [0,0.5,1]
OrientationInterpolator365.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator365)
OrientationInterpolator366 = x3d.OrientationInterpolator()
OrientationInterpolator366.DEF = "Yaws_neck_RotationInterpolator"
OrientationInterpolator366.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator366.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator366)
OrientationInterpolator367 = x3d.OrientationInterpolator()
OrientationInterpolator367.DEF = "Yaws_upper_body_RotationInterpolator"
OrientationInterpolator367.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator367.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator367)
OrientationInterpolator368 = x3d.OrientationInterpolator()
OrientationInterpolator368.DEF = "Yaws_lower_body_RotationInterpolator"
OrientationInterpolator368.key = [0,0.5,1]
OrientationInterpolator368.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator368)
OrientationInterpolator369 = x3d.OrientationInterpolator()
OrientationInterpolator369.DEF = "Yaws_whole_body_RotationInterpolator"
OrientationInterpolator369.key = [0,0.5,1]
OrientationInterpolator369.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator369)
PositionInterpolator370 = x3d.PositionInterpolator()
PositionInterpolator370.DEF = "Yaws_whole_body_TranslationInterpolator"
PositionInterpolator370.key = [0,0.5,1]
PositionInterpolator370.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group350.children.append(PositionInterpolator370)
OrientationInterpolator371 = x3d.OrientationInterpolator()
OrientationInterpolator371.DEF = "Yaw_l_sternoclavicular_RollInterpolator"
OrientationInterpolator371.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator371.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator371)
OrientationInterpolator372 = x3d.OrientationInterpolator()
OrientationInterpolator372.DEF = "Yaw_l_acromioclavicular_RollInterpolator"
OrientationInterpolator372.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator372.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator372)
OrientationInterpolator373 = x3d.OrientationInterpolator()
OrientationInterpolator373.DEF = "Yaw_r_sternoclavicular_RollInterpolator"
OrientationInterpolator373.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator373.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator373)
OrientationInterpolator374 = x3d.OrientationInterpolator()
OrientationInterpolator374.DEF = "Yaw_r_acromioclavicular_RollInterpolator"
OrientationInterpolator374.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator374.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator374)
OrientationInterpolator375 = x3d.OrientationInterpolator()
OrientationInterpolator375.DEF = "Yaw_sacroiliac_YawInterpolator"
OrientationInterpolator375.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator375.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, 0, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group350.children.append(OrientationInterpolator375)
OrientationInterpolator376 = x3d.OrientationInterpolator()
OrientationInterpolator376.DEF = "Yaw_vl5_YawInterpolator"
OrientationInterpolator376.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator376.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator376)
OrientationInterpolator377 = x3d.OrientationInterpolator()
OrientationInterpolator377.DEF = "Yaw_vc6_YawInterpolator"
OrientationInterpolator377.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator377.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator377)
OrientationInterpolator378 = x3d.OrientationInterpolator()
OrientationInterpolator378.DEF = "Yaw_l_thumb1_PitchInterpolator"
OrientationInterpolator378.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator378.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator378)
OrientationInterpolator379 = x3d.OrientationInterpolator()
OrientationInterpolator379.DEF = "Yaw_r_thumb1_PitchInterpolator"
OrientationInterpolator379.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator379.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group350.children.append(OrientationInterpolator379)

Scene33.children.append(Group350)
Group380 = x3d.Group()
Group380.DEF = "RollsAnimation"
TimeSensor381 = x3d.TimeSensor()
TimeSensor381.DEF = "RollTimer"
TimeSensor381.cycleInterval = 5.73
TimeSensor381.loop = True

Group380.children.append(TimeSensor381)
OrientationInterpolator382 = x3d.OrientationInterpolator()
OrientationInterpolator382.DEF = "Roll_r_metatarsal_PitchInterpolator"
OrientationInterpolator382.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator382.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator382)
OrientationInterpolator383 = x3d.OrientationInterpolator()
OrientationInterpolator383.DEF = "Rolls_r_ankle_RotationInterpolator"
OrientationInterpolator383.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator383.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator383)
OrientationInterpolator384 = x3d.OrientationInterpolator()
OrientationInterpolator384.DEF = "Rolls_r_knee_RotationInterpolator"
OrientationInterpolator384.key = [0,0.5,1]
OrientationInterpolator384.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator384)
OrientationInterpolator385 = x3d.OrientationInterpolator()
OrientationInterpolator385.DEF = "Rolls_r_hip_RotationInterpolator"
OrientationInterpolator385.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator385.keyValue = [(0, 0, -1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator385)
OrientationInterpolator386 = x3d.OrientationInterpolator()
OrientationInterpolator386.DEF = "Rolls_l_ankle_RotationInterpolator"
OrientationInterpolator386.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator386.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator386)
OrientationInterpolator387 = x3d.OrientationInterpolator()
OrientationInterpolator387.DEF = "Rolls_l_knee_RotationInterpolator"
OrientationInterpolator387.key = [0,0.5,1]
OrientationInterpolator387.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator387)
OrientationInterpolator388 = x3d.OrientationInterpolator()
OrientationInterpolator388.DEF = "Rolls_l_hip_RotationInterpolator"
OrientationInterpolator388.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator388.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator388)
OrientationInterpolator389 = x3d.OrientationInterpolator()
OrientationInterpolator389.DEF = "Rolls_r_wrist_RotationInterpolator"
OrientationInterpolator389.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator389.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator389)
OrientationInterpolator390 = x3d.OrientationInterpolator()
OrientationInterpolator390.DEF = "Rolls_r_elbow_RotationInterpolator"
OrientationInterpolator390.key = [0,0.5,1]
OrientationInterpolator390.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator390)
OrientationInterpolator391 = x3d.OrientationInterpolator()
OrientationInterpolator391.DEF = "Rolls_r_shoulder_RotationInterpolator"
OrientationInterpolator391.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator391.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, -1, 3),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator391)
OrientationInterpolator392 = x3d.OrientationInterpolator()
OrientationInterpolator392.DEF = "Rolls_l_wrist_RotationInterpolator"
OrientationInterpolator392.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator392.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator392)
OrientationInterpolator393 = x3d.OrientationInterpolator()
OrientationInterpolator393.DEF = "Rolls_l_elbow_RotationInterpolator"
OrientationInterpolator393.key = [0,0.5,1]
OrientationInterpolator393.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator393)
OrientationInterpolator394 = x3d.OrientationInterpolator()
OrientationInterpolator394.DEF = "Rolls_l_shoulder_RotationInterpolator"
OrientationInterpolator394.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator394.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 3),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator394)
OrientationInterpolator395 = x3d.OrientationInterpolator()
OrientationInterpolator395.DEF = "Rolls_head_RotationInterpolator"
OrientationInterpolator395.key = [0,0.5,1]
OrientationInterpolator395.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator395)
OrientationInterpolator396 = x3d.OrientationInterpolator()
OrientationInterpolator396.DEF = "Rolls_neck_RotationInterpolator"
OrientationInterpolator396.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator396.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.25),(0, 0, 1, 0),(0, 0, -1, 1.25),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator396)
OrientationInterpolator397 = x3d.OrientationInterpolator()
OrientationInterpolator397.DEF = "Rolls_lower_body_RotationInterpolator"
OrientationInterpolator397.key = [0,0.5,1]
OrientationInterpolator397.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator397)
OrientationInterpolator398 = x3d.OrientationInterpolator()
OrientationInterpolator398.DEF = "Rolls_upper_body_RotationInterpolator"
OrientationInterpolator398.key = [0,0.5,1]
OrientationInterpolator398.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator398)
OrientationInterpolator399 = x3d.OrientationInterpolator()
OrientationInterpolator399.DEF = "Rolls_whole_body_RotationInterpolator"
OrientationInterpolator399.key = [0,0.5,1]
OrientationInterpolator399.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator399)
PositionInterpolator400 = x3d.PositionInterpolator()
PositionInterpolator400.DEF = "Rolls_whole_body_TranslationInterpolator"
PositionInterpolator400.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]
PositionInterpolator400.keyValue = [(0, 0, 0),(0, -0.25, 0),(0, -0.8, 0),(0, -0.25, 0),(0, 0, 0),(0, -0.25, 0),(0, -0.8, 0),(0, -0.25, 0),(0, 0, 0)]

Group380.children.append(PositionInterpolator400)
OrientationInterpolator401 = x3d.OrientationInterpolator()
OrientationInterpolator401.DEF = "Roll_l_sternoclavicular_RollInterpolator"
OrientationInterpolator401.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator401.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator401)
OrientationInterpolator402 = x3d.OrientationInterpolator()
OrientationInterpolator402.DEF = "Roll_l_acromioclavicular_RollInterpolator"
OrientationInterpolator402.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator402.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator402)
OrientationInterpolator403 = x3d.OrientationInterpolator()
OrientationInterpolator403.DEF = "Roll_r_sternoclavicular_RollInterpolator"
OrientationInterpolator403.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator403.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator403)
OrientationInterpolator404 = x3d.OrientationInterpolator()
OrientationInterpolator404.DEF = "Roll_r_acromioclavicular_RollInterpolator"
OrientationInterpolator404.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator404.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator404)
OrientationInterpolator405 = x3d.OrientationInterpolator()
OrientationInterpolator405.DEF = "Roll_sacroiliac_YawInterpolator"
OrientationInterpolator405.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator405.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator405)
OrientationInterpolator406 = x3d.OrientationInterpolator()
OrientationInterpolator406.DEF = "Roll_vl5_YawInterpolator"
OrientationInterpolator406.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator406.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator406)
OrientationInterpolator407 = x3d.OrientationInterpolator()
OrientationInterpolator407.DEF = "Roll_vc6_YawInterpolator"
OrientationInterpolator407.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator407.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator407)
OrientationInterpolator408 = x3d.OrientationInterpolator()
OrientationInterpolator408.DEF = "Roll_l_thumb1_PitchInterpolator"
OrientationInterpolator408.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator408.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator408)
OrientationInterpolator409 = x3d.OrientationInterpolator()
OrientationInterpolator409.DEF = "Roll_r_thumb1_PitchInterpolator"
OrientationInterpolator409.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator409.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group380.children.append(OrientationInterpolator409)

Scene33.children.append(Group380)
Group410 = x3d.Group()
Group410.DEF = "WalkAnimation"
TimeSensor411 = x3d.TimeSensor()
TimeSensor411.DEF = "WalkTimer"
TimeSensor411.cycleInterval = 1.73
TimeSensor411.loop = True

Group410.children.append(TimeSensor411)
OrientationInterpolator412 = x3d.OrientationInterpolator()
OrientationInterpolator412.DEF = "Walk_r_metatarsal_PitchInterpolator"
OrientationInterpolator412.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator412.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator412)
OrientationInterpolator413 = x3d.OrientationInterpolator()
OrientationInterpolator413.DEF = "Walk_r_ankle_RotationInterpolator"
OrientationInterpolator413.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator413.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.3533),(-1, 0, 0, 0.1072),(1, 0, 0, 0.2612),(1, 0, 0, 0.1268),(-1, 0, 0, 0.01793),(-1, 0, 0, 0.05824),(-1, 0, 0, 0.2398),(-1, 0, 0, 0.35),(-1, 0, 0, 0.3322),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator413)
OrientationInterpolator414 = x3d.OrientationInterpolator()
OrientationInterpolator414.DEF = "Walk_r_knee_RotationInterpolator"
OrientationInterpolator414.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator414.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.8926),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, 0, 0, 0.09354),(1, 0, 0, 0.08558),(1, 0, 0, 0.2475),(1, 0, 0, 0.8573)]

Group410.children.append(OrientationInterpolator414)
OrientationInterpolator415 = x3d.OrientationInterpolator()
OrientationInterpolator415.DEF = "Walk_r_hip_RotationInterpolator"
OrientationInterpolator415.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator415.keyValue = [(-0.5831, 0.03511, 0.8116, 0.1481),(-0.995, 0.02296, 0.09674, 0.4683),(-1, 0.00192, 0.007964, 0.4732),(-0.998, -0.0158, -0.06102, 0.5079),(-0.9911, -0.03541, -0.1286, 0.5419),(-0.9131, -0.06243, -0.403, 0.3361),(-0.4306, -0.07962, -0.899, 0.07038),(1, 0, 0, 0.2571),(0.9891, -0.02805, 0.1444, 0.3879),(-0.5831, 0.03511, 0.8116, 0.1481)]

Group410.children.append(OrientationInterpolator415)
OrientationInterpolator416 = x3d.OrientationInterpolator()
OrientationInterpolator416.DEF = "Walk_l_ankle_RotationInterpolator"
OrientationInterpolator416.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator416.keyValue = [(-1, 0, 0, 0.06714),(-1, 0, 0, 0.2152),(-1, 0, 0, 0.3184),(-1, 0, 0, 0.4717),(-1, 0, 0, 0.2912),(1, 0, 0, 0.1222),(-1, 0, 0, 0.06714)]

Group410.children.append(OrientationInterpolator416)
OrientationInterpolator417 = x3d.OrientationInterpolator()
OrientationInterpolator417.DEF = "Walk_l_knee_RotationInterpolator"
OrientationInterpolator417.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator417.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.08678),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.09961),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]

Group410.children.append(OrientationInterpolator417)
OrientationInterpolator418 = x3d.OrientationInterpolator()
OrientationInterpolator418.DEF = "Walk_l_hip_RotationInterpolator"
OrientationInterpolator418.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator418.keyValue = [(-0.873, 0.06094, 0.484, 0.2865),(0.9963, -0.01057, 0.08481, 0.2488),(0.9965, 0.01591, -0.08222, 0.3836),(-0.7018, -0.03223, -0.7117, 0.1289),(-1, 0, 0, 0.5518),(-0.9964, 0.02231, 0.0817, 0.5351),(-0.9809, 0.04912, 0.1881, 0.5204),(-0.873, 0.06094, 0.484, 0.2865)]

Group410.children.append(OrientationInterpolator418)
OrientationInterpolator419 = x3d.OrientationInterpolator()
OrientationInterpolator419.DEF = "Walk_lower_body_RotationInterpolator"
OrientationInterpolator419.key = [0,0.5,1]
OrientationInterpolator419.keyValue = [(0, 0, -1, 0.1056),(0, 0, 1, 0.09018),(0, 0, -1, 0.1056)]

Group410.children.append(OrientationInterpolator419)
OrientationInterpolator420 = x3d.OrientationInterpolator()
OrientationInterpolator420.DEF = "Walk_r_wrist_RotationInterpolator"
OrientationInterpolator420.key = [0,0.375,0.9167,1]
OrientationInterpolator420.keyValue = [(-0.8129, 0.4759, -0.3357, 0.1346),(0.1533, -0.9878, 0.02582, 0.3902),(-0.5701, 0.7604, -0.311, 0.366),(-0.8129, 0.4759, -0.3357, 0.1346)]

Group410.children.append(OrientationInterpolator420)
OrientationInterpolator421 = x3d.OrientationInterpolator()
OrientationInterpolator421.DEF = "Walk_r_elbow_RotationInterpolator"
OrientationInterpolator421.key = [0,0.375,0.9167,1]
OrientationInterpolator421.keyValue = [(-1, 0, 0, 0.411508),(-1, 0, 0, 0.0925011),(-1, 0, 0, 0.572568),(-1, 0, 0, 0.411508)]

Group410.children.append(OrientationInterpolator421)
OrientationInterpolator422 = x3d.OrientationInterpolator()
OrientationInterpolator422.DEF = "Walk_r_shoulder_RotationInterpolator"
OrientationInterpolator422.key = [0,0.375,0.9167,1]
OrientationInterpolator422.keyValue = [(-1, 0, 0, 0.09346),(1, 0, 0, 0.3197),(-1, 0, 0, 0.1564),(-1, 0, 0, 0.09346)]

Group410.children.append(OrientationInterpolator422)
OrientationInterpolator423 = x3d.OrientationInterpolator()
OrientationInterpolator423.DEF = "Walk_l_wrist_RotationInterpolator"
OrientationInterpolator423.key = [0,0.375,0.9167,1]
OrientationInterpolator423.keyValue = [(0, -1, 0, 0.461076),(-0.330195, -0.927451, 0.175516, 0.538852),(0.0327774, -0.999314, -0.0172185, 0.492033),(0, -1, 0, 0.461076)]

Group410.children.append(OrientationInterpolator423)
OrientationInterpolator424 = x3d.OrientationInterpolator()
OrientationInterpolator424.DEF = "Walk_l_elbow_RotationInterpolator"
OrientationInterpolator424.key = [0,0.375,0.9167,1]
OrientationInterpolator424.keyValue = [(-1, 0, 0, 0.0659878),(-1, 0, 0, 0.488383),(-1, 0, 0, 0.0177536),(-1, 0, 0, 0.0659878)]

Group410.children.append(OrientationInterpolator424)
OrientationInterpolator425 = x3d.OrientationInterpolator()
OrientationInterpolator425.DEF = "Walk_l_shoulder_RotationInterpolator"
OrientationInterpolator425.key = [0,0.375,0.9167,1]
OrientationInterpolator425.keyValue = [(1, 0, 0, 0.1189),(-1, 0, 0, 0.1861),(1, 0, 0, 0.3357),(1, 0, 0, 0.1189)]

Group410.children.append(OrientationInterpolator425)
OrientationInterpolator426 = x3d.OrientationInterpolator()
OrientationInterpolator426.DEF = "Walk_head_RotationInterpolator"
OrientationInterpolator426.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator426.keyValue = [(0, -1, 0, 0.08642),(0, 1, 0, 0.1825),(0, 1, 0, 0.1505),(0, 1, 0, 0.1053),(0, 1, 0, 0.04391),(0, -1, 0, 0.03119),(0, -1, 0, 0.07936),(0, -1, 0, 0.1616),(0, -1, 0, 0.155),(0, -1, 0, 0.08642)]

Group410.children.append(OrientationInterpolator426)
OrientationInterpolator427 = x3d.OrientationInterpolator()
OrientationInterpolator427.DEF = "Walk_neck_RotationInterpolator"
OrientationInterpolator427.key = [0,1]
OrientationInterpolator427.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator427)
OrientationInterpolator428 = x3d.OrientationInterpolator()
OrientationInterpolator428.DEF = "Walk_upper_body_RotationInterpolator"
OrientationInterpolator428.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator428.keyValue = [(0, 1, 0, 0.0826),(-0.01972, -0.5974, 0.8017, 0.08231),(0.009296, -0.9648, 0.2627, 0.1734),(-0.01238, 0.9549, -0.2968, 0.08732),(-0.008125, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]

Group410.children.append(OrientationInterpolator428)
OrientationInterpolator429 = x3d.OrientationInterpolator()
OrientationInterpolator429.DEF = "Walk_whole_body_RotationInterpolator"
OrientationInterpolator429.key = [0,1]
OrientationInterpolator429.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator429)
PositionInterpolator430 = x3d.PositionInterpolator()
PositionInterpolator430.DEF = "Walk_whole_body_TranslationInterpolator"
PositionInterpolator430.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator430.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]

Group410.children.append(PositionInterpolator430)
OrientationInterpolator431 = x3d.OrientationInterpolator()
OrientationInterpolator431.DEF = "Walk_l_sternoclavicular_RollInterpolator"
OrientationInterpolator431.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator431.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator431)
OrientationInterpolator432 = x3d.OrientationInterpolator()
OrientationInterpolator432.DEF = "Walk_l_acromioclavicular_RollInterpolator"
OrientationInterpolator432.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator432.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator432)
OrientationInterpolator433 = x3d.OrientationInterpolator()
OrientationInterpolator433.DEF = "Walk_r_sternoclavicular_RollInterpolator"
OrientationInterpolator433.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator433.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator433)
OrientationInterpolator434 = x3d.OrientationInterpolator()
OrientationInterpolator434.DEF = "Walk_r_acromioclavicular_RollInterpolator"
OrientationInterpolator434.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator434.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator434)
OrientationInterpolator435 = x3d.OrientationInterpolator()
OrientationInterpolator435.DEF = "Walk_sacroiliac_YawInterpolator"
OrientationInterpolator435.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator435.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator435)
OrientationInterpolator436 = x3d.OrientationInterpolator()
OrientationInterpolator436.DEF = "Walk_vl5_YawInterpolator"
OrientationInterpolator436.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator436.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator436)
OrientationInterpolator437 = x3d.OrientationInterpolator()
OrientationInterpolator437.DEF = "Walk_vc6_YawInterpolator"
OrientationInterpolator437.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator437.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group410.children.append(OrientationInterpolator437)
OrientationInterpolator438 = x3d.OrientationInterpolator()
OrientationInterpolator438.DEF = "Walk_l_thumb1_PitchInterpolator"
OrientationInterpolator438.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator438.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.5),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group410.children.append(OrientationInterpolator438)
OrientationInterpolator439 = x3d.OrientationInterpolator()
OrientationInterpolator439.DEF = "Walk_r_thumb1_PitchInterpolator"
OrientationInterpolator439.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator439.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.5),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group410.children.append(OrientationInterpolator439)

Scene33.children.append(Group410)
Group440 = x3d.Group()
Group440.DEF = "RunAnimation"
TimeSensor441 = x3d.TimeSensor()
TimeSensor441.DEF = "RunTimer"
TimeSensor441.cycleInterval = 0.9
TimeSensor441.loop = True

Group440.children.append(TimeSensor441)
OrientationInterpolator442 = x3d.OrientationInterpolator()
OrientationInterpolator442.DEF = "Run_r_metatarsal_PitchInterpolator"
OrientationInterpolator442.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator442.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator442)
OrientationInterpolator443 = x3d.OrientationInterpolator()
OrientationInterpolator443.DEF = "Run_l_hip_RotationInterpolator_Run"
OrientationInterpolator443.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator443.keyValue = [(-0.99, 0.033, 0.04, 1.42),(-0.99, 0.1328, 0.067, 0.42),(0.99, 0.014, 0.009, 0.9),(-0.99, 0.0703, 0.05, 0.7),(-0.99, 0.033, 0.04, 1.42)]

Group440.children.append(OrientationInterpolator443)
OrientationInterpolator444 = x3d.OrientationInterpolator()
OrientationInterpolator444.DEF = "Run_l_knee_RotationInterpolator_Run"
OrientationInterpolator444.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator444.keyValue = [(1, 0, 0, 1.01),(1, 0, 0, 0.426),(1, 0, 0, 0.705),(1, 0, 0, 2.179),(1, 0, 0, 1.01)]

Group440.children.append(OrientationInterpolator444)
OrientationInterpolator445 = x3d.OrientationInterpolator()
OrientationInterpolator445.DEF = "Run_l_ankle_RotationInterpolator_Run"
OrientationInterpolator445.key = [0,0.22,0.3,0.4,1]
OrientationInterpolator445.keyValue = [(1, 0, 0, 0.0374),(-1, 0, 0, 0.1037),(-1, 0, 0, 0.4328),(1, 0, 0, 0.1929),(1, 0, 0, 0.03574)]

Group440.children.append(OrientationInterpolator445)
OrientationInterpolator446 = x3d.OrientationInterpolator()
OrientationInterpolator446.DEF = "Run_r_hip_RotationInterpolator_Run"
OrientationInterpolator446.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator446.keyValue = [(0.99, -0.014, 0.009, 0.9),(-0.99, -0.0703, -0.05, 0.7),(-0.99, -0.033, 0.04, 1.42),(-0.99, -0.1328, -0.067, 0.42),(0.99, -0.014, 0.009, 0.9)]

Group440.children.append(OrientationInterpolator446)
OrientationInterpolator447 = x3d.OrientationInterpolator()
OrientationInterpolator447.DEF = "Run_r_knee_RotationInterpolator_Run"
OrientationInterpolator447.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator447.keyValue = [(1, 0, 0, 0.705),(1, 0, 0, 2.179),(1, 0, 0, 1.01),(1, 0, 0, 0.426),(1, 0, 0, 0.705)]

Group440.children.append(OrientationInterpolator447)
OrientationInterpolator448 = x3d.OrientationInterpolator()
OrientationInterpolator448.DEF = "Run_r_ankle_RotationInterpolator_Run"
OrientationInterpolator448.key = [0,0.4,0.71,0.8,0.82,1]
OrientationInterpolator448.keyValue = [(1, 0, 0, 0.2323),(-1, 0, 0, 0.07843),(-1, 0, 0, 0.32),(-1, 0, 0, 0.374),(-1, 0, 0, 0.3478),(1, 0, 0, 0.2323)]

Group440.children.append(OrientationInterpolator448)
OrientationInterpolator449 = x3d.OrientationInterpolator()
OrientationInterpolator449.DEF = "Run_l_shoulder_RotationInterpolator_Run"
OrientationInterpolator449.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator449.keyValue = [(0.99, -0.074, 0.25, 1.5),(0.99, -0.092, 0.44, 0.3),(-0.99, 0.136, 0.25, 0.85),(0.99, -0.081, 0.38, 0.4),(0.99, -0.074, 0.25, 1.5)]

Group440.children.append(OrientationInterpolator449)
OrientationInterpolator450 = x3d.OrientationInterpolator()
OrientationInterpolator450.DEF = "Run_l_elbow_RotationInterpolator_Run"
OrientationInterpolator450.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator450.keyValue = [(-1, 0, 0, 1.85),(-0.99, -0.19, 0.18, 1.35),(-1, 0, 0, 0.975),(-0.99, -0.09, -0.02, 1.55),(-1, 0, 0, 1.85)]

Group440.children.append(OrientationInterpolator450)
OrientationInterpolator451 = x3d.OrientationInterpolator()
OrientationInterpolator451.DEF = "Run_l_wrist_RotationInterpolator_Run"
OrientationInterpolator451.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator451.keyValue = [(-0.25, -1, 0.08, 0.14),(0.25, 1, 0.08, 0.14),(0, 0, 1, 0),(-0.25, 1, 0.08, -0.14),(-0.25, 1, 0.08, 0.14)]

Group440.children.append(OrientationInterpolator451)
OrientationInterpolator452 = x3d.OrientationInterpolator()
OrientationInterpolator452.DEF = "Run_r_shoulder_RotationInterpolator_Run"
OrientationInterpolator452.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator452.keyValue = [(-0.99, -0.136, -0.25, 0.85),(0.99, 0.081, -0.38, 0.4),(0.99, 0.074, -0.25, 1.5),(0.99, 0.081, -0.38, 0.4),(-0.99, -0.136, -0.25, 0.85)]

Group440.children.append(OrientationInterpolator452)
OrientationInterpolator453 = x3d.OrientationInterpolator()
OrientationInterpolator453.DEF = "Run_r_elbow_RotationInterpolator_Run"
OrientationInterpolator453.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator453.keyValue = [(-1, 0, 0, 0.975),(-0.99, 0.09, 0.02, 1.55),(-1, 0, 0, 1.85),(-0.99, 0.19, -0.18, 1.35),(-1, 0, 0, 0.975)]

Group440.children.append(OrientationInterpolator453)
OrientationInterpolator454 = x3d.OrientationInterpolator()
OrientationInterpolator454.DEF = "Run_r_wrist_RotationInterpolator_Run"
OrientationInterpolator454.key = [0,1]
OrientationInterpolator454.keyValue = [(-0.917742, -0.237244, -0.318536, 0.214273),(-0.917742, -0.237244, -0.318536, 0.214273)]

Group440.children.append(OrientationInterpolator454)
OrientationInterpolator455 = x3d.OrientationInterpolator()
OrientationInterpolator455.DEF = "Run_lower_body_RotationInterpolator_Run"
OrientationInterpolator455.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator455.keyValue = [(0, -1, 0, 0.125),(0, 0, 1, 0),(0, 1, 0, 0.125),(0, 0, 1, 0),(0, -1, 0, 0.125)]

Group440.children.append(OrientationInterpolator455)
OrientationInterpolator456 = x3d.OrientationInterpolator()
OrientationInterpolator456.DEF = "Run_head_RotationInterpolator_Run"
OrientationInterpolator456.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator456.keyValue = [(1, 0, 0, 0.08),(1, 0, 0, 0.12),(1, 0, 0, 0.3),(1, 0, 0, 0.3),(1, 0, 0, 0.08)]

Group440.children.append(OrientationInterpolator456)
OrientationInterpolator457 = x3d.OrientationInterpolator()
OrientationInterpolator457.DEF = "Run_neck_RotationInterpolator_Run"
OrientationInterpolator457.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator457.keyValue = [(0.7, 0, 0, 0.4),(-0.7, -0.7, 0, 0.4),(0, 0, 0, 0.4),(-0.7, 0.7, 0, 0.4),(0.7, 0, 0, 0.4)]

Group440.children.append(OrientationInterpolator457)
OrientationInterpolator458 = x3d.OrientationInterpolator()
OrientationInterpolator458.DEF = "Run_upper_body_RotationInterpolator_Run"
OrientationInterpolator458.key = [0,0.2545,0.4909,0.7636,1]
OrientationInterpolator458.keyValue = [(0.97, 0.65, 0.086, 0.5),(0.9, 0.003, -0.02, 0.38),(0.95, -0.68, -0.086, 0.5),(0.9, 0.004, -0.025, 0.4),(0.97, 0.65, 0.086, 0.5)]

Group440.children.append(OrientationInterpolator458)
OrientationInterpolator459 = x3d.OrientationInterpolator()
OrientationInterpolator459.DEF = "Run_whole_body_RotationInterpolator_Run"
OrientationInterpolator459.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator459.keyValue = [(1, 0, 0, 0.06),(1, 0, 0, 0.167),(1, 0, 0, 0.06),(1, 0, 0, 0.168),(1, 0, 0, 0.06)]

Group440.children.append(OrientationInterpolator459)
PositionInterpolator460 = x3d.PositionInterpolator()
PositionInterpolator460.DEF = "Run_whole_body_TranslationInterpolator_Run"
PositionInterpolator460.key = [0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]
PositionInterpolator460.keyValue = [(0, -0.01, 0),(0, -0.037, 0),(0, -0.049, 0),(0, -0.037, 0),(0, -0.01, 0),(0, -0.037, 0),(0, -0.049, 0),(0, -0.037, 0),(0, -0.01, 0)]

Group440.children.append(PositionInterpolator460)
OrientationInterpolator461 = x3d.OrientationInterpolator()
OrientationInterpolator461.DEF = "Run_l_sternoclavicular_RollInterpolator"
OrientationInterpolator461.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator461.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator461)
OrientationInterpolator462 = x3d.OrientationInterpolator()
OrientationInterpolator462.DEF = "Run_l_acromioclavicular_RollInterpolator"
OrientationInterpolator462.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator462.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator462)
OrientationInterpolator463 = x3d.OrientationInterpolator()
OrientationInterpolator463.DEF = "Run_r_sternoclavicular_RollInterpolator"
OrientationInterpolator463.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator463.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator463)
OrientationInterpolator464 = x3d.OrientationInterpolator()
OrientationInterpolator464.DEF = "Run_r_acromioclavicular_RollInterpolator"
OrientationInterpolator464.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator464.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator464)
OrientationInterpolator465 = x3d.OrientationInterpolator()
OrientationInterpolator465.DEF = "Run_sacroiliac_YawInterpolator"
OrientationInterpolator465.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator465.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator465)
OrientationInterpolator466 = x3d.OrientationInterpolator()
OrientationInterpolator466.DEF = "Run_vl5_YawInterpolator"
OrientationInterpolator466.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator466.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator466)
OrientationInterpolator467 = x3d.OrientationInterpolator()
OrientationInterpolator467.DEF = "Run_vc6_YawInterpolator"
OrientationInterpolator467.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator467.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group440.children.append(OrientationInterpolator467)
OrientationInterpolator468 = x3d.OrientationInterpolator()
OrientationInterpolator468.DEF = "Run_l_thumb1_PitchInterpolator"
OrientationInterpolator468.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator468.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.7),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group440.children.append(OrientationInterpolator468)
OrientationInterpolator469 = x3d.OrientationInterpolator()
OrientationInterpolator469.DEF = "Run_r_thumb1_PitchInterpolator"
OrientationInterpolator469.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator469.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.7),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group440.children.append(OrientationInterpolator469)

Scene33.children.append(Group440)
Group470 = x3d.Group()
Group470.DEF = "JumpAnimation"
TimeSensor471 = x3d.TimeSensor()
TimeSensor471.DEF = "JumpTimer"
TimeSensor471.cycleInterval = 3.73
TimeSensor471.loop = True

Group470.children.append(TimeSensor471)
OrientationInterpolator472 = x3d.OrientationInterpolator()
OrientationInterpolator472.DEF = "Jump_r_metatarsal_PitchInterpolator"
OrientationInterpolator472.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator472.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator472)
OrientationInterpolator473 = x3d.OrientationInterpolator()
OrientationInterpolator473.DEF = "Jump_r_ankle_RotationInterpolator"
OrientationInterpolator473.key = [0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator473.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.3527),(-1, 0, 0, 0.3038),(-1, 0, 0, 0.07964),(1, 0, 0, 1.3),(1, 0, 0, 0.6509),(1, 0, 0, 0.3001),(-1, 0, 0, 0.2087),(-1, 0, 0, 0.3756),(-1, 0, 0, 0.3279),(-1, 0, 0, 0.1193),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator473)
OrientationInterpolator474 = x3d.OrientationInterpolator()
OrientationInterpolator474.DEF = "Jump_r_knee_RotationInterpolator"
OrientationInterpolator474.key = [0,0.2,0.25,0.3,0.64,0.76,0.88,1]
OrientationInterpolator474.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.5),(1, 0, 0, 1.7),(0, 0, 1, 0),(1, 0, 0, 0.9507),(1, 0, 0, 0.5845),(1, 0, 0, 0.9054),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator474)
OrientationInterpolator475 = x3d.OrientationInterpolator()
OrientationInterpolator475.DEF = "Jump_r_hip_RotationInterpolator"
OrientationInterpolator475.key = [0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator475.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.63),(-1, 0, 0, 1.7),(-1, 0, 0, 1.55),(-1, 0, 0, 0.8943),(-1, 0, 0, 0.3698),(0, 0, 1, 0),(-1, 0, 0, 0.4963),(-1, 0, 0, 0.3829),(-1, 0, 0, 0.5169),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator475)
OrientationInterpolator476 = x3d.OrientationInterpolator()
OrientationInterpolator476.DEF = "Jump_l_ankle_RotationInterpolator"
OrientationInterpolator476.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator476.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.625),(-1, 0, 0, 0.625),(-1, 0, 0, 0.3364),(-1, 0, 0, 0.2742),(-1, 0, 0, 0.05078),(1, 0, 0, 0.2833),(1, 0, 0, 0.6667),(1, 0, 0, 0.2833),(-1, 0, 0, 0.2108),(-1, 0, 0, 0.375),(-1, 0, 0, 0.3146),(-1, 0, 0, 0.1174),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator476)
OrientationInterpolator477 = x3d.OrientationInterpolator()
OrientationInterpolator477.DEF = "Jump_l_knee_RotationInterpolator"
OrientationInterpolator477.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator477.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.047),(1, 0, 0, 2.047),(0, 0, 1, 0),(1, 0, 0, 1.566),(1, 0, 0, 0.5913),(1, 0, 0, 0.9235),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator477)
OrientationInterpolator478 = x3d.OrientationInterpolator()
OrientationInterpolator478.DEF = "Jump_l_hip_RotationInterpolator"
OrientationInterpolator478.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
OrientationInterpolator478.keyValue = [(0, 0, 1, 0),(1, 0, 0, 4.349),(1, 0, 0, 4.349),(1, 0, 0, 4.615),(-1, 0, 0, 0.9136),(-1, 0, 0, 0.3614),(0, 0, 1, 0),(-1, 0, 0, 0.7869),(-1, 0, 0, 0.3918),(-1, 0, 0, 0.5433),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator478)
OrientationInterpolator479 = x3d.OrientationInterpolator()
OrientationInterpolator479.DEF = "Jump_lower_body_RotationInterpolator"
OrientationInterpolator479.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator479.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.1892),(1, 0, 0, 0.1892),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator479)
OrientationInterpolator480 = x3d.OrientationInterpolator()
OrientationInterpolator480.DEF = "Jump_r_wrist_RotationInterpolator"
OrientationInterpolator480.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator480.keyValue = [(0, 0, 1, 0),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.00222418, 0.99801, -0.0630095, 1.46072),(0, 1, 0, 0.497349),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator480)
OrientationInterpolator481 = x3d.OrientationInterpolator()
OrientationInterpolator481.DEF = "Jump_r_elbow_RotationInterpolator"
OrientationInterpolator481.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator481.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.5855),(-1, 0, 0, 0.5852),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator481)
OrientationInterpolator482 = x3d.OrientationInterpolator()
OrientationInterpolator482.DEF = "Jump_r_shoulder_RotationInterpolator"
OrientationInterpolator482.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator482.keyValue = [(0, 0, 1, 0),(0.9992, 0.02042, 0.03558, 4.688),(0.9992, 0.02042, 0.03558, 4.688),(0.9989, -0.04623, 0.005159, 4.079),(-0.8687, -0.2525, -0.4261, 1.501),(-0.941, -0.2893, -0.1754, 0.4788),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator482)
OrientationInterpolator483 = x3d.OrientationInterpolator()
OrientationInterpolator483.DEF = "Jump_l_wrist_RotationInterpolator"
OrientationInterpolator483.key = [0,0.48,0.52,0.64,0.76,0.88,1]
OrientationInterpolator483.keyValue = [(0, 0, 1, 0),(0.0672928, 0.989475, -0.128107, 4.15574),(0.0672928, 0.989475, -0.128107, 4.15574),(0.00364942, 0.999901, 0.0135896, 4.5822),(0, -1, 0, 0.655922),(-0.00050618, -0.999999, 0.0012782, 1.28397),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator483)
OrientationInterpolator484 = x3d.OrientationInterpolator()
OrientationInterpolator484.DEF = "Jump_l_elbow_RotationInterpolator"
OrientationInterpolator484.key = [0,0.28,0.32,0.58,0.72,1]
OrientationInterpolator484.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.13),(-1, 0, 0, 1.7),(-1, 0, 0, 1.7),(-1, 0, 0, 0.4),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator484)
OrientationInterpolator485 = x3d.OrientationInterpolator()
OrientationInterpolator485.DEF = "Jump_l_shoulder_RotationInterpolator"
OrientationInterpolator485.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator485.keyValue = [(0, 0, 1, 0),(-0.9987, 0.02554, 0.04498, 1.57),(-0.9987, 0.02554, 0.04498, 1.57),(1, 0.0004113, 0.003055, 4.114),(-0.8413, 0.3238, 0.4329, 1.453),(-0.877, 0.4198, 0.2337, 0.6009),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator485)
OrientationInterpolator486 = x3d.OrientationInterpolator()
OrientationInterpolator486.DEF = "Jump_head_RotationInterpolator"
OrientationInterpolator486.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator486.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.3216),(1, 0, 0, 0.06503),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator486)
OrientationInterpolator487 = x3d.OrientationInterpolator()
OrientationInterpolator487.DEF = "Jump_neck_RotationInterpolator"
OrientationInterpolator487.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator487.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.1942),(-1, 0, 0, 0.1942),(0, 0, 1, 0),(1, 0, 0, 0.2284),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator487)
OrientationInterpolator488 = x3d.OrientationInterpolator()
OrientationInterpolator488.DEF = "Jump_upper_body_RotationInterpolator"
OrientationInterpolator488.key = [0,0.22,0.28,0.34,0.71,0.88,1]
OrientationInterpolator488.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.05),(1, 0, 0, 1.051),(-1, 0, 0, 0.257),(1, 0, 0, 0.2171),(1, 0, 0, 0.3465),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator488)
OrientationInterpolator489 = x3d.OrientationInterpolator()
OrientationInterpolator489.DEF = "Jump_whole_body_RotationInterpolator"
OrientationInterpolator489.key = [0,0.28,0.32,0.48,0.64,0.76,1]
OrientationInterpolator489.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.3273),(1, 0, 0, 0.3273),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator489)
PositionInterpolator490 = x3d.PositionInterpolator()
PositionInterpolator490.DEF = "Jump_whole_body_TranslationInterpolator"
PositionInterpolator490.key = [0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]
PositionInterpolator490.keyValue = [(0, 0, 0),(0, -0.01264, -0.01289),(0, -0.04712, -0.03738),(-0.0003345, -0.1049, -0.05353),(-0.0005712, -0.1892, -0.06561),(-0.0008233, -0.286, -0.06276),(-0.0009591, -0.3795, -0.05148),(-0.00106, -0.4484, -0.03656),(-0.00106, -0.4484, -0.03656),(-0.001122, -0.25, -0.1499),(-0.0008616, -0.05, -0.06358),(-0.0005128, 0.15, -0.05488),(0.0004779, 0.55, 0.02732),(0.0001728, 1.385, 0.006873),(0.00017, 1.395, 0.0069),(0, 0.35, 0.02148),(0, -0.01299, -0.01057),(0, -0.06932, -0.01064),(0.0001365, -0.1037, -0.005059),(0.0001279, -0.07198, -0.007596),(0.000141, -0.01626, -0.004935),(0, 0, 0)]

Group470.children.append(PositionInterpolator490)
OrientationInterpolator491 = x3d.OrientationInterpolator()
OrientationInterpolator491.DEF = "Jump_l_sternoclavicular_RollInterpolator"
OrientationInterpolator491.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator491.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator491)
OrientationInterpolator492 = x3d.OrientationInterpolator()
OrientationInterpolator492.DEF = "Jump_l_acromioclavicular_RollInterpolator"
OrientationInterpolator492.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator492.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator492)
OrientationInterpolator493 = x3d.OrientationInterpolator()
OrientationInterpolator493.DEF = "Jump_r_sternoclavicular_RollInterpolator"
OrientationInterpolator493.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator493.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator493)
OrientationInterpolator494 = x3d.OrientationInterpolator()
OrientationInterpolator494.DEF = "Jump_r_acromioclavicular_RollInterpolator"
OrientationInterpolator494.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator494.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group470.children.append(OrientationInterpolator494)
OrientationInterpolator495 = x3d.OrientationInterpolator()
OrientationInterpolator495.DEF = "Jump_sacroiliac_YawInterpolator"
OrientationInterpolator495.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator495.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, -1, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group470.children.append(OrientationInterpolator495)
OrientationInterpolator496 = x3d.OrientationInterpolator()
OrientationInterpolator496.DEF = "Jump_vl5_YawInterpolator"
OrientationInterpolator496.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator496.keyValue = [(0, 1, 0, 0),(0, 1, 0, -0.1),(0, 1, 0, 0),(0, 1, 0, 0),(1, 0, 0, 0.6),(0, 1, 0, 0.1),(0, 1, 0, 0)]

Group470.children.append(OrientationInterpolator496)
OrientationInterpolator497 = x3d.OrientationInterpolator()
OrientationInterpolator497.DEF = "Jump_vc6_YawInterpolator"
OrientationInterpolator497.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator497.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0.8),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0.6),(0, -1, 0, 0.8),(0, 1, 0, 0)]

Group470.children.append(OrientationInterpolator497)
OrientationInterpolator498 = x3d.OrientationInterpolator()
OrientationInterpolator498.DEF = "Jump_l_thumb1_PitchInterpolator"
OrientationInterpolator498.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator498.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group470.children.append(OrientationInterpolator498)
OrientationInterpolator499 = x3d.OrientationInterpolator()
OrientationInterpolator499.DEF = "Jump_r_thumb1_PitchInterpolator"
OrientationInterpolator499.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator499.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group470.children.append(OrientationInterpolator499)

Scene33.children.append(Group470)
Group500 = x3d.Group()
Group500.DEF = "KickAnimation"
TimeSensor501 = x3d.TimeSensor()
TimeSensor501.DEF = "KickTimer"
TimeSensor501.cycleInterval = 3.73
TimeSensor501.loop = True

Group500.children.append(TimeSensor501)
OrientationInterpolator502 = x3d.OrientationInterpolator()
OrientationInterpolator502.DEF = "Kick_l_sternoclavicular_RollInterpolator"
OrientationInterpolator502.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator502.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator502)
OrientationInterpolator503 = x3d.OrientationInterpolator()
OrientationInterpolator503.DEF = "Kick_l_acromioclavicular_RollInterpolator"
OrientationInterpolator503.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator503.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator503)
OrientationInterpolator504 = x3d.OrientationInterpolator()
OrientationInterpolator504.DEF = "Kick_l_shoulder_RollInterpolator"
OrientationInterpolator504.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator504.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.76),(-0.25, 0, 1, 1.76),(0, 0, 1, 1.256),(0, 0, 1, 0.05),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator504)
OrientationInterpolator505 = x3d.OrientationInterpolator()
OrientationInterpolator505.DEF = "Kick_l_ForeArm_PitchInterpolator"
OrientationInterpolator505.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator505.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.55),(-1, 0.25, 0, 2.55),(1, 0, 0, 0),(1, 0, 0, 0),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator505)
OrientationInterpolator506 = x3d.OrientationInterpolator()
OrientationInterpolator506.DEF = "Kick_l_wrist_RollInterpolator"
OrientationInterpolator506.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator506.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, 0.55),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator506)
OrientationInterpolator507 = x3d.OrientationInterpolator()
OrientationInterpolator507.DEF = "Kick_l_thumb1_PitchInterpolator"
OrientationInterpolator507.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator507.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator507)
OrientationInterpolator508 = x3d.OrientationInterpolator()
OrientationInterpolator508.DEF = "Kick_r_sternoclavicular_RollInterpolator"
OrientationInterpolator508.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator508.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator508)
OrientationInterpolator509 = x3d.OrientationInterpolator()
OrientationInterpolator509.DEF = "Kick_r_acromioclavicular_RollInterpolator"
OrientationInterpolator509.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator509.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator509)
OrientationInterpolator510 = x3d.OrientationInterpolator()
OrientationInterpolator510.DEF = "Kick_r_shoulder_RollInterpolator"
OrientationInterpolator510.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator510.keyValue = [(0, 0, 1, 0),(0, 0, 1, -1.76),(0.25, 0, 1, -1.76),(0, 0, 1, -1.256),(0, 0, 1, -0.05),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator510)
OrientationInterpolator511 = x3d.OrientationInterpolator()
OrientationInterpolator511.DEF = "Kick_r_ForeArm_PitchInterpolator"
OrientationInterpolator511.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator511.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.55),(1, 0.25, 0, -2.55),(1, 0, 0, 0),(1, 0, 0, 0),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator511)
OrientationInterpolator512 = x3d.OrientationInterpolator()
OrientationInterpolator512.DEF = "Kick_r_wrist_RollInterpolator"
OrientationInterpolator512.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator512.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, -0.55),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator512)
OrientationInterpolator513 = x3d.OrientationInterpolator()
OrientationInterpolator513.DEF = "Kick_r_thumb1_PitchInterpolator"
OrientationInterpolator513.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator513.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator513)
OrientationInterpolator514 = x3d.OrientationInterpolator()
OrientationInterpolator514.DEF = "Kick_r_hip_PitchInterpolator"
OrientationInterpolator514.key = [0,0.2,0.3,0.5,0.6,0.9,1]
OrientationInterpolator514.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.9),(-1, 0, 0, 1.75),(-1, 0, 0, 2.25),(-1, 0, 0, 2),(1, 0, 0, 0),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator514)
OrientationInterpolator515 = x3d.OrientationInterpolator()
OrientationInterpolator515.DEF = "Kick_r_knee_PitchInterpolator"
OrientationInterpolator515.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator515.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.95),(1, 0, 0, 1.75),(-1, 0, 0, 0.28),(1, 0, 0, 0),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator515)
OrientationInterpolator516 = x3d.OrientationInterpolator()
OrientationInterpolator516.DEF = "Kick_l_hip_PitchInterpolator"
OrientationInterpolator516.key = [0,0.2,0.3,0.5,0.6,0.9,1]
OrientationInterpolator516.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator516)
OrientationInterpolator517 = x3d.OrientationInterpolator()
OrientationInterpolator517.DEF = "Kick_l_knee_PitchInterpolator"
OrientationInterpolator517.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator517.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator517)
OrientationInterpolator518 = x3d.OrientationInterpolator()
OrientationInterpolator518.DEF = "Kick_r_ankle_PitchInterpolator"
OrientationInterpolator518.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator518.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.9),(-1, 0, 0, 0.95),(1, 0, 0, 0.75),(-1, 0, 0, 0.05),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator518)
OrientationInterpolator519 = x3d.OrientationInterpolator()
OrientationInterpolator519.DEF = "Kick_r_metatarsal_PitchInterpolator"
OrientationInterpolator519.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator519.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.5),(-1, 0, 0, 0.7),(1, 0, 0, 0.75),(-1, 0, 0, 0.2),(1, 0, 0, 0)]

Group500.children.append(OrientationInterpolator519)
OrientationInterpolator520 = x3d.OrientationInterpolator()
OrientationInterpolator520.DEF = "Kick_sacroiliac_YawInterpolator"
OrientationInterpolator520.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator520.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, -1, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group500.children.append(OrientationInterpolator520)
OrientationInterpolator521 = x3d.OrientationInterpolator()
OrientationInterpolator521.DEF = "Kick_vl5_YawInterpolator"
OrientationInterpolator521.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator521.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator521)
OrientationInterpolator522 = x3d.OrientationInterpolator()
OrientationInterpolator522.DEF = "Kick_vc6_YawInterpolator"
OrientationInterpolator522.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator522.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator522)
OrientationInterpolator523 = x3d.OrientationInterpolator()
OrientationInterpolator523.DEF = "Kick_lower_body_RotationInterpolator"
OrientationInterpolator523.key = [0,0.5,1]
OrientationInterpolator523.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator523)
OrientationInterpolator524 = x3d.OrientationInterpolator()
OrientationInterpolator524.DEF = "Kick_upper_body_RotationInterpolator"
OrientationInterpolator524.key = [0,0.5,1]
OrientationInterpolator524.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator524)
OrientationInterpolator525 = x3d.OrientationInterpolator()
OrientationInterpolator525.DEF = "Kick_whole_body_RotationInterpolator"
OrientationInterpolator525.key = [0,0.5,1]
OrientationInterpolator525.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator525)
PositionInterpolator526 = x3d.PositionInterpolator()
PositionInterpolator526.DEF = "Kick_whole_body_TranslationInterpolator"
PositionInterpolator526.key = [0,0.5,1]
PositionInterpolator526.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group500.children.append(PositionInterpolator526)
OrientationInterpolator527 = x3d.OrientationInterpolator()
OrientationInterpolator527.DEF = "Kick_neck_RotationInterpolator"
OrientationInterpolator527.key = [0,0.25,0.55,1]
OrientationInterpolator527.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.7),(1, 0, 0, 0.5),(0, 0, 1, 0)]

Group500.children.append(OrientationInterpolator527)

Scene33.children.append(Group500)
Group528 = x3d.Group()
Group528.DEF = "Interface"
Transform529 = x3d.Transform()
Transform529.DEF = "CoordinateSystemFloor"
Transform529.scale = [0.1,0.1,0.1]
Shape530 = x3d.Shape()
Shape530.DEF = "AxisLinesShape"
IndexedLineSet531 = x3d.IndexedLineSet()
IndexedLineSet531.colorPerVertex = False
IndexedLineSet531.colorIndex = [0,1,2]
IndexedLineSet531.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color532 = x3d.Color()
Color532.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet531.color = Color532
Coordinate533 = x3d.Coordinate()
Coordinate533.point = [(0, 0, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1)]

IndexedLineSet531.coord = Coordinate533

Shape530.geometry = IndexedLineSet531

Transform529.children.append(Shape530)

Group528.children.append(Transform529)
ProximitySensor534 = x3d.ProximitySensor()
ProximitySensor534.DEF = "HudProx"
ProximitySensor534.size = [50,50,50]

Group528.children.append(ProximitySensor534)
Transform535 = x3d.Transform()
Transform535.DEF = "HudXform"
Transform535.translation = [2,1,2]
Transform535.rotation = [0,1,0,0.78]
Transform536 = x3d.Transform()
Transform536.translation = [-0.4,-0.01,-0.75]
Transform536.scale = [0.02,0.02,0.02]
Transform537 = x3d.Transform()
Transform537.DEF = "Stand_Text"
Transform537.translation = [0,-0.9,0]
TouchSensor538 = x3d.TouchSensor()
TouchSensor538.DEF = "Stand_Touch"

Transform537.children.append(TouchSensor538)
Shape539 = x3d.Shape()
Shape539.DEF = "StandText"
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.DEF = "text_color"
Material541.ambientIntensity = 1
Material541.diffuseColor = [0.819,0.521,0.169]
Material541.specularColor = [0.819,0.521,0.169]
Material541.emissiveColor = [0.819,0.521,0.169]

Appearance540.material = Material541

Shape539.appearance = Appearance540
Text542 = x3d.Text()
Text542.string = ["Stand"]
FontStyle543 = x3d.FontStyle()
FontStyle543.family = ["SANS"]

Text542.fontStyle = FontStyle543

Shape539.geometry = Text542

Transform537.children.append(Shape539)
Shape544 = x3d.Shape()
Shape544.DEF = "Stand_Back"
Appearance545 = x3d.Appearance()
Material546 = x3d.Material()
Material546.DEF = "Clear"
Material546.ambientIntensity = 1
Material546.diffuseColor = [0,0.5,0]
Material546.emissiveColor = [0,0.5,0]
Material546.transparency = 0.8

Appearance545.material = Material546

Shape544.appearance = Appearance545
IndexedFaceSet547 = x3d.IndexedFaceSet()
IndexedFaceSet547.DEF = "Backing"
IndexedFaceSet547.coordIndex = [0,1,2,3,-1]
Coordinate548 = x3d.Coordinate()
Coordinate548.point = [(-0.2, -0.25, -0.01),(3, -0.25, -0.01),(3, 1, -0.01),(-0.2, 1, -0.01)]

IndexedFaceSet547.coord = Coordinate548

Shape544.geometry = IndexedFaceSet547

Transform537.children.append(Shape544)

Transform536.children.append(Transform537)
Transform549 = x3d.Transform()
Transform549.DEF = "Pitch_Text"
Transform549.translation = [0,-2.4,0]
TouchSensor550 = x3d.TouchSensor()
TouchSensor550.DEF = "Pitch_Touch"

Transform549.children.append(TouchSensor550)
Shape551 = x3d.Shape()
Shape551.DEF = "PitchText"
Appearance552 = x3d.Appearance()
Material553 = x3d.Material()
Material553.USE = "text_color"

Appearance552.material = Material553

Shape551.appearance = Appearance552
Text554 = x3d.Text()
Text554.string = ["Pitch"]
FontStyle555 = x3d.FontStyle()
FontStyle555.family = ["SANS"]

Text554.fontStyle = FontStyle555

Shape551.geometry = Text554

Transform549.children.append(Shape551)
Shape556 = x3d.Shape()
Shape556.DEF = "Pitch_Back"
Appearance557 = x3d.Appearance()
Material558 = x3d.Material()
Material558.USE = "Clear"

Appearance557.material = Material558

Shape556.appearance = Appearance557
IndexedFaceSet559 = x3d.IndexedFaceSet()
IndexedFaceSet559.USE = "Backing"

Shape556.geometry = IndexedFaceSet559

Transform549.children.append(Shape556)

Transform536.children.append(Transform549)
Transform560 = x3d.Transform()
Transform560.DEF = "Yaw_Text"
Transform560.translation = [0,-3.8,0]
TouchSensor561 = x3d.TouchSensor()
TouchSensor561.DEF = "Yaw_Touch"

Transform560.children.append(TouchSensor561)
Shape562 = x3d.Shape()
Shape562.DEF = "YawText"
Appearance563 = x3d.Appearance()
Material564 = x3d.Material()
Material564.USE = "text_color"

Appearance563.material = Material564

Shape562.appearance = Appearance563
Text565 = x3d.Text()
Text565.string = ["Yaw"]
FontStyle566 = x3d.FontStyle()
FontStyle566.family = ["SANS"]

Text565.fontStyle = FontStyle566

Shape562.geometry = Text565

Transform560.children.append(Shape562)
Shape567 = x3d.Shape()
Shape567.DEF = "Yaw_Back"
Appearance568 = x3d.Appearance()
Material569 = x3d.Material()
Material569.USE = "Clear"

Appearance568.material = Material569

Shape567.appearance = Appearance568
IndexedFaceSet570 = x3d.IndexedFaceSet()
IndexedFaceSet570.USE = "Backing"

Shape567.geometry = IndexedFaceSet570

Transform560.children.append(Shape567)

Transform536.children.append(Transform560)
Transform571 = x3d.Transform()
Transform571.DEF = "Roll_Text"
Transform571.translation = [0,-5.2,0]
TouchSensor572 = x3d.TouchSensor()
TouchSensor572.DEF = "Roll_Touch"

Transform571.children.append(TouchSensor572)
Shape573 = x3d.Shape()
Shape573.DEF = "RollText"
Appearance574 = x3d.Appearance()
Material575 = x3d.Material()
Material575.USE = "text_color"

Appearance574.material = Material575

Shape573.appearance = Appearance574
Text576 = x3d.Text()
Text576.string = ["Roll"]
FontStyle577 = x3d.FontStyle()
FontStyle577.family = ["SANS"]

Text576.fontStyle = FontStyle577

Shape573.geometry = Text576

Transform571.children.append(Shape573)
Shape578 = x3d.Shape()
Shape578.DEF = "Roll_Back"
Appearance579 = x3d.Appearance()
Material580 = x3d.Material()
Material580.USE = "Clear"

Appearance579.material = Material580

Shape578.appearance = Appearance579
IndexedFaceSet581 = x3d.IndexedFaceSet()
IndexedFaceSet581.USE = "Backing"

Shape578.geometry = IndexedFaceSet581

Transform571.children.append(Shape578)

Transform536.children.append(Transform571)
Transform582 = x3d.Transform()
Transform582.DEF = "Walk_Text"
Transform582.translation = [0,-6.6,0]
TouchSensor583 = x3d.TouchSensor()
TouchSensor583.DEF = "Walk_Touch"

Transform582.children.append(TouchSensor583)
Shape584 = x3d.Shape()
Shape584.DEF = "WalkText"
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.USE = "text_color"

Appearance585.material = Material586

Shape584.appearance = Appearance585
Text587 = x3d.Text()
Text587.string = ["Walk"]
FontStyle588 = x3d.FontStyle()
FontStyle588.family = ["SANS"]

Text587.fontStyle = FontStyle588

Shape584.geometry = Text587

Transform582.children.append(Shape584)
Shape589 = x3d.Shape()
Shape589.DEF = "Walk_Back"
Appearance590 = x3d.Appearance()
Material591 = x3d.Material()
Material591.USE = "Clear"

Appearance590.material = Material591

Shape589.appearance = Appearance590
IndexedFaceSet592 = x3d.IndexedFaceSet()
IndexedFaceSet592.USE = "Backing"

Shape589.geometry = IndexedFaceSet592

Transform582.children.append(Shape589)

Transform536.children.append(Transform582)
Transform593 = x3d.Transform()
Transform593.DEF = "Run_Text"
Transform593.translation = [0,-8,0]
TouchSensor594 = x3d.TouchSensor()
TouchSensor594.DEF = "Run_Touch"

Transform593.children.append(TouchSensor594)
Shape595 = x3d.Shape()
Shape595.DEF = "RunText"
Appearance596 = x3d.Appearance()
Material597 = x3d.Material()
Material597.USE = "text_color"

Appearance596.material = Material597

Shape595.appearance = Appearance596
Text598 = x3d.Text()
Text598.string = ["Run"]
FontStyle599 = x3d.FontStyle()
FontStyle599.family = ["SANS"]

Text598.fontStyle = FontStyle599

Shape595.geometry = Text598

Transform593.children.append(Shape595)
Shape600 = x3d.Shape()
Shape600.DEF = "Run_Back"
Appearance601 = x3d.Appearance()
Material602 = x3d.Material()
Material602.USE = "Clear"

Appearance601.material = Material602

Shape600.appearance = Appearance601
IndexedFaceSet603 = x3d.IndexedFaceSet()
IndexedFaceSet603.USE = "Backing"

Shape600.geometry = IndexedFaceSet603

Transform593.children.append(Shape600)

Transform536.children.append(Transform593)
Transform604 = x3d.Transform()
Transform604.DEF = "Jump_Text"
Transform604.translation = [0,-9.4,0]
TouchSensor605 = x3d.TouchSensor()
TouchSensor605.DEF = "Jump_Touch"

Transform604.children.append(TouchSensor605)
Shape606 = x3d.Shape()
Shape606.DEF = "JumpText"
Appearance607 = x3d.Appearance()
Material608 = x3d.Material()
Material608.USE = "text_color"

Appearance607.material = Material608

Shape606.appearance = Appearance607
Text609 = x3d.Text()
Text609.string = ["Jump"]
FontStyle610 = x3d.FontStyle()
FontStyle610.family = ["SANS"]

Text609.fontStyle = FontStyle610

Shape606.geometry = Text609

Transform604.children.append(Shape606)
Shape611 = x3d.Shape()
Shape611.DEF = "Jump_Back"
Appearance612 = x3d.Appearance()
Material613 = x3d.Material()
Material613.USE = "Clear"

Appearance612.material = Material613

Shape611.appearance = Appearance612
IndexedFaceSet614 = x3d.IndexedFaceSet()
IndexedFaceSet614.USE = "Backing"

Shape611.geometry = IndexedFaceSet614

Transform604.children.append(Shape611)

Transform536.children.append(Transform604)
Transform615 = x3d.Transform()
Transform615.DEF = "Kick_Text"
Transform615.translation = [0,-10.8,0]
TouchSensor616 = x3d.TouchSensor()
TouchSensor616.DEF = "Kick_Touch"

Transform615.children.append(TouchSensor616)
Shape617 = x3d.Shape()
Shape617.DEF = "KickText"
Appearance618 = x3d.Appearance()
Material619 = x3d.Material()
Material619.USE = "text_color"

Appearance618.material = Material619

Shape617.appearance = Appearance618
Text620 = x3d.Text()
Text620.string = ["Kick"]
FontStyle621 = x3d.FontStyle()
FontStyle621.family = ["SANS"]

Text620.fontStyle = FontStyle621

Shape617.geometry = Text620

Transform615.children.append(Shape617)
Shape622 = x3d.Shape()
Shape622.DEF = "Kick_Back"
Appearance623 = x3d.Appearance()
Material624 = x3d.Material()
Material624.USE = "Clear"

Appearance623.material = Material624

Shape622.appearance = Appearance623
IndexedFaceSet625 = x3d.IndexedFaceSet()
IndexedFaceSet625.USE = "Backing"

Shape622.geometry = IndexedFaceSet625

Transform615.children.append(Shape622)

Transform536.children.append(Transform615)
Transform626 = x3d.Transform()
Transform626.DEF = "Stop_Text"
Transform626.translation = [0,0.4,0]
TouchSensor627 = x3d.TouchSensor()
TouchSensor627.DEF = "Stop_Touch"

Transform626.children.append(TouchSensor627)
Shape628 = x3d.Shape()
Shape628.DEF = "StopText"
Appearance629 = x3d.Appearance()
Material630 = x3d.Material()
Material630.USE = "text_color"

Appearance629.material = Material630

Shape628.appearance = Appearance629
Text631 = x3d.Text()
Text631.string = ["Default"]
FontStyle632 = x3d.FontStyle()
FontStyle632.family = ["SANS"]

Text631.fontStyle = FontStyle632

Shape628.geometry = Text631

Transform626.children.append(Shape628)
Shape633 = x3d.Shape()
Shape633.DEF = "Stop_Back"
Appearance634 = x3d.Appearance()
Material635 = x3d.Material()
Material635.USE = "Clear"

Appearance634.material = Material635

Shape633.appearance = Appearance634
IndexedFaceSet636 = x3d.IndexedFaceSet()
IndexedFaceSet636.USE = "Backing"

Shape633.geometry = IndexedFaceSet636

Transform626.children.append(Shape633)

Transform536.children.append(Transform626)
Transform637 = x3d.Transform()
Transform637.DEF = "SceneLabel"
Transform637.translation = [1.3,3,0]
Shape638 = x3d.Shape()
Shape638.DEF = "SceneLabelText"
Appearance639 = x3d.Appearance()
Material640 = x3d.Material()
Material640.USE = "text_color"

Appearance639.material = Material640

Shape638.appearance = Appearance639
Text641 = x3d.Text()
Text641.string = ["BoxMan3","Animation"]
FontStyle642 = x3d.FontStyle()
FontStyle642.family = ["SANS"]
FontStyle642.justify = ["MIDDLE","MIDDLE"]

Text641.fontStyle = FontStyle642

Shape638.geometry = Text641

Transform637.children.append(Shape638)

Transform536.children.append(Transform637)

Transform535.children.append(Transform536)

Group528.children.append(Transform535)

Scene33.children.append(Group528)
ROUTE643 = x3d.ROUTE()
ROUTE643.fromNode = "StopTimer"
ROUTE643.fromField = "fraction_changed"
ROUTE643.toNode = "Stop_humanoid_root_TranslationInterpolator"
ROUTE643.toField = "set_fraction"

Scene33.children.append(ROUTE643)
ROUTE644 = x3d.ROUTE()
ROUTE644.fromNode = "StopTimer"
ROUTE644.fromField = "fraction_changed"
ROUTE644.toNode = "Stop_humanoid_root_RotationInterpolator"
ROUTE644.toField = "set_fraction"

Scene33.children.append(ROUTE644)
ROUTE645 = x3d.ROUTE()
ROUTE645.fromNode = "StopTimer"
ROUTE645.fromField = "fraction_changed"
ROUTE645.toNode = "Stop_sacroiliac_RotationInterpolator"
ROUTE645.toField = "set_fraction"

Scene33.children.append(ROUTE645)
ROUTE646 = x3d.ROUTE()
ROUTE646.fromNode = "StopTimer"
ROUTE646.fromField = "fraction_changed"
ROUTE646.toNode = "Stop_l_hip_RotationInterpolator"
ROUTE646.toField = "set_fraction"

Scene33.children.append(ROUTE646)
ROUTE647 = x3d.ROUTE()
ROUTE647.fromNode = "StopTimer"
ROUTE647.fromField = "fraction_changed"
ROUTE647.toNode = "Stop_l_knee_RotationInterpolator"
ROUTE647.toField = "set_fraction"

Scene33.children.append(ROUTE647)
ROUTE648 = x3d.ROUTE()
ROUTE648.fromNode = "StopTimer"
ROUTE648.fromField = "fraction_changed"
ROUTE648.toNode = "Stop_l_ankle_RotationInterpolator"
ROUTE648.toField = "set_fraction"

Scene33.children.append(ROUTE648)
ROUTE649 = x3d.ROUTE()
ROUTE649.fromNode = "StopTimer"
ROUTE649.fromField = "fraction_changed"
ROUTE649.toNode = "Stop_l_subtalar_RotationInterpolator"
ROUTE649.toField = "set_fraction"

Scene33.children.append(ROUTE649)
ROUTE650 = x3d.ROUTE()
ROUTE650.fromNode = "StopTimer"
ROUTE650.fromField = "fraction_changed"
ROUTE650.toNode = "Stop_l_midtarsal_RotationInterpolator"
ROUTE650.toField = "set_fraction"

Scene33.children.append(ROUTE650)
ROUTE651 = x3d.ROUTE()
ROUTE651.fromNode = "StopTimer"
ROUTE651.fromField = "fraction_changed"
ROUTE651.toNode = "Stop_l_metatarsal_RotationInterpolator"
ROUTE651.toField = "set_fraction"

Scene33.children.append(ROUTE651)
ROUTE652 = x3d.ROUTE()
ROUTE652.fromNode = "StopTimer"
ROUTE652.fromField = "fraction_changed"
ROUTE652.toNode = "Stop_r_hip_RotationInterpolator"
ROUTE652.toField = "set_fraction"

Scene33.children.append(ROUTE652)
ROUTE653 = x3d.ROUTE()
ROUTE653.fromNode = "StopTimer"
ROUTE653.fromField = "fraction_changed"
ROUTE653.toNode = "Stop_r_knee_RotationInterpolator"
ROUTE653.toField = "set_fraction"

Scene33.children.append(ROUTE653)
ROUTE654 = x3d.ROUTE()
ROUTE654.fromNode = "StopTimer"
ROUTE654.fromField = "fraction_changed"
ROUTE654.toNode = "Stop_r_ankle_RotationInterpolator"
ROUTE654.toField = "set_fraction"

Scene33.children.append(ROUTE654)
ROUTE655 = x3d.ROUTE()
ROUTE655.fromNode = "StopTimer"
ROUTE655.fromField = "fraction_changed"
ROUTE655.toNode = "Stop_r_subtalar_RotationInterpolator"
ROUTE655.toField = "set_fraction"

Scene33.children.append(ROUTE655)
ROUTE656 = x3d.ROUTE()
ROUTE656.fromNode = "StopTimer"
ROUTE656.fromField = "fraction_changed"
ROUTE656.toNode = "Stop_r_midtarsal_RotationInterpolator"
ROUTE656.toField = "set_fraction"

Scene33.children.append(ROUTE656)
ROUTE657 = x3d.ROUTE()
ROUTE657.fromNode = "StopTimer"
ROUTE657.fromField = "fraction_changed"
ROUTE657.toNode = "Stop_r_metatarsal_RotationInterpolator"
ROUTE657.toField = "set_fraction"

Scene33.children.append(ROUTE657)
ROUTE658 = x3d.ROUTE()
ROUTE658.fromNode = "StopTimer"
ROUTE658.fromField = "fraction_changed"
ROUTE658.toNode = "Stop_vl5_RotationInterpolator"
ROUTE658.toField = "set_fraction"

Scene33.children.append(ROUTE658)
ROUTE659 = x3d.ROUTE()
ROUTE659.fromNode = "StopTimer"
ROUTE659.fromField = "fraction_changed"
ROUTE659.toNode = "Stop_vl4_RotationInterpolator"
ROUTE659.toField = "set_fraction"

Scene33.children.append(ROUTE659)
ROUTE660 = x3d.ROUTE()
ROUTE660.fromNode = "StopTimer"
ROUTE660.fromField = "fraction_changed"
ROUTE660.toNode = "Stop_vl3_RotationInterpolator"
ROUTE660.toField = "set_fraction"

Scene33.children.append(ROUTE660)
ROUTE661 = x3d.ROUTE()
ROUTE661.fromNode = "StopTimer"
ROUTE661.fromField = "fraction_changed"
ROUTE661.toNode = "Stop_vl2_RotationInterpolator"
ROUTE661.toField = "set_fraction"

Scene33.children.append(ROUTE661)
ROUTE662 = x3d.ROUTE()
ROUTE662.fromNode = "StopTimer"
ROUTE662.fromField = "fraction_changed"
ROUTE662.toNode = "Stop_vl1_RotationInterpolator"
ROUTE662.toField = "set_fraction"

Scene33.children.append(ROUTE662)
ROUTE663 = x3d.ROUTE()
ROUTE663.fromNode = "StopTimer"
ROUTE663.fromField = "fraction_changed"
ROUTE663.toNode = "Stop_vt12_RotationInterpolator"
ROUTE663.toField = "set_fraction"

Scene33.children.append(ROUTE663)
ROUTE664 = x3d.ROUTE()
ROUTE664.fromNode = "StopTimer"
ROUTE664.fromField = "fraction_changed"
ROUTE664.toNode = "Stop_vt11_RotationInterpolator"
ROUTE664.toField = "set_fraction"

Scene33.children.append(ROUTE664)
ROUTE665 = x3d.ROUTE()
ROUTE665.fromNode = "StopTimer"
ROUTE665.fromField = "fraction_changed"
ROUTE665.toNode = "Stop_vt10_RotationInterpolator"
ROUTE665.toField = "set_fraction"

Scene33.children.append(ROUTE665)
ROUTE666 = x3d.ROUTE()
ROUTE666.fromNode = "StopTimer"
ROUTE666.fromField = "fraction_changed"
ROUTE666.toNode = "Stop_vt9_RotationInterpolator"
ROUTE666.toField = "set_fraction"

Scene33.children.append(ROUTE666)
ROUTE667 = x3d.ROUTE()
ROUTE667.fromNode = "StopTimer"
ROUTE667.fromField = "fraction_changed"
ROUTE667.toNode = "Stop_vt8_RotationInterpolator"
ROUTE667.toField = "set_fraction"

Scene33.children.append(ROUTE667)
ROUTE668 = x3d.ROUTE()
ROUTE668.fromNode = "StopTimer"
ROUTE668.fromField = "fraction_changed"
ROUTE668.toNode = "Stop_vt7_RotationInterpolator"
ROUTE668.toField = "set_fraction"

Scene33.children.append(ROUTE668)
ROUTE669 = x3d.ROUTE()
ROUTE669.fromNode = "StopTimer"
ROUTE669.fromField = "fraction_changed"
ROUTE669.toNode = "Stop_vt6_RotationInterpolator"
ROUTE669.toField = "set_fraction"

Scene33.children.append(ROUTE669)
ROUTE670 = x3d.ROUTE()
ROUTE670.fromNode = "StopTimer"
ROUTE670.fromField = "fraction_changed"
ROUTE670.toNode = "Stop_vt5_RotationInterpolator"
ROUTE670.toField = "set_fraction"

Scene33.children.append(ROUTE670)
ROUTE671 = x3d.ROUTE()
ROUTE671.fromNode = "StopTimer"
ROUTE671.fromField = "fraction_changed"
ROUTE671.toNode = "Stop_vt4_RotationInterpolator"
ROUTE671.toField = "set_fraction"

Scene33.children.append(ROUTE671)
ROUTE672 = x3d.ROUTE()
ROUTE672.fromNode = "StopTimer"
ROUTE672.fromField = "fraction_changed"
ROUTE672.toNode = "Stop_vt3_RotationInterpolator"
ROUTE672.toField = "set_fraction"

Scene33.children.append(ROUTE672)
ROUTE673 = x3d.ROUTE()
ROUTE673.fromNode = "StopTimer"
ROUTE673.fromField = "fraction_changed"
ROUTE673.toNode = "Stop_vt2_RotationInterpolator"
ROUTE673.toField = "set_fraction"

Scene33.children.append(ROUTE673)
ROUTE674 = x3d.ROUTE()
ROUTE674.fromNode = "StopTimer"
ROUTE674.fromField = "fraction_changed"
ROUTE674.toNode = "Stop_vt1_RotationInterpolator"
ROUTE674.toField = "set_fraction"

Scene33.children.append(ROUTE674)
ROUTE675 = x3d.ROUTE()
ROUTE675.fromNode = "StopTimer"
ROUTE675.fromField = "fraction_changed"
ROUTE675.toNode = "Stop_vc7_RotationInterpolator"
ROUTE675.toField = "set_fraction"

Scene33.children.append(ROUTE675)
ROUTE676 = x3d.ROUTE()
ROUTE676.fromNode = "StopTimer"
ROUTE676.fromField = "fraction_changed"
ROUTE676.toNode = "Stop_vc6_RotationInterpolator"
ROUTE676.toField = "set_fraction"

Scene33.children.append(ROUTE676)
ROUTE677 = x3d.ROUTE()
ROUTE677.fromNode = "StopTimer"
ROUTE677.fromField = "fraction_changed"
ROUTE677.toNode = "Stop_vc5_RotationInterpolator"
ROUTE677.toField = "set_fraction"

Scene33.children.append(ROUTE677)
ROUTE678 = x3d.ROUTE()
ROUTE678.fromNode = "StopTimer"
ROUTE678.fromField = "fraction_changed"
ROUTE678.toNode = "Stop_vc4_RotationInterpolator"
ROUTE678.toField = "set_fraction"

Scene33.children.append(ROUTE678)
ROUTE679 = x3d.ROUTE()
ROUTE679.fromNode = "StopTimer"
ROUTE679.fromField = "fraction_changed"
ROUTE679.toNode = "Stop_vc3_RotationInterpolator"
ROUTE679.toField = "set_fraction"

Scene33.children.append(ROUTE679)
ROUTE680 = x3d.ROUTE()
ROUTE680.fromNode = "StopTimer"
ROUTE680.fromField = "fraction_changed"
ROUTE680.toNode = "Stop_vc2_RotationInterpolator"
ROUTE680.toField = "set_fraction"

Scene33.children.append(ROUTE680)
ROUTE681 = x3d.ROUTE()
ROUTE681.fromNode = "StopTimer"
ROUTE681.fromField = "fraction_changed"
ROUTE681.toNode = "Stop_vc1_RotationInterpolator"
ROUTE681.toField = "set_fraction"

Scene33.children.append(ROUTE681)
ROUTE682 = x3d.ROUTE()
ROUTE682.fromNode = "StopTimer"
ROUTE682.fromField = "fraction_changed"
ROUTE682.toNode = "Stop_skullbase_RotationInterpolator"
ROUTE682.toField = "set_fraction"

Scene33.children.append(ROUTE682)
ROUTE683 = x3d.ROUTE()
ROUTE683.fromNode = "StopTimer"
ROUTE683.fromField = "fraction_changed"
ROUTE683.toNode = "Stop_l_eyeball_joint_RotationInterpolator"
ROUTE683.toField = "set_fraction"

Scene33.children.append(ROUTE683)
ROUTE684 = x3d.ROUTE()
ROUTE684.fromNode = "StopTimer"
ROUTE684.fromField = "fraction_changed"
ROUTE684.toNode = "Stop_r_eyeball_joint_RotationInterpolator"
ROUTE684.toField = "set_fraction"

Scene33.children.append(ROUTE684)
ROUTE685 = x3d.ROUTE()
ROUTE685.fromNode = "StopTimer"
ROUTE685.fromField = "fraction_changed"
ROUTE685.toNode = "Stop_l_sternoclavicular_RotationInterpolator"
ROUTE685.toField = "set_fraction"

Scene33.children.append(ROUTE685)
ROUTE686 = x3d.ROUTE()
ROUTE686.fromNode = "StopTimer"
ROUTE686.fromField = "fraction_changed"
ROUTE686.toNode = "Stop_l_acromioclavicular_RotationInterpolator"
ROUTE686.toField = "set_fraction"

Scene33.children.append(ROUTE686)
ROUTE687 = x3d.ROUTE()
ROUTE687.fromNode = "StopTimer"
ROUTE687.fromField = "fraction_changed"
ROUTE687.toNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE687.toField = "set_fraction"

Scene33.children.append(ROUTE687)
ROUTE688 = x3d.ROUTE()
ROUTE688.fromNode = "StopTimer"
ROUTE688.fromField = "fraction_changed"
ROUTE688.toNode = "Stop_l_elbow_RotationInterpolator"
ROUTE688.toField = "set_fraction"

Scene33.children.append(ROUTE688)
ROUTE689 = x3d.ROUTE()
ROUTE689.fromNode = "StopTimer"
ROUTE689.fromField = "fraction_changed"
ROUTE689.toNode = "Stop_l_wrist_RotationInterpolator"
ROUTE689.toField = "set_fraction"

Scene33.children.append(ROUTE689)
ROUTE690 = x3d.ROUTE()
ROUTE690.fromNode = "StopTimer"
ROUTE690.fromField = "fraction_changed"
ROUTE690.toNode = "Stop_l_thumb1_RotationInterpolator"
ROUTE690.toField = "set_fraction"

Scene33.children.append(ROUTE690)
ROUTE691 = x3d.ROUTE()
ROUTE691.fromNode = "StopTimer"
ROUTE691.fromField = "fraction_changed"
ROUTE691.toNode = "Stop_l_thumb2_RotationInterpolator"
ROUTE691.toField = "set_fraction"

Scene33.children.append(ROUTE691)
ROUTE692 = x3d.ROUTE()
ROUTE692.fromNode = "StopTimer"
ROUTE692.fromField = "fraction_changed"
ROUTE692.toNode = "Stop_l_thumb3_RotationInterpolator"
ROUTE692.toField = "set_fraction"

Scene33.children.append(ROUTE692)
ROUTE693 = x3d.ROUTE()
ROUTE693.fromNode = "StopTimer"
ROUTE693.fromField = "fraction_changed"
ROUTE693.toNode = "Stop_l_index0_RotationInterpolator"
ROUTE693.toField = "set_fraction"

Scene33.children.append(ROUTE693)
ROUTE694 = x3d.ROUTE()
ROUTE694.fromNode = "StopTimer"
ROUTE694.fromField = "fraction_changed"
ROUTE694.toNode = "Stop_l_index1_RotationInterpolator"
ROUTE694.toField = "set_fraction"

Scene33.children.append(ROUTE694)
ROUTE695 = x3d.ROUTE()
ROUTE695.fromNode = "StopTimer"
ROUTE695.fromField = "fraction_changed"
ROUTE695.toNode = "Stop_l_index2_RotationInterpolator"
ROUTE695.toField = "set_fraction"

Scene33.children.append(ROUTE695)
ROUTE696 = x3d.ROUTE()
ROUTE696.fromNode = "StopTimer"
ROUTE696.fromField = "fraction_changed"
ROUTE696.toNode = "Stop_l_index3_RotationInterpolator"
ROUTE696.toField = "set_fraction"

Scene33.children.append(ROUTE696)
ROUTE697 = x3d.ROUTE()
ROUTE697.fromNode = "StopTimer"
ROUTE697.fromField = "fraction_changed"
ROUTE697.toNode = "Stop_l_middle0_RotationInterpolator"
ROUTE697.toField = "set_fraction"

Scene33.children.append(ROUTE697)
ROUTE698 = x3d.ROUTE()
ROUTE698.fromNode = "StopTimer"
ROUTE698.fromField = "fraction_changed"
ROUTE698.toNode = "Stop_l_middle1_RotationInterpolator"
ROUTE698.toField = "set_fraction"

Scene33.children.append(ROUTE698)
ROUTE699 = x3d.ROUTE()
ROUTE699.fromNode = "StopTimer"
ROUTE699.fromField = "fraction_changed"
ROUTE699.toNode = "Stop_l_middle2_RotationInterpolator"
ROUTE699.toField = "set_fraction"

Scene33.children.append(ROUTE699)
ROUTE700 = x3d.ROUTE()
ROUTE700.fromNode = "StopTimer"
ROUTE700.fromField = "fraction_changed"
ROUTE700.toNode = "Stop_l_middle3_RotationInterpolator"
ROUTE700.toField = "set_fraction"

Scene33.children.append(ROUTE700)
ROUTE701 = x3d.ROUTE()
ROUTE701.fromNode = "StopTimer"
ROUTE701.fromField = "fraction_changed"
ROUTE701.toNode = "Stop_l_ring0_RotationInterpolator"
ROUTE701.toField = "set_fraction"

Scene33.children.append(ROUTE701)
ROUTE702 = x3d.ROUTE()
ROUTE702.fromNode = "StopTimer"
ROUTE702.fromField = "fraction_changed"
ROUTE702.toNode = "Stop_l_ring1_RotationInterpolator"
ROUTE702.toField = "set_fraction"

Scene33.children.append(ROUTE702)
ROUTE703 = x3d.ROUTE()
ROUTE703.fromNode = "StopTimer"
ROUTE703.fromField = "fraction_changed"
ROUTE703.toNode = "Stop_l_ring2_RotationInterpolator"
ROUTE703.toField = "set_fraction"

Scene33.children.append(ROUTE703)
ROUTE704 = x3d.ROUTE()
ROUTE704.fromNode = "StopTimer"
ROUTE704.fromField = "fraction_changed"
ROUTE704.toNode = "Stop_l_ring3_RotationInterpolator"
ROUTE704.toField = "set_fraction"

Scene33.children.append(ROUTE704)
ROUTE705 = x3d.ROUTE()
ROUTE705.fromNode = "StopTimer"
ROUTE705.fromField = "fraction_changed"
ROUTE705.toNode = "Stop_l_pinky0_RotationInterpolator"
ROUTE705.toField = "set_fraction"

Scene33.children.append(ROUTE705)
ROUTE706 = x3d.ROUTE()
ROUTE706.fromNode = "StopTimer"
ROUTE706.fromField = "fraction_changed"
ROUTE706.toNode = "Stop_l_pinky1_RotationInterpolator"
ROUTE706.toField = "set_fraction"

Scene33.children.append(ROUTE706)
ROUTE707 = x3d.ROUTE()
ROUTE707.fromNode = "StopTimer"
ROUTE707.fromField = "fraction_changed"
ROUTE707.toNode = "Stop_l_pinky2_RotationInterpolator"
ROUTE707.toField = "set_fraction"

Scene33.children.append(ROUTE707)
ROUTE708 = x3d.ROUTE()
ROUTE708.fromNode = "StopTimer"
ROUTE708.fromField = "fraction_changed"
ROUTE708.toNode = "Stop_l_pinky3_RotationInterpolator"
ROUTE708.toField = "set_fraction"

Scene33.children.append(ROUTE708)
ROUTE709 = x3d.ROUTE()
ROUTE709.fromNode = "StopTimer"
ROUTE709.fromField = "fraction_changed"
ROUTE709.toNode = "Stop_r_sternoclavicular_RotationInterpolator"
ROUTE709.toField = "set_fraction"

Scene33.children.append(ROUTE709)
ROUTE710 = x3d.ROUTE()
ROUTE710.fromNode = "StopTimer"
ROUTE710.fromField = "fraction_changed"
ROUTE710.toNode = "Stop_r_acromioclavicular_RotationInterpolator"
ROUTE710.toField = "set_fraction"

Scene33.children.append(ROUTE710)
ROUTE711 = x3d.ROUTE()
ROUTE711.fromNode = "StopTimer"
ROUTE711.fromField = "fraction_changed"
ROUTE711.toNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE711.toField = "set_fraction"

Scene33.children.append(ROUTE711)
ROUTE712 = x3d.ROUTE()
ROUTE712.fromNode = "StopTimer"
ROUTE712.fromField = "fraction_changed"
ROUTE712.toNode = "Stop_r_elbow_RotationInterpolator"
ROUTE712.toField = "set_fraction"

Scene33.children.append(ROUTE712)
ROUTE713 = x3d.ROUTE()
ROUTE713.fromNode = "StopTimer"
ROUTE713.fromField = "fraction_changed"
ROUTE713.toNode = "Stop_r_wrist_RotationInterpolator"
ROUTE713.toField = "set_fraction"

Scene33.children.append(ROUTE713)
ROUTE714 = x3d.ROUTE()
ROUTE714.fromNode = "StopTimer"
ROUTE714.fromField = "fraction_changed"
ROUTE714.toNode = "Stop_r_thumb1_RotationInterpolator"
ROUTE714.toField = "set_fraction"

Scene33.children.append(ROUTE714)
ROUTE715 = x3d.ROUTE()
ROUTE715.fromNode = "StopTimer"
ROUTE715.fromField = "fraction_changed"
ROUTE715.toNode = "Stop_r_thumb2_RotationInterpolator"
ROUTE715.toField = "set_fraction"

Scene33.children.append(ROUTE715)
ROUTE716 = x3d.ROUTE()
ROUTE716.fromNode = "StopTimer"
ROUTE716.fromField = "fraction_changed"
ROUTE716.toNode = "Stop_r_thumb3_RotationInterpolator"
ROUTE716.toField = "set_fraction"

Scene33.children.append(ROUTE716)
ROUTE717 = x3d.ROUTE()
ROUTE717.fromNode = "StopTimer"
ROUTE717.fromField = "fraction_changed"
ROUTE717.toNode = "Stop_r_index0_RotationInterpolator"
ROUTE717.toField = "set_fraction"

Scene33.children.append(ROUTE717)
ROUTE718 = x3d.ROUTE()
ROUTE718.fromNode = "StopTimer"
ROUTE718.fromField = "fraction_changed"
ROUTE718.toNode = "Stop_r_index1_RotationInterpolator"
ROUTE718.toField = "set_fraction"

Scene33.children.append(ROUTE718)
ROUTE719 = x3d.ROUTE()
ROUTE719.fromNode = "StopTimer"
ROUTE719.fromField = "fraction_changed"
ROUTE719.toNode = "Stop_r_index2_RotationInterpolator"
ROUTE719.toField = "set_fraction"

Scene33.children.append(ROUTE719)
ROUTE720 = x3d.ROUTE()
ROUTE720.fromNode = "StopTimer"
ROUTE720.fromField = "fraction_changed"
ROUTE720.toNode = "Stop_r_index3_RotationInterpolator"
ROUTE720.toField = "set_fraction"

Scene33.children.append(ROUTE720)
ROUTE721 = x3d.ROUTE()
ROUTE721.fromNode = "StopTimer"
ROUTE721.fromField = "fraction_changed"
ROUTE721.toNode = "Stop_r_middle0_RotationInterpolator"
ROUTE721.toField = "set_fraction"

Scene33.children.append(ROUTE721)
ROUTE722 = x3d.ROUTE()
ROUTE722.fromNode = "StopTimer"
ROUTE722.fromField = "fraction_changed"
ROUTE722.toNode = "Stop_r_middle1_RotationInterpolator"
ROUTE722.toField = "set_fraction"

Scene33.children.append(ROUTE722)
ROUTE723 = x3d.ROUTE()
ROUTE723.fromNode = "StopTimer"
ROUTE723.fromField = "fraction_changed"
ROUTE723.toNode = "Stop_r_middle2_RotationInterpolator"
ROUTE723.toField = "set_fraction"

Scene33.children.append(ROUTE723)
ROUTE724 = x3d.ROUTE()
ROUTE724.fromNode = "StopTimer"
ROUTE724.fromField = "fraction_changed"
ROUTE724.toNode = "Stop_r_middle3_RotationInterpolator"
ROUTE724.toField = "set_fraction"

Scene33.children.append(ROUTE724)
ROUTE725 = x3d.ROUTE()
ROUTE725.fromNode = "StopTimer"
ROUTE725.fromField = "fraction_changed"
ROUTE725.toNode = "Stop_r_ring0_RotationInterpolator"
ROUTE725.toField = "set_fraction"

Scene33.children.append(ROUTE725)
ROUTE726 = x3d.ROUTE()
ROUTE726.fromNode = "StopTimer"
ROUTE726.fromField = "fraction_changed"
ROUTE726.toNode = "Stop_r_ring1_RotationInterpolator"
ROUTE726.toField = "set_fraction"

Scene33.children.append(ROUTE726)
ROUTE727 = x3d.ROUTE()
ROUTE727.fromNode = "StopTimer"
ROUTE727.fromField = "fraction_changed"
ROUTE727.toNode = "Stop_r_ring2_RotationInterpolator"
ROUTE727.toField = "set_fraction"

Scene33.children.append(ROUTE727)
ROUTE728 = x3d.ROUTE()
ROUTE728.fromNode = "StopTimer"
ROUTE728.fromField = "fraction_changed"
ROUTE728.toNode = "Stop_r_ring3_RotationInterpolator"
ROUTE728.toField = "set_fraction"

Scene33.children.append(ROUTE728)
ROUTE729 = x3d.ROUTE()
ROUTE729.fromNode = "StopTimer"
ROUTE729.fromField = "fraction_changed"
ROUTE729.toNode = "Stop_r_pinky0_RotationInterpolator"
ROUTE729.toField = "set_fraction"

Scene33.children.append(ROUTE729)
ROUTE730 = x3d.ROUTE()
ROUTE730.fromNode = "StopTimer"
ROUTE730.fromField = "fraction_changed"
ROUTE730.toNode = "Stop_r_pinky1_RotationInterpolator"
ROUTE730.toField = "set_fraction"

Scene33.children.append(ROUTE730)
ROUTE731 = x3d.ROUTE()
ROUTE731.fromNode = "StopTimer"
ROUTE731.fromField = "fraction_changed"
ROUTE731.toNode = "Stop_r_pinky2_RotationInterpolator"
ROUTE731.toField = "set_fraction"

Scene33.children.append(ROUTE731)
ROUTE732 = x3d.ROUTE()
ROUTE732.fromNode = "StopTimer"
ROUTE732.fromField = "fraction_changed"
ROUTE732.toNode = "Stop_r_pinky3_RotationInterpolator"
ROUTE732.toField = "set_fraction"

Scene33.children.append(ROUTE732)
ROUTE733 = x3d.ROUTE()
ROUTE733.fromNode = "Stop_humanoid_root_TranslationInterpolator"
ROUTE733.fromField = "value_changed"
ROUTE733.toNode = "boxman_humanoid_root"
ROUTE733.toField = "set_translation"

Scene33.children.append(ROUTE733)
ROUTE734 = x3d.ROUTE()
ROUTE734.fromNode = "Stop_humanoid_root_RotationInterpolator"
ROUTE734.fromField = "value_changed"
ROUTE734.toNode = "boxman_humanoid_root"
ROUTE734.toField = "set_rotation"

Scene33.children.append(ROUTE734)
ROUTE735 = x3d.ROUTE()
ROUTE735.fromNode = "Stop_l_hip_RotationInterpolator"
ROUTE735.fromField = "value_changed"
ROUTE735.toNode = "boxman_l_hip"
ROUTE735.toField = "set_rotation"

Scene33.children.append(ROUTE735)
ROUTE736 = x3d.ROUTE()
ROUTE736.fromNode = "Stop_l_knee_RotationInterpolator"
ROUTE736.fromField = "value_changed"
ROUTE736.toNode = "boxman_l_knee"
ROUTE736.toField = "set_rotation"

Scene33.children.append(ROUTE736)
ROUTE737 = x3d.ROUTE()
ROUTE737.fromNode = "Stop_l_ankle_RotationInterpolator"
ROUTE737.fromField = "value_changed"
ROUTE737.toNode = "boxman_l_ankle"
ROUTE737.toField = "set_rotation"

Scene33.children.append(ROUTE737)
ROUTE738 = x3d.ROUTE()
ROUTE738.fromNode = "Stop_l_midtarsal_RotationInterpolator"
ROUTE738.fromField = "value_changed"
ROUTE738.toNode = "boxman_l_midtarsal"
ROUTE738.toField = "set_rotation"

Scene33.children.append(ROUTE738)
ROUTE739 = x3d.ROUTE()
ROUTE739.fromNode = "Stop_r_hip_RotationInterpolator"
ROUTE739.fromField = "value_changed"
ROUTE739.toNode = "boxman_r_hip"
ROUTE739.toField = "set_rotation"

Scene33.children.append(ROUTE739)
ROUTE740 = x3d.ROUTE()
ROUTE740.fromNode = "Stop_r_knee_RotationInterpolator"
ROUTE740.fromField = "value_changed"
ROUTE740.toNode = "boxman_r_knee"
ROUTE740.toField = "set_rotation"

Scene33.children.append(ROUTE740)
ROUTE741 = x3d.ROUTE()
ROUTE741.fromNode = "Stop_r_ankle_RotationInterpolator"
ROUTE741.fromField = "value_changed"
ROUTE741.toNode = "boxman_r_ankle"
ROUTE741.toField = "set_rotation"

Scene33.children.append(ROUTE741)
ROUTE742 = x3d.ROUTE()
ROUTE742.fromNode = "Stop_r_midtarsal_RotationInterpolator"
ROUTE742.fromField = "value_changed"
ROUTE742.toNode = "boxman_r_midtarsal"
ROUTE742.toField = "set_rotation"

Scene33.children.append(ROUTE742)
ROUTE743 = x3d.ROUTE()
ROUTE743.fromNode = "Stop_vl5_RotationInterpolator"
ROUTE743.fromField = "value_changed"
ROUTE743.toNode = "boxman_vl5"
ROUTE743.toField = "set_rotation"

Scene33.children.append(ROUTE743)
ROUTE744 = x3d.ROUTE()
ROUTE744.fromNode = "Stop_skullbase_RotationInterpolator"
ROUTE744.fromField = "value_changed"
ROUTE744.toNode = "boxman_skullbase"
ROUTE744.toField = "set_rotation"

Scene33.children.append(ROUTE744)
ROUTE745 = x3d.ROUTE()
ROUTE745.fromNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE745.fromField = "value_changed"
ROUTE745.toNode = "boxman_l_shoulder"
ROUTE745.toField = "set_rotation"

Scene33.children.append(ROUTE745)
ROUTE746 = x3d.ROUTE()
ROUTE746.fromNode = "Stop_l_elbow_RotationInterpolator"
ROUTE746.fromField = "value_changed"
ROUTE746.toNode = "boxman_l_elbow"
ROUTE746.toField = "set_rotation"

Scene33.children.append(ROUTE746)
ROUTE747 = x3d.ROUTE()
ROUTE747.fromNode = "Stop_l_wrist_RotationInterpolator"
ROUTE747.fromField = "value_changed"
ROUTE747.toNode = "boxman_l_wrist"
ROUTE747.toField = "set_rotation"

Scene33.children.append(ROUTE747)
ROUTE748 = x3d.ROUTE()
ROUTE748.fromNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE748.fromField = "value_changed"
ROUTE748.toNode = "boxman_r_shoulder"
ROUTE748.toField = "set_rotation"

Scene33.children.append(ROUTE748)
ROUTE749 = x3d.ROUTE()
ROUTE749.fromNode = "Stop_r_elbow_RotationInterpolator"
ROUTE749.fromField = "value_changed"
ROUTE749.toNode = "boxman_r_elbow"
ROUTE749.toField = "set_rotation"

Scene33.children.append(ROUTE749)
ROUTE750 = x3d.ROUTE()
ROUTE750.fromNode = "Stop_r_wrist_RotationInterpolator"
ROUTE750.fromField = "value_changed"
ROUTE750.toNode = "boxman_r_wrist"
ROUTE750.toField = "set_rotation"

Scene33.children.append(ROUTE750)
ROUTE751 = x3d.ROUTE()
ROUTE751.fromNode = "StandTimer"
ROUTE751.fromField = "fraction_changed"
ROUTE751.toNode = "Stand_r_ankle_RotationInterpolator"
ROUTE751.toField = "set_fraction"

Scene33.children.append(ROUTE751)
ROUTE752 = x3d.ROUTE()
ROUTE752.fromNode = "StandTimer"
ROUTE752.fromField = "fraction_changed"
ROUTE752.toNode = "Stand_r_knee_RotationInterpolator"
ROUTE752.toField = "set_fraction"

Scene33.children.append(ROUTE752)
ROUTE753 = x3d.ROUTE()
ROUTE753.fromNode = "StandTimer"
ROUTE753.fromField = "fraction_changed"
ROUTE753.toNode = "Stand_r_hip_RotationInterpolator"
ROUTE753.toField = "set_fraction"

Scene33.children.append(ROUTE753)
ROUTE754 = x3d.ROUTE()
ROUTE754.fromNode = "StandTimer"
ROUTE754.fromField = "fraction_changed"
ROUTE754.toNode = "Stand_l_ankle_RotationInterpolator"
ROUTE754.toField = "set_fraction"

Scene33.children.append(ROUTE754)
ROUTE755 = x3d.ROUTE()
ROUTE755.fromNode = "StandTimer"
ROUTE755.fromField = "fraction_changed"
ROUTE755.toNode = "Stand_l_knee_RotationInterpolator"
ROUTE755.toField = "set_fraction"

Scene33.children.append(ROUTE755)
ROUTE756 = x3d.ROUTE()
ROUTE756.fromNode = "StandTimer"
ROUTE756.fromField = "fraction_changed"
ROUTE756.toNode = "Stand_l_hip_RotationInterpolator"
ROUTE756.toField = "set_fraction"

Scene33.children.append(ROUTE756)
ROUTE757 = x3d.ROUTE()
ROUTE757.fromNode = "StandTimer"
ROUTE757.fromField = "fraction_changed"
ROUTE757.toNode = "Stand_lower_body_RotationInterpolator"
ROUTE757.toField = "set_fraction"

Scene33.children.append(ROUTE757)
ROUTE758 = x3d.ROUTE()
ROUTE758.fromNode = "StandTimer"
ROUTE758.fromField = "fraction_changed"
ROUTE758.toNode = "Stand_r_wrist_RotationInterpolator"
ROUTE758.toField = "set_fraction"

Scene33.children.append(ROUTE758)
ROUTE759 = x3d.ROUTE()
ROUTE759.fromNode = "StandTimer"
ROUTE759.fromField = "fraction_changed"
ROUTE759.toNode = "Stand_r_elbow_RotationInterpolator"
ROUTE759.toField = "set_fraction"

Scene33.children.append(ROUTE759)
ROUTE760 = x3d.ROUTE()
ROUTE760.fromNode = "StandTimer"
ROUTE760.fromField = "fraction_changed"
ROUTE760.toNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE760.toField = "set_fraction"

Scene33.children.append(ROUTE760)
ROUTE761 = x3d.ROUTE()
ROUTE761.fromNode = "StandTimer"
ROUTE761.fromField = "fraction_changed"
ROUTE761.toNode = "Stand_l_wrist_RotationInterpolator"
ROUTE761.toField = "set_fraction"

Scene33.children.append(ROUTE761)
ROUTE762 = x3d.ROUTE()
ROUTE762.fromNode = "StandTimer"
ROUTE762.fromField = "fraction_changed"
ROUTE762.toNode = "Stand_l_elbow_RotationInterpolator"
ROUTE762.toField = "set_fraction"

Scene33.children.append(ROUTE762)
ROUTE763 = x3d.ROUTE()
ROUTE763.fromNode = "StandTimer"
ROUTE763.fromField = "fraction_changed"
ROUTE763.toNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE763.toField = "set_fraction"

Scene33.children.append(ROUTE763)
ROUTE764 = x3d.ROUTE()
ROUTE764.fromNode = "StandTimer"
ROUTE764.fromField = "fraction_changed"
ROUTE764.toNode = "Stand_head_RotationInterpolator"
ROUTE764.toField = "set_fraction"

Scene33.children.append(ROUTE764)
ROUTE765 = x3d.ROUTE()
ROUTE765.fromNode = "StandTimer"
ROUTE765.fromField = "fraction_changed"
ROUTE765.toNode = "Stand_neck_RotationInterpolator"
ROUTE765.toField = "set_fraction"

Scene33.children.append(ROUTE765)
ROUTE766 = x3d.ROUTE()
ROUTE766.fromNode = "StandTimer"
ROUTE766.fromField = "fraction_changed"
ROUTE766.toNode = "Stand_l_eyeball_RotationInterpolator"
ROUTE766.toField = "set_fraction"

Scene33.children.append(ROUTE766)
ROUTE767 = x3d.ROUTE()
ROUTE767.fromNode = "StandTimer"
ROUTE767.fromField = "fraction_changed"
ROUTE767.toNode = "Stand_r_eyeball_RotationInterpolator"
ROUTE767.toField = "set_fraction"

Scene33.children.append(ROUTE767)
ROUTE768 = x3d.ROUTE()
ROUTE768.fromNode = "StandTimer"
ROUTE768.fromField = "fraction_changed"
ROUTE768.toNode = "Stand_upper_body_RotationInterpolator"
ROUTE768.toField = "set_fraction"

Scene33.children.append(ROUTE768)
ROUTE769 = x3d.ROUTE()
ROUTE769.fromNode = "StandTimer"
ROUTE769.fromField = "fraction_changed"
ROUTE769.toNode = "Stand_whole_body_RotationInterpolator"
ROUTE769.toField = "set_fraction"

Scene33.children.append(ROUTE769)
ROUTE770 = x3d.ROUTE()
ROUTE770.fromNode = "StandTimer"
ROUTE770.fromField = "fraction_changed"
ROUTE770.toNode = "Stand_whole_body_TranslationInterpolator"
ROUTE770.toField = "set_fraction"

Scene33.children.append(ROUTE770)
ROUTE771 = x3d.ROUTE()
ROUTE771.fromNode = "StandTimer"
ROUTE771.fromField = "fraction_changed"
ROUTE771.toNode = "Stand_l_sternoclavicular_RollInterpolator"
ROUTE771.toField = "set_fraction"

Scene33.children.append(ROUTE771)
ROUTE772 = x3d.ROUTE()
ROUTE772.fromNode = "StandTimer"
ROUTE772.fromField = "fraction_changed"
ROUTE772.toNode = "Stand_l_acromioclavicular_RollInterpolator"
ROUTE772.toField = "set_fraction"

Scene33.children.append(ROUTE772)
ROUTE773 = x3d.ROUTE()
ROUTE773.fromNode = "StandTimer"
ROUTE773.fromField = "fraction_changed"
ROUTE773.toNode = "Stand_r_sternoclavicular_RollInterpolator"
ROUTE773.toField = "set_fraction"

Scene33.children.append(ROUTE773)
ROUTE774 = x3d.ROUTE()
ROUTE774.fromNode = "StandTimer"
ROUTE774.fromField = "fraction_changed"
ROUTE774.toNode = "Stand_r_acromioclavicular_RollInterpolator"
ROUTE774.toField = "set_fraction"

Scene33.children.append(ROUTE774)
ROUTE775 = x3d.ROUTE()
ROUTE775.fromNode = "StandTimer"
ROUTE775.fromField = "fraction_changed"
ROUTE775.toNode = "Stand_r_metatarsal_PitchInterpolator"
ROUTE775.toField = "set_fraction"

Scene33.children.append(ROUTE775)
ROUTE776 = x3d.ROUTE()
ROUTE776.fromNode = "StandTimer"
ROUTE776.fromField = "fraction_changed"
ROUTE776.toNode = "Stand_sacroiliac_YawInterpolator"
ROUTE776.toField = "set_fraction"

Scene33.children.append(ROUTE776)
ROUTE777 = x3d.ROUTE()
ROUTE777.fromNode = "StandTimer"
ROUTE777.fromField = "fraction_changed"
ROUTE777.toNode = "Stand_vl5_YawInterpolator"
ROUTE777.toField = "set_fraction"

Scene33.children.append(ROUTE777)
ROUTE778 = x3d.ROUTE()
ROUTE778.fromNode = "StandTimer"
ROUTE778.fromField = "fraction_changed"
ROUTE778.toNode = "Stand_vc6_YawInterpolator"
ROUTE778.toField = "set_fraction"

Scene33.children.append(ROUTE778)
ROUTE779 = x3d.ROUTE()
ROUTE779.fromNode = "StandTimer"
ROUTE779.fromField = "fraction_changed"
ROUTE779.toNode = "Stand_l_thumb1_PitchInterpolator"
ROUTE779.toField = "set_fraction"

Scene33.children.append(ROUTE779)
ROUTE780 = x3d.ROUTE()
ROUTE780.fromNode = "StandTimer"
ROUTE780.fromField = "fraction_changed"
ROUTE780.toNode = "Stand_r_thumb1_PitchInterpolator"
ROUTE780.toField = "set_fraction"

Scene33.children.append(ROUTE780)
ROUTE781 = x3d.ROUTE()
ROUTE781.fromNode = "StandTimer"
ROUTE781.fromField = "fraction_changed"
ROUTE781.toNode = "Stand_r_index1_RollInterpolator"
ROUTE781.toField = "set_fraction"

Scene33.children.append(ROUTE781)
ROUTE782 = x3d.ROUTE()
ROUTE782.fromNode = "StandTimer"
ROUTE782.fromField = "fraction_changed"
ROUTE782.toNode = "Stand_r_index2_RollInterpolator"
ROUTE782.toField = "set_fraction"

Scene33.children.append(ROUTE782)
ROUTE783 = x3d.ROUTE()
ROUTE783.fromNode = "StandTimer"
ROUTE783.fromField = "fraction_changed"
ROUTE783.toNode = "Stand_r_index3_RollInterpolator"
ROUTE783.toField = "set_fraction"

Scene33.children.append(ROUTE783)
ROUTE784 = x3d.ROUTE()
ROUTE784.fromNode = "Stand_r_ankle_RotationInterpolator"
ROUTE784.fromField = "value_changed"
ROUTE784.toNode = "boxman_r_ankle"
ROUTE784.toField = "set_rotation"

Scene33.children.append(ROUTE784)
ROUTE785 = x3d.ROUTE()
ROUTE785.fromNode = "Stand_r_knee_RotationInterpolator"
ROUTE785.fromField = "value_changed"
ROUTE785.toNode = "boxman_r_knee"
ROUTE785.toField = "set_rotation"

Scene33.children.append(ROUTE785)
ROUTE786 = x3d.ROUTE()
ROUTE786.fromNode = "Stand_r_hip_RotationInterpolator"
ROUTE786.fromField = "value_changed"
ROUTE786.toNode = "boxman_r_hip"
ROUTE786.toField = "set_rotation"

Scene33.children.append(ROUTE786)
ROUTE787 = x3d.ROUTE()
ROUTE787.fromNode = "Stand_l_ankle_RotationInterpolator"
ROUTE787.fromField = "value_changed"
ROUTE787.toNode = "boxman_l_ankle"
ROUTE787.toField = "set_rotation"

Scene33.children.append(ROUTE787)
ROUTE788 = x3d.ROUTE()
ROUTE788.fromNode = "Stand_l_knee_RotationInterpolator"
ROUTE788.fromField = "value_changed"
ROUTE788.toNode = "boxman_l_knee"
ROUTE788.toField = "set_rotation"

Scene33.children.append(ROUTE788)
ROUTE789 = x3d.ROUTE()
ROUTE789.fromNode = "Stand_l_hip_RotationInterpolator"
ROUTE789.fromField = "value_changed"
ROUTE789.toNode = "boxman_l_hip"
ROUTE789.toField = "set_rotation"

Scene33.children.append(ROUTE789)
ROUTE790 = x3d.ROUTE()
ROUTE790.fromNode = "Stand_r_wrist_RotationInterpolator"
ROUTE790.fromField = "value_changed"
ROUTE790.toNode = "boxman_r_wrist"
ROUTE790.toField = "set_rotation"

Scene33.children.append(ROUTE790)
ROUTE791 = x3d.ROUTE()
ROUTE791.fromNode = "Stand_r_elbow_RotationInterpolator"
ROUTE791.fromField = "value_changed"
ROUTE791.toNode = "boxman_r_elbow"
ROUTE791.toField = "set_rotation"

Scene33.children.append(ROUTE791)
ROUTE792 = x3d.ROUTE()
ROUTE792.fromNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE792.fromField = "value_changed"
ROUTE792.toNode = "boxman_r_shoulder"
ROUTE792.toField = "set_rotation"

Scene33.children.append(ROUTE792)
ROUTE793 = x3d.ROUTE()
ROUTE793.fromNode = "Stand_l_wrist_RotationInterpolator"
ROUTE793.fromField = "value_changed"
ROUTE793.toNode = "boxman_l_wrist"
ROUTE793.toField = "set_rotation"

Scene33.children.append(ROUTE793)
ROUTE794 = x3d.ROUTE()
ROUTE794.fromNode = "Stand_l_elbow_RotationInterpolator"
ROUTE794.fromField = "value_changed"
ROUTE794.toNode = "boxman_l_elbow"
ROUTE794.toField = "set_rotation"

Scene33.children.append(ROUTE794)
ROUTE795 = x3d.ROUTE()
ROUTE795.fromNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE795.fromField = "value_changed"
ROUTE795.toNode = "boxman_l_shoulder"
ROUTE795.toField = "set_rotation"

Scene33.children.append(ROUTE795)
ROUTE796 = x3d.ROUTE()
ROUTE796.fromNode = "Stand_head_RotationInterpolator"
ROUTE796.fromField = "value_changed"
ROUTE796.toNode = "boxman_skullbase"
ROUTE796.toField = "set_rotation"

Scene33.children.append(ROUTE796)
ROUTE797 = x3d.ROUTE()
ROUTE797.fromNode = "Stand_whole_body_RotationInterpolator"
ROUTE797.fromField = "value_changed"
ROUTE797.toNode = "boxman_humanoid_root"
ROUTE797.toField = "set_rotation"

Scene33.children.append(ROUTE797)
ROUTE798 = x3d.ROUTE()
ROUTE798.fromNode = "Stand_whole_body_TranslationInterpolator"
ROUTE798.fromField = "value_changed"
ROUTE798.toNode = "boxman_humanoid_root"
ROUTE798.toField = "set_translation"

Scene33.children.append(ROUTE798)
ROUTE799 = x3d.ROUTE()
ROUTE799.fromNode = "Stand_vl5_YawInterpolator"
ROUTE799.fromField = "value_changed"
ROUTE799.toNode = "boxman_vl5"
ROUTE799.toField = "set_rotation"

Scene33.children.append(ROUTE799)
ROUTE800 = x3d.ROUTE()
ROUTE800.fromNode = "PitchTimer"
ROUTE800.fromField = "fraction_changed"
ROUTE800.toNode = "Pitches_r_ankle_RotationInterpolator"
ROUTE800.toField = "set_fraction"

Scene33.children.append(ROUTE800)
ROUTE801 = x3d.ROUTE()
ROUTE801.fromNode = "PitchTimer"
ROUTE801.fromField = "fraction_changed"
ROUTE801.toNode = "Pitches_r_knee_RotationInterpolator"
ROUTE801.toField = "set_fraction"

Scene33.children.append(ROUTE801)
ROUTE802 = x3d.ROUTE()
ROUTE802.fromNode = "PitchTimer"
ROUTE802.fromField = "fraction_changed"
ROUTE802.toNode = "Pitches_r_hip_RotationInterpolator"
ROUTE802.toField = "set_fraction"

Scene33.children.append(ROUTE802)
ROUTE803 = x3d.ROUTE()
ROUTE803.fromNode = "PitchTimer"
ROUTE803.fromField = "fraction_changed"
ROUTE803.toNode = "Pitches_l_ankle_RotationInterpolator"
ROUTE803.toField = "set_fraction"

Scene33.children.append(ROUTE803)
ROUTE804 = x3d.ROUTE()
ROUTE804.fromNode = "PitchTimer"
ROUTE804.fromField = "fraction_changed"
ROUTE804.toNode = "Pitches_l_knee_RotationInterpolator"
ROUTE804.toField = "set_fraction"

Scene33.children.append(ROUTE804)
ROUTE805 = x3d.ROUTE()
ROUTE805.fromNode = "PitchTimer"
ROUTE805.fromField = "fraction_changed"
ROUTE805.toNode = "Pitches_l_hip_RotationInterpolator"
ROUTE805.toField = "set_fraction"

Scene33.children.append(ROUTE805)
ROUTE806 = x3d.ROUTE()
ROUTE806.fromNode = "PitchTimer"
ROUTE806.fromField = "fraction_changed"
ROUTE806.toNode = "Pitches_lower_body_RotationInterpolator"
ROUTE806.toField = "set_fraction"

Scene33.children.append(ROUTE806)
ROUTE807 = x3d.ROUTE()
ROUTE807.fromNode = "PitchTimer"
ROUTE807.fromField = "fraction_changed"
ROUTE807.toNode = "Pitches_r_wrist_RotationInterpolator"
ROUTE807.toField = "set_fraction"

Scene33.children.append(ROUTE807)
ROUTE808 = x3d.ROUTE()
ROUTE808.fromNode = "PitchTimer"
ROUTE808.fromField = "fraction_changed"
ROUTE808.toNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE808.toField = "set_fraction"

Scene33.children.append(ROUTE808)
ROUTE809 = x3d.ROUTE()
ROUTE809.fromNode = "PitchTimer"
ROUTE809.fromField = "fraction_changed"
ROUTE809.toNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE809.toField = "set_fraction"

Scene33.children.append(ROUTE809)
ROUTE810 = x3d.ROUTE()
ROUTE810.fromNode = "PitchTimer"
ROUTE810.fromField = "fraction_changed"
ROUTE810.toNode = "Pitches_l_wrist_RotationInterpolator"
ROUTE810.toField = "set_fraction"

Scene33.children.append(ROUTE810)
ROUTE811 = x3d.ROUTE()
ROUTE811.fromNode = "PitchTimer"
ROUTE811.fromField = "fraction_changed"
ROUTE811.toNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE811.toField = "set_fraction"

Scene33.children.append(ROUTE811)
ROUTE812 = x3d.ROUTE()
ROUTE812.fromNode = "PitchTimer"
ROUTE812.fromField = "fraction_changed"
ROUTE812.toNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE812.toField = "set_fraction"

Scene33.children.append(ROUTE812)
ROUTE813 = x3d.ROUTE()
ROUTE813.fromNode = "PitchTimer"
ROUTE813.fromField = "fraction_changed"
ROUTE813.toNode = "Pitches_head_RotationInterpolator"
ROUTE813.toField = "set_fraction"

Scene33.children.append(ROUTE813)
ROUTE814 = x3d.ROUTE()
ROUTE814.fromNode = "PitchTimer"
ROUTE814.fromField = "fraction_changed"
ROUTE814.toNode = "Pitches_neck_RotationInterpolator"
ROUTE814.toField = "set_fraction"

Scene33.children.append(ROUTE814)
ROUTE815 = x3d.ROUTE()
ROUTE815.fromNode = "PitchTimer"
ROUTE815.fromField = "fraction_changed"
ROUTE815.toNode = "Pitches_upper_body_RotationInterpolator"
ROUTE815.toField = "set_fraction"

Scene33.children.append(ROUTE815)
ROUTE816 = x3d.ROUTE()
ROUTE816.fromNode = "PitchTimer"
ROUTE816.fromField = "fraction_changed"
ROUTE816.toNode = "Pitches_whole_body_RotationInterpolator"
ROUTE816.toField = "set_fraction"

Scene33.children.append(ROUTE816)
ROUTE817 = x3d.ROUTE()
ROUTE817.fromNode = "PitchTimer"
ROUTE817.fromField = "fraction_changed"
ROUTE817.toNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE817.toField = "set_fraction"

Scene33.children.append(ROUTE817)
ROUTE818 = x3d.ROUTE()
ROUTE818.fromNode = "PitchTimer"
ROUTE818.fromField = "fraction_changed"
ROUTE818.toNode = "Pitch_l_sternoclavicular_RollInterpolator"
ROUTE818.toField = "set_fraction"

Scene33.children.append(ROUTE818)
ROUTE819 = x3d.ROUTE()
ROUTE819.fromNode = "PitchTimer"
ROUTE819.fromField = "fraction_changed"
ROUTE819.toNode = "Pitch_l_acromioclavicular_RollInterpolator"
ROUTE819.toField = "set_fraction"

Scene33.children.append(ROUTE819)
ROUTE820 = x3d.ROUTE()
ROUTE820.fromNode = "PitchTimer"
ROUTE820.fromField = "fraction_changed"
ROUTE820.toNode = "Pitch_r_sternoclavicular_RollInterpolator"
ROUTE820.toField = "set_fraction"

Scene33.children.append(ROUTE820)
ROUTE821 = x3d.ROUTE()
ROUTE821.fromNode = "PitchTimer"
ROUTE821.fromField = "fraction_changed"
ROUTE821.toNode = "Pitch_r_acromioclavicular_RollInterpolator"
ROUTE821.toField = "set_fraction"

Scene33.children.append(ROUTE821)
ROUTE822 = x3d.ROUTE()
ROUTE822.fromNode = "PitchTimer"
ROUTE822.fromField = "fraction_changed"
ROUTE822.toNode = "Pitch_r_metatarsal_PitchInterpolator"
ROUTE822.toField = "set_fraction"

Scene33.children.append(ROUTE822)
ROUTE823 = x3d.ROUTE()
ROUTE823.fromNode = "PitchTimer"
ROUTE823.fromField = "fraction_changed"
ROUTE823.toNode = "Pitch_sacroiliac_YawInterpolator"
ROUTE823.toField = "set_fraction"

Scene33.children.append(ROUTE823)
ROUTE824 = x3d.ROUTE()
ROUTE824.fromNode = "PitchTimer"
ROUTE824.fromField = "fraction_changed"
ROUTE824.toNode = "Pitch_vl5_YawInterpolator"
ROUTE824.toField = "set_fraction"

Scene33.children.append(ROUTE824)
ROUTE825 = x3d.ROUTE()
ROUTE825.fromNode = "PitchTimer"
ROUTE825.fromField = "fraction_changed"
ROUTE825.toNode = "Pitch_vc6_YawInterpolator"
ROUTE825.toField = "set_fraction"

Scene33.children.append(ROUTE825)
ROUTE826 = x3d.ROUTE()
ROUTE826.fromNode = "PitchTimer"
ROUTE826.fromField = "fraction_changed"
ROUTE826.toNode = "Pitch_l_thumb1_PitchInterpolator"
ROUTE826.toField = "set_fraction"

Scene33.children.append(ROUTE826)
ROUTE827 = x3d.ROUTE()
ROUTE827.fromNode = "PitchTimer"
ROUTE827.fromField = "fraction_changed"
ROUTE827.toNode = "Pitch_r_thumb1_PitchInterpolator"
ROUTE827.toField = "set_fraction"

Scene33.children.append(ROUTE827)
ROUTE828 = x3d.ROUTE()
ROUTE828.fromNode = "Pitches_r_ankle_RotationInterpolator"
ROUTE828.fromField = "value_changed"
ROUTE828.toNode = "boxman_r_ankle"
ROUTE828.toField = "set_rotation"

Scene33.children.append(ROUTE828)
ROUTE829 = x3d.ROUTE()
ROUTE829.fromNode = "Pitches_r_knee_RotationInterpolator"
ROUTE829.fromField = "value_changed"
ROUTE829.toNode = "boxman_r_knee"
ROUTE829.toField = "set_rotation"

Scene33.children.append(ROUTE829)
ROUTE830 = x3d.ROUTE()
ROUTE830.fromNode = "Pitches_r_hip_RotationInterpolator"
ROUTE830.fromField = "value_changed"
ROUTE830.toNode = "boxman_r_hip"
ROUTE830.toField = "set_rotation"

Scene33.children.append(ROUTE830)
ROUTE831 = x3d.ROUTE()
ROUTE831.fromNode = "Pitches_l_ankle_RotationInterpolator"
ROUTE831.fromField = "value_changed"
ROUTE831.toNode = "boxman_l_ankle"
ROUTE831.toField = "set_rotation"

Scene33.children.append(ROUTE831)
ROUTE832 = x3d.ROUTE()
ROUTE832.fromNode = "Pitches_l_knee_RotationInterpolator"
ROUTE832.fromField = "value_changed"
ROUTE832.toNode = "boxman_l_knee"
ROUTE832.toField = "set_rotation"

Scene33.children.append(ROUTE832)
ROUTE833 = x3d.ROUTE()
ROUTE833.fromNode = "Pitches_l_hip_RotationInterpolator"
ROUTE833.fromField = "value_changed"
ROUTE833.toNode = "boxman_l_hip"
ROUTE833.toField = "set_rotation"

Scene33.children.append(ROUTE833)
ROUTE834 = x3d.ROUTE()
ROUTE834.fromNode = "Pitches_r_wrist_RotationInterpolator"
ROUTE834.fromField = "value_changed"
ROUTE834.toNode = "boxman_r_wrist"
ROUTE834.toField = "set_rotation"

Scene33.children.append(ROUTE834)
ROUTE835 = x3d.ROUTE()
ROUTE835.fromNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE835.fromField = "value_changed"
ROUTE835.toNode = "boxman_r_elbow"
ROUTE835.toField = "set_rotation"

Scene33.children.append(ROUTE835)
ROUTE836 = x3d.ROUTE()
ROUTE836.fromNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE836.fromField = "value_changed"
ROUTE836.toNode = "boxman_r_shoulder"
ROUTE836.toField = "set_rotation"

Scene33.children.append(ROUTE836)
ROUTE837 = x3d.ROUTE()
ROUTE837.fromNode = "Pitches_l_wrist_RotationInterpolator"
ROUTE837.fromField = "value_changed"
ROUTE837.toNode = "boxman_l_wrist"
ROUTE837.toField = "set_rotation"

Scene33.children.append(ROUTE837)
ROUTE838 = x3d.ROUTE()
ROUTE838.fromNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE838.fromField = "value_changed"
ROUTE838.toNode = "boxman_l_elbow"
ROUTE838.toField = "set_rotation"

Scene33.children.append(ROUTE838)
ROUTE839 = x3d.ROUTE()
ROUTE839.fromNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE839.fromField = "value_changed"
ROUTE839.toNode = "boxman_l_shoulder"
ROUTE839.toField = "set_rotation"

Scene33.children.append(ROUTE839)
ROUTE840 = x3d.ROUTE()
ROUTE840.fromNode = "Pitches_head_RotationInterpolator"
ROUTE840.fromField = "value_changed"
ROUTE840.toNode = "boxman_skullbase"
ROUTE840.toField = "set_rotation"

Scene33.children.append(ROUTE840)
ROUTE841 = x3d.ROUTE()
ROUTE841.fromNode = "Pitches_whole_body_RotationInterpolator"
ROUTE841.fromField = "value_changed"
ROUTE841.toNode = "boxman_humanoid_root"
ROUTE841.toField = "set_rotation"

Scene33.children.append(ROUTE841)
ROUTE842 = x3d.ROUTE()
ROUTE842.fromNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE842.fromField = "value_changed"
ROUTE842.toNode = "boxman_humanoid_root"
ROUTE842.toField = "set_translation"

Scene33.children.append(ROUTE842)
ROUTE843 = x3d.ROUTE()
ROUTE843.fromNode = "Pitch_vl5_YawInterpolator"
ROUTE843.fromField = "value_changed"
ROUTE843.toNode = "boxman_vl5"
ROUTE843.toField = "set_rotation"

Scene33.children.append(ROUTE843)
ROUTE844 = x3d.ROUTE()
ROUTE844.fromNode = "YawTimer"
ROUTE844.fromField = "fraction_changed"
ROUTE844.toNode = "Yaws_r_ankle_RotationInterpolator"
ROUTE844.toField = "set_fraction"

Scene33.children.append(ROUTE844)
ROUTE845 = x3d.ROUTE()
ROUTE845.fromNode = "YawTimer"
ROUTE845.fromField = "fraction_changed"
ROUTE845.toNode = "Yaws_r_knee_RotationInterpolator"
ROUTE845.toField = "set_fraction"

Scene33.children.append(ROUTE845)
ROUTE846 = x3d.ROUTE()
ROUTE846.fromNode = "YawTimer"
ROUTE846.fromField = "fraction_changed"
ROUTE846.toNode = "Yaws_r_hip_RotationInterpolator"
ROUTE846.toField = "set_fraction"

Scene33.children.append(ROUTE846)
ROUTE847 = x3d.ROUTE()
ROUTE847.fromNode = "YawTimer"
ROUTE847.fromField = "fraction_changed"
ROUTE847.toNode = "Yaws_l_ankle_RotationInterpolator"
ROUTE847.toField = "set_fraction"

Scene33.children.append(ROUTE847)
ROUTE848 = x3d.ROUTE()
ROUTE848.fromNode = "YawTimer"
ROUTE848.fromField = "fraction_changed"
ROUTE848.toNode = "Yaws_l_knee_RotationInterpolator"
ROUTE848.toField = "set_fraction"

Scene33.children.append(ROUTE848)
ROUTE849 = x3d.ROUTE()
ROUTE849.fromNode = "YawTimer"
ROUTE849.fromField = "fraction_changed"
ROUTE849.toNode = "Yaws_l_hip_RotationInterpolator"
ROUTE849.toField = "set_fraction"

Scene33.children.append(ROUTE849)
ROUTE850 = x3d.ROUTE()
ROUTE850.fromNode = "YawTimer"
ROUTE850.fromField = "fraction_changed"
ROUTE850.toNode = "Yaws_lower_body_RotationInterpolator"
ROUTE850.toField = "set_fraction"

Scene33.children.append(ROUTE850)
ROUTE851 = x3d.ROUTE()
ROUTE851.fromNode = "YawTimer"
ROUTE851.fromField = "fraction_changed"
ROUTE851.toNode = "Yaws_r_wrist_RotationInterpolator"
ROUTE851.toField = "set_fraction"

Scene33.children.append(ROUTE851)
ROUTE852 = x3d.ROUTE()
ROUTE852.fromNode = "YawTimer"
ROUTE852.fromField = "fraction_changed"
ROUTE852.toNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE852.toField = "set_fraction"

Scene33.children.append(ROUTE852)
ROUTE853 = x3d.ROUTE()
ROUTE853.fromNode = "YawTimer"
ROUTE853.fromField = "fraction_changed"
ROUTE853.toNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE853.toField = "set_fraction"

Scene33.children.append(ROUTE853)
ROUTE854 = x3d.ROUTE()
ROUTE854.fromNode = "YawTimer"
ROUTE854.fromField = "fraction_changed"
ROUTE854.toNode = "Yaws_l_wrist_RotationInterpolator"
ROUTE854.toField = "set_fraction"

Scene33.children.append(ROUTE854)
ROUTE855 = x3d.ROUTE()
ROUTE855.fromNode = "YawTimer"
ROUTE855.fromField = "fraction_changed"
ROUTE855.toNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE855.toField = "set_fraction"

Scene33.children.append(ROUTE855)
ROUTE856 = x3d.ROUTE()
ROUTE856.fromNode = "YawTimer"
ROUTE856.fromField = "fraction_changed"
ROUTE856.toNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE856.toField = "set_fraction"

Scene33.children.append(ROUTE856)
ROUTE857 = x3d.ROUTE()
ROUTE857.fromNode = "YawTimer"
ROUTE857.fromField = "fraction_changed"
ROUTE857.toNode = "Yaws_head_RotationInterpolator"
ROUTE857.toField = "set_fraction"

Scene33.children.append(ROUTE857)
ROUTE858 = x3d.ROUTE()
ROUTE858.fromNode = "YawTimer"
ROUTE858.fromField = "fraction_changed"
ROUTE858.toNode = "Yaws_neck_RotationInterpolator"
ROUTE858.toField = "set_fraction"

Scene33.children.append(ROUTE858)
ROUTE859 = x3d.ROUTE()
ROUTE859.fromNode = "YawTimer"
ROUTE859.fromField = "fraction_changed"
ROUTE859.toNode = "Yaws_upper_body_RotationInterpolator"
ROUTE859.toField = "set_fraction"

Scene33.children.append(ROUTE859)
ROUTE860 = x3d.ROUTE()
ROUTE860.fromNode = "YawTimer"
ROUTE860.fromField = "fraction_changed"
ROUTE860.toNode = "Yaws_whole_body_RotationInterpolator"
ROUTE860.toField = "set_fraction"

Scene33.children.append(ROUTE860)
ROUTE861 = x3d.ROUTE()
ROUTE861.fromNode = "YawTimer"
ROUTE861.fromField = "fraction_changed"
ROUTE861.toNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE861.toField = "set_fraction"

Scene33.children.append(ROUTE861)
ROUTE862 = x3d.ROUTE()
ROUTE862.fromNode = "YawTimer"
ROUTE862.fromField = "fraction_changed"
ROUTE862.toNode = "Yaw_l_sternoclavicular_RollInterpolator"
ROUTE862.toField = "set_fraction"

Scene33.children.append(ROUTE862)
ROUTE863 = x3d.ROUTE()
ROUTE863.fromNode = "YawTimer"
ROUTE863.fromField = "fraction_changed"
ROUTE863.toNode = "Yaw_l_acromioclavicular_RollInterpolator"
ROUTE863.toField = "set_fraction"

Scene33.children.append(ROUTE863)
ROUTE864 = x3d.ROUTE()
ROUTE864.fromNode = "YawTimer"
ROUTE864.fromField = "fraction_changed"
ROUTE864.toNode = "Yaw_r_sternoclavicular_RollInterpolator"
ROUTE864.toField = "set_fraction"

Scene33.children.append(ROUTE864)
ROUTE865 = x3d.ROUTE()
ROUTE865.fromNode = "YawTimer"
ROUTE865.fromField = "fraction_changed"
ROUTE865.toNode = "Yaw_r_acromioclavicular_RollInterpolator"
ROUTE865.toField = "set_fraction"

Scene33.children.append(ROUTE865)
ROUTE866 = x3d.ROUTE()
ROUTE866.fromNode = "YawTimer"
ROUTE866.fromField = "fraction_changed"
ROUTE866.toNode = "Yaw_r_metatarsal_PitchInterpolator"
ROUTE866.toField = "set_fraction"

Scene33.children.append(ROUTE866)
ROUTE867 = x3d.ROUTE()
ROUTE867.fromNode = "YawTimer"
ROUTE867.fromField = "fraction_changed"
ROUTE867.toNode = "Yaw_sacroiliac_YawInterpolator"
ROUTE867.toField = "set_fraction"

Scene33.children.append(ROUTE867)
ROUTE868 = x3d.ROUTE()
ROUTE868.fromNode = "YawTimer"
ROUTE868.fromField = "fraction_changed"
ROUTE868.toNode = "Yaw_vl5_YawInterpolator"
ROUTE868.toField = "set_fraction"

Scene33.children.append(ROUTE868)
ROUTE869 = x3d.ROUTE()
ROUTE869.fromNode = "YawTimer"
ROUTE869.fromField = "fraction_changed"
ROUTE869.toNode = "Yaw_vc6_YawInterpolator"
ROUTE869.toField = "set_fraction"

Scene33.children.append(ROUTE869)
ROUTE870 = x3d.ROUTE()
ROUTE870.fromNode = "YawTimer"
ROUTE870.fromField = "fraction_changed"
ROUTE870.toNode = "Yaw_l_thumb1_PitchInterpolator"
ROUTE870.toField = "set_fraction"

Scene33.children.append(ROUTE870)
ROUTE871 = x3d.ROUTE()
ROUTE871.fromNode = "YawTimer"
ROUTE871.fromField = "fraction_changed"
ROUTE871.toNode = "Yaw_r_thumb1_PitchInterpolator"
ROUTE871.toField = "set_fraction"

Scene33.children.append(ROUTE871)
ROUTE872 = x3d.ROUTE()
ROUTE872.fromNode = "Yaws_r_ankle_RotationInterpolator"
ROUTE872.fromField = "value_changed"
ROUTE872.toNode = "boxman_r_ankle"
ROUTE872.toField = "set_rotation"

Scene33.children.append(ROUTE872)
ROUTE873 = x3d.ROUTE()
ROUTE873.fromNode = "Yaws_r_knee_RotationInterpolator"
ROUTE873.fromField = "value_changed"
ROUTE873.toNode = "boxman_r_knee"
ROUTE873.toField = "set_rotation"

Scene33.children.append(ROUTE873)
ROUTE874 = x3d.ROUTE()
ROUTE874.fromNode = "Yaws_r_hip_RotationInterpolator"
ROUTE874.fromField = "value_changed"
ROUTE874.toNode = "boxman_r_hip"
ROUTE874.toField = "set_rotation"

Scene33.children.append(ROUTE874)
ROUTE875 = x3d.ROUTE()
ROUTE875.fromNode = "Yaws_l_ankle_RotationInterpolator"
ROUTE875.fromField = "value_changed"
ROUTE875.toNode = "boxman_l_ankle"
ROUTE875.toField = "set_rotation"

Scene33.children.append(ROUTE875)
ROUTE876 = x3d.ROUTE()
ROUTE876.fromNode = "Yaws_l_knee_RotationInterpolator"
ROUTE876.fromField = "value_changed"
ROUTE876.toNode = "boxman_l_knee"
ROUTE876.toField = "set_rotation"

Scene33.children.append(ROUTE876)
ROUTE877 = x3d.ROUTE()
ROUTE877.fromNode = "Yaws_l_hip_RotationInterpolator"
ROUTE877.fromField = "value_changed"
ROUTE877.toNode = "boxman_l_hip"
ROUTE877.toField = "set_rotation"

Scene33.children.append(ROUTE877)
ROUTE878 = x3d.ROUTE()
ROUTE878.fromNode = "Yaws_r_wrist_RotationInterpolator"
ROUTE878.fromField = "value_changed"
ROUTE878.toNode = "boxman_r_wrist"
ROUTE878.toField = "set_rotation"

Scene33.children.append(ROUTE878)
ROUTE879 = x3d.ROUTE()
ROUTE879.fromNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE879.fromField = "value_changed"
ROUTE879.toNode = "boxman_r_elbow"
ROUTE879.toField = "set_rotation"

Scene33.children.append(ROUTE879)
ROUTE880 = x3d.ROUTE()
ROUTE880.fromNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE880.fromField = "value_changed"
ROUTE880.toNode = "boxman_r_shoulder"
ROUTE880.toField = "set_rotation"

Scene33.children.append(ROUTE880)
ROUTE881 = x3d.ROUTE()
ROUTE881.fromNode = "Yaws_l_wrist_RotationInterpolator"
ROUTE881.fromField = "value_changed"
ROUTE881.toNode = "boxman_l_wrist"
ROUTE881.toField = "set_rotation"

Scene33.children.append(ROUTE881)
ROUTE882 = x3d.ROUTE()
ROUTE882.fromNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE882.fromField = "value_changed"
ROUTE882.toNode = "boxman_l_elbow"
ROUTE882.toField = "set_rotation"

Scene33.children.append(ROUTE882)
ROUTE883 = x3d.ROUTE()
ROUTE883.fromNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE883.fromField = "value_changed"
ROUTE883.toNode = "boxman_l_shoulder"
ROUTE883.toField = "set_rotation"

Scene33.children.append(ROUTE883)
ROUTE884 = x3d.ROUTE()
ROUTE884.fromNode = "Yaws_head_RotationInterpolator"
ROUTE884.fromField = "value_changed"
ROUTE884.toNode = "boxman_skullbase"
ROUTE884.toField = "set_rotation"

Scene33.children.append(ROUTE884)
ROUTE885 = x3d.ROUTE()
ROUTE885.fromNode = "Yaws_whole_body_RotationInterpolator"
ROUTE885.fromField = "value_changed"
ROUTE885.toNode = "boxman_humanoid_root"
ROUTE885.toField = "set_rotation"

Scene33.children.append(ROUTE885)
ROUTE886 = x3d.ROUTE()
ROUTE886.fromNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE886.fromField = "value_changed"
ROUTE886.toNode = "boxman_humanoid_root"
ROUTE886.toField = "set_translation"

Scene33.children.append(ROUTE886)
ROUTE887 = x3d.ROUTE()
ROUTE887.fromNode = "Yaw_vl5_YawInterpolator"
ROUTE887.fromField = "value_changed"
ROUTE887.toNode = "boxman_vl5"
ROUTE887.toField = "set_rotation"

Scene33.children.append(ROUTE887)
ROUTE888 = x3d.ROUTE()
ROUTE888.fromNode = "RollTimer"
ROUTE888.fromField = "fraction_changed"
ROUTE888.toNode = "Rolls_r_ankle_RotationInterpolator"
ROUTE888.toField = "set_fraction"

Scene33.children.append(ROUTE888)
ROUTE889 = x3d.ROUTE()
ROUTE889.fromNode = "RollTimer"
ROUTE889.fromField = "fraction_changed"
ROUTE889.toNode = "Rolls_r_knee_RotationInterpolator"
ROUTE889.toField = "set_fraction"

Scene33.children.append(ROUTE889)
ROUTE890 = x3d.ROUTE()
ROUTE890.fromNode = "RollTimer"
ROUTE890.fromField = "fraction_changed"
ROUTE890.toNode = "Rolls_r_hip_RotationInterpolator"
ROUTE890.toField = "set_fraction"

Scene33.children.append(ROUTE890)
ROUTE891 = x3d.ROUTE()
ROUTE891.fromNode = "RollTimer"
ROUTE891.fromField = "fraction_changed"
ROUTE891.toNode = "Rolls_l_ankle_RotationInterpolator"
ROUTE891.toField = "set_fraction"

Scene33.children.append(ROUTE891)
ROUTE892 = x3d.ROUTE()
ROUTE892.fromNode = "RollTimer"
ROUTE892.fromField = "fraction_changed"
ROUTE892.toNode = "Rolls_l_knee_RotationInterpolator"
ROUTE892.toField = "set_fraction"

Scene33.children.append(ROUTE892)
ROUTE893 = x3d.ROUTE()
ROUTE893.fromNode = "RollTimer"
ROUTE893.fromField = "fraction_changed"
ROUTE893.toNode = "Rolls_l_hip_RotationInterpolator"
ROUTE893.toField = "set_fraction"

Scene33.children.append(ROUTE893)
ROUTE894 = x3d.ROUTE()
ROUTE894.fromNode = "RollTimer"
ROUTE894.fromField = "fraction_changed"
ROUTE894.toNode = "Rolls_lower_body_RotationInterpolator"
ROUTE894.toField = "set_fraction"

Scene33.children.append(ROUTE894)
ROUTE895 = x3d.ROUTE()
ROUTE895.fromNode = "RollTimer"
ROUTE895.fromField = "fraction_changed"
ROUTE895.toNode = "Rolls_r_wrist_RotationInterpolator"
ROUTE895.toField = "set_fraction"

Scene33.children.append(ROUTE895)
ROUTE896 = x3d.ROUTE()
ROUTE896.fromNode = "RollTimer"
ROUTE896.fromField = "fraction_changed"
ROUTE896.toNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE896.toField = "set_fraction"

Scene33.children.append(ROUTE896)
ROUTE897 = x3d.ROUTE()
ROUTE897.fromNode = "RollTimer"
ROUTE897.fromField = "fraction_changed"
ROUTE897.toNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE897.toField = "set_fraction"

Scene33.children.append(ROUTE897)
ROUTE898 = x3d.ROUTE()
ROUTE898.fromNode = "RollTimer"
ROUTE898.fromField = "fraction_changed"
ROUTE898.toNode = "Rolls_l_wrist_RotationInterpolator"
ROUTE898.toField = "set_fraction"

Scene33.children.append(ROUTE898)
ROUTE899 = x3d.ROUTE()
ROUTE899.fromNode = "RollTimer"
ROUTE899.fromField = "fraction_changed"
ROUTE899.toNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE899.toField = "set_fraction"

Scene33.children.append(ROUTE899)
ROUTE900 = x3d.ROUTE()
ROUTE900.fromNode = "RollTimer"
ROUTE900.fromField = "fraction_changed"
ROUTE900.toNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE900.toField = "set_fraction"

Scene33.children.append(ROUTE900)
ROUTE901 = x3d.ROUTE()
ROUTE901.fromNode = "RollTimer"
ROUTE901.fromField = "fraction_changed"
ROUTE901.toNode = "Rolls_head_RotationInterpolator"
ROUTE901.toField = "set_fraction"

Scene33.children.append(ROUTE901)
ROUTE902 = x3d.ROUTE()
ROUTE902.fromNode = "RollTimer"
ROUTE902.fromField = "fraction_changed"
ROUTE902.toNode = "Rolls_neck_RotationInterpolator"
ROUTE902.toField = "set_fraction"

Scene33.children.append(ROUTE902)
ROUTE903 = x3d.ROUTE()
ROUTE903.fromNode = "RollTimer"
ROUTE903.fromField = "fraction_changed"
ROUTE903.toNode = "Rolls_upper_body_RotationInterpolator"
ROUTE903.toField = "set_fraction"

Scene33.children.append(ROUTE903)
ROUTE904 = x3d.ROUTE()
ROUTE904.fromNode = "RollTimer"
ROUTE904.fromField = "fraction_changed"
ROUTE904.toNode = "Rolls_whole_body_RotationInterpolator"
ROUTE904.toField = "set_fraction"

Scene33.children.append(ROUTE904)
ROUTE905 = x3d.ROUTE()
ROUTE905.fromNode = "RollTimer"
ROUTE905.fromField = "fraction_changed"
ROUTE905.toNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE905.toField = "set_fraction"

Scene33.children.append(ROUTE905)
ROUTE906 = x3d.ROUTE()
ROUTE906.fromNode = "RollTimer"
ROUTE906.fromField = "fraction_changed"
ROUTE906.toNode = "Roll_l_sternoclavicular_RollInterpolator"
ROUTE906.toField = "set_fraction"

Scene33.children.append(ROUTE906)
ROUTE907 = x3d.ROUTE()
ROUTE907.fromNode = "RollTimer"
ROUTE907.fromField = "fraction_changed"
ROUTE907.toNode = "Roll_l_acromioclavicular_RollInterpolator"
ROUTE907.toField = "set_fraction"

Scene33.children.append(ROUTE907)
ROUTE908 = x3d.ROUTE()
ROUTE908.fromNode = "RollTimer"
ROUTE908.fromField = "fraction_changed"
ROUTE908.toNode = "Roll_r_sternoclavicular_RollInterpolator"
ROUTE908.toField = "set_fraction"

Scene33.children.append(ROUTE908)
ROUTE909 = x3d.ROUTE()
ROUTE909.fromNode = "RollTimer"
ROUTE909.fromField = "fraction_changed"
ROUTE909.toNode = "Roll_r_acromioclavicular_RollInterpolator"
ROUTE909.toField = "set_fraction"

Scene33.children.append(ROUTE909)
ROUTE910 = x3d.ROUTE()
ROUTE910.fromNode = "RollTimer"
ROUTE910.fromField = "fraction_changed"
ROUTE910.toNode = "Roll_r_metatarsal_PitchInterpolator"
ROUTE910.toField = "set_fraction"

Scene33.children.append(ROUTE910)
ROUTE911 = x3d.ROUTE()
ROUTE911.fromNode = "RollTimer"
ROUTE911.fromField = "fraction_changed"
ROUTE911.toNode = "Roll_sacroiliac_YawInterpolator"
ROUTE911.toField = "set_fraction"

Scene33.children.append(ROUTE911)
ROUTE912 = x3d.ROUTE()
ROUTE912.fromNode = "RollTimer"
ROUTE912.fromField = "fraction_changed"
ROUTE912.toNode = "Roll_vl5_YawInterpolator"
ROUTE912.toField = "set_fraction"

Scene33.children.append(ROUTE912)
ROUTE913 = x3d.ROUTE()
ROUTE913.fromNode = "RollTimer"
ROUTE913.fromField = "fraction_changed"
ROUTE913.toNode = "Roll_vc6_YawInterpolator"
ROUTE913.toField = "set_fraction"

Scene33.children.append(ROUTE913)
ROUTE914 = x3d.ROUTE()
ROUTE914.fromNode = "RollTimer"
ROUTE914.fromField = "fraction_changed"
ROUTE914.toNode = "Roll_l_thumb1_PitchInterpolator"
ROUTE914.toField = "set_fraction"

Scene33.children.append(ROUTE914)
ROUTE915 = x3d.ROUTE()
ROUTE915.fromNode = "RollTimer"
ROUTE915.fromField = "fraction_changed"
ROUTE915.toNode = "Roll_r_thumb1_PitchInterpolator"
ROUTE915.toField = "set_fraction"

Scene33.children.append(ROUTE915)
ROUTE916 = x3d.ROUTE()
ROUTE916.fromNode = "Rolls_r_ankle_RotationInterpolator"
ROUTE916.fromField = "value_changed"
ROUTE916.toNode = "boxman_r_ankle"
ROUTE916.toField = "set_rotation"

Scene33.children.append(ROUTE916)
ROUTE917 = x3d.ROUTE()
ROUTE917.fromNode = "Rolls_r_knee_RotationInterpolator"
ROUTE917.fromField = "value_changed"
ROUTE917.toNode = "boxman_r_knee"
ROUTE917.toField = "set_rotation"

Scene33.children.append(ROUTE917)
ROUTE918 = x3d.ROUTE()
ROUTE918.fromNode = "Rolls_r_hip_RotationInterpolator"
ROUTE918.fromField = "value_changed"
ROUTE918.toNode = "boxman_r_hip"
ROUTE918.toField = "set_rotation"

Scene33.children.append(ROUTE918)
ROUTE919 = x3d.ROUTE()
ROUTE919.fromNode = "Rolls_l_ankle_RotationInterpolator"
ROUTE919.fromField = "value_changed"
ROUTE919.toNode = "boxman_l_ankle"
ROUTE919.toField = "set_rotation"

Scene33.children.append(ROUTE919)
ROUTE920 = x3d.ROUTE()
ROUTE920.fromNode = "Rolls_l_knee_RotationInterpolator"
ROUTE920.fromField = "value_changed"
ROUTE920.toNode = "boxman_l_knee"
ROUTE920.toField = "set_rotation"

Scene33.children.append(ROUTE920)
ROUTE921 = x3d.ROUTE()
ROUTE921.fromNode = "Rolls_l_hip_RotationInterpolator"
ROUTE921.fromField = "value_changed"
ROUTE921.toNode = "boxman_l_hip"
ROUTE921.toField = "set_rotation"

Scene33.children.append(ROUTE921)
ROUTE922 = x3d.ROUTE()
ROUTE922.fromNode = "Rolls_r_wrist_RotationInterpolator"
ROUTE922.fromField = "value_changed"
ROUTE922.toNode = "boxman_r_wrist"
ROUTE922.toField = "set_rotation"

Scene33.children.append(ROUTE922)
ROUTE923 = x3d.ROUTE()
ROUTE923.fromNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE923.fromField = "value_changed"
ROUTE923.toNode = "boxman_r_elbow"
ROUTE923.toField = "set_rotation"

Scene33.children.append(ROUTE923)
ROUTE924 = x3d.ROUTE()
ROUTE924.fromNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE924.fromField = "value_changed"
ROUTE924.toNode = "boxman_r_shoulder"
ROUTE924.toField = "set_rotation"

Scene33.children.append(ROUTE924)
ROUTE925 = x3d.ROUTE()
ROUTE925.fromNode = "Rolls_l_wrist_RotationInterpolator"
ROUTE925.fromField = "value_changed"
ROUTE925.toNode = "boxman_l_wrist"
ROUTE925.toField = "set_rotation"

Scene33.children.append(ROUTE925)
ROUTE926 = x3d.ROUTE()
ROUTE926.fromNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE926.fromField = "value_changed"
ROUTE926.toNode = "boxman_l_elbow"
ROUTE926.toField = "set_rotation"

Scene33.children.append(ROUTE926)
ROUTE927 = x3d.ROUTE()
ROUTE927.fromNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE927.fromField = "value_changed"
ROUTE927.toNode = "boxman_l_shoulder"
ROUTE927.toField = "set_rotation"

Scene33.children.append(ROUTE927)
ROUTE928 = x3d.ROUTE()
ROUTE928.fromNode = "Rolls_head_RotationInterpolator"
ROUTE928.fromField = "value_changed"
ROUTE928.toNode = "boxman_skullbase"
ROUTE928.toField = "set_rotation"

Scene33.children.append(ROUTE928)
ROUTE929 = x3d.ROUTE()
ROUTE929.fromNode = "Rolls_whole_body_RotationInterpolator"
ROUTE929.fromField = "value_changed"
ROUTE929.toNode = "boxman_humanoid_root"
ROUTE929.toField = "set_rotation"

Scene33.children.append(ROUTE929)
ROUTE930 = x3d.ROUTE()
ROUTE930.fromNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE930.fromField = "value_changed"
ROUTE930.toNode = "boxman_humanoid_root"
ROUTE930.toField = "set_translation"

Scene33.children.append(ROUTE930)
ROUTE931 = x3d.ROUTE()
ROUTE931.fromNode = "Roll_vl5_YawInterpolator"
ROUTE931.fromField = "value_changed"
ROUTE931.toNode = "boxman_vl5"
ROUTE931.toField = "set_rotation"

Scene33.children.append(ROUTE931)
ROUTE932 = x3d.ROUTE()
ROUTE932.fromNode = "WalkTimer"
ROUTE932.fromField = "fraction_changed"
ROUTE932.toNode = "Walk_r_ankle_RotationInterpolator"
ROUTE932.toField = "set_fraction"

Scene33.children.append(ROUTE932)
ROUTE933 = x3d.ROUTE()
ROUTE933.fromNode = "WalkTimer"
ROUTE933.fromField = "fraction_changed"
ROUTE933.toNode = "Walk_r_knee_RotationInterpolator"
ROUTE933.toField = "set_fraction"

Scene33.children.append(ROUTE933)
ROUTE934 = x3d.ROUTE()
ROUTE934.fromNode = "WalkTimer"
ROUTE934.fromField = "fraction_changed"
ROUTE934.toNode = "Walk_r_hip_RotationInterpolator"
ROUTE934.toField = "set_fraction"

Scene33.children.append(ROUTE934)
ROUTE935 = x3d.ROUTE()
ROUTE935.fromNode = "WalkTimer"
ROUTE935.fromField = "fraction_changed"
ROUTE935.toNode = "Walk_l_ankle_RotationInterpolator"
ROUTE935.toField = "set_fraction"

Scene33.children.append(ROUTE935)
ROUTE936 = x3d.ROUTE()
ROUTE936.fromNode = "WalkTimer"
ROUTE936.fromField = "fraction_changed"
ROUTE936.toNode = "Walk_l_knee_RotationInterpolator"
ROUTE936.toField = "set_fraction"

Scene33.children.append(ROUTE936)
ROUTE937 = x3d.ROUTE()
ROUTE937.fromNode = "WalkTimer"
ROUTE937.fromField = "fraction_changed"
ROUTE937.toNode = "Walk_l_hip_RotationInterpolator"
ROUTE937.toField = "set_fraction"

Scene33.children.append(ROUTE937)
ROUTE938 = x3d.ROUTE()
ROUTE938.fromNode = "WalkTimer"
ROUTE938.fromField = "fraction_changed"
ROUTE938.toNode = "Walk_lower_body_RotationInterpolator"
ROUTE938.toField = "set_fraction"

Scene33.children.append(ROUTE938)
ROUTE939 = x3d.ROUTE()
ROUTE939.fromNode = "WalkTimer"
ROUTE939.fromField = "fraction_changed"
ROUTE939.toNode = "Walk_r_wrist_RotationInterpolator"
ROUTE939.toField = "set_fraction"

Scene33.children.append(ROUTE939)
ROUTE940 = x3d.ROUTE()
ROUTE940.fromNode = "WalkTimer"
ROUTE940.fromField = "fraction_changed"
ROUTE940.toNode = "Walk_r_elbow_RotationInterpolator"
ROUTE940.toField = "set_fraction"

Scene33.children.append(ROUTE940)
ROUTE941 = x3d.ROUTE()
ROUTE941.fromNode = "WalkTimer"
ROUTE941.fromField = "fraction_changed"
ROUTE941.toNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE941.toField = "set_fraction"

Scene33.children.append(ROUTE941)
ROUTE942 = x3d.ROUTE()
ROUTE942.fromNode = "WalkTimer"
ROUTE942.fromField = "fraction_changed"
ROUTE942.toNode = "Walk_l_wrist_RotationInterpolator"
ROUTE942.toField = "set_fraction"

Scene33.children.append(ROUTE942)
ROUTE943 = x3d.ROUTE()
ROUTE943.fromNode = "WalkTimer"
ROUTE943.fromField = "fraction_changed"
ROUTE943.toNode = "Walk_l_elbow_RotationInterpolator"
ROUTE943.toField = "set_fraction"

Scene33.children.append(ROUTE943)
ROUTE944 = x3d.ROUTE()
ROUTE944.fromNode = "WalkTimer"
ROUTE944.fromField = "fraction_changed"
ROUTE944.toNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE944.toField = "set_fraction"

Scene33.children.append(ROUTE944)
ROUTE945 = x3d.ROUTE()
ROUTE945.fromNode = "WalkTimer"
ROUTE945.fromField = "fraction_changed"
ROUTE945.toNode = "Walk_head_RotationInterpolator"
ROUTE945.toField = "set_fraction"

Scene33.children.append(ROUTE945)
ROUTE946 = x3d.ROUTE()
ROUTE946.fromNode = "WalkTimer"
ROUTE946.fromField = "fraction_changed"
ROUTE946.toNode = "Walk_neck_RotationInterpolator"
ROUTE946.toField = "set_fraction"

Scene33.children.append(ROUTE946)
ROUTE947 = x3d.ROUTE()
ROUTE947.fromNode = "WalkTimer"
ROUTE947.fromField = "fraction_changed"
ROUTE947.toNode = "Walk_upper_body_RotationInterpolator"
ROUTE947.toField = "set_fraction"

Scene33.children.append(ROUTE947)
ROUTE948 = x3d.ROUTE()
ROUTE948.fromNode = "WalkTimer"
ROUTE948.fromField = "fraction_changed"
ROUTE948.toNode = "Walk_whole_body_RotationInterpolator"
ROUTE948.toField = "set_fraction"

Scene33.children.append(ROUTE948)
ROUTE949 = x3d.ROUTE()
ROUTE949.fromNode = "WalkTimer"
ROUTE949.fromField = "fraction_changed"
ROUTE949.toNode = "Walk_whole_body_TranslationInterpolator"
ROUTE949.toField = "set_fraction"

Scene33.children.append(ROUTE949)
ROUTE950 = x3d.ROUTE()
ROUTE950.fromNode = "WalkTimer"
ROUTE950.fromField = "fraction_changed"
ROUTE950.toNode = "Walk_l_sternoclavicular_RollInterpolator"
ROUTE950.toField = "set_fraction"

Scene33.children.append(ROUTE950)
ROUTE951 = x3d.ROUTE()
ROUTE951.fromNode = "WalkTimer"
ROUTE951.fromField = "fraction_changed"
ROUTE951.toNode = "Walk_l_acromioclavicular_RollInterpolator"
ROUTE951.toField = "set_fraction"

Scene33.children.append(ROUTE951)
ROUTE952 = x3d.ROUTE()
ROUTE952.fromNode = "WalkTimer"
ROUTE952.fromField = "fraction_changed"
ROUTE952.toNode = "Walk_r_sternoclavicular_RollInterpolator"
ROUTE952.toField = "set_fraction"

Scene33.children.append(ROUTE952)
ROUTE953 = x3d.ROUTE()
ROUTE953.fromNode = "WalkTimer"
ROUTE953.fromField = "fraction_changed"
ROUTE953.toNode = "Walk_r_acromioclavicular_RollInterpolator"
ROUTE953.toField = "set_fraction"

Scene33.children.append(ROUTE953)
ROUTE954 = x3d.ROUTE()
ROUTE954.fromNode = "WalkTimer"
ROUTE954.fromField = "fraction_changed"
ROUTE954.toNode = "Walk_r_metatarsal_PitchInterpolator"
ROUTE954.toField = "set_fraction"

Scene33.children.append(ROUTE954)
ROUTE955 = x3d.ROUTE()
ROUTE955.fromNode = "WalkTimer"
ROUTE955.fromField = "fraction_changed"
ROUTE955.toNode = "Walk_sacroiliac_YawInterpolator"
ROUTE955.toField = "set_fraction"

Scene33.children.append(ROUTE955)
ROUTE956 = x3d.ROUTE()
ROUTE956.fromNode = "WalkTimer"
ROUTE956.fromField = "fraction_changed"
ROUTE956.toNode = "Walk_vl5_YawInterpolator"
ROUTE956.toField = "set_fraction"

Scene33.children.append(ROUTE956)
ROUTE957 = x3d.ROUTE()
ROUTE957.fromNode = "WalkTimer"
ROUTE957.fromField = "fraction_changed"
ROUTE957.toNode = "Walk_vc6_YawInterpolator"
ROUTE957.toField = "set_fraction"

Scene33.children.append(ROUTE957)
ROUTE958 = x3d.ROUTE()
ROUTE958.fromNode = "WalkTimer"
ROUTE958.fromField = "fraction_changed"
ROUTE958.toNode = "Walk_l_thumb1_PitchInterpolator"
ROUTE958.toField = "set_fraction"

Scene33.children.append(ROUTE958)
ROUTE959 = x3d.ROUTE()
ROUTE959.fromNode = "WalkTimer"
ROUTE959.fromField = "fraction_changed"
ROUTE959.toNode = "Walk_r_thumb1_PitchInterpolator"
ROUTE959.toField = "set_fraction"

Scene33.children.append(ROUTE959)
ROUTE960 = x3d.ROUTE()
ROUTE960.fromNode = "Walk_r_ankle_RotationInterpolator"
ROUTE960.fromField = "value_changed"
ROUTE960.toNode = "boxman_r_ankle"
ROUTE960.toField = "set_rotation"

Scene33.children.append(ROUTE960)
ROUTE961 = x3d.ROUTE()
ROUTE961.fromNode = "Walk_r_knee_RotationInterpolator"
ROUTE961.fromField = "value_changed"
ROUTE961.toNode = "boxman_r_knee"
ROUTE961.toField = "set_rotation"

Scene33.children.append(ROUTE961)
ROUTE962 = x3d.ROUTE()
ROUTE962.fromNode = "Walk_r_hip_RotationInterpolator"
ROUTE962.fromField = "value_changed"
ROUTE962.toNode = "boxman_r_hip"
ROUTE962.toField = "set_rotation"

Scene33.children.append(ROUTE962)
ROUTE963 = x3d.ROUTE()
ROUTE963.fromNode = "Walk_l_ankle_RotationInterpolator"
ROUTE963.fromField = "value_changed"
ROUTE963.toNode = "boxman_l_ankle"
ROUTE963.toField = "set_rotation"

Scene33.children.append(ROUTE963)
ROUTE964 = x3d.ROUTE()
ROUTE964.fromNode = "Walk_l_knee_RotationInterpolator"
ROUTE964.fromField = "value_changed"
ROUTE964.toNode = "boxman_l_knee"
ROUTE964.toField = "set_rotation"

Scene33.children.append(ROUTE964)
ROUTE965 = x3d.ROUTE()
ROUTE965.fromNode = "Walk_l_hip_RotationInterpolator"
ROUTE965.fromField = "value_changed"
ROUTE965.toNode = "boxman_l_hip"
ROUTE965.toField = "set_rotation"

Scene33.children.append(ROUTE965)
ROUTE966 = x3d.ROUTE()
ROUTE966.fromNode = "Walk_r_wrist_RotationInterpolator"
ROUTE966.fromField = "value_changed"
ROUTE966.toNode = "boxman_r_wrist"
ROUTE966.toField = "set_rotation"

Scene33.children.append(ROUTE966)
ROUTE967 = x3d.ROUTE()
ROUTE967.fromNode = "Walk_r_elbow_RotationInterpolator"
ROUTE967.fromField = "value_changed"
ROUTE967.toNode = "boxman_r_elbow"
ROUTE967.toField = "set_rotation"

Scene33.children.append(ROUTE967)
ROUTE968 = x3d.ROUTE()
ROUTE968.fromNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE968.fromField = "value_changed"
ROUTE968.toNode = "boxman_r_shoulder"
ROUTE968.toField = "set_rotation"

Scene33.children.append(ROUTE968)
ROUTE969 = x3d.ROUTE()
ROUTE969.fromNode = "Walk_l_wrist_RotationInterpolator"
ROUTE969.fromField = "value_changed"
ROUTE969.toNode = "boxman_l_wrist"
ROUTE969.toField = "set_rotation"

Scene33.children.append(ROUTE969)
ROUTE970 = x3d.ROUTE()
ROUTE970.fromNode = "Walk_l_elbow_RotationInterpolator"
ROUTE970.fromField = "value_changed"
ROUTE970.toNode = "boxman_l_elbow"
ROUTE970.toField = "set_rotation"

Scene33.children.append(ROUTE970)
ROUTE971 = x3d.ROUTE()
ROUTE971.fromNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE971.fromField = "value_changed"
ROUTE971.toNode = "boxman_l_shoulder"
ROUTE971.toField = "set_rotation"

Scene33.children.append(ROUTE971)
ROUTE972 = x3d.ROUTE()
ROUTE972.fromNode = "Walk_head_RotationInterpolator"
ROUTE972.fromField = "value_changed"
ROUTE972.toNode = "boxman_skullbase"
ROUTE972.toField = "set_rotation"

Scene33.children.append(ROUTE972)
ROUTE973 = x3d.ROUTE()
ROUTE973.fromNode = "Walk_whole_body_RotationInterpolator"
ROUTE973.fromField = "value_changed"
ROUTE973.toNode = "boxman_humanoid_root"
ROUTE973.toField = "set_rotation"

Scene33.children.append(ROUTE973)
ROUTE974 = x3d.ROUTE()
ROUTE974.fromNode = "Walk_whole_body_TranslationInterpolator"
ROUTE974.fromField = "value_changed"
ROUTE974.toNode = "boxman_humanoid_root"
ROUTE974.toField = "set_translation"

Scene33.children.append(ROUTE974)
ROUTE975 = x3d.ROUTE()
ROUTE975.fromNode = "Walk_vl5_YawInterpolator"
ROUTE975.fromField = "value_changed"
ROUTE975.toNode = "boxman_vl5"
ROUTE975.toField = "set_rotation"

Scene33.children.append(ROUTE975)
ROUTE976 = x3d.ROUTE()
ROUTE976.fromNode = "RunTimer"
ROUTE976.fromField = "fraction_changed"
ROUTE976.toNode = "Run_r_ankle_RotationInterpolator_Run"
ROUTE976.toField = "set_fraction"

Scene33.children.append(ROUTE976)
ROUTE977 = x3d.ROUTE()
ROUTE977.fromNode = "RunTimer"
ROUTE977.fromField = "fraction_changed"
ROUTE977.toNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE977.toField = "set_fraction"

Scene33.children.append(ROUTE977)
ROUTE978 = x3d.ROUTE()
ROUTE978.fromNode = "RunTimer"
ROUTE978.fromField = "fraction_changed"
ROUTE978.toNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE978.toField = "set_fraction"

Scene33.children.append(ROUTE978)
ROUTE979 = x3d.ROUTE()
ROUTE979.fromNode = "RunTimer"
ROUTE979.fromField = "fraction_changed"
ROUTE979.toNode = "Run_l_ankle_RotationInterpolator_Run"
ROUTE979.toField = "set_fraction"

Scene33.children.append(ROUTE979)
ROUTE980 = x3d.ROUTE()
ROUTE980.fromNode = "RunTimer"
ROUTE980.fromField = "fraction_changed"
ROUTE980.toNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE980.toField = "set_fraction"

Scene33.children.append(ROUTE980)
ROUTE981 = x3d.ROUTE()
ROUTE981.fromNode = "RunTimer"
ROUTE981.fromField = "fraction_changed"
ROUTE981.toNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE981.toField = "set_fraction"

Scene33.children.append(ROUTE981)
ROUTE982 = x3d.ROUTE()
ROUTE982.fromNode = "RunTimer"
ROUTE982.fromField = "fraction_changed"
ROUTE982.toNode = "Run_lower_body_RotationInterpolator_Run"
ROUTE982.toField = "set_fraction"

Scene33.children.append(ROUTE982)
ROUTE983 = x3d.ROUTE()
ROUTE983.fromNode = "RunTimer"
ROUTE983.fromField = "fraction_changed"
ROUTE983.toNode = "Run_r_wrist_RotationInterpolator_Run"
ROUTE983.toField = "set_fraction"

Scene33.children.append(ROUTE983)
ROUTE984 = x3d.ROUTE()
ROUTE984.fromNode = "RunTimer"
ROUTE984.fromField = "fraction_changed"
ROUTE984.toNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE984.toField = "set_fraction"

Scene33.children.append(ROUTE984)
ROUTE985 = x3d.ROUTE()
ROUTE985.fromNode = "RunTimer"
ROUTE985.fromField = "fraction_changed"
ROUTE985.toNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE985.toField = "set_fraction"

Scene33.children.append(ROUTE985)
ROUTE986 = x3d.ROUTE()
ROUTE986.fromNode = "RunTimer"
ROUTE986.fromField = "fraction_changed"
ROUTE986.toNode = "Run_l_wrist_RotationInterpolator_Run"
ROUTE986.toField = "set_fraction"

Scene33.children.append(ROUTE986)
ROUTE987 = x3d.ROUTE()
ROUTE987.fromNode = "RunTimer"
ROUTE987.fromField = "fraction_changed"
ROUTE987.toNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE987.toField = "set_fraction"

Scene33.children.append(ROUTE987)
ROUTE988 = x3d.ROUTE()
ROUTE988.fromNode = "RunTimer"
ROUTE988.fromField = "fraction_changed"
ROUTE988.toNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE988.toField = "set_fraction"

Scene33.children.append(ROUTE988)
ROUTE989 = x3d.ROUTE()
ROUTE989.fromNode = "RunTimer"
ROUTE989.fromField = "fraction_changed"
ROUTE989.toNode = "Run_head_RotationInterpolator_Run"
ROUTE989.toField = "set_fraction"

Scene33.children.append(ROUTE989)
ROUTE990 = x3d.ROUTE()
ROUTE990.fromNode = "RunTimer"
ROUTE990.fromField = "fraction_changed"
ROUTE990.toNode = "Run_neck_RotationInterpolator_Run"
ROUTE990.toField = "set_fraction"

Scene33.children.append(ROUTE990)
ROUTE991 = x3d.ROUTE()
ROUTE991.fromNode = "RunTimer"
ROUTE991.fromField = "fraction_changed"
ROUTE991.toNode = "Run_upper_body_RotationInterpolator_Run"
ROUTE991.toField = "set_fraction"

Scene33.children.append(ROUTE991)
ROUTE992 = x3d.ROUTE()
ROUTE992.fromNode = "RunTimer"
ROUTE992.fromField = "fraction_changed"
ROUTE992.toNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE992.toField = "set_fraction"

Scene33.children.append(ROUTE992)
ROUTE993 = x3d.ROUTE()
ROUTE993.fromNode = "RunTimer"
ROUTE993.fromField = "fraction_changed"
ROUTE993.toNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE993.toField = "set_fraction"

Scene33.children.append(ROUTE993)
ROUTE994 = x3d.ROUTE()
ROUTE994.fromNode = "RunTimer"
ROUTE994.fromField = "fraction_changed"
ROUTE994.toNode = "Run_l_sternoclavicular_RollInterpolator"
ROUTE994.toField = "set_fraction"

Scene33.children.append(ROUTE994)
ROUTE995 = x3d.ROUTE()
ROUTE995.fromNode = "RunTimer"
ROUTE995.fromField = "fraction_changed"
ROUTE995.toNode = "Run_l_acromioclavicular_RollInterpolator"
ROUTE995.toField = "set_fraction"

Scene33.children.append(ROUTE995)
ROUTE996 = x3d.ROUTE()
ROUTE996.fromNode = "RunTimer"
ROUTE996.fromField = "fraction_changed"
ROUTE996.toNode = "Run_r_sternoclavicular_RollInterpolator"
ROUTE996.toField = "set_fraction"

Scene33.children.append(ROUTE996)
ROUTE997 = x3d.ROUTE()
ROUTE997.fromNode = "RunTimer"
ROUTE997.fromField = "fraction_changed"
ROUTE997.toNode = "Run_r_acromioclavicular_RollInterpolator"
ROUTE997.toField = "set_fraction"

Scene33.children.append(ROUTE997)
ROUTE998 = x3d.ROUTE()
ROUTE998.fromNode = "RunTimer"
ROUTE998.fromField = "fraction_changed"
ROUTE998.toNode = "Run_r_metatarsal_PitchInterpolator"
ROUTE998.toField = "set_fraction"

Scene33.children.append(ROUTE998)
ROUTE999 = x3d.ROUTE()
ROUTE999.fromNode = "RunTimer"
ROUTE999.fromField = "fraction_changed"
ROUTE999.toNode = "Run_sacroiliac_YawInterpolator"
ROUTE999.toField = "set_fraction"

Scene33.children.append(ROUTE999)
ROUTE1000 = x3d.ROUTE()
ROUTE1000.fromNode = "RunTimer"
ROUTE1000.fromField = "fraction_changed"
ROUTE1000.toNode = "Run_vl5_YawInterpolator"
ROUTE1000.toField = "set_fraction"

Scene33.children.append(ROUTE1000)
ROUTE1001 = x3d.ROUTE()
ROUTE1001.fromNode = "RunTimer"
ROUTE1001.fromField = "fraction_changed"
ROUTE1001.toNode = "Run_vc6_YawInterpolator"
ROUTE1001.toField = "set_fraction"

Scene33.children.append(ROUTE1001)
ROUTE1002 = x3d.ROUTE()
ROUTE1002.fromNode = "RunTimer"
ROUTE1002.fromField = "fraction_changed"
ROUTE1002.toNode = "Run_l_thumb1_PitchInterpolator"
ROUTE1002.toField = "set_fraction"

Scene33.children.append(ROUTE1002)
ROUTE1003 = x3d.ROUTE()
ROUTE1003.fromNode = "RunTimer"
ROUTE1003.fromField = "fraction_changed"
ROUTE1003.toNode = "Run_r_thumb1_PitchInterpolator"
ROUTE1003.toField = "set_fraction"

Scene33.children.append(ROUTE1003)
ROUTE1004 = x3d.ROUTE()
ROUTE1004.fromNode = "Run_r_ankle_RotationInterpolator_Run"
ROUTE1004.fromField = "value_changed"
ROUTE1004.toNode = "boxman_r_ankle"
ROUTE1004.toField = "set_rotation"

Scene33.children.append(ROUTE1004)
ROUTE1005 = x3d.ROUTE()
ROUTE1005.fromNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE1005.fromField = "value_changed"
ROUTE1005.toNode = "boxman_r_knee"
ROUTE1005.toField = "set_rotation"

Scene33.children.append(ROUTE1005)
ROUTE1006 = x3d.ROUTE()
ROUTE1006.fromNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE1006.fromField = "value_changed"
ROUTE1006.toNode = "boxman_r_hip"
ROUTE1006.toField = "set_rotation"

Scene33.children.append(ROUTE1006)
ROUTE1007 = x3d.ROUTE()
ROUTE1007.fromNode = "Run_l_ankle_RotationInterpolator_Run"
ROUTE1007.fromField = "value_changed"
ROUTE1007.toNode = "boxman_l_ankle"
ROUTE1007.toField = "set_rotation"

Scene33.children.append(ROUTE1007)
ROUTE1008 = x3d.ROUTE()
ROUTE1008.fromNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE1008.fromField = "value_changed"
ROUTE1008.toNode = "boxman_l_knee"
ROUTE1008.toField = "set_rotation"

Scene33.children.append(ROUTE1008)
ROUTE1009 = x3d.ROUTE()
ROUTE1009.fromNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE1009.fromField = "value_changed"
ROUTE1009.toNode = "boxman_l_hip"
ROUTE1009.toField = "set_rotation"

Scene33.children.append(ROUTE1009)
ROUTE1010 = x3d.ROUTE()
ROUTE1010.fromNode = "Run_r_wrist_RotationInterpolator_Run"
ROUTE1010.fromField = "value_changed"
ROUTE1010.toNode = "boxman_r_wrist"
ROUTE1010.toField = "set_rotation"

Scene33.children.append(ROUTE1010)
ROUTE1011 = x3d.ROUTE()
ROUTE1011.fromNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE1011.fromField = "value_changed"
ROUTE1011.toNode = "boxman_r_elbow"
ROUTE1011.toField = "set_rotation"

Scene33.children.append(ROUTE1011)
ROUTE1012 = x3d.ROUTE()
ROUTE1012.fromNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE1012.fromField = "value_changed"
ROUTE1012.toNode = "boxman_r_shoulder"
ROUTE1012.toField = "set_rotation"

Scene33.children.append(ROUTE1012)
ROUTE1013 = x3d.ROUTE()
ROUTE1013.fromNode = "Run_l_wrist_RotationInterpolator_Run"
ROUTE1013.fromField = "value_changed"
ROUTE1013.toNode = "boxman_l_wrist"
ROUTE1013.toField = "set_rotation"

Scene33.children.append(ROUTE1013)
ROUTE1014 = x3d.ROUTE()
ROUTE1014.fromNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE1014.fromField = "value_changed"
ROUTE1014.toNode = "boxman_l_elbow"
ROUTE1014.toField = "set_rotation"

Scene33.children.append(ROUTE1014)
ROUTE1015 = x3d.ROUTE()
ROUTE1015.fromNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE1015.fromField = "value_changed"
ROUTE1015.toNode = "boxman_l_shoulder"
ROUTE1015.toField = "set_rotation"

Scene33.children.append(ROUTE1015)
ROUTE1016 = x3d.ROUTE()
ROUTE1016.fromNode = "Run_head_RotationInterpolator_Run"
ROUTE1016.fromField = "value_changed"
ROUTE1016.toNode = "boxman_skullbase"
ROUTE1016.toField = "set_rotation"

Scene33.children.append(ROUTE1016)
ROUTE1017 = x3d.ROUTE()
ROUTE1017.fromNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE1017.fromField = "value_changed"
ROUTE1017.toNode = "boxman_humanoid_root"
ROUTE1017.toField = "set_rotation"

Scene33.children.append(ROUTE1017)
ROUTE1018 = x3d.ROUTE()
ROUTE1018.fromNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE1018.fromField = "value_changed"
ROUTE1018.toNode = "boxman_humanoid_root"
ROUTE1018.toField = "set_translation"

Scene33.children.append(ROUTE1018)
ROUTE1019 = x3d.ROUTE()
ROUTE1019.fromNode = "Run_vl5_YawInterpolator"
ROUTE1019.fromField = "value_changed"
ROUTE1019.toNode = "boxman_vl5"
ROUTE1019.toField = "set_rotation"

Scene33.children.append(ROUTE1019)
ROUTE1020 = x3d.ROUTE()
ROUTE1020.fromNode = "JumpTimer"
ROUTE1020.fromField = "fraction_changed"
ROUTE1020.toNode = "Jump_r_ankle_RotationInterpolator"
ROUTE1020.toField = "set_fraction"

Scene33.children.append(ROUTE1020)
ROUTE1021 = x3d.ROUTE()
ROUTE1021.fromNode = "JumpTimer"
ROUTE1021.fromField = "fraction_changed"
ROUTE1021.toNode = "Jump_r_knee_RotationInterpolator"
ROUTE1021.toField = "set_fraction"

Scene33.children.append(ROUTE1021)
ROUTE1022 = x3d.ROUTE()
ROUTE1022.fromNode = "JumpTimer"
ROUTE1022.fromField = "fraction_changed"
ROUTE1022.toNode = "Jump_r_hip_RotationInterpolator"
ROUTE1022.toField = "set_fraction"

Scene33.children.append(ROUTE1022)
ROUTE1023 = x3d.ROUTE()
ROUTE1023.fromNode = "JumpTimer"
ROUTE1023.fromField = "fraction_changed"
ROUTE1023.toNode = "Jump_l_ankle_RotationInterpolator"
ROUTE1023.toField = "set_fraction"

Scene33.children.append(ROUTE1023)
ROUTE1024 = x3d.ROUTE()
ROUTE1024.fromNode = "JumpTimer"
ROUTE1024.fromField = "fraction_changed"
ROUTE1024.toNode = "Jump_l_knee_RotationInterpolator"
ROUTE1024.toField = "set_fraction"

Scene33.children.append(ROUTE1024)
ROUTE1025 = x3d.ROUTE()
ROUTE1025.fromNode = "JumpTimer"
ROUTE1025.fromField = "fraction_changed"
ROUTE1025.toNode = "Jump_l_hip_RotationInterpolator"
ROUTE1025.toField = "set_fraction"

Scene33.children.append(ROUTE1025)
ROUTE1026 = x3d.ROUTE()
ROUTE1026.fromNode = "JumpTimer"
ROUTE1026.fromField = "fraction_changed"
ROUTE1026.toNode = "Jump_lower_body_RotationInterpolator"
ROUTE1026.toField = "set_fraction"

Scene33.children.append(ROUTE1026)
ROUTE1027 = x3d.ROUTE()
ROUTE1027.fromNode = "JumpTimer"
ROUTE1027.fromField = "fraction_changed"
ROUTE1027.toNode = "Jump_r_wrist_RotationInterpolator"
ROUTE1027.toField = "set_fraction"

Scene33.children.append(ROUTE1027)
ROUTE1028 = x3d.ROUTE()
ROUTE1028.fromNode = "JumpTimer"
ROUTE1028.fromField = "fraction_changed"
ROUTE1028.toNode = "Jump_r_elbow_RotationInterpolator"
ROUTE1028.toField = "set_fraction"

Scene33.children.append(ROUTE1028)
ROUTE1029 = x3d.ROUTE()
ROUTE1029.fromNode = "JumpTimer"
ROUTE1029.fromField = "fraction_changed"
ROUTE1029.toNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE1029.toField = "set_fraction"

Scene33.children.append(ROUTE1029)
ROUTE1030 = x3d.ROUTE()
ROUTE1030.fromNode = "JumpTimer"
ROUTE1030.fromField = "fraction_changed"
ROUTE1030.toNode = "Jump_l_wrist_RotationInterpolator"
ROUTE1030.toField = "set_fraction"

Scene33.children.append(ROUTE1030)
ROUTE1031 = x3d.ROUTE()
ROUTE1031.fromNode = "JumpTimer"
ROUTE1031.fromField = "fraction_changed"
ROUTE1031.toNode = "Jump_l_elbow_RotationInterpolator"
ROUTE1031.toField = "set_fraction"

Scene33.children.append(ROUTE1031)
ROUTE1032 = x3d.ROUTE()
ROUTE1032.fromNode = "JumpTimer"
ROUTE1032.fromField = "fraction_changed"
ROUTE1032.toNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE1032.toField = "set_fraction"

Scene33.children.append(ROUTE1032)
ROUTE1033 = x3d.ROUTE()
ROUTE1033.fromNode = "JumpTimer"
ROUTE1033.fromField = "fraction_changed"
ROUTE1033.toNode = "Jump_head_RotationInterpolator"
ROUTE1033.toField = "set_fraction"

Scene33.children.append(ROUTE1033)
ROUTE1034 = x3d.ROUTE()
ROUTE1034.fromNode = "JumpTimer"
ROUTE1034.fromField = "fraction_changed"
ROUTE1034.toNode = "Jump_neck_RotationInterpolator"
ROUTE1034.toField = "set_fraction"

Scene33.children.append(ROUTE1034)
ROUTE1035 = x3d.ROUTE()
ROUTE1035.fromNode = "JumpTimer"
ROUTE1035.fromField = "fraction_changed"
ROUTE1035.toNode = "Jump_upper_body_RotationInterpolator"
ROUTE1035.toField = "set_fraction"

Scene33.children.append(ROUTE1035)
ROUTE1036 = x3d.ROUTE()
ROUTE1036.fromNode = "JumpTimer"
ROUTE1036.fromField = "fraction_changed"
ROUTE1036.toNode = "Jump_whole_body_RotationInterpolator"
ROUTE1036.toField = "set_fraction"

Scene33.children.append(ROUTE1036)
ROUTE1037 = x3d.ROUTE()
ROUTE1037.fromNode = "JumpTimer"
ROUTE1037.fromField = "fraction_changed"
ROUTE1037.toNode = "Jump_whole_body_TranslationInterpolator"
ROUTE1037.toField = "set_fraction"

Scene33.children.append(ROUTE1037)
ROUTE1038 = x3d.ROUTE()
ROUTE1038.fromNode = "JumpTimer"
ROUTE1038.fromField = "fraction_changed"
ROUTE1038.toNode = "Jump_l_sternoclavicular_RollInterpolator"
ROUTE1038.toField = "set_fraction"

Scene33.children.append(ROUTE1038)
ROUTE1039 = x3d.ROUTE()
ROUTE1039.fromNode = "JumpTimer"
ROUTE1039.fromField = "fraction_changed"
ROUTE1039.toNode = "Jump_l_acromioclavicular_RollInterpolator"
ROUTE1039.toField = "set_fraction"

Scene33.children.append(ROUTE1039)
ROUTE1040 = x3d.ROUTE()
ROUTE1040.fromNode = "JumpTimer"
ROUTE1040.fromField = "fraction_changed"
ROUTE1040.toNode = "Jump_r_sternoclavicular_RollInterpolator"
ROUTE1040.toField = "set_fraction"

Scene33.children.append(ROUTE1040)
ROUTE1041 = x3d.ROUTE()
ROUTE1041.fromNode = "JumpTimer"
ROUTE1041.fromField = "fraction_changed"
ROUTE1041.toNode = "Jump_r_acromioclavicular_RollInterpolator"
ROUTE1041.toField = "set_fraction"

Scene33.children.append(ROUTE1041)
ROUTE1042 = x3d.ROUTE()
ROUTE1042.fromNode = "JumpTimer"
ROUTE1042.fromField = "fraction_changed"
ROUTE1042.toNode = "Jump_r_metatarsal_PitchInterpolator"
ROUTE1042.toField = "set_fraction"

Scene33.children.append(ROUTE1042)
ROUTE1043 = x3d.ROUTE()
ROUTE1043.fromNode = "JumpTimer"
ROUTE1043.fromField = "fraction_changed"
ROUTE1043.toNode = "Jump_sacroiliac_YawInterpolator"
ROUTE1043.toField = "set_fraction"

Scene33.children.append(ROUTE1043)
ROUTE1044 = x3d.ROUTE()
ROUTE1044.fromNode = "JumpTimer"
ROUTE1044.fromField = "fraction_changed"
ROUTE1044.toNode = "Jump_vl5_YawInterpolator"
ROUTE1044.toField = "set_fraction"

Scene33.children.append(ROUTE1044)
ROUTE1045 = x3d.ROUTE()
ROUTE1045.fromNode = "JumpTimer"
ROUTE1045.fromField = "fraction_changed"
ROUTE1045.toNode = "Jump_vc6_YawInterpolator"
ROUTE1045.toField = "set_fraction"

Scene33.children.append(ROUTE1045)
ROUTE1046 = x3d.ROUTE()
ROUTE1046.fromNode = "JumpTimer"
ROUTE1046.fromField = "fraction_changed"
ROUTE1046.toNode = "Jump_l_thumb1_PitchInterpolator"
ROUTE1046.toField = "set_fraction"

Scene33.children.append(ROUTE1046)
ROUTE1047 = x3d.ROUTE()
ROUTE1047.fromNode = "JumpTimer"
ROUTE1047.fromField = "fraction_changed"
ROUTE1047.toNode = "Jump_r_thumb1_PitchInterpolator"
ROUTE1047.toField = "set_fraction"

Scene33.children.append(ROUTE1047)
ROUTE1048 = x3d.ROUTE()
ROUTE1048.fromNode = "Jump_r_ankle_RotationInterpolator"
ROUTE1048.fromField = "value_changed"
ROUTE1048.toNode = "boxman_r_ankle"
ROUTE1048.toField = "set_rotation"

Scene33.children.append(ROUTE1048)
ROUTE1049 = x3d.ROUTE()
ROUTE1049.fromNode = "Jump_r_knee_RotationInterpolator"
ROUTE1049.fromField = "value_changed"
ROUTE1049.toNode = "boxman_r_knee"
ROUTE1049.toField = "set_rotation"

Scene33.children.append(ROUTE1049)
ROUTE1050 = x3d.ROUTE()
ROUTE1050.fromNode = "Jump_r_hip_RotationInterpolator"
ROUTE1050.fromField = "value_changed"
ROUTE1050.toNode = "boxman_r_hip"
ROUTE1050.toField = "set_rotation"

Scene33.children.append(ROUTE1050)
ROUTE1051 = x3d.ROUTE()
ROUTE1051.fromNode = "Jump_l_ankle_RotationInterpolator"
ROUTE1051.fromField = "value_changed"
ROUTE1051.toNode = "boxman_l_ankle"
ROUTE1051.toField = "set_rotation"

Scene33.children.append(ROUTE1051)
ROUTE1052 = x3d.ROUTE()
ROUTE1052.fromNode = "Jump_l_knee_RotationInterpolator"
ROUTE1052.fromField = "value_changed"
ROUTE1052.toNode = "boxman_l_knee"
ROUTE1052.toField = "set_rotation"

Scene33.children.append(ROUTE1052)
ROUTE1053 = x3d.ROUTE()
ROUTE1053.fromNode = "Jump_l_hip_RotationInterpolator"
ROUTE1053.fromField = "value_changed"
ROUTE1053.toNode = "boxman_l_hip"
ROUTE1053.toField = "set_rotation"

Scene33.children.append(ROUTE1053)
ROUTE1054 = x3d.ROUTE()
ROUTE1054.fromNode = "Jump_r_wrist_RotationInterpolator"
ROUTE1054.fromField = "value_changed"
ROUTE1054.toNode = "boxman_r_wrist"
ROUTE1054.toField = "set_rotation"

Scene33.children.append(ROUTE1054)
ROUTE1055 = x3d.ROUTE()
ROUTE1055.fromNode = "Jump_r_elbow_RotationInterpolator"
ROUTE1055.fromField = "value_changed"
ROUTE1055.toNode = "boxman_r_elbow"
ROUTE1055.toField = "set_rotation"

Scene33.children.append(ROUTE1055)
ROUTE1056 = x3d.ROUTE()
ROUTE1056.fromNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE1056.fromField = "value_changed"
ROUTE1056.toNode = "boxman_r_shoulder"
ROUTE1056.toField = "set_rotation"

Scene33.children.append(ROUTE1056)
ROUTE1057 = x3d.ROUTE()
ROUTE1057.fromNode = "Jump_l_wrist_RotationInterpolator"
ROUTE1057.fromField = "value_changed"
ROUTE1057.toNode = "boxman_l_wrist"
ROUTE1057.toField = "set_rotation"

Scene33.children.append(ROUTE1057)
ROUTE1058 = x3d.ROUTE()
ROUTE1058.fromNode = "Jump_l_elbow_RotationInterpolator"
ROUTE1058.fromField = "value_changed"
ROUTE1058.toNode = "boxman_l_elbow"
ROUTE1058.toField = "set_rotation"

Scene33.children.append(ROUTE1058)
ROUTE1059 = x3d.ROUTE()
ROUTE1059.fromNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE1059.fromField = "value_changed"
ROUTE1059.toNode = "boxman_l_shoulder"
ROUTE1059.toField = "set_rotation"

Scene33.children.append(ROUTE1059)
ROUTE1060 = x3d.ROUTE()
ROUTE1060.fromNode = "Jump_head_RotationInterpolator"
ROUTE1060.fromField = "value_changed"
ROUTE1060.toNode = "boxman_skullbase"
ROUTE1060.toField = "set_rotation"

Scene33.children.append(ROUTE1060)
ROUTE1061 = x3d.ROUTE()
ROUTE1061.fromNode = "Jump_whole_body_RotationInterpolator"
ROUTE1061.fromField = "value_changed"
ROUTE1061.toNode = "boxman_humanoid_root"
ROUTE1061.toField = "set_rotation"

Scene33.children.append(ROUTE1061)
ROUTE1062 = x3d.ROUTE()
ROUTE1062.fromNode = "Jump_whole_body_TranslationInterpolator"
ROUTE1062.fromField = "value_changed"
ROUTE1062.toNode = "boxman_humanoid_root"
ROUTE1062.toField = "set_translation"

Scene33.children.append(ROUTE1062)
ROUTE1063 = x3d.ROUTE()
ROUTE1063.fromNode = "Jump_vl5_YawInterpolator"
ROUTE1063.fromField = "value_changed"
ROUTE1063.toNode = "boxman_vl5"
ROUTE1063.toField = "set_rotation"

Scene33.children.append(ROUTE1063)
ROUTE1064 = x3d.ROUTE()
ROUTE1064.fromNode = "KickTimer"
ROUTE1064.fromField = "fraction_changed"
ROUTE1064.toNode = "Kick_l_sternoclavicular_RollInterpolator"
ROUTE1064.toField = "set_fraction"

Scene33.children.append(ROUTE1064)
ROUTE1065 = x3d.ROUTE()
ROUTE1065.fromNode = "KickTimer"
ROUTE1065.fromField = "fraction_changed"
ROUTE1065.toNode = "Kick_l_acromioclavicular_RollInterpolator"
ROUTE1065.toField = "set_fraction"

Scene33.children.append(ROUTE1065)
ROUTE1066 = x3d.ROUTE()
ROUTE1066.fromNode = "KickTimer"
ROUTE1066.fromField = "fraction_changed"
ROUTE1066.toNode = "Kick_l_shoulder_RollInterpolator"
ROUTE1066.toField = "set_fraction"

Scene33.children.append(ROUTE1066)
ROUTE1067 = x3d.ROUTE()
ROUTE1067.fromNode = "KickTimer"
ROUTE1067.fromField = "fraction_changed"
ROUTE1067.toNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE1067.toField = "set_fraction"

Scene33.children.append(ROUTE1067)
ROUTE1068 = x3d.ROUTE()
ROUTE1068.fromNode = "KickTimer"
ROUTE1068.fromField = "fraction_changed"
ROUTE1068.toNode = "Kick_l_wrist_RollInterpolator"
ROUTE1068.toField = "set_fraction"

Scene33.children.append(ROUTE1068)
ROUTE1069 = x3d.ROUTE()
ROUTE1069.fromNode = "KickTimer"
ROUTE1069.fromField = "fraction_changed"
ROUTE1069.toNode = "Kick_l_thumb1_PitchInterpolator"
ROUTE1069.toField = "set_fraction"

Scene33.children.append(ROUTE1069)
ROUTE1070 = x3d.ROUTE()
ROUTE1070.fromNode = "KickTimer"
ROUTE1070.fromField = "fraction_changed"
ROUTE1070.toNode = "Kick_r_sternoclavicular_RollInterpolator"
ROUTE1070.toField = "set_fraction"

Scene33.children.append(ROUTE1070)
ROUTE1071 = x3d.ROUTE()
ROUTE1071.fromNode = "KickTimer"
ROUTE1071.fromField = "fraction_changed"
ROUTE1071.toNode = "Kick_r_acromioclavicular_RollInterpolator"
ROUTE1071.toField = "set_fraction"

Scene33.children.append(ROUTE1071)
ROUTE1072 = x3d.ROUTE()
ROUTE1072.fromNode = "KickTimer"
ROUTE1072.fromField = "fraction_changed"
ROUTE1072.toNode = "Kick_r_shoulder_RollInterpolator"
ROUTE1072.toField = "set_fraction"

Scene33.children.append(ROUTE1072)
ROUTE1073 = x3d.ROUTE()
ROUTE1073.fromNode = "KickTimer"
ROUTE1073.fromField = "fraction_changed"
ROUTE1073.toNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE1073.toField = "set_fraction"

Scene33.children.append(ROUTE1073)
ROUTE1074 = x3d.ROUTE()
ROUTE1074.fromNode = "KickTimer"
ROUTE1074.fromField = "fraction_changed"
ROUTE1074.toNode = "Kick_r_wrist_RollInterpolator"
ROUTE1074.toField = "set_fraction"

Scene33.children.append(ROUTE1074)
ROUTE1075 = x3d.ROUTE()
ROUTE1075.fromNode = "KickTimer"
ROUTE1075.fromField = "fraction_changed"
ROUTE1075.toNode = "Kick_r_thumb1_PitchInterpolator"
ROUTE1075.toField = "set_fraction"

Scene33.children.append(ROUTE1075)
ROUTE1076 = x3d.ROUTE()
ROUTE1076.fromNode = "KickTimer"
ROUTE1076.fromField = "fraction_changed"
ROUTE1076.toNode = "Kick_r_hip_PitchInterpolator"
ROUTE1076.toField = "set_fraction"

Scene33.children.append(ROUTE1076)
ROUTE1077 = x3d.ROUTE()
ROUTE1077.fromNode = "KickTimer"
ROUTE1077.fromField = "fraction_changed"
ROUTE1077.toNode = "Kick_r_knee_PitchInterpolator"
ROUTE1077.toField = "set_fraction"

Scene33.children.append(ROUTE1077)
ROUTE1078 = x3d.ROUTE()
ROUTE1078.fromNode = "KickTimer"
ROUTE1078.fromField = "fraction_changed"
ROUTE1078.toNode = "Kick_l_hip_PitchInterpolator"
ROUTE1078.toField = "set_fraction"

Scene33.children.append(ROUTE1078)
ROUTE1079 = x3d.ROUTE()
ROUTE1079.fromNode = "KickTimer"
ROUTE1079.fromField = "fraction_changed"
ROUTE1079.toNode = "Kick_l_knee_PitchInterpolator"
ROUTE1079.toField = "set_fraction"

Scene33.children.append(ROUTE1079)
ROUTE1080 = x3d.ROUTE()
ROUTE1080.fromNode = "KickTimer"
ROUTE1080.fromField = "fraction_changed"
ROUTE1080.toNode = "Kick_r_ankle_PitchInterpolator"
ROUTE1080.toField = "set_fraction"

Scene33.children.append(ROUTE1080)
ROUTE1081 = x3d.ROUTE()
ROUTE1081.fromNode = "KickTimer"
ROUTE1081.fromField = "fraction_changed"
ROUTE1081.toNode = "Kick_r_metatarsal_PitchInterpolator"
ROUTE1081.toField = "set_fraction"

Scene33.children.append(ROUTE1081)
ROUTE1082 = x3d.ROUTE()
ROUTE1082.fromNode = "KickTimer"
ROUTE1082.fromField = "fraction_changed"
ROUTE1082.toNode = "Kick_sacroiliac_YawInterpolator"
ROUTE1082.toField = "set_fraction"

Scene33.children.append(ROUTE1082)
ROUTE1083 = x3d.ROUTE()
ROUTE1083.fromNode = "KickTimer"
ROUTE1083.fromField = "fraction_changed"
ROUTE1083.toNode = "Kick_vl5_YawInterpolator"
ROUTE1083.toField = "set_fraction"

Scene33.children.append(ROUTE1083)
ROUTE1084 = x3d.ROUTE()
ROUTE1084.fromNode = "KickTimer"
ROUTE1084.fromField = "fraction_changed"
ROUTE1084.toNode = "Kick_vc6_YawInterpolator"
ROUTE1084.toField = "set_fraction"

Scene33.children.append(ROUTE1084)
ROUTE1085 = x3d.ROUTE()
ROUTE1085.fromNode = "KickTimer"
ROUTE1085.fromField = "fraction_changed"
ROUTE1085.toNode = "Kick_lower_body_RotationInterpolator"
ROUTE1085.toField = "set_fraction"

Scene33.children.append(ROUTE1085)
ROUTE1086 = x3d.ROUTE()
ROUTE1086.fromNode = "KickTimer"
ROUTE1086.fromField = "fraction_changed"
ROUTE1086.toNode = "Kick_upper_body_RotationInterpolator"
ROUTE1086.toField = "set_fraction"

Scene33.children.append(ROUTE1086)
ROUTE1087 = x3d.ROUTE()
ROUTE1087.fromNode = "KickTimer"
ROUTE1087.fromField = "fraction_changed"
ROUTE1087.toNode = "Kick_whole_body_RotationInterpolator"
ROUTE1087.toField = "set_fraction"

Scene33.children.append(ROUTE1087)
ROUTE1088 = x3d.ROUTE()
ROUTE1088.fromNode = "KickTimer"
ROUTE1088.fromField = "fraction_changed"
ROUTE1088.toNode = "Kick_whole_body_TranslationInterpolator"
ROUTE1088.toField = "set_fraction"

Scene33.children.append(ROUTE1088)
ROUTE1089 = x3d.ROUTE()
ROUTE1089.fromNode = "KickTimer"
ROUTE1089.fromField = "fraction_changed"
ROUTE1089.toNode = "Kick_neck_RotationInterpolator"
ROUTE1089.toField = "set_fraction"

Scene33.children.append(ROUTE1089)
ROUTE1090 = x3d.ROUTE()
ROUTE1090.fromNode = "Kick_l_shoulder_RollInterpolator"
ROUTE1090.fromField = "value_changed"
ROUTE1090.toNode = "boxman_l_shoulder"
ROUTE1090.toField = "set_rotation"

Scene33.children.append(ROUTE1090)
ROUTE1091 = x3d.ROUTE()
ROUTE1091.fromNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE1091.fromField = "value_changed"
ROUTE1091.toNode = "boxman_l_elbow"
ROUTE1091.toField = "set_rotation"

Scene33.children.append(ROUTE1091)
ROUTE1092 = x3d.ROUTE()
ROUTE1092.fromNode = "Kick_l_wrist_RollInterpolator"
ROUTE1092.fromField = "value_changed"
ROUTE1092.toNode = "boxman_l_wrist"
ROUTE1092.toField = "set_rotation"

Scene33.children.append(ROUTE1092)
ROUTE1093 = x3d.ROUTE()
ROUTE1093.fromNode = "Kick_r_shoulder_RollInterpolator"
ROUTE1093.fromField = "value_changed"
ROUTE1093.toNode = "boxman_r_shoulder"
ROUTE1093.toField = "set_rotation"

Scene33.children.append(ROUTE1093)
ROUTE1094 = x3d.ROUTE()
ROUTE1094.fromNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE1094.fromField = "value_changed"
ROUTE1094.toNode = "boxman_r_elbow"
ROUTE1094.toField = "set_rotation"

Scene33.children.append(ROUTE1094)
ROUTE1095 = x3d.ROUTE()
ROUTE1095.fromNode = "Kick_r_wrist_RollInterpolator"
ROUTE1095.fromField = "value_changed"
ROUTE1095.toNode = "boxman_r_wrist"
ROUTE1095.toField = "set_rotation"

Scene33.children.append(ROUTE1095)
ROUTE1096 = x3d.ROUTE()
ROUTE1096.fromNode = "Kick_r_hip_PitchInterpolator"
ROUTE1096.fromField = "value_changed"
ROUTE1096.toNode = "boxman_r_hip"
ROUTE1096.toField = "set_rotation"

Scene33.children.append(ROUTE1096)
ROUTE1097 = x3d.ROUTE()
ROUTE1097.fromNode = "Kick_r_knee_PitchInterpolator"
ROUTE1097.fromField = "value_changed"
ROUTE1097.toNode = "boxman_r_knee"
ROUTE1097.toField = "set_rotation"

Scene33.children.append(ROUTE1097)
ROUTE1098 = x3d.ROUTE()
ROUTE1098.fromNode = "Kick_r_ankle_PitchInterpolator"
ROUTE1098.fromField = "value_changed"
ROUTE1098.toNode = "boxman_r_ankle"
ROUTE1098.toField = "set_rotation"

Scene33.children.append(ROUTE1098)
ROUTE1099 = x3d.ROUTE()
ROUTE1099.fromNode = "Kick_l_hip_PitchInterpolator"
ROUTE1099.fromField = "value_changed"
ROUTE1099.toNode = "boxman_l_hip"
ROUTE1099.toField = "set_rotation"

Scene33.children.append(ROUTE1099)
ROUTE1100 = x3d.ROUTE()
ROUTE1100.fromNode = "Kick_l_knee_PitchInterpolator"
ROUTE1100.fromField = "value_changed"
ROUTE1100.toNode = "boxman_l_knee"
ROUTE1100.toField = "set_rotation"

Scene33.children.append(ROUTE1100)
ROUTE1101 = x3d.ROUTE()
ROUTE1101.fromNode = "Kick_r_ankle_PitchInterpolator"
ROUTE1101.fromField = "value_changed"
ROUTE1101.toNode = "boxman_l_ankle"
ROUTE1101.toField = "set_rotation"

Scene33.children.append(ROUTE1101)
ROUTE1102 = x3d.ROUTE()
ROUTE1102.fromNode = "Kick_vl5_YawInterpolator"
ROUTE1102.fromField = "value_changed"
ROUTE1102.toNode = "boxman_vl5"
ROUTE1102.toField = "set_rotation"

Scene33.children.append(ROUTE1102)
ROUTE1103 = x3d.ROUTE()
ROUTE1103.fromNode = "Kick_whole_body_RotationInterpolator"
ROUTE1103.fromField = "value_changed"
ROUTE1103.toNode = "boxman_humanoid_root"
ROUTE1103.toField = "set_rotation"

Scene33.children.append(ROUTE1103)
ROUTE1104 = x3d.ROUTE()
ROUTE1104.fromNode = "Kick_whole_body_TranslationInterpolator"
ROUTE1104.fromField = "value_changed"
ROUTE1104.toNode = "boxman_humanoid_root"
ROUTE1104.toField = "set_translation"

Scene33.children.append(ROUTE1104)
ROUTE1105 = x3d.ROUTE()
ROUTE1105.fromNode = "HudProx"
ROUTE1105.fromField = "position_changed"
ROUTE1105.toNode = "HudXform"
ROUTE1105.toField = "set_translation"

Scene33.children.append(ROUTE1105)
ROUTE1106 = x3d.ROUTE()
ROUTE1106.fromNode = "HudProx"
ROUTE1106.fromField = "orientation_changed"
ROUTE1106.toNode = "HudXform"
ROUTE1106.toField = "set_rotation"

Scene33.children.append(ROUTE1106)
ROUTE1107 = x3d.ROUTE()
ROUTE1107.fromNode = "Stand_Touch"
ROUTE1107.fromField = "touchTime"
ROUTE1107.toNode = "PitchTimer"
ROUTE1107.toField = "set_stopTime"

Scene33.children.append(ROUTE1107)
ROUTE1108 = x3d.ROUTE()
ROUTE1108.fromNode = "Stand_Touch"
ROUTE1108.fromField = "touchTime"
ROUTE1108.toNode = "YawTimer"
ROUTE1108.toField = "set_stopTime"

Scene33.children.append(ROUTE1108)
ROUTE1109 = x3d.ROUTE()
ROUTE1109.fromNode = "Stand_Touch"
ROUTE1109.fromField = "touchTime"
ROUTE1109.toNode = "RollTimer"
ROUTE1109.toField = "set_stopTime"

Scene33.children.append(ROUTE1109)
ROUTE1110 = x3d.ROUTE()
ROUTE1110.fromNode = "Stand_Touch"
ROUTE1110.fromField = "touchTime"
ROUTE1110.toNode = "WalkTimer"
ROUTE1110.toField = "set_stopTime"

Scene33.children.append(ROUTE1110)
ROUTE1111 = x3d.ROUTE()
ROUTE1111.fromNode = "Stand_Touch"
ROUTE1111.fromField = "touchTime"
ROUTE1111.toNode = "RunTimer"
ROUTE1111.toField = "set_stopTime"

Scene33.children.append(ROUTE1111)
ROUTE1112 = x3d.ROUTE()
ROUTE1112.fromNode = "Stand_Touch"
ROUTE1112.fromField = "touchTime"
ROUTE1112.toNode = "JumpTimer"
ROUTE1112.toField = "set_stopTime"

Scene33.children.append(ROUTE1112)
ROUTE1113 = x3d.ROUTE()
ROUTE1113.fromNode = "Stand_Touch"
ROUTE1113.fromField = "touchTime"
ROUTE1113.toNode = "KickTimer"
ROUTE1113.toField = "set_stopTime"

Scene33.children.append(ROUTE1113)
ROUTE1114 = x3d.ROUTE()
ROUTE1114.fromNode = "Stand_Touch"
ROUTE1114.fromField = "touchTime"
ROUTE1114.toNode = "StopTimer"
ROUTE1114.toField = "set_stopTime"

Scene33.children.append(ROUTE1114)
ROUTE1115 = x3d.ROUTE()
ROUTE1115.fromNode = "Stand_Touch"
ROUTE1115.fromField = "touchTime"
ROUTE1115.toNode = "StandTimer"
ROUTE1115.toField = "set_startTime"

Scene33.children.append(ROUTE1115)
ROUTE1116 = x3d.ROUTE()
ROUTE1116.fromNode = "Pitch_Touch"
ROUTE1116.fromField = "touchTime"
ROUTE1116.toNode = "StandTimer"
ROUTE1116.toField = "set_stopTime"

Scene33.children.append(ROUTE1116)
ROUTE1117 = x3d.ROUTE()
ROUTE1117.fromNode = "Pitch_Touch"
ROUTE1117.fromField = "touchTime"
ROUTE1117.toNode = "YawTimer"
ROUTE1117.toField = "set_stopTime"

Scene33.children.append(ROUTE1117)
ROUTE1118 = x3d.ROUTE()
ROUTE1118.fromNode = "Pitch_Touch"
ROUTE1118.fromField = "touchTime"
ROUTE1118.toNode = "RollTimer"
ROUTE1118.toField = "set_stopTime"

Scene33.children.append(ROUTE1118)
ROUTE1119 = x3d.ROUTE()
ROUTE1119.fromNode = "Pitch_Touch"
ROUTE1119.fromField = "touchTime"
ROUTE1119.toNode = "WalkTimer"
ROUTE1119.toField = "set_stopTime"

Scene33.children.append(ROUTE1119)
ROUTE1120 = x3d.ROUTE()
ROUTE1120.fromNode = "Pitch_Touch"
ROUTE1120.fromField = "touchTime"
ROUTE1120.toNode = "RunTimer"
ROUTE1120.toField = "set_stopTime"

Scene33.children.append(ROUTE1120)
ROUTE1121 = x3d.ROUTE()
ROUTE1121.fromNode = "Pitch_Touch"
ROUTE1121.fromField = "touchTime"
ROUTE1121.toNode = "JumpTimer"
ROUTE1121.toField = "set_stopTime"

Scene33.children.append(ROUTE1121)
ROUTE1122 = x3d.ROUTE()
ROUTE1122.fromNode = "Pitch_Touch"
ROUTE1122.fromField = "touchTime"
ROUTE1122.toNode = "KickTimer"
ROUTE1122.toField = "set_stopTime"

Scene33.children.append(ROUTE1122)
ROUTE1123 = x3d.ROUTE()
ROUTE1123.fromNode = "Pitch_Touch"
ROUTE1123.fromField = "touchTime"
ROUTE1123.toNode = "StopTimer"
ROUTE1123.toField = "set_stopTime"

Scene33.children.append(ROUTE1123)
ROUTE1124 = x3d.ROUTE()
ROUTE1124.fromNode = "Pitch_Touch"
ROUTE1124.fromField = "touchTime"
ROUTE1124.toNode = "PitchTimer"
ROUTE1124.toField = "set_startTime"

Scene33.children.append(ROUTE1124)
ROUTE1125 = x3d.ROUTE()
ROUTE1125.fromNode = "Yaw_Touch"
ROUTE1125.fromField = "touchTime"
ROUTE1125.toNode = "StandTimer"
ROUTE1125.toField = "set_stopTime"

Scene33.children.append(ROUTE1125)
ROUTE1126 = x3d.ROUTE()
ROUTE1126.fromNode = "Yaw_Touch"
ROUTE1126.fromField = "touchTime"
ROUTE1126.toNode = "PitchTimer"
ROUTE1126.toField = "set_stopTime"

Scene33.children.append(ROUTE1126)
ROUTE1127 = x3d.ROUTE()
ROUTE1127.fromNode = "Yaw_Touch"
ROUTE1127.fromField = "touchTime"
ROUTE1127.toNode = "RollTimer"
ROUTE1127.toField = "set_stopTime"

Scene33.children.append(ROUTE1127)
ROUTE1128 = x3d.ROUTE()
ROUTE1128.fromNode = "Yaw_Touch"
ROUTE1128.fromField = "touchTime"
ROUTE1128.toNode = "WalkTimer"
ROUTE1128.toField = "set_stopTime"

Scene33.children.append(ROUTE1128)
ROUTE1129 = x3d.ROUTE()
ROUTE1129.fromNode = "Yaw_Touch"
ROUTE1129.fromField = "touchTime"
ROUTE1129.toNode = "RunTimer"
ROUTE1129.toField = "set_stopTime"

Scene33.children.append(ROUTE1129)
ROUTE1130 = x3d.ROUTE()
ROUTE1130.fromNode = "Yaw_Touch"
ROUTE1130.fromField = "touchTime"
ROUTE1130.toNode = "JumpTimer"
ROUTE1130.toField = "set_stopTime"

Scene33.children.append(ROUTE1130)
ROUTE1131 = x3d.ROUTE()
ROUTE1131.fromNode = "Yaw_Touch"
ROUTE1131.fromField = "touchTime"
ROUTE1131.toNode = "KickTimer"
ROUTE1131.toField = "set_stopTime"

Scene33.children.append(ROUTE1131)
ROUTE1132 = x3d.ROUTE()
ROUTE1132.fromNode = "Yaw_Touch"
ROUTE1132.fromField = "touchTime"
ROUTE1132.toNode = "StopTimer"
ROUTE1132.toField = "set_stopTime"

Scene33.children.append(ROUTE1132)
ROUTE1133 = x3d.ROUTE()
ROUTE1133.fromNode = "Yaw_Touch"
ROUTE1133.fromField = "touchTime"
ROUTE1133.toNode = "YawTimer"
ROUTE1133.toField = "set_startTime"

Scene33.children.append(ROUTE1133)
ROUTE1134 = x3d.ROUTE()
ROUTE1134.fromNode = "Walk_Touch"
ROUTE1134.fromField = "touchTime"
ROUTE1134.toNode = "StandTimer"
ROUTE1134.toField = "set_stopTime"

Scene33.children.append(ROUTE1134)
ROUTE1135 = x3d.ROUTE()
ROUTE1135.fromNode = "Walk_Touch"
ROUTE1135.fromField = "touchTime"
ROUTE1135.toNode = "PitchTimer"
ROUTE1135.toField = "set_stopTime"

Scene33.children.append(ROUTE1135)
ROUTE1136 = x3d.ROUTE()
ROUTE1136.fromNode = "Walk_Touch"
ROUTE1136.fromField = "touchTime"
ROUTE1136.toNode = "YawTimer"
ROUTE1136.toField = "set_stopTime"

Scene33.children.append(ROUTE1136)
ROUTE1137 = x3d.ROUTE()
ROUTE1137.fromNode = "Walk_Touch"
ROUTE1137.fromField = "touchTime"
ROUTE1137.toNode = "RollTimer"
ROUTE1137.toField = "set_stopTime"

Scene33.children.append(ROUTE1137)
ROUTE1138 = x3d.ROUTE()
ROUTE1138.fromNode = "Walk_Touch"
ROUTE1138.fromField = "touchTime"
ROUTE1138.toNode = "RunTimer"
ROUTE1138.toField = "set_stopTime"

Scene33.children.append(ROUTE1138)
ROUTE1139 = x3d.ROUTE()
ROUTE1139.fromNode = "Walk_Touch"
ROUTE1139.fromField = "touchTime"
ROUTE1139.toNode = "JumpTimer"
ROUTE1139.toField = "set_stopTime"

Scene33.children.append(ROUTE1139)
ROUTE1140 = x3d.ROUTE()
ROUTE1140.fromNode = "Walk_Touch"
ROUTE1140.fromField = "touchTime"
ROUTE1140.toNode = "KickTimer"
ROUTE1140.toField = "set_stopTime"

Scene33.children.append(ROUTE1140)
ROUTE1141 = x3d.ROUTE()
ROUTE1141.fromNode = "Walk_Touch"
ROUTE1141.fromField = "touchTime"
ROUTE1141.toNode = "StopTimer"
ROUTE1141.toField = "set_stopTime"

Scene33.children.append(ROUTE1141)
ROUTE1142 = x3d.ROUTE()
ROUTE1142.fromNode = "Walk_Touch"
ROUTE1142.fromField = "touchTime"
ROUTE1142.toNode = "WalkTimer"
ROUTE1142.toField = "set_startTime"

Scene33.children.append(ROUTE1142)
ROUTE1143 = x3d.ROUTE()
ROUTE1143.fromNode = "Roll_Touch"
ROUTE1143.fromField = "touchTime"
ROUTE1143.toNode = "StandTimer"
ROUTE1143.toField = "set_stopTime"

Scene33.children.append(ROUTE1143)
ROUTE1144 = x3d.ROUTE()
ROUTE1144.fromNode = "Roll_Touch"
ROUTE1144.fromField = "touchTime"
ROUTE1144.toNode = "PitchTimer"
ROUTE1144.toField = "set_stopTime"

Scene33.children.append(ROUTE1144)
ROUTE1145 = x3d.ROUTE()
ROUTE1145.fromNode = "Roll_Touch"
ROUTE1145.fromField = "touchTime"
ROUTE1145.toNode = "YawTimer"
ROUTE1145.toField = "set_stopTime"

Scene33.children.append(ROUTE1145)
ROUTE1146 = x3d.ROUTE()
ROUTE1146.fromNode = "Roll_Touch"
ROUTE1146.fromField = "touchTime"
ROUTE1146.toNode = "WalkTimer"
ROUTE1146.toField = "set_stopTime"

Scene33.children.append(ROUTE1146)
ROUTE1147 = x3d.ROUTE()
ROUTE1147.fromNode = "Roll_Touch"
ROUTE1147.fromField = "touchTime"
ROUTE1147.toNode = "RunTimer"
ROUTE1147.toField = "set_stopTime"

Scene33.children.append(ROUTE1147)
ROUTE1148 = x3d.ROUTE()
ROUTE1148.fromNode = "Roll_Touch"
ROUTE1148.fromField = "touchTime"
ROUTE1148.toNode = "JumpTimer"
ROUTE1148.toField = "set_stopTime"

Scene33.children.append(ROUTE1148)
ROUTE1149 = x3d.ROUTE()
ROUTE1149.fromNode = "Roll_Touch"
ROUTE1149.fromField = "touchTime"
ROUTE1149.toNode = "KickTimer"
ROUTE1149.toField = "set_stopTime"

Scene33.children.append(ROUTE1149)
ROUTE1150 = x3d.ROUTE()
ROUTE1150.fromNode = "Roll_Touch"
ROUTE1150.fromField = "touchTime"
ROUTE1150.toNode = "StopTimer"
ROUTE1150.toField = "set_stopTime"

Scene33.children.append(ROUTE1150)
ROUTE1151 = x3d.ROUTE()
ROUTE1151.fromNode = "Roll_Touch"
ROUTE1151.fromField = "touchTime"
ROUTE1151.toNode = "RollTimer"
ROUTE1151.toField = "set_startTime"

Scene33.children.append(ROUTE1151)
ROUTE1152 = x3d.ROUTE()
ROUTE1152.fromNode = "Run_Touch"
ROUTE1152.fromField = "touchTime"
ROUTE1152.toNode = "StandTimer"
ROUTE1152.toField = "set_stopTime"

Scene33.children.append(ROUTE1152)
ROUTE1153 = x3d.ROUTE()
ROUTE1153.fromNode = "Run_Touch"
ROUTE1153.fromField = "touchTime"
ROUTE1153.toNode = "PitchTimer"
ROUTE1153.toField = "set_stopTime"

Scene33.children.append(ROUTE1153)
ROUTE1154 = x3d.ROUTE()
ROUTE1154.fromNode = "Run_Touch"
ROUTE1154.fromField = "touchTime"
ROUTE1154.toNode = "YawTimer"
ROUTE1154.toField = "set_stopTime"

Scene33.children.append(ROUTE1154)
ROUTE1155 = x3d.ROUTE()
ROUTE1155.fromNode = "Run_Touch"
ROUTE1155.fromField = "touchTime"
ROUTE1155.toNode = "RollTimer"
ROUTE1155.toField = "set_stopTime"

Scene33.children.append(ROUTE1155)
ROUTE1156 = x3d.ROUTE()
ROUTE1156.fromNode = "Run_Touch"
ROUTE1156.fromField = "touchTime"
ROUTE1156.toNode = "WalkTimer"
ROUTE1156.toField = "set_stopTime"

Scene33.children.append(ROUTE1156)
ROUTE1157 = x3d.ROUTE()
ROUTE1157.fromNode = "Run_Touch"
ROUTE1157.fromField = "touchTime"
ROUTE1157.toNode = "JumpTimer"
ROUTE1157.toField = "set_stopTime"

Scene33.children.append(ROUTE1157)
ROUTE1158 = x3d.ROUTE()
ROUTE1158.fromNode = "Run_Touch"
ROUTE1158.fromField = "touchTime"
ROUTE1158.toNode = "KickTimer"
ROUTE1158.toField = "set_stopTime"

Scene33.children.append(ROUTE1158)
ROUTE1159 = x3d.ROUTE()
ROUTE1159.fromNode = "Run_Touch"
ROUTE1159.fromField = "touchTime"
ROUTE1159.toNode = "StopTimer"
ROUTE1159.toField = "set_stopTime"

Scene33.children.append(ROUTE1159)
ROUTE1160 = x3d.ROUTE()
ROUTE1160.fromNode = "Run_Touch"
ROUTE1160.fromField = "touchTime"
ROUTE1160.toNode = "RunTimer"
ROUTE1160.toField = "set_startTime"

Scene33.children.append(ROUTE1160)
ROUTE1161 = x3d.ROUTE()
ROUTE1161.fromNode = "Jump_Touch"
ROUTE1161.fromField = "touchTime"
ROUTE1161.toNode = "StandTimer"
ROUTE1161.toField = "set_stopTime"

Scene33.children.append(ROUTE1161)
ROUTE1162 = x3d.ROUTE()
ROUTE1162.fromNode = "Jump_Touch"
ROUTE1162.fromField = "touchTime"
ROUTE1162.toNode = "PitchTimer"
ROUTE1162.toField = "set_stopTime"

Scene33.children.append(ROUTE1162)
ROUTE1163 = x3d.ROUTE()
ROUTE1163.fromNode = "Jump_Touch"
ROUTE1163.fromField = "touchTime"
ROUTE1163.toNode = "YawTimer"
ROUTE1163.toField = "set_stopTime"

Scene33.children.append(ROUTE1163)
ROUTE1164 = x3d.ROUTE()
ROUTE1164.fromNode = "Jump_Touch"
ROUTE1164.fromField = "touchTime"
ROUTE1164.toNode = "RollTimer"
ROUTE1164.toField = "set_stopTime"

Scene33.children.append(ROUTE1164)
ROUTE1165 = x3d.ROUTE()
ROUTE1165.fromNode = "Jump_Touch"
ROUTE1165.fromField = "touchTime"
ROUTE1165.toNode = "WalkTimer"
ROUTE1165.toField = "set_stopTime"

Scene33.children.append(ROUTE1165)
ROUTE1166 = x3d.ROUTE()
ROUTE1166.fromNode = "Jump_Touch"
ROUTE1166.fromField = "touchTime"
ROUTE1166.toNode = "RunTimer"
ROUTE1166.toField = "set_stopTime"

Scene33.children.append(ROUTE1166)
ROUTE1167 = x3d.ROUTE()
ROUTE1167.fromNode = "Jump_Touch"
ROUTE1167.fromField = "touchTime"
ROUTE1167.toNode = "KickTimer"
ROUTE1167.toField = "set_stopTime"

Scene33.children.append(ROUTE1167)
ROUTE1168 = x3d.ROUTE()
ROUTE1168.fromNode = "Jump_Touch"
ROUTE1168.fromField = "touchTime"
ROUTE1168.toNode = "StopTimer"
ROUTE1168.toField = "set_stopTime"

Scene33.children.append(ROUTE1168)
ROUTE1169 = x3d.ROUTE()
ROUTE1169.fromNode = "Jump_Touch"
ROUTE1169.fromField = "touchTime"
ROUTE1169.toNode = "JumpTimer"
ROUTE1169.toField = "set_startTime"

Scene33.children.append(ROUTE1169)
ROUTE1170 = x3d.ROUTE()
ROUTE1170.fromNode = "Kick_Touch"
ROUTE1170.fromField = "touchTime"
ROUTE1170.toNode = "StandTimer"
ROUTE1170.toField = "set_stopTime"

Scene33.children.append(ROUTE1170)
ROUTE1171 = x3d.ROUTE()
ROUTE1171.fromNode = "Kick_Touch"
ROUTE1171.fromField = "touchTime"
ROUTE1171.toNode = "PitchTimer"
ROUTE1171.toField = "set_stopTime"

Scene33.children.append(ROUTE1171)
ROUTE1172 = x3d.ROUTE()
ROUTE1172.fromNode = "Kick_Touch"
ROUTE1172.fromField = "touchTime"
ROUTE1172.toNode = "YawTimer"
ROUTE1172.toField = "set_stopTime"

Scene33.children.append(ROUTE1172)
ROUTE1173 = x3d.ROUTE()
ROUTE1173.fromNode = "Kick_Touch"
ROUTE1173.fromField = "touchTime"
ROUTE1173.toNode = "RollTimer"
ROUTE1173.toField = "set_stopTime"

Scene33.children.append(ROUTE1173)
ROUTE1174 = x3d.ROUTE()
ROUTE1174.fromNode = "Kick_Touch"
ROUTE1174.fromField = "touchTime"
ROUTE1174.toNode = "WalkTimer"
ROUTE1174.toField = "set_stopTime"

Scene33.children.append(ROUTE1174)
ROUTE1175 = x3d.ROUTE()
ROUTE1175.fromNode = "Kick_Touch"
ROUTE1175.fromField = "touchTime"
ROUTE1175.toNode = "RunTimer"
ROUTE1175.toField = "set_stopTime"

Scene33.children.append(ROUTE1175)
ROUTE1176 = x3d.ROUTE()
ROUTE1176.fromNode = "Kick_Touch"
ROUTE1176.fromField = "touchTime"
ROUTE1176.toNode = "JumpTimer"
ROUTE1176.toField = "set_stopTime"

Scene33.children.append(ROUTE1176)
ROUTE1177 = x3d.ROUTE()
ROUTE1177.fromNode = "Kick_Touch"
ROUTE1177.fromField = "touchTime"
ROUTE1177.toNode = "StopTimer"
ROUTE1177.toField = "set_stopTime"

Scene33.children.append(ROUTE1177)
ROUTE1178 = x3d.ROUTE()
ROUTE1178.fromNode = "Kick_Touch"
ROUTE1178.fromField = "touchTime"
ROUTE1178.toNode = "KickTimer"
ROUTE1178.toField = "set_startTime"

Scene33.children.append(ROUTE1178)
ROUTE1179 = x3d.ROUTE()
ROUTE1179.fromNode = "Stop_Touch"
ROUTE1179.fromField = "touchTime"
ROUTE1179.toNode = "StandTimer"
ROUTE1179.toField = "set_stopTime"

Scene33.children.append(ROUTE1179)
ROUTE1180 = x3d.ROUTE()
ROUTE1180.fromNode = "Stop_Touch"
ROUTE1180.fromField = "touchTime"
ROUTE1180.toNode = "PitchTimer"
ROUTE1180.toField = "set_stopTime"

Scene33.children.append(ROUTE1180)
ROUTE1181 = x3d.ROUTE()
ROUTE1181.fromNode = "Stop_Touch"
ROUTE1181.fromField = "touchTime"
ROUTE1181.toNode = "YawTimer"
ROUTE1181.toField = "set_stopTime"

Scene33.children.append(ROUTE1181)
ROUTE1182 = x3d.ROUTE()
ROUTE1182.fromNode = "Stop_Touch"
ROUTE1182.fromField = "touchTime"
ROUTE1182.toNode = "RollTimer"
ROUTE1182.toField = "set_stopTime"

Scene33.children.append(ROUTE1182)
ROUTE1183 = x3d.ROUTE()
ROUTE1183.fromNode = "Stop_Touch"
ROUTE1183.fromField = "touchTime"
ROUTE1183.toNode = "WalkTimer"
ROUTE1183.toField = "set_stopTime"

Scene33.children.append(ROUTE1183)
ROUTE1184 = x3d.ROUTE()
ROUTE1184.fromNode = "Stop_Touch"
ROUTE1184.fromField = "touchTime"
ROUTE1184.toNode = "RunTimer"
ROUTE1184.toField = "set_stopTime"

Scene33.children.append(ROUTE1184)
ROUTE1185 = x3d.ROUTE()
ROUTE1185.fromNode = "Stop_Touch"
ROUTE1185.fromField = "touchTime"
ROUTE1185.toNode = "JumpTimer"
ROUTE1185.toField = "set_stopTime"

Scene33.children.append(ROUTE1185)
ROUTE1186 = x3d.ROUTE()
ROUTE1186.fromNode = "Stop_Touch"
ROUTE1186.fromField = "touchTime"
ROUTE1186.toNode = "KickTimer"
ROUTE1186.toField = "set_stopTime"

Scene33.children.append(ROUTE1186)
ROUTE1187 = x3d.ROUTE()
ROUTE1187.fromNode = "Stop_Touch"
ROUTE1187.fromField = "touchTime"
ROUTE1187.toNode = "StopTimer"
ROUTE1187.toField = "set_startTime"

Scene33.children.append(ROUTE1187)

X3D0.Scene = Scene33
f = open("../data/BoxMan3AnimationPanel.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/BoxMan3AnimationPanel.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/BoxMan3AnimationPanel.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

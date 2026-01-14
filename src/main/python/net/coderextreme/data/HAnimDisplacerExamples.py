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
meta3.content = "HAnimDisplacerExamples.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "This model illustrates use of the HAnimDisplacer node."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Don Brutzman"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "9 January 2014"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 15 Sep 2025 05:20:09 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "Provide clear HAnimDisplacer examples that other can use, with initial displacements of head and left-hand index figure."

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/HAnimDisplacerExamples.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "../Legacy/JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"
WorldInfo13.info = ["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()
NavigationInfo14.DEF = "Start_NavigationInfo"
NavigationInfo14.speed = 2.5
NavigationInfo14.headlight = False

Scene12.children.append(NavigationInfo14)
Background15 = x3d.Background()
Background15.DEF = "blue_Background"

Scene12.children.append(Background15)
SpotLight16 = x3d.SpotLight()
SpotLight16.DEF = "light1"
SpotLight16.color = [0.8,0.8,1]
SpotLight16.ambientIntensity = 0.7
SpotLight16.location = [0,3,3]
SpotLight16.direction = [0,0,0]
SpotLight16.radius = 10
SpotLight16.beamWidth = 1.5
SpotLight16.cutOffAngle = 0.6

Scene12.children.append(SpotLight16)
PointLight17 = x3d.PointLight()
PointLight17.DEF = "light2"
PointLight17.color = [0.8,0.8,1]
PointLight17.ambientIntensity = 0.7
PointLight17.location = [0,10,-7]

Scene12.children.append(PointLight17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.DEF = "Scene_InclinedView"
Viewpoint18.description = "Scene_Inclined View"
Viewpoint18.position = [1.62,1.05,3.06]
Viewpoint18.orientation = [-0.113,0.993,0.0347,0.671]
Viewpoint18.centerOfRotation = [0,0.85,0]

Scene12.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.DEF = "Scene_IFrontView"
Viewpoint19.description = "Scene_Front View"
Viewpoint19.position = [0,0.8,2.58]
Viewpoint19.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.DEF = "Scene_ISideView"
Viewpoint20.description = "Scene_Side View"
Viewpoint20.position = [2.6,0.5,0]
Viewpoint20.orientation = [0,1,0,1.5708]
Viewpoint20.centerOfRotation = [0,0.8,0]

Scene12.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.DEF = "Scene_BackView"
Viewpoint21.description = "Scene_Back View"
Viewpoint21.position = [0,2.5,-3]
Viewpoint21.orientation = [0,1,0,3.14]
Viewpoint21.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.DEF = "Scene_TopView"
Viewpoint22.description = "Scene_Top View"
Viewpoint22.position = [0,3.5,0]
Viewpoint22.orientation = [1,0,0,-1.5708]
Viewpoint22.centerOfRotation = [0,1.5,0]

Scene12.children.append(Viewpoint22)
Group23 = x3d.Group()
Group23.DEF = "Joe_Humanoid"
HAnimHumanoid24 = x3d.HAnimHumanoid()
HAnimHumanoid24.DEF = "Joe_Human"
HAnimHumanoid24.name = "Human"
HAnimJoint25 = x3d.HAnimJoint()
HAnimJoint25.DEF = "Joe_humanoid_root"
HAnimJoint25.name = "humanoid_root"
HAnimJoint25.center = [0,0.875,0]
HAnimSegment26 = x3d.HAnimSegment()
HAnimSegment26.DEF = "Joe_sacrum"
HAnimSegment26.name = "sacrum"
HAnimSite27 = x3d.HAnimSite()
HAnimSite27.DEF = "Joe_humanoid_sacrum_pt"
HAnimSite27.name = "humanoid_sacrum_pt"
HAnimSite27.translation = [0,0.875,0]
Shape28 = x3d.Shape()
Shape28.DEF = "RedBox"
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [1,0,0]

Appearance29.material = Material30

Shape28.appearance = Appearance29
Box31 = x3d.Box()
Box31.size = [0.01,0.01,0.01]

Shape28.geometry = Box31

HAnimSite27.children.append(Shape28)

HAnimSegment26.children.append(HAnimSite27)
HAnimSite32 = x3d.HAnimSite()
HAnimSite32.DEF = "Joe_humanoid_origin_view"
HAnimSite32.name = "humanoid_origin_view"
Transform33 = x3d.Transform()
Transform33.DEF = "HAnimHumanoidOrigin"
Transform33.scale = [0.175,0.175,0.175]
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.DEF = "ViewBodyRootAxes"
Viewpoint34.description = "Joe_HAnim Root Coordinate Axes View"

Transform33.children.append(Viewpoint34)
Shape35 = x3d.Shape()
Shape35.DEF = "AxisLinesShape"
IndexedLineSet36 = x3d.IndexedLineSet()
IndexedLineSet36.colorPerVertex = False
IndexedLineSet36.colorIndex = [0,1,2]
IndexedLineSet36.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color37 = x3d.Color()
Color37.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet36.color = Color37
Coordinate38 = x3d.Coordinate()
Coordinate38.point = [(0, 0, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1)]

IndexedLineSet36.coord = Coordinate38

Shape35.geometry = IndexedLineSet36

Transform33.children.append(Shape35)

HAnimSite32.children.append(Transform33)

HAnimSegment26.children.append(HAnimSite32)

HAnimJoint25.children.append(HAnimSegment26)
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.DEF = "Joe_sacroiliac"
HAnimJoint39.name = "sacroiliac"
HAnimJoint39.center = [0,0.92,0]
HAnimJoint39.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint39.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.DEF = "Joe_l_hip"
HAnimJoint40.name = "l_hip"
HAnimJoint40.center = [0.1,0.92,0]
HAnimJoint40.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint40.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.DEF = "Joe_l_knee"
HAnimJoint41.name = "l_knee"
HAnimJoint41.center = [0.115,0.466,0]
HAnimJoint41.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint41.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.DEF = "Joe_l_talocrural"
HAnimJoint42.name = "l_talocrural"
HAnimJoint42.center = [0.115,0.069,0]
HAnimJoint42.skinCoordIndex = [342,343,344,345]
HAnimJoint42.skinCoordWeight = [1,1,1,1]
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.DEF = "Joe_l_subtalar"
HAnimJoint43.name = "l_subtalar"
HAnimJoint43.center = [0.115,0.031,0.03]
HAnimJoint43.skinCoordIndex = [346,347,348,71]
HAnimJoint43.skinCoordWeight = [1,1,1,1]
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.DEF = "Joe_l_midtarsal"
HAnimJoint44.name = "l_midtarsal"
HAnimJoint44.center = [0.115,0.037,0.09]
HAnimJoint44.skinCoordIndex = [349,350,351,352]
HAnimJoint44.skinCoordWeight = [1,1,1,1]
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.DEF = "Joe_l_metatarsal"
HAnimJoint45.name = "l_metatarsal"
HAnimJoint45.center = [0.115,0.02,0.122]
HAnimJoint45.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint45.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint40.children.append(HAnimJoint41)

HAnimJoint39.children.append(HAnimJoint40)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.DEF = "Joe_r_hip"
HAnimJoint46.name = "r_hip"
HAnimJoint46.center = [-0.1,0.92,0]
HAnimJoint46.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint46.skinCoordWeight = [0.65,1,0.8,1,1,1,0.4,0.8]
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.DEF = "Joe_r_knee"
HAnimJoint47.name = "r_knee"
HAnimJoint47.center = [-0.05,0.466,0]
HAnimJoint47.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint47.skinCoordWeight = [0.6,0.2,1,1,1,1,1,1,0.2]
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.DEF = "Joe_r_talocrural"
HAnimJoint48.name = "r_talocrural"
HAnimJoint48.center = [-0.115,0.069,0]
HAnimJoint48.skinCoordIndex = [370,371,372,373]
HAnimJoint48.skinCoordWeight = [1,1,1,1]
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.DEF = "Joe_r_subtalar"
HAnimJoint49.name = "r_subtalar"
HAnimJoint49.center = [-0.1,0.015,-0.01]
HAnimJoint49.skinCoordIndex = [374,375,376]
HAnimJoint49.skinCoordWeight = [1,1,1]
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.DEF = "Joe_r_midtarsal"
HAnimJoint50.name = "r_midtarsal"
HAnimJoint50.center = [-0.115,0.037,0.09]
HAnimJoint50.skinCoordIndex = [377,378,379,380]
HAnimJoint50.skinCoordWeight = [1,1,1,1]
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.DEF = "Joe_r_metatarsal"
HAnimJoint51.name = "r_metatarsal"
HAnimJoint51.center = [-0.1,0.01,0.14]
HAnimJoint51.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint51.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint49.children.append(HAnimJoint50)

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint39.children.append(HAnimJoint46)

HAnimJoint25.children.append(HAnimJoint39)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "Joe_vl5"
HAnimJoint52.name = "vl5"
HAnimJoint52.center = [0,1.045,-0.095]
HAnimJoint52.skinCoordIndex = [28,76]
HAnimJoint52.skinCoordWeight = [1,1]
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.DEF = "Joe_vl4"
HAnimJoint53.name = "vl4"
HAnimJoint53.center = [0,1.068,-0.085]
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.DEF = "Joe_vl3"
HAnimJoint54.name = "vl3"
HAnimJoint54.center = [0,1.092,-0.0725]
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.DEF = "Joe_vl2"
HAnimJoint55.name = "vl2"
HAnimJoint55.center = [0,1.12,-0.065]
HAnimJoint55.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint55.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "Joe_vl1"
HAnimJoint56.name = "vl1"
HAnimJoint56.center = [0,1.1459,-0.0625]
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.DEF = "Joe_vt12"
HAnimJoint57.name = "vt12"
HAnimJoint57.center = [0,1.179,-0.068]
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.DEF = "Joe_vt11"
HAnimJoint58.name = "vt11"
HAnimJoint58.center = [0,1.2679,-0.081]
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.DEF = "Joe_vt10"
HAnimJoint59.name = "vt10"
HAnimJoint59.center = [0,1.242,-0.09]
HAnimJoint59.skinCoordIndex = [15]
HAnimJoint59.skinCoordWeight = [1]
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.DEF = "Joe_vt9"
HAnimJoint60.name = "vt9"
HAnimJoint60.center = [0,1.268,-0.1]
HAnimJoint60.skinCoordIndex = [13,14]
HAnimJoint60.skinCoordWeight = [1,1]
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.DEF = "Joe_vt8"
HAnimJoint61.name = "vt8"
HAnimJoint61.center = [0,1.294,-0.11]
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.DEF = "Joe_vt7"
HAnimJoint62.name = "vt7"
HAnimJoint62.center = [0,1.323,-0.1155]
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "Joe_vt6"
HAnimJoint63.name = "vt6"
HAnimJoint63.center = [0,1.352,-0.12]
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.DEF = "Joe_vt5"
HAnimJoint64.name = "vt5"
HAnimJoint64.center = [0,1.381,-0.1235]
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.DEF = "Joe_vt4"
HAnimJoint65.name = "vt4"
HAnimJoint65.center = [0,1.41,-0.1235]
HAnimJoint65.skinCoordIndex = [81]
HAnimJoint65.skinCoordWeight = [1]
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.DEF = "Joe_vt3"
HAnimJoint66.name = "vt3"
HAnimJoint66.center = [0,1.438,-0.12]
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.DEF = "Joe_vt2"
HAnimJoint67.name = "vt2"
HAnimJoint67.center = [0,1.468,-0.105]
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.DEF = "Joe_vt1"
HAnimJoint68.name = "vt1"
HAnimJoint68.center = [0,1.497,-0.09]
HAnimJoint68.skinCoordIndex = [11,24]
HAnimJoint68.skinCoordWeight = [1,1]
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "Joe_vc7"
HAnimJoint69.name = "vc7"
HAnimJoint69.center = [0,1.525,-0.072]
HAnimJoint69.skinCoordIndex = [74,75]
HAnimJoint69.skinCoordWeight = [1,1]
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.DEF = "Joe_vc6"
HAnimJoint70.name = "vc6"
HAnimJoint70.center = [0,1.54,-0.05]
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.DEF = "Joe_vc5"
HAnimJoint71.name = "vc5"
HAnimJoint71.center = [0,1.552,-0.035]
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.DEF = "Joe_vc4"
HAnimJoint72.name = "vc4"
HAnimJoint72.center = [0,1.5675,-0.0256]
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.DEF = "Joe_vc3"
HAnimJoint73.name = "vc3"
HAnimJoint73.center = [0,1.58225,-0.0185]
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.DEF = "Joe_vc2"
HAnimJoint74.name = "vc2"
HAnimJoint74.center = [0,1.595,-0.0175]
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.DEF = "Joe_vc1"
HAnimJoint75.name = "vc1"
HAnimJoint75.center = [0,1.61,-0.015]
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.DEF = "Joe_skullbase"
HAnimJoint76.name = "skullbase"
HAnimJoint76.center = [0,1.63,-0.01]
HAnimJoint76.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint76.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimDisplacer77 = x3d.HAnimDisplacer()
HAnimDisplacer77.DEF = "Joe_skull_tip"
HAnimDisplacer77.name = "skull_tip_raiser_action"
HAnimDisplacer77.weight = 0.9682372
HAnimDisplacer77.coordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimDisplacer77.displacements = [(0, 0.15, 0),(0, 0, 0.15),(-0.1, 0, 0.15),(0.1, 0, 0.05),(0, -0.02, 0.05),(-0.15, 0, 0),(-0.05, 0, 0),(0.15, 0, 0),(0.05, 0, 0),(0, 0, -0.15)]

HAnimJoint76.displacers.append(HAnimDisplacer77)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.DEF = "Joe_l_eyelid_joint"
HAnimJoint78.name = "l_eyelid_joint"
HAnimJoint78.center = [0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint78)
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.DEF = "Joe_l_eyeball_joint"
HAnimJoint79.name = "l_eyeball_joint"
HAnimJoint79.center = [0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint79)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.DEF = "Joe_l_eyebrow_joint"
HAnimJoint80.name = "l_eyebrow_joint"
HAnimJoint80.center = [0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint80)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.DEF = "Joe_r_eyelid_joint"
HAnimJoint81.name = "l_eyelid_joint"
HAnimJoint81.center = [-0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint81)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.DEF = "Joe_r_eyeball_joint"
HAnimJoint82.name = "l_eyeball_joint"
HAnimJoint82.center = [-0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint82)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.DEF = "Joe_r_eyebrow_joint"
HAnimJoint83.name = "l_eyebrow_joint"
HAnimJoint83.center = [-0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint83)
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.DEF = "Joe_temporomandibular"
HAnimJoint84.name = "temporomandibular"
HAnimJoint84.center = [0.034,1.659,0.06]

HAnimJoint76.children.append(HAnimJoint84)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.DEF = "Joe_l_sternoclavicular"
HAnimJoint85.name = "l_sternoclavicular"
HAnimJoint85.center = [0.082,1.4488,-0.0353]
HAnimJoint85.skinCoordIndex = [12]
HAnimJoint85.skinCoordWeight = [1]
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.DEF = "Joe_l_acromioclavicular"
HAnimJoint86.name = "l_acromioclavicular"
HAnimJoint86.center = [0.0962,1.4269,-0.0424]
HAnimJoint86.skinCoordIndex = [79]
HAnimJoint86.skinCoordWeight = [1]
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.DEF = "Joe_l_shoulder"
HAnimJoint87.name = "l_shoulder"
HAnimJoint87.rotation = [-0.999999999999989,0,0,0.177942317505106]
HAnimJoint87.center = [0.2,1.44,-0.04]
HAnimJoint87.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint87.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.DEF = "Joe_l_elbow"
HAnimJoint88.name = "l_elbow"
HAnimJoint88.center = [0.2,1.1388,-0.04]
HAnimJoint88.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint88.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.DEF = "Joe_l_wrist"
HAnimJoint89.name = "l_wrist"
HAnimJoint89.center = [0.2,0.87,-0.04]
HAnimJoint89.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint89.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.DEF = "Joe_l_thumb1"
HAnimJoint90.name = "l_thumb1"
HAnimJoint90.center = [0.1924,0.8472,-0.0534]
HAnimJoint90.skinCoordIndex = [127,128]
HAnimJoint90.skinCoordWeight = [1,1]
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.DEF = "Joe_l_thumb2"
HAnimJoint91.name = "l_thumb2"
HAnimJoint91.center = [0.1951,0.8226,0.0246]
HAnimJoint91.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint91.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "Joe_l_thumb3"
HAnimJoint92.name = "l_thumb3"
HAnimJoint92.center = [0.1955,0.8159,0.0464]
HAnimJoint92.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.DEF = "Joe_l_index0"
HAnimJoint93.name = "l_index0"
HAnimJoint93.center = [0.1983,0.8024,-0.028]
HAnimJoint93.skinCoordIndex = [129,130]
HAnimJoint93.skinCoordWeight = [1,1]
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.DEF = "Joe_l_index1"
HAnimJoint94.name = "l_index1"
HAnimJoint94.center = [0.1983,0.7815,-0.028]
HAnimJoint94.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint94.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.DEF = "Joe_l_index2"
HAnimJoint95.name = "l_index2"
HAnimJoint95.center = [0.2017,0.7363,-0.0248]
HAnimJoint95.skinCoordIndex = [166,167,168,169]
HAnimJoint95.skinCoordWeight = [1,1,1,1]
HAnimDisplacer96 = x3d.HAnimDisplacer()
HAnimDisplacer96.DEF = "Joe_L_finger_tips"
HAnimDisplacer96.name = "Joe_L_finger_tips_raiser_action"
HAnimDisplacer96.weight = 0.2205769
HAnimDisplacer96.coordIndex = [172,173,174]
HAnimDisplacer96.displacements = [(0, -1.15, 0),(0, -1.15, 0),(0, -1.15, 0)]

HAnimJoint95.displacers.append(HAnimDisplacer96)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "Joe_l_index3"
HAnimJoint97.name = "l_index3"
HAnimJoint97.center = [0.2028,0.7139,-0.0236]
HAnimJoint97.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint97.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint95.children.append(HAnimJoint97)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint89.children.append(HAnimJoint93)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.DEF = "Joe_l_middle0"
HAnimJoint98.name = "l_middle0"
HAnimJoint98.center = [0.1987,0.8029,-0.053]
HAnimJoint98.skinCoordIndex = [131,132]
HAnimJoint98.skinCoordWeight = [1,1]
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.DEF = "Joe_l_middle1"
HAnimJoint99.name = "l_middle1"
HAnimJoint99.center = [0.1987,0.7818,-0.053]
HAnimJoint99.skinCoordIndex = [156,157,163,164]
HAnimJoint99.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.DEF = "Joe_l_middle2"
HAnimJoint100.name = "l_middle2"
HAnimJoint100.center = [0.2013,0.7273,-0.0503]
HAnimJoint100.skinCoordIndex = [179,180,181,182]
HAnimJoint100.skinCoordWeight = [1,1,1,1]
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.DEF = "Joe_l_middle3"
HAnimJoint101.name = "l_middle3"
HAnimJoint101.center = [0.2026,0.7011,-0.0494]
HAnimJoint101.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint101.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint89.children.append(HAnimJoint98)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.DEF = "Joe_l_ring0"
HAnimJoint102.name = "l_ring0"
HAnimJoint102.center = [0.1956,0.8019,-0.0794]
HAnimJoint102.skinCoordIndex = [133,134]
HAnimJoint102.skinCoordWeight = [1,1]
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.DEF = "Joe_l_ring1"
HAnimJoint103.name = "l_ring1"
HAnimJoint103.center = [0.1956,0.7815,-0.0794]
HAnimJoint103.skinCoordIndex = [158,159,164,165]
HAnimJoint103.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.DEF = "Joe_l_ring2"
HAnimJoint104.name = "l_ring2"
HAnimJoint104.center = [0.1973,0.7287,-0.0777]
HAnimJoint104.skinCoordIndex = [192,193,194,195]
HAnimJoint104.skinCoordWeight = [1,1,1,1]
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.DEF = "Joe_l_ring3"
HAnimJoint105.name = "l_ring3"
HAnimJoint105.center = [0.1983,0.7045,-0.0767]
HAnimJoint105.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint105.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint89.children.append(HAnimJoint102)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.DEF = "Joe_l_pinky0"
HAnimJoint106.name = "l_pinky0"
HAnimJoint106.center = [0.1925,0.8066,-0.1036]
HAnimJoint106.skinCoordIndex = [135,136,137,165]
HAnimJoint106.skinCoordWeight = [1,1,1,0.5]
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.DEF = "Joe_l_pinky1"
HAnimJoint107.name = "l_pinky1"
HAnimJoint107.center = [0.1925,0.7866,-0.1036]
HAnimJoint107.skinCoordIndex = [160,161,162]
HAnimJoint107.skinCoordWeight = [1,1,1]
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.DEF = "Joe_l_pinky2"
HAnimJoint108.name = "l_pinky2"
HAnimJoint108.center = [0.1938,0.7452,-0.1024]
HAnimJoint108.skinCoordIndex = [205,206,207,208]
HAnimJoint108.skinCoordWeight = [1,1,1,1]
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.DEF = "Joe_l_pinky3"
HAnimJoint109.name = "l_pinky3"
HAnimJoint109.center = [0.1948,0.7277,-0.1017]
HAnimJoint109.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint109.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint89.children.append(HAnimJoint106)

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint69.children.append(HAnimJoint85)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.DEF = "Joe_r_sternoclavicular"
HAnimJoint110.name = "r_sternoclavicular"
HAnimJoint110.center = [-0.03,1.46,0]
HAnimJoint110.skinCoordIndex = [10]
HAnimJoint110.skinCoordWeight = [1]
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.DEF = "Joe_r_acromioclavicular"
HAnimJoint111.name = "r_acromioclavicular"
HAnimJoint111.center = [-0.09,1.41,-0.11]
HAnimJoint111.skinCoordIndex = [77,29]
HAnimJoint111.skinCoordWeight = [1,0.9]
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.DEF = "Joe_r_shoulder"
HAnimJoint112.name = "r_shoulder"
HAnimJoint112.rotation = [-0.999999999999989,0,0,0.177942317505106]
HAnimJoint112.center = [-0.2,1.44,-0.04]
HAnimJoint112.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint112.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.DEF = "Joe_r_elbow"
HAnimJoint113.name = "r_elbow"
HAnimJoint113.center = [-0.2,1.1388,-0.04]
HAnimJoint113.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint113.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.DEF = "Joe_r_wrist"
HAnimJoint114.name = "r_wrist"
HAnimJoint114.center = [-0.2,0.89,-0.04]
HAnimJoint114.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint114.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "Joe_r_thumb1"
HAnimJoint115.name = "r_thumb1"
HAnimJoint115.center = [-0.2,0.85,0]
HAnimJoint115.skinCoordIndex = [243,244]
HAnimJoint115.skinCoordWeight = [1,1]
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.DEF = "Joe_r_thumb2"
HAnimJoint116.name = "r_thumb2"
HAnimJoint116.center = [-0.2,0.82,0.03]
HAnimJoint116.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint116.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "Joe_r_thumb3"
HAnimJoint117.name = "r_thumb3"
HAnimJoint117.center = [-0.2,0.8,0.05]
HAnimJoint117.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint117.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.DEF = "Joe_r_index0"
HAnimJoint118.name = "r_index0"
HAnimJoint118.center = [-0.2,0.84,-0.015]
HAnimJoint118.skinCoordIndex = [245,246]
HAnimJoint118.skinCoordWeight = [1,1]
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.DEF = "Joe_r_index1"
HAnimJoint119.name = "r_index1"
HAnimJoint119.center = [-0.2,0.793,-0.015]
HAnimJoint119.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint119.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.DEF = "Joe_r_index2"
HAnimJoint120.name = "r_index2"
HAnimJoint120.center = [-0.2,0.745,-0.015]
HAnimJoint120.skinCoordIndex = [282,283,284,285]
HAnimJoint120.skinCoordWeight = [1,1,1,1]
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.DEF = "Joe_r_index3"
HAnimJoint121.name = "r_index3"
HAnimJoint121.center = [-0.2,0.72,-0.015]
HAnimJoint121.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint121.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint120.children.append(HAnimJoint121)

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint114.children.append(HAnimJoint118)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "Joe_r_middle0"
HAnimJoint122.name = "r_middle0"
HAnimJoint122.center = [-0.2,0.835,-0.04]
HAnimJoint122.skinCoordIndex = [247,248]
HAnimJoint122.skinCoordWeight = [1,1]
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.DEF = "Joe_r_middle1"
HAnimJoint123.name = "r_middle1"
HAnimJoint123.center = [-0.2,0.788,-0.04]
HAnimJoint123.skinCoordIndex = [272,273,279,280]
HAnimJoint123.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "Joe_r_middle2"
HAnimJoint124.name = "r_middle2"
HAnimJoint124.center = [-0.2,0.74,-0.04]
HAnimJoint124.skinCoordIndex = [295,296,297,298]
HAnimJoint124.skinCoordWeight = [1,1,1,1]
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.DEF = "Joe_r_middle3"
HAnimJoint125.name = "r_middle3"
HAnimJoint125.center = [-0.2,0.7142,-0.04]
HAnimJoint125.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint125.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint114.children.append(HAnimJoint122)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.DEF = "Joe_r_ring0"
HAnimJoint126.name = "r_ring0"
HAnimJoint126.center = [-0.2,0.835,-0.065]
HAnimJoint126.skinCoordIndex = [249,250]
HAnimJoint126.skinCoordWeight = [1,1]
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.DEF = "Joe_r_ring1"
HAnimJoint127.name = "r_ring1"
HAnimJoint127.center = [-0.2,0.793,-0.065]
HAnimJoint127.skinCoordIndex = [274,275,280,281]
HAnimJoint127.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "Joe_r_ring2"
HAnimJoint128.name = "r_ring2"
HAnimJoint128.center = [-0.2,0.74,-0.065]
HAnimJoint128.skinCoordIndex = [308,309,310,311]
HAnimJoint128.skinCoordWeight = [1,1,1,1]
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.DEF = "Joe_r_ring3"
HAnimJoint129.name = "r_ring3"
HAnimJoint129.center = [-0.2,0.7177,-0.065]
HAnimJoint129.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint129.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint126.children.append(HAnimJoint127)

HAnimJoint114.children.append(HAnimJoint126)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.DEF = "Joe_r_pinky0"
HAnimJoint130.name = "r_pinky0"
HAnimJoint130.center = [-0.2,0.84,-0.085]
HAnimJoint130.skinCoordIndex = [251,252,253,281]
HAnimJoint130.skinCoordWeight = [1,1,1,0.5]
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.DEF = "Joe_r_pinky1"
HAnimJoint131.name = "r_pinky1"
HAnimJoint131.center = [-0.2,0.79,-0.085]
HAnimJoint131.skinCoordIndex = [276,277,278]
HAnimJoint131.skinCoordWeight = [1,1,1]
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.DEF = "Joe_r_pinky2"
HAnimJoint132.name = "r_pinky2"
HAnimJoint132.center = [-0.2,0.755,-0.085]
HAnimJoint132.skinCoordIndex = [321,322,323,324]
HAnimJoint132.skinCoordWeight = [1,1,1,1]
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.DEF = "Joe_r_pinky3"
HAnimJoint133.name = "r_pinky3"
HAnimJoint133.center = [-0.2,0.735,-0.09]
HAnimJoint133.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint133.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint132.children.append(HAnimJoint133)

HAnimJoint131.children.append(HAnimJoint132)

HAnimJoint130.children.append(HAnimJoint131)

HAnimJoint114.children.append(HAnimJoint130)

HAnimJoint113.children.append(HAnimJoint114)

HAnimJoint112.children.append(HAnimJoint113)

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint69.children.append(HAnimJoint110)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint64.children.append(HAnimJoint65)

HAnimJoint63.children.append(HAnimJoint64)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)

HAnimJoint60.children.append(HAnimJoint61)

HAnimJoint59.children.append(HAnimJoint60)

HAnimJoint58.children.append(HAnimJoint59)

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint56.children.append(HAnimJoint57)

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)

HAnimJoint25.children.append(HAnimJoint52)

HAnimHumanoid24.skeleton.append(HAnimJoint25)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.USE = "Joe_humanoid_root"

HAnimHumanoid24.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.USE = "Joe_l_acromioclavicular"

HAnimHumanoid24.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.USE = "Joe_l_talocrural"

HAnimHumanoid24.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.USE = "Joe_l_elbow"

HAnimHumanoid24.joints.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.USE = "Joe_l_eyeball_joint"

HAnimHumanoid24.joints.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.USE = "Joe_l_eyebrow_joint"

HAnimHumanoid24.joints.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.USE = "Joe_l_eyelid_joint"

HAnimHumanoid24.joints.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.USE = "Joe_l_hip"

HAnimHumanoid24.joints.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.USE = "Joe_l_index0"

HAnimHumanoid24.joints.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.USE = "Joe_l_index1"

HAnimHumanoid24.joints.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.USE = "Joe_l_index2"

HAnimHumanoid24.joints.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.USE = "Joe_l_index3"

HAnimHumanoid24.joints.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.USE = "Joe_l_knee"

HAnimHumanoid24.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.USE = "Joe_l_metatarsal"

HAnimHumanoid24.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.USE = "Joe_l_middle0"

HAnimHumanoid24.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.USE = "Joe_l_middle1"

HAnimHumanoid24.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.USE = "Joe_l_middle2"

HAnimHumanoid24.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.USE = "Joe_l_middle3"

HAnimHumanoid24.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.USE = "Joe_l_midtarsal"

HAnimHumanoid24.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.USE = "Joe_l_pinky0"

HAnimHumanoid24.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.USE = "Joe_l_pinky1"

HAnimHumanoid24.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.USE = "Joe_l_pinky2"

HAnimHumanoid24.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.USE = "Joe_l_pinky3"

HAnimHumanoid24.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.USE = "Joe_l_ring0"

HAnimHumanoid24.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.USE = "Joe_l_ring1"

HAnimHumanoid24.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.USE = "Joe_l_ring2"

HAnimHumanoid24.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.USE = "Joe_l_ring3"

HAnimHumanoid24.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.USE = "Joe_l_shoulder"

HAnimHumanoid24.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.USE = "Joe_l_sternoclavicular"

HAnimHumanoid24.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.USE = "Joe_l_subtalar"

HAnimHumanoid24.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "Joe_l_thumb1"

HAnimHumanoid24.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.USE = "Joe_l_thumb2"

HAnimHumanoid24.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.USE = "Joe_l_thumb3"

HAnimHumanoid24.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.USE = "Joe_l_wrist"

HAnimHumanoid24.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.USE = "Joe_r_acromioclavicular"

HAnimHumanoid24.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.USE = "Joe_r_talocrural"

HAnimHumanoid24.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.USE = "Joe_r_elbow"

HAnimHumanoid24.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.USE = "Joe_r_eyeball_joint"

HAnimHumanoid24.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.USE = "Joe_r_eyebrow_joint"

HAnimHumanoid24.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.USE = "Joe_r_eyelid_joint"

HAnimHumanoid24.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.USE = "Joe_r_hip"

HAnimHumanoid24.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.USE = "Joe_r_index0"

HAnimHumanoid24.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.USE = "Joe_r_index1"

HAnimHumanoid24.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.USE = "Joe_r_index2"

HAnimHumanoid24.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.USE = "Joe_r_index3"

HAnimHumanoid24.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.USE = "Joe_r_knee"

HAnimHumanoid24.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.USE = "Joe_r_metatarsal"

HAnimHumanoid24.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.USE = "Joe_r_middle0"

HAnimHumanoid24.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.USE = "Joe_r_middle1"

HAnimHumanoid24.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.USE = "Joe_r_middle2"

HAnimHumanoid24.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.USE = "Joe_r_middle3"

HAnimHumanoid24.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.USE = "Joe_r_midtarsal"

HAnimHumanoid24.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.USE = "Joe_r_pinky0"

HAnimHumanoid24.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.USE = "Joe_r_pinky1"

HAnimHumanoid24.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.USE = "Joe_r_pinky2"

HAnimHumanoid24.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.USE = "Joe_r_pinky3"

HAnimHumanoid24.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.USE = "Joe_r_ring0"

HAnimHumanoid24.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.USE = "Joe_r_ring1"

HAnimHumanoid24.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.USE = "Joe_r_ring2"

HAnimHumanoid24.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.USE = "Joe_r_ring3"

HAnimHumanoid24.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.USE = "Joe_r_shoulder"

HAnimHumanoid24.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.USE = "Joe_r_sternoclavicular"

HAnimHumanoid24.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.USE = "Joe_r_subtalar"

HAnimHumanoid24.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.USE = "Joe_r_thumb1"

HAnimHumanoid24.joints.append(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.USE = "Joe_r_thumb2"

HAnimHumanoid24.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.USE = "Joe_r_thumb3"

HAnimHumanoid24.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.USE = "Joe_r_wrist"

HAnimHumanoid24.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.USE = "Joe_sacroiliac"

HAnimHumanoid24.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.USE = "Joe_skullbase"

HAnimHumanoid24.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.USE = "Joe_temporomandibular"

HAnimHumanoid24.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.USE = "Joe_vc1"

HAnimHumanoid24.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.USE = "Joe_vc2"

HAnimHumanoid24.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.USE = "Joe_vc3"

HAnimHumanoid24.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.USE = "Joe_vc4"

HAnimHumanoid24.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.USE = "Joe_vc5"

HAnimHumanoid24.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.USE = "Joe_vc6"

HAnimHumanoid24.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.USE = "Joe_vc7"

HAnimHumanoid24.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "Joe_vl1"

HAnimHumanoid24.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "Joe_vl2"

HAnimHumanoid24.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "Joe_vl3"

HAnimHumanoid24.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "Joe_vl4"

HAnimHumanoid24.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "Joe_vl5"

HAnimHumanoid24.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "Joe_vt1"

HAnimHumanoid24.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "Joe_vt10"

HAnimHumanoid24.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "Joe_vt11"

HAnimHumanoid24.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "Joe_vt12"

HAnimHumanoid24.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "Joe_vt2"

HAnimHumanoid24.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "Joe_vt3"

HAnimHumanoid24.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "Joe_vt4"

HAnimHumanoid24.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "Joe_vt5"

HAnimHumanoid24.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "Joe_vt6"

HAnimHumanoid24.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "Joe_vt7"

HAnimHumanoid24.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "Joe_vt8"

HAnimHumanoid24.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "Joe_vt9"

HAnimHumanoid24.joints.append(HAnimJoint227)
Coordinate228 = x3d.Coordinate()
Coordinate228.DEF = "Joe_SkinCoord"
Coordinate228.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.255, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid24.skinCoord = Coordinate228
Shape229 = x3d.Shape()
Shape229.DEF = "Joe_Shape"
Appearance230 = x3d.Appearance()
Appearance230.DEF = "Joe_skin_Appearance"
Material231 = x3d.Material()
Material231.DEF = "Joe_skin_Material"
Material231.diffuseColor = [0.3,0.3,0.6]
Material231.emissiveColor = [0.3,0.3,0.6]

Appearance230.material = Material231
ImageTexture232 = x3d.ImageTexture()
ImageTexture232.DEF = "JoeSkinImageTexture"
ImageTexture232.url = ["bodytexture28.png"]

Appearance230.texture = ImageTexture232
TextureTransform233 = x3d.TextureTransform()
TextureTransform233.DEF = "KickTexTrans"

Appearance230.textureTransform = TextureTransform233

Shape229.appearance = Appearance230
IndexedFaceSet234 = x3d.IndexedFaceSet()
IndexedFaceSet234.DEF = "Joe_skin_IndexedFaceSet"
IndexedFaceSet234.creaseAngle = 3.14
IndexedFaceSet234.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
TextureCoordinate235 = x3d.TextureCoordinate()
TextureCoordinate235.point = [(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5)]

IndexedFaceSet234.texCoord = TextureCoordinate235
Coordinate236 = x3d.Coordinate()
Coordinate236.USE = "Joe_SkinCoord"

IndexedFaceSet234.coord = Coordinate236

Shape229.geometry = IndexedFaceSet234

HAnimHumanoid24.skin.append(Shape229)

Group23.children.append(HAnimHumanoid24)

Scene12.children.append(Group23)
Group237 = x3d.Group()
Group237.DEF = "SkullDisplacerAnimationGroup"
TimeSensor238 = x3d.TimeSensor()
TimeSensor238.DEF = "skull_tipTimer"
TimeSensor238.cycleInterval = 5.73
TimeSensor238.loop = True

Group237.children.append(TimeSensor238)
ScalarInterpolator239 = x3d.ScalarInterpolator()
ScalarInterpolator239.DEF = "skull_tipInterp"
ScalarInterpolator239.key = [0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]
ScalarInterpolator239.keyValue = [0,0,0,0,0.2,0.4,1,0,1,0.4,0]

Group237.children.append(ScalarInterpolator239)

Scene12.children.append(Group237)
Group240 = x3d.Group()
Group240.DEF = "Joe_L_finger_tipsDisplacerAnimationGroup"
TimeSensor241 = x3d.TimeSensor()
TimeSensor241.DEF = "L_finger_tipsTimer"
TimeSensor241.cycleInterval = 4.73
TimeSensor241.loop = True

Group240.children.append(TimeSensor241)
ScalarInterpolator242 = x3d.ScalarInterpolator()
ScalarInterpolator242.DEF = "L_finger_tipsInterp"
ScalarInterpolator242.key = [0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]
ScalarInterpolator242.keyValue = [0,0,0,0,0.2,0.4,1,0,1,0.4,0]

Group240.children.append(ScalarInterpolator242)
OrientationInterpolator243 = x3d.OrientationInterpolator()
OrientationInterpolator243.DEF = "L_shoulderDispRotInterp"
OrientationInterpolator243.key = [0,0.4,1]
OrientationInterpolator243.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1),(0, 0, 1, 0)]

Group240.children.append(OrientationInterpolator243)

Scene12.children.append(Group240)
Group244 = x3d.Group()
Transform245 = x3d.Transform()
Transform245.scale = [0.2,0.2,0.2]
Shape246 = x3d.Shape()
Shape246.USE = "AxisLinesShape"

Transform245.children.append(Shape246)

Group244.children.append(Transform245)
Transform247 = x3d.Transform()
Transform247.DEF = "Circle0"
Transform247.scale = [1.175,1,1.175]
Shape248 = x3d.Shape()
Shape248.DEF = "circle_Shape"
Appearance249 = x3d.Appearance()
Appearance249.DEF = "circle0_Appearance"
Material250 = x3d.Material()
Material250.DEF = "circle0_Material"
Material250.ambientIntensity = 0.9
Material250.diffuseColor = [0.9,0,0.7]
Material250.emissiveColor = [0.425,0.486,1]

Appearance249.material = Material250

Shape248.appearance = Appearance249
IndexedLineSet251 = x3d.IndexedLineSet()
IndexedLineSet251.DEF = "Orbit1"
IndexedLineSet251.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate252 = x3d.Coordinate()
Coordinate252.DEF = "circle_Coordinates"
Coordinate252.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.994522),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet251.coord = Coordinate252

Shape248.geometry = IndexedLineSet251

Transform247.children.append(Shape248)

Group244.children.append(Transform247)
Transform253 = x3d.Transform()
Transform253.DEF = "Circle1"
Transform253.scale = [0.5,1,0.5]
Shape254 = x3d.Shape()
Shape254.DEF = "circle1_Shape"
Appearance255 = x3d.Appearance()
Appearance255.DEF = "circle1_Appearance"
Material256 = x3d.Material()
Material256.DEF = "circle1_Material"
Material256.diffuseColor = [0.9,0,0.7]
Material256.emissiveColor = [0.424956,0.483976,1]

Appearance255.material = Material256

Shape254.appearance = Appearance255
IndexedLineSet257 = x3d.IndexedLineSet()
IndexedLineSet257.USE = "Orbit1"

Shape254.geometry = IndexedLineSet257

Transform253.children.append(Shape254)

Group244.children.append(Transform253)
Transform258 = x3d.Transform()
Transform258.DEF = "Circle2"
Transform258.scale = [0.25,1,0.25]
Shape259 = x3d.Shape()
Shape259.DEF = "circle2_Shape"
Appearance260 = x3d.Appearance()
Appearance260.DEF = "circle2_Appearance"
Material261 = x3d.Material()
Material261.DEF = "circle2_Material"
Material261.diffuseColor = [0.9,0,0.7]
Material261.emissiveColor = [0.424956,0.483976,1]

Appearance260.material = Material261

Shape259.appearance = Appearance260
IndexedLineSet262 = x3d.IndexedLineSet()
IndexedLineSet262.USE = "Orbit1"

Shape259.geometry = IndexedLineSet262

Transform258.children.append(Shape259)

Group244.children.append(Transform258)

Scene12.children.append(Group244)
ROUTE263 = x3d.ROUTE()
ROUTE263.fromNode = "skull_tipTimer"
ROUTE263.fromField = "fraction_changed"
ROUTE263.toNode = "skull_tipInterp"
ROUTE263.toField = "set_fraction"

Scene12.children.append(ROUTE263)
ROUTE264 = x3d.ROUTE()
ROUTE264.fromNode = "skull_tipInterp"
ROUTE264.fromField = "value_changed"
ROUTE264.toNode = "Joe_skull_tip"
ROUTE264.toField = "set_weight"

Scene12.children.append(ROUTE264)
ROUTE265 = x3d.ROUTE()
ROUTE265.fromNode = "L_finger_tipsTimer"
ROUTE265.fromField = "fraction_changed"
ROUTE265.toNode = "L_finger_tipsInterp"
ROUTE265.toField = "set_fraction"

Scene12.children.append(ROUTE265)
ROUTE266 = x3d.ROUTE()
ROUTE266.fromNode = "L_finger_tipsInterp"
ROUTE266.fromField = "value_changed"
ROUTE266.toNode = "Joe_L_finger_tips"
ROUTE266.toField = "set_weight"

Scene12.children.append(ROUTE266)
ROUTE267 = x3d.ROUTE()
ROUTE267.fromNode = "L_finger_tipsTimer"
ROUTE267.fromField = "fraction_changed"
ROUTE267.toNode = "L_shoulderDispRotInterp"
ROUTE267.toField = "set_fraction"

Scene12.children.append(ROUTE267)
ROUTE268 = x3d.ROUTE()
ROUTE268.fromNode = "L_shoulderDispRotInterp"
ROUTE268.fromField = "value_changed"
ROUTE268.toNode = "Joe_l_shoulder"
ROUTE268.toField = "set_rotation"

Scene12.children.append(ROUTE268)
ROUTE269 = x3d.ROUTE()
ROUTE269.fromNode = "L_shoulderDispRotInterp"
ROUTE269.fromField = "value_changed"
ROUTE269.toNode = "Joe_r_shoulder"
ROUTE269.toField = "set_rotation"

Scene12.children.append(ROUTE269)

X3D0.Scene = Scene12
f = open("../data/HAnimDisplacerExamples.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimDisplacerExamples.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimDisplacerExamples.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

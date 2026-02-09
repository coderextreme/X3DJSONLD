print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
head1.children.append(x3d.Comment("""BS studio translation from .x3dv by Joe using BS Contact"""))
component2 = x3d.component()
component2.name = "H-Anim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "The Joe model is a Humanoid with textured skin."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Joe Williams"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "9 January 2014"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translated"
meta8.content = "12 January 2017"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "09 July 2020"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "TODO"
meta10.content = "Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "translators"
meta11.content = "Roy Walmsley and Don Brutzman"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.info = ["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]
WorldInfo16.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"

Scene15.children.append(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo(DEF="Start_NavigationInfo")
NavigationInfo17.headlight = False
NavigationInfo17.speed = 2.5

Scene15.children.append(NavigationInfo17)
Background18 = x3d.Background(DEF="blue_Background")

Scene15.children.append(Background18)
SpotLight19 = x3d.SpotLight(DEF="light1")
SpotLight19.ambientIntensity = 0.7
SpotLight19.beamWidth = 1.5
SpotLight19.color = [0.8,0.8,1]
SpotLight19.cutOffAngle = 0.6
SpotLight19.direction = [0,0,0]
SpotLight19.location = [0,3,3]
SpotLight19.radius = 10

Scene15.children.append(SpotLight19)
PointLight20 = x3d.PointLight(DEF="light2")
PointLight20.ambientIntensity = 0.7
PointLight20.color = [0.8,0.8,1]
PointLight20.location = [0,10,-7]

Scene15.children.append(PointLight20)
Scene15.children.append(x3d.Comment("""External from the Humanoid viewpoints"""))
Viewpoint21 = x3d.Viewpoint(DEF="Scene_InclinedView")
Viewpoint21.centerOfRotation = [0,0.85,0]
Viewpoint21.description = "Scene_Inclined View"
Viewpoint21.orientation = [-0.113,0.993,0.0347,0.671]
Viewpoint21.position = [1.62,1.05,3.06]

Scene15.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint(DEF="Scene_IFrontView")
Viewpoint22.centerOfRotation = [0,0.8,0]
Viewpoint22.description = "Scene_Front View"
Viewpoint22.position = [0,0.8,2.58]

Scene15.children.append(Viewpoint22)
Viewpoint23 = x3d.Viewpoint(DEF="Scene_ISideView")
Viewpoint23.centerOfRotation = [0,0.8,0]
Viewpoint23.description = "Scene_Side View"
Viewpoint23.orientation = [0,1,0,1.5708]
Viewpoint23.position = [2.6,0.5,0]

Scene15.children.append(Viewpoint23)
Viewpoint24 = x3d.Viewpoint(DEF="Scene_BackView")
Viewpoint24.centerOfRotation = [0,1.5,0]
Viewpoint24.description = "Scene_Back View"
Viewpoint24.orientation = [0,1,0,3.14]
Viewpoint24.position = [0,2.5,-3]

Scene15.children.append(Viewpoint24)
Viewpoint25 = x3d.Viewpoint(DEF="Scene_TopView")
Viewpoint25.centerOfRotation = [0,1.5,0]
Viewpoint25.description = "Scene_Top View"
Viewpoint25.orientation = [1,0,0,-1.5708]
Viewpoint25.position = [0,3.5,0]

Scene15.children.append(Viewpoint25)
Group26 = x3d.Group(DEF="Joe_Humanoid")
HAnimHumanoid27 = x3d.HAnimHumanoid(DEF="Joe_Human")
HAnimHumanoid27.name = "Human"
HAnimHumanoid27.version = "2.0"
HAnimJoint28 = x3d.HAnimJoint(DEF="Joe_HumanoidRoot")
HAnimJoint28.name = "HumanoidRoot"
HAnimJoint28.center = [0,0.875,0]
HAnimSegment29 = x3d.HAnimSegment(DEF="Joe_sacrum")
HAnimSegment29.name = "sacrum"
HAnimSite30 = x3d.HAnimSite(DEF="Joe_RootFront")
HAnimSite30.name = "RootFront"
Transform31 = x3d.Transform(DEF="hanimcordsys")
Transform31.scale = [0.175,0.175,0.175]
Viewpoint32 = x3d.Viewpoint(DEF="ViewBodyRootAxes")
Viewpoint32.description = "Joe_HAnim Root Coordinate Axes View"

Transform31.children.append(Viewpoint32)
Shape33 = x3d.Shape(DEF="AxisLinesShape")
IndexedLineSet34 = x3d.IndexedLineSet()
IndexedLineSet34.colorIndex = [0,1,2]
IndexedLineSet34.colorPerVertex = False
IndexedLineSet34.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate35 = x3d.Coordinate()
Coordinate35.point = [(0, 0, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1)]

IndexedLineSet34.coord = Coordinate35
Color36 = x3d.Color()
Color36.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet34.color = Color36

Shape33.geometry = IndexedLineSet34

Transform31.children.append(Shape33)

HAnimSite30.children.append(Transform31)

HAnimSegment29.children.append(HAnimSite30)

HAnimJoint28.children.append(HAnimSegment29)
HAnimJoint37 = x3d.HAnimJoint(DEF="Joe_sacroiliac")
HAnimJoint37.name = "sacroiliac"
HAnimJoint37.center = [0,0.92,0]
HAnimJoint37.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint37.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimJoint38 = x3d.HAnimJoint(DEF="Joe_l_hip")
HAnimJoint38.name = "l_hip"
HAnimJoint38.center = [0.1,0.92,0]
HAnimJoint38.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint38.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimJoint39 = x3d.HAnimJoint(DEF="Joe_l_knee")
HAnimJoint39.name = "l_knee"
HAnimJoint39.center = [0.115,0.466,0]
HAnimJoint39.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint39.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint40 = x3d.HAnimJoint(DEF="Joe_l_ankle")
HAnimJoint40.name = "l_ankle"
HAnimJoint40.center = [0.115,0.069,0]
HAnimJoint40.skinCoordIndex = [342,343,344,345]
HAnimJoint40.skinCoordWeight = [1,1,1,1]
HAnimJoint41 = x3d.HAnimJoint(DEF="Joe_l_subtalar")
HAnimJoint41.name = "l_subtalar"
HAnimJoint41.center = [0.115,0.031,0.03]
HAnimJoint41.skinCoordIndex = [346,347,348,71]
HAnimJoint41.skinCoordWeight = [1,1,1,1]
HAnimJoint42 = x3d.HAnimJoint(DEF="Joe_l_midtarsal")
HAnimJoint42.name = "l_midtarsal"
HAnimJoint42.center = [0.115,0.037,0.09]
HAnimJoint42.skinCoordIndex = [349,350,351,352]
HAnimJoint42.skinCoordWeight = [1,1,1,1]
HAnimJoint43 = x3d.HAnimJoint(DEF="Joe_l_metatarsal")
HAnimJoint43.name = "l_metatarsal"
HAnimJoint43.center = [0.115,0.02,0.122]
HAnimJoint43.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint43.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint40.children.append(HAnimJoint41)

HAnimJoint39.children.append(HAnimJoint40)

HAnimJoint38.children.append(HAnimJoint39)

HAnimJoint37.children.append(HAnimJoint38)
HAnimJoint44 = x3d.HAnimJoint(DEF="Joe_r_hip")
HAnimJoint44.name = "r_hip"
HAnimJoint44.center = [-0.1,0.92,0]
HAnimJoint44.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint44.skinCoordWeight = [0.65,1,0.8,1,1,1,0.4,0.8]
HAnimJoint45 = x3d.HAnimJoint(DEF="Joe_r_knee")
HAnimJoint45.name = "r_knee"
HAnimJoint45.center = [-0.05,0.466,0]
HAnimJoint45.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint45.skinCoordWeight = [0.6,0.2,1,1,1,1,1,1,0.2]
HAnimJoint46 = x3d.HAnimJoint(DEF="Joe_r_ankle")
HAnimJoint46.name = "r_ankle"
HAnimJoint46.center = [-0.115,0.069,0]
HAnimJoint46.skinCoordIndex = [370,371,372,373]
HAnimJoint46.skinCoordWeight = [1,1,1,1]
HAnimJoint47 = x3d.HAnimJoint(DEF="Joe_r_subtalar")
HAnimJoint47.name = "r_subtalar"
HAnimJoint47.center = [-0.1,0.015,-0.01]
HAnimJoint47.skinCoordIndex = [374,375,376]
HAnimJoint47.skinCoordWeight = [1,1,1]
HAnimJoint48 = x3d.HAnimJoint(DEF="Joe_r_midtarsal")
HAnimJoint48.name = "r_midtarsal"
HAnimJoint48.center = [-0.115,0.037,0.09]
HAnimJoint48.skinCoordIndex = [377,378,379,380]
HAnimJoint48.skinCoordWeight = [1,1,1,1]
HAnimJoint49 = x3d.HAnimJoint(DEF="Joe_r_metatarsal")
HAnimJoint49.name = "r_metatarsal"
HAnimJoint49.center = [-0.1,0.01,0.14]
HAnimJoint49.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint49.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint45.children.append(HAnimJoint46)

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint37.children.append(HAnimJoint44)

HAnimJoint28.children.append(HAnimJoint37)
HAnimJoint50 = x3d.HAnimJoint(DEF="Joe_vl5")
HAnimJoint50.name = "vl5"
HAnimJoint50.center = [0,1.045,-0.095]
HAnimJoint50.skinCoordIndex = [28,76]
HAnimJoint50.skinCoordWeight = [1,1]
HAnimJoint51 = x3d.HAnimJoint(DEF="Joe_vl4")
HAnimJoint51.name = "vl4"
HAnimJoint51.center = [0,1.068,-0.085]
HAnimJoint52 = x3d.HAnimJoint(DEF="Joe_vl3")
HAnimJoint52.name = "vl3"
HAnimJoint52.center = [0,1.092,-0.0725]
HAnimJoint53 = x3d.HAnimJoint(DEF="Joe_vl2")
HAnimJoint53.name = "vl2"
HAnimJoint53.center = [0,1.12,-0.065]
HAnimJoint53.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint53.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimJoint54 = x3d.HAnimJoint(DEF="Joe_vl1")
HAnimJoint54.name = "vl1"
HAnimJoint54.center = [0,1.1459,-0.0625]
HAnimJoint55 = x3d.HAnimJoint(DEF="Joe_vt12")
HAnimJoint55.name = "vt12"
HAnimJoint55.center = [0,1.179,-0.068]
HAnimJoint56 = x3d.HAnimJoint(DEF="Joe_vt11")
HAnimJoint56.name = "vt11"
HAnimJoint56.center = [0,1.2679,-0.081]
HAnimJoint57 = x3d.HAnimJoint(DEF="Joe_vt10")
HAnimJoint57.name = "vt10"
HAnimJoint57.center = [0,1.242,-0.09]
HAnimJoint57.skinCoordIndex = [15]
HAnimJoint57.skinCoordWeight = [1]
HAnimJoint58 = x3d.HAnimJoint(DEF="Joe_vt9")
HAnimJoint58.name = "vt9"
HAnimJoint58.center = [0,1.268,-0.1]
HAnimJoint58.skinCoordIndex = [13,14]
HAnimJoint58.skinCoordWeight = [1,1]
HAnimJoint59 = x3d.HAnimJoint(DEF="Joe_vt8")
HAnimJoint59.name = "vt8"
HAnimJoint59.center = [0,1.294,-0.11]
HAnimJoint60 = x3d.HAnimJoint(DEF="Joe_vt7")
HAnimJoint60.name = "vt7"
HAnimJoint60.center = [0,1.323,-0.1155]
HAnimJoint61 = x3d.HAnimJoint(DEF="Joe_vt6")
HAnimJoint61.name = "vt6"
HAnimJoint61.center = [0,1.352,-0.12]
HAnimJoint62 = x3d.HAnimJoint(DEF="Joe_vt5")
HAnimJoint62.name = "vt5"
HAnimJoint62.center = [0,1.381,-0.1235]
HAnimJoint63 = x3d.HAnimJoint(DEF="Joe_vt4")
HAnimJoint63.name = "vt4"
HAnimJoint63.center = [0,1.41,-0.1235]
HAnimJoint63.skinCoordIndex = [81]
HAnimJoint63.skinCoordWeight = [1]
HAnimJoint64 = x3d.HAnimJoint(DEF="Joe_vt3")
HAnimJoint64.name = "vt3"
HAnimJoint64.center = [0,1.438,-0.12]
HAnimJoint65 = x3d.HAnimJoint(DEF="Joe_vt2")
HAnimJoint65.name = "vt2"
HAnimJoint65.center = [0,1.468,-0.105]
HAnimJoint66 = x3d.HAnimJoint(DEF="Joe_vt1")
HAnimJoint66.name = "vt1"
HAnimJoint66.center = [0,1.497,-0.09]
HAnimJoint66.skinCoordIndex = [11,24]
HAnimJoint66.skinCoordWeight = [1,1]
HAnimJoint67 = x3d.HAnimJoint(DEF="Joe_vc7")
HAnimJoint67.name = "vc7"
HAnimJoint67.center = [0,1.525,-0.072]
HAnimJoint67.skinCoordIndex = [74,75]
HAnimJoint67.skinCoordWeight = [1,1]
HAnimJoint68 = x3d.HAnimJoint(DEF="Joe_vc6")
HAnimJoint68.name = "vc6"
HAnimJoint68.center = [0,1.54,-0.05]
HAnimJoint69 = x3d.HAnimJoint(DEF="Joe_vc5")
HAnimJoint69.name = "vc5"
HAnimJoint69.center = [0,1.552,-0.035]
HAnimJoint70 = x3d.HAnimJoint(DEF="Joe_vc4")
HAnimJoint70.name = "vc4"
HAnimJoint70.center = [0,1.5675,-0.0256]
HAnimJoint71 = x3d.HAnimJoint(DEF="Joe_vc3")
HAnimJoint71.name = "vc3"
HAnimJoint71.center = [0,1.58225,-0.0185]
HAnimJoint72 = x3d.HAnimJoint(DEF="Joe_vc2")
HAnimJoint72.name = "vc2"
HAnimJoint72.center = [0,1.595,-0.0175]
HAnimJoint73 = x3d.HAnimJoint(DEF="Joe_vc1")
HAnimJoint73.name = "vc1"
HAnimJoint73.center = [0,1.61,-0.015]
HAnimJoint74 = x3d.HAnimJoint(DEF="Joe_skullbase")
HAnimJoint74.name = "skullbase"
HAnimJoint74.center = [0,1.63,-0.01]
HAnimJoint74.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint74.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimDisplacer75 = x3d.HAnimDisplacer(DEF="Joe_skull_tipTest")
HAnimDisplacer75.name = "skull_tip_raiser_action"
HAnimDisplacer75.coordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimDisplacer75.displacements = [(0, 0.15, 0),(0, 0, 0.15),(-0.1, 0, 0.15),(0.1, 0, 0.05),(0, -0.02, 0.05),(-0.15, 0, 0),(-0.05, 0, 0),(0.15, 0, 0),(0.05, 0, 0),(0, 0, -0.15)]

HAnimJoint74.displacers.append(HAnimDisplacer75)
HAnimJoint76 = x3d.HAnimJoint(DEF="Joe_l_eyelid_joint")
HAnimJoint76.name = "l_eyelid_joint"
HAnimJoint76.center = [0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint76)
HAnimJoint77 = x3d.HAnimJoint(DEF="Joe_l_eyeball_joint")
HAnimJoint77.name = "l_eyeball_joint"
HAnimJoint77.center = [0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint77)
HAnimJoint78 = x3d.HAnimJoint(DEF="Joe_l_eyebrow_joint")
HAnimJoint78.name = "l_eyebrow_joint"
HAnimJoint78.center = [0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint78)
HAnimJoint79 = x3d.HAnimJoint(DEF="Joe_r_eyelid_joint")
HAnimJoint79.name = "l_eyelid_joint"
HAnimJoint79.center = [-0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint79)
HAnimJoint80 = x3d.HAnimJoint(DEF="Joe_r_eyeball_joint")
HAnimJoint80.name = "l_eyeball_joint"
HAnimJoint80.center = [-0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint80)
HAnimJoint81 = x3d.HAnimJoint(DEF="Joe_r_eyebrow_joint")
HAnimJoint81.name = "l_eyebrow_joint"
HAnimJoint81.center = [-0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint81)
HAnimJoint82 = x3d.HAnimJoint(DEF="Joe_temporomandibular")
HAnimJoint82.name = "temporomandibular"
HAnimJoint82.center = [0.034,1.659,0.06]

HAnimJoint74.children.append(HAnimJoint82)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)
HAnimJoint83 = x3d.HAnimJoint(DEF="Joe_l_sternoclavicular")
HAnimJoint83.name = "l_sternoclavicular"
HAnimJoint83.center = [0.082,1.4488,-0.0353]
HAnimJoint83.skinCoordIndex = [12]
HAnimJoint83.skinCoordWeight = [1]
HAnimJoint84 = x3d.HAnimJoint(DEF="Joe_l_acromioclavicular")
HAnimJoint84.name = "l_acromioclavicular"
HAnimJoint84.center = [0.0962,1.4269,-0.0424]
HAnimJoint84.skinCoordIndex = [79]
HAnimJoint84.skinCoordWeight = [1]
HAnimJoint85 = x3d.HAnimJoint(DEF="Joe_l_shoulder")
HAnimJoint85.name = "l_shoulder"
HAnimJoint85.center = [0.2,1.44,-0.04]
HAnimJoint85.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint85.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint86 = x3d.HAnimJoint(DEF="Joe_l_elbow")
HAnimJoint86.name = "l_elbow"
HAnimJoint86.center = [0.2,1.1388,-0.04]
HAnimJoint86.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint86.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint87 = x3d.HAnimJoint(DEF="Joe_l_wrist")
HAnimJoint87.name = "l_wrist"
HAnimJoint87.center = [0.2,0.87,-0.04]
HAnimJoint87.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint87.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint88 = x3d.HAnimJoint(DEF="Joe_l_thumb1")
HAnimJoint88.name = "l_thumb1"
HAnimJoint88.center = [0.1924,0.8472,-0.0534]
HAnimJoint88.skinCoordIndex = [127,128]
HAnimJoint88.skinCoordWeight = [1,1]
HAnimJoint89 = x3d.HAnimJoint(DEF="Joe_l_thumb2")
HAnimJoint89.name = "l_thumb2"
HAnimJoint89.center = [0.1951,0.8226,0.0246]
HAnimJoint89.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint89.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint90 = x3d.HAnimJoint(DEF="Joe_l_thumb3")
HAnimJoint90.name = "l_thumb3"
HAnimJoint90.center = [0.1955,0.8159,0.0464]
HAnimJoint90.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint90.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)
HAnimJoint91 = x3d.HAnimJoint(DEF="Joe_l_index0")
HAnimJoint91.name = "l_index0"
HAnimJoint91.center = [0.1983,0.8024,-0.028]
HAnimJoint91.skinCoordIndex = [129,130]
HAnimJoint91.skinCoordWeight = [1,1]
HAnimJoint92 = x3d.HAnimJoint(DEF="Joe_l_index1")
HAnimJoint92.name = "l_index1"
HAnimJoint92.center = [0.1983,0.7815,-0.028]
HAnimJoint92.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint92.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint93 = x3d.HAnimJoint(DEF="Joe_l_index2")
HAnimJoint93.name = "l_index2"
HAnimJoint93.center = [0.2017,0.7363,-0.0248]
HAnimJoint93.skinCoordIndex = [166,167,168,169]
HAnimJoint93.skinCoordWeight = [1,1,1,1]
HAnimJoint94 = x3d.HAnimJoint(DEF="Joe_l_index3")
HAnimJoint94.name = "l_index3"
HAnimJoint94.center = [0.2028,0.7139,-0.0236]
HAnimJoint94.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint94.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint87.children.append(HAnimJoint91)
HAnimJoint95 = x3d.HAnimJoint(DEF="Joe_l_middle0")
HAnimJoint95.name = "l_middle0"
HAnimJoint95.center = [0.1987,0.8029,-0.053]
HAnimJoint95.skinCoordIndex = [131,132]
HAnimJoint95.skinCoordWeight = [1,1]
HAnimJoint96 = x3d.HAnimJoint(DEF="Joe_l_middle1")
HAnimJoint96.name = "l_middle1"
HAnimJoint96.center = [0.1987,0.7818,-0.053]
HAnimJoint96.skinCoordIndex = [156,157,163,164]
HAnimJoint96.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint97 = x3d.HAnimJoint(DEF="Joe_l_middle2")
HAnimJoint97.name = "l_middle2"
HAnimJoint97.center = [0.2013,0.7273,-0.0503]
HAnimJoint97.skinCoordIndex = [179,180,181,182]
HAnimJoint97.skinCoordWeight = [1,1,1,1]
HAnimJoint98 = x3d.HAnimJoint(DEF="Joe_l_middle3")
HAnimJoint98.name = "l_middle3"
HAnimJoint98.center = [0.2026,0.7011,-0.0494]
HAnimJoint98.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint98.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint96.children.append(HAnimJoint97)

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint87.children.append(HAnimJoint95)
HAnimJoint99 = x3d.HAnimJoint(DEF="Joe_l_ring0")
HAnimJoint99.name = "l_ring0"
HAnimJoint99.center = [0.1956,0.8019,-0.0794]
HAnimJoint99.skinCoordIndex = [133,134]
HAnimJoint99.skinCoordWeight = [1,1]
HAnimJoint100 = x3d.HAnimJoint(DEF="Joe_l_ring1")
HAnimJoint100.name = "l_ring1"
HAnimJoint100.center = [0.1956,0.7815,-0.0794]
HAnimJoint100.skinCoordIndex = [158,159,164,165]
HAnimJoint100.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint101 = x3d.HAnimJoint(DEF="Joe_l_ring2")
HAnimJoint101.name = "l_ring2"
HAnimJoint101.center = [0.1973,0.7287,-0.0777]
HAnimJoint101.skinCoordIndex = [192,193,194,195]
HAnimJoint101.skinCoordWeight = [1,1,1,1]
HAnimJoint102 = x3d.HAnimJoint(DEF="Joe_l_ring3")
HAnimJoint102.name = "l_ring3"
HAnimJoint102.center = [0.1983,0.7045,-0.0767]
HAnimJoint102.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint102.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint87.children.append(HAnimJoint99)
HAnimJoint103 = x3d.HAnimJoint(DEF="Joe_l_pinky0")
HAnimJoint103.name = "l_pinky0"
HAnimJoint103.center = [0.1925,0.8066,-0.1036]
HAnimJoint103.skinCoordIndex = [135,136,137,165]
HAnimJoint103.skinCoordWeight = [1,1,1,0.5]
HAnimJoint104 = x3d.HAnimJoint(DEF="Joe_l_pinky1")
HAnimJoint104.name = "l_pinky1"
HAnimJoint104.center = [0.1925,0.7866,-0.1036]
HAnimJoint104.skinCoordIndex = [160,161,162]
HAnimJoint104.skinCoordWeight = [1,1,1]
HAnimJoint105 = x3d.HAnimJoint(DEF="Joe_l_pinky2")
HAnimJoint105.name = "l_pinky2"
HAnimJoint105.center = [0.1938,0.7452,-0.1024]
HAnimJoint105.skinCoordIndex = [205,206,207,208]
HAnimJoint105.skinCoordWeight = [1,1,1,1]
HAnimJoint106 = x3d.HAnimJoint(DEF="Joe_l_pinky3")
HAnimJoint106.name = "l_pinky3"
HAnimJoint106.center = [0.1948,0.7277,-0.1017]
HAnimJoint106.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint106.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint105.children.append(HAnimJoint106)

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint87.children.append(HAnimJoint103)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint84.children.append(HAnimJoint85)

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint67.children.append(HAnimJoint83)
HAnimJoint107 = x3d.HAnimJoint(DEF="Joe_r_sternoclavicular")
HAnimJoint107.name = "r_sternoclavicular"
HAnimJoint107.center = [-0.03,1.46,0]
HAnimJoint107.skinCoordIndex = [10]
HAnimJoint107.skinCoordWeight = [1]
HAnimJoint108 = x3d.HAnimJoint(DEF="Joe_r_acromioclavicular")
HAnimJoint108.name = "r_acromioclavicular"
HAnimJoint108.center = [-0.09,1.41,-0.11]
HAnimJoint108.skinCoordIndex = [77,29]
HAnimJoint108.skinCoordWeight = [1,0.9]
HAnimJoint109 = x3d.HAnimJoint(DEF="Joe_r_shoulder")
HAnimJoint109.name = "r_shoulder"
HAnimJoint109.center = [-0.2,1.44,-0.04]
HAnimJoint109.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint109.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimJoint110 = x3d.HAnimJoint(DEF="Joe_r_elbow")
HAnimJoint110.name = "r_elbow"
HAnimJoint110.center = [-0.2,1.1388,-0.04]
HAnimJoint110.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint110.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint111 = x3d.HAnimJoint(DEF="Joe_r_wrist")
HAnimJoint111.name = "r_wrist"
HAnimJoint111.center = [-0.2,0.89,-0.04]
HAnimJoint111.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint111.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint112 = x3d.HAnimJoint(DEF="Joe_r_thumb1")
HAnimJoint112.name = "r_thumb1"
HAnimJoint112.center = [-0.2,0.85,0]
HAnimJoint112.skinCoordIndex = [243,244]
HAnimJoint112.skinCoordWeight = [1,1]
HAnimJoint113 = x3d.HAnimJoint(DEF="Joe_r_thumb2")
HAnimJoint113.name = "r_thumb2"
HAnimJoint113.center = [-0.2,0.82,0.03]
HAnimJoint113.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint113.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint114 = x3d.HAnimJoint(DEF="Joe_r_thumb3")
HAnimJoint114.name = "r_thumb3"
HAnimJoint114.center = [-0.2,0.8,0.05]
HAnimJoint114.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint114.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint113.children.append(HAnimJoint114)

HAnimJoint112.children.append(HAnimJoint113)

HAnimJoint111.children.append(HAnimJoint112)
HAnimJoint115 = x3d.HAnimJoint(DEF="Joe_r_index0")
HAnimJoint115.name = "r_index0"
HAnimJoint115.center = [-0.2,0.84,-0.015]
HAnimJoint115.skinCoordIndex = [245,246]
HAnimJoint115.skinCoordWeight = [1,1]
HAnimJoint116 = x3d.HAnimJoint(DEF="Joe_r_index1")
HAnimJoint116.name = "r_index1"
HAnimJoint116.center = [-0.2,0.793,-0.015]
HAnimJoint116.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint116.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint117 = x3d.HAnimJoint(DEF="Joe_r_index2")
HAnimJoint117.name = "r_index2"
HAnimJoint117.center = [-0.2,0.745,-0.015]
HAnimJoint117.skinCoordIndex = [282,283,284,285]
HAnimJoint117.skinCoordWeight = [1,1,1,1]
HAnimJoint118 = x3d.HAnimJoint(DEF="Joe_r_index3")
HAnimJoint118.name = "r_index3"
HAnimJoint118.center = [-0.2,0.72,-0.015]
HAnimJoint118.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint118.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint117.children.append(HAnimJoint118)

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint111.children.append(HAnimJoint115)
HAnimJoint119 = x3d.HAnimJoint(DEF="Joe_r_middle0")
HAnimJoint119.name = "r_middle0"
HAnimJoint119.center = [-0.2,0.835,-0.04]
HAnimJoint119.skinCoordIndex = [247,248]
HAnimJoint119.skinCoordWeight = [1,1]
HAnimJoint120 = x3d.HAnimJoint(DEF="Joe_r_middle1")
HAnimJoint120.name = "r_middle1"
HAnimJoint120.center = [-0.2,0.788,-0.04]
HAnimJoint120.skinCoordIndex = [272,273,279,280]
HAnimJoint120.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint121 = x3d.HAnimJoint(DEF="Joe_r_middle2")
HAnimJoint121.name = "r_middle2"
HAnimJoint121.center = [-0.2,0.74,-0.04]
HAnimJoint121.skinCoordIndex = [295,296,297,298]
HAnimJoint121.skinCoordWeight = [1,1,1,1]
HAnimJoint122 = x3d.HAnimJoint(DEF="Joe_r_middle3")
HAnimJoint122.name = "r_middle3"
HAnimJoint122.center = [-0.2,0.7142,-0.04]
HAnimJoint122.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint122.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint121.children.append(HAnimJoint122)

HAnimJoint120.children.append(HAnimJoint121)

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint111.children.append(HAnimJoint119)
HAnimJoint123 = x3d.HAnimJoint(DEF="Joe_r_ring0")
HAnimJoint123.name = "r_ring0"
HAnimJoint123.center = [-0.2,0.835,-0.065]
HAnimJoint123.skinCoordIndex = [249,250]
HAnimJoint123.skinCoordWeight = [1,1]
HAnimJoint124 = x3d.HAnimJoint(DEF="Joe_r_ring1")
HAnimJoint124.name = "r_ring1"
HAnimJoint124.center = [-0.2,0.793,-0.065]
HAnimJoint124.skinCoordIndex = [274,275,280,281]
HAnimJoint124.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint125 = x3d.HAnimJoint(DEF="Joe_r_ring2")
HAnimJoint125.name = "r_ring2"
HAnimJoint125.center = [-0.2,0.74,-0.065]
HAnimJoint125.skinCoordIndex = [308,309,310,311]
HAnimJoint125.skinCoordWeight = [1,1,1,1]
HAnimJoint126 = x3d.HAnimJoint(DEF="Joe_r_ring3")
HAnimJoint126.name = "r_ring3"
HAnimJoint126.center = [-0.2,0.7177,-0.065]
HAnimJoint126.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint126.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint125.children.append(HAnimJoint126)

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint111.children.append(HAnimJoint123)
HAnimJoint127 = x3d.HAnimJoint(DEF="Joe_r_pinky0")
HAnimJoint127.name = "r_pinky0"
HAnimJoint127.center = [-0.2,0.84,-0.085]
HAnimJoint127.skinCoordIndex = [251,252,253,281]
HAnimJoint127.skinCoordWeight = [1,1,1,0.5]
HAnimJoint128 = x3d.HAnimJoint(DEF="Joe_r_pinky1")
HAnimJoint128.name = "r_pinky1"
HAnimJoint128.center = [-0.2,0.79,-0.085]
HAnimJoint128.skinCoordIndex = [276,277,278]
HAnimJoint128.skinCoordWeight = [1,1,1]
HAnimJoint129 = x3d.HAnimJoint(DEF="Joe_r_pinky2")
HAnimJoint129.name = "r_pinky2"
HAnimJoint129.center = [-0.2,0.755,-0.085]
HAnimJoint129.skinCoordIndex = [321,322,323,324]
HAnimJoint129.skinCoordWeight = [1,1,1,1]
HAnimJoint130 = x3d.HAnimJoint(DEF="Joe_r_pinky3")
HAnimJoint130.name = "r_pinky3"
HAnimJoint130.center = [-0.2,0.735,-0.09]
HAnimJoint130.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint130.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint129.children.append(HAnimJoint130)

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint111.children.append(HAnimJoint127)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint109.children.append(HAnimJoint110)

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint67.children.append(HAnimJoint107)

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

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint28.children.append(HAnimJoint50)

HAnimHumanoid27.skeleton.append(HAnimJoint28)
Shape131 = x3d.Shape(DEF="Joe_Shape")
Appearance132 = x3d.Appearance(DEF="Joe_skin_Appearance")
Material133 = x3d.Material(DEF="Joe_skin_Material")
Material133.diffuseColor = [0.3,0.3,0.6]
Material133.emissiveColor = [0.3,0.3,0.6]

Appearance132.material = Material133
ImageTexture134 = x3d.ImageTexture(DEF="JoeSkinImageTexture")
ImageTexture134.url = ["bodytexture28.png"]

Appearance132.texture = ImageTexture134
TextureTransform135 = x3d.TextureTransform(DEF="kicktextrans")

Appearance132.textureTransform = TextureTransform135

Shape131.appearance = Appearance132
IndexedFaceSet136 = x3d.IndexedFaceSet(DEF="Joe_skin_IndexedFaceSet")
IndexedFaceSet136.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet136.creaseAngle = 3.14
Coordinate137 = x3d.Coordinate(DEF="Joe_SkinCoord")
Coordinate137.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.255, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

IndexedFaceSet136.coord = Coordinate137
TextureCoordinate138 = x3d.TextureCoordinate()
TextureCoordinate138.point = [(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5),(0, 0),(0.5, 0.5)]

IndexedFaceSet136.texCoord = TextureCoordinate138

Shape131.geometry = IndexedFaceSet136

HAnimHumanoid27.skin.append(Shape131)
Coordinate139 = x3d.Coordinate(USE="Joe_SkinCoord")

HAnimHumanoid27.skinCoord = Coordinate139

Group26.children.append(HAnimHumanoid27)

Scene15.children.append(Group26)
Group140 = x3d.Group()
TimeSensor141 = x3d.TimeSensor(DEF="KickTimer")
TimeSensor141.cycleInterval = 3.73
TimeSensor141.loop = True

Group140.children.append(TimeSensor141)
Group140.children.append(x3d.Comment("""Interpolators"""))
OrientationInterpolator142 = x3d.OrientationInterpolator(DEF="HumanoidRootRotInterp")
OrientationInterpolator142.key = [0,0.1,0.4,0.6,1]
OrientationInterpolator142.keyValue = [(1, 0, 0, 0.5),(1, 0, 0, 0.5),(-1, 0, 0, 0.1),(-1, 0, 0, 0.5),(-1, 0, 0, 0.5)]

Group140.children.append(OrientationInterpolator142)
PositionInterpolator143 = x3d.PositionInterpolator(DEF="HumanoidRootTransInterp")
PositionInterpolator143.key = [0,0.2,0.6,1]
PositionInterpolator143.keyValue = [(1, 0.3, -1),(0.4, -0.04, -0.4),(-0.18, 0.1, 0),(-0.2, 0.15, 0.15)]

Group140.children.append(PositionInterpolator143)
OrientationInterpolator144 = x3d.OrientationInterpolator(DEF="sacroiliacRotInterp")
OrientationInterpolator144.key = [0,0.5,1]
OrientationInterpolator144.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator144)
OrientationInterpolator145 = x3d.OrientationInterpolator(DEF="l_hipRotInterp")
OrientationInterpolator145.key = [0,0.1,0.3,0.45,1]
OrientationInterpolator145.keyValue = [(-1, 0, 0, 1.5),(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 0.5),(1, 0, 0, 1)]

Group140.children.append(OrientationInterpolator145)
OrientationInterpolator146 = x3d.OrientationInterpolator(DEF="l_kneeRotInterp")
OrientationInterpolator146.key = [0,0.2,0.35,0.5,1]
OrientationInterpolator146.keyValue = [(1, 0, 0, 1),(0, 0, 1, 0),(0, 0, 1, 0.2),(1, 0, 1, 0.5),(1, 0, 0, 1.4)]

Group140.children.append(OrientationInterpolator146)
OrientationInterpolator147 = x3d.OrientationInterpolator(DEF="l_ankleRotInterp")
OrientationInterpolator147.key = [0,0.25,1]
OrientationInterpolator147.keyValue = [(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 1)]

Group140.children.append(OrientationInterpolator147)
OrientationInterpolator148 = x3d.OrientationInterpolator(DEF="l_subtalarRotInterp")
OrientationInterpolator148.key = [0,0.5,1]
OrientationInterpolator148.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator148)
OrientationInterpolator149 = x3d.OrientationInterpolator(DEF="l_midtarsalRotInterp")
OrientationInterpolator149.key = [0,0.5,1]
OrientationInterpolator149.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator149)
OrientationInterpolator150 = x3d.OrientationInterpolator(DEF="l_metatarsalRotInterp")
OrientationInterpolator150.key = [0,0.5,1]
OrientationInterpolator150.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator150)
OrientationInterpolator151 = x3d.OrientationInterpolator(DEF="r_hipRotInterp")
OrientationInterpolator151.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator151.keyValue = [(1, 0, 0, 1),(1, 0, 0, 1),(-1, 0, 0, 1),(-1, 0, 0, 1),(-1, 0, 0, 1)]

Group140.children.append(OrientationInterpolator151)
OrientationInterpolator152 = x3d.OrientationInterpolator(DEF="r_kneeRotInterp")
OrientationInterpolator152.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator152.keyValue = [(1, 0, 0, 0.1),(0, 0, 1, 0),(1, 0, 0, 1),(1, 0, 0, 1),(1, 0, 0, 1.5)]

Group140.children.append(OrientationInterpolator152)
OrientationInterpolator153 = x3d.OrientationInterpolator(DEF="r_ankleRotInterp")
OrientationInterpolator153.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator153.keyValue = [(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 1),(1, 0, 0, 1),(1, 0, 0, 0.5)]

Group140.children.append(OrientationInterpolator153)
OrientationInterpolator154 = x3d.OrientationInterpolator(DEF="r_subtalarRotInterp")
OrientationInterpolator154.key = [0,0.5,1]
OrientationInterpolator154.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator154)
OrientationInterpolator155 = x3d.OrientationInterpolator(DEF="r_midtarsalRotInterp")
OrientationInterpolator155.key = [0,0.5,1]
OrientationInterpolator155.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator155)
OrientationInterpolator156 = x3d.OrientationInterpolator(DEF="r_metatarsalRotInterp")
OrientationInterpolator156.key = [0,0.5,1]
OrientationInterpolator156.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator156)
OrientationInterpolator157 = x3d.OrientationInterpolator(DEF="vl5RotInterp")
OrientationInterpolator157.key = [0,0.5,1]
OrientationInterpolator157.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator157)
OrientationInterpolator158 = x3d.OrientationInterpolator(DEF="vl4RotInterp")
OrientationInterpolator158.key = [0,0.5,1]
OrientationInterpolator158.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator158)
OrientationInterpolator159 = x3d.OrientationInterpolator(DEF="vl3RotInterp")
OrientationInterpolator159.key = [0,0.5,1]
OrientationInterpolator159.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator159)
OrientationInterpolator160 = x3d.OrientationInterpolator(DEF="vl2RotInterp")
OrientationInterpolator160.key = [0,0.5,1]
OrientationInterpolator160.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator160)
OrientationInterpolator161 = x3d.OrientationInterpolator(DEF="vl1RotInterp")
OrientationInterpolator161.key = [0,0.5,1]
OrientationInterpolator161.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator161)
OrientationInterpolator162 = x3d.OrientationInterpolator(DEF="vt12RotInterp")
OrientationInterpolator162.key = [0,0.5,1]
OrientationInterpolator162.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator162)
OrientationInterpolator163 = x3d.OrientationInterpolator(DEF="vt11RotInterp")
OrientationInterpolator163.key = [0,0.5,1]
OrientationInterpolator163.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator163)
OrientationInterpolator164 = x3d.OrientationInterpolator(DEF="vt10RotInterp")
OrientationInterpolator164.key = [0,0.5,1]
OrientationInterpolator164.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator164)
OrientationInterpolator165 = x3d.OrientationInterpolator(DEF="vt9RotInterp")
OrientationInterpolator165.key = [0,0.5,1]
OrientationInterpolator165.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator165)
OrientationInterpolator166 = x3d.OrientationInterpolator(DEF="vt8RotInterp")
OrientationInterpolator166.key = [0,0.5,1]
OrientationInterpolator166.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator166)
OrientationInterpolator167 = x3d.OrientationInterpolator(DEF="vt7RotInterp")
OrientationInterpolator167.key = [0,0.5,1]
OrientationInterpolator167.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator167)
OrientationInterpolator168 = x3d.OrientationInterpolator(DEF="vt6RotInterp")
OrientationInterpolator168.key = [0,0.5,1]
OrientationInterpolator168.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator168)
OrientationInterpolator169 = x3d.OrientationInterpolator(DEF="vt5RotInterp")
OrientationInterpolator169.key = [0,0.5,1]
OrientationInterpolator169.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator169)
OrientationInterpolator170 = x3d.OrientationInterpolator(DEF="vt4RotInterp")
OrientationInterpolator170.key = [0,0.5,1]
OrientationInterpolator170.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator170)
OrientationInterpolator171 = x3d.OrientationInterpolator(DEF="vt3RotInterp")
OrientationInterpolator171.key = [0,0.5,1]
OrientationInterpolator171.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator171)
OrientationInterpolator172 = x3d.OrientationInterpolator(DEF="vt2RotInterp")
OrientationInterpolator172.key = [0,0.5,1]
OrientationInterpolator172.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator172)
OrientationInterpolator173 = x3d.OrientationInterpolator(DEF="vt1RotInterp")
OrientationInterpolator173.key = [0,0.5,1]
OrientationInterpolator173.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator173)
OrientationInterpolator174 = x3d.OrientationInterpolator(DEF="vc7RotInterp")
OrientationInterpolator174.key = [0,0.5,1]
OrientationInterpolator174.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator174)
OrientationInterpolator175 = x3d.OrientationInterpolator(DEF="vc6RotInterp")
OrientationInterpolator175.key = [0,0.5,1]
OrientationInterpolator175.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator175)
OrientationInterpolator176 = x3d.OrientationInterpolator(DEF="vc5RotInterp")
OrientationInterpolator176.key = [0,0.5,1]
OrientationInterpolator176.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator176)
OrientationInterpolator177 = x3d.OrientationInterpolator(DEF="vc4RotInterp")
OrientationInterpolator177.key = [0,0.3,0.4,1]
OrientationInterpolator177.keyValue = [(1, 0, 1, 0.25),(-1, 0, -1, 0.35),(1, 0, 0, 0.75),(1, 0, 1, 0.5)]

Group140.children.append(OrientationInterpolator177)
OrientationInterpolator178 = x3d.OrientationInterpolator(DEF="vc3RotInterp")
OrientationInterpolator178.key = [0,0.5,1]
OrientationInterpolator178.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator178)
OrientationInterpolator179 = x3d.OrientationInterpolator(DEF="vc2RotInterp")
OrientationInterpolator179.key = [0,0.5,1]
OrientationInterpolator179.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator179)
OrientationInterpolator180 = x3d.OrientationInterpolator(DEF="vc1RotInterp")
OrientationInterpolator180.key = [0,0.5,1]
OrientationInterpolator180.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator180)
OrientationInterpolator181 = x3d.OrientationInterpolator(DEF="skullbaseRotInterp")
OrientationInterpolator181.key = [0,0.2,0.75,1]
OrientationInterpolator181.keyValue = [(0, -1, 0, 0.5),(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, 0.35)]

Group140.children.append(OrientationInterpolator181)
OrientationInterpolator182 = x3d.OrientationInterpolator(DEF="l_eyelid_jointRotInterp")
OrientationInterpolator182.key = [0,0.5,1]
OrientationInterpolator182.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator182)
OrientationInterpolator183 = x3d.OrientationInterpolator(DEF="l_eyeball_jointRotInterp")
OrientationInterpolator183.key = [0,0.5,1]
OrientationInterpolator183.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator183)
OrientationInterpolator184 = x3d.OrientationInterpolator(DEF="l_eyebrow_jointRotInterp")
OrientationInterpolator184.key = [0,0.5,1]
OrientationInterpolator184.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator184)
OrientationInterpolator185 = x3d.OrientationInterpolator(DEF="r_eyelid_jointRotInterp")
OrientationInterpolator185.key = [0,0.5,1]
OrientationInterpolator185.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator185)
OrientationInterpolator186 = x3d.OrientationInterpolator(DEF="r_eyeball_jointRotInterp")
OrientationInterpolator186.key = [0,0.5,1]
OrientationInterpolator186.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator186)
OrientationInterpolator187 = x3d.OrientationInterpolator(DEF="r_eyebrow_jointRotInterp")
OrientationInterpolator187.key = [0,0.5,1]
OrientationInterpolator187.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator187)
OrientationInterpolator188 = x3d.OrientationInterpolator(DEF="temporomandibularRotInterp")
OrientationInterpolator188.key = [0,0.5,1]
OrientationInterpolator188.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator188)
OrientationInterpolator189 = x3d.OrientationInterpolator(DEF="l_sternoclavicularRotInterp")
OrientationInterpolator189.key = [0,0.5,1]
OrientationInterpolator189.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator189)
OrientationInterpolator190 = x3d.OrientationInterpolator(DEF="l_acromioclavicularRotInterp")
OrientationInterpolator190.key = [0,0.5,1]
OrientationInterpolator190.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator190)
OrientationInterpolator191 = x3d.OrientationInterpolator(DEF="l_shoulderRotInterp")
OrientationInterpolator191.key = [0,0.4,1]
OrientationInterpolator191.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(-1, 0, 1, 1.75)]

Group140.children.append(OrientationInterpolator191)
OrientationInterpolator192 = x3d.OrientationInterpolator(DEF="l_elbowRotInterp")
OrientationInterpolator192.key = [0,0.5,1]
OrientationInterpolator192.keyValue = [(-1, 0, 0, 3),(-1, 0, 0, 0.75),(-1, -1, 0, 0.5)]

Group140.children.append(OrientationInterpolator192)
OrientationInterpolator193 = x3d.OrientationInterpolator(DEF="l_wristRotInterp")
OrientationInterpolator193.key = [0,0.4,0.8,1]
OrientationInterpolator193.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.3),(0, -0.5, 1, 1.3),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator193)
OrientationInterpolator194 = x3d.OrientationInterpolator(DEF="l_thumb1RotInterp")
OrientationInterpolator194.key = [0,0.5,1]
OrientationInterpolator194.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator194)
OrientationInterpolator195 = x3d.OrientationInterpolator(DEF="l_thumb2RotInterp")
OrientationInterpolator195.key = [0,0.5,1]
OrientationInterpolator195.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator195)
OrientationInterpolator196 = x3d.OrientationInterpolator(DEF="l_thumb3RotInterp")
OrientationInterpolator196.key = [0,0.5,1]
OrientationInterpolator196.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator196)
OrientationInterpolator197 = x3d.OrientationInterpolator(DEF="l_index0RotInterp")
OrientationInterpolator197.key = [0,0.5,1]
OrientationInterpolator197.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator197)
OrientationInterpolator198 = x3d.OrientationInterpolator(DEF="l_index1RotInterp")
OrientationInterpolator198.key = [0,0.5,1]
OrientationInterpolator198.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator198)
OrientationInterpolator199 = x3d.OrientationInterpolator(DEF="l_index2RotInterp")
OrientationInterpolator199.key = [0,0.5,1]
OrientationInterpolator199.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator199)
OrientationInterpolator200 = x3d.OrientationInterpolator(DEF="l_index3RotInterp")
OrientationInterpolator200.key = [0,0.5,1]
OrientationInterpolator200.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator200)
OrientationInterpolator201 = x3d.OrientationInterpolator(DEF="l_middle0RotInterp")
OrientationInterpolator201.key = [0,0.5,1]
OrientationInterpolator201.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator201)
OrientationInterpolator202 = x3d.OrientationInterpolator(DEF="l_middle1RotInterp")
OrientationInterpolator202.key = [0,0.5,1]
OrientationInterpolator202.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator202)
OrientationInterpolator203 = x3d.OrientationInterpolator(DEF="l_middle2RotInterp")
OrientationInterpolator203.key = [0,0.5,1]
OrientationInterpolator203.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator203)
OrientationInterpolator204 = x3d.OrientationInterpolator(DEF="l_middle3RotInterp")
OrientationInterpolator204.key = [0,0.5,1]
OrientationInterpolator204.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator204)
OrientationInterpolator205 = x3d.OrientationInterpolator(DEF="l_ring0RotInterp")
OrientationInterpolator205.key = [0,0.5,1]
OrientationInterpolator205.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator205)
OrientationInterpolator206 = x3d.OrientationInterpolator(DEF="l_ring1RotInterp")
OrientationInterpolator206.key = [0,0.5,1]
OrientationInterpolator206.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator206)
OrientationInterpolator207 = x3d.OrientationInterpolator(DEF="l_ring2RotInterp")
OrientationInterpolator207.key = [0,0.5,1]
OrientationInterpolator207.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator207)
OrientationInterpolator208 = x3d.OrientationInterpolator(DEF="l_ring3RotInterp")
OrientationInterpolator208.key = [0,0.5,1]
OrientationInterpolator208.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator208)
OrientationInterpolator209 = x3d.OrientationInterpolator(DEF="l_pinky0RotInterp")
OrientationInterpolator209.key = [0,0.5,1]
OrientationInterpolator209.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator209)
OrientationInterpolator210 = x3d.OrientationInterpolator(DEF="l_pinky1RotInterp")
OrientationInterpolator210.key = [0,0.5,1]
OrientationInterpolator210.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator210)
OrientationInterpolator211 = x3d.OrientationInterpolator(DEF="l_pinky2RotInterp")
OrientationInterpolator211.key = [0,0.5,1]
OrientationInterpolator211.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator211)
OrientationInterpolator212 = x3d.OrientationInterpolator(DEF="l_pinky3RotInterp")
OrientationInterpolator212.key = [0,0.5,1]
OrientationInterpolator212.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator212)
OrientationInterpolator213 = x3d.OrientationInterpolator(DEF="r_sternoclavicularRotInterp")
OrientationInterpolator213.key = [0,0.5,1]
OrientationInterpolator213.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator213)
OrientationInterpolator214 = x3d.OrientationInterpolator(DEF="r_acromioclavicularRotInterp")
OrientationInterpolator214.key = [0,0.5,1]
OrientationInterpolator214.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator214)
OrientationInterpolator215 = x3d.OrientationInterpolator(DEF="r_shoulderRotInterp")
OrientationInterpolator215.key = [0,0.5,1]
OrientationInterpolator215.keyValue = [(0, 0, -1, 2.5),(0, 0, -1, 1.5),(0, 0, -1, 1.75)]

Group140.children.append(OrientationInterpolator215)
OrientationInterpolator216 = x3d.OrientationInterpolator(DEF="r_elbowRotInterp")
OrientationInterpolator216.key = [0,0.5,1]
OrientationInterpolator216.keyValue = [(-1, 0, 0, 3),(-1, 0, 0, 0.75),(-1, -1, 0, 0.5)]

Group140.children.append(OrientationInterpolator216)
OrientationInterpolator217 = x3d.OrientationInterpolator(DEF="r_wristRotInterp")
OrientationInterpolator217.key = [0,0.5,0.7,1]
OrientationInterpolator217.keyValue = [(0, 1, 0, 0.3),(0, 0, 1, 0),(0, 0, -1, 1),(0, -1, 0, 0.3)]

Group140.children.append(OrientationInterpolator217)
OrientationInterpolator218 = x3d.OrientationInterpolator(DEF="r_thumb1RotInterp")
OrientationInterpolator218.key = [0,0.5,1]
OrientationInterpolator218.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator218)
OrientationInterpolator219 = x3d.OrientationInterpolator(DEF="r_thumb2RotInterp")
OrientationInterpolator219.key = [0,0.5,1]
OrientationInterpolator219.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator219)
OrientationInterpolator220 = x3d.OrientationInterpolator(DEF="r_thumb3RotInterp")
OrientationInterpolator220.key = [0,0.5,1]
OrientationInterpolator220.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator220)
OrientationInterpolator221 = x3d.OrientationInterpolator(DEF="r_index0RotInterp")
OrientationInterpolator221.key = [0,0.5,0.75,1]
OrientationInterpolator221.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator221)
OrientationInterpolator222 = x3d.OrientationInterpolator(DEF="r_index1RotInterp")
OrientationInterpolator222.key = [0,0.5,0.75,1]
OrientationInterpolator222.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator222)
OrientationInterpolator223 = x3d.OrientationInterpolator(DEF="r_index2RotInterp")
OrientationInterpolator223.key = [0,0.5,0.75,1]
OrientationInterpolator223.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator223)
OrientationInterpolator224 = x3d.OrientationInterpolator(DEF="r_index3RotInterp")
OrientationInterpolator224.key = [0,0.5,0.75,1]
OrientationInterpolator224.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator224)
OrientationInterpolator225 = x3d.OrientationInterpolator(DEF="r_middle0RotInterp")
OrientationInterpolator225.key = [0,0.5,0.75,1]
OrientationInterpolator225.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator225)
OrientationInterpolator226 = x3d.OrientationInterpolator(DEF="r_middle1RotInterp")
OrientationInterpolator226.key = [0,0.5,0.75,1]
OrientationInterpolator226.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator226)
OrientationInterpolator227 = x3d.OrientationInterpolator(DEF="r_middle2RotInterp")
OrientationInterpolator227.key = [0,0.5,0.75,1]
OrientationInterpolator227.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator227)
OrientationInterpolator228 = x3d.OrientationInterpolator(DEF="r_middle3RotInterp")
OrientationInterpolator228.key = [0,0.5,0.75,1]
OrientationInterpolator228.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator228)
OrientationInterpolator229 = x3d.OrientationInterpolator(DEF="r_ring0RotInterp")
OrientationInterpolator229.key = [0,0.5,0.75,1]
OrientationInterpolator229.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator229)
OrientationInterpolator230 = x3d.OrientationInterpolator(DEF="r_ring1RotInterp")
OrientationInterpolator230.key = [0,0.5,0.75,1]
OrientationInterpolator230.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator230)
OrientationInterpolator231 = x3d.OrientationInterpolator(DEF="r_ring2RotInterp")
OrientationInterpolator231.key = [0,0.5,0.75,1]
OrientationInterpolator231.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator231)
OrientationInterpolator232 = x3d.OrientationInterpolator(DEF="r_ring3RotInterp")
OrientationInterpolator232.key = [0,0.5,0.75,1]
OrientationInterpolator232.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator232)
OrientationInterpolator233 = x3d.OrientationInterpolator(DEF="r_pinky0RotInterp")
OrientationInterpolator233.key = [0,0.5,0.75,1]
OrientationInterpolator233.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator233)
OrientationInterpolator234 = x3d.OrientationInterpolator(DEF="r_pinky1RotInterp")
OrientationInterpolator234.key = [0,0.5,0.75,1]
OrientationInterpolator234.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator234)
OrientationInterpolator235 = x3d.OrientationInterpolator(DEF="r_pinky2RotInterp")
OrientationInterpolator235.key = [0,0.5,0.75,1]
OrientationInterpolator235.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator235)
OrientationInterpolator236 = x3d.OrientationInterpolator(DEF="r_pinky3RotInterp")
OrientationInterpolator236.key = [0,0.5,0.75,1]
OrientationInterpolator236.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group140.children.append(OrientationInterpolator236)

Scene15.children.append(Group140)
Scene15.children.append(x3d.Comment("""TimeSensor to Interpolators"""))
ROUTE237 = x3d.ROUTE()
ROUTE237.fromField = "fraction_changed"
ROUTE237.fromNode = "KickTimer"
ROUTE237.toField = "set_fraction"
ROUTE237.toNode = "HumanoidRootRotInterp"

Scene15.children.append(ROUTE237)
ROUTE238 = x3d.ROUTE()
ROUTE238.fromField = "fraction_changed"
ROUTE238.fromNode = "KickTimer"
ROUTE238.toField = "set_fraction"
ROUTE238.toNode = "HumanoidRootTransInterp"

Scene15.children.append(ROUTE238)
ROUTE239 = x3d.ROUTE()
ROUTE239.fromField = "fraction_changed"
ROUTE239.fromNode = "KickTimer"
ROUTE239.toField = "set_fraction"
ROUTE239.toNode = "sacroiliacRotInterp"

Scene15.children.append(ROUTE239)
ROUTE240 = x3d.ROUTE()
ROUTE240.fromField = "fraction_changed"
ROUTE240.fromNode = "KickTimer"
ROUTE240.toField = "set_fraction"
ROUTE240.toNode = "l_hipRotInterp"

Scene15.children.append(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.fromField = "fraction_changed"
ROUTE241.fromNode = "KickTimer"
ROUTE241.toField = "set_fraction"
ROUTE241.toNode = "l_kneeRotInterp"

Scene15.children.append(ROUTE241)
ROUTE242 = x3d.ROUTE()
ROUTE242.fromField = "fraction_changed"
ROUTE242.fromNode = "KickTimer"
ROUTE242.toField = "set_fraction"
ROUTE242.toNode = "l_ankleRotInterp"

Scene15.children.append(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.fromField = "fraction_changed"
ROUTE243.fromNode = "KickTimer"
ROUTE243.toField = "set_fraction"
ROUTE243.toNode = "l_subtalarRotInterp"

Scene15.children.append(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.fromField = "fraction_changed"
ROUTE244.fromNode = "KickTimer"
ROUTE244.toField = "set_fraction"
ROUTE244.toNode = "l_midtarsalRotInterp"

Scene15.children.append(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.fromField = "fraction_changed"
ROUTE245.fromNode = "KickTimer"
ROUTE245.toField = "set_fraction"
ROUTE245.toNode = "l_metatarsalRotInterp"

Scene15.children.append(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.fromField = "fraction_changed"
ROUTE246.fromNode = "KickTimer"
ROUTE246.toField = "set_fraction"
ROUTE246.toNode = "r_hipRotInterp"

Scene15.children.append(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.fromField = "fraction_changed"
ROUTE247.fromNode = "KickTimer"
ROUTE247.toField = "set_fraction"
ROUTE247.toNode = "r_kneeRotInterp"

Scene15.children.append(ROUTE247)
ROUTE248 = x3d.ROUTE()
ROUTE248.fromField = "fraction_changed"
ROUTE248.fromNode = "KickTimer"
ROUTE248.toField = "set_fraction"
ROUTE248.toNode = "r_ankleRotInterp"

Scene15.children.append(ROUTE248)
ROUTE249 = x3d.ROUTE()
ROUTE249.fromField = "fraction_changed"
ROUTE249.fromNode = "KickTimer"
ROUTE249.toField = "set_fraction"
ROUTE249.toNode = "r_subtalarRotInterp"

Scene15.children.append(ROUTE249)
ROUTE250 = x3d.ROUTE()
ROUTE250.fromField = "fraction_changed"
ROUTE250.fromNode = "KickTimer"
ROUTE250.toField = "set_fraction"
ROUTE250.toNode = "r_midtarsalRotInterp"

Scene15.children.append(ROUTE250)
ROUTE251 = x3d.ROUTE()
ROUTE251.fromField = "fraction_changed"
ROUTE251.fromNode = "KickTimer"
ROUTE251.toField = "set_fraction"
ROUTE251.toNode = "r_metatarsalRotInterp"

Scene15.children.append(ROUTE251)
ROUTE252 = x3d.ROUTE()
ROUTE252.fromField = "fraction_changed"
ROUTE252.fromNode = "KickTimer"
ROUTE252.toField = "set_fraction"
ROUTE252.toNode = "vl5RotInterp"

Scene15.children.append(ROUTE252)
ROUTE253 = x3d.ROUTE()
ROUTE253.fromField = "fraction_changed"
ROUTE253.fromNode = "KickTimer"
ROUTE253.toField = "set_fraction"
ROUTE253.toNode = "vl4RotInterp"

Scene15.children.append(ROUTE253)
ROUTE254 = x3d.ROUTE()
ROUTE254.fromField = "fraction_changed"
ROUTE254.fromNode = "KickTimer"
ROUTE254.toField = "set_fraction"
ROUTE254.toNode = "vl3RotInterp"

Scene15.children.append(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.fromField = "fraction_changed"
ROUTE255.fromNode = "KickTimer"
ROUTE255.toField = "set_fraction"
ROUTE255.toNode = "vl2RotInterp"

Scene15.children.append(ROUTE255)
ROUTE256 = x3d.ROUTE()
ROUTE256.fromField = "fraction_changed"
ROUTE256.fromNode = "KickTimer"
ROUTE256.toField = "set_fraction"
ROUTE256.toNode = "vl1RotInterp"

Scene15.children.append(ROUTE256)
ROUTE257 = x3d.ROUTE()
ROUTE257.fromField = "fraction_changed"
ROUTE257.fromNode = "KickTimer"
ROUTE257.toField = "set_fraction"
ROUTE257.toNode = "vt12RotInterp"

Scene15.children.append(ROUTE257)
ROUTE258 = x3d.ROUTE()
ROUTE258.fromField = "fraction_changed"
ROUTE258.fromNode = "KickTimer"
ROUTE258.toField = "set_fraction"
ROUTE258.toNode = "vt11RotInterp"

Scene15.children.append(ROUTE258)
ROUTE259 = x3d.ROUTE()
ROUTE259.fromField = "fraction_changed"
ROUTE259.fromNode = "KickTimer"
ROUTE259.toField = "set_fraction"
ROUTE259.toNode = "vt10RotInterp"

Scene15.children.append(ROUTE259)
ROUTE260 = x3d.ROUTE()
ROUTE260.fromField = "fraction_changed"
ROUTE260.fromNode = "KickTimer"
ROUTE260.toField = "set_fraction"
ROUTE260.toNode = "vt9RotInterp"

Scene15.children.append(ROUTE260)
ROUTE261 = x3d.ROUTE()
ROUTE261.fromField = "fraction_changed"
ROUTE261.fromNode = "KickTimer"
ROUTE261.toField = "set_fraction"
ROUTE261.toNode = "vt8RotInterp"

Scene15.children.append(ROUTE261)
ROUTE262 = x3d.ROUTE()
ROUTE262.fromField = "fraction_changed"
ROUTE262.fromNode = "KickTimer"
ROUTE262.toField = "set_fraction"
ROUTE262.toNode = "vt7RotInterp"

Scene15.children.append(ROUTE262)
ROUTE263 = x3d.ROUTE()
ROUTE263.fromField = "fraction_changed"
ROUTE263.fromNode = "KickTimer"
ROUTE263.toField = "set_fraction"
ROUTE263.toNode = "vt6RotInterp"

Scene15.children.append(ROUTE263)
ROUTE264 = x3d.ROUTE()
ROUTE264.fromField = "fraction_changed"
ROUTE264.fromNode = "KickTimer"
ROUTE264.toField = "set_fraction"
ROUTE264.toNode = "vt5RotInterp"

Scene15.children.append(ROUTE264)
ROUTE265 = x3d.ROUTE()
ROUTE265.fromField = "fraction_changed"
ROUTE265.fromNode = "KickTimer"
ROUTE265.toField = "set_fraction"
ROUTE265.toNode = "vt4RotInterp"

Scene15.children.append(ROUTE265)
ROUTE266 = x3d.ROUTE()
ROUTE266.fromField = "fraction_changed"
ROUTE266.fromNode = "KickTimer"
ROUTE266.toField = "set_fraction"
ROUTE266.toNode = "vt3RotInterp"

Scene15.children.append(ROUTE266)
ROUTE267 = x3d.ROUTE()
ROUTE267.fromField = "fraction_changed"
ROUTE267.fromNode = "KickTimer"
ROUTE267.toField = "set_fraction"
ROUTE267.toNode = "vt2RotInterp"

Scene15.children.append(ROUTE267)
ROUTE268 = x3d.ROUTE()
ROUTE268.fromField = "fraction_changed"
ROUTE268.fromNode = "KickTimer"
ROUTE268.toField = "set_fraction"
ROUTE268.toNode = "vt1RotInterp"

Scene15.children.append(ROUTE268)
ROUTE269 = x3d.ROUTE()
ROUTE269.fromField = "fraction_changed"
ROUTE269.fromNode = "KickTimer"
ROUTE269.toField = "set_fraction"
ROUTE269.toNode = "vc7RotInterp"

Scene15.children.append(ROUTE269)
ROUTE270 = x3d.ROUTE()
ROUTE270.fromField = "fraction_changed"
ROUTE270.fromNode = "KickTimer"
ROUTE270.toField = "set_fraction"
ROUTE270.toNode = "vc6RotInterp"

Scene15.children.append(ROUTE270)
ROUTE271 = x3d.ROUTE()
ROUTE271.fromField = "fraction_changed"
ROUTE271.fromNode = "KickTimer"
ROUTE271.toField = "set_fraction"
ROUTE271.toNode = "vc5RotInterp"

Scene15.children.append(ROUTE271)
ROUTE272 = x3d.ROUTE()
ROUTE272.fromField = "fraction_changed"
ROUTE272.fromNode = "KickTimer"
ROUTE272.toField = "set_fraction"
ROUTE272.toNode = "vc4RotInterp"

Scene15.children.append(ROUTE272)
ROUTE273 = x3d.ROUTE()
ROUTE273.fromField = "fraction_changed"
ROUTE273.fromNode = "KickTimer"
ROUTE273.toField = "set_fraction"
ROUTE273.toNode = "vc3RotInterp"

Scene15.children.append(ROUTE273)
ROUTE274 = x3d.ROUTE()
ROUTE274.fromField = "fraction_changed"
ROUTE274.fromNode = "KickTimer"
ROUTE274.toField = "set_fraction"
ROUTE274.toNode = "vc2RotInterp"

Scene15.children.append(ROUTE274)
ROUTE275 = x3d.ROUTE()
ROUTE275.fromField = "fraction_changed"
ROUTE275.fromNode = "KickTimer"
ROUTE275.toField = "set_fraction"
ROUTE275.toNode = "vc1RotInterp"

Scene15.children.append(ROUTE275)
ROUTE276 = x3d.ROUTE()
ROUTE276.fromField = "fraction_changed"
ROUTE276.fromNode = "KickTimer"
ROUTE276.toField = "set_fraction"
ROUTE276.toNode = "skullbaseRotInterp"

Scene15.children.append(ROUTE276)
ROUTE277 = x3d.ROUTE()
ROUTE277.fromField = "fraction_changed"
ROUTE277.fromNode = "KickTimer"
ROUTE277.toField = "set_fraction"
ROUTE277.toNode = "l_eyelid_jointRotInterp"

Scene15.children.append(ROUTE277)
ROUTE278 = x3d.ROUTE()
ROUTE278.fromField = "fraction_changed"
ROUTE278.fromNode = "KickTimer"
ROUTE278.toField = "set_fraction"
ROUTE278.toNode = "l_eyeball_jointRotInterp"

Scene15.children.append(ROUTE278)
ROUTE279 = x3d.ROUTE()
ROUTE279.fromField = "fraction_changed"
ROUTE279.fromNode = "KickTimer"
ROUTE279.toField = "set_fraction"
ROUTE279.toNode = "l_eyebrow_jointRotInterp"

Scene15.children.append(ROUTE279)
ROUTE280 = x3d.ROUTE()
ROUTE280.fromField = "fraction_changed"
ROUTE280.fromNode = "KickTimer"
ROUTE280.toField = "set_fraction"
ROUTE280.toNode = "r_eyelid_jointRotInterp"

Scene15.children.append(ROUTE280)
ROUTE281 = x3d.ROUTE()
ROUTE281.fromField = "fraction_changed"
ROUTE281.fromNode = "KickTimer"
ROUTE281.toField = "set_fraction"
ROUTE281.toNode = "r_eyeball_jointRotInterp"

Scene15.children.append(ROUTE281)
ROUTE282 = x3d.ROUTE()
ROUTE282.fromField = "fraction_changed"
ROUTE282.fromNode = "KickTimer"
ROUTE282.toField = "set_fraction"
ROUTE282.toNode = "r_eyebrow_jointRotInterp"

Scene15.children.append(ROUTE282)
ROUTE283 = x3d.ROUTE()
ROUTE283.fromField = "fraction_changed"
ROUTE283.fromNode = "KickTimer"
ROUTE283.toField = "set_fraction"
ROUTE283.toNode = "temporomandibularRotInterp"

Scene15.children.append(ROUTE283)
ROUTE284 = x3d.ROUTE()
ROUTE284.fromField = "fraction_changed"
ROUTE284.fromNode = "KickTimer"
ROUTE284.toField = "set_fraction"
ROUTE284.toNode = "l_sternoclavicularRotInterp"

Scene15.children.append(ROUTE284)
ROUTE285 = x3d.ROUTE()
ROUTE285.fromField = "fraction_changed"
ROUTE285.fromNode = "KickTimer"
ROUTE285.toField = "set_fraction"
ROUTE285.toNode = "l_acromioclavicularRotInterp"

Scene15.children.append(ROUTE285)
ROUTE286 = x3d.ROUTE()
ROUTE286.fromField = "fraction_changed"
ROUTE286.fromNode = "KickTimer"
ROUTE286.toField = "set_fraction"
ROUTE286.toNode = "l_shoulderRotInterp"

Scene15.children.append(ROUTE286)
ROUTE287 = x3d.ROUTE()
ROUTE287.fromField = "fraction_changed"
ROUTE287.fromNode = "KickTimer"
ROUTE287.toField = "set_fraction"
ROUTE287.toNode = "l_elbowRotInterp"

Scene15.children.append(ROUTE287)
ROUTE288 = x3d.ROUTE()
ROUTE288.fromField = "fraction_changed"
ROUTE288.fromNode = "KickTimer"
ROUTE288.toField = "set_fraction"
ROUTE288.toNode = "l_wristRotInterp"

Scene15.children.append(ROUTE288)
ROUTE289 = x3d.ROUTE()
ROUTE289.fromField = "fraction_changed"
ROUTE289.fromNode = "KickTimer"
ROUTE289.toField = "set_fraction"
ROUTE289.toNode = "l_thumb1RotInterp"

Scene15.children.append(ROUTE289)
ROUTE290 = x3d.ROUTE()
ROUTE290.fromField = "fraction_changed"
ROUTE290.fromNode = "KickTimer"
ROUTE290.toField = "set_fraction"
ROUTE290.toNode = "l_thumb2RotInterp"

Scene15.children.append(ROUTE290)
ROUTE291 = x3d.ROUTE()
ROUTE291.fromField = "fraction_changed"
ROUTE291.fromNode = "KickTimer"
ROUTE291.toField = "set_fraction"
ROUTE291.toNode = "l_thumb3RotInterp"

Scene15.children.append(ROUTE291)
ROUTE292 = x3d.ROUTE()
ROUTE292.fromField = "fraction_changed"
ROUTE292.fromNode = "KickTimer"
ROUTE292.toField = "set_fraction"
ROUTE292.toNode = "l_index0RotInterp"

Scene15.children.append(ROUTE292)
ROUTE293 = x3d.ROUTE()
ROUTE293.fromField = "fraction_changed"
ROUTE293.fromNode = "KickTimer"
ROUTE293.toField = "set_fraction"
ROUTE293.toNode = "l_index1RotInterp"

Scene15.children.append(ROUTE293)
ROUTE294 = x3d.ROUTE()
ROUTE294.fromField = "fraction_changed"
ROUTE294.fromNode = "KickTimer"
ROUTE294.toField = "set_fraction"
ROUTE294.toNode = "l_index2RotInterp"

Scene15.children.append(ROUTE294)
ROUTE295 = x3d.ROUTE()
ROUTE295.fromField = "fraction_changed"
ROUTE295.fromNode = "KickTimer"
ROUTE295.toField = "set_fraction"
ROUTE295.toNode = "l_index3RotInterp"

Scene15.children.append(ROUTE295)
ROUTE296 = x3d.ROUTE()
ROUTE296.fromField = "fraction_changed"
ROUTE296.fromNode = "KickTimer"
ROUTE296.toField = "set_fraction"
ROUTE296.toNode = "l_middle0RotInterp"

Scene15.children.append(ROUTE296)
ROUTE297 = x3d.ROUTE()
ROUTE297.fromField = "fraction_changed"
ROUTE297.fromNode = "KickTimer"
ROUTE297.toField = "set_fraction"
ROUTE297.toNode = "l_middle1RotInterp"

Scene15.children.append(ROUTE297)
ROUTE298 = x3d.ROUTE()
ROUTE298.fromField = "fraction_changed"
ROUTE298.fromNode = "KickTimer"
ROUTE298.toField = "set_fraction"
ROUTE298.toNode = "l_middle2RotInterp"

Scene15.children.append(ROUTE298)
ROUTE299 = x3d.ROUTE()
ROUTE299.fromField = "fraction_changed"
ROUTE299.fromNode = "KickTimer"
ROUTE299.toField = "set_fraction"
ROUTE299.toNode = "l_middle3RotInterp"

Scene15.children.append(ROUTE299)
ROUTE300 = x3d.ROUTE()
ROUTE300.fromField = "fraction_changed"
ROUTE300.fromNode = "KickTimer"
ROUTE300.toField = "set_fraction"
ROUTE300.toNode = "l_ring0RotInterp"

Scene15.children.append(ROUTE300)
ROUTE301 = x3d.ROUTE()
ROUTE301.fromField = "fraction_changed"
ROUTE301.fromNode = "KickTimer"
ROUTE301.toField = "set_fraction"
ROUTE301.toNode = "l_ring1RotInterp"

Scene15.children.append(ROUTE301)
ROUTE302 = x3d.ROUTE()
ROUTE302.fromField = "fraction_changed"
ROUTE302.fromNode = "KickTimer"
ROUTE302.toField = "set_fraction"
ROUTE302.toNode = "l_ring2RotInterp"

Scene15.children.append(ROUTE302)
ROUTE303 = x3d.ROUTE()
ROUTE303.fromField = "fraction_changed"
ROUTE303.fromNode = "KickTimer"
ROUTE303.toField = "set_fraction"
ROUTE303.toNode = "l_ring3RotInterp"

Scene15.children.append(ROUTE303)
ROUTE304 = x3d.ROUTE()
ROUTE304.fromField = "fraction_changed"
ROUTE304.fromNode = "KickTimer"
ROUTE304.toField = "set_fraction"
ROUTE304.toNode = "l_pinky0RotInterp"

Scene15.children.append(ROUTE304)
ROUTE305 = x3d.ROUTE()
ROUTE305.fromField = "fraction_changed"
ROUTE305.fromNode = "KickTimer"
ROUTE305.toField = "set_fraction"
ROUTE305.toNode = "l_pinky1RotInterp"

Scene15.children.append(ROUTE305)
ROUTE306 = x3d.ROUTE()
ROUTE306.fromField = "fraction_changed"
ROUTE306.fromNode = "KickTimer"
ROUTE306.toField = "set_fraction"
ROUTE306.toNode = "l_pinky2RotInterp"

Scene15.children.append(ROUTE306)
ROUTE307 = x3d.ROUTE()
ROUTE307.fromField = "fraction_changed"
ROUTE307.fromNode = "KickTimer"
ROUTE307.toField = "set_fraction"
ROUTE307.toNode = "l_pinky3RotInterp"

Scene15.children.append(ROUTE307)
ROUTE308 = x3d.ROUTE()
ROUTE308.fromField = "fraction_changed"
ROUTE308.fromNode = "KickTimer"
ROUTE308.toField = "set_fraction"
ROUTE308.toNode = "r_sternoclavicularRotInterp"

Scene15.children.append(ROUTE308)
ROUTE309 = x3d.ROUTE()
ROUTE309.fromField = "fraction_changed"
ROUTE309.fromNode = "KickTimer"
ROUTE309.toField = "set_fraction"
ROUTE309.toNode = "r_acromioclavicularRotInterp"

Scene15.children.append(ROUTE309)
ROUTE310 = x3d.ROUTE()
ROUTE310.fromField = "fraction_changed"
ROUTE310.fromNode = "KickTimer"
ROUTE310.toField = "set_fraction"
ROUTE310.toNode = "r_shoulderRotInterp"

Scene15.children.append(ROUTE310)
ROUTE311 = x3d.ROUTE()
ROUTE311.fromField = "fraction_changed"
ROUTE311.fromNode = "KickTimer"
ROUTE311.toField = "set_fraction"
ROUTE311.toNode = "r_elbowRotInterp"

Scene15.children.append(ROUTE311)
ROUTE312 = x3d.ROUTE()
ROUTE312.fromField = "fraction_changed"
ROUTE312.fromNode = "KickTimer"
ROUTE312.toField = "set_fraction"
ROUTE312.toNode = "r_wristRotInterp"

Scene15.children.append(ROUTE312)
ROUTE313 = x3d.ROUTE()
ROUTE313.fromField = "fraction_changed"
ROUTE313.fromNode = "KickTimer"
ROUTE313.toField = "set_fraction"
ROUTE313.toNode = "r_thumb1RotInterp"

Scene15.children.append(ROUTE313)
ROUTE314 = x3d.ROUTE()
ROUTE314.fromField = "fraction_changed"
ROUTE314.fromNode = "KickTimer"
ROUTE314.toField = "set_fraction"
ROUTE314.toNode = "r_thumb2RotInterp"

Scene15.children.append(ROUTE314)
ROUTE315 = x3d.ROUTE()
ROUTE315.fromField = "fraction_changed"
ROUTE315.fromNode = "KickTimer"
ROUTE315.toField = "set_fraction"
ROUTE315.toNode = "r_thumb3RotInterp"

Scene15.children.append(ROUTE315)
ROUTE316 = x3d.ROUTE()
ROUTE316.fromField = "fraction_changed"
ROUTE316.fromNode = "KickTimer"
ROUTE316.toField = "set_fraction"
ROUTE316.toNode = "r_index0RotInterp"

Scene15.children.append(ROUTE316)
ROUTE317 = x3d.ROUTE()
ROUTE317.fromField = "fraction_changed"
ROUTE317.fromNode = "KickTimer"
ROUTE317.toField = "set_fraction"
ROUTE317.toNode = "r_index1RotInterp"

Scene15.children.append(ROUTE317)
ROUTE318 = x3d.ROUTE()
ROUTE318.fromField = "fraction_changed"
ROUTE318.fromNode = "KickTimer"
ROUTE318.toField = "set_fraction"
ROUTE318.toNode = "r_index2RotInterp"

Scene15.children.append(ROUTE318)
ROUTE319 = x3d.ROUTE()
ROUTE319.fromField = "fraction_changed"
ROUTE319.fromNode = "KickTimer"
ROUTE319.toField = "set_fraction"
ROUTE319.toNode = "r_index3RotInterp"

Scene15.children.append(ROUTE319)
ROUTE320 = x3d.ROUTE()
ROUTE320.fromField = "fraction_changed"
ROUTE320.fromNode = "KickTimer"
ROUTE320.toField = "set_fraction"
ROUTE320.toNode = "r_middle0RotInterp"

Scene15.children.append(ROUTE320)
ROUTE321 = x3d.ROUTE()
ROUTE321.fromField = "fraction_changed"
ROUTE321.fromNode = "KickTimer"
ROUTE321.toField = "set_fraction"
ROUTE321.toNode = "r_middle1RotInterp"

Scene15.children.append(ROUTE321)
ROUTE322 = x3d.ROUTE()
ROUTE322.fromField = "fraction_changed"
ROUTE322.fromNode = "KickTimer"
ROUTE322.toField = "set_fraction"
ROUTE322.toNode = "r_middle2RotInterp"

Scene15.children.append(ROUTE322)
ROUTE323 = x3d.ROUTE()
ROUTE323.fromField = "fraction_changed"
ROUTE323.fromNode = "KickTimer"
ROUTE323.toField = "set_fraction"
ROUTE323.toNode = "r_middle3RotInterp"

Scene15.children.append(ROUTE323)
ROUTE324 = x3d.ROUTE()
ROUTE324.fromField = "fraction_changed"
ROUTE324.fromNode = "KickTimer"
ROUTE324.toField = "set_fraction"
ROUTE324.toNode = "r_ring0RotInterp"

Scene15.children.append(ROUTE324)
ROUTE325 = x3d.ROUTE()
ROUTE325.fromField = "fraction_changed"
ROUTE325.fromNode = "KickTimer"
ROUTE325.toField = "set_fraction"
ROUTE325.toNode = "r_ring1RotInterp"

Scene15.children.append(ROUTE325)
ROUTE326 = x3d.ROUTE()
ROUTE326.fromField = "fraction_changed"
ROUTE326.fromNode = "KickTimer"
ROUTE326.toField = "set_fraction"
ROUTE326.toNode = "r_ring2RotInterp"

Scene15.children.append(ROUTE326)
ROUTE327 = x3d.ROUTE()
ROUTE327.fromField = "fraction_changed"
ROUTE327.fromNode = "KickTimer"
ROUTE327.toField = "set_fraction"
ROUTE327.toNode = "r_ring3RotInterp"

Scene15.children.append(ROUTE327)
ROUTE328 = x3d.ROUTE()
ROUTE328.fromField = "fraction_changed"
ROUTE328.fromNode = "KickTimer"
ROUTE328.toField = "set_fraction"
ROUTE328.toNode = "r_pinky0RotInterp"

Scene15.children.append(ROUTE328)
ROUTE329 = x3d.ROUTE()
ROUTE329.fromField = "fraction_changed"
ROUTE329.fromNode = "KickTimer"
ROUTE329.toField = "set_fraction"
ROUTE329.toNode = "r_pinky1RotInterp"

Scene15.children.append(ROUTE329)
ROUTE330 = x3d.ROUTE()
ROUTE330.fromField = "fraction_changed"
ROUTE330.fromNode = "KickTimer"
ROUTE330.toField = "set_fraction"
ROUTE330.toNode = "r_pinky2RotInterp"

Scene15.children.append(ROUTE330)
ROUTE331 = x3d.ROUTE()
ROUTE331.fromField = "fraction_changed"
ROUTE331.fromNode = "KickTimer"
ROUTE331.toField = "set_fraction"
ROUTE331.toNode = "r_pinky3RotInterp"

Scene15.children.append(ROUTE331)
Scene15.children.append(x3d.Comment("""Routes from Interpolators to Joe_ model Joints"""))
ROUTE332 = x3d.ROUTE()
ROUTE332.fromField = "value_changed"
ROUTE332.fromNode = "HumanoidRootRotInterp"
ROUTE332.toField = "set_rotation"
ROUTE332.toNode = "Joe_HumanoidRoot"

Scene15.children.append(ROUTE332)
ROUTE333 = x3d.ROUTE()
ROUTE333.fromField = "value_changed"
ROUTE333.fromNode = "HumanoidRootTransInterp"
ROUTE333.toField = "set_translation"
ROUTE333.toNode = "Joe_HumanoidRoot"

Scene15.children.append(ROUTE333)
ROUTE334 = x3d.ROUTE()
ROUTE334.fromField = "value_changed"
ROUTE334.fromNode = "sacroiliacRotInterp"
ROUTE334.toField = "set_rotation"
ROUTE334.toNode = "Joe_sacroiliac"

Scene15.children.append(ROUTE334)
ROUTE335 = x3d.ROUTE()
ROUTE335.fromField = "value_changed"
ROUTE335.fromNode = "l_hipRotInterp"
ROUTE335.toField = "set_rotation"
ROUTE335.toNode = "Joe_l_hip"

Scene15.children.append(ROUTE335)
ROUTE336 = x3d.ROUTE()
ROUTE336.fromField = "value_changed"
ROUTE336.fromNode = "l_kneeRotInterp"
ROUTE336.toField = "set_rotation"
ROUTE336.toNode = "Joe_l_knee"

Scene15.children.append(ROUTE336)
ROUTE337 = x3d.ROUTE()
ROUTE337.fromField = "value_changed"
ROUTE337.fromNode = "l_ankleRotInterp"
ROUTE337.toField = "set_rotation"
ROUTE337.toNode = "Joe_l_ankle"

Scene15.children.append(ROUTE337)
ROUTE338 = x3d.ROUTE()
ROUTE338.fromField = "value_changed"
ROUTE338.fromNode = "l_subtalarRotInterp"
ROUTE338.toField = "set_rotation"
ROUTE338.toNode = "Joe_l_subtalar"

Scene15.children.append(ROUTE338)
ROUTE339 = x3d.ROUTE()
ROUTE339.fromField = "value_changed"
ROUTE339.fromNode = "l_midtarsalRotInterp"
ROUTE339.toField = "set_rotation"
ROUTE339.toNode = "Joe_l_midtarsal"

Scene15.children.append(ROUTE339)
ROUTE340 = x3d.ROUTE()
ROUTE340.fromField = "value_changed"
ROUTE340.fromNode = "l_metatarsalRotInterp"
ROUTE340.toField = "set_rotation"
ROUTE340.toNode = "Joe_l_metatarsal"

Scene15.children.append(ROUTE340)
ROUTE341 = x3d.ROUTE()
ROUTE341.fromField = "value_changed"
ROUTE341.fromNode = "r_hipRotInterp"
ROUTE341.toField = "set_rotation"
ROUTE341.toNode = "Joe_r_hip"

Scene15.children.append(ROUTE341)
ROUTE342 = x3d.ROUTE()
ROUTE342.fromField = "value_changed"
ROUTE342.fromNode = "r_kneeRotInterp"
ROUTE342.toField = "set_rotation"
ROUTE342.toNode = "Joe_r_knee"

Scene15.children.append(ROUTE342)
ROUTE343 = x3d.ROUTE()
ROUTE343.fromField = "value_changed"
ROUTE343.fromNode = "r_ankleRotInterp"
ROUTE343.toField = "set_rotation"
ROUTE343.toNode = "Joe_r_ankle"

Scene15.children.append(ROUTE343)
ROUTE344 = x3d.ROUTE()
ROUTE344.fromField = "value_changed"
ROUTE344.fromNode = "r_subtalarRotInterp"
ROUTE344.toField = "set_rotation"
ROUTE344.toNode = "Joe_r_subtalar"

Scene15.children.append(ROUTE344)
ROUTE345 = x3d.ROUTE()
ROUTE345.fromField = "value_changed"
ROUTE345.fromNode = "r_midtarsalRotInterp"
ROUTE345.toField = "set_rotation"
ROUTE345.toNode = "Joe_r_midtarsal"

Scene15.children.append(ROUTE345)
ROUTE346 = x3d.ROUTE()
ROUTE346.fromField = "value_changed"
ROUTE346.fromNode = "r_metatarsalRotInterp"
ROUTE346.toField = "set_rotation"
ROUTE346.toNode = "Joe_r_metatarsal"

Scene15.children.append(ROUTE346)
ROUTE347 = x3d.ROUTE()
ROUTE347.fromField = "value_changed"
ROUTE347.fromNode = "vl5RotInterp"
ROUTE347.toField = "set_rotation"
ROUTE347.toNode = "Joe_vl5"

Scene15.children.append(ROUTE347)
ROUTE348 = x3d.ROUTE()
ROUTE348.fromField = "value_changed"
ROUTE348.fromNode = "vl4RotInterp"
ROUTE348.toField = "set_rotation"
ROUTE348.toNode = "Joe_vl4"

Scene15.children.append(ROUTE348)
ROUTE349 = x3d.ROUTE()
ROUTE349.fromField = "value_changed"
ROUTE349.fromNode = "vl3RotInterp"
ROUTE349.toField = "set_rotation"
ROUTE349.toNode = "Joe_vl3"

Scene15.children.append(ROUTE349)
ROUTE350 = x3d.ROUTE()
ROUTE350.fromField = "value_changed"
ROUTE350.fromNode = "vl2RotInterp"
ROUTE350.toField = "set_rotation"
ROUTE350.toNode = "Joe_vl2"

Scene15.children.append(ROUTE350)
ROUTE351 = x3d.ROUTE()
ROUTE351.fromField = "value_changed"
ROUTE351.fromNode = "vl1RotInterp"
ROUTE351.toField = "set_rotation"
ROUTE351.toNode = "Joe_vl1"

Scene15.children.append(ROUTE351)
ROUTE352 = x3d.ROUTE()
ROUTE352.fromField = "value_changed"
ROUTE352.fromNode = "vt12RotInterp"
ROUTE352.toField = "set_rotation"
ROUTE352.toNode = "Joe_vt12"

Scene15.children.append(ROUTE352)
ROUTE353 = x3d.ROUTE()
ROUTE353.fromField = "value_changed"
ROUTE353.fromNode = "vt11RotInterp"
ROUTE353.toField = "set_rotation"
ROUTE353.toNode = "Joe_vt11"

Scene15.children.append(ROUTE353)
ROUTE354 = x3d.ROUTE()
ROUTE354.fromField = "value_changed"
ROUTE354.fromNode = "vt10RotInterp"
ROUTE354.toField = "set_rotation"
ROUTE354.toNode = "Joe_vt10"

Scene15.children.append(ROUTE354)
ROUTE355 = x3d.ROUTE()
ROUTE355.fromField = "value_changed"
ROUTE355.fromNode = "vt9RotInterp"
ROUTE355.toField = "set_rotation"
ROUTE355.toNode = "Joe_vt9"

Scene15.children.append(ROUTE355)
ROUTE356 = x3d.ROUTE()
ROUTE356.fromField = "value_changed"
ROUTE356.fromNode = "vt8RotInterp"
ROUTE356.toField = "set_rotation"
ROUTE356.toNode = "Joe_vt8"

Scene15.children.append(ROUTE356)
ROUTE357 = x3d.ROUTE()
ROUTE357.fromField = "value_changed"
ROUTE357.fromNode = "vt7RotInterp"
ROUTE357.toField = "set_rotation"
ROUTE357.toNode = "Joe_vt7"

Scene15.children.append(ROUTE357)
ROUTE358 = x3d.ROUTE()
ROUTE358.fromField = "value_changed"
ROUTE358.fromNode = "vt6RotInterp"
ROUTE358.toField = "set_rotation"
ROUTE358.toNode = "Joe_vt6"

Scene15.children.append(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.fromField = "value_changed"
ROUTE359.fromNode = "vt5RotInterp"
ROUTE359.toField = "set_rotation"
ROUTE359.toNode = "Joe_vt5"

Scene15.children.append(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.fromField = "value_changed"
ROUTE360.fromNode = "vt4RotInterp"
ROUTE360.toField = "set_rotation"
ROUTE360.toNode = "Joe_vt4"

Scene15.children.append(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.fromField = "value_changed"
ROUTE361.fromNode = "vt3RotInterp"
ROUTE361.toField = "set_rotation"
ROUTE361.toNode = "Joe_vt3"

Scene15.children.append(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.fromField = "value_changed"
ROUTE362.fromNode = "vt2RotInterp"
ROUTE362.toField = "set_rotation"
ROUTE362.toNode = "Joe_vt2"

Scene15.children.append(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.fromField = "value_changed"
ROUTE363.fromNode = "vt1RotInterp"
ROUTE363.toField = "set_rotation"
ROUTE363.toNode = "Joe_vt1"

Scene15.children.append(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.fromField = "value_changed"
ROUTE364.fromNode = "vc7RotInterp"
ROUTE364.toField = "set_rotation"
ROUTE364.toNode = "Joe_vc7"

Scene15.children.append(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.fromField = "value_changed"
ROUTE365.fromNode = "vc6RotInterp"
ROUTE365.toField = "set_rotation"
ROUTE365.toNode = "Joe_vc6"

Scene15.children.append(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromField = "value_changed"
ROUTE366.fromNode = "vc5RotInterp"
ROUTE366.toField = "set_rotation"
ROUTE366.toNode = "Joe_vc5"

Scene15.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromField = "value_changed"
ROUTE367.fromNode = "vc4RotInterp"
ROUTE367.toField = "set_rotation"
ROUTE367.toNode = "Joe_vc4"

Scene15.children.append(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.fromField = "value_changed"
ROUTE368.fromNode = "vc3RotInterp"
ROUTE368.toField = "set_rotation"
ROUTE368.toNode = "Joe_vc3"

Scene15.children.append(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.fromField = "value_changed"
ROUTE369.fromNode = "vc2RotInterp"
ROUTE369.toField = "set_rotation"
ROUTE369.toNode = "Joe_vc2"

Scene15.children.append(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromField = "value_changed"
ROUTE370.fromNode = "vc1RotInterp"
ROUTE370.toField = "set_rotation"
ROUTE370.toNode = "Joe_vc1"

Scene15.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromField = "value_changed"
ROUTE371.fromNode = "skullbaseRotInterp"
ROUTE371.toField = "set_rotation"
ROUTE371.toNode = "Joe_skullbase"

Scene15.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromField = "value_changed"
ROUTE372.fromNode = "l_eyelid_jointRotInterp"
ROUTE372.toField = "set_rotation"
ROUTE372.toNode = "Joe_l_eyelid_joint"

Scene15.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromField = "value_changed"
ROUTE373.fromNode = "l_eyeball_jointRotInterp"
ROUTE373.toField = "set_rotation"
ROUTE373.toNode = "Joe_l_eyeball_joint"

Scene15.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromField = "value_changed"
ROUTE374.fromNode = "l_eyebrow_jointRotInterp"
ROUTE374.toField = "set_rotation"
ROUTE374.toNode = "Joe_l_eyebrow_joint"

Scene15.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromField = "value_changed"
ROUTE375.fromNode = "r_eyelid_jointRotInterp"
ROUTE375.toField = "set_rotation"
ROUTE375.toNode = "Joe_r_eyelid_joint"

Scene15.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromField = "value_changed"
ROUTE376.fromNode = "r_eyeball_jointRotInterp"
ROUTE376.toField = "set_rotation"
ROUTE376.toNode = "Joe_r_eyeball_joint"

Scene15.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromField = "value_changed"
ROUTE377.fromNode = "r_eyebrow_jointRotInterp"
ROUTE377.toField = "set_rotation"
ROUTE377.toNode = "Joe_r_eyebrow_joint"

Scene15.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromField = "value_changed"
ROUTE378.fromNode = "temporomandibularRotInterp"
ROUTE378.toField = "set_rotation"
ROUTE378.toNode = "Joe_temporomandibular"

Scene15.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromField = "value_changed"
ROUTE379.fromNode = "l_sternoclavicularRotInterp"
ROUTE379.toField = "set_rotation"
ROUTE379.toNode = "Joe_l_sternoclavicular"

Scene15.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromField = "value_changed"
ROUTE380.fromNode = "l_acromioclavicularRotInterp"
ROUTE380.toField = "set_rotation"
ROUTE380.toNode = "Joe_l_acromioclavicular"

Scene15.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromField = "value_changed"
ROUTE381.fromNode = "l_shoulderRotInterp"
ROUTE381.toField = "set_rotation"
ROUTE381.toNode = "Joe_l_shoulder"

Scene15.children.append(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.fromField = "value_changed"
ROUTE382.fromNode = "l_elbowRotInterp"
ROUTE382.toField = "set_rotation"
ROUTE382.toNode = "Joe_l_elbow"

Scene15.children.append(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.fromField = "value_changed"
ROUTE383.fromNode = "l_wristRotInterp"
ROUTE383.toField = "set_rotation"
ROUTE383.toNode = "Joe_l_wrist"

Scene15.children.append(ROUTE383)
ROUTE384 = x3d.ROUTE()
ROUTE384.fromField = "value_changed"
ROUTE384.fromNode = "l_thumb1RotInterp"
ROUTE384.toField = "set_rotation"
ROUTE384.toNode = "Joe_l_thumb1"

Scene15.children.append(ROUTE384)
ROUTE385 = x3d.ROUTE()
ROUTE385.fromField = "value_changed"
ROUTE385.fromNode = "l_thumb2RotInterp"
ROUTE385.toField = "set_rotation"
ROUTE385.toNode = "Joe_l_thumb2"

Scene15.children.append(ROUTE385)
ROUTE386 = x3d.ROUTE()
ROUTE386.fromField = "value_changed"
ROUTE386.fromNode = "l_thumb3RotInterp"
ROUTE386.toField = "set_rotation"
ROUTE386.toNode = "Joe_l_thumb3"

Scene15.children.append(ROUTE386)
ROUTE387 = x3d.ROUTE()
ROUTE387.fromField = "value_changed"
ROUTE387.fromNode = "l_index0RotInterp"
ROUTE387.toField = "set_rotation"
ROUTE387.toNode = "Joe_l_index0"

Scene15.children.append(ROUTE387)
ROUTE388 = x3d.ROUTE()
ROUTE388.fromField = "value_changed"
ROUTE388.fromNode = "l_index1RotInterp"
ROUTE388.toField = "set_rotation"
ROUTE388.toNode = "Joe_l_index1"

Scene15.children.append(ROUTE388)
ROUTE389 = x3d.ROUTE()
ROUTE389.fromField = "value_changed"
ROUTE389.fromNode = "l_index2RotInterp"
ROUTE389.toField = "set_rotation"
ROUTE389.toNode = "Joe_l_index2"

Scene15.children.append(ROUTE389)
ROUTE390 = x3d.ROUTE()
ROUTE390.fromField = "value_changed"
ROUTE390.fromNode = "l_index3RotInterp"
ROUTE390.toField = "set_rotation"
ROUTE390.toNode = "Joe_l_index3"

Scene15.children.append(ROUTE390)
ROUTE391 = x3d.ROUTE()
ROUTE391.fromField = "value_changed"
ROUTE391.fromNode = "l_middle0RotInterp"
ROUTE391.toField = "set_rotation"
ROUTE391.toNode = "Joe_l_middle0"

Scene15.children.append(ROUTE391)
ROUTE392 = x3d.ROUTE()
ROUTE392.fromField = "value_changed"
ROUTE392.fromNode = "l_middle1RotInterp"
ROUTE392.toField = "set_rotation"
ROUTE392.toNode = "Joe_l_middle1"

Scene15.children.append(ROUTE392)
ROUTE393 = x3d.ROUTE()
ROUTE393.fromField = "value_changed"
ROUTE393.fromNode = "l_middle2RotInterp"
ROUTE393.toField = "set_rotation"
ROUTE393.toNode = "Joe_l_middle2"

Scene15.children.append(ROUTE393)
ROUTE394 = x3d.ROUTE()
ROUTE394.fromField = "value_changed"
ROUTE394.fromNode = "l_middle3RotInterp"
ROUTE394.toField = "set_rotation"
ROUTE394.toNode = "Joe_l_middle3"

Scene15.children.append(ROUTE394)
ROUTE395 = x3d.ROUTE()
ROUTE395.fromField = "value_changed"
ROUTE395.fromNode = "l_ring0RotInterp"
ROUTE395.toField = "set_rotation"
ROUTE395.toNode = "Joe_l_ring0"

Scene15.children.append(ROUTE395)
ROUTE396 = x3d.ROUTE()
ROUTE396.fromField = "value_changed"
ROUTE396.fromNode = "l_ring1RotInterp"
ROUTE396.toField = "set_rotation"
ROUTE396.toNode = "Joe_l_ring1"

Scene15.children.append(ROUTE396)
ROUTE397 = x3d.ROUTE()
ROUTE397.fromField = "value_changed"
ROUTE397.fromNode = "l_ring2RotInterp"
ROUTE397.toField = "set_rotation"
ROUTE397.toNode = "Joe_l_ring2"

Scene15.children.append(ROUTE397)
ROUTE398 = x3d.ROUTE()
ROUTE398.fromField = "value_changed"
ROUTE398.fromNode = "l_ring3RotInterp"
ROUTE398.toField = "set_rotation"
ROUTE398.toNode = "Joe_l_ring3"

Scene15.children.append(ROUTE398)
ROUTE399 = x3d.ROUTE()
ROUTE399.fromField = "value_changed"
ROUTE399.fromNode = "l_pinky0RotInterp"
ROUTE399.toField = "set_rotation"
ROUTE399.toNode = "Joe_l_pinky0"

Scene15.children.append(ROUTE399)
ROUTE400 = x3d.ROUTE()
ROUTE400.fromField = "value_changed"
ROUTE400.fromNode = "l_pinky1RotInterp"
ROUTE400.toField = "set_rotation"
ROUTE400.toNode = "Joe_l_pinky1"

Scene15.children.append(ROUTE400)
ROUTE401 = x3d.ROUTE()
ROUTE401.fromField = "value_changed"
ROUTE401.fromNode = "l_pinky2RotInterp"
ROUTE401.toField = "set_rotation"
ROUTE401.toNode = "Joe_l_pinky2"

Scene15.children.append(ROUTE401)
ROUTE402 = x3d.ROUTE()
ROUTE402.fromField = "value_changed"
ROUTE402.fromNode = "l_pinky3RotInterp"
ROUTE402.toField = "set_rotation"
ROUTE402.toNode = "Joe_l_pinky3"

Scene15.children.append(ROUTE402)
ROUTE403 = x3d.ROUTE()
ROUTE403.fromField = "value_changed"
ROUTE403.fromNode = "r_sternoclavicularRotInterp"
ROUTE403.toField = "set_rotation"
ROUTE403.toNode = "Joe_r_sternoclavicular"

Scene15.children.append(ROUTE403)
ROUTE404 = x3d.ROUTE()
ROUTE404.fromField = "value_changed"
ROUTE404.fromNode = "r_acromioclavicularRotInterp"
ROUTE404.toField = "set_rotation"
ROUTE404.toNode = "Joe_r_acromioclavicular"

Scene15.children.append(ROUTE404)
ROUTE405 = x3d.ROUTE()
ROUTE405.fromField = "value_changed"
ROUTE405.fromNode = "r_shoulderRotInterp"
ROUTE405.toField = "set_rotation"
ROUTE405.toNode = "Joe_r_shoulder"

Scene15.children.append(ROUTE405)
ROUTE406 = x3d.ROUTE()
ROUTE406.fromField = "value_changed"
ROUTE406.fromNode = "r_elbowRotInterp"
ROUTE406.toField = "set_rotation"
ROUTE406.toNode = "Joe_r_elbow"

Scene15.children.append(ROUTE406)
ROUTE407 = x3d.ROUTE()
ROUTE407.fromField = "value_changed"
ROUTE407.fromNode = "r_wristRotInterp"
ROUTE407.toField = "set_rotation"
ROUTE407.toNode = "Joe_r_wrist"

Scene15.children.append(ROUTE407)
ROUTE408 = x3d.ROUTE()
ROUTE408.fromField = "value_changed"
ROUTE408.fromNode = "r_thumb1RotInterp"
ROUTE408.toField = "set_rotation"
ROUTE408.toNode = "Joe_r_thumb1"

Scene15.children.append(ROUTE408)
ROUTE409 = x3d.ROUTE()
ROUTE409.fromField = "value_changed"
ROUTE409.fromNode = "r_thumb2RotInterp"
ROUTE409.toField = "set_rotation"
ROUTE409.toNode = "Joe_r_thumb2"

Scene15.children.append(ROUTE409)
ROUTE410 = x3d.ROUTE()
ROUTE410.fromField = "value_changed"
ROUTE410.fromNode = "r_thumb3RotInterp"
ROUTE410.toField = "set_rotation"
ROUTE410.toNode = "Joe_r_thumb3"

Scene15.children.append(ROUTE410)
ROUTE411 = x3d.ROUTE()
ROUTE411.fromField = "value_changed"
ROUTE411.fromNode = "r_index0RotInterp"
ROUTE411.toField = "set_rotation"
ROUTE411.toNode = "Joe_r_index0"

Scene15.children.append(ROUTE411)
ROUTE412 = x3d.ROUTE()
ROUTE412.fromField = "value_changed"
ROUTE412.fromNode = "r_index1RotInterp"
ROUTE412.toField = "set_rotation"
ROUTE412.toNode = "Joe_r_index1"

Scene15.children.append(ROUTE412)
ROUTE413 = x3d.ROUTE()
ROUTE413.fromField = "value_changed"
ROUTE413.fromNode = "r_index2RotInterp"
ROUTE413.toField = "set_rotation"
ROUTE413.toNode = "Joe_r_index2"

Scene15.children.append(ROUTE413)
ROUTE414 = x3d.ROUTE()
ROUTE414.fromField = "value_changed"
ROUTE414.fromNode = "r_index3RotInterp"
ROUTE414.toField = "set_rotation"
ROUTE414.toNode = "Joe_r_index3"

Scene15.children.append(ROUTE414)
ROUTE415 = x3d.ROUTE()
ROUTE415.fromField = "value_changed"
ROUTE415.fromNode = "r_middle0RotInterp"
ROUTE415.toField = "set_rotation"
ROUTE415.toNode = "Joe_r_middle0"

Scene15.children.append(ROUTE415)
ROUTE416 = x3d.ROUTE()
ROUTE416.fromField = "value_changed"
ROUTE416.fromNode = "r_middle1RotInterp"
ROUTE416.toField = "set_rotation"
ROUTE416.toNode = "Joe_r_middle1"

Scene15.children.append(ROUTE416)
ROUTE417 = x3d.ROUTE()
ROUTE417.fromField = "value_changed"
ROUTE417.fromNode = "r_middle2RotInterp"
ROUTE417.toField = "set_rotation"
ROUTE417.toNode = "Joe_r_middle2"

Scene15.children.append(ROUTE417)
ROUTE418 = x3d.ROUTE()
ROUTE418.fromField = "value_changed"
ROUTE418.fromNode = "r_middle3RotInterp"
ROUTE418.toField = "set_rotation"
ROUTE418.toNode = "Joe_r_middle3"

Scene15.children.append(ROUTE418)
ROUTE419 = x3d.ROUTE()
ROUTE419.fromField = "value_changed"
ROUTE419.fromNode = "r_ring0RotInterp"
ROUTE419.toField = "set_rotation"
ROUTE419.toNode = "Joe_r_ring0"

Scene15.children.append(ROUTE419)
ROUTE420 = x3d.ROUTE()
ROUTE420.fromField = "value_changed"
ROUTE420.fromNode = "r_ring1RotInterp"
ROUTE420.toField = "set_rotation"
ROUTE420.toNode = "Joe_r_ring1"

Scene15.children.append(ROUTE420)
ROUTE421 = x3d.ROUTE()
ROUTE421.fromField = "value_changed"
ROUTE421.fromNode = "r_ring2RotInterp"
ROUTE421.toField = "set_rotation"
ROUTE421.toNode = "Joe_r_ring2"

Scene15.children.append(ROUTE421)
ROUTE422 = x3d.ROUTE()
ROUTE422.fromField = "value_changed"
ROUTE422.fromNode = "r_ring3RotInterp"
ROUTE422.toField = "set_rotation"
ROUTE422.toNode = "Joe_r_ring3"

Scene15.children.append(ROUTE422)
ROUTE423 = x3d.ROUTE()
ROUTE423.fromField = "value_changed"
ROUTE423.fromNode = "r_pinky0RotInterp"
ROUTE423.toField = "set_rotation"
ROUTE423.toNode = "Joe_r_pinky0"

Scene15.children.append(ROUTE423)
ROUTE424 = x3d.ROUTE()
ROUTE424.fromField = "value_changed"
ROUTE424.fromNode = "r_pinky1RotInterp"
ROUTE424.toField = "set_rotation"
ROUTE424.toNode = "Joe_r_pinky1"

Scene15.children.append(ROUTE424)
ROUTE425 = x3d.ROUTE()
ROUTE425.fromField = "value_changed"
ROUTE425.fromNode = "r_pinky2RotInterp"
ROUTE425.toField = "set_rotation"
ROUTE425.toNode = "Joe_r_pinky2"

Scene15.children.append(ROUTE425)
ROUTE426 = x3d.ROUTE()
ROUTE426.fromField = "value_changed"
ROUTE426.fromNode = "r_pinky3RotInterp"
ROUTE426.toField = "set_rotation"
ROUTE426.toNode = "Joe_r_pinky3"

Scene15.children.append(ROUTE426)
Group427 = x3d.Group(DEF="DisplacersAnimationGroup")
Group427.children.append(x3d.Comment("""TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor"""))
ScalarInterpolator428 = x3d.ScalarInterpolator(DEF="skull_tipTest")
ScalarInterpolator428.key = [0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]
ScalarInterpolator428.keyValue = [0,0,0,0,0.2,0.4,1,0,1,0.4,0]

Group427.children.append(ScalarInterpolator428)
ROUTE429 = x3d.ROUTE()
ROUTE429.fromField = "fraction_changed"
ROUTE429.fromNode = "KickTimer"
ROUTE429.toField = "set_fraction"
ROUTE429.toNode = "skull_tipTest"

Group427.children.append(ROUTE429)
ROUTE430 = x3d.ROUTE()
ROUTE430.fromField = "value_changed"
ROUTE430.fromNode = "skull_tipTest"
ROUTE430.toField = "weight"
ROUTE430.toNode = "Joe_skull_tipTest"

Group427.children.append(ROUTE430)

Scene15.children.append(Group427)
Group431 = x3d.Group(DEF="skintexturetransform_animation")
ScalarInterpolator432 = x3d.ScalarInterpolator(DEF="skinTexTransTest")
ScalarInterpolator432.key = [0,0.2,0.4,0.5,0.6,0.7,0.8,1]
ScalarInterpolator432.keyValue = [0,0,0,0,0,1,2,0]

Group431.children.append(ScalarInterpolator432)
ROUTE433 = x3d.ROUTE()
ROUTE433.fromField = "fraction_changed"
ROUTE433.fromNode = "KickTimer"
ROUTE433.toField = "set_fraction"
ROUTE433.toNode = "skinTexTransTest"

Group431.children.append(ROUTE433)
ROUTE434 = x3d.ROUTE()
ROUTE434.fromField = "value_changed"
ROUTE434.fromNode = "skinTexTransTest"
ROUTE434.toField = "rotation"
ROUTE434.toNode = "kicktextrans"

Group431.children.append(ROUTE434)

Scene15.children.append(Group431)
Group435 = x3d.Group()
Transform436 = x3d.Transform(DEF="SBall")
Transform436.rotation = [0.7,0,0.7,0.1]
Transform436.scale = [0.23,0.23,0.23]
Transform436.translation = [-0.916,0.37,-0.92]
Shape437 = x3d.Shape(DEF="ball_Shape")
Appearance438 = x3d.Appearance(DEF="ball_Appearance")
Material439 = x3d.Material(DEF="ball_Material")
Material439.diffuseColor = [0.3,0.3,1]
Material439.emissiveColor = [0.3,0.3,0.33]

Appearance438.material = Material439
ImageTexture440 = x3d.ImageTexture(USE="JoeSkinImageTexture")

Appearance438.texture = ImageTexture440

Shape437.appearance = Appearance438
IndexedFaceSet441 = x3d.IndexedFaceSet(DEF="ball_IndexedFaceSet")
IndexedFaceSet441.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate442 = x3d.Coordinate(DEF="Ball_Coordinates")
Coordinate442.point = [(0, 0.4675, 0),(0, 0.4049, -0.2338),(-0.1169, 0.4049, -0.2024),(-0.2024, 0.4049, -0.1169),(-0.2338, 0.4049, 0),(-0.2024, 0.4049, 0.1169),(-0.1169, 0.4049, 0.2024),(0, 0.4049, 0.2338),(0.1169, 0.4049, 0.2024),(0.2024, 0.4049, 0.1169),(0.2338, 0.4049, 0),(0.2024, 0.4049, -0.1169),(0.1169, 0.4049, -0.2024),(0, 0.2338, -0.4049),(-0.2024, 0.2338, -0.3506),(-0.3506, 0.2338, -0.2024),(-0.4049, 0.2338, 0),(-0.3506, 0.2338, 0.2024),(-0.2024, 0.2338, 0.3506),(0, 0.2338, 0.4049),(0.2024, 0.2338, 0.3506),(0.3506, 0.2338, 0.2024),(0.4049, 0.2338, 0),(0.3506, 0.2338, -0.2024),(0.2024, 0.2338, -0.3506),(0, 0, -0.4675),(-0.2338, 0, -0.4049),(-0.4049, 0, -0.2338),(-0.4675, 0, 0),(-0.4049, 0, 0.2338),(-0.2338, 0, 0.4049),(0, 0, 0.4675),(0.2338, 0, 0.4049),(0.4049, 0, 0.2338),(0.4675, 0, 0),(0.4049, 0, -0.2338),(0.2338, 0, -0.4049),(0, -0.2338, -0.4049),(-0.2024, -0.2338, -0.3506),(-0.3506, -0.2338, -0.2024),(-0.4049, -0.2338, 0),(-0.3506, -0.2338, 0.2024),(-0.2024, -0.2338, 0.3506),(0, -0.2338, 0.4049),(0.2024, -0.2338, 0.3506),(0.3506, -0.2338, 0.2024),(0.4049, -0.2338, 0),(0.3506, -0.2338, -0.2024),(0.2024, -0.2338, -0.3506),(0, -0.4049, -0.2338),(-0.1169, -0.4049, -0.2024),(-0.2024, -0.4049, -0.1169),(-0.2338, -0.4049, 0),(-0.2024, -0.4049, 0.1169),(-0.1169, -0.4049, 0.2024),(0, -0.4049, 0.2338),(0.1169, -0.4049, 0.2024),(0.2024, -0.4049, 0.1169),(0.2338, -0.4049, 0),(0.2024, -0.4049, -0.1169),(0.1169, -0.4049, -0.2024),(0, -0.4675, 0)]

IndexedFaceSet441.coord = Coordinate442

Shape437.geometry = IndexedFaceSet441

Transform436.children.append(Shape437)
Viewpoint443 = x3d.Viewpoint(DEF="ballView_1")
Viewpoint443.description = "Ball View"

Transform436.children.append(Viewpoint443)

Group435.children.append(Transform436)
Group435.children.append(x3d.Comment("""Ball Animation interpolators"""))
PositionInterpolator444 = x3d.PositionInterpolator(DEF="ballTransInterp")
PositionInterpolator444.key = [0,0.4,0.409,1]
PositionInterpolator444.keyValue = [(-1, 0.4, -1),(0, 0.07, 0),(0.05, 0.06, 0.05),(2, 4, 10)]

Group435.children.append(PositionInterpolator444)
OrientationInterpolator445 = x3d.OrientationInterpolator(DEF="ballRotInterp")
OrientationInterpolator445.key = [0,0.4,0.41,0.71,1]
OrientationInterpolator445.keyValue = [(1, 0, 1, 0.25),(-1, 0, -1, 1.35),(-1, 1, -1, 3.35),(-1, 0.2, -1, 3),(-1, 0.2, -1, 3)]

Group435.children.append(OrientationInterpolator445)
Group435.children.append(x3d.Comment("""Ball Animation Routes"""))
ROUTE446 = x3d.ROUTE()
ROUTE446.fromField = "fraction_changed"
ROUTE446.fromNode = "KickTimer"
ROUTE446.toField = "set_fraction"
ROUTE446.toNode = "ballTransInterp"

Group435.children.append(ROUTE446)
ROUTE447 = x3d.ROUTE()
ROUTE447.fromField = "value_changed"
ROUTE447.fromNode = "ballTransInterp"
ROUTE447.toField = "set_translation"
ROUTE447.toNode = "SBall"

Group435.children.append(ROUTE447)
ROUTE448 = x3d.ROUTE()
ROUTE448.fromField = "fraction_changed"
ROUTE448.fromNode = "KickTimer"
ROUTE448.toField = "set_fraction"
ROUTE448.toNode = "ballRotInterp"

Group435.children.append(ROUTE448)
ROUTE449 = x3d.ROUTE()
ROUTE449.fromField = "value_changed"
ROUTE449.fromNode = "ballRotInterp"
ROUTE449.toField = "set_rotation"
ROUTE449.toNode = "SBall"

Group435.children.append(ROUTE449)

Scene15.children.append(Group435)
Group450 = x3d.Group()
Transform451 = x3d.Transform()
Transform451.scale = [0.2,0.2,0.2]
Shape452 = x3d.Shape(USE="AxisLinesShape")

Transform451.children.append(Shape452)

Group450.children.append(Transform451)
Transform453 = x3d.Transform(DEF="Circle0")
Transform453.scale = [1.175,1,1.175]
Shape454 = x3d.Shape(DEF="circle_Shape")
Appearance455 = x3d.Appearance(DEF="circle0_Appearance")
Material456 = x3d.Material(DEF="circle0_Material")
Material456.ambientIntensity = 0.9
Material456.diffuseColor = [0.9,0,0.7]
Material456.emissiveColor = [0.425,0.486,1]

Appearance455.material = Material456

Shape454.appearance = Appearance455
IndexedLineSet457 = x3d.IndexedLineSet(DEF="Orbit1")
IndexedLineSet457.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate458 = x3d.Coordinate(DEF="circle_Coordinates")
Coordinate458.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.994522),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet457.coord = Coordinate458

Shape454.geometry = IndexedLineSet457

Transform453.children.append(Shape454)

Group450.children.append(Transform453)
Transform459 = x3d.Transform(DEF="Circle1")
Transform459.scale = [0.5,1,0.5]
Shape460 = x3d.Shape(DEF="circle1_Shape")
Appearance461 = x3d.Appearance(DEF="circle1_Appearance")
Material462 = x3d.Material(DEF="circle1_Material")
Material462.diffuseColor = [0.9,0,0.7]
Material462.emissiveColor = [0.424956,0.483976,1]

Appearance461.material = Material462

Shape460.appearance = Appearance461
IndexedLineSet463 = x3d.IndexedLineSet(USE="Orbit1")

Shape460.geometry = IndexedLineSet463

Transform459.children.append(Shape460)

Group450.children.append(Transform459)
Transform464 = x3d.Transform(DEF="Circle2")
Transform464.scale = [0.25,1,0.25]
Shape465 = x3d.Shape(DEF="circle2_Shape")
Appearance466 = x3d.Appearance(DEF="circle2_Appearance")
Material467 = x3d.Material(DEF="circle2_Material")
Material467.diffuseColor = [0.9,0,0.7]
Material467.emissiveColor = [0.424956,0.483976,1]

Appearance466.material = Material467

Shape465.appearance = Appearance466
IndexedLineSet468 = x3d.IndexedLineSet(USE="Orbit1")

Shape465.geometry = IndexedLineSet468

Transform464.children.append(Shape465)

Group450.children.append(Transform464)

Scene15.children.append(Group450)

X3D0.Scene = Scene15
f = open("../data/JoeSkinTexcoordDisplacerKickUpdate2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeSkinTexcoordDisplacerKickUpdate2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeSkinTexcoordDisplacerKickUpdate2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

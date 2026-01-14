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
meta3.content = "JoeKick.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe D. Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "9 January 2004"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "12 January 2017"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 15 Sep 2025 05:20:39 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "translator"
meta10.content = "Roy Walmsley"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "translator"
meta11.content = "Don Brutzman"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "translator"
meta12.content = "John Carlson"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "../Characters/JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"
WorldInfo17.info = ["X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]

Scene16.children.append(WorldInfo17)
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.DEF = "Start_NavigationInfo"
NavigationInfo18.speed = 2.5

Scene16.children.append(NavigationInfo18)
Background19 = x3d.Background()
Background19.DEF = "blue_Background"

Scene16.children.append(Background19)
SpotLight20 = x3d.SpotLight()
SpotLight20.DEF = "light1"
SpotLight20.color = [0.8,0.8,1]
SpotLight20.ambientIntensity = 0.7
SpotLight20.location = [0,3,3]
SpotLight20.direction = [0,0,0]
SpotLight20.radius = 10
SpotLight20.beamWidth = 1.5
SpotLight20.cutOffAngle = 0.6

Scene16.children.append(SpotLight20)
PointLight21 = x3d.PointLight()
PointLight21.DEF = "light2"
PointLight21.color = [0.8,0.8,1]
PointLight21.ambientIntensity = 0.7
PointLight21.location = [0,10,-7]

Scene16.children.append(PointLight21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.DEF = "Scene_InclinedView"
Viewpoint22.description = "Scene_Inclined View"
Viewpoint22.position = [1.62,1.05,3.06]
Viewpoint22.orientation = [-0.113,0.993,0.0347,0.671]
Viewpoint22.centerOfRotation = [0,0.85,0]

Scene16.children.append(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.DEF = "Scene_IFrontView"
Viewpoint23.description = "Scene_Front View"
Viewpoint23.position = [0,0.8,2.58]
Viewpoint23.centerOfRotation = [0,0.8,0]

Scene16.children.append(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.DEF = "Scene_ISideView"
Viewpoint24.description = "Scene_Side View"
Viewpoint24.position = [2.6,0.8,0]
Viewpoint24.orientation = [0,1,0,1.5708]
Viewpoint24.centerOfRotation = [0,0.8,0]

Scene16.children.append(Viewpoint24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.DEF = "Scene_BackView"
Viewpoint25.description = "Scene_Back View"
Viewpoint25.position = [0,1.5,-3]
Viewpoint25.orientation = [0,1,0,3.14]
Viewpoint25.centerOfRotation = [0,1.5,0]

Scene16.children.append(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.DEF = "Scene_TopView"
Viewpoint26.description = "Scene_Top View"
Viewpoint26.position = [0,3.5,0]
Viewpoint26.orientation = [1,0,0,-1.5708]
Viewpoint26.centerOfRotation = [0,1.5,0]

Scene16.children.append(Viewpoint26)
Group27 = x3d.Group()
Group27.DEF = "Joe_Humanoid"
HAnimHumanoid28 = x3d.HAnimHumanoid()
HAnimHumanoid28.DEF = "Joe_Kick"
HAnimHumanoid28.name = "Kick"
HAnimHumanoid28.loa = 4
MetadataSet29 = x3d.MetadataSet()
MetadataSet29.name = "warnings"
MetadataSet29.reference = "HAnim"
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "SymmetricalLeftRight"
MetadataString30.reference = "correction options: ignore, warn, average, left, right, largest, smallest"
MetadataString30.value = ["ignore"]

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString30)

HAnimHumanoid28.metadata = MetadataSet29
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.DEF = "Joe_humanoid_root"
HAnimJoint31.name = "humanoid_root"
HAnimJoint31.translation = [-0.1962198,0.1405496,0.1216488]
HAnimJoint31.rotation = [-0.999999999999999,0,0,0.5]
HAnimJoint31.center = [0,0.875,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.DEF = "Joe_sacrum"
HAnimSegment32.name = "sacrum"
HAnimSite33 = x3d.HAnimSite()
HAnimSite33.DEF = "Joe_RootFront_view"
HAnimSite33.name = "RootFront_view"
Transform34 = x3d.Transform()
Transform34.DEF = "hanimcordsys"
Transform34.scale = [0.175,0.175,0.175]
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.DEF = "ViewBodyRootAxes"
Viewpoint35.description = "Joe_HAnim Root HAnimSite Coordinate Axes View"

Transform34.children.append(Viewpoint35)
Shape36 = x3d.Shape()
Shape36.DEF = "AxisLinesShape"
IndexedLineSet37 = x3d.IndexedLineSet()
IndexedLineSet37.colorPerVertex = False
IndexedLineSet37.colorIndex = [0,1,2]
IndexedLineSet37.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color38 = x3d.Color()
Color38.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet37.color = Color38
Coordinate39 = x3d.Coordinate()
Coordinate39.point = [(0, 0, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1)]

IndexedLineSet37.coord = Coordinate39

Shape36.geometry = IndexedLineSet37

Transform34.children.append(Shape36)

HAnimSite33.children.append(Transform34)

HAnimSegment32.children.append(HAnimSite33)

HAnimJoint31.children.append(HAnimSegment32)
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.DEF = "Joe_sacroiliac"
HAnimJoint40.name = "sacroiliac"
HAnimJoint40.center = [0,0.92,0]
HAnimJoint40.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint40.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.DEF = "Joe_l_hip"
HAnimJoint41.name = "l_hip"
HAnimJoint41.rotation = [1,0,0,0.931269831413142]
HAnimJoint41.center = [0.1,0.92,0]
HAnimJoint41.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint41.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.DEF = "Joe_l_knee"
HAnimJoint42.name = "l_knee"
HAnimJoint42.rotation = [0.998863602232125,0,0.0476602993681761,1.24505714055853]
HAnimJoint42.center = [0.115,0.466,0]
HAnimJoint42.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint42.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.DEF = "Joe_l_talocrural"
HAnimJoint43.name = "l_talocrural"
HAnimJoint43.rotation = [1,0,0,0.899195750554403]
HAnimJoint43.center = [0.115,0.069,0]
HAnimJoint43.skinCoordIndex = [342,343,344,345]
HAnimJoint43.skinCoordWeight = [1,1,1,1]
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.DEF = "Joe_l_tarsometatarsal_2"
HAnimJoint44.name = "l_tarsometatarsal_2"
HAnimJoint44.center = [0.115,0.031,0.03]
HAnimJoint44.skinCoordIndex = [346,347,348,71]
HAnimJoint44.skinCoordWeight = [1,1,1,1]
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.DEF = "Joe_l_metatarsophalangeal_2"
HAnimJoint45.name = "l_metatarsophalangeal_2"
HAnimJoint45.center = [0.115,0.037,0.09]
HAnimJoint45.skinCoordIndex = [349,350,351,352]
HAnimJoint45.skinCoordWeight = [1,1,1,1]
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.DEF = "Joe_l_tarsal_distal_interphalangeal_2"
HAnimJoint46.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint46.center = [0.115,0.02,0.122]
HAnimJoint46.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint46.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint45.children.append(HAnimJoint46)

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint40.children.append(HAnimJoint41)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.DEF = "Joe_r_hip"
HAnimJoint47.name = "r_hip"
HAnimJoint47.rotation = [-1,0,0,1]
HAnimJoint47.center = [-0.1,0.92,0]
HAnimJoint47.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint47.skinCoordWeight = [0.65,1,0.8,1,1,1,0.4,0.8]
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.DEF = "Joe_r_knee"
HAnimJoint48.name = "r_knee"
HAnimJoint48.rotation = [1,0,0,1.3487936258316]
HAnimJoint48.center = [-0.05,0.466,0]
HAnimJoint48.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint48.skinCoordWeight = [0.6,0.2,1,1,1,1,1,1,0.2]
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.DEF = "Joe_r_talocrural"
HAnimJoint49.name = "r_talocrural"
HAnimJoint49.rotation = [1,0,0,0.651206374168395]
HAnimJoint49.center = [-0.115,0.069,0]
HAnimJoint49.skinCoordIndex = [370,371,372,373]
HAnimJoint49.skinCoordWeight = [1,1,1,1]
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.DEF = "Joe_r_tarsometatarsal_2"
HAnimJoint50.name = "r_tarsometatarsal_2"
HAnimJoint50.center = [-0.1,0.015,-0.01]
HAnimJoint50.skinCoordIndex = [374,375,376]
HAnimJoint50.skinCoordWeight = [1,1,1]
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.DEF = "Joe_r_metatarsophalangeal_2"
HAnimJoint51.name = "r_metatarsophalangeal_2"
HAnimJoint51.center = [-0.115,0.037,0.09]
HAnimJoint51.skinCoordIndex = [377,378,379,380]
HAnimJoint51.skinCoordWeight = [1,1,1,1]
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "Joe_r_tarsal_distal_interphalangeal_2"
HAnimJoint52.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint52.center = [-0.1,0.01,0.14]
HAnimJoint52.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint52.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint49.children.append(HAnimJoint50)

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint40.children.append(HAnimJoint47)

HAnimJoint31.children.append(HAnimJoint40)
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.DEF = "Joe_vl5"
HAnimJoint53.name = "vl5"
HAnimJoint53.center = [0,1.045,-0.095]
HAnimJoint53.skinCoordIndex = [28,76]
HAnimJoint53.skinCoordWeight = [1,1]
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.DEF = "Joe_vl4"
HAnimJoint54.name = "vl4"
HAnimJoint54.center = [0,1.068,-0.085]
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.DEF = "Joe_vl3"
HAnimJoint55.name = "vl3"
HAnimJoint55.center = [0,1.092,-0.0725]
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "Joe_vl2"
HAnimJoint56.name = "vl2"
HAnimJoint56.center = [0,1.12,-0.065]
HAnimJoint56.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint56.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.DEF = "Joe_vl1"
HAnimJoint57.name = "vl1"
HAnimJoint57.center = [0,1.1459,-0.0625]
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.DEF = "Joe_vt12"
HAnimJoint58.name = "vt12"
HAnimJoint58.center = [0,1.179,-0.068]
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.DEF = "Joe_vt11"
HAnimJoint59.name = "vt11"
HAnimJoint59.center = [0,1.2679,-0.081]
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.DEF = "Joe_vt10"
HAnimJoint60.name = "vt10"
HAnimJoint60.center = [0,1.242,-0.09]
HAnimJoint60.skinCoordIndex = [15]
HAnimJoint60.skinCoordWeight = [1]
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.DEF = "Joe_vt9"
HAnimJoint61.name = "vt9"
HAnimJoint61.center = [0,1.268,-0.1]
HAnimJoint61.skinCoordIndex = [13,14]
HAnimJoint61.skinCoordWeight = [1,1]
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.DEF = "Joe_vt8"
HAnimJoint62.name = "vt8"
HAnimJoint62.center = [0,1.294,-0.11]
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "Joe_vt7"
HAnimJoint63.name = "vt7"
HAnimJoint63.center = [0,1.323,-0.1155]
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.DEF = "Joe_vt6"
HAnimJoint64.name = "vt6"
HAnimJoint64.center = [0,1.352,-0.12]
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.DEF = "Joe_vt5"
HAnimJoint65.name = "vt5"
HAnimJoint65.center = [0,1.381,-0.1235]
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.DEF = "Joe_vt4"
HAnimJoint66.name = "vt4"
HAnimJoint66.center = [0,1.41,-0.1235]
HAnimJoint66.skinCoordIndex = [81]
HAnimJoint66.skinCoordWeight = [1]
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.DEF = "Joe_vt3"
HAnimJoint67.name = "vt3"
HAnimJoint67.center = [0,1.438,-0.12]
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.DEF = "Joe_vt2"
HAnimJoint68.name = "vt2"
HAnimJoint68.center = [0,1.468,-0.105]
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "Joe_vt1"
HAnimJoint69.name = "vt1"
HAnimJoint69.center = [0,1.497,-0.09]
HAnimJoint69.skinCoordIndex = [11,24]
HAnimJoint69.skinCoordWeight = [1,1]
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.DEF = "Joe_vc7"
HAnimJoint70.name = "vc7"
HAnimJoint70.center = [0,1.525,-0.072]
HAnimJoint70.skinCoordIndex = [74,75]
HAnimJoint70.skinCoordWeight = [1,1]
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.DEF = "Joe_vc6"
HAnimJoint71.name = "vc6"
HAnimJoint71.center = [0,1.54,-0.05]
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.DEF = "Joe_vc5"
HAnimJoint72.name = "vc5"
HAnimJoint72.center = [0,1.552,-0.035]
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.DEF = "Joe_vc4"
HAnimJoint73.name = "vc4"
HAnimJoint73.rotation = [0.79363313197937,0,0.608396623778117,0.509491241300095]
HAnimJoint73.center = [0,1.5675,-0.0256]
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.DEF = "Joe_vc3"
HAnimJoint74.name = "vc3"
HAnimJoint74.center = [0,1.58225,-0.0185]
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.DEF = "Joe_vc2"
HAnimJoint75.name = "vc2"
HAnimJoint75.center = [0,1.595,-0.0175]
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.DEF = "Joe_vc1"
HAnimJoint76.name = "vc1"
HAnimJoint76.center = [0,1.61,-0.015]
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.DEF = "Joe_skullbase"
HAnimJoint77.name = "skullbase"
HAnimJoint77.rotation = [0,0.999999999999988,0,0.244155538082126]
HAnimJoint77.center = [0,1.63,-0.01]
HAnimJoint77.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint77.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimDisplacer78 = x3d.HAnimDisplacer()
HAnimDisplacer78.DEF = "Joe_skull_tip_raiser_action"
HAnimDisplacer78.name = "skull_tip_raiser_action"
HAnimDisplacer78.weight = 0.7399469
HAnimDisplacer78.coordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimDisplacer78.displacements = [(0, 0.15, 0),(0, 0, 0.15),(-0.1, 0, 0.15),(0.1, 0, 0.05),(0, -0.02, 0.05),(-0.15, 0, 0),(-0.05, 0, 0),(0.15, 0, 0),(0.05, 0, 0),(0, 0, -0.15)]

HAnimJoint77.displacers.append(HAnimDisplacer78)
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.DEF = "Joe_l_eyelid_joint"
HAnimJoint79.name = "l_eyelid_joint"
HAnimJoint79.center = [0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint79)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.DEF = "Joe_l_eyeball_joint"
HAnimJoint80.name = "l_eyeball_joint"
HAnimJoint80.center = [0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint80)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.DEF = "Joe_l_eyebrow_joint"
HAnimJoint81.name = "l_eyebrow_joint"
HAnimJoint81.center = [0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint81)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.DEF = "Joe_r_eyelid_joint"
HAnimJoint82.name = "r_eyelid_joint"
HAnimJoint82.center = [-0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint82)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.DEF = "Joe_r_eyeball_joint"
HAnimJoint83.name = "r_eyeball_joint"
HAnimJoint83.center = [-0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint83)
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.DEF = "Joe_r_eyebrow_joint"
HAnimJoint84.name = "r_eyebrow_joint"
HAnimJoint84.center = [-0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint84)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.DEF = "Joe_temporomandibular"
HAnimJoint85.name = "temporomandibular"
HAnimJoint85.center = [0.034,1.659,0.06]

HAnimJoint77.children.append(HAnimJoint85)

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.DEF = "Joe_l_acromioclavicular"
HAnimJoint86.name = "l_acromioclavicular"
HAnimJoint86.center = [0.082,1.4488,-0.0353]
HAnimJoint86.skinCoordIndex = [12]
HAnimJoint86.skinCoordWeight = [1]
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.DEF = "Joe_l_sternoclavicular"
HAnimJoint87.name = "l_sternoclavicular"
HAnimJoint87.center = [0.0962,1.4269,-0.0424]
HAnimJoint87.skinCoordIndex = [79]
HAnimJoint87.skinCoordWeight = [1]
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.DEF = "Joe_l_shoulder"
HAnimJoint88.name = "l_shoulder"
HAnimJoint88.rotation = [-0.643733224193946,0,0.765249982730394,1.6862643538567]
HAnimJoint88.center = [0.2,1.44,-0.04]
HAnimJoint88.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint88.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.DEF = "Joe_l_elbow"
HAnimJoint89.name = "l_elbow"
HAnimJoint89.rotation = [-0.80893714343502,-0.587895141986384,0,0.512375525586369]
HAnimJoint89.center = [0.2,1.1388,-0.04]
HAnimJoint89.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint89.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.DEF = "Joe_l_radiocarpal"
HAnimJoint90.name = "l_radiocarpal"
HAnimJoint90.rotation = [0,-0.447213595499958,0.894427190999917,0.491420745338246]
HAnimJoint90.center = [0.2,0.87,-0.04]
HAnimJoint90.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint90.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.DEF = "Joe_l_carpometacarpal_1"
HAnimJoint91.name = "l_carpometacarpal_1"
HAnimJoint91.center = [0.1924,0.8472,-0.0534]
HAnimJoint91.skinCoordIndex = [127,128]
HAnimJoint91.skinCoordWeight = [1,1]
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "Joe_l_metacarpophalangeal_1"
HAnimJoint92.name = "l_metacarpophalangeal_1"
HAnimJoint92.center = [0.1951,0.8226,0.0246]
HAnimJoint92.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint92.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.DEF = "Joe_l_carpal_interphalangeal_1"
HAnimJoint93.name = "l_carpal_interphalangeal_1"
HAnimJoint93.center = [0.1955,0.8159,0.0464]
HAnimJoint93.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint93.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.DEF = "Joe_l_carpometacarpal_2"
HAnimJoint94.name = "l_carpometacarpal_2"
HAnimJoint94.center = [0.1983,0.8024,-0.028]
HAnimJoint94.skinCoordIndex = [129,130]
HAnimJoint94.skinCoordWeight = [1,1]
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.DEF = "Joe_l_metacarpophalangeal_2"
HAnimJoint95.name = "l_metacarpophalangeal_2"
HAnimJoint95.center = [0.1983,0.7815,-0.028]
HAnimJoint95.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint95.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.DEF = "Joe_l_carpal_proximal_interphalangeal_2"
HAnimJoint96.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint96.center = [0.2017,0.7363,-0.0248]
HAnimJoint96.skinCoordIndex = [166,167,168,169]
HAnimJoint96.skinCoordWeight = [1,1,1,1]
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "Joe_l_carpal_distal_interphalangeal_2"
HAnimJoint97.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint97.center = [0.2028,0.7139,-0.0236]
HAnimJoint97.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint97.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint96.children.append(HAnimJoint97)

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint90.children.append(HAnimJoint94)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.DEF = "Joe_l_carpometacarpal_3"
HAnimJoint98.name = "l_carpometacarpal_3"
HAnimJoint98.center = [0.1987,0.8029,-0.053]
HAnimJoint98.skinCoordIndex = [131,132]
HAnimJoint98.skinCoordWeight = [1,1]
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.DEF = "Joe_l_metacarpophalangeal_3"
HAnimJoint99.name = "l_metacarpophalangeal_3"
HAnimJoint99.center = [0.1987,0.7818,-0.053]
HAnimJoint99.skinCoordIndex = [156,157,163,164]
HAnimJoint99.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.DEF = "Joe_l_carpal_proximal_interphalangeal_3"
HAnimJoint100.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint100.center = [0.2013,0.7273,-0.0503]
HAnimJoint100.skinCoordIndex = [179,180,181,182]
HAnimJoint100.skinCoordWeight = [1,1,1,1]
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.DEF = "Joe_l_carpal_distal_interphalangeal_3"
HAnimJoint101.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint101.center = [0.2026,0.7011,-0.0494]
HAnimJoint101.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint101.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint90.children.append(HAnimJoint98)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.DEF = "Joe_l_carpometacarpal_4"
HAnimJoint102.name = "l_carpometacarpal_4"
HAnimJoint102.center = [0.1956,0.8019,-0.0794]
HAnimJoint102.skinCoordIndex = [133,134]
HAnimJoint102.skinCoordWeight = [1,1]
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.DEF = "Joe_l_metacarpophalangeal_4"
HAnimJoint103.name = "l_metacarpophalangeal_4"
HAnimJoint103.center = [0.1956,0.7815,-0.0794]
HAnimJoint103.skinCoordIndex = [158,159,164,165]
HAnimJoint103.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.DEF = "Joe_l_carpal_proximal_interphalangeal_4"
HAnimJoint104.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint104.center = [0.1973,0.7287,-0.0777]
HAnimJoint104.skinCoordIndex = [192,193,194,195]
HAnimJoint104.skinCoordWeight = [1,1,1,1]
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.DEF = "Joe_l_carpal_distal_interphalangeal_4"
HAnimJoint105.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint105.center = [0.1983,0.7045,-0.0767]
HAnimJoint105.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint105.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint90.children.append(HAnimJoint102)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.DEF = "Joe_l_carpometacarpal_5"
HAnimJoint106.name = "l_carpometacarpal_5"
HAnimJoint106.center = [0.1925,0.8066,-0.1036]
HAnimJoint106.skinCoordIndex = [135,136,137,165]
HAnimJoint106.skinCoordWeight = [1,1,1,0.5]
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.DEF = "Joe_l_metacarpophalangeal_5"
HAnimJoint107.name = "l_metacarpophalangeal_5"
HAnimJoint107.center = [0.1925,0.7866,-0.1036]
HAnimJoint107.skinCoordIndex = [160,161,162]
HAnimJoint107.skinCoordWeight = [1,1,1]
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.DEF = "Joe_l_carpal_proximal_interphalangeal_5"
HAnimJoint108.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint108.center = [0.1938,0.7452,-0.1024]
HAnimJoint108.skinCoordIndex = [205,206,207,208]
HAnimJoint108.skinCoordWeight = [1,1,1,1]
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.DEF = "Joe_l_carpal_distal_interphalangeal_5"
HAnimJoint109.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint109.center = [0.1948,0.7277,-0.1017]
HAnimJoint109.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint109.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint90.children.append(HAnimJoint106)

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint69.children.append(HAnimJoint86)
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
HAnimJoint112.rotation = [0,0,-1,1.7121984064579]
HAnimJoint112.center = [-0.2,1.44,-0.04]
HAnimJoint112.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint112.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.DEF = "Joe_r_elbow"
HAnimJoint113.name = "r_elbow"
HAnimJoint113.rotation = [-0.80893714343502,-0.587895141986384,0,0.512375525586369]
HAnimJoint113.center = [-0.2,1.1388,-0.04]
HAnimJoint113.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint113.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.DEF = "Joe_r_radiocarpal"
HAnimJoint114.name = "r_radiocarpal"
HAnimJoint114.rotation = [0,-0.670839596599646,-0.741602478174135,0.341691938879626]
HAnimJoint114.center = [-0.2,0.89,-0.04]
HAnimJoint114.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint114.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "Joe_r_carpometacarpal_1"
HAnimJoint115.name = "r_carpometacarpal_1"
HAnimJoint115.center = [-0.2,0.85,0]
HAnimJoint115.skinCoordIndex = [243,244]
HAnimJoint115.skinCoordWeight = [1,1]
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.DEF = "Joe_r_metacarpophalangeal_1"
HAnimJoint116.name = "r_metacarpophalangeal_1"
HAnimJoint116.center = [-0.2,0.82,0.03]
HAnimJoint116.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint116.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "Joe_r_carpal_interphalangeal_1"
HAnimJoint117.name = "r_carpal_interphalangeal_1"
HAnimJoint117.center = [-0.2,0.8,0.05]
HAnimJoint117.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint117.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.DEF = "Joe_r_carpometacarpal_2"
HAnimJoint118.name = "r_carpometacarpal_2"
HAnimJoint118.rotation = [0,0,1,0.302412748336791]
HAnimJoint118.center = [-0.2,0.84,-0.015]
HAnimJoint118.skinCoordIndex = [245,246]
HAnimJoint118.skinCoordWeight = [1,1]
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.DEF = "Joe_r_metacarpophalangeal_2"
HAnimJoint119.name = "r_metacarpophalangeal_2"
HAnimJoint119.rotation = [0,0,1,0.453619122505188]
HAnimJoint119.center = [-0.2,0.793,-0.015]
HAnimJoint119.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint119.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.DEF = "Joe_r_carpal_proximal_interphalangeal_2"
HAnimJoint120.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint120.rotation = [0,0,1,0.453619122505188]
HAnimJoint120.center = [-0.2,0.745,-0.015]
HAnimJoint120.skinCoordIndex = [282,283,284,285]
HAnimJoint120.skinCoordWeight = [1,1,1,1]
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.DEF = "Joe_r_carpal_distal_interphalangeal_2"
HAnimJoint121.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint121.rotation = [0,0,1,0.453619122505188]
HAnimJoint121.center = [-0.2,0.72,-0.015]
HAnimJoint121.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint121.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint120.children.append(HAnimJoint121)

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint114.children.append(HAnimJoint118)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "Joe_r_carpometacarpal_3"
HAnimJoint122.name = "r_carpometacarpal_3"
HAnimJoint122.rotation = [0,0,1,0.302412748336791]
HAnimJoint122.center = [-0.2,0.835,-0.04]
HAnimJoint122.skinCoordIndex = [247,248]
HAnimJoint122.skinCoordWeight = [1,1]
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.DEF = "Joe_r_metacarpophalangeal_3"
HAnimJoint123.name = "r_metacarpophalangeal_3"
HAnimJoint123.rotation = [0,0,1,0.453619122505188]
HAnimJoint123.center = [-0.2,0.788,-0.04]
HAnimJoint123.skinCoordIndex = [272,273,279,280]
HAnimJoint123.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "Joe_r_carpal_proximal_interphalangeal_3"
HAnimJoint124.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint124.rotation = [0,0,1,0.453619122505188]
HAnimJoint124.center = [-0.2,0.74,-0.04]
HAnimJoint124.skinCoordIndex = [295,296,297,298]
HAnimJoint124.skinCoordWeight = [1,1,1,1]
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.DEF = "Joe_r_carpal_distal_interphalangeal_3"
HAnimJoint125.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint125.rotation = [0,0,1,0.453619122505188]
HAnimJoint125.center = [-0.2,0.7142,-0.04]
HAnimJoint125.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint125.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint114.children.append(HAnimJoint122)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.DEF = "Joe_r_carpometacarpal_4"
HAnimJoint126.name = "r_carpometacarpal_4"
HAnimJoint126.rotation = [0,0,1,0.302412748336791]
HAnimJoint126.center = [-0.2,0.835,-0.065]
HAnimJoint126.skinCoordIndex = [249,250]
HAnimJoint126.skinCoordWeight = [1,1]
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.DEF = "Joe_r_metacarpophalangeal_4"
HAnimJoint127.name = "r_metacarpophalangeal_4"
HAnimJoint127.rotation = [0,0,1,0.453619122505188]
HAnimJoint127.center = [-0.2,0.793,-0.065]
HAnimJoint127.skinCoordIndex = [274,275,280,281]
HAnimJoint127.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "Joe_r_carpal_proximal_interphalangeal_4"
HAnimJoint128.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint128.rotation = [0,0,1,0.453619122505188]
HAnimJoint128.center = [-0.2,0.74,-0.065]
HAnimJoint128.skinCoordIndex = [308,309,310,311]
HAnimJoint128.skinCoordWeight = [1,1,1,1]
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.DEF = "Joe_r_carpal_distal_interphalangeal_4"
HAnimJoint129.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint129.rotation = [0,0,1,0.453619122505188]
HAnimJoint129.center = [-0.2,0.7177,-0.065]
HAnimJoint129.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint129.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint126.children.append(HAnimJoint127)

HAnimJoint114.children.append(HAnimJoint126)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.DEF = "Joe_r_carpometacarpal_5"
HAnimJoint130.name = "r_carpometacarpal_5"
HAnimJoint130.rotation = [0,0,1,0.302412748336791]
HAnimJoint130.center = [-0.2,0.84,-0.085]
HAnimJoint130.skinCoordIndex = [251,252,253,281]
HAnimJoint130.skinCoordWeight = [1,1,1,0.5]
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.DEF = "Joe_r_metacarpophalangeal_5"
HAnimJoint131.name = "r_metacarpophalangeal_5"
HAnimJoint131.rotation = [0,0,1,0.453619122505188]
HAnimJoint131.center = [-0.2,0.79,-0.085]
HAnimJoint131.skinCoordIndex = [276,277,278]
HAnimJoint131.skinCoordWeight = [1,1,1]
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.DEF = "Joe_r_carpal_proximal_interphalangeal_5"
HAnimJoint132.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint132.rotation = [0,0,1,0.453619122505188]
HAnimJoint132.center = [-0.2,0.755,-0.085]
HAnimJoint132.skinCoordIndex = [321,322,323,324]
HAnimJoint132.skinCoordWeight = [1,1,1,1]
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.DEF = "Joe_r_carpal_distal_interphalangeal_5"
HAnimJoint133.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint133.rotation = [0,0,1,0.453619122505188]
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

HAnimJoint31.children.append(HAnimJoint53)

HAnimHumanoid28.skeleton.append(HAnimJoint31)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.USE = "Joe_humanoid_root"

HAnimHumanoid28.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.USE = "Joe_sacroiliac"

HAnimHumanoid28.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.USE = "Joe_skullbase"

HAnimHumanoid28.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.USE = "Joe_temporomandibular"

HAnimHumanoid28.joints.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.USE = "Joe_vc1"

HAnimHumanoid28.joints.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.USE = "Joe_vc2"

HAnimHumanoid28.joints.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.USE = "Joe_vc3"

HAnimHumanoid28.joints.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.USE = "Joe_vc4"

HAnimHumanoid28.joints.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.USE = "Joe_vc5"

HAnimHumanoid28.joints.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.USE = "Joe_vc6"

HAnimHumanoid28.joints.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.USE = "Joe_vc7"

HAnimHumanoid28.joints.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.USE = "Joe_vl1"

HAnimHumanoid28.joints.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.USE = "Joe_vl2"

HAnimHumanoid28.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.USE = "Joe_vl3"

HAnimHumanoid28.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.USE = "Joe_vl4"

HAnimHumanoid28.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.USE = "Joe_vl5"

HAnimHumanoid28.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.USE = "Joe_vt1"

HAnimHumanoid28.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.USE = "Joe_vt10"

HAnimHumanoid28.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.USE = "Joe_vt11"

HAnimHumanoid28.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.USE = "Joe_vt12"

HAnimHumanoid28.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.USE = "Joe_vt2"

HAnimHumanoid28.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.USE = "Joe_vt3"

HAnimHumanoid28.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.USE = "Joe_vt4"

HAnimHumanoid28.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.USE = "Joe_vt5"

HAnimHumanoid28.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.USE = "Joe_vt6"

HAnimHumanoid28.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.USE = "Joe_vt7"

HAnimHumanoid28.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.USE = "Joe_vt8"

HAnimHumanoid28.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.USE = "Joe_vt9"

HAnimHumanoid28.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.USE = "Joe_l_acromioclavicular"

HAnimHumanoid28.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.USE = "Joe_r_acromioclavicular"

HAnimHumanoid28.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "Joe_l_carpal_distal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.USE = "Joe_r_carpal_distal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.USE = "Joe_l_carpal_distal_interphalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.USE = "Joe_r_carpal_distal_interphalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.USE = "Joe_l_carpal_distal_interphalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.USE = "Joe_r_carpal_distal_interphalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.USE = "Joe_l_carpal_distal_interphalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.USE = "Joe_r_carpal_distal_interphalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.USE = "Joe_l_carpal_interphalangeal_1"

HAnimHumanoid28.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.USE = "Joe_r_carpal_interphalangeal_1"

HAnimHumanoid28.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.USE = "Joe_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.USE = "Joe_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.USE = "Joe_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.USE = "Joe_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.USE = "Joe_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.USE = "Joe_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.USE = "Joe_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.USE = "Joe_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.USE = "Joe_l_carpometacarpal_1"

HAnimHumanoid28.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.USE = "Joe_r_carpometacarpal_1"

HAnimHumanoid28.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.USE = "Joe_l_carpometacarpal_2"

HAnimHumanoid28.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.USE = "Joe_r_carpometacarpal_2"

HAnimHumanoid28.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.USE = "Joe_l_carpometacarpal_3"

HAnimHumanoid28.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.USE = "Joe_r_carpometacarpal_3"

HAnimHumanoid28.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.USE = "Joe_l_carpometacarpal_4"

HAnimHumanoid28.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.USE = "Joe_r_carpometacarpal_4"

HAnimHumanoid28.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.USE = "Joe_l_carpometacarpal_5"

HAnimHumanoid28.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.USE = "Joe_r_carpometacarpal_5"

HAnimHumanoid28.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.USE = "Joe_l_elbow"

HAnimHumanoid28.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.USE = "Joe_r_elbow"

HAnimHumanoid28.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.USE = "Joe_l_eyeball_joint"

HAnimHumanoid28.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.USE = "Joe_r_eyeball_joint"

HAnimHumanoid28.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.USE = "Joe_l_eyebrow_joint"

HAnimHumanoid28.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.USE = "Joe_r_eyebrow_joint"

HAnimHumanoid28.joints.append(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.USE = "Joe_l_eyelid_joint"

HAnimHumanoid28.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.USE = "Joe_r_eyelid_joint"

HAnimHumanoid28.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.USE = "Joe_l_hip"

HAnimHumanoid28.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.USE = "Joe_r_hip"

HAnimHumanoid28.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.USE = "Joe_l_knee"

HAnimHumanoid28.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.USE = "Joe_r_knee"

HAnimHumanoid28.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.USE = "Joe_l_metacarpophalangeal_1"

HAnimHumanoid28.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.USE = "Joe_r_metacarpophalangeal_1"

HAnimHumanoid28.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.USE = "Joe_l_metacarpophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.USE = "Joe_r_metacarpophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.USE = "Joe_l_metacarpophalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.USE = "Joe_r_metacarpophalangeal_3"

HAnimHumanoid28.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.USE = "Joe_l_metacarpophalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "Joe_r_metacarpophalangeal_4"

HAnimHumanoid28.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "Joe_l_metacarpophalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "Joe_r_metacarpophalangeal_5"

HAnimHumanoid28.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "Joe_l_metatarsophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "Joe_r_metatarsophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "Joe_l_radiocarpal"

HAnimHumanoid28.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "Joe_r_radiocarpal"

HAnimHumanoid28.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "Joe_l_shoulder"

HAnimHumanoid28.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "Joe_r_shoulder"

HAnimHumanoid28.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "Joe_l_sternoclavicular"

HAnimHumanoid28.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "Joe_r_sternoclavicular"

HAnimHumanoid28.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "Joe_l_talocrural"

HAnimHumanoid28.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "Joe_r_talocrural"

HAnimHumanoid28.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "Joe_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "Joe_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "Joe_l_tarsometatarsal_2"

HAnimHumanoid28.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "Joe_r_tarsometatarsal_2"

HAnimHumanoid28.joints.append(HAnimJoint227)
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.USE = "Joe_sacrum"

HAnimHumanoid28.segments.append(HAnimSegment228)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.USE = "Joe_RootFront_view"

HAnimHumanoid28.sites.append(HAnimSite229)
Coordinate230 = x3d.Coordinate()
Coordinate230.DEF = "Joe_SkinCoord"
Coordinate230.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.255, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid28.skinCoord = Coordinate230
Shape231 = x3d.Shape()
Shape231.DEF = "Joe_Shape"
Appearance232 = x3d.Appearance()
Appearance232.DEF = "Joe_skin_Appearance"
Material233 = x3d.Material()
Material233.DEF = "Joe_skin_Material"
Material233.diffuseColor = [0.3,0.3,0.6]
Material233.emissiveColor = [0.3,0.3,0.6]

Appearance232.material = Material233
ImageTexture234 = x3d.ImageTexture()
ImageTexture234.DEF = "JoeSkinImageTexture"
ImageTexture234.url = ["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]

Appearance232.texture = ImageTexture234
TextureTransform235 = x3d.TextureTransform()
TextureTransform235.DEF = "KickTextureTransform"
TextureTransform235.rotation = 0.7560319

Appearance232.textureTransform = TextureTransform235

Shape231.appearance = Appearance232
IndexedFaceSet236 = x3d.IndexedFaceSet()
IndexedFaceSet236.DEF = "Joe_skin_IndexedFaceSet"
IndexedFaceSet236.creaseAngle = 3.14
IndexedFaceSet236.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
TextureCoordinate237 = x3d.TextureCoordinate()
TextureCoordinate237.point = [(0, 0),(0.5, 0.5),(0.5, 0),(0, 0.5)]

IndexedFaceSet236.texCoord = TextureCoordinate237
Coordinate238 = x3d.Coordinate()
Coordinate238.USE = "Joe_SkinCoord"

IndexedFaceSet236.coord = Coordinate238

Shape231.geometry = IndexedFaceSet236

HAnimHumanoid28.skin.append(Shape231)

Group27.children.append(HAnimHumanoid28)

Scene16.children.append(Group27)
Group239 = x3d.Group()
TimeSensor240 = x3d.TimeSensor()
TimeSensor240.DEF = "KickTimer"
TimeSensor240.cycleInterval = 3.73
TimeSensor240.loop = True

Group239.children.append(TimeSensor240)
OrientationInterpolator241 = x3d.OrientationInterpolator()
OrientationInterpolator241.DEF = "HumanoidRoot_RotationInterpolator"
OrientationInterpolator241.key = [0,0.1,0.4,0.6,1]
OrientationInterpolator241.keyValue = [(1, 0, 0, 0.5),(1, 0, 0, 0.5),(-1, 0, 0, 0.1),(-1, 0, 0, 0.5),(-1, 0, 0, 0.5)]

Group239.children.append(OrientationInterpolator241)
PositionInterpolator242 = x3d.PositionInterpolator()
PositionInterpolator242.DEF = "HumanoidRoot_TranslationInterpolator"
PositionInterpolator242.key = [0,0.2,0.6,1]
PositionInterpolator242.keyValue = [(1, 0.3, -1),(0.4, -0.04, -0.4),(-0.18, 0.1, 0),(-0.2, 0.15, 0.15)]

Group239.children.append(PositionInterpolator242)
OrientationInterpolator243 = x3d.OrientationInterpolator()
OrientationInterpolator243.DEF = "sacroiliac_RotationInterpolator"
OrientationInterpolator243.key = [0,0.5,1]
OrientationInterpolator243.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator243)
OrientationInterpolator244 = x3d.OrientationInterpolator()
OrientationInterpolator244.DEF = "l_hip_RotationInterpolator"
OrientationInterpolator244.key = [0,0.1,0.3,0.45,1]
OrientationInterpolator244.keyValue = [(-1, 0, 0, 1.5),(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 0.5),(1, 0, 0, 1)]

Group239.children.append(OrientationInterpolator244)
OrientationInterpolator245 = x3d.OrientationInterpolator()
OrientationInterpolator245.DEF = "l_knee_RotationInterpolator"
OrientationInterpolator245.key = [0,0.2,0.35,0.5,1]
OrientationInterpolator245.keyValue = [(1, 0, 0, 1),(0, 0, 1, 0),(0, 0, 1, 0.2),(1, 0, 1, 0.5),(1, 0, 0, 1.4)]

Group239.children.append(OrientationInterpolator245)
OrientationInterpolator246 = x3d.OrientationInterpolator()
OrientationInterpolator246.DEF = "l_ankle_RotationInterpolator"
OrientationInterpolator246.key = [0,0.25,1]
OrientationInterpolator246.keyValue = [(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 1)]

Group239.children.append(OrientationInterpolator246)
OrientationInterpolator247 = x3d.OrientationInterpolator()
OrientationInterpolator247.DEF = "l_subtalar_RotationInterpolator"
OrientationInterpolator247.key = [0,0.5,1]
OrientationInterpolator247.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator247)
OrientationInterpolator248 = x3d.OrientationInterpolator()
OrientationInterpolator248.DEF = "l_midtarsal_RotationInterpolator"
OrientationInterpolator248.key = [0,0.5,1]
OrientationInterpolator248.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator248)
OrientationInterpolator249 = x3d.OrientationInterpolator()
OrientationInterpolator249.DEF = "l_metatarsal_RotationInterpolator"
OrientationInterpolator249.key = [0,0.5,1]
OrientationInterpolator249.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator249)
OrientationInterpolator250 = x3d.OrientationInterpolator()
OrientationInterpolator250.DEF = "r_hip_RotationInterpolator"
OrientationInterpolator250.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator250.keyValue = [(1, 0, 0, 1),(1, 0, 0, 1),(-1, 0, 0, 1),(-1, 0, 0, 1),(-1, 0, 0, 1)]

Group239.children.append(OrientationInterpolator250)
OrientationInterpolator251 = x3d.OrientationInterpolator()
OrientationInterpolator251.DEF = "r_knee_RotationInterpolator"
OrientationInterpolator251.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator251.keyValue = [(1, 0, 0, 0.1),(0, 0, 1, 0),(1, 0, 0, 1),(1, 0, 0, 1),(1, 0, 0, 1.5)]

Group239.children.append(OrientationInterpolator251)
OrientationInterpolator252 = x3d.OrientationInterpolator()
OrientationInterpolator252.DEF = "r_ankle_RotationInterpolator"
OrientationInterpolator252.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator252.keyValue = [(-1, 0, 0, 1),(0, 0, 1, 0),(1, 0, 0, 1),(1, 0, 0, 1),(1, 0, 0, 0.5)]

Group239.children.append(OrientationInterpolator252)
OrientationInterpolator253 = x3d.OrientationInterpolator()
OrientationInterpolator253.DEF = "r_subtalar_RotationInterpolator"
OrientationInterpolator253.key = [0,0.5,1]
OrientationInterpolator253.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator253)
OrientationInterpolator254 = x3d.OrientationInterpolator()
OrientationInterpolator254.DEF = "r_midtarsal_RotationInterpolator"
OrientationInterpolator254.key = [0,0.5,1]
OrientationInterpolator254.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator254)
OrientationInterpolator255 = x3d.OrientationInterpolator()
OrientationInterpolator255.DEF = "r_metatarsal_RotationInterpolator"
OrientationInterpolator255.key = [0,0.5,1]
OrientationInterpolator255.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator255)
OrientationInterpolator256 = x3d.OrientationInterpolator()
OrientationInterpolator256.DEF = "vl5_RotationInterpolator"
OrientationInterpolator256.key = [0,0.5,1]
OrientationInterpolator256.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator256)
OrientationInterpolator257 = x3d.OrientationInterpolator()
OrientationInterpolator257.DEF = "vl4_RotationInterpolator"
OrientationInterpolator257.key = [0,0.5,1]
OrientationInterpolator257.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator257)
OrientationInterpolator258 = x3d.OrientationInterpolator()
OrientationInterpolator258.DEF = "vl3_RotationInterpolator"
OrientationInterpolator258.key = [0,0.5,1]
OrientationInterpolator258.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator258)
OrientationInterpolator259 = x3d.OrientationInterpolator()
OrientationInterpolator259.DEF = "vl2_RotationInterpolator"
OrientationInterpolator259.key = [0,0.5,1]
OrientationInterpolator259.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator259)
OrientationInterpolator260 = x3d.OrientationInterpolator()
OrientationInterpolator260.DEF = "vl1_RotationInterpolator"
OrientationInterpolator260.key = [0,0.5,1]
OrientationInterpolator260.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator260)
OrientationInterpolator261 = x3d.OrientationInterpolator()
OrientationInterpolator261.DEF = "vt12_RotationInterpolator"
OrientationInterpolator261.key = [0,0.5,1]
OrientationInterpolator261.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator261)
OrientationInterpolator262 = x3d.OrientationInterpolator()
OrientationInterpolator262.DEF = "vt11_RotationInterpolator"
OrientationInterpolator262.key = [0,0.5,1]
OrientationInterpolator262.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator262)
OrientationInterpolator263 = x3d.OrientationInterpolator()
OrientationInterpolator263.DEF = "vt10_RotationInterpolator"
OrientationInterpolator263.key = [0,0.5,1]
OrientationInterpolator263.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator263)
OrientationInterpolator264 = x3d.OrientationInterpolator()
OrientationInterpolator264.DEF = "vt9_RotationInterpolator"
OrientationInterpolator264.key = [0,0.5,1]
OrientationInterpolator264.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator264)
OrientationInterpolator265 = x3d.OrientationInterpolator()
OrientationInterpolator265.DEF = "vt8_RotationInterpolator"
OrientationInterpolator265.key = [0,0.5,1]
OrientationInterpolator265.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator265)
OrientationInterpolator266 = x3d.OrientationInterpolator()
OrientationInterpolator266.DEF = "vt7_RotationInterpolator"
OrientationInterpolator266.key = [0,0.5,1]
OrientationInterpolator266.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator266)
OrientationInterpolator267 = x3d.OrientationInterpolator()
OrientationInterpolator267.DEF = "vt6_RotationInterpolator"
OrientationInterpolator267.key = [0,0.5,1]
OrientationInterpolator267.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator267)
OrientationInterpolator268 = x3d.OrientationInterpolator()
OrientationInterpolator268.DEF = "vt5_RotationInterpolator"
OrientationInterpolator268.key = [0,0.5,1]
OrientationInterpolator268.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator268)
OrientationInterpolator269 = x3d.OrientationInterpolator()
OrientationInterpolator269.DEF = "vt4_RotationInterpolator"
OrientationInterpolator269.key = [0,0.5,1]
OrientationInterpolator269.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator269)
OrientationInterpolator270 = x3d.OrientationInterpolator()
OrientationInterpolator270.DEF = "vt3_RotationInterpolator"
OrientationInterpolator270.key = [0,0.5,1]
OrientationInterpolator270.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator270)
OrientationInterpolator271 = x3d.OrientationInterpolator()
OrientationInterpolator271.DEF = "vt2_RotationInterpolator"
OrientationInterpolator271.key = [0,0.5,1]
OrientationInterpolator271.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator271)
OrientationInterpolator272 = x3d.OrientationInterpolator()
OrientationInterpolator272.DEF = "vt1_RotationInterpolator"
OrientationInterpolator272.key = [0,0.5,1]
OrientationInterpolator272.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator272)
OrientationInterpolator273 = x3d.OrientationInterpolator()
OrientationInterpolator273.DEF = "vc7_RotationInterpolator"
OrientationInterpolator273.key = [0,0.5,1]
OrientationInterpolator273.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator273)
OrientationInterpolator274 = x3d.OrientationInterpolator()
OrientationInterpolator274.DEF = "vc6_RotationInterpolator"
OrientationInterpolator274.key = [0,0.5,1]
OrientationInterpolator274.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator274)
OrientationInterpolator275 = x3d.OrientationInterpolator()
OrientationInterpolator275.DEF = "vc5_RotationInterpolator"
OrientationInterpolator275.key = [0,0.5,1]
OrientationInterpolator275.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator275)
OrientationInterpolator276 = x3d.OrientationInterpolator()
OrientationInterpolator276.DEF = "vc4_RotationInterpolator"
OrientationInterpolator276.key = [0,0.3,0.4,1]
OrientationInterpolator276.keyValue = [(1, 0, 1, 0.25),(-1, 0, -1, 0.35),(1, 0, 0, 0.75),(1, 0, 1, 0.5)]

Group239.children.append(OrientationInterpolator276)
OrientationInterpolator277 = x3d.OrientationInterpolator()
OrientationInterpolator277.DEF = "vc3_RotationInterpolator"
OrientationInterpolator277.key = [0,0.5,1]
OrientationInterpolator277.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator277)
OrientationInterpolator278 = x3d.OrientationInterpolator()
OrientationInterpolator278.DEF = "vc2_RotationInterpolator"
OrientationInterpolator278.key = [0,0.5,1]
OrientationInterpolator278.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator278)
OrientationInterpolator279 = x3d.OrientationInterpolator()
OrientationInterpolator279.DEF = "vc1_RotationInterpolator"
OrientationInterpolator279.key = [0,0.5,1]
OrientationInterpolator279.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator279)
OrientationInterpolator280 = x3d.OrientationInterpolator()
OrientationInterpolator280.DEF = "skullbase_RotationInterpolator"
OrientationInterpolator280.key = [0,0.2,0.75,1]
OrientationInterpolator280.keyValue = [(0, -1, 0, 0.5),(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, 0.35)]

Group239.children.append(OrientationInterpolator280)
OrientationInterpolator281 = x3d.OrientationInterpolator()
OrientationInterpolator281.DEF = "l_eyelid_joint_RotationInterpolator"
OrientationInterpolator281.key = [0,0.5,1]
OrientationInterpolator281.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator281)
OrientationInterpolator282 = x3d.OrientationInterpolator()
OrientationInterpolator282.DEF = "l_eyeball_joint_RotationInterpolator"
OrientationInterpolator282.key = [0,0.5,1]
OrientationInterpolator282.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator282)
OrientationInterpolator283 = x3d.OrientationInterpolator()
OrientationInterpolator283.DEF = "l_eyebrow_joint_RotationInterpolator"
OrientationInterpolator283.key = [0,0.5,1]
OrientationInterpolator283.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator283)
OrientationInterpolator284 = x3d.OrientationInterpolator()
OrientationInterpolator284.DEF = "r_eyelid_joint_RotationInterpolator"
OrientationInterpolator284.key = [0,0.5,1]
OrientationInterpolator284.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator284)
OrientationInterpolator285 = x3d.OrientationInterpolator()
OrientationInterpolator285.DEF = "r_eyeball_joint_RotationInterpolator"
OrientationInterpolator285.key = [0,0.5,1]
OrientationInterpolator285.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator285)
OrientationInterpolator286 = x3d.OrientationInterpolator()
OrientationInterpolator286.DEF = "r_eyebrow_joint_RotationInterpolator"
OrientationInterpolator286.key = [0,0.5,1]
OrientationInterpolator286.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator286)
OrientationInterpolator287 = x3d.OrientationInterpolator()
OrientationInterpolator287.DEF = "temporomandibular_RotationInterpolator"
OrientationInterpolator287.key = [0,0.5,1]
OrientationInterpolator287.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator287)
OrientationInterpolator288 = x3d.OrientationInterpolator()
OrientationInterpolator288.DEF = "l_sternoclavicular_RotationInterpolator"
OrientationInterpolator288.key = [0,0.5,1]
OrientationInterpolator288.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator288)
OrientationInterpolator289 = x3d.OrientationInterpolator()
OrientationInterpolator289.DEF = "l_acromioclavicular_RotationInterpolator"
OrientationInterpolator289.key = [0,0.5,1]
OrientationInterpolator289.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator289)
OrientationInterpolator290 = x3d.OrientationInterpolator()
OrientationInterpolator290.DEF = "l_shoulder_RotationInterpolator"
OrientationInterpolator290.key = [0,0.4,1]
OrientationInterpolator290.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(-1, 0, 1, 1.75)]

Group239.children.append(OrientationInterpolator290)
OrientationInterpolator291 = x3d.OrientationInterpolator()
OrientationInterpolator291.DEF = "l_elbow_RotationInterpolator"
OrientationInterpolator291.key = [0,0.5,1]
OrientationInterpolator291.keyValue = [(-1, 0, 0, 3),(-1, 0, 0, 0.75),(-1, -1, 0, 0.5)]

Group239.children.append(OrientationInterpolator291)
OrientationInterpolator292 = x3d.OrientationInterpolator()
OrientationInterpolator292.DEF = "l_wrist_RotationInterpolator"
OrientationInterpolator292.key = [0,0.4,0.8,1]
OrientationInterpolator292.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.3),(0, -0.5, 1, 1.3),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator292)
OrientationInterpolator293 = x3d.OrientationInterpolator()
OrientationInterpolator293.DEF = "l_thumb1_RotationInterpolator"
OrientationInterpolator293.key = [0,0.5,1]
OrientationInterpolator293.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator293)
OrientationInterpolator294 = x3d.OrientationInterpolator()
OrientationInterpolator294.DEF = "l_thumb2_RotationInterpolator"
OrientationInterpolator294.key = [0,0.5,1]
OrientationInterpolator294.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator294)
OrientationInterpolator295 = x3d.OrientationInterpolator()
OrientationInterpolator295.DEF = "l_thumb3_RotationInterpolator"
OrientationInterpolator295.key = [0,0.5,1]
OrientationInterpolator295.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator295)
OrientationInterpolator296 = x3d.OrientationInterpolator()
OrientationInterpolator296.DEF = "l_index0_RotationInterpolator"
OrientationInterpolator296.key = [0,0.5,1]
OrientationInterpolator296.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator296)
OrientationInterpolator297 = x3d.OrientationInterpolator()
OrientationInterpolator297.DEF = "l_index1_RotationInterpolator"
OrientationInterpolator297.key = [0,0.5,1]
OrientationInterpolator297.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator297)
OrientationInterpolator298 = x3d.OrientationInterpolator()
OrientationInterpolator298.DEF = "l_index2_RotationInterpolator"
OrientationInterpolator298.key = [0,0.5,1]
OrientationInterpolator298.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator298)
OrientationInterpolator299 = x3d.OrientationInterpolator()
OrientationInterpolator299.DEF = "l_index3_RotationInterpolator"
OrientationInterpolator299.key = [0,0.5,1]
OrientationInterpolator299.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator299)
OrientationInterpolator300 = x3d.OrientationInterpolator()
OrientationInterpolator300.DEF = "l_middle0_RotationInterpolator"
OrientationInterpolator300.key = [0,0.5,1]
OrientationInterpolator300.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator300)
OrientationInterpolator301 = x3d.OrientationInterpolator()
OrientationInterpolator301.DEF = "l_middle1_RotationInterpolator"
OrientationInterpolator301.key = [0,0.5,1]
OrientationInterpolator301.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator301)
OrientationInterpolator302 = x3d.OrientationInterpolator()
OrientationInterpolator302.DEF = "l_middle2_RotationInterpolator"
OrientationInterpolator302.key = [0,0.5,1]
OrientationInterpolator302.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator302)
OrientationInterpolator303 = x3d.OrientationInterpolator()
OrientationInterpolator303.DEF = "l_middle3_RotationInterpolator"
OrientationInterpolator303.key = [0,0.5,1]
OrientationInterpolator303.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator303)
OrientationInterpolator304 = x3d.OrientationInterpolator()
OrientationInterpolator304.DEF = "l_ring0_RotationInterpolator"
OrientationInterpolator304.key = [0,0.5,1]
OrientationInterpolator304.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator304)
OrientationInterpolator305 = x3d.OrientationInterpolator()
OrientationInterpolator305.DEF = "l_ring1_RotationInterpolator"
OrientationInterpolator305.key = [0,0.5,1]
OrientationInterpolator305.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator305)
OrientationInterpolator306 = x3d.OrientationInterpolator()
OrientationInterpolator306.DEF = "l_ring2_RotationInterpolator"
OrientationInterpolator306.key = [0,0.5,1]
OrientationInterpolator306.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator306)
OrientationInterpolator307 = x3d.OrientationInterpolator()
OrientationInterpolator307.DEF = "l_ring3_RotationInterpolator"
OrientationInterpolator307.key = [0,0.5,1]
OrientationInterpolator307.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator307)
OrientationInterpolator308 = x3d.OrientationInterpolator()
OrientationInterpolator308.DEF = "l_pinky0_RotationInterpolator"
OrientationInterpolator308.key = [0,0.5,1]
OrientationInterpolator308.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator308)
OrientationInterpolator309 = x3d.OrientationInterpolator()
OrientationInterpolator309.DEF = "l_pinky1_RotationInterpolator"
OrientationInterpolator309.key = [0,0.5,1]
OrientationInterpolator309.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator309)
OrientationInterpolator310 = x3d.OrientationInterpolator()
OrientationInterpolator310.DEF = "l_pinky2_RotationInterpolator"
OrientationInterpolator310.key = [0,0.5,1]
OrientationInterpolator310.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator310)
OrientationInterpolator311 = x3d.OrientationInterpolator()
OrientationInterpolator311.DEF = "l_pinky3_RotationInterpolator"
OrientationInterpolator311.key = [0,0.5,1]
OrientationInterpolator311.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator311)
OrientationInterpolator312 = x3d.OrientationInterpolator()
OrientationInterpolator312.DEF = "r_sternoclavicular_RotationInterpolator"
OrientationInterpolator312.key = [0,0.5,1]
OrientationInterpolator312.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator312)
OrientationInterpolator313 = x3d.OrientationInterpolator()
OrientationInterpolator313.DEF = "r_acromioclavicular_RotationInterpolator"
OrientationInterpolator313.key = [0,0.5,1]
OrientationInterpolator313.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator313)
OrientationInterpolator314 = x3d.OrientationInterpolator()
OrientationInterpolator314.DEF = "r_shoulder_RotationInterpolator"
OrientationInterpolator314.key = [0,0.5,1]
OrientationInterpolator314.keyValue = [(0, 0, -1, 2.5),(0, 0, -1, 1.5),(0, 0, -1, 1.75)]

Group239.children.append(OrientationInterpolator314)
OrientationInterpolator315 = x3d.OrientationInterpolator()
OrientationInterpolator315.DEF = "r_elbow_RotationInterpolator"
OrientationInterpolator315.key = [0,0.5,1]
OrientationInterpolator315.keyValue = [(-1, 0, 0, 3),(-1, 0, 0, 0.75),(-1, -1, 0, 0.5)]

Group239.children.append(OrientationInterpolator315)
OrientationInterpolator316 = x3d.OrientationInterpolator()
OrientationInterpolator316.DEF = "r_wrist_RotationInterpolator"
OrientationInterpolator316.key = [0,0.5,0.7,1]
OrientationInterpolator316.keyValue = [(0, 1, 0, 0.3),(0, 0, 1, 0),(0, 0, -1, 1),(0, -1, 0, 0.3)]

Group239.children.append(OrientationInterpolator316)
OrientationInterpolator317 = x3d.OrientationInterpolator()
OrientationInterpolator317.DEF = "r_thumb1_RotationInterpolator"
OrientationInterpolator317.key = [0,0.5,1]
OrientationInterpolator317.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator317)
OrientationInterpolator318 = x3d.OrientationInterpolator()
OrientationInterpolator318.DEF = "r_thumb2_RotationInterpolator"
OrientationInterpolator318.key = [0,0.5,1]
OrientationInterpolator318.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator318)
OrientationInterpolator319 = x3d.OrientationInterpolator()
OrientationInterpolator319.DEF = "r_thumb3_RotationInterpolator"
OrientationInterpolator319.key = [0,0.5,1]
OrientationInterpolator319.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator319)
OrientationInterpolator320 = x3d.OrientationInterpolator()
OrientationInterpolator320.DEF = "r_index0_RotationInterpolator"
OrientationInterpolator320.key = [0,0.5,0.75,1]
OrientationInterpolator320.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator320)
OrientationInterpolator321 = x3d.OrientationInterpolator()
OrientationInterpolator321.DEF = "r_index1_RotationInterpolator"
OrientationInterpolator321.key = [0,0.5,0.75,1]
OrientationInterpolator321.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator321)
OrientationInterpolator322 = x3d.OrientationInterpolator()
OrientationInterpolator322.DEF = "r_index2_RotationInterpolator"
OrientationInterpolator322.key = [0,0.5,0.75,1]
OrientationInterpolator322.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator322)
OrientationInterpolator323 = x3d.OrientationInterpolator()
OrientationInterpolator323.DEF = "r_index3_RotationInterpolator"
OrientationInterpolator323.key = [0,0.5,0.75,1]
OrientationInterpolator323.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator323)
OrientationInterpolator324 = x3d.OrientationInterpolator()
OrientationInterpolator324.DEF = "r_middle0_RotationInterpolator"
OrientationInterpolator324.key = [0,0.5,0.75,1]
OrientationInterpolator324.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator324)
OrientationInterpolator325 = x3d.OrientationInterpolator()
OrientationInterpolator325.DEF = "r_middle1_RotationInterpolator"
OrientationInterpolator325.key = [0,0.5,0.75,1]
OrientationInterpolator325.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator325)
OrientationInterpolator326 = x3d.OrientationInterpolator()
OrientationInterpolator326.DEF = "r_middle2_RotationInterpolator"
OrientationInterpolator326.key = [0,0.5,0.75,1]
OrientationInterpolator326.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator326)
OrientationInterpolator327 = x3d.OrientationInterpolator()
OrientationInterpolator327.DEF = "r_middle3_RotationInterpolator"
OrientationInterpolator327.key = [0,0.5,0.75,1]
OrientationInterpolator327.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator327)
OrientationInterpolator328 = x3d.OrientationInterpolator()
OrientationInterpolator328.DEF = "r_ring0_RotationInterpolator"
OrientationInterpolator328.key = [0,0.5,0.75,1]
OrientationInterpolator328.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator328)
OrientationInterpolator329 = x3d.OrientationInterpolator()
OrientationInterpolator329.DEF = "r_ring1_RotationInterpolator"
OrientationInterpolator329.key = [0,0.5,0.75,1]
OrientationInterpolator329.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator329)
OrientationInterpolator330 = x3d.OrientationInterpolator()
OrientationInterpolator330.DEF = "r_ring2_RotationInterpolator"
OrientationInterpolator330.key = [0,0.5,0.75,1]
OrientationInterpolator330.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator330)
OrientationInterpolator331 = x3d.OrientationInterpolator()
OrientationInterpolator331.DEF = "r_ring3_RotationInterpolator"
OrientationInterpolator331.key = [0,0.5,0.75,1]
OrientationInterpolator331.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator331)
OrientationInterpolator332 = x3d.OrientationInterpolator()
OrientationInterpolator332.DEF = "r_pinky0_RotationInterpolator"
OrientationInterpolator332.key = [0,0.5,0.75,1]
OrientationInterpolator332.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator332)
OrientationInterpolator333 = x3d.OrientationInterpolator()
OrientationInterpolator333.DEF = "r_pinky1_RotationInterpolator"
OrientationInterpolator333.key = [0,0.5,0.75,1]
OrientationInterpolator333.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator333)
OrientationInterpolator334 = x3d.OrientationInterpolator()
OrientationInterpolator334.DEF = "r_pinky2_RotationInterpolator"
OrientationInterpolator334.key = [0,0.5,0.75,1]
OrientationInterpolator334.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator334)
OrientationInterpolator335 = x3d.OrientationInterpolator()
OrientationInterpolator335.DEF = "r_pinky3_RotationInterpolator"
OrientationInterpolator335.key = [0,0.5,0.75,1]
OrientationInterpolator335.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group239.children.append(OrientationInterpolator335)

Scene16.children.append(Group239)
Group336 = x3d.Group()
Group336.DEF = "DisplacersAnimationGroup"
ScalarInterpolator337 = x3d.ScalarInterpolator()
ScalarInterpolator337.DEF = "skull_tipInterpolator"
ScalarInterpolator337.key = [0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]
ScalarInterpolator337.keyValue = [0,0,0,0,0.2,0.4,1,0,1,0.4,0]

Group336.children.append(ScalarInterpolator337)

Scene16.children.append(Group336)
Group338 = x3d.Group()
Group338.DEF = "SkinTextureTransformAnimationGroup"
ScalarInterpolator339 = x3d.ScalarInterpolator()
ScalarInterpolator339.DEF = "SkinInterpolator"
ScalarInterpolator339.key = [0,0.2,0.4,0.5,0.6,0.7,0.8,1]
ScalarInterpolator339.keyValue = [0,0,0,0,0,1,2,0]

Group338.children.append(ScalarInterpolator339)

Scene16.children.append(Group338)
Group340 = x3d.Group()
Transform341 = x3d.Transform()
Transform341.DEF = "SBall"
Transform341.translation = [1.750548,3.495979,8.727154]
Transform341.rotation = [-0.700140042014005,0.140028008402801,-0.700140042014005,3]
Transform341.scale = [0.23,0.23,0.23]
Shape342 = x3d.Shape()
Shape342.DEF = "ball_Shape"
Appearance343 = x3d.Appearance()
Appearance343.DEF = "ball_Appearance"
Material344 = x3d.Material()
Material344.DEF = "ball_Material"
Material344.diffuseColor = [0.3,0.3,1]
Material344.emissiveColor = [0.3,0.3,0.33]

Appearance343.material = Material344
ImageTexture345 = x3d.ImageTexture()
ImageTexture345.USE = "JoeSkinImageTexture"

Appearance343.texture = ImageTexture345

Shape342.appearance = Appearance343
IndexedFaceSet346 = x3d.IndexedFaceSet()
IndexedFaceSet346.DEF = "ball_IndexedFaceSet"
IndexedFaceSet346.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate347 = x3d.Coordinate()
Coordinate347.DEF = "Ball_Coordinates"
Coordinate347.point = [(0, 0.4675, 0),(0, 0.4049, -0.2338),(-0.1169, 0.4049, -0.2024),(-0.2024, 0.4049, -0.1169),(-0.2338, 0.4049, 0),(-0.2024, 0.4049, 0.1169),(-0.1169, 0.4049, 0.2024),(0, 0.4049, 0.2338),(0.1169, 0.4049, 0.2024),(0.2024, 0.4049, 0.1169),(0.2338, 0.4049, 0),(0.2024, 0.4049, -0.1169),(0.1169, 0.4049, -0.2024),(0, 0.2338, -0.4049),(-0.2024, 0.2338, -0.3506),(-0.3506, 0.2338, -0.2024),(-0.4049, 0.2338, 0),(-0.3506, 0.2338, 0.2024),(-0.2024, 0.2338, 0.3506),(0, 0.2338, 0.4049),(0.2024, 0.2338, 0.3506),(0.3506, 0.2338, 0.2024),(0.4049, 0.2338, 0),(0.3506, 0.2338, -0.2024),(0.2024, 0.2338, -0.3506),(0, 0, -0.4675),(-0.2338, 0, -0.4049),(-0.4049, 0, -0.2338),(-0.4675, 0, 0),(-0.4049, 0, 0.2338),(-0.2338, 0, 0.4049),(0, 0, 0.4675),(0.2338, 0, 0.4049),(0.4049, 0, 0.2338),(0.4675, 0, 0),(0.4049, 0, -0.2338),(0.2338, 0, -0.4049),(0, -0.2338, -0.4049),(-0.2024, -0.2338, -0.3506),(-0.3506, -0.2338, -0.2024),(-0.4049, -0.2338, 0),(-0.3506, -0.2338, 0.2024),(-0.2024, -0.2338, 0.3506),(0, -0.2338, 0.4049),(0.2024, -0.2338, 0.3506),(0.3506, -0.2338, 0.2024),(0.4049, -0.2338, 0),(0.3506, -0.2338, -0.2024),(0.2024, -0.2338, -0.3506),(0, -0.4049, -0.2338),(-0.1169, -0.4049, -0.2024),(-0.2024, -0.4049, -0.1169),(-0.2338, -0.4049, 0),(-0.2024, -0.4049, 0.1169),(-0.1169, -0.4049, 0.2024),(0, -0.4049, 0.2338),(0.1169, -0.4049, 0.2024),(0.2024, -0.4049, 0.1169),(0.2338, -0.4049, 0),(0.2024, -0.4049, -0.1169),(0.1169, -0.4049, -0.2024),(0, -0.4675, 0)]

IndexedFaceSet346.coord = Coordinate347

Shape342.geometry = IndexedFaceSet346

Transform341.children.append(Shape342)
Viewpoint348 = x3d.Viewpoint()
Viewpoint348.DEF = "ballView_1"
Viewpoint348.description = "Ball View"

Transform341.children.append(Viewpoint348)

Group340.children.append(Transform341)
PositionInterpolator349 = x3d.PositionInterpolator()
PositionInterpolator349.DEF = "ball_TranslationInterpolator"
PositionInterpolator349.key = [0,0.4,0.409,1]
PositionInterpolator349.keyValue = [(-1, 0.4, -1),(0, 0.07, 0),(0.05, 0.06, 0.05),(2, 4, 10)]

Group340.children.append(PositionInterpolator349)
OrientationInterpolator350 = x3d.OrientationInterpolator()
OrientationInterpolator350.DEF = "ball_RotationInterpolator"
OrientationInterpolator350.key = [0,0.4,0.41,0.71,1]
OrientationInterpolator350.keyValue = [(1, 0, 1, 0.25),(-1, 0, -1, 1.35),(-1, 1, -1, 3.35),(-1, 0.2, -1, 3),(-1, 0.2, -1, 3)]

Group340.children.append(OrientationInterpolator350)

Scene16.children.append(Group340)
Group351 = x3d.Group()
Transform352 = x3d.Transform()
Transform352.scale = [0.2,0.2,0.2]
Shape353 = x3d.Shape()
Shape353.USE = "AxisLinesShape"

Transform352.children.append(Shape353)

Group351.children.append(Transform352)
Transform354 = x3d.Transform()
Transform354.DEF = "Circle0"
Transform354.scale = [1.175,1,1.175]
Shape355 = x3d.Shape()
Shape355.DEF = "circle_Shape"
Appearance356 = x3d.Appearance()
Appearance356.DEF = "circle0_Appearance"
Material357 = x3d.Material()
Material357.DEF = "circle0_Material"
Material357.ambientIntensity = 0.9
Material357.diffuseColor = [0.9,0,0.7]
Material357.emissiveColor = [0.425,0.486,1]

Appearance356.material = Material357

Shape355.appearance = Appearance356
IndexedLineSet358 = x3d.IndexedLineSet()
IndexedLineSet358.DEF = "Orbit1"
IndexedLineSet358.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate359 = x3d.Coordinate()
Coordinate359.DEF = "circle_Coordinates"
Coordinate359.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.994522),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet358.coord = Coordinate359

Shape355.geometry = IndexedLineSet358

Transform354.children.append(Shape355)

Group351.children.append(Transform354)
Transform360 = x3d.Transform()
Transform360.DEF = "Circle1"
Transform360.scale = [0.5,1,0.5]
Shape361 = x3d.Shape()
Shape361.DEF = "circle1_Shape"
Appearance362 = x3d.Appearance()
Appearance362.DEF = "circle1_Appearance"
Material363 = x3d.Material()
Material363.DEF = "circle1_Material"
Material363.diffuseColor = [0.9,0,0.7]
Material363.emissiveColor = [0.424956,0.483976,1]

Appearance362.material = Material363

Shape361.appearance = Appearance362
IndexedLineSet364 = x3d.IndexedLineSet()
IndexedLineSet364.USE = "Orbit1"

Shape361.geometry = IndexedLineSet364

Transform360.children.append(Shape361)

Group351.children.append(Transform360)
Transform365 = x3d.Transform()
Transform365.DEF = "Circle2"
Transform365.scale = [0.25,1,0.25]
Shape366 = x3d.Shape()
Shape366.DEF = "circle2_Shape"
Appearance367 = x3d.Appearance()
Appearance367.DEF = "circle2_Appearance"
Material368 = x3d.Material()
Material368.DEF = "circle2_Material"
Material368.diffuseColor = [0.9,0,0.7]
Material368.emissiveColor = [0.424956,0.483976,1]

Appearance367.material = Material368

Shape366.appearance = Appearance367
IndexedLineSet369 = x3d.IndexedLineSet()
IndexedLineSet369.USE = "Orbit1"

Shape366.geometry = IndexedLineSet369

Transform365.children.append(Shape366)

Group351.children.append(Transform365)

Scene16.children.append(Group351)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromNode = "KickTimer"
ROUTE370.fromField = "fraction_changed"
ROUTE370.toNode = "HumanoidRoot_RotationInterpolator"
ROUTE370.toField = "set_fraction"

Scene16.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromNode = "KickTimer"
ROUTE371.fromField = "fraction_changed"
ROUTE371.toNode = "HumanoidRoot_TranslationInterpolator"
ROUTE371.toField = "set_fraction"

Scene16.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromNode = "KickTimer"
ROUTE372.fromField = "fraction_changed"
ROUTE372.toNode = "sacroiliac_RotationInterpolator"
ROUTE372.toField = "set_fraction"

Scene16.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromNode = "KickTimer"
ROUTE373.fromField = "fraction_changed"
ROUTE373.toNode = "l_hip_RotationInterpolator"
ROUTE373.toField = "set_fraction"

Scene16.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromNode = "KickTimer"
ROUTE374.fromField = "fraction_changed"
ROUTE374.toNode = "l_knee_RotationInterpolator"
ROUTE374.toField = "set_fraction"

Scene16.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromNode = "KickTimer"
ROUTE375.fromField = "fraction_changed"
ROUTE375.toNode = "l_ankle_RotationInterpolator"
ROUTE375.toField = "set_fraction"

Scene16.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromNode = "KickTimer"
ROUTE376.fromField = "fraction_changed"
ROUTE376.toNode = "l_subtalar_RotationInterpolator"
ROUTE376.toField = "set_fraction"

Scene16.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromNode = "KickTimer"
ROUTE377.fromField = "fraction_changed"
ROUTE377.toNode = "l_midtarsal_RotationInterpolator"
ROUTE377.toField = "set_fraction"

Scene16.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromNode = "KickTimer"
ROUTE378.fromField = "fraction_changed"
ROUTE378.toNode = "l_metatarsal_RotationInterpolator"
ROUTE378.toField = "set_fraction"

Scene16.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromNode = "KickTimer"
ROUTE379.fromField = "fraction_changed"
ROUTE379.toNode = "r_hip_RotationInterpolator"
ROUTE379.toField = "set_fraction"

Scene16.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromNode = "KickTimer"
ROUTE380.fromField = "fraction_changed"
ROUTE380.toNode = "r_knee_RotationInterpolator"
ROUTE380.toField = "set_fraction"

Scene16.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromNode = "KickTimer"
ROUTE381.fromField = "fraction_changed"
ROUTE381.toNode = "r_ankle_RotationInterpolator"
ROUTE381.toField = "set_fraction"

Scene16.children.append(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.fromNode = "KickTimer"
ROUTE382.fromField = "fraction_changed"
ROUTE382.toNode = "r_subtalar_RotationInterpolator"
ROUTE382.toField = "set_fraction"

Scene16.children.append(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.fromNode = "KickTimer"
ROUTE383.fromField = "fraction_changed"
ROUTE383.toNode = "r_midtarsal_RotationInterpolator"
ROUTE383.toField = "set_fraction"

Scene16.children.append(ROUTE383)
ROUTE384 = x3d.ROUTE()
ROUTE384.fromNode = "KickTimer"
ROUTE384.fromField = "fraction_changed"
ROUTE384.toNode = "r_metatarsal_RotationInterpolator"
ROUTE384.toField = "set_fraction"

Scene16.children.append(ROUTE384)
ROUTE385 = x3d.ROUTE()
ROUTE385.fromNode = "KickTimer"
ROUTE385.fromField = "fraction_changed"
ROUTE385.toNode = "vl5_RotationInterpolator"
ROUTE385.toField = "set_fraction"

Scene16.children.append(ROUTE385)
ROUTE386 = x3d.ROUTE()
ROUTE386.fromNode = "KickTimer"
ROUTE386.fromField = "fraction_changed"
ROUTE386.toNode = "vl4_RotationInterpolator"
ROUTE386.toField = "set_fraction"

Scene16.children.append(ROUTE386)
ROUTE387 = x3d.ROUTE()
ROUTE387.fromNode = "KickTimer"
ROUTE387.fromField = "fraction_changed"
ROUTE387.toNode = "vl3_RotationInterpolator"
ROUTE387.toField = "set_fraction"

Scene16.children.append(ROUTE387)
ROUTE388 = x3d.ROUTE()
ROUTE388.fromNode = "KickTimer"
ROUTE388.fromField = "fraction_changed"
ROUTE388.toNode = "vl2_RotationInterpolator"
ROUTE388.toField = "set_fraction"

Scene16.children.append(ROUTE388)
ROUTE389 = x3d.ROUTE()
ROUTE389.fromNode = "KickTimer"
ROUTE389.fromField = "fraction_changed"
ROUTE389.toNode = "vl1_RotationInterpolator"
ROUTE389.toField = "set_fraction"

Scene16.children.append(ROUTE389)
ROUTE390 = x3d.ROUTE()
ROUTE390.fromNode = "KickTimer"
ROUTE390.fromField = "fraction_changed"
ROUTE390.toNode = "vt12_RotationInterpolator"
ROUTE390.toField = "set_fraction"

Scene16.children.append(ROUTE390)
ROUTE391 = x3d.ROUTE()
ROUTE391.fromNode = "KickTimer"
ROUTE391.fromField = "fraction_changed"
ROUTE391.toNode = "vt11_RotationInterpolator"
ROUTE391.toField = "set_fraction"

Scene16.children.append(ROUTE391)
ROUTE392 = x3d.ROUTE()
ROUTE392.fromNode = "KickTimer"
ROUTE392.fromField = "fraction_changed"
ROUTE392.toNode = "vt10_RotationInterpolator"
ROUTE392.toField = "set_fraction"

Scene16.children.append(ROUTE392)
ROUTE393 = x3d.ROUTE()
ROUTE393.fromNode = "KickTimer"
ROUTE393.fromField = "fraction_changed"
ROUTE393.toNode = "vt9_RotationInterpolator"
ROUTE393.toField = "set_fraction"

Scene16.children.append(ROUTE393)
ROUTE394 = x3d.ROUTE()
ROUTE394.fromNode = "KickTimer"
ROUTE394.fromField = "fraction_changed"
ROUTE394.toNode = "vt8_RotationInterpolator"
ROUTE394.toField = "set_fraction"

Scene16.children.append(ROUTE394)
ROUTE395 = x3d.ROUTE()
ROUTE395.fromNode = "KickTimer"
ROUTE395.fromField = "fraction_changed"
ROUTE395.toNode = "vt7_RotationInterpolator"
ROUTE395.toField = "set_fraction"

Scene16.children.append(ROUTE395)
ROUTE396 = x3d.ROUTE()
ROUTE396.fromNode = "KickTimer"
ROUTE396.fromField = "fraction_changed"
ROUTE396.toNode = "vt6_RotationInterpolator"
ROUTE396.toField = "set_fraction"

Scene16.children.append(ROUTE396)
ROUTE397 = x3d.ROUTE()
ROUTE397.fromNode = "KickTimer"
ROUTE397.fromField = "fraction_changed"
ROUTE397.toNode = "vt5_RotationInterpolator"
ROUTE397.toField = "set_fraction"

Scene16.children.append(ROUTE397)
ROUTE398 = x3d.ROUTE()
ROUTE398.fromNode = "KickTimer"
ROUTE398.fromField = "fraction_changed"
ROUTE398.toNode = "vt4_RotationInterpolator"
ROUTE398.toField = "set_fraction"

Scene16.children.append(ROUTE398)
ROUTE399 = x3d.ROUTE()
ROUTE399.fromNode = "KickTimer"
ROUTE399.fromField = "fraction_changed"
ROUTE399.toNode = "vt3_RotationInterpolator"
ROUTE399.toField = "set_fraction"

Scene16.children.append(ROUTE399)
ROUTE400 = x3d.ROUTE()
ROUTE400.fromNode = "KickTimer"
ROUTE400.fromField = "fraction_changed"
ROUTE400.toNode = "vt2_RotationInterpolator"
ROUTE400.toField = "set_fraction"

Scene16.children.append(ROUTE400)
ROUTE401 = x3d.ROUTE()
ROUTE401.fromNode = "KickTimer"
ROUTE401.fromField = "fraction_changed"
ROUTE401.toNode = "vt1_RotationInterpolator"
ROUTE401.toField = "set_fraction"

Scene16.children.append(ROUTE401)
ROUTE402 = x3d.ROUTE()
ROUTE402.fromNode = "KickTimer"
ROUTE402.fromField = "fraction_changed"
ROUTE402.toNode = "vc7_RotationInterpolator"
ROUTE402.toField = "set_fraction"

Scene16.children.append(ROUTE402)
ROUTE403 = x3d.ROUTE()
ROUTE403.fromNode = "KickTimer"
ROUTE403.fromField = "fraction_changed"
ROUTE403.toNode = "vc6_RotationInterpolator"
ROUTE403.toField = "set_fraction"

Scene16.children.append(ROUTE403)
ROUTE404 = x3d.ROUTE()
ROUTE404.fromNode = "KickTimer"
ROUTE404.fromField = "fraction_changed"
ROUTE404.toNode = "vc5_RotationInterpolator"
ROUTE404.toField = "set_fraction"

Scene16.children.append(ROUTE404)
ROUTE405 = x3d.ROUTE()
ROUTE405.fromNode = "KickTimer"
ROUTE405.fromField = "fraction_changed"
ROUTE405.toNode = "vc4_RotationInterpolator"
ROUTE405.toField = "set_fraction"

Scene16.children.append(ROUTE405)
ROUTE406 = x3d.ROUTE()
ROUTE406.fromNode = "KickTimer"
ROUTE406.fromField = "fraction_changed"
ROUTE406.toNode = "vc3_RotationInterpolator"
ROUTE406.toField = "set_fraction"

Scene16.children.append(ROUTE406)
ROUTE407 = x3d.ROUTE()
ROUTE407.fromNode = "KickTimer"
ROUTE407.fromField = "fraction_changed"
ROUTE407.toNode = "vc2_RotationInterpolator"
ROUTE407.toField = "set_fraction"

Scene16.children.append(ROUTE407)
ROUTE408 = x3d.ROUTE()
ROUTE408.fromNode = "KickTimer"
ROUTE408.fromField = "fraction_changed"
ROUTE408.toNode = "vc1_RotationInterpolator"
ROUTE408.toField = "set_fraction"

Scene16.children.append(ROUTE408)
ROUTE409 = x3d.ROUTE()
ROUTE409.fromNode = "KickTimer"
ROUTE409.fromField = "fraction_changed"
ROUTE409.toNode = "skullbase_RotationInterpolator"
ROUTE409.toField = "set_fraction"

Scene16.children.append(ROUTE409)
ROUTE410 = x3d.ROUTE()
ROUTE410.fromNode = "KickTimer"
ROUTE410.fromField = "fraction_changed"
ROUTE410.toNode = "l_eyelid_joint_RotationInterpolator"
ROUTE410.toField = "set_fraction"

Scene16.children.append(ROUTE410)
ROUTE411 = x3d.ROUTE()
ROUTE411.fromNode = "KickTimer"
ROUTE411.fromField = "fraction_changed"
ROUTE411.toNode = "l_eyeball_joint_RotationInterpolator"
ROUTE411.toField = "set_fraction"

Scene16.children.append(ROUTE411)
ROUTE412 = x3d.ROUTE()
ROUTE412.fromNode = "KickTimer"
ROUTE412.fromField = "fraction_changed"
ROUTE412.toNode = "l_eyebrow_joint_RotationInterpolator"
ROUTE412.toField = "set_fraction"

Scene16.children.append(ROUTE412)
ROUTE413 = x3d.ROUTE()
ROUTE413.fromNode = "KickTimer"
ROUTE413.fromField = "fraction_changed"
ROUTE413.toNode = "r_eyelid_joint_RotationInterpolator"
ROUTE413.toField = "set_fraction"

Scene16.children.append(ROUTE413)
ROUTE414 = x3d.ROUTE()
ROUTE414.fromNode = "KickTimer"
ROUTE414.fromField = "fraction_changed"
ROUTE414.toNode = "r_eyeball_joint_RotationInterpolator"
ROUTE414.toField = "set_fraction"

Scene16.children.append(ROUTE414)
ROUTE415 = x3d.ROUTE()
ROUTE415.fromNode = "KickTimer"
ROUTE415.fromField = "fraction_changed"
ROUTE415.toNode = "r_eyebrow_joint_RotationInterpolator"
ROUTE415.toField = "set_fraction"

Scene16.children.append(ROUTE415)
ROUTE416 = x3d.ROUTE()
ROUTE416.fromNode = "KickTimer"
ROUTE416.fromField = "fraction_changed"
ROUTE416.toNode = "temporomandibular_RotationInterpolator"
ROUTE416.toField = "set_fraction"

Scene16.children.append(ROUTE416)
ROUTE417 = x3d.ROUTE()
ROUTE417.fromNode = "KickTimer"
ROUTE417.fromField = "fraction_changed"
ROUTE417.toNode = "l_sternoclavicular_RotationInterpolator"
ROUTE417.toField = "set_fraction"

Scene16.children.append(ROUTE417)
ROUTE418 = x3d.ROUTE()
ROUTE418.fromNode = "KickTimer"
ROUTE418.fromField = "fraction_changed"
ROUTE418.toNode = "l_acromioclavicular_RotationInterpolator"
ROUTE418.toField = "set_fraction"

Scene16.children.append(ROUTE418)
ROUTE419 = x3d.ROUTE()
ROUTE419.fromNode = "KickTimer"
ROUTE419.fromField = "fraction_changed"
ROUTE419.toNode = "l_shoulder_RotationInterpolator"
ROUTE419.toField = "set_fraction"

Scene16.children.append(ROUTE419)
ROUTE420 = x3d.ROUTE()
ROUTE420.fromNode = "KickTimer"
ROUTE420.fromField = "fraction_changed"
ROUTE420.toNode = "l_elbow_RotationInterpolator"
ROUTE420.toField = "set_fraction"

Scene16.children.append(ROUTE420)
ROUTE421 = x3d.ROUTE()
ROUTE421.fromNode = "KickTimer"
ROUTE421.fromField = "fraction_changed"
ROUTE421.toNode = "l_wrist_RotationInterpolator"
ROUTE421.toField = "set_fraction"

Scene16.children.append(ROUTE421)
ROUTE422 = x3d.ROUTE()
ROUTE422.fromNode = "KickTimer"
ROUTE422.fromField = "fraction_changed"
ROUTE422.toNode = "l_thumb1_RotationInterpolator"
ROUTE422.toField = "set_fraction"

Scene16.children.append(ROUTE422)
ROUTE423 = x3d.ROUTE()
ROUTE423.fromNode = "KickTimer"
ROUTE423.fromField = "fraction_changed"
ROUTE423.toNode = "l_thumb2_RotationInterpolator"
ROUTE423.toField = "set_fraction"

Scene16.children.append(ROUTE423)
ROUTE424 = x3d.ROUTE()
ROUTE424.fromNode = "KickTimer"
ROUTE424.fromField = "fraction_changed"
ROUTE424.toNode = "l_thumb3_RotationInterpolator"
ROUTE424.toField = "set_fraction"

Scene16.children.append(ROUTE424)
ROUTE425 = x3d.ROUTE()
ROUTE425.fromNode = "KickTimer"
ROUTE425.fromField = "fraction_changed"
ROUTE425.toNode = "l_index0_RotationInterpolator"
ROUTE425.toField = "set_fraction"

Scene16.children.append(ROUTE425)
ROUTE426 = x3d.ROUTE()
ROUTE426.fromNode = "KickTimer"
ROUTE426.fromField = "fraction_changed"
ROUTE426.toNode = "l_index1_RotationInterpolator"
ROUTE426.toField = "set_fraction"

Scene16.children.append(ROUTE426)
ROUTE427 = x3d.ROUTE()
ROUTE427.fromNode = "KickTimer"
ROUTE427.fromField = "fraction_changed"
ROUTE427.toNode = "l_index2_RotationInterpolator"
ROUTE427.toField = "set_fraction"

Scene16.children.append(ROUTE427)
ROUTE428 = x3d.ROUTE()
ROUTE428.fromNode = "KickTimer"
ROUTE428.fromField = "fraction_changed"
ROUTE428.toNode = "l_index3_RotationInterpolator"
ROUTE428.toField = "set_fraction"

Scene16.children.append(ROUTE428)
ROUTE429 = x3d.ROUTE()
ROUTE429.fromNode = "KickTimer"
ROUTE429.fromField = "fraction_changed"
ROUTE429.toNode = "l_middle0_RotationInterpolator"
ROUTE429.toField = "set_fraction"

Scene16.children.append(ROUTE429)
ROUTE430 = x3d.ROUTE()
ROUTE430.fromNode = "KickTimer"
ROUTE430.fromField = "fraction_changed"
ROUTE430.toNode = "l_middle1_RotationInterpolator"
ROUTE430.toField = "set_fraction"

Scene16.children.append(ROUTE430)
ROUTE431 = x3d.ROUTE()
ROUTE431.fromNode = "KickTimer"
ROUTE431.fromField = "fraction_changed"
ROUTE431.toNode = "l_middle2_RotationInterpolator"
ROUTE431.toField = "set_fraction"

Scene16.children.append(ROUTE431)
ROUTE432 = x3d.ROUTE()
ROUTE432.fromNode = "KickTimer"
ROUTE432.fromField = "fraction_changed"
ROUTE432.toNode = "l_middle3_RotationInterpolator"
ROUTE432.toField = "set_fraction"

Scene16.children.append(ROUTE432)
ROUTE433 = x3d.ROUTE()
ROUTE433.fromNode = "KickTimer"
ROUTE433.fromField = "fraction_changed"
ROUTE433.toNode = "l_ring0_RotationInterpolator"
ROUTE433.toField = "set_fraction"

Scene16.children.append(ROUTE433)
ROUTE434 = x3d.ROUTE()
ROUTE434.fromNode = "KickTimer"
ROUTE434.fromField = "fraction_changed"
ROUTE434.toNode = "l_ring1_RotationInterpolator"
ROUTE434.toField = "set_fraction"

Scene16.children.append(ROUTE434)
ROUTE435 = x3d.ROUTE()
ROUTE435.fromNode = "KickTimer"
ROUTE435.fromField = "fraction_changed"
ROUTE435.toNode = "l_ring2_RotationInterpolator"
ROUTE435.toField = "set_fraction"

Scene16.children.append(ROUTE435)
ROUTE436 = x3d.ROUTE()
ROUTE436.fromNode = "KickTimer"
ROUTE436.fromField = "fraction_changed"
ROUTE436.toNode = "l_ring3_RotationInterpolator"
ROUTE436.toField = "set_fraction"

Scene16.children.append(ROUTE436)
ROUTE437 = x3d.ROUTE()
ROUTE437.fromNode = "KickTimer"
ROUTE437.fromField = "fraction_changed"
ROUTE437.toNode = "l_pinky0_RotationInterpolator"
ROUTE437.toField = "set_fraction"

Scene16.children.append(ROUTE437)
ROUTE438 = x3d.ROUTE()
ROUTE438.fromNode = "KickTimer"
ROUTE438.fromField = "fraction_changed"
ROUTE438.toNode = "l_pinky1_RotationInterpolator"
ROUTE438.toField = "set_fraction"

Scene16.children.append(ROUTE438)
ROUTE439 = x3d.ROUTE()
ROUTE439.fromNode = "KickTimer"
ROUTE439.fromField = "fraction_changed"
ROUTE439.toNode = "l_pinky2_RotationInterpolator"
ROUTE439.toField = "set_fraction"

Scene16.children.append(ROUTE439)
ROUTE440 = x3d.ROUTE()
ROUTE440.fromNode = "KickTimer"
ROUTE440.fromField = "fraction_changed"
ROUTE440.toNode = "l_pinky3_RotationInterpolator"
ROUTE440.toField = "set_fraction"

Scene16.children.append(ROUTE440)
ROUTE441 = x3d.ROUTE()
ROUTE441.fromNode = "KickTimer"
ROUTE441.fromField = "fraction_changed"
ROUTE441.toNode = "r_sternoclavicular_RotationInterpolator"
ROUTE441.toField = "set_fraction"

Scene16.children.append(ROUTE441)
ROUTE442 = x3d.ROUTE()
ROUTE442.fromNode = "KickTimer"
ROUTE442.fromField = "fraction_changed"
ROUTE442.toNode = "r_acromioclavicular_RotationInterpolator"
ROUTE442.toField = "set_fraction"

Scene16.children.append(ROUTE442)
ROUTE443 = x3d.ROUTE()
ROUTE443.fromNode = "KickTimer"
ROUTE443.fromField = "fraction_changed"
ROUTE443.toNode = "r_shoulder_RotationInterpolator"
ROUTE443.toField = "set_fraction"

Scene16.children.append(ROUTE443)
ROUTE444 = x3d.ROUTE()
ROUTE444.fromNode = "KickTimer"
ROUTE444.fromField = "fraction_changed"
ROUTE444.toNode = "r_elbow_RotationInterpolator"
ROUTE444.toField = "set_fraction"

Scene16.children.append(ROUTE444)
ROUTE445 = x3d.ROUTE()
ROUTE445.fromNode = "KickTimer"
ROUTE445.fromField = "fraction_changed"
ROUTE445.toNode = "r_wrist_RotationInterpolator"
ROUTE445.toField = "set_fraction"

Scene16.children.append(ROUTE445)
ROUTE446 = x3d.ROUTE()
ROUTE446.fromNode = "KickTimer"
ROUTE446.fromField = "fraction_changed"
ROUTE446.toNode = "r_thumb1_RotationInterpolator"
ROUTE446.toField = "set_fraction"

Scene16.children.append(ROUTE446)
ROUTE447 = x3d.ROUTE()
ROUTE447.fromNode = "KickTimer"
ROUTE447.fromField = "fraction_changed"
ROUTE447.toNode = "r_thumb2_RotationInterpolator"
ROUTE447.toField = "set_fraction"

Scene16.children.append(ROUTE447)
ROUTE448 = x3d.ROUTE()
ROUTE448.fromNode = "KickTimer"
ROUTE448.fromField = "fraction_changed"
ROUTE448.toNode = "r_thumb3_RotationInterpolator"
ROUTE448.toField = "set_fraction"

Scene16.children.append(ROUTE448)
ROUTE449 = x3d.ROUTE()
ROUTE449.fromNode = "KickTimer"
ROUTE449.fromField = "fraction_changed"
ROUTE449.toNode = "r_index0_RotationInterpolator"
ROUTE449.toField = "set_fraction"

Scene16.children.append(ROUTE449)
ROUTE450 = x3d.ROUTE()
ROUTE450.fromNode = "KickTimer"
ROUTE450.fromField = "fraction_changed"
ROUTE450.toNode = "r_index1_RotationInterpolator"
ROUTE450.toField = "set_fraction"

Scene16.children.append(ROUTE450)
ROUTE451 = x3d.ROUTE()
ROUTE451.fromNode = "KickTimer"
ROUTE451.fromField = "fraction_changed"
ROUTE451.toNode = "r_index2_RotationInterpolator"
ROUTE451.toField = "set_fraction"

Scene16.children.append(ROUTE451)
ROUTE452 = x3d.ROUTE()
ROUTE452.fromNode = "KickTimer"
ROUTE452.fromField = "fraction_changed"
ROUTE452.toNode = "r_index3_RotationInterpolator"
ROUTE452.toField = "set_fraction"

Scene16.children.append(ROUTE452)
ROUTE453 = x3d.ROUTE()
ROUTE453.fromNode = "KickTimer"
ROUTE453.fromField = "fraction_changed"
ROUTE453.toNode = "r_middle0_RotationInterpolator"
ROUTE453.toField = "set_fraction"

Scene16.children.append(ROUTE453)
ROUTE454 = x3d.ROUTE()
ROUTE454.fromNode = "KickTimer"
ROUTE454.fromField = "fraction_changed"
ROUTE454.toNode = "r_middle1_RotationInterpolator"
ROUTE454.toField = "set_fraction"

Scene16.children.append(ROUTE454)
ROUTE455 = x3d.ROUTE()
ROUTE455.fromNode = "KickTimer"
ROUTE455.fromField = "fraction_changed"
ROUTE455.toNode = "r_middle2_RotationInterpolator"
ROUTE455.toField = "set_fraction"

Scene16.children.append(ROUTE455)
ROUTE456 = x3d.ROUTE()
ROUTE456.fromNode = "KickTimer"
ROUTE456.fromField = "fraction_changed"
ROUTE456.toNode = "r_middle3_RotationInterpolator"
ROUTE456.toField = "set_fraction"

Scene16.children.append(ROUTE456)
ROUTE457 = x3d.ROUTE()
ROUTE457.fromNode = "KickTimer"
ROUTE457.fromField = "fraction_changed"
ROUTE457.toNode = "r_ring0_RotationInterpolator"
ROUTE457.toField = "set_fraction"

Scene16.children.append(ROUTE457)
ROUTE458 = x3d.ROUTE()
ROUTE458.fromNode = "KickTimer"
ROUTE458.fromField = "fraction_changed"
ROUTE458.toNode = "r_ring1_RotationInterpolator"
ROUTE458.toField = "set_fraction"

Scene16.children.append(ROUTE458)
ROUTE459 = x3d.ROUTE()
ROUTE459.fromNode = "KickTimer"
ROUTE459.fromField = "fraction_changed"
ROUTE459.toNode = "r_ring2_RotationInterpolator"
ROUTE459.toField = "set_fraction"

Scene16.children.append(ROUTE459)
ROUTE460 = x3d.ROUTE()
ROUTE460.fromNode = "KickTimer"
ROUTE460.fromField = "fraction_changed"
ROUTE460.toNode = "r_ring3_RotationInterpolator"
ROUTE460.toField = "set_fraction"

Scene16.children.append(ROUTE460)
ROUTE461 = x3d.ROUTE()
ROUTE461.fromNode = "KickTimer"
ROUTE461.fromField = "fraction_changed"
ROUTE461.toNode = "r_pinky0_RotationInterpolator"
ROUTE461.toField = "set_fraction"

Scene16.children.append(ROUTE461)
ROUTE462 = x3d.ROUTE()
ROUTE462.fromNode = "KickTimer"
ROUTE462.fromField = "fraction_changed"
ROUTE462.toNode = "r_pinky1_RotationInterpolator"
ROUTE462.toField = "set_fraction"

Scene16.children.append(ROUTE462)
ROUTE463 = x3d.ROUTE()
ROUTE463.fromNode = "KickTimer"
ROUTE463.fromField = "fraction_changed"
ROUTE463.toNode = "r_pinky2_RotationInterpolator"
ROUTE463.toField = "set_fraction"

Scene16.children.append(ROUTE463)
ROUTE464 = x3d.ROUTE()
ROUTE464.fromNode = "KickTimer"
ROUTE464.fromField = "fraction_changed"
ROUTE464.toNode = "r_pinky3_RotationInterpolator"
ROUTE464.toField = "set_fraction"

Scene16.children.append(ROUTE464)
ROUTE465 = x3d.ROUTE()
ROUTE465.fromNode = "HumanoidRoot_RotationInterpolator"
ROUTE465.fromField = "value_changed"
ROUTE465.toNode = "Joe_humanoid_root"
ROUTE465.toField = "set_rotation"

Scene16.children.append(ROUTE465)
ROUTE466 = x3d.ROUTE()
ROUTE466.fromNode = "HumanoidRoot_TranslationInterpolator"
ROUTE466.fromField = "value_changed"
ROUTE466.toNode = "Joe_humanoid_root"
ROUTE466.toField = "set_translation"

Scene16.children.append(ROUTE466)
ROUTE467 = x3d.ROUTE()
ROUTE467.fromNode = "sacroiliac_RotationInterpolator"
ROUTE467.fromField = "value_changed"
ROUTE467.toNode = "Joe_sacroiliac"
ROUTE467.toField = "set_rotation"

Scene16.children.append(ROUTE467)
ROUTE468 = x3d.ROUTE()
ROUTE468.fromNode = "l_hip_RotationInterpolator"
ROUTE468.fromField = "value_changed"
ROUTE468.toNode = "Joe_l_hip"
ROUTE468.toField = "set_rotation"

Scene16.children.append(ROUTE468)
ROUTE469 = x3d.ROUTE()
ROUTE469.fromNode = "l_knee_RotationInterpolator"
ROUTE469.fromField = "value_changed"
ROUTE469.toNode = "Joe_l_knee"
ROUTE469.toField = "set_rotation"

Scene16.children.append(ROUTE469)
ROUTE470 = x3d.ROUTE()
ROUTE470.fromNode = "l_ankle_RotationInterpolator"
ROUTE470.fromField = "value_changed"
ROUTE470.toNode = "Joe_l_talocrural"
ROUTE470.toField = "set_rotation"

Scene16.children.append(ROUTE470)
ROUTE471 = x3d.ROUTE()
ROUTE471.fromNode = "l_subtalar_RotationInterpolator"
ROUTE471.fromField = "value_changed"
ROUTE471.toNode = "Joe_l_tarsometatarsal_2"
ROUTE471.toField = "set_rotation"

Scene16.children.append(ROUTE471)
ROUTE472 = x3d.ROUTE()
ROUTE472.fromNode = "l_midtarsal_RotationInterpolator"
ROUTE472.fromField = "value_changed"
ROUTE472.toNode = "Joe_l_metatarsophalangeal_2"
ROUTE472.toField = "set_rotation"

Scene16.children.append(ROUTE472)
ROUTE473 = x3d.ROUTE()
ROUTE473.fromNode = "l_metatarsal_RotationInterpolator"
ROUTE473.fromField = "value_changed"
ROUTE473.toNode = "Joe_l_tarsal_distal_interphalangeal_2"
ROUTE473.toField = "set_rotation"

Scene16.children.append(ROUTE473)
ROUTE474 = x3d.ROUTE()
ROUTE474.fromNode = "r_hip_RotationInterpolator"
ROUTE474.fromField = "value_changed"
ROUTE474.toNode = "Joe_r_hip"
ROUTE474.toField = "set_rotation"

Scene16.children.append(ROUTE474)
ROUTE475 = x3d.ROUTE()
ROUTE475.fromNode = "r_knee_RotationInterpolator"
ROUTE475.fromField = "value_changed"
ROUTE475.toNode = "Joe_r_knee"
ROUTE475.toField = "set_rotation"

Scene16.children.append(ROUTE475)
ROUTE476 = x3d.ROUTE()
ROUTE476.fromNode = "r_ankle_RotationInterpolator"
ROUTE476.fromField = "value_changed"
ROUTE476.toNode = "Joe_r_talocrural"
ROUTE476.toField = "set_rotation"

Scene16.children.append(ROUTE476)
ROUTE477 = x3d.ROUTE()
ROUTE477.fromNode = "r_subtalar_RotationInterpolator"
ROUTE477.fromField = "value_changed"
ROUTE477.toNode = "Joe_r_tarsometatarsal_2"
ROUTE477.toField = "set_rotation"

Scene16.children.append(ROUTE477)
ROUTE478 = x3d.ROUTE()
ROUTE478.fromNode = "r_midtarsal_RotationInterpolator"
ROUTE478.fromField = "value_changed"
ROUTE478.toNode = "Joe_r_metatarsophalangeal_2"
ROUTE478.toField = "set_rotation"

Scene16.children.append(ROUTE478)
ROUTE479 = x3d.ROUTE()
ROUTE479.fromNode = "r_metatarsal_RotationInterpolator"
ROUTE479.fromField = "value_changed"
ROUTE479.toNode = "Joe_r_tarsal_distal_interphalangeal_2"
ROUTE479.toField = "set_rotation"

Scene16.children.append(ROUTE479)
ROUTE480 = x3d.ROUTE()
ROUTE480.fromNode = "vl5_RotationInterpolator"
ROUTE480.fromField = "value_changed"
ROUTE480.toNode = "Joe_vl5"
ROUTE480.toField = "set_rotation"

Scene16.children.append(ROUTE480)
ROUTE481 = x3d.ROUTE()
ROUTE481.fromNode = "vl4_RotationInterpolator"
ROUTE481.fromField = "value_changed"
ROUTE481.toNode = "Joe_vl4"
ROUTE481.toField = "set_rotation"

Scene16.children.append(ROUTE481)
ROUTE482 = x3d.ROUTE()
ROUTE482.fromNode = "vl3_RotationInterpolator"
ROUTE482.fromField = "value_changed"
ROUTE482.toNode = "Joe_vl3"
ROUTE482.toField = "set_rotation"

Scene16.children.append(ROUTE482)
ROUTE483 = x3d.ROUTE()
ROUTE483.fromNode = "vl2_RotationInterpolator"
ROUTE483.fromField = "value_changed"
ROUTE483.toNode = "Joe_vl2"
ROUTE483.toField = "set_rotation"

Scene16.children.append(ROUTE483)
ROUTE484 = x3d.ROUTE()
ROUTE484.fromNode = "vl1_RotationInterpolator"
ROUTE484.fromField = "value_changed"
ROUTE484.toNode = "Joe_vl1"
ROUTE484.toField = "set_rotation"

Scene16.children.append(ROUTE484)
ROUTE485 = x3d.ROUTE()
ROUTE485.fromNode = "vt12_RotationInterpolator"
ROUTE485.fromField = "value_changed"
ROUTE485.toNode = "Joe_vt12"
ROUTE485.toField = "set_rotation"

Scene16.children.append(ROUTE485)
ROUTE486 = x3d.ROUTE()
ROUTE486.fromNode = "vt11_RotationInterpolator"
ROUTE486.fromField = "value_changed"
ROUTE486.toNode = "Joe_vt11"
ROUTE486.toField = "set_rotation"

Scene16.children.append(ROUTE486)
ROUTE487 = x3d.ROUTE()
ROUTE487.fromNode = "vt10_RotationInterpolator"
ROUTE487.fromField = "value_changed"
ROUTE487.toNode = "Joe_vt10"
ROUTE487.toField = "set_rotation"

Scene16.children.append(ROUTE487)
ROUTE488 = x3d.ROUTE()
ROUTE488.fromNode = "vt9_RotationInterpolator"
ROUTE488.fromField = "value_changed"
ROUTE488.toNode = "Joe_vt9"
ROUTE488.toField = "set_rotation"

Scene16.children.append(ROUTE488)
ROUTE489 = x3d.ROUTE()
ROUTE489.fromNode = "vt8_RotationInterpolator"
ROUTE489.fromField = "value_changed"
ROUTE489.toNode = "Joe_vt8"
ROUTE489.toField = "set_rotation"

Scene16.children.append(ROUTE489)
ROUTE490 = x3d.ROUTE()
ROUTE490.fromNode = "vt7_RotationInterpolator"
ROUTE490.fromField = "value_changed"
ROUTE490.toNode = "Joe_vt7"
ROUTE490.toField = "set_rotation"

Scene16.children.append(ROUTE490)
ROUTE491 = x3d.ROUTE()
ROUTE491.fromNode = "vt6_RotationInterpolator"
ROUTE491.fromField = "value_changed"
ROUTE491.toNode = "Joe_vt6"
ROUTE491.toField = "set_rotation"

Scene16.children.append(ROUTE491)
ROUTE492 = x3d.ROUTE()
ROUTE492.fromNode = "vt5_RotationInterpolator"
ROUTE492.fromField = "value_changed"
ROUTE492.toNode = "Joe_vt5"
ROUTE492.toField = "set_rotation"

Scene16.children.append(ROUTE492)
ROUTE493 = x3d.ROUTE()
ROUTE493.fromNode = "vt4_RotationInterpolator"
ROUTE493.fromField = "value_changed"
ROUTE493.toNode = "Joe_vt4"
ROUTE493.toField = "set_rotation"

Scene16.children.append(ROUTE493)
ROUTE494 = x3d.ROUTE()
ROUTE494.fromNode = "vt3_RotationInterpolator"
ROUTE494.fromField = "value_changed"
ROUTE494.toNode = "Joe_vt3"
ROUTE494.toField = "set_rotation"

Scene16.children.append(ROUTE494)
ROUTE495 = x3d.ROUTE()
ROUTE495.fromNode = "vt2_RotationInterpolator"
ROUTE495.fromField = "value_changed"
ROUTE495.toNode = "Joe_vt2"
ROUTE495.toField = "set_rotation"

Scene16.children.append(ROUTE495)
ROUTE496 = x3d.ROUTE()
ROUTE496.fromNode = "vt1_RotationInterpolator"
ROUTE496.fromField = "value_changed"
ROUTE496.toNode = "Joe_vt1"
ROUTE496.toField = "set_rotation"

Scene16.children.append(ROUTE496)
ROUTE497 = x3d.ROUTE()
ROUTE497.fromNode = "vc7_RotationInterpolator"
ROUTE497.fromField = "value_changed"
ROUTE497.toNode = "Joe_vc7"
ROUTE497.toField = "set_rotation"

Scene16.children.append(ROUTE497)
ROUTE498 = x3d.ROUTE()
ROUTE498.fromNode = "vc6_RotationInterpolator"
ROUTE498.fromField = "value_changed"
ROUTE498.toNode = "Joe_vc6"
ROUTE498.toField = "set_rotation"

Scene16.children.append(ROUTE498)
ROUTE499 = x3d.ROUTE()
ROUTE499.fromNode = "vc5_RotationInterpolator"
ROUTE499.fromField = "value_changed"
ROUTE499.toNode = "Joe_vc5"
ROUTE499.toField = "set_rotation"

Scene16.children.append(ROUTE499)
ROUTE500 = x3d.ROUTE()
ROUTE500.fromNode = "vc4_RotationInterpolator"
ROUTE500.fromField = "value_changed"
ROUTE500.toNode = "Joe_vc4"
ROUTE500.toField = "set_rotation"

Scene16.children.append(ROUTE500)
ROUTE501 = x3d.ROUTE()
ROUTE501.fromNode = "vc3_RotationInterpolator"
ROUTE501.fromField = "value_changed"
ROUTE501.toNode = "Joe_vc3"
ROUTE501.toField = "set_rotation"

Scene16.children.append(ROUTE501)
ROUTE502 = x3d.ROUTE()
ROUTE502.fromNode = "vc2_RotationInterpolator"
ROUTE502.fromField = "value_changed"
ROUTE502.toNode = "Joe_vc2"
ROUTE502.toField = "set_rotation"

Scene16.children.append(ROUTE502)
ROUTE503 = x3d.ROUTE()
ROUTE503.fromNode = "vc1_RotationInterpolator"
ROUTE503.fromField = "value_changed"
ROUTE503.toNode = "Joe_vc1"
ROUTE503.toField = "set_rotation"

Scene16.children.append(ROUTE503)
ROUTE504 = x3d.ROUTE()
ROUTE504.fromNode = "skullbase_RotationInterpolator"
ROUTE504.fromField = "value_changed"
ROUTE504.toNode = "Joe_skullbase"
ROUTE504.toField = "set_rotation"

Scene16.children.append(ROUTE504)
ROUTE505 = x3d.ROUTE()
ROUTE505.fromNode = "l_eyelid_joint_RotationInterpolator"
ROUTE505.fromField = "value_changed"
ROUTE505.toNode = "Joe_l_eyelid_joint"
ROUTE505.toField = "set_rotation"

Scene16.children.append(ROUTE505)
ROUTE506 = x3d.ROUTE()
ROUTE506.fromNode = "l_eyeball_joint_RotationInterpolator"
ROUTE506.fromField = "value_changed"
ROUTE506.toNode = "Joe_l_eyeball_joint"
ROUTE506.toField = "set_rotation"

Scene16.children.append(ROUTE506)
ROUTE507 = x3d.ROUTE()
ROUTE507.fromNode = "l_eyebrow_joint_RotationInterpolator"
ROUTE507.fromField = "value_changed"
ROUTE507.toNode = "Joe_l_eyebrow_joint"
ROUTE507.toField = "set_rotation"

Scene16.children.append(ROUTE507)
ROUTE508 = x3d.ROUTE()
ROUTE508.fromNode = "r_eyelid_joint_RotationInterpolator"
ROUTE508.fromField = "value_changed"
ROUTE508.toNode = "Joe_r_eyelid_joint"
ROUTE508.toField = "set_rotation"

Scene16.children.append(ROUTE508)
ROUTE509 = x3d.ROUTE()
ROUTE509.fromNode = "r_eyeball_joint_RotationInterpolator"
ROUTE509.fromField = "value_changed"
ROUTE509.toNode = "Joe_r_eyeball_joint"
ROUTE509.toField = "set_rotation"

Scene16.children.append(ROUTE509)
ROUTE510 = x3d.ROUTE()
ROUTE510.fromNode = "r_eyebrow_joint_RotationInterpolator"
ROUTE510.fromField = "value_changed"
ROUTE510.toNode = "Joe_r_eyebrow_joint"
ROUTE510.toField = "set_rotation"

Scene16.children.append(ROUTE510)
ROUTE511 = x3d.ROUTE()
ROUTE511.fromNode = "temporomandibular_RotationInterpolator"
ROUTE511.fromField = "value_changed"
ROUTE511.toNode = "Joe_temporomandibular"
ROUTE511.toField = "set_rotation"

Scene16.children.append(ROUTE511)
ROUTE512 = x3d.ROUTE()
ROUTE512.fromNode = "l_sternoclavicular_RotationInterpolator"
ROUTE512.fromField = "value_changed"
ROUTE512.toNode = "Joe_l_sternoclavicular"
ROUTE512.toField = "set_rotation"

Scene16.children.append(ROUTE512)
ROUTE513 = x3d.ROUTE()
ROUTE513.fromNode = "l_acromioclavicular_RotationInterpolator"
ROUTE513.fromField = "value_changed"
ROUTE513.toNode = "Joe_l_acromioclavicular"
ROUTE513.toField = "set_rotation"

Scene16.children.append(ROUTE513)
ROUTE514 = x3d.ROUTE()
ROUTE514.fromNode = "l_shoulder_RotationInterpolator"
ROUTE514.fromField = "value_changed"
ROUTE514.toNode = "Joe_l_shoulder"
ROUTE514.toField = "set_rotation"

Scene16.children.append(ROUTE514)
ROUTE515 = x3d.ROUTE()
ROUTE515.fromNode = "l_elbow_RotationInterpolator"
ROUTE515.fromField = "value_changed"
ROUTE515.toNode = "Joe_l_elbow"
ROUTE515.toField = "set_rotation"

Scene16.children.append(ROUTE515)
ROUTE516 = x3d.ROUTE()
ROUTE516.fromNode = "l_wrist_RotationInterpolator"
ROUTE516.fromField = "value_changed"
ROUTE516.toNode = "Joe_l_radiocarpal"
ROUTE516.toField = "set_rotation"

Scene16.children.append(ROUTE516)
ROUTE517 = x3d.ROUTE()
ROUTE517.fromNode = "l_thumb1_RotationInterpolator"
ROUTE517.fromField = "value_changed"
ROUTE517.toNode = "Joe_l_carpometacarpal_1"
ROUTE517.toField = "set_rotation"

Scene16.children.append(ROUTE517)
ROUTE518 = x3d.ROUTE()
ROUTE518.fromNode = "l_thumb2_RotationInterpolator"
ROUTE518.fromField = "value_changed"
ROUTE518.toNode = "Joe_l_metacarpophalangeal_1"
ROUTE518.toField = "set_rotation"

Scene16.children.append(ROUTE518)
ROUTE519 = x3d.ROUTE()
ROUTE519.fromNode = "l_thumb3_RotationInterpolator"
ROUTE519.fromField = "value_changed"
ROUTE519.toNode = "Joe_l_carpal_interphalangeal_1"
ROUTE519.toField = "set_rotation"

Scene16.children.append(ROUTE519)
ROUTE520 = x3d.ROUTE()
ROUTE520.fromNode = "l_index0_RotationInterpolator"
ROUTE520.fromField = "value_changed"
ROUTE520.toNode = "Joe_l_carpometacarpal_2"
ROUTE520.toField = "set_rotation"

Scene16.children.append(ROUTE520)
ROUTE521 = x3d.ROUTE()
ROUTE521.fromNode = "l_index1_RotationInterpolator"
ROUTE521.fromField = "value_changed"
ROUTE521.toNode = "Joe_l_metacarpophalangeal_2"
ROUTE521.toField = "set_rotation"

Scene16.children.append(ROUTE521)
ROUTE522 = x3d.ROUTE()
ROUTE522.fromNode = "l_index2_RotationInterpolator"
ROUTE522.fromField = "value_changed"
ROUTE522.toNode = "Joe_l_carpal_proximal_interphalangeal_2"
ROUTE522.toField = "set_rotation"

Scene16.children.append(ROUTE522)
ROUTE523 = x3d.ROUTE()
ROUTE523.fromNode = "l_index3_RotationInterpolator"
ROUTE523.fromField = "value_changed"
ROUTE523.toNode = "Joe_l_carpal_distal_interphalangeal_2"
ROUTE523.toField = "set_rotation"

Scene16.children.append(ROUTE523)
ROUTE524 = x3d.ROUTE()
ROUTE524.fromNode = "l_middle0_RotationInterpolator"
ROUTE524.fromField = "value_changed"
ROUTE524.toNode = "Joe_l_carpometacarpal_3"
ROUTE524.toField = "set_rotation"

Scene16.children.append(ROUTE524)
ROUTE525 = x3d.ROUTE()
ROUTE525.fromNode = "l_middle1_RotationInterpolator"
ROUTE525.fromField = "value_changed"
ROUTE525.toNode = "Joe_l_metacarpophalangeal_3"
ROUTE525.toField = "set_rotation"

Scene16.children.append(ROUTE525)
ROUTE526 = x3d.ROUTE()
ROUTE526.fromNode = "l_middle2_RotationInterpolator"
ROUTE526.fromField = "value_changed"
ROUTE526.toNode = "Joe_l_carpal_proximal_interphalangeal_3"
ROUTE526.toField = "set_rotation"

Scene16.children.append(ROUTE526)
ROUTE527 = x3d.ROUTE()
ROUTE527.fromNode = "l_middle3_RotationInterpolator"
ROUTE527.fromField = "value_changed"
ROUTE527.toNode = "Joe_l_carpal_distal_interphalangeal_3"
ROUTE527.toField = "set_rotation"

Scene16.children.append(ROUTE527)
ROUTE528 = x3d.ROUTE()
ROUTE528.fromNode = "l_ring0_RotationInterpolator"
ROUTE528.fromField = "value_changed"
ROUTE528.toNode = "Joe_l_carpometacarpal_4"
ROUTE528.toField = "set_rotation"

Scene16.children.append(ROUTE528)
ROUTE529 = x3d.ROUTE()
ROUTE529.fromNode = "l_ring1_RotationInterpolator"
ROUTE529.fromField = "value_changed"
ROUTE529.toNode = "Joe_l_metacarpophalangeal_4"
ROUTE529.toField = "set_rotation"

Scene16.children.append(ROUTE529)
ROUTE530 = x3d.ROUTE()
ROUTE530.fromNode = "l_ring2_RotationInterpolator"
ROUTE530.fromField = "value_changed"
ROUTE530.toNode = "Joe_l_carpal_proximal_interphalangeal_4"
ROUTE530.toField = "set_rotation"

Scene16.children.append(ROUTE530)
ROUTE531 = x3d.ROUTE()
ROUTE531.fromNode = "l_ring3_RotationInterpolator"
ROUTE531.fromField = "value_changed"
ROUTE531.toNode = "Joe_l_carpal_distal_interphalangeal_4"
ROUTE531.toField = "set_rotation"

Scene16.children.append(ROUTE531)
ROUTE532 = x3d.ROUTE()
ROUTE532.fromNode = "l_pinky0_RotationInterpolator"
ROUTE532.fromField = "value_changed"
ROUTE532.toNode = "Joe_l_carpometacarpal_5"
ROUTE532.toField = "set_rotation"

Scene16.children.append(ROUTE532)
ROUTE533 = x3d.ROUTE()
ROUTE533.fromNode = "l_pinky1_RotationInterpolator"
ROUTE533.fromField = "value_changed"
ROUTE533.toNode = "Joe_l_metacarpophalangeal_5"
ROUTE533.toField = "set_rotation"

Scene16.children.append(ROUTE533)
ROUTE534 = x3d.ROUTE()
ROUTE534.fromNode = "l_pinky2_RotationInterpolator"
ROUTE534.fromField = "value_changed"
ROUTE534.toNode = "Joe_l_carpal_proximal_interphalangeal_5"
ROUTE534.toField = "set_rotation"

Scene16.children.append(ROUTE534)
ROUTE535 = x3d.ROUTE()
ROUTE535.fromNode = "l_pinky3_RotationInterpolator"
ROUTE535.fromField = "value_changed"
ROUTE535.toNode = "Joe_l_carpal_distal_interphalangeal_5"
ROUTE535.toField = "set_rotation"

Scene16.children.append(ROUTE535)
ROUTE536 = x3d.ROUTE()
ROUTE536.fromNode = "r_sternoclavicular_RotationInterpolator"
ROUTE536.fromField = "value_changed"
ROUTE536.toNode = "Joe_r_sternoclavicular"
ROUTE536.toField = "set_rotation"

Scene16.children.append(ROUTE536)
ROUTE537 = x3d.ROUTE()
ROUTE537.fromNode = "r_acromioclavicular_RotationInterpolator"
ROUTE537.fromField = "value_changed"
ROUTE537.toNode = "Joe_r_acromioclavicular"
ROUTE537.toField = "set_rotation"

Scene16.children.append(ROUTE537)
ROUTE538 = x3d.ROUTE()
ROUTE538.fromNode = "r_shoulder_RotationInterpolator"
ROUTE538.fromField = "value_changed"
ROUTE538.toNode = "Joe_r_shoulder"
ROUTE538.toField = "set_rotation"

Scene16.children.append(ROUTE538)
ROUTE539 = x3d.ROUTE()
ROUTE539.fromNode = "r_elbow_RotationInterpolator"
ROUTE539.fromField = "value_changed"
ROUTE539.toNode = "Joe_r_elbow"
ROUTE539.toField = "set_rotation"

Scene16.children.append(ROUTE539)
ROUTE540 = x3d.ROUTE()
ROUTE540.fromNode = "r_wrist_RotationInterpolator"
ROUTE540.fromField = "value_changed"
ROUTE540.toNode = "Joe_r_radiocarpal"
ROUTE540.toField = "set_rotation"

Scene16.children.append(ROUTE540)
ROUTE541 = x3d.ROUTE()
ROUTE541.fromNode = "r_thumb1_RotationInterpolator"
ROUTE541.fromField = "value_changed"
ROUTE541.toNode = "Joe_r_carpometacarpal_1"
ROUTE541.toField = "set_rotation"

Scene16.children.append(ROUTE541)
ROUTE542 = x3d.ROUTE()
ROUTE542.fromNode = "r_thumb2_RotationInterpolator"
ROUTE542.fromField = "value_changed"
ROUTE542.toNode = "Joe_r_metacarpophalangeal_1"
ROUTE542.toField = "set_rotation"

Scene16.children.append(ROUTE542)
ROUTE543 = x3d.ROUTE()
ROUTE543.fromNode = "r_thumb3_RotationInterpolator"
ROUTE543.fromField = "value_changed"
ROUTE543.toNode = "Joe_r_carpal_interphalangeal_1"
ROUTE543.toField = "set_rotation"

Scene16.children.append(ROUTE543)
ROUTE544 = x3d.ROUTE()
ROUTE544.fromNode = "r_index0_RotationInterpolator"
ROUTE544.fromField = "value_changed"
ROUTE544.toNode = "Joe_r_carpometacarpal_2"
ROUTE544.toField = "set_rotation"

Scene16.children.append(ROUTE544)
ROUTE545 = x3d.ROUTE()
ROUTE545.fromNode = "r_index1_RotationInterpolator"
ROUTE545.fromField = "value_changed"
ROUTE545.toNode = "Joe_r_metacarpophalangeal_2"
ROUTE545.toField = "set_rotation"

Scene16.children.append(ROUTE545)
ROUTE546 = x3d.ROUTE()
ROUTE546.fromNode = "r_index2_RotationInterpolator"
ROUTE546.fromField = "value_changed"
ROUTE546.toNode = "Joe_r_carpal_proximal_interphalangeal_2"
ROUTE546.toField = "set_rotation"

Scene16.children.append(ROUTE546)
ROUTE547 = x3d.ROUTE()
ROUTE547.fromNode = "r_index3_RotationInterpolator"
ROUTE547.fromField = "value_changed"
ROUTE547.toNode = "Joe_r_carpal_distal_interphalangeal_2"
ROUTE547.toField = "set_rotation"

Scene16.children.append(ROUTE547)
ROUTE548 = x3d.ROUTE()
ROUTE548.fromNode = "r_middle0_RotationInterpolator"
ROUTE548.fromField = "value_changed"
ROUTE548.toNode = "Joe_r_carpometacarpal_3"
ROUTE548.toField = "set_rotation"

Scene16.children.append(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.fromNode = "r_middle1_RotationInterpolator"
ROUTE549.fromField = "value_changed"
ROUTE549.toNode = "Joe_r_metacarpophalangeal_3"
ROUTE549.toField = "set_rotation"

Scene16.children.append(ROUTE549)
ROUTE550 = x3d.ROUTE()
ROUTE550.fromNode = "r_middle2_RotationInterpolator"
ROUTE550.fromField = "value_changed"
ROUTE550.toNode = "Joe_r_carpal_proximal_interphalangeal_3"
ROUTE550.toField = "set_rotation"

Scene16.children.append(ROUTE550)
ROUTE551 = x3d.ROUTE()
ROUTE551.fromNode = "r_middle3_RotationInterpolator"
ROUTE551.fromField = "value_changed"
ROUTE551.toNode = "Joe_r_carpal_distal_interphalangeal_3"
ROUTE551.toField = "set_rotation"

Scene16.children.append(ROUTE551)
ROUTE552 = x3d.ROUTE()
ROUTE552.fromNode = "r_ring0_RotationInterpolator"
ROUTE552.fromField = "value_changed"
ROUTE552.toNode = "Joe_r_carpometacarpal_4"
ROUTE552.toField = "set_rotation"

Scene16.children.append(ROUTE552)
ROUTE553 = x3d.ROUTE()
ROUTE553.fromNode = "r_ring1_RotationInterpolator"
ROUTE553.fromField = "value_changed"
ROUTE553.toNode = "Joe_r_metacarpophalangeal_4"
ROUTE553.toField = "set_rotation"

Scene16.children.append(ROUTE553)
ROUTE554 = x3d.ROUTE()
ROUTE554.fromNode = "r_ring2_RotationInterpolator"
ROUTE554.fromField = "value_changed"
ROUTE554.toNode = "Joe_r_carpal_proximal_interphalangeal_4"
ROUTE554.toField = "set_rotation"

Scene16.children.append(ROUTE554)
ROUTE555 = x3d.ROUTE()
ROUTE555.fromNode = "r_ring3_RotationInterpolator"
ROUTE555.fromField = "value_changed"
ROUTE555.toNode = "Joe_r_carpal_distal_interphalangeal_4"
ROUTE555.toField = "set_rotation"

Scene16.children.append(ROUTE555)
ROUTE556 = x3d.ROUTE()
ROUTE556.fromNode = "r_pinky0_RotationInterpolator"
ROUTE556.fromField = "value_changed"
ROUTE556.toNode = "Joe_r_carpometacarpal_5"
ROUTE556.toField = "set_rotation"

Scene16.children.append(ROUTE556)
ROUTE557 = x3d.ROUTE()
ROUTE557.fromNode = "r_pinky1_RotationInterpolator"
ROUTE557.fromField = "value_changed"
ROUTE557.toNode = "Joe_r_metacarpophalangeal_5"
ROUTE557.toField = "set_rotation"

Scene16.children.append(ROUTE557)
ROUTE558 = x3d.ROUTE()
ROUTE558.fromNode = "r_pinky2_RotationInterpolator"
ROUTE558.fromField = "value_changed"
ROUTE558.toNode = "Joe_r_carpal_proximal_interphalangeal_5"
ROUTE558.toField = "set_rotation"

Scene16.children.append(ROUTE558)
ROUTE559 = x3d.ROUTE()
ROUTE559.fromNode = "r_pinky3_RotationInterpolator"
ROUTE559.fromField = "value_changed"
ROUTE559.toNode = "Joe_r_carpal_distal_interphalangeal_5"
ROUTE559.toField = "set_rotation"

Scene16.children.append(ROUTE559)
ROUTE560 = x3d.ROUTE()
ROUTE560.fromNode = "KickTimer"
ROUTE560.fromField = "fraction_changed"
ROUTE560.toNode = "skull_tipInterpolator"
ROUTE560.toField = "set_fraction"

Scene16.children.append(ROUTE560)
ROUTE561 = x3d.ROUTE()
ROUTE561.fromNode = "skull_tipInterpolator"
ROUTE561.fromField = "value_changed"
ROUTE561.toNode = "Joe_skull_tip_raiser_action"
ROUTE561.toField = "set_weight"

Scene16.children.append(ROUTE561)
ROUTE562 = x3d.ROUTE()
ROUTE562.fromNode = "KickTimer"
ROUTE562.fromField = "fraction_changed"
ROUTE562.toNode = "SkinInterpolator"
ROUTE562.toField = "set_fraction"

Scene16.children.append(ROUTE562)
ROUTE563 = x3d.ROUTE()
ROUTE563.fromNode = "SkinInterpolator"
ROUTE563.fromField = "value_changed"
ROUTE563.toNode = "KickTextureTransform"
ROUTE563.toField = "set_rotation"

Scene16.children.append(ROUTE563)
ROUTE564 = x3d.ROUTE()
ROUTE564.fromNode = "KickTimer"
ROUTE564.fromField = "fraction_changed"
ROUTE564.toNode = "ball_TranslationInterpolator"
ROUTE564.toField = "set_fraction"

Scene16.children.append(ROUTE564)
ROUTE565 = x3d.ROUTE()
ROUTE565.fromNode = "ball_TranslationInterpolator"
ROUTE565.fromField = "value_changed"
ROUTE565.toNode = "SBall"
ROUTE565.toField = "set_translation"

Scene16.children.append(ROUTE565)
ROUTE566 = x3d.ROUTE()
ROUTE566.fromNode = "KickTimer"
ROUTE566.fromField = "fraction_changed"
ROUTE566.toNode = "ball_RotationInterpolator"
ROUTE566.toField = "set_fraction"

Scene16.children.append(ROUTE566)
ROUTE567 = x3d.ROUTE()
ROUTE567.fromNode = "ball_RotationInterpolator"
ROUTE567.fromField = "value_changed"
ROUTE567.toNode = "SBall"
ROUTE567.toField = "set_rotation"

Scene16.children.append(ROUTE567)

X3D0.Scene = Scene16
f = open("../data/JoeKick.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeKick.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeKick.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

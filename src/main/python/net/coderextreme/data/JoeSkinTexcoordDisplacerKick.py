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
meta3.content = "JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "15 January 2004"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "12 January 2017"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "27 January 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "creator"
meta9.content = "Joe D Williams"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "translators"
meta10.content = "Roy Walmsley and Don Brutzman"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "info"
meta11.content = "Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "info"
meta12.content = "translated from .x3dv to .xml for web3d archive"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "TODO"
meta13.content = "Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "info"
meta14.content = "modified to correct root and vc7 hierarchies"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "BS studio translation from .x3dv by Joe using BS Contact"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "license"
meta18.content = "../license.html"

head1.children.append(meta18)

X3D0.head = head1
Scene19 = x3d.Scene()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.info = ["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]
WorldInfo20.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"

Scene19.children.append(WorldInfo20)
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.DEF = "Start_NavigationInfo"
NavigationInfo21.headlight = False
NavigationInfo21.speed = 2.5

Scene19.children.append(NavigationInfo21)
Background22 = x3d.Background()
Background22.DEF = "blue_Background"

Scene19.children.append(Background22)
SpotLight23 = x3d.SpotLight()
SpotLight23.DEF = "light1"
SpotLight23.ambientIntensity = 0.7
SpotLight23.beamWidth = 1.5
SpotLight23.color = [0.8,0.8,1]
SpotLight23.cutOffAngle = 0.6
SpotLight23.direction = [0,0,0]
SpotLight23.location = [0,3,3]
SpotLight23.radius = 10

Scene19.children.append(SpotLight23)
PointLight24 = x3d.PointLight()
PointLight24.DEF = "light2"
PointLight24.ambientIntensity = 0.7
PointLight24.color = [0.8,0.8,1]
PointLight24.location = [0,10,-7]

Scene19.children.append(PointLight24)
"""External from the Humanoid viewpoints"""
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.DEF = "Scene_InclinedView"
Viewpoint25.centerOfRotation = [0,0.85,0]
Viewpoint25.description = "Scene_Inclined View"
Viewpoint25.orientation = [-0.113,0.993,0.0347,0.671]
Viewpoint25.position = [1.62,1.05,3.06]

Scene19.children.append(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.DEF = "Scene_FrontView"
Viewpoint26.centerOfRotation = [0,0.8,0]
Viewpoint26.description = "Scene Front View"
Viewpoint26.position = [0,0.8,2.58]

Scene19.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.DEF = "Scene_SideView"
Viewpoint27.centerOfRotation = [0,0.8,0]
Viewpoint27.description = "Scene Side View"
Viewpoint27.orientation = [0,1,0,1.5708]
Viewpoint27.position = [2.6,0.5,0]

Scene19.children.append(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.DEF = "Scene_BackView"
Viewpoint28.centerOfRotation = [0,1.5,0]
Viewpoint28.description = "Scene Back View"
Viewpoint28.orientation = [0,1,0,3.14]
Viewpoint28.position = [0,2.5,-3]

Scene19.children.append(Viewpoint28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.DEF = "Scene_TopView"
Viewpoint29.centerOfRotation = [0,1.5,0]
Viewpoint29.description = "Scene Top View"
Viewpoint29.orientation = [1,0,0,-1.5708]
Viewpoint29.position = [0,3.5,0]

Scene19.children.append(Viewpoint29)
Group30 = x3d.Group()
Group30.DEF = "Joe_Humanoid"
HAnimHumanoid31 = x3d.HAnimHumanoid()
HAnimHumanoid31.name = "Human"
HAnimHumanoid31.DEF = "Joe_Human"
HAnimHumanoid31.version = "2.0"
HAnimJoint32 = x3d.HAnimJoint()
HAnimJoint32.name = "HumanoidRoot"
HAnimJoint32.DEF = "Joe_HumanoidRoot"
HAnimJoint32.center = [0,0.875,0]
HAnimJoint32.ulimit = [0,0,0]
HAnimJoint32.llimit = [0,0,0]
MetadataSet33 = x3d.MetadataSet()
MetadataSet33.name = "warnings"
MetadataSet33.reference = "HAnim"
"""TODO experimental"""
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "SymmetricalLeftRight"
MetadataString34.reference = "correction options: ignore, warn, average, left, right, largest, smallest"
MetadataString34.value = ["ignore"]

if MetadataSet33.value is None:
    MetadataSet33.value = []
MetadataSet33.value.append(MetadataString34)

HAnimJoint32.metadata = MetadataSet33
HAnimSegment35 = x3d.HAnimSegment()
HAnimSegment35.name = "sacrum"
HAnimSegment35.DEF = "Joe_sacrum"
HAnimSite36 = x3d.HAnimSite()
HAnimSite36.name = "RootFront_view"
HAnimSite36.DEF = "Joe_RootFront_view"
Transform37 = x3d.Transform()
Transform37.DEF = "hanimcordsys"
Transform37.scale = [0.175,0.175,0.175]
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.DEF = "ViewBodyRootAxes"
Viewpoint38.description = "Joe_HAnim Root HAnimSite Coordinate Axes View"

Transform37.children.append(Viewpoint38)
Shape39 = x3d.Shape()
Shape39.DEF = "AxisLinesShape"
"""RGB lines showing XYZ axes"""
IndexedLineSet40 = x3d.IndexedLineSet()
IndexedLineSet40.colorIndex = [0,1,2]
IndexedLineSet40.colorPerVertex = False
IndexedLineSet40.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate41 = x3d.Coordinate()

IndexedLineSet40.coord = Coordinate41
Color42 = x3d.Color()

IndexedLineSet40.color = Color42

Shape39.geometry = IndexedLineSet40

Transform37.children.append(Shape39)

HAnimSite36.children.append(Transform37)

HAnimSegment35.children.append(HAnimSite36)

HAnimJoint32.children.append(HAnimSegment35)
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.name = "sacroiliac"
HAnimJoint43.DEF = "Joe_sacroiliac"
HAnimJoint43.center = [0,0.92,0]
HAnimJoint43.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint43.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimJoint43.ulimit = [0,0,0]
HAnimJoint43.llimit = [0,0,0]
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.name = "l_hip"
HAnimJoint44.DEF = "Joe_l_hip"
HAnimJoint44.center = [0.1,0.92,0]
HAnimJoint44.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint44.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimJoint44.ulimit = [0,0,0]
HAnimJoint44.llimit = [0,0,0]
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "l_knee"
HAnimJoint45.DEF = "Joe_l_knee"
HAnimJoint45.center = [0.115,0.466,0]
HAnimJoint45.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint45.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint45.ulimit = [0,0,0]
HAnimJoint45.llimit = [0,0,0]
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.name = "l_ankle"
HAnimJoint46.DEF = "Joe_l_ankle"
HAnimJoint46.center = [0.115,0.069,0]
HAnimJoint46.skinCoordIndex = [342,343,344,345]
HAnimJoint46.skinCoordWeight = [1,1,1,1]
HAnimJoint46.ulimit = [0,0,0]
HAnimJoint46.llimit = [0,0,0]
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.name = "l_subtalar"
HAnimJoint47.DEF = "Joe_l_subtalar"
HAnimJoint47.center = [0.115,0.031,0.03]
HAnimJoint47.skinCoordIndex = [346,347,348,71]
HAnimJoint47.skinCoordWeight = [1,1,1,1]
HAnimJoint47.ulimit = [0,0,0]
HAnimJoint47.llimit = [0,0,0]
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.name = "l_midtarsal"
HAnimJoint48.DEF = "Joe_l_midtarsal"
HAnimJoint48.center = [0.115,0.037,0.09]
HAnimJoint48.skinCoordIndex = [349,350,351,352]
HAnimJoint48.skinCoordWeight = [1,1,1,1]
HAnimJoint48.ulimit = [0,0,0]
HAnimJoint48.llimit = [0,0,0]
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.name = "l_metatarsal"
HAnimJoint49.DEF = "Joe_l_metatarsal"
HAnimJoint49.center = [0.115,0.02,0.122]
HAnimJoint49.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint49.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint49.ulimit = [0,0,0]
HAnimJoint49.llimit = [0,0,0]

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint45.children.append(HAnimJoint46)

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.name = "r_hip"
HAnimJoint50.DEF = "Joe_r_hip"
HAnimJoint50.center = [-0.1,0.92,0]
HAnimJoint50.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint50.skinCoordWeight = [0.65,1,0.8,1,1,1,0.4,0.8]
HAnimJoint50.ulimit = [0,0,0]
HAnimJoint50.llimit = [0,0,0]
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.name = "r_knee"
HAnimJoint51.DEF = "Joe_r_knee"
HAnimJoint51.center = [-0.05,0.466,0]
HAnimJoint51.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint51.skinCoordWeight = [0.6,0.2,1,1,1,1,1,1,0.2]
HAnimJoint51.ulimit = [0,0,0]
HAnimJoint51.llimit = [0,0,0]
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.name = "r_ankle"
HAnimJoint52.DEF = "Joe_r_ankle"
HAnimJoint52.center = [-0.115,0.069,0]
HAnimJoint52.skinCoordIndex = [370,371,372,373]
HAnimJoint52.skinCoordWeight = [1,1,1,1]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.name = "r_subtalar"
HAnimJoint53.DEF = "Joe_r_subtalar"
HAnimJoint53.center = [-0.1,0.015,-0.01]
HAnimJoint53.skinCoordIndex = [374,375,376]
HAnimJoint53.skinCoordWeight = [1,1,1]
HAnimJoint53.ulimit = [0,0,0]
HAnimJoint53.llimit = [0,0,0]
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.name = "r_midtarsal"
HAnimJoint54.DEF = "Joe_r_midtarsal"
HAnimJoint54.center = [-0.115,0.037,0.09]
HAnimJoint54.skinCoordIndex = [377,378,379,380]
HAnimJoint54.skinCoordWeight = [1,1,1,1]
HAnimJoint54.ulimit = [0,0,0]
HAnimJoint54.llimit = [0,0,0]
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.name = "r_metatarsal"
HAnimJoint55.DEF = "Joe_r_metatarsal"
HAnimJoint55.center = [-0.1,0.01,0.14]
HAnimJoint55.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint55.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint55.ulimit = [0,0,0]
HAnimJoint55.llimit = [0,0,0]

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint43.children.append(HAnimJoint50)

HAnimJoint32.children.append(HAnimJoint43)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.name = "vl5"
HAnimJoint56.DEF = "Joe_vl5"
HAnimJoint56.center = [0,1.045,-0.095]
HAnimJoint56.skinCoordIndex = [28,76]
HAnimJoint56.skinCoordWeight = [1,1]
HAnimJoint56.ulimit = [0,0,0]
HAnimJoint56.llimit = [0,0,0]
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.name = "vl4"
HAnimJoint57.DEF = "Joe_vl4"
HAnimJoint57.center = [0,1.068,-0.085]
HAnimJoint57.ulimit = [0,0,0]
HAnimJoint57.llimit = [0,0,0]
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.name = "vl3"
HAnimJoint58.DEF = "Joe_vl3"
HAnimJoint58.center = [0,1.092,-0.0725]
HAnimJoint58.ulimit = [0,0,0]
HAnimJoint58.llimit = [0,0,0]
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.name = "vl2"
HAnimJoint59.DEF = "Joe_vl2"
HAnimJoint59.center = [0,1.12,-0.065]
HAnimJoint59.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint59.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimJoint59.ulimit = [0,0,0]
HAnimJoint59.llimit = [0,0,0]
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.name = "vl1"
HAnimJoint60.DEF = "Joe_vl1"
HAnimJoint60.center = [0,1.1459,-0.0625]
HAnimJoint60.ulimit = [0,0,0]
HAnimJoint60.llimit = [0,0,0]
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.name = "vt12"
HAnimJoint61.DEF = "Joe_vt12"
HAnimJoint61.center = [0,1.179,-0.068]
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.name = "vt11"
HAnimJoint62.DEF = "Joe_vt11"
HAnimJoint62.center = [0,1.2679,-0.081]
HAnimJoint62.ulimit = [0,0,0]
HAnimJoint62.llimit = [0,0,0]
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.name = "vt10"
HAnimJoint63.DEF = "Joe_vt10"
HAnimJoint63.center = [0,1.242,-0.09]
HAnimJoint63.skinCoordIndex = [15]
HAnimJoint63.skinCoordWeight = [1]
HAnimJoint63.ulimit = [0,0,0]
HAnimJoint63.llimit = [0,0,0]
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.name = "vt9"
HAnimJoint64.DEF = "Joe_vt9"
HAnimJoint64.center = [0,1.268,-0.1]
HAnimJoint64.skinCoordIndex = [13,14]
HAnimJoint64.skinCoordWeight = [1,1]
HAnimJoint64.ulimit = [0,0,0]
HAnimJoint64.llimit = [0,0,0]
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.name = "vt8"
HAnimJoint65.DEF = "Joe_vt8"
HAnimJoint65.center = [0,1.294,-0.11]
HAnimJoint65.ulimit = [0,0,0]
HAnimJoint65.llimit = [0,0,0]
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.name = "vt7"
HAnimJoint66.DEF = "Joe_vt7"
HAnimJoint66.center = [0,1.323,-0.1155]
HAnimJoint66.ulimit = [0,0,0]
HAnimJoint66.llimit = [0,0,0]
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.name = "vt6"
HAnimJoint67.DEF = "Joe_vt6"
HAnimJoint67.center = [0,1.352,-0.12]
HAnimJoint67.ulimit = [0,0,0]
HAnimJoint67.llimit = [0,0,0]
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.name = "vt5"
HAnimJoint68.DEF = "Joe_vt5"
HAnimJoint68.center = [0,1.381,-0.1235]
HAnimJoint68.ulimit = [0,0,0]
HAnimJoint68.llimit = [0,0,0]
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.name = "vt4"
HAnimJoint69.DEF = "Joe_vt4"
HAnimJoint69.center = [0,1.41,-0.1235]
HAnimJoint69.skinCoordIndex = [81]
HAnimJoint69.skinCoordWeight = [1]
HAnimJoint69.ulimit = [0,0,0]
HAnimJoint69.llimit = [0,0,0]
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.name = "vt3"
HAnimJoint70.DEF = "Joe_vt3"
HAnimJoint70.center = [0,1.438,-0.12]
HAnimJoint70.ulimit = [0,0,0]
HAnimJoint70.llimit = [0,0,0]
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.name = "vt2"
HAnimJoint71.DEF = "Joe_vt2"
HAnimJoint71.center = [0,1.468,-0.105]
HAnimJoint71.ulimit = [0,0,0]
HAnimJoint71.llimit = [0,0,0]
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.name = "vt1"
HAnimJoint72.DEF = "Joe_vt1"
HAnimJoint72.center = [0,1.497,-0.09]
HAnimJoint72.skinCoordIndex = [11,24]
HAnimJoint72.skinCoordWeight = [1,1]
HAnimJoint72.ulimit = [0,0,0]
HAnimJoint72.llimit = [0,0,0]
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.name = "vc7"
HAnimJoint73.DEF = "Joe_vc7"
HAnimJoint73.center = [0,1.525,-0.072]
HAnimJoint73.skinCoordIndex = [74,75]
HAnimJoint73.skinCoordWeight = [1,1]
HAnimJoint73.ulimit = [0,0,0]
HAnimJoint73.llimit = [0,0,0]
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.name = "vc6"
HAnimJoint74.DEF = "Joe_vc6"
HAnimJoint74.center = [0,1.54,-0.05]
HAnimJoint74.ulimit = [0,0,0]
HAnimJoint74.llimit = [0,0,0]
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.name = "vc5"
HAnimJoint75.DEF = "Joe_vc5"
HAnimJoint75.center = [0,1.552,-0.035]
HAnimJoint75.ulimit = [0,0,0]
HAnimJoint75.llimit = [0,0,0]
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.name = "vc4"
HAnimJoint76.DEF = "Joe_vc4"
HAnimJoint76.center = [0,1.5675,-0.0256]
HAnimJoint76.ulimit = [0,0,0]
HAnimJoint76.llimit = [0,0,0]
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.name = "vc3"
HAnimJoint77.DEF = "Joe_vc3"
HAnimJoint77.center = [0,1.58225,-0.0185]
HAnimJoint77.ulimit = [0,0,0]
HAnimJoint77.llimit = [0,0,0]
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.name = "vc2"
HAnimJoint78.DEF = "Joe_vc2"
HAnimJoint78.center = [0,1.595,-0.0175]
HAnimJoint78.ulimit = [0,0,0]
HAnimJoint78.llimit = [0,0,0]
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.name = "vc1"
HAnimJoint79.DEF = "Joe_vc1"
HAnimJoint79.center = [0,1.61,-0.015]
HAnimJoint79.ulimit = [0,0,0]
HAnimJoint79.llimit = [0,0,0]
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.name = "skullbase"
HAnimJoint80.DEF = "Joe_skullbase"
HAnimJoint80.center = [0,1.63,-0.01]
HAnimJoint80.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint80.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimJoint80.ulimit = [0,0,0]
HAnimJoint80.llimit = [0,0,0]
HAnimDisplacer81 = x3d.HAnimDisplacer()
HAnimDisplacer81.name = "skull_tip_raiser_action"
HAnimDisplacer81.DEF = "Joe_skull_tip_raiser_action"
HAnimDisplacer81.coordIndex = [0,1,2,3,4,5,6,7,8,9]

HAnimJoint80.displacers.append(HAnimDisplacer81)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.name = "l_eyelid_joint"
HAnimJoint82.DEF = "Joe_l_eyelid_joint"
HAnimJoint82.center = [0.034,1.659,0.06]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint82)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.name = "l_eyeball_joint"
HAnimJoint83.DEF = "Joe_l_eyeball_joint"
HAnimJoint83.center = [0.034,1.659,0.06]
HAnimJoint83.ulimit = [0,0,0]
HAnimJoint83.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint83)
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.name = "l_eyebrow_joint"
HAnimJoint84.DEF = "Joe_l_eyebrow_joint"
HAnimJoint84.center = [0.034,1.659,0.06]
HAnimJoint84.ulimit = [0,0,0]
HAnimJoint84.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint84)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.name = "r_eyelid_joint"
HAnimJoint85.DEF = "Joe_r_eyelid_joint"
HAnimJoint85.center = [-0.034,1.659,0.06]
HAnimJoint85.ulimit = [0,0,0]
HAnimJoint85.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint85)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.name = "r_eyeball_joint"
HAnimJoint86.DEF = "Joe_r_eyeball_joint"
HAnimJoint86.center = [-0.034,1.659,0.06]
HAnimJoint86.ulimit = [0,0,0]
HAnimJoint86.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint86)
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.name = "r_eyebrow_joint"
HAnimJoint87.DEF = "Joe_r_eyebrow_joint"
HAnimJoint87.center = [-0.034,1.659,0.06]
HAnimJoint87.ulimit = [0,0,0]
HAnimJoint87.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint87)
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.name = "temporomandibular"
HAnimJoint88.DEF = "Joe_temporomandibular"
HAnimJoint88.center = [0.034,1.659,0.06]
HAnimJoint88.ulimit = [0,0,0]
HAnimJoint88.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint88)

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint77.children.append(HAnimJoint78)

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint72.children.append(HAnimJoint73)
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.name = "l_sternoclavicular"
HAnimJoint89.DEF = "Joe_l_sternoclavicular"
HAnimJoint89.center = [0.082,1.4488,-0.0353]
HAnimJoint89.skinCoordIndex = [12]
HAnimJoint89.skinCoordWeight = [1]
HAnimJoint89.ulimit = [0,0,0]
HAnimJoint89.llimit = [0,0,0]
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.name = "l_acromioclavicular"
HAnimJoint90.DEF = "Joe_l_acromioclavicular"
HAnimJoint90.center = [0.0962,1.4269,-0.0424]
HAnimJoint90.skinCoordIndex = [79]
HAnimJoint90.skinCoordWeight = [1]
HAnimJoint90.ulimit = [0,0,0]
HAnimJoint90.llimit = [0,0,0]
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "l_shoulder"
HAnimJoint91.DEF = "Joe_l_shoulder"
HAnimJoint91.center = [0.2,1.44,-0.04]
HAnimJoint91.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint91.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.name = "l_elbow"
HAnimJoint92.DEF = "Joe_l_elbow"
HAnimJoint92.center = [0.2,1.1388,-0.04]
HAnimJoint92.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint92.ulimit = [0,0,0]
HAnimJoint92.llimit = [0,0,0]
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.name = "l_wrist"
HAnimJoint93.DEF = "Joe_l_wrist"
HAnimJoint93.center = [0.2,0.87,-0.04]
HAnimJoint93.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint93.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint93.ulimit = [0,0,0]
HAnimJoint93.llimit = [0,0,0]
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.name = "l_thumb1"
HAnimJoint94.DEF = "Joe_l_thumb1"
HAnimJoint94.center = [0.1924,0.8472,-0.0534]
HAnimJoint94.skinCoordIndex = [127,128]
HAnimJoint94.skinCoordWeight = [1,1]
HAnimJoint94.ulimit = [0,0,0]
HAnimJoint94.llimit = [0,0,0]
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.name = "l_thumb2"
HAnimJoint95.DEF = "Joe_l_thumb2"
HAnimJoint95.center = [0.1951,0.8226,0.0246]
HAnimJoint95.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint95.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint95.ulimit = [0,0,0]
HAnimJoint95.llimit = [0,0,0]
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.name = "l_thumb3"
HAnimJoint96.DEF = "Joe_l_thumb3"
HAnimJoint96.center = [0.1955,0.8159,0.0464]
HAnimJoint96.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint96.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint96.ulimit = [0,0,0]
HAnimJoint96.llimit = [0,0,0]

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.name = "l_index0"
HAnimJoint97.DEF = "Joe_l_index0"
HAnimJoint97.center = [0.1983,0.8024,-0.028]
HAnimJoint97.skinCoordIndex = [129,130]
HAnimJoint97.skinCoordWeight = [1,1]
HAnimJoint97.ulimit = [0,0,0]
HAnimJoint97.llimit = [0,0,0]
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.name = "l_index1"
HAnimJoint98.DEF = "Joe_l_index1"
HAnimJoint98.center = [0.1983,0.7815,-0.028]
HAnimJoint98.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint98.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint98.ulimit = [0,0,0]
HAnimJoint98.llimit = [0,0,0]
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.name = "l_index2"
HAnimJoint99.DEF = "Joe_l_index2"
HAnimJoint99.center = [0.2017,0.7363,-0.0248]
HAnimJoint99.skinCoordIndex = [166,167,168,169]
HAnimJoint99.skinCoordWeight = [1,1,1,1]
HAnimJoint99.ulimit = [0,0,0]
HAnimJoint99.llimit = [0,0,0]
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.name = "l_index3"
HAnimJoint100.DEF = "Joe_l_index3"
HAnimJoint100.center = [0.2028,0.7139,-0.0236]
HAnimJoint100.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint100.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint100.ulimit = [0,0,0]
HAnimJoint100.llimit = [0,0,0]

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint93.children.append(HAnimJoint97)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.name = "l_middle0"
HAnimJoint101.DEF = "Joe_l_middle0"
HAnimJoint101.center = [0.1987,0.8029,-0.053]
HAnimJoint101.skinCoordIndex = [131,132]
HAnimJoint101.skinCoordWeight = [1,1]
HAnimJoint101.ulimit = [0,0,0]
HAnimJoint101.llimit = [0,0,0]
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.name = "l_middle1"
HAnimJoint102.DEF = "Joe_l_middle1"
HAnimJoint102.center = [0.1987,0.7818,-0.053]
HAnimJoint102.skinCoordIndex = [156,157,163,164]
HAnimJoint102.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint102.ulimit = [0,0,0]
HAnimJoint102.llimit = [0,0,0]
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.name = "l_middle2"
HAnimJoint103.DEF = "Joe_l_middle2"
HAnimJoint103.center = [0.2013,0.7273,-0.0503]
HAnimJoint103.skinCoordIndex = [179,180,181,182]
HAnimJoint103.skinCoordWeight = [1,1,1,1]
HAnimJoint103.ulimit = [0,0,0]
HAnimJoint103.llimit = [0,0,0]
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.name = "l_middle3"
HAnimJoint104.DEF = "Joe_l_middle3"
HAnimJoint104.center = [0.2026,0.7011,-0.0494]
HAnimJoint104.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint104.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint104.ulimit = [0,0,0]
HAnimJoint104.llimit = [0,0,0]

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint93.children.append(HAnimJoint101)
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.name = "l_ring0"
HAnimJoint105.DEF = "Joe_l_ring0"
HAnimJoint105.center = [0.1956,0.8019,-0.0794]
HAnimJoint105.skinCoordIndex = [133,134]
HAnimJoint105.skinCoordWeight = [1,1]
HAnimJoint105.ulimit = [0,0,0]
HAnimJoint105.llimit = [0,0,0]
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.name = "l_ring1"
HAnimJoint106.DEF = "Joe_l_ring1"
HAnimJoint106.center = [0.1956,0.7815,-0.0794]
HAnimJoint106.skinCoordIndex = [158,159,164,165]
HAnimJoint106.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint106.ulimit = [0,0,0]
HAnimJoint106.llimit = [0,0,0]
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.name = "l_ring2"
HAnimJoint107.DEF = "Joe_l_ring2"
HAnimJoint107.center = [0.1973,0.7287,-0.0777]
HAnimJoint107.skinCoordIndex = [192,193,194,195]
HAnimJoint107.skinCoordWeight = [1,1,1,1]
HAnimJoint107.ulimit = [0,0,0]
HAnimJoint107.llimit = [0,0,0]
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.name = "l_ring3"
HAnimJoint108.DEF = "Joe_l_ring3"
HAnimJoint108.center = [0.1983,0.7045,-0.0767]
HAnimJoint108.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint108.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint108.ulimit = [0,0,0]
HAnimJoint108.llimit = [0,0,0]

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint105.children.append(HAnimJoint106)

HAnimJoint93.children.append(HAnimJoint105)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.name = "l_pinky0"
HAnimJoint109.DEF = "Joe_l_pinky0"
HAnimJoint109.center = [0.1925,0.8066,-0.1036]
HAnimJoint109.skinCoordIndex = [135,136,137,165]
HAnimJoint109.skinCoordWeight = [1,1,1,0.5]
HAnimJoint109.ulimit = [0,0,0]
HAnimJoint109.llimit = [0,0,0]
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.name = "l_pinky1"
HAnimJoint110.DEF = "Joe_l_pinky1"
HAnimJoint110.center = [0.1925,0.7866,-0.1036]
HAnimJoint110.skinCoordIndex = [160,161,162]
HAnimJoint110.skinCoordWeight = [1,1,1]
HAnimJoint110.ulimit = [0,0,0]
HAnimJoint110.llimit = [0,0,0]
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.name = "l_pinky2"
HAnimJoint111.DEF = "Joe_l_pinky2"
HAnimJoint111.center = [0.1938,0.7452,-0.1024]
HAnimJoint111.skinCoordIndex = [205,206,207,208]
HAnimJoint111.skinCoordWeight = [1,1,1,1]
HAnimJoint111.ulimit = [0,0,0]
HAnimJoint111.llimit = [0,0,0]
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.name = "l_pinky3"
HAnimJoint112.DEF = "Joe_l_pinky3"
HAnimJoint112.center = [0.1948,0.7277,-0.1017]
HAnimJoint112.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint112.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint112.ulimit = [0,0,0]
HAnimJoint112.llimit = [0,0,0]

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint109.children.append(HAnimJoint110)

HAnimJoint93.children.append(HAnimJoint109)

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint72.children.append(HAnimJoint89)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.name = "r_sternoclavicular"
HAnimJoint113.DEF = "Joe_r_sternoclavicular"
HAnimJoint113.center = [-0.03,1.46,0]
HAnimJoint113.skinCoordIndex = [10]
HAnimJoint113.skinCoordWeight = [1]
HAnimJoint113.ulimit = [0,0,0]
HAnimJoint113.llimit = [0,0,0]
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.name = "r_acromioclavicular"
HAnimJoint114.DEF = "Joe_r_acromioclavicular"
HAnimJoint114.center = [-0.09,1.41,-0.11]
HAnimJoint114.skinCoordIndex = [77,29]
HAnimJoint114.skinCoordWeight = [1,0.9]
HAnimJoint114.ulimit = [0,0,0]
HAnimJoint114.llimit = [0,0,0]
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.name = "r_shoulder"
HAnimJoint115.DEF = "Joe_r_shoulder"
HAnimJoint115.center = [-0.2,1.44,-0.04]
HAnimJoint115.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint115.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimJoint115.ulimit = [0,0,0]
HAnimJoint115.llimit = [0,0,0]
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.name = "r_elbow"
HAnimJoint116.DEF = "Joe_r_elbow"
HAnimJoint116.center = [-0.2,1.1388,-0.04]
HAnimJoint116.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint116.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint116.ulimit = [0,0,0]
HAnimJoint116.llimit = [0,0,0]
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.name = "r_wrist"
HAnimJoint117.DEF = "Joe_r_wrist"
HAnimJoint117.center = [-0.2,0.89,-0.04]
HAnimJoint117.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint117.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint117.ulimit = [0,0,0]
HAnimJoint117.llimit = [0,0,0]
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.name = "r_thumb1"
HAnimJoint118.DEF = "Joe_r_thumb1"
HAnimJoint118.center = [-0.2,0.85,0]
HAnimJoint118.skinCoordIndex = [243,244]
HAnimJoint118.skinCoordWeight = [1,1]
HAnimJoint118.ulimit = [0,0,0]
HAnimJoint118.llimit = [0,0,0]
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.name = "r_thumb2"
HAnimJoint119.DEF = "Joe_r_thumb2"
HAnimJoint119.center = [-0.2,0.82,0.03]
HAnimJoint119.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint119.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint119.ulimit = [0,0,0]
HAnimJoint119.llimit = [0,0,0]
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.name = "r_thumb3"
HAnimJoint120.DEF = "Joe_r_thumb3"
HAnimJoint120.center = [-0.2,0.8,0.05]
HAnimJoint120.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint120.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint120.ulimit = [0,0,0]
HAnimJoint120.llimit = [0,0,0]

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint117.children.append(HAnimJoint118)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.name = "r_index0"
HAnimJoint121.DEF = "Joe_r_index0"
HAnimJoint121.center = [-0.2,0.84,-0.015]
HAnimJoint121.skinCoordIndex = [245,246]
HAnimJoint121.skinCoordWeight = [1,1]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.name = "r_index1"
HAnimJoint122.DEF = "Joe_r_index1"
HAnimJoint122.center = [-0.2,0.793,-0.015]
HAnimJoint122.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint122.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint122.ulimit = [0,0,0]
HAnimJoint122.llimit = [0,0,0]
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.name = "r_index2"
HAnimJoint123.DEF = "Joe_r_index2"
HAnimJoint123.center = [-0.2,0.745,-0.015]
HAnimJoint123.skinCoordIndex = [282,283,284,285]
HAnimJoint123.skinCoordWeight = [1,1,1,1]
HAnimJoint123.ulimit = [0,0,0]
HAnimJoint123.llimit = [0,0,0]
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.name = "r_index3"
HAnimJoint124.DEF = "Joe_r_index3"
HAnimJoint124.center = [-0.2,0.72,-0.015]
HAnimJoint124.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint124.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint124.ulimit = [0,0,0]
HAnimJoint124.llimit = [0,0,0]

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint121.children.append(HAnimJoint122)

HAnimJoint117.children.append(HAnimJoint121)
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.name = "r_middle0"
HAnimJoint125.DEF = "Joe_r_middle0"
HAnimJoint125.center = [-0.2,0.835,-0.04]
HAnimJoint125.skinCoordIndex = [247,248]
HAnimJoint125.skinCoordWeight = [1,1]
HAnimJoint125.ulimit = [0,0,0]
HAnimJoint125.llimit = [0,0,0]
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.name = "r_middle1"
HAnimJoint126.DEF = "Joe_r_middle1"
HAnimJoint126.center = [-0.2,0.788,-0.04]
HAnimJoint126.skinCoordIndex = [272,273,279,280]
HAnimJoint126.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint126.ulimit = [0,0,0]
HAnimJoint126.llimit = [0,0,0]
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.name = "r_middle2"
HAnimJoint127.DEF = "Joe_r_middle2"
HAnimJoint127.center = [-0.2,0.74,-0.04]
HAnimJoint127.skinCoordIndex = [295,296,297,298]
HAnimJoint127.skinCoordWeight = [1,1,1,1]
HAnimJoint127.ulimit = [0,0,0]
HAnimJoint127.llimit = [0,0,0]
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.name = "r_middle3"
HAnimJoint128.DEF = "Joe_r_middle3"
HAnimJoint128.center = [-0.2,0.7142,-0.04]
HAnimJoint128.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint128.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint128.ulimit = [0,0,0]
HAnimJoint128.llimit = [0,0,0]

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint126.children.append(HAnimJoint127)

HAnimJoint125.children.append(HAnimJoint126)

HAnimJoint117.children.append(HAnimJoint125)
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.name = "r_ring0"
HAnimJoint129.DEF = "Joe_r_ring0"
HAnimJoint129.center = [-0.2,0.835,-0.065]
HAnimJoint129.skinCoordIndex = [249,250]
HAnimJoint129.skinCoordWeight = [1,1]
HAnimJoint129.ulimit = [0,0,0]
HAnimJoint129.llimit = [0,0,0]
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.name = "r_ring1"
HAnimJoint130.DEF = "Joe_r_ring1"
HAnimJoint130.center = [-0.2,0.793,-0.065]
HAnimJoint130.skinCoordIndex = [274,275,280,281]
HAnimJoint130.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint130.ulimit = [0,0,0]
HAnimJoint130.llimit = [0,0,0]
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.name = "r_ring2"
HAnimJoint131.DEF = "Joe_r_ring2"
HAnimJoint131.center = [-0.2,0.74,-0.065]
HAnimJoint131.skinCoordIndex = [308,309,310,311]
HAnimJoint131.skinCoordWeight = [1,1,1,1]
HAnimJoint131.ulimit = [0,0,0]
HAnimJoint131.llimit = [0,0,0]
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.name = "r_ring3"
HAnimJoint132.DEF = "Joe_r_ring3"
HAnimJoint132.center = [-0.2,0.7177,-0.065]
HAnimJoint132.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint132.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint132.ulimit = [0,0,0]
HAnimJoint132.llimit = [0,0,0]

HAnimJoint131.children.append(HAnimJoint132)

HAnimJoint130.children.append(HAnimJoint131)

HAnimJoint129.children.append(HAnimJoint130)

HAnimJoint117.children.append(HAnimJoint129)
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.name = "r_pinky0"
HAnimJoint133.DEF = "Joe_r_pinky0"
HAnimJoint133.center = [-0.2,0.84,-0.085]
HAnimJoint133.skinCoordIndex = [251,252,253,281]
HAnimJoint133.skinCoordWeight = [1,1,1,0.5]
HAnimJoint133.ulimit = [0,0,0]
HAnimJoint133.llimit = [0,0,0]
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.name = "r_pinky1"
HAnimJoint134.DEF = "Joe_r_pinky1"
HAnimJoint134.center = [-0.2,0.79,-0.085]
HAnimJoint134.skinCoordIndex = [276,277,278]
HAnimJoint134.skinCoordWeight = [1,1,1]
HAnimJoint134.ulimit = [0,0,0]
HAnimJoint134.llimit = [0,0,0]
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.name = "r_pinky2"
HAnimJoint135.DEF = "Joe_r_pinky2"
HAnimJoint135.center = [-0.2,0.755,-0.085]
HAnimJoint135.skinCoordIndex = [321,322,323,324]
HAnimJoint135.skinCoordWeight = [1,1,1,1]
HAnimJoint135.ulimit = [0,0,0]
HAnimJoint135.llimit = [0,0,0]
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.name = "r_pinky3"
HAnimJoint136.DEF = "Joe_r_pinky3"
HAnimJoint136.center = [-0.2,0.735,-0.09]
HAnimJoint136.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint136.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimJoint136.ulimit = [0,0,0]
HAnimJoint136.llimit = [0,0,0]

HAnimJoint135.children.append(HAnimJoint136)

HAnimJoint134.children.append(HAnimJoint135)

HAnimJoint133.children.append(HAnimJoint134)

HAnimJoint117.children.append(HAnimJoint133)

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)

HAnimJoint113.children.append(HAnimJoint114)

HAnimJoint72.children.append(HAnimJoint113)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

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

HAnimJoint32.children.append(HAnimJoint56)

HAnimHumanoid31.skeleton.append(HAnimJoint32)
Shape137 = x3d.Shape()
Shape137.DEF = "Joe_Shape"
Appearance138 = x3d.Appearance()
Appearance138.DEF = "Joe_skin_Appearance"
Material139 = x3d.Material()
Material139.DEF = "Joe_skin_Material"
Material139.diffuseColor = [0.3,0.3,0.6]
Material139.emissiveColor = [0.3,0.3,0.6]

Appearance138.material = Material139
ImageTexture140 = x3d.ImageTexture()
ImageTexture140.DEF = "JoeSkinImageTexture"
ImageTexture140.url = ["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"]

Appearance138.texture = ImageTexture140
TextureTransform141 = x3d.TextureTransform()
TextureTransform141.DEF = "KickTextureTransform"

Appearance138.textureTransform = TextureTransform141

Shape137.appearance = Appearance138
IndexedFaceSet142 = x3d.IndexedFaceSet()
IndexedFaceSet142.DEF = "Joe_skin_IndexedFaceSet"
IndexedFaceSet142.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet142.creaseAngle = 3.14
Coordinate143 = x3d.Coordinate()
Coordinate143.DEF = "Joe_SkinCoord"

IndexedFaceSet142.coord = Coordinate143
TextureCoordinate144 = x3d.TextureCoordinate()

IndexedFaceSet142.texCoord = TextureCoordinate144

Shape137.geometry = IndexedFaceSet142

HAnimHumanoid31.skin.append(Shape137)
Coordinate145 = x3d.Coordinate()
Coordinate145.USE = "Joe_SkinCoord"

HAnimHumanoid31.skinCoord = Coordinate145
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.USE = "Joe_HumanoidRoot"

HAnimHumanoid31.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.USE = "Joe_sacroiliac"

HAnimHumanoid31.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.USE = "Joe_vl5"

HAnimHumanoid31.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.USE = "Joe_vl4"

HAnimHumanoid31.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.USE = "Joe_vl3"

HAnimHumanoid31.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.USE = "Joe_vl2"

HAnimHumanoid31.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.USE = "Joe_vl1"

HAnimHumanoid31.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.USE = "Joe_vt12"

HAnimHumanoid31.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.USE = "Joe_vt11"

HAnimHumanoid31.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.USE = "Joe_vt10"

HAnimHumanoid31.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.USE = "Joe_vt9"

HAnimHumanoid31.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.USE = "Joe_vt8"

HAnimHumanoid31.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.USE = "Joe_vt7"

HAnimHumanoid31.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.USE = "Joe_vt6"

HAnimHumanoid31.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.USE = "Joe_vt5"

HAnimHumanoid31.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.USE = "Joe_vt4"

HAnimHumanoid31.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.USE = "Joe_vt3"

HAnimHumanoid31.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.USE = "Joe_vt2"

HAnimHumanoid31.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "Joe_vt1"

HAnimHumanoid31.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.USE = "Joe_vc7"

HAnimHumanoid31.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.USE = "Joe_vc6"

HAnimHumanoid31.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.USE = "Joe_vc5"

HAnimHumanoid31.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.USE = "Joe_vc4"

HAnimHumanoid31.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.USE = "Joe_vc3"

HAnimHumanoid31.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.USE = "Joe_vc2"

HAnimHumanoid31.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.USE = "Joe_vc1"

HAnimHumanoid31.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.USE = "Joe_skullbase"

HAnimHumanoid31.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.USE = "Joe_temporomandibular"

HAnimHumanoid31.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.USE = "Joe_l_acromioclavicular"

HAnimHumanoid31.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.USE = "Joe_r_acromioclavicular"

HAnimHumanoid31.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.USE = "Joe_l_ankle"

HAnimHumanoid31.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.USE = "Joe_r_ankle"

HAnimHumanoid31.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.USE = "Joe_l_elbow"

HAnimHumanoid31.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.USE = "Joe_r_elbow"

HAnimHumanoid31.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.USE = "Joe_l_eyeball_joint"

HAnimHumanoid31.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.USE = "Joe_r_eyeball_joint"

HAnimHumanoid31.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.USE = "Joe_l_eyebrow_joint"

HAnimHumanoid31.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.USE = "Joe_r_eyebrow_joint"

HAnimHumanoid31.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.USE = "Joe_l_eyelid_joint"

HAnimHumanoid31.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.USE = "Joe_r_eyelid_joint"

HAnimHumanoid31.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.USE = "Joe_l_hip"

HAnimHumanoid31.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.USE = "Joe_r_hip"

HAnimHumanoid31.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.USE = "Joe_l_index0"

HAnimHumanoid31.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.USE = "Joe_r_index0"

HAnimHumanoid31.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.USE = "Joe_l_index1"

HAnimHumanoid31.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.USE = "Joe_r_index1"

HAnimHumanoid31.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.USE = "Joe_l_index2"

HAnimHumanoid31.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.USE = "Joe_r_index2"

HAnimHumanoid31.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.USE = "Joe_l_index3"

HAnimHumanoid31.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.USE = "Joe_r_index3"

HAnimHumanoid31.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.USE = "Joe_l_knee"

HAnimHumanoid31.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.USE = "Joe_r_knee"

HAnimHumanoid31.joints.append(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.USE = "Joe_l_metatarsal"

HAnimHumanoid31.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.USE = "Joe_r_metatarsal"

HAnimHumanoid31.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.USE = "Joe_l_middle0"

HAnimHumanoid31.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.USE = "Joe_r_middle0"

HAnimHumanoid31.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.USE = "Joe_l_middle1"

HAnimHumanoid31.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.USE = "Joe_r_middle1"

HAnimHumanoid31.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.USE = "Joe_l_middle2"

HAnimHumanoid31.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.USE = "Joe_r_middle2"

HAnimHumanoid31.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.USE = "Joe_l_middle3"

HAnimHumanoid31.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.USE = "Joe_r_middle3"

HAnimHumanoid31.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.USE = "Joe_l_midtarsal"

HAnimHumanoid31.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.USE = "Joe_r_midtarsal"

HAnimHumanoid31.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.USE = "Joe_l_pinky0"

HAnimHumanoid31.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "Joe_r_pinky0"

HAnimHumanoid31.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "Joe_l_pinky1"

HAnimHumanoid31.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "Joe_r_pinky1"

HAnimHumanoid31.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "Joe_l_pinky2"

HAnimHumanoid31.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "Joe_r_pinky2"

HAnimHumanoid31.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "Joe_l_pinky3"

HAnimHumanoid31.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "Joe_r_pinky3"

HAnimHumanoid31.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "Joe_l_ring0"

HAnimHumanoid31.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "Joe_r_ring0"

HAnimHumanoid31.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "Joe_l_ring1"

HAnimHumanoid31.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "Joe_r_ring1"

HAnimHumanoid31.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "Joe_l_ring2"

HAnimHumanoid31.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "Joe_r_ring2"

HAnimHumanoid31.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "Joe_l_ring3"

HAnimHumanoid31.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "Joe_r_ring3"

HAnimHumanoid31.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "Joe_l_shoulder"

HAnimHumanoid31.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "Joe_r_shoulder"

HAnimHumanoid31.joints.append(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.USE = "Joe_l_sternoclavicular"

HAnimHumanoid31.joints.append(HAnimJoint228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.USE = "Joe_r_sternoclavicular"

HAnimHumanoid31.joints.append(HAnimJoint229)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.USE = "Joe_l_subtalar"

HAnimHumanoid31.joints.append(HAnimJoint230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.USE = "Joe_r_subtalar"

HAnimHumanoid31.joints.append(HAnimJoint231)
HAnimJoint232 = x3d.HAnimJoint()
HAnimJoint232.USE = "Joe_l_thumb1"

HAnimHumanoid31.joints.append(HAnimJoint232)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.USE = "Joe_r_thumb1"

HAnimHumanoid31.joints.append(HAnimJoint233)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.USE = "Joe_l_thumb2"

HAnimHumanoid31.joints.append(HAnimJoint234)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.USE = "Joe_r_thumb2"

HAnimHumanoid31.joints.append(HAnimJoint235)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.USE = "Joe_l_thumb3"

HAnimHumanoid31.joints.append(HAnimJoint236)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.USE = "Joe_r_thumb3"

HAnimHumanoid31.joints.append(HAnimJoint237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.USE = "Joe_l_wrist"

HAnimHumanoid31.joints.append(HAnimJoint238)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.USE = "Joe_r_wrist"

HAnimHumanoid31.joints.append(HAnimJoint239)
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.USE = "Joe_sacrum"

HAnimHumanoid31.segments.append(HAnimSegment240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.USE = "Joe_RootFront_view"

HAnimHumanoid31.sites.append(HAnimSite241)

Group30.children.append(HAnimHumanoid31)

Scene19.children.append(Group30)
Group242 = x3d.Group()
TimeSensor243 = x3d.TimeSensor()
TimeSensor243.DEF = "KickTimer"
TimeSensor243.cycleInterval = 3.73
TimeSensor243.loop = True

Group242.children.append(TimeSensor243)
"""Interpolators"""
OrientationInterpolator244 = x3d.OrientationInterpolator()
OrientationInterpolator244.DEF = "HumanoidRoot_RotationInterpolator"
OrientationInterpolator244.key = [0,0.1,0.4,0.6,1]

Group242.children.append(OrientationInterpolator244)
PositionInterpolator245 = x3d.PositionInterpolator()
PositionInterpolator245.DEF = "HumanoidRoot_TranslationInterpolator"
PositionInterpolator245.key = [0,0.2,0.6,1]

Group242.children.append(PositionInterpolator245)
OrientationInterpolator246 = x3d.OrientationInterpolator()
OrientationInterpolator246.DEF = "sacroiliac_RotationInterpolator"
OrientationInterpolator246.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator246)
OrientationInterpolator247 = x3d.OrientationInterpolator()
OrientationInterpolator247.DEF = "l_hip_RotationInterpolator"
OrientationInterpolator247.key = [0,0.1,0.3,0.45,1]

Group242.children.append(OrientationInterpolator247)
OrientationInterpolator248 = x3d.OrientationInterpolator()
OrientationInterpolator248.DEF = "l_knee_RotationInterpolator"
OrientationInterpolator248.key = [0,0.2,0.35,0.5,1]

Group242.children.append(OrientationInterpolator248)
OrientationInterpolator249 = x3d.OrientationInterpolator()
OrientationInterpolator249.DEF = "l_ankle_RotationInterpolator"
OrientationInterpolator249.key = [0,0.25,1]

Group242.children.append(OrientationInterpolator249)
OrientationInterpolator250 = x3d.OrientationInterpolator()
OrientationInterpolator250.DEF = "l_subtalar_RotationInterpolator"
OrientationInterpolator250.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator250)
OrientationInterpolator251 = x3d.OrientationInterpolator()
OrientationInterpolator251.DEF = "l_midtarsal_RotationInterpolator"
OrientationInterpolator251.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator251)
OrientationInterpolator252 = x3d.OrientationInterpolator()
OrientationInterpolator252.DEF = "l_metatarsal_RotationInterpolator"
OrientationInterpolator252.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator252)
OrientationInterpolator253 = x3d.OrientationInterpolator()
OrientationInterpolator253.DEF = "r_hip_RotationInterpolator"
OrientationInterpolator253.key = [0,0.25,0.5,0.75,1]

Group242.children.append(OrientationInterpolator253)
OrientationInterpolator254 = x3d.OrientationInterpolator()
OrientationInterpolator254.DEF = "r_knee_RotationInterpolator"
OrientationInterpolator254.key = [0,0.25,0.5,0.75,1]

Group242.children.append(OrientationInterpolator254)
OrientationInterpolator255 = x3d.OrientationInterpolator()
OrientationInterpolator255.DEF = "r_ankle_RotationInterpolator"
OrientationInterpolator255.key = [0,0.25,0.5,0.75,1]

Group242.children.append(OrientationInterpolator255)
OrientationInterpolator256 = x3d.OrientationInterpolator()
OrientationInterpolator256.DEF = "r_subtalar_RotationInterpolator"
OrientationInterpolator256.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator256)
OrientationInterpolator257 = x3d.OrientationInterpolator()
OrientationInterpolator257.DEF = "r_midtarsal_RotationInterpolator"
OrientationInterpolator257.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator257)
OrientationInterpolator258 = x3d.OrientationInterpolator()
OrientationInterpolator258.DEF = "r_metatarsal_RotationInterpolator"
OrientationInterpolator258.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator258)
OrientationInterpolator259 = x3d.OrientationInterpolator()
OrientationInterpolator259.DEF = "vl5_RotationInterpolator"
OrientationInterpolator259.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator259)
OrientationInterpolator260 = x3d.OrientationInterpolator()
OrientationInterpolator260.DEF = "vl4_RotationInterpolator"
OrientationInterpolator260.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator260)
OrientationInterpolator261 = x3d.OrientationInterpolator()
OrientationInterpolator261.DEF = "vl3_RotationInterpolator"
OrientationInterpolator261.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator261)
OrientationInterpolator262 = x3d.OrientationInterpolator()
OrientationInterpolator262.DEF = "vl2_RotationInterpolator"
OrientationInterpolator262.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator262)
OrientationInterpolator263 = x3d.OrientationInterpolator()
OrientationInterpolator263.DEF = "vl1_RotationInterpolator"
OrientationInterpolator263.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator263)
OrientationInterpolator264 = x3d.OrientationInterpolator()
OrientationInterpolator264.DEF = "vt12_RotationInterpolator"
OrientationInterpolator264.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator264)
OrientationInterpolator265 = x3d.OrientationInterpolator()
OrientationInterpolator265.DEF = "vt11_RotationInterpolator"
OrientationInterpolator265.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator265)
OrientationInterpolator266 = x3d.OrientationInterpolator()
OrientationInterpolator266.DEF = "vt10_RotationInterpolator"
OrientationInterpolator266.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator266)
OrientationInterpolator267 = x3d.OrientationInterpolator()
OrientationInterpolator267.DEF = "vt9_RotationInterpolator"
OrientationInterpolator267.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator267)
OrientationInterpolator268 = x3d.OrientationInterpolator()
OrientationInterpolator268.DEF = "vt8_RotationInterpolator"
OrientationInterpolator268.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator268)
OrientationInterpolator269 = x3d.OrientationInterpolator()
OrientationInterpolator269.DEF = "vt7_RotationInterpolator"
OrientationInterpolator269.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator269)
OrientationInterpolator270 = x3d.OrientationInterpolator()
OrientationInterpolator270.DEF = "vt6_RotationInterpolator"
OrientationInterpolator270.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator270)
OrientationInterpolator271 = x3d.OrientationInterpolator()
OrientationInterpolator271.DEF = "vt5_RotationInterpolator"
OrientationInterpolator271.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator271)
OrientationInterpolator272 = x3d.OrientationInterpolator()
OrientationInterpolator272.DEF = "vt4_RotationInterpolator"
OrientationInterpolator272.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator272)
OrientationInterpolator273 = x3d.OrientationInterpolator()
OrientationInterpolator273.DEF = "vt3_RotationInterpolator"
OrientationInterpolator273.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator273)
OrientationInterpolator274 = x3d.OrientationInterpolator()
OrientationInterpolator274.DEF = "vt2_RotationInterpolator"
OrientationInterpolator274.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator274)
OrientationInterpolator275 = x3d.OrientationInterpolator()
OrientationInterpolator275.DEF = "vt1_RotationInterpolator"
OrientationInterpolator275.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator275)
OrientationInterpolator276 = x3d.OrientationInterpolator()
OrientationInterpolator276.DEF = "vc7_RotationInterpolator"
OrientationInterpolator276.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator276)
OrientationInterpolator277 = x3d.OrientationInterpolator()
OrientationInterpolator277.DEF = "vc6_RotationInterpolator"
OrientationInterpolator277.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator277)
OrientationInterpolator278 = x3d.OrientationInterpolator()
OrientationInterpolator278.DEF = "vc5_RotationInterpolator"
OrientationInterpolator278.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator278)
OrientationInterpolator279 = x3d.OrientationInterpolator()
OrientationInterpolator279.DEF = "vc4_RotationInterpolator"
OrientationInterpolator279.key = [0,0.3,0.4,1]

Group242.children.append(OrientationInterpolator279)
OrientationInterpolator280 = x3d.OrientationInterpolator()
OrientationInterpolator280.DEF = "vc3_RotationInterpolator"
OrientationInterpolator280.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator280)
OrientationInterpolator281 = x3d.OrientationInterpolator()
OrientationInterpolator281.DEF = "vc2_RotationInterpolator"
OrientationInterpolator281.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator281)
OrientationInterpolator282 = x3d.OrientationInterpolator()
OrientationInterpolator282.DEF = "vc1_RotationInterpolator"
OrientationInterpolator282.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator282)
OrientationInterpolator283 = x3d.OrientationInterpolator()
OrientationInterpolator283.DEF = "skullbase_RotationInterpolator"
OrientationInterpolator283.key = [0,0.2,0.75,1]

Group242.children.append(OrientationInterpolator283)
OrientationInterpolator284 = x3d.OrientationInterpolator()
OrientationInterpolator284.DEF = "l_eyelid_joint_RotationInterpolator"
OrientationInterpolator284.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator284)
OrientationInterpolator285 = x3d.OrientationInterpolator()
OrientationInterpolator285.DEF = "l_eyeball_joint_RotationInterpolator"
OrientationInterpolator285.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator285)
OrientationInterpolator286 = x3d.OrientationInterpolator()
OrientationInterpolator286.DEF = "l_eyebrow_joint_RotationInterpolator"
OrientationInterpolator286.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator286)
OrientationInterpolator287 = x3d.OrientationInterpolator()
OrientationInterpolator287.DEF = "r_eyelid_joint_RotationInterpolator"
OrientationInterpolator287.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator287)
OrientationInterpolator288 = x3d.OrientationInterpolator()
OrientationInterpolator288.DEF = "r_eyeball_joint_RotationInterpolator"
OrientationInterpolator288.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator288)
OrientationInterpolator289 = x3d.OrientationInterpolator()
OrientationInterpolator289.DEF = "r_eyebrow_joint_RotationInterpolator"
OrientationInterpolator289.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator289)
OrientationInterpolator290 = x3d.OrientationInterpolator()
OrientationInterpolator290.DEF = "temporomandibular_RotationInterpolator"
OrientationInterpolator290.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator290)
OrientationInterpolator291 = x3d.OrientationInterpolator()
OrientationInterpolator291.DEF = "l_sternoclavicular_RotationInterpolator"
OrientationInterpolator291.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator291)
OrientationInterpolator292 = x3d.OrientationInterpolator()
OrientationInterpolator292.DEF = "l_acromioclavicular_RotationInterpolator"
OrientationInterpolator292.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator292)
OrientationInterpolator293 = x3d.OrientationInterpolator()
OrientationInterpolator293.DEF = "l_shoulder_RotationInterpolator"
OrientationInterpolator293.key = [0,0.4,1]

Group242.children.append(OrientationInterpolator293)
OrientationInterpolator294 = x3d.OrientationInterpolator()
OrientationInterpolator294.DEF = "l_elbow_RotationInterpolator"
OrientationInterpolator294.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator294)
OrientationInterpolator295 = x3d.OrientationInterpolator()
OrientationInterpolator295.DEF = "l_wrist_RotationInterpolator"
OrientationInterpolator295.key = [0,0.4,0.8,1]

Group242.children.append(OrientationInterpolator295)
OrientationInterpolator296 = x3d.OrientationInterpolator()
OrientationInterpolator296.DEF = "l_thumb1_RotationInterpolator"
OrientationInterpolator296.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator296)
OrientationInterpolator297 = x3d.OrientationInterpolator()
OrientationInterpolator297.DEF = "l_thumb2_RotationInterpolator"
OrientationInterpolator297.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator297)
OrientationInterpolator298 = x3d.OrientationInterpolator()
OrientationInterpolator298.DEF = "l_thumb3_RotationInterpolator"
OrientationInterpolator298.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator298)
OrientationInterpolator299 = x3d.OrientationInterpolator()
OrientationInterpolator299.DEF = "l_index0_RotationInterpolator"
OrientationInterpolator299.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator299)
OrientationInterpolator300 = x3d.OrientationInterpolator()
OrientationInterpolator300.DEF = "l_index1_RotationInterpolator"
OrientationInterpolator300.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator300)
OrientationInterpolator301 = x3d.OrientationInterpolator()
OrientationInterpolator301.DEF = "l_index2_RotationInterpolator"
OrientationInterpolator301.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator301)
OrientationInterpolator302 = x3d.OrientationInterpolator()
OrientationInterpolator302.DEF = "l_index3_RotationInterpolator"
OrientationInterpolator302.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator302)
OrientationInterpolator303 = x3d.OrientationInterpolator()
OrientationInterpolator303.DEF = "l_middle0_RotationInterpolator"
OrientationInterpolator303.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator303)
OrientationInterpolator304 = x3d.OrientationInterpolator()
OrientationInterpolator304.DEF = "l_middle1_RotationInterpolator"
OrientationInterpolator304.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator304)
OrientationInterpolator305 = x3d.OrientationInterpolator()
OrientationInterpolator305.DEF = "l_middle2_RotationInterpolator"
OrientationInterpolator305.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator305)
OrientationInterpolator306 = x3d.OrientationInterpolator()
OrientationInterpolator306.DEF = "l_middle3_RotationInterpolator"
OrientationInterpolator306.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator306)
OrientationInterpolator307 = x3d.OrientationInterpolator()
OrientationInterpolator307.DEF = "l_ring0_RotationInterpolator"
OrientationInterpolator307.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator307)
OrientationInterpolator308 = x3d.OrientationInterpolator()
OrientationInterpolator308.DEF = "l_ring1_RotationInterpolator"
OrientationInterpolator308.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator308)
OrientationInterpolator309 = x3d.OrientationInterpolator()
OrientationInterpolator309.DEF = "l_ring2_RotationInterpolator"
OrientationInterpolator309.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator309)
OrientationInterpolator310 = x3d.OrientationInterpolator()
OrientationInterpolator310.DEF = "l_ring3_RotationInterpolator"
OrientationInterpolator310.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator310)
OrientationInterpolator311 = x3d.OrientationInterpolator()
OrientationInterpolator311.DEF = "l_pinky0_RotationInterpolator"
OrientationInterpolator311.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator311)
OrientationInterpolator312 = x3d.OrientationInterpolator()
OrientationInterpolator312.DEF = "l_pinky1_RotationInterpolator"
OrientationInterpolator312.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator312)
OrientationInterpolator313 = x3d.OrientationInterpolator()
OrientationInterpolator313.DEF = "l_pinky2_RotationInterpolator"
OrientationInterpolator313.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator313)
OrientationInterpolator314 = x3d.OrientationInterpolator()
OrientationInterpolator314.DEF = "l_pinky3_RotationInterpolator"
OrientationInterpolator314.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator314)
OrientationInterpolator315 = x3d.OrientationInterpolator()
OrientationInterpolator315.DEF = "r_sternoclavicular_RotationInterpolator"
OrientationInterpolator315.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator315)
OrientationInterpolator316 = x3d.OrientationInterpolator()
OrientationInterpolator316.DEF = "r_acromioclavicular_RotationInterpolator"
OrientationInterpolator316.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator316)
OrientationInterpolator317 = x3d.OrientationInterpolator()
OrientationInterpolator317.DEF = "r_shoulder_RotationInterpolator"
OrientationInterpolator317.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator317)
OrientationInterpolator318 = x3d.OrientationInterpolator()
OrientationInterpolator318.DEF = "r_elbow_RotationInterpolator"
OrientationInterpolator318.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator318)
OrientationInterpolator319 = x3d.OrientationInterpolator()
OrientationInterpolator319.DEF = "r_wrist_RotationInterpolator"
OrientationInterpolator319.key = [0,0.5,0.7,1]

Group242.children.append(OrientationInterpolator319)
OrientationInterpolator320 = x3d.OrientationInterpolator()
OrientationInterpolator320.DEF = "r_thumb1_RotationInterpolator"
OrientationInterpolator320.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator320)
OrientationInterpolator321 = x3d.OrientationInterpolator()
OrientationInterpolator321.DEF = "r_thumb2_RotationInterpolator"
OrientationInterpolator321.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator321)
OrientationInterpolator322 = x3d.OrientationInterpolator()
OrientationInterpolator322.DEF = "r_thumb3_RotationInterpolator"
OrientationInterpolator322.key = [0,0.5,1]

Group242.children.append(OrientationInterpolator322)
OrientationInterpolator323 = x3d.OrientationInterpolator()
OrientationInterpolator323.DEF = "r_index0_RotationInterpolator"
OrientationInterpolator323.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator323)
OrientationInterpolator324 = x3d.OrientationInterpolator()
OrientationInterpolator324.DEF = "r_index1_RotationInterpolator"
OrientationInterpolator324.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator324)
OrientationInterpolator325 = x3d.OrientationInterpolator()
OrientationInterpolator325.DEF = "r_index2_RotationInterpolator"
OrientationInterpolator325.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator325)
OrientationInterpolator326 = x3d.OrientationInterpolator()
OrientationInterpolator326.DEF = "r_index3_RotationInterpolator"
OrientationInterpolator326.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator326)
OrientationInterpolator327 = x3d.OrientationInterpolator()
OrientationInterpolator327.DEF = "r_middle0_RotationInterpolator"
OrientationInterpolator327.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator327)
OrientationInterpolator328 = x3d.OrientationInterpolator()
OrientationInterpolator328.DEF = "r_middle1_RotationInterpolator"
OrientationInterpolator328.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator328)
OrientationInterpolator329 = x3d.OrientationInterpolator()
OrientationInterpolator329.DEF = "r_middle2_RotationInterpolator"
OrientationInterpolator329.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator329)
OrientationInterpolator330 = x3d.OrientationInterpolator()
OrientationInterpolator330.DEF = "r_middle3_RotationInterpolator"
OrientationInterpolator330.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator330)
OrientationInterpolator331 = x3d.OrientationInterpolator()
OrientationInterpolator331.DEF = "r_ring0_RotationInterpolator"
OrientationInterpolator331.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator331)
OrientationInterpolator332 = x3d.OrientationInterpolator()
OrientationInterpolator332.DEF = "r_ring1_RotationInterpolator"
OrientationInterpolator332.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator332)
OrientationInterpolator333 = x3d.OrientationInterpolator()
OrientationInterpolator333.DEF = "r_ring2_RotationInterpolator"
OrientationInterpolator333.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator333)
OrientationInterpolator334 = x3d.OrientationInterpolator()
OrientationInterpolator334.DEF = "r_ring3_RotationInterpolator"
OrientationInterpolator334.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator334)
OrientationInterpolator335 = x3d.OrientationInterpolator()
OrientationInterpolator335.DEF = "r_pinky0_RotationInterpolator"
OrientationInterpolator335.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator335)
OrientationInterpolator336 = x3d.OrientationInterpolator()
OrientationInterpolator336.DEF = "r_pinky1_RotationInterpolator"
OrientationInterpolator336.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator336)
OrientationInterpolator337 = x3d.OrientationInterpolator()
OrientationInterpolator337.DEF = "r_pinky2_RotationInterpolator"
OrientationInterpolator337.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator337)
OrientationInterpolator338 = x3d.OrientationInterpolator()
OrientationInterpolator338.DEF = "r_pinky3_RotationInterpolator"
OrientationInterpolator338.key = [0,0.5,0.75,1]

Group242.children.append(OrientationInterpolator338)

Scene19.children.append(Group242)
"""TimeSensor to Interpolators"""
ROUTE339 = x3d.ROUTE()
ROUTE339.fromField = "fraction_changed"
ROUTE339.fromNode = "KickTimer"
ROUTE339.toField = "set_fraction"
ROUTE339.toNode = "HumanoidRoot_RotationInterpolator"

Scene19.children.append(ROUTE339)
ROUTE340 = x3d.ROUTE()
ROUTE340.fromField = "fraction_changed"
ROUTE340.fromNode = "KickTimer"
ROUTE340.toField = "set_fraction"
ROUTE340.toNode = "HumanoidRoot_TranslationInterpolator"

Scene19.children.append(ROUTE340)
ROUTE341 = x3d.ROUTE()
ROUTE341.fromField = "fraction_changed"
ROUTE341.fromNode = "KickTimer"
ROUTE341.toField = "set_fraction"
ROUTE341.toNode = "sacroiliac_RotationInterpolator"

Scene19.children.append(ROUTE341)
ROUTE342 = x3d.ROUTE()
ROUTE342.fromField = "fraction_changed"
ROUTE342.fromNode = "KickTimer"
ROUTE342.toField = "set_fraction"
ROUTE342.toNode = "l_hip_RotationInterpolator"

Scene19.children.append(ROUTE342)
ROUTE343 = x3d.ROUTE()
ROUTE343.fromField = "fraction_changed"
ROUTE343.fromNode = "KickTimer"
ROUTE343.toField = "set_fraction"
ROUTE343.toNode = "l_knee_RotationInterpolator"

Scene19.children.append(ROUTE343)
ROUTE344 = x3d.ROUTE()
ROUTE344.fromField = "fraction_changed"
ROUTE344.fromNode = "KickTimer"
ROUTE344.toField = "set_fraction"
ROUTE344.toNode = "l_ankle_RotationInterpolator"

Scene19.children.append(ROUTE344)
ROUTE345 = x3d.ROUTE()
ROUTE345.fromField = "fraction_changed"
ROUTE345.fromNode = "KickTimer"
ROUTE345.toField = "set_fraction"
ROUTE345.toNode = "l_subtalar_RotationInterpolator"

Scene19.children.append(ROUTE345)
ROUTE346 = x3d.ROUTE()
ROUTE346.fromField = "fraction_changed"
ROUTE346.fromNode = "KickTimer"
ROUTE346.toField = "set_fraction"
ROUTE346.toNode = "l_midtarsal_RotationInterpolator"

Scene19.children.append(ROUTE346)
ROUTE347 = x3d.ROUTE()
ROUTE347.fromField = "fraction_changed"
ROUTE347.fromNode = "KickTimer"
ROUTE347.toField = "set_fraction"
ROUTE347.toNode = "l_metatarsal_RotationInterpolator"

Scene19.children.append(ROUTE347)
ROUTE348 = x3d.ROUTE()
ROUTE348.fromField = "fraction_changed"
ROUTE348.fromNode = "KickTimer"
ROUTE348.toField = "set_fraction"
ROUTE348.toNode = "r_hip_RotationInterpolator"

Scene19.children.append(ROUTE348)
ROUTE349 = x3d.ROUTE()
ROUTE349.fromField = "fraction_changed"
ROUTE349.fromNode = "KickTimer"
ROUTE349.toField = "set_fraction"
ROUTE349.toNode = "r_knee_RotationInterpolator"

Scene19.children.append(ROUTE349)
ROUTE350 = x3d.ROUTE()
ROUTE350.fromField = "fraction_changed"
ROUTE350.fromNode = "KickTimer"
ROUTE350.toField = "set_fraction"
ROUTE350.toNode = "r_ankle_RotationInterpolator"

Scene19.children.append(ROUTE350)
ROUTE351 = x3d.ROUTE()
ROUTE351.fromField = "fraction_changed"
ROUTE351.fromNode = "KickTimer"
ROUTE351.toField = "set_fraction"
ROUTE351.toNode = "r_subtalar_RotationInterpolator"

Scene19.children.append(ROUTE351)
ROUTE352 = x3d.ROUTE()
ROUTE352.fromField = "fraction_changed"
ROUTE352.fromNode = "KickTimer"
ROUTE352.toField = "set_fraction"
ROUTE352.toNode = "r_midtarsal_RotationInterpolator"

Scene19.children.append(ROUTE352)
ROUTE353 = x3d.ROUTE()
ROUTE353.fromField = "fraction_changed"
ROUTE353.fromNode = "KickTimer"
ROUTE353.toField = "set_fraction"
ROUTE353.toNode = "r_metatarsal_RotationInterpolator"

Scene19.children.append(ROUTE353)
ROUTE354 = x3d.ROUTE()
ROUTE354.fromField = "fraction_changed"
ROUTE354.fromNode = "KickTimer"
ROUTE354.toField = "set_fraction"
ROUTE354.toNode = "vl5_RotationInterpolator"

Scene19.children.append(ROUTE354)
ROUTE355 = x3d.ROUTE()
ROUTE355.fromField = "fraction_changed"
ROUTE355.fromNode = "KickTimer"
ROUTE355.toField = "set_fraction"
ROUTE355.toNode = "vl4_RotationInterpolator"

Scene19.children.append(ROUTE355)
ROUTE356 = x3d.ROUTE()
ROUTE356.fromField = "fraction_changed"
ROUTE356.fromNode = "KickTimer"
ROUTE356.toField = "set_fraction"
ROUTE356.toNode = "vl3_RotationInterpolator"

Scene19.children.append(ROUTE356)
ROUTE357 = x3d.ROUTE()
ROUTE357.fromField = "fraction_changed"
ROUTE357.fromNode = "KickTimer"
ROUTE357.toField = "set_fraction"
ROUTE357.toNode = "vl2_RotationInterpolator"

Scene19.children.append(ROUTE357)
ROUTE358 = x3d.ROUTE()
ROUTE358.fromField = "fraction_changed"
ROUTE358.fromNode = "KickTimer"
ROUTE358.toField = "set_fraction"
ROUTE358.toNode = "vl1_RotationInterpolator"

Scene19.children.append(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.fromField = "fraction_changed"
ROUTE359.fromNode = "KickTimer"
ROUTE359.toField = "set_fraction"
ROUTE359.toNode = "vt12_RotationInterpolator"

Scene19.children.append(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.fromField = "fraction_changed"
ROUTE360.fromNode = "KickTimer"
ROUTE360.toField = "set_fraction"
ROUTE360.toNode = "vt11_RotationInterpolator"

Scene19.children.append(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.fromField = "fraction_changed"
ROUTE361.fromNode = "KickTimer"
ROUTE361.toField = "set_fraction"
ROUTE361.toNode = "vt10_RotationInterpolator"

Scene19.children.append(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.fromField = "fraction_changed"
ROUTE362.fromNode = "KickTimer"
ROUTE362.toField = "set_fraction"
ROUTE362.toNode = "vt9_RotationInterpolator"

Scene19.children.append(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.fromField = "fraction_changed"
ROUTE363.fromNode = "KickTimer"
ROUTE363.toField = "set_fraction"
ROUTE363.toNode = "vt8_RotationInterpolator"

Scene19.children.append(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.fromField = "fraction_changed"
ROUTE364.fromNode = "KickTimer"
ROUTE364.toField = "set_fraction"
ROUTE364.toNode = "vt7_RotationInterpolator"

Scene19.children.append(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.fromField = "fraction_changed"
ROUTE365.fromNode = "KickTimer"
ROUTE365.toField = "set_fraction"
ROUTE365.toNode = "vt6_RotationInterpolator"

Scene19.children.append(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromField = "fraction_changed"
ROUTE366.fromNode = "KickTimer"
ROUTE366.toField = "set_fraction"
ROUTE366.toNode = "vt5_RotationInterpolator"

Scene19.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromField = "fraction_changed"
ROUTE367.fromNode = "KickTimer"
ROUTE367.toField = "set_fraction"
ROUTE367.toNode = "vt4_RotationInterpolator"

Scene19.children.append(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.fromField = "fraction_changed"
ROUTE368.fromNode = "KickTimer"
ROUTE368.toField = "set_fraction"
ROUTE368.toNode = "vt3_RotationInterpolator"

Scene19.children.append(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.fromField = "fraction_changed"
ROUTE369.fromNode = "KickTimer"
ROUTE369.toField = "set_fraction"
ROUTE369.toNode = "vt2_RotationInterpolator"

Scene19.children.append(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromField = "fraction_changed"
ROUTE370.fromNode = "KickTimer"
ROUTE370.toField = "set_fraction"
ROUTE370.toNode = "vt1_RotationInterpolator"

Scene19.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromField = "fraction_changed"
ROUTE371.fromNode = "KickTimer"
ROUTE371.toField = "set_fraction"
ROUTE371.toNode = "vc7_RotationInterpolator"

Scene19.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromField = "fraction_changed"
ROUTE372.fromNode = "KickTimer"
ROUTE372.toField = "set_fraction"
ROUTE372.toNode = "vc6_RotationInterpolator"

Scene19.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromField = "fraction_changed"
ROUTE373.fromNode = "KickTimer"
ROUTE373.toField = "set_fraction"
ROUTE373.toNode = "vc5_RotationInterpolator"

Scene19.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromField = "fraction_changed"
ROUTE374.fromNode = "KickTimer"
ROUTE374.toField = "set_fraction"
ROUTE374.toNode = "vc4_RotationInterpolator"

Scene19.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromField = "fraction_changed"
ROUTE375.fromNode = "KickTimer"
ROUTE375.toField = "set_fraction"
ROUTE375.toNode = "vc3_RotationInterpolator"

Scene19.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromField = "fraction_changed"
ROUTE376.fromNode = "KickTimer"
ROUTE376.toField = "set_fraction"
ROUTE376.toNode = "vc2_RotationInterpolator"

Scene19.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromField = "fraction_changed"
ROUTE377.fromNode = "KickTimer"
ROUTE377.toField = "set_fraction"
ROUTE377.toNode = "vc1_RotationInterpolator"

Scene19.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromField = "fraction_changed"
ROUTE378.fromNode = "KickTimer"
ROUTE378.toField = "set_fraction"
ROUTE378.toNode = "skullbase_RotationInterpolator"

Scene19.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromField = "fraction_changed"
ROUTE379.fromNode = "KickTimer"
ROUTE379.toField = "set_fraction"
ROUTE379.toNode = "l_eyelid_joint_RotationInterpolator"

Scene19.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromField = "fraction_changed"
ROUTE380.fromNode = "KickTimer"
ROUTE380.toField = "set_fraction"
ROUTE380.toNode = "l_eyeball_joint_RotationInterpolator"

Scene19.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromField = "fraction_changed"
ROUTE381.fromNode = "KickTimer"
ROUTE381.toField = "set_fraction"
ROUTE381.toNode = "l_eyebrow_joint_RotationInterpolator"

Scene19.children.append(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.fromField = "fraction_changed"
ROUTE382.fromNode = "KickTimer"
ROUTE382.toField = "set_fraction"
ROUTE382.toNode = "r_eyelid_joint_RotationInterpolator"

Scene19.children.append(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.fromField = "fraction_changed"
ROUTE383.fromNode = "KickTimer"
ROUTE383.toField = "set_fraction"
ROUTE383.toNode = "r_eyeball_joint_RotationInterpolator"

Scene19.children.append(ROUTE383)
ROUTE384 = x3d.ROUTE()
ROUTE384.fromField = "fraction_changed"
ROUTE384.fromNode = "KickTimer"
ROUTE384.toField = "set_fraction"
ROUTE384.toNode = "r_eyebrow_joint_RotationInterpolator"

Scene19.children.append(ROUTE384)
ROUTE385 = x3d.ROUTE()
ROUTE385.fromField = "fraction_changed"
ROUTE385.fromNode = "KickTimer"
ROUTE385.toField = "set_fraction"
ROUTE385.toNode = "temporomandibular_RotationInterpolator"

Scene19.children.append(ROUTE385)
ROUTE386 = x3d.ROUTE()
ROUTE386.fromField = "fraction_changed"
ROUTE386.fromNode = "KickTimer"
ROUTE386.toField = "set_fraction"
ROUTE386.toNode = "l_sternoclavicular_RotationInterpolator"

Scene19.children.append(ROUTE386)
ROUTE387 = x3d.ROUTE()
ROUTE387.fromField = "fraction_changed"
ROUTE387.fromNode = "KickTimer"
ROUTE387.toField = "set_fraction"
ROUTE387.toNode = "l_acromioclavicular_RotationInterpolator"

Scene19.children.append(ROUTE387)
ROUTE388 = x3d.ROUTE()
ROUTE388.fromField = "fraction_changed"
ROUTE388.fromNode = "KickTimer"
ROUTE388.toField = "set_fraction"
ROUTE388.toNode = "l_shoulder_RotationInterpolator"

Scene19.children.append(ROUTE388)
ROUTE389 = x3d.ROUTE()
ROUTE389.fromField = "fraction_changed"
ROUTE389.fromNode = "KickTimer"
ROUTE389.toField = "set_fraction"
ROUTE389.toNode = "l_elbow_RotationInterpolator"

Scene19.children.append(ROUTE389)
ROUTE390 = x3d.ROUTE()
ROUTE390.fromField = "fraction_changed"
ROUTE390.fromNode = "KickTimer"
ROUTE390.toField = "set_fraction"
ROUTE390.toNode = "l_wrist_RotationInterpolator"

Scene19.children.append(ROUTE390)
ROUTE391 = x3d.ROUTE()
ROUTE391.fromField = "fraction_changed"
ROUTE391.fromNode = "KickTimer"
ROUTE391.toField = "set_fraction"
ROUTE391.toNode = "l_thumb1_RotationInterpolator"

Scene19.children.append(ROUTE391)
ROUTE392 = x3d.ROUTE()
ROUTE392.fromField = "fraction_changed"
ROUTE392.fromNode = "KickTimer"
ROUTE392.toField = "set_fraction"
ROUTE392.toNode = "l_thumb2_RotationInterpolator"

Scene19.children.append(ROUTE392)
ROUTE393 = x3d.ROUTE()
ROUTE393.fromField = "fraction_changed"
ROUTE393.fromNode = "KickTimer"
ROUTE393.toField = "set_fraction"
ROUTE393.toNode = "l_thumb3_RotationInterpolator"

Scene19.children.append(ROUTE393)
ROUTE394 = x3d.ROUTE()
ROUTE394.fromField = "fraction_changed"
ROUTE394.fromNode = "KickTimer"
ROUTE394.toField = "set_fraction"
ROUTE394.toNode = "l_index0_RotationInterpolator"

Scene19.children.append(ROUTE394)
ROUTE395 = x3d.ROUTE()
ROUTE395.fromField = "fraction_changed"
ROUTE395.fromNode = "KickTimer"
ROUTE395.toField = "set_fraction"
ROUTE395.toNode = "l_index1_RotationInterpolator"

Scene19.children.append(ROUTE395)
ROUTE396 = x3d.ROUTE()
ROUTE396.fromField = "fraction_changed"
ROUTE396.fromNode = "KickTimer"
ROUTE396.toField = "set_fraction"
ROUTE396.toNode = "l_index2_RotationInterpolator"

Scene19.children.append(ROUTE396)
ROUTE397 = x3d.ROUTE()
ROUTE397.fromField = "fraction_changed"
ROUTE397.fromNode = "KickTimer"
ROUTE397.toField = "set_fraction"
ROUTE397.toNode = "l_index3_RotationInterpolator"

Scene19.children.append(ROUTE397)
ROUTE398 = x3d.ROUTE()
ROUTE398.fromField = "fraction_changed"
ROUTE398.fromNode = "KickTimer"
ROUTE398.toField = "set_fraction"
ROUTE398.toNode = "l_middle0_RotationInterpolator"

Scene19.children.append(ROUTE398)
ROUTE399 = x3d.ROUTE()
ROUTE399.fromField = "fraction_changed"
ROUTE399.fromNode = "KickTimer"
ROUTE399.toField = "set_fraction"
ROUTE399.toNode = "l_middle1_RotationInterpolator"

Scene19.children.append(ROUTE399)
ROUTE400 = x3d.ROUTE()
ROUTE400.fromField = "fraction_changed"
ROUTE400.fromNode = "KickTimer"
ROUTE400.toField = "set_fraction"
ROUTE400.toNode = "l_middle2_RotationInterpolator"

Scene19.children.append(ROUTE400)
ROUTE401 = x3d.ROUTE()
ROUTE401.fromField = "fraction_changed"
ROUTE401.fromNode = "KickTimer"
ROUTE401.toField = "set_fraction"
ROUTE401.toNode = "l_middle3_RotationInterpolator"

Scene19.children.append(ROUTE401)
ROUTE402 = x3d.ROUTE()
ROUTE402.fromField = "fraction_changed"
ROUTE402.fromNode = "KickTimer"
ROUTE402.toField = "set_fraction"
ROUTE402.toNode = "l_ring0_RotationInterpolator"

Scene19.children.append(ROUTE402)
ROUTE403 = x3d.ROUTE()
ROUTE403.fromField = "fraction_changed"
ROUTE403.fromNode = "KickTimer"
ROUTE403.toField = "set_fraction"
ROUTE403.toNode = "l_ring1_RotationInterpolator"

Scene19.children.append(ROUTE403)
ROUTE404 = x3d.ROUTE()
ROUTE404.fromField = "fraction_changed"
ROUTE404.fromNode = "KickTimer"
ROUTE404.toField = "set_fraction"
ROUTE404.toNode = "l_ring2_RotationInterpolator"

Scene19.children.append(ROUTE404)
ROUTE405 = x3d.ROUTE()
ROUTE405.fromField = "fraction_changed"
ROUTE405.fromNode = "KickTimer"
ROUTE405.toField = "set_fraction"
ROUTE405.toNode = "l_ring3_RotationInterpolator"

Scene19.children.append(ROUTE405)
ROUTE406 = x3d.ROUTE()
ROUTE406.fromField = "fraction_changed"
ROUTE406.fromNode = "KickTimer"
ROUTE406.toField = "set_fraction"
ROUTE406.toNode = "l_pinky0_RotationInterpolator"

Scene19.children.append(ROUTE406)
ROUTE407 = x3d.ROUTE()
ROUTE407.fromField = "fraction_changed"
ROUTE407.fromNode = "KickTimer"
ROUTE407.toField = "set_fraction"
ROUTE407.toNode = "l_pinky1_RotationInterpolator"

Scene19.children.append(ROUTE407)
ROUTE408 = x3d.ROUTE()
ROUTE408.fromField = "fraction_changed"
ROUTE408.fromNode = "KickTimer"
ROUTE408.toField = "set_fraction"
ROUTE408.toNode = "l_pinky2_RotationInterpolator"

Scene19.children.append(ROUTE408)
ROUTE409 = x3d.ROUTE()
ROUTE409.fromField = "fraction_changed"
ROUTE409.fromNode = "KickTimer"
ROUTE409.toField = "set_fraction"
ROUTE409.toNode = "l_pinky3_RotationInterpolator"

Scene19.children.append(ROUTE409)
ROUTE410 = x3d.ROUTE()
ROUTE410.fromField = "fraction_changed"
ROUTE410.fromNode = "KickTimer"
ROUTE410.toField = "set_fraction"
ROUTE410.toNode = "r_sternoclavicular_RotationInterpolator"

Scene19.children.append(ROUTE410)
ROUTE411 = x3d.ROUTE()
ROUTE411.fromField = "fraction_changed"
ROUTE411.fromNode = "KickTimer"
ROUTE411.toField = "set_fraction"
ROUTE411.toNode = "r_acromioclavicular_RotationInterpolator"

Scene19.children.append(ROUTE411)
ROUTE412 = x3d.ROUTE()
ROUTE412.fromField = "fraction_changed"
ROUTE412.fromNode = "KickTimer"
ROUTE412.toField = "set_fraction"
ROUTE412.toNode = "r_shoulder_RotationInterpolator"

Scene19.children.append(ROUTE412)
ROUTE413 = x3d.ROUTE()
ROUTE413.fromField = "fraction_changed"
ROUTE413.fromNode = "KickTimer"
ROUTE413.toField = "set_fraction"
ROUTE413.toNode = "r_elbow_RotationInterpolator"

Scene19.children.append(ROUTE413)
ROUTE414 = x3d.ROUTE()
ROUTE414.fromField = "fraction_changed"
ROUTE414.fromNode = "KickTimer"
ROUTE414.toField = "set_fraction"
ROUTE414.toNode = "r_wrist_RotationInterpolator"

Scene19.children.append(ROUTE414)
ROUTE415 = x3d.ROUTE()
ROUTE415.fromField = "fraction_changed"
ROUTE415.fromNode = "KickTimer"
ROUTE415.toField = "set_fraction"
ROUTE415.toNode = "r_thumb1_RotationInterpolator"

Scene19.children.append(ROUTE415)
ROUTE416 = x3d.ROUTE()
ROUTE416.fromField = "fraction_changed"
ROUTE416.fromNode = "KickTimer"
ROUTE416.toField = "set_fraction"
ROUTE416.toNode = "r_thumb2_RotationInterpolator"

Scene19.children.append(ROUTE416)
ROUTE417 = x3d.ROUTE()
ROUTE417.fromField = "fraction_changed"
ROUTE417.fromNode = "KickTimer"
ROUTE417.toField = "set_fraction"
ROUTE417.toNode = "r_thumb3_RotationInterpolator"

Scene19.children.append(ROUTE417)
ROUTE418 = x3d.ROUTE()
ROUTE418.fromField = "fraction_changed"
ROUTE418.fromNode = "KickTimer"
ROUTE418.toField = "set_fraction"
ROUTE418.toNode = "r_index0_RotationInterpolator"

Scene19.children.append(ROUTE418)
ROUTE419 = x3d.ROUTE()
ROUTE419.fromField = "fraction_changed"
ROUTE419.fromNode = "KickTimer"
ROUTE419.toField = "set_fraction"
ROUTE419.toNode = "r_index1_RotationInterpolator"

Scene19.children.append(ROUTE419)
ROUTE420 = x3d.ROUTE()
ROUTE420.fromField = "fraction_changed"
ROUTE420.fromNode = "KickTimer"
ROUTE420.toField = "set_fraction"
ROUTE420.toNode = "r_index2_RotationInterpolator"

Scene19.children.append(ROUTE420)
ROUTE421 = x3d.ROUTE()
ROUTE421.fromField = "fraction_changed"
ROUTE421.fromNode = "KickTimer"
ROUTE421.toField = "set_fraction"
ROUTE421.toNode = "r_index3_RotationInterpolator"

Scene19.children.append(ROUTE421)
ROUTE422 = x3d.ROUTE()
ROUTE422.fromField = "fraction_changed"
ROUTE422.fromNode = "KickTimer"
ROUTE422.toField = "set_fraction"
ROUTE422.toNode = "r_middle0_RotationInterpolator"

Scene19.children.append(ROUTE422)
ROUTE423 = x3d.ROUTE()
ROUTE423.fromField = "fraction_changed"
ROUTE423.fromNode = "KickTimer"
ROUTE423.toField = "set_fraction"
ROUTE423.toNode = "r_middle1_RotationInterpolator"

Scene19.children.append(ROUTE423)
ROUTE424 = x3d.ROUTE()
ROUTE424.fromField = "fraction_changed"
ROUTE424.fromNode = "KickTimer"
ROUTE424.toField = "set_fraction"
ROUTE424.toNode = "r_middle2_RotationInterpolator"

Scene19.children.append(ROUTE424)
ROUTE425 = x3d.ROUTE()
ROUTE425.fromField = "fraction_changed"
ROUTE425.fromNode = "KickTimer"
ROUTE425.toField = "set_fraction"
ROUTE425.toNode = "r_middle3_RotationInterpolator"

Scene19.children.append(ROUTE425)
ROUTE426 = x3d.ROUTE()
ROUTE426.fromField = "fraction_changed"
ROUTE426.fromNode = "KickTimer"
ROUTE426.toField = "set_fraction"
ROUTE426.toNode = "r_ring0_RotationInterpolator"

Scene19.children.append(ROUTE426)
ROUTE427 = x3d.ROUTE()
ROUTE427.fromField = "fraction_changed"
ROUTE427.fromNode = "KickTimer"
ROUTE427.toField = "set_fraction"
ROUTE427.toNode = "r_ring1_RotationInterpolator"

Scene19.children.append(ROUTE427)
ROUTE428 = x3d.ROUTE()
ROUTE428.fromField = "fraction_changed"
ROUTE428.fromNode = "KickTimer"
ROUTE428.toField = "set_fraction"
ROUTE428.toNode = "r_ring2_RotationInterpolator"

Scene19.children.append(ROUTE428)
ROUTE429 = x3d.ROUTE()
ROUTE429.fromField = "fraction_changed"
ROUTE429.fromNode = "KickTimer"
ROUTE429.toField = "set_fraction"
ROUTE429.toNode = "r_ring3_RotationInterpolator"

Scene19.children.append(ROUTE429)
ROUTE430 = x3d.ROUTE()
ROUTE430.fromField = "fraction_changed"
ROUTE430.fromNode = "KickTimer"
ROUTE430.toField = "set_fraction"
ROUTE430.toNode = "r_pinky0_RotationInterpolator"

Scene19.children.append(ROUTE430)
ROUTE431 = x3d.ROUTE()
ROUTE431.fromField = "fraction_changed"
ROUTE431.fromNode = "KickTimer"
ROUTE431.toField = "set_fraction"
ROUTE431.toNode = "r_pinky1_RotationInterpolator"

Scene19.children.append(ROUTE431)
ROUTE432 = x3d.ROUTE()
ROUTE432.fromField = "fraction_changed"
ROUTE432.fromNode = "KickTimer"
ROUTE432.toField = "set_fraction"
ROUTE432.toNode = "r_pinky2_RotationInterpolator"

Scene19.children.append(ROUTE432)
ROUTE433 = x3d.ROUTE()
ROUTE433.fromField = "fraction_changed"
ROUTE433.fromNode = "KickTimer"
ROUTE433.toField = "set_fraction"
ROUTE433.toNode = "r_pinky3_RotationInterpolator"

Scene19.children.append(ROUTE433)
"""Routes from Interpolators to Joe_ model Joints"""
ROUTE434 = x3d.ROUTE()
ROUTE434.fromField = "value_changed"
ROUTE434.fromNode = "HumanoidRoot_RotationInterpolator"
ROUTE434.toField = "set_rotation"
ROUTE434.toNode = "Joe_HumanoidRoot"

Scene19.children.append(ROUTE434)
ROUTE435 = x3d.ROUTE()
ROUTE435.fromField = "value_changed"
ROUTE435.fromNode = "HumanoidRoot_TranslationInterpolator"
ROUTE435.toField = "set_translation"
ROUTE435.toNode = "Joe_HumanoidRoot"

Scene19.children.append(ROUTE435)
ROUTE436 = x3d.ROUTE()
ROUTE436.fromField = "value_changed"
ROUTE436.fromNode = "sacroiliac_RotationInterpolator"
ROUTE436.toField = "set_rotation"
ROUTE436.toNode = "Joe_sacroiliac"

Scene19.children.append(ROUTE436)
ROUTE437 = x3d.ROUTE()
ROUTE437.fromField = "value_changed"
ROUTE437.fromNode = "l_hip_RotationInterpolator"
ROUTE437.toField = "set_rotation"
ROUTE437.toNode = "Joe_l_hip"

Scene19.children.append(ROUTE437)
ROUTE438 = x3d.ROUTE()
ROUTE438.fromField = "value_changed"
ROUTE438.fromNode = "l_knee_RotationInterpolator"
ROUTE438.toField = "set_rotation"
ROUTE438.toNode = "Joe_l_knee"

Scene19.children.append(ROUTE438)
ROUTE439 = x3d.ROUTE()
ROUTE439.fromField = "value_changed"
ROUTE439.fromNode = "l_ankle_RotationInterpolator"
ROUTE439.toField = "set_rotation"
ROUTE439.toNode = "Joe_l_ankle"

Scene19.children.append(ROUTE439)
ROUTE440 = x3d.ROUTE()
ROUTE440.fromField = "value_changed"
ROUTE440.fromNode = "l_subtalar_RotationInterpolator"
ROUTE440.toField = "set_rotation"
ROUTE440.toNode = "Joe_l_subtalar"

Scene19.children.append(ROUTE440)
ROUTE441 = x3d.ROUTE()
ROUTE441.fromField = "value_changed"
ROUTE441.fromNode = "l_midtarsal_RotationInterpolator"
ROUTE441.toField = "set_rotation"
ROUTE441.toNode = "Joe_l_midtarsal"

Scene19.children.append(ROUTE441)
ROUTE442 = x3d.ROUTE()
ROUTE442.fromField = "value_changed"
ROUTE442.fromNode = "l_metatarsal_RotationInterpolator"
ROUTE442.toField = "set_rotation"
ROUTE442.toNode = "Joe_l_metatarsal"

Scene19.children.append(ROUTE442)
ROUTE443 = x3d.ROUTE()
ROUTE443.fromField = "value_changed"
ROUTE443.fromNode = "r_hip_RotationInterpolator"
ROUTE443.toField = "set_rotation"
ROUTE443.toNode = "Joe_r_hip"

Scene19.children.append(ROUTE443)
ROUTE444 = x3d.ROUTE()
ROUTE444.fromField = "value_changed"
ROUTE444.fromNode = "r_knee_RotationInterpolator"
ROUTE444.toField = "set_rotation"
ROUTE444.toNode = "Joe_r_knee"

Scene19.children.append(ROUTE444)
ROUTE445 = x3d.ROUTE()
ROUTE445.fromField = "value_changed"
ROUTE445.fromNode = "r_ankle_RotationInterpolator"
ROUTE445.toField = "set_rotation"
ROUTE445.toNode = "Joe_r_ankle"

Scene19.children.append(ROUTE445)
ROUTE446 = x3d.ROUTE()
ROUTE446.fromField = "value_changed"
ROUTE446.fromNode = "r_subtalar_RotationInterpolator"
ROUTE446.toField = "set_rotation"
ROUTE446.toNode = "Joe_r_subtalar"

Scene19.children.append(ROUTE446)
ROUTE447 = x3d.ROUTE()
ROUTE447.fromField = "value_changed"
ROUTE447.fromNode = "r_midtarsal_RotationInterpolator"
ROUTE447.toField = "set_rotation"
ROUTE447.toNode = "Joe_r_midtarsal"

Scene19.children.append(ROUTE447)
ROUTE448 = x3d.ROUTE()
ROUTE448.fromField = "value_changed"
ROUTE448.fromNode = "r_metatarsal_RotationInterpolator"
ROUTE448.toField = "set_rotation"
ROUTE448.toNode = "Joe_r_metatarsal"

Scene19.children.append(ROUTE448)
ROUTE449 = x3d.ROUTE()
ROUTE449.fromField = "value_changed"
ROUTE449.fromNode = "vl5_RotationInterpolator"
ROUTE449.toField = "set_rotation"
ROUTE449.toNode = "Joe_vl5"

Scene19.children.append(ROUTE449)
ROUTE450 = x3d.ROUTE()
ROUTE450.fromField = "value_changed"
ROUTE450.fromNode = "vl4_RotationInterpolator"
ROUTE450.toField = "set_rotation"
ROUTE450.toNode = "Joe_vl4"

Scene19.children.append(ROUTE450)
ROUTE451 = x3d.ROUTE()
ROUTE451.fromField = "value_changed"
ROUTE451.fromNode = "vl3_RotationInterpolator"
ROUTE451.toField = "set_rotation"
ROUTE451.toNode = "Joe_vl3"

Scene19.children.append(ROUTE451)
ROUTE452 = x3d.ROUTE()
ROUTE452.fromField = "value_changed"
ROUTE452.fromNode = "vl2_RotationInterpolator"
ROUTE452.toField = "set_rotation"
ROUTE452.toNode = "Joe_vl2"

Scene19.children.append(ROUTE452)
ROUTE453 = x3d.ROUTE()
ROUTE453.fromField = "value_changed"
ROUTE453.fromNode = "vl1_RotationInterpolator"
ROUTE453.toField = "set_rotation"
ROUTE453.toNode = "Joe_vl1"

Scene19.children.append(ROUTE453)
ROUTE454 = x3d.ROUTE()
ROUTE454.fromField = "value_changed"
ROUTE454.fromNode = "vt12_RotationInterpolator"
ROUTE454.toField = "set_rotation"
ROUTE454.toNode = "Joe_vt12"

Scene19.children.append(ROUTE454)
ROUTE455 = x3d.ROUTE()
ROUTE455.fromField = "value_changed"
ROUTE455.fromNode = "vt11_RotationInterpolator"
ROUTE455.toField = "set_rotation"
ROUTE455.toNode = "Joe_vt11"

Scene19.children.append(ROUTE455)
ROUTE456 = x3d.ROUTE()
ROUTE456.fromField = "value_changed"
ROUTE456.fromNode = "vt10_RotationInterpolator"
ROUTE456.toField = "set_rotation"
ROUTE456.toNode = "Joe_vt10"

Scene19.children.append(ROUTE456)
ROUTE457 = x3d.ROUTE()
ROUTE457.fromField = "value_changed"
ROUTE457.fromNode = "vt9_RotationInterpolator"
ROUTE457.toField = "set_rotation"
ROUTE457.toNode = "Joe_vt9"

Scene19.children.append(ROUTE457)
ROUTE458 = x3d.ROUTE()
ROUTE458.fromField = "value_changed"
ROUTE458.fromNode = "vt8_RotationInterpolator"
ROUTE458.toField = "set_rotation"
ROUTE458.toNode = "Joe_vt8"

Scene19.children.append(ROUTE458)
ROUTE459 = x3d.ROUTE()
ROUTE459.fromField = "value_changed"
ROUTE459.fromNode = "vt7_RotationInterpolator"
ROUTE459.toField = "set_rotation"
ROUTE459.toNode = "Joe_vt7"

Scene19.children.append(ROUTE459)
ROUTE460 = x3d.ROUTE()
ROUTE460.fromField = "value_changed"
ROUTE460.fromNode = "vt6_RotationInterpolator"
ROUTE460.toField = "set_rotation"
ROUTE460.toNode = "Joe_vt6"

Scene19.children.append(ROUTE460)
ROUTE461 = x3d.ROUTE()
ROUTE461.fromField = "value_changed"
ROUTE461.fromNode = "vt5_RotationInterpolator"
ROUTE461.toField = "set_rotation"
ROUTE461.toNode = "Joe_vt5"

Scene19.children.append(ROUTE461)
ROUTE462 = x3d.ROUTE()
ROUTE462.fromField = "value_changed"
ROUTE462.fromNode = "vt4_RotationInterpolator"
ROUTE462.toField = "set_rotation"
ROUTE462.toNode = "Joe_vt4"

Scene19.children.append(ROUTE462)
ROUTE463 = x3d.ROUTE()
ROUTE463.fromField = "value_changed"
ROUTE463.fromNode = "vt3_RotationInterpolator"
ROUTE463.toField = "set_rotation"
ROUTE463.toNode = "Joe_vt3"

Scene19.children.append(ROUTE463)
ROUTE464 = x3d.ROUTE()
ROUTE464.fromField = "value_changed"
ROUTE464.fromNode = "vt2_RotationInterpolator"
ROUTE464.toField = "set_rotation"
ROUTE464.toNode = "Joe_vt2"

Scene19.children.append(ROUTE464)
ROUTE465 = x3d.ROUTE()
ROUTE465.fromField = "value_changed"
ROUTE465.fromNode = "vt1_RotationInterpolator"
ROUTE465.toField = "set_rotation"
ROUTE465.toNode = "Joe_vt1"

Scene19.children.append(ROUTE465)
ROUTE466 = x3d.ROUTE()
ROUTE466.fromField = "value_changed"
ROUTE466.fromNode = "vc7_RotationInterpolator"
ROUTE466.toField = "set_rotation"
ROUTE466.toNode = "Joe_vc7"

Scene19.children.append(ROUTE466)
ROUTE467 = x3d.ROUTE()
ROUTE467.fromField = "value_changed"
ROUTE467.fromNode = "vc6_RotationInterpolator"
ROUTE467.toField = "set_rotation"
ROUTE467.toNode = "Joe_vc6"

Scene19.children.append(ROUTE467)
ROUTE468 = x3d.ROUTE()
ROUTE468.fromField = "value_changed"
ROUTE468.fromNode = "vc5_RotationInterpolator"
ROUTE468.toField = "set_rotation"
ROUTE468.toNode = "Joe_vc5"

Scene19.children.append(ROUTE468)
ROUTE469 = x3d.ROUTE()
ROUTE469.fromField = "value_changed"
ROUTE469.fromNode = "vc4_RotationInterpolator"
ROUTE469.toField = "set_rotation"
ROUTE469.toNode = "Joe_vc4"

Scene19.children.append(ROUTE469)
ROUTE470 = x3d.ROUTE()
ROUTE470.fromField = "value_changed"
ROUTE470.fromNode = "vc3_RotationInterpolator"
ROUTE470.toField = "set_rotation"
ROUTE470.toNode = "Joe_vc3"

Scene19.children.append(ROUTE470)
ROUTE471 = x3d.ROUTE()
ROUTE471.fromField = "value_changed"
ROUTE471.fromNode = "vc2_RotationInterpolator"
ROUTE471.toField = "set_rotation"
ROUTE471.toNode = "Joe_vc2"

Scene19.children.append(ROUTE471)
ROUTE472 = x3d.ROUTE()
ROUTE472.fromField = "value_changed"
ROUTE472.fromNode = "vc1_RotationInterpolator"
ROUTE472.toField = "set_rotation"
ROUTE472.toNode = "Joe_vc1"

Scene19.children.append(ROUTE472)
ROUTE473 = x3d.ROUTE()
ROUTE473.fromField = "value_changed"
ROUTE473.fromNode = "skullbase_RotationInterpolator"
ROUTE473.toField = "set_rotation"
ROUTE473.toNode = "Joe_skullbase"

Scene19.children.append(ROUTE473)
ROUTE474 = x3d.ROUTE()
ROUTE474.fromField = "value_changed"
ROUTE474.fromNode = "l_eyelid_joint_RotationInterpolator"
ROUTE474.toField = "set_rotation"
ROUTE474.toNode = "Joe_l_eyelid_joint"

Scene19.children.append(ROUTE474)
ROUTE475 = x3d.ROUTE()
ROUTE475.fromField = "value_changed"
ROUTE475.fromNode = "l_eyeball_joint_RotationInterpolator"
ROUTE475.toField = "set_rotation"
ROUTE475.toNode = "Joe_l_eyeball_joint"

Scene19.children.append(ROUTE475)
ROUTE476 = x3d.ROUTE()
ROUTE476.fromField = "value_changed"
ROUTE476.fromNode = "l_eyebrow_joint_RotationInterpolator"
ROUTE476.toField = "set_rotation"
ROUTE476.toNode = "Joe_l_eyebrow_joint"

Scene19.children.append(ROUTE476)
ROUTE477 = x3d.ROUTE()
ROUTE477.fromField = "value_changed"
ROUTE477.fromNode = "r_eyelid_joint_RotationInterpolator"
ROUTE477.toField = "set_rotation"
ROUTE477.toNode = "Joe_r_eyelid_joint"

Scene19.children.append(ROUTE477)
ROUTE478 = x3d.ROUTE()
ROUTE478.fromField = "value_changed"
ROUTE478.fromNode = "r_eyeball_joint_RotationInterpolator"
ROUTE478.toField = "set_rotation"
ROUTE478.toNode = "Joe_r_eyeball_joint"

Scene19.children.append(ROUTE478)
ROUTE479 = x3d.ROUTE()
ROUTE479.fromField = "value_changed"
ROUTE479.fromNode = "r_eyebrow_joint_RotationInterpolator"
ROUTE479.toField = "set_rotation"
ROUTE479.toNode = "Joe_r_eyebrow_joint"

Scene19.children.append(ROUTE479)
ROUTE480 = x3d.ROUTE()
ROUTE480.fromField = "value_changed"
ROUTE480.fromNode = "temporomandibular_RotationInterpolator"
ROUTE480.toField = "set_rotation"
ROUTE480.toNode = "Joe_temporomandibular"

Scene19.children.append(ROUTE480)
ROUTE481 = x3d.ROUTE()
ROUTE481.fromField = "value_changed"
ROUTE481.fromNode = "l_sternoclavicular_RotationInterpolator"
ROUTE481.toField = "set_rotation"
ROUTE481.toNode = "Joe_l_sternoclavicular"

Scene19.children.append(ROUTE481)
ROUTE482 = x3d.ROUTE()
ROUTE482.fromField = "value_changed"
ROUTE482.fromNode = "l_acromioclavicular_RotationInterpolator"
ROUTE482.toField = "set_rotation"
ROUTE482.toNode = "Joe_l_acromioclavicular"

Scene19.children.append(ROUTE482)
ROUTE483 = x3d.ROUTE()
ROUTE483.fromField = "value_changed"
ROUTE483.fromNode = "l_shoulder_RotationInterpolator"
ROUTE483.toField = "set_rotation"
ROUTE483.toNode = "Joe_l_shoulder"

Scene19.children.append(ROUTE483)
ROUTE484 = x3d.ROUTE()
ROUTE484.fromField = "value_changed"
ROUTE484.fromNode = "l_elbow_RotationInterpolator"
ROUTE484.toField = "set_rotation"
ROUTE484.toNode = "Joe_l_elbow"

Scene19.children.append(ROUTE484)
ROUTE485 = x3d.ROUTE()
ROUTE485.fromField = "value_changed"
ROUTE485.fromNode = "l_wrist_RotationInterpolator"
ROUTE485.toField = "set_rotation"
ROUTE485.toNode = "Joe_l_wrist"

Scene19.children.append(ROUTE485)
ROUTE486 = x3d.ROUTE()
ROUTE486.fromField = "value_changed"
ROUTE486.fromNode = "l_thumb1_RotationInterpolator"
ROUTE486.toField = "set_rotation"
ROUTE486.toNode = "Joe_l_thumb1"

Scene19.children.append(ROUTE486)
ROUTE487 = x3d.ROUTE()
ROUTE487.fromField = "value_changed"
ROUTE487.fromNode = "l_thumb2_RotationInterpolator"
ROUTE487.toField = "set_rotation"
ROUTE487.toNode = "Joe_l_thumb2"

Scene19.children.append(ROUTE487)
ROUTE488 = x3d.ROUTE()
ROUTE488.fromField = "value_changed"
ROUTE488.fromNode = "l_thumb3_RotationInterpolator"
ROUTE488.toField = "set_rotation"
ROUTE488.toNode = "Joe_l_thumb3"

Scene19.children.append(ROUTE488)
ROUTE489 = x3d.ROUTE()
ROUTE489.fromField = "value_changed"
ROUTE489.fromNode = "l_index0_RotationInterpolator"
ROUTE489.toField = "set_rotation"
ROUTE489.toNode = "Joe_l_index0"

Scene19.children.append(ROUTE489)
ROUTE490 = x3d.ROUTE()
ROUTE490.fromField = "value_changed"
ROUTE490.fromNode = "l_index1_RotationInterpolator"
ROUTE490.toField = "set_rotation"
ROUTE490.toNode = "Joe_l_index1"

Scene19.children.append(ROUTE490)
ROUTE491 = x3d.ROUTE()
ROUTE491.fromField = "value_changed"
ROUTE491.fromNode = "l_index2_RotationInterpolator"
ROUTE491.toField = "set_rotation"
ROUTE491.toNode = "Joe_l_index2"

Scene19.children.append(ROUTE491)
ROUTE492 = x3d.ROUTE()
ROUTE492.fromField = "value_changed"
ROUTE492.fromNode = "l_index3_RotationInterpolator"
ROUTE492.toField = "set_rotation"
ROUTE492.toNode = "Joe_l_index3"

Scene19.children.append(ROUTE492)
ROUTE493 = x3d.ROUTE()
ROUTE493.fromField = "value_changed"
ROUTE493.fromNode = "l_middle0_RotationInterpolator"
ROUTE493.toField = "set_rotation"
ROUTE493.toNode = "Joe_l_middle0"

Scene19.children.append(ROUTE493)
ROUTE494 = x3d.ROUTE()
ROUTE494.fromField = "value_changed"
ROUTE494.fromNode = "l_middle1_RotationInterpolator"
ROUTE494.toField = "set_rotation"
ROUTE494.toNode = "Joe_l_middle1"

Scene19.children.append(ROUTE494)
ROUTE495 = x3d.ROUTE()
ROUTE495.fromField = "value_changed"
ROUTE495.fromNode = "l_middle2_RotationInterpolator"
ROUTE495.toField = "set_rotation"
ROUTE495.toNode = "Joe_l_middle2"

Scene19.children.append(ROUTE495)
ROUTE496 = x3d.ROUTE()
ROUTE496.fromField = "value_changed"
ROUTE496.fromNode = "l_middle3_RotationInterpolator"
ROUTE496.toField = "set_rotation"
ROUTE496.toNode = "Joe_l_middle3"

Scene19.children.append(ROUTE496)
ROUTE497 = x3d.ROUTE()
ROUTE497.fromField = "value_changed"
ROUTE497.fromNode = "l_ring0_RotationInterpolator"
ROUTE497.toField = "set_rotation"
ROUTE497.toNode = "Joe_l_ring0"

Scene19.children.append(ROUTE497)
ROUTE498 = x3d.ROUTE()
ROUTE498.fromField = "value_changed"
ROUTE498.fromNode = "l_ring1_RotationInterpolator"
ROUTE498.toField = "set_rotation"
ROUTE498.toNode = "Joe_l_ring1"

Scene19.children.append(ROUTE498)
ROUTE499 = x3d.ROUTE()
ROUTE499.fromField = "value_changed"
ROUTE499.fromNode = "l_ring2_RotationInterpolator"
ROUTE499.toField = "set_rotation"
ROUTE499.toNode = "Joe_l_ring2"

Scene19.children.append(ROUTE499)
ROUTE500 = x3d.ROUTE()
ROUTE500.fromField = "value_changed"
ROUTE500.fromNode = "l_ring3_RotationInterpolator"
ROUTE500.toField = "set_rotation"
ROUTE500.toNode = "Joe_l_ring3"

Scene19.children.append(ROUTE500)
ROUTE501 = x3d.ROUTE()
ROUTE501.fromField = "value_changed"
ROUTE501.fromNode = "l_pinky0_RotationInterpolator"
ROUTE501.toField = "set_rotation"
ROUTE501.toNode = "Joe_l_pinky0"

Scene19.children.append(ROUTE501)
ROUTE502 = x3d.ROUTE()
ROUTE502.fromField = "value_changed"
ROUTE502.fromNode = "l_pinky1_RotationInterpolator"
ROUTE502.toField = "set_rotation"
ROUTE502.toNode = "Joe_l_pinky1"

Scene19.children.append(ROUTE502)
ROUTE503 = x3d.ROUTE()
ROUTE503.fromField = "value_changed"
ROUTE503.fromNode = "l_pinky2_RotationInterpolator"
ROUTE503.toField = "set_rotation"
ROUTE503.toNode = "Joe_l_pinky2"

Scene19.children.append(ROUTE503)
ROUTE504 = x3d.ROUTE()
ROUTE504.fromField = "value_changed"
ROUTE504.fromNode = "l_pinky3_RotationInterpolator"
ROUTE504.toField = "set_rotation"
ROUTE504.toNode = "Joe_l_pinky3"

Scene19.children.append(ROUTE504)
ROUTE505 = x3d.ROUTE()
ROUTE505.fromField = "value_changed"
ROUTE505.fromNode = "r_sternoclavicular_RotationInterpolator"
ROUTE505.toField = "set_rotation"
ROUTE505.toNode = "Joe_r_sternoclavicular"

Scene19.children.append(ROUTE505)
ROUTE506 = x3d.ROUTE()
ROUTE506.fromField = "value_changed"
ROUTE506.fromNode = "r_acromioclavicular_RotationInterpolator"
ROUTE506.toField = "set_rotation"
ROUTE506.toNode = "Joe_r_acromioclavicular"

Scene19.children.append(ROUTE506)
ROUTE507 = x3d.ROUTE()
ROUTE507.fromField = "value_changed"
ROUTE507.fromNode = "r_shoulder_RotationInterpolator"
ROUTE507.toField = "set_rotation"
ROUTE507.toNode = "Joe_r_shoulder"

Scene19.children.append(ROUTE507)
ROUTE508 = x3d.ROUTE()
ROUTE508.fromField = "value_changed"
ROUTE508.fromNode = "r_elbow_RotationInterpolator"
ROUTE508.toField = "set_rotation"
ROUTE508.toNode = "Joe_r_elbow"

Scene19.children.append(ROUTE508)
ROUTE509 = x3d.ROUTE()
ROUTE509.fromField = "value_changed"
ROUTE509.fromNode = "r_wrist_RotationInterpolator"
ROUTE509.toField = "set_rotation"
ROUTE509.toNode = "Joe_r_wrist"

Scene19.children.append(ROUTE509)
ROUTE510 = x3d.ROUTE()
ROUTE510.fromField = "value_changed"
ROUTE510.fromNode = "r_thumb1_RotationInterpolator"
ROUTE510.toField = "set_rotation"
ROUTE510.toNode = "Joe_r_thumb1"

Scene19.children.append(ROUTE510)
ROUTE511 = x3d.ROUTE()
ROUTE511.fromField = "value_changed"
ROUTE511.fromNode = "r_thumb2_RotationInterpolator"
ROUTE511.toField = "set_rotation"
ROUTE511.toNode = "Joe_r_thumb2"

Scene19.children.append(ROUTE511)
ROUTE512 = x3d.ROUTE()
ROUTE512.fromField = "value_changed"
ROUTE512.fromNode = "r_thumb3_RotationInterpolator"
ROUTE512.toField = "set_rotation"
ROUTE512.toNode = "Joe_r_thumb3"

Scene19.children.append(ROUTE512)
ROUTE513 = x3d.ROUTE()
ROUTE513.fromField = "value_changed"
ROUTE513.fromNode = "r_index0_RotationInterpolator"
ROUTE513.toField = "set_rotation"
ROUTE513.toNode = "Joe_r_index0"

Scene19.children.append(ROUTE513)
ROUTE514 = x3d.ROUTE()
ROUTE514.fromField = "value_changed"
ROUTE514.fromNode = "r_index1_RotationInterpolator"
ROUTE514.toField = "set_rotation"
ROUTE514.toNode = "Joe_r_index1"

Scene19.children.append(ROUTE514)
ROUTE515 = x3d.ROUTE()
ROUTE515.fromField = "value_changed"
ROUTE515.fromNode = "r_index2_RotationInterpolator"
ROUTE515.toField = "set_rotation"
ROUTE515.toNode = "Joe_r_index2"

Scene19.children.append(ROUTE515)
ROUTE516 = x3d.ROUTE()
ROUTE516.fromField = "value_changed"
ROUTE516.fromNode = "r_index3_RotationInterpolator"
ROUTE516.toField = "set_rotation"
ROUTE516.toNode = "Joe_r_index3"

Scene19.children.append(ROUTE516)
ROUTE517 = x3d.ROUTE()
ROUTE517.fromField = "value_changed"
ROUTE517.fromNode = "r_middle0_RotationInterpolator"
ROUTE517.toField = "set_rotation"
ROUTE517.toNode = "Joe_r_middle0"

Scene19.children.append(ROUTE517)
ROUTE518 = x3d.ROUTE()
ROUTE518.fromField = "value_changed"
ROUTE518.fromNode = "r_middle1_RotationInterpolator"
ROUTE518.toField = "set_rotation"
ROUTE518.toNode = "Joe_r_middle1"

Scene19.children.append(ROUTE518)
ROUTE519 = x3d.ROUTE()
ROUTE519.fromField = "value_changed"
ROUTE519.fromNode = "r_middle2_RotationInterpolator"
ROUTE519.toField = "set_rotation"
ROUTE519.toNode = "Joe_r_middle2"

Scene19.children.append(ROUTE519)
ROUTE520 = x3d.ROUTE()
ROUTE520.fromField = "value_changed"
ROUTE520.fromNode = "r_middle3_RotationInterpolator"
ROUTE520.toField = "set_rotation"
ROUTE520.toNode = "Joe_r_middle3"

Scene19.children.append(ROUTE520)
ROUTE521 = x3d.ROUTE()
ROUTE521.fromField = "value_changed"
ROUTE521.fromNode = "r_ring0_RotationInterpolator"
ROUTE521.toField = "set_rotation"
ROUTE521.toNode = "Joe_r_ring0"

Scene19.children.append(ROUTE521)
ROUTE522 = x3d.ROUTE()
ROUTE522.fromField = "value_changed"
ROUTE522.fromNode = "r_ring1_RotationInterpolator"
ROUTE522.toField = "set_rotation"
ROUTE522.toNode = "Joe_r_ring1"

Scene19.children.append(ROUTE522)
ROUTE523 = x3d.ROUTE()
ROUTE523.fromField = "value_changed"
ROUTE523.fromNode = "r_ring2_RotationInterpolator"
ROUTE523.toField = "set_rotation"
ROUTE523.toNode = "Joe_r_ring2"

Scene19.children.append(ROUTE523)
ROUTE524 = x3d.ROUTE()
ROUTE524.fromField = "value_changed"
ROUTE524.fromNode = "r_ring3_RotationInterpolator"
ROUTE524.toField = "set_rotation"
ROUTE524.toNode = "Joe_r_ring3"

Scene19.children.append(ROUTE524)
ROUTE525 = x3d.ROUTE()
ROUTE525.fromField = "value_changed"
ROUTE525.fromNode = "r_pinky0_RotationInterpolator"
ROUTE525.toField = "set_rotation"
ROUTE525.toNode = "Joe_r_pinky0"

Scene19.children.append(ROUTE525)
ROUTE526 = x3d.ROUTE()
ROUTE526.fromField = "value_changed"
ROUTE526.fromNode = "r_pinky1_RotationInterpolator"
ROUTE526.toField = "set_rotation"
ROUTE526.toNode = "Joe_r_pinky1"

Scene19.children.append(ROUTE526)
ROUTE527 = x3d.ROUTE()
ROUTE527.fromField = "value_changed"
ROUTE527.fromNode = "r_pinky2_RotationInterpolator"
ROUTE527.toField = "set_rotation"
ROUTE527.toNode = "Joe_r_pinky2"

Scene19.children.append(ROUTE527)
ROUTE528 = x3d.ROUTE()
ROUTE528.fromField = "value_changed"
ROUTE528.fromNode = "r_pinky3_RotationInterpolator"
ROUTE528.toField = "set_rotation"
ROUTE528.toNode = "Joe_r_pinky3"

Scene19.children.append(ROUTE528)
Group529 = x3d.Group()
Group529.DEF = "DisplacersAnimationGroup"
"""TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor"""
ScalarInterpolator530 = x3d.ScalarInterpolator()
ScalarInterpolator530.DEF = "skull_tipInterpolator"
ScalarInterpolator530.key = [0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]
ScalarInterpolator530.keyValue = [0,0,0,0,0.2,0.4,1,0,1,0.4,0]

Group529.children.append(ScalarInterpolator530)
ROUTE531 = x3d.ROUTE()
ROUTE531.fromField = "fraction_changed"
ROUTE531.fromNode = "KickTimer"
ROUTE531.toField = "set_fraction"
ROUTE531.toNode = "skull_tipInterpolator"

Group529.children.append(ROUTE531)
ROUTE532 = x3d.ROUTE()
ROUTE532.fromField = "value_changed"
ROUTE532.fromNode = "skull_tipInterpolator"
ROUTE532.toField = "weight"
ROUTE532.toNode = "Joe_skull_tip_raiser_action"

Group529.children.append(ROUTE532)

Scene19.children.append(Group529)
Group533 = x3d.Group()
Group533.DEF = "SkinTextureTransformAnimationGroup"
ScalarInterpolator534 = x3d.ScalarInterpolator()
ScalarInterpolator534.DEF = "SkinTextureTransformInterpolator"
ScalarInterpolator534.key = [0,0.2,0.4,0.5,0.6,0.7,0.8,1]
ScalarInterpolator534.keyValue = [0,0,0,0,0,1,2,0]

Group533.children.append(ScalarInterpolator534)
ROUTE535 = x3d.ROUTE()
ROUTE535.fromField = "fraction_changed"
ROUTE535.fromNode = "KickTimer"
ROUTE535.toField = "set_fraction"
ROUTE535.toNode = "SkinTextureTransformInterpolator"

Group533.children.append(ROUTE535)
ROUTE536 = x3d.ROUTE()
ROUTE536.fromField = "value_changed"
ROUTE536.fromNode = "SkinTextureTransformInterpolator"
ROUTE536.toField = "rotation"
ROUTE536.toNode = "KickTextureTransform"

Group533.children.append(ROUTE536)

Scene19.children.append(Group533)
Group537 = x3d.Group()
Transform538 = x3d.Transform()
Transform538.DEF = "SBall"
Transform538.rotation = [0.7,0,0.7,0.1]
Transform538.scale = [0.23,0.23,0.23]
Transform538.translation = [-0.916,0.37,-0.92]
Shape539 = x3d.Shape()
Shape539.DEF = "ball_Shape"
Appearance540 = x3d.Appearance()
Appearance540.DEF = "ball_Appearance"
Material541 = x3d.Material()
Material541.DEF = "ball_Material"
Material541.diffuseColor = [0.3,0.3,1]
Material541.emissiveColor = [0.3,0.3,0.33]

Appearance540.material = Material541
ImageTexture542 = x3d.ImageTexture()
ImageTexture542.USE = "JoeSkinImageTexture"

Appearance540.texture = ImageTexture542

Shape539.appearance = Appearance540
IndexedFaceSet543 = x3d.IndexedFaceSet()
IndexedFaceSet543.DEF = "ball_IndexedFaceSet"
IndexedFaceSet543.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate544 = x3d.Coordinate()
Coordinate544.DEF = "Ball_Coordinates"

IndexedFaceSet543.coord = Coordinate544

Shape539.geometry = IndexedFaceSet543

Transform538.children.append(Shape539)
Viewpoint545 = x3d.Viewpoint()
Viewpoint545.DEF = "ballView_1"
Viewpoint545.description = "Ball View"

Transform538.children.append(Viewpoint545)

Group537.children.append(Transform538)
"""Ball Animation interpolators"""
PositionInterpolator546 = x3d.PositionInterpolator()
PositionInterpolator546.DEF = "ball_TranslationInterpolator"
PositionInterpolator546.key = [0,0.4,0.409,1]

Group537.children.append(PositionInterpolator546)
OrientationInterpolator547 = x3d.OrientationInterpolator()
OrientationInterpolator547.DEF = "ball_RotationInterpolator"
OrientationInterpolator547.key = [0,0.4,0.41,0.71,1]

Group537.children.append(OrientationInterpolator547)
"""Ball Animation Routes"""
ROUTE548 = x3d.ROUTE()
ROUTE548.fromField = "fraction_changed"
ROUTE548.fromNode = "KickTimer"
ROUTE548.toField = "set_fraction"
ROUTE548.toNode = "ball_TranslationInterpolator"

Group537.children.append(ROUTE548)
ROUTE549 = x3d.ROUTE()
ROUTE549.fromField = "value_changed"
ROUTE549.fromNode = "ball_TranslationInterpolator"
ROUTE549.toField = "set_translation"
ROUTE549.toNode = "SBall"

Group537.children.append(ROUTE549)
ROUTE550 = x3d.ROUTE()
ROUTE550.fromField = "fraction_changed"
ROUTE550.fromNode = "KickTimer"
ROUTE550.toField = "set_fraction"
ROUTE550.toNode = "ball_RotationInterpolator"

Group537.children.append(ROUTE550)
ROUTE551 = x3d.ROUTE()
ROUTE551.fromField = "value_changed"
ROUTE551.fromNode = "ball_RotationInterpolator"
ROUTE551.toField = "set_rotation"
ROUTE551.toNode = "SBall"

Group537.children.append(ROUTE551)

Scene19.children.append(Group537)
Group552 = x3d.Group()
Transform553 = x3d.Transform()
Transform553.scale = [0.2,0.2,0.2]
Shape554 = x3d.Shape()
Shape554.USE = "AxisLinesShape"

Transform553.children.append(Shape554)

Group552.children.append(Transform553)
Transform555 = x3d.Transform()
Transform555.DEF = "Circle0"
Transform555.scale = [1.175,1,1.175]
Shape556 = x3d.Shape()
Shape556.DEF = "circle_Shape"
Appearance557 = x3d.Appearance()
Appearance557.DEF = "circle0_Appearance"
Material558 = x3d.Material()
Material558.DEF = "circle0_Material"
Material558.ambientIntensity = 0.9
Material558.diffuseColor = [0.9,0,0.7]
Material558.emissiveColor = [0.425,0.486,1]

Appearance557.material = Material558

Shape556.appearance = Appearance557
IndexedLineSet559 = x3d.IndexedLineSet()
IndexedLineSet559.DEF = "Orbit1"
IndexedLineSet559.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate560 = x3d.Coordinate()
Coordinate560.DEF = "circle_Coordinates"

IndexedLineSet559.coord = Coordinate560

Shape556.geometry = IndexedLineSet559

Transform555.children.append(Shape556)

Group552.children.append(Transform555)
Transform561 = x3d.Transform()
Transform561.DEF = "Circle1"
Transform561.scale = [0.5,1,0.5]
Shape562 = x3d.Shape()
Shape562.DEF = "circle1_Shape"
Appearance563 = x3d.Appearance()
Appearance563.DEF = "circle1_Appearance"
Material564 = x3d.Material()
Material564.DEF = "circle1_Material"
Material564.diffuseColor = [0.9,0,0.7]
Material564.emissiveColor = [0.424956,0.483976,1]

Appearance563.material = Material564

Shape562.appearance = Appearance563
IndexedLineSet565 = x3d.IndexedLineSet()
IndexedLineSet565.USE = "Orbit1"

Shape562.geometry = IndexedLineSet565

Transform561.children.append(Shape562)

Group552.children.append(Transform561)
Transform566 = x3d.Transform()
Transform566.DEF = "Circle2"
Transform566.scale = [0.25,1,0.25]
Shape567 = x3d.Shape()
Shape567.DEF = "circle2_Shape"
Appearance568 = x3d.Appearance()
Appearance568.DEF = "circle2_Appearance"
Material569 = x3d.Material()
Material569.DEF = "circle2_Material"
Material569.diffuseColor = [0.9,0,0.7]
Material569.emissiveColor = [0.424956,0.483976,1]

Appearance568.material = Material569

Shape567.appearance = Appearance568
IndexedLineSet570 = x3d.IndexedLineSet()
IndexedLineSet570.USE = "Orbit1"

Shape567.geometry = IndexedLineSet570

Transform566.children.append(Shape567)

Group552.children.append(Transform566)

Scene19.children.append(Group552)

X3D0.Scene = Scene19
f = open("../data/JoeSkinTexcoordDisplacerKick.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeSkinTexcoordDisplacerKick.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

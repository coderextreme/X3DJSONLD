print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 2

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JoeSkeletonSkinSiteSaluteWalk.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe D. Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Michalis Kamburelis"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translator"
meta7.content = "Don Brutzman"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translator"
meta8.content = "Joe D. Williams"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "9 January 2004"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "translated"
meta10.content = "4 December 2022"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "modified"
meta11.content = "16 March 2026"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "TODO"
meta12.content = "X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "JoeSkeletonSkinSiteSaluteWalk.original.x3dv"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "Image"
meta16.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "drawing"
meta17.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Image"
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "Image"
meta23.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "Image"
meta24.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "Image"
meta25.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "generator"
meta26.content = "tovrmlx3d, https://castle-engine.io/convert.php"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "reference"
meta27.content = "https://castle-engine.io/view3dscene.php#section_converting"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "generator"
meta28.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "generator"
meta29.content = "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "identifier"
meta30.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "license"
meta31.content = "../license.html"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "generator"
meta32.content = "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"

head1.children.append(meta32)

X3D0.head = head1
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.info = ["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"]
WorldInfo34.title = "JoeSkeletonSkinSiteSaluteWalk.x3d"

Scene33.children.append(WorldInfo34)
NavigationInfo35 = x3d.NavigationInfo(DEF="HeadlightOnRevealsSkinTextureAndColors")

Scene33.children.append(NavigationInfo35)
Background36 = x3d.Background()
Background36.groundAngle = [1.57]
Background36.groundColor = [(0, 0.1, 0),(0, 0.1, 0)]
Background36.skyColor = [(0, 0, 0.1)]

Scene33.children.append(Background36)
Transform37 = x3d.Transform(DEF="cordsysfloor")
Transform37.scale = [0.175,0.175,0.175]
Inline38 = x3d.Inline(DEF="CoordinateAxes")
Inline38.url = ["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]

Transform37.children.append(Inline38)

Scene33.children.append(Transform37)
Scene33.children.append(x3d.Comment("""Authoring hint: these axes are aligned within local coordinate system"""))
Group39 = x3d.Group(DEF="ViewpointGroup")
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Front Up View"
Viewpoint40.orientation = [-1,-1,0,0.55]
Viewpoint40.position = [-1,2,2.5]

Group39.children.append(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "From Left View"
Viewpoint41.orientation = [0.3,1,0,-1.57]
Viewpoint41.position = [-2.5,1.5,0]

Group39.children.append(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "Front Mid View"
Viewpoint42.position = [0,0.5,1.25]

Group39.children.append(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.description = "Front Feet View"
Viewpoint43.position = [0,0,0.75]

Group39.children.append(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "From Right View"
Viewpoint44.orientation = [0,1,0,1.57]
Viewpoint44.position = [1,1,0]

Group39.children.append(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.centerOfRotation = [0,1.65,0]
Viewpoint45.description = "Front Head View"
Viewpoint45.position = [0,1.65,0.75]

Group39.children.append(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.description = "Front Mid View"
Viewpoint46.position = [0,1,1.75]

Group39.children.append(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.description = "Rear View"
Viewpoint47.orientation = [0,1,0,3.14]
Viewpoint47.position = [0,1.5,-4]

Group39.children.append(Viewpoint47)
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.description = "Top View"
Viewpoint48.orientation = [1,0,0,-1.57]
Viewpoint48.position = [0,4,0]

Group39.children.append(Viewpoint48)
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.description = "Bottom View"
Viewpoint49.orientation = [1,0,0,1.57]
Viewpoint49.position = [0,-4,0]

Group39.children.append(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.description = "Right View"
Viewpoint50.orientation = [0,1,0,1.57]
Viewpoint50.position = [4,1.5,0]

Group39.children.append(Viewpoint50)

Scene33.children.append(Group39)
Group51 = x3d.Group(DEF="VisualizationShapes")
Group51.visible = False
Transform52 = x3d.Transform()
Transform52.scale = [5,5,5]
Transform52.translation = [0,2.1,0]
Shape53 = x3d.Shape(DEF="jointbox")
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.ambientIntensity = 0.5
Material55.diffuseColor = [0,0,0]
Material55.shininess = 1

Appearance54.material = Material55

Shape53.appearance = Appearance54
IndexedFaceSet56 = x3d.IndexedFaceSet()
IndexedFaceSet56.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet56.creaseAngle = 0.1
Color57 = x3d.Color()
Color57.color = [(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 1, 1),(0, 1, 1),(1, 1, 0)]

IndexedFaceSet56.color = Color57
Coordinate58 = x3d.Coordinate(DEF="boxCoords")
Coordinate58.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.0157),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet56.coord = Coordinate58

Shape53.geometry = IndexedFaceSet56

Transform52.children.append(Shape53)

Group51.children.append(Transform52)
Transform59 = x3d.Transform()
Transform59.scale = [0.1,0.1,0.1]
Transform59.translation = [-0.2,0.773,-0.016]
Shape60 = x3d.Shape(DEF="sitebox")
Appearance61 = x3d.Appearance()
Material62 = x3d.Material()
Material62.ambientIntensity = 1
Material62.diffuseColor = [1,0,0]
Material62.emissiveColor = [1,0,0]
Material62.shininess = 0.7
Material62.specularColor = [1,0,0]

Appearance61.material = Material62

Shape60.appearance = Appearance61
IndexedFaceSet63 = x3d.IndexedFaceSet()
IndexedFaceSet63.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet63.creaseAngle = 0.1
Coordinate64 = x3d.Coordinate(USE="boxCoords")

IndexedFaceSet63.coord = Coordinate64

Shape60.geometry = IndexedFaceSet63

Transform59.children.append(Shape60)

Group51.children.append(Transform59)
Transform65 = x3d.Transform()
Transform65.scale = [0.1,0.1,0.1]
Transform65.translation = [0,0.2,0]
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance(DEF="SegmentLine")
Material68 = x3d.Material()
Material68.diffuseColor = [0,1,0]
Material68.emissiveColor = [0,1,0]
Material68.specularColor = [0,1,0]

Appearance67.material = Material68

Shape66.appearance = Appearance67
IndexedLineSet69 = x3d.IndexedLineSet()
IndexedLineSet69.coordIndex = [0,1,-1]
Coordinate70 = x3d.Coordinate()
Coordinate70.point = [(0, 0, 0),(0, 0.0001, 0)]

IndexedLineSet69.coord = Coordinate70

Shape66.geometry = IndexedLineSet69

Transform65.children.append(Shape66)

Group51.children.append(Transform65)
Transform71 = x3d.Transform()
Transform71.scale = [0.1,0.1,0.1]
Transform71.translation = [-0.2,0.773,-0.016]
Shape72 = x3d.Shape(DEF="skinsphere")
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.ambientIntensity = 0.5
Material74.diffuseColor = [0,1,0]
Material74.emissiveColor = [0,1,0]
Material74.shininess = 1
Material74.specularColor = [0,1,0]

Appearance73.material = Material74

Shape72.appearance = Appearance73
Sphere75 = x3d.Sphere()
Sphere75.radius = 0.005

Shape72.geometry = Sphere75

Transform71.children.append(Shape72)

Group51.children.append(Transform71)

Scene33.children.append(Group51)
Group76 = x3d.Group(DEF="SpecHumanoid")
Group77 = x3d.Group(DEF="JoeISOHumanoid")
HAnimHumanoid78 = x3d.HAnimHumanoid(DEF="Joe_Human")
HAnimHumanoid78.name = "Human"
HAnimHumanoid78.loa = 4
HAnimHumanoid78.version = "2.0"
HAnimHumanoid78.children.append(x3d.Comment("""original HAnimHumanoid info='\"humanoidVersion=2.0\"'"""))
HAnimHumanoid78.children.append(x3d.Comment("""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""))
HAnimHumanoid78.children.append(x3d.Comment("""</LOD>"""))
MetadataSet79 = x3d.MetadataSet()
MetadataSet79.name = "HAnimHumanoid.info"
MetadataSet79.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString80 = x3d.MetadataString()
MetadataString80.name = "humanoidVersion"
MetadataString80.value = ["2.0"]

if MetadataSet79.value is None:
    MetadataSet79.value = []
MetadataSet79.value.append(MetadataString80)

HAnimHumanoid78.metadata = MetadataSet79
HAnimJoint81 = x3d.HAnimJoint(DEF="Joe_humanoid_root")
HAnimJoint81.name = "humanoid_root"
HAnimJoint81.center = [0,0.875,0]
HAnimSegment82 = x3d.HAnimSegment(DEF="Joe_sacrum")
HAnimSegment82.name = "sacrum"
Transform83 = x3d.Transform()
Transform83.translation = [0,0.875,0]
Shape84 = x3d.Shape(USE="jointbox")

Transform83.children.append(Shape84)

HAnimSegment82.children.append(Transform83)
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance(USE="SegmentLine")

Shape85.appearance = Appearance86
IndexedLineSet87 = x3d.IndexedLineSet()
IndexedLineSet87.coordIndex = [0,1,-1]
Coordinate88 = x3d.Coordinate()
Coordinate88.point = [(0, 0.875, 0),(0, 0.92, 0)]

IndexedLineSet87.coord = Coordinate88

Shape85.geometry = IndexedLineSet87

HAnimSegment82.children.append(Shape85)
Transform89 = x3d.Transform()
Transform89.translation = [0,0.92,0.08]
Shape90 = x3d.Shape(USE="skinsphere")

Transform89.children.append(Shape90)

HAnimSegment82.children.append(Transform89)
Transform91 = x3d.Transform()
Transform91.translation = [0,0.87,-0.022]
Shape92 = x3d.Shape(USE="skinsphere")

Transform91.children.append(Shape92)

HAnimSegment82.children.append(Transform91)

HAnimJoint81.children.append(HAnimSegment82)
HAnimJoint93 = x3d.HAnimJoint(DEF="Joe_sacroiliac")
HAnimJoint93.name = "sacroiliac"
HAnimJoint93.center = [0,0.92,0]
HAnimJoint93.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint93.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimSegment94 = x3d.HAnimSegment(DEF="Joe_pelvis")
HAnimSegment94.name = "pelvis"
Transform95 = x3d.Transform()
Transform95.translation = [0,0.9149,0.0016]
Transform96 = x3d.Transform()
Shape97 = x3d.Shape(USE="jointbox")

Transform96.children.append(Shape97)

Transform95.children.append(Transform96)

HAnimSegment94.children.append(Transform95)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance(USE="SegmentLine")

Shape98.appearance = Appearance99
IndexedLineSet100 = x3d.IndexedLineSet()
IndexedLineSet100.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate101 = x3d.Coordinate()
Coordinate101.point = [(0, 0.92, 0),(0.0961, 0.9124, 0),(-0.095, 0.9171, 0.0029),(0, 1.045, -0.095)]

IndexedLineSet100.coord = Coordinate101

Shape98.geometry = IndexedLineSet100

HAnimSegment94.children.append(Shape98)
HAnimSite102 = x3d.HAnimSite(DEF="Joe_l_iliocristale_pt")
HAnimSite102.name = "l_iliocristale_pt"
HAnimSite102.translation = [0.1425,1.065,0.0033]
Shape103 = x3d.Shape(USE="sitebox")

HAnimSite102.children.append(Shape103)

HAnimSegment94.children.append(HAnimSite102)
HAnimSite104 = x3d.HAnimSite(DEF="Joe_l_trochanterion_pt")
HAnimSite104.name = "l_trochanterion_pt"
HAnimSite104.translation = [0.15,0.9,-0.01]
Shape105 = x3d.Shape(USE="sitebox")

HAnimSite104.children.append(Shape105)

HAnimSegment94.children.append(HAnimSite104)
HAnimSite106 = x3d.HAnimSite(DEF="Joe_r_iliocristale_pt")
HAnimSite106.name = "r_iliocristale_pt"
HAnimSite106.translation = [-0.1425,1.065,0.0033]
Shape107 = x3d.Shape(USE="sitebox")

HAnimSite106.children.append(Shape107)

HAnimSegment94.children.append(HAnimSite106)
HAnimSite108 = x3d.HAnimSite(DEF="Joe_r_trochanterion_pt")
HAnimSite108.name = "r_trochanterion_pt"
HAnimSite108.translation = [-0.15,0.9,-0.01]
Shape109 = x3d.Shape(USE="sitebox")

HAnimSite108.children.append(Shape109)

HAnimSegment94.children.append(HAnimSite108)
HAnimSite110 = x3d.HAnimSite(DEF="Joe_l_asis_pt")
HAnimSite110.name = "l_asis_pt"
HAnimSite110.translation = [0.0935,1.03,0.075]
Shape111 = x3d.Shape(USE="sitebox")

HAnimSite110.children.append(Shape111)

HAnimSegment94.children.append(HAnimSite110)
HAnimSite112 = x3d.HAnimSite(DEF="Joe_r_asis_pt")
HAnimSite112.name = "r_asis_pt"
HAnimSite112.translation = [-0.0935,1.03,0.075]
Shape113 = x3d.Shape(USE="sitebox")

HAnimSite112.children.append(Shape113)

HAnimSegment94.children.append(HAnimSite112)
HAnimSite114 = x3d.HAnimSite(DEF="Joe_l_psis_pt")
HAnimSite114.name = "l_psis_pt"
HAnimSite114.translation = [0.0773,1.019,-0.12]
Shape115 = x3d.Shape(USE="sitebox")

HAnimSite114.children.append(Shape115)

HAnimSegment94.children.append(HAnimSite114)
HAnimSite116 = x3d.HAnimSite(DEF="Joe_r_psis_pt")
HAnimSite116.name = "r_psis_pt"
HAnimSite116.translation = [-0.0773,1.019,-0.12]
Shape117 = x3d.Shape(USE="sitebox")

HAnimSite116.children.append(Shape117)

HAnimSegment94.children.append(HAnimSite116)
HAnimSite118 = x3d.HAnimSite(DEF="Joe_floormarker_pt")
HAnimSite118.name = "floormarker_pt"
Transform119 = x3d.Transform()
Transform119.scale = [3,3,3]
Shape120 = x3d.Shape(USE="sitebox")

Transform119.children.append(Shape120)

HAnimSite118.children.append(Transform119)

HAnimSegment94.children.append(HAnimSite118)
HAnimSite121 = x3d.HAnimSite(DEF="Joe_crotch_pt")
HAnimSite121.name = "crotch_pt"
HAnimSite121.translation = [0,0.87,-0.022]
Shape122 = x3d.Shape(USE="sitebox")

HAnimSite121.children.append(Shape122)

HAnimSegment94.children.append(HAnimSite121)

HAnimJoint93.children.append(HAnimSegment94)
HAnimJoint123 = x3d.HAnimJoint(DEF="Joe_l_hip")
HAnimJoint123.name = "l_hip"
HAnimJoint123.center = [0.1,0.92,0]
HAnimJoint123.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint123.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment124 = x3d.HAnimSegment(DEF="Joe_l_thigh")
HAnimSegment124.name = "l_thigh"
Transform125 = x3d.Transform()
Transform125.translation = [0.1,0.92,0]
Shape126 = x3d.Shape(USE="jointbox")

Transform125.children.append(Shape126)

HAnimSegment124.children.append(Transform125)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance(USE="SegmentLine")

Shape127.appearance = Appearance128
IndexedLineSet129 = x3d.IndexedLineSet()
IndexedLineSet129.coordIndex = [0,1,-1]
Coordinate130 = x3d.Coordinate()
Coordinate130.point = [(0.1, 0.92, 0),(0.115, 0.466, 0)]

IndexedLineSet129.coord = Coordinate130

Shape127.geometry = IndexedLineSet129

HAnimSegment124.children.append(Shape127)
Transform131 = x3d.Transform()
Transform131.translation = [0.1,0.9,0.0775]
Shape132 = x3d.Shape(USE="skinsphere")

Transform131.children.append(Shape132)

HAnimSegment124.children.append(Transform131)
Transform133 = x3d.Transform()
Transform133.translation = [0.079,0.92,-0.14]
Shape134 = x3d.Shape(USE="skinsphere")

Transform133.children.append(Shape134)

HAnimSegment124.children.append(Transform133)
Transform135 = x3d.Transform()
Transform135.translation = [0.171,0.65,0]
Shape136 = x3d.Shape(USE="skinsphere")

Transform135.children.append(Shape136)

HAnimSegment124.children.append(Transform135)
Transform137 = x3d.Transform()
Transform137.translation = [0.02,0.65,0]
Shape138 = x3d.Shape(USE="skinsphere")

Transform137.children.append(Shape138)

HAnimSegment124.children.append(Transform137)
Transform139 = x3d.Transform()
Transform139.translation = [0.1,0.65,-0.08]
Shape140 = x3d.Shape(USE="skinsphere")

Transform139.children.append(Shape140)

HAnimSegment124.children.append(Transform139)
Transform141 = x3d.Transform()
Transform141.translation = [0.1,0.65,0.07]
Shape142 = x3d.Shape(USE="skinsphere")

Transform141.children.append(Shape142)

HAnimSegment124.children.append(Transform141)
HAnimSite143 = x3d.HAnimSite(DEF="Joe_l_knee_crease_pt")
HAnimSite143.name = "l_knee_crease_pt"
HAnimSite143.translation = [0.115,0.466,-0.055]
Shape144 = x3d.Shape(USE="sitebox")

HAnimSite143.children.append(Shape144)

HAnimSegment124.children.append(HAnimSite143)
HAnimSite145 = x3d.HAnimSite(DEF="Joe_l_femoral_lateral_epicondyle_pt")
HAnimSite145.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite145.translation = [0.17,0.466,0]
Shape146 = x3d.Shape(USE="sitebox")

HAnimSite145.children.append(Shape146)

HAnimSegment124.children.append(HAnimSite145)
HAnimSite147 = x3d.HAnimSite(DEF="Joe_l_femoral_medial_epicondyle_pt")
HAnimSite147.name = "l_femoral_medial_epicondyle_pt"
HAnimSite147.translation = [0.05,0.466,0]
Shape148 = x3d.Shape(USE="sitebox")

HAnimSite147.children.append(Shape148)

HAnimSegment124.children.append(HAnimSite147)

HAnimJoint123.children.append(HAnimSegment124)
HAnimJoint149 = x3d.HAnimJoint(DEF="Joe_l_knee")
HAnimJoint149.name = "l_knee"
HAnimJoint149.center = [0.115,0.466,0]
HAnimJoint149.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint149.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment150 = x3d.HAnimSegment(DEF="Joe_l_calf")
HAnimSegment150.name = "l_calf"
Transform151 = x3d.Transform()
Transform151.translation = [0.115,0.466,0]
Shape152 = x3d.Shape(USE="jointbox")

Transform151.children.append(Shape152)

HAnimSegment150.children.append(Transform151)
Shape153 = x3d.Shape()
Appearance154 = x3d.Appearance(USE="SegmentLine")

Shape153.appearance = Appearance154
IndexedLineSet155 = x3d.IndexedLineSet()
IndexedLineSet155.coordIndex = [0,1,-1]
Coordinate156 = x3d.Coordinate()
Coordinate156.point = [(0.115, 0.466, 0),(0.1, 0.069, 0)]

IndexedLineSet155.coord = Coordinate156

Shape153.geometry = IndexedLineSet155

HAnimSegment150.children.append(Shape153)
Transform157 = x3d.Transform()
Transform157.translation = [0.115,0.466,0.06]
Shape158 = x3d.Shape(USE="skinsphere")

Transform157.children.append(Shape158)

HAnimSegment150.children.append(Transform157)
Transform159 = x3d.Transform()
Transform159.translation = [0.115,0.466,-0.055]
Shape160 = x3d.Shape(USE="skinsphere")

Transform159.children.append(Shape160)

HAnimSegment150.children.append(Transform159)
Transform161 = x3d.Transform()
Transform161.translation = [0.17,0.466,0]
Shape162 = x3d.Shape(USE="skinsphere")

Transform161.children.append(Shape162)

HAnimSegment150.children.append(Transform161)
Transform163 = x3d.Transform()
Transform163.translation = [0.05,0.466,0]
Shape164 = x3d.Shape(USE="skinsphere")

Transform163.children.append(Shape164)

HAnimSegment150.children.append(Transform163)
Transform165 = x3d.Transform()
Transform165.translation = [0.17,0.3,0]
Shape166 = x3d.Shape(USE="skinsphere")

Transform165.children.append(Shape166)

HAnimSegment150.children.append(Transform165)
Transform167 = x3d.Transform()
Transform167.translation = [0.06,0.3,0]
Shape168 = x3d.Shape(USE="skinsphere")

Transform167.children.append(Shape168)

HAnimSegment150.children.append(Transform167)
Transform169 = x3d.Transform()
Transform169.translation = [0.1,0.3,-0.05]
Shape170 = x3d.Shape(USE="skinsphere")

Transform169.children.append(Shape170)

HAnimSegment150.children.append(Transform169)
Transform171 = x3d.Transform()
Transform171.translation = [0.1,0.3,0.05]
Shape172 = x3d.Shape(USE="skinsphere")

Transform171.children.append(Shape172)

HAnimSegment150.children.append(Transform171)
HAnimSite173 = x3d.HAnimSite(DEF="Joe_l_lateral_malleolus_pt")
HAnimSite173.name = "l_lateral_malleolus_pt"
HAnimSite173.translation = [0.15,0.07,0]
Shape174 = x3d.Shape(USE="sitebox")

HAnimSite173.children.append(Shape174)

HAnimSegment150.children.append(HAnimSite173)
HAnimSite175 = x3d.HAnimSite(DEF="Joe_l_medial_malleolus_pt")
HAnimSite175.name = "l_medial_malleolus_pt"
HAnimSite175.translation = [0.085,0.086,0.0125]
Shape176 = x3d.Shape(USE="sitebox")

HAnimSite175.children.append(Shape176)

HAnimSegment150.children.append(HAnimSite175)

HAnimJoint149.children.append(HAnimSegment150)
HAnimJoint177 = x3d.HAnimJoint(DEF="Joe_l_talocrural")
HAnimJoint177.name = "l_talocrural"
HAnimJoint177.center = [0.115,0.069,0]
HAnimJoint177.skinCoordIndex = [342,343,344,345]
HAnimJoint177.skinCoordWeight = [1,1,1,1]
HAnimSegment178 = x3d.HAnimSegment(DEF="Joe_l_talus")
HAnimSegment178.name = "l_talus"
Transform179 = x3d.Transform()
Transform179.translation = [0.115,0.069,0]
Shape180 = x3d.Shape(USE="jointbox")

Transform179.children.append(Shape180)

HAnimSegment178.children.append(Transform179)
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance(USE="SegmentLine")

Shape181.appearance = Appearance182
IndexedLineSet183 = x3d.IndexedLineSet()
IndexedLineSet183.coordIndex = [0,1,-1]
Coordinate184 = x3d.Coordinate()
Coordinate184.point = [(0.1, 0.069, 0),(0.115, 0.031, 0.03)]

IndexedLineSet183.coord = Coordinate184

Shape181.geometry = IndexedLineSet183

HAnimSegment178.children.append(Shape181)
Transform185 = x3d.Transform()
Transform185.translation = [0.15,0.07,0]
Shape186 = x3d.Shape(USE="skinsphere")

Transform185.children.append(Shape186)

HAnimSegment178.children.append(Transform185)
Transform187 = x3d.Transform()
Transform187.translation = [0.085,0.086,0.0125]
Shape188 = x3d.Shape(USE="skinsphere")

Transform187.children.append(Shape188)

HAnimSegment178.children.append(Transform187)
Transform189 = x3d.Transform()
Transform189.translation = [0.115,0.069,-0.045]
Shape190 = x3d.Shape(USE="skinsphere")

Transform189.children.append(Shape190)

HAnimSegment178.children.append(Transform189)
Transform191 = x3d.Transform()
Transform191.translation = [0.117,0.0975,0.0615]
Shape192 = x3d.Shape(USE="skinsphere")

Transform191.children.append(Shape192)

HAnimSegment178.children.append(Transform191)
HAnimSite193 = x3d.HAnimSite(DEF="Joe_l_sphyrion_pt")
HAnimSite193.name = "l_sphyrion_pt"
HAnimSite193.translation = [0.09,0.056,0.0125]
Shape194 = x3d.Shape(USE="sitebox")

HAnimSite193.children.append(Shape194)

HAnimSegment178.children.append(HAnimSite193)
HAnimSite195 = x3d.HAnimSite(DEF="Joe_l_calcaneus_posterior_pt")
HAnimSite195.name = "l_calcaneus_posterior_pt"
HAnimSite195.translation = [0.115,0.04,-0.055]
Shape196 = x3d.Shape(USE="sitebox")

HAnimSite195.children.append(Shape196)

HAnimSegment178.children.append(HAnimSite195)

HAnimJoint177.children.append(HAnimSegment178)
HAnimJoint197 = x3d.HAnimJoint(DEF="Joe_l_tarsometatarsal_2")
HAnimJoint197.name = "l_tarsometatarsal_2"
HAnimJoint197.center = [0.115,0.031,0.03]
HAnimJoint197.skinCoordIndex = [346,347,348,71]
HAnimJoint197.skinCoordWeight = [1,1,1,1]
HAnimSegment198 = x3d.HAnimSegment(DEF="Joe_l_metatarsal_2")
HAnimSegment198.name = "l_metatarsal_2"
Transform199 = x3d.Transform()
Transform199.translation = [0.115,0.031,0.03]
Shape200 = x3d.Shape(USE="jointbox")

Transform199.children.append(Shape200)

HAnimSegment198.children.append(Transform199)
Shape201 = x3d.Shape()
Appearance202 = x3d.Appearance(USE="SegmentLine")

Shape201.appearance = Appearance202
IndexedLineSet203 = x3d.IndexedLineSet()
IndexedLineSet203.coordIndex = [0,1,-1]
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(0.115, 0.031, 0.03),(0.115, 0.037, 0.09)]

IndexedLineSet203.coord = Coordinate204

Shape201.geometry = IndexedLineSet203

HAnimSegment198.children.append(Shape201)
Transform205 = x3d.Transform()
Transform205.translation = [0.1375,0.006,-0.03]
Shape206 = x3d.Shape(USE="skinsphere")

Transform205.children.append(Shape206)

HAnimSegment198.children.append(Transform205)
Transform207 = x3d.Transform()
Transform207.translation = [0.095,0.006,-0.03]
Shape208 = x3d.Shape(USE="skinsphere")

Transform207.children.append(Shape208)

HAnimSegment198.children.append(Transform207)
Transform209 = x3d.Transform()
Transform209.translation = [0.115,0.015,-0.045]
Shape210 = x3d.Shape(USE="skinsphere")

Transform209.children.append(Shape210)

HAnimSegment198.children.append(Transform209)

HAnimJoint197.children.append(HAnimSegment198)
HAnimJoint211 = x3d.HAnimJoint(DEF="Joe_l_metatarsophalangeal_2")
HAnimJoint211.name = "l_metatarsophalangeal_2"
HAnimJoint211.center = [0.115,0.037,0.09]
HAnimJoint211.skinCoordIndex = [349,350,351,352]
HAnimJoint211.skinCoordWeight = [1,1,1,1]
HAnimSegment212 = x3d.HAnimSegment(DEF="Joe_l_tarsal_proximal_phalanx_2")
HAnimSegment212.name = "l_tarsal_proximal_phalanx_2"
Transform213 = x3d.Transform()
Transform213.translation = [0.115,0.037,0.09]
Shape214 = x3d.Shape(USE="jointbox")

Transform213.children.append(Shape214)

HAnimSegment212.children.append(Transform213)
Shape215 = x3d.Shape()
Appearance216 = x3d.Appearance(USE="SegmentLine")

Shape215.appearance = Appearance216
IndexedLineSet217 = x3d.IndexedLineSet()
IndexedLineSet217.coordIndex = [0,1,-1]
Coordinate218 = x3d.Coordinate()
Coordinate218.point = [(0.115, 0.037, 0.09),(0.115, 0.02, 0.122)]

IndexedLineSet217.coord = Coordinate218

Shape215.geometry = IndexedLineSet217

HAnimSegment212.children.append(Shape215)
Transform219 = x3d.Transform()
Transform219.translation = [0.115,0.06,0.1]
Shape220 = x3d.Shape(USE="skinsphere")

Transform219.children.append(Shape220)

HAnimSegment212.children.append(Transform219)
Transform221 = x3d.Transform()
Transform221.translation = [0.115,0,0.07]
Shape222 = x3d.Shape(USE="skinsphere")

Transform221.children.append(Shape222)

HAnimSegment212.children.append(Transform221)
Transform223 = x3d.Transform()
Transform223.translation = [0.165,0,0.07]
Shape224 = x3d.Shape(USE="skinsphere")

Transform223.children.append(Shape224)

HAnimSegment212.children.append(Transform223)
Transform225 = x3d.Transform()
Transform225.translation = [0.095,0,0.07]
Shape226 = x3d.Shape(USE="skinsphere")

Transform225.children.append(Shape226)

HAnimSegment212.children.append(Transform225)
HAnimSite227 = x3d.HAnimSite(DEF="Joe_l_metatarsal_phalanx_1_pt")
HAnimSite227.name = "l_metatarsal_phalanx_1_pt"
HAnimSite227.translation = [0.087,0.01,0.122]
Shape228 = x3d.Shape(USE="sitebox")

HAnimSite227.children.append(Shape228)

HAnimSegment212.children.append(HAnimSite227)

HAnimJoint211.children.append(HAnimSegment212)
HAnimJoint229 = x3d.HAnimJoint(DEF="Joe_l_metatarsal")
HAnimJoint229.name = "l_metatarsal"
HAnimJoint229.center = [0.115,0.02,0.122]
HAnimJoint229.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint229.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment230 = x3d.HAnimSegment(DEF="Joe_l_tarsal_distal_phalanx_2")
HAnimSegment230.name = "l_tarsal_distal_phalanx_2"
Transform231 = x3d.Transform()
Transform231.translation = [0.115,0.02,0.13]
Shape232 = x3d.Shape(USE="jointbox")

Transform231.children.append(Shape232)

HAnimSegment230.children.append(Transform231)
Shape233 = x3d.Shape()
Appearance234 = x3d.Appearance(USE="SegmentLine")

Shape233.appearance = Appearance234
IndexedLineSet235 = x3d.IndexedLineSet()
IndexedLineSet235.coordIndex = [0,1,-1]
Coordinate236 = x3d.Coordinate()
Coordinate236.point = [(0.115, 0.02, 0.122),(0.132, 0.013, 0.19)]

IndexedLineSet235.coord = Coordinate236

Shape233.geometry = IndexedLineSet235

HAnimSegment230.children.append(Shape233)
Transform237 = x3d.Transform()
Transform237.translation = [0.115,0.04,0.13]
Shape238 = x3d.Shape(USE="skinsphere")

Transform237.children.append(Shape238)

HAnimSegment230.children.append(Transform237)
Transform239 = x3d.Transform()
Transform239.translation = [0.125,0,0.12]
Shape240 = x3d.Shape(USE="skinsphere")

Transform239.children.append(Shape240)

HAnimSegment230.children.append(Transform239)
Transform241 = x3d.Transform()
Transform241.translation = [0.165,0,0.12]
Shape242 = x3d.Shape(USE="skinsphere")

Transform241.children.append(Shape242)

HAnimSegment230.children.append(Transform241)
Transform243 = x3d.Transform()
Transform243.translation = [0.087,0,0.122]
Shape244 = x3d.Shape(USE="skinsphere")

Transform243.children.append(Shape244)

HAnimSegment230.children.append(Transform243)
Transform245 = x3d.Transform()
Transform245.translation = [0.09,0.012,0.188]
Shape246 = x3d.Shape(USE="skinsphere")

Transform245.children.append(Shape246)

HAnimSegment230.children.append(Transform245)
Transform247 = x3d.Transform()
Transform247.translation = [0.11,0.011,0.19]
Shape248 = x3d.Shape(USE="skinsphere")

Transform247.children.append(Shape248)

HAnimSegment230.children.append(Transform247)
Transform249 = x3d.Transform()
Transform249.translation = [0.128,0.011,0.185]
Shape250 = x3d.Shape(USE="skinsphere")

Transform249.children.append(Shape250)

HAnimSegment230.children.append(Transform249)
Transform251 = x3d.Transform()
Transform251.translation = [0.142,0.011,0.178]
Shape252 = x3d.Shape(USE="skinsphere")

Transform251.children.append(Shape252)

HAnimSegment230.children.append(Transform251)
Transform253 = x3d.Transform()
Transform253.translation = [0.154,0.01,0.168]
Shape254 = x3d.Shape(USE="skinsphere")

Transform253.children.append(Shape254)

HAnimSegment230.children.append(Transform253)
HAnimSite255 = x3d.HAnimSite(DEF="Joe_l_metatarsal_phalanx_5_pt")
HAnimSite255.name = "l_metatarsal_phalanx_5_pt"
HAnimSite255.translation = [0.165,0.01,0.12]
Shape256 = x3d.Shape(USE="sitebox")

HAnimSite255.children.append(Shape256)

HAnimSegment230.children.append(HAnimSite255)
HAnimSite257 = x3d.HAnimSite(DEF="Joe_l_tarsal_distal_phalanx_2_pt")
HAnimSite257.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite257.translation = [0.11,0.011,0.19]
Shape258 = x3d.Shape(USE="sitebox")

HAnimSite257.children.append(Shape258)

HAnimSegment230.children.append(HAnimSite257)

HAnimJoint229.children.append(HAnimSegment230)

HAnimJoint211.children.append(HAnimJoint229)

HAnimJoint197.children.append(HAnimJoint211)

HAnimJoint177.children.append(HAnimJoint197)

HAnimJoint149.children.append(HAnimJoint177)

HAnimJoint123.children.append(HAnimJoint149)

HAnimJoint93.children.append(HAnimJoint123)
HAnimJoint259 = x3d.HAnimJoint(DEF="Joe_r_hip")
HAnimJoint259.name = "r_hip"
HAnimJoint259.center = [-0.1,0.92,0]
HAnimJoint259.skinCoordIndex = [91,92,98,99,100,101]
HAnimJoint259.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment260 = x3d.HAnimSegment(DEF="Joe_r_thigh")
HAnimSegment260.name = "r_thigh"
Transform261 = x3d.Transform()
Transform261.translation = [-0.1,0.92,0]
Shape262 = x3d.Shape(USE="jointbox")

Transform261.children.append(Shape262)

HAnimSegment260.children.append(Transform261)
Shape263 = x3d.Shape()
Appearance264 = x3d.Appearance(USE="SegmentLine")

Shape263.appearance = Appearance264
IndexedLineSet265 = x3d.IndexedLineSet()
IndexedLineSet265.coordIndex = [0,1,-1]
Coordinate266 = x3d.Coordinate()
Coordinate266.point = [(-0.1, 0.92, 0),(-0.1, 0.4913, 0)]

IndexedLineSet265.coord = Coordinate266

Shape263.geometry = IndexedLineSet265

HAnimSegment260.children.append(Shape263)
Transform267 = x3d.Transform()
Transform267.translation = [-0.079,0.92,-0.14]
Shape268 = x3d.Shape(USE="skinsphere")

Transform267.children.append(Shape268)

HAnimSegment260.children.append(Transform267)
Transform269 = x3d.Transform()
Transform269.translation = [-0.1,0.9,0.075]
Shape270 = x3d.Shape(USE="skinsphere")

Transform269.children.append(Shape270)

HAnimSegment260.children.append(Transform269)
Transform271 = x3d.Transform()
Transform271.translation = [-0.171,0.65,0]
Shape272 = x3d.Shape(USE="skinsphere")

Transform271.children.append(Shape272)

HAnimSegment260.children.append(Transform271)
Transform273 = x3d.Transform()
Transform273.translation = [-0.02,0.65,0]
Shape274 = x3d.Shape(USE="skinsphere")

Transform273.children.append(Shape274)

HAnimSegment260.children.append(Transform273)
Transform275 = x3d.Transform()
Transform275.translation = [-0.1,0.65,-0.08]
Shape276 = x3d.Shape(USE="skinsphere")

Transform275.children.append(Shape276)

HAnimSegment260.children.append(Transform275)
Transform277 = x3d.Transform()
Transform277.translation = [-0.1,0.65,0.07]
Shape278 = x3d.Shape(USE="skinsphere")

Transform277.children.append(Shape278)

HAnimSegment260.children.append(Transform277)
HAnimSite279 = x3d.HAnimSite(DEF="Joe_r_knee_crease_pt")
HAnimSite279.name = "r_knee_crease_pt"
HAnimSite279.translation = [-0.115,0.466,-0.055]
Shape280 = x3d.Shape(USE="sitebox")

HAnimSite279.children.append(Shape280)

HAnimSegment260.children.append(HAnimSite279)
HAnimSite281 = x3d.HAnimSite(DEF="Joe_r_femoral_lateral_epicondyle_pt")
HAnimSite281.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite281.translation = [-0.17,0.466,0]
Shape282 = x3d.Shape(USE="sitebox")

HAnimSite281.children.append(Shape282)

HAnimSegment260.children.append(HAnimSite281)
HAnimSite283 = x3d.HAnimSite(DEF="Joe_r_femoral_medial_epicondyle_pt")
HAnimSite283.name = "r_femoral_medial_epicondyle_pt"
HAnimSite283.translation = [-0.05,0.466,0]
Shape284 = x3d.Shape(USE="sitebox")

HAnimSite283.children.append(Shape284)

HAnimSegment260.children.append(HAnimSite283)

HAnimJoint259.children.append(HAnimSegment260)
HAnimJoint285 = x3d.HAnimJoint(DEF="Joe_r_knee")
HAnimJoint285.name = "r_knee"
HAnimJoint285.center = [-0.05,0.466,0]
HAnimJoint285.skinCoordIndex = [362,363,364,365,366,367,368,369]
HAnimJoint285.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment286 = x3d.HAnimSegment(DEF="Joe_r_calf")
HAnimSegment286.name = "r_calf"
Transform287 = x3d.Transform()
Transform287.translation = [-0.1,0.4913,0]
Shape288 = x3d.Shape(USE="jointbox")

Transform287.children.append(Shape288)

HAnimSegment286.children.append(Transform287)
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance(USE="SegmentLine")

Shape289.appearance = Appearance290
IndexedLineSet291 = x3d.IndexedLineSet()
IndexedLineSet291.coordIndex = [0,1,-1]
Coordinate292 = x3d.Coordinate()
Coordinate292.point = [(-0.1, 0.4913, 0),(-0.1, 0.0712, 0)]

IndexedLineSet291.coord = Coordinate292

Shape289.geometry = IndexedLineSet291

HAnimSegment286.children.append(Shape289)
Transform293 = x3d.Transform()
Transform293.translation = [-0.115,0.466,0.06]
Shape294 = x3d.Shape(USE="skinsphere")

Transform293.children.append(Shape294)

HAnimSegment286.children.append(Transform293)
Transform295 = x3d.Transform()
Transform295.translation = [-0.115,0.466,-0.055]
Shape296 = x3d.Shape(USE="skinsphere")

Transform295.children.append(Shape296)

HAnimSegment286.children.append(Transform295)
Transform297 = x3d.Transform()
Transform297.translation = [-0.17,0.466,0]
Shape298 = x3d.Shape(USE="skinsphere")

Transform297.children.append(Shape298)

HAnimSegment286.children.append(Transform297)
Transform299 = x3d.Transform()
Transform299.translation = [-0.05,0.466,0]
Shape300 = x3d.Shape(USE="skinsphere")

Transform299.children.append(Shape300)

HAnimSegment286.children.append(Transform299)
Transform301 = x3d.Transform()
Transform301.translation = [-0.17,0.3,0]
Shape302 = x3d.Shape(USE="skinsphere")

Transform301.children.append(Shape302)

HAnimSegment286.children.append(Transform301)
Transform303 = x3d.Transform()
Transform303.translation = [-0.06,0.3,0]
Shape304 = x3d.Shape(USE="skinsphere")

Transform303.children.append(Shape304)

HAnimSegment286.children.append(Transform303)
Transform305 = x3d.Transform()
Transform305.translation = [-0.1,0.3,-0.05]
Shape306 = x3d.Shape(USE="skinsphere")

Transform305.children.append(Shape306)

HAnimSegment286.children.append(Transform305)
Transform307 = x3d.Transform()
Transform307.translation = [-0.1,0.3,0.05]
Shape308 = x3d.Shape(USE="skinsphere")

Transform307.children.append(Shape308)

HAnimSegment286.children.append(Transform307)
HAnimSite309 = x3d.HAnimSite(DEF="Joe_r_lateral_malleolus_pt")
HAnimSite309.name = "r_lateral_malleolus_pt"
HAnimSite309.translation = [-0.15,0.07,0]
Shape310 = x3d.Shape(USE="sitebox")

HAnimSite309.children.append(Shape310)

HAnimSegment286.children.append(HAnimSite309)
HAnimSite311 = x3d.HAnimSite(DEF="Joe_r_medial_malleolus_pt")
HAnimSite311.name = "r_medial_malleolus_pt"
HAnimSite311.translation = [-0.085,0.086,0.0125]
Shape312 = x3d.Shape(USE="sitebox")

HAnimSite311.children.append(Shape312)

HAnimSegment286.children.append(HAnimSite311)

HAnimJoint285.children.append(HAnimSegment286)
HAnimJoint313 = x3d.HAnimJoint(DEF="Joe_r_talocrural")
HAnimJoint313.name = "r_talocrural"
HAnimJoint313.center = [-0.115,0.069,0]
HAnimJoint313.skinCoordIndex = [370,371,372,373]
HAnimJoint313.skinCoordWeight = [1,1,1,1]
HAnimSegment314 = x3d.HAnimSegment(DEF="Joe_r_talus")
HAnimSegment314.name = "r_talus"
Transform315 = x3d.Transform()
Transform315.translation = [-0.1,0.0712,0]
Shape316 = x3d.Shape(USE="jointbox")

Transform315.children.append(Shape316)

HAnimSegment314.children.append(Transform315)
Shape317 = x3d.Shape()
Appearance318 = x3d.Appearance(USE="SegmentLine")

Shape317.appearance = Appearance318
IndexedLineSet319 = x3d.IndexedLineSet()
IndexedLineSet319.coordIndex = [0,1,-1]
Coordinate320 = x3d.Coordinate()
Coordinate320.point = [(-0.1, 0.0712, 0),(-0.1, 0.015, -0.01)]

IndexedLineSet319.coord = Coordinate320

Shape317.geometry = IndexedLineSet319

HAnimSegment314.children.append(Shape317)
Transform321 = x3d.Transform()
Transform321.translation = [-0.15,0.07,0]
Shape322 = x3d.Shape(USE="skinsphere")

Transform321.children.append(Shape322)

HAnimSegment314.children.append(Transform321)
Transform323 = x3d.Transform()
Transform323.translation = [-0.085,0.086,0.0125]
Shape324 = x3d.Shape(USE="skinsphere")

Transform323.children.append(Shape324)

HAnimSegment314.children.append(Transform323)
Transform325 = x3d.Transform()
Transform325.translation = [-0.115,0.069,-0.045]
Shape326 = x3d.Shape(USE="skinsphere")

Transform325.children.append(Shape326)

HAnimSegment314.children.append(Transform325)
Transform327 = x3d.Transform()
Transform327.translation = [-0.117,0.0975,0.0615]
Shape328 = x3d.Shape(USE="skinsphere")

Transform327.children.append(Shape328)

HAnimSegment314.children.append(Transform327)
HAnimSite329 = x3d.HAnimSite(DEF="Joe_r_sphyrion_pt")
HAnimSite329.name = "r_sphyrion_pt"
HAnimSite329.translation = [-0.09,0.056,0.0125]
Shape330 = x3d.Shape(USE="sitebox")

HAnimSite329.children.append(Shape330)

HAnimSegment314.children.append(HAnimSite329)
HAnimSite331 = x3d.HAnimSite(DEF="Joe_r_calcaneus_posterior_pt")
HAnimSite331.name = "r_calcaneus_posterior_pt"
HAnimSite331.translation = [-0.115,0.04,-0.055]
Shape332 = x3d.Shape(USE="sitebox")

HAnimSite331.children.append(Shape332)

HAnimSegment314.children.append(HAnimSite331)

HAnimJoint313.children.append(HAnimSegment314)
HAnimJoint333 = x3d.HAnimJoint(DEF="Joe_r_tarsometatarsal_2")
HAnimJoint333.name = "r_tarsometatarsal_2"
HAnimJoint333.center = [-0.1,0.015,-0.01]
HAnimJoint333.skinCoordIndex = [374,375,376]
HAnimJoint333.skinCoordWeight = [1,1,1]
HAnimSegment334 = x3d.HAnimSegment(DEF="Joe_r_metatarsal_2")
HAnimSegment334.name = "r_metatarsal_2"
Transform335 = x3d.Transform()
Transform335.translation = [-0.1,0.015,-0.01]
Shape336 = x3d.Shape(USE="jointbox")

Transform335.children.append(Shape336)

HAnimSegment334.children.append(Transform335)
Shape337 = x3d.Shape()
Appearance338 = x3d.Appearance(USE="SegmentLine")

Shape337.appearance = Appearance338
IndexedLineSet339 = x3d.IndexedLineSet()
IndexedLineSet339.coordIndex = [0,1,-1]
Coordinate340 = x3d.Coordinate()
Coordinate340.point = [(-0.1, 0.015, -0.01),(-0.1, 0.02, 0.07)]

IndexedLineSet339.coord = Coordinate340

Shape337.geometry = IndexedLineSet339

HAnimSegment334.children.append(Shape337)
Transform341 = x3d.Transform()
Transform341.translation = [-0.1375,0.006,-0.03]
Shape342 = x3d.Shape(USE="skinsphere")

Transform341.children.append(Shape342)

HAnimSegment334.children.append(Transform341)
Transform343 = x3d.Transform()
Transform343.translation = [-0.095,0.006,-0.03]
Shape344 = x3d.Shape(USE="skinsphere")

Transform343.children.append(Shape344)

HAnimSegment334.children.append(Transform343)
Transform345 = x3d.Transform()
Transform345.translation = [-0.095,0.006,-0.03]
Shape346 = x3d.Shape(USE="skinsphere")

Transform345.children.append(Shape346)

HAnimSegment334.children.append(Transform345)

HAnimJoint333.children.append(HAnimSegment334)
HAnimJoint347 = x3d.HAnimJoint(DEF="Joe_r_metatarsophalangeal_2")
HAnimJoint347.name = "r_metatarsophalangeal_2"
HAnimJoint347.center = [-0.115,0.037,0.09]
HAnimJoint347.skinCoordIndex = [377,378,379,380]
HAnimJoint347.skinCoordWeight = [1,1,1,1]
HAnimSegment348 = x3d.HAnimSegment(DEF="Joe_r_tarsal_proximal_phalanx_2")
HAnimSegment348.name = "r_tarsal_proximal_phalanx_2"
Transform349 = x3d.Transform()
Transform349.translation = [-0.1,0.02,0.07]
Shape350 = x3d.Shape(USE="jointbox")

Transform349.children.append(Shape350)

HAnimSegment348.children.append(Transform349)
Shape351 = x3d.Shape()
Appearance352 = x3d.Appearance(USE="SegmentLine")

Shape351.appearance = Appearance352
IndexedLineSet353 = x3d.IndexedLineSet()
IndexedLineSet353.coordIndex = [0,1,-1]
Coordinate354 = x3d.Coordinate()
Coordinate354.point = [(-0.1, 0.02, 0.07),(-0.1, 0.01, 0.14)]

IndexedLineSet353.coord = Coordinate354

Shape351.geometry = IndexedLineSet353

HAnimSegment348.children.append(Shape351)
Transform355 = x3d.Transform()
Transform355.translation = [-0.115,0.06,0.1]
Shape356 = x3d.Shape(USE="skinsphere")

Transform355.children.append(Shape356)

HAnimSegment348.children.append(Transform355)
Transform357 = x3d.Transform()
Transform357.translation = [-0.115,0,0.07]
Shape358 = x3d.Shape(USE="skinsphere")

Transform357.children.append(Shape358)

HAnimSegment348.children.append(Transform357)
Transform359 = x3d.Transform()
Transform359.translation = [-0.165,0,0.07]
Shape360 = x3d.Shape(USE="skinsphere")

Transform359.children.append(Shape360)

HAnimSegment348.children.append(Transform359)
Transform361 = x3d.Transform()
Transform361.translation = [-0.165,0,0.07]
Shape362 = x3d.Shape(USE="skinsphere")

Transform361.children.append(Shape362)

HAnimSegment348.children.append(Transform361)
HAnimSite363 = x3d.HAnimSite(DEF="Joe_r_metatarsal_phalanx_1_pt")
HAnimSite363.name = "r_metatarsal_phalanx_1_pt"
HAnimSite363.translation = [-0.115,0.02,0.122]
Shape364 = x3d.Shape(USE="sitebox")

HAnimSite363.children.append(Shape364)

HAnimSegment348.children.append(HAnimSite363)

HAnimJoint347.children.append(HAnimSegment348)
HAnimJoint365 = x3d.HAnimJoint(DEF="Joe_r_tarsal_distal_interphalangeal_2")
HAnimJoint365.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint365.center = [-0.1,0.01,0.14]
HAnimJoint365.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint365.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment366 = x3d.HAnimSegment(DEF="Joe_r_tarsal_distal_phalanx_2")
HAnimSegment366.name = "r_tarsal_distal_phalanx_2"
Transform367 = x3d.Transform()
Transform367.translation = [-0.1086,0.01,0.14]
Shape368 = x3d.Shape(USE="jointbox")

Transform367.children.append(Shape368)

HAnimSegment366.children.append(Transform367)
Shape369 = x3d.Shape()
Appearance370 = x3d.Appearance(USE="SegmentLine")

Shape369.appearance = Appearance370
IndexedLineSet371 = x3d.IndexedLineSet()
IndexedLineSet371.coordIndex = [0,1,-1]
Coordinate372 = x3d.Coordinate()
Coordinate372.point = [(-0.1, 0.01, 0.14),(-0.1043, 0.0016, 0.2)]

IndexedLineSet371.coord = Coordinate372

Shape369.geometry = IndexedLineSet371

HAnimSegment366.children.append(Shape369)
Transform373 = x3d.Transform()
Transform373.translation = [-0.115,0.04,0.13]
Shape374 = x3d.Shape(USE="skinsphere")

Transform373.children.append(Shape374)

HAnimSegment366.children.append(Transform373)
Transform375 = x3d.Transform()
Transform375.translation = [-0.125,0,0.12]
Shape376 = x3d.Shape(USE="skinsphere")

Transform375.children.append(Shape376)

HAnimSegment366.children.append(Transform375)
Transform377 = x3d.Transform()
Transform377.translation = [-0.165,0,0.12]
Shape378 = x3d.Shape(USE="skinsphere")

Transform377.children.append(Shape378)

HAnimSegment366.children.append(Transform377)
Transform379 = x3d.Transform()
Transform379.translation = [-0.087,0,0.122]
Shape380 = x3d.Shape(USE="skinsphere")

Transform379.children.append(Shape380)

HAnimSegment366.children.append(Transform379)
Transform381 = x3d.Transform()
Transform381.translation = [-0.09,0.012,0.188]
Shape382 = x3d.Shape(USE="skinsphere")

Transform381.children.append(Shape382)

HAnimSegment366.children.append(Transform381)
Transform383 = x3d.Transform()
Transform383.translation = [-0.11,0.011,0.19]
Shape384 = x3d.Shape(USE="skinsphere")

Transform383.children.append(Shape384)

HAnimSegment366.children.append(Transform383)
Transform385 = x3d.Transform()
Transform385.translation = [-0.128,0.011,0.185]
Shape386 = x3d.Shape(USE="skinsphere")

Transform385.children.append(Shape386)

HAnimSegment366.children.append(Transform385)
Transform387 = x3d.Transform()
Transform387.translation = [-0.142,0.011,0.178]
Shape388 = x3d.Shape(USE="skinsphere")

Transform387.children.append(Shape388)

HAnimSegment366.children.append(Transform387)
Transform389 = x3d.Transform()
Transform389.translation = [-0.154,0.01,0.168]
Shape390 = x3d.Shape(USE="skinsphere")

Transform389.children.append(Shape390)

HAnimSegment366.children.append(Transform389)
HAnimSite391 = x3d.HAnimSite(DEF="Joe_r_metatarsal_phalanx_5_pt")
HAnimSite391.name = "r_metatarsal_phalanx_5_pt"
HAnimSite391.translation = [-0.165,0.01,0.12]
Shape392 = x3d.Shape(USE="sitebox")

HAnimSite391.children.append(Shape392)

HAnimSegment366.children.append(HAnimSite391)
HAnimSite393 = x3d.HAnimSite(DEF="Joe_r_tarsal_distal_phalanx_2_pt")
HAnimSite393.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite393.translation = [-0.11,0.011,0.19]
Shape394 = x3d.Shape(USE="sitebox")

HAnimSite393.children.append(Shape394)

HAnimSegment366.children.append(HAnimSite393)

HAnimJoint365.children.append(HAnimSegment366)

HAnimJoint347.children.append(HAnimJoint365)

HAnimJoint333.children.append(HAnimJoint347)

HAnimJoint313.children.append(HAnimJoint333)

HAnimJoint285.children.append(HAnimJoint313)

HAnimJoint259.children.append(HAnimJoint285)

HAnimJoint93.children.append(HAnimJoint259)

HAnimJoint81.children.append(HAnimJoint93)
HAnimJoint395 = x3d.HAnimJoint(DEF="Joe_vl5")
HAnimJoint395.name = "vl5"
HAnimJoint395.center = [0,1.045,-0.095]
HAnimJoint395.skinCoordIndex = [28,76]
HAnimJoint395.skinCoordWeight = [1,1]
HAnimSegment396 = x3d.HAnimSegment(DEF="Joe_toPelvis")
HAnimSegment396.name = "toPelvis"
Shape397 = x3d.Shape()
Appearance398 = x3d.Appearance(USE="SegmentLine")

Shape397.appearance = Appearance398
IndexedLineSet399 = x3d.IndexedLineSet()
IndexedLineSet399.coordIndex = [0,1,-1]
Coordinate400 = x3d.Coordinate()
Coordinate400.point = [(0, 1.045, -0.095),(0, 0.9149, 0.0016)]

IndexedLineSet399.coord = Coordinate400

Shape397.geometry = IndexedLineSet399

HAnimSegment396.children.append(Shape397)

HAnimJoint395.children.append(HAnimSegment396)
HAnimSegment401 = x3d.HAnimSegment(DEF="Joe_l5")
HAnimSegment401.name = "l5"
Shape402 = x3d.Shape()
Appearance403 = x3d.Appearance(USE="SegmentLine")

Shape402.appearance = Appearance403
IndexedLineSet404 = x3d.IndexedLineSet()
IndexedLineSet404.coordIndex = [0,1,-1]
Coordinate405 = x3d.Coordinate()
Coordinate405.point = [(0, 1.045, -0.095),(0, 1.068, -0.085)]

IndexedLineSet404.coord = Coordinate405

Shape402.geometry = IndexedLineSet404

HAnimSegment401.children.append(Shape402)
HAnimSite406 = x3d.HAnimSite(DEF="Joe_waist_preferred_posterior_pt")
HAnimSite406.name = "waist_preferred_posterior_pt"
HAnimSite406.translation = [0,1.0915,-0.1091]
Shape407 = x3d.Shape(USE="sitebox")

HAnimSite406.children.append(Shape407)

HAnimSegment401.children.append(HAnimSite406)
HAnimSite408 = x3d.HAnimSite(DEF="Joe_navel_pt")
HAnimSite408.name = "navel_pt"
HAnimSite408.translation = [0,1.0723,0.09]
Shape409 = x3d.Shape(USE="sitebox")

HAnimSite408.children.append(Shape409)

HAnimSegment401.children.append(HAnimSite408)

HAnimJoint395.children.append(HAnimSegment401)
HAnimJoint410 = x3d.HAnimJoint(DEF="Joe_vl4")
HAnimJoint410.name = "vl4"
HAnimJoint410.center = [0,1.068,-0.085]
HAnimSegment411 = x3d.HAnimSegment(DEF="Joe_l4")
HAnimSegment411.name = "l4"
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance(USE="SegmentLine")

Shape412.appearance = Appearance413
IndexedLineSet414 = x3d.IndexedLineSet()
IndexedLineSet414.coordIndex = [0,1,-1]
Coordinate415 = x3d.Coordinate()
Coordinate415.point = [(0, 1.068, -0.085),(0, 1.092, -0.0725)]

IndexedLineSet414.coord = Coordinate415

Shape412.geometry = IndexedLineSet414

HAnimSegment411.children.append(Shape412)
Transform416 = x3d.Transform()
Transform416.translation = [0,1.068,-0.085]
Shape417 = x3d.Shape(USE="jointbox")

Transform416.children.append(Shape417)

HAnimSegment411.children.append(Transform416)

HAnimJoint410.children.append(HAnimSegment411)
HAnimJoint418 = x3d.HAnimJoint(DEF="Joe_vl3")
HAnimJoint418.name = "vl3"
HAnimJoint418.center = [0,1.092,-0.0725]
HAnimSegment419 = x3d.HAnimSegment(DEF="Joe_l3")
HAnimSegment419.name = "l3"
Shape420 = x3d.Shape()
Appearance421 = x3d.Appearance(USE="SegmentLine")

Shape420.appearance = Appearance421
IndexedLineSet422 = x3d.IndexedLineSet()
IndexedLineSet422.coordIndex = [0,1,-1]
Coordinate423 = x3d.Coordinate()
Coordinate423.point = [(0, 1.092, -0.0725),(0, 1.12, -0.065)]

IndexedLineSet422.coord = Coordinate423

Shape420.geometry = IndexedLineSet422

HAnimSegment419.children.append(Shape420)
Transform424 = x3d.Transform()
Transform424.translation = [0,1.092,-0.0725]
Shape425 = x3d.Shape(USE="jointbox")

Transform424.children.append(Shape425)

HAnimSegment419.children.append(Transform424)

HAnimJoint418.children.append(HAnimSegment419)
HAnimJoint426 = x3d.HAnimJoint(DEF="Joe_vl2")
HAnimJoint426.name = "vl2"
HAnimJoint426.center = [0,1.12,-0.065]
HAnimJoint426.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint426.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimSegment427 = x3d.HAnimSegment(DEF="Joe_l2")
HAnimSegment427.name = "l2"
Shape428 = x3d.Shape()
Appearance429 = x3d.Appearance(USE="SegmentLine")

Shape428.appearance = Appearance429
IndexedLineSet430 = x3d.IndexedLineSet()
IndexedLineSet430.coordIndex = [0,1,-1]
Coordinate431 = x3d.Coordinate()
Coordinate431.point = [(0, 1.12, -0.065),(0, 1.1459, -0.0625)]

IndexedLineSet430.coord = Coordinate431

Shape428.geometry = IndexedLineSet430

HAnimSegment427.children.append(Shape428)
Transform432 = x3d.Transform()
Transform432.translation = [0,1.12,-0.065]
Shape433 = x3d.Shape(USE="jointbox")

Transform432.children.append(Shape433)

HAnimSegment427.children.append(Transform432)
Transform434 = x3d.Transform()
Transform434.translation = [-0.087,1.19,-0.09]
Shape435 = x3d.Shape(USE="skinsphere")

Transform434.children.append(Shape435)

HAnimSegment427.children.append(Transform434)
Transform436 = x3d.Transform()
Transform436.translation = [0.087,1.19,-0.09]
Shape437 = x3d.Shape(USE="skinsphere")

Transform436.children.append(Shape437)

HAnimSegment427.children.append(Transform436)
Transform438 = x3d.Transform()
Transform438.translation = [0.172,1.32,-0.03]
Shape439 = x3d.Shape(USE="skinsphere")

Transform438.children.append(Shape439)

HAnimSegment427.children.append(Transform438)
Transform440 = x3d.Transform()
Transform440.translation = [-0.172,1.32,-0.03]
Shape441 = x3d.Shape(USE="skinsphere")

Transform440.children.append(Shape441)

HAnimSegment427.children.append(Transform440)
Transform442 = x3d.Transform()
Transform442.translation = [0.15,1.23,-0.015]
Shape443 = x3d.Shape(USE="skinsphere")

Transform442.children.append(Shape443)

HAnimSegment427.children.append(Transform442)
Transform444 = x3d.Transform()
Transform444.translation = [-0.15,1.23,-0.015]
Shape445 = x3d.Shape(USE="skinsphere")

Transform444.children.append(Shape445)

HAnimSegment427.children.append(Transform444)
HAnimSite446 = x3d.HAnimSite(DEF="Joe_r_rib10_pt")
HAnimSite446.name = "r_rib10_pt"
HAnimSite446.translation = [-0.087,1.19,0.09]
Shape447 = x3d.Shape(USE="sitebox")

HAnimSite446.children.append(Shape447)

HAnimSegment427.children.append(HAnimSite446)
HAnimSite448 = x3d.HAnimSite(DEF="Joe_l_rib10_pt")
HAnimSite448.name = "l_rib10_pt"
HAnimSite448.translation = [0.087,1.19,0.09]
Shape449 = x3d.Shape(USE="sitebox")

HAnimSite448.children.append(Shape449)

HAnimSegment427.children.append(HAnimSite448)
HAnimSite450 = x3d.HAnimSite(DEF="Joe_rib10_midspine_pt")
HAnimSite450.name = "rib10_midspine_pt"
HAnimSite450.translation = [0,1.1908,-0.1113]
Shape451 = x3d.Shape(USE="sitebox")

HAnimSite450.children.append(Shape451)

HAnimSegment427.children.append(HAnimSite450)

HAnimJoint426.children.append(HAnimSegment427)
HAnimJoint452 = x3d.HAnimJoint(DEF="Joe_vl1")
HAnimJoint452.name = "vl1"
HAnimJoint452.center = [0,1.1459,-0.0625]
HAnimSegment453 = x3d.HAnimSegment(DEF="Joe_l1")
HAnimSegment453.name = "l1"
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance(USE="SegmentLine")

Shape454.appearance = Appearance455
IndexedLineSet456 = x3d.IndexedLineSet()
IndexedLineSet456.coordIndex = [0,1,-1]
Coordinate457 = x3d.Coordinate()
Coordinate457.point = [(0, 1.1459, -0.0625),(0, 1.179, -0.068)]

IndexedLineSet456.coord = Coordinate457

Shape454.geometry = IndexedLineSet456

HAnimSegment453.children.append(Shape454)
Transform458 = x3d.Transform()
Transform458.translation = [0,1.1459,-0.0625]
Shape459 = x3d.Shape(USE="jointbox")

Transform458.children.append(Shape459)

HAnimSegment453.children.append(Transform458)

HAnimJoint452.children.append(HAnimSegment453)
HAnimJoint460 = x3d.HAnimJoint(DEF="Joe_vt12")
HAnimJoint460.name = "vt12"
HAnimJoint460.center = [0,1.179,-0.068]
HAnimSegment461 = x3d.HAnimSegment(DEF="Joe_t12")
HAnimSegment461.name = "t12"
Shape462 = x3d.Shape()
Appearance463 = x3d.Appearance(USE="SegmentLine")

Shape462.appearance = Appearance463
IndexedLineSet464 = x3d.IndexedLineSet()
IndexedLineSet464.coordIndex = [0,1,-1]
Coordinate465 = x3d.Coordinate()
Coordinate465.point = [(0, 1.179, -0.068),(0, 1.242, -0.09)]

IndexedLineSet464.coord = Coordinate465

Shape462.geometry = IndexedLineSet464

HAnimSegment461.children.append(Shape462)
Transform466 = x3d.Transform()
Transform466.translation = [0,1.179,-0.068]
Shape467 = x3d.Shape(USE="jointbox")

Transform466.children.append(Shape467)

HAnimSegment461.children.append(Transform466)

HAnimJoint460.children.append(HAnimSegment461)
HAnimJoint468 = x3d.HAnimJoint(DEF="Joe_vt11")
HAnimJoint468.name = "vt11"
HAnimJoint468.center = [0,1.2679,-0.081]
HAnimSegment469 = x3d.HAnimSegment(DEF="Joe_t11")
HAnimSegment469.name = "t11"
Shape470 = x3d.Shape()
Appearance471 = x3d.Appearance(USE="SegmentLine")

Shape470.appearance = Appearance471
IndexedLineSet472 = x3d.IndexedLineSet()
IndexedLineSet472.coordIndex = [0,1,-1]
Coordinate473 = x3d.Coordinate()
Coordinate473.point = [(0, 1.2145, -0.0755),(0, 1.242, -0.09)]

IndexedLineSet472.coord = Coordinate473

Shape470.geometry = IndexedLineSet472

HAnimSegment469.children.append(Shape470)
Transform474 = x3d.Transform()
Transform474.translation = [0,1.2145,-0.0755]
Shape475 = x3d.Shape(USE="jointbox")

Transform474.children.append(Shape475)

HAnimSegment469.children.append(Transform474)

HAnimJoint468.children.append(HAnimSegment469)
HAnimJoint476 = x3d.HAnimJoint(DEF="Joe_vt10")
HAnimJoint476.name = "vt10"
HAnimJoint476.center = [0,1.242,-0.09]
HAnimJoint476.skinCoordIndex = [15]
HAnimJoint476.skinCoordWeight = [1]
HAnimSegment477 = x3d.HAnimSegment(DEF="Joe_t10")
HAnimSegment477.name = "t10"
Shape478 = x3d.Shape()
Appearance479 = x3d.Appearance(USE="SegmentLine")

Shape478.appearance = Appearance479
IndexedLineSet480 = x3d.IndexedLineSet()
IndexedLineSet480.coordIndex = [0,1,-1]
Coordinate481 = x3d.Coordinate()
Coordinate481.point = [(0, 1.242, -0.09),(0, 1.268, -0.1)]

IndexedLineSet480.coord = Coordinate481

Shape478.geometry = IndexedLineSet480

HAnimSegment477.children.append(Shape478)
Transform482 = x3d.Transform()
Transform482.translation = [0,1.242,-0.09]
Shape483 = x3d.Shape(USE="jointbox")

Transform482.children.append(Shape483)

HAnimSegment477.children.append(Transform482)
HAnimSite484 = x3d.HAnimSite(DEF="Joe_substernale_pt")
HAnimSite484.name = "substernale_pt"
HAnimSite484.translation = [0,1.25,0.113]
Shape485 = x3d.Shape(USE="sitebox")

HAnimSite484.children.append(Shape485)

HAnimSegment477.children.append(HAnimSite484)

HAnimJoint476.children.append(HAnimSegment477)
HAnimJoint486 = x3d.HAnimJoint(DEF="Joe_vt9")
HAnimJoint486.name = "vt9"
HAnimJoint486.center = [0,1.268,-0.1]
HAnimJoint486.skinCoordIndex = [13,14]
HAnimJoint486.skinCoordWeight = [1,1]
HAnimSegment487 = x3d.HAnimSegment(DEF="Joe_t9")
HAnimSegment487.name = "t9"
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance(USE="SegmentLine")

Shape488.appearance = Appearance489
IndexedLineSet490 = x3d.IndexedLineSet()
IndexedLineSet490.coordIndex = [0,1,-1]
Coordinate491 = x3d.Coordinate()
Coordinate491.point = [(0, 1.268, -0.1),(0, 1.294, -0.11)]

IndexedLineSet490.coord = Coordinate491

Shape488.geometry = IndexedLineSet490

HAnimSegment487.children.append(Shape488)
Transform492 = x3d.Transform()
Transform492.translation = [0,1.268,-0.1]
Shape493 = x3d.Shape(USE="jointbox")

Transform492.children.append(Shape493)

HAnimSegment487.children.append(Transform492)
HAnimSite494 = x3d.HAnimSite(DEF="Joe_r_thelion_pt")
HAnimSite494.name = "r_thelion_pt"
HAnimSite494.translation = [-0.1135,1.318,0.095]
Shape495 = x3d.Shape(USE="sitebox")

HAnimSite494.children.append(Shape495)

HAnimSegment487.children.append(HAnimSite494)
HAnimSite496 = x3d.HAnimSite(DEF="Joe_l_thelion_pt")
HAnimSite496.name = "l_thelion_pt"
HAnimSite496.translation = [0.1135,1.318,0.095]
Shape497 = x3d.Shape(USE="sitebox")

HAnimSite496.children.append(Shape497)

HAnimSegment487.children.append(HAnimSite496)

HAnimJoint486.children.append(HAnimSegment487)
HAnimJoint498 = x3d.HAnimJoint(DEF="Joe_vt8")
HAnimJoint498.name = "vt8"
HAnimJoint498.center = [0,1.294,-0.11]
HAnimSegment499 = x3d.HAnimSegment(DEF="Joe_t8")
HAnimSegment499.name = "t8"
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance(USE="SegmentLine")

Shape500.appearance = Appearance501
IndexedLineSet502 = x3d.IndexedLineSet()
IndexedLineSet502.coordIndex = [0,1,-1]
Coordinate503 = x3d.Coordinate()
Coordinate503.point = [(0, 1.294, -0.11),(0, 1.352, -0.12)]

IndexedLineSet502.coord = Coordinate503

Shape500.geometry = IndexedLineSet502

HAnimSegment499.children.append(Shape500)
Transform504 = x3d.Transform()
Transform504.translation = [0,1.294,-0.11]
Shape505 = x3d.Shape(USE="jointbox")

Transform504.children.append(Shape505)

HAnimSegment499.children.append(Transform504)

HAnimJoint498.children.append(HAnimSegment499)
HAnimJoint506 = x3d.HAnimJoint(DEF="Joe_vt7")
HAnimJoint506.name = "vt7"
HAnimJoint506.center = [0,1.323,-0.1155]
HAnimSegment507 = x3d.HAnimSegment(DEF="Joe_t7")
HAnimSegment507.name = "t7"
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance(USE="SegmentLine")

Shape508.appearance = Appearance509
IndexedLineSet510 = x3d.IndexedLineSet()
IndexedLineSet510.coordIndex = [0,1,-1]
Coordinate511 = x3d.Coordinate()
Coordinate511.point = [(0, 1.352, -0.12),(0, 1.381, -0.1235)]

IndexedLineSet510.coord = Coordinate511

Shape508.geometry = IndexedLineSet510

HAnimSegment507.children.append(Shape508)
Transform512 = x3d.Transform()
Transform512.translation = [0,1.323,-0.1155]
Shape513 = x3d.Shape(USE="jointbox")

Transform512.children.append(Shape513)

HAnimSegment507.children.append(Transform512)

HAnimJoint506.children.append(HAnimSegment507)
HAnimJoint514 = x3d.HAnimJoint(DEF="Joe_vt6")
HAnimJoint514.name = "vt6"
HAnimJoint514.center = [0,1.352,-0.12]
HAnimSegment515 = x3d.HAnimSegment(DEF="Joe_t6")
HAnimSegment515.name = "t6"
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance(USE="SegmentLine")

Shape516.appearance = Appearance517
IndexedLineSet518 = x3d.IndexedLineSet()
IndexedLineSet518.coordIndex = [0,1,-1]
Coordinate519 = x3d.Coordinate()
Coordinate519.point = [(0, 1.381, -0.1235),(0, 1.41, -0.1235)]

IndexedLineSet518.coord = Coordinate519

Shape516.geometry = IndexedLineSet518

HAnimSegment515.children.append(Shape516)
Transform520 = x3d.Transform()
Transform520.translation = [0,1.352,-0.12]
Shape521 = x3d.Shape(USE="jointbox")

Transform520.children.append(Shape521)

HAnimSegment515.children.append(Transform520)

HAnimJoint514.children.append(HAnimSegment515)
HAnimJoint522 = x3d.HAnimJoint(DEF="Joe_vt5")
HAnimJoint522.name = "vt5"
HAnimJoint522.center = [0,1.381,-0.1235]
HAnimSegment523 = x3d.HAnimSegment(DEF="Joe_t5")
HAnimSegment523.name = "t5"
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance(USE="SegmentLine")

Shape524.appearance = Appearance525
IndexedLineSet526 = x3d.IndexedLineSet()
IndexedLineSet526.coordIndex = [0,1,-1]
Coordinate527 = x3d.Coordinate()
Coordinate527.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet526.coord = Coordinate527

Shape524.geometry = IndexedLineSet526

HAnimSegment523.children.append(Shape524)
Transform528 = x3d.Transform()
Transform528.translation = [0,1.381,-0.1235]
Shape529 = x3d.Shape(USE="jointbox")

Transform528.children.append(Shape529)

HAnimSegment523.children.append(Transform528)

HAnimJoint522.children.append(HAnimSegment523)
HAnimJoint530 = x3d.HAnimJoint(DEF="Joe_vt4")
HAnimJoint530.name = "vt4"
HAnimJoint530.center = [0,1.41,-0.1235]
HAnimJoint530.skinCoordIndex = [81]
HAnimJoint530.skinCoordWeight = [1]
HAnimSegment531 = x3d.HAnimSegment(DEF="Joe_t4")
HAnimSegment531.name = "t4"
Shape532 = x3d.Shape()
Appearance533 = x3d.Appearance(USE="SegmentLine")

Shape532.appearance = Appearance533
IndexedLineSet534 = x3d.IndexedLineSet()
IndexedLineSet534.coordIndex = [0,1,-1]
Coordinate535 = x3d.Coordinate()
Coordinate535.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet534.coord = Coordinate535

Shape532.geometry = IndexedLineSet534

HAnimSegment531.children.append(Shape532)
Transform536 = x3d.Transform()
Transform536.translation = [0,1.41,-0.1235]
Shape537 = x3d.Shape(USE="jointbox")

Transform536.children.append(Shape537)

HAnimSegment531.children.append(Transform536)
Transform538 = x3d.Transform()
Transform538.translation = [0,1.41,-0.145]
Shape539 = x3d.Shape(USE="skinsphere")

Transform538.children.append(Shape539)

HAnimSegment531.children.append(Transform538)

HAnimJoint530.children.append(HAnimSegment531)
HAnimJoint540 = x3d.HAnimJoint(DEF="Joe_vt3")
HAnimJoint540.name = "vt3"
HAnimJoint540.center = [0,1.438,-0.12]
HAnimSegment541 = x3d.HAnimSegment(DEF="Joe_t3")
HAnimSegment541.name = "t3"
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance(USE="SegmentLine")

Shape542.appearance = Appearance543
IndexedLineSet544 = x3d.IndexedLineSet()
IndexedLineSet544.coordIndex = [0,1,-1]
Coordinate545 = x3d.Coordinate()
Coordinate545.point = [(0, 1.438, -0.12),(0, 1.468, -0.105)]

IndexedLineSet544.coord = Coordinate545

Shape542.geometry = IndexedLineSet544

HAnimSegment541.children.append(Shape542)
Transform546 = x3d.Transform()
Transform546.translation = [0,1.438,-0.12]
Shape547 = x3d.Shape(USE="jointbox")

Transform546.children.append(Shape547)

HAnimSegment541.children.append(Transform546)

HAnimJoint540.children.append(HAnimSegment541)
HAnimJoint548 = x3d.HAnimJoint(DEF="Joe_vt2")
HAnimJoint548.name = "vt2"
HAnimJoint548.center = [0,1.468,-0.105]
HAnimSegment549 = x3d.HAnimSegment(DEF="Joe_t2")
HAnimSegment549.name = "t2"
Shape550 = x3d.Shape()
Appearance551 = x3d.Appearance(USE="SegmentLine")

Shape550.appearance = Appearance551
IndexedLineSet552 = x3d.IndexedLineSet()
IndexedLineSet552.coordIndex = [0,1,-1]
Coordinate553 = x3d.Coordinate()
Coordinate553.point = [(0, 1.468, -0.105),(0, 1.497, -0.09)]

IndexedLineSet552.coord = Coordinate553

Shape550.geometry = IndexedLineSet552

HAnimSegment549.children.append(Shape550)
Transform554 = x3d.Transform()
Transform554.translation = [0,1.468,-0.105]
Shape555 = x3d.Shape(USE="jointbox")

Transform554.children.append(Shape555)

HAnimSegment549.children.append(Transform554)

HAnimJoint548.children.append(HAnimSegment549)
HAnimJoint556 = x3d.HAnimJoint(DEF="Joe_vt1")
HAnimJoint556.name = "vt1"
HAnimJoint556.center = [0,1.497,-0.09]
HAnimJoint556.skinCoordIndex = [11,24]
HAnimJoint556.skinCoordWeight = [1,1]
HAnimSegment557 = x3d.HAnimSegment(DEF="Joe_t1")
HAnimSegment557.name = "t1"
Shape558 = x3d.Shape()
Appearance559 = x3d.Appearance(USE="SegmentLine")

Shape558.appearance = Appearance559
IndexedLineSet560 = x3d.IndexedLineSet()
IndexedLineSet560.coordIndex = [0,1,-1]
Coordinate561 = x3d.Coordinate()
Coordinate561.point = [(0, 1.497, -0.09),(0, 1.525, -0.072)]

IndexedLineSet560.coord = Coordinate561

Shape558.geometry = IndexedLineSet560

HAnimSegment557.children.append(Shape558)
Transform562 = x3d.Transform()
Transform562.translation = [0,1.497,-0.09]
Shape563 = x3d.Shape(USE="jointbox")

Transform562.children.append(Shape563)

HAnimSegment557.children.append(Transform562)
HAnimSite564 = x3d.HAnimSite(DEF="Joe_suprasternale_pt")
HAnimSite564.name = "suprasternale_pt"
HAnimSite564.translation = [0,1.44,0.03]
Shape565 = x3d.Shape(USE="sitebox")

HAnimSite564.children.append(Shape565)

HAnimSegment557.children.append(HAnimSite564)
HAnimSite566 = x3d.HAnimSite(DEF="Joe_cervicale_pt")
HAnimSite566.name = "cervicale_pt"
HAnimSite566.translation = [0,1.53,-0.084]
Shape567 = x3d.Shape(USE="sitebox")

HAnimSite566.children.append(Shape567)

HAnimSegment557.children.append(HAnimSite566)

HAnimJoint556.children.append(HAnimSegment557)
HAnimJoint568 = x3d.HAnimJoint(DEF="Joe_vc7")
HAnimJoint568.name = "vc7"
HAnimJoint568.center = [0,1.525,-0.072]
HAnimJoint568.skinCoordIndex = [74,75]
HAnimJoint568.skinCoordWeight = [1,1]
HAnimSegment569 = x3d.HAnimSegment(DEF="Joe_c7")
HAnimSegment569.name = "c7"
Shape570 = x3d.Shape()
Appearance571 = x3d.Appearance(USE="SegmentLine")

Shape570.appearance = Appearance571
IndexedLineSet572 = x3d.IndexedLineSet()
IndexedLineSet572.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate573 = x3d.Coordinate()
Coordinate573.point = [(0, 1.525, -0.072),(0.082, 1.4488, -0.0353),(-0.03, 1.46, 0.02),(0, 1.54, -0.05)]

IndexedLineSet572.coord = Coordinate573

Shape570.geometry = IndexedLineSet572

HAnimSegment569.children.append(Shape570)
Transform574 = x3d.Transform()
Transform574.translation = [0,1.525,-0.072]
Shape575 = x3d.Shape(USE="jointbox")

Transform574.children.append(Shape575)

HAnimSegment569.children.append(Transform574)
HAnimSite576 = x3d.HAnimSite(DEF="Joe_r_neck_base_pt")
HAnimSite576.name = "r_neck_base_pt"
HAnimSite576.translation = [-0.0646,1.5149,-0.0385]
Shape577 = x3d.Shape(USE="sitebox")

HAnimSite576.children.append(Shape577)

HAnimSegment569.children.append(HAnimSite576)
HAnimSite578 = x3d.HAnimSite(DEF="Joe_l_neck_base_pt")
HAnimSite578.name = "l_neck_base_pt"
HAnimSite578.translation = [0.0646,1.5149,-0.0385]
Shape579 = x3d.Shape(USE="sitebox")

HAnimSite578.children.append(Shape579)

HAnimSegment569.children.append(HAnimSite578)

HAnimJoint568.children.append(HAnimSegment569)
HAnimJoint580 = x3d.HAnimJoint(DEF="Joe_vc6")
HAnimJoint580.name = "vc6"
HAnimJoint580.center = [0,1.54,-0.05]
HAnimSegment581 = x3d.HAnimSegment(DEF="Joe_c6")
HAnimSegment581.name = "c6"
Shape582 = x3d.Shape()
Appearance583 = x3d.Appearance(USE="SegmentLine")

Shape582.appearance = Appearance583
IndexedLineSet584 = x3d.IndexedLineSet()
IndexedLineSet584.coordIndex = [0,1,-1]
Coordinate585 = x3d.Coordinate()
Coordinate585.point = [(0, 1.54, -0.05),(0, 1.5675, -0.0256)]

IndexedLineSet584.coord = Coordinate585

Shape582.geometry = IndexedLineSet584

HAnimSegment581.children.append(Shape582)
Transform586 = x3d.Transform()
Transform586.translation = [0,1.54,-0.05]
Shape587 = x3d.Shape(USE="jointbox")

Transform586.children.append(Shape587)

HAnimSegment581.children.append(Transform586)

HAnimJoint580.children.append(HAnimSegment581)
HAnimJoint588 = x3d.HAnimJoint(DEF="Joe_vc5")
HAnimJoint588.name = "vc5"
HAnimJoint588.center = [0,1.552,-0.035]
HAnimSegment589 = x3d.HAnimSegment(DEF="Joe_c5")
HAnimSegment589.name = "c5"
Transform590 = x3d.Transform()
Transform590.translation = [0,1.552,-0.035]
Shape591 = x3d.Shape(USE="jointbox")

Transform590.children.append(Shape591)

HAnimSegment589.children.append(Transform590)
Shape592 = x3d.Shape()
Appearance593 = x3d.Appearance(USE="SegmentLine")

Shape592.appearance = Appearance593
IndexedLineSet594 = x3d.IndexedLineSet()
IndexedLineSet594.coordIndex = [0,1,-1]
Coordinate595 = x3d.Coordinate()
Coordinate595.point = [(0, 1.5675, -0.0256),(0, 1.5823, -0.0185)]

IndexedLineSet594.coord = Coordinate595

Shape592.geometry = IndexedLineSet594

HAnimSegment589.children.append(Shape592)

HAnimJoint588.children.append(HAnimSegment589)
HAnimJoint596 = x3d.HAnimJoint(DEF="Joe_vc4")
HAnimJoint596.name = "vc4"
HAnimJoint596.center = [0,1.5675,-0.0256]
HAnimSegment597 = x3d.HAnimSegment(DEF="Joe_c4")
HAnimSegment597.name = "c4"
Shape598 = x3d.Shape()
Appearance599 = x3d.Appearance(USE="SegmentLine")

Shape598.appearance = Appearance599
IndexedLineSet600 = x3d.IndexedLineSet()
IndexedLineSet600.coordIndex = [0,1,-1]
Coordinate601 = x3d.Coordinate()
Coordinate601.point = [(0, 1.5823, -0.0185),(0, 1.595, -0.0175)]

IndexedLineSet600.coord = Coordinate601

Shape598.geometry = IndexedLineSet600

HAnimSegment597.children.append(Shape598)
Transform602 = x3d.Transform()
Transform602.translation = [0,1.5675,-0.0256]
Shape603 = x3d.Shape(USE="jointbox")

Transform602.children.append(Shape603)

HAnimSegment597.children.append(Transform602)

HAnimJoint596.children.append(HAnimSegment597)
HAnimJoint604 = x3d.HAnimJoint(DEF="Joe_vc3")
HAnimJoint604.name = "vc3"
HAnimJoint604.center = [0,1.5823,-0.0185]
HAnimSegment605 = x3d.HAnimSegment(DEF="Joe_c3")
HAnimSegment605.name = "c3"
Shape606 = x3d.Shape()
Appearance607 = x3d.Appearance(USE="SegmentLine")

Shape606.appearance = Appearance607
IndexedLineSet608 = x3d.IndexedLineSet()
IndexedLineSet608.coordIndex = [0,1,-1]
Coordinate609 = x3d.Coordinate()
Coordinate609.point = [(0, 1.595, -0.0175),(0, 1.61, -0.015)]

IndexedLineSet608.coord = Coordinate609

Shape606.geometry = IndexedLineSet608

HAnimSegment605.children.append(Shape606)
Transform610 = x3d.Transform()
Transform610.translation = [0,1.5823,-0.0185]
Shape611 = x3d.Shape(USE="jointbox")

Transform610.children.append(Shape611)

HAnimSegment605.children.append(Transform610)

HAnimJoint604.children.append(HAnimSegment605)
HAnimJoint612 = x3d.HAnimJoint(DEF="Joe_vc2")
HAnimJoint612.name = "vc2"
HAnimJoint612.center = [0,1.595,-0.0175]
HAnimSegment613 = x3d.HAnimSegment(DEF="Joe_c2")
HAnimSegment613.name = "c2"
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance(USE="SegmentLine")

Shape614.appearance = Appearance615
IndexedLineSet616 = x3d.IndexedLineSet()
IndexedLineSet616.coordIndex = [0,1,-1]
Coordinate617 = x3d.Coordinate()
Coordinate617.point = [(0, 1.61, -0.015),(0, 1.6144, -0.0034)]

IndexedLineSet616.coord = Coordinate617

Shape614.geometry = IndexedLineSet616

HAnimSegment613.children.append(Shape614)
Transform618 = x3d.Transform()
Transform618.translation = [0,1.595,-0.0175]
Shape619 = x3d.Shape(USE="jointbox")

Transform618.children.append(Shape619)

HAnimSegment613.children.append(Transform618)

HAnimJoint612.children.append(HAnimSegment613)
HAnimJoint620 = x3d.HAnimJoint(DEF="Joe_vc1")
HAnimJoint620.name = "vc1"
HAnimJoint620.center = [0,1.61,-0.015]
HAnimSegment621 = x3d.HAnimSegment(DEF="Joe_c1")
HAnimSegment621.name = "c1"
Shape622 = x3d.Shape()
Appearance623 = x3d.Appearance(USE="SegmentLine")

Shape622.appearance = Appearance623
IndexedLineSet624 = x3d.IndexedLineSet()
IndexedLineSet624.coordIndex = [0,1,-1]
Coordinate625 = x3d.Coordinate()
Coordinate625.point = [(0, 1.6144, -0.0034),(0, 1.63, -0.01)]

IndexedLineSet624.coord = Coordinate625

Shape622.geometry = IndexedLineSet624

HAnimSegment621.children.append(Shape622)
Transform626 = x3d.Transform()
Transform626.translation = [0,1.61,-0.015]
Shape627 = x3d.Shape(USE="jointbox")

Transform626.children.append(Shape627)

HAnimSegment621.children.append(Transform626)

HAnimJoint620.children.append(HAnimSegment621)
HAnimJoint628 = x3d.HAnimJoint(DEF="Joe_skullbase")
HAnimJoint628.name = "skullbase"
HAnimJoint628.center = [0,1.63,-0.01]
HAnimJoint628.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint628.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimSegment629 = x3d.HAnimSegment(DEF="Joe_skull")
HAnimSegment629.name = "skull"
Shape630 = x3d.Shape()
Appearance631 = x3d.Appearance(USE="SegmentLine")

Shape630.appearance = Appearance631
IndexedLineSet632 = x3d.IndexedLineSet()
IndexedLineSet632.coordIndex = [0,1,-1,0,2,-1]
Coordinate633 = x3d.Coordinate()
Coordinate633.point = [(0, 1.63, -0.01),(0.034, 1.659, 0.06),(-0.034, 1.655, 0.065)]

IndexedLineSet632.coord = Coordinate633

Shape630.geometry = IndexedLineSet632

HAnimSegment629.children.append(Shape630)
Transform634 = x3d.Transform()
Transform634.translation = [0,1.63,-0.01]
Shape635 = x3d.Shape(USE="jointbox")

Transform634.children.append(Shape635)

HAnimSegment629.children.append(Transform634)
HAnimSite636 = x3d.HAnimSite(DEF="Joe_skull_vertex_tip")
HAnimSite636.name = "skull_vertex_tip"
HAnimSite636.translation = [0,1.77,0]
Shape637 = x3d.Shape(USE="sitebox")

HAnimSite636.children.append(Shape637)

HAnimSegment629.children.append(HAnimSite636)
HAnimSite638 = x3d.HAnimSite(DEF="Joe_sellion_pt")
HAnimSite638.name = "sellion_pt"
HAnimSite638.translation = [0,1.665,0.09]
Shape639 = x3d.Shape(USE="sitebox")

HAnimSite638.children.append(Shape639)

HAnimSegment629.children.append(HAnimSite638)
HAnimSite640 = x3d.HAnimSite(DEF="Joe_r_infraorbitale_pt")
HAnimSite640.name = "r_infraorbitale_pt"
HAnimSite640.translation = [-0.033,1.62,0.087]
Shape641 = x3d.Shape(USE="sitebox")

HAnimSite640.children.append(Shape641)

HAnimSegment629.children.append(HAnimSite640)
HAnimSite642 = x3d.HAnimSite(DEF="Joe_l_infraorbitale_pt")
HAnimSite642.name = "l_infraorbitale_pt"
HAnimSite642.translation = [0.033,1.62,0.087]
Shape643 = x3d.Shape(USE="sitebox")

HAnimSite642.children.append(Shape643)

HAnimSegment629.children.append(HAnimSite642)
HAnimSite644 = x3d.HAnimSite(DEF="Joe_supramenton_pt")
HAnimSite644.name = "supramenton_pt"
HAnimSite644.translation = [0,1.55,0.097]
Shape645 = x3d.Shape(USE="sitebox")

HAnimSite644.children.append(Shape645)

HAnimSegment629.children.append(HAnimSite644)
HAnimSite646 = x3d.HAnimSite(DEF="Joe_r_tragion_pt")
HAnimSite646.name = "r_tragion_pt"
HAnimSite646.translation = [-0.077,1.64,-0.01]
Shape647 = x3d.Shape(USE="sitebox")

HAnimSite646.children.append(Shape647)

HAnimSegment629.children.append(HAnimSite646)
HAnimSite648 = x3d.HAnimSite(DEF="Joe_r_gonion_pt")
HAnimSite648.name = "r_gonion_pt"
HAnimSite648.translation = [-0.052,1.58,0.015]
Shape649 = x3d.Shape(USE="sitebox")

HAnimSite648.children.append(Shape649)

HAnimSegment629.children.append(HAnimSite648)
HAnimSite650 = x3d.HAnimSite(DEF="Joe_l_tragion_pt")
HAnimSite650.name = "l_tragion_pt"
HAnimSite650.translation = [0.077,1.64,-0.01]
Shape651 = x3d.Shape(USE="sitebox")

HAnimSite650.children.append(Shape651)

HAnimSegment629.children.append(HAnimSite650)
HAnimSite652 = x3d.HAnimSite(DEF="Joe_l_gonion_pt")
HAnimSite652.name = "l_gonion_pt"
HAnimSite652.translation = [0.0631,1.58,0.015]
Shape653 = x3d.Shape(USE="sitebox")

HAnimSite652.children.append(Shape653)

HAnimSegment629.children.append(HAnimSite652)
HAnimSite654 = x3d.HAnimSite(DEF="Joe_nuchale_pt")
HAnimSite654.name = "nuchale_pt"
HAnimSite654.translation = [0,1.625,-0.0925]
Shape655 = x3d.Shape(USE="sitebox")

HAnimSite654.children.append(Shape655)

HAnimSegment629.children.append(HAnimSite654)

HAnimJoint628.children.append(HAnimSegment629)
HAnimJoint656 = x3d.HAnimJoint(DEF="Joe_l_eyeball_joint")
HAnimJoint656.name = "l_eyeball_joint"
HAnimJoint656.center = [0.034,1.659,0.06]
HAnimSegment657 = x3d.HAnimSegment(DEF="Joe_l_eyeball")
HAnimSegment657.name = "l_eyeball"
Shape658 = x3d.Shape()
Appearance659 = x3d.Appearance(USE="SegmentLine")

Shape658.appearance = Appearance659
IndexedLineSet660 = x3d.IndexedLineSet()
IndexedLineSet660.coordIndex = [0,1,-1]
Coordinate661 = x3d.Coordinate()
Coordinate661.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet660.coord = Coordinate661

Shape658.geometry = IndexedLineSet660

HAnimSegment657.children.append(Shape658)
Transform662 = x3d.Transform()
Transform662.scale = [1,1,1.4]
Transform662.translation = [0.034,1.655,0.065]
Shape663 = x3d.Shape(USE="jointbox")

Transform662.children.append(Shape663)

HAnimSegment657.children.append(Transform662)

HAnimJoint656.children.append(HAnimSegment657)

HAnimJoint628.children.append(HAnimJoint656)
HAnimJoint664 = x3d.HAnimJoint(DEF="Joe_r_eyeball_joint")
HAnimJoint664.name = "r_eyeball_joint"
HAnimJoint664.center = [-0.034,1.659,0.06]
HAnimSegment665 = x3d.HAnimSegment(DEF="Joe_r_eyeball")
HAnimSegment665.name = "r_eyeball"
Shape666 = x3d.Shape()
Appearance667 = x3d.Appearance(USE="SegmentLine")

Shape666.appearance = Appearance667
IndexedLineSet668 = x3d.IndexedLineSet()
IndexedLineSet668.coordIndex = [0,1,-1]
Coordinate669 = x3d.Coordinate()
Coordinate669.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet668.coord = Coordinate669

Shape666.geometry = IndexedLineSet668

HAnimSegment665.children.append(Shape666)
Transform670 = x3d.Transform()
Transform670.scale = [1,1,1.4]
Transform670.translation = [-0.034,1.655,0.065]
Shape671 = x3d.Shape(USE="jointbox")

Transform670.children.append(Shape671)

HAnimSegment665.children.append(Transform670)

HAnimJoint664.children.append(HAnimSegment665)

HAnimJoint628.children.append(HAnimJoint664)

HAnimJoint620.children.append(HAnimJoint628)

HAnimJoint612.children.append(HAnimJoint620)

HAnimJoint604.children.append(HAnimJoint612)

HAnimJoint596.children.append(HAnimJoint604)

HAnimJoint588.children.append(HAnimJoint596)

HAnimJoint580.children.append(HAnimJoint588)

HAnimJoint568.children.append(HAnimJoint580)

HAnimJoint556.children.append(HAnimJoint568)
HAnimJoint672 = x3d.HAnimJoint(DEF="Joe_l_sternoclavicular")
HAnimJoint672.name = "l_sternoclavicular"
HAnimJoint672.center = [0.082,1.4488,-0.0353]
HAnimJoint672.skinCoordIndex = [12]
HAnimJoint672.skinCoordWeight = [1]
HAnimSegment673 = x3d.HAnimSegment(DEF="Joe_l_clavicle")
HAnimSegment673.name = "l_clavicle"
Shape674 = x3d.Shape()
Appearance675 = x3d.Appearance(USE="SegmentLine")

Shape674.appearance = Appearance675
IndexedLineSet676 = x3d.IndexedLineSet()
IndexedLineSet676.coordIndex = [0,1,-1]
Coordinate677 = x3d.Coordinate()
Coordinate677.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

IndexedLineSet676.coord = Coordinate677

Shape674.geometry = IndexedLineSet676

HAnimSegment673.children.append(Shape674)
Transform678 = x3d.Transform()
Transform678.translation = [0.082,1.4488,-0.0353]
Shape679 = x3d.Shape(USE="jointbox")

Transform678.children.append(Shape679)

HAnimSegment673.children.append(Transform678)
HAnimSite680 = x3d.HAnimSite(DEF="Joe_l_clavicle_pt")
HAnimSite680.name = "l_clavicle_pt"
HAnimSite680.translation = [0.03,1.46,0.035]
Shape681 = x3d.Shape(USE="sitebox")

HAnimSite680.children.append(Shape681)

HAnimSegment673.children.append(HAnimSite680)

HAnimJoint672.children.append(HAnimSegment673)
HAnimJoint682 = x3d.HAnimJoint(DEF="Joe_l_acromioclavicular")
HAnimJoint682.name = "l_acromioclavicular"
HAnimJoint682.center = [0.0962,1.4269,-0.0424]
HAnimJoint682.skinCoordIndex = [79]
HAnimJoint682.skinCoordWeight = [1]
HAnimSegment683 = x3d.HAnimSegment(DEF="Joe_l_scapula")
HAnimSegment683.name = "l_scapula"
Shape684 = x3d.Shape()
Appearance685 = x3d.Appearance(USE="SegmentLine")

Shape684.appearance = Appearance685
IndexedLineSet686 = x3d.IndexedLineSet()
IndexedLineSet686.coordIndex = [0,1,-1]
Coordinate687 = x3d.Coordinate()
Coordinate687.point = [(0.0962, 1.4269, -0.0424),(0.2, 1.44, -0.04)]

IndexedLineSet686.coord = Coordinate687

Shape684.geometry = IndexedLineSet686

HAnimSegment683.children.append(Shape684)
Transform688 = x3d.Transform()
Transform688.translation = [0.0962,1.4269,-0.0424]
Shape689 = x3d.Shape(USE="jointbox")

Transform688.children.append(Shape689)

HAnimSegment683.children.append(Transform688)
Transform690 = x3d.Transform()
Transform690.translation = [0.11,1.427,-0.1375]
Shape691 = x3d.Shape(USE="skinsphere")

Transform690.children.append(Shape691)

HAnimSegment683.children.append(Transform690)
HAnimSite692 = x3d.HAnimSite(DEF="Joe_l_acromion_pt")
HAnimSite692.name = "l_acromion_pt"
HAnimSite692.translation = [0.175,1.4825,-0.06]
Shape693 = x3d.Shape(USE="sitebox")

HAnimSite692.children.append(Shape693)

HAnimSegment683.children.append(HAnimSite692)
HAnimSite694 = x3d.HAnimSite(DEF="Joe_l_axilla_proximal_pt")
HAnimSite694.name = "l_axilla_proximal_pt"
HAnimSite694.translation = [0.17,1.38,0.007]
Shape695 = x3d.Shape(USE="sitebox")

HAnimSite694.children.append(Shape695)

HAnimSegment683.children.append(HAnimSite694)
HAnimSite696 = x3d.HAnimSite(DEF="Joe_l_axilla_distal_pt")
HAnimSite696.name = "l_axilla_distal_pt"
HAnimSite696.translation = [0.16,1.38,-0.125]
Shape697 = x3d.Shape(USE="sitebox")

HAnimSite696.children.append(Shape697)

HAnimSegment683.children.append(HAnimSite696)

HAnimJoint682.children.append(HAnimSegment683)
HAnimJoint698 = x3d.HAnimJoint(DEF="Joe_l_shoulder")
HAnimJoint698.name = "l_shoulder"
HAnimJoint698.center = [0.2,1.44,-0.04]
HAnimJoint698.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint698.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment699 = x3d.HAnimSegment(DEF="Joe_l_upperarm")
HAnimSegment699.name = "l_upperarm"
Shape700 = x3d.Shape()
Appearance701 = x3d.Appearance(USE="SegmentLine")

Shape700.appearance = Appearance701
IndexedLineSet702 = x3d.IndexedLineSet()
IndexedLineSet702.coordIndex = [0,1,-1]
Coordinate703 = x3d.Coordinate()
Coordinate703.point = [(0.2029, 1.44, -0.0387),(0.2, 1.1388, -0.04)]

IndexedLineSet702.coord = Coordinate703

Shape700.geometry = IndexedLineSet702

HAnimSegment699.children.append(Shape700)
Transform704 = x3d.Transform()
Transform704.translation = [0.2,1.44,-0.04]
Shape705 = x3d.Shape(USE="jointbox")

Transform704.children.append(Shape705)

HAnimSegment699.children.append(Transform704)
Transform706 = x3d.Transform()
Transform706.translation = [0.235,1.42,-0.0625]
Shape707 = x3d.Shape(USE="skinsphere")

Transform706.children.append(Shape707)

HAnimSegment699.children.append(Transform706)
Transform708 = x3d.Transform()
Transform708.translation = [0.25,1.27,-0.04]
Shape709 = x3d.Shape(USE="skinsphere")

Transform708.children.append(Shape709)

HAnimSegment699.children.append(Transform708)
Transform710 = x3d.Transform()
Transform710.translation = [0.17,1.27,-0.04]
Shape711 = x3d.Shape(USE="skinsphere")

Transform710.children.append(Shape711)

HAnimSegment699.children.append(Transform710)
Transform712 = x3d.Transform()
Transform712.translation = [0.2,1.27,-0.09]
Shape713 = x3d.Shape(USE="skinsphere")

Transform712.children.append(Shape713)

HAnimSegment699.children.append(Transform712)
Transform714 = x3d.Transform()
Transform714.translation = [0.2,1.27,0.02]
Shape715 = x3d.Shape(USE="skinsphere")

Transform714.children.append(Shape715)

HAnimSegment699.children.append(Transform714)
HAnimSite716 = x3d.HAnimSite(DEF="Joe_l_humeral_medial_epicondyle_pt")
HAnimSite716.name = "l_humeral_medial_epicondyle_pt"
HAnimSite716.translation = [0.165,1.1388,-0.04]
Shape717 = x3d.Shape(USE="sitebox")

HAnimSite716.children.append(Shape717)

HAnimSegment699.children.append(HAnimSite716)
HAnimSite718 = x3d.HAnimSite(DEF="Joe_l_radiale_pt")
HAnimSite718.name = "l_radiale_pt"
HAnimSite718.translation = [0.23,1.133,-0.055]
Shape719 = x3d.Shape(USE="sitebox")

HAnimSite718.children.append(Shape719)

HAnimSegment699.children.append(HAnimSite718)
HAnimSite720 = x3d.HAnimSite(DEF="Joe_l_humeral_lateral_epicondyle_pt")
HAnimSite720.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite720.translation = [0.244,1.1388,-0.04]
Shape721 = x3d.Shape(USE="sitebox")

HAnimSite720.children.append(Shape721)

HAnimSegment699.children.append(HAnimSite720)

HAnimJoint698.children.append(HAnimSegment699)
HAnimJoint722 = x3d.HAnimJoint(DEF="Joe_l_elbow")
HAnimJoint722.name = "l_elbow"
HAnimJoint722.center = [0.2,1.1388,-0.04]
HAnimJoint722.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint722.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment723 = x3d.HAnimSegment(DEF="Joe_l_forearm")
HAnimSegment723.name = "l_forearm"
Shape724 = x3d.Shape()
Appearance725 = x3d.Appearance(USE="SegmentLine")

Shape724.appearance = Appearance725
IndexedLineSet726 = x3d.IndexedLineSet()
IndexedLineSet726.coordIndex = [0,1,-1]
Coordinate727 = x3d.Coordinate()
Coordinate727.point = [(0.2, 1.1388, -0.04),(0.2, 0.87, -0.04)]

IndexedLineSet726.coord = Coordinate727

Shape724.geometry = IndexedLineSet726

HAnimSegment723.children.append(Shape724)
Transform728 = x3d.Transform()
Transform728.translation = [0.2,1.1388,-0.04]
Shape729 = x3d.Shape(USE="jointbox")

Transform728.children.append(Shape729)

HAnimSegment723.children.append(Transform728)
Transform730 = x3d.Transform()
Transform730.translation = [0.2,1.1388,-0.013]
Shape731 = x3d.Shape(USE="skinsphere")

Transform730.children.append(Shape731)

HAnimSegment723.children.append(Transform730)
Transform732 = x3d.Transform()
Transform732.translation = [0.225,1,-0.01]
Shape733 = x3d.Shape(USE="skinsphere")

Transform732.children.append(Shape733)

HAnimSegment723.children.append(Transform732)
Transform734 = x3d.Transform()
Transform734.translation = [0.225,1,-0.07]
Shape735 = x3d.Shape(USE="skinsphere")

Transform734.children.append(Shape735)

HAnimSegment723.children.append(Transform734)
Transform736 = x3d.Transform()
Transform736.translation = [0.185,1,-0.01]
Shape737 = x3d.Shape(USE="skinsphere")

Transform736.children.append(Shape737)

HAnimSegment723.children.append(Transform736)
Transform738 = x3d.Transform()
Transform738.translation = [0.185,1,-0.07]
Shape739 = x3d.Shape(USE="skinsphere")

Transform738.children.append(Shape739)

HAnimSegment723.children.append(Transform738)
HAnimSite740 = x3d.HAnimSite(DEF="Joe_l_radial_styloid_pt")
HAnimSite740.name = "l_radial_styloid_pt"
HAnimSite740.translation = [0.1901,0.8645,-0.0415]
Shape741 = x3d.Shape(USE="sitebox")

HAnimSite740.children.append(Shape741)

HAnimSegment723.children.append(HAnimSite740)
HAnimSite742 = x3d.HAnimSite(DEF="Joe_l_olecranon_pt")
HAnimSite742.name = "l_olecranon_pt"
HAnimSite742.translation = [0.2,1.1388,-0.08]
Shape743 = x3d.Shape(USE="sitebox")

HAnimSite742.children.append(Shape743)

HAnimSegment723.children.append(HAnimSite742)

HAnimJoint722.children.append(HAnimSegment723)
HAnimJoint744 = x3d.HAnimJoint(DEF="Joe_l_radiocarpal")
HAnimJoint744.name = "l_radiocarpal"
HAnimJoint744.center = [0.2,0.87,-0.04]
HAnimJoint744.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint744.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment745 = x3d.HAnimSegment(DEF="Joe_l_carpal")
HAnimSegment745.name = "l_carpal"
Shape746 = x3d.Shape()
Appearance747 = x3d.Appearance(USE="SegmentLine")

Shape746.appearance = Appearance747
IndexedLineSet748 = x3d.IndexedLineSet()
IndexedLineSet748.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate749 = x3d.Coordinate()
Coordinate749.point = [(0.2, 0.87, -0.04),(0.1924, 0.8472, -0.0534),(0.1983, 0.8024, -0.028),(0.1987, 0.8029, -0.053),(0.1956, 0.8019, -0.0794),(0.1925, 0.8066, -0.1036)]

IndexedLineSet748.coord = Coordinate749

Shape746.geometry = IndexedLineSet748

HAnimSegment745.children.append(Shape746)
Transform750 = x3d.Transform()
Transform750.translation = [0.2,0.87,-0.04]
Shape751 = x3d.Shape(USE="jointbox")

Transform750.children.append(Shape751)

HAnimSegment745.children.append(Transform750)
HAnimSite752 = x3d.HAnimSite(DEF="Joe_l_metacarpal_phalanx_2_pt")
HAnimSite752.name = "l_metacarpal_phalanx_2_pt"
HAnimSite752.translation = [0.2009,0.8139,-0.0237]
Shape753 = x3d.Shape(USE="sitebox")

HAnimSite752.children.append(Shape753)

HAnimSegment745.children.append(HAnimSite752)
HAnimSite754 = x3d.HAnimSite(DEF="Joe_l_ulnar_styloid_pt")
HAnimSite754.name = "l_ulnar_styloid_pt"
HAnimSite754.translation = [0.2142,0.8529,-0.0648]
Shape755 = x3d.Shape(USE="sitebox")

HAnimSite754.children.append(Shape755)

HAnimSegment745.children.append(HAnimSite754)
HAnimSite756 = x3d.HAnimSite(DEF="Joe_l_metacarpal_phalanx_5_pt")
HAnimSite756.name = "l_metacarpal_phalanx_5_pt"
HAnimSite756.translation = [0.1929,0.786,-0.1122]
Shape757 = x3d.Shape(USE="sitebox")

HAnimSite756.children.append(Shape757)

HAnimSegment745.children.append(HAnimSite756)

HAnimJoint744.children.append(HAnimSegment745)
HAnimJoint758 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_1")
HAnimJoint758.name = "l_carpometacarpal_1"
HAnimJoint758.center = [0.1924,0.8472,-0.0534]
HAnimJoint758.skinCoordIndex = [127,128]
HAnimJoint758.skinCoordWeight = [1,1]
HAnimSegment759 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_1")
HAnimSegment759.name = "l_metacarpal_1"
Shape760 = x3d.Shape()
Appearance761 = x3d.Appearance(USE="SegmentLine")

Shape760.appearance = Appearance761
IndexedLineSet762 = x3d.IndexedLineSet()
IndexedLineSet762.coordIndex = [0,1,-1]
Coordinate763 = x3d.Coordinate()
Coordinate763.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

IndexedLineSet762.coord = Coordinate763

Shape760.geometry = IndexedLineSet762

HAnimSegment759.children.append(Shape760)
Transform764 = x3d.Transform()
Transform764.translation = [0.1924,0.8472,-0.0534]
Shape765 = x3d.Shape(USE="jointbox")

Transform764.children.append(Shape765)

HAnimSegment759.children.append(Transform764)

HAnimJoint758.children.append(HAnimSegment759)
HAnimJoint766 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_1")
HAnimJoint766.name = "l_metacarpophalangeal_1"
HAnimJoint766.center = [0.1951,0.8226,0.0246]
HAnimJoint766.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint766.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment767 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_1")
HAnimSegment767.name = "l_carpal_proximal_phalanx_1"
Shape768 = x3d.Shape()
Appearance769 = x3d.Appearance(USE="SegmentLine")

Shape768.appearance = Appearance769
IndexedLineSet770 = x3d.IndexedLineSet()
IndexedLineSet770.coordIndex = [0,1,-1]
Coordinate771 = x3d.Coordinate()
Coordinate771.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

IndexedLineSet770.coord = Coordinate771

Shape768.geometry = IndexedLineSet770

HAnimSegment767.children.append(Shape768)
Transform772 = x3d.Transform()
Transform772.translation = [0.1951,0.8226,0.0246]
Shape773 = x3d.Shape(USE="jointbox")

Transform772.children.append(Shape773)

HAnimSegment767.children.append(Transform772)

HAnimJoint766.children.append(HAnimSegment767)
HAnimJoint774 = x3d.HAnimJoint(DEF="Joe_l_carpal_interphalangeal_1")
HAnimJoint774.name = "l_carpal_interphalangeal_1"
HAnimJoint774.center = [0.1955,0.8159,0.0464]
HAnimJoint774.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint774.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment775 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_1")
HAnimSegment775.name = "l_carpal_distal_phalanx_1"
Shape776 = x3d.Shape()
Appearance777 = x3d.Appearance(USE="SegmentLine")

Shape776.appearance = Appearance777
IndexedLineSet778 = x3d.IndexedLineSet()
IndexedLineSet778.coordIndex = [0,1,-1]
Coordinate779 = x3d.Coordinate()
Coordinate779.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

IndexedLineSet778.coord = Coordinate779

Shape776.geometry = IndexedLineSet778

HAnimSegment775.children.append(Shape776)
Transform780 = x3d.Transform()
Transform780.translation = [0.1955,0.8159,0.0464]
Shape781 = x3d.Shape(USE="jointbox")

Transform780.children.append(Shape781)

HAnimSegment775.children.append(Transform780)
HAnimSite782 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_1_tip")
HAnimSite782.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite782.translation = [0.1982,0.8061,0.0759]
Shape783 = x3d.Shape(USE="sitebox")

HAnimSite782.children.append(Shape783)

HAnimSegment775.children.append(HAnimSite782)

HAnimJoint774.children.append(HAnimSegment775)

HAnimJoint766.children.append(HAnimJoint774)

HAnimJoint758.children.append(HAnimJoint766)

HAnimJoint744.children.append(HAnimJoint758)
HAnimJoint784 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_2")
HAnimJoint784.name = "l_carpometacarpal_2"
HAnimJoint784.center = [0.1983,0.8024,-0.028]
HAnimJoint784.skinCoordIndex = [129,130]
HAnimJoint784.skinCoordWeight = [1,1]
HAnimSegment785 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_2")
HAnimSegment785.name = "l_metacarpal_2"
Shape786 = x3d.Shape()
Appearance787 = x3d.Appearance(USE="SegmentLine")

Shape786.appearance = Appearance787
IndexedLineSet788 = x3d.IndexedLineSet()
IndexedLineSet788.coordIndex = [0,1,-1]
Coordinate789 = x3d.Coordinate()
Coordinate789.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

IndexedLineSet788.coord = Coordinate789

Shape786.geometry = IndexedLineSet788

HAnimSegment785.children.append(Shape786)
Transform790 = x3d.Transform()
Transform790.translation = [0.1983,0.8024,-0.028]
Shape791 = x3d.Shape(USE="jointbox")

Transform790.children.append(Shape791)

HAnimSegment785.children.append(Transform790)

HAnimJoint784.children.append(HAnimSegment785)
HAnimJoint792 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_2")
HAnimJoint792.name = "l_metacarpophalangeal_2"
HAnimJoint792.center = [0.1983,0.7815,-0.028]
HAnimJoint792.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint792.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment793 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_2")
HAnimSegment793.name = "l_carpal_proximal_phalanx_2"
Shape794 = x3d.Shape()
Appearance795 = x3d.Appearance(USE="SegmentLine")

Shape794.appearance = Appearance795
IndexedLineSet796 = x3d.IndexedLineSet()
IndexedLineSet796.coordIndex = [0,1,-1]
Coordinate797 = x3d.Coordinate()
Coordinate797.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

IndexedLineSet796.coord = Coordinate797

Shape794.geometry = IndexedLineSet796

HAnimSegment793.children.append(Shape794)
Transform798 = x3d.Transform()
Transform798.translation = [0.1983,0.7815,-0.028]
Shape799 = x3d.Shape(USE="jointbox")

Transform798.children.append(Shape799)

HAnimSegment793.children.append(Transform798)

HAnimJoint792.children.append(HAnimSegment793)
HAnimJoint800 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_2")
HAnimJoint800.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint800.center = [0.2017,0.7363,-0.0248]
HAnimJoint800.skinCoordIndex = [166,167,168,169]
HAnimJoint800.skinCoordWeight = [1,1,1,1]
HAnimSegment801 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_2")
HAnimSegment801.name = "l_carpal_middle_phalanx_2"
Shape802 = x3d.Shape()
Appearance803 = x3d.Appearance(USE="SegmentLine")

Shape802.appearance = Appearance803
IndexedLineSet804 = x3d.IndexedLineSet()
IndexedLineSet804.coordIndex = [0,1,-1]
Coordinate805 = x3d.Coordinate()
Coordinate805.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

IndexedLineSet804.coord = Coordinate805

Shape802.geometry = IndexedLineSet804

HAnimSegment801.children.append(Shape802)
Transform806 = x3d.Transform()
Transform806.translation = [0.2017,0.7363,-0.0248]
Shape807 = x3d.Shape(USE="jointbox")

Transform806.children.append(Shape807)

HAnimSegment801.children.append(Transform806)

HAnimJoint800.children.append(HAnimSegment801)
HAnimJoint808 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_2")
HAnimJoint808.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint808.center = [0.2028,0.7139,-0.0236]
HAnimJoint808.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint808.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment809 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_2")
HAnimSegment809.name = "l_carpal_distal_phalanx_2"
Shape810 = x3d.Shape()
Appearance811 = x3d.Appearance(USE="SegmentLine")

Shape810.appearance = Appearance811
IndexedLineSet812 = x3d.IndexedLineSet()
IndexedLineSet812.coordIndex = [0,1,-1]
Coordinate813 = x3d.Coordinate()
Coordinate813.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

IndexedLineSet812.coord = Coordinate813

Shape810.geometry = IndexedLineSet812

HAnimSegment809.children.append(Shape810)
Transform814 = x3d.Transform()
Transform814.translation = [0.2028,0.7139,-0.0236]
Shape815 = x3d.Shape(USE="jointbox")

Transform814.children.append(Shape815)

HAnimSegment809.children.append(Transform814)
HAnimSite816 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_2_tip")
HAnimSite816.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite816.translation = [0.2089,0.6858,-0.0245]
Shape817 = x3d.Shape(USE="sitebox")

HAnimSite816.children.append(Shape817)

HAnimSegment809.children.append(HAnimSite816)
HAnimSite818 = x3d.HAnimSite(DEF="Joe_l_dactylion_pt")
HAnimSite818.name = "l_dactylion_pt"
HAnimSite818.translation = [0.2056,0.6743,-0.0482]
Shape819 = x3d.Shape(USE="sitebox")

HAnimSite818.children.append(Shape819)

HAnimSegment809.children.append(HAnimSite818)

HAnimJoint808.children.append(HAnimSegment809)

HAnimJoint800.children.append(HAnimJoint808)

HAnimJoint792.children.append(HAnimJoint800)

HAnimJoint784.children.append(HAnimJoint792)

HAnimJoint744.children.append(HAnimJoint784)
HAnimJoint820 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_3")
HAnimJoint820.name = "l_carpometacarpal_3"
HAnimJoint820.center = [0.1987,0.8029,-0.053]
HAnimJoint820.skinCoordIndex = [131,132]
HAnimJoint820.skinCoordWeight = [1,1]
HAnimSegment821 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_3")
HAnimSegment821.name = "l_metacarpal_3"
Shape822 = x3d.Shape()
Appearance823 = x3d.Appearance(USE="SegmentLine")

Shape822.appearance = Appearance823
IndexedLineSet824 = x3d.IndexedLineSet()
IndexedLineSet824.coordIndex = [0,1,-1]
Coordinate825 = x3d.Coordinate()
Coordinate825.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

IndexedLineSet824.coord = Coordinate825

Shape822.geometry = IndexedLineSet824

HAnimSegment821.children.append(Shape822)
Transform826 = x3d.Transform()
Transform826.translation = [0.1987,0.8029,-0.053]
Shape827 = x3d.Shape(USE="jointbox")

Transform826.children.append(Shape827)

HAnimSegment821.children.append(Transform826)

HAnimJoint820.children.append(HAnimSegment821)
HAnimJoint828 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_3")
HAnimJoint828.name = "l_metacarpophalangeal_3"
HAnimJoint828.center = [0.1987,0.7818,-0.053]
HAnimJoint828.skinCoordIndex = [156,157,163,164]
HAnimJoint828.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment829 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_3")
HAnimSegment829.name = "l_carpal_proximal_phalanx_3"
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance(USE="SegmentLine")

Shape830.appearance = Appearance831
IndexedLineSet832 = x3d.IndexedLineSet()
IndexedLineSet832.coordIndex = [0,1,-1]
Coordinate833 = x3d.Coordinate()
Coordinate833.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

IndexedLineSet832.coord = Coordinate833

Shape830.geometry = IndexedLineSet832

HAnimSegment829.children.append(Shape830)
Transform834 = x3d.Transform()
Transform834.translation = [0.1987,0.7818,-0.053]
Shape835 = x3d.Shape(USE="jointbox")

Transform834.children.append(Shape835)

HAnimSegment829.children.append(Transform834)

HAnimJoint828.children.append(HAnimSegment829)
HAnimJoint836 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_3")
HAnimJoint836.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint836.center = [0.2013,0.7273,-0.0503]
HAnimJoint836.skinCoordIndex = [179,180,181,182]
HAnimJoint836.skinCoordWeight = [1,1,1,1]
HAnimSegment837 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_3")
HAnimSegment837.name = "l_carpal_middle_phalanx_3"
Shape838 = x3d.Shape()
Appearance839 = x3d.Appearance(USE="SegmentLine")

Shape838.appearance = Appearance839
IndexedLineSet840 = x3d.IndexedLineSet()
IndexedLineSet840.coordIndex = [0,1,-1]
Coordinate841 = x3d.Coordinate()
Coordinate841.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

IndexedLineSet840.coord = Coordinate841

Shape838.geometry = IndexedLineSet840

HAnimSegment837.children.append(Shape838)
Transform842 = x3d.Transform()
Transform842.translation = [0.2013,0.7273,-0.0503]
Shape843 = x3d.Shape(USE="jointbox")

Transform842.children.append(Shape843)

HAnimSegment837.children.append(Transform842)

HAnimJoint836.children.append(HAnimSegment837)
HAnimJoint844 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_3")
HAnimJoint844.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint844.center = [0.2026,0.7011,-0.0494]
HAnimJoint844.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint844.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment845 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_3")
HAnimSegment845.name = "l_carpal_distal_phalanx_3"
Shape846 = x3d.Shape()
Appearance847 = x3d.Appearance(USE="SegmentLine")

Shape846.appearance = Appearance847
IndexedLineSet848 = x3d.IndexedLineSet()
IndexedLineSet848.coordIndex = [0,1,-1]
Coordinate849 = x3d.Coordinate()
Coordinate849.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

IndexedLineSet848.coord = Coordinate849

Shape846.geometry = IndexedLineSet848

HAnimSegment845.children.append(Shape846)
HAnimSite850 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_3_tip")
HAnimSite850.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite850.translation = [0.208,0.6731,-0.0491]
Shape851 = x3d.Shape(USE="sitebox")

HAnimSite850.children.append(Shape851)

HAnimSegment845.children.append(HAnimSite850)
Transform852 = x3d.Transform()
Transform852.translation = [0.2026,0.7011,-0.0494]
Shape853 = x3d.Shape(USE="jointbox")

Transform852.children.append(Shape853)

HAnimSegment845.children.append(Transform852)

HAnimJoint844.children.append(HAnimSegment845)

HAnimJoint836.children.append(HAnimJoint844)

HAnimJoint828.children.append(HAnimJoint836)

HAnimJoint820.children.append(HAnimJoint828)

HAnimJoint744.children.append(HAnimJoint820)
HAnimJoint854 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_4")
HAnimJoint854.name = "l_carpometacarpal_4"
HAnimJoint854.center = [0.1956,0.8019,-0.0794]
HAnimJoint854.skinCoordIndex = [133,134]
HAnimJoint854.skinCoordWeight = [1,1]
HAnimSegment855 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_4")
HAnimSegment855.name = "l_metacarpal_4"
Shape856 = x3d.Shape()
Appearance857 = x3d.Appearance(USE="SegmentLine")

Shape856.appearance = Appearance857
IndexedLineSet858 = x3d.IndexedLineSet()
IndexedLineSet858.coordIndex = [0,1,-1]
Coordinate859 = x3d.Coordinate()
Coordinate859.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

IndexedLineSet858.coord = Coordinate859

Shape856.geometry = IndexedLineSet858

HAnimSegment855.children.append(Shape856)
Transform860 = x3d.Transform()
Transform860.translation = [0.1956,0.8019,-0.0794]
Shape861 = x3d.Shape(USE="jointbox")

Transform860.children.append(Shape861)

HAnimSegment855.children.append(Transform860)

HAnimJoint854.children.append(HAnimSegment855)
HAnimJoint862 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_4")
HAnimJoint862.name = "l_metacarpophalangeal_4"
HAnimJoint862.center = [0.1956,0.7815,-0.0794]
HAnimJoint862.skinCoordIndex = [158,159,164,165]
HAnimJoint862.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment863 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_4")
HAnimSegment863.name = "l_carpal_proximal_phalanx_4"
Shape864 = x3d.Shape()
Appearance865 = x3d.Appearance(USE="SegmentLine")

Shape864.appearance = Appearance865
IndexedLineSet866 = x3d.IndexedLineSet()
IndexedLineSet866.coordIndex = [0,1,-1]
Coordinate867 = x3d.Coordinate()
Coordinate867.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

IndexedLineSet866.coord = Coordinate867

Shape864.geometry = IndexedLineSet866

HAnimSegment863.children.append(Shape864)
Transform868 = x3d.Transform()
Transform868.translation = [0.1956,0.7815,-0.0794]
Shape869 = x3d.Shape(USE="jointbox")

Transform868.children.append(Shape869)

HAnimSegment863.children.append(Transform868)

HAnimJoint862.children.append(HAnimSegment863)
HAnimJoint870 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_4")
HAnimJoint870.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint870.center = [0.1973,0.7287,-0.0777]
HAnimJoint870.skinCoordIndex = [192,193,194,195]
HAnimJoint870.skinCoordWeight = [1,1,1,1]
HAnimSegment871 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_4")
HAnimSegment871.name = "l_carpal_middle_phalanx_4"
Shape872 = x3d.Shape()
Appearance873 = x3d.Appearance(USE="SegmentLine")

Shape872.appearance = Appearance873
IndexedLineSet874 = x3d.IndexedLineSet()
IndexedLineSet874.coordIndex = [0,1,-1]
Coordinate875 = x3d.Coordinate()
Coordinate875.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

IndexedLineSet874.coord = Coordinate875

Shape872.geometry = IndexedLineSet874

HAnimSegment871.children.append(Shape872)
Transform876 = x3d.Transform()
Transform876.translation = [0.1973,0.7287,-0.0777]
Shape877 = x3d.Shape(USE="jointbox")

Transform876.children.append(Shape877)

HAnimSegment871.children.append(Transform876)

HAnimJoint870.children.append(HAnimSegment871)
HAnimJoint878 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_4")
HAnimJoint878.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint878.center = [0.1983,0.7045,-0.0767]
HAnimJoint878.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint878.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment879 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_4")
HAnimSegment879.name = "l_carpal_distal_phalanx_4"
Shape880 = x3d.Shape()
Appearance881 = x3d.Appearance(USE="SegmentLine")

Shape880.appearance = Appearance881
IndexedLineSet882 = x3d.IndexedLineSet()
IndexedLineSet882.coordIndex = [0,1,-1]
Coordinate883 = x3d.Coordinate()
Coordinate883.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

IndexedLineSet882.coord = Coordinate883

Shape880.geometry = IndexedLineSet882

HAnimSegment879.children.append(Shape880)
Transform884 = x3d.Transform()
Transform884.translation = [0.1983,0.7045,-0.0767]
Shape885 = x3d.Shape(USE="jointbox")

Transform884.children.append(Shape885)

HAnimSegment879.children.append(Transform884)
HAnimSite886 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_4_tip")
HAnimSite886.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite886.translation = [0.2035,0.675,-0.0756]
Shape887 = x3d.Shape(USE="sitebox")

HAnimSite886.children.append(Shape887)

HAnimSegment879.children.append(HAnimSite886)

HAnimJoint878.children.append(HAnimSegment879)

HAnimJoint870.children.append(HAnimJoint878)

HAnimJoint862.children.append(HAnimJoint870)

HAnimJoint854.children.append(HAnimJoint862)

HAnimJoint744.children.append(HAnimJoint854)
HAnimJoint888 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_5")
HAnimJoint888.name = "l_carpometacarpal_5"
HAnimJoint888.center = [0.1925,0.8066,-0.1036]
HAnimJoint888.skinCoordIndex = [135,136,137,165]
HAnimJoint888.skinCoordWeight = [1,1,1,0.5]
HAnimSegment889 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_5")
HAnimSegment889.name = "l_metacarpal_5"
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance(USE="SegmentLine")

Shape890.appearance = Appearance891
IndexedLineSet892 = x3d.IndexedLineSet()
IndexedLineSet892.coordIndex = [0,1,-1]
Coordinate893 = x3d.Coordinate()
Coordinate893.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

IndexedLineSet892.coord = Coordinate893

Shape890.geometry = IndexedLineSet892

HAnimSegment889.children.append(Shape890)
Transform894 = x3d.Transform()
Transform894.translation = [0.1925,0.8066,-0.1036]
Shape895 = x3d.Shape(USE="jointbox")

Transform894.children.append(Shape895)

HAnimSegment889.children.append(Transform894)

HAnimJoint888.children.append(HAnimSegment889)
HAnimJoint896 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_5")
HAnimJoint896.name = "l_metacarpophalangeal_5"
HAnimJoint896.center = [0.1925,0.7866,-0.1036]
HAnimJoint896.skinCoordIndex = [160,161,162]
HAnimJoint896.skinCoordWeight = [1,1,1]
HAnimSegment897 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_5")
HAnimSegment897.name = "l_carpal_proximal_phalanx_5"
Shape898 = x3d.Shape()
Appearance899 = x3d.Appearance(USE="SegmentLine")

Shape898.appearance = Appearance899
IndexedLineSet900 = x3d.IndexedLineSet()
IndexedLineSet900.coordIndex = [0,1,-1]
Coordinate901 = x3d.Coordinate()
Coordinate901.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

IndexedLineSet900.coord = Coordinate901

Shape898.geometry = IndexedLineSet900

HAnimSegment897.children.append(Shape898)
Transform902 = x3d.Transform()
Transform902.translation = [0.1925,0.7866,-0.1036]
Shape903 = x3d.Shape(USE="jointbox")

Transform902.children.append(Shape903)

HAnimSegment897.children.append(Transform902)

HAnimJoint896.children.append(HAnimSegment897)
HAnimJoint904 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_5")
HAnimJoint904.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint904.center = [0.1938,0.7452,-0.1024]
HAnimJoint904.skinCoordIndex = [205,206,207,208]
HAnimJoint904.skinCoordWeight = [1,1,1,1]
HAnimSegment905 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_5")
HAnimSegment905.name = "l_carpal_middle_phalanx_5"
Transform906 = x3d.Transform()
Transform906.translation = [0.1938,0.7452,-0.1024]
Shape907 = x3d.Shape(USE="jointbox")

Transform906.children.append(Shape907)

HAnimSegment905.children.append(Transform906)
Shape908 = x3d.Shape()
Appearance909 = x3d.Appearance(USE="SegmentLine")

Shape908.appearance = Appearance909
IndexedLineSet910 = x3d.IndexedLineSet()
IndexedLineSet910.coordIndex = [0,1,-1]
Coordinate911 = x3d.Coordinate()
Coordinate911.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

IndexedLineSet910.coord = Coordinate911

Shape908.geometry = IndexedLineSet910

HAnimSegment905.children.append(Shape908)

HAnimJoint904.children.append(HAnimSegment905)
HAnimJoint912 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_5")
HAnimJoint912.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint912.center = [0.1948,0.7277,-0.1017]
HAnimJoint912.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint912.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment913 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_5")
HAnimSegment913.name = "l_carpal_distal_phalanx_5"
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance(USE="SegmentLine")

Shape914.appearance = Appearance915
IndexedLineSet916 = x3d.IndexedLineSet()
IndexedLineSet916.coordIndex = [0,1,-1]
Coordinate917 = x3d.Coordinate()
Coordinate917.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

IndexedLineSet916.coord = Coordinate917

Shape914.geometry = IndexedLineSet916

HAnimSegment913.children.append(Shape914)
Transform918 = x3d.Transform()
Transform918.translation = [0.1948,0.7277,-0.1017]
Shape919 = x3d.Shape(USE="jointbox")

Transform918.children.append(Shape919)

HAnimSegment913.children.append(Transform918)
HAnimSite920 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_5_tip")
HAnimSite920.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite920.translation = [0.2014,0.7009,-0.1012]
Shape921 = x3d.Shape(USE="sitebox")

HAnimSite920.children.append(Shape921)

HAnimSegment913.children.append(HAnimSite920)

HAnimJoint912.children.append(HAnimSegment913)

HAnimJoint904.children.append(HAnimJoint912)

HAnimJoint896.children.append(HAnimJoint904)

HAnimJoint888.children.append(HAnimJoint896)

HAnimJoint744.children.append(HAnimJoint888)

HAnimJoint722.children.append(HAnimJoint744)

HAnimJoint698.children.append(HAnimJoint722)

HAnimJoint682.children.append(HAnimJoint698)

HAnimJoint672.children.append(HAnimJoint682)

HAnimJoint556.children.append(HAnimJoint672)
HAnimJoint922 = x3d.HAnimJoint(DEF="Joe_r_sternoclavicular")
HAnimJoint922.name = "r_sternoclavicular"
HAnimJoint922.center = [-0.03,1.46,0]
HAnimJoint922.skinCoordIndex = [10]
HAnimJoint922.skinCoordWeight = [1]
HAnimSegment923 = x3d.HAnimSegment(DEF="Joe_r_clavicle")
HAnimSegment923.name = "r_clavicle"
Shape924 = x3d.Shape()
Appearance925 = x3d.Appearance(USE="SegmentLine")

Shape924.appearance = Appearance925
IndexedLineSet926 = x3d.IndexedLineSet()
IndexedLineSet926.coordIndex = [0,1,-1]
Coordinate927 = x3d.Coordinate()
Coordinate927.point = [(-0.03, 1.46, 0.02),(-0.09, 1.41, -0.09)]

IndexedLineSet926.coord = Coordinate927

Shape924.geometry = IndexedLineSet926

HAnimSegment923.children.append(Shape924)
Transform928 = x3d.Transform()
Transform928.translation = [-0.03,1.46,0.02]
Shape929 = x3d.Shape(USE="jointbox")

Transform928.children.append(Shape929)

HAnimSegment923.children.append(Transform928)
HAnimSite930 = x3d.HAnimSite(DEF="Joe_r_clavicle_pt")
HAnimSite930.name = "r_clavicle_pt"
HAnimSite930.translation = [-0.03,1.46,0.035]
Shape931 = x3d.Shape(USE="sitebox")

HAnimSite930.children.append(Shape931)

HAnimSegment923.children.append(HAnimSite930)

HAnimJoint922.children.append(HAnimSegment923)
HAnimJoint932 = x3d.HAnimJoint(DEF="Joe_r_acromioclavicular")
HAnimJoint932.name = "r_acromioclavicular"
HAnimJoint932.center = [-0.09,1.41,-0.11]
HAnimJoint932.skinCoordIndex = [77,29]
HAnimJoint932.skinCoordWeight = [1,0.9]
HAnimSegment933 = x3d.HAnimSegment(DEF="Joe_r_scapula")
HAnimSegment933.name = "r_scapula"
Shape934 = x3d.Shape()
Appearance935 = x3d.Appearance(USE="SegmentLine")

Shape934.appearance = Appearance935
IndexedLineSet936 = x3d.IndexedLineSet()
IndexedLineSet936.coordIndex = [0,1,-1]
Coordinate937 = x3d.Coordinate()
Coordinate937.point = [(-0.09, 1.41, -0.09),(-0.2, 1.44, -0.04)]

IndexedLineSet936.coord = Coordinate937

Shape934.geometry = IndexedLineSet936

HAnimSegment933.children.append(Shape934)
Transform938 = x3d.Transform()
Transform938.translation = [-0.09,1.41,-0.09]
Shape939 = x3d.Shape(USE="jointbox")

Transform938.children.append(Shape939)

HAnimSegment933.children.append(Transform938)
Transform940 = x3d.Transform()
Transform940.translation = [-0.11,1.427,-0.1375]
Shape941 = x3d.Shape(USE="skinsphere")

Transform940.children.append(Shape941)

HAnimSegment933.children.append(Transform940)
HAnimSite942 = x3d.HAnimSite(DEF="Joe_r_acromion_pt")
HAnimSite942.name = "r_acromion_pt"
HAnimSite942.translation = [-0.178,1.4825,-0.0625]
Shape943 = x3d.Shape(USE="sitebox")

HAnimSite942.children.append(Shape943)

HAnimSegment933.children.append(HAnimSite942)
HAnimSite944 = x3d.HAnimSite(DEF="Joe_r_axilla_proximal_pt")
HAnimSite944.name = "r_axilla_proximal_pt"
HAnimSite944.translation = [-0.17,1.38,0.007]
Shape945 = x3d.Shape(USE="sitebox")

HAnimSite944.children.append(Shape945)

HAnimSegment933.children.append(HAnimSite944)
HAnimSite946 = x3d.HAnimSite(DEF="Joe_r_axilla_distal_pt")
HAnimSite946.name = "r_axilla_distal_pt"
HAnimSite946.translation = [-0.16,1.38,-0.127]
Shape947 = x3d.Shape(USE="sitebox")

HAnimSite946.children.append(Shape947)

HAnimSegment933.children.append(HAnimSite946)

HAnimJoint932.children.append(HAnimSegment933)
HAnimJoint948 = x3d.HAnimJoint(DEF="Joe_r_shoulder")
HAnimJoint948.name = "r_shoulder"
HAnimJoint948.center = [-0.2,1.44,-0.04]
HAnimJoint948.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint948.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimSegment949 = x3d.HAnimSegment(DEF="Joe_r_upperarm")
HAnimSegment949.name = "r_upperarm"
Transform950 = x3d.Transform()
Transform950.translation = [-0.2,1.44,-0.04]
Shape951 = x3d.Shape(USE="jointbox")

Transform950.children.append(Shape951)

HAnimSegment949.children.append(Transform950)
Shape952 = x3d.Shape()
Appearance953 = x3d.Appearance(USE="SegmentLine")

Shape952.appearance = Appearance953
IndexedLineSet954 = x3d.IndexedLineSet()
IndexedLineSet954.coordIndex = [0,1,-1]
Coordinate955 = x3d.Coordinate()
Coordinate955.point = [(-0.2, 1.44, -0.04),(-0.2, 1.1388, -0.04)]

IndexedLineSet954.coord = Coordinate955

Shape952.geometry = IndexedLineSet954

HAnimSegment949.children.append(Shape952)
Transform956 = x3d.Transform()
Transform956.translation = [-0.178,1.4825,-0.0625]
Shape957 = x3d.Shape(USE="skinsphere")

Transform956.children.append(Shape957)

HAnimSegment949.children.append(Transform956)
Transform958 = x3d.Transform()
Transform958.translation = [-0.17,1.38,0.007]
Shape959 = x3d.Shape(USE="skinsphere")

Transform958.children.append(Shape959)

HAnimSegment949.children.append(Transform958)
Transform960 = x3d.Transform()
Transform960.translation = [-0.16,1.38,-0.127]
Shape961 = x3d.Shape(USE="skinsphere")

Transform960.children.append(Shape961)

HAnimSegment949.children.append(Transform960)
Transform962 = x3d.Transform()
Transform962.translation = [-0.235,1.42,-0.0625]
Shape963 = x3d.Shape(USE="skinsphere")

Transform962.children.append(Shape963)

HAnimSegment949.children.append(Transform962)
Transform964 = x3d.Transform()
Transform964.translation = [-0.23,1.235,-0.04]
Shape965 = x3d.Shape(USE="skinsphere")

Transform964.children.append(Shape965)

HAnimSegment949.children.append(Transform964)
Transform966 = x3d.Transform()
Transform966.translation = [-0.16,1.23,-0.04]
Shape967 = x3d.Shape(USE="skinsphere")

Transform966.children.append(Shape967)

HAnimSegment949.children.append(Transform966)
Transform968 = x3d.Transform()
Transform968.translation = [-0.2,1.23,-0.105]
Shape969 = x3d.Shape(USE="skinsphere")

Transform968.children.append(Shape969)

HAnimSegment949.children.append(Transform968)
Transform970 = x3d.Transform()
Transform970.translation = [-0.2,1.235,0.02]
Shape971 = x3d.Shape(USE="skinsphere")

Transform970.children.append(Shape971)

HAnimSegment949.children.append(Transform970)
HAnimSite972 = x3d.HAnimSite(DEF="Joe_r_humeral_medial_epicondyle_pt")
HAnimSite972.name = "r_humeral_medial_epicondyle_pt"
HAnimSite972.translation = [-0.165,1.1388,-0.04]
Shape973 = x3d.Shape(USE="sitebox")

HAnimSite972.children.append(Shape973)

HAnimSegment949.children.append(HAnimSite972)
HAnimSite974 = x3d.HAnimSite(DEF="Joe_r_radiale_pt")
HAnimSite974.name = "r_radiale_pt"
HAnimSite974.translation = [-0.23,1.133,-0.055]
Shape975 = x3d.Shape(USE="sitebox")

HAnimSite974.children.append(Shape975)

HAnimSegment949.children.append(HAnimSite974)
HAnimSite976 = x3d.HAnimSite(DEF="Joe_r_humeral_lateral_epicondyle_pt")
HAnimSite976.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite976.translation = [-0.244,1.1388,-0.04]
Shape977 = x3d.Shape(USE="sitebox")

HAnimSite976.children.append(Shape977)

HAnimSegment949.children.append(HAnimSite976)

HAnimJoint948.children.append(HAnimSegment949)
HAnimJoint978 = x3d.HAnimJoint(DEF="Joe_r_elbow")
HAnimJoint978.name = "r_elbow"
HAnimJoint978.center = [-0.2,1.1388,-0.04]
HAnimJoint978.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint978.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment979 = x3d.HAnimSegment(DEF="Joe_r_forearm")
HAnimSegment979.name = "r_forearm"
Shape980 = x3d.Shape()
Appearance981 = x3d.Appearance(USE="SegmentLine")

Shape980.appearance = Appearance981
IndexedLineSet982 = x3d.IndexedLineSet()
IndexedLineSet982.coordIndex = [0,1,-1]
Coordinate983 = x3d.Coordinate()
Coordinate983.point = [(-0.2, 1.1388, -0.04),(-0.2, 0.89, -0.04)]

IndexedLineSet982.coord = Coordinate983

Shape980.geometry = IndexedLineSet982

HAnimSegment979.children.append(Shape980)
Transform984 = x3d.Transform()
Transform984.translation = [-0.2,1.1388,-0.04]
Shape985 = x3d.Shape(USE="jointbox")

Transform984.children.append(Shape985)

HAnimSegment979.children.append(Transform984)
Transform986 = x3d.Transform()
Transform986.translation = [-0.2,1.1388,0.013]
Shape987 = x3d.Shape(USE="skinsphere")

Transform986.children.append(Shape987)

HAnimSegment979.children.append(Transform986)
Transform988 = x3d.Transform()
Transform988.translation = [-0.225,1,-0.01]
Shape989 = x3d.Shape(USE="skinsphere")

Transform988.children.append(Shape989)

HAnimSegment979.children.append(Transform988)
Transform990 = x3d.Transform()
Transform990.translation = [-0.225,1,-0.07]
Shape991 = x3d.Shape(USE="skinsphere")

Transform990.children.append(Shape991)

HAnimSegment979.children.append(Transform990)
Transform992 = x3d.Transform()
Transform992.translation = [-0.185,1,-0.01]
Shape993 = x3d.Shape(USE="skinsphere")

Transform992.children.append(Shape993)

HAnimSegment979.children.append(Transform992)
Transform994 = x3d.Transform()
Transform994.translation = [-0.185,1,-0.07]
Shape995 = x3d.Shape(USE="skinsphere")

Transform994.children.append(Shape995)

HAnimSegment979.children.append(Transform994)
HAnimSite996 = x3d.HAnimSite(DEF="Joe_r_radial_styloid_pt")
HAnimSite996.name = "r_radial_styloid_pt"
HAnimSite996.translation = [-0.2,0.9,-0.015]
Shape997 = x3d.Shape(USE="sitebox")

HAnimSite996.children.append(Shape997)

HAnimSegment979.children.append(HAnimSite996)
HAnimSite998 = x3d.HAnimSite(DEF="Joe_r_olecranon_pt")
HAnimSite998.name = "r_olecranon_pt"
HAnimSite998.translation = [-0.2,1.1388,-0.08]
Shape999 = x3d.Shape(USE="sitebox")

HAnimSite998.children.append(Shape999)

HAnimSegment979.children.append(HAnimSite998)

HAnimJoint978.children.append(HAnimSegment979)
HAnimJoint1000 = x3d.HAnimJoint(DEF="Joe_r_radiocarpal")
HAnimJoint1000.name = "r_radiocarpal"
HAnimJoint1000.center = [-0.2,0.89,-0.04]
HAnimJoint1000.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint1000.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment1001 = x3d.HAnimSegment(DEF="Joe_r_carpal")
HAnimSegment1001.name = "r_carpal"
Shape1002 = x3d.Shape()
Appearance1003 = x3d.Appearance(USE="SegmentLine")

Shape1002.appearance = Appearance1003
IndexedLineSet1004 = x3d.IndexedLineSet()
IndexedLineSet1004.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate1005 = x3d.Coordinate()
Coordinate1005.point = [(-0.2, 0.89, -0.04),(-0.2, 0.85, 0),(-0.2, 0.84, -0.015),(-0.2, 0.835, -0.04),(-0.2, 0.835, -0.065),(-0.2, 0.84, -0.085)]

IndexedLineSet1004.coord = Coordinate1005

Shape1002.geometry = IndexedLineSet1004

HAnimSegment1001.children.append(Shape1002)
Transform1006 = x3d.Transform()
Transform1006.translation = [-0.2,0.89,-0.04]
Shape1007 = x3d.Shape(USE="jointbox")

Transform1006.children.append(Shape1007)

HAnimSegment1001.children.append(Transform1006)
HAnimSite1008 = x3d.HAnimSite(DEF="Joe_r_ulnar_styloid_pt")
HAnimSite1008.name = "r_ulnar_styloid_pt"
HAnimSite1008.translation = [-0.2,0.9,-0.085]
Shape1009 = x3d.Shape(USE="sitebox")

HAnimSite1008.children.append(Shape1009)

HAnimSegment1001.children.append(HAnimSite1008)

HAnimJoint1000.children.append(HAnimSegment1001)
HAnimJoint1010 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_1")
HAnimJoint1010.name = "r_carpometacarpal_1"
HAnimJoint1010.center = [-0.2,0.85,0]
HAnimJoint1010.skinCoordIndex = [243,244]
HAnimJoint1010.skinCoordWeight = [1,1]
HAnimSegment1011 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_1")
HAnimSegment1011.name = "r_metacarpal_1"
Shape1012 = x3d.Shape()
Appearance1013 = x3d.Appearance(USE="SegmentLine")

Shape1012.appearance = Appearance1013
IndexedLineSet1014 = x3d.IndexedLineSet()
IndexedLineSet1014.coordIndex = [0,1,-1]
Coordinate1015 = x3d.Coordinate()
Coordinate1015.point = [(-0.2, 0.85, 0),(-0.2, 0.82, 0.03)]

IndexedLineSet1014.coord = Coordinate1015

Shape1012.geometry = IndexedLineSet1014

HAnimSegment1011.children.append(Shape1012)
Transform1016 = x3d.Transform()
Transform1016.translation = [-0.2,0.85,0]
Shape1017 = x3d.Shape(USE="jointbox")

Transform1016.children.append(Shape1017)

HAnimSegment1011.children.append(Transform1016)

HAnimJoint1010.children.append(HAnimSegment1011)
HAnimJoint1018 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_1")
HAnimJoint1018.name = "r_metacarpophalangeal_1"
HAnimJoint1018.center = [-0.2,0.82,0.03]
HAnimJoint1018.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint1018.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment1019 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_1")
HAnimSegment1019.name = "r_carpal_proximal_phalanx_1"
Shape1020 = x3d.Shape()
Appearance1021 = x3d.Appearance(USE="SegmentLine")

Shape1020.appearance = Appearance1021
IndexedLineSet1022 = x3d.IndexedLineSet()
IndexedLineSet1022.coordIndex = [0,1,-1]
Coordinate1023 = x3d.Coordinate()
Coordinate1023.point = [(-0.2, 0.82, 0.03),(-0.2, 0.8, 0.05)]

IndexedLineSet1022.coord = Coordinate1023

Shape1020.geometry = IndexedLineSet1022

HAnimSegment1019.children.append(Shape1020)
Transform1024 = x3d.Transform()
Transform1024.translation = [-0.2,0.82,0.03]
Shape1025 = x3d.Shape(USE="jointbox")

Transform1024.children.append(Shape1025)

HAnimSegment1019.children.append(Transform1024)

HAnimJoint1018.children.append(HAnimSegment1019)
HAnimJoint1026 = x3d.HAnimJoint(DEF="Joe_r_carpal_interphalangeal_1")
HAnimJoint1026.name = "r_carpal_interphalangeal_1"
HAnimJoint1026.center = [-0.2,0.8,0.05]
HAnimJoint1026.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint1026.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1027 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_1")
HAnimSegment1027.name = "r_carpal_distal_phalanx_1"
Shape1028 = x3d.Shape()
Appearance1029 = x3d.Appearance(USE="SegmentLine")

Shape1028.appearance = Appearance1029
IndexedLineSet1030 = x3d.IndexedLineSet()
IndexedLineSet1030.coordIndex = [0,1,-1]
Coordinate1031 = x3d.Coordinate()
Coordinate1031.point = [(-0.2, 0.8, 0.05),(-0.2, 0.78, 0.07)]

IndexedLineSet1030.coord = Coordinate1031

Shape1028.geometry = IndexedLineSet1030

HAnimSegment1027.children.append(Shape1028)
Transform1032 = x3d.Transform(DEF="Thumbnail")
Transform1032.translation = [-0.2,0.785,0.075]
Shape1033 = x3d.Shape(USE="skinsphere")

Transform1032.children.append(Shape1033)

HAnimSegment1027.children.append(Transform1032)
Transform1034 = x3d.Transform()
Transform1034.translation = [-0.2,0.8,0.05]
Shape1035 = x3d.Shape(USE="jointbox")

Transform1034.children.append(Shape1035)

HAnimSegment1027.children.append(Transform1034)
HAnimSite1036 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_1_tip")
HAnimSite1036.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1036.translation = [-0.2,0.78,0.07]
Shape1037 = x3d.Shape(USE="sitebox")

HAnimSite1036.children.append(Shape1037)

HAnimSegment1027.children.append(HAnimSite1036)

HAnimJoint1026.children.append(HAnimSegment1027)

HAnimJoint1018.children.append(HAnimJoint1026)

HAnimJoint1010.children.append(HAnimJoint1018)

HAnimJoint1000.children.append(HAnimJoint1010)
HAnimJoint1038 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_2")
HAnimJoint1038.name = "r_carpometacarpal_2"
HAnimJoint1038.center = [-0.2,0.84,-0.015]
HAnimJoint1038.skinCoordIndex = [245,246]
HAnimJoint1038.skinCoordWeight = [1,1]
HAnimSegment1039 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_2")
HAnimSegment1039.name = "r_metacarpal_2"
Shape1040 = x3d.Shape()
Appearance1041 = x3d.Appearance(USE="SegmentLine")

Shape1040.appearance = Appearance1041
IndexedLineSet1042 = x3d.IndexedLineSet()
IndexedLineSet1042.coordIndex = [0,1,-1]
Coordinate1043 = x3d.Coordinate()
Coordinate1043.point = [(-0.2, 0.84, -0.015),(-0.2, 0.793, -0.015)]

IndexedLineSet1042.coord = Coordinate1043

Shape1040.geometry = IndexedLineSet1042

HAnimSegment1039.children.append(Shape1040)
Transform1044 = x3d.Transform()
Transform1044.translation = [-0.2,0.84,-0.015]
Shape1045 = x3d.Shape(USE="jointbox")

Transform1044.children.append(Shape1045)

HAnimSegment1039.children.append(Transform1044)
HAnimSite1046 = x3d.HAnimSite(DEF="Joe_r_metacarpal_phalanx_2_pt")
HAnimSite1046.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1046.translation = [-0.2,0.793,-0.005]
Shape1047 = x3d.Shape(USE="sitebox")

HAnimSite1046.children.append(Shape1047)

HAnimSegment1039.children.append(HAnimSite1046)

HAnimJoint1038.children.append(HAnimSegment1039)
HAnimJoint1048 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_2")
HAnimJoint1048.name = "r_metacarpophalangeal_2"
HAnimJoint1048.center = [-0.2,0.793,-0.015]
HAnimJoint1048.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint1048.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment1049 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_2")
HAnimSegment1049.name = "r_carpal_proximal_phalanx_2"
Shape1050 = x3d.Shape()
Appearance1051 = x3d.Appearance(USE="SegmentLine")

Shape1050.appearance = Appearance1051
IndexedLineSet1052 = x3d.IndexedLineSet()
IndexedLineSet1052.coordIndex = [0,1,-1]
Coordinate1053 = x3d.Coordinate()
Coordinate1053.point = [(-0.2, 0.793, -0.015),(-0.2, 0.745, -0.015)]

IndexedLineSet1052.coord = Coordinate1053

Shape1050.geometry = IndexedLineSet1052

HAnimSegment1049.children.append(Shape1050)
Transform1054 = x3d.Transform()
Transform1054.translation = [-0.2,0.793,-0.015]
Shape1055 = x3d.Shape(USE="jointbox")

Transform1054.children.append(Shape1055)

HAnimSegment1049.children.append(Transform1054)

HAnimJoint1048.children.append(HAnimSegment1049)
HAnimJoint1056 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_2")
HAnimJoint1056.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1056.center = [-0.2,0.745,-0.015]
HAnimJoint1056.skinCoordIndex = [282,283,284,285]
HAnimJoint1056.skinCoordWeight = [1,1,1,1]
HAnimSegment1057 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_2")
HAnimSegment1057.name = "r_carpal_middle_phalanx_2"
Shape1058 = x3d.Shape()
Appearance1059 = x3d.Appearance(USE="SegmentLine")

Shape1058.appearance = Appearance1059
IndexedLineSet1060 = x3d.IndexedLineSet()
IndexedLineSet1060.coordIndex = [0,1,-1]
Coordinate1061 = x3d.Coordinate()
Coordinate1061.point = [(-0.2, 0.745, -0.015),(-0.2, 0.72, -0.015)]

IndexedLineSet1060.coord = Coordinate1061

Shape1058.geometry = IndexedLineSet1060

HAnimSegment1057.children.append(Shape1058)
Transform1062 = x3d.Transform()
Transform1062.translation = [-0.2,0.745,-0.015]
Shape1063 = x3d.Shape(USE="jointbox")

Transform1062.children.append(Shape1063)

HAnimSegment1057.children.append(Transform1062)

HAnimJoint1056.children.append(HAnimSegment1057)
HAnimJoint1064 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_2")
HAnimJoint1064.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1064.center = [-0.2,0.72,-0.015]
HAnimJoint1064.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint1064.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1065 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_2")
HAnimSegment1065.name = "r_carpal_distal_phalanx_2"
Shape1066 = x3d.Shape()
Appearance1067 = x3d.Appearance(USE="SegmentLine")

Shape1066.appearance = Appearance1067
IndexedLineSet1068 = x3d.IndexedLineSet()
IndexedLineSet1068.coordIndex = [0,1,-1]
Coordinate1069 = x3d.Coordinate()
Coordinate1069.point = [(-0.2, 0.72, -0.015),(-0.2, 0.695, -0.015)]

IndexedLineSet1068.coord = Coordinate1069

Shape1066.geometry = IndexedLineSet1068

HAnimSegment1065.children.append(Shape1066)
Transform1070 = x3d.Transform()
Transform1070.translation = [-0.2,0.72,-0.015]
Shape1071 = x3d.Shape(USE="jointbox")

Transform1070.children.append(Shape1071)

HAnimSegment1065.children.append(Transform1070)
HAnimSite1072 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_2_tip")
HAnimSite1072.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1072.translation = [-0.2,0.695,-0.015]
Shape1073 = x3d.Shape(USE="sitebox")

HAnimSite1072.children.append(Shape1073)

HAnimSegment1065.children.append(HAnimSite1072)

HAnimJoint1064.children.append(HAnimSegment1065)

HAnimJoint1056.children.append(HAnimJoint1064)

HAnimJoint1048.children.append(HAnimJoint1056)

HAnimJoint1038.children.append(HAnimJoint1048)

HAnimJoint1000.children.append(HAnimJoint1038)
HAnimJoint1074 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_3")
HAnimJoint1074.name = "r_carpometacarpal_3"
HAnimJoint1074.center = [-0.2,0.835,-0.04]
HAnimJoint1074.skinCoordIndex = [247,248]
HAnimJoint1074.skinCoordWeight = [1,1]
HAnimSegment1075 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_3")
HAnimSegment1075.name = "r_metacarpal_3"
Shape1076 = x3d.Shape()
Appearance1077 = x3d.Appearance(USE="SegmentLine")

Shape1076.appearance = Appearance1077
IndexedLineSet1078 = x3d.IndexedLineSet()
IndexedLineSet1078.coordIndex = [0,1,-1]
Coordinate1079 = x3d.Coordinate()
Coordinate1079.point = [(-0.2, 0.835, -0.04),(-0.2, 0.788, -0.04)]

IndexedLineSet1078.coord = Coordinate1079

Shape1076.geometry = IndexedLineSet1078

HAnimSegment1075.children.append(Shape1076)
Transform1080 = x3d.Transform()
Transform1080.translation = [-0.2,0.835,-0.04]
Shape1081 = x3d.Shape(USE="jointbox")

Transform1080.children.append(Shape1081)

HAnimSegment1075.children.append(Transform1080)

HAnimJoint1074.children.append(HAnimSegment1075)
HAnimJoint1082 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_3")
HAnimJoint1082.name = "r_metacarpophalangeal_3"
HAnimJoint1082.center = [-0.2,0.788,-0.04]
HAnimJoint1082.skinCoordIndex = [272,273,279,280]
HAnimJoint1082.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1083 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_3")
HAnimSegment1083.name = "r_carpal_proximal_phalanx_3"
Shape1084 = x3d.Shape()
Appearance1085 = x3d.Appearance(USE="SegmentLine")

Shape1084.appearance = Appearance1085
IndexedLineSet1086 = x3d.IndexedLineSet()
IndexedLineSet1086.coordIndex = [0,1,-1]
Coordinate1087 = x3d.Coordinate()
Coordinate1087.point = [(-0.2, 0.788, -0.04),(-0.2, 0.74, -0.04)]

IndexedLineSet1086.coord = Coordinate1087

Shape1084.geometry = IndexedLineSet1086

HAnimSegment1083.children.append(Shape1084)
Transform1088 = x3d.Transform()
Transform1088.translation = [-0.2,0.788,-0.04]
Shape1089 = x3d.Shape(USE="jointbox")

Transform1088.children.append(Shape1089)

HAnimSegment1083.children.append(Transform1088)

HAnimJoint1082.children.append(HAnimSegment1083)
HAnimJoint1090 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_3")
HAnimJoint1090.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1090.center = [-0.2,0.74,-0.04]
HAnimJoint1090.skinCoordIndex = [295,296,297,298]
HAnimJoint1090.skinCoordWeight = [1,1,1,1]
HAnimSegment1091 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_3")
HAnimSegment1091.name = "r_carpal_middle_phalanx_3"
Shape1092 = x3d.Shape()
Appearance1093 = x3d.Appearance(USE="SegmentLine")

Shape1092.appearance = Appearance1093
IndexedLineSet1094 = x3d.IndexedLineSet()
IndexedLineSet1094.coordIndex = [0,1,-1]
Coordinate1095 = x3d.Coordinate()
Coordinate1095.point = [(-0.2, 0.74, -0.04),(-0.2, 0.7142, -0.04)]

IndexedLineSet1094.coord = Coordinate1095

Shape1092.geometry = IndexedLineSet1094

HAnimSegment1091.children.append(Shape1092)
Transform1096 = x3d.Transform()
Transform1096.translation = [-0.2,0.74,-0.04]
Shape1097 = x3d.Shape(USE="jointbox")

Transform1096.children.append(Shape1097)

HAnimSegment1091.children.append(Transform1096)

HAnimJoint1090.children.append(HAnimSegment1091)
HAnimJoint1098 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_3")
HAnimJoint1098.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1098.center = [-0.2,0.7142,-0.04]
HAnimJoint1098.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint1098.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1099 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_3")
HAnimSegment1099.name = "r_carpal_distal_phalanx_3"
Shape1100 = x3d.Shape()
Appearance1101 = x3d.Appearance(USE="SegmentLine")

Shape1100.appearance = Appearance1101
IndexedLineSet1102 = x3d.IndexedLineSet()
IndexedLineSet1102.coordIndex = [0,1,-1]
Coordinate1103 = x3d.Coordinate()
Coordinate1103.point = [(-0.2, 0.7142, -0.04),(-0.2, 0.6758, -0.04)]

IndexedLineSet1102.coord = Coordinate1103

Shape1100.geometry = IndexedLineSet1102

HAnimSegment1099.children.append(Shape1100)
Transform1104 = x3d.Transform()
Transform1104.translation = [-0.2,0.7142,-0.04]
Shape1105 = x3d.Shape(USE="jointbox")

Transform1104.children.append(Shape1105)

HAnimSegment1099.children.append(Transform1104)
HAnimSite1106 = x3d.HAnimSite(DEF="Joe_r_dactylion_pt")
HAnimSite1106.name = "r_dactylion_pt"
HAnimSite1106.translation = [-0.2,0.68,-0.04]
Shape1107 = x3d.Shape(USE="sitebox")

HAnimSite1106.children.append(Shape1107)

HAnimSegment1099.children.append(HAnimSite1106)
HAnimSite1108 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_3_tip")
HAnimSite1108.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1108.translation = [-0.2,0.68,-0.04]
Shape1109 = x3d.Shape(USE="sitebox")

HAnimSite1108.children.append(Shape1109)

HAnimSegment1099.children.append(HAnimSite1108)

HAnimJoint1098.children.append(HAnimSegment1099)

HAnimJoint1090.children.append(HAnimJoint1098)

HAnimJoint1082.children.append(HAnimJoint1090)

HAnimJoint1074.children.append(HAnimJoint1082)

HAnimJoint1000.children.append(HAnimJoint1074)
HAnimJoint1110 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_4")
HAnimJoint1110.name = "r_carpometacarpal_4"
HAnimJoint1110.center = [-0.2,0.835,-0.065]
HAnimJoint1110.skinCoordIndex = [249,250]
HAnimJoint1110.skinCoordWeight = [1,1]
HAnimSegment1111 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_4")
HAnimSegment1111.name = "r_metacarpal_4"
Shape1112 = x3d.Shape()
Appearance1113 = x3d.Appearance(USE="SegmentLine")

Shape1112.appearance = Appearance1113
IndexedLineSet1114 = x3d.IndexedLineSet()
IndexedLineSet1114.coordIndex = [0,1,-1]
Coordinate1115 = x3d.Coordinate()
Coordinate1115.point = [(-0.2, 0.835, -0.065),(-0.2, 0.793, -0.065)]

IndexedLineSet1114.coord = Coordinate1115

Shape1112.geometry = IndexedLineSet1114

HAnimSegment1111.children.append(Shape1112)
Transform1116 = x3d.Transform()
Transform1116.translation = [-0.2,0.835,-0.065]
Shape1117 = x3d.Shape(USE="jointbox")

Transform1116.children.append(Shape1117)

HAnimSegment1111.children.append(Transform1116)

HAnimJoint1110.children.append(HAnimSegment1111)
HAnimJoint1118 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_4")
HAnimJoint1118.name = "r_metacarpophalangeal_4"
HAnimJoint1118.center = [-0.2,0.793,-0.065]
HAnimJoint1118.skinCoordIndex = [274,275,280,281]
HAnimJoint1118.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1119 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_4")
HAnimSegment1119.name = "r_carpal_proximal_phalanx_4"
Shape1120 = x3d.Shape()
Appearance1121 = x3d.Appearance(USE="SegmentLine")

Shape1120.appearance = Appearance1121
IndexedLineSet1122 = x3d.IndexedLineSet()
IndexedLineSet1122.coordIndex = [0,1,-1]
Coordinate1123 = x3d.Coordinate()
Coordinate1123.point = [(-0.2, 0.793, -0.065),(-0.2, 0.74, -0.065)]

IndexedLineSet1122.coord = Coordinate1123

Shape1120.geometry = IndexedLineSet1122

HAnimSegment1119.children.append(Shape1120)
Transform1124 = x3d.Transform()
Transform1124.translation = [-0.2,0.793,-0.065]
Shape1125 = x3d.Shape(USE="jointbox")

Transform1124.children.append(Shape1125)

HAnimSegment1119.children.append(Transform1124)

HAnimJoint1118.children.append(HAnimSegment1119)
HAnimJoint1126 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_4")
HAnimJoint1126.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1126.center = [-0.2,0.74,-0.065]
HAnimJoint1126.skinCoordIndex = [308,309,310,311]
HAnimJoint1126.skinCoordWeight = [1,1,1,1]
HAnimSegment1127 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_4")
HAnimSegment1127.name = "r_carpal_middle_phalanx_4"
Shape1128 = x3d.Shape()
Appearance1129 = x3d.Appearance(USE="SegmentLine")

Shape1128.appearance = Appearance1129
IndexedLineSet1130 = x3d.IndexedLineSet()
IndexedLineSet1130.coordIndex = [0,1,-1]
Coordinate1131 = x3d.Coordinate()
Coordinate1131.point = [(-0.2, 0.74, -0.065),(-0.2, 0.7177, -0.065)]

IndexedLineSet1130.coord = Coordinate1131

Shape1128.geometry = IndexedLineSet1130

HAnimSegment1127.children.append(Shape1128)
Transform1132 = x3d.Transform()
Transform1132.translation = [-0.2,0.74,-0.065]
Shape1133 = x3d.Shape(USE="jointbox")

Transform1132.children.append(Shape1133)

HAnimSegment1127.children.append(Transform1132)

HAnimJoint1126.children.append(HAnimSegment1127)
HAnimJoint1134 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_4")
HAnimJoint1134.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1134.center = [-0.2,0.7177,-0.065]
HAnimJoint1134.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint1134.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1135 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_4")
HAnimSegment1135.name = "r_carpal_distal_phalanx_4"
Shape1136 = x3d.Shape()
Appearance1137 = x3d.Appearance(USE="SegmentLine")

Shape1136.appearance = Appearance1137
IndexedLineSet1138 = x3d.IndexedLineSet()
IndexedLineSet1138.coordIndex = [0,1,-1]
Coordinate1139 = x3d.Coordinate()
Coordinate1139.point = [(-0.2, 0.7177, -0.065),(-0.2, 0.695, -0.065)]

IndexedLineSet1138.coord = Coordinate1139

Shape1136.geometry = IndexedLineSet1138

HAnimSegment1135.children.append(Shape1136)
Transform1140 = x3d.Transform()
Transform1140.translation = [-0.2,0.7177,-0.065]
Shape1141 = x3d.Shape(USE="jointbox")

Transform1140.children.append(Shape1141)

HAnimSegment1135.children.append(Transform1140)
HAnimSite1142 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_4_tip")
HAnimSite1142.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1142.translation = [-0.2,0.695,-0.065]
Shape1143 = x3d.Shape(USE="sitebox")

HAnimSite1142.children.append(Shape1143)

HAnimSegment1135.children.append(HAnimSite1142)

HAnimJoint1134.children.append(HAnimSegment1135)

HAnimJoint1126.children.append(HAnimJoint1134)

HAnimJoint1118.children.append(HAnimJoint1126)

HAnimJoint1110.children.append(HAnimJoint1118)

HAnimJoint1000.children.append(HAnimJoint1110)
HAnimJoint1144 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_5")
HAnimJoint1144.name = "r_carpometacarpal_5"
HAnimJoint1144.center = [-0.2,0.84,-0.085]
HAnimJoint1144.skinCoordIndex = [251,252,253,281]
HAnimJoint1144.skinCoordWeight = [1,1,1,0.5]
HAnimSegment1145 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_5")
HAnimSegment1145.name = "r_metacarpal_5"
Shape1146 = x3d.Shape()
Appearance1147 = x3d.Appearance(USE="SegmentLine")

Shape1146.appearance = Appearance1147
IndexedLineSet1148 = x3d.IndexedLineSet()
IndexedLineSet1148.coordIndex = [0,1,-1]
Coordinate1149 = x3d.Coordinate()
Coordinate1149.point = [(-0.2, 0.84, -0.085),(-0.2, 0.79, -0.085)]

IndexedLineSet1148.coord = Coordinate1149

Shape1146.geometry = IndexedLineSet1148

HAnimSegment1145.children.append(Shape1146)
Transform1150 = x3d.Transform()
Transform1150.translation = [-0.2,0.84,-0.085]
Shape1151 = x3d.Shape(USE="jointbox")

Transform1150.children.append(Shape1151)

HAnimSegment1145.children.append(Transform1150)
HAnimSite1152 = x3d.HAnimSite(DEF="Joe_r_metacarpal_phalanx_5_pt")
HAnimSite1152.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1152.translation = [-0.2,0.79,-0.095]
Shape1153 = x3d.Shape(USE="sitebox")

HAnimSite1152.children.append(Shape1153)

HAnimSegment1145.children.append(HAnimSite1152)

HAnimJoint1144.children.append(HAnimSegment1145)
HAnimJoint1154 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_5")
HAnimJoint1154.name = "r_metacarpophalangeal_5"
HAnimJoint1154.center = [-0.2,0.79,-0.085]
HAnimJoint1154.skinCoordIndex = [276,277,278]
HAnimJoint1154.skinCoordWeight = [1,1,1]
HAnimSegment1155 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_5")
HAnimSegment1155.name = "r_carpal_proximal_phalanx_5"
Shape1156 = x3d.Shape()
Appearance1157 = x3d.Appearance(USE="SegmentLine")

Shape1156.appearance = Appearance1157
IndexedLineSet1158 = x3d.IndexedLineSet()
IndexedLineSet1158.coordIndex = [0,1,-1]
Coordinate1159 = x3d.Coordinate()
Coordinate1159.point = [(-0.2, 0.79, -0.085),(-0.2, 0.755, -0.085)]

IndexedLineSet1158.coord = Coordinate1159

Shape1156.geometry = IndexedLineSet1158

HAnimSegment1155.children.append(Shape1156)
Transform1160 = x3d.Transform()
Transform1160.translation = [-0.2,0.79,-0.085]
Shape1161 = x3d.Shape(USE="jointbox")

Transform1160.children.append(Shape1161)

HAnimSegment1155.children.append(Transform1160)

HAnimJoint1154.children.append(HAnimSegment1155)
HAnimJoint1162 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_5")
HAnimJoint1162.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1162.center = [-0.2,0.755,-0.085]
HAnimJoint1162.skinCoordIndex = [321,322,323,324]
HAnimJoint1162.skinCoordWeight = [1,1,1,1]
HAnimSegment1163 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_5")
HAnimSegment1163.name = "r_carpal_middle_phalanx_5"
Shape1164 = x3d.Shape()
Appearance1165 = x3d.Appearance(USE="SegmentLine")

Shape1164.appearance = Appearance1165
IndexedLineSet1166 = x3d.IndexedLineSet()
IndexedLineSet1166.coordIndex = [0,1,-1]
Coordinate1167 = x3d.Coordinate()
Coordinate1167.point = [(-0.2, 0.755, -0.085),(-0.2, 0.735, -0.085)]

IndexedLineSet1166.coord = Coordinate1167

Shape1164.geometry = IndexedLineSet1166

HAnimSegment1163.children.append(Shape1164)
Transform1168 = x3d.Transform()
Transform1168.translation = [-0.2,0.755,-0.085]
Shape1169 = x3d.Shape(USE="jointbox")

Transform1168.children.append(Shape1169)

HAnimSegment1163.children.append(Transform1168)

HAnimJoint1162.children.append(HAnimSegment1163)
HAnimJoint1170 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_5")
HAnimJoint1170.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1170.center = [-0.2,0.735,-0.09]
HAnimJoint1170.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint1170.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1171 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_5")
HAnimSegment1171.name = "r_carpal_distal_phalanx_5"
Shape1172 = x3d.Shape()
Appearance1173 = x3d.Appearance(USE="SegmentLine")

Shape1172.appearance = Appearance1173
IndexedLineSet1174 = x3d.IndexedLineSet()
IndexedLineSet1174.coordIndex = [0,1,-1]
Coordinate1175 = x3d.Coordinate()
Coordinate1175.point = [(-0.2, 0.735, -0.085),(-0.2, 0.72, -0.085)]

IndexedLineSet1174.coord = Coordinate1175

Shape1172.geometry = IndexedLineSet1174

HAnimSegment1171.children.append(Shape1172)
Transform1176 = x3d.Transform()
Transform1176.translation = [-0.2,0.735,-0.085]
Shape1177 = x3d.Shape(USE="jointbox")

Transform1176.children.append(Shape1177)

HAnimSegment1171.children.append(Transform1176)
HAnimSite1178 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_5_tip")
HAnimSite1178.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1178.translation = [-0.2,0.72,-0.085]
Shape1179 = x3d.Shape(USE="sitebox")

HAnimSite1178.children.append(Shape1179)

HAnimSegment1171.children.append(HAnimSite1178)

HAnimJoint1170.children.append(HAnimSegment1171)

HAnimJoint1162.children.append(HAnimJoint1170)

HAnimJoint1154.children.append(HAnimJoint1162)

HAnimJoint1144.children.append(HAnimJoint1154)

HAnimJoint1000.children.append(HAnimJoint1144)

HAnimJoint978.children.append(HAnimJoint1000)

HAnimJoint948.children.append(HAnimJoint978)

HAnimJoint932.children.append(HAnimJoint948)

HAnimJoint922.children.append(HAnimJoint932)

HAnimJoint556.children.append(HAnimJoint922)

HAnimJoint548.children.append(HAnimJoint556)

HAnimJoint540.children.append(HAnimJoint548)

HAnimJoint530.children.append(HAnimJoint540)

HAnimJoint522.children.append(HAnimJoint530)

HAnimJoint514.children.append(HAnimJoint522)

HAnimJoint506.children.append(HAnimJoint514)

HAnimJoint498.children.append(HAnimJoint506)

HAnimJoint486.children.append(HAnimJoint498)

HAnimJoint476.children.append(HAnimJoint486)

HAnimJoint468.children.append(HAnimJoint476)

HAnimJoint460.children.append(HAnimJoint468)

HAnimJoint452.children.append(HAnimJoint460)

HAnimJoint426.children.append(HAnimJoint452)

HAnimJoint418.children.append(HAnimJoint426)

HAnimJoint410.children.append(HAnimJoint418)

HAnimJoint395.children.append(HAnimJoint410)

HAnimJoint81.children.append(HAnimJoint395)

HAnimHumanoid78.skeleton.append(HAnimJoint81)
Shape1180 = x3d.Shape(DEF="SkinShape")
Appearance1181 = x3d.Appearance(DEF="SkinAppearance")
Material1182 = x3d.Material(DEF="SkinMaterial")
Material1182.ambientIntensity = 0.6
Material1182.diffuseColor = [1,1,1]
Material1182.shininess = 0.6
Material1182.transparency = 0.2

Appearance1181.material = Material1182
ImageTexture1183 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture1183.description = "Blue Spiral Pattern"
ImageTexture1183.url = ["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1181.texture = ImageTexture1183

Shape1180.appearance = Appearance1181
IndexedFaceSet1184 = x3d.IndexedFaceSet()
IndexedFaceSet1184.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet1184.creaseAngle = 3.1
Color1185 = x3d.Color()
Color1185.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1184.color = Color1185
Coordinate1186 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate1186.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.0723, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

IndexedFaceSet1184.coord = Coordinate1186

Shape1180.geometry = IndexedFaceSet1184

HAnimHumanoid78.skin.append(Shape1180)
Coordinate1187 = x3d.Coordinate(USE="TheSkinCoord")

HAnimHumanoid78.skinCoord = Coordinate1187
HAnimJoint1188 = x3d.HAnimJoint(USE="Joe_humanoid_root")

HAnimHumanoid78.joints.append(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint(USE="Joe_sacroiliac")

HAnimHumanoid78.joints.append(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint(USE="Joe_vl5")

HAnimHumanoid78.joints.append(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint(USE="Joe_vl4")

HAnimHumanoid78.joints.append(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint(USE="Joe_vl3")

HAnimHumanoid78.joints.append(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint(USE="Joe_vl2")

HAnimHumanoid78.joints.append(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint(USE="Joe_vl1")

HAnimHumanoid78.joints.append(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint(USE="Joe_vt12")

HAnimHumanoid78.joints.append(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint(USE="Joe_vt11")

HAnimHumanoid78.joints.append(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint(USE="Joe_vt10")

HAnimHumanoid78.joints.append(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint(USE="Joe_vt9")

HAnimHumanoid78.joints.append(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint(USE="Joe_vt8")

HAnimHumanoid78.joints.append(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint(USE="Joe_vt7")

HAnimHumanoid78.joints.append(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint(USE="Joe_vt6")

HAnimHumanoid78.joints.append(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint(USE="Joe_vt5")

HAnimHumanoid78.joints.append(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint(USE="Joe_vt4")

HAnimHumanoid78.joints.append(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint(USE="Joe_vt3")

HAnimHumanoid78.joints.append(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint(USE="Joe_vt2")

HAnimHumanoid78.joints.append(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint(USE="Joe_vt1")

HAnimHumanoid78.joints.append(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint(USE="Joe_vc7")

HAnimHumanoid78.joints.append(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint(USE="Joe_vc6")

HAnimHumanoid78.joints.append(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint(USE="Joe_vc5")

HAnimHumanoid78.joints.append(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint(USE="Joe_vc4")

HAnimHumanoid78.joints.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint(USE="Joe_vc3")

HAnimHumanoid78.joints.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint(USE="Joe_vc2")

HAnimHumanoid78.joints.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint(USE="Joe_vc1")

HAnimHumanoid78.joints.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint(USE="Joe_skullbase")

HAnimHumanoid78.joints.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint(USE="Joe_l_acromioclavicular")

HAnimHumanoid78.joints.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint(USE="Joe_r_acromioclavicular")

HAnimHumanoid78.joints.append(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint(USE="Joe_l_carpal_interphalangeal_1")

HAnimHumanoid78.joints.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint(USE="Joe_r_carpal_interphalangeal_1")

HAnimHumanoid78.joints.append(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_1")

HAnimHumanoid78.joints.append(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_1")

HAnimHumanoid78.joints.append(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_2")

HAnimHumanoid78.joints.append(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_2")

HAnimHumanoid78.joints.append(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_3")

HAnimHumanoid78.joints.append(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_3")

HAnimHumanoid78.joints.append(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_4")

HAnimHumanoid78.joints.append(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_4")

HAnimHumanoid78.joints.append(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_5")

HAnimHumanoid78.joints.append(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_5")

HAnimHumanoid78.joints.append(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint(USE="Joe_l_elbow")

HAnimHumanoid78.joints.append(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint(USE="Joe_r_elbow")

HAnimHumanoid78.joints.append(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint(USE="Joe_l_eyeball_joint")

HAnimHumanoid78.joints.append(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint(USE="Joe_r_eyeball_joint")

HAnimHumanoid78.joints.append(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint(USE="Joe_l_hip")

HAnimHumanoid78.joints.append(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint(USE="Joe_r_hip")

HAnimHumanoid78.joints.append(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint(USE="Joe_l_knee")

HAnimHumanoid78.joints.append(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint(USE="Joe_r_knee")

HAnimHumanoid78.joints.append(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_1")

HAnimHumanoid78.joints.append(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_1")

HAnimHumanoid78.joints.append(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_3")

HAnimHumanoid78.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_4")

HAnimHumanoid78.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_5")

HAnimHumanoid78.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint(USE="Joe_l_metatarsal")

HAnimHumanoid78.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint(USE="Joe_l_metatarsophalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint(USE="Joe_r_metatarsophalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint(USE="Joe_l_radiocarpal")

HAnimHumanoid78.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint(USE="Joe_r_radiocarpal")

HAnimHumanoid78.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint(USE="Joe_l_shoulder")

HAnimHumanoid78.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint(USE="Joe_r_shoulder")

HAnimHumanoid78.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint(USE="Joe_l_sternoclavicular")

HAnimHumanoid78.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint(USE="Joe_r_sternoclavicular")

HAnimHumanoid78.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint(USE="Joe_l_talocrural")

HAnimHumanoid78.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint(USE="Joe_r_talocrural")

HAnimHumanoid78.joints.append(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint(USE="Joe_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid78.joints.append(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint(USE="Joe_l_tarsometatarsal_2")

HAnimHumanoid78.joints.append(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint(USE="Joe_r_tarsometatarsal_2")

HAnimHumanoid78.joints.append(HAnimJoint1276)
HAnimSegment1277 = x3d.HAnimSegment(USE="Joe_c1")

HAnimHumanoid78.segments.append(HAnimSegment1277)
HAnimSegment1278 = x3d.HAnimSegment(USE="Joe_c2")

HAnimHumanoid78.segments.append(HAnimSegment1278)
HAnimSegment1279 = x3d.HAnimSegment(USE="Joe_c3")

HAnimHumanoid78.segments.append(HAnimSegment1279)
HAnimSegment1280 = x3d.HAnimSegment(USE="Joe_c4")

HAnimHumanoid78.segments.append(HAnimSegment1280)
HAnimSegment1281 = x3d.HAnimSegment(USE="Joe_c5")

HAnimHumanoid78.segments.append(HAnimSegment1281)
HAnimSegment1282 = x3d.HAnimSegment(USE="Joe_c6")

HAnimHumanoid78.segments.append(HAnimSegment1282)
HAnimSegment1283 = x3d.HAnimSegment(USE="Joe_c7")

HAnimHumanoid78.segments.append(HAnimSegment1283)
HAnimSegment1284 = x3d.HAnimSegment(USE="Joe_l1")

HAnimHumanoid78.segments.append(HAnimSegment1284)
HAnimSegment1285 = x3d.HAnimSegment(USE="Joe_l2")

HAnimHumanoid78.segments.append(HAnimSegment1285)
HAnimSegment1286 = x3d.HAnimSegment(USE="Joe_l3")

HAnimHumanoid78.segments.append(HAnimSegment1286)
HAnimSegment1287 = x3d.HAnimSegment(USE="Joe_l4")

HAnimHumanoid78.segments.append(HAnimSegment1287)
HAnimSegment1288 = x3d.HAnimSegment(USE="Joe_l5")

HAnimHumanoid78.segments.append(HAnimSegment1288)
HAnimSegment1289 = x3d.HAnimSegment(USE="Joe_pelvis")

HAnimHumanoid78.segments.append(HAnimSegment1289)
HAnimSegment1290 = x3d.HAnimSegment(USE="Joe_sacrum")

HAnimHumanoid78.segments.append(HAnimSegment1290)
HAnimSegment1291 = x3d.HAnimSegment(USE="Joe_skull")

HAnimHumanoid78.segments.append(HAnimSegment1291)
HAnimSegment1292 = x3d.HAnimSegment(USE="Joe_t1")

HAnimHumanoid78.segments.append(HAnimSegment1292)
HAnimSegment1293 = x3d.HAnimSegment(USE="Joe_t10")

HAnimHumanoid78.segments.append(HAnimSegment1293)
HAnimSegment1294 = x3d.HAnimSegment(USE="Joe_t11")

HAnimHumanoid78.segments.append(HAnimSegment1294)
HAnimSegment1295 = x3d.HAnimSegment(USE="Joe_t12")

HAnimHumanoid78.segments.append(HAnimSegment1295)
HAnimSegment1296 = x3d.HAnimSegment(USE="Joe_t2")

HAnimHumanoid78.segments.append(HAnimSegment1296)
HAnimSegment1297 = x3d.HAnimSegment(USE="Joe_t3")

HAnimHumanoid78.segments.append(HAnimSegment1297)
HAnimSegment1298 = x3d.HAnimSegment(USE="Joe_t4")

HAnimHumanoid78.segments.append(HAnimSegment1298)
HAnimSegment1299 = x3d.HAnimSegment(USE="Joe_t5")

HAnimHumanoid78.segments.append(HAnimSegment1299)
HAnimSegment1300 = x3d.HAnimSegment(USE="Joe_t6")

HAnimHumanoid78.segments.append(HAnimSegment1300)
HAnimSegment1301 = x3d.HAnimSegment(USE="Joe_t7")

HAnimHumanoid78.segments.append(HAnimSegment1301)
HAnimSegment1302 = x3d.HAnimSegment(USE="Joe_t8")

HAnimHumanoid78.segments.append(HAnimSegment1302)
HAnimSegment1303 = x3d.HAnimSegment(USE="Joe_t9")

HAnimHumanoid78.segments.append(HAnimSegment1303)
HAnimSegment1304 = x3d.HAnimSegment(USE="Joe_toPelvis")

HAnimHumanoid78.segments.append(HAnimSegment1304)
HAnimSegment1305 = x3d.HAnimSegment(USE="Joe_l_calf")

HAnimHumanoid78.segments.append(HAnimSegment1305)
HAnimSegment1306 = x3d.HAnimSegment(USE="Joe_r_calf")

HAnimHumanoid78.segments.append(HAnimSegment1306)
HAnimSegment1307 = x3d.HAnimSegment(USE="Joe_l_carpal")

HAnimHumanoid78.segments.append(HAnimSegment1307)
HAnimSegment1308 = x3d.HAnimSegment(USE="Joe_r_carpal")

HAnimHumanoid78.segments.append(HAnimSegment1308)
HAnimSegment1309 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_1")

HAnimHumanoid78.segments.append(HAnimSegment1309)
HAnimSegment1310 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_1")

HAnimHumanoid78.segments.append(HAnimSegment1310)
HAnimSegment1311 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1311)
HAnimSegment1312 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1312)
HAnimSegment1313 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1313)
HAnimSegment1314 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1314)
HAnimSegment1315 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1315)
HAnimSegment1316 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1316)
HAnimSegment1317 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1317)
HAnimSegment1318 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1318)
HAnimSegment1319 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1319)
HAnimSegment1320 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1320)
HAnimSegment1321 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1321)
HAnimSegment1322 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1322)
HAnimSegment1323 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1323)
HAnimSegment1324 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1324)
HAnimSegment1325 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1325)
HAnimSegment1326 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1326)
HAnimSegment1327 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_1")

HAnimHumanoid78.segments.append(HAnimSegment1327)
HAnimSegment1328 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_1")

HAnimHumanoid78.segments.append(HAnimSegment1328)
HAnimSegment1329 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1329)
HAnimSegment1330 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1330)
HAnimSegment1331 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1331)
HAnimSegment1332 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_3")

HAnimHumanoid78.segments.append(HAnimSegment1332)
HAnimSegment1333 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1333)
HAnimSegment1334 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_4")

HAnimHumanoid78.segments.append(HAnimSegment1334)
HAnimSegment1335 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1335)
HAnimSegment1336 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_5")

HAnimHumanoid78.segments.append(HAnimSegment1336)
HAnimSegment1337 = x3d.HAnimSegment(USE="Joe_l_clavicle")

HAnimHumanoid78.segments.append(HAnimSegment1337)
HAnimSegment1338 = x3d.HAnimSegment(USE="Joe_r_clavicle")

HAnimHumanoid78.segments.append(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment(USE="Joe_l_eyeball")

HAnimHumanoid78.segments.append(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment(USE="Joe_r_eyeball")

HAnimHumanoid78.segments.append(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment(USE="Joe_l_forearm")

HAnimHumanoid78.segments.append(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment(USE="Joe_r_forearm")

HAnimHumanoid78.segments.append(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment(USE="Joe_l_metacarpal_1")

HAnimHumanoid78.segments.append(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment(USE="Joe_r_metacarpal_1")

HAnimHumanoid78.segments.append(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment(USE="Joe_l_metacarpal_2")

HAnimHumanoid78.segments.append(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment(USE="Joe_r_metacarpal_2")

HAnimHumanoid78.segments.append(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment(USE="Joe_l_metacarpal_3")

HAnimHumanoid78.segments.append(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment(USE="Joe_r_metacarpal_3")

HAnimHumanoid78.segments.append(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment(USE="Joe_l_metacarpal_4")

HAnimHumanoid78.segments.append(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment(USE="Joe_r_metacarpal_4")

HAnimHumanoid78.segments.append(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment(USE="Joe_l_metacarpal_5")

HAnimHumanoid78.segments.append(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment(USE="Joe_r_metacarpal_5")

HAnimHumanoid78.segments.append(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment(USE="Joe_l_metatarsal_2")

HAnimHumanoid78.segments.append(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment(USE="Joe_r_metatarsal_2")

HAnimHumanoid78.segments.append(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment(USE="Joe_l_scapula")

HAnimHumanoid78.segments.append(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment(USE="Joe_r_scapula")

HAnimHumanoid78.segments.append(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment(USE="Joe_l_talus")

HAnimHumanoid78.segments.append(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment(USE="Joe_r_talus")

HAnimHumanoid78.segments.append(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment(USE="Joe_l_tarsal_distal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment(USE="Joe_r_tarsal_distal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment(USE="Joe_l_tarsal_proximal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment(USE="Joe_r_tarsal_proximal_phalanx_2")

HAnimHumanoid78.segments.append(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment(USE="Joe_l_thigh")

HAnimHumanoid78.segments.append(HAnimSegment1363)
HAnimSegment1364 = x3d.HAnimSegment(USE="Joe_r_thigh")

HAnimHumanoid78.segments.append(HAnimSegment1364)
HAnimSegment1365 = x3d.HAnimSegment(USE="Joe_l_upperarm")

HAnimHumanoid78.segments.append(HAnimSegment1365)
HAnimSegment1366 = x3d.HAnimSegment(USE="Joe_r_upperarm")

HAnimHumanoid78.segments.append(HAnimSegment1366)
HAnimSite1367 = x3d.HAnimSite(USE="Joe_cervicale_pt")

HAnimHumanoid78.sites.append(HAnimSite1367)
HAnimSite1368 = x3d.HAnimSite(USE="Joe_crotch_pt")

HAnimHumanoid78.sites.append(HAnimSite1368)
HAnimSite1369 = x3d.HAnimSite(USE="Joe_floormarker_pt")

HAnimHumanoid78.sites.append(HAnimSite1369)
HAnimSite1370 = x3d.HAnimSite(USE="Joe_navel_pt")

HAnimHumanoid78.sites.append(HAnimSite1370)
HAnimSite1371 = x3d.HAnimSite(USE="Joe_nuchale_pt")

HAnimHumanoid78.sites.append(HAnimSite1371)
HAnimSite1372 = x3d.HAnimSite(USE="Joe_rib10_midspine_pt")

HAnimHumanoid78.sites.append(HAnimSite1372)
HAnimSite1373 = x3d.HAnimSite(USE="Joe_sellion_pt")

HAnimHumanoid78.sites.append(HAnimSite1373)
HAnimSite1374 = x3d.HAnimSite(USE="Joe_skull_vertex_tip")

HAnimHumanoid78.sites.append(HAnimSite1374)
HAnimSite1375 = x3d.HAnimSite(USE="Joe_substernale_pt")

HAnimHumanoid78.sites.append(HAnimSite1375)
HAnimSite1376 = x3d.HAnimSite(USE="Joe_supramenton_pt")

HAnimHumanoid78.sites.append(HAnimSite1376)
HAnimSite1377 = x3d.HAnimSite(USE="Joe_suprasternale_pt")

HAnimHumanoid78.sites.append(HAnimSite1377)
HAnimSite1378 = x3d.HAnimSite(USE="Joe_waist_preferred_posterior_pt")

HAnimHumanoid78.sites.append(HAnimSite1378)
HAnimSite1379 = x3d.HAnimSite(USE="Joe_l_acromion_pt")

HAnimHumanoid78.sites.append(HAnimSite1379)
HAnimSite1380 = x3d.HAnimSite(USE="Joe_r_acromion_pt")

HAnimHumanoid78.sites.append(HAnimSite1380)
HAnimSite1381 = x3d.HAnimSite(USE="Joe_l_asis_pt")

HAnimHumanoid78.sites.append(HAnimSite1381)
HAnimSite1382 = x3d.HAnimSite(USE="Joe_r_asis_pt")

HAnimHumanoid78.sites.append(HAnimSite1382)
HAnimSite1383 = x3d.HAnimSite(USE="Joe_l_axilla_distal_pt")

HAnimHumanoid78.sites.append(HAnimSite1383)
HAnimSite1384 = x3d.HAnimSite(USE="Joe_r_axilla_distal_pt")

HAnimHumanoid78.sites.append(HAnimSite1384)
HAnimSite1385 = x3d.HAnimSite(USE="Joe_l_axilla_proximal_pt")

HAnimHumanoid78.sites.append(HAnimSite1385)
HAnimSite1386 = x3d.HAnimSite(USE="Joe_r_axilla_proximal_pt")

HAnimHumanoid78.sites.append(HAnimSite1386)
HAnimSite1387 = x3d.HAnimSite(USE="Joe_l_calcaneus_posterior_pt")

HAnimHumanoid78.sites.append(HAnimSite1387)
HAnimSite1388 = x3d.HAnimSite(USE="Joe_r_calcaneus_posterior_pt")

HAnimHumanoid78.sites.append(HAnimSite1388)
HAnimSite1389 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid78.sites.append(HAnimSite1389)
HAnimSite1390 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid78.sites.append(HAnimSite1390)
HAnimSite1391 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid78.sites.append(HAnimSite1391)
HAnimSite1392 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid78.sites.append(HAnimSite1392)
HAnimSite1393 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid78.sites.append(HAnimSite1393)
HAnimSite1394 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid78.sites.append(HAnimSite1394)
HAnimSite1395 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid78.sites.append(HAnimSite1395)
HAnimSite1396 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid78.sites.append(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid78.sites.append(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid78.sites.append(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite(USE="Joe_l_clavicle_pt")

HAnimHumanoid78.sites.append(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite(USE="Joe_r_clavicle_pt")

HAnimHumanoid78.sites.append(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite(USE="Joe_l_dactylion_pt")

HAnimHumanoid78.sites.append(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite(USE="Joe_r_dactylion_pt")

HAnimHumanoid78.sites.append(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite(USE="Joe_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite(USE="Joe_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite(USE="Joe_l_femoral_medial_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite(USE="Joe_r_femoral_medial_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite(USE="Joe_l_gonion_pt")

HAnimHumanoid78.sites.append(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite(USE="Joe_r_gonion_pt")

HAnimHumanoid78.sites.append(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite(USE="Joe_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite(USE="Joe_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite(USE="Joe_l_humeral_medial_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite(USE="Joe_r_humeral_medial_epicondyle_pt")

HAnimHumanoid78.sites.append(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite(USE="Joe_l_iliocristale_pt")

HAnimHumanoid78.sites.append(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite(USE="Joe_r_iliocristale_pt")

HAnimHumanoid78.sites.append(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite(USE="Joe_l_infraorbitale_pt")

HAnimHumanoid78.sites.append(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite(USE="Joe_r_infraorbitale_pt")

HAnimHumanoid78.sites.append(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite(USE="Joe_l_knee_crease_pt")

HAnimHumanoid78.sites.append(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite(USE="Joe_r_knee_crease_pt")

HAnimHumanoid78.sites.append(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite(USE="Joe_l_lateral_malleolus_pt")

HAnimHumanoid78.sites.append(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite(USE="Joe_r_lateral_malleolus_pt")

HAnimHumanoid78.sites.append(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite(USE="Joe_l_medial_malleolus_pt")

HAnimHumanoid78.sites.append(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite(USE="Joe_r_medial_malleolus_pt")

HAnimHumanoid78.sites.append(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite(USE="Joe_l_metacarpal_phalanx_2_pt")

HAnimHumanoid78.sites.append(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite(USE="Joe_r_metacarpal_phalanx_2_pt")

HAnimHumanoid78.sites.append(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite(USE="Joe_l_metacarpal_phalanx_5_pt")

HAnimHumanoid78.sites.append(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite(USE="Joe_r_metacarpal_phalanx_5_pt")

HAnimHumanoid78.sites.append(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite(USE="Joe_l_metatarsal_phalanx_1_pt")

HAnimHumanoid78.sites.append(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite(USE="Joe_r_metatarsal_phalanx_1_pt")

HAnimHumanoid78.sites.append(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite(USE="Joe_l_metatarsal_phalanx_5_pt")

HAnimHumanoid78.sites.append(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite(USE="Joe_r_metatarsal_phalanx_5_pt")

HAnimHumanoid78.sites.append(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite(USE="Joe_l_neck_base_pt")

HAnimHumanoid78.sites.append(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite(USE="Joe_r_neck_base_pt")

HAnimHumanoid78.sites.append(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite(USE="Joe_l_olecranon_pt")

HAnimHumanoid78.sites.append(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite(USE="Joe_r_olecranon_pt")

HAnimHumanoid78.sites.append(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite(USE="Joe_l_psis_pt")

HAnimHumanoid78.sites.append(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite(USE="Joe_r_psis_pt")

HAnimHumanoid78.sites.append(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite(USE="Joe_l_radial_styloid_pt")

HAnimHumanoid78.sites.append(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite(USE="Joe_r_radial_styloid_pt")

HAnimHumanoid78.sites.append(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite(USE="Joe_l_radiale_pt")

HAnimHumanoid78.sites.append(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite(USE="Joe_r_radiale_pt")

HAnimHumanoid78.sites.append(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite(USE="Joe_l_rib10_pt")

HAnimHumanoid78.sites.append(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite(USE="Joe_r_rib10_pt")

HAnimHumanoid78.sites.append(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite(USE="Joe_l_sphyrion_pt")

HAnimHumanoid78.sites.append(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite(USE="Joe_r_sphyrion_pt")

HAnimHumanoid78.sites.append(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite(USE="Joe_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid78.sites.append(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite(USE="Joe_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid78.sites.append(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite(USE="Joe_l_thelion_pt")

HAnimHumanoid78.sites.append(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite(USE="Joe_r_thelion_pt")

HAnimHumanoid78.sites.append(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite(USE="Joe_l_tragion_pt")

HAnimHumanoid78.sites.append(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite(USE="Joe_r_tragion_pt")

HAnimHumanoid78.sites.append(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite(USE="Joe_l_trochanterion_pt")

HAnimHumanoid78.sites.append(HAnimSite1451)
HAnimSite1452 = x3d.HAnimSite(USE="Joe_r_trochanterion_pt")

HAnimHumanoid78.sites.append(HAnimSite1452)
HAnimSite1453 = x3d.HAnimSite(USE="Joe_l_ulnar_styloid_pt")

HAnimHumanoid78.sites.append(HAnimSite1453)
HAnimSite1454 = x3d.HAnimSite(USE="Joe_r_ulnar_styloid_pt")

HAnimHumanoid78.sites.append(HAnimSite1454)

Group77.children.append(HAnimHumanoid78)

Group76.children.append(Group77)

Scene33.children.append(Group76)
TimeSensor1455 = x3d.TimeSensor(DEF="Time1")
TimeSensor1455.cycleInterval = 2.86
TimeSensor1455.loop = True

Scene33.children.append(TimeSensor1455)
TimeSensor1456 = x3d.TimeSensor(DEF="Time2")
TimeSensor1456.cycleInterval = 5.72
TimeSensor1456.loop = True

Scene33.children.append(TimeSensor1456)
TimeSensor1457 = x3d.TimeSensor(DEF="Time3")
TimeSensor1457.cycleInterval = 5.8
TimeSensor1457.loop = True

Scene33.children.append(TimeSensor1457)
OrientationInterpolator1458 = x3d.OrientationInterpolator(DEF="Pitch")
OrientationInterpolator1458.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1458.keyValue = [(1, 0, 0, 0),(1, 0, 0, 1.256),(1, 0, 0, 2.512),(1, 0, 0, 3.768),(1, 0, 0, 5.024),(1, 0, 0, 6.28)]

Scene33.children.append(OrientationInterpolator1458)
OrientationInterpolator1459 = x3d.OrientationInterpolator(DEF="Yaw")
OrientationInterpolator1459.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1459.keyValue = [(0, 1, 0, 0),(0, 1, 0, 1.256),(0, 1, 0, 2.512),(0, 1, 0, 3.768),(0, 1, 0, 5.024),(0, 1, 0, 6.28)]

Scene33.children.append(OrientationInterpolator1459)
OrientationInterpolator1460 = x3d.OrientationInterpolator(DEF="Roll")
OrientationInterpolator1460.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1460.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.256),(0, 0, 1, 2.512),(0, 0, 1, 3.768),(0, 0, 1, 5.024),(0, 0, 1, 6.28)]

Scene33.children.append(OrientationInterpolator1460)
OrientationInterpolator1461 = x3d.OrientationInterpolator(DEF="vc6Yaw")
OrientationInterpolator1461.key = [0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1461.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0.7),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0.5),(-0.4, -1, 0, 0.7),(-0.4, -1, 0, 0.4),(0, 1, 0, 0),(0, 1, 0, 0)]

Scene33.children.append(OrientationInterpolator1461)
ROUTE1462 = x3d.ROUTE()
ROUTE1462.fromField = "fraction_changed"
ROUTE1462.fromNode = "Time2"
ROUTE1462.toField = "set_fraction"
ROUTE1462.toNode = "vc6Yaw"

Scene33.children.append(ROUTE1462)
ROUTE1463 = x3d.ROUTE()
ROUTE1463.fromField = "value_changed"
ROUTE1463.fromNode = "vc6Yaw"
ROUTE1463.toField = "set_rotation"
ROUTE1463.toNode = "Joe_vc6"

Scene33.children.append(ROUTE1463)
OrientationInterpolator1464 = x3d.OrientationInterpolator(DEF="EyeballsRotation")
OrientationInterpolator1464.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1464.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.2, 0.2, 0.2, 0.2),(-0.2, 0.2, 0.2, 0.2),(-0.2, -0.2, 0.2, 0.2),(0.2, -0.2, 0.2, 0.2),(-0.2, 0.2, -0.2, 0.2),(-0.2, 0.2, -0.2, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1464)
ROUTE1465 = x3d.ROUTE()
ROUTE1465.fromField = "fraction_changed"
ROUTE1465.fromNode = "Time3"
ROUTE1465.toField = "set_fraction"
ROUTE1465.toNode = "EyeballsRotation"

Scene33.children.append(ROUTE1465)
ROUTE1466 = x3d.ROUTE()
ROUTE1466.fromField = "value_changed"
ROUTE1466.fromNode = "EyeballsRotation"
ROUTE1466.toField = "set_rotation"
ROUTE1466.toNode = "Joe_r_eyeball_joint"

Scene33.children.append(ROUTE1466)
ROUTE1467 = x3d.ROUTE()
ROUTE1467.fromField = "value_changed"
ROUTE1467.fromNode = "EyeballsRotation"
ROUTE1467.toField = "set_rotation"
ROUTE1467.toNode = "Joe_l_eyeball_joint"

Scene33.children.append(ROUTE1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator(DEF="r_sternoclavicularRelax")
OrientationInterpolator1468.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1468.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.2, -1, 0, 0.11),(0.2, -1, 0, 0.11),(0.1, -1, 0, 0.1),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1468)
OrientationInterpolator1469 = x3d.OrientationInterpolator(DEF="r_acromioclavicularRelax")
OrientationInterpolator1469.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1469.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1469)
OrientationInterpolator1470 = x3d.OrientationInterpolator(DEF="r_shoulderRelax")
OrientationInterpolator1470.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1470.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.4, -0.7, -0.55, 0.35),(0.4, -0.7, -0.55, 0.35),(0.4, -0.7, -0.55, 0.35),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1470)
OrientationInterpolator1471 = x3d.OrientationInterpolator(DEF="r_elbowRelax")
OrientationInterpolator1471.key = [0,0.15,0.4,0.6,0.9,1]
OrientationInterpolator1471.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.2, 0, 0.01, 0.5),(-0.2, 0, 0.01, 0.5),(-0.2, 0, 0.01, 0.5),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1471)
OrientationInterpolator1472 = x3d.OrientationInterpolator(DEF="r_wristRelax")
OrientationInterpolator1472.key = [0,0.2,0.4,0.6,0.9,1]
OrientationInterpolator1472.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0.1, -0.09, 0.25),(0, 0.1, -0.09, 0.25),(0, 0.1, -0.09, 0.25),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1472)
OrientationInterpolator1473 = x3d.OrientationInterpolator(DEF="r_index0Relax")
OrientationInterpolator1473.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1473.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.25, 0.25, -1, 0.125),(-0.25, 0.25, -1, 0.125),(-0.25, 0.25, -1, 0.125),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator(DEF="r_index1Relax")
OrientationInterpolator1474.key = [0,0.1,0.2,0.6,0.8,1]
OrientationInterpolator1474.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.135, -0.135, 1, 0.357),(-0.159, -0.153, 1, 0.355),(-0.159, -0.153, 1, 0.357),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1474)
OrientationInterpolator1475 = x3d.OrientationInterpolator(DEF="r_middle0Relax")
OrientationInterpolator1475.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1475.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, -1, 0.14),(0, 0, -1, 0.14),(0, 0, -1, 0.14),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1475)
OrientationInterpolator1476 = x3d.OrientationInterpolator(DEF="r_middle1Relax")
OrientationInterpolator1476.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1476.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 0.3, 0.257),(0, 0, 0.3, 0.37),(0, 0, 0.3, 0.39),(0, 0, 0.3, 0.31),(0, 0, 0.3, 0.32),(0, 0, 0.3, 0.34),(0, 0, 0.3, 0.28),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1476)
OrientationInterpolator1477 = x3d.OrientationInterpolator(DEF="r_ring0Relax")
OrientationInterpolator1477.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1477.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.25, 0.25, -1, 0.1),(0.25, 0.25, -1, 0.1),(0.25, 0.25, -1, 0.1),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1477)
OrientationInterpolator1478 = x3d.OrientationInterpolator(DEF="r_ring1Relax")
OrientationInterpolator1478.key = [0,0.1,0.4,0.5,0.8,1]
OrientationInterpolator1478.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.135, 0.135, 1, 0.27),(0.135, 0.135, 1, 0.27),(0.135, 0.15, 1, 0.27),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1478)
OrientationInterpolator1479 = x3d.OrientationInterpolator(DEF="r_pinky0Relax")
OrientationInterpolator1479.key = [0,0.1,0.3,0.5,0.8,1]
OrientationInterpolator1479.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.35, 0.35, -0.7, 0.12),(0.35, 0.35, -0.9, 0.12),(0.35, 0.35, -0.7, 0.12),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator(DEF="r_pinky1Relax")
OrientationInterpolator1480.key = [0,0.1,0.4,0.6,0.8,1]
OrientationInterpolator1480.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.2, 0.25, 1, 0.27),(0.2, 0.22, 1, 0.27),(0.22, 0.2, 1, 0.27),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1480)
OrientationInterpolator1481 = x3d.OrientationInterpolator(DEF="r_thumb1Relax")
OrientationInterpolator1481.key = [0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]
OrientationInterpolator1481.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, -1, 1, 1),(0.5, -0.16, 0.16, 0.785),(0.5, -0.16, 0.16, 0.785),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1481)
OrientationInterpolator1482 = x3d.OrientationInterpolator(DEF="r_thumb2Relax")
OrientationInterpolator1482.key = [0,0.2,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1482.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.45),(1, 0, 0, 0.45),(1, 0, 0, 0.45),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1482)
OrientationInterpolator1483 = x3d.OrientationInterpolator(DEF="r_thumb3Relax")
OrientationInterpolator1483.key = [0,0.2,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1483.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.45),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1483)
OrientationInterpolator1484 = x3d.OrientationInterpolator(DEF="r_fingers2Relax")
OrientationInterpolator1484.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1484.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.43),(0, 0, 1, 0.44),(0, 0, 1, 0.46),(0, 0, 1, 0.44),(0, 0, 1, 0.245),(0, 0, 1, 0.24),(0, 0, 1, 0.21),(0, 0, 1, 0.24),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1484)
OrientationInterpolator1485 = x3d.OrientationInterpolator(DEF="r_fingers3Relax")
OrientationInterpolator1485.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1485.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.37),(0, 0, 1, 0.38),(0, 0, 1, 0.39),(0, 0, 1, 0.38),(0, 0, 1, 0.27),(0, 0, 1, 0.28),(0, 0, 1, 0.27),(0, 0, 1, 0.28),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1485)
ROUTE1486 = x3d.ROUTE()
ROUTE1486.fromField = "value_changed"
ROUTE1486.fromNode = "r_sternoclavicularRelax"
ROUTE1486.toField = "set_rotation"
ROUTE1486.toNode = "Joe_r_sternoclavicular"

Scene33.children.append(ROUTE1486)
ROUTE1487 = x3d.ROUTE()
ROUTE1487.fromField = "value_changed"
ROUTE1487.fromNode = "r_acromioclavicularRelax"
ROUTE1487.toField = "set_rotation"
ROUTE1487.toNode = "Joe_r_acromioclavicular"

Scene33.children.append(ROUTE1487)
ROUTE1488 = x3d.ROUTE()
ROUTE1488.fromField = "value_changed"
ROUTE1488.fromNode = "r_shoulderRelax"
ROUTE1488.toField = "set_rotation"
ROUTE1488.toNode = "Joe_r_shoulder"

Scene33.children.append(ROUTE1488)
ROUTE1489 = x3d.ROUTE()
ROUTE1489.fromField = "value_changed"
ROUTE1489.fromNode = "r_elbowRelax"
ROUTE1489.toField = "set_rotation"
ROUTE1489.toNode = "Joe_r_elbow"

Scene33.children.append(ROUTE1489)
ROUTE1490 = x3d.ROUTE()
ROUTE1490.fromField = "value_changed"
ROUTE1490.fromNode = "r_wristRelax"
ROUTE1490.toField = "set_rotation"
ROUTE1490.toNode = "Joe_r_radiocarpal"

Scene33.children.append(ROUTE1490)
ROUTE1491 = x3d.ROUTE()
ROUTE1491.fromField = "value_changed"
ROUTE1491.fromNode = "r_thumb1Relax"
ROUTE1491.toField = "set_rotation"
ROUTE1491.toNode = "Joe_r_carpometacarpal_1"

Scene33.children.append(ROUTE1491)
ROUTE1492 = x3d.ROUTE()
ROUTE1492.fromField = "value_changed"
ROUTE1492.fromNode = "r_thumb2Relax"
ROUTE1492.toField = "set_rotation"
ROUTE1492.toNode = "Joe_r_metacarpophalangeal_1"

Scene33.children.append(ROUTE1492)
ROUTE1493 = x3d.ROUTE()
ROUTE1493.fromField = "value_changed"
ROUTE1493.fromNode = "r_thumb3Relax"
ROUTE1493.toField = "set_rotation"
ROUTE1493.toNode = "Joe_r_carpal_interphalangeal_1"

Scene33.children.append(ROUTE1493)
ROUTE1494 = x3d.ROUTE()
ROUTE1494.fromField = "value_changed"
ROUTE1494.fromNode = "r_index0Relax"
ROUTE1494.toField = "set_rotation"
ROUTE1494.toNode = "Joe_r_carpometacarpal_2"

Scene33.children.append(ROUTE1494)
ROUTE1495 = x3d.ROUTE()
ROUTE1495.fromField = "value_changed"
ROUTE1495.fromNode = "r_index1Relax"
ROUTE1495.toField = "set_rotation"
ROUTE1495.toNode = "Joe_r_metacarpophalangeal_2"

Scene33.children.append(ROUTE1495)
ROUTE1496 = x3d.ROUTE()
ROUTE1496.fromField = "value_changed"
ROUTE1496.fromNode = "r_fingers2Relax"
ROUTE1496.toField = "set_rotation"
ROUTE1496.toNode = "Joe_r_carpal_proximal_interphalangeal_2"

Scene33.children.append(ROUTE1496)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromField = "value_changed"
ROUTE1497.fromNode = "r_fingers3Relax"
ROUTE1497.toField = "set_rotation"
ROUTE1497.toNode = "Joe_r_carpal_distal_interphalangeal_2"

Scene33.children.append(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.fromField = "value_changed"
ROUTE1498.fromNode = "r_middle0Relax"
ROUTE1498.toField = "set_rotation"
ROUTE1498.toNode = "Joe_r_carpometacarpal_3"

Scene33.children.append(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.fromField = "value_changed"
ROUTE1499.fromNode = "r_middle1Relax"
ROUTE1499.toField = "set_rotation"
ROUTE1499.toNode = "Joe_r_metacarpophalangeal_3"

Scene33.children.append(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.fromField = "value_changed"
ROUTE1500.fromNode = "r_fingers2Relax"
ROUTE1500.toField = "set_rotation"
ROUTE1500.toNode = "Joe_r_carpal_proximal_interphalangeal_3"

Scene33.children.append(ROUTE1500)
ROUTE1501 = x3d.ROUTE()
ROUTE1501.fromField = "value_changed"
ROUTE1501.fromNode = "r_fingers3Relax"
ROUTE1501.toField = "set_rotation"
ROUTE1501.toNode = "Joe_r_carpal_distal_interphalangeal_3"

Scene33.children.append(ROUTE1501)
ROUTE1502 = x3d.ROUTE()
ROUTE1502.fromField = "value_changed"
ROUTE1502.fromNode = "r_ring0Relax"
ROUTE1502.toField = "set_rotation"
ROUTE1502.toNode = "Joe_r_carpometacarpal_4"

Scene33.children.append(ROUTE1502)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.fromField = "value_changed"
ROUTE1503.fromNode = "r_ring1Relax"
ROUTE1503.toField = "set_rotation"
ROUTE1503.toNode = "Joe_r_metacarpophalangeal_4"

Scene33.children.append(ROUTE1503)
ROUTE1504 = x3d.ROUTE()
ROUTE1504.fromField = "value_changed"
ROUTE1504.fromNode = "r_fingers2Relax"
ROUTE1504.toField = "set_rotation"
ROUTE1504.toNode = "Joe_r_carpal_proximal_interphalangeal_4"

Scene33.children.append(ROUTE1504)
ROUTE1505 = x3d.ROUTE()
ROUTE1505.fromField = "value_changed"
ROUTE1505.fromNode = "r_fingers3Relax"
ROUTE1505.toField = "set_rotation"
ROUTE1505.toNode = "Joe_r_carpal_distal_interphalangeal_4"

Scene33.children.append(ROUTE1505)
ROUTE1506 = x3d.ROUTE()
ROUTE1506.fromField = "value_changed"
ROUTE1506.fromNode = "r_pinky0Relax"
ROUTE1506.toField = "set_rotation"
ROUTE1506.toNode = "Joe_r_carpometacarpal_5"

Scene33.children.append(ROUTE1506)
ROUTE1507 = x3d.ROUTE()
ROUTE1507.fromField = "value_changed"
ROUTE1507.fromNode = "r_pinky1Relax"
ROUTE1507.toField = "set_rotation"
ROUTE1507.toNode = "Joe_r_metacarpophalangeal_5"

Scene33.children.append(ROUTE1507)
ROUTE1508 = x3d.ROUTE()
ROUTE1508.fromField = "value_changed"
ROUTE1508.fromNode = "r_fingers2Relax"
ROUTE1508.toField = "set_rotation"
ROUTE1508.toNode = "Joe_r_carpal_proximal_interphalangeal_5"

Scene33.children.append(ROUTE1508)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromField = "value_changed"
ROUTE1509.fromNode = "r_fingers3Relax"
ROUTE1509.toField = "set_rotation"
ROUTE1509.toNode = "Joe_r_carpal_distal_interphalangeal_5"

Scene33.children.append(ROUTE1509)
OrientationInterpolator1510 = x3d.OrientationInterpolator(DEF="r_sternoclavicularRoll")
OrientationInterpolator1510.key = [0,0.2,0.4,0.5,0.7,0.8,1]
OrientationInterpolator1510.keyValue = [(0, 0, 1, 0),(0, 0, -1, 0.1),(0, 0, -1, 0.22),(0, 0.5, -1, 0.27),(0, 0, -1, 0.1),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1510)
OrientationInterpolator1511 = x3d.OrientationInterpolator(DEF="r_acromioclavicularRoll")
OrientationInterpolator1511.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1511.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1511)
OrientationInterpolator1512 = x3d.OrientationInterpolator(DEF="r_shoulderRoll")
OrientationInterpolator1512.key = [0,0.2,0.4,0.5,0.85,1]
OrientationInterpolator1512.keyValue = [(1, 0, 0, 0),(0, 0, -1, 1.66),(-0.25, 0, -1, 1.76),(0, 0, -1, 1.256),(0, 0, -1, 0.05),(1, 0, 0, 0)]

Scene33.children.append(OrientationInterpolator1512)
OrientationInterpolator1513 = x3d.OrientationInterpolator(DEF="r_ForeArmPitch")
OrientationInterpolator1513.key = [0,0.15,0.3,0.5,0.7,0.9,1]
OrientationInterpolator1513.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.55),(-1, -0.25, 0, 2.55),(-1, -0.25, 0, 2.55),(-1, -0.25, 0, 2.55),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1513)
OrientationInterpolator1514 = x3d.OrientationInterpolator(DEF="r_wristRoll")
OrientationInterpolator1514.key = [0,0.2,0.4,0.6,0.65,0.75,0.85,1]
OrientationInterpolator1514.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, -0.55),(0, 0, 1, 0),(0, 1, 0, 1.55),(0, 0, -1, 1.55),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1514)
OrientationInterpolator1515 = x3d.OrientationInterpolator(DEF="r_handPitch")
OrientationInterpolator1515.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1515.keyValue = [(0, 0, 1, 0),(0, 0, 0.01, 0.25),(0, 0, -0.01, 0.03),(0, 0, 0.01, 0.05),(0, 0, 0.01, 0.01),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1515)
OrientationInterpolator1516 = x3d.OrientationInterpolator(DEF="r_thumb1Pitch")
OrientationInterpolator1516.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1516.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1),(1, 0, 0, 0.4),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Scene33.children.append(OrientationInterpolator1516)
OrientationInterpolator1517 = x3d.OrientationInterpolator(DEF="r_thumb2Pitch")
OrientationInterpolator1517.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1517.keyValue = [(0, 0, 1, 0),(1, 1, 0, 0.3),(1, 1, 0, 0.3),(1, 1, 0, 0.6),(1, 1, 0, 0.3),(0, 1, 1, 0)]

Scene33.children.append(OrientationInterpolator1517)
OrientationInterpolator1518 = x3d.OrientationInterpolator(DEF="l_shoulderRoll")
OrientationInterpolator1518.key = [0,0.2,0.4,0.5,0.85,1]
OrientationInterpolator1518.keyValue = [(0.25, 0, 1, 1.76),(0, 0, 1, 1.66),(0.25, 0, 1, 1.76),(0, 0, 1, 1.256),(0, 0, 1, 0.05),(0.25, 0, 1, 1.76)]

Scene33.children.append(OrientationInterpolator1518)
ROUTE1519 = x3d.ROUTE()
ROUTE1519.fromField = "fraction_changed"
ROUTE1519.fromNode = "Time2"
ROUTE1519.toField = "set_fraction"
ROUTE1519.toNode = "r_sternoclavicularRoll"

Scene33.children.append(ROUTE1519)
ROUTE1520 = x3d.ROUTE()
ROUTE1520.fromField = "fraction_changed"
ROUTE1520.fromNode = "Time2"
ROUTE1520.toField = "set_fraction"
ROUTE1520.toNode = "r_acromioclavicularRoll"

Scene33.children.append(ROUTE1520)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromField = "fraction_changed"
ROUTE1521.fromNode = "Time2"
ROUTE1521.toField = "set_fraction"
ROUTE1521.toNode = "r_shoulderRoll"

Scene33.children.append(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.fromField = "fraction_changed"
ROUTE1522.fromNode = "Time2"
ROUTE1522.toField = "set_fraction"
ROUTE1522.toNode = "r_ForeArmPitch"

Scene33.children.append(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.fromField = "fraction_changed"
ROUTE1523.fromNode = "Time2"
ROUTE1523.toField = "set_fraction"
ROUTE1523.toNode = "r_wristRoll"

Scene33.children.append(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.fromField = "fraction_changed"
ROUTE1524.fromNode = "Time2"
ROUTE1524.toField = "set_fraction"
ROUTE1524.toNode = "r_handPitch"

Scene33.children.append(ROUTE1524)
ROUTE1525 = x3d.ROUTE()
ROUTE1525.fromField = "fraction_changed"
ROUTE1525.fromNode = "Time2"
ROUTE1525.toField = "set_fraction"
ROUTE1525.toNode = "r_thumb1Pitch"

Scene33.children.append(ROUTE1525)
ROUTE1526 = x3d.ROUTE()
ROUTE1526.fromField = "fraction_changed"
ROUTE1526.fromNode = "Time2"
ROUTE1526.toField = "set_fraction"
ROUTE1526.toNode = "r_thumb2Pitch"

Scene33.children.append(ROUTE1526)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.fromField = "value_changed"
ROUTE1527.fromNode = "r_sternoclavicularRoll"
ROUTE1527.toField = "set_rotation"
ROUTE1527.toNode = "Joe_r_sternoclavicular"

Scene33.children.append(ROUTE1527)
ROUTE1528 = x3d.ROUTE()
ROUTE1528.fromField = "value_changed"
ROUTE1528.fromNode = "r_acromioclavicularRoll"
ROUTE1528.toField = "set_rotation"
ROUTE1528.toNode = "Joe_r_acromioclavicular"

Scene33.children.append(ROUTE1528)
ROUTE1529 = x3d.ROUTE()
ROUTE1529.fromField = "value_changed"
ROUTE1529.fromNode = "r_shoulderRoll"
ROUTE1529.toField = "set_rotation"
ROUTE1529.toNode = "Joe_r_shoulder"

Scene33.children.append(ROUTE1529)
ROUTE1530 = x3d.ROUTE()
ROUTE1530.fromField = "value_changed"
ROUTE1530.fromNode = "r_ForeArmPitch"
ROUTE1530.toField = "set_rotation"
ROUTE1530.toNode = "Joe_r_elbow"

Scene33.children.append(ROUTE1530)
ROUTE1531 = x3d.ROUTE()
ROUTE1531.fromField = "value_changed"
ROUTE1531.fromNode = "r_wristRoll"
ROUTE1531.toField = "set_rotation"
ROUTE1531.toNode = "Joe_r_radiocarpal"

Scene33.children.append(ROUTE1531)
ROUTE1532 = x3d.ROUTE()
ROUTE1532.fromField = "value_changed"
ROUTE1532.fromNode = "r_handPitch"
ROUTE1532.toField = "set_rotation"
ROUTE1532.toNode = "Joe_r_carpometacarpal_2"

Scene33.children.append(ROUTE1532)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromField = "value_changed"
ROUTE1533.fromNode = "r_handPitch"
ROUTE1533.toField = "set_rotation"
ROUTE1533.toNode = "Joe_r_metacarpophalangeal_2"

Scene33.children.append(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.fromField = "value_changed"
ROUTE1534.fromNode = "r_handPitch"
ROUTE1534.toField = "set_rotation"
ROUTE1534.toNode = "Joe_r_carpal_proximal_interphalangeal_2"

Scene33.children.append(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.fromField = "value_changed"
ROUTE1535.fromNode = "r_handPitch"
ROUTE1535.toField = "set_rotation"
ROUTE1535.toNode = "Joe_r_carpal_distal_interphalangeal_2"

Scene33.children.append(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.fromField = "value_changed"
ROUTE1536.fromNode = "r_handPitch"
ROUTE1536.toField = "set_rotation"
ROUTE1536.toNode = "Joe_r_carpometacarpal_3"

Scene33.children.append(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.fromField = "value_changed"
ROUTE1537.fromNode = "r_handPitch"
ROUTE1537.toField = "set_rotation"
ROUTE1537.toNode = "Joe_r_metacarpophalangeal_3"

Scene33.children.append(ROUTE1537)
ROUTE1538 = x3d.ROUTE()
ROUTE1538.fromField = "value_changed"
ROUTE1538.fromNode = "r_handPitch"
ROUTE1538.toField = "set_rotation"
ROUTE1538.toNode = "Joe_r_carpal_proximal_interphalangeal_3"

Scene33.children.append(ROUTE1538)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.fromField = "value_changed"
ROUTE1539.fromNode = "r_handPitch"
ROUTE1539.toField = "set_rotation"
ROUTE1539.toNode = "Joe_r_carpal_distal_interphalangeal_3"

Scene33.children.append(ROUTE1539)
ROUTE1540 = x3d.ROUTE()
ROUTE1540.fromField = "value_changed"
ROUTE1540.fromNode = "r_handPitch"
ROUTE1540.toField = "set_rotation"
ROUTE1540.toNode = "Joe_r_carpometacarpal_4"

Scene33.children.append(ROUTE1540)
ROUTE1541 = x3d.ROUTE()
ROUTE1541.fromField = "value_changed"
ROUTE1541.fromNode = "r_handPitch"
ROUTE1541.toField = "set_rotation"
ROUTE1541.toNode = "Joe_r_metacarpophalangeal_4"

Scene33.children.append(ROUTE1541)
ROUTE1542 = x3d.ROUTE()
ROUTE1542.fromField = "value_changed"
ROUTE1542.fromNode = "r_handPitch"
ROUTE1542.toField = "set_rotation"
ROUTE1542.toNode = "Joe_r_carpal_proximal_interphalangeal_4"

Scene33.children.append(ROUTE1542)
ROUTE1543 = x3d.ROUTE()
ROUTE1543.fromField = "value_changed"
ROUTE1543.fromNode = "r_handPitch"
ROUTE1543.toField = "set_rotation"
ROUTE1543.toNode = "Joe_r_carpal_distal_interphalangeal_4"

Scene33.children.append(ROUTE1543)
ROUTE1544 = x3d.ROUTE()
ROUTE1544.fromField = "value_changed"
ROUTE1544.fromNode = "r_handPitch"
ROUTE1544.toField = "set_rotation"
ROUTE1544.toNode = "Joe_r_carpometacarpal_5"

Scene33.children.append(ROUTE1544)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.fromField = "value_changed"
ROUTE1545.fromNode = "r_handPitch"
ROUTE1545.toField = "set_rotation"
ROUTE1545.toNode = "Joe_r_metacarpophalangeal_5"

Scene33.children.append(ROUTE1545)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.fromField = "value_changed"
ROUTE1546.fromNode = "r_handPitch"
ROUTE1546.toField = "set_rotation"
ROUTE1546.toNode = "Joe_r_carpal_proximal_interphalangeal_5"

Scene33.children.append(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.fromField = "value_changed"
ROUTE1547.fromNode = "r_handPitch"
ROUTE1547.toField = "set_rotation"
ROUTE1547.toNode = "Joe_r_carpal_distal_interphalangeal_5"

Scene33.children.append(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.fromField = "value_changed"
ROUTE1548.fromNode = "r_thumb1Pitch"
ROUTE1548.toField = "set_rotation"
ROUTE1548.toNode = "Joe_r_carpometacarpal_1"

Scene33.children.append(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.fromField = "value_changed"
ROUTE1549.fromNode = "r_thumb2Pitch"
ROUTE1549.toField = "set_rotation"
ROUTE1549.toNode = "Joe_r_metacarpophalangeal_1"

Scene33.children.append(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.fromField = "value_changed"
ROUTE1550.fromNode = "r_thumb2Pitch"
ROUTE1550.toField = "set_rotation"
ROUTE1550.toNode = "Joe_r_carpal_interphalangeal_1"

Scene33.children.append(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromField = "value_changed"
ROUTE1551.fromNode = "l_shoulderRoll"
ROUTE1551.toField = "set_rotation"
ROUTE1551.toNode = "Joe_l_shoulder"

Scene33.children.append(ROUTE1551)
Group1552 = x3d.Group()
PositionInterpolator1553 = x3d.PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator1553.key = [0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator1553.keyValue = [(0, -0.0093, 0),(0, -0.0039, 0),(0, -0.0088, 0),(0, -0.0149, 0),(0, -0.0264, 0),(0, -0.0393, 0),(0, -0.0502, 0),(0, -0.0747, 0),(0, -0.0273, 0),(0, -0.0161, 0),(0, -0.0113, 0),(0, -0.0058, 0),(0, -0.002, 0),(0, -0.0026, 0),(0, -0.0143, 0),(0, -0.038, 0),(0, -0.0565, 0),(0, -0.045, 0),(0, -0.0093, 0)]

Group1552.children.append(PositionInterpolator1553)
OrientationInterpolator1554 = x3d.OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR")
OrientationInterpolator1554.key = [0,1]
OrientationInterpolator1554.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0)]

Group1552.children.append(OrientationInterpolator1554)
OrientationInterpolator1555 = x3d.OrientationInterpolator(DEF="L_HIP_ANIMATOR")
OrientationInterpolator1555.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1555.keyValue = [(-0.873, 0.0609, 0.484, 0.2865),(0.9963, -0.0106, 0.0848, 0.2488),(0.9965, 0.0159, -0.0822, 0.3836),(-0.7018, -0.0322, -0.7117, 0.1289),(-1, 0, 0, 0.5518),(-0.9964, 0.0223, 0.0817, 0.5351),(-0.9809, 0.0491, 0.1881, 0.5204),(-0.873, 0.0609, 0.484, 0.2865)]

Group1552.children.append(OrientationInterpolator1555)
OrientationInterpolator1556 = x3d.OrientationInterpolator(DEF="L_KNEE_ANIMATOR")
OrientationInterpolator1556.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1556.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.0868),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.0996),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]

Group1552.children.append(OrientationInterpolator1556)
OrientationInterpolator1557 = x3d.OrientationInterpolator(DEF="L_ANKLE_ANIMATOR")
OrientationInterpolator1557.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator1557.keyValue = [(-1, 0, 0, 0.0671),(-1, 0, 0, 0.2152),(-1, 0, 0, 0.3184),(-1, 0, 0, 0.4717),(-1, 0, 0, 0.2912),(1, 0, 0, 0.2222),(-1, 0, 0, 0.0671)]

Group1552.children.append(OrientationInterpolator1557)
OrientationInterpolator1558 = x3d.OrientationInterpolator(DEF="R_ANKLE_ANIMATOR")
OrientationInterpolator1558.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]
OrientationInterpolator1558.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.3533),(-1, 0, 0, 0.1072),(1, 0, 0, 0.4),(1, 0, 0, 0.127),(-1, 0, 0, 0.018),(-1, 0, 0, 0.058),(-1, 0, 0, 0.24),(-1, 0, 0, 0.35),(-1, 0, 0, 0.33),(0, 0, 1, 0)]

Group1552.children.append(OrientationInterpolator1558)
OrientationInterpolator1559 = x3d.OrientationInterpolator(DEF="L_subtalar_ANIMATOR")
OrientationInterpolator1559.key = [0,0.3,1]
OrientationInterpolator1559.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1552.children.append(OrientationInterpolator1559)
OrientationInterpolator1560 = x3d.OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR")
OrientationInterpolator1560.key = [0,0.5,1]
OrientationInterpolator1560.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.2),(1, 0, 0, 0)]

Group1552.children.append(OrientationInterpolator1560)
OrientationInterpolator1561 = x3d.OrientationInterpolator(DEF="L_metatarsal_ANIMATOR")
OrientationInterpolator1561.key = [0,0.2,0.4,0.8,1]
OrientationInterpolator1561.keyValue = [(-1, 0, 0, 0.3),(-1, 0, 0, 0.15),(1, 0, 0, 0.3),(0, 0, 1, 0),(-1, 0, 0, 0.3)]

Group1552.children.append(OrientationInterpolator1561)
OrientationInterpolator1562 = x3d.OrientationInterpolator(DEF="R_HIP_ANIMATOR")
OrientationInterpolator1562.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1562.keyValue = [(-0.5831, 0.0351, 0.8116, 0.1481),(-0.995, 0.023, 0.0967, 0.4683),(-1, 0.0019, 0.008, 0.4732),(-0.998, -0.0158, -0.061, 0.5079),(-0.9911, -0.0354, -0.1286, 0.5419),(-0.9131, -0.0624, -0.403, 0.3361),(-0.4306, -0.0796, -0.899, 0.0704),(1, 0, 0, 0.2571),(0.9891, -0.0281, 0.1444, 0.3879),(-0.5831, 0.0351, 0.8116, 0.1481)]

Group1552.children.append(OrientationInterpolator1562)
OrientationInterpolator1563 = x3d.OrientationInterpolator(DEF="R_KNEE_ANIMATOR")
OrientationInterpolator1563.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1563.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.8926),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, 0, 0, 0.0935),(1, 0, 0, 0.0856),(1, 0, 0, 0.2475),(1, 0, 0, 0.8573)]

Group1552.children.append(OrientationInterpolator1563)
OrientationInterpolator1564 = x3d.OrientationInterpolator(DEF="R_subtalar_ANIMATOR")
OrientationInterpolator1564.key = [0,0.225,0.25,0.35,0.45,0.85,0.91]
OrientationInterpolator1564.keyValue = [(-1, 0, 0, 0.1),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.1),(0, 0, 1, 0),(1, 0, 0, 0.1),(1, 0, 0, 0.25)]

Group1552.children.append(OrientationInterpolator1564)
OrientationInterpolator1565 = x3d.OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR")
OrientationInterpolator1565.key = [0,0.22,1]
OrientationInterpolator1565.keyValue = [(1, 0, 0, -0.2),(0, 0, 1, 0),(1, 0, 0, -0.2)]

Group1552.children.append(OrientationInterpolator1565)
OrientationInterpolator1566 = x3d.OrientationInterpolator(DEF="R_metatarsal_ANIMATOR")
OrientationInterpolator1566.key = [0,0.2,0.4,0.8,1]
OrientationInterpolator1566.keyValue = [(-1, 0, 0, 0.15),(0, 0, 1, 0),(1, 0, 0, 0.3),(-1, 0, 0, 0.3),(-1, 0, 0, 0.15)]

Group1552.children.append(OrientationInterpolator1566)
OrientationInterpolator1567 = x3d.OrientationInterpolator(DEF="VL5_ANIMATOR")
OrientationInterpolator1567.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator1567.keyValue = [(0, 1, 0, 0.0826),(-0.0197, -0.5974, 0.8017, 0.0823),(0.0093, -0.9648, 0.2627, 0.1734),(-0.0124, 0.9549, -0.2968, 0.0873),(-0.0081, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]

Group1552.children.append(OrientationInterpolator1567)
OrientationInterpolator1568 = x3d.OrientationInterpolator(DEF="SKULLBASE_ANIMATOR")
OrientationInterpolator1568.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator1568.keyValue = [(0, -1, 0, 0.0864),(0, 1, 0, 0.1825),(0, 1, 0, 0.1505),(0, 1, 0, 0.1053),(0, 1, 0, 0.0439),(0, -1, 0, 0.0312),(0, -1, 0, 0.0794),(0, -1, 0, 0.1616),(0, -1, 0, 0.155),(0, -1, 0, 0.0864)]

Group1552.children.append(OrientationInterpolator1568)
OrientationInterpolator1569 = x3d.OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR")
OrientationInterpolator1569.key = [0,0.375,0.9167,1]
OrientationInterpolator1569.keyValue = [(1, 0, 0.4, 0.12),(-1, 0, 0.4, 0.186),(1, 0, 0.1, 0.336),(1, 0, 0.4, 0.12)]

Group1552.children.append(OrientationInterpolator1569)
OrientationInterpolator1570 = x3d.OrientationInterpolator(DEF="L_ELBOW_ANIMATOR")
OrientationInterpolator1570.key = [0,0.375,0.9167,1]
OrientationInterpolator1570.keyValue = [(-1, 0, 0, 0.066),(-1, 0, 0, 0.488),(-1, 0, 0, 0.0177),(-1, 0, 0, 0.066)]

Group1552.children.append(OrientationInterpolator1570)
OrientationInterpolator1571 = x3d.OrientationInterpolator(DEF="L_WRIST_ANIMATOR")
OrientationInterpolator1571.key = [0,0.375,0.9167,1]
OrientationInterpolator1571.keyValue = [(0, -1, 0, 0.461),(-0.3302, -0.9275, 0.1755, 0.5388),(0.0328, -0.9993, -0.0172, 0.492),(0, -1, 0, 0.4611)]

Group1552.children.append(OrientationInterpolator1571)
OrientationInterpolator1572 = x3d.OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR")
OrientationInterpolator1572.key = [0,0.375,0.9167,1]
OrientationInterpolator1572.keyValue = [(-1, 0, -1, 0.092),(1, 0, -0.2, 0.3197),(-1, 0, -0.5, 0.1564),(-1, 0, -1, 0.092)]

Group1552.children.append(OrientationInterpolator1572)
OrientationInterpolator1573 = x3d.OrientationInterpolator(DEF="R_ELBOW_ANIMATOR")
OrientationInterpolator1573.key = [0,0.375,0.9167,1]
OrientationInterpolator1573.keyValue = [(-1, 0, 0, 0.4115),(-1, 0, 0, 0.0925),(-1, 0, 0, 0.5726),(-1, 0, 0, 0.4115)]

Group1552.children.append(OrientationInterpolator1573)
OrientationInterpolator1574 = x3d.OrientationInterpolator(DEF="R_WRIST_ANIMATOR")
OrientationInterpolator1574.key = [0,0.375,0.9167,1]
OrientationInterpolator1574.keyValue = [(-0.8129, 0.4759, -0.3357, 0.1346),(0.1533, -0.9878, 0.0258, 0.3902),(-0.5701, 0.7604, -0.311, 0.366),(-0.8129, 0.4759, -0.3357, 0.1346)]

Group1552.children.append(OrientationInterpolator1574)

Scene33.children.append(Group1552)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromField = "fraction_changed"
ROUTE1575.fromNode = "Time1"
ROUTE1575.toField = "set_fraction"
ROUTE1575.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"

Scene33.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromField = "fraction_changed"
ROUTE1576.fromNode = "Time1"
ROUTE1576.toField = "set_fraction"
ROUTE1576.toNode = "HUMANOIDROOT_ANIMATOR"

Scene33.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromField = "fraction_changed"
ROUTE1577.fromNode = "Time1"
ROUTE1577.toField = "set_fraction"
ROUTE1577.toNode = "L_HIP_ANIMATOR"

Scene33.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromField = "fraction_changed"
ROUTE1578.fromNode = "Time1"
ROUTE1578.toField = "set_fraction"
ROUTE1578.toNode = "L_KNEE_ANIMATOR"

Scene33.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromField = "fraction_changed"
ROUTE1579.fromNode = "Time1"
ROUTE1579.toField = "set_fraction"
ROUTE1579.toNode = "L_ANKLE_ANIMATOR"

Scene33.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromField = "fraction_changed"
ROUTE1580.fromNode = "Time1"
ROUTE1580.toField = "set_fraction"
ROUTE1580.toNode = "L_subtalar_ANIMATOR"

Scene33.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromField = "fraction_changed"
ROUTE1581.fromNode = "Time1"
ROUTE1581.toField = "set_fraction"
ROUTE1581.toNode = "L_MIDTARSAL_ANIMATOR"

Scene33.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromField = "fraction_changed"
ROUTE1582.fromNode = "Time1"
ROUTE1582.toField = "set_fraction"
ROUTE1582.toNode = "L_metatarsal_ANIMATOR"

Scene33.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromField = "fraction_changed"
ROUTE1583.fromNode = "Time1"
ROUTE1583.toField = "set_fraction"
ROUTE1583.toNode = "R_HIP_ANIMATOR"

Scene33.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromField = "fraction_changed"
ROUTE1584.fromNode = "Time1"
ROUTE1584.toField = "set_fraction"
ROUTE1584.toNode = "R_KNEE_ANIMATOR"

Scene33.children.append(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.fromField = "fraction_changed"
ROUTE1585.fromNode = "Time1"
ROUTE1585.toField = "set_fraction"
ROUTE1585.toNode = "R_ANKLE_ANIMATOR"

Scene33.children.append(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.fromField = "fraction_changed"
ROUTE1586.fromNode = "Time1"
ROUTE1586.toField = "set_fraction"
ROUTE1586.toNode = "R_subtalar_ANIMATOR"

Scene33.children.append(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromField = "fraction_changed"
ROUTE1587.fromNode = "Time1"
ROUTE1587.toField = "set_fraction"
ROUTE1587.toNode = "R_MIDTARSAL_ANIMATOR"

Scene33.children.append(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.fromField = "fraction_changed"
ROUTE1588.fromNode = "Time1"
ROUTE1588.toField = "set_fraction"
ROUTE1588.toNode = "R_metatarsal_ANIMATOR"

Scene33.children.append(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.fromField = "fraction_changed"
ROUTE1589.fromNode = "Time1"
ROUTE1589.toField = "set_fraction"
ROUTE1589.toNode = "VL5_ANIMATOR"

Scene33.children.append(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.fromField = "fraction_changed"
ROUTE1590.fromNode = "Time1"
ROUTE1590.toField = "set_fraction"
ROUTE1590.toNode = "SKULLBASE_ANIMATOR"

Scene33.children.append(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.fromField = "fraction_changed"
ROUTE1591.fromNode = "Time1"
ROUTE1591.toField = "set_fraction"
ROUTE1591.toNode = "L_SHOULDER_ANIMATOR"

Scene33.children.append(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.fromField = "fraction_changed"
ROUTE1592.fromNode = "Time1"
ROUTE1592.toField = "set_fraction"
ROUTE1592.toNode = "L_ELBOW_ANIMATOR"

Scene33.children.append(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromField = "fraction_changed"
ROUTE1593.fromNode = "Time1"
ROUTE1593.toField = "set_fraction"
ROUTE1593.toNode = "L_WRIST_ANIMATOR"

Scene33.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromField = "value_changed"
ROUTE1594.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE1594.toField = "set_translation"
ROUTE1594.toNode = "Joe_humanoid_root"

Scene33.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromField = "value_changed"
ROUTE1595.fromNode = "HUMANOIDROOT_ANIMATOR"
ROUTE1595.toField = "set_rotation"
ROUTE1595.toNode = "Joe_humanoid_root"

Scene33.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromField = "value_changed"
ROUTE1596.fromNode = "L_HIP_ANIMATOR"
ROUTE1596.toField = "set_rotation"
ROUTE1596.toNode = "Joe_l_hip"

Scene33.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromField = "value_changed"
ROUTE1597.fromNode = "L_KNEE_ANIMATOR"
ROUTE1597.toField = "set_rotation"
ROUTE1597.toNode = "Joe_l_knee"

Scene33.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromField = "value_changed"
ROUTE1598.fromNode = "L_ANKLE_ANIMATOR"
ROUTE1598.toField = "set_rotation"
ROUTE1598.toNode = "Joe_l_talocrural"

Scene33.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromField = "value_changed"
ROUTE1599.fromNode = "L_MIDTARSAL_ANIMATOR"
ROUTE1599.toField = "set_rotation"
ROUTE1599.toNode = "Joe_l_metatarsophalangeal_2"

Scene33.children.append(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.fromField = "value_changed"
ROUTE1600.fromNode = "L_subtalar_ANIMATOR"
ROUTE1600.toField = "set_rotation"
ROUTE1600.toNode = "Joe_l_tarsometatarsal_2"

Scene33.children.append(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.fromField = "value_changed"
ROUTE1601.fromNode = "L_metatarsal_ANIMATOR"
ROUTE1601.toField = "set_rotation"
ROUTE1601.toNode = "Joe_l_metatarsal"

Scene33.children.append(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.fromField = "value_changed"
ROUTE1602.fromNode = "R_HIP_ANIMATOR"
ROUTE1602.toField = "set_rotation"
ROUTE1602.toNode = "Joe_r_hip"

Scene33.children.append(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.fromField = "value_changed"
ROUTE1603.fromNode = "R_KNEE_ANIMATOR"
ROUTE1603.toField = "set_rotation"
ROUTE1603.toNode = "Joe_r_knee"

Scene33.children.append(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.fromField = "value_changed"
ROUTE1604.fromNode = "R_ANKLE_ANIMATOR"
ROUTE1604.toField = "set_rotation"
ROUTE1604.toNode = "Joe_r_talocrural"

Scene33.children.append(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromField = "value_changed"
ROUTE1605.fromNode = "R_subtalar_ANIMATOR"
ROUTE1605.toField = "set_rotation"
ROUTE1605.toNode = "Joe_r_tarsometatarsal_2"

Scene33.children.append(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.fromField = "value_changed"
ROUTE1606.fromNode = "R_MIDTARSAL_ANIMATOR"
ROUTE1606.toField = "set_rotation"
ROUTE1606.toNode = "Joe_r_metatarsophalangeal_2"

Scene33.children.append(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.fromField = "value_changed"
ROUTE1607.fromNode = "R_metatarsal_ANIMATOR"
ROUTE1607.toField = "set_rotation"
ROUTE1607.toNode = "Joe_r_tarsal_distal_interphalangeal_2"

Scene33.children.append(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromField = "value_changed"
ROUTE1608.fromNode = "VL5_ANIMATOR"
ROUTE1608.toField = "set_rotation"
ROUTE1608.toNode = "Joe_vl5"

Scene33.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromField = "value_changed"
ROUTE1609.fromNode = "SKULLBASE_ANIMATOR"
ROUTE1609.toField = "set_rotation"
ROUTE1609.toNode = "Joe_skullbase"

Scene33.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromField = "value_changed"
ROUTE1610.fromNode = "L_SHOULDER_ANIMATOR"
ROUTE1610.toField = "set_rotation"
ROUTE1610.toNode = "Joe_l_shoulder"

Scene33.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromField = "value_changed"
ROUTE1611.fromNode = "L_ELBOW_ANIMATOR"
ROUTE1611.toField = "set_rotation"
ROUTE1611.toNode = "Joe_l_elbow"

Scene33.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromField = "value_changed"
ROUTE1612.fromNode = "L_WRIST_ANIMATOR"
ROUTE1612.toField = "set_rotation"
ROUTE1612.toNode = "Joe_l_radiocarpal"

Scene33.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromField = "value_changed"
ROUTE1613.fromNode = "R_SHOULDER_ANIMATOR"
ROUTE1613.toField = "set_rotation"
ROUTE1613.toNode = "Joe_r_shoulder"

Scene33.children.append(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.fromField = "value_changed"
ROUTE1614.fromNode = "R_ELBOW_ANIMATOR"
ROUTE1614.toField = "set_rotation"
ROUTE1614.toNode = "Joe_r_elbow"

Scene33.children.append(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.fromField = "value_changed"
ROUTE1615.fromNode = "R_WRIST_ANIMATOR"
ROUTE1615.toField = "set_rotation"
ROUTE1615.toNode = "Joe_r_radiocarpal"

Scene33.children.append(ROUTE1615)

X3D0.Scene = Scene33
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta3.content = "JoeSkeletonSkinSaluteSiteWalk.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Comprehensive example showing skeleton, skin, sites and interpolator animation together."

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
meta7.content = "4 December 2022"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Tue, 09 Sep 2025 19:38:38 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "warning"
meta9.content = "Under development, numerous errors and warnings"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "TODO"
meta10.content = "This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "TODO"
meta11.content = "Provide feedback to tovrmlx3d converter"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "TODO"
meta12.content = "HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics."

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "TODO"
meta13.content = "ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "JoeSkeletonSkinSaluteSiteWalk.original.x3dv"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "https://castle-engine.io/view3dscene.php#section_converting"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Image"
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "Image"
meta23.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "Image"
meta24.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "Image"
meta25.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "Image"
meta26.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "drawing"
meta27.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "generator"
meta28.content = "tovrmlx3d, https://castle-engine.io/convert.php"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "generator"
meta29.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "generator"
meta30.content = "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "translator"
meta31.content = "Michalis Kamburelis"

head1.children.append(meta31)
meta32 = x3d.meta()
meta32.name = "translator"
meta32.content = "Don Brutzman"

head1.children.append(meta32)

X3D0.head = head1
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.title = "HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"
WorldInfo34.info = ["By Joe for Joe"]

Scene33.children.append(WorldInfo34)
WorldInfo35 = x3d.WorldInfo()
WorldInfo35.title = "HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3"
WorldInfo35.info = ["By Joe for Joe"]

Scene33.children.append(WorldInfo35)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.DEF = "HeadlightOnRevealsSkinTextureAndColors"

Scene33.children.append(NavigationInfo36)
Background37 = x3d.Background()
Background37.skyColor = [(0, 0, 0.1)]
Background37.groundAngle = [1.57]
Background37.groundColor = [(0, 0.1, 0),(0, 0.1, 0)]

Scene33.children.append(Background37)
Transform38 = x3d.Transform()
Transform38.DEF = "cordsysfloor"
Transform38.scale = [0.175,0.175,0.175]
Inline39 = x3d.Inline()
Inline39.DEF = "CoordinateAxes"
Inline39.url = ["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]

Transform38.children.append(Inline39)

Scene33.children.append(Transform38)
Group40 = x3d.Group()
Group40.DEF = "ViewpointGroup"
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "Front Up View"
Viewpoint41.position = [-1,2,2.5]
Viewpoint41.orientation = [-1,-1,0,0.55]

Group40.children.append(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "From Left View"
Viewpoint42.position = [-2.5,1.5,0]
Viewpoint42.orientation = [0.3,1,0,-1.57]

Group40.children.append(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.description = "Front Mid View"
Viewpoint43.position = [0,0.5,1.25]

Group40.children.append(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "Front Feet View"
Viewpoint44.position = [0,0,0.75]

Group40.children.append(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.description = "From Right View"
Viewpoint45.position = [1,1,0]
Viewpoint45.orientation = [0,1,0,1.57]

Group40.children.append(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.description = "Front Head View"
Viewpoint46.position = [0,1.65,0.75]
Viewpoint46.centerOfRotation = [0,1.65,0]

Group40.children.append(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.description = "Front Mid View"
Viewpoint47.position = [0,1,1.75]

Group40.children.append(Viewpoint47)
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.description = "Rear View"
Viewpoint48.position = [0,1.5,-4]
Viewpoint48.orientation = [0,1,0,3.14]

Group40.children.append(Viewpoint48)
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.description = "Top View"
Viewpoint49.position = [0,4,0]
Viewpoint49.orientation = [1,0,0,-1.57]

Group40.children.append(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.description = "Bottom View"
Viewpoint50.position = [0,-4,0]
Viewpoint50.orientation = [1,0,0,1.57]

Group40.children.append(Viewpoint50)
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.description = "Right View"
Viewpoint51.position = [4,1.5,0]
Viewpoint51.orientation = [0,1,0,1.57]

Group40.children.append(Viewpoint51)

Scene33.children.append(Group40)
Group52 = x3d.Group()
Group52.DEF = "VisualizationShapes"
Transform53 = x3d.Transform()
Transform53.translation = [0,2.1,0]
Transform53.scale = [5,5,5]
Shape54 = x3d.Shape()
Shape54.DEF = "jointbox"
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.ambientIntensity = 0.5
Material56.diffuseColor = [0,0,0]
Material56.shininess = 1

Appearance55.material = Material56

Shape54.appearance = Appearance55
IndexedFaceSet57 = x3d.IndexedFaceSet()
IndexedFaceSet57.creaseAngle = 0.1
IndexedFaceSet57.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Color58 = x3d.Color()
Color58.color = [(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 1, 1),(0, 1, 1),(1, 1, 0)]

IndexedFaceSet57.color = Color58
Coordinate59 = x3d.Coordinate()
Coordinate59.DEF = "boxCoords"
Coordinate59.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.0157),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet57.coord = Coordinate59

Shape54.geometry = IndexedFaceSet57

Transform53.children.append(Shape54)

Group52.children.append(Transform53)
Transform60 = x3d.Transform()
Transform60.translation = [-0.2,0.773,-0.016]
Transform60.scale = [0.1,0.1,0.1]
Shape61 = x3d.Shape()
Shape61.DEF = "sitebox"
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.ambientIntensity = 1
Material63.diffuseColor = [1,0,0]
Material63.specularColor = [1,0,0]
Material63.emissiveColor = [1,0,0]
Material63.shininess = 0.7

Appearance62.material = Material63

Shape61.appearance = Appearance62
IndexedFaceSet64 = x3d.IndexedFaceSet()
IndexedFaceSet64.creaseAngle = 0.1
IndexedFaceSet64.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate65 = x3d.Coordinate()
Coordinate65.USE = "boxCoords"

IndexedFaceSet64.coord = Coordinate65

Shape61.geometry = IndexedFaceSet64

Transform60.children.append(Shape61)

Group52.children.append(Transform60)
Transform66 = x3d.Transform()
Transform66.translation = [0,0.2,0]
Transform66.scale = [0.1,0.1,0.1]
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Appearance68.DEF = "SegmentLine"
Material69 = x3d.Material()
Material69.diffuseColor = [0,1,0]
Material69.specularColor = [0,1,0]
Material69.emissiveColor = [0,1,0]

Appearance68.material = Material69

Shape67.appearance = Appearance68
IndexedLineSet70 = x3d.IndexedLineSet()
IndexedLineSet70.coordIndex = [0,1,-1]
Coordinate71 = x3d.Coordinate()
Coordinate71.point = [(0, 0, 0),(0, 0.0001, 0)]

IndexedLineSet70.coord = Coordinate71

Shape67.geometry = IndexedLineSet70

Transform66.children.append(Shape67)

Group52.children.append(Transform66)
Transform72 = x3d.Transform()
Transform72.translation = [-0.2,0.773,-0.016]
Transform72.scale = [0.1,0.1,0.1]
Shape73 = x3d.Shape()
Shape73.DEF = "skinsphere"
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.ambientIntensity = 0.5
Material75.diffuseColor = [0,1,0]
Material75.specularColor = [0,1,0]
Material75.emissiveColor = [0,1,0]
Material75.shininess = 1

Appearance74.material = Material75

Shape73.appearance = Appearance74
Sphere76 = x3d.Sphere()
Sphere76.radius = 0.005

Shape73.geometry = Sphere76

Transform72.children.append(Shape73)

Group52.children.append(Transform72)

Scene33.children.append(Group52)
Group77 = x3d.Group()
Group77.DEF = "SpecHumanoid"
Group78 = x3d.Group()
Group78.DEF = "JoeISOHumanoid"
HAnimHumanoid79 = x3d.HAnimHumanoid()
HAnimHumanoid79.DEF = "Joe_Human"
HAnimHumanoid79.name = "Human"
HAnimHumanoid79.info = ["humanoidVersion=2.0"]
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.DEF = "Joe_HumanoidRoot"
HAnimJoint80.name = "humanoid_root"
HAnimJoint80.translation = [0,-0.0293965,0]
HAnimJoint80.center = [0,0.875,0]
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.DEF = "Joe_sacrum"
HAnimSegment81.name = "sacrum"
Transform82 = x3d.Transform()
Transform82.translation = [0,0.875,0]
Shape83 = x3d.Shape()
Shape83.USE = "jointbox"

Transform82.children.append(Shape83)

HAnimSegment81.children.append(Transform82)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Appearance85.USE = "SegmentLine"

Shape84.appearance = Appearance85
IndexedLineSet86 = x3d.IndexedLineSet()
IndexedLineSet86.coordIndex = [0,1,-1]
Coordinate87 = x3d.Coordinate()
Coordinate87.point = [(0, 0.875, 0),(0, 0.92, 0)]

IndexedLineSet86.coord = Coordinate87

Shape84.geometry = IndexedLineSet86

HAnimSegment81.children.append(Shape84)
Transform88 = x3d.Transform()
Transform88.translation = [0,0.92,0.08]
Shape89 = x3d.Shape()
Shape89.USE = "skinsphere"

Transform88.children.append(Shape89)

HAnimSegment81.children.append(Transform88)
Transform90 = x3d.Transform()
Transform90.translation = [0,0.87,-0.022]
Shape91 = x3d.Shape()
Shape91.USE = "skinsphere"

Transform90.children.append(Shape91)

HAnimSegment81.children.append(Transform90)

HAnimJoint80.children.append(HAnimSegment81)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "Joe_sacroiliac"
HAnimJoint92.name = "sacroiliac"
HAnimJoint92.center = [0,0.92,0]
HAnimJoint92.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.DEF = "Joe_pelvis"
HAnimSegment93.name = "pelvis"
Transform94 = x3d.Transform()
Transform94.translation = [0,0.9149,0.0016]
Transform95 = x3d.Transform()
Shape96 = x3d.Shape()
Shape96.USE = "jointbox"

Transform95.children.append(Shape96)

Transform94.children.append(Transform95)

HAnimSegment93.children.append(Transform94)
Shape97 = x3d.Shape()
Appearance98 = x3d.Appearance()
Appearance98.USE = "SegmentLine"

Shape97.appearance = Appearance98
IndexedLineSet99 = x3d.IndexedLineSet()
IndexedLineSet99.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate100 = x3d.Coordinate()
Coordinate100.point = [(0, 0.92, 0),(0.0961, 0.9124, 0),(-0.095, 0.9171, 0.0029),(0, 1.045, -0.095)]

IndexedLineSet99.coord = Coordinate100

Shape97.geometry = IndexedLineSet99

HAnimSegment93.children.append(Shape97)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.DEF = "Joe_l_iliocristale"
HAnimSite101.name = "l_iliocristale"
HAnimSite101.translation = [0.1425,1.065,0.0033]
Shape102 = x3d.Shape()
Shape102.USE = "sitebox"

HAnimSite101.children.append(Shape102)

HAnimSegment93.children.append(HAnimSite101)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.DEF = "Joe_l_trochanterion"
HAnimSite103.name = "l_trochanterion"
HAnimSite103.translation = [0.15,0.9,-0.01]
Shape104 = x3d.Shape()
Shape104.USE = "sitebox"

HAnimSite103.children.append(Shape104)

HAnimSegment93.children.append(HAnimSite103)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.DEF = "Joe_r_iliocristale"
HAnimSite105.name = "r_iliocristale"
HAnimSite105.translation = [-0.1425,1.065,0.0033]
Shape106 = x3d.Shape()
Shape106.USE = "sitebox"

HAnimSite105.children.append(Shape106)

HAnimSegment93.children.append(HAnimSite105)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.DEF = "Joe_r_trochanterion"
HAnimSite107.name = "r_trochanterion"
HAnimSite107.translation = [-0.15,0.9,-0.01]
Shape108 = x3d.Shape()
Shape108.USE = "sitebox"

HAnimSite107.children.append(Shape108)

HAnimSegment93.children.append(HAnimSite107)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.DEF = "Joe_l_asis"
HAnimSite109.name = "l_asis"
HAnimSite109.translation = [0.0935,1.03,0.075]
Shape110 = x3d.Shape()
Shape110.USE = "sitebox"

HAnimSite109.children.append(Shape110)

HAnimSegment93.children.append(HAnimSite109)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.DEF = "Joe_r_asis"
HAnimSite111.name = "r_asis"
HAnimSite111.translation = [-0.0935,1.03,0.075]
Shape112 = x3d.Shape()
Shape112.USE = "sitebox"

HAnimSite111.children.append(Shape112)

HAnimSegment93.children.append(HAnimSite111)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.DEF = "Joe_l_psis"
HAnimSite113.name = "l_psis"
HAnimSite113.translation = [0.0773,1.019,-0.12]
Shape114 = x3d.Shape()
Shape114.USE = "sitebox"

HAnimSite113.children.append(Shape114)

HAnimSegment93.children.append(HAnimSite113)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.DEF = "Joe_r_psis"
HAnimSite115.name = "r_psis"
HAnimSite115.translation = [-0.0773,1.019,-0.12]
Shape116 = x3d.Shape()
Shape116.USE = "sitebox"

HAnimSite115.children.append(Shape116)

HAnimSegment93.children.append(HAnimSite115)
HAnimSite117 = x3d.HAnimSite()
HAnimSite117.DEF = "Joe_floormarker"
HAnimSite117.name = "floormarker"
Transform118 = x3d.Transform()
Transform118.scale = [3,3,3]
Shape119 = x3d.Shape()
Shape119.USE = "sitebox"

Transform118.children.append(Shape119)

HAnimSite117.children.append(Transform118)

HAnimSegment93.children.append(HAnimSite117)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.DEF = "Joe_crotch"
HAnimSite120.name = "crotch"
HAnimSite120.translation = [0,0.87,-0.022]
Shape121 = x3d.Shape()
Shape121.USE = "sitebox"

HAnimSite120.children.append(Shape121)

HAnimSegment93.children.append(HAnimSite120)

HAnimJoint92.children.append(HAnimSegment93)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "Joe_l_hip"
HAnimJoint122.name = "l_hip"
HAnimJoint122.rotation = [-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996]
HAnimJoint122.center = [0.1,0.92,0]
HAnimJoint122.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint122.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.DEF = "Joe_l_thigh"
HAnimSegment123.name = "l_thigh"
Transform124 = x3d.Transform()
Transform124.translation = [0.1,0.92,0]
Shape125 = x3d.Shape()
Shape125.USE = "jointbox"

Transform124.children.append(Shape125)

HAnimSegment123.children.append(Transform124)
Shape126 = x3d.Shape()
Appearance127 = x3d.Appearance()
Appearance127.USE = "SegmentLine"

Shape126.appearance = Appearance127
IndexedLineSet128 = x3d.IndexedLineSet()
IndexedLineSet128.coordIndex = [0,1,-1]
Coordinate129 = x3d.Coordinate()
Coordinate129.point = [(0.1, 0.92, 0),(0.115, 0.466, 0)]

IndexedLineSet128.coord = Coordinate129

Shape126.geometry = IndexedLineSet128

HAnimSegment123.children.append(Shape126)
Transform130 = x3d.Transform()
Transform130.translation = [0.1,0.9,0.0775]
Shape131 = x3d.Shape()
Shape131.USE = "skinsphere"

Transform130.children.append(Shape131)

HAnimSegment123.children.append(Transform130)
Transform132 = x3d.Transform()
Transform132.translation = [0.079,0.92,-0.14]
Shape133 = x3d.Shape()
Shape133.USE = "skinsphere"

Transform132.children.append(Shape133)

HAnimSegment123.children.append(Transform132)
Transform134 = x3d.Transform()
Transform134.translation = [0.171,0.65,0]
Shape135 = x3d.Shape()
Shape135.USE = "skinsphere"

Transform134.children.append(Shape135)

HAnimSegment123.children.append(Transform134)
Transform136 = x3d.Transform()
Transform136.translation = [0.02,0.65,0]
Shape137 = x3d.Shape()
Shape137.USE = "skinsphere"

Transform136.children.append(Shape137)

HAnimSegment123.children.append(Transform136)
Transform138 = x3d.Transform()
Transform138.translation = [0.1,0.65,-0.08]
Shape139 = x3d.Shape()
Shape139.USE = "skinsphere"

Transform138.children.append(Shape139)

HAnimSegment123.children.append(Transform138)
Transform140 = x3d.Transform()
Transform140.translation = [0.1,0.65,0.07]
Shape141 = x3d.Shape()
Shape141.USE = "skinsphere"

Transform140.children.append(Shape141)

HAnimSegment123.children.append(Transform140)
HAnimSite142 = x3d.HAnimSite()
HAnimSite142.DEF = "Joe_l_knee_crease"
HAnimSite142.name = "l_knee_crease"
HAnimSite142.translation = [0.115,0.466,-0.055]
Shape143 = x3d.Shape()
Shape143.USE = "sitebox"

HAnimSite142.children.append(Shape143)

HAnimSegment123.children.append(HAnimSite142)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.DEF = "Joe_l_femoral_lateral_epicn"
HAnimSite144.name = "l_femoral_lateral_epicn"
HAnimSite144.translation = [0.17,0.466,0]
Shape145 = x3d.Shape()
Shape145.USE = "sitebox"

HAnimSite144.children.append(Shape145)

HAnimSegment123.children.append(HAnimSite144)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.DEF = "Joe_l_femoral_medial_epicn"
HAnimSite146.name = "l_femoral_medial_epicn"
HAnimSite146.translation = [0.05,0.466,0]
Shape147 = x3d.Shape()
Shape147.USE = "sitebox"

HAnimSite146.children.append(Shape147)

HAnimSegment123.children.append(HAnimSite146)

HAnimJoint122.children.append(HAnimSegment123)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.DEF = "Joe_l_knee"
HAnimJoint148.name = "l_knee"
HAnimJoint148.rotation = [1.00000000000001,0,0,0.224421281773429]
HAnimJoint148.center = [0.115,0.466,0]
HAnimJoint148.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint148.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.DEF = "Joe_l_calf"
HAnimSegment149.name = "l_calf"
Transform150 = x3d.Transform()
Transform150.translation = [0.115,0.466,0]
Shape151 = x3d.Shape()
Shape151.USE = "jointbox"

Transform150.children.append(Shape151)

HAnimSegment149.children.append(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Appearance153.USE = "SegmentLine"

Shape152.appearance = Appearance153
IndexedLineSet154 = x3d.IndexedLineSet()
IndexedLineSet154.coordIndex = [0,1,-1]
Coordinate155 = x3d.Coordinate()
Coordinate155.point = [(0.115, 0.466, 0),(0.1, 0.069, 0)]

IndexedLineSet154.coord = Coordinate155

Shape152.geometry = IndexedLineSet154

HAnimSegment149.children.append(Shape152)
Transform156 = x3d.Transform()
Transform156.translation = [0.115,0.466,0.06]
Shape157 = x3d.Shape()
Shape157.USE = "skinsphere"

Transform156.children.append(Shape157)

HAnimSegment149.children.append(Transform156)
Transform158 = x3d.Transform()
Transform158.translation = [0.115,0.466,-0.055]
Shape159 = x3d.Shape()
Shape159.USE = "skinsphere"

Transform158.children.append(Shape159)

HAnimSegment149.children.append(Transform158)
Transform160 = x3d.Transform()
Transform160.translation = [0.17,0.466,0]
Shape161 = x3d.Shape()
Shape161.USE = "skinsphere"

Transform160.children.append(Shape161)

HAnimSegment149.children.append(Transform160)
Transform162 = x3d.Transform()
Transform162.translation = [0.05,0.466,0]
Shape163 = x3d.Shape()
Shape163.USE = "skinsphere"

Transform162.children.append(Shape163)

HAnimSegment149.children.append(Transform162)
Transform164 = x3d.Transform()
Transform164.translation = [0.17,0.3,0]
Shape165 = x3d.Shape()
Shape165.USE = "skinsphere"

Transform164.children.append(Shape165)

HAnimSegment149.children.append(Transform164)
Transform166 = x3d.Transform()
Transform166.translation = [0.06,0.3,0]
Shape167 = x3d.Shape()
Shape167.USE = "skinsphere"

Transform166.children.append(Shape167)

HAnimSegment149.children.append(Transform166)
Transform168 = x3d.Transform()
Transform168.translation = [0.1,0.3,-0.05]
Shape169 = x3d.Shape()
Shape169.USE = "skinsphere"

Transform168.children.append(Shape169)

HAnimSegment149.children.append(Transform168)
Transform170 = x3d.Transform()
Transform170.translation = [0.1,0.3,0.05]
Shape171 = x3d.Shape()
Shape171.USE = "skinsphere"

Transform170.children.append(Shape171)

HAnimSegment149.children.append(Transform170)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.DEF = "Joe_l_lateral_malleolus"
HAnimSite172.name = "l_lateral_malleolus"
HAnimSite172.translation = [0.15,0.07,0]
Shape173 = x3d.Shape()
Shape173.USE = "sitebox"

HAnimSite172.children.append(Shape173)

HAnimSegment149.children.append(HAnimSite172)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.DEF = "Joe_l_medial_malleolus"
HAnimSite174.name = "l_medial_malleolus"
HAnimSite174.translation = [0.085,0.086,0.0125]
Shape175 = x3d.Shape()
Shape175.USE = "sitebox"

HAnimSite174.children.append(Shape175)

HAnimSegment149.children.append(HAnimSite174)

HAnimJoint148.children.append(HAnimSegment149)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.DEF = "Joe_l_ankle"
HAnimJoint176.name = "l_ankle"
HAnimJoint176.rotation = [-1.00000000000007,0,0,0.0655639608914055]
HAnimJoint176.center = [0.115,0.069,0]
HAnimJoint176.skinCoordIndex = [342,343,344,345]
HAnimJoint176.skinCoordWeight = [1,1,1,1]
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.DEF = "Joe_l_hindfoot"
HAnimSegment177.name = "l_hindfoot"
Transform178 = x3d.Transform()
Transform178.translation = [0.115,0.069,0]
Shape179 = x3d.Shape()
Shape179.USE = "jointbox"

Transform178.children.append(Shape179)

HAnimSegment177.children.append(Transform178)
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
Appearance181.USE = "SegmentLine"

Shape180.appearance = Appearance181
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.coordIndex = [0,1,-1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(0.1, 0.069, 0),(0.115, 0.031, 0.03)]

IndexedLineSet182.coord = Coordinate183

Shape180.geometry = IndexedLineSet182

HAnimSegment177.children.append(Shape180)
Transform184 = x3d.Transform()
Transform184.translation = [0.15,0.07,0]
Shape185 = x3d.Shape()
Shape185.USE = "skinsphere"

Transform184.children.append(Shape185)

HAnimSegment177.children.append(Transform184)
Transform186 = x3d.Transform()
Transform186.translation = [0.085,0.086,0.0125]
Shape187 = x3d.Shape()
Shape187.USE = "skinsphere"

Transform186.children.append(Shape187)

HAnimSegment177.children.append(Transform186)
Transform188 = x3d.Transform()
Transform188.translation = [0.115,0.069,-0.045]
Shape189 = x3d.Shape()
Shape189.USE = "skinsphere"

Transform188.children.append(Shape189)

HAnimSegment177.children.append(Transform188)
Transform190 = x3d.Transform()
Transform190.translation = [0.117,0.0975,0.0615]
Shape191 = x3d.Shape()
Shape191.USE = "skinsphere"

Transform190.children.append(Shape191)

HAnimSegment177.children.append(Transform190)
HAnimSite192 = x3d.HAnimSite()
HAnimSite192.DEF = "Joe_l_sphyrion"
HAnimSite192.name = "l_sphyrion"
HAnimSite192.translation = [0.09,0.056,0.0125]
Shape193 = x3d.Shape()
Shape193.USE = "sitebox"

HAnimSite192.children.append(Shape193)

HAnimSegment177.children.append(HAnimSite192)
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.DEF = "Joe_l_calcaneous_post"
HAnimSite194.name = "l_calcaneous_post"
HAnimSite194.translation = [0.115,0.04,-0.055]
Shape195 = x3d.Shape()
Shape195.USE = "sitebox"

HAnimSite194.children.append(Shape195)

HAnimSegment177.children.append(HAnimSite194)

HAnimJoint176.children.append(HAnimSegment177)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.DEF = "Joe_l_subtalar"
HAnimJoint196.name = "l_subtalar"
HAnimJoint196.center = [0.115,0.031,0.03]
HAnimJoint196.skinCoordIndex = [346,347,348,71]
HAnimJoint196.skinCoordWeight = [1,1,1,1]
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.DEF = "Joe_l_midproximal"
HAnimSegment197.name = "l_midproximal"
Transform198 = x3d.Transform()
Transform198.translation = [0.115,0.031,0.03]
Shape199 = x3d.Shape()
Shape199.USE = "jointbox"

Transform198.children.append(Shape199)

HAnimSegment197.children.append(Transform198)
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Appearance201.USE = "SegmentLine"

Shape200.appearance = Appearance201
IndexedLineSet202 = x3d.IndexedLineSet()
IndexedLineSet202.coordIndex = [0,1,-1]
Coordinate203 = x3d.Coordinate()
Coordinate203.point = [(0.115, 0.031, 0.03),(0.115, 0.037, 0.09)]

IndexedLineSet202.coord = Coordinate203

Shape200.geometry = IndexedLineSet202

HAnimSegment197.children.append(Shape200)
Transform204 = x3d.Transform()
Transform204.translation = [0.1375,0.006,-0.03]
Shape205 = x3d.Shape()
Shape205.USE = "skinsphere"

Transform204.children.append(Shape205)

HAnimSegment197.children.append(Transform204)
Transform206 = x3d.Transform()
Transform206.translation = [0.095,0.006,-0.03]
Shape207 = x3d.Shape()
Shape207.USE = "skinsphere"

Transform206.children.append(Shape207)

HAnimSegment197.children.append(Transform206)
Transform208 = x3d.Transform()
Transform208.translation = [0.115,0.015,-0.045]
Shape209 = x3d.Shape()
Shape209.USE = "skinsphere"

Transform208.children.append(Shape209)

HAnimSegment197.children.append(Transform208)

HAnimJoint196.children.append(HAnimSegment197)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.DEF = "Joe_l_midtarsal"
HAnimJoint210.name = "l_midtarsal"
HAnimJoint210.rotation = [1.00000000000005,0,0,6.19381467367623]
HAnimJoint210.center = [0.115,0.037,0.09]
HAnimJoint210.skinCoordIndex = [349,350,351,352]
HAnimJoint210.skinCoordWeight = [1,1,1,1]
HAnimSegment211 = x3d.HAnimSegment()
HAnimSegment211.DEF = "Joe_l_middistal"
HAnimSegment211.name = "l_middistal"
Transform212 = x3d.Transform()
Transform212.translation = [0.115,0.037,0.09]
Shape213 = x3d.Shape()
Shape213.USE = "jointbox"

Transform212.children.append(Shape213)

HAnimSegment211.children.append(Transform212)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Appearance215.USE = "SegmentLine"

Shape214.appearance = Appearance215
IndexedLineSet216 = x3d.IndexedLineSet()
IndexedLineSet216.coordIndex = [0,1,-1]
Coordinate217 = x3d.Coordinate()
Coordinate217.point = [(0.115, 0.037, 0.09),(0.115, 0.02, 0.122)]

IndexedLineSet216.coord = Coordinate217

Shape214.geometry = IndexedLineSet216

HAnimSegment211.children.append(Shape214)
Transform218 = x3d.Transform()
Transform218.translation = [0.115,0.06,0.1]
Shape219 = x3d.Shape()
Shape219.USE = "skinsphere"

Transform218.children.append(Shape219)

HAnimSegment211.children.append(Transform218)
Transform220 = x3d.Transform()
Transform220.translation = [0.115,0,0.07]
Shape221 = x3d.Shape()
Shape221.USE = "skinsphere"

Transform220.children.append(Shape221)

HAnimSegment211.children.append(Transform220)
Transform222 = x3d.Transform()
Transform222.translation = [0.165,0,0.07]
Shape223 = x3d.Shape()
Shape223.USE = "skinsphere"

Transform222.children.append(Shape223)

HAnimSegment211.children.append(Transform222)
Transform224 = x3d.Transform()
Transform224.translation = [0.095,0,0.07]
Shape225 = x3d.Shape()
Shape225.USE = "skinsphere"

Transform224.children.append(Shape225)

HAnimSegment211.children.append(Transform224)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.DEF = "Joe_l_metatarsal_pha1"
HAnimSite226.name = "l_metatarsal_pha1"
HAnimSite226.translation = [0.087,0.01,0.122]
Shape227 = x3d.Shape()
Shape227.USE = "sitebox"

HAnimSite226.children.append(Shape227)

HAnimSegment211.children.append(HAnimSite226)

HAnimJoint210.children.append(HAnimSegment211)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.DEF = "Joe_l_metatarsal"
HAnimJoint228.name = "l_metatarsal"
HAnimJoint228.rotation = [1.00000000000253,0,0,0.0175699446988144]
HAnimJoint228.center = [0.115,0.02,0.122]
HAnimJoint228.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint228.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.DEF = "Joe_l_forefoot"
HAnimSegment229.name = "l_forefoot"
Transform230 = x3d.Transform()
Transform230.translation = [0.115,0.02,0.13]
Shape231 = x3d.Shape()
Shape231.USE = "jointbox"

Transform230.children.append(Shape231)

HAnimSegment229.children.append(Transform230)
Shape232 = x3d.Shape()
Appearance233 = x3d.Appearance()
Appearance233.USE = "SegmentLine"

Shape232.appearance = Appearance233
IndexedLineSet234 = x3d.IndexedLineSet()
IndexedLineSet234.coordIndex = [0,1,-1]
Coordinate235 = x3d.Coordinate()
Coordinate235.point = [(0.115, 0.02, 0.122),(0.132, 0.013, 0.19)]

IndexedLineSet234.coord = Coordinate235

Shape232.geometry = IndexedLineSet234

HAnimSegment229.children.append(Shape232)
Transform236 = x3d.Transform()
Transform236.translation = [0.115,0.04,0.13]
Shape237 = x3d.Shape()
Shape237.USE = "skinsphere"

Transform236.children.append(Shape237)

HAnimSegment229.children.append(Transform236)
Transform238 = x3d.Transform()
Transform238.translation = [0.125,0,0.12]
Shape239 = x3d.Shape()
Shape239.USE = "skinsphere"

Transform238.children.append(Shape239)

HAnimSegment229.children.append(Transform238)
Transform240 = x3d.Transform()
Transform240.translation = [0.165,0,0.12]
Shape241 = x3d.Shape()
Shape241.USE = "skinsphere"

Transform240.children.append(Shape241)

HAnimSegment229.children.append(Transform240)
Transform242 = x3d.Transform()
Transform242.translation = [0.087,0,0.122]
Shape243 = x3d.Shape()
Shape243.USE = "skinsphere"

Transform242.children.append(Shape243)

HAnimSegment229.children.append(Transform242)
Transform244 = x3d.Transform()
Transform244.translation = [0.09,0.012,0.188]
Shape245 = x3d.Shape()
Shape245.USE = "skinsphere"

Transform244.children.append(Shape245)

HAnimSegment229.children.append(Transform244)
Transform246 = x3d.Transform()
Transform246.translation = [0.11,0.011,0.19]
Shape247 = x3d.Shape()
Shape247.USE = "skinsphere"

Transform246.children.append(Shape247)

HAnimSegment229.children.append(Transform246)
Transform248 = x3d.Transform()
Transform248.translation = [0.128,0.011,0.185]
Shape249 = x3d.Shape()
Shape249.USE = "skinsphere"

Transform248.children.append(Shape249)

HAnimSegment229.children.append(Transform248)
Transform250 = x3d.Transform()
Transform250.translation = [0.142,0.011,0.178]
Shape251 = x3d.Shape()
Shape251.USE = "skinsphere"

Transform250.children.append(Shape251)

HAnimSegment229.children.append(Transform250)
Transform252 = x3d.Transform()
Transform252.translation = [0.154,0.01,0.168]
Shape253 = x3d.Shape()
Shape253.USE = "skinsphere"

Transform252.children.append(Shape253)

HAnimSegment229.children.append(Transform252)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.DEF = "Joe_l_metatarsal_pha5"
HAnimSite254.name = "l_metatarsal_pha5"
HAnimSite254.translation = [0.165,0.01,0.12]
Shape255 = x3d.Shape()
Shape255.USE = "sitebox"

HAnimSite254.children.append(Shape255)

HAnimSegment229.children.append(HAnimSite254)
HAnimSite256 = x3d.HAnimSite()
HAnimSite256.DEF = "Joe_l_digit2"
HAnimSite256.name = "l_digit2"
HAnimSite256.translation = [0.11,0.011,0.19]
Shape257 = x3d.Shape()
Shape257.USE = "sitebox"

HAnimSite256.children.append(Shape257)

HAnimSegment229.children.append(HAnimSite256)

HAnimJoint228.children.append(HAnimSegment229)

HAnimJoint210.children.append(HAnimJoint228)

HAnimJoint196.children.append(HAnimJoint210)

HAnimJoint176.children.append(HAnimJoint196)

HAnimJoint148.children.append(HAnimJoint176)

HAnimJoint122.children.append(HAnimJoint148)

HAnimJoint92.children.append(HAnimJoint122)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.DEF = "Joe_r_hip"
HAnimJoint258.name = "r_hip"
HAnimJoint258.rotation = [0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696]
HAnimJoint258.center = [-0.1,0.92,0]
HAnimJoint258.skinCoordIndex = [91,92,98,99,100,101]
HAnimJoint258.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.DEF = "Joe_r_thigh"
HAnimSegment259.name = "r_thigh"
Transform260 = x3d.Transform()
Transform260.translation = [-0.1,0.92,0]
Shape261 = x3d.Shape()
Shape261.USE = "jointbox"

Transform260.children.append(Shape261)

HAnimSegment259.children.append(Transform260)
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Appearance263.USE = "SegmentLine"

Shape262.appearance = Appearance263
IndexedLineSet264 = x3d.IndexedLineSet()
IndexedLineSet264.coordIndex = [0,1,-1]
Coordinate265 = x3d.Coordinate()
Coordinate265.point = [(-0.1, 0.92, 0),(-0.1, 0.4913, 0)]

IndexedLineSet264.coord = Coordinate265

Shape262.geometry = IndexedLineSet264

HAnimSegment259.children.append(Shape262)
Transform266 = x3d.Transform()
Transform266.translation = [-0.079,0.92,-0.14]
Shape267 = x3d.Shape()
Shape267.USE = "skinsphere"

Transform266.children.append(Shape267)

HAnimSegment259.children.append(Transform266)
Transform268 = x3d.Transform()
Transform268.translation = [-0.1,0.9,0.075]
Shape269 = x3d.Shape()
Shape269.USE = "skinsphere"

Transform268.children.append(Shape269)

HAnimSegment259.children.append(Transform268)
Transform270 = x3d.Transform()
Transform270.translation = [-0.171,0.65,0]
Shape271 = x3d.Shape()
Shape271.USE = "skinsphere"

Transform270.children.append(Shape271)

HAnimSegment259.children.append(Transform270)
Transform272 = x3d.Transform()
Transform272.translation = [-0.02,0.65,0]
Shape273 = x3d.Shape()
Shape273.USE = "skinsphere"

Transform272.children.append(Shape273)

HAnimSegment259.children.append(Transform272)
Transform274 = x3d.Transform()
Transform274.translation = [-0.1,0.65,-0.08]
Shape275 = x3d.Shape()
Shape275.USE = "skinsphere"

Transform274.children.append(Shape275)

HAnimSegment259.children.append(Transform274)
Transform276 = x3d.Transform()
Transform276.translation = [-0.1,0.65,0.07]
Shape277 = x3d.Shape()
Shape277.USE = "skinsphere"

Transform276.children.append(Shape277)

HAnimSegment259.children.append(Transform276)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.DEF = "Joe_r_knee_crease"
HAnimSite278.name = "r_knee_crease"
HAnimSite278.translation = [-0.115,0.466,-0.055]
Shape279 = x3d.Shape()
Shape279.USE = "sitebox"

HAnimSite278.children.append(Shape279)

HAnimSegment259.children.append(HAnimSite278)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.DEF = "Joe_r_femoral_lateral_epicn"
HAnimSite280.name = "r_femoral_lateral_epicn"
HAnimSite280.translation = [-0.17,0.466,0]
Shape281 = x3d.Shape()
Shape281.USE = "sitebox"

HAnimSite280.children.append(Shape281)

HAnimSegment259.children.append(HAnimSite280)
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.DEF = "Joe_r_femoral_medial_epicn"
HAnimSite282.name = "r_femoral_medial_epicn"
HAnimSite282.translation = [-0.05,0.466,0]
Shape283 = x3d.Shape()
Shape283.USE = "sitebox"

HAnimSite282.children.append(Shape283)

HAnimSegment259.children.append(HAnimSite282)

HAnimJoint258.children.append(HAnimSegment259)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.DEF = "Joe_r_knee"
HAnimJoint284.name = "r_knee"
HAnimJoint284.rotation = [0.999999999999952,0,0,0.086543259681602]
HAnimJoint284.center = [-0.05,0.466,0]
HAnimJoint284.skinCoordIndex = [362,363,364,365,366,367,368,369]
HAnimJoint284.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment285 = x3d.HAnimSegment()
HAnimSegment285.DEF = "Joe_r_calf"
HAnimSegment285.name = "r_calf"
Transform286 = x3d.Transform()
Transform286.translation = [-0.1,0.4913,0]
Shape287 = x3d.Shape()
Shape287.USE = "jointbox"

Transform286.children.append(Shape287)

HAnimSegment285.children.append(Transform286)
Shape288 = x3d.Shape()
Appearance289 = x3d.Appearance()
Appearance289.USE = "SegmentLine"

Shape288.appearance = Appearance289
IndexedLineSet290 = x3d.IndexedLineSet()
IndexedLineSet290.coordIndex = [0,1,-1]
Coordinate291 = x3d.Coordinate()
Coordinate291.point = [(-0.1, 0.4913, 0),(-0.1, 0.0712, 0)]

IndexedLineSet290.coord = Coordinate291

Shape288.geometry = IndexedLineSet290

HAnimSegment285.children.append(Shape288)
Transform292 = x3d.Transform()
Transform292.translation = [-0.115,0.466,0.06]
Shape293 = x3d.Shape()
Shape293.USE = "skinsphere"

Transform292.children.append(Shape293)

HAnimSegment285.children.append(Transform292)
Transform294 = x3d.Transform()
Transform294.translation = [-0.115,0.466,-0.055]
Shape295 = x3d.Shape()
Shape295.USE = "skinsphere"

Transform294.children.append(Shape295)

HAnimSegment285.children.append(Transform294)
Transform296 = x3d.Transform()
Transform296.translation = [-0.17,0.466,0]
Shape297 = x3d.Shape()
Shape297.USE = "skinsphere"

Transform296.children.append(Shape297)

HAnimSegment285.children.append(Transform296)
Transform298 = x3d.Transform()
Transform298.translation = [-0.05,0.466,0]
Shape299 = x3d.Shape()
Shape299.USE = "skinsphere"

Transform298.children.append(Shape299)

HAnimSegment285.children.append(Transform298)
Transform300 = x3d.Transform()
Transform300.translation = [-0.17,0.3,0]
Shape301 = x3d.Shape()
Shape301.USE = "skinsphere"

Transform300.children.append(Shape301)

HAnimSegment285.children.append(Transform300)
Transform302 = x3d.Transform()
Transform302.translation = [-0.06,0.3,0]
Shape303 = x3d.Shape()
Shape303.USE = "skinsphere"

Transform302.children.append(Shape303)

HAnimSegment285.children.append(Transform302)
Transform304 = x3d.Transform()
Transform304.translation = [-0.1,0.3,-0.05]
Shape305 = x3d.Shape()
Shape305.USE = "skinsphere"

Transform304.children.append(Shape305)

HAnimSegment285.children.append(Transform304)
Transform306 = x3d.Transform()
Transform306.translation = [-0.1,0.3,0.05]
Shape307 = x3d.Shape()
Shape307.USE = "skinsphere"

Transform306.children.append(Shape307)

HAnimSegment285.children.append(Transform306)
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.DEF = "Joe_r_lateral_malleolus"
HAnimSite308.name = "r_lateral_malleolus"
HAnimSite308.translation = [-0.15,0.07,0]
Shape309 = x3d.Shape()
Shape309.USE = "sitebox"

HAnimSite308.children.append(Shape309)

HAnimSegment285.children.append(HAnimSite308)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.DEF = "Joe_r_medial_malleolus"
HAnimSite310.name = "r_medial_malleolus"
HAnimSite310.translation = [-0.085,0.086,0.0125]
Shape311 = x3d.Shape()
Shape311.USE = "sitebox"

HAnimSite310.children.append(Shape311)

HAnimSegment285.children.append(HAnimSite310)

HAnimJoint284.children.append(HAnimSegment285)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.DEF = "Joe_r_ankle"
HAnimJoint312.name = "r_ankle"
HAnimJoint312.rotation = [-1.00000000000001,0,0,0.337435958789841]
HAnimJoint312.center = [-0.115,0.069,0]
HAnimJoint312.skinCoordIndex = [370,371,372,373]
HAnimJoint312.skinCoordWeight = [1,1,1,1]
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.DEF = "Joe_r_hindfoot"
HAnimSegment313.name = "r_hindfoot"
Transform314 = x3d.Transform()
Transform314.translation = [-0.1,0.0712,0]
Shape315 = x3d.Shape()
Shape315.USE = "jointbox"

Transform314.children.append(Shape315)

HAnimSegment313.children.append(Transform314)
Shape316 = x3d.Shape()
Appearance317 = x3d.Appearance()
Appearance317.USE = "SegmentLine"

Shape316.appearance = Appearance317
IndexedLineSet318 = x3d.IndexedLineSet()
IndexedLineSet318.coordIndex = [0,1,-1]
Coordinate319 = x3d.Coordinate()
Coordinate319.point = [(-0.1, 0.0712, 0),(-0.1, 0.015, -0.01)]

IndexedLineSet318.coord = Coordinate319

Shape316.geometry = IndexedLineSet318

HAnimSegment313.children.append(Shape316)
Transform320 = x3d.Transform()
Transform320.translation = [-0.15,0.07,0]
Shape321 = x3d.Shape()
Shape321.USE = "skinsphere"

Transform320.children.append(Shape321)

HAnimSegment313.children.append(Transform320)
Transform322 = x3d.Transform()
Transform322.translation = [-0.085,0.086,0.0125]
Shape323 = x3d.Shape()
Shape323.USE = "skinsphere"

Transform322.children.append(Shape323)

HAnimSegment313.children.append(Transform322)
Transform324 = x3d.Transform()
Transform324.translation = [-0.115,0.069,-0.045]
Shape325 = x3d.Shape()
Shape325.USE = "skinsphere"

Transform324.children.append(Shape325)

HAnimSegment313.children.append(Transform324)
Transform326 = x3d.Transform()
Transform326.translation = [-0.117,0.0975,0.0615]
Shape327 = x3d.Shape()
Shape327.USE = "skinsphere"

Transform326.children.append(Shape327)

HAnimSegment313.children.append(Transform326)
HAnimSite328 = x3d.HAnimSite()
HAnimSite328.DEF = "Joe_r_sphyrion"
HAnimSite328.name = "r_sphyrion"
HAnimSite328.translation = [-0.09,0.056,0.0125]
Shape329 = x3d.Shape()
Shape329.USE = "sitebox"

HAnimSite328.children.append(Shape329)

HAnimSegment313.children.append(HAnimSite328)
HAnimSite330 = x3d.HAnimSite()
HAnimSite330.DEF = "Joe_r_calcaneous_post"
HAnimSite330.name = "r_calcaneous_post"
HAnimSite330.translation = [-0.115,0.04,-0.055]
Shape331 = x3d.Shape()
Shape331.USE = "sitebox"

HAnimSite330.children.append(Shape331)

HAnimSegment313.children.append(HAnimSite330)

HAnimJoint312.children.append(HAnimSegment313)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.DEF = "Joe_r_subtalar"
HAnimJoint332.name = "r_subtalar"
HAnimJoint332.rotation = [1.00000000000014,0,0,0.0816433505734676]
HAnimJoint332.center = [-0.1,0.015,-0.01]
HAnimJoint332.skinCoordIndex = [374,375,376]
HAnimJoint332.skinCoordWeight = [1,1,1]
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.DEF = "Joe_r_midproximal"
HAnimSegment333.name = "r_midproximal"
Transform334 = x3d.Transform()
Transform334.translation = [-0.1,0.015,-0.01]
Shape335 = x3d.Shape()
Shape335.USE = "jointbox"

Transform334.children.append(Shape335)

HAnimSegment333.children.append(Transform334)
Shape336 = x3d.Shape()
Appearance337 = x3d.Appearance()
Appearance337.USE = "SegmentLine"

Shape336.appearance = Appearance337
IndexedLineSet338 = x3d.IndexedLineSet()
IndexedLineSet338.coordIndex = [0,1,-1]
Coordinate339 = x3d.Coordinate()
Coordinate339.point = [(-0.1, 0.015, -0.01),(-0.1, 0.02, 0.07)]

IndexedLineSet338.coord = Coordinate339

Shape336.geometry = IndexedLineSet338

HAnimSegment333.children.append(Shape336)
Transform340 = x3d.Transform()
Transform340.translation = [-0.1375,0.006,-0.03]
Shape341 = x3d.Shape()
Shape341.USE = "skinsphere"

Transform340.children.append(Shape341)

HAnimSegment333.children.append(Transform340)
Transform342 = x3d.Transform()
Transform342.translation = [-0.095,0.006,-0.03]
Shape343 = x3d.Shape()
Shape343.USE = "skinsphere"

Transform342.children.append(Shape343)

HAnimSegment333.children.append(Transform342)
Transform344 = x3d.Transform()
Transform344.translation = [-0.095,0.006,-0.03]
Shape345 = x3d.Shape()
Shape345.USE = "skinsphere"

Transform344.children.append(Shape345)

HAnimSegment333.children.append(Transform344)

HAnimJoint332.children.append(HAnimSegment333)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.DEF = "Joe_r_midtarsal"
HAnimJoint346.name = "r_midtarsal"
HAnimJoint346.rotation = [-1.00000000000001,0,0,0.14271113543743]
HAnimJoint346.center = [-0.115,0.037,0.09]
HAnimJoint346.skinCoordIndex = [377,378,379,380]
HAnimJoint346.skinCoordWeight = [1,1,1,1]
HAnimSegment347 = x3d.HAnimSegment()
HAnimSegment347.DEF = "Joe_r_middistal"
HAnimSegment347.name = "r_middistal"
Transform348 = x3d.Transform()
Transform348.translation = [-0.1,0.02,0.07]
Shape349 = x3d.Shape()
Shape349.USE = "jointbox"

Transform348.children.append(Shape349)

HAnimSegment347.children.append(Transform348)
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Appearance351.USE = "SegmentLine"

Shape350.appearance = Appearance351
IndexedLineSet352 = x3d.IndexedLineSet()
IndexedLineSet352.coordIndex = [0,1,-1]
Coordinate353 = x3d.Coordinate()
Coordinate353.point = [(-0.1, 0.02, 0.07),(-0.1, 0.01, 0.14)]

IndexedLineSet352.coord = Coordinate353

Shape350.geometry = IndexedLineSet352

HAnimSegment347.children.append(Shape350)
Transform354 = x3d.Transform()
Transform354.translation = [-0.115,0.06,0.1]
Shape355 = x3d.Shape()
Shape355.USE = "skinsphere"

Transform354.children.append(Shape355)

HAnimSegment347.children.append(Transform354)
Transform356 = x3d.Transform()
Transform356.translation = [-0.115,0,0.07]
Shape357 = x3d.Shape()
Shape357.USE = "skinsphere"

Transform356.children.append(Shape357)

HAnimSegment347.children.append(Transform356)
Transform358 = x3d.Transform()
Transform358.translation = [-0.165,0,0.07]
Shape359 = x3d.Shape()
Shape359.USE = "skinsphere"

Transform358.children.append(Shape359)

HAnimSegment347.children.append(Transform358)
Transform360 = x3d.Transform()
Transform360.translation = [-0.165,0,0.07]
Shape361 = x3d.Shape()
Shape361.USE = "skinsphere"

Transform360.children.append(Shape361)

HAnimSegment347.children.append(Transform360)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.DEF = "Joe_r_metatarsal_pha1"
HAnimSite362.name = "r_metatarsal_pha1"
HAnimSite362.translation = [-0.115,0.02,0.122]
Shape363 = x3d.Shape()
Shape363.USE = "sitebox"

HAnimSite362.children.append(Shape363)

HAnimSegment347.children.append(HAnimSite362)

HAnimJoint346.children.append(HAnimSegment347)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.DEF = "Joe_r_metatarsal"
HAnimJoint364.name = "r_metatarsal"
HAnimJoint364.rotation = [-1.00000000000001,0,0,0.264860122523209]
HAnimJoint364.center = [-0.1,0.01,0.14]
HAnimJoint364.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint364.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.DEF = "Joe_r_forefoot"
HAnimSegment365.name = "r_forefoot"
Transform366 = x3d.Transform()
Transform366.translation = [-0.1086,0.01,0.14]
Shape367 = x3d.Shape()
Shape367.USE = "jointbox"

Transform366.children.append(Shape367)

HAnimSegment365.children.append(Transform366)
Shape368 = x3d.Shape()
Appearance369 = x3d.Appearance()
Appearance369.USE = "SegmentLine"

Shape368.appearance = Appearance369
IndexedLineSet370 = x3d.IndexedLineSet()
IndexedLineSet370.coordIndex = [0,1,-1]
Coordinate371 = x3d.Coordinate()
Coordinate371.point = [(-0.1, 0.01, 0.14),(-0.1043, 0.0016, 0.2)]

IndexedLineSet370.coord = Coordinate371

Shape368.geometry = IndexedLineSet370

HAnimSegment365.children.append(Shape368)
Transform372 = x3d.Transform()
Transform372.translation = [-0.115,0.04,0.13]
Shape373 = x3d.Shape()
Shape373.USE = "skinsphere"

Transform372.children.append(Shape373)

HAnimSegment365.children.append(Transform372)
Transform374 = x3d.Transform()
Transform374.translation = [-0.125,0,0.12]
Shape375 = x3d.Shape()
Shape375.USE = "skinsphere"

Transform374.children.append(Shape375)

HAnimSegment365.children.append(Transform374)
Transform376 = x3d.Transform()
Transform376.translation = [-0.165,0,0.12]
Shape377 = x3d.Shape()
Shape377.USE = "skinsphere"

Transform376.children.append(Shape377)

HAnimSegment365.children.append(Transform376)
Transform378 = x3d.Transform()
Transform378.translation = [-0.087,0,0.122]
Shape379 = x3d.Shape()
Shape379.USE = "skinsphere"

Transform378.children.append(Shape379)

HAnimSegment365.children.append(Transform378)
Transform380 = x3d.Transform()
Transform380.translation = [-0.09,0.012,0.188]
Shape381 = x3d.Shape()
Shape381.USE = "skinsphere"

Transform380.children.append(Shape381)

HAnimSegment365.children.append(Transform380)
Transform382 = x3d.Transform()
Transform382.translation = [-0.11,0.011,0.19]
Shape383 = x3d.Shape()
Shape383.USE = "skinsphere"

Transform382.children.append(Shape383)

HAnimSegment365.children.append(Transform382)
Transform384 = x3d.Transform()
Transform384.translation = [-0.128,0.011,0.185]
Shape385 = x3d.Shape()
Shape385.USE = "skinsphere"

Transform384.children.append(Shape385)

HAnimSegment365.children.append(Transform384)
Transform386 = x3d.Transform()
Transform386.translation = [-0.142,0.011,0.178]
Shape387 = x3d.Shape()
Shape387.USE = "skinsphere"

Transform386.children.append(Shape387)

HAnimSegment365.children.append(Transform386)
Transform388 = x3d.Transform()
Transform388.translation = [-0.154,0.01,0.168]
Shape389 = x3d.Shape()
Shape389.USE = "skinsphere"

Transform388.children.append(Shape389)

HAnimSegment365.children.append(Transform388)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.DEF = "Joe_r_metatarsal_pha5"
HAnimSite390.name = "r_metatarsal_pha5"
HAnimSite390.translation = [-0.165,0.01,0.12]
Shape391 = x3d.Shape()
Shape391.USE = "sitebox"

HAnimSite390.children.append(Shape391)

HAnimSegment365.children.append(HAnimSite390)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.DEF = "Joe_r_digit2"
HAnimSite392.name = "r_digit2"
HAnimSite392.translation = [-0.11,0.011,0.19]
Shape393 = x3d.Shape()
Shape393.USE = "sitebox"

HAnimSite392.children.append(Shape393)

HAnimSegment365.children.append(HAnimSite392)

HAnimJoint364.children.append(HAnimSegment365)

HAnimJoint346.children.append(HAnimJoint364)

HAnimJoint332.children.append(HAnimJoint346)

HAnimJoint312.children.append(HAnimJoint332)

HAnimJoint284.children.append(HAnimJoint312)

HAnimJoint258.children.append(HAnimJoint284)

HAnimJoint92.children.append(HAnimJoint258)

HAnimJoint80.children.append(HAnimJoint92)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.DEF = "Joe_vl5"
HAnimJoint394.name = "vl5"
HAnimJoint394.rotation = [-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253]
HAnimJoint394.center = [0,1.045,-0.095]
HAnimJoint394.skinCoordIndex = [28,76]
HAnimJoint394.skinCoordWeight = [1,1]
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.DEF = "Joe_toPelvisMarker"
HAnimSegment395.name = "toPelvis"
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Appearance397.USE = "SegmentLine"

Shape396.appearance = Appearance397
IndexedLineSet398 = x3d.IndexedLineSet()
IndexedLineSet398.coordIndex = [0,1,-1]
Coordinate399 = x3d.Coordinate()
Coordinate399.point = [(0, 1.045, -0.095),(0, 0.9149, 0.0016)]

IndexedLineSet398.coord = Coordinate399

Shape396.geometry = IndexedLineSet398

HAnimSegment395.children.append(Shape396)

HAnimJoint394.children.append(HAnimSegment395)
HAnimSegment400 = x3d.HAnimSegment()
HAnimSegment400.DEF = "Joe_l5"
HAnimSegment400.name = "l5"
Shape401 = x3d.Shape()
Appearance402 = x3d.Appearance()
Appearance402.USE = "SegmentLine"

Shape401.appearance = Appearance402
IndexedLineSet403 = x3d.IndexedLineSet()
IndexedLineSet403.coordIndex = [0,1,-1]
Coordinate404 = x3d.Coordinate()
Coordinate404.point = [(0, 1.045, -0.095),(0, 1.068, -0.085)]

IndexedLineSet403.coord = Coordinate404

Shape401.geometry = IndexedLineSet403

HAnimSegment400.children.append(Shape401)
HAnimSite405 = x3d.HAnimSite()
HAnimSite405.DEF = "Joe_waist_preferred_post"
HAnimSite405.name = "waist_preferred_post"
HAnimSite405.translation = [0,1.0915,-0.1091]
Shape406 = x3d.Shape()
Shape406.USE = "sitebox"

HAnimSite405.children.append(Shape406)

HAnimSegment400.children.append(HAnimSite405)
HAnimSite407 = x3d.HAnimSite()
HAnimSite407.DEF = "Joe_navel"
HAnimSite407.name = "navel"
HAnimSite407.translation = [0,1.07225,0.09]
Shape408 = x3d.Shape()
Shape408.USE = "sitebox"

HAnimSite407.children.append(Shape408)

HAnimSegment400.children.append(HAnimSite407)

HAnimJoint394.children.append(HAnimSegment400)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.DEF = "Joe_vl4"
HAnimJoint409.name = "vl4"
HAnimJoint409.center = [0,1.068,-0.085]
HAnimSegment410 = x3d.HAnimSegment()
HAnimSegment410.DEF = "Joe_l4"
HAnimSegment410.name = "l4"
Shape411 = x3d.Shape()
Appearance412 = x3d.Appearance()
Appearance412.USE = "SegmentLine"

Shape411.appearance = Appearance412
IndexedLineSet413 = x3d.IndexedLineSet()
IndexedLineSet413.coordIndex = [0,1,-1]
Coordinate414 = x3d.Coordinate()
Coordinate414.point = [(0, 1.068, -0.085),(0, 1.092, -0.0725)]

IndexedLineSet413.coord = Coordinate414

Shape411.geometry = IndexedLineSet413

HAnimSegment410.children.append(Shape411)
Transform415 = x3d.Transform()
Transform415.translation = [0,1.068,-0.085]
Shape416 = x3d.Shape()
Shape416.USE = "jointbox"

Transform415.children.append(Shape416)

HAnimSegment410.children.append(Transform415)

HAnimJoint409.children.append(HAnimSegment410)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.DEF = "Joe_vl3"
HAnimJoint417.name = "vl3"
HAnimJoint417.center = [0,1.092,-0.0725]
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.DEF = "Joe_l3"
HAnimSegment418.name = "l3"
Shape419 = x3d.Shape()
Appearance420 = x3d.Appearance()
Appearance420.USE = "SegmentLine"

Shape419.appearance = Appearance420
IndexedLineSet421 = x3d.IndexedLineSet()
IndexedLineSet421.coordIndex = [0,1,-1]
Coordinate422 = x3d.Coordinate()
Coordinate422.point = [(0, 1.092, -0.0725),(0, 1.12, -0.065)]

IndexedLineSet421.coord = Coordinate422

Shape419.geometry = IndexedLineSet421

HAnimSegment418.children.append(Shape419)
Transform423 = x3d.Transform()
Transform423.translation = [0,1.092,-0.0725]
Shape424 = x3d.Shape()
Shape424.USE = "jointbox"

Transform423.children.append(Shape424)

HAnimSegment418.children.append(Transform423)

HAnimJoint417.children.append(HAnimSegment418)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.DEF = "Joe_vl2"
HAnimJoint425.name = "vl2"
HAnimJoint425.center = [0,1.12,-0.065]
HAnimJoint425.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint425.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.DEF = "Joe_l2"
HAnimSegment426.name = "l2"
Shape427 = x3d.Shape()
Appearance428 = x3d.Appearance()
Appearance428.USE = "SegmentLine"

Shape427.appearance = Appearance428
IndexedLineSet429 = x3d.IndexedLineSet()
IndexedLineSet429.coordIndex = [0,1,-1]
Coordinate430 = x3d.Coordinate()
Coordinate430.point = [(0, 1.12, -0.065),(0, 1.1459, -0.0625)]

IndexedLineSet429.coord = Coordinate430

Shape427.geometry = IndexedLineSet429

HAnimSegment426.children.append(Shape427)
Transform431 = x3d.Transform()
Transform431.translation = [0,1.12,-0.065]
Shape432 = x3d.Shape()
Shape432.USE = "jointbox"

Transform431.children.append(Shape432)

HAnimSegment426.children.append(Transform431)
Transform433 = x3d.Transform()
Transform433.translation = [-0.087,1.19,-0.09]
Shape434 = x3d.Shape()
Shape434.USE = "skinsphere"

Transform433.children.append(Shape434)

HAnimSegment426.children.append(Transform433)
Transform435 = x3d.Transform()
Transform435.translation = [0.087,1.19,-0.09]
Shape436 = x3d.Shape()
Shape436.USE = "skinsphere"

Transform435.children.append(Shape436)

HAnimSegment426.children.append(Transform435)
Transform437 = x3d.Transform()
Transform437.translation = [0.172,1.32,-0.03]
Shape438 = x3d.Shape()
Shape438.USE = "skinsphere"

Transform437.children.append(Shape438)

HAnimSegment426.children.append(Transform437)
Transform439 = x3d.Transform()
Transform439.translation = [-0.172,1.32,-0.03]
Shape440 = x3d.Shape()
Shape440.USE = "skinsphere"

Transform439.children.append(Shape440)

HAnimSegment426.children.append(Transform439)
Transform441 = x3d.Transform()
Transform441.translation = [0.15,1.23,-0.015]
Shape442 = x3d.Shape()
Shape442.USE = "skinsphere"

Transform441.children.append(Shape442)

HAnimSegment426.children.append(Transform441)
Transform443 = x3d.Transform()
Transform443.translation = [-0.15,1.23,-0.015]
Shape444 = x3d.Shape()
Shape444.USE = "skinsphere"

Transform443.children.append(Shape444)

HAnimSegment426.children.append(Transform443)
HAnimSite445 = x3d.HAnimSite()
HAnimSite445.DEF = "Joe_r_rib10"
HAnimSite445.name = "r_rib10"
HAnimSite445.translation = [-0.087,1.19,0.09]
Shape446 = x3d.Shape()
Shape446.USE = "sitebox"

HAnimSite445.children.append(Shape446)

HAnimSegment426.children.append(HAnimSite445)
HAnimSite447 = x3d.HAnimSite()
HAnimSite447.DEF = "Joe_l_rib10"
HAnimSite447.name = "l_rib10"
HAnimSite447.translation = [0.087,1.19,0.09]
Shape448 = x3d.Shape()
Shape448.USE = "sitebox"

HAnimSite447.children.append(Shape448)

HAnimSegment426.children.append(HAnimSite447)
HAnimSite449 = x3d.HAnimSite()
HAnimSite449.DEF = "Joe_rib10_midspine"
HAnimSite449.name = "rib10_midspine"
HAnimSite449.translation = [0,1.1908,-0.1113]
Shape450 = x3d.Shape()
Shape450.USE = "sitebox"

HAnimSite449.children.append(Shape450)

HAnimSegment426.children.append(HAnimSite449)

HAnimJoint425.children.append(HAnimSegment426)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.DEF = "Joe_vl1"
HAnimJoint451.name = "vl1"
HAnimJoint451.center = [0,1.1459,-0.0625]
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.DEF = "Joe_l1"
HAnimSegment452.name = "l1"
Shape453 = x3d.Shape()
Appearance454 = x3d.Appearance()
Appearance454.USE = "SegmentLine"

Shape453.appearance = Appearance454
IndexedLineSet455 = x3d.IndexedLineSet()
IndexedLineSet455.coordIndex = [0,1,-1]
Coordinate456 = x3d.Coordinate()
Coordinate456.point = [(0, 1.1459, -0.0625),(0, 1.179, -0.068)]

IndexedLineSet455.coord = Coordinate456

Shape453.geometry = IndexedLineSet455

HAnimSegment452.children.append(Shape453)
Transform457 = x3d.Transform()
Transform457.translation = [0,1.1459,-0.0625]
Shape458 = x3d.Shape()
Shape458.USE = "jointbox"

Transform457.children.append(Shape458)

HAnimSegment452.children.append(Transform457)

HAnimJoint451.children.append(HAnimSegment452)
HAnimJoint459 = x3d.HAnimJoint()
HAnimJoint459.DEF = "Joe_vt12"
HAnimJoint459.name = "vt12"
HAnimJoint459.center = [0,1.179,-0.068]
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.DEF = "Joe_t12"
HAnimSegment460.name = "t12"
Shape461 = x3d.Shape()
Appearance462 = x3d.Appearance()
Appearance462.USE = "SegmentLine"

Shape461.appearance = Appearance462
IndexedLineSet463 = x3d.IndexedLineSet()
IndexedLineSet463.coordIndex = [0,1,-1]
Coordinate464 = x3d.Coordinate()
Coordinate464.point = [(0, 1.179, -0.068),(0, 1.242, -0.09)]

IndexedLineSet463.coord = Coordinate464

Shape461.geometry = IndexedLineSet463

HAnimSegment460.children.append(Shape461)
Transform465 = x3d.Transform()
Transform465.translation = [0,1.179,-0.068]
Shape466 = x3d.Shape()
Shape466.USE = "jointbox"

Transform465.children.append(Shape466)

HAnimSegment460.children.append(Transform465)

HAnimJoint459.children.append(HAnimSegment460)
HAnimJoint467 = x3d.HAnimJoint()
HAnimJoint467.DEF = "Joe_vt11"
HAnimJoint467.name = "vt11"
HAnimJoint467.center = [0,1.2679,-0.081]
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.DEF = "Joe_t11"
HAnimSegment468.name = "t11"
Shape469 = x3d.Shape()
Appearance470 = x3d.Appearance()
Appearance470.USE = "SegmentLine"

Shape469.appearance = Appearance470
IndexedLineSet471 = x3d.IndexedLineSet()
IndexedLineSet471.coordIndex = [0,1,-1]
Coordinate472 = x3d.Coordinate()
Coordinate472.point = [(0, 1.2145, -0.0755),(0, 1.242, -0.09)]

IndexedLineSet471.coord = Coordinate472

Shape469.geometry = IndexedLineSet471

HAnimSegment468.children.append(Shape469)
Transform473 = x3d.Transform()
Transform473.translation = [0,1.2145,-0.0755]
Shape474 = x3d.Shape()
Shape474.USE = "jointbox"

Transform473.children.append(Shape474)

HAnimSegment468.children.append(Transform473)

HAnimJoint467.children.append(HAnimSegment468)
HAnimJoint475 = x3d.HAnimJoint()
HAnimJoint475.DEF = "Joe_vt10"
HAnimJoint475.name = "vt10"
HAnimJoint475.center = [0,1.242,-0.09]
HAnimJoint475.skinCoordIndex = [15]
HAnimJoint475.skinCoordWeight = [1]
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.DEF = "Joe_t10"
HAnimSegment476.name = "t10"
Shape477 = x3d.Shape()
Appearance478 = x3d.Appearance()
Appearance478.USE = "SegmentLine"

Shape477.appearance = Appearance478
IndexedLineSet479 = x3d.IndexedLineSet()
IndexedLineSet479.coordIndex = [0,1,-1]
Coordinate480 = x3d.Coordinate()
Coordinate480.point = [(0, 1.242, -0.09),(0, 1.268, -0.1)]

IndexedLineSet479.coord = Coordinate480

Shape477.geometry = IndexedLineSet479

HAnimSegment476.children.append(Shape477)
Transform481 = x3d.Transform()
Transform481.translation = [0,1.242,-0.09]
Shape482 = x3d.Shape()
Shape482.USE = "jointbox"

Transform481.children.append(Shape482)

HAnimSegment476.children.append(Transform481)
HAnimSite483 = x3d.HAnimSite()
HAnimSite483.DEF = "Joe_substernale"
HAnimSite483.name = "substernale"
HAnimSite483.translation = [0,1.25,0.113]
Shape484 = x3d.Shape()
Shape484.USE = "sitebox"

HAnimSite483.children.append(Shape484)

HAnimSegment476.children.append(HAnimSite483)

HAnimJoint475.children.append(HAnimSegment476)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.DEF = "Joe_vt9"
HAnimJoint485.name = "vt9"
HAnimJoint485.center = [0,1.268,-0.1]
HAnimJoint485.skinCoordIndex = [13,14]
HAnimJoint485.skinCoordWeight = [1,1]
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.DEF = "Joe_t9"
HAnimSegment486.name = "t9"
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Appearance488.USE = "SegmentLine"

Shape487.appearance = Appearance488
IndexedLineSet489 = x3d.IndexedLineSet()
IndexedLineSet489.coordIndex = [0,1,-1]
Coordinate490 = x3d.Coordinate()
Coordinate490.point = [(0, 1.268, -0.1),(0, 1.294, -0.11)]

IndexedLineSet489.coord = Coordinate490

Shape487.geometry = IndexedLineSet489

HAnimSegment486.children.append(Shape487)
Transform491 = x3d.Transform()
Transform491.translation = [0,1.268,-0.1]
Shape492 = x3d.Shape()
Shape492.USE = "jointbox"

Transform491.children.append(Shape492)

HAnimSegment486.children.append(Transform491)
HAnimSite493 = x3d.HAnimSite()
HAnimSite493.DEF = "Joe_r_thelion"
HAnimSite493.name = "r_thelion"
HAnimSite493.translation = [-0.1135,1.318,0.095]
Shape494 = x3d.Shape()
Shape494.USE = "sitebox"

HAnimSite493.children.append(Shape494)

HAnimSegment486.children.append(HAnimSite493)
HAnimSite495 = x3d.HAnimSite()
HAnimSite495.DEF = "Joe_l_thelion"
HAnimSite495.name = "l_thelion"
HAnimSite495.translation = [0.1135,1.318,0.095]
Shape496 = x3d.Shape()
Shape496.USE = "sitebox"

HAnimSite495.children.append(Shape496)

HAnimSegment486.children.append(HAnimSite495)

HAnimJoint485.children.append(HAnimSegment486)
HAnimJoint497 = x3d.HAnimJoint()
HAnimJoint497.DEF = "Joe_vt8"
HAnimJoint497.name = "vt8"
HAnimJoint497.center = [0,1.294,-0.11]
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.DEF = "Joe_t8"
HAnimSegment498.name = "t8"
Shape499 = x3d.Shape()
Appearance500 = x3d.Appearance()
Appearance500.USE = "SegmentLine"

Shape499.appearance = Appearance500
IndexedLineSet501 = x3d.IndexedLineSet()
IndexedLineSet501.coordIndex = [0,1,-1]
Coordinate502 = x3d.Coordinate()
Coordinate502.point = [(0, 1.294, -0.11),(0, 1.352, -0.12)]

IndexedLineSet501.coord = Coordinate502

Shape499.geometry = IndexedLineSet501

HAnimSegment498.children.append(Shape499)
Transform503 = x3d.Transform()
Transform503.translation = [0,1.294,-0.11]
Shape504 = x3d.Shape()
Shape504.USE = "jointbox"

Transform503.children.append(Shape504)

HAnimSegment498.children.append(Transform503)

HAnimJoint497.children.append(HAnimSegment498)
HAnimJoint505 = x3d.HAnimJoint()
HAnimJoint505.DEF = "Joe_vt7"
HAnimJoint505.name = "vt7"
HAnimJoint505.center = [0,1.323,-0.1155]
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.DEF = "Joe_t7"
HAnimSegment506.name = "t7"
Shape507 = x3d.Shape()
Appearance508 = x3d.Appearance()
Appearance508.USE = "SegmentLine"

Shape507.appearance = Appearance508
IndexedLineSet509 = x3d.IndexedLineSet()
IndexedLineSet509.coordIndex = [0,1,-1]
Coordinate510 = x3d.Coordinate()
Coordinate510.point = [(0, 1.352, -0.12),(0, 1.381, -0.1235)]

IndexedLineSet509.coord = Coordinate510

Shape507.geometry = IndexedLineSet509

HAnimSegment506.children.append(Shape507)
Transform511 = x3d.Transform()
Transform511.translation = [0,1.323,-0.1155]
Shape512 = x3d.Shape()
Shape512.USE = "jointbox"

Transform511.children.append(Shape512)

HAnimSegment506.children.append(Transform511)

HAnimJoint505.children.append(HAnimSegment506)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.DEF = "Joe_vt6"
HAnimJoint513.name = "vt6"
HAnimJoint513.center = [0,1.352,-0.12]
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.DEF = "Joe_t6"
HAnimSegment514.name = "t6"
Shape515 = x3d.Shape()
Appearance516 = x3d.Appearance()
Appearance516.USE = "SegmentLine"

Shape515.appearance = Appearance516
IndexedLineSet517 = x3d.IndexedLineSet()
IndexedLineSet517.coordIndex = [0,1,-1]
Coordinate518 = x3d.Coordinate()
Coordinate518.point = [(0, 1.381, -0.1235),(0, 1.41, -0.1235)]

IndexedLineSet517.coord = Coordinate518

Shape515.geometry = IndexedLineSet517

HAnimSegment514.children.append(Shape515)
Transform519 = x3d.Transform()
Transform519.translation = [0,1.352,-0.12]
Shape520 = x3d.Shape()
Shape520.USE = "jointbox"

Transform519.children.append(Shape520)

HAnimSegment514.children.append(Transform519)

HAnimJoint513.children.append(HAnimSegment514)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.DEF = "Joe_vt5"
HAnimJoint521.name = "vt5"
HAnimJoint521.center = [0,1.381,-0.1235]
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.DEF = "Joe_t5"
HAnimSegment522.name = "t5"
Shape523 = x3d.Shape()
Appearance524 = x3d.Appearance()
Appearance524.USE = "SegmentLine"

Shape523.appearance = Appearance524
IndexedLineSet525 = x3d.IndexedLineSet()
IndexedLineSet525.coordIndex = [0,1,-1]
Coordinate526 = x3d.Coordinate()
Coordinate526.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet525.coord = Coordinate526

Shape523.geometry = IndexedLineSet525

HAnimSegment522.children.append(Shape523)
Transform527 = x3d.Transform()
Transform527.translation = [0,1.381,-0.1235]
Shape528 = x3d.Shape()
Shape528.USE = "jointbox"

Transform527.children.append(Shape528)

HAnimSegment522.children.append(Transform527)

HAnimJoint521.children.append(HAnimSegment522)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.DEF = "Joe_vt4"
HAnimJoint529.name = "vt4"
HAnimJoint529.center = [0,1.41,-0.1235]
HAnimJoint529.skinCoordIndex = [81]
HAnimJoint529.skinCoordWeight = [1]
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.DEF = "Joe_t4"
HAnimSegment530.name = "t4"
Shape531 = x3d.Shape()
Appearance532 = x3d.Appearance()
Appearance532.USE = "SegmentLine"

Shape531.appearance = Appearance532
IndexedLineSet533 = x3d.IndexedLineSet()
IndexedLineSet533.coordIndex = [0,1,-1]
Coordinate534 = x3d.Coordinate()
Coordinate534.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet533.coord = Coordinate534

Shape531.geometry = IndexedLineSet533

HAnimSegment530.children.append(Shape531)
Transform535 = x3d.Transform()
Transform535.translation = [0,1.41,-0.1235]
Shape536 = x3d.Shape()
Shape536.USE = "jointbox"

Transform535.children.append(Shape536)

HAnimSegment530.children.append(Transform535)
Transform537 = x3d.Transform()
Transform537.translation = [0,1.41,-0.145]
Shape538 = x3d.Shape()
Shape538.USE = "skinsphere"

Transform537.children.append(Shape538)

HAnimSegment530.children.append(Transform537)

HAnimJoint529.children.append(HAnimSegment530)
HAnimJoint539 = x3d.HAnimJoint()
HAnimJoint539.DEF = "Joe_vt3"
HAnimJoint539.name = "vt3"
HAnimJoint539.center = [0,1.438,-0.12]
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.DEF = "Joe_t3"
HAnimSegment540.name = "t3"
Shape541 = x3d.Shape()
Appearance542 = x3d.Appearance()
Appearance542.USE = "SegmentLine"

Shape541.appearance = Appearance542
IndexedLineSet543 = x3d.IndexedLineSet()
IndexedLineSet543.coordIndex = [0,1,-1]
Coordinate544 = x3d.Coordinate()
Coordinate544.point = [(0, 1.438, -0.12),(0, 1.468, -0.105)]

IndexedLineSet543.coord = Coordinate544

Shape541.geometry = IndexedLineSet543

HAnimSegment540.children.append(Shape541)
Transform545 = x3d.Transform()
Transform545.translation = [0,1.438,-0.12]
Shape546 = x3d.Shape()
Shape546.USE = "jointbox"

Transform545.children.append(Shape546)

HAnimSegment540.children.append(Transform545)

HAnimJoint539.children.append(HAnimSegment540)
HAnimJoint547 = x3d.HAnimJoint()
HAnimJoint547.DEF = "Joe_vt2"
HAnimJoint547.name = "vt2"
HAnimJoint547.center = [0,1.468,-0.105]
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.DEF = "Joe_t2"
HAnimSegment548.name = "t2"
Shape549 = x3d.Shape()
Appearance550 = x3d.Appearance()
Appearance550.USE = "SegmentLine"

Shape549.appearance = Appearance550
IndexedLineSet551 = x3d.IndexedLineSet()
IndexedLineSet551.coordIndex = [0,1,-1]
Coordinate552 = x3d.Coordinate()
Coordinate552.point = [(0, 1.468, -0.105),(0, 1.497, -0.09)]

IndexedLineSet551.coord = Coordinate552

Shape549.geometry = IndexedLineSet551

HAnimSegment548.children.append(Shape549)
Transform553 = x3d.Transform()
Transform553.translation = [0,1.468,-0.105]
Shape554 = x3d.Shape()
Shape554.USE = "jointbox"

Transform553.children.append(Shape554)

HAnimSegment548.children.append(Transform553)

HAnimJoint547.children.append(HAnimSegment548)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.DEF = "Joe_vt1"
HAnimJoint555.name = "vt1"
HAnimJoint555.center = [0,1.497,-0.09]
HAnimJoint555.skinCoordIndex = [11,24]
HAnimJoint555.skinCoordWeight = [1,1]
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.DEF = "Joe_t1"
HAnimSegment556.name = "t1"
Shape557 = x3d.Shape()
Appearance558 = x3d.Appearance()
Appearance558.USE = "SegmentLine"

Shape557.appearance = Appearance558
IndexedLineSet559 = x3d.IndexedLineSet()
IndexedLineSet559.coordIndex = [0,1,-1]
Coordinate560 = x3d.Coordinate()
Coordinate560.point = [(0, 1.497, -0.09),(0, 1.525, -0.072)]

IndexedLineSet559.coord = Coordinate560

Shape557.geometry = IndexedLineSet559

HAnimSegment556.children.append(Shape557)
Transform561 = x3d.Transform()
Transform561.translation = [0,1.497,-0.09]
Shape562 = x3d.Shape()
Shape562.USE = "jointbox"

Transform561.children.append(Shape562)

HAnimSegment556.children.append(Transform561)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.DEF = "Joe_suprasternale"
HAnimSite563.name = "suprasternale"
HAnimSite563.translation = [0,1.44,0.03]
Shape564 = x3d.Shape()
Shape564.USE = "sitebox"

HAnimSite563.children.append(Shape564)

HAnimSegment556.children.append(HAnimSite563)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.DEF = "Joe_cervicale"
HAnimSite565.name = "cervicale"
HAnimSite565.translation = [0,1.53,-0.084]
Shape566 = x3d.Shape()
Shape566.USE = "sitebox"

HAnimSite565.children.append(Shape566)

HAnimSegment556.children.append(HAnimSite565)

HAnimJoint555.children.append(HAnimSegment556)
HAnimJoint567 = x3d.HAnimJoint()
HAnimJoint567.DEF = "Joe_vc7"
HAnimJoint567.name = "vc7"
HAnimJoint567.center = [0,1.525,-0.072]
HAnimJoint567.skinCoordIndex = [74,75]
HAnimJoint567.skinCoordWeight = [1,1]
HAnimSegment568 = x3d.HAnimSegment()
HAnimSegment568.DEF = "Joe_c7"
HAnimSegment568.name = "c7"
Shape569 = x3d.Shape()
Appearance570 = x3d.Appearance()
Appearance570.USE = "SegmentLine"

Shape569.appearance = Appearance570
IndexedLineSet571 = x3d.IndexedLineSet()
IndexedLineSet571.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate572 = x3d.Coordinate()
Coordinate572.point = [(0, 1.525, -0.072),(0.082, 1.4488, -0.0353),(-0.03, 1.46, 0.02),(0, 1.54, -0.05)]

IndexedLineSet571.coord = Coordinate572

Shape569.geometry = IndexedLineSet571

HAnimSegment568.children.append(Shape569)
Transform573 = x3d.Transform()
Transform573.translation = [0,1.525,-0.072]
Shape574 = x3d.Shape()
Shape574.USE = "jointbox"

Transform573.children.append(Shape574)

HAnimSegment568.children.append(Transform573)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.DEF = "Joe_r_neck_base"
HAnimSite575.name = "r_neck_base"
HAnimSite575.translation = [-0.0646,1.5149,-0.0385]
Shape576 = x3d.Shape()
Shape576.USE = "sitebox"

HAnimSite575.children.append(Shape576)

HAnimSegment568.children.append(HAnimSite575)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.DEF = "Joe_l_neck_base"
HAnimSite577.name = "l_neck_base"
HAnimSite577.translation = [0.0646,1.5149,-0.0385]
Shape578 = x3d.Shape()
Shape578.USE = "sitebox"

HAnimSite577.children.append(Shape578)

HAnimSegment568.children.append(HAnimSite577)

HAnimJoint567.children.append(HAnimSegment568)
HAnimJoint579 = x3d.HAnimJoint()
HAnimJoint579.DEF = "Joe_vc6"
HAnimJoint579.name = "vc6"
HAnimJoint579.rotation = [-0.37139068112485,-0.928476688976744,0,0.0468530829448654]
HAnimJoint579.center = [0,1.54,-0.05]
HAnimSegment580 = x3d.HAnimSegment()
HAnimSegment580.DEF = "Joe_c6"
HAnimSegment580.name = "c6"
Shape581 = x3d.Shape()
Appearance582 = x3d.Appearance()
Appearance582.USE = "SegmentLine"

Shape581.appearance = Appearance582
IndexedLineSet583 = x3d.IndexedLineSet()
IndexedLineSet583.coordIndex = [0,1,-1]
Coordinate584 = x3d.Coordinate()
Coordinate584.point = [(0, 1.54, -0.05),(0, 1.5675, -0.0256)]

IndexedLineSet583.coord = Coordinate584

Shape581.geometry = IndexedLineSet583

HAnimSegment580.children.append(Shape581)
Transform585 = x3d.Transform()
Transform585.translation = [0,1.54,-0.05]
Shape586 = x3d.Shape()
Shape586.USE = "jointbox"

Transform585.children.append(Shape586)

HAnimSegment580.children.append(Transform585)

HAnimJoint579.children.append(HAnimSegment580)
HAnimJoint587 = x3d.HAnimJoint()
HAnimJoint587.DEF = "Joe_vc5"
HAnimJoint587.name = "vc5"
HAnimJoint587.center = [0,1.552,-0.035]
HAnimSegment588 = x3d.HAnimSegment()
HAnimSegment588.DEF = "Joe_c5"
HAnimSegment588.name = "c5"
Transform589 = x3d.Transform()
Transform589.translation = [0,1.552,-0.035]
Shape590 = x3d.Shape()
Shape590.USE = "jointbox"

Transform589.children.append(Shape590)

HAnimSegment588.children.append(Transform589)
Shape591 = x3d.Shape()
Appearance592 = x3d.Appearance()
Appearance592.USE = "SegmentLine"

Shape591.appearance = Appearance592
IndexedLineSet593 = x3d.IndexedLineSet()
IndexedLineSet593.coordIndex = [0,1,-1]
Coordinate594 = x3d.Coordinate()
Coordinate594.point = [(0, 1.5675, -0.0256),(0, 1.58225, -0.0185)]

IndexedLineSet593.coord = Coordinate594

Shape591.geometry = IndexedLineSet593

HAnimSegment588.children.append(Shape591)

HAnimJoint587.children.append(HAnimSegment588)
HAnimJoint595 = x3d.HAnimJoint()
HAnimJoint595.DEF = "Joe_vc4"
HAnimJoint595.name = "vc4"
HAnimJoint595.center = [0,1.5675,-0.0256]
HAnimSegment596 = x3d.HAnimSegment()
HAnimSegment596.DEF = "Joe_c4"
HAnimSegment596.name = "c4"
Shape597 = x3d.Shape()
Appearance598 = x3d.Appearance()
Appearance598.USE = "SegmentLine"

Shape597.appearance = Appearance598
IndexedLineSet599 = x3d.IndexedLineSet()
IndexedLineSet599.coordIndex = [0,1,-1]
Coordinate600 = x3d.Coordinate()
Coordinate600.point = [(0, 1.58225, -0.0185),(0, 1.595, -0.0175)]

IndexedLineSet599.coord = Coordinate600

Shape597.geometry = IndexedLineSet599

HAnimSegment596.children.append(Shape597)
Transform601 = x3d.Transform()
Transform601.translation = [0,1.5675,-0.0256]
Shape602 = x3d.Shape()
Shape602.USE = "jointbox"

Transform601.children.append(Shape602)

HAnimSegment596.children.append(Transform601)

HAnimJoint595.children.append(HAnimSegment596)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.DEF = "Joe_vc3"
HAnimJoint603.name = "vc3"
HAnimJoint603.center = [0,1.58225,-0.0185]
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.DEF = "Joe_c3"
HAnimSegment604.name = "c3"
Shape605 = x3d.Shape()
Appearance606 = x3d.Appearance()
Appearance606.USE = "SegmentLine"

Shape605.appearance = Appearance606
IndexedLineSet607 = x3d.IndexedLineSet()
IndexedLineSet607.coordIndex = [0,1,-1]
Coordinate608 = x3d.Coordinate()
Coordinate608.point = [(0, 1.595, -0.0175),(0, 1.61, -0.015)]

IndexedLineSet607.coord = Coordinate608

Shape605.geometry = IndexedLineSet607

HAnimSegment604.children.append(Shape605)
Transform609 = x3d.Transform()
Transform609.translation = [0,1.58225,-0.0185]
Shape610 = x3d.Shape()
Shape610.USE = "jointbox"

Transform609.children.append(Shape610)

HAnimSegment604.children.append(Transform609)

HAnimJoint603.children.append(HAnimSegment604)
HAnimJoint611 = x3d.HAnimJoint()
HAnimJoint611.DEF = "Joe_vc2"
HAnimJoint611.name = "vc2"
HAnimJoint611.center = [0,1.595,-0.0175]
HAnimSegment612 = x3d.HAnimSegment()
HAnimSegment612.DEF = "Joe_c2"
HAnimSegment612.name = "c2"
Shape613 = x3d.Shape()
Appearance614 = x3d.Appearance()
Appearance614.USE = "SegmentLine"

Shape613.appearance = Appearance614
IndexedLineSet615 = x3d.IndexedLineSet()
IndexedLineSet615.coordIndex = [0,1,-1]
Coordinate616 = x3d.Coordinate()
Coordinate616.point = [(0, 1.61, -0.015),(0, 1.6144, -0.0034)]

IndexedLineSet615.coord = Coordinate616

Shape613.geometry = IndexedLineSet615

HAnimSegment612.children.append(Shape613)
Transform617 = x3d.Transform()
Transform617.translation = [0,1.595,-0.0175]
Shape618 = x3d.Shape()
Shape618.USE = "jointbox"

Transform617.children.append(Shape618)

HAnimSegment612.children.append(Transform617)

HAnimJoint611.children.append(HAnimSegment612)
HAnimJoint619 = x3d.HAnimJoint()
HAnimJoint619.DEF = "Joe_vc1"
HAnimJoint619.name = "vc1"
HAnimJoint619.center = [0,1.61,-0.015]
HAnimSegment620 = x3d.HAnimSegment()
HAnimSegment620.DEF = "Joe_c1"
HAnimSegment620.name = "c1"
Shape621 = x3d.Shape()
Appearance622 = x3d.Appearance()
Appearance622.USE = "SegmentLine"

Shape621.appearance = Appearance622
IndexedLineSet623 = x3d.IndexedLineSet()
IndexedLineSet623.coordIndex = [0,1,-1]
Coordinate624 = x3d.Coordinate()
Coordinate624.point = [(0, 1.6144, -0.0034),(0, 1.63, -0.01)]

IndexedLineSet623.coord = Coordinate624

Shape621.geometry = IndexedLineSet623

HAnimSegment620.children.append(Shape621)
Transform625 = x3d.Transform()
Transform625.translation = [0,1.61,-0.015]
Shape626 = x3d.Shape()
Shape626.USE = "jointbox"

Transform625.children.append(Shape626)

HAnimSegment620.children.append(Transform625)

HAnimJoint619.children.append(HAnimSegment620)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.DEF = "Joe_skullbase"
HAnimJoint627.name = "skullbase"
HAnimJoint627.rotation = [0,-1,0,0.105595270685895]
HAnimJoint627.center = [0,1.63,-0.01]
HAnimJoint627.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint627.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimSegment628 = x3d.HAnimSegment()
HAnimSegment628.DEF = "Joe_skull"
HAnimSegment628.name = "skull"
Shape629 = x3d.Shape()
Appearance630 = x3d.Appearance()
Appearance630.USE = "SegmentLine"

Shape629.appearance = Appearance630
IndexedLineSet631 = x3d.IndexedLineSet()
IndexedLineSet631.coordIndex = [0,1,-1,0,2,-1]
Coordinate632 = x3d.Coordinate()
Coordinate632.point = [(0, 1.63, -0.01),(0.034, 1.659, 0.06),(-0.034, 1.655, 0.065)]

IndexedLineSet631.coord = Coordinate632

Shape629.geometry = IndexedLineSet631

HAnimSegment628.children.append(Shape629)
Transform633 = x3d.Transform()
Transform633.translation = [0,1.63,-0.01]
Shape634 = x3d.Shape()
Shape634.USE = "jointbox"

Transform633.children.append(Shape634)

HAnimSegment628.children.append(Transform633)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.DEF = "Joe_skull_tip"
HAnimSite635.name = "skull_tip"
HAnimSite635.translation = [0,1.77,0]
Shape636 = x3d.Shape()
Shape636.USE = "sitebox"

HAnimSite635.children.append(Shape636)

HAnimSegment628.children.append(HAnimSite635)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.DEF = "Joe_sellion"
HAnimSite637.name = "sellion"
HAnimSite637.translation = [0,1.665,0.09]
Shape638 = x3d.Shape()
Shape638.USE = "sitebox"

HAnimSite637.children.append(Shape638)

HAnimSegment628.children.append(HAnimSite637)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.DEF = "Joe_r_infraorbitale"
HAnimSite639.name = "r_infraorbitale"
HAnimSite639.translation = [-0.033,1.62,0.087]
Shape640 = x3d.Shape()
Shape640.USE = "sitebox"

HAnimSite639.children.append(Shape640)

HAnimSegment628.children.append(HAnimSite639)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.DEF = "Joe_l_infraorbitale"
HAnimSite641.name = "l_infraorbitale"
HAnimSite641.translation = [0.033,1.62,0.087]
Shape642 = x3d.Shape()
Shape642.USE = "sitebox"

HAnimSite641.children.append(Shape642)

HAnimSegment628.children.append(HAnimSite641)
HAnimSite643 = x3d.HAnimSite()
HAnimSite643.DEF = "Joe_supramenton"
HAnimSite643.name = "supramenton"
HAnimSite643.translation = [0,1.55,0.097]
Shape644 = x3d.Shape()
Shape644.USE = "sitebox"

HAnimSite643.children.append(Shape644)

HAnimSegment628.children.append(HAnimSite643)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.DEF = "Joe_r_tragion"
HAnimSite645.name = "r_tragion"
HAnimSite645.translation = [-0.077,1.64,-0.01]
Shape646 = x3d.Shape()
Shape646.USE = "sitebox"

HAnimSite645.children.append(Shape646)

HAnimSegment628.children.append(HAnimSite645)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.DEF = "Joe_r_gonion"
HAnimSite647.name = "r_gonion"
HAnimSite647.translation = [-0.052,1.58,0.015]
Shape648 = x3d.Shape()
Shape648.USE = "sitebox"

HAnimSite647.children.append(Shape648)

HAnimSegment628.children.append(HAnimSite647)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.DEF = "Joe_l_tragion"
HAnimSite649.name = "l_tragion"
HAnimSite649.translation = [0.077,1.64,-0.01]
Shape650 = x3d.Shape()
Shape650.USE = "sitebox"

HAnimSite649.children.append(Shape650)

HAnimSegment628.children.append(HAnimSite649)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.DEF = "Joe_l_gonion"
HAnimSite651.name = "l_gonion"
HAnimSite651.translation = [0.0631,1.58,0.015]
Shape652 = x3d.Shape()
Shape652.USE = "sitebox"

HAnimSite651.children.append(Shape652)

HAnimSegment628.children.append(HAnimSite651)
HAnimSite653 = x3d.HAnimSite()
HAnimSite653.DEF = "Joe_nuchale"
HAnimSite653.name = "nuchale"
HAnimSite653.translation = [0,1.625,-0.0925]
Shape654 = x3d.Shape()
Shape654.USE = "sitebox"

HAnimSite653.children.append(Shape654)

HAnimSegment628.children.append(HAnimSite653)

HAnimJoint627.children.append(HAnimSegment628)
HAnimJoint655 = x3d.HAnimJoint()
HAnimJoint655.DEF = "Joe_l_eyeball_joint"
HAnimJoint655.name = "l_eyeball_joint"
HAnimJoint655.center = [0.034,1.659,0.06]
HAnimSegment656 = x3d.HAnimSegment()
HAnimSegment656.DEF = "Joe_l_eyeball"
HAnimSegment656.name = "l_eyeball"
Shape657 = x3d.Shape()
Appearance658 = x3d.Appearance()
Appearance658.USE = "SegmentLine"

Shape657.appearance = Appearance658
IndexedLineSet659 = x3d.IndexedLineSet()
IndexedLineSet659.coordIndex = [0,1,-1]
Coordinate660 = x3d.Coordinate()
Coordinate660.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet659.coord = Coordinate660

Shape657.geometry = IndexedLineSet659

HAnimSegment656.children.append(Shape657)
Transform661 = x3d.Transform()
Transform661.translation = [0.034,1.655,0.065]
Transform661.scale = [1,1,1.4]
Shape662 = x3d.Shape()
Shape662.USE = "jointbox"

Transform661.children.append(Shape662)

HAnimSegment656.children.append(Transform661)

HAnimJoint655.children.append(HAnimSegment656)

HAnimJoint627.children.append(HAnimJoint655)
HAnimJoint663 = x3d.HAnimJoint()
HAnimJoint663.DEF = "Joe_r_eyeball_joint"
HAnimJoint663.name = "r_eyeball_joint"
HAnimJoint663.center = [-0.034,1.659,0.06]
HAnimSegment664 = x3d.HAnimSegment()
HAnimSegment664.DEF = "Joe_r_eyeball"
HAnimSegment664.name = "r_eyeball"
Shape665 = x3d.Shape()
Appearance666 = x3d.Appearance()
Appearance666.USE = "SegmentLine"

Shape665.appearance = Appearance666
IndexedLineSet667 = x3d.IndexedLineSet()
IndexedLineSet667.coordIndex = [0,1,-1]
Coordinate668 = x3d.Coordinate()
Coordinate668.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet667.coord = Coordinate668

Shape665.geometry = IndexedLineSet667

HAnimSegment664.children.append(Shape665)
Transform669 = x3d.Transform()
Transform669.translation = [-0.034,1.655,0.065]
Transform669.scale = [1,1,1.4]
Shape670 = x3d.Shape()
Shape670.USE = "jointbox"

Transform669.children.append(Shape670)

HAnimSegment664.children.append(Transform669)

HAnimJoint663.children.append(HAnimSegment664)

HAnimJoint627.children.append(HAnimJoint663)

HAnimJoint619.children.append(HAnimJoint627)

HAnimJoint611.children.append(HAnimJoint619)

HAnimJoint603.children.append(HAnimJoint611)

HAnimJoint595.children.append(HAnimJoint603)

HAnimJoint587.children.append(HAnimJoint595)

HAnimJoint579.children.append(HAnimJoint587)

HAnimJoint567.children.append(HAnimJoint579)

HAnimJoint555.children.append(HAnimJoint567)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.DEF = "Joe_l_sternoclavicular"
HAnimJoint671.name = "l_sternoclavicular"
HAnimJoint671.center = [0.082,1.4488,-0.0353]
HAnimJoint671.skinCoordIndex = [12]
HAnimJoint671.skinCoordWeight = [1]
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.DEF = "Joe_l_clavicle"
HAnimSegment672.name = "l_clavicle"
Shape673 = x3d.Shape()
Appearance674 = x3d.Appearance()
Appearance674.USE = "SegmentLine"

Shape673.appearance = Appearance674
IndexedLineSet675 = x3d.IndexedLineSet()
IndexedLineSet675.coordIndex = [0,1,-1]
Coordinate676 = x3d.Coordinate()
Coordinate676.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

IndexedLineSet675.coord = Coordinate676

Shape673.geometry = IndexedLineSet675

HAnimSegment672.children.append(Shape673)
Transform677 = x3d.Transform()
Transform677.translation = [0.082,1.4488,-0.0353]
Shape678 = x3d.Shape()
Shape678.USE = "jointbox"

Transform677.children.append(Shape678)

HAnimSegment672.children.append(Transform677)
HAnimSite679 = x3d.HAnimSite()
HAnimSite679.DEF = "Joe_l_clavicale"
HAnimSite679.name = "l_clavicale"
HAnimSite679.translation = [0.03,1.46,0.035]
Shape680 = x3d.Shape()
Shape680.USE = "sitebox"

HAnimSite679.children.append(Shape680)

HAnimSegment672.children.append(HAnimSite679)

HAnimJoint671.children.append(HAnimSegment672)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.DEF = "Joe_l_acromioclavicular"
HAnimJoint681.name = "l_acromioclavicular"
HAnimJoint681.center = [0.0962,1.4269,-0.0424]
HAnimJoint681.skinCoordIndex = [79]
HAnimJoint681.skinCoordWeight = [1]
HAnimSegment682 = x3d.HAnimSegment()
HAnimSegment682.DEF = "Joe_l_scapula"
HAnimSegment682.name = "l_scapula"
Shape683 = x3d.Shape()
Appearance684 = x3d.Appearance()
Appearance684.USE = "SegmentLine"

Shape683.appearance = Appearance684
IndexedLineSet685 = x3d.IndexedLineSet()
IndexedLineSet685.coordIndex = [0,1,-1]
Coordinate686 = x3d.Coordinate()
Coordinate686.point = [(0.0962, 1.4269, -0.0424),(0.2, 1.44, -0.04)]

IndexedLineSet685.coord = Coordinate686

Shape683.geometry = IndexedLineSet685

HAnimSegment682.children.append(Shape683)
Transform687 = x3d.Transform()
Transform687.translation = [0.0962,1.4269,-0.0424]
Shape688 = x3d.Shape()
Shape688.USE = "jointbox"

Transform687.children.append(Shape688)

HAnimSegment682.children.append(Transform687)
Transform689 = x3d.Transform()
Transform689.translation = [0.11,1.427,-0.1375]
Shape690 = x3d.Shape()
Shape690.USE = "skinsphere"

Transform689.children.append(Shape690)

HAnimSegment682.children.append(Transform689)
HAnimSite691 = x3d.HAnimSite()
HAnimSite691.DEF = "Joe_l_acromion"
HAnimSite691.name = "l_acromion"
HAnimSite691.translation = [0.175,1.4825,-0.06]
Shape692 = x3d.Shape()
Shape692.USE = "sitebox"

HAnimSite691.children.append(Shape692)

HAnimSegment682.children.append(HAnimSite691)
HAnimSite693 = x3d.HAnimSite()
HAnimSite693.DEF = "Joe_l_axilla_ant"
HAnimSite693.name = "l_axilla_ant"
HAnimSite693.translation = [0.17,1.38,0.007]
Shape694 = x3d.Shape()
Shape694.USE = "sitebox"

HAnimSite693.children.append(Shape694)

HAnimSegment682.children.append(HAnimSite693)
HAnimSite695 = x3d.HAnimSite()
HAnimSite695.DEF = "Joe_l_axilla_post"
HAnimSite695.name = "l_axilla_post"
HAnimSite695.translation = [0.16,1.38,-0.125]
Shape696 = x3d.Shape()
Shape696.USE = "sitebox"

HAnimSite695.children.append(Shape696)

HAnimSegment682.children.append(HAnimSite695)

HAnimJoint681.children.append(HAnimSegment682)
HAnimJoint697 = x3d.HAnimJoint()
HAnimJoint697.DEF = "Joe_l_shoulder"
HAnimJoint697.name = "l_shoulder"
HAnimJoint697.rotation = [0.978440403355312,0,0.206529361307055,0.207668332501419]
HAnimJoint697.center = [0.2,1.44,-0.04]
HAnimJoint697.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint697.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment698 = x3d.HAnimSegment()
HAnimSegment698.DEF = "Joe_l_upperarm"
HAnimSegment698.name = "l_upperarm"
Shape699 = x3d.Shape()
Appearance700 = x3d.Appearance()
Appearance700.USE = "SegmentLine"

Shape699.appearance = Appearance700
IndexedLineSet701 = x3d.IndexedLineSet()
IndexedLineSet701.coordIndex = [0,1,-1]
Coordinate702 = x3d.Coordinate()
Coordinate702.point = [(0.2029, 1.44, -0.0387),(0.2, 1.1388, -0.04)]

IndexedLineSet701.coord = Coordinate702

Shape699.geometry = IndexedLineSet701

HAnimSegment698.children.append(Shape699)
Transform703 = x3d.Transform()
Transform703.translation = [0.2,1.44,-0.04]
Shape704 = x3d.Shape()
Shape704.USE = "jointbox"

Transform703.children.append(Shape704)

HAnimSegment698.children.append(Transform703)
Transform705 = x3d.Transform()
Transform705.translation = [0.235,1.42,-0.0625]
Shape706 = x3d.Shape()
Shape706.USE = "skinsphere"

Transform705.children.append(Shape706)

HAnimSegment698.children.append(Transform705)
Transform707 = x3d.Transform()
Transform707.translation = [0.25,1.27,-0.04]
Shape708 = x3d.Shape()
Shape708.USE = "skinsphere"

Transform707.children.append(Shape708)

HAnimSegment698.children.append(Transform707)
Transform709 = x3d.Transform()
Transform709.translation = [0.17,1.27,-0.04]
Shape710 = x3d.Shape()
Shape710.USE = "skinsphere"

Transform709.children.append(Shape710)

HAnimSegment698.children.append(Transform709)
Transform711 = x3d.Transform()
Transform711.translation = [0.2,1.27,-0.09]
Shape712 = x3d.Shape()
Shape712.USE = "skinsphere"

Transform711.children.append(Shape712)

HAnimSegment698.children.append(Transform711)
Transform713 = x3d.Transform()
Transform713.translation = [0.2,1.27,0.02]
Shape714 = x3d.Shape()
Shape714.USE = "skinsphere"

Transform713.children.append(Shape714)

HAnimSegment698.children.append(Transform713)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.DEF = "Joe_l_humeral_medial_epicn"
HAnimSite715.name = "l_humeral_medial_epicn"
HAnimSite715.translation = [0.165,1.1388,-0.04]
Shape716 = x3d.Shape()
Shape716.USE = "sitebox"

HAnimSite715.children.append(Shape716)

HAnimSegment698.children.append(HAnimSite715)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.DEF = "Joe_l_radiale"
HAnimSite717.name = "l_radiale"
HAnimSite717.translation = [0.23,1.133,-0.055]
Shape718 = x3d.Shape()
Shape718.USE = "sitebox"

HAnimSite717.children.append(Shape718)

HAnimSegment698.children.append(HAnimSite717)
HAnimSite719 = x3d.HAnimSite()
HAnimSite719.DEF = "Joe_l_humeral_lateral_epicn"
HAnimSite719.name = "l_humeral_lateral_epicn"
HAnimSite719.translation = [0.244,1.1388,-0.04]
Shape720 = x3d.Shape()
Shape720.USE = "sitebox"

HAnimSite719.children.append(Shape720)

HAnimSegment698.children.append(HAnimSite719)

HAnimJoint697.children.append(HAnimSegment698)
HAnimJoint721 = x3d.HAnimJoint()
HAnimJoint721.DEF = "Joe_l_elbow"
HAnimJoint721.name = "l_elbow"
HAnimJoint721.rotation = [-0.999999999999982,0,0,0.139356882713934]
HAnimJoint721.center = [0.2,1.1388,-0.04]
HAnimJoint721.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint721.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment722 = x3d.HAnimSegment()
HAnimSegment722.DEF = "Joe_l_forearm"
HAnimSegment722.name = "l_forearm"
Shape723 = x3d.Shape()
Appearance724 = x3d.Appearance()
Appearance724.USE = "SegmentLine"

Shape723.appearance = Appearance724
IndexedLineSet725 = x3d.IndexedLineSet()
IndexedLineSet725.coordIndex = [0,1,-1]
Coordinate726 = x3d.Coordinate()
Coordinate726.point = [(0.2, 1.1388, -0.04),(0.2, 0.87, -0.04)]

IndexedLineSet725.coord = Coordinate726

Shape723.geometry = IndexedLineSet725

HAnimSegment722.children.append(Shape723)
Transform727 = x3d.Transform()
Transform727.translation = [0.2,1.1388,-0.04]
Shape728 = x3d.Shape()
Shape728.USE = "jointbox"

Transform727.children.append(Shape728)

HAnimSegment722.children.append(Transform727)
Transform729 = x3d.Transform()
Transform729.translation = [0.2,1.1388,-0.013]
Shape730 = x3d.Shape()
Shape730.USE = "skinsphere"

Transform729.children.append(Shape730)

HAnimSegment722.children.append(Transform729)
Transform731 = x3d.Transform()
Transform731.translation = [0.225,1,-0.01]
Shape732 = x3d.Shape()
Shape732.USE = "skinsphere"

Transform731.children.append(Shape732)

HAnimSegment722.children.append(Transform731)
Transform733 = x3d.Transform()
Transform733.translation = [0.225,1,-0.07]
Shape734 = x3d.Shape()
Shape734.USE = "skinsphere"

Transform733.children.append(Shape734)

HAnimSegment722.children.append(Transform733)
Transform735 = x3d.Transform()
Transform735.translation = [0.185,1,-0.01]
Shape736 = x3d.Shape()
Shape736.USE = "skinsphere"

Transform735.children.append(Shape736)

HAnimSegment722.children.append(Transform735)
Transform737 = x3d.Transform()
Transform737.translation = [0.185,1,-0.07]
Shape738 = x3d.Shape()
Shape738.USE = "skinsphere"

Transform737.children.append(Shape738)

HAnimSegment722.children.append(Transform737)
HAnimSite739 = x3d.HAnimSite()
HAnimSite739.DEF = "Joe_l_radial_styloid"
HAnimSite739.name = "l_radial_styloid"
HAnimSite739.translation = [0.1901,0.8645,-0.0415]
Shape740 = x3d.Shape()
Shape740.USE = "sitebox"

HAnimSite739.children.append(Shape740)

HAnimSegment722.children.append(HAnimSite739)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.DEF = "Joe_l_olecranon"
HAnimSite741.name = "l_olecranon"
HAnimSite741.translation = [0.2,1.1388,-0.08]
Shape742 = x3d.Shape()
Shape742.USE = "sitebox"

HAnimSite741.children.append(Shape742)

HAnimSegment722.children.append(HAnimSite741)

HAnimJoint721.children.append(HAnimSegment722)
HAnimJoint743 = x3d.HAnimJoint()
HAnimJoint743.DEF = "Joe_l_wrist"
HAnimJoint743.name = "l_wrist"
HAnimJoint743.rotation = [-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821]
HAnimJoint743.center = [0.2,0.87,-0.04]
HAnimJoint743.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint743.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment744 = x3d.HAnimSegment()
HAnimSegment744.DEF = "Joe_l_hand"
HAnimSegment744.name = "l_hand"
Shape745 = x3d.Shape()
Appearance746 = x3d.Appearance()
Appearance746.USE = "SegmentLine"

Shape745.appearance = Appearance746
IndexedLineSet747 = x3d.IndexedLineSet()
IndexedLineSet747.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate748 = x3d.Coordinate()
Coordinate748.point = [(0.2, 0.87, -0.04),(0.1924, 0.8472, -0.0534),(0.1983, 0.8024, -0.028),(0.1987, 0.8029, -0.053),(0.1956, 0.8019, -0.0794),(0.1925, 0.8066, -0.1036)]

IndexedLineSet747.coord = Coordinate748

Shape745.geometry = IndexedLineSet747

HAnimSegment744.children.append(Shape745)
Transform749 = x3d.Transform()
Transform749.translation = [0.2,0.87,-0.04]
Shape750 = x3d.Shape()
Shape750.USE = "jointbox"

Transform749.children.append(Shape750)

HAnimSegment744.children.append(Transform749)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.DEF = "Joe_l_metacarpal_pha2"
HAnimSite751.name = "l_metacarpal_pha2"
HAnimSite751.translation = [0.2009,0.8139,-0.0237]
Shape752 = x3d.Shape()
Shape752.USE = "sitebox"

HAnimSite751.children.append(Shape752)

HAnimSegment744.children.append(HAnimSite751)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.DEF = "Joe_l_ulnar_styloid"
HAnimSite753.name = "l_ulnar_styloid"
HAnimSite753.translation = [0.2142,0.8529,-0.0648]
Shape754 = x3d.Shape()
Shape754.USE = "sitebox"

HAnimSite753.children.append(Shape754)

HAnimSegment744.children.append(HAnimSite753)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.DEF = "Joe_l_metacarpal_pha5"
HAnimSite755.name = "l_metacarpal_pha5"
HAnimSite755.translation = [0.1929,0.786,-0.1122]
Shape756 = x3d.Shape()
Shape756.USE = "sitebox"

HAnimSite755.children.append(Shape756)

HAnimSegment744.children.append(HAnimSite755)

HAnimJoint743.children.append(HAnimSegment744)
HAnimJoint757 = x3d.HAnimJoint()
HAnimJoint757.DEF = "Joe_l_thumb1"
HAnimJoint757.name = "l_thumb1"
HAnimJoint757.center = [0.1924,0.8472,-0.0534]
HAnimJoint757.skinCoordIndex = [127,128]
HAnimJoint757.skinCoordWeight = [1,1]
HAnimSegment758 = x3d.HAnimSegment()
HAnimSegment758.DEF = "Joe_l_thumb_metacarpal"
HAnimSegment758.name = "l_thumb_metacarpal"
Shape759 = x3d.Shape()
Appearance760 = x3d.Appearance()
Appearance760.USE = "SegmentLine"

Shape759.appearance = Appearance760
IndexedLineSet761 = x3d.IndexedLineSet()
IndexedLineSet761.coordIndex = [0,1,-1]
Coordinate762 = x3d.Coordinate()
Coordinate762.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

IndexedLineSet761.coord = Coordinate762

Shape759.geometry = IndexedLineSet761

HAnimSegment758.children.append(Shape759)
Transform763 = x3d.Transform()
Transform763.translation = [0.1924,0.8472,-0.0534]
Shape764 = x3d.Shape()
Shape764.USE = "jointbox"

Transform763.children.append(Shape764)

HAnimSegment758.children.append(Transform763)

HAnimJoint757.children.append(HAnimSegment758)
HAnimJoint765 = x3d.HAnimJoint()
HAnimJoint765.DEF = "Joe_l_thumb2"
HAnimJoint765.name = "l_thumb2"
HAnimJoint765.center = [0.1951,0.8226,0.0246]
HAnimJoint765.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint765.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment766 = x3d.HAnimSegment()
HAnimSegment766.DEF = "Joe_l_thumb_proximal"
HAnimSegment766.name = "l_thumb_distal"
Shape767 = x3d.Shape()
Appearance768 = x3d.Appearance()
Appearance768.USE = "SegmentLine"

Shape767.appearance = Appearance768
IndexedLineSet769 = x3d.IndexedLineSet()
IndexedLineSet769.coordIndex = [0,1,-1]
Coordinate770 = x3d.Coordinate()
Coordinate770.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

IndexedLineSet769.coord = Coordinate770

Shape767.geometry = IndexedLineSet769

HAnimSegment766.children.append(Shape767)
Transform771 = x3d.Transform()
Transform771.translation = [0.1951,0.8226,0.0246]
Shape772 = x3d.Shape()
Shape772.USE = "jointbox"

Transform771.children.append(Shape772)

HAnimSegment766.children.append(Transform771)

HAnimJoint765.children.append(HAnimSegment766)
HAnimJoint773 = x3d.HAnimJoint()
HAnimJoint773.DEF = "Joe_l_thumb3"
HAnimJoint773.name = "l_thumb3"
HAnimJoint773.center = [0.1955,0.8159,0.0464]
HAnimJoint773.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint773.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment774 = x3d.HAnimSegment()
HAnimSegment774.DEF = "Joe_l_thumb_distal"
HAnimSegment774.name = "l_thumb_distal"
Shape775 = x3d.Shape()
Appearance776 = x3d.Appearance()
Appearance776.USE = "SegmentLine"

Shape775.appearance = Appearance776
IndexedLineSet777 = x3d.IndexedLineSet()
IndexedLineSet777.coordIndex = [0,1,-1]
Coordinate778 = x3d.Coordinate()
Coordinate778.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

IndexedLineSet777.coord = Coordinate778

Shape775.geometry = IndexedLineSet777

HAnimSegment774.children.append(Shape775)
Transform779 = x3d.Transform()
Transform779.translation = [0.1955,0.8159,0.0464]
Shape780 = x3d.Shape()
Shape780.USE = "jointbox"

Transform779.children.append(Shape780)

HAnimSegment774.children.append(Transform779)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.DEF = "Joe_l_thumb_distal_tip"
HAnimSite781.name = "l_thumb_distal_tip"
HAnimSite781.translation = [0.1982,0.8061,0.0759]
Shape782 = x3d.Shape()
Shape782.USE = "sitebox"

HAnimSite781.children.append(Shape782)

HAnimSegment774.children.append(HAnimSite781)

HAnimJoint773.children.append(HAnimSegment774)

HAnimJoint765.children.append(HAnimJoint773)

HAnimJoint757.children.append(HAnimJoint765)

HAnimJoint743.children.append(HAnimJoint757)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.DEF = "Joe_l_index0"
HAnimJoint783.name = "l_index0"
HAnimJoint783.center = [0.1983,0.8024,-0.028]
HAnimJoint783.skinCoordIndex = [129,130]
HAnimJoint783.skinCoordWeight = [1,1]
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.DEF = "Joe_l_index_metacarpal"
HAnimSegment784.name = "l_index_metacarpal"
Shape785 = x3d.Shape()
Appearance786 = x3d.Appearance()
Appearance786.USE = "SegmentLine"

Shape785.appearance = Appearance786
IndexedLineSet787 = x3d.IndexedLineSet()
IndexedLineSet787.coordIndex = [0,1,-1]
Coordinate788 = x3d.Coordinate()
Coordinate788.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

IndexedLineSet787.coord = Coordinate788

Shape785.geometry = IndexedLineSet787

HAnimSegment784.children.append(Shape785)
Transform789 = x3d.Transform()
Transform789.translation = [0.1983,0.8024,-0.028]
Shape790 = x3d.Shape()
Shape790.USE = "jointbox"

Transform789.children.append(Shape790)

HAnimSegment784.children.append(Transform789)

HAnimJoint783.children.append(HAnimSegment784)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.DEF = "Joe_l_index1"
HAnimJoint791.name = "l_index1"
HAnimJoint791.center = [0.1983,0.7815,-0.028]
HAnimJoint791.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint791.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.DEF = "Joe_l_index_proximal"
HAnimSegment792.name = "l_index_proximal"
Shape793 = x3d.Shape()
Appearance794 = x3d.Appearance()
Appearance794.USE = "SegmentLine"

Shape793.appearance = Appearance794
IndexedLineSet795 = x3d.IndexedLineSet()
IndexedLineSet795.coordIndex = [0,1,-1]
Coordinate796 = x3d.Coordinate()
Coordinate796.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

IndexedLineSet795.coord = Coordinate796

Shape793.geometry = IndexedLineSet795

HAnimSegment792.children.append(Shape793)
Transform797 = x3d.Transform()
Transform797.translation = [0.1983,0.7815,-0.028]
Shape798 = x3d.Shape()
Shape798.USE = "jointbox"

Transform797.children.append(Shape798)

HAnimSegment792.children.append(Transform797)

HAnimJoint791.children.append(HAnimSegment792)
HAnimJoint799 = x3d.HAnimJoint()
HAnimJoint799.DEF = "Joe_l_index2"
HAnimJoint799.name = "l_index2"
HAnimJoint799.center = [0.2017,0.7363,-0.0248]
HAnimJoint799.skinCoordIndex = [166,167,168,169]
HAnimJoint799.skinCoordWeight = [1,1,1,1]
HAnimSegment800 = x3d.HAnimSegment()
HAnimSegment800.DEF = "Joe_l_index_middle"
HAnimSegment800.name = "l_index_middle"
Shape801 = x3d.Shape()
Appearance802 = x3d.Appearance()
Appearance802.USE = "SegmentLine"

Shape801.appearance = Appearance802
IndexedLineSet803 = x3d.IndexedLineSet()
IndexedLineSet803.coordIndex = [0,1,-1]
Coordinate804 = x3d.Coordinate()
Coordinate804.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

IndexedLineSet803.coord = Coordinate804

Shape801.geometry = IndexedLineSet803

HAnimSegment800.children.append(Shape801)
Transform805 = x3d.Transform()
Transform805.translation = [0.2017,0.7363,-0.0248]
Shape806 = x3d.Shape()
Shape806.USE = "jointbox"

Transform805.children.append(Shape806)

HAnimSegment800.children.append(Transform805)

HAnimJoint799.children.append(HAnimSegment800)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.DEF = "Joe_l_index3"
HAnimJoint807.name = "l_index3"
HAnimJoint807.center = [0.2028,0.7139,-0.0236]
HAnimJoint807.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint807.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.DEF = "Joe_l_index_distal"
HAnimSegment808.name = "l_index_distal"
Shape809 = x3d.Shape()
Appearance810 = x3d.Appearance()
Appearance810.USE = "SegmentLine"

Shape809.appearance = Appearance810
IndexedLineSet811 = x3d.IndexedLineSet()
IndexedLineSet811.coordIndex = [0,1,-1]
Coordinate812 = x3d.Coordinate()
Coordinate812.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

IndexedLineSet811.coord = Coordinate812

Shape809.geometry = IndexedLineSet811

HAnimSegment808.children.append(Shape809)
Transform813 = x3d.Transform()
Transform813.translation = [0.2028,0.7139,-0.0236]
Shape814 = x3d.Shape()
Shape814.USE = "jointbox"

Transform813.children.append(Shape814)

HAnimSegment808.children.append(Transform813)
HAnimSite815 = x3d.HAnimSite()
HAnimSite815.DEF = "Joe_l_index_distal_tip"
HAnimSite815.name = "l_index_distal_tip"
HAnimSite815.translation = [0.2089,0.6858,-0.0245]
Shape816 = x3d.Shape()
Shape816.USE = "sitebox"

HAnimSite815.children.append(Shape816)

HAnimSegment808.children.append(HAnimSite815)
HAnimSite817 = x3d.HAnimSite()
HAnimSite817.DEF = "Joe_l_dactylion"
HAnimSite817.name = "l_dactylion"
HAnimSite817.translation = [0.2056,0.6743,-0.0482]
Shape818 = x3d.Shape()
Shape818.USE = "sitebox"

HAnimSite817.children.append(Shape818)

HAnimSegment808.children.append(HAnimSite817)

HAnimJoint807.children.append(HAnimSegment808)

HAnimJoint799.children.append(HAnimJoint807)

HAnimJoint791.children.append(HAnimJoint799)

HAnimJoint783.children.append(HAnimJoint791)

HAnimJoint743.children.append(HAnimJoint783)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.DEF = "Joe_l_middle0"
HAnimJoint819.name = "l_middle0"
HAnimJoint819.center = [0.1987,0.8029,-0.053]
HAnimJoint819.skinCoordIndex = [131,132]
HAnimJoint819.skinCoordWeight = [1,1]
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.DEF = "Joe_l_middle_metacarpal"
HAnimSegment820.name = "l_middle_metacarpal"
Shape821 = x3d.Shape()
Appearance822 = x3d.Appearance()
Appearance822.USE = "SegmentLine"

Shape821.appearance = Appearance822
IndexedLineSet823 = x3d.IndexedLineSet()
IndexedLineSet823.coordIndex = [0,1,-1]
Coordinate824 = x3d.Coordinate()
Coordinate824.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

IndexedLineSet823.coord = Coordinate824

Shape821.geometry = IndexedLineSet823

HAnimSegment820.children.append(Shape821)
Transform825 = x3d.Transform()
Transform825.translation = [0.1987,0.8029,-0.053]
Shape826 = x3d.Shape()
Shape826.USE = "jointbox"

Transform825.children.append(Shape826)

HAnimSegment820.children.append(Transform825)

HAnimJoint819.children.append(HAnimSegment820)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.DEF = "Joe_l_middle1"
HAnimJoint827.name = "l_middle1"
HAnimJoint827.center = [0.1987,0.7818,-0.053]
HAnimJoint827.skinCoordIndex = [156,157,163,164]
HAnimJoint827.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.DEF = "Joe_l_middle_proximal"
HAnimSegment828.name = "l_middle_proximal"
Shape829 = x3d.Shape()
Appearance830 = x3d.Appearance()
Appearance830.USE = "SegmentLine"

Shape829.appearance = Appearance830
IndexedLineSet831 = x3d.IndexedLineSet()
IndexedLineSet831.coordIndex = [0,1,-1]
Coordinate832 = x3d.Coordinate()
Coordinate832.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

IndexedLineSet831.coord = Coordinate832

Shape829.geometry = IndexedLineSet831

HAnimSegment828.children.append(Shape829)
Transform833 = x3d.Transform()
Transform833.translation = [0.1987,0.7818,-0.053]
Shape834 = x3d.Shape()
Shape834.USE = "jointbox"

Transform833.children.append(Shape834)

HAnimSegment828.children.append(Transform833)

HAnimJoint827.children.append(HAnimSegment828)
HAnimJoint835 = x3d.HAnimJoint()
HAnimJoint835.DEF = "Joe_l_middle2"
HAnimJoint835.name = "l_middle2"
HAnimJoint835.center = [0.2013,0.7273,-0.0503]
HAnimJoint835.skinCoordIndex = [179,180,181,182]
HAnimJoint835.skinCoordWeight = [1,1,1,1]
HAnimSegment836 = x3d.HAnimSegment()
HAnimSegment836.DEF = "Joe_l_middle_middle"
HAnimSegment836.name = "l_middle_middle"
Shape837 = x3d.Shape()
Appearance838 = x3d.Appearance()
Appearance838.USE = "SegmentLine"

Shape837.appearance = Appearance838
IndexedLineSet839 = x3d.IndexedLineSet()
IndexedLineSet839.coordIndex = [0,1,-1]
Coordinate840 = x3d.Coordinate()
Coordinate840.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

IndexedLineSet839.coord = Coordinate840

Shape837.geometry = IndexedLineSet839

HAnimSegment836.children.append(Shape837)
Transform841 = x3d.Transform()
Transform841.translation = [0.2013,0.7273,-0.0503]
Shape842 = x3d.Shape()
Shape842.USE = "jointbox"

Transform841.children.append(Shape842)

HAnimSegment836.children.append(Transform841)

HAnimJoint835.children.append(HAnimSegment836)
HAnimJoint843 = x3d.HAnimJoint()
HAnimJoint843.DEF = "Joe_l_middle3"
HAnimJoint843.name = "l_middle3"
HAnimJoint843.center = [0.2026,0.7011,-0.0494]
HAnimJoint843.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint843.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment844 = x3d.HAnimSegment()
HAnimSegment844.DEF = "Joe_l_middle_distal"
HAnimSegment844.name = "l_middle_distal"
Shape845 = x3d.Shape()
Appearance846 = x3d.Appearance()
Appearance846.USE = "SegmentLine"

Shape845.appearance = Appearance846
IndexedLineSet847 = x3d.IndexedLineSet()
IndexedLineSet847.coordIndex = [0,1,-1]
Coordinate848 = x3d.Coordinate()
Coordinate848.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

IndexedLineSet847.coord = Coordinate848

Shape845.geometry = IndexedLineSet847

HAnimSegment844.children.append(Shape845)
HAnimSite849 = x3d.HAnimSite()
HAnimSite849.DEF = "Joe_l_middle_distal_tip"
HAnimSite849.name = "l_middle_distal_tip"
HAnimSite849.translation = [0.208,0.6731,-0.0491]
Shape850 = x3d.Shape()
Shape850.USE = "sitebox"

HAnimSite849.children.append(Shape850)

HAnimSegment844.children.append(HAnimSite849)
Transform851 = x3d.Transform()
Transform851.translation = [0.2026,0.7011,-0.0494]
Shape852 = x3d.Shape()
Shape852.USE = "jointbox"

Transform851.children.append(Shape852)

HAnimSegment844.children.append(Transform851)

HAnimJoint843.children.append(HAnimSegment844)

HAnimJoint835.children.append(HAnimJoint843)

HAnimJoint827.children.append(HAnimJoint835)

HAnimJoint819.children.append(HAnimJoint827)

HAnimJoint743.children.append(HAnimJoint819)
HAnimJoint853 = x3d.HAnimJoint()
HAnimJoint853.DEF = "Joe_l_ring0"
HAnimJoint853.name = "l_ring0"
HAnimJoint853.center = [0.1956,0.8019,-0.0794]
HAnimJoint853.skinCoordIndex = [133,134]
HAnimJoint853.skinCoordWeight = [1,1]
HAnimSegment854 = x3d.HAnimSegment()
HAnimSegment854.DEF = "Joe_l_ring_metacarpal"
HAnimSegment854.name = "l_ring_metacarpal"
Shape855 = x3d.Shape()
Appearance856 = x3d.Appearance()
Appearance856.USE = "SegmentLine"

Shape855.appearance = Appearance856
IndexedLineSet857 = x3d.IndexedLineSet()
IndexedLineSet857.coordIndex = [0,1,-1]
Coordinate858 = x3d.Coordinate()
Coordinate858.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

IndexedLineSet857.coord = Coordinate858

Shape855.geometry = IndexedLineSet857

HAnimSegment854.children.append(Shape855)
Transform859 = x3d.Transform()
Transform859.translation = [0.1956,0.8019,-0.0794]
Shape860 = x3d.Shape()
Shape860.USE = "jointbox"

Transform859.children.append(Shape860)

HAnimSegment854.children.append(Transform859)

HAnimJoint853.children.append(HAnimSegment854)
HAnimJoint861 = x3d.HAnimJoint()
HAnimJoint861.DEF = "Joe_l_ring1"
HAnimJoint861.name = "l_ring1"
HAnimJoint861.center = [0.1956,0.7815,-0.0794]
HAnimJoint861.skinCoordIndex = [158,159,164,165]
HAnimJoint861.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment862 = x3d.HAnimSegment()
HAnimSegment862.DEF = "Joe_l_ring_proximal"
HAnimSegment862.name = "l_ring_proximal"
Shape863 = x3d.Shape()
Appearance864 = x3d.Appearance()
Appearance864.USE = "SegmentLine"

Shape863.appearance = Appearance864
IndexedLineSet865 = x3d.IndexedLineSet()
IndexedLineSet865.coordIndex = [0,1,-1]
Coordinate866 = x3d.Coordinate()
Coordinate866.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

IndexedLineSet865.coord = Coordinate866

Shape863.geometry = IndexedLineSet865

HAnimSegment862.children.append(Shape863)
Transform867 = x3d.Transform()
Transform867.translation = [0.1956,0.7815,-0.0794]
Shape868 = x3d.Shape()
Shape868.USE = "jointbox"

Transform867.children.append(Shape868)

HAnimSegment862.children.append(Transform867)

HAnimJoint861.children.append(HAnimSegment862)
HAnimJoint869 = x3d.HAnimJoint()
HAnimJoint869.DEF = "Joe_l_ring2"
HAnimJoint869.name = "l_ring2"
HAnimJoint869.center = [0.1973,0.7287,-0.0777]
HAnimJoint869.skinCoordIndex = [192,193,194,195]
HAnimJoint869.skinCoordWeight = [1,1,1,1]
HAnimSegment870 = x3d.HAnimSegment()
HAnimSegment870.DEF = "Joe_l_ring_middle"
HAnimSegment870.name = "l_ring_middle"
Shape871 = x3d.Shape()
Appearance872 = x3d.Appearance()
Appearance872.USE = "SegmentLine"

Shape871.appearance = Appearance872
IndexedLineSet873 = x3d.IndexedLineSet()
IndexedLineSet873.coordIndex = [0,1,-1]
Coordinate874 = x3d.Coordinate()
Coordinate874.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

IndexedLineSet873.coord = Coordinate874

Shape871.geometry = IndexedLineSet873

HAnimSegment870.children.append(Shape871)
Transform875 = x3d.Transform()
Transform875.translation = [0.1973,0.7287,-0.0777]
Shape876 = x3d.Shape()
Shape876.USE = "jointbox"

Transform875.children.append(Shape876)

HAnimSegment870.children.append(Transform875)

HAnimJoint869.children.append(HAnimSegment870)
HAnimJoint877 = x3d.HAnimJoint()
HAnimJoint877.DEF = "Joe_l_ring3"
HAnimJoint877.name = "l_ring3"
HAnimJoint877.center = [0.1983,0.7045,-0.0767]
HAnimJoint877.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint877.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment878 = x3d.HAnimSegment()
HAnimSegment878.DEF = "Joe_l_ring_distal"
HAnimSegment878.name = "l_ring_distal"
Shape879 = x3d.Shape()
Appearance880 = x3d.Appearance()
Appearance880.USE = "SegmentLine"

Shape879.appearance = Appearance880
IndexedLineSet881 = x3d.IndexedLineSet()
IndexedLineSet881.coordIndex = [0,1,-1]
Coordinate882 = x3d.Coordinate()
Coordinate882.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

IndexedLineSet881.coord = Coordinate882

Shape879.geometry = IndexedLineSet881

HAnimSegment878.children.append(Shape879)
Transform883 = x3d.Transform()
Transform883.translation = [0.1983,0.7045,-0.0767]
Shape884 = x3d.Shape()
Shape884.USE = "jointbox"

Transform883.children.append(Shape884)

HAnimSegment878.children.append(Transform883)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.DEF = "Joe_l_ring_distal_tip"
HAnimSite885.name = "l_ring_distal_tip"
HAnimSite885.translation = [0.2035,0.675,-0.0756]
Shape886 = x3d.Shape()
Shape886.USE = "sitebox"

HAnimSite885.children.append(Shape886)

HAnimSegment878.children.append(HAnimSite885)

HAnimJoint877.children.append(HAnimSegment878)

HAnimJoint869.children.append(HAnimJoint877)

HAnimJoint861.children.append(HAnimJoint869)

HAnimJoint853.children.append(HAnimJoint861)

HAnimJoint743.children.append(HAnimJoint853)
HAnimJoint887 = x3d.HAnimJoint()
HAnimJoint887.DEF = "Joe_l_pinky0"
HAnimJoint887.name = "l_pinky0"
HAnimJoint887.center = [0.1925,0.8066,-0.1036]
HAnimJoint887.skinCoordIndex = [135,136,137,165]
HAnimJoint887.skinCoordWeight = [1,1,1,0.5]
HAnimSegment888 = x3d.HAnimSegment()
HAnimSegment888.DEF = "Joe_l_pinky_metacarpal"
HAnimSegment888.name = "l_pinky_metacarpal"
Shape889 = x3d.Shape()
Appearance890 = x3d.Appearance()
Appearance890.USE = "SegmentLine"

Shape889.appearance = Appearance890
IndexedLineSet891 = x3d.IndexedLineSet()
IndexedLineSet891.coordIndex = [0,1,-1]
Coordinate892 = x3d.Coordinate()
Coordinate892.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

IndexedLineSet891.coord = Coordinate892

Shape889.geometry = IndexedLineSet891

HAnimSegment888.children.append(Shape889)
Transform893 = x3d.Transform()
Transform893.translation = [0.1925,0.8066,-0.1036]
Shape894 = x3d.Shape()
Shape894.USE = "jointbox"

Transform893.children.append(Shape894)

HAnimSegment888.children.append(Transform893)

HAnimJoint887.children.append(HAnimSegment888)
HAnimJoint895 = x3d.HAnimJoint()
HAnimJoint895.DEF = "Joe_l_pinky1"
HAnimJoint895.name = "l_pinky1"
HAnimJoint895.center = [0.1925,0.7866,-0.1036]
HAnimJoint895.skinCoordIndex = [160,161,162]
HAnimJoint895.skinCoordWeight = [1,1,1]
HAnimSegment896 = x3d.HAnimSegment()
HAnimSegment896.DEF = "Joe_l_pinky_proximal"
HAnimSegment896.name = "l_pinky_proximal"
Shape897 = x3d.Shape()
Appearance898 = x3d.Appearance()
Appearance898.USE = "SegmentLine"

Shape897.appearance = Appearance898
IndexedLineSet899 = x3d.IndexedLineSet()
IndexedLineSet899.coordIndex = [0,1,-1]
Coordinate900 = x3d.Coordinate()
Coordinate900.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

IndexedLineSet899.coord = Coordinate900

Shape897.geometry = IndexedLineSet899

HAnimSegment896.children.append(Shape897)
Transform901 = x3d.Transform()
Transform901.translation = [0.1925,0.7866,-0.1036]
Shape902 = x3d.Shape()
Shape902.USE = "jointbox"

Transform901.children.append(Shape902)

HAnimSegment896.children.append(Transform901)

HAnimJoint895.children.append(HAnimSegment896)
HAnimJoint903 = x3d.HAnimJoint()
HAnimJoint903.DEF = "Joe_l_pinky2"
HAnimJoint903.name = "l_pinky2"
HAnimJoint903.center = [0.1938,0.7452,-0.1024]
HAnimJoint903.skinCoordIndex = [205,206,207,208]
HAnimJoint903.skinCoordWeight = [1,1,1,1]
HAnimSegment904 = x3d.HAnimSegment()
HAnimSegment904.DEF = "Joe_l_pinky_middle"
HAnimSegment904.name = "l_pinky_middle"
Transform905 = x3d.Transform()
Transform905.translation = [0.1938,0.7452,-0.1024]
Shape906 = x3d.Shape()
Shape906.USE = "jointbox"

Transform905.children.append(Shape906)

HAnimSegment904.children.append(Transform905)
Shape907 = x3d.Shape()
Appearance908 = x3d.Appearance()
Appearance908.USE = "SegmentLine"

Shape907.appearance = Appearance908
IndexedLineSet909 = x3d.IndexedLineSet()
IndexedLineSet909.coordIndex = [0,1,-1]
Coordinate910 = x3d.Coordinate()
Coordinate910.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

IndexedLineSet909.coord = Coordinate910

Shape907.geometry = IndexedLineSet909

HAnimSegment904.children.append(Shape907)

HAnimJoint903.children.append(HAnimSegment904)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.DEF = "Joe_l_pinky3"
HAnimJoint911.name = "l_pinky3"
HAnimJoint911.center = [0.1948,0.7277,-0.1017]
HAnimJoint911.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint911.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment912 = x3d.HAnimSegment()
HAnimSegment912.DEF = "Joe_l_pinky_distal"
HAnimSegment912.name = "l_pinky_distal"
Shape913 = x3d.Shape()
Appearance914 = x3d.Appearance()
Appearance914.USE = "SegmentLine"

Shape913.appearance = Appearance914
IndexedLineSet915 = x3d.IndexedLineSet()
IndexedLineSet915.coordIndex = [0,1,-1]
Coordinate916 = x3d.Coordinate()
Coordinate916.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

IndexedLineSet915.coord = Coordinate916

Shape913.geometry = IndexedLineSet915

HAnimSegment912.children.append(Shape913)
Transform917 = x3d.Transform()
Transform917.translation = [0.1948,0.7277,-0.1017]
Shape918 = x3d.Shape()
Shape918.USE = "jointbox"

Transform917.children.append(Shape918)

HAnimSegment912.children.append(Transform917)
HAnimSite919 = x3d.HAnimSite()
HAnimSite919.DEF = "Joe_l_pinky_distal_tip"
HAnimSite919.name = "l_pinky_distal_tip"
HAnimSite919.translation = [0.2014,0.7009,-0.1012]
Shape920 = x3d.Shape()
Shape920.USE = "sitebox"

HAnimSite919.children.append(Shape920)

HAnimSegment912.children.append(HAnimSite919)

HAnimJoint911.children.append(HAnimSegment912)

HAnimJoint903.children.append(HAnimJoint911)

HAnimJoint895.children.append(HAnimJoint903)

HAnimJoint887.children.append(HAnimJoint895)

HAnimJoint743.children.append(HAnimJoint887)

HAnimJoint721.children.append(HAnimJoint743)

HAnimJoint697.children.append(HAnimJoint721)

HAnimJoint681.children.append(HAnimJoint697)

HAnimJoint671.children.append(HAnimJoint681)

HAnimJoint555.children.append(HAnimJoint671)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.DEF = "Joe_r_sternoclavicular"
HAnimJoint921.name = "r_sternoclavicular"
HAnimJoint921.center = [-0.03,1.46,0]
HAnimJoint921.skinCoordIndex = [10]
HAnimJoint921.skinCoordWeight = [1]
HAnimSegment922 = x3d.HAnimSegment()
HAnimSegment922.DEF = "Joe_r_clavicle"
HAnimSegment922.name = "r_clavicle"
Shape923 = x3d.Shape()
Appearance924 = x3d.Appearance()
Appearance924.USE = "SegmentLine"

Shape923.appearance = Appearance924
IndexedLineSet925 = x3d.IndexedLineSet()
IndexedLineSet925.coordIndex = [0,1,-1]
Coordinate926 = x3d.Coordinate()
Coordinate926.point = [(-0.03, 1.46, 0.02),(-0.09, 1.41, -0.09)]

IndexedLineSet925.coord = Coordinate926

Shape923.geometry = IndexedLineSet925

HAnimSegment922.children.append(Shape923)
Transform927 = x3d.Transform()
Transform927.translation = [-0.03,1.46,0.02]
Shape928 = x3d.Shape()
Shape928.USE = "jointbox"

Transform927.children.append(Shape928)

HAnimSegment922.children.append(Transform927)
HAnimSite929 = x3d.HAnimSite()
HAnimSite929.DEF = "Joe_r_clavicale"
HAnimSite929.name = "r_clavicale"
HAnimSite929.translation = [-0.03,1.46,0.035]
Shape930 = x3d.Shape()
Shape930.USE = "sitebox"

HAnimSite929.children.append(Shape930)

HAnimSegment922.children.append(HAnimSite929)

HAnimJoint921.children.append(HAnimSegment922)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.DEF = "Joe_r_acromioclavicular"
HAnimJoint931.name = "r_acromioclavicular"
HAnimJoint931.center = [-0.09,1.41,-0.11]
HAnimJoint931.skinCoordIndex = [77,29]
HAnimJoint931.skinCoordWeight = [1,0.9]
HAnimSegment932 = x3d.HAnimSegment()
HAnimSegment932.DEF = "Joe_r_scapula"
HAnimSegment932.name = "r_scapula"
Shape933 = x3d.Shape()
Appearance934 = x3d.Appearance()
Appearance934.USE = "SegmentLine"

Shape933.appearance = Appearance934
IndexedLineSet935 = x3d.IndexedLineSet()
IndexedLineSet935.coordIndex = [0,1,-1]
Coordinate936 = x3d.Coordinate()
Coordinate936.point = [(-0.09, 1.41, -0.09),(-0.2, 1.44, -0.04)]

IndexedLineSet935.coord = Coordinate936

Shape933.geometry = IndexedLineSet935

HAnimSegment932.children.append(Shape933)
Transform937 = x3d.Transform()
Transform937.translation = [-0.09,1.41,-0.09]
Shape938 = x3d.Shape()
Shape938.USE = "jointbox"

Transform937.children.append(Shape938)

HAnimSegment932.children.append(Transform937)
Transform939 = x3d.Transform()
Transform939.translation = [-0.11,1.427,-0.1375]
Shape940 = x3d.Shape()
Shape940.USE = "skinsphere"

Transform939.children.append(Shape940)

HAnimSegment932.children.append(Transform939)
HAnimSite941 = x3d.HAnimSite()
HAnimSite941.DEF = "Joe_r_acromion"
HAnimSite941.name = "r_acromion"
HAnimSite941.translation = [-0.178,1.4825,-0.0625]
Shape942 = x3d.Shape()
Shape942.USE = "sitebox"

HAnimSite941.children.append(Shape942)

HAnimSegment932.children.append(HAnimSite941)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.DEF = "Joe_r_axilla_ant"
HAnimSite943.name = "r_axilla_ant"
HAnimSite943.translation = [-0.17,1.38,0.007]
Shape944 = x3d.Shape()
Shape944.USE = "sitebox"

HAnimSite943.children.append(Shape944)

HAnimSegment932.children.append(HAnimSite943)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.DEF = "Joe_r_axilla_post"
HAnimSite945.name = "r_axilla_post"
HAnimSite945.translation = [-0.16,1.38,-0.127]
Shape946 = x3d.Shape()
Shape946.USE = "sitebox"

HAnimSite945.children.append(Shape946)

HAnimSegment932.children.append(HAnimSite945)

HAnimJoint931.children.append(HAnimSegment932)
HAnimJoint947 = x3d.HAnimJoint()
HAnimJoint947.DEF = "Joe_r_shoulder"
HAnimJoint947.name = "r_shoulder"
HAnimJoint947.rotation = [0,0,-0.999999999999779,0.0372377698785245]
HAnimJoint947.center = [-0.2,1.44,-0.04]
HAnimJoint947.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint947.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimSegment948 = x3d.HAnimSegment()
HAnimSegment948.DEF = "Joe_r_upperarm"
HAnimSegment948.name = "r_upperarm"
Transform949 = x3d.Transform()
Transform949.translation = [-0.2,1.44,-0.04]
Shape950 = x3d.Shape()
Shape950.USE = "jointbox"

Transform949.children.append(Shape950)

HAnimSegment948.children.append(Transform949)
Shape951 = x3d.Shape()
Appearance952 = x3d.Appearance()
Appearance952.USE = "SegmentLine"

Shape951.appearance = Appearance952
IndexedLineSet953 = x3d.IndexedLineSet()
IndexedLineSet953.coordIndex = [0,1,-1]
Coordinate954 = x3d.Coordinate()
Coordinate954.point = [(-0.2, 1.44, -0.04),(-0.2, 1.1388, -0.04)]

IndexedLineSet953.coord = Coordinate954

Shape951.geometry = IndexedLineSet953

HAnimSegment948.children.append(Shape951)
Transform955 = x3d.Transform()
Transform955.translation = [-0.178,1.4825,-0.0625]
Shape956 = x3d.Shape()
Shape956.USE = "skinsphere"

Transform955.children.append(Shape956)

HAnimSegment948.children.append(Transform955)
Transform957 = x3d.Transform()
Transform957.translation = [-0.17,1.38,0.007]
Shape958 = x3d.Shape()
Shape958.USE = "skinsphere"

Transform957.children.append(Shape958)

HAnimSegment948.children.append(Transform957)
Transform959 = x3d.Transform()
Transform959.translation = [-0.16,1.38,-0.127]
Shape960 = x3d.Shape()
Shape960.USE = "skinsphere"

Transform959.children.append(Shape960)

HAnimSegment948.children.append(Transform959)
Transform961 = x3d.Transform()
Transform961.translation = [-0.235,1.42,-0.0625]
Shape962 = x3d.Shape()
Shape962.USE = "skinsphere"

Transform961.children.append(Shape962)

HAnimSegment948.children.append(Transform961)
Transform963 = x3d.Transform()
Transform963.translation = [-0.23,1.235,-0.04]
Shape964 = x3d.Shape()
Shape964.USE = "skinsphere"

Transform963.children.append(Shape964)

HAnimSegment948.children.append(Transform963)
Transform965 = x3d.Transform()
Transform965.translation = [-0.16,1.23,-0.04]
Shape966 = x3d.Shape()
Shape966.USE = "skinsphere"

Transform965.children.append(Shape966)

HAnimSegment948.children.append(Transform965)
Transform967 = x3d.Transform()
Transform967.translation = [-0.2,1.23,-0.105]
Shape968 = x3d.Shape()
Shape968.USE = "skinsphere"

Transform967.children.append(Shape968)

HAnimSegment948.children.append(Transform967)
Transform969 = x3d.Transform()
Transform969.translation = [-0.2,1.235,0.02]
Shape970 = x3d.Shape()
Shape970.USE = "skinsphere"

Transform969.children.append(Shape970)

HAnimSegment948.children.append(Transform969)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.DEF = "Joe_r_humeral_medial_epicn"
HAnimSite971.name = "r_humeral_medial_epicn"
HAnimSite971.translation = [-0.165,1.1388,-0.04]
Shape972 = x3d.Shape()
Shape972.USE = "sitebox"

HAnimSite971.children.append(Shape972)

HAnimSegment948.children.append(HAnimSite971)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.DEF = "Joe_r_radiale"
HAnimSite973.name = "r_radiale"
HAnimSite973.translation = [-0.23,1.133,-0.055]
Shape974 = x3d.Shape()
Shape974.USE = "sitebox"

HAnimSite973.children.append(Shape974)

HAnimSegment948.children.append(HAnimSite973)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.DEF = "Joe_r_humeral_lateral_epicn"
HAnimSite975.name = "r_humeral_lateral_epicn"
HAnimSite975.translation = [-0.244,1.1388,-0.04]
Shape976 = x3d.Shape()
Shape976.USE = "sitebox"

HAnimSite975.children.append(Shape976)

HAnimSegment948.children.append(HAnimSite975)

HAnimJoint947.children.append(HAnimSegment948)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.DEF = "Joe_r_elbow"
HAnimJoint977.name = "r_elbow"
HAnimJoint977.rotation = [-0.970142500145333,-0.242535625036333,0,0.149344152360623]
HAnimJoint977.center = [-0.2,1.1388,-0.04]
HAnimJoint977.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint977.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.DEF = "Joe_r_forearm"
HAnimSegment978.name = "r_forearm"
Shape979 = x3d.Shape()
Appearance980 = x3d.Appearance()
Appearance980.USE = "SegmentLine"

Shape979.appearance = Appearance980
IndexedLineSet981 = x3d.IndexedLineSet()
IndexedLineSet981.coordIndex = [0,1,-1]
Coordinate982 = x3d.Coordinate()
Coordinate982.point = [(-0.2, 1.1388, -0.04),(-0.2, 0.89, -0.04)]

IndexedLineSet981.coord = Coordinate982

Shape979.geometry = IndexedLineSet981

HAnimSegment978.children.append(Shape979)
Transform983 = x3d.Transform()
Transform983.translation = [-0.2,1.1388,-0.04]
Shape984 = x3d.Shape()
Shape984.USE = "jointbox"

Transform983.children.append(Shape984)

HAnimSegment978.children.append(Transform983)
Transform985 = x3d.Transform()
Transform985.translation = [-0.2,1.1388,0.013]
Shape986 = x3d.Shape()
Shape986.USE = "skinsphere"

Transform985.children.append(Shape986)

HAnimSegment978.children.append(Transform985)
Transform987 = x3d.Transform()
Transform987.translation = [-0.225,1,-0.01]
Shape988 = x3d.Shape()
Shape988.USE = "skinsphere"

Transform987.children.append(Shape988)

HAnimSegment978.children.append(Transform987)
Transform989 = x3d.Transform()
Transform989.translation = [-0.225,1,-0.07]
Shape990 = x3d.Shape()
Shape990.USE = "skinsphere"

Transform989.children.append(Shape990)

HAnimSegment978.children.append(Transform989)
Transform991 = x3d.Transform()
Transform991.translation = [-0.185,1,-0.01]
Shape992 = x3d.Shape()
Shape992.USE = "skinsphere"

Transform991.children.append(Shape992)

HAnimSegment978.children.append(Transform991)
Transform993 = x3d.Transform()
Transform993.translation = [-0.185,1,-0.07]
Shape994 = x3d.Shape()
Shape994.USE = "skinsphere"

Transform993.children.append(Shape994)

HAnimSegment978.children.append(Transform993)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.DEF = "Joe_r_radial_styloid"
HAnimSite995.name = "r_radial_styloid"
HAnimSite995.translation = [-0.2,0.9,-0.015]
Shape996 = x3d.Shape()
Shape996.USE = "sitebox"

HAnimSite995.children.append(Shape996)

HAnimSegment978.children.append(HAnimSite995)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.DEF = "Joe_r_olecranon"
HAnimSite997.name = "r_olecranon"
HAnimSite997.translation = [-0.2,1.1388,-0.08]
Shape998 = x3d.Shape()
Shape998.USE = "sitebox"

HAnimSite997.children.append(Shape998)

HAnimSegment978.children.append(HAnimSite997)

HAnimJoint977.children.append(HAnimSegment978)
HAnimJoint999 = x3d.HAnimJoint()
HAnimJoint999.DEF = "Joe_r_wrist"
HAnimJoint999.name = "r_wrist"
HAnimJoint999.center = [-0.2,0.89,-0.04]
HAnimJoint999.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint999.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment1000 = x3d.HAnimSegment()
HAnimSegment1000.DEF = "Joe_r_hand"
HAnimSegment1000.name = "r_hand"
Shape1001 = x3d.Shape()
Appearance1002 = x3d.Appearance()
Appearance1002.USE = "SegmentLine"

Shape1001.appearance = Appearance1002
IndexedLineSet1003 = x3d.IndexedLineSet()
IndexedLineSet1003.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate1004 = x3d.Coordinate()
Coordinate1004.point = [(-0.2, 0.89, -0.04),(-0.2, 0.85, 0),(-0.2, 0.84, -0.015),(-0.2, 0.835, -0.04),(-0.2, 0.835, -0.065),(-0.2, 0.84, -0.085)]

IndexedLineSet1003.coord = Coordinate1004

Shape1001.geometry = IndexedLineSet1003

HAnimSegment1000.children.append(Shape1001)
Transform1005 = x3d.Transform()
Transform1005.translation = [-0.2,0.89,-0.04]
Shape1006 = x3d.Shape()
Shape1006.USE = "jointbox"

Transform1005.children.append(Shape1006)

HAnimSegment1000.children.append(Transform1005)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.DEF = "Joe_r_ulnar_styloid"
HAnimSite1007.name = "r_ulnar_styloid"
HAnimSite1007.translation = [-0.2,0.9,-0.085]
Shape1008 = x3d.Shape()
Shape1008.USE = "sitebox"

HAnimSite1007.children.append(Shape1008)

HAnimSegment1000.children.append(HAnimSite1007)

HAnimJoint999.children.append(HAnimSegment1000)
HAnimJoint1009 = x3d.HAnimJoint()
HAnimJoint1009.DEF = "Joe_r_thumb1"
HAnimJoint1009.name = "r_thumb1"
HAnimJoint1009.rotation = [0.999999999999976,0,0,0.11171329853783]
HAnimJoint1009.center = [-0.2,0.85,0]
HAnimJoint1009.skinCoordIndex = [243,244]
HAnimJoint1009.skinCoordWeight = [1,1]
HAnimSegment1010 = x3d.HAnimSegment()
HAnimSegment1010.DEF = "Joe_r_thumb_metacarpal"
HAnimSegment1010.name = "r_thumb_metacarpal"
Shape1011 = x3d.Shape()
Appearance1012 = x3d.Appearance()
Appearance1012.USE = "SegmentLine"

Shape1011.appearance = Appearance1012
IndexedLineSet1013 = x3d.IndexedLineSet()
IndexedLineSet1013.coordIndex = [0,1,-1]
Coordinate1014 = x3d.Coordinate()
Coordinate1014.point = [(-0.2, 0.85, 0),(-0.2, 0.82, 0.03)]

IndexedLineSet1013.coord = Coordinate1014

Shape1011.geometry = IndexedLineSet1013

HAnimSegment1010.children.append(Shape1011)
Transform1015 = x3d.Transform()
Transform1015.translation = [-0.2,0.85,0]
Shape1016 = x3d.Shape()
Shape1016.USE = "jointbox"

Transform1015.children.append(Shape1016)

HAnimSegment1010.children.append(Transform1015)

HAnimJoint1009.children.append(HAnimSegment1010)
HAnimJoint1017 = x3d.HAnimJoint()
HAnimJoint1017.DEF = "Joe_r_thumb2"
HAnimJoint1017.name = "r_thumb2"
HAnimJoint1017.rotation = [0.707106781186553,0.707106781186553,0,0.167569951968385]
HAnimJoint1017.center = [-0.2,0.82,0.03]
HAnimJoint1017.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint1017.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment1018 = x3d.HAnimSegment()
HAnimSegment1018.DEF = "Joe_r_thumb_proximal"
HAnimSegment1018.name = "r_thumb_proximal"
Shape1019 = x3d.Shape()
Appearance1020 = x3d.Appearance()
Appearance1020.USE = "SegmentLine"

Shape1019.appearance = Appearance1020
IndexedLineSet1021 = x3d.IndexedLineSet()
IndexedLineSet1021.coordIndex = [0,1,-1]
Coordinate1022 = x3d.Coordinate()
Coordinate1022.point = [(-0.2, 0.82, 0.03),(-0.2, 0.8, 0.05)]

IndexedLineSet1021.coord = Coordinate1022

Shape1019.geometry = IndexedLineSet1021

HAnimSegment1018.children.append(Shape1019)
Transform1023 = x3d.Transform()
Transform1023.translation = [-0.2,0.82,0.03]
Shape1024 = x3d.Shape()
Shape1024.USE = "jointbox"

Transform1023.children.append(Shape1024)

HAnimSegment1018.children.append(Transform1023)

HAnimJoint1017.children.append(HAnimSegment1018)
HAnimJoint1025 = x3d.HAnimJoint()
HAnimJoint1025.DEF = "Joe_r_thumb3"
HAnimJoint1025.name = "r_thumb3"
HAnimJoint1025.rotation = [0.707106781186553,0.707106781186553,0,0.167569951968385]
HAnimJoint1025.center = [-0.2,0.8,0.05]
HAnimJoint1025.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint1025.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1026 = x3d.HAnimSegment()
HAnimSegment1026.DEF = "Joe_r_thumb_distal"
HAnimSegment1026.name = "r_thumb_distal"
Shape1027 = x3d.Shape()
Appearance1028 = x3d.Appearance()
Appearance1028.USE = "SegmentLine"

Shape1027.appearance = Appearance1028
IndexedLineSet1029 = x3d.IndexedLineSet()
IndexedLineSet1029.coordIndex = [0,1,-1]
Coordinate1030 = x3d.Coordinate()
Coordinate1030.point = [(-0.2, 0.8, 0.05),(-0.2, 0.78, 0.07)]

IndexedLineSet1029.coord = Coordinate1030

Shape1027.geometry = IndexedLineSet1029

HAnimSegment1026.children.append(Shape1027)
Transform1031 = x3d.Transform()
Transform1031.DEF = "Thumbnail"
Transform1031.translation = [-0.2,0.785,0.075]
Shape1032 = x3d.Shape()
Shape1032.USE = "skinsphere"

Transform1031.children.append(Shape1032)

HAnimSegment1026.children.append(Transform1031)
Transform1033 = x3d.Transform()
Transform1033.translation = [-0.2,0.8,0.05]
Shape1034 = x3d.Shape()
Shape1034.USE = "jointbox"

Transform1033.children.append(Shape1034)

HAnimSegment1026.children.append(Transform1033)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.DEF = "Joe_r_thumb_distal_tip"
HAnimSite1035.name = "r_thumb_distal_tip"
HAnimSite1035.translation = [-0.2,0.78,0.07]
Shape1036 = x3d.Shape()
Shape1036.USE = "sitebox"

HAnimSite1035.children.append(Shape1036)

HAnimSegment1026.children.append(HAnimSite1035)

HAnimJoint1025.children.append(HAnimSegment1026)

HAnimJoint1017.children.append(HAnimJoint1025)

HAnimJoint1009.children.append(HAnimJoint1017)

HAnimJoint999.children.append(HAnimJoint1009)
HAnimJoint1037 = x3d.HAnimJoint()
HAnimJoint1037.DEF = "Joe_r_index0"
HAnimJoint1037.name = "r_index0"
HAnimJoint1037.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1037.center = [-0.2,0.84,-0.015]
HAnimJoint1037.skinCoordIndex = [245,246]
HAnimJoint1037.skinCoordWeight = [1,1]
HAnimSegment1038 = x3d.HAnimSegment()
HAnimSegment1038.DEF = "Joe_r_index_metacarpal"
HAnimSegment1038.name = "r_index_metacarpal"
Shape1039 = x3d.Shape()
Appearance1040 = x3d.Appearance()
Appearance1040.USE = "SegmentLine"

Shape1039.appearance = Appearance1040
IndexedLineSet1041 = x3d.IndexedLineSet()
IndexedLineSet1041.coordIndex = [0,1,-1]
Coordinate1042 = x3d.Coordinate()
Coordinate1042.point = [(-0.2, 0.84, -0.015),(-0.2, 0.793, -0.015)]

IndexedLineSet1041.coord = Coordinate1042

Shape1039.geometry = IndexedLineSet1041

HAnimSegment1038.children.append(Shape1039)
Transform1043 = x3d.Transform()
Transform1043.translation = [-0.2,0.84,-0.015]
Shape1044 = x3d.Shape()
Shape1044.USE = "jointbox"

Transform1043.children.append(Shape1044)

HAnimSegment1038.children.append(Transform1043)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.DEF = "Joe_r_metacarpal_pha2"
HAnimSite1045.name = "r_metacarpal_pha2"
HAnimSite1045.translation = [-0.2,0.793,-0.005]
Shape1046 = x3d.Shape()
Shape1046.USE = "sitebox"

HAnimSite1045.children.append(Shape1046)

HAnimSegment1038.children.append(HAnimSite1045)

HAnimJoint1037.children.append(HAnimSegment1038)
HAnimJoint1047 = x3d.HAnimJoint()
HAnimJoint1047.DEF = "Joe_r_index1"
HAnimJoint1047.name = "r_index1"
HAnimJoint1047.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1047.center = [-0.2,0.793,-0.015]
HAnimJoint1047.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint1047.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment1048 = x3d.HAnimSegment()
HAnimSegment1048.DEF = "Joe_r_index_proximal"
HAnimSegment1048.name = "r_index_proximal"
Shape1049 = x3d.Shape()
Appearance1050 = x3d.Appearance()
Appearance1050.USE = "SegmentLine"

Shape1049.appearance = Appearance1050
IndexedLineSet1051 = x3d.IndexedLineSet()
IndexedLineSet1051.coordIndex = [0,1,-1]
Coordinate1052 = x3d.Coordinate()
Coordinate1052.point = [(-0.2, 0.793, -0.015),(-0.2, 0.745, -0.015)]

IndexedLineSet1051.coord = Coordinate1052

Shape1049.geometry = IndexedLineSet1051

HAnimSegment1048.children.append(Shape1049)
Transform1053 = x3d.Transform()
Transform1053.translation = [-0.2,0.793,-0.015]
Shape1054 = x3d.Shape()
Shape1054.USE = "jointbox"

Transform1053.children.append(Shape1054)

HAnimSegment1048.children.append(Transform1053)

HAnimJoint1047.children.append(HAnimSegment1048)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.DEF = "Joe_r_index2"
HAnimJoint1055.name = "r_index2"
HAnimJoint1055.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1055.center = [-0.2,0.745,-0.015]
HAnimJoint1055.skinCoordIndex = [282,283,284,285]
HAnimJoint1055.skinCoordWeight = [1,1,1,1]
HAnimSegment1056 = x3d.HAnimSegment()
HAnimSegment1056.DEF = "Joe_r_index_middle"
HAnimSegment1056.name = "r_index_middle"
Shape1057 = x3d.Shape()
Appearance1058 = x3d.Appearance()
Appearance1058.USE = "SegmentLine"

Shape1057.appearance = Appearance1058
IndexedLineSet1059 = x3d.IndexedLineSet()
IndexedLineSet1059.coordIndex = [0,1,-1]
Coordinate1060 = x3d.Coordinate()
Coordinate1060.point = [(-0.2, 0.745, -0.015),(-0.2, 0.72, -0.015)]

IndexedLineSet1059.coord = Coordinate1060

Shape1057.geometry = IndexedLineSet1059

HAnimSegment1056.children.append(Shape1057)
Transform1061 = x3d.Transform()
Transform1061.translation = [-0.2,0.745,-0.015]
Shape1062 = x3d.Shape()
Shape1062.USE = "jointbox"

Transform1061.children.append(Shape1062)

HAnimSegment1056.children.append(Transform1061)

HAnimJoint1055.children.append(HAnimSegment1056)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.DEF = "Joe_r_index3"
HAnimJoint1063.name = "r_index3"
HAnimJoint1063.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1063.center = [-0.2,0.72,-0.015]
HAnimJoint1063.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint1063.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.DEF = "Joe_r_index_distal"
HAnimSegment1064.name = "r_index_distal"
Shape1065 = x3d.Shape()
Appearance1066 = x3d.Appearance()
Appearance1066.USE = "SegmentLine"

Shape1065.appearance = Appearance1066
IndexedLineSet1067 = x3d.IndexedLineSet()
IndexedLineSet1067.coordIndex = [0,1,-1]
Coordinate1068 = x3d.Coordinate()
Coordinate1068.point = [(-0.2, 0.72, -0.015),(-0.2, 0.695, -0.015)]

IndexedLineSet1067.coord = Coordinate1068

Shape1065.geometry = IndexedLineSet1067

HAnimSegment1064.children.append(Shape1065)
Transform1069 = x3d.Transform()
Transform1069.translation = [-0.2,0.72,-0.015]
Shape1070 = x3d.Shape()
Shape1070.USE = "jointbox"

Transform1069.children.append(Shape1070)

HAnimSegment1064.children.append(Transform1069)
HAnimSite1071 = x3d.HAnimSite()
HAnimSite1071.DEF = "Joe_r_index_distal_tip"
HAnimSite1071.name = "r_index_distal_tip"
HAnimSite1071.translation = [-0.2,0.695,-0.015]
Shape1072 = x3d.Shape()
Shape1072.USE = "sitebox"

HAnimSite1071.children.append(Shape1072)

HAnimSegment1064.children.append(HAnimSite1071)

HAnimJoint1063.children.append(HAnimSegment1064)

HAnimJoint1055.children.append(HAnimJoint1063)

HAnimJoint1047.children.append(HAnimJoint1055)

HAnimJoint1037.children.append(HAnimJoint1047)

HAnimJoint999.children.append(HAnimJoint1037)
HAnimJoint1073 = x3d.HAnimJoint()
HAnimJoint1073.DEF = "Joe_r_middle0"
HAnimJoint1073.name = "r_middle0"
HAnimJoint1073.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1073.center = [-0.2,0.835,-0.04]
HAnimJoint1073.skinCoordIndex = [247,248]
HAnimJoint1073.skinCoordWeight = [1,1]
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.DEF = "Joe_r_middle_metacarpal"
HAnimSegment1074.name = "r_middle_metacarpal"
Shape1075 = x3d.Shape()
Appearance1076 = x3d.Appearance()
Appearance1076.USE = "SegmentLine"

Shape1075.appearance = Appearance1076
IndexedLineSet1077 = x3d.IndexedLineSet()
IndexedLineSet1077.coordIndex = [0,1,-1]
Coordinate1078 = x3d.Coordinate()
Coordinate1078.point = [(-0.2, 0.835, -0.04),(-0.2, 0.788, -0.04)]

IndexedLineSet1077.coord = Coordinate1078

Shape1075.geometry = IndexedLineSet1077

HAnimSegment1074.children.append(Shape1075)
Transform1079 = x3d.Transform()
Transform1079.translation = [-0.2,0.835,-0.04]
Shape1080 = x3d.Shape()
Shape1080.USE = "jointbox"

Transform1079.children.append(Shape1080)

HAnimSegment1074.children.append(Transform1079)

HAnimJoint1073.children.append(HAnimSegment1074)
HAnimJoint1081 = x3d.HAnimJoint()
HAnimJoint1081.DEF = "Joe_r_middle1"
HAnimJoint1081.name = "r_middle1"
HAnimJoint1081.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1081.center = [-0.2,0.788,-0.04]
HAnimJoint1081.skinCoordIndex = [272,273,279,280]
HAnimJoint1081.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1082 = x3d.HAnimSegment()
HAnimSegment1082.DEF = "Joe_r_middle_proximal"
HAnimSegment1082.name = "r_middle_proximal"
Shape1083 = x3d.Shape()
Appearance1084 = x3d.Appearance()
Appearance1084.USE = "SegmentLine"

Shape1083.appearance = Appearance1084
IndexedLineSet1085 = x3d.IndexedLineSet()
IndexedLineSet1085.coordIndex = [0,1,-1]
Coordinate1086 = x3d.Coordinate()
Coordinate1086.point = [(-0.2, 0.788, -0.04),(-0.2, 0.74, -0.04)]

IndexedLineSet1085.coord = Coordinate1086

Shape1083.geometry = IndexedLineSet1085

HAnimSegment1082.children.append(Shape1083)
Transform1087 = x3d.Transform()
Transform1087.translation = [-0.2,0.788,-0.04]
Shape1088 = x3d.Shape()
Shape1088.USE = "jointbox"

Transform1087.children.append(Shape1088)

HAnimSegment1082.children.append(Transform1087)

HAnimJoint1081.children.append(HAnimSegment1082)
HAnimJoint1089 = x3d.HAnimJoint()
HAnimJoint1089.DEF = "Joe_r_middle2"
HAnimJoint1089.name = "r_middle2"
HAnimJoint1089.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1089.center = [-0.2,0.74,-0.04]
HAnimJoint1089.skinCoordIndex = [295,296,297,298]
HAnimJoint1089.skinCoordWeight = [1,1,1,1]
HAnimSegment1090 = x3d.HAnimSegment()
HAnimSegment1090.DEF = "Joe_r_middle_middle"
HAnimSegment1090.name = "r_middle_middle"
Shape1091 = x3d.Shape()
Appearance1092 = x3d.Appearance()
Appearance1092.USE = "SegmentLine"

Shape1091.appearance = Appearance1092
IndexedLineSet1093 = x3d.IndexedLineSet()
IndexedLineSet1093.coordIndex = [0,1,-1]
Coordinate1094 = x3d.Coordinate()
Coordinate1094.point = [(-0.2, 0.74, -0.04),(-0.2, 0.7142, -0.04)]

IndexedLineSet1093.coord = Coordinate1094

Shape1091.geometry = IndexedLineSet1093

HAnimSegment1090.children.append(Shape1091)
Transform1095 = x3d.Transform()
Transform1095.translation = [-0.2,0.74,-0.04]
Shape1096 = x3d.Shape()
Shape1096.USE = "jointbox"

Transform1095.children.append(Shape1096)

HAnimSegment1090.children.append(Transform1095)

HAnimJoint1089.children.append(HAnimSegment1090)
HAnimJoint1097 = x3d.HAnimJoint()
HAnimJoint1097.DEF = "Joe_r_middle3"
HAnimJoint1097.name = "r_middle3"
HAnimJoint1097.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1097.center = [-0.2,0.7142,-0.04]
HAnimJoint1097.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint1097.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.DEF = "Joe_r_middle_distal"
HAnimSegment1098.name = "r_middle_distal"
Shape1099 = x3d.Shape()
Appearance1100 = x3d.Appearance()
Appearance1100.USE = "SegmentLine"

Shape1099.appearance = Appearance1100
IndexedLineSet1101 = x3d.IndexedLineSet()
IndexedLineSet1101.coordIndex = [0,1,-1]
Coordinate1102 = x3d.Coordinate()
Coordinate1102.point = [(-0.2, 0.7142, -0.04),(-0.2, 0.6758, -0.04)]

IndexedLineSet1101.coord = Coordinate1102

Shape1099.geometry = IndexedLineSet1101

HAnimSegment1098.children.append(Shape1099)
Transform1103 = x3d.Transform()
Transform1103.translation = [-0.2,0.7142,-0.04]
Shape1104 = x3d.Shape()
Shape1104.USE = "jointbox"

Transform1103.children.append(Shape1104)

HAnimSegment1098.children.append(Transform1103)
HAnimSite1105 = x3d.HAnimSite()
HAnimSite1105.DEF = "Joe_r_dactylion"
HAnimSite1105.name = "r_dactylion"
HAnimSite1105.translation = [-0.2,0.68,-0.04]
Shape1106 = x3d.Shape()
Shape1106.USE = "sitebox"

HAnimSite1105.children.append(Shape1106)

HAnimSegment1098.children.append(HAnimSite1105)
HAnimSite1107 = x3d.HAnimSite()
HAnimSite1107.DEF = "Joe_r_middle_distal_tip"
HAnimSite1107.name = "r_middle_distal_tip"
HAnimSite1107.translation = [-0.2,0.68,-0.04]
Shape1108 = x3d.Shape()
Shape1108.USE = "sitebox"

HAnimSite1107.children.append(Shape1108)

HAnimSegment1098.children.append(HAnimSite1107)

HAnimJoint1097.children.append(HAnimSegment1098)

HAnimJoint1089.children.append(HAnimJoint1097)

HAnimJoint1081.children.append(HAnimJoint1089)

HAnimJoint1073.children.append(HAnimJoint1081)

HAnimJoint999.children.append(HAnimJoint1073)
HAnimJoint1109 = x3d.HAnimJoint()
HAnimJoint1109.DEF = "Joe_r_ring0"
HAnimJoint1109.name = "r_ring0"
HAnimJoint1109.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1109.center = [-0.2,0.835,-0.065]
HAnimJoint1109.skinCoordIndex = [249,250]
HAnimJoint1109.skinCoordWeight = [1,1]
HAnimSegment1110 = x3d.HAnimSegment()
HAnimSegment1110.DEF = "Joe_r_ring_metacarpal"
HAnimSegment1110.name = "r_ring_metacarpal"
Shape1111 = x3d.Shape()
Appearance1112 = x3d.Appearance()
Appearance1112.USE = "SegmentLine"

Shape1111.appearance = Appearance1112
IndexedLineSet1113 = x3d.IndexedLineSet()
IndexedLineSet1113.coordIndex = [0,1,-1]
Coordinate1114 = x3d.Coordinate()
Coordinate1114.point = [(-0.2, 0.835, -0.065),(-0.2, 0.793, -0.065)]

IndexedLineSet1113.coord = Coordinate1114

Shape1111.geometry = IndexedLineSet1113

HAnimSegment1110.children.append(Shape1111)
Transform1115 = x3d.Transform()
Transform1115.translation = [-0.2,0.835,-0.065]
Shape1116 = x3d.Shape()
Shape1116.USE = "jointbox"

Transform1115.children.append(Shape1116)

HAnimSegment1110.children.append(Transform1115)

HAnimJoint1109.children.append(HAnimSegment1110)
HAnimJoint1117 = x3d.HAnimJoint()
HAnimJoint1117.DEF = "Joe_r_ring1"
HAnimJoint1117.name = "r_ring1"
HAnimJoint1117.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1117.center = [-0.2,0.793,-0.065]
HAnimJoint1117.skinCoordIndex = [274,275,280,281]
HAnimJoint1117.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1118 = x3d.HAnimSegment()
HAnimSegment1118.DEF = "Joe_r_ring_proximal"
HAnimSegment1118.name = "r_ring_proximal"
Shape1119 = x3d.Shape()
Appearance1120 = x3d.Appearance()
Appearance1120.USE = "SegmentLine"

Shape1119.appearance = Appearance1120
IndexedLineSet1121 = x3d.IndexedLineSet()
IndexedLineSet1121.coordIndex = [0,1,-1]
Coordinate1122 = x3d.Coordinate()
Coordinate1122.point = [(-0.2, 0.793, -0.065),(-0.2, 0.74, -0.065)]

IndexedLineSet1121.coord = Coordinate1122

Shape1119.geometry = IndexedLineSet1121

HAnimSegment1118.children.append(Shape1119)
Transform1123 = x3d.Transform()
Transform1123.translation = [-0.2,0.793,-0.065]
Shape1124 = x3d.Shape()
Shape1124.USE = "jointbox"

Transform1123.children.append(Shape1124)

HAnimSegment1118.children.append(Transform1123)

HAnimJoint1117.children.append(HAnimSegment1118)
HAnimJoint1125 = x3d.HAnimJoint()
HAnimJoint1125.DEF = "Joe_r_ring2"
HAnimJoint1125.name = "r_ring2"
HAnimJoint1125.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1125.center = [-0.2,0.74,-0.065]
HAnimJoint1125.skinCoordIndex = [308,309,310,311]
HAnimJoint1125.skinCoordWeight = [1,1,1,1]
HAnimSegment1126 = x3d.HAnimSegment()
HAnimSegment1126.DEF = "Joe_r_ring_middle"
HAnimSegment1126.name = "r_ring_middle"
Shape1127 = x3d.Shape()
Appearance1128 = x3d.Appearance()
Appearance1128.USE = "SegmentLine"

Shape1127.appearance = Appearance1128
IndexedLineSet1129 = x3d.IndexedLineSet()
IndexedLineSet1129.coordIndex = [0,1,-1]
Coordinate1130 = x3d.Coordinate()
Coordinate1130.point = [(-0.2, 0.74, -0.065),(-0.2, 0.7177, -0.065)]

IndexedLineSet1129.coord = Coordinate1130

Shape1127.geometry = IndexedLineSet1129

HAnimSegment1126.children.append(Shape1127)
Transform1131 = x3d.Transform()
Transform1131.translation = [-0.2,0.74,-0.065]
Shape1132 = x3d.Shape()
Shape1132.USE = "jointbox"

Transform1131.children.append(Shape1132)

HAnimSegment1126.children.append(Transform1131)

HAnimJoint1125.children.append(HAnimSegment1126)
HAnimJoint1133 = x3d.HAnimJoint()
HAnimJoint1133.DEF = "Joe_r_ring3"
HAnimJoint1133.name = "r_ring3"
HAnimJoint1133.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1133.center = [-0.2,0.7177,-0.065]
HAnimJoint1133.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint1133.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1134 = x3d.HAnimSegment()
HAnimSegment1134.DEF = "Joe_r_ring_distal"
HAnimSegment1134.name = "r_ring_distal"
Shape1135 = x3d.Shape()
Appearance1136 = x3d.Appearance()
Appearance1136.USE = "SegmentLine"

Shape1135.appearance = Appearance1136
IndexedLineSet1137 = x3d.IndexedLineSet()
IndexedLineSet1137.coordIndex = [0,1,-1]
Coordinate1138 = x3d.Coordinate()
Coordinate1138.point = [(-0.2, 0.7177, -0.065),(-0.2, 0.695, -0.065)]

IndexedLineSet1137.coord = Coordinate1138

Shape1135.geometry = IndexedLineSet1137

HAnimSegment1134.children.append(Shape1135)
Transform1139 = x3d.Transform()
Transform1139.translation = [-0.2,0.7177,-0.065]
Shape1140 = x3d.Shape()
Shape1140.USE = "jointbox"

Transform1139.children.append(Shape1140)

HAnimSegment1134.children.append(Transform1139)
HAnimSite1141 = x3d.HAnimSite()
HAnimSite1141.DEF = "Joe_r_ring_distal_tip"
HAnimSite1141.name = "r_ring_distal_tip"
HAnimSite1141.translation = [-0.2,0.695,-0.065]
Shape1142 = x3d.Shape()
Shape1142.USE = "sitebox"

HAnimSite1141.children.append(Shape1142)

HAnimSegment1134.children.append(HAnimSite1141)

HAnimJoint1133.children.append(HAnimSegment1134)

HAnimJoint1125.children.append(HAnimJoint1133)

HAnimJoint1117.children.append(HAnimJoint1125)

HAnimJoint1109.children.append(HAnimJoint1117)

HAnimJoint999.children.append(HAnimJoint1109)
HAnimJoint1143 = x3d.HAnimJoint()
HAnimJoint1143.DEF = "Joe_r_pinky0"
HAnimJoint1143.name = "r_pinky0"
HAnimJoint1143.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1143.center = [-0.2,0.84,-0.085]
HAnimJoint1143.skinCoordIndex = [251,252,253,281]
HAnimJoint1143.skinCoordWeight = [1,1,1,0.5]
HAnimSegment1144 = x3d.HAnimSegment()
HAnimSegment1144.DEF = "Joe_r_pinky_metacarpal"
HAnimSegment1144.name = "r_pinky_metacarpal"
Shape1145 = x3d.Shape()
Appearance1146 = x3d.Appearance()
Appearance1146.USE = "SegmentLine"

Shape1145.appearance = Appearance1146
IndexedLineSet1147 = x3d.IndexedLineSet()
IndexedLineSet1147.coordIndex = [0,1,-1]
Coordinate1148 = x3d.Coordinate()
Coordinate1148.point = [(-0.2, 0.84, -0.085),(-0.2, 0.79, -0.085)]

IndexedLineSet1147.coord = Coordinate1148

Shape1145.geometry = IndexedLineSet1147

HAnimSegment1144.children.append(Shape1145)
Transform1149 = x3d.Transform()
Transform1149.translation = [-0.2,0.84,-0.085]
Shape1150 = x3d.Shape()
Shape1150.USE = "jointbox"

Transform1149.children.append(Shape1150)

HAnimSegment1144.children.append(Transform1149)
HAnimSite1151 = x3d.HAnimSite()
HAnimSite1151.DEF = "Joe_r_metacarpal_pha5"
HAnimSite1151.name = "r_metacarpal_pha5"
HAnimSite1151.translation = [-0.2,0.79,-0.095]
Shape1152 = x3d.Shape()
Shape1152.USE = "sitebox"

HAnimSite1151.children.append(Shape1152)

HAnimSegment1144.children.append(HAnimSite1151)

HAnimJoint1143.children.append(HAnimSegment1144)
HAnimJoint1153 = x3d.HAnimJoint()
HAnimJoint1153.DEF = "Joe_r_pinky1"
HAnimJoint1153.name = "r_pinky1"
HAnimJoint1153.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1153.center = [-0.2,0.79,-0.085]
HAnimJoint1153.skinCoordIndex = [276,277,278]
HAnimJoint1153.skinCoordWeight = [1,1,1]
HAnimSegment1154 = x3d.HAnimSegment()
HAnimSegment1154.DEF = "Joe_r_pinky_proximal"
HAnimSegment1154.name = "r_pinky_proximal"
Shape1155 = x3d.Shape()
Appearance1156 = x3d.Appearance()
Appearance1156.USE = "SegmentLine"

Shape1155.appearance = Appearance1156
IndexedLineSet1157 = x3d.IndexedLineSet()
IndexedLineSet1157.coordIndex = [0,1,-1]
Coordinate1158 = x3d.Coordinate()
Coordinate1158.point = [(-0.2, 0.79, -0.085),(-0.2, 0.755, -0.085)]

IndexedLineSet1157.coord = Coordinate1158

Shape1155.geometry = IndexedLineSet1157

HAnimSegment1154.children.append(Shape1155)
Transform1159 = x3d.Transform()
Transform1159.translation = [-0.2,0.79,-0.085]
Shape1160 = x3d.Shape()
Shape1160.USE = "jointbox"

Transform1159.children.append(Shape1160)

HAnimSegment1154.children.append(Transform1159)

HAnimJoint1153.children.append(HAnimSegment1154)
HAnimJoint1161 = x3d.HAnimJoint()
HAnimJoint1161.DEF = "Joe_r_pinky2"
HAnimJoint1161.name = "r_pinky2"
HAnimJoint1161.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1161.center = [-0.2,0.755,-0.085]
HAnimJoint1161.skinCoordIndex = [321,322,323,324]
HAnimJoint1161.skinCoordWeight = [1,1,1,1]
HAnimSegment1162 = x3d.HAnimSegment()
HAnimSegment1162.DEF = "Joe_r_pinky_middle"
HAnimSegment1162.name = "r_pinky_middle"
Shape1163 = x3d.Shape()
Appearance1164 = x3d.Appearance()
Appearance1164.USE = "SegmentLine"

Shape1163.appearance = Appearance1164
IndexedLineSet1165 = x3d.IndexedLineSet()
IndexedLineSet1165.coordIndex = [0,1,-1]
Coordinate1166 = x3d.Coordinate()
Coordinate1166.point = [(-0.2, 0.755, -0.085),(-0.2, 0.735, -0.085)]

IndexedLineSet1165.coord = Coordinate1166

Shape1163.geometry = IndexedLineSet1165

HAnimSegment1162.children.append(Shape1163)
Transform1167 = x3d.Transform()
Transform1167.translation = [-0.2,0.755,-0.085]
Shape1168 = x3d.Shape()
Shape1168.USE = "jointbox"

Transform1167.children.append(Shape1168)

HAnimSegment1162.children.append(Transform1167)

HAnimJoint1161.children.append(HAnimSegment1162)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.DEF = "Joe_r_pinky3"
HAnimJoint1169.name = "r_pinky3"
HAnimJoint1169.rotation = [0,0,1.00000000001315,0.0055856647187357]
HAnimJoint1169.center = [-0.2,0.735,-0.09]
HAnimJoint1169.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint1169.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.DEF = "Joe_r_pinky_distal"
HAnimSegment1170.name = "r_pinky_distal"
Shape1171 = x3d.Shape()
Appearance1172 = x3d.Appearance()
Appearance1172.USE = "SegmentLine"

Shape1171.appearance = Appearance1172
IndexedLineSet1173 = x3d.IndexedLineSet()
IndexedLineSet1173.coordIndex = [0,1,-1]
Coordinate1174 = x3d.Coordinate()
Coordinate1174.point = [(-0.2, 0.735, -0.085),(-0.2, 0.72, -0.085)]

IndexedLineSet1173.coord = Coordinate1174

Shape1171.geometry = IndexedLineSet1173

HAnimSegment1170.children.append(Shape1171)
Transform1175 = x3d.Transform()
Transform1175.translation = [-0.2,0.735,-0.085]
Shape1176 = x3d.Shape()
Shape1176.USE = "jointbox"

Transform1175.children.append(Shape1176)

HAnimSegment1170.children.append(Transform1175)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.DEF = "Joe_r_pinky_distal_tip"
HAnimSite1177.name = "r_pinky_distal_tip"
HAnimSite1177.translation = [-0.2,0.72,-0.085]
Shape1178 = x3d.Shape()
Shape1178.USE = "sitebox"

HAnimSite1177.children.append(Shape1178)

HAnimSegment1170.children.append(HAnimSite1177)

HAnimJoint1169.children.append(HAnimSegment1170)

HAnimJoint1161.children.append(HAnimJoint1169)

HAnimJoint1153.children.append(HAnimJoint1161)

HAnimJoint1143.children.append(HAnimJoint1153)

HAnimJoint999.children.append(HAnimJoint1143)

HAnimJoint977.children.append(HAnimJoint999)

HAnimJoint947.children.append(HAnimJoint977)

HAnimJoint931.children.append(HAnimJoint947)

HAnimJoint921.children.append(HAnimJoint931)

HAnimJoint555.children.append(HAnimJoint921)

HAnimJoint547.children.append(HAnimJoint555)

HAnimJoint539.children.append(HAnimJoint547)

HAnimJoint529.children.append(HAnimJoint539)

HAnimJoint521.children.append(HAnimJoint529)

HAnimJoint513.children.append(HAnimJoint521)

HAnimJoint505.children.append(HAnimJoint513)

HAnimJoint497.children.append(HAnimJoint505)

HAnimJoint485.children.append(HAnimJoint497)

HAnimJoint475.children.append(HAnimJoint485)

HAnimJoint467.children.append(HAnimJoint475)

HAnimJoint459.children.append(HAnimJoint467)

HAnimJoint451.children.append(HAnimJoint459)

HAnimJoint425.children.append(HAnimJoint451)

HAnimJoint417.children.append(HAnimJoint425)

HAnimJoint409.children.append(HAnimJoint417)

HAnimJoint394.children.append(HAnimJoint409)

HAnimJoint80.children.append(HAnimJoint394)

HAnimHumanoid79.skeleton.append(HAnimJoint80)
HAnimJoint1179 = x3d.HAnimJoint()
HAnimJoint1179.USE = "Joe_HumanoidRoot"

HAnimHumanoid79.joints.append(HAnimJoint1179)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.USE = "Joe_sacroiliac"

HAnimHumanoid79.joints.append(HAnimJoint1180)
HAnimJoint1181 = x3d.HAnimJoint()
HAnimJoint1181.USE = "Joe_l_hip"

HAnimHumanoid79.joints.append(HAnimJoint1181)
HAnimJoint1182 = x3d.HAnimJoint()
HAnimJoint1182.USE = "Joe_l_knee"

HAnimHumanoid79.joints.append(HAnimJoint1182)
HAnimJoint1183 = x3d.HAnimJoint()
HAnimJoint1183.USE = "Joe_l_ankle"

HAnimHumanoid79.joints.append(HAnimJoint1183)
HAnimJoint1184 = x3d.HAnimJoint()
HAnimJoint1184.USE = "Joe_l_subtalar"

HAnimHumanoid79.joints.append(HAnimJoint1184)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.USE = "Joe_l_midtarsal"

HAnimHumanoid79.joints.append(HAnimJoint1185)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.USE = "Joe_l_metatarsal"

HAnimHumanoid79.joints.append(HAnimJoint1186)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.USE = "Joe_r_hip"

HAnimHumanoid79.joints.append(HAnimJoint1187)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.USE = "Joe_r_knee"

HAnimHumanoid79.joints.append(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.USE = "Joe_r_ankle"

HAnimHumanoid79.joints.append(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint()
HAnimJoint1190.USE = "Joe_r_subtalar"

HAnimHumanoid79.joints.append(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.USE = "Joe_r_midtarsal"

HAnimHumanoid79.joints.append(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.USE = "Joe_r_metatarsal"

HAnimHumanoid79.joints.append(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.USE = "Joe_vl5"

HAnimHumanoid79.joints.append(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.USE = "Joe_vl4"

HAnimHumanoid79.joints.append(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.USE = "Joe_vl3"

HAnimHumanoid79.joints.append(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.USE = "Joe_vl2"

HAnimHumanoid79.joints.append(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.USE = "Joe_vl1"

HAnimHumanoid79.joints.append(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.USE = "Joe_vt12"

HAnimHumanoid79.joints.append(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.USE = "Joe_vt11"

HAnimHumanoid79.joints.append(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint()
HAnimJoint1200.USE = "Joe_vt10"

HAnimHumanoid79.joints.append(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.USE = "Joe_vt9"

HAnimHumanoid79.joints.append(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.USE = "Joe_vt8"

HAnimHumanoid79.joints.append(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.USE = "Joe_vt7"

HAnimHumanoid79.joints.append(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.USE = "Joe_vt6"

HAnimHumanoid79.joints.append(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.USE = "Joe_vt5"

HAnimHumanoid79.joints.append(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.USE = "Joe_vt4"

HAnimHumanoid79.joints.append(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.USE = "Joe_vt3"

HAnimHumanoid79.joints.append(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.USE = "Joe_vt2"

HAnimHumanoid79.joints.append(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint()
HAnimJoint1209.USE = "Joe_vt1"

HAnimHumanoid79.joints.append(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.USE = "Joe_vc7"

HAnimHumanoid79.joints.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.USE = "Joe_vc6"

HAnimHumanoid79.joints.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint()
HAnimJoint1212.USE = "Joe_vc5"

HAnimHumanoid79.joints.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.USE = "Joe_vc4"

HAnimHumanoid79.joints.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.USE = "Joe_vc3"

HAnimHumanoid79.joints.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.USE = "Joe_vc2"

HAnimHumanoid79.joints.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.USE = "Joe_vc1"

HAnimHumanoid79.joints.append(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.USE = "Joe_skullbase"

HAnimHumanoid79.joints.append(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint()
HAnimJoint1218.USE = "Joe_l_eyeball_joint"

HAnimHumanoid79.joints.append(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint()
HAnimJoint1219.USE = "Joe_r_eyeball_joint"

HAnimHumanoid79.joints.append(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.USE = "Joe_l_sternoclavicular"

HAnimHumanoid79.joints.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.USE = "Joe_l_acromioclavicular"

HAnimHumanoid79.joints.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.USE = "Joe_l_shoulder"

HAnimHumanoid79.joints.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.USE = "Joe_l_elbow"

HAnimHumanoid79.joints.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.USE = "Joe_l_wrist"

HAnimHumanoid79.joints.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.USE = "Joe_l_thumb1"

HAnimHumanoid79.joints.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.USE = "Joe_l_thumb2"

HAnimHumanoid79.joints.append(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.USE = "Joe_l_thumb3"

HAnimHumanoid79.joints.append(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.USE = "Joe_l_index0"

HAnimHumanoid79.joints.append(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.USE = "Joe_l_index1"

HAnimHumanoid79.joints.append(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.USE = "Joe_l_index2"

HAnimHumanoid79.joints.append(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.USE = "Joe_l_index3"

HAnimHumanoid79.joints.append(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.USE = "Joe_l_middle0"

HAnimHumanoid79.joints.append(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint()
HAnimJoint1233.USE = "Joe_l_middle1"

HAnimHumanoid79.joints.append(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.USE = "Joe_l_middle2"

HAnimHumanoid79.joints.append(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.USE = "Joe_l_middle3"

HAnimHumanoid79.joints.append(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.USE = "Joe_l_ring0"

HAnimHumanoid79.joints.append(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.USE = "Joe_l_ring1"

HAnimHumanoid79.joints.append(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.USE = "Joe_l_ring2"

HAnimHumanoid79.joints.append(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint()
HAnimJoint1239.USE = "Joe_l_ring3"

HAnimHumanoid79.joints.append(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint()
HAnimJoint1240.USE = "Joe_l_pinky0"

HAnimHumanoid79.joints.append(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.USE = "Joe_l_pinky1"

HAnimHumanoid79.joints.append(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint()
HAnimJoint1242.USE = "Joe_l_pinky2"

HAnimHumanoid79.joints.append(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint()
HAnimJoint1243.USE = "Joe_l_pinky3"

HAnimHumanoid79.joints.append(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.USE = "Joe_r_sternoclavicular"

HAnimHumanoid79.joints.append(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint()
HAnimJoint1245.USE = "Joe_r_acromioclavicular"

HAnimHumanoid79.joints.append(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.USE = "Joe_r_shoulder"

HAnimHumanoid79.joints.append(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.USE = "Joe_r_elbow"

HAnimHumanoid79.joints.append(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.USE = "Joe_r_wrist"

HAnimHumanoid79.joints.append(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint()
HAnimJoint1249.USE = "Joe_r_thumb1"

HAnimHumanoid79.joints.append(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint()
HAnimJoint1250.USE = "Joe_r_thumb2"

HAnimHumanoid79.joints.append(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.USE = "Joe_r_thumb3"

HAnimHumanoid79.joints.append(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint()
HAnimJoint1252.USE = "Joe_r_index0"

HAnimHumanoid79.joints.append(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.USE = "Joe_r_index1"

HAnimHumanoid79.joints.append(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.USE = "Joe_r_index2"

HAnimHumanoid79.joints.append(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.USE = "Joe_r_index3"

HAnimHumanoid79.joints.append(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.USE = "Joe_r_middle0"

HAnimHumanoid79.joints.append(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.USE = "Joe_r_middle1"

HAnimHumanoid79.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.USE = "Joe_r_middle2"

HAnimHumanoid79.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.USE = "Joe_r_middle3"

HAnimHumanoid79.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.USE = "Joe_r_ring0"

HAnimHumanoid79.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.USE = "Joe_r_ring1"

HAnimHumanoid79.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.USE = "Joe_r_ring2"

HAnimHumanoid79.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.USE = "Joe_r_ring3"

HAnimHumanoid79.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.USE = "Joe_r_pinky0"

HAnimHumanoid79.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.USE = "Joe_r_pinky1"

HAnimHumanoid79.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.USE = "Joe_r_pinky2"

HAnimHumanoid79.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.USE = "Joe_r_pinky3"

HAnimHumanoid79.joints.append(HAnimJoint1267)
Coordinate1268 = x3d.Coordinate()
Coordinate1268.DEF = "TheSkinCoord"
Coordinate1268.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid79.skinCoord = Coordinate1268
Shape1269 = x3d.Shape()
Shape1269.DEF = "SkinShape"
Appearance1270 = x3d.Appearance()
Appearance1270.DEF = "SkinAppearance"
Material1271 = x3d.Material()
Material1271.DEF = "SkinMaterial"
Material1271.ambientIntensity = 0.6
Material1271.diffuseColor = [1,1,1]
Material1271.shininess = 0.6
Material1271.transparency = 0.2

Appearance1270.material = Material1271
ImageTexture1272 = x3d.ImageTexture()
ImageTexture1272.DEF = "zBlueSpiralBkg2"
ImageTexture1272.description = "Blue Spiral Pattern"
ImageTexture1272.url = ["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1270.texture = ImageTexture1272

Shape1269.appearance = Appearance1270
IndexedFaceSet1273 = x3d.IndexedFaceSet()
IndexedFaceSet1273.creaseAngle = 3.1
IndexedFaceSet1273.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color1274 = x3d.Color()
Color1274.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1273.color = Color1274
Coordinate1275 = x3d.Coordinate()
Coordinate1275.USE = "TheSkinCoord"

IndexedFaceSet1273.coord = Coordinate1275

Shape1269.geometry = IndexedFaceSet1273

HAnimHumanoid79.skin.append(Shape1269)

Group78.children.append(HAnimHumanoid79)

Group77.children.append(Group78)

Scene33.children.append(Group77)
TimeSensor1276 = x3d.TimeSensor()
TimeSensor1276.DEF = "Time1"
TimeSensor1276.cycleInterval = 2.86
TimeSensor1276.loop = True

Scene33.children.append(TimeSensor1276)
TimeSensor1277 = x3d.TimeSensor()
TimeSensor1277.DEF = "Time2"
TimeSensor1277.cycleInterval = 5.72
TimeSensor1277.loop = True

Scene33.children.append(TimeSensor1277)
TimeSensor1278 = x3d.TimeSensor()
TimeSensor1278.DEF = "Time3"
TimeSensor1278.cycleInterval = 5.8
TimeSensor1278.loop = True

Scene33.children.append(TimeSensor1278)
OrientationInterpolator1279 = x3d.OrientationInterpolator()
OrientationInterpolator1279.DEF = "Pitch"
OrientationInterpolator1279.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1279.keyValue = [(1, 0, 0, 0),(1, 0, 0, 1.25600004196167),(1, 0, 0, 2.51200008392334),(1, 0, 0, 3.76799988746643),(1, 0, 0, 5.02400016784668),(1, 0, 0, 6.28000020980835)]

Scene33.children.append(OrientationInterpolator1279)
OrientationInterpolator1280 = x3d.OrientationInterpolator()
OrientationInterpolator1280.DEF = "Yaw"
OrientationInterpolator1280.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1280.keyValue = [(0, 1, 0, 0),(0, 1, 0, 1.25600004196167),(0, 1, 0, 2.51200008392334),(0, 1, 0, 3.76799988746643),(0, 1, 0, 5.02400016784668),(0, 1, 0, 6.28000020980835)]

Scene33.children.append(OrientationInterpolator1280)
OrientationInterpolator1281 = x3d.OrientationInterpolator()
OrientationInterpolator1281.DEF = "Roll"
OrientationInterpolator1281.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1281.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.25600004196167),(0, 0, 1, 2.51200008392334),(0, 0, 1, 3.76799988746643),(0, 0, 1, 5.02400016784668),(0, 0, 1, 6.28000020980835)]

Scene33.children.append(OrientationInterpolator1281)
OrientationInterpolator1282 = x3d.OrientationInterpolator()
OrientationInterpolator1282.DEF = "vc6Yaw"
OrientationInterpolator1282.key = [0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1282.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0.699999988079071),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0.5),(-0.400000005960465, -1, 0, 0.699999988079071),(-0.400000005960465, -1, 0, 0.400000005960465),(0, 1, 0, 0),(0, 1, 0, 0)]

Scene33.children.append(OrientationInterpolator1282)
OrientationInterpolator1283 = x3d.OrientationInterpolator()
OrientationInterpolator1283.DEF = "EyeballsRotation"
OrientationInterpolator1283.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1283.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.200000002980232, 0.200000002980232, 0.200000002980232, 0.200000002980232),(-0.200000002980232, 0.200000002980232, 0.200000002980232, 0.200000002980232),(-0.200000002980232, -0.200000002980232, 0.200000002980232, 0.200000002980232),(0.200000002980232, -0.200000002980232, 0.200000002980232, 0.200000002980232),(-0.200000002980232, 0.200000002980232, -0.200000002980232, 0.200000002980232),(-0.200000002980232, 0.200000002980232, -0.200000002980232, 0.200000002980232),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1283)
OrientationInterpolator1284 = x3d.OrientationInterpolator()
OrientationInterpolator1284.DEF = "r_sternoclavicularRelax"
OrientationInterpolator1284.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1284.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.200000002980232, -1, 0, 0.109999999403954),(0.200000002980232, -1, 0, 0.109999999403954),(0.100000001490116, -1, 0, 0.100000001490116),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1284)
OrientationInterpolator1285 = x3d.OrientationInterpolator()
OrientationInterpolator1285.DEF = "r_acromioclavicularRelax"
OrientationInterpolator1285.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1285.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1285)
OrientationInterpolator1286 = x3d.OrientationInterpolator()
OrientationInterpolator1286.DEF = "r_shoulderRelax"
OrientationInterpolator1286.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1286.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.400000005960465, -0.699999988079071, -0.550000011920929, 0.349999994039536),(0.400000005960465, -0.699999988079071, -0.550000011920929, 0.349999994039536),(0.400000005960465, -0.699999988079071, -0.550000011920929, 0.349999994039536),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1286)
OrientationInterpolator1287 = x3d.OrientationInterpolator()
OrientationInterpolator1287.DEF = "r_elbowRelax"
OrientationInterpolator1287.key = [0,0.15,0.4,0.6,0.9,1]
OrientationInterpolator1287.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.200000002980232, 0, 0.00999999977648258, 0.5),(-0.200000002980232, 0, 0.00999999977648258, 0.5),(-0.200000002980232, 0, 0.00999999977648258, 0.5),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1287)
OrientationInterpolator1288 = x3d.OrientationInterpolator()
OrientationInterpolator1288.DEF = "r_wristRelax"
OrientationInterpolator1288.key = [0,0.2,0.4,0.6,0.9,1]
OrientationInterpolator1288.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0.100000001490116, -0.0900000035762787, 0.25),(0, 0.100000001490116, -0.0900000035762787, 0.25),(0, 0.100000001490116, -0.0900000035762787, 0.25),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1288)
OrientationInterpolator1289 = x3d.OrientationInterpolator()
OrientationInterpolator1289.DEF = "r_index0Relax"
OrientationInterpolator1289.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1289.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.25, 0.25, -1, 0.125),(-0.25, 0.25, -1, 0.125),(-0.25, 0.25, -1, 0.125),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1289)
OrientationInterpolator1290 = x3d.OrientationInterpolator()
OrientationInterpolator1290.DEF = "r_index1Relax"
OrientationInterpolator1290.key = [0,0.1,0.2,0.6,0.8,1]
OrientationInterpolator1290.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(-0.135000005364418, -0.135000005364418, 1, 0.35699999332428),(-0.158999994397163, -0.152999997138977, 1, 0.354999989271164),(-0.158999994397163, -0.152999997138977, 1, 0.35699999332428),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1290)
OrientationInterpolator1291 = x3d.OrientationInterpolator()
OrientationInterpolator1291.DEF = "r_middle0Relax"
OrientationInterpolator1291.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1291.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, -1, 0.140000000596046),(0, 0, -1, 0.140000000596046),(0, 0, -1, 0.140000000596046),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1291)
OrientationInterpolator1292 = x3d.OrientationInterpolator()
OrientationInterpolator1292.DEF = "r_middle1Relax"
OrientationInterpolator1292.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1292.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 0.300000011920929, 0.256999999284744),(0, 0, 0.300000011920929, 0.370000004768372),(0, 0, 0.300000011920929, 0.389999985694885),(0, 0, 0.300000011920929, 0.310000002384186),(0, 0, 0.300000011920929, 0.319999992847443),(0, 0, 0.300000011920929, 0.340000003576279),(0, 0, 0.300000011920929, 0.280000001192093),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1292)
OrientationInterpolator1293 = x3d.OrientationInterpolator()
OrientationInterpolator1293.DEF = "r_ring0Relax"
OrientationInterpolator1293.key = [0,0.1,0.3,0.6,0.8,1]
OrientationInterpolator1293.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.25, 0.25, -1, 0.100000001490116),(0.25, 0.25, -1, 0.100000001490116),(0.25, 0.25, -1, 0.100000001490116),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1293)
OrientationInterpolator1294 = x3d.OrientationInterpolator()
OrientationInterpolator1294.DEF = "r_ring1Relax"
OrientationInterpolator1294.key = [0,0.1,0.4,0.5,0.8,1]
OrientationInterpolator1294.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.135000005364418, 0.135000005364418, 1, 0.270000010728836),(0.135000005364418, 0.135000005364418, 1, 0.270000010728836),(0.135000005364418, 0.150000005960464, 1, 0.270000010728836),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1294)
OrientationInterpolator1295 = x3d.OrientationInterpolator()
OrientationInterpolator1295.DEF = "r_pinky0Relax"
OrientationInterpolator1295.key = [0,0.1,0.3,0.5,0.8,1]
OrientationInterpolator1295.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.349999994039536, 0.349999994039536, -0.699999988079071, 0.119999997317791),(0.349999994039536, 0.349999994039536, -0.899999976158142, 0.119999997317791),(0.349999994039536, 0.349999994039536, -0.699999988079071, 0.119999997317791),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1295)
OrientationInterpolator1296 = x3d.OrientationInterpolator()
OrientationInterpolator1296.DEF = "r_pinky1Relax"
OrientationInterpolator1296.key = [0,0.1,0.4,0.6,0.8,1]
OrientationInterpolator1296.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0.200000002980232, 0.25, 1, 0.270000010728836),(0.200000002980232, 0.219999998807907, 1, 0.270000010728836),(0.219999998807907, 0.200000002980232, 1, 0.270000010728836),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1296)
OrientationInterpolator1297 = x3d.OrientationInterpolator()
OrientationInterpolator1297.DEF = "r_thumb1Relax"
OrientationInterpolator1297.key = [0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]
OrientationInterpolator1297.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, -1, 1, 1),(0.5, -0.159999996423721, 0.159999996423721, 0.785000026226044),(0.5, -0.159999996423721, 0.159999996423721, 0.785000026226044),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(1, 1, 1, 0.75),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1297)
OrientationInterpolator1298 = x3d.OrientationInterpolator()
OrientationInterpolator1298.DEF = "r_thumb2Relax"
OrientationInterpolator1298.key = [0,0.2,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1298.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.449999988079071),(1, 0, 0, 0.449999988079071),(1, 0, 0, 0.449999988079071),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1298)
OrientationInterpolator1299 = x3d.OrientationInterpolator()
OrientationInterpolator1299.DEF = "r_thumb3Relax"
OrientationInterpolator1299.key = [0,0.2,0.5,0.6,0.7,0.8,1]
OrientationInterpolator1299.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.449999988079071),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1299)
OrientationInterpolator1300 = x3d.OrientationInterpolator()
OrientationInterpolator1300.DEF = "r_fingers2Relax"
OrientationInterpolator1300.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1300.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.430000007152557),(0, 0, 1, 0.439999997615814),(0, 0, 1, 0.46000000834465),(0, 0, 1, 0.439999997615814),(0, 0, 1, 0.245000004768372),(0, 0, 1, 0.239999994635582),(0, 0, 1, 0.209999993443489),(0, 0, 1, 0.239999994635582),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1300)
OrientationInterpolator1301 = x3d.OrientationInterpolator()
OrientationInterpolator1301.DEF = "r_fingers3Relax"
OrientationInterpolator1301.key = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]
OrientationInterpolator1301.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.370000004768372),(0, 0, 1, 0.379999995231628),(0, 0, 1, 0.389999985694885),(0, 0, 1, 0.379999995231628),(0, 0, 1, 0.270000010728836),(0, 0, 1, 0.280000001192093),(0, 0, 1, 0.270000010728836),(0, 0, 1, 0.280000001192093),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1301)
OrientationInterpolator1302 = x3d.OrientationInterpolator()
OrientationInterpolator1302.DEF = "r_sternoclavicularRoll"
OrientationInterpolator1302.key = [0,0.2,0.4,0.5,0.7,0.8,1]
OrientationInterpolator1302.keyValue = [(0, 0, 1, 0),(0, 0, -1, 0.100000001490116),(0, 0, -1, 0.219999998807907),(0, 0.5, -1, 0.270000010728836),(0, 0, -1, 0.100000001490116),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1302)
OrientationInterpolator1303 = x3d.OrientationInterpolator()
OrientationInterpolator1303.DEF = "r_acromioclavicularRoll"
OrientationInterpolator1303.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1303.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.0500000007450581),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1303)
OrientationInterpolator1304 = x3d.OrientationInterpolator()
OrientationInterpolator1304.DEF = "r_shoulderRoll"
OrientationInterpolator1304.key = [0,0.2,0.4,0.5,0.85,1]
OrientationInterpolator1304.keyValue = [(1, 0, 0, 0),(0, 0, -1, 1.6599999666214),(-0.25, 0, -1, 1.75999999046326),(0, 0, -1, 1.25600004196167),(0, 0, -1, 0.0500000007450581),(1, 0, 0, 0)]

Scene33.children.append(OrientationInterpolator1304)
OrientationInterpolator1305 = x3d.OrientationInterpolator()
OrientationInterpolator1305.DEF = "r_ForeArmPitch"
OrientationInterpolator1305.key = [0,0.15,0.3,0.5,0.7,0.9,1]
OrientationInterpolator1305.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.550000011920929),(-1, -0.25, 0, 2.54999995231628),(-1, -0.25, 0, 2.54999995231628),(-1, -0.25, 0, 2.54999995231628),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1305)
OrientationInterpolator1306 = x3d.OrientationInterpolator()
OrientationInterpolator1306.DEF = "r_wristRoll"
OrientationInterpolator1306.key = [0,0.2,0.4,0.6,0.65,0.75,0.85,1]
OrientationInterpolator1306.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, -0.550000011920929),(0, 0, 1, 0),(0, 1, 0, 1.54999995231628),(0, 0, -1, 1.54999995231628),(0, 0, 1, 0),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1306)
OrientationInterpolator1307 = x3d.OrientationInterpolator()
OrientationInterpolator1307.DEF = "r_handPitch"
OrientationInterpolator1307.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1307.keyValue = [(0, 0, 1, 0),(0, 0, 0.00999999977648258, 0.25),(0, 0, -0.00999999977648258, 0.0299999993294477),(0, 0, 0.00999999977648258, 0.0500000007450581),(0, 0, 0.00999999977648258, 0.00999999977648258),(0, 0, 1, 0)]

Scene33.children.append(OrientationInterpolator1307)
OrientationInterpolator1308 = x3d.OrientationInterpolator()
OrientationInterpolator1308.DEF = "r_thumb1Pitch"
OrientationInterpolator1308.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1308.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1),(1, 0, 0, 0.400000005960465),(1, 0, 0, 0.200000002980232),(1, 0, 0, 0)]

Scene33.children.append(OrientationInterpolator1308)
OrientationInterpolator1309 = x3d.OrientationInterpolator()
OrientationInterpolator1309.DEF = "r_thumb2Pitch"
OrientationInterpolator1309.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator1309.keyValue = [(0, 0, 1, 0),(1, 1, 0, 0.300000011920929),(1, 1, 0, 0.300000011920929),(1, 1, 0, 0.600000023841858),(1, 1, 0, 0.300000011920929),(0, 1, 1, 0)]

Scene33.children.append(OrientationInterpolator1309)
OrientationInterpolator1310 = x3d.OrientationInterpolator()
OrientationInterpolator1310.DEF = "l_shoulderRoll"
OrientationInterpolator1310.key = [0,0.2,0.4,0.5,0.85,1]
OrientationInterpolator1310.keyValue = [(0.25, 0, 1, 1.75999999046326),(0, 0, 1, 1.6599999666214),(0.25, 0, 1, 1.75999999046326),(0, 0, 1, 1.25600004196167),(0, 0, 1, 0.0500000007450581),(0.25, 0, 1, 1.75999999046326)]

Scene33.children.append(OrientationInterpolator1310)
Group1311 = x3d.Group()
PositionInterpolator1312 = x3d.PositionInterpolator()
PositionInterpolator1312.DEF = "HUMANOIDROOT_POSITION_ANIMATOR"
PositionInterpolator1312.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator1312.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]

Group1311.children.append(PositionInterpolator1312)
OrientationInterpolator1313 = x3d.OrientationInterpolator()
OrientationInterpolator1313.DEF = "HUMANOIDROOT_ANIMATOR"
OrientationInterpolator1313.key = [0,1]
OrientationInterpolator1313.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0)]

Group1311.children.append(OrientationInterpolator1313)
OrientationInterpolator1314 = x3d.OrientationInterpolator()
OrientationInterpolator1314.DEF = "L_HIP_ANIMATOR"
OrientationInterpolator1314.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1314.keyValue = [(-0.873000025749207, 0.0609400011599064, 0.483999997377396, 0.286500006914139),(0.996299982070923, -0.0105699999257922, 0.0848100036382675, 0.248799994587898),(0.996500015258789, 0.0159099996089935, -0.0822200030088425, 0.383599996566772),(-0.701799988746643, -0.0322300009429455, -0.711700022220612, 0.12890000641346),(-1, 0, 0, 0.551800012588501),(-0.996399998664856, 0.0223099999129772, 0.0816999971866608, 0.535099983215332),(-0.98089998960495, 0.0491200014948845, 0.18809999525547, 0.520399987697601),(-0.873000025749207, 0.0609400011599064, 0.483999997377396, 0.286500006914139)]

Group1311.children.append(OrientationInterpolator1314)
OrientationInterpolator1315 = x3d.OrientationInterpolator()
OrientationInterpolator1315.DEF = "L_KNEE_ANIMATOR"
OrientationInterpolator1315.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1315.keyValue = [(1, 0, 0, 0.32260000705719),(1, 0, 0, 0.155599996447563),(1, 0, 0, 0.086779996752739),(1, 0, 0, 0.875100016593933),(1, 0, 0, 1.13100004196167),(1, 0, 0, 0.0996100008487701),(1, 0, 0, 0.394199997186661),(1, 0, 0, 0.32260000705719)]

Group1311.children.append(OrientationInterpolator1315)
OrientationInterpolator1316 = x3d.OrientationInterpolator()
OrientationInterpolator1316.DEF = "L_ANKLE_ANIMATOR"
OrientationInterpolator1316.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator1316.keyValue = [(-1, 0, 0, 0.067100003361702),(-1, 0, 0, 0.215200006961823),(-1, 0, 0, 0.318399995565414),(-1, 0, 0, 0.471700012683868),(-1, 0, 0, 0.291200011968613),(1, 0, 0, 0.222200006246567),(-1, 0, 0, 0.067100003361702)]

Group1311.children.append(OrientationInterpolator1316)
OrientationInterpolator1317 = x3d.OrientationInterpolator()
OrientationInterpolator1317.DEF = "R_ANKLE_ANIMATOR"
OrientationInterpolator1317.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]
OrientationInterpolator1317.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.353300005197525),(-1, 0, 0, 0.107199996709824),(1, 0, 0, 0.400000005960465),(1, 0, 0, 0.127000004053116),(-1, 0, 0, 0.0179999992251396),(-1, 0, 0, 0.0579999983310699),(-1, 0, 0, 0.239999994635582),(-1, 0, 0, 0.349999994039536),(-1, 0, 0, 0.330000013113022),(0, 0, 1, 0)]

Group1311.children.append(OrientationInterpolator1317)
OrientationInterpolator1318 = x3d.OrientationInterpolator()
OrientationInterpolator1318.DEF = "L_subtalar_ANIMATOR"
OrientationInterpolator1318.key = [0,0.3,1]
OrientationInterpolator1318.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1311.children.append(OrientationInterpolator1318)
OrientationInterpolator1319 = x3d.OrientationInterpolator()
OrientationInterpolator1319.DEF = "L_MIDTARSAL_ANIMATOR"
OrientationInterpolator1319.key = [0,0.5,1]
OrientationInterpolator1319.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.200000002980232),(1, 0, 0, 0)]

Group1311.children.append(OrientationInterpolator1319)
OrientationInterpolator1320 = x3d.OrientationInterpolator()
OrientationInterpolator1320.DEF = "L_metatarsal_ANIMATOR"
OrientationInterpolator1320.key = [0,0.2,0.4,0.8,1]
OrientationInterpolator1320.keyValue = [(-1, 0, 0, 0.300000011920929),(-1, 0, 0, 0.150000005960464),(1, 0, 0, 0.300000011920929),(0, 0, 1, 0),(-1, 0, 0, 0.300000011920929)]

Group1311.children.append(OrientationInterpolator1320)
OrientationInterpolator1321 = x3d.OrientationInterpolator()
OrientationInterpolator1321.DEF = "R_HIP_ANIMATOR"
OrientationInterpolator1321.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1321.keyValue = [(-0.583100020885468, 0.0351100005209446, 0.811600029468536, 0.148100003600121),(-0.995000004768372, 0.0229599997401238, 0.0967399999499321, 0.468300014734268),(-1, 0.0019000000320375, 0.00796000007539988, 0.473199993371964),(-0.998000025749207, -0.0157999992370605, -0.0610200017690659, 0.50789999961853),(-0.991100013256073, -0.0354099981486797, -0.128600001335144, 0.541899979114533),(-0.913100004196167, -0.0624300017952919, -0.402999997138977, 0.33610001206398),(-0.430599987506866, -0.0796200037002564, -0.898999989032745, 0.0703800022602081),(1, 0, 0, 0.257099986076355),(0.989099979400635, -0.0280499998480082, 0.144400000572205, 0.387899994850159),(-0.583100020885468, 0.0351100005209446, 0.811600029468536, 0.148100003600121)]

Group1311.children.append(OrientationInterpolator1321)
OrientationInterpolator1322 = x3d.OrientationInterpolator()
OrientationInterpolator1322.DEF = "R_KNEE_ANIMATOR"
OrientationInterpolator1322.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator1322.keyValue = [(1, 0, 0, 0.857299983501434),(1, 0, 0, 0.892599999904633),(1, 0, 0, 0.535099983215332),(1, 0, 0, 0.175600007176399),(1, 0, 0, 0.119400002062321),(1, 0, 0, 0.315299987792969),(1, 0, 0, 0.0935399979352951),(1, 0, 0, 0.0855799987912178),(1, 0, 0, 0.247500002384186),(1, 0, 0, 0.857299983501434)]

Group1311.children.append(OrientationInterpolator1322)
OrientationInterpolator1323 = x3d.OrientationInterpolator()
OrientationInterpolator1323.DEF = "R_subtalar_ANIMATOR"
OrientationInterpolator1323.key = [0,0.225,0.25,0.35,0.45,0.85,0.91]
OrientationInterpolator1323.keyValue = [(-1, 0, 0, 0.1),(0, 0, 1, 0),(0, 0, 1, 0),(1, 0, 0, 0.1),(0, 0, 1, 0),(1, 0, 0, 0.1),(1, 0, 0, 0.25)]

Group1311.children.append(OrientationInterpolator1323)
OrientationInterpolator1324 = x3d.OrientationInterpolator()
OrientationInterpolator1324.DEF = "R_MIDTARSAL_ANIMATOR"
OrientationInterpolator1324.key = [0,0.22,1]
OrientationInterpolator1324.keyValue = [(1, 0, 0, -0.200000002980232),(0, 0, 1, 0),(1, 0, 0, -0.200000002980232)]

Group1311.children.append(OrientationInterpolator1324)
OrientationInterpolator1325 = x3d.OrientationInterpolator()
OrientationInterpolator1325.DEF = "R_metatarsal_ANIMATOR"
OrientationInterpolator1325.key = [0,0.2,0.4,0.8,1]
OrientationInterpolator1325.keyValue = [(-1, 0, 0, 0.150000005960464),(0, 0, 1, 0),(1, 0, 0, 0.300000011920929),(-1, 0, 0, 0.300000011920929),(-1, 0, 0, 0.150000005960464)]

Group1311.children.append(OrientationInterpolator1325)
OrientationInterpolator1326 = x3d.OrientationInterpolator()
OrientationInterpolator1326.DEF = "VL5_ANIMATOR"
OrientationInterpolator1326.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator1326.keyValue = [(0, 1, 0, 0.0825999975204468),(-0.0197199992835522, -0.597400009632111, 0.801699995994568, 0.0823099985718727),(0.0092960000038147, -0.964800000190735, 0.262699991464615, 0.17339999973774),(-0.0123800002038479, 0.954900026321411, -0.29679998755455, 0.0873199999332428),(-0.00812499970197678, 0.969099998474121, -0.246299996972084, 0.158000007271767),(0, 1, 0, 0.0825999975204468)]

Group1311.children.append(OrientationInterpolator1326)
OrientationInterpolator1327 = x3d.OrientationInterpolator()
OrientationInterpolator1327.DEF = "SKULLBASE_ANIMATOR"
OrientationInterpolator1327.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator1327.keyValue = [(0, -1, 0, 0.0864000022411346),(0, 1, 0, 0.182500004768372),(0, 1, 0, 0.150499999523163),(0, 1, 0, 0.10530000180006),(0, 1, 0, 0.0439100004732609),(0, -1, 0, 0.031190000474453),(0, -1, 0, 0.0793600007891655),(0, -1, 0, 0.16159999370575),(0, -1, 0, 0.155000001192093),(0, -1, 0, 0.0864199995994568)]

Group1311.children.append(OrientationInterpolator1327)
OrientationInterpolator1328 = x3d.OrientationInterpolator()
OrientationInterpolator1328.DEF = "L_SHOULDER_ANIMATOR"
OrientationInterpolator1328.key = [0,0.375,0.9167,1]
OrientationInterpolator1328.keyValue = [(1, 0, 0.400000005960465, 0.119999997317791),(-1, 0, 0.400000005960465, 0.186000004410744),(1, 0, 0.100000001490116, 0.335999995470047),(1, 0, 0.400000005960465, 0.119999997317791)]

Group1311.children.append(OrientationInterpolator1328)
OrientationInterpolator1329 = x3d.OrientationInterpolator()
OrientationInterpolator1329.DEF = "L_ELBOW_ANIMATOR"
OrientationInterpolator1329.key = [0,0.375,0.9167,1]
OrientationInterpolator1329.keyValue = [(-1, 0, 0, 0.0659999996423721),(-1, 0, 0, 0.488000005483627),(-1, 0, 0, 0.0176999997347593),(-1, 0, 0, 0.065987803041935)]

Group1311.children.append(OrientationInterpolator1329)
OrientationInterpolator1330 = x3d.OrientationInterpolator()
OrientationInterpolator1330.DEF = "L_WRIST_ANIMATOR"
OrientationInterpolator1330.key = [0,0.375,0.9167,1]
OrientationInterpolator1330.keyValue = [(0, -1, 0, 0.460999995470047),(-0.330199986696243, -0.927500009536743, 0.175500005483627, 0.538800001144409),(0.0327773988246918, -0.99931401014328, -0.0172185003757477, 0.492033004760742),(0, -1, 0, 0.46110001206398)]

Group1311.children.append(OrientationInterpolator1330)
OrientationInterpolator1331 = x3d.OrientationInterpolator()
OrientationInterpolator1331.DEF = "R_SHOULDER_ANIMATOR"
OrientationInterpolator1331.key = [0,0.375,0.9167,1]
OrientationInterpolator1331.keyValue = [(-1, 0, -1, 0.0920000001788139),(1, 0, -0.200000002980232, 0.319700002670288),(-1, 0, -0.5, 0.156399995088577),(-1, 0, -1, 0.0920000001788139)]

Group1311.children.append(OrientationInterpolator1331)
OrientationInterpolator1332 = x3d.OrientationInterpolator()
OrientationInterpolator1332.DEF = "R_ELBOW_ANIMATOR"
OrientationInterpolator1332.key = [0,0.375,0.9167,1]
OrientationInterpolator1332.keyValue = [(-1, 0, 0, 0.411500006914139),(-1, 0, 0, 0.0925000011920929),(-1, 0, 0, 0.572567999362946),(-1, 0, 0, 0.411507993936539)]

Group1311.children.append(OrientationInterpolator1332)
OrientationInterpolator1333 = x3d.OrientationInterpolator()
OrientationInterpolator1333.DEF = "R_WRIST_ANIMATOR"
OrientationInterpolator1333.key = [0,0.375,0.9167,1]
OrientationInterpolator1333.keyValue = [(-0.812900006771088, 0.475899994373322, -0.335700005292892, 0.13459999859333),(0.153300002217293, -0.987800002098084, 0.0258200000971556, 0.390199989080429),(-0.570100009441376, 0.760399997234345, -0.310999989509583, 0.36599999666214),(-0.812900006771088, 0.475899994373322, -0.335700005292892, 0.13459999859333)]

Group1311.children.append(OrientationInterpolator1333)

Scene33.children.append(Group1311)
ROUTE1334 = x3d.ROUTE()
ROUTE1334.fromNode = "Time2"
ROUTE1334.fromField = "fraction_changed"
ROUTE1334.toNode = "vc6Yaw"
ROUTE1334.toField = "set_fraction"

Scene33.children.append(ROUTE1334)
ROUTE1335 = x3d.ROUTE()
ROUTE1335.fromNode = "vc6Yaw"
ROUTE1335.fromField = "value_changed"
ROUTE1335.toNode = "Joe_vc6"
ROUTE1335.toField = "set_rotation"

Scene33.children.append(ROUTE1335)
ROUTE1336 = x3d.ROUTE()
ROUTE1336.fromNode = "Time3"
ROUTE1336.fromField = "fraction_changed"
ROUTE1336.toNode = "EyeballsRotation"
ROUTE1336.toField = "set_fraction"

Scene33.children.append(ROUTE1336)
ROUTE1337 = x3d.ROUTE()
ROUTE1337.fromNode = "EyeballsRotation"
ROUTE1337.fromField = "value_changed"
ROUTE1337.toNode = "Joe_r_eyeball_joint"
ROUTE1337.toField = "set_rotation"

Scene33.children.append(ROUTE1337)
ROUTE1338 = x3d.ROUTE()
ROUTE1338.fromNode = "EyeballsRotation"
ROUTE1338.fromField = "value_changed"
ROUTE1338.toNode = "Joe_l_eyeball_joint"
ROUTE1338.toField = "set_rotation"

Scene33.children.append(ROUTE1338)
ROUTE1339 = x3d.ROUTE()
ROUTE1339.fromNode = "r_sternoclavicularRelax"
ROUTE1339.fromField = "value_changed"
ROUTE1339.toNode = "Joe_r_sternoclavicular"
ROUTE1339.toField = "set_rotation"

Scene33.children.append(ROUTE1339)
ROUTE1340 = x3d.ROUTE()
ROUTE1340.fromNode = "r_acromioclavicularRelax"
ROUTE1340.fromField = "value_changed"
ROUTE1340.toNode = "Joe_r_acromioclavicular"
ROUTE1340.toField = "set_rotation"

Scene33.children.append(ROUTE1340)
ROUTE1341 = x3d.ROUTE()
ROUTE1341.fromNode = "r_shoulderRelax"
ROUTE1341.fromField = "value_changed"
ROUTE1341.toNode = "Joe_r_shoulder"
ROUTE1341.toField = "set_rotation"

Scene33.children.append(ROUTE1341)
ROUTE1342 = x3d.ROUTE()
ROUTE1342.fromNode = "r_elbowRelax"
ROUTE1342.fromField = "value_changed"
ROUTE1342.toNode = "Joe_r_elbow"
ROUTE1342.toField = "set_rotation"

Scene33.children.append(ROUTE1342)
ROUTE1343 = x3d.ROUTE()
ROUTE1343.fromNode = "r_wristRelax"
ROUTE1343.fromField = "value_changed"
ROUTE1343.toNode = "Joe_r_wrist"
ROUTE1343.toField = "set_rotation"

Scene33.children.append(ROUTE1343)
ROUTE1344 = x3d.ROUTE()
ROUTE1344.fromNode = "r_thumb1Relax"
ROUTE1344.fromField = "value_changed"
ROUTE1344.toNode = "Joe_r_thumb1"
ROUTE1344.toField = "set_rotation"

Scene33.children.append(ROUTE1344)
ROUTE1345 = x3d.ROUTE()
ROUTE1345.fromNode = "r_thumb2Relax"
ROUTE1345.fromField = "value_changed"
ROUTE1345.toNode = "Joe_r_thumb2"
ROUTE1345.toField = "set_rotation"

Scene33.children.append(ROUTE1345)
ROUTE1346 = x3d.ROUTE()
ROUTE1346.fromNode = "r_thumb3Relax"
ROUTE1346.fromField = "value_changed"
ROUTE1346.toNode = "Joe_r_thumb3"
ROUTE1346.toField = "set_rotation"

Scene33.children.append(ROUTE1346)
ROUTE1347 = x3d.ROUTE()
ROUTE1347.fromNode = "r_index0Relax"
ROUTE1347.fromField = "value_changed"
ROUTE1347.toNode = "Joe_r_index0"
ROUTE1347.toField = "set_rotation"

Scene33.children.append(ROUTE1347)
ROUTE1348 = x3d.ROUTE()
ROUTE1348.fromNode = "r_index1Relax"
ROUTE1348.fromField = "value_changed"
ROUTE1348.toNode = "Joe_r_index1"
ROUTE1348.toField = "set_rotation"

Scene33.children.append(ROUTE1348)
ROUTE1349 = x3d.ROUTE()
ROUTE1349.fromNode = "r_fingers2Relax"
ROUTE1349.fromField = "value_changed"
ROUTE1349.toNode = "Joe_r_index2"
ROUTE1349.toField = "set_rotation"

Scene33.children.append(ROUTE1349)
ROUTE1350 = x3d.ROUTE()
ROUTE1350.fromNode = "r_fingers3Relax"
ROUTE1350.fromField = "value_changed"
ROUTE1350.toNode = "Joe_r_index3"
ROUTE1350.toField = "set_rotation"

Scene33.children.append(ROUTE1350)
ROUTE1351 = x3d.ROUTE()
ROUTE1351.fromNode = "r_middle0Relax"
ROUTE1351.fromField = "value_changed"
ROUTE1351.toNode = "Joe_r_middle0"
ROUTE1351.toField = "set_rotation"

Scene33.children.append(ROUTE1351)
ROUTE1352 = x3d.ROUTE()
ROUTE1352.fromNode = "r_middle1Relax"
ROUTE1352.fromField = "value_changed"
ROUTE1352.toNode = "Joe_r_middle1"
ROUTE1352.toField = "set_rotation"

Scene33.children.append(ROUTE1352)
ROUTE1353 = x3d.ROUTE()
ROUTE1353.fromNode = "r_fingers2Relax"
ROUTE1353.fromField = "value_changed"
ROUTE1353.toNode = "Joe_r_middle2"
ROUTE1353.toField = "set_rotation"

Scene33.children.append(ROUTE1353)
ROUTE1354 = x3d.ROUTE()
ROUTE1354.fromNode = "r_fingers3Relax"
ROUTE1354.fromField = "value_changed"
ROUTE1354.toNode = "Joe_r_middle3"
ROUTE1354.toField = "set_rotation"

Scene33.children.append(ROUTE1354)
ROUTE1355 = x3d.ROUTE()
ROUTE1355.fromNode = "r_ring0Relax"
ROUTE1355.fromField = "value_changed"
ROUTE1355.toNode = "Joe_r_ring0"
ROUTE1355.toField = "set_rotation"

Scene33.children.append(ROUTE1355)
ROUTE1356 = x3d.ROUTE()
ROUTE1356.fromNode = "r_ring1Relax"
ROUTE1356.fromField = "value_changed"
ROUTE1356.toNode = "Joe_r_ring1"
ROUTE1356.toField = "set_rotation"

Scene33.children.append(ROUTE1356)
ROUTE1357 = x3d.ROUTE()
ROUTE1357.fromNode = "r_fingers2Relax"
ROUTE1357.fromField = "value_changed"
ROUTE1357.toNode = "Joe_r_ring2"
ROUTE1357.toField = "set_rotation"

Scene33.children.append(ROUTE1357)
ROUTE1358 = x3d.ROUTE()
ROUTE1358.fromNode = "r_fingers3Relax"
ROUTE1358.fromField = "value_changed"
ROUTE1358.toNode = "Joe_r_ring3"
ROUTE1358.toField = "set_rotation"

Scene33.children.append(ROUTE1358)
ROUTE1359 = x3d.ROUTE()
ROUTE1359.fromNode = "r_pinky0Relax"
ROUTE1359.fromField = "value_changed"
ROUTE1359.toNode = "Joe_r_pinky0"
ROUTE1359.toField = "set_rotation"

Scene33.children.append(ROUTE1359)
ROUTE1360 = x3d.ROUTE()
ROUTE1360.fromNode = "r_pinky1Relax"
ROUTE1360.fromField = "value_changed"
ROUTE1360.toNode = "Joe_r_pinky1"
ROUTE1360.toField = "set_rotation"

Scene33.children.append(ROUTE1360)
ROUTE1361 = x3d.ROUTE()
ROUTE1361.fromNode = "r_fingers2Relax"
ROUTE1361.fromField = "value_changed"
ROUTE1361.toNode = "Joe_r_pinky2"
ROUTE1361.toField = "set_rotation"

Scene33.children.append(ROUTE1361)
ROUTE1362 = x3d.ROUTE()
ROUTE1362.fromNode = "r_fingers3Relax"
ROUTE1362.fromField = "value_changed"
ROUTE1362.toNode = "Joe_r_pinky3"
ROUTE1362.toField = "set_rotation"

Scene33.children.append(ROUTE1362)
ROUTE1363 = x3d.ROUTE()
ROUTE1363.fromNode = "Time2"
ROUTE1363.fromField = "fraction_changed"
ROUTE1363.toNode = "r_sternoclavicularRoll"
ROUTE1363.toField = "set_fraction"

Scene33.children.append(ROUTE1363)
ROUTE1364 = x3d.ROUTE()
ROUTE1364.fromNode = "Time2"
ROUTE1364.fromField = "fraction_changed"
ROUTE1364.toNode = "r_acromioclavicularRoll"
ROUTE1364.toField = "set_fraction"

Scene33.children.append(ROUTE1364)
ROUTE1365 = x3d.ROUTE()
ROUTE1365.fromNode = "Time2"
ROUTE1365.fromField = "fraction_changed"
ROUTE1365.toNode = "r_shoulderRoll"
ROUTE1365.toField = "set_fraction"

Scene33.children.append(ROUTE1365)
ROUTE1366 = x3d.ROUTE()
ROUTE1366.fromNode = "Time2"
ROUTE1366.fromField = "fraction_changed"
ROUTE1366.toNode = "r_ForeArmPitch"
ROUTE1366.toField = "set_fraction"

Scene33.children.append(ROUTE1366)
ROUTE1367 = x3d.ROUTE()
ROUTE1367.fromNode = "Time2"
ROUTE1367.fromField = "fraction_changed"
ROUTE1367.toNode = "r_wristRoll"
ROUTE1367.toField = "set_fraction"

Scene33.children.append(ROUTE1367)
ROUTE1368 = x3d.ROUTE()
ROUTE1368.fromNode = "Time2"
ROUTE1368.fromField = "fraction_changed"
ROUTE1368.toNode = "r_handPitch"
ROUTE1368.toField = "set_fraction"

Scene33.children.append(ROUTE1368)
ROUTE1369 = x3d.ROUTE()
ROUTE1369.fromNode = "Time2"
ROUTE1369.fromField = "fraction_changed"
ROUTE1369.toNode = "r_thumb1Pitch"
ROUTE1369.toField = "set_fraction"

Scene33.children.append(ROUTE1369)
ROUTE1370 = x3d.ROUTE()
ROUTE1370.fromNode = "Time2"
ROUTE1370.fromField = "fraction_changed"
ROUTE1370.toNode = "r_thumb2Pitch"
ROUTE1370.toField = "set_fraction"

Scene33.children.append(ROUTE1370)
ROUTE1371 = x3d.ROUTE()
ROUTE1371.fromNode = "r_sternoclavicularRoll"
ROUTE1371.fromField = "value_changed"
ROUTE1371.toNode = "Joe_r_sternoclavicular"
ROUTE1371.toField = "set_rotation"

Scene33.children.append(ROUTE1371)
ROUTE1372 = x3d.ROUTE()
ROUTE1372.fromNode = "r_acromioclavicularRoll"
ROUTE1372.fromField = "value_changed"
ROUTE1372.toNode = "Joe_r_acromioclavicular"
ROUTE1372.toField = "set_rotation"

Scene33.children.append(ROUTE1372)
ROUTE1373 = x3d.ROUTE()
ROUTE1373.fromNode = "r_shoulderRoll"
ROUTE1373.fromField = "value_changed"
ROUTE1373.toNode = "Joe_r_shoulder"
ROUTE1373.toField = "set_rotation"

Scene33.children.append(ROUTE1373)
ROUTE1374 = x3d.ROUTE()
ROUTE1374.fromNode = "r_ForeArmPitch"
ROUTE1374.fromField = "value_changed"
ROUTE1374.toNode = "Joe_r_elbow"
ROUTE1374.toField = "set_rotation"

Scene33.children.append(ROUTE1374)
ROUTE1375 = x3d.ROUTE()
ROUTE1375.fromNode = "r_wristRoll"
ROUTE1375.fromField = "value_changed"
ROUTE1375.toNode = "Joe_r_wrist"
ROUTE1375.toField = "set_rotation"

Scene33.children.append(ROUTE1375)
ROUTE1376 = x3d.ROUTE()
ROUTE1376.fromNode = "r_handPitch"
ROUTE1376.fromField = "value_changed"
ROUTE1376.toNode = "Joe_r_index0"
ROUTE1376.toField = "set_rotation"

Scene33.children.append(ROUTE1376)
ROUTE1377 = x3d.ROUTE()
ROUTE1377.fromNode = "r_handPitch"
ROUTE1377.fromField = "value_changed"
ROUTE1377.toNode = "Joe_r_index1"
ROUTE1377.toField = "set_rotation"

Scene33.children.append(ROUTE1377)
ROUTE1378 = x3d.ROUTE()
ROUTE1378.fromNode = "r_handPitch"
ROUTE1378.fromField = "value_changed"
ROUTE1378.toNode = "Joe_r_index2"
ROUTE1378.toField = "set_rotation"

Scene33.children.append(ROUTE1378)
ROUTE1379 = x3d.ROUTE()
ROUTE1379.fromNode = "r_handPitch"
ROUTE1379.fromField = "value_changed"
ROUTE1379.toNode = "Joe_r_index3"
ROUTE1379.toField = "set_rotation"

Scene33.children.append(ROUTE1379)
ROUTE1380 = x3d.ROUTE()
ROUTE1380.fromNode = "r_handPitch"
ROUTE1380.fromField = "value_changed"
ROUTE1380.toNode = "Joe_r_middle0"
ROUTE1380.toField = "set_rotation"

Scene33.children.append(ROUTE1380)
ROUTE1381 = x3d.ROUTE()
ROUTE1381.fromNode = "r_handPitch"
ROUTE1381.fromField = "value_changed"
ROUTE1381.toNode = "Joe_r_middle1"
ROUTE1381.toField = "set_rotation"

Scene33.children.append(ROUTE1381)
ROUTE1382 = x3d.ROUTE()
ROUTE1382.fromNode = "r_handPitch"
ROUTE1382.fromField = "value_changed"
ROUTE1382.toNode = "Joe_r_middle2"
ROUTE1382.toField = "set_rotation"

Scene33.children.append(ROUTE1382)
ROUTE1383 = x3d.ROUTE()
ROUTE1383.fromNode = "r_handPitch"
ROUTE1383.fromField = "value_changed"
ROUTE1383.toNode = "Joe_r_middle3"
ROUTE1383.toField = "set_rotation"

Scene33.children.append(ROUTE1383)
ROUTE1384 = x3d.ROUTE()
ROUTE1384.fromNode = "r_handPitch"
ROUTE1384.fromField = "value_changed"
ROUTE1384.toNode = "Joe_r_ring0"
ROUTE1384.toField = "set_rotation"

Scene33.children.append(ROUTE1384)
ROUTE1385 = x3d.ROUTE()
ROUTE1385.fromNode = "r_handPitch"
ROUTE1385.fromField = "value_changed"
ROUTE1385.toNode = "Joe_r_ring1"
ROUTE1385.toField = "set_rotation"

Scene33.children.append(ROUTE1385)
ROUTE1386 = x3d.ROUTE()
ROUTE1386.fromNode = "r_handPitch"
ROUTE1386.fromField = "value_changed"
ROUTE1386.toNode = "Joe_r_ring2"
ROUTE1386.toField = "set_rotation"

Scene33.children.append(ROUTE1386)
ROUTE1387 = x3d.ROUTE()
ROUTE1387.fromNode = "r_handPitch"
ROUTE1387.fromField = "value_changed"
ROUTE1387.toNode = "Joe_r_ring3"
ROUTE1387.toField = "set_rotation"

Scene33.children.append(ROUTE1387)
ROUTE1388 = x3d.ROUTE()
ROUTE1388.fromNode = "r_handPitch"
ROUTE1388.fromField = "value_changed"
ROUTE1388.toNode = "Joe_r_pinky0"
ROUTE1388.toField = "set_rotation"

Scene33.children.append(ROUTE1388)
ROUTE1389 = x3d.ROUTE()
ROUTE1389.fromNode = "r_handPitch"
ROUTE1389.fromField = "value_changed"
ROUTE1389.toNode = "Joe_r_pinky1"
ROUTE1389.toField = "set_rotation"

Scene33.children.append(ROUTE1389)
ROUTE1390 = x3d.ROUTE()
ROUTE1390.fromNode = "r_handPitch"
ROUTE1390.fromField = "value_changed"
ROUTE1390.toNode = "Joe_r_pinky2"
ROUTE1390.toField = "set_rotation"

Scene33.children.append(ROUTE1390)
ROUTE1391 = x3d.ROUTE()
ROUTE1391.fromNode = "r_handPitch"
ROUTE1391.fromField = "value_changed"
ROUTE1391.toNode = "Joe_r_pinky3"
ROUTE1391.toField = "set_rotation"

Scene33.children.append(ROUTE1391)
ROUTE1392 = x3d.ROUTE()
ROUTE1392.fromNode = "r_thumb1Pitch"
ROUTE1392.fromField = "value_changed"
ROUTE1392.toNode = "Joe_r_thumb1"
ROUTE1392.toField = "set_rotation"

Scene33.children.append(ROUTE1392)
ROUTE1393 = x3d.ROUTE()
ROUTE1393.fromNode = "r_thumb2Pitch"
ROUTE1393.fromField = "value_changed"
ROUTE1393.toNode = "Joe_r_thumb2"
ROUTE1393.toField = "set_rotation"

Scene33.children.append(ROUTE1393)
ROUTE1394 = x3d.ROUTE()
ROUTE1394.fromNode = "r_thumb2Pitch"
ROUTE1394.fromField = "value_changed"
ROUTE1394.toNode = "Joe_r_thumb3"
ROUTE1394.toField = "set_rotation"

Scene33.children.append(ROUTE1394)
ROUTE1395 = x3d.ROUTE()
ROUTE1395.fromNode = "l_shoulderRoll"
ROUTE1395.fromField = "value_changed"
ROUTE1395.toNode = "Joe_l_shoulder"
ROUTE1395.toField = "set_rotation"

Scene33.children.append(ROUTE1395)
ROUTE1396 = x3d.ROUTE()
ROUTE1396.fromNode = "Time1"
ROUTE1396.fromField = "fraction_changed"
ROUTE1396.toNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE1396.toField = "set_fraction"

Scene33.children.append(ROUTE1396)
ROUTE1397 = x3d.ROUTE()
ROUTE1397.fromNode = "Time1"
ROUTE1397.fromField = "fraction_changed"
ROUTE1397.toNode = "HUMANOIDROOT_ANIMATOR"
ROUTE1397.toField = "set_fraction"

Scene33.children.append(ROUTE1397)
ROUTE1398 = x3d.ROUTE()
ROUTE1398.fromNode = "Time1"
ROUTE1398.fromField = "fraction_changed"
ROUTE1398.toNode = "L_HIP_ANIMATOR"
ROUTE1398.toField = "set_fraction"

Scene33.children.append(ROUTE1398)
ROUTE1399 = x3d.ROUTE()
ROUTE1399.fromNode = "Time1"
ROUTE1399.fromField = "fraction_changed"
ROUTE1399.toNode = "L_KNEE_ANIMATOR"
ROUTE1399.toField = "set_fraction"

Scene33.children.append(ROUTE1399)
ROUTE1400 = x3d.ROUTE()
ROUTE1400.fromNode = "Time1"
ROUTE1400.fromField = "fraction_changed"
ROUTE1400.toNode = "L_ANKLE_ANIMATOR"
ROUTE1400.toField = "set_fraction"

Scene33.children.append(ROUTE1400)
ROUTE1401 = x3d.ROUTE()
ROUTE1401.fromNode = "Time1"
ROUTE1401.fromField = "fraction_changed"
ROUTE1401.toNode = "L_subtalar_ANIMATOR"
ROUTE1401.toField = "set_fraction"

Scene33.children.append(ROUTE1401)
ROUTE1402 = x3d.ROUTE()
ROUTE1402.fromNode = "Time1"
ROUTE1402.fromField = "fraction_changed"
ROUTE1402.toNode = "L_MIDTARSAL_ANIMATOR"
ROUTE1402.toField = "set_fraction"

Scene33.children.append(ROUTE1402)
ROUTE1403 = x3d.ROUTE()
ROUTE1403.fromNode = "Time1"
ROUTE1403.fromField = "fraction_changed"
ROUTE1403.toNode = "L_metatarsal_ANIMATOR"
ROUTE1403.toField = "set_fraction"

Scene33.children.append(ROUTE1403)
ROUTE1404 = x3d.ROUTE()
ROUTE1404.fromNode = "Time1"
ROUTE1404.fromField = "fraction_changed"
ROUTE1404.toNode = "R_HIP_ANIMATOR"
ROUTE1404.toField = "set_fraction"

Scene33.children.append(ROUTE1404)
ROUTE1405 = x3d.ROUTE()
ROUTE1405.fromNode = "Time1"
ROUTE1405.fromField = "fraction_changed"
ROUTE1405.toNode = "R_KNEE_ANIMATOR"
ROUTE1405.toField = "set_fraction"

Scene33.children.append(ROUTE1405)
ROUTE1406 = x3d.ROUTE()
ROUTE1406.fromNode = "Time1"
ROUTE1406.fromField = "fraction_changed"
ROUTE1406.toNode = "R_ANKLE_ANIMATOR"
ROUTE1406.toField = "set_fraction"

Scene33.children.append(ROUTE1406)
ROUTE1407 = x3d.ROUTE()
ROUTE1407.fromNode = "Time1"
ROUTE1407.fromField = "fraction_changed"
ROUTE1407.toNode = "R_subtalar_ANIMATOR"
ROUTE1407.toField = "set_fraction"

Scene33.children.append(ROUTE1407)
ROUTE1408 = x3d.ROUTE()
ROUTE1408.fromNode = "Time1"
ROUTE1408.fromField = "fraction_changed"
ROUTE1408.toNode = "R_MIDTARSAL_ANIMATOR"
ROUTE1408.toField = "set_fraction"

Scene33.children.append(ROUTE1408)
ROUTE1409 = x3d.ROUTE()
ROUTE1409.fromNode = "Time1"
ROUTE1409.fromField = "fraction_changed"
ROUTE1409.toNode = "R_metatarsal_ANIMATOR"
ROUTE1409.toField = "set_fraction"

Scene33.children.append(ROUTE1409)
ROUTE1410 = x3d.ROUTE()
ROUTE1410.fromNode = "Time1"
ROUTE1410.fromField = "fraction_changed"
ROUTE1410.toNode = "VL5_ANIMATOR"
ROUTE1410.toField = "set_fraction"

Scene33.children.append(ROUTE1410)
ROUTE1411 = x3d.ROUTE()
ROUTE1411.fromNode = "Time1"
ROUTE1411.fromField = "fraction_changed"
ROUTE1411.toNode = "SKULLBASE_ANIMATOR"
ROUTE1411.toField = "set_fraction"

Scene33.children.append(ROUTE1411)
ROUTE1412 = x3d.ROUTE()
ROUTE1412.fromNode = "Time1"
ROUTE1412.fromField = "fraction_changed"
ROUTE1412.toNode = "L_SHOULDER_ANIMATOR"
ROUTE1412.toField = "set_fraction"

Scene33.children.append(ROUTE1412)
ROUTE1413 = x3d.ROUTE()
ROUTE1413.fromNode = "Time1"
ROUTE1413.fromField = "fraction_changed"
ROUTE1413.toNode = "L_ELBOW_ANIMATOR"
ROUTE1413.toField = "set_fraction"

Scene33.children.append(ROUTE1413)
ROUTE1414 = x3d.ROUTE()
ROUTE1414.fromNode = "Time1"
ROUTE1414.fromField = "fraction_changed"
ROUTE1414.toNode = "L_WRIST_ANIMATOR"
ROUTE1414.toField = "set_fraction"

Scene33.children.append(ROUTE1414)
ROUTE1415 = x3d.ROUTE()
ROUTE1415.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR"
ROUTE1415.fromField = "value_changed"
ROUTE1415.toNode = "Joe_HumanoidRoot"
ROUTE1415.toField = "set_translation"

Scene33.children.append(ROUTE1415)
ROUTE1416 = x3d.ROUTE()
ROUTE1416.fromNode = "HUMANOIDROOT_ANIMATOR"
ROUTE1416.fromField = "value_changed"
ROUTE1416.toNode = "Joe_HumanoidRoot"
ROUTE1416.toField = "set_rotation"

Scene33.children.append(ROUTE1416)
ROUTE1417 = x3d.ROUTE()
ROUTE1417.fromNode = "L_HIP_ANIMATOR"
ROUTE1417.fromField = "value_changed"
ROUTE1417.toNode = "Joe_l_hip"
ROUTE1417.toField = "set_rotation"

Scene33.children.append(ROUTE1417)
ROUTE1418 = x3d.ROUTE()
ROUTE1418.fromNode = "L_KNEE_ANIMATOR"
ROUTE1418.fromField = "value_changed"
ROUTE1418.toNode = "Joe_l_knee"
ROUTE1418.toField = "set_rotation"

Scene33.children.append(ROUTE1418)
ROUTE1419 = x3d.ROUTE()
ROUTE1419.fromNode = "L_ANKLE_ANIMATOR"
ROUTE1419.fromField = "value_changed"
ROUTE1419.toNode = "Joe_l_ankle"
ROUTE1419.toField = "set_rotation"

Scene33.children.append(ROUTE1419)
ROUTE1420 = x3d.ROUTE()
ROUTE1420.fromNode = "L_MIDTARSAL_ANIMATOR"
ROUTE1420.fromField = "value_changed"
ROUTE1420.toNode = "Joe_l_midtarsal"
ROUTE1420.toField = "set_rotation"

Scene33.children.append(ROUTE1420)
ROUTE1421 = x3d.ROUTE()
ROUTE1421.fromNode = "L_subtalar_ANIMATOR"
ROUTE1421.fromField = "value_changed"
ROUTE1421.toNode = "Joe_l_subtalar"
ROUTE1421.toField = "set_rotation"

Scene33.children.append(ROUTE1421)
ROUTE1422 = x3d.ROUTE()
ROUTE1422.fromNode = "L_metatarsal_ANIMATOR"
ROUTE1422.fromField = "value_changed"
ROUTE1422.toNode = "Joe_l_metatarsal"
ROUTE1422.toField = "set_rotation"

Scene33.children.append(ROUTE1422)
ROUTE1423 = x3d.ROUTE()
ROUTE1423.fromNode = "R_HIP_ANIMATOR"
ROUTE1423.fromField = "value_changed"
ROUTE1423.toNode = "Joe_r_hip"
ROUTE1423.toField = "set_rotation"

Scene33.children.append(ROUTE1423)
ROUTE1424 = x3d.ROUTE()
ROUTE1424.fromNode = "R_KNEE_ANIMATOR"
ROUTE1424.fromField = "value_changed"
ROUTE1424.toNode = "Joe_r_knee"
ROUTE1424.toField = "set_rotation"

Scene33.children.append(ROUTE1424)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.fromNode = "R_ANKLE_ANIMATOR"
ROUTE1425.fromField = "value_changed"
ROUTE1425.toNode = "Joe_r_ankle"
ROUTE1425.toField = "set_rotation"

Scene33.children.append(ROUTE1425)
ROUTE1426 = x3d.ROUTE()
ROUTE1426.fromNode = "R_subtalar_ANIMATOR"
ROUTE1426.fromField = "value_changed"
ROUTE1426.toNode = "Joe_r_subtalar"
ROUTE1426.toField = "set_rotation"

Scene33.children.append(ROUTE1426)
ROUTE1427 = x3d.ROUTE()
ROUTE1427.fromNode = "R_MIDTARSAL_ANIMATOR"
ROUTE1427.fromField = "value_changed"
ROUTE1427.toNode = "Joe_r_midtarsal"
ROUTE1427.toField = "set_rotation"

Scene33.children.append(ROUTE1427)
ROUTE1428 = x3d.ROUTE()
ROUTE1428.fromNode = "R_metatarsal_ANIMATOR"
ROUTE1428.fromField = "value_changed"
ROUTE1428.toNode = "Joe_r_metatarsal"
ROUTE1428.toField = "set_rotation"

Scene33.children.append(ROUTE1428)
ROUTE1429 = x3d.ROUTE()
ROUTE1429.fromNode = "VL5_ANIMATOR"
ROUTE1429.fromField = "value_changed"
ROUTE1429.toNode = "Joe_vl5"
ROUTE1429.toField = "set_rotation"

Scene33.children.append(ROUTE1429)
ROUTE1430 = x3d.ROUTE()
ROUTE1430.fromNode = "SKULLBASE_ANIMATOR"
ROUTE1430.fromField = "value_changed"
ROUTE1430.toNode = "Joe_skullbase"
ROUTE1430.toField = "set_rotation"

Scene33.children.append(ROUTE1430)
ROUTE1431 = x3d.ROUTE()
ROUTE1431.fromNode = "L_SHOULDER_ANIMATOR"
ROUTE1431.fromField = "value_changed"
ROUTE1431.toNode = "Joe_l_shoulder"
ROUTE1431.toField = "set_rotation"

Scene33.children.append(ROUTE1431)
ROUTE1432 = x3d.ROUTE()
ROUTE1432.fromNode = "L_ELBOW_ANIMATOR"
ROUTE1432.fromField = "value_changed"
ROUTE1432.toNode = "Joe_l_elbow"
ROUTE1432.toField = "set_rotation"

Scene33.children.append(ROUTE1432)
ROUTE1433 = x3d.ROUTE()
ROUTE1433.fromNode = "L_WRIST_ANIMATOR"
ROUTE1433.fromField = "value_changed"
ROUTE1433.toNode = "Joe_l_wrist"
ROUTE1433.toField = "set_rotation"

Scene33.children.append(ROUTE1433)
ROUTE1434 = x3d.ROUTE()
ROUTE1434.fromNode = "R_SHOULDER_ANIMATOR"
ROUTE1434.fromField = "value_changed"
ROUTE1434.toNode = "Joe_r_shoulder"
ROUTE1434.toField = "set_rotation"

Scene33.children.append(ROUTE1434)
ROUTE1435 = x3d.ROUTE()
ROUTE1435.fromNode = "R_ELBOW_ANIMATOR"
ROUTE1435.fromField = "value_changed"
ROUTE1435.toNode = "Joe_r_elbow"
ROUTE1435.toField = "set_rotation"

Scene33.children.append(ROUTE1435)
ROUTE1436 = x3d.ROUTE()
ROUTE1436.fromNode = "R_WRIST_ANIMATOR"
ROUTE1436.fromField = "value_changed"
ROUTE1436.toNode = "Joe_r_wrist"
ROUTE1436.toField = "set_rotation"

Scene33.children.append(ROUTE1436)

X3D0.Scene = Scene33
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeSkeletonSkinSiteSaluteWalk.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

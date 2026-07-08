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
meta3.content = "JoeSkeletonSkinSite.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."

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
meta12.name = "Image"
meta12.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "drawing"
meta13.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "Image"
meta14.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "Image"
meta15.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "Image"
meta16.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "Image"
meta17.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Image"
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "generator"
meta22.content = "tovrmlx3d, https://castle-engine.io/convert.php"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "reference"
meta23.content = "https://castle-engine.io/view3dscene.php#section_converting"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "translator"
meta24.content = "Michalis Kamburelis"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "translator"
meta25.content = "Don Brutzman"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "translator"
meta26.content = "Joe D. Williams"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "generator"
meta27.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "generator"
meta28.content = "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "identifier"
meta29.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "license"
meta30.content = "../license.html"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "generator"
meta31.content = "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"

head1.children.append(meta31)

X3D0.head = head1
Scene32 = x3d.Scene()
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.info = ["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"]
WorldInfo33.title = "JoeSkeletonSkinSite.x3d"

Scene32.children.append(WorldInfo33)
NavigationInfo34 = x3d.NavigationInfo(DEF="HeadlightOnRevealsSkinTextureAndColors")

Scene32.children.append(NavigationInfo34)
Background35 = x3d.Background()
Background35.groundAngle = [1.57]
Background35.groundColor = [(0, 0.1, 0),(0, 0.1, 0)]
Background35.skyColor = [(0, 0, 0.1)]

Scene32.children.append(Background35)
Scene32.children.append(x3d.Comment("""Authoring hint: these axes are aligned within local coordinate system"""))
Group36 = x3d.Group(DEF="ViewpointGroup")
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Front Up View"
Viewpoint37.orientation = [-1,-1,0,0.55]
Viewpoint37.position = [-1,2,2.5]

Group36.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "From Left View"
Viewpoint38.orientation = [0.3,1,0,-1.57]
Viewpoint38.position = [-2.5,1.5,0]

Group36.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Front Mid View"
Viewpoint39.position = [0,0.5,1.25]

Group36.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Front Feet View"
Viewpoint40.position = [0,0,0.75]

Group36.children.append(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "From Right View"
Viewpoint41.orientation = [0,1,0,1.57]
Viewpoint41.position = [1,1,0]

Group36.children.append(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.centerOfRotation = [0,1.65,0]
Viewpoint42.description = "Front Head View"
Viewpoint42.position = [0,1.65,0.75]

Group36.children.append(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.description = "Front Mid View"
Viewpoint43.position = [0,1,1.75]

Group36.children.append(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "Rear View"
Viewpoint44.orientation = [0,1,0,3.14]
Viewpoint44.position = [0,1.5,-4]

Group36.children.append(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.description = "Top View"
Viewpoint45.orientation = [1,0,0,-1.57]
Viewpoint45.position = [0,4,0]

Group36.children.append(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.description = "Bottom View"
Viewpoint46.orientation = [1,0,0,1.57]
Viewpoint46.position = [0,-4,0]

Group36.children.append(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.description = "Right View"
Viewpoint47.orientation = [0,1,0,1.57]
Viewpoint47.position = [4,1.5,0]

Group36.children.append(Viewpoint47)

Scene32.children.append(Group36)
Group48 = x3d.Group(DEF="VisualizationShapes")
Group48.visible = False
Transform49 = x3d.Transform()
Transform49.scale = [5,5,5]
Transform49.translation = [0,2.1,0]
Shape50 = x3d.Shape(DEF="jointbox")
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.ambientIntensity = 0.5
Material52.diffuseColor = [0,0,0]
Material52.shininess = 1

Appearance51.material = Material52

Shape50.appearance = Appearance51
IndexedFaceSet53 = x3d.IndexedFaceSet()
IndexedFaceSet53.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet53.creaseAngle = 0.1
Color54 = x3d.Color()
Color54.color = [(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 1, 1),(0, 1, 1),(1, 1, 0)]

IndexedFaceSet53.color = Color54
Coordinate55 = x3d.Coordinate(DEF="boxCoords")
Coordinate55.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.0157),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet53.coord = Coordinate55

Shape50.geometry = IndexedFaceSet53

Transform49.children.append(Shape50)

Group48.children.append(Transform49)
Transform56 = x3d.Transform()
Transform56.scale = [0.1,0.1,0.1]
Transform56.translation = [-0.2,0.773,-0.016]
Shape57 = x3d.Shape(DEF="sitebox")
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.ambientIntensity = 1
Material59.diffuseColor = [1,0,0]
Material59.emissiveColor = [1,0,0]
Material59.shininess = 0.7
Material59.specularColor = [1,0,0]

Appearance58.material = Material59

Shape57.appearance = Appearance58
IndexedFaceSet60 = x3d.IndexedFaceSet()
IndexedFaceSet60.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
IndexedFaceSet60.creaseAngle = 0.1
Coordinate61 = x3d.Coordinate(USE="boxCoords")

IndexedFaceSet60.coord = Coordinate61

Shape57.geometry = IndexedFaceSet60

Transform56.children.append(Shape57)

Group48.children.append(Transform56)
Transform62 = x3d.Transform()
Transform62.scale = [0.1,0.1,0.1]
Transform62.translation = [0,0.2,0]
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance(DEF="SegmentLine")
Material65 = x3d.Material()
Material65.diffuseColor = [0,1,0]
Material65.emissiveColor = [0,1,0]
Material65.specularColor = [0,1,0]

Appearance64.material = Material65

Shape63.appearance = Appearance64
IndexedLineSet66 = x3d.IndexedLineSet()
IndexedLineSet66.coordIndex = [0,1,-1]
Coordinate67 = x3d.Coordinate()
Coordinate67.point = [(0, 0, 0),(0, 0.0001, 0)]

IndexedLineSet66.coord = Coordinate67

Shape63.geometry = IndexedLineSet66

Transform62.children.append(Shape63)

Group48.children.append(Transform62)
Transform68 = x3d.Transform()
Transform68.scale = [0.1,0.1,0.1]
Transform68.translation = [-0.2,0.773,-0.016]
Shape69 = x3d.Shape(DEF="skinsphere")
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.ambientIntensity = 0.5
Material71.diffuseColor = [0,1,0]
Material71.emissiveColor = [0,1,0]
Material71.shininess = 1
Material71.specularColor = [0,1,0]

Appearance70.material = Material71

Shape69.appearance = Appearance70
Sphere72 = x3d.Sphere()
Sphere72.radius = 0.005

Shape69.geometry = Sphere72

Transform68.children.append(Shape69)

Group48.children.append(Transform68)

Scene32.children.append(Group48)
Group73 = x3d.Group(DEF="SpecHumanoid")
Group74 = x3d.Group(DEF="JoeISOHumanoid")
HAnimHumanoid75 = x3d.HAnimHumanoid(DEF="Joe_Human")
HAnimHumanoid75.name = "Human"
HAnimHumanoid75.loa = 4
HAnimHumanoid75.version = "2.0"
HAnimHumanoid75.children.append(x3d.Comment("""original HAnimHumanoid info='\"humanoidVersion=2.0\"'"""))
HAnimHumanoid75.children.append(x3d.Comment("""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""))
HAnimHumanoid75.children.append(x3d.Comment("""</LOD>"""))
MetadataSet76 = x3d.MetadataSet()
MetadataSet76.name = "HAnimHumanoid.info"
MetadataSet76.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString77 = x3d.MetadataString()
MetadataString77.name = "humanoidVersion"
MetadataString77.value = ["2.0"]

if MetadataSet76.value is None:
    MetadataSet76.value = []
MetadataSet76.value.append(MetadataString77)

HAnimHumanoid75.metadata = MetadataSet76
HAnimJoint78 = x3d.HAnimJoint(DEF="Joe_humanoid_root")
HAnimJoint78.name = "humanoid_root"
HAnimJoint78.center = [0,0.875,0]
HAnimSegment79 = x3d.HAnimSegment(DEF="Joe_sacrum")
HAnimSegment79.name = "sacrum"
Transform80 = x3d.Transform()
Transform80.translation = [0,0.875,0]
Shape81 = x3d.Shape(USE="jointbox")

Transform80.children.append(Shape81)

HAnimSegment79.children.append(Transform80)
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance(USE="SegmentLine")

Shape82.appearance = Appearance83
IndexedLineSet84 = x3d.IndexedLineSet()
IndexedLineSet84.coordIndex = [0,1,-1]
Coordinate85 = x3d.Coordinate()
Coordinate85.point = [(0, 0.875, 0),(0, 0.92, 0)]

IndexedLineSet84.coord = Coordinate85

Shape82.geometry = IndexedLineSet84

HAnimSegment79.children.append(Shape82)
Transform86 = x3d.Transform()
Transform86.translation = [0,0.92,0.08]
Shape87 = x3d.Shape(USE="skinsphere")

Transform86.children.append(Shape87)

HAnimSegment79.children.append(Transform86)
Transform88 = x3d.Transform()
Transform88.translation = [0,0.87,-0.022]
Shape89 = x3d.Shape(USE="skinsphere")

Transform88.children.append(Shape89)

HAnimSegment79.children.append(Transform88)

HAnimJoint78.children.append(HAnimSegment79)
HAnimJoint90 = x3d.HAnimJoint(DEF="Joe_sacroiliac")
HAnimJoint90.name = "sacroiliac"
HAnimJoint90.center = [0,0.92,0]
HAnimJoint90.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint90.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimSegment91 = x3d.HAnimSegment(DEF="Joe_pelvis")
HAnimSegment91.name = "pelvis"
Transform92 = x3d.Transform()
Transform92.translation = [0,0.9149,0.0016]
Transform93 = x3d.Transform()
Shape94 = x3d.Shape(USE="jointbox")

Transform93.children.append(Shape94)

Transform92.children.append(Transform93)

HAnimSegment91.children.append(Transform92)
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance(USE="SegmentLine")

Shape95.appearance = Appearance96
IndexedLineSet97 = x3d.IndexedLineSet()
IndexedLineSet97.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate98 = x3d.Coordinate()
Coordinate98.point = [(0, 0.92, 0),(0.0961, 0.9124, 0),(-0.095, 0.9171, 0.0029),(0, 1.045, -0.095)]

IndexedLineSet97.coord = Coordinate98

Shape95.geometry = IndexedLineSet97

HAnimSegment91.children.append(Shape95)
HAnimSite99 = x3d.HAnimSite(DEF="Joe_l_iliocristale_pt")
HAnimSite99.name = "l_iliocristale_pt"
HAnimSite99.translation = [0.1425,1.065,0.0033]
Shape100 = x3d.Shape(USE="sitebox")

HAnimSite99.children.append(Shape100)

HAnimSegment91.children.append(HAnimSite99)
HAnimSite101 = x3d.HAnimSite(DEF="Joe_l_trochanterion_pt")
HAnimSite101.name = "l_trochanterion_pt"
HAnimSite101.translation = [0.15,0.9,-0.01]
Shape102 = x3d.Shape(USE="sitebox")

HAnimSite101.children.append(Shape102)

HAnimSegment91.children.append(HAnimSite101)
HAnimSite103 = x3d.HAnimSite(DEF="Joe_r_iliocristale_pt")
HAnimSite103.name = "r_iliocristale_pt"
HAnimSite103.translation = [-0.1425,1.065,0.0033]
Shape104 = x3d.Shape(USE="sitebox")

HAnimSite103.children.append(Shape104)

HAnimSegment91.children.append(HAnimSite103)
HAnimSite105 = x3d.HAnimSite(DEF="Joe_r_trochanterion_pt")
HAnimSite105.name = "r_trochanterion_pt"
HAnimSite105.translation = [-0.15,0.9,-0.01]
Shape106 = x3d.Shape(USE="sitebox")

HAnimSite105.children.append(Shape106)

HAnimSegment91.children.append(HAnimSite105)
HAnimSite107 = x3d.HAnimSite(DEF="Joe_l_asis_pt")
HAnimSite107.name = "l_asis_pt"
HAnimSite107.translation = [0.0935,1.03,0.075]
Shape108 = x3d.Shape(USE="sitebox")

HAnimSite107.children.append(Shape108)

HAnimSegment91.children.append(HAnimSite107)
HAnimSite109 = x3d.HAnimSite(DEF="Joe_r_asis_pt")
HAnimSite109.name = "r_asis_pt"
HAnimSite109.translation = [-0.0935,1.03,0.075]
Shape110 = x3d.Shape(USE="sitebox")

HAnimSite109.children.append(Shape110)

HAnimSegment91.children.append(HAnimSite109)
HAnimSite111 = x3d.HAnimSite(DEF="Joe_l_psis_pt")
HAnimSite111.name = "l_psis_pt"
HAnimSite111.translation = [0.0773,1.019,-0.12]
Shape112 = x3d.Shape(USE="sitebox")

HAnimSite111.children.append(Shape112)

HAnimSegment91.children.append(HAnimSite111)
HAnimSite113 = x3d.HAnimSite(DEF="Joe_r_psis_pt")
HAnimSite113.name = "r_psis_pt"
HAnimSite113.translation = [-0.0773,1.019,-0.12]
Shape114 = x3d.Shape(USE="sitebox")

HAnimSite113.children.append(Shape114)

HAnimSegment91.children.append(HAnimSite113)
HAnimSite115 = x3d.HAnimSite(DEF="Joe_floormarker_pt")
HAnimSite115.name = "floormarker_pt"
Transform116 = x3d.Transform()
Transform116.scale = [3,3,3]
Shape117 = x3d.Shape(USE="sitebox")

Transform116.children.append(Shape117)

HAnimSite115.children.append(Transform116)

HAnimSegment91.children.append(HAnimSite115)
HAnimSite118 = x3d.HAnimSite(DEF="Joe_crotch_pt")
HAnimSite118.name = "crotch_pt"
HAnimSite118.translation = [0,0.87,-0.022]
Shape119 = x3d.Shape(USE="sitebox")

HAnimSite118.children.append(Shape119)

HAnimSegment91.children.append(HAnimSite118)

HAnimJoint90.children.append(HAnimSegment91)
HAnimJoint120 = x3d.HAnimJoint(DEF="Joe_l_hip")
HAnimJoint120.name = "l_hip"
HAnimJoint120.center = [0.1,0.92,0]
HAnimJoint120.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint120.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment121 = x3d.HAnimSegment(DEF="Joe_l_thigh")
HAnimSegment121.name = "l_thigh"
Transform122 = x3d.Transform()
Transform122.translation = [0.1,0.92,0]
Shape123 = x3d.Shape(USE="jointbox")

Transform122.children.append(Shape123)

HAnimSegment121.children.append(Transform122)
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance(USE="SegmentLine")

Shape124.appearance = Appearance125
IndexedLineSet126 = x3d.IndexedLineSet()
IndexedLineSet126.coordIndex = [0,1,-1]
Coordinate127 = x3d.Coordinate()
Coordinate127.point = [(0.1, 0.92, 0),(0.115, 0.466, 0)]

IndexedLineSet126.coord = Coordinate127

Shape124.geometry = IndexedLineSet126

HAnimSegment121.children.append(Shape124)
Transform128 = x3d.Transform()
Transform128.translation = [0.1,0.9,0.0775]
Shape129 = x3d.Shape(USE="skinsphere")

Transform128.children.append(Shape129)

HAnimSegment121.children.append(Transform128)
Transform130 = x3d.Transform()
Transform130.translation = [0.079,0.92,-0.14]
Shape131 = x3d.Shape(USE="skinsphere")

Transform130.children.append(Shape131)

HAnimSegment121.children.append(Transform130)
Transform132 = x3d.Transform()
Transform132.translation = [0.171,0.65,0]
Shape133 = x3d.Shape(USE="skinsphere")

Transform132.children.append(Shape133)

HAnimSegment121.children.append(Transform132)
Transform134 = x3d.Transform()
Transform134.translation = [0.02,0.65,0]
Shape135 = x3d.Shape(USE="skinsphere")

Transform134.children.append(Shape135)

HAnimSegment121.children.append(Transform134)
Transform136 = x3d.Transform()
Transform136.translation = [0.1,0.65,-0.08]
Shape137 = x3d.Shape(USE="skinsphere")

Transform136.children.append(Shape137)

HAnimSegment121.children.append(Transform136)
Transform138 = x3d.Transform()
Transform138.translation = [0.1,0.65,0.07]
Shape139 = x3d.Shape(USE="skinsphere")

Transform138.children.append(Shape139)

HAnimSegment121.children.append(Transform138)
HAnimSite140 = x3d.HAnimSite(DEF="Joe_l_knee_crease_pt")
HAnimSite140.name = "l_knee_crease_pt"
HAnimSite140.translation = [0.115,0.466,-0.055]
Shape141 = x3d.Shape(USE="sitebox")

HAnimSite140.children.append(Shape141)

HAnimSegment121.children.append(HAnimSite140)
HAnimSite142 = x3d.HAnimSite(DEF="Joe_l_femoral_lateral_epicondyle_pt")
HAnimSite142.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite142.translation = [0.17,0.466,0]
Shape143 = x3d.Shape(USE="sitebox")

HAnimSite142.children.append(Shape143)

HAnimSegment121.children.append(HAnimSite142)
HAnimSite144 = x3d.HAnimSite(DEF="Joe_l_femoral_medial_epicondyle_pt")
HAnimSite144.name = "l_femoral_medial_epicondyle_pt"
HAnimSite144.translation = [0.05,0.466,0]
Shape145 = x3d.Shape(USE="sitebox")

HAnimSite144.children.append(Shape145)

HAnimSegment121.children.append(HAnimSite144)

HAnimJoint120.children.append(HAnimSegment121)
HAnimJoint146 = x3d.HAnimJoint(DEF="Joe_l_knee")
HAnimJoint146.name = "l_knee"
HAnimJoint146.center = [0.115,0.466,0]
HAnimJoint146.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint146.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment147 = x3d.HAnimSegment(DEF="Joe_l_calf")
HAnimSegment147.name = "l_calf"
Transform148 = x3d.Transform()
Transform148.translation = [0.115,0.466,0]
Shape149 = x3d.Shape(USE="jointbox")

Transform148.children.append(Shape149)

HAnimSegment147.children.append(Transform148)
Shape150 = x3d.Shape()
Appearance151 = x3d.Appearance(USE="SegmentLine")

Shape150.appearance = Appearance151
IndexedLineSet152 = x3d.IndexedLineSet()
IndexedLineSet152.coordIndex = [0,1,-1]
Coordinate153 = x3d.Coordinate()
Coordinate153.point = [(0.115, 0.466, 0),(0.1, 0.069, 0)]

IndexedLineSet152.coord = Coordinate153

Shape150.geometry = IndexedLineSet152

HAnimSegment147.children.append(Shape150)
Transform154 = x3d.Transform()
Transform154.translation = [0.115,0.466,0.06]
Shape155 = x3d.Shape(USE="skinsphere")

Transform154.children.append(Shape155)

HAnimSegment147.children.append(Transform154)
Transform156 = x3d.Transform()
Transform156.translation = [0.115,0.466,-0.055]
Shape157 = x3d.Shape(USE="skinsphere")

Transform156.children.append(Shape157)

HAnimSegment147.children.append(Transform156)
Transform158 = x3d.Transform()
Transform158.translation = [0.17,0.466,0]
Shape159 = x3d.Shape(USE="skinsphere")

Transform158.children.append(Shape159)

HAnimSegment147.children.append(Transform158)
Transform160 = x3d.Transform()
Transform160.translation = [0.05,0.466,0]
Shape161 = x3d.Shape(USE="skinsphere")

Transform160.children.append(Shape161)

HAnimSegment147.children.append(Transform160)
Transform162 = x3d.Transform()
Transform162.translation = [0.17,0.3,0]
Shape163 = x3d.Shape(USE="skinsphere")

Transform162.children.append(Shape163)

HAnimSegment147.children.append(Transform162)
Transform164 = x3d.Transform()
Transform164.translation = [0.06,0.3,0]
Shape165 = x3d.Shape(USE="skinsphere")

Transform164.children.append(Shape165)

HAnimSegment147.children.append(Transform164)
Transform166 = x3d.Transform()
Transform166.translation = [0.1,0.3,-0.05]
Shape167 = x3d.Shape(USE="skinsphere")

Transform166.children.append(Shape167)

HAnimSegment147.children.append(Transform166)
Transform168 = x3d.Transform()
Transform168.translation = [0.1,0.3,0.05]
Shape169 = x3d.Shape(USE="skinsphere")

Transform168.children.append(Shape169)

HAnimSegment147.children.append(Transform168)
HAnimSite170 = x3d.HAnimSite(DEF="Joe_l_lateral_malleolus_pt")
HAnimSite170.name = "l_lateral_malleolus_pt"
HAnimSite170.translation = [0.15,0.07,0]
Shape171 = x3d.Shape(USE="sitebox")

HAnimSite170.children.append(Shape171)

HAnimSegment147.children.append(HAnimSite170)
HAnimSite172 = x3d.HAnimSite(DEF="Joe_l_medial_malleolus_pt")
HAnimSite172.name = "l_medial_malleolus_pt"
HAnimSite172.translation = [0.085,0.086,0.0125]
Shape173 = x3d.Shape(USE="sitebox")

HAnimSite172.children.append(Shape173)

HAnimSegment147.children.append(HAnimSite172)

HAnimJoint146.children.append(HAnimSegment147)
HAnimJoint174 = x3d.HAnimJoint(DEF="Joe_l_talocrural")
HAnimJoint174.name = "l_talocrural"
HAnimJoint174.center = [0.115,0.069,0]
HAnimJoint174.skinCoordIndex = [342,343,344,345]
HAnimJoint174.skinCoordWeight = [1,1,1,1]
HAnimSegment175 = x3d.HAnimSegment(DEF="Joe_l_talus")
HAnimSegment175.name = "l_talus"
Transform176 = x3d.Transform()
Transform176.translation = [0.115,0.069,0]
Shape177 = x3d.Shape(USE="jointbox")

Transform176.children.append(Shape177)

HAnimSegment175.children.append(Transform176)
Shape178 = x3d.Shape()
Appearance179 = x3d.Appearance(USE="SegmentLine")

Shape178.appearance = Appearance179
IndexedLineSet180 = x3d.IndexedLineSet()
IndexedLineSet180.coordIndex = [0,1,-1]
Coordinate181 = x3d.Coordinate()
Coordinate181.point = [(0.1, 0.069, 0),(0.115, 0.031, 0.03)]

IndexedLineSet180.coord = Coordinate181

Shape178.geometry = IndexedLineSet180

HAnimSegment175.children.append(Shape178)
Transform182 = x3d.Transform()
Transform182.translation = [0.15,0.07,0]
Shape183 = x3d.Shape(USE="skinsphere")

Transform182.children.append(Shape183)

HAnimSegment175.children.append(Transform182)
Transform184 = x3d.Transform()
Transform184.translation = [0.085,0.086,0.0125]
Shape185 = x3d.Shape(USE="skinsphere")

Transform184.children.append(Shape185)

HAnimSegment175.children.append(Transform184)
Transform186 = x3d.Transform()
Transform186.translation = [0.115,0.069,-0.045]
Shape187 = x3d.Shape(USE="skinsphere")

Transform186.children.append(Shape187)

HAnimSegment175.children.append(Transform186)
Transform188 = x3d.Transform()
Transform188.translation = [0.117,0.0975,0.0615]
Shape189 = x3d.Shape(USE="skinsphere")

Transform188.children.append(Shape189)

HAnimSegment175.children.append(Transform188)
HAnimSite190 = x3d.HAnimSite(DEF="Joe_l_sphyrion_pt")
HAnimSite190.name = "l_sphyrion_pt"
HAnimSite190.translation = [0.09,0.056,0.0125]
Shape191 = x3d.Shape(USE="sitebox")

HAnimSite190.children.append(Shape191)

HAnimSegment175.children.append(HAnimSite190)
HAnimSite192 = x3d.HAnimSite(DEF="Joe_l_calcaneus_posterior_pt")
HAnimSite192.name = "l_calcaneus_posterior_pt"
HAnimSite192.translation = [0.115,0.04,-0.055]
Shape193 = x3d.Shape(USE="sitebox")

HAnimSite192.children.append(Shape193)

HAnimSegment175.children.append(HAnimSite192)

HAnimJoint174.children.append(HAnimSegment175)
HAnimJoint194 = x3d.HAnimJoint(DEF="Joe_l_tarsometatarsal_2")
HAnimJoint194.name = "l_tarsometatarsal_2"
HAnimJoint194.center = [0.115,0.031,0.03]
HAnimJoint194.skinCoordIndex = [346,347,348,71]
HAnimJoint194.skinCoordWeight = [1,1,1,1]
HAnimSegment195 = x3d.HAnimSegment(DEF="Joe_l_metatarsal_2")
HAnimSegment195.name = "l_metatarsal_2"
Transform196 = x3d.Transform()
Transform196.translation = [0.115,0.031,0.03]
Shape197 = x3d.Shape(USE="jointbox")

Transform196.children.append(Shape197)

HAnimSegment195.children.append(Transform196)
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance(USE="SegmentLine")

Shape198.appearance = Appearance199
IndexedLineSet200 = x3d.IndexedLineSet()
IndexedLineSet200.coordIndex = [0,1,-1]
Coordinate201 = x3d.Coordinate()
Coordinate201.point = [(0.115, 0.031, 0.03),(0.115, 0.037, 0.09)]

IndexedLineSet200.coord = Coordinate201

Shape198.geometry = IndexedLineSet200

HAnimSegment195.children.append(Shape198)
Transform202 = x3d.Transform()
Transform202.translation = [0.1375,0.006,-0.03]
Shape203 = x3d.Shape(USE="skinsphere")

Transform202.children.append(Shape203)

HAnimSegment195.children.append(Transform202)
Transform204 = x3d.Transform()
Transform204.translation = [0.095,0.006,-0.03]
Shape205 = x3d.Shape(USE="skinsphere")

Transform204.children.append(Shape205)

HAnimSegment195.children.append(Transform204)
Transform206 = x3d.Transform()
Transform206.translation = [0.115,0.015,-0.045]
Shape207 = x3d.Shape(USE="skinsphere")

Transform206.children.append(Shape207)

HAnimSegment195.children.append(Transform206)

HAnimJoint194.children.append(HAnimSegment195)
HAnimJoint208 = x3d.HAnimJoint(DEF="Joe_l_metatarsophalangeal_2")
HAnimJoint208.name = "l_metatarsophalangeal_2"
HAnimJoint208.center = [0.115,0.037,0.09]
HAnimJoint208.skinCoordIndex = [349,350,351,352]
HAnimJoint208.skinCoordWeight = [1,1,1,1]
HAnimSegment209 = x3d.HAnimSegment(DEF="Joe_l_tarsal_proximal_phalanx_2")
HAnimSegment209.name = "l_tarsal_proximal_phalanx_2"
Transform210 = x3d.Transform()
Transform210.translation = [0.115,0.037,0.09]
Shape211 = x3d.Shape(USE="jointbox")

Transform210.children.append(Shape211)

HAnimSegment209.children.append(Transform210)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance(USE="SegmentLine")

Shape212.appearance = Appearance213
IndexedLineSet214 = x3d.IndexedLineSet()
IndexedLineSet214.coordIndex = [0,1,-1]
Coordinate215 = x3d.Coordinate()
Coordinate215.point = [(0.115, 0.037, 0.09),(0.115, 0.02, 0.122)]

IndexedLineSet214.coord = Coordinate215

Shape212.geometry = IndexedLineSet214

HAnimSegment209.children.append(Shape212)
Transform216 = x3d.Transform()
Transform216.translation = [0.115,0.06,0.1]
Shape217 = x3d.Shape(USE="skinsphere")

Transform216.children.append(Shape217)

HAnimSegment209.children.append(Transform216)
Transform218 = x3d.Transform()
Transform218.translation = [0.115,0,0.07]
Shape219 = x3d.Shape(USE="skinsphere")

Transform218.children.append(Shape219)

HAnimSegment209.children.append(Transform218)
Transform220 = x3d.Transform()
Transform220.translation = [0.165,0,0.07]
Shape221 = x3d.Shape(USE="skinsphere")

Transform220.children.append(Shape221)

HAnimSegment209.children.append(Transform220)
Transform222 = x3d.Transform()
Transform222.translation = [0.095,0,0.07]
Shape223 = x3d.Shape(USE="skinsphere")

Transform222.children.append(Shape223)

HAnimSegment209.children.append(Transform222)
HAnimSite224 = x3d.HAnimSite(DEF="Joe_l_metatarsal_phalanx_1_pt")
HAnimSite224.name = "l_metatarsal_phalanx_1_pt"
HAnimSite224.translation = [0.087,0.01,0.122]
Shape225 = x3d.Shape(USE="sitebox")

HAnimSite224.children.append(Shape225)

HAnimSegment209.children.append(HAnimSite224)

HAnimJoint208.children.append(HAnimSegment209)
HAnimJoint226 = x3d.HAnimJoint(DEF="Joe_l_metatarsal")
HAnimJoint226.name = "l_metatarsal"
HAnimJoint226.center = [0.115,0.02,0.122]
HAnimJoint226.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint226.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment227 = x3d.HAnimSegment(DEF="Joe_l_tarsal_distal_phalanx_2")
HAnimSegment227.name = "l_tarsal_distal_phalanx_2"
Transform228 = x3d.Transform()
Transform228.translation = [0.115,0.02,0.13]
Shape229 = x3d.Shape(USE="jointbox")

Transform228.children.append(Shape229)

HAnimSegment227.children.append(Transform228)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance(USE="SegmentLine")

Shape230.appearance = Appearance231
IndexedLineSet232 = x3d.IndexedLineSet()
IndexedLineSet232.coordIndex = [0,1,-1]
Coordinate233 = x3d.Coordinate()
Coordinate233.point = [(0.115, 0.02, 0.122),(0.132, 0.013, 0.19)]

IndexedLineSet232.coord = Coordinate233

Shape230.geometry = IndexedLineSet232

HAnimSegment227.children.append(Shape230)
Transform234 = x3d.Transform()
Transform234.translation = [0.115,0.04,0.13]
Shape235 = x3d.Shape(USE="skinsphere")

Transform234.children.append(Shape235)

HAnimSegment227.children.append(Transform234)
Transform236 = x3d.Transform()
Transform236.translation = [0.125,0,0.12]
Shape237 = x3d.Shape(USE="skinsphere")

Transform236.children.append(Shape237)

HAnimSegment227.children.append(Transform236)
Transform238 = x3d.Transform()
Transform238.translation = [0.165,0,0.12]
Shape239 = x3d.Shape(USE="skinsphere")

Transform238.children.append(Shape239)

HAnimSegment227.children.append(Transform238)
Transform240 = x3d.Transform()
Transform240.translation = [0.087,0,0.122]
Shape241 = x3d.Shape(USE="skinsphere")

Transform240.children.append(Shape241)

HAnimSegment227.children.append(Transform240)
Transform242 = x3d.Transform()
Transform242.translation = [0.09,0.012,0.188]
Shape243 = x3d.Shape(USE="skinsphere")

Transform242.children.append(Shape243)

HAnimSegment227.children.append(Transform242)
Transform244 = x3d.Transform()
Transform244.translation = [0.11,0.011,0.19]
Shape245 = x3d.Shape(USE="skinsphere")

Transform244.children.append(Shape245)

HAnimSegment227.children.append(Transform244)
Transform246 = x3d.Transform()
Transform246.translation = [0.128,0.011,0.185]
Shape247 = x3d.Shape(USE="skinsphere")

Transform246.children.append(Shape247)

HAnimSegment227.children.append(Transform246)
Transform248 = x3d.Transform()
Transform248.translation = [0.142,0.011,0.178]
Shape249 = x3d.Shape(USE="skinsphere")

Transform248.children.append(Shape249)

HAnimSegment227.children.append(Transform248)
Transform250 = x3d.Transform()
Transform250.translation = [0.154,0.01,0.168]
Shape251 = x3d.Shape(USE="skinsphere")

Transform250.children.append(Shape251)

HAnimSegment227.children.append(Transform250)
HAnimSite252 = x3d.HAnimSite(DEF="Joe_l_metatarsal_phalanx_5_pt")
HAnimSite252.name = "l_metatarsal_phalanx_5_pt"
HAnimSite252.translation = [0.165,0.01,0.12]
Shape253 = x3d.Shape(USE="sitebox")

HAnimSite252.children.append(Shape253)

HAnimSegment227.children.append(HAnimSite252)
HAnimSite254 = x3d.HAnimSite(DEF="Joe_l_tarsal_distal_phalanx_2_pt")
HAnimSite254.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite254.translation = [0.11,0.011,0.19]
Shape255 = x3d.Shape(USE="sitebox")

HAnimSite254.children.append(Shape255)

HAnimSegment227.children.append(HAnimSite254)

HAnimJoint226.children.append(HAnimSegment227)

HAnimJoint208.children.append(HAnimJoint226)

HAnimJoint194.children.append(HAnimJoint208)

HAnimJoint174.children.append(HAnimJoint194)

HAnimJoint146.children.append(HAnimJoint174)

HAnimJoint120.children.append(HAnimJoint146)

HAnimJoint90.children.append(HAnimJoint120)
HAnimJoint256 = x3d.HAnimJoint(DEF="Joe_r_hip")
HAnimJoint256.name = "r_hip"
HAnimJoint256.center = [-0.1,0.92,0]
HAnimJoint256.skinCoordIndex = [91,92,98,99,100,101]
HAnimJoint256.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimSegment257 = x3d.HAnimSegment(DEF="Joe_r_thigh")
HAnimSegment257.name = "r_thigh"
Transform258 = x3d.Transform()
Transform258.translation = [-0.1,0.92,0]
Shape259 = x3d.Shape(USE="jointbox")

Transform258.children.append(Shape259)

HAnimSegment257.children.append(Transform258)
Shape260 = x3d.Shape()
Appearance261 = x3d.Appearance(USE="SegmentLine")

Shape260.appearance = Appearance261
IndexedLineSet262 = x3d.IndexedLineSet()
IndexedLineSet262.coordIndex = [0,1,-1]
Coordinate263 = x3d.Coordinate()
Coordinate263.point = [(-0.1, 0.92, 0),(-0.1, 0.4913, 0)]

IndexedLineSet262.coord = Coordinate263

Shape260.geometry = IndexedLineSet262

HAnimSegment257.children.append(Shape260)
Transform264 = x3d.Transform()
Transform264.translation = [-0.079,0.92,-0.14]
Shape265 = x3d.Shape(USE="skinsphere")

Transform264.children.append(Shape265)

HAnimSegment257.children.append(Transform264)
Transform266 = x3d.Transform()
Transform266.translation = [-0.1,0.9,0.075]
Shape267 = x3d.Shape(USE="skinsphere")

Transform266.children.append(Shape267)

HAnimSegment257.children.append(Transform266)
Transform268 = x3d.Transform()
Transform268.translation = [-0.171,0.65,0]
Shape269 = x3d.Shape(USE="skinsphere")

Transform268.children.append(Shape269)

HAnimSegment257.children.append(Transform268)
Transform270 = x3d.Transform()
Transform270.translation = [-0.02,0.65,0]
Shape271 = x3d.Shape(USE="skinsphere")

Transform270.children.append(Shape271)

HAnimSegment257.children.append(Transform270)
Transform272 = x3d.Transform()
Transform272.translation = [-0.1,0.65,-0.08]
Shape273 = x3d.Shape(USE="skinsphere")

Transform272.children.append(Shape273)

HAnimSegment257.children.append(Transform272)
Transform274 = x3d.Transform()
Transform274.translation = [-0.1,0.65,0.07]
Shape275 = x3d.Shape(USE="skinsphere")

Transform274.children.append(Shape275)

HAnimSegment257.children.append(Transform274)
HAnimSite276 = x3d.HAnimSite(DEF="Joe_r_knee_crease_pt")
HAnimSite276.name = "r_knee_crease_pt"
HAnimSite276.translation = [-0.115,0.466,-0.055]
Shape277 = x3d.Shape(USE="sitebox")

HAnimSite276.children.append(Shape277)

HAnimSegment257.children.append(HAnimSite276)
HAnimSite278 = x3d.HAnimSite(DEF="Joe_r_femoral_lateral_epicondyle_pt")
HAnimSite278.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite278.translation = [-0.17,0.466,0]
Shape279 = x3d.Shape(USE="sitebox")

HAnimSite278.children.append(Shape279)

HAnimSegment257.children.append(HAnimSite278)
HAnimSite280 = x3d.HAnimSite(DEF="Joe_r_femoral_medial_epicondyle_pt")
HAnimSite280.name = "r_femoral_medial_epicondyle_pt"
HAnimSite280.translation = [-0.05,0.466,0]
Shape281 = x3d.Shape(USE="sitebox")

HAnimSite280.children.append(Shape281)

HAnimSegment257.children.append(HAnimSite280)

HAnimJoint256.children.append(HAnimSegment257)
HAnimJoint282 = x3d.HAnimJoint(DEF="Joe_r_knee")
HAnimJoint282.name = "r_knee"
HAnimJoint282.center = [-0.05,0.466,0]
HAnimJoint282.skinCoordIndex = [362,363,364,365,366,367,368,369]
HAnimJoint282.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment283 = x3d.HAnimSegment(DEF="Joe_r_calf")
HAnimSegment283.name = "r_calf"
Transform284 = x3d.Transform()
Transform284.translation = [-0.1,0.4913,0]
Shape285 = x3d.Shape(USE="jointbox")

Transform284.children.append(Shape285)

HAnimSegment283.children.append(Transform284)
Shape286 = x3d.Shape()
Appearance287 = x3d.Appearance(USE="SegmentLine")

Shape286.appearance = Appearance287
IndexedLineSet288 = x3d.IndexedLineSet()
IndexedLineSet288.coordIndex = [0,1,-1]
Coordinate289 = x3d.Coordinate()
Coordinate289.point = [(-0.1, 0.4913, 0),(-0.1, 0.0712, 0)]

IndexedLineSet288.coord = Coordinate289

Shape286.geometry = IndexedLineSet288

HAnimSegment283.children.append(Shape286)
Transform290 = x3d.Transform()
Transform290.translation = [-0.115,0.466,0.06]
Shape291 = x3d.Shape(USE="skinsphere")

Transform290.children.append(Shape291)

HAnimSegment283.children.append(Transform290)
Transform292 = x3d.Transform()
Transform292.translation = [-0.115,0.466,-0.055]
Shape293 = x3d.Shape(USE="skinsphere")

Transform292.children.append(Shape293)

HAnimSegment283.children.append(Transform292)
Transform294 = x3d.Transform()
Transform294.translation = [-0.17,0.466,0]
Shape295 = x3d.Shape(USE="skinsphere")

Transform294.children.append(Shape295)

HAnimSegment283.children.append(Transform294)
Transform296 = x3d.Transform()
Transform296.translation = [-0.05,0.466,0]
Shape297 = x3d.Shape(USE="skinsphere")

Transform296.children.append(Shape297)

HAnimSegment283.children.append(Transform296)
Transform298 = x3d.Transform()
Transform298.translation = [-0.17,0.3,0]
Shape299 = x3d.Shape(USE="skinsphere")

Transform298.children.append(Shape299)

HAnimSegment283.children.append(Transform298)
Transform300 = x3d.Transform()
Transform300.translation = [-0.06,0.3,0]
Shape301 = x3d.Shape(USE="skinsphere")

Transform300.children.append(Shape301)

HAnimSegment283.children.append(Transform300)
Transform302 = x3d.Transform()
Transform302.translation = [-0.1,0.3,-0.05]
Shape303 = x3d.Shape(USE="skinsphere")

Transform302.children.append(Shape303)

HAnimSegment283.children.append(Transform302)
Transform304 = x3d.Transform()
Transform304.translation = [-0.1,0.3,0.05]
Shape305 = x3d.Shape(USE="skinsphere")

Transform304.children.append(Shape305)

HAnimSegment283.children.append(Transform304)
HAnimSite306 = x3d.HAnimSite(DEF="Joe_r_lateral_malleolus_pt")
HAnimSite306.name = "r_lateral_malleolus_pt"
HAnimSite306.translation = [-0.15,0.07,0]
Shape307 = x3d.Shape(USE="sitebox")

HAnimSite306.children.append(Shape307)

HAnimSegment283.children.append(HAnimSite306)
HAnimSite308 = x3d.HAnimSite(DEF="Joe_r_medial_malleolus_pt")
HAnimSite308.name = "r_medial_malleolus_pt"
HAnimSite308.translation = [-0.085,0.086,0.0125]
Shape309 = x3d.Shape(USE="sitebox")

HAnimSite308.children.append(Shape309)

HAnimSegment283.children.append(HAnimSite308)

HAnimJoint282.children.append(HAnimSegment283)
HAnimJoint310 = x3d.HAnimJoint(DEF="Joe_r_talocrural")
HAnimJoint310.name = "r_talocrural"
HAnimJoint310.center = [-0.115,0.069,0]
HAnimJoint310.skinCoordIndex = [370,371,372,373]
HAnimJoint310.skinCoordWeight = [1,1,1,1]
HAnimSegment311 = x3d.HAnimSegment(DEF="Joe_r_talus")
HAnimSegment311.name = "r_talus"
Transform312 = x3d.Transform()
Transform312.translation = [-0.1,0.0712,0]
Shape313 = x3d.Shape(USE="jointbox")

Transform312.children.append(Shape313)

HAnimSegment311.children.append(Transform312)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance(USE="SegmentLine")

Shape314.appearance = Appearance315
IndexedLineSet316 = x3d.IndexedLineSet()
IndexedLineSet316.coordIndex = [0,1,-1]
Coordinate317 = x3d.Coordinate()
Coordinate317.point = [(-0.1, 0.0712, 0),(-0.1, 0.015, -0.01)]

IndexedLineSet316.coord = Coordinate317

Shape314.geometry = IndexedLineSet316

HAnimSegment311.children.append(Shape314)
Transform318 = x3d.Transform()
Transform318.translation = [-0.15,0.07,0]
Shape319 = x3d.Shape(USE="skinsphere")

Transform318.children.append(Shape319)

HAnimSegment311.children.append(Transform318)
Transform320 = x3d.Transform()
Transform320.translation = [-0.085,0.086,0.0125]
Shape321 = x3d.Shape(USE="skinsphere")

Transform320.children.append(Shape321)

HAnimSegment311.children.append(Transform320)
Transform322 = x3d.Transform()
Transform322.translation = [-0.115,0.069,-0.045]
Shape323 = x3d.Shape(USE="skinsphere")

Transform322.children.append(Shape323)

HAnimSegment311.children.append(Transform322)
Transform324 = x3d.Transform()
Transform324.translation = [-0.117,0.0975,0.0615]
Shape325 = x3d.Shape(USE="skinsphere")

Transform324.children.append(Shape325)

HAnimSegment311.children.append(Transform324)
HAnimSite326 = x3d.HAnimSite(DEF="Joe_r_sphyrion_pt")
HAnimSite326.name = "r_sphyrion_pt"
HAnimSite326.translation = [-0.09,0.056,0.0125]
Shape327 = x3d.Shape(USE="sitebox")

HAnimSite326.children.append(Shape327)

HAnimSegment311.children.append(HAnimSite326)
HAnimSite328 = x3d.HAnimSite(DEF="Joe_r_calcaneus_posterior_pt")
HAnimSite328.name = "r_calcaneus_posterior_pt"
HAnimSite328.translation = [-0.115,0.04,-0.055]
Shape329 = x3d.Shape(USE="sitebox")

HAnimSite328.children.append(Shape329)

HAnimSegment311.children.append(HAnimSite328)

HAnimJoint310.children.append(HAnimSegment311)
HAnimJoint330 = x3d.HAnimJoint(DEF="Joe_r_tarsometatarsal_2")
HAnimJoint330.name = "r_tarsometatarsal_2"
HAnimJoint330.center = [-0.1,0.015,-0.01]
HAnimJoint330.skinCoordIndex = [374,375,376]
HAnimJoint330.skinCoordWeight = [1,1,1]
HAnimSegment331 = x3d.HAnimSegment(DEF="Joe_r_metatarsal_2")
HAnimSegment331.name = "r_metatarsal_2"
Transform332 = x3d.Transform()
Transform332.translation = [-0.1,0.015,-0.01]
Shape333 = x3d.Shape(USE="jointbox")

Transform332.children.append(Shape333)

HAnimSegment331.children.append(Transform332)
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance(USE="SegmentLine")

Shape334.appearance = Appearance335
IndexedLineSet336 = x3d.IndexedLineSet()
IndexedLineSet336.coordIndex = [0,1,-1]
Coordinate337 = x3d.Coordinate()
Coordinate337.point = [(-0.1, 0.015, -0.01),(-0.1, 0.02, 0.07)]

IndexedLineSet336.coord = Coordinate337

Shape334.geometry = IndexedLineSet336

HAnimSegment331.children.append(Shape334)
Transform338 = x3d.Transform()
Transform338.translation = [-0.1375,0.006,-0.03]
Shape339 = x3d.Shape(USE="skinsphere")

Transform338.children.append(Shape339)

HAnimSegment331.children.append(Transform338)
Transform340 = x3d.Transform()
Transform340.translation = [-0.095,0.006,-0.03]
Shape341 = x3d.Shape(USE="skinsphere")

Transform340.children.append(Shape341)

HAnimSegment331.children.append(Transform340)
Transform342 = x3d.Transform()
Transform342.translation = [-0.095,0.006,-0.03]
Shape343 = x3d.Shape(USE="skinsphere")

Transform342.children.append(Shape343)

HAnimSegment331.children.append(Transform342)

HAnimJoint330.children.append(HAnimSegment331)
HAnimJoint344 = x3d.HAnimJoint(DEF="Joe_r_metatarsophalangeal_2")
HAnimJoint344.name = "r_metatarsophalangeal_2"
HAnimJoint344.center = [-0.115,0.037,0.09]
HAnimJoint344.skinCoordIndex = [377,378,379,380]
HAnimJoint344.skinCoordWeight = [1,1,1,1]
HAnimSegment345 = x3d.HAnimSegment(DEF="Joe_r_tarsal_proximal_phalanx_2")
HAnimSegment345.name = "r_tarsal_proximal_phalanx_2"
Transform346 = x3d.Transform()
Transform346.translation = [-0.1,0.02,0.07]
Shape347 = x3d.Shape(USE="jointbox")

Transform346.children.append(Shape347)

HAnimSegment345.children.append(Transform346)
Shape348 = x3d.Shape()
Appearance349 = x3d.Appearance(USE="SegmentLine")

Shape348.appearance = Appearance349
IndexedLineSet350 = x3d.IndexedLineSet()
IndexedLineSet350.coordIndex = [0,1,-1]
Coordinate351 = x3d.Coordinate()
Coordinate351.point = [(-0.1, 0.02, 0.07),(-0.1, 0.01, 0.14)]

IndexedLineSet350.coord = Coordinate351

Shape348.geometry = IndexedLineSet350

HAnimSegment345.children.append(Shape348)
Transform352 = x3d.Transform()
Transform352.translation = [-0.115,0.06,0.1]
Shape353 = x3d.Shape(USE="skinsphere")

Transform352.children.append(Shape353)

HAnimSegment345.children.append(Transform352)
Transform354 = x3d.Transform()
Transform354.translation = [-0.115,0,0.07]
Shape355 = x3d.Shape(USE="skinsphere")

Transform354.children.append(Shape355)

HAnimSegment345.children.append(Transform354)
Transform356 = x3d.Transform()
Transform356.translation = [-0.165,0,0.07]
Shape357 = x3d.Shape(USE="skinsphere")

Transform356.children.append(Shape357)

HAnimSegment345.children.append(Transform356)
Transform358 = x3d.Transform()
Transform358.translation = [-0.165,0,0.07]
Shape359 = x3d.Shape(USE="skinsphere")

Transform358.children.append(Shape359)

HAnimSegment345.children.append(Transform358)
HAnimSite360 = x3d.HAnimSite(DEF="Joe_r_metatarsal_phalanx_1_pt")
HAnimSite360.name = "r_metatarsal_phalanx_1_pt"
HAnimSite360.translation = [-0.115,0.02,0.122]
Shape361 = x3d.Shape(USE="sitebox")

HAnimSite360.children.append(Shape361)

HAnimSegment345.children.append(HAnimSite360)

HAnimJoint344.children.append(HAnimSegment345)
HAnimJoint362 = x3d.HAnimJoint(DEF="Joe_r_tarsal_distal_interphalangeal_2")
HAnimJoint362.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint362.center = [-0.1,0.01,0.14]
HAnimJoint362.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint362.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment363 = x3d.HAnimSegment(DEF="Joe_r_tarsal_distal_phalanx_2")
HAnimSegment363.name = "r_tarsal_distal_phalanx_2"
Transform364 = x3d.Transform()
Transform364.translation = [-0.1086,0.01,0.14]
Shape365 = x3d.Shape(USE="jointbox")

Transform364.children.append(Shape365)

HAnimSegment363.children.append(Transform364)
Shape366 = x3d.Shape()
Appearance367 = x3d.Appearance(USE="SegmentLine")

Shape366.appearance = Appearance367
IndexedLineSet368 = x3d.IndexedLineSet()
IndexedLineSet368.coordIndex = [0,1,-1]
Coordinate369 = x3d.Coordinate()
Coordinate369.point = [(-0.1, 0.01, 0.14),(-0.1043, 0.0016, 0.2)]

IndexedLineSet368.coord = Coordinate369

Shape366.geometry = IndexedLineSet368

HAnimSegment363.children.append(Shape366)
Transform370 = x3d.Transform()
Transform370.translation = [-0.115,0.04,0.13]
Shape371 = x3d.Shape(USE="skinsphere")

Transform370.children.append(Shape371)

HAnimSegment363.children.append(Transform370)
Transform372 = x3d.Transform()
Transform372.translation = [-0.125,0,0.12]
Shape373 = x3d.Shape(USE="skinsphere")

Transform372.children.append(Shape373)

HAnimSegment363.children.append(Transform372)
Transform374 = x3d.Transform()
Transform374.translation = [-0.165,0,0.12]
Shape375 = x3d.Shape(USE="skinsphere")

Transform374.children.append(Shape375)

HAnimSegment363.children.append(Transform374)
Transform376 = x3d.Transform()
Transform376.translation = [-0.087,0,0.122]
Shape377 = x3d.Shape(USE="skinsphere")

Transform376.children.append(Shape377)

HAnimSegment363.children.append(Transform376)
Transform378 = x3d.Transform()
Transform378.translation = [-0.09,0.012,0.188]
Shape379 = x3d.Shape(USE="skinsphere")

Transform378.children.append(Shape379)

HAnimSegment363.children.append(Transform378)
Transform380 = x3d.Transform()
Transform380.translation = [-0.11,0.011,0.19]
Shape381 = x3d.Shape(USE="skinsphere")

Transform380.children.append(Shape381)

HAnimSegment363.children.append(Transform380)
Transform382 = x3d.Transform()
Transform382.translation = [-0.128,0.011,0.185]
Shape383 = x3d.Shape(USE="skinsphere")

Transform382.children.append(Shape383)

HAnimSegment363.children.append(Transform382)
Transform384 = x3d.Transform()
Transform384.translation = [-0.142,0.011,0.178]
Shape385 = x3d.Shape(USE="skinsphere")

Transform384.children.append(Shape385)

HAnimSegment363.children.append(Transform384)
Transform386 = x3d.Transform()
Transform386.translation = [-0.154,0.01,0.168]
Shape387 = x3d.Shape(USE="skinsphere")

Transform386.children.append(Shape387)

HAnimSegment363.children.append(Transform386)
HAnimSite388 = x3d.HAnimSite(DEF="Joe_r_metatarsal_phalanx_5_pt")
HAnimSite388.name = "r_metatarsal_phalanx_5_pt"
HAnimSite388.translation = [-0.165,0.01,0.12]
Shape389 = x3d.Shape(USE="sitebox")

HAnimSite388.children.append(Shape389)

HAnimSegment363.children.append(HAnimSite388)
HAnimSite390 = x3d.HAnimSite(DEF="Joe_r_tarsal_distal_phalanx_2_pt")
HAnimSite390.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite390.translation = [-0.11,0.011,0.19]
Shape391 = x3d.Shape(USE="sitebox")

HAnimSite390.children.append(Shape391)

HAnimSegment363.children.append(HAnimSite390)

HAnimJoint362.children.append(HAnimSegment363)

HAnimJoint344.children.append(HAnimJoint362)

HAnimJoint330.children.append(HAnimJoint344)

HAnimJoint310.children.append(HAnimJoint330)

HAnimJoint282.children.append(HAnimJoint310)

HAnimJoint256.children.append(HAnimJoint282)

HAnimJoint90.children.append(HAnimJoint256)

HAnimJoint78.children.append(HAnimJoint90)
HAnimJoint392 = x3d.HAnimJoint(DEF="Joe_vl5")
HAnimJoint392.name = "vl5"
HAnimJoint392.center = [0,1.045,-0.095]
HAnimJoint392.skinCoordIndex = [28,76]
HAnimJoint392.skinCoordWeight = [1,1]
HAnimSegment393 = x3d.HAnimSegment(DEF="Joe_toPelvis")
HAnimSegment393.name = "toPelvis"
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance(USE="SegmentLine")

Shape394.appearance = Appearance395
IndexedLineSet396 = x3d.IndexedLineSet()
IndexedLineSet396.coordIndex = [0,1,-1]
Coordinate397 = x3d.Coordinate()
Coordinate397.point = [(0, 1.045, -0.095),(0, 0.9149, 0.0016)]

IndexedLineSet396.coord = Coordinate397

Shape394.geometry = IndexedLineSet396

HAnimSegment393.children.append(Shape394)

HAnimJoint392.children.append(HAnimSegment393)
HAnimSegment398 = x3d.HAnimSegment(DEF="Joe_l5")
HAnimSegment398.name = "l5"
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance(USE="SegmentLine")

Shape399.appearance = Appearance400
IndexedLineSet401 = x3d.IndexedLineSet()
IndexedLineSet401.coordIndex = [0,1,-1]
Coordinate402 = x3d.Coordinate()
Coordinate402.point = [(0, 1.045, -0.095),(0, 1.068, -0.085)]

IndexedLineSet401.coord = Coordinate402

Shape399.geometry = IndexedLineSet401

HAnimSegment398.children.append(Shape399)
HAnimSite403 = x3d.HAnimSite(DEF="Joe_waist_preferred_posterior_pt")
HAnimSite403.name = "waist_preferred_posterior_pt"
HAnimSite403.translation = [0,1.0915,-0.1091]
Shape404 = x3d.Shape(USE="sitebox")

HAnimSite403.children.append(Shape404)

HAnimSegment398.children.append(HAnimSite403)
HAnimSite405 = x3d.HAnimSite(DEF="Joe_navel_pt")
HAnimSite405.name = "navel_pt"
HAnimSite405.translation = [0,1.0723,0.09]
Shape406 = x3d.Shape(USE="sitebox")

HAnimSite405.children.append(Shape406)

HAnimSegment398.children.append(HAnimSite405)

HAnimJoint392.children.append(HAnimSegment398)
HAnimJoint407 = x3d.HAnimJoint(DEF="Joe_vl4")
HAnimJoint407.name = "vl4"
HAnimJoint407.center = [0,1.068,-0.085]
HAnimSegment408 = x3d.HAnimSegment(DEF="Joe_l4")
HAnimSegment408.name = "l4"
Shape409 = x3d.Shape()
Appearance410 = x3d.Appearance(USE="SegmentLine")

Shape409.appearance = Appearance410
IndexedLineSet411 = x3d.IndexedLineSet()
IndexedLineSet411.coordIndex = [0,1,-1]
Coordinate412 = x3d.Coordinate()
Coordinate412.point = [(0, 1.068, -0.085),(0, 1.092, -0.0725)]

IndexedLineSet411.coord = Coordinate412

Shape409.geometry = IndexedLineSet411

HAnimSegment408.children.append(Shape409)
Transform413 = x3d.Transform()
Transform413.translation = [0,1.068,-0.085]
Shape414 = x3d.Shape(USE="jointbox")

Transform413.children.append(Shape414)

HAnimSegment408.children.append(Transform413)

HAnimJoint407.children.append(HAnimSegment408)
HAnimJoint415 = x3d.HAnimJoint(DEF="Joe_vl3")
HAnimJoint415.name = "vl3"
HAnimJoint415.center = [0,1.092,-0.0725]
HAnimSegment416 = x3d.HAnimSegment(DEF="Joe_l3")
HAnimSegment416.name = "l3"
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance(USE="SegmentLine")

Shape417.appearance = Appearance418
IndexedLineSet419 = x3d.IndexedLineSet()
IndexedLineSet419.coordIndex = [0,1,-1]
Coordinate420 = x3d.Coordinate()
Coordinate420.point = [(0, 1.092, -0.0725),(0, 1.12, -0.065)]

IndexedLineSet419.coord = Coordinate420

Shape417.geometry = IndexedLineSet419

HAnimSegment416.children.append(Shape417)
Transform421 = x3d.Transform()
Transform421.translation = [0,1.092,-0.0725]
Shape422 = x3d.Shape(USE="jointbox")

Transform421.children.append(Shape422)

HAnimSegment416.children.append(Transform421)

HAnimJoint415.children.append(HAnimSegment416)
HAnimJoint423 = x3d.HAnimJoint(DEF="Joe_vl2")
HAnimJoint423.name = "vl2"
HAnimJoint423.center = [0,1.12,-0.065]
HAnimJoint423.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint423.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimSegment424 = x3d.HAnimSegment(DEF="Joe_l2")
HAnimSegment424.name = "l2"
Shape425 = x3d.Shape()
Appearance426 = x3d.Appearance(USE="SegmentLine")

Shape425.appearance = Appearance426
IndexedLineSet427 = x3d.IndexedLineSet()
IndexedLineSet427.coordIndex = [0,1,-1]
Coordinate428 = x3d.Coordinate()
Coordinate428.point = [(0, 1.12, -0.065),(0, 1.1459, -0.0625)]

IndexedLineSet427.coord = Coordinate428

Shape425.geometry = IndexedLineSet427

HAnimSegment424.children.append(Shape425)
Transform429 = x3d.Transform()
Transform429.translation = [0,1.12,-0.065]
Shape430 = x3d.Shape(USE="jointbox")

Transform429.children.append(Shape430)

HAnimSegment424.children.append(Transform429)
Transform431 = x3d.Transform()
Transform431.translation = [-0.087,1.19,-0.09]
Shape432 = x3d.Shape(USE="skinsphere")

Transform431.children.append(Shape432)

HAnimSegment424.children.append(Transform431)
Transform433 = x3d.Transform()
Transform433.translation = [0.087,1.19,-0.09]
Shape434 = x3d.Shape(USE="skinsphere")

Transform433.children.append(Shape434)

HAnimSegment424.children.append(Transform433)
Transform435 = x3d.Transform()
Transform435.translation = [0.172,1.32,-0.03]
Shape436 = x3d.Shape(USE="skinsphere")

Transform435.children.append(Shape436)

HAnimSegment424.children.append(Transform435)
Transform437 = x3d.Transform()
Transform437.translation = [-0.172,1.32,-0.03]
Shape438 = x3d.Shape(USE="skinsphere")

Transform437.children.append(Shape438)

HAnimSegment424.children.append(Transform437)
Transform439 = x3d.Transform()
Transform439.translation = [0.15,1.23,-0.015]
Shape440 = x3d.Shape(USE="skinsphere")

Transform439.children.append(Shape440)

HAnimSegment424.children.append(Transform439)
Transform441 = x3d.Transform()
Transform441.translation = [-0.15,1.23,-0.015]
Shape442 = x3d.Shape(USE="skinsphere")

Transform441.children.append(Shape442)

HAnimSegment424.children.append(Transform441)
HAnimSite443 = x3d.HAnimSite(DEF="Joe_r_rib10_pt")
HAnimSite443.name = "r_rib10_pt"
HAnimSite443.translation = [-0.087,1.19,0.09]
Shape444 = x3d.Shape(USE="sitebox")

HAnimSite443.children.append(Shape444)

HAnimSegment424.children.append(HAnimSite443)
HAnimSite445 = x3d.HAnimSite(DEF="Joe_l_rib10_pt")
HAnimSite445.name = "l_rib10_pt"
HAnimSite445.translation = [0.087,1.19,0.09]
Shape446 = x3d.Shape(USE="sitebox")

HAnimSite445.children.append(Shape446)

HAnimSegment424.children.append(HAnimSite445)
HAnimSite447 = x3d.HAnimSite(DEF="Joe_rib10_midspine_pt")
HAnimSite447.name = "rib10_midspine_pt"
HAnimSite447.translation = [0,1.1908,-0.1113]
Shape448 = x3d.Shape(USE="sitebox")

HAnimSite447.children.append(Shape448)

HAnimSegment424.children.append(HAnimSite447)

HAnimJoint423.children.append(HAnimSegment424)
HAnimJoint449 = x3d.HAnimJoint(DEF="Joe_vl1")
HAnimJoint449.name = "vl1"
HAnimJoint449.center = [0,1.1459,-0.0625]
HAnimSegment450 = x3d.HAnimSegment(DEF="Joe_l1")
HAnimSegment450.name = "l1"
Shape451 = x3d.Shape()
Appearance452 = x3d.Appearance(USE="SegmentLine")

Shape451.appearance = Appearance452
IndexedLineSet453 = x3d.IndexedLineSet()
IndexedLineSet453.coordIndex = [0,1,-1]
Coordinate454 = x3d.Coordinate()
Coordinate454.point = [(0, 1.1459, -0.0625),(0, 1.179, -0.068)]

IndexedLineSet453.coord = Coordinate454

Shape451.geometry = IndexedLineSet453

HAnimSegment450.children.append(Shape451)
Transform455 = x3d.Transform()
Transform455.translation = [0,1.1459,-0.0625]
Shape456 = x3d.Shape(USE="jointbox")

Transform455.children.append(Shape456)

HAnimSegment450.children.append(Transform455)

HAnimJoint449.children.append(HAnimSegment450)
HAnimJoint457 = x3d.HAnimJoint(DEF="Joe_vt12")
HAnimJoint457.name = "vt12"
HAnimJoint457.center = [0,1.179,-0.068]
HAnimSegment458 = x3d.HAnimSegment(DEF="Joe_t12")
HAnimSegment458.name = "t12"
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance(USE="SegmentLine")

Shape459.appearance = Appearance460
IndexedLineSet461 = x3d.IndexedLineSet()
IndexedLineSet461.coordIndex = [0,1,-1]
Coordinate462 = x3d.Coordinate()
Coordinate462.point = [(0, 1.179, -0.068),(0, 1.242, -0.09)]

IndexedLineSet461.coord = Coordinate462

Shape459.geometry = IndexedLineSet461

HAnimSegment458.children.append(Shape459)
Transform463 = x3d.Transform()
Transform463.translation = [0,1.179,-0.068]
Shape464 = x3d.Shape(USE="jointbox")

Transform463.children.append(Shape464)

HAnimSegment458.children.append(Transform463)

HAnimJoint457.children.append(HAnimSegment458)
HAnimJoint465 = x3d.HAnimJoint(DEF="Joe_vt11")
HAnimJoint465.name = "vt11"
HAnimJoint465.center = [0,1.2679,-0.081]
HAnimSegment466 = x3d.HAnimSegment(DEF="Joe_t11")
HAnimSegment466.name = "t11"
Shape467 = x3d.Shape()
Appearance468 = x3d.Appearance(USE="SegmentLine")

Shape467.appearance = Appearance468
IndexedLineSet469 = x3d.IndexedLineSet()
IndexedLineSet469.coordIndex = [0,1,-1]
Coordinate470 = x3d.Coordinate()
Coordinate470.point = [(0, 1.2145, -0.0755),(0, 1.242, -0.09)]

IndexedLineSet469.coord = Coordinate470

Shape467.geometry = IndexedLineSet469

HAnimSegment466.children.append(Shape467)
Transform471 = x3d.Transform()
Transform471.translation = [0,1.2145,-0.0755]
Shape472 = x3d.Shape(USE="jointbox")

Transform471.children.append(Shape472)

HAnimSegment466.children.append(Transform471)

HAnimJoint465.children.append(HAnimSegment466)
HAnimJoint473 = x3d.HAnimJoint(DEF="Joe_vt10")
HAnimJoint473.name = "vt10"
HAnimJoint473.center = [0,1.242,-0.09]
HAnimJoint473.skinCoordIndex = [15]
HAnimJoint473.skinCoordWeight = [1]
HAnimSegment474 = x3d.HAnimSegment(DEF="Joe_t10")
HAnimSegment474.name = "t10"
Shape475 = x3d.Shape()
Appearance476 = x3d.Appearance(USE="SegmentLine")

Shape475.appearance = Appearance476
IndexedLineSet477 = x3d.IndexedLineSet()
IndexedLineSet477.coordIndex = [0,1,-1]
Coordinate478 = x3d.Coordinate()
Coordinate478.point = [(0, 1.242, -0.09),(0, 1.268, -0.1)]

IndexedLineSet477.coord = Coordinate478

Shape475.geometry = IndexedLineSet477

HAnimSegment474.children.append(Shape475)
Transform479 = x3d.Transform()
Transform479.translation = [0,1.242,-0.09]
Shape480 = x3d.Shape(USE="jointbox")

Transform479.children.append(Shape480)

HAnimSegment474.children.append(Transform479)
HAnimSite481 = x3d.HAnimSite(DEF="Joe_substernale_pt")
HAnimSite481.name = "substernale_pt"
HAnimSite481.translation = [0,1.25,0.113]
Shape482 = x3d.Shape(USE="sitebox")

HAnimSite481.children.append(Shape482)

HAnimSegment474.children.append(HAnimSite481)

HAnimJoint473.children.append(HAnimSegment474)
HAnimJoint483 = x3d.HAnimJoint(DEF="Joe_vt9")
HAnimJoint483.name = "vt9"
HAnimJoint483.center = [0,1.268,-0.1]
HAnimJoint483.skinCoordIndex = [13,14]
HAnimJoint483.skinCoordWeight = [1,1]
HAnimSegment484 = x3d.HAnimSegment(DEF="Joe_t9")
HAnimSegment484.name = "t9"
Shape485 = x3d.Shape()
Appearance486 = x3d.Appearance(USE="SegmentLine")

Shape485.appearance = Appearance486
IndexedLineSet487 = x3d.IndexedLineSet()
IndexedLineSet487.coordIndex = [0,1,-1]
Coordinate488 = x3d.Coordinate()
Coordinate488.point = [(0, 1.268, -0.1),(0, 1.294, -0.11)]

IndexedLineSet487.coord = Coordinate488

Shape485.geometry = IndexedLineSet487

HAnimSegment484.children.append(Shape485)
Transform489 = x3d.Transform()
Transform489.translation = [0,1.268,-0.1]
Shape490 = x3d.Shape(USE="jointbox")

Transform489.children.append(Shape490)

HAnimSegment484.children.append(Transform489)
HAnimSite491 = x3d.HAnimSite(DEF="Joe_r_thelion_pt")
HAnimSite491.name = "r_thelion_pt"
HAnimSite491.translation = [-0.1135,1.318,0.095]
Shape492 = x3d.Shape(USE="sitebox")

HAnimSite491.children.append(Shape492)

HAnimSegment484.children.append(HAnimSite491)
HAnimSite493 = x3d.HAnimSite(DEF="Joe_l_thelion_pt")
HAnimSite493.name = "l_thelion_pt"
HAnimSite493.translation = [0.1135,1.318,0.095]
Shape494 = x3d.Shape(USE="sitebox")

HAnimSite493.children.append(Shape494)

HAnimSegment484.children.append(HAnimSite493)

HAnimJoint483.children.append(HAnimSegment484)
HAnimJoint495 = x3d.HAnimJoint(DEF="Joe_vt8")
HAnimJoint495.name = "vt8"
HAnimJoint495.center = [0,1.294,-0.11]
HAnimSegment496 = x3d.HAnimSegment(DEF="Joe_t8")
HAnimSegment496.name = "t8"
Shape497 = x3d.Shape()
Appearance498 = x3d.Appearance(USE="SegmentLine")

Shape497.appearance = Appearance498
IndexedLineSet499 = x3d.IndexedLineSet()
IndexedLineSet499.coordIndex = [0,1,-1]
Coordinate500 = x3d.Coordinate()
Coordinate500.point = [(0, 1.294, -0.11),(0, 1.352, -0.12)]

IndexedLineSet499.coord = Coordinate500

Shape497.geometry = IndexedLineSet499

HAnimSegment496.children.append(Shape497)
Transform501 = x3d.Transform()
Transform501.translation = [0,1.294,-0.11]
Shape502 = x3d.Shape(USE="jointbox")

Transform501.children.append(Shape502)

HAnimSegment496.children.append(Transform501)

HAnimJoint495.children.append(HAnimSegment496)
HAnimJoint503 = x3d.HAnimJoint(DEF="Joe_vt7")
HAnimJoint503.name = "vt7"
HAnimJoint503.center = [0,1.323,-0.1155]
HAnimSegment504 = x3d.HAnimSegment(DEF="Joe_t7")
HAnimSegment504.name = "t7"
Shape505 = x3d.Shape()
Appearance506 = x3d.Appearance(USE="SegmentLine")

Shape505.appearance = Appearance506
IndexedLineSet507 = x3d.IndexedLineSet()
IndexedLineSet507.coordIndex = [0,1,-1]
Coordinate508 = x3d.Coordinate()
Coordinate508.point = [(0, 1.352, -0.12),(0, 1.381, -0.1235)]

IndexedLineSet507.coord = Coordinate508

Shape505.geometry = IndexedLineSet507

HAnimSegment504.children.append(Shape505)
Transform509 = x3d.Transform()
Transform509.translation = [0,1.323,-0.1155]
Shape510 = x3d.Shape(USE="jointbox")

Transform509.children.append(Shape510)

HAnimSegment504.children.append(Transform509)

HAnimJoint503.children.append(HAnimSegment504)
HAnimJoint511 = x3d.HAnimJoint(DEF="Joe_vt6")
HAnimJoint511.name = "vt6"
HAnimJoint511.center = [0,1.352,-0.12]
HAnimSegment512 = x3d.HAnimSegment(DEF="Joe_t6")
HAnimSegment512.name = "t6"
Shape513 = x3d.Shape()
Appearance514 = x3d.Appearance(USE="SegmentLine")

Shape513.appearance = Appearance514
IndexedLineSet515 = x3d.IndexedLineSet()
IndexedLineSet515.coordIndex = [0,1,-1]
Coordinate516 = x3d.Coordinate()
Coordinate516.point = [(0, 1.381, -0.1235),(0, 1.41, -0.1235)]

IndexedLineSet515.coord = Coordinate516

Shape513.geometry = IndexedLineSet515

HAnimSegment512.children.append(Shape513)
Transform517 = x3d.Transform()
Transform517.translation = [0,1.352,-0.12]
Shape518 = x3d.Shape(USE="jointbox")

Transform517.children.append(Shape518)

HAnimSegment512.children.append(Transform517)

HAnimJoint511.children.append(HAnimSegment512)
HAnimJoint519 = x3d.HAnimJoint(DEF="Joe_vt5")
HAnimJoint519.name = "vt5"
HAnimJoint519.center = [0,1.381,-0.1235]
HAnimSegment520 = x3d.HAnimSegment(DEF="Joe_t5")
HAnimSegment520.name = "t5"
Shape521 = x3d.Shape()
Appearance522 = x3d.Appearance(USE="SegmentLine")

Shape521.appearance = Appearance522
IndexedLineSet523 = x3d.IndexedLineSet()
IndexedLineSet523.coordIndex = [0,1,-1]
Coordinate524 = x3d.Coordinate()
Coordinate524.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet523.coord = Coordinate524

Shape521.geometry = IndexedLineSet523

HAnimSegment520.children.append(Shape521)
Transform525 = x3d.Transform()
Transform525.translation = [0,1.381,-0.1235]
Shape526 = x3d.Shape(USE="jointbox")

Transform525.children.append(Shape526)

HAnimSegment520.children.append(Transform525)

HAnimJoint519.children.append(HAnimSegment520)
HAnimJoint527 = x3d.HAnimJoint(DEF="Joe_vt4")
HAnimJoint527.name = "vt4"
HAnimJoint527.center = [0,1.41,-0.1235]
HAnimJoint527.skinCoordIndex = [81]
HAnimJoint527.skinCoordWeight = [1]
HAnimSegment528 = x3d.HAnimSegment(DEF="Joe_t4")
HAnimSegment528.name = "t4"
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance(USE="SegmentLine")

Shape529.appearance = Appearance530
IndexedLineSet531 = x3d.IndexedLineSet()
IndexedLineSet531.coordIndex = [0,1,-1]
Coordinate532 = x3d.Coordinate()
Coordinate532.point = [(0, 1.41, -0.1235),(0, 1.438, -0.12)]

IndexedLineSet531.coord = Coordinate532

Shape529.geometry = IndexedLineSet531

HAnimSegment528.children.append(Shape529)
Transform533 = x3d.Transform()
Transform533.translation = [0,1.41,-0.1235]
Shape534 = x3d.Shape(USE="jointbox")

Transform533.children.append(Shape534)

HAnimSegment528.children.append(Transform533)
Transform535 = x3d.Transform()
Transform535.translation = [0,1.41,-0.145]
Shape536 = x3d.Shape(USE="skinsphere")

Transform535.children.append(Shape536)

HAnimSegment528.children.append(Transform535)

HAnimJoint527.children.append(HAnimSegment528)
HAnimJoint537 = x3d.HAnimJoint(DEF="Joe_vt3")
HAnimJoint537.name = "vt3"
HAnimJoint537.center = [0,1.438,-0.12]
HAnimSegment538 = x3d.HAnimSegment(DEF="Joe_t3")
HAnimSegment538.name = "t3"
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance(USE="SegmentLine")

Shape539.appearance = Appearance540
IndexedLineSet541 = x3d.IndexedLineSet()
IndexedLineSet541.coordIndex = [0,1,-1]
Coordinate542 = x3d.Coordinate()
Coordinate542.point = [(0, 1.438, -0.12),(0, 1.468, -0.105)]

IndexedLineSet541.coord = Coordinate542

Shape539.geometry = IndexedLineSet541

HAnimSegment538.children.append(Shape539)
Transform543 = x3d.Transform()
Transform543.translation = [0,1.438,-0.12]
Shape544 = x3d.Shape(USE="jointbox")

Transform543.children.append(Shape544)

HAnimSegment538.children.append(Transform543)

HAnimJoint537.children.append(HAnimSegment538)
HAnimJoint545 = x3d.HAnimJoint(DEF="Joe_vt2")
HAnimJoint545.name = "vt2"
HAnimJoint545.center = [0,1.468,-0.105]
HAnimSegment546 = x3d.HAnimSegment(DEF="Joe_t2")
HAnimSegment546.name = "t2"
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance(USE="SegmentLine")

Shape547.appearance = Appearance548
IndexedLineSet549 = x3d.IndexedLineSet()
IndexedLineSet549.coordIndex = [0,1,-1]
Coordinate550 = x3d.Coordinate()
Coordinate550.point = [(0, 1.468, -0.105),(0, 1.497, -0.09)]

IndexedLineSet549.coord = Coordinate550

Shape547.geometry = IndexedLineSet549

HAnimSegment546.children.append(Shape547)
Transform551 = x3d.Transform()
Transform551.translation = [0,1.468,-0.105]
Shape552 = x3d.Shape(USE="jointbox")

Transform551.children.append(Shape552)

HAnimSegment546.children.append(Transform551)

HAnimJoint545.children.append(HAnimSegment546)
HAnimJoint553 = x3d.HAnimJoint(DEF="Joe_vt1")
HAnimJoint553.name = "vt1"
HAnimJoint553.center = [0,1.497,-0.09]
HAnimJoint553.skinCoordIndex = [11,24]
HAnimJoint553.skinCoordWeight = [1,1]
HAnimSegment554 = x3d.HAnimSegment(DEF="Joe_t1")
HAnimSegment554.name = "t1"
Shape555 = x3d.Shape()
Appearance556 = x3d.Appearance(USE="SegmentLine")

Shape555.appearance = Appearance556
IndexedLineSet557 = x3d.IndexedLineSet()
IndexedLineSet557.coordIndex = [0,1,-1]
Coordinate558 = x3d.Coordinate()
Coordinate558.point = [(0, 1.497, -0.09),(0, 1.525, -0.072)]

IndexedLineSet557.coord = Coordinate558

Shape555.geometry = IndexedLineSet557

HAnimSegment554.children.append(Shape555)
Transform559 = x3d.Transform()
Transform559.translation = [0,1.497,-0.09]
Shape560 = x3d.Shape(USE="jointbox")

Transform559.children.append(Shape560)

HAnimSegment554.children.append(Transform559)
HAnimSite561 = x3d.HAnimSite(DEF="Joe_suprasternale_pt")
HAnimSite561.name = "suprasternale_pt"
HAnimSite561.translation = [0,1.44,0.03]
Shape562 = x3d.Shape(USE="sitebox")

HAnimSite561.children.append(Shape562)

HAnimSegment554.children.append(HAnimSite561)
HAnimSite563 = x3d.HAnimSite(DEF="Joe_cervicale_pt")
HAnimSite563.name = "cervicale_pt"
HAnimSite563.translation = [0,1.53,-0.084]
Shape564 = x3d.Shape(USE="sitebox")

HAnimSite563.children.append(Shape564)

HAnimSegment554.children.append(HAnimSite563)

HAnimJoint553.children.append(HAnimSegment554)
HAnimJoint565 = x3d.HAnimJoint(DEF="Joe_vc7")
HAnimJoint565.name = "vc7"
HAnimJoint565.center = [0,1.525,-0.072]
HAnimJoint565.skinCoordIndex = [74,75]
HAnimJoint565.skinCoordWeight = [1,1]
HAnimSegment566 = x3d.HAnimSegment(DEF="Joe_c7")
HAnimSegment566.name = "c7"
Shape567 = x3d.Shape()
Appearance568 = x3d.Appearance(USE="SegmentLine")

Shape567.appearance = Appearance568
IndexedLineSet569 = x3d.IndexedLineSet()
IndexedLineSet569.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate570 = x3d.Coordinate()
Coordinate570.point = [(0, 1.525, -0.072),(0.082, 1.4488, -0.0353),(-0.03, 1.46, 0.02),(0, 1.54, -0.05)]

IndexedLineSet569.coord = Coordinate570

Shape567.geometry = IndexedLineSet569

HAnimSegment566.children.append(Shape567)
Transform571 = x3d.Transform()
Transform571.translation = [0,1.525,-0.072]
Shape572 = x3d.Shape(USE="jointbox")

Transform571.children.append(Shape572)

HAnimSegment566.children.append(Transform571)
HAnimSite573 = x3d.HAnimSite(DEF="Joe_r_neck_base_pt")
HAnimSite573.name = "r_neck_base_pt"
HAnimSite573.translation = [-0.0646,1.5149,-0.0385]
Shape574 = x3d.Shape(USE="sitebox")

HAnimSite573.children.append(Shape574)

HAnimSegment566.children.append(HAnimSite573)
HAnimSite575 = x3d.HAnimSite(DEF="Joe_l_neck_base_pt")
HAnimSite575.name = "l_neck_base_pt"
HAnimSite575.translation = [0.0646,1.5149,-0.0385]
Shape576 = x3d.Shape(USE="sitebox")

HAnimSite575.children.append(Shape576)

HAnimSegment566.children.append(HAnimSite575)

HAnimJoint565.children.append(HAnimSegment566)
HAnimJoint577 = x3d.HAnimJoint(DEF="Joe_vc6")
HAnimJoint577.name = "vc6"
HAnimJoint577.center = [0,1.54,-0.05]
HAnimSegment578 = x3d.HAnimSegment(DEF="Joe_c6")
HAnimSegment578.name = "c6"
Shape579 = x3d.Shape()
Appearance580 = x3d.Appearance(USE="SegmentLine")

Shape579.appearance = Appearance580
IndexedLineSet581 = x3d.IndexedLineSet()
IndexedLineSet581.coordIndex = [0,1,-1]
Coordinate582 = x3d.Coordinate()
Coordinate582.point = [(0, 1.54, -0.05),(0, 1.5675, -0.0256)]

IndexedLineSet581.coord = Coordinate582

Shape579.geometry = IndexedLineSet581

HAnimSegment578.children.append(Shape579)
Transform583 = x3d.Transform()
Transform583.translation = [0,1.54,-0.05]
Shape584 = x3d.Shape(USE="jointbox")

Transform583.children.append(Shape584)

HAnimSegment578.children.append(Transform583)

HAnimJoint577.children.append(HAnimSegment578)
HAnimJoint585 = x3d.HAnimJoint(DEF="Joe_vc5")
HAnimJoint585.name = "vc5"
HAnimJoint585.center = [0,1.552,-0.035]
HAnimSegment586 = x3d.HAnimSegment(DEF="Joe_c5")
HAnimSegment586.name = "c5"
Transform587 = x3d.Transform()
Transform587.translation = [0,1.552,-0.035]
Shape588 = x3d.Shape(USE="jointbox")

Transform587.children.append(Shape588)

HAnimSegment586.children.append(Transform587)
Shape589 = x3d.Shape()
Appearance590 = x3d.Appearance(USE="SegmentLine")

Shape589.appearance = Appearance590
IndexedLineSet591 = x3d.IndexedLineSet()
IndexedLineSet591.coordIndex = [0,1,-1]
Coordinate592 = x3d.Coordinate()
Coordinate592.point = [(0, 1.5675, -0.0256),(0, 1.5823, -0.0185)]

IndexedLineSet591.coord = Coordinate592

Shape589.geometry = IndexedLineSet591

HAnimSegment586.children.append(Shape589)

HAnimJoint585.children.append(HAnimSegment586)
HAnimJoint593 = x3d.HAnimJoint(DEF="Joe_vc4")
HAnimJoint593.name = "vc4"
HAnimJoint593.center = [0,1.5675,-0.0256]
HAnimSegment594 = x3d.HAnimSegment(DEF="Joe_c4")
HAnimSegment594.name = "c4"
Shape595 = x3d.Shape()
Appearance596 = x3d.Appearance(USE="SegmentLine")

Shape595.appearance = Appearance596
IndexedLineSet597 = x3d.IndexedLineSet()
IndexedLineSet597.coordIndex = [0,1,-1]
Coordinate598 = x3d.Coordinate()
Coordinate598.point = [(0, 1.5823, -0.0185),(0, 1.595, -0.0175)]

IndexedLineSet597.coord = Coordinate598

Shape595.geometry = IndexedLineSet597

HAnimSegment594.children.append(Shape595)
Transform599 = x3d.Transform()
Transform599.translation = [0,1.5675,-0.0256]
Shape600 = x3d.Shape(USE="jointbox")

Transform599.children.append(Shape600)

HAnimSegment594.children.append(Transform599)

HAnimJoint593.children.append(HAnimSegment594)
HAnimJoint601 = x3d.HAnimJoint(DEF="Joe_vc3")
HAnimJoint601.name = "vc3"
HAnimJoint601.center = [0,1.5823,-0.0185]
HAnimSegment602 = x3d.HAnimSegment(DEF="Joe_c3")
HAnimSegment602.name = "c3"
Shape603 = x3d.Shape()
Appearance604 = x3d.Appearance(USE="SegmentLine")

Shape603.appearance = Appearance604
IndexedLineSet605 = x3d.IndexedLineSet()
IndexedLineSet605.coordIndex = [0,1,-1]
Coordinate606 = x3d.Coordinate()
Coordinate606.point = [(0, 1.595, -0.0175),(0, 1.61, -0.015)]

IndexedLineSet605.coord = Coordinate606

Shape603.geometry = IndexedLineSet605

HAnimSegment602.children.append(Shape603)
Transform607 = x3d.Transform()
Transform607.translation = [0,1.5823,-0.0185]
Shape608 = x3d.Shape(USE="jointbox")

Transform607.children.append(Shape608)

HAnimSegment602.children.append(Transform607)

HAnimJoint601.children.append(HAnimSegment602)
HAnimJoint609 = x3d.HAnimJoint(DEF="Joe_vc2")
HAnimJoint609.name = "vc2"
HAnimJoint609.center = [0,1.595,-0.0175]
HAnimSegment610 = x3d.HAnimSegment(DEF="Joe_c2")
HAnimSegment610.name = "c2"
Shape611 = x3d.Shape()
Appearance612 = x3d.Appearance(USE="SegmentLine")

Shape611.appearance = Appearance612
IndexedLineSet613 = x3d.IndexedLineSet()
IndexedLineSet613.coordIndex = [0,1,-1]
Coordinate614 = x3d.Coordinate()
Coordinate614.point = [(0, 1.61, -0.015),(0, 1.6144, -0.0034)]

IndexedLineSet613.coord = Coordinate614

Shape611.geometry = IndexedLineSet613

HAnimSegment610.children.append(Shape611)
Transform615 = x3d.Transform()
Transform615.translation = [0,1.595,-0.0175]
Shape616 = x3d.Shape(USE="jointbox")

Transform615.children.append(Shape616)

HAnimSegment610.children.append(Transform615)

HAnimJoint609.children.append(HAnimSegment610)
HAnimJoint617 = x3d.HAnimJoint(DEF="Joe_vc1")
HAnimJoint617.name = "vc1"
HAnimJoint617.center = [0,1.61,-0.015]
HAnimSegment618 = x3d.HAnimSegment(DEF="Joe_c1")
HAnimSegment618.name = "c1"
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance(USE="SegmentLine")

Shape619.appearance = Appearance620
IndexedLineSet621 = x3d.IndexedLineSet()
IndexedLineSet621.coordIndex = [0,1,-1]
Coordinate622 = x3d.Coordinate()
Coordinate622.point = [(0, 1.6144, -0.0034),(0, 1.63, -0.01)]

IndexedLineSet621.coord = Coordinate622

Shape619.geometry = IndexedLineSet621

HAnimSegment618.children.append(Shape619)
Transform623 = x3d.Transform()
Transform623.translation = [0,1.61,-0.015]
Shape624 = x3d.Shape(USE="jointbox")

Transform623.children.append(Shape624)

HAnimSegment618.children.append(Transform623)

HAnimJoint617.children.append(HAnimSegment618)
HAnimJoint625 = x3d.HAnimJoint(DEF="Joe_skullbase")
HAnimJoint625.name = "skullbase"
HAnimJoint625.center = [0,1.63,-0.01]
HAnimJoint625.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint625.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimSegment626 = x3d.HAnimSegment(DEF="Joe_skull")
HAnimSegment626.name = "skull"
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance(USE="SegmentLine")

Shape627.appearance = Appearance628
IndexedLineSet629 = x3d.IndexedLineSet()
IndexedLineSet629.coordIndex = [0,1,-1,0,2,-1]
Coordinate630 = x3d.Coordinate()
Coordinate630.point = [(0, 1.63, -0.01),(0.034, 1.659, 0.06),(-0.034, 1.655, 0.065)]

IndexedLineSet629.coord = Coordinate630

Shape627.geometry = IndexedLineSet629

HAnimSegment626.children.append(Shape627)
Transform631 = x3d.Transform()
Transform631.translation = [0,1.63,-0.01]
Shape632 = x3d.Shape(USE="jointbox")

Transform631.children.append(Shape632)

HAnimSegment626.children.append(Transform631)
HAnimSite633 = x3d.HAnimSite(DEF="Joe_skull_vertex_tip")
HAnimSite633.name = "skull_vertex_tip"
HAnimSite633.translation = [0,1.77,0]
Shape634 = x3d.Shape(USE="sitebox")

HAnimSite633.children.append(Shape634)

HAnimSegment626.children.append(HAnimSite633)
HAnimSite635 = x3d.HAnimSite(DEF="Joe_sellion_pt")
HAnimSite635.name = "sellion_pt"
HAnimSite635.translation = [0,1.665,0.09]
Shape636 = x3d.Shape(USE="sitebox")

HAnimSite635.children.append(Shape636)

HAnimSegment626.children.append(HAnimSite635)
HAnimSite637 = x3d.HAnimSite(DEF="Joe_r_infraorbitale_pt")
HAnimSite637.name = "r_infraorbitale_pt"
HAnimSite637.translation = [-0.033,1.62,0.087]
Shape638 = x3d.Shape(USE="sitebox")

HAnimSite637.children.append(Shape638)

HAnimSegment626.children.append(HAnimSite637)
HAnimSite639 = x3d.HAnimSite(DEF="Joe_l_infraorbitale_pt")
HAnimSite639.name = "l_infraorbitale_pt"
HAnimSite639.translation = [0.033,1.62,0.087]
Shape640 = x3d.Shape(USE="sitebox")

HAnimSite639.children.append(Shape640)

HAnimSegment626.children.append(HAnimSite639)
HAnimSite641 = x3d.HAnimSite(DEF="Joe_supramenton_pt")
HAnimSite641.name = "supramenton_pt"
HAnimSite641.translation = [0,1.55,0.097]
Shape642 = x3d.Shape(USE="sitebox")

HAnimSite641.children.append(Shape642)

HAnimSegment626.children.append(HAnimSite641)
HAnimSite643 = x3d.HAnimSite(DEF="Joe_r_tragion_pt")
HAnimSite643.name = "r_tragion_pt"
HAnimSite643.translation = [-0.077,1.64,-0.01]
Shape644 = x3d.Shape(USE="sitebox")

HAnimSite643.children.append(Shape644)

HAnimSegment626.children.append(HAnimSite643)
HAnimSite645 = x3d.HAnimSite(DEF="Joe_r_gonion_pt")
HAnimSite645.name = "r_gonion_pt"
HAnimSite645.translation = [-0.052,1.58,0.015]
Shape646 = x3d.Shape(USE="sitebox")

HAnimSite645.children.append(Shape646)

HAnimSegment626.children.append(HAnimSite645)
HAnimSite647 = x3d.HAnimSite(DEF="Joe_l_tragion_pt")
HAnimSite647.name = "l_tragion_pt"
HAnimSite647.translation = [0.077,1.64,-0.01]
Shape648 = x3d.Shape(USE="sitebox")

HAnimSite647.children.append(Shape648)

HAnimSegment626.children.append(HAnimSite647)
HAnimSite649 = x3d.HAnimSite(DEF="Joe_l_gonion_pt")
HAnimSite649.name = "l_gonion_pt"
HAnimSite649.translation = [0.0631,1.58,0.015]
Shape650 = x3d.Shape(USE="sitebox")

HAnimSite649.children.append(Shape650)

HAnimSegment626.children.append(HAnimSite649)
HAnimSite651 = x3d.HAnimSite(DEF="Joe_nuchale_pt")
HAnimSite651.name = "nuchale_pt"
HAnimSite651.translation = [0,1.625,-0.0925]
Shape652 = x3d.Shape(USE="sitebox")

HAnimSite651.children.append(Shape652)

HAnimSegment626.children.append(HAnimSite651)

HAnimJoint625.children.append(HAnimSegment626)
HAnimJoint653 = x3d.HAnimJoint(DEF="Joe_l_eyeball_joint")
HAnimJoint653.name = "l_eyeball_joint"
HAnimJoint653.center = [0.034,1.659,0.06]
HAnimSegment654 = x3d.HAnimSegment(DEF="Joe_l_eyeball")
HAnimSegment654.name = "l_eyeball"
Shape655 = x3d.Shape()
Appearance656 = x3d.Appearance(USE="SegmentLine")

Shape655.appearance = Appearance656
IndexedLineSet657 = x3d.IndexedLineSet()
IndexedLineSet657.coordIndex = [0,1,-1]
Coordinate658 = x3d.Coordinate()
Coordinate658.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet657.coord = Coordinate658

Shape655.geometry = IndexedLineSet657

HAnimSegment654.children.append(Shape655)
Transform659 = x3d.Transform()
Transform659.scale = [1,1,1.4]
Transform659.translation = [0.034,1.655,0.065]
Shape660 = x3d.Shape(USE="jointbox")

Transform659.children.append(Shape660)

HAnimSegment654.children.append(Transform659)

HAnimJoint653.children.append(HAnimSegment654)

HAnimJoint625.children.append(HAnimJoint653)
HAnimJoint661 = x3d.HAnimJoint(DEF="Joe_r_eyeball_joint")
HAnimJoint661.name = "r_eyeball_joint"
HAnimJoint661.center = [-0.034,1.659,0.06]
HAnimSegment662 = x3d.HAnimSegment(DEF="Joe_r_eyeball")
HAnimSegment662.name = "r_eyeball"
Shape663 = x3d.Shape()
Appearance664 = x3d.Appearance(USE="SegmentLine")

Shape663.appearance = Appearance664
IndexedLineSet665 = x3d.IndexedLineSet()
IndexedLineSet665.coordIndex = [0,1,-1]
Coordinate666 = x3d.Coordinate()
Coordinate666.point = [(0.034, 1.655, 0.065),(-0.034, 1.655, 0.065)]

IndexedLineSet665.coord = Coordinate666

Shape663.geometry = IndexedLineSet665

HAnimSegment662.children.append(Shape663)
Transform667 = x3d.Transform()
Transform667.scale = [1,1,1.4]
Transform667.translation = [-0.034,1.655,0.065]
Shape668 = x3d.Shape(USE="jointbox")

Transform667.children.append(Shape668)

HAnimSegment662.children.append(Transform667)

HAnimJoint661.children.append(HAnimSegment662)

HAnimJoint625.children.append(HAnimJoint661)

HAnimJoint617.children.append(HAnimJoint625)

HAnimJoint609.children.append(HAnimJoint617)

HAnimJoint601.children.append(HAnimJoint609)

HAnimJoint593.children.append(HAnimJoint601)

HAnimJoint585.children.append(HAnimJoint593)

HAnimJoint577.children.append(HAnimJoint585)

HAnimJoint565.children.append(HAnimJoint577)

HAnimJoint553.children.append(HAnimJoint565)
HAnimJoint669 = x3d.HAnimJoint(DEF="Joe_l_sternoclavicular")
HAnimJoint669.name = "l_sternoclavicular"
HAnimJoint669.center = [0.082,1.4488,-0.0353]
HAnimJoint669.skinCoordIndex = [12]
HAnimJoint669.skinCoordWeight = [1]
HAnimSegment670 = x3d.HAnimSegment(DEF="Joe_l_clavicle")
HAnimSegment670.name = "l_clavicle"
Shape671 = x3d.Shape()
Appearance672 = x3d.Appearance(USE="SegmentLine")

Shape671.appearance = Appearance672
IndexedLineSet673 = x3d.IndexedLineSet()
IndexedLineSet673.coordIndex = [0,1,-1]
Coordinate674 = x3d.Coordinate()
Coordinate674.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

IndexedLineSet673.coord = Coordinate674

Shape671.geometry = IndexedLineSet673

HAnimSegment670.children.append(Shape671)
Transform675 = x3d.Transform()
Transform675.translation = [0.082,1.4488,-0.0353]
Shape676 = x3d.Shape(USE="jointbox")

Transform675.children.append(Shape676)

HAnimSegment670.children.append(Transform675)
HAnimSite677 = x3d.HAnimSite(DEF="Joe_l_clavicle_pt")
HAnimSite677.name = "l_clavicle_pt"
HAnimSite677.translation = [0.03,1.46,0.035]
Shape678 = x3d.Shape(USE="sitebox")

HAnimSite677.children.append(Shape678)

HAnimSegment670.children.append(HAnimSite677)

HAnimJoint669.children.append(HAnimSegment670)
HAnimJoint679 = x3d.HAnimJoint(DEF="Joe_l_acromioclavicular")
HAnimJoint679.name = "l_acromioclavicular"
HAnimJoint679.center = [0.0962,1.4269,-0.0424]
HAnimJoint679.skinCoordIndex = [79]
HAnimJoint679.skinCoordWeight = [1]
HAnimSegment680 = x3d.HAnimSegment(DEF="Joe_l_scapula")
HAnimSegment680.name = "l_scapula"
Shape681 = x3d.Shape()
Appearance682 = x3d.Appearance(USE="SegmentLine")

Shape681.appearance = Appearance682
IndexedLineSet683 = x3d.IndexedLineSet()
IndexedLineSet683.coordIndex = [0,1,-1]
Coordinate684 = x3d.Coordinate()
Coordinate684.point = [(0.0962, 1.4269, -0.0424),(0.2, 1.44, -0.04)]

IndexedLineSet683.coord = Coordinate684

Shape681.geometry = IndexedLineSet683

HAnimSegment680.children.append(Shape681)
Transform685 = x3d.Transform()
Transform685.translation = [0.0962,1.4269,-0.0424]
Shape686 = x3d.Shape(USE="jointbox")

Transform685.children.append(Shape686)

HAnimSegment680.children.append(Transform685)
Transform687 = x3d.Transform()
Transform687.translation = [0.11,1.427,-0.1375]
Shape688 = x3d.Shape(USE="skinsphere")

Transform687.children.append(Shape688)

HAnimSegment680.children.append(Transform687)
HAnimSite689 = x3d.HAnimSite(DEF="Joe_l_acromion_pt")
HAnimSite689.name = "l_acromion_pt"
HAnimSite689.translation = [0.175,1.4825,-0.06]
Shape690 = x3d.Shape(USE="sitebox")

HAnimSite689.children.append(Shape690)

HAnimSegment680.children.append(HAnimSite689)
HAnimSite691 = x3d.HAnimSite(DEF="Joe_l_axilla_proximal_pt")
HAnimSite691.name = "l_axilla_proximal_pt"
HAnimSite691.translation = [0.17,1.38,0.007]
Shape692 = x3d.Shape(USE="sitebox")

HAnimSite691.children.append(Shape692)

HAnimSegment680.children.append(HAnimSite691)
HAnimSite693 = x3d.HAnimSite(DEF="Joe_l_axilla_distal_pt")
HAnimSite693.name = "l_axilla_distal_pt"
HAnimSite693.translation = [0.16,1.38,-0.125]
Shape694 = x3d.Shape(USE="sitebox")

HAnimSite693.children.append(Shape694)

HAnimSegment680.children.append(HAnimSite693)

HAnimJoint679.children.append(HAnimSegment680)
HAnimJoint695 = x3d.HAnimJoint(DEF="Joe_l_shoulder")
HAnimJoint695.name = "l_shoulder"
HAnimJoint695.center = [0.2,1.44,-0.04]
HAnimJoint695.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint695.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment696 = x3d.HAnimSegment(DEF="Joe_l_upperarm")
HAnimSegment696.name = "l_upperarm"
Shape697 = x3d.Shape()
Appearance698 = x3d.Appearance(USE="SegmentLine")

Shape697.appearance = Appearance698
IndexedLineSet699 = x3d.IndexedLineSet()
IndexedLineSet699.coordIndex = [0,1,-1]
Coordinate700 = x3d.Coordinate()
Coordinate700.point = [(0.2029, 1.44, -0.0387),(0.2, 1.1388, -0.04)]

IndexedLineSet699.coord = Coordinate700

Shape697.geometry = IndexedLineSet699

HAnimSegment696.children.append(Shape697)
Transform701 = x3d.Transform()
Transform701.translation = [0.2,1.44,-0.04]
Shape702 = x3d.Shape(USE="jointbox")

Transform701.children.append(Shape702)

HAnimSegment696.children.append(Transform701)
Transform703 = x3d.Transform()
Transform703.translation = [0.235,1.42,-0.0625]
Shape704 = x3d.Shape(USE="skinsphere")

Transform703.children.append(Shape704)

HAnimSegment696.children.append(Transform703)
Transform705 = x3d.Transform()
Transform705.translation = [0.25,1.27,-0.04]
Shape706 = x3d.Shape(USE="skinsphere")

Transform705.children.append(Shape706)

HAnimSegment696.children.append(Transform705)
Transform707 = x3d.Transform()
Transform707.translation = [0.17,1.27,-0.04]
Shape708 = x3d.Shape(USE="skinsphere")

Transform707.children.append(Shape708)

HAnimSegment696.children.append(Transform707)
Transform709 = x3d.Transform()
Transform709.translation = [0.2,1.27,-0.09]
Shape710 = x3d.Shape(USE="skinsphere")

Transform709.children.append(Shape710)

HAnimSegment696.children.append(Transform709)
Transform711 = x3d.Transform()
Transform711.translation = [0.2,1.27,0.02]
Shape712 = x3d.Shape(USE="skinsphere")

Transform711.children.append(Shape712)

HAnimSegment696.children.append(Transform711)
HAnimSite713 = x3d.HAnimSite(DEF="Joe_l_humeral_medial_epicondyle_pt")
HAnimSite713.name = "l_humeral_medial_epicondyle_pt"
HAnimSite713.translation = [0.165,1.1388,-0.04]
Shape714 = x3d.Shape(USE="sitebox")

HAnimSite713.children.append(Shape714)

HAnimSegment696.children.append(HAnimSite713)
HAnimSite715 = x3d.HAnimSite(DEF="Joe_l_radiale_pt")
HAnimSite715.name = "l_radiale_pt"
HAnimSite715.translation = [0.23,1.133,-0.055]
Shape716 = x3d.Shape(USE="sitebox")

HAnimSite715.children.append(Shape716)

HAnimSegment696.children.append(HAnimSite715)
HAnimSite717 = x3d.HAnimSite(DEF="Joe_l_humeral_lateral_epicondyle_pt")
HAnimSite717.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite717.translation = [0.244,1.1388,-0.04]
Shape718 = x3d.Shape(USE="sitebox")

HAnimSite717.children.append(Shape718)

HAnimSegment696.children.append(HAnimSite717)

HAnimJoint695.children.append(HAnimSegment696)
HAnimJoint719 = x3d.HAnimJoint(DEF="Joe_l_elbow")
HAnimJoint719.name = "l_elbow"
HAnimJoint719.center = [0.2,1.1388,-0.04]
HAnimJoint719.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint719.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment720 = x3d.HAnimSegment(DEF="Joe_l_forearm")
HAnimSegment720.name = "l_forearm"
Shape721 = x3d.Shape()
Appearance722 = x3d.Appearance(USE="SegmentLine")

Shape721.appearance = Appearance722
IndexedLineSet723 = x3d.IndexedLineSet()
IndexedLineSet723.coordIndex = [0,1,-1]
Coordinate724 = x3d.Coordinate()
Coordinate724.point = [(0.2, 1.1388, -0.04),(0.2, 0.87, -0.04)]

IndexedLineSet723.coord = Coordinate724

Shape721.geometry = IndexedLineSet723

HAnimSegment720.children.append(Shape721)
Transform725 = x3d.Transform()
Transform725.translation = [0.2,1.1388,-0.04]
Shape726 = x3d.Shape(USE="jointbox")

Transform725.children.append(Shape726)

HAnimSegment720.children.append(Transform725)
Transform727 = x3d.Transform()
Transform727.translation = [0.2,1.1388,-0.013]
Shape728 = x3d.Shape(USE="skinsphere")

Transform727.children.append(Shape728)

HAnimSegment720.children.append(Transform727)
Transform729 = x3d.Transform()
Transform729.translation = [0.225,1,-0.01]
Shape730 = x3d.Shape(USE="skinsphere")

Transform729.children.append(Shape730)

HAnimSegment720.children.append(Transform729)
Transform731 = x3d.Transform()
Transform731.translation = [0.225,1,-0.07]
Shape732 = x3d.Shape(USE="skinsphere")

Transform731.children.append(Shape732)

HAnimSegment720.children.append(Transform731)
Transform733 = x3d.Transform()
Transform733.translation = [0.185,1,-0.01]
Shape734 = x3d.Shape(USE="skinsphere")

Transform733.children.append(Shape734)

HAnimSegment720.children.append(Transform733)
Transform735 = x3d.Transform()
Transform735.translation = [0.185,1,-0.07]
Shape736 = x3d.Shape(USE="skinsphere")

Transform735.children.append(Shape736)

HAnimSegment720.children.append(Transform735)
HAnimSite737 = x3d.HAnimSite(DEF="Joe_l_radial_styloid_pt")
HAnimSite737.name = "l_radial_styloid_pt"
HAnimSite737.translation = [0.1901,0.8645,-0.0415]
Shape738 = x3d.Shape(USE="sitebox")

HAnimSite737.children.append(Shape738)

HAnimSegment720.children.append(HAnimSite737)
HAnimSite739 = x3d.HAnimSite(DEF="Joe_l_olecranon_pt")
HAnimSite739.name = "l_olecranon_pt"
HAnimSite739.translation = [0.2,1.1388,-0.08]
Shape740 = x3d.Shape(USE="sitebox")

HAnimSite739.children.append(Shape740)

HAnimSegment720.children.append(HAnimSite739)

HAnimJoint719.children.append(HAnimSegment720)
HAnimJoint741 = x3d.HAnimJoint(DEF="Joe_l_radiocarpal")
HAnimJoint741.name = "l_radiocarpal"
HAnimJoint741.center = [0.2,0.87,-0.04]
HAnimJoint741.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint741.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment742 = x3d.HAnimSegment(DEF="Joe_l_carpal")
HAnimSegment742.name = "l_carpal"
Shape743 = x3d.Shape()
Appearance744 = x3d.Appearance(USE="SegmentLine")

Shape743.appearance = Appearance744
IndexedLineSet745 = x3d.IndexedLineSet()
IndexedLineSet745.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate746 = x3d.Coordinate()
Coordinate746.point = [(0.2, 0.87, -0.04),(0.1924, 0.8472, -0.0534),(0.1983, 0.8024, -0.028),(0.1987, 0.8029, -0.053),(0.1956, 0.8019, -0.0794),(0.1925, 0.8066, -0.1036)]

IndexedLineSet745.coord = Coordinate746

Shape743.geometry = IndexedLineSet745

HAnimSegment742.children.append(Shape743)
Transform747 = x3d.Transform()
Transform747.translation = [0.2,0.87,-0.04]
Shape748 = x3d.Shape(USE="jointbox")

Transform747.children.append(Shape748)

HAnimSegment742.children.append(Transform747)
HAnimSite749 = x3d.HAnimSite(DEF="Joe_l_metacarpal_phalanx_2_pt")
HAnimSite749.name = "l_metacarpal_phalanx_2_pt"
HAnimSite749.translation = [0.2009,0.8139,-0.0237]
Shape750 = x3d.Shape(USE="sitebox")

HAnimSite749.children.append(Shape750)

HAnimSegment742.children.append(HAnimSite749)
HAnimSite751 = x3d.HAnimSite(DEF="Joe_l_ulnar_styloid_pt")
HAnimSite751.name = "l_ulnar_styloid_pt"
HAnimSite751.translation = [0.2142,0.8529,-0.0648]
Shape752 = x3d.Shape(USE="sitebox")

HAnimSite751.children.append(Shape752)

HAnimSegment742.children.append(HAnimSite751)
HAnimSite753 = x3d.HAnimSite(DEF="Joe_l_metacarpal_phalanx_5_pt")
HAnimSite753.name = "l_metacarpal_phalanx_5_pt"
HAnimSite753.translation = [0.1929,0.786,-0.1122]
Shape754 = x3d.Shape(USE="sitebox")

HAnimSite753.children.append(Shape754)

HAnimSegment742.children.append(HAnimSite753)

HAnimJoint741.children.append(HAnimSegment742)
HAnimJoint755 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_1")
HAnimJoint755.name = "l_carpometacarpal_1"
HAnimJoint755.center = [0.1924,0.8472,-0.0534]
HAnimJoint755.skinCoordIndex = [127,128]
HAnimJoint755.skinCoordWeight = [1,1]
HAnimSegment756 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_1")
HAnimSegment756.name = "l_metacarpal_1"
Shape757 = x3d.Shape()
Appearance758 = x3d.Appearance(USE="SegmentLine")

Shape757.appearance = Appearance758
IndexedLineSet759 = x3d.IndexedLineSet()
IndexedLineSet759.coordIndex = [0,1,-1]
Coordinate760 = x3d.Coordinate()
Coordinate760.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

IndexedLineSet759.coord = Coordinate760

Shape757.geometry = IndexedLineSet759

HAnimSegment756.children.append(Shape757)
Transform761 = x3d.Transform()
Transform761.translation = [0.1924,0.8472,-0.0534]
Shape762 = x3d.Shape(USE="jointbox")

Transform761.children.append(Shape762)

HAnimSegment756.children.append(Transform761)

HAnimJoint755.children.append(HAnimSegment756)
HAnimJoint763 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_1")
HAnimJoint763.name = "l_metacarpophalangeal_1"
HAnimJoint763.center = [0.1951,0.8226,0.0246]
HAnimJoint763.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint763.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment764 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_1")
HAnimSegment764.name = "l_carpal_proximal_phalanx_1"
Shape765 = x3d.Shape()
Appearance766 = x3d.Appearance(USE="SegmentLine")

Shape765.appearance = Appearance766
IndexedLineSet767 = x3d.IndexedLineSet()
IndexedLineSet767.coordIndex = [0,1,-1]
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

IndexedLineSet767.coord = Coordinate768

Shape765.geometry = IndexedLineSet767

HAnimSegment764.children.append(Shape765)
Transform769 = x3d.Transform()
Transform769.translation = [0.1951,0.8226,0.0246]
Shape770 = x3d.Shape(USE="jointbox")

Transform769.children.append(Shape770)

HAnimSegment764.children.append(Transform769)

HAnimJoint763.children.append(HAnimSegment764)
HAnimJoint771 = x3d.HAnimJoint(DEF="Joe_l_carpal_interphalangeal_1")
HAnimJoint771.name = "l_carpal_interphalangeal_1"
HAnimJoint771.center = [0.1955,0.8159,0.0464]
HAnimJoint771.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint771.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment772 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_1")
HAnimSegment772.name = "l_carpal_distal_phalanx_1"
Shape773 = x3d.Shape()
Appearance774 = x3d.Appearance(USE="SegmentLine")

Shape773.appearance = Appearance774
IndexedLineSet775 = x3d.IndexedLineSet()
IndexedLineSet775.coordIndex = [0,1,-1]
Coordinate776 = x3d.Coordinate()
Coordinate776.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

IndexedLineSet775.coord = Coordinate776

Shape773.geometry = IndexedLineSet775

HAnimSegment772.children.append(Shape773)
Transform777 = x3d.Transform()
Transform777.translation = [0.1955,0.8159,0.0464]
Shape778 = x3d.Shape(USE="jointbox")

Transform777.children.append(Shape778)

HAnimSegment772.children.append(Transform777)
HAnimSite779 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_1_tip")
HAnimSite779.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite779.translation = [0.1982,0.8061,0.0759]
Shape780 = x3d.Shape(USE="sitebox")

HAnimSite779.children.append(Shape780)

HAnimSegment772.children.append(HAnimSite779)

HAnimJoint771.children.append(HAnimSegment772)

HAnimJoint763.children.append(HAnimJoint771)

HAnimJoint755.children.append(HAnimJoint763)

HAnimJoint741.children.append(HAnimJoint755)
HAnimJoint781 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_2")
HAnimJoint781.name = "l_carpometacarpal_2"
HAnimJoint781.center = [0.1983,0.8024,-0.028]
HAnimJoint781.skinCoordIndex = [129,130]
HAnimJoint781.skinCoordWeight = [1,1]
HAnimSegment782 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_2")
HAnimSegment782.name = "l_metacarpal_2"
Shape783 = x3d.Shape()
Appearance784 = x3d.Appearance(USE="SegmentLine")

Shape783.appearance = Appearance784
IndexedLineSet785 = x3d.IndexedLineSet()
IndexedLineSet785.coordIndex = [0,1,-1]
Coordinate786 = x3d.Coordinate()
Coordinate786.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

IndexedLineSet785.coord = Coordinate786

Shape783.geometry = IndexedLineSet785

HAnimSegment782.children.append(Shape783)
Transform787 = x3d.Transform()
Transform787.translation = [0.1983,0.8024,-0.028]
Shape788 = x3d.Shape(USE="jointbox")

Transform787.children.append(Shape788)

HAnimSegment782.children.append(Transform787)

HAnimJoint781.children.append(HAnimSegment782)
HAnimJoint789 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_2")
HAnimJoint789.name = "l_metacarpophalangeal_2"
HAnimJoint789.center = [0.1983,0.7815,-0.028]
HAnimJoint789.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint789.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment790 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_2")
HAnimSegment790.name = "l_carpal_proximal_phalanx_2"
Shape791 = x3d.Shape()
Appearance792 = x3d.Appearance(USE="SegmentLine")

Shape791.appearance = Appearance792
IndexedLineSet793 = x3d.IndexedLineSet()
IndexedLineSet793.coordIndex = [0,1,-1]
Coordinate794 = x3d.Coordinate()
Coordinate794.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

IndexedLineSet793.coord = Coordinate794

Shape791.geometry = IndexedLineSet793

HAnimSegment790.children.append(Shape791)
Transform795 = x3d.Transform()
Transform795.translation = [0.1983,0.7815,-0.028]
Shape796 = x3d.Shape(USE="jointbox")

Transform795.children.append(Shape796)

HAnimSegment790.children.append(Transform795)

HAnimJoint789.children.append(HAnimSegment790)
HAnimJoint797 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_2")
HAnimJoint797.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint797.center = [0.2017,0.7363,-0.0248]
HAnimJoint797.skinCoordIndex = [166,167,168,169]
HAnimJoint797.skinCoordWeight = [1,1,1,1]
HAnimSegment798 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_2")
HAnimSegment798.name = "l_carpal_middle_phalanx_2"
Shape799 = x3d.Shape()
Appearance800 = x3d.Appearance(USE="SegmentLine")

Shape799.appearance = Appearance800
IndexedLineSet801 = x3d.IndexedLineSet()
IndexedLineSet801.coordIndex = [0,1,-1]
Coordinate802 = x3d.Coordinate()
Coordinate802.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

IndexedLineSet801.coord = Coordinate802

Shape799.geometry = IndexedLineSet801

HAnimSegment798.children.append(Shape799)
Transform803 = x3d.Transform()
Transform803.translation = [0.2017,0.7363,-0.0248]
Shape804 = x3d.Shape(USE="jointbox")

Transform803.children.append(Shape804)

HAnimSegment798.children.append(Transform803)

HAnimJoint797.children.append(HAnimSegment798)
HAnimJoint805 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_2")
HAnimJoint805.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint805.center = [0.2028,0.7139,-0.0236]
HAnimJoint805.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint805.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment806 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_2")
HAnimSegment806.name = "l_carpal_distal_phalanx_2"
Shape807 = x3d.Shape()
Appearance808 = x3d.Appearance(USE="SegmentLine")

Shape807.appearance = Appearance808
IndexedLineSet809 = x3d.IndexedLineSet()
IndexedLineSet809.coordIndex = [0,1,-1]
Coordinate810 = x3d.Coordinate()
Coordinate810.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

IndexedLineSet809.coord = Coordinate810

Shape807.geometry = IndexedLineSet809

HAnimSegment806.children.append(Shape807)
Transform811 = x3d.Transform()
Transform811.translation = [0.2028,0.7139,-0.0236]
Shape812 = x3d.Shape(USE="jointbox")

Transform811.children.append(Shape812)

HAnimSegment806.children.append(Transform811)
HAnimSite813 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_2_tip")
HAnimSite813.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite813.translation = [0.2089,0.6858,-0.0245]
Shape814 = x3d.Shape(USE="sitebox")

HAnimSite813.children.append(Shape814)

HAnimSegment806.children.append(HAnimSite813)
HAnimSite815 = x3d.HAnimSite(DEF="Joe_l_dactylion_pt")
HAnimSite815.name = "l_dactylion_pt"
HAnimSite815.translation = [0.2056,0.6743,-0.0482]
Shape816 = x3d.Shape(USE="sitebox")

HAnimSite815.children.append(Shape816)

HAnimSegment806.children.append(HAnimSite815)

HAnimJoint805.children.append(HAnimSegment806)

HAnimJoint797.children.append(HAnimJoint805)

HAnimJoint789.children.append(HAnimJoint797)

HAnimJoint781.children.append(HAnimJoint789)

HAnimJoint741.children.append(HAnimJoint781)
HAnimJoint817 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_3")
HAnimJoint817.name = "l_carpometacarpal_3"
HAnimJoint817.center = [0.1987,0.8029,-0.053]
HAnimJoint817.skinCoordIndex = [131,132]
HAnimJoint817.skinCoordWeight = [1,1]
HAnimSegment818 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_3")
HAnimSegment818.name = "l_metacarpal_3"
Shape819 = x3d.Shape()
Appearance820 = x3d.Appearance(USE="SegmentLine")

Shape819.appearance = Appearance820
IndexedLineSet821 = x3d.IndexedLineSet()
IndexedLineSet821.coordIndex = [0,1,-1]
Coordinate822 = x3d.Coordinate()
Coordinate822.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

IndexedLineSet821.coord = Coordinate822

Shape819.geometry = IndexedLineSet821

HAnimSegment818.children.append(Shape819)
Transform823 = x3d.Transform()
Transform823.translation = [0.1987,0.8029,-0.053]
Shape824 = x3d.Shape(USE="jointbox")

Transform823.children.append(Shape824)

HAnimSegment818.children.append(Transform823)

HAnimJoint817.children.append(HAnimSegment818)
HAnimJoint825 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_3")
HAnimJoint825.name = "l_metacarpophalangeal_3"
HAnimJoint825.center = [0.1987,0.7818,-0.053]
HAnimJoint825.skinCoordIndex = [156,157,163,164]
HAnimJoint825.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment826 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_3")
HAnimSegment826.name = "l_carpal_proximal_phalanx_3"
Shape827 = x3d.Shape()
Appearance828 = x3d.Appearance(USE="SegmentLine")

Shape827.appearance = Appearance828
IndexedLineSet829 = x3d.IndexedLineSet()
IndexedLineSet829.coordIndex = [0,1,-1]
Coordinate830 = x3d.Coordinate()
Coordinate830.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

IndexedLineSet829.coord = Coordinate830

Shape827.geometry = IndexedLineSet829

HAnimSegment826.children.append(Shape827)
Transform831 = x3d.Transform()
Transform831.translation = [0.1987,0.7818,-0.053]
Shape832 = x3d.Shape(USE="jointbox")

Transform831.children.append(Shape832)

HAnimSegment826.children.append(Transform831)

HAnimJoint825.children.append(HAnimSegment826)
HAnimJoint833 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_3")
HAnimJoint833.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint833.center = [0.2013,0.7273,-0.0503]
HAnimJoint833.skinCoordIndex = [179,180,181,182]
HAnimJoint833.skinCoordWeight = [1,1,1,1]
HAnimSegment834 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_3")
HAnimSegment834.name = "l_carpal_middle_phalanx_3"
Shape835 = x3d.Shape()
Appearance836 = x3d.Appearance(USE="SegmentLine")

Shape835.appearance = Appearance836
IndexedLineSet837 = x3d.IndexedLineSet()
IndexedLineSet837.coordIndex = [0,1,-1]
Coordinate838 = x3d.Coordinate()
Coordinate838.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

IndexedLineSet837.coord = Coordinate838

Shape835.geometry = IndexedLineSet837

HAnimSegment834.children.append(Shape835)
Transform839 = x3d.Transform()
Transform839.translation = [0.2013,0.7273,-0.0503]
Shape840 = x3d.Shape(USE="jointbox")

Transform839.children.append(Shape840)

HAnimSegment834.children.append(Transform839)

HAnimJoint833.children.append(HAnimSegment834)
HAnimJoint841 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_3")
HAnimJoint841.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint841.center = [0.2026,0.7011,-0.0494]
HAnimJoint841.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint841.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment842 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_3")
HAnimSegment842.name = "l_carpal_distal_phalanx_3"
Shape843 = x3d.Shape()
Appearance844 = x3d.Appearance(USE="SegmentLine")

Shape843.appearance = Appearance844
IndexedLineSet845 = x3d.IndexedLineSet()
IndexedLineSet845.coordIndex = [0,1,-1]
Coordinate846 = x3d.Coordinate()
Coordinate846.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

IndexedLineSet845.coord = Coordinate846

Shape843.geometry = IndexedLineSet845

HAnimSegment842.children.append(Shape843)
HAnimSite847 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_3_tip")
HAnimSite847.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite847.translation = [0.208,0.6731,-0.0491]
Shape848 = x3d.Shape(USE="sitebox")

HAnimSite847.children.append(Shape848)

HAnimSegment842.children.append(HAnimSite847)
Transform849 = x3d.Transform()
Transform849.translation = [0.2026,0.7011,-0.0494]
Shape850 = x3d.Shape(USE="jointbox")

Transform849.children.append(Shape850)

HAnimSegment842.children.append(Transform849)

HAnimJoint841.children.append(HAnimSegment842)

HAnimJoint833.children.append(HAnimJoint841)

HAnimJoint825.children.append(HAnimJoint833)

HAnimJoint817.children.append(HAnimJoint825)

HAnimJoint741.children.append(HAnimJoint817)
HAnimJoint851 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_4")
HAnimJoint851.name = "l_carpometacarpal_4"
HAnimJoint851.center = [0.1956,0.8019,-0.0794]
HAnimJoint851.skinCoordIndex = [133,134]
HAnimJoint851.skinCoordWeight = [1,1]
HAnimSegment852 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_4")
HAnimSegment852.name = "l_metacarpal_4"
Shape853 = x3d.Shape()
Appearance854 = x3d.Appearance(USE="SegmentLine")

Shape853.appearance = Appearance854
IndexedLineSet855 = x3d.IndexedLineSet()
IndexedLineSet855.coordIndex = [0,1,-1]
Coordinate856 = x3d.Coordinate()
Coordinate856.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

IndexedLineSet855.coord = Coordinate856

Shape853.geometry = IndexedLineSet855

HAnimSegment852.children.append(Shape853)
Transform857 = x3d.Transform()
Transform857.translation = [0.1956,0.8019,-0.0794]
Shape858 = x3d.Shape(USE="jointbox")

Transform857.children.append(Shape858)

HAnimSegment852.children.append(Transform857)

HAnimJoint851.children.append(HAnimSegment852)
HAnimJoint859 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_4")
HAnimJoint859.name = "l_metacarpophalangeal_4"
HAnimJoint859.center = [0.1956,0.7815,-0.0794]
HAnimJoint859.skinCoordIndex = [158,159,164,165]
HAnimJoint859.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment860 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_4")
HAnimSegment860.name = "l_carpal_proximal_phalanx_4"
Shape861 = x3d.Shape()
Appearance862 = x3d.Appearance(USE="SegmentLine")

Shape861.appearance = Appearance862
IndexedLineSet863 = x3d.IndexedLineSet()
IndexedLineSet863.coordIndex = [0,1,-1]
Coordinate864 = x3d.Coordinate()
Coordinate864.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

IndexedLineSet863.coord = Coordinate864

Shape861.geometry = IndexedLineSet863

HAnimSegment860.children.append(Shape861)
Transform865 = x3d.Transform()
Transform865.translation = [0.1956,0.7815,-0.0794]
Shape866 = x3d.Shape(USE="jointbox")

Transform865.children.append(Shape866)

HAnimSegment860.children.append(Transform865)

HAnimJoint859.children.append(HAnimSegment860)
HAnimJoint867 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_4")
HAnimJoint867.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint867.center = [0.1973,0.7287,-0.0777]
HAnimJoint867.skinCoordIndex = [192,193,194,195]
HAnimJoint867.skinCoordWeight = [1,1,1,1]
HAnimSegment868 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_4")
HAnimSegment868.name = "l_carpal_middle_phalanx_4"
Shape869 = x3d.Shape()
Appearance870 = x3d.Appearance(USE="SegmentLine")

Shape869.appearance = Appearance870
IndexedLineSet871 = x3d.IndexedLineSet()
IndexedLineSet871.coordIndex = [0,1,-1]
Coordinate872 = x3d.Coordinate()
Coordinate872.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

IndexedLineSet871.coord = Coordinate872

Shape869.geometry = IndexedLineSet871

HAnimSegment868.children.append(Shape869)
Transform873 = x3d.Transform()
Transform873.translation = [0.1973,0.7287,-0.0777]
Shape874 = x3d.Shape(USE="jointbox")

Transform873.children.append(Shape874)

HAnimSegment868.children.append(Transform873)

HAnimJoint867.children.append(HAnimSegment868)
HAnimJoint875 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_4")
HAnimJoint875.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint875.center = [0.1983,0.7045,-0.0767]
HAnimJoint875.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint875.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment876 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_4")
HAnimSegment876.name = "l_carpal_distal_phalanx_4"
Shape877 = x3d.Shape()
Appearance878 = x3d.Appearance(USE="SegmentLine")

Shape877.appearance = Appearance878
IndexedLineSet879 = x3d.IndexedLineSet()
IndexedLineSet879.coordIndex = [0,1,-1]
Coordinate880 = x3d.Coordinate()
Coordinate880.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

IndexedLineSet879.coord = Coordinate880

Shape877.geometry = IndexedLineSet879

HAnimSegment876.children.append(Shape877)
Transform881 = x3d.Transform()
Transform881.translation = [0.1983,0.7045,-0.0767]
Shape882 = x3d.Shape(USE="jointbox")

Transform881.children.append(Shape882)

HAnimSegment876.children.append(Transform881)
HAnimSite883 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_4_tip")
HAnimSite883.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite883.translation = [0.2035,0.675,-0.0756]
Shape884 = x3d.Shape(USE="sitebox")

HAnimSite883.children.append(Shape884)

HAnimSegment876.children.append(HAnimSite883)

HAnimJoint875.children.append(HAnimSegment876)

HAnimJoint867.children.append(HAnimJoint875)

HAnimJoint859.children.append(HAnimJoint867)

HAnimJoint851.children.append(HAnimJoint859)

HAnimJoint741.children.append(HAnimJoint851)
HAnimJoint885 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_5")
HAnimJoint885.name = "l_carpometacarpal_5"
HAnimJoint885.center = [0.1925,0.8066,-0.1036]
HAnimJoint885.skinCoordIndex = [135,136,137,165]
HAnimJoint885.skinCoordWeight = [1,1,1,0.5]
HAnimSegment886 = x3d.HAnimSegment(DEF="Joe_l_metacarpal_5")
HAnimSegment886.name = "l_metacarpal_5"
Shape887 = x3d.Shape()
Appearance888 = x3d.Appearance(USE="SegmentLine")

Shape887.appearance = Appearance888
IndexedLineSet889 = x3d.IndexedLineSet()
IndexedLineSet889.coordIndex = [0,1,-1]
Coordinate890 = x3d.Coordinate()
Coordinate890.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

IndexedLineSet889.coord = Coordinate890

Shape887.geometry = IndexedLineSet889

HAnimSegment886.children.append(Shape887)
Transform891 = x3d.Transform()
Transform891.translation = [0.1925,0.8066,-0.1036]
Shape892 = x3d.Shape(USE="jointbox")

Transform891.children.append(Shape892)

HAnimSegment886.children.append(Transform891)

HAnimJoint885.children.append(HAnimSegment886)
HAnimJoint893 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_5")
HAnimJoint893.name = "l_metacarpophalangeal_5"
HAnimJoint893.center = [0.1925,0.7866,-0.1036]
HAnimJoint893.skinCoordIndex = [160,161,162]
HAnimJoint893.skinCoordWeight = [1,1,1]
HAnimSegment894 = x3d.HAnimSegment(DEF="Joe_l_carpal_proximal_phalanx_5")
HAnimSegment894.name = "l_carpal_proximal_phalanx_5"
Shape895 = x3d.Shape()
Appearance896 = x3d.Appearance(USE="SegmentLine")

Shape895.appearance = Appearance896
IndexedLineSet897 = x3d.IndexedLineSet()
IndexedLineSet897.coordIndex = [0,1,-1]
Coordinate898 = x3d.Coordinate()
Coordinate898.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

IndexedLineSet897.coord = Coordinate898

Shape895.geometry = IndexedLineSet897

HAnimSegment894.children.append(Shape895)
Transform899 = x3d.Transform()
Transform899.translation = [0.1925,0.7866,-0.1036]
Shape900 = x3d.Shape(USE="jointbox")

Transform899.children.append(Shape900)

HAnimSegment894.children.append(Transform899)

HAnimJoint893.children.append(HAnimSegment894)
HAnimJoint901 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_5")
HAnimJoint901.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint901.center = [0.1938,0.7452,-0.1024]
HAnimJoint901.skinCoordIndex = [205,206,207,208]
HAnimJoint901.skinCoordWeight = [1,1,1,1]
HAnimSegment902 = x3d.HAnimSegment(DEF="Joe_l_carpal_middle_phalanx_5")
HAnimSegment902.name = "l_carpal_middle_phalanx_5"
Transform903 = x3d.Transform()
Transform903.translation = [0.1938,0.7452,-0.1024]
Shape904 = x3d.Shape(USE="jointbox")

Transform903.children.append(Shape904)

HAnimSegment902.children.append(Transform903)
Shape905 = x3d.Shape()
Appearance906 = x3d.Appearance(USE="SegmentLine")

Shape905.appearance = Appearance906
IndexedLineSet907 = x3d.IndexedLineSet()
IndexedLineSet907.coordIndex = [0,1,-1]
Coordinate908 = x3d.Coordinate()
Coordinate908.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

IndexedLineSet907.coord = Coordinate908

Shape905.geometry = IndexedLineSet907

HAnimSegment902.children.append(Shape905)

HAnimJoint901.children.append(HAnimSegment902)
HAnimJoint909 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_5")
HAnimJoint909.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint909.center = [0.1948,0.7277,-0.1017]
HAnimJoint909.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint909.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment910 = x3d.HAnimSegment(DEF="Joe_l_carpal_distal_phalanx_5")
HAnimSegment910.name = "l_carpal_distal_phalanx_5"
Shape911 = x3d.Shape()
Appearance912 = x3d.Appearance(USE="SegmentLine")

Shape911.appearance = Appearance912
IndexedLineSet913 = x3d.IndexedLineSet()
IndexedLineSet913.coordIndex = [0,1,-1]
Coordinate914 = x3d.Coordinate()
Coordinate914.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

IndexedLineSet913.coord = Coordinate914

Shape911.geometry = IndexedLineSet913

HAnimSegment910.children.append(Shape911)
Transform915 = x3d.Transform()
Transform915.translation = [0.1948,0.7277,-0.1017]
Shape916 = x3d.Shape(USE="jointbox")

Transform915.children.append(Shape916)

HAnimSegment910.children.append(Transform915)
HAnimSite917 = x3d.HAnimSite(DEF="Joe_l_carpal_distal_phalanx_5_tip")
HAnimSite917.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite917.translation = [0.2014,0.7009,-0.1012]
Shape918 = x3d.Shape(USE="sitebox")

HAnimSite917.children.append(Shape918)

HAnimSegment910.children.append(HAnimSite917)

HAnimJoint909.children.append(HAnimSegment910)

HAnimJoint901.children.append(HAnimJoint909)

HAnimJoint893.children.append(HAnimJoint901)

HAnimJoint885.children.append(HAnimJoint893)

HAnimJoint741.children.append(HAnimJoint885)

HAnimJoint719.children.append(HAnimJoint741)

HAnimJoint695.children.append(HAnimJoint719)

HAnimJoint679.children.append(HAnimJoint695)

HAnimJoint669.children.append(HAnimJoint679)

HAnimJoint553.children.append(HAnimJoint669)
HAnimJoint919 = x3d.HAnimJoint(DEF="Joe_r_sternoclavicular")
HAnimJoint919.name = "r_sternoclavicular"
HAnimJoint919.center = [-0.03,1.46,0]
HAnimJoint919.skinCoordIndex = [10]
HAnimJoint919.skinCoordWeight = [1]
HAnimSegment920 = x3d.HAnimSegment(DEF="Joe_r_clavicle")
HAnimSegment920.name = "r_clavicle"
Shape921 = x3d.Shape()
Appearance922 = x3d.Appearance(USE="SegmentLine")

Shape921.appearance = Appearance922
IndexedLineSet923 = x3d.IndexedLineSet()
IndexedLineSet923.coordIndex = [0,1,-1]
Coordinate924 = x3d.Coordinate()
Coordinate924.point = [(-0.03, 1.46, 0.02),(-0.09, 1.41, -0.09)]

IndexedLineSet923.coord = Coordinate924

Shape921.geometry = IndexedLineSet923

HAnimSegment920.children.append(Shape921)
Transform925 = x3d.Transform()
Transform925.translation = [-0.03,1.46,0.02]
Shape926 = x3d.Shape(USE="jointbox")

Transform925.children.append(Shape926)

HAnimSegment920.children.append(Transform925)
HAnimSite927 = x3d.HAnimSite(DEF="Joe_r_clavicle_pt")
HAnimSite927.name = "r_clavicle_pt"
HAnimSite927.translation = [-0.03,1.46,0.035]
Shape928 = x3d.Shape(USE="sitebox")

HAnimSite927.children.append(Shape928)

HAnimSegment920.children.append(HAnimSite927)

HAnimJoint919.children.append(HAnimSegment920)
HAnimJoint929 = x3d.HAnimJoint(DEF="Joe_r_acromioclavicular")
HAnimJoint929.name = "r_acromioclavicular"
HAnimJoint929.center = [-0.09,1.41,-0.11]
HAnimJoint929.skinCoordIndex = [77,29]
HAnimJoint929.skinCoordWeight = [1,0.9]
HAnimSegment930 = x3d.HAnimSegment(DEF="Joe_r_scapula")
HAnimSegment930.name = "r_scapula"
Shape931 = x3d.Shape()
Appearance932 = x3d.Appearance(USE="SegmentLine")

Shape931.appearance = Appearance932
IndexedLineSet933 = x3d.IndexedLineSet()
IndexedLineSet933.coordIndex = [0,1,-1]
Coordinate934 = x3d.Coordinate()
Coordinate934.point = [(-0.09, 1.41, -0.09),(-0.2, 1.44, -0.04)]

IndexedLineSet933.coord = Coordinate934

Shape931.geometry = IndexedLineSet933

HAnimSegment930.children.append(Shape931)
Transform935 = x3d.Transform()
Transform935.translation = [-0.09,1.41,-0.09]
Shape936 = x3d.Shape(USE="jointbox")

Transform935.children.append(Shape936)

HAnimSegment930.children.append(Transform935)
Transform937 = x3d.Transform()
Transform937.translation = [-0.11,1.427,-0.1375]
Shape938 = x3d.Shape(USE="skinsphere")

Transform937.children.append(Shape938)

HAnimSegment930.children.append(Transform937)
HAnimSite939 = x3d.HAnimSite(DEF="Joe_r_acromion_pt")
HAnimSite939.name = "r_acromion_pt"
HAnimSite939.translation = [-0.178,1.4825,-0.0625]
Shape940 = x3d.Shape(USE="sitebox")

HAnimSite939.children.append(Shape940)

HAnimSegment930.children.append(HAnimSite939)
HAnimSite941 = x3d.HAnimSite(DEF="Joe_r_axilla_proximal_pt")
HAnimSite941.name = "r_axilla_proximal_pt"
HAnimSite941.translation = [-0.17,1.38,0.007]
Shape942 = x3d.Shape(USE="sitebox")

HAnimSite941.children.append(Shape942)

HAnimSegment930.children.append(HAnimSite941)
HAnimSite943 = x3d.HAnimSite(DEF="Joe_r_axilla_distal_pt")
HAnimSite943.name = "r_axilla_distal_pt"
HAnimSite943.translation = [-0.16,1.38,-0.127]
Shape944 = x3d.Shape(USE="sitebox")

HAnimSite943.children.append(Shape944)

HAnimSegment930.children.append(HAnimSite943)

HAnimJoint929.children.append(HAnimSegment930)
HAnimJoint945 = x3d.HAnimJoint(DEF="Joe_r_shoulder")
HAnimJoint945.name = "r_shoulder"
HAnimJoint945.center = [-0.2,1.44,-0.04]
HAnimJoint945.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint945.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimSegment946 = x3d.HAnimSegment(DEF="Joe_r_upperarm")
HAnimSegment946.name = "r_upperarm"
Transform947 = x3d.Transform()
Transform947.translation = [-0.2,1.44,-0.04]
Shape948 = x3d.Shape(USE="jointbox")

Transform947.children.append(Shape948)

HAnimSegment946.children.append(Transform947)
Shape949 = x3d.Shape()
Appearance950 = x3d.Appearance(USE="SegmentLine")

Shape949.appearance = Appearance950
IndexedLineSet951 = x3d.IndexedLineSet()
IndexedLineSet951.coordIndex = [0,1,-1]
Coordinate952 = x3d.Coordinate()
Coordinate952.point = [(-0.2, 1.44, -0.04),(-0.2, 1.1388, -0.04)]

IndexedLineSet951.coord = Coordinate952

Shape949.geometry = IndexedLineSet951

HAnimSegment946.children.append(Shape949)
Transform953 = x3d.Transform()
Transform953.translation = [-0.178,1.4825,-0.0625]
Shape954 = x3d.Shape(USE="skinsphere")

Transform953.children.append(Shape954)

HAnimSegment946.children.append(Transform953)
Transform955 = x3d.Transform()
Transform955.translation = [-0.17,1.38,0.007]
Shape956 = x3d.Shape(USE="skinsphere")

Transform955.children.append(Shape956)

HAnimSegment946.children.append(Transform955)
Transform957 = x3d.Transform()
Transform957.translation = [-0.16,1.38,-0.127]
Shape958 = x3d.Shape(USE="skinsphere")

Transform957.children.append(Shape958)

HAnimSegment946.children.append(Transform957)
Transform959 = x3d.Transform()
Transform959.translation = [-0.235,1.42,-0.0625]
Shape960 = x3d.Shape(USE="skinsphere")

Transform959.children.append(Shape960)

HAnimSegment946.children.append(Transform959)
Transform961 = x3d.Transform()
Transform961.translation = [-0.23,1.235,-0.04]
Shape962 = x3d.Shape(USE="skinsphere")

Transform961.children.append(Shape962)

HAnimSegment946.children.append(Transform961)
Transform963 = x3d.Transform()
Transform963.translation = [-0.16,1.23,-0.04]
Shape964 = x3d.Shape(USE="skinsphere")

Transform963.children.append(Shape964)

HAnimSegment946.children.append(Transform963)
Transform965 = x3d.Transform()
Transform965.translation = [-0.2,1.23,-0.105]
Shape966 = x3d.Shape(USE="skinsphere")

Transform965.children.append(Shape966)

HAnimSegment946.children.append(Transform965)
Transform967 = x3d.Transform()
Transform967.translation = [-0.2,1.235,0.02]
Shape968 = x3d.Shape(USE="skinsphere")

Transform967.children.append(Shape968)

HAnimSegment946.children.append(Transform967)
HAnimSite969 = x3d.HAnimSite(DEF="Joe_r_humeral_medial_epicondyle_pt")
HAnimSite969.name = "r_humeral_medial_epicondyle_pt"
HAnimSite969.translation = [-0.165,1.1388,-0.04]
Shape970 = x3d.Shape(USE="sitebox")

HAnimSite969.children.append(Shape970)

HAnimSegment946.children.append(HAnimSite969)
HAnimSite971 = x3d.HAnimSite(DEF="Joe_r_radiale_pt")
HAnimSite971.name = "r_radiale_pt"
HAnimSite971.translation = [-0.23,1.133,-0.055]
Shape972 = x3d.Shape(USE="sitebox")

HAnimSite971.children.append(Shape972)

HAnimSegment946.children.append(HAnimSite971)
HAnimSite973 = x3d.HAnimSite(DEF="Joe_r_humeral_lateral_epicondyle_pt")
HAnimSite973.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite973.translation = [-0.244,1.1388,-0.04]
Shape974 = x3d.Shape(USE="sitebox")

HAnimSite973.children.append(Shape974)

HAnimSegment946.children.append(HAnimSite973)

HAnimJoint945.children.append(HAnimSegment946)
HAnimJoint975 = x3d.HAnimJoint(DEF="Joe_r_elbow")
HAnimJoint975.name = "r_elbow"
HAnimJoint975.center = [-0.2,1.1388,-0.04]
HAnimJoint975.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint975.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimSegment976 = x3d.HAnimSegment(DEF="Joe_r_forearm")
HAnimSegment976.name = "r_forearm"
Shape977 = x3d.Shape()
Appearance978 = x3d.Appearance(USE="SegmentLine")

Shape977.appearance = Appearance978
IndexedLineSet979 = x3d.IndexedLineSet()
IndexedLineSet979.coordIndex = [0,1,-1]
Coordinate980 = x3d.Coordinate()
Coordinate980.point = [(-0.2, 1.1388, -0.04),(-0.2, 0.89, -0.04)]

IndexedLineSet979.coord = Coordinate980

Shape977.geometry = IndexedLineSet979

HAnimSegment976.children.append(Shape977)
Transform981 = x3d.Transform()
Transform981.translation = [-0.2,1.1388,-0.04]
Shape982 = x3d.Shape(USE="jointbox")

Transform981.children.append(Shape982)

HAnimSegment976.children.append(Transform981)
Transform983 = x3d.Transform()
Transform983.translation = [-0.2,1.1388,0.013]
Shape984 = x3d.Shape(USE="skinsphere")

Transform983.children.append(Shape984)

HAnimSegment976.children.append(Transform983)
Transform985 = x3d.Transform()
Transform985.translation = [-0.225,1,-0.01]
Shape986 = x3d.Shape(USE="skinsphere")

Transform985.children.append(Shape986)

HAnimSegment976.children.append(Transform985)
Transform987 = x3d.Transform()
Transform987.translation = [-0.225,1,-0.07]
Shape988 = x3d.Shape(USE="skinsphere")

Transform987.children.append(Shape988)

HAnimSegment976.children.append(Transform987)
Transform989 = x3d.Transform()
Transform989.translation = [-0.185,1,-0.01]
Shape990 = x3d.Shape(USE="skinsphere")

Transform989.children.append(Shape990)

HAnimSegment976.children.append(Transform989)
Transform991 = x3d.Transform()
Transform991.translation = [-0.185,1,-0.07]
Shape992 = x3d.Shape(USE="skinsphere")

Transform991.children.append(Shape992)

HAnimSegment976.children.append(Transform991)
HAnimSite993 = x3d.HAnimSite(DEF="Joe_r_radial_styloid_pt")
HAnimSite993.name = "r_radial_styloid_pt"
HAnimSite993.translation = [-0.2,0.9,-0.015]
Shape994 = x3d.Shape(USE="sitebox")

HAnimSite993.children.append(Shape994)

HAnimSegment976.children.append(HAnimSite993)
HAnimSite995 = x3d.HAnimSite(DEF="Joe_r_olecranon_pt")
HAnimSite995.name = "r_olecranon_pt"
HAnimSite995.translation = [-0.2,1.1388,-0.08]
Shape996 = x3d.Shape(USE="sitebox")

HAnimSite995.children.append(Shape996)

HAnimSegment976.children.append(HAnimSite995)

HAnimJoint975.children.append(HAnimSegment976)
HAnimJoint997 = x3d.HAnimJoint(DEF="Joe_r_radiocarpal")
HAnimJoint997.name = "r_radiocarpal"
HAnimJoint997.center = [-0.2,0.89,-0.04]
HAnimJoint997.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint997.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimSegment998 = x3d.HAnimSegment(DEF="Joe_r_carpal")
HAnimSegment998.name = "r_carpal"
Shape999 = x3d.Shape()
Appearance1000 = x3d.Appearance(USE="SegmentLine")

Shape999.appearance = Appearance1000
IndexedLineSet1001 = x3d.IndexedLineSet()
IndexedLineSet1001.coordIndex = [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]
Coordinate1002 = x3d.Coordinate()
Coordinate1002.point = [(-0.2, 0.89, -0.04),(-0.2, 0.85, 0),(-0.2, 0.84, -0.015),(-0.2, 0.835, -0.04),(-0.2, 0.835, -0.065),(-0.2, 0.84, -0.085)]

IndexedLineSet1001.coord = Coordinate1002

Shape999.geometry = IndexedLineSet1001

HAnimSegment998.children.append(Shape999)
Transform1003 = x3d.Transform()
Transform1003.translation = [-0.2,0.89,-0.04]
Shape1004 = x3d.Shape(USE="jointbox")

Transform1003.children.append(Shape1004)

HAnimSegment998.children.append(Transform1003)
HAnimSite1005 = x3d.HAnimSite(DEF="Joe_r_ulnar_styloid_pt")
HAnimSite1005.name = "r_ulnar_styloid_pt"
HAnimSite1005.translation = [-0.2,0.9,-0.085]
Shape1006 = x3d.Shape(USE="sitebox")

HAnimSite1005.children.append(Shape1006)

HAnimSegment998.children.append(HAnimSite1005)

HAnimJoint997.children.append(HAnimSegment998)
HAnimJoint1007 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_1")
HAnimJoint1007.name = "r_carpometacarpal_1"
HAnimJoint1007.center = [-0.2,0.85,0]
HAnimJoint1007.skinCoordIndex = [243,244]
HAnimJoint1007.skinCoordWeight = [1,1]
HAnimSegment1008 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_1")
HAnimSegment1008.name = "r_metacarpal_1"
Shape1009 = x3d.Shape()
Appearance1010 = x3d.Appearance(USE="SegmentLine")

Shape1009.appearance = Appearance1010
IndexedLineSet1011 = x3d.IndexedLineSet()
IndexedLineSet1011.coordIndex = [0,1,-1]
Coordinate1012 = x3d.Coordinate()
Coordinate1012.point = [(-0.2, 0.85, 0),(-0.2, 0.82, 0.03)]

IndexedLineSet1011.coord = Coordinate1012

Shape1009.geometry = IndexedLineSet1011

HAnimSegment1008.children.append(Shape1009)
Transform1013 = x3d.Transform()
Transform1013.translation = [-0.2,0.85,0]
Shape1014 = x3d.Shape(USE="jointbox")

Transform1013.children.append(Shape1014)

HAnimSegment1008.children.append(Transform1013)

HAnimJoint1007.children.append(HAnimSegment1008)
HAnimJoint1015 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_1")
HAnimJoint1015.name = "r_metacarpophalangeal_1"
HAnimJoint1015.center = [-0.2,0.82,0.03]
HAnimJoint1015.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint1015.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimSegment1016 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_1")
HAnimSegment1016.name = "r_carpal_proximal_phalanx_1"
Shape1017 = x3d.Shape()
Appearance1018 = x3d.Appearance(USE="SegmentLine")

Shape1017.appearance = Appearance1018
IndexedLineSet1019 = x3d.IndexedLineSet()
IndexedLineSet1019.coordIndex = [0,1,-1]
Coordinate1020 = x3d.Coordinate()
Coordinate1020.point = [(-0.2, 0.82, 0.03),(-0.2, 0.8, 0.05)]

IndexedLineSet1019.coord = Coordinate1020

Shape1017.geometry = IndexedLineSet1019

HAnimSegment1016.children.append(Shape1017)
Transform1021 = x3d.Transform()
Transform1021.translation = [-0.2,0.82,0.03]
Shape1022 = x3d.Shape(USE="jointbox")

Transform1021.children.append(Shape1022)

HAnimSegment1016.children.append(Transform1021)

HAnimJoint1015.children.append(HAnimSegment1016)
HAnimJoint1023 = x3d.HAnimJoint(DEF="Joe_r_carpal_interphalangeal_1")
HAnimJoint1023.name = "r_carpal_interphalangeal_1"
HAnimJoint1023.center = [-0.2,0.8,0.05]
HAnimJoint1023.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint1023.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1024 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_1")
HAnimSegment1024.name = "r_carpal_distal_phalanx_1"
Shape1025 = x3d.Shape()
Appearance1026 = x3d.Appearance(USE="SegmentLine")

Shape1025.appearance = Appearance1026
IndexedLineSet1027 = x3d.IndexedLineSet()
IndexedLineSet1027.coordIndex = [0,1,-1]
Coordinate1028 = x3d.Coordinate()
Coordinate1028.point = [(-0.2, 0.8, 0.05),(-0.2, 0.78, 0.07)]

IndexedLineSet1027.coord = Coordinate1028

Shape1025.geometry = IndexedLineSet1027

HAnimSegment1024.children.append(Shape1025)
Transform1029 = x3d.Transform(DEF="Thumbnail")
Transform1029.translation = [-0.2,0.785,0.075]
Shape1030 = x3d.Shape(USE="skinsphere")

Transform1029.children.append(Shape1030)

HAnimSegment1024.children.append(Transform1029)
Transform1031 = x3d.Transform()
Transform1031.translation = [-0.2,0.8,0.05]
Shape1032 = x3d.Shape(USE="jointbox")

Transform1031.children.append(Shape1032)

HAnimSegment1024.children.append(Transform1031)
HAnimSite1033 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_1_tip")
HAnimSite1033.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1033.translation = [-0.2,0.78,0.07]
Shape1034 = x3d.Shape(USE="sitebox")

HAnimSite1033.children.append(Shape1034)

HAnimSegment1024.children.append(HAnimSite1033)

HAnimJoint1023.children.append(HAnimSegment1024)

HAnimJoint1015.children.append(HAnimJoint1023)

HAnimJoint1007.children.append(HAnimJoint1015)

HAnimJoint997.children.append(HAnimJoint1007)
HAnimJoint1035 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_2")
HAnimJoint1035.name = "r_carpometacarpal_2"
HAnimJoint1035.center = [-0.2,0.84,-0.015]
HAnimJoint1035.skinCoordIndex = [245,246]
HAnimJoint1035.skinCoordWeight = [1,1]
HAnimSegment1036 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_2")
HAnimSegment1036.name = "r_metacarpal_2"
Shape1037 = x3d.Shape()
Appearance1038 = x3d.Appearance(USE="SegmentLine")

Shape1037.appearance = Appearance1038
IndexedLineSet1039 = x3d.IndexedLineSet()
IndexedLineSet1039.coordIndex = [0,1,-1]
Coordinate1040 = x3d.Coordinate()
Coordinate1040.point = [(-0.2, 0.84, -0.015),(-0.2, 0.793, -0.015)]

IndexedLineSet1039.coord = Coordinate1040

Shape1037.geometry = IndexedLineSet1039

HAnimSegment1036.children.append(Shape1037)
Transform1041 = x3d.Transform()
Transform1041.translation = [-0.2,0.84,-0.015]
Shape1042 = x3d.Shape(USE="jointbox")

Transform1041.children.append(Shape1042)

HAnimSegment1036.children.append(Transform1041)
HAnimSite1043 = x3d.HAnimSite(DEF="Joe_r_metacarpal_phalanx_2_pt")
HAnimSite1043.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1043.translation = [-0.2,0.793,-0.005]
Shape1044 = x3d.Shape(USE="sitebox")

HAnimSite1043.children.append(Shape1044)

HAnimSegment1036.children.append(HAnimSite1043)

HAnimJoint1035.children.append(HAnimSegment1036)
HAnimJoint1045 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_2")
HAnimJoint1045.name = "r_metacarpophalangeal_2"
HAnimJoint1045.center = [-0.2,0.793,-0.015]
HAnimJoint1045.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint1045.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimSegment1046 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_2")
HAnimSegment1046.name = "r_carpal_proximal_phalanx_2"
Shape1047 = x3d.Shape()
Appearance1048 = x3d.Appearance(USE="SegmentLine")

Shape1047.appearance = Appearance1048
IndexedLineSet1049 = x3d.IndexedLineSet()
IndexedLineSet1049.coordIndex = [0,1,-1]
Coordinate1050 = x3d.Coordinate()
Coordinate1050.point = [(-0.2, 0.793, -0.015),(-0.2, 0.745, -0.015)]

IndexedLineSet1049.coord = Coordinate1050

Shape1047.geometry = IndexedLineSet1049

HAnimSegment1046.children.append(Shape1047)
Transform1051 = x3d.Transform()
Transform1051.translation = [-0.2,0.793,-0.015]
Shape1052 = x3d.Shape(USE="jointbox")

Transform1051.children.append(Shape1052)

HAnimSegment1046.children.append(Transform1051)

HAnimJoint1045.children.append(HAnimSegment1046)
HAnimJoint1053 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_2")
HAnimJoint1053.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1053.center = [-0.2,0.745,-0.015]
HAnimJoint1053.skinCoordIndex = [282,283,284,285]
HAnimJoint1053.skinCoordWeight = [1,1,1,1]
HAnimSegment1054 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_2")
HAnimSegment1054.name = "r_carpal_middle_phalanx_2"
Shape1055 = x3d.Shape()
Appearance1056 = x3d.Appearance(USE="SegmentLine")

Shape1055.appearance = Appearance1056
IndexedLineSet1057 = x3d.IndexedLineSet()
IndexedLineSet1057.coordIndex = [0,1,-1]
Coordinate1058 = x3d.Coordinate()
Coordinate1058.point = [(-0.2, 0.745, -0.015),(-0.2, 0.72, -0.015)]

IndexedLineSet1057.coord = Coordinate1058

Shape1055.geometry = IndexedLineSet1057

HAnimSegment1054.children.append(Shape1055)
Transform1059 = x3d.Transform()
Transform1059.translation = [-0.2,0.745,-0.015]
Shape1060 = x3d.Shape(USE="jointbox")

Transform1059.children.append(Shape1060)

HAnimSegment1054.children.append(Transform1059)

HAnimJoint1053.children.append(HAnimSegment1054)
HAnimJoint1061 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_2")
HAnimJoint1061.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1061.center = [-0.2,0.72,-0.015]
HAnimJoint1061.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint1061.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1062 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_2")
HAnimSegment1062.name = "r_carpal_distal_phalanx_2"
Shape1063 = x3d.Shape()
Appearance1064 = x3d.Appearance(USE="SegmentLine")

Shape1063.appearance = Appearance1064
IndexedLineSet1065 = x3d.IndexedLineSet()
IndexedLineSet1065.coordIndex = [0,1,-1]
Coordinate1066 = x3d.Coordinate()
Coordinate1066.point = [(-0.2, 0.72, -0.015),(-0.2, 0.695, -0.015)]

IndexedLineSet1065.coord = Coordinate1066

Shape1063.geometry = IndexedLineSet1065

HAnimSegment1062.children.append(Shape1063)
Transform1067 = x3d.Transform()
Transform1067.translation = [-0.2,0.72,-0.015]
Shape1068 = x3d.Shape(USE="jointbox")

Transform1067.children.append(Shape1068)

HAnimSegment1062.children.append(Transform1067)
HAnimSite1069 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_2_tip")
HAnimSite1069.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1069.translation = [-0.2,0.695,-0.015]
Shape1070 = x3d.Shape(USE="sitebox")

HAnimSite1069.children.append(Shape1070)

HAnimSegment1062.children.append(HAnimSite1069)

HAnimJoint1061.children.append(HAnimSegment1062)

HAnimJoint1053.children.append(HAnimJoint1061)

HAnimJoint1045.children.append(HAnimJoint1053)

HAnimJoint1035.children.append(HAnimJoint1045)

HAnimJoint997.children.append(HAnimJoint1035)
HAnimJoint1071 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_3")
HAnimJoint1071.name = "r_carpometacarpal_3"
HAnimJoint1071.center = [-0.2,0.835,-0.04]
HAnimJoint1071.skinCoordIndex = [247,248]
HAnimJoint1071.skinCoordWeight = [1,1]
HAnimSegment1072 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_3")
HAnimSegment1072.name = "r_metacarpal_3"
Shape1073 = x3d.Shape()
Appearance1074 = x3d.Appearance(USE="SegmentLine")

Shape1073.appearance = Appearance1074
IndexedLineSet1075 = x3d.IndexedLineSet()
IndexedLineSet1075.coordIndex = [0,1,-1]
Coordinate1076 = x3d.Coordinate()
Coordinate1076.point = [(-0.2, 0.835, -0.04),(-0.2, 0.788, -0.04)]

IndexedLineSet1075.coord = Coordinate1076

Shape1073.geometry = IndexedLineSet1075

HAnimSegment1072.children.append(Shape1073)
Transform1077 = x3d.Transform()
Transform1077.translation = [-0.2,0.835,-0.04]
Shape1078 = x3d.Shape(USE="jointbox")

Transform1077.children.append(Shape1078)

HAnimSegment1072.children.append(Transform1077)

HAnimJoint1071.children.append(HAnimSegment1072)
HAnimJoint1079 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_3")
HAnimJoint1079.name = "r_metacarpophalangeal_3"
HAnimJoint1079.center = [-0.2,0.788,-0.04]
HAnimJoint1079.skinCoordIndex = [272,273,279,280]
HAnimJoint1079.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1080 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_3")
HAnimSegment1080.name = "r_carpal_proximal_phalanx_3"
Shape1081 = x3d.Shape()
Appearance1082 = x3d.Appearance(USE="SegmentLine")

Shape1081.appearance = Appearance1082
IndexedLineSet1083 = x3d.IndexedLineSet()
IndexedLineSet1083.coordIndex = [0,1,-1]
Coordinate1084 = x3d.Coordinate()
Coordinate1084.point = [(-0.2, 0.788, -0.04),(-0.2, 0.74, -0.04)]

IndexedLineSet1083.coord = Coordinate1084

Shape1081.geometry = IndexedLineSet1083

HAnimSegment1080.children.append(Shape1081)
Transform1085 = x3d.Transform()
Transform1085.translation = [-0.2,0.788,-0.04]
Shape1086 = x3d.Shape(USE="jointbox")

Transform1085.children.append(Shape1086)

HAnimSegment1080.children.append(Transform1085)

HAnimJoint1079.children.append(HAnimSegment1080)
HAnimJoint1087 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_3")
HAnimJoint1087.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1087.center = [-0.2,0.74,-0.04]
HAnimJoint1087.skinCoordIndex = [295,296,297,298]
HAnimJoint1087.skinCoordWeight = [1,1,1,1]
HAnimSegment1088 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_3")
HAnimSegment1088.name = "r_carpal_middle_phalanx_3"
Shape1089 = x3d.Shape()
Appearance1090 = x3d.Appearance(USE="SegmentLine")

Shape1089.appearance = Appearance1090
IndexedLineSet1091 = x3d.IndexedLineSet()
IndexedLineSet1091.coordIndex = [0,1,-1]
Coordinate1092 = x3d.Coordinate()
Coordinate1092.point = [(-0.2, 0.74, -0.04),(-0.2, 0.7142, -0.04)]

IndexedLineSet1091.coord = Coordinate1092

Shape1089.geometry = IndexedLineSet1091

HAnimSegment1088.children.append(Shape1089)
Transform1093 = x3d.Transform()
Transform1093.translation = [-0.2,0.74,-0.04]
Shape1094 = x3d.Shape(USE="jointbox")

Transform1093.children.append(Shape1094)

HAnimSegment1088.children.append(Transform1093)

HAnimJoint1087.children.append(HAnimSegment1088)
HAnimJoint1095 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_3")
HAnimJoint1095.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1095.center = [-0.2,0.7142,-0.04]
HAnimJoint1095.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint1095.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1096 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_3")
HAnimSegment1096.name = "r_carpal_distal_phalanx_3"
Shape1097 = x3d.Shape()
Appearance1098 = x3d.Appearance(USE="SegmentLine")

Shape1097.appearance = Appearance1098
IndexedLineSet1099 = x3d.IndexedLineSet()
IndexedLineSet1099.coordIndex = [0,1,-1]
Coordinate1100 = x3d.Coordinate()
Coordinate1100.point = [(-0.2, 0.7142, -0.04),(-0.2, 0.6758, -0.04)]

IndexedLineSet1099.coord = Coordinate1100

Shape1097.geometry = IndexedLineSet1099

HAnimSegment1096.children.append(Shape1097)
Transform1101 = x3d.Transform()
Transform1101.translation = [-0.2,0.7142,-0.04]
Shape1102 = x3d.Shape(USE="jointbox")

Transform1101.children.append(Shape1102)

HAnimSegment1096.children.append(Transform1101)
HAnimSite1103 = x3d.HAnimSite(DEF="Joe_r_dactylion_pt")
HAnimSite1103.name = "r_dactylion_pt"
HAnimSite1103.translation = [-0.2,0.68,-0.04]
Shape1104 = x3d.Shape(USE="sitebox")

HAnimSite1103.children.append(Shape1104)

HAnimSegment1096.children.append(HAnimSite1103)
HAnimSite1105 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_3_tip")
HAnimSite1105.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1105.translation = [-0.2,0.68,-0.04]
Shape1106 = x3d.Shape(USE="sitebox")

HAnimSite1105.children.append(Shape1106)

HAnimSegment1096.children.append(HAnimSite1105)

HAnimJoint1095.children.append(HAnimSegment1096)

HAnimJoint1087.children.append(HAnimJoint1095)

HAnimJoint1079.children.append(HAnimJoint1087)

HAnimJoint1071.children.append(HAnimJoint1079)

HAnimJoint997.children.append(HAnimJoint1071)
HAnimJoint1107 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_4")
HAnimJoint1107.name = "r_carpometacarpal_4"
HAnimJoint1107.center = [-0.2,0.835,-0.065]
HAnimJoint1107.skinCoordIndex = [249,250]
HAnimJoint1107.skinCoordWeight = [1,1]
HAnimSegment1108 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_4")
HAnimSegment1108.name = "r_metacarpal_4"
Shape1109 = x3d.Shape()
Appearance1110 = x3d.Appearance(USE="SegmentLine")

Shape1109.appearance = Appearance1110
IndexedLineSet1111 = x3d.IndexedLineSet()
IndexedLineSet1111.coordIndex = [0,1,-1]
Coordinate1112 = x3d.Coordinate()
Coordinate1112.point = [(-0.2, 0.835, -0.065),(-0.2, 0.793, -0.065)]

IndexedLineSet1111.coord = Coordinate1112

Shape1109.geometry = IndexedLineSet1111

HAnimSegment1108.children.append(Shape1109)
Transform1113 = x3d.Transform()
Transform1113.translation = [-0.2,0.835,-0.065]
Shape1114 = x3d.Shape(USE="jointbox")

Transform1113.children.append(Shape1114)

HAnimSegment1108.children.append(Transform1113)

HAnimJoint1107.children.append(HAnimSegment1108)
HAnimJoint1115 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_4")
HAnimJoint1115.name = "r_metacarpophalangeal_4"
HAnimJoint1115.center = [-0.2,0.793,-0.065]
HAnimJoint1115.skinCoordIndex = [274,275,280,281]
HAnimJoint1115.skinCoordWeight = [1,1,0.5,0.5]
HAnimSegment1116 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_4")
HAnimSegment1116.name = "r_carpal_proximal_phalanx_4"
Shape1117 = x3d.Shape()
Appearance1118 = x3d.Appearance(USE="SegmentLine")

Shape1117.appearance = Appearance1118
IndexedLineSet1119 = x3d.IndexedLineSet()
IndexedLineSet1119.coordIndex = [0,1,-1]
Coordinate1120 = x3d.Coordinate()
Coordinate1120.point = [(-0.2, 0.793, -0.065),(-0.2, 0.74, -0.065)]

IndexedLineSet1119.coord = Coordinate1120

Shape1117.geometry = IndexedLineSet1119

HAnimSegment1116.children.append(Shape1117)
Transform1121 = x3d.Transform()
Transform1121.translation = [-0.2,0.793,-0.065]
Shape1122 = x3d.Shape(USE="jointbox")

Transform1121.children.append(Shape1122)

HAnimSegment1116.children.append(Transform1121)

HAnimJoint1115.children.append(HAnimSegment1116)
HAnimJoint1123 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_4")
HAnimJoint1123.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1123.center = [-0.2,0.74,-0.065]
HAnimJoint1123.skinCoordIndex = [308,309,310,311]
HAnimJoint1123.skinCoordWeight = [1,1,1,1]
HAnimSegment1124 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_4")
HAnimSegment1124.name = "r_carpal_middle_phalanx_4"
Shape1125 = x3d.Shape()
Appearance1126 = x3d.Appearance(USE="SegmentLine")

Shape1125.appearance = Appearance1126
IndexedLineSet1127 = x3d.IndexedLineSet()
IndexedLineSet1127.coordIndex = [0,1,-1]
Coordinate1128 = x3d.Coordinate()
Coordinate1128.point = [(-0.2, 0.74, -0.065),(-0.2, 0.7177, -0.065)]

IndexedLineSet1127.coord = Coordinate1128

Shape1125.geometry = IndexedLineSet1127

HAnimSegment1124.children.append(Shape1125)
Transform1129 = x3d.Transform()
Transform1129.translation = [-0.2,0.74,-0.065]
Shape1130 = x3d.Shape(USE="jointbox")

Transform1129.children.append(Shape1130)

HAnimSegment1124.children.append(Transform1129)

HAnimJoint1123.children.append(HAnimSegment1124)
HAnimJoint1131 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_4")
HAnimJoint1131.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1131.center = [-0.2,0.7177,-0.065]
HAnimJoint1131.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint1131.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1132 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_4")
HAnimSegment1132.name = "r_carpal_distal_phalanx_4"
Shape1133 = x3d.Shape()
Appearance1134 = x3d.Appearance(USE="SegmentLine")

Shape1133.appearance = Appearance1134
IndexedLineSet1135 = x3d.IndexedLineSet()
IndexedLineSet1135.coordIndex = [0,1,-1]
Coordinate1136 = x3d.Coordinate()
Coordinate1136.point = [(-0.2, 0.7177, -0.065),(-0.2, 0.695, -0.065)]

IndexedLineSet1135.coord = Coordinate1136

Shape1133.geometry = IndexedLineSet1135

HAnimSegment1132.children.append(Shape1133)
Transform1137 = x3d.Transform()
Transform1137.translation = [-0.2,0.7177,-0.065]
Shape1138 = x3d.Shape(USE="jointbox")

Transform1137.children.append(Shape1138)

HAnimSegment1132.children.append(Transform1137)
HAnimSite1139 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_4_tip")
HAnimSite1139.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1139.translation = [-0.2,0.695,-0.065]
Shape1140 = x3d.Shape(USE="sitebox")

HAnimSite1139.children.append(Shape1140)

HAnimSegment1132.children.append(HAnimSite1139)

HAnimJoint1131.children.append(HAnimSegment1132)

HAnimJoint1123.children.append(HAnimJoint1131)

HAnimJoint1115.children.append(HAnimJoint1123)

HAnimJoint1107.children.append(HAnimJoint1115)

HAnimJoint997.children.append(HAnimJoint1107)
HAnimJoint1141 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_5")
HAnimJoint1141.name = "r_carpometacarpal_5"
HAnimJoint1141.center = [-0.2,0.84,-0.085]
HAnimJoint1141.skinCoordIndex = [251,252,253,281]
HAnimJoint1141.skinCoordWeight = [1,1,1,0.5]
HAnimSegment1142 = x3d.HAnimSegment(DEF="Joe_r_metacarpal_5")
HAnimSegment1142.name = "r_metacarpal_5"
Shape1143 = x3d.Shape()
Appearance1144 = x3d.Appearance(USE="SegmentLine")

Shape1143.appearance = Appearance1144
IndexedLineSet1145 = x3d.IndexedLineSet()
IndexedLineSet1145.coordIndex = [0,1,-1]
Coordinate1146 = x3d.Coordinate()
Coordinate1146.point = [(-0.2, 0.84, -0.085),(-0.2, 0.79, -0.085)]

IndexedLineSet1145.coord = Coordinate1146

Shape1143.geometry = IndexedLineSet1145

HAnimSegment1142.children.append(Shape1143)
Transform1147 = x3d.Transform()
Transform1147.translation = [-0.2,0.84,-0.085]
Shape1148 = x3d.Shape(USE="jointbox")

Transform1147.children.append(Shape1148)

HAnimSegment1142.children.append(Transform1147)
HAnimSite1149 = x3d.HAnimSite(DEF="Joe_r_metacarpal_phalanx_5_pt")
HAnimSite1149.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1149.translation = [-0.2,0.79,-0.095]
Shape1150 = x3d.Shape(USE="sitebox")

HAnimSite1149.children.append(Shape1150)

HAnimSegment1142.children.append(HAnimSite1149)

HAnimJoint1141.children.append(HAnimSegment1142)
HAnimJoint1151 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_5")
HAnimJoint1151.name = "r_metacarpophalangeal_5"
HAnimJoint1151.center = [-0.2,0.79,-0.085]
HAnimJoint1151.skinCoordIndex = [276,277,278]
HAnimJoint1151.skinCoordWeight = [1,1,1]
HAnimSegment1152 = x3d.HAnimSegment(DEF="Joe_r_carpal_proximal_phalanx_5")
HAnimSegment1152.name = "r_carpal_proximal_phalanx_5"
Shape1153 = x3d.Shape()
Appearance1154 = x3d.Appearance(USE="SegmentLine")

Shape1153.appearance = Appearance1154
IndexedLineSet1155 = x3d.IndexedLineSet()
IndexedLineSet1155.coordIndex = [0,1,-1]
Coordinate1156 = x3d.Coordinate()
Coordinate1156.point = [(-0.2, 0.79, -0.085),(-0.2, 0.755, -0.085)]

IndexedLineSet1155.coord = Coordinate1156

Shape1153.geometry = IndexedLineSet1155

HAnimSegment1152.children.append(Shape1153)
Transform1157 = x3d.Transform()
Transform1157.translation = [-0.2,0.79,-0.085]
Shape1158 = x3d.Shape(USE="jointbox")

Transform1157.children.append(Shape1158)

HAnimSegment1152.children.append(Transform1157)

HAnimJoint1151.children.append(HAnimSegment1152)
HAnimJoint1159 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_5")
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1159.center = [-0.2,0.755,-0.085]
HAnimJoint1159.skinCoordIndex = [321,322,323,324]
HAnimJoint1159.skinCoordWeight = [1,1,1,1]
HAnimSegment1160 = x3d.HAnimSegment(DEF="Joe_r_carpal_middle_phalanx_5")
HAnimSegment1160.name = "r_carpal_middle_phalanx_5"
Shape1161 = x3d.Shape()
Appearance1162 = x3d.Appearance(USE="SegmentLine")

Shape1161.appearance = Appearance1162
IndexedLineSet1163 = x3d.IndexedLineSet()
IndexedLineSet1163.coordIndex = [0,1,-1]
Coordinate1164 = x3d.Coordinate()
Coordinate1164.point = [(-0.2, 0.755, -0.085),(-0.2, 0.735, -0.085)]

IndexedLineSet1163.coord = Coordinate1164

Shape1161.geometry = IndexedLineSet1163

HAnimSegment1160.children.append(Shape1161)
Transform1165 = x3d.Transform()
Transform1165.translation = [-0.2,0.755,-0.085]
Shape1166 = x3d.Shape(USE="jointbox")

Transform1165.children.append(Shape1166)

HAnimSegment1160.children.append(Transform1165)

HAnimJoint1159.children.append(HAnimSegment1160)
HAnimJoint1167 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_5")
HAnimJoint1167.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1167.center = [-0.2,0.735,-0.09]
HAnimJoint1167.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint1167.skinCoordWeight = [1,1,1,1,1,1,1,1,1]
HAnimSegment1168 = x3d.HAnimSegment(DEF="Joe_r_carpal_distal_phalanx_5")
HAnimSegment1168.name = "r_carpal_distal_phalanx_5"
Shape1169 = x3d.Shape()
Appearance1170 = x3d.Appearance(USE="SegmentLine")

Shape1169.appearance = Appearance1170
IndexedLineSet1171 = x3d.IndexedLineSet()
IndexedLineSet1171.coordIndex = [0,1,-1]
Coordinate1172 = x3d.Coordinate()
Coordinate1172.point = [(-0.2, 0.735, -0.085),(-0.2, 0.72, -0.085)]

IndexedLineSet1171.coord = Coordinate1172

Shape1169.geometry = IndexedLineSet1171

HAnimSegment1168.children.append(Shape1169)
Transform1173 = x3d.Transform()
Transform1173.translation = [-0.2,0.735,-0.085]
Shape1174 = x3d.Shape(USE="jointbox")

Transform1173.children.append(Shape1174)

HAnimSegment1168.children.append(Transform1173)
HAnimSite1175 = x3d.HAnimSite(DEF="Joe_r_carpal_distal_phalanx_5_tip")
HAnimSite1175.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1175.translation = [-0.2,0.72,-0.085]
Shape1176 = x3d.Shape(USE="sitebox")

HAnimSite1175.children.append(Shape1176)

HAnimSegment1168.children.append(HAnimSite1175)

HAnimJoint1167.children.append(HAnimSegment1168)

HAnimJoint1159.children.append(HAnimJoint1167)

HAnimJoint1151.children.append(HAnimJoint1159)

HAnimJoint1141.children.append(HAnimJoint1151)

HAnimJoint997.children.append(HAnimJoint1141)

HAnimJoint975.children.append(HAnimJoint997)

HAnimJoint945.children.append(HAnimJoint975)

HAnimJoint929.children.append(HAnimJoint945)

HAnimJoint919.children.append(HAnimJoint929)

HAnimJoint553.children.append(HAnimJoint919)

HAnimJoint545.children.append(HAnimJoint553)

HAnimJoint537.children.append(HAnimJoint545)

HAnimJoint527.children.append(HAnimJoint537)

HAnimJoint519.children.append(HAnimJoint527)

HAnimJoint511.children.append(HAnimJoint519)

HAnimJoint503.children.append(HAnimJoint511)

HAnimJoint495.children.append(HAnimJoint503)

HAnimJoint483.children.append(HAnimJoint495)

HAnimJoint473.children.append(HAnimJoint483)

HAnimJoint465.children.append(HAnimJoint473)

HAnimJoint457.children.append(HAnimJoint465)

HAnimJoint449.children.append(HAnimJoint457)

HAnimJoint423.children.append(HAnimJoint449)

HAnimJoint415.children.append(HAnimJoint423)

HAnimJoint407.children.append(HAnimJoint415)

HAnimJoint392.children.append(HAnimJoint407)

HAnimJoint78.children.append(HAnimJoint392)

HAnimHumanoid75.skeleton.append(HAnimJoint78)
Shape1177 = x3d.Shape(DEF="SkinShape")
Appearance1178 = x3d.Appearance(DEF="SkinAppearance")
Material1179 = x3d.Material(DEF="SkinMaterial")
Material1179.ambientIntensity = 0.6
Material1179.diffuseColor = [1,1,1]
Material1179.shininess = 0.6
Material1179.transparency = 0.2

Appearance1178.material = Material1179
ImageTexture1180 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture1180.description = "Blue Spiral Pattern"
ImageTexture1180.url = ["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1178.texture = ImageTexture1180

Shape1177.appearance = Appearance1178
IndexedFaceSet1181 = x3d.IndexedFaceSet()
IndexedFaceSet1181.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet1181.creaseAngle = 3.1
Color1182 = x3d.Color()
Color1182.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1181.color = Color1182
Coordinate1183 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate1183.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.0723, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

IndexedFaceSet1181.coord = Coordinate1183

Shape1177.geometry = IndexedFaceSet1181

HAnimHumanoid75.skin.append(Shape1177)
Coordinate1184 = x3d.Coordinate(USE="TheSkinCoord")

HAnimHumanoid75.skinCoord = Coordinate1184
HAnimJoint1185 = x3d.HAnimJoint(USE="Joe_humanoid_root")

HAnimHumanoid75.joints.append(HAnimJoint1185)
HAnimJoint1186 = x3d.HAnimJoint(USE="Joe_sacroiliac")

HAnimHumanoid75.joints.append(HAnimJoint1186)
HAnimJoint1187 = x3d.HAnimJoint(USE="Joe_vl5")

HAnimHumanoid75.joints.append(HAnimJoint1187)
HAnimJoint1188 = x3d.HAnimJoint(USE="Joe_vl4")

HAnimHumanoid75.joints.append(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint(USE="Joe_vl3")

HAnimHumanoid75.joints.append(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint(USE="Joe_vl2")

HAnimHumanoid75.joints.append(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint(USE="Joe_vl1")

HAnimHumanoid75.joints.append(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint(USE="Joe_vt12")

HAnimHumanoid75.joints.append(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint(USE="Joe_vt11")

HAnimHumanoid75.joints.append(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint(USE="Joe_vt10")

HAnimHumanoid75.joints.append(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint(USE="Joe_vt9")

HAnimHumanoid75.joints.append(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint(USE="Joe_vt8")

HAnimHumanoid75.joints.append(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint(USE="Joe_vt7")

HAnimHumanoid75.joints.append(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint(USE="Joe_vt6")

HAnimHumanoid75.joints.append(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint(USE="Joe_vt5")

HAnimHumanoid75.joints.append(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint(USE="Joe_vt4")

HAnimHumanoid75.joints.append(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint(USE="Joe_vt3")

HAnimHumanoid75.joints.append(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint(USE="Joe_vt2")

HAnimHumanoid75.joints.append(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint(USE="Joe_vt1")

HAnimHumanoid75.joints.append(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint(USE="Joe_vc7")

HAnimHumanoid75.joints.append(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint(USE="Joe_vc6")

HAnimHumanoid75.joints.append(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint(USE="Joe_vc5")

HAnimHumanoid75.joints.append(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint(USE="Joe_vc4")

HAnimHumanoid75.joints.append(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint(USE="Joe_vc3")

HAnimHumanoid75.joints.append(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint(USE="Joe_vc2")

HAnimHumanoid75.joints.append(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint(USE="Joe_vc1")

HAnimHumanoid75.joints.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint(USE="Joe_skullbase")

HAnimHumanoid75.joints.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint(USE="Joe_l_acromioclavicular")

HAnimHumanoid75.joints.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint(USE="Joe_r_acromioclavicular")

HAnimHumanoid75.joints.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint(USE="Joe_l_carpal_interphalangeal_1")

HAnimHumanoid75.joints.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint(USE="Joe_r_carpal_interphalangeal_1")

HAnimHumanoid75.joints.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_1")

HAnimHumanoid75.joints.append(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_1")

HAnimHumanoid75.joints.append(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_2")

HAnimHumanoid75.joints.append(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_2")

HAnimHumanoid75.joints.append(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_3")

HAnimHumanoid75.joints.append(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_3")

HAnimHumanoid75.joints.append(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_4")

HAnimHumanoid75.joints.append(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_4")

HAnimHumanoid75.joints.append(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_5")

HAnimHumanoid75.joints.append(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_5")

HAnimHumanoid75.joints.append(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint(USE="Joe_l_elbow")

HAnimHumanoid75.joints.append(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint(USE="Joe_r_elbow")

HAnimHumanoid75.joints.append(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint(USE="Joe_l_eyeball_joint")

HAnimHumanoid75.joints.append(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint(USE="Joe_r_eyeball_joint")

HAnimHumanoid75.joints.append(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint(USE="Joe_l_hip")

HAnimHumanoid75.joints.append(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint(USE="Joe_r_hip")

HAnimHumanoid75.joints.append(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint(USE="Joe_l_knee")

HAnimHumanoid75.joints.append(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint(USE="Joe_r_knee")

HAnimHumanoid75.joints.append(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_1")

HAnimHumanoid75.joints.append(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_1")

HAnimHumanoid75.joints.append(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_3")

HAnimHumanoid75.joints.append(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_4")

HAnimHumanoid75.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_5")

HAnimHumanoid75.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint(USE="Joe_l_metatarsal")

HAnimHumanoid75.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint(USE="Joe_l_metatarsophalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint(USE="Joe_r_metatarsophalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint(USE="Joe_l_radiocarpal")

HAnimHumanoid75.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint(USE="Joe_r_radiocarpal")

HAnimHumanoid75.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint(USE="Joe_l_shoulder")

HAnimHumanoid75.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint(USE="Joe_r_shoulder")

HAnimHumanoid75.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint(USE="Joe_l_sternoclavicular")

HAnimHumanoid75.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint(USE="Joe_r_sternoclavicular")

HAnimHumanoid75.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint(USE="Joe_l_talocrural")

HAnimHumanoid75.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint(USE="Joe_r_talocrural")

HAnimHumanoid75.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint(USE="Joe_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid75.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint(USE="Joe_l_tarsometatarsal_2")

HAnimHumanoid75.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint(USE="Joe_r_tarsometatarsal_2")

HAnimHumanoid75.joints.append(HAnimJoint1273)
HAnimSegment1274 = x3d.HAnimSegment(USE="Joe_c1")

HAnimHumanoid75.segments.append(HAnimSegment1274)
HAnimSegment1275 = x3d.HAnimSegment(USE="Joe_c2")

HAnimHumanoid75.segments.append(HAnimSegment1275)
HAnimSegment1276 = x3d.HAnimSegment(USE="Joe_c3")

HAnimHumanoid75.segments.append(HAnimSegment1276)
HAnimSegment1277 = x3d.HAnimSegment(USE="Joe_c4")

HAnimHumanoid75.segments.append(HAnimSegment1277)
HAnimSegment1278 = x3d.HAnimSegment(USE="Joe_c5")

HAnimHumanoid75.segments.append(HAnimSegment1278)
HAnimSegment1279 = x3d.HAnimSegment(USE="Joe_c6")

HAnimHumanoid75.segments.append(HAnimSegment1279)
HAnimSegment1280 = x3d.HAnimSegment(USE="Joe_c7")

HAnimHumanoid75.segments.append(HAnimSegment1280)
HAnimSegment1281 = x3d.HAnimSegment(USE="Joe_l1")

HAnimHumanoid75.segments.append(HAnimSegment1281)
HAnimSegment1282 = x3d.HAnimSegment(USE="Joe_l2")

HAnimHumanoid75.segments.append(HAnimSegment1282)
HAnimSegment1283 = x3d.HAnimSegment(USE="Joe_l3")

HAnimHumanoid75.segments.append(HAnimSegment1283)
HAnimSegment1284 = x3d.HAnimSegment(USE="Joe_l4")

HAnimHumanoid75.segments.append(HAnimSegment1284)
HAnimSegment1285 = x3d.HAnimSegment(USE="Joe_l5")

HAnimHumanoid75.segments.append(HAnimSegment1285)
HAnimSegment1286 = x3d.HAnimSegment(USE="Joe_pelvis")

HAnimHumanoid75.segments.append(HAnimSegment1286)
HAnimSegment1287 = x3d.HAnimSegment(USE="Joe_sacrum")

HAnimHumanoid75.segments.append(HAnimSegment1287)
HAnimSegment1288 = x3d.HAnimSegment(USE="Joe_skull")

HAnimHumanoid75.segments.append(HAnimSegment1288)
HAnimSegment1289 = x3d.HAnimSegment(USE="Joe_t1")

HAnimHumanoid75.segments.append(HAnimSegment1289)
HAnimSegment1290 = x3d.HAnimSegment(USE="Joe_t10")

HAnimHumanoid75.segments.append(HAnimSegment1290)
HAnimSegment1291 = x3d.HAnimSegment(USE="Joe_t11")

HAnimHumanoid75.segments.append(HAnimSegment1291)
HAnimSegment1292 = x3d.HAnimSegment(USE="Joe_t12")

HAnimHumanoid75.segments.append(HAnimSegment1292)
HAnimSegment1293 = x3d.HAnimSegment(USE="Joe_t2")

HAnimHumanoid75.segments.append(HAnimSegment1293)
HAnimSegment1294 = x3d.HAnimSegment(USE="Joe_t3")

HAnimHumanoid75.segments.append(HAnimSegment1294)
HAnimSegment1295 = x3d.HAnimSegment(USE="Joe_t4")

HAnimHumanoid75.segments.append(HAnimSegment1295)
HAnimSegment1296 = x3d.HAnimSegment(USE="Joe_t5")

HAnimHumanoid75.segments.append(HAnimSegment1296)
HAnimSegment1297 = x3d.HAnimSegment(USE="Joe_t6")

HAnimHumanoid75.segments.append(HAnimSegment1297)
HAnimSegment1298 = x3d.HAnimSegment(USE="Joe_t7")

HAnimHumanoid75.segments.append(HAnimSegment1298)
HAnimSegment1299 = x3d.HAnimSegment(USE="Joe_t8")

HAnimHumanoid75.segments.append(HAnimSegment1299)
HAnimSegment1300 = x3d.HAnimSegment(USE="Joe_t9")

HAnimHumanoid75.segments.append(HAnimSegment1300)
HAnimSegment1301 = x3d.HAnimSegment(USE="Joe_toPelvis")

HAnimHumanoid75.segments.append(HAnimSegment1301)
HAnimSegment1302 = x3d.HAnimSegment(USE="Joe_l_calf")

HAnimHumanoid75.segments.append(HAnimSegment1302)
HAnimSegment1303 = x3d.HAnimSegment(USE="Joe_r_calf")

HAnimHumanoid75.segments.append(HAnimSegment1303)
HAnimSegment1304 = x3d.HAnimSegment(USE="Joe_l_carpal")

HAnimHumanoid75.segments.append(HAnimSegment1304)
HAnimSegment1305 = x3d.HAnimSegment(USE="Joe_r_carpal")

HAnimHumanoid75.segments.append(HAnimSegment1305)
HAnimSegment1306 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_1")

HAnimHumanoid75.segments.append(HAnimSegment1306)
HAnimSegment1307 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_1")

HAnimHumanoid75.segments.append(HAnimSegment1307)
HAnimSegment1308 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1308)
HAnimSegment1309 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1309)
HAnimSegment1310 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1310)
HAnimSegment1311 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1311)
HAnimSegment1312 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1312)
HAnimSegment1313 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1313)
HAnimSegment1314 = x3d.HAnimSegment(USE="Joe_l_carpal_distal_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1314)
HAnimSegment1315 = x3d.HAnimSegment(USE="Joe_r_carpal_distal_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1315)
HAnimSegment1316 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1316)
HAnimSegment1317 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1317)
HAnimSegment1318 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1318)
HAnimSegment1319 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1319)
HAnimSegment1320 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1320)
HAnimSegment1321 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1321)
HAnimSegment1322 = x3d.HAnimSegment(USE="Joe_l_carpal_middle_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1322)
HAnimSegment1323 = x3d.HAnimSegment(USE="Joe_r_carpal_middle_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1323)
HAnimSegment1324 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_1")

HAnimHumanoid75.segments.append(HAnimSegment1324)
HAnimSegment1325 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_1")

HAnimHumanoid75.segments.append(HAnimSegment1325)
HAnimSegment1326 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1326)
HAnimSegment1327 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1327)
HAnimSegment1328 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1328)
HAnimSegment1329 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_3")

HAnimHumanoid75.segments.append(HAnimSegment1329)
HAnimSegment1330 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1330)
HAnimSegment1331 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_4")

HAnimHumanoid75.segments.append(HAnimSegment1331)
HAnimSegment1332 = x3d.HAnimSegment(USE="Joe_l_carpal_proximal_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1332)
HAnimSegment1333 = x3d.HAnimSegment(USE="Joe_r_carpal_proximal_phalanx_5")

HAnimHumanoid75.segments.append(HAnimSegment1333)
HAnimSegment1334 = x3d.HAnimSegment(USE="Joe_l_clavicle")

HAnimHumanoid75.segments.append(HAnimSegment1334)
HAnimSegment1335 = x3d.HAnimSegment(USE="Joe_r_clavicle")

HAnimHumanoid75.segments.append(HAnimSegment1335)
HAnimSegment1336 = x3d.HAnimSegment(USE="Joe_l_eyeball")

HAnimHumanoid75.segments.append(HAnimSegment1336)
HAnimSegment1337 = x3d.HAnimSegment(USE="Joe_r_eyeball")

HAnimHumanoid75.segments.append(HAnimSegment1337)
HAnimSegment1338 = x3d.HAnimSegment(USE="Joe_l_forearm")

HAnimHumanoid75.segments.append(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment(USE="Joe_r_forearm")

HAnimHumanoid75.segments.append(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment(USE="Joe_l_metacarpal_1")

HAnimHumanoid75.segments.append(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment(USE="Joe_r_metacarpal_1")

HAnimHumanoid75.segments.append(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment(USE="Joe_l_metacarpal_2")

HAnimHumanoid75.segments.append(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment(USE="Joe_r_metacarpal_2")

HAnimHumanoid75.segments.append(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment(USE="Joe_l_metacarpal_3")

HAnimHumanoid75.segments.append(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment(USE="Joe_r_metacarpal_3")

HAnimHumanoid75.segments.append(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment(USE="Joe_l_metacarpal_4")

HAnimHumanoid75.segments.append(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment(USE="Joe_r_metacarpal_4")

HAnimHumanoid75.segments.append(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment(USE="Joe_l_metacarpal_5")

HAnimHumanoid75.segments.append(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment(USE="Joe_r_metacarpal_5")

HAnimHumanoid75.segments.append(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment(USE="Joe_l_metatarsal_2")

HAnimHumanoid75.segments.append(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment(USE="Joe_r_metatarsal_2")

HAnimHumanoid75.segments.append(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment(USE="Joe_l_scapula")

HAnimHumanoid75.segments.append(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment(USE="Joe_r_scapula")

HAnimHumanoid75.segments.append(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment(USE="Joe_l_talus")

HAnimHumanoid75.segments.append(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment(USE="Joe_r_talus")

HAnimHumanoid75.segments.append(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment(USE="Joe_l_tarsal_distal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment(USE="Joe_r_tarsal_distal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment(USE="Joe_l_tarsal_proximal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment(USE="Joe_r_tarsal_proximal_phalanx_2")

HAnimHumanoid75.segments.append(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment(USE="Joe_l_thigh")

HAnimHumanoid75.segments.append(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment(USE="Joe_r_thigh")

HAnimHumanoid75.segments.append(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment(USE="Joe_l_upperarm")

HAnimHumanoid75.segments.append(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment(USE="Joe_r_upperarm")

HAnimHumanoid75.segments.append(HAnimSegment1363)
HAnimSite1364 = x3d.HAnimSite(USE="Joe_cervicale_pt")

HAnimHumanoid75.sites.append(HAnimSite1364)
HAnimSite1365 = x3d.HAnimSite(USE="Joe_crotch_pt")

HAnimHumanoid75.sites.append(HAnimSite1365)
HAnimSite1366 = x3d.HAnimSite(USE="Joe_floormarker_pt")

HAnimHumanoid75.sites.append(HAnimSite1366)
HAnimSite1367 = x3d.HAnimSite(USE="Joe_navel_pt")

HAnimHumanoid75.sites.append(HAnimSite1367)
HAnimSite1368 = x3d.HAnimSite(USE="Joe_nuchale_pt")

HAnimHumanoid75.sites.append(HAnimSite1368)
HAnimSite1369 = x3d.HAnimSite(USE="Joe_rib10_midspine_pt")

HAnimHumanoid75.sites.append(HAnimSite1369)
HAnimSite1370 = x3d.HAnimSite(USE="Joe_sellion_pt")

HAnimHumanoid75.sites.append(HAnimSite1370)
HAnimSite1371 = x3d.HAnimSite(USE="Joe_skull_vertex_tip")

HAnimHumanoid75.sites.append(HAnimSite1371)
HAnimSite1372 = x3d.HAnimSite(USE="Joe_substernale_pt")

HAnimHumanoid75.sites.append(HAnimSite1372)
HAnimSite1373 = x3d.HAnimSite(USE="Joe_supramenton_pt")

HAnimHumanoid75.sites.append(HAnimSite1373)
HAnimSite1374 = x3d.HAnimSite(USE="Joe_suprasternale_pt")

HAnimHumanoid75.sites.append(HAnimSite1374)
HAnimSite1375 = x3d.HAnimSite(USE="Joe_waist_preferred_posterior_pt")

HAnimHumanoid75.sites.append(HAnimSite1375)
HAnimSite1376 = x3d.HAnimSite(USE="Joe_l_acromion_pt")

HAnimHumanoid75.sites.append(HAnimSite1376)
HAnimSite1377 = x3d.HAnimSite(USE="Joe_r_acromion_pt")

HAnimHumanoid75.sites.append(HAnimSite1377)
HAnimSite1378 = x3d.HAnimSite(USE="Joe_l_asis_pt")

HAnimHumanoid75.sites.append(HAnimSite1378)
HAnimSite1379 = x3d.HAnimSite(USE="Joe_r_asis_pt")

HAnimHumanoid75.sites.append(HAnimSite1379)
HAnimSite1380 = x3d.HAnimSite(USE="Joe_l_axilla_distal_pt")

HAnimHumanoid75.sites.append(HAnimSite1380)
HAnimSite1381 = x3d.HAnimSite(USE="Joe_r_axilla_distal_pt")

HAnimHumanoid75.sites.append(HAnimSite1381)
HAnimSite1382 = x3d.HAnimSite(USE="Joe_l_axilla_proximal_pt")

HAnimHumanoid75.sites.append(HAnimSite1382)
HAnimSite1383 = x3d.HAnimSite(USE="Joe_r_axilla_proximal_pt")

HAnimHumanoid75.sites.append(HAnimSite1383)
HAnimSite1384 = x3d.HAnimSite(USE="Joe_l_calcaneus_posterior_pt")

HAnimHumanoid75.sites.append(HAnimSite1384)
HAnimSite1385 = x3d.HAnimSite(USE="Joe_r_calcaneus_posterior_pt")

HAnimHumanoid75.sites.append(HAnimSite1385)
HAnimSite1386 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid75.sites.append(HAnimSite1386)
HAnimSite1387 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid75.sites.append(HAnimSite1387)
HAnimSite1388 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid75.sites.append(HAnimSite1388)
HAnimSite1389 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid75.sites.append(HAnimSite1389)
HAnimSite1390 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid75.sites.append(HAnimSite1390)
HAnimSite1391 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid75.sites.append(HAnimSite1391)
HAnimSite1392 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid75.sites.append(HAnimSite1392)
HAnimSite1393 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid75.sites.append(HAnimSite1393)
HAnimSite1394 = x3d.HAnimSite(USE="Joe_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid75.sites.append(HAnimSite1394)
HAnimSite1395 = x3d.HAnimSite(USE="Joe_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid75.sites.append(HAnimSite1395)
HAnimSite1396 = x3d.HAnimSite(USE="Joe_l_clavicle_pt")

HAnimHumanoid75.sites.append(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite(USE="Joe_r_clavicle_pt")

HAnimHumanoid75.sites.append(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite(USE="Joe_l_dactylion_pt")

HAnimHumanoid75.sites.append(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite(USE="Joe_r_dactylion_pt")

HAnimHumanoid75.sites.append(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite(USE="Joe_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite(USE="Joe_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite(USE="Joe_l_femoral_medial_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite(USE="Joe_r_femoral_medial_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite(USE="Joe_l_gonion_pt")

HAnimHumanoid75.sites.append(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite(USE="Joe_r_gonion_pt")

HAnimHumanoid75.sites.append(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite(USE="Joe_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite(USE="Joe_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite(USE="Joe_l_humeral_medial_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite(USE="Joe_r_humeral_medial_epicondyle_pt")

HAnimHumanoid75.sites.append(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite(USE="Joe_l_iliocristale_pt")

HAnimHumanoid75.sites.append(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite(USE="Joe_r_iliocristale_pt")

HAnimHumanoid75.sites.append(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite(USE="Joe_l_infraorbitale_pt")

HAnimHumanoid75.sites.append(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite(USE="Joe_r_infraorbitale_pt")

HAnimHumanoid75.sites.append(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite(USE="Joe_l_knee_crease_pt")

HAnimHumanoid75.sites.append(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite(USE="Joe_r_knee_crease_pt")

HAnimHumanoid75.sites.append(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite(USE="Joe_l_lateral_malleolus_pt")

HAnimHumanoid75.sites.append(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite(USE="Joe_r_lateral_malleolus_pt")

HAnimHumanoid75.sites.append(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite(USE="Joe_l_medial_malleolus_pt")

HAnimHumanoid75.sites.append(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite(USE="Joe_r_medial_malleolus_pt")

HAnimHumanoid75.sites.append(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite(USE="Joe_l_metacarpal_phalanx_2_pt")

HAnimHumanoid75.sites.append(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite(USE="Joe_r_metacarpal_phalanx_2_pt")

HAnimHumanoid75.sites.append(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite(USE="Joe_l_metacarpal_phalanx_5_pt")

HAnimHumanoid75.sites.append(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite(USE="Joe_r_metacarpal_phalanx_5_pt")

HAnimHumanoid75.sites.append(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite(USE="Joe_l_metatarsal_phalanx_1_pt")

HAnimHumanoid75.sites.append(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite(USE="Joe_r_metatarsal_phalanx_1_pt")

HAnimHumanoid75.sites.append(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite(USE="Joe_l_metatarsal_phalanx_5_pt")

HAnimHumanoid75.sites.append(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite(USE="Joe_r_metatarsal_phalanx_5_pt")

HAnimHumanoid75.sites.append(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite(USE="Joe_l_neck_base_pt")

HAnimHumanoid75.sites.append(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite(USE="Joe_r_neck_base_pt")

HAnimHumanoid75.sites.append(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite(USE="Joe_l_olecranon_pt")

HAnimHumanoid75.sites.append(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite(USE="Joe_r_olecranon_pt")

HAnimHumanoid75.sites.append(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite(USE="Joe_l_psis_pt")

HAnimHumanoid75.sites.append(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite(USE="Joe_r_psis_pt")

HAnimHumanoid75.sites.append(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite(USE="Joe_l_radial_styloid_pt")

HAnimHumanoid75.sites.append(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite(USE="Joe_r_radial_styloid_pt")

HAnimHumanoid75.sites.append(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite(USE="Joe_l_radiale_pt")

HAnimHumanoid75.sites.append(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite(USE="Joe_r_radiale_pt")

HAnimHumanoid75.sites.append(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite(USE="Joe_l_rib10_pt")

HAnimHumanoid75.sites.append(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite(USE="Joe_r_rib10_pt")

HAnimHumanoid75.sites.append(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite(USE="Joe_l_sphyrion_pt")

HAnimHumanoid75.sites.append(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite(USE="Joe_r_sphyrion_pt")

HAnimHumanoid75.sites.append(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite(USE="Joe_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid75.sites.append(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite(USE="Joe_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid75.sites.append(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite(USE="Joe_l_thelion_pt")

HAnimHumanoid75.sites.append(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite(USE="Joe_r_thelion_pt")

HAnimHumanoid75.sites.append(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite(USE="Joe_l_tragion_pt")

HAnimHumanoid75.sites.append(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite(USE="Joe_r_tragion_pt")

HAnimHumanoid75.sites.append(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite(USE="Joe_l_trochanterion_pt")

HAnimHumanoid75.sites.append(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite(USE="Joe_r_trochanterion_pt")

HAnimHumanoid75.sites.append(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite(USE="Joe_l_ulnar_styloid_pt")

HAnimHumanoid75.sites.append(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite(USE="Joe_r_ulnar_styloid_pt")

HAnimHumanoid75.sites.append(HAnimSite1451)

Group74.children.append(HAnimHumanoid75)

Group73.children.append(Group74)

Scene32.children.append(Group73)
Scene32.children.append(x3d.Comment("""expected best practice: EXPORT AS='fileName' for clarity"""))
EXPORT1452 = x3d.EXPORT()
EXPORT1452.AS = "JoeSkeletonSkinSite"
EXPORT1452.localDEF = "Joe_Human"

Scene32.children.append(EXPORT1452)

X3D0.Scene = Scene32
f = open("../data/JoeSkeletonSkinSite.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeSkeletonSkinSite.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeSkeletonSkinSite.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

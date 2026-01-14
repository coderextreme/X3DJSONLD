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
meta3.content = "HAnimSpecificationLOA3Illustrated.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "reference"
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "reference"
meta6.content = "HAnimSpecificationLOA3Invisible.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "HAnimSpecificationLOA3Animation.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "HAnimSpecificationExampleChangeLog.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "created"
meta16.content = "24 April 2013"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "modified"
meta17.content = "Tue, 09 Sep 2025 19:39:08 GMT"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "error"
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "creator"
meta19.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "HAnimSpecificationLOA3Illustrated.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "HAnimSpecificationLOA3IllustratedLeftSide.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "Image"
meta23.content = "images/BonesAllSkeletonFrontViewLOA2.png"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "Image"
meta24.content = "images/BonesAllSkeletonFrontViewLOA3.png"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "TODO"
meta25.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "TODO"
meta26.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "warning"
meta27.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "translator"
meta28.content = "Don Brutzman and Joe Williams"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "generator"
meta29.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "generator"
meta30.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta30)

X3D0.head = head1
Scene31 = x3d.Scene()
Background32 = x3d.Background()
Background32.skyColor = [(0.3, 0.3, 0.3)]

Scene31.children.append(Background32)
NavigationInfo33 = x3d.NavigationInfo()

Scene31.children.append(NavigationInfo33)
Group34 = x3d.Group()
Group34.DEF = "Original_WorldInfo"
WorldInfo35 = x3d.WorldInfo()
WorldInfo35.title = "HANIM 200x Default Joint Centers, LOA3"
WorldInfo35.info = [" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]

Group34.children.append(WorldInfo35)

Scene31.children.append(Group34)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.description = "Humanoid LOA 3 Front"
Viewpoint36.position = [0,0.4,4]
Viewpoint36.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Humanoid LOA 3 Front Close"
Viewpoint37.position = [0,0.8,2]
Viewpoint37.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "Humanoid LOA 3 Front Closer"
Viewpoint38.position = [0,1.2,1]
Viewpoint38.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Humanoid LOA 3 Front Face"
Viewpoint39.position = [0,1.63,1]
Viewpoint39.centerOfRotation = [0,1.5,0.0016]

Scene31.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Humanoid LOA 3 Right Side"
Viewpoint40.position = [2.6,0.8,0]
Viewpoint40.orientation = [0,1,0,1.5708]
Viewpoint40.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "Humanoid LOA 3 Right Side Close"
Viewpoint41.position = [1,0.8,0.5]
Viewpoint41.orientation = [0,1,0,1.2]
Viewpoint41.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "Humanoid LOA 3 Left Side Close"
Viewpoint42.position = [-1,0.8,0.5]
Viewpoint42.orientation = [0,1,0,-1.2]
Viewpoint42.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.description = "Humanoid LOA 3 Left Side"
Viewpoint43.position = [-2.6,0.8,0]
Viewpoint43.orientation = [0,1,0,-1.5708]
Viewpoint43.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "Humanoid LOA 3 Top"
Viewpoint44.position = [0,3.5,0]
Viewpoint44.orientation = [1,0,0,-1.5708]
Viewpoint44.centerOfRotation = [0,0.9149,0.0016]

Scene31.children.append(Viewpoint44)
HAnimHumanoid45 = x3d.HAnimHumanoid()
HAnimHumanoid45.DEF = "hanim_humanoid"
HAnimHumanoid45.name = "humanoid"
HAnimHumanoid45.info = ["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]
HAnimHumanoid45.version = "1.0"
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.DEF = "hanim_humanoid_root"
HAnimJoint46.name = "humanoid_root"
HAnimJoint46.center = [0,0.824,0.0277]
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.DEF = "hanim_sacrum"
HAnimSegment47.name = "sacrum"
TouchSensor48 = x3d.TouchSensor()
TouchSensor48.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum"

HAnimSegment47.children.append(TouchSensor48)
Transform49 = x3d.Transform()
Transform49.translation = [0,0.824,0.0277]
Shape50 = x3d.Shape()
Shape50.DEF = "HAnimJointShape"
Appearance51 = x3d.Appearance()
Appearance51.DEF = "HAnimJointAppearance"
Material52 = x3d.Material()
Material52.diffuseColor = [1,0.5,0]
Material52.transparency = 0.5

Appearance51.material = Material52

Shape50.appearance = Appearance51
Sphere53 = x3d.Sphere()
Sphere53.radius = 0.006

Shape50.geometry = Sphere53

Transform49.children.append(Shape50)

HAnimSegment47.children.append(Transform49)
Shape54 = x3d.Shape()
LineSet55 = x3d.LineSet()
LineSet55.vertexCount = [2]
ColorRGBA56 = x3d.ColorRGBA()
ColorRGBA56.DEF = "HAnimSegmentLineColorRGBA"
ColorRGBA56.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet55.color = ColorRGBA56
Coordinate57 = x3d.Coordinate()
Coordinate57.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet55.coord = Coordinate57

Shape54.geometry = LineSet55

HAnimSegment47.children.append(Shape54)
Shape58 = x3d.Shape()
LineSet59 = x3d.LineSet()
LineSet59.vertexCount = [2]
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA"

LineSet59.color = ColorRGBA60
Coordinate61 = x3d.Coordinate()
Coordinate61.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet59.coord = Coordinate61

Shape58.geometry = LineSet59

HAnimSegment47.children.append(Shape58)

HAnimJoint46.children.append(HAnimSegment47)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.DEF = "hanim_sacroiliac"
HAnimJoint62.name = "sacroiliac"
HAnimJoint62.center = [0,0.9149,0.0016]
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.DEF = "hanim_pelvis"
HAnimSegment63.name = "pelvis"
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.description = "HAnimJoint sacroiliac, HAnimSegment pelvis"

HAnimSegment63.children.append(TouchSensor64)
Transform65 = x3d.Transform()
Transform65.translation = [0,0.9149,0.0016]
Shape66 = x3d.Shape()
Shape66.USE = "HAnimJointShape"

Transform65.children.append(Shape66)

HAnimSegment63.children.append(Transform65)
Shape67 = x3d.Shape()
LineSet68 = x3d.LineSet()
LineSet68.vertexCount = [2]
ColorRGBA69 = x3d.ColorRGBA()
ColorRGBA69.USE = "HAnimSegmentLineColorRGBA"

LineSet68.color = ColorRGBA69
Coordinate70 = x3d.Coordinate()
Coordinate70.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet68.coord = Coordinate70

Shape67.geometry = LineSet68

HAnimSegment63.children.append(Shape67)
Shape71 = x3d.Shape()
LineSet72 = x3d.LineSet()
LineSet72.vertexCount = [2]
ColorRGBA73 = x3d.ColorRGBA()
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA"

LineSet72.color = ColorRGBA73
Coordinate74 = x3d.Coordinate()
Coordinate74.point = [(0, 0.9149, 0.0016),(-0.0961, 0.9124, -0.0001)]

LineSet72.coord = Coordinate74

Shape71.geometry = LineSet72

HAnimSegment63.children.append(Shape71)
Shape75 = x3d.Shape()
LineSet76 = x3d.LineSet()
LineSet76.vertexCount = [2]
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA"
ColorRGBA77.color = [(1, 0, 0, 1),(1, 0, 0, 0.1)]

LineSet76.color = ColorRGBA77
Coordinate78 = x3d.Coordinate()
Coordinate78.point = [(0, 0.9149, 0.0016),(-0.1525, 1.0628, 0.0035)]

LineSet76.coord = Coordinate78

Shape75.geometry = LineSet76

HAnimSegment63.children.append(Shape75)
Shape79 = x3d.Shape()
LineSet80 = x3d.LineSet()
LineSet80.vertexCount = [2]
ColorRGBA81 = x3d.ColorRGBA()
ColorRGBA81.USE = "HAnimSiteLineColorRGBA"

LineSet80.color = ColorRGBA81
Coordinate82 = x3d.Coordinate()
Coordinate82.point = [(0, 0.9149, 0.0016),(-0.1689, 0.8419, 0.0352)]

LineSet80.coord = Coordinate82

Shape79.geometry = LineSet80

HAnimSegment63.children.append(Shape79)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.vertexCount = [2]
ColorRGBA85 = x3d.ColorRGBA()
ColorRGBA85.USE = "HAnimSiteLineColorRGBA"

LineSet84.color = ColorRGBA85
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0, 0.9149, 0.0016),(0.1612, 1.0537, 0.0008)]

LineSet84.coord = Coordinate86

Shape83.geometry = LineSet84

HAnimSegment63.children.append(Shape83)
Shape87 = x3d.Shape()
LineSet88 = x3d.LineSet()
LineSet88.vertexCount = [2]
ColorRGBA89 = x3d.ColorRGBA()
ColorRGBA89.USE = "HAnimSiteLineColorRGBA"

LineSet88.color = ColorRGBA89
Coordinate90 = x3d.Coordinate()
Coordinate90.point = [(0, 0.9149, 0.0016),(0.1677, 0.8336, 0.0303)]

LineSet88.coord = Coordinate90

Shape87.geometry = LineSet88

HAnimSegment63.children.append(Shape87)
Shape91 = x3d.Shape()
LineSet92 = x3d.LineSet()
LineSet92.vertexCount = [2]
ColorRGBA93 = x3d.ColorRGBA()
ColorRGBA93.USE = "HAnimSiteLineColorRGBA"

LineSet92.color = ColorRGBA93
Coordinate94 = x3d.Coordinate()
Coordinate94.point = [(0, 0.9149, 0.0016),(-0.0887, 1.0021, 0.1112)]

LineSet92.coord = Coordinate94

Shape91.geometry = LineSet92

HAnimSegment63.children.append(Shape91)
Shape95 = x3d.Shape()
LineSet96 = x3d.LineSet()
LineSet96.vertexCount = [2]
ColorRGBA97 = x3d.ColorRGBA()
ColorRGBA97.USE = "HAnimSiteLineColorRGBA"

LineSet96.color = ColorRGBA97
Coordinate98 = x3d.Coordinate()
Coordinate98.point = [(0, 0.9149, 0.0016),(0.0925, 0.9983, 0.1052)]

LineSet96.coord = Coordinate98

Shape95.geometry = LineSet96

HAnimSegment63.children.append(Shape95)
Shape99 = x3d.Shape()
LineSet100 = x3d.LineSet()
LineSet100.vertexCount = [2]
ColorRGBA101 = x3d.ColorRGBA()
ColorRGBA101.USE = "HAnimSiteLineColorRGBA"

LineSet100.color = ColorRGBA101
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(0, 0.9149, 0.0016),(-0.0716, 1.019, -0.1138)]

LineSet100.coord = Coordinate102

Shape99.geometry = LineSet100

HAnimSegment63.children.append(Shape99)
Shape103 = x3d.Shape()
LineSet104 = x3d.LineSet()
LineSet104.vertexCount = [2]
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.USE = "HAnimSiteLineColorRGBA"

LineSet104.color = ColorRGBA105
Coordinate106 = x3d.Coordinate()
Coordinate106.point = [(0, 0.9149, 0.0016),(0.0774, 1.019, -0.1151)]

LineSet104.coord = Coordinate106

Shape103.geometry = LineSet104

HAnimSegment63.children.append(Shape103)
Shape107 = x3d.Shape()
LineSet108 = x3d.LineSet()
LineSet108.vertexCount = [2]
ColorRGBA109 = x3d.ColorRGBA()
ColorRGBA109.USE = "HAnimSiteLineColorRGBA"

LineSet108.color = ColorRGBA109
Coordinate110 = x3d.Coordinate()
Coordinate110.point = [(0, 0.9149, 0.0016),(0.0034, 0.8266, 0.0257)]

LineSet108.coord = Coordinate110

Shape107.geometry = LineSet108

HAnimSegment63.children.append(Shape107)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.DEF = "hanim_r_iliocristale_pt"
HAnimSite111.name = "r_iliocristale_pt"
HAnimSite111.translation = [-0.1525,1.0628,0.0035]
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.description = "HAnimSite r_iliocristale"

HAnimSite111.children.append(TouchSensor112)
Shape113 = x3d.Shape()
Shape113.DEF = "HAnimSiteShape"
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.diffuseColor = [1,0,0]

Appearance114.material = Material115

Shape113.appearance = Appearance114
IndexedFaceSet116 = x3d.IndexedFaceSet()
IndexedFaceSet116.DEF = "DiamondIFS"
IndexedFaceSet116.solid = False
IndexedFaceSet116.creaseAngle = 0.5
IndexedFaceSet116.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate117 = x3d.Coordinate()
Coordinate117.point = [(0, 0.008, 0),(-0.008, 0, 0),(0, 0, 0.008),(0.008, 0, 0),(0, 0, -0.008),(0, -0.008, 0)]

IndexedFaceSet116.coord = Coordinate117

Shape113.geometry = IndexedFaceSet116

HAnimSite111.children.append(Shape113)

HAnimSegment63.children.append(HAnimSite111)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.DEF = "hanim_r_trochanterion_pt"
HAnimSite118.name = "r_trochanterion_pt"
HAnimSite118.translation = [-0.1689,0.8419,0.0352]
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.description = "HAnimSite r_trochanterion"

HAnimSite118.children.append(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.USE = "HAnimSiteShape"

HAnimSite118.children.append(Shape120)

HAnimSegment63.children.append(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.DEF = "hanim_l_iliocristale_pt"
HAnimSite121.name = "l_iliocristale_pt"
HAnimSite121.translation = [0.1612,1.0537,0.0008]
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.description = "HAnimSite l_iliocristale"

HAnimSite121.children.append(TouchSensor122)
Shape123 = x3d.Shape()
Shape123.USE = "HAnimSiteShape"

HAnimSite121.children.append(Shape123)

HAnimSegment63.children.append(HAnimSite121)
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.DEF = "hanim_l_trochanterion_pt"
HAnimSite124.name = "l_trochanterion_pt"
HAnimSite124.translation = [0.1677,0.8336,0.0303]
TouchSensor125 = x3d.TouchSensor()
TouchSensor125.description = "HAnimSite l_trochanterion"

HAnimSite124.children.append(TouchSensor125)
Shape126 = x3d.Shape()
Shape126.USE = "HAnimSiteShape"

HAnimSite124.children.append(Shape126)

HAnimSegment63.children.append(HAnimSite124)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.DEF = "hanim_r_asis_pt"
HAnimSite127.name = "r_asis_pt"
HAnimSite127.translation = [-0.0887,1.0021,0.1112]
TouchSensor128 = x3d.TouchSensor()
TouchSensor128.description = "HAnimSite r_asis"

HAnimSite127.children.append(TouchSensor128)
Shape129 = x3d.Shape()
Shape129.USE = "HAnimSiteShape"

HAnimSite127.children.append(Shape129)

HAnimSegment63.children.append(HAnimSite127)
HAnimSite130 = x3d.HAnimSite()
HAnimSite130.DEF = "hanim_l_asis_pt"
HAnimSite130.name = "l_asis_pt"
HAnimSite130.translation = [0.0925,0.9983,0.1052]
TouchSensor131 = x3d.TouchSensor()
TouchSensor131.description = "HAnimSite l_asis"

HAnimSite130.children.append(TouchSensor131)
Shape132 = x3d.Shape()
Shape132.USE = "HAnimSiteShape"

HAnimSite130.children.append(Shape132)

HAnimSegment63.children.append(HAnimSite130)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.DEF = "hanim_r_psis_pt"
HAnimSite133.name = "r_psis_pt"
HAnimSite133.translation = [-0.0716,1.019,-0.1138]
TouchSensor134 = x3d.TouchSensor()
TouchSensor134.description = "HAnimSite r_psis"

HAnimSite133.children.append(TouchSensor134)
Shape135 = x3d.Shape()
Shape135.USE = "HAnimSiteShape"

HAnimSite133.children.append(Shape135)

HAnimSegment63.children.append(HAnimSite133)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.DEF = "hanim_l_psis_pt"
HAnimSite136.name = "l_psis_pt"
HAnimSite136.translation = [0.0774,1.019,-0.1151]
TouchSensor137 = x3d.TouchSensor()
TouchSensor137.description = "HAnimSite l_psis"

HAnimSite136.children.append(TouchSensor137)
Shape138 = x3d.Shape()
Shape138.USE = "HAnimSiteShape"

HAnimSite136.children.append(Shape138)

HAnimSegment63.children.append(HAnimSite136)
HAnimSite139 = x3d.HAnimSite()
HAnimSite139.DEF = "hanim_crotch_pt"
HAnimSite139.name = "crotch_pt"
HAnimSite139.translation = [0.0034,0.8266,0.0257]
TouchSensor140 = x3d.TouchSensor()
TouchSensor140.description = "HAnimSite crotch"

HAnimSite139.children.append(TouchSensor140)
Shape141 = x3d.Shape()
Shape141.USE = "HAnimSiteShape"

HAnimSite139.children.append(Shape141)

HAnimSegment63.children.append(HAnimSite139)

HAnimJoint62.children.append(HAnimSegment63)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.DEF = "hanim_l_hip"
HAnimJoint142.name = "l_hip"
HAnimJoint142.center = [0.0961,0.9124,-0.0001]
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.DEF = "hanim_l_thigh"
HAnimSegment143.name = "l_thigh"
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.description = "HAnimJoint l_hip, HAnimSegment l_thigh"

HAnimSegment143.children.append(TouchSensor144)
Transform145 = x3d.Transform()
Transform145.translation = [0.0961,0.9124,-0.0001]
Shape146 = x3d.Shape()
Shape146.USE = "HAnimJointShape"

Transform145.children.append(Shape146)

HAnimSegment143.children.append(Transform145)
Shape147 = x3d.Shape()
LineSet148 = x3d.LineSet()
LineSet148.vertexCount = [2]
ColorRGBA149 = x3d.ColorRGBA()
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA"

LineSet148.color = ColorRGBA149
Coordinate150 = x3d.Coordinate()
Coordinate150.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet148.coord = Coordinate150

Shape147.geometry = LineSet148

HAnimSegment143.children.append(Shape147)
Shape151 = x3d.Shape()
LineSet152 = x3d.LineSet()
LineSet152.vertexCount = [2]
ColorRGBA153 = x3d.ColorRGBA()
ColorRGBA153.USE = "HAnimSiteLineColorRGBA"

LineSet152.color = ColorRGBA153
Coordinate154 = x3d.Coordinate()
Coordinate154.point = [(0.0961, 0.9124, -0.0001),(0.0993, 0.4881, -0.0309)]

LineSet152.coord = Coordinate154

Shape151.geometry = LineSet152

HAnimSegment143.children.append(Shape151)
Shape155 = x3d.Shape()
LineSet156 = x3d.LineSet()
LineSet156.vertexCount = [2]
ColorRGBA157 = x3d.ColorRGBA()
ColorRGBA157.USE = "HAnimSiteLineColorRGBA"

LineSet156.color = ColorRGBA157
Coordinate158 = x3d.Coordinate()
Coordinate158.point = [(0.0961, 0.9124, -0.0001),(0.1598, 0.4967, 0.0297)]

LineSet156.coord = Coordinate158

Shape155.geometry = LineSet156

HAnimSegment143.children.append(Shape155)
Shape159 = x3d.Shape()
LineSet160 = x3d.LineSet()
LineSet160.vertexCount = [2]
ColorRGBA161 = x3d.ColorRGBA()
ColorRGBA161.USE = "HAnimSiteLineColorRGBA"

LineSet160.color = ColorRGBA161
Coordinate162 = x3d.Coordinate()
Coordinate162.point = [(0.0961, 0.9124, -0.0001),(0.0398, 0.4946, 0.0303)]

LineSet160.coord = Coordinate162

Shape159.geometry = LineSet160

HAnimSegment143.children.append(Shape159)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.DEF = "hanim_l_knee_crease_pt"
HAnimSite163.name = "l_knee_crease_pt"
HAnimSite163.translation = [0.0993,0.4881,-0.0309]
TouchSensor164 = x3d.TouchSensor()
TouchSensor164.description = "HAnimSite l_knee_crease"

HAnimSite163.children.append(TouchSensor164)
Shape165 = x3d.Shape()
Shape165.USE = "HAnimSiteShape"

HAnimSite163.children.append(Shape165)

HAnimSegment143.children.append(HAnimSite163)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.DEF = "hanim_l_femoral_lateral_epicn_pt"
HAnimSite166.name = "l_femoral_lateral_epicn_pt"
HAnimSite166.translation = [0.1598,0.4967,0.0297]
TouchSensor167 = x3d.TouchSensor()
TouchSensor167.description = "HAnimSite l_femoral_lateral_epicn"

HAnimSite166.children.append(TouchSensor167)
Shape168 = x3d.Shape()
Shape168.USE = "HAnimSiteShape"

HAnimSite166.children.append(Shape168)

HAnimSegment143.children.append(HAnimSite166)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.DEF = "hanim_l_femoral_medial_epicn_pt"
HAnimSite169.name = "l_femoral_medial_epicn_pt"
HAnimSite169.translation = [0.0398,0.4946,0.0303]
TouchSensor170 = x3d.TouchSensor()
TouchSensor170.description = "HAnimSite l_femoral_medial_epicn"

HAnimSite169.children.append(TouchSensor170)
Shape171 = x3d.Shape()
Shape171.USE = "HAnimSiteShape"

HAnimSite169.children.append(Shape171)

HAnimSegment143.children.append(HAnimSite169)

HAnimJoint142.children.append(HAnimSegment143)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.DEF = "hanim_l_knee"
HAnimJoint172.name = "l_knee"
HAnimJoint172.center = [0.104,0.4867,0.0308]
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.DEF = "hanim_l_calf"
HAnimSegment173.name = "l_calf"
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.description = "HAnimJoint l_knee, HAnimSegment l_calf"

HAnimSegment173.children.append(TouchSensor174)
Transform175 = x3d.Transform()
Transform175.translation = [0.104,0.4867,0.0308]
Shape176 = x3d.Shape()
Shape176.USE = "HAnimJointShape"

Transform175.children.append(Shape176)

HAnimSegment173.children.append(Transform175)
Shape177 = x3d.Shape()
LineSet178 = x3d.LineSet()
LineSet178.vertexCount = [2]
ColorRGBA179 = x3d.ColorRGBA()
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA"

LineSet178.color = ColorRGBA179
Coordinate180 = x3d.Coordinate()
Coordinate180.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet178.coord = Coordinate180

Shape177.geometry = LineSet178

HAnimSegment173.children.append(Shape177)

HAnimJoint172.children.append(HAnimSegment173)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.DEF = "hanim_l_ankle"
HAnimJoint181.name = "l_ankle"
HAnimJoint181.center = [0.1101,0.0656,-0.0736]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.DEF = "hanim_l_hindfoot"
HAnimSegment182.name = "l_hindfoot"
TouchSensor183 = x3d.TouchSensor()
TouchSensor183.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot"

HAnimSegment182.children.append(TouchSensor183)
Transform184 = x3d.Transform()
Transform184.translation = [0.1101,0.0656,-0.0736]
Shape185 = x3d.Shape()
Shape185.USE = "HAnimJointShape"

Transform184.children.append(Shape185)

HAnimSegment182.children.append(Transform184)
Shape186 = x3d.Shape()
LineSet187 = x3d.LineSet()
LineSet187.vertexCount = [2]
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA"

LineSet187.color = ColorRGBA188
Coordinate189 = x3d.Coordinate()
Coordinate189.point = [(0.1101, 0.0656, -0.0736),(0.1086, 0.0001, -0.0368)]

LineSet187.coord = Coordinate189

Shape186.geometry = LineSet187

HAnimSegment182.children.append(Shape186)
Shape190 = x3d.Shape()
LineSet191 = x3d.LineSet()
LineSet191.vertexCount = [2]
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.USE = "HAnimSiteLineColorRGBA"

LineSet191.color = ColorRGBA192
Coordinate193 = x3d.Coordinate()
Coordinate193.point = [(0.1101, 0.0656, -0.0736),(0.1308, 0.0597, -0.1032)]

LineSet191.coord = Coordinate193

Shape190.geometry = LineSet191

HAnimSegment182.children.append(Shape190)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.vertexCount = [2]
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.USE = "HAnimSiteLineColorRGBA"

LineSet195.color = ColorRGBA196
Coordinate197 = x3d.Coordinate()
Coordinate197.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0716, -0.0881)]

LineSet195.coord = Coordinate197

Shape194.geometry = LineSet195

HAnimSegment182.children.append(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.vertexCount = [2]
ColorRGBA200 = x3d.ColorRGBA()
ColorRGBA200.USE = "HAnimSiteLineColorRGBA"

LineSet199.color = ColorRGBA200
Coordinate201 = x3d.Coordinate()
Coordinate201.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0575, -0.0943)]

LineSet199.coord = Coordinate201

Shape198.geometry = LineSet199

HAnimSegment182.children.append(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.vertexCount = [2]
ColorRGBA204 = x3d.ColorRGBA()
ColorRGBA204.USE = "HAnimSiteLineColorRGBA"

LineSet203.color = ColorRGBA204
Coordinate205 = x3d.Coordinate()
Coordinate205.point = [(0.1101, 0.0656, -0.0736),(0.0974, 0.0259, -0.1171)]

LineSet203.coord = Coordinate205

Shape202.geometry = LineSet203

HAnimSegment182.children.append(Shape202)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite206.name = "l_lateral_malleolus_pt"
HAnimSite206.translation = [0.1308,0.0597,-0.1032]
TouchSensor207 = x3d.TouchSensor()
TouchSensor207.description = "HAnimSite l_lateral_malleolus"

HAnimSite206.children.append(TouchSensor207)
Shape208 = x3d.Shape()
Shape208.USE = "HAnimSiteShape"

HAnimSite206.children.append(Shape208)

HAnimSegment182.children.append(HAnimSite206)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite209.name = "l_medial_malleolus_pt"
HAnimSite209.translation = [0.089,0.0716,-0.0881]
TouchSensor210 = x3d.TouchSensor()
TouchSensor210.description = "HAnimSite l_medial_malleolus"

HAnimSite209.children.append(TouchSensor210)
Shape211 = x3d.Shape()
Shape211.USE = "HAnimSiteShape"

HAnimSite209.children.append(Shape211)

HAnimSegment182.children.append(HAnimSite209)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.DEF = "hanim_l_sphyrion_pt"
HAnimSite212.name = "l_sphyrion_pt"
HAnimSite212.translation = [0.089,0.0575,-0.0943]
TouchSensor213 = x3d.TouchSensor()
TouchSensor213.description = "HAnimSite l_sphyrion"

HAnimSite212.children.append(TouchSensor213)
Shape214 = x3d.Shape()
Shape214.USE = "HAnimSiteShape"

HAnimSite212.children.append(Shape214)

HAnimSegment182.children.append(HAnimSite212)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.DEF = "hanim_l_calcaneous_post_pt"
HAnimSite215.name = "l_calcaneous_post_pt"
HAnimSite215.translation = [0.0974,0.0259,-0.1171]
TouchSensor216 = x3d.TouchSensor()
TouchSensor216.description = "HAnimSite l_calcaneous_post"

HAnimSite215.children.append(TouchSensor216)
Shape217 = x3d.Shape()
Shape217.USE = "HAnimSiteShape"

HAnimSite215.children.append(Shape217)

HAnimSegment182.children.append(HAnimSite215)

HAnimJoint181.children.append(HAnimSegment182)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.DEF = "hanim_l_subtalar"
HAnimJoint218.name = "l_subtalar"
HAnimJoint218.center = [0.1086,0.0001,-0.0368]
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.DEF = "hanim_l_midproximal"
HAnimSegment219.name = "l_midproximal"
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal"

HAnimSegment219.children.append(TouchSensor220)
Transform221 = x3d.Transform()
Transform221.translation = [0.1086,0.0001,-0.0368]
Shape222 = x3d.Shape()
Shape222.USE = "HAnimJointShape"

Transform221.children.append(Shape222)

HAnimSegment219.children.append(Transform221)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.vertexCount = [2]
ColorRGBA225 = x3d.ColorRGBA()
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA"

LineSet224.color = ColorRGBA225
Coordinate226 = x3d.Coordinate()
Coordinate226.point = [(0.1086, 0.0001, -0.0368),(0.1086, 0.0001, 0.0368)]

LineSet224.coord = Coordinate226

Shape223.geometry = LineSet224

HAnimSegment219.children.append(Shape223)

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.DEF = "hanim_l_midtarsal"
HAnimJoint227.name = "l_midtarsal"
HAnimJoint227.center = [0.1086,0.0001,0.0368]
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.DEF = "hanim_l_middistal"
HAnimSegment228.name = "l_middistal"
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal"

HAnimSegment228.children.append(TouchSensor229)
Transform230 = x3d.Transform()
Transform230.translation = [0.1086,0.0001,0.0368]
Shape231 = x3d.Shape()
Shape231.USE = "HAnimJointShape"

Transform230.children.append(Shape231)

HAnimSegment228.children.append(Transform230)
Shape232 = x3d.Shape()
LineSet233 = x3d.LineSet()
LineSet233.vertexCount = [2]
ColorRGBA234 = x3d.ColorRGBA()
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA"

LineSet233.color = ColorRGBA234
Coordinate235 = x3d.Coordinate()
Coordinate235.point = [(0.1086, 0.0001, 0.0368),(0.1086, 0, 0.0762)]

LineSet233.coord = Coordinate235

Shape232.geometry = LineSet233

HAnimSegment228.children.append(Shape232)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.vertexCount = [2]
ColorRGBA238 = x3d.ColorRGBA()
ColorRGBA238.USE = "HAnimSiteLineColorRGBA"

LineSet237.color = ColorRGBA238
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(0.1086, 0.0001, 0.0368),(0.0816, 0.0232, 0.0106)]

LineSet237.coord = Coordinate239

Shape236.geometry = LineSet237

HAnimSegment228.children.append(Shape236)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.DEF = "hanim_l_metatarsal_pha1_pt"
HAnimSite240.name = "l_metatarsal_pha1_pt"
HAnimSite240.translation = [0.0816,0.0232,0.0106]
TouchSensor241 = x3d.TouchSensor()
TouchSensor241.description = "HAnimSite l_metatarsal_pha1"

HAnimSite240.children.append(TouchSensor241)
Shape242 = x3d.Shape()
Shape242.USE = "HAnimSiteShape"

HAnimSite240.children.append(Shape242)

HAnimSegment228.children.append(HAnimSite240)

HAnimJoint227.children.append(HAnimSegment228)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.DEF = "hanim_l_metatarsal"
HAnimJoint243.name = "l_metatarsal"
HAnimJoint243.center = [0.1086,0,0.0762]
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.DEF = "hanim_l_forefoot"
HAnimSegment244.name = "l_forefoot"
TouchSensor245 = x3d.TouchSensor()
TouchSensor245.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot"

HAnimSegment244.children.append(TouchSensor245)
Transform246 = x3d.Transform()
Transform246.translation = [0.1086,0,0.0762]
Shape247 = x3d.Shape()
Shape247.USE = "HAnimJointShape"

Transform246.children.append(Shape247)

HAnimSegment244.children.append(Transform246)
Shape248 = x3d.Shape()
LineSet249 = x3d.LineSet()
LineSet249.vertexCount = [2]
ColorRGBA250 = x3d.ColorRGBA()
ColorRGBA250.USE = "HAnimSiteLineColorRGBA"

LineSet249.color = ColorRGBA250
Coordinate251 = x3d.Coordinate()
Coordinate251.point = [(0.1086, 0, 0.0762),(0.1354, 0.0016, 0.1476)]

LineSet249.coord = Coordinate251

Shape248.geometry = LineSet249

HAnimSegment244.children.append(Shape248)
Shape252 = x3d.Shape()
LineSet253 = x3d.LineSet()
LineSet253.vertexCount = [2]
ColorRGBA254 = x3d.ColorRGBA()
ColorRGBA254.USE = "HAnimSiteLineColorRGBA"

LineSet253.color = ColorRGBA254
Coordinate255 = x3d.Coordinate()
Coordinate255.point = [(0.1086, 0, 0.0762),(0.1825, 0.007, 0.0928)]

LineSet253.coord = Coordinate255

Shape252.geometry = LineSet253

HAnimSegment244.children.append(Shape252)
Shape256 = x3d.Shape()
LineSet257 = x3d.LineSet()
LineSet257.vertexCount = [2]
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.USE = "HAnimSiteLineColorRGBA"

LineSet257.color = ColorRGBA258
Coordinate259 = x3d.Coordinate()
Coordinate259.point = [(0.1086, 0, 0.0762),(0.1195, 0.0079, 0.1433)]

LineSet257.coord = Coordinate259

Shape256.geometry = LineSet257

HAnimSegment244.children.append(Shape256)
HAnimSite260 = x3d.HAnimSite()
HAnimSite260.DEF = "hanim_l_forefoot_tip"
HAnimSite260.name = "l_forefoot_tip"
HAnimSite260.translation = [0.1354,0.0016,0.1476]
TouchSensor261 = x3d.TouchSensor()
TouchSensor261.description = "HAnimSite l_forefoot_tip"

HAnimSite260.children.append(TouchSensor261)
Shape262 = x3d.Shape()
Shape262.USE = "HAnimSiteShape"

HAnimSite260.children.append(Shape262)

HAnimSegment244.children.append(HAnimSite260)
HAnimSite263 = x3d.HAnimSite()
HAnimSite263.DEF = "hanim_l_metatarsal_pha5_pt"
HAnimSite263.name = "l_metatarsal_pha5_pt"
HAnimSite263.translation = [0.1825,0.007,0.0928]
TouchSensor264 = x3d.TouchSensor()
TouchSensor264.description = "HAnimSite l_metatarsal_pha5"

HAnimSite263.children.append(TouchSensor264)
Shape265 = x3d.Shape()
Shape265.USE = "HAnimSiteShape"

HAnimSite263.children.append(Shape265)

HAnimSegment244.children.append(HAnimSite263)
HAnimSite266 = x3d.HAnimSite()
HAnimSite266.DEF = "hanim_l_digit2_pt"
HAnimSite266.name = "l_digit2_pt"
HAnimSite266.translation = [0.1195,0.0079,0.1433]
TouchSensor267 = x3d.TouchSensor()
TouchSensor267.description = "HAnimSite l_digit2"

HAnimSite266.children.append(TouchSensor267)
Shape268 = x3d.Shape()
Shape268.USE = "HAnimSiteShape"

HAnimSite266.children.append(Shape268)

HAnimSegment244.children.append(HAnimSite266)

HAnimJoint243.children.append(HAnimSegment244)

HAnimJoint227.children.append(HAnimJoint243)

HAnimJoint218.children.append(HAnimJoint227)

HAnimJoint181.children.append(HAnimJoint218)

HAnimJoint172.children.append(HAnimJoint181)

HAnimJoint142.children.append(HAnimJoint172)

HAnimJoint62.children.append(HAnimJoint142)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.DEF = "hanim_r_hip"
HAnimJoint269.name = "r_hip"
HAnimJoint269.center = [-0.0961,0.9124,-0.0001]
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.DEF = "hanim_r_thigh"
HAnimSegment270.name = "r_thigh"
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.description = "HAnimJoint r_hip, HAnimSegment r_thigh"

HAnimSegment270.children.append(TouchSensor271)
Transform272 = x3d.Transform()
Transform272.translation = [-0.0961,0.9124,-0.0001]
Shape273 = x3d.Shape()
Shape273.USE = "HAnimJointShape"

Transform272.children.append(Shape273)

HAnimSegment270.children.append(Transform272)
Shape274 = x3d.Shape()
LineSet275 = x3d.LineSet()
LineSet275.vertexCount = [2]
ColorRGBA276 = x3d.ColorRGBA()
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA"

LineSet275.color = ColorRGBA276
Coordinate277 = x3d.Coordinate()
Coordinate277.point = [(-0.0961, 0.9124, -0.0001),(-0.104, 0.4867, 0.0308)]

LineSet275.coord = Coordinate277

Shape274.geometry = LineSet275

HAnimSegment270.children.append(Shape274)
Shape278 = x3d.Shape()
LineSet279 = x3d.LineSet()
LineSet279.vertexCount = [2]
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.USE = "HAnimSiteLineColorRGBA"

LineSet279.color = ColorRGBA280
Coordinate281 = x3d.Coordinate()
Coordinate281.point = [(-0.0961, 0.9124, -0.0001),(-0.0825, 0.4932, -0.0326)]

LineSet279.coord = Coordinate281

Shape278.geometry = LineSet279

HAnimSegment270.children.append(Shape278)
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.vertexCount = [2]
ColorRGBA284 = x3d.ColorRGBA()
ColorRGBA284.USE = "HAnimSiteLineColorRGBA"

LineSet283.color = ColorRGBA284
Coordinate285 = x3d.Coordinate()
Coordinate285.point = [(-0.0961, 0.9124, -0.0001),(-0.1421, 0.4992, 0.031)]

LineSet283.coord = Coordinate285

Shape282.geometry = LineSet283

HAnimSegment270.children.append(Shape282)
Shape286 = x3d.Shape()
LineSet287 = x3d.LineSet()
LineSet287.vertexCount = [2]
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.USE = "HAnimSiteLineColorRGBA"

LineSet287.color = ColorRGBA288
Coordinate289 = x3d.Coordinate()
Coordinate289.point = [(-0.0961, 0.9124, -0.0001),(-0.0221, 0.5014, 0.0289)]

LineSet287.coord = Coordinate289

Shape286.geometry = LineSet287

HAnimSegment270.children.append(Shape286)
HAnimSite290 = x3d.HAnimSite()
HAnimSite290.DEF = "hanim_r_knee_crease_pt"
HAnimSite290.name = "r_knee_crease_pt"
HAnimSite290.translation = [-0.0825,0.4932,-0.0326]
TouchSensor291 = x3d.TouchSensor()
TouchSensor291.description = "HAnimSite r_knee_crease"

HAnimSite290.children.append(TouchSensor291)
Shape292 = x3d.Shape()
Shape292.USE = "HAnimSiteShape"

HAnimSite290.children.append(Shape292)

HAnimSegment270.children.append(HAnimSite290)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.DEF = "hanim_r_femoral_lateral_epicn_pt"
HAnimSite293.name = "r_femoral_lateral_epicn_pt"
HAnimSite293.translation = [-0.1421,0.4992,0.031]
TouchSensor294 = x3d.TouchSensor()
TouchSensor294.description = "HAnimSite r_femoral_lateral_epicn"

HAnimSite293.children.append(TouchSensor294)
Shape295 = x3d.Shape()
Shape295.USE = "HAnimSiteShape"

HAnimSite293.children.append(Shape295)

HAnimSegment270.children.append(HAnimSite293)
HAnimSite296 = x3d.HAnimSite()
HAnimSite296.DEF = "hanim_r_femoral_medial_epicn_pt"
HAnimSite296.name = "r_femoral_medial_epicn_pt"
HAnimSite296.translation = [-0.0221,0.5014,0.0289]
TouchSensor297 = x3d.TouchSensor()
TouchSensor297.description = "HAnimSite r_femoral_medial_epicn"

HAnimSite296.children.append(TouchSensor297)
Shape298 = x3d.Shape()
Shape298.USE = "HAnimSiteShape"

HAnimSite296.children.append(Shape298)

HAnimSegment270.children.append(HAnimSite296)

HAnimJoint269.children.append(HAnimSegment270)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.DEF = "hanim_r_knee"
HAnimJoint299.name = "r_knee"
HAnimJoint299.center = [-0.104,0.4867,0.0308]
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.DEF = "hanim_r_calf"
HAnimSegment300.name = "r_calf"
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.description = "HAnimJoint r_knee, HAnimSegment r_calf"

HAnimSegment300.children.append(TouchSensor301)
Transform302 = x3d.Transform()
Transform302.translation = [-0.104,0.4867,0.0308]
Shape303 = x3d.Shape()
Shape303.USE = "HAnimJointShape"

Transform302.children.append(Shape303)

HAnimSegment300.children.append(Transform302)
Shape304 = x3d.Shape()
LineSet305 = x3d.LineSet()
LineSet305.vertexCount = [2]
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA"

LineSet305.color = ColorRGBA306
Coordinate307 = x3d.Coordinate()
Coordinate307.point = [(-0.104, 0.4867, 0.0308),(-0.1101, 0.0656, -0.0736)]

LineSet305.coord = Coordinate307

Shape304.geometry = LineSet305

HAnimSegment300.children.append(Shape304)

HAnimJoint299.children.append(HAnimSegment300)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.DEF = "hanim_r_ankle"
HAnimJoint308.name = "r_ankle"
HAnimJoint308.center = [-0.1101,0.0656,-0.0736]
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.DEF = "hanim_r_hindfoot"
HAnimSegment309.name = "r_hindfoot"
TouchSensor310 = x3d.TouchSensor()
TouchSensor310.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot"

HAnimSegment309.children.append(TouchSensor310)
Transform311 = x3d.Transform()
Transform311.translation = [-0.1101,0.0656,-0.0736]
Shape312 = x3d.Shape()
Shape312.USE = "HAnimJointShape"

Transform311.children.append(Shape312)

HAnimSegment309.children.append(Transform311)
Shape313 = x3d.Shape()
LineSet314 = x3d.LineSet()
LineSet314.vertexCount = [2]
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA"

LineSet314.color = ColorRGBA315
Coordinate316 = x3d.Coordinate()
Coordinate316.point = [(-0.1101, 0.0656, -0.0736),(-0.1086, 0.0001, -0.0368)]

LineSet314.coord = Coordinate316

Shape313.geometry = LineSet314

HAnimSegment309.children.append(Shape313)
Shape317 = x3d.Shape()
LineSet318 = x3d.LineSet()
LineSet318.vertexCount = [2]
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.USE = "HAnimSiteLineColorRGBA"

LineSet318.color = ColorRGBA319
Coordinate320 = x3d.Coordinate()
Coordinate320.point = [(-0.1101, 0.0656, -0.0736),(-0.1006, 0.0658, -0.1075)]

LineSet318.coord = Coordinate320

Shape317.geometry = LineSet318

HAnimSegment309.children.append(Shape317)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.vertexCount = [2]
ColorRGBA323 = x3d.ColorRGBA()
ColorRGBA323.USE = "HAnimSiteLineColorRGBA"

LineSet322.color = ColorRGBA323
Coordinate324 = x3d.Coordinate()
Coordinate324.point = [(-0.1101, 0.0656, -0.0736),(-0.0591, 0.076, -0.0928)]

LineSet322.coord = Coordinate324

Shape321.geometry = LineSet322

HAnimSegment309.children.append(Shape321)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.vertexCount = [2]
ColorRGBA327 = x3d.ColorRGBA()
ColorRGBA327.USE = "HAnimSiteLineColorRGBA"

LineSet326.color = ColorRGBA327
Coordinate328 = x3d.Coordinate()
Coordinate328.point = [(-0.1101, 0.0656, -0.0736),(-0.0603, 0.061, -0.1002)]

LineSet326.coord = Coordinate328

Shape325.geometry = LineSet326

HAnimSegment309.children.append(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.vertexCount = [2]
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.USE = "HAnimSiteLineColorRGBA"

LineSet330.color = ColorRGBA331
Coordinate332 = x3d.Coordinate()
Coordinate332.point = [(-0.1101, 0.0656, -0.0736),(-0.0692, 0.0297, -0.1221)]

LineSet330.coord = Coordinate332

Shape329.geometry = LineSet330

HAnimSegment309.children.append(Shape329)
HAnimSite333 = x3d.HAnimSite()
HAnimSite333.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite333.name = "r_lateral_malleolus_pt"
HAnimSite333.translation = [-0.1006,0.0658,-0.1075]
TouchSensor334 = x3d.TouchSensor()
TouchSensor334.description = "HAnimSite r_lateral_malleolus"

HAnimSite333.children.append(TouchSensor334)
Shape335 = x3d.Shape()
Shape335.USE = "HAnimSiteShape"

HAnimSite333.children.append(Shape335)

HAnimSegment309.children.append(HAnimSite333)
HAnimSite336 = x3d.HAnimSite()
HAnimSite336.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite336.name = "r_medial_malleolus_pt"
HAnimSite336.translation = [-0.0591,0.076,-0.0928]
TouchSensor337 = x3d.TouchSensor()
TouchSensor337.description = "HAnimSite r_medial_malleolus"

HAnimSite336.children.append(TouchSensor337)
Shape338 = x3d.Shape()
Shape338.USE = "HAnimSiteShape"

HAnimSite336.children.append(Shape338)

HAnimSegment309.children.append(HAnimSite336)
HAnimSite339 = x3d.HAnimSite()
HAnimSite339.DEF = "hanim_r_sphyrion_pt"
HAnimSite339.name = "r_sphyrion_pt"
HAnimSite339.translation = [-0.0603,0.061,-0.1002]
TouchSensor340 = x3d.TouchSensor()
TouchSensor340.description = "HAnimSite r_sphyrion"

HAnimSite339.children.append(TouchSensor340)
Shape341 = x3d.Shape()
Shape341.USE = "HAnimSiteShape"

HAnimSite339.children.append(Shape341)

HAnimSegment309.children.append(HAnimSite339)
HAnimSite342 = x3d.HAnimSite()
HAnimSite342.DEF = "hanim_r_calcaneous_post_pt"
HAnimSite342.name = "r_calcaneous_post_pt"
HAnimSite342.translation = [-0.0692,0.0297,-0.1221]
TouchSensor343 = x3d.TouchSensor()
TouchSensor343.description = "HAnimSite r_calcaneous_post"

HAnimSite342.children.append(TouchSensor343)
Shape344 = x3d.Shape()
Shape344.USE = "HAnimSiteShape"

HAnimSite342.children.append(Shape344)

HAnimSegment309.children.append(HAnimSite342)

HAnimJoint308.children.append(HAnimSegment309)
HAnimJoint345 = x3d.HAnimJoint()
HAnimJoint345.DEF = "hanim_r_subtalar"
HAnimJoint345.name = "r_subtalar"
HAnimJoint345.center = [-0.1086,0.0001,-0.0368]
HAnimSegment346 = x3d.HAnimSegment()
HAnimSegment346.DEF = "hanim_r_midproximal"
HAnimSegment346.name = "r_midproximal"
TouchSensor347 = x3d.TouchSensor()
TouchSensor347.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal"

HAnimSegment346.children.append(TouchSensor347)
Transform348 = x3d.Transform()
Transform348.translation = [-0.1086,0.0001,-0.0368]
Shape349 = x3d.Shape()
Shape349.USE = "HAnimJointShape"

Transform348.children.append(Shape349)

HAnimSegment346.children.append(Transform348)
Shape350 = x3d.Shape()
LineSet351 = x3d.LineSet()
LineSet351.vertexCount = [2]
ColorRGBA352 = x3d.ColorRGBA()
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA"

LineSet351.color = ColorRGBA352
Coordinate353 = x3d.Coordinate()
Coordinate353.point = [(-0.1086, 0.0001, -0.0368),(-0.1086, 0.0001, 0.0368)]

LineSet351.coord = Coordinate353

Shape350.geometry = LineSet351

HAnimSegment346.children.append(Shape350)

HAnimJoint345.children.append(HAnimSegment346)
HAnimJoint354 = x3d.HAnimJoint()
HAnimJoint354.DEF = "hanim_r_midtarsal"
HAnimJoint354.name = "r_midtarsal"
HAnimJoint354.center = [-0.1086,0.0001,0.0368]
HAnimSegment355 = x3d.HAnimSegment()
HAnimSegment355.DEF = "hanim_r_middistal"
HAnimSegment355.name = "r_middistal"
TouchSensor356 = x3d.TouchSensor()
TouchSensor356.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal"

HAnimSegment355.children.append(TouchSensor356)
Transform357 = x3d.Transform()
Transform357.translation = [-0.1086,0.0001,0.0368]
Shape358 = x3d.Shape()
Shape358.USE = "HAnimJointShape"

Transform357.children.append(Shape358)

HAnimSegment355.children.append(Transform357)
Shape359 = x3d.Shape()
LineSet360 = x3d.LineSet()
LineSet360.vertexCount = [2]
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA"

LineSet360.color = ColorRGBA361
Coordinate362 = x3d.Coordinate()
Coordinate362.point = [(-0.1086, 0.0001, 0.0368),(-0.1086, 0, 0.0762)]

LineSet360.coord = Coordinate362

Shape359.geometry = LineSet360

HAnimSegment355.children.append(Shape359)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.vertexCount = [2]
ColorRGBA365 = x3d.ColorRGBA()
ColorRGBA365.USE = "HAnimSiteLineColorRGBA"

LineSet364.color = ColorRGBA365
Coordinate366 = x3d.Coordinate()
Coordinate366.point = [(-0.1086, 0.0001, 0.0368),(-0.0521, 0.026, 0.0127)]

LineSet364.coord = Coordinate366

Shape363.geometry = LineSet364

HAnimSegment355.children.append(Shape363)
HAnimSite367 = x3d.HAnimSite()
HAnimSite367.DEF = "hanim_r_metatarsal_pha1_pt"
HAnimSite367.name = "r_metatarsal_pha1_pt"
HAnimSite367.translation = [-0.0521,0.026,0.0127]
TouchSensor368 = x3d.TouchSensor()
TouchSensor368.description = "HAnimSite r_metatarsal_pha1"

HAnimSite367.children.append(TouchSensor368)
Shape369 = x3d.Shape()
Shape369.USE = "HAnimSiteShape"

HAnimSite367.children.append(Shape369)

HAnimSegment355.children.append(HAnimSite367)

HAnimJoint354.children.append(HAnimSegment355)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.DEF = "hanim_r_metatarsal"
HAnimJoint370.name = "r_metatarsal"
HAnimJoint370.center = [-0.1086,0,0.0762]
HAnimSegment371 = x3d.HAnimSegment()
HAnimSegment371.DEF = "hanim_r_forefoot"
HAnimSegment371.name = "r_forefoot"
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot"

HAnimSegment371.children.append(TouchSensor372)
Transform373 = x3d.Transform()
Transform373.translation = [-0.1086,0,0.0762]
Shape374 = x3d.Shape()
Shape374.USE = "HAnimJointShape"

Transform373.children.append(Shape374)

HAnimSegment371.children.append(Transform373)
Shape375 = x3d.Shape()
LineSet376 = x3d.LineSet()
LineSet376.vertexCount = [2]
ColorRGBA377 = x3d.ColorRGBA()
ColorRGBA377.USE = "HAnimSiteLineColorRGBA"

LineSet376.color = ColorRGBA377
Coordinate378 = x3d.Coordinate()
Coordinate378.point = [(-0.1086, 0, 0.0762),(-0.1043, 0.0227, 0.145)]

LineSet376.coord = Coordinate378

Shape375.geometry = LineSet376

HAnimSegment371.children.append(Shape375)
Shape379 = x3d.Shape()
LineSet380 = x3d.LineSet()
LineSet380.vertexCount = [2]
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.USE = "HAnimSiteLineColorRGBA"

LineSet380.color = ColorRGBA381
Coordinate382 = x3d.Coordinate()
Coordinate382.point = [(-0.1086, 0, 0.0762),(-0.1523, 0.0166, 0.0895)]

LineSet380.coord = Coordinate382

Shape379.geometry = LineSet380

HAnimSegment371.children.append(Shape379)
Shape383 = x3d.Shape()
LineSet384 = x3d.LineSet()
LineSet384.vertexCount = [2]
ColorRGBA385 = x3d.ColorRGBA()
ColorRGBA385.USE = "HAnimSiteLineColorRGBA"

LineSet384.color = ColorRGBA385
Coordinate386 = x3d.Coordinate()
Coordinate386.point = [(-0.1086, 0, 0.0762),(-0.0883, 0.0134, 0.1383)]

LineSet384.coord = Coordinate386

Shape383.geometry = LineSet384

HAnimSegment371.children.append(Shape383)
HAnimSite387 = x3d.HAnimSite()
HAnimSite387.DEF = "hanim_r_forefoot_tip"
HAnimSite387.name = "r_forefoot_tip"
HAnimSite387.translation = [-0.1043,0.0227,0.145]
TouchSensor388 = x3d.TouchSensor()
TouchSensor388.description = "HAnimSite r_forefoot_tip"

HAnimSite387.children.append(TouchSensor388)
Shape389 = x3d.Shape()
Shape389.USE = "HAnimSiteShape"

HAnimSite387.children.append(Shape389)

HAnimSegment371.children.append(HAnimSite387)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.DEF = "hanim_r_metatarsal_pha5_pt"
HAnimSite390.name = "r_metatarsal_pha5_pt"
HAnimSite390.translation = [-0.1523,0.0166,0.0895]
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.description = "HAnimSite r_metatarsal_pha5"

HAnimSite390.children.append(TouchSensor391)
Shape392 = x3d.Shape()
Shape392.USE = "HAnimSiteShape"

HAnimSite390.children.append(Shape392)

HAnimSegment371.children.append(HAnimSite390)
HAnimSite393 = x3d.HAnimSite()
HAnimSite393.DEF = "hanim_r_digit2_pt"
HAnimSite393.name = "r_digit2_pt"
HAnimSite393.translation = [-0.0883,0.0134,0.1383]
TouchSensor394 = x3d.TouchSensor()
TouchSensor394.description = "HAnimSite r_digit2"

HAnimSite393.children.append(TouchSensor394)
Shape395 = x3d.Shape()
Shape395.USE = "HAnimSiteShape"

HAnimSite393.children.append(Shape395)

HAnimSegment371.children.append(HAnimSite393)

HAnimJoint370.children.append(HAnimSegment371)

HAnimJoint354.children.append(HAnimJoint370)

HAnimJoint345.children.append(HAnimJoint354)

HAnimJoint308.children.append(HAnimJoint345)

HAnimJoint299.children.append(HAnimJoint308)

HAnimJoint269.children.append(HAnimJoint299)

HAnimJoint62.children.append(HAnimJoint269)

HAnimJoint46.children.append(HAnimJoint62)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.DEF = "hanim_vl5"
HAnimJoint396.name = "vl5"
HAnimJoint396.center = [0.0028,1.0568,-0.0776]
HAnimSegment397 = x3d.HAnimSegment()
HAnimSegment397.DEF = "hanim_l5"
HAnimSegment397.name = "l5"
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.description = "HAnimJoint vl5, HAnimSegment l5"

HAnimSegment397.children.append(TouchSensor398)
Transform399 = x3d.Transform()
Transform399.translation = [0.0028,1.0568,-0.0776]
Shape400 = x3d.Shape()
Shape400.USE = "HAnimJointShape"

Transform399.children.append(Shape400)

HAnimSegment397.children.append(Transform399)
Shape401 = x3d.Shape()
LineSet402 = x3d.LineSet()
LineSet402.vertexCount = [2]
ColorRGBA403 = x3d.ColorRGBA()
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA"

LineSet402.color = ColorRGBA403
Coordinate404 = x3d.Coordinate()
Coordinate404.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet402.coord = Coordinate404

Shape401.geometry = LineSet402

HAnimSegment397.children.append(Shape401)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.vertexCount = [2]
ColorRGBA407 = x3d.ColorRGBA()
ColorRGBA407.USE = "HAnimSiteLineColorRGBA"

LineSet406.color = ColorRGBA407
Coordinate408 = x3d.Coordinate()
Coordinate408.point = [(0.0028, 1.0568, -0.0776),(0, 1.0915, -0.1091)]

LineSet406.coord = Coordinate408

Shape405.geometry = LineSet406

HAnimSegment397.children.append(Shape405)
Shape409 = x3d.Shape()
LineSet410 = x3d.LineSet()
LineSet410.vertexCount = [2]
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.USE = "HAnimSiteLineColorRGBA"

LineSet410.color = ColorRGBA411
Coordinate412 = x3d.Coordinate()
Coordinate412.point = [(0.0028, 1.0568, -0.0776),(0.0069, 1.0966, 0.1017)]

LineSet410.coord = Coordinate412

Shape409.geometry = LineSet410

HAnimSegment397.children.append(Shape409)
HAnimSite413 = x3d.HAnimSite()
HAnimSite413.DEF = "hanim_waist_preferred_post_pt"
HAnimSite413.name = "waist_preferred_post_pt"
HAnimSite413.translation = [0,1.0915,-0.1091]
TouchSensor414 = x3d.TouchSensor()
TouchSensor414.description = "HAnimSite waist_preferred_post"

HAnimSite413.children.append(TouchSensor414)
Shape415 = x3d.Shape()
Shape415.USE = "HAnimSiteShape"

HAnimSite413.children.append(Shape415)

HAnimSegment397.children.append(HAnimSite413)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.DEF = "hanim_navel_pt"
HAnimSite416.name = "navel_pt"
HAnimSite416.translation = [0.0069,1.0966,0.1017]
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.description = "HAnimSite navel"

HAnimSite416.children.append(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.USE = "HAnimSiteShape"

HAnimSite416.children.append(Shape418)

HAnimSegment397.children.append(HAnimSite416)

HAnimJoint396.children.append(HAnimSegment397)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.DEF = "hanim_vl4"
HAnimJoint419.name = "vl4"
HAnimJoint419.center = [0.0035,1.0925,-0.0787]
HAnimSegment420 = x3d.HAnimSegment()
HAnimSegment420.DEF = "hanim_l4"
HAnimSegment420.name = "l4"
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.description = "HAnimJoint vl4, HAnimSegment l4"

HAnimSegment420.children.append(TouchSensor421)
Transform422 = x3d.Transform()
Transform422.translation = [0.0035,1.0925,-0.0787]
Shape423 = x3d.Shape()
Shape423.USE = "HAnimJointShape"

Transform422.children.append(Shape423)

HAnimSegment420.children.append(Transform422)
Shape424 = x3d.Shape()
LineSet425 = x3d.LineSet()
LineSet425.vertexCount = [2]
ColorRGBA426 = x3d.ColorRGBA()
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA"

LineSet425.color = ColorRGBA426
Coordinate427 = x3d.Coordinate()
Coordinate427.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet425.coord = Coordinate427

Shape424.geometry = LineSet425

HAnimSegment420.children.append(Shape424)

HAnimJoint419.children.append(HAnimSegment420)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.DEF = "hanim_vl3"
HAnimJoint428.name = "vl3"
HAnimJoint428.center = [0.0041,1.1276,-0.0796]
HAnimSegment429 = x3d.HAnimSegment()
HAnimSegment429.DEF = "hanim_l3"
HAnimSegment429.name = "l3"
TouchSensor430 = x3d.TouchSensor()
TouchSensor430.description = "HAnimJoint vl3, HAnimSegment l3"

HAnimSegment429.children.append(TouchSensor430)
Transform431 = x3d.Transform()
Transform431.translation = [0.0041,1.1276,-0.0796]
Shape432 = x3d.Shape()
Shape432.USE = "HAnimJointShape"

Transform431.children.append(Shape432)

HAnimSegment429.children.append(Transform431)
Shape433 = x3d.Shape()
LineSet434 = x3d.LineSet()
LineSet434.vertexCount = [2]
ColorRGBA435 = x3d.ColorRGBA()
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA"

LineSet434.color = ColorRGBA435
Coordinate436 = x3d.Coordinate()
Coordinate436.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet434.coord = Coordinate436

Shape433.geometry = LineSet434

HAnimSegment429.children.append(Shape433)

HAnimJoint428.children.append(HAnimSegment429)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.DEF = "hanim_vl2"
HAnimJoint437.name = "vl2"
HAnimJoint437.center = [0.0045,1.1546,-0.08]
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.DEF = "hanim_l2"
HAnimSegment438.name = "l2"
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.description = "HAnimJoint vl2, HAnimSegment l2"

HAnimSegment438.children.append(TouchSensor439)
Transform440 = x3d.Transform()
Transform440.translation = [0.0045,1.1546,-0.08]
Shape441 = x3d.Shape()
Shape441.USE = "HAnimJointShape"

Transform440.children.append(Shape441)

HAnimSegment438.children.append(Transform440)
Shape442 = x3d.Shape()
LineSet443 = x3d.LineSet()
LineSet443.vertexCount = [2]
ColorRGBA444 = x3d.ColorRGBA()
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA"

LineSet443.color = ColorRGBA444
Coordinate445 = x3d.Coordinate()
Coordinate445.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet443.coord = Coordinate445

Shape442.geometry = LineSet443

HAnimSegment438.children.append(Shape442)
Shape446 = x3d.Shape()
LineSet447 = x3d.LineSet()
LineSet447.vertexCount = [2]
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.USE = "HAnimSiteLineColorRGBA"

LineSet447.color = ColorRGBA448
Coordinate449 = x3d.Coordinate()
Coordinate449.point = [(0.0045, 1.1546, -0.08),(-0.0711, 1.1941, 0.1016)]

LineSet447.coord = Coordinate449

Shape446.geometry = LineSet447

HAnimSegment438.children.append(Shape446)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.vertexCount = [2]
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.USE = "HAnimSiteLineColorRGBA"

LineSet451.color = ColorRGBA452
Coordinate453 = x3d.Coordinate()
Coordinate453.point = [(0.0045, 1.1546, -0.08),(0.0871, 1.1925, 0.0992)]

LineSet451.coord = Coordinate453

Shape450.geometry = LineSet451

HAnimSegment438.children.append(Shape450)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.vertexCount = [2]
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.USE = "HAnimSiteLineColorRGBA"

LineSet455.color = ColorRGBA456
Coordinate457 = x3d.Coordinate()
Coordinate457.point = [(0.0045, 1.1546, -0.08),(0.0049, 1.1908, -0.1113)]

LineSet455.coord = Coordinate457

Shape454.geometry = LineSet455

HAnimSegment438.children.append(Shape454)
HAnimSite458 = x3d.HAnimSite()
HAnimSite458.DEF = "hanim_r_rib10_pt"
HAnimSite458.name = "r_rib10_pt"
HAnimSite458.translation = [-0.0711,1.1941,0.1016]
TouchSensor459 = x3d.TouchSensor()
TouchSensor459.description = "HAnimSite r_rib10"

HAnimSite458.children.append(TouchSensor459)
Shape460 = x3d.Shape()
Shape460.USE = "HAnimSiteShape"

HAnimSite458.children.append(Shape460)

HAnimSegment438.children.append(HAnimSite458)
HAnimSite461 = x3d.HAnimSite()
HAnimSite461.DEF = "hanim_l_rib10_pt"
HAnimSite461.name = "l_rib10_pt"
HAnimSite461.translation = [0.0871,1.1925,0.0992]
TouchSensor462 = x3d.TouchSensor()
TouchSensor462.description = "HAnimSite l_rib10"

HAnimSite461.children.append(TouchSensor462)
Shape463 = x3d.Shape()
Shape463.USE = "HAnimSiteShape"

HAnimSite461.children.append(Shape463)

HAnimSegment438.children.append(HAnimSite461)
HAnimSite464 = x3d.HAnimSite()
HAnimSite464.DEF = "hanim_rib10_midspine_pt"
HAnimSite464.name = "rib10_midspine_pt"
HAnimSite464.translation = [0.0049,1.1908,-0.1113]
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.description = "HAnimSite rib10_midspine"

HAnimSite464.children.append(TouchSensor465)
Shape466 = x3d.Shape()
Shape466.USE = "HAnimSiteShape"

HAnimSite464.children.append(Shape466)

HAnimSegment438.children.append(HAnimSite464)

HAnimJoint437.children.append(HAnimSegment438)
HAnimJoint467 = x3d.HAnimJoint()
HAnimJoint467.DEF = "hanim_vl1"
HAnimJoint467.name = "vl1"
HAnimJoint467.center = [0.0048,1.1912,-0.0805]
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.DEF = "hanim_l1"
HAnimSegment468.name = "l1"
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimJoint vl1, HAnimSegment l1"

HAnimSegment468.children.append(TouchSensor469)
Transform470 = x3d.Transform()
Transform470.translation = [0.0048,1.1912,-0.0805]
Shape471 = x3d.Shape()
Shape471.USE = "HAnimJointShape"

Transform470.children.append(Shape471)

HAnimSegment468.children.append(Transform470)
Shape472 = x3d.Shape()
LineSet473 = x3d.LineSet()
LineSet473.vertexCount = [2]
ColorRGBA474 = x3d.ColorRGBA()
ColorRGBA474.USE = "HAnimSegmentLineColorRGBA"

LineSet473.color = ColorRGBA474
Coordinate475 = x3d.Coordinate()
Coordinate475.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet473.coord = Coordinate475

Shape472.geometry = LineSet473

HAnimSegment468.children.append(Shape472)

HAnimJoint467.children.append(HAnimSegment468)
HAnimJoint476 = x3d.HAnimJoint()
HAnimJoint476.DEF = "hanim_vt12"
HAnimJoint476.name = "vt12"
HAnimJoint476.center = [0.0051,1.2278,-0.0808]
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.DEF = "hanim_t12"
HAnimSegment477.name = "t12"
TouchSensor478 = x3d.TouchSensor()
TouchSensor478.description = "HAnimJoint vt12, HAnimSegment t12"

HAnimSegment477.children.append(TouchSensor478)
Transform479 = x3d.Transform()
Transform479.translation = [0.0051,1.2278,-0.0808]
Shape480 = x3d.Shape()
Shape480.USE = "HAnimJointShape"

Transform479.children.append(Shape480)

HAnimSegment477.children.append(Transform479)
Shape481 = x3d.Shape()
LineSet482 = x3d.LineSet()
LineSet482.vertexCount = [2]
ColorRGBA483 = x3d.ColorRGBA()
ColorRGBA483.USE = "HAnimSegmentLineColorRGBA"

LineSet482.color = ColorRGBA483
Coordinate484 = x3d.Coordinate()
Coordinate484.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet482.coord = Coordinate484

Shape481.geometry = LineSet482

HAnimSegment477.children.append(Shape481)

HAnimJoint476.children.append(HAnimSegment477)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.DEF = "hanim_vt11"
HAnimJoint485.name = "vt11"
HAnimJoint485.center = [0.0053,1.2679,-0.081]
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.DEF = "hanim_t11"
HAnimSegment486.name = "t11"
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.description = "HAnimJoint vt11, HAnimSegment t11"

HAnimSegment486.children.append(TouchSensor487)
Transform488 = x3d.Transform()
Transform488.translation = [0.0053,1.2679,-0.081]
Shape489 = x3d.Shape()
Shape489.USE = "HAnimJointShape"

Transform488.children.append(Shape489)

HAnimSegment486.children.append(Transform488)
Shape490 = x3d.Shape()
LineSet491 = x3d.LineSet()
LineSet491.vertexCount = [2]
ColorRGBA492 = x3d.ColorRGBA()
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA"

LineSet491.color = ColorRGBA492
Coordinate493 = x3d.Coordinate()
Coordinate493.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet491.coord = Coordinate493

Shape490.geometry = LineSet491

HAnimSegment486.children.append(Shape490)

HAnimJoint485.children.append(HAnimSegment486)
HAnimJoint494 = x3d.HAnimJoint()
HAnimJoint494.DEF = "hanim_vt10"
HAnimJoint494.name = "vt10"
HAnimJoint494.center = [0.0056,1.2848,-0.0822]
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.DEF = "hanim_t10"
HAnimSegment495.name = "t10"
TouchSensor496 = x3d.TouchSensor()
TouchSensor496.description = "HAnimJoint vt10, HAnimSegment t10"

HAnimSegment495.children.append(TouchSensor496)
Transform497 = x3d.Transform()
Transform497.translation = [0.0056,1.2848,-0.0822]
Shape498 = x3d.Shape()
Shape498.USE = "HAnimJointShape"

Transform497.children.append(Shape498)

HAnimSegment495.children.append(Transform497)
Shape499 = x3d.Shape()
LineSet500 = x3d.LineSet()
LineSet500.vertexCount = [2]
ColorRGBA501 = x3d.ColorRGBA()
ColorRGBA501.USE = "HAnimSegmentLineColorRGBA"

LineSet500.color = ColorRGBA501
Coordinate502 = x3d.Coordinate()
Coordinate502.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet500.coord = Coordinate502

Shape499.geometry = LineSet500

HAnimSegment495.children.append(Shape499)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.vertexCount = [2]
ColorRGBA505 = x3d.ColorRGBA()
ColorRGBA505.USE = "HAnimSiteLineColorRGBA"

LineSet504.color = ColorRGBA505
Coordinate506 = x3d.Coordinate()
Coordinate506.point = [(0.0056, 1.2848, -0.0822),(0.0085, 1.2995, 0.1147)]

LineSet504.coord = Coordinate506

Shape503.geometry = LineSet504

HAnimSegment495.children.append(Shape503)
HAnimSite507 = x3d.HAnimSite()
HAnimSite507.DEF = "hanim_substernale_pt"
HAnimSite507.name = "substernale_pt"
HAnimSite507.translation = [0.0085,1.2995,0.1147]
TouchSensor508 = x3d.TouchSensor()
TouchSensor508.description = "HAnimSite substernale"

HAnimSite507.children.append(TouchSensor508)
Shape509 = x3d.Shape()
Shape509.USE = "HAnimSiteShape"

HAnimSite507.children.append(Shape509)

HAnimSegment495.children.append(HAnimSite507)

HAnimJoint494.children.append(HAnimSegment495)
HAnimJoint510 = x3d.HAnimJoint()
HAnimJoint510.DEF = "hanim_vt9"
HAnimJoint510.name = "vt9"
HAnimJoint510.center = [0.0057,1.3126,-0.0838]
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.DEF = "hanim_t9"
HAnimSegment511.name = "t9"
TouchSensor512 = x3d.TouchSensor()
TouchSensor512.description = "HAnimJoint vt9, HAnimSegment t9"

HAnimSegment511.children.append(TouchSensor512)
Transform513 = x3d.Transform()
Transform513.translation = [0.0057,1.3126,-0.0838]
Shape514 = x3d.Shape()
Shape514.USE = "HAnimJointShape"

Transform513.children.append(Shape514)

HAnimSegment511.children.append(Transform513)
Shape515 = x3d.Shape()
LineSet516 = x3d.LineSet()
LineSet516.vertexCount = [2]
ColorRGBA517 = x3d.ColorRGBA()
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA"

LineSet516.color = ColorRGBA517
Coordinate518 = x3d.Coordinate()
Coordinate518.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet516.coord = Coordinate518

Shape515.geometry = LineSet516

HAnimSegment511.children.append(Shape515)
Shape519 = x3d.Shape()
LineSet520 = x3d.LineSet()
LineSet520.vertexCount = [2]
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.USE = "HAnimSiteLineColorRGBA"

LineSet520.color = ColorRGBA521
Coordinate522 = x3d.Coordinate()
Coordinate522.point = [(0.0057, 1.3126, -0.0838),(-0.0736, 1.3385, 0.1217)]

LineSet520.coord = Coordinate522

Shape519.geometry = LineSet520

HAnimSegment511.children.append(Shape519)
Shape523 = x3d.Shape()
LineSet524 = x3d.LineSet()
LineSet524.vertexCount = [2]
ColorRGBA525 = x3d.ColorRGBA()
ColorRGBA525.USE = "HAnimSiteLineColorRGBA"

LineSet524.color = ColorRGBA525
Coordinate526 = x3d.Coordinate()
Coordinate526.point = [(0.0057, 1.3126, -0.0838),(0.0918, 1.3382, 0.1192)]

LineSet524.coord = Coordinate526

Shape523.geometry = LineSet524

HAnimSegment511.children.append(Shape523)
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.DEF = "hanim_r_thelion_pt"
HAnimSite527.name = "r_thelion_pt"
HAnimSite527.translation = [-0.0736,1.3385,0.1217]
TouchSensor528 = x3d.TouchSensor()
TouchSensor528.description = "HAnimSite r_thelion"

HAnimSite527.children.append(TouchSensor528)
Shape529 = x3d.Shape()
Shape529.USE = "HAnimSiteShape"

HAnimSite527.children.append(Shape529)

HAnimSegment511.children.append(HAnimSite527)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.DEF = "hanim_l_thelion_pt"
HAnimSite530.name = "l_thelion_pt"
HAnimSite530.translation = [0.0918,1.3382,0.1192]
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.description = "HAnimSite l_thelion"

HAnimSite530.children.append(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.USE = "HAnimSiteShape"

HAnimSite530.children.append(Shape532)

HAnimSegment511.children.append(HAnimSite530)

HAnimJoint510.children.append(HAnimSegment511)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.DEF = "hanim_vt8"
HAnimJoint533.name = "vt8"
HAnimJoint533.center = [0.0057,1.3382,-0.0845]
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.DEF = "hanim_t8"
HAnimSegment534.name = "t8"
TouchSensor535 = x3d.TouchSensor()
TouchSensor535.description = "HAnimJoint vt8, HAnimSegment t8"

HAnimSegment534.children.append(TouchSensor535)
Transform536 = x3d.Transform()
Transform536.translation = [0.0057,1.3382,-0.0845]
Shape537 = x3d.Shape()
Shape537.USE = "HAnimJointShape"

Transform536.children.append(Shape537)

HAnimSegment534.children.append(Transform536)
Shape538 = x3d.Shape()
LineSet539 = x3d.LineSet()
LineSet539.vertexCount = [2]
ColorRGBA540 = x3d.ColorRGBA()
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA"

LineSet539.color = ColorRGBA540
Coordinate541 = x3d.Coordinate()
Coordinate541.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet539.coord = Coordinate541

Shape538.geometry = LineSet539

HAnimSegment534.children.append(Shape538)

HAnimJoint533.children.append(HAnimSegment534)
HAnimJoint542 = x3d.HAnimJoint()
HAnimJoint542.DEF = "hanim_vt7"
HAnimJoint542.name = "vt7"
HAnimJoint542.center = [0.0058,1.3625,-0.0833]
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.DEF = "hanim_t7"
HAnimSegment543.name = "t7"
TouchSensor544 = x3d.TouchSensor()
TouchSensor544.description = "HAnimJoint vt7, HAnimSegment t7"

HAnimSegment543.children.append(TouchSensor544)
Transform545 = x3d.Transform()
Transform545.translation = [0.0058,1.3625,-0.0833]
Shape546 = x3d.Shape()
Shape546.USE = "HAnimJointShape"

Transform545.children.append(Shape546)

HAnimSegment543.children.append(Transform545)
Shape547 = x3d.Shape()
LineSet548 = x3d.LineSet()
LineSet548.vertexCount = [2]
ColorRGBA549 = x3d.ColorRGBA()
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA"

LineSet548.color = ColorRGBA549
Coordinate550 = x3d.Coordinate()
Coordinate550.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet548.coord = Coordinate550

Shape547.geometry = LineSet548

HAnimSegment543.children.append(Shape547)

HAnimJoint542.children.append(HAnimSegment543)
HAnimJoint551 = x3d.HAnimJoint()
HAnimJoint551.DEF = "hanim_vt6"
HAnimJoint551.name = "vt6"
HAnimJoint551.center = [0.0059,1.3866,-0.08]
HAnimSegment552 = x3d.HAnimSegment()
HAnimSegment552.DEF = "hanim_t6"
HAnimSegment552.name = "t6"
TouchSensor553 = x3d.TouchSensor()
TouchSensor553.description = "HAnimJoint vt6, HAnimSegment t6"

HAnimSegment552.children.append(TouchSensor553)
Transform554 = x3d.Transform()
Transform554.translation = [0.0059,1.3866,-0.08]
Shape555 = x3d.Shape()
Shape555.USE = "HAnimJointShape"

Transform554.children.append(Shape555)

HAnimSegment552.children.append(Transform554)
Shape556 = x3d.Shape()
LineSet557 = x3d.LineSet()
LineSet557.vertexCount = [2]
ColorRGBA558 = x3d.ColorRGBA()
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA"

LineSet557.color = ColorRGBA558
Coordinate559 = x3d.Coordinate()
Coordinate559.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet557.coord = Coordinate559

Shape556.geometry = LineSet557

HAnimSegment552.children.append(Shape556)

HAnimJoint551.children.append(HAnimSegment552)
HAnimJoint560 = x3d.HAnimJoint()
HAnimJoint560.DEF = "hanim_vt5"
HAnimJoint560.name = "vt5"
HAnimJoint560.center = [0.006,1.4102,-0.0745]
HAnimSegment561 = x3d.HAnimSegment()
HAnimSegment561.DEF = "hanim_t5"
HAnimSegment561.name = "t5"
TouchSensor562 = x3d.TouchSensor()
TouchSensor562.description = "HAnimJoint vt5, HAnimSegment t5"

HAnimSegment561.children.append(TouchSensor562)
Transform563 = x3d.Transform()
Transform563.translation = [0.006,1.4102,-0.0745]
Shape564 = x3d.Shape()
Shape564.USE = "HAnimJointShape"

Transform563.children.append(Shape564)

HAnimSegment561.children.append(Transform563)
Shape565 = x3d.Shape()
LineSet566 = x3d.LineSet()
LineSet566.vertexCount = [2]
ColorRGBA567 = x3d.ColorRGBA()
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA"

LineSet566.color = ColorRGBA567
Coordinate568 = x3d.Coordinate()
Coordinate568.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet566.coord = Coordinate568

Shape565.geometry = LineSet566

HAnimSegment561.children.append(Shape565)

HAnimJoint560.children.append(HAnimSegment561)
HAnimJoint569 = x3d.HAnimJoint()
HAnimJoint569.DEF = "hanim_vt4"
HAnimJoint569.name = "vt4"
HAnimJoint569.center = [0.0061,1.432,-0.0675]
HAnimSegment570 = x3d.HAnimSegment()
HAnimSegment570.DEF = "hanim_t4"
HAnimSegment570.name = "t4"
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.description = "HAnimJoint vt4, HAnimSegment t4"

HAnimSegment570.children.append(TouchSensor571)
Transform572 = x3d.Transform()
Transform572.translation = [0.0061,1.432,-0.0675]
Shape573 = x3d.Shape()
Shape573.USE = "HAnimJointShape"

Transform572.children.append(Shape573)

HAnimSegment570.children.append(Transform572)
Shape574 = x3d.Shape()
LineSet575 = x3d.LineSet()
LineSet575.vertexCount = [2]
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA"

LineSet575.color = ColorRGBA576
Coordinate577 = x3d.Coordinate()
Coordinate577.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet575.coord = Coordinate577

Shape574.geometry = LineSet575

HAnimSegment570.children.append(Shape574)

HAnimJoint569.children.append(HAnimSegment570)
HAnimJoint578 = x3d.HAnimJoint()
HAnimJoint578.DEF = "hanim_vt3"
HAnimJoint578.name = "vt3"
HAnimJoint578.center = [0.0062,1.4583,-0.057]
HAnimSegment579 = x3d.HAnimSegment()
HAnimSegment579.DEF = "hanim_t3"
HAnimSegment579.name = "t3"
TouchSensor580 = x3d.TouchSensor()
TouchSensor580.description = "HAnimJoint vt3, HAnimSegment t3"

HAnimSegment579.children.append(TouchSensor580)
Transform581 = x3d.Transform()
Transform581.translation = [0.0062,1.4583,-0.057]
Shape582 = x3d.Shape()
Shape582.USE = "HAnimJointShape"

Transform581.children.append(Shape582)

HAnimSegment579.children.append(Transform581)
Shape583 = x3d.Shape()
LineSet584 = x3d.LineSet()
LineSet584.vertexCount = [2]
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA"

LineSet584.color = ColorRGBA585
Coordinate586 = x3d.Coordinate()
Coordinate586.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet584.coord = Coordinate586

Shape583.geometry = LineSet584

HAnimSegment579.children.append(Shape583)

HAnimJoint578.children.append(HAnimSegment579)
HAnimJoint587 = x3d.HAnimJoint()
HAnimJoint587.DEF = "hanim_vt2"
HAnimJoint587.name = "vt2"
HAnimJoint587.center = [0.0063,1.4761,-0.0484]
HAnimSegment588 = x3d.HAnimSegment()
HAnimSegment588.DEF = "hanim_t2"
HAnimSegment588.name = "t2"
TouchSensor589 = x3d.TouchSensor()
TouchSensor589.description = "HAnimJoint vt2, HAnimSegment t2"

HAnimSegment588.children.append(TouchSensor589)
Transform590 = x3d.Transform()
Transform590.translation = [0.0063,1.4761,-0.0484]
Shape591 = x3d.Shape()
Shape591.USE = "HAnimJointShape"

Transform590.children.append(Shape591)

HAnimSegment588.children.append(Transform590)
Shape592 = x3d.Shape()
LineSet593 = x3d.LineSet()
LineSet593.vertexCount = [2]
ColorRGBA594 = x3d.ColorRGBA()
ColorRGBA594.USE = "HAnimSegmentLineColorRGBA"

LineSet593.color = ColorRGBA594
Coordinate595 = x3d.Coordinate()
Coordinate595.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet593.coord = Coordinate595

Shape592.geometry = LineSet593

HAnimSegment588.children.append(Shape592)

HAnimJoint587.children.append(HAnimSegment588)
HAnimJoint596 = x3d.HAnimJoint()
HAnimJoint596.DEF = "hanim_vt1"
HAnimJoint596.name = "vt1"
HAnimJoint596.center = [0.0065,1.4951,-0.0387]
HAnimSegment597 = x3d.HAnimSegment()
HAnimSegment597.DEF = "hanim_t1"
HAnimSegment597.name = "t1"
TouchSensor598 = x3d.TouchSensor()
TouchSensor598.description = "HAnimJoint vt1, HAnimSegment t1"

HAnimSegment597.children.append(TouchSensor598)
Transform599 = x3d.Transform()
Transform599.translation = [0.0065,1.4951,-0.0387]
Shape600 = x3d.Shape()
Shape600.USE = "HAnimJointShape"

Transform599.children.append(Shape600)

HAnimSegment597.children.append(Transform599)
Shape601 = x3d.Shape()
LineSet602 = x3d.LineSet()
LineSet602.vertexCount = [2]
ColorRGBA603 = x3d.ColorRGBA()
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA"

LineSet602.color = ColorRGBA603
Coordinate604 = x3d.Coordinate()
Coordinate604.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet602.coord = Coordinate604

Shape601.geometry = LineSet602

HAnimSegment597.children.append(Shape601)
Shape605 = x3d.Shape()
LineSet606 = x3d.LineSet()
LineSet606.vertexCount = [2]
ColorRGBA607 = x3d.ColorRGBA()
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA"

LineSet606.color = ColorRGBA607
Coordinate608 = x3d.Coordinate()
Coordinate608.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet606.coord = Coordinate608

Shape605.geometry = LineSet606

HAnimSegment597.children.append(Shape605)
Shape609 = x3d.Shape()
LineSet610 = x3d.LineSet()
LineSet610.vertexCount = [2]
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA"

LineSet610.color = ColorRGBA611
Coordinate612 = x3d.Coordinate()
Coordinate612.point = [(0.0065, 1.4951, -0.0387),(-0.082, 1.4488, -0.0353)]

LineSet610.coord = Coordinate612

Shape609.geometry = LineSet610

HAnimSegment597.children.append(Shape609)
Shape613 = x3d.Shape()
LineSet614 = x3d.LineSet()
LineSet614.vertexCount = [2]
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.USE = "HAnimSiteLineColorRGBA"

LineSet614.color = ColorRGBA615
Coordinate616 = x3d.Coordinate()
Coordinate616.point = [(0.0065, 1.4951, -0.0387),(0.0084, 1.4714, 0.0551)]

LineSet614.coord = Coordinate616

Shape613.geometry = LineSet614

HAnimSegment597.children.append(Shape613)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.vertexCount = [2]
ColorRGBA619 = x3d.ColorRGBA()
ColorRGBA619.USE = "HAnimSiteLineColorRGBA"

LineSet618.color = ColorRGBA619
Coordinate620 = x3d.Coordinate()
Coordinate620.point = [(0.0065, 1.4951, -0.0387),(0.0064, 1.52, -0.0815)]

LineSet618.coord = Coordinate620

Shape617.geometry = LineSet618

HAnimSegment597.children.append(Shape617)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.DEF = "hanim_suprasternale_pt"
HAnimSite621.name = "suprasternale_pt"
HAnimSite621.translation = [0.0084,1.4714,0.0551]
TouchSensor622 = x3d.TouchSensor()
TouchSensor622.description = "HAnimSite suprasternale"

HAnimSite621.children.append(TouchSensor622)
Shape623 = x3d.Shape()
Shape623.USE = "HAnimSiteShape"

HAnimSite621.children.append(Shape623)

HAnimSegment597.children.append(HAnimSite621)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.DEF = "hanim_cervicale_pt"
HAnimSite624.name = "cervicale_pt"
HAnimSite624.translation = [0.0064,1.52,-0.0815]
TouchSensor625 = x3d.TouchSensor()
TouchSensor625.description = "HAnimSite cervicale"

HAnimSite624.children.append(TouchSensor625)
Shape626 = x3d.Shape()
Shape626.USE = "HAnimSiteShape"

HAnimSite624.children.append(Shape626)

HAnimSegment597.children.append(HAnimSite624)

HAnimJoint596.children.append(HAnimSegment597)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.DEF = "hanim_vc7"
HAnimJoint627.name = "vc7"
HAnimJoint627.center = [0.0066,1.5132,-0.0301]
HAnimSegment628 = x3d.HAnimSegment()
HAnimSegment628.DEF = "hanim_c7"
HAnimSegment628.name = "c7"
TouchSensor629 = x3d.TouchSensor()
TouchSensor629.description = "HAnimJoint vc7, HAnimSegment c7"

HAnimSegment628.children.append(TouchSensor629)
Transform630 = x3d.Transform()
Transform630.translation = [0.0066,1.5132,-0.0301]
Shape631 = x3d.Shape()
Shape631.USE = "HAnimJointShape"

Transform630.children.append(Shape631)

HAnimSegment628.children.append(Transform630)
Shape632 = x3d.Shape()
LineSet633 = x3d.LineSet()
LineSet633.vertexCount = [2]
ColorRGBA634 = x3d.ColorRGBA()
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA"

LineSet633.color = ColorRGBA634
Coordinate635 = x3d.Coordinate()
Coordinate635.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet633.coord = Coordinate635

Shape632.geometry = LineSet633

HAnimSegment628.children.append(Shape632)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.vertexCount = [2]
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.USE = "HAnimSiteLineColorRGBA"

LineSet637.color = ColorRGBA638
Coordinate639 = x3d.Coordinate()
Coordinate639.point = [(0.0066, 1.5132, -0.0301),(-0.0419, 1.5149, -0.022)]

LineSet637.coord = Coordinate639

Shape636.geometry = LineSet637

HAnimSegment628.children.append(Shape636)
Shape640 = x3d.Shape()
LineSet641 = x3d.LineSet()
LineSet641.vertexCount = [2]
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.USE = "HAnimSiteLineColorRGBA"

LineSet641.color = ColorRGBA642
Coordinate643 = x3d.Coordinate()
Coordinate643.point = [(0.0066, 1.5132, -0.0301),(0.0646, 1.5141, -0.038)]

LineSet641.coord = Coordinate643

Shape640.geometry = LineSet641

HAnimSegment628.children.append(Shape640)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.DEF = "hanim_r_neck_base_pt"
HAnimSite644.name = "r_neck_base_pt"
HAnimSite644.translation = [-0.0419,1.5149,-0.022]
TouchSensor645 = x3d.TouchSensor()
TouchSensor645.description = "HAnimSite r_neck_base"

HAnimSite644.children.append(TouchSensor645)
Shape646 = x3d.Shape()
Shape646.USE = "HAnimSiteShape"

HAnimSite644.children.append(Shape646)

HAnimSegment628.children.append(HAnimSite644)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.DEF = "hanim_l_neck_base_pt"
HAnimSite647.name = "l_neck_base_pt"
HAnimSite647.translation = [0.0646,1.5141,-0.038]
TouchSensor648 = x3d.TouchSensor()
TouchSensor648.description = "HAnimSite l_neck_base"

HAnimSite647.children.append(TouchSensor648)
Shape649 = x3d.Shape()
Shape649.USE = "HAnimSiteShape"

HAnimSite647.children.append(Shape649)

HAnimSegment628.children.append(HAnimSite647)

HAnimJoint627.children.append(HAnimSegment628)
HAnimJoint650 = x3d.HAnimJoint()
HAnimJoint650.DEF = "hanim_vc6"
HAnimJoint650.name = "vc6"
HAnimJoint650.center = [0.0066,1.5357,-0.0143]
HAnimSegment651 = x3d.HAnimSegment()
HAnimSegment651.DEF = "hanim_c6"
HAnimSegment651.name = "c6"
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.description = "HAnimJoint vc6, HAnimSegment c6"

HAnimSegment651.children.append(TouchSensor652)
Transform653 = x3d.Transform()
Transform653.translation = [0.0066,1.5357,-0.0143]
Shape654 = x3d.Shape()
Shape654.USE = "HAnimJointShape"

Transform653.children.append(Shape654)

HAnimSegment651.children.append(Transform653)
Shape655 = x3d.Shape()
LineSet656 = x3d.LineSet()
LineSet656.vertexCount = [2]
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA"

LineSet656.color = ColorRGBA657
Coordinate658 = x3d.Coordinate()
Coordinate658.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet656.coord = Coordinate658

Shape655.geometry = LineSet656

HAnimSegment651.children.append(Shape655)

HAnimJoint650.children.append(HAnimSegment651)
HAnimJoint659 = x3d.HAnimJoint()
HAnimJoint659.DEF = "hanim_vc5"
HAnimJoint659.name = "vc5"
HAnimJoint659.center = [0.0066,1.552,-0.0082]
HAnimSegment660 = x3d.HAnimSegment()
HAnimSegment660.DEF = "hanim_c5"
HAnimSegment660.name = "c5"
TouchSensor661 = x3d.TouchSensor()
TouchSensor661.description = "HAnimJoint vc5, HAnimSegment c5"

HAnimSegment660.children.append(TouchSensor661)
Transform662 = x3d.Transform()
Transform662.translation = [0.0066,1.552,-0.0082]
Shape663 = x3d.Shape()
Shape663.USE = "HAnimJointShape"

Transform662.children.append(Shape663)

HAnimSegment660.children.append(Transform662)
Shape664 = x3d.Shape()
LineSet665 = x3d.LineSet()
LineSet665.vertexCount = [2]
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA"

LineSet665.color = ColorRGBA666
Coordinate667 = x3d.Coordinate()
Coordinate667.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet665.coord = Coordinate667

Shape664.geometry = LineSet665

HAnimSegment660.children.append(Shape664)

HAnimJoint659.children.append(HAnimSegment660)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.DEF = "hanim_vc4"
HAnimJoint668.name = "vc4"
HAnimJoint668.center = [0.0066,1.5662,-0.0084]
HAnimSegment669 = x3d.HAnimSegment()
HAnimSegment669.DEF = "hanim_c4"
HAnimSegment669.name = "c4"
TouchSensor670 = x3d.TouchSensor()
TouchSensor670.description = "HAnimJoint vc4, HAnimSegment c4"

HAnimSegment669.children.append(TouchSensor670)
Transform671 = x3d.Transform()
Transform671.translation = [0.0066,1.5662,-0.0084]
Shape672 = x3d.Shape()
Shape672.USE = "HAnimJointShape"

Transform671.children.append(Shape672)

HAnimSegment669.children.append(Transform671)
Shape673 = x3d.Shape()
LineSet674 = x3d.LineSet()
LineSet674.vertexCount = [2]
ColorRGBA675 = x3d.ColorRGBA()
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA"

LineSet674.color = ColorRGBA675
Coordinate676 = x3d.Coordinate()
Coordinate676.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet674.coord = Coordinate676

Shape673.geometry = LineSet674

HAnimSegment669.children.append(Shape673)

HAnimJoint668.children.append(HAnimSegment669)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.DEF = "hanim_vc3"
HAnimJoint677.name = "vc3"
HAnimJoint677.center = [0.0066,1.58,-0.0103]
HAnimSegment678 = x3d.HAnimSegment()
HAnimSegment678.DEF = "hanim_c3"
HAnimSegment678.name = "c3"
TouchSensor679 = x3d.TouchSensor()
TouchSensor679.description = "HAnimJoint vc3, HAnimSegment c3"

HAnimSegment678.children.append(TouchSensor679)
Transform680 = x3d.Transform()
Transform680.translation = [0.0066,1.58,-0.0103]
Shape681 = x3d.Shape()
Shape681.USE = "HAnimJointShape"

Transform680.children.append(Shape681)

HAnimSegment678.children.append(Transform680)
Shape682 = x3d.Shape()
LineSet683 = x3d.LineSet()
LineSet683.vertexCount = [2]
ColorRGBA684 = x3d.ColorRGBA()
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA"

LineSet683.color = ColorRGBA684
Coordinate685 = x3d.Coordinate()
Coordinate685.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet683.coord = Coordinate685

Shape682.geometry = LineSet683

HAnimSegment678.children.append(Shape682)

HAnimJoint677.children.append(HAnimSegment678)
HAnimJoint686 = x3d.HAnimJoint()
HAnimJoint686.DEF = "hanim_vc2"
HAnimJoint686.name = "vc2"
HAnimJoint686.center = [0.0066,1.5928,-0.0103]
HAnimSegment687 = x3d.HAnimSegment()
HAnimSegment687.DEF = "hanim_c2"
HAnimSegment687.name = "c2"
TouchSensor688 = x3d.TouchSensor()
TouchSensor688.description = "HAnimJoint vc2, HAnimSegment c2"

HAnimSegment687.children.append(TouchSensor688)
Transform689 = x3d.Transform()
Transform689.translation = [0.0066,1.5928,-0.0103]
Shape690 = x3d.Shape()
Shape690.USE = "HAnimJointShape"

Transform689.children.append(Shape690)

HAnimSegment687.children.append(Transform689)
Shape691 = x3d.Shape()
LineSet692 = x3d.LineSet()
LineSet692.vertexCount = [2]
ColorRGBA693 = x3d.ColorRGBA()
ColorRGBA693.USE = "HAnimSegmentLineColorRGBA"

LineSet692.color = ColorRGBA693
Coordinate694 = x3d.Coordinate()
Coordinate694.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet692.coord = Coordinate694

Shape691.geometry = LineSet692

HAnimSegment687.children.append(Shape691)

HAnimJoint686.children.append(HAnimSegment687)
HAnimJoint695 = x3d.HAnimJoint()
HAnimJoint695.DEF = "hanim_vc1"
HAnimJoint695.name = "vc1"
HAnimJoint695.center = [0.0066,1.6144,-0.0034]
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.DEF = "hanim_c1"
HAnimSegment696.name = "c1"
TouchSensor697 = x3d.TouchSensor()
TouchSensor697.description = "HAnimJoint vc1, HAnimSegment c1"

HAnimSegment696.children.append(TouchSensor697)
Transform698 = x3d.Transform()
Transform698.translation = [0.0066,1.6144,-0.0034]
Shape699 = x3d.Shape()
Shape699.USE = "HAnimJointShape"

Transform698.children.append(Shape699)

HAnimSegment696.children.append(Transform698)
Shape700 = x3d.Shape()
LineSet701 = x3d.LineSet()
LineSet701.vertexCount = [2]
ColorRGBA702 = x3d.ColorRGBA()
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA"

LineSet701.color = ColorRGBA702
Coordinate703 = x3d.Coordinate()
Coordinate703.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet701.coord = Coordinate703

Shape700.geometry = LineSet701

HAnimSegment696.children.append(Shape700)

HAnimJoint695.children.append(HAnimSegment696)
HAnimJoint704 = x3d.HAnimJoint()
HAnimJoint704.DEF = "hanim_skullbase"
HAnimJoint704.name = "skullbase"
HAnimJoint704.center = [0.0044,1.6209,0.0236]
HAnimSegment705 = x3d.HAnimSegment()
HAnimSegment705.DEF = "hanim_skull"
HAnimSegment705.name = "skull"
TouchSensor706 = x3d.TouchSensor()
TouchSensor706.description = "HAnimJoint skullbase, HAnimSegment skull"

HAnimSegment705.children.append(TouchSensor706)
Transform707 = x3d.Transform()
Transform707.translation = [0.0044,1.6209,0.0236]
Shape708 = x3d.Shape()
Shape708.USE = "HAnimJointShape"

Transform707.children.append(Shape708)

HAnimSegment705.children.append(Transform707)
Shape709 = x3d.Shape()
LineSet710 = x3d.LineSet()
LineSet710.vertexCount = [2]
ColorRGBA711 = x3d.ColorRGBA()
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA"

LineSet710.color = ColorRGBA711
Coordinate712 = x3d.Coordinate()
Coordinate712.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.6332, 0.0502)]

LineSet710.coord = Coordinate712

Shape709.geometry = LineSet710

HAnimSegment705.children.append(Shape709)
Shape713 = x3d.Shape()
LineSet714 = x3d.LineSet()
LineSet714.vertexCount = [2]
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA"

LineSet714.color = ColorRGBA715
Coordinate716 = x3d.Coordinate()
Coordinate716.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.6332, 0.0502)]

LineSet714.coord = Coordinate716

Shape713.geometry = LineSet714

HAnimSegment705.children.append(Shape713)
Shape717 = x3d.Shape()
LineSet718 = x3d.LineSet()
LineSet718.vertexCount = [2]
ColorRGBA719 = x3d.ColorRGBA()
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA"

LineSet718.color = ColorRGBA719
Coordinate720 = x3d.Coordinate()
Coordinate720.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.635, 0.0506)]

LineSet718.coord = Coordinate720

Shape717.geometry = LineSet718

HAnimSegment705.children.append(Shape717)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.vertexCount = [2]
ColorRGBA723 = x3d.ColorRGBA()
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA"

LineSet722.color = ColorRGBA723
Coordinate724 = x3d.Coordinate()
Coordinate724.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.6332, 0.0502)]

LineSet722.coord = Coordinate724

Shape721.geometry = LineSet722

HAnimSegment705.children.append(Shape721)
Shape725 = x3d.Shape()
LineSet726 = x3d.LineSet()
LineSet726.vertexCount = [2]
ColorRGBA727 = x3d.ColorRGBA()
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA"

LineSet726.color = ColorRGBA727
Coordinate728 = x3d.Coordinate()
Coordinate728.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.6332, 0.0502)]

LineSet726.coord = Coordinate728

Shape725.geometry = LineSet726

HAnimSegment705.children.append(Shape725)
Shape729 = x3d.Shape()
LineSet730 = x3d.LineSet()
LineSet730.vertexCount = [2]
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA"

LineSet730.color = ColorRGBA731
Coordinate732 = x3d.Coordinate()
Coordinate732.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.635, 0.0506)]

LineSet730.coord = Coordinate732

Shape729.geometry = LineSet730

HAnimSegment705.children.append(Shape729)
Shape733 = x3d.Shape()
LineSet734 = x3d.LineSet()
LineSet734.vertexCount = [2]
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA"

LineSet734.color = ColorRGBA735
Coordinate736 = x3d.Coordinate()
Coordinate736.point = [(0.0044, 1.6209, 0.0236),(0, 1.63, 0.015)]

LineSet734.coord = Coordinate736

Shape733.geometry = LineSet734

HAnimSegment705.children.append(Shape733)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.vertexCount = [2]
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.USE = "HAnimSiteLineColorRGBA"

LineSet738.color = ColorRGBA739
Coordinate740 = x3d.Coordinate()
Coordinate740.point = [(0.0044, 1.6209, 0.0236),(0.005, 1.7504, 0.0055)]

LineSet738.coord = Coordinate740

Shape737.geometry = LineSet738

HAnimSegment705.children.append(Shape737)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.vertexCount = [2]
ColorRGBA743 = x3d.ColorRGBA()
ColorRGBA743.USE = "HAnimSiteLineColorRGBA"

LineSet742.color = ColorRGBA743
Coordinate744 = x3d.Coordinate()
Coordinate744.point = [(0.0044, 1.6209, 0.0236),(0.0058, 1.6316, 0.0852)]

LineSet742.coord = Coordinate744

Shape741.geometry = LineSet742

HAnimSegment705.children.append(Shape741)
Shape745 = x3d.Shape()
LineSet746 = x3d.LineSet()
LineSet746.vertexCount = [2]
ColorRGBA747 = x3d.ColorRGBA()
ColorRGBA747.USE = "HAnimSiteLineColorRGBA"

LineSet746.color = ColorRGBA747
Coordinate748 = x3d.Coordinate()
Coordinate748.point = [(0.0044, 1.6209, 0.0236),(-0.0237, 1.6171, 0.0752)]

LineSet746.coord = Coordinate748

Shape745.geometry = LineSet746

HAnimSegment705.children.append(Shape745)
Shape749 = x3d.Shape()
LineSet750 = x3d.LineSet()
LineSet750.vertexCount = [2]
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.USE = "HAnimSiteLineColorRGBA"

LineSet750.color = ColorRGBA751
Coordinate752 = x3d.Coordinate()
Coordinate752.point = [(0.0044, 1.6209, 0.0236),(0.0341, 1.6171, 0.0752)]

LineSet750.coord = Coordinate752

Shape749.geometry = LineSet750

HAnimSegment705.children.append(Shape749)
Shape753 = x3d.Shape()
LineSet754 = x3d.LineSet()
LineSet754.vertexCount = [2]
ColorRGBA755 = x3d.ColorRGBA()
ColorRGBA755.USE = "HAnimSiteLineColorRGBA"

LineSet754.color = ColorRGBA755
Coordinate756 = x3d.Coordinate()
Coordinate756.point = [(0.0044, 1.6209, 0.0236),(0.0061, 1.541, 0.0805)]

LineSet754.coord = Coordinate756

Shape753.geometry = LineSet754

HAnimSegment705.children.append(Shape753)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.vertexCount = [2]
ColorRGBA759 = x3d.ColorRGBA()
ColorRGBA759.USE = "HAnimSiteLineColorRGBA"

LineSet758.color = ColorRGBA759
Coordinate760 = x3d.Coordinate()
Coordinate760.point = [(0.0044, 1.6209, 0.0236),(-0.0646, 1.6347, 0.0302)]

LineSet758.coord = Coordinate760

Shape757.geometry = LineSet758

HAnimSegment705.children.append(Shape757)
Shape761 = x3d.Shape()
LineSet762 = x3d.LineSet()
LineSet762.vertexCount = [2]
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.USE = "HAnimSiteLineColorRGBA"

LineSet762.color = ColorRGBA763
Coordinate764 = x3d.Coordinate()
Coordinate764.point = [(0.0044, 1.6209, 0.0236),(-0.052, 1.5529, 0.0347)]

LineSet762.coord = Coordinate764

Shape761.geometry = LineSet762

HAnimSegment705.children.append(Shape761)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.vertexCount = [2]
ColorRGBA767 = x3d.ColorRGBA()
ColorRGBA767.USE = "HAnimSiteLineColorRGBA"

LineSet766.color = ColorRGBA767
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(0.0044, 1.6209, 0.0236),(0.0739, 1.6348, 0.0282)]

LineSet766.coord = Coordinate768

Shape765.geometry = LineSet766

HAnimSegment705.children.append(Shape765)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.vertexCount = [2]
ColorRGBA771 = x3d.ColorRGBA()
ColorRGBA771.USE = "HAnimSiteLineColorRGBA"

LineSet770.color = ColorRGBA771
Coordinate772 = x3d.Coordinate()
Coordinate772.point = [(0.0044, 1.6209, 0.0236),(0.0631, 1.553, 0.033)]

LineSet770.coord = Coordinate772

Shape769.geometry = LineSet770

HAnimSegment705.children.append(Shape769)
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.vertexCount = [2]
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.USE = "HAnimSiteLineColorRGBA"

LineSet774.color = ColorRGBA775
Coordinate776 = x3d.Coordinate()
Coordinate776.point = [(0.0044, 1.6209, 0.0236),(0.0039, 1.5972, -0.0796)]

LineSet774.coord = Coordinate776

Shape773.geometry = LineSet774

HAnimSegment705.children.append(Shape773)
HAnimSite777 = x3d.HAnimSite()
HAnimSite777.DEF = "hanim_skull_tip"
HAnimSite777.name = "skull_tip"
HAnimSite777.translation = [0.005,1.7504,0.0055]
TouchSensor778 = x3d.TouchSensor()
TouchSensor778.description = "HAnimSite skull_tip"

HAnimSite777.children.append(TouchSensor778)
Shape779 = x3d.Shape()
Shape779.USE = "HAnimSiteShape"

HAnimSite777.children.append(Shape779)

HAnimSegment705.children.append(HAnimSite777)
HAnimSite780 = x3d.HAnimSite()
HAnimSite780.DEF = "hanim_sellion_pt"
HAnimSite780.name = "sellion_pt"
HAnimSite780.translation = [0.0058,1.6316,0.0852]
TouchSensor781 = x3d.TouchSensor()
TouchSensor781.description = "HAnimSite sellion"

HAnimSite780.children.append(TouchSensor781)
Shape782 = x3d.Shape()
Shape782.USE = "HAnimSiteShape"

HAnimSite780.children.append(Shape782)

HAnimSegment705.children.append(HAnimSite780)
HAnimSite783 = x3d.HAnimSite()
HAnimSite783.DEF = "hanim_r_infraorbitale_pt"
HAnimSite783.name = "r_infraorbitale_pt"
HAnimSite783.translation = [-0.0237,1.6171,0.0752]
TouchSensor784 = x3d.TouchSensor()
TouchSensor784.description = "HAnimSite r_infraorbitale"

HAnimSite783.children.append(TouchSensor784)
Shape785 = x3d.Shape()
Shape785.USE = "HAnimSiteShape"

HAnimSite783.children.append(Shape785)

HAnimSegment705.children.append(HAnimSite783)
HAnimSite786 = x3d.HAnimSite()
HAnimSite786.DEF = "hanim_l_infraorbitale_pt"
HAnimSite786.name = "l_infraorbitale_pt"
HAnimSite786.translation = [0.0341,1.6171,0.0752]
TouchSensor787 = x3d.TouchSensor()
TouchSensor787.description = "HAnimSite l_infraorbitale"

HAnimSite786.children.append(TouchSensor787)
Shape788 = x3d.Shape()
Shape788.USE = "HAnimSiteShape"

HAnimSite786.children.append(Shape788)

HAnimSegment705.children.append(HAnimSite786)
HAnimSite789 = x3d.HAnimSite()
HAnimSite789.DEF = "hanim_supramenton_pt"
HAnimSite789.name = "supramenton_pt"
HAnimSite789.translation = [0.0061,1.541,0.0805]
TouchSensor790 = x3d.TouchSensor()
TouchSensor790.description = "HAnimSite supramenton"

HAnimSite789.children.append(TouchSensor790)
Shape791 = x3d.Shape()
Shape791.USE = "HAnimSiteShape"

HAnimSite789.children.append(Shape791)

HAnimSegment705.children.append(HAnimSite789)
HAnimSite792 = x3d.HAnimSite()
HAnimSite792.DEF = "hanim_r_tragion_pt"
HAnimSite792.name = "r_tragion_pt"
HAnimSite792.translation = [-0.0646,1.6347,0.0302]
TouchSensor793 = x3d.TouchSensor()
TouchSensor793.description = "HAnimSite r_tragion"

HAnimSite792.children.append(TouchSensor793)
Shape794 = x3d.Shape()
Shape794.USE = "HAnimSiteShape"

HAnimSite792.children.append(Shape794)

HAnimSegment705.children.append(HAnimSite792)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.DEF = "hanim_r_gonion_pt"
HAnimSite795.name = "r_gonion_pt"
HAnimSite795.translation = [-0.052,1.5529,0.0347]
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.description = "HAnimSite r_gonion"

HAnimSite795.children.append(TouchSensor796)
Shape797 = x3d.Shape()
Shape797.USE = "HAnimSiteShape"

HAnimSite795.children.append(Shape797)

HAnimSegment705.children.append(HAnimSite795)
HAnimSite798 = x3d.HAnimSite()
HAnimSite798.DEF = "hanim_l_tragion_pt"
HAnimSite798.name = "l_tragion_pt"
HAnimSite798.translation = [0.0739,1.6348,0.0282]
TouchSensor799 = x3d.TouchSensor()
TouchSensor799.description = "HAnimSite l_tragion"

HAnimSite798.children.append(TouchSensor799)
Shape800 = x3d.Shape()
Shape800.USE = "HAnimSiteShape"

HAnimSite798.children.append(Shape800)

HAnimSegment705.children.append(HAnimSite798)
HAnimSite801 = x3d.HAnimSite()
HAnimSite801.DEF = "hanim_l_gonion_pt"
HAnimSite801.name = "l_gonion_pt"
HAnimSite801.translation = [0.0631,1.553,0.033]
TouchSensor802 = x3d.TouchSensor()
TouchSensor802.description = "HAnimSite l_gonion"

HAnimSite801.children.append(TouchSensor802)
Shape803 = x3d.Shape()
Shape803.USE = "HAnimSiteShape"

HAnimSite801.children.append(Shape803)

HAnimSegment705.children.append(HAnimSite801)
HAnimSite804 = x3d.HAnimSite()
HAnimSite804.DEF = "hanim_nuchale_pt"
HAnimSite804.name = "nuchale_pt"
HAnimSite804.translation = [0.0039,1.5972,-0.0796]
TouchSensor805 = x3d.TouchSensor()
TouchSensor805.description = "HAnimSite nuchale"

HAnimSite804.children.append(TouchSensor805)
Shape806 = x3d.Shape()
Shape806.USE = "HAnimSiteShape"

HAnimSite804.children.append(Shape806)

HAnimSegment705.children.append(HAnimSite804)

HAnimJoint704.children.append(HAnimSegment705)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.DEF = "hanim_l_eyeball_joint"
HAnimJoint807.name = "l_eyeball_joint"
HAnimJoint807.center = [0.0336,1.6332,0.0502]
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.DEF = "hanim_l_eyeball"
HAnimSegment808.name = "l_eyeball"
TouchSensor809 = x3d.TouchSensor()
TouchSensor809.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"

HAnimSegment808.children.append(TouchSensor809)
Transform810 = x3d.Transform()
Transform810.translation = [0.0336,1.6332,0.0502]
Shape811 = x3d.Shape()
Shape811.USE = "HAnimJointShape"

Transform810.children.append(Shape811)

HAnimSegment808.children.append(Transform810)
Shape812 = x3d.Shape()
LineSet813 = x3d.LineSet()
LineSet813.vertexCount = [2]
ColorRGBA814 = x3d.ColorRGBA()
ColorRGBA814.DEF = "HAnimSiteViewpointLineColorRGBA"
ColorRGBA814.color = [(0, 0, 1, 1),(0, 0, 1, 0.1)]

LineSet813.color = ColorRGBA814
Coordinate815 = x3d.Coordinate()
Coordinate815.point = [(0.0336, 1.6332, 0.0502),(0.034, 1.64, 0.05)]

LineSet813.coord = Coordinate815

Shape812.geometry = LineSet813

HAnimSegment808.children.append(Shape812)
HAnimSite816 = x3d.HAnimSite()
HAnimSite816.DEF = "hanim_l_eyeball_site_view"
HAnimSite816.name = "l_eyeball_site_view"
HAnimSite816.translation = [0.034,1.64,0.05]
TouchSensor817 = x3d.TouchSensor()
TouchSensor817.description = "HAnimSite l_eyeball_site_view"

HAnimSite816.children.append(TouchSensor817)
Shape818 = x3d.Shape()
Shape818.USE = "HAnimSiteShape"

HAnimSite816.children.append(Shape818)
Viewpoint819 = x3d.Viewpoint()
Viewpoint819.DEF = "hanim_l_eyeball_site_viewpoint"
Viewpoint819.description = "l_eyeball_site_viewpoint looking forward"
Viewpoint819.position = [0,0,0]
Viewpoint819.orientation = [0,1,0,3.141593]

HAnimSite816.children.append(Viewpoint819)
Anchor820 = x3d.Anchor()
Anchor820.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint"
Anchor820.url = ["#hanim_l_eyeball_site_viewpoint"]
LOD821 = x3d.LOD()
LOD821.forceTransitions = True
LOD821.range = [0.04]
WorldInfo822 = x3d.WorldInfo()
WorldInfo822.info = ["hide diamond when close"]

LOD821.children.append(WorldInfo822)
Shape823 = x3d.Shape()
Shape823.DEF = "HAnimSiteViewpointShape"
Appearance824 = x3d.Appearance()
Material825 = x3d.Material()
Material825.diffuseColor = [0,0,1]
Material825.transparency = 0.6

Appearance824.material = Material825

Shape823.appearance = Appearance824
IndexedFaceSet826 = x3d.IndexedFaceSet()
IndexedFaceSet826.DEF = "SiteViewpointDiamondIFS"
IndexedFaceSet826.creaseAngle = 0.5
IndexedFaceSet826.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate827 = x3d.Coordinate()
Coordinate827.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet826.coord = Coordinate827

Shape823.geometry = IndexedFaceSet826

LOD821.children.append(Shape823)

Anchor820.children.append(LOD821)

HAnimSite816.children.append(Anchor820)

HAnimSegment808.children.append(HAnimSite816)

HAnimJoint807.children.append(HAnimSegment808)

HAnimJoint704.children.append(HAnimJoint807)
HAnimJoint828 = x3d.HAnimJoint()
HAnimJoint828.DEF = "hanim_l_eyelid_joint"
HAnimJoint828.name = "l_eyelid_joint"
HAnimJoint828.center = [0.0336,1.6332,0.0502]
HAnimSegment829 = x3d.HAnimSegment()
HAnimSegment829.DEF = "hanim_l_eyelid"
HAnimSegment829.name = "l_eyelid"
TouchSensor830 = x3d.TouchSensor()
TouchSensor830.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"

HAnimSegment829.children.append(TouchSensor830)
Transform831 = x3d.Transform()
Transform831.translation = [0.0336,1.6332,0.0502]
Shape832 = x3d.Shape()
Shape832.USE = "HAnimJointShape"

Transform831.children.append(Shape832)

HAnimSegment829.children.append(Transform831)

HAnimJoint828.children.append(HAnimSegment829)

HAnimJoint704.children.append(HAnimJoint828)
HAnimJoint833 = x3d.HAnimJoint()
HAnimJoint833.DEF = "hanim_l_eyebrow_joint"
HAnimJoint833.name = "l_eyebrow_joint"
HAnimJoint833.center = [0.0336,1.635,0.0506]
HAnimSegment834 = x3d.HAnimSegment()
HAnimSegment834.DEF = "hanim_l_eyebrow"
HAnimSegment834.name = "l_eyebrow"
TouchSensor835 = x3d.TouchSensor()
TouchSensor835.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"

HAnimSegment834.children.append(TouchSensor835)
Transform836 = x3d.Transform()
Transform836.translation = [0.0336,1.635,0.0506]
Shape837 = x3d.Shape()
Shape837.USE = "HAnimJointShape"

Transform836.children.append(Shape837)

HAnimSegment834.children.append(Transform836)

HAnimJoint833.children.append(HAnimSegment834)

HAnimJoint704.children.append(HAnimJoint833)
HAnimJoint838 = x3d.HAnimJoint()
HAnimJoint838.DEF = "hanim_r_eyeball_joint"
HAnimJoint838.name = "r_eyeball_joint"
HAnimJoint838.center = [-0.0336,1.6332,0.0502]
HAnimSegment839 = x3d.HAnimSegment()
HAnimSegment839.DEF = "hanim_r_eyeball"
HAnimSegment839.name = "r_eyeball"
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"

HAnimSegment839.children.append(TouchSensor840)
Transform841 = x3d.Transform()
Transform841.translation = [-0.0336,1.6332,0.0502]
Shape842 = x3d.Shape()
Shape842.USE = "HAnimJointShape"

Transform841.children.append(Shape842)

HAnimSegment839.children.append(Transform841)
Shape843 = x3d.Shape()
LineSet844 = x3d.LineSet()
LineSet844.vertexCount = [2]
ColorRGBA845 = x3d.ColorRGBA()
ColorRGBA845.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet844.color = ColorRGBA845
Coordinate846 = x3d.Coordinate()
Coordinate846.point = [(-0.0336, 1.6332, 0.0502),(-0.034, 1.64, 0.05)]

LineSet844.coord = Coordinate846

Shape843.geometry = LineSet844

HAnimSegment839.children.append(Shape843)
HAnimSite847 = x3d.HAnimSite()
HAnimSite847.DEF = "hanim_r_eyeball_site_view"
HAnimSite847.name = "r_eyeball_site_view"
HAnimSite847.translation = [-0.034,1.64,0.05]
TouchSensor848 = x3d.TouchSensor()
TouchSensor848.description = "HAnimSite r_eyeball_site_view"

HAnimSite847.children.append(TouchSensor848)
Shape849 = x3d.Shape()
Shape849.USE = "HAnimSiteShape"

HAnimSite847.children.append(Shape849)
Viewpoint850 = x3d.Viewpoint()
Viewpoint850.DEF = "hanim_r_eyeball_site_viewpoint"
Viewpoint850.description = "r_eyeball_site_viewpoint looking forward"
Viewpoint850.position = [0,0,0]
Viewpoint850.orientation = [0,1,0,3.141593]

HAnimSite847.children.append(Viewpoint850)
Anchor851 = x3d.Anchor()
Anchor851.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint"
Anchor851.url = ["#hanim_r_eyeball_site_viewpoint"]
LOD852 = x3d.LOD()
LOD852.forceTransitions = True
LOD852.range = [0.04]
WorldInfo853 = x3d.WorldInfo()
WorldInfo853.info = ["hide diamond when close"]

LOD852.children.append(WorldInfo853)
Shape854 = x3d.Shape()
Shape854.USE = "HAnimSiteViewpointShape"

LOD852.children.append(Shape854)

Anchor851.children.append(LOD852)

HAnimSite847.children.append(Anchor851)

HAnimSegment839.children.append(HAnimSite847)

HAnimJoint838.children.append(HAnimSegment839)

HAnimJoint704.children.append(HAnimJoint838)
HAnimJoint855 = x3d.HAnimJoint()
HAnimJoint855.DEF = "hanim_r_eyelid_joint"
HAnimJoint855.name = "r_eyelid_joint"
HAnimJoint855.center = [-0.0336,1.6332,0.0502]
HAnimSegment856 = x3d.HAnimSegment()
HAnimSegment856.DEF = "hanim_r_eyelid"
HAnimSegment856.name = "r_eyelid"
TouchSensor857 = x3d.TouchSensor()
TouchSensor857.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"

HAnimSegment856.children.append(TouchSensor857)
Transform858 = x3d.Transform()
Transform858.translation = [-0.0336,1.6332,0.0502]
Shape859 = x3d.Shape()
Shape859.USE = "HAnimJointShape"

Transform858.children.append(Shape859)

HAnimSegment856.children.append(Transform858)

HAnimJoint855.children.append(HAnimSegment856)

HAnimJoint704.children.append(HAnimJoint855)
HAnimJoint860 = x3d.HAnimJoint()
HAnimJoint860.DEF = "hanim_r_eyebrow_joint"
HAnimJoint860.name = "r_eyebrow_joint"
HAnimJoint860.center = [-0.0336,1.635,0.0506]
HAnimSegment861 = x3d.HAnimSegment()
HAnimSegment861.DEF = "hanim_r_eyebrow"
HAnimSegment861.name = "r_eyebrow"
TouchSensor862 = x3d.TouchSensor()
TouchSensor862.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"

HAnimSegment861.children.append(TouchSensor862)
Transform863 = x3d.Transform()
Transform863.translation = [-0.0336,1.635,0.0506]
Shape864 = x3d.Shape()
Shape864.USE = "HAnimJointShape"

Transform863.children.append(Shape864)

HAnimSegment861.children.append(Transform863)

HAnimJoint860.children.append(HAnimSegment861)

HAnimJoint704.children.append(HAnimJoint860)
HAnimJoint865 = x3d.HAnimJoint()
HAnimJoint865.DEF = "hanim_temporomandibular"
HAnimJoint865.name = "temporomandibular"
HAnimJoint865.center = [0,1.63,0.015]
HAnimSegment866 = x3d.HAnimSegment()
HAnimSegment866.DEF = "hanim_jaw"
HAnimSegment866.name = "jaw"
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.description = "HAnimJoint temporomandibular, HAnimSegment jaw"

HAnimSegment866.children.append(TouchSensor867)
Transform868 = x3d.Transform()
Transform868.translation = [0,1.63,0.015]
Shape869 = x3d.Shape()
Shape869.USE = "HAnimJointShape"

Transform868.children.append(Shape869)

HAnimSegment866.children.append(Transform868)
Shape870 = x3d.Shape()
LineSet871 = x3d.LineSet()
LineSet871.vertexCount = [2]
ColorRGBA872 = x3d.ColorRGBA()
ColorRGBA872.USE = "HAnimSiteLineColorRGBA"

LineSet871.color = ColorRGBA872
Coordinate873 = x3d.Coordinate()
Coordinate873.point = [(0, 1.63, 0.015),(0.045, 1.63, 0)]

LineSet871.coord = Coordinate873

Shape870.geometry = LineSet871

HAnimSegment866.children.append(Shape870)
Shape874 = x3d.Shape()
LineSet875 = x3d.LineSet()
LineSet875.vertexCount = [2]
ColorRGBA876 = x3d.ColorRGBA()
ColorRGBA876.USE = "HAnimSiteLineColorRGBA"

LineSet875.color = ColorRGBA876
Coordinate877 = x3d.Coordinate()
Coordinate877.point = [(0, 1.63, 0.015),(-0.045, 1.63, 0)]

LineSet875.coord = Coordinate877

Shape874.geometry = LineSet875

HAnimSegment866.children.append(Shape874)
HAnimSite878 = x3d.HAnimSite()
HAnimSite878.DEF = "hanim_temporomandibular_l_site_pt"
HAnimSite878.name = "temporomandibular_l_site_pt"
HAnimSite878.translation = [0.045,1.63,0]
TouchSensor879 = x3d.TouchSensor()
TouchSensor879.description = "HAnimSite temporomandibular_l_site"

HAnimSite878.children.append(TouchSensor879)
Shape880 = x3d.Shape()
Shape880.USE = "HAnimSiteShape"

HAnimSite878.children.append(Shape880)

HAnimSegment866.children.append(HAnimSite878)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.DEF = "hanim_temporomandibular_r_site_pt"
HAnimSite881.name = "temporomandibular_r_site_pt"
HAnimSite881.translation = [-0.045,1.63,0]
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.description = "HAnimSite temporomandibular_r_site"

HAnimSite881.children.append(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.USE = "HAnimSiteShape"

HAnimSite881.children.append(Shape883)

HAnimSegment866.children.append(HAnimSite881)

HAnimJoint865.children.append(HAnimSegment866)

HAnimJoint704.children.append(HAnimJoint865)

HAnimJoint695.children.append(HAnimJoint704)

HAnimJoint686.children.append(HAnimJoint695)

HAnimJoint677.children.append(HAnimJoint686)

HAnimJoint668.children.append(HAnimJoint677)

HAnimJoint659.children.append(HAnimJoint668)

HAnimJoint650.children.append(HAnimJoint659)

HAnimJoint627.children.append(HAnimJoint650)

HAnimJoint596.children.append(HAnimJoint627)
HAnimJoint884 = x3d.HAnimJoint()
HAnimJoint884.DEF = "hanim_l_sternoclavicular"
HAnimJoint884.name = "l_sternoclavicular"
HAnimJoint884.center = [0.082,1.4488,-0.0353]
HAnimSegment885 = x3d.HAnimSegment()
HAnimSegment885.DEF = "hanim_l_clavicle"
HAnimSegment885.name = "l_clavicle"
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"

HAnimSegment885.children.append(TouchSensor886)
Transform887 = x3d.Transform()
Transform887.translation = [0.082,1.4488,-0.0353]
Shape888 = x3d.Shape()
Shape888.USE = "HAnimJointShape"

Transform887.children.append(Shape888)

HAnimSegment885.children.append(Transform887)
Shape889 = x3d.Shape()
LineSet890 = x3d.LineSet()
LineSet890.vertexCount = [2]
ColorRGBA891 = x3d.ColorRGBA()
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA"

LineSet890.color = ColorRGBA891
Coordinate892 = x3d.Coordinate()
Coordinate892.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet890.coord = Coordinate892

Shape889.geometry = LineSet890

HAnimSegment885.children.append(Shape889)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.vertexCount = [2]
ColorRGBA895 = x3d.ColorRGBA()
ColorRGBA895.USE = "HAnimSiteLineColorRGBA"

LineSet894.color = ColorRGBA895
Coordinate896 = x3d.Coordinate()
Coordinate896.point = [(0.082, 1.4488, -0.0353),(0.0271, 1.4943, 0.0394)]

LineSet894.coord = Coordinate896

Shape893.geometry = LineSet894

HAnimSegment885.children.append(Shape893)
Shape897 = x3d.Shape()
LineSet898 = x3d.LineSet()
LineSet898.vertexCount = [2]
ColorRGBA899 = x3d.ColorRGBA()
ColorRGBA899.USE = "HAnimSiteLineColorRGBA"

LineSet898.color = ColorRGBA899
Coordinate900 = x3d.Coordinate()
Coordinate900.point = [(0.082, 1.4488, -0.0353),(0.2032, 1.476, -0.049)]

LineSet898.coord = Coordinate900

Shape897.geometry = LineSet898

HAnimSegment885.children.append(Shape897)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.vertexCount = [2]
ColorRGBA903 = x3d.ColorRGBA()
ColorRGBA903.USE = "HAnimSiteLineColorRGBA"

LineSet902.color = ColorRGBA903
Coordinate904 = x3d.Coordinate()
Coordinate904.point = [(0.082, 1.4488, -0.0353),(0.1777, 1.4065, -0.0075)]

LineSet902.coord = Coordinate904

Shape901.geometry = LineSet902

HAnimSegment885.children.append(Shape901)
Shape905 = x3d.Shape()
LineSet906 = x3d.LineSet()
LineSet906.vertexCount = [2]
ColorRGBA907 = x3d.ColorRGBA()
ColorRGBA907.USE = "HAnimSiteLineColorRGBA"

LineSet906.color = ColorRGBA907
Coordinate908 = x3d.Coordinate()
Coordinate908.point = [(0.082, 1.4488, -0.0353),(0.1706, 1.4072, -0.0875)]

LineSet906.coord = Coordinate908

Shape905.geometry = LineSet906

HAnimSegment885.children.append(Shape905)
HAnimSite909 = x3d.HAnimSite()
HAnimSite909.DEF = "hanim_l_clavicale_pt"
HAnimSite909.name = "l_clavicale_pt"
HAnimSite909.translation = [0.0271,1.4943,0.0394]
TouchSensor910 = x3d.TouchSensor()
TouchSensor910.description = "HAnimSite l_clavicale"

HAnimSite909.children.append(TouchSensor910)
Shape911 = x3d.Shape()
Shape911.USE = "HAnimSiteShape"

HAnimSite909.children.append(Shape911)

HAnimSegment885.children.append(HAnimSite909)
HAnimSite912 = x3d.HAnimSite()
HAnimSite912.DEF = "hanim_l_acromion_pt"
HAnimSite912.name = "l_acromion_pt"
HAnimSite912.translation = [0.2032,1.476,-0.049]
TouchSensor913 = x3d.TouchSensor()
TouchSensor913.description = "HAnimSite l_acromion"

HAnimSite912.children.append(TouchSensor913)
Shape914 = x3d.Shape()
Shape914.USE = "HAnimSiteShape"

HAnimSite912.children.append(Shape914)

HAnimSegment885.children.append(HAnimSite912)
HAnimSite915 = x3d.HAnimSite()
HAnimSite915.DEF = "hanim_l_axilla_ant_pt"
HAnimSite915.name = "l_axilla_ant_pt"
HAnimSite915.translation = [0.1777,1.4065,-0.0075]
TouchSensor916 = x3d.TouchSensor()
TouchSensor916.description = "HAnimSite l_axilla_ant"

HAnimSite915.children.append(TouchSensor916)
Shape917 = x3d.Shape()
Shape917.USE = "HAnimSiteShape"

HAnimSite915.children.append(Shape917)

HAnimSegment885.children.append(HAnimSite915)
HAnimSite918 = x3d.HAnimSite()
HAnimSite918.DEF = "hanim_l_axilla_post_pt"
HAnimSite918.name = "l_axilla_post_pt"
HAnimSite918.translation = [0.1706,1.4072,-0.0875]
TouchSensor919 = x3d.TouchSensor()
TouchSensor919.description = "HAnimSite l_axilla_post"

HAnimSite918.children.append(TouchSensor919)
Shape920 = x3d.Shape()
Shape920.USE = "HAnimSiteShape"

HAnimSite918.children.append(Shape920)

HAnimSegment885.children.append(HAnimSite918)

HAnimJoint884.children.append(HAnimSegment885)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.DEF = "hanim_l_acromioclavicular"
HAnimJoint921.name = "l_acromioclavicular"
HAnimJoint921.center = [0.0962,1.4269,-0.0424]
HAnimSegment922 = x3d.HAnimSegment()
HAnimSegment922.DEF = "hanim_l_scapula"
HAnimSegment922.name = "l_scapula"
TouchSensor923 = x3d.TouchSensor()
TouchSensor923.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"

HAnimSegment922.children.append(TouchSensor923)
Transform924 = x3d.Transform()
Transform924.translation = [0.0962,1.4269,-0.0424]
Shape925 = x3d.Shape()
Shape925.USE = "HAnimJointShape"

Transform924.children.append(Shape925)

HAnimSegment922.children.append(Transform924)
Shape926 = x3d.Shape()
LineSet927 = x3d.LineSet()
LineSet927.vertexCount = [2]
ColorRGBA928 = x3d.ColorRGBA()
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA"

LineSet927.color = ColorRGBA928
Coordinate929 = x3d.Coordinate()
Coordinate929.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet927.coord = Coordinate929

Shape926.geometry = LineSet927

HAnimSegment922.children.append(Shape926)

HAnimJoint921.children.append(HAnimSegment922)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.DEF = "hanim_l_shoulder"
HAnimJoint930.name = "l_shoulder"
HAnimJoint930.center = [0.2029,1.4376,-0.0387]
HAnimSegment931 = x3d.HAnimSegment()
HAnimSegment931.DEF = "hanim_l_upperarm"
HAnimSegment931.name = "l_upperarm"
TouchSensor932 = x3d.TouchSensor()
TouchSensor932.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm"

HAnimSegment931.children.append(TouchSensor932)
Transform933 = x3d.Transform()
Transform933.translation = [0.2029,1.4376,-0.0387]
Shape934 = x3d.Shape()
Shape934.USE = "HAnimJointShape"

Transform933.children.append(Shape934)

HAnimSegment931.children.append(Transform933)
Shape935 = x3d.Shape()
LineSet936 = x3d.LineSet()
LineSet936.vertexCount = [2]
ColorRGBA937 = x3d.ColorRGBA()
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA"

LineSet936.color = ColorRGBA937
Coordinate938 = x3d.Coordinate()
Coordinate938.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet936.coord = Coordinate938

Shape935.geometry = LineSet936

HAnimSegment931.children.append(Shape935)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.vertexCount = [2]
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.USE = "HAnimSiteLineColorRGBA"

LineSet940.color = ColorRGBA941
Coordinate942 = x3d.Coordinate()
Coordinate942.point = [(0.2029, 1.4376, -0.0387),(0.228, 1.1482, -0.11)]

LineSet940.coord = Coordinate942

Shape939.geometry = LineSet940

HAnimSegment931.children.append(Shape939)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.DEF = "hanim_l_humeral_lateral_epicn_pt"
HAnimSite943.name = "l_humeral_lateral_epicn_pt"
HAnimSite943.translation = [0.228,1.1482,-0.11]
TouchSensor944 = x3d.TouchSensor()
TouchSensor944.description = "HAnimSite l_humeral_lateral_epicn"

HAnimSite943.children.append(TouchSensor944)
Shape945 = x3d.Shape()
Shape945.USE = "HAnimSiteShape"

HAnimSite943.children.append(Shape945)

HAnimSegment931.children.append(HAnimSite943)

HAnimJoint930.children.append(HAnimSegment931)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.DEF = "hanim_l_elbow"
HAnimJoint946.name = "l_elbow"
HAnimJoint946.center = [0.2014,1.1357,-0.0682]
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.DEF = "hanim_l_forearm"
HAnimSegment947.name = "l_forearm"
TouchSensor948 = x3d.TouchSensor()
TouchSensor948.description = "HAnimJoint l_elbow, HAnimSegment l_forearm"

HAnimSegment947.children.append(TouchSensor948)
Transform949 = x3d.Transform()
Transform949.translation = [0.2014,1.1357,-0.0682]
Shape950 = x3d.Shape()
Shape950.USE = "HAnimJointShape"

Transform949.children.append(Shape950)

HAnimSegment947.children.append(Transform949)
Shape951 = x3d.Shape()
LineSet952 = x3d.LineSet()
LineSet952.vertexCount = [2]
ColorRGBA953 = x3d.ColorRGBA()
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA"

LineSet952.color = ColorRGBA953
Coordinate954 = x3d.Coordinate()
Coordinate954.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet952.coord = Coordinate954

Shape951.geometry = LineSet952

HAnimSegment947.children.append(Shape951)
Shape955 = x3d.Shape()
LineSet956 = x3d.LineSet()
LineSet956.vertexCount = [2]
ColorRGBA957 = x3d.ColorRGBA()
ColorRGBA957.USE = "HAnimSiteLineColorRGBA"

LineSet956.color = ColorRGBA957
Coordinate958 = x3d.Coordinate()
Coordinate958.point = [(0.2014, 1.1357, -0.0682),(0.1901, 0.8645, -0.0415)]

LineSet956.coord = Coordinate958

Shape955.geometry = LineSet956

HAnimSegment947.children.append(Shape955)
Shape959 = x3d.Shape()
LineSet960 = x3d.LineSet()
LineSet960.vertexCount = [2]
ColorRGBA961 = x3d.ColorRGBA()
ColorRGBA961.USE = "HAnimSiteLineColorRGBA"

LineSet960.color = ColorRGBA961
Coordinate962 = x3d.Coordinate()
Coordinate962.point = [(0.2014, 1.1357, -0.0682),(0.1962, 1.1375, -0.1123)]

LineSet960.coord = Coordinate962

Shape959.geometry = LineSet960

HAnimSegment947.children.append(Shape959)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.vertexCount = [2]
ColorRGBA965 = x3d.ColorRGBA()
ColorRGBA965.USE = "HAnimSiteLineColorRGBA"

LineSet964.color = ColorRGBA965
Coordinate966 = x3d.Coordinate()
Coordinate966.point = [(0.2014, 1.1357, -0.0682),(0.1735, 1.1272, -0.1113)]

LineSet964.coord = Coordinate966

Shape963.geometry = LineSet964

HAnimSegment947.children.append(Shape963)
Shape967 = x3d.Shape()
LineSet968 = x3d.LineSet()
LineSet968.vertexCount = [2]
ColorRGBA969 = x3d.ColorRGBA()
ColorRGBA969.USE = "HAnimSiteLineColorRGBA"

LineSet968.color = ColorRGBA969
Coordinate970 = x3d.Coordinate()
Coordinate970.point = [(0.2014, 1.1357, -0.0682),(0.2182, 1.1212, -0.1167)]

LineSet968.coord = Coordinate970

Shape967.geometry = LineSet968

HAnimSegment947.children.append(Shape967)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.DEF = "hanim_l_radial_styloid_pt"
HAnimSite971.name = "l_radial_styloid_pt"
HAnimSite971.translation = [0.1901,0.8645,-0.0415]
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.description = "HAnimSite l_radial_styloid"

HAnimSite971.children.append(TouchSensor972)
Shape973 = x3d.Shape()
Shape973.USE = "HAnimSiteShape"

HAnimSite971.children.append(Shape973)

HAnimSegment947.children.append(HAnimSite971)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.DEF = "hanim_l_olecranon_pt"
HAnimSite974.name = "l_olecranon_pt"
HAnimSite974.translation = [0.1962,1.1375,-0.1123]
TouchSensor975 = x3d.TouchSensor()
TouchSensor975.description = "HAnimSite l_olecranon"

HAnimSite974.children.append(TouchSensor975)
Shape976 = x3d.Shape()
Shape976.USE = "HAnimSiteShape"

HAnimSite974.children.append(Shape976)

HAnimSegment947.children.append(HAnimSite974)
HAnimSite977 = x3d.HAnimSite()
HAnimSite977.DEF = "hanim_l_humeral_medial_epicn_pt"
HAnimSite977.name = "l_humeral_medial_epicn_pt"
HAnimSite977.translation = [0.1735,1.1272,-0.1113]
TouchSensor978 = x3d.TouchSensor()
TouchSensor978.description = "HAnimSite l_humeral_medial_epicn"

HAnimSite977.children.append(TouchSensor978)
Shape979 = x3d.Shape()
Shape979.USE = "HAnimSiteShape"

HAnimSite977.children.append(Shape979)

HAnimSegment947.children.append(HAnimSite977)
HAnimSite980 = x3d.HAnimSite()
HAnimSite980.DEF = "hanim_l_radiale_pt"
HAnimSite980.name = "l_radiale_pt"
HAnimSite980.translation = [0.2182,1.1212,-0.1167]
TouchSensor981 = x3d.TouchSensor()
TouchSensor981.description = "HAnimSite l_radiale"

HAnimSite980.children.append(TouchSensor981)
Shape982 = x3d.Shape()
Shape982.USE = "HAnimSiteShape"

HAnimSite980.children.append(Shape982)

HAnimSegment947.children.append(HAnimSite980)

HAnimJoint946.children.append(HAnimSegment947)
HAnimJoint983 = x3d.HAnimJoint()
HAnimJoint983.DEF = "hanim_l_wrist"
HAnimJoint983.name = "l_wrist"
HAnimJoint983.center = [0.1984,0.8663,-0.0583]
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.DEF = "hanim_l_hand"
HAnimSegment984.name = "l_hand"
TouchSensor985 = x3d.TouchSensor()
TouchSensor985.description = "HAnimJoint l_wrist, HAnimSegment l_hand"

HAnimSegment984.children.append(TouchSensor985)
Transform986 = x3d.Transform()
Transform986.translation = [0.1984,0.8663,-0.0583]
Shape987 = x3d.Shape()
Shape987.USE = "HAnimJointShape"

Transform986.children.append(Shape987)

HAnimSegment984.children.append(Transform986)
Shape988 = x3d.Shape()
LineSet989 = x3d.LineSet()
LineSet989.vertexCount = [2]
ColorRGBA990 = x3d.ColorRGBA()
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA"

LineSet989.color = ColorRGBA990
Coordinate991 = x3d.Coordinate()
Coordinate991.point = [(0.1984, 0.8663, -0.0583),(0.1924, 0.8472, -0.0534)]

LineSet989.coord = Coordinate991

Shape988.geometry = LineSet989

HAnimSegment984.children.append(Shape988)
Shape992 = x3d.Shape()
LineSet993 = x3d.LineSet()
LineSet993.vertexCount = [2]
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA"

LineSet993.color = ColorRGBA994
Coordinate995 = x3d.Coordinate()
Coordinate995.point = [(0.1984, 0.8663, -0.0583),(0.1983, 0.8024, -0.028)]

LineSet993.coord = Coordinate995

Shape992.geometry = LineSet993

HAnimSegment984.children.append(Shape992)
Shape996 = x3d.Shape()
LineSet997 = x3d.LineSet()
LineSet997.vertexCount = [2]
ColorRGBA998 = x3d.ColorRGBA()
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA"

LineSet997.color = ColorRGBA998
Coordinate999 = x3d.Coordinate()
Coordinate999.point = [(0.1984, 0.8663, -0.0583),(0.1987, 0.8029, -0.053)]

LineSet997.coord = Coordinate999

Shape996.geometry = LineSet997

HAnimSegment984.children.append(Shape996)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.vertexCount = [2]
ColorRGBA1002 = x3d.ColorRGBA()
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA"

LineSet1001.color = ColorRGBA1002
Coordinate1003 = x3d.Coordinate()
Coordinate1003.point = [(0.1984, 0.8663, -0.0583),(0.1956, 0.8019, -0.0794)]

LineSet1001.coord = Coordinate1003

Shape1000.geometry = LineSet1001

HAnimSegment984.children.append(Shape1000)
Shape1004 = x3d.Shape()
LineSet1005 = x3d.LineSet()
LineSet1005.vertexCount = [2]
ColorRGBA1006 = x3d.ColorRGBA()
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA"

LineSet1005.color = ColorRGBA1006
Coordinate1007 = x3d.Coordinate()
Coordinate1007.point = [(0.1984, 0.8663, -0.0583),(0.1925, 0.8066, -0.1036)]

LineSet1005.coord = Coordinate1007

Shape1004.geometry = LineSet1005

HAnimSegment984.children.append(Shape1004)
Shape1008 = x3d.Shape()
LineSet1009 = x3d.LineSet()
LineSet1009.vertexCount = [2]
ColorRGBA1010 = x3d.ColorRGBA()
ColorRGBA1010.USE = "HAnimSiteLineColorRGBA"

LineSet1009.color = ColorRGBA1010
Coordinate1011 = x3d.Coordinate()
Coordinate1011.point = [(0.1984, 0.8663, -0.0583),(0.2009, 0.8139, -0.0237)]

LineSet1009.coord = Coordinate1011

Shape1008.geometry = LineSet1009

HAnimSegment984.children.append(Shape1008)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.vertexCount = [2]
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA"

LineSet1013.color = ColorRGBA1014
Coordinate1015 = x3d.Coordinate()
Coordinate1015.point = [(0.1984, 0.8663, -0.0583),(0.2142, 0.8529, -0.0648)]

LineSet1013.coord = Coordinate1015

Shape1012.geometry = LineSet1013

HAnimSegment984.children.append(Shape1012)
Shape1016 = x3d.Shape()
LineSet1017 = x3d.LineSet()
LineSet1017.vertexCount = [2]
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA"

LineSet1017.color = ColorRGBA1018
Coordinate1019 = x3d.Coordinate()
Coordinate1019.point = [(0.1984, 0.8663, -0.0583),(0.1929, 0.786, -0.1122)]

LineSet1017.coord = Coordinate1019

Shape1016.geometry = LineSet1017

HAnimSegment984.children.append(Shape1016)
Shape1020 = x3d.Shape()
LineSet1021 = x3d.LineSet()
LineSet1021.vertexCount = [2]
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1021.color = ColorRGBA1022
Coordinate1023 = x3d.Coordinate()
Coordinate1023.point = [(0.1984, 0.8663, -0.0583),(0.3, 0.75, 0.45)]

LineSet1021.coord = Coordinate1023

Shape1020.geometry = LineSet1021

HAnimSegment984.children.append(Shape1020)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.DEF = "hanim_l_metacarpal_pha2_pt"
HAnimSite1024.name = "l_metacarpal_pha2_pt"
HAnimSite1024.translation = [0.2009,0.8139,-0.0237]
TouchSensor1025 = x3d.TouchSensor()
TouchSensor1025.description = "HAnimSite l_metacarpal_pha2"

HAnimSite1024.children.append(TouchSensor1025)
Shape1026 = x3d.Shape()
Shape1026.USE = "HAnimSiteShape"

HAnimSite1024.children.append(Shape1026)

HAnimSegment984.children.append(HAnimSite1024)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1027.name = "l_ulnar_styloid_pt"
HAnimSite1027.translation = [0.2142,0.8529,-0.0648]
TouchSensor1028 = x3d.TouchSensor()
TouchSensor1028.description = "HAnimSite l_ulnar_styloid"

HAnimSite1027.children.append(TouchSensor1028)
Shape1029 = x3d.Shape()
Shape1029.USE = "HAnimSiteShape"

HAnimSite1027.children.append(Shape1029)

HAnimSegment984.children.append(HAnimSite1027)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.DEF = "hanim_l_metacarpal_pha5_pt"
HAnimSite1030.name = "l_metacarpal_pha5_pt"
HAnimSite1030.translation = [0.1929,0.786,-0.1122]
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.description = "HAnimSite l_metacarpal_pha5"

HAnimSite1030.children.append(TouchSensor1031)
Shape1032 = x3d.Shape()
Shape1032.USE = "HAnimSiteShape"

HAnimSite1030.children.append(Shape1032)

HAnimSegment984.children.append(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.DEF = "hanim_l_hand_front_view"
HAnimSite1033.name = "l_hand_front_view"
HAnimSite1033.translation = [0.3,0.75,0.45]
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.description = "HAnimSite l_hand_front_view"

HAnimSite1033.children.append(TouchSensor1034)
Shape1035 = x3d.Shape()
Shape1035.USE = "HAnimSiteShape"

HAnimSite1033.children.append(Shape1035)
Viewpoint1036 = x3d.Viewpoint()
Viewpoint1036.DEF = "hanim_l_hand_front_viewpoint"
Viewpoint1036.description = "left hand front"
Viewpoint1036.position = [0,0,0]
Viewpoint1036.centerOfRotation = [0,0.7,0]

HAnimSite1033.children.append(Viewpoint1036)
Anchor1037 = x3d.Anchor()
Anchor1037.description = "HAnimSite hanim_l_hand_front_view Viewpoint"
Anchor1037.url = ["#hanim_l_hand_front_viewpoint"]
LOD1038 = x3d.LOD()
LOD1038.forceTransitions = True
LOD1038.range = [0.04]
WorldInfo1039 = x3d.WorldInfo()
WorldInfo1039.info = ["hide diamond when close"]

LOD1038.children.append(WorldInfo1039)
Shape1040 = x3d.Shape()
Shape1040.USE = "HAnimSiteViewpointShape"

LOD1038.children.append(Shape1040)

Anchor1037.children.append(LOD1038)

HAnimSite1033.children.append(Anchor1037)

HAnimSegment984.children.append(HAnimSite1033)

HAnimJoint983.children.append(HAnimSegment984)
HAnimJoint1041 = x3d.HAnimJoint()
HAnimJoint1041.DEF = "hanim_l_thumb1"
HAnimJoint1041.name = "l_thumb1"
HAnimJoint1041.center = [0.1924,0.8472,-0.0534]
HAnimSegment1042 = x3d.HAnimSegment()
HAnimSegment1042.DEF = "hanim_l_thumb_metacarpal"
HAnimSegment1042.name = "l_thumb_metacarpal"
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"

HAnimSegment1042.children.append(TouchSensor1043)
Transform1044 = x3d.Transform()
Transform1044.translation = [0.1924,0.8472,-0.0534]
Shape1045 = x3d.Shape()
Shape1045.USE = "HAnimJointShape"

Transform1044.children.append(Shape1045)

HAnimSegment1042.children.append(Transform1044)
Shape1046 = x3d.Shape()
LineSet1047 = x3d.LineSet()
LineSet1047.vertexCount = [2]
ColorRGBA1048 = x3d.ColorRGBA()
ColorRGBA1048.USE = "HAnimSegmentLineColorRGBA"

LineSet1047.color = ColorRGBA1048
Coordinate1049 = x3d.Coordinate()
Coordinate1049.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1047.coord = Coordinate1049

Shape1046.geometry = LineSet1047

HAnimSegment1042.children.append(Shape1046)

HAnimJoint1041.children.append(HAnimSegment1042)
HAnimJoint1050 = x3d.HAnimJoint()
HAnimJoint1050.DEF = "hanim_l_thumb2"
HAnimJoint1050.name = "l_thumb2"
HAnimJoint1050.center = [0.1951,0.8226,0.0246]
HAnimSegment1051 = x3d.HAnimSegment()
HAnimSegment1051.DEF = "hanim_l_thumb_proximal"
HAnimSegment1051.name = "l_thumb_proximal"
TouchSensor1052 = x3d.TouchSensor()
TouchSensor1052.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"

HAnimSegment1051.children.append(TouchSensor1052)
Transform1053 = x3d.Transform()
Transform1053.translation = [0.1951,0.8226,0.0246]
Shape1054 = x3d.Shape()
Shape1054.USE = "HAnimJointShape"

Transform1053.children.append(Shape1054)

HAnimSegment1051.children.append(Transform1053)
Shape1055 = x3d.Shape()
LineSet1056 = x3d.LineSet()
LineSet1056.vertexCount = [2]
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA"

LineSet1056.color = ColorRGBA1057
Coordinate1058 = x3d.Coordinate()
Coordinate1058.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1056.coord = Coordinate1058

Shape1055.geometry = LineSet1056

HAnimSegment1051.children.append(Shape1055)

HAnimJoint1050.children.append(HAnimSegment1051)
HAnimJoint1059 = x3d.HAnimJoint()
HAnimJoint1059.DEF = "hanim_l_thumb3"
HAnimJoint1059.name = "l_thumb3"
HAnimJoint1059.center = [0.1955,0.8159,0.0464]
HAnimSegment1060 = x3d.HAnimSegment()
HAnimSegment1060.DEF = "hanim_l_thumb_distal"
HAnimSegment1060.name = "l_thumb_distal"
TouchSensor1061 = x3d.TouchSensor()
TouchSensor1061.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"

HAnimSegment1060.children.append(TouchSensor1061)
Transform1062 = x3d.Transform()
Transform1062.translation = [0.1955,0.8159,0.0464]
Shape1063 = x3d.Shape()
Shape1063.USE = "HAnimJointShape"

Transform1062.children.append(Shape1063)

HAnimSegment1060.children.append(Transform1062)
Shape1064 = x3d.Shape()
LineSet1065 = x3d.LineSet()
LineSet1065.vertexCount = [2]
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.USE = "HAnimSiteLineColorRGBA"

LineSet1065.color = ColorRGBA1066
Coordinate1067 = x3d.Coordinate()
Coordinate1067.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

LineSet1065.coord = Coordinate1067

Shape1064.geometry = LineSet1065

HAnimSegment1060.children.append(Shape1064)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.DEF = "hanim_l_thumb_distal_tip"
HAnimSite1068.name = "l_thumb_distal_tip"
HAnimSite1068.translation = [0.1982,0.8061,0.0759]
TouchSensor1069 = x3d.TouchSensor()
TouchSensor1069.description = "HAnimSite l_thumb_distal_tip"

HAnimSite1068.children.append(TouchSensor1069)
Shape1070 = x3d.Shape()
Shape1070.USE = "HAnimSiteShape"

HAnimSite1068.children.append(Shape1070)

HAnimSegment1060.children.append(HAnimSite1068)

HAnimJoint1059.children.append(HAnimSegment1060)

HAnimJoint1050.children.append(HAnimJoint1059)

HAnimJoint1041.children.append(HAnimJoint1050)

HAnimJoint983.children.append(HAnimJoint1041)
HAnimJoint1071 = x3d.HAnimJoint()
HAnimJoint1071.DEF = "hanim_l_index0"
HAnimJoint1071.name = "l_index0"
HAnimJoint1071.center = [0.1983,0.8024,-0.028]
HAnimSegment1072 = x3d.HAnimSegment()
HAnimSegment1072.DEF = "hanim_l_index_metacarpal"
HAnimSegment1072.name = "l_index_metacarpal"
TouchSensor1073 = x3d.TouchSensor()
TouchSensor1073.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal"

HAnimSegment1072.children.append(TouchSensor1073)
Transform1074 = x3d.Transform()
Transform1074.translation = [0.1983,0.8024,-0.028]
Shape1075 = x3d.Shape()
Shape1075.USE = "HAnimJointShape"

Transform1074.children.append(Shape1075)

HAnimSegment1072.children.append(Transform1074)
Shape1076 = x3d.Shape()
LineSet1077 = x3d.LineSet()
LineSet1077.vertexCount = [2]
ColorRGBA1078 = x3d.ColorRGBA()
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA"

LineSet1077.color = ColorRGBA1078
Coordinate1079 = x3d.Coordinate()
Coordinate1079.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1077.coord = Coordinate1079

Shape1076.geometry = LineSet1077

HAnimSegment1072.children.append(Shape1076)

HAnimJoint1071.children.append(HAnimSegment1072)
HAnimJoint1080 = x3d.HAnimJoint()
HAnimJoint1080.DEF = "hanim_l_index1"
HAnimJoint1080.name = "l_index1"
HAnimJoint1080.center = [0.1983,0.7815,-0.028]
HAnimSegment1081 = x3d.HAnimSegment()
HAnimSegment1081.DEF = "hanim_l_index_proximal"
HAnimSegment1081.name = "l_index_proximal"
TouchSensor1082 = x3d.TouchSensor()
TouchSensor1082.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal"

HAnimSegment1081.children.append(TouchSensor1082)
Transform1083 = x3d.Transform()
Transform1083.translation = [0.1983,0.7815,-0.028]
Shape1084 = x3d.Shape()
Shape1084.USE = "HAnimJointShape"

Transform1083.children.append(Shape1084)

HAnimSegment1081.children.append(Transform1083)
Shape1085 = x3d.Shape()
LineSet1086 = x3d.LineSet()
LineSet1086.vertexCount = [2]
ColorRGBA1087 = x3d.ColorRGBA()
ColorRGBA1087.USE = "HAnimSegmentLineColorRGBA"

LineSet1086.color = ColorRGBA1087
Coordinate1088 = x3d.Coordinate()
Coordinate1088.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1086.coord = Coordinate1088

Shape1085.geometry = LineSet1086

HAnimSegment1081.children.append(Shape1085)

HAnimJoint1080.children.append(HAnimSegment1081)
HAnimJoint1089 = x3d.HAnimJoint()
HAnimJoint1089.DEF = "hanim_l_index2"
HAnimJoint1089.name = "l_index2"
HAnimJoint1089.center = [0.2017,0.7363,-0.0248]
HAnimSegment1090 = x3d.HAnimSegment()
HAnimSegment1090.DEF = "hanim_l_index_middle"
HAnimSegment1090.name = "l_index_middle"
TouchSensor1091 = x3d.TouchSensor()
TouchSensor1091.description = "HAnimJoint l_index2, HAnimSegment l_index_middle"

HAnimSegment1090.children.append(TouchSensor1091)
Transform1092 = x3d.Transform()
Transform1092.translation = [0.2017,0.7363,-0.0248]
Shape1093 = x3d.Shape()
Shape1093.USE = "HAnimJointShape"

Transform1092.children.append(Shape1093)

HAnimSegment1090.children.append(Transform1092)
Shape1094 = x3d.Shape()
LineSet1095 = x3d.LineSet()
LineSet1095.vertexCount = [2]
ColorRGBA1096 = x3d.ColorRGBA()
ColorRGBA1096.USE = "HAnimSegmentLineColorRGBA"

LineSet1095.color = ColorRGBA1096
Coordinate1097 = x3d.Coordinate()
Coordinate1097.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1095.coord = Coordinate1097

Shape1094.geometry = LineSet1095

HAnimSegment1090.children.append(Shape1094)

HAnimJoint1089.children.append(HAnimSegment1090)
HAnimJoint1098 = x3d.HAnimJoint()
HAnimJoint1098.DEF = "hanim_l_index3"
HAnimJoint1098.name = "l_index3"
HAnimJoint1098.center = [0.2028,0.7139,-0.0236]
HAnimSegment1099 = x3d.HAnimSegment()
HAnimSegment1099.DEF = "hanim_l_index_distal"
HAnimSegment1099.name = "l_index_distal"
TouchSensor1100 = x3d.TouchSensor()
TouchSensor1100.description = "HAnimJoint l_index3, HAnimSegment l_index_distal"

HAnimSegment1099.children.append(TouchSensor1100)
Transform1101 = x3d.Transform()
Transform1101.translation = [0.2028,0.7139,-0.0236]
Shape1102 = x3d.Shape()
Shape1102.USE = "HAnimJointShape"

Transform1101.children.append(Shape1102)

HAnimSegment1099.children.append(Transform1101)
Shape1103 = x3d.Shape()
LineSet1104 = x3d.LineSet()
LineSet1104.vertexCount = [2]
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.USE = "HAnimSiteLineColorRGBA"

LineSet1104.color = ColorRGBA1105
Coordinate1106 = x3d.Coordinate()
Coordinate1106.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

LineSet1104.coord = Coordinate1106

Shape1103.geometry = LineSet1104

HAnimSegment1099.children.append(Shape1103)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.vertexCount = [2]
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA"

LineSet1108.color = ColorRGBA1109
Coordinate1110 = x3d.Coordinate()
Coordinate1110.point = [(0.2028, 0.7139, -0.0236),(0.2056, 0.6743, -0.0482)]

LineSet1108.coord = Coordinate1110

Shape1107.geometry = LineSet1108

HAnimSegment1099.children.append(Shape1107)
HAnimSite1111 = x3d.HAnimSite()
HAnimSite1111.DEF = "hanim_l_index_distal_tip"
HAnimSite1111.name = "l_index_distal_tip"
HAnimSite1111.translation = [0.2089,0.6858,-0.0245]
TouchSensor1112 = x3d.TouchSensor()
TouchSensor1112.description = "HAnimSite l_index_distal_tip"

HAnimSite1111.children.append(TouchSensor1112)
Shape1113 = x3d.Shape()
Shape1113.USE = "HAnimSiteShape"

HAnimSite1111.children.append(Shape1113)

HAnimSegment1099.children.append(HAnimSite1111)
HAnimSite1114 = x3d.HAnimSite()
HAnimSite1114.DEF = "hanim_l_dactylion_pt"
HAnimSite1114.name = "l_dactylion_pt"
HAnimSite1114.translation = [0.2056,0.6743,-0.0482]
TouchSensor1115 = x3d.TouchSensor()
TouchSensor1115.description = "HAnimSite l_dactylion"

HAnimSite1114.children.append(TouchSensor1115)
Shape1116 = x3d.Shape()
Shape1116.USE = "HAnimSiteShape"

HAnimSite1114.children.append(Shape1116)

HAnimSegment1099.children.append(HAnimSite1114)

HAnimJoint1098.children.append(HAnimSegment1099)

HAnimJoint1089.children.append(HAnimJoint1098)

HAnimJoint1080.children.append(HAnimJoint1089)

HAnimJoint1071.children.append(HAnimJoint1080)

HAnimJoint983.children.append(HAnimJoint1071)
HAnimJoint1117 = x3d.HAnimJoint()
HAnimJoint1117.DEF = "hanim_l_middle0"
HAnimJoint1117.name = "l_middle0"
HAnimJoint1117.center = [0.1987,0.8029,-0.053]
HAnimSegment1118 = x3d.HAnimSegment()
HAnimSegment1118.DEF = "hanim_l_middle_metacarpal"
HAnimSegment1118.name = "l_middle_metacarpal"
TouchSensor1119 = x3d.TouchSensor()
TouchSensor1119.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"

HAnimSegment1118.children.append(TouchSensor1119)
Transform1120 = x3d.Transform()
Transform1120.translation = [0.1987,0.8029,-0.053]
Shape1121 = x3d.Shape()
Shape1121.USE = "HAnimJointShape"

Transform1120.children.append(Shape1121)

HAnimSegment1118.children.append(Transform1120)
Shape1122 = x3d.Shape()
LineSet1123 = x3d.LineSet()
LineSet1123.vertexCount = [2]
ColorRGBA1124 = x3d.ColorRGBA()
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA"

LineSet1123.color = ColorRGBA1124
Coordinate1125 = x3d.Coordinate()
Coordinate1125.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1123.coord = Coordinate1125

Shape1122.geometry = LineSet1123

HAnimSegment1118.children.append(Shape1122)

HAnimJoint1117.children.append(HAnimSegment1118)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.DEF = "hanim_l_middle1"
HAnimJoint1126.name = "l_middle1"
HAnimJoint1126.center = [0.1987,0.7818,-0.053]
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.DEF = "hanim_l_middle_proximal"
HAnimSegment1127.name = "l_middle_proximal"
TouchSensor1128 = x3d.TouchSensor()
TouchSensor1128.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal"

HAnimSegment1127.children.append(TouchSensor1128)
Transform1129 = x3d.Transform()
Transform1129.translation = [0.1987,0.7818,-0.053]
Shape1130 = x3d.Shape()
Shape1130.USE = "HAnimJointShape"

Transform1129.children.append(Shape1130)

HAnimSegment1127.children.append(Transform1129)
Shape1131 = x3d.Shape()
LineSet1132 = x3d.LineSet()
LineSet1132.vertexCount = [2]
ColorRGBA1133 = x3d.ColorRGBA()
ColorRGBA1133.USE = "HAnimSegmentLineColorRGBA"

LineSet1132.color = ColorRGBA1133
Coordinate1134 = x3d.Coordinate()
Coordinate1134.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1132.coord = Coordinate1134

Shape1131.geometry = LineSet1132

HAnimSegment1127.children.append(Shape1131)

HAnimJoint1126.children.append(HAnimSegment1127)
HAnimJoint1135 = x3d.HAnimJoint()
HAnimJoint1135.DEF = "hanim_l_middle2"
HAnimJoint1135.name = "l_middle2"
HAnimJoint1135.center = [0.2013,0.7273,-0.0503]
HAnimSegment1136 = x3d.HAnimSegment()
HAnimSegment1136.DEF = "hanim_l_middle_middle"
HAnimSegment1136.name = "l_middle_middle"
TouchSensor1137 = x3d.TouchSensor()
TouchSensor1137.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle"

HAnimSegment1136.children.append(TouchSensor1137)
Transform1138 = x3d.Transform()
Transform1138.translation = [0.2013,0.7273,-0.0503]
Shape1139 = x3d.Shape()
Shape1139.USE = "HAnimJointShape"

Transform1138.children.append(Shape1139)

HAnimSegment1136.children.append(Transform1138)
Shape1140 = x3d.Shape()
LineSet1141 = x3d.LineSet()
LineSet1141.vertexCount = [2]
ColorRGBA1142 = x3d.ColorRGBA()
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA"

LineSet1141.color = ColorRGBA1142
Coordinate1143 = x3d.Coordinate()
Coordinate1143.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1141.coord = Coordinate1143

Shape1140.geometry = LineSet1141

HAnimSegment1136.children.append(Shape1140)

HAnimJoint1135.children.append(HAnimSegment1136)
HAnimJoint1144 = x3d.HAnimJoint()
HAnimJoint1144.DEF = "hanim_l_middle3"
HAnimJoint1144.name = "l_middle3"
HAnimJoint1144.center = [0.2026,0.7011,-0.0494]
HAnimSegment1145 = x3d.HAnimSegment()
HAnimSegment1145.DEF = "hanim_l_middle_distal"
HAnimSegment1145.name = "l_middle_distal"
TouchSensor1146 = x3d.TouchSensor()
TouchSensor1146.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal"

HAnimSegment1145.children.append(TouchSensor1146)
Transform1147 = x3d.Transform()
Transform1147.translation = [0.2026,0.7011,-0.0494]
Shape1148 = x3d.Shape()
Shape1148.USE = "HAnimJointShape"

Transform1147.children.append(Shape1148)

HAnimSegment1145.children.append(Transform1147)
Shape1149 = x3d.Shape()
LineSet1150 = x3d.LineSet()
LineSet1150.vertexCount = [2]
ColorRGBA1151 = x3d.ColorRGBA()
ColorRGBA1151.USE = "HAnimSiteLineColorRGBA"

LineSet1150.color = ColorRGBA1151
Coordinate1152 = x3d.Coordinate()
Coordinate1152.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

LineSet1150.coord = Coordinate1152

Shape1149.geometry = LineSet1150

HAnimSegment1145.children.append(Shape1149)
HAnimSite1153 = x3d.HAnimSite()
HAnimSite1153.DEF = "hanim_l_middle_distal_tip"
HAnimSite1153.name = "l_middle_distal_tip"
HAnimSite1153.translation = [0.208,0.6731,-0.0491]
TouchSensor1154 = x3d.TouchSensor()
TouchSensor1154.description = "HAnimSite l_middle_distal_tip"

HAnimSite1153.children.append(TouchSensor1154)
Shape1155 = x3d.Shape()
Shape1155.USE = "HAnimSiteShape"

HAnimSite1153.children.append(Shape1155)

HAnimSegment1145.children.append(HAnimSite1153)

HAnimJoint1144.children.append(HAnimSegment1145)

HAnimJoint1135.children.append(HAnimJoint1144)

HAnimJoint1126.children.append(HAnimJoint1135)

HAnimJoint1117.children.append(HAnimJoint1126)

HAnimJoint983.children.append(HAnimJoint1117)
HAnimJoint1156 = x3d.HAnimJoint()
HAnimJoint1156.DEF = "hanim_l_ring0"
HAnimJoint1156.name = "l_ring0"
HAnimJoint1156.center = [0.1956,0.8019,-0.0794]
HAnimSegment1157 = x3d.HAnimSegment()
HAnimSegment1157.DEF = "hanim_l_ring_metacarpal"
HAnimSegment1157.name = "l_ring_metacarpal"
TouchSensor1158 = x3d.TouchSensor()
TouchSensor1158.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"

HAnimSegment1157.children.append(TouchSensor1158)
Transform1159 = x3d.Transform()
Transform1159.translation = [0.1956,0.8019,-0.0794]
Shape1160 = x3d.Shape()
Shape1160.USE = "HAnimJointShape"

Transform1159.children.append(Shape1160)

HAnimSegment1157.children.append(Transform1159)
Shape1161 = x3d.Shape()
LineSet1162 = x3d.LineSet()
LineSet1162.vertexCount = [2]
ColorRGBA1163 = x3d.ColorRGBA()
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA"

LineSet1162.color = ColorRGBA1163
Coordinate1164 = x3d.Coordinate()
Coordinate1164.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1162.coord = Coordinate1164

Shape1161.geometry = LineSet1162

HAnimSegment1157.children.append(Shape1161)

HAnimJoint1156.children.append(HAnimSegment1157)
HAnimJoint1165 = x3d.HAnimJoint()
HAnimJoint1165.DEF = "hanim_l_ring1"
HAnimJoint1165.name = "l_ring1"
HAnimJoint1165.center = [0.1956,0.7815,-0.0794]
HAnimSegment1166 = x3d.HAnimSegment()
HAnimSegment1166.DEF = "hanim_l_ring_proximal"
HAnimSegment1166.name = "l_ring_proximal"
TouchSensor1167 = x3d.TouchSensor()
TouchSensor1167.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal"

HAnimSegment1166.children.append(TouchSensor1167)
Transform1168 = x3d.Transform()
Transform1168.translation = [0.1956,0.7815,-0.0794]
Shape1169 = x3d.Shape()
Shape1169.USE = "HAnimJointShape"

Transform1168.children.append(Shape1169)

HAnimSegment1166.children.append(Transform1168)
Shape1170 = x3d.Shape()
LineSet1171 = x3d.LineSet()
LineSet1171.vertexCount = [2]
ColorRGBA1172 = x3d.ColorRGBA()
ColorRGBA1172.USE = "HAnimSegmentLineColorRGBA"

LineSet1171.color = ColorRGBA1172
Coordinate1173 = x3d.Coordinate()
Coordinate1173.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1171.coord = Coordinate1173

Shape1170.geometry = LineSet1171

HAnimSegment1166.children.append(Shape1170)

HAnimJoint1165.children.append(HAnimSegment1166)
HAnimJoint1174 = x3d.HAnimJoint()
HAnimJoint1174.DEF = "hanim_l_ring2"
HAnimJoint1174.name = "l_ring2"
HAnimJoint1174.center = [0.1973,0.7287,-0.0777]
HAnimSegment1175 = x3d.HAnimSegment()
HAnimSegment1175.DEF = "hanim_l_ring_middle"
HAnimSegment1175.name = "l_ring_middle"
TouchSensor1176 = x3d.TouchSensor()
TouchSensor1176.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle"

HAnimSegment1175.children.append(TouchSensor1176)
Transform1177 = x3d.Transform()
Transform1177.translation = [0.1973,0.7287,-0.0777]
Shape1178 = x3d.Shape()
Shape1178.USE = "HAnimJointShape"

Transform1177.children.append(Shape1178)

HAnimSegment1175.children.append(Transform1177)
Shape1179 = x3d.Shape()
LineSet1180 = x3d.LineSet()
LineSet1180.vertexCount = [2]
ColorRGBA1181 = x3d.ColorRGBA()
ColorRGBA1181.USE = "HAnimSegmentLineColorRGBA"

LineSet1180.color = ColorRGBA1181
Coordinate1182 = x3d.Coordinate()
Coordinate1182.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1180.coord = Coordinate1182

Shape1179.geometry = LineSet1180

HAnimSegment1175.children.append(Shape1179)

HAnimJoint1174.children.append(HAnimSegment1175)
HAnimJoint1183 = x3d.HAnimJoint()
HAnimJoint1183.DEF = "hanim_l_ring3"
HAnimJoint1183.name = "l_ring3"
HAnimJoint1183.center = [0.1983,0.7045,-0.0767]
HAnimSegment1184 = x3d.HAnimSegment()
HAnimSegment1184.DEF = "hanim_l_ring_distal"
HAnimSegment1184.name = "l_ring_distal"
TouchSensor1185 = x3d.TouchSensor()
TouchSensor1185.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal"

HAnimSegment1184.children.append(TouchSensor1185)
Transform1186 = x3d.Transform()
Transform1186.translation = [0.1983,0.7045,-0.0767]
Shape1187 = x3d.Shape()
Shape1187.USE = "HAnimJointShape"

Transform1186.children.append(Shape1187)

HAnimSegment1184.children.append(Transform1186)
Shape1188 = x3d.Shape()
LineSet1189 = x3d.LineSet()
LineSet1189.vertexCount = [2]
ColorRGBA1190 = x3d.ColorRGBA()
ColorRGBA1190.USE = "HAnimSiteLineColorRGBA"

LineSet1189.color = ColorRGBA1190
Coordinate1191 = x3d.Coordinate()
Coordinate1191.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

LineSet1189.coord = Coordinate1191

Shape1188.geometry = LineSet1189

HAnimSegment1184.children.append(Shape1188)
HAnimSite1192 = x3d.HAnimSite()
HAnimSite1192.DEF = "hanim_l_ring_distal_tip"
HAnimSite1192.name = "l_ring_distal_tip"
HAnimSite1192.translation = [0.2035,0.675,-0.0756]
TouchSensor1193 = x3d.TouchSensor()
TouchSensor1193.description = "HAnimSite l_ring_distal_tip"

HAnimSite1192.children.append(TouchSensor1193)
Shape1194 = x3d.Shape()
Shape1194.USE = "HAnimSiteShape"

HAnimSite1192.children.append(Shape1194)

HAnimSegment1184.children.append(HAnimSite1192)

HAnimJoint1183.children.append(HAnimSegment1184)

HAnimJoint1174.children.append(HAnimJoint1183)

HAnimJoint1165.children.append(HAnimJoint1174)

HAnimJoint1156.children.append(HAnimJoint1165)

HAnimJoint983.children.append(HAnimJoint1156)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.DEF = "hanim_l_pinky0"
HAnimJoint1195.name = "l_pinky0"
HAnimJoint1195.center = [0.1925,0.8066,-0.1036]
HAnimSegment1196 = x3d.HAnimSegment()
HAnimSegment1196.DEF = "hanim_l_pinky_metacarpal"
HAnimSegment1196.name = "l_pinky_metacarpal"
TouchSensor1197 = x3d.TouchSensor()
TouchSensor1197.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"

HAnimSegment1196.children.append(TouchSensor1197)
Transform1198 = x3d.Transform()
Transform1198.translation = [0.1925,0.8066,-0.1036]
Shape1199 = x3d.Shape()
Shape1199.USE = "HAnimJointShape"

Transform1198.children.append(Shape1199)

HAnimSegment1196.children.append(Transform1198)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.vertexCount = [2]
ColorRGBA1202 = x3d.ColorRGBA()
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA"

LineSet1201.color = ColorRGBA1202
Coordinate1203 = x3d.Coordinate()
Coordinate1203.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1201.coord = Coordinate1203

Shape1200.geometry = LineSet1201

HAnimSegment1196.children.append(Shape1200)

HAnimJoint1195.children.append(HAnimSegment1196)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.DEF = "hanim_l_pinky1"
HAnimJoint1204.name = "l_pinky1"
HAnimJoint1204.center = [0.1925,0.7866,-0.1036]
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.DEF = "hanim_l_pinky_proximal"
HAnimSegment1205.name = "l_pinky_proximal"
TouchSensor1206 = x3d.TouchSensor()
TouchSensor1206.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"

HAnimSegment1205.children.append(TouchSensor1206)
Transform1207 = x3d.Transform()
Transform1207.translation = [0.1925,0.7866,-0.1036]
Shape1208 = x3d.Shape()
Shape1208.USE = "HAnimJointShape"

Transform1207.children.append(Shape1208)

HAnimSegment1205.children.append(Transform1207)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.vertexCount = [2]
ColorRGBA1211 = x3d.ColorRGBA()
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA"

LineSet1210.color = ColorRGBA1211
Coordinate1212 = x3d.Coordinate()
Coordinate1212.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1210.coord = Coordinate1212

Shape1209.geometry = LineSet1210

HAnimSegment1205.children.append(Shape1209)

HAnimJoint1204.children.append(HAnimSegment1205)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.DEF = "hanim_l_pinky2"
HAnimJoint1213.name = "l_pinky2"
HAnimJoint1213.center = [0.1938,0.7452,-0.1024]
HAnimSegment1214 = x3d.HAnimSegment()
HAnimSegment1214.DEF = "hanim_l_pinky_middle"
HAnimSegment1214.name = "l_pinky_middle"
TouchSensor1215 = x3d.TouchSensor()
TouchSensor1215.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"

HAnimSegment1214.children.append(TouchSensor1215)
Transform1216 = x3d.Transform()
Transform1216.translation = [0.1938,0.7452,-0.1024]
Shape1217 = x3d.Shape()
Shape1217.USE = "HAnimJointShape"

Transform1216.children.append(Shape1217)

HAnimSegment1214.children.append(Transform1216)
Shape1218 = x3d.Shape()
LineSet1219 = x3d.LineSet()
LineSet1219.vertexCount = [2]
ColorRGBA1220 = x3d.ColorRGBA()
ColorRGBA1220.USE = "HAnimSegmentLineColorRGBA"

LineSet1219.color = ColorRGBA1220
Coordinate1221 = x3d.Coordinate()
Coordinate1221.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1219.coord = Coordinate1221

Shape1218.geometry = LineSet1219

HAnimSegment1214.children.append(Shape1218)

HAnimJoint1213.children.append(HAnimSegment1214)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.DEF = "hanim_l_pinky3"
HAnimJoint1222.name = "l_pinky3"
HAnimJoint1222.center = [0.1948,0.7277,-0.1017]
HAnimSegment1223 = x3d.HAnimSegment()
HAnimSegment1223.DEF = "hanim_l_pinky_distal"
HAnimSegment1223.name = "l_pinky_distal"
TouchSensor1224 = x3d.TouchSensor()
TouchSensor1224.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"

HAnimSegment1223.children.append(TouchSensor1224)
Transform1225 = x3d.Transform()
Transform1225.translation = [0.1948,0.7277,-0.1017]
Shape1226 = x3d.Shape()
Shape1226.USE = "HAnimJointShape"

Transform1225.children.append(Shape1226)

HAnimSegment1223.children.append(Transform1225)
Shape1227 = x3d.Shape()
LineSet1228 = x3d.LineSet()
LineSet1228.vertexCount = [2]
ColorRGBA1229 = x3d.ColorRGBA()
ColorRGBA1229.USE = "HAnimSiteLineColorRGBA"

LineSet1228.color = ColorRGBA1229
Coordinate1230 = x3d.Coordinate()
Coordinate1230.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

LineSet1228.coord = Coordinate1230

Shape1227.geometry = LineSet1228

HAnimSegment1223.children.append(Shape1227)
HAnimSite1231 = x3d.HAnimSite()
HAnimSite1231.DEF = "hanim_l_pinky_distal_tip"
HAnimSite1231.name = "l_pinky_distal_tip"
HAnimSite1231.translation = [0.2014,0.7009,-0.1012]
TouchSensor1232 = x3d.TouchSensor()
TouchSensor1232.description = "HAnimSite l_pinky_distal_tip"

HAnimSite1231.children.append(TouchSensor1232)
Shape1233 = x3d.Shape()
Shape1233.USE = "HAnimSiteShape"

HAnimSite1231.children.append(Shape1233)

HAnimSegment1223.children.append(HAnimSite1231)

HAnimJoint1222.children.append(HAnimSegment1223)

HAnimJoint1213.children.append(HAnimJoint1222)

HAnimJoint1204.children.append(HAnimJoint1213)

HAnimJoint1195.children.append(HAnimJoint1204)

HAnimJoint983.children.append(HAnimJoint1195)

HAnimJoint946.children.append(HAnimJoint983)

HAnimJoint930.children.append(HAnimJoint946)

HAnimJoint921.children.append(HAnimJoint930)

HAnimJoint884.children.append(HAnimJoint921)

HAnimJoint596.children.append(HAnimJoint884)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.DEF = "hanim_r_sternoclavicular"
HAnimJoint1234.name = "r_sternoclavicular"
HAnimJoint1234.center = [-0.082,1.4488,-0.0353]
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.DEF = "hanim_r_clavicle"
HAnimSegment1235.name = "r_clavicle"
TouchSensor1236 = x3d.TouchSensor()
TouchSensor1236.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"

HAnimSegment1235.children.append(TouchSensor1236)
Transform1237 = x3d.Transform()
Transform1237.translation = [-0.082,1.4488,-0.0353]
Shape1238 = x3d.Shape()
Shape1238.USE = "HAnimJointShape"

Transform1237.children.append(Shape1238)

HAnimSegment1235.children.append(Transform1237)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.vertexCount = [2]
ColorRGBA1241 = x3d.ColorRGBA()
ColorRGBA1241.USE = "HAnimSegmentLineColorRGBA"

LineSet1240.color = ColorRGBA1241
Coordinate1242 = x3d.Coordinate()
Coordinate1242.point = [(-0.082, 1.4488, -0.0353),(-0.0962, 1.4269, -0.0424)]

LineSet1240.coord = Coordinate1242

Shape1239.geometry = LineSet1240

HAnimSegment1235.children.append(Shape1239)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.vertexCount = [2]
ColorRGBA1245 = x3d.ColorRGBA()
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA"

LineSet1244.color = ColorRGBA1245
Coordinate1246 = x3d.Coordinate()
Coordinate1246.point = [(-0.082, 1.4488, -0.0353),(-0.0115, 1.4943, 0.04)]

LineSet1244.coord = Coordinate1246

Shape1243.geometry = LineSet1244

HAnimSegment1235.children.append(Shape1243)
Shape1247 = x3d.Shape()
LineSet1248 = x3d.LineSet()
LineSet1248.vertexCount = [2]
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA"

LineSet1248.color = ColorRGBA1249
Coordinate1250 = x3d.Coordinate()
Coordinate1250.point = [(-0.082, 1.4488, -0.0353),(-0.1905, 1.4791, -0.0431)]

LineSet1248.coord = Coordinate1250

Shape1247.geometry = LineSet1248

HAnimSegment1235.children.append(Shape1247)
Shape1251 = x3d.Shape()
LineSet1252 = x3d.LineSet()
LineSet1252.vertexCount = [2]
ColorRGBA1253 = x3d.ColorRGBA()
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA"

LineSet1252.color = ColorRGBA1253
Coordinate1254 = x3d.Coordinate()
Coordinate1254.point = [(-0.082, 1.4488, -0.0353),(-0.1626, 1.4072, -0.0031)]

LineSet1252.coord = Coordinate1254

Shape1251.geometry = LineSet1252

HAnimSegment1235.children.append(Shape1251)
Shape1255 = x3d.Shape()
LineSet1256 = x3d.LineSet()
LineSet1256.vertexCount = [2]
ColorRGBA1257 = x3d.ColorRGBA()
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA"

LineSet1256.color = ColorRGBA1257
Coordinate1258 = x3d.Coordinate()
Coordinate1258.point = [(-0.082, 1.4488, -0.0353),(-0.1603, 1.4098, -0.0826)]

LineSet1256.coord = Coordinate1258

Shape1255.geometry = LineSet1256

HAnimSegment1235.children.append(Shape1255)
HAnimSite1259 = x3d.HAnimSite()
HAnimSite1259.DEF = "hanim_r_clavicale_pt"
HAnimSite1259.name = "r_clavicale_pt"
HAnimSite1259.translation = [-0.0115,1.4943,0.04]
TouchSensor1260 = x3d.TouchSensor()
TouchSensor1260.description = "HAnimSite r_clavicale"

HAnimSite1259.children.append(TouchSensor1260)
Shape1261 = x3d.Shape()
Shape1261.USE = "HAnimSiteShape"

HAnimSite1259.children.append(Shape1261)

HAnimSegment1235.children.append(HAnimSite1259)
HAnimSite1262 = x3d.HAnimSite()
HAnimSite1262.DEF = "hanim_r_acromion_pt"
HAnimSite1262.name = "r_acromion_pt"
HAnimSite1262.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1263 = x3d.TouchSensor()
TouchSensor1263.description = "HAnimSite r_acromion"

HAnimSite1262.children.append(TouchSensor1263)
Shape1264 = x3d.Shape()
Shape1264.USE = "HAnimSiteShape"

HAnimSite1262.children.append(Shape1264)

HAnimSegment1235.children.append(HAnimSite1262)
HAnimSite1265 = x3d.HAnimSite()
HAnimSite1265.DEF = "hanim_r_axilla_ant_pt"
HAnimSite1265.name = "r_axilla_ant_pt"
HAnimSite1265.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1266 = x3d.TouchSensor()
TouchSensor1266.description = "HAnimSite r_axilla_ant"

HAnimSite1265.children.append(TouchSensor1266)
Shape1267 = x3d.Shape()
Shape1267.USE = "HAnimSiteShape"

HAnimSite1265.children.append(Shape1267)

HAnimSegment1235.children.append(HAnimSite1265)
HAnimSite1268 = x3d.HAnimSite()
HAnimSite1268.DEF = "hanim_r_axilla_post_pt"
HAnimSite1268.name = "r_axilla_post_pt"
HAnimSite1268.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1269 = x3d.TouchSensor()
TouchSensor1269.description = "HAnimSite r_axilla_post"

HAnimSite1268.children.append(TouchSensor1269)
Shape1270 = x3d.Shape()
Shape1270.USE = "HAnimSiteShape"

HAnimSite1268.children.append(Shape1270)

HAnimSegment1235.children.append(HAnimSite1268)

HAnimJoint1234.children.append(HAnimSegment1235)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.DEF = "hanim_r_acromioclavicular"
HAnimJoint1271.name = "r_acromioclavicular"
HAnimJoint1271.center = [-0.0962,1.4269,-0.0424]
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.DEF = "hanim_r_scapula"
HAnimSegment1272.name = "r_scapula"
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"

HAnimSegment1272.children.append(TouchSensor1273)
Transform1274 = x3d.Transform()
Transform1274.translation = [-0.0962,1.4269,-0.0424]
Shape1275 = x3d.Shape()
Shape1275.USE = "HAnimJointShape"

Transform1274.children.append(Shape1275)

HAnimSegment1272.children.append(Transform1274)
Shape1276 = x3d.Shape()
LineSet1277 = x3d.LineSet()
LineSet1277.vertexCount = [2]
ColorRGBA1278 = x3d.ColorRGBA()
ColorRGBA1278.USE = "HAnimSegmentLineColorRGBA"

LineSet1277.color = ColorRGBA1278
Coordinate1279 = x3d.Coordinate()
Coordinate1279.point = [(-0.0962, 1.4269, -0.0424),(-0.2029, 1.4376, -0.0387)]

LineSet1277.coord = Coordinate1279

Shape1276.geometry = LineSet1277

HAnimSegment1272.children.append(Shape1276)

HAnimJoint1271.children.append(HAnimSegment1272)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.DEF = "hanim_r_shoulder"
HAnimJoint1280.name = "r_shoulder"
HAnimJoint1280.center = [-0.2029,1.4376,-0.0387]
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.DEF = "hanim_r_upperarm"
HAnimSegment1281.name = "r_upperarm"
TouchSensor1282 = x3d.TouchSensor()
TouchSensor1282.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm"

HAnimSegment1281.children.append(TouchSensor1282)
Transform1283 = x3d.Transform()
Transform1283.translation = [-0.2029,1.4376,-0.0387]
Shape1284 = x3d.Shape()
Shape1284.USE = "HAnimJointShape"

Transform1283.children.append(Shape1284)

HAnimSegment1281.children.append(Transform1283)
Shape1285 = x3d.Shape()
LineSet1286 = x3d.LineSet()
LineSet1286.vertexCount = [2]
ColorRGBA1287 = x3d.ColorRGBA()
ColorRGBA1287.USE = "HAnimSegmentLineColorRGBA"

LineSet1286.color = ColorRGBA1287
Coordinate1288 = x3d.Coordinate()
Coordinate1288.point = [(-0.2029, 1.4376, -0.0387),(-0.2014, 1.1357, -0.0682)]

LineSet1286.coord = Coordinate1288

Shape1285.geometry = LineSet1286

HAnimSegment1281.children.append(Shape1285)
Shape1289 = x3d.Shape()
LineSet1290 = x3d.LineSet()
LineSet1290.vertexCount = [2]
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.USE = "HAnimSiteLineColorRGBA"

LineSet1290.color = ColorRGBA1291
Coordinate1292 = x3d.Coordinate()
Coordinate1292.point = [(-0.2029, 1.4376, -0.0387),(-0.2224, 1.1517, -0.1033)]

LineSet1290.coord = Coordinate1292

Shape1289.geometry = LineSet1290

HAnimSegment1281.children.append(Shape1289)
HAnimSite1293 = x3d.HAnimSite()
HAnimSite1293.DEF = "hanim_r_humeral_lateral_epicn_pt"
HAnimSite1293.name = "r_humeral_lateral_epicn_pt"
HAnimSite1293.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1294 = x3d.TouchSensor()
TouchSensor1294.description = "HAnimSite r_humeral_lateral_epicn"

HAnimSite1293.children.append(TouchSensor1294)
Shape1295 = x3d.Shape()
Shape1295.USE = "HAnimSiteShape"

HAnimSite1293.children.append(Shape1295)

HAnimSegment1281.children.append(HAnimSite1293)

HAnimJoint1280.children.append(HAnimSegment1281)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.DEF = "hanim_r_elbow"
HAnimJoint1296.name = "r_elbow"
HAnimJoint1296.center = [-0.2014,1.1357,-0.0682]
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.DEF = "hanim_r_forearm"
HAnimSegment1297.name = "r_forearm"
TouchSensor1298 = x3d.TouchSensor()
TouchSensor1298.description = "HAnimJoint r_elbow, HAnimSegment r_forearm"

HAnimSegment1297.children.append(TouchSensor1298)
Transform1299 = x3d.Transform()
Transform1299.translation = [-0.2014,1.1357,-0.0682]
Shape1300 = x3d.Shape()
Shape1300.USE = "HAnimJointShape"

Transform1299.children.append(Shape1300)

HAnimSegment1297.children.append(Transform1299)
Shape1301 = x3d.Shape()
LineSet1302 = x3d.LineSet()
LineSet1302.vertexCount = [2]
ColorRGBA1303 = x3d.ColorRGBA()
ColorRGBA1303.USE = "HAnimSegmentLineColorRGBA"

LineSet1302.color = ColorRGBA1303
Coordinate1304 = x3d.Coordinate()
Coordinate1304.point = [(-0.2014, 1.1357, -0.0682),(-0.1984, 0.8663, -0.0583)]

LineSet1302.coord = Coordinate1304

Shape1301.geometry = LineSet1302

HAnimSegment1297.children.append(Shape1301)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.vertexCount = [2]
ColorRGBA1307 = x3d.ColorRGBA()
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA"

LineSet1306.color = ColorRGBA1307
Coordinate1308 = x3d.Coordinate()
Coordinate1308.point = [(-0.2014, 1.1357, -0.0682),(-0.1884, 0.8676, -0.036)]

LineSet1306.coord = Coordinate1308

Shape1305.geometry = LineSet1306

HAnimSegment1297.children.append(Shape1305)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.vertexCount = [2]
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA"

LineSet1310.color = ColorRGBA1311
Coordinate1312 = x3d.Coordinate()
Coordinate1312.point = [(-0.2014, 1.1357, -0.0682),(-0.1907, 1.1405, -0.1065)]

LineSet1310.coord = Coordinate1312

Shape1309.geometry = LineSet1310

HAnimSegment1297.children.append(Shape1309)
Shape1313 = x3d.Shape()
LineSet1314 = x3d.LineSet()
LineSet1314.vertexCount = [2]
ColorRGBA1315 = x3d.ColorRGBA()
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA"

LineSet1314.color = ColorRGBA1315
Coordinate1316 = x3d.Coordinate()
Coordinate1316.point = [(-0.2014, 1.1357, -0.0682),(-0.168, 1.1298, -0.1062)]

LineSet1314.coord = Coordinate1316

Shape1313.geometry = LineSet1314

HAnimSegment1297.children.append(Shape1313)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.vertexCount = [2]
ColorRGBA1319 = x3d.ColorRGBA()
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA"

LineSet1318.color = ColorRGBA1319
Coordinate1320 = x3d.Coordinate()
Coordinate1320.point = [(-0.2014, 1.1357, -0.0682),(-0.213, 1.1305, -0.1091)]

LineSet1318.coord = Coordinate1320

Shape1317.geometry = LineSet1318

HAnimSegment1297.children.append(Shape1317)
HAnimSite1321 = x3d.HAnimSite()
HAnimSite1321.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1321.name = "r_radial_styloid_pt"
HAnimSite1321.translation = [-0.1884,0.8676,-0.036]
TouchSensor1322 = x3d.TouchSensor()
TouchSensor1322.description = "HAnimSite r_radial_styloid"

HAnimSite1321.children.append(TouchSensor1322)
Shape1323 = x3d.Shape()
Shape1323.USE = "HAnimSiteShape"

HAnimSite1321.children.append(Shape1323)

HAnimSegment1297.children.append(HAnimSite1321)
HAnimSite1324 = x3d.HAnimSite()
HAnimSite1324.DEF = "hanim_r_olecranon_pt"
HAnimSite1324.name = "r_olecranon_pt"
HAnimSite1324.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1325 = x3d.TouchSensor()
TouchSensor1325.description = "HAnimSite r_olecranon"

HAnimSite1324.children.append(TouchSensor1325)
Shape1326 = x3d.Shape()
Shape1326.USE = "HAnimSiteShape"

HAnimSite1324.children.append(Shape1326)

HAnimSegment1297.children.append(HAnimSite1324)
HAnimSite1327 = x3d.HAnimSite()
HAnimSite1327.DEF = "hanim_r_humeral_medial_epicn_pt"
HAnimSite1327.name = "r_humeral_medial_epicn_pt"
HAnimSite1327.translation = [-0.168,1.1298,-0.1062]
TouchSensor1328 = x3d.TouchSensor()
TouchSensor1328.description = "HAnimSite r_humeral_medial_epicn"

HAnimSite1327.children.append(TouchSensor1328)
Shape1329 = x3d.Shape()
Shape1329.USE = "HAnimSiteShape"

HAnimSite1327.children.append(Shape1329)

HAnimSegment1297.children.append(HAnimSite1327)
HAnimSite1330 = x3d.HAnimSite()
HAnimSite1330.DEF = "hanim_r_radiale_pt"
HAnimSite1330.name = "r_radiale_pt"
HAnimSite1330.translation = [-0.213,1.1305,-0.1091]
TouchSensor1331 = x3d.TouchSensor()
TouchSensor1331.description = "HAnimSite r_radiale"

HAnimSite1330.children.append(TouchSensor1331)
Shape1332 = x3d.Shape()
Shape1332.USE = "HAnimSiteShape"

HAnimSite1330.children.append(Shape1332)

HAnimSegment1297.children.append(HAnimSite1330)

HAnimJoint1296.children.append(HAnimSegment1297)
HAnimJoint1333 = x3d.HAnimJoint()
HAnimJoint1333.DEF = "hanim_r_wrist"
HAnimJoint1333.name = "r_wrist"
HAnimJoint1333.center = [-0.1984,0.8663,-0.0583]
HAnimSegment1334 = x3d.HAnimSegment()
HAnimSegment1334.DEF = "hanim_r_hand"
HAnimSegment1334.name = "r_hand"
TouchSensor1335 = x3d.TouchSensor()
TouchSensor1335.description = "HAnimJoint r_wrist, HAnimSegment r_hand"

HAnimSegment1334.children.append(TouchSensor1335)
Transform1336 = x3d.Transform()
Transform1336.translation = [-0.1984,0.8663,-0.0583]
Shape1337 = x3d.Shape()
Shape1337.USE = "HAnimJointShape"

Transform1336.children.append(Shape1337)

HAnimSegment1334.children.append(Transform1336)
Shape1338 = x3d.Shape()
LineSet1339 = x3d.LineSet()
LineSet1339.vertexCount = [2]
ColorRGBA1340 = x3d.ColorRGBA()
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA"

LineSet1339.color = ColorRGBA1340
Coordinate1341 = x3d.Coordinate()
Coordinate1341.point = [(-0.1984, 0.8663, -0.0583),(-0.1924, 0.8472, -0.0534)]

LineSet1339.coord = Coordinate1341

Shape1338.geometry = LineSet1339

HAnimSegment1334.children.append(Shape1338)
Shape1342 = x3d.Shape()
LineSet1343 = x3d.LineSet()
LineSet1343.vertexCount = [2]
ColorRGBA1344 = x3d.ColorRGBA()
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA"

LineSet1343.color = ColorRGBA1344
Coordinate1345 = x3d.Coordinate()
Coordinate1345.point = [(-0.1984, 0.8663, -0.0583),(-0.1983, 0.8024, -0.028)]

LineSet1343.coord = Coordinate1345

Shape1342.geometry = LineSet1343

HAnimSegment1334.children.append(Shape1342)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.vertexCount = [2]
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA"

LineSet1347.color = ColorRGBA1348
Coordinate1349 = x3d.Coordinate()
Coordinate1349.point = [(-0.1984, 0.8663, -0.0583),(-0.1987, 0.8029, -0.053)]

LineSet1347.coord = Coordinate1349

Shape1346.geometry = LineSet1347

HAnimSegment1334.children.append(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.vertexCount = [2]
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA"

LineSet1351.color = ColorRGBA1352
Coordinate1353 = x3d.Coordinate()
Coordinate1353.point = [(-0.1984, 0.8663, -0.0583),(-0.1956, 0.8019, -0.0794)]

LineSet1351.coord = Coordinate1353

Shape1350.geometry = LineSet1351

HAnimSegment1334.children.append(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
ColorRGBA1356 = x3d.ColorRGBA()
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA"

LineSet1355.color = ColorRGBA1356
Coordinate1357 = x3d.Coordinate()
Coordinate1357.point = [(-0.1984, 0.8663, -0.0583),(-0.1925, 0.8066, -0.1036)]

LineSet1355.coord = Coordinate1357

Shape1354.geometry = LineSet1355

HAnimSegment1334.children.append(Shape1354)
Shape1358 = x3d.Shape()
LineSet1359 = x3d.LineSet()
LineSet1359.vertexCount = [2]
ColorRGBA1360 = x3d.ColorRGBA()
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA"

LineSet1359.color = ColorRGBA1360
Coordinate1361 = x3d.Coordinate()
Coordinate1361.point = [(-0.1984, 0.8663, -0.0583),(-0.1977, 0.8169, -0.0177)]

LineSet1359.coord = Coordinate1361

Shape1358.geometry = LineSet1359

HAnimSegment1334.children.append(Shape1358)
Shape1362 = x3d.Shape()
LineSet1363 = x3d.LineSet()
LineSet1363.vertexCount = [2]
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA"

LineSet1363.color = ColorRGBA1364
Coordinate1365 = x3d.Coordinate()
Coordinate1365.point = [(-0.1984, 0.8663, -0.0583),(-0.2117, 0.8562, -0.0584)]

LineSet1363.coord = Coordinate1365

Shape1362.geometry = LineSet1363

HAnimSegment1334.children.append(Shape1362)
Shape1366 = x3d.Shape()
LineSet1367 = x3d.LineSet()
LineSet1367.vertexCount = [2]
ColorRGBA1368 = x3d.ColorRGBA()
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA"

LineSet1367.color = ColorRGBA1368
Coordinate1369 = x3d.Coordinate()
Coordinate1369.point = [(-0.1984, 0.8663, -0.0583),(-0.1929, 0.789, -0.1064)]

LineSet1367.coord = Coordinate1369

Shape1366.geometry = LineSet1367

HAnimSegment1334.children.append(Shape1366)
Shape1370 = x3d.Shape()
LineSet1371 = x3d.LineSet()
LineSet1371.vertexCount = [2]
ColorRGBA1372 = x3d.ColorRGBA()
ColorRGBA1372.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1371.color = ColorRGBA1372
Coordinate1373 = x3d.Coordinate()
Coordinate1373.point = [(-0.1984, 0.8663, -0.0583),(-0.3, 0.75, 0.45)]

LineSet1371.coord = Coordinate1373

Shape1370.geometry = LineSet1371

HAnimSegment1334.children.append(Shape1370)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.DEF = "hanim_r_metacarpal_pha2_pt"
HAnimSite1374.name = "r_metacarpal_pha2_pt"
HAnimSite1374.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.description = "HAnimSite r_metacarpal_pha2"

HAnimSite1374.children.append(TouchSensor1375)
Shape1376 = x3d.Shape()
Shape1376.USE = "HAnimSiteShape"

HAnimSite1374.children.append(Shape1376)

HAnimSegment1334.children.append(HAnimSite1374)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1377.name = "r_ulnar_styloid_pt"
HAnimSite1377.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1378 = x3d.TouchSensor()
TouchSensor1378.description = "HAnimSite r_ulnar_styloid"

HAnimSite1377.children.append(TouchSensor1378)
Shape1379 = x3d.Shape()
Shape1379.USE = "HAnimSiteShape"

HAnimSite1377.children.append(Shape1379)

HAnimSegment1334.children.append(HAnimSite1377)
HAnimSite1380 = x3d.HAnimSite()
HAnimSite1380.DEF = "hanim_r_metacarpal_pha5_pt"
HAnimSite1380.name = "r_metacarpal_pha5_pt"
HAnimSite1380.translation = [-0.1929,0.789,-0.1064]
TouchSensor1381 = x3d.TouchSensor()
TouchSensor1381.description = "HAnimSite r_metacarpal_pha5"

HAnimSite1380.children.append(TouchSensor1381)
Shape1382 = x3d.Shape()
Shape1382.USE = "HAnimSiteShape"

HAnimSite1380.children.append(Shape1382)

HAnimSegment1334.children.append(HAnimSite1380)
HAnimSite1383 = x3d.HAnimSite()
HAnimSite1383.DEF = "hanim_r_hand_front_view"
HAnimSite1383.name = "r_hand_front_view"
HAnimSite1383.translation = [-0.3,0.75,0.45]
TouchSensor1384 = x3d.TouchSensor()
TouchSensor1384.description = "HAnimSite r_hand_front_view"

HAnimSite1383.children.append(TouchSensor1384)
Shape1385 = x3d.Shape()
Shape1385.USE = "HAnimSiteShape"

HAnimSite1383.children.append(Shape1385)
Viewpoint1386 = x3d.Viewpoint()
Viewpoint1386.DEF = "hanim_r_hand_front_viewpoint"
Viewpoint1386.description = "right hand front"
Viewpoint1386.position = [0,0,0]
Viewpoint1386.centerOfRotation = [0,0.7,0]

HAnimSite1383.children.append(Viewpoint1386)
Anchor1387 = x3d.Anchor()
Anchor1387.description = "HAnimSite hanim_r_hand_front_view Viewpoint"
Anchor1387.url = ["#hanim_r_hand_front_viewpoint"]
LOD1388 = x3d.LOD()
LOD1388.forceTransitions = True
LOD1388.range = [0.04]
WorldInfo1389 = x3d.WorldInfo()
WorldInfo1389.info = ["hide diamond when close"]

LOD1388.children.append(WorldInfo1389)
Shape1390 = x3d.Shape()
Shape1390.USE = "HAnimSiteViewpointShape"

LOD1388.children.append(Shape1390)

Anchor1387.children.append(LOD1388)

HAnimSite1383.children.append(Anchor1387)

HAnimSegment1334.children.append(HAnimSite1383)

HAnimJoint1333.children.append(HAnimSegment1334)
HAnimJoint1391 = x3d.HAnimJoint()
HAnimJoint1391.DEF = "hanim_r_thumb1"
HAnimJoint1391.name = "r_thumb1"
HAnimJoint1391.center = [-0.1924,0.8472,-0.0534]
HAnimSegment1392 = x3d.HAnimSegment()
HAnimSegment1392.DEF = "hanim_r_thumb_metacarpal"
HAnimSegment1392.name = "r_thumb_metacarpal"
TouchSensor1393 = x3d.TouchSensor()
TouchSensor1393.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"

HAnimSegment1392.children.append(TouchSensor1393)
Transform1394 = x3d.Transform()
Transform1394.translation = [-0.1924,0.8472,-0.0534]
Shape1395 = x3d.Shape()
Shape1395.USE = "HAnimJointShape"

Transform1394.children.append(Shape1395)

HAnimSegment1392.children.append(Transform1394)
Shape1396 = x3d.Shape()
LineSet1397 = x3d.LineSet()
LineSet1397.vertexCount = [2]
ColorRGBA1398 = x3d.ColorRGBA()
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA"

LineSet1397.color = ColorRGBA1398
Coordinate1399 = x3d.Coordinate()
Coordinate1399.point = [(-0.1924, 0.8472, -0.0534),(-0.1951, 0.8226, 0.0246)]

LineSet1397.coord = Coordinate1399

Shape1396.geometry = LineSet1397

HAnimSegment1392.children.append(Shape1396)

HAnimJoint1391.children.append(HAnimSegment1392)
HAnimJoint1400 = x3d.HAnimJoint()
HAnimJoint1400.DEF = "hanim_r_thumb2"
HAnimJoint1400.name = "r_thumb2"
HAnimJoint1400.center = [-0.1951,0.8226,0.0246]
HAnimSegment1401 = x3d.HAnimSegment()
HAnimSegment1401.DEF = "hanim_r_thumb_proximal"
HAnimSegment1401.name = "r_thumb_proximal"
TouchSensor1402 = x3d.TouchSensor()
TouchSensor1402.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"

HAnimSegment1401.children.append(TouchSensor1402)
Transform1403 = x3d.Transform()
Transform1403.translation = [-0.1951,0.8226,0.0246]
Shape1404 = x3d.Shape()
Shape1404.USE = "HAnimJointShape"

Transform1403.children.append(Shape1404)

HAnimSegment1401.children.append(Transform1403)
Shape1405 = x3d.Shape()
LineSet1406 = x3d.LineSet()
LineSet1406.vertexCount = [2]
ColorRGBA1407 = x3d.ColorRGBA()
ColorRGBA1407.USE = "HAnimSegmentLineColorRGBA"

LineSet1406.color = ColorRGBA1407
Coordinate1408 = x3d.Coordinate()
Coordinate1408.point = [(-0.1951, 0.8226, 0.0246),(-0.1955, 0.8159, 0.0464)]

LineSet1406.coord = Coordinate1408

Shape1405.geometry = LineSet1406

HAnimSegment1401.children.append(Shape1405)

HAnimJoint1400.children.append(HAnimSegment1401)
HAnimJoint1409 = x3d.HAnimJoint()
HAnimJoint1409.DEF = "hanim_r_thumb3"
HAnimJoint1409.name = "r_thumb3"
HAnimJoint1409.center = [-0.1955,0.8159,0.0464]
HAnimSegment1410 = x3d.HAnimSegment()
HAnimSegment1410.DEF = "hanim_r_thumb_distal"
HAnimSegment1410.name = "r_thumb_distal"
TouchSensor1411 = x3d.TouchSensor()
TouchSensor1411.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"

HAnimSegment1410.children.append(TouchSensor1411)
Transform1412 = x3d.Transform()
Transform1412.translation = [-0.1955,0.8159,0.0464]
Shape1413 = x3d.Shape()
Shape1413.USE = "HAnimJointShape"

Transform1412.children.append(Shape1413)

HAnimSegment1410.children.append(Transform1412)
Shape1414 = x3d.Shape()
LineSet1415 = x3d.LineSet()
LineSet1415.vertexCount = [2]
ColorRGBA1416 = x3d.ColorRGBA()
ColorRGBA1416.USE = "HAnimSiteLineColorRGBA"

LineSet1415.color = ColorRGBA1416
Coordinate1417 = x3d.Coordinate()
Coordinate1417.point = [(-0.1955, 0.8159, 0.0464),(-0.1869, 0.809, 0.082)]

LineSet1415.coord = Coordinate1417

Shape1414.geometry = LineSet1415

HAnimSegment1410.children.append(Shape1414)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.DEF = "hanim_r_thumb_distal_tip"
HAnimSite1418.name = "r_thumb_distal_tip"
HAnimSite1418.translation = [-0.1869,0.809,0.082]
TouchSensor1419 = x3d.TouchSensor()
TouchSensor1419.description = "HAnimSite r_thumb_distal_tip"

HAnimSite1418.children.append(TouchSensor1419)
Shape1420 = x3d.Shape()
Shape1420.USE = "HAnimSiteShape"

HAnimSite1418.children.append(Shape1420)

HAnimSegment1410.children.append(HAnimSite1418)

HAnimJoint1409.children.append(HAnimSegment1410)

HAnimJoint1400.children.append(HAnimJoint1409)

HAnimJoint1391.children.append(HAnimJoint1400)

HAnimJoint1333.children.append(HAnimJoint1391)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.DEF = "hanim_r_index0"
HAnimJoint1421.name = "r_index0"
HAnimJoint1421.center = [-0.1983,0.8024,-0.028]
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.DEF = "hanim_r_index_metacarpal"
HAnimSegment1422.name = "r_index_metacarpal"
TouchSensor1423 = x3d.TouchSensor()
TouchSensor1423.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal"

HAnimSegment1422.children.append(TouchSensor1423)
Transform1424 = x3d.Transform()
Transform1424.translation = [-0.1983,0.8024,-0.028]
Shape1425 = x3d.Shape()
Shape1425.USE = "HAnimJointShape"

Transform1424.children.append(Shape1425)

HAnimSegment1422.children.append(Transform1424)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.vertexCount = [2]
ColorRGBA1428 = x3d.ColorRGBA()
ColorRGBA1428.USE = "HAnimSegmentLineColorRGBA"

LineSet1427.color = ColorRGBA1428
Coordinate1429 = x3d.Coordinate()
Coordinate1429.point = [(-0.1983, 0.8024, -0.028),(-0.1983, 0.7815, -0.028)]

LineSet1427.coord = Coordinate1429

Shape1426.geometry = LineSet1427

HAnimSegment1422.children.append(Shape1426)

HAnimJoint1421.children.append(HAnimSegment1422)
HAnimJoint1430 = x3d.HAnimJoint()
HAnimJoint1430.DEF = "hanim_r_index1"
HAnimJoint1430.name = "r_index1"
HAnimJoint1430.center = [-0.1983,0.7815,-0.028]
HAnimSegment1431 = x3d.HAnimSegment()
HAnimSegment1431.DEF = "hanim_r_index_proximal"
HAnimSegment1431.name = "r_index_proximal"
TouchSensor1432 = x3d.TouchSensor()
TouchSensor1432.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal"

HAnimSegment1431.children.append(TouchSensor1432)
Transform1433 = x3d.Transform()
Transform1433.translation = [-0.1983,0.7815,-0.028]
Shape1434 = x3d.Shape()
Shape1434.USE = "HAnimJointShape"

Transform1433.children.append(Shape1434)

HAnimSegment1431.children.append(Transform1433)
Shape1435 = x3d.Shape()
LineSet1436 = x3d.LineSet()
LineSet1436.vertexCount = [2]
ColorRGBA1437 = x3d.ColorRGBA()
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA"

LineSet1436.color = ColorRGBA1437
Coordinate1438 = x3d.Coordinate()
Coordinate1438.point = [(-0.1983, 0.7815, -0.028),(-0.2017, 0.7363, -0.0248)]

LineSet1436.coord = Coordinate1438

Shape1435.geometry = LineSet1436

HAnimSegment1431.children.append(Shape1435)

HAnimJoint1430.children.append(HAnimSegment1431)
HAnimJoint1439 = x3d.HAnimJoint()
HAnimJoint1439.DEF = "hanim_r_index2"
HAnimJoint1439.name = "r_index2"
HAnimJoint1439.center = [-0.2017,0.7363,-0.0248]
HAnimSegment1440 = x3d.HAnimSegment()
HAnimSegment1440.DEF = "hanim_r_index_middle"
HAnimSegment1440.name = "r_index_middle"
TouchSensor1441 = x3d.TouchSensor()
TouchSensor1441.description = "HAnimJoint r_index2, HAnimSegment r_index_middle"

HAnimSegment1440.children.append(TouchSensor1441)
Transform1442 = x3d.Transform()
Transform1442.translation = [-0.2017,0.7363,-0.0248]
Shape1443 = x3d.Shape()
Shape1443.USE = "HAnimJointShape"

Transform1442.children.append(Shape1443)

HAnimSegment1440.children.append(Transform1442)
Shape1444 = x3d.Shape()
LineSet1445 = x3d.LineSet()
LineSet1445.vertexCount = [2]
ColorRGBA1446 = x3d.ColorRGBA()
ColorRGBA1446.USE = "HAnimSegmentLineColorRGBA"

LineSet1445.color = ColorRGBA1446
Coordinate1447 = x3d.Coordinate()
Coordinate1447.point = [(-0.2017, 0.7363, -0.0248),(-0.2028, 0.7139, -0.0236)]

LineSet1445.coord = Coordinate1447

Shape1444.geometry = LineSet1445

HAnimSegment1440.children.append(Shape1444)

HAnimJoint1439.children.append(HAnimSegment1440)
HAnimJoint1448 = x3d.HAnimJoint()
HAnimJoint1448.DEF = "hanim_r_index3"
HAnimJoint1448.name = "r_index3"
HAnimJoint1448.center = [-0.2028,0.7139,-0.0236]
HAnimSegment1449 = x3d.HAnimSegment()
HAnimSegment1449.DEF = "hanim_r_index_distal"
HAnimSegment1449.name = "r_index_distal"
TouchSensor1450 = x3d.TouchSensor()
TouchSensor1450.description = "HAnimJoint r_index3, HAnimSegment r_index_distal"

HAnimSegment1449.children.append(TouchSensor1450)
Transform1451 = x3d.Transform()
Transform1451.translation = [-0.2028,0.7139,-0.0236]
Shape1452 = x3d.Shape()
Shape1452.USE = "HAnimJointShape"

Transform1451.children.append(Shape1452)

HAnimSegment1449.children.append(Transform1451)
Shape1453 = x3d.Shape()
LineSet1454 = x3d.LineSet()
LineSet1454.vertexCount = [2]
ColorRGBA1455 = x3d.ColorRGBA()
ColorRGBA1455.USE = "HAnimSiteLineColorRGBA"

LineSet1454.color = ColorRGBA1455
Coordinate1456 = x3d.Coordinate()
Coordinate1456.point = [(-0.2028, 0.7139, -0.0236),(-0.198, 0.6883, -0.018)]

LineSet1454.coord = Coordinate1456

Shape1453.geometry = LineSet1454

HAnimSegment1449.children.append(Shape1453)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.vertexCount = [2]
ColorRGBA1459 = x3d.ColorRGBA()
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA"

LineSet1458.color = ColorRGBA1459
Coordinate1460 = x3d.Coordinate()
Coordinate1460.point = [(-0.2028, 0.7139, -0.0236),(-0.1941, 0.6772, -0.0423)]

LineSet1458.coord = Coordinate1460

Shape1457.geometry = LineSet1458

HAnimSegment1449.children.append(Shape1457)
HAnimSite1461 = x3d.HAnimSite()
HAnimSite1461.DEF = "hanim_r_index_distal_tip"
HAnimSite1461.name = "r_index_distal_tip"
HAnimSite1461.translation = [-0.198,0.6883,-0.018]
TouchSensor1462 = x3d.TouchSensor()
TouchSensor1462.description = "HAnimSite r_index_distal_tip"

HAnimSite1461.children.append(TouchSensor1462)
Shape1463 = x3d.Shape()
Shape1463.USE = "HAnimSiteShape"

HAnimSite1461.children.append(Shape1463)

HAnimSegment1449.children.append(HAnimSite1461)
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.DEF = "hanim_r_dactylion_pt"
HAnimSite1464.name = "r_dactylion_pt"
HAnimSite1464.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1465 = x3d.TouchSensor()
TouchSensor1465.description = "HAnimSite r_dactylion"

HAnimSite1464.children.append(TouchSensor1465)
Shape1466 = x3d.Shape()
Shape1466.USE = "HAnimSiteShape"

HAnimSite1464.children.append(Shape1466)

HAnimSegment1449.children.append(HAnimSite1464)

HAnimJoint1448.children.append(HAnimSegment1449)

HAnimJoint1439.children.append(HAnimJoint1448)

HAnimJoint1430.children.append(HAnimJoint1439)

HAnimJoint1421.children.append(HAnimJoint1430)

HAnimJoint1333.children.append(HAnimJoint1421)
HAnimJoint1467 = x3d.HAnimJoint()
HAnimJoint1467.DEF = "hanim_r_middle0"
HAnimJoint1467.name = "r_middle0"
HAnimJoint1467.center = [-0.1987,0.8029,-0.053]
HAnimSegment1468 = x3d.HAnimSegment()
HAnimSegment1468.DEF = "hanim_r_middle_metacarpal"
HAnimSegment1468.name = "r_middle_metacarpal"
TouchSensor1469 = x3d.TouchSensor()
TouchSensor1469.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"

HAnimSegment1468.children.append(TouchSensor1469)
Transform1470 = x3d.Transform()
Transform1470.translation = [-0.1987,0.8029,-0.053]
Shape1471 = x3d.Shape()
Shape1471.USE = "HAnimJointShape"

Transform1470.children.append(Shape1471)

HAnimSegment1468.children.append(Transform1470)
Shape1472 = x3d.Shape()
LineSet1473 = x3d.LineSet()
LineSet1473.vertexCount = [2]
ColorRGBA1474 = x3d.ColorRGBA()
ColorRGBA1474.USE = "HAnimSegmentLineColorRGBA"

LineSet1473.color = ColorRGBA1474
Coordinate1475 = x3d.Coordinate()
Coordinate1475.point = [(-0.1987, 0.8029, -0.053),(-0.1987, 0.7818, -0.053)]

LineSet1473.coord = Coordinate1475

Shape1472.geometry = LineSet1473

HAnimSegment1468.children.append(Shape1472)

HAnimJoint1467.children.append(HAnimSegment1468)
HAnimJoint1476 = x3d.HAnimJoint()
HAnimJoint1476.DEF = "hanim_r_middle1"
HAnimJoint1476.name = "r_middle1"
HAnimJoint1476.center = [-0.1987,0.7818,-0.053]
HAnimSegment1477 = x3d.HAnimSegment()
HAnimSegment1477.DEF = "hanim_r_middle_proximal"
HAnimSegment1477.name = "r_middle_proximal"
TouchSensor1478 = x3d.TouchSensor()
TouchSensor1478.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal"

HAnimSegment1477.children.append(TouchSensor1478)
Transform1479 = x3d.Transform()
Transform1479.translation = [-0.1987,0.7818,-0.053]
Shape1480 = x3d.Shape()
Shape1480.USE = "HAnimJointShape"

Transform1479.children.append(Shape1480)

HAnimSegment1477.children.append(Transform1479)
Shape1481 = x3d.Shape()
LineSet1482 = x3d.LineSet()
LineSet1482.vertexCount = [2]
ColorRGBA1483 = x3d.ColorRGBA()
ColorRGBA1483.USE = "HAnimSegmentLineColorRGBA"

LineSet1482.color = ColorRGBA1483
Coordinate1484 = x3d.Coordinate()
Coordinate1484.point = [(-0.1987, 0.7818, -0.053),(-0.2013, 0.7273, -0.0503)]

LineSet1482.coord = Coordinate1484

Shape1481.geometry = LineSet1482

HAnimSegment1477.children.append(Shape1481)

HAnimJoint1476.children.append(HAnimSegment1477)
HAnimJoint1485 = x3d.HAnimJoint()
HAnimJoint1485.DEF = "hanim_r_middle2"
HAnimJoint1485.name = "r_middle2"
HAnimJoint1485.center = [-0.2013,0.7273,-0.0503]
HAnimSegment1486 = x3d.HAnimSegment()
HAnimSegment1486.DEF = "hanim_r_middle_middle"
HAnimSegment1486.name = "r_middle_middle"
TouchSensor1487 = x3d.TouchSensor()
TouchSensor1487.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle"

HAnimSegment1486.children.append(TouchSensor1487)
Transform1488 = x3d.Transform()
Transform1488.translation = [-0.2013,0.7273,-0.0503]
Shape1489 = x3d.Shape()
Shape1489.USE = "HAnimJointShape"

Transform1488.children.append(Shape1489)

HAnimSegment1486.children.append(Transform1488)
Shape1490 = x3d.Shape()
LineSet1491 = x3d.LineSet()
LineSet1491.vertexCount = [2]
ColorRGBA1492 = x3d.ColorRGBA()
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA"

LineSet1491.color = ColorRGBA1492
Coordinate1493 = x3d.Coordinate()
Coordinate1493.point = [(-0.2013, 0.7273, -0.0503),(-0.2026, 0.7011, -0.0494)]

LineSet1491.coord = Coordinate1493

Shape1490.geometry = LineSet1491

HAnimSegment1486.children.append(Shape1490)

HAnimJoint1485.children.append(HAnimSegment1486)
HAnimJoint1494 = x3d.HAnimJoint()
HAnimJoint1494.DEF = "hanim_r_middle3"
HAnimJoint1494.name = "r_middle3"
HAnimJoint1494.center = [-0.2026,0.7011,-0.0494]
HAnimSegment1495 = x3d.HAnimSegment()
HAnimSegment1495.DEF = "hanim_r_middle_distal"
HAnimSegment1495.name = "r_middle_distal"
TouchSensor1496 = x3d.TouchSensor()
TouchSensor1496.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal"

HAnimSegment1495.children.append(TouchSensor1496)
Transform1497 = x3d.Transform()
Transform1497.translation = [-0.2026,0.7011,-0.0494]
Shape1498 = x3d.Shape()
Shape1498.USE = "HAnimJointShape"

Transform1497.children.append(Shape1498)

HAnimSegment1495.children.append(Transform1497)
Shape1499 = x3d.Shape()
LineSet1500 = x3d.LineSet()
LineSet1500.vertexCount = [2]
ColorRGBA1501 = x3d.ColorRGBA()
ColorRGBA1501.USE = "HAnimSiteLineColorRGBA"

LineSet1500.color = ColorRGBA1501
Coordinate1502 = x3d.Coordinate()
Coordinate1502.point = [(-0.2026, 0.7011, -0.0494),(-0.1969, 0.6758, -0.0427)]

LineSet1500.coord = Coordinate1502

Shape1499.geometry = LineSet1500

HAnimSegment1495.children.append(Shape1499)
HAnimSite1503 = x3d.HAnimSite()
HAnimSite1503.DEF = "hanim_r_middle_distal_tip"
HAnimSite1503.name = "r_middle_distal_tip"
HAnimSite1503.translation = [-0.1969,0.6758,-0.0427]
TouchSensor1504 = x3d.TouchSensor()
TouchSensor1504.description = "HAnimSite r_middle_distal_tip"

HAnimSite1503.children.append(TouchSensor1504)
Shape1505 = x3d.Shape()
Shape1505.USE = "HAnimSiteShape"

HAnimSite1503.children.append(Shape1505)

HAnimSegment1495.children.append(HAnimSite1503)

HAnimJoint1494.children.append(HAnimSegment1495)

HAnimJoint1485.children.append(HAnimJoint1494)

HAnimJoint1476.children.append(HAnimJoint1485)

HAnimJoint1467.children.append(HAnimJoint1476)

HAnimJoint1333.children.append(HAnimJoint1467)
HAnimJoint1506 = x3d.HAnimJoint()
HAnimJoint1506.DEF = "hanim_r_ring0"
HAnimJoint1506.name = "r_ring0"
HAnimJoint1506.center = [-0.1956,0.8019,-0.0794]
HAnimSegment1507 = x3d.HAnimSegment()
HAnimSegment1507.DEF = "hanim_r_ring_metacarpal"
HAnimSegment1507.name = "r_ring_metacarpal"
TouchSensor1508 = x3d.TouchSensor()
TouchSensor1508.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"

HAnimSegment1507.children.append(TouchSensor1508)
Transform1509 = x3d.Transform()
Transform1509.translation = [-0.1956,0.8019,-0.0794]
Shape1510 = x3d.Shape()
Shape1510.USE = "HAnimJointShape"

Transform1509.children.append(Shape1510)

HAnimSegment1507.children.append(Transform1509)
Shape1511 = x3d.Shape()
LineSet1512 = x3d.LineSet()
LineSet1512.vertexCount = [2]
ColorRGBA1513 = x3d.ColorRGBA()
ColorRGBA1513.USE = "HAnimSegmentLineColorRGBA"

LineSet1512.color = ColorRGBA1513
Coordinate1514 = x3d.Coordinate()
Coordinate1514.point = [(-0.1956, 0.8019, -0.0794),(-0.1956, 0.7815, -0.0794)]

LineSet1512.coord = Coordinate1514

Shape1511.geometry = LineSet1512

HAnimSegment1507.children.append(Shape1511)

HAnimJoint1506.children.append(HAnimSegment1507)
HAnimJoint1515 = x3d.HAnimJoint()
HAnimJoint1515.DEF = "hanim_r_ring1"
HAnimJoint1515.name = "r_ring1"
HAnimJoint1515.center = [-0.1956,0.7815,-0.0794]
HAnimSegment1516 = x3d.HAnimSegment()
HAnimSegment1516.DEF = "hanim_r_ring_proximal"
HAnimSegment1516.name = "r_ring_proximal"
TouchSensor1517 = x3d.TouchSensor()
TouchSensor1517.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal"

HAnimSegment1516.children.append(TouchSensor1517)
Transform1518 = x3d.Transform()
Transform1518.translation = [-0.1956,0.7815,-0.0794]
Shape1519 = x3d.Shape()
Shape1519.USE = "HAnimJointShape"

Transform1518.children.append(Shape1519)

HAnimSegment1516.children.append(Transform1518)
Shape1520 = x3d.Shape()
LineSet1521 = x3d.LineSet()
LineSet1521.vertexCount = [2]
ColorRGBA1522 = x3d.ColorRGBA()
ColorRGBA1522.USE = "HAnimSegmentLineColorRGBA"

LineSet1521.color = ColorRGBA1522
Coordinate1523 = x3d.Coordinate()
Coordinate1523.point = [(-0.1956, 0.7815, -0.0794),(-0.1973, 0.7287, -0.0777)]

LineSet1521.coord = Coordinate1523

Shape1520.geometry = LineSet1521

HAnimSegment1516.children.append(Shape1520)

HAnimJoint1515.children.append(HAnimSegment1516)
HAnimJoint1524 = x3d.HAnimJoint()
HAnimJoint1524.DEF = "hanim_r_ring2"
HAnimJoint1524.name = "r_ring2"
HAnimJoint1524.center = [-0.1973,0.7287,-0.0777]
HAnimSegment1525 = x3d.HAnimSegment()
HAnimSegment1525.DEF = "hanim_r_ring_middle"
HAnimSegment1525.name = "r_ring_middle"
TouchSensor1526 = x3d.TouchSensor()
TouchSensor1526.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle"

HAnimSegment1525.children.append(TouchSensor1526)
Transform1527 = x3d.Transform()
Transform1527.translation = [-0.1973,0.7287,-0.0777]
Shape1528 = x3d.Shape()
Shape1528.USE = "HAnimJointShape"

Transform1527.children.append(Shape1528)

HAnimSegment1525.children.append(Transform1527)
Shape1529 = x3d.Shape()
LineSet1530 = x3d.LineSet()
LineSet1530.vertexCount = [2]
ColorRGBA1531 = x3d.ColorRGBA()
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA"

LineSet1530.color = ColorRGBA1531
Coordinate1532 = x3d.Coordinate()
Coordinate1532.point = [(-0.1973, 0.7287, -0.0777),(-0.1983, 0.7045, -0.0767)]

LineSet1530.coord = Coordinate1532

Shape1529.geometry = LineSet1530

HAnimSegment1525.children.append(Shape1529)

HAnimJoint1524.children.append(HAnimSegment1525)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.DEF = "hanim_r_ring3"
HAnimJoint1533.name = "r_ring3"
HAnimJoint1533.center = [-0.1983,0.7045,-0.0767]
HAnimSegment1534 = x3d.HAnimSegment()
HAnimSegment1534.DEF = "hanim_r_ring_distal"
HAnimSegment1534.name = "r_ring_distal"
TouchSensor1535 = x3d.TouchSensor()
TouchSensor1535.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal"

HAnimSegment1534.children.append(TouchSensor1535)
Transform1536 = x3d.Transform()
Transform1536.translation = [-0.1983,0.7045,-0.0767]
Shape1537 = x3d.Shape()
Shape1537.USE = "HAnimJointShape"

Transform1536.children.append(Shape1537)

HAnimSegment1534.children.append(Transform1536)
Shape1538 = x3d.Shape()
LineSet1539 = x3d.LineSet()
LineSet1539.vertexCount = [2]
ColorRGBA1540 = x3d.ColorRGBA()
ColorRGBA1540.USE = "HAnimSiteLineColorRGBA"

LineSet1539.color = ColorRGBA1540
Coordinate1541 = x3d.Coordinate()
Coordinate1541.point = [(-0.1983, 0.7045, -0.0767),(-0.1934, 0.6778, -0.0693)]

LineSet1539.coord = Coordinate1541

Shape1538.geometry = LineSet1539

HAnimSegment1534.children.append(Shape1538)
HAnimSite1542 = x3d.HAnimSite()
HAnimSite1542.DEF = "hanim_r_ring_distal_tip"
HAnimSite1542.name = "r_ring_distal_tip"
HAnimSite1542.translation = [-0.1934,0.6778,-0.0693]
TouchSensor1543 = x3d.TouchSensor()
TouchSensor1543.description = "HAnimSite r_ring_distal_tip"

HAnimSite1542.children.append(TouchSensor1543)
Shape1544 = x3d.Shape()
Shape1544.USE = "HAnimSiteShape"

HAnimSite1542.children.append(Shape1544)

HAnimSegment1534.children.append(HAnimSite1542)

HAnimJoint1533.children.append(HAnimSegment1534)

HAnimJoint1524.children.append(HAnimJoint1533)

HAnimJoint1515.children.append(HAnimJoint1524)

HAnimJoint1506.children.append(HAnimJoint1515)

HAnimJoint1333.children.append(HAnimJoint1506)
HAnimJoint1545 = x3d.HAnimJoint()
HAnimJoint1545.DEF = "hanim_r_pinky0"
HAnimJoint1545.name = "r_pinky0"
HAnimJoint1545.center = [-0.1925,0.8066,-0.1036]
HAnimSegment1546 = x3d.HAnimSegment()
HAnimSegment1546.DEF = "hanim_r_pinky_metacarpal"
HAnimSegment1546.name = "r_pinky_metacarpal"
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"

HAnimSegment1546.children.append(TouchSensor1547)
Transform1548 = x3d.Transform()
Transform1548.translation = [-0.1925,0.8066,-0.1036]
Shape1549 = x3d.Shape()
Shape1549.USE = "HAnimJointShape"

Transform1548.children.append(Shape1549)

HAnimSegment1546.children.append(Transform1548)
Shape1550 = x3d.Shape()
LineSet1551 = x3d.LineSet()
LineSet1551.vertexCount = [2]
ColorRGBA1552 = x3d.ColorRGBA()
ColorRGBA1552.USE = "HAnimSegmentLineColorRGBA"

LineSet1551.color = ColorRGBA1552
Coordinate1553 = x3d.Coordinate()
Coordinate1553.point = [(-0.1925, 0.8066, -0.1036),(-0.1925, 0.7866, -0.1036)]

LineSet1551.coord = Coordinate1553

Shape1550.geometry = LineSet1551

HAnimSegment1546.children.append(Shape1550)

HAnimJoint1545.children.append(HAnimSegment1546)
HAnimJoint1554 = x3d.HAnimJoint()
HAnimJoint1554.DEF = "hanim_r_pinky1"
HAnimJoint1554.name = "r_pinky1"
HAnimJoint1554.center = [-0.1925,0.7866,-0.1036]
HAnimSegment1555 = x3d.HAnimSegment()
HAnimSegment1555.DEF = "hanim_r_pinky_proximal"
HAnimSegment1555.name = "r_pinky_proximal"
TouchSensor1556 = x3d.TouchSensor()
TouchSensor1556.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"

HAnimSegment1555.children.append(TouchSensor1556)
Transform1557 = x3d.Transform()
Transform1557.translation = [-0.1925,0.7866,-0.1036]
Shape1558 = x3d.Shape()
Shape1558.USE = "HAnimJointShape"

Transform1557.children.append(Shape1558)

HAnimSegment1555.children.append(Transform1557)
Shape1559 = x3d.Shape()
LineSet1560 = x3d.LineSet()
LineSet1560.vertexCount = [2]
ColorRGBA1561 = x3d.ColorRGBA()
ColorRGBA1561.USE = "HAnimSegmentLineColorRGBA"

LineSet1560.color = ColorRGBA1561
Coordinate1562 = x3d.Coordinate()
Coordinate1562.point = [(-0.1925, 0.7866, -0.1036),(-0.1938, 0.7452, -0.1024)]

LineSet1560.coord = Coordinate1562

Shape1559.geometry = LineSet1560

HAnimSegment1555.children.append(Shape1559)

HAnimJoint1554.children.append(HAnimSegment1555)
HAnimJoint1563 = x3d.HAnimJoint()
HAnimJoint1563.DEF = "hanim_r_pinky2"
HAnimJoint1563.name = "r_pinky2"
HAnimJoint1563.center = [-0.1938,0.7452,-0.1024]
HAnimSegment1564 = x3d.HAnimSegment()
HAnimSegment1564.DEF = "hanim_r_pinky_middle"
HAnimSegment1564.name = "r_pinky_middle"
TouchSensor1565 = x3d.TouchSensor()
TouchSensor1565.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"

HAnimSegment1564.children.append(TouchSensor1565)
Transform1566 = x3d.Transform()
Transform1566.translation = [-0.1938,0.7452,-0.1024]
Shape1567 = x3d.Shape()
Shape1567.USE = "HAnimJointShape"

Transform1566.children.append(Shape1567)

HAnimSegment1564.children.append(Transform1566)
Shape1568 = x3d.Shape()
LineSet1569 = x3d.LineSet()
LineSet1569.vertexCount = [2]
ColorRGBA1570 = x3d.ColorRGBA()
ColorRGBA1570.USE = "HAnimSegmentLineColorRGBA"

LineSet1569.color = ColorRGBA1570
Coordinate1571 = x3d.Coordinate()
Coordinate1571.point = [(-0.1938, 0.7452, -0.1024),(-0.1948, 0.7277, -0.1017)]

LineSet1569.coord = Coordinate1571

Shape1568.geometry = LineSet1569

HAnimSegment1564.children.append(Shape1568)

HAnimJoint1563.children.append(HAnimSegment1564)
HAnimJoint1572 = x3d.HAnimJoint()
HAnimJoint1572.DEF = "hanim_r_pinky3"
HAnimJoint1572.name = "r_pinky3"
HAnimJoint1572.center = [-0.1948,0.7277,-0.1017]
HAnimSegment1573 = x3d.HAnimSegment()
HAnimSegment1573.DEF = "hanim_r_pinky_distal"
HAnimSegment1573.name = "r_pinky_distal"
TouchSensor1574 = x3d.TouchSensor()
TouchSensor1574.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"

HAnimSegment1573.children.append(TouchSensor1574)
Transform1575 = x3d.Transform()
Transform1575.translation = [-0.1948,0.7277,-0.1017]
Shape1576 = x3d.Shape()
Shape1576.USE = "HAnimJointShape"

Transform1575.children.append(Shape1576)

HAnimSegment1573.children.append(Transform1575)
Shape1577 = x3d.Shape()
LineSet1578 = x3d.LineSet()
LineSet1578.vertexCount = [2]
ColorRGBA1579 = x3d.ColorRGBA()
ColorRGBA1579.USE = "HAnimSiteLineColorRGBA"

LineSet1578.color = ColorRGBA1579
Coordinate1580 = x3d.Coordinate()
Coordinate1580.point = [(-0.1948, 0.7277, -0.1017),(-0.1938, 0.7035, -0.0949)]

LineSet1578.coord = Coordinate1580

Shape1577.geometry = LineSet1578

HAnimSegment1573.children.append(Shape1577)
HAnimSite1581 = x3d.HAnimSite()
HAnimSite1581.DEF = "hanim_r_pinky_distal_tip"
HAnimSite1581.name = "r_pinky_distal_tip"
HAnimSite1581.translation = [-0.1938,0.7035,-0.0949]
TouchSensor1582 = x3d.TouchSensor()
TouchSensor1582.description = "HAnimSite r_pinky_distal_tip"

HAnimSite1581.children.append(TouchSensor1582)
Shape1583 = x3d.Shape()
Shape1583.USE = "HAnimSiteShape"

HAnimSite1581.children.append(Shape1583)

HAnimSegment1573.children.append(HAnimSite1581)

HAnimJoint1572.children.append(HAnimSegment1573)

HAnimJoint1563.children.append(HAnimJoint1572)

HAnimJoint1554.children.append(HAnimJoint1563)

HAnimJoint1545.children.append(HAnimJoint1554)

HAnimJoint1333.children.append(HAnimJoint1545)

HAnimJoint1296.children.append(HAnimJoint1333)

HAnimJoint1280.children.append(HAnimJoint1296)

HAnimJoint1271.children.append(HAnimJoint1280)

HAnimJoint1234.children.append(HAnimJoint1271)

HAnimJoint596.children.append(HAnimJoint1234)

HAnimJoint587.children.append(HAnimJoint596)

HAnimJoint578.children.append(HAnimJoint587)

HAnimJoint569.children.append(HAnimJoint578)

HAnimJoint560.children.append(HAnimJoint569)

HAnimJoint551.children.append(HAnimJoint560)

HAnimJoint542.children.append(HAnimJoint551)

HAnimJoint533.children.append(HAnimJoint542)

HAnimJoint510.children.append(HAnimJoint533)

HAnimJoint494.children.append(HAnimJoint510)

HAnimJoint485.children.append(HAnimJoint494)

HAnimJoint476.children.append(HAnimJoint485)

HAnimJoint467.children.append(HAnimJoint476)

HAnimJoint437.children.append(HAnimJoint467)

HAnimJoint428.children.append(HAnimJoint437)

HAnimJoint419.children.append(HAnimJoint428)

HAnimJoint396.children.append(HAnimJoint419)

HAnimJoint46.children.append(HAnimJoint396)

HAnimHumanoid45.skeleton.append(HAnimJoint46)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.USE = "hanim_humanoid_root"

HAnimHumanoid45.joints.append(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.USE = "hanim_sacroiliac"

HAnimHumanoid45.joints.append(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.USE = "hanim_vl5"

HAnimHumanoid45.joints.append(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.USE = "hanim_vl4"

HAnimHumanoid45.joints.append(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.USE = "hanim_vl3"

HAnimHumanoid45.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.USE = "hanim_vl2"

HAnimHumanoid45.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.USE = "hanim_vl1"

HAnimHumanoid45.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.USE = "hanim_vt12"

HAnimHumanoid45.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.USE = "hanim_vt11"

HAnimHumanoid45.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.USE = "hanim_vt10"

HAnimHumanoid45.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.USE = "hanim_vt9"

HAnimHumanoid45.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.USE = "hanim_vt8"

HAnimHumanoid45.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.USE = "hanim_vt7"

HAnimHumanoid45.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.USE = "hanim_vt6"

HAnimHumanoid45.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.USE = "hanim_vt5"

HAnimHumanoid45.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.USE = "hanim_vt4"

HAnimHumanoid45.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.USE = "hanim_vt3"

HAnimHumanoid45.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_vt2"

HAnimHumanoid45.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_vt1"

HAnimHumanoid45.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_vc7"

HAnimHumanoid45.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_vc6"

HAnimHumanoid45.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_vc5"

HAnimHumanoid45.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_vc4"

HAnimHumanoid45.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_vc3"

HAnimHumanoid45.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_vc2"

HAnimHumanoid45.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_vc1"

HAnimHumanoid45.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_skullbase"

HAnimHumanoid45.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_temporomandibular"

HAnimHumanoid45.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_l_acromioclavicular"

HAnimHumanoid45.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_r_acromioclavicular"

HAnimHumanoid45.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_l_ankle"

HAnimHumanoid45.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_r_ankle"

HAnimHumanoid45.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_l_elbow"

HAnimHumanoid45.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_r_elbow"

HAnimHumanoid45.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_l_eyeball_joint"

HAnimHumanoid45.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_r_eyeball_joint"

HAnimHumanoid45.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid45.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid45.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_l_eyelid_joint"

HAnimHumanoid45.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_r_eyelid_joint"

HAnimHumanoid45.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_l_hip"

HAnimHumanoid45.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_r_hip"

HAnimHumanoid45.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_l_index0"

HAnimHumanoid45.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_r_index0"

HAnimHumanoid45.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_l_index1"

HAnimHumanoid45.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_r_index1"

HAnimHumanoid45.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_l_index2"

HAnimHumanoid45.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_r_index2"

HAnimHumanoid45.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_l_index3"

HAnimHumanoid45.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_r_index3"

HAnimHumanoid45.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_l_knee"

HAnimHumanoid45.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_r_knee"

HAnimHumanoid45.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_l_metatarsal"

HAnimHumanoid45.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.USE = "hanim_r_metatarsal"

HAnimHumanoid45.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.USE = "hanim_l_middle0"

HAnimHumanoid45.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.USE = "hanim_r_middle0"

HAnimHumanoid45.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.USE = "hanim_l_middle1"

HAnimHumanoid45.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.USE = "hanim_r_middle1"

HAnimHumanoid45.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.USE = "hanim_l_middle2"

HAnimHumanoid45.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.USE = "hanim_r_middle2"

HAnimHumanoid45.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.USE = "hanim_l_middle3"

HAnimHumanoid45.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.USE = "hanim_r_middle3"

HAnimHumanoid45.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.USE = "hanim_l_midtarsal"

HAnimHumanoid45.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.USE = "hanim_r_midtarsal"

HAnimHumanoid45.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.USE = "hanim_l_pinky0"

HAnimHumanoid45.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.USE = "hanim_r_pinky0"

HAnimHumanoid45.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.USE = "hanim_l_pinky1"

HAnimHumanoid45.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.USE = "hanim_r_pinky1"

HAnimHumanoid45.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.USE = "hanim_l_pinky2"

HAnimHumanoid45.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.USE = "hanim_r_pinky2"

HAnimHumanoid45.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.USE = "hanim_l_pinky3"

HAnimHumanoid45.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.USE = "hanim_r_pinky3"

HAnimHumanoid45.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.USE = "hanim_l_ring0"

HAnimHumanoid45.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.USE = "hanim_r_ring0"

HAnimHumanoid45.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.USE = "hanim_l_ring1"

HAnimHumanoid45.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.USE = "hanim_r_ring1"

HAnimHumanoid45.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.USE = "hanim_l_ring2"

HAnimHumanoid45.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.USE = "hanim_r_ring2"

HAnimHumanoid45.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.USE = "hanim_l_ring3"

HAnimHumanoid45.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.USE = "hanim_r_ring3"

HAnimHumanoid45.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.USE = "hanim_l_shoulder"

HAnimHumanoid45.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.USE = "hanim_r_shoulder"

HAnimHumanoid45.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.USE = "hanim_l_sternoclavicular"

HAnimHumanoid45.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.USE = "hanim_r_sternoclavicular"

HAnimHumanoid45.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.USE = "hanim_l_subtalar"

HAnimHumanoid45.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.USE = "hanim_r_subtalar"

HAnimHumanoid45.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.USE = "hanim_l_thumb1"

HAnimHumanoid45.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.USE = "hanim_r_thumb1"

HAnimHumanoid45.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.USE = "hanim_l_thumb2"

HAnimHumanoid45.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.USE = "hanim_r_thumb2"

HAnimHumanoid45.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.USE = "hanim_l_thumb3"

HAnimHumanoid45.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.USE = "hanim_r_thumb3"

HAnimHumanoid45.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.USE = "hanim_l_wrist"

HAnimHumanoid45.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.USE = "hanim_r_wrist"

HAnimHumanoid45.joints.append(HAnimJoint1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.USE = "hanim_pelvis"

HAnimHumanoid45.segments.append(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.USE = "hanim_skull"

HAnimHumanoid45.segments.append(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.USE = "hanim_jaw"

HAnimHumanoid45.segments.append(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.USE = "hanim_c1"

HAnimHumanoid45.segments.append(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.USE = "hanim_c2"

HAnimHumanoid45.segments.append(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.USE = "hanim_c3"

HAnimHumanoid45.segments.append(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.USE = "hanim_c4"

HAnimHumanoid45.segments.append(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.USE = "hanim_c5"

HAnimHumanoid45.segments.append(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.USE = "hanim_c6"

HAnimHumanoid45.segments.append(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.USE = "hanim_c7"

HAnimHumanoid45.segments.append(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.USE = "hanim_t1"

HAnimHumanoid45.segments.append(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.USE = "hanim_t2"

HAnimHumanoid45.segments.append(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.USE = "hanim_t3"

HAnimHumanoid45.segments.append(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.USE = "hanim_t4"

HAnimHumanoid45.segments.append(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.USE = "hanim_t5"

HAnimHumanoid45.segments.append(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.USE = "hanim_t6"

HAnimHumanoid45.segments.append(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.USE = "hanim_t7"

HAnimHumanoid45.segments.append(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.USE = "hanim_t8"

HAnimHumanoid45.segments.append(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.USE = "hanim_t9"

HAnimHumanoid45.segments.append(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.USE = "hanim_t10"

HAnimHumanoid45.segments.append(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.USE = "hanim_t11"

HAnimHumanoid45.segments.append(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.USE = "hanim_t12"

HAnimHumanoid45.segments.append(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.USE = "hanim_l1"

HAnimHumanoid45.segments.append(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.USE = "hanim_l2"

HAnimHumanoid45.segments.append(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.USE = "hanim_l3"

HAnimHumanoid45.segments.append(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.USE = "hanim_l4"

HAnimHumanoid45.segments.append(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.USE = "hanim_l5"

HAnimHumanoid45.segments.append(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.USE = "hanim_sacrum"

HAnimHumanoid45.segments.append(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.USE = "hanim_l_calf"

HAnimHumanoid45.segments.append(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.USE = "hanim_r_calf"

HAnimHumanoid45.segments.append(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.USE = "hanim_l_clavicle"

HAnimHumanoid45.segments.append(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.USE = "hanim_r_clavicle"

HAnimHumanoid45.segments.append(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.USE = "hanim_l_eyeball"

HAnimHumanoid45.segments.append(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.USE = "hanim_r_eyeball"

HAnimHumanoid45.segments.append(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.USE = "hanim_l_eyebrow"

HAnimHumanoid45.segments.append(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.USE = "hanim_r_eyebrow"

HAnimHumanoid45.segments.append(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.USE = "hanim_l_eyelid"

HAnimHumanoid45.segments.append(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.USE = "hanim_r_eyelid"

HAnimHumanoid45.segments.append(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.USE = "hanim_l_forearm"

HAnimHumanoid45.segments.append(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.USE = "hanim_r_forearm"

HAnimHumanoid45.segments.append(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.USE = "hanim_l_forefoot"

HAnimHumanoid45.segments.append(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.USE = "hanim_r_forefoot"

HAnimHumanoid45.segments.append(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.USE = "hanim_l_hand"

HAnimHumanoid45.segments.append(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.USE = "hanim_r_hand"

HAnimHumanoid45.segments.append(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.USE = "hanim_l_hindfoot"

HAnimHumanoid45.segments.append(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.USE = "hanim_r_hindfoot"

HAnimHumanoid45.segments.append(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.USE = "hanim_l_index_distal"

HAnimHumanoid45.segments.append(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.USE = "hanim_r_index_distal"

HAnimHumanoid45.segments.append(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.USE = "hanim_l_index_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.USE = "hanim_r_index_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.USE = "hanim_l_index_middle"

HAnimHumanoid45.segments.append(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.USE = "hanim_r_index_middle"

HAnimHumanoid45.segments.append(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.USE = "hanim_l_index_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.USE = "hanim_r_index_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.USE = "hanim_l_middistal"

HAnimHumanoid45.segments.append(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.USE = "hanim_r_middistal"

HAnimHumanoid45.segments.append(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.USE = "hanim_l_middle_distal"

HAnimHumanoid45.segments.append(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.USE = "hanim_r_middle_distal"

HAnimHumanoid45.segments.append(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.USE = "hanim_l_middle_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.USE = "hanim_r_middle_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.USE = "hanim_l_middle_middle"

HAnimHumanoid45.segments.append(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.USE = "hanim_r_middle_middle"

HAnimHumanoid45.segments.append(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.USE = "hanim_l_middle_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.USE = "hanim_r_middle_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.USE = "hanim_l_midproximal"

HAnimHumanoid45.segments.append(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.USE = "hanim_r_midproximal"

HAnimHumanoid45.segments.append(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.USE = "hanim_l_pinky_distal"

HAnimHumanoid45.segments.append(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.USE = "hanim_r_pinky_distal"

HAnimHumanoid45.segments.append(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.USE = "hanim_l_pinky_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.USE = "hanim_r_pinky_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.USE = "hanim_l_pinky_middle"

HAnimHumanoid45.segments.append(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.USE = "hanim_r_pinky_middle"

HAnimHumanoid45.segments.append(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.USE = "hanim_l_pinky_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.USE = "hanim_r_pinky_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.USE = "hanim_l_ring_distal"

HAnimHumanoid45.segments.append(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.USE = "hanim_r_ring_distal"

HAnimHumanoid45.segments.append(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.USE = "hanim_l_ring_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.USE = "hanim_r_ring_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.USE = "hanim_l_ring_middle"

HAnimHumanoid45.segments.append(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_r_ring_middle"

HAnimHumanoid45.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_l_ring_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_r_ring_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_l_scapula"

HAnimHumanoid45.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_r_scapula"

HAnimHumanoid45.segments.append(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.USE = "hanim_l_thigh"

HAnimHumanoid45.segments.append(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.USE = "hanim_r_thigh"

HAnimHumanoid45.segments.append(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.USE = "hanim_l_thumb_distal"

HAnimHumanoid45.segments.append(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.USE = "hanim_r_thumb_distal"

HAnimHumanoid45.segments.append(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.USE = "hanim_l_thumb_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.USE = "hanim_r_thumb_metacarpal"

HAnimHumanoid45.segments.append(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.USE = "hanim_l_thumb_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.USE = "hanim_r_thumb_proximal"

HAnimHumanoid45.segments.append(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.USE = "hanim_l_upperarm"

HAnimHumanoid45.segments.append(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.USE = "hanim_r_upperarm"

HAnimHumanoid45.segments.append(HAnimSegment1771)
HAnimSite1772 = x3d.HAnimSite()
HAnimSite1772.USE = "hanim_crotch_pt"

HAnimHumanoid45.sites.append(HAnimSite1772)
HAnimSite1773 = x3d.HAnimSite()
HAnimSite1773.USE = "hanim_skull_tip"

HAnimHumanoid45.sites.append(HAnimSite1773)
HAnimSite1774 = x3d.HAnimSite()
HAnimSite1774.USE = "hanim_sellion_pt"

HAnimHumanoid45.sites.append(HAnimSite1774)
HAnimSite1775 = x3d.HAnimSite()
HAnimSite1775.USE = "hanim_supramenton_pt"

HAnimHumanoid45.sites.append(HAnimSite1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.USE = "hanim_nuchale_pt"

HAnimHumanoid45.sites.append(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.USE = "hanim_suprasternale_pt"

HAnimHumanoid45.sites.append(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.USE = "hanim_cervicale_pt"

HAnimHumanoid45.sites.append(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.USE = "hanim_substernale_pt"

HAnimHumanoid45.sites.append(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.USE = "hanim_rib10_midspine_pt"

HAnimHumanoid45.sites.append(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.USE = "hanim_waist_preferred_post_pt"

HAnimHumanoid45.sites.append(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.USE = "hanim_navel_pt"

HAnimHumanoid45.sites.append(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.USE = "hanim_l_acromion_pt"

HAnimHumanoid45.sites.append(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.USE = "hanim_r_acromion_pt"

HAnimHumanoid45.sites.append(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.USE = "hanim_r_asis_pt"

HAnimHumanoid45.sites.append(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.USE = "hanim_l_asis_pt"

HAnimHumanoid45.sites.append(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.USE = "hanim_l_axilla_ant_pt"

HAnimHumanoid45.sites.append(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.USE = "hanim_r_axilla_ant_pt"

HAnimHumanoid45.sites.append(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.USE = "hanim_l_axilla_post_pt"

HAnimHumanoid45.sites.append(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.USE = "hanim_r_axilla_post_pt"

HAnimHumanoid45.sites.append(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.USE = "hanim_l_calcaneous_post_pt"

HAnimHumanoid45.sites.append(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.USE = "hanim_r_calcaneous_post_pt"

HAnimHumanoid45.sites.append(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.USE = "hanim_l_clavicale_pt"

HAnimHumanoid45.sites.append(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.USE = "hanim_r_clavicale_pt"

HAnimHumanoid45.sites.append(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.USE = "hanim_l_dactylion_pt"

HAnimHumanoid45.sites.append(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.USE = "hanim_r_dactylion_pt"

HAnimHumanoid45.sites.append(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.USE = "hanim_l_digit2_pt"

HAnimHumanoid45.sites.append(HAnimSite1797)
HAnimSite1798 = x3d.HAnimSite()
HAnimSite1798.USE = "hanim_r_digit2_pt"

HAnimHumanoid45.sites.append(HAnimSite1798)
HAnimSite1799 = x3d.HAnimSite()
HAnimSite1799.USE = "hanim_l_femoral_lateral_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1799)
HAnimSite1800 = x3d.HAnimSite()
HAnimSite1800.USE = "hanim_r_femoral_lateral_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1800)
HAnimSite1801 = x3d.HAnimSite()
HAnimSite1801.USE = "hanim_l_femoral_medial_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1801)
HAnimSite1802 = x3d.HAnimSite()
HAnimSite1802.USE = "hanim_r_femoral_medial_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1802)
HAnimSite1803 = x3d.HAnimSite()
HAnimSite1803.USE = "hanim_l_forefoot_tip"

HAnimHumanoid45.sites.append(HAnimSite1803)
HAnimSite1804 = x3d.HAnimSite()
HAnimSite1804.USE = "hanim_r_forefoot_tip"

HAnimHumanoid45.sites.append(HAnimSite1804)
HAnimSite1805 = x3d.HAnimSite()
HAnimSite1805.USE = "hanim_r_gonion_pt"

HAnimHumanoid45.sites.append(HAnimSite1805)
HAnimSite1806 = x3d.HAnimSite()
HAnimSite1806.USE = "hanim_l_gonion_pt"

HAnimHumanoid45.sites.append(HAnimSite1806)
HAnimSite1807 = x3d.HAnimSite()
HAnimSite1807.USE = "hanim_l_humeral_lateral_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1807)
HAnimSite1808 = x3d.HAnimSite()
HAnimSite1808.USE = "hanim_r_humeral_lateral_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1808)
HAnimSite1809 = x3d.HAnimSite()
HAnimSite1809.USE = "hanim_l_humeral_medial_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1809)
HAnimSite1810 = x3d.HAnimSite()
HAnimSite1810.USE = "hanim_r_humeral_medial_epicn_pt"

HAnimHumanoid45.sites.append(HAnimSite1810)
HAnimSite1811 = x3d.HAnimSite()
HAnimSite1811.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid45.sites.append(HAnimSite1811)
HAnimSite1812 = x3d.HAnimSite()
HAnimSite1812.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid45.sites.append(HAnimSite1812)
HAnimSite1813 = x3d.HAnimSite()
HAnimSite1813.USE = "hanim_l_index_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1813)
HAnimSite1814 = x3d.HAnimSite()
HAnimSite1814.USE = "hanim_r_index_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1814)
HAnimSite1815 = x3d.HAnimSite()
HAnimSite1815.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid45.sites.append(HAnimSite1815)
HAnimSite1816 = x3d.HAnimSite()
HAnimSite1816.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid45.sites.append(HAnimSite1816)
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid45.sites.append(HAnimSite1817)
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid45.sites.append(HAnimSite1818)
HAnimSite1819 = x3d.HAnimSite()
HAnimSite1819.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid45.sites.append(HAnimSite1819)
HAnimSite1820 = x3d.HAnimSite()
HAnimSite1820.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid45.sites.append(HAnimSite1820)
HAnimSite1821 = x3d.HAnimSite()
HAnimSite1821.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid45.sites.append(HAnimSite1821)
HAnimSite1822 = x3d.HAnimSite()
HAnimSite1822.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid45.sites.append(HAnimSite1822)
HAnimSite1823 = x3d.HAnimSite()
HAnimSite1823.USE = "hanim_l_metacarpal_pha2_pt"

HAnimHumanoid45.sites.append(HAnimSite1823)
HAnimSite1824 = x3d.HAnimSite()
HAnimSite1824.USE = "hanim_r_metacarpal_pha2_pt"

HAnimHumanoid45.sites.append(HAnimSite1824)
HAnimSite1825 = x3d.HAnimSite()
HAnimSite1825.USE = "hanim_l_metacarpal_pha5_pt"

HAnimHumanoid45.sites.append(HAnimSite1825)
HAnimSite1826 = x3d.HAnimSite()
HAnimSite1826.USE = "hanim_r_metacarpal_pha5_pt"

HAnimHumanoid45.sites.append(HAnimSite1826)
HAnimSite1827 = x3d.HAnimSite()
HAnimSite1827.USE = "hanim_l_metatarsal_pha1_pt"

HAnimHumanoid45.sites.append(HAnimSite1827)
HAnimSite1828 = x3d.HAnimSite()
HAnimSite1828.USE = "hanim_r_metatarsal_pha1_pt"

HAnimHumanoid45.sites.append(HAnimSite1828)
HAnimSite1829 = x3d.HAnimSite()
HAnimSite1829.USE = "hanim_l_metatarsal_pha5_pt"

HAnimHumanoid45.sites.append(HAnimSite1829)
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.USE = "hanim_r_metatarsal_pha5_pt"

HAnimHumanoid45.sites.append(HAnimSite1830)
HAnimSite1831 = x3d.HAnimSite()
HAnimSite1831.USE = "hanim_l_middle_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1831)
HAnimSite1832 = x3d.HAnimSite()
HAnimSite1832.USE = "hanim_r_middle_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1832)
HAnimSite1833 = x3d.HAnimSite()
HAnimSite1833.USE = "hanim_r_neck_base_pt"

HAnimHumanoid45.sites.append(HAnimSite1833)
HAnimSite1834 = x3d.HAnimSite()
HAnimSite1834.USE = "hanim_l_neck_base_pt"

HAnimHumanoid45.sites.append(HAnimSite1834)
HAnimSite1835 = x3d.HAnimSite()
HAnimSite1835.USE = "hanim_l_olecranon_pt"

HAnimHumanoid45.sites.append(HAnimSite1835)
HAnimSite1836 = x3d.HAnimSite()
HAnimSite1836.USE = "hanim_r_olecranon_pt"

HAnimHumanoid45.sites.append(HAnimSite1836)
HAnimSite1837 = x3d.HAnimSite()
HAnimSite1837.USE = "hanim_l_pinky_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1837)
HAnimSite1838 = x3d.HAnimSite()
HAnimSite1838.USE = "hanim_r_pinky_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1838)
HAnimSite1839 = x3d.HAnimSite()
HAnimSite1839.USE = "hanim_r_psis_pt"

HAnimHumanoid45.sites.append(HAnimSite1839)
HAnimSite1840 = x3d.HAnimSite()
HAnimSite1840.USE = "hanim_l_psis_pt"

HAnimHumanoid45.sites.append(HAnimSite1840)
HAnimSite1841 = x3d.HAnimSite()
HAnimSite1841.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid45.sites.append(HAnimSite1841)
HAnimSite1842 = x3d.HAnimSite()
HAnimSite1842.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid45.sites.append(HAnimSite1842)
HAnimSite1843 = x3d.HAnimSite()
HAnimSite1843.USE = "hanim_l_radiale_pt"

HAnimHumanoid45.sites.append(HAnimSite1843)
HAnimSite1844 = x3d.HAnimSite()
HAnimSite1844.USE = "hanim_r_radiale_pt"

HAnimHumanoid45.sites.append(HAnimSite1844)
HAnimSite1845 = x3d.HAnimSite()
HAnimSite1845.USE = "hanim_r_rib10_pt"

HAnimHumanoid45.sites.append(HAnimSite1845)
HAnimSite1846 = x3d.HAnimSite()
HAnimSite1846.USE = "hanim_l_rib10_pt"

HAnimHumanoid45.sites.append(HAnimSite1846)
HAnimSite1847 = x3d.HAnimSite()
HAnimSite1847.USE = "hanim_l_ring_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1847)
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.USE = "hanim_r_ring_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1848)
HAnimSite1849 = x3d.HAnimSite()
HAnimSite1849.USE = "hanim_temporomandibular_l_site_pt"

HAnimHumanoid45.sites.append(HAnimSite1849)
HAnimSite1850 = x3d.HAnimSite()
HAnimSite1850.USE = "hanim_temporomandibular_r_site_pt"

HAnimHumanoid45.sites.append(HAnimSite1850)
HAnimSite1851 = x3d.HAnimSite()
HAnimSite1851.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid45.sites.append(HAnimSite1851)
HAnimSite1852 = x3d.HAnimSite()
HAnimSite1852.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid45.sites.append(HAnimSite1852)
HAnimSite1853 = x3d.HAnimSite()
HAnimSite1853.USE = "hanim_r_thelion_pt"

HAnimHumanoid45.sites.append(HAnimSite1853)
HAnimSite1854 = x3d.HAnimSite()
HAnimSite1854.USE = "hanim_l_thelion_pt"

HAnimHumanoid45.sites.append(HAnimSite1854)
HAnimSite1855 = x3d.HAnimSite()
HAnimSite1855.USE = "hanim_l_thumb_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1855)
HAnimSite1856 = x3d.HAnimSite()
HAnimSite1856.USE = "hanim_r_thumb_distal_tip"

HAnimHumanoid45.sites.append(HAnimSite1856)
HAnimSite1857 = x3d.HAnimSite()
HAnimSite1857.USE = "hanim_r_tragion_pt"

HAnimHumanoid45.sites.append(HAnimSite1857)
HAnimSite1858 = x3d.HAnimSite()
HAnimSite1858.USE = "hanim_l_tragion_pt"

HAnimHumanoid45.sites.append(HAnimSite1858)
HAnimSite1859 = x3d.HAnimSite()
HAnimSite1859.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid45.sites.append(HAnimSite1859)
HAnimSite1860 = x3d.HAnimSite()
HAnimSite1860.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid45.sites.append(HAnimSite1860)
HAnimSite1861 = x3d.HAnimSite()
HAnimSite1861.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid45.sites.append(HAnimSite1861)
HAnimSite1862 = x3d.HAnimSite()
HAnimSite1862.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid45.sites.append(HAnimSite1862)
HAnimSite1863 = x3d.HAnimSite()
HAnimSite1863.DEF = "hanim_l_inclined_view"
HAnimSite1863.name = "l_inclined_view"
HAnimSite1863.translation = [1.62,1.05,2.06]
HAnimSite1863.rotation = [-0.113,0.993,0.0347,0.671]
TouchSensor1864 = x3d.TouchSensor()
TouchSensor1864.description = "HAnimSite l_inclined_view"

HAnimSite1863.children.append(TouchSensor1864)
Shape1865 = x3d.Shape()
Shape1865.USE = "HAnimSiteShape"

HAnimSite1863.children.append(Shape1865)
Viewpoint1866 = x3d.Viewpoint()
Viewpoint1866.DEF = "hanim_l_inclined_viewpoint"
Viewpoint1866.description = "left inclined"
Viewpoint1866.position = [0,0,0]

HAnimSite1863.children.append(Viewpoint1866)
Anchor1867 = x3d.Anchor()
Anchor1867.description = "HAnimSite hanim_l_inclined_view Viewpoint"
Anchor1867.url = ["#hanim_l_inclined_viewpoint"]
LOD1868 = x3d.LOD()
LOD1868.forceTransitions = True
LOD1868.range = [0.04]
WorldInfo1869 = x3d.WorldInfo()
WorldInfo1869.info = ["hide diamond when close"]

LOD1868.children.append(WorldInfo1869)
Shape1870 = x3d.Shape()
Shape1870.USE = "HAnimSiteViewpointShape"

LOD1868.children.append(Shape1870)

Anchor1867.children.append(LOD1868)

HAnimSite1863.children.append(Anchor1867)

HAnimHumanoid45.viewpoints.append(HAnimSite1863)
HAnimSite1871 = x3d.HAnimSite()
HAnimSite1871.DEF = "hanim_r_inclined_view"
HAnimSite1871.name = "r_inclined_view"
HAnimSite1871.translation = [-1.62,1.05,2.06]
HAnimSite1871.rotation = [-0.113,-0.993,0.0347,0.671]
TouchSensor1872 = x3d.TouchSensor()
TouchSensor1872.description = "HAnimSite r_inclined_view"

HAnimSite1871.children.append(TouchSensor1872)
Shape1873 = x3d.Shape()
Shape1873.USE = "HAnimSiteShape"

HAnimSite1871.children.append(Shape1873)
Viewpoint1874 = x3d.Viewpoint()
Viewpoint1874.DEF = "hanim_r_inclined_viewpoint"
Viewpoint1874.description = "right inclined"
Viewpoint1874.position = [0,0,0]
Viewpoint1874.centerOfRotation = [0,0.9,0]

HAnimSite1871.children.append(Viewpoint1874)
Anchor1875 = x3d.Anchor()
Anchor1875.description = "HAnimSite hanim_r_inclined_view Viewpoint"
Anchor1875.url = ["#hanim_r_inclined_viewpoint"]
LOD1876 = x3d.LOD()
LOD1876.forceTransitions = True
LOD1876.range = [0.04]
WorldInfo1877 = x3d.WorldInfo()
WorldInfo1877.info = ["hide diamond when close"]

LOD1876.children.append(WorldInfo1877)
Shape1878 = x3d.Shape()
Shape1878.USE = "HAnimSiteViewpointShape"

LOD1876.children.append(Shape1878)

Anchor1875.children.append(LOD1876)

HAnimSite1871.children.append(Anchor1875)

HAnimHumanoid45.viewpoints.append(HAnimSite1871)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.DEF = "hanim_front_view"
HAnimSite1879.name = "front_view"
HAnimSite1879.translation = [0,0.85,2.58]
TouchSensor1880 = x3d.TouchSensor()
TouchSensor1880.description = "HAnimSite front_view"

HAnimSite1879.children.append(TouchSensor1880)
Shape1881 = x3d.Shape()
Shape1881.USE = "HAnimSiteShape"

HAnimSite1879.children.append(Shape1881)
Viewpoint1882 = x3d.Viewpoint()
Viewpoint1882.DEF = "hanim_front_viewpoint"
Viewpoint1882.description = "front"
Viewpoint1882.position = [0,0,0]
Viewpoint1882.centerOfRotation = [0,0.9,0]

HAnimSite1879.children.append(Viewpoint1882)
Anchor1883 = x3d.Anchor()
Anchor1883.description = "HAnimSite hanim_front_view Viewpoint"
Anchor1883.url = ["#hanim_front_viewpoint"]
LOD1884 = x3d.LOD()
LOD1884.forceTransitions = True
LOD1884.range = [0.04]
WorldInfo1885 = x3d.WorldInfo()
WorldInfo1885.info = ["hide diamond when close"]

LOD1884.children.append(WorldInfo1885)
Shape1886 = x3d.Shape()
Shape1886.USE = "HAnimSiteViewpointShape"

LOD1884.children.append(Shape1886)

Anchor1883.children.append(LOD1884)

HAnimSite1879.children.append(Anchor1883)

HAnimHumanoid45.viewpoints.append(HAnimSite1879)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.DEF = "hanim_back_view"
HAnimSite1887.name = "back_view"
HAnimSite1887.translation = [0,0.85,-2.58]
HAnimSite1887.rotation = [0,1,0,3.14]
TouchSensor1888 = x3d.TouchSensor()
TouchSensor1888.description = "HAnimSite back_view"

HAnimSite1887.children.append(TouchSensor1888)
Shape1889 = x3d.Shape()
Shape1889.USE = "HAnimSiteShape"

HAnimSite1887.children.append(Shape1889)
Viewpoint1890 = x3d.Viewpoint()
Viewpoint1890.DEF = "hanim_back_viewpoint"
Viewpoint1890.description = "back"
Viewpoint1890.position = [0,0,0]
Viewpoint1890.centerOfRotation = [0,0.9,0]

HAnimSite1887.children.append(Viewpoint1890)
Anchor1891 = x3d.Anchor()
Anchor1891.description = "HAnimSite hanim_back_view Viewpoint"
Anchor1891.url = ["#hanim_back_viewpoint"]
LOD1892 = x3d.LOD()
LOD1892.forceTransitions = True
LOD1892.range = [0.04]
WorldInfo1893 = x3d.WorldInfo()
WorldInfo1893.info = ["hide diamond when close"]

LOD1892.children.append(WorldInfo1893)
Shape1894 = x3d.Shape()
Shape1894.USE = "HAnimSiteViewpointShape"

LOD1892.children.append(Shape1894)

Anchor1891.children.append(LOD1892)

HAnimSite1887.children.append(Anchor1891)

HAnimHumanoid45.viewpoints.append(HAnimSite1887)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.DEF = "hanim_l_side_view"
HAnimSite1895.name = "l_side_view"
HAnimSite1895.translation = [2.6,0.854,0]
HAnimSite1895.rotation = [0,1,0,1.5708]
TouchSensor1896 = x3d.TouchSensor()
TouchSensor1896.description = "HAnimSite l_side_view"

HAnimSite1895.children.append(TouchSensor1896)
Shape1897 = x3d.Shape()
Shape1897.USE = "HAnimSiteShape"

HAnimSite1895.children.append(Shape1897)
Viewpoint1898 = x3d.Viewpoint()
Viewpoint1898.DEF = "hanim_l_side_viewpoint"
Viewpoint1898.description = "left side"
Viewpoint1898.position = [0,0,0]
Viewpoint1898.centerOfRotation = [0,0.9,0]

HAnimSite1895.children.append(Viewpoint1898)
Anchor1899 = x3d.Anchor()
Anchor1899.description = "HAnimSite hanim_l_side_view Viewpoint"
Anchor1899.url = ["#hanim_l_side_viewpoint"]
LOD1900 = x3d.LOD()
LOD1900.forceTransitions = True
LOD1900.range = [0.04]
WorldInfo1901 = x3d.WorldInfo()
WorldInfo1901.info = ["hide diamond when close"]

LOD1900.children.append(WorldInfo1901)
Shape1902 = x3d.Shape()
Shape1902.USE = "HAnimSiteViewpointShape"

LOD1900.children.append(Shape1902)

Anchor1899.children.append(LOD1900)

HAnimSite1895.children.append(Anchor1899)

HAnimHumanoid45.viewpoints.append(HAnimSite1895)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.DEF = "hanim_Top_view"
HAnimSite1903.name = "Top_view"
HAnimSite1903.translation = [0,3.5,0]
HAnimSite1903.rotation = [1,0,0,-1.57]
TouchSensor1904 = x3d.TouchSensor()
TouchSensor1904.description = "HAnimSite Top_view"

HAnimSite1903.children.append(TouchSensor1904)
Shape1905 = x3d.Shape()
Shape1905.USE = "HAnimSiteShape"

HAnimSite1903.children.append(Shape1905)
Viewpoint1906 = x3d.Viewpoint()
Viewpoint1906.DEF = "hanim_Top_viewpoint"
Viewpoint1906.description = "Top"
Viewpoint1906.position = [0,0,0]
Viewpoint1906.centerOfRotation = [0,0.9,0]

HAnimSite1903.children.append(Viewpoint1906)
Anchor1907 = x3d.Anchor()
Anchor1907.description = "HAnimSite hanim_Top_view Viewpoint"
Anchor1907.url = ["#hanim_Top_viewpoint"]
LOD1908 = x3d.LOD()
LOD1908.forceTransitions = True
LOD1908.range = [0.04]
WorldInfo1909 = x3d.WorldInfo()
WorldInfo1909.info = ["hide diamond when close"]

LOD1908.children.append(WorldInfo1909)
Shape1910 = x3d.Shape()
Shape1910.USE = "HAnimSiteViewpointShape"

LOD1908.children.append(Shape1910)

Anchor1907.children.append(LOD1908)

HAnimSite1903.children.append(Anchor1907)

HAnimHumanoid45.viewpoints.append(HAnimSite1903)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.DEF = "hanim_front_close_view"
HAnimSite1911.name = "front_close_view"
HAnimSite1911.translation = [0,0.854,1.575]
TouchSensor1912 = x3d.TouchSensor()
TouchSensor1912.description = "HAnimSite front_close_view"

HAnimSite1911.children.append(TouchSensor1912)
Shape1913 = x3d.Shape()
Shape1913.USE = "HAnimSiteShape"

HAnimSite1911.children.append(Shape1913)
Viewpoint1914 = x3d.Viewpoint()
Viewpoint1914.DEF = "hanim_front_close_viewpoint"
Viewpoint1914.description = "front close"
Viewpoint1914.position = [0,0,0]
Viewpoint1914.centerOfRotation = [0,0,1.575]

HAnimSite1911.children.append(Viewpoint1914)
Anchor1915 = x3d.Anchor()
Anchor1915.description = "HAnimSite hanim_front_close_view Viewpoint"
Anchor1915.url = ["#hanim_front_close_viewpoint"]
LOD1916 = x3d.LOD()
LOD1916.forceTransitions = True
LOD1916.range = [0.04]
WorldInfo1917 = x3d.WorldInfo()
WorldInfo1917.info = ["hide diamond when close"]

LOD1916.children.append(WorldInfo1917)
Shape1918 = x3d.Shape()
Shape1918.USE = "HAnimSiteViewpointShape"

LOD1916.children.append(Shape1918)

Anchor1915.children.append(LOD1916)

HAnimSite1911.children.append(Anchor1915)

HAnimHumanoid45.viewpoints.append(HAnimSite1911)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.DEF = "hanim_side_close_view"
HAnimSite1919.name = "side_close_view"
HAnimSite1919.translation = [1.56,0.854,0]
HAnimSite1919.rotation = [0,1,0,1.5708]
TouchSensor1920 = x3d.TouchSensor()
TouchSensor1920.description = "HAnimSite side_close_view"

HAnimSite1919.children.append(TouchSensor1920)
Shape1921 = x3d.Shape()
Shape1921.USE = "HAnimSiteShape"

HAnimSite1919.children.append(Shape1921)
Viewpoint1922 = x3d.Viewpoint()
Viewpoint1922.DEF = "hanim_side_close_viewpoint"
Viewpoint1922.description = "side close"
Viewpoint1922.position = [0,0,0]
Viewpoint1922.centerOfRotation = [1.6,0,0]

HAnimSite1919.children.append(Viewpoint1922)
Anchor1923 = x3d.Anchor()
Anchor1923.description = "HAnimSite hanim_side_close_view Viewpoint"
Anchor1923.url = ["#hanim_side_close_viewpoint"]
LOD1924 = x3d.LOD()
LOD1924.forceTransitions = True
LOD1924.range = [0.04]
WorldInfo1925 = x3d.WorldInfo()
WorldInfo1925.info = ["hide diamond when close"]

LOD1924.children.append(WorldInfo1925)
Shape1926 = x3d.Shape()
Shape1926.USE = "HAnimSiteViewpointShape"

LOD1924.children.append(Shape1926)

Anchor1923.children.append(LOD1924)

HAnimSite1919.children.append(Anchor1923)

HAnimHumanoid45.viewpoints.append(HAnimSite1919)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.DEF = "hanim_head_front_close_view"
HAnimSite1927.name = "head_front_close_view"
HAnimSite1927.translation = [0,1.5,1]
TouchSensor1928 = x3d.TouchSensor()
TouchSensor1928.description = "HAnimSite head_front_close_view"

HAnimSite1927.children.append(TouchSensor1928)
Shape1929 = x3d.Shape()
Shape1929.USE = "HAnimSiteShape"

HAnimSite1927.children.append(Shape1929)
Viewpoint1930 = x3d.Viewpoint()
Viewpoint1930.DEF = "hanim_head_front_close_viewpoint"
Viewpoint1930.description = "head front close"
Viewpoint1930.position = [0,0,0]
Viewpoint1930.centerOfRotation = [0,0,1]

HAnimSite1927.children.append(Viewpoint1930)
Anchor1931 = x3d.Anchor()
Anchor1931.description = "HAnimSite hanim_head_front_close_view Viewpoint"
Anchor1931.url = ["#hanim_head_front_close_viewpoint"]
LOD1932 = x3d.LOD()
LOD1932.forceTransitions = True
LOD1932.range = [0.04]
WorldInfo1933 = x3d.WorldInfo()
WorldInfo1933.info = ["hide diamond when close"]

LOD1932.children.append(WorldInfo1933)
Shape1934 = x3d.Shape()
Shape1934.USE = "HAnimSiteViewpointShape"

LOD1932.children.append(Shape1934)

Anchor1931.children.append(LOD1932)

HAnimSite1927.children.append(Anchor1931)

HAnimHumanoid45.viewpoints.append(HAnimSite1927)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.DEF = "hanim_chest_front_close_view"
HAnimSite1935.name = "chest_front_close_view"
HAnimSite1935.translation = [0,1.2,1]
TouchSensor1936 = x3d.TouchSensor()
TouchSensor1936.description = "HAnimSite chest_front_close_view"

HAnimSite1935.children.append(TouchSensor1936)
Shape1937 = x3d.Shape()
Shape1937.USE = "HAnimSiteShape"

HAnimSite1935.children.append(Shape1937)
Viewpoint1938 = x3d.Viewpoint()
Viewpoint1938.DEF = "hanim_chest_front_close_viewpoint"
Viewpoint1938.description = "chest front close"
Viewpoint1938.position = [0,0,0]
Viewpoint1938.centerOfRotation = [0,0,1]

HAnimSite1935.children.append(Viewpoint1938)
Anchor1939 = x3d.Anchor()
Anchor1939.description = "HAnimSite hanim_chest_front_close_view Viewpoint"
Anchor1939.url = ["#hanim_chest_front_close_viewpoint"]
LOD1940 = x3d.LOD()
LOD1940.forceTransitions = True
LOD1940.range = [0.04]
WorldInfo1941 = x3d.WorldInfo()
WorldInfo1941.info = ["hide diamond when close"]

LOD1940.children.append(WorldInfo1941)
Shape1942 = x3d.Shape()
Shape1942.USE = "HAnimSiteViewpointShape"

LOD1940.children.append(Shape1942)

Anchor1939.children.append(LOD1940)

HAnimSite1935.children.append(Anchor1939)

HAnimHumanoid45.viewpoints.append(HAnimSite1935)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.DEF = "hanim_pelvis_front_close_view"
HAnimSite1943.name = "pelvis_front_close_view"
HAnimSite1943.translation = [0,0.8,1]
TouchSensor1944 = x3d.TouchSensor()
TouchSensor1944.description = "HAnimSite pelvis_front_close_view"

HAnimSite1943.children.append(TouchSensor1944)
Shape1945 = x3d.Shape()
Shape1945.USE = "HAnimSiteShape"

HAnimSite1943.children.append(Shape1945)
Viewpoint1946 = x3d.Viewpoint()
Viewpoint1946.DEF = "hanim_pelvis_front_close_viewpoint"
Viewpoint1946.description = "pelvis front close"
Viewpoint1946.position = [0,0,0]
Viewpoint1946.centerOfRotation = [0,0,1]

HAnimSite1943.children.append(Viewpoint1946)
Anchor1947 = x3d.Anchor()
Anchor1947.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint"
Anchor1947.url = ["#hanim_pelvis_front_close_viewpoint"]
LOD1948 = x3d.LOD()
LOD1948.forceTransitions = True
LOD1948.range = [0.04]
WorldInfo1949 = x3d.WorldInfo()
WorldInfo1949.info = ["hide diamond when close"]

LOD1948.children.append(WorldInfo1949)
Shape1950 = x3d.Shape()
Shape1950.USE = "HAnimSiteViewpointShape"

LOD1948.children.append(Shape1950)

Anchor1947.children.append(LOD1948)

HAnimSite1943.children.append(Anchor1947)

HAnimHumanoid45.viewpoints.append(HAnimSite1943)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.DEF = "hanim_knees_front_close_view"
HAnimSite1951.name = "knees_front_close_view"
HAnimSite1951.translation = [0,0.4,1]
TouchSensor1952 = x3d.TouchSensor()
TouchSensor1952.description = "HAnimSite knees_front_close_view"

HAnimSite1951.children.append(TouchSensor1952)
Shape1953 = x3d.Shape()
Shape1953.USE = "HAnimSiteShape"

HAnimSite1951.children.append(Shape1953)
Viewpoint1954 = x3d.Viewpoint()
Viewpoint1954.DEF = "hanim_knees_front_close_viewpoint"
Viewpoint1954.description = "knees front close"
Viewpoint1954.position = [0,0,0]
Viewpoint1954.centerOfRotation = [0,0.4,0]

HAnimSite1951.children.append(Viewpoint1954)
Anchor1955 = x3d.Anchor()
Anchor1955.description = "HAnimSite hanim_knees_front_close_view Viewpoint"
Anchor1955.url = ["#hanim_knees_front_close_viewpoint"]
LOD1956 = x3d.LOD()
LOD1956.forceTransitions = True
LOD1956.range = [0.04]
WorldInfo1957 = x3d.WorldInfo()
WorldInfo1957.info = ["hide diamond when close"]

LOD1956.children.append(WorldInfo1957)
Shape1958 = x3d.Shape()
Shape1958.USE = "HAnimSiteViewpointShape"

LOD1956.children.append(Shape1958)

Anchor1955.children.append(LOD1956)

HAnimSite1951.children.append(Anchor1955)

HAnimHumanoid45.viewpoints.append(HAnimSite1951)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.DEF = "hanim_feet_front_close_view"
HAnimSite1959.name = "feet_front_close_view"
HAnimSite1959.translation = [0,0,1]
TouchSensor1960 = x3d.TouchSensor()
TouchSensor1960.description = "HAnimSite feet_front_close_view"

HAnimSite1959.children.append(TouchSensor1960)
Shape1961 = x3d.Shape()
Shape1961.USE = "HAnimSiteShape"

HAnimSite1959.children.append(Shape1961)
Viewpoint1962 = x3d.Viewpoint()
Viewpoint1962.DEF = "hanim_feet_front_close_viewpoint"
Viewpoint1962.description = "feet front close"
Viewpoint1962.position = [0,0,0]

HAnimSite1959.children.append(Viewpoint1962)
Anchor1963 = x3d.Anchor()
Anchor1963.description = "HAnimSite hanim_feet_front_close_view Viewpoint"
Anchor1963.url = ["#hanim_feet_front_close_viewpoint"]
LOD1964 = x3d.LOD()
LOD1964.forceTransitions = True
LOD1964.range = [0.04]
WorldInfo1965 = x3d.WorldInfo()
WorldInfo1965.info = ["hide diamond when close"]

LOD1964.children.append(WorldInfo1965)
Shape1966 = x3d.Shape()
Shape1966.USE = "HAnimSiteViewpointShape"

LOD1964.children.append(Shape1966)

Anchor1963.children.append(LOD1964)

HAnimSite1959.children.append(Anchor1963)

HAnimHumanoid45.viewpoints.append(HAnimSite1959)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.DEF = "hanim_eye_level_view"
HAnimSite1967.name = "eye_level_view"
HAnimSite1967.translation = [0,1.6332,0.0502]
TouchSensor1968 = x3d.TouchSensor()
TouchSensor1968.description = "HAnimSite eye_level_view"

HAnimSite1967.children.append(TouchSensor1968)
Shape1969 = x3d.Shape()
Shape1969.USE = "HAnimSiteShape"

HAnimSite1967.children.append(Shape1969)
Viewpoint1970 = x3d.Viewpoint()
Viewpoint1970.DEF = "hanim_eye_level_viewpoint"
Viewpoint1970.description = "eye level looking forward"
Viewpoint1970.position = [0,0,0]
Viewpoint1970.orientation = [0,1,0,3.141593]

HAnimSite1967.children.append(Viewpoint1970)
Anchor1971 = x3d.Anchor()
Anchor1971.description = "HAnimSite hanim_eye_level_view Viewpoint"
Anchor1971.url = ["#hanim_eye_level_viewpoint"]
LOD1972 = x3d.LOD()
LOD1972.forceTransitions = True
LOD1972.range = [0.04]
WorldInfo1973 = x3d.WorldInfo()
WorldInfo1973.info = ["hide diamond when close"]

LOD1972.children.append(WorldInfo1973)
Shape1974 = x3d.Shape()
Shape1974.USE = "HAnimSiteViewpointShape"

LOD1972.children.append(Shape1974)

Anchor1971.children.append(LOD1972)

HAnimSite1967.children.append(Anchor1971)

HAnimHumanoid45.viewpoints.append(HAnimSite1967)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.USE = "hanim_l_eyeball_site_view"

HAnimHumanoid45.sites.append(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.USE = "hanim_r_eyeball_site_view"

HAnimHumanoid45.sites.append(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.USE = "hanim_l_hand_front_view"

HAnimHumanoid45.sites.append(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.USE = "hanim_r_hand_front_view"

HAnimHumanoid45.sites.append(HAnimSite1978)

Scene31.children.append(HAnimHumanoid45)

X3D0.Scene = Scene31
f = open("../data/HAnim1SpecificationLOA3Illustrated.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Illustrated.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Illustrated.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta3.content = "HAnim2SpecificationLOA3Illustrated.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "reference"
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "reference"
meta6.content = "HAnim2SpecificationLOA3Invisible.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "HAnim2SpecificationLOA3Animation.x3d"

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
meta16.content = "18 February 2021"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "modified"
meta17.content = "Mon, 15 Sep 2025 05:20:09 GMT"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "creator"
meta18.content = "Don Brutzman"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "images/BonesAllSkeletonFrontViewLOA2.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "images/BonesAllSkeletonFrontViewLOA3.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "TODO"
meta22.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "TODO"
meta23.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "translator"
meta24.content = "Don Brutzman and Joe Williams"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "generator"
meta25.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "generator"
meta26.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta26)

X3D0.head = head1
Scene27 = x3d.Scene()
Background28 = x3d.Background()
Background28.skyColor = [(0.3, 0.3, 0.3)]

Scene27.children.append(Background28)
NavigationInfo29 = x3d.NavigationInfo()

Scene27.children.append(NavigationInfo29)
Group30 = x3d.Group()
Group30.DEF = "Original_WorldInfo"
WorldInfo31 = x3d.WorldInfo()
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3"
WorldInfo31.info = [" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]

Group30.children.append(WorldInfo31)

Scene27.children.append(Group30)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.description = "Humanoid LOA 3 Front"
Viewpoint32.position = [0,0.4,4]
Viewpoint32.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint32)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.description = "Humanoid LOA 3 Front Close"
Viewpoint33.position = [0,0.8,2]
Viewpoint33.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint33)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.description = "Humanoid LOA 3 Front Closer"
Viewpoint34.position = [0,1.2,1]
Viewpoint34.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "Humanoid LOA 3 Front Face"
Viewpoint35.position = [0,1.63,1]
Viewpoint35.centerOfRotation = [0,1.5,0.0016]

Scene27.children.append(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.description = "Humanoid LOA 3 Right Side"
Viewpoint36.position = [2.6,0.8,0]
Viewpoint36.orientation = [0,1,0,1.5708]
Viewpoint36.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Humanoid LOA 3 Right Side Close"
Viewpoint37.position = [1,0.8,0.5]
Viewpoint37.orientation = [0,1,0,1.2]
Viewpoint37.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "Humanoid LOA 3 Left Side Close"
Viewpoint38.position = [-1,0.8,0.5]
Viewpoint38.orientation = [0,1,0,-1.2]
Viewpoint38.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Humanoid LOA 3 Left Side"
Viewpoint39.position = [-2.6,0.8,0]
Viewpoint39.orientation = [0,1,0,-1.5708]
Viewpoint39.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Humanoid LOA 3 Top"
Viewpoint40.position = [0,3.5,0]
Viewpoint40.orientation = [1,0,0,-1.5708]
Viewpoint40.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint40)
HAnimHumanoid41 = x3d.HAnimHumanoid()
HAnimHumanoid41.DEF = "hanim_humanoid"
HAnimHumanoid41.name = "humanoid"
HAnimHumanoid41.loa = 3
MetadataSet42 = x3d.MetadataSet()
MetadataSet42.name = "HAnimHumanoid.info"
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString43 = x3d.MetadataString()
MetadataString43.name = "authorName"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString43)
MetadataString44 = x3d.MetadataString()
MetadataString44.name = "authorEmail"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString44)
MetadataString45 = x3d.MetadataString()
MetadataString45.name = "copyright"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString45)
MetadataString46 = x3d.MetadataString()
MetadataString46.name = "creationDate"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString46)
MetadataFloat47 = x3d.MetadataFloat()
MetadataFloat47.name = "height"
MetadataFloat47.value = [1.7504]

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataFloat47)
MetadataString48 = x3d.MetadataString()
MetadataString48.name = "humanoidVersion"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.name = "usageRestrictions"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString49)

HAnimHumanoid41.metadata = MetadataSet42
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.DEF = "hanim_humanoid_root"
HAnimJoint50.name = "humanoid_root"
HAnimJoint50.center = [0,0.824,0.0277]
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.DEF = "hanim_sacrum"
HAnimSegment51.name = "sacrum"
TouchSensor52 = x3d.TouchSensor()
TouchSensor52.description = "HAnimJoint humanoid_root, HAnimSegment sacrum"

HAnimSegment51.children.append(TouchSensor52)
Transform53 = x3d.Transform()
Transform53.translation = [0,0.824,0.0277]
Shape54 = x3d.Shape()
Shape54.DEF = "HAnimJointShape"
Appearance55 = x3d.Appearance()
Appearance55.DEF = "HAnimJointAppearance"
Material56 = x3d.Material()
Material56.diffuseColor = [1,0.5,0]
Material56.transparency = 0.5

Appearance55.material = Material56

Shape54.appearance = Appearance55
Sphere57 = x3d.Sphere()
Sphere57.radius = 0.006

Shape54.geometry = Sphere57

Transform53.children.append(Shape54)

HAnimSegment51.children.append(Transform53)
Shape58 = x3d.Shape()
LineSet59 = x3d.LineSet()
LineSet59.vertexCount = [2]
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.DEF = "HAnimSegmentLineColorRGBA"
ColorRGBA60.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet59.color = ColorRGBA60
Coordinate61 = x3d.Coordinate()
Coordinate61.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet59.coord = Coordinate61

Shape58.geometry = LineSet59

HAnimSegment51.children.append(Shape58)
Shape62 = x3d.Shape()
LineSet63 = x3d.LineSet()
LineSet63.vertexCount = [2]
ColorRGBA64 = x3d.ColorRGBA()
ColorRGBA64.USE = "HAnimSegmentLineColorRGBA"

LineSet63.color = ColorRGBA64
Coordinate65 = x3d.Coordinate()
Coordinate65.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet63.coord = Coordinate65

Shape62.geometry = LineSet63

HAnimSegment51.children.append(Shape62)

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.DEF = "hanim_sacroiliac"
HAnimJoint66.name = "sacroiliac"
HAnimJoint66.center = [0,0.9149,0.0016]
HAnimSegment67 = x3d.HAnimSegment()
HAnimSegment67.DEF = "hanim_pelvis"
HAnimSegment67.name = "pelvis"
TouchSensor68 = x3d.TouchSensor()
TouchSensor68.description = "HAnimJoint sacroiliac, HAnimSegment pelvis"

HAnimSegment67.children.append(TouchSensor68)
Transform69 = x3d.Transform()
Transform69.translation = [0,0.9149,0.0016]
Shape70 = x3d.Shape()
Shape70.USE = "HAnimJointShape"

Transform69.children.append(Shape70)

HAnimSegment67.children.append(Transform69)
Shape71 = x3d.Shape()
LineSet72 = x3d.LineSet()
LineSet72.vertexCount = [2]
ColorRGBA73 = x3d.ColorRGBA()
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA"

LineSet72.color = ColorRGBA73
Coordinate74 = x3d.Coordinate()
Coordinate74.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet72.coord = Coordinate74

Shape71.geometry = LineSet72

HAnimSegment67.children.append(Shape71)
Shape75 = x3d.Shape()
LineSet76 = x3d.LineSet()
LineSet76.vertexCount = [2]
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA"

LineSet76.color = ColorRGBA77
Coordinate78 = x3d.Coordinate()
Coordinate78.point = [(0, 0.9149, 0.0016),(-0.0961, 0.9124, -0.0001)]

LineSet76.coord = Coordinate78

Shape75.geometry = LineSet76

HAnimSegment67.children.append(Shape75)
Shape79 = x3d.Shape()
LineSet80 = x3d.LineSet()
LineSet80.vertexCount = [2]
ColorRGBA81 = x3d.ColorRGBA()
ColorRGBA81.DEF = "HAnimSiteLineColorRGBA"
ColorRGBA81.color = [(1, 0, 0, 1),(1, 0, 0, 0.1)]

LineSet80.color = ColorRGBA81
Coordinate82 = x3d.Coordinate()
Coordinate82.point = [(0, 0.9149, 0.0016),(-0.1525, 1.0628, 0.0035)]

LineSet80.coord = Coordinate82

Shape79.geometry = LineSet80

HAnimSegment67.children.append(Shape79)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.vertexCount = [2]
ColorRGBA85 = x3d.ColorRGBA()
ColorRGBA85.USE = "HAnimSiteLineColorRGBA"

LineSet84.color = ColorRGBA85
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0, 0.9149, 0.0016),(-0.1689, 0.8419, 0.0352)]

LineSet84.coord = Coordinate86

Shape83.geometry = LineSet84

HAnimSegment67.children.append(Shape83)
Shape87 = x3d.Shape()
LineSet88 = x3d.LineSet()
LineSet88.vertexCount = [2]
ColorRGBA89 = x3d.ColorRGBA()
ColorRGBA89.USE = "HAnimSiteLineColorRGBA"

LineSet88.color = ColorRGBA89
Coordinate90 = x3d.Coordinate()
Coordinate90.point = [(0, 0.9149, 0.0016),(0.1612, 1.0537, 0.0008)]

LineSet88.coord = Coordinate90

Shape87.geometry = LineSet88

HAnimSegment67.children.append(Shape87)
Shape91 = x3d.Shape()
LineSet92 = x3d.LineSet()
LineSet92.vertexCount = [2]
ColorRGBA93 = x3d.ColorRGBA()
ColorRGBA93.USE = "HAnimSiteLineColorRGBA"

LineSet92.color = ColorRGBA93
Coordinate94 = x3d.Coordinate()
Coordinate94.point = [(0, 0.9149, 0.0016),(0.1677, 0.8336, 0.0303)]

LineSet92.coord = Coordinate94

Shape91.geometry = LineSet92

HAnimSegment67.children.append(Shape91)
Shape95 = x3d.Shape()
LineSet96 = x3d.LineSet()
LineSet96.vertexCount = [2]
ColorRGBA97 = x3d.ColorRGBA()
ColorRGBA97.USE = "HAnimSiteLineColorRGBA"

LineSet96.color = ColorRGBA97
Coordinate98 = x3d.Coordinate()
Coordinate98.point = [(0, 0.9149, 0.0016),(-0.0887, 1.0021, 0.1112)]

LineSet96.coord = Coordinate98

Shape95.geometry = LineSet96

HAnimSegment67.children.append(Shape95)
Shape99 = x3d.Shape()
LineSet100 = x3d.LineSet()
LineSet100.vertexCount = [2]
ColorRGBA101 = x3d.ColorRGBA()
ColorRGBA101.USE = "HAnimSiteLineColorRGBA"

LineSet100.color = ColorRGBA101
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(0, 0.9149, 0.0016),(0.0925, 0.9983, 0.1052)]

LineSet100.coord = Coordinate102

Shape99.geometry = LineSet100

HAnimSegment67.children.append(Shape99)
Shape103 = x3d.Shape()
LineSet104 = x3d.LineSet()
LineSet104.vertexCount = [2]
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.USE = "HAnimSiteLineColorRGBA"

LineSet104.color = ColorRGBA105
Coordinate106 = x3d.Coordinate()
Coordinate106.point = [(0, 0.9149, 0.0016),(-0.0716, 1.019, -0.1138)]

LineSet104.coord = Coordinate106

Shape103.geometry = LineSet104

HAnimSegment67.children.append(Shape103)
Shape107 = x3d.Shape()
LineSet108 = x3d.LineSet()
LineSet108.vertexCount = [2]
ColorRGBA109 = x3d.ColorRGBA()
ColorRGBA109.USE = "HAnimSiteLineColorRGBA"

LineSet108.color = ColorRGBA109
Coordinate110 = x3d.Coordinate()
Coordinate110.point = [(0, 0.9149, 0.0016),(0.0774, 1.019, -0.1151)]

LineSet108.coord = Coordinate110

Shape107.geometry = LineSet108

HAnimSegment67.children.append(Shape107)
Shape111 = x3d.Shape()
LineSet112 = x3d.LineSet()
LineSet112.vertexCount = [2]
ColorRGBA113 = x3d.ColorRGBA()
ColorRGBA113.USE = "HAnimSiteLineColorRGBA"

LineSet112.color = ColorRGBA113
Coordinate114 = x3d.Coordinate()
Coordinate114.point = [(0, 0.9149, 0.0016),(0.0034, 0.8266, 0.0257)]

LineSet112.coord = Coordinate114

Shape111.geometry = LineSet112

HAnimSegment67.children.append(Shape111)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.DEF = "hanim_r_iliocristale_pt"
HAnimSite115.name = "r_iliocristale_pt"
HAnimSite115.translation = [-0.1525,1.0628,0.0035]
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "HAnimSite r_iliocristale_pt"

HAnimSite115.children.append(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.DEF = "HAnimSiteShape"
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.diffuseColor = [1,0,0]

Appearance118.material = Material119

Shape117.appearance = Appearance118
IndexedFaceSet120 = x3d.IndexedFaceSet()
IndexedFaceSet120.DEF = "DiamondIFS"
IndexedFaceSet120.solid = False
IndexedFaceSet120.creaseAngle = 0.5
IndexedFaceSet120.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate121 = x3d.Coordinate()
Coordinate121.point = [(0, 0.008, 0),(-0.008, 0, 0),(0, 0, 0.008),(0.008, 0, 0),(0, 0, -0.008),(0, -0.008, 0)]

IndexedFaceSet120.coord = Coordinate121

Shape117.geometry = IndexedFaceSet120

HAnimSite115.children.append(Shape117)

HAnimSegment67.children.append(HAnimSite115)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.DEF = "hanim_r_trochanterion_pt"
HAnimSite122.name = "r_trochanterion_pt"
HAnimSite122.translation = [-0.1689,0.8419,0.0352]
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "HAnimSite r_trochanterion_pt"

HAnimSite122.children.append(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.USE = "HAnimSiteShape"

HAnimSite122.children.append(Shape124)

HAnimSegment67.children.append(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.DEF = "hanim_l_iliocristale_pt"
HAnimSite125.name = "l_iliocristale_pt"
HAnimSite125.translation = [0.1612,1.0537,0.0008]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite l_iliocristale_pt"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.USE = "HAnimSiteShape"

HAnimSite125.children.append(Shape127)

HAnimSegment67.children.append(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.DEF = "hanim_l_trochanterion_pt"
HAnimSite128.name = "l_trochanterion_pt"
HAnimSite128.translation = [0.1677,0.8336,0.0303]
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.description = "HAnimSite l_trochanterion_pt"

HAnimSite128.children.append(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.USE = "HAnimSiteShape"

HAnimSite128.children.append(Shape130)

HAnimSegment67.children.append(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.DEF = "hanim_r_asis_pt"
HAnimSite131.name = "r_asis_pt"
HAnimSite131.translation = [-0.0887,1.0021,0.1112]
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "HAnimSite r_asis_pt"

HAnimSite131.children.append(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.USE = "HAnimSiteShape"

HAnimSite131.children.append(Shape133)

HAnimSegment67.children.append(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.DEF = "hanim_l_asis_pt"
HAnimSite134.name = "l_asis_pt"
HAnimSite134.translation = [0.0925,0.9983,0.1052]
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.description = "HAnimSite l_asis_pt"

HAnimSite134.children.append(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.USE = "HAnimSiteShape"

HAnimSite134.children.append(Shape136)

HAnimSegment67.children.append(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.DEF = "hanim_r_psis_pt"
HAnimSite137.name = "r_psis_pt"
HAnimSite137.translation = [-0.0716,1.019,-0.1138]
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.description = "HAnimSite r_psis_pt"

HAnimSite137.children.append(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.USE = "HAnimSiteShape"

HAnimSite137.children.append(Shape139)

HAnimSegment67.children.append(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.DEF = "hanim_l_psis_pt"
HAnimSite140.name = "l_psis_pt"
HAnimSite140.translation = [0.0774,1.019,-0.1151]
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.description = "HAnimSite l_psis_pt"

HAnimSite140.children.append(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.USE = "HAnimSiteShape"

HAnimSite140.children.append(Shape142)

HAnimSegment67.children.append(HAnimSite140)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.DEF = "hanim_crotch_pt"
HAnimSite143.name = "crotch_pt"
HAnimSite143.translation = [0.0034,0.8266,0.0257]
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.description = "HAnimSite crotch_pt"

HAnimSite143.children.append(TouchSensor144)
Shape145 = x3d.Shape()
Shape145.USE = "HAnimSiteShape"

HAnimSite143.children.append(Shape145)

HAnimSegment67.children.append(HAnimSite143)

HAnimJoint66.children.append(HAnimSegment67)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.DEF = "hanim_l_hip"
HAnimJoint146.name = "l_hip"
HAnimJoint146.center = [0.0961,0.9124,-0.0001]
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.DEF = "hanim_l_thigh"
HAnimSegment147.name = "l_thigh"
TouchSensor148 = x3d.TouchSensor()
TouchSensor148.description = "HAnimJoint l_hip, HAnimSegment l_thigh"

HAnimSegment147.children.append(TouchSensor148)
Transform149 = x3d.Transform()
Transform149.translation = [0.0961,0.9124,-0.0001]
Shape150 = x3d.Shape()
Shape150.USE = "HAnimJointShape"

Transform149.children.append(Shape150)

HAnimSegment147.children.append(Transform149)
Shape151 = x3d.Shape()
LineSet152 = x3d.LineSet()
LineSet152.vertexCount = [2]
ColorRGBA153 = x3d.ColorRGBA()
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA"

LineSet152.color = ColorRGBA153
Coordinate154 = x3d.Coordinate()
Coordinate154.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet152.coord = Coordinate154

Shape151.geometry = LineSet152

HAnimSegment147.children.append(Shape151)
Shape155 = x3d.Shape()
LineSet156 = x3d.LineSet()
LineSet156.vertexCount = [2]
ColorRGBA157 = x3d.ColorRGBA()
ColorRGBA157.USE = "HAnimSiteLineColorRGBA"

LineSet156.color = ColorRGBA157
Coordinate158 = x3d.Coordinate()
Coordinate158.point = [(0.0961, 0.9124, -0.0001),(0.0993, 0.4881, -0.0309)]

LineSet156.coord = Coordinate158

Shape155.geometry = LineSet156

HAnimSegment147.children.append(Shape155)
Shape159 = x3d.Shape()
LineSet160 = x3d.LineSet()
LineSet160.vertexCount = [2]
ColorRGBA161 = x3d.ColorRGBA()
ColorRGBA161.USE = "HAnimSiteLineColorRGBA"

LineSet160.color = ColorRGBA161
Coordinate162 = x3d.Coordinate()
Coordinate162.point = [(0.0961, 0.9124, -0.0001),(0.1598, 0.4967, 0.0297)]

LineSet160.coord = Coordinate162

Shape159.geometry = LineSet160

HAnimSegment147.children.append(Shape159)
Shape163 = x3d.Shape()
LineSet164 = x3d.LineSet()
LineSet164.vertexCount = [2]
ColorRGBA165 = x3d.ColorRGBA()
ColorRGBA165.USE = "HAnimSiteLineColorRGBA"

LineSet164.color = ColorRGBA165
Coordinate166 = x3d.Coordinate()
Coordinate166.point = [(0.0961, 0.9124, -0.0001),(0.0398, 0.4946, 0.0303)]

LineSet164.coord = Coordinate166

Shape163.geometry = LineSet164

HAnimSegment147.children.append(Shape163)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.DEF = "hanim_l_knee_crease_pt"
HAnimSite167.name = "l_knee_crease_pt"
HAnimSite167.translation = [0.0993,0.4881,-0.0309]
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.description = "HAnimSite l_knee_crease_pt"

HAnimSite167.children.append(TouchSensor168)
Shape169 = x3d.Shape()
Shape169.USE = "HAnimSiteShape"

HAnimSite167.children.append(Shape169)

HAnimSegment147.children.append(HAnimSite167)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.DEF = "hanim_l_femoral_lateral_epicondyle_pt"
HAnimSite170.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite170.translation = [0.1598,0.4967,0.0297]
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.description = "HAnimSite l_femoral_lateral_epicn_pt"

HAnimSite170.children.append(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.USE = "HAnimSiteShape"

HAnimSite170.children.append(Shape172)

HAnimSegment147.children.append(HAnimSite170)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.DEF = "hanim_l_femoral_medial_epicondyle_pt"
HAnimSite173.name = "l_femoral_medial_epicondyle_pt"
HAnimSite173.translation = [0.0398,0.4946,0.0303]
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.description = "HAnimSite l_femoral_medial_epicn_pt"

HAnimSite173.children.append(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.USE = "HAnimSiteShape"

HAnimSite173.children.append(Shape175)

HAnimSegment147.children.append(HAnimSite173)

HAnimJoint146.children.append(HAnimSegment147)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.DEF = "hanim_l_knee"
HAnimJoint176.name = "l_knee"
HAnimJoint176.center = [0.104,0.4867,0.0308]
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.DEF = "hanim_l_calf"
HAnimSegment177.name = "l_calf"
TouchSensor178 = x3d.TouchSensor()
TouchSensor178.description = "HAnimJoint l_knee, HAnimSegment l_calf"

HAnimSegment177.children.append(TouchSensor178)
Transform179 = x3d.Transform()
Transform179.translation = [0.104,0.4867,0.0308]
Shape180 = x3d.Shape()
Shape180.USE = "HAnimJointShape"

Transform179.children.append(Shape180)

HAnimSegment177.children.append(Transform179)
Shape181 = x3d.Shape()
LineSet182 = x3d.LineSet()
LineSet182.vertexCount = [2]
ColorRGBA183 = x3d.ColorRGBA()
ColorRGBA183.USE = "HAnimSegmentLineColorRGBA"

LineSet182.color = ColorRGBA183
Coordinate184 = x3d.Coordinate()
Coordinate184.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet182.coord = Coordinate184

Shape181.geometry = LineSet182

HAnimSegment177.children.append(Shape181)

HAnimJoint176.children.append(HAnimSegment177)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.DEF = "hanim_l_talocrural"
HAnimJoint185.name = "l_talocrural"
HAnimJoint185.center = [0.1101,0.0656,-0.0736]
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.DEF = "hanim_l_talus"
HAnimSegment186.name = "l_talus"
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.description = "HAnimJoint l_talocrural, HAnimSegment l_talus"

HAnimSegment186.children.append(TouchSensor187)
Transform188 = x3d.Transform()
Transform188.translation = [0.1101,0.0656,-0.0736]
Shape189 = x3d.Shape()
Shape189.USE = "HAnimJointShape"

Transform188.children.append(Shape189)

HAnimSegment186.children.append(Transform188)
Shape190 = x3d.Shape()
LineSet191 = x3d.LineSet()
LineSet191.vertexCount = [2]
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA"

LineSet191.color = ColorRGBA192
Coordinate193 = x3d.Coordinate()
Coordinate193.point = [(0.1101, 0.0656, -0.0736),(0.1086, 0.0001, -0.0368)]

LineSet191.coord = Coordinate193

Shape190.geometry = LineSet191

HAnimSegment186.children.append(Shape190)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.vertexCount = [2]
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.USE = "HAnimSiteLineColorRGBA"

LineSet195.color = ColorRGBA196
Coordinate197 = x3d.Coordinate()
Coordinate197.point = [(0.1101, 0.0656, -0.0736),(0.1308, 0.0597, -0.1032)]

LineSet195.coord = Coordinate197

Shape194.geometry = LineSet195

HAnimSegment186.children.append(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.vertexCount = [2]
ColorRGBA200 = x3d.ColorRGBA()
ColorRGBA200.USE = "HAnimSiteLineColorRGBA"

LineSet199.color = ColorRGBA200
Coordinate201 = x3d.Coordinate()
Coordinate201.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0716, -0.0881)]

LineSet199.coord = Coordinate201

Shape198.geometry = LineSet199

HAnimSegment186.children.append(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.vertexCount = [2]
ColorRGBA204 = x3d.ColorRGBA()
ColorRGBA204.USE = "HAnimSiteLineColorRGBA"

LineSet203.color = ColorRGBA204
Coordinate205 = x3d.Coordinate()
Coordinate205.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0575, -0.0943)]

LineSet203.coord = Coordinate205

Shape202.geometry = LineSet203

HAnimSegment186.children.append(Shape202)
Shape206 = x3d.Shape()
LineSet207 = x3d.LineSet()
LineSet207.vertexCount = [2]
ColorRGBA208 = x3d.ColorRGBA()
ColorRGBA208.USE = "HAnimSiteLineColorRGBA"

LineSet207.color = ColorRGBA208
Coordinate209 = x3d.Coordinate()
Coordinate209.point = [(0.1101, 0.0656, -0.0736),(0.0974, 0.0259, -0.1171)]

LineSet207.coord = Coordinate209

Shape206.geometry = LineSet207

HAnimSegment186.children.append(Shape206)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite210.name = "l_lateral_malleolus_pt"
HAnimSite210.translation = [0.1308,0.0597,-0.1032]
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.description = "HAnimSite l_lateral_malleolus_pt"

HAnimSite210.children.append(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.USE = "HAnimSiteShape"

HAnimSite210.children.append(Shape212)

HAnimSegment186.children.append(HAnimSite210)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite213.name = "l_medial_malleolus_pt"
HAnimSite213.translation = [0.089,0.0716,-0.0881]
TouchSensor214 = x3d.TouchSensor()
TouchSensor214.description = "HAnimSite l_medial_malleolus_pt"

HAnimSite213.children.append(TouchSensor214)
Shape215 = x3d.Shape()
Shape215.USE = "HAnimSiteShape"

HAnimSite213.children.append(Shape215)

HAnimSegment186.children.append(HAnimSite213)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.DEF = "hanim_l_sphyrion_pt"
HAnimSite216.name = "l_sphyrion_pt"
HAnimSite216.translation = [0.089,0.0575,-0.0943]
TouchSensor217 = x3d.TouchSensor()
TouchSensor217.description = "HAnimSite l_sphyrion_pt"

HAnimSite216.children.append(TouchSensor217)
Shape218 = x3d.Shape()
Shape218.USE = "HAnimSiteShape"

HAnimSite216.children.append(Shape218)

HAnimSegment186.children.append(HAnimSite216)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite219.name = "l_calcaneus_posterior_pt"
HAnimSite219.translation = [0.0974,0.0259,-0.1171]
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.description = "HAnimSite l_calcaneous_post_pt"

HAnimSite219.children.append(TouchSensor220)
Shape221 = x3d.Shape()
Shape221.USE = "HAnimSiteShape"

HAnimSite219.children.append(Shape221)

HAnimSegment186.children.append(HAnimSite219)

HAnimJoint185.children.append(HAnimSegment186)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint222.name = "l_tarsometatarsal_2"
HAnimJoint222.center = [0.1086,0.0001,-0.0368]
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.DEF = "hanim_l_metatarsal_2"
HAnimSegment223.name = "l_metatarsal_2"
TouchSensor224 = x3d.TouchSensor()
TouchSensor224.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2"

HAnimSegment223.children.append(TouchSensor224)
Transform225 = x3d.Transform()
Transform225.translation = [0.1086,0.0001,-0.0368]
Shape226 = x3d.Shape()
Shape226.USE = "HAnimJointShape"

Transform225.children.append(Shape226)

HAnimSegment223.children.append(Transform225)
Shape227 = x3d.Shape()
LineSet228 = x3d.LineSet()
LineSet228.vertexCount = [2]
ColorRGBA229 = x3d.ColorRGBA()
ColorRGBA229.USE = "HAnimSegmentLineColorRGBA"

LineSet228.color = ColorRGBA229
Coordinate230 = x3d.Coordinate()
Coordinate230.point = [(0.1086, 0.0001, -0.0368),(0.1086, 0.0001, 0.0368)]

LineSet228.coord = Coordinate230

Shape227.geometry = LineSet228

HAnimSegment223.children.append(Shape227)

HAnimJoint222.children.append(HAnimSegment223)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint231.name = "l_metatarsophalangeal_2"
HAnimJoint231.center = [0.1086,0.0001,0.0368]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.DEF = "hanim_l_tarsal_proximal_phalanx_2"
HAnimSegment232.name = "l_tarsal_proximal_phalanx_2"
TouchSensor233 = x3d.TouchSensor()
TouchSensor233.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2"

HAnimSegment232.children.append(TouchSensor233)
Transform234 = x3d.Transform()
Transform234.translation = [0.1086,0.0001,0.0368]
Shape235 = x3d.Shape()
Shape235.USE = "HAnimJointShape"

Transform234.children.append(Shape235)

HAnimSegment232.children.append(Transform234)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.vertexCount = [2]
ColorRGBA238 = x3d.ColorRGBA()
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA"

LineSet237.color = ColorRGBA238
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(0.1086, 0.0001, 0.0368),(0.1086, 0, 0.0762)]

LineSet237.coord = Coordinate239

Shape236.geometry = LineSet237

HAnimSegment232.children.append(Shape236)
Shape240 = x3d.Shape()
LineSet241 = x3d.LineSet()
LineSet241.vertexCount = [2]
ColorRGBA242 = x3d.ColorRGBA()
ColorRGBA242.USE = "HAnimSiteLineColorRGBA"

LineSet241.color = ColorRGBA242
Coordinate243 = x3d.Coordinate()
Coordinate243.point = [(0.1086, 0.0001, 0.0368),(0.0816, 0.0232, 0.0106)]

LineSet241.coord = Coordinate243

Shape240.geometry = LineSet241

HAnimSegment232.children.append(Shape240)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite244.name = "l_metatarsal_phalanx_1_pt"
HAnimSite244.translation = [0.0816,0.0232,0.0106]
TouchSensor245 = x3d.TouchSensor()
TouchSensor245.description = "HAnimSite l_metatarsal_pha1_pt"

HAnimSite244.children.append(TouchSensor245)
Shape246 = x3d.Shape()
Shape246.USE = "HAnimSiteShape"

HAnimSite244.children.append(Shape246)

HAnimSegment232.children.append(HAnimSite244)

HAnimJoint231.children.append(HAnimSegment232)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint247.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint247.center = [0.1086,0,0.0762]
HAnimSegment248 = x3d.HAnimSegment()
HAnimSegment248.DEF = "hanim_l_tarsal_distal_phalanx_2"
HAnimSegment248.name = "l_tarsal_distal_phalanx_2"
TouchSensor249 = x3d.TouchSensor()
TouchSensor249.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2"

HAnimSegment248.children.append(TouchSensor249)
Transform250 = x3d.Transform()
Transform250.translation = [0.1086,0,0.0762]
Shape251 = x3d.Shape()
Shape251.USE = "HAnimJointShape"

Transform250.children.append(Shape251)

HAnimSegment248.children.append(Transform250)
Shape252 = x3d.Shape()
LineSet253 = x3d.LineSet()
LineSet253.vertexCount = [2]
ColorRGBA254 = x3d.ColorRGBA()
ColorRGBA254.USE = "HAnimSiteLineColorRGBA"

LineSet253.color = ColorRGBA254
Coordinate255 = x3d.Coordinate()
Coordinate255.point = [(0.1086, 0, 0.0762),(0.1354, 0.0016, 0.1476)]

LineSet253.coord = Coordinate255

Shape252.geometry = LineSet253

HAnimSegment248.children.append(Shape252)
Shape256 = x3d.Shape()
LineSet257 = x3d.LineSet()
LineSet257.vertexCount = [2]
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.USE = "HAnimSiteLineColorRGBA"

LineSet257.color = ColorRGBA258
Coordinate259 = x3d.Coordinate()
Coordinate259.point = [(0.1086, 0, 0.0762),(0.1825, 0.007, 0.0928)]

LineSet257.coord = Coordinate259

Shape256.geometry = LineSet257

HAnimSegment248.children.append(Shape256)
Shape260 = x3d.Shape()
LineSet261 = x3d.LineSet()
LineSet261.vertexCount = [2]
ColorRGBA262 = x3d.ColorRGBA()
ColorRGBA262.USE = "HAnimSiteLineColorRGBA"

LineSet261.color = ColorRGBA262
Coordinate263 = x3d.Coordinate()
Coordinate263.point = [(0.1086, 0, 0.0762),(0.1195, 0.0079, 0.1433)]

LineSet261.coord = Coordinate263

Shape260.geometry = LineSet261

HAnimSegment248.children.append(Shape260)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.DEF = "hanim_l_forefoot_tip_pt"
HAnimSite264.name = "l_forefoot_tip_pt"
HAnimSite264.translation = [0.1354,0.0016,0.1476]
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.description = "HAnimSite l_forefoot_tip"

HAnimSite264.children.append(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.USE = "HAnimSiteShape"

HAnimSite264.children.append(Shape266)

HAnimSegment248.children.append(HAnimSite264)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite267.name = "l_metatarsal_phalanx_5_pt"
HAnimSite267.translation = [0.1825,0.007,0.0928]
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.description = "HAnimSite l_metatarsal_pha5_pt"

HAnimSite267.children.append(TouchSensor268)
Shape269 = x3d.Shape()
Shape269.USE = "HAnimSiteShape"

HAnimSite267.children.append(Shape269)

HAnimSegment248.children.append(HAnimSite267)
HAnimSite270 = x3d.HAnimSite()
HAnimSite270.DEF = "hanim_l_tarsal_distal_phalanx_2_pt"
HAnimSite270.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite270.translation = [0.1195,0.0079,0.1433]
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.description = "HAnimSite l_digit2_pt"

HAnimSite270.children.append(TouchSensor271)
Shape272 = x3d.Shape()
Shape272.USE = "HAnimSiteShape"

HAnimSite270.children.append(Shape272)

HAnimSegment248.children.append(HAnimSite270)

HAnimJoint247.children.append(HAnimSegment248)

HAnimJoint231.children.append(HAnimJoint247)

HAnimJoint222.children.append(HAnimJoint231)

HAnimJoint185.children.append(HAnimJoint222)

HAnimJoint176.children.append(HAnimJoint185)

HAnimJoint146.children.append(HAnimJoint176)

HAnimJoint66.children.append(HAnimJoint146)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.DEF = "hanim_r_hip"
HAnimJoint273.name = "r_hip"
HAnimJoint273.center = [-0.0961,0.9124,-0.0001]
HAnimSegment274 = x3d.HAnimSegment()
HAnimSegment274.DEF = "hanim_r_thigh"
HAnimSegment274.name = "r_thigh"
TouchSensor275 = x3d.TouchSensor()
TouchSensor275.description = "HAnimJoint r_hip, HAnimSegment r_thigh"

HAnimSegment274.children.append(TouchSensor275)
Transform276 = x3d.Transform()
Transform276.translation = [-0.0961,0.9124,-0.0001]
Shape277 = x3d.Shape()
Shape277.USE = "HAnimJointShape"

Transform276.children.append(Shape277)

HAnimSegment274.children.append(Transform276)
Shape278 = x3d.Shape()
LineSet279 = x3d.LineSet()
LineSet279.vertexCount = [2]
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA"

LineSet279.color = ColorRGBA280
Coordinate281 = x3d.Coordinate()
Coordinate281.point = [(-0.0961, 0.9124, -0.0001),(-0.104, 0.4867, 0.0308)]

LineSet279.coord = Coordinate281

Shape278.geometry = LineSet279

HAnimSegment274.children.append(Shape278)
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.vertexCount = [2]
ColorRGBA284 = x3d.ColorRGBA()
ColorRGBA284.USE = "HAnimSiteLineColorRGBA"

LineSet283.color = ColorRGBA284
Coordinate285 = x3d.Coordinate()
Coordinate285.point = [(-0.0961, 0.9124, -0.0001),(-0.0825, 0.4932, -0.0326)]

LineSet283.coord = Coordinate285

Shape282.geometry = LineSet283

HAnimSegment274.children.append(Shape282)
Shape286 = x3d.Shape()
LineSet287 = x3d.LineSet()
LineSet287.vertexCount = [2]
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.USE = "HAnimSiteLineColorRGBA"

LineSet287.color = ColorRGBA288
Coordinate289 = x3d.Coordinate()
Coordinate289.point = [(-0.0961, 0.9124, -0.0001),(-0.1421, 0.4992, 0.031)]

LineSet287.coord = Coordinate289

Shape286.geometry = LineSet287

HAnimSegment274.children.append(Shape286)
Shape290 = x3d.Shape()
LineSet291 = x3d.LineSet()
LineSet291.vertexCount = [2]
ColorRGBA292 = x3d.ColorRGBA()
ColorRGBA292.USE = "HAnimSiteLineColorRGBA"

LineSet291.color = ColorRGBA292
Coordinate293 = x3d.Coordinate()
Coordinate293.point = [(-0.0961, 0.9124, -0.0001),(-0.0221, 0.5014, 0.0289)]

LineSet291.coord = Coordinate293

Shape290.geometry = LineSet291

HAnimSegment274.children.append(Shape290)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.DEF = "hanim_r_knee_crease_pt"
HAnimSite294.name = "r_knee_crease_pt"
HAnimSite294.translation = [-0.0825,0.4932,-0.0326]
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.description = "HAnimSite r_knee_crease_pt"

HAnimSite294.children.append(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.USE = "HAnimSiteShape"

HAnimSite294.children.append(Shape296)

HAnimSegment274.children.append(HAnimSite294)
HAnimSite297 = x3d.HAnimSite()
HAnimSite297.DEF = "hanim_r_femoral_lateral_epicondyle_pt"
HAnimSite297.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite297.translation = [-0.1421,0.4992,0.031]
TouchSensor298 = x3d.TouchSensor()
TouchSensor298.description = "HAnimSite r_femoral_lateral_epicn_pt"

HAnimSite297.children.append(TouchSensor298)
Shape299 = x3d.Shape()
Shape299.USE = "HAnimSiteShape"

HAnimSite297.children.append(Shape299)

HAnimSegment274.children.append(HAnimSite297)
HAnimSite300 = x3d.HAnimSite()
HAnimSite300.DEF = "hanim_r_femoral_medial_epicondyle_pt"
HAnimSite300.name = "r_femoral_medial_epicondyle_pt"
HAnimSite300.translation = [-0.0221,0.5014,0.0289]
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.description = "HAnimSite r_femoral_medial_epicn_pt"

HAnimSite300.children.append(TouchSensor301)
Shape302 = x3d.Shape()
Shape302.USE = "HAnimSiteShape"

HAnimSite300.children.append(Shape302)

HAnimSegment274.children.append(HAnimSite300)

HAnimJoint273.children.append(HAnimSegment274)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.DEF = "hanim_r_knee"
HAnimJoint303.name = "r_knee"
HAnimJoint303.center = [-0.104,0.4867,0.0308]
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.DEF = "hanim_r_calf"
HAnimSegment304.name = "r_calf"
TouchSensor305 = x3d.TouchSensor()
TouchSensor305.description = "HAnimJoint r_knee, HAnimSegment r_calf"

HAnimSegment304.children.append(TouchSensor305)
Transform306 = x3d.Transform()
Transform306.translation = [-0.104,0.4867,0.0308]
Shape307 = x3d.Shape()
Shape307.USE = "HAnimJointShape"

Transform306.children.append(Shape307)

HAnimSegment304.children.append(Transform306)
Shape308 = x3d.Shape()
LineSet309 = x3d.LineSet()
LineSet309.vertexCount = [2]
ColorRGBA310 = x3d.ColorRGBA()
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA"

LineSet309.color = ColorRGBA310
Coordinate311 = x3d.Coordinate()
Coordinate311.point = [(-0.104, 0.4867, 0.0308),(-0.1101, 0.0656, -0.0736)]

LineSet309.coord = Coordinate311

Shape308.geometry = LineSet309

HAnimSegment304.children.append(Shape308)

HAnimJoint303.children.append(HAnimSegment304)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.DEF = "hanim_r_talocrural"
HAnimJoint312.name = "r_talocrural"
HAnimJoint312.center = [-0.1101,0.0656,-0.0736]
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.DEF = "hanim_r_talus"
HAnimSegment313.name = "r_talus"
TouchSensor314 = x3d.TouchSensor()
TouchSensor314.description = "HAnimJoint r_talocrural, HAnimSegment r_talus"

HAnimSegment313.children.append(TouchSensor314)
Transform315 = x3d.Transform()
Transform315.translation = [-0.1101,0.0656,-0.0736]
Shape316 = x3d.Shape()
Shape316.USE = "HAnimJointShape"

Transform315.children.append(Shape316)

HAnimSegment313.children.append(Transform315)
Shape317 = x3d.Shape()
LineSet318 = x3d.LineSet()
LineSet318.vertexCount = [2]
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA"

LineSet318.color = ColorRGBA319
Coordinate320 = x3d.Coordinate()
Coordinate320.point = [(-0.1101, 0.0656, -0.0736),(-0.1086, 0.0001, -0.0368)]

LineSet318.coord = Coordinate320

Shape317.geometry = LineSet318

HAnimSegment313.children.append(Shape317)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.vertexCount = [2]
ColorRGBA323 = x3d.ColorRGBA()
ColorRGBA323.USE = "HAnimSiteLineColorRGBA"

LineSet322.color = ColorRGBA323
Coordinate324 = x3d.Coordinate()
Coordinate324.point = [(-0.1101, 0.0656, -0.0736),(-0.1006, 0.0658, -0.1075)]

LineSet322.coord = Coordinate324

Shape321.geometry = LineSet322

HAnimSegment313.children.append(Shape321)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.vertexCount = [2]
ColorRGBA327 = x3d.ColorRGBA()
ColorRGBA327.USE = "HAnimSiteLineColorRGBA"

LineSet326.color = ColorRGBA327
Coordinate328 = x3d.Coordinate()
Coordinate328.point = [(-0.1101, 0.0656, -0.0736),(-0.0591, 0.076, -0.0928)]

LineSet326.coord = Coordinate328

Shape325.geometry = LineSet326

HAnimSegment313.children.append(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.vertexCount = [2]
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.USE = "HAnimSiteLineColorRGBA"

LineSet330.color = ColorRGBA331
Coordinate332 = x3d.Coordinate()
Coordinate332.point = [(-0.1101, 0.0656, -0.0736),(-0.0603, 0.061, -0.1002)]

LineSet330.coord = Coordinate332

Shape329.geometry = LineSet330

HAnimSegment313.children.append(Shape329)
Shape333 = x3d.Shape()
LineSet334 = x3d.LineSet()
LineSet334.vertexCount = [2]
ColorRGBA335 = x3d.ColorRGBA()
ColorRGBA335.USE = "HAnimSiteLineColorRGBA"

LineSet334.color = ColorRGBA335
Coordinate336 = x3d.Coordinate()
Coordinate336.point = [(-0.1101, 0.0656, -0.0736),(-0.0692, 0.0297, -0.1221)]

LineSet334.coord = Coordinate336

Shape333.geometry = LineSet334

HAnimSegment313.children.append(Shape333)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite337.name = "r_lateral_malleolus_pt"
HAnimSite337.translation = [-0.1006,0.0658,-0.1075]
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.description = "HAnimSite r_lateral_malleolus_pt"

HAnimSite337.children.append(TouchSensor338)
Shape339 = x3d.Shape()
Shape339.USE = "HAnimSiteShape"

HAnimSite337.children.append(Shape339)

HAnimSegment313.children.append(HAnimSite337)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite340.name = "r_medial_malleolus_pt"
HAnimSite340.translation = [-0.0591,0.076,-0.0928]
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.description = "HAnimSite r_medial_malleolus_pt"

HAnimSite340.children.append(TouchSensor341)
Shape342 = x3d.Shape()
Shape342.USE = "HAnimSiteShape"

HAnimSite340.children.append(Shape342)

HAnimSegment313.children.append(HAnimSite340)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.DEF = "hanim_r_sphyrion_pt"
HAnimSite343.name = "r_sphyrion_pt"
HAnimSite343.translation = [-0.0603,0.061,-0.1002]
TouchSensor344 = x3d.TouchSensor()
TouchSensor344.description = "HAnimSite r_sphyrion_pt"

HAnimSite343.children.append(TouchSensor344)
Shape345 = x3d.Shape()
Shape345.USE = "HAnimSiteShape"

HAnimSite343.children.append(Shape345)

HAnimSegment313.children.append(HAnimSite343)
HAnimSite346 = x3d.HAnimSite()
HAnimSite346.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite346.name = "r_calcaneus_posterior_pt"
HAnimSite346.translation = [-0.0692,0.0297,-0.1221]
TouchSensor347 = x3d.TouchSensor()
TouchSensor347.description = "HAnimSite r_calcaneous_post_pt"

HAnimSite346.children.append(TouchSensor347)
Shape348 = x3d.Shape()
Shape348.USE = "HAnimSiteShape"

HAnimSite346.children.append(Shape348)

HAnimSegment313.children.append(HAnimSite346)

HAnimJoint312.children.append(HAnimSegment313)
HAnimJoint349 = x3d.HAnimJoint()
HAnimJoint349.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint349.name = "r_tarsometatarsal_2"
HAnimJoint349.center = [-0.1086,0.0001,-0.0368]
HAnimSegment350 = x3d.HAnimSegment()
HAnimSegment350.DEF = "hanim_r_metatarsal_2"
HAnimSegment350.name = "r_metatarsal_2"
TouchSensor351 = x3d.TouchSensor()
TouchSensor351.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2"

HAnimSegment350.children.append(TouchSensor351)
Transform352 = x3d.Transform()
Transform352.translation = [-0.1086,0.0001,-0.0368]
Shape353 = x3d.Shape()
Shape353.USE = "HAnimJointShape"

Transform352.children.append(Shape353)

HAnimSegment350.children.append(Transform352)
Shape354 = x3d.Shape()
LineSet355 = x3d.LineSet()
LineSet355.vertexCount = [2]
ColorRGBA356 = x3d.ColorRGBA()
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA"

LineSet355.color = ColorRGBA356
Coordinate357 = x3d.Coordinate()
Coordinate357.point = [(-0.1086, 0.0001, -0.0368),(-0.1086, 0.0001, 0.0368)]

LineSet355.coord = Coordinate357

Shape354.geometry = LineSet355

HAnimSegment350.children.append(Shape354)

HAnimJoint349.children.append(HAnimSegment350)
HAnimJoint358 = x3d.HAnimJoint()
HAnimJoint358.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint358.name = "r_metatarsophalangeal_2"
HAnimJoint358.center = [-0.1086,0.0001,0.0368]
HAnimSegment359 = x3d.HAnimSegment()
HAnimSegment359.DEF = "hanim_r_tarsal_proximal_phalanx_2"
HAnimSegment359.name = "r_tarsal_proximal_phalanx_2"
TouchSensor360 = x3d.TouchSensor()
TouchSensor360.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2"

HAnimSegment359.children.append(TouchSensor360)
Transform361 = x3d.Transform()
Transform361.translation = [-0.1086,0.0001,0.0368]
Shape362 = x3d.Shape()
Shape362.USE = "HAnimJointShape"

Transform361.children.append(Shape362)

HAnimSegment359.children.append(Transform361)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.vertexCount = [2]
ColorRGBA365 = x3d.ColorRGBA()
ColorRGBA365.USE = "HAnimSegmentLineColorRGBA"

LineSet364.color = ColorRGBA365
Coordinate366 = x3d.Coordinate()
Coordinate366.point = [(-0.1086, 0.0001, 0.0368),(-0.1086, 0, 0.0762)]

LineSet364.coord = Coordinate366

Shape363.geometry = LineSet364

HAnimSegment359.children.append(Shape363)
Shape367 = x3d.Shape()
LineSet368 = x3d.LineSet()
LineSet368.vertexCount = [2]
ColorRGBA369 = x3d.ColorRGBA()
ColorRGBA369.USE = "HAnimSiteLineColorRGBA"

LineSet368.color = ColorRGBA369
Coordinate370 = x3d.Coordinate()
Coordinate370.point = [(-0.1086, 0.0001, 0.0368),(-0.0521, 0.026, 0.0127)]

LineSet368.coord = Coordinate370

Shape367.geometry = LineSet368

HAnimSegment359.children.append(Shape367)
HAnimSite371 = x3d.HAnimSite()
HAnimSite371.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite371.name = "r_metatarsal_phalanx_1_pt"
HAnimSite371.translation = [-0.0521,0.026,0.0127]
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.description = "HAnimSite r_metatarsal_pha1_pt"

HAnimSite371.children.append(TouchSensor372)
Shape373 = x3d.Shape()
Shape373.USE = "HAnimSiteShape"

HAnimSite371.children.append(Shape373)

HAnimSegment359.children.append(HAnimSite371)

HAnimJoint358.children.append(HAnimSegment359)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint374.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint374.center = [-0.1086,0,0.0762]
HAnimSegment375 = x3d.HAnimSegment()
HAnimSegment375.DEF = "hanim_r_tarsal_distal_phalanx_2"
HAnimSegment375.name = "r_tarsal_distal_phalanx_2"
TouchSensor376 = x3d.TouchSensor()
TouchSensor376.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2"

HAnimSegment375.children.append(TouchSensor376)
Transform377 = x3d.Transform()
Transform377.translation = [-0.1086,0,0.0762]
Shape378 = x3d.Shape()
Shape378.USE = "HAnimJointShape"

Transform377.children.append(Shape378)

HAnimSegment375.children.append(Transform377)
Shape379 = x3d.Shape()
LineSet380 = x3d.LineSet()
LineSet380.vertexCount = [2]
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.USE = "HAnimSiteLineColorRGBA"

LineSet380.color = ColorRGBA381
Coordinate382 = x3d.Coordinate()
Coordinate382.point = [(-0.1086, 0, 0.0762),(-0.1043, 0.0227, 0.145)]

LineSet380.coord = Coordinate382

Shape379.geometry = LineSet380

HAnimSegment375.children.append(Shape379)
Shape383 = x3d.Shape()
LineSet384 = x3d.LineSet()
LineSet384.vertexCount = [2]
ColorRGBA385 = x3d.ColorRGBA()
ColorRGBA385.USE = "HAnimSiteLineColorRGBA"

LineSet384.color = ColorRGBA385
Coordinate386 = x3d.Coordinate()
Coordinate386.point = [(-0.1086, 0, 0.0762),(-0.1523, 0.0166, 0.0895)]

LineSet384.coord = Coordinate386

Shape383.geometry = LineSet384

HAnimSegment375.children.append(Shape383)
Shape387 = x3d.Shape()
LineSet388 = x3d.LineSet()
LineSet388.vertexCount = [2]
ColorRGBA389 = x3d.ColorRGBA()
ColorRGBA389.USE = "HAnimSiteLineColorRGBA"

LineSet388.color = ColorRGBA389
Coordinate390 = x3d.Coordinate()
Coordinate390.point = [(-0.1086, 0, 0.0762),(-0.0883, 0.0134, 0.1383)]

LineSet388.coord = Coordinate390

Shape387.geometry = LineSet388

HAnimSegment375.children.append(Shape387)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.DEF = "hanim_r_forefoot_tip_pt"
HAnimSite391.name = "r_forefoot_tip_pt"
HAnimSite391.translation = [-0.1043,0.0227,0.145]
TouchSensor392 = x3d.TouchSensor()
TouchSensor392.description = "HAnimSite r_forefoot_tip"

HAnimSite391.children.append(TouchSensor392)
Shape393 = x3d.Shape()
Shape393.USE = "HAnimSiteShape"

HAnimSite391.children.append(Shape393)

HAnimSegment375.children.append(HAnimSite391)
HAnimSite394 = x3d.HAnimSite()
HAnimSite394.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite394.name = "r_metatarsal_phalanx_5_pt"
HAnimSite394.translation = [-0.1523,0.0166,0.0895]
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.description = "HAnimSite r_metatarsal_pha5_pt"

HAnimSite394.children.append(TouchSensor395)
Shape396 = x3d.Shape()
Shape396.USE = "HAnimSiteShape"

HAnimSite394.children.append(Shape396)

HAnimSegment375.children.append(HAnimSite394)
HAnimSite397 = x3d.HAnimSite()
HAnimSite397.DEF = "hanim_r_tarsal_distal_phalanx_2_pt"
HAnimSite397.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite397.translation = [-0.0883,0.0134,0.1383]
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.description = "HAnimSite r_digit2_pt"

HAnimSite397.children.append(TouchSensor398)
Shape399 = x3d.Shape()
Shape399.USE = "HAnimSiteShape"

HAnimSite397.children.append(Shape399)

HAnimSegment375.children.append(HAnimSite397)

HAnimJoint374.children.append(HAnimSegment375)

HAnimJoint358.children.append(HAnimJoint374)

HAnimJoint349.children.append(HAnimJoint358)

HAnimJoint312.children.append(HAnimJoint349)

HAnimJoint303.children.append(HAnimJoint312)

HAnimJoint273.children.append(HAnimJoint303)

HAnimJoint66.children.append(HAnimJoint273)

HAnimJoint50.children.append(HAnimJoint66)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.DEF = "hanim_vl5"
HAnimJoint400.name = "vl5"
HAnimJoint400.center = [0.0028,1.0568,-0.0776]
HAnimSegment401 = x3d.HAnimSegment()
HAnimSegment401.DEF = "hanim_l5"
HAnimSegment401.name = "l5"
TouchSensor402 = x3d.TouchSensor()
TouchSensor402.description = "HAnimJoint vl5, HAnimSegment l5"

HAnimSegment401.children.append(TouchSensor402)
Transform403 = x3d.Transform()
Transform403.translation = [0.0028,1.0568,-0.0776]
Shape404 = x3d.Shape()
Shape404.USE = "HAnimJointShape"

Transform403.children.append(Shape404)

HAnimSegment401.children.append(Transform403)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.vertexCount = [2]
ColorRGBA407 = x3d.ColorRGBA()
ColorRGBA407.USE = "HAnimSegmentLineColorRGBA"

LineSet406.color = ColorRGBA407
Coordinate408 = x3d.Coordinate()
Coordinate408.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet406.coord = Coordinate408

Shape405.geometry = LineSet406

HAnimSegment401.children.append(Shape405)
Shape409 = x3d.Shape()
LineSet410 = x3d.LineSet()
LineSet410.vertexCount = [2]
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.USE = "HAnimSiteLineColorRGBA"

LineSet410.color = ColorRGBA411
Coordinate412 = x3d.Coordinate()
Coordinate412.point = [(0.0028, 1.0568, -0.0776),(0, 1.0915, -0.1091)]

LineSet410.coord = Coordinate412

Shape409.geometry = LineSet410

HAnimSegment401.children.append(Shape409)
Shape413 = x3d.Shape()
LineSet414 = x3d.LineSet()
LineSet414.vertexCount = [2]
ColorRGBA415 = x3d.ColorRGBA()
ColorRGBA415.USE = "HAnimSiteLineColorRGBA"

LineSet414.color = ColorRGBA415
Coordinate416 = x3d.Coordinate()
Coordinate416.point = [(0.0028, 1.0568, -0.0776),(0.0069, 1.0966, 0.1017)]

LineSet414.coord = Coordinate416

Shape413.geometry = LineSet414

HAnimSegment401.children.append(Shape413)
HAnimSite417 = x3d.HAnimSite()
HAnimSite417.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite417.name = "waist_preferred_posterior_pt"
HAnimSite417.translation = [0,1.0915,-0.1091]
TouchSensor418 = x3d.TouchSensor()
TouchSensor418.description = "HAnimSite waist_preferred_post_pt"

HAnimSite417.children.append(TouchSensor418)
Shape419 = x3d.Shape()
Shape419.USE = "HAnimSiteShape"

HAnimSite417.children.append(Shape419)

HAnimSegment401.children.append(HAnimSite417)
HAnimSite420 = x3d.HAnimSite()
HAnimSite420.DEF = "hanim_navel_pt"
HAnimSite420.name = "navel_pt"
HAnimSite420.translation = [0.0069,1.0966,0.1017]
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.description = "HAnimSite navel_pt"

HAnimSite420.children.append(TouchSensor421)
Shape422 = x3d.Shape()
Shape422.USE = "HAnimSiteShape"

HAnimSite420.children.append(Shape422)

HAnimSegment401.children.append(HAnimSite420)

HAnimJoint400.children.append(HAnimSegment401)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.DEF = "hanim_vl4"
HAnimJoint423.name = "vl4"
HAnimJoint423.center = [0.0035,1.0925,-0.0787]
HAnimSegment424 = x3d.HAnimSegment()
HAnimSegment424.DEF = "hanim_l4"
HAnimSegment424.name = "l4"
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.description = "HAnimJoint vl4, HAnimSegment l4"

HAnimSegment424.children.append(TouchSensor425)
Transform426 = x3d.Transform()
Transform426.translation = [0.0035,1.0925,-0.0787]
Shape427 = x3d.Shape()
Shape427.USE = "HAnimJointShape"

Transform426.children.append(Shape427)

HAnimSegment424.children.append(Transform426)
Shape428 = x3d.Shape()
LineSet429 = x3d.LineSet()
LineSet429.vertexCount = [2]
ColorRGBA430 = x3d.ColorRGBA()
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA"

LineSet429.color = ColorRGBA430
Coordinate431 = x3d.Coordinate()
Coordinate431.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet429.coord = Coordinate431

Shape428.geometry = LineSet429

HAnimSegment424.children.append(Shape428)

HAnimJoint423.children.append(HAnimSegment424)
HAnimJoint432 = x3d.HAnimJoint()
HAnimJoint432.DEF = "hanim_vl3"
HAnimJoint432.name = "vl3"
HAnimJoint432.center = [0.0041,1.1276,-0.0796]
HAnimSegment433 = x3d.HAnimSegment()
HAnimSegment433.DEF = "hanim_l3"
HAnimSegment433.name = "l3"
TouchSensor434 = x3d.TouchSensor()
TouchSensor434.description = "HAnimJoint vl3, HAnimSegment l3"

HAnimSegment433.children.append(TouchSensor434)
Transform435 = x3d.Transform()
Transform435.translation = [0.0041,1.1276,-0.0796]
Shape436 = x3d.Shape()
Shape436.USE = "HAnimJointShape"

Transform435.children.append(Shape436)

HAnimSegment433.children.append(Transform435)
Shape437 = x3d.Shape()
LineSet438 = x3d.LineSet()
LineSet438.vertexCount = [2]
ColorRGBA439 = x3d.ColorRGBA()
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA"

LineSet438.color = ColorRGBA439
Coordinate440 = x3d.Coordinate()
Coordinate440.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet438.coord = Coordinate440

Shape437.geometry = LineSet438

HAnimSegment433.children.append(Shape437)

HAnimJoint432.children.append(HAnimSegment433)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.DEF = "hanim_vl2"
HAnimJoint441.name = "vl2"
HAnimJoint441.center = [0.0045,1.1546,-0.08]
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.DEF = "hanim_l2"
HAnimSegment442.name = "l2"
TouchSensor443 = x3d.TouchSensor()
TouchSensor443.description = "HAnimJoint vl2, HAnimSegment l2"

HAnimSegment442.children.append(TouchSensor443)
Transform444 = x3d.Transform()
Transform444.translation = [0.0045,1.1546,-0.08]
Shape445 = x3d.Shape()
Shape445.USE = "HAnimJointShape"

Transform444.children.append(Shape445)

HAnimSegment442.children.append(Transform444)
Shape446 = x3d.Shape()
LineSet447 = x3d.LineSet()
LineSet447.vertexCount = [2]
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA"

LineSet447.color = ColorRGBA448
Coordinate449 = x3d.Coordinate()
Coordinate449.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet447.coord = Coordinate449

Shape446.geometry = LineSet447

HAnimSegment442.children.append(Shape446)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.vertexCount = [2]
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.USE = "HAnimSiteLineColorRGBA"

LineSet451.color = ColorRGBA452
Coordinate453 = x3d.Coordinate()
Coordinate453.point = [(0.0045, 1.1546, -0.08),(-0.0711, 1.1941, 0.1016)]

LineSet451.coord = Coordinate453

Shape450.geometry = LineSet451

HAnimSegment442.children.append(Shape450)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.vertexCount = [2]
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.USE = "HAnimSiteLineColorRGBA"

LineSet455.color = ColorRGBA456
Coordinate457 = x3d.Coordinate()
Coordinate457.point = [(0.0045, 1.1546, -0.08),(0.0871, 1.1925, 0.0992)]

LineSet455.coord = Coordinate457

Shape454.geometry = LineSet455

HAnimSegment442.children.append(Shape454)
Shape458 = x3d.Shape()
LineSet459 = x3d.LineSet()
LineSet459.vertexCount = [2]
ColorRGBA460 = x3d.ColorRGBA()
ColorRGBA460.USE = "HAnimSiteLineColorRGBA"

LineSet459.color = ColorRGBA460
Coordinate461 = x3d.Coordinate()
Coordinate461.point = [(0.0045, 1.1546, -0.08),(0.0049, 1.1908, -0.1113)]

LineSet459.coord = Coordinate461

Shape458.geometry = LineSet459

HAnimSegment442.children.append(Shape458)
HAnimSite462 = x3d.HAnimSite()
HAnimSite462.DEF = "hanim_r_rib10_pt"
HAnimSite462.name = "r_rib10_pt"
HAnimSite462.translation = [-0.0711,1.1941,0.1016]
TouchSensor463 = x3d.TouchSensor()
TouchSensor463.description = "HAnimSite r_rib10_pt"

HAnimSite462.children.append(TouchSensor463)
Shape464 = x3d.Shape()
Shape464.USE = "HAnimSiteShape"

HAnimSite462.children.append(Shape464)

HAnimSegment442.children.append(HAnimSite462)
HAnimSite465 = x3d.HAnimSite()
HAnimSite465.DEF = "hanim_l_rib10_pt"
HAnimSite465.name = "l_rib10_pt"
HAnimSite465.translation = [0.0871,1.1925,0.0992]
TouchSensor466 = x3d.TouchSensor()
TouchSensor466.description = "HAnimSite l_rib10_pt"

HAnimSite465.children.append(TouchSensor466)
Shape467 = x3d.Shape()
Shape467.USE = "HAnimSiteShape"

HAnimSite465.children.append(Shape467)

HAnimSegment442.children.append(HAnimSite465)
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.DEF = "hanim_rib10_midspine_pt"
HAnimSite468.name = "rib10_midspine_pt"
HAnimSite468.translation = [0.0049,1.1908,-0.1113]
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimSite rib10_midspine_pt"

HAnimSite468.children.append(TouchSensor469)
Shape470 = x3d.Shape()
Shape470.USE = "HAnimSiteShape"

HAnimSite468.children.append(Shape470)

HAnimSegment442.children.append(HAnimSite468)

HAnimJoint441.children.append(HAnimSegment442)
HAnimJoint471 = x3d.HAnimJoint()
HAnimJoint471.DEF = "hanim_vl1"
HAnimJoint471.name = "vl1"
HAnimJoint471.center = [0.0048,1.1912,-0.0805]
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.DEF = "hanim_l1"
HAnimSegment472.name = "l1"
TouchSensor473 = x3d.TouchSensor()
TouchSensor473.description = "HAnimJoint vl1, HAnimSegment l1"

HAnimSegment472.children.append(TouchSensor473)
Transform474 = x3d.Transform()
Transform474.translation = [0.0048,1.1912,-0.0805]
Shape475 = x3d.Shape()
Shape475.USE = "HAnimJointShape"

Transform474.children.append(Shape475)

HAnimSegment472.children.append(Transform474)
Shape476 = x3d.Shape()
LineSet477 = x3d.LineSet()
LineSet477.vertexCount = [2]
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA"

LineSet477.color = ColorRGBA478
Coordinate479 = x3d.Coordinate()
Coordinate479.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet477.coord = Coordinate479

Shape476.geometry = LineSet477

HAnimSegment472.children.append(Shape476)

HAnimJoint471.children.append(HAnimSegment472)
HAnimJoint480 = x3d.HAnimJoint()
HAnimJoint480.DEF = "hanim_vt12"
HAnimJoint480.name = "vt12"
HAnimJoint480.center = [0.0051,1.2278,-0.0808]
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.DEF = "hanim_t12"
HAnimSegment481.name = "t12"
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.description = "HAnimJoint vt12, HAnimSegment t12"

HAnimSegment481.children.append(TouchSensor482)
Transform483 = x3d.Transform()
Transform483.translation = [0.0051,1.2278,-0.0808]
Shape484 = x3d.Shape()
Shape484.USE = "HAnimJointShape"

Transform483.children.append(Shape484)

HAnimSegment481.children.append(Transform483)
Shape485 = x3d.Shape()
LineSet486 = x3d.LineSet()
LineSet486.vertexCount = [2]
ColorRGBA487 = x3d.ColorRGBA()
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA"

LineSet486.color = ColorRGBA487
Coordinate488 = x3d.Coordinate()
Coordinate488.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet486.coord = Coordinate488

Shape485.geometry = LineSet486

HAnimSegment481.children.append(Shape485)

HAnimJoint480.children.append(HAnimSegment481)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.DEF = "hanim_vt11"
HAnimJoint489.name = "vt11"
HAnimJoint489.center = [0.0053,1.2679,-0.081]
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.DEF = "hanim_t11"
HAnimSegment490.name = "t11"
TouchSensor491 = x3d.TouchSensor()
TouchSensor491.description = "HAnimJoint vt11, HAnimSegment t11"

HAnimSegment490.children.append(TouchSensor491)
Transform492 = x3d.Transform()
Transform492.translation = [0.0053,1.2679,-0.081]
Shape493 = x3d.Shape()
Shape493.USE = "HAnimJointShape"

Transform492.children.append(Shape493)

HAnimSegment490.children.append(Transform492)
Shape494 = x3d.Shape()
LineSet495 = x3d.LineSet()
LineSet495.vertexCount = [2]
ColorRGBA496 = x3d.ColorRGBA()
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA"

LineSet495.color = ColorRGBA496
Coordinate497 = x3d.Coordinate()
Coordinate497.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet495.coord = Coordinate497

Shape494.geometry = LineSet495

HAnimSegment490.children.append(Shape494)

HAnimJoint489.children.append(HAnimSegment490)
HAnimJoint498 = x3d.HAnimJoint()
HAnimJoint498.DEF = "hanim_vt10"
HAnimJoint498.name = "vt10"
HAnimJoint498.center = [0.0056,1.2848,-0.0822]
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.DEF = "hanim_t10"
HAnimSegment499.name = "t10"
TouchSensor500 = x3d.TouchSensor()
TouchSensor500.description = "HAnimJoint vt10, HAnimSegment t10"

HAnimSegment499.children.append(TouchSensor500)
Transform501 = x3d.Transform()
Transform501.translation = [0.0056,1.2848,-0.0822]
Shape502 = x3d.Shape()
Shape502.USE = "HAnimJointShape"

Transform501.children.append(Shape502)

HAnimSegment499.children.append(Transform501)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.vertexCount = [2]
ColorRGBA505 = x3d.ColorRGBA()
ColorRGBA505.USE = "HAnimSegmentLineColorRGBA"

LineSet504.color = ColorRGBA505
Coordinate506 = x3d.Coordinate()
Coordinate506.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet504.coord = Coordinate506

Shape503.geometry = LineSet504

HAnimSegment499.children.append(Shape503)
Shape507 = x3d.Shape()
LineSet508 = x3d.LineSet()
LineSet508.vertexCount = [2]
ColorRGBA509 = x3d.ColorRGBA()
ColorRGBA509.USE = "HAnimSiteLineColorRGBA"

LineSet508.color = ColorRGBA509
Coordinate510 = x3d.Coordinate()
Coordinate510.point = [(0.0056, 1.2848, -0.0822),(0.0085, 1.2995, 0.1147)]

LineSet508.coord = Coordinate510

Shape507.geometry = LineSet508

HAnimSegment499.children.append(Shape507)
HAnimSite511 = x3d.HAnimSite()
HAnimSite511.DEF = "hanim_substernale_pt"
HAnimSite511.name = "substernale_pt"
HAnimSite511.translation = [0.0085,1.2995,0.1147]
TouchSensor512 = x3d.TouchSensor()
TouchSensor512.description = "HAnimSite substernale_pt"

HAnimSite511.children.append(TouchSensor512)
Shape513 = x3d.Shape()
Shape513.USE = "HAnimSiteShape"

HAnimSite511.children.append(Shape513)

HAnimSegment499.children.append(HAnimSite511)

HAnimJoint498.children.append(HAnimSegment499)
HAnimJoint514 = x3d.HAnimJoint()
HAnimJoint514.DEF = "hanim_vt9"
HAnimJoint514.name = "vt9"
HAnimJoint514.center = [0.0057,1.3126,-0.0838]
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.DEF = "hanim_t9"
HAnimSegment515.name = "t9"
TouchSensor516 = x3d.TouchSensor()
TouchSensor516.description = "HAnimJoint vt9, HAnimSegment t9"

HAnimSegment515.children.append(TouchSensor516)
Transform517 = x3d.Transform()
Transform517.translation = [0.0057,1.3126,-0.0838]
Shape518 = x3d.Shape()
Shape518.USE = "HAnimJointShape"

Transform517.children.append(Shape518)

HAnimSegment515.children.append(Transform517)
Shape519 = x3d.Shape()
LineSet520 = x3d.LineSet()
LineSet520.vertexCount = [2]
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA"

LineSet520.color = ColorRGBA521
Coordinate522 = x3d.Coordinate()
Coordinate522.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet520.coord = Coordinate522

Shape519.geometry = LineSet520

HAnimSegment515.children.append(Shape519)
Shape523 = x3d.Shape()
LineSet524 = x3d.LineSet()
LineSet524.vertexCount = [2]
ColorRGBA525 = x3d.ColorRGBA()
ColorRGBA525.USE = "HAnimSiteLineColorRGBA"

LineSet524.color = ColorRGBA525
Coordinate526 = x3d.Coordinate()
Coordinate526.point = [(0.0057, 1.3126, -0.0838),(-0.0736, 1.3385, 0.1217)]

LineSet524.coord = Coordinate526

Shape523.geometry = LineSet524

HAnimSegment515.children.append(Shape523)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.vertexCount = [2]
ColorRGBA529 = x3d.ColorRGBA()
ColorRGBA529.USE = "HAnimSiteLineColorRGBA"

LineSet528.color = ColorRGBA529
Coordinate530 = x3d.Coordinate()
Coordinate530.point = [(0.0057, 1.3126, -0.0838),(0.0918, 1.3382, 0.1192)]

LineSet528.coord = Coordinate530

Shape527.geometry = LineSet528

HAnimSegment515.children.append(Shape527)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.DEF = "hanim_r_thelion_pt"
HAnimSite531.name = "r_thelion_pt"
HAnimSite531.translation = [-0.0736,1.3385,0.1217]
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.description = "HAnimSite r_thelion_pt"

HAnimSite531.children.append(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.USE = "HAnimSiteShape"

HAnimSite531.children.append(Shape533)

HAnimSegment515.children.append(HAnimSite531)
HAnimSite534 = x3d.HAnimSite()
HAnimSite534.DEF = "hanim_l_thelion_pt"
HAnimSite534.name = "l_thelion_pt"
HAnimSite534.translation = [0.0918,1.3382,0.1192]
TouchSensor535 = x3d.TouchSensor()
TouchSensor535.description = "HAnimSite l_thelion_pt"

HAnimSite534.children.append(TouchSensor535)
Shape536 = x3d.Shape()
Shape536.USE = "HAnimSiteShape"

HAnimSite534.children.append(Shape536)

HAnimSegment515.children.append(HAnimSite534)

HAnimJoint514.children.append(HAnimSegment515)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.DEF = "hanim_vt8"
HAnimJoint537.name = "vt8"
HAnimJoint537.center = [0.0057,1.3382,-0.0845]
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.DEF = "hanim_t8"
HAnimSegment538.name = "t8"
TouchSensor539 = x3d.TouchSensor()
TouchSensor539.description = "HAnimJoint vt8, HAnimSegment t8"

HAnimSegment538.children.append(TouchSensor539)
Transform540 = x3d.Transform()
Transform540.translation = [0.0057,1.3382,-0.0845]
Shape541 = x3d.Shape()
Shape541.USE = "HAnimJointShape"

Transform540.children.append(Shape541)

HAnimSegment538.children.append(Transform540)
Shape542 = x3d.Shape()
LineSet543 = x3d.LineSet()
LineSet543.vertexCount = [2]
ColorRGBA544 = x3d.ColorRGBA()
ColorRGBA544.USE = "HAnimSegmentLineColorRGBA"

LineSet543.color = ColorRGBA544
Coordinate545 = x3d.Coordinate()
Coordinate545.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet543.coord = Coordinate545

Shape542.geometry = LineSet543

HAnimSegment538.children.append(Shape542)

HAnimJoint537.children.append(HAnimSegment538)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.DEF = "hanim_vt7"
HAnimJoint546.name = "vt7"
HAnimJoint546.center = [0.0058,1.3625,-0.0833]
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.DEF = "hanim_t7"
HAnimSegment547.name = "t7"
TouchSensor548 = x3d.TouchSensor()
TouchSensor548.description = "HAnimJoint vt7, HAnimSegment t7"

HAnimSegment547.children.append(TouchSensor548)
Transform549 = x3d.Transform()
Transform549.translation = [0.0058,1.3625,-0.0833]
Shape550 = x3d.Shape()
Shape550.USE = "HAnimJointShape"

Transform549.children.append(Shape550)

HAnimSegment547.children.append(Transform549)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.vertexCount = [2]
ColorRGBA553 = x3d.ColorRGBA()
ColorRGBA553.USE = "HAnimSegmentLineColorRGBA"

LineSet552.color = ColorRGBA553
Coordinate554 = x3d.Coordinate()
Coordinate554.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet552.coord = Coordinate554

Shape551.geometry = LineSet552

HAnimSegment547.children.append(Shape551)

HAnimJoint546.children.append(HAnimSegment547)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.DEF = "hanim_vt6"
HAnimJoint555.name = "vt6"
HAnimJoint555.center = [0.0059,1.3866,-0.08]
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.DEF = "hanim_t6"
HAnimSegment556.name = "t6"
TouchSensor557 = x3d.TouchSensor()
TouchSensor557.description = "HAnimJoint vt6, HAnimSegment t6"

HAnimSegment556.children.append(TouchSensor557)
Transform558 = x3d.Transform()
Transform558.translation = [0.0059,1.3866,-0.08]
Shape559 = x3d.Shape()
Shape559.USE = "HAnimJointShape"

Transform558.children.append(Shape559)

HAnimSegment556.children.append(Transform558)
Shape560 = x3d.Shape()
LineSet561 = x3d.LineSet()
LineSet561.vertexCount = [2]
ColorRGBA562 = x3d.ColorRGBA()
ColorRGBA562.USE = "HAnimSegmentLineColorRGBA"

LineSet561.color = ColorRGBA562
Coordinate563 = x3d.Coordinate()
Coordinate563.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet561.coord = Coordinate563

Shape560.geometry = LineSet561

HAnimSegment556.children.append(Shape560)

HAnimJoint555.children.append(HAnimSegment556)
HAnimJoint564 = x3d.HAnimJoint()
HAnimJoint564.DEF = "hanim_vt5"
HAnimJoint564.name = "vt5"
HAnimJoint564.center = [0.006,1.4102,-0.0745]
HAnimSegment565 = x3d.HAnimSegment()
HAnimSegment565.DEF = "hanim_t5"
HAnimSegment565.name = "t5"
TouchSensor566 = x3d.TouchSensor()
TouchSensor566.description = "HAnimJoint vt5, HAnimSegment t5"

HAnimSegment565.children.append(TouchSensor566)
Transform567 = x3d.Transform()
Transform567.translation = [0.006,1.4102,-0.0745]
Shape568 = x3d.Shape()
Shape568.USE = "HAnimJointShape"

Transform567.children.append(Shape568)

HAnimSegment565.children.append(Transform567)
Shape569 = x3d.Shape()
LineSet570 = x3d.LineSet()
LineSet570.vertexCount = [2]
ColorRGBA571 = x3d.ColorRGBA()
ColorRGBA571.USE = "HAnimSegmentLineColorRGBA"

LineSet570.color = ColorRGBA571
Coordinate572 = x3d.Coordinate()
Coordinate572.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet570.coord = Coordinate572

Shape569.geometry = LineSet570

HAnimSegment565.children.append(Shape569)

HAnimJoint564.children.append(HAnimSegment565)
HAnimJoint573 = x3d.HAnimJoint()
HAnimJoint573.DEF = "hanim_vt4"
HAnimJoint573.name = "vt4"
HAnimJoint573.center = [0.0061,1.432,-0.0675]
HAnimSegment574 = x3d.HAnimSegment()
HAnimSegment574.DEF = "hanim_t4"
HAnimSegment574.name = "t4"
TouchSensor575 = x3d.TouchSensor()
TouchSensor575.description = "HAnimJoint vt4, HAnimSegment t4"

HAnimSegment574.children.append(TouchSensor575)
Transform576 = x3d.Transform()
Transform576.translation = [0.0061,1.432,-0.0675]
Shape577 = x3d.Shape()
Shape577.USE = "HAnimJointShape"

Transform576.children.append(Shape577)

HAnimSegment574.children.append(Transform576)
Shape578 = x3d.Shape()
LineSet579 = x3d.LineSet()
LineSet579.vertexCount = [2]
ColorRGBA580 = x3d.ColorRGBA()
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA"

LineSet579.color = ColorRGBA580
Coordinate581 = x3d.Coordinate()
Coordinate581.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet579.coord = Coordinate581

Shape578.geometry = LineSet579

HAnimSegment574.children.append(Shape578)

HAnimJoint573.children.append(HAnimSegment574)
HAnimJoint582 = x3d.HAnimJoint()
HAnimJoint582.DEF = "hanim_vt3"
HAnimJoint582.name = "vt3"
HAnimJoint582.center = [0.0062,1.4583,-0.057]
HAnimSegment583 = x3d.HAnimSegment()
HAnimSegment583.DEF = "hanim_t3"
HAnimSegment583.name = "t3"
TouchSensor584 = x3d.TouchSensor()
TouchSensor584.description = "HAnimJoint vt3, HAnimSegment t3"

HAnimSegment583.children.append(TouchSensor584)
Transform585 = x3d.Transform()
Transform585.translation = [0.0062,1.4583,-0.057]
Shape586 = x3d.Shape()
Shape586.USE = "HAnimJointShape"

Transform585.children.append(Shape586)

HAnimSegment583.children.append(Transform585)
Shape587 = x3d.Shape()
LineSet588 = x3d.LineSet()
LineSet588.vertexCount = [2]
ColorRGBA589 = x3d.ColorRGBA()
ColorRGBA589.USE = "HAnimSegmentLineColorRGBA"

LineSet588.color = ColorRGBA589
Coordinate590 = x3d.Coordinate()
Coordinate590.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet588.coord = Coordinate590

Shape587.geometry = LineSet588

HAnimSegment583.children.append(Shape587)

HAnimJoint582.children.append(HAnimSegment583)
HAnimJoint591 = x3d.HAnimJoint()
HAnimJoint591.DEF = "hanim_vt2"
HAnimJoint591.name = "vt2"
HAnimJoint591.center = [0.0063,1.4761,-0.0484]
HAnimSegment592 = x3d.HAnimSegment()
HAnimSegment592.DEF = "hanim_t2"
HAnimSegment592.name = "t2"
TouchSensor593 = x3d.TouchSensor()
TouchSensor593.description = "HAnimJoint vt2, HAnimSegment t2"

HAnimSegment592.children.append(TouchSensor593)
Transform594 = x3d.Transform()
Transform594.translation = [0.0063,1.4761,-0.0484]
Shape595 = x3d.Shape()
Shape595.USE = "HAnimJointShape"

Transform594.children.append(Shape595)

HAnimSegment592.children.append(Transform594)
Shape596 = x3d.Shape()
LineSet597 = x3d.LineSet()
LineSet597.vertexCount = [2]
ColorRGBA598 = x3d.ColorRGBA()
ColorRGBA598.USE = "HAnimSegmentLineColorRGBA"

LineSet597.color = ColorRGBA598
Coordinate599 = x3d.Coordinate()
Coordinate599.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet597.coord = Coordinate599

Shape596.geometry = LineSet597

HAnimSegment592.children.append(Shape596)

HAnimJoint591.children.append(HAnimSegment592)
HAnimJoint600 = x3d.HAnimJoint()
HAnimJoint600.DEF = "hanim_vt1"
HAnimJoint600.name = "vt1"
HAnimJoint600.center = [0.0065,1.4951,-0.0387]
HAnimSegment601 = x3d.HAnimSegment()
HAnimSegment601.DEF = "hanim_t1"
HAnimSegment601.name = "t1"
TouchSensor602 = x3d.TouchSensor()
TouchSensor602.description = "HAnimJoint vt1, HAnimSegment t1"

HAnimSegment601.children.append(TouchSensor602)
Transform603 = x3d.Transform()
Transform603.translation = [0.0065,1.4951,-0.0387]
Shape604 = x3d.Shape()
Shape604.USE = "HAnimJointShape"

Transform603.children.append(Shape604)

HAnimSegment601.children.append(Transform603)
Shape605 = x3d.Shape()
LineSet606 = x3d.LineSet()
LineSet606.vertexCount = [2]
ColorRGBA607 = x3d.ColorRGBA()
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA"

LineSet606.color = ColorRGBA607
Coordinate608 = x3d.Coordinate()
Coordinate608.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet606.coord = Coordinate608

Shape605.geometry = LineSet606

HAnimSegment601.children.append(Shape605)
Shape609 = x3d.Shape()
LineSet610 = x3d.LineSet()
LineSet610.vertexCount = [2]
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA"

LineSet610.color = ColorRGBA611
Coordinate612 = x3d.Coordinate()
Coordinate612.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet610.coord = Coordinate612

Shape609.geometry = LineSet610

HAnimSegment601.children.append(Shape609)
Shape613 = x3d.Shape()
LineSet614 = x3d.LineSet()
LineSet614.vertexCount = [2]
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.USE = "HAnimSegmentLineColorRGBA"

LineSet614.color = ColorRGBA615
Coordinate616 = x3d.Coordinate()
Coordinate616.point = [(0.0065, 1.4951, -0.0387),(-0.082, 1.4488, -0.0353)]

LineSet614.coord = Coordinate616

Shape613.geometry = LineSet614

HAnimSegment601.children.append(Shape613)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.vertexCount = [2]
ColorRGBA619 = x3d.ColorRGBA()
ColorRGBA619.USE = "HAnimSiteLineColorRGBA"

LineSet618.color = ColorRGBA619
Coordinate620 = x3d.Coordinate()
Coordinate620.point = [(0.0065, 1.4951, -0.0387),(0.0084, 1.4714, 0.0551)]

LineSet618.coord = Coordinate620

Shape617.geometry = LineSet618

HAnimSegment601.children.append(Shape617)
Shape621 = x3d.Shape()
LineSet622 = x3d.LineSet()
LineSet622.vertexCount = [2]
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.USE = "HAnimSiteLineColorRGBA"

LineSet622.color = ColorRGBA623
Coordinate624 = x3d.Coordinate()
Coordinate624.point = [(0.0065, 1.4951, -0.0387),(0.0064, 1.52, -0.0815)]

LineSet622.coord = Coordinate624

Shape621.geometry = LineSet622

HAnimSegment601.children.append(Shape621)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.DEF = "hanim_suprasternale_pt"
HAnimSite625.name = "suprasternale_pt"
HAnimSite625.translation = [0.0084,1.4714,0.0551]
TouchSensor626 = x3d.TouchSensor()
TouchSensor626.description = "HAnimSite suprasternale_pt"

HAnimSite625.children.append(TouchSensor626)
Shape627 = x3d.Shape()
Shape627.USE = "HAnimSiteShape"

HAnimSite625.children.append(Shape627)

HAnimSegment601.children.append(HAnimSite625)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.DEF = "hanim_cervicale_pt"
HAnimSite628.name = "cervicale_pt"
HAnimSite628.translation = [0.0064,1.52,-0.0815]
TouchSensor629 = x3d.TouchSensor()
TouchSensor629.description = "HAnimSite cervicale_pt"

HAnimSite628.children.append(TouchSensor629)
Shape630 = x3d.Shape()
Shape630.USE = "HAnimSiteShape"

HAnimSite628.children.append(Shape630)

HAnimSegment601.children.append(HAnimSite628)

HAnimJoint600.children.append(HAnimSegment601)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.DEF = "hanim_vc7"
HAnimJoint631.name = "vc7"
HAnimJoint631.center = [0.0066,1.5132,-0.0301]
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.DEF = "hanim_c7"
HAnimSegment632.name = "c7"
TouchSensor633 = x3d.TouchSensor()
TouchSensor633.description = "HAnimJoint vc7, HAnimSegment c7"

HAnimSegment632.children.append(TouchSensor633)
Transform634 = x3d.Transform()
Transform634.translation = [0.0066,1.5132,-0.0301]
Shape635 = x3d.Shape()
Shape635.USE = "HAnimJointShape"

Transform634.children.append(Shape635)

HAnimSegment632.children.append(Transform634)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.vertexCount = [2]
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.USE = "HAnimSegmentLineColorRGBA"

LineSet637.color = ColorRGBA638
Coordinate639 = x3d.Coordinate()
Coordinate639.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet637.coord = Coordinate639

Shape636.geometry = LineSet637

HAnimSegment632.children.append(Shape636)
Shape640 = x3d.Shape()
LineSet641 = x3d.LineSet()
LineSet641.vertexCount = [2]
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.USE = "HAnimSiteLineColorRGBA"

LineSet641.color = ColorRGBA642
Coordinate643 = x3d.Coordinate()
Coordinate643.point = [(0.0066, 1.5132, -0.0301),(-0.0419, 1.5149, -0.022)]

LineSet641.coord = Coordinate643

Shape640.geometry = LineSet641

HAnimSegment632.children.append(Shape640)
Shape644 = x3d.Shape()
LineSet645 = x3d.LineSet()
LineSet645.vertexCount = [2]
ColorRGBA646 = x3d.ColorRGBA()
ColorRGBA646.USE = "HAnimSiteLineColorRGBA"

LineSet645.color = ColorRGBA646
Coordinate647 = x3d.Coordinate()
Coordinate647.point = [(0.0066, 1.5132, -0.0301),(0.0646, 1.5141, -0.038)]

LineSet645.coord = Coordinate647

Shape644.geometry = LineSet645

HAnimSegment632.children.append(Shape644)
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.DEF = "hanim_r_neck_base_pt"
HAnimSite648.name = "r_neck_base_pt"
HAnimSite648.translation = [-0.0419,1.5149,-0.022]
TouchSensor649 = x3d.TouchSensor()
TouchSensor649.description = "HAnimSite r_neck_base_pt"

HAnimSite648.children.append(TouchSensor649)
Shape650 = x3d.Shape()
Shape650.USE = "HAnimSiteShape"

HAnimSite648.children.append(Shape650)

HAnimSegment632.children.append(HAnimSite648)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.DEF = "hanim_l_neck_base_pt"
HAnimSite651.name = "l_neck_base_pt"
HAnimSite651.translation = [0.0646,1.5141,-0.038]
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.description = "HAnimSite l_neck_base_pt"

HAnimSite651.children.append(TouchSensor652)
Shape653 = x3d.Shape()
Shape653.USE = "HAnimSiteShape"

HAnimSite651.children.append(Shape653)

HAnimSegment632.children.append(HAnimSite651)

HAnimJoint631.children.append(HAnimSegment632)
HAnimJoint654 = x3d.HAnimJoint()
HAnimJoint654.DEF = "hanim_vc6"
HAnimJoint654.name = "vc6"
HAnimJoint654.center = [0.0066,1.5357,-0.0143]
HAnimSegment655 = x3d.HAnimSegment()
HAnimSegment655.DEF = "hanim_c6"
HAnimSegment655.name = "c6"
TouchSensor656 = x3d.TouchSensor()
TouchSensor656.description = "HAnimJoint vc6, HAnimSegment c6"

HAnimSegment655.children.append(TouchSensor656)
Transform657 = x3d.Transform()
Transform657.translation = [0.0066,1.5357,-0.0143]
Shape658 = x3d.Shape()
Shape658.USE = "HAnimJointShape"

Transform657.children.append(Shape658)

HAnimSegment655.children.append(Transform657)
Shape659 = x3d.Shape()
LineSet660 = x3d.LineSet()
LineSet660.vertexCount = [2]
ColorRGBA661 = x3d.ColorRGBA()
ColorRGBA661.USE = "HAnimSegmentLineColorRGBA"

LineSet660.color = ColorRGBA661
Coordinate662 = x3d.Coordinate()
Coordinate662.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet660.coord = Coordinate662

Shape659.geometry = LineSet660

HAnimSegment655.children.append(Shape659)

HAnimJoint654.children.append(HAnimSegment655)
HAnimJoint663 = x3d.HAnimJoint()
HAnimJoint663.DEF = "hanim_vc5"
HAnimJoint663.name = "vc5"
HAnimJoint663.center = [0.0066,1.552,-0.0082]
HAnimSegment664 = x3d.HAnimSegment()
HAnimSegment664.DEF = "hanim_c5"
HAnimSegment664.name = "c5"
TouchSensor665 = x3d.TouchSensor()
TouchSensor665.description = "HAnimJoint vc5, HAnimSegment c5"

HAnimSegment664.children.append(TouchSensor665)
Transform666 = x3d.Transform()
Transform666.translation = [0.0066,1.552,-0.0082]
Shape667 = x3d.Shape()
Shape667.USE = "HAnimJointShape"

Transform666.children.append(Shape667)

HAnimSegment664.children.append(Transform666)
Shape668 = x3d.Shape()
LineSet669 = x3d.LineSet()
LineSet669.vertexCount = [2]
ColorRGBA670 = x3d.ColorRGBA()
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA"

LineSet669.color = ColorRGBA670
Coordinate671 = x3d.Coordinate()
Coordinate671.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet669.coord = Coordinate671

Shape668.geometry = LineSet669

HAnimSegment664.children.append(Shape668)

HAnimJoint663.children.append(HAnimSegment664)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.DEF = "hanim_vc4"
HAnimJoint672.name = "vc4"
HAnimJoint672.center = [0.0066,1.5662,-0.0084]
HAnimSegment673 = x3d.HAnimSegment()
HAnimSegment673.DEF = "hanim_c4"
HAnimSegment673.name = "c4"
TouchSensor674 = x3d.TouchSensor()
TouchSensor674.description = "HAnimJoint vc4, HAnimSegment c4"

HAnimSegment673.children.append(TouchSensor674)
Transform675 = x3d.Transform()
Transform675.translation = [0.0066,1.5662,-0.0084]
Shape676 = x3d.Shape()
Shape676.USE = "HAnimJointShape"

Transform675.children.append(Shape676)

HAnimSegment673.children.append(Transform675)
Shape677 = x3d.Shape()
LineSet678 = x3d.LineSet()
LineSet678.vertexCount = [2]
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA"

LineSet678.color = ColorRGBA679
Coordinate680 = x3d.Coordinate()
Coordinate680.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet678.coord = Coordinate680

Shape677.geometry = LineSet678

HAnimSegment673.children.append(Shape677)

HAnimJoint672.children.append(HAnimSegment673)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.DEF = "hanim_vc3"
HAnimJoint681.name = "vc3"
HAnimJoint681.center = [0.0066,1.58,-0.0103]
HAnimSegment682 = x3d.HAnimSegment()
HAnimSegment682.DEF = "hanim_c3"
HAnimSegment682.name = "c3"
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.description = "HAnimJoint vc3, HAnimSegment c3"

HAnimSegment682.children.append(TouchSensor683)
Transform684 = x3d.Transform()
Transform684.translation = [0.0066,1.58,-0.0103]
Shape685 = x3d.Shape()
Shape685.USE = "HAnimJointShape"

Transform684.children.append(Shape685)

HAnimSegment682.children.append(Transform684)
Shape686 = x3d.Shape()
LineSet687 = x3d.LineSet()
LineSet687.vertexCount = [2]
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA"

LineSet687.color = ColorRGBA688
Coordinate689 = x3d.Coordinate()
Coordinate689.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet687.coord = Coordinate689

Shape686.geometry = LineSet687

HAnimSegment682.children.append(Shape686)

HAnimJoint681.children.append(HAnimSegment682)
HAnimJoint690 = x3d.HAnimJoint()
HAnimJoint690.DEF = "hanim_vc2"
HAnimJoint690.name = "vc2"
HAnimJoint690.center = [0.0066,1.5928,-0.0103]
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.DEF = "hanim_c2"
HAnimSegment691.name = "c2"
TouchSensor692 = x3d.TouchSensor()
TouchSensor692.description = "HAnimJoint vc2, HAnimSegment c2"

HAnimSegment691.children.append(TouchSensor692)
Transform693 = x3d.Transform()
Transform693.translation = [0.0066,1.5928,-0.0103]
Shape694 = x3d.Shape()
Shape694.USE = "HAnimJointShape"

Transform693.children.append(Shape694)

HAnimSegment691.children.append(Transform693)
Shape695 = x3d.Shape()
LineSet696 = x3d.LineSet()
LineSet696.vertexCount = [2]
ColorRGBA697 = x3d.ColorRGBA()
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA"

LineSet696.color = ColorRGBA697
Coordinate698 = x3d.Coordinate()
Coordinate698.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet696.coord = Coordinate698

Shape695.geometry = LineSet696

HAnimSegment691.children.append(Shape695)

HAnimJoint690.children.append(HAnimSegment691)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.DEF = "hanim_vc1"
HAnimJoint699.name = "vc1"
HAnimJoint699.center = [0.0066,1.6144,-0.0034]
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.DEF = "hanim_c1"
HAnimSegment700.name = "c1"
TouchSensor701 = x3d.TouchSensor()
TouchSensor701.description = "HAnimJoint vc1, HAnimSegment c1"

HAnimSegment700.children.append(TouchSensor701)
Transform702 = x3d.Transform()
Transform702.translation = [0.0066,1.6144,-0.0034]
Shape703 = x3d.Shape()
Shape703.USE = "HAnimJointShape"

Transform702.children.append(Shape703)

HAnimSegment700.children.append(Transform702)
Shape704 = x3d.Shape()
LineSet705 = x3d.LineSet()
LineSet705.vertexCount = [2]
ColorRGBA706 = x3d.ColorRGBA()
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA"

LineSet705.color = ColorRGBA706
Coordinate707 = x3d.Coordinate()
Coordinate707.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet705.coord = Coordinate707

Shape704.geometry = LineSet705

HAnimSegment700.children.append(Shape704)

HAnimJoint699.children.append(HAnimSegment700)
HAnimJoint708 = x3d.HAnimJoint()
HAnimJoint708.DEF = "hanim_skullbase"
HAnimJoint708.name = "skullbase"
HAnimJoint708.center = [0.0044,1.6209,0.0236]
HAnimSegment709 = x3d.HAnimSegment()
HAnimSegment709.DEF = "hanim_skull"
HAnimSegment709.name = "skull"
TouchSensor710 = x3d.TouchSensor()
TouchSensor710.description = "HAnimJoint skullbase, HAnimSegment skull"

HAnimSegment709.children.append(TouchSensor710)
Transform711 = x3d.Transform()
Transform711.translation = [0.0044,1.6209,0.0236]
Shape712 = x3d.Shape()
Shape712.USE = "HAnimJointShape"

Transform711.children.append(Shape712)

HAnimSegment709.children.append(Transform711)
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

HAnimSegment709.children.append(Shape713)
Shape717 = x3d.Shape()
LineSet718 = x3d.LineSet()
LineSet718.vertexCount = [2]
ColorRGBA719 = x3d.ColorRGBA()
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA"

LineSet718.color = ColorRGBA719
Coordinate720 = x3d.Coordinate()
Coordinate720.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.6332, 0.0502)]

LineSet718.coord = Coordinate720

Shape717.geometry = LineSet718

HAnimSegment709.children.append(Shape717)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.vertexCount = [2]
ColorRGBA723 = x3d.ColorRGBA()
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA"

LineSet722.color = ColorRGBA723
Coordinate724 = x3d.Coordinate()
Coordinate724.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.635, 0.0506)]

LineSet722.coord = Coordinate724

Shape721.geometry = LineSet722

HAnimSegment709.children.append(Shape721)
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

HAnimSegment709.children.append(Shape725)
Shape729 = x3d.Shape()
LineSet730 = x3d.LineSet()
LineSet730.vertexCount = [2]
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA"

LineSet730.color = ColorRGBA731
Coordinate732 = x3d.Coordinate()
Coordinate732.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.6332, 0.0502)]

LineSet730.coord = Coordinate732

Shape729.geometry = LineSet730

HAnimSegment709.children.append(Shape729)
Shape733 = x3d.Shape()
LineSet734 = x3d.LineSet()
LineSet734.vertexCount = [2]
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA"

LineSet734.color = ColorRGBA735
Coordinate736 = x3d.Coordinate()
Coordinate736.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.635, 0.0506)]

LineSet734.coord = Coordinate736

Shape733.geometry = LineSet734

HAnimSegment709.children.append(Shape733)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.vertexCount = [2]
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA"

LineSet738.color = ColorRGBA739
Coordinate740 = x3d.Coordinate()
Coordinate740.point = [(0.0044, 1.6209, 0.0236),(0, 1.63, 0.015)]

LineSet738.coord = Coordinate740

Shape737.geometry = LineSet738

HAnimSegment709.children.append(Shape737)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.vertexCount = [2]
ColorRGBA743 = x3d.ColorRGBA()
ColorRGBA743.USE = "HAnimSiteLineColorRGBA"

LineSet742.color = ColorRGBA743
Coordinate744 = x3d.Coordinate()
Coordinate744.point = [(0.0044, 1.6209, 0.0236),(0.005, 1.7504, 0.0055)]

LineSet742.coord = Coordinate744

Shape741.geometry = LineSet742

HAnimSegment709.children.append(Shape741)
Shape745 = x3d.Shape()
LineSet746 = x3d.LineSet()
LineSet746.vertexCount = [2]
ColorRGBA747 = x3d.ColorRGBA()
ColorRGBA747.USE = "HAnimSiteLineColorRGBA"

LineSet746.color = ColorRGBA747
Coordinate748 = x3d.Coordinate()
Coordinate748.point = [(0.0044, 1.6209, 0.0236),(0.0058, 1.6316, 0.0852)]

LineSet746.coord = Coordinate748

Shape745.geometry = LineSet746

HAnimSegment709.children.append(Shape745)
Shape749 = x3d.Shape()
LineSet750 = x3d.LineSet()
LineSet750.vertexCount = [2]
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.USE = "HAnimSiteLineColorRGBA"

LineSet750.color = ColorRGBA751
Coordinate752 = x3d.Coordinate()
Coordinate752.point = [(0.0044, 1.6209, 0.0236),(-0.0237, 1.6171, 0.0752)]

LineSet750.coord = Coordinate752

Shape749.geometry = LineSet750

HAnimSegment709.children.append(Shape749)
Shape753 = x3d.Shape()
LineSet754 = x3d.LineSet()
LineSet754.vertexCount = [2]
ColorRGBA755 = x3d.ColorRGBA()
ColorRGBA755.USE = "HAnimSiteLineColorRGBA"

LineSet754.color = ColorRGBA755
Coordinate756 = x3d.Coordinate()
Coordinate756.point = [(0.0044, 1.6209, 0.0236),(0.0341, 1.6171, 0.0752)]

LineSet754.coord = Coordinate756

Shape753.geometry = LineSet754

HAnimSegment709.children.append(Shape753)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.vertexCount = [2]
ColorRGBA759 = x3d.ColorRGBA()
ColorRGBA759.USE = "HAnimSiteLineColorRGBA"

LineSet758.color = ColorRGBA759
Coordinate760 = x3d.Coordinate()
Coordinate760.point = [(0.0044, 1.6209, 0.0236),(0.0061, 1.541, 0.0805)]

LineSet758.coord = Coordinate760

Shape757.geometry = LineSet758

HAnimSegment709.children.append(Shape757)
Shape761 = x3d.Shape()
LineSet762 = x3d.LineSet()
LineSet762.vertexCount = [2]
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.USE = "HAnimSiteLineColorRGBA"

LineSet762.color = ColorRGBA763
Coordinate764 = x3d.Coordinate()
Coordinate764.point = [(0.0044, 1.6209, 0.0236),(-0.0646, 1.6347, 0.0302)]

LineSet762.coord = Coordinate764

Shape761.geometry = LineSet762

HAnimSegment709.children.append(Shape761)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.vertexCount = [2]
ColorRGBA767 = x3d.ColorRGBA()
ColorRGBA767.USE = "HAnimSiteLineColorRGBA"

LineSet766.color = ColorRGBA767
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(0.0044, 1.6209, 0.0236),(-0.052, 1.5529, 0.0347)]

LineSet766.coord = Coordinate768

Shape765.geometry = LineSet766

HAnimSegment709.children.append(Shape765)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.vertexCount = [2]
ColorRGBA771 = x3d.ColorRGBA()
ColorRGBA771.USE = "HAnimSiteLineColorRGBA"

LineSet770.color = ColorRGBA771
Coordinate772 = x3d.Coordinate()
Coordinate772.point = [(0.0044, 1.6209, 0.0236),(0.0739, 1.6348, 0.0282)]

LineSet770.coord = Coordinate772

Shape769.geometry = LineSet770

HAnimSegment709.children.append(Shape769)
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.vertexCount = [2]
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.USE = "HAnimSiteLineColorRGBA"

LineSet774.color = ColorRGBA775
Coordinate776 = x3d.Coordinate()
Coordinate776.point = [(0.0044, 1.6209, 0.0236),(0.0631, 1.553, 0.033)]

LineSet774.coord = Coordinate776

Shape773.geometry = LineSet774

HAnimSegment709.children.append(Shape773)
Shape777 = x3d.Shape()
LineSet778 = x3d.LineSet()
LineSet778.vertexCount = [2]
ColorRGBA779 = x3d.ColorRGBA()
ColorRGBA779.USE = "HAnimSiteLineColorRGBA"

LineSet778.color = ColorRGBA779
Coordinate780 = x3d.Coordinate()
Coordinate780.point = [(0.0044, 1.6209, 0.0236),(0.0039, 1.5972, -0.0796)]

LineSet778.coord = Coordinate780

Shape777.geometry = LineSet778

HAnimSegment709.children.append(Shape777)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.DEF = "hanim_skull_vertex_pt"
HAnimSite781.name = "skull_vertex_pt"
HAnimSite781.translation = [0.005,1.7504,0.0055]
TouchSensor782 = x3d.TouchSensor()
TouchSensor782.description = "HAnimSite skull_tip"

HAnimSite781.children.append(TouchSensor782)
Shape783 = x3d.Shape()
Shape783.USE = "HAnimSiteShape"

HAnimSite781.children.append(Shape783)

HAnimSegment709.children.append(HAnimSite781)
HAnimSite784 = x3d.HAnimSite()
HAnimSite784.DEF = "hanim_sellion_pt"
HAnimSite784.name = "sellion_pt"
HAnimSite784.translation = [0.0058,1.6316,0.0852]
TouchSensor785 = x3d.TouchSensor()
TouchSensor785.description = "HAnimSite sellion_pt"

HAnimSite784.children.append(TouchSensor785)
Shape786 = x3d.Shape()
Shape786.USE = "HAnimSiteShape"

HAnimSite784.children.append(Shape786)

HAnimSegment709.children.append(HAnimSite784)
HAnimSite787 = x3d.HAnimSite()
HAnimSite787.DEF = "hanim_r_infraorbitale_pt"
HAnimSite787.name = "r_infraorbitale_pt"
HAnimSite787.translation = [-0.0237,1.6171,0.0752]
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.description = "HAnimSite r_infraorbitale_pt"

HAnimSite787.children.append(TouchSensor788)
Shape789 = x3d.Shape()
Shape789.USE = "HAnimSiteShape"

HAnimSite787.children.append(Shape789)

HAnimSegment709.children.append(HAnimSite787)
HAnimSite790 = x3d.HAnimSite()
HAnimSite790.DEF = "hanim_l_infraorbitale_pt"
HAnimSite790.name = "l_infraorbitale_pt"
HAnimSite790.translation = [0.0341,1.6171,0.0752]
TouchSensor791 = x3d.TouchSensor()
TouchSensor791.description = "HAnimSite l_infraorbitale_pt"

HAnimSite790.children.append(TouchSensor791)
Shape792 = x3d.Shape()
Shape792.USE = "HAnimSiteShape"

HAnimSite790.children.append(Shape792)

HAnimSegment709.children.append(HAnimSite790)
HAnimSite793 = x3d.HAnimSite()
HAnimSite793.DEF = "hanim_supramenton_pt"
HAnimSite793.name = "supramenton_pt"
HAnimSite793.translation = [0.0061,1.541,0.0805]
TouchSensor794 = x3d.TouchSensor()
TouchSensor794.description = "HAnimSite supramenton_pt"

HAnimSite793.children.append(TouchSensor794)
Shape795 = x3d.Shape()
Shape795.USE = "HAnimSiteShape"

HAnimSite793.children.append(Shape795)

HAnimSegment709.children.append(HAnimSite793)
HAnimSite796 = x3d.HAnimSite()
HAnimSite796.DEF = "hanim_r_tragion_pt"
HAnimSite796.name = "r_tragion_pt"
HAnimSite796.translation = [-0.0646,1.6347,0.0302]
TouchSensor797 = x3d.TouchSensor()
TouchSensor797.description = "HAnimSite r_tragion_pt"

HAnimSite796.children.append(TouchSensor797)
Shape798 = x3d.Shape()
Shape798.USE = "HAnimSiteShape"

HAnimSite796.children.append(Shape798)

HAnimSegment709.children.append(HAnimSite796)
HAnimSite799 = x3d.HAnimSite()
HAnimSite799.DEF = "hanim_r_gonion_pt"
HAnimSite799.name = "r_gonion_pt"
HAnimSite799.translation = [-0.052,1.5529,0.0347]
TouchSensor800 = x3d.TouchSensor()
TouchSensor800.description = "HAnimSite r_gonion_pt"

HAnimSite799.children.append(TouchSensor800)
Shape801 = x3d.Shape()
Shape801.USE = "HAnimSiteShape"

HAnimSite799.children.append(Shape801)

HAnimSegment709.children.append(HAnimSite799)
HAnimSite802 = x3d.HAnimSite()
HAnimSite802.DEF = "hanim_l_tragion_pt"
HAnimSite802.name = "l_tragion_pt"
HAnimSite802.translation = [0.0739,1.6348,0.0282]
TouchSensor803 = x3d.TouchSensor()
TouchSensor803.description = "HAnimSite l_tragion_pt"

HAnimSite802.children.append(TouchSensor803)
Shape804 = x3d.Shape()
Shape804.USE = "HAnimSiteShape"

HAnimSite802.children.append(Shape804)

HAnimSegment709.children.append(HAnimSite802)
HAnimSite805 = x3d.HAnimSite()
HAnimSite805.DEF = "hanim_l_gonion_pt"
HAnimSite805.name = "l_gonion_pt"
HAnimSite805.translation = [0.0631,1.553,0.033]
TouchSensor806 = x3d.TouchSensor()
TouchSensor806.description = "HAnimSite l_gonion_pt"

HAnimSite805.children.append(TouchSensor806)
Shape807 = x3d.Shape()
Shape807.USE = "HAnimSiteShape"

HAnimSite805.children.append(Shape807)

HAnimSegment709.children.append(HAnimSite805)
HAnimSite808 = x3d.HAnimSite()
HAnimSite808.DEF = "hanim_nuchale_pt"
HAnimSite808.name = "nuchale_pt"
HAnimSite808.translation = [0.0039,1.5972,-0.0796]
TouchSensor809 = x3d.TouchSensor()
TouchSensor809.description = "HAnimSite nuchale_pt"

HAnimSite808.children.append(TouchSensor809)
Shape810 = x3d.Shape()
Shape810.USE = "HAnimSiteShape"

HAnimSite808.children.append(Shape810)

HAnimSegment709.children.append(HAnimSite808)

HAnimJoint708.children.append(HAnimSegment709)
HAnimJoint811 = x3d.HAnimJoint()
HAnimJoint811.DEF = "hanim_l_eyeball_joint"
HAnimJoint811.name = "l_eyeball_joint"
HAnimJoint811.center = [0.0336,1.6332,0.0502]
HAnimSegment812 = x3d.HAnimSegment()
HAnimSegment812.DEF = "hanim_l_eyeball"
HAnimSegment812.name = "l_eyeball"
TouchSensor813 = x3d.TouchSensor()
TouchSensor813.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"

HAnimSegment812.children.append(TouchSensor813)
Transform814 = x3d.Transform()
Transform814.translation = [0.0336,1.6332,0.0502]
Shape815 = x3d.Shape()
Shape815.USE = "HAnimJointShape"

Transform814.children.append(Shape815)

HAnimSegment812.children.append(Transform814)
Shape816 = x3d.Shape()
LineSet817 = x3d.LineSet()
LineSet817.vertexCount = [2]
ColorRGBA818 = x3d.ColorRGBA()
ColorRGBA818.DEF = "HAnimSiteViewpointLineColorRGBA"
ColorRGBA818.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet817.color = ColorRGBA818
Coordinate819 = x3d.Coordinate()
Coordinate819.point = [(0.0336, 1.6332, 0.0502),(0.034, 1.64, 0.05)]

LineSet817.coord = Coordinate819

Shape816.geometry = LineSet817

HAnimSegment812.children.append(Shape816)
HAnimSite820 = x3d.HAnimSite()
HAnimSite820.DEF = "hanim_l_eyeball_site_view"
HAnimSite820.name = "l_eyeball_site_view"
HAnimSite820.translation = [0.034,1.64,0.05]
TouchSensor821 = x3d.TouchSensor()
TouchSensor821.description = "HAnimSite l_eyeball_site_view"

HAnimSite820.children.append(TouchSensor821)
Shape822 = x3d.Shape()
Shape822.USE = "HAnimSiteShape"

HAnimSite820.children.append(Shape822)
Viewpoint823 = x3d.Viewpoint()
Viewpoint823.DEF = "hanim_l_eyeball_site_viewpoint"
Viewpoint823.description = "l_eyeball_site_viewpoint looking forward"
Viewpoint823.position = [0,0,0]
Viewpoint823.orientation = [0,1,0,3.141593]

HAnimSite820.children.append(Viewpoint823)
Anchor824 = x3d.Anchor()
Anchor824.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint"
Anchor824.url = ["#hanim_l_eyeball_site_viewpoint"]
LOD825 = x3d.LOD()
LOD825.forceTransitions = True
LOD825.range = [0.04]
WorldInfo826 = x3d.WorldInfo()
WorldInfo826.info = ["hide diamond when close"]

LOD825.children.append(WorldInfo826)
Shape827 = x3d.Shape()
Shape827.DEF = "HAnimSiteViewpointShape"
Appearance828 = x3d.Appearance()
Material829 = x3d.Material()
Material829.diffuseColor = [1,1,0]
Material829.transparency = 0.3

Appearance828.material = Material829

Shape827.appearance = Appearance828
IndexedFaceSet830 = x3d.IndexedFaceSet()
IndexedFaceSet830.DEF = "SiteViewpointDiamondIFS"
IndexedFaceSet830.creaseAngle = 0.5
IndexedFaceSet830.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate831 = x3d.Coordinate()
Coordinate831.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet830.coord = Coordinate831

Shape827.geometry = IndexedFaceSet830

LOD825.children.append(Shape827)

Anchor824.children.append(LOD825)

HAnimSite820.children.append(Anchor824)

HAnimSegment812.children.append(HAnimSite820)

HAnimJoint811.children.append(HAnimSegment812)

HAnimJoint708.children.append(HAnimJoint811)
HAnimJoint832 = x3d.HAnimJoint()
HAnimJoint832.DEF = "hanim_l_eyelid_joint"
HAnimJoint832.name = "l_eyelid_joint"
HAnimJoint832.center = [0.0336,1.6332,0.0502]
HAnimSegment833 = x3d.HAnimSegment()
HAnimSegment833.DEF = "hanim_l_eyelid"
HAnimSegment833.name = "l_eyelid"
TouchSensor834 = x3d.TouchSensor()
TouchSensor834.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"

HAnimSegment833.children.append(TouchSensor834)
Transform835 = x3d.Transform()
Transform835.translation = [0.0336,1.6332,0.0502]
Shape836 = x3d.Shape()
Shape836.USE = "HAnimJointShape"

Transform835.children.append(Shape836)

HAnimSegment833.children.append(Transform835)

HAnimJoint832.children.append(HAnimSegment833)

HAnimJoint708.children.append(HAnimJoint832)
HAnimJoint837 = x3d.HAnimJoint()
HAnimJoint837.DEF = "hanim_l_eyebrow_joint"
HAnimJoint837.name = "l_eyebrow_joint"
HAnimJoint837.center = [0.0336,1.635,0.0506]
HAnimSegment838 = x3d.HAnimSegment()
HAnimSegment838.DEF = "hanim_l_eyebrow"
HAnimSegment838.name = "l_eyebrow"
TouchSensor839 = x3d.TouchSensor()
TouchSensor839.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"

HAnimSegment838.children.append(TouchSensor839)
Transform840 = x3d.Transform()
Transform840.translation = [0.0336,1.635,0.0506]
Shape841 = x3d.Shape()
Shape841.USE = "HAnimJointShape"

Transform840.children.append(Shape841)

HAnimSegment838.children.append(Transform840)

HAnimJoint837.children.append(HAnimSegment838)

HAnimJoint708.children.append(HAnimJoint837)
HAnimJoint842 = x3d.HAnimJoint()
HAnimJoint842.DEF = "hanim_r_eyeball_joint"
HAnimJoint842.name = "r_eyeball_joint"
HAnimJoint842.center = [-0.0336,1.6332,0.0502]
HAnimSegment843 = x3d.HAnimSegment()
HAnimSegment843.DEF = "hanim_r_eyeball"
HAnimSegment843.name = "r_eyeball"
TouchSensor844 = x3d.TouchSensor()
TouchSensor844.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"

HAnimSegment843.children.append(TouchSensor844)
Transform845 = x3d.Transform()
Transform845.translation = [-0.0336,1.6332,0.0502]
Shape846 = x3d.Shape()
Shape846.USE = "HAnimJointShape"

Transform845.children.append(Shape846)

HAnimSegment843.children.append(Transform845)
Shape847 = x3d.Shape()
LineSet848 = x3d.LineSet()
LineSet848.vertexCount = [2]
ColorRGBA849 = x3d.ColorRGBA()
ColorRGBA849.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet848.color = ColorRGBA849
Coordinate850 = x3d.Coordinate()
Coordinate850.point = [(-0.0336, 1.6332, 0.0502),(-0.034, 1.64, 0.05)]

LineSet848.coord = Coordinate850

Shape847.geometry = LineSet848

HAnimSegment843.children.append(Shape847)
HAnimSite851 = x3d.HAnimSite()
HAnimSite851.DEF = "hanim_r_eyeball_site_view"
HAnimSite851.name = "r_eyeball_site_view"
HAnimSite851.translation = [-0.034,1.64,0.05]
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.description = "HAnimSite r_eyeball_site_view"

HAnimSite851.children.append(TouchSensor852)
Shape853 = x3d.Shape()
Shape853.USE = "HAnimSiteShape"

HAnimSite851.children.append(Shape853)
Viewpoint854 = x3d.Viewpoint()
Viewpoint854.DEF = "hanim_r_eyeball_site_viewpoint"
Viewpoint854.description = "r_eyeball_site_viewpoint looking forward"
Viewpoint854.position = [0,0,0]
Viewpoint854.orientation = [0,1,0,3.141593]

HAnimSite851.children.append(Viewpoint854)
Anchor855 = x3d.Anchor()
Anchor855.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint"
Anchor855.url = ["#hanim_r_eyeball_site_viewpoint"]
LOD856 = x3d.LOD()
LOD856.forceTransitions = True
LOD856.range = [0.04]
WorldInfo857 = x3d.WorldInfo()
WorldInfo857.info = ["hide diamond when close"]

LOD856.children.append(WorldInfo857)
Shape858 = x3d.Shape()
Shape858.USE = "HAnimSiteViewpointShape"

LOD856.children.append(Shape858)

Anchor855.children.append(LOD856)

HAnimSite851.children.append(Anchor855)

HAnimSegment843.children.append(HAnimSite851)

HAnimJoint842.children.append(HAnimSegment843)

HAnimJoint708.children.append(HAnimJoint842)
HAnimJoint859 = x3d.HAnimJoint()
HAnimJoint859.DEF = "hanim_r_eyelid_joint"
HAnimJoint859.name = "r_eyelid_joint"
HAnimJoint859.center = [-0.0336,1.6332,0.0502]
HAnimSegment860 = x3d.HAnimSegment()
HAnimSegment860.DEF = "hanim_r_eyelid"
HAnimSegment860.name = "r_eyelid"
TouchSensor861 = x3d.TouchSensor()
TouchSensor861.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"

HAnimSegment860.children.append(TouchSensor861)
Transform862 = x3d.Transform()
Transform862.translation = [-0.0336,1.6332,0.0502]
Shape863 = x3d.Shape()
Shape863.USE = "HAnimJointShape"

Transform862.children.append(Shape863)

HAnimSegment860.children.append(Transform862)

HAnimJoint859.children.append(HAnimSegment860)

HAnimJoint708.children.append(HAnimJoint859)
HAnimJoint864 = x3d.HAnimJoint()
HAnimJoint864.DEF = "hanim_r_eyebrow_joint"
HAnimJoint864.name = "r_eyebrow_joint"
HAnimJoint864.center = [-0.0336,1.635,0.0506]
HAnimSegment865 = x3d.HAnimSegment()
HAnimSegment865.DEF = "hanim_r_eyebrow"
HAnimSegment865.name = "r_eyebrow"
TouchSensor866 = x3d.TouchSensor()
TouchSensor866.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"

HAnimSegment865.children.append(TouchSensor866)
Transform867 = x3d.Transform()
Transform867.translation = [-0.0336,1.635,0.0506]
Shape868 = x3d.Shape()
Shape868.USE = "HAnimJointShape"

Transform867.children.append(Shape868)

HAnimSegment865.children.append(Transform867)

HAnimJoint864.children.append(HAnimSegment865)

HAnimJoint708.children.append(HAnimJoint864)
HAnimJoint869 = x3d.HAnimJoint()
HAnimJoint869.DEF = "hanim_temporomandibular"
HAnimJoint869.name = "temporomandibular"
HAnimJoint869.center = [0,1.63,0.015]
HAnimSegment870 = x3d.HAnimSegment()
HAnimSegment870.DEF = "hanim_jaw"
HAnimSegment870.name = "jaw"
TouchSensor871 = x3d.TouchSensor()
TouchSensor871.description = "HAnimJoint temporomandibular, HAnimSegment jaw"

HAnimSegment870.children.append(TouchSensor871)
Transform872 = x3d.Transform()
Transform872.translation = [0,1.63,0.015]
Shape873 = x3d.Shape()
Shape873.USE = "HAnimJointShape"

Transform872.children.append(Shape873)

HAnimSegment870.children.append(Transform872)
Shape874 = x3d.Shape()
LineSet875 = x3d.LineSet()
LineSet875.vertexCount = [2]
ColorRGBA876 = x3d.ColorRGBA()
ColorRGBA876.USE = "HAnimSiteLineColorRGBA"

LineSet875.color = ColorRGBA876
Coordinate877 = x3d.Coordinate()
Coordinate877.point = [(0, 1.63, 0.015),(0.045, 1.63, 0)]

LineSet875.coord = Coordinate877

Shape874.geometry = LineSet875

HAnimSegment870.children.append(Shape874)
Shape878 = x3d.Shape()
LineSet879 = x3d.LineSet()
LineSet879.vertexCount = [2]
ColorRGBA880 = x3d.ColorRGBA()
ColorRGBA880.USE = "HAnimSiteLineColorRGBA"

LineSet879.color = ColorRGBA880
Coordinate881 = x3d.Coordinate()
Coordinate881.point = [(0, 1.63, 0.015),(-0.045, 1.63, 0)]

LineSet879.coord = Coordinate881

Shape878.geometry = LineSet879

HAnimSegment870.children.append(Shape878)
HAnimSite882 = x3d.HAnimSite()
HAnimSite882.DEF = "hanim_temporomandibular_l_site_pt"
HAnimSite882.name = "temporomandibular_l_site_pt"
HAnimSite882.translation = [0.045,1.63,0]
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.description = "HAnimSite temporomandibular_l_site_pt"

HAnimSite882.children.append(TouchSensor883)
Shape884 = x3d.Shape()
Shape884.USE = "HAnimSiteShape"

HAnimSite882.children.append(Shape884)

HAnimSegment870.children.append(HAnimSite882)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.DEF = "hanim_temporomandibular_r_site_pt"
HAnimSite885.name = "temporomandibular_r_site_pt"
HAnimSite885.translation = [-0.045,1.63,0]
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.description = "HAnimSite temporomandibular_r_site_pt"

HAnimSite885.children.append(TouchSensor886)
Shape887 = x3d.Shape()
Shape887.USE = "HAnimSiteShape"

HAnimSite885.children.append(Shape887)

HAnimSegment870.children.append(HAnimSite885)

HAnimJoint869.children.append(HAnimSegment870)

HAnimJoint708.children.append(HAnimJoint869)

HAnimJoint699.children.append(HAnimJoint708)

HAnimJoint690.children.append(HAnimJoint699)

HAnimJoint681.children.append(HAnimJoint690)

HAnimJoint672.children.append(HAnimJoint681)

HAnimJoint663.children.append(HAnimJoint672)

HAnimJoint654.children.append(HAnimJoint663)

HAnimJoint631.children.append(HAnimJoint654)

HAnimJoint600.children.append(HAnimJoint631)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.DEF = "hanim_l_sternoclavicular"
HAnimJoint888.name = "l_sternoclavicular"
HAnimJoint888.center = [0.082,1.4488,-0.0353]
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.DEF = "hanim_l_clavicle"
HAnimSegment889.name = "l_clavicle"
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"

HAnimSegment889.children.append(TouchSensor890)
Transform891 = x3d.Transform()
Transform891.translation = [0.082,1.4488,-0.0353]
Shape892 = x3d.Shape()
Shape892.USE = "HAnimJointShape"

Transform891.children.append(Shape892)

HAnimSegment889.children.append(Transform891)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.vertexCount = [2]
ColorRGBA895 = x3d.ColorRGBA()
ColorRGBA895.USE = "HAnimSegmentLineColorRGBA"

LineSet894.color = ColorRGBA895
Coordinate896 = x3d.Coordinate()
Coordinate896.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet894.coord = Coordinate896

Shape893.geometry = LineSet894

HAnimSegment889.children.append(Shape893)
Shape897 = x3d.Shape()
LineSet898 = x3d.LineSet()
LineSet898.vertexCount = [2]
ColorRGBA899 = x3d.ColorRGBA()
ColorRGBA899.USE = "HAnimSiteLineColorRGBA"

LineSet898.color = ColorRGBA899
Coordinate900 = x3d.Coordinate()
Coordinate900.point = [(0.082, 1.4488, -0.0353),(0.0271, 1.4943, 0.0394)]

LineSet898.coord = Coordinate900

Shape897.geometry = LineSet898

HAnimSegment889.children.append(Shape897)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.vertexCount = [2]
ColorRGBA903 = x3d.ColorRGBA()
ColorRGBA903.USE = "HAnimSiteLineColorRGBA"

LineSet902.color = ColorRGBA903
Coordinate904 = x3d.Coordinate()
Coordinate904.point = [(0.082, 1.4488, -0.0353),(0.2032, 1.476, -0.049)]

LineSet902.coord = Coordinate904

Shape901.geometry = LineSet902

HAnimSegment889.children.append(Shape901)
Shape905 = x3d.Shape()
LineSet906 = x3d.LineSet()
LineSet906.vertexCount = [2]
ColorRGBA907 = x3d.ColorRGBA()
ColorRGBA907.USE = "HAnimSiteLineColorRGBA"

LineSet906.color = ColorRGBA907
Coordinate908 = x3d.Coordinate()
Coordinate908.point = [(0.082, 1.4488, -0.0353),(0.1777, 1.4065, -0.0075)]

LineSet906.coord = Coordinate908

Shape905.geometry = LineSet906

HAnimSegment889.children.append(Shape905)
Shape909 = x3d.Shape()
LineSet910 = x3d.LineSet()
LineSet910.vertexCount = [2]
ColorRGBA911 = x3d.ColorRGBA()
ColorRGBA911.USE = "HAnimSiteLineColorRGBA"

LineSet910.color = ColorRGBA911
Coordinate912 = x3d.Coordinate()
Coordinate912.point = [(0.082, 1.4488, -0.0353),(0.1706, 1.4072, -0.0875)]

LineSet910.coord = Coordinate912

Shape909.geometry = LineSet910

HAnimSegment889.children.append(Shape909)
HAnimSite913 = x3d.HAnimSite()
HAnimSite913.DEF = "hanim_l_clavicle_pt"
HAnimSite913.name = "l_clavicle_pt"
HAnimSite913.translation = [0.0271,1.4943,0.0394]
TouchSensor914 = x3d.TouchSensor()
TouchSensor914.description = "HAnimSite l_clavicale_pt"

HAnimSite913.children.append(TouchSensor914)
Shape915 = x3d.Shape()
Shape915.USE = "HAnimSiteShape"

HAnimSite913.children.append(Shape915)

HAnimSegment889.children.append(HAnimSite913)
HAnimSite916 = x3d.HAnimSite()
HAnimSite916.DEF = "hanim_l_acromion_pt"
HAnimSite916.name = "l_acromion_pt"
HAnimSite916.translation = [0.2032,1.476,-0.049]
TouchSensor917 = x3d.TouchSensor()
TouchSensor917.description = "HAnimSite l_acromion_pt"

HAnimSite916.children.append(TouchSensor917)
Shape918 = x3d.Shape()
Shape918.USE = "HAnimSiteShape"

HAnimSite916.children.append(Shape918)

HAnimSegment889.children.append(HAnimSite916)
HAnimSite919 = x3d.HAnimSite()
HAnimSite919.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite919.name = "l_axilla_proximal_pt"
HAnimSite919.translation = [0.1777,1.4065,-0.0075]
TouchSensor920 = x3d.TouchSensor()
TouchSensor920.description = "HAnimSite l_axilla_ant_pt"

HAnimSite919.children.append(TouchSensor920)
Shape921 = x3d.Shape()
Shape921.USE = "HAnimSiteShape"

HAnimSite919.children.append(Shape921)

HAnimSegment889.children.append(HAnimSite919)
HAnimSite922 = x3d.HAnimSite()
HAnimSite922.DEF = "hanim_l_axilla_distal_pt"
HAnimSite922.name = "l_axilla_distal_pt"
HAnimSite922.translation = [0.1706,1.4072,-0.0875]
TouchSensor923 = x3d.TouchSensor()
TouchSensor923.description = "HAnimSite l_axilla_post_pt"

HAnimSite922.children.append(TouchSensor923)
Shape924 = x3d.Shape()
Shape924.USE = "HAnimSiteShape"

HAnimSite922.children.append(Shape924)

HAnimSegment889.children.append(HAnimSite922)

HAnimJoint888.children.append(HAnimSegment889)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.DEF = "hanim_l_acromioclavicular"
HAnimJoint925.name = "l_acromioclavicular"
HAnimJoint925.center = [0.0962,1.4269,-0.0424]
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.DEF = "hanim_l_scapula"
HAnimSegment926.name = "l_scapula"
TouchSensor927 = x3d.TouchSensor()
TouchSensor927.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"

HAnimSegment926.children.append(TouchSensor927)
Transform928 = x3d.Transform()
Transform928.translation = [0.0962,1.4269,-0.0424]
Shape929 = x3d.Shape()
Shape929.USE = "HAnimJointShape"

Transform928.children.append(Shape929)

HAnimSegment926.children.append(Transform928)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.vertexCount = [2]
ColorRGBA932 = x3d.ColorRGBA()
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA"

LineSet931.color = ColorRGBA932
Coordinate933 = x3d.Coordinate()
Coordinate933.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet931.coord = Coordinate933

Shape930.geometry = LineSet931

HAnimSegment926.children.append(Shape930)

HAnimJoint925.children.append(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.DEF = "hanim_l_shoulder"
HAnimJoint934.name = "l_shoulder"
HAnimJoint934.center = [0.2029,1.4376,-0.0387]
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.DEF = "hanim_l_upperarm"
HAnimSegment935.name = "l_upperarm"
TouchSensor936 = x3d.TouchSensor()
TouchSensor936.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm"

HAnimSegment935.children.append(TouchSensor936)
Transform937 = x3d.Transform()
Transform937.translation = [0.2029,1.4376,-0.0387]
Shape938 = x3d.Shape()
Shape938.USE = "HAnimJointShape"

Transform937.children.append(Shape938)

HAnimSegment935.children.append(Transform937)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.vertexCount = [2]
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA"

LineSet940.color = ColorRGBA941
Coordinate942 = x3d.Coordinate()
Coordinate942.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet940.coord = Coordinate942

Shape939.geometry = LineSet940

HAnimSegment935.children.append(Shape939)
Shape943 = x3d.Shape()
LineSet944 = x3d.LineSet()
LineSet944.vertexCount = [2]
ColorRGBA945 = x3d.ColorRGBA()
ColorRGBA945.USE = "HAnimSiteLineColorRGBA"

LineSet944.color = ColorRGBA945
Coordinate946 = x3d.Coordinate()
Coordinate946.point = [(0.2029, 1.4376, -0.0387),(0.228, 1.1482, -0.11)]

LineSet944.coord = Coordinate946

Shape943.geometry = LineSet944

HAnimSegment935.children.append(Shape943)
HAnimSite947 = x3d.HAnimSite()
HAnimSite947.DEF = "hanim_l_humeral_lateral_epicondyle_pt"
HAnimSite947.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite947.translation = [0.228,1.1482,-0.11]
TouchSensor948 = x3d.TouchSensor()
TouchSensor948.description = "HAnimSite l_humeral_lateral_epicn_pt"

HAnimSite947.children.append(TouchSensor948)
Shape949 = x3d.Shape()
Shape949.USE = "HAnimSiteShape"

HAnimSite947.children.append(Shape949)

HAnimSegment935.children.append(HAnimSite947)

HAnimJoint934.children.append(HAnimSegment935)
HAnimJoint950 = x3d.HAnimJoint()
HAnimJoint950.DEF = "hanim_l_elbow"
HAnimJoint950.name = "l_elbow"
HAnimJoint950.center = [0.2014,1.1357,-0.0682]
HAnimSegment951 = x3d.HAnimSegment()
HAnimSegment951.DEF = "hanim_l_forearm"
HAnimSegment951.name = "l_forearm"
TouchSensor952 = x3d.TouchSensor()
TouchSensor952.description = "HAnimJoint l_elbow, HAnimSegment l_forearm"

HAnimSegment951.children.append(TouchSensor952)
Transform953 = x3d.Transform()
Transform953.translation = [0.2014,1.1357,-0.0682]
Shape954 = x3d.Shape()
Shape954.USE = "HAnimJointShape"

Transform953.children.append(Shape954)

HAnimSegment951.children.append(Transform953)
Shape955 = x3d.Shape()
LineSet956 = x3d.LineSet()
LineSet956.vertexCount = [2]
ColorRGBA957 = x3d.ColorRGBA()
ColorRGBA957.USE = "HAnimSegmentLineColorRGBA"

LineSet956.color = ColorRGBA957
Coordinate958 = x3d.Coordinate()
Coordinate958.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet956.coord = Coordinate958

Shape955.geometry = LineSet956

HAnimSegment951.children.append(Shape955)
Shape959 = x3d.Shape()
LineSet960 = x3d.LineSet()
LineSet960.vertexCount = [2]
ColorRGBA961 = x3d.ColorRGBA()
ColorRGBA961.USE = "HAnimSiteLineColorRGBA"

LineSet960.color = ColorRGBA961
Coordinate962 = x3d.Coordinate()
Coordinate962.point = [(0.2014, 1.1357, -0.0682),(0.1901, 0.8645, -0.0415)]

LineSet960.coord = Coordinate962

Shape959.geometry = LineSet960

HAnimSegment951.children.append(Shape959)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.vertexCount = [2]
ColorRGBA965 = x3d.ColorRGBA()
ColorRGBA965.USE = "HAnimSiteLineColorRGBA"

LineSet964.color = ColorRGBA965
Coordinate966 = x3d.Coordinate()
Coordinate966.point = [(0.2014, 1.1357, -0.0682),(0.1962, 1.1375, -0.1123)]

LineSet964.coord = Coordinate966

Shape963.geometry = LineSet964

HAnimSegment951.children.append(Shape963)
Shape967 = x3d.Shape()
LineSet968 = x3d.LineSet()
LineSet968.vertexCount = [2]
ColorRGBA969 = x3d.ColorRGBA()
ColorRGBA969.USE = "HAnimSiteLineColorRGBA"

LineSet968.color = ColorRGBA969
Coordinate970 = x3d.Coordinate()
Coordinate970.point = [(0.2014, 1.1357, -0.0682),(0.1735, 1.1272, -0.1113)]

LineSet968.coord = Coordinate970

Shape967.geometry = LineSet968

HAnimSegment951.children.append(Shape967)
Shape971 = x3d.Shape()
LineSet972 = x3d.LineSet()
LineSet972.vertexCount = [2]
ColorRGBA973 = x3d.ColorRGBA()
ColorRGBA973.USE = "HAnimSiteLineColorRGBA"

LineSet972.color = ColorRGBA973
Coordinate974 = x3d.Coordinate()
Coordinate974.point = [(0.2014, 1.1357, -0.0682),(0.2182, 1.1212, -0.1167)]

LineSet972.coord = Coordinate974

Shape971.geometry = LineSet972

HAnimSegment951.children.append(Shape971)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.DEF = "hanim_l_radial_styloid_pt"
HAnimSite975.name = "l_radial_styloid_pt"
HAnimSite975.translation = [0.1901,0.8645,-0.0415]
TouchSensor976 = x3d.TouchSensor()
TouchSensor976.description = "HAnimSite l_radial_styloid_pt"

HAnimSite975.children.append(TouchSensor976)
Shape977 = x3d.Shape()
Shape977.USE = "HAnimSiteShape"

HAnimSite975.children.append(Shape977)

HAnimSegment951.children.append(HAnimSite975)
HAnimSite978 = x3d.HAnimSite()
HAnimSite978.DEF = "hanim_l_olecranon_pt"
HAnimSite978.name = "l_olecranon_pt"
HAnimSite978.translation = [0.1962,1.1375,-0.1123]
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.description = "HAnimSite l_olecranon_pt"

HAnimSite978.children.append(TouchSensor979)
Shape980 = x3d.Shape()
Shape980.USE = "HAnimSiteShape"

HAnimSite978.children.append(Shape980)

HAnimSegment951.children.append(HAnimSite978)
HAnimSite981 = x3d.HAnimSite()
HAnimSite981.DEF = "hanim_l_humeral_medial_epicondyle_pt"
HAnimSite981.name = "l_humeral_medial_epicondyle_pt"
HAnimSite981.translation = [0.1735,1.1272,-0.1113]
TouchSensor982 = x3d.TouchSensor()
TouchSensor982.description = "HAnimSite l_humeral_medial_epicn_pt"

HAnimSite981.children.append(TouchSensor982)
Shape983 = x3d.Shape()
Shape983.USE = "HAnimSiteShape"

HAnimSite981.children.append(Shape983)

HAnimSegment951.children.append(HAnimSite981)
HAnimSite984 = x3d.HAnimSite()
HAnimSite984.DEF = "hanim_l_radiale_pt"
HAnimSite984.name = "l_radiale_pt"
HAnimSite984.translation = [0.2182,1.1212,-0.1167]
TouchSensor985 = x3d.TouchSensor()
TouchSensor985.description = "HAnimSite l_radiale_pt"

HAnimSite984.children.append(TouchSensor985)
Shape986 = x3d.Shape()
Shape986.USE = "HAnimSiteShape"

HAnimSite984.children.append(Shape986)

HAnimSegment951.children.append(HAnimSite984)

HAnimJoint950.children.append(HAnimSegment951)
HAnimJoint987 = x3d.HAnimJoint()
HAnimJoint987.DEF = "hanim_l_radiocarpal"
HAnimJoint987.name = "l_radiocarpal"
HAnimJoint987.center = [0.1984,0.8663,-0.0583]
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.DEF = "hanim_l_carpal"
HAnimSegment988.name = "l_carpal"
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal"

HAnimSegment988.children.append(TouchSensor989)
Transform990 = x3d.Transform()
Transform990.translation = [0.1984,0.8663,-0.0583]
Shape991 = x3d.Shape()
Shape991.USE = "HAnimJointShape"

Transform990.children.append(Shape991)

HAnimSegment988.children.append(Transform990)
Shape992 = x3d.Shape()
LineSet993 = x3d.LineSet()
LineSet993.vertexCount = [2]
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA"

LineSet993.color = ColorRGBA994
Coordinate995 = x3d.Coordinate()
Coordinate995.point = [(0.1984, 0.8663, -0.0583),(0.1924, 0.8472, -0.0534)]

LineSet993.coord = Coordinate995

Shape992.geometry = LineSet993

HAnimSegment988.children.append(Shape992)
Shape996 = x3d.Shape()
LineSet997 = x3d.LineSet()
LineSet997.vertexCount = [2]
ColorRGBA998 = x3d.ColorRGBA()
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA"

LineSet997.color = ColorRGBA998
Coordinate999 = x3d.Coordinate()
Coordinate999.point = [(0.1984, 0.8663, -0.0583),(0.1983, 0.8024, -0.028)]

LineSet997.coord = Coordinate999

Shape996.geometry = LineSet997

HAnimSegment988.children.append(Shape996)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.vertexCount = [2]
ColorRGBA1002 = x3d.ColorRGBA()
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA"

LineSet1001.color = ColorRGBA1002
Coordinate1003 = x3d.Coordinate()
Coordinate1003.point = [(0.1984, 0.8663, -0.0583),(0.1987, 0.8029, -0.053)]

LineSet1001.coord = Coordinate1003

Shape1000.geometry = LineSet1001

HAnimSegment988.children.append(Shape1000)
Shape1004 = x3d.Shape()
LineSet1005 = x3d.LineSet()
LineSet1005.vertexCount = [2]
ColorRGBA1006 = x3d.ColorRGBA()
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA"

LineSet1005.color = ColorRGBA1006
Coordinate1007 = x3d.Coordinate()
Coordinate1007.point = [(0.1984, 0.8663, -0.0583),(0.1956, 0.8019, -0.0794)]

LineSet1005.coord = Coordinate1007

Shape1004.geometry = LineSet1005

HAnimSegment988.children.append(Shape1004)
Shape1008 = x3d.Shape()
LineSet1009 = x3d.LineSet()
LineSet1009.vertexCount = [2]
ColorRGBA1010 = x3d.ColorRGBA()
ColorRGBA1010.USE = "HAnimSegmentLineColorRGBA"

LineSet1009.color = ColorRGBA1010
Coordinate1011 = x3d.Coordinate()
Coordinate1011.point = [(0.1984, 0.8663, -0.0583),(0.1925, 0.8066, -0.1036)]

LineSet1009.coord = Coordinate1011

Shape1008.geometry = LineSet1009

HAnimSegment988.children.append(Shape1008)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.vertexCount = [2]
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA"

LineSet1013.color = ColorRGBA1014
Coordinate1015 = x3d.Coordinate()
Coordinate1015.point = [(0.1984, 0.8663, -0.0583),(0.2009, 0.8139, -0.0237)]

LineSet1013.coord = Coordinate1015

Shape1012.geometry = LineSet1013

HAnimSegment988.children.append(Shape1012)
Shape1016 = x3d.Shape()
LineSet1017 = x3d.LineSet()
LineSet1017.vertexCount = [2]
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA"

LineSet1017.color = ColorRGBA1018
Coordinate1019 = x3d.Coordinate()
Coordinate1019.point = [(0.1984, 0.8663, -0.0583),(0.2142, 0.8529, -0.0648)]

LineSet1017.coord = Coordinate1019

Shape1016.geometry = LineSet1017

HAnimSegment988.children.append(Shape1016)
Shape1020 = x3d.Shape()
LineSet1021 = x3d.LineSet()
LineSet1021.vertexCount = [2]
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.USE = "HAnimSiteLineColorRGBA"

LineSet1021.color = ColorRGBA1022
Coordinate1023 = x3d.Coordinate()
Coordinate1023.point = [(0.1984, 0.8663, -0.0583),(0.1929, 0.786, -0.1122)]

LineSet1021.coord = Coordinate1023

Shape1020.geometry = LineSet1021

HAnimSegment988.children.append(Shape1020)
Shape1024 = x3d.Shape()
LineSet1025 = x3d.LineSet()
LineSet1025.vertexCount = [2]
ColorRGBA1026 = x3d.ColorRGBA()
ColorRGBA1026.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1025.color = ColorRGBA1026
Coordinate1027 = x3d.Coordinate()
Coordinate1027.point = [(0.1984, 0.8663, -0.0583),(0.3, 0.75, 0.45)]

LineSet1025.coord = Coordinate1027

Shape1024.geometry = LineSet1025

HAnimSegment988.children.append(Shape1024)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite1028.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1028.translation = [0.2009,0.8139,-0.0237]
TouchSensor1029 = x3d.TouchSensor()
TouchSensor1029.description = "HAnimSite l_metacarpal_pha2_pt"

HAnimSite1028.children.append(TouchSensor1029)
Shape1030 = x3d.Shape()
Shape1030.USE = "HAnimSiteShape"

HAnimSite1028.children.append(Shape1030)

HAnimSegment988.children.append(HAnimSite1028)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1031.name = "l_ulnar_styloid_pt"
HAnimSite1031.translation = [0.2142,0.8529,-0.0648]
TouchSensor1032 = x3d.TouchSensor()
TouchSensor1032.description = "HAnimSite l_ulnar_styloid_pt"

HAnimSite1031.children.append(TouchSensor1032)
Shape1033 = x3d.Shape()
Shape1033.USE = "HAnimSiteShape"

HAnimSite1031.children.append(Shape1033)

HAnimSegment988.children.append(HAnimSite1031)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite1034.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1034.translation = [0.1929,0.786,-0.1122]
TouchSensor1035 = x3d.TouchSensor()
TouchSensor1035.description = "HAnimSite l_metacarpal_pha5_pt"

HAnimSite1034.children.append(TouchSensor1035)
Shape1036 = x3d.Shape()
Shape1036.USE = "HAnimSiteShape"

HAnimSite1034.children.append(Shape1036)

HAnimSegment988.children.append(HAnimSite1034)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.DEF = "hanim_l_hand_front_view"
HAnimSite1037.name = "l_hand_front_view"
HAnimSite1037.translation = [0.3,0.75,0.45]
TouchSensor1038 = x3d.TouchSensor()
TouchSensor1038.description = "HAnimSite l_hand_front_view"

HAnimSite1037.children.append(TouchSensor1038)
Shape1039 = x3d.Shape()
Shape1039.USE = "HAnimSiteShape"

HAnimSite1037.children.append(Shape1039)
Viewpoint1040 = x3d.Viewpoint()
Viewpoint1040.DEF = "hanim_l_hand_front_viewpoint"
Viewpoint1040.description = "left hand front"
Viewpoint1040.position = [0,0,0]
Viewpoint1040.centerOfRotation = [0,0.7,0]

HAnimSite1037.children.append(Viewpoint1040)
Anchor1041 = x3d.Anchor()
Anchor1041.description = "HAnimSite hanim_l_hand_front_view Viewpoint"
Anchor1041.url = ["#hanim_l_hand_front_viewpoint"]
LOD1042 = x3d.LOD()
LOD1042.forceTransitions = True
LOD1042.range = [0.04]
WorldInfo1043 = x3d.WorldInfo()
WorldInfo1043.info = ["hide diamond when close"]

LOD1042.children.append(WorldInfo1043)
Shape1044 = x3d.Shape()
Shape1044.USE = "HAnimSiteViewpointShape"

LOD1042.children.append(Shape1044)

Anchor1041.children.append(LOD1042)

HAnimSite1037.children.append(Anchor1041)

HAnimSegment988.children.append(HAnimSite1037)

HAnimJoint987.children.append(HAnimSegment988)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1045.name = "l_carpometacarpal_1"
HAnimJoint1045.center = [0.1924,0.8472,-0.0534]
HAnimSegment1046 = x3d.HAnimSegment()
HAnimSegment1046.DEF = "hanim_l_metacarpal_1"
HAnimSegment1046.name = "l_metacarpal_1"
TouchSensor1047 = x3d.TouchSensor()
TouchSensor1047.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1"

HAnimSegment1046.children.append(TouchSensor1047)
Transform1048 = x3d.Transform()
Transform1048.translation = [0.1924,0.8472,-0.0534]
Shape1049 = x3d.Shape()
Shape1049.USE = "HAnimJointShape"

Transform1048.children.append(Shape1049)

HAnimSegment1046.children.append(Transform1048)
Shape1050 = x3d.Shape()
LineSet1051 = x3d.LineSet()
LineSet1051.vertexCount = [2]
ColorRGBA1052 = x3d.ColorRGBA()
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA"

LineSet1051.color = ColorRGBA1052
Coordinate1053 = x3d.Coordinate()
Coordinate1053.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1051.coord = Coordinate1053

Shape1050.geometry = LineSet1051

HAnimSegment1046.children.append(Shape1050)

HAnimJoint1045.children.append(HAnimSegment1046)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1054.name = "l_metacarpophalangeal_1"
HAnimJoint1054.center = [0.1951,0.8226,0.0246]
HAnimSegment1055 = x3d.HAnimSegment()
HAnimSegment1055.DEF = "hanim_l_carpal_proximal_phalanx_1"
HAnimSegment1055.name = "l_carpal_proximal_phalanx_1"
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1"

HAnimSegment1055.children.append(TouchSensor1056)
Transform1057 = x3d.Transform()
Transform1057.translation = [0.1951,0.8226,0.0246]
Shape1058 = x3d.Shape()
Shape1058.USE = "HAnimJointShape"

Transform1057.children.append(Shape1058)

HAnimSegment1055.children.append(Transform1057)
Shape1059 = x3d.Shape()
LineSet1060 = x3d.LineSet()
LineSet1060.vertexCount = [2]
ColorRGBA1061 = x3d.ColorRGBA()
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA"

LineSet1060.color = ColorRGBA1061
Coordinate1062 = x3d.Coordinate()
Coordinate1062.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1060.coord = Coordinate1062

Shape1059.geometry = LineSet1060

HAnimSegment1055.children.append(Shape1059)

HAnimJoint1054.children.append(HAnimSegment1055)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1063.name = "l_carpal_interphalangeal_1"
HAnimJoint1063.center = [0.1955,0.8159,0.0464]
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.DEF = "hanim_l_carpal_distal_phalanx_1"
HAnimSegment1064.name = "l_carpal_distal_phalanx_1"
TouchSensor1065 = x3d.TouchSensor()
TouchSensor1065.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1"

HAnimSegment1064.children.append(TouchSensor1065)
Transform1066 = x3d.Transform()
Transform1066.translation = [0.1955,0.8159,0.0464]
Shape1067 = x3d.Shape()
Shape1067.USE = "HAnimJointShape"

Transform1066.children.append(Shape1067)

HAnimSegment1064.children.append(Transform1066)
Shape1068 = x3d.Shape()
LineSet1069 = x3d.LineSet()
LineSet1069.vertexCount = [2]
ColorRGBA1070 = x3d.ColorRGBA()
ColorRGBA1070.USE = "HAnimSiteLineColorRGBA"

LineSet1069.color = ColorRGBA1070
Coordinate1071 = x3d.Coordinate()
Coordinate1071.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

LineSet1069.coord = Coordinate1071

Shape1068.geometry = LineSet1069

HAnimSegment1064.children.append(Shape1068)
HAnimSite1072 = x3d.HAnimSite()
HAnimSite1072.DEF = "hanim_l_carpal_distal_phalanx_1_pt"
HAnimSite1072.name = "l_carpal_distal_phalanx_1_pt"
HAnimSite1072.translation = [0.1982,0.8061,0.0759]
TouchSensor1073 = x3d.TouchSensor()
TouchSensor1073.description = "HAnimSite l_thumb_distal_tip"

HAnimSite1072.children.append(TouchSensor1073)
Shape1074 = x3d.Shape()
Shape1074.USE = "HAnimSiteShape"

HAnimSite1072.children.append(Shape1074)

HAnimSegment1064.children.append(HAnimSite1072)

HAnimJoint1063.children.append(HAnimSegment1064)

HAnimJoint1054.children.append(HAnimJoint1063)

HAnimJoint1045.children.append(HAnimJoint1054)

HAnimJoint987.children.append(HAnimJoint1045)
HAnimJoint1075 = x3d.HAnimJoint()
HAnimJoint1075.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1075.name = "l_carpometacarpal_2"
HAnimJoint1075.center = [0.1983,0.8024,-0.028]
HAnimSegment1076 = x3d.HAnimSegment()
HAnimSegment1076.DEF = "hanim_l_metacarpal_2"
HAnimSegment1076.name = "l_metacarpal_2"
TouchSensor1077 = x3d.TouchSensor()
TouchSensor1077.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2"

HAnimSegment1076.children.append(TouchSensor1077)
Transform1078 = x3d.Transform()
Transform1078.translation = [0.1983,0.8024,-0.028]
Shape1079 = x3d.Shape()
Shape1079.USE = "HAnimJointShape"

Transform1078.children.append(Shape1079)

HAnimSegment1076.children.append(Transform1078)
Shape1080 = x3d.Shape()
LineSet1081 = x3d.LineSet()
LineSet1081.vertexCount = [2]
ColorRGBA1082 = x3d.ColorRGBA()
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA"

LineSet1081.color = ColorRGBA1082
Coordinate1083 = x3d.Coordinate()
Coordinate1083.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1081.coord = Coordinate1083

Shape1080.geometry = LineSet1081

HAnimSegment1076.children.append(Shape1080)

HAnimJoint1075.children.append(HAnimSegment1076)
HAnimJoint1084 = x3d.HAnimJoint()
HAnimJoint1084.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1084.name = "l_metacarpophalangeal_2"
HAnimJoint1084.center = [0.1983,0.7815,-0.028]
HAnimSegment1085 = x3d.HAnimSegment()
HAnimSegment1085.DEF = "hanim_l_carpal_proximal_phalanx_2"
HAnimSegment1085.name = "l_carpal_proximal_phalanx_2"
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2"

HAnimSegment1085.children.append(TouchSensor1086)
Transform1087 = x3d.Transform()
Transform1087.translation = [0.1983,0.7815,-0.028]
Shape1088 = x3d.Shape()
Shape1088.USE = "HAnimJointShape"

Transform1087.children.append(Shape1088)

HAnimSegment1085.children.append(Transform1087)
Shape1089 = x3d.Shape()
LineSet1090 = x3d.LineSet()
LineSet1090.vertexCount = [2]
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA"

LineSet1090.color = ColorRGBA1091
Coordinate1092 = x3d.Coordinate()
Coordinate1092.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1090.coord = Coordinate1092

Shape1089.geometry = LineSet1090

HAnimSegment1085.children.append(Shape1089)

HAnimJoint1084.children.append(HAnimSegment1085)
HAnimJoint1093 = x3d.HAnimJoint()
HAnimJoint1093.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1093.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1093.center = [0.2017,0.7363,-0.0248]
HAnimSegment1094 = x3d.HAnimSegment()
HAnimSegment1094.DEF = "hanim_l_carpal_middle_phalanx_2"
HAnimSegment1094.name = "l_carpal_middle_phalanx_2"
TouchSensor1095 = x3d.TouchSensor()
TouchSensor1095.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2"

HAnimSegment1094.children.append(TouchSensor1095)
Transform1096 = x3d.Transform()
Transform1096.translation = [0.2017,0.7363,-0.0248]
Shape1097 = x3d.Shape()
Shape1097.USE = "HAnimJointShape"

Transform1096.children.append(Shape1097)

HAnimSegment1094.children.append(Transform1096)
Shape1098 = x3d.Shape()
LineSet1099 = x3d.LineSet()
LineSet1099.vertexCount = [2]
ColorRGBA1100 = x3d.ColorRGBA()
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA"

LineSet1099.color = ColorRGBA1100
Coordinate1101 = x3d.Coordinate()
Coordinate1101.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1099.coord = Coordinate1101

Shape1098.geometry = LineSet1099

HAnimSegment1094.children.append(Shape1098)

HAnimJoint1093.children.append(HAnimSegment1094)
HAnimJoint1102 = x3d.HAnimJoint()
HAnimJoint1102.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1102.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1102.center = [0.2028,0.7139,-0.0236]
HAnimSegment1103 = x3d.HAnimSegment()
HAnimSegment1103.DEF = "hanim_l_carpal_distal_phalanx_2"
HAnimSegment1103.name = "l_carpal_distal_phalanx_2"
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2"

HAnimSegment1103.children.append(TouchSensor1104)
Transform1105 = x3d.Transform()
Transform1105.translation = [0.2028,0.7139,-0.0236]
Shape1106 = x3d.Shape()
Shape1106.USE = "HAnimJointShape"

Transform1105.children.append(Shape1106)

HAnimSegment1103.children.append(Transform1105)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.vertexCount = [2]
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA"

LineSet1108.color = ColorRGBA1109
Coordinate1110 = x3d.Coordinate()
Coordinate1110.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

LineSet1108.coord = Coordinate1110

Shape1107.geometry = LineSet1108

HAnimSegment1103.children.append(Shape1107)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.vertexCount = [2]
ColorRGBA1113 = x3d.ColorRGBA()
ColorRGBA1113.USE = "HAnimSiteLineColorRGBA"

LineSet1112.color = ColorRGBA1113
Coordinate1114 = x3d.Coordinate()
Coordinate1114.point = [(0.2028, 0.7139, -0.0236),(0.2056, 0.6743, -0.0482)]

LineSet1112.coord = Coordinate1114

Shape1111.geometry = LineSet1112

HAnimSegment1103.children.append(Shape1111)
HAnimSite1115 = x3d.HAnimSite()
HAnimSite1115.DEF = "hanim_l_carpal_distal_phalanx_2_pt"
HAnimSite1115.name = "l_carpal_distal_phalanx_2_pt"
HAnimSite1115.translation = [0.2089,0.6858,-0.0245]
TouchSensor1116 = x3d.TouchSensor()
TouchSensor1116.description = "HAnimSite l_index_distal_tip"

HAnimSite1115.children.append(TouchSensor1116)
Shape1117 = x3d.Shape()
Shape1117.USE = "HAnimSiteShape"

HAnimSite1115.children.append(Shape1117)

HAnimSegment1103.children.append(HAnimSite1115)
HAnimSite1118 = x3d.HAnimSite()
HAnimSite1118.DEF = "hanim_l_dactylion_pt"
HAnimSite1118.name = "l_dactylion_pt"
HAnimSite1118.translation = [0.2056,0.6743,-0.0482]
TouchSensor1119 = x3d.TouchSensor()
TouchSensor1119.description = "HAnimSite l_dactylion_pt"

HAnimSite1118.children.append(TouchSensor1119)
Shape1120 = x3d.Shape()
Shape1120.USE = "HAnimSiteShape"

HAnimSite1118.children.append(Shape1120)

HAnimSegment1103.children.append(HAnimSite1118)

HAnimJoint1102.children.append(HAnimSegment1103)

HAnimJoint1093.children.append(HAnimJoint1102)

HAnimJoint1084.children.append(HAnimJoint1093)

HAnimJoint1075.children.append(HAnimJoint1084)

HAnimJoint987.children.append(HAnimJoint1075)
HAnimJoint1121 = x3d.HAnimJoint()
HAnimJoint1121.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1121.name = "l_carpometacarpal_3"
HAnimJoint1121.center = [0.1987,0.8029,-0.053]
HAnimSegment1122 = x3d.HAnimSegment()
HAnimSegment1122.DEF = "hanim_l_metacarpal_3"
HAnimSegment1122.name = "l_metacarpal_3"
TouchSensor1123 = x3d.TouchSensor()
TouchSensor1123.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3"

HAnimSegment1122.children.append(TouchSensor1123)
Transform1124 = x3d.Transform()
Transform1124.translation = [0.1987,0.8029,-0.053]
Shape1125 = x3d.Shape()
Shape1125.USE = "HAnimJointShape"

Transform1124.children.append(Shape1125)

HAnimSegment1122.children.append(Transform1124)
Shape1126 = x3d.Shape()
LineSet1127 = x3d.LineSet()
LineSet1127.vertexCount = [2]
ColorRGBA1128 = x3d.ColorRGBA()
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA"

LineSet1127.color = ColorRGBA1128
Coordinate1129 = x3d.Coordinate()
Coordinate1129.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1127.coord = Coordinate1129

Shape1126.geometry = LineSet1127

HAnimSegment1122.children.append(Shape1126)

HAnimJoint1121.children.append(HAnimSegment1122)
HAnimJoint1130 = x3d.HAnimJoint()
HAnimJoint1130.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1130.name = "l_metacarpophalangeal_3"
HAnimJoint1130.center = [0.1987,0.7818,-0.053]
HAnimSegment1131 = x3d.HAnimSegment()
HAnimSegment1131.DEF = "hanim_l_carpal_proximal_phalanx_3"
HAnimSegment1131.name = "l_carpal_proximal_phalanx_3"
TouchSensor1132 = x3d.TouchSensor()
TouchSensor1132.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3"

HAnimSegment1131.children.append(TouchSensor1132)
Transform1133 = x3d.Transform()
Transform1133.translation = [0.1987,0.7818,-0.053]
Shape1134 = x3d.Shape()
Shape1134.USE = "HAnimJointShape"

Transform1133.children.append(Shape1134)

HAnimSegment1131.children.append(Transform1133)
Shape1135 = x3d.Shape()
LineSet1136 = x3d.LineSet()
LineSet1136.vertexCount = [2]
ColorRGBA1137 = x3d.ColorRGBA()
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA"

LineSet1136.color = ColorRGBA1137
Coordinate1138 = x3d.Coordinate()
Coordinate1138.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1136.coord = Coordinate1138

Shape1135.geometry = LineSet1136

HAnimSegment1131.children.append(Shape1135)

HAnimJoint1130.children.append(HAnimSegment1131)
HAnimJoint1139 = x3d.HAnimJoint()
HAnimJoint1139.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1139.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1139.center = [0.2013,0.7273,-0.0503]
HAnimSegment1140 = x3d.HAnimSegment()
HAnimSegment1140.DEF = "hanim_l_carpal_middle_phalanx_3"
HAnimSegment1140.name = "l_carpal_middle_phalanx_3"
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3"

HAnimSegment1140.children.append(TouchSensor1141)
Transform1142 = x3d.Transform()
Transform1142.translation = [0.2013,0.7273,-0.0503]
Shape1143 = x3d.Shape()
Shape1143.USE = "HAnimJointShape"

Transform1142.children.append(Shape1143)

HAnimSegment1140.children.append(Transform1142)
Shape1144 = x3d.Shape()
LineSet1145 = x3d.LineSet()
LineSet1145.vertexCount = [2]
ColorRGBA1146 = x3d.ColorRGBA()
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA"

LineSet1145.color = ColorRGBA1146
Coordinate1147 = x3d.Coordinate()
Coordinate1147.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1145.coord = Coordinate1147

Shape1144.geometry = LineSet1145

HAnimSegment1140.children.append(Shape1144)

HAnimJoint1139.children.append(HAnimSegment1140)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1148.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1148.center = [0.2026,0.7011,-0.0494]
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.DEF = "hanim_l_carpal_distal_phalanx_3"
HAnimSegment1149.name = "l_carpal_distal_phalanx_3"
TouchSensor1150 = x3d.TouchSensor()
TouchSensor1150.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3"

HAnimSegment1149.children.append(TouchSensor1150)
Transform1151 = x3d.Transform()
Transform1151.translation = [0.2026,0.7011,-0.0494]
Shape1152 = x3d.Shape()
Shape1152.USE = "HAnimJointShape"

Transform1151.children.append(Shape1152)

HAnimSegment1149.children.append(Transform1151)
Shape1153 = x3d.Shape()
LineSet1154 = x3d.LineSet()
LineSet1154.vertexCount = [2]
ColorRGBA1155 = x3d.ColorRGBA()
ColorRGBA1155.USE = "HAnimSiteLineColorRGBA"

LineSet1154.color = ColorRGBA1155
Coordinate1156 = x3d.Coordinate()
Coordinate1156.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

LineSet1154.coord = Coordinate1156

Shape1153.geometry = LineSet1154

HAnimSegment1149.children.append(Shape1153)
HAnimSite1157 = x3d.HAnimSite()
HAnimSite1157.DEF = "hanim_l_carpal_distal_phalanx_3_pt"
HAnimSite1157.name = "l_carpal_distal_phalanx_3_pt"
HAnimSite1157.translation = [0.208,0.6731,-0.0491]
TouchSensor1158 = x3d.TouchSensor()
TouchSensor1158.description = "HAnimSite l_middle_distal_tip"

HAnimSite1157.children.append(TouchSensor1158)
Shape1159 = x3d.Shape()
Shape1159.USE = "HAnimSiteShape"

HAnimSite1157.children.append(Shape1159)

HAnimSegment1149.children.append(HAnimSite1157)

HAnimJoint1148.children.append(HAnimSegment1149)

HAnimJoint1139.children.append(HAnimJoint1148)

HAnimJoint1130.children.append(HAnimJoint1139)

HAnimJoint1121.children.append(HAnimJoint1130)

HAnimJoint987.children.append(HAnimJoint1121)
HAnimJoint1160 = x3d.HAnimJoint()
HAnimJoint1160.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1160.name = "l_carpometacarpal_4"
HAnimJoint1160.center = [0.1956,0.8019,-0.0794]
HAnimSegment1161 = x3d.HAnimSegment()
HAnimSegment1161.DEF = "hanim_l_metacarpal_4"
HAnimSegment1161.name = "l_metacarpal_4"
TouchSensor1162 = x3d.TouchSensor()
TouchSensor1162.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4"

HAnimSegment1161.children.append(TouchSensor1162)
Transform1163 = x3d.Transform()
Transform1163.translation = [0.1956,0.8019,-0.0794]
Shape1164 = x3d.Shape()
Shape1164.USE = "HAnimJointShape"

Transform1163.children.append(Shape1164)

HAnimSegment1161.children.append(Transform1163)
Shape1165 = x3d.Shape()
LineSet1166 = x3d.LineSet()
LineSet1166.vertexCount = [2]
ColorRGBA1167 = x3d.ColorRGBA()
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA"

LineSet1166.color = ColorRGBA1167
Coordinate1168 = x3d.Coordinate()
Coordinate1168.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1166.coord = Coordinate1168

Shape1165.geometry = LineSet1166

HAnimSegment1161.children.append(Shape1165)

HAnimJoint1160.children.append(HAnimSegment1161)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1169.name = "l_metacarpophalangeal_4"
HAnimJoint1169.center = [0.1956,0.7815,-0.0794]
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.DEF = "hanim_l_carpal_proximal_phalanx_4"
HAnimSegment1170.name = "l_carpal_proximal_phalanx_4"
TouchSensor1171 = x3d.TouchSensor()
TouchSensor1171.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4"

HAnimSegment1170.children.append(TouchSensor1171)
Transform1172 = x3d.Transform()
Transform1172.translation = [0.1956,0.7815,-0.0794]
Shape1173 = x3d.Shape()
Shape1173.USE = "HAnimJointShape"

Transform1172.children.append(Shape1173)

HAnimSegment1170.children.append(Transform1172)
Shape1174 = x3d.Shape()
LineSet1175 = x3d.LineSet()
LineSet1175.vertexCount = [2]
ColorRGBA1176 = x3d.ColorRGBA()
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA"

LineSet1175.color = ColorRGBA1176
Coordinate1177 = x3d.Coordinate()
Coordinate1177.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1175.coord = Coordinate1177

Shape1174.geometry = LineSet1175

HAnimSegment1170.children.append(Shape1174)

HAnimJoint1169.children.append(HAnimSegment1170)
HAnimJoint1178 = x3d.HAnimJoint()
HAnimJoint1178.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1178.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1178.center = [0.1973,0.7287,-0.0777]
HAnimSegment1179 = x3d.HAnimSegment()
HAnimSegment1179.DEF = "hanim_l_carpal_middle_phalanx_4"
HAnimSegment1179.name = "l_carpal_middle_phalanx_4"
TouchSensor1180 = x3d.TouchSensor()
TouchSensor1180.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4"

HAnimSegment1179.children.append(TouchSensor1180)
Transform1181 = x3d.Transform()
Transform1181.translation = [0.1973,0.7287,-0.0777]
Shape1182 = x3d.Shape()
Shape1182.USE = "HAnimJointShape"

Transform1181.children.append(Shape1182)

HAnimSegment1179.children.append(Transform1181)
Shape1183 = x3d.Shape()
LineSet1184 = x3d.LineSet()
LineSet1184.vertexCount = [2]
ColorRGBA1185 = x3d.ColorRGBA()
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA"

LineSet1184.color = ColorRGBA1185
Coordinate1186 = x3d.Coordinate()
Coordinate1186.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1184.coord = Coordinate1186

Shape1183.geometry = LineSet1184

HAnimSegment1179.children.append(Shape1183)

HAnimJoint1178.children.append(HAnimSegment1179)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1187.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1187.center = [0.1983,0.7045,-0.0767]
HAnimSegment1188 = x3d.HAnimSegment()
HAnimSegment1188.DEF = "hanim_l_carpal_distal_phalanx_4"
HAnimSegment1188.name = "l_carpal_distal_phalanx_4"
TouchSensor1189 = x3d.TouchSensor()
TouchSensor1189.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4"

HAnimSegment1188.children.append(TouchSensor1189)
Transform1190 = x3d.Transform()
Transform1190.translation = [0.1983,0.7045,-0.0767]
Shape1191 = x3d.Shape()
Shape1191.USE = "HAnimJointShape"

Transform1190.children.append(Shape1191)

HAnimSegment1188.children.append(Transform1190)
Shape1192 = x3d.Shape()
LineSet1193 = x3d.LineSet()
LineSet1193.vertexCount = [2]
ColorRGBA1194 = x3d.ColorRGBA()
ColorRGBA1194.USE = "HAnimSiteLineColorRGBA"

LineSet1193.color = ColorRGBA1194
Coordinate1195 = x3d.Coordinate()
Coordinate1195.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

LineSet1193.coord = Coordinate1195

Shape1192.geometry = LineSet1193

HAnimSegment1188.children.append(Shape1192)
HAnimSite1196 = x3d.HAnimSite()
HAnimSite1196.DEF = "hanim_l_carpal_distal_phalanx_4_pt"
HAnimSite1196.name = "l_carpal_distal_phalanx_4_pt"
HAnimSite1196.translation = [0.2035,0.675,-0.0756]
TouchSensor1197 = x3d.TouchSensor()
TouchSensor1197.description = "HAnimSite l_ring_distal_tip"

HAnimSite1196.children.append(TouchSensor1197)
Shape1198 = x3d.Shape()
Shape1198.USE = "HAnimSiteShape"

HAnimSite1196.children.append(Shape1198)

HAnimSegment1188.children.append(HAnimSite1196)

HAnimJoint1187.children.append(HAnimSegment1188)

HAnimJoint1178.children.append(HAnimJoint1187)

HAnimJoint1169.children.append(HAnimJoint1178)

HAnimJoint1160.children.append(HAnimJoint1169)

HAnimJoint987.children.append(HAnimJoint1160)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1199.name = "l_carpometacarpal_5"
HAnimJoint1199.center = [0.1925,0.8066,-0.1036]
HAnimSegment1200 = x3d.HAnimSegment()
HAnimSegment1200.DEF = "hanim_l_metacarpal_5"
HAnimSegment1200.name = "l_metacarpal_5"
TouchSensor1201 = x3d.TouchSensor()
TouchSensor1201.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5"

HAnimSegment1200.children.append(TouchSensor1201)
Transform1202 = x3d.Transform()
Transform1202.translation = [0.1925,0.8066,-0.1036]
Shape1203 = x3d.Shape()
Shape1203.USE = "HAnimJointShape"

Transform1202.children.append(Shape1203)

HAnimSegment1200.children.append(Transform1202)
Shape1204 = x3d.Shape()
LineSet1205 = x3d.LineSet()
LineSet1205.vertexCount = [2]
ColorRGBA1206 = x3d.ColorRGBA()
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA"

LineSet1205.color = ColorRGBA1206
Coordinate1207 = x3d.Coordinate()
Coordinate1207.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1205.coord = Coordinate1207

Shape1204.geometry = LineSet1205

HAnimSegment1200.children.append(Shape1204)

HAnimJoint1199.children.append(HAnimSegment1200)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1208.name = "l_metacarpophalangeal_5"
HAnimJoint1208.center = [0.1925,0.7866,-0.1036]
HAnimSegment1209 = x3d.HAnimSegment()
HAnimSegment1209.DEF = "hanim_l_carpal_proximal_phalanx_5"
HAnimSegment1209.name = "l_carpal_proximal_phalanx_5"
TouchSensor1210 = x3d.TouchSensor()
TouchSensor1210.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5"

HAnimSegment1209.children.append(TouchSensor1210)
Transform1211 = x3d.Transform()
Transform1211.translation = [0.1925,0.7866,-0.1036]
Shape1212 = x3d.Shape()
Shape1212.USE = "HAnimJointShape"

Transform1211.children.append(Shape1212)

HAnimSegment1209.children.append(Transform1211)
Shape1213 = x3d.Shape()
LineSet1214 = x3d.LineSet()
LineSet1214.vertexCount = [2]
ColorRGBA1215 = x3d.ColorRGBA()
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA"

LineSet1214.color = ColorRGBA1215
Coordinate1216 = x3d.Coordinate()
Coordinate1216.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1214.coord = Coordinate1216

Shape1213.geometry = LineSet1214

HAnimSegment1209.children.append(Shape1213)

HAnimJoint1208.children.append(HAnimSegment1209)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1217.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1217.center = [0.1938,0.7452,-0.1024]
HAnimSegment1218 = x3d.HAnimSegment()
HAnimSegment1218.DEF = "hanim_l_carpal_middle_phalanx_5"
HAnimSegment1218.name = "l_carpal_middle_phalanx_5"
TouchSensor1219 = x3d.TouchSensor()
TouchSensor1219.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5"

HAnimSegment1218.children.append(TouchSensor1219)
Transform1220 = x3d.Transform()
Transform1220.translation = [0.1938,0.7452,-0.1024]
Shape1221 = x3d.Shape()
Shape1221.USE = "HAnimJointShape"

Transform1220.children.append(Shape1221)

HAnimSegment1218.children.append(Transform1220)
Shape1222 = x3d.Shape()
LineSet1223 = x3d.LineSet()
LineSet1223.vertexCount = [2]
ColorRGBA1224 = x3d.ColorRGBA()
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA"

LineSet1223.color = ColorRGBA1224
Coordinate1225 = x3d.Coordinate()
Coordinate1225.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1223.coord = Coordinate1225

Shape1222.geometry = LineSet1223

HAnimSegment1218.children.append(Shape1222)

HAnimJoint1217.children.append(HAnimSegment1218)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1226.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1226.center = [0.1948,0.7277,-0.1017]
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.DEF = "hanim_l_carpal_distal_phalanx_5"
HAnimSegment1227.name = "l_carpal_distal_phalanx_5"
TouchSensor1228 = x3d.TouchSensor()
TouchSensor1228.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5"

HAnimSegment1227.children.append(TouchSensor1228)
Transform1229 = x3d.Transform()
Transform1229.translation = [0.1948,0.7277,-0.1017]
Shape1230 = x3d.Shape()
Shape1230.USE = "HAnimJointShape"

Transform1229.children.append(Shape1230)

HAnimSegment1227.children.append(Transform1229)
Shape1231 = x3d.Shape()
LineSet1232 = x3d.LineSet()
LineSet1232.vertexCount = [2]
ColorRGBA1233 = x3d.ColorRGBA()
ColorRGBA1233.USE = "HAnimSiteLineColorRGBA"

LineSet1232.color = ColorRGBA1233
Coordinate1234 = x3d.Coordinate()
Coordinate1234.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

LineSet1232.coord = Coordinate1234

Shape1231.geometry = LineSet1232

HAnimSegment1227.children.append(Shape1231)
HAnimSite1235 = x3d.HAnimSite()
HAnimSite1235.DEF = "hanim_l_carpal_distal_phalanx_5_pt"
HAnimSite1235.name = "l_carpal_distal_phalanx_5_pt"
HAnimSite1235.translation = [0.2014,0.7009,-0.1012]
TouchSensor1236 = x3d.TouchSensor()
TouchSensor1236.description = "HAnimSite l_pinky_distal_tip"

HAnimSite1235.children.append(TouchSensor1236)
Shape1237 = x3d.Shape()
Shape1237.USE = "HAnimSiteShape"

HAnimSite1235.children.append(Shape1237)

HAnimSegment1227.children.append(HAnimSite1235)

HAnimJoint1226.children.append(HAnimSegment1227)

HAnimJoint1217.children.append(HAnimJoint1226)

HAnimJoint1208.children.append(HAnimJoint1217)

HAnimJoint1199.children.append(HAnimJoint1208)

HAnimJoint987.children.append(HAnimJoint1199)

HAnimJoint950.children.append(HAnimJoint987)

HAnimJoint934.children.append(HAnimJoint950)

HAnimJoint925.children.append(HAnimJoint934)

HAnimJoint888.children.append(HAnimJoint925)

HAnimJoint600.children.append(HAnimJoint888)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.DEF = "hanim_r_sternoclavicular"
HAnimJoint1238.name = "r_sternoclavicular"
HAnimJoint1238.center = [-0.082,1.4488,-0.0353]
HAnimSegment1239 = x3d.HAnimSegment()
HAnimSegment1239.DEF = "hanim_r_clavicle"
HAnimSegment1239.name = "r_clavicle"
TouchSensor1240 = x3d.TouchSensor()
TouchSensor1240.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"

HAnimSegment1239.children.append(TouchSensor1240)
Transform1241 = x3d.Transform()
Transform1241.translation = [-0.082,1.4488,-0.0353]
Shape1242 = x3d.Shape()
Shape1242.USE = "HAnimJointShape"

Transform1241.children.append(Shape1242)

HAnimSegment1239.children.append(Transform1241)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.vertexCount = [2]
ColorRGBA1245 = x3d.ColorRGBA()
ColorRGBA1245.USE = "HAnimSegmentLineColorRGBA"

LineSet1244.color = ColorRGBA1245
Coordinate1246 = x3d.Coordinate()
Coordinate1246.point = [(-0.082, 1.4488, -0.0353),(-0.0962, 1.4269, -0.0424)]

LineSet1244.coord = Coordinate1246

Shape1243.geometry = LineSet1244

HAnimSegment1239.children.append(Shape1243)
Shape1247 = x3d.Shape()
LineSet1248 = x3d.LineSet()
LineSet1248.vertexCount = [2]
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA"

LineSet1248.color = ColorRGBA1249
Coordinate1250 = x3d.Coordinate()
Coordinate1250.point = [(-0.082, 1.4488, -0.0353),(-0.0115, 1.4943, 0.04)]

LineSet1248.coord = Coordinate1250

Shape1247.geometry = LineSet1248

HAnimSegment1239.children.append(Shape1247)
Shape1251 = x3d.Shape()
LineSet1252 = x3d.LineSet()
LineSet1252.vertexCount = [2]
ColorRGBA1253 = x3d.ColorRGBA()
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA"

LineSet1252.color = ColorRGBA1253
Coordinate1254 = x3d.Coordinate()
Coordinate1254.point = [(-0.082, 1.4488, -0.0353),(-0.1905, 1.4791, -0.0431)]

LineSet1252.coord = Coordinate1254

Shape1251.geometry = LineSet1252

HAnimSegment1239.children.append(Shape1251)
Shape1255 = x3d.Shape()
LineSet1256 = x3d.LineSet()
LineSet1256.vertexCount = [2]
ColorRGBA1257 = x3d.ColorRGBA()
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA"

LineSet1256.color = ColorRGBA1257
Coordinate1258 = x3d.Coordinate()
Coordinate1258.point = [(-0.082, 1.4488, -0.0353),(-0.1626, 1.4072, -0.0031)]

LineSet1256.coord = Coordinate1258

Shape1255.geometry = LineSet1256

HAnimSegment1239.children.append(Shape1255)
Shape1259 = x3d.Shape()
LineSet1260 = x3d.LineSet()
LineSet1260.vertexCount = [2]
ColorRGBA1261 = x3d.ColorRGBA()
ColorRGBA1261.USE = "HAnimSiteLineColorRGBA"

LineSet1260.color = ColorRGBA1261
Coordinate1262 = x3d.Coordinate()
Coordinate1262.point = [(-0.082, 1.4488, -0.0353),(-0.1603, 1.4098, -0.0826)]

LineSet1260.coord = Coordinate1262

Shape1259.geometry = LineSet1260

HAnimSegment1239.children.append(Shape1259)
HAnimSite1263 = x3d.HAnimSite()
HAnimSite1263.DEF = "hanim_r_clavicle_pt"
HAnimSite1263.name = "r_clavicle_pt"
HAnimSite1263.translation = [-0.0115,1.4943,0.04]
TouchSensor1264 = x3d.TouchSensor()
TouchSensor1264.description = "HAnimSite r_clavicale_pt"

HAnimSite1263.children.append(TouchSensor1264)
Shape1265 = x3d.Shape()
Shape1265.USE = "HAnimSiteShape"

HAnimSite1263.children.append(Shape1265)

HAnimSegment1239.children.append(HAnimSite1263)
HAnimSite1266 = x3d.HAnimSite()
HAnimSite1266.DEF = "hanim_r_acromion_pt"
HAnimSite1266.name = "r_acromion_pt"
HAnimSite1266.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1267 = x3d.TouchSensor()
TouchSensor1267.description = "HAnimSite r_acromion_pt"

HAnimSite1266.children.append(TouchSensor1267)
Shape1268 = x3d.Shape()
Shape1268.USE = "HAnimSiteShape"

HAnimSite1266.children.append(Shape1268)

HAnimSegment1239.children.append(HAnimSite1266)
HAnimSite1269 = x3d.HAnimSite()
HAnimSite1269.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite1269.name = "r_axilla_proximal_pt"
HAnimSite1269.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1270 = x3d.TouchSensor()
TouchSensor1270.description = "HAnimSite r_axilla_ant_pt"

HAnimSite1269.children.append(TouchSensor1270)
Shape1271 = x3d.Shape()
Shape1271.USE = "HAnimSiteShape"

HAnimSite1269.children.append(Shape1271)

HAnimSegment1239.children.append(HAnimSite1269)
HAnimSite1272 = x3d.HAnimSite()
HAnimSite1272.DEF = "hanim_r_axilla_distal_pt"
HAnimSite1272.name = "r_axilla_distal_pt"
HAnimSite1272.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.description = "HAnimSite r_axilla_post_pt"

HAnimSite1272.children.append(TouchSensor1273)
Shape1274 = x3d.Shape()
Shape1274.USE = "HAnimSiteShape"

HAnimSite1272.children.append(Shape1274)

HAnimSegment1239.children.append(HAnimSite1272)

HAnimJoint1238.children.append(HAnimSegment1239)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.DEF = "hanim_r_acromioclavicular"
HAnimJoint1275.name = "r_acromioclavicular"
HAnimJoint1275.center = [-0.0962,1.4269,-0.0424]
HAnimSegment1276 = x3d.HAnimSegment()
HAnimSegment1276.DEF = "hanim_r_scapula"
HAnimSegment1276.name = "r_scapula"
TouchSensor1277 = x3d.TouchSensor()
TouchSensor1277.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"

HAnimSegment1276.children.append(TouchSensor1277)
Transform1278 = x3d.Transform()
Transform1278.translation = [-0.0962,1.4269,-0.0424]
Shape1279 = x3d.Shape()
Shape1279.USE = "HAnimJointShape"

Transform1278.children.append(Shape1279)

HAnimSegment1276.children.append(Transform1278)
Shape1280 = x3d.Shape()
LineSet1281 = x3d.LineSet()
LineSet1281.vertexCount = [2]
ColorRGBA1282 = x3d.ColorRGBA()
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA"

LineSet1281.color = ColorRGBA1282
Coordinate1283 = x3d.Coordinate()
Coordinate1283.point = [(-0.0962, 1.4269, -0.0424),(-0.2029, 1.4376, -0.0387)]

LineSet1281.coord = Coordinate1283

Shape1280.geometry = LineSet1281

HAnimSegment1276.children.append(Shape1280)

HAnimJoint1275.children.append(HAnimSegment1276)
HAnimJoint1284 = x3d.HAnimJoint()
HAnimJoint1284.DEF = "hanim_r_shoulder"
HAnimJoint1284.name = "r_shoulder"
HAnimJoint1284.center = [-0.2029,1.4376,-0.0387]
HAnimSegment1285 = x3d.HAnimSegment()
HAnimSegment1285.DEF = "hanim_r_upperarm"
HAnimSegment1285.name = "r_upperarm"
TouchSensor1286 = x3d.TouchSensor()
TouchSensor1286.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm"

HAnimSegment1285.children.append(TouchSensor1286)
Transform1287 = x3d.Transform()
Transform1287.translation = [-0.2029,1.4376,-0.0387]
Shape1288 = x3d.Shape()
Shape1288.USE = "HAnimJointShape"

Transform1287.children.append(Shape1288)

HAnimSegment1285.children.append(Transform1287)
Shape1289 = x3d.Shape()
LineSet1290 = x3d.LineSet()
LineSet1290.vertexCount = [2]
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA"

LineSet1290.color = ColorRGBA1291
Coordinate1292 = x3d.Coordinate()
Coordinate1292.point = [(-0.2029, 1.4376, -0.0387),(-0.2014, 1.1357, -0.0682)]

LineSet1290.coord = Coordinate1292

Shape1289.geometry = LineSet1290

HAnimSegment1285.children.append(Shape1289)
Shape1293 = x3d.Shape()
LineSet1294 = x3d.LineSet()
LineSet1294.vertexCount = [2]
ColorRGBA1295 = x3d.ColorRGBA()
ColorRGBA1295.USE = "HAnimSiteLineColorRGBA"

LineSet1294.color = ColorRGBA1295
Coordinate1296 = x3d.Coordinate()
Coordinate1296.point = [(-0.2029, 1.4376, -0.0387),(-0.2224, 1.1517, -0.1033)]

LineSet1294.coord = Coordinate1296

Shape1293.geometry = LineSet1294

HAnimSegment1285.children.append(Shape1293)
HAnimSite1297 = x3d.HAnimSite()
HAnimSite1297.DEF = "hanim_r_humeral_lateral_epicondyle_pt"
HAnimSite1297.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite1297.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1298 = x3d.TouchSensor()
TouchSensor1298.description = "HAnimSite r_humeral_lateral_epicn_pt"

HAnimSite1297.children.append(TouchSensor1298)
Shape1299 = x3d.Shape()
Shape1299.USE = "HAnimSiteShape"

HAnimSite1297.children.append(Shape1299)

HAnimSegment1285.children.append(HAnimSite1297)

HAnimJoint1284.children.append(HAnimSegment1285)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.DEF = "hanim_r_elbow"
HAnimJoint1300.name = "r_elbow"
HAnimJoint1300.center = [-0.2014,1.1357,-0.0682]
HAnimSegment1301 = x3d.HAnimSegment()
HAnimSegment1301.DEF = "hanim_r_forearm"
HAnimSegment1301.name = "r_forearm"
TouchSensor1302 = x3d.TouchSensor()
TouchSensor1302.description = "HAnimJoint r_elbow, HAnimSegment r_forearm"

HAnimSegment1301.children.append(TouchSensor1302)
Transform1303 = x3d.Transform()
Transform1303.translation = [-0.2014,1.1357,-0.0682]
Shape1304 = x3d.Shape()
Shape1304.USE = "HAnimJointShape"

Transform1303.children.append(Shape1304)

HAnimSegment1301.children.append(Transform1303)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.vertexCount = [2]
ColorRGBA1307 = x3d.ColorRGBA()
ColorRGBA1307.USE = "HAnimSegmentLineColorRGBA"

LineSet1306.color = ColorRGBA1307
Coordinate1308 = x3d.Coordinate()
Coordinate1308.point = [(-0.2014, 1.1357, -0.0682),(-0.1984, 0.8663, -0.0583)]

LineSet1306.coord = Coordinate1308

Shape1305.geometry = LineSet1306

HAnimSegment1301.children.append(Shape1305)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.vertexCount = [2]
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA"

LineSet1310.color = ColorRGBA1311
Coordinate1312 = x3d.Coordinate()
Coordinate1312.point = [(-0.2014, 1.1357, -0.0682),(-0.1884, 0.8676, -0.036)]

LineSet1310.coord = Coordinate1312

Shape1309.geometry = LineSet1310

HAnimSegment1301.children.append(Shape1309)
Shape1313 = x3d.Shape()
LineSet1314 = x3d.LineSet()
LineSet1314.vertexCount = [2]
ColorRGBA1315 = x3d.ColorRGBA()
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA"

LineSet1314.color = ColorRGBA1315
Coordinate1316 = x3d.Coordinate()
Coordinate1316.point = [(-0.2014, 1.1357, -0.0682),(-0.1907, 1.1405, -0.1065)]

LineSet1314.coord = Coordinate1316

Shape1313.geometry = LineSet1314

HAnimSegment1301.children.append(Shape1313)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.vertexCount = [2]
ColorRGBA1319 = x3d.ColorRGBA()
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA"

LineSet1318.color = ColorRGBA1319
Coordinate1320 = x3d.Coordinate()
Coordinate1320.point = [(-0.2014, 1.1357, -0.0682),(-0.168, 1.1298, -0.1062)]

LineSet1318.coord = Coordinate1320

Shape1317.geometry = LineSet1318

HAnimSegment1301.children.append(Shape1317)
Shape1321 = x3d.Shape()
LineSet1322 = x3d.LineSet()
LineSet1322.vertexCount = [2]
ColorRGBA1323 = x3d.ColorRGBA()
ColorRGBA1323.USE = "HAnimSiteLineColorRGBA"

LineSet1322.color = ColorRGBA1323
Coordinate1324 = x3d.Coordinate()
Coordinate1324.point = [(-0.2014, 1.1357, -0.0682),(-0.213, 1.1305, -0.1091)]

LineSet1322.coord = Coordinate1324

Shape1321.geometry = LineSet1322

HAnimSegment1301.children.append(Shape1321)
HAnimSite1325 = x3d.HAnimSite()
HAnimSite1325.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1325.name = "r_radial_styloid_pt"
HAnimSite1325.translation = [-0.1884,0.8676,-0.036]
TouchSensor1326 = x3d.TouchSensor()
TouchSensor1326.description = "HAnimSite r_radial_styloid_pt"

HAnimSite1325.children.append(TouchSensor1326)
Shape1327 = x3d.Shape()
Shape1327.USE = "HAnimSiteShape"

HAnimSite1325.children.append(Shape1327)

HAnimSegment1301.children.append(HAnimSite1325)
HAnimSite1328 = x3d.HAnimSite()
HAnimSite1328.DEF = "hanim_r_olecranon_pt"
HAnimSite1328.name = "r_olecranon_pt"
HAnimSite1328.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1329 = x3d.TouchSensor()
TouchSensor1329.description = "HAnimSite r_olecranon_pt"

HAnimSite1328.children.append(TouchSensor1329)
Shape1330 = x3d.Shape()
Shape1330.USE = "HAnimSiteShape"

HAnimSite1328.children.append(Shape1330)

HAnimSegment1301.children.append(HAnimSite1328)
HAnimSite1331 = x3d.HAnimSite()
HAnimSite1331.DEF = "hanim_r_humeral_medial_epicondyle_pt"
HAnimSite1331.name = "r_humeral_medial_epicondyle_pt"
HAnimSite1331.translation = [-0.168,1.1298,-0.1062]
TouchSensor1332 = x3d.TouchSensor()
TouchSensor1332.description = "HAnimSite r_humeral_medial_epicn_pt"

HAnimSite1331.children.append(TouchSensor1332)
Shape1333 = x3d.Shape()
Shape1333.USE = "HAnimSiteShape"

HAnimSite1331.children.append(Shape1333)

HAnimSegment1301.children.append(HAnimSite1331)
HAnimSite1334 = x3d.HAnimSite()
HAnimSite1334.DEF = "hanim_r_radiale_pt"
HAnimSite1334.name = "r_radiale_pt"
HAnimSite1334.translation = [-0.213,1.1305,-0.1091]
TouchSensor1335 = x3d.TouchSensor()
TouchSensor1335.description = "HAnimSite r_radiale_pt"

HAnimSite1334.children.append(TouchSensor1335)
Shape1336 = x3d.Shape()
Shape1336.USE = "HAnimSiteShape"

HAnimSite1334.children.append(Shape1336)

HAnimSegment1301.children.append(HAnimSite1334)

HAnimJoint1300.children.append(HAnimSegment1301)
HAnimJoint1337 = x3d.HAnimJoint()
HAnimJoint1337.DEF = "hanim_r_radiocarpal"
HAnimJoint1337.name = "r_radiocarpal"
HAnimJoint1337.center = [-0.1984,0.8663,-0.0583]
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.DEF = "hanim_r_carpal"
HAnimSegment1338.name = "r_carpal"
TouchSensor1339 = x3d.TouchSensor()
TouchSensor1339.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal"

HAnimSegment1338.children.append(TouchSensor1339)
Transform1340 = x3d.Transform()
Transform1340.translation = [-0.1984,0.8663,-0.0583]
Shape1341 = x3d.Shape()
Shape1341.USE = "HAnimJointShape"

Transform1340.children.append(Shape1341)

HAnimSegment1338.children.append(Transform1340)
Shape1342 = x3d.Shape()
LineSet1343 = x3d.LineSet()
LineSet1343.vertexCount = [2]
ColorRGBA1344 = x3d.ColorRGBA()
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA"

LineSet1343.color = ColorRGBA1344
Coordinate1345 = x3d.Coordinate()
Coordinate1345.point = [(-0.1984, 0.8663, -0.0583),(-0.1924, 0.8472, -0.0534)]

LineSet1343.coord = Coordinate1345

Shape1342.geometry = LineSet1343

HAnimSegment1338.children.append(Shape1342)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.vertexCount = [2]
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA"

LineSet1347.color = ColorRGBA1348
Coordinate1349 = x3d.Coordinate()
Coordinate1349.point = [(-0.1984, 0.8663, -0.0583),(-0.1983, 0.8024, -0.028)]

LineSet1347.coord = Coordinate1349

Shape1346.geometry = LineSet1347

HAnimSegment1338.children.append(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.vertexCount = [2]
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA"

LineSet1351.color = ColorRGBA1352
Coordinate1353 = x3d.Coordinate()
Coordinate1353.point = [(-0.1984, 0.8663, -0.0583),(-0.1987, 0.8029, -0.053)]

LineSet1351.coord = Coordinate1353

Shape1350.geometry = LineSet1351

HAnimSegment1338.children.append(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
ColorRGBA1356 = x3d.ColorRGBA()
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA"

LineSet1355.color = ColorRGBA1356
Coordinate1357 = x3d.Coordinate()
Coordinate1357.point = [(-0.1984, 0.8663, -0.0583),(-0.1956, 0.8019, -0.0794)]

LineSet1355.coord = Coordinate1357

Shape1354.geometry = LineSet1355

HAnimSegment1338.children.append(Shape1354)
Shape1358 = x3d.Shape()
LineSet1359 = x3d.LineSet()
LineSet1359.vertexCount = [2]
ColorRGBA1360 = x3d.ColorRGBA()
ColorRGBA1360.USE = "HAnimSegmentLineColorRGBA"

LineSet1359.color = ColorRGBA1360
Coordinate1361 = x3d.Coordinate()
Coordinate1361.point = [(-0.1984, 0.8663, -0.0583),(-0.1925, 0.8066, -0.1036)]

LineSet1359.coord = Coordinate1361

Shape1358.geometry = LineSet1359

HAnimSegment1338.children.append(Shape1358)
Shape1362 = x3d.Shape()
LineSet1363 = x3d.LineSet()
LineSet1363.vertexCount = [2]
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA"

LineSet1363.color = ColorRGBA1364
Coordinate1365 = x3d.Coordinate()
Coordinate1365.point = [(-0.1984, 0.8663, -0.0583),(-0.1977, 0.8169, -0.0177)]

LineSet1363.coord = Coordinate1365

Shape1362.geometry = LineSet1363

HAnimSegment1338.children.append(Shape1362)
Shape1366 = x3d.Shape()
LineSet1367 = x3d.LineSet()
LineSet1367.vertexCount = [2]
ColorRGBA1368 = x3d.ColorRGBA()
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA"

LineSet1367.color = ColorRGBA1368
Coordinate1369 = x3d.Coordinate()
Coordinate1369.point = [(-0.1984, 0.8663, -0.0583),(-0.2117, 0.8562, -0.0584)]

LineSet1367.coord = Coordinate1369

Shape1366.geometry = LineSet1367

HAnimSegment1338.children.append(Shape1366)
Shape1370 = x3d.Shape()
LineSet1371 = x3d.LineSet()
LineSet1371.vertexCount = [2]
ColorRGBA1372 = x3d.ColorRGBA()
ColorRGBA1372.USE = "HAnimSiteLineColorRGBA"

LineSet1371.color = ColorRGBA1372
Coordinate1373 = x3d.Coordinate()
Coordinate1373.point = [(-0.1984, 0.8663, -0.0583),(-0.1929, 0.789, -0.1064)]

LineSet1371.coord = Coordinate1373

Shape1370.geometry = LineSet1371

HAnimSegment1338.children.append(Shape1370)
Shape1374 = x3d.Shape()
LineSet1375 = x3d.LineSet()
LineSet1375.vertexCount = [2]
ColorRGBA1376 = x3d.ColorRGBA()
ColorRGBA1376.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1375.color = ColorRGBA1376
Coordinate1377 = x3d.Coordinate()
Coordinate1377.point = [(-0.1984, 0.8663, -0.0583),(-0.3, 0.75, 0.45)]

LineSet1375.coord = Coordinate1377

Shape1374.geometry = LineSet1375

HAnimSegment1338.children.append(Shape1374)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite1378.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1378.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1379 = x3d.TouchSensor()
TouchSensor1379.description = "HAnimSite r_metacarpal_pha2_pt"

HAnimSite1378.children.append(TouchSensor1379)
Shape1380 = x3d.Shape()
Shape1380.USE = "HAnimSiteShape"

HAnimSite1378.children.append(Shape1380)

HAnimSegment1338.children.append(HAnimSite1378)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1381.name = "r_ulnar_styloid_pt"
HAnimSite1381.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1382 = x3d.TouchSensor()
TouchSensor1382.description = "HAnimSite r_ulnar_styloid_pt"

HAnimSite1381.children.append(TouchSensor1382)
Shape1383 = x3d.Shape()
Shape1383.USE = "HAnimSiteShape"

HAnimSite1381.children.append(Shape1383)

HAnimSegment1338.children.append(HAnimSite1381)
HAnimSite1384 = x3d.HAnimSite()
HAnimSite1384.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite1384.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1384.translation = [-0.1929,0.789,-0.1064]
TouchSensor1385 = x3d.TouchSensor()
TouchSensor1385.description = "HAnimSite r_metacarpal_pha5_pt"

HAnimSite1384.children.append(TouchSensor1385)
Shape1386 = x3d.Shape()
Shape1386.USE = "HAnimSiteShape"

HAnimSite1384.children.append(Shape1386)

HAnimSegment1338.children.append(HAnimSite1384)
HAnimSite1387 = x3d.HAnimSite()
HAnimSite1387.DEF = "hanim_r_hand_front_view"
HAnimSite1387.name = "r_hand_front_view"
HAnimSite1387.translation = [-0.3,0.75,0.45]
TouchSensor1388 = x3d.TouchSensor()
TouchSensor1388.description = "HAnimSite r_hand_front_view"

HAnimSite1387.children.append(TouchSensor1388)
Shape1389 = x3d.Shape()
Shape1389.USE = "HAnimSiteShape"

HAnimSite1387.children.append(Shape1389)
Viewpoint1390 = x3d.Viewpoint()
Viewpoint1390.DEF = "hanim_r_hand_front_viewpoint"
Viewpoint1390.description = "right hand front"
Viewpoint1390.position = [0,0,0]
Viewpoint1390.centerOfRotation = [0,0.7,0]

HAnimSite1387.children.append(Viewpoint1390)
Anchor1391 = x3d.Anchor()
Anchor1391.description = "HAnimSite hanim_r_hand_front_view Viewpoint"
Anchor1391.url = ["#hanim_r_hand_front_viewpoint"]
LOD1392 = x3d.LOD()
LOD1392.forceTransitions = True
LOD1392.range = [0.04]
WorldInfo1393 = x3d.WorldInfo()
WorldInfo1393.info = ["hide diamond when close"]

LOD1392.children.append(WorldInfo1393)
Shape1394 = x3d.Shape()
Shape1394.USE = "HAnimSiteViewpointShape"

LOD1392.children.append(Shape1394)

Anchor1391.children.append(LOD1392)

HAnimSite1387.children.append(Anchor1391)

HAnimSegment1338.children.append(HAnimSite1387)

HAnimJoint1337.children.append(HAnimSegment1338)
HAnimJoint1395 = x3d.HAnimJoint()
HAnimJoint1395.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1395.name = "r_carpometacarpal_1"
HAnimJoint1395.center = [-0.1924,0.8472,-0.0534]
HAnimSegment1396 = x3d.HAnimSegment()
HAnimSegment1396.DEF = "hanim_r_metacarpal_1"
HAnimSegment1396.name = "r_metacarpal_1"
TouchSensor1397 = x3d.TouchSensor()
TouchSensor1397.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1"

HAnimSegment1396.children.append(TouchSensor1397)
Transform1398 = x3d.Transform()
Transform1398.translation = [-0.1924,0.8472,-0.0534]
Shape1399 = x3d.Shape()
Shape1399.USE = "HAnimJointShape"

Transform1398.children.append(Shape1399)

HAnimSegment1396.children.append(Transform1398)
Shape1400 = x3d.Shape()
LineSet1401 = x3d.LineSet()
LineSet1401.vertexCount = [2]
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA"

LineSet1401.color = ColorRGBA1402
Coordinate1403 = x3d.Coordinate()
Coordinate1403.point = [(-0.1924, 0.8472, -0.0534),(-0.1951, 0.8226, 0.0246)]

LineSet1401.coord = Coordinate1403

Shape1400.geometry = LineSet1401

HAnimSegment1396.children.append(Shape1400)

HAnimJoint1395.children.append(HAnimSegment1396)
HAnimJoint1404 = x3d.HAnimJoint()
HAnimJoint1404.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1404.name = "r_metacarpophalangeal_1"
HAnimJoint1404.center = [-0.1951,0.8226,0.0246]
HAnimSegment1405 = x3d.HAnimSegment()
HAnimSegment1405.DEF = "hanim_r_carpal_proximal_phalanx_1"
HAnimSegment1405.name = "r_carpal_proximal_phalanx_1"
TouchSensor1406 = x3d.TouchSensor()
TouchSensor1406.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1"

HAnimSegment1405.children.append(TouchSensor1406)
Transform1407 = x3d.Transform()
Transform1407.translation = [-0.1951,0.8226,0.0246]
Shape1408 = x3d.Shape()
Shape1408.USE = "HAnimJointShape"

Transform1407.children.append(Shape1408)

HAnimSegment1405.children.append(Transform1407)
Shape1409 = x3d.Shape()
LineSet1410 = x3d.LineSet()
LineSet1410.vertexCount = [2]
ColorRGBA1411 = x3d.ColorRGBA()
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA"

LineSet1410.color = ColorRGBA1411
Coordinate1412 = x3d.Coordinate()
Coordinate1412.point = [(-0.1951, 0.8226, 0.0246),(-0.1955, 0.8159, 0.0464)]

LineSet1410.coord = Coordinate1412

Shape1409.geometry = LineSet1410

HAnimSegment1405.children.append(Shape1409)

HAnimJoint1404.children.append(HAnimSegment1405)
HAnimJoint1413 = x3d.HAnimJoint()
HAnimJoint1413.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1413.name = "r_carpal_interphalangeal_1"
HAnimJoint1413.center = [-0.1955,0.8159,0.0464]
HAnimSegment1414 = x3d.HAnimSegment()
HAnimSegment1414.DEF = "hanim_r_carpal_distal_phalanx_1"
HAnimSegment1414.name = "r_carpal_distal_phalanx_1"
TouchSensor1415 = x3d.TouchSensor()
TouchSensor1415.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1"

HAnimSegment1414.children.append(TouchSensor1415)
Transform1416 = x3d.Transform()
Transform1416.translation = [-0.1955,0.8159,0.0464]
Shape1417 = x3d.Shape()
Shape1417.USE = "HAnimJointShape"

Transform1416.children.append(Shape1417)

HAnimSegment1414.children.append(Transform1416)
Shape1418 = x3d.Shape()
LineSet1419 = x3d.LineSet()
LineSet1419.vertexCount = [2]
ColorRGBA1420 = x3d.ColorRGBA()
ColorRGBA1420.USE = "HAnimSiteLineColorRGBA"

LineSet1419.color = ColorRGBA1420
Coordinate1421 = x3d.Coordinate()
Coordinate1421.point = [(-0.1955, 0.8159, 0.0464),(-0.1869, 0.809, 0.082)]

LineSet1419.coord = Coordinate1421

Shape1418.geometry = LineSet1419

HAnimSegment1414.children.append(Shape1418)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.DEF = "hanim_r_carpal_distal_phalanx_1_pt"
HAnimSite1422.name = "r_carpal_distal_phalanx_1_pt"
HAnimSite1422.translation = [-0.1869,0.809,0.082]
TouchSensor1423 = x3d.TouchSensor()
TouchSensor1423.description = "HAnimSite r_thumb_distal_tip"

HAnimSite1422.children.append(TouchSensor1423)
Shape1424 = x3d.Shape()
Shape1424.USE = "HAnimSiteShape"

HAnimSite1422.children.append(Shape1424)

HAnimSegment1414.children.append(HAnimSite1422)

HAnimJoint1413.children.append(HAnimSegment1414)

HAnimJoint1404.children.append(HAnimJoint1413)

HAnimJoint1395.children.append(HAnimJoint1404)

HAnimJoint1337.children.append(HAnimJoint1395)
HAnimJoint1425 = x3d.HAnimJoint()
HAnimJoint1425.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1425.name = "r_carpometacarpal_2"
HAnimJoint1425.center = [-0.1983,0.8024,-0.028]
HAnimSegment1426 = x3d.HAnimSegment()
HAnimSegment1426.DEF = "hanim_r_metacarpal_2"
HAnimSegment1426.name = "r_metacarpal_2"
TouchSensor1427 = x3d.TouchSensor()
TouchSensor1427.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2"

HAnimSegment1426.children.append(TouchSensor1427)
Transform1428 = x3d.Transform()
Transform1428.translation = [-0.1983,0.8024,-0.028]
Shape1429 = x3d.Shape()
Shape1429.USE = "HAnimJointShape"

Transform1428.children.append(Shape1429)

HAnimSegment1426.children.append(Transform1428)
Shape1430 = x3d.Shape()
LineSet1431 = x3d.LineSet()
LineSet1431.vertexCount = [2]
ColorRGBA1432 = x3d.ColorRGBA()
ColorRGBA1432.USE = "HAnimSegmentLineColorRGBA"

LineSet1431.color = ColorRGBA1432
Coordinate1433 = x3d.Coordinate()
Coordinate1433.point = [(-0.1983, 0.8024, -0.028),(-0.1983, 0.7815, -0.028)]

LineSet1431.coord = Coordinate1433

Shape1430.geometry = LineSet1431

HAnimSegment1426.children.append(Shape1430)

HAnimJoint1425.children.append(HAnimSegment1426)
HAnimJoint1434 = x3d.HAnimJoint()
HAnimJoint1434.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1434.name = "r_metacarpophalangeal_2"
HAnimJoint1434.center = [-0.1983,0.7815,-0.028]
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.DEF = "hanim_r_carpal_proximal_phalanx_2"
HAnimSegment1435.name = "r_carpal_proximal_phalanx_2"
TouchSensor1436 = x3d.TouchSensor()
TouchSensor1436.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2"

HAnimSegment1435.children.append(TouchSensor1436)
Transform1437 = x3d.Transform()
Transform1437.translation = [-0.1983,0.7815,-0.028]
Shape1438 = x3d.Shape()
Shape1438.USE = "HAnimJointShape"

Transform1437.children.append(Shape1438)

HAnimSegment1435.children.append(Transform1437)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.vertexCount = [2]
ColorRGBA1441 = x3d.ColorRGBA()
ColorRGBA1441.USE = "HAnimSegmentLineColorRGBA"

LineSet1440.color = ColorRGBA1441
Coordinate1442 = x3d.Coordinate()
Coordinate1442.point = [(-0.1983, 0.7815, -0.028),(-0.2017, 0.7363, -0.0248)]

LineSet1440.coord = Coordinate1442

Shape1439.geometry = LineSet1440

HAnimSegment1435.children.append(Shape1439)

HAnimJoint1434.children.append(HAnimSegment1435)
HAnimJoint1443 = x3d.HAnimJoint()
HAnimJoint1443.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1443.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1443.center = [-0.2017,0.7363,-0.0248]
HAnimSegment1444 = x3d.HAnimSegment()
HAnimSegment1444.DEF = "hanim_r_carpal_middle_phalanx_2"
HAnimSegment1444.name = "r_carpal_middle_phalanx_2"
TouchSensor1445 = x3d.TouchSensor()
TouchSensor1445.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2"

HAnimSegment1444.children.append(TouchSensor1445)
Transform1446 = x3d.Transform()
Transform1446.translation = [-0.2017,0.7363,-0.0248]
Shape1447 = x3d.Shape()
Shape1447.USE = "HAnimJointShape"

Transform1446.children.append(Shape1447)

HAnimSegment1444.children.append(Transform1446)
Shape1448 = x3d.Shape()
LineSet1449 = x3d.LineSet()
LineSet1449.vertexCount = [2]
ColorRGBA1450 = x3d.ColorRGBA()
ColorRGBA1450.USE = "HAnimSegmentLineColorRGBA"

LineSet1449.color = ColorRGBA1450
Coordinate1451 = x3d.Coordinate()
Coordinate1451.point = [(-0.2017, 0.7363, -0.0248),(-0.2028, 0.7139, -0.0236)]

LineSet1449.coord = Coordinate1451

Shape1448.geometry = LineSet1449

HAnimSegment1444.children.append(Shape1448)

HAnimJoint1443.children.append(HAnimSegment1444)
HAnimJoint1452 = x3d.HAnimJoint()
HAnimJoint1452.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1452.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1452.center = [-0.2028,0.7139,-0.0236]
HAnimSegment1453 = x3d.HAnimSegment()
HAnimSegment1453.DEF = "hanim_r_carpal_distal_phalanx_2"
HAnimSegment1453.name = "r_carpal_distal_phalanx_2"
TouchSensor1454 = x3d.TouchSensor()
TouchSensor1454.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2"

HAnimSegment1453.children.append(TouchSensor1454)
Transform1455 = x3d.Transform()
Transform1455.translation = [-0.2028,0.7139,-0.0236]
Shape1456 = x3d.Shape()
Shape1456.USE = "HAnimJointShape"

Transform1455.children.append(Shape1456)

HAnimSegment1453.children.append(Transform1455)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.vertexCount = [2]
ColorRGBA1459 = x3d.ColorRGBA()
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA"

LineSet1458.color = ColorRGBA1459
Coordinate1460 = x3d.Coordinate()
Coordinate1460.point = [(-0.2028, 0.7139, -0.0236),(-0.198, 0.6883, -0.018)]

LineSet1458.coord = Coordinate1460

Shape1457.geometry = LineSet1458

HAnimSegment1453.children.append(Shape1457)
Shape1461 = x3d.Shape()
LineSet1462 = x3d.LineSet()
LineSet1462.vertexCount = [2]
ColorRGBA1463 = x3d.ColorRGBA()
ColorRGBA1463.USE = "HAnimSiteLineColorRGBA"

LineSet1462.color = ColorRGBA1463
Coordinate1464 = x3d.Coordinate()
Coordinate1464.point = [(-0.2028, 0.7139, -0.0236),(-0.1941, 0.6772, -0.0423)]

LineSet1462.coord = Coordinate1464

Shape1461.geometry = LineSet1462

HAnimSegment1453.children.append(Shape1461)
HAnimSite1465 = x3d.HAnimSite()
HAnimSite1465.DEF = "hanim_r_carpal_distal_phalanx_2_pt"
HAnimSite1465.name = "r_carpal_distal_phalanx_2_pt"
HAnimSite1465.translation = [-0.198,0.6883,-0.018]
TouchSensor1466 = x3d.TouchSensor()
TouchSensor1466.description = "HAnimSite r_index_distal_tip"

HAnimSite1465.children.append(TouchSensor1466)
Shape1467 = x3d.Shape()
Shape1467.USE = "HAnimSiteShape"

HAnimSite1465.children.append(Shape1467)

HAnimSegment1453.children.append(HAnimSite1465)
HAnimSite1468 = x3d.HAnimSite()
HAnimSite1468.DEF = "hanim_r_dactylion_pt"
HAnimSite1468.name = "r_dactylion_pt"
HAnimSite1468.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1469 = x3d.TouchSensor()
TouchSensor1469.description = "HAnimSite r_dactylion_pt"

HAnimSite1468.children.append(TouchSensor1469)
Shape1470 = x3d.Shape()
Shape1470.USE = "HAnimSiteShape"

HAnimSite1468.children.append(Shape1470)

HAnimSegment1453.children.append(HAnimSite1468)

HAnimJoint1452.children.append(HAnimSegment1453)

HAnimJoint1443.children.append(HAnimJoint1452)

HAnimJoint1434.children.append(HAnimJoint1443)

HAnimJoint1425.children.append(HAnimJoint1434)

HAnimJoint1337.children.append(HAnimJoint1425)
HAnimJoint1471 = x3d.HAnimJoint()
HAnimJoint1471.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1471.name = "r_carpometacarpal_3"
HAnimJoint1471.center = [-0.1987,0.8029,-0.053]
HAnimSegment1472 = x3d.HAnimSegment()
HAnimSegment1472.DEF = "hanim_r_metacarpal_3"
HAnimSegment1472.name = "r_metacarpal_3"
TouchSensor1473 = x3d.TouchSensor()
TouchSensor1473.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3"

HAnimSegment1472.children.append(TouchSensor1473)
Transform1474 = x3d.Transform()
Transform1474.translation = [-0.1987,0.8029,-0.053]
Shape1475 = x3d.Shape()
Shape1475.USE = "HAnimJointShape"

Transform1474.children.append(Shape1475)

HAnimSegment1472.children.append(Transform1474)
Shape1476 = x3d.Shape()
LineSet1477 = x3d.LineSet()
LineSet1477.vertexCount = [2]
ColorRGBA1478 = x3d.ColorRGBA()
ColorRGBA1478.USE = "HAnimSegmentLineColorRGBA"

LineSet1477.color = ColorRGBA1478
Coordinate1479 = x3d.Coordinate()
Coordinate1479.point = [(-0.1987, 0.8029, -0.053),(-0.1987, 0.7818, -0.053)]

LineSet1477.coord = Coordinate1479

Shape1476.geometry = LineSet1477

HAnimSegment1472.children.append(Shape1476)

HAnimJoint1471.children.append(HAnimSegment1472)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1480.name = "r_metacarpophalangeal_3"
HAnimJoint1480.center = [-0.1987,0.7818,-0.053]
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.DEF = "hanim_r_carpal_proximal_phalanx_3"
HAnimSegment1481.name = "r_carpal_proximal_phalanx_3"
TouchSensor1482 = x3d.TouchSensor()
TouchSensor1482.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3"

HAnimSegment1481.children.append(TouchSensor1482)
Transform1483 = x3d.Transform()
Transform1483.translation = [-0.1987,0.7818,-0.053]
Shape1484 = x3d.Shape()
Shape1484.USE = "HAnimJointShape"

Transform1483.children.append(Shape1484)

HAnimSegment1481.children.append(Transform1483)
Shape1485 = x3d.Shape()
LineSet1486 = x3d.LineSet()
LineSet1486.vertexCount = [2]
ColorRGBA1487 = x3d.ColorRGBA()
ColorRGBA1487.USE = "HAnimSegmentLineColorRGBA"

LineSet1486.color = ColorRGBA1487
Coordinate1488 = x3d.Coordinate()
Coordinate1488.point = [(-0.1987, 0.7818, -0.053),(-0.2013, 0.7273, -0.0503)]

LineSet1486.coord = Coordinate1488

Shape1485.geometry = LineSet1486

HAnimSegment1481.children.append(Shape1485)

HAnimJoint1480.children.append(HAnimSegment1481)
HAnimJoint1489 = x3d.HAnimJoint()
HAnimJoint1489.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1489.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1489.center = [-0.2013,0.7273,-0.0503]
HAnimSegment1490 = x3d.HAnimSegment()
HAnimSegment1490.DEF = "hanim_r_carpal_middle_phalanx_3"
HAnimSegment1490.name = "r_carpal_middle_phalanx_3"
TouchSensor1491 = x3d.TouchSensor()
TouchSensor1491.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3"

HAnimSegment1490.children.append(TouchSensor1491)
Transform1492 = x3d.Transform()
Transform1492.translation = [-0.2013,0.7273,-0.0503]
Shape1493 = x3d.Shape()
Shape1493.USE = "HAnimJointShape"

Transform1492.children.append(Shape1493)

HAnimSegment1490.children.append(Transform1492)
Shape1494 = x3d.Shape()
LineSet1495 = x3d.LineSet()
LineSet1495.vertexCount = [2]
ColorRGBA1496 = x3d.ColorRGBA()
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA"

LineSet1495.color = ColorRGBA1496
Coordinate1497 = x3d.Coordinate()
Coordinate1497.point = [(-0.2013, 0.7273, -0.0503),(-0.2026, 0.7011, -0.0494)]

LineSet1495.coord = Coordinate1497

Shape1494.geometry = LineSet1495

HAnimSegment1490.children.append(Shape1494)

HAnimJoint1489.children.append(HAnimSegment1490)
HAnimJoint1498 = x3d.HAnimJoint()
HAnimJoint1498.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1498.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1498.center = [-0.2026,0.7011,-0.0494]
HAnimSegment1499 = x3d.HAnimSegment()
HAnimSegment1499.DEF = "hanim_r_carpal_distal_phalanx_3"
HAnimSegment1499.name = "r_carpal_distal_phalanx_3"
TouchSensor1500 = x3d.TouchSensor()
TouchSensor1500.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3"

HAnimSegment1499.children.append(TouchSensor1500)
Transform1501 = x3d.Transform()
Transform1501.translation = [-0.2026,0.7011,-0.0494]
Shape1502 = x3d.Shape()
Shape1502.USE = "HAnimJointShape"

Transform1501.children.append(Shape1502)

HAnimSegment1499.children.append(Transform1501)
Shape1503 = x3d.Shape()
LineSet1504 = x3d.LineSet()
LineSet1504.vertexCount = [2]
ColorRGBA1505 = x3d.ColorRGBA()
ColorRGBA1505.USE = "HAnimSiteLineColorRGBA"

LineSet1504.color = ColorRGBA1505
Coordinate1506 = x3d.Coordinate()
Coordinate1506.point = [(-0.2026, 0.7011, -0.0494),(-0.1969, 0.6758, -0.0427)]

LineSet1504.coord = Coordinate1506

Shape1503.geometry = LineSet1504

HAnimSegment1499.children.append(Shape1503)
HAnimSite1507 = x3d.HAnimSite()
HAnimSite1507.DEF = "hanim_r_carpal_distal_phalanx_3_pt"
HAnimSite1507.name = "r_carpal_distal_phalanx_3_pt"
HAnimSite1507.translation = [-0.1969,0.6758,-0.0427]
TouchSensor1508 = x3d.TouchSensor()
TouchSensor1508.description = "HAnimSite r_middle_distal_tip"

HAnimSite1507.children.append(TouchSensor1508)
Shape1509 = x3d.Shape()
Shape1509.USE = "HAnimSiteShape"

HAnimSite1507.children.append(Shape1509)

HAnimSegment1499.children.append(HAnimSite1507)

HAnimJoint1498.children.append(HAnimSegment1499)

HAnimJoint1489.children.append(HAnimJoint1498)

HAnimJoint1480.children.append(HAnimJoint1489)

HAnimJoint1471.children.append(HAnimJoint1480)

HAnimJoint1337.children.append(HAnimJoint1471)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1510.name = "r_carpometacarpal_4"
HAnimJoint1510.center = [-0.1956,0.8019,-0.0794]
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.DEF = "hanim_r_metacarpal_4"
HAnimSegment1511.name = "r_metacarpal_4"
TouchSensor1512 = x3d.TouchSensor()
TouchSensor1512.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4"

HAnimSegment1511.children.append(TouchSensor1512)
Transform1513 = x3d.Transform()
Transform1513.translation = [-0.1956,0.8019,-0.0794]
Shape1514 = x3d.Shape()
Shape1514.USE = "HAnimJointShape"

Transform1513.children.append(Shape1514)

HAnimSegment1511.children.append(Transform1513)
Shape1515 = x3d.Shape()
LineSet1516 = x3d.LineSet()
LineSet1516.vertexCount = [2]
ColorRGBA1517 = x3d.ColorRGBA()
ColorRGBA1517.USE = "HAnimSegmentLineColorRGBA"

LineSet1516.color = ColorRGBA1517
Coordinate1518 = x3d.Coordinate()
Coordinate1518.point = [(-0.1956, 0.8019, -0.0794),(-0.1956, 0.7815, -0.0794)]

LineSet1516.coord = Coordinate1518

Shape1515.geometry = LineSet1516

HAnimSegment1511.children.append(Shape1515)

HAnimJoint1510.children.append(HAnimSegment1511)
HAnimJoint1519 = x3d.HAnimJoint()
HAnimJoint1519.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1519.name = "r_metacarpophalangeal_4"
HAnimJoint1519.center = [-0.1956,0.7815,-0.0794]
HAnimSegment1520 = x3d.HAnimSegment()
HAnimSegment1520.DEF = "hanim_r_carpal_proximal_phalanx_4"
HAnimSegment1520.name = "r_carpal_proximal_phalanx_4"
TouchSensor1521 = x3d.TouchSensor()
TouchSensor1521.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4"

HAnimSegment1520.children.append(TouchSensor1521)
Transform1522 = x3d.Transform()
Transform1522.translation = [-0.1956,0.7815,-0.0794]
Shape1523 = x3d.Shape()
Shape1523.USE = "HAnimJointShape"

Transform1522.children.append(Shape1523)

HAnimSegment1520.children.append(Transform1522)
Shape1524 = x3d.Shape()
LineSet1525 = x3d.LineSet()
LineSet1525.vertexCount = [2]
ColorRGBA1526 = x3d.ColorRGBA()
ColorRGBA1526.USE = "HAnimSegmentLineColorRGBA"

LineSet1525.color = ColorRGBA1526
Coordinate1527 = x3d.Coordinate()
Coordinate1527.point = [(-0.1956, 0.7815, -0.0794),(-0.1973, 0.7287, -0.0777)]

LineSet1525.coord = Coordinate1527

Shape1524.geometry = LineSet1525

HAnimSegment1520.children.append(Shape1524)

HAnimJoint1519.children.append(HAnimSegment1520)
HAnimJoint1528 = x3d.HAnimJoint()
HAnimJoint1528.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1528.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1528.center = [-0.1973,0.7287,-0.0777]
HAnimSegment1529 = x3d.HAnimSegment()
HAnimSegment1529.DEF = "hanim_r_carpal_middle_phalanx_4"
HAnimSegment1529.name = "r_carpal_middle_phalanx_4"
TouchSensor1530 = x3d.TouchSensor()
TouchSensor1530.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4"

HAnimSegment1529.children.append(TouchSensor1530)
Transform1531 = x3d.Transform()
Transform1531.translation = [-0.1973,0.7287,-0.0777]
Shape1532 = x3d.Shape()
Shape1532.USE = "HAnimJointShape"

Transform1531.children.append(Shape1532)

HAnimSegment1529.children.append(Transform1531)
Shape1533 = x3d.Shape()
LineSet1534 = x3d.LineSet()
LineSet1534.vertexCount = [2]
ColorRGBA1535 = x3d.ColorRGBA()
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA"

LineSet1534.color = ColorRGBA1535
Coordinate1536 = x3d.Coordinate()
Coordinate1536.point = [(-0.1973, 0.7287, -0.0777),(-0.1983, 0.7045, -0.0767)]

LineSet1534.coord = Coordinate1536

Shape1533.geometry = LineSet1534

HAnimSegment1529.children.append(Shape1533)

HAnimJoint1528.children.append(HAnimSegment1529)
HAnimJoint1537 = x3d.HAnimJoint()
HAnimJoint1537.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1537.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1537.center = [-0.1983,0.7045,-0.0767]
HAnimSegment1538 = x3d.HAnimSegment()
HAnimSegment1538.DEF = "hanim_r_carpal_distal_phalanx_4"
HAnimSegment1538.name = "r_carpal_distal_phalanx_4"
TouchSensor1539 = x3d.TouchSensor()
TouchSensor1539.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4"

HAnimSegment1538.children.append(TouchSensor1539)
Transform1540 = x3d.Transform()
Transform1540.translation = [-0.1983,0.7045,-0.0767]
Shape1541 = x3d.Shape()
Shape1541.USE = "HAnimJointShape"

Transform1540.children.append(Shape1541)

HAnimSegment1538.children.append(Transform1540)
Shape1542 = x3d.Shape()
LineSet1543 = x3d.LineSet()
LineSet1543.vertexCount = [2]
ColorRGBA1544 = x3d.ColorRGBA()
ColorRGBA1544.USE = "HAnimSiteLineColorRGBA"

LineSet1543.color = ColorRGBA1544
Coordinate1545 = x3d.Coordinate()
Coordinate1545.point = [(-0.1983, 0.7045, -0.0767),(-0.1934, 0.6778, -0.0693)]

LineSet1543.coord = Coordinate1545

Shape1542.geometry = LineSet1543

HAnimSegment1538.children.append(Shape1542)
HAnimSite1546 = x3d.HAnimSite()
HAnimSite1546.DEF = "hanim_r_carpal_distal_phalanx_4_pt"
HAnimSite1546.name = "r_carpal_distal_phalanx_4_pt"
HAnimSite1546.translation = [-0.1934,0.6778,-0.0693]
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.description = "HAnimSite r_ring_distal_tip"

HAnimSite1546.children.append(TouchSensor1547)
Shape1548 = x3d.Shape()
Shape1548.USE = "HAnimSiteShape"

HAnimSite1546.children.append(Shape1548)

HAnimSegment1538.children.append(HAnimSite1546)

HAnimJoint1537.children.append(HAnimSegment1538)

HAnimJoint1528.children.append(HAnimJoint1537)

HAnimJoint1519.children.append(HAnimJoint1528)

HAnimJoint1510.children.append(HAnimJoint1519)

HAnimJoint1337.children.append(HAnimJoint1510)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1549.name = "r_carpometacarpal_5"
HAnimJoint1549.center = [-0.1925,0.8066,-0.1036]
HAnimSegment1550 = x3d.HAnimSegment()
HAnimSegment1550.DEF = "hanim_r_metacarpal_5"
HAnimSegment1550.name = "r_metacarpal_5"
TouchSensor1551 = x3d.TouchSensor()
TouchSensor1551.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5"

HAnimSegment1550.children.append(TouchSensor1551)
Transform1552 = x3d.Transform()
Transform1552.translation = [-0.1925,0.8066,-0.1036]
Shape1553 = x3d.Shape()
Shape1553.USE = "HAnimJointShape"

Transform1552.children.append(Shape1553)

HAnimSegment1550.children.append(Transform1552)
Shape1554 = x3d.Shape()
LineSet1555 = x3d.LineSet()
LineSet1555.vertexCount = [2]
ColorRGBA1556 = x3d.ColorRGBA()
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA"

LineSet1555.color = ColorRGBA1556
Coordinate1557 = x3d.Coordinate()
Coordinate1557.point = [(-0.1925, 0.8066, -0.1036),(-0.1925, 0.7866, -0.1036)]

LineSet1555.coord = Coordinate1557

Shape1554.geometry = LineSet1555

HAnimSegment1550.children.append(Shape1554)

HAnimJoint1549.children.append(HAnimSegment1550)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1558.name = "r_metacarpophalangeal_5"
HAnimJoint1558.center = [-0.1925,0.7866,-0.1036]
HAnimSegment1559 = x3d.HAnimSegment()
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_5"
HAnimSegment1559.name = "r_carpal_proximal_phalanx_5"
TouchSensor1560 = x3d.TouchSensor()
TouchSensor1560.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5"

HAnimSegment1559.children.append(TouchSensor1560)
Transform1561 = x3d.Transform()
Transform1561.translation = [-0.1925,0.7866,-0.1036]
Shape1562 = x3d.Shape()
Shape1562.USE = "HAnimJointShape"

Transform1561.children.append(Shape1562)

HAnimSegment1559.children.append(Transform1561)
Shape1563 = x3d.Shape()
LineSet1564 = x3d.LineSet()
LineSet1564.vertexCount = [2]
ColorRGBA1565 = x3d.ColorRGBA()
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA"

LineSet1564.color = ColorRGBA1565
Coordinate1566 = x3d.Coordinate()
Coordinate1566.point = [(-0.1925, 0.7866, -0.1036),(-0.1938, 0.7452, -0.1024)]

LineSet1564.coord = Coordinate1566

Shape1563.geometry = LineSet1564

HAnimSegment1559.children.append(Shape1563)

HAnimJoint1558.children.append(HAnimSegment1559)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1567.center = [-0.1938,0.7452,-0.1024]
HAnimSegment1568 = x3d.HAnimSegment()
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_5"
HAnimSegment1568.name = "r_carpal_middle_phalanx_5"
TouchSensor1569 = x3d.TouchSensor()
TouchSensor1569.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5"

HAnimSegment1568.children.append(TouchSensor1569)
Transform1570 = x3d.Transform()
Transform1570.translation = [-0.1938,0.7452,-0.1024]
Shape1571 = x3d.Shape()
Shape1571.USE = "HAnimJointShape"

Transform1570.children.append(Shape1571)

HAnimSegment1568.children.append(Transform1570)
Shape1572 = x3d.Shape()
LineSet1573 = x3d.LineSet()
LineSet1573.vertexCount = [2]
ColorRGBA1574 = x3d.ColorRGBA()
ColorRGBA1574.USE = "HAnimSegmentLineColorRGBA"

LineSet1573.color = ColorRGBA1574
Coordinate1575 = x3d.Coordinate()
Coordinate1575.point = [(-0.1938, 0.7452, -0.1024),(-0.1948, 0.7277, -0.1017)]

LineSet1573.coord = Coordinate1575

Shape1572.geometry = LineSet1573

HAnimSegment1568.children.append(Shape1572)

HAnimJoint1567.children.append(HAnimSegment1568)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1576.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1576.center = [-0.1948,0.7277,-0.1017]
HAnimSegment1577 = x3d.HAnimSegment()
HAnimSegment1577.DEF = "hanim_r_carpal_distal_phalanx_5"
HAnimSegment1577.name = "r_carpal_distal_phalanx_5"
TouchSensor1578 = x3d.TouchSensor()
TouchSensor1578.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5"

HAnimSegment1577.children.append(TouchSensor1578)
Transform1579 = x3d.Transform()
Transform1579.translation = [-0.1948,0.7277,-0.1017]
Shape1580 = x3d.Shape()
Shape1580.USE = "HAnimJointShape"

Transform1579.children.append(Shape1580)

HAnimSegment1577.children.append(Transform1579)
Shape1581 = x3d.Shape()
LineSet1582 = x3d.LineSet()
LineSet1582.vertexCount = [2]
ColorRGBA1583 = x3d.ColorRGBA()
ColorRGBA1583.USE = "HAnimSiteLineColorRGBA"

LineSet1582.color = ColorRGBA1583
Coordinate1584 = x3d.Coordinate()
Coordinate1584.point = [(-0.1948, 0.7277, -0.1017),(-0.1938, 0.7035, -0.0949)]

LineSet1582.coord = Coordinate1584

Shape1581.geometry = LineSet1582

HAnimSegment1577.children.append(Shape1581)
HAnimSite1585 = x3d.HAnimSite()
HAnimSite1585.DEF = "hanim_r_carpal_distal_phalanx_5_pt"
HAnimSite1585.name = "r_carpal_distal_phalanx_5_pt"
HAnimSite1585.translation = [-0.1938,0.7035,-0.0949]
TouchSensor1586 = x3d.TouchSensor()
TouchSensor1586.description = "HAnimSite r_pinky_distal_tip"

HAnimSite1585.children.append(TouchSensor1586)
Shape1587 = x3d.Shape()
Shape1587.USE = "HAnimSiteShape"

HAnimSite1585.children.append(Shape1587)

HAnimSegment1577.children.append(HAnimSite1585)

HAnimJoint1576.children.append(HAnimSegment1577)

HAnimJoint1567.children.append(HAnimJoint1576)

HAnimJoint1558.children.append(HAnimJoint1567)

HAnimJoint1549.children.append(HAnimJoint1558)

HAnimJoint1337.children.append(HAnimJoint1549)

HAnimJoint1300.children.append(HAnimJoint1337)

HAnimJoint1284.children.append(HAnimJoint1300)

HAnimJoint1275.children.append(HAnimJoint1284)

HAnimJoint1238.children.append(HAnimJoint1275)

HAnimJoint600.children.append(HAnimJoint1238)

HAnimJoint591.children.append(HAnimJoint600)

HAnimJoint582.children.append(HAnimJoint591)

HAnimJoint573.children.append(HAnimJoint582)

HAnimJoint564.children.append(HAnimJoint573)

HAnimJoint555.children.append(HAnimJoint564)

HAnimJoint546.children.append(HAnimJoint555)

HAnimJoint537.children.append(HAnimJoint546)

HAnimJoint514.children.append(HAnimJoint537)

HAnimJoint498.children.append(HAnimJoint514)

HAnimJoint489.children.append(HAnimJoint498)

HAnimJoint480.children.append(HAnimJoint489)

HAnimJoint471.children.append(HAnimJoint480)

HAnimJoint441.children.append(HAnimJoint471)

HAnimJoint432.children.append(HAnimJoint441)

HAnimJoint423.children.append(HAnimJoint432)

HAnimJoint400.children.append(HAnimJoint423)

HAnimJoint50.children.append(HAnimJoint400)

HAnimHumanoid41.skeleton.append(HAnimJoint50)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.USE = "hanim_humanoid_root"

HAnimHumanoid41.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.USE = "hanim_sacroiliac"

HAnimHumanoid41.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.USE = "hanim_vl5"

HAnimHumanoid41.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.USE = "hanim_vl4"

HAnimHumanoid41.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.USE = "hanim_vl3"

HAnimHumanoid41.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.USE = "hanim_vl2"

HAnimHumanoid41.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.USE = "hanim_vl1"

HAnimHumanoid41.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.USE = "hanim_vt12"

HAnimHumanoid41.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.USE = "hanim_vt11"

HAnimHumanoid41.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.USE = "hanim_vt10"

HAnimHumanoid41.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.USE = "hanim_vt9"

HAnimHumanoid41.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.USE = "hanim_vt8"

HAnimHumanoid41.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.USE = "hanim_vt7"

HAnimHumanoid41.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_vt6"

HAnimHumanoid41.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_vt5"

HAnimHumanoid41.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_vt4"

HAnimHumanoid41.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_vt3"

HAnimHumanoid41.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_vt2"

HAnimHumanoid41.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_vt1"

HAnimHumanoid41.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_vc7"

HAnimHumanoid41.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_vc6"

HAnimHumanoid41.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_vc5"

HAnimHumanoid41.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_vc4"

HAnimHumanoid41.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_vc3"

HAnimHumanoid41.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_vc2"

HAnimHumanoid41.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_vc1"

HAnimHumanoid41.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_skullbase"

HAnimHumanoid41.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_temporomandibular"

HAnimHumanoid41.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_l_acromioclavicular"

HAnimHumanoid41.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_r_acromioclavicular"

HAnimHumanoid41.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid41.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid41.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid41.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid41.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid41.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid41.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid41.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid41.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid41.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid41.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.USE = "hanim_l_elbow"

HAnimHumanoid41.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.USE = "hanim_r_elbow"

HAnimHumanoid41.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.USE = "hanim_l_eyeball_joint"

HAnimHumanoid41.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.USE = "hanim_r_eyeball_joint"

HAnimHumanoid41.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid41.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid41.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.USE = "hanim_l_eyelid_joint"

HAnimHumanoid41.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.USE = "hanim_r_eyelid_joint"

HAnimHumanoid41.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.USE = "hanim_l_hip"

HAnimHumanoid41.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.USE = "hanim_r_hip"

HAnimHumanoid41.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.USE = "hanim_l_knee"

HAnimHumanoid41.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.USE = "hanim_r_knee"

HAnimHumanoid41.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.USE = "hanim_l_radiocarpal"

HAnimHumanoid41.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.USE = "hanim_r_radiocarpal"

HAnimHumanoid41.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.USE = "hanim_l_shoulder"

HAnimHumanoid41.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.USE = "hanim_r_shoulder"

HAnimHumanoid41.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.USE = "hanim_l_sternoclavicular"

HAnimHumanoid41.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.USE = "hanim_r_sternoclavicular"

HAnimHumanoid41.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.USE = "hanim_l_talocrural"

HAnimHumanoid41.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.USE = "hanim_r_talocrural"

HAnimHumanoid41.joints.append(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid41.joints.append(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid41.joints.append(HAnimJoint1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.USE = "hanim_pelvis"

HAnimHumanoid41.segments.append(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.USE = "hanim_skull"

HAnimHumanoid41.segments.append(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.USE = "hanim_jaw"

HAnimHumanoid41.segments.append(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.USE = "hanim_c1"

HAnimHumanoid41.segments.append(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.USE = "hanim_c2"

HAnimHumanoid41.segments.append(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.USE = "hanim_c3"

HAnimHumanoid41.segments.append(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.USE = "hanim_c4"

HAnimHumanoid41.segments.append(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.USE = "hanim_c5"

HAnimHumanoid41.segments.append(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.USE = "hanim_c6"

HAnimHumanoid41.segments.append(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.USE = "hanim_c7"

HAnimHumanoid41.segments.append(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.USE = "hanim_t1"

HAnimHumanoid41.segments.append(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.USE = "hanim_t2"

HAnimHumanoid41.segments.append(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.USE = "hanim_t3"

HAnimHumanoid41.segments.append(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.USE = "hanim_t4"

HAnimHumanoid41.segments.append(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.USE = "hanim_t5"

HAnimHumanoid41.segments.append(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.USE = "hanim_t6"

HAnimHumanoid41.segments.append(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.USE = "hanim_t7"

HAnimHumanoid41.segments.append(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.USE = "hanim_t8"

HAnimHumanoid41.segments.append(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.USE = "hanim_t9"

HAnimHumanoid41.segments.append(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.USE = "hanim_t10"

HAnimHumanoid41.segments.append(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.USE = "hanim_t11"

HAnimHumanoid41.segments.append(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.USE = "hanim_t12"

HAnimHumanoid41.segments.append(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.USE = "hanim_l1"

HAnimHumanoid41.segments.append(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.USE = "hanim_l2"

HAnimHumanoid41.segments.append(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.USE = "hanim_l3"

HAnimHumanoid41.segments.append(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.USE = "hanim_l4"

HAnimHumanoid41.segments.append(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.USE = "hanim_l5"

HAnimHumanoid41.segments.append(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.USE = "hanim_sacrum"

HAnimHumanoid41.segments.append(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.USE = "hanim_l_calf"

HAnimHumanoid41.segments.append(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.USE = "hanim_r_calf"

HAnimHumanoid41.segments.append(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.USE = "hanim_l_carpal"

HAnimHumanoid41.segments.append(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.USE = "hanim_r_carpal"

HAnimHumanoid41.segments.append(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.USE = "hanim_l_carpal_distal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.USE = "hanim_r_carpal_distal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.USE = "hanim_l_carpal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.USE = "hanim_r_carpal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.USE = "hanim_l_carpal_distal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.USE = "hanim_r_carpal_distal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.USE = "hanim_l_carpal_distal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.USE = "hanim_r_carpal_distal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.USE = "hanim_l_carpal_distal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.USE = "hanim_r_carpal_distal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.USE = "hanim_l_clavicle"

HAnimHumanoid41.segments.append(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.USE = "hanim_r_clavicle"

HAnimHumanoid41.segments.append(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.USE = "hanim_l_eyeball"

HAnimHumanoid41.segments.append(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.USE = "hanim_r_eyeball"

HAnimHumanoid41.segments.append(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.USE = "hanim_l_eyebrow"

HAnimHumanoid41.segments.append(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.USE = "hanim_r_eyebrow"

HAnimHumanoid41.segments.append(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.USE = "hanim_l_eyelid"

HAnimHumanoid41.segments.append(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.USE = "hanim_r_eyelid"

HAnimHumanoid41.segments.append(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.USE = "hanim_l_forearm"

HAnimHumanoid41.segments.append(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.USE = "hanim_r_forearm"

HAnimHumanoid41.segments.append(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.USE = "hanim_l_metacarpal_1"

HAnimHumanoid41.segments.append(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.USE = "hanim_r_metacarpal_1"

HAnimHumanoid41.segments.append(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.USE = "hanim_l_metacarpal_2"

HAnimHumanoid41.segments.append(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.USE = "hanim_r_metacarpal_2"

HAnimHumanoid41.segments.append(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.USE = "hanim_l_metacarpal_3"

HAnimHumanoid41.segments.append(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_r_metacarpal_3"

HAnimHumanoid41.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_l_metacarpal_4"

HAnimHumanoid41.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_r_metacarpal_4"

HAnimHumanoid41.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_l_metacarpal_5"

HAnimHumanoid41.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_r_metacarpal_5"

HAnimHumanoid41.segments.append(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.USE = "hanim_l_metatarsal_2"

HAnimHumanoid41.segments.append(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.USE = "hanim_r_metatarsal_2"

HAnimHumanoid41.segments.append(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.USE = "hanim_l_scapula"

HAnimHumanoid41.segments.append(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.USE = "hanim_r_scapula"

HAnimHumanoid41.segments.append(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.USE = "hanim_l_talus"

HAnimHumanoid41.segments.append(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.USE = "hanim_r_talus"

HAnimHumanoid41.segments.append(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.USE = "hanim_l_tarsal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.USE = "hanim_r_tarsal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.USE = "hanim_l_thigh"

HAnimHumanoid41.segments.append(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.USE = "hanim_r_thigh"

HAnimHumanoid41.segments.append(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.USE = "hanim_l_upperarm"

HAnimHumanoid41.segments.append(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.USE = "hanim_r_upperarm"

HAnimHumanoid41.segments.append(HAnimSegment1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.USE = "hanim_crotch_pt"

HAnimHumanoid41.sites.append(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.USE = "hanim_skull_vertex_pt"

HAnimHumanoid41.sites.append(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.USE = "hanim_sellion_pt"

HAnimHumanoid41.sites.append(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.USE = "hanim_supramenton_pt"

HAnimHumanoid41.sites.append(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.USE = "hanim_nuchale_pt"

HAnimHumanoid41.sites.append(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.USE = "hanim_suprasternale_pt"

HAnimHumanoid41.sites.append(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.USE = "hanim_cervicale_pt"

HAnimHumanoid41.sites.append(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.USE = "hanim_substernale_pt"

HAnimHumanoid41.sites.append(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.USE = "hanim_rib10_midspine_pt"

HAnimHumanoid41.sites.append(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.USE = "hanim_waist_preferred_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.USE = "hanim_navel_pt"

HAnimHumanoid41.sites.append(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.USE = "hanim_l_acromion_pt"

HAnimHumanoid41.sites.append(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.USE = "hanim_r_acromion_pt"

HAnimHumanoid41.sites.append(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.USE = "hanim_r_asis_pt"

HAnimHumanoid41.sites.append(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.USE = "hanim_l_asis_pt"

HAnimHumanoid41.sites.append(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.USE = "hanim_l_axilla_distal_pt"

HAnimHumanoid41.sites.append(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.USE = "hanim_r_axilla_distal_pt"

HAnimHumanoid41.sites.append(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.USE = "hanim_l_axilla_proximal_pt"

HAnimHumanoid41.sites.append(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.USE = "hanim_r_axilla_proximal_pt"

HAnimHumanoid41.sites.append(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.USE = "hanim_l_carpal_distal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite1797)
HAnimSite1798 = x3d.HAnimSite()
HAnimSite1798.USE = "hanim_r_carpal_distal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite1798)
HAnimSite1799 = x3d.HAnimSite()
HAnimSite1799.USE = "hanim_l_carpal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1799)
HAnimSite1800 = x3d.HAnimSite()
HAnimSite1800.USE = "hanim_r_carpal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1800)
HAnimSite1801 = x3d.HAnimSite()
HAnimSite1801.USE = "hanim_l_carpal_distal_phalanx_3_pt"

HAnimHumanoid41.sites.append(HAnimSite1801)
HAnimSite1802 = x3d.HAnimSite()
HAnimSite1802.USE = "hanim_r_carpal_distal_phalanx_3_pt"

HAnimHumanoid41.sites.append(HAnimSite1802)
HAnimSite1803 = x3d.HAnimSite()
HAnimSite1803.USE = "hanim_l_carpal_distal_phalanx_4_pt"

HAnimHumanoid41.sites.append(HAnimSite1803)
HAnimSite1804 = x3d.HAnimSite()
HAnimSite1804.USE = "hanim_r_carpal_distal_phalanx_4_pt"

HAnimHumanoid41.sites.append(HAnimSite1804)
HAnimSite1805 = x3d.HAnimSite()
HAnimSite1805.USE = "hanim_l_carpal_distal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1805)
HAnimSite1806 = x3d.HAnimSite()
HAnimSite1806.USE = "hanim_r_carpal_distal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1806)
HAnimSite1807 = x3d.HAnimSite()
HAnimSite1807.USE = "hanim_l_clavicle_pt"

HAnimHumanoid41.sites.append(HAnimSite1807)
HAnimSite1808 = x3d.HAnimSite()
HAnimSite1808.USE = "hanim_r_clavicle_pt"

HAnimHumanoid41.sites.append(HAnimSite1808)
HAnimSite1809 = x3d.HAnimSite()
HAnimSite1809.USE = "hanim_l_dactylion_pt"

HAnimHumanoid41.sites.append(HAnimSite1809)
HAnimSite1810 = x3d.HAnimSite()
HAnimSite1810.USE = "hanim_r_dactylion_pt"

HAnimHumanoid41.sites.append(HAnimSite1810)
HAnimSite1811 = x3d.HAnimSite()
HAnimSite1811.USE = "hanim_l_femoral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1811)
HAnimSite1812 = x3d.HAnimSite()
HAnimSite1812.USE = "hanim_r_femoral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1812)
HAnimSite1813 = x3d.HAnimSite()
HAnimSite1813.USE = "hanim_l_femoral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1813)
HAnimSite1814 = x3d.HAnimSite()
HAnimSite1814.USE = "hanim_r_femoral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1814)
HAnimSite1815 = x3d.HAnimSite()
HAnimSite1815.USE = "hanim_l_forefoot_tip_pt"

HAnimHumanoid41.sites.append(HAnimSite1815)
HAnimSite1816 = x3d.HAnimSite()
HAnimSite1816.USE = "hanim_r_forefoot_tip_pt"

HAnimHumanoid41.sites.append(HAnimSite1816)
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.USE = "hanim_r_gonion_pt"

HAnimHumanoid41.sites.append(HAnimSite1817)
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.USE = "hanim_l_gonion_pt"

HAnimHumanoid41.sites.append(HAnimSite1818)
HAnimSite1819 = x3d.HAnimSite()
HAnimSite1819.USE = "hanim_l_humeral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1819)
HAnimSite1820 = x3d.HAnimSite()
HAnimSite1820.USE = "hanim_r_humeral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1820)
HAnimSite1821 = x3d.HAnimSite()
HAnimSite1821.USE = "hanim_l_humeral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1821)
HAnimSite1822 = x3d.HAnimSite()
HAnimSite1822.USE = "hanim_r_humeral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite1822)
HAnimSite1823 = x3d.HAnimSite()
HAnimSite1823.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid41.sites.append(HAnimSite1823)
HAnimSite1824 = x3d.HAnimSite()
HAnimSite1824.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid41.sites.append(HAnimSite1824)
HAnimSite1825 = x3d.HAnimSite()
HAnimSite1825.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid41.sites.append(HAnimSite1825)
HAnimSite1826 = x3d.HAnimSite()
HAnimSite1826.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid41.sites.append(HAnimSite1826)
HAnimSite1827 = x3d.HAnimSite()
HAnimSite1827.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid41.sites.append(HAnimSite1827)
HAnimSite1828 = x3d.HAnimSite()
HAnimSite1828.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid41.sites.append(HAnimSite1828)
HAnimSite1829 = x3d.HAnimSite()
HAnimSite1829.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite1829)
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite1830)
HAnimSite1831 = x3d.HAnimSite()
HAnimSite1831.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite1831)
HAnimSite1832 = x3d.HAnimSite()
HAnimSite1832.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite1832)
HAnimSite1833 = x3d.HAnimSite()
HAnimSite1833.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1833)
HAnimSite1834 = x3d.HAnimSite()
HAnimSite1834.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1834)
HAnimSite1835 = x3d.HAnimSite()
HAnimSite1835.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1835)
HAnimSite1836 = x3d.HAnimSite()
HAnimSite1836.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1836)
HAnimSite1837 = x3d.HAnimSite()
HAnimSite1837.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite1837)
HAnimSite1838 = x3d.HAnimSite()
HAnimSite1838.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite1838)
HAnimSite1839 = x3d.HAnimSite()
HAnimSite1839.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1839)
HAnimSite1840 = x3d.HAnimSite()
HAnimSite1840.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite1840)
HAnimSite1841 = x3d.HAnimSite()
HAnimSite1841.USE = "hanim_r_neck_base_pt"

HAnimHumanoid41.sites.append(HAnimSite1841)
HAnimSite1842 = x3d.HAnimSite()
HAnimSite1842.USE = "hanim_l_neck_base_pt"

HAnimHumanoid41.sites.append(HAnimSite1842)
HAnimSite1843 = x3d.HAnimSite()
HAnimSite1843.USE = "hanim_l_olecranon_pt"

HAnimHumanoid41.sites.append(HAnimSite1843)
HAnimSite1844 = x3d.HAnimSite()
HAnimSite1844.USE = "hanim_r_olecranon_pt"

HAnimHumanoid41.sites.append(HAnimSite1844)
HAnimSite1845 = x3d.HAnimSite()
HAnimSite1845.USE = "hanim_r_psis_pt"

HAnimHumanoid41.sites.append(HAnimSite1845)
HAnimSite1846 = x3d.HAnimSite()
HAnimSite1846.USE = "hanim_l_psis_pt"

HAnimHumanoid41.sites.append(HAnimSite1846)
HAnimSite1847 = x3d.HAnimSite()
HAnimSite1847.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite1847)
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite1848)
HAnimSite1849 = x3d.HAnimSite()
HAnimSite1849.USE = "hanim_l_radiale_pt"

HAnimHumanoid41.sites.append(HAnimSite1849)
HAnimSite1850 = x3d.HAnimSite()
HAnimSite1850.USE = "hanim_r_radiale_pt"

HAnimHumanoid41.sites.append(HAnimSite1850)
HAnimSite1851 = x3d.HAnimSite()
HAnimSite1851.USE = "hanim_r_rib10_pt"

HAnimHumanoid41.sites.append(HAnimSite1851)
HAnimSite1852 = x3d.HAnimSite()
HAnimSite1852.USE = "hanim_l_rib10_pt"

HAnimHumanoid41.sites.append(HAnimSite1852)
HAnimSite1853 = x3d.HAnimSite()
HAnimSite1853.USE = "hanim_temporomandibular_l_site_pt"

HAnimHumanoid41.sites.append(HAnimSite1853)
HAnimSite1854 = x3d.HAnimSite()
HAnimSite1854.USE = "hanim_temporomandibular_r_site_pt"

HAnimHumanoid41.sites.append(HAnimSite1854)
HAnimSite1855 = x3d.HAnimSite()
HAnimSite1855.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid41.sites.append(HAnimSite1855)
HAnimSite1856 = x3d.HAnimSite()
HAnimSite1856.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid41.sites.append(HAnimSite1856)
HAnimSite1857 = x3d.HAnimSite()
HAnimSite1857.USE = "hanim_l_tarsal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1857)
HAnimSite1858 = x3d.HAnimSite()
HAnimSite1858.USE = "hanim_r_tarsal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite1858)
HAnimSite1859 = x3d.HAnimSite()
HAnimSite1859.USE = "hanim_r_thelion_pt"

HAnimHumanoid41.sites.append(HAnimSite1859)
HAnimSite1860 = x3d.HAnimSite()
HAnimSite1860.USE = "hanim_l_thelion_pt"

HAnimHumanoid41.sites.append(HAnimSite1860)
HAnimSite1861 = x3d.HAnimSite()
HAnimSite1861.USE = "hanim_r_tragion_pt"

HAnimHumanoid41.sites.append(HAnimSite1861)
HAnimSite1862 = x3d.HAnimSite()
HAnimSite1862.USE = "hanim_l_tragion_pt"

HAnimHumanoid41.sites.append(HAnimSite1862)
HAnimSite1863 = x3d.HAnimSite()
HAnimSite1863.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid41.sites.append(HAnimSite1863)
HAnimSite1864 = x3d.HAnimSite()
HAnimSite1864.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid41.sites.append(HAnimSite1864)
HAnimSite1865 = x3d.HAnimSite()
HAnimSite1865.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite1865)
HAnimSite1866 = x3d.HAnimSite()
HAnimSite1866.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite1866)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.DEF = "hanim_l_inclined_view"
HAnimSite1867.name = "l_inclined_view"
HAnimSite1867.translation = [1.62,1.05,2.06]
HAnimSite1867.rotation = [-0.113,0.993,0.0347,0.671]
TouchSensor1868 = x3d.TouchSensor()
TouchSensor1868.description = "HAnimSite l_inclined_view"

HAnimSite1867.children.append(TouchSensor1868)
Shape1869 = x3d.Shape()
Shape1869.USE = "HAnimSiteShape"

HAnimSite1867.children.append(Shape1869)
Viewpoint1870 = x3d.Viewpoint()
Viewpoint1870.DEF = "hanim_l_inclined_viewpoint"
Viewpoint1870.description = "left inclined"
Viewpoint1870.position = [0,0,0]

HAnimSite1867.children.append(Viewpoint1870)
Anchor1871 = x3d.Anchor()
Anchor1871.description = "HAnimSite hanim_l_inclined_view Viewpoint"
Anchor1871.url = ["#hanim_l_inclined_viewpoint"]
LOD1872 = x3d.LOD()
LOD1872.forceTransitions = True
LOD1872.range = [0.04]
WorldInfo1873 = x3d.WorldInfo()
WorldInfo1873.info = ["hide diamond when close"]

LOD1872.children.append(WorldInfo1873)
Shape1874 = x3d.Shape()
Shape1874.USE = "HAnimSiteViewpointShape"

LOD1872.children.append(Shape1874)

Anchor1871.children.append(LOD1872)

HAnimSite1867.children.append(Anchor1871)

HAnimHumanoid41.viewpoints.append(HAnimSite1867)
HAnimSite1875 = x3d.HAnimSite()
HAnimSite1875.DEF = "hanim_r_inclined_view"
HAnimSite1875.name = "r_inclined_view"
HAnimSite1875.translation = [-1.62,1.05,2.06]
HAnimSite1875.rotation = [-0.113,-0.993,0.0347,0.671]
TouchSensor1876 = x3d.TouchSensor()
TouchSensor1876.description = "HAnimSite r_inclined_view"

HAnimSite1875.children.append(TouchSensor1876)
Shape1877 = x3d.Shape()
Shape1877.USE = "HAnimSiteShape"

HAnimSite1875.children.append(Shape1877)
Viewpoint1878 = x3d.Viewpoint()
Viewpoint1878.DEF = "hanim_r_inclined_viewpoint"
Viewpoint1878.description = "right inclined"
Viewpoint1878.position = [0,0,0]
Viewpoint1878.centerOfRotation = [0,0.9,0]

HAnimSite1875.children.append(Viewpoint1878)
Anchor1879 = x3d.Anchor()
Anchor1879.description = "HAnimSite hanim_r_inclined_view Viewpoint"
Anchor1879.url = ["#hanim_r_inclined_viewpoint"]
LOD1880 = x3d.LOD()
LOD1880.forceTransitions = True
LOD1880.range = [0.04]
WorldInfo1881 = x3d.WorldInfo()
WorldInfo1881.info = ["hide diamond when close"]

LOD1880.children.append(WorldInfo1881)
Shape1882 = x3d.Shape()
Shape1882.USE = "HAnimSiteViewpointShape"

LOD1880.children.append(Shape1882)

Anchor1879.children.append(LOD1880)

HAnimSite1875.children.append(Anchor1879)

HAnimHumanoid41.viewpoints.append(HAnimSite1875)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.DEF = "hanim_front_view"
HAnimSite1883.name = "front_view"
HAnimSite1883.translation = [0,0.85,2.58]
TouchSensor1884 = x3d.TouchSensor()
TouchSensor1884.description = "HAnimSite front_view"

HAnimSite1883.children.append(TouchSensor1884)
Shape1885 = x3d.Shape()
Shape1885.USE = "HAnimSiteShape"

HAnimSite1883.children.append(Shape1885)
Viewpoint1886 = x3d.Viewpoint()
Viewpoint1886.DEF = "hanim_front_viewpoint"
Viewpoint1886.description = "front"
Viewpoint1886.position = [0,0,0]
Viewpoint1886.centerOfRotation = [0,0.9,0]

HAnimSite1883.children.append(Viewpoint1886)
Anchor1887 = x3d.Anchor()
Anchor1887.description = "HAnimSite hanim_front_view Viewpoint"
Anchor1887.url = ["#hanim_front_viewpoint"]
LOD1888 = x3d.LOD()
LOD1888.forceTransitions = True
LOD1888.range = [0.04]
WorldInfo1889 = x3d.WorldInfo()
WorldInfo1889.info = ["hide diamond when close"]

LOD1888.children.append(WorldInfo1889)
Shape1890 = x3d.Shape()
Shape1890.USE = "HAnimSiteViewpointShape"

LOD1888.children.append(Shape1890)

Anchor1887.children.append(LOD1888)

HAnimSite1883.children.append(Anchor1887)

HAnimHumanoid41.viewpoints.append(HAnimSite1883)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.DEF = "hanim_back_view"
HAnimSite1891.name = "back_view"
HAnimSite1891.translation = [0,0.85,-2.58]
HAnimSite1891.rotation = [0,1,0,3.14]
TouchSensor1892 = x3d.TouchSensor()
TouchSensor1892.description = "HAnimSite back_view"

HAnimSite1891.children.append(TouchSensor1892)
Shape1893 = x3d.Shape()
Shape1893.USE = "HAnimSiteShape"

HAnimSite1891.children.append(Shape1893)
Viewpoint1894 = x3d.Viewpoint()
Viewpoint1894.DEF = "hanim_back_viewpoint"
Viewpoint1894.description = "back"
Viewpoint1894.position = [0,0,0]
Viewpoint1894.centerOfRotation = [0,0.9,0]

HAnimSite1891.children.append(Viewpoint1894)
Anchor1895 = x3d.Anchor()
Anchor1895.description = "HAnimSite hanim_back_view Viewpoint"
Anchor1895.url = ["#hanim_back_viewpoint"]
LOD1896 = x3d.LOD()
LOD1896.forceTransitions = True
LOD1896.range = [0.04]
WorldInfo1897 = x3d.WorldInfo()
WorldInfo1897.info = ["hide diamond when close"]

LOD1896.children.append(WorldInfo1897)
Shape1898 = x3d.Shape()
Shape1898.USE = "HAnimSiteViewpointShape"

LOD1896.children.append(Shape1898)

Anchor1895.children.append(LOD1896)

HAnimSite1891.children.append(Anchor1895)

HAnimHumanoid41.viewpoints.append(HAnimSite1891)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.DEF = "hanim_l_side_view"
HAnimSite1899.name = "l_side_view"
HAnimSite1899.translation = [2.6,0.854,0]
HAnimSite1899.rotation = [0,1,0,1.5708]
TouchSensor1900 = x3d.TouchSensor()
TouchSensor1900.description = "HAnimSite l_side_view"

HAnimSite1899.children.append(TouchSensor1900)
Shape1901 = x3d.Shape()
Shape1901.USE = "HAnimSiteShape"

HAnimSite1899.children.append(Shape1901)
Viewpoint1902 = x3d.Viewpoint()
Viewpoint1902.DEF = "hanim_l_side_viewpoint"
Viewpoint1902.description = "left side"
Viewpoint1902.position = [0,0,0]
Viewpoint1902.centerOfRotation = [0,0.9,0]

HAnimSite1899.children.append(Viewpoint1902)
Anchor1903 = x3d.Anchor()
Anchor1903.description = "HAnimSite hanim_l_side_view Viewpoint"
Anchor1903.url = ["#hanim_l_side_viewpoint"]
LOD1904 = x3d.LOD()
LOD1904.forceTransitions = True
LOD1904.range = [0.04]
WorldInfo1905 = x3d.WorldInfo()
WorldInfo1905.info = ["hide diamond when close"]

LOD1904.children.append(WorldInfo1905)
Shape1906 = x3d.Shape()
Shape1906.USE = "HAnimSiteViewpointShape"

LOD1904.children.append(Shape1906)

Anchor1903.children.append(LOD1904)

HAnimSite1899.children.append(Anchor1903)

HAnimHumanoid41.viewpoints.append(HAnimSite1899)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.DEF = "hanim_Top_view"
HAnimSite1907.name = "Top_view"
HAnimSite1907.translation = [0,3.5,0]
HAnimSite1907.rotation = [1,0,0,-1.57]
TouchSensor1908 = x3d.TouchSensor()
TouchSensor1908.description = "HAnimSite Top_view"

HAnimSite1907.children.append(TouchSensor1908)
Shape1909 = x3d.Shape()
Shape1909.USE = "HAnimSiteShape"

HAnimSite1907.children.append(Shape1909)
Viewpoint1910 = x3d.Viewpoint()
Viewpoint1910.DEF = "hanim_Top_viewpoint"
Viewpoint1910.description = "Top"
Viewpoint1910.position = [0,0,0]
Viewpoint1910.centerOfRotation = [0,0.9,0]

HAnimSite1907.children.append(Viewpoint1910)
Anchor1911 = x3d.Anchor()
Anchor1911.description = "HAnimSite hanim_Top_view Viewpoint"
Anchor1911.url = ["#hanim_Top_viewpoint"]
LOD1912 = x3d.LOD()
LOD1912.forceTransitions = True
LOD1912.range = [0.04]
WorldInfo1913 = x3d.WorldInfo()
WorldInfo1913.info = ["hide diamond when close"]

LOD1912.children.append(WorldInfo1913)
Shape1914 = x3d.Shape()
Shape1914.USE = "HAnimSiteViewpointShape"

LOD1912.children.append(Shape1914)

Anchor1911.children.append(LOD1912)

HAnimSite1907.children.append(Anchor1911)

HAnimHumanoid41.viewpoints.append(HAnimSite1907)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.DEF = "hanim_front_close_view"
HAnimSite1915.name = "front_close_view"
HAnimSite1915.translation = [0,0.854,1.575]
TouchSensor1916 = x3d.TouchSensor()
TouchSensor1916.description = "HAnimSite front_close_view"

HAnimSite1915.children.append(TouchSensor1916)
Shape1917 = x3d.Shape()
Shape1917.USE = "HAnimSiteShape"

HAnimSite1915.children.append(Shape1917)
Viewpoint1918 = x3d.Viewpoint()
Viewpoint1918.DEF = "hanim_front_close_viewpoint"
Viewpoint1918.description = "front close"
Viewpoint1918.position = [0,0,0]
Viewpoint1918.centerOfRotation = [0,0,1.575]

HAnimSite1915.children.append(Viewpoint1918)
Anchor1919 = x3d.Anchor()
Anchor1919.description = "HAnimSite hanim_front_close_view Viewpoint"
Anchor1919.url = ["#hanim_front_close_viewpoint"]
LOD1920 = x3d.LOD()
LOD1920.forceTransitions = True
LOD1920.range = [0.04]
WorldInfo1921 = x3d.WorldInfo()
WorldInfo1921.info = ["hide diamond when close"]

LOD1920.children.append(WorldInfo1921)
Shape1922 = x3d.Shape()
Shape1922.USE = "HAnimSiteViewpointShape"

LOD1920.children.append(Shape1922)

Anchor1919.children.append(LOD1920)

HAnimSite1915.children.append(Anchor1919)

HAnimHumanoid41.viewpoints.append(HAnimSite1915)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.DEF = "hanim_side_close_view"
HAnimSite1923.name = "side_close_view"
HAnimSite1923.translation = [1.56,0.854,0]
HAnimSite1923.rotation = [0,1,0,1.5708]
TouchSensor1924 = x3d.TouchSensor()
TouchSensor1924.description = "HAnimSite side_close_view"

HAnimSite1923.children.append(TouchSensor1924)
Shape1925 = x3d.Shape()
Shape1925.USE = "HAnimSiteShape"

HAnimSite1923.children.append(Shape1925)
Viewpoint1926 = x3d.Viewpoint()
Viewpoint1926.DEF = "hanim_side_close_viewpoint"
Viewpoint1926.description = "side close"
Viewpoint1926.position = [0,0,0]
Viewpoint1926.centerOfRotation = [1.6,0,0]

HAnimSite1923.children.append(Viewpoint1926)
Anchor1927 = x3d.Anchor()
Anchor1927.description = "HAnimSite hanim_side_close_view Viewpoint"
Anchor1927.url = ["#hanim_side_close_viewpoint"]
LOD1928 = x3d.LOD()
LOD1928.forceTransitions = True
LOD1928.range = [0.04]
WorldInfo1929 = x3d.WorldInfo()
WorldInfo1929.info = ["hide diamond when close"]

LOD1928.children.append(WorldInfo1929)
Shape1930 = x3d.Shape()
Shape1930.USE = "HAnimSiteViewpointShape"

LOD1928.children.append(Shape1930)

Anchor1927.children.append(LOD1928)

HAnimSite1923.children.append(Anchor1927)

HAnimHumanoid41.viewpoints.append(HAnimSite1923)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.DEF = "hanim_head_front_close_view"
HAnimSite1931.name = "head_front_close_view"
HAnimSite1931.translation = [0,1.5,1]
TouchSensor1932 = x3d.TouchSensor()
TouchSensor1932.description = "HAnimSite head_front_close_view"

HAnimSite1931.children.append(TouchSensor1932)
Shape1933 = x3d.Shape()
Shape1933.USE = "HAnimSiteShape"

HAnimSite1931.children.append(Shape1933)
Viewpoint1934 = x3d.Viewpoint()
Viewpoint1934.DEF = "hanim_head_front_close_viewpoint"
Viewpoint1934.description = "head front close"
Viewpoint1934.position = [0,0,0]
Viewpoint1934.centerOfRotation = [0,0,1]

HAnimSite1931.children.append(Viewpoint1934)
Anchor1935 = x3d.Anchor()
Anchor1935.description = "HAnimSite hanim_head_front_close_view Viewpoint"
Anchor1935.url = ["#hanim_head_front_close_viewpoint"]
LOD1936 = x3d.LOD()
LOD1936.forceTransitions = True
LOD1936.range = [0.04]
WorldInfo1937 = x3d.WorldInfo()
WorldInfo1937.info = ["hide diamond when close"]

LOD1936.children.append(WorldInfo1937)
Shape1938 = x3d.Shape()
Shape1938.USE = "HAnimSiteViewpointShape"

LOD1936.children.append(Shape1938)

Anchor1935.children.append(LOD1936)

HAnimSite1931.children.append(Anchor1935)

HAnimHumanoid41.viewpoints.append(HAnimSite1931)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.DEF = "hanim_chest_front_close_view"
HAnimSite1939.name = "chest_front_close_view"
HAnimSite1939.translation = [0,1.2,1]
TouchSensor1940 = x3d.TouchSensor()
TouchSensor1940.description = "HAnimSite chest_front_close_view"

HAnimSite1939.children.append(TouchSensor1940)
Shape1941 = x3d.Shape()
Shape1941.USE = "HAnimSiteShape"

HAnimSite1939.children.append(Shape1941)
Viewpoint1942 = x3d.Viewpoint()
Viewpoint1942.DEF = "hanim_chest_front_close_viewpoint"
Viewpoint1942.description = "chest front close"
Viewpoint1942.position = [0,0,0]
Viewpoint1942.centerOfRotation = [0,0,1]

HAnimSite1939.children.append(Viewpoint1942)
Anchor1943 = x3d.Anchor()
Anchor1943.description = "HAnimSite hanim_chest_front_close_view Viewpoint"
Anchor1943.url = ["#hanim_chest_front_close_viewpoint"]
LOD1944 = x3d.LOD()
LOD1944.forceTransitions = True
LOD1944.range = [0.04]
WorldInfo1945 = x3d.WorldInfo()
WorldInfo1945.info = ["hide diamond when close"]

LOD1944.children.append(WorldInfo1945)
Shape1946 = x3d.Shape()
Shape1946.USE = "HAnimSiteViewpointShape"

LOD1944.children.append(Shape1946)

Anchor1943.children.append(LOD1944)

HAnimSite1939.children.append(Anchor1943)

HAnimHumanoid41.viewpoints.append(HAnimSite1939)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.DEF = "hanim_pelvis_front_close_view"
HAnimSite1947.name = "pelvis_front_close_view"
HAnimSite1947.translation = [0,0.8,1]
TouchSensor1948 = x3d.TouchSensor()
TouchSensor1948.description = "HAnimSite pelvis_front_close_view"

HAnimSite1947.children.append(TouchSensor1948)
Shape1949 = x3d.Shape()
Shape1949.USE = "HAnimSiteShape"

HAnimSite1947.children.append(Shape1949)
Viewpoint1950 = x3d.Viewpoint()
Viewpoint1950.DEF = "hanim_pelvis_front_close_viewpoint"
Viewpoint1950.description = "pelvis front close"
Viewpoint1950.position = [0,0,0]
Viewpoint1950.centerOfRotation = [0,0,1]

HAnimSite1947.children.append(Viewpoint1950)
Anchor1951 = x3d.Anchor()
Anchor1951.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint"
Anchor1951.url = ["#hanim_pelvis_front_close_viewpoint"]
LOD1952 = x3d.LOD()
LOD1952.forceTransitions = True
LOD1952.range = [0.04]
WorldInfo1953 = x3d.WorldInfo()
WorldInfo1953.info = ["hide diamond when close"]

LOD1952.children.append(WorldInfo1953)
Shape1954 = x3d.Shape()
Shape1954.USE = "HAnimSiteViewpointShape"

LOD1952.children.append(Shape1954)

Anchor1951.children.append(LOD1952)

HAnimSite1947.children.append(Anchor1951)

HAnimHumanoid41.viewpoints.append(HAnimSite1947)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.DEF = "hanim_knees_front_close_view"
HAnimSite1955.name = "knees_front_close_view"
HAnimSite1955.translation = [0,0.4,1]
TouchSensor1956 = x3d.TouchSensor()
TouchSensor1956.description = "HAnimSite knees_front_close_view"

HAnimSite1955.children.append(TouchSensor1956)
Shape1957 = x3d.Shape()
Shape1957.USE = "HAnimSiteShape"

HAnimSite1955.children.append(Shape1957)
Viewpoint1958 = x3d.Viewpoint()
Viewpoint1958.DEF = "hanim_knees_front_close_viewpoint"
Viewpoint1958.description = "knees front close"
Viewpoint1958.position = [0,0,0]
Viewpoint1958.centerOfRotation = [0,0.4,0]

HAnimSite1955.children.append(Viewpoint1958)
Anchor1959 = x3d.Anchor()
Anchor1959.description = "HAnimSite hanim_knees_front_close_view Viewpoint"
Anchor1959.url = ["#hanim_knees_front_close_viewpoint"]
LOD1960 = x3d.LOD()
LOD1960.forceTransitions = True
LOD1960.range = [0.04]
WorldInfo1961 = x3d.WorldInfo()
WorldInfo1961.info = ["hide diamond when close"]

LOD1960.children.append(WorldInfo1961)
Shape1962 = x3d.Shape()
Shape1962.USE = "HAnimSiteViewpointShape"

LOD1960.children.append(Shape1962)

Anchor1959.children.append(LOD1960)

HAnimSite1955.children.append(Anchor1959)

HAnimHumanoid41.viewpoints.append(HAnimSite1955)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.DEF = "hanim_feet_front_close_view"
HAnimSite1963.name = "feet_front_close_view"
HAnimSite1963.translation = [0,0,1]
TouchSensor1964 = x3d.TouchSensor()
TouchSensor1964.description = "HAnimSite feet_front_close_view"

HAnimSite1963.children.append(TouchSensor1964)
Shape1965 = x3d.Shape()
Shape1965.USE = "HAnimSiteShape"

HAnimSite1963.children.append(Shape1965)
Viewpoint1966 = x3d.Viewpoint()
Viewpoint1966.DEF = "hanim_feet_front_close_viewpoint"
Viewpoint1966.description = "feet front close"
Viewpoint1966.position = [0,0,0]

HAnimSite1963.children.append(Viewpoint1966)
Anchor1967 = x3d.Anchor()
Anchor1967.description = "HAnimSite hanim_feet_front_close_view Viewpoint"
Anchor1967.url = ["#hanim_feet_front_close_viewpoint"]
LOD1968 = x3d.LOD()
LOD1968.forceTransitions = True
LOD1968.range = [0.04]
WorldInfo1969 = x3d.WorldInfo()
WorldInfo1969.info = ["hide diamond when close"]

LOD1968.children.append(WorldInfo1969)
Shape1970 = x3d.Shape()
Shape1970.USE = "HAnimSiteViewpointShape"

LOD1968.children.append(Shape1970)

Anchor1967.children.append(LOD1968)

HAnimSite1963.children.append(Anchor1967)

HAnimHumanoid41.viewpoints.append(HAnimSite1963)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.DEF = "hanim_eye_level_view"
HAnimSite1971.name = "eye_level_view"
HAnimSite1971.translation = [0,1.6332,0.0502]
TouchSensor1972 = x3d.TouchSensor()
TouchSensor1972.description = "HAnimSite eye_level_view"

HAnimSite1971.children.append(TouchSensor1972)
Shape1973 = x3d.Shape()
Shape1973.USE = "HAnimSiteShape"

HAnimSite1971.children.append(Shape1973)
Viewpoint1974 = x3d.Viewpoint()
Viewpoint1974.DEF = "hanim_eye_level_viewpoint"
Viewpoint1974.description = "eye level looking forward"
Viewpoint1974.position = [0,0,0]
Viewpoint1974.orientation = [0,1,0,3.141593]

HAnimSite1971.children.append(Viewpoint1974)
Anchor1975 = x3d.Anchor()
Anchor1975.description = "HAnimSite hanim_eye_level_view Viewpoint"
Anchor1975.url = ["#hanim_eye_level_viewpoint"]
LOD1976 = x3d.LOD()
LOD1976.forceTransitions = True
LOD1976.range = [0.04]
WorldInfo1977 = x3d.WorldInfo()
WorldInfo1977.info = ["hide diamond when close"]

LOD1976.children.append(WorldInfo1977)
Shape1978 = x3d.Shape()
Shape1978.USE = "HAnimSiteViewpointShape"

LOD1976.children.append(Shape1978)

Anchor1975.children.append(LOD1976)

HAnimSite1971.children.append(Anchor1975)

HAnimHumanoid41.viewpoints.append(HAnimSite1971)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.USE = "hanim_l_eyeball_site_view"

HAnimHumanoid41.sites.append(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.USE = "hanim_r_eyeball_site_view"

HAnimHumanoid41.sites.append(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.USE = "hanim_l_hand_front_view"

HAnimHumanoid41.sites.append(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.USE = "hanim_r_hand_front_view"

HAnimHumanoid41.sites.append(HAnimSite1982)

Scene27.children.append(HAnimHumanoid41)

X3D0.Scene = Scene27
f = open("../data/HAnim2SpecificationLOA3Illustrated.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnim2SpecificationLOA3Illustrated.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnim2SpecificationLOA3Illustrated.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta3.content = "HAnimSpecificationLOA3Animation.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "reference"
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "reference"
meta6.content = "HAnimSpecificationLOA3Illustrated.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "HAnimSpecificationLOA3Invisible.x3d"

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
meta15.name = "created"
meta15.content = "24 April 2013"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "modified"
meta16.content = "Tue, 09 Sep 2025 19:39:08 GMT"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "error"
meta17.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "Image"
meta18.content = "HAnimSpecificationLOA3MotionH3DViewer.png"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "HAnimSpecificationLOA3MotionInstantReality.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "HAnimSpecificationLOA3MotionOctagaVS.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "HAnimSpecificationLOA3MotionView3dscene.png"

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
meta25.name = "creator"
meta25.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "translator"
meta26.content = "Don Brutzman and Joe Williams"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "generator"
meta27.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "generator"
meta28.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta28)

X3D0.head = head1
Scene29 = x3d.Scene()
Background30 = x3d.Background()
Background30.skyColor = [(0.3, 0.3, 0.3)]

Scene29.children.append(Background30)
NavigationInfo31 = x3d.NavigationInfo()

Scene29.children.append(NavigationInfo31)
Group32 = x3d.Group()
Group32.DEF = "Original_WorldInfo"
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3"
WorldInfo33.info = [" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]

Group32.children.append(WorldInfo33)

Scene29.children.append(Group32)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.description = "Humanoid LOA 3 Front"
Viewpoint34.position = [0,0.4,4]
Viewpoint34.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "Humanoid LOA 3 Front Close"
Viewpoint35.position = [0,0.8,2]
Viewpoint35.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.description = "Humanoid LOA 3 Front Closer"
Viewpoint36.position = [0,1.2,1]
Viewpoint36.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Humanoid LOA 3 Front Face"
Viewpoint37.position = [0,1.63,1]
Viewpoint37.centerOfRotation = [0,1.5,0.0016]

Scene29.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "Humanoid LOA 3 Right Side"
Viewpoint38.position = [2.6,0.8,0]
Viewpoint38.orientation = [0,1,0,1.5708]
Viewpoint38.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Humanoid LOA 3 Right Side Close"
Viewpoint39.position = [1,0.8,0.5]
Viewpoint39.orientation = [0,1,0,1.2]
Viewpoint39.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Humanoid LOA 3 Left Side Close"
Viewpoint40.position = [-1,0.8,0.5]
Viewpoint40.orientation = [0,1,0,-1.2]
Viewpoint40.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "Humanoid LOA 3 Left Side"
Viewpoint41.position = [-2.6,0.8,0]
Viewpoint41.orientation = [0,1,0,-1.5708]
Viewpoint41.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "Humanoid LOA 3 Top"
Viewpoint42.position = [0,3.5,0]
Viewpoint42.orientation = [1,0,0,-1.5708]
Viewpoint42.centerOfRotation = [0,0.9149,0.0016]

Scene29.children.append(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.DEF = "hanim_humanoid"
HAnimHumanoid43.name = "humanoid"
HAnimHumanoid43.info = ["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]
HAnimHumanoid43.version = "1.0"
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.DEF = "hanim_humanoid_root"
HAnimJoint44.name = "humanoid_root"
HAnimJoint44.center = [0,0.824,0.0277]
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.DEF = "hanim_sacrum"
HAnimSegment45.name = "sacrum"
TouchSensor46 = x3d.TouchSensor()
TouchSensor46.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum"

HAnimSegment45.children.append(TouchSensor46)
Transform47 = x3d.Transform()
Transform47.translation = [0,0.824,0.0277]
Shape48 = x3d.Shape()
Shape48.DEF = "HAnimJointShape"
Appearance49 = x3d.Appearance()
Appearance49.DEF = "HAnimJointAppearance"
Material50 = x3d.Material()
Material50.diffuseColor = [1,0.5,0]
Material50.transparency = 0.5

Appearance49.material = Material50

Shape48.appearance = Appearance49
Sphere51 = x3d.Sphere()
Sphere51.radius = 0.006

Shape48.geometry = Sphere51

Transform47.children.append(Shape48)

HAnimSegment45.children.append(Transform47)
Shape52 = x3d.Shape()
LineSet53 = x3d.LineSet()
LineSet53.vertexCount = [2]
ColorRGBA54 = x3d.ColorRGBA()
ColorRGBA54.DEF = "HAnimSegmentLineColorRGBA"
ColorRGBA54.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet53.color = ColorRGBA54
Coordinate55 = x3d.Coordinate()
Coordinate55.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet53.coord = Coordinate55

Shape52.geometry = LineSet53

HAnimSegment45.children.append(Shape52)
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.vertexCount = [2]
ColorRGBA58 = x3d.ColorRGBA()
ColorRGBA58.USE = "HAnimSegmentLineColorRGBA"

LineSet57.color = ColorRGBA58
Coordinate59 = x3d.Coordinate()
Coordinate59.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet57.coord = Coordinate59

Shape56.geometry = LineSet57

HAnimSegment45.children.append(Shape56)

HAnimJoint44.children.append(HAnimSegment45)
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.DEF = "hanim_sacroiliac"
HAnimJoint60.name = "sacroiliac"
HAnimJoint60.center = [0,0.9149,0.0016]
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.DEF = "hanim_pelvis"
HAnimSegment61.name = "pelvis"
TouchSensor62 = x3d.TouchSensor()
TouchSensor62.description = "HAnimJoint sacroiliac, HAnimSegment pelvis"

HAnimSegment61.children.append(TouchSensor62)
Transform63 = x3d.Transform()
Transform63.translation = [0,0.9149,0.0016]
Shape64 = x3d.Shape()
Shape64.USE = "HAnimJointShape"

Transform63.children.append(Shape64)

HAnimSegment61.children.append(Transform63)
Shape65 = x3d.Shape()
LineSet66 = x3d.LineSet()
LineSet66.vertexCount = [2]
ColorRGBA67 = x3d.ColorRGBA()
ColorRGBA67.USE = "HAnimSegmentLineColorRGBA"

LineSet66.color = ColorRGBA67
Coordinate68 = x3d.Coordinate()
Coordinate68.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet66.coord = Coordinate68

Shape65.geometry = LineSet66

HAnimSegment61.children.append(Shape65)
Shape69 = x3d.Shape()
LineSet70 = x3d.LineSet()
LineSet70.vertexCount = [2]
ColorRGBA71 = x3d.ColorRGBA()
ColorRGBA71.USE = "HAnimSegmentLineColorRGBA"

LineSet70.color = ColorRGBA71
Coordinate72 = x3d.Coordinate()
Coordinate72.point = [(0, 0.9149, 0.0016),(-0.0961, 0.9124, -0.0001)]

LineSet70.coord = Coordinate72

Shape69.geometry = LineSet70

HAnimSegment61.children.append(Shape69)
Shape73 = x3d.Shape()
LineSet74 = x3d.LineSet()
LineSet74.vertexCount = [2]
ColorRGBA75 = x3d.ColorRGBA()
ColorRGBA75.DEF = "HAnimSiteLineColorRGBA"
ColorRGBA75.color = [(1, 0, 0, 1),(1, 0, 0, 0.1)]

LineSet74.color = ColorRGBA75
Coordinate76 = x3d.Coordinate()
Coordinate76.point = [(0, 0.9149, 0.0016),(-0.1525, 1.0628, 0.0035)]

LineSet74.coord = Coordinate76

Shape73.geometry = LineSet74

HAnimSegment61.children.append(Shape73)
Shape77 = x3d.Shape()
LineSet78 = x3d.LineSet()
LineSet78.vertexCount = [2]
ColorRGBA79 = x3d.ColorRGBA()
ColorRGBA79.USE = "HAnimSiteLineColorRGBA"

LineSet78.color = ColorRGBA79
Coordinate80 = x3d.Coordinate()
Coordinate80.point = [(0, 0.9149, 0.0016),(-0.1689, 0.8419, 0.0352)]

LineSet78.coord = Coordinate80

Shape77.geometry = LineSet78

HAnimSegment61.children.append(Shape77)
Shape81 = x3d.Shape()
LineSet82 = x3d.LineSet()
LineSet82.vertexCount = [2]
ColorRGBA83 = x3d.ColorRGBA()
ColorRGBA83.USE = "HAnimSiteLineColorRGBA"

LineSet82.color = ColorRGBA83
Coordinate84 = x3d.Coordinate()
Coordinate84.point = [(0, 0.9149, 0.0016),(0.1612, 1.0537, 0.0008)]

LineSet82.coord = Coordinate84

Shape81.geometry = LineSet82

HAnimSegment61.children.append(Shape81)
Shape85 = x3d.Shape()
LineSet86 = x3d.LineSet()
LineSet86.vertexCount = [2]
ColorRGBA87 = x3d.ColorRGBA()
ColorRGBA87.USE = "HAnimSiteLineColorRGBA"

LineSet86.color = ColorRGBA87
Coordinate88 = x3d.Coordinate()
Coordinate88.point = [(0, 0.9149, 0.0016),(0.1677, 0.8336, 0.0303)]

LineSet86.coord = Coordinate88

Shape85.geometry = LineSet86

HAnimSegment61.children.append(Shape85)
Shape89 = x3d.Shape()
LineSet90 = x3d.LineSet()
LineSet90.vertexCount = [2]
ColorRGBA91 = x3d.ColorRGBA()
ColorRGBA91.USE = "HAnimSiteLineColorRGBA"

LineSet90.color = ColorRGBA91
Coordinate92 = x3d.Coordinate()
Coordinate92.point = [(0, 0.9149, 0.0016),(-0.0887, 1.0021, 0.1112)]

LineSet90.coord = Coordinate92

Shape89.geometry = LineSet90

HAnimSegment61.children.append(Shape89)
Shape93 = x3d.Shape()
LineSet94 = x3d.LineSet()
LineSet94.vertexCount = [2]
ColorRGBA95 = x3d.ColorRGBA()
ColorRGBA95.USE = "HAnimSiteLineColorRGBA"

LineSet94.color = ColorRGBA95
Coordinate96 = x3d.Coordinate()
Coordinate96.point = [(0, 0.9149, 0.0016),(0.0925, 0.9983, 0.1052)]

LineSet94.coord = Coordinate96

Shape93.geometry = LineSet94

HAnimSegment61.children.append(Shape93)
Shape97 = x3d.Shape()
LineSet98 = x3d.LineSet()
LineSet98.vertexCount = [2]
ColorRGBA99 = x3d.ColorRGBA()
ColorRGBA99.USE = "HAnimSiteLineColorRGBA"

LineSet98.color = ColorRGBA99
Coordinate100 = x3d.Coordinate()
Coordinate100.point = [(0, 0.9149, 0.0016),(-0.0716, 1.019, -0.1138)]

LineSet98.coord = Coordinate100

Shape97.geometry = LineSet98

HAnimSegment61.children.append(Shape97)
Shape101 = x3d.Shape()
LineSet102 = x3d.LineSet()
LineSet102.vertexCount = [2]
ColorRGBA103 = x3d.ColorRGBA()
ColorRGBA103.USE = "HAnimSiteLineColorRGBA"

LineSet102.color = ColorRGBA103
Coordinate104 = x3d.Coordinate()
Coordinate104.point = [(0, 0.9149, 0.0016),(0.0774, 1.019, -0.1151)]

LineSet102.coord = Coordinate104

Shape101.geometry = LineSet102

HAnimSegment61.children.append(Shape101)
Shape105 = x3d.Shape()
LineSet106 = x3d.LineSet()
LineSet106.vertexCount = [2]
ColorRGBA107 = x3d.ColorRGBA()
ColorRGBA107.USE = "HAnimSiteLineColorRGBA"

LineSet106.color = ColorRGBA107
Coordinate108 = x3d.Coordinate()
Coordinate108.point = [(0, 0.9149, 0.0016),(0.0034, 0.8266, 0.0257)]

LineSet106.coord = Coordinate108

Shape105.geometry = LineSet106

HAnimSegment61.children.append(Shape105)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.DEF = "hanim_r_iliocristale_pt"
HAnimSite109.name = "r_iliocristale_pt"
HAnimSite109.translation = [-0.1525,1.0628,0.0035]
TouchSensor110 = x3d.TouchSensor()
TouchSensor110.description = "HAnimSite r_iliocristale"

HAnimSite109.children.append(TouchSensor110)
Shape111 = x3d.Shape()
Shape111.DEF = "HAnimSiteShape"
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.diffuseColor = [1,0,0]

Appearance112.material = Material113

Shape111.appearance = Appearance112
IndexedFaceSet114 = x3d.IndexedFaceSet()
IndexedFaceSet114.DEF = "DiamondIFS"
IndexedFaceSet114.solid = False
IndexedFaceSet114.creaseAngle = 0.5
IndexedFaceSet114.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate115 = x3d.Coordinate()
Coordinate115.point = [(0, 0.008, 0),(-0.008, 0, 0),(0, 0, 0.008),(0.008, 0, 0),(0, 0, -0.008),(0, -0.008, 0)]

IndexedFaceSet114.coord = Coordinate115

Shape111.geometry = IndexedFaceSet114

HAnimSite109.children.append(Shape111)

HAnimSegment61.children.append(HAnimSite109)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.DEF = "hanim_r_trochanterion_pt"
HAnimSite116.name = "r_trochanterion_pt"
HAnimSite116.translation = [-0.1689,0.8419,0.0352]
TouchSensor117 = x3d.TouchSensor()
TouchSensor117.description = "HAnimSite r_trochanterion"

HAnimSite116.children.append(TouchSensor117)
Shape118 = x3d.Shape()
Shape118.USE = "HAnimSiteShape"

HAnimSite116.children.append(Shape118)

HAnimSegment61.children.append(HAnimSite116)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.DEF = "hanim_l_iliocristale_pt"
HAnimSite119.name = "l_iliocristale_pt"
HAnimSite119.translation = [0.1612,1.0537,0.0008]
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.description = "HAnimSite l_iliocristale"

HAnimSite119.children.append(TouchSensor120)
Shape121 = x3d.Shape()
Shape121.USE = "HAnimSiteShape"

HAnimSite119.children.append(Shape121)

HAnimSegment61.children.append(HAnimSite119)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.DEF = "hanim_l_trochanterion_pt"
HAnimSite122.name = "l_trochanterion_pt"
HAnimSite122.translation = [0.1677,0.8336,0.0303]
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "HAnimSite l_trochanterion"

HAnimSite122.children.append(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.USE = "HAnimSiteShape"

HAnimSite122.children.append(Shape124)

HAnimSegment61.children.append(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.DEF = "hanim_r_asis_pt"
HAnimSite125.name = "r_asis_pt"
HAnimSite125.translation = [-0.0887,1.0021,0.1112]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite r_asis"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.USE = "HAnimSiteShape"

HAnimSite125.children.append(Shape127)

HAnimSegment61.children.append(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.DEF = "hanim_l_asis_pt"
HAnimSite128.name = "l_asis_pt"
HAnimSite128.translation = [0.0925,0.9983,0.1052]
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.description = "HAnimSite l_asis"

HAnimSite128.children.append(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.USE = "HAnimSiteShape"

HAnimSite128.children.append(Shape130)

HAnimSegment61.children.append(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.DEF = "hanim_r_psis_pt"
HAnimSite131.name = "r_psis_pt"
HAnimSite131.translation = [-0.0716,1.019,-0.1138]
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "HAnimSite r_psis"

HAnimSite131.children.append(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.USE = "HAnimSiteShape"

HAnimSite131.children.append(Shape133)

HAnimSegment61.children.append(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.DEF = "hanim_l_psis_pt"
HAnimSite134.name = "l_psis_pt"
HAnimSite134.translation = [0.0774,1.019,-0.1151]
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.description = "HAnimSite l_psis"

HAnimSite134.children.append(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.USE = "HAnimSiteShape"

HAnimSite134.children.append(Shape136)

HAnimSegment61.children.append(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.DEF = "hanim_crotch_pt"
HAnimSite137.name = "crotch_pt"
HAnimSite137.translation = [0.0034,0.8266,0.0257]
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.description = "HAnimSite crotch"

HAnimSite137.children.append(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.USE = "HAnimSiteShape"

HAnimSite137.children.append(Shape139)

HAnimSegment61.children.append(HAnimSite137)

HAnimJoint60.children.append(HAnimSegment61)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.DEF = "hanim_l_hip"
HAnimJoint140.name = "l_hip"
HAnimJoint140.center = [0.0961,0.9124,-0.0001]
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.DEF = "hanim_l_thigh"
HAnimSegment141.name = "l_thigh"
TouchSensor142 = x3d.TouchSensor()
TouchSensor142.description = "HAnimJoint l_hip, HAnimSegment l_thigh"

HAnimSegment141.children.append(TouchSensor142)
Transform143 = x3d.Transform()
Transform143.translation = [0.0961,0.9124,-0.0001]
Shape144 = x3d.Shape()
Shape144.USE = "HAnimJointShape"

Transform143.children.append(Shape144)

HAnimSegment141.children.append(Transform143)
Shape145 = x3d.Shape()
LineSet146 = x3d.LineSet()
LineSet146.vertexCount = [2]
ColorRGBA147 = x3d.ColorRGBA()
ColorRGBA147.USE = "HAnimSegmentLineColorRGBA"

LineSet146.color = ColorRGBA147
Coordinate148 = x3d.Coordinate()
Coordinate148.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet146.coord = Coordinate148

Shape145.geometry = LineSet146

HAnimSegment141.children.append(Shape145)
Shape149 = x3d.Shape()
LineSet150 = x3d.LineSet()
LineSet150.vertexCount = [2]
ColorRGBA151 = x3d.ColorRGBA()
ColorRGBA151.USE = "HAnimSiteLineColorRGBA"

LineSet150.color = ColorRGBA151
Coordinate152 = x3d.Coordinate()
Coordinate152.point = [(0.0961, 0.9124, -0.0001),(0.0993, 0.4881, -0.0309)]

LineSet150.coord = Coordinate152

Shape149.geometry = LineSet150

HAnimSegment141.children.append(Shape149)
Shape153 = x3d.Shape()
LineSet154 = x3d.LineSet()
LineSet154.vertexCount = [2]
ColorRGBA155 = x3d.ColorRGBA()
ColorRGBA155.USE = "HAnimSiteLineColorRGBA"

LineSet154.color = ColorRGBA155
Coordinate156 = x3d.Coordinate()
Coordinate156.point = [(0.0961, 0.9124, -0.0001),(0.1598, 0.4967, 0.0297)]

LineSet154.coord = Coordinate156

Shape153.geometry = LineSet154

HAnimSegment141.children.append(Shape153)
Shape157 = x3d.Shape()
LineSet158 = x3d.LineSet()
LineSet158.vertexCount = [2]
ColorRGBA159 = x3d.ColorRGBA()
ColorRGBA159.USE = "HAnimSiteLineColorRGBA"

LineSet158.color = ColorRGBA159
Coordinate160 = x3d.Coordinate()
Coordinate160.point = [(0.0961, 0.9124, -0.0001),(0.0398, 0.4946, 0.0303)]

LineSet158.coord = Coordinate160

Shape157.geometry = LineSet158

HAnimSegment141.children.append(Shape157)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.DEF = "hanim_l_knee_crease_pt"
HAnimSite161.name = "l_knee_crease_pt"
HAnimSite161.translation = [0.0993,0.4881,-0.0309]
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.description = "HAnimSite l_knee_crease"

HAnimSite161.children.append(TouchSensor162)
Shape163 = x3d.Shape()
Shape163.USE = "HAnimSiteShape"

HAnimSite161.children.append(Shape163)

HAnimSegment141.children.append(HAnimSite161)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.DEF = "hanim_l_femoral_lateral_epicn_pt"
HAnimSite164.name = "l_femoral_lateral_epicn_pt"
HAnimSite164.translation = [0.1598,0.4967,0.0297]
TouchSensor165 = x3d.TouchSensor()
TouchSensor165.description = "HAnimSite l_femoral_lateral_epicn"

HAnimSite164.children.append(TouchSensor165)
Shape166 = x3d.Shape()
Shape166.USE = "HAnimSiteShape"

HAnimSite164.children.append(Shape166)

HAnimSegment141.children.append(HAnimSite164)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.DEF = "hanim_l_femoral_medial_epicn_pt"
HAnimSite167.name = "l_femoral_medial_epicn_pt"
HAnimSite167.translation = [0.0398,0.4946,0.0303]
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.description = "HAnimSite l_femoral_medial_epicn"

HAnimSite167.children.append(TouchSensor168)
Shape169 = x3d.Shape()
Shape169.USE = "HAnimSiteShape"

HAnimSite167.children.append(Shape169)

HAnimSegment141.children.append(HAnimSite167)

HAnimJoint140.children.append(HAnimSegment141)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.DEF = "hanim_l_knee"
HAnimJoint170.name = "l_knee"
HAnimJoint170.center = [0.104,0.4867,0.0308]
HAnimSegment171 = x3d.HAnimSegment()
HAnimSegment171.DEF = "hanim_l_calf"
HAnimSegment171.name = "l_calf"
TouchSensor172 = x3d.TouchSensor()
TouchSensor172.description = "HAnimJoint l_knee, HAnimSegment l_calf"

HAnimSegment171.children.append(TouchSensor172)
Transform173 = x3d.Transform()
Transform173.translation = [0.104,0.4867,0.0308]
Shape174 = x3d.Shape()
Shape174.USE = "HAnimJointShape"

Transform173.children.append(Shape174)

HAnimSegment171.children.append(Transform173)
Shape175 = x3d.Shape()
LineSet176 = x3d.LineSet()
LineSet176.vertexCount = [2]
ColorRGBA177 = x3d.ColorRGBA()
ColorRGBA177.USE = "HAnimSegmentLineColorRGBA"

LineSet176.color = ColorRGBA177
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet176.coord = Coordinate178

Shape175.geometry = LineSet176

HAnimSegment171.children.append(Shape175)

HAnimJoint170.children.append(HAnimSegment171)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.DEF = "hanim_l_ankle"
HAnimJoint179.name = "l_ankle"
HAnimJoint179.rotation = [-0.999999999999999,0,0,0.486193023827777]
HAnimJoint179.center = [0.1101,0.0656,-0.0736]
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.DEF = "hanim_l_hindfoot"
HAnimSegment180.name = "l_hindfoot"
TouchSensor181 = x3d.TouchSensor()
TouchSensor181.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot"

HAnimSegment180.children.append(TouchSensor181)
Transform182 = x3d.Transform()
Transform182.translation = [0.1101,0.0656,-0.0736]
Shape183 = x3d.Shape()
Shape183.USE = "HAnimJointShape"

Transform182.children.append(Shape183)

HAnimSegment180.children.append(Transform182)
Shape184 = x3d.Shape()
LineSet185 = x3d.LineSet()
LineSet185.vertexCount = [2]
ColorRGBA186 = x3d.ColorRGBA()
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA"

LineSet185.color = ColorRGBA186
Coordinate187 = x3d.Coordinate()
Coordinate187.point = [(0.1101, 0.0656, -0.0736),(0.1086, 0.0001, -0.0368)]

LineSet185.coord = Coordinate187

Shape184.geometry = LineSet185

HAnimSegment180.children.append(Shape184)
Shape188 = x3d.Shape()
LineSet189 = x3d.LineSet()
LineSet189.vertexCount = [2]
ColorRGBA190 = x3d.ColorRGBA()
ColorRGBA190.USE = "HAnimSiteLineColorRGBA"

LineSet189.color = ColorRGBA190
Coordinate191 = x3d.Coordinate()
Coordinate191.point = [(0.1101, 0.0656, -0.0736),(0.1308, 0.0597, -0.1032)]

LineSet189.coord = Coordinate191

Shape188.geometry = LineSet189

HAnimSegment180.children.append(Shape188)
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.vertexCount = [2]
ColorRGBA194 = x3d.ColorRGBA()
ColorRGBA194.USE = "HAnimSiteLineColorRGBA"

LineSet193.color = ColorRGBA194
Coordinate195 = x3d.Coordinate()
Coordinate195.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0716, -0.0881)]

LineSet193.coord = Coordinate195

Shape192.geometry = LineSet193

HAnimSegment180.children.append(Shape192)
Shape196 = x3d.Shape()
LineSet197 = x3d.LineSet()
LineSet197.vertexCount = [2]
ColorRGBA198 = x3d.ColorRGBA()
ColorRGBA198.USE = "HAnimSiteLineColorRGBA"

LineSet197.color = ColorRGBA198
Coordinate199 = x3d.Coordinate()
Coordinate199.point = [(0.1101, 0.0656, -0.0736),(0.089, 0.0575, -0.0943)]

LineSet197.coord = Coordinate199

Shape196.geometry = LineSet197

HAnimSegment180.children.append(Shape196)
Shape200 = x3d.Shape()
LineSet201 = x3d.LineSet()
LineSet201.vertexCount = [2]
ColorRGBA202 = x3d.ColorRGBA()
ColorRGBA202.USE = "HAnimSiteLineColorRGBA"

LineSet201.color = ColorRGBA202
Coordinate203 = x3d.Coordinate()
Coordinate203.point = [(0.1101, 0.0656, -0.0736),(0.0974, 0.0259, -0.1171)]

LineSet201.coord = Coordinate203

Shape200.geometry = LineSet201

HAnimSegment180.children.append(Shape200)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite204.name = "l_lateral_malleolus_pt"
HAnimSite204.translation = [0.1308,0.0597,-0.1032]
TouchSensor205 = x3d.TouchSensor()
TouchSensor205.description = "HAnimSite l_lateral_malleolus"

HAnimSite204.children.append(TouchSensor205)
Shape206 = x3d.Shape()
Shape206.USE = "HAnimSiteShape"

HAnimSite204.children.append(Shape206)

HAnimSegment180.children.append(HAnimSite204)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite207.name = "l_medial_malleolus_pt"
HAnimSite207.translation = [0.089,0.0716,-0.0881]
TouchSensor208 = x3d.TouchSensor()
TouchSensor208.description = "HAnimSite l_medial_malleolus"

HAnimSite207.children.append(TouchSensor208)
Shape209 = x3d.Shape()
Shape209.USE = "HAnimSiteShape"

HAnimSite207.children.append(Shape209)

HAnimSegment180.children.append(HAnimSite207)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.DEF = "hanim_l_sphyrion_pt"
HAnimSite210.name = "l_sphyrion_pt"
HAnimSite210.translation = [0.089,0.0575,-0.0943]
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.description = "HAnimSite l_sphyrion"

HAnimSite210.children.append(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.USE = "HAnimSiteShape"

HAnimSite210.children.append(Shape212)

HAnimSegment180.children.append(HAnimSite210)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.DEF = "hanim_l_calcaneous_post_pt"
HAnimSite213.name = "l_calcaneous_post_pt"
HAnimSite213.translation = [0.0974,0.0259,-0.1171]
TouchSensor214 = x3d.TouchSensor()
TouchSensor214.description = "HAnimSite l_calcaneous_post"

HAnimSite213.children.append(TouchSensor214)
Shape215 = x3d.Shape()
Shape215.USE = "HAnimSiteShape"

HAnimSite213.children.append(Shape215)

HAnimSegment180.children.append(HAnimSite213)

HAnimJoint179.children.append(HAnimSegment180)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.DEF = "hanim_l_subtalar"
HAnimJoint216.name = "l_subtalar"
HAnimJoint216.center = [0.1086,0.0001,-0.0368]
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.DEF = "hanim_l_midproximal"
HAnimSegment217.name = "l_midproximal"
TouchSensor218 = x3d.TouchSensor()
TouchSensor218.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal"

HAnimSegment217.children.append(TouchSensor218)
Transform219 = x3d.Transform()
Transform219.translation = [0.1086,0.0001,-0.0368]
Shape220 = x3d.Shape()
Shape220.USE = "HAnimJointShape"

Transform219.children.append(Shape220)

HAnimSegment217.children.append(Transform219)
Shape221 = x3d.Shape()
LineSet222 = x3d.LineSet()
LineSet222.vertexCount = [2]
ColorRGBA223 = x3d.ColorRGBA()
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA"

LineSet222.color = ColorRGBA223
Coordinate224 = x3d.Coordinate()
Coordinate224.point = [(0.1086, 0.0001, -0.0368),(0.1086, 0.0001, 0.0368)]

LineSet222.coord = Coordinate224

Shape221.geometry = LineSet222

HAnimSegment217.children.append(Shape221)

HAnimJoint216.children.append(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.DEF = "hanim_l_midtarsal"
HAnimJoint225.name = "l_midtarsal"
HAnimJoint225.center = [0.1086,0.0001,0.0368]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.DEF = "hanim_l_middistal"
HAnimSegment226.name = "l_middistal"
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal"

HAnimSegment226.children.append(TouchSensor227)
Transform228 = x3d.Transform()
Transform228.translation = [0.1086,0.0001,0.0368]
Shape229 = x3d.Shape()
Shape229.USE = "HAnimJointShape"

Transform228.children.append(Shape229)

HAnimSegment226.children.append(Transform228)
Shape230 = x3d.Shape()
LineSet231 = x3d.LineSet()
LineSet231.vertexCount = [2]
ColorRGBA232 = x3d.ColorRGBA()
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA"

LineSet231.color = ColorRGBA232
Coordinate233 = x3d.Coordinate()
Coordinate233.point = [(0.1086, 0.0001, 0.0368),(0.1086, 0, 0.0762)]

LineSet231.coord = Coordinate233

Shape230.geometry = LineSet231

HAnimSegment226.children.append(Shape230)
Shape234 = x3d.Shape()
LineSet235 = x3d.LineSet()
LineSet235.vertexCount = [2]
ColorRGBA236 = x3d.ColorRGBA()
ColorRGBA236.USE = "HAnimSiteLineColorRGBA"

LineSet235.color = ColorRGBA236
Coordinate237 = x3d.Coordinate()
Coordinate237.point = [(0.1086, 0.0001, 0.0368),(0.0816, 0.0232, 0.0106)]

LineSet235.coord = Coordinate237

Shape234.geometry = LineSet235

HAnimSegment226.children.append(Shape234)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.DEF = "hanim_l_metatarsal_pha1_pt"
HAnimSite238.name = "l_metatarsal_pha1_pt"
HAnimSite238.translation = [0.0816,0.0232,0.0106]
TouchSensor239 = x3d.TouchSensor()
TouchSensor239.description = "HAnimSite l_metatarsal_pha1"

HAnimSite238.children.append(TouchSensor239)
Shape240 = x3d.Shape()
Shape240.USE = "HAnimSiteShape"

HAnimSite238.children.append(Shape240)

HAnimSegment226.children.append(HAnimSite238)

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.DEF = "hanim_l_metatarsal"
HAnimJoint241.name = "l_metatarsal"
HAnimJoint241.rotation = [-1,0,0,0.270107235459875]
HAnimJoint241.center = [0.1086,0,0.0762]
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.DEF = "hanim_l_forefoot"
HAnimSegment242.name = "l_forefoot"
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot"

HAnimSegment242.children.append(TouchSensor243)
Transform244 = x3d.Transform()
Transform244.translation = [0.1086,0,0.0762]
Shape245 = x3d.Shape()
Shape245.USE = "HAnimJointShape"

Transform244.children.append(Shape245)

HAnimSegment242.children.append(Transform244)
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.vertexCount = [2]
ColorRGBA248 = x3d.ColorRGBA()
ColorRGBA248.USE = "HAnimSiteLineColorRGBA"

LineSet247.color = ColorRGBA248
Coordinate249 = x3d.Coordinate()
Coordinate249.point = [(0.1086, 0, 0.0762),(0.1354, 0.0016, 0.1476)]

LineSet247.coord = Coordinate249

Shape246.geometry = LineSet247

HAnimSegment242.children.append(Shape246)
Shape250 = x3d.Shape()
LineSet251 = x3d.LineSet()
LineSet251.vertexCount = [2]
ColorRGBA252 = x3d.ColorRGBA()
ColorRGBA252.USE = "HAnimSiteLineColorRGBA"

LineSet251.color = ColorRGBA252
Coordinate253 = x3d.Coordinate()
Coordinate253.point = [(0.1086, 0, 0.0762),(0.1825, 0.007, 0.0928)]

LineSet251.coord = Coordinate253

Shape250.geometry = LineSet251

HAnimSegment242.children.append(Shape250)
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.vertexCount = [2]
ColorRGBA256 = x3d.ColorRGBA()
ColorRGBA256.USE = "HAnimSiteLineColorRGBA"

LineSet255.color = ColorRGBA256
Coordinate257 = x3d.Coordinate()
Coordinate257.point = [(0.1086, 0, 0.0762),(0.1195, 0.0079, 0.1433)]

LineSet255.coord = Coordinate257

Shape254.geometry = LineSet255

HAnimSegment242.children.append(Shape254)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.DEF = "hanim_l_forefoot_tip"
HAnimSite258.name = "l_forefoot_tip"
HAnimSite258.translation = [0.1354,0.0016,0.1476]
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.description = "HAnimSite l_forefoot_tip"

HAnimSite258.children.append(TouchSensor259)
Shape260 = x3d.Shape()
Shape260.USE = "HAnimSiteShape"

HAnimSite258.children.append(Shape260)

HAnimSegment242.children.append(HAnimSite258)
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.DEF = "hanim_l_metatarsal_pha5_pt"
HAnimSite261.name = "l_metatarsal_pha5_pt"
HAnimSite261.translation = [0.1825,0.007,0.0928]
TouchSensor262 = x3d.TouchSensor()
TouchSensor262.description = "HAnimSite l_metatarsal_pha5"

HAnimSite261.children.append(TouchSensor262)
Shape263 = x3d.Shape()
Shape263.USE = "HAnimSiteShape"

HAnimSite261.children.append(Shape263)

HAnimSegment242.children.append(HAnimSite261)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.DEF = "hanim_l_digit2_pt"
HAnimSite264.name = "l_digit2_pt"
HAnimSite264.translation = [0.1195,0.0079,0.1433]
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.description = "HAnimSite l_digit2"

HAnimSite264.children.append(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.USE = "HAnimSiteShape"

HAnimSite264.children.append(Shape266)

HAnimSegment242.children.append(HAnimSite264)

HAnimJoint241.children.append(HAnimSegment242)

HAnimJoint225.children.append(HAnimJoint241)

HAnimJoint216.children.append(HAnimJoint225)

HAnimJoint179.children.append(HAnimJoint216)

HAnimJoint170.children.append(HAnimJoint179)

HAnimJoint140.children.append(HAnimJoint170)

HAnimJoint60.children.append(HAnimJoint140)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.DEF = "hanim_r_hip"
HAnimJoint267.name = "r_hip"
HAnimJoint267.rotation = [0.999999999999999,0,0,0.486193023827777]
HAnimJoint267.center = [-0.0961,0.9124,-0.0001]
HAnimSegment268 = x3d.HAnimSegment()
HAnimSegment268.DEF = "hanim_r_thigh"
HAnimSegment268.name = "r_thigh"
TouchSensor269 = x3d.TouchSensor()
TouchSensor269.description = "HAnimJoint r_hip, HAnimSegment r_thigh"

HAnimSegment268.children.append(TouchSensor269)
Transform270 = x3d.Transform()
Transform270.translation = [-0.0961,0.9124,-0.0001]
Shape271 = x3d.Shape()
Shape271.USE = "HAnimJointShape"

Transform270.children.append(Shape271)

HAnimSegment268.children.append(Transform270)
Shape272 = x3d.Shape()
LineSet273 = x3d.LineSet()
LineSet273.vertexCount = [2]
ColorRGBA274 = x3d.ColorRGBA()
ColorRGBA274.USE = "HAnimSegmentLineColorRGBA"

LineSet273.color = ColorRGBA274
Coordinate275 = x3d.Coordinate()
Coordinate275.point = [(-0.0961, 0.9124, -0.0001),(-0.104, 0.4867, 0.0308)]

LineSet273.coord = Coordinate275

Shape272.geometry = LineSet273

HAnimSegment268.children.append(Shape272)
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.vertexCount = [2]
ColorRGBA278 = x3d.ColorRGBA()
ColorRGBA278.USE = "HAnimSiteLineColorRGBA"

LineSet277.color = ColorRGBA278
Coordinate279 = x3d.Coordinate()
Coordinate279.point = [(-0.0961, 0.9124, -0.0001),(-0.0825, 0.4932, -0.0326)]

LineSet277.coord = Coordinate279

Shape276.geometry = LineSet277

HAnimSegment268.children.append(Shape276)
Shape280 = x3d.Shape()
LineSet281 = x3d.LineSet()
LineSet281.vertexCount = [2]
ColorRGBA282 = x3d.ColorRGBA()
ColorRGBA282.USE = "HAnimSiteLineColorRGBA"

LineSet281.color = ColorRGBA282
Coordinate283 = x3d.Coordinate()
Coordinate283.point = [(-0.0961, 0.9124, -0.0001),(-0.1421, 0.4992, 0.031)]

LineSet281.coord = Coordinate283

Shape280.geometry = LineSet281

HAnimSegment268.children.append(Shape280)
Shape284 = x3d.Shape()
LineSet285 = x3d.LineSet()
LineSet285.vertexCount = [2]
ColorRGBA286 = x3d.ColorRGBA()
ColorRGBA286.USE = "HAnimSiteLineColorRGBA"

LineSet285.color = ColorRGBA286
Coordinate287 = x3d.Coordinate()
Coordinate287.point = [(-0.0961, 0.9124, -0.0001),(-0.0221, 0.5014, 0.0289)]

LineSet285.coord = Coordinate287

Shape284.geometry = LineSet285

HAnimSegment268.children.append(Shape284)
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.DEF = "hanim_r_knee_crease_pt"
HAnimSite288.name = "r_knee_crease_pt"
HAnimSite288.translation = [-0.0825,0.4932,-0.0326]
TouchSensor289 = x3d.TouchSensor()
TouchSensor289.description = "HAnimSite r_knee_crease"

HAnimSite288.children.append(TouchSensor289)
Shape290 = x3d.Shape()
Shape290.USE = "HAnimSiteShape"

HAnimSite288.children.append(Shape290)

HAnimSegment268.children.append(HAnimSite288)
HAnimSite291 = x3d.HAnimSite()
HAnimSite291.DEF = "hanim_r_femoral_lateral_epicn_pt"
HAnimSite291.name = "r_femoral_lateral_epicn_pt"
HAnimSite291.translation = [-0.1421,0.4992,0.031]
TouchSensor292 = x3d.TouchSensor()
TouchSensor292.description = "HAnimSite r_femoral_lateral_epicn"

HAnimSite291.children.append(TouchSensor292)
Shape293 = x3d.Shape()
Shape293.USE = "HAnimSiteShape"

HAnimSite291.children.append(Shape293)

HAnimSegment268.children.append(HAnimSite291)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.DEF = "hanim_r_femoral_medial_epicn_pt"
HAnimSite294.name = "r_femoral_medial_epicn_pt"
HAnimSite294.translation = [-0.0221,0.5014,0.0289]
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.description = "HAnimSite r_femoral_medial_epicn"

HAnimSite294.children.append(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.USE = "HAnimSiteShape"

HAnimSite294.children.append(Shape296)

HAnimSegment268.children.append(HAnimSite294)

HAnimJoint267.children.append(HAnimSegment268)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.DEF = "hanim_r_knee"
HAnimJoint297.name = "r_knee"
HAnimJoint297.rotation = [1,0,0,1.05341821829351]
HAnimJoint297.center = [-0.104,0.4867,0.0308]
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.DEF = "hanim_r_calf"
HAnimSegment298.name = "r_calf"
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.description = "HAnimJoint r_knee, HAnimSegment r_calf"

HAnimSegment298.children.append(TouchSensor299)
Transform300 = x3d.Transform()
Transform300.translation = [-0.104,0.4867,0.0308]
Shape301 = x3d.Shape()
Shape301.USE = "HAnimJointShape"

Transform300.children.append(Shape301)

HAnimSegment298.children.append(Transform300)
Shape302 = x3d.Shape()
LineSet303 = x3d.LineSet()
LineSet303.vertexCount = [2]
ColorRGBA304 = x3d.ColorRGBA()
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA"

LineSet303.color = ColorRGBA304
Coordinate305 = x3d.Coordinate()
Coordinate305.point = [(-0.104, 0.4867, 0.0308),(-0.1101, 0.0656, -0.0736)]

LineSet303.coord = Coordinate305

Shape302.geometry = LineSet303

HAnimSegment298.children.append(Shape302)

HAnimJoint297.children.append(HAnimSegment298)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.DEF = "hanim_r_ankle"
HAnimJoint306.name = "r_ankle"
HAnimJoint306.rotation = [-0.999999999999999,0,0,0.486193023827777]
HAnimJoint306.center = [-0.1101,0.0656,-0.0736]
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.DEF = "hanim_r_hindfoot"
HAnimSegment307.name = "r_hindfoot"
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot"

HAnimSegment307.children.append(TouchSensor308)
Transform309 = x3d.Transform()
Transform309.translation = [-0.1101,0.0656,-0.0736]
Shape310 = x3d.Shape()
Shape310.USE = "HAnimJointShape"

Transform309.children.append(Shape310)

HAnimSegment307.children.append(Transform309)
Shape311 = x3d.Shape()
LineSet312 = x3d.LineSet()
LineSet312.vertexCount = [2]
ColorRGBA313 = x3d.ColorRGBA()
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA"

LineSet312.color = ColorRGBA313
Coordinate314 = x3d.Coordinate()
Coordinate314.point = [(-0.1101, 0.0656, -0.0736),(-0.1086, 0.0001, -0.0368)]

LineSet312.coord = Coordinate314

Shape311.geometry = LineSet312

HAnimSegment307.children.append(Shape311)
Shape315 = x3d.Shape()
LineSet316 = x3d.LineSet()
LineSet316.vertexCount = [2]
ColorRGBA317 = x3d.ColorRGBA()
ColorRGBA317.USE = "HAnimSiteLineColorRGBA"

LineSet316.color = ColorRGBA317
Coordinate318 = x3d.Coordinate()
Coordinate318.point = [(-0.1101, 0.0656, -0.0736),(-0.1006, 0.0658, -0.1075)]

LineSet316.coord = Coordinate318

Shape315.geometry = LineSet316

HAnimSegment307.children.append(Shape315)
Shape319 = x3d.Shape()
LineSet320 = x3d.LineSet()
LineSet320.vertexCount = [2]
ColorRGBA321 = x3d.ColorRGBA()
ColorRGBA321.USE = "HAnimSiteLineColorRGBA"

LineSet320.color = ColorRGBA321
Coordinate322 = x3d.Coordinate()
Coordinate322.point = [(-0.1101, 0.0656, -0.0736),(-0.0591, 0.076, -0.0928)]

LineSet320.coord = Coordinate322

Shape319.geometry = LineSet320

HAnimSegment307.children.append(Shape319)
Shape323 = x3d.Shape()
LineSet324 = x3d.LineSet()
LineSet324.vertexCount = [2]
ColorRGBA325 = x3d.ColorRGBA()
ColorRGBA325.USE = "HAnimSiteLineColorRGBA"

LineSet324.color = ColorRGBA325
Coordinate326 = x3d.Coordinate()
Coordinate326.point = [(-0.1101, 0.0656, -0.0736),(-0.0603, 0.061, -0.1002)]

LineSet324.coord = Coordinate326

Shape323.geometry = LineSet324

HAnimSegment307.children.append(Shape323)
Shape327 = x3d.Shape()
LineSet328 = x3d.LineSet()
LineSet328.vertexCount = [2]
ColorRGBA329 = x3d.ColorRGBA()
ColorRGBA329.USE = "HAnimSiteLineColorRGBA"

LineSet328.color = ColorRGBA329
Coordinate330 = x3d.Coordinate()
Coordinate330.point = [(-0.1101, 0.0656, -0.0736),(-0.0692, 0.0297, -0.1221)]

LineSet328.coord = Coordinate330

Shape327.geometry = LineSet328

HAnimSegment307.children.append(Shape327)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite331.name = "r_lateral_malleolus_pt"
HAnimSite331.translation = [-0.1006,0.0658,-0.1075]
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.description = "HAnimSite r_lateral_malleolus"

HAnimSite331.children.append(TouchSensor332)
Shape333 = x3d.Shape()
Shape333.USE = "HAnimSiteShape"

HAnimSite331.children.append(Shape333)

HAnimSegment307.children.append(HAnimSite331)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite334.name = "r_medial_malleolus_pt"
HAnimSite334.translation = [-0.0591,0.076,-0.0928]
TouchSensor335 = x3d.TouchSensor()
TouchSensor335.description = "HAnimSite r_medial_malleolus"

HAnimSite334.children.append(TouchSensor335)
Shape336 = x3d.Shape()
Shape336.USE = "HAnimSiteShape"

HAnimSite334.children.append(Shape336)

HAnimSegment307.children.append(HAnimSite334)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.DEF = "hanim_r_sphyrion_pt"
HAnimSite337.name = "r_sphyrion_pt"
HAnimSite337.translation = [-0.0603,0.061,-0.1002]
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.description = "HAnimSite r_sphyrion"

HAnimSite337.children.append(TouchSensor338)
Shape339 = x3d.Shape()
Shape339.USE = "HAnimSiteShape"

HAnimSite337.children.append(Shape339)

HAnimSegment307.children.append(HAnimSite337)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.DEF = "hanim_r_calcaneous_post_pt"
HAnimSite340.name = "r_calcaneous_post_pt"
HAnimSite340.translation = [-0.0692,0.0297,-0.1221]
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.description = "HAnimSite r_calcaneous_post"

HAnimSite340.children.append(TouchSensor341)
Shape342 = x3d.Shape()
Shape342.USE = "HAnimSiteShape"

HAnimSite340.children.append(Shape342)

HAnimSegment307.children.append(HAnimSite340)

HAnimJoint306.children.append(HAnimSegment307)
HAnimJoint343 = x3d.HAnimJoint()
HAnimJoint343.DEF = "hanim_r_subtalar"
HAnimJoint343.name = "r_subtalar"
HAnimJoint343.center = [-0.1086,0.0001,-0.0368]
HAnimSegment344 = x3d.HAnimSegment()
HAnimSegment344.DEF = "hanim_r_midproximal"
HAnimSegment344.name = "r_midproximal"
TouchSensor345 = x3d.TouchSensor()
TouchSensor345.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal"

HAnimSegment344.children.append(TouchSensor345)
Transform346 = x3d.Transform()
Transform346.translation = [-0.1086,0.0001,-0.0368]
Shape347 = x3d.Shape()
Shape347.USE = "HAnimJointShape"

Transform346.children.append(Shape347)

HAnimSegment344.children.append(Transform346)
Shape348 = x3d.Shape()
LineSet349 = x3d.LineSet()
LineSet349.vertexCount = [2]
ColorRGBA350 = x3d.ColorRGBA()
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA"

LineSet349.color = ColorRGBA350
Coordinate351 = x3d.Coordinate()
Coordinate351.point = [(-0.1086, 0.0001, -0.0368),(-0.1086, 0.0001, 0.0368)]

LineSet349.coord = Coordinate351

Shape348.geometry = LineSet349

HAnimSegment344.children.append(Shape348)

HAnimJoint343.children.append(HAnimSegment344)
HAnimJoint352 = x3d.HAnimJoint()
HAnimJoint352.DEF = "hanim_r_midtarsal"
HAnimJoint352.name = "r_midtarsal"
HAnimJoint352.center = [-0.1086,0.0001,0.0368]
HAnimSegment353 = x3d.HAnimSegment()
HAnimSegment353.DEF = "hanim_r_middistal"
HAnimSegment353.name = "r_middistal"
TouchSensor354 = x3d.TouchSensor()
TouchSensor354.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal"

HAnimSegment353.children.append(TouchSensor354)
Transform355 = x3d.Transform()
Transform355.translation = [-0.1086,0.0001,0.0368]
Shape356 = x3d.Shape()
Shape356.USE = "HAnimJointShape"

Transform355.children.append(Shape356)

HAnimSegment353.children.append(Transform355)
Shape357 = x3d.Shape()
LineSet358 = x3d.LineSet()
LineSet358.vertexCount = [2]
ColorRGBA359 = x3d.ColorRGBA()
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA"

LineSet358.color = ColorRGBA359
Coordinate360 = x3d.Coordinate()
Coordinate360.point = [(-0.1086, 0.0001, 0.0368),(-0.1086, 0, 0.0762)]

LineSet358.coord = Coordinate360

Shape357.geometry = LineSet358

HAnimSegment353.children.append(Shape357)
Shape361 = x3d.Shape()
LineSet362 = x3d.LineSet()
LineSet362.vertexCount = [2]
ColorRGBA363 = x3d.ColorRGBA()
ColorRGBA363.USE = "HAnimSiteLineColorRGBA"

LineSet362.color = ColorRGBA363
Coordinate364 = x3d.Coordinate()
Coordinate364.point = [(-0.1086, 0.0001, 0.0368),(-0.0521, 0.026, 0.0127)]

LineSet362.coord = Coordinate364

Shape361.geometry = LineSet362

HAnimSegment353.children.append(Shape361)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.DEF = "hanim_r_metatarsal_pha1_pt"
HAnimSite365.name = "r_metatarsal_pha1_pt"
HAnimSite365.translation = [-0.0521,0.026,0.0127]
TouchSensor366 = x3d.TouchSensor()
TouchSensor366.description = "HAnimSite r_metatarsal_pha1"

HAnimSite365.children.append(TouchSensor366)
Shape367 = x3d.Shape()
Shape367.USE = "HAnimSiteShape"

HAnimSite365.children.append(Shape367)

HAnimSegment353.children.append(HAnimSite365)

HAnimJoint352.children.append(HAnimSegment353)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.DEF = "hanim_r_metatarsal"
HAnimJoint368.name = "r_metatarsal"
HAnimJoint368.rotation = [-1,0,0,0.270107235459875]
HAnimJoint368.center = [-0.1086,0,0.0762]
HAnimSegment369 = x3d.HAnimSegment()
HAnimSegment369.DEF = "hanim_r_forefoot"
HAnimSegment369.name = "r_forefoot"
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot"

HAnimSegment369.children.append(TouchSensor370)
Transform371 = x3d.Transform()
Transform371.translation = [-0.1086,0,0.0762]
Shape372 = x3d.Shape()
Shape372.USE = "HAnimJointShape"

Transform371.children.append(Shape372)

HAnimSegment369.children.append(Transform371)
Shape373 = x3d.Shape()
LineSet374 = x3d.LineSet()
LineSet374.vertexCount = [2]
ColorRGBA375 = x3d.ColorRGBA()
ColorRGBA375.USE = "HAnimSiteLineColorRGBA"

LineSet374.color = ColorRGBA375
Coordinate376 = x3d.Coordinate()
Coordinate376.point = [(-0.1086, 0, 0.0762),(-0.1043, 0.0227, 0.145)]

LineSet374.coord = Coordinate376

Shape373.geometry = LineSet374

HAnimSegment369.children.append(Shape373)
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.vertexCount = [2]
ColorRGBA379 = x3d.ColorRGBA()
ColorRGBA379.USE = "HAnimSiteLineColorRGBA"

LineSet378.color = ColorRGBA379
Coordinate380 = x3d.Coordinate()
Coordinate380.point = [(-0.1086, 0, 0.0762),(-0.1523, 0.0166, 0.0895)]

LineSet378.coord = Coordinate380

Shape377.geometry = LineSet378

HAnimSegment369.children.append(Shape377)
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.vertexCount = [2]
ColorRGBA383 = x3d.ColorRGBA()
ColorRGBA383.USE = "HAnimSiteLineColorRGBA"

LineSet382.color = ColorRGBA383
Coordinate384 = x3d.Coordinate()
Coordinate384.point = [(-0.1086, 0, 0.0762),(-0.0883, 0.0134, 0.1383)]

LineSet382.coord = Coordinate384

Shape381.geometry = LineSet382

HAnimSegment369.children.append(Shape381)
HAnimSite385 = x3d.HAnimSite()
HAnimSite385.DEF = "hanim_r_forefoot_tip"
HAnimSite385.name = "r_forefoot_tip"
HAnimSite385.translation = [-0.1043,0.0227,0.145]
TouchSensor386 = x3d.TouchSensor()
TouchSensor386.description = "HAnimSite r_forefoot_tip"

HAnimSite385.children.append(TouchSensor386)
Shape387 = x3d.Shape()
Shape387.USE = "HAnimSiteShape"

HAnimSite385.children.append(Shape387)

HAnimSegment369.children.append(HAnimSite385)
HAnimSite388 = x3d.HAnimSite()
HAnimSite388.DEF = "hanim_r_metatarsal_pha5_pt"
HAnimSite388.name = "r_metatarsal_pha5_pt"
HAnimSite388.translation = [-0.1523,0.0166,0.0895]
TouchSensor389 = x3d.TouchSensor()
TouchSensor389.description = "HAnimSite r_metatarsal_pha5"

HAnimSite388.children.append(TouchSensor389)
Shape390 = x3d.Shape()
Shape390.USE = "HAnimSiteShape"

HAnimSite388.children.append(Shape390)

HAnimSegment369.children.append(HAnimSite388)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.DEF = "hanim_r_digit2_pt"
HAnimSite391.name = "r_digit2_pt"
HAnimSite391.translation = [-0.0883,0.0134,0.1383]
TouchSensor392 = x3d.TouchSensor()
TouchSensor392.description = "HAnimSite r_digit2"

HAnimSite391.children.append(TouchSensor392)
Shape393 = x3d.Shape()
Shape393.USE = "HAnimSiteShape"

HAnimSite391.children.append(Shape393)

HAnimSegment369.children.append(HAnimSite391)

HAnimJoint368.children.append(HAnimSegment369)

HAnimJoint352.children.append(HAnimJoint368)

HAnimJoint343.children.append(HAnimJoint352)

HAnimJoint306.children.append(HAnimJoint343)

HAnimJoint297.children.append(HAnimJoint306)

HAnimJoint267.children.append(HAnimJoint297)

HAnimJoint60.children.append(HAnimJoint267)

HAnimJoint44.children.append(HAnimJoint60)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.DEF = "hanim_vl5"
HAnimJoint394.name = "vl5"
HAnimJoint394.center = [0.0028,1.0568,-0.0776]
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.DEF = "hanim_l5"
HAnimSegment395.name = "l5"
TouchSensor396 = x3d.TouchSensor()
TouchSensor396.description = "HAnimJoint vl5, HAnimSegment l5"

HAnimSegment395.children.append(TouchSensor396)
Transform397 = x3d.Transform()
Transform397.translation = [0.0028,1.0568,-0.0776]
Shape398 = x3d.Shape()
Shape398.USE = "HAnimJointShape"

Transform397.children.append(Shape398)

HAnimSegment395.children.append(Transform397)
Shape399 = x3d.Shape()
LineSet400 = x3d.LineSet()
LineSet400.vertexCount = [2]
ColorRGBA401 = x3d.ColorRGBA()
ColorRGBA401.USE = "HAnimSegmentLineColorRGBA"

LineSet400.color = ColorRGBA401
Coordinate402 = x3d.Coordinate()
Coordinate402.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet400.coord = Coordinate402

Shape399.geometry = LineSet400

HAnimSegment395.children.append(Shape399)
Shape403 = x3d.Shape()
LineSet404 = x3d.LineSet()
LineSet404.vertexCount = [2]
ColorRGBA405 = x3d.ColorRGBA()
ColorRGBA405.USE = "HAnimSiteLineColorRGBA"

LineSet404.color = ColorRGBA405
Coordinate406 = x3d.Coordinate()
Coordinate406.point = [(0.0028, 1.0568, -0.0776),(0, 1.0915, -0.1091)]

LineSet404.coord = Coordinate406

Shape403.geometry = LineSet404

HAnimSegment395.children.append(Shape403)
Shape407 = x3d.Shape()
LineSet408 = x3d.LineSet()
LineSet408.vertexCount = [2]
ColorRGBA409 = x3d.ColorRGBA()
ColorRGBA409.USE = "HAnimSiteLineColorRGBA"

LineSet408.color = ColorRGBA409
Coordinate410 = x3d.Coordinate()
Coordinate410.point = [(0.0028, 1.0568, -0.0776),(0.0069, 1.0966, 0.1017)]

LineSet408.coord = Coordinate410

Shape407.geometry = LineSet408

HAnimSegment395.children.append(Shape407)
HAnimSite411 = x3d.HAnimSite()
HAnimSite411.DEF = "hanim_waist_preferred_post_pt"
HAnimSite411.name = "waist_preferred_post_pt"
HAnimSite411.translation = [0,1.0915,-0.1091]
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.description = "HAnimSite waist_preferred_post"

HAnimSite411.children.append(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.USE = "HAnimSiteShape"

HAnimSite411.children.append(Shape413)

HAnimSegment395.children.append(HAnimSite411)
HAnimSite414 = x3d.HAnimSite()
HAnimSite414.DEF = "hanim_navel_pt"
HAnimSite414.name = "navel_pt"
HAnimSite414.translation = [0.0069,1.0966,0.1017]
TouchSensor415 = x3d.TouchSensor()
TouchSensor415.description = "HAnimSite navel"

HAnimSite414.children.append(TouchSensor415)
Shape416 = x3d.Shape()
Shape416.USE = "HAnimSiteShape"

HAnimSite414.children.append(Shape416)

HAnimSegment395.children.append(HAnimSite414)

HAnimJoint394.children.append(HAnimSegment395)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.DEF = "hanim_vl4"
HAnimJoint417.name = "vl4"
HAnimJoint417.center = [0.0035,1.0925,-0.0787]
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.DEF = "hanim_l4"
HAnimSegment418.name = "l4"
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.description = "HAnimJoint vl4, HAnimSegment l4"

HAnimSegment418.children.append(TouchSensor419)
Transform420 = x3d.Transform()
Transform420.translation = [0.0035,1.0925,-0.0787]
Shape421 = x3d.Shape()
Shape421.USE = "HAnimJointShape"

Transform420.children.append(Shape421)

HAnimSegment418.children.append(Transform420)
Shape422 = x3d.Shape()
LineSet423 = x3d.LineSet()
LineSet423.vertexCount = [2]
ColorRGBA424 = x3d.ColorRGBA()
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA"

LineSet423.color = ColorRGBA424
Coordinate425 = x3d.Coordinate()
Coordinate425.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet423.coord = Coordinate425

Shape422.geometry = LineSet423

HAnimSegment418.children.append(Shape422)

HAnimJoint417.children.append(HAnimSegment418)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.DEF = "hanim_vl3"
HAnimJoint426.name = "vl3"
HAnimJoint426.center = [0.0041,1.1276,-0.0796]
HAnimSegment427 = x3d.HAnimSegment()
HAnimSegment427.DEF = "hanim_l3"
HAnimSegment427.name = "l3"
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.description = "HAnimJoint vl3, HAnimSegment l3"

HAnimSegment427.children.append(TouchSensor428)
Transform429 = x3d.Transform()
Transform429.translation = [0.0041,1.1276,-0.0796]
Shape430 = x3d.Shape()
Shape430.USE = "HAnimJointShape"

Transform429.children.append(Shape430)

HAnimSegment427.children.append(Transform429)
Shape431 = x3d.Shape()
LineSet432 = x3d.LineSet()
LineSet432.vertexCount = [2]
ColorRGBA433 = x3d.ColorRGBA()
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA"

LineSet432.color = ColorRGBA433
Coordinate434 = x3d.Coordinate()
Coordinate434.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet432.coord = Coordinate434

Shape431.geometry = LineSet432

HAnimSegment427.children.append(Shape431)

HAnimJoint426.children.append(HAnimSegment427)
HAnimJoint435 = x3d.HAnimJoint()
HAnimJoint435.DEF = "hanim_vl2"
HAnimJoint435.name = "vl2"
HAnimJoint435.center = [0.0045,1.1546,-0.08]
HAnimSegment436 = x3d.HAnimSegment()
HAnimSegment436.DEF = "hanim_l2"
HAnimSegment436.name = "l2"
TouchSensor437 = x3d.TouchSensor()
TouchSensor437.description = "HAnimJoint vl2, HAnimSegment l2"

HAnimSegment436.children.append(TouchSensor437)
Transform438 = x3d.Transform()
Transform438.translation = [0.0045,1.1546,-0.08]
Shape439 = x3d.Shape()
Shape439.USE = "HAnimJointShape"

Transform438.children.append(Shape439)

HAnimSegment436.children.append(Transform438)
Shape440 = x3d.Shape()
LineSet441 = x3d.LineSet()
LineSet441.vertexCount = [2]
ColorRGBA442 = x3d.ColorRGBA()
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA"

LineSet441.color = ColorRGBA442
Coordinate443 = x3d.Coordinate()
Coordinate443.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet441.coord = Coordinate443

Shape440.geometry = LineSet441

HAnimSegment436.children.append(Shape440)
Shape444 = x3d.Shape()
LineSet445 = x3d.LineSet()
LineSet445.vertexCount = [2]
ColorRGBA446 = x3d.ColorRGBA()
ColorRGBA446.USE = "HAnimSiteLineColorRGBA"

LineSet445.color = ColorRGBA446
Coordinate447 = x3d.Coordinate()
Coordinate447.point = [(0.0045, 1.1546, -0.08),(-0.0711, 1.1941, 0.1016)]

LineSet445.coord = Coordinate447

Shape444.geometry = LineSet445

HAnimSegment436.children.append(Shape444)
Shape448 = x3d.Shape()
LineSet449 = x3d.LineSet()
LineSet449.vertexCount = [2]
ColorRGBA450 = x3d.ColorRGBA()
ColorRGBA450.USE = "HAnimSiteLineColorRGBA"

LineSet449.color = ColorRGBA450
Coordinate451 = x3d.Coordinate()
Coordinate451.point = [(0.0045, 1.1546, -0.08),(0.0871, 1.1925, 0.0992)]

LineSet449.coord = Coordinate451

Shape448.geometry = LineSet449

HAnimSegment436.children.append(Shape448)
Shape452 = x3d.Shape()
LineSet453 = x3d.LineSet()
LineSet453.vertexCount = [2]
ColorRGBA454 = x3d.ColorRGBA()
ColorRGBA454.USE = "HAnimSiteLineColorRGBA"

LineSet453.color = ColorRGBA454
Coordinate455 = x3d.Coordinate()
Coordinate455.point = [(0.0045, 1.1546, -0.08),(0.0049, 1.1908, -0.1113)]

LineSet453.coord = Coordinate455

Shape452.geometry = LineSet453

HAnimSegment436.children.append(Shape452)
HAnimSite456 = x3d.HAnimSite()
HAnimSite456.DEF = "hanim_r_rib10_pt"
HAnimSite456.name = "r_rib10_pt"
HAnimSite456.translation = [-0.0711,1.1941,0.1016]
TouchSensor457 = x3d.TouchSensor()
TouchSensor457.description = "HAnimSite r_rib10"

HAnimSite456.children.append(TouchSensor457)
Shape458 = x3d.Shape()
Shape458.USE = "HAnimSiteShape"

HAnimSite456.children.append(Shape458)

HAnimSegment436.children.append(HAnimSite456)
HAnimSite459 = x3d.HAnimSite()
HAnimSite459.DEF = "hanim_l_rib10_pt"
HAnimSite459.name = "l_rib10_pt"
HAnimSite459.translation = [0.0871,1.1925,0.0992]
TouchSensor460 = x3d.TouchSensor()
TouchSensor460.description = "HAnimSite l_rib10"

HAnimSite459.children.append(TouchSensor460)
Shape461 = x3d.Shape()
Shape461.USE = "HAnimSiteShape"

HAnimSite459.children.append(Shape461)

HAnimSegment436.children.append(HAnimSite459)
HAnimSite462 = x3d.HAnimSite()
HAnimSite462.DEF = "hanim_rib10_midspine_pt"
HAnimSite462.name = "rib10_midspine_pt"
HAnimSite462.translation = [0.0049,1.1908,-0.1113]
TouchSensor463 = x3d.TouchSensor()
TouchSensor463.description = "HAnimSite rib10_midspine"

HAnimSite462.children.append(TouchSensor463)
Shape464 = x3d.Shape()
Shape464.USE = "HAnimSiteShape"

HAnimSite462.children.append(Shape464)

HAnimSegment436.children.append(HAnimSite462)

HAnimJoint435.children.append(HAnimSegment436)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.DEF = "hanim_vl1"
HAnimJoint465.name = "vl1"
HAnimJoint465.center = [0.0048,1.1912,-0.0805]
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.DEF = "hanim_l1"
HAnimSegment466.name = "l1"
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.description = "HAnimJoint vl1, HAnimSegment l1"

HAnimSegment466.children.append(TouchSensor467)
Transform468 = x3d.Transform()
Transform468.translation = [0.0048,1.1912,-0.0805]
Shape469 = x3d.Shape()
Shape469.USE = "HAnimJointShape"

Transform468.children.append(Shape469)

HAnimSegment466.children.append(Transform468)
Shape470 = x3d.Shape()
LineSet471 = x3d.LineSet()
LineSet471.vertexCount = [2]
ColorRGBA472 = x3d.ColorRGBA()
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA"

LineSet471.color = ColorRGBA472
Coordinate473 = x3d.Coordinate()
Coordinate473.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet471.coord = Coordinate473

Shape470.geometry = LineSet471

HAnimSegment466.children.append(Shape470)

HAnimJoint465.children.append(HAnimSegment466)
HAnimJoint474 = x3d.HAnimJoint()
HAnimJoint474.DEF = "hanim_vt12"
HAnimJoint474.name = "vt12"
HAnimJoint474.center = [0.0051,1.2278,-0.0808]
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.DEF = "hanim_t12"
HAnimSegment475.name = "t12"
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.description = "HAnimJoint vt12, HAnimSegment t12"

HAnimSegment475.children.append(TouchSensor476)
Transform477 = x3d.Transform()
Transform477.translation = [0.0051,1.2278,-0.0808]
Shape478 = x3d.Shape()
Shape478.USE = "HAnimJointShape"

Transform477.children.append(Shape478)

HAnimSegment475.children.append(Transform477)
Shape479 = x3d.Shape()
LineSet480 = x3d.LineSet()
LineSet480.vertexCount = [2]
ColorRGBA481 = x3d.ColorRGBA()
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA"

LineSet480.color = ColorRGBA481
Coordinate482 = x3d.Coordinate()
Coordinate482.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet480.coord = Coordinate482

Shape479.geometry = LineSet480

HAnimSegment475.children.append(Shape479)

HAnimJoint474.children.append(HAnimSegment475)
HAnimJoint483 = x3d.HAnimJoint()
HAnimJoint483.DEF = "hanim_vt11"
HAnimJoint483.name = "vt11"
HAnimJoint483.center = [0.0053,1.2679,-0.081]
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.DEF = "hanim_t11"
HAnimSegment484.name = "t11"
TouchSensor485 = x3d.TouchSensor()
TouchSensor485.description = "HAnimJoint vt11, HAnimSegment t11"

HAnimSegment484.children.append(TouchSensor485)
Transform486 = x3d.Transform()
Transform486.translation = [0.0053,1.2679,-0.081]
Shape487 = x3d.Shape()
Shape487.USE = "HAnimJointShape"

Transform486.children.append(Shape487)

HAnimSegment484.children.append(Transform486)
Shape488 = x3d.Shape()
LineSet489 = x3d.LineSet()
LineSet489.vertexCount = [2]
ColorRGBA490 = x3d.ColorRGBA()
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA"

LineSet489.color = ColorRGBA490
Coordinate491 = x3d.Coordinate()
Coordinate491.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet489.coord = Coordinate491

Shape488.geometry = LineSet489

HAnimSegment484.children.append(Shape488)

HAnimJoint483.children.append(HAnimSegment484)
HAnimJoint492 = x3d.HAnimJoint()
HAnimJoint492.DEF = "hanim_vt10"
HAnimJoint492.name = "vt10"
HAnimJoint492.center = [0.0056,1.2848,-0.0822]
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.DEF = "hanim_t10"
HAnimSegment493.name = "t10"
TouchSensor494 = x3d.TouchSensor()
TouchSensor494.description = "HAnimJoint vt10, HAnimSegment t10"

HAnimSegment493.children.append(TouchSensor494)
Transform495 = x3d.Transform()
Transform495.translation = [0.0056,1.2848,-0.0822]
Shape496 = x3d.Shape()
Shape496.USE = "HAnimJointShape"

Transform495.children.append(Shape496)

HAnimSegment493.children.append(Transform495)
Shape497 = x3d.Shape()
LineSet498 = x3d.LineSet()
LineSet498.vertexCount = [2]
ColorRGBA499 = x3d.ColorRGBA()
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA"

LineSet498.color = ColorRGBA499
Coordinate500 = x3d.Coordinate()
Coordinate500.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet498.coord = Coordinate500

Shape497.geometry = LineSet498

HAnimSegment493.children.append(Shape497)
Shape501 = x3d.Shape()
LineSet502 = x3d.LineSet()
LineSet502.vertexCount = [2]
ColorRGBA503 = x3d.ColorRGBA()
ColorRGBA503.USE = "HAnimSiteLineColorRGBA"

LineSet502.color = ColorRGBA503
Coordinate504 = x3d.Coordinate()
Coordinate504.point = [(0.0056, 1.2848, -0.0822),(0.0085, 1.2995, 0.1147)]

LineSet502.coord = Coordinate504

Shape501.geometry = LineSet502

HAnimSegment493.children.append(Shape501)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.DEF = "hanim_substernale_pt"
HAnimSite505.name = "substernale_pt"
HAnimSite505.translation = [0.0085,1.2995,0.1147]
TouchSensor506 = x3d.TouchSensor()
TouchSensor506.description = "HAnimSite substernale"

HAnimSite505.children.append(TouchSensor506)
Shape507 = x3d.Shape()
Shape507.USE = "HAnimSiteShape"

HAnimSite505.children.append(Shape507)

HAnimSegment493.children.append(HAnimSite505)

HAnimJoint492.children.append(HAnimSegment493)
HAnimJoint508 = x3d.HAnimJoint()
HAnimJoint508.DEF = "hanim_vt9"
HAnimJoint508.name = "vt9"
HAnimJoint508.center = [0.0057,1.3126,-0.0838]
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.DEF = "hanim_t9"
HAnimSegment509.name = "t9"
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.description = "HAnimJoint vt9, HAnimSegment t9"

HAnimSegment509.children.append(TouchSensor510)
Transform511 = x3d.Transform()
Transform511.translation = [0.0057,1.3126,-0.0838]
Shape512 = x3d.Shape()
Shape512.USE = "HAnimJointShape"

Transform511.children.append(Shape512)

HAnimSegment509.children.append(Transform511)
Shape513 = x3d.Shape()
LineSet514 = x3d.LineSet()
LineSet514.vertexCount = [2]
ColorRGBA515 = x3d.ColorRGBA()
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA"

LineSet514.color = ColorRGBA515
Coordinate516 = x3d.Coordinate()
Coordinate516.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet514.coord = Coordinate516

Shape513.geometry = LineSet514

HAnimSegment509.children.append(Shape513)
Shape517 = x3d.Shape()
LineSet518 = x3d.LineSet()
LineSet518.vertexCount = [2]
ColorRGBA519 = x3d.ColorRGBA()
ColorRGBA519.USE = "HAnimSiteLineColorRGBA"

LineSet518.color = ColorRGBA519
Coordinate520 = x3d.Coordinate()
Coordinate520.point = [(0.0057, 1.3126, -0.0838),(-0.0736, 1.3385, 0.1217)]

LineSet518.coord = Coordinate520

Shape517.geometry = LineSet518

HAnimSegment509.children.append(Shape517)
Shape521 = x3d.Shape()
LineSet522 = x3d.LineSet()
LineSet522.vertexCount = [2]
ColorRGBA523 = x3d.ColorRGBA()
ColorRGBA523.USE = "HAnimSiteLineColorRGBA"

LineSet522.color = ColorRGBA523
Coordinate524 = x3d.Coordinate()
Coordinate524.point = [(0.0057, 1.3126, -0.0838),(0.0918, 1.3382, 0.1192)]

LineSet522.coord = Coordinate524

Shape521.geometry = LineSet522

HAnimSegment509.children.append(Shape521)
HAnimSite525 = x3d.HAnimSite()
HAnimSite525.DEF = "hanim_r_thelion_pt"
HAnimSite525.name = "r_thelion_pt"
HAnimSite525.translation = [-0.0736,1.3385,0.1217]
TouchSensor526 = x3d.TouchSensor()
TouchSensor526.description = "HAnimSite r_thelion"

HAnimSite525.children.append(TouchSensor526)
Shape527 = x3d.Shape()
Shape527.USE = "HAnimSiteShape"

HAnimSite525.children.append(Shape527)

HAnimSegment509.children.append(HAnimSite525)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.DEF = "hanim_l_thelion_pt"
HAnimSite528.name = "l_thelion_pt"
HAnimSite528.translation = [0.0918,1.3382,0.1192]
TouchSensor529 = x3d.TouchSensor()
TouchSensor529.description = "HAnimSite l_thelion"

HAnimSite528.children.append(TouchSensor529)
Shape530 = x3d.Shape()
Shape530.USE = "HAnimSiteShape"

HAnimSite528.children.append(Shape530)

HAnimSegment509.children.append(HAnimSite528)

HAnimJoint508.children.append(HAnimSegment509)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.DEF = "hanim_vt8"
HAnimJoint531.name = "vt8"
HAnimJoint531.center = [0.0057,1.3382,-0.0845]
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.DEF = "hanim_t8"
HAnimSegment532.name = "t8"
TouchSensor533 = x3d.TouchSensor()
TouchSensor533.description = "HAnimJoint vt8, HAnimSegment t8"

HAnimSegment532.children.append(TouchSensor533)
Transform534 = x3d.Transform()
Transform534.translation = [0.0057,1.3382,-0.0845]
Shape535 = x3d.Shape()
Shape535.USE = "HAnimJointShape"

Transform534.children.append(Shape535)

HAnimSegment532.children.append(Transform534)
Shape536 = x3d.Shape()
LineSet537 = x3d.LineSet()
LineSet537.vertexCount = [2]
ColorRGBA538 = x3d.ColorRGBA()
ColorRGBA538.USE = "HAnimSegmentLineColorRGBA"

LineSet537.color = ColorRGBA538
Coordinate539 = x3d.Coordinate()
Coordinate539.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet537.coord = Coordinate539

Shape536.geometry = LineSet537

HAnimSegment532.children.append(Shape536)

HAnimJoint531.children.append(HAnimSegment532)
HAnimJoint540 = x3d.HAnimJoint()
HAnimJoint540.DEF = "hanim_vt7"
HAnimJoint540.name = "vt7"
HAnimJoint540.center = [0.0058,1.3625,-0.0833]
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.DEF = "hanim_t7"
HAnimSegment541.name = "t7"
TouchSensor542 = x3d.TouchSensor()
TouchSensor542.description = "HAnimJoint vt7, HAnimSegment t7"

HAnimSegment541.children.append(TouchSensor542)
Transform543 = x3d.Transform()
Transform543.translation = [0.0058,1.3625,-0.0833]
Shape544 = x3d.Shape()
Shape544.USE = "HAnimJointShape"

Transform543.children.append(Shape544)

HAnimSegment541.children.append(Transform543)
Shape545 = x3d.Shape()
LineSet546 = x3d.LineSet()
LineSet546.vertexCount = [2]
ColorRGBA547 = x3d.ColorRGBA()
ColorRGBA547.USE = "HAnimSegmentLineColorRGBA"

LineSet546.color = ColorRGBA547
Coordinate548 = x3d.Coordinate()
Coordinate548.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet546.coord = Coordinate548

Shape545.geometry = LineSet546

HAnimSegment541.children.append(Shape545)

HAnimJoint540.children.append(HAnimSegment541)
HAnimJoint549 = x3d.HAnimJoint()
HAnimJoint549.DEF = "hanim_vt6"
HAnimJoint549.name = "vt6"
HAnimJoint549.center = [0.0059,1.3866,-0.08]
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.DEF = "hanim_t6"
HAnimSegment550.name = "t6"
TouchSensor551 = x3d.TouchSensor()
TouchSensor551.description = "HAnimJoint vt6, HAnimSegment t6"

HAnimSegment550.children.append(TouchSensor551)
Transform552 = x3d.Transform()
Transform552.translation = [0.0059,1.3866,-0.08]
Shape553 = x3d.Shape()
Shape553.USE = "HAnimJointShape"

Transform552.children.append(Shape553)

HAnimSegment550.children.append(Transform552)
Shape554 = x3d.Shape()
LineSet555 = x3d.LineSet()
LineSet555.vertexCount = [2]
ColorRGBA556 = x3d.ColorRGBA()
ColorRGBA556.USE = "HAnimSegmentLineColorRGBA"

LineSet555.color = ColorRGBA556
Coordinate557 = x3d.Coordinate()
Coordinate557.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet555.coord = Coordinate557

Shape554.geometry = LineSet555

HAnimSegment550.children.append(Shape554)

HAnimJoint549.children.append(HAnimSegment550)
HAnimJoint558 = x3d.HAnimJoint()
HAnimJoint558.DEF = "hanim_vt5"
HAnimJoint558.name = "vt5"
HAnimJoint558.center = [0.006,1.4102,-0.0745]
HAnimSegment559 = x3d.HAnimSegment()
HAnimSegment559.DEF = "hanim_t5"
HAnimSegment559.name = "t5"
TouchSensor560 = x3d.TouchSensor()
TouchSensor560.description = "HAnimJoint vt5, HAnimSegment t5"

HAnimSegment559.children.append(TouchSensor560)
Transform561 = x3d.Transform()
Transform561.translation = [0.006,1.4102,-0.0745]
Shape562 = x3d.Shape()
Shape562.USE = "HAnimJointShape"

Transform561.children.append(Shape562)

HAnimSegment559.children.append(Transform561)
Shape563 = x3d.Shape()
LineSet564 = x3d.LineSet()
LineSet564.vertexCount = [2]
ColorRGBA565 = x3d.ColorRGBA()
ColorRGBA565.USE = "HAnimSegmentLineColorRGBA"

LineSet564.color = ColorRGBA565
Coordinate566 = x3d.Coordinate()
Coordinate566.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet564.coord = Coordinate566

Shape563.geometry = LineSet564

HAnimSegment559.children.append(Shape563)

HAnimJoint558.children.append(HAnimSegment559)
HAnimJoint567 = x3d.HAnimJoint()
HAnimJoint567.DEF = "hanim_vt4"
HAnimJoint567.name = "vt4"
HAnimJoint567.center = [0.0061,1.432,-0.0675]
HAnimSegment568 = x3d.HAnimSegment()
HAnimSegment568.DEF = "hanim_t4"
HAnimSegment568.name = "t4"
TouchSensor569 = x3d.TouchSensor()
TouchSensor569.description = "HAnimJoint vt4, HAnimSegment t4"

HAnimSegment568.children.append(TouchSensor569)
Transform570 = x3d.Transform()
Transform570.translation = [0.0061,1.432,-0.0675]
Shape571 = x3d.Shape()
Shape571.USE = "HAnimJointShape"

Transform570.children.append(Shape571)

HAnimSegment568.children.append(Transform570)
Shape572 = x3d.Shape()
LineSet573 = x3d.LineSet()
LineSet573.vertexCount = [2]
ColorRGBA574 = x3d.ColorRGBA()
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA"

LineSet573.color = ColorRGBA574
Coordinate575 = x3d.Coordinate()
Coordinate575.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet573.coord = Coordinate575

Shape572.geometry = LineSet573

HAnimSegment568.children.append(Shape572)

HAnimJoint567.children.append(HAnimSegment568)
HAnimJoint576 = x3d.HAnimJoint()
HAnimJoint576.DEF = "hanim_vt3"
HAnimJoint576.name = "vt3"
HAnimJoint576.center = [0.0062,1.4583,-0.057]
HAnimSegment577 = x3d.HAnimSegment()
HAnimSegment577.DEF = "hanim_t3"
HAnimSegment577.name = "t3"
TouchSensor578 = x3d.TouchSensor()
TouchSensor578.description = "HAnimJoint vt3, HAnimSegment t3"

HAnimSegment577.children.append(TouchSensor578)
Transform579 = x3d.Transform()
Transform579.translation = [0.0062,1.4583,-0.057]
Shape580 = x3d.Shape()
Shape580.USE = "HAnimJointShape"

Transform579.children.append(Shape580)

HAnimSegment577.children.append(Transform579)
Shape581 = x3d.Shape()
LineSet582 = x3d.LineSet()
LineSet582.vertexCount = [2]
ColorRGBA583 = x3d.ColorRGBA()
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA"

LineSet582.color = ColorRGBA583
Coordinate584 = x3d.Coordinate()
Coordinate584.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet582.coord = Coordinate584

Shape581.geometry = LineSet582

HAnimSegment577.children.append(Shape581)

HAnimJoint576.children.append(HAnimSegment577)
HAnimJoint585 = x3d.HAnimJoint()
HAnimJoint585.DEF = "hanim_vt2"
HAnimJoint585.name = "vt2"
HAnimJoint585.center = [0.0063,1.4761,-0.0484]
HAnimSegment586 = x3d.HAnimSegment()
HAnimSegment586.DEF = "hanim_t2"
HAnimSegment586.name = "t2"
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.description = "HAnimJoint vt2, HAnimSegment t2"

HAnimSegment586.children.append(TouchSensor587)
Transform588 = x3d.Transform()
Transform588.translation = [0.0063,1.4761,-0.0484]
Shape589 = x3d.Shape()
Shape589.USE = "HAnimJointShape"

Transform588.children.append(Shape589)

HAnimSegment586.children.append(Transform588)
Shape590 = x3d.Shape()
LineSet591 = x3d.LineSet()
LineSet591.vertexCount = [2]
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA"

LineSet591.color = ColorRGBA592
Coordinate593 = x3d.Coordinate()
Coordinate593.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet591.coord = Coordinate593

Shape590.geometry = LineSet591

HAnimSegment586.children.append(Shape590)

HAnimJoint585.children.append(HAnimSegment586)
HAnimJoint594 = x3d.HAnimJoint()
HAnimJoint594.DEF = "hanim_vt1"
HAnimJoint594.name = "vt1"
HAnimJoint594.center = [0.0065,1.4951,-0.0387]
HAnimSegment595 = x3d.HAnimSegment()
HAnimSegment595.DEF = "hanim_t1"
HAnimSegment595.name = "t1"
TouchSensor596 = x3d.TouchSensor()
TouchSensor596.description = "HAnimJoint vt1, HAnimSegment t1"

HAnimSegment595.children.append(TouchSensor596)
Transform597 = x3d.Transform()
Transform597.translation = [0.0065,1.4951,-0.0387]
Shape598 = x3d.Shape()
Shape598.USE = "HAnimJointShape"

Transform597.children.append(Shape598)

HAnimSegment595.children.append(Transform597)
Shape599 = x3d.Shape()
LineSet600 = x3d.LineSet()
LineSet600.vertexCount = [2]
ColorRGBA601 = x3d.ColorRGBA()
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA"

LineSet600.color = ColorRGBA601
Coordinate602 = x3d.Coordinate()
Coordinate602.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet600.coord = Coordinate602

Shape599.geometry = LineSet600

HAnimSegment595.children.append(Shape599)
Shape603 = x3d.Shape()
LineSet604 = x3d.LineSet()
LineSet604.vertexCount = [2]
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA"

LineSet604.color = ColorRGBA605
Coordinate606 = x3d.Coordinate()
Coordinate606.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet604.coord = Coordinate606

Shape603.geometry = LineSet604

HAnimSegment595.children.append(Shape603)
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.vertexCount = [2]
ColorRGBA609 = x3d.ColorRGBA()
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA"

LineSet608.color = ColorRGBA609
Coordinate610 = x3d.Coordinate()
Coordinate610.point = [(0.0065, 1.4951, -0.0387),(-0.082, 1.4488, -0.0353)]

LineSet608.coord = Coordinate610

Shape607.geometry = LineSet608

HAnimSegment595.children.append(Shape607)
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.vertexCount = [2]
ColorRGBA613 = x3d.ColorRGBA()
ColorRGBA613.USE = "HAnimSiteLineColorRGBA"

LineSet612.color = ColorRGBA613
Coordinate614 = x3d.Coordinate()
Coordinate614.point = [(0.0065, 1.4951, -0.0387),(0.0084, 1.4714, 0.0551)]

LineSet612.coord = Coordinate614

Shape611.geometry = LineSet612

HAnimSegment595.children.append(Shape611)
Shape615 = x3d.Shape()
LineSet616 = x3d.LineSet()
LineSet616.vertexCount = [2]
ColorRGBA617 = x3d.ColorRGBA()
ColorRGBA617.USE = "HAnimSiteLineColorRGBA"

LineSet616.color = ColorRGBA617
Coordinate618 = x3d.Coordinate()
Coordinate618.point = [(0.0065, 1.4951, -0.0387),(0.0064, 1.52, -0.0815)]

LineSet616.coord = Coordinate618

Shape615.geometry = LineSet616

HAnimSegment595.children.append(Shape615)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.DEF = "hanim_suprasternale_pt"
HAnimSite619.name = "suprasternale_pt"
HAnimSite619.translation = [0.0084,1.4714,0.0551]
TouchSensor620 = x3d.TouchSensor()
TouchSensor620.description = "HAnimSite suprasternale"

HAnimSite619.children.append(TouchSensor620)
Shape621 = x3d.Shape()
Shape621.USE = "HAnimSiteShape"

HAnimSite619.children.append(Shape621)

HAnimSegment595.children.append(HAnimSite619)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.DEF = "hanim_cervicale_pt"
HAnimSite622.name = "cervicale_pt"
HAnimSite622.translation = [0.0064,1.52,-0.0815]
TouchSensor623 = x3d.TouchSensor()
TouchSensor623.description = "HAnimSite cervicale"

HAnimSite622.children.append(TouchSensor623)
Shape624 = x3d.Shape()
Shape624.USE = "HAnimSiteShape"

HAnimSite622.children.append(Shape624)

HAnimSegment595.children.append(HAnimSite622)

HAnimJoint594.children.append(HAnimSegment595)
HAnimJoint625 = x3d.HAnimJoint()
HAnimJoint625.DEF = "hanim_vc7"
HAnimJoint625.name = "vc7"
HAnimJoint625.rotation = [-0.999999999999996,0,0,0.222164034843446]
HAnimJoint625.center = [0.0066,1.5132,-0.0301]
HAnimSegment626 = x3d.HAnimSegment()
HAnimSegment626.DEF = "hanim_c7"
HAnimSegment626.name = "c7"
TouchSensor627 = x3d.TouchSensor()
TouchSensor627.description = "HAnimJoint vc7, HAnimSegment c7"

HAnimSegment626.children.append(TouchSensor627)
Transform628 = x3d.Transform()
Transform628.translation = [0.0066,1.5132,-0.0301]
Shape629 = x3d.Shape()
Shape629.USE = "HAnimJointShape"

Transform628.children.append(Shape629)

HAnimSegment626.children.append(Transform628)
Shape630 = x3d.Shape()
LineSet631 = x3d.LineSet()
LineSet631.vertexCount = [2]
ColorRGBA632 = x3d.ColorRGBA()
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA"

LineSet631.color = ColorRGBA632
Coordinate633 = x3d.Coordinate()
Coordinate633.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet631.coord = Coordinate633

Shape630.geometry = LineSet631

HAnimSegment626.children.append(Shape630)
Shape634 = x3d.Shape()
LineSet635 = x3d.LineSet()
LineSet635.vertexCount = [2]
ColorRGBA636 = x3d.ColorRGBA()
ColorRGBA636.USE = "HAnimSiteLineColorRGBA"

LineSet635.color = ColorRGBA636
Coordinate637 = x3d.Coordinate()
Coordinate637.point = [(0.0066, 1.5132, -0.0301),(-0.0419, 1.5149, -0.022)]

LineSet635.coord = Coordinate637

Shape634.geometry = LineSet635

HAnimSegment626.children.append(Shape634)
Shape638 = x3d.Shape()
LineSet639 = x3d.LineSet()
LineSet639.vertexCount = [2]
ColorRGBA640 = x3d.ColorRGBA()
ColorRGBA640.USE = "HAnimSiteLineColorRGBA"

LineSet639.color = ColorRGBA640
Coordinate641 = x3d.Coordinate()
Coordinate641.point = [(0.0066, 1.5132, -0.0301),(0.0646, 1.5141, -0.038)]

LineSet639.coord = Coordinate641

Shape638.geometry = LineSet639

HAnimSegment626.children.append(Shape638)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.DEF = "hanim_r_neck_base_pt"
HAnimSite642.name = "r_neck_base_pt"
HAnimSite642.translation = [-0.0419,1.5149,-0.022]
TouchSensor643 = x3d.TouchSensor()
TouchSensor643.description = "HAnimSite r_neck_base"

HAnimSite642.children.append(TouchSensor643)
Shape644 = x3d.Shape()
Shape644.USE = "HAnimSiteShape"

HAnimSite642.children.append(Shape644)

HAnimSegment626.children.append(HAnimSite642)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.DEF = "hanim_l_neck_base_pt"
HAnimSite645.name = "l_neck_base_pt"
HAnimSite645.translation = [0.0646,1.5141,-0.038]
TouchSensor646 = x3d.TouchSensor()
TouchSensor646.description = "HAnimSite l_neck_base"

HAnimSite645.children.append(TouchSensor646)
Shape647 = x3d.Shape()
Shape647.USE = "HAnimSiteShape"

HAnimSite645.children.append(Shape647)

HAnimSegment626.children.append(HAnimSite645)

HAnimJoint625.children.append(HAnimSegment626)
HAnimJoint648 = x3d.HAnimJoint()
HAnimJoint648.DEF = "hanim_vc6"
HAnimJoint648.name = "vc6"
HAnimJoint648.center = [0.0066,1.5357,-0.0143]
HAnimSegment649 = x3d.HAnimSegment()
HAnimSegment649.DEF = "hanim_c6"
HAnimSegment649.name = "c6"
TouchSensor650 = x3d.TouchSensor()
TouchSensor650.description = "HAnimJoint vc6, HAnimSegment c6"

HAnimSegment649.children.append(TouchSensor650)
Transform651 = x3d.Transform()
Transform651.translation = [0.0066,1.5357,-0.0143]
Shape652 = x3d.Shape()
Shape652.USE = "HAnimJointShape"

Transform651.children.append(Shape652)

HAnimSegment649.children.append(Transform651)
Shape653 = x3d.Shape()
LineSet654 = x3d.LineSet()
LineSet654.vertexCount = [2]
ColorRGBA655 = x3d.ColorRGBA()
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA"

LineSet654.color = ColorRGBA655
Coordinate656 = x3d.Coordinate()
Coordinate656.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet654.coord = Coordinate656

Shape653.geometry = LineSet654

HAnimSegment649.children.append(Shape653)

HAnimJoint648.children.append(HAnimSegment649)
HAnimJoint657 = x3d.HAnimJoint()
HAnimJoint657.DEF = "hanim_vc5"
HAnimJoint657.name = "vc5"
HAnimJoint657.center = [0.0066,1.552,-0.0082]
HAnimSegment658 = x3d.HAnimSegment()
HAnimSegment658.DEF = "hanim_c5"
HAnimSegment658.name = "c5"
TouchSensor659 = x3d.TouchSensor()
TouchSensor659.description = "HAnimJoint vc5, HAnimSegment c5"

HAnimSegment658.children.append(TouchSensor659)
Transform660 = x3d.Transform()
Transform660.translation = [0.0066,1.552,-0.0082]
Shape661 = x3d.Shape()
Shape661.USE = "HAnimJointShape"

Transform660.children.append(Shape661)

HAnimSegment658.children.append(Transform660)
Shape662 = x3d.Shape()
LineSet663 = x3d.LineSet()
LineSet663.vertexCount = [2]
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA"

LineSet663.color = ColorRGBA664
Coordinate665 = x3d.Coordinate()
Coordinate665.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet663.coord = Coordinate665

Shape662.geometry = LineSet663

HAnimSegment658.children.append(Shape662)

HAnimJoint657.children.append(HAnimSegment658)
HAnimJoint666 = x3d.HAnimJoint()
HAnimJoint666.DEF = "hanim_vc4"
HAnimJoint666.name = "vc4"
HAnimJoint666.rotation = [1,0,0,0.302520108222961]
HAnimJoint666.center = [0.0066,1.5662,-0.0084]
HAnimSegment667 = x3d.HAnimSegment()
HAnimSegment667.DEF = "hanim_c4"
HAnimSegment667.name = "c4"
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.description = "HAnimJoint vc4, HAnimSegment c4"

HAnimSegment667.children.append(TouchSensor668)
Transform669 = x3d.Transform()
Transform669.translation = [0.0066,1.5662,-0.0084]
Shape670 = x3d.Shape()
Shape670.USE = "HAnimJointShape"

Transform669.children.append(Shape670)

HAnimSegment667.children.append(Transform669)
Shape671 = x3d.Shape()
LineSet672 = x3d.LineSet()
LineSet672.vertexCount = [2]
ColorRGBA673 = x3d.ColorRGBA()
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA"

LineSet672.color = ColorRGBA673
Coordinate674 = x3d.Coordinate()
Coordinate674.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet672.coord = Coordinate674

Shape671.geometry = LineSet672

HAnimSegment667.children.append(Shape671)

HAnimJoint666.children.append(HAnimSegment667)
HAnimJoint675 = x3d.HAnimJoint()
HAnimJoint675.DEF = "hanim_vc3"
HAnimJoint675.name = "vc3"
HAnimJoint675.center = [0.0066,1.58,-0.0103]
HAnimSegment676 = x3d.HAnimSegment()
HAnimSegment676.DEF = "hanim_c3"
HAnimSegment676.name = "c3"
TouchSensor677 = x3d.TouchSensor()
TouchSensor677.description = "HAnimJoint vc3, HAnimSegment c3"

HAnimSegment676.children.append(TouchSensor677)
Transform678 = x3d.Transform()
Transform678.translation = [0.0066,1.58,-0.0103]
Shape679 = x3d.Shape()
Shape679.USE = "HAnimJointShape"

Transform678.children.append(Shape679)

HAnimSegment676.children.append(Transform678)
Shape680 = x3d.Shape()
LineSet681 = x3d.LineSet()
LineSet681.vertexCount = [2]
ColorRGBA682 = x3d.ColorRGBA()
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA"

LineSet681.color = ColorRGBA682
Coordinate683 = x3d.Coordinate()
Coordinate683.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet681.coord = Coordinate683

Shape680.geometry = LineSet681

HAnimSegment676.children.append(Shape680)

HAnimJoint675.children.append(HAnimSegment676)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.DEF = "hanim_vc2"
HAnimJoint684.name = "vc2"
HAnimJoint684.center = [0.0066,1.5928,-0.0103]
HAnimSegment685 = x3d.HAnimSegment()
HAnimSegment685.DEF = "hanim_c2"
HAnimSegment685.name = "c2"
TouchSensor686 = x3d.TouchSensor()
TouchSensor686.description = "HAnimJoint vc2, HAnimSegment c2"

HAnimSegment685.children.append(TouchSensor686)
Transform687 = x3d.Transform()
Transform687.translation = [0.0066,1.5928,-0.0103]
Shape688 = x3d.Shape()
Shape688.USE = "HAnimJointShape"

Transform687.children.append(Shape688)

HAnimSegment685.children.append(Transform687)
Shape689 = x3d.Shape()
LineSet690 = x3d.LineSet()
LineSet690.vertexCount = [2]
ColorRGBA691 = x3d.ColorRGBA()
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA"

LineSet690.color = ColorRGBA691
Coordinate692 = x3d.Coordinate()
Coordinate692.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet690.coord = Coordinate692

Shape689.geometry = LineSet690

HAnimSegment685.children.append(Shape689)

HAnimJoint684.children.append(HAnimSegment685)
HAnimJoint693 = x3d.HAnimJoint()
HAnimJoint693.DEF = "hanim_vc1"
HAnimJoint693.name = "vc1"
HAnimJoint693.center = [0.0066,1.6144,-0.0034]
HAnimSegment694 = x3d.HAnimSegment()
HAnimSegment694.DEF = "hanim_c1"
HAnimSegment694.name = "c1"
TouchSensor695 = x3d.TouchSensor()
TouchSensor695.description = "HAnimJoint vc1, HAnimSegment c1"

HAnimSegment694.children.append(TouchSensor695)
Transform696 = x3d.Transform()
Transform696.translation = [0.0066,1.6144,-0.0034]
Shape697 = x3d.Shape()
Shape697.USE = "HAnimJointShape"

Transform696.children.append(Shape697)

HAnimSegment694.children.append(Transform696)
Shape698 = x3d.Shape()
LineSet699 = x3d.LineSet()
LineSet699.vertexCount = [2]
ColorRGBA700 = x3d.ColorRGBA()
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA"

LineSet699.color = ColorRGBA700
Coordinate701 = x3d.Coordinate()
Coordinate701.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet699.coord = Coordinate701

Shape698.geometry = LineSet699

HAnimSegment694.children.append(Shape698)

HAnimJoint693.children.append(HAnimSegment694)
HAnimJoint702 = x3d.HAnimJoint()
HAnimJoint702.DEF = "hanim_skullbase"
HAnimJoint702.name = "skullbase"
HAnimJoint702.rotation = [-1.00000000000001,0,0,0.231096035769597]
HAnimJoint702.center = [0.0044,1.6209,0.0236]
HAnimSegment703 = x3d.HAnimSegment()
HAnimSegment703.DEF = "hanim_skull"
HAnimSegment703.name = "skull"
TouchSensor704 = x3d.TouchSensor()
TouchSensor704.description = "HAnimJoint skullbase, HAnimSegment skull"

HAnimSegment703.children.append(TouchSensor704)
Transform705 = x3d.Transform()
Transform705.translation = [0.0044,1.6209,0.0236]
Shape706 = x3d.Shape()
Shape706.USE = "HAnimJointShape"

Transform705.children.append(Shape706)

HAnimSegment703.children.append(Transform705)
Shape707 = x3d.Shape()
LineSet708 = x3d.LineSet()
LineSet708.vertexCount = [2]
ColorRGBA709 = x3d.ColorRGBA()
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA"

LineSet708.color = ColorRGBA709
Coordinate710 = x3d.Coordinate()
Coordinate710.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.6332, 0.0502)]

LineSet708.coord = Coordinate710

Shape707.geometry = LineSet708

HAnimSegment703.children.append(Shape707)
Shape711 = x3d.Shape()
LineSet712 = x3d.LineSet()
LineSet712.vertexCount = [2]
ColorRGBA713 = x3d.ColorRGBA()
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA"

LineSet712.color = ColorRGBA713
Coordinate714 = x3d.Coordinate()
Coordinate714.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.6332, 0.0502)]

LineSet712.coord = Coordinate714

Shape711.geometry = LineSet712

HAnimSegment703.children.append(Shape711)
Shape715 = x3d.Shape()
LineSet716 = x3d.LineSet()
LineSet716.vertexCount = [2]
ColorRGBA717 = x3d.ColorRGBA()
ColorRGBA717.USE = "HAnimSegmentLineColorRGBA"

LineSet716.color = ColorRGBA717
Coordinate718 = x3d.Coordinate()
Coordinate718.point = [(0.0044, 1.6209, 0.0236),(0.0336, 1.635, 0.0506)]

LineSet716.coord = Coordinate718

Shape715.geometry = LineSet716

HAnimSegment703.children.append(Shape715)
Shape719 = x3d.Shape()
LineSet720 = x3d.LineSet()
LineSet720.vertexCount = [2]
ColorRGBA721 = x3d.ColorRGBA()
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA"

LineSet720.color = ColorRGBA721
Coordinate722 = x3d.Coordinate()
Coordinate722.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.6332, 0.0502)]

LineSet720.coord = Coordinate722

Shape719.geometry = LineSet720

HAnimSegment703.children.append(Shape719)
Shape723 = x3d.Shape()
LineSet724 = x3d.LineSet()
LineSet724.vertexCount = [2]
ColorRGBA725 = x3d.ColorRGBA()
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA"

LineSet724.color = ColorRGBA725
Coordinate726 = x3d.Coordinate()
Coordinate726.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.6332, 0.0502)]

LineSet724.coord = Coordinate726

Shape723.geometry = LineSet724

HAnimSegment703.children.append(Shape723)
Shape727 = x3d.Shape()
LineSet728 = x3d.LineSet()
LineSet728.vertexCount = [2]
ColorRGBA729 = x3d.ColorRGBA()
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA"

LineSet728.color = ColorRGBA729
Coordinate730 = x3d.Coordinate()
Coordinate730.point = [(0.0044, 1.6209, 0.0236),(-0.0336, 1.635, 0.0506)]

LineSet728.coord = Coordinate730

Shape727.geometry = LineSet728

HAnimSegment703.children.append(Shape727)
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.vertexCount = [2]
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA"

LineSet732.color = ColorRGBA733
Coordinate734 = x3d.Coordinate()
Coordinate734.point = [(0.0044, 1.6209, 0.0236),(0, 1.63, 0.015)]

LineSet732.coord = Coordinate734

Shape731.geometry = LineSet732

HAnimSegment703.children.append(Shape731)
Shape735 = x3d.Shape()
LineSet736 = x3d.LineSet()
LineSet736.vertexCount = [2]
ColorRGBA737 = x3d.ColorRGBA()
ColorRGBA737.USE = "HAnimSiteLineColorRGBA"

LineSet736.color = ColorRGBA737
Coordinate738 = x3d.Coordinate()
Coordinate738.point = [(0.0044, 1.6209, 0.0236),(0.005, 1.7504, 0.0055)]

LineSet736.coord = Coordinate738

Shape735.geometry = LineSet736

HAnimSegment703.children.append(Shape735)
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.vertexCount = [2]
ColorRGBA741 = x3d.ColorRGBA()
ColorRGBA741.USE = "HAnimSiteLineColorRGBA"

LineSet740.color = ColorRGBA741
Coordinate742 = x3d.Coordinate()
Coordinate742.point = [(0.0044, 1.6209, 0.0236),(0.0058, 1.6316, 0.0852)]

LineSet740.coord = Coordinate742

Shape739.geometry = LineSet740

HAnimSegment703.children.append(Shape739)
Shape743 = x3d.Shape()
LineSet744 = x3d.LineSet()
LineSet744.vertexCount = [2]
ColorRGBA745 = x3d.ColorRGBA()
ColorRGBA745.USE = "HAnimSiteLineColorRGBA"

LineSet744.color = ColorRGBA745
Coordinate746 = x3d.Coordinate()
Coordinate746.point = [(0.0044, 1.6209, 0.0236),(-0.0237, 1.6171, 0.0752)]

LineSet744.coord = Coordinate746

Shape743.geometry = LineSet744

HAnimSegment703.children.append(Shape743)
Shape747 = x3d.Shape()
LineSet748 = x3d.LineSet()
LineSet748.vertexCount = [2]
ColorRGBA749 = x3d.ColorRGBA()
ColorRGBA749.USE = "HAnimSiteLineColorRGBA"

LineSet748.color = ColorRGBA749
Coordinate750 = x3d.Coordinate()
Coordinate750.point = [(0.0044, 1.6209, 0.0236),(0.0341, 1.6171, 0.0752)]

LineSet748.coord = Coordinate750

Shape747.geometry = LineSet748

HAnimSegment703.children.append(Shape747)
Shape751 = x3d.Shape()
LineSet752 = x3d.LineSet()
LineSet752.vertexCount = [2]
ColorRGBA753 = x3d.ColorRGBA()
ColorRGBA753.USE = "HAnimSiteLineColorRGBA"

LineSet752.color = ColorRGBA753
Coordinate754 = x3d.Coordinate()
Coordinate754.point = [(0.0044, 1.6209, 0.0236),(0.0061, 1.541, 0.0805)]

LineSet752.coord = Coordinate754

Shape751.geometry = LineSet752

HAnimSegment703.children.append(Shape751)
Shape755 = x3d.Shape()
LineSet756 = x3d.LineSet()
LineSet756.vertexCount = [2]
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.USE = "HAnimSiteLineColorRGBA"

LineSet756.color = ColorRGBA757
Coordinate758 = x3d.Coordinate()
Coordinate758.point = [(0.0044, 1.6209, 0.0236),(-0.0646, 1.6347, 0.0302)]

LineSet756.coord = Coordinate758

Shape755.geometry = LineSet756

HAnimSegment703.children.append(Shape755)
Shape759 = x3d.Shape()
LineSet760 = x3d.LineSet()
LineSet760.vertexCount = [2]
ColorRGBA761 = x3d.ColorRGBA()
ColorRGBA761.USE = "HAnimSiteLineColorRGBA"

LineSet760.color = ColorRGBA761
Coordinate762 = x3d.Coordinate()
Coordinate762.point = [(0.0044, 1.6209, 0.0236),(-0.052, 1.5529, 0.0347)]

LineSet760.coord = Coordinate762

Shape759.geometry = LineSet760

HAnimSegment703.children.append(Shape759)
Shape763 = x3d.Shape()
LineSet764 = x3d.LineSet()
LineSet764.vertexCount = [2]
ColorRGBA765 = x3d.ColorRGBA()
ColorRGBA765.USE = "HAnimSiteLineColorRGBA"

LineSet764.color = ColorRGBA765
Coordinate766 = x3d.Coordinate()
Coordinate766.point = [(0.0044, 1.6209, 0.0236),(0.0739, 1.6348, 0.0282)]

LineSet764.coord = Coordinate766

Shape763.geometry = LineSet764

HAnimSegment703.children.append(Shape763)
Shape767 = x3d.Shape()
LineSet768 = x3d.LineSet()
LineSet768.vertexCount = [2]
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.USE = "HAnimSiteLineColorRGBA"

LineSet768.color = ColorRGBA769
Coordinate770 = x3d.Coordinate()
Coordinate770.point = [(0.0044, 1.6209, 0.0236),(0.0631, 1.553, 0.033)]

LineSet768.coord = Coordinate770

Shape767.geometry = LineSet768

HAnimSegment703.children.append(Shape767)
Shape771 = x3d.Shape()
LineSet772 = x3d.LineSet()
LineSet772.vertexCount = [2]
ColorRGBA773 = x3d.ColorRGBA()
ColorRGBA773.USE = "HAnimSiteLineColorRGBA"

LineSet772.color = ColorRGBA773
Coordinate774 = x3d.Coordinate()
Coordinate774.point = [(0.0044, 1.6209, 0.0236),(0.0039, 1.5972, -0.0796)]

LineSet772.coord = Coordinate774

Shape771.geometry = LineSet772

HAnimSegment703.children.append(Shape771)
HAnimSite775 = x3d.HAnimSite()
HAnimSite775.DEF = "hanim_skull_tip"
HAnimSite775.name = "skull_tip"
HAnimSite775.translation = [0.005,1.7504,0.0055]
TouchSensor776 = x3d.TouchSensor()
TouchSensor776.description = "HAnimSite skull_tip"

HAnimSite775.children.append(TouchSensor776)
Shape777 = x3d.Shape()
Shape777.USE = "HAnimSiteShape"

HAnimSite775.children.append(Shape777)

HAnimSegment703.children.append(HAnimSite775)
HAnimSite778 = x3d.HAnimSite()
HAnimSite778.DEF = "hanim_sellion_pt"
HAnimSite778.name = "sellion_pt"
HAnimSite778.translation = [0.0058,1.6316,0.0852]
TouchSensor779 = x3d.TouchSensor()
TouchSensor779.description = "HAnimSite sellion"

HAnimSite778.children.append(TouchSensor779)
Shape780 = x3d.Shape()
Shape780.USE = "HAnimSiteShape"

HAnimSite778.children.append(Shape780)

HAnimSegment703.children.append(HAnimSite778)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.DEF = "hanim_r_infraorbitale_pt"
HAnimSite781.name = "r_infraorbitale_pt"
HAnimSite781.translation = [-0.0237,1.6171,0.0752]
TouchSensor782 = x3d.TouchSensor()
TouchSensor782.description = "HAnimSite r_infraorbitale"

HAnimSite781.children.append(TouchSensor782)
Shape783 = x3d.Shape()
Shape783.USE = "HAnimSiteShape"

HAnimSite781.children.append(Shape783)

HAnimSegment703.children.append(HAnimSite781)
HAnimSite784 = x3d.HAnimSite()
HAnimSite784.DEF = "hanim_l_infraorbitale_pt"
HAnimSite784.name = "l_infraorbitale_pt"
HAnimSite784.translation = [0.0341,1.6171,0.0752]
TouchSensor785 = x3d.TouchSensor()
TouchSensor785.description = "HAnimSite l_infraorbitale"

HAnimSite784.children.append(TouchSensor785)
Shape786 = x3d.Shape()
Shape786.USE = "HAnimSiteShape"

HAnimSite784.children.append(Shape786)

HAnimSegment703.children.append(HAnimSite784)
HAnimSite787 = x3d.HAnimSite()
HAnimSite787.DEF = "hanim_supramenton_pt"
HAnimSite787.name = "supramenton_pt"
HAnimSite787.translation = [0.0061,1.541,0.0805]
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.description = "HAnimSite supramenton"

HAnimSite787.children.append(TouchSensor788)
Shape789 = x3d.Shape()
Shape789.USE = "HAnimSiteShape"

HAnimSite787.children.append(Shape789)

HAnimSegment703.children.append(HAnimSite787)
HAnimSite790 = x3d.HAnimSite()
HAnimSite790.DEF = "hanim_r_tragion_pt"
HAnimSite790.name = "r_tragion_pt"
HAnimSite790.translation = [-0.0646,1.6347,0.0302]
TouchSensor791 = x3d.TouchSensor()
TouchSensor791.description = "HAnimSite r_tragion"

HAnimSite790.children.append(TouchSensor791)
Shape792 = x3d.Shape()
Shape792.USE = "HAnimSiteShape"

HAnimSite790.children.append(Shape792)

HAnimSegment703.children.append(HAnimSite790)
HAnimSite793 = x3d.HAnimSite()
HAnimSite793.DEF = "hanim_r_gonion_pt"
HAnimSite793.name = "r_gonion_pt"
HAnimSite793.translation = [-0.052,1.5529,0.0347]
TouchSensor794 = x3d.TouchSensor()
TouchSensor794.description = "HAnimSite r_gonion"

HAnimSite793.children.append(TouchSensor794)
Shape795 = x3d.Shape()
Shape795.USE = "HAnimSiteShape"

HAnimSite793.children.append(Shape795)

HAnimSegment703.children.append(HAnimSite793)
HAnimSite796 = x3d.HAnimSite()
HAnimSite796.DEF = "hanim_l_tragion_pt"
HAnimSite796.name = "l_tragion_pt"
HAnimSite796.translation = [0.0739,1.6348,0.0282]
TouchSensor797 = x3d.TouchSensor()
TouchSensor797.description = "HAnimSite l_tragion"

HAnimSite796.children.append(TouchSensor797)
Shape798 = x3d.Shape()
Shape798.USE = "HAnimSiteShape"

HAnimSite796.children.append(Shape798)

HAnimSegment703.children.append(HAnimSite796)
HAnimSite799 = x3d.HAnimSite()
HAnimSite799.DEF = "hanim_l_gonion_pt"
HAnimSite799.name = "l_gonion_pt"
HAnimSite799.translation = [0.0631,1.553,0.033]
TouchSensor800 = x3d.TouchSensor()
TouchSensor800.description = "HAnimSite l_gonion"

HAnimSite799.children.append(TouchSensor800)
Shape801 = x3d.Shape()
Shape801.USE = "HAnimSiteShape"

HAnimSite799.children.append(Shape801)

HAnimSegment703.children.append(HAnimSite799)
HAnimSite802 = x3d.HAnimSite()
HAnimSite802.DEF = "hanim_nuchale_pt"
HAnimSite802.name = "nuchale_pt"
HAnimSite802.translation = [0.0039,1.5972,-0.0796]
TouchSensor803 = x3d.TouchSensor()
TouchSensor803.description = "HAnimSite nuchale"

HAnimSite802.children.append(TouchSensor803)
Shape804 = x3d.Shape()
Shape804.USE = "HAnimSiteShape"

HAnimSite802.children.append(Shape804)

HAnimSegment703.children.append(HAnimSite802)

HAnimJoint702.children.append(HAnimSegment703)
HAnimJoint805 = x3d.HAnimJoint()
HAnimJoint805.DEF = "hanim_l_eyeball_joint"
HAnimJoint805.name = "l_eyeball_joint"
HAnimJoint805.rotation = [-0.999999999999999,0,0,0.277705039416179]
HAnimJoint805.center = [0.0336,1.6332,0.0502]
HAnimSegment806 = x3d.HAnimSegment()
HAnimSegment806.DEF = "hanim_l_eyeball"
HAnimSegment806.name = "l_eyeball"
TouchSensor807 = x3d.TouchSensor()
TouchSensor807.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"

HAnimSegment806.children.append(TouchSensor807)
Transform808 = x3d.Transform()
Transform808.translation = [0.0336,1.6332,0.0502]
Shape809 = x3d.Shape()
Shape809.USE = "HAnimJointShape"

Transform808.children.append(Shape809)

HAnimSegment806.children.append(Transform808)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.vertexCount = [2]
ColorRGBA812 = x3d.ColorRGBA()
ColorRGBA812.DEF = "HAnimSiteViewpointLineColorRGBA"
ColorRGBA812.color = [(0, 0, 1, 1),(0, 0, 1, 0.1)]

LineSet811.color = ColorRGBA812
Coordinate813 = x3d.Coordinate()
Coordinate813.point = [(0.0336, 1.6332, 0.0502),(0.034, 1.64, 0.05)]

LineSet811.coord = Coordinate813

Shape810.geometry = LineSet811

HAnimSegment806.children.append(Shape810)
HAnimSite814 = x3d.HAnimSite()
HAnimSite814.DEF = "hanim_l_eyeball_site_view"
HAnimSite814.name = "l_eyeball_site_view"
HAnimSite814.translation = [0.034,1.64,0.05]
Viewpoint815 = x3d.Viewpoint()
Viewpoint815.DEF = "hanim_l_eyeball_site_viewpoint"
Viewpoint815.description = "l_eyeball_site_viewpoint looking forward"
Viewpoint815.position = [0,0,0]
Viewpoint815.orientation = [0,1,0,3.141593]

HAnimSite814.children.append(Viewpoint815)
Anchor816 = x3d.Anchor()
Anchor816.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view"
Anchor816.url = ["#hanim_l_eyeball_site_viewpoint"]
LOD817 = x3d.LOD()
LOD817.forceTransitions = True
LOD817.range = [0.04]
WorldInfo818 = x3d.WorldInfo()
WorldInfo818.info = ["hide diamond when close"]

LOD817.children.append(WorldInfo818)
Shape819 = x3d.Shape()
Shape819.DEF = "HAnimSiteViewpointShape"
Appearance820 = x3d.Appearance()
Material821 = x3d.Material()
Material821.diffuseColor = [0,0,1]
Material821.transparency = 0.6

Appearance820.material = Material821

Shape819.appearance = Appearance820
IndexedFaceSet822 = x3d.IndexedFaceSet()
IndexedFaceSet822.DEF = "SiteViewpointDiamondIFS"
IndexedFaceSet822.creaseAngle = 0.5
IndexedFaceSet822.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate823 = x3d.Coordinate()
Coordinate823.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet822.coord = Coordinate823

Shape819.geometry = IndexedFaceSet822

LOD817.children.append(Shape819)

Anchor816.children.append(LOD817)

HAnimSite814.children.append(Anchor816)

HAnimSegment806.children.append(HAnimSite814)

HAnimJoint805.children.append(HAnimSegment806)

HAnimJoint702.children.append(HAnimJoint805)
HAnimJoint824 = x3d.HAnimJoint()
HAnimJoint824.DEF = "hanim_l_eyelid_joint"
HAnimJoint824.name = "l_eyelid_joint"
HAnimJoint824.center = [0.0336,1.6332,0.0502]
HAnimSegment825 = x3d.HAnimSegment()
HAnimSegment825.DEF = "hanim_l_eyelid"
HAnimSegment825.name = "l_eyelid"
TouchSensor826 = x3d.TouchSensor()
TouchSensor826.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"

HAnimSegment825.children.append(TouchSensor826)
Transform827 = x3d.Transform()
Transform827.translation = [0.0336,1.6332,0.0502]
Shape828 = x3d.Shape()
Shape828.USE = "HAnimJointShape"

Transform827.children.append(Shape828)

HAnimSegment825.children.append(Transform827)

HAnimJoint824.children.append(HAnimSegment825)

HAnimJoint702.children.append(HAnimJoint824)
HAnimJoint829 = x3d.HAnimJoint()
HAnimJoint829.DEF = "hanim_l_eyebrow_joint"
HAnimJoint829.name = "l_eyebrow_joint"
HAnimJoint829.center = [0.0336,1.635,0.0506]
HAnimSegment830 = x3d.HAnimSegment()
HAnimSegment830.DEF = "hanim_l_eyebrow"
HAnimSegment830.name = "l_eyebrow"
TouchSensor831 = x3d.TouchSensor()
TouchSensor831.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"

HAnimSegment830.children.append(TouchSensor831)
Transform832 = x3d.Transform()
Transform832.translation = [0.0336,1.635,0.0506]
Shape833 = x3d.Shape()
Shape833.USE = "HAnimJointShape"

Transform832.children.append(Shape833)

HAnimSegment830.children.append(Transform832)

HAnimJoint829.children.append(HAnimSegment830)

HAnimJoint702.children.append(HAnimJoint829)
HAnimJoint834 = x3d.HAnimJoint()
HAnimJoint834.DEF = "hanim_r_eyeball_joint"
HAnimJoint834.name = "r_eyeball_joint"
HAnimJoint834.rotation = [-0.999999999999999,0,0,0.277705039416179]
HAnimJoint834.center = [-0.0336,1.6332,0.0502]
HAnimSegment835 = x3d.HAnimSegment()
HAnimSegment835.DEF = "hanim_r_eyeball"
HAnimSegment835.name = "r_eyeball"
TouchSensor836 = x3d.TouchSensor()
TouchSensor836.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"

HAnimSegment835.children.append(TouchSensor836)
Transform837 = x3d.Transform()
Transform837.translation = [-0.0336,1.6332,0.0502]
Shape838 = x3d.Shape()
Shape838.USE = "HAnimJointShape"

Transform837.children.append(Shape838)

HAnimSegment835.children.append(Transform837)
Shape839 = x3d.Shape()
LineSet840 = x3d.LineSet()
LineSet840.vertexCount = [2]
ColorRGBA841 = x3d.ColorRGBA()
ColorRGBA841.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet840.color = ColorRGBA841
Coordinate842 = x3d.Coordinate()
Coordinate842.point = [(-0.0336, 1.6332, 0.0502),(-0.034, 1.64, 0.05)]

LineSet840.coord = Coordinate842

Shape839.geometry = LineSet840

HAnimSegment835.children.append(Shape839)
HAnimSite843 = x3d.HAnimSite()
HAnimSite843.DEF = "hanim_r_eyeball_site_view"
HAnimSite843.name = "r_eyeball_site_view"
HAnimSite843.translation = [-0.034,1.64,0.05]
Viewpoint844 = x3d.Viewpoint()
Viewpoint844.DEF = "hanim_r_eyeball_site_viewpoint"
Viewpoint844.description = "r_eyeball_site_viewpoint looking forward"
Viewpoint844.position = [0,0,0]
Viewpoint844.orientation = [0,1,0,3.141593]

HAnimSite843.children.append(Viewpoint844)
Anchor845 = x3d.Anchor()
Anchor845.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view"
Anchor845.url = ["#hanim_r_eyeball_site_viewpoint"]
LOD846 = x3d.LOD()
LOD846.forceTransitions = True
LOD846.range = [0.04]
WorldInfo847 = x3d.WorldInfo()
WorldInfo847.info = ["hide diamond when close"]

LOD846.children.append(WorldInfo847)
Shape848 = x3d.Shape()
Shape848.USE = "HAnimSiteViewpointShape"

LOD846.children.append(Shape848)

Anchor845.children.append(LOD846)

HAnimSite843.children.append(Anchor845)

HAnimSegment835.children.append(HAnimSite843)

HAnimJoint834.children.append(HAnimSegment835)

HAnimJoint702.children.append(HAnimJoint834)
HAnimJoint849 = x3d.HAnimJoint()
HAnimJoint849.DEF = "hanim_r_eyelid_joint"
HAnimJoint849.name = "r_eyelid_joint"
HAnimJoint849.center = [-0.0336,1.6332,0.0502]
HAnimSegment850 = x3d.HAnimSegment()
HAnimSegment850.DEF = "hanim_r_eyelid"
HAnimSegment850.name = "r_eyelid"
TouchSensor851 = x3d.TouchSensor()
TouchSensor851.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"

HAnimSegment850.children.append(TouchSensor851)
Transform852 = x3d.Transform()
Transform852.translation = [-0.0336,1.6332,0.0502]
Shape853 = x3d.Shape()
Shape853.USE = "HAnimJointShape"

Transform852.children.append(Shape853)

HAnimSegment850.children.append(Transform852)

HAnimJoint849.children.append(HAnimSegment850)

HAnimJoint702.children.append(HAnimJoint849)
HAnimJoint854 = x3d.HAnimJoint()
HAnimJoint854.DEF = "hanim_r_eyebrow_joint"
HAnimJoint854.name = "r_eyebrow_joint"
HAnimJoint854.center = [-0.0336,1.635,0.0506]
HAnimSegment855 = x3d.HAnimSegment()
HAnimSegment855.DEF = "hanim_r_eyebrow"
HAnimSegment855.name = "r_eyebrow"
TouchSensor856 = x3d.TouchSensor()
TouchSensor856.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"

HAnimSegment855.children.append(TouchSensor856)
Transform857 = x3d.Transform()
Transform857.translation = [-0.0336,1.635,0.0506]
Shape858 = x3d.Shape()
Shape858.USE = "HAnimJointShape"

Transform857.children.append(Shape858)

HAnimSegment855.children.append(Transform857)

HAnimJoint854.children.append(HAnimSegment855)

HAnimJoint702.children.append(HAnimJoint854)
HAnimJoint859 = x3d.HAnimJoint()
HAnimJoint859.DEF = "hanim_temporomandibular"
HAnimJoint859.name = "temporomandibular"
HAnimJoint859.center = [0,1.63,0.015]
HAnimSegment860 = x3d.HAnimSegment()
HAnimSegment860.DEF = "hanim_jaw"
HAnimSegment860.name = "jaw"
TouchSensor861 = x3d.TouchSensor()
TouchSensor861.description = "HAnimJoint temporomandibular, HAnimSegment jaw"

HAnimSegment860.children.append(TouchSensor861)
Transform862 = x3d.Transform()
Transform862.translation = [0,1.63,0.015]
Shape863 = x3d.Shape()
Shape863.USE = "HAnimJointShape"

Transform862.children.append(Shape863)

HAnimSegment860.children.append(Transform862)
Shape864 = x3d.Shape()
LineSet865 = x3d.LineSet()
LineSet865.vertexCount = [2]
ColorRGBA866 = x3d.ColorRGBA()
ColorRGBA866.USE = "HAnimSiteLineColorRGBA"

LineSet865.color = ColorRGBA866
Coordinate867 = x3d.Coordinate()
Coordinate867.point = [(0, 1.63, 0.015),(0.045, 1.63, 0)]

LineSet865.coord = Coordinate867

Shape864.geometry = LineSet865

HAnimSegment860.children.append(Shape864)
Shape868 = x3d.Shape()
LineSet869 = x3d.LineSet()
LineSet869.vertexCount = [2]
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.USE = "HAnimSiteLineColorRGBA"

LineSet869.color = ColorRGBA870
Coordinate871 = x3d.Coordinate()
Coordinate871.point = [(0, 1.63, 0.015),(-0.045, 1.63, 0)]

LineSet869.coord = Coordinate871

Shape868.geometry = LineSet869

HAnimSegment860.children.append(Shape868)
HAnimSite872 = x3d.HAnimSite()
HAnimSite872.DEF = "hanim_temporomandibular_l_site_pt"
HAnimSite872.name = "temporomandibular_l_site_pt"
HAnimSite872.translation = [0.045,1.63,0]
TouchSensor873 = x3d.TouchSensor()
TouchSensor873.description = "HAnimSite temporomandibular_l_site"

HAnimSite872.children.append(TouchSensor873)
Shape874 = x3d.Shape()
Shape874.USE = "HAnimSiteShape"

HAnimSite872.children.append(Shape874)

HAnimSegment860.children.append(HAnimSite872)
HAnimSite875 = x3d.HAnimSite()
HAnimSite875.DEF = "hanim_temporomandibular_r_site_pt"
HAnimSite875.name = "temporomandibular_r_site_pt"
HAnimSite875.translation = [-0.045,1.63,0]
TouchSensor876 = x3d.TouchSensor()
TouchSensor876.description = "HAnimSite temporomandibular_r_site"

HAnimSite875.children.append(TouchSensor876)
Shape877 = x3d.Shape()
Shape877.USE = "HAnimSiteShape"

HAnimSite875.children.append(Shape877)

HAnimSegment860.children.append(HAnimSite875)

HAnimJoint859.children.append(HAnimSegment860)

HAnimJoint702.children.append(HAnimJoint859)

HAnimJoint693.children.append(HAnimJoint702)

HAnimJoint684.children.append(HAnimJoint693)

HAnimJoint675.children.append(HAnimJoint684)

HAnimJoint666.children.append(HAnimJoint675)

HAnimJoint657.children.append(HAnimJoint666)

HAnimJoint648.children.append(HAnimJoint657)

HAnimJoint625.children.append(HAnimJoint648)

HAnimJoint594.children.append(HAnimJoint625)
HAnimJoint878 = x3d.HAnimJoint()
HAnimJoint878.DEF = "hanim_l_sternoclavicular"
HAnimJoint878.name = "l_sternoclavicular"
HAnimJoint878.rotation = [0,0,1.00000000000003,0.108042894183947]
HAnimJoint878.center = [0.082,1.4488,-0.0353]
HAnimSegment879 = x3d.HAnimSegment()
HAnimSegment879.DEF = "hanim_l_clavicle"
HAnimSegment879.name = "l_clavicle"
TouchSensor880 = x3d.TouchSensor()
TouchSensor880.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"

HAnimSegment879.children.append(TouchSensor880)
Transform881 = x3d.Transform()
Transform881.translation = [0.082,1.4488,-0.0353]
Shape882 = x3d.Shape()
Shape882.USE = "HAnimJointShape"

Transform881.children.append(Shape882)

HAnimSegment879.children.append(Transform881)
Shape883 = x3d.Shape()
LineSet884 = x3d.LineSet()
LineSet884.vertexCount = [2]
ColorRGBA885 = x3d.ColorRGBA()
ColorRGBA885.USE = "HAnimSegmentLineColorRGBA"

LineSet884.color = ColorRGBA885
Coordinate886 = x3d.Coordinate()
Coordinate886.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet884.coord = Coordinate886

Shape883.geometry = LineSet884

HAnimSegment879.children.append(Shape883)
Shape887 = x3d.Shape()
LineSet888 = x3d.LineSet()
LineSet888.vertexCount = [2]
ColorRGBA889 = x3d.ColorRGBA()
ColorRGBA889.USE = "HAnimSiteLineColorRGBA"

LineSet888.color = ColorRGBA889
Coordinate890 = x3d.Coordinate()
Coordinate890.point = [(0.082, 1.4488, -0.0353),(0.0271, 1.4943, 0.0394)]

LineSet888.coord = Coordinate890

Shape887.geometry = LineSet888

HAnimSegment879.children.append(Shape887)
Shape891 = x3d.Shape()
LineSet892 = x3d.LineSet()
LineSet892.vertexCount = [2]
ColorRGBA893 = x3d.ColorRGBA()
ColorRGBA893.USE = "HAnimSiteLineColorRGBA"

LineSet892.color = ColorRGBA893
Coordinate894 = x3d.Coordinate()
Coordinate894.point = [(0.082, 1.4488, -0.0353),(0.2032, 1.476, -0.049)]

LineSet892.coord = Coordinate894

Shape891.geometry = LineSet892

HAnimSegment879.children.append(Shape891)
Shape895 = x3d.Shape()
LineSet896 = x3d.LineSet()
LineSet896.vertexCount = [2]
ColorRGBA897 = x3d.ColorRGBA()
ColorRGBA897.USE = "HAnimSiteLineColorRGBA"

LineSet896.color = ColorRGBA897
Coordinate898 = x3d.Coordinate()
Coordinate898.point = [(0.082, 1.4488, -0.0353),(0.1777, 1.4065, -0.0075)]

LineSet896.coord = Coordinate898

Shape895.geometry = LineSet896

HAnimSegment879.children.append(Shape895)
Shape899 = x3d.Shape()
LineSet900 = x3d.LineSet()
LineSet900.vertexCount = [2]
ColorRGBA901 = x3d.ColorRGBA()
ColorRGBA901.USE = "HAnimSiteLineColorRGBA"

LineSet900.color = ColorRGBA901
Coordinate902 = x3d.Coordinate()
Coordinate902.point = [(0.082, 1.4488, -0.0353),(0.1706, 1.4072, -0.0875)]

LineSet900.coord = Coordinate902

Shape899.geometry = LineSet900

HAnimSegment879.children.append(Shape899)
HAnimSite903 = x3d.HAnimSite()
HAnimSite903.DEF = "hanim_l_clavicale_pt"
HAnimSite903.name = "l_clavicale_pt"
HAnimSite903.translation = [0.0271,1.4943,0.0394]
TouchSensor904 = x3d.TouchSensor()
TouchSensor904.description = "HAnimSite l_clavicale"

HAnimSite903.children.append(TouchSensor904)
Shape905 = x3d.Shape()
Shape905.USE = "HAnimSiteShape"

HAnimSite903.children.append(Shape905)

HAnimSegment879.children.append(HAnimSite903)
HAnimSite906 = x3d.HAnimSite()
HAnimSite906.DEF = "hanim_l_acromion_pt"
HAnimSite906.name = "l_acromion_pt"
HAnimSite906.translation = [0.2032,1.476,-0.049]
TouchSensor907 = x3d.TouchSensor()
TouchSensor907.description = "HAnimSite l_acromion"

HAnimSite906.children.append(TouchSensor907)
Shape908 = x3d.Shape()
Shape908.USE = "HAnimSiteShape"

HAnimSite906.children.append(Shape908)

HAnimSegment879.children.append(HAnimSite906)
HAnimSite909 = x3d.HAnimSite()
HAnimSite909.DEF = "hanim_l_axilla_ant_pt"
HAnimSite909.name = "l_axilla_ant_pt"
HAnimSite909.translation = [0.1777,1.4065,-0.0075]
TouchSensor910 = x3d.TouchSensor()
TouchSensor910.description = "HAnimSite l_axilla_ant"

HAnimSite909.children.append(TouchSensor910)
Shape911 = x3d.Shape()
Shape911.USE = "HAnimSiteShape"

HAnimSite909.children.append(Shape911)

HAnimSegment879.children.append(HAnimSite909)
HAnimSite912 = x3d.HAnimSite()
HAnimSite912.DEF = "hanim_l_axilla_post_pt"
HAnimSite912.name = "l_axilla_post_pt"
HAnimSite912.translation = [0.1706,1.4072,-0.0875]
TouchSensor913 = x3d.TouchSensor()
TouchSensor913.description = "HAnimSite l_axilla_post"

HAnimSite912.children.append(TouchSensor913)
Shape914 = x3d.Shape()
Shape914.USE = "HAnimSiteShape"

HAnimSite912.children.append(Shape914)

HAnimSegment879.children.append(HAnimSite912)

HAnimJoint878.children.append(HAnimSegment879)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.DEF = "hanim_l_acromioclavicular"
HAnimJoint915.name = "l_acromioclavicular"
HAnimJoint915.center = [0.0962,1.4269,-0.0424]
HAnimSegment916 = x3d.HAnimSegment()
HAnimSegment916.DEF = "hanim_l_scapula"
HAnimSegment916.name = "l_scapula"
TouchSensor917 = x3d.TouchSensor()
TouchSensor917.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"

HAnimSegment916.children.append(TouchSensor917)
Transform918 = x3d.Transform()
Transform918.translation = [0.0962,1.4269,-0.0424]
Shape919 = x3d.Shape()
Shape919.USE = "HAnimJointShape"

Transform918.children.append(Shape919)

HAnimSegment916.children.append(Transform918)
Shape920 = x3d.Shape()
LineSet921 = x3d.LineSet()
LineSet921.vertexCount = [2]
ColorRGBA922 = x3d.ColorRGBA()
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA"

LineSet921.color = ColorRGBA922
Coordinate923 = x3d.Coordinate()
Coordinate923.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet921.coord = Coordinate923

Shape920.geometry = LineSet921

HAnimSegment916.children.append(Shape920)

HAnimJoint915.children.append(HAnimSegment916)
HAnimJoint924 = x3d.HAnimJoint()
HAnimJoint924.DEF = "hanim_l_shoulder"
HAnimJoint924.name = "l_shoulder"
HAnimJoint924.rotation = [0,0,1,0.950777468818762]
HAnimJoint924.center = [0.2029,1.4376,-0.0387]
HAnimSegment925 = x3d.HAnimSegment()
HAnimSegment925.DEF = "hanim_l_upperarm"
HAnimSegment925.name = "l_upperarm"
TouchSensor926 = x3d.TouchSensor()
TouchSensor926.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm"

HAnimSegment925.children.append(TouchSensor926)
Transform927 = x3d.Transform()
Transform927.translation = [0.2029,1.4376,-0.0387]
Shape928 = x3d.Shape()
Shape928.USE = "HAnimJointShape"

Transform927.children.append(Shape928)

HAnimSegment925.children.append(Transform927)
Shape929 = x3d.Shape()
LineSet930 = x3d.LineSet()
LineSet930.vertexCount = [2]
ColorRGBA931 = x3d.ColorRGBA()
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA"

LineSet930.color = ColorRGBA931
Coordinate932 = x3d.Coordinate()
Coordinate932.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet930.coord = Coordinate932

Shape929.geometry = LineSet930

HAnimSegment925.children.append(Shape929)
Shape933 = x3d.Shape()
LineSet934 = x3d.LineSet()
LineSet934.vertexCount = [2]
ColorRGBA935 = x3d.ColorRGBA()
ColorRGBA935.USE = "HAnimSiteLineColorRGBA"

LineSet934.color = ColorRGBA935
Coordinate936 = x3d.Coordinate()
Coordinate936.point = [(0.2029, 1.4376, -0.0387),(0.228, 1.1482, -0.11)]

LineSet934.coord = Coordinate936

Shape933.geometry = LineSet934

HAnimSegment925.children.append(Shape933)
HAnimSite937 = x3d.HAnimSite()
HAnimSite937.DEF = "hanim_l_humeral_lateral_epicn_pt"
HAnimSite937.name = "l_humeral_lateral_epicn_pt"
HAnimSite937.translation = [0.228,1.1482,-0.11]
TouchSensor938 = x3d.TouchSensor()
TouchSensor938.description = "HAnimSite l_humeral_lateral_epicn"

HAnimSite937.children.append(TouchSensor938)
Shape939 = x3d.Shape()
Shape939.USE = "HAnimSiteShape"

HAnimSite937.children.append(Shape939)

HAnimSegment925.children.append(HAnimSite937)

HAnimJoint924.children.append(HAnimSegment925)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.DEF = "hanim_l_elbow"
HAnimJoint940.name = "l_elbow"
HAnimJoint940.rotation = [-1,0,0,0.297117959005863]
HAnimJoint940.center = [0.2014,1.1357,-0.0682]
HAnimSegment941 = x3d.HAnimSegment()
HAnimSegment941.DEF = "hanim_l_forearm"
HAnimSegment941.name = "l_forearm"
TouchSensor942 = x3d.TouchSensor()
TouchSensor942.description = "HAnimJoint l_elbow, HAnimSegment l_forearm"

HAnimSegment941.children.append(TouchSensor942)
Transform943 = x3d.Transform()
Transform943.translation = [0.2014,1.1357,-0.0682]
Shape944 = x3d.Shape()
Shape944.USE = "HAnimJointShape"

Transform943.children.append(Shape944)

HAnimSegment941.children.append(Transform943)
Shape945 = x3d.Shape()
LineSet946 = x3d.LineSet()
LineSet946.vertexCount = [2]
ColorRGBA947 = x3d.ColorRGBA()
ColorRGBA947.USE = "HAnimSegmentLineColorRGBA"

LineSet946.color = ColorRGBA947
Coordinate948 = x3d.Coordinate()
Coordinate948.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet946.coord = Coordinate948

Shape945.geometry = LineSet946

HAnimSegment941.children.append(Shape945)
Shape949 = x3d.Shape()
LineSet950 = x3d.LineSet()
LineSet950.vertexCount = [2]
ColorRGBA951 = x3d.ColorRGBA()
ColorRGBA951.USE = "HAnimSiteLineColorRGBA"

LineSet950.color = ColorRGBA951
Coordinate952 = x3d.Coordinate()
Coordinate952.point = [(0.2014, 1.1357, -0.0682),(0.1901, 0.8645, -0.0415)]

LineSet950.coord = Coordinate952

Shape949.geometry = LineSet950

HAnimSegment941.children.append(Shape949)
Shape953 = x3d.Shape()
LineSet954 = x3d.LineSet()
LineSet954.vertexCount = [2]
ColorRGBA955 = x3d.ColorRGBA()
ColorRGBA955.USE = "HAnimSiteLineColorRGBA"

LineSet954.color = ColorRGBA955
Coordinate956 = x3d.Coordinate()
Coordinate956.point = [(0.2014, 1.1357, -0.0682),(0.1962, 1.1375, -0.1123)]

LineSet954.coord = Coordinate956

Shape953.geometry = LineSet954

HAnimSegment941.children.append(Shape953)
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.vertexCount = [2]
ColorRGBA959 = x3d.ColorRGBA()
ColorRGBA959.USE = "HAnimSiteLineColorRGBA"

LineSet958.color = ColorRGBA959
Coordinate960 = x3d.Coordinate()
Coordinate960.point = [(0.2014, 1.1357, -0.0682),(0.1735, 1.1272, -0.1113)]

LineSet958.coord = Coordinate960

Shape957.geometry = LineSet958

HAnimSegment941.children.append(Shape957)
Shape961 = x3d.Shape()
LineSet962 = x3d.LineSet()
LineSet962.vertexCount = [2]
ColorRGBA963 = x3d.ColorRGBA()
ColorRGBA963.USE = "HAnimSiteLineColorRGBA"

LineSet962.color = ColorRGBA963
Coordinate964 = x3d.Coordinate()
Coordinate964.point = [(0.2014, 1.1357, -0.0682),(0.2182, 1.1212, -0.1167)]

LineSet962.coord = Coordinate964

Shape961.geometry = LineSet962

HAnimSegment941.children.append(Shape961)
HAnimSite965 = x3d.HAnimSite()
HAnimSite965.DEF = "hanim_l_radial_styloid_pt"
HAnimSite965.name = "l_radial_styloid_pt"
HAnimSite965.translation = [0.1901,0.8645,-0.0415]
TouchSensor966 = x3d.TouchSensor()
TouchSensor966.description = "HAnimSite l_radial_styloid"

HAnimSite965.children.append(TouchSensor966)
Shape967 = x3d.Shape()
Shape967.USE = "HAnimSiteShape"

HAnimSite965.children.append(Shape967)

HAnimSegment941.children.append(HAnimSite965)
HAnimSite968 = x3d.HAnimSite()
HAnimSite968.DEF = "hanim_l_olecranon_pt"
HAnimSite968.name = "l_olecranon_pt"
HAnimSite968.translation = [0.1962,1.1375,-0.1123]
TouchSensor969 = x3d.TouchSensor()
TouchSensor969.description = "HAnimSite l_olecranon"

HAnimSite968.children.append(TouchSensor969)
Shape970 = x3d.Shape()
Shape970.USE = "HAnimSiteShape"

HAnimSite968.children.append(Shape970)

HAnimSegment941.children.append(HAnimSite968)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.DEF = "hanim_l_humeral_medial_epicn_pt"
HAnimSite971.name = "l_humeral_medial_epicn_pt"
HAnimSite971.translation = [0.1735,1.1272,-0.1113]
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.description = "HAnimSite l_humeral_medial_epicn"

HAnimSite971.children.append(TouchSensor972)
Shape973 = x3d.Shape()
Shape973.USE = "HAnimSiteShape"

HAnimSite971.children.append(Shape973)

HAnimSegment941.children.append(HAnimSite971)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.DEF = "hanim_l_radiale_pt"
HAnimSite974.name = "l_radiale_pt"
HAnimSite974.translation = [0.2182,1.1212,-0.1167]
TouchSensor975 = x3d.TouchSensor()
TouchSensor975.description = "HAnimSite l_radiale"

HAnimSite974.children.append(TouchSensor975)
Shape976 = x3d.Shape()
Shape976.USE = "HAnimSiteShape"

HAnimSite974.children.append(Shape976)

HAnimSegment941.children.append(HAnimSite974)

HAnimJoint940.children.append(HAnimSegment941)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.DEF = "hanim_l_wrist"
HAnimJoint977.name = "l_wrist"
HAnimJoint977.center = [0.1984,0.8663,-0.0583]
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.DEF = "hanim_l_hand"
HAnimSegment978.name = "l_hand"
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.description = "HAnimJoint l_wrist, HAnimSegment l_hand"

HAnimSegment978.children.append(TouchSensor979)
Transform980 = x3d.Transform()
Transform980.translation = [0.1984,0.8663,-0.0583]
Shape981 = x3d.Shape()
Shape981.USE = "HAnimJointShape"

Transform980.children.append(Shape981)

HAnimSegment978.children.append(Transform980)
Shape982 = x3d.Shape()
LineSet983 = x3d.LineSet()
LineSet983.vertexCount = [2]
ColorRGBA984 = x3d.ColorRGBA()
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA"

LineSet983.color = ColorRGBA984
Coordinate985 = x3d.Coordinate()
Coordinate985.point = [(0.1984, 0.8663, -0.0583),(0.1924, 0.8472, -0.0534)]

LineSet983.coord = Coordinate985

Shape982.geometry = LineSet983

HAnimSegment978.children.append(Shape982)
Shape986 = x3d.Shape()
LineSet987 = x3d.LineSet()
LineSet987.vertexCount = [2]
ColorRGBA988 = x3d.ColorRGBA()
ColorRGBA988.USE = "HAnimSegmentLineColorRGBA"

LineSet987.color = ColorRGBA988
Coordinate989 = x3d.Coordinate()
Coordinate989.point = [(0.1984, 0.8663, -0.0583),(0.1983, 0.8024, -0.028)]

LineSet987.coord = Coordinate989

Shape986.geometry = LineSet987

HAnimSegment978.children.append(Shape986)
Shape990 = x3d.Shape()
LineSet991 = x3d.LineSet()
LineSet991.vertexCount = [2]
ColorRGBA992 = x3d.ColorRGBA()
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA"

LineSet991.color = ColorRGBA992
Coordinate993 = x3d.Coordinate()
Coordinate993.point = [(0.1984, 0.8663, -0.0583),(0.1987, 0.8029, -0.053)]

LineSet991.coord = Coordinate993

Shape990.geometry = LineSet991

HAnimSegment978.children.append(Shape990)
Shape994 = x3d.Shape()
LineSet995 = x3d.LineSet()
LineSet995.vertexCount = [2]
ColorRGBA996 = x3d.ColorRGBA()
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA"

LineSet995.color = ColorRGBA996
Coordinate997 = x3d.Coordinate()
Coordinate997.point = [(0.1984, 0.8663, -0.0583),(0.1956, 0.8019, -0.0794)]

LineSet995.coord = Coordinate997

Shape994.geometry = LineSet995

HAnimSegment978.children.append(Shape994)
Shape998 = x3d.Shape()
LineSet999 = x3d.LineSet()
LineSet999.vertexCount = [2]
ColorRGBA1000 = x3d.ColorRGBA()
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA"

LineSet999.color = ColorRGBA1000
Coordinate1001 = x3d.Coordinate()
Coordinate1001.point = [(0.1984, 0.8663, -0.0583),(0.1925, 0.8066, -0.1036)]

LineSet999.coord = Coordinate1001

Shape998.geometry = LineSet999

HAnimSegment978.children.append(Shape998)
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.vertexCount = [2]
ColorRGBA1004 = x3d.ColorRGBA()
ColorRGBA1004.USE = "HAnimSiteLineColorRGBA"

LineSet1003.color = ColorRGBA1004
Coordinate1005 = x3d.Coordinate()
Coordinate1005.point = [(0.1984, 0.8663, -0.0583),(0.2009, 0.8139, -0.0237)]

LineSet1003.coord = Coordinate1005

Shape1002.geometry = LineSet1003

HAnimSegment978.children.append(Shape1002)
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.vertexCount = [2]
ColorRGBA1008 = x3d.ColorRGBA()
ColorRGBA1008.USE = "HAnimSiteLineColorRGBA"

LineSet1007.color = ColorRGBA1008
Coordinate1009 = x3d.Coordinate()
Coordinate1009.point = [(0.1984, 0.8663, -0.0583),(0.2142, 0.8529, -0.0648)]

LineSet1007.coord = Coordinate1009

Shape1006.geometry = LineSet1007

HAnimSegment978.children.append(Shape1006)
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.vertexCount = [2]
ColorRGBA1012 = x3d.ColorRGBA()
ColorRGBA1012.USE = "HAnimSiteLineColorRGBA"

LineSet1011.color = ColorRGBA1012
Coordinate1013 = x3d.Coordinate()
Coordinate1013.point = [(0.1984, 0.8663, -0.0583),(0.1929, 0.786, -0.1122)]

LineSet1011.coord = Coordinate1013

Shape1010.geometry = LineSet1011

HAnimSegment978.children.append(Shape1010)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.vertexCount = [2]
ColorRGBA1016 = x3d.ColorRGBA()
ColorRGBA1016.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1015.color = ColorRGBA1016
Coordinate1017 = x3d.Coordinate()
Coordinate1017.point = [(0.1984, 0.8663, -0.0583),(0.3, 0.75, 0.45)]

LineSet1015.coord = Coordinate1017

Shape1014.geometry = LineSet1015

HAnimSegment978.children.append(Shape1014)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.DEF = "hanim_l_metacarpal_pha2_pt"
HAnimSite1018.name = "l_metacarpal_pha2_pt"
HAnimSite1018.translation = [0.2009,0.8139,-0.0237]
TouchSensor1019 = x3d.TouchSensor()
TouchSensor1019.description = "HAnimSite l_metacarpal_pha2"

HAnimSite1018.children.append(TouchSensor1019)
Shape1020 = x3d.Shape()
Shape1020.USE = "HAnimSiteShape"

HAnimSite1018.children.append(Shape1020)

HAnimSegment978.children.append(HAnimSite1018)
HAnimSite1021 = x3d.HAnimSite()
HAnimSite1021.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1021.name = "l_ulnar_styloid_pt"
HAnimSite1021.translation = [0.2142,0.8529,-0.0648]
TouchSensor1022 = x3d.TouchSensor()
TouchSensor1022.description = "HAnimSite l_ulnar_styloid"

HAnimSite1021.children.append(TouchSensor1022)
Shape1023 = x3d.Shape()
Shape1023.USE = "HAnimSiteShape"

HAnimSite1021.children.append(Shape1023)

HAnimSegment978.children.append(HAnimSite1021)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.DEF = "hanim_l_metacarpal_pha5_pt"
HAnimSite1024.name = "l_metacarpal_pha5_pt"
HAnimSite1024.translation = [0.1929,0.786,-0.1122]
TouchSensor1025 = x3d.TouchSensor()
TouchSensor1025.description = "HAnimSite l_metacarpal_pha5"

HAnimSite1024.children.append(TouchSensor1025)
Shape1026 = x3d.Shape()
Shape1026.USE = "HAnimSiteShape"

HAnimSite1024.children.append(Shape1026)

HAnimSegment978.children.append(HAnimSite1024)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.DEF = "hanim_l_hand_front_view"
HAnimSite1027.name = "l_hand_front_view"
HAnimSite1027.translation = [0.3,0.75,0.45]
Viewpoint1028 = x3d.Viewpoint()
Viewpoint1028.DEF = "hanim_l_hand_front_viewpoint"
Viewpoint1028.description = "left hand front"
Viewpoint1028.position = [0,0,0]
Viewpoint1028.centerOfRotation = [0,0.7,0]

HAnimSite1027.children.append(Viewpoint1028)
Anchor1029 = x3d.Anchor()
Anchor1029.description = "HAnimSite Viewpoint hanim_l_hand_front_view"
Anchor1029.url = ["#hanim_l_hand_front_viewpoint"]
LOD1030 = x3d.LOD()
LOD1030.forceTransitions = True
LOD1030.range = [0.04]
WorldInfo1031 = x3d.WorldInfo()
WorldInfo1031.info = ["hide diamond when close"]

LOD1030.children.append(WorldInfo1031)
Shape1032 = x3d.Shape()
Shape1032.USE = "HAnimSiteViewpointShape"

LOD1030.children.append(Shape1032)

Anchor1029.children.append(LOD1030)

HAnimSite1027.children.append(Anchor1029)

HAnimSegment978.children.append(HAnimSite1027)

HAnimJoint977.children.append(HAnimSegment978)
HAnimJoint1033 = x3d.HAnimJoint()
HAnimJoint1033.DEF = "hanim_l_thumb1"
HAnimJoint1033.name = "l_thumb1"
HAnimJoint1033.rotation = [1,0,0,0.270107235459875]
HAnimJoint1033.center = [0.1924,0.8472,-0.0534]
HAnimSegment1034 = x3d.HAnimSegment()
HAnimSegment1034.DEF = "hanim_l_thumb_metacarpal"
HAnimSegment1034.name = "l_thumb_metacarpal"
TouchSensor1035 = x3d.TouchSensor()
TouchSensor1035.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"

HAnimSegment1034.children.append(TouchSensor1035)
Transform1036 = x3d.Transform()
Transform1036.translation = [0.1924,0.8472,-0.0534]
Shape1037 = x3d.Shape()
Shape1037.USE = "HAnimJointShape"

Transform1036.children.append(Shape1037)

HAnimSegment1034.children.append(Transform1036)
Shape1038 = x3d.Shape()
LineSet1039 = x3d.LineSet()
LineSet1039.vertexCount = [2]
ColorRGBA1040 = x3d.ColorRGBA()
ColorRGBA1040.USE = "HAnimSegmentLineColorRGBA"

LineSet1039.color = ColorRGBA1040
Coordinate1041 = x3d.Coordinate()
Coordinate1041.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1039.coord = Coordinate1041

Shape1038.geometry = LineSet1039

HAnimSegment1034.children.append(Shape1038)

HAnimJoint1033.children.append(HAnimSegment1034)
HAnimJoint1042 = x3d.HAnimJoint()
HAnimJoint1042.DEF = "hanim_l_thumb2"
HAnimJoint1042.name = "l_thumb2"
HAnimJoint1042.center = [0.1951,0.8226,0.0246]
HAnimSegment1043 = x3d.HAnimSegment()
HAnimSegment1043.DEF = "hanim_l_thumb_proximal"
HAnimSegment1043.name = "l_thumb_proximal"
TouchSensor1044 = x3d.TouchSensor()
TouchSensor1044.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"

HAnimSegment1043.children.append(TouchSensor1044)
Transform1045 = x3d.Transform()
Transform1045.translation = [0.1951,0.8226,0.0246]
Shape1046 = x3d.Shape()
Shape1046.USE = "HAnimJointShape"

Transform1045.children.append(Shape1046)

HAnimSegment1043.children.append(Transform1045)
Shape1047 = x3d.Shape()
LineSet1048 = x3d.LineSet()
LineSet1048.vertexCount = [2]
ColorRGBA1049 = x3d.ColorRGBA()
ColorRGBA1049.USE = "HAnimSegmentLineColorRGBA"

LineSet1048.color = ColorRGBA1049
Coordinate1050 = x3d.Coordinate()
Coordinate1050.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1048.coord = Coordinate1050

Shape1047.geometry = LineSet1048

HAnimSegment1043.children.append(Shape1047)

HAnimJoint1042.children.append(HAnimSegment1043)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.DEF = "hanim_l_thumb3"
HAnimJoint1051.name = "l_thumb3"
HAnimJoint1051.center = [0.1955,0.8159,0.0464]
HAnimSegment1052 = x3d.HAnimSegment()
HAnimSegment1052.DEF = "hanim_l_thumb_distal"
HAnimSegment1052.name = "l_thumb_distal"
TouchSensor1053 = x3d.TouchSensor()
TouchSensor1053.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"

HAnimSegment1052.children.append(TouchSensor1053)
Transform1054 = x3d.Transform()
Transform1054.translation = [0.1955,0.8159,0.0464]
Shape1055 = x3d.Shape()
Shape1055.USE = "HAnimJointShape"

Transform1054.children.append(Shape1055)

HAnimSegment1052.children.append(Transform1054)
Shape1056 = x3d.Shape()
LineSet1057 = x3d.LineSet()
LineSet1057.vertexCount = [2]
ColorRGBA1058 = x3d.ColorRGBA()
ColorRGBA1058.USE = "HAnimSiteLineColorRGBA"

LineSet1057.color = ColorRGBA1058
Coordinate1059 = x3d.Coordinate()
Coordinate1059.point = [(0.1955, 0.8159, 0.0464),(0.1982, 0.8061, 0.0759)]

LineSet1057.coord = Coordinate1059

Shape1056.geometry = LineSet1057

HAnimSegment1052.children.append(Shape1056)
HAnimSite1060 = x3d.HAnimSite()
HAnimSite1060.DEF = "hanim_l_thumb_distal_tip"
HAnimSite1060.name = "l_thumb_distal_tip"
HAnimSite1060.translation = [0.1982,0.8061,0.0759]
TouchSensor1061 = x3d.TouchSensor()
TouchSensor1061.description = "HAnimSite l_thumb_distal_tip"

HAnimSite1060.children.append(TouchSensor1061)
Shape1062 = x3d.Shape()
Shape1062.USE = "HAnimSiteShape"

HAnimSite1060.children.append(Shape1062)

HAnimSegment1052.children.append(HAnimSite1060)

HAnimJoint1051.children.append(HAnimSegment1052)

HAnimJoint1042.children.append(HAnimJoint1051)

HAnimJoint1033.children.append(HAnimJoint1042)

HAnimJoint977.children.append(HAnimJoint1033)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.DEF = "hanim_l_index0"
HAnimJoint1063.name = "l_index0"
HAnimJoint1063.center = [0.1983,0.8024,-0.028]
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.DEF = "hanim_l_index_metacarpal"
HAnimSegment1064.name = "l_index_metacarpal"
TouchSensor1065 = x3d.TouchSensor()
TouchSensor1065.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal"

HAnimSegment1064.children.append(TouchSensor1065)
Transform1066 = x3d.Transform()
Transform1066.translation = [0.1983,0.8024,-0.028]
Shape1067 = x3d.Shape()
Shape1067.USE = "HAnimJointShape"

Transform1066.children.append(Shape1067)

HAnimSegment1064.children.append(Transform1066)
Shape1068 = x3d.Shape()
LineSet1069 = x3d.LineSet()
LineSet1069.vertexCount = [2]
ColorRGBA1070 = x3d.ColorRGBA()
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA"

LineSet1069.color = ColorRGBA1070
Coordinate1071 = x3d.Coordinate()
Coordinate1071.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1069.coord = Coordinate1071

Shape1068.geometry = LineSet1069

HAnimSegment1064.children.append(Shape1068)

HAnimJoint1063.children.append(HAnimSegment1064)
HAnimJoint1072 = x3d.HAnimJoint()
HAnimJoint1072.DEF = "hanim_l_index1"
HAnimJoint1072.name = "l_index1"
HAnimJoint1072.center = [0.1983,0.7815,-0.028]
HAnimSegment1073 = x3d.HAnimSegment()
HAnimSegment1073.DEF = "hanim_l_index_proximal"
HAnimSegment1073.name = "l_index_proximal"
TouchSensor1074 = x3d.TouchSensor()
TouchSensor1074.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal"

HAnimSegment1073.children.append(TouchSensor1074)
Transform1075 = x3d.Transform()
Transform1075.translation = [0.1983,0.7815,-0.028]
Shape1076 = x3d.Shape()
Shape1076.USE = "HAnimJointShape"

Transform1075.children.append(Shape1076)

HAnimSegment1073.children.append(Transform1075)
Shape1077 = x3d.Shape()
LineSet1078 = x3d.LineSet()
LineSet1078.vertexCount = [2]
ColorRGBA1079 = x3d.ColorRGBA()
ColorRGBA1079.USE = "HAnimSegmentLineColorRGBA"

LineSet1078.color = ColorRGBA1079
Coordinate1080 = x3d.Coordinate()
Coordinate1080.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1078.coord = Coordinate1080

Shape1077.geometry = LineSet1078

HAnimSegment1073.children.append(Shape1077)

HAnimJoint1072.children.append(HAnimSegment1073)
HAnimJoint1081 = x3d.HAnimJoint()
HAnimJoint1081.DEF = "hanim_l_index2"
HAnimJoint1081.name = "l_index2"
HAnimJoint1081.center = [0.2017,0.7363,-0.0248]
HAnimSegment1082 = x3d.HAnimSegment()
HAnimSegment1082.DEF = "hanim_l_index_middle"
HAnimSegment1082.name = "l_index_middle"
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "HAnimJoint l_index2, HAnimSegment l_index_middle"

HAnimSegment1082.children.append(TouchSensor1083)
Transform1084 = x3d.Transform()
Transform1084.translation = [0.2017,0.7363,-0.0248]
Shape1085 = x3d.Shape()
Shape1085.USE = "HAnimJointShape"

Transform1084.children.append(Shape1085)

HAnimSegment1082.children.append(Transform1084)
Shape1086 = x3d.Shape()
LineSet1087 = x3d.LineSet()
LineSet1087.vertexCount = [2]
ColorRGBA1088 = x3d.ColorRGBA()
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA"

LineSet1087.color = ColorRGBA1088
Coordinate1089 = x3d.Coordinate()
Coordinate1089.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1087.coord = Coordinate1089

Shape1086.geometry = LineSet1087

HAnimSegment1082.children.append(Shape1086)

HAnimJoint1081.children.append(HAnimSegment1082)
HAnimJoint1090 = x3d.HAnimJoint()
HAnimJoint1090.DEF = "hanim_l_index3"
HAnimJoint1090.name = "l_index3"
HAnimJoint1090.center = [0.2028,0.7139,-0.0236]
HAnimSegment1091 = x3d.HAnimSegment()
HAnimSegment1091.DEF = "hanim_l_index_distal"
HAnimSegment1091.name = "l_index_distal"
TouchSensor1092 = x3d.TouchSensor()
TouchSensor1092.description = "HAnimJoint l_index3, HAnimSegment l_index_distal"

HAnimSegment1091.children.append(TouchSensor1092)
Transform1093 = x3d.Transform()
Transform1093.translation = [0.2028,0.7139,-0.0236]
Shape1094 = x3d.Shape()
Shape1094.USE = "HAnimJointShape"

Transform1093.children.append(Shape1094)

HAnimSegment1091.children.append(Transform1093)
Shape1095 = x3d.Shape()
LineSet1096 = x3d.LineSet()
LineSet1096.vertexCount = [2]
ColorRGBA1097 = x3d.ColorRGBA()
ColorRGBA1097.USE = "HAnimSiteLineColorRGBA"

LineSet1096.color = ColorRGBA1097
Coordinate1098 = x3d.Coordinate()
Coordinate1098.point = [(0.2028, 0.7139, -0.0236),(0.2089, 0.6858, -0.0245)]

LineSet1096.coord = Coordinate1098

Shape1095.geometry = LineSet1096

HAnimSegment1091.children.append(Shape1095)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.vertexCount = [2]
ColorRGBA1101 = x3d.ColorRGBA()
ColorRGBA1101.USE = "HAnimSiteLineColorRGBA"

LineSet1100.color = ColorRGBA1101
Coordinate1102 = x3d.Coordinate()
Coordinate1102.point = [(0.2028, 0.7139, -0.0236),(0.2056, 0.6743, -0.0482)]

LineSet1100.coord = Coordinate1102

Shape1099.geometry = LineSet1100

HAnimSegment1091.children.append(Shape1099)
HAnimSite1103 = x3d.HAnimSite()
HAnimSite1103.DEF = "hanim_l_index_distal_tip"
HAnimSite1103.name = "l_index_distal_tip"
HAnimSite1103.translation = [0.2089,0.6858,-0.0245]
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.description = "HAnimSite l_index_distal_tip"

HAnimSite1103.children.append(TouchSensor1104)
Shape1105 = x3d.Shape()
Shape1105.USE = "HAnimSiteShape"

HAnimSite1103.children.append(Shape1105)

HAnimSegment1091.children.append(HAnimSite1103)
HAnimSite1106 = x3d.HAnimSite()
HAnimSite1106.DEF = "hanim_l_dactylion_pt"
HAnimSite1106.name = "l_dactylion_pt"
HAnimSite1106.translation = [0.2056,0.6743,-0.0482]
TouchSensor1107 = x3d.TouchSensor()
TouchSensor1107.description = "HAnimSite l_dactylion"

HAnimSite1106.children.append(TouchSensor1107)
Shape1108 = x3d.Shape()
Shape1108.USE = "HAnimSiteShape"

HAnimSite1106.children.append(Shape1108)

HAnimSegment1091.children.append(HAnimSite1106)

HAnimJoint1090.children.append(HAnimSegment1091)

HAnimJoint1081.children.append(HAnimJoint1090)

HAnimJoint1072.children.append(HAnimJoint1081)

HAnimJoint1063.children.append(HAnimJoint1072)

HAnimJoint977.children.append(HAnimJoint1063)
HAnimJoint1109 = x3d.HAnimJoint()
HAnimJoint1109.DEF = "hanim_l_middle0"
HAnimJoint1109.name = "l_middle0"
HAnimJoint1109.center = [0.1987,0.8029,-0.053]
HAnimSegment1110 = x3d.HAnimSegment()
HAnimSegment1110.DEF = "hanim_l_middle_metacarpal"
HAnimSegment1110.name = "l_middle_metacarpal"
TouchSensor1111 = x3d.TouchSensor()
TouchSensor1111.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"

HAnimSegment1110.children.append(TouchSensor1111)
Transform1112 = x3d.Transform()
Transform1112.translation = [0.1987,0.8029,-0.053]
Shape1113 = x3d.Shape()
Shape1113.USE = "HAnimJointShape"

Transform1112.children.append(Shape1113)

HAnimSegment1110.children.append(Transform1112)
Shape1114 = x3d.Shape()
LineSet1115 = x3d.LineSet()
LineSet1115.vertexCount = [2]
ColorRGBA1116 = x3d.ColorRGBA()
ColorRGBA1116.USE = "HAnimSegmentLineColorRGBA"

LineSet1115.color = ColorRGBA1116
Coordinate1117 = x3d.Coordinate()
Coordinate1117.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1115.coord = Coordinate1117

Shape1114.geometry = LineSet1115

HAnimSegment1110.children.append(Shape1114)

HAnimJoint1109.children.append(HAnimSegment1110)
HAnimJoint1118 = x3d.HAnimJoint()
HAnimJoint1118.DEF = "hanim_l_middle1"
HAnimJoint1118.name = "l_middle1"
HAnimJoint1118.center = [0.1987,0.7818,-0.053]
HAnimSegment1119 = x3d.HAnimSegment()
HAnimSegment1119.DEF = "hanim_l_middle_proximal"
HAnimSegment1119.name = "l_middle_proximal"
TouchSensor1120 = x3d.TouchSensor()
TouchSensor1120.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal"

HAnimSegment1119.children.append(TouchSensor1120)
Transform1121 = x3d.Transform()
Transform1121.translation = [0.1987,0.7818,-0.053]
Shape1122 = x3d.Shape()
Shape1122.USE = "HAnimJointShape"

Transform1121.children.append(Shape1122)

HAnimSegment1119.children.append(Transform1121)
Shape1123 = x3d.Shape()
LineSet1124 = x3d.LineSet()
LineSet1124.vertexCount = [2]
ColorRGBA1125 = x3d.ColorRGBA()
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA"

LineSet1124.color = ColorRGBA1125
Coordinate1126 = x3d.Coordinate()
Coordinate1126.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1124.coord = Coordinate1126

Shape1123.geometry = LineSet1124

HAnimSegment1119.children.append(Shape1123)

HAnimJoint1118.children.append(HAnimSegment1119)
HAnimJoint1127 = x3d.HAnimJoint()
HAnimJoint1127.DEF = "hanim_l_middle2"
HAnimJoint1127.name = "l_middle2"
HAnimJoint1127.center = [0.2013,0.7273,-0.0503]
HAnimSegment1128 = x3d.HAnimSegment()
HAnimSegment1128.DEF = "hanim_l_middle_middle"
HAnimSegment1128.name = "l_middle_middle"
TouchSensor1129 = x3d.TouchSensor()
TouchSensor1129.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle"

HAnimSegment1128.children.append(TouchSensor1129)
Transform1130 = x3d.Transform()
Transform1130.translation = [0.2013,0.7273,-0.0503]
Shape1131 = x3d.Shape()
Shape1131.USE = "HAnimJointShape"

Transform1130.children.append(Shape1131)

HAnimSegment1128.children.append(Transform1130)
Shape1132 = x3d.Shape()
LineSet1133 = x3d.LineSet()
LineSet1133.vertexCount = [2]
ColorRGBA1134 = x3d.ColorRGBA()
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA"

LineSet1133.color = ColorRGBA1134
Coordinate1135 = x3d.Coordinate()
Coordinate1135.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1133.coord = Coordinate1135

Shape1132.geometry = LineSet1133

HAnimSegment1128.children.append(Shape1132)

HAnimJoint1127.children.append(HAnimSegment1128)
HAnimJoint1136 = x3d.HAnimJoint()
HAnimJoint1136.DEF = "hanim_l_middle3"
HAnimJoint1136.name = "l_middle3"
HAnimJoint1136.center = [0.2026,0.7011,-0.0494]
HAnimSegment1137 = x3d.HAnimSegment()
HAnimSegment1137.DEF = "hanim_l_middle_distal"
HAnimSegment1137.name = "l_middle_distal"
TouchSensor1138 = x3d.TouchSensor()
TouchSensor1138.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal"

HAnimSegment1137.children.append(TouchSensor1138)
Transform1139 = x3d.Transform()
Transform1139.translation = [0.2026,0.7011,-0.0494]
Shape1140 = x3d.Shape()
Shape1140.USE = "HAnimJointShape"

Transform1139.children.append(Shape1140)

HAnimSegment1137.children.append(Transform1139)
Shape1141 = x3d.Shape()
LineSet1142 = x3d.LineSet()
LineSet1142.vertexCount = [2]
ColorRGBA1143 = x3d.ColorRGBA()
ColorRGBA1143.USE = "HAnimSiteLineColorRGBA"

LineSet1142.color = ColorRGBA1143
Coordinate1144 = x3d.Coordinate()
Coordinate1144.point = [(0.2026, 0.7011, -0.0494),(0.208, 0.6731, -0.0491)]

LineSet1142.coord = Coordinate1144

Shape1141.geometry = LineSet1142

HAnimSegment1137.children.append(Shape1141)
HAnimSite1145 = x3d.HAnimSite()
HAnimSite1145.DEF = "hanim_l_middle_distal_tip"
HAnimSite1145.name = "l_middle_distal_tip"
HAnimSite1145.translation = [0.208,0.6731,-0.0491]
TouchSensor1146 = x3d.TouchSensor()
TouchSensor1146.description = "HAnimSite l_middle_distal_tip"

HAnimSite1145.children.append(TouchSensor1146)
Shape1147 = x3d.Shape()
Shape1147.USE = "HAnimSiteShape"

HAnimSite1145.children.append(Shape1147)

HAnimSegment1137.children.append(HAnimSite1145)

HAnimJoint1136.children.append(HAnimSegment1137)

HAnimJoint1127.children.append(HAnimJoint1136)

HAnimJoint1118.children.append(HAnimJoint1127)

HAnimJoint1109.children.append(HAnimJoint1118)

HAnimJoint977.children.append(HAnimJoint1109)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.DEF = "hanim_l_ring0"
HAnimJoint1148.name = "l_ring0"
HAnimJoint1148.center = [0.1956,0.8019,-0.0794]
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.DEF = "hanim_l_ring_metacarpal"
HAnimSegment1149.name = "l_ring_metacarpal"
TouchSensor1150 = x3d.TouchSensor()
TouchSensor1150.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"

HAnimSegment1149.children.append(TouchSensor1150)
Transform1151 = x3d.Transform()
Transform1151.translation = [0.1956,0.8019,-0.0794]
Shape1152 = x3d.Shape()
Shape1152.USE = "HAnimJointShape"

Transform1151.children.append(Shape1152)

HAnimSegment1149.children.append(Transform1151)
Shape1153 = x3d.Shape()
LineSet1154 = x3d.LineSet()
LineSet1154.vertexCount = [2]
ColorRGBA1155 = x3d.ColorRGBA()
ColorRGBA1155.USE = "HAnimSegmentLineColorRGBA"

LineSet1154.color = ColorRGBA1155
Coordinate1156 = x3d.Coordinate()
Coordinate1156.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1154.coord = Coordinate1156

Shape1153.geometry = LineSet1154

HAnimSegment1149.children.append(Shape1153)

HAnimJoint1148.children.append(HAnimSegment1149)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.DEF = "hanim_l_ring1"
HAnimJoint1157.name = "l_ring1"
HAnimJoint1157.center = [0.1956,0.7815,-0.0794]
HAnimSegment1158 = x3d.HAnimSegment()
HAnimSegment1158.DEF = "hanim_l_ring_proximal"
HAnimSegment1158.name = "l_ring_proximal"
TouchSensor1159 = x3d.TouchSensor()
TouchSensor1159.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal"

HAnimSegment1158.children.append(TouchSensor1159)
Transform1160 = x3d.Transform()
Transform1160.translation = [0.1956,0.7815,-0.0794]
Shape1161 = x3d.Shape()
Shape1161.USE = "HAnimJointShape"

Transform1160.children.append(Shape1161)

HAnimSegment1158.children.append(Transform1160)
Shape1162 = x3d.Shape()
LineSet1163 = x3d.LineSet()
LineSet1163.vertexCount = [2]
ColorRGBA1164 = x3d.ColorRGBA()
ColorRGBA1164.USE = "HAnimSegmentLineColorRGBA"

LineSet1163.color = ColorRGBA1164
Coordinate1165 = x3d.Coordinate()
Coordinate1165.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1163.coord = Coordinate1165

Shape1162.geometry = LineSet1163

HAnimSegment1158.children.append(Shape1162)

HAnimJoint1157.children.append(HAnimSegment1158)
HAnimJoint1166 = x3d.HAnimJoint()
HAnimJoint1166.DEF = "hanim_l_ring2"
HAnimJoint1166.name = "l_ring2"
HAnimJoint1166.center = [0.1973,0.7287,-0.0777]
HAnimSegment1167 = x3d.HAnimSegment()
HAnimSegment1167.DEF = "hanim_l_ring_middle"
HAnimSegment1167.name = "l_ring_middle"
TouchSensor1168 = x3d.TouchSensor()
TouchSensor1168.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle"

HAnimSegment1167.children.append(TouchSensor1168)
Transform1169 = x3d.Transform()
Transform1169.translation = [0.1973,0.7287,-0.0777]
Shape1170 = x3d.Shape()
Shape1170.USE = "HAnimJointShape"

Transform1169.children.append(Shape1170)

HAnimSegment1167.children.append(Transform1169)
Shape1171 = x3d.Shape()
LineSet1172 = x3d.LineSet()
LineSet1172.vertexCount = [2]
ColorRGBA1173 = x3d.ColorRGBA()
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA"

LineSet1172.color = ColorRGBA1173
Coordinate1174 = x3d.Coordinate()
Coordinate1174.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1172.coord = Coordinate1174

Shape1171.geometry = LineSet1172

HAnimSegment1167.children.append(Shape1171)

HAnimJoint1166.children.append(HAnimSegment1167)
HAnimJoint1175 = x3d.HAnimJoint()
HAnimJoint1175.DEF = "hanim_l_ring3"
HAnimJoint1175.name = "l_ring3"
HAnimJoint1175.center = [0.1983,0.7045,-0.0767]
HAnimSegment1176 = x3d.HAnimSegment()
HAnimSegment1176.DEF = "hanim_l_ring_distal"
HAnimSegment1176.name = "l_ring_distal"
TouchSensor1177 = x3d.TouchSensor()
TouchSensor1177.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal"

HAnimSegment1176.children.append(TouchSensor1177)
Transform1178 = x3d.Transform()
Transform1178.translation = [0.1983,0.7045,-0.0767]
Shape1179 = x3d.Shape()
Shape1179.USE = "HAnimJointShape"

Transform1178.children.append(Shape1179)

HAnimSegment1176.children.append(Transform1178)
Shape1180 = x3d.Shape()
LineSet1181 = x3d.LineSet()
LineSet1181.vertexCount = [2]
ColorRGBA1182 = x3d.ColorRGBA()
ColorRGBA1182.USE = "HAnimSiteLineColorRGBA"

LineSet1181.color = ColorRGBA1182
Coordinate1183 = x3d.Coordinate()
Coordinate1183.point = [(0.1983, 0.7045, -0.0767),(0.2035, 0.675, -0.0756)]

LineSet1181.coord = Coordinate1183

Shape1180.geometry = LineSet1181

HAnimSegment1176.children.append(Shape1180)
HAnimSite1184 = x3d.HAnimSite()
HAnimSite1184.DEF = "hanim_l_ring_distal_tip"
HAnimSite1184.name = "l_ring_distal_tip"
HAnimSite1184.translation = [0.2035,0.675,-0.0756]
TouchSensor1185 = x3d.TouchSensor()
TouchSensor1185.description = "HAnimSite l_ring_distal_tip"

HAnimSite1184.children.append(TouchSensor1185)
Shape1186 = x3d.Shape()
Shape1186.USE = "HAnimSiteShape"

HAnimSite1184.children.append(Shape1186)

HAnimSegment1176.children.append(HAnimSite1184)

HAnimJoint1175.children.append(HAnimSegment1176)

HAnimJoint1166.children.append(HAnimJoint1175)

HAnimJoint1157.children.append(HAnimJoint1166)

HAnimJoint1148.children.append(HAnimJoint1157)

HAnimJoint977.children.append(HAnimJoint1148)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.DEF = "hanim_l_pinky0"
HAnimJoint1187.name = "l_pinky0"
HAnimJoint1187.center = [0.1925,0.8066,-0.1036]
HAnimSegment1188 = x3d.HAnimSegment()
HAnimSegment1188.DEF = "hanim_l_pinky_metacarpal"
HAnimSegment1188.name = "l_pinky_metacarpal"
TouchSensor1189 = x3d.TouchSensor()
TouchSensor1189.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"

HAnimSegment1188.children.append(TouchSensor1189)
Transform1190 = x3d.Transform()
Transform1190.translation = [0.1925,0.8066,-0.1036]
Shape1191 = x3d.Shape()
Shape1191.USE = "HAnimJointShape"

Transform1190.children.append(Shape1191)

HAnimSegment1188.children.append(Transform1190)
Shape1192 = x3d.Shape()
LineSet1193 = x3d.LineSet()
LineSet1193.vertexCount = [2]
ColorRGBA1194 = x3d.ColorRGBA()
ColorRGBA1194.USE = "HAnimSegmentLineColorRGBA"

LineSet1193.color = ColorRGBA1194
Coordinate1195 = x3d.Coordinate()
Coordinate1195.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1193.coord = Coordinate1195

Shape1192.geometry = LineSet1193

HAnimSegment1188.children.append(Shape1192)

HAnimJoint1187.children.append(HAnimSegment1188)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.DEF = "hanim_l_pinky1"
HAnimJoint1196.name = "l_pinky1"
HAnimJoint1196.center = [0.1925,0.7866,-0.1036]
HAnimSegment1197 = x3d.HAnimSegment()
HAnimSegment1197.DEF = "hanim_l_pinky_proximal"
HAnimSegment1197.name = "l_pinky_proximal"
TouchSensor1198 = x3d.TouchSensor()
TouchSensor1198.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"

HAnimSegment1197.children.append(TouchSensor1198)
Transform1199 = x3d.Transform()
Transform1199.translation = [0.1925,0.7866,-0.1036]
Shape1200 = x3d.Shape()
Shape1200.USE = "HAnimJointShape"

Transform1199.children.append(Shape1200)

HAnimSegment1197.children.append(Transform1199)
Shape1201 = x3d.Shape()
LineSet1202 = x3d.LineSet()
LineSet1202.vertexCount = [2]
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA"

LineSet1202.color = ColorRGBA1203
Coordinate1204 = x3d.Coordinate()
Coordinate1204.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1202.coord = Coordinate1204

Shape1201.geometry = LineSet1202

HAnimSegment1197.children.append(Shape1201)

HAnimJoint1196.children.append(HAnimSegment1197)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.DEF = "hanim_l_pinky2"
HAnimJoint1205.name = "l_pinky2"
HAnimJoint1205.center = [0.1938,0.7452,-0.1024]
HAnimSegment1206 = x3d.HAnimSegment()
HAnimSegment1206.DEF = "hanim_l_pinky_middle"
HAnimSegment1206.name = "l_pinky_middle"
TouchSensor1207 = x3d.TouchSensor()
TouchSensor1207.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"

HAnimSegment1206.children.append(TouchSensor1207)
Transform1208 = x3d.Transform()
Transform1208.translation = [0.1938,0.7452,-0.1024]
Shape1209 = x3d.Shape()
Shape1209.USE = "HAnimJointShape"

Transform1208.children.append(Shape1209)

HAnimSegment1206.children.append(Transform1208)
Shape1210 = x3d.Shape()
LineSet1211 = x3d.LineSet()
LineSet1211.vertexCount = [2]
ColorRGBA1212 = x3d.ColorRGBA()
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA"

LineSet1211.color = ColorRGBA1212
Coordinate1213 = x3d.Coordinate()
Coordinate1213.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1211.coord = Coordinate1213

Shape1210.geometry = LineSet1211

HAnimSegment1206.children.append(Shape1210)

HAnimJoint1205.children.append(HAnimSegment1206)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.DEF = "hanim_l_pinky3"
HAnimJoint1214.name = "l_pinky3"
HAnimJoint1214.center = [0.1948,0.7277,-0.1017]
HAnimSegment1215 = x3d.HAnimSegment()
HAnimSegment1215.DEF = "hanim_l_pinky_distal"
HAnimSegment1215.name = "l_pinky_distal"
TouchSensor1216 = x3d.TouchSensor()
TouchSensor1216.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"

HAnimSegment1215.children.append(TouchSensor1216)
Transform1217 = x3d.Transform()
Transform1217.translation = [0.1948,0.7277,-0.1017]
Shape1218 = x3d.Shape()
Shape1218.USE = "HAnimJointShape"

Transform1217.children.append(Shape1218)

HAnimSegment1215.children.append(Transform1217)
Shape1219 = x3d.Shape()
LineSet1220 = x3d.LineSet()
LineSet1220.vertexCount = [2]
ColorRGBA1221 = x3d.ColorRGBA()
ColorRGBA1221.USE = "HAnimSiteLineColorRGBA"

LineSet1220.color = ColorRGBA1221
Coordinate1222 = x3d.Coordinate()
Coordinate1222.point = [(0.1948, 0.7277, -0.1017),(0.2014, 0.7009, -0.1012)]

LineSet1220.coord = Coordinate1222

Shape1219.geometry = LineSet1220

HAnimSegment1215.children.append(Shape1219)
HAnimSite1223 = x3d.HAnimSite()
HAnimSite1223.DEF = "hanim_l_pinky_distal_tip"
HAnimSite1223.name = "l_pinky_distal_tip"
HAnimSite1223.translation = [0.2014,0.7009,-0.1012]
TouchSensor1224 = x3d.TouchSensor()
TouchSensor1224.description = "HAnimSite l_pinky_distal_tip"

HAnimSite1223.children.append(TouchSensor1224)
Shape1225 = x3d.Shape()
Shape1225.USE = "HAnimSiteShape"

HAnimSite1223.children.append(Shape1225)

HAnimSegment1215.children.append(HAnimSite1223)

HAnimJoint1214.children.append(HAnimSegment1215)

HAnimJoint1205.children.append(HAnimJoint1214)

HAnimJoint1196.children.append(HAnimJoint1205)

HAnimJoint1187.children.append(HAnimJoint1196)

HAnimJoint977.children.append(HAnimJoint1187)

HAnimJoint940.children.append(HAnimJoint977)

HAnimJoint924.children.append(HAnimJoint940)

HAnimJoint915.children.append(HAnimJoint924)

HAnimJoint878.children.append(HAnimJoint915)

HAnimJoint594.children.append(HAnimJoint878)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.DEF = "hanim_r_sternoclavicular"
HAnimJoint1226.name = "r_sternoclavicular"
HAnimJoint1226.rotation = [0,0,-1.00000000000003,0.108042894183947]
HAnimJoint1226.center = [-0.082,1.4488,-0.0353]
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.DEF = "hanim_r_clavicle"
HAnimSegment1227.name = "r_clavicle"
TouchSensor1228 = x3d.TouchSensor()
TouchSensor1228.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"

HAnimSegment1227.children.append(TouchSensor1228)
Transform1229 = x3d.Transform()
Transform1229.translation = [-0.082,1.4488,-0.0353]
Shape1230 = x3d.Shape()
Shape1230.USE = "HAnimJointShape"

Transform1229.children.append(Shape1230)

HAnimSegment1227.children.append(Transform1229)
Shape1231 = x3d.Shape()
LineSet1232 = x3d.LineSet()
LineSet1232.vertexCount = [2]
ColorRGBA1233 = x3d.ColorRGBA()
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA"

LineSet1232.color = ColorRGBA1233
Coordinate1234 = x3d.Coordinate()
Coordinate1234.point = [(-0.082, 1.4488, -0.0353),(-0.0962, 1.4269, -0.0424)]

LineSet1232.coord = Coordinate1234

Shape1231.geometry = LineSet1232

HAnimSegment1227.children.append(Shape1231)
Shape1235 = x3d.Shape()
LineSet1236 = x3d.LineSet()
LineSet1236.vertexCount = [2]
ColorRGBA1237 = x3d.ColorRGBA()
ColorRGBA1237.USE = "HAnimSiteLineColorRGBA"

LineSet1236.color = ColorRGBA1237
Coordinate1238 = x3d.Coordinate()
Coordinate1238.point = [(-0.082, 1.4488, -0.0353),(-0.0115, 1.4943, 0.04)]

LineSet1236.coord = Coordinate1238

Shape1235.geometry = LineSet1236

HAnimSegment1227.children.append(Shape1235)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.vertexCount = [2]
ColorRGBA1241 = x3d.ColorRGBA()
ColorRGBA1241.USE = "HAnimSiteLineColorRGBA"

LineSet1240.color = ColorRGBA1241
Coordinate1242 = x3d.Coordinate()
Coordinate1242.point = [(-0.082, 1.4488, -0.0353),(-0.1905, 1.4791, -0.0431)]

LineSet1240.coord = Coordinate1242

Shape1239.geometry = LineSet1240

HAnimSegment1227.children.append(Shape1239)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.vertexCount = [2]
ColorRGBA1245 = x3d.ColorRGBA()
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA"

LineSet1244.color = ColorRGBA1245
Coordinate1246 = x3d.Coordinate()
Coordinate1246.point = [(-0.082, 1.4488, -0.0353),(-0.1626, 1.4072, -0.0031)]

LineSet1244.coord = Coordinate1246

Shape1243.geometry = LineSet1244

HAnimSegment1227.children.append(Shape1243)
Shape1247 = x3d.Shape()
LineSet1248 = x3d.LineSet()
LineSet1248.vertexCount = [2]
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA"

LineSet1248.color = ColorRGBA1249
Coordinate1250 = x3d.Coordinate()
Coordinate1250.point = [(-0.082, 1.4488, -0.0353),(-0.1603, 1.4098, -0.0826)]

LineSet1248.coord = Coordinate1250

Shape1247.geometry = LineSet1248

HAnimSegment1227.children.append(Shape1247)
HAnimSite1251 = x3d.HAnimSite()
HAnimSite1251.DEF = "hanim_r_clavicale_pt"
HAnimSite1251.name = "r_clavicale_pt"
HAnimSite1251.translation = [-0.0115,1.4943,0.04]
TouchSensor1252 = x3d.TouchSensor()
TouchSensor1252.description = "HAnimSite r_clavicale"

HAnimSite1251.children.append(TouchSensor1252)
Shape1253 = x3d.Shape()
Shape1253.USE = "HAnimSiteShape"

HAnimSite1251.children.append(Shape1253)

HAnimSegment1227.children.append(HAnimSite1251)
HAnimSite1254 = x3d.HAnimSite()
HAnimSite1254.DEF = "hanim_r_acromion_pt"
HAnimSite1254.name = "r_acromion_pt"
HAnimSite1254.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1255 = x3d.TouchSensor()
TouchSensor1255.description = "HAnimSite r_acromion"

HAnimSite1254.children.append(TouchSensor1255)
Shape1256 = x3d.Shape()
Shape1256.USE = "HAnimSiteShape"

HAnimSite1254.children.append(Shape1256)

HAnimSegment1227.children.append(HAnimSite1254)
HAnimSite1257 = x3d.HAnimSite()
HAnimSite1257.DEF = "hanim_r_axilla_ant_pt"
HAnimSite1257.name = "r_axilla_ant_pt"
HAnimSite1257.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.description = "HAnimSite r_axilla_ant"

HAnimSite1257.children.append(TouchSensor1258)
Shape1259 = x3d.Shape()
Shape1259.USE = "HAnimSiteShape"

HAnimSite1257.children.append(Shape1259)

HAnimSegment1227.children.append(HAnimSite1257)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.DEF = "hanim_r_axilla_post_pt"
HAnimSite1260.name = "r_axilla_post_pt"
HAnimSite1260.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.description = "HAnimSite r_axilla_post"

HAnimSite1260.children.append(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.USE = "HAnimSiteShape"

HAnimSite1260.children.append(Shape1262)

HAnimSegment1227.children.append(HAnimSite1260)

HAnimJoint1226.children.append(HAnimSegment1227)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.DEF = "hanim_r_acromioclavicular"
HAnimJoint1263.name = "r_acromioclavicular"
HAnimJoint1263.center = [-0.0962,1.4269,-0.0424]
HAnimSegment1264 = x3d.HAnimSegment()
HAnimSegment1264.DEF = "hanim_r_scapula"
HAnimSegment1264.name = "r_scapula"
TouchSensor1265 = x3d.TouchSensor()
TouchSensor1265.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"

HAnimSegment1264.children.append(TouchSensor1265)
Transform1266 = x3d.Transform()
Transform1266.translation = [-0.0962,1.4269,-0.0424]
Shape1267 = x3d.Shape()
Shape1267.USE = "HAnimJointShape"

Transform1266.children.append(Shape1267)

HAnimSegment1264.children.append(Transform1266)
Shape1268 = x3d.Shape()
LineSet1269 = x3d.LineSet()
LineSet1269.vertexCount = [2]
ColorRGBA1270 = x3d.ColorRGBA()
ColorRGBA1270.USE = "HAnimSegmentLineColorRGBA"

LineSet1269.color = ColorRGBA1270
Coordinate1271 = x3d.Coordinate()
Coordinate1271.point = [(-0.0962, 1.4269, -0.0424),(-0.2029, 1.4376, -0.0387)]

LineSet1269.coord = Coordinate1271

Shape1268.geometry = LineSet1269

HAnimSegment1264.children.append(Shape1268)

HAnimJoint1263.children.append(HAnimSegment1264)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.DEF = "hanim_r_shoulder"
HAnimJoint1272.name = "r_shoulder"
HAnimJoint1272.rotation = [0,0,-1,0.950777468818762]
HAnimJoint1272.center = [-0.2029,1.4376,-0.0387]
HAnimSegment1273 = x3d.HAnimSegment()
HAnimSegment1273.DEF = "hanim_r_upperarm"
HAnimSegment1273.name = "r_upperarm"
TouchSensor1274 = x3d.TouchSensor()
TouchSensor1274.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm"

HAnimSegment1273.children.append(TouchSensor1274)
Transform1275 = x3d.Transform()
Transform1275.translation = [-0.2029,1.4376,-0.0387]
Shape1276 = x3d.Shape()
Shape1276.USE = "HAnimJointShape"

Transform1275.children.append(Shape1276)

HAnimSegment1273.children.append(Transform1275)
Shape1277 = x3d.Shape()
LineSet1278 = x3d.LineSet()
LineSet1278.vertexCount = [2]
ColorRGBA1279 = x3d.ColorRGBA()
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA"

LineSet1278.color = ColorRGBA1279
Coordinate1280 = x3d.Coordinate()
Coordinate1280.point = [(-0.2029, 1.4376, -0.0387),(-0.2014, 1.1357, -0.0682)]

LineSet1278.coord = Coordinate1280

Shape1277.geometry = LineSet1278

HAnimSegment1273.children.append(Shape1277)
Shape1281 = x3d.Shape()
LineSet1282 = x3d.LineSet()
LineSet1282.vertexCount = [2]
ColorRGBA1283 = x3d.ColorRGBA()
ColorRGBA1283.USE = "HAnimSiteLineColorRGBA"

LineSet1282.color = ColorRGBA1283
Coordinate1284 = x3d.Coordinate()
Coordinate1284.point = [(-0.2029, 1.4376, -0.0387),(-0.2224, 1.1517, -0.1033)]

LineSet1282.coord = Coordinate1284

Shape1281.geometry = LineSet1282

HAnimSegment1273.children.append(Shape1281)
HAnimSite1285 = x3d.HAnimSite()
HAnimSite1285.DEF = "hanim_r_humeral_lateral_epicn_pt"
HAnimSite1285.name = "r_humeral_lateral_epicn_pt"
HAnimSite1285.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1286 = x3d.TouchSensor()
TouchSensor1286.description = "HAnimSite r_humeral_lateral_epicn"

HAnimSite1285.children.append(TouchSensor1286)
Shape1287 = x3d.Shape()
Shape1287.USE = "HAnimSiteShape"

HAnimSite1285.children.append(Shape1287)

HAnimSegment1273.children.append(HAnimSite1285)

HAnimJoint1272.children.append(HAnimSegment1273)
HAnimJoint1288 = x3d.HAnimJoint()
HAnimJoint1288.DEF = "hanim_r_elbow"
HAnimJoint1288.name = "r_elbow"
HAnimJoint1288.rotation = [-1,0,0,0.297117959005863]
HAnimJoint1288.center = [-0.2014,1.1357,-0.0682]
HAnimSegment1289 = x3d.HAnimSegment()
HAnimSegment1289.DEF = "hanim_r_forearm"
HAnimSegment1289.name = "r_forearm"
TouchSensor1290 = x3d.TouchSensor()
TouchSensor1290.description = "HAnimJoint r_elbow, HAnimSegment r_forearm"

HAnimSegment1289.children.append(TouchSensor1290)
Transform1291 = x3d.Transform()
Transform1291.translation = [-0.2014,1.1357,-0.0682]
Shape1292 = x3d.Shape()
Shape1292.USE = "HAnimJointShape"

Transform1291.children.append(Shape1292)

HAnimSegment1289.children.append(Transform1291)
Shape1293 = x3d.Shape()
LineSet1294 = x3d.LineSet()
LineSet1294.vertexCount = [2]
ColorRGBA1295 = x3d.ColorRGBA()
ColorRGBA1295.USE = "HAnimSegmentLineColorRGBA"

LineSet1294.color = ColorRGBA1295
Coordinate1296 = x3d.Coordinate()
Coordinate1296.point = [(-0.2014, 1.1357, -0.0682),(-0.1984, 0.8663, -0.0583)]

LineSet1294.coord = Coordinate1296

Shape1293.geometry = LineSet1294

HAnimSegment1289.children.append(Shape1293)
Shape1297 = x3d.Shape()
LineSet1298 = x3d.LineSet()
LineSet1298.vertexCount = [2]
ColorRGBA1299 = x3d.ColorRGBA()
ColorRGBA1299.USE = "HAnimSiteLineColorRGBA"

LineSet1298.color = ColorRGBA1299
Coordinate1300 = x3d.Coordinate()
Coordinate1300.point = [(-0.2014, 1.1357, -0.0682),(-0.1884, 0.8676, -0.036)]

LineSet1298.coord = Coordinate1300

Shape1297.geometry = LineSet1298

HAnimSegment1289.children.append(Shape1297)
Shape1301 = x3d.Shape()
LineSet1302 = x3d.LineSet()
LineSet1302.vertexCount = [2]
ColorRGBA1303 = x3d.ColorRGBA()
ColorRGBA1303.USE = "HAnimSiteLineColorRGBA"

LineSet1302.color = ColorRGBA1303
Coordinate1304 = x3d.Coordinate()
Coordinate1304.point = [(-0.2014, 1.1357, -0.0682),(-0.1907, 1.1405, -0.1065)]

LineSet1302.coord = Coordinate1304

Shape1301.geometry = LineSet1302

HAnimSegment1289.children.append(Shape1301)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.vertexCount = [2]
ColorRGBA1307 = x3d.ColorRGBA()
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA"

LineSet1306.color = ColorRGBA1307
Coordinate1308 = x3d.Coordinate()
Coordinate1308.point = [(-0.2014, 1.1357, -0.0682),(-0.168, 1.1298, -0.1062)]

LineSet1306.coord = Coordinate1308

Shape1305.geometry = LineSet1306

HAnimSegment1289.children.append(Shape1305)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.vertexCount = [2]
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA"

LineSet1310.color = ColorRGBA1311
Coordinate1312 = x3d.Coordinate()
Coordinate1312.point = [(-0.2014, 1.1357, -0.0682),(-0.213, 1.1305, -0.1091)]

LineSet1310.coord = Coordinate1312

Shape1309.geometry = LineSet1310

HAnimSegment1289.children.append(Shape1309)
HAnimSite1313 = x3d.HAnimSite()
HAnimSite1313.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1313.name = "r_radial_styloid_pt"
HAnimSite1313.translation = [-0.1884,0.8676,-0.036]
TouchSensor1314 = x3d.TouchSensor()
TouchSensor1314.description = "HAnimSite r_radial_styloid"

HAnimSite1313.children.append(TouchSensor1314)
Shape1315 = x3d.Shape()
Shape1315.USE = "HAnimSiteShape"

HAnimSite1313.children.append(Shape1315)

HAnimSegment1289.children.append(HAnimSite1313)
HAnimSite1316 = x3d.HAnimSite()
HAnimSite1316.DEF = "hanim_r_olecranon_pt"
HAnimSite1316.name = "r_olecranon_pt"
HAnimSite1316.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1317 = x3d.TouchSensor()
TouchSensor1317.description = "HAnimSite r_olecranon"

HAnimSite1316.children.append(TouchSensor1317)
Shape1318 = x3d.Shape()
Shape1318.USE = "HAnimSiteShape"

HAnimSite1316.children.append(Shape1318)

HAnimSegment1289.children.append(HAnimSite1316)
HAnimSite1319 = x3d.HAnimSite()
HAnimSite1319.DEF = "hanim_r_humeral_medial_epicn_pt"
HAnimSite1319.name = "r_humeral_medial_epicn_pt"
HAnimSite1319.translation = [-0.168,1.1298,-0.1062]
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.description = "HAnimSite r_humeral_medial_epicn"

HAnimSite1319.children.append(TouchSensor1320)
Shape1321 = x3d.Shape()
Shape1321.USE = "HAnimSiteShape"

HAnimSite1319.children.append(Shape1321)

HAnimSegment1289.children.append(HAnimSite1319)
HAnimSite1322 = x3d.HAnimSite()
HAnimSite1322.DEF = "hanim_r_radiale_pt"
HAnimSite1322.name = "r_radiale_pt"
HAnimSite1322.translation = [-0.213,1.1305,-0.1091]
TouchSensor1323 = x3d.TouchSensor()
TouchSensor1323.description = "HAnimSite r_radiale"

HAnimSite1322.children.append(TouchSensor1323)
Shape1324 = x3d.Shape()
Shape1324.USE = "HAnimSiteShape"

HAnimSite1322.children.append(Shape1324)

HAnimSegment1289.children.append(HAnimSite1322)

HAnimJoint1288.children.append(HAnimSegment1289)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.DEF = "hanim_r_wrist"
HAnimJoint1325.name = "r_wrist"
HAnimJoint1325.center = [-0.1984,0.8663,-0.0583]
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.DEF = "hanim_r_hand"
HAnimSegment1326.name = "r_hand"
TouchSensor1327 = x3d.TouchSensor()
TouchSensor1327.description = "HAnimJoint r_wrist, HAnimSegment r_hand"

HAnimSegment1326.children.append(TouchSensor1327)
Transform1328 = x3d.Transform()
Transform1328.translation = [-0.1984,0.8663,-0.0583]
Shape1329 = x3d.Shape()
Shape1329.USE = "HAnimJointShape"

Transform1328.children.append(Shape1329)

HAnimSegment1326.children.append(Transform1328)
Shape1330 = x3d.Shape()
LineSet1331 = x3d.LineSet()
LineSet1331.vertexCount = [2]
ColorRGBA1332 = x3d.ColorRGBA()
ColorRGBA1332.USE = "HAnimSegmentLineColorRGBA"

LineSet1331.color = ColorRGBA1332
Coordinate1333 = x3d.Coordinate()
Coordinate1333.point = [(-0.1984, 0.8663, -0.0583),(-0.1924, 0.8472, -0.0534)]

LineSet1331.coord = Coordinate1333

Shape1330.geometry = LineSet1331

HAnimSegment1326.children.append(Shape1330)
Shape1334 = x3d.Shape()
LineSet1335 = x3d.LineSet()
LineSet1335.vertexCount = [2]
ColorRGBA1336 = x3d.ColorRGBA()
ColorRGBA1336.USE = "HAnimSegmentLineColorRGBA"

LineSet1335.color = ColorRGBA1336
Coordinate1337 = x3d.Coordinate()
Coordinate1337.point = [(-0.1984, 0.8663, -0.0583),(-0.1983, 0.8024, -0.028)]

LineSet1335.coord = Coordinate1337

Shape1334.geometry = LineSet1335

HAnimSegment1326.children.append(Shape1334)
Shape1338 = x3d.Shape()
LineSet1339 = x3d.LineSet()
LineSet1339.vertexCount = [2]
ColorRGBA1340 = x3d.ColorRGBA()
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA"

LineSet1339.color = ColorRGBA1340
Coordinate1341 = x3d.Coordinate()
Coordinate1341.point = [(-0.1984, 0.8663, -0.0583),(-0.1987, 0.8029, -0.053)]

LineSet1339.coord = Coordinate1341

Shape1338.geometry = LineSet1339

HAnimSegment1326.children.append(Shape1338)
Shape1342 = x3d.Shape()
LineSet1343 = x3d.LineSet()
LineSet1343.vertexCount = [2]
ColorRGBA1344 = x3d.ColorRGBA()
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA"

LineSet1343.color = ColorRGBA1344
Coordinate1345 = x3d.Coordinate()
Coordinate1345.point = [(-0.1984, 0.8663, -0.0583),(-0.1956, 0.8019, -0.0794)]

LineSet1343.coord = Coordinate1345

Shape1342.geometry = LineSet1343

HAnimSegment1326.children.append(Shape1342)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.vertexCount = [2]
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA"

LineSet1347.color = ColorRGBA1348
Coordinate1349 = x3d.Coordinate()
Coordinate1349.point = [(-0.1984, 0.8663, -0.0583),(-0.1925, 0.8066, -0.1036)]

LineSet1347.coord = Coordinate1349

Shape1346.geometry = LineSet1347

HAnimSegment1326.children.append(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.vertexCount = [2]
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.USE = "HAnimSiteLineColorRGBA"

LineSet1351.color = ColorRGBA1352
Coordinate1353 = x3d.Coordinate()
Coordinate1353.point = [(-0.1984, 0.8663, -0.0583),(-0.1977, 0.8169, -0.0177)]

LineSet1351.coord = Coordinate1353

Shape1350.geometry = LineSet1351

HAnimSegment1326.children.append(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
ColorRGBA1356 = x3d.ColorRGBA()
ColorRGBA1356.USE = "HAnimSiteLineColorRGBA"

LineSet1355.color = ColorRGBA1356
Coordinate1357 = x3d.Coordinate()
Coordinate1357.point = [(-0.1984, 0.8663, -0.0583),(-0.2117, 0.8562, -0.0584)]

LineSet1355.coord = Coordinate1357

Shape1354.geometry = LineSet1355

HAnimSegment1326.children.append(Shape1354)
Shape1358 = x3d.Shape()
LineSet1359 = x3d.LineSet()
LineSet1359.vertexCount = [2]
ColorRGBA1360 = x3d.ColorRGBA()
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA"

LineSet1359.color = ColorRGBA1360
Coordinate1361 = x3d.Coordinate()
Coordinate1361.point = [(-0.1984, 0.8663, -0.0583),(-0.1929, 0.789, -0.1064)]

LineSet1359.coord = Coordinate1361

Shape1358.geometry = LineSet1359

HAnimSegment1326.children.append(Shape1358)
Shape1362 = x3d.Shape()
LineSet1363 = x3d.LineSet()
LineSet1363.vertexCount = [2]
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.USE = "HAnimSiteViewpointLineColorRGBA"

LineSet1363.color = ColorRGBA1364
Coordinate1365 = x3d.Coordinate()
Coordinate1365.point = [(-0.1984, 0.8663, -0.0583),(-0.3, 0.75, 0.45)]

LineSet1363.coord = Coordinate1365

Shape1362.geometry = LineSet1363

HAnimSegment1326.children.append(Shape1362)
HAnimSite1366 = x3d.HAnimSite()
HAnimSite1366.DEF = "hanim_r_metacarpal_pha2_pt"
HAnimSite1366.name = "r_metacarpal_pha2_pt"
HAnimSite1366.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1367 = x3d.TouchSensor()
TouchSensor1367.description = "HAnimSite r_metacarpal_pha2"

HAnimSite1366.children.append(TouchSensor1367)
Shape1368 = x3d.Shape()
Shape1368.USE = "HAnimSiteShape"

HAnimSite1366.children.append(Shape1368)

HAnimSegment1326.children.append(HAnimSite1366)
HAnimSite1369 = x3d.HAnimSite()
HAnimSite1369.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1369.name = "r_ulnar_styloid_pt"
HAnimSite1369.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1370 = x3d.TouchSensor()
TouchSensor1370.description = "HAnimSite r_ulnar_styloid"

HAnimSite1369.children.append(TouchSensor1370)
Shape1371 = x3d.Shape()
Shape1371.USE = "HAnimSiteShape"

HAnimSite1369.children.append(Shape1371)

HAnimSegment1326.children.append(HAnimSite1369)
HAnimSite1372 = x3d.HAnimSite()
HAnimSite1372.DEF = "hanim_r_metacarpal_pha5_pt"
HAnimSite1372.name = "r_metacarpal_pha5_pt"
HAnimSite1372.translation = [-0.1929,0.789,-0.1064]
TouchSensor1373 = x3d.TouchSensor()
TouchSensor1373.description = "HAnimSite r_metacarpal_pha5"

HAnimSite1372.children.append(TouchSensor1373)
Shape1374 = x3d.Shape()
Shape1374.USE = "HAnimSiteShape"

HAnimSite1372.children.append(Shape1374)

HAnimSegment1326.children.append(HAnimSite1372)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.DEF = "hanim_r_hand_front_view"
HAnimSite1375.name = "r_hand_front_view"
HAnimSite1375.translation = [-0.3,0.75,0.45]
Viewpoint1376 = x3d.Viewpoint()
Viewpoint1376.DEF = "hanim_r_hand_front_viewpoint"
Viewpoint1376.description = "right hand front"
Viewpoint1376.position = [0,0,0]
Viewpoint1376.centerOfRotation = [0,0.7,0]

HAnimSite1375.children.append(Viewpoint1376)
Anchor1377 = x3d.Anchor()
Anchor1377.description = "HAnimSite Viewpoint hanim_r_hand_front_view"
Anchor1377.url = ["#hanim_r_hand_front_viewpoint"]
LOD1378 = x3d.LOD()
LOD1378.forceTransitions = True
LOD1378.range = [0.04]
WorldInfo1379 = x3d.WorldInfo()
WorldInfo1379.info = ["hide diamond when close"]

LOD1378.children.append(WorldInfo1379)
Shape1380 = x3d.Shape()
Shape1380.USE = "HAnimSiteViewpointShape"

LOD1378.children.append(Shape1380)

Anchor1377.children.append(LOD1378)

HAnimSite1375.children.append(Anchor1377)

HAnimSegment1326.children.append(HAnimSite1375)

HAnimJoint1325.children.append(HAnimSegment1326)
HAnimJoint1381 = x3d.HAnimJoint()
HAnimJoint1381.DEF = "hanim_r_thumb1"
HAnimJoint1381.name = "r_thumb1"
HAnimJoint1381.rotation = [1,0,0,0.270107235459875]
HAnimJoint1381.center = [-0.1924,0.8472,-0.0534]
HAnimSegment1382 = x3d.HAnimSegment()
HAnimSegment1382.DEF = "hanim_r_thumb_metacarpal"
HAnimSegment1382.name = "r_thumb_metacarpal"
TouchSensor1383 = x3d.TouchSensor()
TouchSensor1383.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"

HAnimSegment1382.children.append(TouchSensor1383)
Transform1384 = x3d.Transform()
Transform1384.translation = [-0.1924,0.8472,-0.0534]
Shape1385 = x3d.Shape()
Shape1385.USE = "HAnimJointShape"

Transform1384.children.append(Shape1385)

HAnimSegment1382.children.append(Transform1384)
Shape1386 = x3d.Shape()
LineSet1387 = x3d.LineSet()
LineSet1387.vertexCount = [2]
ColorRGBA1388 = x3d.ColorRGBA()
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA"

LineSet1387.color = ColorRGBA1388
Coordinate1389 = x3d.Coordinate()
Coordinate1389.point = [(-0.1924, 0.8472, -0.0534),(-0.1951, 0.8226, 0.0246)]

LineSet1387.coord = Coordinate1389

Shape1386.geometry = LineSet1387

HAnimSegment1382.children.append(Shape1386)

HAnimJoint1381.children.append(HAnimSegment1382)
HAnimJoint1390 = x3d.HAnimJoint()
HAnimJoint1390.DEF = "hanim_r_thumb2"
HAnimJoint1390.name = "r_thumb2"
HAnimJoint1390.center = [-0.1951,0.8226,0.0246]
HAnimSegment1391 = x3d.HAnimSegment()
HAnimSegment1391.DEF = "hanim_r_thumb_proximal"
HAnimSegment1391.name = "r_thumb_proximal"
TouchSensor1392 = x3d.TouchSensor()
TouchSensor1392.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"

HAnimSegment1391.children.append(TouchSensor1392)
Transform1393 = x3d.Transform()
Transform1393.translation = [-0.1951,0.8226,0.0246]
Shape1394 = x3d.Shape()
Shape1394.USE = "HAnimJointShape"

Transform1393.children.append(Shape1394)

HAnimSegment1391.children.append(Transform1393)
Shape1395 = x3d.Shape()
LineSet1396 = x3d.LineSet()
LineSet1396.vertexCount = [2]
ColorRGBA1397 = x3d.ColorRGBA()
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA"

LineSet1396.color = ColorRGBA1397
Coordinate1398 = x3d.Coordinate()
Coordinate1398.point = [(-0.1951, 0.8226, 0.0246),(-0.1955, 0.8159, 0.0464)]

LineSet1396.coord = Coordinate1398

Shape1395.geometry = LineSet1396

HAnimSegment1391.children.append(Shape1395)

HAnimJoint1390.children.append(HAnimSegment1391)
HAnimJoint1399 = x3d.HAnimJoint()
HAnimJoint1399.DEF = "hanim_r_thumb3"
HAnimJoint1399.name = "r_thumb3"
HAnimJoint1399.center = [-0.1955,0.8159,0.0464]
HAnimSegment1400 = x3d.HAnimSegment()
HAnimSegment1400.DEF = "hanim_r_thumb_distal"
HAnimSegment1400.name = "r_thumb_distal"
TouchSensor1401 = x3d.TouchSensor()
TouchSensor1401.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"

HAnimSegment1400.children.append(TouchSensor1401)
Transform1402 = x3d.Transform()
Transform1402.translation = [-0.1955,0.8159,0.0464]
Shape1403 = x3d.Shape()
Shape1403.USE = "HAnimJointShape"

Transform1402.children.append(Shape1403)

HAnimSegment1400.children.append(Transform1402)
Shape1404 = x3d.Shape()
LineSet1405 = x3d.LineSet()
LineSet1405.vertexCount = [2]
ColorRGBA1406 = x3d.ColorRGBA()
ColorRGBA1406.USE = "HAnimSiteLineColorRGBA"

LineSet1405.color = ColorRGBA1406
Coordinate1407 = x3d.Coordinate()
Coordinate1407.point = [(-0.1955, 0.8159, 0.0464),(-0.1869, 0.809, 0.082)]

LineSet1405.coord = Coordinate1407

Shape1404.geometry = LineSet1405

HAnimSegment1400.children.append(Shape1404)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.DEF = "hanim_r_thumb_distal_tip"
HAnimSite1408.name = "r_thumb_distal_tip"
HAnimSite1408.translation = [-0.1869,0.809,0.082]
TouchSensor1409 = x3d.TouchSensor()
TouchSensor1409.description = "HAnimSite r_thumb_distal_tip"

HAnimSite1408.children.append(TouchSensor1409)
Shape1410 = x3d.Shape()
Shape1410.USE = "HAnimSiteShape"

HAnimSite1408.children.append(Shape1410)

HAnimSegment1400.children.append(HAnimSite1408)

HAnimJoint1399.children.append(HAnimSegment1400)

HAnimJoint1390.children.append(HAnimJoint1399)

HAnimJoint1381.children.append(HAnimJoint1390)

HAnimJoint1325.children.append(HAnimJoint1381)
HAnimJoint1411 = x3d.HAnimJoint()
HAnimJoint1411.DEF = "hanim_r_index0"
HAnimJoint1411.name = "r_index0"
HAnimJoint1411.center = [-0.1983,0.8024,-0.028]
HAnimSegment1412 = x3d.HAnimSegment()
HAnimSegment1412.DEF = "hanim_r_index_metacarpal"
HAnimSegment1412.name = "r_index_metacarpal"
TouchSensor1413 = x3d.TouchSensor()
TouchSensor1413.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal"

HAnimSegment1412.children.append(TouchSensor1413)
Transform1414 = x3d.Transform()
Transform1414.translation = [-0.1983,0.8024,-0.028]
Shape1415 = x3d.Shape()
Shape1415.USE = "HAnimJointShape"

Transform1414.children.append(Shape1415)

HAnimSegment1412.children.append(Transform1414)
Shape1416 = x3d.Shape()
LineSet1417 = x3d.LineSet()
LineSet1417.vertexCount = [2]
ColorRGBA1418 = x3d.ColorRGBA()
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA"

LineSet1417.color = ColorRGBA1418
Coordinate1419 = x3d.Coordinate()
Coordinate1419.point = [(-0.1983, 0.8024, -0.028),(-0.1983, 0.7815, -0.028)]

LineSet1417.coord = Coordinate1419

Shape1416.geometry = LineSet1417

HAnimSegment1412.children.append(Shape1416)

HAnimJoint1411.children.append(HAnimSegment1412)
HAnimJoint1420 = x3d.HAnimJoint()
HAnimJoint1420.DEF = "hanim_r_index1"
HAnimJoint1420.name = "r_index1"
HAnimJoint1420.rotation = [0,0,1.00000000000003,0.111082015766469]
HAnimJoint1420.center = [-0.1983,0.7815,-0.028]
HAnimSegment1421 = x3d.HAnimSegment()
HAnimSegment1421.DEF = "hanim_r_index_proximal"
HAnimSegment1421.name = "r_index_proximal"
TouchSensor1422 = x3d.TouchSensor()
TouchSensor1422.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal"

HAnimSegment1421.children.append(TouchSensor1422)
Transform1423 = x3d.Transform()
Transform1423.translation = [-0.1983,0.7815,-0.028]
Shape1424 = x3d.Shape()
Shape1424.USE = "HAnimJointShape"

Transform1423.children.append(Shape1424)

HAnimSegment1421.children.append(Transform1423)
Shape1425 = x3d.Shape()
LineSet1426 = x3d.LineSet()
LineSet1426.vertexCount = [2]
ColorRGBA1427 = x3d.ColorRGBA()
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA"

LineSet1426.color = ColorRGBA1427
Coordinate1428 = x3d.Coordinate()
Coordinate1428.point = [(-0.1983, 0.7815, -0.028),(-0.2017, 0.7363, -0.0248)]

LineSet1426.coord = Coordinate1428

Shape1425.geometry = LineSet1426

HAnimSegment1421.children.append(Shape1425)

HAnimJoint1420.children.append(HAnimSegment1421)
HAnimJoint1429 = x3d.HAnimJoint()
HAnimJoint1429.DEF = "hanim_r_index2"
HAnimJoint1429.name = "r_index2"
HAnimJoint1429.rotation = [0,0,0.999999999999999,0.391134387386823]
HAnimJoint1429.center = [-0.2017,0.7363,-0.0248]
HAnimSegment1430 = x3d.HAnimSegment()
HAnimSegment1430.DEF = "hanim_r_index_middle"
HAnimSegment1430.name = "r_index_middle"
TouchSensor1431 = x3d.TouchSensor()
TouchSensor1431.description = "HAnimJoint r_index2, HAnimSegment r_index_middle"

HAnimSegment1430.children.append(TouchSensor1431)
Transform1432 = x3d.Transform()
Transform1432.translation = [-0.2017,0.7363,-0.0248]
Shape1433 = x3d.Shape()
Shape1433.USE = "HAnimJointShape"

Transform1432.children.append(Shape1433)

HAnimSegment1430.children.append(Transform1432)
Shape1434 = x3d.Shape()
LineSet1435 = x3d.LineSet()
LineSet1435.vertexCount = [2]
ColorRGBA1436 = x3d.ColorRGBA()
ColorRGBA1436.USE = "HAnimSegmentLineColorRGBA"

LineSet1435.color = ColorRGBA1436
Coordinate1437 = x3d.Coordinate()
Coordinate1437.point = [(-0.2017, 0.7363, -0.0248),(-0.2028, 0.7139, -0.0236)]

LineSet1435.coord = Coordinate1437

Shape1434.geometry = LineSet1435

HAnimSegment1430.children.append(Shape1434)

HAnimJoint1429.children.append(HAnimSegment1430)
HAnimJoint1438 = x3d.HAnimJoint()
HAnimJoint1438.DEF = "hanim_r_index3"
HAnimJoint1438.name = "r_index3"
HAnimJoint1438.rotation = [0,0,0.999999999999997,0.211082015766472]
HAnimJoint1438.center = [-0.2028,0.7139,-0.0236]
HAnimSegment1439 = x3d.HAnimSegment()
HAnimSegment1439.DEF = "hanim_r_index_distal"
HAnimSegment1439.name = "r_index_distal"
TouchSensor1440 = x3d.TouchSensor()
TouchSensor1440.description = "HAnimJoint r_index3, HAnimSegment r_index_distal"

HAnimSegment1439.children.append(TouchSensor1440)
Transform1441 = x3d.Transform()
Transform1441.translation = [-0.2028,0.7139,-0.0236]
Shape1442 = x3d.Shape()
Shape1442.USE = "HAnimJointShape"

Transform1441.children.append(Shape1442)

HAnimSegment1439.children.append(Transform1441)
Shape1443 = x3d.Shape()
LineSet1444 = x3d.LineSet()
LineSet1444.vertexCount = [2]
ColorRGBA1445 = x3d.ColorRGBA()
ColorRGBA1445.USE = "HAnimSiteLineColorRGBA"

LineSet1444.color = ColorRGBA1445
Coordinate1446 = x3d.Coordinate()
Coordinate1446.point = [(-0.2028, 0.7139, -0.0236),(-0.198, 0.6883, -0.018)]

LineSet1444.coord = Coordinate1446

Shape1443.geometry = LineSet1444

HAnimSegment1439.children.append(Shape1443)
Shape1447 = x3d.Shape()
LineSet1448 = x3d.LineSet()
LineSet1448.vertexCount = [2]
ColorRGBA1449 = x3d.ColorRGBA()
ColorRGBA1449.USE = "HAnimSiteLineColorRGBA"

LineSet1448.color = ColorRGBA1449
Coordinate1450 = x3d.Coordinate()
Coordinate1450.point = [(-0.2028, 0.7139, -0.0236),(-0.1941, 0.6772, -0.0423)]

LineSet1448.coord = Coordinate1450

Shape1447.geometry = LineSet1448

HAnimSegment1439.children.append(Shape1447)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.DEF = "hanim_r_index_distal_tip"
HAnimSite1451.name = "r_index_distal_tip"
HAnimSite1451.translation = [-0.198,0.6883,-0.018]
TouchSensor1452 = x3d.TouchSensor()
TouchSensor1452.description = "HAnimSite r_index_distal_tip"

HAnimSite1451.children.append(TouchSensor1452)
Shape1453 = x3d.Shape()
Shape1453.USE = "HAnimSiteShape"

HAnimSite1451.children.append(Shape1453)

HAnimSegment1439.children.append(HAnimSite1451)
HAnimSite1454 = x3d.HAnimSite()
HAnimSite1454.DEF = "hanim_r_dactylion_pt"
HAnimSite1454.name = "r_dactylion_pt"
HAnimSite1454.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1455 = x3d.TouchSensor()
TouchSensor1455.description = "HAnimSite r_dactylion"

HAnimSite1454.children.append(TouchSensor1455)
Shape1456 = x3d.Shape()
Shape1456.USE = "HAnimSiteShape"

HAnimSite1454.children.append(Shape1456)

HAnimSegment1439.children.append(HAnimSite1454)

HAnimJoint1438.children.append(HAnimSegment1439)

HAnimJoint1429.children.append(HAnimJoint1438)

HAnimJoint1420.children.append(HAnimJoint1429)

HAnimJoint1411.children.append(HAnimJoint1420)

HAnimJoint1325.children.append(HAnimJoint1411)
HAnimJoint1457 = x3d.HAnimJoint()
HAnimJoint1457.DEF = "hanim_r_middle0"
HAnimJoint1457.name = "r_middle0"
HAnimJoint1457.center = [-0.1987,0.8029,-0.053]
HAnimSegment1458 = x3d.HAnimSegment()
HAnimSegment1458.DEF = "hanim_r_middle_metacarpal"
HAnimSegment1458.name = "r_middle_metacarpal"
TouchSensor1459 = x3d.TouchSensor()
TouchSensor1459.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"

HAnimSegment1458.children.append(TouchSensor1459)
Transform1460 = x3d.Transform()
Transform1460.translation = [-0.1987,0.8029,-0.053]
Shape1461 = x3d.Shape()
Shape1461.USE = "HAnimJointShape"

Transform1460.children.append(Shape1461)

HAnimSegment1458.children.append(Transform1460)
Shape1462 = x3d.Shape()
LineSet1463 = x3d.LineSet()
LineSet1463.vertexCount = [2]
ColorRGBA1464 = x3d.ColorRGBA()
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA"

LineSet1463.color = ColorRGBA1464
Coordinate1465 = x3d.Coordinate()
Coordinate1465.point = [(-0.1987, 0.8029, -0.053),(-0.1987, 0.7818, -0.053)]

LineSet1463.coord = Coordinate1465

Shape1462.geometry = LineSet1463

HAnimSegment1458.children.append(Shape1462)

HAnimJoint1457.children.append(HAnimSegment1458)
HAnimJoint1466 = x3d.HAnimJoint()
HAnimJoint1466.DEF = "hanim_r_middle1"
HAnimJoint1466.name = "r_middle1"
HAnimJoint1466.rotation = [0,0,1.00000000000003,0.111082015766469]
HAnimJoint1466.center = [-0.1987,0.7818,-0.053]
HAnimSegment1467 = x3d.HAnimSegment()
HAnimSegment1467.DEF = "hanim_r_middle_proximal"
HAnimSegment1467.name = "r_middle_proximal"
TouchSensor1468 = x3d.TouchSensor()
TouchSensor1468.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal"

HAnimSegment1467.children.append(TouchSensor1468)
Transform1469 = x3d.Transform()
Transform1469.translation = [-0.1987,0.7818,-0.053]
Shape1470 = x3d.Shape()
Shape1470.USE = "HAnimJointShape"

Transform1469.children.append(Shape1470)

HAnimSegment1467.children.append(Transform1469)
Shape1471 = x3d.Shape()
LineSet1472 = x3d.LineSet()
LineSet1472.vertexCount = [2]
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA"

LineSet1472.color = ColorRGBA1473
Coordinate1474 = x3d.Coordinate()
Coordinate1474.point = [(-0.1987, 0.7818, -0.053),(-0.2013, 0.7273, -0.0503)]

LineSet1472.coord = Coordinate1474

Shape1471.geometry = LineSet1472

HAnimSegment1467.children.append(Shape1471)

HAnimJoint1466.children.append(HAnimSegment1467)
HAnimJoint1475 = x3d.HAnimJoint()
HAnimJoint1475.DEF = "hanim_r_middle2"
HAnimJoint1475.name = "r_middle2"
HAnimJoint1475.rotation = [0,0,0.999999999999999,0.391134387386823]
HAnimJoint1475.center = [-0.2013,0.7273,-0.0503]
HAnimSegment1476 = x3d.HAnimSegment()
HAnimSegment1476.DEF = "hanim_r_middle_middle"
HAnimSegment1476.name = "r_middle_middle"
TouchSensor1477 = x3d.TouchSensor()
TouchSensor1477.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle"

HAnimSegment1476.children.append(TouchSensor1477)
Transform1478 = x3d.Transform()
Transform1478.translation = [-0.2013,0.7273,-0.0503]
Shape1479 = x3d.Shape()
Shape1479.USE = "HAnimJointShape"

Transform1478.children.append(Shape1479)

HAnimSegment1476.children.append(Transform1478)
Shape1480 = x3d.Shape()
LineSet1481 = x3d.LineSet()
LineSet1481.vertexCount = [2]
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA"

LineSet1481.color = ColorRGBA1482
Coordinate1483 = x3d.Coordinate()
Coordinate1483.point = [(-0.2013, 0.7273, -0.0503),(-0.2026, 0.7011, -0.0494)]

LineSet1481.coord = Coordinate1483

Shape1480.geometry = LineSet1481

HAnimSegment1476.children.append(Shape1480)

HAnimJoint1475.children.append(HAnimSegment1476)
HAnimJoint1484 = x3d.HAnimJoint()
HAnimJoint1484.DEF = "hanim_r_middle3"
HAnimJoint1484.name = "r_middle3"
HAnimJoint1484.rotation = [0,0,0.999999999999997,0.211082015766472]
HAnimJoint1484.center = [-0.2026,0.7011,-0.0494]
HAnimSegment1485 = x3d.HAnimSegment()
HAnimSegment1485.DEF = "hanim_r_middle_distal"
HAnimSegment1485.name = "r_middle_distal"
TouchSensor1486 = x3d.TouchSensor()
TouchSensor1486.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal"

HAnimSegment1485.children.append(TouchSensor1486)
Transform1487 = x3d.Transform()
Transform1487.translation = [-0.2026,0.7011,-0.0494]
Shape1488 = x3d.Shape()
Shape1488.USE = "HAnimJointShape"

Transform1487.children.append(Shape1488)

HAnimSegment1485.children.append(Transform1487)
Shape1489 = x3d.Shape()
LineSet1490 = x3d.LineSet()
LineSet1490.vertexCount = [2]
ColorRGBA1491 = x3d.ColorRGBA()
ColorRGBA1491.USE = "HAnimSiteLineColorRGBA"

LineSet1490.color = ColorRGBA1491
Coordinate1492 = x3d.Coordinate()
Coordinate1492.point = [(-0.2026, 0.7011, -0.0494),(-0.1969, 0.6758, -0.0427)]

LineSet1490.coord = Coordinate1492

Shape1489.geometry = LineSet1490

HAnimSegment1485.children.append(Shape1489)
HAnimSite1493 = x3d.HAnimSite()
HAnimSite1493.DEF = "hanim_r_middle_distal_tip"
HAnimSite1493.name = "r_middle_distal_tip"
HAnimSite1493.translation = [-0.1969,0.6758,-0.0427]
TouchSensor1494 = x3d.TouchSensor()
TouchSensor1494.description = "HAnimSite r_middle_distal_tip"

HAnimSite1493.children.append(TouchSensor1494)
Shape1495 = x3d.Shape()
Shape1495.USE = "HAnimSiteShape"

HAnimSite1493.children.append(Shape1495)

HAnimSegment1485.children.append(HAnimSite1493)

HAnimJoint1484.children.append(HAnimSegment1485)

HAnimJoint1475.children.append(HAnimJoint1484)

HAnimJoint1466.children.append(HAnimJoint1475)

HAnimJoint1457.children.append(HAnimJoint1466)

HAnimJoint1325.children.append(HAnimJoint1457)
HAnimJoint1496 = x3d.HAnimJoint()
HAnimJoint1496.DEF = "hanim_r_ring0"
HAnimJoint1496.name = "r_ring0"
HAnimJoint1496.center = [-0.1956,0.8019,-0.0794]
HAnimSegment1497 = x3d.HAnimSegment()
HAnimSegment1497.DEF = "hanim_r_ring_metacarpal"
HAnimSegment1497.name = "r_ring_metacarpal"
TouchSensor1498 = x3d.TouchSensor()
TouchSensor1498.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"

HAnimSegment1497.children.append(TouchSensor1498)
Transform1499 = x3d.Transform()
Transform1499.translation = [-0.1956,0.8019,-0.0794]
Shape1500 = x3d.Shape()
Shape1500.USE = "HAnimJointShape"

Transform1499.children.append(Shape1500)

HAnimSegment1497.children.append(Transform1499)
Shape1501 = x3d.Shape()
LineSet1502 = x3d.LineSet()
LineSet1502.vertexCount = [2]
ColorRGBA1503 = x3d.ColorRGBA()
ColorRGBA1503.USE = "HAnimSegmentLineColorRGBA"

LineSet1502.color = ColorRGBA1503
Coordinate1504 = x3d.Coordinate()
Coordinate1504.point = [(-0.1956, 0.8019, -0.0794),(-0.1956, 0.7815, -0.0794)]

LineSet1502.coord = Coordinate1504

Shape1501.geometry = LineSet1502

HAnimSegment1497.children.append(Shape1501)

HAnimJoint1496.children.append(HAnimSegment1497)
HAnimJoint1505 = x3d.HAnimJoint()
HAnimJoint1505.DEF = "hanim_r_ring1"
HAnimJoint1505.name = "r_ring1"
HAnimJoint1505.rotation = [0,0,1.00000000000003,0.111082015766469]
HAnimJoint1505.center = [-0.1956,0.7815,-0.0794]
HAnimSegment1506 = x3d.HAnimSegment()
HAnimSegment1506.DEF = "hanim_r_ring_proximal"
HAnimSegment1506.name = "r_ring_proximal"
TouchSensor1507 = x3d.TouchSensor()
TouchSensor1507.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal"

HAnimSegment1506.children.append(TouchSensor1507)
Transform1508 = x3d.Transform()
Transform1508.translation = [-0.1956,0.7815,-0.0794]
Shape1509 = x3d.Shape()
Shape1509.USE = "HAnimJointShape"

Transform1508.children.append(Shape1509)

HAnimSegment1506.children.append(Transform1508)
Shape1510 = x3d.Shape()
LineSet1511 = x3d.LineSet()
LineSet1511.vertexCount = [2]
ColorRGBA1512 = x3d.ColorRGBA()
ColorRGBA1512.USE = "HAnimSegmentLineColorRGBA"

LineSet1511.color = ColorRGBA1512
Coordinate1513 = x3d.Coordinate()
Coordinate1513.point = [(-0.1956, 0.7815, -0.0794),(-0.1973, 0.7287, -0.0777)]

LineSet1511.coord = Coordinate1513

Shape1510.geometry = LineSet1511

HAnimSegment1506.children.append(Shape1510)

HAnimJoint1505.children.append(HAnimSegment1506)
HAnimJoint1514 = x3d.HAnimJoint()
HAnimJoint1514.DEF = "hanim_r_ring2"
HAnimJoint1514.name = "r_ring2"
HAnimJoint1514.rotation = [0,0,0.999999999999999,0.391134387386823]
HAnimJoint1514.center = [-0.1973,0.7287,-0.0777]
HAnimSegment1515 = x3d.HAnimSegment()
HAnimSegment1515.DEF = "hanim_r_ring_middle"
HAnimSegment1515.name = "r_ring_middle"
TouchSensor1516 = x3d.TouchSensor()
TouchSensor1516.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle"

HAnimSegment1515.children.append(TouchSensor1516)
Transform1517 = x3d.Transform()
Transform1517.translation = [-0.1973,0.7287,-0.0777]
Shape1518 = x3d.Shape()
Shape1518.USE = "HAnimJointShape"

Transform1517.children.append(Shape1518)

HAnimSegment1515.children.append(Transform1517)
Shape1519 = x3d.Shape()
LineSet1520 = x3d.LineSet()
LineSet1520.vertexCount = [2]
ColorRGBA1521 = x3d.ColorRGBA()
ColorRGBA1521.USE = "HAnimSegmentLineColorRGBA"

LineSet1520.color = ColorRGBA1521
Coordinate1522 = x3d.Coordinate()
Coordinate1522.point = [(-0.1973, 0.7287, -0.0777),(-0.1983, 0.7045, -0.0767)]

LineSet1520.coord = Coordinate1522

Shape1519.geometry = LineSet1520

HAnimSegment1515.children.append(Shape1519)

HAnimJoint1514.children.append(HAnimSegment1515)
HAnimJoint1523 = x3d.HAnimJoint()
HAnimJoint1523.DEF = "hanim_r_ring3"
HAnimJoint1523.name = "r_ring3"
HAnimJoint1523.rotation = [0,0,0.999999999999997,0.211082015766472]
HAnimJoint1523.center = [-0.1983,0.7045,-0.0767]
HAnimSegment1524 = x3d.HAnimSegment()
HAnimSegment1524.DEF = "hanim_r_ring_distal"
HAnimSegment1524.name = "r_ring_distal"
TouchSensor1525 = x3d.TouchSensor()
TouchSensor1525.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal"

HAnimSegment1524.children.append(TouchSensor1525)
Transform1526 = x3d.Transform()
Transform1526.translation = [-0.1983,0.7045,-0.0767]
Shape1527 = x3d.Shape()
Shape1527.USE = "HAnimJointShape"

Transform1526.children.append(Shape1527)

HAnimSegment1524.children.append(Transform1526)
Shape1528 = x3d.Shape()
LineSet1529 = x3d.LineSet()
LineSet1529.vertexCount = [2]
ColorRGBA1530 = x3d.ColorRGBA()
ColorRGBA1530.USE = "HAnimSiteLineColorRGBA"

LineSet1529.color = ColorRGBA1530
Coordinate1531 = x3d.Coordinate()
Coordinate1531.point = [(-0.1983, 0.7045, -0.0767),(-0.1934, 0.6778, -0.0693)]

LineSet1529.coord = Coordinate1531

Shape1528.geometry = LineSet1529

HAnimSegment1524.children.append(Shape1528)
HAnimSite1532 = x3d.HAnimSite()
HAnimSite1532.DEF = "hanim_r_ring_distal_tip"
HAnimSite1532.name = "r_ring_distal_tip"
HAnimSite1532.translation = [-0.1934,0.6778,-0.0693]
TouchSensor1533 = x3d.TouchSensor()
TouchSensor1533.description = "HAnimSite r_ring_distal_tip"

HAnimSite1532.children.append(TouchSensor1533)
Shape1534 = x3d.Shape()
Shape1534.USE = "HAnimSiteShape"

HAnimSite1532.children.append(Shape1534)

HAnimSegment1524.children.append(HAnimSite1532)

HAnimJoint1523.children.append(HAnimSegment1524)

HAnimJoint1514.children.append(HAnimJoint1523)

HAnimJoint1505.children.append(HAnimJoint1514)

HAnimJoint1496.children.append(HAnimJoint1505)

HAnimJoint1325.children.append(HAnimJoint1496)
HAnimJoint1535 = x3d.HAnimJoint()
HAnimJoint1535.DEF = "hanim_r_pinky0"
HAnimJoint1535.name = "r_pinky0"
HAnimJoint1535.center = [-0.1925,0.8066,-0.1036]
HAnimSegment1536 = x3d.HAnimSegment()
HAnimSegment1536.DEF = "hanim_r_pinky_metacarpal"
HAnimSegment1536.name = "r_pinky_metacarpal"
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"

HAnimSegment1536.children.append(TouchSensor1537)
Transform1538 = x3d.Transform()
Transform1538.translation = [-0.1925,0.8066,-0.1036]
Shape1539 = x3d.Shape()
Shape1539.USE = "HAnimJointShape"

Transform1538.children.append(Shape1539)

HAnimSegment1536.children.append(Transform1538)
Shape1540 = x3d.Shape()
LineSet1541 = x3d.LineSet()
LineSet1541.vertexCount = [2]
ColorRGBA1542 = x3d.ColorRGBA()
ColorRGBA1542.USE = "HAnimSegmentLineColorRGBA"

LineSet1541.color = ColorRGBA1542
Coordinate1543 = x3d.Coordinate()
Coordinate1543.point = [(-0.1925, 0.8066, -0.1036),(-0.1925, 0.7866, -0.1036)]

LineSet1541.coord = Coordinate1543

Shape1540.geometry = LineSet1541

HAnimSegment1536.children.append(Shape1540)

HAnimJoint1535.children.append(HAnimSegment1536)
HAnimJoint1544 = x3d.HAnimJoint()
HAnimJoint1544.DEF = "hanim_r_pinky1"
HAnimJoint1544.name = "r_pinky1"
HAnimJoint1544.rotation = [0,0,1.00000000000003,0.111082015766469]
HAnimJoint1544.center = [-0.1925,0.7866,-0.1036]
HAnimSegment1545 = x3d.HAnimSegment()
HAnimSegment1545.DEF = "hanim_r_pinky_proximal"
HAnimSegment1545.name = "r_pinky_proximal"
TouchSensor1546 = x3d.TouchSensor()
TouchSensor1546.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"

HAnimSegment1545.children.append(TouchSensor1546)
Transform1547 = x3d.Transform()
Transform1547.translation = [-0.1925,0.7866,-0.1036]
Shape1548 = x3d.Shape()
Shape1548.USE = "HAnimJointShape"

Transform1547.children.append(Shape1548)

HAnimSegment1545.children.append(Transform1547)
Shape1549 = x3d.Shape()
LineSet1550 = x3d.LineSet()
LineSet1550.vertexCount = [2]
ColorRGBA1551 = x3d.ColorRGBA()
ColorRGBA1551.USE = "HAnimSegmentLineColorRGBA"

LineSet1550.color = ColorRGBA1551
Coordinate1552 = x3d.Coordinate()
Coordinate1552.point = [(-0.1925, 0.7866, -0.1036),(-0.1938, 0.7452, -0.1024)]

LineSet1550.coord = Coordinate1552

Shape1549.geometry = LineSet1550

HAnimSegment1545.children.append(Shape1549)

HAnimJoint1544.children.append(HAnimSegment1545)
HAnimJoint1553 = x3d.HAnimJoint()
HAnimJoint1553.DEF = "hanim_r_pinky2"
HAnimJoint1553.name = "r_pinky2"
HAnimJoint1553.rotation = [0,0,0.999999999999999,0.391134387386823]
HAnimJoint1553.center = [-0.1938,0.7452,-0.1024]
HAnimSegment1554 = x3d.HAnimSegment()
HAnimSegment1554.DEF = "hanim_r_pinky_middle"
HAnimSegment1554.name = "r_pinky_middle"
TouchSensor1555 = x3d.TouchSensor()
TouchSensor1555.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"

HAnimSegment1554.children.append(TouchSensor1555)
Transform1556 = x3d.Transform()
Transform1556.translation = [-0.1938,0.7452,-0.1024]
Shape1557 = x3d.Shape()
Shape1557.USE = "HAnimJointShape"

Transform1556.children.append(Shape1557)

HAnimSegment1554.children.append(Transform1556)
Shape1558 = x3d.Shape()
LineSet1559 = x3d.LineSet()
LineSet1559.vertexCount = [2]
ColorRGBA1560 = x3d.ColorRGBA()
ColorRGBA1560.USE = "HAnimSegmentLineColorRGBA"

LineSet1559.color = ColorRGBA1560
Coordinate1561 = x3d.Coordinate()
Coordinate1561.point = [(-0.1938, 0.7452, -0.1024),(-0.1948, 0.7277, -0.1017)]

LineSet1559.coord = Coordinate1561

Shape1558.geometry = LineSet1559

HAnimSegment1554.children.append(Shape1558)

HAnimJoint1553.children.append(HAnimSegment1554)
HAnimJoint1562 = x3d.HAnimJoint()
HAnimJoint1562.DEF = "hanim_r_pinky3"
HAnimJoint1562.name = "r_pinky3"
HAnimJoint1562.rotation = [0,0,0.999999999999997,0.211082015766472]
HAnimJoint1562.center = [-0.1948,0.7277,-0.1017]
HAnimSegment1563 = x3d.HAnimSegment()
HAnimSegment1563.DEF = "hanim_r_pinky_distal"
HAnimSegment1563.name = "r_pinky_distal"
TouchSensor1564 = x3d.TouchSensor()
TouchSensor1564.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"

HAnimSegment1563.children.append(TouchSensor1564)
Transform1565 = x3d.Transform()
Transform1565.translation = [-0.1948,0.7277,-0.1017]
Shape1566 = x3d.Shape()
Shape1566.USE = "HAnimJointShape"

Transform1565.children.append(Shape1566)

HAnimSegment1563.children.append(Transform1565)
Shape1567 = x3d.Shape()
LineSet1568 = x3d.LineSet()
LineSet1568.vertexCount = [2]
ColorRGBA1569 = x3d.ColorRGBA()
ColorRGBA1569.USE = "HAnimSiteLineColorRGBA"

LineSet1568.color = ColorRGBA1569
Coordinate1570 = x3d.Coordinate()
Coordinate1570.point = [(-0.1948, 0.7277, -0.1017),(-0.1938, 0.7035, -0.0949)]

LineSet1568.coord = Coordinate1570

Shape1567.geometry = LineSet1568

HAnimSegment1563.children.append(Shape1567)
HAnimSite1571 = x3d.HAnimSite()
HAnimSite1571.DEF = "hanim_r_pinky_distal_tip"
HAnimSite1571.name = "r_pinky_distal_tip"
HAnimSite1571.translation = [-0.1938,0.7035,-0.0949]
TouchSensor1572 = x3d.TouchSensor()
TouchSensor1572.description = "HAnimSite r_pinky_distal_tip"

HAnimSite1571.children.append(TouchSensor1572)
Shape1573 = x3d.Shape()
Shape1573.USE = "HAnimSiteShape"

HAnimSite1571.children.append(Shape1573)

HAnimSegment1563.children.append(HAnimSite1571)

HAnimJoint1562.children.append(HAnimSegment1563)

HAnimJoint1553.children.append(HAnimJoint1562)

HAnimJoint1544.children.append(HAnimJoint1553)

HAnimJoint1535.children.append(HAnimJoint1544)

HAnimJoint1325.children.append(HAnimJoint1535)

HAnimJoint1288.children.append(HAnimJoint1325)

HAnimJoint1272.children.append(HAnimJoint1288)

HAnimJoint1263.children.append(HAnimJoint1272)

HAnimJoint1226.children.append(HAnimJoint1263)

HAnimJoint594.children.append(HAnimJoint1226)

HAnimJoint585.children.append(HAnimJoint594)

HAnimJoint576.children.append(HAnimJoint585)

HAnimJoint567.children.append(HAnimJoint576)

HAnimJoint558.children.append(HAnimJoint567)

HAnimJoint549.children.append(HAnimJoint558)

HAnimJoint540.children.append(HAnimJoint549)

HAnimJoint531.children.append(HAnimJoint540)

HAnimJoint508.children.append(HAnimJoint531)

HAnimJoint492.children.append(HAnimJoint508)

HAnimJoint483.children.append(HAnimJoint492)

HAnimJoint474.children.append(HAnimJoint483)

HAnimJoint465.children.append(HAnimJoint474)

HAnimJoint435.children.append(HAnimJoint465)

HAnimJoint426.children.append(HAnimJoint435)

HAnimJoint417.children.append(HAnimJoint426)

HAnimJoint394.children.append(HAnimJoint417)

HAnimJoint44.children.append(HAnimJoint394)

HAnimHumanoid43.skeleton.append(HAnimJoint44)
HAnimJoint1574 = x3d.HAnimJoint()
HAnimJoint1574.USE = "hanim_humanoid_root"

HAnimHumanoid43.joints.append(HAnimJoint1574)
HAnimJoint1575 = x3d.HAnimJoint()
HAnimJoint1575.USE = "hanim_sacroiliac"

HAnimHumanoid43.joints.append(HAnimJoint1575)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.USE = "hanim_vl5"

HAnimHumanoid43.joints.append(HAnimJoint1576)
HAnimJoint1577 = x3d.HAnimJoint()
HAnimJoint1577.USE = "hanim_vl4"

HAnimHumanoid43.joints.append(HAnimJoint1577)
HAnimJoint1578 = x3d.HAnimJoint()
HAnimJoint1578.USE = "hanim_vl3"

HAnimHumanoid43.joints.append(HAnimJoint1578)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.USE = "hanim_vl2"

HAnimHumanoid43.joints.append(HAnimJoint1579)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.USE = "hanim_vl1"

HAnimHumanoid43.joints.append(HAnimJoint1580)
HAnimJoint1581 = x3d.HAnimJoint()
HAnimJoint1581.USE = "hanim_vt12"

HAnimHumanoid43.joints.append(HAnimJoint1581)
HAnimJoint1582 = x3d.HAnimJoint()
HAnimJoint1582.USE = "hanim_vt11"

HAnimHumanoid43.joints.append(HAnimJoint1582)
HAnimJoint1583 = x3d.HAnimJoint()
HAnimJoint1583.USE = "hanim_vt10"

HAnimHumanoid43.joints.append(HAnimJoint1583)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.USE = "hanim_vt9"

HAnimHumanoid43.joints.append(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.USE = "hanim_vt8"

HAnimHumanoid43.joints.append(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.USE = "hanim_vt7"

HAnimHumanoid43.joints.append(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.USE = "hanim_vt6"

HAnimHumanoid43.joints.append(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.USE = "hanim_vt5"

HAnimHumanoid43.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.USE = "hanim_vt4"

HAnimHumanoid43.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.USE = "hanim_vt3"

HAnimHumanoid43.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.USE = "hanim_vt2"

HAnimHumanoid43.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.USE = "hanim_vt1"

HAnimHumanoid43.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.USE = "hanim_vc7"

HAnimHumanoid43.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.USE = "hanim_vc6"

HAnimHumanoid43.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.USE = "hanim_vc5"

HAnimHumanoid43.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.USE = "hanim_vc4"

HAnimHumanoid43.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.USE = "hanim_vc3"

HAnimHumanoid43.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.USE = "hanim_vc2"

HAnimHumanoid43.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.USE = "hanim_vc1"

HAnimHumanoid43.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.USE = "hanim_skullbase"

HAnimHumanoid43.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_temporomandibular"

HAnimHumanoid43.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_l_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_r_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_l_ankle"

HAnimHumanoid43.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_r_ankle"

HAnimHumanoid43.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_l_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_r_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_l_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_r_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_l_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_r_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_l_hip"

HAnimHumanoid43.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_r_hip"

HAnimHumanoid43.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_l_index0"

HAnimHumanoid43.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_r_index0"

HAnimHumanoid43.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_l_index1"

HAnimHumanoid43.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_r_index1"

HAnimHumanoid43.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_l_index2"

HAnimHumanoid43.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_r_index2"

HAnimHumanoid43.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_l_index3"

HAnimHumanoid43.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_r_index3"

HAnimHumanoid43.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_l_knee"

HAnimHumanoid43.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_r_knee"

HAnimHumanoid43.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_l_metatarsal"

HAnimHumanoid43.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_r_metatarsal"

HAnimHumanoid43.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_l_middle0"

HAnimHumanoid43.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_r_middle0"

HAnimHumanoid43.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_l_middle1"

HAnimHumanoid43.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_r_middle1"

HAnimHumanoid43.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_l_middle2"

HAnimHumanoid43.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_r_middle2"

HAnimHumanoid43.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_l_middle3"

HAnimHumanoid43.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_r_middle3"

HAnimHumanoid43.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_l_midtarsal"

HAnimHumanoid43.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.USE = "hanim_r_midtarsal"

HAnimHumanoid43.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.USE = "hanim_l_pinky0"

HAnimHumanoid43.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.USE = "hanim_r_pinky0"

HAnimHumanoid43.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.USE = "hanim_l_pinky1"

HAnimHumanoid43.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.USE = "hanim_r_pinky1"

HAnimHumanoid43.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.USE = "hanim_l_pinky2"

HAnimHumanoid43.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.USE = "hanim_r_pinky2"

HAnimHumanoid43.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.USE = "hanim_l_pinky3"

HAnimHumanoid43.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.USE = "hanim_r_pinky3"

HAnimHumanoid43.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.USE = "hanim_l_ring0"

HAnimHumanoid43.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.USE = "hanim_r_ring0"

HAnimHumanoid43.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.USE = "hanim_l_ring1"

HAnimHumanoid43.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.USE = "hanim_r_ring1"

HAnimHumanoid43.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.USE = "hanim_l_ring2"

HAnimHumanoid43.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.USE = "hanim_r_ring2"

HAnimHumanoid43.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.USE = "hanim_l_ring3"

HAnimHumanoid43.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.USE = "hanim_r_ring3"

HAnimHumanoid43.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.USE = "hanim_l_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.USE = "hanim_r_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.USE = "hanim_l_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.USE = "hanim_r_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.USE = "hanim_l_subtalar"

HAnimHumanoid43.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.USE = "hanim_r_subtalar"

HAnimHumanoid43.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.USE = "hanim_l_thumb1"

HAnimHumanoid43.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.USE = "hanim_r_thumb1"

HAnimHumanoid43.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.USE = "hanim_l_thumb2"

HAnimHumanoid43.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.USE = "hanim_r_thumb2"

HAnimHumanoid43.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.USE = "hanim_l_thumb3"

HAnimHumanoid43.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.USE = "hanim_r_thumb3"

HAnimHumanoid43.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.USE = "hanim_l_wrist"

HAnimHumanoid43.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.USE = "hanim_r_wrist"

HAnimHumanoid43.joints.append(HAnimJoint1667)
HAnimSegment1668 = x3d.HAnimSegment()
HAnimSegment1668.USE = "hanim_pelvis"

HAnimHumanoid43.segments.append(HAnimSegment1668)
HAnimSegment1669 = x3d.HAnimSegment()
HAnimSegment1669.USE = "hanim_skull"

HAnimHumanoid43.segments.append(HAnimSegment1669)
HAnimSegment1670 = x3d.HAnimSegment()
HAnimSegment1670.USE = "hanim_jaw"

HAnimHumanoid43.segments.append(HAnimSegment1670)
HAnimSegment1671 = x3d.HAnimSegment()
HAnimSegment1671.USE = "hanim_c1"

HAnimHumanoid43.segments.append(HAnimSegment1671)
HAnimSegment1672 = x3d.HAnimSegment()
HAnimSegment1672.USE = "hanim_c2"

HAnimHumanoid43.segments.append(HAnimSegment1672)
HAnimSegment1673 = x3d.HAnimSegment()
HAnimSegment1673.USE = "hanim_c3"

HAnimHumanoid43.segments.append(HAnimSegment1673)
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.USE = "hanim_c4"

HAnimHumanoid43.segments.append(HAnimSegment1674)
HAnimSegment1675 = x3d.HAnimSegment()
HAnimSegment1675.USE = "hanim_c5"

HAnimHumanoid43.segments.append(HAnimSegment1675)
HAnimSegment1676 = x3d.HAnimSegment()
HAnimSegment1676.USE = "hanim_c6"

HAnimHumanoid43.segments.append(HAnimSegment1676)
HAnimSegment1677 = x3d.HAnimSegment()
HAnimSegment1677.USE = "hanim_c7"

HAnimHumanoid43.segments.append(HAnimSegment1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.USE = "hanim_t1"

HAnimHumanoid43.segments.append(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.USE = "hanim_t2"

HAnimHumanoid43.segments.append(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.USE = "hanim_t3"

HAnimHumanoid43.segments.append(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.USE = "hanim_t4"

HAnimHumanoid43.segments.append(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.USE = "hanim_t5"

HAnimHumanoid43.segments.append(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.USE = "hanim_t6"

HAnimHumanoid43.segments.append(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.USE = "hanim_t7"

HAnimHumanoid43.segments.append(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.USE = "hanim_t8"

HAnimHumanoid43.segments.append(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.USE = "hanim_t9"

HAnimHumanoid43.segments.append(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.USE = "hanim_t10"

HAnimHumanoid43.segments.append(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.USE = "hanim_t11"

HAnimHumanoid43.segments.append(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.USE = "hanim_t12"

HAnimHumanoid43.segments.append(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.USE = "hanim_l1"

HAnimHumanoid43.segments.append(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.USE = "hanim_l2"

HAnimHumanoid43.segments.append(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.USE = "hanim_l3"

HAnimHumanoid43.segments.append(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.USE = "hanim_l4"

HAnimHumanoid43.segments.append(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.USE = "hanim_l5"

HAnimHumanoid43.segments.append(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.USE = "hanim_sacrum"

HAnimHumanoid43.segments.append(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.USE = "hanim_l_calf"

HAnimHumanoid43.segments.append(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.USE = "hanim_r_calf"

HAnimHumanoid43.segments.append(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.USE = "hanim_l_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.USE = "hanim_r_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.USE = "hanim_l_eyeball"

HAnimHumanoid43.segments.append(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.USE = "hanim_r_eyeball"

HAnimHumanoid43.segments.append(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.USE = "hanim_l_eyebrow"

HAnimHumanoid43.segments.append(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.USE = "hanim_r_eyebrow"

HAnimHumanoid43.segments.append(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.USE = "hanim_l_eyelid"

HAnimHumanoid43.segments.append(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.USE = "hanim_r_eyelid"

HAnimHumanoid43.segments.append(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.USE = "hanim_l_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.USE = "hanim_r_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.USE = "hanim_l_forefoot"

HAnimHumanoid43.segments.append(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.USE = "hanim_r_forefoot"

HAnimHumanoid43.segments.append(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.USE = "hanim_l_hand"

HAnimHumanoid43.segments.append(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.USE = "hanim_r_hand"

HAnimHumanoid43.segments.append(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.USE = "hanim_l_hindfoot"

HAnimHumanoid43.segments.append(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.USE = "hanim_r_hindfoot"

HAnimHumanoid43.segments.append(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.USE = "hanim_l_index_distal"

HAnimHumanoid43.segments.append(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.USE = "hanim_r_index_distal"

HAnimHumanoid43.segments.append(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.USE = "hanim_l_index_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.USE = "hanim_r_index_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.USE = "hanim_l_index_middle"

HAnimHumanoid43.segments.append(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.USE = "hanim_r_index_middle"

HAnimHumanoid43.segments.append(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.USE = "hanim_l_index_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.USE = "hanim_r_index_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.USE = "hanim_l_middistal"

HAnimHumanoid43.segments.append(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.USE = "hanim_r_middistal"

HAnimHumanoid43.segments.append(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.USE = "hanim_l_middle_distal"

HAnimHumanoid43.segments.append(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.USE = "hanim_r_middle_distal"

HAnimHumanoid43.segments.append(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.USE = "hanim_l_middle_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.USE = "hanim_r_middle_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.USE = "hanim_l_middle_middle"

HAnimHumanoid43.segments.append(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.USE = "hanim_r_middle_middle"

HAnimHumanoid43.segments.append(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.USE = "hanim_l_middle_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.USE = "hanim_r_middle_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.USE = "hanim_l_midproximal"

HAnimHumanoid43.segments.append(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.USE = "hanim_r_midproximal"

HAnimHumanoid43.segments.append(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.USE = "hanim_l_pinky_distal"

HAnimHumanoid43.segments.append(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.USE = "hanim_r_pinky_distal"

HAnimHumanoid43.segments.append(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.USE = "hanim_l_pinky_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.USE = "hanim_r_pinky_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.USE = "hanim_l_pinky_middle"

HAnimHumanoid43.segments.append(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.USE = "hanim_r_pinky_middle"

HAnimHumanoid43.segments.append(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.USE = "hanim_l_pinky_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.USE = "hanim_r_pinky_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.USE = "hanim_l_ring_distal"

HAnimHumanoid43.segments.append(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.USE = "hanim_r_ring_distal"

HAnimHumanoid43.segments.append(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.USE = "hanim_l_ring_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.USE = "hanim_r_ring_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.USE = "hanim_l_ring_middle"

HAnimHumanoid43.segments.append(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.USE = "hanim_r_ring_middle"

HAnimHumanoid43.segments.append(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.USE = "hanim_l_ring_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.USE = "hanim_r_ring_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.USE = "hanim_l_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.USE = "hanim_r_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.USE = "hanim_l_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.USE = "hanim_r_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.USE = "hanim_l_thumb_distal"

HAnimHumanoid43.segments.append(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.USE = "hanim_r_thumb_distal"

HAnimHumanoid43.segments.append(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.USE = "hanim_l_thumb_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_r_thumb_metacarpal"

HAnimHumanoid43.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_l_thumb_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_r_thumb_proximal"

HAnimHumanoid43.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_l_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_r_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1761)
HAnimSite1762 = x3d.HAnimSite()
HAnimSite1762.USE = "hanim_crotch_pt"

HAnimHumanoid43.sites.append(HAnimSite1762)
HAnimSite1763 = x3d.HAnimSite()
HAnimSite1763.USE = "hanim_skull_tip"

HAnimHumanoid43.sites.append(HAnimSite1763)
HAnimSite1764 = x3d.HAnimSite()
HAnimSite1764.USE = "hanim_sellion_pt"

HAnimHumanoid43.sites.append(HAnimSite1764)
HAnimSite1765 = x3d.HAnimSite()
HAnimSite1765.USE = "hanim_supramenton_pt"

HAnimHumanoid43.sites.append(HAnimSite1765)
HAnimSite1766 = x3d.HAnimSite()
HAnimSite1766.USE = "hanim_nuchale_pt"

HAnimHumanoid43.sites.append(HAnimSite1766)
HAnimSite1767 = x3d.HAnimSite()
HAnimSite1767.USE = "hanim_suprasternale_pt"

HAnimHumanoid43.sites.append(HAnimSite1767)
HAnimSite1768 = x3d.HAnimSite()
HAnimSite1768.USE = "hanim_cervicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1768)
HAnimSite1769 = x3d.HAnimSite()
HAnimSite1769.USE = "hanim_substernale_pt"

HAnimHumanoid43.sites.append(HAnimSite1769)
HAnimSite1770 = x3d.HAnimSite()
HAnimSite1770.USE = "hanim_rib10_midspine_pt"

HAnimHumanoid43.sites.append(HAnimSite1770)
HAnimSite1771 = x3d.HAnimSite()
HAnimSite1771.USE = "hanim_waist_preferred_post_pt"

HAnimHumanoid43.sites.append(HAnimSite1771)
HAnimSite1772 = x3d.HAnimSite()
HAnimSite1772.USE = "hanim_navel_pt"

HAnimHumanoid43.sites.append(HAnimSite1772)
HAnimSite1773 = x3d.HAnimSite()
HAnimSite1773.USE = "hanim_l_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1773)
HAnimSite1774 = x3d.HAnimSite()
HAnimSite1774.USE = "hanim_r_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1774)
HAnimSite1775 = x3d.HAnimSite()
HAnimSite1775.USE = "hanim_r_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.USE = "hanim_l_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.USE = "hanim_l_axilla_ant_pt"

HAnimHumanoid43.sites.append(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.USE = "hanim_r_axilla_ant_pt"

HAnimHumanoid43.sites.append(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.USE = "hanim_l_axilla_post_pt"

HAnimHumanoid43.sites.append(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.USE = "hanim_r_axilla_post_pt"

HAnimHumanoid43.sites.append(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.USE = "hanim_l_calcaneous_post_pt"

HAnimHumanoid43.sites.append(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.USE = "hanim_r_calcaneous_post_pt"

HAnimHumanoid43.sites.append(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.USE = "hanim_l_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.USE = "hanim_r_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.USE = "hanim_l_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.USE = "hanim_r_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.USE = "hanim_l_digit2_pt"

HAnimHumanoid43.sites.append(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.USE = "hanim_r_digit2_pt"

HAnimHumanoid43.sites.append(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.USE = "hanim_l_femoral_lateral_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.USE = "hanim_r_femoral_lateral_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.USE = "hanim_l_femoral_medial_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.USE = "hanim_r_femoral_medial_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.USE = "hanim_l_forefoot_tip"

HAnimHumanoid43.sites.append(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.USE = "hanim_r_forefoot_tip"

HAnimHumanoid43.sites.append(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.USE = "hanim_r_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.USE = "hanim_l_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.USE = "hanim_l_humeral_lateral_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1797)
HAnimSite1798 = x3d.HAnimSite()
HAnimSite1798.USE = "hanim_r_humeral_lateral_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1798)
HAnimSite1799 = x3d.HAnimSite()
HAnimSite1799.USE = "hanim_l_humeral_medial_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1799)
HAnimSite1800 = x3d.HAnimSite()
HAnimSite1800.USE = "hanim_r_humeral_medial_epicn_pt"

HAnimHumanoid43.sites.append(HAnimSite1800)
HAnimSite1801 = x3d.HAnimSite()
HAnimSite1801.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1801)
HAnimSite1802 = x3d.HAnimSite()
HAnimSite1802.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1802)
HAnimSite1803 = x3d.HAnimSite()
HAnimSite1803.USE = "hanim_l_index_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1803)
HAnimSite1804 = x3d.HAnimSite()
HAnimSite1804.USE = "hanim_r_index_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1804)
HAnimSite1805 = x3d.HAnimSite()
HAnimSite1805.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1805)
HAnimSite1806 = x3d.HAnimSite()
HAnimSite1806.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1806)
HAnimSite1807 = x3d.HAnimSite()
HAnimSite1807.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1807)
HAnimSite1808 = x3d.HAnimSite()
HAnimSite1808.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1808)
HAnimSite1809 = x3d.HAnimSite()
HAnimSite1809.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1809)
HAnimSite1810 = x3d.HAnimSite()
HAnimSite1810.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1810)
HAnimSite1811 = x3d.HAnimSite()
HAnimSite1811.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1811)
HAnimSite1812 = x3d.HAnimSite()
HAnimSite1812.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1812)
HAnimSite1813 = x3d.HAnimSite()
HAnimSite1813.USE = "hanim_l_metacarpal_pha2_pt"

HAnimHumanoid43.sites.append(HAnimSite1813)
HAnimSite1814 = x3d.HAnimSite()
HAnimSite1814.USE = "hanim_r_metacarpal_pha2_pt"

HAnimHumanoid43.sites.append(HAnimSite1814)
HAnimSite1815 = x3d.HAnimSite()
HAnimSite1815.USE = "hanim_l_metacarpal_pha5_pt"

HAnimHumanoid43.sites.append(HAnimSite1815)
HAnimSite1816 = x3d.HAnimSite()
HAnimSite1816.USE = "hanim_r_metacarpal_pha5_pt"

HAnimHumanoid43.sites.append(HAnimSite1816)
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.USE = "hanim_l_metatarsal_pha1_pt"

HAnimHumanoid43.sites.append(HAnimSite1817)
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.USE = "hanim_r_metatarsal_pha1_pt"

HAnimHumanoid43.sites.append(HAnimSite1818)
HAnimSite1819 = x3d.HAnimSite()
HAnimSite1819.USE = "hanim_l_metatarsal_pha5_pt"

HAnimHumanoid43.sites.append(HAnimSite1819)
HAnimSite1820 = x3d.HAnimSite()
HAnimSite1820.USE = "hanim_r_metatarsal_pha5_pt"

HAnimHumanoid43.sites.append(HAnimSite1820)
HAnimSite1821 = x3d.HAnimSite()
HAnimSite1821.USE = "hanim_l_middle_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1821)
HAnimSite1822 = x3d.HAnimSite()
HAnimSite1822.USE = "hanim_r_middle_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1822)
HAnimSite1823 = x3d.HAnimSite()
HAnimSite1823.USE = "hanim_r_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1823)
HAnimSite1824 = x3d.HAnimSite()
HAnimSite1824.USE = "hanim_l_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1824)
HAnimSite1825 = x3d.HAnimSite()
HAnimSite1825.USE = "hanim_l_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1825)
HAnimSite1826 = x3d.HAnimSite()
HAnimSite1826.USE = "hanim_r_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1826)
HAnimSite1827 = x3d.HAnimSite()
HAnimSite1827.USE = "hanim_l_pinky_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1827)
HAnimSite1828 = x3d.HAnimSite()
HAnimSite1828.USE = "hanim_r_pinky_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1828)
HAnimSite1829 = x3d.HAnimSite()
HAnimSite1829.USE = "hanim_r_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1829)
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.USE = "hanim_l_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1830)
HAnimSite1831 = x3d.HAnimSite()
HAnimSite1831.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1831)
HAnimSite1832 = x3d.HAnimSite()
HAnimSite1832.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1832)
HAnimSite1833 = x3d.HAnimSite()
HAnimSite1833.USE = "hanim_l_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1833)
HAnimSite1834 = x3d.HAnimSite()
HAnimSite1834.USE = "hanim_r_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1834)
HAnimSite1835 = x3d.HAnimSite()
HAnimSite1835.USE = "hanim_r_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1835)
HAnimSite1836 = x3d.HAnimSite()
HAnimSite1836.USE = "hanim_l_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1836)
HAnimSite1837 = x3d.HAnimSite()
HAnimSite1837.USE = "hanim_l_ring_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1837)
HAnimSite1838 = x3d.HAnimSite()
HAnimSite1838.USE = "hanim_r_ring_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1838)
HAnimSite1839 = x3d.HAnimSite()
HAnimSite1839.USE = "hanim_temporomandibular_l_site_pt"

HAnimHumanoid43.sites.append(HAnimSite1839)
HAnimSite1840 = x3d.HAnimSite()
HAnimSite1840.USE = "hanim_temporomandibular_r_site_pt"

HAnimHumanoid43.sites.append(HAnimSite1840)
HAnimSite1841 = x3d.HAnimSite()
HAnimSite1841.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1841)
HAnimSite1842 = x3d.HAnimSite()
HAnimSite1842.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1842)
HAnimSite1843 = x3d.HAnimSite()
HAnimSite1843.USE = "hanim_r_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1843)
HAnimSite1844 = x3d.HAnimSite()
HAnimSite1844.USE = "hanim_l_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1844)
HAnimSite1845 = x3d.HAnimSite()
HAnimSite1845.USE = "hanim_l_thumb_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1845)
HAnimSite1846 = x3d.HAnimSite()
HAnimSite1846.USE = "hanim_r_thumb_distal_tip"

HAnimHumanoid43.sites.append(HAnimSite1846)
HAnimSite1847 = x3d.HAnimSite()
HAnimSite1847.USE = "hanim_r_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1847)
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.USE = "hanim_l_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1848)
HAnimSite1849 = x3d.HAnimSite()
HAnimSite1849.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1849)
HAnimSite1850 = x3d.HAnimSite()
HAnimSite1850.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1850)
HAnimSite1851 = x3d.HAnimSite()
HAnimSite1851.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1851)
HAnimSite1852 = x3d.HAnimSite()
HAnimSite1852.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1852)
HAnimSite1853 = x3d.HAnimSite()
HAnimSite1853.DEF = "hanim_l_inclined_view"
HAnimSite1853.name = "l_inclined_view"
HAnimSite1853.translation = [1.62,1.05,2.06]
HAnimSite1853.rotation = [-0.113,0.993,0.0347,0.671]
Viewpoint1854 = x3d.Viewpoint()
Viewpoint1854.DEF = "hanim_l_inclined_viewpoint"
Viewpoint1854.description = "left inclined"
Viewpoint1854.position = [0,0,0]

HAnimSite1853.children.append(Viewpoint1854)
Anchor1855 = x3d.Anchor()
Anchor1855.description = "HAnimSite Viewpoint hanim_l_inclined_view"
Anchor1855.url = ["#hanim_l_inclined_viewpoint"]
LOD1856 = x3d.LOD()
LOD1856.forceTransitions = True
LOD1856.range = [0.04]
WorldInfo1857 = x3d.WorldInfo()
WorldInfo1857.info = ["hide diamond when close"]

LOD1856.children.append(WorldInfo1857)
Shape1858 = x3d.Shape()
Shape1858.USE = "HAnimSiteViewpointShape"

LOD1856.children.append(Shape1858)

Anchor1855.children.append(LOD1856)

HAnimSite1853.children.append(Anchor1855)

HAnimHumanoid43.viewpoints.append(HAnimSite1853)
HAnimSite1859 = x3d.HAnimSite()
HAnimSite1859.DEF = "hanim_r_inclined_view"
HAnimSite1859.name = "r_inclined_view"
HAnimSite1859.translation = [-1.62,1.05,2.06]
HAnimSite1859.rotation = [-0.113,-0.993,0.0347,0.671]
Viewpoint1860 = x3d.Viewpoint()
Viewpoint1860.DEF = "hanim_r_inclined_viewpoint"
Viewpoint1860.description = "right inclined"
Viewpoint1860.position = [0,0,0]
Viewpoint1860.centerOfRotation = [0,0.9,0]

HAnimSite1859.children.append(Viewpoint1860)
Anchor1861 = x3d.Anchor()
Anchor1861.description = "HAnimSite Viewpoint hanim_r_inclined_view"
Anchor1861.url = ["#hanim_r_inclined_viewpoint"]
LOD1862 = x3d.LOD()
LOD1862.forceTransitions = True
LOD1862.range = [0.04]
WorldInfo1863 = x3d.WorldInfo()
WorldInfo1863.info = ["hide diamond when close"]

LOD1862.children.append(WorldInfo1863)
Shape1864 = x3d.Shape()
Shape1864.USE = "HAnimSiteViewpointShape"

LOD1862.children.append(Shape1864)

Anchor1861.children.append(LOD1862)

HAnimSite1859.children.append(Anchor1861)

HAnimHumanoid43.viewpoints.append(HAnimSite1859)
HAnimSite1865 = x3d.HAnimSite()
HAnimSite1865.DEF = "hanim_front_view"
HAnimSite1865.name = "front_view"
HAnimSite1865.translation = [0,0.85,2.58]
Viewpoint1866 = x3d.Viewpoint()
Viewpoint1866.DEF = "hanim_front_viewpoint"
Viewpoint1866.description = "front"
Viewpoint1866.position = [0,0,0]
Viewpoint1866.centerOfRotation = [0,0.9,0]

HAnimSite1865.children.append(Viewpoint1866)
Anchor1867 = x3d.Anchor()
Anchor1867.description = "HAnimSite Viewpoint hanim_front_view"
Anchor1867.url = ["#hanim_front_viewpoint"]
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

HAnimSite1865.children.append(Anchor1867)

HAnimHumanoid43.viewpoints.append(HAnimSite1865)
HAnimSite1871 = x3d.HAnimSite()
HAnimSite1871.DEF = "hanim_back_view"
HAnimSite1871.name = "back_view"
HAnimSite1871.translation = [0,0.85,-2.58]
HAnimSite1871.rotation = [0,1,0,3.14]
Viewpoint1872 = x3d.Viewpoint()
Viewpoint1872.DEF = "hanim_back_viewpoint"
Viewpoint1872.description = "back"
Viewpoint1872.position = [0,0,0]
Viewpoint1872.centerOfRotation = [0,0.9,0]

HAnimSite1871.children.append(Viewpoint1872)
Anchor1873 = x3d.Anchor()
Anchor1873.description = "HAnimSite Viewpoint hanim_back_view"
Anchor1873.url = ["#hanim_back_viewpoint"]
LOD1874 = x3d.LOD()
LOD1874.forceTransitions = True
LOD1874.range = [0.04]
WorldInfo1875 = x3d.WorldInfo()
WorldInfo1875.info = ["hide diamond when close"]

LOD1874.children.append(WorldInfo1875)
Shape1876 = x3d.Shape()
Shape1876.USE = "HAnimSiteViewpointShape"

LOD1874.children.append(Shape1876)

Anchor1873.children.append(LOD1874)

HAnimSite1871.children.append(Anchor1873)

HAnimHumanoid43.viewpoints.append(HAnimSite1871)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.DEF = "hanim_l_side_view"
HAnimSite1877.name = "l_side_view"
HAnimSite1877.translation = [2.6,0.854,0]
HAnimSite1877.rotation = [0,1,0,1.5708]
Viewpoint1878 = x3d.Viewpoint()
Viewpoint1878.DEF = "hanim_l_side_viewpoint"
Viewpoint1878.description = "left side"
Viewpoint1878.position = [0,0,0]
Viewpoint1878.centerOfRotation = [0,0.9,0]

HAnimSite1877.children.append(Viewpoint1878)
Anchor1879 = x3d.Anchor()
Anchor1879.description = "HAnimSite Viewpoint hanim_l_side_view"
Anchor1879.url = ["#hanim_l_side_viewpoint"]
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

HAnimSite1877.children.append(Anchor1879)

HAnimHumanoid43.viewpoints.append(HAnimSite1877)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.DEF = "hanim_Top_view"
HAnimSite1883.name = "Top_view"
HAnimSite1883.translation = [0,3.5,0]
HAnimSite1883.rotation = [1,0,0,-1.57]
Viewpoint1884 = x3d.Viewpoint()
Viewpoint1884.DEF = "hanim_Top_viewpoint"
Viewpoint1884.description = "Top"
Viewpoint1884.position = [0,0,0]
Viewpoint1884.centerOfRotation = [0,0.9,0]

HAnimSite1883.children.append(Viewpoint1884)
Anchor1885 = x3d.Anchor()
Anchor1885.description = "HAnimSite Viewpoint hanim_Top_view"
Anchor1885.url = ["#hanim_Top_viewpoint"]
LOD1886 = x3d.LOD()
LOD1886.forceTransitions = True
LOD1886.range = [0.04]
WorldInfo1887 = x3d.WorldInfo()
WorldInfo1887.info = ["hide diamond when close"]

LOD1886.children.append(WorldInfo1887)
Shape1888 = x3d.Shape()
Shape1888.USE = "HAnimSiteViewpointShape"

LOD1886.children.append(Shape1888)

Anchor1885.children.append(LOD1886)

HAnimSite1883.children.append(Anchor1885)

HAnimHumanoid43.viewpoints.append(HAnimSite1883)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.DEF = "hanim_front_close_view"
HAnimSite1889.name = "front_close_view"
HAnimSite1889.translation = [0,0.854,1.575]
Viewpoint1890 = x3d.Viewpoint()
Viewpoint1890.DEF = "hanim_front_close_viewpoint"
Viewpoint1890.description = "front close"
Viewpoint1890.position = [0,0,0]
Viewpoint1890.centerOfRotation = [0,0,1.575]

HAnimSite1889.children.append(Viewpoint1890)
Anchor1891 = x3d.Anchor()
Anchor1891.description = "HAnimSite Viewpoint hanim_front_close_view"
Anchor1891.url = ["#hanim_front_close_viewpoint"]
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

HAnimSite1889.children.append(Anchor1891)

HAnimHumanoid43.viewpoints.append(HAnimSite1889)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.DEF = "hanim_side_close_view"
HAnimSite1895.name = "side_close_view"
HAnimSite1895.translation = [1.56,0.854,0]
HAnimSite1895.rotation = [0,1,0,1.5708]
Viewpoint1896 = x3d.Viewpoint()
Viewpoint1896.DEF = "hanim_side_close_viewpoint"
Viewpoint1896.description = "side close"
Viewpoint1896.position = [0,0,0]
Viewpoint1896.centerOfRotation = [1.6,0,0]

HAnimSite1895.children.append(Viewpoint1896)
Anchor1897 = x3d.Anchor()
Anchor1897.description = "HAnimSite Viewpoint hanim_side_close_view"
Anchor1897.url = ["#hanim_side_close_viewpoint"]
LOD1898 = x3d.LOD()
LOD1898.forceTransitions = True
LOD1898.range = [0.04]
WorldInfo1899 = x3d.WorldInfo()
WorldInfo1899.info = ["hide diamond when close"]

LOD1898.children.append(WorldInfo1899)
Shape1900 = x3d.Shape()
Shape1900.USE = "HAnimSiteViewpointShape"

LOD1898.children.append(Shape1900)

Anchor1897.children.append(LOD1898)

HAnimSite1895.children.append(Anchor1897)

HAnimHumanoid43.viewpoints.append(HAnimSite1895)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.DEF = "hanim_head_front_close_view"
HAnimSite1901.name = "head_front_close_view"
HAnimSite1901.translation = [0,1.5,1]
Viewpoint1902 = x3d.Viewpoint()
Viewpoint1902.DEF = "hanim_head_front_close_viewpoint"
Viewpoint1902.description = "head front close"
Viewpoint1902.position = [0,0,0]
Viewpoint1902.centerOfRotation = [0,0,1]

HAnimSite1901.children.append(Viewpoint1902)
Anchor1903 = x3d.Anchor()
Anchor1903.description = "HAnimSite Viewpoint hanim_head_front_close_view"
Anchor1903.url = ["#hanim_head_front_close_viewpoint"]
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

HAnimSite1901.children.append(Anchor1903)

HAnimHumanoid43.viewpoints.append(HAnimSite1901)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.DEF = "hanim_chest_front_close_view"
HAnimSite1907.name = "chest_front_close_view"
HAnimSite1907.translation = [0,1.2,1]
Viewpoint1908 = x3d.Viewpoint()
Viewpoint1908.DEF = "hanim_chest_front_close_viewpoint"
Viewpoint1908.description = "chest front close"
Viewpoint1908.position = [0,0,0]
Viewpoint1908.centerOfRotation = [0,0,1]

HAnimSite1907.children.append(Viewpoint1908)
Anchor1909 = x3d.Anchor()
Anchor1909.description = "HAnimSite Viewpoint hanim_chest_front_close_view"
Anchor1909.url = ["#hanim_chest_front_close_viewpoint"]
LOD1910 = x3d.LOD()
LOD1910.forceTransitions = True
LOD1910.range = [0.04]
WorldInfo1911 = x3d.WorldInfo()
WorldInfo1911.info = ["hide diamond when close"]

LOD1910.children.append(WorldInfo1911)
Shape1912 = x3d.Shape()
Shape1912.USE = "HAnimSiteViewpointShape"

LOD1910.children.append(Shape1912)

Anchor1909.children.append(LOD1910)

HAnimSite1907.children.append(Anchor1909)

HAnimHumanoid43.viewpoints.append(HAnimSite1907)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.DEF = "hanim_pelvis_front_close_view"
HAnimSite1913.name = "pelvis_front_close_view"
HAnimSite1913.translation = [0,0.8,1]
Viewpoint1914 = x3d.Viewpoint()
Viewpoint1914.DEF = "hanim_pelvis_front_close_viewpoint"
Viewpoint1914.description = "pelvis front close"
Viewpoint1914.position = [0,0,0]
Viewpoint1914.centerOfRotation = [0,0,1]

HAnimSite1913.children.append(Viewpoint1914)
Anchor1915 = x3d.Anchor()
Anchor1915.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view"
Anchor1915.url = ["#hanim_pelvis_front_close_viewpoint"]
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

HAnimSite1913.children.append(Anchor1915)

HAnimHumanoid43.viewpoints.append(HAnimSite1913)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.DEF = "hanim_knees_front_close_view"
HAnimSite1919.name = "knees_front_close_view"
HAnimSite1919.translation = [0,0.4,1]
Viewpoint1920 = x3d.Viewpoint()
Viewpoint1920.DEF = "hanim_knees_front_close_viewpoint"
Viewpoint1920.description = "knees front close"
Viewpoint1920.position = [0,0,0]
Viewpoint1920.centerOfRotation = [0,0.4,0]

HAnimSite1919.children.append(Viewpoint1920)
Anchor1921 = x3d.Anchor()
Anchor1921.description = "HAnimSite Viewpoint hanim_knees_front_close_view"
Anchor1921.url = ["#hanim_knees_front_close_viewpoint"]
LOD1922 = x3d.LOD()
LOD1922.forceTransitions = True
LOD1922.range = [0.04]
WorldInfo1923 = x3d.WorldInfo()
WorldInfo1923.info = ["hide diamond when close"]

LOD1922.children.append(WorldInfo1923)
Shape1924 = x3d.Shape()
Shape1924.USE = "HAnimSiteViewpointShape"

LOD1922.children.append(Shape1924)

Anchor1921.children.append(LOD1922)

HAnimSite1919.children.append(Anchor1921)

HAnimHumanoid43.viewpoints.append(HAnimSite1919)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.DEF = "hanim_feet_front_close_view"
HAnimSite1925.name = "feet_front_close_view"
HAnimSite1925.translation = [0,0,1]
Viewpoint1926 = x3d.Viewpoint()
Viewpoint1926.DEF = "hanim_feet_front_close_viewpoint"
Viewpoint1926.description = "feet front close"
Viewpoint1926.position = [0,0,0]

HAnimSite1925.children.append(Viewpoint1926)
Anchor1927 = x3d.Anchor()
Anchor1927.description = "HAnimSite Viewpoint hanim_feet_front_close_view"
Anchor1927.url = ["#hanim_feet_front_close_viewpoint"]
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

HAnimSite1925.children.append(Anchor1927)

HAnimHumanoid43.viewpoints.append(HAnimSite1925)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.DEF = "hanim_eye_level_view"
HAnimSite1931.name = "eye_level_view"
HAnimSite1931.translation = [0,1.6332,0.0502]
Viewpoint1932 = x3d.Viewpoint()
Viewpoint1932.DEF = "hanim_eye_level_viewpoint"
Viewpoint1932.description = "eye level looking forward"
Viewpoint1932.position = [0,0,0]
Viewpoint1932.orientation = [0,1,0,3.141593]

HAnimSite1931.children.append(Viewpoint1932)
Anchor1933 = x3d.Anchor()
Anchor1933.description = "HAnimSite Viewpoint hanim_eye_level_view"
Anchor1933.url = ["#hanim_eye_level_viewpoint"]
LOD1934 = x3d.LOD()
LOD1934.forceTransitions = True
LOD1934.range = [0.04]
WorldInfo1935 = x3d.WorldInfo()
WorldInfo1935.info = ["hide diamond when close"]

LOD1934.children.append(WorldInfo1935)
Shape1936 = x3d.Shape()
Shape1936.USE = "HAnimSiteViewpointShape"

LOD1934.children.append(Shape1936)

Anchor1933.children.append(LOD1934)

HAnimSite1931.children.append(Anchor1933)

HAnimHumanoid43.viewpoints.append(HAnimSite1931)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.USE = "hanim_l_eyeball_site_view"

HAnimHumanoid43.sites.append(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.USE = "hanim_r_eyeball_site_view"

HAnimHumanoid43.sites.append(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.USE = "hanim_l_hand_front_view"

HAnimHumanoid43.sites.append(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.USE = "hanim_r_hand_front_view"

HAnimHumanoid43.sites.append(HAnimSite1940)

Scene29.children.append(HAnimHumanoid43)
Group1941 = x3d.Group()
Group1941.DEF = "StopAnimation"
TimeSensor1942 = x3d.TimeSensor()
TimeSensor1942.DEF = "StopTimer"
TimeSensor1942.cycleInterval = 5.73
TimeSensor1942.loop = True

Group1941.children.append(TimeSensor1942)
PositionInterpolator1943 = x3d.PositionInterpolator()
PositionInterpolator1943.DEF = "Stop_HumanoidRoot_TranslationInterpolator"
PositionInterpolator1943.key = [0,0.5,1]
PositionInterpolator1943.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group1941.children.append(PositionInterpolator1943)
OrientationInterpolator1944 = x3d.OrientationInterpolator()
OrientationInterpolator1944.DEF = "Stop_HumanoidRoot_RotationInterpolator"
OrientationInterpolator1944.key = [0,0.5,1]
OrientationInterpolator1944.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1944)
OrientationInterpolator1945 = x3d.OrientationInterpolator()
OrientationInterpolator1945.DEF = "Stop_sacroiliac_RotationInterpolator"
OrientationInterpolator1945.key = [0,0.5,1]
OrientationInterpolator1945.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1945)
OrientationInterpolator1946 = x3d.OrientationInterpolator()
OrientationInterpolator1946.DEF = "Stop_l_hip_RotationInterpolator"
OrientationInterpolator1946.key = [0,0.5,1]
OrientationInterpolator1946.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1946)
OrientationInterpolator1947 = x3d.OrientationInterpolator()
OrientationInterpolator1947.DEF = "Stop_l_knee_RotationInterpolator"
OrientationInterpolator1947.key = [0,0.5,1]
OrientationInterpolator1947.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1947)
OrientationInterpolator1948 = x3d.OrientationInterpolator()
OrientationInterpolator1948.DEF = "Stop_l_ankle_RotationInterpolator"
OrientationInterpolator1948.key = [0,0.5,1]
OrientationInterpolator1948.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1948)
OrientationInterpolator1949 = x3d.OrientationInterpolator()
OrientationInterpolator1949.DEF = "Stop_l_subtalar_RotationInterpolator"
OrientationInterpolator1949.key = [0,0.5,1]
OrientationInterpolator1949.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1949)
OrientationInterpolator1950 = x3d.OrientationInterpolator()
OrientationInterpolator1950.DEF = "Stop_l_midtarsal_RotationInterpolator"
OrientationInterpolator1950.key = [0,0.5,1]
OrientationInterpolator1950.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1950)
OrientationInterpolator1951 = x3d.OrientationInterpolator()
OrientationInterpolator1951.DEF = "Stop_l_metatarsal_RotationInterpolator"
OrientationInterpolator1951.key = [0,0.5,1]
OrientationInterpolator1951.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1951)
OrientationInterpolator1952 = x3d.OrientationInterpolator()
OrientationInterpolator1952.DEF = "Stop_r_hip_RotationInterpolator"
OrientationInterpolator1952.key = [0,0.5,1]
OrientationInterpolator1952.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1952)
OrientationInterpolator1953 = x3d.OrientationInterpolator()
OrientationInterpolator1953.DEF = "Stop_r_knee_RotationInterpolator"
OrientationInterpolator1953.key = [0,0.5,1]
OrientationInterpolator1953.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1953)
OrientationInterpolator1954 = x3d.OrientationInterpolator()
OrientationInterpolator1954.DEF = "Stop_r_ankle_RotationInterpolator"
OrientationInterpolator1954.key = [0,0.5,1]
OrientationInterpolator1954.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1954)
OrientationInterpolator1955 = x3d.OrientationInterpolator()
OrientationInterpolator1955.DEF = "Stop_r_subtalar_RotationInterpolator"
OrientationInterpolator1955.key = [0,0.5,1]
OrientationInterpolator1955.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1955)
OrientationInterpolator1956 = x3d.OrientationInterpolator()
OrientationInterpolator1956.DEF = "Stop_r_midtarsal_RotationInterpolator"
OrientationInterpolator1956.key = [0,0.5,1]
OrientationInterpolator1956.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1956)
OrientationInterpolator1957 = x3d.OrientationInterpolator()
OrientationInterpolator1957.DEF = "Stop_r_metatarsal_RotationInterpolator"
OrientationInterpolator1957.key = [0,0.5,1]
OrientationInterpolator1957.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1957)
OrientationInterpolator1958 = x3d.OrientationInterpolator()
OrientationInterpolator1958.DEF = "Stop_vl5_RotationInterpolator"
OrientationInterpolator1958.key = [0,0.5,1]
OrientationInterpolator1958.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1958)
OrientationInterpolator1959 = x3d.OrientationInterpolator()
OrientationInterpolator1959.DEF = "Stop_vl4_RotationInterpolator"
OrientationInterpolator1959.key = [0,0.5,1]
OrientationInterpolator1959.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1959)
OrientationInterpolator1960 = x3d.OrientationInterpolator()
OrientationInterpolator1960.DEF = "Stop_vl3_RotationInterpolator"
OrientationInterpolator1960.key = [0,0.5,1]
OrientationInterpolator1960.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1960)
OrientationInterpolator1961 = x3d.OrientationInterpolator()
OrientationInterpolator1961.DEF = "Stop_vl2_RotationInterpolator"
OrientationInterpolator1961.key = [0,0.5,1]
OrientationInterpolator1961.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1961)
OrientationInterpolator1962 = x3d.OrientationInterpolator()
OrientationInterpolator1962.DEF = "Stop_vl1_RotationInterpolator"
OrientationInterpolator1962.key = [0,0.5,1]
OrientationInterpolator1962.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1962)
OrientationInterpolator1963 = x3d.OrientationInterpolator()
OrientationInterpolator1963.DEF = "Stop_vt12_RotationInterpolator"
OrientationInterpolator1963.key = [0,0.5,1]
OrientationInterpolator1963.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1963)
OrientationInterpolator1964 = x3d.OrientationInterpolator()
OrientationInterpolator1964.DEF = "Stop_vt11_RotationInterpolator"
OrientationInterpolator1964.key = [0,0.5,1]
OrientationInterpolator1964.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1964)
OrientationInterpolator1965 = x3d.OrientationInterpolator()
OrientationInterpolator1965.DEF = "Stop_vt10_RotationInterpolator"
OrientationInterpolator1965.key = [0,0.5,1]
OrientationInterpolator1965.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1965)
OrientationInterpolator1966 = x3d.OrientationInterpolator()
OrientationInterpolator1966.DEF = "Stop_vt9_RotationInterpolator"
OrientationInterpolator1966.key = [0,0.5,1]
OrientationInterpolator1966.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1966)
OrientationInterpolator1967 = x3d.OrientationInterpolator()
OrientationInterpolator1967.DEF = "Stop_vt8_RotationInterpolator"
OrientationInterpolator1967.key = [0,0.5,1]
OrientationInterpolator1967.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1967)
OrientationInterpolator1968 = x3d.OrientationInterpolator()
OrientationInterpolator1968.DEF = "Stop_vt7_RotationInterpolator"
OrientationInterpolator1968.key = [0,0.5,1]
OrientationInterpolator1968.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1968)
OrientationInterpolator1969 = x3d.OrientationInterpolator()
OrientationInterpolator1969.DEF = "Stop_vt6_RotationInterpolator"
OrientationInterpolator1969.key = [0,0.5,1]
OrientationInterpolator1969.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1969)
OrientationInterpolator1970 = x3d.OrientationInterpolator()
OrientationInterpolator1970.DEF = "Stop_vt5_RotationInterpolator"
OrientationInterpolator1970.key = [0,0.5,1]
OrientationInterpolator1970.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1970)
OrientationInterpolator1971 = x3d.OrientationInterpolator()
OrientationInterpolator1971.DEF = "Stop_vt4_RotationInterpolator"
OrientationInterpolator1971.key = [0,0.5,1]
OrientationInterpolator1971.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1971)
OrientationInterpolator1972 = x3d.OrientationInterpolator()
OrientationInterpolator1972.DEF = "Stop_vt3_RotationInterpolator"
OrientationInterpolator1972.key = [0,0.5,1]
OrientationInterpolator1972.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1972)
OrientationInterpolator1973 = x3d.OrientationInterpolator()
OrientationInterpolator1973.DEF = "Stop_vt2_RotationInterpolator"
OrientationInterpolator1973.key = [0,0.5,1]
OrientationInterpolator1973.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1973)
OrientationInterpolator1974 = x3d.OrientationInterpolator()
OrientationInterpolator1974.DEF = "Stop_vt1_RotationInterpolator"
OrientationInterpolator1974.key = [0,0.5,1]
OrientationInterpolator1974.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1974)
OrientationInterpolator1975 = x3d.OrientationInterpolator()
OrientationInterpolator1975.DEF = "Stop_vc7_RotationInterpolator"
OrientationInterpolator1975.key = [0,0.5,1]
OrientationInterpolator1975.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1975)
OrientationInterpolator1976 = x3d.OrientationInterpolator()
OrientationInterpolator1976.DEF = "Stop_vc6_RotationInterpolator"
OrientationInterpolator1976.key = [0,0.5,1]
OrientationInterpolator1976.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1976)
OrientationInterpolator1977 = x3d.OrientationInterpolator()
OrientationInterpolator1977.DEF = "Stop_vc5_RotationInterpolator"
OrientationInterpolator1977.key = [0,0.5,1]
OrientationInterpolator1977.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1977)
OrientationInterpolator1978 = x3d.OrientationInterpolator()
OrientationInterpolator1978.DEF = "Stop_vc4_RotationInterpolator"
OrientationInterpolator1978.key = [0,0.5,1]
OrientationInterpolator1978.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1978)
OrientationInterpolator1979 = x3d.OrientationInterpolator()
OrientationInterpolator1979.DEF = "Stop_vc3_RotationInterpolator"
OrientationInterpolator1979.key = [0,0.5,1]
OrientationInterpolator1979.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1979)
OrientationInterpolator1980 = x3d.OrientationInterpolator()
OrientationInterpolator1980.DEF = "Stop_vc2_RotationInterpolator"
OrientationInterpolator1980.key = [0,0.5,1]
OrientationInterpolator1980.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1980)
OrientationInterpolator1981 = x3d.OrientationInterpolator()
OrientationInterpolator1981.DEF = "Stop_vc1_RotationInterpolator"
OrientationInterpolator1981.key = [0,0.5,1]
OrientationInterpolator1981.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1981)
OrientationInterpolator1982 = x3d.OrientationInterpolator()
OrientationInterpolator1982.DEF = "Stop_skullbase_RotationInterpolator"
OrientationInterpolator1982.key = [0,0.5,1]
OrientationInterpolator1982.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1982)
OrientationInterpolator1983 = x3d.OrientationInterpolator()
OrientationInterpolator1983.DEF = "Stop_l_eyeball_joint_RotationInterpolator"
OrientationInterpolator1983.key = [0,0.5,1]
OrientationInterpolator1983.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1983)
OrientationInterpolator1984 = x3d.OrientationInterpolator()
OrientationInterpolator1984.DEF = "Stop_r_eyeball_joint_RotationInterpolator"
OrientationInterpolator1984.key = [0,0.5,1]
OrientationInterpolator1984.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1984)
OrientationInterpolator1985 = x3d.OrientationInterpolator()
OrientationInterpolator1985.DEF = "Stop_l_sternoclavicular_RotationInterpolator"
OrientationInterpolator1985.key = [0,0.5,1]
OrientationInterpolator1985.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1985)
OrientationInterpolator1986 = x3d.OrientationInterpolator()
OrientationInterpolator1986.DEF = "Stop_l_acromioclavicular_RotationInterpolator"
OrientationInterpolator1986.key = [0,0.5,1]
OrientationInterpolator1986.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1986)
OrientationInterpolator1987 = x3d.OrientationInterpolator()
OrientationInterpolator1987.DEF = "Stop_l_shoulder_RotationInterpolator"
OrientationInterpolator1987.key = [0,0.5,1]
OrientationInterpolator1987.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1987)
OrientationInterpolator1988 = x3d.OrientationInterpolator()
OrientationInterpolator1988.DEF = "Stop_l_elbow_RotationInterpolator"
OrientationInterpolator1988.key = [0,0.5,1]
OrientationInterpolator1988.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1988)
OrientationInterpolator1989 = x3d.OrientationInterpolator()
OrientationInterpolator1989.DEF = "Stop_l_wrist_RotationInterpolator"
OrientationInterpolator1989.key = [0,0.5,1]
OrientationInterpolator1989.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1989)
OrientationInterpolator1990 = x3d.OrientationInterpolator()
OrientationInterpolator1990.DEF = "Stop_l_thumb1_RotationInterpolator"
OrientationInterpolator1990.key = [0,0.5,1]
OrientationInterpolator1990.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1990)
OrientationInterpolator1991 = x3d.OrientationInterpolator()
OrientationInterpolator1991.DEF = "Stop_l_thumb2_RotationInterpolator"
OrientationInterpolator1991.key = [0,0.5,1]
OrientationInterpolator1991.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1991)
OrientationInterpolator1992 = x3d.OrientationInterpolator()
OrientationInterpolator1992.DEF = "Stop_l_thumb3_RotationInterpolator"
OrientationInterpolator1992.key = [0,0.5,1]
OrientationInterpolator1992.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1992)
OrientationInterpolator1993 = x3d.OrientationInterpolator()
OrientationInterpolator1993.DEF = "Stop_l_index0_RotationInterpolator"
OrientationInterpolator1993.key = [0,0.5,1]
OrientationInterpolator1993.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1993)
OrientationInterpolator1994 = x3d.OrientationInterpolator()
OrientationInterpolator1994.DEF = "Stop_l_index1_RotationInterpolator"
OrientationInterpolator1994.key = [0,0.5,1]
OrientationInterpolator1994.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1994)
OrientationInterpolator1995 = x3d.OrientationInterpolator()
OrientationInterpolator1995.DEF = "Stop_l_index2_RotationInterpolator"
OrientationInterpolator1995.key = [0,0.5,1]
OrientationInterpolator1995.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1995)
OrientationInterpolator1996 = x3d.OrientationInterpolator()
OrientationInterpolator1996.DEF = "Stop_l_index3_RotationInterpolator"
OrientationInterpolator1996.key = [0,0.5,1]
OrientationInterpolator1996.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1996)
OrientationInterpolator1997 = x3d.OrientationInterpolator()
OrientationInterpolator1997.DEF = "Stop_l_middle0_RotationInterpolator"
OrientationInterpolator1997.key = [0,0.5,1]
OrientationInterpolator1997.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1997)
OrientationInterpolator1998 = x3d.OrientationInterpolator()
OrientationInterpolator1998.DEF = "Stop_l_middle1_RotationInterpolator"
OrientationInterpolator1998.key = [0,0.5,1]
OrientationInterpolator1998.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1998)
OrientationInterpolator1999 = x3d.OrientationInterpolator()
OrientationInterpolator1999.DEF = "Stop_l_middle2_RotationInterpolator"
OrientationInterpolator1999.key = [0,0.5,1]
OrientationInterpolator1999.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator1999)
OrientationInterpolator2000 = x3d.OrientationInterpolator()
OrientationInterpolator2000.DEF = "Stop_l_middle3_RotationInterpolator"
OrientationInterpolator2000.key = [0,0.5,1]
OrientationInterpolator2000.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2000)
OrientationInterpolator2001 = x3d.OrientationInterpolator()
OrientationInterpolator2001.DEF = "Stop_l_ring0_RotationInterpolator"
OrientationInterpolator2001.key = [0,0.5,1]
OrientationInterpolator2001.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2001)
OrientationInterpolator2002 = x3d.OrientationInterpolator()
OrientationInterpolator2002.DEF = "Stop_l_ring1_RotationInterpolator"
OrientationInterpolator2002.key = [0,0.5,1]
OrientationInterpolator2002.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2002)
OrientationInterpolator2003 = x3d.OrientationInterpolator()
OrientationInterpolator2003.DEF = "Stop_l_ring2_RotationInterpolator"
OrientationInterpolator2003.key = [0,0.5,1]
OrientationInterpolator2003.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2003)
OrientationInterpolator2004 = x3d.OrientationInterpolator()
OrientationInterpolator2004.DEF = "Stop_l_ring3_RotationInterpolator"
OrientationInterpolator2004.key = [0,0.5,1]
OrientationInterpolator2004.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2004)
OrientationInterpolator2005 = x3d.OrientationInterpolator()
OrientationInterpolator2005.DEF = "Stop_l_pinky0_RotationInterpolator"
OrientationInterpolator2005.key = [0,0.5,1]
OrientationInterpolator2005.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2005)
OrientationInterpolator2006 = x3d.OrientationInterpolator()
OrientationInterpolator2006.DEF = "Stop_l_pinky1_RotationInterpolator"
OrientationInterpolator2006.key = [0,0.5,1]
OrientationInterpolator2006.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2006)
OrientationInterpolator2007 = x3d.OrientationInterpolator()
OrientationInterpolator2007.DEF = "Stop_l_pinky2_RotationInterpolator"
OrientationInterpolator2007.key = [0,0.5,1]
OrientationInterpolator2007.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2007)
OrientationInterpolator2008 = x3d.OrientationInterpolator()
OrientationInterpolator2008.DEF = "Stop_l_pinky3_RotationInterpolator"
OrientationInterpolator2008.key = [0,0.5,1]
OrientationInterpolator2008.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2008)
OrientationInterpolator2009 = x3d.OrientationInterpolator()
OrientationInterpolator2009.DEF = "Stop_r_sternoclavicular_RotationInterpolator"
OrientationInterpolator2009.key = [0,0.5,1]
OrientationInterpolator2009.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2009)
OrientationInterpolator2010 = x3d.OrientationInterpolator()
OrientationInterpolator2010.DEF = "Stop_r_acromioclavicular_RotationInterpolator"
OrientationInterpolator2010.key = [0,0.5,1]
OrientationInterpolator2010.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2010)
OrientationInterpolator2011 = x3d.OrientationInterpolator()
OrientationInterpolator2011.DEF = "Stop_r_shoulder_RotationInterpolator"
OrientationInterpolator2011.key = [0,0.5,1]
OrientationInterpolator2011.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2011)
OrientationInterpolator2012 = x3d.OrientationInterpolator()
OrientationInterpolator2012.DEF = "Stop_r_elbow_RotationInterpolator"
OrientationInterpolator2012.key = [0,0.5,1]
OrientationInterpolator2012.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2012)
OrientationInterpolator2013 = x3d.OrientationInterpolator()
OrientationInterpolator2013.DEF = "Stop_r_wrist_RotationInterpolator"
OrientationInterpolator2013.key = [0,0.5,1]
OrientationInterpolator2013.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2013)
OrientationInterpolator2014 = x3d.OrientationInterpolator()
OrientationInterpolator2014.DEF = "Stop_r_thumb1_RotationInterpolator"
OrientationInterpolator2014.key = [0,0.5,1]
OrientationInterpolator2014.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2014)
OrientationInterpolator2015 = x3d.OrientationInterpolator()
OrientationInterpolator2015.DEF = "Stop_r_thumb2_RotationInterpolator"
OrientationInterpolator2015.key = [0,0.5,1]
OrientationInterpolator2015.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2015)
OrientationInterpolator2016 = x3d.OrientationInterpolator()
OrientationInterpolator2016.DEF = "Stop_r_thumb3_RotationInterpolator"
OrientationInterpolator2016.key = [0,0.5,1]
OrientationInterpolator2016.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2016)
OrientationInterpolator2017 = x3d.OrientationInterpolator()
OrientationInterpolator2017.DEF = "Stop_r_index0_RotationInterpolator"
OrientationInterpolator2017.key = [0,0.5,1]
OrientationInterpolator2017.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2017)
OrientationInterpolator2018 = x3d.OrientationInterpolator()
OrientationInterpolator2018.DEF = "Stop_r_index1_RotationInterpolator"
OrientationInterpolator2018.key = [0,0.5,1]
OrientationInterpolator2018.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2018)
OrientationInterpolator2019 = x3d.OrientationInterpolator()
OrientationInterpolator2019.DEF = "Stop_r_index2_RotationInterpolator"
OrientationInterpolator2019.key = [0,0.5,1]
OrientationInterpolator2019.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2019)
OrientationInterpolator2020 = x3d.OrientationInterpolator()
OrientationInterpolator2020.DEF = "Stop_r_index3_RotationInterpolator"
OrientationInterpolator2020.key = [0,0.5,1]
OrientationInterpolator2020.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2020)
OrientationInterpolator2021 = x3d.OrientationInterpolator()
OrientationInterpolator2021.DEF = "Stop_r_middle0_RotationInterpolator"
OrientationInterpolator2021.key = [0,0.5,1]
OrientationInterpolator2021.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2021)
OrientationInterpolator2022 = x3d.OrientationInterpolator()
OrientationInterpolator2022.DEF = "Stop_r_middle1_RotationInterpolator"
OrientationInterpolator2022.key = [0,0.5,1]
OrientationInterpolator2022.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2022)
OrientationInterpolator2023 = x3d.OrientationInterpolator()
OrientationInterpolator2023.DEF = "Stop_r_middle2_RotationInterpolator"
OrientationInterpolator2023.key = [0,0.5,1]
OrientationInterpolator2023.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2023)
OrientationInterpolator2024 = x3d.OrientationInterpolator()
OrientationInterpolator2024.DEF = "Stop_r_middle3_RotationInterpolator"
OrientationInterpolator2024.key = [0,0.5,1]
OrientationInterpolator2024.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2024)
OrientationInterpolator2025 = x3d.OrientationInterpolator()
OrientationInterpolator2025.DEF = "Stop_r_ring0_RotationInterpolator"
OrientationInterpolator2025.key = [0,0.5,1]
OrientationInterpolator2025.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2025)
OrientationInterpolator2026 = x3d.OrientationInterpolator()
OrientationInterpolator2026.DEF = "Stop_r_ring1_RotationInterpolator"
OrientationInterpolator2026.key = [0,0.5,1]
OrientationInterpolator2026.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2026)
OrientationInterpolator2027 = x3d.OrientationInterpolator()
OrientationInterpolator2027.DEF = "Stop_r_ring2_RotationInterpolator"
OrientationInterpolator2027.key = [0,0.5,1]
OrientationInterpolator2027.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2027)
OrientationInterpolator2028 = x3d.OrientationInterpolator()
OrientationInterpolator2028.DEF = "Stop_r_ring3_RotationInterpolator"
OrientationInterpolator2028.key = [0,0.5,1]
OrientationInterpolator2028.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2028)
OrientationInterpolator2029 = x3d.OrientationInterpolator()
OrientationInterpolator2029.DEF = "Stop_r_pinky0_RotationInterpolator"
OrientationInterpolator2029.key = [0,0.5,1]
OrientationInterpolator2029.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2029)
OrientationInterpolator2030 = x3d.OrientationInterpolator()
OrientationInterpolator2030.DEF = "Stop_r_pinky1_RotationInterpolator"
OrientationInterpolator2030.key = [0,0.5,1]
OrientationInterpolator2030.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2030)
OrientationInterpolator2031 = x3d.OrientationInterpolator()
OrientationInterpolator2031.DEF = "Stop_r_pinky2_RotationInterpolator"
OrientationInterpolator2031.key = [0,0.5,1]
OrientationInterpolator2031.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2031)
OrientationInterpolator2032 = x3d.OrientationInterpolator()
OrientationInterpolator2032.DEF = "Stop_r_pinky3_RotationInterpolator"
OrientationInterpolator2032.key = [0,0.5,1]
OrientationInterpolator2032.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group1941.children.append(OrientationInterpolator2032)

Scene29.children.append(Group1941)
Group2033 = x3d.Group()
Group2033.DEF = "StandAnimation"
TimeSensor2034 = x3d.TimeSensor()
TimeSensor2034.DEF = "StandTimer"
TimeSensor2034.cycleInterval = 5.73
TimeSensor2034.loop = True

Group2033.children.append(TimeSensor2034)
OrientationInterpolator2035 = x3d.OrientationInterpolator()
OrientationInterpolator2035.DEF = "Stand_r_metatarsal_PitchInterpolator"
OrientationInterpolator2035.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2035.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.015),(1, 0, 0, 0.17),(-1, 0, 0, 0.025),(1, 0, 0, 0.01),(1, 0, 0, 0)]

Group2033.children.append(OrientationInterpolator2035)
OrientationInterpolator2036 = x3d.OrientationInterpolator()
OrientationInterpolator2036.DEF = "Stand_r_ankle_RotationInterpolator"
OrientationInterpolator2036.key = [0,0.5,1]
OrientationInterpolator2036.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2036)
OrientationInterpolator2037 = x3d.OrientationInterpolator()
OrientationInterpolator2037.DEF = "Stand_r_knee_RotationInterpolator"
OrientationInterpolator2037.key = [0,0.5,1]
OrientationInterpolator2037.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2037)
OrientationInterpolator2038 = x3d.OrientationInterpolator()
OrientationInterpolator2038.DEF = "Stand_r_hip_RotationInterpolator"
OrientationInterpolator2038.key = [0,0.5,1]
OrientationInterpolator2038.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2038)
OrientationInterpolator2039 = x3d.OrientationInterpolator()
OrientationInterpolator2039.DEF = "Stand_l_ankle_RotationInterpolator"
OrientationInterpolator2039.key = [0,0.5,1]
OrientationInterpolator2039.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2039)
OrientationInterpolator2040 = x3d.OrientationInterpolator()
OrientationInterpolator2040.DEF = "Stand_l_knee_RotationInterpolator"
OrientationInterpolator2040.key = [0,0.5,1]
OrientationInterpolator2040.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2040)
OrientationInterpolator2041 = x3d.OrientationInterpolator()
OrientationInterpolator2041.DEF = "Stand_l_hip_RotationInterpolator"
OrientationInterpolator2041.key = [0,0.5,1]
OrientationInterpolator2041.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2041)
OrientationInterpolator2042 = x3d.OrientationInterpolator()
OrientationInterpolator2042.DEF = "Stand_r_wrist_RotationInterpolator"
OrientationInterpolator2042.key = [0,0.5,1]
OrientationInterpolator2042.keyValue = [(0, 0, 1, 0),(0, 0, -1, 0.25),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2042)
OrientationInterpolator2043 = x3d.OrientationInterpolator()
OrientationInterpolator2043.DEF = "Stand_r_elbow_RotationInterpolator"
OrientationInterpolator2043.key = [0,0.5,1]
OrientationInterpolator2043.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2043)
OrientationInterpolator2044 = x3d.OrientationInterpolator()
OrientationInterpolator2044.DEF = "Stand_r_shoulder_RotationInterpolator"
OrientationInterpolator2044.key = [0,0.5,1]
OrientationInterpolator2044.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2044)
OrientationInterpolator2045 = x3d.OrientationInterpolator()
OrientationInterpolator2045.DEF = "Stand_l_wrist_RotationInterpolator"
OrientationInterpolator2045.key = [0,0.5,1]
OrientationInterpolator2045.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2045)
OrientationInterpolator2046 = x3d.OrientationInterpolator()
OrientationInterpolator2046.DEF = "Stand_l_elbow_RotationInterpolator"
OrientationInterpolator2046.key = [0,0.5,1]
OrientationInterpolator2046.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2046)
OrientationInterpolator2047 = x3d.OrientationInterpolator()
OrientationInterpolator2047.DEF = "Stand_l_shoulder_RotationInterpolator"
OrientationInterpolator2047.key = [0,0.5,1]
OrientationInterpolator2047.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2047)
OrientationInterpolator2048 = x3d.OrientationInterpolator()
OrientationInterpolator2048.DEF = "Stand_head_RotationInterpolator"
OrientationInterpolator2048.key = [0,0.5,1]
OrientationInterpolator2048.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2048)
OrientationInterpolator2049 = x3d.OrientationInterpolator()
OrientationInterpolator2049.DEF = "Stand_neck_RotationInterpolator"
OrientationInterpolator2049.key = [0,0.5,1]
OrientationInterpolator2049.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2049)
OrientationInterpolator2050 = x3d.OrientationInterpolator()
OrientationInterpolator2050.DEF = "Stand_l_eyeball_RotationInterpolator"
OrientationInterpolator2050.key = [0,0.4,0.7,1]
OrientationInterpolator2050.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(1, 0, 0, 0.45),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2050)
OrientationInterpolator2051 = x3d.OrientationInterpolator()
OrientationInterpolator2051.DEF = "Stand_r_eyeball_RotationInterpolator"
OrientationInterpolator2051.key = [0,0.4,0.7,1]
OrientationInterpolator2051.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5),(1, 0, 0, 0.45),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2051)
OrientationInterpolator2052 = x3d.OrientationInterpolator()
OrientationInterpolator2052.DEF = "Stand_lower_body_RotationInterpolator"
OrientationInterpolator2052.key = [0,0.5,1]
OrientationInterpolator2052.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2052)
OrientationInterpolator2053 = x3d.OrientationInterpolator()
OrientationInterpolator2053.DEF = "Stand_upper_body_RotationInterpolator"
OrientationInterpolator2053.key = [0,0.5,1]
OrientationInterpolator2053.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2053)
OrientationInterpolator2054 = x3d.OrientationInterpolator()
OrientationInterpolator2054.DEF = "Stand_whole_body_RotationInterpolator"
OrientationInterpolator2054.key = [0,0.5,1]
OrientationInterpolator2054.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2054)
PositionInterpolator2055 = x3d.PositionInterpolator()
PositionInterpolator2055.DEF = "Stand_whole_body_TranslationInterpolator"
PositionInterpolator2055.key = [0,0.5,1]
PositionInterpolator2055.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group2033.children.append(PositionInterpolator2055)
OrientationInterpolator2056 = x3d.OrientationInterpolator()
OrientationInterpolator2056.DEF = "Stand_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2056.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2056.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2056)
OrientationInterpolator2057 = x3d.OrientationInterpolator()
OrientationInterpolator2057.DEF = "Stand_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2057.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2057.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2057)
OrientationInterpolator2058 = x3d.OrientationInterpolator()
OrientationInterpolator2058.DEF = "Stand_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2058.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2058.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2058)
OrientationInterpolator2059 = x3d.OrientationInterpolator()
OrientationInterpolator2059.DEF = "Stand_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2059.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2059.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2059)
OrientationInterpolator2060 = x3d.OrientationInterpolator()
OrientationInterpolator2060.DEF = "Stand_sacroiliac_YawInterpolator"
OrientationInterpolator2060.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2060.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2060)
OrientationInterpolator2061 = x3d.OrientationInterpolator()
OrientationInterpolator2061.DEF = "Stand_vl5_YawInterpolator"
OrientationInterpolator2061.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2061.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2061)
OrientationInterpolator2062 = x3d.OrientationInterpolator()
OrientationInterpolator2062.DEF = "Stand_vc6_YawInterpolator"
OrientationInterpolator2062.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2062.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0),(0, -1, 0, 0),(0, 1, 0, 0)]

Group2033.children.append(OrientationInterpolator2062)
OrientationInterpolator2063 = x3d.OrientationInterpolator()
OrientationInterpolator2063.DEF = "Stand_l_thumb1_PitchInterpolator"
OrientationInterpolator2063.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2063.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2063)
OrientationInterpolator2064 = x3d.OrientationInterpolator()
OrientationInterpolator2064.DEF = "Stand_r_thumb1_PitchInterpolator"
OrientationInterpolator2064.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2064.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 0.1),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2033.children.append(OrientationInterpolator2064)
OrientationInterpolator2065 = x3d.OrientationInterpolator()
OrientationInterpolator2065.DEF = "Stand_r_index1_RollInterpolator"
OrientationInterpolator2065.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator2065.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.1),(0, 0, 1, 0.2),(0, 0, 1, 0.3),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2065)
OrientationInterpolator2066 = x3d.OrientationInterpolator()
OrientationInterpolator2066.DEF = "Stand_r_index2_RollInterpolator"
OrientationInterpolator2066.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator2066.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.4),(0, 0, 1, 0.32),(0, 0, 1, 0.25),(0, 0, 1, 0.2),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2066)
OrientationInterpolator2067 = x3d.OrientationInterpolator()
OrientationInterpolator2067.DEF = "Stand_r_index3_RollInterpolator"
OrientationInterpolator2067.key = [0,0.2,0.4,0.5,0.8,1]
OrientationInterpolator2067.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.3),(0, 0, 1, 0.35),(0, 0, 1, 0.2),(0, 0, 1, 0)]

Group2033.children.append(OrientationInterpolator2067)

Scene29.children.append(Group2033)
Group2068 = x3d.Group()
Group2068.DEF = "PitchesAnimation"
TimeSensor2069 = x3d.TimeSensor()
TimeSensor2069.DEF = "PitchTimer"
TimeSensor2069.cycleInterval = 5.73
TimeSensor2069.loop = True

Group2068.children.append(TimeSensor2069)
OrientationInterpolator2070 = x3d.OrientationInterpolator()
OrientationInterpolator2070.DEF = "Pitch_r_metatarsal_PitchInterpolator"
OrientationInterpolator2070.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2070.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.5),(-1, 0, 0, 0.7),(1, 0, 0, 0.75),(-1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2068.children.append(OrientationInterpolator2070)
OrientationInterpolator2071 = x3d.OrientationInterpolator()
OrientationInterpolator2071.DEF = "Pitches_r_ankle_RotationInterpolator"
OrientationInterpolator2071.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2071.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2071)
OrientationInterpolator2072 = x3d.OrientationInterpolator()
OrientationInterpolator2072.DEF = "Pitches_r_knee_RotationInterpolator"
OrientationInterpolator2072.key = [0,0.5,1]
OrientationInterpolator2072.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2072)
OrientationInterpolator2073 = x3d.OrientationInterpolator()
OrientationInterpolator2073.DEF = "Pitches_r_hip_RotationInterpolator"
OrientationInterpolator2073.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2073.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2073)
OrientationInterpolator2074 = x3d.OrientationInterpolator()
OrientationInterpolator2074.DEF = "Pitches_l_ankle_RotationInterpolator"
OrientationInterpolator2074.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2074.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2074)
OrientationInterpolator2075 = x3d.OrientationInterpolator()
OrientationInterpolator2075.DEF = "Pitches_l_knee_RotationInterpolator"
OrientationInterpolator2075.key = [0,0.5,1]
OrientationInterpolator2075.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2075)
OrientationInterpolator2076 = x3d.OrientationInterpolator()
OrientationInterpolator2076.DEF = "Pitches_l_hip_RotationInterpolator"
OrientationInterpolator2076.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2076.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2076)
OrientationInterpolator2077 = x3d.OrientationInterpolator()
OrientationInterpolator2077.DEF = "Pitches_r_wrist_RotationInterpolator"
OrientationInterpolator2077.key = [0,0.5,1]
OrientationInterpolator2077.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2077)
OrientationInterpolator2078 = x3d.OrientationInterpolator()
OrientationInterpolator2078.DEF = "Pitches_r_elbow_RotationInterpolator"
OrientationInterpolator2078.key = [0,0.5,1]
OrientationInterpolator2078.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2078)
OrientationInterpolator2079 = x3d.OrientationInterpolator()
OrientationInterpolator2079.DEF = "Pitches_r_shoulder_RotationInterpolator"
OrientationInterpolator2079.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2079.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2079)
OrientationInterpolator2080 = x3d.OrientationInterpolator()
OrientationInterpolator2080.DEF = "Pitches_l_wrist_RotationInterpolator"
OrientationInterpolator2080.key = [0,0.5,1]
OrientationInterpolator2080.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2080)
OrientationInterpolator2081 = x3d.OrientationInterpolator()
OrientationInterpolator2081.DEF = "Pitches_l_elbow_RotationInterpolator"
OrientationInterpolator2081.key = [0,0.5,1]
OrientationInterpolator2081.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2081)
OrientationInterpolator2082 = x3d.OrientationInterpolator()
OrientationInterpolator2082.DEF = "Pitches_l_shoulder_RotationInterpolator"
OrientationInterpolator2082.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2082.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.5),(0, 0, 1, 0),(1, 0, 0, 1.5),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2082)
OrientationInterpolator2083 = x3d.OrientationInterpolator()
OrientationInterpolator2083.DEF = "Pitches_head_RotationInterpolator"
OrientationInterpolator2083.key = [0,0.5,1]
OrientationInterpolator2083.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2083)
OrientationInterpolator2084 = x3d.OrientationInterpolator()
OrientationInterpolator2084.DEF = "Pitches_neck_RotationInterpolator"
OrientationInterpolator2084.key = [0,0.25,0.55,1]
OrientationInterpolator2084.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.55),(-1, 0, 0, 1.05),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2084)
OrientationInterpolator2085 = x3d.OrientationInterpolator()
OrientationInterpolator2085.DEF = "Pitches_lower_body_RotationInterpolator"
OrientationInterpolator2085.key = [0,0.5,1]
OrientationInterpolator2085.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2085)
OrientationInterpolator2086 = x3d.OrientationInterpolator()
OrientationInterpolator2086.DEF = "Pitches_upper_body_RotationInterpolator"
OrientationInterpolator2086.key = [0,0.5,1]
OrientationInterpolator2086.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2086)
OrientationInterpolator2087 = x3d.OrientationInterpolator()
OrientationInterpolator2087.DEF = "Pitches_whole_body_RotationInterpolator"
OrientationInterpolator2087.key = [0,0.5,1]
OrientationInterpolator2087.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2087)
PositionInterpolator2088 = x3d.PositionInterpolator()
PositionInterpolator2088.DEF = "Pitches_whole_body_TranslationInterpolator"
PositionInterpolator2088.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]
PositionInterpolator2088.keyValue = [(0, 0, 0),(0, -0.15, 0),(0, -0.7, 0),(0, -0.15, 0),(0, 0, 0),(0, -0.15, 0),(0, -0.7, 0),(0, -0.15, 0),(0, 0, 0)]

Group2068.children.append(PositionInterpolator2088)
OrientationInterpolator2089 = x3d.OrientationInterpolator()
OrientationInterpolator2089.DEF = "Pitch_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2089.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2089.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2089)
OrientationInterpolator2090 = x3d.OrientationInterpolator()
OrientationInterpolator2090.DEF = "Pitch_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2090.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2090.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2090)
OrientationInterpolator2091 = x3d.OrientationInterpolator()
OrientationInterpolator2091.DEF = "Pitch_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2091.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2091.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2091)
OrientationInterpolator2092 = x3d.OrientationInterpolator()
OrientationInterpolator2092.DEF = "Pitch_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2092.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2092.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2092)
OrientationInterpolator2093 = x3d.OrientationInterpolator()
OrientationInterpolator2093.DEF = "Pitch_sacroiliac_YawInterpolator"
OrientationInterpolator2093.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2093.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2093)
OrientationInterpolator2094 = x3d.OrientationInterpolator()
OrientationInterpolator2094.DEF = "Pitch_vl5_YawInterpolator"
OrientationInterpolator2094.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2094.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2094)
OrientationInterpolator2095 = x3d.OrientationInterpolator()
OrientationInterpolator2095.DEF = "Pitch_vc6_YawInterpolator"
OrientationInterpolator2095.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2095.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2068.children.append(OrientationInterpolator2095)
OrientationInterpolator2096 = x3d.OrientationInterpolator()
OrientationInterpolator2096.DEF = "Pitch_l_thumb1_PitchInterpolator"
OrientationInterpolator2096.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2096.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.3),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2068.children.append(OrientationInterpolator2096)
OrientationInterpolator2097 = x3d.OrientationInterpolator()
OrientationInterpolator2097.DEF = "Pitch_r_thumb1_PitchInterpolator"
OrientationInterpolator2097.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2097.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.3),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2068.children.append(OrientationInterpolator2097)

Scene29.children.append(Group2068)
Group2098 = x3d.Group()
Group2098.DEF = "YawsAnimation"
TimeSensor2099 = x3d.TimeSensor()
TimeSensor2099.DEF = "YawTimer"
TimeSensor2099.cycleInterval = 5.73
TimeSensor2099.loop = True

Group2098.children.append(TimeSensor2099)
OrientationInterpolator2100 = x3d.OrientationInterpolator()
OrientationInterpolator2100.DEF = "Yaw_r_metatarsal_PitchInterpolator"
OrientationInterpolator2100.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2100.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2100)
OrientationInterpolator2101 = x3d.OrientationInterpolator()
OrientationInterpolator2101.DEF = "Yaws_r_ankle_RotationInterpolator"
OrientationInterpolator2101.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2101.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2101)
OrientationInterpolator2102 = x3d.OrientationInterpolator()
OrientationInterpolator2102.DEF = "Yaws_r_knee_RotationInterpolator"
OrientationInterpolator2102.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2102.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2102)
OrientationInterpolator2103 = x3d.OrientationInterpolator()
OrientationInterpolator2103.DEF = "Yaws_r_hip_RotationInterpolator"
OrientationInterpolator2103.key = [0,0.5,1]
OrientationInterpolator2103.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2103)
OrientationInterpolator2104 = x3d.OrientationInterpolator()
OrientationInterpolator2104.DEF = "Yaws_l_ankle_RotationInterpolator"
OrientationInterpolator2104.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2104.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2104)
OrientationInterpolator2105 = x3d.OrientationInterpolator()
OrientationInterpolator2105.DEF = "Yaws_l_knee_RotationInterpolator"
OrientationInterpolator2105.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2105.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2105)
OrientationInterpolator2106 = x3d.OrientationInterpolator()
OrientationInterpolator2106.DEF = "Yaws_l_hip_RotationInterpolator"
OrientationInterpolator2106.key = [0,0.5,1]
OrientationInterpolator2106.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2106)
OrientationInterpolator2107 = x3d.OrientationInterpolator()
OrientationInterpolator2107.DEF = "Yaws_r_wrist_RotationInterpolator"
OrientationInterpolator2107.key = [0,0.5,1]
OrientationInterpolator2107.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2107)
OrientationInterpolator2108 = x3d.OrientationInterpolator()
OrientationInterpolator2108.DEF = "Yaws_r_elbow_RotationInterpolator"
OrientationInterpolator2108.key = [0,0.5,1]
OrientationInterpolator2108.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2108)
OrientationInterpolator2109 = x3d.OrientationInterpolator()
OrientationInterpolator2109.DEF = "Yaws_r_shoulder_RotationInterpolator"
OrientationInterpolator2109.key = [0,0.5,1]
OrientationInterpolator2109.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2109)
OrientationInterpolator2110 = x3d.OrientationInterpolator()
OrientationInterpolator2110.DEF = "Yaws_l_wrist_RotationInterpolator"
OrientationInterpolator2110.key = [0,0.5,1]
OrientationInterpolator2110.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2110)
OrientationInterpolator2111 = x3d.OrientationInterpolator()
OrientationInterpolator2111.DEF = "Yaws_l_elbow_RotationInterpolator"
OrientationInterpolator2111.key = [0,0.5,1]
OrientationInterpolator2111.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2111)
OrientationInterpolator2112 = x3d.OrientationInterpolator()
OrientationInterpolator2112.DEF = "Yaws_l_shoulder_RotationInterpolator"
OrientationInterpolator2112.key = [0,0.5,1]
OrientationInterpolator2112.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2112)
OrientationInterpolator2113 = x3d.OrientationInterpolator()
OrientationInterpolator2113.DEF = "Yaws_head_RotationInterpolator"
OrientationInterpolator2113.key = [0,0.5,1]
OrientationInterpolator2113.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2113)
OrientationInterpolator2114 = x3d.OrientationInterpolator()
OrientationInterpolator2114.DEF = "Yaws_neck_RotationInterpolator"
OrientationInterpolator2114.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2114.keyValue = [(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2114)
OrientationInterpolator2115 = x3d.OrientationInterpolator()
OrientationInterpolator2115.DEF = "Yaws_upper_body_RotationInterpolator"
OrientationInterpolator2115.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2115.keyValue = [(0, 0, 1, 0),(0, -1, 0, 1.5),(0, 0, 1, 0),(0, 1, 0, 1.5),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2115)
OrientationInterpolator2116 = x3d.OrientationInterpolator()
OrientationInterpolator2116.DEF = "Yaws_lower_body_RotationInterpolator"
OrientationInterpolator2116.key = [0,0.5,1]
OrientationInterpolator2116.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2116)
OrientationInterpolator2117 = x3d.OrientationInterpolator()
OrientationInterpolator2117.DEF = "Yaws_whole_body_RotationInterpolator"
OrientationInterpolator2117.key = [0,0.5,1]
OrientationInterpolator2117.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2117)
PositionInterpolator2118 = x3d.PositionInterpolator()
PositionInterpolator2118.DEF = "Yaws_whole_body_TranslationInterpolator"
PositionInterpolator2118.key = [0,0.5,1]
PositionInterpolator2118.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group2098.children.append(PositionInterpolator2118)
OrientationInterpolator2119 = x3d.OrientationInterpolator()
OrientationInterpolator2119.DEF = "Yaw_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2119.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2119.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2119)
OrientationInterpolator2120 = x3d.OrientationInterpolator()
OrientationInterpolator2120.DEF = "Yaw_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2120.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2120.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2120)
OrientationInterpolator2121 = x3d.OrientationInterpolator()
OrientationInterpolator2121.DEF = "Yaw_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2121.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2121.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2121)
OrientationInterpolator2122 = x3d.OrientationInterpolator()
OrientationInterpolator2122.DEF = "Yaw_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2122.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2122.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2122)
OrientationInterpolator2123 = x3d.OrientationInterpolator()
OrientationInterpolator2123.DEF = "Yaw_sacroiliac_YawInterpolator"
OrientationInterpolator2123.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2123.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, 0, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group2098.children.append(OrientationInterpolator2123)
OrientationInterpolator2124 = x3d.OrientationInterpolator()
OrientationInterpolator2124.DEF = "Yaw_vl5_YawInterpolator"
OrientationInterpolator2124.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2124.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2124)
OrientationInterpolator2125 = x3d.OrientationInterpolator()
OrientationInterpolator2125.DEF = "Yaw_vc6_YawInterpolator"
OrientationInterpolator2125.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2125.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2125)
OrientationInterpolator2126 = x3d.OrientationInterpolator()
OrientationInterpolator2126.DEF = "Yaw_l_thumb1_PitchInterpolator"
OrientationInterpolator2126.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2126.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2126)
OrientationInterpolator2127 = x3d.OrientationInterpolator()
OrientationInterpolator2127.DEF = "Yaw_r_thumb1_PitchInterpolator"
OrientationInterpolator2127.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2127.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2098.children.append(OrientationInterpolator2127)

Scene29.children.append(Group2098)
Group2128 = x3d.Group()
Group2128.DEF = "RollsAnimation"
TimeSensor2129 = x3d.TimeSensor()
TimeSensor2129.DEF = "RollTimer"
TimeSensor2129.cycleInterval = 5.73
TimeSensor2129.loop = True

Group2128.children.append(TimeSensor2129)
OrientationInterpolator2130 = x3d.OrientationInterpolator()
OrientationInterpolator2130.DEF = "Roll_r_metatarsal_PitchInterpolator"
OrientationInterpolator2130.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2130.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2130)
OrientationInterpolator2131 = x3d.OrientationInterpolator()
OrientationInterpolator2131.DEF = "Rolls_r_ankle_RotationInterpolator"
OrientationInterpolator2131.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2131.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2131)
OrientationInterpolator2132 = x3d.OrientationInterpolator()
OrientationInterpolator2132.DEF = "Rolls_r_knee_RotationInterpolator"
OrientationInterpolator2132.key = [0,0.5,1]
OrientationInterpolator2132.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2132)
OrientationInterpolator2133 = x3d.OrientationInterpolator()
OrientationInterpolator2133.DEF = "Rolls_r_hip_RotationInterpolator"
OrientationInterpolator2133.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2133.keyValue = [(0, 0, -1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2133)
OrientationInterpolator2134 = x3d.OrientationInterpolator()
OrientationInterpolator2134.DEF = "Rolls_l_ankle_RotationInterpolator"
OrientationInterpolator2134.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2134.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2134)
OrientationInterpolator2135 = x3d.OrientationInterpolator()
OrientationInterpolator2135.DEF = "Rolls_l_knee_RotationInterpolator"
OrientationInterpolator2135.key = [0,0.5,1]
OrientationInterpolator2135.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2135)
OrientationInterpolator2136 = x3d.OrientationInterpolator()
OrientationInterpolator2136.DEF = "Rolls_l_hip_RotationInterpolator"
OrientationInterpolator2136.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2136.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2136)
OrientationInterpolator2137 = x3d.OrientationInterpolator()
OrientationInterpolator2137.DEF = "Rolls_r_wrist_RotationInterpolator"
OrientationInterpolator2137.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2137.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2137)
OrientationInterpolator2138 = x3d.OrientationInterpolator()
OrientationInterpolator2138.DEF = "Rolls_r_elbow_RotationInterpolator"
OrientationInterpolator2138.key = [0,0.5,1]
OrientationInterpolator2138.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2138)
OrientationInterpolator2139 = x3d.OrientationInterpolator()
OrientationInterpolator2139.DEF = "Rolls_r_shoulder_RotationInterpolator"
OrientationInterpolator2139.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2139.keyValue = [(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, -1, 3),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2139)
OrientationInterpolator2140 = x3d.OrientationInterpolator()
OrientationInterpolator2140.DEF = "Rolls_l_wrist_RotationInterpolator"
OrientationInterpolator2140.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2140.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 0),(0, 0, -1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2140)
OrientationInterpolator2141 = x3d.OrientationInterpolator()
OrientationInterpolator2141.DEF = "Rolls_l_elbow_RotationInterpolator"
OrientationInterpolator2141.key = [0,0.5,1]
OrientationInterpolator2141.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2141)
OrientationInterpolator2142 = x3d.OrientationInterpolator()
OrientationInterpolator2142.DEF = "Rolls_l_shoulder_RotationInterpolator"
OrientationInterpolator2142.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2142.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.5),(0, 0, 1, 3),(0, 0, 1, 1.5),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2142)
OrientationInterpolator2143 = x3d.OrientationInterpolator()
OrientationInterpolator2143.DEF = "Rolls_head_RotationInterpolator"
OrientationInterpolator2143.key = [0,0.5,1]
OrientationInterpolator2143.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2143)
OrientationInterpolator2144 = x3d.OrientationInterpolator()
OrientationInterpolator2144.DEF = "Rolls_neck_RotationInterpolator"
OrientationInterpolator2144.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2144.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.25),(0, 0, 1, 0),(0, 0, -1, 1.25),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2144)
OrientationInterpolator2145 = x3d.OrientationInterpolator()
OrientationInterpolator2145.DEF = "Rolls_lower_body_RotationInterpolator"
OrientationInterpolator2145.key = [0,0.5,1]
OrientationInterpolator2145.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2145)
OrientationInterpolator2146 = x3d.OrientationInterpolator()
OrientationInterpolator2146.DEF = "Rolls_upper_body_RotationInterpolator"
OrientationInterpolator2146.key = [0,0.5,1]
OrientationInterpolator2146.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2146)
OrientationInterpolator2147 = x3d.OrientationInterpolator()
OrientationInterpolator2147.DEF = "Rolls_whole_body_RotationInterpolator"
OrientationInterpolator2147.key = [0,0.5,1]
OrientationInterpolator2147.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2147)
PositionInterpolator2148 = x3d.PositionInterpolator()
PositionInterpolator2148.DEF = "Rolls_whole_body_TranslationInterpolator"
PositionInterpolator2148.key = [0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]
PositionInterpolator2148.keyValue = [(0, 0, 0),(0, -0.25, 0),(0, -0.8, 0),(0, -0.25, 0),(0, 0, 0),(0, -0.25, 0),(0, -0.8, 0),(0, -0.25, 0),(0, 0, 0)]

Group2128.children.append(PositionInterpolator2148)
OrientationInterpolator2149 = x3d.OrientationInterpolator()
OrientationInterpolator2149.DEF = "Roll_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2149.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2149.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2149)
OrientationInterpolator2150 = x3d.OrientationInterpolator()
OrientationInterpolator2150.DEF = "Roll_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2150.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2150.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2150)
OrientationInterpolator2151 = x3d.OrientationInterpolator()
OrientationInterpolator2151.DEF = "Roll_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2151.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2151.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2151)
OrientationInterpolator2152 = x3d.OrientationInterpolator()
OrientationInterpolator2152.DEF = "Roll_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2152.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2152.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2152)
OrientationInterpolator2153 = x3d.OrientationInterpolator()
OrientationInterpolator2153.DEF = "Roll_sacroiliac_YawInterpolator"
OrientationInterpolator2153.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2153.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2153)
OrientationInterpolator2154 = x3d.OrientationInterpolator()
OrientationInterpolator2154.DEF = "Roll_vl5_YawInterpolator"
OrientationInterpolator2154.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2154.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2154)
OrientationInterpolator2155 = x3d.OrientationInterpolator()
OrientationInterpolator2155.DEF = "Roll_vc6_YawInterpolator"
OrientationInterpolator2155.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2155.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2155)
OrientationInterpolator2156 = x3d.OrientationInterpolator()
OrientationInterpolator2156.DEF = "Roll_l_thumb1_PitchInterpolator"
OrientationInterpolator2156.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2156.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2156)
OrientationInterpolator2157 = x3d.OrientationInterpolator()
OrientationInterpolator2157.DEF = "Roll_r_thumb1_PitchInterpolator"
OrientationInterpolator2157.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2157.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2128.children.append(OrientationInterpolator2157)

Scene29.children.append(Group2128)
Group2158 = x3d.Group()
Group2158.DEF = "WalkAnimation"
TimeSensor2159 = x3d.TimeSensor()
TimeSensor2159.DEF = "WalkTimer"
TimeSensor2159.cycleInterval = 1.73
TimeSensor2159.loop = True

Group2158.children.append(TimeSensor2159)
OrientationInterpolator2160 = x3d.OrientationInterpolator()
OrientationInterpolator2160.DEF = "Walk_r_metatarsal_PitchInterpolator"
OrientationInterpolator2160.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2160.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2160)
OrientationInterpolator2161 = x3d.OrientationInterpolator()
OrientationInterpolator2161.DEF = "Walk_r_ankle_RotationInterpolator"
OrientationInterpolator2161.key = [0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]
OrientationInterpolator2161.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.3533),(-1, 0, 0, 0.1072),(1, 0, 0, 0.2612),(1, 0, 0, 0.1268),(-1, 0, 0, 0.01793),(-1, 0, 0, 0.05824),(-1, 0, 0, 0.2398),(-1, 0, 0, 0.35),(-1, 0, 0, 0.3322),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2161)
OrientationInterpolator2162 = x3d.OrientationInterpolator()
OrientationInterpolator2162.DEF = "Walk_r_knee_RotationInterpolator"
OrientationInterpolator2162.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator2162.keyValue = [(1, 0, 0, 0.8573),(1, 0, 0, 0.8926),(1, 0, 0, 0.5351),(1, 0, 0, 0.1756),(1, 0, 0, 0.1194),(1, 0, 0, 0.3153),(1, 0, 0, 0.09354),(1, 0, 0, 0.08558),(1, 0, 0, 0.2475),(1, 0, 0, 0.8573)]

Group2158.children.append(OrientationInterpolator2162)
OrientationInterpolator2163 = x3d.OrientationInterpolator()
OrientationInterpolator2163.DEF = "Walk_r_hip_RotationInterpolator"
OrientationInterpolator2163.key = [0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator2163.keyValue = [(-0.5831, 0.03511, 0.8116, 0.1481),(-0.995, 0.02296, 0.09674, 0.4683),(-1, 0.00192, 0.007964, 0.4732),(-0.998, -0.0158, -0.06102, 0.5079),(-0.9911, -0.03541, -0.1286, 0.5419),(-0.9131, -0.06243, -0.403, 0.3361),(-0.4306, -0.07962, -0.899, 0.07038),(1, 0, 0, 0.2571),(0.9891, -0.02805, 0.1444, 0.3879),(-0.5831, 0.03511, 0.8116, 0.1481)]

Group2158.children.append(OrientationInterpolator2163)
OrientationInterpolator2164 = x3d.OrientationInterpolator()
OrientationInterpolator2164.DEF = "Walk_l_ankle_RotationInterpolator"
OrientationInterpolator2164.key = [0,0.125,0.2083,0.375,0.6667,0.9167,1]
OrientationInterpolator2164.keyValue = [(-1, 0, 0, 0.06714),(-1, 0, 0, 0.2152),(-1, 0, 0, 0.3184),(-1, 0, 0, 0.4717),(-1, 0, 0, 0.2912),(1, 0, 0, 0.1222),(-1, 0, 0, 0.06714)]

Group2158.children.append(OrientationInterpolator2164)
OrientationInterpolator2165 = x3d.OrientationInterpolator()
OrientationInterpolator2165.DEF = "Walk_l_knee_RotationInterpolator"
OrientationInterpolator2165.key = [0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator2165.keyValue = [(1, 0, 0, 0.3226),(1, 0, 0, 0.1556),(1, 0, 0, 0.08678),(1, 0, 0, 0.8751),(1, 0, 0, 1.131),(1, 0, 0, 0.09961),(1, 0, 0, 0.3942),(1, 0, 0, 0.3226)]

Group2158.children.append(OrientationInterpolator2165)
OrientationInterpolator2166 = x3d.OrientationInterpolator()
OrientationInterpolator2166.DEF = "Walk_l_hip_RotationInterpolator"
OrientationInterpolator2166.key = [0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]
OrientationInterpolator2166.keyValue = [(-0.873, 0.06094, 0.484, 0.2865),(0.9963, -0.01057, 0.08481, 0.2488),(0.9965, 0.01591, -0.08222, 0.3836),(-0.7018, -0.03223, -0.7117, 0.1289),(-1, 0, 0, 0.5518),(-0.9964, 0.02231, 0.0817, 0.5351),(-0.9809, 0.04912, 0.1881, 0.5204),(-0.873, 0.06094, 0.484, 0.2865)]

Group2158.children.append(OrientationInterpolator2166)
OrientationInterpolator2167 = x3d.OrientationInterpolator()
OrientationInterpolator2167.DEF = "Walk_lower_body_RotationInterpolator"
OrientationInterpolator2167.key = [0,0.5,1]
OrientationInterpolator2167.keyValue = [(0, 0, -1, 0.1056),(0, 0, 1, 0.09018),(0, 0, -1, 0.1056)]

Group2158.children.append(OrientationInterpolator2167)
OrientationInterpolator2168 = x3d.OrientationInterpolator()
OrientationInterpolator2168.DEF = "Walk_r_wrist_RotationInterpolator"
OrientationInterpolator2168.key = [0,0.375,0.9167,1]
OrientationInterpolator2168.keyValue = [(-0.8129, 0.4759, -0.3357, 0.1346),(0.1533, -0.9878, 0.02582, 0.3902),(-0.5701, 0.7604, -0.311, 0.366),(-0.8129, 0.4759, -0.3357, 0.1346)]

Group2158.children.append(OrientationInterpolator2168)
OrientationInterpolator2169 = x3d.OrientationInterpolator()
OrientationInterpolator2169.DEF = "Walk_r_elbow_RotationInterpolator"
OrientationInterpolator2169.key = [0,0.375,0.9167,1]
OrientationInterpolator2169.keyValue = [(-1, 0, 0, 0.411508),(-1, 0, 0, 0.0925011),(-1, 0, 0, 0.572568),(-1, 0, 0, 0.411508)]

Group2158.children.append(OrientationInterpolator2169)
OrientationInterpolator2170 = x3d.OrientationInterpolator()
OrientationInterpolator2170.DEF = "Walk_r_shoulder_RotationInterpolator"
OrientationInterpolator2170.key = [0,0.375,0.9167,1]
OrientationInterpolator2170.keyValue = [(-1, 0, 0, 0.09346),(1, 0, 0, 0.3197),(-1, 0, 0, 0.1564),(-1, 0, 0, 0.09346)]

Group2158.children.append(OrientationInterpolator2170)
OrientationInterpolator2171 = x3d.OrientationInterpolator()
OrientationInterpolator2171.DEF = "Walk_l_wrist_RotationInterpolator"
OrientationInterpolator2171.key = [0,0.375,0.9167,1]
OrientationInterpolator2171.keyValue = [(0, -1, 0, 0.461076),(-0.330195, -0.927451, 0.175516, 0.538852),(0.0327774, -0.999314, -0.0172185, 0.492033),(0, -1, 0, 0.461076)]

Group2158.children.append(OrientationInterpolator2171)
OrientationInterpolator2172 = x3d.OrientationInterpolator()
OrientationInterpolator2172.DEF = "Walk_l_elbow_RotationInterpolator"
OrientationInterpolator2172.key = [0,0.375,0.9167,1]
OrientationInterpolator2172.keyValue = [(-1, 0, 0, 0.0659878),(-1, 0, 0, 0.488383),(-1, 0, 0, 0.0177536),(-1, 0, 0, 0.0659878)]

Group2158.children.append(OrientationInterpolator2172)
OrientationInterpolator2173 = x3d.OrientationInterpolator()
OrientationInterpolator2173.DEF = "Walk_l_shoulder_RotationInterpolator"
OrientationInterpolator2173.key = [0,0.375,0.9167,1]
OrientationInterpolator2173.keyValue = [(1, 0, 0, 0.1189),(-1, 0, 0, 0.1861),(1, 0, 0, 0.3357),(1, 0, 0, 0.1189)]

Group2158.children.append(OrientationInterpolator2173)
OrientationInterpolator2174 = x3d.OrientationInterpolator()
OrientationInterpolator2174.DEF = "Walk_head_RotationInterpolator"
OrientationInterpolator2174.key = [0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]
OrientationInterpolator2174.keyValue = [(0, -1, 0, 0.08642),(0, 1, 0, 0.1825),(0, 1, 0, 0.1505),(0, 1, 0, 0.1053),(0, 1, 0, 0.04391),(0, -1, 0, 0.03119),(0, -1, 0, 0.07936),(0, -1, 0, 0.1616),(0, -1, 0, 0.155),(0, -1, 0, 0.08642)]

Group2158.children.append(OrientationInterpolator2174)
OrientationInterpolator2175 = x3d.OrientationInterpolator()
OrientationInterpolator2175.DEF = "Walk_neck_RotationInterpolator"
OrientationInterpolator2175.key = [0,1]
OrientationInterpolator2175.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2175)
OrientationInterpolator2176 = x3d.OrientationInterpolator()
OrientationInterpolator2176.DEF = "Walk_upper_body_RotationInterpolator"
OrientationInterpolator2176.key = [0,0.2083,0.375,0.75,0.8333,1]
OrientationInterpolator2176.keyValue = [(0, 1, 0, 0.0826),(-0.01972, -0.5974, 0.8017, 0.08231),(0.009296, -0.9648, 0.2627, 0.1734),(-0.01238, 0.9549, -0.2968, 0.08732),(-0.008125, 0.9691, -0.2463, 0.158),(0, 1, 0, 0.0826)]

Group2158.children.append(OrientationInterpolator2176)
OrientationInterpolator2177 = x3d.OrientationInterpolator()
OrientationInterpolator2177.DEF = "Walk_whole_body_RotationInterpolator"
OrientationInterpolator2177.key = [0,1]
OrientationInterpolator2177.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2177)
PositionInterpolator2178 = x3d.PositionInterpolator()
PositionInterpolator2178.DEF = "Walk_whole_body_TranslationInterpolator"
PositionInterpolator2178.key = [0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]
PositionInterpolator2178.keyValue = [(0, -0.00928, 0),(0, -0.003858, 0),(0, -0.008847, 0),(0, -0.01486, 0),(0, -0.02641, 0),(0, -0.03934, 0),(0, -0.0502, 0),(0, -0.07469, 0),(0, -0.02732, 0),(0, -0.01608, 0),(0, -0.01129, 0),(0, -0.005819, 0),(0, -0.002004, 0),(0, -0.002579, 0),(0, -0.0143, 0),(0, -0.03799, 0),(0, -0.05648, 0),(0, -0.045, 0),(0, -0.00928, 0)]

Group2158.children.append(PositionInterpolator2178)
OrientationInterpolator2179 = x3d.OrientationInterpolator()
OrientationInterpolator2179.DEF = "Walk_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2179.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2179.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2179)
OrientationInterpolator2180 = x3d.OrientationInterpolator()
OrientationInterpolator2180.DEF = "Walk_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2180.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2180.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2180)
OrientationInterpolator2181 = x3d.OrientationInterpolator()
OrientationInterpolator2181.DEF = "Walk_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2181.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2181.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2181)
OrientationInterpolator2182 = x3d.OrientationInterpolator()
OrientationInterpolator2182.DEF = "Walk_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2182.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2182.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2182)
OrientationInterpolator2183 = x3d.OrientationInterpolator()
OrientationInterpolator2183.DEF = "Walk_sacroiliac_YawInterpolator"
OrientationInterpolator2183.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2183.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2183)
OrientationInterpolator2184 = x3d.OrientationInterpolator()
OrientationInterpolator2184.DEF = "Walk_vl5_YawInterpolator"
OrientationInterpolator2184.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2184.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2184)
OrientationInterpolator2185 = x3d.OrientationInterpolator()
OrientationInterpolator2185.DEF = "Walk_vc6_YawInterpolator"
OrientationInterpolator2185.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2185.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2158.children.append(OrientationInterpolator2185)
OrientationInterpolator2186 = x3d.OrientationInterpolator()
OrientationInterpolator2186.DEF = "Walk_l_thumb1_PitchInterpolator"
OrientationInterpolator2186.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2186.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.5),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2158.children.append(OrientationInterpolator2186)
OrientationInterpolator2187 = x3d.OrientationInterpolator()
OrientationInterpolator2187.DEF = "Walk_r_thumb1_PitchInterpolator"
OrientationInterpolator2187.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2187.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.5),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2158.children.append(OrientationInterpolator2187)

Scene29.children.append(Group2158)
Group2188 = x3d.Group()
Group2188.DEF = "RunAnimation"
TimeSensor2189 = x3d.TimeSensor()
TimeSensor2189.DEF = "RunTimer"
TimeSensor2189.cycleInterval = 0.9
TimeSensor2189.loop = True

Group2188.children.append(TimeSensor2189)
OrientationInterpolator2190 = x3d.OrientationInterpolator()
OrientationInterpolator2190.DEF = "Run_r_metatarsal_PitchInterpolator"
OrientationInterpolator2190.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2190.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2190)
OrientationInterpolator2191 = x3d.OrientationInterpolator()
OrientationInterpolator2191.DEF = "Run_l_hip_RotationInterpolator_Run"
OrientationInterpolator2191.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator2191.keyValue = [(-0.99, 0.033, 0.04, 1.42),(-0.99, 0.1328, 0.067, 0.42),(0.99, 0.014, 0.009, 0.9),(-0.99, 0.0703, 0.05, 0.7),(-0.99, 0.033, 0.04, 1.42)]

Group2188.children.append(OrientationInterpolator2191)
OrientationInterpolator2192 = x3d.OrientationInterpolator()
OrientationInterpolator2192.DEF = "Run_l_knee_RotationInterpolator_Run"
OrientationInterpolator2192.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator2192.keyValue = [(1, 0, 0, 1.01),(1, 0, 0, 0.426),(1, 0, 0, 0.705),(1, 0, 0, 2.179),(1, 0, 0, 1.01)]

Group2188.children.append(OrientationInterpolator2192)
OrientationInterpolator2193 = x3d.OrientationInterpolator()
OrientationInterpolator2193.DEF = "Run_l_ankle_RotationInterpolator_Run"
OrientationInterpolator2193.key = [0,0.22,0.3,0.4,1]
OrientationInterpolator2193.keyValue = [(1, 0, 0, 0.0374),(-1, 0, 0, 0.1037),(-1, 0, 0, 0.4328),(1, 0, 0, 0.1929),(1, 0, 0, 0.03574)]

Group2188.children.append(OrientationInterpolator2193)
OrientationInterpolator2194 = x3d.OrientationInterpolator()
OrientationInterpolator2194.DEF = "Run_r_hip_RotationInterpolator_Run"
OrientationInterpolator2194.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2194.keyValue = [(0.99, -0.014, 0.009, 0.9),(-0.99, -0.0703, -0.05, 0.7),(-0.99, -0.033, 0.04, 1.42),(-0.99, -0.1328, -0.067, 0.42),(0.99, -0.014, 0.009, 0.9)]

Group2188.children.append(OrientationInterpolator2194)
OrientationInterpolator2195 = x3d.OrientationInterpolator()
OrientationInterpolator2195.DEF = "Run_r_knee_RotationInterpolator_Run"
OrientationInterpolator2195.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2195.keyValue = [(1, 0, 0, 0.705),(1, 0, 0, 2.179),(1, 0, 0, 1.01),(1, 0, 0, 0.426),(1, 0, 0, 0.705)]

Group2188.children.append(OrientationInterpolator2195)
OrientationInterpolator2196 = x3d.OrientationInterpolator()
OrientationInterpolator2196.DEF = "Run_r_ankle_RotationInterpolator_Run"
OrientationInterpolator2196.key = [0,0.4,0.71,0.8,0.82,1]
OrientationInterpolator2196.keyValue = [(1, 0, 0, 0.2323),(-1, 0, 0, 0.07843),(-1, 0, 0, 0.32),(-1, 0, 0, 0.374),(-1, 0, 0, 0.3478),(1, 0, 0, 0.2323)]

Group2188.children.append(OrientationInterpolator2196)
OrientationInterpolator2197 = x3d.OrientationInterpolator()
OrientationInterpolator2197.DEF = "Run_l_shoulder_RotationInterpolator_Run"
OrientationInterpolator2197.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator2197.keyValue = [(0.99, -0.074, 0.25, 1.5),(0.99, -0.092, 0.44, 0.3),(-0.99, 0.136, 0.25, 0.85),(0.99, -0.081, 0.38, 0.4),(0.99, -0.074, 0.25, 1.5)]

Group2188.children.append(OrientationInterpolator2197)
OrientationInterpolator2198 = x3d.OrientationInterpolator()
OrientationInterpolator2198.DEF = "Run_l_elbow_RotationInterpolator_Run"
OrientationInterpolator2198.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator2198.keyValue = [(-1, 0, 0, 1.85),(-0.99, -0.19, 0.18, 1.35),(-1, 0, 0, 0.975),(-0.99, -0.09, -0.02, 1.55),(-1, 0, 0, 1.85)]

Group2188.children.append(OrientationInterpolator2198)
OrientationInterpolator2199 = x3d.OrientationInterpolator()
OrientationInterpolator2199.DEF = "Run_l_wrist_RotationInterpolator_Run"
OrientationInterpolator2199.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2199.keyValue = [(-0.25, -1, 0.08, 0.14),(0.25, 1, 0.08, 0.14),(0, 0, 1, 0),(-0.25, 1, 0.08, -0.14),(-0.25, 1, 0.08, 0.14)]

Group2188.children.append(OrientationInterpolator2199)
OrientationInterpolator2200 = x3d.OrientationInterpolator()
OrientationInterpolator2200.DEF = "Run_r_shoulder_RotationInterpolator_Run"
OrientationInterpolator2200.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2200.keyValue = [(-0.99, -0.136, -0.25, 0.85),(0.99, 0.081, -0.38, 0.4),(0.99, 0.074, -0.25, 1.5),(0.99, 0.081, -0.38, 0.4),(-0.99, -0.136, -0.25, 0.85)]

Group2188.children.append(OrientationInterpolator2200)
OrientationInterpolator2201 = x3d.OrientationInterpolator()
OrientationInterpolator2201.DEF = "Run_r_elbow_RotationInterpolator_Run"
OrientationInterpolator2201.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2201.keyValue = [(-1, 0, 0, 0.975),(-0.99, 0.09, 0.02, 1.55),(-1, 0, 0, 1.85),(-0.99, 0.19, -0.18, 1.35),(-1, 0, 0, 0.975)]

Group2188.children.append(OrientationInterpolator2201)
OrientationInterpolator2202 = x3d.OrientationInterpolator()
OrientationInterpolator2202.DEF = "Run_r_wrist_RotationInterpolator_Run"
OrientationInterpolator2202.key = [0,1]
OrientationInterpolator2202.keyValue = [(-0.917742, -0.237244, -0.318536, 0.214273),(-0.917742, -0.237244, -0.318536, 0.214273)]

Group2188.children.append(OrientationInterpolator2202)
OrientationInterpolator2203 = x3d.OrientationInterpolator()
OrientationInterpolator2203.DEF = "Run_lower_body_RotationInterpolator_Run"
OrientationInterpolator2203.key = [0,0.2182,0.4909,0.7455,1]
OrientationInterpolator2203.keyValue = [(0, -1, 0, 0.125),(0, 0, 1, 0),(0, 1, 0, 0.125),(0, 0, 1, 0),(0, -1, 0, 0.125)]

Group2188.children.append(OrientationInterpolator2203)
OrientationInterpolator2204 = x3d.OrientationInterpolator()
OrientationInterpolator2204.DEF = "Run_head_RotationInterpolator_Run"
OrientationInterpolator2204.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2204.keyValue = [(1, 0, 0, 0.08),(1, 0, 0, 0.12),(1, 0, 0, 0.3),(1, 0, 0, 0.3),(1, 0, 0, 0.08)]

Group2188.children.append(OrientationInterpolator2204)
OrientationInterpolator2205 = x3d.OrientationInterpolator()
OrientationInterpolator2205.DEF = "Run_neck_RotationInterpolator_Run"
OrientationInterpolator2205.key = [0,0.2545,0.4909,0.7091,1]
OrientationInterpolator2205.keyValue = [(0.7, 0, 0, 0.4),(-0.7, -0.7, 0, 0.4),(0, 0, 0, 0.4),(-0.7, 0.7, 0, 0.4),(0.7, 0, 0, 0.4)]

Group2188.children.append(OrientationInterpolator2205)
OrientationInterpolator2206 = x3d.OrientationInterpolator()
OrientationInterpolator2206.DEF = "Run_upper_body_RotationInterpolator_Run"
OrientationInterpolator2206.key = [0,0.2545,0.4909,0.7636,1]
OrientationInterpolator2206.keyValue = [(0.97, 0.65, 0.086, 0.5),(0.9, 0.003, -0.02, 0.38),(0.95, -0.68, -0.086, 0.5),(0.9, 0.004, -0.025, 0.4),(0.97, 0.65, 0.086, 0.5)]

Group2188.children.append(OrientationInterpolator2206)
OrientationInterpolator2207 = x3d.OrientationInterpolator()
OrientationInterpolator2207.DEF = "Run_whole_body_RotationInterpolator_Run"
OrientationInterpolator2207.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator2207.keyValue = [(1, 0, 0, 0.06),(1, 0, 0, 0.167),(1, 0, 0, 0.06),(1, 0, 0, 0.168),(1, 0, 0, 0.06)]

Group2188.children.append(OrientationInterpolator2207)
PositionInterpolator2208 = x3d.PositionInterpolator()
PositionInterpolator2208.DEF = "Run_whole_body_TranslationInterpolator_Run"
PositionInterpolator2208.key = [0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]
PositionInterpolator2208.keyValue = [(0, -0.01, 0),(0, -0.037, 0),(0, -0.049, 0),(0, -0.037, 0),(0, -0.01, 0),(0, -0.037, 0),(0, -0.049, 0),(0, -0.037, 0),(0, -0.01, 0)]

Group2188.children.append(PositionInterpolator2208)
OrientationInterpolator2209 = x3d.OrientationInterpolator()
OrientationInterpolator2209.DEF = "Run_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2209.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2209.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2209)
OrientationInterpolator2210 = x3d.OrientationInterpolator()
OrientationInterpolator2210.DEF = "Run_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2210.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2210.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2210)
OrientationInterpolator2211 = x3d.OrientationInterpolator()
OrientationInterpolator2211.DEF = "Run_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2211.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2211.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2211)
OrientationInterpolator2212 = x3d.OrientationInterpolator()
OrientationInterpolator2212.DEF = "Run_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2212.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2212.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2212)
OrientationInterpolator2213 = x3d.OrientationInterpolator()
OrientationInterpolator2213.DEF = "Run_sacroiliac_YawInterpolator"
OrientationInterpolator2213.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2213.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2213)
OrientationInterpolator2214 = x3d.OrientationInterpolator()
OrientationInterpolator2214.DEF = "Run_vl5_YawInterpolator"
OrientationInterpolator2214.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2214.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2214)
OrientationInterpolator2215 = x3d.OrientationInterpolator()
OrientationInterpolator2215.DEF = "Run_vc6_YawInterpolator"
OrientationInterpolator2215.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2215.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2188.children.append(OrientationInterpolator2215)
OrientationInterpolator2216 = x3d.OrientationInterpolator()
OrientationInterpolator2216.DEF = "Run_l_thumb1_PitchInterpolator"
OrientationInterpolator2216.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2216.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.7),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2188.children.append(OrientationInterpolator2216)
OrientationInterpolator2217 = x3d.OrientationInterpolator()
OrientationInterpolator2217.DEF = "Run_r_thumb1_PitchInterpolator"
OrientationInterpolator2217.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2217.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.25),(1, 0, 0, 0.7),(1, 0, 0, 0.27),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2188.children.append(OrientationInterpolator2217)

Scene29.children.append(Group2188)
Group2218 = x3d.Group()
Group2218.DEF = "JumpAnimation"
TimeSensor2219 = x3d.TimeSensor()
TimeSensor2219.DEF = "JumpTimer"
TimeSensor2219.cycleInterval = 3.73
TimeSensor2219.loop = True

Group2218.children.append(TimeSensor2219)
OrientationInterpolator2220 = x3d.OrientationInterpolator()
OrientationInterpolator2220.DEF = "Jump_r_metatarsal_PitchInterpolator"
OrientationInterpolator2220.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2220.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2220)
OrientationInterpolator2221 = x3d.OrientationInterpolator()
OrientationInterpolator2221.DEF = "Jump_r_ankle_RotationInterpolator"
OrientationInterpolator2221.key = [0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator2221.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.6735),(-1, 0, 0, 0.3527),(-1, 0, 0, 0.3038),(-1, 0, 0, 0.07964),(1, 0, 0, 1.3),(1, 0, 0, 0.6509),(1, 0, 0, 0.3001),(-1, 0, 0, 0.2087),(-1, 0, 0, 0.3756),(-1, 0, 0, 0.3279),(-1, 0, 0, 0.1193),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2221)
OrientationInterpolator2222 = x3d.OrientationInterpolator()
OrientationInterpolator2222.DEF = "Jump_r_knee_RotationInterpolator"
OrientationInterpolator2222.key = [0,0.2,0.25,0.3,0.64,0.76,0.88,1]
OrientationInterpolator2222.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.5),(1, 0, 0, 1.7),(0, 0, 1, 0),(1, 0, 0, 0.9507),(1, 0, 0, 0.5845),(1, 0, 0, 0.9054),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2222)
OrientationInterpolator2223 = x3d.OrientationInterpolator()
OrientationInterpolator2223.DEF = "Jump_r_hip_RotationInterpolator"
OrientationInterpolator2223.key = [0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator2223.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.63),(-1, 0, 0, 1.7),(-1, 0, 0, 1.55),(-1, 0, 0, 0.8943),(-1, 0, 0, 0.3698),(0, 0, 1, 0),(-1, 0, 0, 0.4963),(-1, 0, 0, 0.3829),(-1, 0, 0, 0.5169),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2223)
OrientationInterpolator2224 = x3d.OrientationInterpolator()
OrientationInterpolator2224.DEF = "Jump_l_ankle_RotationInterpolator"
OrientationInterpolator2224.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]
OrientationInterpolator2224.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.625),(-1, 0, 0, 0.625),(-1, 0, 0, 0.3364),(-1, 0, 0, 0.2742),(-1, 0, 0, 0.05078),(1, 0, 0, 0.2833),(1, 0, 0, 0.6667),(1, 0, 0, 0.2833),(-1, 0, 0, 0.2108),(-1, 0, 0, 0.375),(-1, 0, 0, 0.3146),(-1, 0, 0, 0.1174),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2224)
OrientationInterpolator2225 = x3d.OrientationInterpolator()
OrientationInterpolator2225.DEF = "Jump_l_knee_RotationInterpolator"
OrientationInterpolator2225.key = [0,0.28,0.32,0.48,0.64,0.76,0.88,1]
OrientationInterpolator2225.keyValue = [(0, 0, 1, 0),(1, 0, 0, 2.047),(1, 0, 0, 2.047),(0, 0, 1, 0),(1, 0, 0, 1.566),(1, 0, 0, 0.5913),(1, 0, 0, 0.9235),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2225)
OrientationInterpolator2226 = x3d.OrientationInterpolator()
OrientationInterpolator2226.DEF = "Jump_l_hip_RotationInterpolator"
OrientationInterpolator2226.key = [0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]
OrientationInterpolator2226.keyValue = [(0, 0, 1, 0),(1, 0, 0, 4.349),(1, 0, 0, 4.349),(1, 0, 0, 4.615),(-1, 0, 0, 0.9136),(-1, 0, 0, 0.3614),(0, 0, 1, 0),(-1, 0, 0, 0.7869),(-1, 0, 0, 0.3918),(-1, 0, 0, 0.5433),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2226)
OrientationInterpolator2227 = x3d.OrientationInterpolator()
OrientationInterpolator2227.DEF = "Jump_lower_body_RotationInterpolator"
OrientationInterpolator2227.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator2227.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.1892),(1, 0, 0, 0.1892),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2227)
OrientationInterpolator2228 = x3d.OrientationInterpolator()
OrientationInterpolator2228.DEF = "Jump_r_wrist_RotationInterpolator"
OrientationInterpolator2228.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator2228.keyValue = [(0, 0, 1, 0),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.0585279, 0.983903, -0.168849, 1.85956),(-0.00222418, 0.99801, -0.0630095, 1.46072),(0, 1, 0, 0.497349),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2228)
OrientationInterpolator2229 = x3d.OrientationInterpolator()
OrientationInterpolator2229.DEF = "Jump_r_elbow_RotationInterpolator"
OrientationInterpolator2229.key = [0,0.28,0.32,0.64,0.76,1]
OrientationInterpolator2229.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.04151),(-1, 0, 0, 0.5855),(-1, 0, 0, 0.5852),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2229)
OrientationInterpolator2230 = x3d.OrientationInterpolator()
OrientationInterpolator2230.DEF = "Jump_r_shoulder_RotationInterpolator"
OrientationInterpolator2230.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator2230.keyValue = [(0, 0, 1, 0),(0.9992, 0.02042, 0.03558, 4.688),(0.9992, 0.02042, 0.03558, 4.688),(0.9989, -0.04623, 0.005159, 4.079),(-0.8687, -0.2525, -0.4261, 1.501),(-0.941, -0.2893, -0.1754, 0.4788),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2230)
OrientationInterpolator2231 = x3d.OrientationInterpolator()
OrientationInterpolator2231.DEF = "Jump_l_wrist_RotationInterpolator"
OrientationInterpolator2231.key = [0,0.48,0.52,0.64,0.76,0.88,1]
OrientationInterpolator2231.keyValue = [(0, 0, 1, 0),(0.0672928, 0.989475, -0.128107, 4.15574),(0.0672928, 0.989475, -0.128107, 4.15574),(0.00364942, 0.999901, 0.0135896, 4.5822),(0, -1, 0, 0.655922),(-0.00050618, -0.999999, 0.0012782, 1.28397),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2231)
OrientationInterpolator2232 = x3d.OrientationInterpolator()
OrientationInterpolator2232.DEF = "Jump_l_elbow_RotationInterpolator"
OrientationInterpolator2232.key = [0,0.28,0.32,0.58,0.72,1]
OrientationInterpolator2232.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 1.13),(-1, 0, 0, 1.7),(-1, 0, 0, 1.7),(-1, 0, 0, 0.4),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2232)
OrientationInterpolator2233 = x3d.OrientationInterpolator()
OrientationInterpolator2233.DEF = "Jump_l_shoulder_RotationInterpolator"
OrientationInterpolator2233.key = [0,0.28,0.32,0.64,0.76,0.88,1]
OrientationInterpolator2233.keyValue = [(0, 0, 1, 0),(-0.9987, 0.02554, 0.04498, 1.57),(-0.9987, 0.02554, 0.04498, 1.57),(1, 0.0004113, 0.003055, 4.114),(-0.8413, 0.3238, 0.4329, 1.453),(-0.877, 0.4198, 0.2337, 0.6009),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2233)
OrientationInterpolator2234 = x3d.OrientationInterpolator()
OrientationInterpolator2234.DEF = "Jump_head_RotationInterpolator"
OrientationInterpolator2234.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator2234.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.5989),(-1, 0, 0, 0.3216),(1, 0, 0, 0.06503),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2234)
OrientationInterpolator2235 = x3d.OrientationInterpolator()
OrientationInterpolator2235.DEF = "Jump_neck_RotationInterpolator"
OrientationInterpolator2235.key = [0,0.28,0.32,0.48,0.76,1]
OrientationInterpolator2235.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.1942),(-1, 0, 0, 0.1942),(0, 0, 1, 0),(1, 0, 0, 0.2284),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2235)
OrientationInterpolator2236 = x3d.OrientationInterpolator()
OrientationInterpolator2236.DEF = "Jump_upper_body_RotationInterpolator"
OrientationInterpolator2236.key = [0,0.22,0.28,0.34,0.71,0.88,1]
OrientationInterpolator2236.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.05),(1, 0, 0, 1.051),(-1, 0, 0, 0.257),(1, 0, 0, 0.2171),(1, 0, 0, 0.3465),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2236)
OrientationInterpolator2237 = x3d.OrientationInterpolator()
OrientationInterpolator2237.DEF = "Jump_whole_body_RotationInterpolator"
OrientationInterpolator2237.key = [0,0.28,0.32,0.48,0.64,0.76,1]
OrientationInterpolator2237.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.3273),(1, 0, 0, 0.3273),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2237)
PositionInterpolator2238 = x3d.PositionInterpolator()
PositionInterpolator2238.DEF = "Jump_whole_body_TranslationInterpolator"
PositionInterpolator2238.key = [0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]
PositionInterpolator2238.keyValue = [(0, 0, 0),(0, -0.01264, -0.01289),(0, -0.04712, -0.03738),(-0.0003345, -0.1049, -0.05353),(-0.0005712, -0.1892, -0.06561),(-0.0008233, -0.286, -0.06276),(-0.0009591, -0.3795, -0.05148),(-0.00106, -0.4484, -0.03656),(-0.00106, -0.4484, -0.03656),(-0.001122, -0.25, -0.1499),(-0.0008616, -0.05, -0.06358),(-0.0005128, 0.15, -0.05488),(0.0004779, 0.55, 0.02732),(0.0001728, 1.385, 0.006873),(0.00017, 1.395, 0.0069),(0, 0.35, 0.02148),(0, -0.01299, -0.01057),(0, -0.06932, -0.01064),(0.0001365, -0.1037, -0.005059),(0.0001279, -0.07198, -0.007596),(0.000141, -0.01626, -0.004935),(0, 0, 0)]

Group2218.children.append(PositionInterpolator2238)
OrientationInterpolator2239 = x3d.OrientationInterpolator()
OrientationInterpolator2239.DEF = "Jump_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2239.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2239.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2239)
OrientationInterpolator2240 = x3d.OrientationInterpolator()
OrientationInterpolator2240.DEF = "Jump_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2240.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2240.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2240)
OrientationInterpolator2241 = x3d.OrientationInterpolator()
OrientationInterpolator2241.DEF = "Jump_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2241.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2241.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2241)
OrientationInterpolator2242 = x3d.OrientationInterpolator()
OrientationInterpolator2242.DEF = "Jump_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2242.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2242.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2218.children.append(OrientationInterpolator2242)
OrientationInterpolator2243 = x3d.OrientationInterpolator()
OrientationInterpolator2243.DEF = "Jump_sacroiliac_YawInterpolator"
OrientationInterpolator2243.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2243.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, -1, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group2218.children.append(OrientationInterpolator2243)
OrientationInterpolator2244 = x3d.OrientationInterpolator()
OrientationInterpolator2244.DEF = "Jump_vl5_YawInterpolator"
OrientationInterpolator2244.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2244.keyValue = [(0, 1, 0, 0),(0, 1, 0, -0.1),(0, 1, 0, 0),(0, 1, 0, 0),(1, 0, 0, 0.6),(0, 1, 0, 0.1),(0, 1, 0, 0)]

Group2218.children.append(OrientationInterpolator2244)
OrientationInterpolator2245 = x3d.OrientationInterpolator()
OrientationInterpolator2245.DEF = "Jump_vc6_YawInterpolator"
OrientationInterpolator2245.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2245.keyValue = [(0, 1, 0, 0),(0, 1, 0, 0.8),(0, 1, 0, 0),(0, 1, 0, 0),(-1, 0, 0, 0.6),(0, -1, 0, 0.8),(0, 1, 0, 0)]

Group2218.children.append(OrientationInterpolator2245)
OrientationInterpolator2246 = x3d.OrientationInterpolator()
OrientationInterpolator2246.DEF = "Jump_l_thumb1_PitchInterpolator"
OrientationInterpolator2246.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2246.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2218.children.append(OrientationInterpolator2246)
OrientationInterpolator2247 = x3d.OrientationInterpolator()
OrientationInterpolator2247.DEF = "Jump_r_thumb1_PitchInterpolator"
OrientationInterpolator2247.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2247.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2218.children.append(OrientationInterpolator2247)

Scene29.children.append(Group2218)
Group2248 = x3d.Group()
Group2248.DEF = "KickAnimation"
TimeSensor2249 = x3d.TimeSensor()
TimeSensor2249.DEF = "KickTimer"
TimeSensor2249.cycleInterval = 3.73
TimeSensor2249.loop = True

Group2248.children.append(TimeSensor2249)
OrientationInterpolator2250 = x3d.OrientationInterpolator()
OrientationInterpolator2250.DEF = "Kick_l_sternoclavicular_RollInterpolator"
OrientationInterpolator2250.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2250.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0.2),(0, 0, 1, 0.22),(0, 0, 1, 0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2250)
OrientationInterpolator2251 = x3d.OrientationInterpolator()
OrientationInterpolator2251.DEF = "Kick_l_acromioclavicular_RollInterpolator"
OrientationInterpolator2251.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2251.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2251)
OrientationInterpolator2252 = x3d.OrientationInterpolator()
OrientationInterpolator2252.DEF = "Kick_l_shoulder_RollInterpolator"
OrientationInterpolator2252.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2252.keyValue = [(0, 0, 1, 0),(0, 0, 1, 1.76),(-0.25, 0, 1, 1.76),(0, 0, 1, 1.256),(0, 0, 1, 0.05),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2252)
OrientationInterpolator2253 = x3d.OrientationInterpolator()
OrientationInterpolator2253.DEF = "Kick_l_ForeArm_PitchInterpolator"
OrientationInterpolator2253.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2253.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.55),(-1, 0.25, 0, 2.55),(1, 0, 0, 0),(1, 0, 0, 0),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2253)
OrientationInterpolator2254 = x3d.OrientationInterpolator()
OrientationInterpolator2254.DEF = "Kick_l_wrist_RollInterpolator"
OrientationInterpolator2254.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2254.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, 0.55),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2254)
OrientationInterpolator2255 = x3d.OrientationInterpolator()
OrientationInterpolator2255.DEF = "Kick_l_thumb1_PitchInterpolator"
OrientationInterpolator2255.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2255.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2255)
OrientationInterpolator2256 = x3d.OrientationInterpolator()
OrientationInterpolator2256.DEF = "Kick_r_sternoclavicular_RollInterpolator"
OrientationInterpolator2256.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2256.keyValue = [(0, 0, 1, 0),(0, 0, 1, -0.2),(0, 0, 1, -0.22),(0, 0, 1, -0.2),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2256)
OrientationInterpolator2257 = x3d.OrientationInterpolator()
OrientationInterpolator2257.DEF = "Kick_r_acromioclavicular_RollInterpolator"
OrientationInterpolator2257.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2257.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, -0.05),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2257)
OrientationInterpolator2258 = x3d.OrientationInterpolator()
OrientationInterpolator2258.DEF = "Kick_r_shoulder_RollInterpolator"
OrientationInterpolator2258.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2258.keyValue = [(0, 0, 1, 0),(0, 0, 1, -1.76),(0.25, 0, 1, -1.76),(0, 0, 1, -1.256),(0, 0, 1, -0.05),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2258)
OrientationInterpolator2259 = x3d.OrientationInterpolator()
OrientationInterpolator2259.DEF = "Kick_r_ForeArm_PitchInterpolator"
OrientationInterpolator2259.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2259.keyValue = [(1, 0, 0, 0),(1, 0, 0, -0.55),(1, 0.25, 0, -2.55),(1, 0, 0, 0),(1, 0, 0, 0),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2259)
OrientationInterpolator2260 = x3d.OrientationInterpolator()
OrientationInterpolator2260.DEF = "Kick_r_wrist_RollInterpolator"
OrientationInterpolator2260.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2260.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 1, 0, -0.55),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2260)
OrientationInterpolator2261 = x3d.OrientationInterpolator()
OrientationInterpolator2261.DEF = "Kick_r_thumb1_PitchInterpolator"
OrientationInterpolator2261.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2261.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.5),(1, 0, 0, 1.1),(1, 0, 0, 0.7),(1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2261)
OrientationInterpolator2262 = x3d.OrientationInterpolator()
OrientationInterpolator2262.DEF = "Kick_r_hip_PitchInterpolator"
OrientationInterpolator2262.key = [0,0.2,0.3,0.5,0.6,0.9,1]
OrientationInterpolator2262.keyValue = [(1, 0, 0, 0),(1, 0, 0, 0.9),(-1, 0, 0, 1.75),(-1, 0, 0, 2.25),(-1, 0, 0, 2),(1, 0, 0, 0),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2262)
OrientationInterpolator2263 = x3d.OrientationInterpolator()
OrientationInterpolator2263.DEF = "Kick_r_knee_PitchInterpolator"
OrientationInterpolator2263.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2263.keyValue = [(0, 0, 1, 0),(1, 0, 0, 1.95),(1, 0, 0, 1.75),(-1, 0, 0, 0.28),(1, 0, 0, 0),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2263)
OrientationInterpolator2264 = x3d.OrientationInterpolator()
OrientationInterpolator2264.DEF = "Kick_l_hip_PitchInterpolator"
OrientationInterpolator2264.key = [0,0.2,0.3,0.5,0.6,0.9,1]
OrientationInterpolator2264.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2264)
OrientationInterpolator2265 = x3d.OrientationInterpolator()
OrientationInterpolator2265.DEF = "Kick_l_knee_PitchInterpolator"
OrientationInterpolator2265.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2265.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2265)
OrientationInterpolator2266 = x3d.OrientationInterpolator()
OrientationInterpolator2266.DEF = "Kick_r_ankle_PitchInterpolator"
OrientationInterpolator2266.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2266.keyValue = [(0, 0, 1, 0),(-1, 0, 0, 0.9),(-1, 0, 0, 0.95),(1, 0, 0, 0.75),(-1, 0, 0, 0.05),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2266)
OrientationInterpolator2267 = x3d.OrientationInterpolator()
OrientationInterpolator2267.DEF = "Kick_r_metatarsal_PitchInterpolator"
OrientationInterpolator2267.key = [0,0.2,0.4,0.6,0.7,1]
OrientationInterpolator2267.keyValue = [(1, 0, 0, 0),(-1, 0, 0, 0.5),(-1, 0, 0, 0.7),(1, 0, 0, 0.75),(-1, 0, 0, 0.2),(1, 0, 0, 0)]

Group2248.children.append(OrientationInterpolator2267)
OrientationInterpolator2268 = x3d.OrientationInterpolator()
OrientationInterpolator2268.DEF = "Kick_sacroiliac_YawInterpolator"
OrientationInterpolator2268.key = [0,0.2,0.4,0.6,0.8,1]
OrientationInterpolator2268.keyValue = [(0, 1, 0, 0),(0, -1, 0, 0.1),(0, 1, 0, 0),(0, 1, -1, 0.24),(0, -1, 0, 0.4),(0, 1, 0, 0)]

Group2248.children.append(OrientationInterpolator2268)
OrientationInterpolator2269 = x3d.OrientationInterpolator()
OrientationInterpolator2269.DEF = "Kick_vl5_YawInterpolator"
OrientationInterpolator2269.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2269.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2269)
OrientationInterpolator2270 = x3d.OrientationInterpolator()
OrientationInterpolator2270.DEF = "Kick_vc6_YawInterpolator"
OrientationInterpolator2270.key = [0,0.2,0.4,0.5,0.6,0.8,1]
OrientationInterpolator2270.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2270)
OrientationInterpolator2271 = x3d.OrientationInterpolator()
OrientationInterpolator2271.DEF = "Kick_lower_body_RotationInterpolator"
OrientationInterpolator2271.key = [0,0.5,1]
OrientationInterpolator2271.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2271)
OrientationInterpolator2272 = x3d.OrientationInterpolator()
OrientationInterpolator2272.DEF = "Kick_upper_body_RotationInterpolator"
OrientationInterpolator2272.key = [0,0.5,1]
OrientationInterpolator2272.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2272)
OrientationInterpolator2273 = x3d.OrientationInterpolator()
OrientationInterpolator2273.DEF = "Kick_whole_body_RotationInterpolator"
OrientationInterpolator2273.key = [0,0.5,1]
OrientationInterpolator2273.keyValue = [(0, 0, 1, 0),(0, 0, 1, 0),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2273)
PositionInterpolator2274 = x3d.PositionInterpolator()
PositionInterpolator2274.DEF = "Kick_whole_body_TranslationInterpolator"
PositionInterpolator2274.key = [0,0.5,1]
PositionInterpolator2274.keyValue = [(0, 0, 0),(0, 0, 0),(0, 0, 0)]

Group2248.children.append(PositionInterpolator2274)
OrientationInterpolator2275 = x3d.OrientationInterpolator()
OrientationInterpolator2275.DEF = "Kick_neck_RotationInterpolator"
OrientationInterpolator2275.key = [0,0.25,0.55,1]
OrientationInterpolator2275.keyValue = [(0, 0, 1, 0),(1, 0, 0, 0.7),(1, 0, 0, 0.5),(0, 0, 1, 0)]

Group2248.children.append(OrientationInterpolator2275)

Scene29.children.append(Group2248)
Group2276 = x3d.Group()
Group2276.DEF = "UserInterface"
Transform2277 = x3d.Transform()
Transform2277.DEF = "CoordinateAxesAdjustedScale"
Transform2277.scale = [0.175,0.175,0.175]
Inline2278 = x3d.Inline()
Inline2278.DEF = "CoordinateAxes"
Inline2278.global_ = True
Inline2278.url = ["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]

Transform2277.children.append(Inline2278)

Group2276.children.append(Transform2277)
Transform2279 = x3d.Transform()
Transform2279.DEF = "cordsys"
Transform2279.scale = [0.175,0.175,0.175]

Group2276.children.append(Transform2279)
ProximitySensor2280 = x3d.ProximitySensor()
ProximitySensor2280.DEF = "HudProximitySensor"
ProximitySensor2280.size = [500,100,500]
ProximitySensor2280.center = [0,20,0]

Group2276.children.append(ProximitySensor2280)
Transform2281 = x3d.Transform()
Transform2281.DEF = "Stage"
Transform2281.translation = [0,-0.0125,0]
Transform2281.scale = [1,0.0125,1]
Shape2282 = x3d.Shape()
Appearance2283 = x3d.Appearance()
Material2284 = x3d.Material()
Material2284.transparency = 0.6

Appearance2283.material = Material2284

Shape2282.appearance = Appearance2283
Box2285 = x3d.Box()

Shape2282.geometry = Box2285

Transform2281.children.append(Shape2282)
Transform2286 = x3d.Transform()
Transform2286.DEF = "Circle0"
Transform2286.scale = [1.175,1,1.175]
Shape2287 = x3d.Shape()
Appearance2288 = x3d.Appearance()
Material2289 = x3d.Material()
Material2289.diffuseColor = [0.9,0,0.7]
Material2289.emissiveColor = [0.424956,0.483976,1]

Appearance2288.material = Material2289

Shape2287.appearance = Appearance2288
IndexedLineSet2290 = x3d.IndexedLineSet()
IndexedLineSet2290.DEF = "Orbit1"
IndexedLineSet2290.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate2291 = x3d.Coordinate()
Coordinate2291.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.994522),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet2290.coord = Coordinate2291

Shape2287.geometry = IndexedLineSet2290

Transform2286.children.append(Shape2287)

Transform2281.children.append(Transform2286)
Transform2292 = x3d.Transform()
Transform2292.DEF = "Circle1"
Transform2292.scale = [0.5,1,0.5]
Shape2293 = x3d.Shape()
Appearance2294 = x3d.Appearance()
Material2295 = x3d.Material()
Material2295.diffuseColor = [0.9,0,0.7]
Material2295.emissiveColor = [0.424956,0.483976,1]

Appearance2294.material = Material2295

Shape2293.appearance = Appearance2294
IndexedLineSet2296 = x3d.IndexedLineSet()
IndexedLineSet2296.USE = "Orbit1"

Shape2293.geometry = IndexedLineSet2296

Transform2292.children.append(Shape2293)

Transform2281.children.append(Transform2292)
Transform2297 = x3d.Transform()
Transform2297.DEF = "Circle2"
Transform2297.scale = [0.25,1,0.25]
Shape2298 = x3d.Shape()
Appearance2299 = x3d.Appearance()
Material2300 = x3d.Material()
Material2300.diffuseColor = [0.9,0,0.7]
Material2300.emissiveColor = [0.424956,0.483976,1]

Appearance2299.material = Material2300

Shape2298.appearance = Appearance2299
IndexedLineSet2301 = x3d.IndexedLineSet()
IndexedLineSet2301.USE = "Orbit1"

Shape2298.geometry = IndexedLineSet2301

Transform2297.children.append(Shape2298)

Transform2281.children.append(Transform2297)

Group2276.children.append(Transform2281)
Transform2302 = x3d.Transform()
Transform2302.DEF = "HudXform"
Transform2302.translation = [1.705442,1.042139,1.989742]
Transform2302.rotation = [-0.09996068,0.9942513,0.03837026,0.7131352]
Transform2303 = x3d.Transform()
Transform2303.translation = [-0.42,-0.2,-0.75]
Transform2303.scale = [0.035,0.035,0.035]
Transform2304 = x3d.Transform()
Transform2304.DEF = "StandTransform"
Transform2304.translation = [0,-1,0]
TouchSensor2305 = x3d.TouchSensor()
TouchSensor2305.DEF = "Stand_Touch"
TouchSensor2305.description = "touch to select"

Transform2304.children.append(TouchSensor2305)
Shape2306 = x3d.Shape()
Shape2306.DEF = "StandTextShape"
Appearance2307 = x3d.Appearance()
Material2308 = x3d.Material()
Material2308.DEF = "text_color"
Material2308.ambientIntensity = 1
Material2308.diffuseColor = [0.819,0.521,0.169]
Material2308.specularColor = [0.819,0.521,0.169]
Material2308.emissiveColor = [0.819,0.521,0.169]

Appearance2307.material = Material2308

Shape2306.appearance = Appearance2307
Text2309 = x3d.Text()
Text2309.string = ["Stand"]

Shape2306.geometry = Text2309

Transform2304.children.append(Shape2306)
Shape2310 = x3d.Shape()
Shape2310.DEF = "Stand_Back"
Appearance2311 = x3d.Appearance()
Material2312 = x3d.Material()
Material2312.DEF = "Clear"
Material2312.ambientIntensity = 1
Material2312.diffuseColor = [0,0.5,0]
Material2312.emissiveColor = [0,0.5,0]
Material2312.transparency = 0.8

Appearance2311.material = Material2312

Shape2310.appearance = Appearance2311
IndexedFaceSet2313 = x3d.IndexedFaceSet()
IndexedFaceSet2313.DEF = "Backing"
IndexedFaceSet2313.coordIndex = [0,1,2,3,-1]
Coordinate2314 = x3d.Coordinate()
Coordinate2314.point = [(-0.2, -1.2, -0.01),(2.5, -1.2, -0.01),(2.5, 0.75, -0.01),(-0.2, 0.75, -0.01)]

IndexedFaceSet2313.coord = Coordinate2314

Shape2310.geometry = IndexedFaceSet2313

Transform2304.children.append(Shape2310)

Transform2303.children.append(Transform2304)
Transform2315 = x3d.Transform()
Transform2315.DEF = "PitchTransform"
Transform2315.translation = [3,-1,0]
TouchSensor2316 = x3d.TouchSensor()
TouchSensor2316.DEF = "Pitch_Touch"
TouchSensor2316.description = "touch to select"

Transform2315.children.append(TouchSensor2316)
Shape2317 = x3d.Shape()
Shape2317.DEF = "PitchTextShape"
Appearance2318 = x3d.Appearance()
Material2319 = x3d.Material()
Material2319.USE = "text_color"

Appearance2318.material = Material2319

Shape2317.appearance = Appearance2318
Text2320 = x3d.Text()
Text2320.string = ["Pitch"]

Shape2317.geometry = Text2320

Transform2315.children.append(Shape2317)
Shape2321 = x3d.Shape()
Shape2321.DEF = "Pitch_Back"
Appearance2322 = x3d.Appearance()
Material2323 = x3d.Material()
Material2323.USE = "Clear"

Appearance2322.material = Material2323

Shape2321.appearance = Appearance2322
IndexedFaceSet2324 = x3d.IndexedFaceSet()
IndexedFaceSet2324.USE = "Backing"

Shape2321.geometry = IndexedFaceSet2324

Transform2315.children.append(Shape2321)

Transform2303.children.append(Transform2315)
Transform2325 = x3d.Transform()
Transform2325.DEF = "YawTransform"
Transform2325.translation = [6,-1,0]
TouchSensor2326 = x3d.TouchSensor()
TouchSensor2326.DEF = "Yaw_Touch"
TouchSensor2326.description = "touch to select"

Transform2325.children.append(TouchSensor2326)
Shape2327 = x3d.Shape()
Shape2327.DEF = "YawText"
Appearance2328 = x3d.Appearance()
Material2329 = x3d.Material()
Material2329.USE = "text_color"

Appearance2328.material = Material2329

Shape2327.appearance = Appearance2328
Text2330 = x3d.Text()
Text2330.string = ["Yaw"]

Shape2327.geometry = Text2330

Transform2325.children.append(Shape2327)
Shape2331 = x3d.Shape()
Shape2331.DEF = "Yaw_Back"
Appearance2332 = x3d.Appearance()
Material2333 = x3d.Material()
Material2333.USE = "Clear"

Appearance2332.material = Material2333

Shape2331.appearance = Appearance2332
IndexedFaceSet2334 = x3d.IndexedFaceSet()
IndexedFaceSet2334.USE = "Backing"

Shape2331.geometry = IndexedFaceSet2334

Transform2325.children.append(Shape2331)

Transform2303.children.append(Transform2325)
Transform2335 = x3d.Transform()
Transform2335.DEF = "RollTransform"
Transform2335.translation = [9,-1,0]
TouchSensor2336 = x3d.TouchSensor()
TouchSensor2336.DEF = "Roll_Touch"
TouchSensor2336.description = "touch to select"

Transform2335.children.append(TouchSensor2336)
Shape2337 = x3d.Shape()
Shape2337.DEF = "_RollInterpolator"
Appearance2338 = x3d.Appearance()
Material2339 = x3d.Material()
Material2339.USE = "text_color"

Appearance2338.material = Material2339

Shape2337.appearance = Appearance2338
Text2340 = x3d.Text()
Text2340.string = ["Roll"]

Shape2337.geometry = Text2340

Transform2335.children.append(Shape2337)
Shape2341 = x3d.Shape()
Shape2341.DEF = "Roll_Back"
Appearance2342 = x3d.Appearance()
Material2343 = x3d.Material()
Material2343.USE = "Clear"

Appearance2342.material = Material2343

Shape2341.appearance = Appearance2342
IndexedFaceSet2344 = x3d.IndexedFaceSet()
IndexedFaceSet2344.USE = "Backing"

Shape2341.geometry = IndexedFaceSet2344

Transform2335.children.append(Shape2341)

Transform2303.children.append(Transform2335)
Transform2345 = x3d.Transform()
Transform2345.DEF = "WalkTransform"
Transform2345.translation = [12,-1,0]
TouchSensor2346 = x3d.TouchSensor()
TouchSensor2346.DEF = "Walk_Touch"
TouchSensor2346.description = "touch to select"

Transform2345.children.append(TouchSensor2346)
Shape2347 = x3d.Shape()
Shape2347.DEF = "WalkText"
Appearance2348 = x3d.Appearance()
Material2349 = x3d.Material()
Material2349.USE = "text_color"

Appearance2348.material = Material2349

Shape2347.appearance = Appearance2348
Text2350 = x3d.Text()
Text2350.string = ["Walk"]

Shape2347.geometry = Text2350

Transform2345.children.append(Shape2347)
Shape2351 = x3d.Shape()
Shape2351.DEF = "Walk_Back"
Appearance2352 = x3d.Appearance()
Material2353 = x3d.Material()
Material2353.USE = "Clear"

Appearance2352.material = Material2353

Shape2351.appearance = Appearance2352
IndexedFaceSet2354 = x3d.IndexedFaceSet()
IndexedFaceSet2354.USE = "Backing"

Shape2351.geometry = IndexedFaceSet2354

Transform2345.children.append(Shape2351)

Transform2303.children.append(Transform2345)
Transform2355 = x3d.Transform()
Transform2355.DEF = "RunTransform"
Transform2355.translation = [15,-1,0]
TouchSensor2356 = x3d.TouchSensor()
TouchSensor2356.DEF = "Run_Touch"
TouchSensor2356.description = "touch to select"

Transform2355.children.append(TouchSensor2356)
Shape2357 = x3d.Shape()
Shape2357.DEF = "RunText"
Appearance2358 = x3d.Appearance()
Material2359 = x3d.Material()
Material2359.USE = "text_color"

Appearance2358.material = Material2359

Shape2357.appearance = Appearance2358
Text2360 = x3d.Text()
Text2360.string = ["Run"]

Shape2357.geometry = Text2360

Transform2355.children.append(Shape2357)
Shape2361 = x3d.Shape()
Shape2361.DEF = "Run_Back"
Appearance2362 = x3d.Appearance()
Material2363 = x3d.Material()
Material2363.USE = "Clear"

Appearance2362.material = Material2363

Shape2361.appearance = Appearance2362
IndexedFaceSet2364 = x3d.IndexedFaceSet()
IndexedFaceSet2364.USE = "Backing"

Shape2361.geometry = IndexedFaceSet2364

Transform2355.children.append(Shape2361)

Transform2303.children.append(Transform2355)
Transform2365 = x3d.Transform()
Transform2365.DEF = "JumpTransform"
Transform2365.translation = [18,-1,0]
TouchSensor2366 = x3d.TouchSensor()
TouchSensor2366.DEF = "Jump_Touch"
TouchSensor2366.description = "touch to select"

Transform2365.children.append(TouchSensor2366)
Shape2367 = x3d.Shape()
Shape2367.DEF = "Jump"
Appearance2368 = x3d.Appearance()
Material2369 = x3d.Material()
Material2369.USE = "text_color"

Appearance2368.material = Material2369

Shape2367.appearance = Appearance2368
Text2370 = x3d.Text()
Text2370.string = ["Jump"]

Shape2367.geometry = Text2370

Transform2365.children.append(Shape2367)
Shape2371 = x3d.Shape()
Shape2371.DEF = "Jump_Back"
Appearance2372 = x3d.Appearance()
Material2373 = x3d.Material()
Material2373.USE = "Clear"

Appearance2372.material = Material2373

Shape2371.appearance = Appearance2372
IndexedFaceSet2374 = x3d.IndexedFaceSet()
IndexedFaceSet2374.USE = "Backing"

Shape2371.geometry = IndexedFaceSet2374

Transform2365.children.append(Shape2371)

Transform2303.children.append(Transform2365)
Transform2375 = x3d.Transform()
Transform2375.DEF = "KickTransform"
Transform2375.translation = [21,-1,0]
TouchSensor2376 = x3d.TouchSensor()
TouchSensor2376.DEF = "Kick_Touch"
TouchSensor2376.description = "touch to select"

Transform2375.children.append(TouchSensor2376)
Shape2377 = x3d.Shape()
Shape2377.DEF = "KickText"
Appearance2378 = x3d.Appearance()
Material2379 = x3d.Material()
Material2379.USE = "text_color"

Appearance2378.material = Material2379

Shape2377.appearance = Appearance2378
Text2380 = x3d.Text()
Text2380.string = ["Kick"]

Shape2377.geometry = Text2380

Transform2375.children.append(Shape2377)
Shape2381 = x3d.Shape()
Shape2381.DEF = "Kick_Back"
Appearance2382 = x3d.Appearance()
Material2383 = x3d.Material()
Material2383.USE = "Clear"

Appearance2382.material = Material2383

Shape2381.appearance = Appearance2382
IndexedFaceSet2384 = x3d.IndexedFaceSet()
IndexedFaceSet2384.USE = "Backing"

Shape2381.geometry = IndexedFaceSet2384

Transform2375.children.append(Shape2381)

Transform2303.children.append(Transform2375)
Transform2385 = x3d.Transform()
Transform2385.DEF = "Stop_Text"
Transform2385.translation = [0,1.4,0]
TouchSensor2386 = x3d.TouchSensor()
TouchSensor2386.DEF = "Stop_Touch"
TouchSensor2386.description = "touch to select"

Transform2385.children.append(TouchSensor2386)
Shape2387 = x3d.Shape()
Shape2387.DEF = "StopText"
Appearance2388 = x3d.Appearance()
Material2389 = x3d.Material()
Material2389.USE = "text_color"

Appearance2388.material = Material2389

Shape2387.appearance = Appearance2388
Text2390 = x3d.Text()
Text2390.string = ["Stop","Default Pose"]

Shape2387.geometry = Text2390

Transform2385.children.append(Shape2387)
Shape2391 = x3d.Shape()
Shape2391.DEF = "Stop_Back"
Appearance2392 = x3d.Appearance()
Material2393 = x3d.Material()
Material2393.USE = "Clear"

Appearance2392.material = Material2393

Shape2391.appearance = Appearance2392
IndexedFaceSet2394 = x3d.IndexedFaceSet()
IndexedFaceSet2394.USE = "Backing"

Shape2391.geometry = IndexedFaceSet2394

Transform2385.children.append(Shape2391)

Transform2303.children.append(Transform2385)

Transform2302.children.append(Transform2303)

Group2276.children.append(Transform2302)

Scene29.children.append(Group2276)
Group2395 = x3d.Group()
Group2395.DEF = "BehaviorSynchronization"

Scene29.children.append(Group2395)
ROUTE2396 = x3d.ROUTE()
ROUTE2396.fromNode = "StopTimer"
ROUTE2396.fromField = "fraction_changed"
ROUTE2396.toNode = "Stop_HumanoidRoot_TranslationInterpolator"
ROUTE2396.toField = "set_fraction"

Scene29.children.append(ROUTE2396)
ROUTE2397 = x3d.ROUTE()
ROUTE2397.fromNode = "StopTimer"
ROUTE2397.fromField = "fraction_changed"
ROUTE2397.toNode = "Stop_HumanoidRoot_RotationInterpolator"
ROUTE2397.toField = "set_fraction"

Scene29.children.append(ROUTE2397)
ROUTE2398 = x3d.ROUTE()
ROUTE2398.fromNode = "StopTimer"
ROUTE2398.fromField = "fraction_changed"
ROUTE2398.toNode = "Stop_sacroiliac_RotationInterpolator"
ROUTE2398.toField = "set_fraction"

Scene29.children.append(ROUTE2398)
ROUTE2399 = x3d.ROUTE()
ROUTE2399.fromNode = "StopTimer"
ROUTE2399.fromField = "fraction_changed"
ROUTE2399.toNode = "Stop_l_hip_RotationInterpolator"
ROUTE2399.toField = "set_fraction"

Scene29.children.append(ROUTE2399)
ROUTE2400 = x3d.ROUTE()
ROUTE2400.fromNode = "StopTimer"
ROUTE2400.fromField = "fraction_changed"
ROUTE2400.toNode = "Stop_l_knee_RotationInterpolator"
ROUTE2400.toField = "set_fraction"

Scene29.children.append(ROUTE2400)
ROUTE2401 = x3d.ROUTE()
ROUTE2401.fromNode = "StopTimer"
ROUTE2401.fromField = "fraction_changed"
ROUTE2401.toNode = "Stop_l_ankle_RotationInterpolator"
ROUTE2401.toField = "set_fraction"

Scene29.children.append(ROUTE2401)
ROUTE2402 = x3d.ROUTE()
ROUTE2402.fromNode = "StopTimer"
ROUTE2402.fromField = "fraction_changed"
ROUTE2402.toNode = "Stop_l_subtalar_RotationInterpolator"
ROUTE2402.toField = "set_fraction"

Scene29.children.append(ROUTE2402)
ROUTE2403 = x3d.ROUTE()
ROUTE2403.fromNode = "StopTimer"
ROUTE2403.fromField = "fraction_changed"
ROUTE2403.toNode = "Stop_l_midtarsal_RotationInterpolator"
ROUTE2403.toField = "set_fraction"

Scene29.children.append(ROUTE2403)
ROUTE2404 = x3d.ROUTE()
ROUTE2404.fromNode = "StopTimer"
ROUTE2404.fromField = "fraction_changed"
ROUTE2404.toNode = "Stop_l_metatarsal_RotationInterpolator"
ROUTE2404.toField = "set_fraction"

Scene29.children.append(ROUTE2404)
ROUTE2405 = x3d.ROUTE()
ROUTE2405.fromNode = "StopTimer"
ROUTE2405.fromField = "fraction_changed"
ROUTE2405.toNode = "Stop_r_hip_RotationInterpolator"
ROUTE2405.toField = "set_fraction"

Scene29.children.append(ROUTE2405)
ROUTE2406 = x3d.ROUTE()
ROUTE2406.fromNode = "StopTimer"
ROUTE2406.fromField = "fraction_changed"
ROUTE2406.toNode = "Stop_r_knee_RotationInterpolator"
ROUTE2406.toField = "set_fraction"

Scene29.children.append(ROUTE2406)
ROUTE2407 = x3d.ROUTE()
ROUTE2407.fromNode = "StopTimer"
ROUTE2407.fromField = "fraction_changed"
ROUTE2407.toNode = "Stop_r_ankle_RotationInterpolator"
ROUTE2407.toField = "set_fraction"

Scene29.children.append(ROUTE2407)
ROUTE2408 = x3d.ROUTE()
ROUTE2408.fromNode = "StopTimer"
ROUTE2408.fromField = "fraction_changed"
ROUTE2408.toNode = "Stop_r_subtalar_RotationInterpolator"
ROUTE2408.toField = "set_fraction"

Scene29.children.append(ROUTE2408)
ROUTE2409 = x3d.ROUTE()
ROUTE2409.fromNode = "StopTimer"
ROUTE2409.fromField = "fraction_changed"
ROUTE2409.toNode = "Stop_r_midtarsal_RotationInterpolator"
ROUTE2409.toField = "set_fraction"

Scene29.children.append(ROUTE2409)
ROUTE2410 = x3d.ROUTE()
ROUTE2410.fromNode = "StopTimer"
ROUTE2410.fromField = "fraction_changed"
ROUTE2410.toNode = "Stop_r_metatarsal_RotationInterpolator"
ROUTE2410.toField = "set_fraction"

Scene29.children.append(ROUTE2410)
ROUTE2411 = x3d.ROUTE()
ROUTE2411.fromNode = "StopTimer"
ROUTE2411.fromField = "fraction_changed"
ROUTE2411.toNode = "Stop_vl5_RotationInterpolator"
ROUTE2411.toField = "set_fraction"

Scene29.children.append(ROUTE2411)
ROUTE2412 = x3d.ROUTE()
ROUTE2412.fromNode = "StopTimer"
ROUTE2412.fromField = "fraction_changed"
ROUTE2412.toNode = "Stop_vl4_RotationInterpolator"
ROUTE2412.toField = "set_fraction"

Scene29.children.append(ROUTE2412)
ROUTE2413 = x3d.ROUTE()
ROUTE2413.fromNode = "StopTimer"
ROUTE2413.fromField = "fraction_changed"
ROUTE2413.toNode = "Stop_vl3_RotationInterpolator"
ROUTE2413.toField = "set_fraction"

Scene29.children.append(ROUTE2413)
ROUTE2414 = x3d.ROUTE()
ROUTE2414.fromNode = "StopTimer"
ROUTE2414.fromField = "fraction_changed"
ROUTE2414.toNode = "Stop_vl2_RotationInterpolator"
ROUTE2414.toField = "set_fraction"

Scene29.children.append(ROUTE2414)
ROUTE2415 = x3d.ROUTE()
ROUTE2415.fromNode = "StopTimer"
ROUTE2415.fromField = "fraction_changed"
ROUTE2415.toNode = "Stop_vl1_RotationInterpolator"
ROUTE2415.toField = "set_fraction"

Scene29.children.append(ROUTE2415)
ROUTE2416 = x3d.ROUTE()
ROUTE2416.fromNode = "StopTimer"
ROUTE2416.fromField = "fraction_changed"
ROUTE2416.toNode = "Stop_vt12_RotationInterpolator"
ROUTE2416.toField = "set_fraction"

Scene29.children.append(ROUTE2416)
ROUTE2417 = x3d.ROUTE()
ROUTE2417.fromNode = "StopTimer"
ROUTE2417.fromField = "fraction_changed"
ROUTE2417.toNode = "Stop_vt11_RotationInterpolator"
ROUTE2417.toField = "set_fraction"

Scene29.children.append(ROUTE2417)
ROUTE2418 = x3d.ROUTE()
ROUTE2418.fromNode = "StopTimer"
ROUTE2418.fromField = "fraction_changed"
ROUTE2418.toNode = "Stop_vt10_RotationInterpolator"
ROUTE2418.toField = "set_fraction"

Scene29.children.append(ROUTE2418)
ROUTE2419 = x3d.ROUTE()
ROUTE2419.fromNode = "StopTimer"
ROUTE2419.fromField = "fraction_changed"
ROUTE2419.toNode = "Stop_vt9_RotationInterpolator"
ROUTE2419.toField = "set_fraction"

Scene29.children.append(ROUTE2419)
ROUTE2420 = x3d.ROUTE()
ROUTE2420.fromNode = "StopTimer"
ROUTE2420.fromField = "fraction_changed"
ROUTE2420.toNode = "Stop_vt8_RotationInterpolator"
ROUTE2420.toField = "set_fraction"

Scene29.children.append(ROUTE2420)
ROUTE2421 = x3d.ROUTE()
ROUTE2421.fromNode = "StopTimer"
ROUTE2421.fromField = "fraction_changed"
ROUTE2421.toNode = "Stop_vt7_RotationInterpolator"
ROUTE2421.toField = "set_fraction"

Scene29.children.append(ROUTE2421)
ROUTE2422 = x3d.ROUTE()
ROUTE2422.fromNode = "StopTimer"
ROUTE2422.fromField = "fraction_changed"
ROUTE2422.toNode = "Stop_vt6_RotationInterpolator"
ROUTE2422.toField = "set_fraction"

Scene29.children.append(ROUTE2422)
ROUTE2423 = x3d.ROUTE()
ROUTE2423.fromNode = "StopTimer"
ROUTE2423.fromField = "fraction_changed"
ROUTE2423.toNode = "Stop_vt5_RotationInterpolator"
ROUTE2423.toField = "set_fraction"

Scene29.children.append(ROUTE2423)
ROUTE2424 = x3d.ROUTE()
ROUTE2424.fromNode = "StopTimer"
ROUTE2424.fromField = "fraction_changed"
ROUTE2424.toNode = "Stop_vt4_RotationInterpolator"
ROUTE2424.toField = "set_fraction"

Scene29.children.append(ROUTE2424)
ROUTE2425 = x3d.ROUTE()
ROUTE2425.fromNode = "StopTimer"
ROUTE2425.fromField = "fraction_changed"
ROUTE2425.toNode = "Stop_vt3_RotationInterpolator"
ROUTE2425.toField = "set_fraction"

Scene29.children.append(ROUTE2425)
ROUTE2426 = x3d.ROUTE()
ROUTE2426.fromNode = "StopTimer"
ROUTE2426.fromField = "fraction_changed"
ROUTE2426.toNode = "Stop_vt2_RotationInterpolator"
ROUTE2426.toField = "set_fraction"

Scene29.children.append(ROUTE2426)
ROUTE2427 = x3d.ROUTE()
ROUTE2427.fromNode = "StopTimer"
ROUTE2427.fromField = "fraction_changed"
ROUTE2427.toNode = "Stop_vt1_RotationInterpolator"
ROUTE2427.toField = "set_fraction"

Scene29.children.append(ROUTE2427)
ROUTE2428 = x3d.ROUTE()
ROUTE2428.fromNode = "StopTimer"
ROUTE2428.fromField = "fraction_changed"
ROUTE2428.toNode = "Stop_vc7_RotationInterpolator"
ROUTE2428.toField = "set_fraction"

Scene29.children.append(ROUTE2428)
ROUTE2429 = x3d.ROUTE()
ROUTE2429.fromNode = "StopTimer"
ROUTE2429.fromField = "fraction_changed"
ROUTE2429.toNode = "Stop_vc6_RotationInterpolator"
ROUTE2429.toField = "set_fraction"

Scene29.children.append(ROUTE2429)
ROUTE2430 = x3d.ROUTE()
ROUTE2430.fromNode = "StopTimer"
ROUTE2430.fromField = "fraction_changed"
ROUTE2430.toNode = "Stop_vc5_RotationInterpolator"
ROUTE2430.toField = "set_fraction"

Scene29.children.append(ROUTE2430)
ROUTE2431 = x3d.ROUTE()
ROUTE2431.fromNode = "StopTimer"
ROUTE2431.fromField = "fraction_changed"
ROUTE2431.toNode = "Stop_vc4_RotationInterpolator"
ROUTE2431.toField = "set_fraction"

Scene29.children.append(ROUTE2431)
ROUTE2432 = x3d.ROUTE()
ROUTE2432.fromNode = "StopTimer"
ROUTE2432.fromField = "fraction_changed"
ROUTE2432.toNode = "Stop_vc3_RotationInterpolator"
ROUTE2432.toField = "set_fraction"

Scene29.children.append(ROUTE2432)
ROUTE2433 = x3d.ROUTE()
ROUTE2433.fromNode = "StopTimer"
ROUTE2433.fromField = "fraction_changed"
ROUTE2433.toNode = "Stop_vc2_RotationInterpolator"
ROUTE2433.toField = "set_fraction"

Scene29.children.append(ROUTE2433)
ROUTE2434 = x3d.ROUTE()
ROUTE2434.fromNode = "StopTimer"
ROUTE2434.fromField = "fraction_changed"
ROUTE2434.toNode = "Stop_vc1_RotationInterpolator"
ROUTE2434.toField = "set_fraction"

Scene29.children.append(ROUTE2434)
ROUTE2435 = x3d.ROUTE()
ROUTE2435.fromNode = "StopTimer"
ROUTE2435.fromField = "fraction_changed"
ROUTE2435.toNode = "Stop_skullbase_RotationInterpolator"
ROUTE2435.toField = "set_fraction"

Scene29.children.append(ROUTE2435)
ROUTE2436 = x3d.ROUTE()
ROUTE2436.fromNode = "StopTimer"
ROUTE2436.fromField = "fraction_changed"
ROUTE2436.toNode = "Stop_l_eyeball_joint_RotationInterpolator"
ROUTE2436.toField = "set_fraction"

Scene29.children.append(ROUTE2436)
ROUTE2437 = x3d.ROUTE()
ROUTE2437.fromNode = "StopTimer"
ROUTE2437.fromField = "fraction_changed"
ROUTE2437.toNode = "Stop_r_eyeball_joint_RotationInterpolator"
ROUTE2437.toField = "set_fraction"

Scene29.children.append(ROUTE2437)
ROUTE2438 = x3d.ROUTE()
ROUTE2438.fromNode = "StopTimer"
ROUTE2438.fromField = "fraction_changed"
ROUTE2438.toNode = "Stop_l_sternoclavicular_RotationInterpolator"
ROUTE2438.toField = "set_fraction"

Scene29.children.append(ROUTE2438)
ROUTE2439 = x3d.ROUTE()
ROUTE2439.fromNode = "StopTimer"
ROUTE2439.fromField = "fraction_changed"
ROUTE2439.toNode = "Stop_l_acromioclavicular_RotationInterpolator"
ROUTE2439.toField = "set_fraction"

Scene29.children.append(ROUTE2439)
ROUTE2440 = x3d.ROUTE()
ROUTE2440.fromNode = "StopTimer"
ROUTE2440.fromField = "fraction_changed"
ROUTE2440.toNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE2440.toField = "set_fraction"

Scene29.children.append(ROUTE2440)
ROUTE2441 = x3d.ROUTE()
ROUTE2441.fromNode = "StopTimer"
ROUTE2441.fromField = "fraction_changed"
ROUTE2441.toNode = "Stop_l_elbow_RotationInterpolator"
ROUTE2441.toField = "set_fraction"

Scene29.children.append(ROUTE2441)
ROUTE2442 = x3d.ROUTE()
ROUTE2442.fromNode = "StopTimer"
ROUTE2442.fromField = "fraction_changed"
ROUTE2442.toNode = "Stop_l_wrist_RotationInterpolator"
ROUTE2442.toField = "set_fraction"

Scene29.children.append(ROUTE2442)
ROUTE2443 = x3d.ROUTE()
ROUTE2443.fromNode = "StopTimer"
ROUTE2443.fromField = "fraction_changed"
ROUTE2443.toNode = "Stop_l_thumb1_RotationInterpolator"
ROUTE2443.toField = "set_fraction"

Scene29.children.append(ROUTE2443)
ROUTE2444 = x3d.ROUTE()
ROUTE2444.fromNode = "StopTimer"
ROUTE2444.fromField = "fraction_changed"
ROUTE2444.toNode = "Stop_l_thumb2_RotationInterpolator"
ROUTE2444.toField = "set_fraction"

Scene29.children.append(ROUTE2444)
ROUTE2445 = x3d.ROUTE()
ROUTE2445.fromNode = "StopTimer"
ROUTE2445.fromField = "fraction_changed"
ROUTE2445.toNode = "Stop_l_thumb3_RotationInterpolator"
ROUTE2445.toField = "set_fraction"

Scene29.children.append(ROUTE2445)
ROUTE2446 = x3d.ROUTE()
ROUTE2446.fromNode = "StopTimer"
ROUTE2446.fromField = "fraction_changed"
ROUTE2446.toNode = "Stop_l_index0_RotationInterpolator"
ROUTE2446.toField = "set_fraction"

Scene29.children.append(ROUTE2446)
ROUTE2447 = x3d.ROUTE()
ROUTE2447.fromNode = "StopTimer"
ROUTE2447.fromField = "fraction_changed"
ROUTE2447.toNode = "Stop_l_index1_RotationInterpolator"
ROUTE2447.toField = "set_fraction"

Scene29.children.append(ROUTE2447)
ROUTE2448 = x3d.ROUTE()
ROUTE2448.fromNode = "StopTimer"
ROUTE2448.fromField = "fraction_changed"
ROUTE2448.toNode = "Stop_l_index2_RotationInterpolator"
ROUTE2448.toField = "set_fraction"

Scene29.children.append(ROUTE2448)
ROUTE2449 = x3d.ROUTE()
ROUTE2449.fromNode = "StopTimer"
ROUTE2449.fromField = "fraction_changed"
ROUTE2449.toNode = "Stop_l_index3_RotationInterpolator"
ROUTE2449.toField = "set_fraction"

Scene29.children.append(ROUTE2449)
ROUTE2450 = x3d.ROUTE()
ROUTE2450.fromNode = "StopTimer"
ROUTE2450.fromField = "fraction_changed"
ROUTE2450.toNode = "Stop_l_middle0_RotationInterpolator"
ROUTE2450.toField = "set_fraction"

Scene29.children.append(ROUTE2450)
ROUTE2451 = x3d.ROUTE()
ROUTE2451.fromNode = "StopTimer"
ROUTE2451.fromField = "fraction_changed"
ROUTE2451.toNode = "Stop_l_middle1_RotationInterpolator"
ROUTE2451.toField = "set_fraction"

Scene29.children.append(ROUTE2451)
ROUTE2452 = x3d.ROUTE()
ROUTE2452.fromNode = "StopTimer"
ROUTE2452.fromField = "fraction_changed"
ROUTE2452.toNode = "Stop_l_middle2_RotationInterpolator"
ROUTE2452.toField = "set_fraction"

Scene29.children.append(ROUTE2452)
ROUTE2453 = x3d.ROUTE()
ROUTE2453.fromNode = "StopTimer"
ROUTE2453.fromField = "fraction_changed"
ROUTE2453.toNode = "Stop_l_middle3_RotationInterpolator"
ROUTE2453.toField = "set_fraction"

Scene29.children.append(ROUTE2453)
ROUTE2454 = x3d.ROUTE()
ROUTE2454.fromNode = "StopTimer"
ROUTE2454.fromField = "fraction_changed"
ROUTE2454.toNode = "Stop_l_ring0_RotationInterpolator"
ROUTE2454.toField = "set_fraction"

Scene29.children.append(ROUTE2454)
ROUTE2455 = x3d.ROUTE()
ROUTE2455.fromNode = "StopTimer"
ROUTE2455.fromField = "fraction_changed"
ROUTE2455.toNode = "Stop_l_ring1_RotationInterpolator"
ROUTE2455.toField = "set_fraction"

Scene29.children.append(ROUTE2455)
ROUTE2456 = x3d.ROUTE()
ROUTE2456.fromNode = "StopTimer"
ROUTE2456.fromField = "fraction_changed"
ROUTE2456.toNode = "Stop_l_ring2_RotationInterpolator"
ROUTE2456.toField = "set_fraction"

Scene29.children.append(ROUTE2456)
ROUTE2457 = x3d.ROUTE()
ROUTE2457.fromNode = "StopTimer"
ROUTE2457.fromField = "fraction_changed"
ROUTE2457.toNode = "Stop_l_ring3_RotationInterpolator"
ROUTE2457.toField = "set_fraction"

Scene29.children.append(ROUTE2457)
ROUTE2458 = x3d.ROUTE()
ROUTE2458.fromNode = "StopTimer"
ROUTE2458.fromField = "fraction_changed"
ROUTE2458.toNode = "Stop_l_pinky0_RotationInterpolator"
ROUTE2458.toField = "set_fraction"

Scene29.children.append(ROUTE2458)
ROUTE2459 = x3d.ROUTE()
ROUTE2459.fromNode = "StopTimer"
ROUTE2459.fromField = "fraction_changed"
ROUTE2459.toNode = "Stop_l_pinky1_RotationInterpolator"
ROUTE2459.toField = "set_fraction"

Scene29.children.append(ROUTE2459)
ROUTE2460 = x3d.ROUTE()
ROUTE2460.fromNode = "StopTimer"
ROUTE2460.fromField = "fraction_changed"
ROUTE2460.toNode = "Stop_l_pinky2_RotationInterpolator"
ROUTE2460.toField = "set_fraction"

Scene29.children.append(ROUTE2460)
ROUTE2461 = x3d.ROUTE()
ROUTE2461.fromNode = "StopTimer"
ROUTE2461.fromField = "fraction_changed"
ROUTE2461.toNode = "Stop_l_pinky3_RotationInterpolator"
ROUTE2461.toField = "set_fraction"

Scene29.children.append(ROUTE2461)
ROUTE2462 = x3d.ROUTE()
ROUTE2462.fromNode = "StopTimer"
ROUTE2462.fromField = "fraction_changed"
ROUTE2462.toNode = "Stop_r_sternoclavicular_RotationInterpolator"
ROUTE2462.toField = "set_fraction"

Scene29.children.append(ROUTE2462)
ROUTE2463 = x3d.ROUTE()
ROUTE2463.fromNode = "StopTimer"
ROUTE2463.fromField = "fraction_changed"
ROUTE2463.toNode = "Stop_r_acromioclavicular_RotationInterpolator"
ROUTE2463.toField = "set_fraction"

Scene29.children.append(ROUTE2463)
ROUTE2464 = x3d.ROUTE()
ROUTE2464.fromNode = "StopTimer"
ROUTE2464.fromField = "fraction_changed"
ROUTE2464.toNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE2464.toField = "set_fraction"

Scene29.children.append(ROUTE2464)
ROUTE2465 = x3d.ROUTE()
ROUTE2465.fromNode = "StopTimer"
ROUTE2465.fromField = "fraction_changed"
ROUTE2465.toNode = "Stop_r_elbow_RotationInterpolator"
ROUTE2465.toField = "set_fraction"

Scene29.children.append(ROUTE2465)
ROUTE2466 = x3d.ROUTE()
ROUTE2466.fromNode = "StopTimer"
ROUTE2466.fromField = "fraction_changed"
ROUTE2466.toNode = "Stop_r_wrist_RotationInterpolator"
ROUTE2466.toField = "set_fraction"

Scene29.children.append(ROUTE2466)
ROUTE2467 = x3d.ROUTE()
ROUTE2467.fromNode = "StopTimer"
ROUTE2467.fromField = "fraction_changed"
ROUTE2467.toNode = "Stop_r_thumb1_RotationInterpolator"
ROUTE2467.toField = "set_fraction"

Scene29.children.append(ROUTE2467)
ROUTE2468 = x3d.ROUTE()
ROUTE2468.fromNode = "StopTimer"
ROUTE2468.fromField = "fraction_changed"
ROUTE2468.toNode = "Stop_r_thumb2_RotationInterpolator"
ROUTE2468.toField = "set_fraction"

Scene29.children.append(ROUTE2468)
ROUTE2469 = x3d.ROUTE()
ROUTE2469.fromNode = "StopTimer"
ROUTE2469.fromField = "fraction_changed"
ROUTE2469.toNode = "Stop_r_thumb3_RotationInterpolator"
ROUTE2469.toField = "set_fraction"

Scene29.children.append(ROUTE2469)
ROUTE2470 = x3d.ROUTE()
ROUTE2470.fromNode = "StopTimer"
ROUTE2470.fromField = "fraction_changed"
ROUTE2470.toNode = "Stop_r_index0_RotationInterpolator"
ROUTE2470.toField = "set_fraction"

Scene29.children.append(ROUTE2470)
ROUTE2471 = x3d.ROUTE()
ROUTE2471.fromNode = "StopTimer"
ROUTE2471.fromField = "fraction_changed"
ROUTE2471.toNode = "Stop_r_index1_RotationInterpolator"
ROUTE2471.toField = "set_fraction"

Scene29.children.append(ROUTE2471)
ROUTE2472 = x3d.ROUTE()
ROUTE2472.fromNode = "StopTimer"
ROUTE2472.fromField = "fraction_changed"
ROUTE2472.toNode = "Stop_r_index2_RotationInterpolator"
ROUTE2472.toField = "set_fraction"

Scene29.children.append(ROUTE2472)
ROUTE2473 = x3d.ROUTE()
ROUTE2473.fromNode = "StopTimer"
ROUTE2473.fromField = "fraction_changed"
ROUTE2473.toNode = "Stop_r_index3_RotationInterpolator"
ROUTE2473.toField = "set_fraction"

Scene29.children.append(ROUTE2473)
ROUTE2474 = x3d.ROUTE()
ROUTE2474.fromNode = "StopTimer"
ROUTE2474.fromField = "fraction_changed"
ROUTE2474.toNode = "Stop_r_middle0_RotationInterpolator"
ROUTE2474.toField = "set_fraction"

Scene29.children.append(ROUTE2474)
ROUTE2475 = x3d.ROUTE()
ROUTE2475.fromNode = "StopTimer"
ROUTE2475.fromField = "fraction_changed"
ROUTE2475.toNode = "Stop_r_middle1_RotationInterpolator"
ROUTE2475.toField = "set_fraction"

Scene29.children.append(ROUTE2475)
ROUTE2476 = x3d.ROUTE()
ROUTE2476.fromNode = "StopTimer"
ROUTE2476.fromField = "fraction_changed"
ROUTE2476.toNode = "Stop_r_middle2_RotationInterpolator"
ROUTE2476.toField = "set_fraction"

Scene29.children.append(ROUTE2476)
ROUTE2477 = x3d.ROUTE()
ROUTE2477.fromNode = "StopTimer"
ROUTE2477.fromField = "fraction_changed"
ROUTE2477.toNode = "Stop_r_middle3_RotationInterpolator"
ROUTE2477.toField = "set_fraction"

Scene29.children.append(ROUTE2477)
ROUTE2478 = x3d.ROUTE()
ROUTE2478.fromNode = "StopTimer"
ROUTE2478.fromField = "fraction_changed"
ROUTE2478.toNode = "Stop_r_ring0_RotationInterpolator"
ROUTE2478.toField = "set_fraction"

Scene29.children.append(ROUTE2478)
ROUTE2479 = x3d.ROUTE()
ROUTE2479.fromNode = "StopTimer"
ROUTE2479.fromField = "fraction_changed"
ROUTE2479.toNode = "Stop_r_ring1_RotationInterpolator"
ROUTE2479.toField = "set_fraction"

Scene29.children.append(ROUTE2479)
ROUTE2480 = x3d.ROUTE()
ROUTE2480.fromNode = "StopTimer"
ROUTE2480.fromField = "fraction_changed"
ROUTE2480.toNode = "Stop_r_ring2_RotationInterpolator"
ROUTE2480.toField = "set_fraction"

Scene29.children.append(ROUTE2480)
ROUTE2481 = x3d.ROUTE()
ROUTE2481.fromNode = "StopTimer"
ROUTE2481.fromField = "fraction_changed"
ROUTE2481.toNode = "Stop_r_ring3_RotationInterpolator"
ROUTE2481.toField = "set_fraction"

Scene29.children.append(ROUTE2481)
ROUTE2482 = x3d.ROUTE()
ROUTE2482.fromNode = "StopTimer"
ROUTE2482.fromField = "fraction_changed"
ROUTE2482.toNode = "Stop_r_pinky0_RotationInterpolator"
ROUTE2482.toField = "set_fraction"

Scene29.children.append(ROUTE2482)
ROUTE2483 = x3d.ROUTE()
ROUTE2483.fromNode = "StopTimer"
ROUTE2483.fromField = "fraction_changed"
ROUTE2483.toNode = "Stop_r_pinky1_RotationInterpolator"
ROUTE2483.toField = "set_fraction"

Scene29.children.append(ROUTE2483)
ROUTE2484 = x3d.ROUTE()
ROUTE2484.fromNode = "StopTimer"
ROUTE2484.fromField = "fraction_changed"
ROUTE2484.toNode = "Stop_r_pinky2_RotationInterpolator"
ROUTE2484.toField = "set_fraction"

Scene29.children.append(ROUTE2484)
ROUTE2485 = x3d.ROUTE()
ROUTE2485.fromNode = "StopTimer"
ROUTE2485.fromField = "fraction_changed"
ROUTE2485.toNode = "Stop_r_pinky3_RotationInterpolator"
ROUTE2485.toField = "set_fraction"

Scene29.children.append(ROUTE2485)
ROUTE2486 = x3d.ROUTE()
ROUTE2486.fromNode = "Stop_HumanoidRoot_TranslationInterpolator"
ROUTE2486.fromField = "value_changed"
ROUTE2486.toNode = "hanim_humanoid_root"
ROUTE2486.toField = "set_translation"

Scene29.children.append(ROUTE2486)
ROUTE2487 = x3d.ROUTE()
ROUTE2487.fromNode = "Stop_HumanoidRoot_RotationInterpolator"
ROUTE2487.fromField = "value_changed"
ROUTE2487.toNode = "hanim_humanoid_root"
ROUTE2487.toField = "set_rotation"

Scene29.children.append(ROUTE2487)
ROUTE2488 = x3d.ROUTE()
ROUTE2488.fromNode = "Stop_sacroiliac_RotationInterpolator"
ROUTE2488.fromField = "value_changed"
ROUTE2488.toNode = "hanim_sacroiliac"
ROUTE2488.toField = "set_rotation"

Scene29.children.append(ROUTE2488)
ROUTE2489 = x3d.ROUTE()
ROUTE2489.fromNode = "Stop_l_hip_RotationInterpolator"
ROUTE2489.fromField = "value_changed"
ROUTE2489.toNode = "hanim_l_hip"
ROUTE2489.toField = "set_rotation"

Scene29.children.append(ROUTE2489)
ROUTE2490 = x3d.ROUTE()
ROUTE2490.fromNode = "Stop_l_knee_RotationInterpolator"
ROUTE2490.fromField = "value_changed"
ROUTE2490.toNode = "hanim_l_knee"
ROUTE2490.toField = "set_rotation"

Scene29.children.append(ROUTE2490)
ROUTE2491 = x3d.ROUTE()
ROUTE2491.fromNode = "Stop_l_ankle_RotationInterpolator"
ROUTE2491.fromField = "value_changed"
ROUTE2491.toNode = "hanim_l_ankle"
ROUTE2491.toField = "set_rotation"

Scene29.children.append(ROUTE2491)
ROUTE2492 = x3d.ROUTE()
ROUTE2492.fromNode = "Stop_l_subtalar_RotationInterpolator"
ROUTE2492.fromField = "value_changed"
ROUTE2492.toNode = "hanim_l_subtalar"
ROUTE2492.toField = "set_rotation"

Scene29.children.append(ROUTE2492)
ROUTE2493 = x3d.ROUTE()
ROUTE2493.fromNode = "Stop_l_midtarsal_RotationInterpolator"
ROUTE2493.fromField = "value_changed"
ROUTE2493.toNode = "hanim_l_midtarsal"
ROUTE2493.toField = "set_rotation"

Scene29.children.append(ROUTE2493)
ROUTE2494 = x3d.ROUTE()
ROUTE2494.fromNode = "Stop_l_metatarsal_RotationInterpolator"
ROUTE2494.fromField = "value_changed"
ROUTE2494.toNode = "hanim_l_metatarsal"
ROUTE2494.toField = "set_rotation"

Scene29.children.append(ROUTE2494)
ROUTE2495 = x3d.ROUTE()
ROUTE2495.fromNode = "Stop_r_hip_RotationInterpolator"
ROUTE2495.fromField = "value_changed"
ROUTE2495.toNode = "hanim_r_hip"
ROUTE2495.toField = "set_rotation"

Scene29.children.append(ROUTE2495)
ROUTE2496 = x3d.ROUTE()
ROUTE2496.fromNode = "Stop_r_knee_RotationInterpolator"
ROUTE2496.fromField = "value_changed"
ROUTE2496.toNode = "hanim_r_knee"
ROUTE2496.toField = "set_rotation"

Scene29.children.append(ROUTE2496)
ROUTE2497 = x3d.ROUTE()
ROUTE2497.fromNode = "Stop_r_ankle_RotationInterpolator"
ROUTE2497.fromField = "value_changed"
ROUTE2497.toNode = "hanim_r_ankle"
ROUTE2497.toField = "set_rotation"

Scene29.children.append(ROUTE2497)
ROUTE2498 = x3d.ROUTE()
ROUTE2498.fromNode = "Stop_r_subtalar_RotationInterpolator"
ROUTE2498.fromField = "value_changed"
ROUTE2498.toNode = "hanim_r_subtalar"
ROUTE2498.toField = "set_rotation"

Scene29.children.append(ROUTE2498)
ROUTE2499 = x3d.ROUTE()
ROUTE2499.fromNode = "Stop_r_midtarsal_RotationInterpolator"
ROUTE2499.fromField = "value_changed"
ROUTE2499.toNode = "hanim_r_midtarsal"
ROUTE2499.toField = "set_rotation"

Scene29.children.append(ROUTE2499)
ROUTE2500 = x3d.ROUTE()
ROUTE2500.fromNode = "Stop_r_metatarsal_RotationInterpolator"
ROUTE2500.fromField = "value_changed"
ROUTE2500.toNode = "hanim_r_metatarsal"
ROUTE2500.toField = "set_rotation"

Scene29.children.append(ROUTE2500)
ROUTE2501 = x3d.ROUTE()
ROUTE2501.fromNode = "Stop_vl5_RotationInterpolator"
ROUTE2501.fromField = "value_changed"
ROUTE2501.toNode = "hanim_vl5"
ROUTE2501.toField = "set_rotation"

Scene29.children.append(ROUTE2501)
ROUTE2502 = x3d.ROUTE()
ROUTE2502.fromNode = "Stop_vl4_RotationInterpolator"
ROUTE2502.fromField = "value_changed"
ROUTE2502.toNode = "hanim_vl4"
ROUTE2502.toField = "set_rotation"

Scene29.children.append(ROUTE2502)
ROUTE2503 = x3d.ROUTE()
ROUTE2503.fromNode = "Stop_vl3_RotationInterpolator"
ROUTE2503.fromField = "value_changed"
ROUTE2503.toNode = "hanim_vl3"
ROUTE2503.toField = "set_rotation"

Scene29.children.append(ROUTE2503)
ROUTE2504 = x3d.ROUTE()
ROUTE2504.fromNode = "Stop_vl2_RotationInterpolator"
ROUTE2504.fromField = "value_changed"
ROUTE2504.toNode = "hanim_vl2"
ROUTE2504.toField = "set_rotation"

Scene29.children.append(ROUTE2504)
ROUTE2505 = x3d.ROUTE()
ROUTE2505.fromNode = "Stop_vl1_RotationInterpolator"
ROUTE2505.fromField = "value_changed"
ROUTE2505.toNode = "hanim_vl1"
ROUTE2505.toField = "set_rotation"

Scene29.children.append(ROUTE2505)
ROUTE2506 = x3d.ROUTE()
ROUTE2506.fromNode = "Stop_vt12_RotationInterpolator"
ROUTE2506.fromField = "value_changed"
ROUTE2506.toNode = "hanim_vt12"
ROUTE2506.toField = "set_rotation"

Scene29.children.append(ROUTE2506)
ROUTE2507 = x3d.ROUTE()
ROUTE2507.fromNode = "Stop_vt11_RotationInterpolator"
ROUTE2507.fromField = "value_changed"
ROUTE2507.toNode = "hanim_vt11"
ROUTE2507.toField = "set_rotation"

Scene29.children.append(ROUTE2507)
ROUTE2508 = x3d.ROUTE()
ROUTE2508.fromNode = "Stop_vt10_RotationInterpolator"
ROUTE2508.fromField = "value_changed"
ROUTE2508.toNode = "hanim_vt10"
ROUTE2508.toField = "set_rotation"

Scene29.children.append(ROUTE2508)
ROUTE2509 = x3d.ROUTE()
ROUTE2509.fromNode = "Stop_vt9_RotationInterpolator"
ROUTE2509.fromField = "value_changed"
ROUTE2509.toNode = "hanim_vt9"
ROUTE2509.toField = "set_rotation"

Scene29.children.append(ROUTE2509)
ROUTE2510 = x3d.ROUTE()
ROUTE2510.fromNode = "Stop_vt8_RotationInterpolator"
ROUTE2510.fromField = "value_changed"
ROUTE2510.toNode = "hanim_vt8"
ROUTE2510.toField = "set_rotation"

Scene29.children.append(ROUTE2510)
ROUTE2511 = x3d.ROUTE()
ROUTE2511.fromNode = "Stop_vt7_RotationInterpolator"
ROUTE2511.fromField = "value_changed"
ROUTE2511.toNode = "hanim_vt7"
ROUTE2511.toField = "set_rotation"

Scene29.children.append(ROUTE2511)
ROUTE2512 = x3d.ROUTE()
ROUTE2512.fromNode = "Stop_vt6_RotationInterpolator"
ROUTE2512.fromField = "value_changed"
ROUTE2512.toNode = "hanim_vt6"
ROUTE2512.toField = "set_rotation"

Scene29.children.append(ROUTE2512)
ROUTE2513 = x3d.ROUTE()
ROUTE2513.fromNode = "Stop_vt5_RotationInterpolator"
ROUTE2513.fromField = "value_changed"
ROUTE2513.toNode = "hanim_vt5"
ROUTE2513.toField = "set_rotation"

Scene29.children.append(ROUTE2513)
ROUTE2514 = x3d.ROUTE()
ROUTE2514.fromNode = "Stop_vt4_RotationInterpolator"
ROUTE2514.fromField = "value_changed"
ROUTE2514.toNode = "hanim_vt4"
ROUTE2514.toField = "set_rotation"

Scene29.children.append(ROUTE2514)
ROUTE2515 = x3d.ROUTE()
ROUTE2515.fromNode = "Stop_vt3_RotationInterpolator"
ROUTE2515.fromField = "value_changed"
ROUTE2515.toNode = "hanim_vt3"
ROUTE2515.toField = "set_rotation"

Scene29.children.append(ROUTE2515)
ROUTE2516 = x3d.ROUTE()
ROUTE2516.fromNode = "Stop_vt2_RotationInterpolator"
ROUTE2516.fromField = "value_changed"
ROUTE2516.toNode = "hanim_vt2"
ROUTE2516.toField = "set_rotation"

Scene29.children.append(ROUTE2516)
ROUTE2517 = x3d.ROUTE()
ROUTE2517.fromNode = "Stop_vt1_RotationInterpolator"
ROUTE2517.fromField = "value_changed"
ROUTE2517.toNode = "hanim_vt1"
ROUTE2517.toField = "set_rotation"

Scene29.children.append(ROUTE2517)
ROUTE2518 = x3d.ROUTE()
ROUTE2518.fromNode = "Stop_vc7_RotationInterpolator"
ROUTE2518.fromField = "value_changed"
ROUTE2518.toNode = "hanim_vc7"
ROUTE2518.toField = "set_rotation"

Scene29.children.append(ROUTE2518)
ROUTE2519 = x3d.ROUTE()
ROUTE2519.fromNode = "Stop_vc6_RotationInterpolator"
ROUTE2519.fromField = "value_changed"
ROUTE2519.toNode = "hanim_vc6"
ROUTE2519.toField = "set_rotation"

Scene29.children.append(ROUTE2519)
ROUTE2520 = x3d.ROUTE()
ROUTE2520.fromNode = "Stop_vc5_RotationInterpolator"
ROUTE2520.fromField = "value_changed"
ROUTE2520.toNode = "hanim_vc5"
ROUTE2520.toField = "set_rotation"

Scene29.children.append(ROUTE2520)
ROUTE2521 = x3d.ROUTE()
ROUTE2521.fromNode = "Stop_vc4_RotationInterpolator"
ROUTE2521.fromField = "value_changed"
ROUTE2521.toNode = "hanim_vc4"
ROUTE2521.toField = "set_rotation"

Scene29.children.append(ROUTE2521)
ROUTE2522 = x3d.ROUTE()
ROUTE2522.fromNode = "Stop_vc3_RotationInterpolator"
ROUTE2522.fromField = "value_changed"
ROUTE2522.toNode = "hanim_vc3"
ROUTE2522.toField = "set_rotation"

Scene29.children.append(ROUTE2522)
ROUTE2523 = x3d.ROUTE()
ROUTE2523.fromNode = "Stop_vc2_RotationInterpolator"
ROUTE2523.fromField = "value_changed"
ROUTE2523.toNode = "hanim_vc2"
ROUTE2523.toField = "set_rotation"

Scene29.children.append(ROUTE2523)
ROUTE2524 = x3d.ROUTE()
ROUTE2524.fromNode = "Stop_vc1_RotationInterpolator"
ROUTE2524.fromField = "value_changed"
ROUTE2524.toNode = "hanim_vc1"
ROUTE2524.toField = "set_rotation"

Scene29.children.append(ROUTE2524)
ROUTE2525 = x3d.ROUTE()
ROUTE2525.fromNode = "Stop_skullbase_RotationInterpolator"
ROUTE2525.fromField = "value_changed"
ROUTE2525.toNode = "hanim_skullbase"
ROUTE2525.toField = "set_rotation"

Scene29.children.append(ROUTE2525)
ROUTE2526 = x3d.ROUTE()
ROUTE2526.fromNode = "Stop_l_eyeball_joint_RotationInterpolator"
ROUTE2526.fromField = "value_changed"
ROUTE2526.toNode = "hanim_l_eyeball_joint"
ROUTE2526.toField = "set_rotation"

Scene29.children.append(ROUTE2526)
ROUTE2527 = x3d.ROUTE()
ROUTE2527.fromNode = "Stop_r_eyeball_joint_RotationInterpolator"
ROUTE2527.fromField = "value_changed"
ROUTE2527.toNode = "hanim_r_eyeball_joint"
ROUTE2527.toField = "set_rotation"

Scene29.children.append(ROUTE2527)
ROUTE2528 = x3d.ROUTE()
ROUTE2528.fromNode = "Stop_l_sternoclavicular_RotationInterpolator"
ROUTE2528.fromField = "value_changed"
ROUTE2528.toNode = "hanim_l_sternoclavicular"
ROUTE2528.toField = "set_rotation"

Scene29.children.append(ROUTE2528)
ROUTE2529 = x3d.ROUTE()
ROUTE2529.fromNode = "Stop_l_acromioclavicular_RotationInterpolator"
ROUTE2529.fromField = "value_changed"
ROUTE2529.toNode = "hanim_l_acromioclavicular"
ROUTE2529.toField = "set_rotation"

Scene29.children.append(ROUTE2529)
ROUTE2530 = x3d.ROUTE()
ROUTE2530.fromNode = "Stop_l_shoulder_RotationInterpolator"
ROUTE2530.fromField = "value_changed"
ROUTE2530.toNode = "hanim_l_shoulder"
ROUTE2530.toField = "set_rotation"

Scene29.children.append(ROUTE2530)
ROUTE2531 = x3d.ROUTE()
ROUTE2531.fromNode = "Stop_l_elbow_RotationInterpolator"
ROUTE2531.fromField = "value_changed"
ROUTE2531.toNode = "hanim_l_elbow"
ROUTE2531.toField = "set_rotation"

Scene29.children.append(ROUTE2531)
ROUTE2532 = x3d.ROUTE()
ROUTE2532.fromNode = "Stop_l_wrist_RotationInterpolator"
ROUTE2532.fromField = "value_changed"
ROUTE2532.toNode = "hanim_l_wrist"
ROUTE2532.toField = "set_rotation"

Scene29.children.append(ROUTE2532)
ROUTE2533 = x3d.ROUTE()
ROUTE2533.fromNode = "Stop_l_thumb1_RotationInterpolator"
ROUTE2533.fromField = "value_changed"
ROUTE2533.toNode = "hanim_l_thumb1"
ROUTE2533.toField = "set_rotation"

Scene29.children.append(ROUTE2533)
ROUTE2534 = x3d.ROUTE()
ROUTE2534.fromNode = "Stop_l_thumb2_RotationInterpolator"
ROUTE2534.fromField = "value_changed"
ROUTE2534.toNode = "hanim_l_thumb2"
ROUTE2534.toField = "set_rotation"

Scene29.children.append(ROUTE2534)
ROUTE2535 = x3d.ROUTE()
ROUTE2535.fromNode = "Stop_l_thumb3_RotationInterpolator"
ROUTE2535.fromField = "value_changed"
ROUTE2535.toNode = "hanim_l_thumb3"
ROUTE2535.toField = "set_rotation"

Scene29.children.append(ROUTE2535)
ROUTE2536 = x3d.ROUTE()
ROUTE2536.fromNode = "Stop_l_index0_RotationInterpolator"
ROUTE2536.fromField = "value_changed"
ROUTE2536.toNode = "hanim_l_index0"
ROUTE2536.toField = "set_rotation"

Scene29.children.append(ROUTE2536)
ROUTE2537 = x3d.ROUTE()
ROUTE2537.fromNode = "Stop_l_index1_RotationInterpolator"
ROUTE2537.fromField = "value_changed"
ROUTE2537.toNode = "hanim_l_index1"
ROUTE2537.toField = "set_rotation"

Scene29.children.append(ROUTE2537)
ROUTE2538 = x3d.ROUTE()
ROUTE2538.fromNode = "Stop_l_index2_RotationInterpolator"
ROUTE2538.fromField = "value_changed"
ROUTE2538.toNode = "hanim_l_index2"
ROUTE2538.toField = "set_rotation"

Scene29.children.append(ROUTE2538)
ROUTE2539 = x3d.ROUTE()
ROUTE2539.fromNode = "Stop_l_index3_RotationInterpolator"
ROUTE2539.fromField = "value_changed"
ROUTE2539.toNode = "hanim_l_index3"
ROUTE2539.toField = "set_rotation"

Scene29.children.append(ROUTE2539)
ROUTE2540 = x3d.ROUTE()
ROUTE2540.fromNode = "Stop_l_middle0_RotationInterpolator"
ROUTE2540.fromField = "value_changed"
ROUTE2540.toNode = "hanim_l_middle0"
ROUTE2540.toField = "set_rotation"

Scene29.children.append(ROUTE2540)
ROUTE2541 = x3d.ROUTE()
ROUTE2541.fromNode = "Stop_l_middle1_RotationInterpolator"
ROUTE2541.fromField = "value_changed"
ROUTE2541.toNode = "hanim_l_middle1"
ROUTE2541.toField = "set_rotation"

Scene29.children.append(ROUTE2541)
ROUTE2542 = x3d.ROUTE()
ROUTE2542.fromNode = "Stop_l_middle2_RotationInterpolator"
ROUTE2542.fromField = "value_changed"
ROUTE2542.toNode = "hanim_l_middle2"
ROUTE2542.toField = "set_rotation"

Scene29.children.append(ROUTE2542)
ROUTE2543 = x3d.ROUTE()
ROUTE2543.fromNode = "Stop_l_middle3_RotationInterpolator"
ROUTE2543.fromField = "value_changed"
ROUTE2543.toNode = "hanim_l_middle3"
ROUTE2543.toField = "set_rotation"

Scene29.children.append(ROUTE2543)
ROUTE2544 = x3d.ROUTE()
ROUTE2544.fromNode = "Stop_l_ring0_RotationInterpolator"
ROUTE2544.fromField = "value_changed"
ROUTE2544.toNode = "hanim_l_ring0"
ROUTE2544.toField = "set_rotation"

Scene29.children.append(ROUTE2544)
ROUTE2545 = x3d.ROUTE()
ROUTE2545.fromNode = "Stop_l_ring1_RotationInterpolator"
ROUTE2545.fromField = "value_changed"
ROUTE2545.toNode = "hanim_l_ring1"
ROUTE2545.toField = "set_rotation"

Scene29.children.append(ROUTE2545)
ROUTE2546 = x3d.ROUTE()
ROUTE2546.fromNode = "Stop_l_ring2_RotationInterpolator"
ROUTE2546.fromField = "value_changed"
ROUTE2546.toNode = "hanim_l_ring2"
ROUTE2546.toField = "set_rotation"

Scene29.children.append(ROUTE2546)
ROUTE2547 = x3d.ROUTE()
ROUTE2547.fromNode = "Stop_l_ring3_RotationInterpolator"
ROUTE2547.fromField = "value_changed"
ROUTE2547.toNode = "hanim_l_ring3"
ROUTE2547.toField = "set_rotation"

Scene29.children.append(ROUTE2547)
ROUTE2548 = x3d.ROUTE()
ROUTE2548.fromNode = "Stop_l_pinky0_RotationInterpolator"
ROUTE2548.fromField = "value_changed"
ROUTE2548.toNode = "hanim_l_pinky0"
ROUTE2548.toField = "set_rotation"

Scene29.children.append(ROUTE2548)
ROUTE2549 = x3d.ROUTE()
ROUTE2549.fromNode = "Stop_l_pinky1_RotationInterpolator"
ROUTE2549.fromField = "value_changed"
ROUTE2549.toNode = "hanim_l_pinky1"
ROUTE2549.toField = "set_rotation"

Scene29.children.append(ROUTE2549)
ROUTE2550 = x3d.ROUTE()
ROUTE2550.fromNode = "Stop_l_pinky2_RotationInterpolator"
ROUTE2550.fromField = "value_changed"
ROUTE2550.toNode = "hanim_l_pinky2"
ROUTE2550.toField = "set_rotation"

Scene29.children.append(ROUTE2550)
ROUTE2551 = x3d.ROUTE()
ROUTE2551.fromNode = "Stop_l_pinky3_RotationInterpolator"
ROUTE2551.fromField = "value_changed"
ROUTE2551.toNode = "hanim_l_pinky3"
ROUTE2551.toField = "set_rotation"

Scene29.children.append(ROUTE2551)
ROUTE2552 = x3d.ROUTE()
ROUTE2552.fromNode = "Stop_r_sternoclavicular_RotationInterpolator"
ROUTE2552.fromField = "value_changed"
ROUTE2552.toNode = "hanim_r_sternoclavicular"
ROUTE2552.toField = "set_rotation"

Scene29.children.append(ROUTE2552)
ROUTE2553 = x3d.ROUTE()
ROUTE2553.fromNode = "Stop_r_acromioclavicular_RotationInterpolator"
ROUTE2553.fromField = "value_changed"
ROUTE2553.toNode = "hanim_r_acromioclavicular"
ROUTE2553.toField = "set_rotation"

Scene29.children.append(ROUTE2553)
ROUTE2554 = x3d.ROUTE()
ROUTE2554.fromNode = "Stop_r_shoulder_RotationInterpolator"
ROUTE2554.fromField = "value_changed"
ROUTE2554.toNode = "hanim_r_shoulder"
ROUTE2554.toField = "set_rotation"

Scene29.children.append(ROUTE2554)
ROUTE2555 = x3d.ROUTE()
ROUTE2555.fromNode = "Stop_r_elbow_RotationInterpolator"
ROUTE2555.fromField = "value_changed"
ROUTE2555.toNode = "hanim_r_elbow"
ROUTE2555.toField = "set_rotation"

Scene29.children.append(ROUTE2555)
ROUTE2556 = x3d.ROUTE()
ROUTE2556.fromNode = "Stop_r_wrist_RotationInterpolator"
ROUTE2556.fromField = "value_changed"
ROUTE2556.toNode = "hanim_r_wrist"
ROUTE2556.toField = "set_rotation"

Scene29.children.append(ROUTE2556)
ROUTE2557 = x3d.ROUTE()
ROUTE2557.fromNode = "Stop_r_thumb1_RotationInterpolator"
ROUTE2557.fromField = "value_changed"
ROUTE2557.toNode = "hanim_r_thumb1"
ROUTE2557.toField = "set_rotation"

Scene29.children.append(ROUTE2557)
ROUTE2558 = x3d.ROUTE()
ROUTE2558.fromNode = "Stop_r_thumb2_RotationInterpolator"
ROUTE2558.fromField = "value_changed"
ROUTE2558.toNode = "hanim_r_thumb2"
ROUTE2558.toField = "set_rotation"

Scene29.children.append(ROUTE2558)
ROUTE2559 = x3d.ROUTE()
ROUTE2559.fromNode = "Stop_r_thumb3_RotationInterpolator"
ROUTE2559.fromField = "value_changed"
ROUTE2559.toNode = "hanim_r_thumb3"
ROUTE2559.toField = "set_rotation"

Scene29.children.append(ROUTE2559)
ROUTE2560 = x3d.ROUTE()
ROUTE2560.fromNode = "Stop_r_index0_RotationInterpolator"
ROUTE2560.fromField = "value_changed"
ROUTE2560.toNode = "hanim_r_index0"
ROUTE2560.toField = "set_rotation"

Scene29.children.append(ROUTE2560)
ROUTE2561 = x3d.ROUTE()
ROUTE2561.fromNode = "Stop_r_index1_RotationInterpolator"
ROUTE2561.fromField = "value_changed"
ROUTE2561.toNode = "hanim_r_index1"
ROUTE2561.toField = "set_rotation"

Scene29.children.append(ROUTE2561)
ROUTE2562 = x3d.ROUTE()
ROUTE2562.fromNode = "Stop_r_index2_RotationInterpolator"
ROUTE2562.fromField = "value_changed"
ROUTE2562.toNode = "hanim_r_index2"
ROUTE2562.toField = "set_rotation"

Scene29.children.append(ROUTE2562)
ROUTE2563 = x3d.ROUTE()
ROUTE2563.fromNode = "Stop_r_index3_RotationInterpolator"
ROUTE2563.fromField = "value_changed"
ROUTE2563.toNode = "hanim_r_index3"
ROUTE2563.toField = "set_rotation"

Scene29.children.append(ROUTE2563)
ROUTE2564 = x3d.ROUTE()
ROUTE2564.fromNode = "Stop_r_middle0_RotationInterpolator"
ROUTE2564.fromField = "value_changed"
ROUTE2564.toNode = "hanim_r_middle0"
ROUTE2564.toField = "set_rotation"

Scene29.children.append(ROUTE2564)
ROUTE2565 = x3d.ROUTE()
ROUTE2565.fromNode = "Stop_r_middle1_RotationInterpolator"
ROUTE2565.fromField = "value_changed"
ROUTE2565.toNode = "hanim_r_middle1"
ROUTE2565.toField = "set_rotation"

Scene29.children.append(ROUTE2565)
ROUTE2566 = x3d.ROUTE()
ROUTE2566.fromNode = "Stop_r_middle2_RotationInterpolator"
ROUTE2566.fromField = "value_changed"
ROUTE2566.toNode = "hanim_r_middle2"
ROUTE2566.toField = "set_rotation"

Scene29.children.append(ROUTE2566)
ROUTE2567 = x3d.ROUTE()
ROUTE2567.fromNode = "Stop_r_middle3_RotationInterpolator"
ROUTE2567.fromField = "value_changed"
ROUTE2567.toNode = "hanim_r_middle3"
ROUTE2567.toField = "set_rotation"

Scene29.children.append(ROUTE2567)
ROUTE2568 = x3d.ROUTE()
ROUTE2568.fromNode = "Stop_r_ring0_RotationInterpolator"
ROUTE2568.fromField = "value_changed"
ROUTE2568.toNode = "hanim_r_ring0"
ROUTE2568.toField = "set_rotation"

Scene29.children.append(ROUTE2568)
ROUTE2569 = x3d.ROUTE()
ROUTE2569.fromNode = "Stop_r_ring1_RotationInterpolator"
ROUTE2569.fromField = "value_changed"
ROUTE2569.toNode = "hanim_r_ring1"
ROUTE2569.toField = "set_rotation"

Scene29.children.append(ROUTE2569)
ROUTE2570 = x3d.ROUTE()
ROUTE2570.fromNode = "Stop_r_ring2_RotationInterpolator"
ROUTE2570.fromField = "value_changed"
ROUTE2570.toNode = "hanim_r_ring2"
ROUTE2570.toField = "set_rotation"

Scene29.children.append(ROUTE2570)
ROUTE2571 = x3d.ROUTE()
ROUTE2571.fromNode = "Stop_r_ring3_RotationInterpolator"
ROUTE2571.fromField = "value_changed"
ROUTE2571.toNode = "hanim_r_ring3"
ROUTE2571.toField = "set_rotation"

Scene29.children.append(ROUTE2571)
ROUTE2572 = x3d.ROUTE()
ROUTE2572.fromNode = "Stop_r_pinky0_RotationInterpolator"
ROUTE2572.fromField = "value_changed"
ROUTE2572.toNode = "hanim_r_pinky0"
ROUTE2572.toField = "set_rotation"

Scene29.children.append(ROUTE2572)
ROUTE2573 = x3d.ROUTE()
ROUTE2573.fromNode = "Stop_r_pinky1_RotationInterpolator"
ROUTE2573.fromField = "value_changed"
ROUTE2573.toNode = "hanim_r_pinky1"
ROUTE2573.toField = "set_rotation"

Scene29.children.append(ROUTE2573)
ROUTE2574 = x3d.ROUTE()
ROUTE2574.fromNode = "Stop_r_pinky2_RotationInterpolator"
ROUTE2574.fromField = "value_changed"
ROUTE2574.toNode = "hanim_r_pinky2"
ROUTE2574.toField = "set_rotation"

Scene29.children.append(ROUTE2574)
ROUTE2575 = x3d.ROUTE()
ROUTE2575.fromNode = "Stop_r_pinky3_RotationInterpolator"
ROUTE2575.fromField = "value_changed"
ROUTE2575.toNode = "hanim_r_pinky3"
ROUTE2575.toField = "set_rotation"

Scene29.children.append(ROUTE2575)
ROUTE2576 = x3d.ROUTE()
ROUTE2576.fromNode = "StandTimer"
ROUTE2576.fromField = "fraction_changed"
ROUTE2576.toNode = "Stand_r_ankle_RotationInterpolator"
ROUTE2576.toField = "set_fraction"

Scene29.children.append(ROUTE2576)
ROUTE2577 = x3d.ROUTE()
ROUTE2577.fromNode = "StandTimer"
ROUTE2577.fromField = "fraction_changed"
ROUTE2577.toNode = "Stand_r_knee_RotationInterpolator"
ROUTE2577.toField = "set_fraction"

Scene29.children.append(ROUTE2577)
ROUTE2578 = x3d.ROUTE()
ROUTE2578.fromNode = "StandTimer"
ROUTE2578.fromField = "fraction_changed"
ROUTE2578.toNode = "Stand_r_hip_RotationInterpolator"
ROUTE2578.toField = "set_fraction"

Scene29.children.append(ROUTE2578)
ROUTE2579 = x3d.ROUTE()
ROUTE2579.fromNode = "StandTimer"
ROUTE2579.fromField = "fraction_changed"
ROUTE2579.toNode = "Stand_l_ankle_RotationInterpolator"
ROUTE2579.toField = "set_fraction"

Scene29.children.append(ROUTE2579)
ROUTE2580 = x3d.ROUTE()
ROUTE2580.fromNode = "StandTimer"
ROUTE2580.fromField = "fraction_changed"
ROUTE2580.toNode = "Stand_l_knee_RotationInterpolator"
ROUTE2580.toField = "set_fraction"

Scene29.children.append(ROUTE2580)
ROUTE2581 = x3d.ROUTE()
ROUTE2581.fromNode = "StandTimer"
ROUTE2581.fromField = "fraction_changed"
ROUTE2581.toNode = "Stand_l_hip_RotationInterpolator"
ROUTE2581.toField = "set_fraction"

Scene29.children.append(ROUTE2581)
ROUTE2582 = x3d.ROUTE()
ROUTE2582.fromNode = "StandTimer"
ROUTE2582.fromField = "fraction_changed"
ROUTE2582.toNode = "Stand_lower_body_RotationInterpolator"
ROUTE2582.toField = "set_fraction"

Scene29.children.append(ROUTE2582)
ROUTE2583 = x3d.ROUTE()
ROUTE2583.fromNode = "StandTimer"
ROUTE2583.fromField = "fraction_changed"
ROUTE2583.toNode = "Stand_r_wrist_RotationInterpolator"
ROUTE2583.toField = "set_fraction"

Scene29.children.append(ROUTE2583)
ROUTE2584 = x3d.ROUTE()
ROUTE2584.fromNode = "StandTimer"
ROUTE2584.fromField = "fraction_changed"
ROUTE2584.toNode = "Stand_r_elbow_RotationInterpolator"
ROUTE2584.toField = "set_fraction"

Scene29.children.append(ROUTE2584)
ROUTE2585 = x3d.ROUTE()
ROUTE2585.fromNode = "StandTimer"
ROUTE2585.fromField = "fraction_changed"
ROUTE2585.toNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE2585.toField = "set_fraction"

Scene29.children.append(ROUTE2585)
ROUTE2586 = x3d.ROUTE()
ROUTE2586.fromNode = "StandTimer"
ROUTE2586.fromField = "fraction_changed"
ROUTE2586.toNode = "Stand_l_wrist_RotationInterpolator"
ROUTE2586.toField = "set_fraction"

Scene29.children.append(ROUTE2586)
ROUTE2587 = x3d.ROUTE()
ROUTE2587.fromNode = "StandTimer"
ROUTE2587.fromField = "fraction_changed"
ROUTE2587.toNode = "Stand_l_elbow_RotationInterpolator"
ROUTE2587.toField = "set_fraction"

Scene29.children.append(ROUTE2587)
ROUTE2588 = x3d.ROUTE()
ROUTE2588.fromNode = "StandTimer"
ROUTE2588.fromField = "fraction_changed"
ROUTE2588.toNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE2588.toField = "set_fraction"

Scene29.children.append(ROUTE2588)
ROUTE2589 = x3d.ROUTE()
ROUTE2589.fromNode = "StandTimer"
ROUTE2589.fromField = "fraction_changed"
ROUTE2589.toNode = "Stand_head_RotationInterpolator"
ROUTE2589.toField = "set_fraction"

Scene29.children.append(ROUTE2589)
ROUTE2590 = x3d.ROUTE()
ROUTE2590.fromNode = "StandTimer"
ROUTE2590.fromField = "fraction_changed"
ROUTE2590.toNode = "Stand_neck_RotationInterpolator"
ROUTE2590.toField = "set_fraction"

Scene29.children.append(ROUTE2590)
ROUTE2591 = x3d.ROUTE()
ROUTE2591.fromNode = "StandTimer"
ROUTE2591.fromField = "fraction_changed"
ROUTE2591.toNode = "Stand_l_eyeball_RotationInterpolator"
ROUTE2591.toField = "set_fraction"

Scene29.children.append(ROUTE2591)
ROUTE2592 = x3d.ROUTE()
ROUTE2592.fromNode = "StandTimer"
ROUTE2592.fromField = "fraction_changed"
ROUTE2592.toNode = "Stand_r_eyeball_RotationInterpolator"
ROUTE2592.toField = "set_fraction"

Scene29.children.append(ROUTE2592)
ROUTE2593 = x3d.ROUTE()
ROUTE2593.fromNode = "StandTimer"
ROUTE2593.fromField = "fraction_changed"
ROUTE2593.toNode = "Stand_upper_body_RotationInterpolator"
ROUTE2593.toField = "set_fraction"

Scene29.children.append(ROUTE2593)
ROUTE2594 = x3d.ROUTE()
ROUTE2594.fromNode = "StandTimer"
ROUTE2594.fromField = "fraction_changed"
ROUTE2594.toNode = "Stand_whole_body_RotationInterpolator"
ROUTE2594.toField = "set_fraction"

Scene29.children.append(ROUTE2594)
ROUTE2595 = x3d.ROUTE()
ROUTE2595.fromNode = "StandTimer"
ROUTE2595.fromField = "fraction_changed"
ROUTE2595.toNode = "Stand_whole_body_TranslationInterpolator"
ROUTE2595.toField = "set_fraction"

Scene29.children.append(ROUTE2595)
ROUTE2596 = x3d.ROUTE()
ROUTE2596.fromNode = "StandTimer"
ROUTE2596.fromField = "fraction_changed"
ROUTE2596.toNode = "Stand_l_sternoclavicular_RollInterpolator"
ROUTE2596.toField = "set_fraction"

Scene29.children.append(ROUTE2596)
ROUTE2597 = x3d.ROUTE()
ROUTE2597.fromNode = "StandTimer"
ROUTE2597.fromField = "fraction_changed"
ROUTE2597.toNode = "Stand_l_acromioclavicular_RollInterpolator"
ROUTE2597.toField = "set_fraction"

Scene29.children.append(ROUTE2597)
ROUTE2598 = x3d.ROUTE()
ROUTE2598.fromNode = "StandTimer"
ROUTE2598.fromField = "fraction_changed"
ROUTE2598.toNode = "Stand_r_sternoclavicular_RollInterpolator"
ROUTE2598.toField = "set_fraction"

Scene29.children.append(ROUTE2598)
ROUTE2599 = x3d.ROUTE()
ROUTE2599.fromNode = "StandTimer"
ROUTE2599.fromField = "fraction_changed"
ROUTE2599.toNode = "Stand_r_acromioclavicular_RollInterpolator"
ROUTE2599.toField = "set_fraction"

Scene29.children.append(ROUTE2599)
ROUTE2600 = x3d.ROUTE()
ROUTE2600.fromNode = "StandTimer"
ROUTE2600.fromField = "fraction_changed"
ROUTE2600.toNode = "Stand_r_metatarsal_PitchInterpolator"
ROUTE2600.toField = "set_fraction"

Scene29.children.append(ROUTE2600)
ROUTE2601 = x3d.ROUTE()
ROUTE2601.fromNode = "StandTimer"
ROUTE2601.fromField = "fraction_changed"
ROUTE2601.toNode = "Stand_sacroiliac_YawInterpolator"
ROUTE2601.toField = "set_fraction"

Scene29.children.append(ROUTE2601)
ROUTE2602 = x3d.ROUTE()
ROUTE2602.fromNode = "StandTimer"
ROUTE2602.fromField = "fraction_changed"
ROUTE2602.toNode = "Stand_vl5_YawInterpolator"
ROUTE2602.toField = "set_fraction"

Scene29.children.append(ROUTE2602)
ROUTE2603 = x3d.ROUTE()
ROUTE2603.fromNode = "StandTimer"
ROUTE2603.fromField = "fraction_changed"
ROUTE2603.toNode = "Stand_vc6_YawInterpolator"
ROUTE2603.toField = "set_fraction"

Scene29.children.append(ROUTE2603)
ROUTE2604 = x3d.ROUTE()
ROUTE2604.fromNode = "StandTimer"
ROUTE2604.fromField = "fraction_changed"
ROUTE2604.toNode = "Stand_l_thumb1_PitchInterpolator"
ROUTE2604.toField = "set_fraction"

Scene29.children.append(ROUTE2604)
ROUTE2605 = x3d.ROUTE()
ROUTE2605.fromNode = "StandTimer"
ROUTE2605.fromField = "fraction_changed"
ROUTE2605.toNode = "Stand_r_thumb1_PitchInterpolator"
ROUTE2605.toField = "set_fraction"

Scene29.children.append(ROUTE2605)
ROUTE2606 = x3d.ROUTE()
ROUTE2606.fromNode = "StandTimer"
ROUTE2606.fromField = "fraction_changed"
ROUTE2606.toNode = "Stand_r_index1_RollInterpolator"
ROUTE2606.toField = "set_fraction"

Scene29.children.append(ROUTE2606)
ROUTE2607 = x3d.ROUTE()
ROUTE2607.fromNode = "StandTimer"
ROUTE2607.fromField = "fraction_changed"
ROUTE2607.toNode = "Stand_r_index2_RollInterpolator"
ROUTE2607.toField = "set_fraction"

Scene29.children.append(ROUTE2607)
ROUTE2608 = x3d.ROUTE()
ROUTE2608.fromNode = "StandTimer"
ROUTE2608.fromField = "fraction_changed"
ROUTE2608.toNode = "Stand_r_index3_RollInterpolator"
ROUTE2608.toField = "set_fraction"

Scene29.children.append(ROUTE2608)
ROUTE2609 = x3d.ROUTE()
ROUTE2609.fromNode = "Stand_r_ankle_RotationInterpolator"
ROUTE2609.fromField = "value_changed"
ROUTE2609.toNode = "hanim_r_ankle"
ROUTE2609.toField = "set_rotation"

Scene29.children.append(ROUTE2609)
ROUTE2610 = x3d.ROUTE()
ROUTE2610.fromNode = "Stand_r_knee_RotationInterpolator"
ROUTE2610.fromField = "value_changed"
ROUTE2610.toNode = "hanim_r_knee"
ROUTE2610.toField = "set_rotation"

Scene29.children.append(ROUTE2610)
ROUTE2611 = x3d.ROUTE()
ROUTE2611.fromNode = "Stand_r_hip_RotationInterpolator"
ROUTE2611.fromField = "value_changed"
ROUTE2611.toNode = "hanim_r_hip"
ROUTE2611.toField = "set_rotation"

Scene29.children.append(ROUTE2611)
ROUTE2612 = x3d.ROUTE()
ROUTE2612.fromNode = "Stand_l_ankle_RotationInterpolator"
ROUTE2612.fromField = "value_changed"
ROUTE2612.toNode = "hanim_l_ankle"
ROUTE2612.toField = "set_rotation"

Scene29.children.append(ROUTE2612)
ROUTE2613 = x3d.ROUTE()
ROUTE2613.fromNode = "Stand_l_knee_RotationInterpolator"
ROUTE2613.fromField = "value_changed"
ROUTE2613.toNode = "hanim_l_knee"
ROUTE2613.toField = "set_rotation"

Scene29.children.append(ROUTE2613)
ROUTE2614 = x3d.ROUTE()
ROUTE2614.fromNode = "Stand_l_hip_RotationInterpolator"
ROUTE2614.fromField = "value_changed"
ROUTE2614.toNode = "hanim_l_hip"
ROUTE2614.toField = "set_rotation"

Scene29.children.append(ROUTE2614)
ROUTE2615 = x3d.ROUTE()
ROUTE2615.fromNode = "Stand_r_wrist_RotationInterpolator"
ROUTE2615.fromField = "value_changed"
ROUTE2615.toNode = "hanim_r_wrist"
ROUTE2615.toField = "set_rotation"

Scene29.children.append(ROUTE2615)
ROUTE2616 = x3d.ROUTE()
ROUTE2616.fromNode = "Stand_r_elbow_RotationInterpolator"
ROUTE2616.fromField = "value_changed"
ROUTE2616.toNode = "hanim_r_elbow"
ROUTE2616.toField = "set_rotation"

Scene29.children.append(ROUTE2616)
ROUTE2617 = x3d.ROUTE()
ROUTE2617.fromNode = "Stand_r_shoulder_RotationInterpolator"
ROUTE2617.fromField = "value_changed"
ROUTE2617.toNode = "hanim_r_shoulder"
ROUTE2617.toField = "set_rotation"

Scene29.children.append(ROUTE2617)
ROUTE2618 = x3d.ROUTE()
ROUTE2618.fromNode = "Stand_l_wrist_RotationInterpolator"
ROUTE2618.fromField = "value_changed"
ROUTE2618.toNode = "hanim_l_wrist"
ROUTE2618.toField = "set_rotation"

Scene29.children.append(ROUTE2618)
ROUTE2619 = x3d.ROUTE()
ROUTE2619.fromNode = "Stand_l_elbow_RotationInterpolator"
ROUTE2619.fromField = "value_changed"
ROUTE2619.toNode = "hanim_l_elbow"
ROUTE2619.toField = "set_rotation"

Scene29.children.append(ROUTE2619)
ROUTE2620 = x3d.ROUTE()
ROUTE2620.fromNode = "Stand_l_shoulder_RotationInterpolator"
ROUTE2620.fromField = "value_changed"
ROUTE2620.toNode = "hanim_l_shoulder"
ROUTE2620.toField = "set_rotation"

Scene29.children.append(ROUTE2620)
ROUTE2621 = x3d.ROUTE()
ROUTE2621.fromNode = "Stand_head_RotationInterpolator"
ROUTE2621.fromField = "value_changed"
ROUTE2621.toNode = "hanim_skullbase"
ROUTE2621.toField = "set_rotation"

Scene29.children.append(ROUTE2621)
ROUTE2622 = x3d.ROUTE()
ROUTE2622.fromNode = "Stand_neck_RotationInterpolator"
ROUTE2622.fromField = "value_changed"
ROUTE2622.toNode = "hanim_vc7"
ROUTE2622.toField = "set_rotation"

Scene29.children.append(ROUTE2622)
ROUTE2623 = x3d.ROUTE()
ROUTE2623.fromNode = "Stand_l_eyeball_RotationInterpolator"
ROUTE2623.fromField = "value_changed"
ROUTE2623.toNode = "hanim_l_eyeball_joint"
ROUTE2623.toField = "set_rotation"

Scene29.children.append(ROUTE2623)
ROUTE2624 = x3d.ROUTE()
ROUTE2624.fromNode = "Stand_r_eyeball_RotationInterpolator"
ROUTE2624.fromField = "value_changed"
ROUTE2624.toNode = "hanim_r_eyeball_joint"
ROUTE2624.toField = "set_rotation"

Scene29.children.append(ROUTE2624)
ROUTE2625 = x3d.ROUTE()
ROUTE2625.fromNode = "Stand_upper_body_RotationInterpolator"
ROUTE2625.fromField = "value_changed"
ROUTE2625.toNode = "hanim_vl1"
ROUTE2625.toField = "set_rotation"

Scene29.children.append(ROUTE2625)
ROUTE2626 = x3d.ROUTE()
ROUTE2626.fromNode = "Stand_lower_body_RotationInterpolator"
ROUTE2626.fromField = "value_changed"
ROUTE2626.toNode = "hanim_sacroiliac"
ROUTE2626.toField = "set_rotation"

Scene29.children.append(ROUTE2626)
ROUTE2627 = x3d.ROUTE()
ROUTE2627.fromNode = "Stand_whole_body_RotationInterpolator"
ROUTE2627.fromField = "value_changed"
ROUTE2627.toNode = "hanim_humanoid_root"
ROUTE2627.toField = "set_rotation"

Scene29.children.append(ROUTE2627)
ROUTE2628 = x3d.ROUTE()
ROUTE2628.fromNode = "Stand_whole_body_TranslationInterpolator"
ROUTE2628.fromField = "value_changed"
ROUTE2628.toNode = "hanim_humanoid_root"
ROUTE2628.toField = "set_translation"

Scene29.children.append(ROUTE2628)
ROUTE2629 = x3d.ROUTE()
ROUTE2629.fromNode = "Stand_l_sternoclavicular_RollInterpolator"
ROUTE2629.fromField = "value_changed"
ROUTE2629.toNode = "hanim_l_sternoclavicular"
ROUTE2629.toField = "set_rotation"

Scene29.children.append(ROUTE2629)
ROUTE2630 = x3d.ROUTE()
ROUTE2630.fromNode = "Stand_l_acromioclavicular_RollInterpolator"
ROUTE2630.fromField = "value_changed"
ROUTE2630.toNode = "hanim_l_acromioclavicular"
ROUTE2630.toField = "set_rotation"

Scene29.children.append(ROUTE2630)
ROUTE2631 = x3d.ROUTE()
ROUTE2631.fromNode = "Stand_r_sternoclavicular_RollInterpolator"
ROUTE2631.fromField = "value_changed"
ROUTE2631.toNode = "hanim_r_sternoclavicular"
ROUTE2631.toField = "set_rotation"

Scene29.children.append(ROUTE2631)
ROUTE2632 = x3d.ROUTE()
ROUTE2632.fromNode = "Stand_r_acromioclavicular_RollInterpolator"
ROUTE2632.fromField = "value_changed"
ROUTE2632.toNode = "hanim_r_acromioclavicular"
ROUTE2632.toField = "set_rotation"

Scene29.children.append(ROUTE2632)
ROUTE2633 = x3d.ROUTE()
ROUTE2633.fromNode = "Stand_r_metatarsal_PitchInterpolator"
ROUTE2633.fromField = "value_changed"
ROUTE2633.toNode = "hanim_l_metatarsal"
ROUTE2633.toField = "set_rotation"

Scene29.children.append(ROUTE2633)
ROUTE2634 = x3d.ROUTE()
ROUTE2634.fromNode = "Stand_r_metatarsal_PitchInterpolator"
ROUTE2634.fromField = "value_changed"
ROUTE2634.toNode = "hanim_r_metatarsal"
ROUTE2634.toField = "set_rotation"

Scene29.children.append(ROUTE2634)
ROUTE2635 = x3d.ROUTE()
ROUTE2635.fromNode = "Stand_sacroiliac_YawInterpolator"
ROUTE2635.fromField = "value_changed"
ROUTE2635.toNode = "hanim_sacroiliac"
ROUTE2635.toField = "set_rotation"

Scene29.children.append(ROUTE2635)
ROUTE2636 = x3d.ROUTE()
ROUTE2636.fromNode = "Stand_vl5_YawInterpolator"
ROUTE2636.fromField = "value_changed"
ROUTE2636.toNode = "hanim_vl5"
ROUTE2636.toField = "set_rotation"

Scene29.children.append(ROUTE2636)
ROUTE2637 = x3d.ROUTE()
ROUTE2637.fromNode = "Stand_vc6_YawInterpolator"
ROUTE2637.fromField = "value_changed"
ROUTE2637.toNode = "hanim_vc6"
ROUTE2637.toField = "set_rotation"

Scene29.children.append(ROUTE2637)
ROUTE2638 = x3d.ROUTE()
ROUTE2638.fromNode = "Stand_l_thumb1_PitchInterpolator"
ROUTE2638.fromField = "value_changed"
ROUTE2638.toNode = "hanim_l_thumb1"
ROUTE2638.toField = "set_rotation"

Scene29.children.append(ROUTE2638)
ROUTE2639 = x3d.ROUTE()
ROUTE2639.fromNode = "Stand_r_thumb1_PitchInterpolator"
ROUTE2639.fromField = "value_changed"
ROUTE2639.toNode = "hanim_r_thumb1"
ROUTE2639.toField = "set_rotation"

Scene29.children.append(ROUTE2639)
ROUTE2640 = x3d.ROUTE()
ROUTE2640.fromNode = "Stand_r_index1_RollInterpolator"
ROUTE2640.fromField = "value_changed"
ROUTE2640.toNode = "hanim_r_index1"
ROUTE2640.toField = "set_rotation"

Scene29.children.append(ROUTE2640)
ROUTE2641 = x3d.ROUTE()
ROUTE2641.fromNode = "Stand_r_index2_RollInterpolator"
ROUTE2641.fromField = "value_changed"
ROUTE2641.toNode = "hanim_r_index2"
ROUTE2641.toField = "set_rotation"

Scene29.children.append(ROUTE2641)
ROUTE2642 = x3d.ROUTE()
ROUTE2642.fromNode = "Stand_r_index3_RollInterpolator"
ROUTE2642.fromField = "value_changed"
ROUTE2642.toNode = "hanim_r_index3"
ROUTE2642.toField = "set_rotation"

Scene29.children.append(ROUTE2642)
ROUTE2643 = x3d.ROUTE()
ROUTE2643.fromNode = "Stand_r_index1_RollInterpolator"
ROUTE2643.fromField = "value_changed"
ROUTE2643.toNode = "hanim_r_middle1"
ROUTE2643.toField = "set_rotation"

Scene29.children.append(ROUTE2643)
ROUTE2644 = x3d.ROUTE()
ROUTE2644.fromNode = "Stand_r_index2_RollInterpolator"
ROUTE2644.fromField = "value_changed"
ROUTE2644.toNode = "hanim_r_middle2"
ROUTE2644.toField = "set_rotation"

Scene29.children.append(ROUTE2644)
ROUTE2645 = x3d.ROUTE()
ROUTE2645.fromNode = "Stand_r_index3_RollInterpolator"
ROUTE2645.fromField = "value_changed"
ROUTE2645.toNode = "hanim_r_middle3"
ROUTE2645.toField = "set_rotation"

Scene29.children.append(ROUTE2645)
ROUTE2646 = x3d.ROUTE()
ROUTE2646.fromNode = "Stand_r_index1_RollInterpolator"
ROUTE2646.fromField = "value_changed"
ROUTE2646.toNode = "hanim_r_ring1"
ROUTE2646.toField = "set_rotation"

Scene29.children.append(ROUTE2646)
ROUTE2647 = x3d.ROUTE()
ROUTE2647.fromNode = "Stand_r_index2_RollInterpolator"
ROUTE2647.fromField = "value_changed"
ROUTE2647.toNode = "hanim_r_ring2"
ROUTE2647.toField = "set_rotation"

Scene29.children.append(ROUTE2647)
ROUTE2648 = x3d.ROUTE()
ROUTE2648.fromNode = "Stand_r_index3_RollInterpolator"
ROUTE2648.fromField = "value_changed"
ROUTE2648.toNode = "hanim_r_ring3"
ROUTE2648.toField = "set_rotation"

Scene29.children.append(ROUTE2648)
ROUTE2649 = x3d.ROUTE()
ROUTE2649.fromNode = "Stand_r_index1_RollInterpolator"
ROUTE2649.fromField = "value_changed"
ROUTE2649.toNode = "hanim_r_pinky1"
ROUTE2649.toField = "set_rotation"

Scene29.children.append(ROUTE2649)
ROUTE2650 = x3d.ROUTE()
ROUTE2650.fromNode = "Stand_r_index2_RollInterpolator"
ROUTE2650.fromField = "value_changed"
ROUTE2650.toNode = "hanim_r_pinky2"
ROUTE2650.toField = "set_rotation"

Scene29.children.append(ROUTE2650)
ROUTE2651 = x3d.ROUTE()
ROUTE2651.fromNode = "Stand_r_index3_RollInterpolator"
ROUTE2651.fromField = "value_changed"
ROUTE2651.toNode = "hanim_r_pinky3"
ROUTE2651.toField = "set_rotation"

Scene29.children.append(ROUTE2651)
ROUTE2652 = x3d.ROUTE()
ROUTE2652.fromNode = "PitchTimer"
ROUTE2652.fromField = "fraction_changed"
ROUTE2652.toNode = "Pitches_r_ankle_RotationInterpolator"
ROUTE2652.toField = "set_fraction"

Scene29.children.append(ROUTE2652)
ROUTE2653 = x3d.ROUTE()
ROUTE2653.fromNode = "PitchTimer"
ROUTE2653.fromField = "fraction_changed"
ROUTE2653.toNode = "Pitches_r_knee_RotationInterpolator"
ROUTE2653.toField = "set_fraction"

Scene29.children.append(ROUTE2653)
ROUTE2654 = x3d.ROUTE()
ROUTE2654.fromNode = "PitchTimer"
ROUTE2654.fromField = "fraction_changed"
ROUTE2654.toNode = "Pitches_r_hip_RotationInterpolator"
ROUTE2654.toField = "set_fraction"

Scene29.children.append(ROUTE2654)
ROUTE2655 = x3d.ROUTE()
ROUTE2655.fromNode = "PitchTimer"
ROUTE2655.fromField = "fraction_changed"
ROUTE2655.toNode = "Pitches_l_ankle_RotationInterpolator"
ROUTE2655.toField = "set_fraction"

Scene29.children.append(ROUTE2655)
ROUTE2656 = x3d.ROUTE()
ROUTE2656.fromNode = "PitchTimer"
ROUTE2656.fromField = "fraction_changed"
ROUTE2656.toNode = "Pitches_l_knee_RotationInterpolator"
ROUTE2656.toField = "set_fraction"

Scene29.children.append(ROUTE2656)
ROUTE2657 = x3d.ROUTE()
ROUTE2657.fromNode = "PitchTimer"
ROUTE2657.fromField = "fraction_changed"
ROUTE2657.toNode = "Pitches_l_hip_RotationInterpolator"
ROUTE2657.toField = "set_fraction"

Scene29.children.append(ROUTE2657)
ROUTE2658 = x3d.ROUTE()
ROUTE2658.fromNode = "PitchTimer"
ROUTE2658.fromField = "fraction_changed"
ROUTE2658.toNode = "Pitches_lower_body_RotationInterpolator"
ROUTE2658.toField = "set_fraction"

Scene29.children.append(ROUTE2658)
ROUTE2659 = x3d.ROUTE()
ROUTE2659.fromNode = "PitchTimer"
ROUTE2659.fromField = "fraction_changed"
ROUTE2659.toNode = "Pitches_r_wrist_RotationInterpolator"
ROUTE2659.toField = "set_fraction"

Scene29.children.append(ROUTE2659)
ROUTE2660 = x3d.ROUTE()
ROUTE2660.fromNode = "PitchTimer"
ROUTE2660.fromField = "fraction_changed"
ROUTE2660.toNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE2660.toField = "set_fraction"

Scene29.children.append(ROUTE2660)
ROUTE2661 = x3d.ROUTE()
ROUTE2661.fromNode = "PitchTimer"
ROUTE2661.fromField = "fraction_changed"
ROUTE2661.toNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE2661.toField = "set_fraction"

Scene29.children.append(ROUTE2661)
ROUTE2662 = x3d.ROUTE()
ROUTE2662.fromNode = "PitchTimer"
ROUTE2662.fromField = "fraction_changed"
ROUTE2662.toNode = "Pitches_l_wrist_RotationInterpolator"
ROUTE2662.toField = "set_fraction"

Scene29.children.append(ROUTE2662)
ROUTE2663 = x3d.ROUTE()
ROUTE2663.fromNode = "PitchTimer"
ROUTE2663.fromField = "fraction_changed"
ROUTE2663.toNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE2663.toField = "set_fraction"

Scene29.children.append(ROUTE2663)
ROUTE2664 = x3d.ROUTE()
ROUTE2664.fromNode = "PitchTimer"
ROUTE2664.fromField = "fraction_changed"
ROUTE2664.toNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE2664.toField = "set_fraction"

Scene29.children.append(ROUTE2664)
ROUTE2665 = x3d.ROUTE()
ROUTE2665.fromNode = "PitchTimer"
ROUTE2665.fromField = "fraction_changed"
ROUTE2665.toNode = "Pitches_head_RotationInterpolator"
ROUTE2665.toField = "set_fraction"

Scene29.children.append(ROUTE2665)
ROUTE2666 = x3d.ROUTE()
ROUTE2666.fromNode = "PitchTimer"
ROUTE2666.fromField = "fraction_changed"
ROUTE2666.toNode = "Pitches_neck_RotationInterpolator"
ROUTE2666.toField = "set_fraction"

Scene29.children.append(ROUTE2666)
ROUTE2667 = x3d.ROUTE()
ROUTE2667.fromNode = "PitchTimer"
ROUTE2667.fromField = "fraction_changed"
ROUTE2667.toNode = "Pitches_upper_body_RotationInterpolator"
ROUTE2667.toField = "set_fraction"

Scene29.children.append(ROUTE2667)
ROUTE2668 = x3d.ROUTE()
ROUTE2668.fromNode = "PitchTimer"
ROUTE2668.fromField = "fraction_changed"
ROUTE2668.toNode = "Pitches_whole_body_RotationInterpolator"
ROUTE2668.toField = "set_fraction"

Scene29.children.append(ROUTE2668)
ROUTE2669 = x3d.ROUTE()
ROUTE2669.fromNode = "PitchTimer"
ROUTE2669.fromField = "fraction_changed"
ROUTE2669.toNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE2669.toField = "set_fraction"

Scene29.children.append(ROUTE2669)
ROUTE2670 = x3d.ROUTE()
ROUTE2670.fromNode = "PitchTimer"
ROUTE2670.fromField = "fraction_changed"
ROUTE2670.toNode = "Pitch_l_sternoclavicular_RollInterpolator"
ROUTE2670.toField = "set_fraction"

Scene29.children.append(ROUTE2670)
ROUTE2671 = x3d.ROUTE()
ROUTE2671.fromNode = "PitchTimer"
ROUTE2671.fromField = "fraction_changed"
ROUTE2671.toNode = "Pitch_l_acromioclavicular_RollInterpolator"
ROUTE2671.toField = "set_fraction"

Scene29.children.append(ROUTE2671)
ROUTE2672 = x3d.ROUTE()
ROUTE2672.fromNode = "PitchTimer"
ROUTE2672.fromField = "fraction_changed"
ROUTE2672.toNode = "Pitch_r_sternoclavicular_RollInterpolator"
ROUTE2672.toField = "set_fraction"

Scene29.children.append(ROUTE2672)
ROUTE2673 = x3d.ROUTE()
ROUTE2673.fromNode = "PitchTimer"
ROUTE2673.fromField = "fraction_changed"
ROUTE2673.toNode = "Pitch_r_acromioclavicular_RollInterpolator"
ROUTE2673.toField = "set_fraction"

Scene29.children.append(ROUTE2673)
ROUTE2674 = x3d.ROUTE()
ROUTE2674.fromNode = "PitchTimer"
ROUTE2674.fromField = "fraction_changed"
ROUTE2674.toNode = "Pitch_r_metatarsal_PitchInterpolator"
ROUTE2674.toField = "set_fraction"

Scene29.children.append(ROUTE2674)
ROUTE2675 = x3d.ROUTE()
ROUTE2675.fromNode = "PitchTimer"
ROUTE2675.fromField = "fraction_changed"
ROUTE2675.toNode = "Pitch_sacroiliac_YawInterpolator"
ROUTE2675.toField = "set_fraction"

Scene29.children.append(ROUTE2675)
ROUTE2676 = x3d.ROUTE()
ROUTE2676.fromNode = "PitchTimer"
ROUTE2676.fromField = "fraction_changed"
ROUTE2676.toNode = "Pitch_vl5_YawInterpolator"
ROUTE2676.toField = "set_fraction"

Scene29.children.append(ROUTE2676)
ROUTE2677 = x3d.ROUTE()
ROUTE2677.fromNode = "PitchTimer"
ROUTE2677.fromField = "fraction_changed"
ROUTE2677.toNode = "Pitch_vc6_YawInterpolator"
ROUTE2677.toField = "set_fraction"

Scene29.children.append(ROUTE2677)
ROUTE2678 = x3d.ROUTE()
ROUTE2678.fromNode = "PitchTimer"
ROUTE2678.fromField = "fraction_changed"
ROUTE2678.toNode = "Pitch_l_thumb1_PitchInterpolator"
ROUTE2678.toField = "set_fraction"

Scene29.children.append(ROUTE2678)
ROUTE2679 = x3d.ROUTE()
ROUTE2679.fromNode = "PitchTimer"
ROUTE2679.fromField = "fraction_changed"
ROUTE2679.toNode = "Pitch_r_thumb1_PitchInterpolator"
ROUTE2679.toField = "set_fraction"

Scene29.children.append(ROUTE2679)
ROUTE2680 = x3d.ROUTE()
ROUTE2680.fromNode = "Pitches_r_ankle_RotationInterpolator"
ROUTE2680.fromField = "value_changed"
ROUTE2680.toNode = "hanim_r_ankle"
ROUTE2680.toField = "set_rotation"

Scene29.children.append(ROUTE2680)
ROUTE2681 = x3d.ROUTE()
ROUTE2681.fromNode = "Pitches_r_knee_RotationInterpolator"
ROUTE2681.fromField = "value_changed"
ROUTE2681.toNode = "hanim_r_knee"
ROUTE2681.toField = "set_rotation"

Scene29.children.append(ROUTE2681)
ROUTE2682 = x3d.ROUTE()
ROUTE2682.fromNode = "Pitches_r_hip_RotationInterpolator"
ROUTE2682.fromField = "value_changed"
ROUTE2682.toNode = "hanim_r_hip"
ROUTE2682.toField = "set_rotation"

Scene29.children.append(ROUTE2682)
ROUTE2683 = x3d.ROUTE()
ROUTE2683.fromNode = "Pitches_l_ankle_RotationInterpolator"
ROUTE2683.fromField = "value_changed"
ROUTE2683.toNode = "hanim_l_ankle"
ROUTE2683.toField = "set_rotation"

Scene29.children.append(ROUTE2683)
ROUTE2684 = x3d.ROUTE()
ROUTE2684.fromNode = "Pitches_l_knee_RotationInterpolator"
ROUTE2684.fromField = "value_changed"
ROUTE2684.toNode = "hanim_l_knee"
ROUTE2684.toField = "set_rotation"

Scene29.children.append(ROUTE2684)
ROUTE2685 = x3d.ROUTE()
ROUTE2685.fromNode = "Pitches_l_hip_RotationInterpolator"
ROUTE2685.fromField = "value_changed"
ROUTE2685.toNode = "hanim_l_hip"
ROUTE2685.toField = "set_rotation"

Scene29.children.append(ROUTE2685)
ROUTE2686 = x3d.ROUTE()
ROUTE2686.fromNode = "Pitches_lower_body_RotationInterpolator"
ROUTE2686.fromField = "value_changed"
ROUTE2686.toNode = "hanim_sacroiliac"
ROUTE2686.toField = "set_rotation"

Scene29.children.append(ROUTE2686)
ROUTE2687 = x3d.ROUTE()
ROUTE2687.fromNode = "Pitches_r_wrist_RotationInterpolator"
ROUTE2687.fromField = "value_changed"
ROUTE2687.toNode = "hanim_r_wrist"
ROUTE2687.toField = "set_rotation"

Scene29.children.append(ROUTE2687)
ROUTE2688 = x3d.ROUTE()
ROUTE2688.fromNode = "Pitches_r_elbow_RotationInterpolator"
ROUTE2688.fromField = "value_changed"
ROUTE2688.toNode = "hanim_r_elbow"
ROUTE2688.toField = "set_rotation"

Scene29.children.append(ROUTE2688)
ROUTE2689 = x3d.ROUTE()
ROUTE2689.fromNode = "Pitches_r_shoulder_RotationInterpolator"
ROUTE2689.fromField = "value_changed"
ROUTE2689.toNode = "hanim_r_shoulder"
ROUTE2689.toField = "set_rotation"

Scene29.children.append(ROUTE2689)
ROUTE2690 = x3d.ROUTE()
ROUTE2690.fromNode = "Pitches_l_wrist_RotationInterpolator"
ROUTE2690.fromField = "value_changed"
ROUTE2690.toNode = "hanim_l_wrist"
ROUTE2690.toField = "set_rotation"

Scene29.children.append(ROUTE2690)
ROUTE2691 = x3d.ROUTE()
ROUTE2691.fromNode = "Pitches_l_elbow_RotationInterpolator"
ROUTE2691.fromField = "value_changed"
ROUTE2691.toNode = "hanim_l_elbow"
ROUTE2691.toField = "set_rotation"

Scene29.children.append(ROUTE2691)
ROUTE2692 = x3d.ROUTE()
ROUTE2692.fromNode = "Pitches_l_shoulder_RotationInterpolator"
ROUTE2692.fromField = "value_changed"
ROUTE2692.toNode = "hanim_l_shoulder"
ROUTE2692.toField = "set_rotation"

Scene29.children.append(ROUTE2692)
ROUTE2693 = x3d.ROUTE()
ROUTE2693.fromNode = "Pitches_head_RotationInterpolator"
ROUTE2693.fromField = "value_changed"
ROUTE2693.toNode = "hanim_skullbase"
ROUTE2693.toField = "set_rotation"

Scene29.children.append(ROUTE2693)
ROUTE2694 = x3d.ROUTE()
ROUTE2694.fromNode = "Pitches_neck_RotationInterpolator"
ROUTE2694.fromField = "value_changed"
ROUTE2694.toNode = "hanim_vc4"
ROUTE2694.toField = "set_rotation"

Scene29.children.append(ROUTE2694)
ROUTE2695 = x3d.ROUTE()
ROUTE2695.fromNode = "Pitches_upper_body_RotationInterpolator"
ROUTE2695.fromField = "value_changed"
ROUTE2695.toNode = "hanim_vl1"
ROUTE2695.toField = "set_rotation"

Scene29.children.append(ROUTE2695)
ROUTE2696 = x3d.ROUTE()
ROUTE2696.fromNode = "Pitches_whole_body_RotationInterpolator"
ROUTE2696.fromField = "value_changed"
ROUTE2696.toNode = "hanim_humanoid_root"
ROUTE2696.toField = "set_rotation"

Scene29.children.append(ROUTE2696)
ROUTE2697 = x3d.ROUTE()
ROUTE2697.fromNode = "Pitches_whole_body_TranslationInterpolator"
ROUTE2697.fromField = "value_changed"
ROUTE2697.toNode = "hanim_humanoid_root"
ROUTE2697.toField = "set_translation"

Scene29.children.append(ROUTE2697)
ROUTE2698 = x3d.ROUTE()
ROUTE2698.fromNode = "Pitch_l_sternoclavicular_RollInterpolator"
ROUTE2698.fromField = "value_changed"
ROUTE2698.toNode = "hanim_l_sternoclavicular"
ROUTE2698.toField = "set_rotation"

Scene29.children.append(ROUTE2698)
ROUTE2699 = x3d.ROUTE()
ROUTE2699.fromNode = "Pitch_l_acromioclavicular_RollInterpolator"
ROUTE2699.fromField = "value_changed"
ROUTE2699.toNode = "hanim_l_acromioclavicular"
ROUTE2699.toField = "set_rotation"

Scene29.children.append(ROUTE2699)
ROUTE2700 = x3d.ROUTE()
ROUTE2700.fromNode = "Pitch_r_sternoclavicular_RollInterpolator"
ROUTE2700.fromField = "value_changed"
ROUTE2700.toNode = "hanim_r_sternoclavicular"
ROUTE2700.toField = "set_rotation"

Scene29.children.append(ROUTE2700)
ROUTE2701 = x3d.ROUTE()
ROUTE2701.fromNode = "Pitch_r_acromioclavicular_RollInterpolator"
ROUTE2701.fromField = "value_changed"
ROUTE2701.toNode = "hanim_r_acromioclavicular"
ROUTE2701.toField = "set_rotation"

Scene29.children.append(ROUTE2701)
ROUTE2702 = x3d.ROUTE()
ROUTE2702.fromNode = "Pitch_r_metatarsal_PitchInterpolator"
ROUTE2702.fromField = "value_changed"
ROUTE2702.toNode = "hanim_l_metatarsal"
ROUTE2702.toField = "set_rotation"

Scene29.children.append(ROUTE2702)
ROUTE2703 = x3d.ROUTE()
ROUTE2703.fromNode = "Pitch_r_metatarsal_PitchInterpolator"
ROUTE2703.fromField = "value_changed"
ROUTE2703.toNode = "hanim_r_metatarsal"
ROUTE2703.toField = "set_rotation"

Scene29.children.append(ROUTE2703)
ROUTE2704 = x3d.ROUTE()
ROUTE2704.fromNode = "Pitch_sacroiliac_YawInterpolator"
ROUTE2704.fromField = "value_changed"
ROUTE2704.toNode = "hanim_sacroiliac"
ROUTE2704.toField = "set_rotation"

Scene29.children.append(ROUTE2704)
ROUTE2705 = x3d.ROUTE()
ROUTE2705.fromNode = "Pitch_vl5_YawInterpolator"
ROUTE2705.fromField = "value_changed"
ROUTE2705.toNode = "hanim_vl5"
ROUTE2705.toField = "set_rotation"

Scene29.children.append(ROUTE2705)
ROUTE2706 = x3d.ROUTE()
ROUTE2706.fromNode = "Pitch_vc6_YawInterpolator"
ROUTE2706.fromField = "value_changed"
ROUTE2706.toNode = "hanim_vc6"
ROUTE2706.toField = "set_rotation"

Scene29.children.append(ROUTE2706)
ROUTE2707 = x3d.ROUTE()
ROUTE2707.fromNode = "Pitch_l_thumb1_PitchInterpolator"
ROUTE2707.fromField = "value_changed"
ROUTE2707.toNode = "hanim_l_thumb1"
ROUTE2707.toField = "set_rotation"

Scene29.children.append(ROUTE2707)
ROUTE2708 = x3d.ROUTE()
ROUTE2708.fromNode = "Pitch_r_thumb1_PitchInterpolator"
ROUTE2708.fromField = "value_changed"
ROUTE2708.toNode = "hanim_r_thumb1"
ROUTE2708.toField = "set_rotation"

Scene29.children.append(ROUTE2708)
ROUTE2709 = x3d.ROUTE()
ROUTE2709.fromNode = "YawTimer"
ROUTE2709.fromField = "fraction_changed"
ROUTE2709.toNode = "Yaws_r_ankle_RotationInterpolator"
ROUTE2709.toField = "set_fraction"

Scene29.children.append(ROUTE2709)
ROUTE2710 = x3d.ROUTE()
ROUTE2710.fromNode = "YawTimer"
ROUTE2710.fromField = "fraction_changed"
ROUTE2710.toNode = "Yaws_r_knee_RotationInterpolator"
ROUTE2710.toField = "set_fraction"

Scene29.children.append(ROUTE2710)
ROUTE2711 = x3d.ROUTE()
ROUTE2711.fromNode = "YawTimer"
ROUTE2711.fromField = "fraction_changed"
ROUTE2711.toNode = "Yaws_r_hip_RotationInterpolator"
ROUTE2711.toField = "set_fraction"

Scene29.children.append(ROUTE2711)
ROUTE2712 = x3d.ROUTE()
ROUTE2712.fromNode = "YawTimer"
ROUTE2712.fromField = "fraction_changed"
ROUTE2712.toNode = "Yaws_l_ankle_RotationInterpolator"
ROUTE2712.toField = "set_fraction"

Scene29.children.append(ROUTE2712)
ROUTE2713 = x3d.ROUTE()
ROUTE2713.fromNode = "YawTimer"
ROUTE2713.fromField = "fraction_changed"
ROUTE2713.toNode = "Yaws_l_knee_RotationInterpolator"
ROUTE2713.toField = "set_fraction"

Scene29.children.append(ROUTE2713)
ROUTE2714 = x3d.ROUTE()
ROUTE2714.fromNode = "YawTimer"
ROUTE2714.fromField = "fraction_changed"
ROUTE2714.toNode = "Yaws_l_hip_RotationInterpolator"
ROUTE2714.toField = "set_fraction"

Scene29.children.append(ROUTE2714)
ROUTE2715 = x3d.ROUTE()
ROUTE2715.fromNode = "YawTimer"
ROUTE2715.fromField = "fraction_changed"
ROUTE2715.toNode = "Yaws_lower_body_RotationInterpolator"
ROUTE2715.toField = "set_fraction"

Scene29.children.append(ROUTE2715)
ROUTE2716 = x3d.ROUTE()
ROUTE2716.fromNode = "YawTimer"
ROUTE2716.fromField = "fraction_changed"
ROUTE2716.toNode = "Yaws_r_wrist_RotationInterpolator"
ROUTE2716.toField = "set_fraction"

Scene29.children.append(ROUTE2716)
ROUTE2717 = x3d.ROUTE()
ROUTE2717.fromNode = "YawTimer"
ROUTE2717.fromField = "fraction_changed"
ROUTE2717.toNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE2717.toField = "set_fraction"

Scene29.children.append(ROUTE2717)
ROUTE2718 = x3d.ROUTE()
ROUTE2718.fromNode = "YawTimer"
ROUTE2718.fromField = "fraction_changed"
ROUTE2718.toNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE2718.toField = "set_fraction"

Scene29.children.append(ROUTE2718)
ROUTE2719 = x3d.ROUTE()
ROUTE2719.fromNode = "YawTimer"
ROUTE2719.fromField = "fraction_changed"
ROUTE2719.toNode = "Yaws_l_wrist_RotationInterpolator"
ROUTE2719.toField = "set_fraction"

Scene29.children.append(ROUTE2719)
ROUTE2720 = x3d.ROUTE()
ROUTE2720.fromNode = "YawTimer"
ROUTE2720.fromField = "fraction_changed"
ROUTE2720.toNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE2720.toField = "set_fraction"

Scene29.children.append(ROUTE2720)
ROUTE2721 = x3d.ROUTE()
ROUTE2721.fromNode = "YawTimer"
ROUTE2721.fromField = "fraction_changed"
ROUTE2721.toNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE2721.toField = "set_fraction"

Scene29.children.append(ROUTE2721)
ROUTE2722 = x3d.ROUTE()
ROUTE2722.fromNode = "YawTimer"
ROUTE2722.fromField = "fraction_changed"
ROUTE2722.toNode = "Yaws_head_RotationInterpolator"
ROUTE2722.toField = "set_fraction"

Scene29.children.append(ROUTE2722)
ROUTE2723 = x3d.ROUTE()
ROUTE2723.fromNode = "YawTimer"
ROUTE2723.fromField = "fraction_changed"
ROUTE2723.toNode = "Yaws_neck_RotationInterpolator"
ROUTE2723.toField = "set_fraction"

Scene29.children.append(ROUTE2723)
ROUTE2724 = x3d.ROUTE()
ROUTE2724.fromNode = "YawTimer"
ROUTE2724.fromField = "fraction_changed"
ROUTE2724.toNode = "Yaws_upper_body_RotationInterpolator"
ROUTE2724.toField = "set_fraction"

Scene29.children.append(ROUTE2724)
ROUTE2725 = x3d.ROUTE()
ROUTE2725.fromNode = "YawTimer"
ROUTE2725.fromField = "fraction_changed"
ROUTE2725.toNode = "Yaws_whole_body_RotationInterpolator"
ROUTE2725.toField = "set_fraction"

Scene29.children.append(ROUTE2725)
ROUTE2726 = x3d.ROUTE()
ROUTE2726.fromNode = "YawTimer"
ROUTE2726.fromField = "fraction_changed"
ROUTE2726.toNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE2726.toField = "set_fraction"

Scene29.children.append(ROUTE2726)
ROUTE2727 = x3d.ROUTE()
ROUTE2727.fromNode = "YawTimer"
ROUTE2727.fromField = "fraction_changed"
ROUTE2727.toNode = "Yaw_l_sternoclavicular_RollInterpolator"
ROUTE2727.toField = "set_fraction"

Scene29.children.append(ROUTE2727)
ROUTE2728 = x3d.ROUTE()
ROUTE2728.fromNode = "YawTimer"
ROUTE2728.fromField = "fraction_changed"
ROUTE2728.toNode = "Yaw_l_acromioclavicular_RollInterpolator"
ROUTE2728.toField = "set_fraction"

Scene29.children.append(ROUTE2728)
ROUTE2729 = x3d.ROUTE()
ROUTE2729.fromNode = "YawTimer"
ROUTE2729.fromField = "fraction_changed"
ROUTE2729.toNode = "Yaw_r_sternoclavicular_RollInterpolator"
ROUTE2729.toField = "set_fraction"

Scene29.children.append(ROUTE2729)
ROUTE2730 = x3d.ROUTE()
ROUTE2730.fromNode = "YawTimer"
ROUTE2730.fromField = "fraction_changed"
ROUTE2730.toNode = "Yaw_r_acromioclavicular_RollInterpolator"
ROUTE2730.toField = "set_fraction"

Scene29.children.append(ROUTE2730)
ROUTE2731 = x3d.ROUTE()
ROUTE2731.fromNode = "YawTimer"
ROUTE2731.fromField = "fraction_changed"
ROUTE2731.toNode = "Yaw_r_metatarsal_PitchInterpolator"
ROUTE2731.toField = "set_fraction"

Scene29.children.append(ROUTE2731)
ROUTE2732 = x3d.ROUTE()
ROUTE2732.fromNode = "YawTimer"
ROUTE2732.fromField = "fraction_changed"
ROUTE2732.toNode = "Yaw_sacroiliac_YawInterpolator"
ROUTE2732.toField = "set_fraction"

Scene29.children.append(ROUTE2732)
ROUTE2733 = x3d.ROUTE()
ROUTE2733.fromNode = "YawTimer"
ROUTE2733.fromField = "fraction_changed"
ROUTE2733.toNode = "Yaw_vl5_YawInterpolator"
ROUTE2733.toField = "set_fraction"

Scene29.children.append(ROUTE2733)
ROUTE2734 = x3d.ROUTE()
ROUTE2734.fromNode = "YawTimer"
ROUTE2734.fromField = "fraction_changed"
ROUTE2734.toNode = "Yaw_vc6_YawInterpolator"
ROUTE2734.toField = "set_fraction"

Scene29.children.append(ROUTE2734)
ROUTE2735 = x3d.ROUTE()
ROUTE2735.fromNode = "YawTimer"
ROUTE2735.fromField = "fraction_changed"
ROUTE2735.toNode = "Yaw_l_thumb1_PitchInterpolator"
ROUTE2735.toField = "set_fraction"

Scene29.children.append(ROUTE2735)
ROUTE2736 = x3d.ROUTE()
ROUTE2736.fromNode = "YawTimer"
ROUTE2736.fromField = "fraction_changed"
ROUTE2736.toNode = "Yaw_r_thumb1_PitchInterpolator"
ROUTE2736.toField = "set_fraction"

Scene29.children.append(ROUTE2736)
ROUTE2737 = x3d.ROUTE()
ROUTE2737.fromNode = "Yaws_r_ankle_RotationInterpolator"
ROUTE2737.fromField = "value_changed"
ROUTE2737.toNode = "hanim_r_ankle"
ROUTE2737.toField = "set_rotation"

Scene29.children.append(ROUTE2737)
ROUTE2738 = x3d.ROUTE()
ROUTE2738.fromNode = "Yaws_r_knee_RotationInterpolator"
ROUTE2738.fromField = "value_changed"
ROUTE2738.toNode = "hanim_r_knee"
ROUTE2738.toField = "set_rotation"

Scene29.children.append(ROUTE2738)
ROUTE2739 = x3d.ROUTE()
ROUTE2739.fromNode = "Yaws_r_hip_RotationInterpolator"
ROUTE2739.fromField = "value_changed"
ROUTE2739.toNode = "hanim_r_hip"
ROUTE2739.toField = "set_rotation"

Scene29.children.append(ROUTE2739)
ROUTE2740 = x3d.ROUTE()
ROUTE2740.fromNode = "Yaws_l_ankle_RotationInterpolator"
ROUTE2740.fromField = "value_changed"
ROUTE2740.toNode = "hanim_l_ankle"
ROUTE2740.toField = "set_rotation"

Scene29.children.append(ROUTE2740)
ROUTE2741 = x3d.ROUTE()
ROUTE2741.fromNode = "Yaws_l_knee_RotationInterpolator"
ROUTE2741.fromField = "value_changed"
ROUTE2741.toNode = "hanim_l_knee"
ROUTE2741.toField = "set_rotation"

Scene29.children.append(ROUTE2741)
ROUTE2742 = x3d.ROUTE()
ROUTE2742.fromNode = "Yaws_l_hip_RotationInterpolator"
ROUTE2742.fromField = "value_changed"
ROUTE2742.toNode = "hanim_l_hip"
ROUTE2742.toField = "set_rotation"

Scene29.children.append(ROUTE2742)
ROUTE2743 = x3d.ROUTE()
ROUTE2743.fromNode = "Yaws_lower_body_RotationInterpolator"
ROUTE2743.fromField = "value_changed"
ROUTE2743.toNode = "hanim_sacroiliac"
ROUTE2743.toField = "set_rotation"

Scene29.children.append(ROUTE2743)
ROUTE2744 = x3d.ROUTE()
ROUTE2744.fromNode = "Yaws_r_wrist_RotationInterpolator"
ROUTE2744.fromField = "value_changed"
ROUTE2744.toNode = "hanim_r_wrist"
ROUTE2744.toField = "set_rotation"

Scene29.children.append(ROUTE2744)
ROUTE2745 = x3d.ROUTE()
ROUTE2745.fromNode = "Yaws_r_elbow_RotationInterpolator"
ROUTE2745.fromField = "value_changed"
ROUTE2745.toNode = "hanim_r_elbow"
ROUTE2745.toField = "set_rotation"

Scene29.children.append(ROUTE2745)
ROUTE2746 = x3d.ROUTE()
ROUTE2746.fromNode = "Yaws_r_shoulder_RotationInterpolator"
ROUTE2746.fromField = "value_changed"
ROUTE2746.toNode = "hanim_r_shoulder"
ROUTE2746.toField = "set_rotation"

Scene29.children.append(ROUTE2746)
ROUTE2747 = x3d.ROUTE()
ROUTE2747.fromNode = "Yaws_l_wrist_RotationInterpolator"
ROUTE2747.fromField = "value_changed"
ROUTE2747.toNode = "hanim_l_wrist"
ROUTE2747.toField = "set_rotation"

Scene29.children.append(ROUTE2747)
ROUTE2748 = x3d.ROUTE()
ROUTE2748.fromNode = "Yaws_l_elbow_RotationInterpolator"
ROUTE2748.fromField = "value_changed"
ROUTE2748.toNode = "hanim_l_elbow"
ROUTE2748.toField = "set_rotation"

Scene29.children.append(ROUTE2748)
ROUTE2749 = x3d.ROUTE()
ROUTE2749.fromNode = "Yaws_l_shoulder_RotationInterpolator"
ROUTE2749.fromField = "value_changed"
ROUTE2749.toNode = "hanim_l_shoulder"
ROUTE2749.toField = "set_rotation"

Scene29.children.append(ROUTE2749)
ROUTE2750 = x3d.ROUTE()
ROUTE2750.fromNode = "Yaws_head_RotationInterpolator"
ROUTE2750.fromField = "value_changed"
ROUTE2750.toNode = "hanim_skullbase"
ROUTE2750.toField = "set_rotation"

Scene29.children.append(ROUTE2750)
ROUTE2751 = x3d.ROUTE()
ROUTE2751.fromNode = "Yaws_neck_RotationInterpolator"
ROUTE2751.fromField = "value_changed"
ROUTE2751.toNode = "hanim_vc4"
ROUTE2751.toField = "set_rotation"

Scene29.children.append(ROUTE2751)
ROUTE2752 = x3d.ROUTE()
ROUTE2752.fromNode = "Yaws_upper_body_RotationInterpolator"
ROUTE2752.fromField = "value_changed"
ROUTE2752.toNode = "hanim_vl1"
ROUTE2752.toField = "set_rotation"

Scene29.children.append(ROUTE2752)
ROUTE2753 = x3d.ROUTE()
ROUTE2753.fromNode = "Yaws_whole_body_RotationInterpolator"
ROUTE2753.fromField = "value_changed"
ROUTE2753.toNode = "hanim_humanoid_root"
ROUTE2753.toField = "set_rotation"

Scene29.children.append(ROUTE2753)
ROUTE2754 = x3d.ROUTE()
ROUTE2754.fromNode = "Yaws_whole_body_TranslationInterpolator"
ROUTE2754.fromField = "value_changed"
ROUTE2754.toNode = "hanim_humanoid_root"
ROUTE2754.toField = "set_translation"

Scene29.children.append(ROUTE2754)
ROUTE2755 = x3d.ROUTE()
ROUTE2755.fromNode = "Yaw_l_sternoclavicular_RollInterpolator"
ROUTE2755.fromField = "value_changed"
ROUTE2755.toNode = "hanim_l_sternoclavicular"
ROUTE2755.toField = "set_rotation"

Scene29.children.append(ROUTE2755)
ROUTE2756 = x3d.ROUTE()
ROUTE2756.fromNode = "Yaw_l_acromioclavicular_RollInterpolator"
ROUTE2756.fromField = "value_changed"
ROUTE2756.toNode = "hanim_l_acromioclavicular"
ROUTE2756.toField = "set_rotation"

Scene29.children.append(ROUTE2756)
ROUTE2757 = x3d.ROUTE()
ROUTE2757.fromNode = "Yaw_r_sternoclavicular_RollInterpolator"
ROUTE2757.fromField = "value_changed"
ROUTE2757.toNode = "hanim_r_sternoclavicular"
ROUTE2757.toField = "set_rotation"

Scene29.children.append(ROUTE2757)
ROUTE2758 = x3d.ROUTE()
ROUTE2758.fromNode = "Yaw_r_acromioclavicular_RollInterpolator"
ROUTE2758.fromField = "value_changed"
ROUTE2758.toNode = "hanim_r_acromioclavicular"
ROUTE2758.toField = "set_rotation"

Scene29.children.append(ROUTE2758)
ROUTE2759 = x3d.ROUTE()
ROUTE2759.fromNode = "Yaw_r_metatarsal_PitchInterpolator"
ROUTE2759.fromField = "value_changed"
ROUTE2759.toNode = "hanim_l_metatarsal"
ROUTE2759.toField = "set_rotation"

Scene29.children.append(ROUTE2759)
ROUTE2760 = x3d.ROUTE()
ROUTE2760.fromNode = "Yaw_r_metatarsal_PitchInterpolator"
ROUTE2760.fromField = "value_changed"
ROUTE2760.toNode = "hanim_r_metatarsal"
ROUTE2760.toField = "set_rotation"

Scene29.children.append(ROUTE2760)
ROUTE2761 = x3d.ROUTE()
ROUTE2761.fromNode = "Yaw_sacroiliac_YawInterpolator"
ROUTE2761.fromField = "value_changed"
ROUTE2761.toNode = "hanim_sacroiliac"
ROUTE2761.toField = "set_rotation"

Scene29.children.append(ROUTE2761)
ROUTE2762 = x3d.ROUTE()
ROUTE2762.fromNode = "Yaw_vl5_YawInterpolator"
ROUTE2762.fromField = "value_changed"
ROUTE2762.toNode = "hanim_vl5"
ROUTE2762.toField = "set_rotation"

Scene29.children.append(ROUTE2762)
ROUTE2763 = x3d.ROUTE()
ROUTE2763.fromNode = "Yaw_vc6_YawInterpolator"
ROUTE2763.fromField = "value_changed"
ROUTE2763.toNode = "hanim_vc6"
ROUTE2763.toField = "set_rotation"

Scene29.children.append(ROUTE2763)
ROUTE2764 = x3d.ROUTE()
ROUTE2764.fromNode = "Yaw_l_thumb1_PitchInterpolator"
ROUTE2764.fromField = "value_changed"
ROUTE2764.toNode = "hanim_l_thumb1"
ROUTE2764.toField = "set_rotation"

Scene29.children.append(ROUTE2764)
ROUTE2765 = x3d.ROUTE()
ROUTE2765.fromNode = "Yaw_r_thumb1_PitchInterpolator"
ROUTE2765.fromField = "value_changed"
ROUTE2765.toNode = "hanim_r_thumb1"
ROUTE2765.toField = "set_rotation"

Scene29.children.append(ROUTE2765)
ROUTE2766 = x3d.ROUTE()
ROUTE2766.fromNode = "RollTimer"
ROUTE2766.fromField = "fraction_changed"
ROUTE2766.toNode = "Rolls_r_ankle_RotationInterpolator"
ROUTE2766.toField = "set_fraction"

Scene29.children.append(ROUTE2766)
ROUTE2767 = x3d.ROUTE()
ROUTE2767.fromNode = "RollTimer"
ROUTE2767.fromField = "fraction_changed"
ROUTE2767.toNode = "Rolls_r_knee_RotationInterpolator"
ROUTE2767.toField = "set_fraction"

Scene29.children.append(ROUTE2767)
ROUTE2768 = x3d.ROUTE()
ROUTE2768.fromNode = "RollTimer"
ROUTE2768.fromField = "fraction_changed"
ROUTE2768.toNode = "Rolls_r_hip_RotationInterpolator"
ROUTE2768.toField = "set_fraction"

Scene29.children.append(ROUTE2768)
ROUTE2769 = x3d.ROUTE()
ROUTE2769.fromNode = "RollTimer"
ROUTE2769.fromField = "fraction_changed"
ROUTE2769.toNode = "Rolls_l_ankle_RotationInterpolator"
ROUTE2769.toField = "set_fraction"

Scene29.children.append(ROUTE2769)
ROUTE2770 = x3d.ROUTE()
ROUTE2770.fromNode = "RollTimer"
ROUTE2770.fromField = "fraction_changed"
ROUTE2770.toNode = "Rolls_l_knee_RotationInterpolator"
ROUTE2770.toField = "set_fraction"

Scene29.children.append(ROUTE2770)
ROUTE2771 = x3d.ROUTE()
ROUTE2771.fromNode = "RollTimer"
ROUTE2771.fromField = "fraction_changed"
ROUTE2771.toNode = "Rolls_l_hip_RotationInterpolator"
ROUTE2771.toField = "set_fraction"

Scene29.children.append(ROUTE2771)
ROUTE2772 = x3d.ROUTE()
ROUTE2772.fromNode = "RollTimer"
ROUTE2772.fromField = "fraction_changed"
ROUTE2772.toNode = "Rolls_lower_body_RotationInterpolator"
ROUTE2772.toField = "set_fraction"

Scene29.children.append(ROUTE2772)
ROUTE2773 = x3d.ROUTE()
ROUTE2773.fromNode = "RollTimer"
ROUTE2773.fromField = "fraction_changed"
ROUTE2773.toNode = "Rolls_r_wrist_RotationInterpolator"
ROUTE2773.toField = "set_fraction"

Scene29.children.append(ROUTE2773)
ROUTE2774 = x3d.ROUTE()
ROUTE2774.fromNode = "RollTimer"
ROUTE2774.fromField = "fraction_changed"
ROUTE2774.toNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE2774.toField = "set_fraction"

Scene29.children.append(ROUTE2774)
ROUTE2775 = x3d.ROUTE()
ROUTE2775.fromNode = "RollTimer"
ROUTE2775.fromField = "fraction_changed"
ROUTE2775.toNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE2775.toField = "set_fraction"

Scene29.children.append(ROUTE2775)
ROUTE2776 = x3d.ROUTE()
ROUTE2776.fromNode = "RollTimer"
ROUTE2776.fromField = "fraction_changed"
ROUTE2776.toNode = "Rolls_l_wrist_RotationInterpolator"
ROUTE2776.toField = "set_fraction"

Scene29.children.append(ROUTE2776)
ROUTE2777 = x3d.ROUTE()
ROUTE2777.fromNode = "RollTimer"
ROUTE2777.fromField = "fraction_changed"
ROUTE2777.toNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE2777.toField = "set_fraction"

Scene29.children.append(ROUTE2777)
ROUTE2778 = x3d.ROUTE()
ROUTE2778.fromNode = "RollTimer"
ROUTE2778.fromField = "fraction_changed"
ROUTE2778.toNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE2778.toField = "set_fraction"

Scene29.children.append(ROUTE2778)
ROUTE2779 = x3d.ROUTE()
ROUTE2779.fromNode = "RollTimer"
ROUTE2779.fromField = "fraction_changed"
ROUTE2779.toNode = "Rolls_head_RotationInterpolator"
ROUTE2779.toField = "set_fraction"

Scene29.children.append(ROUTE2779)
ROUTE2780 = x3d.ROUTE()
ROUTE2780.fromNode = "RollTimer"
ROUTE2780.fromField = "fraction_changed"
ROUTE2780.toNode = "Rolls_neck_RotationInterpolator"
ROUTE2780.toField = "set_fraction"

Scene29.children.append(ROUTE2780)
ROUTE2781 = x3d.ROUTE()
ROUTE2781.fromNode = "RollTimer"
ROUTE2781.fromField = "fraction_changed"
ROUTE2781.toNode = "Rolls_upper_body_RotationInterpolator"
ROUTE2781.toField = "set_fraction"

Scene29.children.append(ROUTE2781)
ROUTE2782 = x3d.ROUTE()
ROUTE2782.fromNode = "RollTimer"
ROUTE2782.fromField = "fraction_changed"
ROUTE2782.toNode = "Rolls_whole_body_RotationInterpolator"
ROUTE2782.toField = "set_fraction"

Scene29.children.append(ROUTE2782)
ROUTE2783 = x3d.ROUTE()
ROUTE2783.fromNode = "RollTimer"
ROUTE2783.fromField = "fraction_changed"
ROUTE2783.toNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE2783.toField = "set_fraction"

Scene29.children.append(ROUTE2783)
ROUTE2784 = x3d.ROUTE()
ROUTE2784.fromNode = "RollTimer"
ROUTE2784.fromField = "fraction_changed"
ROUTE2784.toNode = "Roll_l_sternoclavicular_RollInterpolator"
ROUTE2784.toField = "set_fraction"

Scene29.children.append(ROUTE2784)
ROUTE2785 = x3d.ROUTE()
ROUTE2785.fromNode = "RollTimer"
ROUTE2785.fromField = "fraction_changed"
ROUTE2785.toNode = "Roll_l_acromioclavicular_RollInterpolator"
ROUTE2785.toField = "set_fraction"

Scene29.children.append(ROUTE2785)
ROUTE2786 = x3d.ROUTE()
ROUTE2786.fromNode = "RollTimer"
ROUTE2786.fromField = "fraction_changed"
ROUTE2786.toNode = "Roll_r_sternoclavicular_RollInterpolator"
ROUTE2786.toField = "set_fraction"

Scene29.children.append(ROUTE2786)
ROUTE2787 = x3d.ROUTE()
ROUTE2787.fromNode = "RollTimer"
ROUTE2787.fromField = "fraction_changed"
ROUTE2787.toNode = "Roll_r_acromioclavicular_RollInterpolator"
ROUTE2787.toField = "set_fraction"

Scene29.children.append(ROUTE2787)
ROUTE2788 = x3d.ROUTE()
ROUTE2788.fromNode = "RollTimer"
ROUTE2788.fromField = "fraction_changed"
ROUTE2788.toNode = "Roll_r_metatarsal_PitchInterpolator"
ROUTE2788.toField = "set_fraction"

Scene29.children.append(ROUTE2788)
ROUTE2789 = x3d.ROUTE()
ROUTE2789.fromNode = "RollTimer"
ROUTE2789.fromField = "fraction_changed"
ROUTE2789.toNode = "Roll_sacroiliac_YawInterpolator"
ROUTE2789.toField = "set_fraction"

Scene29.children.append(ROUTE2789)
ROUTE2790 = x3d.ROUTE()
ROUTE2790.fromNode = "RollTimer"
ROUTE2790.fromField = "fraction_changed"
ROUTE2790.toNode = "Roll_vl5_YawInterpolator"
ROUTE2790.toField = "set_fraction"

Scene29.children.append(ROUTE2790)
ROUTE2791 = x3d.ROUTE()
ROUTE2791.fromNode = "RollTimer"
ROUTE2791.fromField = "fraction_changed"
ROUTE2791.toNode = "Roll_vc6_YawInterpolator"
ROUTE2791.toField = "set_fraction"

Scene29.children.append(ROUTE2791)
ROUTE2792 = x3d.ROUTE()
ROUTE2792.fromNode = "RollTimer"
ROUTE2792.fromField = "fraction_changed"
ROUTE2792.toNode = "Roll_l_thumb1_PitchInterpolator"
ROUTE2792.toField = "set_fraction"

Scene29.children.append(ROUTE2792)
ROUTE2793 = x3d.ROUTE()
ROUTE2793.fromNode = "RollTimer"
ROUTE2793.fromField = "fraction_changed"
ROUTE2793.toNode = "Roll_r_thumb1_PitchInterpolator"
ROUTE2793.toField = "set_fraction"

Scene29.children.append(ROUTE2793)
ROUTE2794 = x3d.ROUTE()
ROUTE2794.fromNode = "Rolls_r_ankle_RotationInterpolator"
ROUTE2794.fromField = "value_changed"
ROUTE2794.toNode = "hanim_r_ankle"
ROUTE2794.toField = "set_rotation"

Scene29.children.append(ROUTE2794)
ROUTE2795 = x3d.ROUTE()
ROUTE2795.fromNode = "Rolls_r_knee_RotationInterpolator"
ROUTE2795.fromField = "value_changed"
ROUTE2795.toNode = "hanim_r_knee"
ROUTE2795.toField = "set_rotation"

Scene29.children.append(ROUTE2795)
ROUTE2796 = x3d.ROUTE()
ROUTE2796.fromNode = "Rolls_r_hip_RotationInterpolator"
ROUTE2796.fromField = "value_changed"
ROUTE2796.toNode = "hanim_r_hip"
ROUTE2796.toField = "set_rotation"

Scene29.children.append(ROUTE2796)
ROUTE2797 = x3d.ROUTE()
ROUTE2797.fromNode = "Rolls_l_ankle_RotationInterpolator"
ROUTE2797.fromField = "value_changed"
ROUTE2797.toNode = "hanim_l_ankle"
ROUTE2797.toField = "set_rotation"

Scene29.children.append(ROUTE2797)
ROUTE2798 = x3d.ROUTE()
ROUTE2798.fromNode = "Rolls_l_knee_RotationInterpolator"
ROUTE2798.fromField = "value_changed"
ROUTE2798.toNode = "hanim_l_knee"
ROUTE2798.toField = "set_rotation"

Scene29.children.append(ROUTE2798)
ROUTE2799 = x3d.ROUTE()
ROUTE2799.fromNode = "Rolls_l_hip_RotationInterpolator"
ROUTE2799.fromField = "value_changed"
ROUTE2799.toNode = "hanim_l_hip"
ROUTE2799.toField = "set_rotation"

Scene29.children.append(ROUTE2799)
ROUTE2800 = x3d.ROUTE()
ROUTE2800.fromNode = "Rolls_lower_body_RotationInterpolator"
ROUTE2800.fromField = "value_changed"
ROUTE2800.toNode = "hanim_sacroiliac"
ROUTE2800.toField = "set_rotation"

Scene29.children.append(ROUTE2800)
ROUTE2801 = x3d.ROUTE()
ROUTE2801.fromNode = "Rolls_r_wrist_RotationInterpolator"
ROUTE2801.fromField = "value_changed"
ROUTE2801.toNode = "hanim_r_wrist"
ROUTE2801.toField = "set_rotation"

Scene29.children.append(ROUTE2801)
ROUTE2802 = x3d.ROUTE()
ROUTE2802.fromNode = "Rolls_r_elbow_RotationInterpolator"
ROUTE2802.fromField = "value_changed"
ROUTE2802.toNode = "hanim_r_elbow"
ROUTE2802.toField = "set_rotation"

Scene29.children.append(ROUTE2802)
ROUTE2803 = x3d.ROUTE()
ROUTE2803.fromNode = "Rolls_r_shoulder_RotationInterpolator"
ROUTE2803.fromField = "value_changed"
ROUTE2803.toNode = "hanim_r_shoulder"
ROUTE2803.toField = "set_rotation"

Scene29.children.append(ROUTE2803)
ROUTE2804 = x3d.ROUTE()
ROUTE2804.fromNode = "Rolls_l_wrist_RotationInterpolator"
ROUTE2804.fromField = "value_changed"
ROUTE2804.toNode = "hanim_l_wrist"
ROUTE2804.toField = "set_rotation"

Scene29.children.append(ROUTE2804)
ROUTE2805 = x3d.ROUTE()
ROUTE2805.fromNode = "Rolls_l_elbow_RotationInterpolator"
ROUTE2805.fromField = "value_changed"
ROUTE2805.toNode = "hanim_l_elbow"
ROUTE2805.toField = "set_rotation"

Scene29.children.append(ROUTE2805)
ROUTE2806 = x3d.ROUTE()
ROUTE2806.fromNode = "Rolls_l_shoulder_RotationInterpolator"
ROUTE2806.fromField = "value_changed"
ROUTE2806.toNode = "hanim_l_shoulder"
ROUTE2806.toField = "set_rotation"

Scene29.children.append(ROUTE2806)
ROUTE2807 = x3d.ROUTE()
ROUTE2807.fromNode = "Rolls_head_RotationInterpolator"
ROUTE2807.fromField = "value_changed"
ROUTE2807.toNode = "hanim_skullbase"
ROUTE2807.toField = "set_rotation"

Scene29.children.append(ROUTE2807)
ROUTE2808 = x3d.ROUTE()
ROUTE2808.fromNode = "Rolls_neck_RotationInterpolator"
ROUTE2808.fromField = "value_changed"
ROUTE2808.toNode = "hanim_vc4"
ROUTE2808.toField = "set_rotation"

Scene29.children.append(ROUTE2808)
ROUTE2809 = x3d.ROUTE()
ROUTE2809.fromNode = "Rolls_upper_body_RotationInterpolator"
ROUTE2809.fromField = "value_changed"
ROUTE2809.toNode = "hanim_vl1"
ROUTE2809.toField = "set_rotation"

Scene29.children.append(ROUTE2809)
ROUTE2810 = x3d.ROUTE()
ROUTE2810.fromNode = "Rolls_whole_body_RotationInterpolator"
ROUTE2810.fromField = "value_changed"
ROUTE2810.toNode = "hanim_humanoid_root"
ROUTE2810.toField = "set_rotation"

Scene29.children.append(ROUTE2810)
ROUTE2811 = x3d.ROUTE()
ROUTE2811.fromNode = "Rolls_whole_body_TranslationInterpolator"
ROUTE2811.fromField = "value_changed"
ROUTE2811.toNode = "hanim_humanoid_root"
ROUTE2811.toField = "set_translation"

Scene29.children.append(ROUTE2811)
ROUTE2812 = x3d.ROUTE()
ROUTE2812.fromNode = "Roll_l_sternoclavicular_RollInterpolator"
ROUTE2812.fromField = "value_changed"
ROUTE2812.toNode = "hanim_l_sternoclavicular"
ROUTE2812.toField = "set_rotation"

Scene29.children.append(ROUTE2812)
ROUTE2813 = x3d.ROUTE()
ROUTE2813.fromNode = "Roll_l_acromioclavicular_RollInterpolator"
ROUTE2813.fromField = "value_changed"
ROUTE2813.toNode = "hanim_l_acromioclavicular"
ROUTE2813.toField = "set_rotation"

Scene29.children.append(ROUTE2813)
ROUTE2814 = x3d.ROUTE()
ROUTE2814.fromNode = "Roll_r_sternoclavicular_RollInterpolator"
ROUTE2814.fromField = "value_changed"
ROUTE2814.toNode = "hanim_r_sternoclavicular"
ROUTE2814.toField = "set_rotation"

Scene29.children.append(ROUTE2814)
ROUTE2815 = x3d.ROUTE()
ROUTE2815.fromNode = "Roll_r_acromioclavicular_RollInterpolator"
ROUTE2815.fromField = "value_changed"
ROUTE2815.toNode = "hanim_r_acromioclavicular"
ROUTE2815.toField = "set_rotation"

Scene29.children.append(ROUTE2815)
ROUTE2816 = x3d.ROUTE()
ROUTE2816.fromNode = "Roll_r_metatarsal_PitchInterpolator"
ROUTE2816.fromField = "value_changed"
ROUTE2816.toNode = "hanim_l_metatarsal"
ROUTE2816.toField = "set_rotation"

Scene29.children.append(ROUTE2816)
ROUTE2817 = x3d.ROUTE()
ROUTE2817.fromNode = "Roll_r_metatarsal_PitchInterpolator"
ROUTE2817.fromField = "value_changed"
ROUTE2817.toNode = "hanim_r_metatarsal"
ROUTE2817.toField = "set_rotation"

Scene29.children.append(ROUTE2817)
ROUTE2818 = x3d.ROUTE()
ROUTE2818.fromNode = "Roll_sacroiliac_YawInterpolator"
ROUTE2818.fromField = "value_changed"
ROUTE2818.toNode = "hanim_sacroiliac"
ROUTE2818.toField = "set_rotation"

Scene29.children.append(ROUTE2818)
ROUTE2819 = x3d.ROUTE()
ROUTE2819.fromNode = "Roll_vl5_YawInterpolator"
ROUTE2819.fromField = "value_changed"
ROUTE2819.toNode = "hanim_vl5"
ROUTE2819.toField = "set_rotation"

Scene29.children.append(ROUTE2819)
ROUTE2820 = x3d.ROUTE()
ROUTE2820.fromNode = "Roll_vc6_YawInterpolator"
ROUTE2820.fromField = "value_changed"
ROUTE2820.toNode = "hanim_vc6"
ROUTE2820.toField = "set_rotation"

Scene29.children.append(ROUTE2820)
ROUTE2821 = x3d.ROUTE()
ROUTE2821.fromNode = "Roll_l_thumb1_PitchInterpolator"
ROUTE2821.fromField = "value_changed"
ROUTE2821.toNode = "hanim_l_thumb1"
ROUTE2821.toField = "set_rotation"

Scene29.children.append(ROUTE2821)
ROUTE2822 = x3d.ROUTE()
ROUTE2822.fromNode = "Roll_r_thumb1_PitchInterpolator"
ROUTE2822.fromField = "value_changed"
ROUTE2822.toNode = "hanim_r_thumb1"
ROUTE2822.toField = "set_rotation"

Scene29.children.append(ROUTE2822)
ROUTE2823 = x3d.ROUTE()
ROUTE2823.fromNode = "WalkTimer"
ROUTE2823.fromField = "fraction_changed"
ROUTE2823.toNode = "Walk_r_ankle_RotationInterpolator"
ROUTE2823.toField = "set_fraction"

Scene29.children.append(ROUTE2823)
ROUTE2824 = x3d.ROUTE()
ROUTE2824.fromNode = "WalkTimer"
ROUTE2824.fromField = "fraction_changed"
ROUTE2824.toNode = "Walk_r_knee_RotationInterpolator"
ROUTE2824.toField = "set_fraction"

Scene29.children.append(ROUTE2824)
ROUTE2825 = x3d.ROUTE()
ROUTE2825.fromNode = "WalkTimer"
ROUTE2825.fromField = "fraction_changed"
ROUTE2825.toNode = "Walk_r_hip_RotationInterpolator"
ROUTE2825.toField = "set_fraction"

Scene29.children.append(ROUTE2825)
ROUTE2826 = x3d.ROUTE()
ROUTE2826.fromNode = "WalkTimer"
ROUTE2826.fromField = "fraction_changed"
ROUTE2826.toNode = "Walk_l_ankle_RotationInterpolator"
ROUTE2826.toField = "set_fraction"

Scene29.children.append(ROUTE2826)
ROUTE2827 = x3d.ROUTE()
ROUTE2827.fromNode = "WalkTimer"
ROUTE2827.fromField = "fraction_changed"
ROUTE2827.toNode = "Walk_l_knee_RotationInterpolator"
ROUTE2827.toField = "set_fraction"

Scene29.children.append(ROUTE2827)
ROUTE2828 = x3d.ROUTE()
ROUTE2828.fromNode = "WalkTimer"
ROUTE2828.fromField = "fraction_changed"
ROUTE2828.toNode = "Walk_l_hip_RotationInterpolator"
ROUTE2828.toField = "set_fraction"

Scene29.children.append(ROUTE2828)
ROUTE2829 = x3d.ROUTE()
ROUTE2829.fromNode = "WalkTimer"
ROUTE2829.fromField = "fraction_changed"
ROUTE2829.toNode = "Walk_lower_body_RotationInterpolator"
ROUTE2829.toField = "set_fraction"

Scene29.children.append(ROUTE2829)
ROUTE2830 = x3d.ROUTE()
ROUTE2830.fromNode = "WalkTimer"
ROUTE2830.fromField = "fraction_changed"
ROUTE2830.toNode = "Walk_r_wrist_RotationInterpolator"
ROUTE2830.toField = "set_fraction"

Scene29.children.append(ROUTE2830)
ROUTE2831 = x3d.ROUTE()
ROUTE2831.fromNode = "WalkTimer"
ROUTE2831.fromField = "fraction_changed"
ROUTE2831.toNode = "Walk_r_elbow_RotationInterpolator"
ROUTE2831.toField = "set_fraction"

Scene29.children.append(ROUTE2831)
ROUTE2832 = x3d.ROUTE()
ROUTE2832.fromNode = "WalkTimer"
ROUTE2832.fromField = "fraction_changed"
ROUTE2832.toNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE2832.toField = "set_fraction"

Scene29.children.append(ROUTE2832)
ROUTE2833 = x3d.ROUTE()
ROUTE2833.fromNode = "WalkTimer"
ROUTE2833.fromField = "fraction_changed"
ROUTE2833.toNode = "Walk_l_wrist_RotationInterpolator"
ROUTE2833.toField = "set_fraction"

Scene29.children.append(ROUTE2833)
ROUTE2834 = x3d.ROUTE()
ROUTE2834.fromNode = "WalkTimer"
ROUTE2834.fromField = "fraction_changed"
ROUTE2834.toNode = "Walk_l_elbow_RotationInterpolator"
ROUTE2834.toField = "set_fraction"

Scene29.children.append(ROUTE2834)
ROUTE2835 = x3d.ROUTE()
ROUTE2835.fromNode = "WalkTimer"
ROUTE2835.fromField = "fraction_changed"
ROUTE2835.toNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE2835.toField = "set_fraction"

Scene29.children.append(ROUTE2835)
ROUTE2836 = x3d.ROUTE()
ROUTE2836.fromNode = "WalkTimer"
ROUTE2836.fromField = "fraction_changed"
ROUTE2836.toNode = "Walk_head_RotationInterpolator"
ROUTE2836.toField = "set_fraction"

Scene29.children.append(ROUTE2836)
ROUTE2837 = x3d.ROUTE()
ROUTE2837.fromNode = "WalkTimer"
ROUTE2837.fromField = "fraction_changed"
ROUTE2837.toNode = "Walk_neck_RotationInterpolator"
ROUTE2837.toField = "set_fraction"

Scene29.children.append(ROUTE2837)
ROUTE2838 = x3d.ROUTE()
ROUTE2838.fromNode = "WalkTimer"
ROUTE2838.fromField = "fraction_changed"
ROUTE2838.toNode = "Walk_upper_body_RotationInterpolator"
ROUTE2838.toField = "set_fraction"

Scene29.children.append(ROUTE2838)
ROUTE2839 = x3d.ROUTE()
ROUTE2839.fromNode = "WalkTimer"
ROUTE2839.fromField = "fraction_changed"
ROUTE2839.toNode = "Walk_whole_body_RotationInterpolator"
ROUTE2839.toField = "set_fraction"

Scene29.children.append(ROUTE2839)
ROUTE2840 = x3d.ROUTE()
ROUTE2840.fromNode = "WalkTimer"
ROUTE2840.fromField = "fraction_changed"
ROUTE2840.toNode = "Walk_whole_body_TranslationInterpolator"
ROUTE2840.toField = "set_fraction"

Scene29.children.append(ROUTE2840)
ROUTE2841 = x3d.ROUTE()
ROUTE2841.fromNode = "WalkTimer"
ROUTE2841.fromField = "fraction_changed"
ROUTE2841.toNode = "Walk_l_sternoclavicular_RollInterpolator"
ROUTE2841.toField = "set_fraction"

Scene29.children.append(ROUTE2841)
ROUTE2842 = x3d.ROUTE()
ROUTE2842.fromNode = "WalkTimer"
ROUTE2842.fromField = "fraction_changed"
ROUTE2842.toNode = "Walk_l_acromioclavicular_RollInterpolator"
ROUTE2842.toField = "set_fraction"

Scene29.children.append(ROUTE2842)
ROUTE2843 = x3d.ROUTE()
ROUTE2843.fromNode = "WalkTimer"
ROUTE2843.fromField = "fraction_changed"
ROUTE2843.toNode = "Walk_r_sternoclavicular_RollInterpolator"
ROUTE2843.toField = "set_fraction"

Scene29.children.append(ROUTE2843)
ROUTE2844 = x3d.ROUTE()
ROUTE2844.fromNode = "WalkTimer"
ROUTE2844.fromField = "fraction_changed"
ROUTE2844.toNode = "Walk_r_acromioclavicular_RollInterpolator"
ROUTE2844.toField = "set_fraction"

Scene29.children.append(ROUTE2844)
ROUTE2845 = x3d.ROUTE()
ROUTE2845.fromNode = "WalkTimer"
ROUTE2845.fromField = "fraction_changed"
ROUTE2845.toNode = "Walk_r_metatarsal_PitchInterpolator"
ROUTE2845.toField = "set_fraction"

Scene29.children.append(ROUTE2845)
ROUTE2846 = x3d.ROUTE()
ROUTE2846.fromNode = "WalkTimer"
ROUTE2846.fromField = "fraction_changed"
ROUTE2846.toNode = "Walk_sacroiliac_YawInterpolator"
ROUTE2846.toField = "set_fraction"

Scene29.children.append(ROUTE2846)
ROUTE2847 = x3d.ROUTE()
ROUTE2847.fromNode = "WalkTimer"
ROUTE2847.fromField = "fraction_changed"
ROUTE2847.toNode = "Walk_vl5_YawInterpolator"
ROUTE2847.toField = "set_fraction"

Scene29.children.append(ROUTE2847)
ROUTE2848 = x3d.ROUTE()
ROUTE2848.fromNode = "WalkTimer"
ROUTE2848.fromField = "fraction_changed"
ROUTE2848.toNode = "Walk_vc6_YawInterpolator"
ROUTE2848.toField = "set_fraction"

Scene29.children.append(ROUTE2848)
ROUTE2849 = x3d.ROUTE()
ROUTE2849.fromNode = "WalkTimer"
ROUTE2849.fromField = "fraction_changed"
ROUTE2849.toNode = "Walk_l_thumb1_PitchInterpolator"
ROUTE2849.toField = "set_fraction"

Scene29.children.append(ROUTE2849)
ROUTE2850 = x3d.ROUTE()
ROUTE2850.fromNode = "WalkTimer"
ROUTE2850.fromField = "fraction_changed"
ROUTE2850.toNode = "Walk_r_thumb1_PitchInterpolator"
ROUTE2850.toField = "set_fraction"

Scene29.children.append(ROUTE2850)
ROUTE2851 = x3d.ROUTE()
ROUTE2851.fromNode = "Walk_r_ankle_RotationInterpolator"
ROUTE2851.fromField = "value_changed"
ROUTE2851.toNode = "hanim_r_ankle"
ROUTE2851.toField = "set_rotation"

Scene29.children.append(ROUTE2851)
ROUTE2852 = x3d.ROUTE()
ROUTE2852.fromNode = "Walk_r_knee_RotationInterpolator"
ROUTE2852.fromField = "value_changed"
ROUTE2852.toNode = "hanim_r_knee"
ROUTE2852.toField = "set_rotation"

Scene29.children.append(ROUTE2852)
ROUTE2853 = x3d.ROUTE()
ROUTE2853.fromNode = "Walk_r_hip_RotationInterpolator"
ROUTE2853.fromField = "value_changed"
ROUTE2853.toNode = "hanim_r_hip"
ROUTE2853.toField = "set_rotation"

Scene29.children.append(ROUTE2853)
ROUTE2854 = x3d.ROUTE()
ROUTE2854.fromNode = "Walk_l_ankle_RotationInterpolator"
ROUTE2854.fromField = "value_changed"
ROUTE2854.toNode = "hanim_l_ankle"
ROUTE2854.toField = "set_rotation"

Scene29.children.append(ROUTE2854)
ROUTE2855 = x3d.ROUTE()
ROUTE2855.fromNode = "Walk_l_knee_RotationInterpolator"
ROUTE2855.fromField = "value_changed"
ROUTE2855.toNode = "hanim_l_knee"
ROUTE2855.toField = "set_rotation"

Scene29.children.append(ROUTE2855)
ROUTE2856 = x3d.ROUTE()
ROUTE2856.fromNode = "Walk_l_hip_RotationInterpolator"
ROUTE2856.fromField = "value_changed"
ROUTE2856.toNode = "hanim_l_hip"
ROUTE2856.toField = "set_rotation"

Scene29.children.append(ROUTE2856)
ROUTE2857 = x3d.ROUTE()
ROUTE2857.fromNode = "Walk_lower_body_RotationInterpolator"
ROUTE2857.fromField = "value_changed"
ROUTE2857.toNode = "hanim_sacroiliac"
ROUTE2857.toField = "set_rotation"

Scene29.children.append(ROUTE2857)
ROUTE2858 = x3d.ROUTE()
ROUTE2858.fromNode = "Walk_r_wrist_RotationInterpolator"
ROUTE2858.fromField = "value_changed"
ROUTE2858.toNode = "hanim_r_wrist"
ROUTE2858.toField = "set_rotation"

Scene29.children.append(ROUTE2858)
ROUTE2859 = x3d.ROUTE()
ROUTE2859.fromNode = "Walk_r_elbow_RotationInterpolator"
ROUTE2859.fromField = "value_changed"
ROUTE2859.toNode = "hanim_r_elbow"
ROUTE2859.toField = "set_rotation"

Scene29.children.append(ROUTE2859)
ROUTE2860 = x3d.ROUTE()
ROUTE2860.fromNode = "Walk_r_shoulder_RotationInterpolator"
ROUTE2860.fromField = "value_changed"
ROUTE2860.toNode = "hanim_r_shoulder"
ROUTE2860.toField = "set_rotation"

Scene29.children.append(ROUTE2860)
ROUTE2861 = x3d.ROUTE()
ROUTE2861.fromNode = "Walk_l_wrist_RotationInterpolator"
ROUTE2861.fromField = "value_changed"
ROUTE2861.toNode = "hanim_l_wrist"
ROUTE2861.toField = "set_rotation"

Scene29.children.append(ROUTE2861)
ROUTE2862 = x3d.ROUTE()
ROUTE2862.fromNode = "Walk_l_elbow_RotationInterpolator"
ROUTE2862.fromField = "value_changed"
ROUTE2862.toNode = "hanim_l_elbow"
ROUTE2862.toField = "set_rotation"

Scene29.children.append(ROUTE2862)
ROUTE2863 = x3d.ROUTE()
ROUTE2863.fromNode = "Walk_l_shoulder_RotationInterpolator"
ROUTE2863.fromField = "value_changed"
ROUTE2863.toNode = "hanim_l_shoulder"
ROUTE2863.toField = "set_rotation"

Scene29.children.append(ROUTE2863)
ROUTE2864 = x3d.ROUTE()
ROUTE2864.fromNode = "Walk_head_RotationInterpolator"
ROUTE2864.fromField = "value_changed"
ROUTE2864.toNode = "hanim_skullbase"
ROUTE2864.toField = "set_rotation"

Scene29.children.append(ROUTE2864)
ROUTE2865 = x3d.ROUTE()
ROUTE2865.fromNode = "Walk_neck_RotationInterpolator"
ROUTE2865.fromField = "value_changed"
ROUTE2865.toNode = "hanim_vc4"
ROUTE2865.toField = "set_rotation"

Scene29.children.append(ROUTE2865)
ROUTE2866 = x3d.ROUTE()
ROUTE2866.fromNode = "Walk_upper_body_RotationInterpolator"
ROUTE2866.fromField = "value_changed"
ROUTE2866.toNode = "hanim_vl1"
ROUTE2866.toField = "set_rotation"

Scene29.children.append(ROUTE2866)
ROUTE2867 = x3d.ROUTE()
ROUTE2867.fromNode = "Walk_whole_body_RotationInterpolator"
ROUTE2867.fromField = "value_changed"
ROUTE2867.toNode = "hanim_humanoid_root"
ROUTE2867.toField = "set_rotation"

Scene29.children.append(ROUTE2867)
ROUTE2868 = x3d.ROUTE()
ROUTE2868.fromNode = "Walk_whole_body_TranslationInterpolator"
ROUTE2868.fromField = "value_changed"
ROUTE2868.toNode = "hanim_humanoid_root"
ROUTE2868.toField = "set_translation"

Scene29.children.append(ROUTE2868)
ROUTE2869 = x3d.ROUTE()
ROUTE2869.fromNode = "Walk_l_sternoclavicular_RollInterpolator"
ROUTE2869.fromField = "value_changed"
ROUTE2869.toNode = "hanim_l_sternoclavicular"
ROUTE2869.toField = "set_rotation"

Scene29.children.append(ROUTE2869)
ROUTE2870 = x3d.ROUTE()
ROUTE2870.fromNode = "Walk_l_acromioclavicular_RollInterpolator"
ROUTE2870.fromField = "value_changed"
ROUTE2870.toNode = "hanim_l_acromioclavicular"
ROUTE2870.toField = "set_rotation"

Scene29.children.append(ROUTE2870)
ROUTE2871 = x3d.ROUTE()
ROUTE2871.fromNode = "Walk_r_sternoclavicular_RollInterpolator"
ROUTE2871.fromField = "value_changed"
ROUTE2871.toNode = "hanim_r_sternoclavicular"
ROUTE2871.toField = "set_rotation"

Scene29.children.append(ROUTE2871)
ROUTE2872 = x3d.ROUTE()
ROUTE2872.fromNode = "Walk_r_acromioclavicular_RollInterpolator"
ROUTE2872.fromField = "value_changed"
ROUTE2872.toNode = "hanim_r_acromioclavicular"
ROUTE2872.toField = "set_rotation"

Scene29.children.append(ROUTE2872)
ROUTE2873 = x3d.ROUTE()
ROUTE2873.fromNode = "Walk_r_metatarsal_PitchInterpolator"
ROUTE2873.fromField = "value_changed"
ROUTE2873.toNode = "hanim_l_metatarsal"
ROUTE2873.toField = "set_rotation"

Scene29.children.append(ROUTE2873)
ROUTE2874 = x3d.ROUTE()
ROUTE2874.fromNode = "Walk_r_metatarsal_PitchInterpolator"
ROUTE2874.fromField = "value_changed"
ROUTE2874.toNode = "hanim_r_metatarsal"
ROUTE2874.toField = "set_rotation"

Scene29.children.append(ROUTE2874)
ROUTE2875 = x3d.ROUTE()
ROUTE2875.fromNode = "Walk_sacroiliac_YawInterpolator"
ROUTE2875.fromField = "value_changed"
ROUTE2875.toNode = "hanim_sacroiliac"
ROUTE2875.toField = "set_rotation"

Scene29.children.append(ROUTE2875)
ROUTE2876 = x3d.ROUTE()
ROUTE2876.fromNode = "Walk_vl5_YawInterpolator"
ROUTE2876.fromField = "value_changed"
ROUTE2876.toNode = "hanim_vl5"
ROUTE2876.toField = "set_rotation"

Scene29.children.append(ROUTE2876)
ROUTE2877 = x3d.ROUTE()
ROUTE2877.fromNode = "Walk_vc6_YawInterpolator"
ROUTE2877.fromField = "value_changed"
ROUTE2877.toNode = "hanim_vc6"
ROUTE2877.toField = "set_rotation"

Scene29.children.append(ROUTE2877)
ROUTE2878 = x3d.ROUTE()
ROUTE2878.fromNode = "Walk_l_thumb1_PitchInterpolator"
ROUTE2878.fromField = "value_changed"
ROUTE2878.toNode = "hanim_l_thumb1"
ROUTE2878.toField = "set_rotation"

Scene29.children.append(ROUTE2878)
ROUTE2879 = x3d.ROUTE()
ROUTE2879.fromNode = "Walk_r_thumb1_PitchInterpolator"
ROUTE2879.fromField = "value_changed"
ROUTE2879.toNode = "hanim_r_thumb1"
ROUTE2879.toField = "set_rotation"

Scene29.children.append(ROUTE2879)
ROUTE2880 = x3d.ROUTE()
ROUTE2880.fromNode = "RunTimer"
ROUTE2880.fromField = "fraction_changed"
ROUTE2880.toNode = "Run_r_ankle_RotationInterpolator_Run"
ROUTE2880.toField = "set_fraction"

Scene29.children.append(ROUTE2880)
ROUTE2881 = x3d.ROUTE()
ROUTE2881.fromNode = "RunTimer"
ROUTE2881.fromField = "fraction_changed"
ROUTE2881.toNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE2881.toField = "set_fraction"

Scene29.children.append(ROUTE2881)
ROUTE2882 = x3d.ROUTE()
ROUTE2882.fromNode = "RunTimer"
ROUTE2882.fromField = "fraction_changed"
ROUTE2882.toNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE2882.toField = "set_fraction"

Scene29.children.append(ROUTE2882)
ROUTE2883 = x3d.ROUTE()
ROUTE2883.fromNode = "RunTimer"
ROUTE2883.fromField = "fraction_changed"
ROUTE2883.toNode = "Run_l_ankle_RotationInterpolator_Run"
ROUTE2883.toField = "set_fraction"

Scene29.children.append(ROUTE2883)
ROUTE2884 = x3d.ROUTE()
ROUTE2884.fromNode = "RunTimer"
ROUTE2884.fromField = "fraction_changed"
ROUTE2884.toNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE2884.toField = "set_fraction"

Scene29.children.append(ROUTE2884)
ROUTE2885 = x3d.ROUTE()
ROUTE2885.fromNode = "RunTimer"
ROUTE2885.fromField = "fraction_changed"
ROUTE2885.toNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE2885.toField = "set_fraction"

Scene29.children.append(ROUTE2885)
ROUTE2886 = x3d.ROUTE()
ROUTE2886.fromNode = "RunTimer"
ROUTE2886.fromField = "fraction_changed"
ROUTE2886.toNode = "Run_lower_body_RotationInterpolator_Run"
ROUTE2886.toField = "set_fraction"

Scene29.children.append(ROUTE2886)
ROUTE2887 = x3d.ROUTE()
ROUTE2887.fromNode = "RunTimer"
ROUTE2887.fromField = "fraction_changed"
ROUTE2887.toNode = "Run_r_wrist_RotationInterpolator_Run"
ROUTE2887.toField = "set_fraction"

Scene29.children.append(ROUTE2887)
ROUTE2888 = x3d.ROUTE()
ROUTE2888.fromNode = "RunTimer"
ROUTE2888.fromField = "fraction_changed"
ROUTE2888.toNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE2888.toField = "set_fraction"

Scene29.children.append(ROUTE2888)
ROUTE2889 = x3d.ROUTE()
ROUTE2889.fromNode = "RunTimer"
ROUTE2889.fromField = "fraction_changed"
ROUTE2889.toNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE2889.toField = "set_fraction"

Scene29.children.append(ROUTE2889)
ROUTE2890 = x3d.ROUTE()
ROUTE2890.fromNode = "RunTimer"
ROUTE2890.fromField = "fraction_changed"
ROUTE2890.toNode = "Run_l_wrist_RotationInterpolator_Run"
ROUTE2890.toField = "set_fraction"

Scene29.children.append(ROUTE2890)
ROUTE2891 = x3d.ROUTE()
ROUTE2891.fromNode = "RunTimer"
ROUTE2891.fromField = "fraction_changed"
ROUTE2891.toNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE2891.toField = "set_fraction"

Scene29.children.append(ROUTE2891)
ROUTE2892 = x3d.ROUTE()
ROUTE2892.fromNode = "RunTimer"
ROUTE2892.fromField = "fraction_changed"
ROUTE2892.toNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE2892.toField = "set_fraction"

Scene29.children.append(ROUTE2892)
ROUTE2893 = x3d.ROUTE()
ROUTE2893.fromNode = "RunTimer"
ROUTE2893.fromField = "fraction_changed"
ROUTE2893.toNode = "Run_head_RotationInterpolator_Run"
ROUTE2893.toField = "set_fraction"

Scene29.children.append(ROUTE2893)
ROUTE2894 = x3d.ROUTE()
ROUTE2894.fromNode = "RunTimer"
ROUTE2894.fromField = "fraction_changed"
ROUTE2894.toNode = "Run_neck_RotationInterpolator_Run"
ROUTE2894.toField = "set_fraction"

Scene29.children.append(ROUTE2894)
ROUTE2895 = x3d.ROUTE()
ROUTE2895.fromNode = "RunTimer"
ROUTE2895.fromField = "fraction_changed"
ROUTE2895.toNode = "Run_upper_body_RotationInterpolator_Run"
ROUTE2895.toField = "set_fraction"

Scene29.children.append(ROUTE2895)
ROUTE2896 = x3d.ROUTE()
ROUTE2896.fromNode = "RunTimer"
ROUTE2896.fromField = "fraction_changed"
ROUTE2896.toNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE2896.toField = "set_fraction"

Scene29.children.append(ROUTE2896)
ROUTE2897 = x3d.ROUTE()
ROUTE2897.fromNode = "RunTimer"
ROUTE2897.fromField = "fraction_changed"
ROUTE2897.toNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE2897.toField = "set_fraction"

Scene29.children.append(ROUTE2897)
ROUTE2898 = x3d.ROUTE()
ROUTE2898.fromNode = "RunTimer"
ROUTE2898.fromField = "fraction_changed"
ROUTE2898.toNode = "Run_l_sternoclavicular_RollInterpolator"
ROUTE2898.toField = "set_fraction"

Scene29.children.append(ROUTE2898)
ROUTE2899 = x3d.ROUTE()
ROUTE2899.fromNode = "RunTimer"
ROUTE2899.fromField = "fraction_changed"
ROUTE2899.toNode = "Run_l_acromioclavicular_RollInterpolator"
ROUTE2899.toField = "set_fraction"

Scene29.children.append(ROUTE2899)
ROUTE2900 = x3d.ROUTE()
ROUTE2900.fromNode = "RunTimer"
ROUTE2900.fromField = "fraction_changed"
ROUTE2900.toNode = "Run_r_sternoclavicular_RollInterpolator"
ROUTE2900.toField = "set_fraction"

Scene29.children.append(ROUTE2900)
ROUTE2901 = x3d.ROUTE()
ROUTE2901.fromNode = "RunTimer"
ROUTE2901.fromField = "fraction_changed"
ROUTE2901.toNode = "Run_r_acromioclavicular_RollInterpolator"
ROUTE2901.toField = "set_fraction"

Scene29.children.append(ROUTE2901)
ROUTE2902 = x3d.ROUTE()
ROUTE2902.fromNode = "RunTimer"
ROUTE2902.fromField = "fraction_changed"
ROUTE2902.toNode = "Run_r_metatarsal_PitchInterpolator"
ROUTE2902.toField = "set_fraction"

Scene29.children.append(ROUTE2902)
ROUTE2903 = x3d.ROUTE()
ROUTE2903.fromNode = "RunTimer"
ROUTE2903.fromField = "fraction_changed"
ROUTE2903.toNode = "Run_sacroiliac_YawInterpolator"
ROUTE2903.toField = "set_fraction"

Scene29.children.append(ROUTE2903)
ROUTE2904 = x3d.ROUTE()
ROUTE2904.fromNode = "RunTimer"
ROUTE2904.fromField = "fraction_changed"
ROUTE2904.toNode = "Run_vl5_YawInterpolator"
ROUTE2904.toField = "set_fraction"

Scene29.children.append(ROUTE2904)
ROUTE2905 = x3d.ROUTE()
ROUTE2905.fromNode = "RunTimer"
ROUTE2905.fromField = "fraction_changed"
ROUTE2905.toNode = "Run_vc6_YawInterpolator"
ROUTE2905.toField = "set_fraction"

Scene29.children.append(ROUTE2905)
ROUTE2906 = x3d.ROUTE()
ROUTE2906.fromNode = "RunTimer"
ROUTE2906.fromField = "fraction_changed"
ROUTE2906.toNode = "Run_l_thumb1_PitchInterpolator"
ROUTE2906.toField = "set_fraction"

Scene29.children.append(ROUTE2906)
ROUTE2907 = x3d.ROUTE()
ROUTE2907.fromNode = "RunTimer"
ROUTE2907.fromField = "fraction_changed"
ROUTE2907.toNode = "Run_r_thumb1_PitchInterpolator"
ROUTE2907.toField = "set_fraction"

Scene29.children.append(ROUTE2907)
ROUTE2908 = x3d.ROUTE()
ROUTE2908.fromNode = "Run_r_ankle_RotationInterpolator_Run"
ROUTE2908.fromField = "value_changed"
ROUTE2908.toNode = "hanim_r_ankle"
ROUTE2908.toField = "set_rotation"

Scene29.children.append(ROUTE2908)
ROUTE2909 = x3d.ROUTE()
ROUTE2909.fromNode = "Run_r_knee_RotationInterpolator_Run"
ROUTE2909.fromField = "value_changed"
ROUTE2909.toNode = "hanim_r_knee"
ROUTE2909.toField = "set_rotation"

Scene29.children.append(ROUTE2909)
ROUTE2910 = x3d.ROUTE()
ROUTE2910.fromNode = "Run_r_hip_RotationInterpolator_Run"
ROUTE2910.fromField = "value_changed"
ROUTE2910.toNode = "hanim_r_hip"
ROUTE2910.toField = "set_rotation"

Scene29.children.append(ROUTE2910)
ROUTE2911 = x3d.ROUTE()
ROUTE2911.fromNode = "Run_l_ankle_RotationInterpolator_Run"
ROUTE2911.fromField = "value_changed"
ROUTE2911.toNode = "hanim_l_ankle"
ROUTE2911.toField = "set_rotation"

Scene29.children.append(ROUTE2911)
ROUTE2912 = x3d.ROUTE()
ROUTE2912.fromNode = "Run_l_knee_RotationInterpolator_Run"
ROUTE2912.fromField = "value_changed"
ROUTE2912.toNode = "hanim_l_knee"
ROUTE2912.toField = "set_rotation"

Scene29.children.append(ROUTE2912)
ROUTE2913 = x3d.ROUTE()
ROUTE2913.fromNode = "Run_l_hip_RotationInterpolator_Run"
ROUTE2913.fromField = "value_changed"
ROUTE2913.toNode = "hanim_l_hip"
ROUTE2913.toField = "set_rotation"

Scene29.children.append(ROUTE2913)
ROUTE2914 = x3d.ROUTE()
ROUTE2914.fromNode = "Run_r_wrist_RotationInterpolator_Run"
ROUTE2914.fromField = "value_changed"
ROUTE2914.toNode = "hanim_r_wrist"
ROUTE2914.toField = "set_rotation"

Scene29.children.append(ROUTE2914)
ROUTE2915 = x3d.ROUTE()
ROUTE2915.fromNode = "Run_r_elbow_RotationInterpolator_Run"
ROUTE2915.fromField = "value_changed"
ROUTE2915.toNode = "hanim_r_elbow"
ROUTE2915.toField = "set_rotation"

Scene29.children.append(ROUTE2915)
ROUTE2916 = x3d.ROUTE()
ROUTE2916.fromNode = "Run_r_shoulder_RotationInterpolator_Run"
ROUTE2916.fromField = "value_changed"
ROUTE2916.toNode = "hanim_r_shoulder"
ROUTE2916.toField = "set_rotation"

Scene29.children.append(ROUTE2916)
ROUTE2917 = x3d.ROUTE()
ROUTE2917.fromNode = "Run_l_wrist_RotationInterpolator_Run"
ROUTE2917.fromField = "value_changed"
ROUTE2917.toNode = "hanim_l_wrist"
ROUTE2917.toField = "set_rotation"

Scene29.children.append(ROUTE2917)
ROUTE2918 = x3d.ROUTE()
ROUTE2918.fromNode = "Run_l_elbow_RotationInterpolator_Run"
ROUTE2918.fromField = "value_changed"
ROUTE2918.toNode = "hanim_l_elbow"
ROUTE2918.toField = "set_rotation"

Scene29.children.append(ROUTE2918)
ROUTE2919 = x3d.ROUTE()
ROUTE2919.fromNode = "Run_l_shoulder_RotationInterpolator_Run"
ROUTE2919.fromField = "value_changed"
ROUTE2919.toNode = "hanim_l_shoulder"
ROUTE2919.toField = "set_rotation"

Scene29.children.append(ROUTE2919)
ROUTE2920 = x3d.ROUTE()
ROUTE2920.fromNode = "Run_lower_body_RotationInterpolator_Run"
ROUTE2920.fromField = "value_changed"
ROUTE2920.toNode = "hanim_sacroiliac"
ROUTE2920.toField = "set_rotation"

Scene29.children.append(ROUTE2920)
ROUTE2921 = x3d.ROUTE()
ROUTE2921.fromNode = "Run_head_RotationInterpolator_Run"
ROUTE2921.fromField = "value_changed"
ROUTE2921.toNode = "hanim_skullbase"
ROUTE2921.toField = "set_rotation"

Scene29.children.append(ROUTE2921)
ROUTE2922 = x3d.ROUTE()
ROUTE2922.fromNode = "Run_neck_RotationInterpolator_Run"
ROUTE2922.fromField = "value_changed"
ROUTE2922.toNode = "hanim_vc4"
ROUTE2922.toField = "set_rotation"

Scene29.children.append(ROUTE2922)
ROUTE2923 = x3d.ROUTE()
ROUTE2923.fromNode = "Run_upper_body_RotationInterpolator_Run"
ROUTE2923.fromField = "value_changed"
ROUTE2923.toNode = "hanim_vl1"
ROUTE2923.toField = "set_rotation"

Scene29.children.append(ROUTE2923)
ROUTE2924 = x3d.ROUTE()
ROUTE2924.fromNode = "Run_whole_body_RotationInterpolator_Run"
ROUTE2924.fromField = "value_changed"
ROUTE2924.toNode = "hanim_humanoid_root"
ROUTE2924.toField = "set_rotation"

Scene29.children.append(ROUTE2924)
ROUTE2925 = x3d.ROUTE()
ROUTE2925.fromNode = "Run_whole_body_TranslationInterpolator_Run"
ROUTE2925.fromField = "value_changed"
ROUTE2925.toNode = "hanim_humanoid_root"
ROUTE2925.toField = "set_translation"

Scene29.children.append(ROUTE2925)
ROUTE2926 = x3d.ROUTE()
ROUTE2926.fromNode = "Run_l_sternoclavicular_RollInterpolator"
ROUTE2926.fromField = "value_changed"
ROUTE2926.toNode = "hanim_l_sternoclavicular"
ROUTE2926.toField = "set_rotation"

Scene29.children.append(ROUTE2926)
ROUTE2927 = x3d.ROUTE()
ROUTE2927.fromNode = "Run_l_acromioclavicular_RollInterpolator"
ROUTE2927.fromField = "value_changed"
ROUTE2927.toNode = "hanim_l_acromioclavicular"
ROUTE2927.toField = "set_rotation"

Scene29.children.append(ROUTE2927)
ROUTE2928 = x3d.ROUTE()
ROUTE2928.fromNode = "Run_r_sternoclavicular_RollInterpolator"
ROUTE2928.fromField = "value_changed"
ROUTE2928.toNode = "hanim_r_sternoclavicular"
ROUTE2928.toField = "set_rotation"

Scene29.children.append(ROUTE2928)
ROUTE2929 = x3d.ROUTE()
ROUTE2929.fromNode = "Run_r_acromioclavicular_RollInterpolator"
ROUTE2929.fromField = "value_changed"
ROUTE2929.toNode = "hanim_r_acromioclavicular"
ROUTE2929.toField = "set_rotation"

Scene29.children.append(ROUTE2929)
ROUTE2930 = x3d.ROUTE()
ROUTE2930.fromNode = "Run_r_metatarsal_PitchInterpolator"
ROUTE2930.fromField = "value_changed"
ROUTE2930.toNode = "hanim_l_metatarsal"
ROUTE2930.toField = "set_rotation"

Scene29.children.append(ROUTE2930)
ROUTE2931 = x3d.ROUTE()
ROUTE2931.fromNode = "Run_r_metatarsal_PitchInterpolator"
ROUTE2931.fromField = "value_changed"
ROUTE2931.toNode = "hanim_r_metatarsal"
ROUTE2931.toField = "set_rotation"

Scene29.children.append(ROUTE2931)
ROUTE2932 = x3d.ROUTE()
ROUTE2932.fromNode = "Run_sacroiliac_YawInterpolator"
ROUTE2932.fromField = "value_changed"
ROUTE2932.toNode = "hanim_sacroiliac"
ROUTE2932.toField = "set_rotation"

Scene29.children.append(ROUTE2932)
ROUTE2933 = x3d.ROUTE()
ROUTE2933.fromNode = "Run_vl5_YawInterpolator"
ROUTE2933.fromField = "value_changed"
ROUTE2933.toNode = "hanim_vl5"
ROUTE2933.toField = "set_rotation"

Scene29.children.append(ROUTE2933)
ROUTE2934 = x3d.ROUTE()
ROUTE2934.fromNode = "Run_vc6_YawInterpolator"
ROUTE2934.fromField = "value_changed"
ROUTE2934.toNode = "hanim_vc6"
ROUTE2934.toField = "set_rotation"

Scene29.children.append(ROUTE2934)
ROUTE2935 = x3d.ROUTE()
ROUTE2935.fromNode = "Run_l_thumb1_PitchInterpolator"
ROUTE2935.fromField = "value_changed"
ROUTE2935.toNode = "hanim_l_thumb1"
ROUTE2935.toField = "set_rotation"

Scene29.children.append(ROUTE2935)
ROUTE2936 = x3d.ROUTE()
ROUTE2936.fromNode = "Run_r_thumb1_PitchInterpolator"
ROUTE2936.fromField = "value_changed"
ROUTE2936.toNode = "hanim_r_thumb1"
ROUTE2936.toField = "set_rotation"

Scene29.children.append(ROUTE2936)
ROUTE2937 = x3d.ROUTE()
ROUTE2937.fromNode = "JumpTimer"
ROUTE2937.fromField = "fraction_changed"
ROUTE2937.toNode = "Jump_r_ankle_RotationInterpolator"
ROUTE2937.toField = "set_fraction"

Scene29.children.append(ROUTE2937)
ROUTE2938 = x3d.ROUTE()
ROUTE2938.fromNode = "JumpTimer"
ROUTE2938.fromField = "fraction_changed"
ROUTE2938.toNode = "Jump_r_knee_RotationInterpolator"
ROUTE2938.toField = "set_fraction"

Scene29.children.append(ROUTE2938)
ROUTE2939 = x3d.ROUTE()
ROUTE2939.fromNode = "JumpTimer"
ROUTE2939.fromField = "fraction_changed"
ROUTE2939.toNode = "Jump_r_hip_RotationInterpolator"
ROUTE2939.toField = "set_fraction"

Scene29.children.append(ROUTE2939)
ROUTE2940 = x3d.ROUTE()
ROUTE2940.fromNode = "JumpTimer"
ROUTE2940.fromField = "fraction_changed"
ROUTE2940.toNode = "Jump_l_ankle_RotationInterpolator"
ROUTE2940.toField = "set_fraction"

Scene29.children.append(ROUTE2940)
ROUTE2941 = x3d.ROUTE()
ROUTE2941.fromNode = "JumpTimer"
ROUTE2941.fromField = "fraction_changed"
ROUTE2941.toNode = "Jump_l_knee_RotationInterpolator"
ROUTE2941.toField = "set_fraction"

Scene29.children.append(ROUTE2941)
ROUTE2942 = x3d.ROUTE()
ROUTE2942.fromNode = "JumpTimer"
ROUTE2942.fromField = "fraction_changed"
ROUTE2942.toNode = "Jump_l_hip_RotationInterpolator"
ROUTE2942.toField = "set_fraction"

Scene29.children.append(ROUTE2942)
ROUTE2943 = x3d.ROUTE()
ROUTE2943.fromNode = "JumpTimer"
ROUTE2943.fromField = "fraction_changed"
ROUTE2943.toNode = "Jump_lower_body_RotationInterpolator"
ROUTE2943.toField = "set_fraction"

Scene29.children.append(ROUTE2943)
ROUTE2944 = x3d.ROUTE()
ROUTE2944.fromNode = "JumpTimer"
ROUTE2944.fromField = "fraction_changed"
ROUTE2944.toNode = "Jump_r_wrist_RotationInterpolator"
ROUTE2944.toField = "set_fraction"

Scene29.children.append(ROUTE2944)
ROUTE2945 = x3d.ROUTE()
ROUTE2945.fromNode = "JumpTimer"
ROUTE2945.fromField = "fraction_changed"
ROUTE2945.toNode = "Jump_r_elbow_RotationInterpolator"
ROUTE2945.toField = "set_fraction"

Scene29.children.append(ROUTE2945)
ROUTE2946 = x3d.ROUTE()
ROUTE2946.fromNode = "JumpTimer"
ROUTE2946.fromField = "fraction_changed"
ROUTE2946.toNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE2946.toField = "set_fraction"

Scene29.children.append(ROUTE2946)
ROUTE2947 = x3d.ROUTE()
ROUTE2947.fromNode = "JumpTimer"
ROUTE2947.fromField = "fraction_changed"
ROUTE2947.toNode = "Jump_l_wrist_RotationInterpolator"
ROUTE2947.toField = "set_fraction"

Scene29.children.append(ROUTE2947)
ROUTE2948 = x3d.ROUTE()
ROUTE2948.fromNode = "JumpTimer"
ROUTE2948.fromField = "fraction_changed"
ROUTE2948.toNode = "Jump_l_elbow_RotationInterpolator"
ROUTE2948.toField = "set_fraction"

Scene29.children.append(ROUTE2948)
ROUTE2949 = x3d.ROUTE()
ROUTE2949.fromNode = "JumpTimer"
ROUTE2949.fromField = "fraction_changed"
ROUTE2949.toNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE2949.toField = "set_fraction"

Scene29.children.append(ROUTE2949)
ROUTE2950 = x3d.ROUTE()
ROUTE2950.fromNode = "JumpTimer"
ROUTE2950.fromField = "fraction_changed"
ROUTE2950.toNode = "Jump_head_RotationInterpolator"
ROUTE2950.toField = "set_fraction"

Scene29.children.append(ROUTE2950)
ROUTE2951 = x3d.ROUTE()
ROUTE2951.fromNode = "JumpTimer"
ROUTE2951.fromField = "fraction_changed"
ROUTE2951.toNode = "Jump_neck_RotationInterpolator"
ROUTE2951.toField = "set_fraction"

Scene29.children.append(ROUTE2951)
ROUTE2952 = x3d.ROUTE()
ROUTE2952.fromNode = "JumpTimer"
ROUTE2952.fromField = "fraction_changed"
ROUTE2952.toNode = "Jump_upper_body_RotationInterpolator"
ROUTE2952.toField = "set_fraction"

Scene29.children.append(ROUTE2952)
ROUTE2953 = x3d.ROUTE()
ROUTE2953.fromNode = "JumpTimer"
ROUTE2953.fromField = "fraction_changed"
ROUTE2953.toNode = "Jump_whole_body_RotationInterpolator"
ROUTE2953.toField = "set_fraction"

Scene29.children.append(ROUTE2953)
ROUTE2954 = x3d.ROUTE()
ROUTE2954.fromNode = "JumpTimer"
ROUTE2954.fromField = "fraction_changed"
ROUTE2954.toNode = "Jump_whole_body_TranslationInterpolator"
ROUTE2954.toField = "set_fraction"

Scene29.children.append(ROUTE2954)
ROUTE2955 = x3d.ROUTE()
ROUTE2955.fromNode = "JumpTimer"
ROUTE2955.fromField = "fraction_changed"
ROUTE2955.toNode = "Jump_l_sternoclavicular_RollInterpolator"
ROUTE2955.toField = "set_fraction"

Scene29.children.append(ROUTE2955)
ROUTE2956 = x3d.ROUTE()
ROUTE2956.fromNode = "JumpTimer"
ROUTE2956.fromField = "fraction_changed"
ROUTE2956.toNode = "Jump_l_acromioclavicular_RollInterpolator"
ROUTE2956.toField = "set_fraction"

Scene29.children.append(ROUTE2956)
ROUTE2957 = x3d.ROUTE()
ROUTE2957.fromNode = "JumpTimer"
ROUTE2957.fromField = "fraction_changed"
ROUTE2957.toNode = "Jump_r_sternoclavicular_RollInterpolator"
ROUTE2957.toField = "set_fraction"

Scene29.children.append(ROUTE2957)
ROUTE2958 = x3d.ROUTE()
ROUTE2958.fromNode = "JumpTimer"
ROUTE2958.fromField = "fraction_changed"
ROUTE2958.toNode = "Jump_r_acromioclavicular_RollInterpolator"
ROUTE2958.toField = "set_fraction"

Scene29.children.append(ROUTE2958)
ROUTE2959 = x3d.ROUTE()
ROUTE2959.fromNode = "JumpTimer"
ROUTE2959.fromField = "fraction_changed"
ROUTE2959.toNode = "Jump_r_metatarsal_PitchInterpolator"
ROUTE2959.toField = "set_fraction"

Scene29.children.append(ROUTE2959)
ROUTE2960 = x3d.ROUTE()
ROUTE2960.fromNode = "JumpTimer"
ROUTE2960.fromField = "fraction_changed"
ROUTE2960.toNode = "Jump_sacroiliac_YawInterpolator"
ROUTE2960.toField = "set_fraction"

Scene29.children.append(ROUTE2960)
ROUTE2961 = x3d.ROUTE()
ROUTE2961.fromNode = "JumpTimer"
ROUTE2961.fromField = "fraction_changed"
ROUTE2961.toNode = "Jump_vl5_YawInterpolator"
ROUTE2961.toField = "set_fraction"

Scene29.children.append(ROUTE2961)
ROUTE2962 = x3d.ROUTE()
ROUTE2962.fromNode = "JumpTimer"
ROUTE2962.fromField = "fraction_changed"
ROUTE2962.toNode = "Jump_vc6_YawInterpolator"
ROUTE2962.toField = "set_fraction"

Scene29.children.append(ROUTE2962)
ROUTE2963 = x3d.ROUTE()
ROUTE2963.fromNode = "JumpTimer"
ROUTE2963.fromField = "fraction_changed"
ROUTE2963.toNode = "Jump_l_thumb1_PitchInterpolator"
ROUTE2963.toField = "set_fraction"

Scene29.children.append(ROUTE2963)
ROUTE2964 = x3d.ROUTE()
ROUTE2964.fromNode = "JumpTimer"
ROUTE2964.fromField = "fraction_changed"
ROUTE2964.toNode = "Jump_r_thumb1_PitchInterpolator"
ROUTE2964.toField = "set_fraction"

Scene29.children.append(ROUTE2964)
ROUTE2965 = x3d.ROUTE()
ROUTE2965.fromNode = "Jump_r_ankle_RotationInterpolator"
ROUTE2965.fromField = "value_changed"
ROUTE2965.toNode = "hanim_r_ankle"
ROUTE2965.toField = "set_rotation"

Scene29.children.append(ROUTE2965)
ROUTE2966 = x3d.ROUTE()
ROUTE2966.fromNode = "Jump_r_knee_RotationInterpolator"
ROUTE2966.fromField = "value_changed"
ROUTE2966.toNode = "hanim_r_knee"
ROUTE2966.toField = "set_rotation"

Scene29.children.append(ROUTE2966)
ROUTE2967 = x3d.ROUTE()
ROUTE2967.fromNode = "Jump_r_hip_RotationInterpolator"
ROUTE2967.fromField = "value_changed"
ROUTE2967.toNode = "hanim_r_hip"
ROUTE2967.toField = "set_rotation"

Scene29.children.append(ROUTE2967)
ROUTE2968 = x3d.ROUTE()
ROUTE2968.fromNode = "Jump_l_ankle_RotationInterpolator"
ROUTE2968.fromField = "value_changed"
ROUTE2968.toNode = "hanim_l_ankle"
ROUTE2968.toField = "set_rotation"

Scene29.children.append(ROUTE2968)
ROUTE2969 = x3d.ROUTE()
ROUTE2969.fromNode = "Jump_l_knee_RotationInterpolator"
ROUTE2969.fromField = "value_changed"
ROUTE2969.toNode = "hanim_l_knee"
ROUTE2969.toField = "set_rotation"

Scene29.children.append(ROUTE2969)
ROUTE2970 = x3d.ROUTE()
ROUTE2970.fromNode = "Jump_l_hip_RotationInterpolator"
ROUTE2970.fromField = "value_changed"
ROUTE2970.toNode = "hanim_l_hip"
ROUTE2970.toField = "set_rotation"

Scene29.children.append(ROUTE2970)
ROUTE2971 = x3d.ROUTE()
ROUTE2971.fromNode = "Jump_lower_body_RotationInterpolator"
ROUTE2971.fromField = "value_changed"
ROUTE2971.toNode = "hanim_sacroiliac"
ROUTE2971.toField = "set_rotation"

Scene29.children.append(ROUTE2971)
ROUTE2972 = x3d.ROUTE()
ROUTE2972.fromNode = "Jump_r_wrist_RotationInterpolator"
ROUTE2972.fromField = "value_changed"
ROUTE2972.toNode = "hanim_r_wrist"
ROUTE2972.toField = "set_rotation"

Scene29.children.append(ROUTE2972)
ROUTE2973 = x3d.ROUTE()
ROUTE2973.fromNode = "Jump_r_elbow_RotationInterpolator"
ROUTE2973.fromField = "value_changed"
ROUTE2973.toNode = "hanim_r_elbow"
ROUTE2973.toField = "set_rotation"

Scene29.children.append(ROUTE2973)
ROUTE2974 = x3d.ROUTE()
ROUTE2974.fromNode = "Jump_r_shoulder_RotationInterpolator"
ROUTE2974.fromField = "value_changed"
ROUTE2974.toNode = "hanim_r_shoulder"
ROUTE2974.toField = "set_rotation"

Scene29.children.append(ROUTE2974)
ROUTE2975 = x3d.ROUTE()
ROUTE2975.fromNode = "Jump_l_wrist_RotationInterpolator"
ROUTE2975.fromField = "value_changed"
ROUTE2975.toNode = "hanim_l_wrist"
ROUTE2975.toField = "set_rotation"

Scene29.children.append(ROUTE2975)
ROUTE2976 = x3d.ROUTE()
ROUTE2976.fromNode = "Jump_l_elbow_RotationInterpolator"
ROUTE2976.fromField = "value_changed"
ROUTE2976.toNode = "hanim_l_elbow"
ROUTE2976.toField = "set_rotation"

Scene29.children.append(ROUTE2976)
ROUTE2977 = x3d.ROUTE()
ROUTE2977.fromNode = "Jump_l_shoulder_RotationInterpolator"
ROUTE2977.fromField = "value_changed"
ROUTE2977.toNode = "hanim_l_shoulder"
ROUTE2977.toField = "set_rotation"

Scene29.children.append(ROUTE2977)
ROUTE2978 = x3d.ROUTE()
ROUTE2978.fromNode = "Jump_head_RotationInterpolator"
ROUTE2978.fromField = "value_changed"
ROUTE2978.toNode = "hanim_skullbase"
ROUTE2978.toField = "set_rotation"

Scene29.children.append(ROUTE2978)
ROUTE2979 = x3d.ROUTE()
ROUTE2979.fromNode = "Jump_neck_RotationInterpolator"
ROUTE2979.fromField = "value_changed"
ROUTE2979.toNode = "hanim_vc4"
ROUTE2979.toField = "set_rotation"

Scene29.children.append(ROUTE2979)
ROUTE2980 = x3d.ROUTE()
ROUTE2980.fromNode = "Jump_upper_body_RotationInterpolator"
ROUTE2980.fromField = "value_changed"
ROUTE2980.toNode = "hanim_vl1"
ROUTE2980.toField = "set_rotation"

Scene29.children.append(ROUTE2980)
ROUTE2981 = x3d.ROUTE()
ROUTE2981.fromNode = "Jump_whole_body_RotationInterpolator"
ROUTE2981.fromField = "value_changed"
ROUTE2981.toNode = "hanim_humanoid_root"
ROUTE2981.toField = "set_rotation"

Scene29.children.append(ROUTE2981)
ROUTE2982 = x3d.ROUTE()
ROUTE2982.fromNode = "Jump_whole_body_TranslationInterpolator"
ROUTE2982.fromField = "value_changed"
ROUTE2982.toNode = "hanim_humanoid_root"
ROUTE2982.toField = "set_translation"

Scene29.children.append(ROUTE2982)
ROUTE2983 = x3d.ROUTE()
ROUTE2983.fromNode = "Jump_l_sternoclavicular_RollInterpolator"
ROUTE2983.fromField = "value_changed"
ROUTE2983.toNode = "hanim_l_sternoclavicular"
ROUTE2983.toField = "set_rotation"

Scene29.children.append(ROUTE2983)
ROUTE2984 = x3d.ROUTE()
ROUTE2984.fromNode = "Jump_l_acromioclavicular_RollInterpolator"
ROUTE2984.fromField = "value_changed"
ROUTE2984.toNode = "hanim_l_acromioclavicular"
ROUTE2984.toField = "set_rotation"

Scene29.children.append(ROUTE2984)
ROUTE2985 = x3d.ROUTE()
ROUTE2985.fromNode = "Jump_r_sternoclavicular_RollInterpolator"
ROUTE2985.fromField = "value_changed"
ROUTE2985.toNode = "hanim_r_sternoclavicular"
ROUTE2985.toField = "set_rotation"

Scene29.children.append(ROUTE2985)
ROUTE2986 = x3d.ROUTE()
ROUTE2986.fromNode = "Jump_r_acromioclavicular_RollInterpolator"
ROUTE2986.fromField = "value_changed"
ROUTE2986.toNode = "hanim_r_acromioclavicular"
ROUTE2986.toField = "set_rotation"

Scene29.children.append(ROUTE2986)
ROUTE2987 = x3d.ROUTE()
ROUTE2987.fromNode = "Jump_r_metatarsal_PitchInterpolator"
ROUTE2987.fromField = "value_changed"
ROUTE2987.toNode = "hanim_l_metatarsal"
ROUTE2987.toField = "set_rotation"

Scene29.children.append(ROUTE2987)
ROUTE2988 = x3d.ROUTE()
ROUTE2988.fromNode = "Jump_r_metatarsal_PitchInterpolator"
ROUTE2988.fromField = "value_changed"
ROUTE2988.toNode = "hanim_r_metatarsal"
ROUTE2988.toField = "set_rotation"

Scene29.children.append(ROUTE2988)
ROUTE2989 = x3d.ROUTE()
ROUTE2989.fromNode = "Jump_sacroiliac_YawInterpolator"
ROUTE2989.fromField = "value_changed"
ROUTE2989.toNode = "hanim_sacroiliac"
ROUTE2989.toField = "set_rotation"

Scene29.children.append(ROUTE2989)
ROUTE2990 = x3d.ROUTE()
ROUTE2990.fromNode = "Jump_vl5_YawInterpolator"
ROUTE2990.fromField = "value_changed"
ROUTE2990.toNode = "hanim_vl5"
ROUTE2990.toField = "set_rotation"

Scene29.children.append(ROUTE2990)
ROUTE2991 = x3d.ROUTE()
ROUTE2991.fromNode = "Jump_vc6_YawInterpolator"
ROUTE2991.fromField = "value_changed"
ROUTE2991.toNode = "hanim_vc6"
ROUTE2991.toField = "set_rotation"

Scene29.children.append(ROUTE2991)
ROUTE2992 = x3d.ROUTE()
ROUTE2992.fromNode = "Jump_l_thumb1_PitchInterpolator"
ROUTE2992.fromField = "value_changed"
ROUTE2992.toNode = "hanim_l_thumb1"
ROUTE2992.toField = "set_rotation"

Scene29.children.append(ROUTE2992)
ROUTE2993 = x3d.ROUTE()
ROUTE2993.fromNode = "Jump_r_thumb1_PitchInterpolator"
ROUTE2993.fromField = "value_changed"
ROUTE2993.toNode = "hanim_r_thumb1"
ROUTE2993.toField = "set_rotation"

Scene29.children.append(ROUTE2993)
ROUTE2994 = x3d.ROUTE()
ROUTE2994.fromNode = "KickTimer"
ROUTE2994.fromField = "fraction_changed"
ROUTE2994.toNode = "Kick_l_sternoclavicular_RollInterpolator"
ROUTE2994.toField = "set_fraction"

Scene29.children.append(ROUTE2994)
ROUTE2995 = x3d.ROUTE()
ROUTE2995.fromNode = "KickTimer"
ROUTE2995.fromField = "fraction_changed"
ROUTE2995.toNode = "Kick_l_acromioclavicular_RollInterpolator"
ROUTE2995.toField = "set_fraction"

Scene29.children.append(ROUTE2995)
ROUTE2996 = x3d.ROUTE()
ROUTE2996.fromNode = "KickTimer"
ROUTE2996.fromField = "fraction_changed"
ROUTE2996.toNode = "Kick_l_shoulder_RollInterpolator"
ROUTE2996.toField = "set_fraction"

Scene29.children.append(ROUTE2996)
ROUTE2997 = x3d.ROUTE()
ROUTE2997.fromNode = "KickTimer"
ROUTE2997.fromField = "fraction_changed"
ROUTE2997.toNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE2997.toField = "set_fraction"

Scene29.children.append(ROUTE2997)
ROUTE2998 = x3d.ROUTE()
ROUTE2998.fromNode = "KickTimer"
ROUTE2998.fromField = "fraction_changed"
ROUTE2998.toNode = "Kick_l_wrist_RollInterpolator"
ROUTE2998.toField = "set_fraction"

Scene29.children.append(ROUTE2998)
ROUTE2999 = x3d.ROUTE()
ROUTE2999.fromNode = "KickTimer"
ROUTE2999.fromField = "fraction_changed"
ROUTE2999.toNode = "Kick_l_thumb1_PitchInterpolator"
ROUTE2999.toField = "set_fraction"

Scene29.children.append(ROUTE2999)
ROUTE3000 = x3d.ROUTE()
ROUTE3000.fromNode = "KickTimer"
ROUTE3000.fromField = "fraction_changed"
ROUTE3000.toNode = "Kick_r_sternoclavicular_RollInterpolator"
ROUTE3000.toField = "set_fraction"

Scene29.children.append(ROUTE3000)
ROUTE3001 = x3d.ROUTE()
ROUTE3001.fromNode = "KickTimer"
ROUTE3001.fromField = "fraction_changed"
ROUTE3001.toNode = "Kick_r_acromioclavicular_RollInterpolator"
ROUTE3001.toField = "set_fraction"

Scene29.children.append(ROUTE3001)
ROUTE3002 = x3d.ROUTE()
ROUTE3002.fromNode = "KickTimer"
ROUTE3002.fromField = "fraction_changed"
ROUTE3002.toNode = "Kick_r_shoulder_RollInterpolator"
ROUTE3002.toField = "set_fraction"

Scene29.children.append(ROUTE3002)
ROUTE3003 = x3d.ROUTE()
ROUTE3003.fromNode = "KickTimer"
ROUTE3003.fromField = "fraction_changed"
ROUTE3003.toNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE3003.toField = "set_fraction"

Scene29.children.append(ROUTE3003)
ROUTE3004 = x3d.ROUTE()
ROUTE3004.fromNode = "KickTimer"
ROUTE3004.fromField = "fraction_changed"
ROUTE3004.toNode = "Kick_r_wrist_RollInterpolator"
ROUTE3004.toField = "set_fraction"

Scene29.children.append(ROUTE3004)
ROUTE3005 = x3d.ROUTE()
ROUTE3005.fromNode = "KickTimer"
ROUTE3005.fromField = "fraction_changed"
ROUTE3005.toNode = "Kick_r_thumb1_PitchInterpolator"
ROUTE3005.toField = "set_fraction"

Scene29.children.append(ROUTE3005)
ROUTE3006 = x3d.ROUTE()
ROUTE3006.fromNode = "KickTimer"
ROUTE3006.fromField = "fraction_changed"
ROUTE3006.toNode = "Kick_r_hip_PitchInterpolator"
ROUTE3006.toField = "set_fraction"

Scene29.children.append(ROUTE3006)
ROUTE3007 = x3d.ROUTE()
ROUTE3007.fromNode = "KickTimer"
ROUTE3007.fromField = "fraction_changed"
ROUTE3007.toNode = "Kick_r_knee_PitchInterpolator"
ROUTE3007.toField = "set_fraction"

Scene29.children.append(ROUTE3007)
ROUTE3008 = x3d.ROUTE()
ROUTE3008.fromNode = "KickTimer"
ROUTE3008.fromField = "fraction_changed"
ROUTE3008.toNode = "Kick_l_hip_PitchInterpolator"
ROUTE3008.toField = "set_fraction"

Scene29.children.append(ROUTE3008)
ROUTE3009 = x3d.ROUTE()
ROUTE3009.fromNode = "KickTimer"
ROUTE3009.fromField = "fraction_changed"
ROUTE3009.toNode = "Kick_l_knee_PitchInterpolator"
ROUTE3009.toField = "set_fraction"

Scene29.children.append(ROUTE3009)
ROUTE3010 = x3d.ROUTE()
ROUTE3010.fromNode = "KickTimer"
ROUTE3010.fromField = "fraction_changed"
ROUTE3010.toNode = "Kick_r_ankle_PitchInterpolator"
ROUTE3010.toField = "set_fraction"

Scene29.children.append(ROUTE3010)
ROUTE3011 = x3d.ROUTE()
ROUTE3011.fromNode = "KickTimer"
ROUTE3011.fromField = "fraction_changed"
ROUTE3011.toNode = "Kick_r_metatarsal_PitchInterpolator"
ROUTE3011.toField = "set_fraction"

Scene29.children.append(ROUTE3011)
ROUTE3012 = x3d.ROUTE()
ROUTE3012.fromNode = "KickTimer"
ROUTE3012.fromField = "fraction_changed"
ROUTE3012.toNode = "Kick_sacroiliac_YawInterpolator"
ROUTE3012.toField = "set_fraction"

Scene29.children.append(ROUTE3012)
ROUTE3013 = x3d.ROUTE()
ROUTE3013.fromNode = "KickTimer"
ROUTE3013.fromField = "fraction_changed"
ROUTE3013.toNode = "Kick_vl5_YawInterpolator"
ROUTE3013.toField = "set_fraction"

Scene29.children.append(ROUTE3013)
ROUTE3014 = x3d.ROUTE()
ROUTE3014.fromNode = "KickTimer"
ROUTE3014.fromField = "fraction_changed"
ROUTE3014.toNode = "Kick_vc6_YawInterpolator"
ROUTE3014.toField = "set_fraction"

Scene29.children.append(ROUTE3014)
ROUTE3015 = x3d.ROUTE()
ROUTE3015.fromNode = "KickTimer"
ROUTE3015.fromField = "fraction_changed"
ROUTE3015.toNode = "Kick_lower_body_RotationInterpolator"
ROUTE3015.toField = "set_fraction"

Scene29.children.append(ROUTE3015)
ROUTE3016 = x3d.ROUTE()
ROUTE3016.fromNode = "KickTimer"
ROUTE3016.fromField = "fraction_changed"
ROUTE3016.toNode = "Kick_upper_body_RotationInterpolator"
ROUTE3016.toField = "set_fraction"

Scene29.children.append(ROUTE3016)
ROUTE3017 = x3d.ROUTE()
ROUTE3017.fromNode = "KickTimer"
ROUTE3017.fromField = "fraction_changed"
ROUTE3017.toNode = "Kick_whole_body_RotationInterpolator"
ROUTE3017.toField = "set_fraction"

Scene29.children.append(ROUTE3017)
ROUTE3018 = x3d.ROUTE()
ROUTE3018.fromNode = "KickTimer"
ROUTE3018.fromField = "fraction_changed"
ROUTE3018.toNode = "Kick_whole_body_TranslationInterpolator"
ROUTE3018.toField = "set_fraction"

Scene29.children.append(ROUTE3018)
ROUTE3019 = x3d.ROUTE()
ROUTE3019.fromNode = "KickTimer"
ROUTE3019.fromField = "fraction_changed"
ROUTE3019.toNode = "Kick_neck_RotationInterpolator"
ROUTE3019.toField = "set_fraction"

Scene29.children.append(ROUTE3019)
ROUTE3020 = x3d.ROUTE()
ROUTE3020.fromNode = "Kick_l_sternoclavicular_RollInterpolator"
ROUTE3020.fromField = "value_changed"
ROUTE3020.toNode = "hanim_l_sternoclavicular"
ROUTE3020.toField = "set_rotation"

Scene29.children.append(ROUTE3020)
ROUTE3021 = x3d.ROUTE()
ROUTE3021.fromNode = "Kick_l_acromioclavicular_RollInterpolator"
ROUTE3021.fromField = "value_changed"
ROUTE3021.toNode = "hanim_l_acromioclavicular"
ROUTE3021.toField = "set_rotation"

Scene29.children.append(ROUTE3021)
ROUTE3022 = x3d.ROUTE()
ROUTE3022.fromNode = "Kick_l_shoulder_RollInterpolator"
ROUTE3022.fromField = "value_changed"
ROUTE3022.toNode = "hanim_l_shoulder"
ROUTE3022.toField = "set_rotation"

Scene29.children.append(ROUTE3022)
ROUTE3023 = x3d.ROUTE()
ROUTE3023.fromNode = "Kick_l_ForeArm_PitchInterpolator"
ROUTE3023.fromField = "value_changed"
ROUTE3023.toNode = "hanim_l_elbow"
ROUTE3023.toField = "set_rotation"

Scene29.children.append(ROUTE3023)
ROUTE3024 = x3d.ROUTE()
ROUTE3024.fromNode = "Kick_l_wrist_RollInterpolator"
ROUTE3024.fromField = "value_changed"
ROUTE3024.toNode = "hanim_l_wrist"
ROUTE3024.toField = "set_rotation"

Scene29.children.append(ROUTE3024)
ROUTE3025 = x3d.ROUTE()
ROUTE3025.fromNode = "Kick_l_thumb1_PitchInterpolator"
ROUTE3025.fromField = "value_changed"
ROUTE3025.toNode = "hanim_l_thumb1"
ROUTE3025.toField = "set_rotation"

Scene29.children.append(ROUTE3025)
ROUTE3026 = x3d.ROUTE()
ROUTE3026.fromNode = "Kick_r_sternoclavicular_RollInterpolator"
ROUTE3026.fromField = "value_changed"
ROUTE3026.toNode = "hanim_r_sternoclavicular"
ROUTE3026.toField = "set_rotation"

Scene29.children.append(ROUTE3026)
ROUTE3027 = x3d.ROUTE()
ROUTE3027.fromNode = "Kick_r_acromioclavicular_RollInterpolator"
ROUTE3027.fromField = "value_changed"
ROUTE3027.toNode = "hanim_r_acromioclavicular"
ROUTE3027.toField = "set_rotation"

Scene29.children.append(ROUTE3027)
ROUTE3028 = x3d.ROUTE()
ROUTE3028.fromNode = "Kick_r_shoulder_RollInterpolator"
ROUTE3028.fromField = "value_changed"
ROUTE3028.toNode = "hanim_r_shoulder"
ROUTE3028.toField = "set_rotation"

Scene29.children.append(ROUTE3028)
ROUTE3029 = x3d.ROUTE()
ROUTE3029.fromNode = "Kick_r_ForeArm_PitchInterpolator"
ROUTE3029.fromField = "value_changed"
ROUTE3029.toNode = "hanim_r_elbow"
ROUTE3029.toField = "set_rotation"

Scene29.children.append(ROUTE3029)
ROUTE3030 = x3d.ROUTE()
ROUTE3030.fromNode = "Kick_r_wrist_RollInterpolator"
ROUTE3030.fromField = "value_changed"
ROUTE3030.toNode = "hanim_r_wrist"
ROUTE3030.toField = "set_rotation"

Scene29.children.append(ROUTE3030)
ROUTE3031 = x3d.ROUTE()
ROUTE3031.fromNode = "Kick_r_thumb1_PitchInterpolator"
ROUTE3031.fromField = "value_changed"
ROUTE3031.toNode = "hanim_r_thumb1"
ROUTE3031.toField = "set_rotation"

Scene29.children.append(ROUTE3031)
ROUTE3032 = x3d.ROUTE()
ROUTE3032.fromNode = "Kick_r_hip_PitchInterpolator"
ROUTE3032.fromField = "value_changed"
ROUTE3032.toNode = "hanim_r_hip"
ROUTE3032.toField = "set_rotation"

Scene29.children.append(ROUTE3032)
ROUTE3033 = x3d.ROUTE()
ROUTE3033.fromNode = "Kick_r_knee_PitchInterpolator"
ROUTE3033.fromField = "value_changed"
ROUTE3033.toNode = "hanim_r_knee"
ROUTE3033.toField = "set_rotation"

Scene29.children.append(ROUTE3033)
ROUTE3034 = x3d.ROUTE()
ROUTE3034.fromNode = "Kick_r_ankle_PitchInterpolator"
ROUTE3034.fromField = "value_changed"
ROUTE3034.toNode = "hanim_r_ankle"
ROUTE3034.toField = "set_rotation"

Scene29.children.append(ROUTE3034)
ROUTE3035 = x3d.ROUTE()
ROUTE3035.fromNode = "Kick_r_metatarsal_PitchInterpolator"
ROUTE3035.fromField = "value_changed"
ROUTE3035.toNode = "hanim_r_metatarsal"
ROUTE3035.toField = "set_rotation"

Scene29.children.append(ROUTE3035)
ROUTE3036 = x3d.ROUTE()
ROUTE3036.fromNode = "Kick_l_hip_PitchInterpolator"
ROUTE3036.fromField = "value_changed"
ROUTE3036.toNode = "hanim_l_hip"
ROUTE3036.toField = "set_rotation"

Scene29.children.append(ROUTE3036)
ROUTE3037 = x3d.ROUTE()
ROUTE3037.fromNode = "Kick_l_knee_PitchInterpolator"
ROUTE3037.fromField = "value_changed"
ROUTE3037.toNode = "hanim_l_knee"
ROUTE3037.toField = "set_rotation"

Scene29.children.append(ROUTE3037)
ROUTE3038 = x3d.ROUTE()
ROUTE3038.fromNode = "Kick_r_ankle_PitchInterpolator"
ROUTE3038.fromField = "value_changed"
ROUTE3038.toNode = "hanim_l_ankle"
ROUTE3038.toField = "set_rotation"

Scene29.children.append(ROUTE3038)
ROUTE3039 = x3d.ROUTE()
ROUTE3039.fromNode = "Kick_r_metatarsal_PitchInterpolator"
ROUTE3039.fromField = "value_changed"
ROUTE3039.toNode = "hanim_l_metatarsal"
ROUTE3039.toField = "set_rotation"

Scene29.children.append(ROUTE3039)
ROUTE3040 = x3d.ROUTE()
ROUTE3040.fromNode = "Kick_sacroiliac_YawInterpolator"
ROUTE3040.fromField = "value_changed"
ROUTE3040.toNode = "hanim_sacroiliac"
ROUTE3040.toField = "set_rotation"

Scene29.children.append(ROUTE3040)
ROUTE3041 = x3d.ROUTE()
ROUTE3041.fromNode = "Kick_vl5_YawInterpolator"
ROUTE3041.fromField = "value_changed"
ROUTE3041.toNode = "hanim_vl5"
ROUTE3041.toField = "set_rotation"

Scene29.children.append(ROUTE3041)
ROUTE3042 = x3d.ROUTE()
ROUTE3042.fromNode = "Kick_vc6_YawInterpolator"
ROUTE3042.fromField = "value_changed"
ROUTE3042.toNode = "hanim_vc6"
ROUTE3042.toField = "set_rotation"

Scene29.children.append(ROUTE3042)
ROUTE3043 = x3d.ROUTE()
ROUTE3043.fromNode = "Kick_upper_body_RotationInterpolator"
ROUTE3043.fromField = "value_changed"
ROUTE3043.toNode = "hanim_vl1"
ROUTE3043.toField = "set_rotation"

Scene29.children.append(ROUTE3043)
ROUTE3044 = x3d.ROUTE()
ROUTE3044.fromNode = "Kick_lower_body_RotationInterpolator"
ROUTE3044.fromField = "value_changed"
ROUTE3044.toNode = "hanim_sacroiliac"
ROUTE3044.toField = "set_rotation"

Scene29.children.append(ROUTE3044)
ROUTE3045 = x3d.ROUTE()
ROUTE3045.fromNode = "Kick_whole_body_RotationInterpolator"
ROUTE3045.fromField = "value_changed"
ROUTE3045.toNode = "hanim_humanoid_root"
ROUTE3045.toField = "set_rotation"

Scene29.children.append(ROUTE3045)
ROUTE3046 = x3d.ROUTE()
ROUTE3046.fromNode = "Kick_whole_body_TranslationInterpolator"
ROUTE3046.fromField = "value_changed"
ROUTE3046.toNode = "hanim_humanoid_root"
ROUTE3046.toField = "set_translation"

Scene29.children.append(ROUTE3046)
ROUTE3047 = x3d.ROUTE()
ROUTE3047.fromNode = "Kick_neck_RotationInterpolator"
ROUTE3047.fromField = "value_changed"
ROUTE3047.toNode = "hanim_vc4"
ROUTE3047.toField = "set_rotation"

Scene29.children.append(ROUTE3047)
ROUTE3048 = x3d.ROUTE()
ROUTE3048.fromNode = "HudProximitySensor"
ROUTE3048.fromField = "position_changed"
ROUTE3048.toNode = "HudXform"
ROUTE3048.toField = "set_translation"

Scene29.children.append(ROUTE3048)
ROUTE3049 = x3d.ROUTE()
ROUTE3049.fromNode = "HudProximitySensor"
ROUTE3049.fromField = "orientation_changed"
ROUTE3049.toNode = "HudXform"
ROUTE3049.toField = "set_rotation"

Scene29.children.append(ROUTE3049)
ROUTE3050 = x3d.ROUTE()
ROUTE3050.fromNode = "Stand_Touch"
ROUTE3050.fromField = "touchTime"
ROUTE3050.toNode = "PitchTimer"
ROUTE3050.toField = "set_stopTime"

Scene29.children.append(ROUTE3050)
ROUTE3051 = x3d.ROUTE()
ROUTE3051.fromNode = "Stand_Touch"
ROUTE3051.fromField = "touchTime"
ROUTE3051.toNode = "YawTimer"
ROUTE3051.toField = "set_stopTime"

Scene29.children.append(ROUTE3051)
ROUTE3052 = x3d.ROUTE()
ROUTE3052.fromNode = "Stand_Touch"
ROUTE3052.fromField = "touchTime"
ROUTE3052.toNode = "RollTimer"
ROUTE3052.toField = "set_stopTime"

Scene29.children.append(ROUTE3052)
ROUTE3053 = x3d.ROUTE()
ROUTE3053.fromNode = "Stand_Touch"
ROUTE3053.fromField = "touchTime"
ROUTE3053.toNode = "WalkTimer"
ROUTE3053.toField = "set_stopTime"

Scene29.children.append(ROUTE3053)
ROUTE3054 = x3d.ROUTE()
ROUTE3054.fromNode = "Stand_Touch"
ROUTE3054.fromField = "touchTime"
ROUTE3054.toNode = "RunTimer"
ROUTE3054.toField = "set_stopTime"

Scene29.children.append(ROUTE3054)
ROUTE3055 = x3d.ROUTE()
ROUTE3055.fromNode = "Stand_Touch"
ROUTE3055.fromField = "touchTime"
ROUTE3055.toNode = "JumpTimer"
ROUTE3055.toField = "set_stopTime"

Scene29.children.append(ROUTE3055)
ROUTE3056 = x3d.ROUTE()
ROUTE3056.fromNode = "Stand_Touch"
ROUTE3056.fromField = "touchTime"
ROUTE3056.toNode = "KickTimer"
ROUTE3056.toField = "set_stopTime"

Scene29.children.append(ROUTE3056)
ROUTE3057 = x3d.ROUTE()
ROUTE3057.fromNode = "Stand_Touch"
ROUTE3057.fromField = "touchTime"
ROUTE3057.toNode = "StopTimer"
ROUTE3057.toField = "set_stopTime"

Scene29.children.append(ROUTE3057)
ROUTE3058 = x3d.ROUTE()
ROUTE3058.fromNode = "Stand_Touch"
ROUTE3058.fromField = "touchTime"
ROUTE3058.toNode = "StandTimer"
ROUTE3058.toField = "set_startTime"

Scene29.children.append(ROUTE3058)
ROUTE3059 = x3d.ROUTE()
ROUTE3059.fromNode = "Pitch_Touch"
ROUTE3059.fromField = "touchTime"
ROUTE3059.toNode = "StandTimer"
ROUTE3059.toField = "set_stopTime"

Scene29.children.append(ROUTE3059)
ROUTE3060 = x3d.ROUTE()
ROUTE3060.fromNode = "Pitch_Touch"
ROUTE3060.fromField = "touchTime"
ROUTE3060.toNode = "YawTimer"
ROUTE3060.toField = "set_stopTime"

Scene29.children.append(ROUTE3060)
ROUTE3061 = x3d.ROUTE()
ROUTE3061.fromNode = "Pitch_Touch"
ROUTE3061.fromField = "touchTime"
ROUTE3061.toNode = "RollTimer"
ROUTE3061.toField = "set_stopTime"

Scene29.children.append(ROUTE3061)
ROUTE3062 = x3d.ROUTE()
ROUTE3062.fromNode = "Pitch_Touch"
ROUTE3062.fromField = "touchTime"
ROUTE3062.toNode = "WalkTimer"
ROUTE3062.toField = "set_stopTime"

Scene29.children.append(ROUTE3062)
ROUTE3063 = x3d.ROUTE()
ROUTE3063.fromNode = "Pitch_Touch"
ROUTE3063.fromField = "touchTime"
ROUTE3063.toNode = "RunTimer"
ROUTE3063.toField = "set_stopTime"

Scene29.children.append(ROUTE3063)
ROUTE3064 = x3d.ROUTE()
ROUTE3064.fromNode = "Pitch_Touch"
ROUTE3064.fromField = "touchTime"
ROUTE3064.toNode = "JumpTimer"
ROUTE3064.toField = "set_stopTime"

Scene29.children.append(ROUTE3064)
ROUTE3065 = x3d.ROUTE()
ROUTE3065.fromNode = "Pitch_Touch"
ROUTE3065.fromField = "touchTime"
ROUTE3065.toNode = "KickTimer"
ROUTE3065.toField = "set_stopTime"

Scene29.children.append(ROUTE3065)
ROUTE3066 = x3d.ROUTE()
ROUTE3066.fromNode = "Pitch_Touch"
ROUTE3066.fromField = "touchTime"
ROUTE3066.toNode = "StopTimer"
ROUTE3066.toField = "set_stopTime"

Scene29.children.append(ROUTE3066)
ROUTE3067 = x3d.ROUTE()
ROUTE3067.fromNode = "Pitch_Touch"
ROUTE3067.fromField = "touchTime"
ROUTE3067.toNode = "PitchTimer"
ROUTE3067.toField = "set_startTime"

Scene29.children.append(ROUTE3067)
ROUTE3068 = x3d.ROUTE()
ROUTE3068.fromNode = "Yaw_Touch"
ROUTE3068.fromField = "touchTime"
ROUTE3068.toNode = "StandTimer"
ROUTE3068.toField = "set_stopTime"

Scene29.children.append(ROUTE3068)
ROUTE3069 = x3d.ROUTE()
ROUTE3069.fromNode = "Yaw_Touch"
ROUTE3069.fromField = "touchTime"
ROUTE3069.toNode = "PitchTimer"
ROUTE3069.toField = "set_stopTime"

Scene29.children.append(ROUTE3069)
ROUTE3070 = x3d.ROUTE()
ROUTE3070.fromNode = "Yaw_Touch"
ROUTE3070.fromField = "touchTime"
ROUTE3070.toNode = "RollTimer"
ROUTE3070.toField = "set_stopTime"

Scene29.children.append(ROUTE3070)
ROUTE3071 = x3d.ROUTE()
ROUTE3071.fromNode = "Yaw_Touch"
ROUTE3071.fromField = "touchTime"
ROUTE3071.toNode = "WalkTimer"
ROUTE3071.toField = "set_stopTime"

Scene29.children.append(ROUTE3071)
ROUTE3072 = x3d.ROUTE()
ROUTE3072.fromNode = "Yaw_Touch"
ROUTE3072.fromField = "touchTime"
ROUTE3072.toNode = "RunTimer"
ROUTE3072.toField = "set_stopTime"

Scene29.children.append(ROUTE3072)
ROUTE3073 = x3d.ROUTE()
ROUTE3073.fromNode = "Yaw_Touch"
ROUTE3073.fromField = "touchTime"
ROUTE3073.toNode = "JumpTimer"
ROUTE3073.toField = "set_stopTime"

Scene29.children.append(ROUTE3073)
ROUTE3074 = x3d.ROUTE()
ROUTE3074.fromNode = "Yaw_Touch"
ROUTE3074.fromField = "touchTime"
ROUTE3074.toNode = "KickTimer"
ROUTE3074.toField = "set_stopTime"

Scene29.children.append(ROUTE3074)
ROUTE3075 = x3d.ROUTE()
ROUTE3075.fromNode = "Yaw_Touch"
ROUTE3075.fromField = "touchTime"
ROUTE3075.toNode = "StopTimer"
ROUTE3075.toField = "set_stopTime"

Scene29.children.append(ROUTE3075)
ROUTE3076 = x3d.ROUTE()
ROUTE3076.fromNode = "Yaw_Touch"
ROUTE3076.fromField = "touchTime"
ROUTE3076.toNode = "YawTimer"
ROUTE3076.toField = "set_startTime"

Scene29.children.append(ROUTE3076)
ROUTE3077 = x3d.ROUTE()
ROUTE3077.fromNode = "Walk_Touch"
ROUTE3077.fromField = "touchTime"
ROUTE3077.toNode = "StandTimer"
ROUTE3077.toField = "set_stopTime"

Scene29.children.append(ROUTE3077)
ROUTE3078 = x3d.ROUTE()
ROUTE3078.fromNode = "Walk_Touch"
ROUTE3078.fromField = "touchTime"
ROUTE3078.toNode = "PitchTimer"
ROUTE3078.toField = "set_stopTime"

Scene29.children.append(ROUTE3078)
ROUTE3079 = x3d.ROUTE()
ROUTE3079.fromNode = "Walk_Touch"
ROUTE3079.fromField = "touchTime"
ROUTE3079.toNode = "YawTimer"
ROUTE3079.toField = "set_stopTime"

Scene29.children.append(ROUTE3079)
ROUTE3080 = x3d.ROUTE()
ROUTE3080.fromNode = "Walk_Touch"
ROUTE3080.fromField = "touchTime"
ROUTE3080.toNode = "RollTimer"
ROUTE3080.toField = "set_stopTime"

Scene29.children.append(ROUTE3080)
ROUTE3081 = x3d.ROUTE()
ROUTE3081.fromNode = "Walk_Touch"
ROUTE3081.fromField = "touchTime"
ROUTE3081.toNode = "RunTimer"
ROUTE3081.toField = "set_stopTime"

Scene29.children.append(ROUTE3081)
ROUTE3082 = x3d.ROUTE()
ROUTE3082.fromNode = "Walk_Touch"
ROUTE3082.fromField = "touchTime"
ROUTE3082.toNode = "JumpTimer"
ROUTE3082.toField = "set_stopTime"

Scene29.children.append(ROUTE3082)
ROUTE3083 = x3d.ROUTE()
ROUTE3083.fromNode = "Walk_Touch"
ROUTE3083.fromField = "touchTime"
ROUTE3083.toNode = "KickTimer"
ROUTE3083.toField = "set_stopTime"

Scene29.children.append(ROUTE3083)
ROUTE3084 = x3d.ROUTE()
ROUTE3084.fromNode = "Walk_Touch"
ROUTE3084.fromField = "touchTime"
ROUTE3084.toNode = "StopTimer"
ROUTE3084.toField = "set_stopTime"

Scene29.children.append(ROUTE3084)
ROUTE3085 = x3d.ROUTE()
ROUTE3085.fromNode = "Walk_Touch"
ROUTE3085.fromField = "touchTime"
ROUTE3085.toNode = "WalkTimer"
ROUTE3085.toField = "set_startTime"

Scene29.children.append(ROUTE3085)
ROUTE3086 = x3d.ROUTE()
ROUTE3086.fromNode = "Roll_Touch"
ROUTE3086.fromField = "touchTime"
ROUTE3086.toNode = "StandTimer"
ROUTE3086.toField = "set_stopTime"

Scene29.children.append(ROUTE3086)
ROUTE3087 = x3d.ROUTE()
ROUTE3087.fromNode = "Roll_Touch"
ROUTE3087.fromField = "touchTime"
ROUTE3087.toNode = "PitchTimer"
ROUTE3087.toField = "set_stopTime"

Scene29.children.append(ROUTE3087)
ROUTE3088 = x3d.ROUTE()
ROUTE3088.fromNode = "Roll_Touch"
ROUTE3088.fromField = "touchTime"
ROUTE3088.toNode = "YawTimer"
ROUTE3088.toField = "set_stopTime"

Scene29.children.append(ROUTE3088)
ROUTE3089 = x3d.ROUTE()
ROUTE3089.fromNode = "Roll_Touch"
ROUTE3089.fromField = "touchTime"
ROUTE3089.toNode = "WalkTimer"
ROUTE3089.toField = "set_stopTime"

Scene29.children.append(ROUTE3089)
ROUTE3090 = x3d.ROUTE()
ROUTE3090.fromNode = "Roll_Touch"
ROUTE3090.fromField = "touchTime"
ROUTE3090.toNode = "RunTimer"
ROUTE3090.toField = "set_stopTime"

Scene29.children.append(ROUTE3090)
ROUTE3091 = x3d.ROUTE()
ROUTE3091.fromNode = "Roll_Touch"
ROUTE3091.fromField = "touchTime"
ROUTE3091.toNode = "JumpTimer"
ROUTE3091.toField = "set_stopTime"

Scene29.children.append(ROUTE3091)
ROUTE3092 = x3d.ROUTE()
ROUTE3092.fromNode = "Roll_Touch"
ROUTE3092.fromField = "touchTime"
ROUTE3092.toNode = "KickTimer"
ROUTE3092.toField = "set_stopTime"

Scene29.children.append(ROUTE3092)
ROUTE3093 = x3d.ROUTE()
ROUTE3093.fromNode = "Roll_Touch"
ROUTE3093.fromField = "touchTime"
ROUTE3093.toNode = "StopTimer"
ROUTE3093.toField = "set_stopTime"

Scene29.children.append(ROUTE3093)
ROUTE3094 = x3d.ROUTE()
ROUTE3094.fromNode = "Roll_Touch"
ROUTE3094.fromField = "touchTime"
ROUTE3094.toNode = "RollTimer"
ROUTE3094.toField = "set_startTime"

Scene29.children.append(ROUTE3094)
ROUTE3095 = x3d.ROUTE()
ROUTE3095.fromNode = "Run_Touch"
ROUTE3095.fromField = "touchTime"
ROUTE3095.toNode = "StandTimer"
ROUTE3095.toField = "set_stopTime"

Scene29.children.append(ROUTE3095)
ROUTE3096 = x3d.ROUTE()
ROUTE3096.fromNode = "Run_Touch"
ROUTE3096.fromField = "touchTime"
ROUTE3096.toNode = "PitchTimer"
ROUTE3096.toField = "set_stopTime"

Scene29.children.append(ROUTE3096)
ROUTE3097 = x3d.ROUTE()
ROUTE3097.fromNode = "Run_Touch"
ROUTE3097.fromField = "touchTime"
ROUTE3097.toNode = "YawTimer"
ROUTE3097.toField = "set_stopTime"

Scene29.children.append(ROUTE3097)
ROUTE3098 = x3d.ROUTE()
ROUTE3098.fromNode = "Run_Touch"
ROUTE3098.fromField = "touchTime"
ROUTE3098.toNode = "RollTimer"
ROUTE3098.toField = "set_stopTime"

Scene29.children.append(ROUTE3098)
ROUTE3099 = x3d.ROUTE()
ROUTE3099.fromNode = "Run_Touch"
ROUTE3099.fromField = "touchTime"
ROUTE3099.toNode = "WalkTimer"
ROUTE3099.toField = "set_stopTime"

Scene29.children.append(ROUTE3099)
ROUTE3100 = x3d.ROUTE()
ROUTE3100.fromNode = "Run_Touch"
ROUTE3100.fromField = "touchTime"
ROUTE3100.toNode = "JumpTimer"
ROUTE3100.toField = "set_stopTime"

Scene29.children.append(ROUTE3100)
ROUTE3101 = x3d.ROUTE()
ROUTE3101.fromNode = "Run_Touch"
ROUTE3101.fromField = "touchTime"
ROUTE3101.toNode = "KickTimer"
ROUTE3101.toField = "set_stopTime"

Scene29.children.append(ROUTE3101)
ROUTE3102 = x3d.ROUTE()
ROUTE3102.fromNode = "Run_Touch"
ROUTE3102.fromField = "touchTime"
ROUTE3102.toNode = "StopTimer"
ROUTE3102.toField = "set_stopTime"

Scene29.children.append(ROUTE3102)
ROUTE3103 = x3d.ROUTE()
ROUTE3103.fromNode = "Run_Touch"
ROUTE3103.fromField = "touchTime"
ROUTE3103.toNode = "RunTimer"
ROUTE3103.toField = "set_startTime"

Scene29.children.append(ROUTE3103)
ROUTE3104 = x3d.ROUTE()
ROUTE3104.fromNode = "Jump_Touch"
ROUTE3104.fromField = "touchTime"
ROUTE3104.toNode = "StandTimer"
ROUTE3104.toField = "set_stopTime"

Scene29.children.append(ROUTE3104)
ROUTE3105 = x3d.ROUTE()
ROUTE3105.fromNode = "Jump_Touch"
ROUTE3105.fromField = "touchTime"
ROUTE3105.toNode = "PitchTimer"
ROUTE3105.toField = "set_stopTime"

Scene29.children.append(ROUTE3105)
ROUTE3106 = x3d.ROUTE()
ROUTE3106.fromNode = "Jump_Touch"
ROUTE3106.fromField = "touchTime"
ROUTE3106.toNode = "YawTimer"
ROUTE3106.toField = "set_stopTime"

Scene29.children.append(ROUTE3106)
ROUTE3107 = x3d.ROUTE()
ROUTE3107.fromNode = "Jump_Touch"
ROUTE3107.fromField = "touchTime"
ROUTE3107.toNode = "RollTimer"
ROUTE3107.toField = "set_stopTime"

Scene29.children.append(ROUTE3107)
ROUTE3108 = x3d.ROUTE()
ROUTE3108.fromNode = "Jump_Touch"
ROUTE3108.fromField = "touchTime"
ROUTE3108.toNode = "WalkTimer"
ROUTE3108.toField = "set_stopTime"

Scene29.children.append(ROUTE3108)
ROUTE3109 = x3d.ROUTE()
ROUTE3109.fromNode = "Jump_Touch"
ROUTE3109.fromField = "touchTime"
ROUTE3109.toNode = "RunTimer"
ROUTE3109.toField = "set_stopTime"

Scene29.children.append(ROUTE3109)
ROUTE3110 = x3d.ROUTE()
ROUTE3110.fromNode = "Jump_Touch"
ROUTE3110.fromField = "touchTime"
ROUTE3110.toNode = "KickTimer"
ROUTE3110.toField = "set_stopTime"

Scene29.children.append(ROUTE3110)
ROUTE3111 = x3d.ROUTE()
ROUTE3111.fromNode = "Jump_Touch"
ROUTE3111.fromField = "touchTime"
ROUTE3111.toNode = "StopTimer"
ROUTE3111.toField = "set_stopTime"

Scene29.children.append(ROUTE3111)
ROUTE3112 = x3d.ROUTE()
ROUTE3112.fromNode = "Jump_Touch"
ROUTE3112.fromField = "touchTime"
ROUTE3112.toNode = "JumpTimer"
ROUTE3112.toField = "set_startTime"

Scene29.children.append(ROUTE3112)
ROUTE3113 = x3d.ROUTE()
ROUTE3113.fromNode = "Kick_Touch"
ROUTE3113.fromField = "touchTime"
ROUTE3113.toNode = "StandTimer"
ROUTE3113.toField = "set_stopTime"

Scene29.children.append(ROUTE3113)
ROUTE3114 = x3d.ROUTE()
ROUTE3114.fromNode = "Kick_Touch"
ROUTE3114.fromField = "touchTime"
ROUTE3114.toNode = "PitchTimer"
ROUTE3114.toField = "set_stopTime"

Scene29.children.append(ROUTE3114)
ROUTE3115 = x3d.ROUTE()
ROUTE3115.fromNode = "Kick_Touch"
ROUTE3115.fromField = "touchTime"
ROUTE3115.toNode = "YawTimer"
ROUTE3115.toField = "set_stopTime"

Scene29.children.append(ROUTE3115)
ROUTE3116 = x3d.ROUTE()
ROUTE3116.fromNode = "Kick_Touch"
ROUTE3116.fromField = "touchTime"
ROUTE3116.toNode = "RollTimer"
ROUTE3116.toField = "set_stopTime"

Scene29.children.append(ROUTE3116)
ROUTE3117 = x3d.ROUTE()
ROUTE3117.fromNode = "Kick_Touch"
ROUTE3117.fromField = "touchTime"
ROUTE3117.toNode = "WalkTimer"
ROUTE3117.toField = "set_stopTime"

Scene29.children.append(ROUTE3117)
ROUTE3118 = x3d.ROUTE()
ROUTE3118.fromNode = "Kick_Touch"
ROUTE3118.fromField = "touchTime"
ROUTE3118.toNode = "RunTimer"
ROUTE3118.toField = "set_stopTime"

Scene29.children.append(ROUTE3118)
ROUTE3119 = x3d.ROUTE()
ROUTE3119.fromNode = "Kick_Touch"
ROUTE3119.fromField = "touchTime"
ROUTE3119.toNode = "JumpTimer"
ROUTE3119.toField = "set_stopTime"

Scene29.children.append(ROUTE3119)
ROUTE3120 = x3d.ROUTE()
ROUTE3120.fromNode = "Kick_Touch"
ROUTE3120.fromField = "touchTime"
ROUTE3120.toNode = "StopTimer"
ROUTE3120.toField = "set_stopTime"

Scene29.children.append(ROUTE3120)
ROUTE3121 = x3d.ROUTE()
ROUTE3121.fromNode = "Kick_Touch"
ROUTE3121.fromField = "touchTime"
ROUTE3121.toNode = "KickTimer"
ROUTE3121.toField = "set_startTime"

Scene29.children.append(ROUTE3121)
ROUTE3122 = x3d.ROUTE()
ROUTE3122.fromNode = "Stop_Touch"
ROUTE3122.fromField = "touchTime"
ROUTE3122.toNode = "StandTimer"
ROUTE3122.toField = "set_stopTime"

Scene29.children.append(ROUTE3122)
ROUTE3123 = x3d.ROUTE()
ROUTE3123.fromNode = "Stop_Touch"
ROUTE3123.fromField = "touchTime"
ROUTE3123.toNode = "PitchTimer"
ROUTE3123.toField = "set_stopTime"

Scene29.children.append(ROUTE3123)
ROUTE3124 = x3d.ROUTE()
ROUTE3124.fromNode = "Stop_Touch"
ROUTE3124.fromField = "touchTime"
ROUTE3124.toNode = "YawTimer"
ROUTE3124.toField = "set_stopTime"

Scene29.children.append(ROUTE3124)
ROUTE3125 = x3d.ROUTE()
ROUTE3125.fromNode = "Stop_Touch"
ROUTE3125.fromField = "touchTime"
ROUTE3125.toNode = "RollTimer"
ROUTE3125.toField = "set_stopTime"

Scene29.children.append(ROUTE3125)
ROUTE3126 = x3d.ROUTE()
ROUTE3126.fromNode = "Stop_Touch"
ROUTE3126.fromField = "touchTime"
ROUTE3126.toNode = "WalkTimer"
ROUTE3126.toField = "set_stopTime"

Scene29.children.append(ROUTE3126)
ROUTE3127 = x3d.ROUTE()
ROUTE3127.fromNode = "Stop_Touch"
ROUTE3127.fromField = "touchTime"
ROUTE3127.toNode = "RunTimer"
ROUTE3127.toField = "set_stopTime"

Scene29.children.append(ROUTE3127)
ROUTE3128 = x3d.ROUTE()
ROUTE3128.fromNode = "Stop_Touch"
ROUTE3128.fromField = "touchTime"
ROUTE3128.toNode = "JumpTimer"
ROUTE3128.toField = "set_stopTime"

Scene29.children.append(ROUTE3128)
ROUTE3129 = x3d.ROUTE()
ROUTE3129.fromNode = "Stop_Touch"
ROUTE3129.fromField = "touchTime"
ROUTE3129.toNode = "KickTimer"
ROUTE3129.toField = "set_stopTime"

Scene29.children.append(ROUTE3129)
ROUTE3130 = x3d.ROUTE()
ROUTE3130.fromNode = "Stop_Touch"
ROUTE3130.fromField = "touchTime"
ROUTE3130.toNode = "StopTimer"
ROUTE3130.toField = "set_startTime"

Scene29.children.append(ROUTE3130)

X3D0.Scene = Scene29
f = open("../data/HAnim1SpecificationLOA3Animation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Animation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Animation.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

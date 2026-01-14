import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("HAnimSpecificationLOA3Illustrated.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("reference")
meta5.setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("reference")
meta6.setContent("HAnimSpecificationLOA3Invisible.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("HAnimSpecificationLOA3Animation.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("created")
meta16.setContent("24 April 2013")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("modified")
meta17.setContent("Tue, 09 Sep 2025 19:39:08 GMT")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("error")
meta18.setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("creator")
meta19.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("HAnimSpecificationLOA3Illustrated.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("HAnimSpecificationLOA3IllustratedLeftSide.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("Image")
meta22.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("Image")
meta24.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("TODO")
meta25.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("TODO")
meta26.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("warning")
meta27.setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("translator")
meta28.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("generator")
meta29.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("generator")
meta30.setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta30)

X3D0.setHead(head1)
Scene31 = x3d.Scene()
Background32 = x3d.Background()
Background32.setSkyColor(x3d.doubleToFloat([0.3,0.3,0.3]))

Scene31.addChild(Background32)
NavigationInfo33 = x3d.NavigationInfo()

Scene31.addChild(NavigationInfo33)
Group34 = x3d.Group()
Group34.setDEF("Original_WorldInfo")
WorldInfo35 = x3d.WorldInfo()
WorldInfo35.setTitle("HANIM 200x Default Joint Centers, LOA3")
WorldInfo35.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group34.addChild(WorldInfo35)

Scene31.addChild(Group34)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.setDescription("Humanoid LOA 3 Front")
Viewpoint36.setPosition(x3d.doubleToFloat([0,0.4,4]))
Viewpoint36.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setDescription("Humanoid LOA 3 Front Close")
Viewpoint37.setPosition(x3d.doubleToFloat([0,0.8,2]))
Viewpoint37.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint38.setPosition(x3d.doubleToFloat([0,1.2,1]))
Viewpoint38.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setDescription("Humanoid LOA 3 Front Face")
Viewpoint39.setPosition(x3d.doubleToFloat([0,1.63,1]))
Viewpoint39.setCenterOfRotation(x3d.doubleToFloat([0,1.5,0.0016]))

Scene31.addChild(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setDescription("Humanoid LOA 3 Right Side")
Viewpoint40.setPosition(x3d.doubleToFloat([2.6,0.8,0]))
Viewpoint40.setOrientation(x3d.doubleToFloat([0,1,0,1.5708]))
Viewpoint40.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint41.setPosition(x3d.doubleToFloat([1,0.8,0.5]))
Viewpoint41.setOrientation(x3d.doubleToFloat([0,1,0,1.2]))
Viewpoint41.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint42.setPosition(x3d.doubleToFloat([-1,0.8,0.5]))
Viewpoint42.setOrientation(x3d.doubleToFloat([0,1,0,-1.2]))
Viewpoint42.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setDescription("Humanoid LOA 3 Left Side")
Viewpoint43.setPosition(x3d.doubleToFloat([-2.6,0.8,0]))
Viewpoint43.setOrientation(x3d.doubleToFloat([0,1,0,-1.5708]))
Viewpoint43.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.setDescription("Humanoid LOA 3 Top")
Viewpoint44.setPosition(x3d.doubleToFloat([0,3.5,0]))
Viewpoint44.setOrientation(x3d.doubleToFloat([1,0,0,-1.5708]))
Viewpoint44.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene31.addChild(Viewpoint44)
HAnimHumanoid45 = x3d.HAnimHumanoid()
HAnimHumanoid45.setDEF("hanim_humanoid")
HAnimHumanoid45.setName("humanoid")
HAnimHumanoid45.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"])
HAnimHumanoid45.setVersion("1.0")
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.setContainerFieldOverride("skeleton")
HAnimJoint46.setDEF("hanim_humanoid_root")
HAnimJoint46.setName("humanoid_root")
HAnimJoint46.setCenter(x3d.doubleToFloat([0,0.824,0.0277]))
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.setDEF("hanim_sacrum")
HAnimSegment47.setName("sacrum")
TouchSensor48 = x3d.TouchSensor()
TouchSensor48.setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum")

HAnimSegment47.addChild(TouchSensor48)
Transform49 = x3d.Transform()
Transform49.setTranslation(x3d.doubleToFloat([0,0.824,0.0277]))
Shape50 = x3d.Shape()
Shape50.setDEF("HAnimJointShape")
Appearance51 = x3d.Appearance()
Appearance51.setDEF("HAnimJointAppearance")
Material52 = x3d.Material()
Material52.setDiffuseColor(x3d.doubleToFloat([1,0.5,0]))
Material52.setTransparency(0.5)

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Sphere53 = x3d.Sphere()
Sphere53.setRadius(0.006)

Shape50.setGeometry(Sphere53)

Transform49.addChild(Shape50)

HAnimSegment47.addChild(Transform49)
Shape54 = x3d.Shape()
LineSet55 = x3d.LineSet()
LineSet55.setVertexCount([2])
ColorRGBA56 = x3d.ColorRGBA()
ColorRGBA56.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA56.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1]))

LineSet55.setColor(ColorRGBA56)
Coordinate57 = x3d.Coordinate()
Coordinate57.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0,0.9149,0.0016]))

LineSet55.setCoord(Coordinate57)

Shape54.setGeometry(LineSet55)

HAnimSegment47.addChild(Shape54)
Shape58 = x3d.Shape()
LineSet59 = x3d.LineSet()
LineSet59.setVertexCount([2])
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.setUSE("HAnimSegmentLineColorRGBA")

LineSet59.setColor(ColorRGBA60)
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0.0028,1.0568,-0.0776]))

LineSet59.setCoord(Coordinate61)

Shape58.setGeometry(LineSet59)

HAnimSegment47.addChild(Shape58)

HAnimJoint46.addChild(HAnimSegment47)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.setDEF("hanim_sacroiliac")
HAnimJoint62.setName("sacroiliac")
HAnimJoint62.setCenter(x3d.doubleToFloat([0,0.9149,0.0016]))
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.setDEF("hanim_pelvis")
HAnimSegment63.setName("pelvis")
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment63.addChild(TouchSensor64)
Transform65 = x3d.Transform()
Transform65.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Shape66 = x3d.Shape()
Shape66.setUSE("HAnimJointShape")

Transform65.addChild(Shape66)

HAnimSegment63.addChild(Transform65)
Shape67 = x3d.Shape()
LineSet68 = x3d.LineSet()
LineSet68.setVertexCount([2])
ColorRGBA69 = x3d.ColorRGBA()
ColorRGBA69.setUSE("HAnimSegmentLineColorRGBA")

LineSet68.setColor(ColorRGBA69)
Coordinate70 = x3d.Coordinate()
Coordinate70.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0961,0.9124,-0.0001]))

LineSet68.setCoord(Coordinate70)

Shape67.setGeometry(LineSet68)

HAnimSegment63.addChild(Shape67)
Shape71 = x3d.Shape()
LineSet72 = x3d.LineSet()
LineSet72.setVertexCount([2])
ColorRGBA73 = x3d.ColorRGBA()
ColorRGBA73.setUSE("HAnimSegmentLineColorRGBA")

LineSet72.setColor(ColorRGBA73)
Coordinate74 = x3d.Coordinate()
Coordinate74.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0961,0.9124,-0.0001]))

LineSet72.setCoord(Coordinate74)

Shape71.setGeometry(LineSet72)

HAnimSegment63.addChild(Shape71)
Shape75 = x3d.Shape()
LineSet76 = x3d.LineSet()
LineSet76.setVertexCount([2])
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA77.setColor(x3d.doubleToFloat([1,0,0,1,1,0,0,0.1]))

LineSet76.setColor(ColorRGBA77)
Coordinate78 = x3d.Coordinate()
Coordinate78.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.1525,1.0628,0.0035]))

LineSet76.setCoord(Coordinate78)

Shape75.setGeometry(LineSet76)

HAnimSegment63.addChild(Shape75)
Shape79 = x3d.Shape()
LineSet80 = x3d.LineSet()
LineSet80.setVertexCount([2])
ColorRGBA81 = x3d.ColorRGBA()
ColorRGBA81.setUSE("HAnimSiteLineColorRGBA")

LineSet80.setColor(ColorRGBA81)
Coordinate82 = x3d.Coordinate()
Coordinate82.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.1689,0.8419,0.0352]))

LineSet80.setCoord(Coordinate82)

Shape79.setGeometry(LineSet80)

HAnimSegment63.addChild(Shape79)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.setVertexCount([2])
ColorRGBA85 = x3d.ColorRGBA()
ColorRGBA85.setUSE("HAnimSiteLineColorRGBA")

LineSet84.setColor(ColorRGBA85)
Coordinate86 = x3d.Coordinate()
Coordinate86.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.1612,1.0537,0.0008]))

LineSet84.setCoord(Coordinate86)

Shape83.setGeometry(LineSet84)

HAnimSegment63.addChild(Shape83)
Shape87 = x3d.Shape()
LineSet88 = x3d.LineSet()
LineSet88.setVertexCount([2])
ColorRGBA89 = x3d.ColorRGBA()
ColorRGBA89.setUSE("HAnimSiteLineColorRGBA")

LineSet88.setColor(ColorRGBA89)
Coordinate90 = x3d.Coordinate()
Coordinate90.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.1677,0.8336,0.0303]))

LineSet88.setCoord(Coordinate90)

Shape87.setGeometry(LineSet88)

HAnimSegment63.addChild(Shape87)
Shape91 = x3d.Shape()
LineSet92 = x3d.LineSet()
LineSet92.setVertexCount([2])
ColorRGBA93 = x3d.ColorRGBA()
ColorRGBA93.setUSE("HAnimSiteLineColorRGBA")

LineSet92.setColor(ColorRGBA93)
Coordinate94 = x3d.Coordinate()
Coordinate94.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0887,1.0021,0.1112]))

LineSet92.setCoord(Coordinate94)

Shape91.setGeometry(LineSet92)

HAnimSegment63.addChild(Shape91)
Shape95 = x3d.Shape()
LineSet96 = x3d.LineSet()
LineSet96.setVertexCount([2])
ColorRGBA97 = x3d.ColorRGBA()
ColorRGBA97.setUSE("HAnimSiteLineColorRGBA")

LineSet96.setColor(ColorRGBA97)
Coordinate98 = x3d.Coordinate()
Coordinate98.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0925,0.9983,0.1052]))

LineSet96.setCoord(Coordinate98)

Shape95.setGeometry(LineSet96)

HAnimSegment63.addChild(Shape95)
Shape99 = x3d.Shape()
LineSet100 = x3d.LineSet()
LineSet100.setVertexCount([2])
ColorRGBA101 = x3d.ColorRGBA()
ColorRGBA101.setUSE("HAnimSiteLineColorRGBA")

LineSet100.setColor(ColorRGBA101)
Coordinate102 = x3d.Coordinate()
Coordinate102.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0716,1.019,-0.1138]))

LineSet100.setCoord(Coordinate102)

Shape99.setGeometry(LineSet100)

HAnimSegment63.addChild(Shape99)
Shape103 = x3d.Shape()
LineSet104 = x3d.LineSet()
LineSet104.setVertexCount([2])
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.setUSE("HAnimSiteLineColorRGBA")

LineSet104.setColor(ColorRGBA105)
Coordinate106 = x3d.Coordinate()
Coordinate106.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0774,1.019,-0.1151]))

LineSet104.setCoord(Coordinate106)

Shape103.setGeometry(LineSet104)

HAnimSegment63.addChild(Shape103)
Shape107 = x3d.Shape()
LineSet108 = x3d.LineSet()
LineSet108.setVertexCount([2])
ColorRGBA109 = x3d.ColorRGBA()
ColorRGBA109.setUSE("HAnimSiteLineColorRGBA")

LineSet108.setColor(ColorRGBA109)
Coordinate110 = x3d.Coordinate()
Coordinate110.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0034,0.8266,0.0257]))

LineSet108.setCoord(Coordinate110)

Shape107.setGeometry(LineSet108)

HAnimSegment63.addChild(Shape107)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setDEF("hanim_r_iliocristale_pt")
HAnimSite111.setName("r_iliocristale_pt")
HAnimSite111.setTranslation(x3d.doubleToFloat([-0.1525,1.0628,0.0035]))
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.setDescription("HAnimSite r_iliocristale")

HAnimSite111.addChild(TouchSensor112)
Shape113 = x3d.Shape()
Shape113.setDEF("HAnimSiteShape")
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance114.setMaterial(Material115)

Shape113.setAppearance(Appearance114)
IndexedFaceSet116 = x3d.IndexedFaceSet()
IndexedFaceSet116.setDEF("DiamondIFS")
IndexedFaceSet116.setSolid(False)
IndexedFaceSet116.setCreaseAngle(0.5)
IndexedFaceSet116.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate117 = x3d.Coordinate()
Coordinate117.setPoint(x3d.doubleToFloat([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]))

IndexedFaceSet116.setCoord(Coordinate117)

Shape113.setGeometry(IndexedFaceSet116)

HAnimSite111.addChild(Shape113)

HAnimSegment63.addChild(HAnimSite111)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setDEF("hanim_r_trochanterion_pt")
HAnimSite118.setName("r_trochanterion_pt")
HAnimSite118.setTranslation(x3d.doubleToFloat([-0.1689,0.8419,0.0352]))
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.setDescription("HAnimSite r_trochanterion")

HAnimSite118.addChild(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.setUSE("HAnimSiteShape")

HAnimSite118.addChild(Shape120)

HAnimSegment63.addChild(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setDEF("hanim_l_iliocristale_pt")
HAnimSite121.setName("l_iliocristale_pt")
HAnimSite121.setTranslation(x3d.doubleToFloat([0.1612,1.0537,0.0008]))
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.setDescription("HAnimSite l_iliocristale")

HAnimSite121.addChild(TouchSensor122)
Shape123 = x3d.Shape()
Shape123.setUSE("HAnimSiteShape")

HAnimSite121.addChild(Shape123)

HAnimSegment63.addChild(HAnimSite121)
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.setDEF("hanim_l_trochanterion_pt")
HAnimSite124.setName("l_trochanterion_pt")
HAnimSite124.setTranslation(x3d.doubleToFloat([0.1677,0.8336,0.0303]))
TouchSensor125 = x3d.TouchSensor()
TouchSensor125.setDescription("HAnimSite l_trochanterion")

HAnimSite124.addChild(TouchSensor125)
Shape126 = x3d.Shape()
Shape126.setUSE("HAnimSiteShape")

HAnimSite124.addChild(Shape126)

HAnimSegment63.addChild(HAnimSite124)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.setDEF("hanim_r_asis_pt")
HAnimSite127.setName("r_asis_pt")
HAnimSite127.setTranslation(x3d.doubleToFloat([-0.0887,1.0021,0.1112]))
TouchSensor128 = x3d.TouchSensor()
TouchSensor128.setDescription("HAnimSite r_asis")

HAnimSite127.addChild(TouchSensor128)
Shape129 = x3d.Shape()
Shape129.setUSE("HAnimSiteShape")

HAnimSite127.addChild(Shape129)

HAnimSegment63.addChild(HAnimSite127)
HAnimSite130 = x3d.HAnimSite()
HAnimSite130.setDEF("hanim_l_asis_pt")
HAnimSite130.setName("l_asis_pt")
HAnimSite130.setTranslation(x3d.doubleToFloat([0.0925,0.9983,0.1052]))
TouchSensor131 = x3d.TouchSensor()
TouchSensor131.setDescription("HAnimSite l_asis")

HAnimSite130.addChild(TouchSensor131)
Shape132 = x3d.Shape()
Shape132.setUSE("HAnimSiteShape")

HAnimSite130.addChild(Shape132)

HAnimSegment63.addChild(HAnimSite130)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.setDEF("hanim_r_psis_pt")
HAnimSite133.setName("r_psis_pt")
HAnimSite133.setTranslation(x3d.doubleToFloat([-0.0716,1.019,-0.1138]))
TouchSensor134 = x3d.TouchSensor()
TouchSensor134.setDescription("HAnimSite r_psis")

HAnimSite133.addChild(TouchSensor134)
Shape135 = x3d.Shape()
Shape135.setUSE("HAnimSiteShape")

HAnimSite133.addChild(Shape135)

HAnimSegment63.addChild(HAnimSite133)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.setDEF("hanim_l_psis_pt")
HAnimSite136.setName("l_psis_pt")
HAnimSite136.setTranslation(x3d.doubleToFloat([0.0774,1.019,-0.1151]))
TouchSensor137 = x3d.TouchSensor()
TouchSensor137.setDescription("HAnimSite l_psis")

HAnimSite136.addChild(TouchSensor137)
Shape138 = x3d.Shape()
Shape138.setUSE("HAnimSiteShape")

HAnimSite136.addChild(Shape138)

HAnimSegment63.addChild(HAnimSite136)
HAnimSite139 = x3d.HAnimSite()
HAnimSite139.setDEF("hanim_crotch_pt")
HAnimSite139.setName("crotch_pt")
HAnimSite139.setTranslation(x3d.doubleToFloat([0.0034,0.8266,0.0257]))
TouchSensor140 = x3d.TouchSensor()
TouchSensor140.setDescription("HAnimSite crotch")

HAnimSite139.addChild(TouchSensor140)
Shape141 = x3d.Shape()
Shape141.setUSE("HAnimSiteShape")

HAnimSite139.addChild(Shape141)

HAnimSegment63.addChild(HAnimSite139)

HAnimJoint62.addChild(HAnimSegment63)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.setDEF("hanim_l_hip")
HAnimJoint142.setName("l_hip")
HAnimJoint142.setCenter(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.setDEF("hanim_l_thigh")
HAnimSegment143.setName("l_thigh")
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment143.addChild(TouchSensor144)
Transform145 = x3d.Transform()
Transform145.setTranslation(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
Shape146 = x3d.Shape()
Shape146.setUSE("HAnimJointShape")

Transform145.addChild(Shape146)

HAnimSegment143.addChild(Transform145)
Shape147 = x3d.Shape()
LineSet148 = x3d.LineSet()
LineSet148.setVertexCount([2])
ColorRGBA149 = x3d.ColorRGBA()
ColorRGBA149.setUSE("HAnimSegmentLineColorRGBA")

LineSet148.setColor(ColorRGBA149)
Coordinate150 = x3d.Coordinate()
Coordinate150.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]))

LineSet148.setCoord(Coordinate150)

Shape147.setGeometry(LineSet148)

HAnimSegment143.addChild(Shape147)
Shape151 = x3d.Shape()
LineSet152 = x3d.LineSet()
LineSet152.setVertexCount([2])
ColorRGBA153 = x3d.ColorRGBA()
ColorRGBA153.setUSE("HAnimSiteLineColorRGBA")

LineSet152.setColor(ColorRGBA153)
Coordinate154 = x3d.Coordinate()
Coordinate154.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]))

LineSet152.setCoord(Coordinate154)

Shape151.setGeometry(LineSet152)

HAnimSegment143.addChild(Shape151)
Shape155 = x3d.Shape()
LineSet156 = x3d.LineSet()
LineSet156.setVertexCount([2])
ColorRGBA157 = x3d.ColorRGBA()
ColorRGBA157.setUSE("HAnimSiteLineColorRGBA")

LineSet156.setColor(ColorRGBA157)
Coordinate158 = x3d.Coordinate()
Coordinate158.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]))

LineSet156.setCoord(Coordinate158)

Shape155.setGeometry(LineSet156)

HAnimSegment143.addChild(Shape155)
Shape159 = x3d.Shape()
LineSet160 = x3d.LineSet()
LineSet160.setVertexCount([2])
ColorRGBA161 = x3d.ColorRGBA()
ColorRGBA161.setUSE("HAnimSiteLineColorRGBA")

LineSet160.setColor(ColorRGBA161)
Coordinate162 = x3d.Coordinate()
Coordinate162.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]))

LineSet160.setCoord(Coordinate162)

Shape159.setGeometry(LineSet160)

HAnimSegment143.addChild(Shape159)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.setDEF("hanim_l_knee_crease_pt")
HAnimSite163.setName("l_knee_crease_pt")
HAnimSite163.setTranslation(x3d.doubleToFloat([0.0993,0.4881,-0.0309]))
TouchSensor164 = x3d.TouchSensor()
TouchSensor164.setDescription("HAnimSite l_knee_crease")

HAnimSite163.addChild(TouchSensor164)
Shape165 = x3d.Shape()
Shape165.setUSE("HAnimSiteShape")

HAnimSite163.addChild(Shape165)

HAnimSegment143.addChild(HAnimSite163)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite166.setName("l_femoral_lateral_epicn_pt")
HAnimSite166.setTranslation(x3d.doubleToFloat([0.1598,0.4967,0.0297]))
TouchSensor167 = x3d.TouchSensor()
TouchSensor167.setDescription("HAnimSite l_femoral_lateral_epicn")

HAnimSite166.addChild(TouchSensor167)
Shape168 = x3d.Shape()
Shape168.setUSE("HAnimSiteShape")

HAnimSite166.addChild(Shape168)

HAnimSegment143.addChild(HAnimSite166)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite169.setName("l_femoral_medial_epicn_pt")
HAnimSite169.setTranslation(x3d.doubleToFloat([0.0398,0.4946,0.0303]))
TouchSensor170 = x3d.TouchSensor()
TouchSensor170.setDescription("HAnimSite l_femoral_medial_epicn")

HAnimSite169.addChild(TouchSensor170)
Shape171 = x3d.Shape()
Shape171.setUSE("HAnimSiteShape")

HAnimSite169.addChild(Shape171)

HAnimSegment143.addChild(HAnimSite169)

HAnimJoint142.addChild(HAnimSegment143)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setDEF("hanim_l_knee")
HAnimJoint172.setName("l_knee")
HAnimJoint172.setCenter(x3d.doubleToFloat([0.104,0.4867,0.0308]))
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.setDEF("hanim_l_calf")
HAnimSegment173.setName("l_calf")
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment173.addChild(TouchSensor174)
Transform175 = x3d.Transform()
Transform175.setTranslation(x3d.doubleToFloat([0.104,0.4867,0.0308]))
Shape176 = x3d.Shape()
Shape176.setUSE("HAnimJointShape")

Transform175.addChild(Shape176)

HAnimSegment173.addChild(Transform175)
Shape177 = x3d.Shape()
LineSet178 = x3d.LineSet()
LineSet178.setVertexCount([2])
ColorRGBA179 = x3d.ColorRGBA()
ColorRGBA179.setUSE("HAnimSegmentLineColorRGBA")

LineSet178.setColor(ColorRGBA179)
Coordinate180 = x3d.Coordinate()
Coordinate180.setPoint(x3d.doubleToFloat([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]))

LineSet178.setCoord(Coordinate180)

Shape177.setGeometry(LineSet178)

HAnimSegment173.addChild(Shape177)

HAnimJoint172.addChild(HAnimSegment173)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setDEF("hanim_l_ankle")
HAnimJoint181.setName("l_ankle")
HAnimJoint181.setCenter(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.setDEF("hanim_l_hindfoot")
HAnimSegment182.setName("l_hindfoot")
TouchSensor183 = x3d.TouchSensor()
TouchSensor183.setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot")

HAnimSegment182.addChild(TouchSensor183)
Transform184 = x3d.Transform()
Transform184.setTranslation(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
Shape185 = x3d.Shape()
Shape185.setUSE("HAnimJointShape")

Transform184.addChild(Shape185)

HAnimSegment182.addChild(Transform184)
Shape186 = x3d.Shape()
LineSet187 = x3d.LineSet()
LineSet187.setVertexCount([2])
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet187.setColor(ColorRGBA188)
Coordinate189 = x3d.Coordinate()
Coordinate189.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]))

LineSet187.setCoord(Coordinate189)

Shape186.setGeometry(LineSet187)

HAnimSegment182.addChild(Shape186)
Shape190 = x3d.Shape()
LineSet191 = x3d.LineSet()
LineSet191.setVertexCount([2])
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.setUSE("HAnimSiteLineColorRGBA")

LineSet191.setColor(ColorRGBA192)
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]))

LineSet191.setCoord(Coordinate193)

Shape190.setGeometry(LineSet191)

HAnimSegment182.addChild(Shape190)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.setVertexCount([2])
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.setUSE("HAnimSiteLineColorRGBA")

LineSet195.setColor(ColorRGBA196)
Coordinate197 = x3d.Coordinate()
Coordinate197.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]))

LineSet195.setCoord(Coordinate197)

Shape194.setGeometry(LineSet195)

HAnimSegment182.addChild(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.setVertexCount([2])
ColorRGBA200 = x3d.ColorRGBA()
ColorRGBA200.setUSE("HAnimSiteLineColorRGBA")

LineSet199.setColor(ColorRGBA200)
Coordinate201 = x3d.Coordinate()
Coordinate201.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]))

LineSet199.setCoord(Coordinate201)

Shape198.setGeometry(LineSet199)

HAnimSegment182.addChild(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.setVertexCount([2])
ColorRGBA204 = x3d.ColorRGBA()
ColorRGBA204.setUSE("HAnimSiteLineColorRGBA")

LineSet203.setColor(ColorRGBA204)
Coordinate205 = x3d.Coordinate()
Coordinate205.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]))

LineSet203.setCoord(Coordinate205)

Shape202.setGeometry(LineSet203)

HAnimSegment182.addChild(Shape202)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite206.setName("l_lateral_malleolus_pt")
HAnimSite206.setTranslation(x3d.doubleToFloat([0.1308,0.0597,-0.1032]))
TouchSensor207 = x3d.TouchSensor()
TouchSensor207.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite206.addChild(TouchSensor207)
Shape208 = x3d.Shape()
Shape208.setUSE("HAnimSiteShape")

HAnimSite206.addChild(Shape208)

HAnimSegment182.addChild(HAnimSite206)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite209.setName("l_medial_malleolus_pt")
HAnimSite209.setTranslation(x3d.doubleToFloat([0.089,0.0716,-0.0881]))
TouchSensor210 = x3d.TouchSensor()
TouchSensor210.setDescription("HAnimSite l_medial_malleolus")

HAnimSite209.addChild(TouchSensor210)
Shape211 = x3d.Shape()
Shape211.setUSE("HAnimSiteShape")

HAnimSite209.addChild(Shape211)

HAnimSegment182.addChild(HAnimSite209)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.setDEF("hanim_l_sphyrion_pt")
HAnimSite212.setName("l_sphyrion_pt")
HAnimSite212.setTranslation(x3d.doubleToFloat([0.089,0.0575,-0.0943]))
TouchSensor213 = x3d.TouchSensor()
TouchSensor213.setDescription("HAnimSite l_sphyrion")

HAnimSite212.addChild(TouchSensor213)
Shape214 = x3d.Shape()
Shape214.setUSE("HAnimSiteShape")

HAnimSite212.addChild(Shape214)

HAnimSegment182.addChild(HAnimSite212)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite215.setName("l_calcaneous_post_pt")
HAnimSite215.setTranslation(x3d.doubleToFloat([0.0974,0.0259,-0.1171]))
TouchSensor216 = x3d.TouchSensor()
TouchSensor216.setDescription("HAnimSite l_calcaneous_post")

HAnimSite215.addChild(TouchSensor216)
Shape217 = x3d.Shape()
Shape217.setUSE("HAnimSiteShape")

HAnimSite215.addChild(Shape217)

HAnimSegment182.addChild(HAnimSite215)

HAnimJoint181.addChild(HAnimSegment182)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.setDEF("hanim_l_subtalar")
HAnimJoint218.setName("l_subtalar")
HAnimJoint218.setCenter(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.setDEF("hanim_l_midproximal")
HAnimSegment219.setName("l_midproximal")
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal")

HAnimSegment219.addChild(TouchSensor220)
Transform221 = x3d.Transform()
Transform221.setTranslation(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
Shape222 = x3d.Shape()
Shape222.setUSE("HAnimJointShape")

Transform221.addChild(Shape222)

HAnimSegment219.addChild(Transform221)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.setVertexCount([2])
ColorRGBA225 = x3d.ColorRGBA()
ColorRGBA225.setUSE("HAnimSegmentLineColorRGBA")

LineSet224.setColor(ColorRGBA225)
Coordinate226 = x3d.Coordinate()
Coordinate226.setPoint(x3d.doubleToFloat([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]))

LineSet224.setCoord(Coordinate226)

Shape223.setGeometry(LineSet224)

HAnimSegment219.addChild(Shape223)

HAnimJoint218.addChild(HAnimSegment219)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setDEF("hanim_l_midtarsal")
HAnimJoint227.setName("l_midtarsal")
HAnimJoint227.setCenter(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.setDEF("hanim_l_middistal")
HAnimSegment228.setName("l_middistal")
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal")

HAnimSegment228.addChild(TouchSensor229)
Transform230 = x3d.Transform()
Transform230.setTranslation(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
Shape231 = x3d.Shape()
Shape231.setUSE("HAnimJointShape")

Transform230.addChild(Shape231)

HAnimSegment228.addChild(Transform230)
Shape232 = x3d.Shape()
LineSet233 = x3d.LineSet()
LineSet233.setVertexCount([2])
ColorRGBA234 = x3d.ColorRGBA()
ColorRGBA234.setUSE("HAnimSegmentLineColorRGBA")

LineSet233.setColor(ColorRGBA234)
Coordinate235 = x3d.Coordinate()
Coordinate235.setPoint(x3d.doubleToFloat([0.1086,0.0001,0.0368,0.1086,0,0.0762]))

LineSet233.setCoord(Coordinate235)

Shape232.setGeometry(LineSet233)

HAnimSegment228.addChild(Shape232)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.setVertexCount([2])
ColorRGBA238 = x3d.ColorRGBA()
ColorRGBA238.setUSE("HAnimSiteLineColorRGBA")

LineSet237.setColor(ColorRGBA238)
Coordinate239 = x3d.Coordinate()
Coordinate239.setPoint(x3d.doubleToFloat([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]))

LineSet237.setCoord(Coordinate239)

Shape236.setGeometry(LineSet237)

HAnimSegment228.addChild(Shape236)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite240.setName("l_metatarsal_pha1_pt")
HAnimSite240.setTranslation(x3d.doubleToFloat([0.0816,0.0232,0.0106]))
TouchSensor241 = x3d.TouchSensor()
TouchSensor241.setDescription("HAnimSite l_metatarsal_pha1")

HAnimSite240.addChild(TouchSensor241)
Shape242 = x3d.Shape()
Shape242.setUSE("HAnimSiteShape")

HAnimSite240.addChild(Shape242)

HAnimSegment228.addChild(HAnimSite240)

HAnimJoint227.addChild(HAnimSegment228)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.setDEF("hanim_l_metatarsal")
HAnimJoint243.setName("l_metatarsal")
HAnimJoint243.setCenter(x3d.doubleToFloat([0.1086,0,0.0762]))
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.setDEF("hanim_l_forefoot")
HAnimSegment244.setName("l_forefoot")
TouchSensor245 = x3d.TouchSensor()
TouchSensor245.setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")

HAnimSegment244.addChild(TouchSensor245)
Transform246 = x3d.Transform()
Transform246.setTranslation(x3d.doubleToFloat([0.1086,0,0.0762]))
Shape247 = x3d.Shape()
Shape247.setUSE("HAnimJointShape")

Transform246.addChild(Shape247)

HAnimSegment244.addChild(Transform246)
Shape248 = x3d.Shape()
LineSet249 = x3d.LineSet()
LineSet249.setVertexCount([2])
ColorRGBA250 = x3d.ColorRGBA()
ColorRGBA250.setUSE("HAnimSiteLineColorRGBA")

LineSet249.setColor(ColorRGBA250)
Coordinate251 = x3d.Coordinate()
Coordinate251.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1354,0.0016,0.1476]))

LineSet249.setCoord(Coordinate251)

Shape248.setGeometry(LineSet249)

HAnimSegment244.addChild(Shape248)
Shape252 = x3d.Shape()
LineSet253 = x3d.LineSet()
LineSet253.setVertexCount([2])
ColorRGBA254 = x3d.ColorRGBA()
ColorRGBA254.setUSE("HAnimSiteLineColorRGBA")

LineSet253.setColor(ColorRGBA254)
Coordinate255 = x3d.Coordinate()
Coordinate255.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1825,0.007,0.0928]))

LineSet253.setCoord(Coordinate255)

Shape252.setGeometry(LineSet253)

HAnimSegment244.addChild(Shape252)
Shape256 = x3d.Shape()
LineSet257 = x3d.LineSet()
LineSet257.setVertexCount([2])
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.setUSE("HAnimSiteLineColorRGBA")

LineSet257.setColor(ColorRGBA258)
Coordinate259 = x3d.Coordinate()
Coordinate259.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1195,0.0079,0.1433]))

LineSet257.setCoord(Coordinate259)

Shape256.setGeometry(LineSet257)

HAnimSegment244.addChild(Shape256)
HAnimSite260 = x3d.HAnimSite()
HAnimSite260.setDEF("hanim_l_forefoot_tip")
HAnimSite260.setName("l_forefoot_tip")
HAnimSite260.setTranslation(x3d.doubleToFloat([0.1354,0.0016,0.1476]))
TouchSensor261 = x3d.TouchSensor()
TouchSensor261.setDescription("HAnimSite l_forefoot_tip")

HAnimSite260.addChild(TouchSensor261)
Shape262 = x3d.Shape()
Shape262.setUSE("HAnimSiteShape")

HAnimSite260.addChild(Shape262)

HAnimSegment244.addChild(HAnimSite260)
HAnimSite263 = x3d.HAnimSite()
HAnimSite263.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite263.setName("l_metatarsal_pha5_pt")
HAnimSite263.setTranslation(x3d.doubleToFloat([0.1825,0.007,0.0928]))
TouchSensor264 = x3d.TouchSensor()
TouchSensor264.setDescription("HAnimSite l_metatarsal_pha5")

HAnimSite263.addChild(TouchSensor264)
Shape265 = x3d.Shape()
Shape265.setUSE("HAnimSiteShape")

HAnimSite263.addChild(Shape265)

HAnimSegment244.addChild(HAnimSite263)
HAnimSite266 = x3d.HAnimSite()
HAnimSite266.setDEF("hanim_l_digit2_pt")
HAnimSite266.setName("l_digit2_pt")
HAnimSite266.setTranslation(x3d.doubleToFloat([0.1195,0.0079,0.1433]))
TouchSensor267 = x3d.TouchSensor()
TouchSensor267.setDescription("HAnimSite l_digit2")

HAnimSite266.addChild(TouchSensor267)
Shape268 = x3d.Shape()
Shape268.setUSE("HAnimSiteShape")

HAnimSite266.addChild(Shape268)

HAnimSegment244.addChild(HAnimSite266)

HAnimJoint243.addChild(HAnimSegment244)

HAnimJoint227.addChild(HAnimJoint243)

HAnimJoint218.addChild(HAnimJoint227)

HAnimJoint181.addChild(HAnimJoint218)

HAnimJoint172.addChild(HAnimJoint181)

HAnimJoint142.addChild(HAnimJoint172)

HAnimJoint62.addChild(HAnimJoint142)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setDEF("hanim_r_hip")
HAnimJoint269.setName("r_hip")
HAnimJoint269.setCenter(x3d.doubleToFloat([-0.0961,0.9124,-0.0001]))
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.setDEF("hanim_r_thigh")
HAnimSegment270.setName("r_thigh")
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment270.addChild(TouchSensor271)
Transform272 = x3d.Transform()
Transform272.setTranslation(x3d.doubleToFloat([-0.0961,0.9124,-0.0001]))
Shape273 = x3d.Shape()
Shape273.setUSE("HAnimJointShape")

Transform272.addChild(Shape273)

HAnimSegment270.addChild(Transform272)
Shape274 = x3d.Shape()
LineSet275 = x3d.LineSet()
LineSet275.setVertexCount([2])
ColorRGBA276 = x3d.ColorRGBA()
ColorRGBA276.setUSE("HAnimSegmentLineColorRGBA")

LineSet275.setColor(ColorRGBA276)
Coordinate277 = x3d.Coordinate()
Coordinate277.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]))

LineSet275.setCoord(Coordinate277)

Shape274.setGeometry(LineSet275)

HAnimSegment270.addChild(Shape274)
Shape278 = x3d.Shape()
LineSet279 = x3d.LineSet()
LineSet279.setVertexCount([2])
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.setUSE("HAnimSiteLineColorRGBA")

LineSet279.setColor(ColorRGBA280)
Coordinate281 = x3d.Coordinate()
Coordinate281.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]))

LineSet279.setCoord(Coordinate281)

Shape278.setGeometry(LineSet279)

HAnimSegment270.addChild(Shape278)
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.setVertexCount([2])
ColorRGBA284 = x3d.ColorRGBA()
ColorRGBA284.setUSE("HAnimSiteLineColorRGBA")

LineSet283.setColor(ColorRGBA284)
Coordinate285 = x3d.Coordinate()
Coordinate285.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]))

LineSet283.setCoord(Coordinate285)

Shape282.setGeometry(LineSet283)

HAnimSegment270.addChild(Shape282)
Shape286 = x3d.Shape()
LineSet287 = x3d.LineSet()
LineSet287.setVertexCount([2])
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.setUSE("HAnimSiteLineColorRGBA")

LineSet287.setColor(ColorRGBA288)
Coordinate289 = x3d.Coordinate()
Coordinate289.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]))

LineSet287.setCoord(Coordinate289)

Shape286.setGeometry(LineSet287)

HAnimSegment270.addChild(Shape286)
HAnimSite290 = x3d.HAnimSite()
HAnimSite290.setDEF("hanim_r_knee_crease_pt")
HAnimSite290.setName("r_knee_crease_pt")
HAnimSite290.setTranslation(x3d.doubleToFloat([-0.0825,0.4932,-0.0326]))
TouchSensor291 = x3d.TouchSensor()
TouchSensor291.setDescription("HAnimSite r_knee_crease")

HAnimSite290.addChild(TouchSensor291)
Shape292 = x3d.Shape()
Shape292.setUSE("HAnimSiteShape")

HAnimSite290.addChild(Shape292)

HAnimSegment270.addChild(HAnimSite290)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite293.setName("r_femoral_lateral_epicn_pt")
HAnimSite293.setTranslation(x3d.doubleToFloat([-0.1421,0.4992,0.031]))
TouchSensor294 = x3d.TouchSensor()
TouchSensor294.setDescription("HAnimSite r_femoral_lateral_epicn")

HAnimSite293.addChild(TouchSensor294)
Shape295 = x3d.Shape()
Shape295.setUSE("HAnimSiteShape")

HAnimSite293.addChild(Shape295)

HAnimSegment270.addChild(HAnimSite293)
HAnimSite296 = x3d.HAnimSite()
HAnimSite296.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite296.setName("r_femoral_medial_epicn_pt")
HAnimSite296.setTranslation(x3d.doubleToFloat([-0.0221,0.5014,0.0289]))
TouchSensor297 = x3d.TouchSensor()
TouchSensor297.setDescription("HAnimSite r_femoral_medial_epicn")

HAnimSite296.addChild(TouchSensor297)
Shape298 = x3d.Shape()
Shape298.setUSE("HAnimSiteShape")

HAnimSite296.addChild(Shape298)

HAnimSegment270.addChild(HAnimSite296)

HAnimJoint269.addChild(HAnimSegment270)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setDEF("hanim_r_knee")
HAnimJoint299.setName("r_knee")
HAnimJoint299.setCenter(x3d.doubleToFloat([-0.104,0.4867,0.0308]))
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setDEF("hanim_r_calf")
HAnimSegment300.setName("r_calf")
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment300.addChild(TouchSensor301)
Transform302 = x3d.Transform()
Transform302.setTranslation(x3d.doubleToFloat([-0.104,0.4867,0.0308]))
Shape303 = x3d.Shape()
Shape303.setUSE("HAnimJointShape")

Transform302.addChild(Shape303)

HAnimSegment300.addChild(Transform302)
Shape304 = x3d.Shape()
LineSet305 = x3d.LineSet()
LineSet305.setVertexCount([2])
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.setUSE("HAnimSegmentLineColorRGBA")

LineSet305.setColor(ColorRGBA306)
Coordinate307 = x3d.Coordinate()
Coordinate307.setPoint(x3d.doubleToFloat([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]))

LineSet305.setCoord(Coordinate307)

Shape304.setGeometry(LineSet305)

HAnimSegment300.addChild(Shape304)

HAnimJoint299.addChild(HAnimSegment300)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.setDEF("hanim_r_ankle")
HAnimJoint308.setName("r_ankle")
HAnimJoint308.setCenter(x3d.doubleToFloat([-0.1101,0.0656,-0.0736]))
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setDEF("hanim_r_hindfoot")
HAnimSegment309.setName("r_hindfoot")
TouchSensor310 = x3d.TouchSensor()
TouchSensor310.setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot")

HAnimSegment309.addChild(TouchSensor310)
Transform311 = x3d.Transform()
Transform311.setTranslation(x3d.doubleToFloat([-0.1101,0.0656,-0.0736]))
Shape312 = x3d.Shape()
Shape312.setUSE("HAnimJointShape")

Transform311.addChild(Shape312)

HAnimSegment309.addChild(Transform311)
Shape313 = x3d.Shape()
LineSet314 = x3d.LineSet()
LineSet314.setVertexCount([2])
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.setUSE("HAnimSegmentLineColorRGBA")

LineSet314.setColor(ColorRGBA315)
Coordinate316 = x3d.Coordinate()
Coordinate316.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]))

LineSet314.setCoord(Coordinate316)

Shape313.setGeometry(LineSet314)

HAnimSegment309.addChild(Shape313)
Shape317 = x3d.Shape()
LineSet318 = x3d.LineSet()
LineSet318.setVertexCount([2])
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.setUSE("HAnimSiteLineColorRGBA")

LineSet318.setColor(ColorRGBA319)
Coordinate320 = x3d.Coordinate()
Coordinate320.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]))

LineSet318.setCoord(Coordinate320)

Shape317.setGeometry(LineSet318)

HAnimSegment309.addChild(Shape317)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.setVertexCount([2])
ColorRGBA323 = x3d.ColorRGBA()
ColorRGBA323.setUSE("HAnimSiteLineColorRGBA")

LineSet322.setColor(ColorRGBA323)
Coordinate324 = x3d.Coordinate()
Coordinate324.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]))

LineSet322.setCoord(Coordinate324)

Shape321.setGeometry(LineSet322)

HAnimSegment309.addChild(Shape321)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.setVertexCount([2])
ColorRGBA327 = x3d.ColorRGBA()
ColorRGBA327.setUSE("HAnimSiteLineColorRGBA")

LineSet326.setColor(ColorRGBA327)
Coordinate328 = x3d.Coordinate()
Coordinate328.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]))

LineSet326.setCoord(Coordinate328)

Shape325.setGeometry(LineSet326)

HAnimSegment309.addChild(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.setVertexCount([2])
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.setUSE("HAnimSiteLineColorRGBA")

LineSet330.setColor(ColorRGBA331)
Coordinate332 = x3d.Coordinate()
Coordinate332.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]))

LineSet330.setCoord(Coordinate332)

Shape329.setGeometry(LineSet330)

HAnimSegment309.addChild(Shape329)
HAnimSite333 = x3d.HAnimSite()
HAnimSite333.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite333.setName("r_lateral_malleolus_pt")
HAnimSite333.setTranslation(x3d.doubleToFloat([-0.1006,0.0658,-0.1075]))
TouchSensor334 = x3d.TouchSensor()
TouchSensor334.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite333.addChild(TouchSensor334)
Shape335 = x3d.Shape()
Shape335.setUSE("HAnimSiteShape")

HAnimSite333.addChild(Shape335)

HAnimSegment309.addChild(HAnimSite333)
HAnimSite336 = x3d.HAnimSite()
HAnimSite336.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite336.setName("r_medial_malleolus_pt")
HAnimSite336.setTranslation(x3d.doubleToFloat([-0.0591,0.076,-0.0928]))
TouchSensor337 = x3d.TouchSensor()
TouchSensor337.setDescription("HAnimSite r_medial_malleolus")

HAnimSite336.addChild(TouchSensor337)
Shape338 = x3d.Shape()
Shape338.setUSE("HAnimSiteShape")

HAnimSite336.addChild(Shape338)

HAnimSegment309.addChild(HAnimSite336)
HAnimSite339 = x3d.HAnimSite()
HAnimSite339.setDEF("hanim_r_sphyrion_pt")
HAnimSite339.setName("r_sphyrion_pt")
HAnimSite339.setTranslation(x3d.doubleToFloat([-0.0603,0.061,-0.1002]))
TouchSensor340 = x3d.TouchSensor()
TouchSensor340.setDescription("HAnimSite r_sphyrion")

HAnimSite339.addChild(TouchSensor340)
Shape341 = x3d.Shape()
Shape341.setUSE("HAnimSiteShape")

HAnimSite339.addChild(Shape341)

HAnimSegment309.addChild(HAnimSite339)
HAnimSite342 = x3d.HAnimSite()
HAnimSite342.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite342.setName("r_calcaneous_post_pt")
HAnimSite342.setTranslation(x3d.doubleToFloat([-0.0692,0.0297,-0.1221]))
TouchSensor343 = x3d.TouchSensor()
TouchSensor343.setDescription("HAnimSite r_calcaneous_post")

HAnimSite342.addChild(TouchSensor343)
Shape344 = x3d.Shape()
Shape344.setUSE("HAnimSiteShape")

HAnimSite342.addChild(Shape344)

HAnimSegment309.addChild(HAnimSite342)

HAnimJoint308.addChild(HAnimSegment309)
HAnimJoint345 = x3d.HAnimJoint()
HAnimJoint345.setDEF("hanim_r_subtalar")
HAnimJoint345.setName("r_subtalar")
HAnimJoint345.setCenter(x3d.doubleToFloat([-0.1086,0.0001,-0.0368]))
HAnimSegment346 = x3d.HAnimSegment()
HAnimSegment346.setDEF("hanim_r_midproximal")
HAnimSegment346.setName("r_midproximal")
TouchSensor347 = x3d.TouchSensor()
TouchSensor347.setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal")

HAnimSegment346.addChild(TouchSensor347)
Transform348 = x3d.Transform()
Transform348.setTranslation(x3d.doubleToFloat([-0.1086,0.0001,-0.0368]))
Shape349 = x3d.Shape()
Shape349.setUSE("HAnimJointShape")

Transform348.addChild(Shape349)

HAnimSegment346.addChild(Transform348)
Shape350 = x3d.Shape()
LineSet351 = x3d.LineSet()
LineSet351.setVertexCount([2])
ColorRGBA352 = x3d.ColorRGBA()
ColorRGBA352.setUSE("HAnimSegmentLineColorRGBA")

LineSet351.setColor(ColorRGBA352)
Coordinate353 = x3d.Coordinate()
Coordinate353.setPoint(x3d.doubleToFloat([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]))

LineSet351.setCoord(Coordinate353)

Shape350.setGeometry(LineSet351)

HAnimSegment346.addChild(Shape350)

HAnimJoint345.addChild(HAnimSegment346)
HAnimJoint354 = x3d.HAnimJoint()
HAnimJoint354.setDEF("hanim_r_midtarsal")
HAnimJoint354.setName("r_midtarsal")
HAnimJoint354.setCenter(x3d.doubleToFloat([-0.1086,0.0001,0.0368]))
HAnimSegment355 = x3d.HAnimSegment()
HAnimSegment355.setDEF("hanim_r_middistal")
HAnimSegment355.setName("r_middistal")
TouchSensor356 = x3d.TouchSensor()
TouchSensor356.setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal")

HAnimSegment355.addChild(TouchSensor356)
Transform357 = x3d.Transform()
Transform357.setTranslation(x3d.doubleToFloat([-0.1086,0.0001,0.0368]))
Shape358 = x3d.Shape()
Shape358.setUSE("HAnimJointShape")

Transform357.addChild(Shape358)

HAnimSegment355.addChild(Transform357)
Shape359 = x3d.Shape()
LineSet360 = x3d.LineSet()
LineSet360.setVertexCount([2])
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.setUSE("HAnimSegmentLineColorRGBA")

LineSet360.setColor(ColorRGBA361)
Coordinate362 = x3d.Coordinate()
Coordinate362.setPoint(x3d.doubleToFloat([-0.1086,0.0001,0.0368,-0.1086,0,0.0762]))

LineSet360.setCoord(Coordinate362)

Shape359.setGeometry(LineSet360)

HAnimSegment355.addChild(Shape359)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.setVertexCount([2])
ColorRGBA365 = x3d.ColorRGBA()
ColorRGBA365.setUSE("HAnimSiteLineColorRGBA")

LineSet364.setColor(ColorRGBA365)
Coordinate366 = x3d.Coordinate()
Coordinate366.setPoint(x3d.doubleToFloat([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]))

LineSet364.setCoord(Coordinate366)

Shape363.setGeometry(LineSet364)

HAnimSegment355.addChild(Shape363)
HAnimSite367 = x3d.HAnimSite()
HAnimSite367.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite367.setName("r_metatarsal_pha1_pt")
HAnimSite367.setTranslation(x3d.doubleToFloat([-0.0521,0.026,0.0127]))
TouchSensor368 = x3d.TouchSensor()
TouchSensor368.setDescription("HAnimSite r_metatarsal_pha1")

HAnimSite367.addChild(TouchSensor368)
Shape369 = x3d.Shape()
Shape369.setUSE("HAnimSiteShape")

HAnimSite367.addChild(Shape369)

HAnimSegment355.addChild(HAnimSite367)

HAnimJoint354.addChild(HAnimSegment355)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.setDEF("hanim_r_metatarsal")
HAnimJoint370.setName("r_metatarsal")
HAnimJoint370.setCenter(x3d.doubleToFloat([-0.1086,0,0.0762]))
HAnimSegment371 = x3d.HAnimSegment()
HAnimSegment371.setDEF("hanim_r_forefoot")
HAnimSegment371.setName("r_forefoot")
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")

HAnimSegment371.addChild(TouchSensor372)
Transform373 = x3d.Transform()
Transform373.setTranslation(x3d.doubleToFloat([-0.1086,0,0.0762]))
Shape374 = x3d.Shape()
Shape374.setUSE("HAnimJointShape")

Transform373.addChild(Shape374)

HAnimSegment371.addChild(Transform373)
Shape375 = x3d.Shape()
LineSet376 = x3d.LineSet()
LineSet376.setVertexCount([2])
ColorRGBA377 = x3d.ColorRGBA()
ColorRGBA377.setUSE("HAnimSiteLineColorRGBA")

LineSet376.setColor(ColorRGBA377)
Coordinate378 = x3d.Coordinate()
Coordinate378.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.1043,0.0227,0.145]))

LineSet376.setCoord(Coordinate378)

Shape375.setGeometry(LineSet376)

HAnimSegment371.addChild(Shape375)
Shape379 = x3d.Shape()
LineSet380 = x3d.LineSet()
LineSet380.setVertexCount([2])
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.setUSE("HAnimSiteLineColorRGBA")

LineSet380.setColor(ColorRGBA381)
Coordinate382 = x3d.Coordinate()
Coordinate382.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.1523,0.0166,0.0895]))

LineSet380.setCoord(Coordinate382)

Shape379.setGeometry(LineSet380)

HAnimSegment371.addChild(Shape379)
Shape383 = x3d.Shape()
LineSet384 = x3d.LineSet()
LineSet384.setVertexCount([2])
ColorRGBA385 = x3d.ColorRGBA()
ColorRGBA385.setUSE("HAnimSiteLineColorRGBA")

LineSet384.setColor(ColorRGBA385)
Coordinate386 = x3d.Coordinate()
Coordinate386.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.0883,0.0134,0.1383]))

LineSet384.setCoord(Coordinate386)

Shape383.setGeometry(LineSet384)

HAnimSegment371.addChild(Shape383)
HAnimSite387 = x3d.HAnimSite()
HAnimSite387.setDEF("hanim_r_forefoot_tip")
HAnimSite387.setName("r_forefoot_tip")
HAnimSite387.setTranslation(x3d.doubleToFloat([-0.1043,0.0227,0.145]))
TouchSensor388 = x3d.TouchSensor()
TouchSensor388.setDescription("HAnimSite r_forefoot_tip")

HAnimSite387.addChild(TouchSensor388)
Shape389 = x3d.Shape()
Shape389.setUSE("HAnimSiteShape")

HAnimSite387.addChild(Shape389)

HAnimSegment371.addChild(HAnimSite387)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite390.setName("r_metatarsal_pha5_pt")
HAnimSite390.setTranslation(x3d.doubleToFloat([-0.1523,0.0166,0.0895]))
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.setDescription("HAnimSite r_metatarsal_pha5")

HAnimSite390.addChild(TouchSensor391)
Shape392 = x3d.Shape()
Shape392.setUSE("HAnimSiteShape")

HAnimSite390.addChild(Shape392)

HAnimSegment371.addChild(HAnimSite390)
HAnimSite393 = x3d.HAnimSite()
HAnimSite393.setDEF("hanim_r_digit2_pt")
HAnimSite393.setName("r_digit2_pt")
HAnimSite393.setTranslation(x3d.doubleToFloat([-0.0883,0.0134,0.1383]))
TouchSensor394 = x3d.TouchSensor()
TouchSensor394.setDescription("HAnimSite r_digit2")

HAnimSite393.addChild(TouchSensor394)
Shape395 = x3d.Shape()
Shape395.setUSE("HAnimSiteShape")

HAnimSite393.addChild(Shape395)

HAnimSegment371.addChild(HAnimSite393)

HAnimJoint370.addChild(HAnimSegment371)

HAnimJoint354.addChild(HAnimJoint370)

HAnimJoint345.addChild(HAnimJoint354)

HAnimJoint308.addChild(HAnimJoint345)

HAnimJoint299.addChild(HAnimJoint308)

HAnimJoint269.addChild(HAnimJoint299)

HAnimJoint62.addChild(HAnimJoint269)

HAnimJoint46.addChild(HAnimJoint62)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.setDEF("hanim_vl5")
HAnimJoint396.setName("vl5")
HAnimJoint396.setCenter(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
HAnimSegment397 = x3d.HAnimSegment()
HAnimSegment397.setDEF("hanim_l5")
HAnimSegment397.setName("l5")
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment397.addChild(TouchSensor398)
Transform399 = x3d.Transform()
Transform399.setTranslation(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
Shape400 = x3d.Shape()
Shape400.setUSE("HAnimJointShape")

Transform399.addChild(Shape400)

HAnimSegment397.addChild(Transform399)
Shape401 = x3d.Shape()
LineSet402 = x3d.LineSet()
LineSet402.setVertexCount([2])
ColorRGBA403 = x3d.ColorRGBA()
ColorRGBA403.setUSE("HAnimSegmentLineColorRGBA")

LineSet402.setColor(ColorRGBA403)
Coordinate404 = x3d.Coordinate()
Coordinate404.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]))

LineSet402.setCoord(Coordinate404)

Shape401.setGeometry(LineSet402)

HAnimSegment397.addChild(Shape401)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.setVertexCount([2])
ColorRGBA407 = x3d.ColorRGBA()
ColorRGBA407.setUSE("HAnimSiteLineColorRGBA")

LineSet406.setColor(ColorRGBA407)
Coordinate408 = x3d.Coordinate()
Coordinate408.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0,1.0915,-0.1091]))

LineSet406.setCoord(Coordinate408)

Shape405.setGeometry(LineSet406)

HAnimSegment397.addChild(Shape405)
Shape409 = x3d.Shape()
LineSet410 = x3d.LineSet()
LineSet410.setVertexCount([2])
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.setUSE("HAnimSiteLineColorRGBA")

LineSet410.setColor(ColorRGBA411)
Coordinate412 = x3d.Coordinate()
Coordinate412.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]))

LineSet410.setCoord(Coordinate412)

Shape409.setGeometry(LineSet410)

HAnimSegment397.addChild(Shape409)
HAnimSite413 = x3d.HAnimSite()
HAnimSite413.setDEF("hanim_waist_preferred_post_pt")
HAnimSite413.setName("waist_preferred_post_pt")
HAnimSite413.setTranslation(x3d.doubleToFloat([0,1.0915,-0.1091]))
TouchSensor414 = x3d.TouchSensor()
TouchSensor414.setDescription("HAnimSite waist_preferred_post")

HAnimSite413.addChild(TouchSensor414)
Shape415 = x3d.Shape()
Shape415.setUSE("HAnimSiteShape")

HAnimSite413.addChild(Shape415)

HAnimSegment397.addChild(HAnimSite413)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.setDEF("hanim_navel_pt")
HAnimSite416.setName("navel_pt")
HAnimSite416.setTranslation(x3d.doubleToFloat([0.0069,1.0966,0.1017]))
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.setDescription("HAnimSite navel")

HAnimSite416.addChild(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.setUSE("HAnimSiteShape")

HAnimSite416.addChild(Shape418)

HAnimSegment397.addChild(HAnimSite416)

HAnimJoint396.addChild(HAnimSegment397)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.setDEF("hanim_vl4")
HAnimJoint419.setName("vl4")
HAnimJoint419.setCenter(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
HAnimSegment420 = x3d.HAnimSegment()
HAnimSegment420.setDEF("hanim_l4")
HAnimSegment420.setName("l4")
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment420.addChild(TouchSensor421)
Transform422 = x3d.Transform()
Transform422.setTranslation(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
Shape423 = x3d.Shape()
Shape423.setUSE("HAnimJointShape")

Transform422.addChild(Shape423)

HAnimSegment420.addChild(Transform422)
Shape424 = x3d.Shape()
LineSet425 = x3d.LineSet()
LineSet425.setVertexCount([2])
ColorRGBA426 = x3d.ColorRGBA()
ColorRGBA426.setUSE("HAnimSegmentLineColorRGBA")

LineSet425.setColor(ColorRGBA426)
Coordinate427 = x3d.Coordinate()
Coordinate427.setPoint(x3d.doubleToFloat([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]))

LineSet425.setCoord(Coordinate427)

Shape424.setGeometry(LineSet425)

HAnimSegment420.addChild(Shape424)

HAnimJoint419.addChild(HAnimSegment420)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.setDEF("hanim_vl3")
HAnimJoint428.setName("vl3")
HAnimJoint428.setCenter(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
HAnimSegment429 = x3d.HAnimSegment()
HAnimSegment429.setDEF("hanim_l3")
HAnimSegment429.setName("l3")
TouchSensor430 = x3d.TouchSensor()
TouchSensor430.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment429.addChild(TouchSensor430)
Transform431 = x3d.Transform()
Transform431.setTranslation(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
Shape432 = x3d.Shape()
Shape432.setUSE("HAnimJointShape")

Transform431.addChild(Shape432)

HAnimSegment429.addChild(Transform431)
Shape433 = x3d.Shape()
LineSet434 = x3d.LineSet()
LineSet434.setVertexCount([2])
ColorRGBA435 = x3d.ColorRGBA()
ColorRGBA435.setUSE("HAnimSegmentLineColorRGBA")

LineSet434.setColor(ColorRGBA435)
Coordinate436 = x3d.Coordinate()
Coordinate436.setPoint(x3d.doubleToFloat([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]))

LineSet434.setCoord(Coordinate436)

Shape433.setGeometry(LineSet434)

HAnimSegment429.addChild(Shape433)

HAnimJoint428.addChild(HAnimSegment429)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setDEF("hanim_vl2")
HAnimJoint437.setName("vl2")
HAnimJoint437.setCenter(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.setDEF("hanim_l2")
HAnimSegment438.setName("l2")
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment438.addChild(TouchSensor439)
Transform440 = x3d.Transform()
Transform440.setTranslation(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
Shape441 = x3d.Shape()
Shape441.setUSE("HAnimJointShape")

Transform440.addChild(Shape441)

HAnimSegment438.addChild(Transform440)
Shape442 = x3d.Shape()
LineSet443 = x3d.LineSet()
LineSet443.setVertexCount([2])
ColorRGBA444 = x3d.ColorRGBA()
ColorRGBA444.setUSE("HAnimSegmentLineColorRGBA")

LineSet443.setColor(ColorRGBA444)
Coordinate445 = x3d.Coordinate()
Coordinate445.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]))

LineSet443.setCoord(Coordinate445)

Shape442.setGeometry(LineSet443)

HAnimSegment438.addChild(Shape442)
Shape446 = x3d.Shape()
LineSet447 = x3d.LineSet()
LineSet447.setVertexCount([2])
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.setUSE("HAnimSiteLineColorRGBA")

LineSet447.setColor(ColorRGBA448)
Coordinate449 = x3d.Coordinate()
Coordinate449.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]))

LineSet447.setCoord(Coordinate449)

Shape446.setGeometry(LineSet447)

HAnimSegment438.addChild(Shape446)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.setVertexCount([2])
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.setUSE("HAnimSiteLineColorRGBA")

LineSet451.setColor(ColorRGBA452)
Coordinate453 = x3d.Coordinate()
Coordinate453.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]))

LineSet451.setCoord(Coordinate453)

Shape450.setGeometry(LineSet451)

HAnimSegment438.addChild(Shape450)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.setVertexCount([2])
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.setUSE("HAnimSiteLineColorRGBA")

LineSet455.setColor(ColorRGBA456)
Coordinate457 = x3d.Coordinate()
Coordinate457.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]))

LineSet455.setCoord(Coordinate457)

Shape454.setGeometry(LineSet455)

HAnimSegment438.addChild(Shape454)
HAnimSite458 = x3d.HAnimSite()
HAnimSite458.setDEF("hanim_r_rib10_pt")
HAnimSite458.setName("r_rib10_pt")
HAnimSite458.setTranslation(x3d.doubleToFloat([-0.0711,1.1941,0.1016]))
TouchSensor459 = x3d.TouchSensor()
TouchSensor459.setDescription("HAnimSite r_rib10")

HAnimSite458.addChild(TouchSensor459)
Shape460 = x3d.Shape()
Shape460.setUSE("HAnimSiteShape")

HAnimSite458.addChild(Shape460)

HAnimSegment438.addChild(HAnimSite458)
HAnimSite461 = x3d.HAnimSite()
HAnimSite461.setDEF("hanim_l_rib10_pt")
HAnimSite461.setName("l_rib10_pt")
HAnimSite461.setTranslation(x3d.doubleToFloat([0.0871,1.1925,0.0992]))
TouchSensor462 = x3d.TouchSensor()
TouchSensor462.setDescription("HAnimSite l_rib10")

HAnimSite461.addChild(TouchSensor462)
Shape463 = x3d.Shape()
Shape463.setUSE("HAnimSiteShape")

HAnimSite461.addChild(Shape463)

HAnimSegment438.addChild(HAnimSite461)
HAnimSite464 = x3d.HAnimSite()
HAnimSite464.setDEF("hanim_rib10_midspine_pt")
HAnimSite464.setName("rib10_midspine_pt")
HAnimSite464.setTranslation(x3d.doubleToFloat([0.0049,1.1908,-0.1113]))
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.setDescription("HAnimSite rib10_midspine")

HAnimSite464.addChild(TouchSensor465)
Shape466 = x3d.Shape()
Shape466.setUSE("HAnimSiteShape")

HAnimSite464.addChild(Shape466)

HAnimSegment438.addChild(HAnimSite464)

HAnimJoint437.addChild(HAnimSegment438)
HAnimJoint467 = x3d.HAnimJoint()
HAnimJoint467.setDEF("hanim_vl1")
HAnimJoint467.setName("vl1")
HAnimJoint467.setCenter(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.setDEF("hanim_l1")
HAnimSegment468.setName("l1")
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment468.addChild(TouchSensor469)
Transform470 = x3d.Transform()
Transform470.setTranslation(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
Shape471 = x3d.Shape()
Shape471.setUSE("HAnimJointShape")

Transform470.addChild(Shape471)

HAnimSegment468.addChild(Transform470)
Shape472 = x3d.Shape()
LineSet473 = x3d.LineSet()
LineSet473.setVertexCount([2])
ColorRGBA474 = x3d.ColorRGBA()
ColorRGBA474.setUSE("HAnimSegmentLineColorRGBA")

LineSet473.setColor(ColorRGBA474)
Coordinate475 = x3d.Coordinate()
Coordinate475.setPoint(x3d.doubleToFloat([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]))

LineSet473.setCoord(Coordinate475)

Shape472.setGeometry(LineSet473)

HAnimSegment468.addChild(Shape472)

HAnimJoint467.addChild(HAnimSegment468)
HAnimJoint476 = x3d.HAnimJoint()
HAnimJoint476.setDEF("hanim_vt12")
HAnimJoint476.setName("vt12")
HAnimJoint476.setCenter(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.setDEF("hanim_t12")
HAnimSegment477.setName("t12")
TouchSensor478 = x3d.TouchSensor()
TouchSensor478.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment477.addChild(TouchSensor478)
Transform479 = x3d.Transform()
Transform479.setTranslation(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
Shape480 = x3d.Shape()
Shape480.setUSE("HAnimJointShape")

Transform479.addChild(Shape480)

HAnimSegment477.addChild(Transform479)
Shape481 = x3d.Shape()
LineSet482 = x3d.LineSet()
LineSet482.setVertexCount([2])
ColorRGBA483 = x3d.ColorRGBA()
ColorRGBA483.setUSE("HAnimSegmentLineColorRGBA")

LineSet482.setColor(ColorRGBA483)
Coordinate484 = x3d.Coordinate()
Coordinate484.setPoint(x3d.doubleToFloat([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]))

LineSet482.setCoord(Coordinate484)

Shape481.setGeometry(LineSet482)

HAnimSegment477.addChild(Shape481)

HAnimJoint476.addChild(HAnimSegment477)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.setDEF("hanim_vt11")
HAnimJoint485.setName("vt11")
HAnimJoint485.setCenter(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setDEF("hanim_t11")
HAnimSegment486.setName("t11")
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment486.addChild(TouchSensor487)
Transform488 = x3d.Transform()
Transform488.setTranslation(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
Shape489 = x3d.Shape()
Shape489.setUSE("HAnimJointShape")

Transform488.addChild(Shape489)

HAnimSegment486.addChild(Transform488)
Shape490 = x3d.Shape()
LineSet491 = x3d.LineSet()
LineSet491.setVertexCount([2])
ColorRGBA492 = x3d.ColorRGBA()
ColorRGBA492.setUSE("HAnimSegmentLineColorRGBA")

LineSet491.setColor(ColorRGBA492)
Coordinate493 = x3d.Coordinate()
Coordinate493.setPoint(x3d.doubleToFloat([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]))

LineSet491.setCoord(Coordinate493)

Shape490.setGeometry(LineSet491)

HAnimSegment486.addChild(Shape490)

HAnimJoint485.addChild(HAnimSegment486)
HAnimJoint494 = x3d.HAnimJoint()
HAnimJoint494.setDEF("hanim_vt10")
HAnimJoint494.setName("vt10")
HAnimJoint494.setCenter(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.setDEF("hanim_t10")
HAnimSegment495.setName("t10")
TouchSensor496 = x3d.TouchSensor()
TouchSensor496.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment495.addChild(TouchSensor496)
Transform497 = x3d.Transform()
Transform497.setTranslation(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
Shape498 = x3d.Shape()
Shape498.setUSE("HAnimJointShape")

Transform497.addChild(Shape498)

HAnimSegment495.addChild(Transform497)
Shape499 = x3d.Shape()
LineSet500 = x3d.LineSet()
LineSet500.setVertexCount([2])
ColorRGBA501 = x3d.ColorRGBA()
ColorRGBA501.setUSE("HAnimSegmentLineColorRGBA")

LineSet500.setColor(ColorRGBA501)
Coordinate502 = x3d.Coordinate()
Coordinate502.setPoint(x3d.doubleToFloat([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]))

LineSet500.setCoord(Coordinate502)

Shape499.setGeometry(LineSet500)

HAnimSegment495.addChild(Shape499)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.setVertexCount([2])
ColorRGBA505 = x3d.ColorRGBA()
ColorRGBA505.setUSE("HAnimSiteLineColorRGBA")

LineSet504.setColor(ColorRGBA505)
Coordinate506 = x3d.Coordinate()
Coordinate506.setPoint(x3d.doubleToFloat([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]))

LineSet504.setCoord(Coordinate506)

Shape503.setGeometry(LineSet504)

HAnimSegment495.addChild(Shape503)
HAnimSite507 = x3d.HAnimSite()
HAnimSite507.setDEF("hanim_substernale_pt")
HAnimSite507.setName("substernale_pt")
HAnimSite507.setTranslation(x3d.doubleToFloat([0.0085,1.2995,0.1147]))
TouchSensor508 = x3d.TouchSensor()
TouchSensor508.setDescription("HAnimSite substernale")

HAnimSite507.addChild(TouchSensor508)
Shape509 = x3d.Shape()
Shape509.setUSE("HAnimSiteShape")

HAnimSite507.addChild(Shape509)

HAnimSegment495.addChild(HAnimSite507)

HAnimJoint494.addChild(HAnimSegment495)
HAnimJoint510 = x3d.HAnimJoint()
HAnimJoint510.setDEF("hanim_vt9")
HAnimJoint510.setName("vt9")
HAnimJoint510.setCenter(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.setDEF("hanim_t9")
HAnimSegment511.setName("t9")
TouchSensor512 = x3d.TouchSensor()
TouchSensor512.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment511.addChild(TouchSensor512)
Transform513 = x3d.Transform()
Transform513.setTranslation(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
Shape514 = x3d.Shape()
Shape514.setUSE("HAnimJointShape")

Transform513.addChild(Shape514)

HAnimSegment511.addChild(Transform513)
Shape515 = x3d.Shape()
LineSet516 = x3d.LineSet()
LineSet516.setVertexCount([2])
ColorRGBA517 = x3d.ColorRGBA()
ColorRGBA517.setUSE("HAnimSegmentLineColorRGBA")

LineSet516.setColor(ColorRGBA517)
Coordinate518 = x3d.Coordinate()
Coordinate518.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]))

LineSet516.setCoord(Coordinate518)

Shape515.setGeometry(LineSet516)

HAnimSegment511.addChild(Shape515)
Shape519 = x3d.Shape()
LineSet520 = x3d.LineSet()
LineSet520.setVertexCount([2])
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.setUSE("HAnimSiteLineColorRGBA")

LineSet520.setColor(ColorRGBA521)
Coordinate522 = x3d.Coordinate()
Coordinate522.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]))

LineSet520.setCoord(Coordinate522)

Shape519.setGeometry(LineSet520)

HAnimSegment511.addChild(Shape519)
Shape523 = x3d.Shape()
LineSet524 = x3d.LineSet()
LineSet524.setVertexCount([2])
ColorRGBA525 = x3d.ColorRGBA()
ColorRGBA525.setUSE("HAnimSiteLineColorRGBA")

LineSet524.setColor(ColorRGBA525)
Coordinate526 = x3d.Coordinate()
Coordinate526.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]))

LineSet524.setCoord(Coordinate526)

Shape523.setGeometry(LineSet524)

HAnimSegment511.addChild(Shape523)
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.setDEF("hanim_r_thelion_pt")
HAnimSite527.setName("r_thelion_pt")
HAnimSite527.setTranslation(x3d.doubleToFloat([-0.0736,1.3385,0.1217]))
TouchSensor528 = x3d.TouchSensor()
TouchSensor528.setDescription("HAnimSite r_thelion")

HAnimSite527.addChild(TouchSensor528)
Shape529 = x3d.Shape()
Shape529.setUSE("HAnimSiteShape")

HAnimSite527.addChild(Shape529)

HAnimSegment511.addChild(HAnimSite527)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.setDEF("hanim_l_thelion_pt")
HAnimSite530.setName("l_thelion_pt")
HAnimSite530.setTranslation(x3d.doubleToFloat([0.0918,1.3382,0.1192]))
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.setDescription("HAnimSite l_thelion")

HAnimSite530.addChild(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.setUSE("HAnimSiteShape")

HAnimSite530.addChild(Shape532)

HAnimSegment511.addChild(HAnimSite530)

HAnimJoint510.addChild(HAnimSegment511)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.setDEF("hanim_vt8")
HAnimJoint533.setName("vt8")
HAnimJoint533.setCenter(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setDEF("hanim_t8")
HAnimSegment534.setName("t8")
TouchSensor535 = x3d.TouchSensor()
TouchSensor535.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment534.addChild(TouchSensor535)
Transform536 = x3d.Transform()
Transform536.setTranslation(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
Shape537 = x3d.Shape()
Shape537.setUSE("HAnimJointShape")

Transform536.addChild(Shape537)

HAnimSegment534.addChild(Transform536)
Shape538 = x3d.Shape()
LineSet539 = x3d.LineSet()
LineSet539.setVertexCount([2])
ColorRGBA540 = x3d.ColorRGBA()
ColorRGBA540.setUSE("HAnimSegmentLineColorRGBA")

LineSet539.setColor(ColorRGBA540)
Coordinate541 = x3d.Coordinate()
Coordinate541.setPoint(x3d.doubleToFloat([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]))

LineSet539.setCoord(Coordinate541)

Shape538.setGeometry(LineSet539)

HAnimSegment534.addChild(Shape538)

HAnimJoint533.addChild(HAnimSegment534)
HAnimJoint542 = x3d.HAnimJoint()
HAnimJoint542.setDEF("hanim_vt7")
HAnimJoint542.setName("vt7")
HAnimJoint542.setCenter(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setDEF("hanim_t7")
HAnimSegment543.setName("t7")
TouchSensor544 = x3d.TouchSensor()
TouchSensor544.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment543.addChild(TouchSensor544)
Transform545 = x3d.Transform()
Transform545.setTranslation(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
Shape546 = x3d.Shape()
Shape546.setUSE("HAnimJointShape")

Transform545.addChild(Shape546)

HAnimSegment543.addChild(Transform545)
Shape547 = x3d.Shape()
LineSet548 = x3d.LineSet()
LineSet548.setVertexCount([2])
ColorRGBA549 = x3d.ColorRGBA()
ColorRGBA549.setUSE("HAnimSegmentLineColorRGBA")

LineSet548.setColor(ColorRGBA549)
Coordinate550 = x3d.Coordinate()
Coordinate550.setPoint(x3d.doubleToFloat([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]))

LineSet548.setCoord(Coordinate550)

Shape547.setGeometry(LineSet548)

HAnimSegment543.addChild(Shape547)

HAnimJoint542.addChild(HAnimSegment543)
HAnimJoint551 = x3d.HAnimJoint()
HAnimJoint551.setDEF("hanim_vt6")
HAnimJoint551.setName("vt6")
HAnimJoint551.setCenter(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
HAnimSegment552 = x3d.HAnimSegment()
HAnimSegment552.setDEF("hanim_t6")
HAnimSegment552.setName("t6")
TouchSensor553 = x3d.TouchSensor()
TouchSensor553.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment552.addChild(TouchSensor553)
Transform554 = x3d.Transform()
Transform554.setTranslation(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
Shape555 = x3d.Shape()
Shape555.setUSE("HAnimJointShape")

Transform554.addChild(Shape555)

HAnimSegment552.addChild(Transform554)
Shape556 = x3d.Shape()
LineSet557 = x3d.LineSet()
LineSet557.setVertexCount([2])
ColorRGBA558 = x3d.ColorRGBA()
ColorRGBA558.setUSE("HAnimSegmentLineColorRGBA")

LineSet557.setColor(ColorRGBA558)
Coordinate559 = x3d.Coordinate()
Coordinate559.setPoint(x3d.doubleToFloat([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]))

LineSet557.setCoord(Coordinate559)

Shape556.setGeometry(LineSet557)

HAnimSegment552.addChild(Shape556)

HAnimJoint551.addChild(HAnimSegment552)
HAnimJoint560 = x3d.HAnimJoint()
HAnimJoint560.setDEF("hanim_vt5")
HAnimJoint560.setName("vt5")
HAnimJoint560.setCenter(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
HAnimSegment561 = x3d.HAnimSegment()
HAnimSegment561.setDEF("hanim_t5")
HAnimSegment561.setName("t5")
TouchSensor562 = x3d.TouchSensor()
TouchSensor562.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment561.addChild(TouchSensor562)
Transform563 = x3d.Transform()
Transform563.setTranslation(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
Shape564 = x3d.Shape()
Shape564.setUSE("HAnimJointShape")

Transform563.addChild(Shape564)

HAnimSegment561.addChild(Transform563)
Shape565 = x3d.Shape()
LineSet566 = x3d.LineSet()
LineSet566.setVertexCount([2])
ColorRGBA567 = x3d.ColorRGBA()
ColorRGBA567.setUSE("HAnimSegmentLineColorRGBA")

LineSet566.setColor(ColorRGBA567)
Coordinate568 = x3d.Coordinate()
Coordinate568.setPoint(x3d.doubleToFloat([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]))

LineSet566.setCoord(Coordinate568)

Shape565.setGeometry(LineSet566)

HAnimSegment561.addChild(Shape565)

HAnimJoint560.addChild(HAnimSegment561)
HAnimJoint569 = x3d.HAnimJoint()
HAnimJoint569.setDEF("hanim_vt4")
HAnimJoint569.setName("vt4")
HAnimJoint569.setCenter(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
HAnimSegment570 = x3d.HAnimSegment()
HAnimSegment570.setDEF("hanim_t4")
HAnimSegment570.setName("t4")
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment570.addChild(TouchSensor571)
Transform572 = x3d.Transform()
Transform572.setTranslation(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
Shape573 = x3d.Shape()
Shape573.setUSE("HAnimJointShape")

Transform572.addChild(Shape573)

HAnimSegment570.addChild(Transform572)
Shape574 = x3d.Shape()
LineSet575 = x3d.LineSet()
LineSet575.setVertexCount([2])
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.setUSE("HAnimSegmentLineColorRGBA")

LineSet575.setColor(ColorRGBA576)
Coordinate577 = x3d.Coordinate()
Coordinate577.setPoint(x3d.doubleToFloat([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]))

LineSet575.setCoord(Coordinate577)

Shape574.setGeometry(LineSet575)

HAnimSegment570.addChild(Shape574)

HAnimJoint569.addChild(HAnimSegment570)
HAnimJoint578 = x3d.HAnimJoint()
HAnimJoint578.setDEF("hanim_vt3")
HAnimJoint578.setName("vt3")
HAnimJoint578.setCenter(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
HAnimSegment579 = x3d.HAnimSegment()
HAnimSegment579.setDEF("hanim_t3")
HAnimSegment579.setName("t3")
TouchSensor580 = x3d.TouchSensor()
TouchSensor580.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment579.addChild(TouchSensor580)
Transform581 = x3d.Transform()
Transform581.setTranslation(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
Shape582 = x3d.Shape()
Shape582.setUSE("HAnimJointShape")

Transform581.addChild(Shape582)

HAnimSegment579.addChild(Transform581)
Shape583 = x3d.Shape()
LineSet584 = x3d.LineSet()
LineSet584.setVertexCount([2])
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.setUSE("HAnimSegmentLineColorRGBA")

LineSet584.setColor(ColorRGBA585)
Coordinate586 = x3d.Coordinate()
Coordinate586.setPoint(x3d.doubleToFloat([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]))

LineSet584.setCoord(Coordinate586)

Shape583.setGeometry(LineSet584)

HAnimSegment579.addChild(Shape583)

HAnimJoint578.addChild(HAnimSegment579)
HAnimJoint587 = x3d.HAnimJoint()
HAnimJoint587.setDEF("hanim_vt2")
HAnimJoint587.setName("vt2")
HAnimJoint587.setCenter(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
HAnimSegment588 = x3d.HAnimSegment()
HAnimSegment588.setDEF("hanim_t2")
HAnimSegment588.setName("t2")
TouchSensor589 = x3d.TouchSensor()
TouchSensor589.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment588.addChild(TouchSensor589)
Transform590 = x3d.Transform()
Transform590.setTranslation(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
Shape591 = x3d.Shape()
Shape591.setUSE("HAnimJointShape")

Transform590.addChild(Shape591)

HAnimSegment588.addChild(Transform590)
Shape592 = x3d.Shape()
LineSet593 = x3d.LineSet()
LineSet593.setVertexCount([2])
ColorRGBA594 = x3d.ColorRGBA()
ColorRGBA594.setUSE("HAnimSegmentLineColorRGBA")

LineSet593.setColor(ColorRGBA594)
Coordinate595 = x3d.Coordinate()
Coordinate595.setPoint(x3d.doubleToFloat([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]))

LineSet593.setCoord(Coordinate595)

Shape592.setGeometry(LineSet593)

HAnimSegment588.addChild(Shape592)

HAnimJoint587.addChild(HAnimSegment588)
HAnimJoint596 = x3d.HAnimJoint()
HAnimJoint596.setDEF("hanim_vt1")
HAnimJoint596.setName("vt1")
HAnimJoint596.setCenter(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
HAnimSegment597 = x3d.HAnimSegment()
HAnimSegment597.setDEF("hanim_t1")
HAnimSegment597.setName("t1")
TouchSensor598 = x3d.TouchSensor()
TouchSensor598.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment597.addChild(TouchSensor598)
Transform599 = x3d.Transform()
Transform599.setTranslation(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
Shape600 = x3d.Shape()
Shape600.setUSE("HAnimJointShape")

Transform599.addChild(Shape600)

HAnimSegment597.addChild(Transform599)
Shape601 = x3d.Shape()
LineSet602 = x3d.LineSet()
LineSet602.setVertexCount([2])
ColorRGBA603 = x3d.ColorRGBA()
ColorRGBA603.setUSE("HAnimSegmentLineColorRGBA")

LineSet602.setColor(ColorRGBA603)
Coordinate604 = x3d.Coordinate()
Coordinate604.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]))

LineSet602.setCoord(Coordinate604)

Shape601.setGeometry(LineSet602)

HAnimSegment597.addChild(Shape601)
Shape605 = x3d.Shape()
LineSet606 = x3d.LineSet()
LineSet606.setVertexCount([2])
ColorRGBA607 = x3d.ColorRGBA()
ColorRGBA607.setUSE("HAnimSegmentLineColorRGBA")

LineSet606.setColor(ColorRGBA607)
Coordinate608 = x3d.Coordinate()
Coordinate608.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]))

LineSet606.setCoord(Coordinate608)

Shape605.setGeometry(LineSet606)

HAnimSegment597.addChild(Shape605)
Shape609 = x3d.Shape()
LineSet610 = x3d.LineSet()
LineSet610.setVertexCount([2])
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.setUSE("HAnimSegmentLineColorRGBA")

LineSet610.setColor(ColorRGBA611)
Coordinate612 = x3d.Coordinate()
Coordinate612.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]))

LineSet610.setCoord(Coordinate612)

Shape609.setGeometry(LineSet610)

HAnimSegment597.addChild(Shape609)
Shape613 = x3d.Shape()
LineSet614 = x3d.LineSet()
LineSet614.setVertexCount([2])
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.setUSE("HAnimSiteLineColorRGBA")

LineSet614.setColor(ColorRGBA615)
Coordinate616 = x3d.Coordinate()
Coordinate616.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]))

LineSet614.setCoord(Coordinate616)

Shape613.setGeometry(LineSet614)

HAnimSegment597.addChild(Shape613)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.setVertexCount([2])
ColorRGBA619 = x3d.ColorRGBA()
ColorRGBA619.setUSE("HAnimSiteLineColorRGBA")

LineSet618.setColor(ColorRGBA619)
Coordinate620 = x3d.Coordinate()
Coordinate620.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]))

LineSet618.setCoord(Coordinate620)

Shape617.setGeometry(LineSet618)

HAnimSegment597.addChild(Shape617)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.setDEF("hanim_suprasternale_pt")
HAnimSite621.setName("suprasternale_pt")
HAnimSite621.setTranslation(x3d.doubleToFloat([0.0084,1.4714,0.0551]))
TouchSensor622 = x3d.TouchSensor()
TouchSensor622.setDescription("HAnimSite suprasternale")

HAnimSite621.addChild(TouchSensor622)
Shape623 = x3d.Shape()
Shape623.setUSE("HAnimSiteShape")

HAnimSite621.addChild(Shape623)

HAnimSegment597.addChild(HAnimSite621)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setDEF("hanim_cervicale_pt")
HAnimSite624.setName("cervicale_pt")
HAnimSite624.setTranslation(x3d.doubleToFloat([0.0064,1.52,-0.0815]))
TouchSensor625 = x3d.TouchSensor()
TouchSensor625.setDescription("HAnimSite cervicale")

HAnimSite624.addChild(TouchSensor625)
Shape626 = x3d.Shape()
Shape626.setUSE("HAnimSiteShape")

HAnimSite624.addChild(Shape626)

HAnimSegment597.addChild(HAnimSite624)

HAnimJoint596.addChild(HAnimSegment597)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.setDEF("hanim_vc7")
HAnimJoint627.setName("vc7")
HAnimJoint627.setCenter(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
HAnimSegment628 = x3d.HAnimSegment()
HAnimSegment628.setDEF("hanim_c7")
HAnimSegment628.setName("c7")
TouchSensor629 = x3d.TouchSensor()
TouchSensor629.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment628.addChild(TouchSensor629)
Transform630 = x3d.Transform()
Transform630.setTranslation(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
Shape631 = x3d.Shape()
Shape631.setUSE("HAnimJointShape")

Transform630.addChild(Shape631)

HAnimSegment628.addChild(Transform630)
Shape632 = x3d.Shape()
LineSet633 = x3d.LineSet()
LineSet633.setVertexCount([2])
ColorRGBA634 = x3d.ColorRGBA()
ColorRGBA634.setUSE("HAnimSegmentLineColorRGBA")

LineSet633.setColor(ColorRGBA634)
Coordinate635 = x3d.Coordinate()
Coordinate635.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]))

LineSet633.setCoord(Coordinate635)

Shape632.setGeometry(LineSet633)

HAnimSegment628.addChild(Shape632)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.setVertexCount([2])
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.setUSE("HAnimSiteLineColorRGBA")

LineSet637.setColor(ColorRGBA638)
Coordinate639 = x3d.Coordinate()
Coordinate639.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]))

LineSet637.setCoord(Coordinate639)

Shape636.setGeometry(LineSet637)

HAnimSegment628.addChild(Shape636)
Shape640 = x3d.Shape()
LineSet641 = x3d.LineSet()
LineSet641.setVertexCount([2])
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.setUSE("HAnimSiteLineColorRGBA")

LineSet641.setColor(ColorRGBA642)
Coordinate643 = x3d.Coordinate()
Coordinate643.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]))

LineSet641.setCoord(Coordinate643)

Shape640.setGeometry(LineSet641)

HAnimSegment628.addChild(Shape640)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setDEF("hanim_r_neck_base_pt")
HAnimSite644.setName("r_neck_base_pt")
HAnimSite644.setTranslation(x3d.doubleToFloat([-0.0419,1.5149,-0.022]))
TouchSensor645 = x3d.TouchSensor()
TouchSensor645.setDescription("HAnimSite r_neck_base")

HAnimSite644.addChild(TouchSensor645)
Shape646 = x3d.Shape()
Shape646.setUSE("HAnimSiteShape")

HAnimSite644.addChild(Shape646)

HAnimSegment628.addChild(HAnimSite644)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.setDEF("hanim_l_neck_base_pt")
HAnimSite647.setName("l_neck_base_pt")
HAnimSite647.setTranslation(x3d.doubleToFloat([0.0646,1.5141,-0.038]))
TouchSensor648 = x3d.TouchSensor()
TouchSensor648.setDescription("HAnimSite l_neck_base")

HAnimSite647.addChild(TouchSensor648)
Shape649 = x3d.Shape()
Shape649.setUSE("HAnimSiteShape")

HAnimSite647.addChild(Shape649)

HAnimSegment628.addChild(HAnimSite647)

HAnimJoint627.addChild(HAnimSegment628)
HAnimJoint650 = x3d.HAnimJoint()
HAnimJoint650.setDEF("hanim_vc6")
HAnimJoint650.setName("vc6")
HAnimJoint650.setCenter(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
HAnimSegment651 = x3d.HAnimSegment()
HAnimSegment651.setDEF("hanim_c6")
HAnimSegment651.setName("c6")
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment651.addChild(TouchSensor652)
Transform653 = x3d.Transform()
Transform653.setTranslation(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
Shape654 = x3d.Shape()
Shape654.setUSE("HAnimJointShape")

Transform653.addChild(Shape654)

HAnimSegment651.addChild(Transform653)
Shape655 = x3d.Shape()
LineSet656 = x3d.LineSet()
LineSet656.setVertexCount([2])
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.setUSE("HAnimSegmentLineColorRGBA")

LineSet656.setColor(ColorRGBA657)
Coordinate658 = x3d.Coordinate()
Coordinate658.setPoint(x3d.doubleToFloat([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]))

LineSet656.setCoord(Coordinate658)

Shape655.setGeometry(LineSet656)

HAnimSegment651.addChild(Shape655)

HAnimJoint650.addChild(HAnimSegment651)
HAnimJoint659 = x3d.HAnimJoint()
HAnimJoint659.setDEF("hanim_vc5")
HAnimJoint659.setName("vc5")
HAnimJoint659.setCenter(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
HAnimSegment660 = x3d.HAnimSegment()
HAnimSegment660.setDEF("hanim_c5")
HAnimSegment660.setName("c5")
TouchSensor661 = x3d.TouchSensor()
TouchSensor661.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment660.addChild(TouchSensor661)
Transform662 = x3d.Transform()
Transform662.setTranslation(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
Shape663 = x3d.Shape()
Shape663.setUSE("HAnimJointShape")

Transform662.addChild(Shape663)

HAnimSegment660.addChild(Transform662)
Shape664 = x3d.Shape()
LineSet665 = x3d.LineSet()
LineSet665.setVertexCount([2])
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.setUSE("HAnimSegmentLineColorRGBA")

LineSet665.setColor(ColorRGBA666)
Coordinate667 = x3d.Coordinate()
Coordinate667.setPoint(x3d.doubleToFloat([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]))

LineSet665.setCoord(Coordinate667)

Shape664.setGeometry(LineSet665)

HAnimSegment660.addChild(Shape664)

HAnimJoint659.addChild(HAnimSegment660)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.setDEF("hanim_vc4")
HAnimJoint668.setName("vc4")
HAnimJoint668.setCenter(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
HAnimSegment669 = x3d.HAnimSegment()
HAnimSegment669.setDEF("hanim_c4")
HAnimSegment669.setName("c4")
TouchSensor670 = x3d.TouchSensor()
TouchSensor670.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment669.addChild(TouchSensor670)
Transform671 = x3d.Transform()
Transform671.setTranslation(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
Shape672 = x3d.Shape()
Shape672.setUSE("HAnimJointShape")

Transform671.addChild(Shape672)

HAnimSegment669.addChild(Transform671)
Shape673 = x3d.Shape()
LineSet674 = x3d.LineSet()
LineSet674.setVertexCount([2])
ColorRGBA675 = x3d.ColorRGBA()
ColorRGBA675.setUSE("HAnimSegmentLineColorRGBA")

LineSet674.setColor(ColorRGBA675)
Coordinate676 = x3d.Coordinate()
Coordinate676.setPoint(x3d.doubleToFloat([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]))

LineSet674.setCoord(Coordinate676)

Shape673.setGeometry(LineSet674)

HAnimSegment669.addChild(Shape673)

HAnimJoint668.addChild(HAnimSegment669)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.setDEF("hanim_vc3")
HAnimJoint677.setName("vc3")
HAnimJoint677.setCenter(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
HAnimSegment678 = x3d.HAnimSegment()
HAnimSegment678.setDEF("hanim_c3")
HAnimSegment678.setName("c3")
TouchSensor679 = x3d.TouchSensor()
TouchSensor679.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment678.addChild(TouchSensor679)
Transform680 = x3d.Transform()
Transform680.setTranslation(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
Shape681 = x3d.Shape()
Shape681.setUSE("HAnimJointShape")

Transform680.addChild(Shape681)

HAnimSegment678.addChild(Transform680)
Shape682 = x3d.Shape()
LineSet683 = x3d.LineSet()
LineSet683.setVertexCount([2])
ColorRGBA684 = x3d.ColorRGBA()
ColorRGBA684.setUSE("HAnimSegmentLineColorRGBA")

LineSet683.setColor(ColorRGBA684)
Coordinate685 = x3d.Coordinate()
Coordinate685.setPoint(x3d.doubleToFloat([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]))

LineSet683.setCoord(Coordinate685)

Shape682.setGeometry(LineSet683)

HAnimSegment678.addChild(Shape682)

HAnimJoint677.addChild(HAnimSegment678)
HAnimJoint686 = x3d.HAnimJoint()
HAnimJoint686.setDEF("hanim_vc2")
HAnimJoint686.setName("vc2")
HAnimJoint686.setCenter(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
HAnimSegment687 = x3d.HAnimSegment()
HAnimSegment687.setDEF("hanim_c2")
HAnimSegment687.setName("c2")
TouchSensor688 = x3d.TouchSensor()
TouchSensor688.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment687.addChild(TouchSensor688)
Transform689 = x3d.Transform()
Transform689.setTranslation(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
Shape690 = x3d.Shape()
Shape690.setUSE("HAnimJointShape")

Transform689.addChild(Shape690)

HAnimSegment687.addChild(Transform689)
Shape691 = x3d.Shape()
LineSet692 = x3d.LineSet()
LineSet692.setVertexCount([2])
ColorRGBA693 = x3d.ColorRGBA()
ColorRGBA693.setUSE("HAnimSegmentLineColorRGBA")

LineSet692.setColor(ColorRGBA693)
Coordinate694 = x3d.Coordinate()
Coordinate694.setPoint(x3d.doubleToFloat([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]))

LineSet692.setCoord(Coordinate694)

Shape691.setGeometry(LineSet692)

HAnimSegment687.addChild(Shape691)

HAnimJoint686.addChild(HAnimSegment687)
HAnimJoint695 = x3d.HAnimJoint()
HAnimJoint695.setDEF("hanim_vc1")
HAnimJoint695.setName("vc1")
HAnimJoint695.setCenter(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.setDEF("hanim_c1")
HAnimSegment696.setName("c1")
TouchSensor697 = x3d.TouchSensor()
TouchSensor697.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment696.addChild(TouchSensor697)
Transform698 = x3d.Transform()
Transform698.setTranslation(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
Shape699 = x3d.Shape()
Shape699.setUSE("HAnimJointShape")

Transform698.addChild(Shape699)

HAnimSegment696.addChild(Transform698)
Shape700 = x3d.Shape()
LineSet701 = x3d.LineSet()
LineSet701.setVertexCount([2])
ColorRGBA702 = x3d.ColorRGBA()
ColorRGBA702.setUSE("HAnimSegmentLineColorRGBA")

LineSet701.setColor(ColorRGBA702)
Coordinate703 = x3d.Coordinate()
Coordinate703.setPoint(x3d.doubleToFloat([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]))

LineSet701.setCoord(Coordinate703)

Shape700.setGeometry(LineSet701)

HAnimSegment696.addChild(Shape700)

HAnimJoint695.addChild(HAnimSegment696)
HAnimJoint704 = x3d.HAnimJoint()
HAnimJoint704.setDEF("hanim_skullbase")
HAnimJoint704.setName("skullbase")
HAnimJoint704.setCenter(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
HAnimSegment705 = x3d.HAnimSegment()
HAnimSegment705.setDEF("hanim_skull")
HAnimSegment705.setName("skull")
TouchSensor706 = x3d.TouchSensor()
TouchSensor706.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment705.addChild(TouchSensor706)
Transform707 = x3d.Transform()
Transform707.setTranslation(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
Shape708 = x3d.Shape()
Shape708.setUSE("HAnimJointShape")

Transform707.addChild(Shape708)

HAnimSegment705.addChild(Transform707)
Shape709 = x3d.Shape()
LineSet710 = x3d.LineSet()
LineSet710.setVertexCount([2])
ColorRGBA711 = x3d.ColorRGBA()
ColorRGBA711.setUSE("HAnimSegmentLineColorRGBA")

LineSet710.setColor(ColorRGBA711)
Coordinate712 = x3d.Coordinate()
Coordinate712.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]))

LineSet710.setCoord(Coordinate712)

Shape709.setGeometry(LineSet710)

HAnimSegment705.addChild(Shape709)
Shape713 = x3d.Shape()
LineSet714 = x3d.LineSet()
LineSet714.setVertexCount([2])
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.setUSE("HAnimSegmentLineColorRGBA")

LineSet714.setColor(ColorRGBA715)
Coordinate716 = x3d.Coordinate()
Coordinate716.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]))

LineSet714.setCoord(Coordinate716)

Shape713.setGeometry(LineSet714)

HAnimSegment705.addChild(Shape713)
Shape717 = x3d.Shape()
LineSet718 = x3d.LineSet()
LineSet718.setVertexCount([2])
ColorRGBA719 = x3d.ColorRGBA()
ColorRGBA719.setUSE("HAnimSegmentLineColorRGBA")

LineSet718.setColor(ColorRGBA719)
Coordinate720 = x3d.Coordinate()
Coordinate720.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0336,1.635,0.0506]))

LineSet718.setCoord(Coordinate720)

Shape717.setGeometry(LineSet718)

HAnimSegment705.addChild(Shape717)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.setVertexCount([2])
ColorRGBA723 = x3d.ColorRGBA()
ColorRGBA723.setUSE("HAnimSegmentLineColorRGBA")

LineSet722.setColor(ColorRGBA723)
Coordinate724 = x3d.Coordinate()
Coordinate724.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]))

LineSet722.setCoord(Coordinate724)

Shape721.setGeometry(LineSet722)

HAnimSegment705.addChild(Shape721)
Shape725 = x3d.Shape()
LineSet726 = x3d.LineSet()
LineSet726.setVertexCount([2])
ColorRGBA727 = x3d.ColorRGBA()
ColorRGBA727.setUSE("HAnimSegmentLineColorRGBA")

LineSet726.setColor(ColorRGBA727)
Coordinate728 = x3d.Coordinate()
Coordinate728.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]))

LineSet726.setCoord(Coordinate728)

Shape725.setGeometry(LineSet726)

HAnimSegment705.addChild(Shape725)
Shape729 = x3d.Shape()
LineSet730 = x3d.LineSet()
LineSet730.setVertexCount([2])
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.setUSE("HAnimSegmentLineColorRGBA")

LineSet730.setColor(ColorRGBA731)
Coordinate732 = x3d.Coordinate()
Coordinate732.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]))

LineSet730.setCoord(Coordinate732)

Shape729.setGeometry(LineSet730)

HAnimSegment705.addChild(Shape729)
Shape733 = x3d.Shape()
LineSet734 = x3d.LineSet()
LineSet734.setVertexCount([2])
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.setUSE("HAnimSegmentLineColorRGBA")

LineSet734.setColor(ColorRGBA735)
Coordinate736 = x3d.Coordinate()
Coordinate736.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0,1.63,0.015]))

LineSet734.setCoord(Coordinate736)

Shape733.setGeometry(LineSet734)

HAnimSegment705.addChild(Shape733)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.setVertexCount([2])
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.setUSE("HAnimSiteLineColorRGBA")

LineSet738.setColor(ColorRGBA739)
Coordinate740 = x3d.Coordinate()
Coordinate740.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.005,1.7504,0.0055]))

LineSet738.setCoord(Coordinate740)

Shape737.setGeometry(LineSet738)

HAnimSegment705.addChild(Shape737)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.setVertexCount([2])
ColorRGBA743 = x3d.ColorRGBA()
ColorRGBA743.setUSE("HAnimSiteLineColorRGBA")

LineSet742.setColor(ColorRGBA743)
Coordinate744 = x3d.Coordinate()
Coordinate744.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]))

LineSet742.setCoord(Coordinate744)

Shape741.setGeometry(LineSet742)

HAnimSegment705.addChild(Shape741)
Shape745 = x3d.Shape()
LineSet746 = x3d.LineSet()
LineSet746.setVertexCount([2])
ColorRGBA747 = x3d.ColorRGBA()
ColorRGBA747.setUSE("HAnimSiteLineColorRGBA")

LineSet746.setColor(ColorRGBA747)
Coordinate748 = x3d.Coordinate()
Coordinate748.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]))

LineSet746.setCoord(Coordinate748)

Shape745.setGeometry(LineSet746)

HAnimSegment705.addChild(Shape745)
Shape749 = x3d.Shape()
LineSet750 = x3d.LineSet()
LineSet750.setVertexCount([2])
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.setUSE("HAnimSiteLineColorRGBA")

LineSet750.setColor(ColorRGBA751)
Coordinate752 = x3d.Coordinate()
Coordinate752.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]))

LineSet750.setCoord(Coordinate752)

Shape749.setGeometry(LineSet750)

HAnimSegment705.addChild(Shape749)
Shape753 = x3d.Shape()
LineSet754 = x3d.LineSet()
LineSet754.setVertexCount([2])
ColorRGBA755 = x3d.ColorRGBA()
ColorRGBA755.setUSE("HAnimSiteLineColorRGBA")

LineSet754.setColor(ColorRGBA755)
Coordinate756 = x3d.Coordinate()
Coordinate756.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0061,1.541,0.0805]))

LineSet754.setCoord(Coordinate756)

Shape753.setGeometry(LineSet754)

HAnimSegment705.addChild(Shape753)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.setVertexCount([2])
ColorRGBA759 = x3d.ColorRGBA()
ColorRGBA759.setUSE("HAnimSiteLineColorRGBA")

LineSet758.setColor(ColorRGBA759)
Coordinate760 = x3d.Coordinate()
Coordinate760.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]))

LineSet758.setCoord(Coordinate760)

Shape757.setGeometry(LineSet758)

HAnimSegment705.addChild(Shape757)
Shape761 = x3d.Shape()
LineSet762 = x3d.LineSet()
LineSet762.setVertexCount([2])
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.setUSE("HAnimSiteLineColorRGBA")

LineSet762.setColor(ColorRGBA763)
Coordinate764 = x3d.Coordinate()
Coordinate764.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]))

LineSet762.setCoord(Coordinate764)

Shape761.setGeometry(LineSet762)

HAnimSegment705.addChild(Shape761)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.setVertexCount([2])
ColorRGBA767 = x3d.ColorRGBA()
ColorRGBA767.setUSE("HAnimSiteLineColorRGBA")

LineSet766.setColor(ColorRGBA767)
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]))

LineSet766.setCoord(Coordinate768)

Shape765.setGeometry(LineSet766)

HAnimSegment705.addChild(Shape765)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.setVertexCount([2])
ColorRGBA771 = x3d.ColorRGBA()
ColorRGBA771.setUSE("HAnimSiteLineColorRGBA")

LineSet770.setColor(ColorRGBA771)
Coordinate772 = x3d.Coordinate()
Coordinate772.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0631,1.553,0.033]))

LineSet770.setCoord(Coordinate772)

Shape769.setGeometry(LineSet770)

HAnimSegment705.addChild(Shape769)
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.setVertexCount([2])
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.setUSE("HAnimSiteLineColorRGBA")

LineSet774.setColor(ColorRGBA775)
Coordinate776 = x3d.Coordinate()
Coordinate776.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]))

LineSet774.setCoord(Coordinate776)

Shape773.setGeometry(LineSet774)

HAnimSegment705.addChild(Shape773)
HAnimSite777 = x3d.HAnimSite()
HAnimSite777.setDEF("hanim_skull_tip")
HAnimSite777.setName("skull_tip")
HAnimSite777.setTranslation(x3d.doubleToFloat([0.005,1.7504,0.0055]))
TouchSensor778 = x3d.TouchSensor()
TouchSensor778.setDescription("HAnimSite skull_tip")

HAnimSite777.addChild(TouchSensor778)
Shape779 = x3d.Shape()
Shape779.setUSE("HAnimSiteShape")

HAnimSite777.addChild(Shape779)

HAnimSegment705.addChild(HAnimSite777)
HAnimSite780 = x3d.HAnimSite()
HAnimSite780.setDEF("hanim_sellion_pt")
HAnimSite780.setName("sellion_pt")
HAnimSite780.setTranslation(x3d.doubleToFloat([0.0058,1.6316,0.0852]))
TouchSensor781 = x3d.TouchSensor()
TouchSensor781.setDescription("HAnimSite sellion")

HAnimSite780.addChild(TouchSensor781)
Shape782 = x3d.Shape()
Shape782.setUSE("HAnimSiteShape")

HAnimSite780.addChild(Shape782)

HAnimSegment705.addChild(HAnimSite780)
HAnimSite783 = x3d.HAnimSite()
HAnimSite783.setDEF("hanim_r_infraorbitale_pt")
HAnimSite783.setName("r_infraorbitale_pt")
HAnimSite783.setTranslation(x3d.doubleToFloat([-0.0237,1.6171,0.0752]))
TouchSensor784 = x3d.TouchSensor()
TouchSensor784.setDescription("HAnimSite r_infraorbitale")

HAnimSite783.addChild(TouchSensor784)
Shape785 = x3d.Shape()
Shape785.setUSE("HAnimSiteShape")

HAnimSite783.addChild(Shape785)

HAnimSegment705.addChild(HAnimSite783)
HAnimSite786 = x3d.HAnimSite()
HAnimSite786.setDEF("hanim_l_infraorbitale_pt")
HAnimSite786.setName("l_infraorbitale_pt")
HAnimSite786.setTranslation(x3d.doubleToFloat([0.0341,1.6171,0.0752]))
TouchSensor787 = x3d.TouchSensor()
TouchSensor787.setDescription("HAnimSite l_infraorbitale")

HAnimSite786.addChild(TouchSensor787)
Shape788 = x3d.Shape()
Shape788.setUSE("HAnimSiteShape")

HAnimSite786.addChild(Shape788)

HAnimSegment705.addChild(HAnimSite786)
HAnimSite789 = x3d.HAnimSite()
HAnimSite789.setDEF("hanim_supramenton_pt")
HAnimSite789.setName("supramenton_pt")
HAnimSite789.setTranslation(x3d.doubleToFloat([0.0061,1.541,0.0805]))
TouchSensor790 = x3d.TouchSensor()
TouchSensor790.setDescription("HAnimSite supramenton")

HAnimSite789.addChild(TouchSensor790)
Shape791 = x3d.Shape()
Shape791.setUSE("HAnimSiteShape")

HAnimSite789.addChild(Shape791)

HAnimSegment705.addChild(HAnimSite789)
HAnimSite792 = x3d.HAnimSite()
HAnimSite792.setDEF("hanim_r_tragion_pt")
HAnimSite792.setName("r_tragion_pt")
HAnimSite792.setTranslation(x3d.doubleToFloat([-0.0646,1.6347,0.0302]))
TouchSensor793 = x3d.TouchSensor()
TouchSensor793.setDescription("HAnimSite r_tragion")

HAnimSite792.addChild(TouchSensor793)
Shape794 = x3d.Shape()
Shape794.setUSE("HAnimSiteShape")

HAnimSite792.addChild(Shape794)

HAnimSegment705.addChild(HAnimSite792)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.setDEF("hanim_r_gonion_pt")
HAnimSite795.setName("r_gonion_pt")
HAnimSite795.setTranslation(x3d.doubleToFloat([-0.052,1.5529,0.0347]))
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.setDescription("HAnimSite r_gonion")

HAnimSite795.addChild(TouchSensor796)
Shape797 = x3d.Shape()
Shape797.setUSE("HAnimSiteShape")

HAnimSite795.addChild(Shape797)

HAnimSegment705.addChild(HAnimSite795)
HAnimSite798 = x3d.HAnimSite()
HAnimSite798.setDEF("hanim_l_tragion_pt")
HAnimSite798.setName("l_tragion_pt")
HAnimSite798.setTranslation(x3d.doubleToFloat([0.0739,1.6348,0.0282]))
TouchSensor799 = x3d.TouchSensor()
TouchSensor799.setDescription("HAnimSite l_tragion")

HAnimSite798.addChild(TouchSensor799)
Shape800 = x3d.Shape()
Shape800.setUSE("HAnimSiteShape")

HAnimSite798.addChild(Shape800)

HAnimSegment705.addChild(HAnimSite798)
HAnimSite801 = x3d.HAnimSite()
HAnimSite801.setDEF("hanim_l_gonion_pt")
HAnimSite801.setName("l_gonion_pt")
HAnimSite801.setTranslation(x3d.doubleToFloat([0.0631,1.553,0.033]))
TouchSensor802 = x3d.TouchSensor()
TouchSensor802.setDescription("HAnimSite l_gonion")

HAnimSite801.addChild(TouchSensor802)
Shape803 = x3d.Shape()
Shape803.setUSE("HAnimSiteShape")

HAnimSite801.addChild(Shape803)

HAnimSegment705.addChild(HAnimSite801)
HAnimSite804 = x3d.HAnimSite()
HAnimSite804.setDEF("hanim_nuchale_pt")
HAnimSite804.setName("nuchale_pt")
HAnimSite804.setTranslation(x3d.doubleToFloat([0.0039,1.5972,-0.0796]))
TouchSensor805 = x3d.TouchSensor()
TouchSensor805.setDescription("HAnimSite nuchale")

HAnimSite804.addChild(TouchSensor805)
Shape806 = x3d.Shape()
Shape806.setUSE("HAnimSiteShape")

HAnimSite804.addChild(Shape806)

HAnimSegment705.addChild(HAnimSite804)

HAnimJoint704.addChild(HAnimSegment705)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.setDEF("hanim_l_eyeball_joint")
HAnimJoint807.setName("l_eyeball_joint")
HAnimJoint807.setCenter(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.setDEF("hanim_l_eyeball")
HAnimSegment808.setName("l_eyeball")
TouchSensor809 = x3d.TouchSensor()
TouchSensor809.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment808.addChild(TouchSensor809)
Transform810 = x3d.Transform()
Transform810.setTranslation(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
Shape811 = x3d.Shape()
Shape811.setUSE("HAnimJointShape")

Transform810.addChild(Shape811)

HAnimSegment808.addChild(Transform810)
Shape812 = x3d.Shape()
LineSet813 = x3d.LineSet()
LineSet813.setVertexCount([2])
ColorRGBA814 = x3d.ColorRGBA()
ColorRGBA814.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA814.setColor(x3d.doubleToFloat([0,0,1,1,0,0,1,0.1]))

LineSet813.setColor(ColorRGBA814)
Coordinate815 = x3d.Coordinate()
Coordinate815.setPoint(x3d.doubleToFloat([0.0336,1.6332,0.0502,0.034,1.64,0.05]))

LineSet813.setCoord(Coordinate815)

Shape812.setGeometry(LineSet813)

HAnimSegment808.addChild(Shape812)
HAnimSite816 = x3d.HAnimSite()
HAnimSite816.setDEF("hanim_l_eyeball_site_view")
HAnimSite816.setName("l_eyeball_site_view")
HAnimSite816.setTranslation(x3d.doubleToFloat([0.034,1.64,0.05]))
TouchSensor817 = x3d.TouchSensor()
TouchSensor817.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite816.addChild(TouchSensor817)
Shape818 = x3d.Shape()
Shape818.setUSE("HAnimSiteShape")

HAnimSite816.addChild(Shape818)
Viewpoint819 = x3d.Viewpoint()
Viewpoint819.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint819.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint819.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint819.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite816.addChild(Viewpoint819)
Anchor820 = x3d.Anchor()
Anchor820.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor820.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD821 = x3d.LOD()
LOD821.setForceTransitions(True)
LOD821.setRange(x3d.doubleToFloat([0.04]))
WorldInfo822 = x3d.WorldInfo()
WorldInfo822.setInfo(["hide diamond when close"])

LOD821.addChild(WorldInfo822)
Shape823 = x3d.Shape()
Shape823.setDEF("HAnimSiteViewpointShape")
Appearance824 = x3d.Appearance()
Material825 = x3d.Material()
Material825.setDiffuseColor(x3d.doubleToFloat([0,0,1]))
Material825.setTransparency(0.6)

Appearance824.setMaterial(Material825)

Shape823.setAppearance(Appearance824)
IndexedFaceSet826 = x3d.IndexedFaceSet()
IndexedFaceSet826.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet826.setCreaseAngle(0.5)
IndexedFaceSet826.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate827 = x3d.Coordinate()
Coordinate827.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet826.setCoord(Coordinate827)

Shape823.setGeometry(IndexedFaceSet826)

LOD821.addChild(Shape823)

Anchor820.addChild(LOD821)

HAnimSite816.addChild(Anchor820)

HAnimSegment808.addChild(HAnimSite816)

HAnimJoint807.addChild(HAnimSegment808)

HAnimJoint704.addChild(HAnimJoint807)
HAnimJoint828 = x3d.HAnimJoint()
HAnimJoint828.setDEF("hanim_l_eyelid_joint")
HAnimJoint828.setName("l_eyelid_joint")
HAnimJoint828.setCenter(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
HAnimSegment829 = x3d.HAnimSegment()
HAnimSegment829.setDEF("hanim_l_eyelid")
HAnimSegment829.setName("l_eyelid")
TouchSensor830 = x3d.TouchSensor()
TouchSensor830.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment829.addChild(TouchSensor830)
Transform831 = x3d.Transform()
Transform831.setTranslation(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
Shape832 = x3d.Shape()
Shape832.setUSE("HAnimJointShape")

Transform831.addChild(Shape832)

HAnimSegment829.addChild(Transform831)

HAnimJoint828.addChild(HAnimSegment829)

HAnimJoint704.addChild(HAnimJoint828)
HAnimJoint833 = x3d.HAnimJoint()
HAnimJoint833.setDEF("hanim_l_eyebrow_joint")
HAnimJoint833.setName("l_eyebrow_joint")
HAnimJoint833.setCenter(x3d.doubleToFloat([0.0336,1.635,0.0506]))
HAnimSegment834 = x3d.HAnimSegment()
HAnimSegment834.setDEF("hanim_l_eyebrow")
HAnimSegment834.setName("l_eyebrow")
TouchSensor835 = x3d.TouchSensor()
TouchSensor835.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment834.addChild(TouchSensor835)
Transform836 = x3d.Transform()
Transform836.setTranslation(x3d.doubleToFloat([0.0336,1.635,0.0506]))
Shape837 = x3d.Shape()
Shape837.setUSE("HAnimJointShape")

Transform836.addChild(Shape837)

HAnimSegment834.addChild(Transform836)

HAnimJoint833.addChild(HAnimSegment834)

HAnimJoint704.addChild(HAnimJoint833)
HAnimJoint838 = x3d.HAnimJoint()
HAnimJoint838.setDEF("hanim_r_eyeball_joint")
HAnimJoint838.setName("r_eyeball_joint")
HAnimJoint838.setCenter(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
HAnimSegment839 = x3d.HAnimSegment()
HAnimSegment839.setDEF("hanim_r_eyeball")
HAnimSegment839.setName("r_eyeball")
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment839.addChild(TouchSensor840)
Transform841 = x3d.Transform()
Transform841.setTranslation(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
Shape842 = x3d.Shape()
Shape842.setUSE("HAnimJointShape")

Transform841.addChild(Shape842)

HAnimSegment839.addChild(Transform841)
Shape843 = x3d.Shape()
LineSet844 = x3d.LineSet()
LineSet844.setVertexCount([2])
ColorRGBA845 = x3d.ColorRGBA()
ColorRGBA845.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet844.setColor(ColorRGBA845)
Coordinate846 = x3d.Coordinate()
Coordinate846.setPoint(x3d.doubleToFloat([-0.0336,1.6332,0.0502,-0.034,1.64,0.05]))

LineSet844.setCoord(Coordinate846)

Shape843.setGeometry(LineSet844)

HAnimSegment839.addChild(Shape843)
HAnimSite847 = x3d.HAnimSite()
HAnimSite847.setDEF("hanim_r_eyeball_site_view")
HAnimSite847.setName("r_eyeball_site_view")
HAnimSite847.setTranslation(x3d.doubleToFloat([-0.034,1.64,0.05]))
TouchSensor848 = x3d.TouchSensor()
TouchSensor848.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite847.addChild(TouchSensor848)
Shape849 = x3d.Shape()
Shape849.setUSE("HAnimSiteShape")

HAnimSite847.addChild(Shape849)
Viewpoint850 = x3d.Viewpoint()
Viewpoint850.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint850.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint850.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint850.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite847.addChild(Viewpoint850)
Anchor851 = x3d.Anchor()
Anchor851.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor851.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD852 = x3d.LOD()
LOD852.setForceTransitions(True)
LOD852.setRange(x3d.doubleToFloat([0.04]))
WorldInfo853 = x3d.WorldInfo()
WorldInfo853.setInfo(["hide diamond when close"])

LOD852.addChild(WorldInfo853)
Shape854 = x3d.Shape()
Shape854.setUSE("HAnimSiteViewpointShape")

LOD852.addChild(Shape854)

Anchor851.addChild(LOD852)

HAnimSite847.addChild(Anchor851)

HAnimSegment839.addChild(HAnimSite847)

HAnimJoint838.addChild(HAnimSegment839)

HAnimJoint704.addChild(HAnimJoint838)
HAnimJoint855 = x3d.HAnimJoint()
HAnimJoint855.setDEF("hanim_r_eyelid_joint")
HAnimJoint855.setName("r_eyelid_joint")
HAnimJoint855.setCenter(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
HAnimSegment856 = x3d.HAnimSegment()
HAnimSegment856.setDEF("hanim_r_eyelid")
HAnimSegment856.setName("r_eyelid")
TouchSensor857 = x3d.TouchSensor()
TouchSensor857.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment856.addChild(TouchSensor857)
Transform858 = x3d.Transform()
Transform858.setTranslation(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
Shape859 = x3d.Shape()
Shape859.setUSE("HAnimJointShape")

Transform858.addChild(Shape859)

HAnimSegment856.addChild(Transform858)

HAnimJoint855.addChild(HAnimSegment856)

HAnimJoint704.addChild(HAnimJoint855)
HAnimJoint860 = x3d.HAnimJoint()
HAnimJoint860.setDEF("hanim_r_eyebrow_joint")
HAnimJoint860.setName("r_eyebrow_joint")
HAnimJoint860.setCenter(x3d.doubleToFloat([-0.0336,1.635,0.0506]))
HAnimSegment861 = x3d.HAnimSegment()
HAnimSegment861.setDEF("hanim_r_eyebrow")
HAnimSegment861.setName("r_eyebrow")
TouchSensor862 = x3d.TouchSensor()
TouchSensor862.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment861.addChild(TouchSensor862)
Transform863 = x3d.Transform()
Transform863.setTranslation(x3d.doubleToFloat([-0.0336,1.635,0.0506]))
Shape864 = x3d.Shape()
Shape864.setUSE("HAnimJointShape")

Transform863.addChild(Shape864)

HAnimSegment861.addChild(Transform863)

HAnimJoint860.addChild(HAnimSegment861)

HAnimJoint704.addChild(HAnimJoint860)
HAnimJoint865 = x3d.HAnimJoint()
HAnimJoint865.setDEF("hanim_temporomandibular")
HAnimJoint865.setName("temporomandibular")
HAnimJoint865.setCenter(x3d.doubleToFloat([0,1.63,0.015]))
HAnimSegment866 = x3d.HAnimSegment()
HAnimSegment866.setDEF("hanim_jaw")
HAnimSegment866.setName("jaw")
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment866.addChild(TouchSensor867)
Transform868 = x3d.Transform()
Transform868.setTranslation(x3d.doubleToFloat([0,1.63,0.015]))
Shape869 = x3d.Shape()
Shape869.setUSE("HAnimJointShape")

Transform868.addChild(Shape869)

HAnimSegment866.addChild(Transform868)
Shape870 = x3d.Shape()
LineSet871 = x3d.LineSet()
LineSet871.setVertexCount([2])
ColorRGBA872 = x3d.ColorRGBA()
ColorRGBA872.setUSE("HAnimSiteLineColorRGBA")

LineSet871.setColor(ColorRGBA872)
Coordinate873 = x3d.Coordinate()
Coordinate873.setPoint(x3d.doubleToFloat([0,1.63,0.015,0.045,1.63,0]))

LineSet871.setCoord(Coordinate873)

Shape870.setGeometry(LineSet871)

HAnimSegment866.addChild(Shape870)
Shape874 = x3d.Shape()
LineSet875 = x3d.LineSet()
LineSet875.setVertexCount([2])
ColorRGBA876 = x3d.ColorRGBA()
ColorRGBA876.setUSE("HAnimSiteLineColorRGBA")

LineSet875.setColor(ColorRGBA876)
Coordinate877 = x3d.Coordinate()
Coordinate877.setPoint(x3d.doubleToFloat([0,1.63,0.015,-0.045,1.63,0]))

LineSet875.setCoord(Coordinate877)

Shape874.setGeometry(LineSet875)

HAnimSegment866.addChild(Shape874)
HAnimSite878 = x3d.HAnimSite()
HAnimSite878.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite878.setName("temporomandibular_l_site_pt")
HAnimSite878.setTranslation(x3d.doubleToFloat([0.045,1.63,0]))
TouchSensor879 = x3d.TouchSensor()
TouchSensor879.setDescription("HAnimSite temporomandibular_l_site")

HAnimSite878.addChild(TouchSensor879)
Shape880 = x3d.Shape()
Shape880.setUSE("HAnimSiteShape")

HAnimSite878.addChild(Shape880)

HAnimSegment866.addChild(HAnimSite878)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite881.setName("temporomandibular_r_site_pt")
HAnimSite881.setTranslation(x3d.doubleToFloat([-0.045,1.63,0]))
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.setDescription("HAnimSite temporomandibular_r_site")

HAnimSite881.addChild(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.setUSE("HAnimSiteShape")

HAnimSite881.addChild(Shape883)

HAnimSegment866.addChild(HAnimSite881)

HAnimJoint865.addChild(HAnimSegment866)

HAnimJoint704.addChild(HAnimJoint865)

HAnimJoint695.addChild(HAnimJoint704)

HAnimJoint686.addChild(HAnimJoint695)

HAnimJoint677.addChild(HAnimJoint686)

HAnimJoint668.addChild(HAnimJoint677)

HAnimJoint659.addChild(HAnimJoint668)

HAnimJoint650.addChild(HAnimJoint659)

HAnimJoint627.addChild(HAnimJoint650)

HAnimJoint596.addChild(HAnimJoint627)
HAnimJoint884 = x3d.HAnimJoint()
HAnimJoint884.setDEF("hanim_l_sternoclavicular")
HAnimJoint884.setName("l_sternoclavicular")
HAnimJoint884.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimSegment885 = x3d.HAnimSegment()
HAnimSegment885.setDEF("hanim_l_clavicle")
HAnimSegment885.setName("l_clavicle")
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment885.addChild(TouchSensor886)
Transform887 = x3d.Transform()
Transform887.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Shape888 = x3d.Shape()
Shape888.setUSE("HAnimJointShape")

Transform887.addChild(Shape888)

HAnimSegment885.addChild(Transform887)
Shape889 = x3d.Shape()
LineSet890 = x3d.LineSet()
LineSet890.setVertexCount([2])
ColorRGBA891 = x3d.ColorRGBA()
ColorRGBA891.setUSE("HAnimSegmentLineColorRGBA")

LineSet890.setColor(ColorRGBA891)
Coordinate892 = x3d.Coordinate()
Coordinate892.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

LineSet890.setCoord(Coordinate892)

Shape889.setGeometry(LineSet890)

HAnimSegment885.addChild(Shape889)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.setVertexCount([2])
ColorRGBA895 = x3d.ColorRGBA()
ColorRGBA895.setUSE("HAnimSiteLineColorRGBA")

LineSet894.setColor(ColorRGBA895)
Coordinate896 = x3d.Coordinate()
Coordinate896.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]))

LineSet894.setCoord(Coordinate896)

Shape893.setGeometry(LineSet894)

HAnimSegment885.addChild(Shape893)
Shape897 = x3d.Shape()
LineSet898 = x3d.LineSet()
LineSet898.setVertexCount([2])
ColorRGBA899 = x3d.ColorRGBA()
ColorRGBA899.setUSE("HAnimSiteLineColorRGBA")

LineSet898.setColor(ColorRGBA899)
Coordinate900 = x3d.Coordinate()
Coordinate900.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.2032,1.476,-0.049]))

LineSet898.setCoord(Coordinate900)

Shape897.setGeometry(LineSet898)

HAnimSegment885.addChild(Shape897)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.setVertexCount([2])
ColorRGBA903 = x3d.ColorRGBA()
ColorRGBA903.setUSE("HAnimSiteLineColorRGBA")

LineSet902.setColor(ColorRGBA903)
Coordinate904 = x3d.Coordinate()
Coordinate904.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]))

LineSet902.setCoord(Coordinate904)

Shape901.setGeometry(LineSet902)

HAnimSegment885.addChild(Shape901)
Shape905 = x3d.Shape()
LineSet906 = x3d.LineSet()
LineSet906.setVertexCount([2])
ColorRGBA907 = x3d.ColorRGBA()
ColorRGBA907.setUSE("HAnimSiteLineColorRGBA")

LineSet906.setColor(ColorRGBA907)
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]))

LineSet906.setCoord(Coordinate908)

Shape905.setGeometry(LineSet906)

HAnimSegment885.addChild(Shape905)
HAnimSite909 = x3d.HAnimSite()
HAnimSite909.setDEF("hanim_l_clavicale_pt")
HAnimSite909.setName("l_clavicale_pt")
HAnimSite909.setTranslation(x3d.doubleToFloat([0.0271,1.4943,0.0394]))
TouchSensor910 = x3d.TouchSensor()
TouchSensor910.setDescription("HAnimSite l_clavicale")

HAnimSite909.addChild(TouchSensor910)
Shape911 = x3d.Shape()
Shape911.setUSE("HAnimSiteShape")

HAnimSite909.addChild(Shape911)

HAnimSegment885.addChild(HAnimSite909)
HAnimSite912 = x3d.HAnimSite()
HAnimSite912.setDEF("hanim_l_acromion_pt")
HAnimSite912.setName("l_acromion_pt")
HAnimSite912.setTranslation(x3d.doubleToFloat([0.2032,1.476,-0.049]))
TouchSensor913 = x3d.TouchSensor()
TouchSensor913.setDescription("HAnimSite l_acromion")

HAnimSite912.addChild(TouchSensor913)
Shape914 = x3d.Shape()
Shape914.setUSE("HAnimSiteShape")

HAnimSite912.addChild(Shape914)

HAnimSegment885.addChild(HAnimSite912)
HAnimSite915 = x3d.HAnimSite()
HAnimSite915.setDEF("hanim_l_axilla_ant_pt")
HAnimSite915.setName("l_axilla_ant_pt")
HAnimSite915.setTranslation(x3d.doubleToFloat([0.1777,1.4065,-0.0075]))
TouchSensor916 = x3d.TouchSensor()
TouchSensor916.setDescription("HAnimSite l_axilla_ant")

HAnimSite915.addChild(TouchSensor916)
Shape917 = x3d.Shape()
Shape917.setUSE("HAnimSiteShape")

HAnimSite915.addChild(Shape917)

HAnimSegment885.addChild(HAnimSite915)
HAnimSite918 = x3d.HAnimSite()
HAnimSite918.setDEF("hanim_l_axilla_post_pt")
HAnimSite918.setName("l_axilla_post_pt")
HAnimSite918.setTranslation(x3d.doubleToFloat([0.1706,1.4072,-0.0875]))
TouchSensor919 = x3d.TouchSensor()
TouchSensor919.setDescription("HAnimSite l_axilla_post")

HAnimSite918.addChild(TouchSensor919)
Shape920 = x3d.Shape()
Shape920.setUSE("HAnimSiteShape")

HAnimSite918.addChild(Shape920)

HAnimSegment885.addChild(HAnimSite918)

HAnimJoint884.addChild(HAnimSegment885)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.setDEF("hanim_l_acromioclavicular")
HAnimJoint921.setName("l_acromioclavicular")
HAnimJoint921.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimSegment922 = x3d.HAnimSegment()
HAnimSegment922.setDEF("hanim_l_scapula")
HAnimSegment922.setName("l_scapula")
TouchSensor923 = x3d.TouchSensor()
TouchSensor923.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment922.addChild(TouchSensor923)
Transform924 = x3d.Transform()
Transform924.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Shape925 = x3d.Shape()
Shape925.setUSE("HAnimJointShape")

Transform924.addChild(Shape925)

HAnimSegment922.addChild(Transform924)
Shape926 = x3d.Shape()
LineSet927 = x3d.LineSet()
LineSet927.setVertexCount([2])
ColorRGBA928 = x3d.ColorRGBA()
ColorRGBA928.setUSE("HAnimSegmentLineColorRGBA")

LineSet927.setColor(ColorRGBA928)
Coordinate929 = x3d.Coordinate()
Coordinate929.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]))

LineSet927.setCoord(Coordinate929)

Shape926.setGeometry(LineSet927)

HAnimSegment922.addChild(Shape926)

HAnimJoint921.addChild(HAnimSegment922)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.setDEF("hanim_l_shoulder")
HAnimJoint930.setName("l_shoulder")
HAnimJoint930.setCenter(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
HAnimSegment931 = x3d.HAnimSegment()
HAnimSegment931.setDEF("hanim_l_upperarm")
HAnimSegment931.setName("l_upperarm")
TouchSensor932 = x3d.TouchSensor()
TouchSensor932.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment931.addChild(TouchSensor932)
Transform933 = x3d.Transform()
Transform933.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Shape934 = x3d.Shape()
Shape934.setUSE("HAnimJointShape")

Transform933.addChild(Shape934)

HAnimSegment931.addChild(Transform933)
Shape935 = x3d.Shape()
LineSet936 = x3d.LineSet()
LineSet936.setVertexCount([2])
ColorRGBA937 = x3d.ColorRGBA()
ColorRGBA937.setUSE("HAnimSegmentLineColorRGBA")

LineSet936.setColor(ColorRGBA937)
Coordinate938 = x3d.Coordinate()
Coordinate938.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]))

LineSet936.setCoord(Coordinate938)

Shape935.setGeometry(LineSet936)

HAnimSegment931.addChild(Shape935)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.setVertexCount([2])
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.setUSE("HAnimSiteLineColorRGBA")

LineSet940.setColor(ColorRGBA941)
Coordinate942 = x3d.Coordinate()
Coordinate942.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]))

LineSet940.setCoord(Coordinate942)

Shape939.setGeometry(LineSet940)

HAnimSegment931.addChild(Shape939)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite943.setName("l_humeral_lateral_epicn_pt")
HAnimSite943.setTranslation(x3d.doubleToFloat([0.228,1.1482,-0.11]))
TouchSensor944 = x3d.TouchSensor()
TouchSensor944.setDescription("HAnimSite l_humeral_lateral_epicn")

HAnimSite943.addChild(TouchSensor944)
Shape945 = x3d.Shape()
Shape945.setUSE("HAnimSiteShape")

HAnimSite943.addChild(Shape945)

HAnimSegment931.addChild(HAnimSite943)

HAnimJoint930.addChild(HAnimSegment931)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.setDEF("hanim_l_elbow")
HAnimJoint946.setName("l_elbow")
HAnimJoint946.setCenter(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.setDEF("hanim_l_forearm")
HAnimSegment947.setName("l_forearm")
TouchSensor948 = x3d.TouchSensor()
TouchSensor948.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment947.addChild(TouchSensor948)
Transform949 = x3d.Transform()
Transform949.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Shape950 = x3d.Shape()
Shape950.setUSE("HAnimJointShape")

Transform949.addChild(Shape950)

HAnimSegment947.addChild(Transform949)
Shape951 = x3d.Shape()
LineSet952 = x3d.LineSet()
LineSet952.setVertexCount([2])
ColorRGBA953 = x3d.ColorRGBA()
ColorRGBA953.setUSE("HAnimSegmentLineColorRGBA")

LineSet952.setColor(ColorRGBA953)
Coordinate954 = x3d.Coordinate()
Coordinate954.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]))

LineSet952.setCoord(Coordinate954)

Shape951.setGeometry(LineSet952)

HAnimSegment947.addChild(Shape951)
Shape955 = x3d.Shape()
LineSet956 = x3d.LineSet()
LineSet956.setVertexCount([2])
ColorRGBA957 = x3d.ColorRGBA()
ColorRGBA957.setUSE("HAnimSiteLineColorRGBA")

LineSet956.setColor(ColorRGBA957)
Coordinate958 = x3d.Coordinate()
Coordinate958.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]))

LineSet956.setCoord(Coordinate958)

Shape955.setGeometry(LineSet956)

HAnimSegment947.addChild(Shape955)
Shape959 = x3d.Shape()
LineSet960 = x3d.LineSet()
LineSet960.setVertexCount([2])
ColorRGBA961 = x3d.ColorRGBA()
ColorRGBA961.setUSE("HAnimSiteLineColorRGBA")

LineSet960.setColor(ColorRGBA961)
Coordinate962 = x3d.Coordinate()
Coordinate962.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]))

LineSet960.setCoord(Coordinate962)

Shape959.setGeometry(LineSet960)

HAnimSegment947.addChild(Shape959)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.setVertexCount([2])
ColorRGBA965 = x3d.ColorRGBA()
ColorRGBA965.setUSE("HAnimSiteLineColorRGBA")

LineSet964.setColor(ColorRGBA965)
Coordinate966 = x3d.Coordinate()
Coordinate966.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]))

LineSet964.setCoord(Coordinate966)

Shape963.setGeometry(LineSet964)

HAnimSegment947.addChild(Shape963)
Shape967 = x3d.Shape()
LineSet968 = x3d.LineSet()
LineSet968.setVertexCount([2])
ColorRGBA969 = x3d.ColorRGBA()
ColorRGBA969.setUSE("HAnimSiteLineColorRGBA")

LineSet968.setColor(ColorRGBA969)
Coordinate970 = x3d.Coordinate()
Coordinate970.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]))

LineSet968.setCoord(Coordinate970)

Shape967.setGeometry(LineSet968)

HAnimSegment947.addChild(Shape967)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.setDEF("hanim_l_radial_styloid_pt")
HAnimSite971.setName("l_radial_styloid_pt")
HAnimSite971.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.setDescription("HAnimSite l_radial_styloid")

HAnimSite971.addChild(TouchSensor972)
Shape973 = x3d.Shape()
Shape973.setUSE("HAnimSiteShape")

HAnimSite971.addChild(Shape973)

HAnimSegment947.addChild(HAnimSite971)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.setDEF("hanim_l_olecranon_pt")
HAnimSite974.setName("l_olecranon_pt")
HAnimSite974.setTranslation(x3d.doubleToFloat([0.1962,1.1375,-0.1123]))
TouchSensor975 = x3d.TouchSensor()
TouchSensor975.setDescription("HAnimSite l_olecranon")

HAnimSite974.addChild(TouchSensor975)
Shape976 = x3d.Shape()
Shape976.setUSE("HAnimSiteShape")

HAnimSite974.addChild(Shape976)

HAnimSegment947.addChild(HAnimSite974)
HAnimSite977 = x3d.HAnimSite()
HAnimSite977.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite977.setName("l_humeral_medial_epicn_pt")
HAnimSite977.setTranslation(x3d.doubleToFloat([0.1735,1.1272,-0.1113]))
TouchSensor978 = x3d.TouchSensor()
TouchSensor978.setDescription("HAnimSite l_humeral_medial_epicn")

HAnimSite977.addChild(TouchSensor978)
Shape979 = x3d.Shape()
Shape979.setUSE("HAnimSiteShape")

HAnimSite977.addChild(Shape979)

HAnimSegment947.addChild(HAnimSite977)
HAnimSite980 = x3d.HAnimSite()
HAnimSite980.setDEF("hanim_l_radiale_pt")
HAnimSite980.setName("l_radiale_pt")
HAnimSite980.setTranslation(x3d.doubleToFloat([0.2182,1.1212,-0.1167]))
TouchSensor981 = x3d.TouchSensor()
TouchSensor981.setDescription("HAnimSite l_radiale")

HAnimSite980.addChild(TouchSensor981)
Shape982 = x3d.Shape()
Shape982.setUSE("HAnimSiteShape")

HAnimSite980.addChild(Shape982)

HAnimSegment947.addChild(HAnimSite980)

HAnimJoint946.addChild(HAnimSegment947)
HAnimJoint983 = x3d.HAnimJoint()
HAnimJoint983.setDEF("hanim_l_wrist")
HAnimJoint983.setName("l_wrist")
HAnimJoint983.setCenter(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.setDEF("hanim_l_hand")
HAnimSegment984.setName("l_hand")
TouchSensor985 = x3d.TouchSensor()
TouchSensor985.setDescription("HAnimJoint l_wrist, HAnimSegment l_hand")

HAnimSegment984.addChild(TouchSensor985)
Transform986 = x3d.Transform()
Transform986.setTranslation(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
Shape987 = x3d.Shape()
Shape987.setUSE("HAnimJointShape")

Transform986.addChild(Shape987)

HAnimSegment984.addChild(Transform986)
Shape988 = x3d.Shape()
LineSet989 = x3d.LineSet()
LineSet989.setVertexCount([2])
ColorRGBA990 = x3d.ColorRGBA()
ColorRGBA990.setUSE("HAnimSegmentLineColorRGBA")

LineSet989.setColor(ColorRGBA990)
Coordinate991 = x3d.Coordinate()
Coordinate991.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]))

LineSet989.setCoord(Coordinate991)

Shape988.setGeometry(LineSet989)

HAnimSegment984.addChild(Shape988)
Shape992 = x3d.Shape()
LineSet993 = x3d.LineSet()
LineSet993.setVertexCount([2])
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.setUSE("HAnimSegmentLineColorRGBA")

LineSet993.setColor(ColorRGBA994)
Coordinate995 = x3d.Coordinate()
Coordinate995.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]))

LineSet993.setCoord(Coordinate995)

Shape992.setGeometry(LineSet993)

HAnimSegment984.addChild(Shape992)
Shape996 = x3d.Shape()
LineSet997 = x3d.LineSet()
LineSet997.setVertexCount([2])
ColorRGBA998 = x3d.ColorRGBA()
ColorRGBA998.setUSE("HAnimSegmentLineColorRGBA")

LineSet997.setColor(ColorRGBA998)
Coordinate999 = x3d.Coordinate()
Coordinate999.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]))

LineSet997.setCoord(Coordinate999)

Shape996.setGeometry(LineSet997)

HAnimSegment984.addChild(Shape996)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.setVertexCount([2])
ColorRGBA1002 = x3d.ColorRGBA()
ColorRGBA1002.setUSE("HAnimSegmentLineColorRGBA")

LineSet1001.setColor(ColorRGBA1002)
Coordinate1003 = x3d.Coordinate()
Coordinate1003.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]))

LineSet1001.setCoord(Coordinate1003)

Shape1000.setGeometry(LineSet1001)

HAnimSegment984.addChild(Shape1000)
Shape1004 = x3d.Shape()
LineSet1005 = x3d.LineSet()
LineSet1005.setVertexCount([2])
ColorRGBA1006 = x3d.ColorRGBA()
ColorRGBA1006.setUSE("HAnimSegmentLineColorRGBA")

LineSet1005.setColor(ColorRGBA1006)
Coordinate1007 = x3d.Coordinate()
Coordinate1007.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]))

LineSet1005.setCoord(Coordinate1007)

Shape1004.setGeometry(LineSet1005)

HAnimSegment984.addChild(Shape1004)
Shape1008 = x3d.Shape()
LineSet1009 = x3d.LineSet()
LineSet1009.setVertexCount([2])
ColorRGBA1010 = x3d.ColorRGBA()
ColorRGBA1010.setUSE("HAnimSiteLineColorRGBA")

LineSet1009.setColor(ColorRGBA1010)
Coordinate1011 = x3d.Coordinate()
Coordinate1011.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]))

LineSet1009.setCoord(Coordinate1011)

Shape1008.setGeometry(LineSet1009)

HAnimSegment984.addChild(Shape1008)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.setVertexCount([2])
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.setUSE("HAnimSiteLineColorRGBA")

LineSet1013.setColor(ColorRGBA1014)
Coordinate1015 = x3d.Coordinate()
Coordinate1015.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]))

LineSet1013.setCoord(Coordinate1015)

Shape1012.setGeometry(LineSet1013)

HAnimSegment984.addChild(Shape1012)
Shape1016 = x3d.Shape()
LineSet1017 = x3d.LineSet()
LineSet1017.setVertexCount([2])
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.setUSE("HAnimSiteLineColorRGBA")

LineSet1017.setColor(ColorRGBA1018)
Coordinate1019 = x3d.Coordinate()
Coordinate1019.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]))

LineSet1017.setCoord(Coordinate1019)

Shape1016.setGeometry(LineSet1017)

HAnimSegment984.addChild(Shape1016)
Shape1020 = x3d.Shape()
LineSet1021 = x3d.LineSet()
LineSet1021.setVertexCount([2])
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1021.setColor(ColorRGBA1022)
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.3,0.75,0.45]))

LineSet1021.setCoord(Coordinate1023)

Shape1020.setGeometry(LineSet1021)

HAnimSegment984.addChild(Shape1020)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite1024.setName("l_metacarpal_pha2_pt")
HAnimSite1024.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
TouchSensor1025 = x3d.TouchSensor()
TouchSensor1025.setDescription("HAnimSite l_metacarpal_pha2")

HAnimSite1024.addChild(TouchSensor1025)
Shape1026 = x3d.Shape()
Shape1026.setUSE("HAnimSiteShape")

HAnimSite1024.addChild(Shape1026)

HAnimSegment984.addChild(HAnimSite1024)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1027.setName("l_ulnar_styloid_pt")
HAnimSite1027.setTranslation(x3d.doubleToFloat([0.2142,0.8529,-0.0648]))
TouchSensor1028 = x3d.TouchSensor()
TouchSensor1028.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite1027.addChild(TouchSensor1028)
Shape1029 = x3d.Shape()
Shape1029.setUSE("HAnimSiteShape")

HAnimSite1027.addChild(Shape1029)

HAnimSegment984.addChild(HAnimSite1027)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite1030.setName("l_metacarpal_pha5_pt")
HAnimSite1030.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.setDescription("HAnimSite l_metacarpal_pha5")

HAnimSite1030.addChild(TouchSensor1031)
Shape1032 = x3d.Shape()
Shape1032.setUSE("HAnimSiteShape")

HAnimSite1030.addChild(Shape1032)

HAnimSegment984.addChild(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setDEF("hanim_l_hand_front_view")
HAnimSite1033.setName("l_hand_front_view")
HAnimSite1033.setTranslation(x3d.doubleToFloat([0.3,0.75,0.45]))
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.setDescription("HAnimSite l_hand_front_view")

HAnimSite1033.addChild(TouchSensor1034)
Shape1035 = x3d.Shape()
Shape1035.setUSE("HAnimSiteShape")

HAnimSite1033.addChild(Shape1035)
Viewpoint1036 = x3d.Viewpoint()
Viewpoint1036.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1036.setDescription("left hand front")
Viewpoint1036.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1036.setCenterOfRotation(x3d.doubleToFloat([0,0.7,0]))

HAnimSite1033.addChild(Viewpoint1036)
Anchor1037 = x3d.Anchor()
Anchor1037.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1037.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1038 = x3d.LOD()
LOD1038.setForceTransitions(True)
LOD1038.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1039 = x3d.WorldInfo()
WorldInfo1039.setInfo(["hide diamond when close"])

LOD1038.addChild(WorldInfo1039)
Shape1040 = x3d.Shape()
Shape1040.setUSE("HAnimSiteViewpointShape")

LOD1038.addChild(Shape1040)

Anchor1037.addChild(LOD1038)

HAnimSite1033.addChild(Anchor1037)

HAnimSegment984.addChild(HAnimSite1033)

HAnimJoint983.addChild(HAnimSegment984)
HAnimJoint1041 = x3d.HAnimJoint()
HAnimJoint1041.setDEF("hanim_l_thumb1")
HAnimJoint1041.setName("l_thumb1")
HAnimJoint1041.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimSegment1042 = x3d.HAnimSegment()
HAnimSegment1042.setDEF("hanim_l_thumb_metacarpal")
HAnimSegment1042.setName("l_thumb_metacarpal")
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")

HAnimSegment1042.addChild(TouchSensor1043)
Transform1044 = x3d.Transform()
Transform1044.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape1045 = x3d.Shape()
Shape1045.setUSE("HAnimJointShape")

Transform1044.addChild(Shape1045)

HAnimSegment1042.addChild(Transform1044)
Shape1046 = x3d.Shape()
LineSet1047 = x3d.LineSet()
LineSet1047.setVertexCount([2])
ColorRGBA1048 = x3d.ColorRGBA()
ColorRGBA1048.setUSE("HAnimSegmentLineColorRGBA")

LineSet1047.setColor(ColorRGBA1048)
Coordinate1049 = x3d.Coordinate()
Coordinate1049.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

LineSet1047.setCoord(Coordinate1049)

Shape1046.setGeometry(LineSet1047)

HAnimSegment1042.addChild(Shape1046)

HAnimJoint1041.addChild(HAnimSegment1042)
HAnimJoint1050 = x3d.HAnimJoint()
HAnimJoint1050.setDEF("hanim_l_thumb2")
HAnimJoint1050.setName("l_thumb2")
HAnimJoint1050.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimSegment1051 = x3d.HAnimSegment()
HAnimSegment1051.setDEF("hanim_l_thumb_proximal")
HAnimSegment1051.setName("l_thumb_proximal")
TouchSensor1052 = x3d.TouchSensor()
TouchSensor1052.setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")

HAnimSegment1051.addChild(TouchSensor1052)
Transform1053 = x3d.Transform()
Transform1053.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape1054 = x3d.Shape()
Shape1054.setUSE("HAnimJointShape")

Transform1053.addChild(Shape1054)

HAnimSegment1051.addChild(Transform1053)
Shape1055 = x3d.Shape()
LineSet1056 = x3d.LineSet()
LineSet1056.setVertexCount([2])
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.setUSE("HAnimSegmentLineColorRGBA")

LineSet1056.setColor(ColorRGBA1057)
Coordinate1058 = x3d.Coordinate()
Coordinate1058.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

LineSet1056.setCoord(Coordinate1058)

Shape1055.setGeometry(LineSet1056)

HAnimSegment1051.addChild(Shape1055)

HAnimJoint1050.addChild(HAnimSegment1051)
HAnimJoint1059 = x3d.HAnimJoint()
HAnimJoint1059.setDEF("hanim_l_thumb3")
HAnimJoint1059.setName("l_thumb3")
HAnimJoint1059.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimSegment1060 = x3d.HAnimSegment()
HAnimSegment1060.setDEF("hanim_l_thumb_distal")
HAnimSegment1060.setName("l_thumb_distal")
TouchSensor1061 = x3d.TouchSensor()
TouchSensor1061.setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")

HAnimSegment1060.addChild(TouchSensor1061)
Transform1062 = x3d.Transform()
Transform1062.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape1063 = x3d.Shape()
Shape1063.setUSE("HAnimJointShape")

Transform1062.addChild(Shape1063)

HAnimSegment1060.addChild(Transform1062)
Shape1064 = x3d.Shape()
LineSet1065 = x3d.LineSet()
LineSet1065.setVertexCount([2])
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.setUSE("HAnimSiteLineColorRGBA")

LineSet1065.setColor(ColorRGBA1066)
Coordinate1067 = x3d.Coordinate()
Coordinate1067.setPoint(x3d.doubleToFloat([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]))

LineSet1065.setCoord(Coordinate1067)

Shape1064.setGeometry(LineSet1065)

HAnimSegment1060.addChild(Shape1064)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.setDEF("hanim_l_thumb_distal_tip")
HAnimSite1068.setName("l_thumb_distal_tip")
HAnimSite1068.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
TouchSensor1069 = x3d.TouchSensor()
TouchSensor1069.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1068.addChild(TouchSensor1069)
Shape1070 = x3d.Shape()
Shape1070.setUSE("HAnimSiteShape")

HAnimSite1068.addChild(Shape1070)

HAnimSegment1060.addChild(HAnimSite1068)

HAnimJoint1059.addChild(HAnimSegment1060)

HAnimJoint1050.addChild(HAnimJoint1059)

HAnimJoint1041.addChild(HAnimJoint1050)

HAnimJoint983.addChild(HAnimJoint1041)
HAnimJoint1071 = x3d.HAnimJoint()
HAnimJoint1071.setDEF("hanim_l_index0")
HAnimJoint1071.setName("l_index0")
HAnimJoint1071.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimSegment1072 = x3d.HAnimSegment()
HAnimSegment1072.setDEF("hanim_l_index_metacarpal")
HAnimSegment1072.setName("l_index_metacarpal")
TouchSensor1073 = x3d.TouchSensor()
TouchSensor1073.setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")

HAnimSegment1072.addChild(TouchSensor1073)
Transform1074 = x3d.Transform()
Transform1074.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape1075 = x3d.Shape()
Shape1075.setUSE("HAnimJointShape")

Transform1074.addChild(Shape1075)

HAnimSegment1072.addChild(Transform1074)
Shape1076 = x3d.Shape()
LineSet1077 = x3d.LineSet()
LineSet1077.setVertexCount([2])
ColorRGBA1078 = x3d.ColorRGBA()
ColorRGBA1078.setUSE("HAnimSegmentLineColorRGBA")

LineSet1077.setColor(ColorRGBA1078)
Coordinate1079 = x3d.Coordinate()
Coordinate1079.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

LineSet1077.setCoord(Coordinate1079)

Shape1076.setGeometry(LineSet1077)

HAnimSegment1072.addChild(Shape1076)

HAnimJoint1071.addChild(HAnimSegment1072)
HAnimJoint1080 = x3d.HAnimJoint()
HAnimJoint1080.setDEF("hanim_l_index1")
HAnimJoint1080.setName("l_index1")
HAnimJoint1080.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimSegment1081 = x3d.HAnimSegment()
HAnimSegment1081.setDEF("hanim_l_index_proximal")
HAnimSegment1081.setName("l_index_proximal")
TouchSensor1082 = x3d.TouchSensor()
TouchSensor1082.setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal")

HAnimSegment1081.addChild(TouchSensor1082)
Transform1083 = x3d.Transform()
Transform1083.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape1084 = x3d.Shape()
Shape1084.setUSE("HAnimJointShape")

Transform1083.addChild(Shape1084)

HAnimSegment1081.addChild(Transform1083)
Shape1085 = x3d.Shape()
LineSet1086 = x3d.LineSet()
LineSet1086.setVertexCount([2])
ColorRGBA1087 = x3d.ColorRGBA()
ColorRGBA1087.setUSE("HAnimSegmentLineColorRGBA")

LineSet1086.setColor(ColorRGBA1087)
Coordinate1088 = x3d.Coordinate()
Coordinate1088.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

LineSet1086.setCoord(Coordinate1088)

Shape1085.setGeometry(LineSet1086)

HAnimSegment1081.addChild(Shape1085)

HAnimJoint1080.addChild(HAnimSegment1081)
HAnimJoint1089 = x3d.HAnimJoint()
HAnimJoint1089.setDEF("hanim_l_index2")
HAnimJoint1089.setName("l_index2")
HAnimJoint1089.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimSegment1090 = x3d.HAnimSegment()
HAnimSegment1090.setDEF("hanim_l_index_middle")
HAnimSegment1090.setName("l_index_middle")
TouchSensor1091 = x3d.TouchSensor()
TouchSensor1091.setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle")

HAnimSegment1090.addChild(TouchSensor1091)
Transform1092 = x3d.Transform()
Transform1092.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape1093 = x3d.Shape()
Shape1093.setUSE("HAnimJointShape")

Transform1092.addChild(Shape1093)

HAnimSegment1090.addChild(Transform1092)
Shape1094 = x3d.Shape()
LineSet1095 = x3d.LineSet()
LineSet1095.setVertexCount([2])
ColorRGBA1096 = x3d.ColorRGBA()
ColorRGBA1096.setUSE("HAnimSegmentLineColorRGBA")

LineSet1095.setColor(ColorRGBA1096)
Coordinate1097 = x3d.Coordinate()
Coordinate1097.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

LineSet1095.setCoord(Coordinate1097)

Shape1094.setGeometry(LineSet1095)

HAnimSegment1090.addChild(Shape1094)

HAnimJoint1089.addChild(HAnimSegment1090)
HAnimJoint1098 = x3d.HAnimJoint()
HAnimJoint1098.setDEF("hanim_l_index3")
HAnimJoint1098.setName("l_index3")
HAnimJoint1098.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimSegment1099 = x3d.HAnimSegment()
HAnimSegment1099.setDEF("hanim_l_index_distal")
HAnimSegment1099.setName("l_index_distal")
TouchSensor1100 = x3d.TouchSensor()
TouchSensor1100.setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal")

HAnimSegment1099.addChild(TouchSensor1100)
Transform1101 = x3d.Transform()
Transform1101.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape1102 = x3d.Shape()
Shape1102.setUSE("HAnimJointShape")

Transform1101.addChild(Shape1102)

HAnimSegment1099.addChild(Transform1101)
Shape1103 = x3d.Shape()
LineSet1104 = x3d.LineSet()
LineSet1104.setVertexCount([2])
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.setUSE("HAnimSiteLineColorRGBA")

LineSet1104.setColor(ColorRGBA1105)
Coordinate1106 = x3d.Coordinate()
Coordinate1106.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]))

LineSet1104.setCoord(Coordinate1106)

Shape1103.setGeometry(LineSet1104)

HAnimSegment1099.addChild(Shape1103)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.setVertexCount([2])
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.setUSE("HAnimSiteLineColorRGBA")

LineSet1108.setColor(ColorRGBA1109)
Coordinate1110 = x3d.Coordinate()
Coordinate1110.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]))

LineSet1108.setCoord(Coordinate1110)

Shape1107.setGeometry(LineSet1108)

HAnimSegment1099.addChild(Shape1107)
HAnimSite1111 = x3d.HAnimSite()
HAnimSite1111.setDEF("hanim_l_index_distal_tip")
HAnimSite1111.setName("l_index_distal_tip")
HAnimSite1111.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
TouchSensor1112 = x3d.TouchSensor()
TouchSensor1112.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1111.addChild(TouchSensor1112)
Shape1113 = x3d.Shape()
Shape1113.setUSE("HAnimSiteShape")

HAnimSite1111.addChild(Shape1113)

HAnimSegment1099.addChild(HAnimSite1111)
HAnimSite1114 = x3d.HAnimSite()
HAnimSite1114.setDEF("hanim_l_dactylion_pt")
HAnimSite1114.setName("l_dactylion_pt")
HAnimSite1114.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
TouchSensor1115 = x3d.TouchSensor()
TouchSensor1115.setDescription("HAnimSite l_dactylion")

HAnimSite1114.addChild(TouchSensor1115)
Shape1116 = x3d.Shape()
Shape1116.setUSE("HAnimSiteShape")

HAnimSite1114.addChild(Shape1116)

HAnimSegment1099.addChild(HAnimSite1114)

HAnimJoint1098.addChild(HAnimSegment1099)

HAnimJoint1089.addChild(HAnimJoint1098)

HAnimJoint1080.addChild(HAnimJoint1089)

HAnimJoint1071.addChild(HAnimJoint1080)

HAnimJoint983.addChild(HAnimJoint1071)
HAnimJoint1117 = x3d.HAnimJoint()
HAnimJoint1117.setDEF("hanim_l_middle0")
HAnimJoint1117.setName("l_middle0")
HAnimJoint1117.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimSegment1118 = x3d.HAnimSegment()
HAnimSegment1118.setDEF("hanim_l_middle_metacarpal")
HAnimSegment1118.setName("l_middle_metacarpal")
TouchSensor1119 = x3d.TouchSensor()
TouchSensor1119.setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")

HAnimSegment1118.addChild(TouchSensor1119)
Transform1120 = x3d.Transform()
Transform1120.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Shape1121 = x3d.Shape()
Shape1121.setUSE("HAnimJointShape")

Transform1120.addChild(Shape1121)

HAnimSegment1118.addChild(Transform1120)
Shape1122 = x3d.Shape()
LineSet1123 = x3d.LineSet()
LineSet1123.setVertexCount([2])
ColorRGBA1124 = x3d.ColorRGBA()
ColorRGBA1124.setUSE("HAnimSegmentLineColorRGBA")

LineSet1123.setColor(ColorRGBA1124)
Coordinate1125 = x3d.Coordinate()
Coordinate1125.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

LineSet1123.setCoord(Coordinate1125)

Shape1122.setGeometry(LineSet1123)

HAnimSegment1118.addChild(Shape1122)

HAnimJoint1117.addChild(HAnimSegment1118)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.setDEF("hanim_l_middle1")
HAnimJoint1126.setName("l_middle1")
HAnimJoint1126.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.setDEF("hanim_l_middle_proximal")
HAnimSegment1127.setName("l_middle_proximal")
TouchSensor1128 = x3d.TouchSensor()
TouchSensor1128.setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")

HAnimSegment1127.addChild(TouchSensor1128)
Transform1129 = x3d.Transform()
Transform1129.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Shape1130 = x3d.Shape()
Shape1130.setUSE("HAnimJointShape")

Transform1129.addChild(Shape1130)

HAnimSegment1127.addChild(Transform1129)
Shape1131 = x3d.Shape()
LineSet1132 = x3d.LineSet()
LineSet1132.setVertexCount([2])
ColorRGBA1133 = x3d.ColorRGBA()
ColorRGBA1133.setUSE("HAnimSegmentLineColorRGBA")

LineSet1132.setColor(ColorRGBA1133)
Coordinate1134 = x3d.Coordinate()
Coordinate1134.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

LineSet1132.setCoord(Coordinate1134)

Shape1131.setGeometry(LineSet1132)

HAnimSegment1127.addChild(Shape1131)

HAnimJoint1126.addChild(HAnimSegment1127)
HAnimJoint1135 = x3d.HAnimJoint()
HAnimJoint1135.setDEF("hanim_l_middle2")
HAnimJoint1135.setName("l_middle2")
HAnimJoint1135.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimSegment1136 = x3d.HAnimSegment()
HAnimSegment1136.setDEF("hanim_l_middle_middle")
HAnimSegment1136.setName("l_middle_middle")
TouchSensor1137 = x3d.TouchSensor()
TouchSensor1137.setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle")

HAnimSegment1136.addChild(TouchSensor1137)
Transform1138 = x3d.Transform()
Transform1138.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Shape1139 = x3d.Shape()
Shape1139.setUSE("HAnimJointShape")

Transform1138.addChild(Shape1139)

HAnimSegment1136.addChild(Transform1138)
Shape1140 = x3d.Shape()
LineSet1141 = x3d.LineSet()
LineSet1141.setVertexCount([2])
ColorRGBA1142 = x3d.ColorRGBA()
ColorRGBA1142.setUSE("HAnimSegmentLineColorRGBA")

LineSet1141.setColor(ColorRGBA1142)
Coordinate1143 = x3d.Coordinate()
Coordinate1143.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

LineSet1141.setCoord(Coordinate1143)

Shape1140.setGeometry(LineSet1141)

HAnimSegment1136.addChild(Shape1140)

HAnimJoint1135.addChild(HAnimSegment1136)
HAnimJoint1144 = x3d.HAnimJoint()
HAnimJoint1144.setDEF("hanim_l_middle3")
HAnimJoint1144.setName("l_middle3")
HAnimJoint1144.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimSegment1145 = x3d.HAnimSegment()
HAnimSegment1145.setDEF("hanim_l_middle_distal")
HAnimSegment1145.setName("l_middle_distal")
TouchSensor1146 = x3d.TouchSensor()
TouchSensor1146.setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal")

HAnimSegment1145.addChild(TouchSensor1146)
Transform1147 = x3d.Transform()
Transform1147.setTranslation(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
Shape1148 = x3d.Shape()
Shape1148.setUSE("HAnimJointShape")

Transform1147.addChild(Shape1148)

HAnimSegment1145.addChild(Transform1147)
Shape1149 = x3d.Shape()
LineSet1150 = x3d.LineSet()
LineSet1150.setVertexCount([2])
ColorRGBA1151 = x3d.ColorRGBA()
ColorRGBA1151.setUSE("HAnimSiteLineColorRGBA")

LineSet1150.setColor(ColorRGBA1151)
Coordinate1152 = x3d.Coordinate()
Coordinate1152.setPoint(x3d.doubleToFloat([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]))

LineSet1150.setCoord(Coordinate1152)

Shape1149.setGeometry(LineSet1150)

HAnimSegment1145.addChild(Shape1149)
HAnimSite1153 = x3d.HAnimSite()
HAnimSite1153.setDEF("hanim_l_middle_distal_tip")
HAnimSite1153.setName("l_middle_distal_tip")
HAnimSite1153.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
TouchSensor1154 = x3d.TouchSensor()
TouchSensor1154.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1153.addChild(TouchSensor1154)
Shape1155 = x3d.Shape()
Shape1155.setUSE("HAnimSiteShape")

HAnimSite1153.addChild(Shape1155)

HAnimSegment1145.addChild(HAnimSite1153)

HAnimJoint1144.addChild(HAnimSegment1145)

HAnimJoint1135.addChild(HAnimJoint1144)

HAnimJoint1126.addChild(HAnimJoint1135)

HAnimJoint1117.addChild(HAnimJoint1126)

HAnimJoint983.addChild(HAnimJoint1117)
HAnimJoint1156 = x3d.HAnimJoint()
HAnimJoint1156.setDEF("hanim_l_ring0")
HAnimJoint1156.setName("l_ring0")
HAnimJoint1156.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimSegment1157 = x3d.HAnimSegment()
HAnimSegment1157.setDEF("hanim_l_ring_metacarpal")
HAnimSegment1157.setName("l_ring_metacarpal")
TouchSensor1158 = x3d.TouchSensor()
TouchSensor1158.setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")

HAnimSegment1157.addChild(TouchSensor1158)
Transform1159 = x3d.Transform()
Transform1159.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Shape1160 = x3d.Shape()
Shape1160.setUSE("HAnimJointShape")

Transform1159.addChild(Shape1160)

HAnimSegment1157.addChild(Transform1159)
Shape1161 = x3d.Shape()
LineSet1162 = x3d.LineSet()
LineSet1162.setVertexCount([2])
ColorRGBA1163 = x3d.ColorRGBA()
ColorRGBA1163.setUSE("HAnimSegmentLineColorRGBA")

LineSet1162.setColor(ColorRGBA1163)
Coordinate1164 = x3d.Coordinate()
Coordinate1164.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

LineSet1162.setCoord(Coordinate1164)

Shape1161.setGeometry(LineSet1162)

HAnimSegment1157.addChild(Shape1161)

HAnimJoint1156.addChild(HAnimSegment1157)
HAnimJoint1165 = x3d.HAnimJoint()
HAnimJoint1165.setDEF("hanim_l_ring1")
HAnimJoint1165.setName("l_ring1")
HAnimJoint1165.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimSegment1166 = x3d.HAnimSegment()
HAnimSegment1166.setDEF("hanim_l_ring_proximal")
HAnimSegment1166.setName("l_ring_proximal")
TouchSensor1167 = x3d.TouchSensor()
TouchSensor1167.setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")

HAnimSegment1166.addChild(TouchSensor1167)
Transform1168 = x3d.Transform()
Transform1168.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Shape1169 = x3d.Shape()
Shape1169.setUSE("HAnimJointShape")

Transform1168.addChild(Shape1169)

HAnimSegment1166.addChild(Transform1168)
Shape1170 = x3d.Shape()
LineSet1171 = x3d.LineSet()
LineSet1171.setVertexCount([2])
ColorRGBA1172 = x3d.ColorRGBA()
ColorRGBA1172.setUSE("HAnimSegmentLineColorRGBA")

LineSet1171.setColor(ColorRGBA1172)
Coordinate1173 = x3d.Coordinate()
Coordinate1173.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

LineSet1171.setCoord(Coordinate1173)

Shape1170.setGeometry(LineSet1171)

HAnimSegment1166.addChild(Shape1170)

HAnimJoint1165.addChild(HAnimSegment1166)
HAnimJoint1174 = x3d.HAnimJoint()
HAnimJoint1174.setDEF("hanim_l_ring2")
HAnimJoint1174.setName("l_ring2")
HAnimJoint1174.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimSegment1175 = x3d.HAnimSegment()
HAnimSegment1175.setDEF("hanim_l_ring_middle")
HAnimSegment1175.setName("l_ring_middle")
TouchSensor1176 = x3d.TouchSensor()
TouchSensor1176.setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle")

HAnimSegment1175.addChild(TouchSensor1176)
Transform1177 = x3d.Transform()
Transform1177.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Shape1178 = x3d.Shape()
Shape1178.setUSE("HAnimJointShape")

Transform1177.addChild(Shape1178)

HAnimSegment1175.addChild(Transform1177)
Shape1179 = x3d.Shape()
LineSet1180 = x3d.LineSet()
LineSet1180.setVertexCount([2])
ColorRGBA1181 = x3d.ColorRGBA()
ColorRGBA1181.setUSE("HAnimSegmentLineColorRGBA")

LineSet1180.setColor(ColorRGBA1181)
Coordinate1182 = x3d.Coordinate()
Coordinate1182.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

LineSet1180.setCoord(Coordinate1182)

Shape1179.setGeometry(LineSet1180)

HAnimSegment1175.addChild(Shape1179)

HAnimJoint1174.addChild(HAnimSegment1175)
HAnimJoint1183 = x3d.HAnimJoint()
HAnimJoint1183.setDEF("hanim_l_ring3")
HAnimJoint1183.setName("l_ring3")
HAnimJoint1183.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimSegment1184 = x3d.HAnimSegment()
HAnimSegment1184.setDEF("hanim_l_ring_distal")
HAnimSegment1184.setName("l_ring_distal")
TouchSensor1185 = x3d.TouchSensor()
TouchSensor1185.setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal")

HAnimSegment1184.addChild(TouchSensor1185)
Transform1186 = x3d.Transform()
Transform1186.setTranslation(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
Shape1187 = x3d.Shape()
Shape1187.setUSE("HAnimJointShape")

Transform1186.addChild(Shape1187)

HAnimSegment1184.addChild(Transform1186)
Shape1188 = x3d.Shape()
LineSet1189 = x3d.LineSet()
LineSet1189.setVertexCount([2])
ColorRGBA1190 = x3d.ColorRGBA()
ColorRGBA1190.setUSE("HAnimSiteLineColorRGBA")

LineSet1189.setColor(ColorRGBA1190)
Coordinate1191 = x3d.Coordinate()
Coordinate1191.setPoint(x3d.doubleToFloat([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]))

LineSet1189.setCoord(Coordinate1191)

Shape1188.setGeometry(LineSet1189)

HAnimSegment1184.addChild(Shape1188)
HAnimSite1192 = x3d.HAnimSite()
HAnimSite1192.setDEF("hanim_l_ring_distal_tip")
HAnimSite1192.setName("l_ring_distal_tip")
HAnimSite1192.setTranslation(x3d.doubleToFloat([0.2035,0.675,-0.0756]))
TouchSensor1193 = x3d.TouchSensor()
TouchSensor1193.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1192.addChild(TouchSensor1193)
Shape1194 = x3d.Shape()
Shape1194.setUSE("HAnimSiteShape")

HAnimSite1192.addChild(Shape1194)

HAnimSegment1184.addChild(HAnimSite1192)

HAnimJoint1183.addChild(HAnimSegment1184)

HAnimJoint1174.addChild(HAnimJoint1183)

HAnimJoint1165.addChild(HAnimJoint1174)

HAnimJoint1156.addChild(HAnimJoint1165)

HAnimJoint983.addChild(HAnimJoint1156)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setDEF("hanim_l_pinky0")
HAnimJoint1195.setName("l_pinky0")
HAnimJoint1195.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimSegment1196 = x3d.HAnimSegment()
HAnimSegment1196.setDEF("hanim_l_pinky_metacarpal")
HAnimSegment1196.setName("l_pinky_metacarpal")
TouchSensor1197 = x3d.TouchSensor()
TouchSensor1197.setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")

HAnimSegment1196.addChild(TouchSensor1197)
Transform1198 = x3d.Transform()
Transform1198.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Shape1199 = x3d.Shape()
Shape1199.setUSE("HAnimJointShape")

Transform1198.addChild(Shape1199)

HAnimSegment1196.addChild(Transform1198)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.setVertexCount([2])
ColorRGBA1202 = x3d.ColorRGBA()
ColorRGBA1202.setUSE("HAnimSegmentLineColorRGBA")

LineSet1201.setColor(ColorRGBA1202)
Coordinate1203 = x3d.Coordinate()
Coordinate1203.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

LineSet1201.setCoord(Coordinate1203)

Shape1200.setGeometry(LineSet1201)

HAnimSegment1196.addChild(Shape1200)

HAnimJoint1195.addChild(HAnimSegment1196)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setDEF("hanim_l_pinky1")
HAnimJoint1204.setName("l_pinky1")
HAnimJoint1204.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.setDEF("hanim_l_pinky_proximal")
HAnimSegment1205.setName("l_pinky_proximal")
TouchSensor1206 = x3d.TouchSensor()
TouchSensor1206.setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")

HAnimSegment1205.addChild(TouchSensor1206)
Transform1207 = x3d.Transform()
Transform1207.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Shape1208 = x3d.Shape()
Shape1208.setUSE("HAnimJointShape")

Transform1207.addChild(Shape1208)

HAnimSegment1205.addChild(Transform1207)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.setVertexCount([2])
ColorRGBA1211 = x3d.ColorRGBA()
ColorRGBA1211.setUSE("HAnimSegmentLineColorRGBA")

LineSet1210.setColor(ColorRGBA1211)
Coordinate1212 = x3d.Coordinate()
Coordinate1212.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

LineSet1210.setCoord(Coordinate1212)

Shape1209.setGeometry(LineSet1210)

HAnimSegment1205.addChild(Shape1209)

HAnimJoint1204.addChild(HAnimSegment1205)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setDEF("hanim_l_pinky2")
HAnimJoint1213.setName("l_pinky2")
HAnimJoint1213.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimSegment1214 = x3d.HAnimSegment()
HAnimSegment1214.setDEF("hanim_l_pinky_middle")
HAnimSegment1214.setName("l_pinky_middle")
TouchSensor1215 = x3d.TouchSensor()
TouchSensor1215.setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")

HAnimSegment1214.addChild(TouchSensor1215)
Transform1216 = x3d.Transform()
Transform1216.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Shape1217 = x3d.Shape()
Shape1217.setUSE("HAnimJointShape")

Transform1216.addChild(Shape1217)

HAnimSegment1214.addChild(Transform1216)
Shape1218 = x3d.Shape()
LineSet1219 = x3d.LineSet()
LineSet1219.setVertexCount([2])
ColorRGBA1220 = x3d.ColorRGBA()
ColorRGBA1220.setUSE("HAnimSegmentLineColorRGBA")

LineSet1219.setColor(ColorRGBA1220)
Coordinate1221 = x3d.Coordinate()
Coordinate1221.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

LineSet1219.setCoord(Coordinate1221)

Shape1218.setGeometry(LineSet1219)

HAnimSegment1214.addChild(Shape1218)

HAnimJoint1213.addChild(HAnimSegment1214)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setDEF("hanim_l_pinky3")
HAnimJoint1222.setName("l_pinky3")
HAnimJoint1222.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimSegment1223 = x3d.HAnimSegment()
HAnimSegment1223.setDEF("hanim_l_pinky_distal")
HAnimSegment1223.setName("l_pinky_distal")
TouchSensor1224 = x3d.TouchSensor()
TouchSensor1224.setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")

HAnimSegment1223.addChild(TouchSensor1224)
Transform1225 = x3d.Transform()
Transform1225.setTranslation(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
Shape1226 = x3d.Shape()
Shape1226.setUSE("HAnimJointShape")

Transform1225.addChild(Shape1226)

HAnimSegment1223.addChild(Transform1225)
Shape1227 = x3d.Shape()
LineSet1228 = x3d.LineSet()
LineSet1228.setVertexCount([2])
ColorRGBA1229 = x3d.ColorRGBA()
ColorRGBA1229.setUSE("HAnimSiteLineColorRGBA")

LineSet1228.setColor(ColorRGBA1229)
Coordinate1230 = x3d.Coordinate()
Coordinate1230.setPoint(x3d.doubleToFloat([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]))

LineSet1228.setCoord(Coordinate1230)

Shape1227.setGeometry(LineSet1228)

HAnimSegment1223.addChild(Shape1227)
HAnimSite1231 = x3d.HAnimSite()
HAnimSite1231.setDEF("hanim_l_pinky_distal_tip")
HAnimSite1231.setName("l_pinky_distal_tip")
HAnimSite1231.setTranslation(x3d.doubleToFloat([0.2014,0.7009,-0.1012]))
TouchSensor1232 = x3d.TouchSensor()
TouchSensor1232.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1231.addChild(TouchSensor1232)
Shape1233 = x3d.Shape()
Shape1233.setUSE("HAnimSiteShape")

HAnimSite1231.addChild(Shape1233)

HAnimSegment1223.addChild(HAnimSite1231)

HAnimJoint1222.addChild(HAnimSegment1223)

HAnimJoint1213.addChild(HAnimJoint1222)

HAnimJoint1204.addChild(HAnimJoint1213)

HAnimJoint1195.addChild(HAnimJoint1204)

HAnimJoint983.addChild(HAnimJoint1195)

HAnimJoint946.addChild(HAnimJoint983)

HAnimJoint930.addChild(HAnimJoint946)

HAnimJoint921.addChild(HAnimJoint930)

HAnimJoint884.addChild(HAnimJoint921)

HAnimJoint596.addChild(HAnimJoint884)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setDEF("hanim_r_sternoclavicular")
HAnimJoint1234.setName("r_sternoclavicular")
HAnimJoint1234.setCenter(x3d.doubleToFloat([-0.082,1.4488,-0.0353]))
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.setDEF("hanim_r_clavicle")
HAnimSegment1235.setName("r_clavicle")
TouchSensor1236 = x3d.TouchSensor()
TouchSensor1236.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1235.addChild(TouchSensor1236)
Transform1237 = x3d.Transform()
Transform1237.setTranslation(x3d.doubleToFloat([-0.082,1.4488,-0.0353]))
Shape1238 = x3d.Shape()
Shape1238.setUSE("HAnimJointShape")

Transform1237.addChild(Shape1238)

HAnimSegment1235.addChild(Transform1237)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.setVertexCount([2])
ColorRGBA1241 = x3d.ColorRGBA()
ColorRGBA1241.setUSE("HAnimSegmentLineColorRGBA")

LineSet1240.setColor(ColorRGBA1241)
Coordinate1242 = x3d.Coordinate()
Coordinate1242.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]))

LineSet1240.setCoord(Coordinate1242)

Shape1239.setGeometry(LineSet1240)

HAnimSegment1235.addChild(Shape1239)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.setVertexCount([2])
ColorRGBA1245 = x3d.ColorRGBA()
ColorRGBA1245.setUSE("HAnimSiteLineColorRGBA")

LineSet1244.setColor(ColorRGBA1245)
Coordinate1246 = x3d.Coordinate()
Coordinate1246.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]))

LineSet1244.setCoord(Coordinate1246)

Shape1243.setGeometry(LineSet1244)

HAnimSegment1235.addChild(Shape1243)
Shape1247 = x3d.Shape()
LineSet1248 = x3d.LineSet()
LineSet1248.setVertexCount([2])
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.setUSE("HAnimSiteLineColorRGBA")

LineSet1248.setColor(ColorRGBA1249)
Coordinate1250 = x3d.Coordinate()
Coordinate1250.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]))

LineSet1248.setCoord(Coordinate1250)

Shape1247.setGeometry(LineSet1248)

HAnimSegment1235.addChild(Shape1247)
Shape1251 = x3d.Shape()
LineSet1252 = x3d.LineSet()
LineSet1252.setVertexCount([2])
ColorRGBA1253 = x3d.ColorRGBA()
ColorRGBA1253.setUSE("HAnimSiteLineColorRGBA")

LineSet1252.setColor(ColorRGBA1253)
Coordinate1254 = x3d.Coordinate()
Coordinate1254.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]))

LineSet1252.setCoord(Coordinate1254)

Shape1251.setGeometry(LineSet1252)

HAnimSegment1235.addChild(Shape1251)
Shape1255 = x3d.Shape()
LineSet1256 = x3d.LineSet()
LineSet1256.setVertexCount([2])
ColorRGBA1257 = x3d.ColorRGBA()
ColorRGBA1257.setUSE("HAnimSiteLineColorRGBA")

LineSet1256.setColor(ColorRGBA1257)
Coordinate1258 = x3d.Coordinate()
Coordinate1258.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]))

LineSet1256.setCoord(Coordinate1258)

Shape1255.setGeometry(LineSet1256)

HAnimSegment1235.addChild(Shape1255)
HAnimSite1259 = x3d.HAnimSite()
HAnimSite1259.setDEF("hanim_r_clavicale_pt")
HAnimSite1259.setName("r_clavicale_pt")
HAnimSite1259.setTranslation(x3d.doubleToFloat([-0.0115,1.4943,0.04]))
TouchSensor1260 = x3d.TouchSensor()
TouchSensor1260.setDescription("HAnimSite r_clavicale")

HAnimSite1259.addChild(TouchSensor1260)
Shape1261 = x3d.Shape()
Shape1261.setUSE("HAnimSiteShape")

HAnimSite1259.addChild(Shape1261)

HAnimSegment1235.addChild(HAnimSite1259)
HAnimSite1262 = x3d.HAnimSite()
HAnimSite1262.setDEF("hanim_r_acromion_pt")
HAnimSite1262.setName("r_acromion_pt")
HAnimSite1262.setTranslation(x3d.doubleToFloat([-0.1905,1.4791,-0.0431]))
TouchSensor1263 = x3d.TouchSensor()
TouchSensor1263.setDescription("HAnimSite r_acromion")

HAnimSite1262.addChild(TouchSensor1263)
Shape1264 = x3d.Shape()
Shape1264.setUSE("HAnimSiteShape")

HAnimSite1262.addChild(Shape1264)

HAnimSegment1235.addChild(HAnimSite1262)
HAnimSite1265 = x3d.HAnimSite()
HAnimSite1265.setDEF("hanim_r_axilla_ant_pt")
HAnimSite1265.setName("r_axilla_ant_pt")
HAnimSite1265.setTranslation(x3d.doubleToFloat([-0.1626,1.4072,-0.0031]))
TouchSensor1266 = x3d.TouchSensor()
TouchSensor1266.setDescription("HAnimSite r_axilla_ant")

HAnimSite1265.addChild(TouchSensor1266)
Shape1267 = x3d.Shape()
Shape1267.setUSE("HAnimSiteShape")

HAnimSite1265.addChild(Shape1267)

HAnimSegment1235.addChild(HAnimSite1265)
HAnimSite1268 = x3d.HAnimSite()
HAnimSite1268.setDEF("hanim_r_axilla_post_pt")
HAnimSite1268.setName("r_axilla_post_pt")
HAnimSite1268.setTranslation(x3d.doubleToFloat([-0.1603,1.4098,-0.0826]))
TouchSensor1269 = x3d.TouchSensor()
TouchSensor1269.setDescription("HAnimSite r_axilla_post")

HAnimSite1268.addChild(TouchSensor1269)
Shape1270 = x3d.Shape()
Shape1270.setUSE("HAnimSiteShape")

HAnimSite1268.addChild(Shape1270)

HAnimSegment1235.addChild(HAnimSite1268)

HAnimJoint1234.addChild(HAnimSegment1235)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setDEF("hanim_r_acromioclavicular")
HAnimJoint1271.setName("r_acromioclavicular")
HAnimJoint1271.setCenter(x3d.doubleToFloat([-0.0962,1.4269,-0.0424]))
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.setDEF("hanim_r_scapula")
HAnimSegment1272.setName("r_scapula")
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1272.addChild(TouchSensor1273)
Transform1274 = x3d.Transform()
Transform1274.setTranslation(x3d.doubleToFloat([-0.0962,1.4269,-0.0424]))
Shape1275 = x3d.Shape()
Shape1275.setUSE("HAnimJointShape")

Transform1274.addChild(Shape1275)

HAnimSegment1272.addChild(Transform1274)
Shape1276 = x3d.Shape()
LineSet1277 = x3d.LineSet()
LineSet1277.setVertexCount([2])
ColorRGBA1278 = x3d.ColorRGBA()
ColorRGBA1278.setUSE("HAnimSegmentLineColorRGBA")

LineSet1277.setColor(ColorRGBA1278)
Coordinate1279 = x3d.Coordinate()
Coordinate1279.setPoint(x3d.doubleToFloat([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]))

LineSet1277.setCoord(Coordinate1279)

Shape1276.setGeometry(LineSet1277)

HAnimSegment1272.addChild(Shape1276)

HAnimJoint1271.addChild(HAnimSegment1272)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.setDEF("hanim_r_shoulder")
HAnimJoint1280.setName("r_shoulder")
HAnimJoint1280.setCenter(x3d.doubleToFloat([-0.2029,1.4376,-0.0387]))
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.setDEF("hanim_r_upperarm")
HAnimSegment1281.setName("r_upperarm")
TouchSensor1282 = x3d.TouchSensor()
TouchSensor1282.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1281.addChild(TouchSensor1282)
Transform1283 = x3d.Transform()
Transform1283.setTranslation(x3d.doubleToFloat([-0.2029,1.4376,-0.0387]))
Shape1284 = x3d.Shape()
Shape1284.setUSE("HAnimJointShape")

Transform1283.addChild(Shape1284)

HAnimSegment1281.addChild(Transform1283)
Shape1285 = x3d.Shape()
LineSet1286 = x3d.LineSet()
LineSet1286.setVertexCount([2])
ColorRGBA1287 = x3d.ColorRGBA()
ColorRGBA1287.setUSE("HAnimSegmentLineColorRGBA")

LineSet1286.setColor(ColorRGBA1287)
Coordinate1288 = x3d.Coordinate()
Coordinate1288.setPoint(x3d.doubleToFloat([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]))

LineSet1286.setCoord(Coordinate1288)

Shape1285.setGeometry(LineSet1286)

HAnimSegment1281.addChild(Shape1285)
Shape1289 = x3d.Shape()
LineSet1290 = x3d.LineSet()
LineSet1290.setVertexCount([2])
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.setUSE("HAnimSiteLineColorRGBA")

LineSet1290.setColor(ColorRGBA1291)
Coordinate1292 = x3d.Coordinate()
Coordinate1292.setPoint(x3d.doubleToFloat([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]))

LineSet1290.setCoord(Coordinate1292)

Shape1289.setGeometry(LineSet1290)

HAnimSegment1281.addChild(Shape1289)
HAnimSite1293 = x3d.HAnimSite()
HAnimSite1293.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite1293.setName("r_humeral_lateral_epicn_pt")
HAnimSite1293.setTranslation(x3d.doubleToFloat([-0.2224,1.1517,-0.1033]))
TouchSensor1294 = x3d.TouchSensor()
TouchSensor1294.setDescription("HAnimSite r_humeral_lateral_epicn")

HAnimSite1293.addChild(TouchSensor1294)
Shape1295 = x3d.Shape()
Shape1295.setUSE("HAnimSiteShape")

HAnimSite1293.addChild(Shape1295)

HAnimSegment1281.addChild(HAnimSite1293)

HAnimJoint1280.addChild(HAnimSegment1281)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.setDEF("hanim_r_elbow")
HAnimJoint1296.setName("r_elbow")
HAnimJoint1296.setCenter(x3d.doubleToFloat([-0.2014,1.1357,-0.0682]))
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.setDEF("hanim_r_forearm")
HAnimSegment1297.setName("r_forearm")
TouchSensor1298 = x3d.TouchSensor()
TouchSensor1298.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1297.addChild(TouchSensor1298)
Transform1299 = x3d.Transform()
Transform1299.setTranslation(x3d.doubleToFloat([-0.2014,1.1357,-0.0682]))
Shape1300 = x3d.Shape()
Shape1300.setUSE("HAnimJointShape")

Transform1299.addChild(Shape1300)

HAnimSegment1297.addChild(Transform1299)
Shape1301 = x3d.Shape()
LineSet1302 = x3d.LineSet()
LineSet1302.setVertexCount([2])
ColorRGBA1303 = x3d.ColorRGBA()
ColorRGBA1303.setUSE("HAnimSegmentLineColorRGBA")

LineSet1302.setColor(ColorRGBA1303)
Coordinate1304 = x3d.Coordinate()
Coordinate1304.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]))

LineSet1302.setCoord(Coordinate1304)

Shape1301.setGeometry(LineSet1302)

HAnimSegment1297.addChild(Shape1301)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.setVertexCount([2])
ColorRGBA1307 = x3d.ColorRGBA()
ColorRGBA1307.setUSE("HAnimSiteLineColorRGBA")

LineSet1306.setColor(ColorRGBA1307)
Coordinate1308 = x3d.Coordinate()
Coordinate1308.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]))

LineSet1306.setCoord(Coordinate1308)

Shape1305.setGeometry(LineSet1306)

HAnimSegment1297.addChild(Shape1305)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.setVertexCount([2])
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.setUSE("HAnimSiteLineColorRGBA")

LineSet1310.setColor(ColorRGBA1311)
Coordinate1312 = x3d.Coordinate()
Coordinate1312.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]))

LineSet1310.setCoord(Coordinate1312)

Shape1309.setGeometry(LineSet1310)

HAnimSegment1297.addChild(Shape1309)
Shape1313 = x3d.Shape()
LineSet1314 = x3d.LineSet()
LineSet1314.setVertexCount([2])
ColorRGBA1315 = x3d.ColorRGBA()
ColorRGBA1315.setUSE("HAnimSiteLineColorRGBA")

LineSet1314.setColor(ColorRGBA1315)
Coordinate1316 = x3d.Coordinate()
Coordinate1316.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]))

LineSet1314.setCoord(Coordinate1316)

Shape1313.setGeometry(LineSet1314)

HAnimSegment1297.addChild(Shape1313)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.setVertexCount([2])
ColorRGBA1319 = x3d.ColorRGBA()
ColorRGBA1319.setUSE("HAnimSiteLineColorRGBA")

LineSet1318.setColor(ColorRGBA1319)
Coordinate1320 = x3d.Coordinate()
Coordinate1320.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]))

LineSet1318.setCoord(Coordinate1320)

Shape1317.setGeometry(LineSet1318)

HAnimSegment1297.addChild(Shape1317)
HAnimSite1321 = x3d.HAnimSite()
HAnimSite1321.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1321.setName("r_radial_styloid_pt")
HAnimSite1321.setTranslation(x3d.doubleToFloat([-0.1884,0.8676,-0.036]))
TouchSensor1322 = x3d.TouchSensor()
TouchSensor1322.setDescription("HAnimSite r_radial_styloid")

HAnimSite1321.addChild(TouchSensor1322)
Shape1323 = x3d.Shape()
Shape1323.setUSE("HAnimSiteShape")

HAnimSite1321.addChild(Shape1323)

HAnimSegment1297.addChild(HAnimSite1321)
HAnimSite1324 = x3d.HAnimSite()
HAnimSite1324.setDEF("hanim_r_olecranon_pt")
HAnimSite1324.setName("r_olecranon_pt")
HAnimSite1324.setTranslation(x3d.doubleToFloat([-0.1907,1.1405,-0.1065]))
TouchSensor1325 = x3d.TouchSensor()
TouchSensor1325.setDescription("HAnimSite r_olecranon")

HAnimSite1324.addChild(TouchSensor1325)
Shape1326 = x3d.Shape()
Shape1326.setUSE("HAnimSiteShape")

HAnimSite1324.addChild(Shape1326)

HAnimSegment1297.addChild(HAnimSite1324)
HAnimSite1327 = x3d.HAnimSite()
HAnimSite1327.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite1327.setName("r_humeral_medial_epicn_pt")
HAnimSite1327.setTranslation(x3d.doubleToFloat([-0.168,1.1298,-0.1062]))
TouchSensor1328 = x3d.TouchSensor()
TouchSensor1328.setDescription("HAnimSite r_humeral_medial_epicn")

HAnimSite1327.addChild(TouchSensor1328)
Shape1329 = x3d.Shape()
Shape1329.setUSE("HAnimSiteShape")

HAnimSite1327.addChild(Shape1329)

HAnimSegment1297.addChild(HAnimSite1327)
HAnimSite1330 = x3d.HAnimSite()
HAnimSite1330.setDEF("hanim_r_radiale_pt")
HAnimSite1330.setName("r_radiale_pt")
HAnimSite1330.setTranslation(x3d.doubleToFloat([-0.213,1.1305,-0.1091]))
TouchSensor1331 = x3d.TouchSensor()
TouchSensor1331.setDescription("HAnimSite r_radiale")

HAnimSite1330.addChild(TouchSensor1331)
Shape1332 = x3d.Shape()
Shape1332.setUSE("HAnimSiteShape")

HAnimSite1330.addChild(Shape1332)

HAnimSegment1297.addChild(HAnimSite1330)

HAnimJoint1296.addChild(HAnimSegment1297)
HAnimJoint1333 = x3d.HAnimJoint()
HAnimJoint1333.setDEF("hanim_r_wrist")
HAnimJoint1333.setName("r_wrist")
HAnimJoint1333.setCenter(x3d.doubleToFloat([-0.1984,0.8663,-0.0583]))
HAnimSegment1334 = x3d.HAnimSegment()
HAnimSegment1334.setDEF("hanim_r_hand")
HAnimSegment1334.setName("r_hand")
TouchSensor1335 = x3d.TouchSensor()
TouchSensor1335.setDescription("HAnimJoint r_wrist, HAnimSegment r_hand")

HAnimSegment1334.addChild(TouchSensor1335)
Transform1336 = x3d.Transform()
Transform1336.setTranslation(x3d.doubleToFloat([-0.1984,0.8663,-0.0583]))
Shape1337 = x3d.Shape()
Shape1337.setUSE("HAnimJointShape")

Transform1336.addChild(Shape1337)

HAnimSegment1334.addChild(Transform1336)
Shape1338 = x3d.Shape()
LineSet1339 = x3d.LineSet()
LineSet1339.setVertexCount([2])
ColorRGBA1340 = x3d.ColorRGBA()
ColorRGBA1340.setUSE("HAnimSegmentLineColorRGBA")

LineSet1339.setColor(ColorRGBA1340)
Coordinate1341 = x3d.Coordinate()
Coordinate1341.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]))

LineSet1339.setCoord(Coordinate1341)

Shape1338.setGeometry(LineSet1339)

HAnimSegment1334.addChild(Shape1338)
Shape1342 = x3d.Shape()
LineSet1343 = x3d.LineSet()
LineSet1343.setVertexCount([2])
ColorRGBA1344 = x3d.ColorRGBA()
ColorRGBA1344.setUSE("HAnimSegmentLineColorRGBA")

LineSet1343.setColor(ColorRGBA1344)
Coordinate1345 = x3d.Coordinate()
Coordinate1345.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]))

LineSet1343.setCoord(Coordinate1345)

Shape1342.setGeometry(LineSet1343)

HAnimSegment1334.addChild(Shape1342)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.setVertexCount([2])
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.setUSE("HAnimSegmentLineColorRGBA")

LineSet1347.setColor(ColorRGBA1348)
Coordinate1349 = x3d.Coordinate()
Coordinate1349.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]))

LineSet1347.setCoord(Coordinate1349)

Shape1346.setGeometry(LineSet1347)

HAnimSegment1334.addChild(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.setVertexCount([2])
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.setUSE("HAnimSegmentLineColorRGBA")

LineSet1351.setColor(ColorRGBA1352)
Coordinate1353 = x3d.Coordinate()
Coordinate1353.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]))

LineSet1351.setCoord(Coordinate1353)

Shape1350.setGeometry(LineSet1351)

HAnimSegment1334.addChild(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.setVertexCount([2])
ColorRGBA1356 = x3d.ColorRGBA()
ColorRGBA1356.setUSE("HAnimSegmentLineColorRGBA")

LineSet1355.setColor(ColorRGBA1356)
Coordinate1357 = x3d.Coordinate()
Coordinate1357.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]))

LineSet1355.setCoord(Coordinate1357)

Shape1354.setGeometry(LineSet1355)

HAnimSegment1334.addChild(Shape1354)
Shape1358 = x3d.Shape()
LineSet1359 = x3d.LineSet()
LineSet1359.setVertexCount([2])
ColorRGBA1360 = x3d.ColorRGBA()
ColorRGBA1360.setUSE("HAnimSiteLineColorRGBA")

LineSet1359.setColor(ColorRGBA1360)
Coordinate1361 = x3d.Coordinate()
Coordinate1361.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]))

LineSet1359.setCoord(Coordinate1361)

Shape1358.setGeometry(LineSet1359)

HAnimSegment1334.addChild(Shape1358)
Shape1362 = x3d.Shape()
LineSet1363 = x3d.LineSet()
LineSet1363.setVertexCount([2])
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.setUSE("HAnimSiteLineColorRGBA")

LineSet1363.setColor(ColorRGBA1364)
Coordinate1365 = x3d.Coordinate()
Coordinate1365.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]))

LineSet1363.setCoord(Coordinate1365)

Shape1362.setGeometry(LineSet1363)

HAnimSegment1334.addChild(Shape1362)
Shape1366 = x3d.Shape()
LineSet1367 = x3d.LineSet()
LineSet1367.setVertexCount([2])
ColorRGBA1368 = x3d.ColorRGBA()
ColorRGBA1368.setUSE("HAnimSiteLineColorRGBA")

LineSet1367.setColor(ColorRGBA1368)
Coordinate1369 = x3d.Coordinate()
Coordinate1369.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]))

LineSet1367.setCoord(Coordinate1369)

Shape1366.setGeometry(LineSet1367)

HAnimSegment1334.addChild(Shape1366)
Shape1370 = x3d.Shape()
LineSet1371 = x3d.LineSet()
LineSet1371.setVertexCount([2])
ColorRGBA1372 = x3d.ColorRGBA()
ColorRGBA1372.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1371.setColor(ColorRGBA1372)
Coordinate1373 = x3d.Coordinate()
Coordinate1373.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]))

LineSet1371.setCoord(Coordinate1373)

Shape1370.setGeometry(LineSet1371)

HAnimSegment1334.addChild(Shape1370)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite1374.setName("r_metacarpal_pha2_pt")
HAnimSite1374.setTranslation(x3d.doubleToFloat([-0.1977,0.8169,-0.0177]))
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.setDescription("HAnimSite r_metacarpal_pha2")

HAnimSite1374.addChild(TouchSensor1375)
Shape1376 = x3d.Shape()
Shape1376.setUSE("HAnimSiteShape")

HAnimSite1374.addChild(Shape1376)

HAnimSegment1334.addChild(HAnimSite1374)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1377.setName("r_ulnar_styloid_pt")
HAnimSite1377.setTranslation(x3d.doubleToFloat([-0.2117,0.8562,-0.0584]))
TouchSensor1378 = x3d.TouchSensor()
TouchSensor1378.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite1377.addChild(TouchSensor1378)
Shape1379 = x3d.Shape()
Shape1379.setUSE("HAnimSiteShape")

HAnimSite1377.addChild(Shape1379)

HAnimSegment1334.addChild(HAnimSite1377)
HAnimSite1380 = x3d.HAnimSite()
HAnimSite1380.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite1380.setName("r_metacarpal_pha5_pt")
HAnimSite1380.setTranslation(x3d.doubleToFloat([-0.1929,0.789,-0.1064]))
TouchSensor1381 = x3d.TouchSensor()
TouchSensor1381.setDescription("HAnimSite r_metacarpal_pha5")

HAnimSite1380.addChild(TouchSensor1381)
Shape1382 = x3d.Shape()
Shape1382.setUSE("HAnimSiteShape")

HAnimSite1380.addChild(Shape1382)

HAnimSegment1334.addChild(HAnimSite1380)
HAnimSite1383 = x3d.HAnimSite()
HAnimSite1383.setDEF("hanim_r_hand_front_view")
HAnimSite1383.setName("r_hand_front_view")
HAnimSite1383.setTranslation(x3d.doubleToFloat([-0.3,0.75,0.45]))
TouchSensor1384 = x3d.TouchSensor()
TouchSensor1384.setDescription("HAnimSite r_hand_front_view")

HAnimSite1383.addChild(TouchSensor1384)
Shape1385 = x3d.Shape()
Shape1385.setUSE("HAnimSiteShape")

HAnimSite1383.addChild(Shape1385)
Viewpoint1386 = x3d.Viewpoint()
Viewpoint1386.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1386.setDescription("right hand front")
Viewpoint1386.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1386.setCenterOfRotation(x3d.doubleToFloat([0,0.7,0]))

HAnimSite1383.addChild(Viewpoint1386)
Anchor1387 = x3d.Anchor()
Anchor1387.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1387.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1388 = x3d.LOD()
LOD1388.setForceTransitions(True)
LOD1388.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1389 = x3d.WorldInfo()
WorldInfo1389.setInfo(["hide diamond when close"])

LOD1388.addChild(WorldInfo1389)
Shape1390 = x3d.Shape()
Shape1390.setUSE("HAnimSiteViewpointShape")

LOD1388.addChild(Shape1390)

Anchor1387.addChild(LOD1388)

HAnimSite1383.addChild(Anchor1387)

HAnimSegment1334.addChild(HAnimSite1383)

HAnimJoint1333.addChild(HAnimSegment1334)
HAnimJoint1391 = x3d.HAnimJoint()
HAnimJoint1391.setDEF("hanim_r_thumb1")
HAnimJoint1391.setName("r_thumb1")
HAnimJoint1391.setCenter(x3d.doubleToFloat([-0.1924,0.8472,-0.0534]))
HAnimSegment1392 = x3d.HAnimSegment()
HAnimSegment1392.setDEF("hanim_r_thumb_metacarpal")
HAnimSegment1392.setName("r_thumb_metacarpal")
TouchSensor1393 = x3d.TouchSensor()
TouchSensor1393.setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")

HAnimSegment1392.addChild(TouchSensor1393)
Transform1394 = x3d.Transform()
Transform1394.setTranslation(x3d.doubleToFloat([-0.1924,0.8472,-0.0534]))
Shape1395 = x3d.Shape()
Shape1395.setUSE("HAnimJointShape")

Transform1394.addChild(Shape1395)

HAnimSegment1392.addChild(Transform1394)
Shape1396 = x3d.Shape()
LineSet1397 = x3d.LineSet()
LineSet1397.setVertexCount([2])
ColorRGBA1398 = x3d.ColorRGBA()
ColorRGBA1398.setUSE("HAnimSegmentLineColorRGBA")

LineSet1397.setColor(ColorRGBA1398)
Coordinate1399 = x3d.Coordinate()
Coordinate1399.setPoint(x3d.doubleToFloat([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]))

LineSet1397.setCoord(Coordinate1399)

Shape1396.setGeometry(LineSet1397)

HAnimSegment1392.addChild(Shape1396)

HAnimJoint1391.addChild(HAnimSegment1392)
HAnimJoint1400 = x3d.HAnimJoint()
HAnimJoint1400.setDEF("hanim_r_thumb2")
HAnimJoint1400.setName("r_thumb2")
HAnimJoint1400.setCenter(x3d.doubleToFloat([-0.1951,0.8226,0.0246]))
HAnimSegment1401 = x3d.HAnimSegment()
HAnimSegment1401.setDEF("hanim_r_thumb_proximal")
HAnimSegment1401.setName("r_thumb_proximal")
TouchSensor1402 = x3d.TouchSensor()
TouchSensor1402.setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")

HAnimSegment1401.addChild(TouchSensor1402)
Transform1403 = x3d.Transform()
Transform1403.setTranslation(x3d.doubleToFloat([-0.1951,0.8226,0.0246]))
Shape1404 = x3d.Shape()
Shape1404.setUSE("HAnimJointShape")

Transform1403.addChild(Shape1404)

HAnimSegment1401.addChild(Transform1403)
Shape1405 = x3d.Shape()
LineSet1406 = x3d.LineSet()
LineSet1406.setVertexCount([2])
ColorRGBA1407 = x3d.ColorRGBA()
ColorRGBA1407.setUSE("HAnimSegmentLineColorRGBA")

LineSet1406.setColor(ColorRGBA1407)
Coordinate1408 = x3d.Coordinate()
Coordinate1408.setPoint(x3d.doubleToFloat([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]))

LineSet1406.setCoord(Coordinate1408)

Shape1405.setGeometry(LineSet1406)

HAnimSegment1401.addChild(Shape1405)

HAnimJoint1400.addChild(HAnimSegment1401)
HAnimJoint1409 = x3d.HAnimJoint()
HAnimJoint1409.setDEF("hanim_r_thumb3")
HAnimJoint1409.setName("r_thumb3")
HAnimJoint1409.setCenter(x3d.doubleToFloat([-0.1955,0.8159,0.0464]))
HAnimSegment1410 = x3d.HAnimSegment()
HAnimSegment1410.setDEF("hanim_r_thumb_distal")
HAnimSegment1410.setName("r_thumb_distal")
TouchSensor1411 = x3d.TouchSensor()
TouchSensor1411.setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")

HAnimSegment1410.addChild(TouchSensor1411)
Transform1412 = x3d.Transform()
Transform1412.setTranslation(x3d.doubleToFloat([-0.1955,0.8159,0.0464]))
Shape1413 = x3d.Shape()
Shape1413.setUSE("HAnimJointShape")

Transform1412.addChild(Shape1413)

HAnimSegment1410.addChild(Transform1412)
Shape1414 = x3d.Shape()
LineSet1415 = x3d.LineSet()
LineSet1415.setVertexCount([2])
ColorRGBA1416 = x3d.ColorRGBA()
ColorRGBA1416.setUSE("HAnimSiteLineColorRGBA")

LineSet1415.setColor(ColorRGBA1416)
Coordinate1417 = x3d.Coordinate()
Coordinate1417.setPoint(x3d.doubleToFloat([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]))

LineSet1415.setCoord(Coordinate1417)

Shape1414.setGeometry(LineSet1415)

HAnimSegment1410.addChild(Shape1414)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.setDEF("hanim_r_thumb_distal_tip")
HAnimSite1418.setName("r_thumb_distal_tip")
HAnimSite1418.setTranslation(x3d.doubleToFloat([-0.1869,0.809,0.082]))
TouchSensor1419 = x3d.TouchSensor()
TouchSensor1419.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1418.addChild(TouchSensor1419)
Shape1420 = x3d.Shape()
Shape1420.setUSE("HAnimSiteShape")

HAnimSite1418.addChild(Shape1420)

HAnimSegment1410.addChild(HAnimSite1418)

HAnimJoint1409.addChild(HAnimSegment1410)

HAnimJoint1400.addChild(HAnimJoint1409)

HAnimJoint1391.addChild(HAnimJoint1400)

HAnimJoint1333.addChild(HAnimJoint1391)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.setDEF("hanim_r_index0")
HAnimJoint1421.setName("r_index0")
HAnimJoint1421.setCenter(x3d.doubleToFloat([-0.1983,0.8024,-0.028]))
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.setDEF("hanim_r_index_metacarpal")
HAnimSegment1422.setName("r_index_metacarpal")
TouchSensor1423 = x3d.TouchSensor()
TouchSensor1423.setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")

HAnimSegment1422.addChild(TouchSensor1423)
Transform1424 = x3d.Transform()
Transform1424.setTranslation(x3d.doubleToFloat([-0.1983,0.8024,-0.028]))
Shape1425 = x3d.Shape()
Shape1425.setUSE("HAnimJointShape")

Transform1424.addChild(Shape1425)

HAnimSegment1422.addChild(Transform1424)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.setVertexCount([2])
ColorRGBA1428 = x3d.ColorRGBA()
ColorRGBA1428.setUSE("HAnimSegmentLineColorRGBA")

LineSet1427.setColor(ColorRGBA1428)
Coordinate1429 = x3d.Coordinate()
Coordinate1429.setPoint(x3d.doubleToFloat([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]))

LineSet1427.setCoord(Coordinate1429)

Shape1426.setGeometry(LineSet1427)

HAnimSegment1422.addChild(Shape1426)

HAnimJoint1421.addChild(HAnimSegment1422)
HAnimJoint1430 = x3d.HAnimJoint()
HAnimJoint1430.setDEF("hanim_r_index1")
HAnimJoint1430.setName("r_index1")
HAnimJoint1430.setCenter(x3d.doubleToFloat([-0.1983,0.7815,-0.028]))
HAnimSegment1431 = x3d.HAnimSegment()
HAnimSegment1431.setDEF("hanim_r_index_proximal")
HAnimSegment1431.setName("r_index_proximal")
TouchSensor1432 = x3d.TouchSensor()
TouchSensor1432.setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal")

HAnimSegment1431.addChild(TouchSensor1432)
Transform1433 = x3d.Transform()
Transform1433.setTranslation(x3d.doubleToFloat([-0.1983,0.7815,-0.028]))
Shape1434 = x3d.Shape()
Shape1434.setUSE("HAnimJointShape")

Transform1433.addChild(Shape1434)

HAnimSegment1431.addChild(Transform1433)
Shape1435 = x3d.Shape()
LineSet1436 = x3d.LineSet()
LineSet1436.setVertexCount([2])
ColorRGBA1437 = x3d.ColorRGBA()
ColorRGBA1437.setUSE("HAnimSegmentLineColorRGBA")

LineSet1436.setColor(ColorRGBA1437)
Coordinate1438 = x3d.Coordinate()
Coordinate1438.setPoint(x3d.doubleToFloat([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]))

LineSet1436.setCoord(Coordinate1438)

Shape1435.setGeometry(LineSet1436)

HAnimSegment1431.addChild(Shape1435)

HAnimJoint1430.addChild(HAnimSegment1431)
HAnimJoint1439 = x3d.HAnimJoint()
HAnimJoint1439.setDEF("hanim_r_index2")
HAnimJoint1439.setName("r_index2")
HAnimJoint1439.setCenter(x3d.doubleToFloat([-0.2017,0.7363,-0.0248]))
HAnimSegment1440 = x3d.HAnimSegment()
HAnimSegment1440.setDEF("hanim_r_index_middle")
HAnimSegment1440.setName("r_index_middle")
TouchSensor1441 = x3d.TouchSensor()
TouchSensor1441.setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle")

HAnimSegment1440.addChild(TouchSensor1441)
Transform1442 = x3d.Transform()
Transform1442.setTranslation(x3d.doubleToFloat([-0.2017,0.7363,-0.0248]))
Shape1443 = x3d.Shape()
Shape1443.setUSE("HAnimJointShape")

Transform1442.addChild(Shape1443)

HAnimSegment1440.addChild(Transform1442)
Shape1444 = x3d.Shape()
LineSet1445 = x3d.LineSet()
LineSet1445.setVertexCount([2])
ColorRGBA1446 = x3d.ColorRGBA()
ColorRGBA1446.setUSE("HAnimSegmentLineColorRGBA")

LineSet1445.setColor(ColorRGBA1446)
Coordinate1447 = x3d.Coordinate()
Coordinate1447.setPoint(x3d.doubleToFloat([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]))

LineSet1445.setCoord(Coordinate1447)

Shape1444.setGeometry(LineSet1445)

HAnimSegment1440.addChild(Shape1444)

HAnimJoint1439.addChild(HAnimSegment1440)
HAnimJoint1448 = x3d.HAnimJoint()
HAnimJoint1448.setDEF("hanim_r_index3")
HAnimJoint1448.setName("r_index3")
HAnimJoint1448.setCenter(x3d.doubleToFloat([-0.2028,0.7139,-0.0236]))
HAnimSegment1449 = x3d.HAnimSegment()
HAnimSegment1449.setDEF("hanim_r_index_distal")
HAnimSegment1449.setName("r_index_distal")
TouchSensor1450 = x3d.TouchSensor()
TouchSensor1450.setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal")

HAnimSegment1449.addChild(TouchSensor1450)
Transform1451 = x3d.Transform()
Transform1451.setTranslation(x3d.doubleToFloat([-0.2028,0.7139,-0.0236]))
Shape1452 = x3d.Shape()
Shape1452.setUSE("HAnimJointShape")

Transform1451.addChild(Shape1452)

HAnimSegment1449.addChild(Transform1451)
Shape1453 = x3d.Shape()
LineSet1454 = x3d.LineSet()
LineSet1454.setVertexCount([2])
ColorRGBA1455 = x3d.ColorRGBA()
ColorRGBA1455.setUSE("HAnimSiteLineColorRGBA")

LineSet1454.setColor(ColorRGBA1455)
Coordinate1456 = x3d.Coordinate()
Coordinate1456.setPoint(x3d.doubleToFloat([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]))

LineSet1454.setCoord(Coordinate1456)

Shape1453.setGeometry(LineSet1454)

HAnimSegment1449.addChild(Shape1453)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.setVertexCount([2])
ColorRGBA1459 = x3d.ColorRGBA()
ColorRGBA1459.setUSE("HAnimSiteLineColorRGBA")

LineSet1458.setColor(ColorRGBA1459)
Coordinate1460 = x3d.Coordinate()
Coordinate1460.setPoint(x3d.doubleToFloat([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]))

LineSet1458.setCoord(Coordinate1460)

Shape1457.setGeometry(LineSet1458)

HAnimSegment1449.addChild(Shape1457)
HAnimSite1461 = x3d.HAnimSite()
HAnimSite1461.setDEF("hanim_r_index_distal_tip")
HAnimSite1461.setName("r_index_distal_tip")
HAnimSite1461.setTranslation(x3d.doubleToFloat([-0.198,0.6883,-0.018]))
TouchSensor1462 = x3d.TouchSensor()
TouchSensor1462.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1461.addChild(TouchSensor1462)
Shape1463 = x3d.Shape()
Shape1463.setUSE("HAnimSiteShape")

HAnimSite1461.addChild(Shape1463)

HAnimSegment1449.addChild(HAnimSite1461)
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.setDEF("hanim_r_dactylion_pt")
HAnimSite1464.setName("r_dactylion_pt")
HAnimSite1464.setTranslation(x3d.doubleToFloat([-0.1941,0.6772,-0.0423]))
TouchSensor1465 = x3d.TouchSensor()
TouchSensor1465.setDescription("HAnimSite r_dactylion")

HAnimSite1464.addChild(TouchSensor1465)
Shape1466 = x3d.Shape()
Shape1466.setUSE("HAnimSiteShape")

HAnimSite1464.addChild(Shape1466)

HAnimSegment1449.addChild(HAnimSite1464)

HAnimJoint1448.addChild(HAnimSegment1449)

HAnimJoint1439.addChild(HAnimJoint1448)

HAnimJoint1430.addChild(HAnimJoint1439)

HAnimJoint1421.addChild(HAnimJoint1430)

HAnimJoint1333.addChild(HAnimJoint1421)
HAnimJoint1467 = x3d.HAnimJoint()
HAnimJoint1467.setDEF("hanim_r_middle0")
HAnimJoint1467.setName("r_middle0")
HAnimJoint1467.setCenter(x3d.doubleToFloat([-0.1987,0.8029,-0.053]))
HAnimSegment1468 = x3d.HAnimSegment()
HAnimSegment1468.setDEF("hanim_r_middle_metacarpal")
HAnimSegment1468.setName("r_middle_metacarpal")
TouchSensor1469 = x3d.TouchSensor()
TouchSensor1469.setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")

HAnimSegment1468.addChild(TouchSensor1469)
Transform1470 = x3d.Transform()
Transform1470.setTranslation(x3d.doubleToFloat([-0.1987,0.8029,-0.053]))
Shape1471 = x3d.Shape()
Shape1471.setUSE("HAnimJointShape")

Transform1470.addChild(Shape1471)

HAnimSegment1468.addChild(Transform1470)
Shape1472 = x3d.Shape()
LineSet1473 = x3d.LineSet()
LineSet1473.setVertexCount([2])
ColorRGBA1474 = x3d.ColorRGBA()
ColorRGBA1474.setUSE("HAnimSegmentLineColorRGBA")

LineSet1473.setColor(ColorRGBA1474)
Coordinate1475 = x3d.Coordinate()
Coordinate1475.setPoint(x3d.doubleToFloat([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]))

LineSet1473.setCoord(Coordinate1475)

Shape1472.setGeometry(LineSet1473)

HAnimSegment1468.addChild(Shape1472)

HAnimJoint1467.addChild(HAnimSegment1468)
HAnimJoint1476 = x3d.HAnimJoint()
HAnimJoint1476.setDEF("hanim_r_middle1")
HAnimJoint1476.setName("r_middle1")
HAnimJoint1476.setCenter(x3d.doubleToFloat([-0.1987,0.7818,-0.053]))
HAnimSegment1477 = x3d.HAnimSegment()
HAnimSegment1477.setDEF("hanim_r_middle_proximal")
HAnimSegment1477.setName("r_middle_proximal")
TouchSensor1478 = x3d.TouchSensor()
TouchSensor1478.setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")

HAnimSegment1477.addChild(TouchSensor1478)
Transform1479 = x3d.Transform()
Transform1479.setTranslation(x3d.doubleToFloat([-0.1987,0.7818,-0.053]))
Shape1480 = x3d.Shape()
Shape1480.setUSE("HAnimJointShape")

Transform1479.addChild(Shape1480)

HAnimSegment1477.addChild(Transform1479)
Shape1481 = x3d.Shape()
LineSet1482 = x3d.LineSet()
LineSet1482.setVertexCount([2])
ColorRGBA1483 = x3d.ColorRGBA()
ColorRGBA1483.setUSE("HAnimSegmentLineColorRGBA")

LineSet1482.setColor(ColorRGBA1483)
Coordinate1484 = x3d.Coordinate()
Coordinate1484.setPoint(x3d.doubleToFloat([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]))

LineSet1482.setCoord(Coordinate1484)

Shape1481.setGeometry(LineSet1482)

HAnimSegment1477.addChild(Shape1481)

HAnimJoint1476.addChild(HAnimSegment1477)
HAnimJoint1485 = x3d.HAnimJoint()
HAnimJoint1485.setDEF("hanim_r_middle2")
HAnimJoint1485.setName("r_middle2")
HAnimJoint1485.setCenter(x3d.doubleToFloat([-0.2013,0.7273,-0.0503]))
HAnimSegment1486 = x3d.HAnimSegment()
HAnimSegment1486.setDEF("hanim_r_middle_middle")
HAnimSegment1486.setName("r_middle_middle")
TouchSensor1487 = x3d.TouchSensor()
TouchSensor1487.setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle")

HAnimSegment1486.addChild(TouchSensor1487)
Transform1488 = x3d.Transform()
Transform1488.setTranslation(x3d.doubleToFloat([-0.2013,0.7273,-0.0503]))
Shape1489 = x3d.Shape()
Shape1489.setUSE("HAnimJointShape")

Transform1488.addChild(Shape1489)

HAnimSegment1486.addChild(Transform1488)
Shape1490 = x3d.Shape()
LineSet1491 = x3d.LineSet()
LineSet1491.setVertexCount([2])
ColorRGBA1492 = x3d.ColorRGBA()
ColorRGBA1492.setUSE("HAnimSegmentLineColorRGBA")

LineSet1491.setColor(ColorRGBA1492)
Coordinate1493 = x3d.Coordinate()
Coordinate1493.setPoint(x3d.doubleToFloat([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]))

LineSet1491.setCoord(Coordinate1493)

Shape1490.setGeometry(LineSet1491)

HAnimSegment1486.addChild(Shape1490)

HAnimJoint1485.addChild(HAnimSegment1486)
HAnimJoint1494 = x3d.HAnimJoint()
HAnimJoint1494.setDEF("hanim_r_middle3")
HAnimJoint1494.setName("r_middle3")
HAnimJoint1494.setCenter(x3d.doubleToFloat([-0.2026,0.7011,-0.0494]))
HAnimSegment1495 = x3d.HAnimSegment()
HAnimSegment1495.setDEF("hanim_r_middle_distal")
HAnimSegment1495.setName("r_middle_distal")
TouchSensor1496 = x3d.TouchSensor()
TouchSensor1496.setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal")

HAnimSegment1495.addChild(TouchSensor1496)
Transform1497 = x3d.Transform()
Transform1497.setTranslation(x3d.doubleToFloat([-0.2026,0.7011,-0.0494]))
Shape1498 = x3d.Shape()
Shape1498.setUSE("HAnimJointShape")

Transform1497.addChild(Shape1498)

HAnimSegment1495.addChild(Transform1497)
Shape1499 = x3d.Shape()
LineSet1500 = x3d.LineSet()
LineSet1500.setVertexCount([2])
ColorRGBA1501 = x3d.ColorRGBA()
ColorRGBA1501.setUSE("HAnimSiteLineColorRGBA")

LineSet1500.setColor(ColorRGBA1501)
Coordinate1502 = x3d.Coordinate()
Coordinate1502.setPoint(x3d.doubleToFloat([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]))

LineSet1500.setCoord(Coordinate1502)

Shape1499.setGeometry(LineSet1500)

HAnimSegment1495.addChild(Shape1499)
HAnimSite1503 = x3d.HAnimSite()
HAnimSite1503.setDEF("hanim_r_middle_distal_tip")
HAnimSite1503.setName("r_middle_distal_tip")
HAnimSite1503.setTranslation(x3d.doubleToFloat([-0.1969,0.6758,-0.0427]))
TouchSensor1504 = x3d.TouchSensor()
TouchSensor1504.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1503.addChild(TouchSensor1504)
Shape1505 = x3d.Shape()
Shape1505.setUSE("HAnimSiteShape")

HAnimSite1503.addChild(Shape1505)

HAnimSegment1495.addChild(HAnimSite1503)

HAnimJoint1494.addChild(HAnimSegment1495)

HAnimJoint1485.addChild(HAnimJoint1494)

HAnimJoint1476.addChild(HAnimJoint1485)

HAnimJoint1467.addChild(HAnimJoint1476)

HAnimJoint1333.addChild(HAnimJoint1467)
HAnimJoint1506 = x3d.HAnimJoint()
HAnimJoint1506.setDEF("hanim_r_ring0")
HAnimJoint1506.setName("r_ring0")
HAnimJoint1506.setCenter(x3d.doubleToFloat([-0.1956,0.8019,-0.0794]))
HAnimSegment1507 = x3d.HAnimSegment()
HAnimSegment1507.setDEF("hanim_r_ring_metacarpal")
HAnimSegment1507.setName("r_ring_metacarpal")
TouchSensor1508 = x3d.TouchSensor()
TouchSensor1508.setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")

HAnimSegment1507.addChild(TouchSensor1508)
Transform1509 = x3d.Transform()
Transform1509.setTranslation(x3d.doubleToFloat([-0.1956,0.8019,-0.0794]))
Shape1510 = x3d.Shape()
Shape1510.setUSE("HAnimJointShape")

Transform1509.addChild(Shape1510)

HAnimSegment1507.addChild(Transform1509)
Shape1511 = x3d.Shape()
LineSet1512 = x3d.LineSet()
LineSet1512.setVertexCount([2])
ColorRGBA1513 = x3d.ColorRGBA()
ColorRGBA1513.setUSE("HAnimSegmentLineColorRGBA")

LineSet1512.setColor(ColorRGBA1513)
Coordinate1514 = x3d.Coordinate()
Coordinate1514.setPoint(x3d.doubleToFloat([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]))

LineSet1512.setCoord(Coordinate1514)

Shape1511.setGeometry(LineSet1512)

HAnimSegment1507.addChild(Shape1511)

HAnimJoint1506.addChild(HAnimSegment1507)
HAnimJoint1515 = x3d.HAnimJoint()
HAnimJoint1515.setDEF("hanim_r_ring1")
HAnimJoint1515.setName("r_ring1")
HAnimJoint1515.setCenter(x3d.doubleToFloat([-0.1956,0.7815,-0.0794]))
HAnimSegment1516 = x3d.HAnimSegment()
HAnimSegment1516.setDEF("hanim_r_ring_proximal")
HAnimSegment1516.setName("r_ring_proximal")
TouchSensor1517 = x3d.TouchSensor()
TouchSensor1517.setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")

HAnimSegment1516.addChild(TouchSensor1517)
Transform1518 = x3d.Transform()
Transform1518.setTranslation(x3d.doubleToFloat([-0.1956,0.7815,-0.0794]))
Shape1519 = x3d.Shape()
Shape1519.setUSE("HAnimJointShape")

Transform1518.addChild(Shape1519)

HAnimSegment1516.addChild(Transform1518)
Shape1520 = x3d.Shape()
LineSet1521 = x3d.LineSet()
LineSet1521.setVertexCount([2])
ColorRGBA1522 = x3d.ColorRGBA()
ColorRGBA1522.setUSE("HAnimSegmentLineColorRGBA")

LineSet1521.setColor(ColorRGBA1522)
Coordinate1523 = x3d.Coordinate()
Coordinate1523.setPoint(x3d.doubleToFloat([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]))

LineSet1521.setCoord(Coordinate1523)

Shape1520.setGeometry(LineSet1521)

HAnimSegment1516.addChild(Shape1520)

HAnimJoint1515.addChild(HAnimSegment1516)
HAnimJoint1524 = x3d.HAnimJoint()
HAnimJoint1524.setDEF("hanim_r_ring2")
HAnimJoint1524.setName("r_ring2")
HAnimJoint1524.setCenter(x3d.doubleToFloat([-0.1973,0.7287,-0.0777]))
HAnimSegment1525 = x3d.HAnimSegment()
HAnimSegment1525.setDEF("hanim_r_ring_middle")
HAnimSegment1525.setName("r_ring_middle")
TouchSensor1526 = x3d.TouchSensor()
TouchSensor1526.setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle")

HAnimSegment1525.addChild(TouchSensor1526)
Transform1527 = x3d.Transform()
Transform1527.setTranslation(x3d.doubleToFloat([-0.1973,0.7287,-0.0777]))
Shape1528 = x3d.Shape()
Shape1528.setUSE("HAnimJointShape")

Transform1527.addChild(Shape1528)

HAnimSegment1525.addChild(Transform1527)
Shape1529 = x3d.Shape()
LineSet1530 = x3d.LineSet()
LineSet1530.setVertexCount([2])
ColorRGBA1531 = x3d.ColorRGBA()
ColorRGBA1531.setUSE("HAnimSegmentLineColorRGBA")

LineSet1530.setColor(ColorRGBA1531)
Coordinate1532 = x3d.Coordinate()
Coordinate1532.setPoint(x3d.doubleToFloat([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]))

LineSet1530.setCoord(Coordinate1532)

Shape1529.setGeometry(LineSet1530)

HAnimSegment1525.addChild(Shape1529)

HAnimJoint1524.addChild(HAnimSegment1525)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.setDEF("hanim_r_ring3")
HAnimJoint1533.setName("r_ring3")
HAnimJoint1533.setCenter(x3d.doubleToFloat([-0.1983,0.7045,-0.0767]))
HAnimSegment1534 = x3d.HAnimSegment()
HAnimSegment1534.setDEF("hanim_r_ring_distal")
HAnimSegment1534.setName("r_ring_distal")
TouchSensor1535 = x3d.TouchSensor()
TouchSensor1535.setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal")

HAnimSegment1534.addChild(TouchSensor1535)
Transform1536 = x3d.Transform()
Transform1536.setTranslation(x3d.doubleToFloat([-0.1983,0.7045,-0.0767]))
Shape1537 = x3d.Shape()
Shape1537.setUSE("HAnimJointShape")

Transform1536.addChild(Shape1537)

HAnimSegment1534.addChild(Transform1536)
Shape1538 = x3d.Shape()
LineSet1539 = x3d.LineSet()
LineSet1539.setVertexCount([2])
ColorRGBA1540 = x3d.ColorRGBA()
ColorRGBA1540.setUSE("HAnimSiteLineColorRGBA")

LineSet1539.setColor(ColorRGBA1540)
Coordinate1541 = x3d.Coordinate()
Coordinate1541.setPoint(x3d.doubleToFloat([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]))

LineSet1539.setCoord(Coordinate1541)

Shape1538.setGeometry(LineSet1539)

HAnimSegment1534.addChild(Shape1538)
HAnimSite1542 = x3d.HAnimSite()
HAnimSite1542.setDEF("hanim_r_ring_distal_tip")
HAnimSite1542.setName("r_ring_distal_tip")
HAnimSite1542.setTranslation(x3d.doubleToFloat([-0.1934,0.6778,-0.0693]))
TouchSensor1543 = x3d.TouchSensor()
TouchSensor1543.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1542.addChild(TouchSensor1543)
Shape1544 = x3d.Shape()
Shape1544.setUSE("HAnimSiteShape")

HAnimSite1542.addChild(Shape1544)

HAnimSegment1534.addChild(HAnimSite1542)

HAnimJoint1533.addChild(HAnimSegment1534)

HAnimJoint1524.addChild(HAnimJoint1533)

HAnimJoint1515.addChild(HAnimJoint1524)

HAnimJoint1506.addChild(HAnimJoint1515)

HAnimJoint1333.addChild(HAnimJoint1506)
HAnimJoint1545 = x3d.HAnimJoint()
HAnimJoint1545.setDEF("hanim_r_pinky0")
HAnimJoint1545.setName("r_pinky0")
HAnimJoint1545.setCenter(x3d.doubleToFloat([-0.1925,0.8066,-0.1036]))
HAnimSegment1546 = x3d.HAnimSegment()
HAnimSegment1546.setDEF("hanim_r_pinky_metacarpal")
HAnimSegment1546.setName("r_pinky_metacarpal")
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")

HAnimSegment1546.addChild(TouchSensor1547)
Transform1548 = x3d.Transform()
Transform1548.setTranslation(x3d.doubleToFloat([-0.1925,0.8066,-0.1036]))
Shape1549 = x3d.Shape()
Shape1549.setUSE("HAnimJointShape")

Transform1548.addChild(Shape1549)

HAnimSegment1546.addChild(Transform1548)
Shape1550 = x3d.Shape()
LineSet1551 = x3d.LineSet()
LineSet1551.setVertexCount([2])
ColorRGBA1552 = x3d.ColorRGBA()
ColorRGBA1552.setUSE("HAnimSegmentLineColorRGBA")

LineSet1551.setColor(ColorRGBA1552)
Coordinate1553 = x3d.Coordinate()
Coordinate1553.setPoint(x3d.doubleToFloat([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]))

LineSet1551.setCoord(Coordinate1553)

Shape1550.setGeometry(LineSet1551)

HAnimSegment1546.addChild(Shape1550)

HAnimJoint1545.addChild(HAnimSegment1546)
HAnimJoint1554 = x3d.HAnimJoint()
HAnimJoint1554.setDEF("hanim_r_pinky1")
HAnimJoint1554.setName("r_pinky1")
HAnimJoint1554.setCenter(x3d.doubleToFloat([-0.1925,0.7866,-0.1036]))
HAnimSegment1555 = x3d.HAnimSegment()
HAnimSegment1555.setDEF("hanim_r_pinky_proximal")
HAnimSegment1555.setName("r_pinky_proximal")
TouchSensor1556 = x3d.TouchSensor()
TouchSensor1556.setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")

HAnimSegment1555.addChild(TouchSensor1556)
Transform1557 = x3d.Transform()
Transform1557.setTranslation(x3d.doubleToFloat([-0.1925,0.7866,-0.1036]))
Shape1558 = x3d.Shape()
Shape1558.setUSE("HAnimJointShape")

Transform1557.addChild(Shape1558)

HAnimSegment1555.addChild(Transform1557)
Shape1559 = x3d.Shape()
LineSet1560 = x3d.LineSet()
LineSet1560.setVertexCount([2])
ColorRGBA1561 = x3d.ColorRGBA()
ColorRGBA1561.setUSE("HAnimSegmentLineColorRGBA")

LineSet1560.setColor(ColorRGBA1561)
Coordinate1562 = x3d.Coordinate()
Coordinate1562.setPoint(x3d.doubleToFloat([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]))

LineSet1560.setCoord(Coordinate1562)

Shape1559.setGeometry(LineSet1560)

HAnimSegment1555.addChild(Shape1559)

HAnimJoint1554.addChild(HAnimSegment1555)
HAnimJoint1563 = x3d.HAnimJoint()
HAnimJoint1563.setDEF("hanim_r_pinky2")
HAnimJoint1563.setName("r_pinky2")
HAnimJoint1563.setCenter(x3d.doubleToFloat([-0.1938,0.7452,-0.1024]))
HAnimSegment1564 = x3d.HAnimSegment()
HAnimSegment1564.setDEF("hanim_r_pinky_middle")
HAnimSegment1564.setName("r_pinky_middle")
TouchSensor1565 = x3d.TouchSensor()
TouchSensor1565.setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")

HAnimSegment1564.addChild(TouchSensor1565)
Transform1566 = x3d.Transform()
Transform1566.setTranslation(x3d.doubleToFloat([-0.1938,0.7452,-0.1024]))
Shape1567 = x3d.Shape()
Shape1567.setUSE("HAnimJointShape")

Transform1566.addChild(Shape1567)

HAnimSegment1564.addChild(Transform1566)
Shape1568 = x3d.Shape()
LineSet1569 = x3d.LineSet()
LineSet1569.setVertexCount([2])
ColorRGBA1570 = x3d.ColorRGBA()
ColorRGBA1570.setUSE("HAnimSegmentLineColorRGBA")

LineSet1569.setColor(ColorRGBA1570)
Coordinate1571 = x3d.Coordinate()
Coordinate1571.setPoint(x3d.doubleToFloat([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]))

LineSet1569.setCoord(Coordinate1571)

Shape1568.setGeometry(LineSet1569)

HAnimSegment1564.addChild(Shape1568)

HAnimJoint1563.addChild(HAnimSegment1564)
HAnimJoint1572 = x3d.HAnimJoint()
HAnimJoint1572.setDEF("hanim_r_pinky3")
HAnimJoint1572.setName("r_pinky3")
HAnimJoint1572.setCenter(x3d.doubleToFloat([-0.1948,0.7277,-0.1017]))
HAnimSegment1573 = x3d.HAnimSegment()
HAnimSegment1573.setDEF("hanim_r_pinky_distal")
HAnimSegment1573.setName("r_pinky_distal")
TouchSensor1574 = x3d.TouchSensor()
TouchSensor1574.setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")

HAnimSegment1573.addChild(TouchSensor1574)
Transform1575 = x3d.Transform()
Transform1575.setTranslation(x3d.doubleToFloat([-0.1948,0.7277,-0.1017]))
Shape1576 = x3d.Shape()
Shape1576.setUSE("HAnimJointShape")

Transform1575.addChild(Shape1576)

HAnimSegment1573.addChild(Transform1575)
Shape1577 = x3d.Shape()
LineSet1578 = x3d.LineSet()
LineSet1578.setVertexCount([2])
ColorRGBA1579 = x3d.ColorRGBA()
ColorRGBA1579.setUSE("HAnimSiteLineColorRGBA")

LineSet1578.setColor(ColorRGBA1579)
Coordinate1580 = x3d.Coordinate()
Coordinate1580.setPoint(x3d.doubleToFloat([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]))

LineSet1578.setCoord(Coordinate1580)

Shape1577.setGeometry(LineSet1578)

HAnimSegment1573.addChild(Shape1577)
HAnimSite1581 = x3d.HAnimSite()
HAnimSite1581.setDEF("hanim_r_pinky_distal_tip")
HAnimSite1581.setName("r_pinky_distal_tip")
HAnimSite1581.setTranslation(x3d.doubleToFloat([-0.1938,0.7035,-0.0949]))
TouchSensor1582 = x3d.TouchSensor()
TouchSensor1582.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1581.addChild(TouchSensor1582)
Shape1583 = x3d.Shape()
Shape1583.setUSE("HAnimSiteShape")

HAnimSite1581.addChild(Shape1583)

HAnimSegment1573.addChild(HAnimSite1581)

HAnimJoint1572.addChild(HAnimSegment1573)

HAnimJoint1563.addChild(HAnimJoint1572)

HAnimJoint1554.addChild(HAnimJoint1563)

HAnimJoint1545.addChild(HAnimJoint1554)

HAnimJoint1333.addChild(HAnimJoint1545)

HAnimJoint1296.addChild(HAnimJoint1333)

HAnimJoint1280.addChild(HAnimJoint1296)

HAnimJoint1271.addChild(HAnimJoint1280)

HAnimJoint1234.addChild(HAnimJoint1271)

HAnimJoint596.addChild(HAnimJoint1234)

HAnimJoint587.addChild(HAnimJoint596)

HAnimJoint578.addChild(HAnimJoint587)

HAnimJoint569.addChild(HAnimJoint578)

HAnimJoint560.addChild(HAnimJoint569)

HAnimJoint551.addChild(HAnimJoint560)

HAnimJoint542.addChild(HAnimJoint551)

HAnimJoint533.addChild(HAnimJoint542)

HAnimJoint510.addChild(HAnimJoint533)

HAnimJoint494.addChild(HAnimJoint510)

HAnimJoint485.addChild(HAnimJoint494)

HAnimJoint476.addChild(HAnimJoint485)

HAnimJoint467.addChild(HAnimJoint476)

HAnimJoint437.addChild(HAnimJoint467)

HAnimJoint428.addChild(HAnimJoint437)

HAnimJoint419.addChild(HAnimJoint428)

HAnimJoint396.addChild(HAnimJoint419)

HAnimJoint46.addChild(HAnimJoint396)

HAnimHumanoid45.addSkeleton(HAnimJoint46)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.setContainerFieldOverride("joints")
HAnimJoint1584.setUSE("hanim_humanoid_root")

HAnimHumanoid45.addJoints(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.setContainerFieldOverride("joints")
HAnimJoint1585.setUSE("hanim_sacroiliac")

HAnimHumanoid45.addJoints(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.setContainerFieldOverride("joints")
HAnimJoint1586.setUSE("hanim_vl5")

HAnimHumanoid45.addJoints(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.setContainerFieldOverride("joints")
HAnimJoint1587.setUSE("hanim_vl4")

HAnimHumanoid45.addJoints(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.setContainerFieldOverride("joints")
HAnimJoint1588.setUSE("hanim_vl3")

HAnimHumanoid45.addJoints(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.setContainerFieldOverride("joints")
HAnimJoint1589.setUSE("hanim_vl2")

HAnimHumanoid45.addJoints(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.setContainerFieldOverride("joints")
HAnimJoint1590.setUSE("hanim_vl1")

HAnimHumanoid45.addJoints(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.setContainerFieldOverride("joints")
HAnimJoint1591.setUSE("hanim_vt12")

HAnimHumanoid45.addJoints(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.setContainerFieldOverride("joints")
HAnimJoint1592.setUSE("hanim_vt11")

HAnimHumanoid45.addJoints(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.setContainerFieldOverride("joints")
HAnimJoint1593.setUSE("hanim_vt10")

HAnimHumanoid45.addJoints(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.setContainerFieldOverride("joints")
HAnimJoint1594.setUSE("hanim_vt9")

HAnimHumanoid45.addJoints(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.setContainerFieldOverride("joints")
HAnimJoint1595.setUSE("hanim_vt8")

HAnimHumanoid45.addJoints(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.setContainerFieldOverride("joints")
HAnimJoint1596.setUSE("hanim_vt7")

HAnimHumanoid45.addJoints(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.setContainerFieldOverride("joints")
HAnimJoint1597.setUSE("hanim_vt6")

HAnimHumanoid45.addJoints(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.setContainerFieldOverride("joints")
HAnimJoint1598.setUSE("hanim_vt5")

HAnimHumanoid45.addJoints(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.setContainerFieldOverride("joints")
HAnimJoint1599.setUSE("hanim_vt4")

HAnimHumanoid45.addJoints(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.setContainerFieldOverride("joints")
HAnimJoint1600.setUSE("hanim_vt3")

HAnimHumanoid45.addJoints(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.setContainerFieldOverride("joints")
HAnimJoint1601.setUSE("hanim_vt2")

HAnimHumanoid45.addJoints(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.setContainerFieldOverride("joints")
HAnimJoint1602.setUSE("hanim_vt1")

HAnimHumanoid45.addJoints(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.setContainerFieldOverride("joints")
HAnimJoint1603.setUSE("hanim_vc7")

HAnimHumanoid45.addJoints(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.setContainerFieldOverride("joints")
HAnimJoint1604.setUSE("hanim_vc6")

HAnimHumanoid45.addJoints(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.setContainerFieldOverride("joints")
HAnimJoint1605.setUSE("hanim_vc5")

HAnimHumanoid45.addJoints(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.setContainerFieldOverride("joints")
HAnimJoint1606.setUSE("hanim_vc4")

HAnimHumanoid45.addJoints(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.setContainerFieldOverride("joints")
HAnimJoint1607.setUSE("hanim_vc3")

HAnimHumanoid45.addJoints(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.setContainerFieldOverride("joints")
HAnimJoint1608.setUSE("hanim_vc2")

HAnimHumanoid45.addJoints(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.setContainerFieldOverride("joints")
HAnimJoint1609.setUSE("hanim_vc1")

HAnimHumanoid45.addJoints(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setContainerFieldOverride("joints")
HAnimJoint1610.setUSE("hanim_skullbase")

HAnimHumanoid45.addJoints(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setContainerFieldOverride("joints")
HAnimJoint1611.setUSE("hanim_temporomandibular")

HAnimHumanoid45.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setContainerFieldOverride("joints")
HAnimJoint1612.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid45.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setContainerFieldOverride("joints")
HAnimJoint1613.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid45.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setContainerFieldOverride("joints")
HAnimJoint1614.setUSE("hanim_l_ankle")

HAnimHumanoid45.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setContainerFieldOverride("joints")
HAnimJoint1615.setUSE("hanim_r_ankle")

HAnimHumanoid45.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setContainerFieldOverride("joints")
HAnimJoint1616.setUSE("hanim_l_elbow")

HAnimHumanoid45.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setContainerFieldOverride("joints")
HAnimJoint1617.setUSE("hanim_r_elbow")

HAnimHumanoid45.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setContainerFieldOverride("joints")
HAnimJoint1618.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid45.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setContainerFieldOverride("joints")
HAnimJoint1619.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid45.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setContainerFieldOverride("joints")
HAnimJoint1620.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid45.addJoints(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.setContainerFieldOverride("joints")
HAnimJoint1621.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid45.addJoints(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.setContainerFieldOverride("joints")
HAnimJoint1622.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid45.addJoints(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.setContainerFieldOverride("joints")
HAnimJoint1623.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid45.addJoints(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.setContainerFieldOverride("joints")
HAnimJoint1624.setUSE("hanim_l_hip")

HAnimHumanoid45.addJoints(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.setContainerFieldOverride("joints")
HAnimJoint1625.setUSE("hanim_r_hip")

HAnimHumanoid45.addJoints(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.setContainerFieldOverride("joints")
HAnimJoint1626.setUSE("hanim_l_index0")

HAnimHumanoid45.addJoints(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.setContainerFieldOverride("joints")
HAnimJoint1627.setUSE("hanim_r_index0")

HAnimHumanoid45.addJoints(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.setContainerFieldOverride("joints")
HAnimJoint1628.setUSE("hanim_l_index1")

HAnimHumanoid45.addJoints(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.setContainerFieldOverride("joints")
HAnimJoint1629.setUSE("hanim_r_index1")

HAnimHumanoid45.addJoints(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.setContainerFieldOverride("joints")
HAnimJoint1630.setUSE("hanim_l_index2")

HAnimHumanoid45.addJoints(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.setContainerFieldOverride("joints")
HAnimJoint1631.setUSE("hanim_r_index2")

HAnimHumanoid45.addJoints(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.setContainerFieldOverride("joints")
HAnimJoint1632.setUSE("hanim_l_index3")

HAnimHumanoid45.addJoints(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.setContainerFieldOverride("joints")
HAnimJoint1633.setUSE("hanim_r_index3")

HAnimHumanoid45.addJoints(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.setContainerFieldOverride("joints")
HAnimJoint1634.setUSE("hanim_l_knee")

HAnimHumanoid45.addJoints(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.setContainerFieldOverride("joints")
HAnimJoint1635.setUSE("hanim_r_knee")

HAnimHumanoid45.addJoints(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setContainerFieldOverride("joints")
HAnimJoint1636.setUSE("hanim_l_metatarsal")

HAnimHumanoid45.addJoints(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.setContainerFieldOverride("joints")
HAnimJoint1637.setUSE("hanim_r_metatarsal")

HAnimHumanoid45.addJoints(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.setContainerFieldOverride("joints")
HAnimJoint1638.setUSE("hanim_l_middle0")

HAnimHumanoid45.addJoints(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.setContainerFieldOverride("joints")
HAnimJoint1639.setUSE("hanim_r_middle0")

HAnimHumanoid45.addJoints(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.setContainerFieldOverride("joints")
HAnimJoint1640.setUSE("hanim_l_middle1")

HAnimHumanoid45.addJoints(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.setContainerFieldOverride("joints")
HAnimJoint1641.setUSE("hanim_r_middle1")

HAnimHumanoid45.addJoints(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.setContainerFieldOverride("joints")
HAnimJoint1642.setUSE("hanim_l_middle2")

HAnimHumanoid45.addJoints(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.setContainerFieldOverride("joints")
HAnimJoint1643.setUSE("hanim_r_middle2")

HAnimHumanoid45.addJoints(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.setContainerFieldOverride("joints")
HAnimJoint1644.setUSE("hanim_l_middle3")

HAnimHumanoid45.addJoints(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.setContainerFieldOverride("joints")
HAnimJoint1645.setUSE("hanim_r_middle3")

HAnimHumanoid45.addJoints(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.setContainerFieldOverride("joints")
HAnimJoint1646.setUSE("hanim_l_midtarsal")

HAnimHumanoid45.addJoints(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.setContainerFieldOverride("joints")
HAnimJoint1647.setUSE("hanim_r_midtarsal")

HAnimHumanoid45.addJoints(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.setContainerFieldOverride("joints")
HAnimJoint1648.setUSE("hanim_l_pinky0")

HAnimHumanoid45.addJoints(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.setContainerFieldOverride("joints")
HAnimJoint1649.setUSE("hanim_r_pinky0")

HAnimHumanoid45.addJoints(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.setContainerFieldOverride("joints")
HAnimJoint1650.setUSE("hanim_l_pinky1")

HAnimHumanoid45.addJoints(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.setContainerFieldOverride("joints")
HAnimJoint1651.setUSE("hanim_r_pinky1")

HAnimHumanoid45.addJoints(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.setContainerFieldOverride("joints")
HAnimJoint1652.setUSE("hanim_l_pinky2")

HAnimHumanoid45.addJoints(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.setContainerFieldOverride("joints")
HAnimJoint1653.setUSE("hanim_r_pinky2")

HAnimHumanoid45.addJoints(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.setContainerFieldOverride("joints")
HAnimJoint1654.setUSE("hanim_l_pinky3")

HAnimHumanoid45.addJoints(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.setContainerFieldOverride("joints")
HAnimJoint1655.setUSE("hanim_r_pinky3")

HAnimHumanoid45.addJoints(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.setContainerFieldOverride("joints")
HAnimJoint1656.setUSE("hanim_l_ring0")

HAnimHumanoid45.addJoints(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.setContainerFieldOverride("joints")
HAnimJoint1657.setUSE("hanim_r_ring0")

HAnimHumanoid45.addJoints(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.setContainerFieldOverride("joints")
HAnimJoint1658.setUSE("hanim_l_ring1")

HAnimHumanoid45.addJoints(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.setContainerFieldOverride("joints")
HAnimJoint1659.setUSE("hanim_r_ring1")

HAnimHumanoid45.addJoints(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setContainerFieldOverride("joints")
HAnimJoint1660.setUSE("hanim_l_ring2")

HAnimHumanoid45.addJoints(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.setContainerFieldOverride("joints")
HAnimJoint1661.setUSE("hanim_r_ring2")

HAnimHumanoid45.addJoints(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.setContainerFieldOverride("joints")
HAnimJoint1662.setUSE("hanim_l_ring3")

HAnimHumanoid45.addJoints(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.setContainerFieldOverride("joints")
HAnimJoint1663.setUSE("hanim_r_ring3")

HAnimHumanoid45.addJoints(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.setContainerFieldOverride("joints")
HAnimJoint1664.setUSE("hanim_l_shoulder")

HAnimHumanoid45.addJoints(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.setContainerFieldOverride("joints")
HAnimJoint1665.setUSE("hanim_r_shoulder")

HAnimHumanoid45.addJoints(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.setContainerFieldOverride("joints")
HAnimJoint1666.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid45.addJoints(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.setContainerFieldOverride("joints")
HAnimJoint1667.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid45.addJoints(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.setContainerFieldOverride("joints")
HAnimJoint1668.setUSE("hanim_l_subtalar")

HAnimHumanoid45.addJoints(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.setContainerFieldOverride("joints")
HAnimJoint1669.setUSE("hanim_r_subtalar")

HAnimHumanoid45.addJoints(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.setContainerFieldOverride("joints")
HAnimJoint1670.setUSE("hanim_l_thumb1")

HAnimHumanoid45.addJoints(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.setContainerFieldOverride("joints")
HAnimJoint1671.setUSE("hanim_r_thumb1")

HAnimHumanoid45.addJoints(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.setContainerFieldOverride("joints")
HAnimJoint1672.setUSE("hanim_l_thumb2")

HAnimHumanoid45.addJoints(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setContainerFieldOverride("joints")
HAnimJoint1673.setUSE("hanim_r_thumb2")

HAnimHumanoid45.addJoints(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.setContainerFieldOverride("joints")
HAnimJoint1674.setUSE("hanim_l_thumb3")

HAnimHumanoid45.addJoints(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.setContainerFieldOverride("joints")
HAnimJoint1675.setUSE("hanim_r_thumb3")

HAnimHumanoid45.addJoints(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.setContainerFieldOverride("joints")
HAnimJoint1676.setUSE("hanim_l_wrist")

HAnimHumanoid45.addJoints(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.setContainerFieldOverride("joints")
HAnimJoint1677.setUSE("hanim_r_wrist")

HAnimHumanoid45.addJoints(HAnimJoint1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.setContainerFieldOverride("segments")
HAnimSegment1678.setUSE("hanim_pelvis")

HAnimHumanoid45.addSegments(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.setContainerFieldOverride("segments")
HAnimSegment1679.setUSE("hanim_skull")

HAnimHumanoid45.addSegments(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.setContainerFieldOverride("segments")
HAnimSegment1680.setUSE("hanim_jaw")

HAnimHumanoid45.addSegments(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.setContainerFieldOverride("segments")
HAnimSegment1681.setUSE("hanim_c1")

HAnimHumanoid45.addSegments(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.setContainerFieldOverride("segments")
HAnimSegment1682.setUSE("hanim_c2")

HAnimHumanoid45.addSegments(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.setContainerFieldOverride("segments")
HAnimSegment1683.setUSE("hanim_c3")

HAnimHumanoid45.addSegments(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.setContainerFieldOverride("segments")
HAnimSegment1684.setUSE("hanim_c4")

HAnimHumanoid45.addSegments(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.setContainerFieldOverride("segments")
HAnimSegment1685.setUSE("hanim_c5")

HAnimHumanoid45.addSegments(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.setContainerFieldOverride("segments")
HAnimSegment1686.setUSE("hanim_c6")

HAnimHumanoid45.addSegments(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.setContainerFieldOverride("segments")
HAnimSegment1687.setUSE("hanim_c7")

HAnimHumanoid45.addSegments(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.setContainerFieldOverride("segments")
HAnimSegment1688.setUSE("hanim_t1")

HAnimHumanoid45.addSegments(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.setContainerFieldOverride("segments")
HAnimSegment1689.setUSE("hanim_t2")

HAnimHumanoid45.addSegments(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.setContainerFieldOverride("segments")
HAnimSegment1690.setUSE("hanim_t3")

HAnimHumanoid45.addSegments(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.setContainerFieldOverride("segments")
HAnimSegment1691.setUSE("hanim_t4")

HAnimHumanoid45.addSegments(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.setContainerFieldOverride("segments")
HAnimSegment1692.setUSE("hanim_t5")

HAnimHumanoid45.addSegments(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.setContainerFieldOverride("segments")
HAnimSegment1693.setUSE("hanim_t6")

HAnimHumanoid45.addSegments(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.setContainerFieldOverride("segments")
HAnimSegment1694.setUSE("hanim_t7")

HAnimHumanoid45.addSegments(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.setContainerFieldOverride("segments")
HAnimSegment1695.setUSE("hanim_t8")

HAnimHumanoid45.addSegments(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.setContainerFieldOverride("segments")
HAnimSegment1696.setUSE("hanim_t9")

HAnimHumanoid45.addSegments(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.setContainerFieldOverride("segments")
HAnimSegment1697.setUSE("hanim_t10")

HAnimHumanoid45.addSegments(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.setContainerFieldOverride("segments")
HAnimSegment1698.setUSE("hanim_t11")

HAnimHumanoid45.addSegments(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.setContainerFieldOverride("segments")
HAnimSegment1699.setUSE("hanim_t12")

HAnimHumanoid45.addSegments(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.setContainerFieldOverride("segments")
HAnimSegment1700.setUSE("hanim_l1")

HAnimHumanoid45.addSegments(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.setContainerFieldOverride("segments")
HAnimSegment1701.setUSE("hanim_l2")

HAnimHumanoid45.addSegments(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.setContainerFieldOverride("segments")
HAnimSegment1702.setUSE("hanim_l3")

HAnimHumanoid45.addSegments(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.setContainerFieldOverride("segments")
HAnimSegment1703.setUSE("hanim_l4")

HAnimHumanoid45.addSegments(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.setContainerFieldOverride("segments")
HAnimSegment1704.setUSE("hanim_l5")

HAnimHumanoid45.addSegments(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.setContainerFieldOverride("segments")
HAnimSegment1705.setUSE("hanim_sacrum")

HAnimHumanoid45.addSegments(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.setContainerFieldOverride("segments")
HAnimSegment1706.setUSE("hanim_l_calf")

HAnimHumanoid45.addSegments(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.setContainerFieldOverride("segments")
HAnimSegment1707.setUSE("hanim_r_calf")

HAnimHumanoid45.addSegments(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.setContainerFieldOverride("segments")
HAnimSegment1708.setUSE("hanim_l_clavicle")

HAnimHumanoid45.addSegments(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.setContainerFieldOverride("segments")
HAnimSegment1709.setUSE("hanim_r_clavicle")

HAnimHumanoid45.addSegments(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.setContainerFieldOverride("segments")
HAnimSegment1710.setUSE("hanim_l_eyeball")

HAnimHumanoid45.addSegments(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.setContainerFieldOverride("segments")
HAnimSegment1711.setUSE("hanim_r_eyeball")

HAnimHumanoid45.addSegments(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.setContainerFieldOverride("segments")
HAnimSegment1712.setUSE("hanim_l_eyebrow")

HAnimHumanoid45.addSegments(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.setContainerFieldOverride("segments")
HAnimSegment1713.setUSE("hanim_r_eyebrow")

HAnimHumanoid45.addSegments(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.setContainerFieldOverride("segments")
HAnimSegment1714.setUSE("hanim_l_eyelid")

HAnimHumanoid45.addSegments(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.setContainerFieldOverride("segments")
HAnimSegment1715.setUSE("hanim_r_eyelid")

HAnimHumanoid45.addSegments(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.setContainerFieldOverride("segments")
HAnimSegment1716.setUSE("hanim_l_forearm")

HAnimHumanoid45.addSegments(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.setContainerFieldOverride("segments")
HAnimSegment1717.setUSE("hanim_r_forearm")

HAnimHumanoid45.addSegments(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.setContainerFieldOverride("segments")
HAnimSegment1718.setUSE("hanim_l_forefoot")

HAnimHumanoid45.addSegments(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.setContainerFieldOverride("segments")
HAnimSegment1719.setUSE("hanim_r_forefoot")

HAnimHumanoid45.addSegments(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.setContainerFieldOverride("segments")
HAnimSegment1720.setUSE("hanim_l_hand")

HAnimHumanoid45.addSegments(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.setContainerFieldOverride("segments")
HAnimSegment1721.setUSE("hanim_r_hand")

HAnimHumanoid45.addSegments(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.setContainerFieldOverride("segments")
HAnimSegment1722.setUSE("hanim_l_hindfoot")

HAnimHumanoid45.addSegments(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.setContainerFieldOverride("segments")
HAnimSegment1723.setUSE("hanim_r_hindfoot")

HAnimHumanoid45.addSegments(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.setContainerFieldOverride("segments")
HAnimSegment1724.setUSE("hanim_l_index_distal")

HAnimHumanoid45.addSegments(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.setContainerFieldOverride("segments")
HAnimSegment1725.setUSE("hanim_r_index_distal")

HAnimHumanoid45.addSegments(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.setContainerFieldOverride("segments")
HAnimSegment1726.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.setContainerFieldOverride("segments")
HAnimSegment1727.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.setContainerFieldOverride("segments")
HAnimSegment1728.setUSE("hanim_l_index_middle")

HAnimHumanoid45.addSegments(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.setContainerFieldOverride("segments")
HAnimSegment1729.setUSE("hanim_r_index_middle")

HAnimHumanoid45.addSegments(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.setContainerFieldOverride("segments")
HAnimSegment1730.setUSE("hanim_l_index_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.setContainerFieldOverride("segments")
HAnimSegment1731.setUSE("hanim_r_index_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.setContainerFieldOverride("segments")
HAnimSegment1732.setUSE("hanim_l_middistal")

HAnimHumanoid45.addSegments(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.setContainerFieldOverride("segments")
HAnimSegment1733.setUSE("hanim_r_middistal")

HAnimHumanoid45.addSegments(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.setContainerFieldOverride("segments")
HAnimSegment1734.setUSE("hanim_l_middle_distal")

HAnimHumanoid45.addSegments(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.setContainerFieldOverride("segments")
HAnimSegment1735.setUSE("hanim_r_middle_distal")

HAnimHumanoid45.addSegments(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.setContainerFieldOverride("segments")
HAnimSegment1736.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.setContainerFieldOverride("segments")
HAnimSegment1737.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.setContainerFieldOverride("segments")
HAnimSegment1738.setUSE("hanim_l_middle_middle")

HAnimHumanoid45.addSegments(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.setContainerFieldOverride("segments")
HAnimSegment1739.setUSE("hanim_r_middle_middle")

HAnimHumanoid45.addSegments(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.setContainerFieldOverride("segments")
HAnimSegment1740.setUSE("hanim_l_middle_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.setContainerFieldOverride("segments")
HAnimSegment1741.setUSE("hanim_r_middle_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.setContainerFieldOverride("segments")
HAnimSegment1742.setUSE("hanim_l_midproximal")

HAnimHumanoid45.addSegments(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.setContainerFieldOverride("segments")
HAnimSegment1743.setUSE("hanim_r_midproximal")

HAnimHumanoid45.addSegments(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.setContainerFieldOverride("segments")
HAnimSegment1744.setUSE("hanim_l_pinky_distal")

HAnimHumanoid45.addSegments(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.setContainerFieldOverride("segments")
HAnimSegment1745.setUSE("hanim_r_pinky_distal")

HAnimHumanoid45.addSegments(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.setContainerFieldOverride("segments")
HAnimSegment1746.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.setContainerFieldOverride("segments")
HAnimSegment1747.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.setContainerFieldOverride("segments")
HAnimSegment1748.setUSE("hanim_l_pinky_middle")

HAnimHumanoid45.addSegments(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.setContainerFieldOverride("segments")
HAnimSegment1749.setUSE("hanim_r_pinky_middle")

HAnimHumanoid45.addSegments(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.setContainerFieldOverride("segments")
HAnimSegment1750.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.setContainerFieldOverride("segments")
HAnimSegment1751.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.setContainerFieldOverride("segments")
HAnimSegment1752.setUSE("hanim_l_ring_distal")

HAnimHumanoid45.addSegments(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.setContainerFieldOverride("segments")
HAnimSegment1753.setUSE("hanim_r_ring_distal")

HAnimHumanoid45.addSegments(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.setContainerFieldOverride("segments")
HAnimSegment1754.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.setContainerFieldOverride("segments")
HAnimSegment1755.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.setContainerFieldOverride("segments")
HAnimSegment1756.setUSE("hanim_l_ring_middle")

HAnimHumanoid45.addSegments(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setContainerFieldOverride("segments")
HAnimSegment1757.setUSE("hanim_r_ring_middle")

HAnimHumanoid45.addSegments(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.setContainerFieldOverride("segments")
HAnimSegment1758.setUSE("hanim_l_ring_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.setContainerFieldOverride("segments")
HAnimSegment1759.setUSE("hanim_r_ring_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.setContainerFieldOverride("segments")
HAnimSegment1760.setUSE("hanim_l_scapula")

HAnimHumanoid45.addSegments(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.setContainerFieldOverride("segments")
HAnimSegment1761.setUSE("hanim_r_scapula")

HAnimHumanoid45.addSegments(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.setContainerFieldOverride("segments")
HAnimSegment1762.setUSE("hanim_l_thigh")

HAnimHumanoid45.addSegments(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setContainerFieldOverride("segments")
HAnimSegment1763.setUSE("hanim_r_thigh")

HAnimHumanoid45.addSegments(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setContainerFieldOverride("segments")
HAnimSegment1764.setUSE("hanim_l_thumb_distal")

HAnimHumanoid45.addSegments(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.setContainerFieldOverride("segments")
HAnimSegment1765.setUSE("hanim_r_thumb_distal")

HAnimHumanoid45.addSegments(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.setContainerFieldOverride("segments")
HAnimSegment1766.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.setContainerFieldOverride("segments")
HAnimSegment1767.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid45.addSegments(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.setContainerFieldOverride("segments")
HAnimSegment1768.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setContainerFieldOverride("segments")
HAnimSegment1769.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid45.addSegments(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.setContainerFieldOverride("segments")
HAnimSegment1770.setUSE("hanim_l_upperarm")

HAnimHumanoid45.addSegments(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.setContainerFieldOverride("segments")
HAnimSegment1771.setUSE("hanim_r_upperarm")

HAnimHumanoid45.addSegments(HAnimSegment1771)
HAnimSite1772 = x3d.HAnimSite()
HAnimSite1772.setContainerFieldOverride("sites")
HAnimSite1772.setUSE("hanim_crotch_pt")

HAnimHumanoid45.addSites(HAnimSite1772)
HAnimSite1773 = x3d.HAnimSite()
HAnimSite1773.setContainerFieldOverride("sites")
HAnimSite1773.setUSE("hanim_skull_tip")

HAnimHumanoid45.addSites(HAnimSite1773)
HAnimSite1774 = x3d.HAnimSite()
HAnimSite1774.setContainerFieldOverride("sites")
HAnimSite1774.setUSE("hanim_sellion_pt")

HAnimHumanoid45.addSites(HAnimSite1774)
HAnimSite1775 = x3d.HAnimSite()
HAnimSite1775.setContainerFieldOverride("sites")
HAnimSite1775.setUSE("hanim_supramenton_pt")

HAnimHumanoid45.addSites(HAnimSite1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.setContainerFieldOverride("sites")
HAnimSite1776.setUSE("hanim_nuchale_pt")

HAnimHumanoid45.addSites(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.setContainerFieldOverride("sites")
HAnimSite1777.setUSE("hanim_suprasternale_pt")

HAnimHumanoid45.addSites(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.setContainerFieldOverride("sites")
HAnimSite1778.setUSE("hanim_cervicale_pt")

HAnimHumanoid45.addSites(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.setContainerFieldOverride("sites")
HAnimSite1779.setUSE("hanim_substernale_pt")

HAnimHumanoid45.addSites(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.setContainerFieldOverride("sites")
HAnimSite1780.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid45.addSites(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.setContainerFieldOverride("sites")
HAnimSite1781.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid45.addSites(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.setContainerFieldOverride("sites")
HAnimSite1782.setUSE("hanim_navel_pt")

HAnimHumanoid45.addSites(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.setContainerFieldOverride("sites")
HAnimSite1783.setUSE("hanim_l_acromion_pt")

HAnimHumanoid45.addSites(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.setContainerFieldOverride("sites")
HAnimSite1784.setUSE("hanim_r_acromion_pt")

HAnimHumanoid45.addSites(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.setContainerFieldOverride("sites")
HAnimSite1785.setUSE("hanim_r_asis_pt")

HAnimHumanoid45.addSites(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.setContainerFieldOverride("sites")
HAnimSite1786.setUSE("hanim_l_asis_pt")

HAnimHumanoid45.addSites(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.setContainerFieldOverride("sites")
HAnimSite1787.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid45.addSites(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.setContainerFieldOverride("sites")
HAnimSite1788.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid45.addSites(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.setContainerFieldOverride("sites")
HAnimSite1789.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid45.addSites(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.setContainerFieldOverride("sites")
HAnimSite1790.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid45.addSites(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.setContainerFieldOverride("sites")
HAnimSite1791.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid45.addSites(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.setContainerFieldOverride("sites")
HAnimSite1792.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid45.addSites(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.setContainerFieldOverride("sites")
HAnimSite1793.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid45.addSites(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.setContainerFieldOverride("sites")
HAnimSite1794.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid45.addSites(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.setContainerFieldOverride("sites")
HAnimSite1795.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid45.addSites(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.setContainerFieldOverride("sites")
HAnimSite1796.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid45.addSites(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.setContainerFieldOverride("sites")
HAnimSite1797.setUSE("hanim_l_digit2_pt")

HAnimHumanoid45.addSites(HAnimSite1797)
HAnimSite1798 = x3d.HAnimSite()
HAnimSite1798.setContainerFieldOverride("sites")
HAnimSite1798.setUSE("hanim_r_digit2_pt")

HAnimHumanoid45.addSites(HAnimSite1798)
HAnimSite1799 = x3d.HAnimSite()
HAnimSite1799.setContainerFieldOverride("sites")
HAnimSite1799.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1799)
HAnimSite1800 = x3d.HAnimSite()
HAnimSite1800.setContainerFieldOverride("sites")
HAnimSite1800.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1800)
HAnimSite1801 = x3d.HAnimSite()
HAnimSite1801.setContainerFieldOverride("sites")
HAnimSite1801.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1801)
HAnimSite1802 = x3d.HAnimSite()
HAnimSite1802.setContainerFieldOverride("sites")
HAnimSite1802.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1802)
HAnimSite1803 = x3d.HAnimSite()
HAnimSite1803.setContainerFieldOverride("sites")
HAnimSite1803.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid45.addSites(HAnimSite1803)
HAnimSite1804 = x3d.HAnimSite()
HAnimSite1804.setContainerFieldOverride("sites")
HAnimSite1804.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid45.addSites(HAnimSite1804)
HAnimSite1805 = x3d.HAnimSite()
HAnimSite1805.setContainerFieldOverride("sites")
HAnimSite1805.setUSE("hanim_r_gonion_pt")

HAnimHumanoid45.addSites(HAnimSite1805)
HAnimSite1806 = x3d.HAnimSite()
HAnimSite1806.setContainerFieldOverride("sites")
HAnimSite1806.setUSE("hanim_l_gonion_pt")

HAnimHumanoid45.addSites(HAnimSite1806)
HAnimSite1807 = x3d.HAnimSite()
HAnimSite1807.setContainerFieldOverride("sites")
HAnimSite1807.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1807)
HAnimSite1808 = x3d.HAnimSite()
HAnimSite1808.setContainerFieldOverride("sites")
HAnimSite1808.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1808)
HAnimSite1809 = x3d.HAnimSite()
HAnimSite1809.setContainerFieldOverride("sites")
HAnimSite1809.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1809)
HAnimSite1810 = x3d.HAnimSite()
HAnimSite1810.setContainerFieldOverride("sites")
HAnimSite1810.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid45.addSites(HAnimSite1810)
HAnimSite1811 = x3d.HAnimSite()
HAnimSite1811.setContainerFieldOverride("sites")
HAnimSite1811.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid45.addSites(HAnimSite1811)
HAnimSite1812 = x3d.HAnimSite()
HAnimSite1812.setContainerFieldOverride("sites")
HAnimSite1812.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid45.addSites(HAnimSite1812)
HAnimSite1813 = x3d.HAnimSite()
HAnimSite1813.setContainerFieldOverride("sites")
HAnimSite1813.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1813)
HAnimSite1814 = x3d.HAnimSite()
HAnimSite1814.setContainerFieldOverride("sites")
HAnimSite1814.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1814)
HAnimSite1815 = x3d.HAnimSite()
HAnimSite1815.setContainerFieldOverride("sites")
HAnimSite1815.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid45.addSites(HAnimSite1815)
HAnimSite1816 = x3d.HAnimSite()
HAnimSite1816.setContainerFieldOverride("sites")
HAnimSite1816.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid45.addSites(HAnimSite1816)
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.setContainerFieldOverride("sites")
HAnimSite1817.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid45.addSites(HAnimSite1817)
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.setContainerFieldOverride("sites")
HAnimSite1818.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid45.addSites(HAnimSite1818)
HAnimSite1819 = x3d.HAnimSite()
HAnimSite1819.setContainerFieldOverride("sites")
HAnimSite1819.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid45.addSites(HAnimSite1819)
HAnimSite1820 = x3d.HAnimSite()
HAnimSite1820.setContainerFieldOverride("sites")
HAnimSite1820.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid45.addSites(HAnimSite1820)
HAnimSite1821 = x3d.HAnimSite()
HAnimSite1821.setContainerFieldOverride("sites")
HAnimSite1821.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid45.addSites(HAnimSite1821)
HAnimSite1822 = x3d.HAnimSite()
HAnimSite1822.setContainerFieldOverride("sites")
HAnimSite1822.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid45.addSites(HAnimSite1822)
HAnimSite1823 = x3d.HAnimSite()
HAnimSite1823.setContainerFieldOverride("sites")
HAnimSite1823.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid45.addSites(HAnimSite1823)
HAnimSite1824 = x3d.HAnimSite()
HAnimSite1824.setContainerFieldOverride("sites")
HAnimSite1824.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid45.addSites(HAnimSite1824)
HAnimSite1825 = x3d.HAnimSite()
HAnimSite1825.setContainerFieldOverride("sites")
HAnimSite1825.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid45.addSites(HAnimSite1825)
HAnimSite1826 = x3d.HAnimSite()
HAnimSite1826.setContainerFieldOverride("sites")
HAnimSite1826.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid45.addSites(HAnimSite1826)
HAnimSite1827 = x3d.HAnimSite()
HAnimSite1827.setContainerFieldOverride("sites")
HAnimSite1827.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid45.addSites(HAnimSite1827)
HAnimSite1828 = x3d.HAnimSite()
HAnimSite1828.setContainerFieldOverride("sites")
HAnimSite1828.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid45.addSites(HAnimSite1828)
HAnimSite1829 = x3d.HAnimSite()
HAnimSite1829.setContainerFieldOverride("sites")
HAnimSite1829.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid45.addSites(HAnimSite1829)
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.setContainerFieldOverride("sites")
HAnimSite1830.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid45.addSites(HAnimSite1830)
HAnimSite1831 = x3d.HAnimSite()
HAnimSite1831.setContainerFieldOverride("sites")
HAnimSite1831.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1831)
HAnimSite1832 = x3d.HAnimSite()
HAnimSite1832.setContainerFieldOverride("sites")
HAnimSite1832.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1832)
HAnimSite1833 = x3d.HAnimSite()
HAnimSite1833.setContainerFieldOverride("sites")
HAnimSite1833.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid45.addSites(HAnimSite1833)
HAnimSite1834 = x3d.HAnimSite()
HAnimSite1834.setContainerFieldOverride("sites")
HAnimSite1834.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid45.addSites(HAnimSite1834)
HAnimSite1835 = x3d.HAnimSite()
HAnimSite1835.setContainerFieldOverride("sites")
HAnimSite1835.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid45.addSites(HAnimSite1835)
HAnimSite1836 = x3d.HAnimSite()
HAnimSite1836.setContainerFieldOverride("sites")
HAnimSite1836.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid45.addSites(HAnimSite1836)
HAnimSite1837 = x3d.HAnimSite()
HAnimSite1837.setContainerFieldOverride("sites")
HAnimSite1837.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1837)
HAnimSite1838 = x3d.HAnimSite()
HAnimSite1838.setContainerFieldOverride("sites")
HAnimSite1838.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1838)
HAnimSite1839 = x3d.HAnimSite()
HAnimSite1839.setContainerFieldOverride("sites")
HAnimSite1839.setUSE("hanim_r_psis_pt")

HAnimHumanoid45.addSites(HAnimSite1839)
HAnimSite1840 = x3d.HAnimSite()
HAnimSite1840.setContainerFieldOverride("sites")
HAnimSite1840.setUSE("hanim_l_psis_pt")

HAnimHumanoid45.addSites(HAnimSite1840)
HAnimSite1841 = x3d.HAnimSite()
HAnimSite1841.setContainerFieldOverride("sites")
HAnimSite1841.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid45.addSites(HAnimSite1841)
HAnimSite1842 = x3d.HAnimSite()
HAnimSite1842.setContainerFieldOverride("sites")
HAnimSite1842.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid45.addSites(HAnimSite1842)
HAnimSite1843 = x3d.HAnimSite()
HAnimSite1843.setContainerFieldOverride("sites")
HAnimSite1843.setUSE("hanim_l_radiale_pt")

HAnimHumanoid45.addSites(HAnimSite1843)
HAnimSite1844 = x3d.HAnimSite()
HAnimSite1844.setContainerFieldOverride("sites")
HAnimSite1844.setUSE("hanim_r_radiale_pt")

HAnimHumanoid45.addSites(HAnimSite1844)
HAnimSite1845 = x3d.HAnimSite()
HAnimSite1845.setContainerFieldOverride("sites")
HAnimSite1845.setUSE("hanim_r_rib10_pt")

HAnimHumanoid45.addSites(HAnimSite1845)
HAnimSite1846 = x3d.HAnimSite()
HAnimSite1846.setContainerFieldOverride("sites")
HAnimSite1846.setUSE("hanim_l_rib10_pt")

HAnimHumanoid45.addSites(HAnimSite1846)
HAnimSite1847 = x3d.HAnimSite()
HAnimSite1847.setContainerFieldOverride("sites")
HAnimSite1847.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1847)
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.setContainerFieldOverride("sites")
HAnimSite1848.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1848)
HAnimSite1849 = x3d.HAnimSite()
HAnimSite1849.setContainerFieldOverride("sites")
HAnimSite1849.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid45.addSites(HAnimSite1849)
HAnimSite1850 = x3d.HAnimSite()
HAnimSite1850.setContainerFieldOverride("sites")
HAnimSite1850.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid45.addSites(HAnimSite1850)
HAnimSite1851 = x3d.HAnimSite()
HAnimSite1851.setContainerFieldOverride("sites")
HAnimSite1851.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid45.addSites(HAnimSite1851)
HAnimSite1852 = x3d.HAnimSite()
HAnimSite1852.setContainerFieldOverride("sites")
HAnimSite1852.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid45.addSites(HAnimSite1852)
HAnimSite1853 = x3d.HAnimSite()
HAnimSite1853.setContainerFieldOverride("sites")
HAnimSite1853.setUSE("hanim_r_thelion_pt")

HAnimHumanoid45.addSites(HAnimSite1853)
HAnimSite1854 = x3d.HAnimSite()
HAnimSite1854.setContainerFieldOverride("sites")
HAnimSite1854.setUSE("hanim_l_thelion_pt")

HAnimHumanoid45.addSites(HAnimSite1854)
HAnimSite1855 = x3d.HAnimSite()
HAnimSite1855.setContainerFieldOverride("sites")
HAnimSite1855.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1855)
HAnimSite1856 = x3d.HAnimSite()
HAnimSite1856.setContainerFieldOverride("sites")
HAnimSite1856.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid45.addSites(HAnimSite1856)
HAnimSite1857 = x3d.HAnimSite()
HAnimSite1857.setContainerFieldOverride("sites")
HAnimSite1857.setUSE("hanim_r_tragion_pt")

HAnimHumanoid45.addSites(HAnimSite1857)
HAnimSite1858 = x3d.HAnimSite()
HAnimSite1858.setContainerFieldOverride("sites")
HAnimSite1858.setUSE("hanim_l_tragion_pt")

HAnimHumanoid45.addSites(HAnimSite1858)
HAnimSite1859 = x3d.HAnimSite()
HAnimSite1859.setContainerFieldOverride("sites")
HAnimSite1859.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid45.addSites(HAnimSite1859)
HAnimSite1860 = x3d.HAnimSite()
HAnimSite1860.setContainerFieldOverride("sites")
HAnimSite1860.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid45.addSites(HAnimSite1860)
HAnimSite1861 = x3d.HAnimSite()
HAnimSite1861.setContainerFieldOverride("sites")
HAnimSite1861.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid45.addSites(HAnimSite1861)
HAnimSite1862 = x3d.HAnimSite()
HAnimSite1862.setContainerFieldOverride("sites")
HAnimSite1862.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid45.addSites(HAnimSite1862)
HAnimSite1863 = x3d.HAnimSite()
HAnimSite1863.setDEF("hanim_l_inclined_view")
HAnimSite1863.setName("l_inclined_view")
HAnimSite1863.setTranslation(x3d.doubleToFloat([1.62,1.05,2.06]))
HAnimSite1863.setRotation(x3d.doubleToFloat([-0.113,0.993,0.0347,0.671]))
TouchSensor1864 = x3d.TouchSensor()
TouchSensor1864.setDescription("HAnimSite l_inclined_view")

HAnimSite1863.addChild(TouchSensor1864)
Shape1865 = x3d.Shape()
Shape1865.setUSE("HAnimSiteShape")

HAnimSite1863.addChild(Shape1865)
Viewpoint1866 = x3d.Viewpoint()
Viewpoint1866.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1866.setDescription("left inclined")
Viewpoint1866.setPosition(x3d.doubleToFloat([0,0,0]))

HAnimSite1863.addChild(Viewpoint1866)
Anchor1867 = x3d.Anchor()
Anchor1867.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1867.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1868 = x3d.LOD()
LOD1868.setForceTransitions(True)
LOD1868.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1869 = x3d.WorldInfo()
WorldInfo1869.setInfo(["hide diamond when close"])

LOD1868.addChild(WorldInfo1869)
Shape1870 = x3d.Shape()
Shape1870.setUSE("HAnimSiteViewpointShape")

LOD1868.addChild(Shape1870)

Anchor1867.addChild(LOD1868)

HAnimSite1863.addChild(Anchor1867)

HAnimHumanoid45.addViewpoints(HAnimSite1863)
HAnimSite1871 = x3d.HAnimSite()
HAnimSite1871.setDEF("hanim_r_inclined_view")
HAnimSite1871.setName("r_inclined_view")
HAnimSite1871.setTranslation(x3d.doubleToFloat([-1.62,1.05,2.06]))
HAnimSite1871.setRotation(x3d.doubleToFloat([-0.113,-0.993,0.0347,0.671]))
TouchSensor1872 = x3d.TouchSensor()
TouchSensor1872.setDescription("HAnimSite r_inclined_view")

HAnimSite1871.addChild(TouchSensor1872)
Shape1873 = x3d.Shape()
Shape1873.setUSE("HAnimSiteShape")

HAnimSite1871.addChild(Shape1873)
Viewpoint1874 = x3d.Viewpoint()
Viewpoint1874.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1874.setDescription("right inclined")
Viewpoint1874.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1874.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1871.addChild(Viewpoint1874)
Anchor1875 = x3d.Anchor()
Anchor1875.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1875.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1876 = x3d.LOD()
LOD1876.setForceTransitions(True)
LOD1876.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1877 = x3d.WorldInfo()
WorldInfo1877.setInfo(["hide diamond when close"])

LOD1876.addChild(WorldInfo1877)
Shape1878 = x3d.Shape()
Shape1878.setUSE("HAnimSiteViewpointShape")

LOD1876.addChild(Shape1878)

Anchor1875.addChild(LOD1876)

HAnimSite1871.addChild(Anchor1875)

HAnimHumanoid45.addViewpoints(HAnimSite1871)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.setDEF("hanim_front_view")
HAnimSite1879.setName("front_view")
HAnimSite1879.setTranslation(x3d.doubleToFloat([0,0.85,2.58]))
TouchSensor1880 = x3d.TouchSensor()
TouchSensor1880.setDescription("HAnimSite front_view")

HAnimSite1879.addChild(TouchSensor1880)
Shape1881 = x3d.Shape()
Shape1881.setUSE("HAnimSiteShape")

HAnimSite1879.addChild(Shape1881)
Viewpoint1882 = x3d.Viewpoint()
Viewpoint1882.setDEF("hanim_front_viewpoint")
Viewpoint1882.setDescription("front")
Viewpoint1882.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1882.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1879.addChild(Viewpoint1882)
Anchor1883 = x3d.Anchor()
Anchor1883.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1883.setUrl(["#hanim_front_viewpoint"])
LOD1884 = x3d.LOD()
LOD1884.setForceTransitions(True)
LOD1884.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1885 = x3d.WorldInfo()
WorldInfo1885.setInfo(["hide diamond when close"])

LOD1884.addChild(WorldInfo1885)
Shape1886 = x3d.Shape()
Shape1886.setUSE("HAnimSiteViewpointShape")

LOD1884.addChild(Shape1886)

Anchor1883.addChild(LOD1884)

HAnimSite1879.addChild(Anchor1883)

HAnimHumanoid45.addViewpoints(HAnimSite1879)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.setDEF("hanim_back_view")
HAnimSite1887.setName("back_view")
HAnimSite1887.setTranslation(x3d.doubleToFloat([0,0.85,-2.58]))
HAnimSite1887.setRotation(x3d.doubleToFloat([0,1,0,3.14]))
TouchSensor1888 = x3d.TouchSensor()
TouchSensor1888.setDescription("HAnimSite back_view")

HAnimSite1887.addChild(TouchSensor1888)
Shape1889 = x3d.Shape()
Shape1889.setUSE("HAnimSiteShape")

HAnimSite1887.addChild(Shape1889)
Viewpoint1890 = x3d.Viewpoint()
Viewpoint1890.setDEF("hanim_back_viewpoint")
Viewpoint1890.setDescription("back")
Viewpoint1890.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1890.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1887.addChild(Viewpoint1890)
Anchor1891 = x3d.Anchor()
Anchor1891.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1891.setUrl(["#hanim_back_viewpoint"])
LOD1892 = x3d.LOD()
LOD1892.setForceTransitions(True)
LOD1892.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1893 = x3d.WorldInfo()
WorldInfo1893.setInfo(["hide diamond when close"])

LOD1892.addChild(WorldInfo1893)
Shape1894 = x3d.Shape()
Shape1894.setUSE("HAnimSiteViewpointShape")

LOD1892.addChild(Shape1894)

Anchor1891.addChild(LOD1892)

HAnimSite1887.addChild(Anchor1891)

HAnimHumanoid45.addViewpoints(HAnimSite1887)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setDEF("hanim_l_side_view")
HAnimSite1895.setName("l_side_view")
HAnimSite1895.setTranslation(x3d.doubleToFloat([2.6,0.854,0]))
HAnimSite1895.setRotation(x3d.doubleToFloat([0,1,0,1.5708]))
TouchSensor1896 = x3d.TouchSensor()
TouchSensor1896.setDescription("HAnimSite l_side_view")

HAnimSite1895.addChild(TouchSensor1896)
Shape1897 = x3d.Shape()
Shape1897.setUSE("HAnimSiteShape")

HAnimSite1895.addChild(Shape1897)
Viewpoint1898 = x3d.Viewpoint()
Viewpoint1898.setDEF("hanim_l_side_viewpoint")
Viewpoint1898.setDescription("left side")
Viewpoint1898.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1898.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1895.addChild(Viewpoint1898)
Anchor1899 = x3d.Anchor()
Anchor1899.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1899.setUrl(["#hanim_l_side_viewpoint"])
LOD1900 = x3d.LOD()
LOD1900.setForceTransitions(True)
LOD1900.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1901 = x3d.WorldInfo()
WorldInfo1901.setInfo(["hide diamond when close"])

LOD1900.addChild(WorldInfo1901)
Shape1902 = x3d.Shape()
Shape1902.setUSE("HAnimSiteViewpointShape")

LOD1900.addChild(Shape1902)

Anchor1899.addChild(LOD1900)

HAnimSite1895.addChild(Anchor1899)

HAnimHumanoid45.addViewpoints(HAnimSite1895)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setDEF("hanim_Top_view")
HAnimSite1903.setName("Top_view")
HAnimSite1903.setTranslation(x3d.doubleToFloat([0,3.5,0]))
HAnimSite1903.setRotation(x3d.doubleToFloat([1,0,0,-1.57]))
TouchSensor1904 = x3d.TouchSensor()
TouchSensor1904.setDescription("HAnimSite Top_view")

HAnimSite1903.addChild(TouchSensor1904)
Shape1905 = x3d.Shape()
Shape1905.setUSE("HAnimSiteShape")

HAnimSite1903.addChild(Shape1905)
Viewpoint1906 = x3d.Viewpoint()
Viewpoint1906.setDEF("hanim_Top_viewpoint")
Viewpoint1906.setDescription("Top")
Viewpoint1906.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1906.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1903.addChild(Viewpoint1906)
Anchor1907 = x3d.Anchor()
Anchor1907.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1907.setUrl(["#hanim_Top_viewpoint"])
LOD1908 = x3d.LOD()
LOD1908.setForceTransitions(True)
LOD1908.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1909 = x3d.WorldInfo()
WorldInfo1909.setInfo(["hide diamond when close"])

LOD1908.addChild(WorldInfo1909)
Shape1910 = x3d.Shape()
Shape1910.setUSE("HAnimSiteViewpointShape")

LOD1908.addChild(Shape1910)

Anchor1907.addChild(LOD1908)

HAnimSite1903.addChild(Anchor1907)

HAnimHumanoid45.addViewpoints(HAnimSite1903)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setDEF("hanim_front_close_view")
HAnimSite1911.setName("front_close_view")
HAnimSite1911.setTranslation(x3d.doubleToFloat([0,0.854,1.575]))
TouchSensor1912 = x3d.TouchSensor()
TouchSensor1912.setDescription("HAnimSite front_close_view")

HAnimSite1911.addChild(TouchSensor1912)
Shape1913 = x3d.Shape()
Shape1913.setUSE("HAnimSiteShape")

HAnimSite1911.addChild(Shape1913)
Viewpoint1914 = x3d.Viewpoint()
Viewpoint1914.setDEF("hanim_front_close_viewpoint")
Viewpoint1914.setDescription("front close")
Viewpoint1914.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1914.setCenterOfRotation(x3d.doubleToFloat([0,0,1.575]))

HAnimSite1911.addChild(Viewpoint1914)
Anchor1915 = x3d.Anchor()
Anchor1915.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1915.setUrl(["#hanim_front_close_viewpoint"])
LOD1916 = x3d.LOD()
LOD1916.setForceTransitions(True)
LOD1916.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1917 = x3d.WorldInfo()
WorldInfo1917.setInfo(["hide diamond when close"])

LOD1916.addChild(WorldInfo1917)
Shape1918 = x3d.Shape()
Shape1918.setUSE("HAnimSiteViewpointShape")

LOD1916.addChild(Shape1918)

Anchor1915.addChild(LOD1916)

HAnimSite1911.addChild(Anchor1915)

HAnimHumanoid45.addViewpoints(HAnimSite1911)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setDEF("hanim_side_close_view")
HAnimSite1919.setName("side_close_view")
HAnimSite1919.setTranslation(x3d.doubleToFloat([1.56,0.854,0]))
HAnimSite1919.setRotation(x3d.doubleToFloat([0,1,0,1.5708]))
TouchSensor1920 = x3d.TouchSensor()
TouchSensor1920.setDescription("HAnimSite side_close_view")

HAnimSite1919.addChild(TouchSensor1920)
Shape1921 = x3d.Shape()
Shape1921.setUSE("HAnimSiteShape")

HAnimSite1919.addChild(Shape1921)
Viewpoint1922 = x3d.Viewpoint()
Viewpoint1922.setDEF("hanim_side_close_viewpoint")
Viewpoint1922.setDescription("side close")
Viewpoint1922.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1922.setCenterOfRotation(x3d.doubleToFloat([1.6,0,0]))

HAnimSite1919.addChild(Viewpoint1922)
Anchor1923 = x3d.Anchor()
Anchor1923.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1923.setUrl(["#hanim_side_close_viewpoint"])
LOD1924 = x3d.LOD()
LOD1924.setForceTransitions(True)
LOD1924.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1925 = x3d.WorldInfo()
WorldInfo1925.setInfo(["hide diamond when close"])

LOD1924.addChild(WorldInfo1925)
Shape1926 = x3d.Shape()
Shape1926.setUSE("HAnimSiteViewpointShape")

LOD1924.addChild(Shape1926)

Anchor1923.addChild(LOD1924)

HAnimSite1919.addChild(Anchor1923)

HAnimHumanoid45.addViewpoints(HAnimSite1919)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setDEF("hanim_head_front_close_view")
HAnimSite1927.setName("head_front_close_view")
HAnimSite1927.setTranslation(x3d.doubleToFloat([0,1.5,1]))
TouchSensor1928 = x3d.TouchSensor()
TouchSensor1928.setDescription("HAnimSite head_front_close_view")

HAnimSite1927.addChild(TouchSensor1928)
Shape1929 = x3d.Shape()
Shape1929.setUSE("HAnimSiteShape")

HAnimSite1927.addChild(Shape1929)
Viewpoint1930 = x3d.Viewpoint()
Viewpoint1930.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1930.setDescription("head front close")
Viewpoint1930.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1930.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1927.addChild(Viewpoint1930)
Anchor1931 = x3d.Anchor()
Anchor1931.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1931.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1932 = x3d.LOD()
LOD1932.setForceTransitions(True)
LOD1932.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1933 = x3d.WorldInfo()
WorldInfo1933.setInfo(["hide diamond when close"])

LOD1932.addChild(WorldInfo1933)
Shape1934 = x3d.Shape()
Shape1934.setUSE("HAnimSiteViewpointShape")

LOD1932.addChild(Shape1934)

Anchor1931.addChild(LOD1932)

HAnimSite1927.addChild(Anchor1931)

HAnimHumanoid45.addViewpoints(HAnimSite1927)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setDEF("hanim_chest_front_close_view")
HAnimSite1935.setName("chest_front_close_view")
HAnimSite1935.setTranslation(x3d.doubleToFloat([0,1.2,1]))
TouchSensor1936 = x3d.TouchSensor()
TouchSensor1936.setDescription("HAnimSite chest_front_close_view")

HAnimSite1935.addChild(TouchSensor1936)
Shape1937 = x3d.Shape()
Shape1937.setUSE("HAnimSiteShape")

HAnimSite1935.addChild(Shape1937)
Viewpoint1938 = x3d.Viewpoint()
Viewpoint1938.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1938.setDescription("chest front close")
Viewpoint1938.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1938.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1935.addChild(Viewpoint1938)
Anchor1939 = x3d.Anchor()
Anchor1939.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1939.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1940 = x3d.LOD()
LOD1940.setForceTransitions(True)
LOD1940.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1941 = x3d.WorldInfo()
WorldInfo1941.setInfo(["hide diamond when close"])

LOD1940.addChild(WorldInfo1941)
Shape1942 = x3d.Shape()
Shape1942.setUSE("HAnimSiteViewpointShape")

LOD1940.addChild(Shape1942)

Anchor1939.addChild(LOD1940)

HAnimSite1935.addChild(Anchor1939)

HAnimHumanoid45.addViewpoints(HAnimSite1935)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setDEF("hanim_pelvis_front_close_view")
HAnimSite1943.setName("pelvis_front_close_view")
HAnimSite1943.setTranslation(x3d.doubleToFloat([0,0.8,1]))
TouchSensor1944 = x3d.TouchSensor()
TouchSensor1944.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1943.addChild(TouchSensor1944)
Shape1945 = x3d.Shape()
Shape1945.setUSE("HAnimSiteShape")

HAnimSite1943.addChild(Shape1945)
Viewpoint1946 = x3d.Viewpoint()
Viewpoint1946.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1946.setDescription("pelvis front close")
Viewpoint1946.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1946.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1943.addChild(Viewpoint1946)
Anchor1947 = x3d.Anchor()
Anchor1947.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1947.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1948 = x3d.LOD()
LOD1948.setForceTransitions(True)
LOD1948.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1949 = x3d.WorldInfo()
WorldInfo1949.setInfo(["hide diamond when close"])

LOD1948.addChild(WorldInfo1949)
Shape1950 = x3d.Shape()
Shape1950.setUSE("HAnimSiteViewpointShape")

LOD1948.addChild(Shape1950)

Anchor1947.addChild(LOD1948)

HAnimSite1943.addChild(Anchor1947)

HAnimHumanoid45.addViewpoints(HAnimSite1943)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setDEF("hanim_knees_front_close_view")
HAnimSite1951.setName("knees_front_close_view")
HAnimSite1951.setTranslation(x3d.doubleToFloat([0,0.4,1]))
TouchSensor1952 = x3d.TouchSensor()
TouchSensor1952.setDescription("HAnimSite knees_front_close_view")

HAnimSite1951.addChild(TouchSensor1952)
Shape1953 = x3d.Shape()
Shape1953.setUSE("HAnimSiteShape")

HAnimSite1951.addChild(Shape1953)
Viewpoint1954 = x3d.Viewpoint()
Viewpoint1954.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1954.setDescription("knees front close")
Viewpoint1954.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1954.setCenterOfRotation(x3d.doubleToFloat([0,0.4,0]))

HAnimSite1951.addChild(Viewpoint1954)
Anchor1955 = x3d.Anchor()
Anchor1955.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1955.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1956 = x3d.LOD()
LOD1956.setForceTransitions(True)
LOD1956.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1957 = x3d.WorldInfo()
WorldInfo1957.setInfo(["hide diamond when close"])

LOD1956.addChild(WorldInfo1957)
Shape1958 = x3d.Shape()
Shape1958.setUSE("HAnimSiteViewpointShape")

LOD1956.addChild(Shape1958)

Anchor1955.addChild(LOD1956)

HAnimSite1951.addChild(Anchor1955)

HAnimHumanoid45.addViewpoints(HAnimSite1951)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setDEF("hanim_feet_front_close_view")
HAnimSite1959.setName("feet_front_close_view")
HAnimSite1959.setTranslation(x3d.doubleToFloat([0,0,1]))
TouchSensor1960 = x3d.TouchSensor()
TouchSensor1960.setDescription("HAnimSite feet_front_close_view")

HAnimSite1959.addChild(TouchSensor1960)
Shape1961 = x3d.Shape()
Shape1961.setUSE("HAnimSiteShape")

HAnimSite1959.addChild(Shape1961)
Viewpoint1962 = x3d.Viewpoint()
Viewpoint1962.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1962.setDescription("feet front close")
Viewpoint1962.setPosition(x3d.doubleToFloat([0,0,0]))

HAnimSite1959.addChild(Viewpoint1962)
Anchor1963 = x3d.Anchor()
Anchor1963.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1963.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1964 = x3d.LOD()
LOD1964.setForceTransitions(True)
LOD1964.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1965 = x3d.WorldInfo()
WorldInfo1965.setInfo(["hide diamond when close"])

LOD1964.addChild(WorldInfo1965)
Shape1966 = x3d.Shape()
Shape1966.setUSE("HAnimSiteViewpointShape")

LOD1964.addChild(Shape1966)

Anchor1963.addChild(LOD1964)

HAnimSite1959.addChild(Anchor1963)

HAnimHumanoid45.addViewpoints(HAnimSite1959)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setDEF("hanim_eye_level_view")
HAnimSite1967.setName("eye_level_view")
HAnimSite1967.setTranslation(x3d.doubleToFloat([0,1.6332,0.0502]))
TouchSensor1968 = x3d.TouchSensor()
TouchSensor1968.setDescription("HAnimSite eye_level_view")

HAnimSite1967.addChild(TouchSensor1968)
Shape1969 = x3d.Shape()
Shape1969.setUSE("HAnimSiteShape")

HAnimSite1967.addChild(Shape1969)
Viewpoint1970 = x3d.Viewpoint()
Viewpoint1970.setDEF("hanim_eye_level_viewpoint")
Viewpoint1970.setDescription("eye level looking forward")
Viewpoint1970.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1970.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite1967.addChild(Viewpoint1970)
Anchor1971 = x3d.Anchor()
Anchor1971.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1971.setUrl(["#hanim_eye_level_viewpoint"])
LOD1972 = x3d.LOD()
LOD1972.setForceTransitions(True)
LOD1972.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1973 = x3d.WorldInfo()
WorldInfo1973.setInfo(["hide diamond when close"])

LOD1972.addChild(WorldInfo1973)
Shape1974 = x3d.Shape()
Shape1974.setUSE("HAnimSiteViewpointShape")

LOD1972.addChild(Shape1974)

Anchor1971.addChild(LOD1972)

HAnimSite1967.addChild(Anchor1971)

HAnimHumanoid45.addViewpoints(HAnimSite1967)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setContainerFieldOverride("sites")
HAnimSite1975.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid45.addSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setContainerFieldOverride("sites")
HAnimSite1976.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid45.addSites(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.setContainerFieldOverride("sites")
HAnimSite1977.setUSE("hanim_l_hand_front_view")

HAnimHumanoid45.addSites(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.setContainerFieldOverride("sites")
HAnimSite1978.setUSE("hanim_r_hand_front_view")

HAnimHumanoid45.addSites(HAnimSite1978)

Scene31.addChild(HAnimHumanoid45)

X3D0.setScene(Scene31)
X3D0.toFileX3D("../data/HAnim1SpecificationLOA3Illustrated.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnim1SpecificationLOA3Illustrated.new.graalpy.json")

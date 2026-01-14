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
meta3.setContent("HAnim2SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("reference")
meta5.setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("reference")
meta6.setContent("HAnim2SpecificationLOA3Invisible.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("HAnim2SpecificationLOA3Animation.x3d")

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
meta16.setContent("18 February 2021")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("modified")
meta17.setContent("Mon, 15 Sep 2025 05:20:09 GMT")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("creator")
meta18.setContent("Don Brutzman")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Image")
meta19.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("TODO")
meta22.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("TODO")
meta23.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("translator")
meta24.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("generator")
meta25.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("generator")
meta26.setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta26)

X3D0.setHead(head1)
Scene27 = x3d.Scene()
Background28 = x3d.Background()
Background28.setSkyColor(x3d.doubleToFloat([0.3,0.3,0.3]))

Scene27.addChild(Background28)
NavigationInfo29 = x3d.NavigationInfo()

Scene27.addChild(NavigationInfo29)
Group30 = x3d.Group()
Group30.setDEF("Original_WorldInfo")
WorldInfo31 = x3d.WorldInfo()
WorldInfo31.setTitle("HANIM 200x Default Joint Centers, LOA3")
WorldInfo31.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group30.addChild(WorldInfo31)

Scene27.addChild(Group30)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.setDescription("Humanoid LOA 3 Front")
Viewpoint32.setPosition(x3d.doubleToFloat([0,0.4,4]))
Viewpoint32.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint32)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.setDescription("Humanoid LOA 3 Front Close")
Viewpoint33.setPosition(x3d.doubleToFloat([0,0.8,2]))
Viewpoint33.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint33)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint34.setPosition(x3d.doubleToFloat([0,1.2,1]))
Viewpoint34.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDescription("Humanoid LOA 3 Front Face")
Viewpoint35.setPosition(x3d.doubleToFloat([0,1.63,1]))
Viewpoint35.setCenterOfRotation(x3d.doubleToFloat([0,1.5,0.0016]))

Scene27.addChild(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.setDescription("Humanoid LOA 3 Right Side")
Viewpoint36.setPosition(x3d.doubleToFloat([2.6,0.8,0]))
Viewpoint36.setOrientation(x3d.doubleToFloat([0,1,0,1.5708]))
Viewpoint36.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint37.setPosition(x3d.doubleToFloat([1,0.8,0.5]))
Viewpoint37.setOrientation(x3d.doubleToFloat([0,1,0,1.2]))
Viewpoint37.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint38.setPosition(x3d.doubleToFloat([-1,0.8,0.5]))
Viewpoint38.setOrientation(x3d.doubleToFloat([0,1,0,-1.2]))
Viewpoint38.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setDescription("Humanoid LOA 3 Left Side")
Viewpoint39.setPosition(x3d.doubleToFloat([-2.6,0.8,0]))
Viewpoint39.setOrientation(x3d.doubleToFloat([0,1,0,-1.5708]))
Viewpoint39.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setDescription("Humanoid LOA 3 Top")
Viewpoint40.setPosition(x3d.doubleToFloat([0,3.5,0]))
Viewpoint40.setOrientation(x3d.doubleToFloat([1,0,0,-1.5708]))
Viewpoint40.setCenterOfRotation(x3d.doubleToFloat([0,0.9149,0.0016]))

Scene27.addChild(Viewpoint40)
HAnimHumanoid41 = x3d.HAnimHumanoid()
HAnimHumanoid41.setDEF("hanim_humanoid")
HAnimHumanoid41.setName("humanoid")
HAnimHumanoid41.setLoa(3)
MetadataSet42 = x3d.MetadataSet()
MetadataSet42.setName("HAnimHumanoid.info")
MetadataSet42.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString43 = x3d.MetadataString()
MetadataString43.setName("authorName")

MetadataSet42.setMetadata(MetadataString43)
MetadataString44 = x3d.MetadataString()
MetadataString44.setName("authorEmail")

MetadataSet42.setMetadata(MetadataString44)
MetadataString45 = x3d.MetadataString()
MetadataString45.setName("copyright")

MetadataSet42.setMetadata(MetadataString45)
MetadataString46 = x3d.MetadataString()
MetadataString46.setName("creationDate")

MetadataSet42.setMetadata(MetadataString46)
MetadataFloat47 = x3d.MetadataFloat()
MetadataFloat47.setName("height")
MetadataFloat47.setValue(x3d.doubleToFloat([1.7504]))

MetadataSet42.addValue(MetadataFloat47)
MetadataString48 = x3d.MetadataString()
MetadataString48.setName("humanoidVersion")

MetadataSet42.setMetadata(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.setName("usageRestrictions")

MetadataSet42.setMetadata(MetadataString49)

HAnimHumanoid41.setMetadata(MetadataSet42)
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.setDEF("hanim_humanoid_root")
HAnimJoint50.setName("humanoid_root")
HAnimJoint50.setCenter(x3d.doubleToFloat([0,0.824,0.0277]))
HAnimJoint50.setContainerFieldOverride("skeleton")
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.setDEF("hanim_sacrum")
HAnimSegment51.setName("sacrum")
TouchSensor52 = x3d.TouchSensor()
TouchSensor52.setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum")

HAnimSegment51.addChild(TouchSensor52)
Transform53 = x3d.Transform()
Transform53.setTranslation(x3d.doubleToFloat([0,0.824,0.0277]))
Shape54 = x3d.Shape()
Shape54.setDEF("HAnimJointShape")
Appearance55 = x3d.Appearance()
Appearance55.setDEF("HAnimJointAppearance")
Material56 = x3d.Material()
Material56.setDiffuseColor(x3d.doubleToFloat([1,0.5,0]))
Material56.setTransparency(0.5)

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
Sphere57 = x3d.Sphere()
Sphere57.setRadius(0.006)

Shape54.setGeometry(Sphere57)

Transform53.addChild(Shape54)

HAnimSegment51.addChild(Transform53)
Shape58 = x3d.Shape()
LineSet59 = x3d.LineSet()
LineSet59.setVertexCount([2])
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA60.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1]))

LineSet59.setColor(ColorRGBA60)
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0,0.9149,0.0016]))

LineSet59.setCoord(Coordinate61)

Shape58.setGeometry(LineSet59)

HAnimSegment51.addChild(Shape58)
Shape62 = x3d.Shape()
LineSet63 = x3d.LineSet()
LineSet63.setVertexCount([2])
ColorRGBA64 = x3d.ColorRGBA()
ColorRGBA64.setUSE("HAnimSegmentLineColorRGBA")

LineSet63.setColor(ColorRGBA64)
Coordinate65 = x3d.Coordinate()
Coordinate65.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0.0028,1.0568,-0.0776]))

LineSet63.setCoord(Coordinate65)

Shape62.setGeometry(LineSet63)

HAnimSegment51.addChild(Shape62)

HAnimJoint50.addChild(HAnimSegment51)
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.setDEF("hanim_sacroiliac")
HAnimJoint66.setName("sacroiliac")
HAnimJoint66.setCenter(x3d.doubleToFloat([0,0.9149,0.0016]))
HAnimSegment67 = x3d.HAnimSegment()
HAnimSegment67.setDEF("hanim_pelvis")
HAnimSegment67.setName("pelvis")
TouchSensor68 = x3d.TouchSensor()
TouchSensor68.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment67.addChild(TouchSensor68)
Transform69 = x3d.Transform()
Transform69.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Shape70 = x3d.Shape()
Shape70.setUSE("HAnimJointShape")

Transform69.addChild(Shape70)

HAnimSegment67.addChild(Transform69)
Shape71 = x3d.Shape()
LineSet72 = x3d.LineSet()
LineSet72.setVertexCount([2])
ColorRGBA73 = x3d.ColorRGBA()
ColorRGBA73.setUSE("HAnimSegmentLineColorRGBA")

LineSet72.setColor(ColorRGBA73)
Coordinate74 = x3d.Coordinate()
Coordinate74.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0961,0.9124,-0.0001]))

LineSet72.setCoord(Coordinate74)

Shape71.setGeometry(LineSet72)

HAnimSegment67.addChild(Shape71)
Shape75 = x3d.Shape()
LineSet76 = x3d.LineSet()
LineSet76.setVertexCount([2])
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.setUSE("HAnimSegmentLineColorRGBA")

LineSet76.setColor(ColorRGBA77)
Coordinate78 = x3d.Coordinate()
Coordinate78.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0961,0.9124,-0.0001]))

LineSet76.setCoord(Coordinate78)

Shape75.setGeometry(LineSet76)

HAnimSegment67.addChild(Shape75)
Shape79 = x3d.Shape()
LineSet80 = x3d.LineSet()
LineSet80.setVertexCount([2])
ColorRGBA81 = x3d.ColorRGBA()
ColorRGBA81.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA81.setColor(x3d.doubleToFloat([1,0,0,1,1,0,0,0.1]))

LineSet80.setColor(ColorRGBA81)
Coordinate82 = x3d.Coordinate()
Coordinate82.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.1525,1.0628,0.0035]))

LineSet80.setCoord(Coordinate82)

Shape79.setGeometry(LineSet80)

HAnimSegment67.addChild(Shape79)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.setVertexCount([2])
ColorRGBA85 = x3d.ColorRGBA()
ColorRGBA85.setUSE("HAnimSiteLineColorRGBA")

LineSet84.setColor(ColorRGBA85)
Coordinate86 = x3d.Coordinate()
Coordinate86.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.1689,0.8419,0.0352]))

LineSet84.setCoord(Coordinate86)

Shape83.setGeometry(LineSet84)

HAnimSegment67.addChild(Shape83)
Shape87 = x3d.Shape()
LineSet88 = x3d.LineSet()
LineSet88.setVertexCount([2])
ColorRGBA89 = x3d.ColorRGBA()
ColorRGBA89.setUSE("HAnimSiteLineColorRGBA")

LineSet88.setColor(ColorRGBA89)
Coordinate90 = x3d.Coordinate()
Coordinate90.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.1612,1.0537,0.0008]))

LineSet88.setCoord(Coordinate90)

Shape87.setGeometry(LineSet88)

HAnimSegment67.addChild(Shape87)
Shape91 = x3d.Shape()
LineSet92 = x3d.LineSet()
LineSet92.setVertexCount([2])
ColorRGBA93 = x3d.ColorRGBA()
ColorRGBA93.setUSE("HAnimSiteLineColorRGBA")

LineSet92.setColor(ColorRGBA93)
Coordinate94 = x3d.Coordinate()
Coordinate94.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.1677,0.8336,0.0303]))

LineSet92.setCoord(Coordinate94)

Shape91.setGeometry(LineSet92)

HAnimSegment67.addChild(Shape91)
Shape95 = x3d.Shape()
LineSet96 = x3d.LineSet()
LineSet96.setVertexCount([2])
ColorRGBA97 = x3d.ColorRGBA()
ColorRGBA97.setUSE("HAnimSiteLineColorRGBA")

LineSet96.setColor(ColorRGBA97)
Coordinate98 = x3d.Coordinate()
Coordinate98.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0887,1.0021,0.1112]))

LineSet96.setCoord(Coordinate98)

Shape95.setGeometry(LineSet96)

HAnimSegment67.addChild(Shape95)
Shape99 = x3d.Shape()
LineSet100 = x3d.LineSet()
LineSet100.setVertexCount([2])
ColorRGBA101 = x3d.ColorRGBA()
ColorRGBA101.setUSE("HAnimSiteLineColorRGBA")

LineSet100.setColor(ColorRGBA101)
Coordinate102 = x3d.Coordinate()
Coordinate102.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0925,0.9983,0.1052]))

LineSet100.setCoord(Coordinate102)

Shape99.setGeometry(LineSet100)

HAnimSegment67.addChild(Shape99)
Shape103 = x3d.Shape()
LineSet104 = x3d.LineSet()
LineSet104.setVertexCount([2])
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.setUSE("HAnimSiteLineColorRGBA")

LineSet104.setColor(ColorRGBA105)
Coordinate106 = x3d.Coordinate()
Coordinate106.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.0716,1.019,-0.1138]))

LineSet104.setCoord(Coordinate106)

Shape103.setGeometry(LineSet104)

HAnimSegment67.addChild(Shape103)
Shape107 = x3d.Shape()
LineSet108 = x3d.LineSet()
LineSet108.setVertexCount([2])
ColorRGBA109 = x3d.ColorRGBA()
ColorRGBA109.setUSE("HAnimSiteLineColorRGBA")

LineSet108.setColor(ColorRGBA109)
Coordinate110 = x3d.Coordinate()
Coordinate110.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0774,1.019,-0.1151]))

LineSet108.setCoord(Coordinate110)

Shape107.setGeometry(LineSet108)

HAnimSegment67.addChild(Shape107)
Shape111 = x3d.Shape()
LineSet112 = x3d.LineSet()
LineSet112.setVertexCount([2])
ColorRGBA113 = x3d.ColorRGBA()
ColorRGBA113.setUSE("HAnimSiteLineColorRGBA")

LineSet112.setColor(ColorRGBA113)
Coordinate114 = x3d.Coordinate()
Coordinate114.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0034,0.8266,0.0257]))

LineSet112.setCoord(Coordinate114)

Shape111.setGeometry(LineSet112)

HAnimSegment67.addChild(Shape111)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setDEF("hanim_r_iliocristale_pt")
HAnimSite115.setName("r_iliocristale_pt")
HAnimSite115.setTranslation(x3d.doubleToFloat([-0.1525,1.0628,0.0035]))
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.setDescription("HAnimSite r_iliocristale_pt")

HAnimSite115.addChild(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.setDEF("HAnimSiteShape")
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance118.setMaterial(Material119)

Shape117.setAppearance(Appearance118)
IndexedFaceSet120 = x3d.IndexedFaceSet()
IndexedFaceSet120.setDEF("DiamondIFS")
IndexedFaceSet120.setSolid(False)
IndexedFaceSet120.setCreaseAngle(0.5)
IndexedFaceSet120.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate121 = x3d.Coordinate()
Coordinate121.setPoint(x3d.doubleToFloat([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]))

IndexedFaceSet120.setCoord(Coordinate121)

Shape117.setGeometry(IndexedFaceSet120)

HAnimSite115.addChild(Shape117)

HAnimSegment67.addChild(HAnimSite115)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setDEF("hanim_r_trochanterion_pt")
HAnimSite122.setName("r_trochanterion_pt")
HAnimSite122.setTranslation(x3d.doubleToFloat([-0.1689,0.8419,0.0352]))
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDescription("HAnimSite r_trochanterion_pt")

HAnimSite122.addChild(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChild(Shape124)

HAnimSegment67.addChild(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setDEF("hanim_l_iliocristale_pt")
HAnimSite125.setName("l_iliocristale_pt")
HAnimSite125.setTranslation(x3d.doubleToFloat([0.1612,1.0537,0.0008]))
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite l_iliocristale_pt")

HAnimSite125.addChild(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChild(Shape127)

HAnimSegment67.addChild(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setDEF("hanim_l_trochanterion_pt")
HAnimSite128.setName("l_trochanterion_pt")
HAnimSite128.setTranslation(x3d.doubleToFloat([0.1677,0.8336,0.0303]))
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.setDescription("HAnimSite l_trochanterion_pt")

HAnimSite128.addChild(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimSiteShape")

HAnimSite128.addChild(Shape130)

HAnimSegment67.addChild(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setDEF("hanim_r_asis_pt")
HAnimSite131.setName("r_asis_pt")
HAnimSite131.setTranslation(x3d.doubleToFloat([-0.0887,1.0021,0.1112]))
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.setDescription("HAnimSite r_asis_pt")

HAnimSite131.addChild(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChild(Shape133)

HAnimSegment67.addChild(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.setDEF("hanim_l_asis_pt")
HAnimSite134.setName("l_asis_pt")
HAnimSite134.setTranslation(x3d.doubleToFloat([0.0925,0.9983,0.1052]))
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.setDescription("HAnimSite l_asis_pt")

HAnimSite134.addChild(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.setUSE("HAnimSiteShape")

HAnimSite134.addChild(Shape136)

HAnimSegment67.addChild(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setDEF("hanim_r_psis_pt")
HAnimSite137.setName("r_psis_pt")
HAnimSite137.setTranslation(x3d.doubleToFloat([-0.0716,1.019,-0.1138]))
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.setDescription("HAnimSite r_psis_pt")

HAnimSite137.addChild(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimSiteShape")

HAnimSite137.addChild(Shape139)

HAnimSegment67.addChild(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.setDEF("hanim_l_psis_pt")
HAnimSite140.setName("l_psis_pt")
HAnimSite140.setTranslation(x3d.doubleToFloat([0.0774,1.019,-0.1151]))
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.setDescription("HAnimSite l_psis_pt")

HAnimSite140.addChild(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.setUSE("HAnimSiteShape")

HAnimSite140.addChild(Shape142)

HAnimSegment67.addChild(HAnimSite140)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setDEF("hanim_crotch_pt")
HAnimSite143.setName("crotch_pt")
HAnimSite143.setTranslation(x3d.doubleToFloat([0.0034,0.8266,0.0257]))
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.setDescription("HAnimSite crotch_pt")

HAnimSite143.addChild(TouchSensor144)
Shape145 = x3d.Shape()
Shape145.setUSE("HAnimSiteShape")

HAnimSite143.addChild(Shape145)

HAnimSegment67.addChild(HAnimSite143)

HAnimJoint66.addChild(HAnimSegment67)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.setDEF("hanim_l_hip")
HAnimJoint146.setName("l_hip")
HAnimJoint146.setCenter(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.setDEF("hanim_l_thigh")
HAnimSegment147.setName("l_thigh")
TouchSensor148 = x3d.TouchSensor()
TouchSensor148.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment147.addChild(TouchSensor148)
Transform149 = x3d.Transform()
Transform149.setTranslation(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
Shape150 = x3d.Shape()
Shape150.setUSE("HAnimJointShape")

Transform149.addChild(Shape150)

HAnimSegment147.addChild(Transform149)
Shape151 = x3d.Shape()
LineSet152 = x3d.LineSet()
LineSet152.setVertexCount([2])
ColorRGBA153 = x3d.ColorRGBA()
ColorRGBA153.setUSE("HAnimSegmentLineColorRGBA")

LineSet152.setColor(ColorRGBA153)
Coordinate154 = x3d.Coordinate()
Coordinate154.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]))

LineSet152.setCoord(Coordinate154)

Shape151.setGeometry(LineSet152)

HAnimSegment147.addChild(Shape151)
Shape155 = x3d.Shape()
LineSet156 = x3d.LineSet()
LineSet156.setVertexCount([2])
ColorRGBA157 = x3d.ColorRGBA()
ColorRGBA157.setUSE("HAnimSiteLineColorRGBA")

LineSet156.setColor(ColorRGBA157)
Coordinate158 = x3d.Coordinate()
Coordinate158.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]))

LineSet156.setCoord(Coordinate158)

Shape155.setGeometry(LineSet156)

HAnimSegment147.addChild(Shape155)
Shape159 = x3d.Shape()
LineSet160 = x3d.LineSet()
LineSet160.setVertexCount([2])
ColorRGBA161 = x3d.ColorRGBA()
ColorRGBA161.setUSE("HAnimSiteLineColorRGBA")

LineSet160.setColor(ColorRGBA161)
Coordinate162 = x3d.Coordinate()
Coordinate162.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]))

LineSet160.setCoord(Coordinate162)

Shape159.setGeometry(LineSet160)

HAnimSegment147.addChild(Shape159)
Shape163 = x3d.Shape()
LineSet164 = x3d.LineSet()
LineSet164.setVertexCount([2])
ColorRGBA165 = x3d.ColorRGBA()
ColorRGBA165.setUSE("HAnimSiteLineColorRGBA")

LineSet164.setColor(ColorRGBA165)
Coordinate166 = x3d.Coordinate()
Coordinate166.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]))

LineSet164.setCoord(Coordinate166)

Shape163.setGeometry(LineSet164)

HAnimSegment147.addChild(Shape163)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setDEF("hanim_l_knee_crease_pt")
HAnimSite167.setName("l_knee_crease_pt")
HAnimSite167.setTranslation(x3d.doubleToFloat([0.0993,0.4881,-0.0309]))
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.setDescription("HAnimSite l_knee_crease_pt")

HAnimSite167.addChild(TouchSensor168)
Shape169 = x3d.Shape()
Shape169.setUSE("HAnimSiteShape")

HAnimSite167.addChild(Shape169)

HAnimSegment147.addChild(HAnimSite167)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setDEF("hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite170.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite170.setTranslation(x3d.doubleToFloat([0.1598,0.4967,0.0297]))
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.setDescription("HAnimSite l_femoral_lateral_epicn_pt")

HAnimSite170.addChild(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.setUSE("HAnimSiteShape")

HAnimSite170.addChild(Shape172)

HAnimSegment147.addChild(HAnimSite170)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setDEF("hanim_l_femoral_medial_epicondyle_pt")
HAnimSite173.setName("l_femoral_medial_epicondyle_pt")
HAnimSite173.setTranslation(x3d.doubleToFloat([0.0398,0.4946,0.0303]))
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimSite l_femoral_medial_epicn_pt")

HAnimSite173.addChild(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimSiteShape")

HAnimSite173.addChild(Shape175)

HAnimSegment147.addChild(HAnimSite173)

HAnimJoint146.addChild(HAnimSegment147)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setDEF("hanim_l_knee")
HAnimJoint176.setName("l_knee")
HAnimJoint176.setCenter(x3d.doubleToFloat([0.104,0.4867,0.0308]))
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setDEF("hanim_l_calf")
HAnimSegment177.setName("l_calf")
TouchSensor178 = x3d.TouchSensor()
TouchSensor178.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment177.addChild(TouchSensor178)
Transform179 = x3d.Transform()
Transform179.setTranslation(x3d.doubleToFloat([0.104,0.4867,0.0308]))
Shape180 = x3d.Shape()
Shape180.setUSE("HAnimJointShape")

Transform179.addChild(Shape180)

HAnimSegment177.addChild(Transform179)
Shape181 = x3d.Shape()
LineSet182 = x3d.LineSet()
LineSet182.setVertexCount([2])
ColorRGBA183 = x3d.ColorRGBA()
ColorRGBA183.setUSE("HAnimSegmentLineColorRGBA")

LineSet182.setColor(ColorRGBA183)
Coordinate184 = x3d.Coordinate()
Coordinate184.setPoint(x3d.doubleToFloat([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]))

LineSet182.setCoord(Coordinate184)

Shape181.setGeometry(LineSet182)

HAnimSegment177.addChild(Shape181)

HAnimJoint176.addChild(HAnimSegment177)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setDEF("hanim_l_talocrural")
HAnimJoint185.setName("l_talocrural")
HAnimJoint185.setCenter(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.setDEF("hanim_l_talus")
HAnimSegment186.setName("l_talus")
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus")

HAnimSegment186.addChild(TouchSensor187)
Transform188 = x3d.Transform()
Transform188.setTranslation(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
Shape189 = x3d.Shape()
Shape189.setUSE("HAnimJointShape")

Transform188.addChild(Shape189)

HAnimSegment186.addChild(Transform188)
Shape190 = x3d.Shape()
LineSet191 = x3d.LineSet()
LineSet191.setVertexCount([2])
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.setUSE("HAnimSegmentLineColorRGBA")

LineSet191.setColor(ColorRGBA192)
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]))

LineSet191.setCoord(Coordinate193)

Shape190.setGeometry(LineSet191)

HAnimSegment186.addChild(Shape190)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.setVertexCount([2])
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.setUSE("HAnimSiteLineColorRGBA")

LineSet195.setColor(ColorRGBA196)
Coordinate197 = x3d.Coordinate()
Coordinate197.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]))

LineSet195.setCoord(Coordinate197)

Shape194.setGeometry(LineSet195)

HAnimSegment186.addChild(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.setVertexCount([2])
ColorRGBA200 = x3d.ColorRGBA()
ColorRGBA200.setUSE("HAnimSiteLineColorRGBA")

LineSet199.setColor(ColorRGBA200)
Coordinate201 = x3d.Coordinate()
Coordinate201.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]))

LineSet199.setCoord(Coordinate201)

Shape198.setGeometry(LineSet199)

HAnimSegment186.addChild(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.setVertexCount([2])
ColorRGBA204 = x3d.ColorRGBA()
ColorRGBA204.setUSE("HAnimSiteLineColorRGBA")

LineSet203.setColor(ColorRGBA204)
Coordinate205 = x3d.Coordinate()
Coordinate205.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]))

LineSet203.setCoord(Coordinate205)

Shape202.setGeometry(LineSet203)

HAnimSegment186.addChild(Shape202)
Shape206 = x3d.Shape()
LineSet207 = x3d.LineSet()
LineSet207.setVertexCount([2])
ColorRGBA208 = x3d.ColorRGBA()
ColorRGBA208.setUSE("HAnimSiteLineColorRGBA")

LineSet207.setColor(ColorRGBA208)
Coordinate209 = x3d.Coordinate()
Coordinate209.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]))

LineSet207.setCoord(Coordinate209)

Shape206.setGeometry(LineSet207)

HAnimSegment186.addChild(Shape206)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite210.setName("l_lateral_malleolus_pt")
HAnimSite210.setTranslation(x3d.doubleToFloat([0.1308,0.0597,-0.1032]))
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.setDescription("HAnimSite l_lateral_malleolus_pt")

HAnimSite210.addChild(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.setUSE("HAnimSiteShape")

HAnimSite210.addChild(Shape212)

HAnimSegment186.addChild(HAnimSite210)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite213.setName("l_medial_malleolus_pt")
HAnimSite213.setTranslation(x3d.doubleToFloat([0.089,0.0716,-0.0881]))
TouchSensor214 = x3d.TouchSensor()
TouchSensor214.setDescription("HAnimSite l_medial_malleolus_pt")

HAnimSite213.addChild(TouchSensor214)
Shape215 = x3d.Shape()
Shape215.setUSE("HAnimSiteShape")

HAnimSite213.addChild(Shape215)

HAnimSegment186.addChild(HAnimSite213)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setDEF("hanim_l_sphyrion_pt")
HAnimSite216.setName("l_sphyrion_pt")
HAnimSite216.setTranslation(x3d.doubleToFloat([0.089,0.0575,-0.0943]))
TouchSensor217 = x3d.TouchSensor()
TouchSensor217.setDescription("HAnimSite l_sphyrion_pt")

HAnimSite216.addChild(TouchSensor217)
Shape218 = x3d.Shape()
Shape218.setUSE("HAnimSiteShape")

HAnimSite216.addChild(Shape218)

HAnimSegment186.addChild(HAnimSite216)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite219.setName("l_calcaneus_posterior_pt")
HAnimSite219.setTranslation(x3d.doubleToFloat([0.0974,0.0259,-0.1171]))
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.setDescription("HAnimSite l_calcaneous_post_pt")

HAnimSite219.addChild(TouchSensor220)
Shape221 = x3d.Shape()
Shape221.setUSE("HAnimSiteShape")

HAnimSite219.addChild(Shape221)

HAnimSegment186.addChild(HAnimSite219)

HAnimJoint185.addChild(HAnimSegment186)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint222.setName("l_tarsometatarsal_2")
HAnimJoint222.setCenter(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.setDEF("hanim_l_metatarsal_2")
HAnimSegment223.setName("l_metatarsal_2")
TouchSensor224 = x3d.TouchSensor()
TouchSensor224.setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2")

HAnimSegment223.addChild(TouchSensor224)
Transform225 = x3d.Transform()
Transform225.setTranslation(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
Shape226 = x3d.Shape()
Shape226.setUSE("HAnimJointShape")

Transform225.addChild(Shape226)

HAnimSegment223.addChild(Transform225)
Shape227 = x3d.Shape()
LineSet228 = x3d.LineSet()
LineSet228.setVertexCount([2])
ColorRGBA229 = x3d.ColorRGBA()
ColorRGBA229.setUSE("HAnimSegmentLineColorRGBA")

LineSet228.setColor(ColorRGBA229)
Coordinate230 = x3d.Coordinate()
Coordinate230.setPoint(x3d.doubleToFloat([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]))

LineSet228.setCoord(Coordinate230)

Shape227.setGeometry(LineSet228)

HAnimSegment223.addChild(Shape227)

HAnimJoint222.addChild(HAnimSegment223)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint231.setName("l_metatarsophalangeal_2")
HAnimJoint231.setCenter(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.setDEF("hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment232.setName("l_tarsal_proximal_phalanx_2")
TouchSensor233 = x3d.TouchSensor()
TouchSensor233.setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2")

HAnimSegment232.addChild(TouchSensor233)
Transform234 = x3d.Transform()
Transform234.setTranslation(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
Shape235 = x3d.Shape()
Shape235.setUSE("HAnimJointShape")

Transform234.addChild(Shape235)

HAnimSegment232.addChild(Transform234)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.setVertexCount([2])
ColorRGBA238 = x3d.ColorRGBA()
ColorRGBA238.setUSE("HAnimSegmentLineColorRGBA")

LineSet237.setColor(ColorRGBA238)
Coordinate239 = x3d.Coordinate()
Coordinate239.setPoint(x3d.doubleToFloat([0.1086,0.0001,0.0368,0.1086,0,0.0762]))

LineSet237.setCoord(Coordinate239)

Shape236.setGeometry(LineSet237)

HAnimSegment232.addChild(Shape236)
Shape240 = x3d.Shape()
LineSet241 = x3d.LineSet()
LineSet241.setVertexCount([2])
ColorRGBA242 = x3d.ColorRGBA()
ColorRGBA242.setUSE("HAnimSiteLineColorRGBA")

LineSet241.setColor(ColorRGBA242)
Coordinate243 = x3d.Coordinate()
Coordinate243.setPoint(x3d.doubleToFloat([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]))

LineSet241.setCoord(Coordinate243)

Shape240.setGeometry(LineSet241)

HAnimSegment232.addChild(Shape240)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite244.setName("l_metatarsal_phalanx_1_pt")
HAnimSite244.setTranslation(x3d.doubleToFloat([0.0816,0.0232,0.0106]))
TouchSensor245 = x3d.TouchSensor()
TouchSensor245.setDescription("HAnimSite l_metatarsal_pha1_pt")

HAnimSite244.addChild(TouchSensor245)
Shape246 = x3d.Shape()
Shape246.setUSE("HAnimSiteShape")

HAnimSite244.addChild(Shape246)

HAnimSegment232.addChild(HAnimSite244)

HAnimJoint231.addChild(HAnimSegment232)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint247.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint247.setCenter(x3d.doubleToFloat([0.1086,0,0.0762]))
HAnimSegment248 = x3d.HAnimSegment()
HAnimSegment248.setDEF("hanim_l_tarsal_distal_phalanx_2")
HAnimSegment248.setName("l_tarsal_distal_phalanx_2")
TouchSensor249 = x3d.TouchSensor()
TouchSensor249.setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2")

HAnimSegment248.addChild(TouchSensor249)
Transform250 = x3d.Transform()
Transform250.setTranslation(x3d.doubleToFloat([0.1086,0,0.0762]))
Shape251 = x3d.Shape()
Shape251.setUSE("HAnimJointShape")

Transform250.addChild(Shape251)

HAnimSegment248.addChild(Transform250)
Shape252 = x3d.Shape()
LineSet253 = x3d.LineSet()
LineSet253.setVertexCount([2])
ColorRGBA254 = x3d.ColorRGBA()
ColorRGBA254.setUSE("HAnimSiteLineColorRGBA")

LineSet253.setColor(ColorRGBA254)
Coordinate255 = x3d.Coordinate()
Coordinate255.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1354,0.0016,0.1476]))

LineSet253.setCoord(Coordinate255)

Shape252.setGeometry(LineSet253)

HAnimSegment248.addChild(Shape252)
Shape256 = x3d.Shape()
LineSet257 = x3d.LineSet()
LineSet257.setVertexCount([2])
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.setUSE("HAnimSiteLineColorRGBA")

LineSet257.setColor(ColorRGBA258)
Coordinate259 = x3d.Coordinate()
Coordinate259.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1825,0.007,0.0928]))

LineSet257.setCoord(Coordinate259)

Shape256.setGeometry(LineSet257)

HAnimSegment248.addChild(Shape256)
Shape260 = x3d.Shape()
LineSet261 = x3d.LineSet()
LineSet261.setVertexCount([2])
ColorRGBA262 = x3d.ColorRGBA()
ColorRGBA262.setUSE("HAnimSiteLineColorRGBA")

LineSet261.setColor(ColorRGBA262)
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint(x3d.doubleToFloat([0.1086,0,0.0762,0.1195,0.0079,0.1433]))

LineSet261.setCoord(Coordinate263)

Shape260.setGeometry(LineSet261)

HAnimSegment248.addChild(Shape260)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.setDEF("hanim_l_forefoot_tip_pt")
HAnimSite264.setName("l_forefoot_tip_pt")
HAnimSite264.setTranslation(x3d.doubleToFloat([0.1354,0.0016,0.1476]))
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.setDescription("HAnimSite l_forefoot_tip")

HAnimSite264.addChild(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.setUSE("HAnimSiteShape")

HAnimSite264.addChild(Shape266)

HAnimSegment248.addChild(HAnimSite264)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite267.setName("l_metatarsal_phalanx_5_pt")
HAnimSite267.setTranslation(x3d.doubleToFloat([0.1825,0.007,0.0928]))
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.setDescription("HAnimSite l_metatarsal_pha5_pt")

HAnimSite267.addChild(TouchSensor268)
Shape269 = x3d.Shape()
Shape269.setUSE("HAnimSiteShape")

HAnimSite267.addChild(Shape269)

HAnimSegment248.addChild(HAnimSite267)
HAnimSite270 = x3d.HAnimSite()
HAnimSite270.setDEF("hanim_l_tarsal_distal_phalanx_2_pt")
HAnimSite270.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite270.setTranslation(x3d.doubleToFloat([0.1195,0.0079,0.1433]))
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.setDescription("HAnimSite l_digit2_pt")

HAnimSite270.addChild(TouchSensor271)
Shape272 = x3d.Shape()
Shape272.setUSE("HAnimSiteShape")

HAnimSite270.addChild(Shape272)

HAnimSegment248.addChild(HAnimSite270)

HAnimJoint247.addChild(HAnimSegment248)

HAnimJoint231.addChild(HAnimJoint247)

HAnimJoint222.addChild(HAnimJoint231)

HAnimJoint185.addChild(HAnimJoint222)

HAnimJoint176.addChild(HAnimJoint185)

HAnimJoint146.addChild(HAnimJoint176)

HAnimJoint66.addChild(HAnimJoint146)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setDEF("hanim_r_hip")
HAnimJoint273.setName("r_hip")
HAnimJoint273.setCenter(x3d.doubleToFloat([-0.0961,0.9124,-0.0001]))
HAnimSegment274 = x3d.HAnimSegment()
HAnimSegment274.setDEF("hanim_r_thigh")
HAnimSegment274.setName("r_thigh")
TouchSensor275 = x3d.TouchSensor()
TouchSensor275.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment274.addChild(TouchSensor275)
Transform276 = x3d.Transform()
Transform276.setTranslation(x3d.doubleToFloat([-0.0961,0.9124,-0.0001]))
Shape277 = x3d.Shape()
Shape277.setUSE("HAnimJointShape")

Transform276.addChild(Shape277)

HAnimSegment274.addChild(Transform276)
Shape278 = x3d.Shape()
LineSet279 = x3d.LineSet()
LineSet279.setVertexCount([2])
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.setUSE("HAnimSegmentLineColorRGBA")

LineSet279.setColor(ColorRGBA280)
Coordinate281 = x3d.Coordinate()
Coordinate281.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]))

LineSet279.setCoord(Coordinate281)

Shape278.setGeometry(LineSet279)

HAnimSegment274.addChild(Shape278)
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.setVertexCount([2])
ColorRGBA284 = x3d.ColorRGBA()
ColorRGBA284.setUSE("HAnimSiteLineColorRGBA")

LineSet283.setColor(ColorRGBA284)
Coordinate285 = x3d.Coordinate()
Coordinate285.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]))

LineSet283.setCoord(Coordinate285)

Shape282.setGeometry(LineSet283)

HAnimSegment274.addChild(Shape282)
Shape286 = x3d.Shape()
LineSet287 = x3d.LineSet()
LineSet287.setVertexCount([2])
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.setUSE("HAnimSiteLineColorRGBA")

LineSet287.setColor(ColorRGBA288)
Coordinate289 = x3d.Coordinate()
Coordinate289.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]))

LineSet287.setCoord(Coordinate289)

Shape286.setGeometry(LineSet287)

HAnimSegment274.addChild(Shape286)
Shape290 = x3d.Shape()
LineSet291 = x3d.LineSet()
LineSet291.setVertexCount([2])
ColorRGBA292 = x3d.ColorRGBA()
ColorRGBA292.setUSE("HAnimSiteLineColorRGBA")

LineSet291.setColor(ColorRGBA292)
Coordinate293 = x3d.Coordinate()
Coordinate293.setPoint(x3d.doubleToFloat([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]))

LineSet291.setCoord(Coordinate293)

Shape290.setGeometry(LineSet291)

HAnimSegment274.addChild(Shape290)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.setDEF("hanim_r_knee_crease_pt")
HAnimSite294.setName("r_knee_crease_pt")
HAnimSite294.setTranslation(x3d.doubleToFloat([-0.0825,0.4932,-0.0326]))
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.setDescription("HAnimSite r_knee_crease_pt")

HAnimSite294.addChild(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.setUSE("HAnimSiteShape")

HAnimSite294.addChild(Shape296)

HAnimSegment274.addChild(HAnimSite294)
HAnimSite297 = x3d.HAnimSite()
HAnimSite297.setDEF("hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite297.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite297.setTranslation(x3d.doubleToFloat([-0.1421,0.4992,0.031]))
TouchSensor298 = x3d.TouchSensor()
TouchSensor298.setDescription("HAnimSite r_femoral_lateral_epicn_pt")

HAnimSite297.addChild(TouchSensor298)
Shape299 = x3d.Shape()
Shape299.setUSE("HAnimSiteShape")

HAnimSite297.addChild(Shape299)

HAnimSegment274.addChild(HAnimSite297)
HAnimSite300 = x3d.HAnimSite()
HAnimSite300.setDEF("hanim_r_femoral_medial_epicondyle_pt")
HAnimSite300.setName("r_femoral_medial_epicondyle_pt")
HAnimSite300.setTranslation(x3d.doubleToFloat([-0.0221,0.5014,0.0289]))
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.setDescription("HAnimSite r_femoral_medial_epicn_pt")

HAnimSite300.addChild(TouchSensor301)
Shape302 = x3d.Shape()
Shape302.setUSE("HAnimSiteShape")

HAnimSite300.addChild(Shape302)

HAnimSegment274.addChild(HAnimSite300)

HAnimJoint273.addChild(HAnimSegment274)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.setDEF("hanim_r_knee")
HAnimJoint303.setName("r_knee")
HAnimJoint303.setCenter(x3d.doubleToFloat([-0.104,0.4867,0.0308]))
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.setDEF("hanim_r_calf")
HAnimSegment304.setName("r_calf")
TouchSensor305 = x3d.TouchSensor()
TouchSensor305.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment304.addChild(TouchSensor305)
Transform306 = x3d.Transform()
Transform306.setTranslation(x3d.doubleToFloat([-0.104,0.4867,0.0308]))
Shape307 = x3d.Shape()
Shape307.setUSE("HAnimJointShape")

Transform306.addChild(Shape307)

HAnimSegment304.addChild(Transform306)
Shape308 = x3d.Shape()
LineSet309 = x3d.LineSet()
LineSet309.setVertexCount([2])
ColorRGBA310 = x3d.ColorRGBA()
ColorRGBA310.setUSE("HAnimSegmentLineColorRGBA")

LineSet309.setColor(ColorRGBA310)
Coordinate311 = x3d.Coordinate()
Coordinate311.setPoint(x3d.doubleToFloat([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]))

LineSet309.setCoord(Coordinate311)

Shape308.setGeometry(LineSet309)

HAnimSegment304.addChild(Shape308)

HAnimJoint303.addChild(HAnimSegment304)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.setDEF("hanim_r_talocrural")
HAnimJoint312.setName("r_talocrural")
HAnimJoint312.setCenter(x3d.doubleToFloat([-0.1101,0.0656,-0.0736]))
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setDEF("hanim_r_talus")
HAnimSegment313.setName("r_talus")
TouchSensor314 = x3d.TouchSensor()
TouchSensor314.setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus")

HAnimSegment313.addChild(TouchSensor314)
Transform315 = x3d.Transform()
Transform315.setTranslation(x3d.doubleToFloat([-0.1101,0.0656,-0.0736]))
Shape316 = x3d.Shape()
Shape316.setUSE("HAnimJointShape")

Transform315.addChild(Shape316)

HAnimSegment313.addChild(Transform315)
Shape317 = x3d.Shape()
LineSet318 = x3d.LineSet()
LineSet318.setVertexCount([2])
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.setUSE("HAnimSegmentLineColorRGBA")

LineSet318.setColor(ColorRGBA319)
Coordinate320 = x3d.Coordinate()
Coordinate320.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]))

LineSet318.setCoord(Coordinate320)

Shape317.setGeometry(LineSet318)

HAnimSegment313.addChild(Shape317)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.setVertexCount([2])
ColorRGBA323 = x3d.ColorRGBA()
ColorRGBA323.setUSE("HAnimSiteLineColorRGBA")

LineSet322.setColor(ColorRGBA323)
Coordinate324 = x3d.Coordinate()
Coordinate324.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]))

LineSet322.setCoord(Coordinate324)

Shape321.setGeometry(LineSet322)

HAnimSegment313.addChild(Shape321)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.setVertexCount([2])
ColorRGBA327 = x3d.ColorRGBA()
ColorRGBA327.setUSE("HAnimSiteLineColorRGBA")

LineSet326.setColor(ColorRGBA327)
Coordinate328 = x3d.Coordinate()
Coordinate328.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]))

LineSet326.setCoord(Coordinate328)

Shape325.setGeometry(LineSet326)

HAnimSegment313.addChild(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.setVertexCount([2])
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.setUSE("HAnimSiteLineColorRGBA")

LineSet330.setColor(ColorRGBA331)
Coordinate332 = x3d.Coordinate()
Coordinate332.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]))

LineSet330.setCoord(Coordinate332)

Shape329.setGeometry(LineSet330)

HAnimSegment313.addChild(Shape329)
Shape333 = x3d.Shape()
LineSet334 = x3d.LineSet()
LineSet334.setVertexCount([2])
ColorRGBA335 = x3d.ColorRGBA()
ColorRGBA335.setUSE("HAnimSiteLineColorRGBA")

LineSet334.setColor(ColorRGBA335)
Coordinate336 = x3d.Coordinate()
Coordinate336.setPoint(x3d.doubleToFloat([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]))

LineSet334.setCoord(Coordinate336)

Shape333.setGeometry(LineSet334)

HAnimSegment313.addChild(Shape333)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite337.setName("r_lateral_malleolus_pt")
HAnimSite337.setTranslation(x3d.doubleToFloat([-0.1006,0.0658,-0.1075]))
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.setDescription("HAnimSite r_lateral_malleolus_pt")

HAnimSite337.addChild(TouchSensor338)
Shape339 = x3d.Shape()
Shape339.setUSE("HAnimSiteShape")

HAnimSite337.addChild(Shape339)

HAnimSegment313.addChild(HAnimSite337)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite340.setName("r_medial_malleolus_pt")
HAnimSite340.setTranslation(x3d.doubleToFloat([-0.0591,0.076,-0.0928]))
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.setDescription("HAnimSite r_medial_malleolus_pt")

HAnimSite340.addChild(TouchSensor341)
Shape342 = x3d.Shape()
Shape342.setUSE("HAnimSiteShape")

HAnimSite340.addChild(Shape342)

HAnimSegment313.addChild(HAnimSite340)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.setDEF("hanim_r_sphyrion_pt")
HAnimSite343.setName("r_sphyrion_pt")
HAnimSite343.setTranslation(x3d.doubleToFloat([-0.0603,0.061,-0.1002]))
TouchSensor344 = x3d.TouchSensor()
TouchSensor344.setDescription("HAnimSite r_sphyrion_pt")

HAnimSite343.addChild(TouchSensor344)
Shape345 = x3d.Shape()
Shape345.setUSE("HAnimSiteShape")

HAnimSite343.addChild(Shape345)

HAnimSegment313.addChild(HAnimSite343)
HAnimSite346 = x3d.HAnimSite()
HAnimSite346.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite346.setName("r_calcaneus_posterior_pt")
HAnimSite346.setTranslation(x3d.doubleToFloat([-0.0692,0.0297,-0.1221]))
TouchSensor347 = x3d.TouchSensor()
TouchSensor347.setDescription("HAnimSite r_calcaneous_post_pt")

HAnimSite346.addChild(TouchSensor347)
Shape348 = x3d.Shape()
Shape348.setUSE("HAnimSiteShape")

HAnimSite346.addChild(Shape348)

HAnimSegment313.addChild(HAnimSite346)

HAnimJoint312.addChild(HAnimSegment313)
HAnimJoint349 = x3d.HAnimJoint()
HAnimJoint349.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint349.setName("r_tarsometatarsal_2")
HAnimJoint349.setCenter(x3d.doubleToFloat([-0.1086,0.0001,-0.0368]))
HAnimSegment350 = x3d.HAnimSegment()
HAnimSegment350.setDEF("hanim_r_metatarsal_2")
HAnimSegment350.setName("r_metatarsal_2")
TouchSensor351 = x3d.TouchSensor()
TouchSensor351.setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2")

HAnimSegment350.addChild(TouchSensor351)
Transform352 = x3d.Transform()
Transform352.setTranslation(x3d.doubleToFloat([-0.1086,0.0001,-0.0368]))
Shape353 = x3d.Shape()
Shape353.setUSE("HAnimJointShape")

Transform352.addChild(Shape353)

HAnimSegment350.addChild(Transform352)
Shape354 = x3d.Shape()
LineSet355 = x3d.LineSet()
LineSet355.setVertexCount([2])
ColorRGBA356 = x3d.ColorRGBA()
ColorRGBA356.setUSE("HAnimSegmentLineColorRGBA")

LineSet355.setColor(ColorRGBA356)
Coordinate357 = x3d.Coordinate()
Coordinate357.setPoint(x3d.doubleToFloat([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]))

LineSet355.setCoord(Coordinate357)

Shape354.setGeometry(LineSet355)

HAnimSegment350.addChild(Shape354)

HAnimJoint349.addChild(HAnimSegment350)
HAnimJoint358 = x3d.HAnimJoint()
HAnimJoint358.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint358.setName("r_metatarsophalangeal_2")
HAnimJoint358.setCenter(x3d.doubleToFloat([-0.1086,0.0001,0.0368]))
HAnimSegment359 = x3d.HAnimSegment()
HAnimSegment359.setDEF("hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment359.setName("r_tarsal_proximal_phalanx_2")
TouchSensor360 = x3d.TouchSensor()
TouchSensor360.setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2")

HAnimSegment359.addChild(TouchSensor360)
Transform361 = x3d.Transform()
Transform361.setTranslation(x3d.doubleToFloat([-0.1086,0.0001,0.0368]))
Shape362 = x3d.Shape()
Shape362.setUSE("HAnimJointShape")

Transform361.addChild(Shape362)

HAnimSegment359.addChild(Transform361)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.setVertexCount([2])
ColorRGBA365 = x3d.ColorRGBA()
ColorRGBA365.setUSE("HAnimSegmentLineColorRGBA")

LineSet364.setColor(ColorRGBA365)
Coordinate366 = x3d.Coordinate()
Coordinate366.setPoint(x3d.doubleToFloat([-0.1086,0.0001,0.0368,-0.1086,0,0.0762]))

LineSet364.setCoord(Coordinate366)

Shape363.setGeometry(LineSet364)

HAnimSegment359.addChild(Shape363)
Shape367 = x3d.Shape()
LineSet368 = x3d.LineSet()
LineSet368.setVertexCount([2])
ColorRGBA369 = x3d.ColorRGBA()
ColorRGBA369.setUSE("HAnimSiteLineColorRGBA")

LineSet368.setColor(ColorRGBA369)
Coordinate370 = x3d.Coordinate()
Coordinate370.setPoint(x3d.doubleToFloat([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]))

LineSet368.setCoord(Coordinate370)

Shape367.setGeometry(LineSet368)

HAnimSegment359.addChild(Shape367)
HAnimSite371 = x3d.HAnimSite()
HAnimSite371.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite371.setName("r_metatarsal_phalanx_1_pt")
HAnimSite371.setTranslation(x3d.doubleToFloat([-0.0521,0.026,0.0127]))
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.setDescription("HAnimSite r_metatarsal_pha1_pt")

HAnimSite371.addChild(TouchSensor372)
Shape373 = x3d.Shape()
Shape373.setUSE("HAnimSiteShape")

HAnimSite371.addChild(Shape373)

HAnimSegment359.addChild(HAnimSite371)

HAnimJoint358.addChild(HAnimSegment359)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint374.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint374.setCenter(x3d.doubleToFloat([-0.1086,0,0.0762]))
HAnimSegment375 = x3d.HAnimSegment()
HAnimSegment375.setDEF("hanim_r_tarsal_distal_phalanx_2")
HAnimSegment375.setName("r_tarsal_distal_phalanx_2")
TouchSensor376 = x3d.TouchSensor()
TouchSensor376.setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2")

HAnimSegment375.addChild(TouchSensor376)
Transform377 = x3d.Transform()
Transform377.setTranslation(x3d.doubleToFloat([-0.1086,0,0.0762]))
Shape378 = x3d.Shape()
Shape378.setUSE("HAnimJointShape")

Transform377.addChild(Shape378)

HAnimSegment375.addChild(Transform377)
Shape379 = x3d.Shape()
LineSet380 = x3d.LineSet()
LineSet380.setVertexCount([2])
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.setUSE("HAnimSiteLineColorRGBA")

LineSet380.setColor(ColorRGBA381)
Coordinate382 = x3d.Coordinate()
Coordinate382.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.1043,0.0227,0.145]))

LineSet380.setCoord(Coordinate382)

Shape379.setGeometry(LineSet380)

HAnimSegment375.addChild(Shape379)
Shape383 = x3d.Shape()
LineSet384 = x3d.LineSet()
LineSet384.setVertexCount([2])
ColorRGBA385 = x3d.ColorRGBA()
ColorRGBA385.setUSE("HAnimSiteLineColorRGBA")

LineSet384.setColor(ColorRGBA385)
Coordinate386 = x3d.Coordinate()
Coordinate386.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.1523,0.0166,0.0895]))

LineSet384.setCoord(Coordinate386)

Shape383.setGeometry(LineSet384)

HAnimSegment375.addChild(Shape383)
Shape387 = x3d.Shape()
LineSet388 = x3d.LineSet()
LineSet388.setVertexCount([2])
ColorRGBA389 = x3d.ColorRGBA()
ColorRGBA389.setUSE("HAnimSiteLineColorRGBA")

LineSet388.setColor(ColorRGBA389)
Coordinate390 = x3d.Coordinate()
Coordinate390.setPoint(x3d.doubleToFloat([-0.1086,0,0.0762,-0.0883,0.0134,0.1383]))

LineSet388.setCoord(Coordinate390)

Shape387.setGeometry(LineSet388)

HAnimSegment375.addChild(Shape387)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.setDEF("hanim_r_forefoot_tip_pt")
HAnimSite391.setName("r_forefoot_tip_pt")
HAnimSite391.setTranslation(x3d.doubleToFloat([-0.1043,0.0227,0.145]))
TouchSensor392 = x3d.TouchSensor()
TouchSensor392.setDescription("HAnimSite r_forefoot_tip")

HAnimSite391.addChild(TouchSensor392)
Shape393 = x3d.Shape()
Shape393.setUSE("HAnimSiteShape")

HAnimSite391.addChild(Shape393)

HAnimSegment375.addChild(HAnimSite391)
HAnimSite394 = x3d.HAnimSite()
HAnimSite394.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite394.setName("r_metatarsal_phalanx_5_pt")
HAnimSite394.setTranslation(x3d.doubleToFloat([-0.1523,0.0166,0.0895]))
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.setDescription("HAnimSite r_metatarsal_pha5_pt")

HAnimSite394.addChild(TouchSensor395)
Shape396 = x3d.Shape()
Shape396.setUSE("HAnimSiteShape")

HAnimSite394.addChild(Shape396)

HAnimSegment375.addChild(HAnimSite394)
HAnimSite397 = x3d.HAnimSite()
HAnimSite397.setDEF("hanim_r_tarsal_distal_phalanx_2_pt")
HAnimSite397.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite397.setTranslation(x3d.doubleToFloat([-0.0883,0.0134,0.1383]))
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.setDescription("HAnimSite r_digit2_pt")

HAnimSite397.addChild(TouchSensor398)
Shape399 = x3d.Shape()
Shape399.setUSE("HAnimSiteShape")

HAnimSite397.addChild(Shape399)

HAnimSegment375.addChild(HAnimSite397)

HAnimJoint374.addChild(HAnimSegment375)

HAnimJoint358.addChild(HAnimJoint374)

HAnimJoint349.addChild(HAnimJoint358)

HAnimJoint312.addChild(HAnimJoint349)

HAnimJoint303.addChild(HAnimJoint312)

HAnimJoint273.addChild(HAnimJoint303)

HAnimJoint66.addChild(HAnimJoint273)

HAnimJoint50.addChild(HAnimJoint66)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.setDEF("hanim_vl5")
HAnimJoint400.setName("vl5")
HAnimJoint400.setCenter(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
HAnimSegment401 = x3d.HAnimSegment()
HAnimSegment401.setDEF("hanim_l5")
HAnimSegment401.setName("l5")
TouchSensor402 = x3d.TouchSensor()
TouchSensor402.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment401.addChild(TouchSensor402)
Transform403 = x3d.Transform()
Transform403.setTranslation(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
Shape404 = x3d.Shape()
Shape404.setUSE("HAnimJointShape")

Transform403.addChild(Shape404)

HAnimSegment401.addChild(Transform403)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.setVertexCount([2])
ColorRGBA407 = x3d.ColorRGBA()
ColorRGBA407.setUSE("HAnimSegmentLineColorRGBA")

LineSet406.setColor(ColorRGBA407)
Coordinate408 = x3d.Coordinate()
Coordinate408.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]))

LineSet406.setCoord(Coordinate408)

Shape405.setGeometry(LineSet406)

HAnimSegment401.addChild(Shape405)
Shape409 = x3d.Shape()
LineSet410 = x3d.LineSet()
LineSet410.setVertexCount([2])
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.setUSE("HAnimSiteLineColorRGBA")

LineSet410.setColor(ColorRGBA411)
Coordinate412 = x3d.Coordinate()
Coordinate412.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0,1.0915,-0.1091]))

LineSet410.setCoord(Coordinate412)

Shape409.setGeometry(LineSet410)

HAnimSegment401.addChild(Shape409)
Shape413 = x3d.Shape()
LineSet414 = x3d.LineSet()
LineSet414.setVertexCount([2])
ColorRGBA415 = x3d.ColorRGBA()
ColorRGBA415.setUSE("HAnimSiteLineColorRGBA")

LineSet414.setColor(ColorRGBA415)
Coordinate416 = x3d.Coordinate()
Coordinate416.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]))

LineSet414.setCoord(Coordinate416)

Shape413.setGeometry(LineSet414)

HAnimSegment401.addChild(Shape413)
HAnimSite417 = x3d.HAnimSite()
HAnimSite417.setDEF("hanim_waist_preferred_posterior_pt")
HAnimSite417.setName("waist_preferred_posterior_pt")
HAnimSite417.setTranslation(x3d.doubleToFloat([0,1.0915,-0.1091]))
TouchSensor418 = x3d.TouchSensor()
TouchSensor418.setDescription("HAnimSite waist_preferred_post_pt")

HAnimSite417.addChild(TouchSensor418)
Shape419 = x3d.Shape()
Shape419.setUSE("HAnimSiteShape")

HAnimSite417.addChild(Shape419)

HAnimSegment401.addChild(HAnimSite417)
HAnimSite420 = x3d.HAnimSite()
HAnimSite420.setDEF("hanim_navel_pt")
HAnimSite420.setName("navel_pt")
HAnimSite420.setTranslation(x3d.doubleToFloat([0.0069,1.0966,0.1017]))
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.setDescription("HAnimSite navel_pt")

HAnimSite420.addChild(TouchSensor421)
Shape422 = x3d.Shape()
Shape422.setUSE("HAnimSiteShape")

HAnimSite420.addChild(Shape422)

HAnimSegment401.addChild(HAnimSite420)

HAnimJoint400.addChild(HAnimSegment401)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setDEF("hanim_vl4")
HAnimJoint423.setName("vl4")
HAnimJoint423.setCenter(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
HAnimSegment424 = x3d.HAnimSegment()
HAnimSegment424.setDEF("hanim_l4")
HAnimSegment424.setName("l4")
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment424.addChild(TouchSensor425)
Transform426 = x3d.Transform()
Transform426.setTranslation(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
Shape427 = x3d.Shape()
Shape427.setUSE("HAnimJointShape")

Transform426.addChild(Shape427)

HAnimSegment424.addChild(Transform426)
Shape428 = x3d.Shape()
LineSet429 = x3d.LineSet()
LineSet429.setVertexCount([2])
ColorRGBA430 = x3d.ColorRGBA()
ColorRGBA430.setUSE("HAnimSegmentLineColorRGBA")

LineSet429.setColor(ColorRGBA430)
Coordinate431 = x3d.Coordinate()
Coordinate431.setPoint(x3d.doubleToFloat([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]))

LineSet429.setCoord(Coordinate431)

Shape428.setGeometry(LineSet429)

HAnimSegment424.addChild(Shape428)

HAnimJoint423.addChild(HAnimSegment424)
HAnimJoint432 = x3d.HAnimJoint()
HAnimJoint432.setDEF("hanim_vl3")
HAnimJoint432.setName("vl3")
HAnimJoint432.setCenter(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
HAnimSegment433 = x3d.HAnimSegment()
HAnimSegment433.setDEF("hanim_l3")
HAnimSegment433.setName("l3")
TouchSensor434 = x3d.TouchSensor()
TouchSensor434.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment433.addChild(TouchSensor434)
Transform435 = x3d.Transform()
Transform435.setTranslation(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
Shape436 = x3d.Shape()
Shape436.setUSE("HAnimJointShape")

Transform435.addChild(Shape436)

HAnimSegment433.addChild(Transform435)
Shape437 = x3d.Shape()
LineSet438 = x3d.LineSet()
LineSet438.setVertexCount([2])
ColorRGBA439 = x3d.ColorRGBA()
ColorRGBA439.setUSE("HAnimSegmentLineColorRGBA")

LineSet438.setColor(ColorRGBA439)
Coordinate440 = x3d.Coordinate()
Coordinate440.setPoint(x3d.doubleToFloat([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]))

LineSet438.setCoord(Coordinate440)

Shape437.setGeometry(LineSet438)

HAnimSegment433.addChild(Shape437)

HAnimJoint432.addChild(HAnimSegment433)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.setDEF("hanim_vl2")
HAnimJoint441.setName("vl2")
HAnimJoint441.setCenter(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.setDEF("hanim_l2")
HAnimSegment442.setName("l2")
TouchSensor443 = x3d.TouchSensor()
TouchSensor443.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment442.addChild(TouchSensor443)
Transform444 = x3d.Transform()
Transform444.setTranslation(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
Shape445 = x3d.Shape()
Shape445.setUSE("HAnimJointShape")

Transform444.addChild(Shape445)

HAnimSegment442.addChild(Transform444)
Shape446 = x3d.Shape()
LineSet447 = x3d.LineSet()
LineSet447.setVertexCount([2])
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.setUSE("HAnimSegmentLineColorRGBA")

LineSet447.setColor(ColorRGBA448)
Coordinate449 = x3d.Coordinate()
Coordinate449.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]))

LineSet447.setCoord(Coordinate449)

Shape446.setGeometry(LineSet447)

HAnimSegment442.addChild(Shape446)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.setVertexCount([2])
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.setUSE("HAnimSiteLineColorRGBA")

LineSet451.setColor(ColorRGBA452)
Coordinate453 = x3d.Coordinate()
Coordinate453.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]))

LineSet451.setCoord(Coordinate453)

Shape450.setGeometry(LineSet451)

HAnimSegment442.addChild(Shape450)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.setVertexCount([2])
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.setUSE("HAnimSiteLineColorRGBA")

LineSet455.setColor(ColorRGBA456)
Coordinate457 = x3d.Coordinate()
Coordinate457.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]))

LineSet455.setCoord(Coordinate457)

Shape454.setGeometry(LineSet455)

HAnimSegment442.addChild(Shape454)
Shape458 = x3d.Shape()
LineSet459 = x3d.LineSet()
LineSet459.setVertexCount([2])
ColorRGBA460 = x3d.ColorRGBA()
ColorRGBA460.setUSE("HAnimSiteLineColorRGBA")

LineSet459.setColor(ColorRGBA460)
Coordinate461 = x3d.Coordinate()
Coordinate461.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]))

LineSet459.setCoord(Coordinate461)

Shape458.setGeometry(LineSet459)

HAnimSegment442.addChild(Shape458)
HAnimSite462 = x3d.HAnimSite()
HAnimSite462.setDEF("hanim_r_rib10_pt")
HAnimSite462.setName("r_rib10_pt")
HAnimSite462.setTranslation(x3d.doubleToFloat([-0.0711,1.1941,0.1016]))
TouchSensor463 = x3d.TouchSensor()
TouchSensor463.setDescription("HAnimSite r_rib10_pt")

HAnimSite462.addChild(TouchSensor463)
Shape464 = x3d.Shape()
Shape464.setUSE("HAnimSiteShape")

HAnimSite462.addChild(Shape464)

HAnimSegment442.addChild(HAnimSite462)
HAnimSite465 = x3d.HAnimSite()
HAnimSite465.setDEF("hanim_l_rib10_pt")
HAnimSite465.setName("l_rib10_pt")
HAnimSite465.setTranslation(x3d.doubleToFloat([0.0871,1.1925,0.0992]))
TouchSensor466 = x3d.TouchSensor()
TouchSensor466.setDescription("HAnimSite l_rib10_pt")

HAnimSite465.addChild(TouchSensor466)
Shape467 = x3d.Shape()
Shape467.setUSE("HAnimSiteShape")

HAnimSite465.addChild(Shape467)

HAnimSegment442.addChild(HAnimSite465)
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.setDEF("hanim_rib10_midspine_pt")
HAnimSite468.setName("rib10_midspine_pt")
HAnimSite468.setTranslation(x3d.doubleToFloat([0.0049,1.1908,-0.1113]))
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.setDescription("HAnimSite rib10_midspine_pt")

HAnimSite468.addChild(TouchSensor469)
Shape470 = x3d.Shape()
Shape470.setUSE("HAnimSiteShape")

HAnimSite468.addChild(Shape470)

HAnimSegment442.addChild(HAnimSite468)

HAnimJoint441.addChild(HAnimSegment442)
HAnimJoint471 = x3d.HAnimJoint()
HAnimJoint471.setDEF("hanim_vl1")
HAnimJoint471.setName("vl1")
HAnimJoint471.setCenter(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.setDEF("hanim_l1")
HAnimSegment472.setName("l1")
TouchSensor473 = x3d.TouchSensor()
TouchSensor473.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment472.addChild(TouchSensor473)
Transform474 = x3d.Transform()
Transform474.setTranslation(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
Shape475 = x3d.Shape()
Shape475.setUSE("HAnimJointShape")

Transform474.addChild(Shape475)

HAnimSegment472.addChild(Transform474)
Shape476 = x3d.Shape()
LineSet477 = x3d.LineSet()
LineSet477.setVertexCount([2])
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.setUSE("HAnimSegmentLineColorRGBA")

LineSet477.setColor(ColorRGBA478)
Coordinate479 = x3d.Coordinate()
Coordinate479.setPoint(x3d.doubleToFloat([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]))

LineSet477.setCoord(Coordinate479)

Shape476.setGeometry(LineSet477)

HAnimSegment472.addChild(Shape476)

HAnimJoint471.addChild(HAnimSegment472)
HAnimJoint480 = x3d.HAnimJoint()
HAnimJoint480.setDEF("hanim_vt12")
HAnimJoint480.setName("vt12")
HAnimJoint480.setCenter(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.setDEF("hanim_t12")
HAnimSegment481.setName("t12")
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment481.addChild(TouchSensor482)
Transform483 = x3d.Transform()
Transform483.setTranslation(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
Shape484 = x3d.Shape()
Shape484.setUSE("HAnimJointShape")

Transform483.addChild(Shape484)

HAnimSegment481.addChild(Transform483)
Shape485 = x3d.Shape()
LineSet486 = x3d.LineSet()
LineSet486.setVertexCount([2])
ColorRGBA487 = x3d.ColorRGBA()
ColorRGBA487.setUSE("HAnimSegmentLineColorRGBA")

LineSet486.setColor(ColorRGBA487)
Coordinate488 = x3d.Coordinate()
Coordinate488.setPoint(x3d.doubleToFloat([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]))

LineSet486.setCoord(Coordinate488)

Shape485.setGeometry(LineSet486)

HAnimSegment481.addChild(Shape485)

HAnimJoint480.addChild(HAnimSegment481)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.setDEF("hanim_vt11")
HAnimJoint489.setName("vt11")
HAnimJoint489.setCenter(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setDEF("hanim_t11")
HAnimSegment490.setName("t11")
TouchSensor491 = x3d.TouchSensor()
TouchSensor491.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment490.addChild(TouchSensor491)
Transform492 = x3d.Transform()
Transform492.setTranslation(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
Shape493 = x3d.Shape()
Shape493.setUSE("HAnimJointShape")

Transform492.addChild(Shape493)

HAnimSegment490.addChild(Transform492)
Shape494 = x3d.Shape()
LineSet495 = x3d.LineSet()
LineSet495.setVertexCount([2])
ColorRGBA496 = x3d.ColorRGBA()
ColorRGBA496.setUSE("HAnimSegmentLineColorRGBA")

LineSet495.setColor(ColorRGBA496)
Coordinate497 = x3d.Coordinate()
Coordinate497.setPoint(x3d.doubleToFloat([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]))

LineSet495.setCoord(Coordinate497)

Shape494.setGeometry(LineSet495)

HAnimSegment490.addChild(Shape494)

HAnimJoint489.addChild(HAnimSegment490)
HAnimJoint498 = x3d.HAnimJoint()
HAnimJoint498.setDEF("hanim_vt10")
HAnimJoint498.setName("vt10")
HAnimJoint498.setCenter(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setDEF("hanim_t10")
HAnimSegment499.setName("t10")
TouchSensor500 = x3d.TouchSensor()
TouchSensor500.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment499.addChild(TouchSensor500)
Transform501 = x3d.Transform()
Transform501.setTranslation(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
Shape502 = x3d.Shape()
Shape502.setUSE("HAnimJointShape")

Transform501.addChild(Shape502)

HAnimSegment499.addChild(Transform501)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.setVertexCount([2])
ColorRGBA505 = x3d.ColorRGBA()
ColorRGBA505.setUSE("HAnimSegmentLineColorRGBA")

LineSet504.setColor(ColorRGBA505)
Coordinate506 = x3d.Coordinate()
Coordinate506.setPoint(x3d.doubleToFloat([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]))

LineSet504.setCoord(Coordinate506)

Shape503.setGeometry(LineSet504)

HAnimSegment499.addChild(Shape503)
Shape507 = x3d.Shape()
LineSet508 = x3d.LineSet()
LineSet508.setVertexCount([2])
ColorRGBA509 = x3d.ColorRGBA()
ColorRGBA509.setUSE("HAnimSiteLineColorRGBA")

LineSet508.setColor(ColorRGBA509)
Coordinate510 = x3d.Coordinate()
Coordinate510.setPoint(x3d.doubleToFloat([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]))

LineSet508.setCoord(Coordinate510)

Shape507.setGeometry(LineSet508)

HAnimSegment499.addChild(Shape507)
HAnimSite511 = x3d.HAnimSite()
HAnimSite511.setDEF("hanim_substernale_pt")
HAnimSite511.setName("substernale_pt")
HAnimSite511.setTranslation(x3d.doubleToFloat([0.0085,1.2995,0.1147]))
TouchSensor512 = x3d.TouchSensor()
TouchSensor512.setDescription("HAnimSite substernale_pt")

HAnimSite511.addChild(TouchSensor512)
Shape513 = x3d.Shape()
Shape513.setUSE("HAnimSiteShape")

HAnimSite511.addChild(Shape513)

HAnimSegment499.addChild(HAnimSite511)

HAnimJoint498.addChild(HAnimSegment499)
HAnimJoint514 = x3d.HAnimJoint()
HAnimJoint514.setDEF("hanim_vt9")
HAnimJoint514.setName("vt9")
HAnimJoint514.setCenter(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.setDEF("hanim_t9")
HAnimSegment515.setName("t9")
TouchSensor516 = x3d.TouchSensor()
TouchSensor516.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment515.addChild(TouchSensor516)
Transform517 = x3d.Transform()
Transform517.setTranslation(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
Shape518 = x3d.Shape()
Shape518.setUSE("HAnimJointShape")

Transform517.addChild(Shape518)

HAnimSegment515.addChild(Transform517)
Shape519 = x3d.Shape()
LineSet520 = x3d.LineSet()
LineSet520.setVertexCount([2])
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.setUSE("HAnimSegmentLineColorRGBA")

LineSet520.setColor(ColorRGBA521)
Coordinate522 = x3d.Coordinate()
Coordinate522.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]))

LineSet520.setCoord(Coordinate522)

Shape519.setGeometry(LineSet520)

HAnimSegment515.addChild(Shape519)
Shape523 = x3d.Shape()
LineSet524 = x3d.LineSet()
LineSet524.setVertexCount([2])
ColorRGBA525 = x3d.ColorRGBA()
ColorRGBA525.setUSE("HAnimSiteLineColorRGBA")

LineSet524.setColor(ColorRGBA525)
Coordinate526 = x3d.Coordinate()
Coordinate526.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]))

LineSet524.setCoord(Coordinate526)

Shape523.setGeometry(LineSet524)

HAnimSegment515.addChild(Shape523)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.setVertexCount([2])
ColorRGBA529 = x3d.ColorRGBA()
ColorRGBA529.setUSE("HAnimSiteLineColorRGBA")

LineSet528.setColor(ColorRGBA529)
Coordinate530 = x3d.Coordinate()
Coordinate530.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]))

LineSet528.setCoord(Coordinate530)

Shape527.setGeometry(LineSet528)

HAnimSegment515.addChild(Shape527)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.setDEF("hanim_r_thelion_pt")
HAnimSite531.setName("r_thelion_pt")
HAnimSite531.setTranslation(x3d.doubleToFloat([-0.0736,1.3385,0.1217]))
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.setDescription("HAnimSite r_thelion_pt")

HAnimSite531.addChild(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.setUSE("HAnimSiteShape")

HAnimSite531.addChild(Shape533)

HAnimSegment515.addChild(HAnimSite531)
HAnimSite534 = x3d.HAnimSite()
HAnimSite534.setDEF("hanim_l_thelion_pt")
HAnimSite534.setName("l_thelion_pt")
HAnimSite534.setTranslation(x3d.doubleToFloat([0.0918,1.3382,0.1192]))
TouchSensor535 = x3d.TouchSensor()
TouchSensor535.setDescription("HAnimSite l_thelion_pt")

HAnimSite534.addChild(TouchSensor535)
Shape536 = x3d.Shape()
Shape536.setUSE("HAnimSiteShape")

HAnimSite534.addChild(Shape536)

HAnimSegment515.addChild(HAnimSite534)

HAnimJoint514.addChild(HAnimSegment515)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.setDEF("hanim_vt8")
HAnimJoint537.setName("vt8")
HAnimJoint537.setCenter(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setDEF("hanim_t8")
HAnimSegment538.setName("t8")
TouchSensor539 = x3d.TouchSensor()
TouchSensor539.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment538.addChild(TouchSensor539)
Transform540 = x3d.Transform()
Transform540.setTranslation(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
Shape541 = x3d.Shape()
Shape541.setUSE("HAnimJointShape")

Transform540.addChild(Shape541)

HAnimSegment538.addChild(Transform540)
Shape542 = x3d.Shape()
LineSet543 = x3d.LineSet()
LineSet543.setVertexCount([2])
ColorRGBA544 = x3d.ColorRGBA()
ColorRGBA544.setUSE("HAnimSegmentLineColorRGBA")

LineSet543.setColor(ColorRGBA544)
Coordinate545 = x3d.Coordinate()
Coordinate545.setPoint(x3d.doubleToFloat([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]))

LineSet543.setCoord(Coordinate545)

Shape542.setGeometry(LineSet543)

HAnimSegment538.addChild(Shape542)

HAnimJoint537.addChild(HAnimSegment538)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.setDEF("hanim_vt7")
HAnimJoint546.setName("vt7")
HAnimJoint546.setCenter(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setDEF("hanim_t7")
HAnimSegment547.setName("t7")
TouchSensor548 = x3d.TouchSensor()
TouchSensor548.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment547.addChild(TouchSensor548)
Transform549 = x3d.Transform()
Transform549.setTranslation(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
Shape550 = x3d.Shape()
Shape550.setUSE("HAnimJointShape")

Transform549.addChild(Shape550)

HAnimSegment547.addChild(Transform549)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.setVertexCount([2])
ColorRGBA553 = x3d.ColorRGBA()
ColorRGBA553.setUSE("HAnimSegmentLineColorRGBA")

LineSet552.setColor(ColorRGBA553)
Coordinate554 = x3d.Coordinate()
Coordinate554.setPoint(x3d.doubleToFloat([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]))

LineSet552.setCoord(Coordinate554)

Shape551.setGeometry(LineSet552)

HAnimSegment547.addChild(Shape551)

HAnimJoint546.addChild(HAnimSegment547)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.setDEF("hanim_vt6")
HAnimJoint555.setName("vt6")
HAnimJoint555.setCenter(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.setDEF("hanim_t6")
HAnimSegment556.setName("t6")
TouchSensor557 = x3d.TouchSensor()
TouchSensor557.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment556.addChild(TouchSensor557)
Transform558 = x3d.Transform()
Transform558.setTranslation(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
Shape559 = x3d.Shape()
Shape559.setUSE("HAnimJointShape")

Transform558.addChild(Shape559)

HAnimSegment556.addChild(Transform558)
Shape560 = x3d.Shape()
LineSet561 = x3d.LineSet()
LineSet561.setVertexCount([2])
ColorRGBA562 = x3d.ColorRGBA()
ColorRGBA562.setUSE("HAnimSegmentLineColorRGBA")

LineSet561.setColor(ColorRGBA562)
Coordinate563 = x3d.Coordinate()
Coordinate563.setPoint(x3d.doubleToFloat([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]))

LineSet561.setCoord(Coordinate563)

Shape560.setGeometry(LineSet561)

HAnimSegment556.addChild(Shape560)

HAnimJoint555.addChild(HAnimSegment556)
HAnimJoint564 = x3d.HAnimJoint()
HAnimJoint564.setDEF("hanim_vt5")
HAnimJoint564.setName("vt5")
HAnimJoint564.setCenter(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
HAnimSegment565 = x3d.HAnimSegment()
HAnimSegment565.setDEF("hanim_t5")
HAnimSegment565.setName("t5")
TouchSensor566 = x3d.TouchSensor()
TouchSensor566.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment565.addChild(TouchSensor566)
Transform567 = x3d.Transform()
Transform567.setTranslation(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
Shape568 = x3d.Shape()
Shape568.setUSE("HAnimJointShape")

Transform567.addChild(Shape568)

HAnimSegment565.addChild(Transform567)
Shape569 = x3d.Shape()
LineSet570 = x3d.LineSet()
LineSet570.setVertexCount([2])
ColorRGBA571 = x3d.ColorRGBA()
ColorRGBA571.setUSE("HAnimSegmentLineColorRGBA")

LineSet570.setColor(ColorRGBA571)
Coordinate572 = x3d.Coordinate()
Coordinate572.setPoint(x3d.doubleToFloat([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]))

LineSet570.setCoord(Coordinate572)

Shape569.setGeometry(LineSet570)

HAnimSegment565.addChild(Shape569)

HAnimJoint564.addChild(HAnimSegment565)
HAnimJoint573 = x3d.HAnimJoint()
HAnimJoint573.setDEF("hanim_vt4")
HAnimJoint573.setName("vt4")
HAnimJoint573.setCenter(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
HAnimSegment574 = x3d.HAnimSegment()
HAnimSegment574.setDEF("hanim_t4")
HAnimSegment574.setName("t4")
TouchSensor575 = x3d.TouchSensor()
TouchSensor575.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment574.addChild(TouchSensor575)
Transform576 = x3d.Transform()
Transform576.setTranslation(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
Shape577 = x3d.Shape()
Shape577.setUSE("HAnimJointShape")

Transform576.addChild(Shape577)

HAnimSegment574.addChild(Transform576)
Shape578 = x3d.Shape()
LineSet579 = x3d.LineSet()
LineSet579.setVertexCount([2])
ColorRGBA580 = x3d.ColorRGBA()
ColorRGBA580.setUSE("HAnimSegmentLineColorRGBA")

LineSet579.setColor(ColorRGBA580)
Coordinate581 = x3d.Coordinate()
Coordinate581.setPoint(x3d.doubleToFloat([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]))

LineSet579.setCoord(Coordinate581)

Shape578.setGeometry(LineSet579)

HAnimSegment574.addChild(Shape578)

HAnimJoint573.addChild(HAnimSegment574)
HAnimJoint582 = x3d.HAnimJoint()
HAnimJoint582.setDEF("hanim_vt3")
HAnimJoint582.setName("vt3")
HAnimJoint582.setCenter(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
HAnimSegment583 = x3d.HAnimSegment()
HAnimSegment583.setDEF("hanim_t3")
HAnimSegment583.setName("t3")
TouchSensor584 = x3d.TouchSensor()
TouchSensor584.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment583.addChild(TouchSensor584)
Transform585 = x3d.Transform()
Transform585.setTranslation(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
Shape586 = x3d.Shape()
Shape586.setUSE("HAnimJointShape")

Transform585.addChild(Shape586)

HAnimSegment583.addChild(Transform585)
Shape587 = x3d.Shape()
LineSet588 = x3d.LineSet()
LineSet588.setVertexCount([2])
ColorRGBA589 = x3d.ColorRGBA()
ColorRGBA589.setUSE("HAnimSegmentLineColorRGBA")

LineSet588.setColor(ColorRGBA589)
Coordinate590 = x3d.Coordinate()
Coordinate590.setPoint(x3d.doubleToFloat([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]))

LineSet588.setCoord(Coordinate590)

Shape587.setGeometry(LineSet588)

HAnimSegment583.addChild(Shape587)

HAnimJoint582.addChild(HAnimSegment583)
HAnimJoint591 = x3d.HAnimJoint()
HAnimJoint591.setDEF("hanim_vt2")
HAnimJoint591.setName("vt2")
HAnimJoint591.setCenter(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
HAnimSegment592 = x3d.HAnimSegment()
HAnimSegment592.setDEF("hanim_t2")
HAnimSegment592.setName("t2")
TouchSensor593 = x3d.TouchSensor()
TouchSensor593.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment592.addChild(TouchSensor593)
Transform594 = x3d.Transform()
Transform594.setTranslation(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
Shape595 = x3d.Shape()
Shape595.setUSE("HAnimJointShape")

Transform594.addChild(Shape595)

HAnimSegment592.addChild(Transform594)
Shape596 = x3d.Shape()
LineSet597 = x3d.LineSet()
LineSet597.setVertexCount([2])
ColorRGBA598 = x3d.ColorRGBA()
ColorRGBA598.setUSE("HAnimSegmentLineColorRGBA")

LineSet597.setColor(ColorRGBA598)
Coordinate599 = x3d.Coordinate()
Coordinate599.setPoint(x3d.doubleToFloat([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]))

LineSet597.setCoord(Coordinate599)

Shape596.setGeometry(LineSet597)

HAnimSegment592.addChild(Shape596)

HAnimJoint591.addChild(HAnimSegment592)
HAnimJoint600 = x3d.HAnimJoint()
HAnimJoint600.setDEF("hanim_vt1")
HAnimJoint600.setName("vt1")
HAnimJoint600.setCenter(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
HAnimSegment601 = x3d.HAnimSegment()
HAnimSegment601.setDEF("hanim_t1")
HAnimSegment601.setName("t1")
TouchSensor602 = x3d.TouchSensor()
TouchSensor602.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment601.addChild(TouchSensor602)
Transform603 = x3d.Transform()
Transform603.setTranslation(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
Shape604 = x3d.Shape()
Shape604.setUSE("HAnimJointShape")

Transform603.addChild(Shape604)

HAnimSegment601.addChild(Transform603)
Shape605 = x3d.Shape()
LineSet606 = x3d.LineSet()
LineSet606.setVertexCount([2])
ColorRGBA607 = x3d.ColorRGBA()
ColorRGBA607.setUSE("HAnimSegmentLineColorRGBA")

LineSet606.setColor(ColorRGBA607)
Coordinate608 = x3d.Coordinate()
Coordinate608.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]))

LineSet606.setCoord(Coordinate608)

Shape605.setGeometry(LineSet606)

HAnimSegment601.addChild(Shape605)
Shape609 = x3d.Shape()
LineSet610 = x3d.LineSet()
LineSet610.setVertexCount([2])
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.setUSE("HAnimSegmentLineColorRGBA")

LineSet610.setColor(ColorRGBA611)
Coordinate612 = x3d.Coordinate()
Coordinate612.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]))

LineSet610.setCoord(Coordinate612)

Shape609.setGeometry(LineSet610)

HAnimSegment601.addChild(Shape609)
Shape613 = x3d.Shape()
LineSet614 = x3d.LineSet()
LineSet614.setVertexCount([2])
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.setUSE("HAnimSegmentLineColorRGBA")

LineSet614.setColor(ColorRGBA615)
Coordinate616 = x3d.Coordinate()
Coordinate616.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]))

LineSet614.setCoord(Coordinate616)

Shape613.setGeometry(LineSet614)

HAnimSegment601.addChild(Shape613)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.setVertexCount([2])
ColorRGBA619 = x3d.ColorRGBA()
ColorRGBA619.setUSE("HAnimSiteLineColorRGBA")

LineSet618.setColor(ColorRGBA619)
Coordinate620 = x3d.Coordinate()
Coordinate620.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]))

LineSet618.setCoord(Coordinate620)

Shape617.setGeometry(LineSet618)

HAnimSegment601.addChild(Shape617)
Shape621 = x3d.Shape()
LineSet622 = x3d.LineSet()
LineSet622.setVertexCount([2])
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.setUSE("HAnimSiteLineColorRGBA")

LineSet622.setColor(ColorRGBA623)
Coordinate624 = x3d.Coordinate()
Coordinate624.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]))

LineSet622.setCoord(Coordinate624)

Shape621.setGeometry(LineSet622)

HAnimSegment601.addChild(Shape621)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setDEF("hanim_suprasternale_pt")
HAnimSite625.setName("suprasternale_pt")
HAnimSite625.setTranslation(x3d.doubleToFloat([0.0084,1.4714,0.0551]))
TouchSensor626 = x3d.TouchSensor()
TouchSensor626.setDescription("HAnimSite suprasternale_pt")

HAnimSite625.addChild(TouchSensor626)
Shape627 = x3d.Shape()
Shape627.setUSE("HAnimSiteShape")

HAnimSite625.addChild(Shape627)

HAnimSegment601.addChild(HAnimSite625)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setDEF("hanim_cervicale_pt")
HAnimSite628.setName("cervicale_pt")
HAnimSite628.setTranslation(x3d.doubleToFloat([0.0064,1.52,-0.0815]))
TouchSensor629 = x3d.TouchSensor()
TouchSensor629.setDescription("HAnimSite cervicale_pt")

HAnimSite628.addChild(TouchSensor629)
Shape630 = x3d.Shape()
Shape630.setUSE("HAnimSiteShape")

HAnimSite628.addChild(Shape630)

HAnimSegment601.addChild(HAnimSite628)

HAnimJoint600.addChild(HAnimSegment601)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.setDEF("hanim_vc7")
HAnimJoint631.setName("vc7")
HAnimJoint631.setCenter(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.setDEF("hanim_c7")
HAnimSegment632.setName("c7")
TouchSensor633 = x3d.TouchSensor()
TouchSensor633.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment632.addChild(TouchSensor633)
Transform634 = x3d.Transform()
Transform634.setTranslation(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
Shape635 = x3d.Shape()
Shape635.setUSE("HAnimJointShape")

Transform634.addChild(Shape635)

HAnimSegment632.addChild(Transform634)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.setVertexCount([2])
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.setUSE("HAnimSegmentLineColorRGBA")

LineSet637.setColor(ColorRGBA638)
Coordinate639 = x3d.Coordinate()
Coordinate639.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]))

LineSet637.setCoord(Coordinate639)

Shape636.setGeometry(LineSet637)

HAnimSegment632.addChild(Shape636)
Shape640 = x3d.Shape()
LineSet641 = x3d.LineSet()
LineSet641.setVertexCount([2])
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.setUSE("HAnimSiteLineColorRGBA")

LineSet641.setColor(ColorRGBA642)
Coordinate643 = x3d.Coordinate()
Coordinate643.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]))

LineSet641.setCoord(Coordinate643)

Shape640.setGeometry(LineSet641)

HAnimSegment632.addChild(Shape640)
Shape644 = x3d.Shape()
LineSet645 = x3d.LineSet()
LineSet645.setVertexCount([2])
ColorRGBA646 = x3d.ColorRGBA()
ColorRGBA646.setUSE("HAnimSiteLineColorRGBA")

LineSet645.setColor(ColorRGBA646)
Coordinate647 = x3d.Coordinate()
Coordinate647.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]))

LineSet645.setCoord(Coordinate647)

Shape644.setGeometry(LineSet645)

HAnimSegment632.addChild(Shape644)
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.setDEF("hanim_r_neck_base_pt")
HAnimSite648.setName("r_neck_base_pt")
HAnimSite648.setTranslation(x3d.doubleToFloat([-0.0419,1.5149,-0.022]))
TouchSensor649 = x3d.TouchSensor()
TouchSensor649.setDescription("HAnimSite r_neck_base_pt")

HAnimSite648.addChild(TouchSensor649)
Shape650 = x3d.Shape()
Shape650.setUSE("HAnimSiteShape")

HAnimSite648.addChild(Shape650)

HAnimSegment632.addChild(HAnimSite648)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.setDEF("hanim_l_neck_base_pt")
HAnimSite651.setName("l_neck_base_pt")
HAnimSite651.setTranslation(x3d.doubleToFloat([0.0646,1.5141,-0.038]))
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.setDescription("HAnimSite l_neck_base_pt")

HAnimSite651.addChild(TouchSensor652)
Shape653 = x3d.Shape()
Shape653.setUSE("HAnimSiteShape")

HAnimSite651.addChild(Shape653)

HAnimSegment632.addChild(HAnimSite651)

HAnimJoint631.addChild(HAnimSegment632)
HAnimJoint654 = x3d.HAnimJoint()
HAnimJoint654.setDEF("hanim_vc6")
HAnimJoint654.setName("vc6")
HAnimJoint654.setCenter(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
HAnimSegment655 = x3d.HAnimSegment()
HAnimSegment655.setDEF("hanim_c6")
HAnimSegment655.setName("c6")
TouchSensor656 = x3d.TouchSensor()
TouchSensor656.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment655.addChild(TouchSensor656)
Transform657 = x3d.Transform()
Transform657.setTranslation(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
Shape658 = x3d.Shape()
Shape658.setUSE("HAnimJointShape")

Transform657.addChild(Shape658)

HAnimSegment655.addChild(Transform657)
Shape659 = x3d.Shape()
LineSet660 = x3d.LineSet()
LineSet660.setVertexCount([2])
ColorRGBA661 = x3d.ColorRGBA()
ColorRGBA661.setUSE("HAnimSegmentLineColorRGBA")

LineSet660.setColor(ColorRGBA661)
Coordinate662 = x3d.Coordinate()
Coordinate662.setPoint(x3d.doubleToFloat([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]))

LineSet660.setCoord(Coordinate662)

Shape659.setGeometry(LineSet660)

HAnimSegment655.addChild(Shape659)

HAnimJoint654.addChild(HAnimSegment655)
HAnimJoint663 = x3d.HAnimJoint()
HAnimJoint663.setDEF("hanim_vc5")
HAnimJoint663.setName("vc5")
HAnimJoint663.setCenter(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
HAnimSegment664 = x3d.HAnimSegment()
HAnimSegment664.setDEF("hanim_c5")
HAnimSegment664.setName("c5")
TouchSensor665 = x3d.TouchSensor()
TouchSensor665.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment664.addChild(TouchSensor665)
Transform666 = x3d.Transform()
Transform666.setTranslation(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
Shape667 = x3d.Shape()
Shape667.setUSE("HAnimJointShape")

Transform666.addChild(Shape667)

HAnimSegment664.addChild(Transform666)
Shape668 = x3d.Shape()
LineSet669 = x3d.LineSet()
LineSet669.setVertexCount([2])
ColorRGBA670 = x3d.ColorRGBA()
ColorRGBA670.setUSE("HAnimSegmentLineColorRGBA")

LineSet669.setColor(ColorRGBA670)
Coordinate671 = x3d.Coordinate()
Coordinate671.setPoint(x3d.doubleToFloat([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]))

LineSet669.setCoord(Coordinate671)

Shape668.setGeometry(LineSet669)

HAnimSegment664.addChild(Shape668)

HAnimJoint663.addChild(HAnimSegment664)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.setDEF("hanim_vc4")
HAnimJoint672.setName("vc4")
HAnimJoint672.setCenter(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
HAnimSegment673 = x3d.HAnimSegment()
HAnimSegment673.setDEF("hanim_c4")
HAnimSegment673.setName("c4")
TouchSensor674 = x3d.TouchSensor()
TouchSensor674.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment673.addChild(TouchSensor674)
Transform675 = x3d.Transform()
Transform675.setTranslation(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
Shape676 = x3d.Shape()
Shape676.setUSE("HAnimJointShape")

Transform675.addChild(Shape676)

HAnimSegment673.addChild(Transform675)
Shape677 = x3d.Shape()
LineSet678 = x3d.LineSet()
LineSet678.setVertexCount([2])
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.setUSE("HAnimSegmentLineColorRGBA")

LineSet678.setColor(ColorRGBA679)
Coordinate680 = x3d.Coordinate()
Coordinate680.setPoint(x3d.doubleToFloat([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]))

LineSet678.setCoord(Coordinate680)

Shape677.setGeometry(LineSet678)

HAnimSegment673.addChild(Shape677)

HAnimJoint672.addChild(HAnimSegment673)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.setDEF("hanim_vc3")
HAnimJoint681.setName("vc3")
HAnimJoint681.setCenter(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
HAnimSegment682 = x3d.HAnimSegment()
HAnimSegment682.setDEF("hanim_c3")
HAnimSegment682.setName("c3")
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment682.addChild(TouchSensor683)
Transform684 = x3d.Transform()
Transform684.setTranslation(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
Shape685 = x3d.Shape()
Shape685.setUSE("HAnimJointShape")

Transform684.addChild(Shape685)

HAnimSegment682.addChild(Transform684)
Shape686 = x3d.Shape()
LineSet687 = x3d.LineSet()
LineSet687.setVertexCount([2])
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.setUSE("HAnimSegmentLineColorRGBA")

LineSet687.setColor(ColorRGBA688)
Coordinate689 = x3d.Coordinate()
Coordinate689.setPoint(x3d.doubleToFloat([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]))

LineSet687.setCoord(Coordinate689)

Shape686.setGeometry(LineSet687)

HAnimSegment682.addChild(Shape686)

HAnimJoint681.addChild(HAnimSegment682)
HAnimJoint690 = x3d.HAnimJoint()
HAnimJoint690.setDEF("hanim_vc2")
HAnimJoint690.setName("vc2")
HAnimJoint690.setCenter(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.setDEF("hanim_c2")
HAnimSegment691.setName("c2")
TouchSensor692 = x3d.TouchSensor()
TouchSensor692.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment691.addChild(TouchSensor692)
Transform693 = x3d.Transform()
Transform693.setTranslation(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
Shape694 = x3d.Shape()
Shape694.setUSE("HAnimJointShape")

Transform693.addChild(Shape694)

HAnimSegment691.addChild(Transform693)
Shape695 = x3d.Shape()
LineSet696 = x3d.LineSet()
LineSet696.setVertexCount([2])
ColorRGBA697 = x3d.ColorRGBA()
ColorRGBA697.setUSE("HAnimSegmentLineColorRGBA")

LineSet696.setColor(ColorRGBA697)
Coordinate698 = x3d.Coordinate()
Coordinate698.setPoint(x3d.doubleToFloat([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]))

LineSet696.setCoord(Coordinate698)

Shape695.setGeometry(LineSet696)

HAnimSegment691.addChild(Shape695)

HAnimJoint690.addChild(HAnimSegment691)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.setDEF("hanim_vc1")
HAnimJoint699.setName("vc1")
HAnimJoint699.setCenter(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.setDEF("hanim_c1")
HAnimSegment700.setName("c1")
TouchSensor701 = x3d.TouchSensor()
TouchSensor701.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment700.addChild(TouchSensor701)
Transform702 = x3d.Transform()
Transform702.setTranslation(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
Shape703 = x3d.Shape()
Shape703.setUSE("HAnimJointShape")

Transform702.addChild(Shape703)

HAnimSegment700.addChild(Transform702)
Shape704 = x3d.Shape()
LineSet705 = x3d.LineSet()
LineSet705.setVertexCount([2])
ColorRGBA706 = x3d.ColorRGBA()
ColorRGBA706.setUSE("HAnimSegmentLineColorRGBA")

LineSet705.setColor(ColorRGBA706)
Coordinate707 = x3d.Coordinate()
Coordinate707.setPoint(x3d.doubleToFloat([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]))

LineSet705.setCoord(Coordinate707)

Shape704.setGeometry(LineSet705)

HAnimSegment700.addChild(Shape704)

HAnimJoint699.addChild(HAnimSegment700)
HAnimJoint708 = x3d.HAnimJoint()
HAnimJoint708.setDEF("hanim_skullbase")
HAnimJoint708.setName("skullbase")
HAnimJoint708.setCenter(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
HAnimSegment709 = x3d.HAnimSegment()
HAnimSegment709.setDEF("hanim_skull")
HAnimSegment709.setName("skull")
TouchSensor710 = x3d.TouchSensor()
TouchSensor710.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment709.addChild(TouchSensor710)
Transform711 = x3d.Transform()
Transform711.setTranslation(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
Shape712 = x3d.Shape()
Shape712.setUSE("HAnimJointShape")

Transform711.addChild(Shape712)

HAnimSegment709.addChild(Transform711)
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

HAnimSegment709.addChild(Shape713)
Shape717 = x3d.Shape()
LineSet718 = x3d.LineSet()
LineSet718.setVertexCount([2])
ColorRGBA719 = x3d.ColorRGBA()
ColorRGBA719.setUSE("HAnimSegmentLineColorRGBA")

LineSet718.setColor(ColorRGBA719)
Coordinate720 = x3d.Coordinate()
Coordinate720.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]))

LineSet718.setCoord(Coordinate720)

Shape717.setGeometry(LineSet718)

HAnimSegment709.addChild(Shape717)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.setVertexCount([2])
ColorRGBA723 = x3d.ColorRGBA()
ColorRGBA723.setUSE("HAnimSegmentLineColorRGBA")

LineSet722.setColor(ColorRGBA723)
Coordinate724 = x3d.Coordinate()
Coordinate724.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0336,1.635,0.0506]))

LineSet722.setCoord(Coordinate724)

Shape721.setGeometry(LineSet722)

HAnimSegment709.addChild(Shape721)
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

HAnimSegment709.addChild(Shape725)
Shape729 = x3d.Shape()
LineSet730 = x3d.LineSet()
LineSet730.setVertexCount([2])
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.setUSE("HAnimSegmentLineColorRGBA")

LineSet730.setColor(ColorRGBA731)
Coordinate732 = x3d.Coordinate()
Coordinate732.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]))

LineSet730.setCoord(Coordinate732)

Shape729.setGeometry(LineSet730)

HAnimSegment709.addChild(Shape729)
Shape733 = x3d.Shape()
LineSet734 = x3d.LineSet()
LineSet734.setVertexCount([2])
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.setUSE("HAnimSegmentLineColorRGBA")

LineSet734.setColor(ColorRGBA735)
Coordinate736 = x3d.Coordinate()
Coordinate736.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]))

LineSet734.setCoord(Coordinate736)

Shape733.setGeometry(LineSet734)

HAnimSegment709.addChild(Shape733)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.setVertexCount([2])
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.setUSE("HAnimSegmentLineColorRGBA")

LineSet738.setColor(ColorRGBA739)
Coordinate740 = x3d.Coordinate()
Coordinate740.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0,1.63,0.015]))

LineSet738.setCoord(Coordinate740)

Shape737.setGeometry(LineSet738)

HAnimSegment709.addChild(Shape737)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.setVertexCount([2])
ColorRGBA743 = x3d.ColorRGBA()
ColorRGBA743.setUSE("HAnimSiteLineColorRGBA")

LineSet742.setColor(ColorRGBA743)
Coordinate744 = x3d.Coordinate()
Coordinate744.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.005,1.7504,0.0055]))

LineSet742.setCoord(Coordinate744)

Shape741.setGeometry(LineSet742)

HAnimSegment709.addChild(Shape741)
Shape745 = x3d.Shape()
LineSet746 = x3d.LineSet()
LineSet746.setVertexCount([2])
ColorRGBA747 = x3d.ColorRGBA()
ColorRGBA747.setUSE("HAnimSiteLineColorRGBA")

LineSet746.setColor(ColorRGBA747)
Coordinate748 = x3d.Coordinate()
Coordinate748.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]))

LineSet746.setCoord(Coordinate748)

Shape745.setGeometry(LineSet746)

HAnimSegment709.addChild(Shape745)
Shape749 = x3d.Shape()
LineSet750 = x3d.LineSet()
LineSet750.setVertexCount([2])
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.setUSE("HAnimSiteLineColorRGBA")

LineSet750.setColor(ColorRGBA751)
Coordinate752 = x3d.Coordinate()
Coordinate752.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]))

LineSet750.setCoord(Coordinate752)

Shape749.setGeometry(LineSet750)

HAnimSegment709.addChild(Shape749)
Shape753 = x3d.Shape()
LineSet754 = x3d.LineSet()
LineSet754.setVertexCount([2])
ColorRGBA755 = x3d.ColorRGBA()
ColorRGBA755.setUSE("HAnimSiteLineColorRGBA")

LineSet754.setColor(ColorRGBA755)
Coordinate756 = x3d.Coordinate()
Coordinate756.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]))

LineSet754.setCoord(Coordinate756)

Shape753.setGeometry(LineSet754)

HAnimSegment709.addChild(Shape753)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.setVertexCount([2])
ColorRGBA759 = x3d.ColorRGBA()
ColorRGBA759.setUSE("HAnimSiteLineColorRGBA")

LineSet758.setColor(ColorRGBA759)
Coordinate760 = x3d.Coordinate()
Coordinate760.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0061,1.541,0.0805]))

LineSet758.setCoord(Coordinate760)

Shape757.setGeometry(LineSet758)

HAnimSegment709.addChild(Shape757)
Shape761 = x3d.Shape()
LineSet762 = x3d.LineSet()
LineSet762.setVertexCount([2])
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.setUSE("HAnimSiteLineColorRGBA")

LineSet762.setColor(ColorRGBA763)
Coordinate764 = x3d.Coordinate()
Coordinate764.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]))

LineSet762.setCoord(Coordinate764)

Shape761.setGeometry(LineSet762)

HAnimSegment709.addChild(Shape761)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.setVertexCount([2])
ColorRGBA767 = x3d.ColorRGBA()
ColorRGBA767.setUSE("HAnimSiteLineColorRGBA")

LineSet766.setColor(ColorRGBA767)
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]))

LineSet766.setCoord(Coordinate768)

Shape765.setGeometry(LineSet766)

HAnimSegment709.addChild(Shape765)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.setVertexCount([2])
ColorRGBA771 = x3d.ColorRGBA()
ColorRGBA771.setUSE("HAnimSiteLineColorRGBA")

LineSet770.setColor(ColorRGBA771)
Coordinate772 = x3d.Coordinate()
Coordinate772.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]))

LineSet770.setCoord(Coordinate772)

Shape769.setGeometry(LineSet770)

HAnimSegment709.addChild(Shape769)
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.setVertexCount([2])
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.setUSE("HAnimSiteLineColorRGBA")

LineSet774.setColor(ColorRGBA775)
Coordinate776 = x3d.Coordinate()
Coordinate776.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0631,1.553,0.033]))

LineSet774.setCoord(Coordinate776)

Shape773.setGeometry(LineSet774)

HAnimSegment709.addChild(Shape773)
Shape777 = x3d.Shape()
LineSet778 = x3d.LineSet()
LineSet778.setVertexCount([2])
ColorRGBA779 = x3d.ColorRGBA()
ColorRGBA779.setUSE("HAnimSiteLineColorRGBA")

LineSet778.setColor(ColorRGBA779)
Coordinate780 = x3d.Coordinate()
Coordinate780.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]))

LineSet778.setCoord(Coordinate780)

Shape777.setGeometry(LineSet778)

HAnimSegment709.addChild(Shape777)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.setDEF("hanim_skull_vertex_pt")
HAnimSite781.setName("skull_vertex_pt")
HAnimSite781.setTranslation(x3d.doubleToFloat([0.005,1.7504,0.0055]))
TouchSensor782 = x3d.TouchSensor()
TouchSensor782.setDescription("HAnimSite skull_tip")

HAnimSite781.addChild(TouchSensor782)
Shape783 = x3d.Shape()
Shape783.setUSE("HAnimSiteShape")

HAnimSite781.addChild(Shape783)

HAnimSegment709.addChild(HAnimSite781)
HAnimSite784 = x3d.HAnimSite()
HAnimSite784.setDEF("hanim_sellion_pt")
HAnimSite784.setName("sellion_pt")
HAnimSite784.setTranslation(x3d.doubleToFloat([0.0058,1.6316,0.0852]))
TouchSensor785 = x3d.TouchSensor()
TouchSensor785.setDescription("HAnimSite sellion_pt")

HAnimSite784.addChild(TouchSensor785)
Shape786 = x3d.Shape()
Shape786.setUSE("HAnimSiteShape")

HAnimSite784.addChild(Shape786)

HAnimSegment709.addChild(HAnimSite784)
HAnimSite787 = x3d.HAnimSite()
HAnimSite787.setDEF("hanim_r_infraorbitale_pt")
HAnimSite787.setName("r_infraorbitale_pt")
HAnimSite787.setTranslation(x3d.doubleToFloat([-0.0237,1.6171,0.0752]))
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.setDescription("HAnimSite r_infraorbitale_pt")

HAnimSite787.addChild(TouchSensor788)
Shape789 = x3d.Shape()
Shape789.setUSE("HAnimSiteShape")

HAnimSite787.addChild(Shape789)

HAnimSegment709.addChild(HAnimSite787)
HAnimSite790 = x3d.HAnimSite()
HAnimSite790.setDEF("hanim_l_infraorbitale_pt")
HAnimSite790.setName("l_infraorbitale_pt")
HAnimSite790.setTranslation(x3d.doubleToFloat([0.0341,1.6171,0.0752]))
TouchSensor791 = x3d.TouchSensor()
TouchSensor791.setDescription("HAnimSite l_infraorbitale_pt")

HAnimSite790.addChild(TouchSensor791)
Shape792 = x3d.Shape()
Shape792.setUSE("HAnimSiteShape")

HAnimSite790.addChild(Shape792)

HAnimSegment709.addChild(HAnimSite790)
HAnimSite793 = x3d.HAnimSite()
HAnimSite793.setDEF("hanim_supramenton_pt")
HAnimSite793.setName("supramenton_pt")
HAnimSite793.setTranslation(x3d.doubleToFloat([0.0061,1.541,0.0805]))
TouchSensor794 = x3d.TouchSensor()
TouchSensor794.setDescription("HAnimSite supramenton_pt")

HAnimSite793.addChild(TouchSensor794)
Shape795 = x3d.Shape()
Shape795.setUSE("HAnimSiteShape")

HAnimSite793.addChild(Shape795)

HAnimSegment709.addChild(HAnimSite793)
HAnimSite796 = x3d.HAnimSite()
HAnimSite796.setDEF("hanim_r_tragion_pt")
HAnimSite796.setName("r_tragion_pt")
HAnimSite796.setTranslation(x3d.doubleToFloat([-0.0646,1.6347,0.0302]))
TouchSensor797 = x3d.TouchSensor()
TouchSensor797.setDescription("HAnimSite r_tragion_pt")

HAnimSite796.addChild(TouchSensor797)
Shape798 = x3d.Shape()
Shape798.setUSE("HAnimSiteShape")

HAnimSite796.addChild(Shape798)

HAnimSegment709.addChild(HAnimSite796)
HAnimSite799 = x3d.HAnimSite()
HAnimSite799.setDEF("hanim_r_gonion_pt")
HAnimSite799.setName("r_gonion_pt")
HAnimSite799.setTranslation(x3d.doubleToFloat([-0.052,1.5529,0.0347]))
TouchSensor800 = x3d.TouchSensor()
TouchSensor800.setDescription("HAnimSite r_gonion_pt")

HAnimSite799.addChild(TouchSensor800)
Shape801 = x3d.Shape()
Shape801.setUSE("HAnimSiteShape")

HAnimSite799.addChild(Shape801)

HAnimSegment709.addChild(HAnimSite799)
HAnimSite802 = x3d.HAnimSite()
HAnimSite802.setDEF("hanim_l_tragion_pt")
HAnimSite802.setName("l_tragion_pt")
HAnimSite802.setTranslation(x3d.doubleToFloat([0.0739,1.6348,0.0282]))
TouchSensor803 = x3d.TouchSensor()
TouchSensor803.setDescription("HAnimSite l_tragion_pt")

HAnimSite802.addChild(TouchSensor803)
Shape804 = x3d.Shape()
Shape804.setUSE("HAnimSiteShape")

HAnimSite802.addChild(Shape804)

HAnimSegment709.addChild(HAnimSite802)
HAnimSite805 = x3d.HAnimSite()
HAnimSite805.setDEF("hanim_l_gonion_pt")
HAnimSite805.setName("l_gonion_pt")
HAnimSite805.setTranslation(x3d.doubleToFloat([0.0631,1.553,0.033]))
TouchSensor806 = x3d.TouchSensor()
TouchSensor806.setDescription("HAnimSite l_gonion_pt")

HAnimSite805.addChild(TouchSensor806)
Shape807 = x3d.Shape()
Shape807.setUSE("HAnimSiteShape")

HAnimSite805.addChild(Shape807)

HAnimSegment709.addChild(HAnimSite805)
HAnimSite808 = x3d.HAnimSite()
HAnimSite808.setDEF("hanim_nuchale_pt")
HAnimSite808.setName("nuchale_pt")
HAnimSite808.setTranslation(x3d.doubleToFloat([0.0039,1.5972,-0.0796]))
TouchSensor809 = x3d.TouchSensor()
TouchSensor809.setDescription("HAnimSite nuchale_pt")

HAnimSite808.addChild(TouchSensor809)
Shape810 = x3d.Shape()
Shape810.setUSE("HAnimSiteShape")

HAnimSite808.addChild(Shape810)

HAnimSegment709.addChild(HAnimSite808)

HAnimJoint708.addChild(HAnimSegment709)
HAnimJoint811 = x3d.HAnimJoint()
HAnimJoint811.setDEF("hanim_l_eyeball_joint")
HAnimJoint811.setName("l_eyeball_joint")
HAnimJoint811.setCenter(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
HAnimSegment812 = x3d.HAnimSegment()
HAnimSegment812.setDEF("hanim_l_eyeball")
HAnimSegment812.setName("l_eyeball")
TouchSensor813 = x3d.TouchSensor()
TouchSensor813.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment812.addChild(TouchSensor813)
Transform814 = x3d.Transform()
Transform814.setTranslation(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
Shape815 = x3d.Shape()
Shape815.setUSE("HAnimJointShape")

Transform814.addChild(Shape815)

HAnimSegment812.addChild(Transform814)
Shape816 = x3d.Shape()
LineSet817 = x3d.LineSet()
LineSet817.setVertexCount([2])
ColorRGBA818 = x3d.ColorRGBA()
ColorRGBA818.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA818.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1]))

LineSet817.setColor(ColorRGBA818)
Coordinate819 = x3d.Coordinate()
Coordinate819.setPoint(x3d.doubleToFloat([0.0336,1.6332,0.0502,0.034,1.64,0.05]))

LineSet817.setCoord(Coordinate819)

Shape816.setGeometry(LineSet817)

HAnimSegment812.addChild(Shape816)
HAnimSite820 = x3d.HAnimSite()
HAnimSite820.setDEF("hanim_l_eyeball_site_view")
HAnimSite820.setName("l_eyeball_site_view")
HAnimSite820.setTranslation(x3d.doubleToFloat([0.034,1.64,0.05]))
TouchSensor821 = x3d.TouchSensor()
TouchSensor821.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite820.addChild(TouchSensor821)
Shape822 = x3d.Shape()
Shape822.setUSE("HAnimSiteShape")

HAnimSite820.addChild(Shape822)
Viewpoint823 = x3d.Viewpoint()
Viewpoint823.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint823.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint823.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint823.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite820.addChild(Viewpoint823)
Anchor824 = x3d.Anchor()
Anchor824.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor824.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD825 = x3d.LOD()
LOD825.setForceTransitions(True)
LOD825.setRange(x3d.doubleToFloat([0.04]))
WorldInfo826 = x3d.WorldInfo()
WorldInfo826.setInfo(["hide diamond when close"])

LOD825.addChild(WorldInfo826)
Shape827 = x3d.Shape()
Shape827.setDEF("HAnimSiteViewpointShape")
Appearance828 = x3d.Appearance()
Material829 = x3d.Material()
Material829.setDiffuseColor(x3d.doubleToFloat([1,1,0]))
Material829.setTransparency(0.3)

Appearance828.setMaterial(Material829)

Shape827.setAppearance(Appearance828)
IndexedFaceSet830 = x3d.IndexedFaceSet()
IndexedFaceSet830.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet830.setCreaseAngle(0.5)
IndexedFaceSet830.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate831 = x3d.Coordinate()
Coordinate831.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet830.setCoord(Coordinate831)

Shape827.setGeometry(IndexedFaceSet830)

LOD825.addChild(Shape827)

Anchor824.addChild(LOD825)

HAnimSite820.addChild(Anchor824)

HAnimSegment812.addChild(HAnimSite820)

HAnimJoint811.addChild(HAnimSegment812)

HAnimJoint708.addChild(HAnimJoint811)
HAnimJoint832 = x3d.HAnimJoint()
HAnimJoint832.setDEF("hanim_l_eyelid_joint")
HAnimJoint832.setName("l_eyelid_joint")
HAnimJoint832.setCenter(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
HAnimSegment833 = x3d.HAnimSegment()
HAnimSegment833.setDEF("hanim_l_eyelid")
HAnimSegment833.setName("l_eyelid")
TouchSensor834 = x3d.TouchSensor()
TouchSensor834.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment833.addChild(TouchSensor834)
Transform835 = x3d.Transform()
Transform835.setTranslation(x3d.doubleToFloat([0.0336,1.6332,0.0502]))
Shape836 = x3d.Shape()
Shape836.setUSE("HAnimJointShape")

Transform835.addChild(Shape836)

HAnimSegment833.addChild(Transform835)

HAnimJoint832.addChild(HAnimSegment833)

HAnimJoint708.addChild(HAnimJoint832)
HAnimJoint837 = x3d.HAnimJoint()
HAnimJoint837.setDEF("hanim_l_eyebrow_joint")
HAnimJoint837.setName("l_eyebrow_joint")
HAnimJoint837.setCenter(x3d.doubleToFloat([0.0336,1.635,0.0506]))
HAnimSegment838 = x3d.HAnimSegment()
HAnimSegment838.setDEF("hanim_l_eyebrow")
HAnimSegment838.setName("l_eyebrow")
TouchSensor839 = x3d.TouchSensor()
TouchSensor839.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment838.addChild(TouchSensor839)
Transform840 = x3d.Transform()
Transform840.setTranslation(x3d.doubleToFloat([0.0336,1.635,0.0506]))
Shape841 = x3d.Shape()
Shape841.setUSE("HAnimJointShape")

Transform840.addChild(Shape841)

HAnimSegment838.addChild(Transform840)

HAnimJoint837.addChild(HAnimSegment838)

HAnimJoint708.addChild(HAnimJoint837)
HAnimJoint842 = x3d.HAnimJoint()
HAnimJoint842.setDEF("hanim_r_eyeball_joint")
HAnimJoint842.setName("r_eyeball_joint")
HAnimJoint842.setCenter(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
HAnimSegment843 = x3d.HAnimSegment()
HAnimSegment843.setDEF("hanim_r_eyeball")
HAnimSegment843.setName("r_eyeball")
TouchSensor844 = x3d.TouchSensor()
TouchSensor844.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment843.addChild(TouchSensor844)
Transform845 = x3d.Transform()
Transform845.setTranslation(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
Shape846 = x3d.Shape()
Shape846.setUSE("HAnimJointShape")

Transform845.addChild(Shape846)

HAnimSegment843.addChild(Transform845)
Shape847 = x3d.Shape()
LineSet848 = x3d.LineSet()
LineSet848.setVertexCount([2])
ColorRGBA849 = x3d.ColorRGBA()
ColorRGBA849.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet848.setColor(ColorRGBA849)
Coordinate850 = x3d.Coordinate()
Coordinate850.setPoint(x3d.doubleToFloat([-0.0336,1.6332,0.0502,-0.034,1.64,0.05]))

LineSet848.setCoord(Coordinate850)

Shape847.setGeometry(LineSet848)

HAnimSegment843.addChild(Shape847)
HAnimSite851 = x3d.HAnimSite()
HAnimSite851.setDEF("hanim_r_eyeball_site_view")
HAnimSite851.setName("r_eyeball_site_view")
HAnimSite851.setTranslation(x3d.doubleToFloat([-0.034,1.64,0.05]))
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite851.addChild(TouchSensor852)
Shape853 = x3d.Shape()
Shape853.setUSE("HAnimSiteShape")

HAnimSite851.addChild(Shape853)
Viewpoint854 = x3d.Viewpoint()
Viewpoint854.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint854.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint854.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint854.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite851.addChild(Viewpoint854)
Anchor855 = x3d.Anchor()
Anchor855.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor855.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD856 = x3d.LOD()
LOD856.setForceTransitions(True)
LOD856.setRange(x3d.doubleToFloat([0.04]))
WorldInfo857 = x3d.WorldInfo()
WorldInfo857.setInfo(["hide diamond when close"])

LOD856.addChild(WorldInfo857)
Shape858 = x3d.Shape()
Shape858.setUSE("HAnimSiteViewpointShape")

LOD856.addChild(Shape858)

Anchor855.addChild(LOD856)

HAnimSite851.addChild(Anchor855)

HAnimSegment843.addChild(HAnimSite851)

HAnimJoint842.addChild(HAnimSegment843)

HAnimJoint708.addChild(HAnimJoint842)
HAnimJoint859 = x3d.HAnimJoint()
HAnimJoint859.setDEF("hanim_r_eyelid_joint")
HAnimJoint859.setName("r_eyelid_joint")
HAnimJoint859.setCenter(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
HAnimSegment860 = x3d.HAnimSegment()
HAnimSegment860.setDEF("hanim_r_eyelid")
HAnimSegment860.setName("r_eyelid")
TouchSensor861 = x3d.TouchSensor()
TouchSensor861.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment860.addChild(TouchSensor861)
Transform862 = x3d.Transform()
Transform862.setTranslation(x3d.doubleToFloat([-0.0336,1.6332,0.0502]))
Shape863 = x3d.Shape()
Shape863.setUSE("HAnimJointShape")

Transform862.addChild(Shape863)

HAnimSegment860.addChild(Transform862)

HAnimJoint859.addChild(HAnimSegment860)

HAnimJoint708.addChild(HAnimJoint859)
HAnimJoint864 = x3d.HAnimJoint()
HAnimJoint864.setDEF("hanim_r_eyebrow_joint")
HAnimJoint864.setName("r_eyebrow_joint")
HAnimJoint864.setCenter(x3d.doubleToFloat([-0.0336,1.635,0.0506]))
HAnimSegment865 = x3d.HAnimSegment()
HAnimSegment865.setDEF("hanim_r_eyebrow")
HAnimSegment865.setName("r_eyebrow")
TouchSensor866 = x3d.TouchSensor()
TouchSensor866.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment865.addChild(TouchSensor866)
Transform867 = x3d.Transform()
Transform867.setTranslation(x3d.doubleToFloat([-0.0336,1.635,0.0506]))
Shape868 = x3d.Shape()
Shape868.setUSE("HAnimJointShape")

Transform867.addChild(Shape868)

HAnimSegment865.addChild(Transform867)

HAnimJoint864.addChild(HAnimSegment865)

HAnimJoint708.addChild(HAnimJoint864)
HAnimJoint869 = x3d.HAnimJoint()
HAnimJoint869.setDEF("hanim_temporomandibular")
HAnimJoint869.setName("temporomandibular")
HAnimJoint869.setCenter(x3d.doubleToFloat([0,1.63,0.015]))
HAnimSegment870 = x3d.HAnimSegment()
HAnimSegment870.setDEF("hanim_jaw")
HAnimSegment870.setName("jaw")
TouchSensor871 = x3d.TouchSensor()
TouchSensor871.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment870.addChild(TouchSensor871)
Transform872 = x3d.Transform()
Transform872.setTranslation(x3d.doubleToFloat([0,1.63,0.015]))
Shape873 = x3d.Shape()
Shape873.setUSE("HAnimJointShape")

Transform872.addChild(Shape873)

HAnimSegment870.addChild(Transform872)
Shape874 = x3d.Shape()
LineSet875 = x3d.LineSet()
LineSet875.setVertexCount([2])
ColorRGBA876 = x3d.ColorRGBA()
ColorRGBA876.setUSE("HAnimSiteLineColorRGBA")

LineSet875.setColor(ColorRGBA876)
Coordinate877 = x3d.Coordinate()
Coordinate877.setPoint(x3d.doubleToFloat([0,1.63,0.015,0.045,1.63,0]))

LineSet875.setCoord(Coordinate877)

Shape874.setGeometry(LineSet875)

HAnimSegment870.addChild(Shape874)
Shape878 = x3d.Shape()
LineSet879 = x3d.LineSet()
LineSet879.setVertexCount([2])
ColorRGBA880 = x3d.ColorRGBA()
ColorRGBA880.setUSE("HAnimSiteLineColorRGBA")

LineSet879.setColor(ColorRGBA880)
Coordinate881 = x3d.Coordinate()
Coordinate881.setPoint(x3d.doubleToFloat([0,1.63,0.015,-0.045,1.63,0]))

LineSet879.setCoord(Coordinate881)

Shape878.setGeometry(LineSet879)

HAnimSegment870.addChild(Shape878)
HAnimSite882 = x3d.HAnimSite()
HAnimSite882.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite882.setName("temporomandibular_l_site_pt")
HAnimSite882.setTranslation(x3d.doubleToFloat([0.045,1.63,0]))
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.setDescription("HAnimSite temporomandibular_l_site_pt")

HAnimSite882.addChild(TouchSensor883)
Shape884 = x3d.Shape()
Shape884.setUSE("HAnimSiteShape")

HAnimSite882.addChild(Shape884)

HAnimSegment870.addChild(HAnimSite882)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite885.setName("temporomandibular_r_site_pt")
HAnimSite885.setTranslation(x3d.doubleToFloat([-0.045,1.63,0]))
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.setDescription("HAnimSite temporomandibular_r_site_pt")

HAnimSite885.addChild(TouchSensor886)
Shape887 = x3d.Shape()
Shape887.setUSE("HAnimSiteShape")

HAnimSite885.addChild(Shape887)

HAnimSegment870.addChild(HAnimSite885)

HAnimJoint869.addChild(HAnimSegment870)

HAnimJoint708.addChild(HAnimJoint869)

HAnimJoint699.addChild(HAnimJoint708)

HAnimJoint690.addChild(HAnimJoint699)

HAnimJoint681.addChild(HAnimJoint690)

HAnimJoint672.addChild(HAnimJoint681)

HAnimJoint663.addChild(HAnimJoint672)

HAnimJoint654.addChild(HAnimJoint663)

HAnimJoint631.addChild(HAnimJoint654)

HAnimJoint600.addChild(HAnimJoint631)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.setDEF("hanim_l_sternoclavicular")
HAnimJoint888.setName("l_sternoclavicular")
HAnimJoint888.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.setDEF("hanim_l_clavicle")
HAnimSegment889.setName("l_clavicle")
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment889.addChild(TouchSensor890)
Transform891 = x3d.Transform()
Transform891.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Shape892 = x3d.Shape()
Shape892.setUSE("HAnimJointShape")

Transform891.addChild(Shape892)

HAnimSegment889.addChild(Transform891)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.setVertexCount([2])
ColorRGBA895 = x3d.ColorRGBA()
ColorRGBA895.setUSE("HAnimSegmentLineColorRGBA")

LineSet894.setColor(ColorRGBA895)
Coordinate896 = x3d.Coordinate()
Coordinate896.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

LineSet894.setCoord(Coordinate896)

Shape893.setGeometry(LineSet894)

HAnimSegment889.addChild(Shape893)
Shape897 = x3d.Shape()
LineSet898 = x3d.LineSet()
LineSet898.setVertexCount([2])
ColorRGBA899 = x3d.ColorRGBA()
ColorRGBA899.setUSE("HAnimSiteLineColorRGBA")

LineSet898.setColor(ColorRGBA899)
Coordinate900 = x3d.Coordinate()
Coordinate900.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]))

LineSet898.setCoord(Coordinate900)

Shape897.setGeometry(LineSet898)

HAnimSegment889.addChild(Shape897)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.setVertexCount([2])
ColorRGBA903 = x3d.ColorRGBA()
ColorRGBA903.setUSE("HAnimSiteLineColorRGBA")

LineSet902.setColor(ColorRGBA903)
Coordinate904 = x3d.Coordinate()
Coordinate904.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.2032,1.476,-0.049]))

LineSet902.setCoord(Coordinate904)

Shape901.setGeometry(LineSet902)

HAnimSegment889.addChild(Shape901)
Shape905 = x3d.Shape()
LineSet906 = x3d.LineSet()
LineSet906.setVertexCount([2])
ColorRGBA907 = x3d.ColorRGBA()
ColorRGBA907.setUSE("HAnimSiteLineColorRGBA")

LineSet906.setColor(ColorRGBA907)
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]))

LineSet906.setCoord(Coordinate908)

Shape905.setGeometry(LineSet906)

HAnimSegment889.addChild(Shape905)
Shape909 = x3d.Shape()
LineSet910 = x3d.LineSet()
LineSet910.setVertexCount([2])
ColorRGBA911 = x3d.ColorRGBA()
ColorRGBA911.setUSE("HAnimSiteLineColorRGBA")

LineSet910.setColor(ColorRGBA911)
Coordinate912 = x3d.Coordinate()
Coordinate912.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]))

LineSet910.setCoord(Coordinate912)

Shape909.setGeometry(LineSet910)

HAnimSegment889.addChild(Shape909)
HAnimSite913 = x3d.HAnimSite()
HAnimSite913.setDEF("hanim_l_clavicle_pt")
HAnimSite913.setName("l_clavicle_pt")
HAnimSite913.setTranslation(x3d.doubleToFloat([0.0271,1.4943,0.0394]))
TouchSensor914 = x3d.TouchSensor()
TouchSensor914.setDescription("HAnimSite l_clavicale_pt")

HAnimSite913.addChild(TouchSensor914)
Shape915 = x3d.Shape()
Shape915.setUSE("HAnimSiteShape")

HAnimSite913.addChild(Shape915)

HAnimSegment889.addChild(HAnimSite913)
HAnimSite916 = x3d.HAnimSite()
HAnimSite916.setDEF("hanim_l_acromion_pt")
HAnimSite916.setName("l_acromion_pt")
HAnimSite916.setTranslation(x3d.doubleToFloat([0.2032,1.476,-0.049]))
TouchSensor917 = x3d.TouchSensor()
TouchSensor917.setDescription("HAnimSite l_acromion_pt")

HAnimSite916.addChild(TouchSensor917)
Shape918 = x3d.Shape()
Shape918.setUSE("HAnimSiteShape")

HAnimSite916.addChild(Shape918)

HAnimSegment889.addChild(HAnimSite916)
HAnimSite919 = x3d.HAnimSite()
HAnimSite919.setDEF("hanim_l_axilla_proximal_pt")
HAnimSite919.setName("l_axilla_proximal_pt")
HAnimSite919.setTranslation(x3d.doubleToFloat([0.1777,1.4065,-0.0075]))
TouchSensor920 = x3d.TouchSensor()
TouchSensor920.setDescription("HAnimSite l_axilla_ant_pt")

HAnimSite919.addChild(TouchSensor920)
Shape921 = x3d.Shape()
Shape921.setUSE("HAnimSiteShape")

HAnimSite919.addChild(Shape921)

HAnimSegment889.addChild(HAnimSite919)
HAnimSite922 = x3d.HAnimSite()
HAnimSite922.setDEF("hanim_l_axilla_distal_pt")
HAnimSite922.setName("l_axilla_distal_pt")
HAnimSite922.setTranslation(x3d.doubleToFloat([0.1706,1.4072,-0.0875]))
TouchSensor923 = x3d.TouchSensor()
TouchSensor923.setDescription("HAnimSite l_axilla_post_pt")

HAnimSite922.addChild(TouchSensor923)
Shape924 = x3d.Shape()
Shape924.setUSE("HAnimSiteShape")

HAnimSite922.addChild(Shape924)

HAnimSegment889.addChild(HAnimSite922)

HAnimJoint888.addChild(HAnimSegment889)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setDEF("hanim_l_acromioclavicular")
HAnimJoint925.setName("l_acromioclavicular")
HAnimJoint925.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.setDEF("hanim_l_scapula")
HAnimSegment926.setName("l_scapula")
TouchSensor927 = x3d.TouchSensor()
TouchSensor927.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment926.addChild(TouchSensor927)
Transform928 = x3d.Transform()
Transform928.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Shape929 = x3d.Shape()
Shape929.setUSE("HAnimJointShape")

Transform928.addChild(Shape929)

HAnimSegment926.addChild(Transform928)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.setVertexCount([2])
ColorRGBA932 = x3d.ColorRGBA()
ColorRGBA932.setUSE("HAnimSegmentLineColorRGBA")

LineSet931.setColor(ColorRGBA932)
Coordinate933 = x3d.Coordinate()
Coordinate933.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]))

LineSet931.setCoord(Coordinate933)

Shape930.setGeometry(LineSet931)

HAnimSegment926.addChild(Shape930)

HAnimJoint925.addChild(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setDEF("hanim_l_shoulder")
HAnimJoint934.setName("l_shoulder")
HAnimJoint934.setCenter(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.setDEF("hanim_l_upperarm")
HAnimSegment935.setName("l_upperarm")
TouchSensor936 = x3d.TouchSensor()
TouchSensor936.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment935.addChild(TouchSensor936)
Transform937 = x3d.Transform()
Transform937.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Shape938 = x3d.Shape()
Shape938.setUSE("HAnimJointShape")

Transform937.addChild(Shape938)

HAnimSegment935.addChild(Transform937)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.setVertexCount([2])
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.setUSE("HAnimSegmentLineColorRGBA")

LineSet940.setColor(ColorRGBA941)
Coordinate942 = x3d.Coordinate()
Coordinate942.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]))

LineSet940.setCoord(Coordinate942)

Shape939.setGeometry(LineSet940)

HAnimSegment935.addChild(Shape939)
Shape943 = x3d.Shape()
LineSet944 = x3d.LineSet()
LineSet944.setVertexCount([2])
ColorRGBA945 = x3d.ColorRGBA()
ColorRGBA945.setUSE("HAnimSiteLineColorRGBA")

LineSet944.setColor(ColorRGBA945)
Coordinate946 = x3d.Coordinate()
Coordinate946.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]))

LineSet944.setCoord(Coordinate946)

Shape943.setGeometry(LineSet944)

HAnimSegment935.addChild(Shape943)
HAnimSite947 = x3d.HAnimSite()
HAnimSite947.setDEF("hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite947.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite947.setTranslation(x3d.doubleToFloat([0.228,1.1482,-0.11]))
TouchSensor948 = x3d.TouchSensor()
TouchSensor948.setDescription("HAnimSite l_humeral_lateral_epicn_pt")

HAnimSite947.addChild(TouchSensor948)
Shape949 = x3d.Shape()
Shape949.setUSE("HAnimSiteShape")

HAnimSite947.addChild(Shape949)

HAnimSegment935.addChild(HAnimSite947)

HAnimJoint934.addChild(HAnimSegment935)
HAnimJoint950 = x3d.HAnimJoint()
HAnimJoint950.setDEF("hanim_l_elbow")
HAnimJoint950.setName("l_elbow")
HAnimJoint950.setCenter(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
HAnimSegment951 = x3d.HAnimSegment()
HAnimSegment951.setDEF("hanim_l_forearm")
HAnimSegment951.setName("l_forearm")
TouchSensor952 = x3d.TouchSensor()
TouchSensor952.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment951.addChild(TouchSensor952)
Transform953 = x3d.Transform()
Transform953.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Shape954 = x3d.Shape()
Shape954.setUSE("HAnimJointShape")

Transform953.addChild(Shape954)

HAnimSegment951.addChild(Transform953)
Shape955 = x3d.Shape()
LineSet956 = x3d.LineSet()
LineSet956.setVertexCount([2])
ColorRGBA957 = x3d.ColorRGBA()
ColorRGBA957.setUSE("HAnimSegmentLineColorRGBA")

LineSet956.setColor(ColorRGBA957)
Coordinate958 = x3d.Coordinate()
Coordinate958.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]))

LineSet956.setCoord(Coordinate958)

Shape955.setGeometry(LineSet956)

HAnimSegment951.addChild(Shape955)
Shape959 = x3d.Shape()
LineSet960 = x3d.LineSet()
LineSet960.setVertexCount([2])
ColorRGBA961 = x3d.ColorRGBA()
ColorRGBA961.setUSE("HAnimSiteLineColorRGBA")

LineSet960.setColor(ColorRGBA961)
Coordinate962 = x3d.Coordinate()
Coordinate962.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]))

LineSet960.setCoord(Coordinate962)

Shape959.setGeometry(LineSet960)

HAnimSegment951.addChild(Shape959)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.setVertexCount([2])
ColorRGBA965 = x3d.ColorRGBA()
ColorRGBA965.setUSE("HAnimSiteLineColorRGBA")

LineSet964.setColor(ColorRGBA965)
Coordinate966 = x3d.Coordinate()
Coordinate966.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]))

LineSet964.setCoord(Coordinate966)

Shape963.setGeometry(LineSet964)

HAnimSegment951.addChild(Shape963)
Shape967 = x3d.Shape()
LineSet968 = x3d.LineSet()
LineSet968.setVertexCount([2])
ColorRGBA969 = x3d.ColorRGBA()
ColorRGBA969.setUSE("HAnimSiteLineColorRGBA")

LineSet968.setColor(ColorRGBA969)
Coordinate970 = x3d.Coordinate()
Coordinate970.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]))

LineSet968.setCoord(Coordinate970)

Shape967.setGeometry(LineSet968)

HAnimSegment951.addChild(Shape967)
Shape971 = x3d.Shape()
LineSet972 = x3d.LineSet()
LineSet972.setVertexCount([2])
ColorRGBA973 = x3d.ColorRGBA()
ColorRGBA973.setUSE("HAnimSiteLineColorRGBA")

LineSet972.setColor(ColorRGBA973)
Coordinate974 = x3d.Coordinate()
Coordinate974.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]))

LineSet972.setCoord(Coordinate974)

Shape971.setGeometry(LineSet972)

HAnimSegment951.addChild(Shape971)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.setDEF("hanim_l_radial_styloid_pt")
HAnimSite975.setName("l_radial_styloid_pt")
HAnimSite975.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
TouchSensor976 = x3d.TouchSensor()
TouchSensor976.setDescription("HAnimSite l_radial_styloid_pt")

HAnimSite975.addChild(TouchSensor976)
Shape977 = x3d.Shape()
Shape977.setUSE("HAnimSiteShape")

HAnimSite975.addChild(Shape977)

HAnimSegment951.addChild(HAnimSite975)
HAnimSite978 = x3d.HAnimSite()
HAnimSite978.setDEF("hanim_l_olecranon_pt")
HAnimSite978.setName("l_olecranon_pt")
HAnimSite978.setTranslation(x3d.doubleToFloat([0.1962,1.1375,-0.1123]))
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.setDescription("HAnimSite l_olecranon_pt")

HAnimSite978.addChild(TouchSensor979)
Shape980 = x3d.Shape()
Shape980.setUSE("HAnimSiteShape")

HAnimSite978.addChild(Shape980)

HAnimSegment951.addChild(HAnimSite978)
HAnimSite981 = x3d.HAnimSite()
HAnimSite981.setDEF("hanim_l_humeral_medial_epicondyle_pt")
HAnimSite981.setName("l_humeral_medial_epicondyle_pt")
HAnimSite981.setTranslation(x3d.doubleToFloat([0.1735,1.1272,-0.1113]))
TouchSensor982 = x3d.TouchSensor()
TouchSensor982.setDescription("HAnimSite l_humeral_medial_epicn_pt")

HAnimSite981.addChild(TouchSensor982)
Shape983 = x3d.Shape()
Shape983.setUSE("HAnimSiteShape")

HAnimSite981.addChild(Shape983)

HAnimSegment951.addChild(HAnimSite981)
HAnimSite984 = x3d.HAnimSite()
HAnimSite984.setDEF("hanim_l_radiale_pt")
HAnimSite984.setName("l_radiale_pt")
HAnimSite984.setTranslation(x3d.doubleToFloat([0.2182,1.1212,-0.1167]))
TouchSensor985 = x3d.TouchSensor()
TouchSensor985.setDescription("HAnimSite l_radiale_pt")

HAnimSite984.addChild(TouchSensor985)
Shape986 = x3d.Shape()
Shape986.setUSE("HAnimSiteShape")

HAnimSite984.addChild(Shape986)

HAnimSegment951.addChild(HAnimSite984)

HAnimJoint950.addChild(HAnimSegment951)
HAnimJoint987 = x3d.HAnimJoint()
HAnimJoint987.setDEF("hanim_l_radiocarpal")
HAnimJoint987.setName("l_radiocarpal")
HAnimJoint987.setCenter(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.setDEF("hanim_l_carpal")
HAnimSegment988.setName("l_carpal")
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal")

HAnimSegment988.addChild(TouchSensor989)
Transform990 = x3d.Transform()
Transform990.setTranslation(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
Shape991 = x3d.Shape()
Shape991.setUSE("HAnimJointShape")

Transform990.addChild(Shape991)

HAnimSegment988.addChild(Transform990)
Shape992 = x3d.Shape()
LineSet993 = x3d.LineSet()
LineSet993.setVertexCount([2])
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.setUSE("HAnimSegmentLineColorRGBA")

LineSet993.setColor(ColorRGBA994)
Coordinate995 = x3d.Coordinate()
Coordinate995.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]))

LineSet993.setCoord(Coordinate995)

Shape992.setGeometry(LineSet993)

HAnimSegment988.addChild(Shape992)
Shape996 = x3d.Shape()
LineSet997 = x3d.LineSet()
LineSet997.setVertexCount([2])
ColorRGBA998 = x3d.ColorRGBA()
ColorRGBA998.setUSE("HAnimSegmentLineColorRGBA")

LineSet997.setColor(ColorRGBA998)
Coordinate999 = x3d.Coordinate()
Coordinate999.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]))

LineSet997.setCoord(Coordinate999)

Shape996.setGeometry(LineSet997)

HAnimSegment988.addChild(Shape996)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.setVertexCount([2])
ColorRGBA1002 = x3d.ColorRGBA()
ColorRGBA1002.setUSE("HAnimSegmentLineColorRGBA")

LineSet1001.setColor(ColorRGBA1002)
Coordinate1003 = x3d.Coordinate()
Coordinate1003.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]))

LineSet1001.setCoord(Coordinate1003)

Shape1000.setGeometry(LineSet1001)

HAnimSegment988.addChild(Shape1000)
Shape1004 = x3d.Shape()
LineSet1005 = x3d.LineSet()
LineSet1005.setVertexCount([2])
ColorRGBA1006 = x3d.ColorRGBA()
ColorRGBA1006.setUSE("HAnimSegmentLineColorRGBA")

LineSet1005.setColor(ColorRGBA1006)
Coordinate1007 = x3d.Coordinate()
Coordinate1007.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]))

LineSet1005.setCoord(Coordinate1007)

Shape1004.setGeometry(LineSet1005)

HAnimSegment988.addChild(Shape1004)
Shape1008 = x3d.Shape()
LineSet1009 = x3d.LineSet()
LineSet1009.setVertexCount([2])
ColorRGBA1010 = x3d.ColorRGBA()
ColorRGBA1010.setUSE("HAnimSegmentLineColorRGBA")

LineSet1009.setColor(ColorRGBA1010)
Coordinate1011 = x3d.Coordinate()
Coordinate1011.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]))

LineSet1009.setCoord(Coordinate1011)

Shape1008.setGeometry(LineSet1009)

HAnimSegment988.addChild(Shape1008)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.setVertexCount([2])
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.setUSE("HAnimSiteLineColorRGBA")

LineSet1013.setColor(ColorRGBA1014)
Coordinate1015 = x3d.Coordinate()
Coordinate1015.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]))

LineSet1013.setCoord(Coordinate1015)

Shape1012.setGeometry(LineSet1013)

HAnimSegment988.addChild(Shape1012)
Shape1016 = x3d.Shape()
LineSet1017 = x3d.LineSet()
LineSet1017.setVertexCount([2])
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.setUSE("HAnimSiteLineColorRGBA")

LineSet1017.setColor(ColorRGBA1018)
Coordinate1019 = x3d.Coordinate()
Coordinate1019.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]))

LineSet1017.setCoord(Coordinate1019)

Shape1016.setGeometry(LineSet1017)

HAnimSegment988.addChild(Shape1016)
Shape1020 = x3d.Shape()
LineSet1021 = x3d.LineSet()
LineSet1021.setVertexCount([2])
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.setUSE("HAnimSiteLineColorRGBA")

LineSet1021.setColor(ColorRGBA1022)
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]))

LineSet1021.setCoord(Coordinate1023)

Shape1020.setGeometry(LineSet1021)

HAnimSegment988.addChild(Shape1020)
Shape1024 = x3d.Shape()
LineSet1025 = x3d.LineSet()
LineSet1025.setVertexCount([2])
ColorRGBA1026 = x3d.ColorRGBA()
ColorRGBA1026.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1025.setColor(ColorRGBA1026)
Coordinate1027 = x3d.Coordinate()
Coordinate1027.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.3,0.75,0.45]))

LineSet1025.setCoord(Coordinate1027)

Shape1024.setGeometry(LineSet1025)

HAnimSegment988.addChild(Shape1024)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1028.setName("l_metacarpal_phalanx_2_pt")
HAnimSite1028.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
TouchSensor1029 = x3d.TouchSensor()
TouchSensor1029.setDescription("HAnimSite l_metacarpal_pha2_pt")

HAnimSite1028.addChild(TouchSensor1029)
Shape1030 = x3d.Shape()
Shape1030.setUSE("HAnimSiteShape")

HAnimSite1028.addChild(Shape1030)

HAnimSegment988.addChild(HAnimSite1028)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1031.setName("l_ulnar_styloid_pt")
HAnimSite1031.setTranslation(x3d.doubleToFloat([0.2142,0.8529,-0.0648]))
TouchSensor1032 = x3d.TouchSensor()
TouchSensor1032.setDescription("HAnimSite l_ulnar_styloid_pt")

HAnimSite1031.addChild(TouchSensor1032)
Shape1033 = x3d.Shape()
Shape1033.setUSE("HAnimSiteShape")

HAnimSite1031.addChild(Shape1033)

HAnimSegment988.addChild(HAnimSite1031)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1034.setName("l_metacarpal_phalanx_5_pt")
HAnimSite1034.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
TouchSensor1035 = x3d.TouchSensor()
TouchSensor1035.setDescription("HAnimSite l_metacarpal_pha5_pt")

HAnimSite1034.addChild(TouchSensor1035)
Shape1036 = x3d.Shape()
Shape1036.setUSE("HAnimSiteShape")

HAnimSite1034.addChild(Shape1036)

HAnimSegment988.addChild(HAnimSite1034)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.setDEF("hanim_l_hand_front_view")
HAnimSite1037.setName("l_hand_front_view")
HAnimSite1037.setTranslation(x3d.doubleToFloat([0.3,0.75,0.45]))
TouchSensor1038 = x3d.TouchSensor()
TouchSensor1038.setDescription("HAnimSite l_hand_front_view")

HAnimSite1037.addChild(TouchSensor1038)
Shape1039 = x3d.Shape()
Shape1039.setUSE("HAnimSiteShape")

HAnimSite1037.addChild(Shape1039)
Viewpoint1040 = x3d.Viewpoint()
Viewpoint1040.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1040.setDescription("left hand front")
Viewpoint1040.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1040.setCenterOfRotation(x3d.doubleToFloat([0,0.7,0]))

HAnimSite1037.addChild(Viewpoint1040)
Anchor1041 = x3d.Anchor()
Anchor1041.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1041.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1042 = x3d.LOD()
LOD1042.setForceTransitions(True)
LOD1042.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1043 = x3d.WorldInfo()
WorldInfo1043.setInfo(["hide diamond when close"])

LOD1042.addChild(WorldInfo1043)
Shape1044 = x3d.Shape()
Shape1044.setUSE("HAnimSiteViewpointShape")

LOD1042.addChild(Shape1044)

Anchor1041.addChild(LOD1042)

HAnimSite1037.addChild(Anchor1041)

HAnimSegment988.addChild(HAnimSite1037)

HAnimJoint987.addChild(HAnimSegment988)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1045.setName("l_carpometacarpal_1")
HAnimJoint1045.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimSegment1046 = x3d.HAnimSegment()
HAnimSegment1046.setDEF("hanim_l_metacarpal_1")
HAnimSegment1046.setName("l_metacarpal_1")
TouchSensor1047 = x3d.TouchSensor()
TouchSensor1047.setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1")

HAnimSegment1046.addChild(TouchSensor1047)
Transform1048 = x3d.Transform()
Transform1048.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape1049 = x3d.Shape()
Shape1049.setUSE("HAnimJointShape")

Transform1048.addChild(Shape1049)

HAnimSegment1046.addChild(Transform1048)
Shape1050 = x3d.Shape()
LineSet1051 = x3d.LineSet()
LineSet1051.setVertexCount([2])
ColorRGBA1052 = x3d.ColorRGBA()
ColorRGBA1052.setUSE("HAnimSegmentLineColorRGBA")

LineSet1051.setColor(ColorRGBA1052)
Coordinate1053 = x3d.Coordinate()
Coordinate1053.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

LineSet1051.setCoord(Coordinate1053)

Shape1050.setGeometry(LineSet1051)

HAnimSegment1046.addChild(Shape1050)

HAnimJoint1045.addChild(HAnimSegment1046)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1054.setName("l_metacarpophalangeal_1")
HAnimJoint1054.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimSegment1055 = x3d.HAnimSegment()
HAnimSegment1055.setDEF("hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1055.setName("l_carpal_proximal_phalanx_1")
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1")

HAnimSegment1055.addChild(TouchSensor1056)
Transform1057 = x3d.Transform()
Transform1057.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape1058 = x3d.Shape()
Shape1058.setUSE("HAnimJointShape")

Transform1057.addChild(Shape1058)

HAnimSegment1055.addChild(Transform1057)
Shape1059 = x3d.Shape()
LineSet1060 = x3d.LineSet()
LineSet1060.setVertexCount([2])
ColorRGBA1061 = x3d.ColorRGBA()
ColorRGBA1061.setUSE("HAnimSegmentLineColorRGBA")

LineSet1060.setColor(ColorRGBA1061)
Coordinate1062 = x3d.Coordinate()
Coordinate1062.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

LineSet1060.setCoord(Coordinate1062)

Shape1059.setGeometry(LineSet1060)

HAnimSegment1055.addChild(Shape1059)

HAnimJoint1054.addChild(HAnimSegment1055)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1063.setName("l_carpal_interphalangeal_1")
HAnimJoint1063.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.setDEF("hanim_l_carpal_distal_phalanx_1")
HAnimSegment1064.setName("l_carpal_distal_phalanx_1")
TouchSensor1065 = x3d.TouchSensor()
TouchSensor1065.setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1")

HAnimSegment1064.addChild(TouchSensor1065)
Transform1066 = x3d.Transform()
Transform1066.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape1067 = x3d.Shape()
Shape1067.setUSE("HAnimJointShape")

Transform1066.addChild(Shape1067)

HAnimSegment1064.addChild(Transform1066)
Shape1068 = x3d.Shape()
LineSet1069 = x3d.LineSet()
LineSet1069.setVertexCount([2])
ColorRGBA1070 = x3d.ColorRGBA()
ColorRGBA1070.setUSE("HAnimSiteLineColorRGBA")

LineSet1069.setColor(ColorRGBA1070)
Coordinate1071 = x3d.Coordinate()
Coordinate1071.setPoint(x3d.doubleToFloat([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]))

LineSet1069.setCoord(Coordinate1071)

Shape1068.setGeometry(LineSet1069)

HAnimSegment1064.addChild(Shape1068)
HAnimSite1072 = x3d.HAnimSite()
HAnimSite1072.setDEF("hanim_l_carpal_distal_phalanx_1_pt")
HAnimSite1072.setName("l_carpal_distal_phalanx_1_pt")
HAnimSite1072.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
TouchSensor1073 = x3d.TouchSensor()
TouchSensor1073.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1072.addChild(TouchSensor1073)
Shape1074 = x3d.Shape()
Shape1074.setUSE("HAnimSiteShape")

HAnimSite1072.addChild(Shape1074)

HAnimSegment1064.addChild(HAnimSite1072)

HAnimJoint1063.addChild(HAnimSegment1064)

HAnimJoint1054.addChild(HAnimJoint1063)

HAnimJoint1045.addChild(HAnimJoint1054)

HAnimJoint987.addChild(HAnimJoint1045)
HAnimJoint1075 = x3d.HAnimJoint()
HAnimJoint1075.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1075.setName("l_carpometacarpal_2")
HAnimJoint1075.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimSegment1076 = x3d.HAnimSegment()
HAnimSegment1076.setDEF("hanim_l_metacarpal_2")
HAnimSegment1076.setName("l_metacarpal_2")
TouchSensor1077 = x3d.TouchSensor()
TouchSensor1077.setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2")

HAnimSegment1076.addChild(TouchSensor1077)
Transform1078 = x3d.Transform()
Transform1078.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape1079 = x3d.Shape()
Shape1079.setUSE("HAnimJointShape")

Transform1078.addChild(Shape1079)

HAnimSegment1076.addChild(Transform1078)
Shape1080 = x3d.Shape()
LineSet1081 = x3d.LineSet()
LineSet1081.setVertexCount([2])
ColorRGBA1082 = x3d.ColorRGBA()
ColorRGBA1082.setUSE("HAnimSegmentLineColorRGBA")

LineSet1081.setColor(ColorRGBA1082)
Coordinate1083 = x3d.Coordinate()
Coordinate1083.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

LineSet1081.setCoord(Coordinate1083)

Shape1080.setGeometry(LineSet1081)

HAnimSegment1076.addChild(Shape1080)

HAnimJoint1075.addChild(HAnimSegment1076)
HAnimJoint1084 = x3d.HAnimJoint()
HAnimJoint1084.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1084.setName("l_metacarpophalangeal_2")
HAnimJoint1084.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimSegment1085 = x3d.HAnimSegment()
HAnimSegment1085.setDEF("hanim_l_carpal_proximal_phalanx_2")
HAnimSegment1085.setName("l_carpal_proximal_phalanx_2")
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2")

HAnimSegment1085.addChild(TouchSensor1086)
Transform1087 = x3d.Transform()
Transform1087.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape1088 = x3d.Shape()
Shape1088.setUSE("HAnimJointShape")

Transform1087.addChild(Shape1088)

HAnimSegment1085.addChild(Transform1087)
Shape1089 = x3d.Shape()
LineSet1090 = x3d.LineSet()
LineSet1090.setVertexCount([2])
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.setUSE("HAnimSegmentLineColorRGBA")

LineSet1090.setColor(ColorRGBA1091)
Coordinate1092 = x3d.Coordinate()
Coordinate1092.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

LineSet1090.setCoord(Coordinate1092)

Shape1089.setGeometry(LineSet1090)

HAnimSegment1085.addChild(Shape1089)

HAnimJoint1084.addChild(HAnimSegment1085)
HAnimJoint1093 = x3d.HAnimJoint()
HAnimJoint1093.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1093.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1093.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimSegment1094 = x3d.HAnimSegment()
HAnimSegment1094.setDEF("hanim_l_carpal_middle_phalanx_2")
HAnimSegment1094.setName("l_carpal_middle_phalanx_2")
TouchSensor1095 = x3d.TouchSensor()
TouchSensor1095.setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2")

HAnimSegment1094.addChild(TouchSensor1095)
Transform1096 = x3d.Transform()
Transform1096.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape1097 = x3d.Shape()
Shape1097.setUSE("HAnimJointShape")

Transform1096.addChild(Shape1097)

HAnimSegment1094.addChild(Transform1096)
Shape1098 = x3d.Shape()
LineSet1099 = x3d.LineSet()
LineSet1099.setVertexCount([2])
ColorRGBA1100 = x3d.ColorRGBA()
ColorRGBA1100.setUSE("HAnimSegmentLineColorRGBA")

LineSet1099.setColor(ColorRGBA1100)
Coordinate1101 = x3d.Coordinate()
Coordinate1101.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

LineSet1099.setCoord(Coordinate1101)

Shape1098.setGeometry(LineSet1099)

HAnimSegment1094.addChild(Shape1098)

HAnimJoint1093.addChild(HAnimSegment1094)
HAnimJoint1102 = x3d.HAnimJoint()
HAnimJoint1102.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1102.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1102.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimSegment1103 = x3d.HAnimSegment()
HAnimSegment1103.setDEF("hanim_l_carpal_distal_phalanx_2")
HAnimSegment1103.setName("l_carpal_distal_phalanx_2")
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2")

HAnimSegment1103.addChild(TouchSensor1104)
Transform1105 = x3d.Transform()
Transform1105.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape1106 = x3d.Shape()
Shape1106.setUSE("HAnimJointShape")

Transform1105.addChild(Shape1106)

HAnimSegment1103.addChild(Transform1105)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.setVertexCount([2])
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.setUSE("HAnimSiteLineColorRGBA")

LineSet1108.setColor(ColorRGBA1109)
Coordinate1110 = x3d.Coordinate()
Coordinate1110.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]))

LineSet1108.setCoord(Coordinate1110)

Shape1107.setGeometry(LineSet1108)

HAnimSegment1103.addChild(Shape1107)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.setVertexCount([2])
ColorRGBA1113 = x3d.ColorRGBA()
ColorRGBA1113.setUSE("HAnimSiteLineColorRGBA")

LineSet1112.setColor(ColorRGBA1113)
Coordinate1114 = x3d.Coordinate()
Coordinate1114.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]))

LineSet1112.setCoord(Coordinate1114)

Shape1111.setGeometry(LineSet1112)

HAnimSegment1103.addChild(Shape1111)
HAnimSite1115 = x3d.HAnimSite()
HAnimSite1115.setDEF("hanim_l_carpal_distal_phalanx_2_pt")
HAnimSite1115.setName("l_carpal_distal_phalanx_2_pt")
HAnimSite1115.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
TouchSensor1116 = x3d.TouchSensor()
TouchSensor1116.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1115.addChild(TouchSensor1116)
Shape1117 = x3d.Shape()
Shape1117.setUSE("HAnimSiteShape")

HAnimSite1115.addChild(Shape1117)

HAnimSegment1103.addChild(HAnimSite1115)
HAnimSite1118 = x3d.HAnimSite()
HAnimSite1118.setDEF("hanim_l_dactylion_pt")
HAnimSite1118.setName("l_dactylion_pt")
HAnimSite1118.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
TouchSensor1119 = x3d.TouchSensor()
TouchSensor1119.setDescription("HAnimSite l_dactylion_pt")

HAnimSite1118.addChild(TouchSensor1119)
Shape1120 = x3d.Shape()
Shape1120.setUSE("HAnimSiteShape")

HAnimSite1118.addChild(Shape1120)

HAnimSegment1103.addChild(HAnimSite1118)

HAnimJoint1102.addChild(HAnimSegment1103)

HAnimJoint1093.addChild(HAnimJoint1102)

HAnimJoint1084.addChild(HAnimJoint1093)

HAnimJoint1075.addChild(HAnimJoint1084)

HAnimJoint987.addChild(HAnimJoint1075)
HAnimJoint1121 = x3d.HAnimJoint()
HAnimJoint1121.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1121.setName("l_carpometacarpal_3")
HAnimJoint1121.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimSegment1122 = x3d.HAnimSegment()
HAnimSegment1122.setDEF("hanim_l_metacarpal_3")
HAnimSegment1122.setName("l_metacarpal_3")
TouchSensor1123 = x3d.TouchSensor()
TouchSensor1123.setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3")

HAnimSegment1122.addChild(TouchSensor1123)
Transform1124 = x3d.Transform()
Transform1124.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Shape1125 = x3d.Shape()
Shape1125.setUSE("HAnimJointShape")

Transform1124.addChild(Shape1125)

HAnimSegment1122.addChild(Transform1124)
Shape1126 = x3d.Shape()
LineSet1127 = x3d.LineSet()
LineSet1127.setVertexCount([2])
ColorRGBA1128 = x3d.ColorRGBA()
ColorRGBA1128.setUSE("HAnimSegmentLineColorRGBA")

LineSet1127.setColor(ColorRGBA1128)
Coordinate1129 = x3d.Coordinate()
Coordinate1129.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

LineSet1127.setCoord(Coordinate1129)

Shape1126.setGeometry(LineSet1127)

HAnimSegment1122.addChild(Shape1126)

HAnimJoint1121.addChild(HAnimSegment1122)
HAnimJoint1130 = x3d.HAnimJoint()
HAnimJoint1130.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1130.setName("l_metacarpophalangeal_3")
HAnimJoint1130.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimSegment1131 = x3d.HAnimSegment()
HAnimSegment1131.setDEF("hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1131.setName("l_carpal_proximal_phalanx_3")
TouchSensor1132 = x3d.TouchSensor()
TouchSensor1132.setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3")

HAnimSegment1131.addChild(TouchSensor1132)
Transform1133 = x3d.Transform()
Transform1133.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Shape1134 = x3d.Shape()
Shape1134.setUSE("HAnimJointShape")

Transform1133.addChild(Shape1134)

HAnimSegment1131.addChild(Transform1133)
Shape1135 = x3d.Shape()
LineSet1136 = x3d.LineSet()
LineSet1136.setVertexCount([2])
ColorRGBA1137 = x3d.ColorRGBA()
ColorRGBA1137.setUSE("HAnimSegmentLineColorRGBA")

LineSet1136.setColor(ColorRGBA1137)
Coordinate1138 = x3d.Coordinate()
Coordinate1138.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

LineSet1136.setCoord(Coordinate1138)

Shape1135.setGeometry(LineSet1136)

HAnimSegment1131.addChild(Shape1135)

HAnimJoint1130.addChild(HAnimSegment1131)
HAnimJoint1139 = x3d.HAnimJoint()
HAnimJoint1139.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1139.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1139.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimSegment1140 = x3d.HAnimSegment()
HAnimSegment1140.setDEF("hanim_l_carpal_middle_phalanx_3")
HAnimSegment1140.setName("l_carpal_middle_phalanx_3")
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3")

HAnimSegment1140.addChild(TouchSensor1141)
Transform1142 = x3d.Transform()
Transform1142.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Shape1143 = x3d.Shape()
Shape1143.setUSE("HAnimJointShape")

Transform1142.addChild(Shape1143)

HAnimSegment1140.addChild(Transform1142)
Shape1144 = x3d.Shape()
LineSet1145 = x3d.LineSet()
LineSet1145.setVertexCount([2])
ColorRGBA1146 = x3d.ColorRGBA()
ColorRGBA1146.setUSE("HAnimSegmentLineColorRGBA")

LineSet1145.setColor(ColorRGBA1146)
Coordinate1147 = x3d.Coordinate()
Coordinate1147.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

LineSet1145.setCoord(Coordinate1147)

Shape1144.setGeometry(LineSet1145)

HAnimSegment1140.addChild(Shape1144)

HAnimJoint1139.addChild(HAnimSegment1140)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1148.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1148.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.setDEF("hanim_l_carpal_distal_phalanx_3")
HAnimSegment1149.setName("l_carpal_distal_phalanx_3")
TouchSensor1150 = x3d.TouchSensor()
TouchSensor1150.setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3")

HAnimSegment1149.addChild(TouchSensor1150)
Transform1151 = x3d.Transform()
Transform1151.setTranslation(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
Shape1152 = x3d.Shape()
Shape1152.setUSE("HAnimJointShape")

Transform1151.addChild(Shape1152)

HAnimSegment1149.addChild(Transform1151)
Shape1153 = x3d.Shape()
LineSet1154 = x3d.LineSet()
LineSet1154.setVertexCount([2])
ColorRGBA1155 = x3d.ColorRGBA()
ColorRGBA1155.setUSE("HAnimSiteLineColorRGBA")

LineSet1154.setColor(ColorRGBA1155)
Coordinate1156 = x3d.Coordinate()
Coordinate1156.setPoint(x3d.doubleToFloat([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]))

LineSet1154.setCoord(Coordinate1156)

Shape1153.setGeometry(LineSet1154)

HAnimSegment1149.addChild(Shape1153)
HAnimSite1157 = x3d.HAnimSite()
HAnimSite1157.setDEF("hanim_l_carpal_distal_phalanx_3_pt")
HAnimSite1157.setName("l_carpal_distal_phalanx_3_pt")
HAnimSite1157.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
TouchSensor1158 = x3d.TouchSensor()
TouchSensor1158.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1157.addChild(TouchSensor1158)
Shape1159 = x3d.Shape()
Shape1159.setUSE("HAnimSiteShape")

HAnimSite1157.addChild(Shape1159)

HAnimSegment1149.addChild(HAnimSite1157)

HAnimJoint1148.addChild(HAnimSegment1149)

HAnimJoint1139.addChild(HAnimJoint1148)

HAnimJoint1130.addChild(HAnimJoint1139)

HAnimJoint1121.addChild(HAnimJoint1130)

HAnimJoint987.addChild(HAnimJoint1121)
HAnimJoint1160 = x3d.HAnimJoint()
HAnimJoint1160.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1160.setName("l_carpometacarpal_4")
HAnimJoint1160.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimSegment1161 = x3d.HAnimSegment()
HAnimSegment1161.setDEF("hanim_l_metacarpal_4")
HAnimSegment1161.setName("l_metacarpal_4")
TouchSensor1162 = x3d.TouchSensor()
TouchSensor1162.setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4")

HAnimSegment1161.addChild(TouchSensor1162)
Transform1163 = x3d.Transform()
Transform1163.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Shape1164 = x3d.Shape()
Shape1164.setUSE("HAnimJointShape")

Transform1163.addChild(Shape1164)

HAnimSegment1161.addChild(Transform1163)
Shape1165 = x3d.Shape()
LineSet1166 = x3d.LineSet()
LineSet1166.setVertexCount([2])
ColorRGBA1167 = x3d.ColorRGBA()
ColorRGBA1167.setUSE("HAnimSegmentLineColorRGBA")

LineSet1166.setColor(ColorRGBA1167)
Coordinate1168 = x3d.Coordinate()
Coordinate1168.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

LineSet1166.setCoord(Coordinate1168)

Shape1165.setGeometry(LineSet1166)

HAnimSegment1161.addChild(Shape1165)

HAnimJoint1160.addChild(HAnimSegment1161)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1169.setName("l_metacarpophalangeal_4")
HAnimJoint1169.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.setDEF("hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1170.setName("l_carpal_proximal_phalanx_4")
TouchSensor1171 = x3d.TouchSensor()
TouchSensor1171.setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4")

HAnimSegment1170.addChild(TouchSensor1171)
Transform1172 = x3d.Transform()
Transform1172.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Shape1173 = x3d.Shape()
Shape1173.setUSE("HAnimJointShape")

Transform1172.addChild(Shape1173)

HAnimSegment1170.addChild(Transform1172)
Shape1174 = x3d.Shape()
LineSet1175 = x3d.LineSet()
LineSet1175.setVertexCount([2])
ColorRGBA1176 = x3d.ColorRGBA()
ColorRGBA1176.setUSE("HAnimSegmentLineColorRGBA")

LineSet1175.setColor(ColorRGBA1176)
Coordinate1177 = x3d.Coordinate()
Coordinate1177.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

LineSet1175.setCoord(Coordinate1177)

Shape1174.setGeometry(LineSet1175)

HAnimSegment1170.addChild(Shape1174)

HAnimJoint1169.addChild(HAnimSegment1170)
HAnimJoint1178 = x3d.HAnimJoint()
HAnimJoint1178.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1178.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1178.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimSegment1179 = x3d.HAnimSegment()
HAnimSegment1179.setDEF("hanim_l_carpal_middle_phalanx_4")
HAnimSegment1179.setName("l_carpal_middle_phalanx_4")
TouchSensor1180 = x3d.TouchSensor()
TouchSensor1180.setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4")

HAnimSegment1179.addChild(TouchSensor1180)
Transform1181 = x3d.Transform()
Transform1181.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Shape1182 = x3d.Shape()
Shape1182.setUSE("HAnimJointShape")

Transform1181.addChild(Shape1182)

HAnimSegment1179.addChild(Transform1181)
Shape1183 = x3d.Shape()
LineSet1184 = x3d.LineSet()
LineSet1184.setVertexCount([2])
ColorRGBA1185 = x3d.ColorRGBA()
ColorRGBA1185.setUSE("HAnimSegmentLineColorRGBA")

LineSet1184.setColor(ColorRGBA1185)
Coordinate1186 = x3d.Coordinate()
Coordinate1186.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

LineSet1184.setCoord(Coordinate1186)

Shape1183.setGeometry(LineSet1184)

HAnimSegment1179.addChild(Shape1183)

HAnimJoint1178.addChild(HAnimSegment1179)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1187.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1187.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimSegment1188 = x3d.HAnimSegment()
HAnimSegment1188.setDEF("hanim_l_carpal_distal_phalanx_4")
HAnimSegment1188.setName("l_carpal_distal_phalanx_4")
TouchSensor1189 = x3d.TouchSensor()
TouchSensor1189.setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4")

HAnimSegment1188.addChild(TouchSensor1189)
Transform1190 = x3d.Transform()
Transform1190.setTranslation(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
Shape1191 = x3d.Shape()
Shape1191.setUSE("HAnimJointShape")

Transform1190.addChild(Shape1191)

HAnimSegment1188.addChild(Transform1190)
Shape1192 = x3d.Shape()
LineSet1193 = x3d.LineSet()
LineSet1193.setVertexCount([2])
ColorRGBA1194 = x3d.ColorRGBA()
ColorRGBA1194.setUSE("HAnimSiteLineColorRGBA")

LineSet1193.setColor(ColorRGBA1194)
Coordinate1195 = x3d.Coordinate()
Coordinate1195.setPoint(x3d.doubleToFloat([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]))

LineSet1193.setCoord(Coordinate1195)

Shape1192.setGeometry(LineSet1193)

HAnimSegment1188.addChild(Shape1192)
HAnimSite1196 = x3d.HAnimSite()
HAnimSite1196.setDEF("hanim_l_carpal_distal_phalanx_4_pt")
HAnimSite1196.setName("l_carpal_distal_phalanx_4_pt")
HAnimSite1196.setTranslation(x3d.doubleToFloat([0.2035,0.675,-0.0756]))
TouchSensor1197 = x3d.TouchSensor()
TouchSensor1197.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1196.addChild(TouchSensor1197)
Shape1198 = x3d.Shape()
Shape1198.setUSE("HAnimSiteShape")

HAnimSite1196.addChild(Shape1198)

HAnimSegment1188.addChild(HAnimSite1196)

HAnimJoint1187.addChild(HAnimSegment1188)

HAnimJoint1178.addChild(HAnimJoint1187)

HAnimJoint1169.addChild(HAnimJoint1178)

HAnimJoint1160.addChild(HAnimJoint1169)

HAnimJoint987.addChild(HAnimJoint1160)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1199.setName("l_carpometacarpal_5")
HAnimJoint1199.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimSegment1200 = x3d.HAnimSegment()
HAnimSegment1200.setDEF("hanim_l_metacarpal_5")
HAnimSegment1200.setName("l_metacarpal_5")
TouchSensor1201 = x3d.TouchSensor()
TouchSensor1201.setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5")

HAnimSegment1200.addChild(TouchSensor1201)
Transform1202 = x3d.Transform()
Transform1202.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Shape1203 = x3d.Shape()
Shape1203.setUSE("HAnimJointShape")

Transform1202.addChild(Shape1203)

HAnimSegment1200.addChild(Transform1202)
Shape1204 = x3d.Shape()
LineSet1205 = x3d.LineSet()
LineSet1205.setVertexCount([2])
ColorRGBA1206 = x3d.ColorRGBA()
ColorRGBA1206.setUSE("HAnimSegmentLineColorRGBA")

LineSet1205.setColor(ColorRGBA1206)
Coordinate1207 = x3d.Coordinate()
Coordinate1207.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

LineSet1205.setCoord(Coordinate1207)

Shape1204.setGeometry(LineSet1205)

HAnimSegment1200.addChild(Shape1204)

HAnimJoint1199.addChild(HAnimSegment1200)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1208.setName("l_metacarpophalangeal_5")
HAnimJoint1208.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimSegment1209 = x3d.HAnimSegment()
HAnimSegment1209.setDEF("hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1209.setName("l_carpal_proximal_phalanx_5")
TouchSensor1210 = x3d.TouchSensor()
TouchSensor1210.setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5")

HAnimSegment1209.addChild(TouchSensor1210)
Transform1211 = x3d.Transform()
Transform1211.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Shape1212 = x3d.Shape()
Shape1212.setUSE("HAnimJointShape")

Transform1211.addChild(Shape1212)

HAnimSegment1209.addChild(Transform1211)
Shape1213 = x3d.Shape()
LineSet1214 = x3d.LineSet()
LineSet1214.setVertexCount([2])
ColorRGBA1215 = x3d.ColorRGBA()
ColorRGBA1215.setUSE("HAnimSegmentLineColorRGBA")

LineSet1214.setColor(ColorRGBA1215)
Coordinate1216 = x3d.Coordinate()
Coordinate1216.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

LineSet1214.setCoord(Coordinate1216)

Shape1213.setGeometry(LineSet1214)

HAnimSegment1209.addChild(Shape1213)

HAnimJoint1208.addChild(HAnimSegment1209)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1217.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1217.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimSegment1218 = x3d.HAnimSegment()
HAnimSegment1218.setDEF("hanim_l_carpal_middle_phalanx_5")
HAnimSegment1218.setName("l_carpal_middle_phalanx_5")
TouchSensor1219 = x3d.TouchSensor()
TouchSensor1219.setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5")

HAnimSegment1218.addChild(TouchSensor1219)
Transform1220 = x3d.Transform()
Transform1220.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Shape1221 = x3d.Shape()
Shape1221.setUSE("HAnimJointShape")

Transform1220.addChild(Shape1221)

HAnimSegment1218.addChild(Transform1220)
Shape1222 = x3d.Shape()
LineSet1223 = x3d.LineSet()
LineSet1223.setVertexCount([2])
ColorRGBA1224 = x3d.ColorRGBA()
ColorRGBA1224.setUSE("HAnimSegmentLineColorRGBA")

LineSet1223.setColor(ColorRGBA1224)
Coordinate1225 = x3d.Coordinate()
Coordinate1225.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

LineSet1223.setCoord(Coordinate1225)

Shape1222.setGeometry(LineSet1223)

HAnimSegment1218.addChild(Shape1222)

HAnimJoint1217.addChild(HAnimSegment1218)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1226.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1226.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.setDEF("hanim_l_carpal_distal_phalanx_5")
HAnimSegment1227.setName("l_carpal_distal_phalanx_5")
TouchSensor1228 = x3d.TouchSensor()
TouchSensor1228.setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5")

HAnimSegment1227.addChild(TouchSensor1228)
Transform1229 = x3d.Transform()
Transform1229.setTranslation(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
Shape1230 = x3d.Shape()
Shape1230.setUSE("HAnimJointShape")

Transform1229.addChild(Shape1230)

HAnimSegment1227.addChild(Transform1229)
Shape1231 = x3d.Shape()
LineSet1232 = x3d.LineSet()
LineSet1232.setVertexCount([2])
ColorRGBA1233 = x3d.ColorRGBA()
ColorRGBA1233.setUSE("HAnimSiteLineColorRGBA")

LineSet1232.setColor(ColorRGBA1233)
Coordinate1234 = x3d.Coordinate()
Coordinate1234.setPoint(x3d.doubleToFloat([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]))

LineSet1232.setCoord(Coordinate1234)

Shape1231.setGeometry(LineSet1232)

HAnimSegment1227.addChild(Shape1231)
HAnimSite1235 = x3d.HAnimSite()
HAnimSite1235.setDEF("hanim_l_carpal_distal_phalanx_5_pt")
HAnimSite1235.setName("l_carpal_distal_phalanx_5_pt")
HAnimSite1235.setTranslation(x3d.doubleToFloat([0.2014,0.7009,-0.1012]))
TouchSensor1236 = x3d.TouchSensor()
TouchSensor1236.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1235.addChild(TouchSensor1236)
Shape1237 = x3d.Shape()
Shape1237.setUSE("HAnimSiteShape")

HAnimSite1235.addChild(Shape1237)

HAnimSegment1227.addChild(HAnimSite1235)

HAnimJoint1226.addChild(HAnimSegment1227)

HAnimJoint1217.addChild(HAnimJoint1226)

HAnimJoint1208.addChild(HAnimJoint1217)

HAnimJoint1199.addChild(HAnimJoint1208)

HAnimJoint987.addChild(HAnimJoint1199)

HAnimJoint950.addChild(HAnimJoint987)

HAnimJoint934.addChild(HAnimJoint950)

HAnimJoint925.addChild(HAnimJoint934)

HAnimJoint888.addChild(HAnimJoint925)

HAnimJoint600.addChild(HAnimJoint888)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.setDEF("hanim_r_sternoclavicular")
HAnimJoint1238.setName("r_sternoclavicular")
HAnimJoint1238.setCenter(x3d.doubleToFloat([-0.082,1.4488,-0.0353]))
HAnimSegment1239 = x3d.HAnimSegment()
HAnimSegment1239.setDEF("hanim_r_clavicle")
HAnimSegment1239.setName("r_clavicle")
TouchSensor1240 = x3d.TouchSensor()
TouchSensor1240.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1239.addChild(TouchSensor1240)
Transform1241 = x3d.Transform()
Transform1241.setTranslation(x3d.doubleToFloat([-0.082,1.4488,-0.0353]))
Shape1242 = x3d.Shape()
Shape1242.setUSE("HAnimJointShape")

Transform1241.addChild(Shape1242)

HAnimSegment1239.addChild(Transform1241)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.setVertexCount([2])
ColorRGBA1245 = x3d.ColorRGBA()
ColorRGBA1245.setUSE("HAnimSegmentLineColorRGBA")

LineSet1244.setColor(ColorRGBA1245)
Coordinate1246 = x3d.Coordinate()
Coordinate1246.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]))

LineSet1244.setCoord(Coordinate1246)

Shape1243.setGeometry(LineSet1244)

HAnimSegment1239.addChild(Shape1243)
Shape1247 = x3d.Shape()
LineSet1248 = x3d.LineSet()
LineSet1248.setVertexCount([2])
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.setUSE("HAnimSiteLineColorRGBA")

LineSet1248.setColor(ColorRGBA1249)
Coordinate1250 = x3d.Coordinate()
Coordinate1250.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]))

LineSet1248.setCoord(Coordinate1250)

Shape1247.setGeometry(LineSet1248)

HAnimSegment1239.addChild(Shape1247)
Shape1251 = x3d.Shape()
LineSet1252 = x3d.LineSet()
LineSet1252.setVertexCount([2])
ColorRGBA1253 = x3d.ColorRGBA()
ColorRGBA1253.setUSE("HAnimSiteLineColorRGBA")

LineSet1252.setColor(ColorRGBA1253)
Coordinate1254 = x3d.Coordinate()
Coordinate1254.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]))

LineSet1252.setCoord(Coordinate1254)

Shape1251.setGeometry(LineSet1252)

HAnimSegment1239.addChild(Shape1251)
Shape1255 = x3d.Shape()
LineSet1256 = x3d.LineSet()
LineSet1256.setVertexCount([2])
ColorRGBA1257 = x3d.ColorRGBA()
ColorRGBA1257.setUSE("HAnimSiteLineColorRGBA")

LineSet1256.setColor(ColorRGBA1257)
Coordinate1258 = x3d.Coordinate()
Coordinate1258.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]))

LineSet1256.setCoord(Coordinate1258)

Shape1255.setGeometry(LineSet1256)

HAnimSegment1239.addChild(Shape1255)
Shape1259 = x3d.Shape()
LineSet1260 = x3d.LineSet()
LineSet1260.setVertexCount([2])
ColorRGBA1261 = x3d.ColorRGBA()
ColorRGBA1261.setUSE("HAnimSiteLineColorRGBA")

LineSet1260.setColor(ColorRGBA1261)
Coordinate1262 = x3d.Coordinate()
Coordinate1262.setPoint(x3d.doubleToFloat([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]))

LineSet1260.setCoord(Coordinate1262)

Shape1259.setGeometry(LineSet1260)

HAnimSegment1239.addChild(Shape1259)
HAnimSite1263 = x3d.HAnimSite()
HAnimSite1263.setDEF("hanim_r_clavicle_pt")
HAnimSite1263.setName("r_clavicle_pt")
HAnimSite1263.setTranslation(x3d.doubleToFloat([-0.0115,1.4943,0.04]))
TouchSensor1264 = x3d.TouchSensor()
TouchSensor1264.setDescription("HAnimSite r_clavicale_pt")

HAnimSite1263.addChild(TouchSensor1264)
Shape1265 = x3d.Shape()
Shape1265.setUSE("HAnimSiteShape")

HAnimSite1263.addChild(Shape1265)

HAnimSegment1239.addChild(HAnimSite1263)
HAnimSite1266 = x3d.HAnimSite()
HAnimSite1266.setDEF("hanim_r_acromion_pt")
HAnimSite1266.setName("r_acromion_pt")
HAnimSite1266.setTranslation(x3d.doubleToFloat([-0.1905,1.4791,-0.0431]))
TouchSensor1267 = x3d.TouchSensor()
TouchSensor1267.setDescription("HAnimSite r_acromion_pt")

HAnimSite1266.addChild(TouchSensor1267)
Shape1268 = x3d.Shape()
Shape1268.setUSE("HAnimSiteShape")

HAnimSite1266.addChild(Shape1268)

HAnimSegment1239.addChild(HAnimSite1266)
HAnimSite1269 = x3d.HAnimSite()
HAnimSite1269.setDEF("hanim_r_axilla_proximal_pt")
HAnimSite1269.setName("r_axilla_proximal_pt")
HAnimSite1269.setTranslation(x3d.doubleToFloat([-0.1626,1.4072,-0.0031]))
TouchSensor1270 = x3d.TouchSensor()
TouchSensor1270.setDescription("HAnimSite r_axilla_ant_pt")

HAnimSite1269.addChild(TouchSensor1270)
Shape1271 = x3d.Shape()
Shape1271.setUSE("HAnimSiteShape")

HAnimSite1269.addChild(Shape1271)

HAnimSegment1239.addChild(HAnimSite1269)
HAnimSite1272 = x3d.HAnimSite()
HAnimSite1272.setDEF("hanim_r_axilla_distal_pt")
HAnimSite1272.setName("r_axilla_distal_pt")
HAnimSite1272.setTranslation(x3d.doubleToFloat([-0.1603,1.4098,-0.0826]))
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.setDescription("HAnimSite r_axilla_post_pt")

HAnimSite1272.addChild(TouchSensor1273)
Shape1274 = x3d.Shape()
Shape1274.setUSE("HAnimSiteShape")

HAnimSite1272.addChild(Shape1274)

HAnimSegment1239.addChild(HAnimSite1272)

HAnimJoint1238.addChild(HAnimSegment1239)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.setDEF("hanim_r_acromioclavicular")
HAnimJoint1275.setName("r_acromioclavicular")
HAnimJoint1275.setCenter(x3d.doubleToFloat([-0.0962,1.4269,-0.0424]))
HAnimSegment1276 = x3d.HAnimSegment()
HAnimSegment1276.setDEF("hanim_r_scapula")
HAnimSegment1276.setName("r_scapula")
TouchSensor1277 = x3d.TouchSensor()
TouchSensor1277.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1276.addChild(TouchSensor1277)
Transform1278 = x3d.Transform()
Transform1278.setTranslation(x3d.doubleToFloat([-0.0962,1.4269,-0.0424]))
Shape1279 = x3d.Shape()
Shape1279.setUSE("HAnimJointShape")

Transform1278.addChild(Shape1279)

HAnimSegment1276.addChild(Transform1278)
Shape1280 = x3d.Shape()
LineSet1281 = x3d.LineSet()
LineSet1281.setVertexCount([2])
ColorRGBA1282 = x3d.ColorRGBA()
ColorRGBA1282.setUSE("HAnimSegmentLineColorRGBA")

LineSet1281.setColor(ColorRGBA1282)
Coordinate1283 = x3d.Coordinate()
Coordinate1283.setPoint(x3d.doubleToFloat([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]))

LineSet1281.setCoord(Coordinate1283)

Shape1280.setGeometry(LineSet1281)

HAnimSegment1276.addChild(Shape1280)

HAnimJoint1275.addChild(HAnimSegment1276)
HAnimJoint1284 = x3d.HAnimJoint()
HAnimJoint1284.setDEF("hanim_r_shoulder")
HAnimJoint1284.setName("r_shoulder")
HAnimJoint1284.setCenter(x3d.doubleToFloat([-0.2029,1.4376,-0.0387]))
HAnimSegment1285 = x3d.HAnimSegment()
HAnimSegment1285.setDEF("hanim_r_upperarm")
HAnimSegment1285.setName("r_upperarm")
TouchSensor1286 = x3d.TouchSensor()
TouchSensor1286.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1285.addChild(TouchSensor1286)
Transform1287 = x3d.Transform()
Transform1287.setTranslation(x3d.doubleToFloat([-0.2029,1.4376,-0.0387]))
Shape1288 = x3d.Shape()
Shape1288.setUSE("HAnimJointShape")

Transform1287.addChild(Shape1288)

HAnimSegment1285.addChild(Transform1287)
Shape1289 = x3d.Shape()
LineSet1290 = x3d.LineSet()
LineSet1290.setVertexCount([2])
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.setUSE("HAnimSegmentLineColorRGBA")

LineSet1290.setColor(ColorRGBA1291)
Coordinate1292 = x3d.Coordinate()
Coordinate1292.setPoint(x3d.doubleToFloat([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]))

LineSet1290.setCoord(Coordinate1292)

Shape1289.setGeometry(LineSet1290)

HAnimSegment1285.addChild(Shape1289)
Shape1293 = x3d.Shape()
LineSet1294 = x3d.LineSet()
LineSet1294.setVertexCount([2])
ColorRGBA1295 = x3d.ColorRGBA()
ColorRGBA1295.setUSE("HAnimSiteLineColorRGBA")

LineSet1294.setColor(ColorRGBA1295)
Coordinate1296 = x3d.Coordinate()
Coordinate1296.setPoint(x3d.doubleToFloat([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]))

LineSet1294.setCoord(Coordinate1296)

Shape1293.setGeometry(LineSet1294)

HAnimSegment1285.addChild(Shape1293)
HAnimSite1297 = x3d.HAnimSite()
HAnimSite1297.setDEF("hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite1297.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite1297.setTranslation(x3d.doubleToFloat([-0.2224,1.1517,-0.1033]))
TouchSensor1298 = x3d.TouchSensor()
TouchSensor1298.setDescription("HAnimSite r_humeral_lateral_epicn_pt")

HAnimSite1297.addChild(TouchSensor1298)
Shape1299 = x3d.Shape()
Shape1299.setUSE("HAnimSiteShape")

HAnimSite1297.addChild(Shape1299)

HAnimSegment1285.addChild(HAnimSite1297)

HAnimJoint1284.addChild(HAnimSegment1285)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.setDEF("hanim_r_elbow")
HAnimJoint1300.setName("r_elbow")
HAnimJoint1300.setCenter(x3d.doubleToFloat([-0.2014,1.1357,-0.0682]))
HAnimSegment1301 = x3d.HAnimSegment()
HAnimSegment1301.setDEF("hanim_r_forearm")
HAnimSegment1301.setName("r_forearm")
TouchSensor1302 = x3d.TouchSensor()
TouchSensor1302.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1301.addChild(TouchSensor1302)
Transform1303 = x3d.Transform()
Transform1303.setTranslation(x3d.doubleToFloat([-0.2014,1.1357,-0.0682]))
Shape1304 = x3d.Shape()
Shape1304.setUSE("HAnimJointShape")

Transform1303.addChild(Shape1304)

HAnimSegment1301.addChild(Transform1303)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.setVertexCount([2])
ColorRGBA1307 = x3d.ColorRGBA()
ColorRGBA1307.setUSE("HAnimSegmentLineColorRGBA")

LineSet1306.setColor(ColorRGBA1307)
Coordinate1308 = x3d.Coordinate()
Coordinate1308.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]))

LineSet1306.setCoord(Coordinate1308)

Shape1305.setGeometry(LineSet1306)

HAnimSegment1301.addChild(Shape1305)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.setVertexCount([2])
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.setUSE("HAnimSiteLineColorRGBA")

LineSet1310.setColor(ColorRGBA1311)
Coordinate1312 = x3d.Coordinate()
Coordinate1312.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]))

LineSet1310.setCoord(Coordinate1312)

Shape1309.setGeometry(LineSet1310)

HAnimSegment1301.addChild(Shape1309)
Shape1313 = x3d.Shape()
LineSet1314 = x3d.LineSet()
LineSet1314.setVertexCount([2])
ColorRGBA1315 = x3d.ColorRGBA()
ColorRGBA1315.setUSE("HAnimSiteLineColorRGBA")

LineSet1314.setColor(ColorRGBA1315)
Coordinate1316 = x3d.Coordinate()
Coordinate1316.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]))

LineSet1314.setCoord(Coordinate1316)

Shape1313.setGeometry(LineSet1314)

HAnimSegment1301.addChild(Shape1313)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.setVertexCount([2])
ColorRGBA1319 = x3d.ColorRGBA()
ColorRGBA1319.setUSE("HAnimSiteLineColorRGBA")

LineSet1318.setColor(ColorRGBA1319)
Coordinate1320 = x3d.Coordinate()
Coordinate1320.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]))

LineSet1318.setCoord(Coordinate1320)

Shape1317.setGeometry(LineSet1318)

HAnimSegment1301.addChild(Shape1317)
Shape1321 = x3d.Shape()
LineSet1322 = x3d.LineSet()
LineSet1322.setVertexCount([2])
ColorRGBA1323 = x3d.ColorRGBA()
ColorRGBA1323.setUSE("HAnimSiteLineColorRGBA")

LineSet1322.setColor(ColorRGBA1323)
Coordinate1324 = x3d.Coordinate()
Coordinate1324.setPoint(x3d.doubleToFloat([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]))

LineSet1322.setCoord(Coordinate1324)

Shape1321.setGeometry(LineSet1322)

HAnimSegment1301.addChild(Shape1321)
HAnimSite1325 = x3d.HAnimSite()
HAnimSite1325.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1325.setName("r_radial_styloid_pt")
HAnimSite1325.setTranslation(x3d.doubleToFloat([-0.1884,0.8676,-0.036]))
TouchSensor1326 = x3d.TouchSensor()
TouchSensor1326.setDescription("HAnimSite r_radial_styloid_pt")

HAnimSite1325.addChild(TouchSensor1326)
Shape1327 = x3d.Shape()
Shape1327.setUSE("HAnimSiteShape")

HAnimSite1325.addChild(Shape1327)

HAnimSegment1301.addChild(HAnimSite1325)
HAnimSite1328 = x3d.HAnimSite()
HAnimSite1328.setDEF("hanim_r_olecranon_pt")
HAnimSite1328.setName("r_olecranon_pt")
HAnimSite1328.setTranslation(x3d.doubleToFloat([-0.1907,1.1405,-0.1065]))
TouchSensor1329 = x3d.TouchSensor()
TouchSensor1329.setDescription("HAnimSite r_olecranon_pt")

HAnimSite1328.addChild(TouchSensor1329)
Shape1330 = x3d.Shape()
Shape1330.setUSE("HAnimSiteShape")

HAnimSite1328.addChild(Shape1330)

HAnimSegment1301.addChild(HAnimSite1328)
HAnimSite1331 = x3d.HAnimSite()
HAnimSite1331.setDEF("hanim_r_humeral_medial_epicondyle_pt")
HAnimSite1331.setName("r_humeral_medial_epicondyle_pt")
HAnimSite1331.setTranslation(x3d.doubleToFloat([-0.168,1.1298,-0.1062]))
TouchSensor1332 = x3d.TouchSensor()
TouchSensor1332.setDescription("HAnimSite r_humeral_medial_epicn_pt")

HAnimSite1331.addChild(TouchSensor1332)
Shape1333 = x3d.Shape()
Shape1333.setUSE("HAnimSiteShape")

HAnimSite1331.addChild(Shape1333)

HAnimSegment1301.addChild(HAnimSite1331)
HAnimSite1334 = x3d.HAnimSite()
HAnimSite1334.setDEF("hanim_r_radiale_pt")
HAnimSite1334.setName("r_radiale_pt")
HAnimSite1334.setTranslation(x3d.doubleToFloat([-0.213,1.1305,-0.1091]))
TouchSensor1335 = x3d.TouchSensor()
TouchSensor1335.setDescription("HAnimSite r_radiale_pt")

HAnimSite1334.addChild(TouchSensor1335)
Shape1336 = x3d.Shape()
Shape1336.setUSE("HAnimSiteShape")

HAnimSite1334.addChild(Shape1336)

HAnimSegment1301.addChild(HAnimSite1334)

HAnimJoint1300.addChild(HAnimSegment1301)
HAnimJoint1337 = x3d.HAnimJoint()
HAnimJoint1337.setDEF("hanim_r_radiocarpal")
HAnimJoint1337.setName("r_radiocarpal")
HAnimJoint1337.setCenter(x3d.doubleToFloat([-0.1984,0.8663,-0.0583]))
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.setDEF("hanim_r_carpal")
HAnimSegment1338.setName("r_carpal")
TouchSensor1339 = x3d.TouchSensor()
TouchSensor1339.setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal")

HAnimSegment1338.addChild(TouchSensor1339)
Transform1340 = x3d.Transform()
Transform1340.setTranslation(x3d.doubleToFloat([-0.1984,0.8663,-0.0583]))
Shape1341 = x3d.Shape()
Shape1341.setUSE("HAnimJointShape")

Transform1340.addChild(Shape1341)

HAnimSegment1338.addChild(Transform1340)
Shape1342 = x3d.Shape()
LineSet1343 = x3d.LineSet()
LineSet1343.setVertexCount([2])
ColorRGBA1344 = x3d.ColorRGBA()
ColorRGBA1344.setUSE("HAnimSegmentLineColorRGBA")

LineSet1343.setColor(ColorRGBA1344)
Coordinate1345 = x3d.Coordinate()
Coordinate1345.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]))

LineSet1343.setCoord(Coordinate1345)

Shape1342.setGeometry(LineSet1343)

HAnimSegment1338.addChild(Shape1342)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.setVertexCount([2])
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.setUSE("HAnimSegmentLineColorRGBA")

LineSet1347.setColor(ColorRGBA1348)
Coordinate1349 = x3d.Coordinate()
Coordinate1349.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]))

LineSet1347.setCoord(Coordinate1349)

Shape1346.setGeometry(LineSet1347)

HAnimSegment1338.addChild(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.setVertexCount([2])
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.setUSE("HAnimSegmentLineColorRGBA")

LineSet1351.setColor(ColorRGBA1352)
Coordinate1353 = x3d.Coordinate()
Coordinate1353.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]))

LineSet1351.setCoord(Coordinate1353)

Shape1350.setGeometry(LineSet1351)

HAnimSegment1338.addChild(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.setVertexCount([2])
ColorRGBA1356 = x3d.ColorRGBA()
ColorRGBA1356.setUSE("HAnimSegmentLineColorRGBA")

LineSet1355.setColor(ColorRGBA1356)
Coordinate1357 = x3d.Coordinate()
Coordinate1357.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]))

LineSet1355.setCoord(Coordinate1357)

Shape1354.setGeometry(LineSet1355)

HAnimSegment1338.addChild(Shape1354)
Shape1358 = x3d.Shape()
LineSet1359 = x3d.LineSet()
LineSet1359.setVertexCount([2])
ColorRGBA1360 = x3d.ColorRGBA()
ColorRGBA1360.setUSE("HAnimSegmentLineColorRGBA")

LineSet1359.setColor(ColorRGBA1360)
Coordinate1361 = x3d.Coordinate()
Coordinate1361.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]))

LineSet1359.setCoord(Coordinate1361)

Shape1358.setGeometry(LineSet1359)

HAnimSegment1338.addChild(Shape1358)
Shape1362 = x3d.Shape()
LineSet1363 = x3d.LineSet()
LineSet1363.setVertexCount([2])
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.setUSE("HAnimSiteLineColorRGBA")

LineSet1363.setColor(ColorRGBA1364)
Coordinate1365 = x3d.Coordinate()
Coordinate1365.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]))

LineSet1363.setCoord(Coordinate1365)

Shape1362.setGeometry(LineSet1363)

HAnimSegment1338.addChild(Shape1362)
Shape1366 = x3d.Shape()
LineSet1367 = x3d.LineSet()
LineSet1367.setVertexCount([2])
ColorRGBA1368 = x3d.ColorRGBA()
ColorRGBA1368.setUSE("HAnimSiteLineColorRGBA")

LineSet1367.setColor(ColorRGBA1368)
Coordinate1369 = x3d.Coordinate()
Coordinate1369.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]))

LineSet1367.setCoord(Coordinate1369)

Shape1366.setGeometry(LineSet1367)

HAnimSegment1338.addChild(Shape1366)
Shape1370 = x3d.Shape()
LineSet1371 = x3d.LineSet()
LineSet1371.setVertexCount([2])
ColorRGBA1372 = x3d.ColorRGBA()
ColorRGBA1372.setUSE("HAnimSiteLineColorRGBA")

LineSet1371.setColor(ColorRGBA1372)
Coordinate1373 = x3d.Coordinate()
Coordinate1373.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]))

LineSet1371.setCoord(Coordinate1373)

Shape1370.setGeometry(LineSet1371)

HAnimSegment1338.addChild(Shape1370)
Shape1374 = x3d.Shape()
LineSet1375 = x3d.LineSet()
LineSet1375.setVertexCount([2])
ColorRGBA1376 = x3d.ColorRGBA()
ColorRGBA1376.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1375.setColor(ColorRGBA1376)
Coordinate1377 = x3d.Coordinate()
Coordinate1377.setPoint(x3d.doubleToFloat([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]))

LineSet1375.setCoord(Coordinate1377)

Shape1374.setGeometry(LineSet1375)

HAnimSegment1338.addChild(Shape1374)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1378.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1378.setTranslation(x3d.doubleToFloat([-0.1977,0.8169,-0.0177]))
TouchSensor1379 = x3d.TouchSensor()
TouchSensor1379.setDescription("HAnimSite r_metacarpal_pha2_pt")

HAnimSite1378.addChild(TouchSensor1379)
Shape1380 = x3d.Shape()
Shape1380.setUSE("HAnimSiteShape")

HAnimSite1378.addChild(Shape1380)

HAnimSegment1338.addChild(HAnimSite1378)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1381.setName("r_ulnar_styloid_pt")
HAnimSite1381.setTranslation(x3d.doubleToFloat([-0.2117,0.8562,-0.0584]))
TouchSensor1382 = x3d.TouchSensor()
TouchSensor1382.setDescription("HAnimSite r_ulnar_styloid_pt")

HAnimSite1381.addChild(TouchSensor1382)
Shape1383 = x3d.Shape()
Shape1383.setUSE("HAnimSiteShape")

HAnimSite1381.addChild(Shape1383)

HAnimSegment1338.addChild(HAnimSite1381)
HAnimSite1384 = x3d.HAnimSite()
HAnimSite1384.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1384.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1384.setTranslation(x3d.doubleToFloat([-0.1929,0.789,-0.1064]))
TouchSensor1385 = x3d.TouchSensor()
TouchSensor1385.setDescription("HAnimSite r_metacarpal_pha5_pt")

HAnimSite1384.addChild(TouchSensor1385)
Shape1386 = x3d.Shape()
Shape1386.setUSE("HAnimSiteShape")

HAnimSite1384.addChild(Shape1386)

HAnimSegment1338.addChild(HAnimSite1384)
HAnimSite1387 = x3d.HAnimSite()
HAnimSite1387.setDEF("hanim_r_hand_front_view")
HAnimSite1387.setName("r_hand_front_view")
HAnimSite1387.setTranslation(x3d.doubleToFloat([-0.3,0.75,0.45]))
TouchSensor1388 = x3d.TouchSensor()
TouchSensor1388.setDescription("HAnimSite r_hand_front_view")

HAnimSite1387.addChild(TouchSensor1388)
Shape1389 = x3d.Shape()
Shape1389.setUSE("HAnimSiteShape")

HAnimSite1387.addChild(Shape1389)
Viewpoint1390 = x3d.Viewpoint()
Viewpoint1390.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1390.setDescription("right hand front")
Viewpoint1390.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1390.setCenterOfRotation(x3d.doubleToFloat([0,0.7,0]))

HAnimSite1387.addChild(Viewpoint1390)
Anchor1391 = x3d.Anchor()
Anchor1391.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1391.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1392 = x3d.LOD()
LOD1392.setForceTransitions(True)
LOD1392.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1393 = x3d.WorldInfo()
WorldInfo1393.setInfo(["hide diamond when close"])

LOD1392.addChild(WorldInfo1393)
Shape1394 = x3d.Shape()
Shape1394.setUSE("HAnimSiteViewpointShape")

LOD1392.addChild(Shape1394)

Anchor1391.addChild(LOD1392)

HAnimSite1387.addChild(Anchor1391)

HAnimSegment1338.addChild(HAnimSite1387)

HAnimJoint1337.addChild(HAnimSegment1338)
HAnimJoint1395 = x3d.HAnimJoint()
HAnimJoint1395.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1395.setName("r_carpometacarpal_1")
HAnimJoint1395.setCenter(x3d.doubleToFloat([-0.1924,0.8472,-0.0534]))
HAnimSegment1396 = x3d.HAnimSegment()
HAnimSegment1396.setDEF("hanim_r_metacarpal_1")
HAnimSegment1396.setName("r_metacarpal_1")
TouchSensor1397 = x3d.TouchSensor()
TouchSensor1397.setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1")

HAnimSegment1396.addChild(TouchSensor1397)
Transform1398 = x3d.Transform()
Transform1398.setTranslation(x3d.doubleToFloat([-0.1924,0.8472,-0.0534]))
Shape1399 = x3d.Shape()
Shape1399.setUSE("HAnimJointShape")

Transform1398.addChild(Shape1399)

HAnimSegment1396.addChild(Transform1398)
Shape1400 = x3d.Shape()
LineSet1401 = x3d.LineSet()
LineSet1401.setVertexCount([2])
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.setUSE("HAnimSegmentLineColorRGBA")

LineSet1401.setColor(ColorRGBA1402)
Coordinate1403 = x3d.Coordinate()
Coordinate1403.setPoint(x3d.doubleToFloat([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]))

LineSet1401.setCoord(Coordinate1403)

Shape1400.setGeometry(LineSet1401)

HAnimSegment1396.addChild(Shape1400)

HAnimJoint1395.addChild(HAnimSegment1396)
HAnimJoint1404 = x3d.HAnimJoint()
HAnimJoint1404.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1404.setName("r_metacarpophalangeal_1")
HAnimJoint1404.setCenter(x3d.doubleToFloat([-0.1951,0.8226,0.0246]))
HAnimSegment1405 = x3d.HAnimSegment()
HAnimSegment1405.setDEF("hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1405.setName("r_carpal_proximal_phalanx_1")
TouchSensor1406 = x3d.TouchSensor()
TouchSensor1406.setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1")

HAnimSegment1405.addChild(TouchSensor1406)
Transform1407 = x3d.Transform()
Transform1407.setTranslation(x3d.doubleToFloat([-0.1951,0.8226,0.0246]))
Shape1408 = x3d.Shape()
Shape1408.setUSE("HAnimJointShape")

Transform1407.addChild(Shape1408)

HAnimSegment1405.addChild(Transform1407)
Shape1409 = x3d.Shape()
LineSet1410 = x3d.LineSet()
LineSet1410.setVertexCount([2])
ColorRGBA1411 = x3d.ColorRGBA()
ColorRGBA1411.setUSE("HAnimSegmentLineColorRGBA")

LineSet1410.setColor(ColorRGBA1411)
Coordinate1412 = x3d.Coordinate()
Coordinate1412.setPoint(x3d.doubleToFloat([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]))

LineSet1410.setCoord(Coordinate1412)

Shape1409.setGeometry(LineSet1410)

HAnimSegment1405.addChild(Shape1409)

HAnimJoint1404.addChild(HAnimSegment1405)
HAnimJoint1413 = x3d.HAnimJoint()
HAnimJoint1413.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1413.setName("r_carpal_interphalangeal_1")
HAnimJoint1413.setCenter(x3d.doubleToFloat([-0.1955,0.8159,0.0464]))
HAnimSegment1414 = x3d.HAnimSegment()
HAnimSegment1414.setDEF("hanim_r_carpal_distal_phalanx_1")
HAnimSegment1414.setName("r_carpal_distal_phalanx_1")
TouchSensor1415 = x3d.TouchSensor()
TouchSensor1415.setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1")

HAnimSegment1414.addChild(TouchSensor1415)
Transform1416 = x3d.Transform()
Transform1416.setTranslation(x3d.doubleToFloat([-0.1955,0.8159,0.0464]))
Shape1417 = x3d.Shape()
Shape1417.setUSE("HAnimJointShape")

Transform1416.addChild(Shape1417)

HAnimSegment1414.addChild(Transform1416)
Shape1418 = x3d.Shape()
LineSet1419 = x3d.LineSet()
LineSet1419.setVertexCount([2])
ColorRGBA1420 = x3d.ColorRGBA()
ColorRGBA1420.setUSE("HAnimSiteLineColorRGBA")

LineSet1419.setColor(ColorRGBA1420)
Coordinate1421 = x3d.Coordinate()
Coordinate1421.setPoint(x3d.doubleToFloat([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]))

LineSet1419.setCoord(Coordinate1421)

Shape1418.setGeometry(LineSet1419)

HAnimSegment1414.addChild(Shape1418)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.setDEF("hanim_r_carpal_distal_phalanx_1_pt")
HAnimSite1422.setName("r_carpal_distal_phalanx_1_pt")
HAnimSite1422.setTranslation(x3d.doubleToFloat([-0.1869,0.809,0.082]))
TouchSensor1423 = x3d.TouchSensor()
TouchSensor1423.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1422.addChild(TouchSensor1423)
Shape1424 = x3d.Shape()
Shape1424.setUSE("HAnimSiteShape")

HAnimSite1422.addChild(Shape1424)

HAnimSegment1414.addChild(HAnimSite1422)

HAnimJoint1413.addChild(HAnimSegment1414)

HAnimJoint1404.addChild(HAnimJoint1413)

HAnimJoint1395.addChild(HAnimJoint1404)

HAnimJoint1337.addChild(HAnimJoint1395)
HAnimJoint1425 = x3d.HAnimJoint()
HAnimJoint1425.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1425.setName("r_carpometacarpal_2")
HAnimJoint1425.setCenter(x3d.doubleToFloat([-0.1983,0.8024,-0.028]))
HAnimSegment1426 = x3d.HAnimSegment()
HAnimSegment1426.setDEF("hanim_r_metacarpal_2")
HAnimSegment1426.setName("r_metacarpal_2")
TouchSensor1427 = x3d.TouchSensor()
TouchSensor1427.setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2")

HAnimSegment1426.addChild(TouchSensor1427)
Transform1428 = x3d.Transform()
Transform1428.setTranslation(x3d.doubleToFloat([-0.1983,0.8024,-0.028]))
Shape1429 = x3d.Shape()
Shape1429.setUSE("HAnimJointShape")

Transform1428.addChild(Shape1429)

HAnimSegment1426.addChild(Transform1428)
Shape1430 = x3d.Shape()
LineSet1431 = x3d.LineSet()
LineSet1431.setVertexCount([2])
ColorRGBA1432 = x3d.ColorRGBA()
ColorRGBA1432.setUSE("HAnimSegmentLineColorRGBA")

LineSet1431.setColor(ColorRGBA1432)
Coordinate1433 = x3d.Coordinate()
Coordinate1433.setPoint(x3d.doubleToFloat([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]))

LineSet1431.setCoord(Coordinate1433)

Shape1430.setGeometry(LineSet1431)

HAnimSegment1426.addChild(Shape1430)

HAnimJoint1425.addChild(HAnimSegment1426)
HAnimJoint1434 = x3d.HAnimJoint()
HAnimJoint1434.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1434.setName("r_metacarpophalangeal_2")
HAnimJoint1434.setCenter(x3d.doubleToFloat([-0.1983,0.7815,-0.028]))
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.setDEF("hanim_r_carpal_proximal_phalanx_2")
HAnimSegment1435.setName("r_carpal_proximal_phalanx_2")
TouchSensor1436 = x3d.TouchSensor()
TouchSensor1436.setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2")

HAnimSegment1435.addChild(TouchSensor1436)
Transform1437 = x3d.Transform()
Transform1437.setTranslation(x3d.doubleToFloat([-0.1983,0.7815,-0.028]))
Shape1438 = x3d.Shape()
Shape1438.setUSE("HAnimJointShape")

Transform1437.addChild(Shape1438)

HAnimSegment1435.addChild(Transform1437)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.setVertexCount([2])
ColorRGBA1441 = x3d.ColorRGBA()
ColorRGBA1441.setUSE("HAnimSegmentLineColorRGBA")

LineSet1440.setColor(ColorRGBA1441)
Coordinate1442 = x3d.Coordinate()
Coordinate1442.setPoint(x3d.doubleToFloat([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]))

LineSet1440.setCoord(Coordinate1442)

Shape1439.setGeometry(LineSet1440)

HAnimSegment1435.addChild(Shape1439)

HAnimJoint1434.addChild(HAnimSegment1435)
HAnimJoint1443 = x3d.HAnimJoint()
HAnimJoint1443.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1443.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1443.setCenter(x3d.doubleToFloat([-0.2017,0.7363,-0.0248]))
HAnimSegment1444 = x3d.HAnimSegment()
HAnimSegment1444.setDEF("hanim_r_carpal_middle_phalanx_2")
HAnimSegment1444.setName("r_carpal_middle_phalanx_2")
TouchSensor1445 = x3d.TouchSensor()
TouchSensor1445.setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2")

HAnimSegment1444.addChild(TouchSensor1445)
Transform1446 = x3d.Transform()
Transform1446.setTranslation(x3d.doubleToFloat([-0.2017,0.7363,-0.0248]))
Shape1447 = x3d.Shape()
Shape1447.setUSE("HAnimJointShape")

Transform1446.addChild(Shape1447)

HAnimSegment1444.addChild(Transform1446)
Shape1448 = x3d.Shape()
LineSet1449 = x3d.LineSet()
LineSet1449.setVertexCount([2])
ColorRGBA1450 = x3d.ColorRGBA()
ColorRGBA1450.setUSE("HAnimSegmentLineColorRGBA")

LineSet1449.setColor(ColorRGBA1450)
Coordinate1451 = x3d.Coordinate()
Coordinate1451.setPoint(x3d.doubleToFloat([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]))

LineSet1449.setCoord(Coordinate1451)

Shape1448.setGeometry(LineSet1449)

HAnimSegment1444.addChild(Shape1448)

HAnimJoint1443.addChild(HAnimSegment1444)
HAnimJoint1452 = x3d.HAnimJoint()
HAnimJoint1452.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1452.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1452.setCenter(x3d.doubleToFloat([-0.2028,0.7139,-0.0236]))
HAnimSegment1453 = x3d.HAnimSegment()
HAnimSegment1453.setDEF("hanim_r_carpal_distal_phalanx_2")
HAnimSegment1453.setName("r_carpal_distal_phalanx_2")
TouchSensor1454 = x3d.TouchSensor()
TouchSensor1454.setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2")

HAnimSegment1453.addChild(TouchSensor1454)
Transform1455 = x3d.Transform()
Transform1455.setTranslation(x3d.doubleToFloat([-0.2028,0.7139,-0.0236]))
Shape1456 = x3d.Shape()
Shape1456.setUSE("HAnimJointShape")

Transform1455.addChild(Shape1456)

HAnimSegment1453.addChild(Transform1455)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.setVertexCount([2])
ColorRGBA1459 = x3d.ColorRGBA()
ColorRGBA1459.setUSE("HAnimSiteLineColorRGBA")

LineSet1458.setColor(ColorRGBA1459)
Coordinate1460 = x3d.Coordinate()
Coordinate1460.setPoint(x3d.doubleToFloat([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]))

LineSet1458.setCoord(Coordinate1460)

Shape1457.setGeometry(LineSet1458)

HAnimSegment1453.addChild(Shape1457)
Shape1461 = x3d.Shape()
LineSet1462 = x3d.LineSet()
LineSet1462.setVertexCount([2])
ColorRGBA1463 = x3d.ColorRGBA()
ColorRGBA1463.setUSE("HAnimSiteLineColorRGBA")

LineSet1462.setColor(ColorRGBA1463)
Coordinate1464 = x3d.Coordinate()
Coordinate1464.setPoint(x3d.doubleToFloat([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]))

LineSet1462.setCoord(Coordinate1464)

Shape1461.setGeometry(LineSet1462)

HAnimSegment1453.addChild(Shape1461)
HAnimSite1465 = x3d.HAnimSite()
HAnimSite1465.setDEF("hanim_r_carpal_distal_phalanx_2_pt")
HAnimSite1465.setName("r_carpal_distal_phalanx_2_pt")
HAnimSite1465.setTranslation(x3d.doubleToFloat([-0.198,0.6883,-0.018]))
TouchSensor1466 = x3d.TouchSensor()
TouchSensor1466.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1465.addChild(TouchSensor1466)
Shape1467 = x3d.Shape()
Shape1467.setUSE("HAnimSiteShape")

HAnimSite1465.addChild(Shape1467)

HAnimSegment1453.addChild(HAnimSite1465)
HAnimSite1468 = x3d.HAnimSite()
HAnimSite1468.setDEF("hanim_r_dactylion_pt")
HAnimSite1468.setName("r_dactylion_pt")
HAnimSite1468.setTranslation(x3d.doubleToFloat([-0.1941,0.6772,-0.0423]))
TouchSensor1469 = x3d.TouchSensor()
TouchSensor1469.setDescription("HAnimSite r_dactylion_pt")

HAnimSite1468.addChild(TouchSensor1469)
Shape1470 = x3d.Shape()
Shape1470.setUSE("HAnimSiteShape")

HAnimSite1468.addChild(Shape1470)

HAnimSegment1453.addChild(HAnimSite1468)

HAnimJoint1452.addChild(HAnimSegment1453)

HAnimJoint1443.addChild(HAnimJoint1452)

HAnimJoint1434.addChild(HAnimJoint1443)

HAnimJoint1425.addChild(HAnimJoint1434)

HAnimJoint1337.addChild(HAnimJoint1425)
HAnimJoint1471 = x3d.HAnimJoint()
HAnimJoint1471.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1471.setName("r_carpometacarpal_3")
HAnimJoint1471.setCenter(x3d.doubleToFloat([-0.1987,0.8029,-0.053]))
HAnimSegment1472 = x3d.HAnimSegment()
HAnimSegment1472.setDEF("hanim_r_metacarpal_3")
HAnimSegment1472.setName("r_metacarpal_3")
TouchSensor1473 = x3d.TouchSensor()
TouchSensor1473.setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3")

HAnimSegment1472.addChild(TouchSensor1473)
Transform1474 = x3d.Transform()
Transform1474.setTranslation(x3d.doubleToFloat([-0.1987,0.8029,-0.053]))
Shape1475 = x3d.Shape()
Shape1475.setUSE("HAnimJointShape")

Transform1474.addChild(Shape1475)

HAnimSegment1472.addChild(Transform1474)
Shape1476 = x3d.Shape()
LineSet1477 = x3d.LineSet()
LineSet1477.setVertexCount([2])
ColorRGBA1478 = x3d.ColorRGBA()
ColorRGBA1478.setUSE("HAnimSegmentLineColorRGBA")

LineSet1477.setColor(ColorRGBA1478)
Coordinate1479 = x3d.Coordinate()
Coordinate1479.setPoint(x3d.doubleToFloat([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]))

LineSet1477.setCoord(Coordinate1479)

Shape1476.setGeometry(LineSet1477)

HAnimSegment1472.addChild(Shape1476)

HAnimJoint1471.addChild(HAnimSegment1472)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1480.setName("r_metacarpophalangeal_3")
HAnimJoint1480.setCenter(x3d.doubleToFloat([-0.1987,0.7818,-0.053]))
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.setDEF("hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1481.setName("r_carpal_proximal_phalanx_3")
TouchSensor1482 = x3d.TouchSensor()
TouchSensor1482.setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3")

HAnimSegment1481.addChild(TouchSensor1482)
Transform1483 = x3d.Transform()
Transform1483.setTranslation(x3d.doubleToFloat([-0.1987,0.7818,-0.053]))
Shape1484 = x3d.Shape()
Shape1484.setUSE("HAnimJointShape")

Transform1483.addChild(Shape1484)

HAnimSegment1481.addChild(Transform1483)
Shape1485 = x3d.Shape()
LineSet1486 = x3d.LineSet()
LineSet1486.setVertexCount([2])
ColorRGBA1487 = x3d.ColorRGBA()
ColorRGBA1487.setUSE("HAnimSegmentLineColorRGBA")

LineSet1486.setColor(ColorRGBA1487)
Coordinate1488 = x3d.Coordinate()
Coordinate1488.setPoint(x3d.doubleToFloat([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]))

LineSet1486.setCoord(Coordinate1488)

Shape1485.setGeometry(LineSet1486)

HAnimSegment1481.addChild(Shape1485)

HAnimJoint1480.addChild(HAnimSegment1481)
HAnimJoint1489 = x3d.HAnimJoint()
HAnimJoint1489.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1489.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1489.setCenter(x3d.doubleToFloat([-0.2013,0.7273,-0.0503]))
HAnimSegment1490 = x3d.HAnimSegment()
HAnimSegment1490.setDEF("hanim_r_carpal_middle_phalanx_3")
HAnimSegment1490.setName("r_carpal_middle_phalanx_3")
TouchSensor1491 = x3d.TouchSensor()
TouchSensor1491.setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3")

HAnimSegment1490.addChild(TouchSensor1491)
Transform1492 = x3d.Transform()
Transform1492.setTranslation(x3d.doubleToFloat([-0.2013,0.7273,-0.0503]))
Shape1493 = x3d.Shape()
Shape1493.setUSE("HAnimJointShape")

Transform1492.addChild(Shape1493)

HAnimSegment1490.addChild(Transform1492)
Shape1494 = x3d.Shape()
LineSet1495 = x3d.LineSet()
LineSet1495.setVertexCount([2])
ColorRGBA1496 = x3d.ColorRGBA()
ColorRGBA1496.setUSE("HAnimSegmentLineColorRGBA")

LineSet1495.setColor(ColorRGBA1496)
Coordinate1497 = x3d.Coordinate()
Coordinate1497.setPoint(x3d.doubleToFloat([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]))

LineSet1495.setCoord(Coordinate1497)

Shape1494.setGeometry(LineSet1495)

HAnimSegment1490.addChild(Shape1494)

HAnimJoint1489.addChild(HAnimSegment1490)
HAnimJoint1498 = x3d.HAnimJoint()
HAnimJoint1498.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1498.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1498.setCenter(x3d.doubleToFloat([-0.2026,0.7011,-0.0494]))
HAnimSegment1499 = x3d.HAnimSegment()
HAnimSegment1499.setDEF("hanim_r_carpal_distal_phalanx_3")
HAnimSegment1499.setName("r_carpal_distal_phalanx_3")
TouchSensor1500 = x3d.TouchSensor()
TouchSensor1500.setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3")

HAnimSegment1499.addChild(TouchSensor1500)
Transform1501 = x3d.Transform()
Transform1501.setTranslation(x3d.doubleToFloat([-0.2026,0.7011,-0.0494]))
Shape1502 = x3d.Shape()
Shape1502.setUSE("HAnimJointShape")

Transform1501.addChild(Shape1502)

HAnimSegment1499.addChild(Transform1501)
Shape1503 = x3d.Shape()
LineSet1504 = x3d.LineSet()
LineSet1504.setVertexCount([2])
ColorRGBA1505 = x3d.ColorRGBA()
ColorRGBA1505.setUSE("HAnimSiteLineColorRGBA")

LineSet1504.setColor(ColorRGBA1505)
Coordinate1506 = x3d.Coordinate()
Coordinate1506.setPoint(x3d.doubleToFloat([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]))

LineSet1504.setCoord(Coordinate1506)

Shape1503.setGeometry(LineSet1504)

HAnimSegment1499.addChild(Shape1503)
HAnimSite1507 = x3d.HAnimSite()
HAnimSite1507.setDEF("hanim_r_carpal_distal_phalanx_3_pt")
HAnimSite1507.setName("r_carpal_distal_phalanx_3_pt")
HAnimSite1507.setTranslation(x3d.doubleToFloat([-0.1969,0.6758,-0.0427]))
TouchSensor1508 = x3d.TouchSensor()
TouchSensor1508.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1507.addChild(TouchSensor1508)
Shape1509 = x3d.Shape()
Shape1509.setUSE("HAnimSiteShape")

HAnimSite1507.addChild(Shape1509)

HAnimSegment1499.addChild(HAnimSite1507)

HAnimJoint1498.addChild(HAnimSegment1499)

HAnimJoint1489.addChild(HAnimJoint1498)

HAnimJoint1480.addChild(HAnimJoint1489)

HAnimJoint1471.addChild(HAnimJoint1480)

HAnimJoint1337.addChild(HAnimJoint1471)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1510.setName("r_carpometacarpal_4")
HAnimJoint1510.setCenter(x3d.doubleToFloat([-0.1956,0.8019,-0.0794]))
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.setDEF("hanim_r_metacarpal_4")
HAnimSegment1511.setName("r_metacarpal_4")
TouchSensor1512 = x3d.TouchSensor()
TouchSensor1512.setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4")

HAnimSegment1511.addChild(TouchSensor1512)
Transform1513 = x3d.Transform()
Transform1513.setTranslation(x3d.doubleToFloat([-0.1956,0.8019,-0.0794]))
Shape1514 = x3d.Shape()
Shape1514.setUSE("HAnimJointShape")

Transform1513.addChild(Shape1514)

HAnimSegment1511.addChild(Transform1513)
Shape1515 = x3d.Shape()
LineSet1516 = x3d.LineSet()
LineSet1516.setVertexCount([2])
ColorRGBA1517 = x3d.ColorRGBA()
ColorRGBA1517.setUSE("HAnimSegmentLineColorRGBA")

LineSet1516.setColor(ColorRGBA1517)
Coordinate1518 = x3d.Coordinate()
Coordinate1518.setPoint(x3d.doubleToFloat([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]))

LineSet1516.setCoord(Coordinate1518)

Shape1515.setGeometry(LineSet1516)

HAnimSegment1511.addChild(Shape1515)

HAnimJoint1510.addChild(HAnimSegment1511)
HAnimJoint1519 = x3d.HAnimJoint()
HAnimJoint1519.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1519.setName("r_metacarpophalangeal_4")
HAnimJoint1519.setCenter(x3d.doubleToFloat([-0.1956,0.7815,-0.0794]))
HAnimSegment1520 = x3d.HAnimSegment()
HAnimSegment1520.setDEF("hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1520.setName("r_carpal_proximal_phalanx_4")
TouchSensor1521 = x3d.TouchSensor()
TouchSensor1521.setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4")

HAnimSegment1520.addChild(TouchSensor1521)
Transform1522 = x3d.Transform()
Transform1522.setTranslation(x3d.doubleToFloat([-0.1956,0.7815,-0.0794]))
Shape1523 = x3d.Shape()
Shape1523.setUSE("HAnimJointShape")

Transform1522.addChild(Shape1523)

HAnimSegment1520.addChild(Transform1522)
Shape1524 = x3d.Shape()
LineSet1525 = x3d.LineSet()
LineSet1525.setVertexCount([2])
ColorRGBA1526 = x3d.ColorRGBA()
ColorRGBA1526.setUSE("HAnimSegmentLineColorRGBA")

LineSet1525.setColor(ColorRGBA1526)
Coordinate1527 = x3d.Coordinate()
Coordinate1527.setPoint(x3d.doubleToFloat([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]))

LineSet1525.setCoord(Coordinate1527)

Shape1524.setGeometry(LineSet1525)

HAnimSegment1520.addChild(Shape1524)

HAnimJoint1519.addChild(HAnimSegment1520)
HAnimJoint1528 = x3d.HAnimJoint()
HAnimJoint1528.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1528.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1528.setCenter(x3d.doubleToFloat([-0.1973,0.7287,-0.0777]))
HAnimSegment1529 = x3d.HAnimSegment()
HAnimSegment1529.setDEF("hanim_r_carpal_middle_phalanx_4")
HAnimSegment1529.setName("r_carpal_middle_phalanx_4")
TouchSensor1530 = x3d.TouchSensor()
TouchSensor1530.setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4")

HAnimSegment1529.addChild(TouchSensor1530)
Transform1531 = x3d.Transform()
Transform1531.setTranslation(x3d.doubleToFloat([-0.1973,0.7287,-0.0777]))
Shape1532 = x3d.Shape()
Shape1532.setUSE("HAnimJointShape")

Transform1531.addChild(Shape1532)

HAnimSegment1529.addChild(Transform1531)
Shape1533 = x3d.Shape()
LineSet1534 = x3d.LineSet()
LineSet1534.setVertexCount([2])
ColorRGBA1535 = x3d.ColorRGBA()
ColorRGBA1535.setUSE("HAnimSegmentLineColorRGBA")

LineSet1534.setColor(ColorRGBA1535)
Coordinate1536 = x3d.Coordinate()
Coordinate1536.setPoint(x3d.doubleToFloat([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]))

LineSet1534.setCoord(Coordinate1536)

Shape1533.setGeometry(LineSet1534)

HAnimSegment1529.addChild(Shape1533)

HAnimJoint1528.addChild(HAnimSegment1529)
HAnimJoint1537 = x3d.HAnimJoint()
HAnimJoint1537.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1537.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1537.setCenter(x3d.doubleToFloat([-0.1983,0.7045,-0.0767]))
HAnimSegment1538 = x3d.HAnimSegment()
HAnimSegment1538.setDEF("hanim_r_carpal_distal_phalanx_4")
HAnimSegment1538.setName("r_carpal_distal_phalanx_4")
TouchSensor1539 = x3d.TouchSensor()
TouchSensor1539.setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4")

HAnimSegment1538.addChild(TouchSensor1539)
Transform1540 = x3d.Transform()
Transform1540.setTranslation(x3d.doubleToFloat([-0.1983,0.7045,-0.0767]))
Shape1541 = x3d.Shape()
Shape1541.setUSE("HAnimJointShape")

Transform1540.addChild(Shape1541)

HAnimSegment1538.addChild(Transform1540)
Shape1542 = x3d.Shape()
LineSet1543 = x3d.LineSet()
LineSet1543.setVertexCount([2])
ColorRGBA1544 = x3d.ColorRGBA()
ColorRGBA1544.setUSE("HAnimSiteLineColorRGBA")

LineSet1543.setColor(ColorRGBA1544)
Coordinate1545 = x3d.Coordinate()
Coordinate1545.setPoint(x3d.doubleToFloat([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]))

LineSet1543.setCoord(Coordinate1545)

Shape1542.setGeometry(LineSet1543)

HAnimSegment1538.addChild(Shape1542)
HAnimSite1546 = x3d.HAnimSite()
HAnimSite1546.setDEF("hanim_r_carpal_distal_phalanx_4_pt")
HAnimSite1546.setName("r_carpal_distal_phalanx_4_pt")
HAnimSite1546.setTranslation(x3d.doubleToFloat([-0.1934,0.6778,-0.0693]))
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1546.addChild(TouchSensor1547)
Shape1548 = x3d.Shape()
Shape1548.setUSE("HAnimSiteShape")

HAnimSite1546.addChild(Shape1548)

HAnimSegment1538.addChild(HAnimSite1546)

HAnimJoint1537.addChild(HAnimSegment1538)

HAnimJoint1528.addChild(HAnimJoint1537)

HAnimJoint1519.addChild(HAnimJoint1528)

HAnimJoint1510.addChild(HAnimJoint1519)

HAnimJoint1337.addChild(HAnimJoint1510)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1549.setName("r_carpometacarpal_5")
HAnimJoint1549.setCenter(x3d.doubleToFloat([-0.1925,0.8066,-0.1036]))
HAnimSegment1550 = x3d.HAnimSegment()
HAnimSegment1550.setDEF("hanim_r_metacarpal_5")
HAnimSegment1550.setName("r_metacarpal_5")
TouchSensor1551 = x3d.TouchSensor()
TouchSensor1551.setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5")

HAnimSegment1550.addChild(TouchSensor1551)
Transform1552 = x3d.Transform()
Transform1552.setTranslation(x3d.doubleToFloat([-0.1925,0.8066,-0.1036]))
Shape1553 = x3d.Shape()
Shape1553.setUSE("HAnimJointShape")

Transform1552.addChild(Shape1553)

HAnimSegment1550.addChild(Transform1552)
Shape1554 = x3d.Shape()
LineSet1555 = x3d.LineSet()
LineSet1555.setVertexCount([2])
ColorRGBA1556 = x3d.ColorRGBA()
ColorRGBA1556.setUSE("HAnimSegmentLineColorRGBA")

LineSet1555.setColor(ColorRGBA1556)
Coordinate1557 = x3d.Coordinate()
Coordinate1557.setPoint(x3d.doubleToFloat([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]))

LineSet1555.setCoord(Coordinate1557)

Shape1554.setGeometry(LineSet1555)

HAnimSegment1550.addChild(Shape1554)

HAnimJoint1549.addChild(HAnimSegment1550)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1558.setName("r_metacarpophalangeal_5")
HAnimJoint1558.setCenter(x3d.doubleToFloat([-0.1925,0.7866,-0.1036]))
HAnimSegment1559 = x3d.HAnimSegment()
HAnimSegment1559.setDEF("hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1559.setName("r_carpal_proximal_phalanx_5")
TouchSensor1560 = x3d.TouchSensor()
TouchSensor1560.setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5")

HAnimSegment1559.addChild(TouchSensor1560)
Transform1561 = x3d.Transform()
Transform1561.setTranslation(x3d.doubleToFloat([-0.1925,0.7866,-0.1036]))
Shape1562 = x3d.Shape()
Shape1562.setUSE("HAnimJointShape")

Transform1561.addChild(Shape1562)

HAnimSegment1559.addChild(Transform1561)
Shape1563 = x3d.Shape()
LineSet1564 = x3d.LineSet()
LineSet1564.setVertexCount([2])
ColorRGBA1565 = x3d.ColorRGBA()
ColorRGBA1565.setUSE("HAnimSegmentLineColorRGBA")

LineSet1564.setColor(ColorRGBA1565)
Coordinate1566 = x3d.Coordinate()
Coordinate1566.setPoint(x3d.doubleToFloat([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]))

LineSet1564.setCoord(Coordinate1566)

Shape1563.setGeometry(LineSet1564)

HAnimSegment1559.addChild(Shape1563)

HAnimJoint1558.addChild(HAnimSegment1559)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1567.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1567.setCenter(x3d.doubleToFloat([-0.1938,0.7452,-0.1024]))
HAnimSegment1568 = x3d.HAnimSegment()
HAnimSegment1568.setDEF("hanim_r_carpal_middle_phalanx_5")
HAnimSegment1568.setName("r_carpal_middle_phalanx_5")
TouchSensor1569 = x3d.TouchSensor()
TouchSensor1569.setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5")

HAnimSegment1568.addChild(TouchSensor1569)
Transform1570 = x3d.Transform()
Transform1570.setTranslation(x3d.doubleToFloat([-0.1938,0.7452,-0.1024]))
Shape1571 = x3d.Shape()
Shape1571.setUSE("HAnimJointShape")

Transform1570.addChild(Shape1571)

HAnimSegment1568.addChild(Transform1570)
Shape1572 = x3d.Shape()
LineSet1573 = x3d.LineSet()
LineSet1573.setVertexCount([2])
ColorRGBA1574 = x3d.ColorRGBA()
ColorRGBA1574.setUSE("HAnimSegmentLineColorRGBA")

LineSet1573.setColor(ColorRGBA1574)
Coordinate1575 = x3d.Coordinate()
Coordinate1575.setPoint(x3d.doubleToFloat([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]))

LineSet1573.setCoord(Coordinate1575)

Shape1572.setGeometry(LineSet1573)

HAnimSegment1568.addChild(Shape1572)

HAnimJoint1567.addChild(HAnimSegment1568)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1576.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1576.setCenter(x3d.doubleToFloat([-0.1948,0.7277,-0.1017]))
HAnimSegment1577 = x3d.HAnimSegment()
HAnimSegment1577.setDEF("hanim_r_carpal_distal_phalanx_5")
HAnimSegment1577.setName("r_carpal_distal_phalanx_5")
TouchSensor1578 = x3d.TouchSensor()
TouchSensor1578.setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5")

HAnimSegment1577.addChild(TouchSensor1578)
Transform1579 = x3d.Transform()
Transform1579.setTranslation(x3d.doubleToFloat([-0.1948,0.7277,-0.1017]))
Shape1580 = x3d.Shape()
Shape1580.setUSE("HAnimJointShape")

Transform1579.addChild(Shape1580)

HAnimSegment1577.addChild(Transform1579)
Shape1581 = x3d.Shape()
LineSet1582 = x3d.LineSet()
LineSet1582.setVertexCount([2])
ColorRGBA1583 = x3d.ColorRGBA()
ColorRGBA1583.setUSE("HAnimSiteLineColorRGBA")

LineSet1582.setColor(ColorRGBA1583)
Coordinate1584 = x3d.Coordinate()
Coordinate1584.setPoint(x3d.doubleToFloat([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]))

LineSet1582.setCoord(Coordinate1584)

Shape1581.setGeometry(LineSet1582)

HAnimSegment1577.addChild(Shape1581)
HAnimSite1585 = x3d.HAnimSite()
HAnimSite1585.setDEF("hanim_r_carpal_distal_phalanx_5_pt")
HAnimSite1585.setName("r_carpal_distal_phalanx_5_pt")
HAnimSite1585.setTranslation(x3d.doubleToFloat([-0.1938,0.7035,-0.0949]))
TouchSensor1586 = x3d.TouchSensor()
TouchSensor1586.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1585.addChild(TouchSensor1586)
Shape1587 = x3d.Shape()
Shape1587.setUSE("HAnimSiteShape")

HAnimSite1585.addChild(Shape1587)

HAnimSegment1577.addChild(HAnimSite1585)

HAnimJoint1576.addChild(HAnimSegment1577)

HAnimJoint1567.addChild(HAnimJoint1576)

HAnimJoint1558.addChild(HAnimJoint1567)

HAnimJoint1549.addChild(HAnimJoint1558)

HAnimJoint1337.addChild(HAnimJoint1549)

HAnimJoint1300.addChild(HAnimJoint1337)

HAnimJoint1284.addChild(HAnimJoint1300)

HAnimJoint1275.addChild(HAnimJoint1284)

HAnimJoint1238.addChild(HAnimJoint1275)

HAnimJoint600.addChild(HAnimJoint1238)

HAnimJoint591.addChild(HAnimJoint600)

HAnimJoint582.addChild(HAnimJoint591)

HAnimJoint573.addChild(HAnimJoint582)

HAnimJoint564.addChild(HAnimJoint573)

HAnimJoint555.addChild(HAnimJoint564)

HAnimJoint546.addChild(HAnimJoint555)

HAnimJoint537.addChild(HAnimJoint546)

HAnimJoint514.addChild(HAnimJoint537)

HAnimJoint498.addChild(HAnimJoint514)

HAnimJoint489.addChild(HAnimJoint498)

HAnimJoint480.addChild(HAnimJoint489)

HAnimJoint471.addChild(HAnimJoint480)

HAnimJoint441.addChild(HAnimJoint471)

HAnimJoint432.addChild(HAnimJoint441)

HAnimJoint423.addChild(HAnimJoint432)

HAnimJoint400.addChild(HAnimJoint423)

HAnimJoint50.addChild(HAnimJoint400)

HAnimHumanoid41.addSkeleton(HAnimJoint50)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.setContainerFieldOverride("joints")
HAnimJoint1588.setUSE("hanim_humanoid_root")

HAnimHumanoid41.addJoints(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.setContainerFieldOverride("joints")
HAnimJoint1589.setUSE("hanim_sacroiliac")

HAnimHumanoid41.addJoints(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.setContainerFieldOverride("joints")
HAnimJoint1590.setUSE("hanim_vl5")

HAnimHumanoid41.addJoints(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.setContainerFieldOverride("joints")
HAnimJoint1591.setUSE("hanim_vl4")

HAnimHumanoid41.addJoints(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.setContainerFieldOverride("joints")
HAnimJoint1592.setUSE("hanim_vl3")

HAnimHumanoid41.addJoints(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.setContainerFieldOverride("joints")
HAnimJoint1593.setUSE("hanim_vl2")

HAnimHumanoid41.addJoints(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.setContainerFieldOverride("joints")
HAnimJoint1594.setUSE("hanim_vl1")

HAnimHumanoid41.addJoints(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.setContainerFieldOverride("joints")
HAnimJoint1595.setUSE("hanim_vt12")

HAnimHumanoid41.addJoints(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.setContainerFieldOverride("joints")
HAnimJoint1596.setUSE("hanim_vt11")

HAnimHumanoid41.addJoints(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.setContainerFieldOverride("joints")
HAnimJoint1597.setUSE("hanim_vt10")

HAnimHumanoid41.addJoints(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.setContainerFieldOverride("joints")
HAnimJoint1598.setUSE("hanim_vt9")

HAnimHumanoid41.addJoints(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.setContainerFieldOverride("joints")
HAnimJoint1599.setUSE("hanim_vt8")

HAnimHumanoid41.addJoints(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.setContainerFieldOverride("joints")
HAnimJoint1600.setUSE("hanim_vt7")

HAnimHumanoid41.addJoints(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.setContainerFieldOverride("joints")
HAnimJoint1601.setUSE("hanim_vt6")

HAnimHumanoid41.addJoints(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.setContainerFieldOverride("joints")
HAnimJoint1602.setUSE("hanim_vt5")

HAnimHumanoid41.addJoints(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.setContainerFieldOverride("joints")
HAnimJoint1603.setUSE("hanim_vt4")

HAnimHumanoid41.addJoints(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.setContainerFieldOverride("joints")
HAnimJoint1604.setUSE("hanim_vt3")

HAnimHumanoid41.addJoints(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.setContainerFieldOverride("joints")
HAnimJoint1605.setUSE("hanim_vt2")

HAnimHumanoid41.addJoints(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.setContainerFieldOverride("joints")
HAnimJoint1606.setUSE("hanim_vt1")

HAnimHumanoid41.addJoints(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.setContainerFieldOverride("joints")
HAnimJoint1607.setUSE("hanim_vc7")

HAnimHumanoid41.addJoints(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.setContainerFieldOverride("joints")
HAnimJoint1608.setUSE("hanim_vc6")

HAnimHumanoid41.addJoints(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.setContainerFieldOverride("joints")
HAnimJoint1609.setUSE("hanim_vc5")

HAnimHumanoid41.addJoints(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setContainerFieldOverride("joints")
HAnimJoint1610.setUSE("hanim_vc4")

HAnimHumanoid41.addJoints(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setContainerFieldOverride("joints")
HAnimJoint1611.setUSE("hanim_vc3")

HAnimHumanoid41.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setContainerFieldOverride("joints")
HAnimJoint1612.setUSE("hanim_vc2")

HAnimHumanoid41.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setContainerFieldOverride("joints")
HAnimJoint1613.setUSE("hanim_vc1")

HAnimHumanoid41.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setContainerFieldOverride("joints")
HAnimJoint1614.setUSE("hanim_skullbase")

HAnimHumanoid41.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setContainerFieldOverride("joints")
HAnimJoint1615.setUSE("hanim_temporomandibular")

HAnimHumanoid41.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setContainerFieldOverride("joints")
HAnimJoint1616.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid41.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setContainerFieldOverride("joints")
HAnimJoint1617.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid41.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setContainerFieldOverride("joints")
HAnimJoint1618.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setContainerFieldOverride("joints")
HAnimJoint1619.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setContainerFieldOverride("joints")
HAnimJoint1620.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.setContainerFieldOverride("joints")
HAnimJoint1621.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.setContainerFieldOverride("joints")
HAnimJoint1622.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.setContainerFieldOverride("joints")
HAnimJoint1623.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.setContainerFieldOverride("joints")
HAnimJoint1624.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.setContainerFieldOverride("joints")
HAnimJoint1625.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.setContainerFieldOverride("joints")
HAnimJoint1626.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid41.addJoints(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.setContainerFieldOverride("joints")
HAnimJoint1627.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid41.addJoints(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.setContainerFieldOverride("joints")
HAnimJoint1628.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.setContainerFieldOverride("joints")
HAnimJoint1629.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.setContainerFieldOverride("joints")
HAnimJoint1630.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.setContainerFieldOverride("joints")
HAnimJoint1631.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.setContainerFieldOverride("joints")
HAnimJoint1632.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.setContainerFieldOverride("joints")
HAnimJoint1633.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.setContainerFieldOverride("joints")
HAnimJoint1634.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.setContainerFieldOverride("joints")
HAnimJoint1635.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setContainerFieldOverride("joints")
HAnimJoint1636.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid41.addJoints(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.setContainerFieldOverride("joints")
HAnimJoint1637.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid41.addJoints(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.setContainerFieldOverride("joints")
HAnimJoint1638.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid41.addJoints(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.setContainerFieldOverride("joints")
HAnimJoint1639.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid41.addJoints(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.setContainerFieldOverride("joints")
HAnimJoint1640.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid41.addJoints(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.setContainerFieldOverride("joints")
HAnimJoint1641.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid41.addJoints(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.setContainerFieldOverride("joints")
HAnimJoint1642.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid41.addJoints(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.setContainerFieldOverride("joints")
HAnimJoint1643.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid41.addJoints(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.setContainerFieldOverride("joints")
HAnimJoint1644.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid41.addJoints(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.setContainerFieldOverride("joints")
HAnimJoint1645.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid41.addJoints(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.setContainerFieldOverride("joints")
HAnimJoint1646.setUSE("hanim_l_elbow")

HAnimHumanoid41.addJoints(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.setContainerFieldOverride("joints")
HAnimJoint1647.setUSE("hanim_r_elbow")

HAnimHumanoid41.addJoints(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.setContainerFieldOverride("joints")
HAnimJoint1648.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid41.addJoints(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.setContainerFieldOverride("joints")
HAnimJoint1649.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid41.addJoints(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.setContainerFieldOverride("joints")
HAnimJoint1650.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid41.addJoints(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.setContainerFieldOverride("joints")
HAnimJoint1651.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid41.addJoints(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.setContainerFieldOverride("joints")
HAnimJoint1652.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid41.addJoints(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.setContainerFieldOverride("joints")
HAnimJoint1653.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid41.addJoints(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.setContainerFieldOverride("joints")
HAnimJoint1654.setUSE("hanim_l_hip")

HAnimHumanoid41.addJoints(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.setContainerFieldOverride("joints")
HAnimJoint1655.setUSE("hanim_r_hip")

HAnimHumanoid41.addJoints(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.setContainerFieldOverride("joints")
HAnimJoint1656.setUSE("hanim_l_knee")

HAnimHumanoid41.addJoints(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.setContainerFieldOverride("joints")
HAnimJoint1657.setUSE("hanim_r_knee")

HAnimHumanoid41.addJoints(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.setContainerFieldOverride("joints")
HAnimJoint1658.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid41.addJoints(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.setContainerFieldOverride("joints")
HAnimJoint1659.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid41.addJoints(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setContainerFieldOverride("joints")
HAnimJoint1660.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.setContainerFieldOverride("joints")
HAnimJoint1661.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.setContainerFieldOverride("joints")
HAnimJoint1662.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.setContainerFieldOverride("joints")
HAnimJoint1663.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid41.addJoints(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.setContainerFieldOverride("joints")
HAnimJoint1664.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.setContainerFieldOverride("joints")
HAnimJoint1665.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid41.addJoints(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.setContainerFieldOverride("joints")
HAnimJoint1666.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.setContainerFieldOverride("joints")
HAnimJoint1667.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid41.addJoints(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.setContainerFieldOverride("joints")
HAnimJoint1668.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.setContainerFieldOverride("joints")
HAnimJoint1669.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.setContainerFieldOverride("joints")
HAnimJoint1670.setUSE("hanim_l_radiocarpal")

HAnimHumanoid41.addJoints(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.setContainerFieldOverride("joints")
HAnimJoint1671.setUSE("hanim_r_radiocarpal")

HAnimHumanoid41.addJoints(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.setContainerFieldOverride("joints")
HAnimJoint1672.setUSE("hanim_l_shoulder")

HAnimHumanoid41.addJoints(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setContainerFieldOverride("joints")
HAnimJoint1673.setUSE("hanim_r_shoulder")

HAnimHumanoid41.addJoints(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.setContainerFieldOverride("joints")
HAnimJoint1674.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid41.addJoints(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.setContainerFieldOverride("joints")
HAnimJoint1675.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid41.addJoints(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.setContainerFieldOverride("joints")
HAnimJoint1676.setUSE("hanim_l_talocrural")

HAnimHumanoid41.addJoints(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.setContainerFieldOverride("joints")
HAnimJoint1677.setUSE("hanim_r_talocrural")

HAnimHumanoid41.addJoints(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.setContainerFieldOverride("joints")
HAnimJoint1678.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.setContainerFieldOverride("joints")
HAnimJoint1679.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.addJoints(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.setContainerFieldOverride("joints")
HAnimJoint1680.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid41.addJoints(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.setContainerFieldOverride("joints")
HAnimJoint1681.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid41.addJoints(HAnimJoint1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.setContainerFieldOverride("segments")
HAnimSegment1682.setUSE("hanim_pelvis")

HAnimHumanoid41.addSegments(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.setContainerFieldOverride("segments")
HAnimSegment1683.setUSE("hanim_skull")

HAnimHumanoid41.addSegments(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.setContainerFieldOverride("segments")
HAnimSegment1684.setUSE("hanim_jaw")

HAnimHumanoid41.addSegments(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.setContainerFieldOverride("segments")
HAnimSegment1685.setUSE("hanim_c1")

HAnimHumanoid41.addSegments(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.setContainerFieldOverride("segments")
HAnimSegment1686.setUSE("hanim_c2")

HAnimHumanoid41.addSegments(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.setContainerFieldOverride("segments")
HAnimSegment1687.setUSE("hanim_c3")

HAnimHumanoid41.addSegments(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.setContainerFieldOverride("segments")
HAnimSegment1688.setUSE("hanim_c4")

HAnimHumanoid41.addSegments(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.setContainerFieldOverride("segments")
HAnimSegment1689.setUSE("hanim_c5")

HAnimHumanoid41.addSegments(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.setContainerFieldOverride("segments")
HAnimSegment1690.setUSE("hanim_c6")

HAnimHumanoid41.addSegments(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.setContainerFieldOverride("segments")
HAnimSegment1691.setUSE("hanim_c7")

HAnimHumanoid41.addSegments(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.setContainerFieldOverride("segments")
HAnimSegment1692.setUSE("hanim_t1")

HAnimHumanoid41.addSegments(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.setContainerFieldOverride("segments")
HAnimSegment1693.setUSE("hanim_t2")

HAnimHumanoid41.addSegments(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.setContainerFieldOverride("segments")
HAnimSegment1694.setUSE("hanim_t3")

HAnimHumanoid41.addSegments(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.setContainerFieldOverride("segments")
HAnimSegment1695.setUSE("hanim_t4")

HAnimHumanoid41.addSegments(HAnimSegment1695)
HAnimSegment1696 = x3d.HAnimSegment()
HAnimSegment1696.setContainerFieldOverride("segments")
HAnimSegment1696.setUSE("hanim_t5")

HAnimHumanoid41.addSegments(HAnimSegment1696)
HAnimSegment1697 = x3d.HAnimSegment()
HAnimSegment1697.setContainerFieldOverride("segments")
HAnimSegment1697.setUSE("hanim_t6")

HAnimHumanoid41.addSegments(HAnimSegment1697)
HAnimSegment1698 = x3d.HAnimSegment()
HAnimSegment1698.setContainerFieldOverride("segments")
HAnimSegment1698.setUSE("hanim_t7")

HAnimHumanoid41.addSegments(HAnimSegment1698)
HAnimSegment1699 = x3d.HAnimSegment()
HAnimSegment1699.setContainerFieldOverride("segments")
HAnimSegment1699.setUSE("hanim_t8")

HAnimHumanoid41.addSegments(HAnimSegment1699)
HAnimSegment1700 = x3d.HAnimSegment()
HAnimSegment1700.setContainerFieldOverride("segments")
HAnimSegment1700.setUSE("hanim_t9")

HAnimHumanoid41.addSegments(HAnimSegment1700)
HAnimSegment1701 = x3d.HAnimSegment()
HAnimSegment1701.setContainerFieldOverride("segments")
HAnimSegment1701.setUSE("hanim_t10")

HAnimHumanoid41.addSegments(HAnimSegment1701)
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.setContainerFieldOverride("segments")
HAnimSegment1702.setUSE("hanim_t11")

HAnimHumanoid41.addSegments(HAnimSegment1702)
HAnimSegment1703 = x3d.HAnimSegment()
HAnimSegment1703.setContainerFieldOverride("segments")
HAnimSegment1703.setUSE("hanim_t12")

HAnimHumanoid41.addSegments(HAnimSegment1703)
HAnimSegment1704 = x3d.HAnimSegment()
HAnimSegment1704.setContainerFieldOverride("segments")
HAnimSegment1704.setUSE("hanim_l1")

HAnimHumanoid41.addSegments(HAnimSegment1704)
HAnimSegment1705 = x3d.HAnimSegment()
HAnimSegment1705.setContainerFieldOverride("segments")
HAnimSegment1705.setUSE("hanim_l2")

HAnimHumanoid41.addSegments(HAnimSegment1705)
HAnimSegment1706 = x3d.HAnimSegment()
HAnimSegment1706.setContainerFieldOverride("segments")
HAnimSegment1706.setUSE("hanim_l3")

HAnimHumanoid41.addSegments(HAnimSegment1706)
HAnimSegment1707 = x3d.HAnimSegment()
HAnimSegment1707.setContainerFieldOverride("segments")
HAnimSegment1707.setUSE("hanim_l4")

HAnimHumanoid41.addSegments(HAnimSegment1707)
HAnimSegment1708 = x3d.HAnimSegment()
HAnimSegment1708.setContainerFieldOverride("segments")
HAnimSegment1708.setUSE("hanim_l5")

HAnimHumanoid41.addSegments(HAnimSegment1708)
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.setContainerFieldOverride("segments")
HAnimSegment1709.setUSE("hanim_sacrum")

HAnimHumanoid41.addSegments(HAnimSegment1709)
HAnimSegment1710 = x3d.HAnimSegment()
HAnimSegment1710.setContainerFieldOverride("segments")
HAnimSegment1710.setUSE("hanim_l_calf")

HAnimHumanoid41.addSegments(HAnimSegment1710)
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.setContainerFieldOverride("segments")
HAnimSegment1711.setUSE("hanim_r_calf")

HAnimHumanoid41.addSegments(HAnimSegment1711)
HAnimSegment1712 = x3d.HAnimSegment()
HAnimSegment1712.setContainerFieldOverride("segments")
HAnimSegment1712.setUSE("hanim_l_carpal")

HAnimHumanoid41.addSegments(HAnimSegment1712)
HAnimSegment1713 = x3d.HAnimSegment()
HAnimSegment1713.setContainerFieldOverride("segments")
HAnimSegment1713.setUSE("hanim_r_carpal")

HAnimHumanoid41.addSegments(HAnimSegment1713)
HAnimSegment1714 = x3d.HAnimSegment()
HAnimSegment1714.setContainerFieldOverride("segments")
HAnimSegment1714.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid41.addSegments(HAnimSegment1714)
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.setContainerFieldOverride("segments")
HAnimSegment1715.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid41.addSegments(HAnimSegment1715)
HAnimSegment1716 = x3d.HAnimSegment()
HAnimSegment1716.setContainerFieldOverride("segments")
HAnimSegment1716.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1716)
HAnimSegment1717 = x3d.HAnimSegment()
HAnimSegment1717.setContainerFieldOverride("segments")
HAnimSegment1717.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1717)
HAnimSegment1718 = x3d.HAnimSegment()
HAnimSegment1718.setContainerFieldOverride("segments")
HAnimSegment1718.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1718)
HAnimSegment1719 = x3d.HAnimSegment()
HAnimSegment1719.setContainerFieldOverride("segments")
HAnimSegment1719.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1719)
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.setContainerFieldOverride("segments")
HAnimSegment1720.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1720)
HAnimSegment1721 = x3d.HAnimSegment()
HAnimSegment1721.setContainerFieldOverride("segments")
HAnimSegment1721.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1721)
HAnimSegment1722 = x3d.HAnimSegment()
HAnimSegment1722.setContainerFieldOverride("segments")
HAnimSegment1722.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1722)
HAnimSegment1723 = x3d.HAnimSegment()
HAnimSegment1723.setContainerFieldOverride("segments")
HAnimSegment1723.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1723)
HAnimSegment1724 = x3d.HAnimSegment()
HAnimSegment1724.setContainerFieldOverride("segments")
HAnimSegment1724.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1724)
HAnimSegment1725 = x3d.HAnimSegment()
HAnimSegment1725.setContainerFieldOverride("segments")
HAnimSegment1725.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1725)
HAnimSegment1726 = x3d.HAnimSegment()
HAnimSegment1726.setContainerFieldOverride("segments")
HAnimSegment1726.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1726)
HAnimSegment1727 = x3d.HAnimSegment()
HAnimSegment1727.setContainerFieldOverride("segments")
HAnimSegment1727.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1727)
HAnimSegment1728 = x3d.HAnimSegment()
HAnimSegment1728.setContainerFieldOverride("segments")
HAnimSegment1728.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1728)
HAnimSegment1729 = x3d.HAnimSegment()
HAnimSegment1729.setContainerFieldOverride("segments")
HAnimSegment1729.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1729)
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.setContainerFieldOverride("segments")
HAnimSegment1730.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1730)
HAnimSegment1731 = x3d.HAnimSegment()
HAnimSegment1731.setContainerFieldOverride("segments")
HAnimSegment1731.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1731)
HAnimSegment1732 = x3d.HAnimSegment()
HAnimSegment1732.setContainerFieldOverride("segments")
HAnimSegment1732.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid41.addSegments(HAnimSegment1732)
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.setContainerFieldOverride("segments")
HAnimSegment1733.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid41.addSegments(HAnimSegment1733)
HAnimSegment1734 = x3d.HAnimSegment()
HAnimSegment1734.setContainerFieldOverride("segments")
HAnimSegment1734.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1734)
HAnimSegment1735 = x3d.HAnimSegment()
HAnimSegment1735.setContainerFieldOverride("segments")
HAnimSegment1735.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1735)
HAnimSegment1736 = x3d.HAnimSegment()
HAnimSegment1736.setContainerFieldOverride("segments")
HAnimSegment1736.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1736)
HAnimSegment1737 = x3d.HAnimSegment()
HAnimSegment1737.setContainerFieldOverride("segments")
HAnimSegment1737.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid41.addSegments(HAnimSegment1737)
HAnimSegment1738 = x3d.HAnimSegment()
HAnimSegment1738.setContainerFieldOverride("segments")
HAnimSegment1738.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1738)
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.setContainerFieldOverride("segments")
HAnimSegment1739.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid41.addSegments(HAnimSegment1739)
HAnimSegment1740 = x3d.HAnimSegment()
HAnimSegment1740.setContainerFieldOverride("segments")
HAnimSegment1740.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1740)
HAnimSegment1741 = x3d.HAnimSegment()
HAnimSegment1741.setContainerFieldOverride("segments")
HAnimSegment1741.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid41.addSegments(HAnimSegment1741)
HAnimSegment1742 = x3d.HAnimSegment()
HAnimSegment1742.setContainerFieldOverride("segments")
HAnimSegment1742.setUSE("hanim_l_clavicle")

HAnimHumanoid41.addSegments(HAnimSegment1742)
HAnimSegment1743 = x3d.HAnimSegment()
HAnimSegment1743.setContainerFieldOverride("segments")
HAnimSegment1743.setUSE("hanim_r_clavicle")

HAnimHumanoid41.addSegments(HAnimSegment1743)
HAnimSegment1744 = x3d.HAnimSegment()
HAnimSegment1744.setContainerFieldOverride("segments")
HAnimSegment1744.setUSE("hanim_l_eyeball")

HAnimHumanoid41.addSegments(HAnimSegment1744)
HAnimSegment1745 = x3d.HAnimSegment()
HAnimSegment1745.setContainerFieldOverride("segments")
HAnimSegment1745.setUSE("hanim_r_eyeball")

HAnimHumanoid41.addSegments(HAnimSegment1745)
HAnimSegment1746 = x3d.HAnimSegment()
HAnimSegment1746.setContainerFieldOverride("segments")
HAnimSegment1746.setUSE("hanim_l_eyebrow")

HAnimHumanoid41.addSegments(HAnimSegment1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.setContainerFieldOverride("segments")
HAnimSegment1747.setUSE("hanim_r_eyebrow")

HAnimHumanoid41.addSegments(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.setContainerFieldOverride("segments")
HAnimSegment1748.setUSE("hanim_l_eyelid")

HAnimHumanoid41.addSegments(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.setContainerFieldOverride("segments")
HAnimSegment1749.setUSE("hanim_r_eyelid")

HAnimHumanoid41.addSegments(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.setContainerFieldOverride("segments")
HAnimSegment1750.setUSE("hanim_l_forearm")

HAnimHumanoid41.addSegments(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.setContainerFieldOverride("segments")
HAnimSegment1751.setUSE("hanim_r_forearm")

HAnimHumanoid41.addSegments(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.setContainerFieldOverride("segments")
HAnimSegment1752.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid41.addSegments(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.setContainerFieldOverride("segments")
HAnimSegment1753.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid41.addSegments(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.setContainerFieldOverride("segments")
HAnimSegment1754.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid41.addSegments(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.setContainerFieldOverride("segments")
HAnimSegment1755.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid41.addSegments(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.setContainerFieldOverride("segments")
HAnimSegment1756.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid41.addSegments(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setContainerFieldOverride("segments")
HAnimSegment1757.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid41.addSegments(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.setContainerFieldOverride("segments")
HAnimSegment1758.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid41.addSegments(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.setContainerFieldOverride("segments")
HAnimSegment1759.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid41.addSegments(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.setContainerFieldOverride("segments")
HAnimSegment1760.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid41.addSegments(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.setContainerFieldOverride("segments")
HAnimSegment1761.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid41.addSegments(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.setContainerFieldOverride("segments")
HAnimSegment1762.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid41.addSegments(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setContainerFieldOverride("segments")
HAnimSegment1763.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid41.addSegments(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setContainerFieldOverride("segments")
HAnimSegment1764.setUSE("hanim_l_scapula")

HAnimHumanoid41.addSegments(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.setContainerFieldOverride("segments")
HAnimSegment1765.setUSE("hanim_r_scapula")

HAnimHumanoid41.addSegments(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.setContainerFieldOverride("segments")
HAnimSegment1766.setUSE("hanim_l_talus")

HAnimHumanoid41.addSegments(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.setContainerFieldOverride("segments")
HAnimSegment1767.setUSE("hanim_r_talus")

HAnimHumanoid41.addSegments(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.setContainerFieldOverride("segments")
HAnimSegment1768.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setContainerFieldOverride("segments")
HAnimSegment1769.setUSE("hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.setContainerFieldOverride("segments")
HAnimSegment1770.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.setContainerFieldOverride("segments")
HAnimSegment1771.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid41.addSegments(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.setContainerFieldOverride("segments")
HAnimSegment1772.setUSE("hanim_l_thigh")

HAnimHumanoid41.addSegments(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.setContainerFieldOverride("segments")
HAnimSegment1773.setUSE("hanim_r_thigh")

HAnimHumanoid41.addSegments(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.setContainerFieldOverride("segments")
HAnimSegment1774.setUSE("hanim_l_upperarm")

HAnimHumanoid41.addSegments(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.setContainerFieldOverride("segments")
HAnimSegment1775.setUSE("hanim_r_upperarm")

HAnimHumanoid41.addSegments(HAnimSegment1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.setContainerFieldOverride("sites")
HAnimSite1776.setUSE("hanim_crotch_pt")

HAnimHumanoid41.addSites(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.setContainerFieldOverride("sites")
HAnimSite1777.setUSE("hanim_skull_vertex_pt")

HAnimHumanoid41.addSites(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.setContainerFieldOverride("sites")
HAnimSite1778.setUSE("hanim_sellion_pt")

HAnimHumanoid41.addSites(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.setContainerFieldOverride("sites")
HAnimSite1779.setUSE("hanim_supramenton_pt")

HAnimHumanoid41.addSites(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.setContainerFieldOverride("sites")
HAnimSite1780.setUSE("hanim_nuchale_pt")

HAnimHumanoid41.addSites(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.setContainerFieldOverride("sites")
HAnimSite1781.setUSE("hanim_suprasternale_pt")

HAnimHumanoid41.addSites(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.setContainerFieldOverride("sites")
HAnimSite1782.setUSE("hanim_cervicale_pt")

HAnimHumanoid41.addSites(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.setContainerFieldOverride("sites")
HAnimSite1783.setUSE("hanim_substernale_pt")

HAnimHumanoid41.addSites(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.setContainerFieldOverride("sites")
HAnimSite1784.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid41.addSites(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.setContainerFieldOverride("sites")
HAnimSite1785.setUSE("hanim_waist_preferred_posterior_pt")

HAnimHumanoid41.addSites(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.setContainerFieldOverride("sites")
HAnimSite1786.setUSE("hanim_navel_pt")

HAnimHumanoid41.addSites(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.setContainerFieldOverride("sites")
HAnimSite1787.setUSE("hanim_l_acromion_pt")

HAnimHumanoid41.addSites(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.setContainerFieldOverride("sites")
HAnimSite1788.setUSE("hanim_r_acromion_pt")

HAnimHumanoid41.addSites(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.setContainerFieldOverride("sites")
HAnimSite1789.setUSE("hanim_r_asis_pt")

HAnimHumanoid41.addSites(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.setContainerFieldOverride("sites")
HAnimSite1790.setUSE("hanim_l_asis_pt")

HAnimHumanoid41.addSites(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.setContainerFieldOverride("sites")
HAnimSite1791.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid41.addSites(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.setContainerFieldOverride("sites")
HAnimSite1792.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid41.addSites(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.setContainerFieldOverride("sites")
HAnimSite1793.setUSE("hanim_l_axilla_proximal_pt")

HAnimHumanoid41.addSites(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.setContainerFieldOverride("sites")
HAnimSite1794.setUSE("hanim_r_axilla_proximal_pt")

HAnimHumanoid41.addSites(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.setContainerFieldOverride("sites")
HAnimSite1795.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid41.addSites(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.setContainerFieldOverride("sites")
HAnimSite1796.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid41.addSites(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.setContainerFieldOverride("sites")
HAnimSite1797.setUSE("hanim_l_carpal_distal_phalanx_1_pt")

HAnimHumanoid41.addSites(HAnimSite1797)
HAnimSite1798 = x3d.HAnimSite()
HAnimSite1798.setContainerFieldOverride("sites")
HAnimSite1798.setUSE("hanim_r_carpal_distal_phalanx_1_pt")

HAnimHumanoid41.addSites(HAnimSite1798)
HAnimSite1799 = x3d.HAnimSite()
HAnimSite1799.setContainerFieldOverride("sites")
HAnimSite1799.setUSE("hanim_l_carpal_distal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1799)
HAnimSite1800 = x3d.HAnimSite()
HAnimSite1800.setContainerFieldOverride("sites")
HAnimSite1800.setUSE("hanim_r_carpal_distal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1800)
HAnimSite1801 = x3d.HAnimSite()
HAnimSite1801.setContainerFieldOverride("sites")
HAnimSite1801.setUSE("hanim_l_carpal_distal_phalanx_3_pt")

HAnimHumanoid41.addSites(HAnimSite1801)
HAnimSite1802 = x3d.HAnimSite()
HAnimSite1802.setContainerFieldOverride("sites")
HAnimSite1802.setUSE("hanim_r_carpal_distal_phalanx_3_pt")

HAnimHumanoid41.addSites(HAnimSite1802)
HAnimSite1803 = x3d.HAnimSite()
HAnimSite1803.setContainerFieldOverride("sites")
HAnimSite1803.setUSE("hanim_l_carpal_distal_phalanx_4_pt")

HAnimHumanoid41.addSites(HAnimSite1803)
HAnimSite1804 = x3d.HAnimSite()
HAnimSite1804.setContainerFieldOverride("sites")
HAnimSite1804.setUSE("hanim_r_carpal_distal_phalanx_4_pt")

HAnimHumanoid41.addSites(HAnimSite1804)
HAnimSite1805 = x3d.HAnimSite()
HAnimSite1805.setContainerFieldOverride("sites")
HAnimSite1805.setUSE("hanim_l_carpal_distal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1805)
HAnimSite1806 = x3d.HAnimSite()
HAnimSite1806.setContainerFieldOverride("sites")
HAnimSite1806.setUSE("hanim_r_carpal_distal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1806)
HAnimSite1807 = x3d.HAnimSite()
HAnimSite1807.setContainerFieldOverride("sites")
HAnimSite1807.setUSE("hanim_l_clavicle_pt")

HAnimHumanoid41.addSites(HAnimSite1807)
HAnimSite1808 = x3d.HAnimSite()
HAnimSite1808.setContainerFieldOverride("sites")
HAnimSite1808.setUSE("hanim_r_clavicle_pt")

HAnimHumanoid41.addSites(HAnimSite1808)
HAnimSite1809 = x3d.HAnimSite()
HAnimSite1809.setContainerFieldOverride("sites")
HAnimSite1809.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid41.addSites(HAnimSite1809)
HAnimSite1810 = x3d.HAnimSite()
HAnimSite1810.setContainerFieldOverride("sites")
HAnimSite1810.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid41.addSites(HAnimSite1810)
HAnimSite1811 = x3d.HAnimSite()
HAnimSite1811.setContainerFieldOverride("sites")
HAnimSite1811.setUSE("hanim_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1811)
HAnimSite1812 = x3d.HAnimSite()
HAnimSite1812.setContainerFieldOverride("sites")
HAnimSite1812.setUSE("hanim_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1812)
HAnimSite1813 = x3d.HAnimSite()
HAnimSite1813.setContainerFieldOverride("sites")
HAnimSite1813.setUSE("hanim_l_femoral_medial_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1813)
HAnimSite1814 = x3d.HAnimSite()
HAnimSite1814.setContainerFieldOverride("sites")
HAnimSite1814.setUSE("hanim_r_femoral_medial_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1814)
HAnimSite1815 = x3d.HAnimSite()
HAnimSite1815.setContainerFieldOverride("sites")
HAnimSite1815.setUSE("hanim_l_forefoot_tip_pt")

HAnimHumanoid41.addSites(HAnimSite1815)
HAnimSite1816 = x3d.HAnimSite()
HAnimSite1816.setContainerFieldOverride("sites")
HAnimSite1816.setUSE("hanim_r_forefoot_tip_pt")

HAnimHumanoid41.addSites(HAnimSite1816)
HAnimSite1817 = x3d.HAnimSite()
HAnimSite1817.setContainerFieldOverride("sites")
HAnimSite1817.setUSE("hanim_r_gonion_pt")

HAnimHumanoid41.addSites(HAnimSite1817)
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.setContainerFieldOverride("sites")
HAnimSite1818.setUSE("hanim_l_gonion_pt")

HAnimHumanoid41.addSites(HAnimSite1818)
HAnimSite1819 = x3d.HAnimSite()
HAnimSite1819.setContainerFieldOverride("sites")
HAnimSite1819.setUSE("hanim_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1819)
HAnimSite1820 = x3d.HAnimSite()
HAnimSite1820.setContainerFieldOverride("sites")
HAnimSite1820.setUSE("hanim_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1820)
HAnimSite1821 = x3d.HAnimSite()
HAnimSite1821.setContainerFieldOverride("sites")
HAnimSite1821.setUSE("hanim_l_humeral_medial_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1821)
HAnimSite1822 = x3d.HAnimSite()
HAnimSite1822.setContainerFieldOverride("sites")
HAnimSite1822.setUSE("hanim_r_humeral_medial_epicondyle_pt")

HAnimHumanoid41.addSites(HAnimSite1822)
HAnimSite1823 = x3d.HAnimSite()
HAnimSite1823.setContainerFieldOverride("sites")
HAnimSite1823.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid41.addSites(HAnimSite1823)
HAnimSite1824 = x3d.HAnimSite()
HAnimSite1824.setContainerFieldOverride("sites")
HAnimSite1824.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid41.addSites(HAnimSite1824)
HAnimSite1825 = x3d.HAnimSite()
HAnimSite1825.setContainerFieldOverride("sites")
HAnimSite1825.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid41.addSites(HAnimSite1825)
HAnimSite1826 = x3d.HAnimSite()
HAnimSite1826.setContainerFieldOverride("sites")
HAnimSite1826.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid41.addSites(HAnimSite1826)
HAnimSite1827 = x3d.HAnimSite()
HAnimSite1827.setContainerFieldOverride("sites")
HAnimSite1827.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid41.addSites(HAnimSite1827)
HAnimSite1828 = x3d.HAnimSite()
HAnimSite1828.setContainerFieldOverride("sites")
HAnimSite1828.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid41.addSites(HAnimSite1828)
HAnimSite1829 = x3d.HAnimSite()
HAnimSite1829.setContainerFieldOverride("sites")
HAnimSite1829.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid41.addSites(HAnimSite1829)
HAnimSite1830 = x3d.HAnimSite()
HAnimSite1830.setContainerFieldOverride("sites")
HAnimSite1830.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid41.addSites(HAnimSite1830)
HAnimSite1831 = x3d.HAnimSite()
HAnimSite1831.setContainerFieldOverride("sites")
HAnimSite1831.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid41.addSites(HAnimSite1831)
HAnimSite1832 = x3d.HAnimSite()
HAnimSite1832.setContainerFieldOverride("sites")
HAnimSite1832.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid41.addSites(HAnimSite1832)
HAnimSite1833 = x3d.HAnimSite()
HAnimSite1833.setContainerFieldOverride("sites")
HAnimSite1833.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1833)
HAnimSite1834 = x3d.HAnimSite()
HAnimSite1834.setContainerFieldOverride("sites")
HAnimSite1834.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1834)
HAnimSite1835 = x3d.HAnimSite()
HAnimSite1835.setContainerFieldOverride("sites")
HAnimSite1835.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1835)
HAnimSite1836 = x3d.HAnimSite()
HAnimSite1836.setContainerFieldOverride("sites")
HAnimSite1836.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1836)
HAnimSite1837 = x3d.HAnimSite()
HAnimSite1837.setContainerFieldOverride("sites")
HAnimSite1837.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid41.addSites(HAnimSite1837)
HAnimSite1838 = x3d.HAnimSite()
HAnimSite1838.setContainerFieldOverride("sites")
HAnimSite1838.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid41.addSites(HAnimSite1838)
HAnimSite1839 = x3d.HAnimSite()
HAnimSite1839.setContainerFieldOverride("sites")
HAnimSite1839.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1839)
HAnimSite1840 = x3d.HAnimSite()
HAnimSite1840.setContainerFieldOverride("sites")
HAnimSite1840.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid41.addSites(HAnimSite1840)
HAnimSite1841 = x3d.HAnimSite()
HAnimSite1841.setContainerFieldOverride("sites")
HAnimSite1841.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid41.addSites(HAnimSite1841)
HAnimSite1842 = x3d.HAnimSite()
HAnimSite1842.setContainerFieldOverride("sites")
HAnimSite1842.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid41.addSites(HAnimSite1842)
HAnimSite1843 = x3d.HAnimSite()
HAnimSite1843.setContainerFieldOverride("sites")
HAnimSite1843.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid41.addSites(HAnimSite1843)
HAnimSite1844 = x3d.HAnimSite()
HAnimSite1844.setContainerFieldOverride("sites")
HAnimSite1844.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid41.addSites(HAnimSite1844)
HAnimSite1845 = x3d.HAnimSite()
HAnimSite1845.setContainerFieldOverride("sites")
HAnimSite1845.setUSE("hanim_r_psis_pt")

HAnimHumanoid41.addSites(HAnimSite1845)
HAnimSite1846 = x3d.HAnimSite()
HAnimSite1846.setContainerFieldOverride("sites")
HAnimSite1846.setUSE("hanim_l_psis_pt")

HAnimHumanoid41.addSites(HAnimSite1846)
HAnimSite1847 = x3d.HAnimSite()
HAnimSite1847.setContainerFieldOverride("sites")
HAnimSite1847.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid41.addSites(HAnimSite1847)
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.setContainerFieldOverride("sites")
HAnimSite1848.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid41.addSites(HAnimSite1848)
HAnimSite1849 = x3d.HAnimSite()
HAnimSite1849.setContainerFieldOverride("sites")
HAnimSite1849.setUSE("hanim_l_radiale_pt")

HAnimHumanoid41.addSites(HAnimSite1849)
HAnimSite1850 = x3d.HAnimSite()
HAnimSite1850.setContainerFieldOverride("sites")
HAnimSite1850.setUSE("hanim_r_radiale_pt")

HAnimHumanoid41.addSites(HAnimSite1850)
HAnimSite1851 = x3d.HAnimSite()
HAnimSite1851.setContainerFieldOverride("sites")
HAnimSite1851.setUSE("hanim_r_rib10_pt")

HAnimHumanoid41.addSites(HAnimSite1851)
HAnimSite1852 = x3d.HAnimSite()
HAnimSite1852.setContainerFieldOverride("sites")
HAnimSite1852.setUSE("hanim_l_rib10_pt")

HAnimHumanoid41.addSites(HAnimSite1852)
HAnimSite1853 = x3d.HAnimSite()
HAnimSite1853.setContainerFieldOverride("sites")
HAnimSite1853.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid41.addSites(HAnimSite1853)
HAnimSite1854 = x3d.HAnimSite()
HAnimSite1854.setContainerFieldOverride("sites")
HAnimSite1854.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid41.addSites(HAnimSite1854)
HAnimSite1855 = x3d.HAnimSite()
HAnimSite1855.setContainerFieldOverride("sites")
HAnimSite1855.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid41.addSites(HAnimSite1855)
HAnimSite1856 = x3d.HAnimSite()
HAnimSite1856.setContainerFieldOverride("sites")
HAnimSite1856.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid41.addSites(HAnimSite1856)
HAnimSite1857 = x3d.HAnimSite()
HAnimSite1857.setContainerFieldOverride("sites")
HAnimSite1857.setUSE("hanim_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1857)
HAnimSite1858 = x3d.HAnimSite()
HAnimSite1858.setContainerFieldOverride("sites")
HAnimSite1858.setUSE("hanim_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid41.addSites(HAnimSite1858)
HAnimSite1859 = x3d.HAnimSite()
HAnimSite1859.setContainerFieldOverride("sites")
HAnimSite1859.setUSE("hanim_r_thelion_pt")

HAnimHumanoid41.addSites(HAnimSite1859)
HAnimSite1860 = x3d.HAnimSite()
HAnimSite1860.setContainerFieldOverride("sites")
HAnimSite1860.setUSE("hanim_l_thelion_pt")

HAnimHumanoid41.addSites(HAnimSite1860)
HAnimSite1861 = x3d.HAnimSite()
HAnimSite1861.setContainerFieldOverride("sites")
HAnimSite1861.setUSE("hanim_r_tragion_pt")

HAnimHumanoid41.addSites(HAnimSite1861)
HAnimSite1862 = x3d.HAnimSite()
HAnimSite1862.setContainerFieldOverride("sites")
HAnimSite1862.setUSE("hanim_l_tragion_pt")

HAnimHumanoid41.addSites(HAnimSite1862)
HAnimSite1863 = x3d.HAnimSite()
HAnimSite1863.setContainerFieldOverride("sites")
HAnimSite1863.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid41.addSites(HAnimSite1863)
HAnimSite1864 = x3d.HAnimSite()
HAnimSite1864.setContainerFieldOverride("sites")
HAnimSite1864.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid41.addSites(HAnimSite1864)
HAnimSite1865 = x3d.HAnimSite()
HAnimSite1865.setContainerFieldOverride("sites")
HAnimSite1865.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid41.addSites(HAnimSite1865)
HAnimSite1866 = x3d.HAnimSite()
HAnimSite1866.setContainerFieldOverride("sites")
HAnimSite1866.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid41.addSites(HAnimSite1866)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.setDEF("hanim_l_inclined_view")
HAnimSite1867.setName("l_inclined_view")
HAnimSite1867.setTranslation(x3d.doubleToFloat([1.62,1.05,2.06]))
HAnimSite1867.setRotation(x3d.doubleToFloat([-0.113,0.993,0.0347,0.671]))
TouchSensor1868 = x3d.TouchSensor()
TouchSensor1868.setDescription("HAnimSite l_inclined_view")

HAnimSite1867.addChild(TouchSensor1868)
Shape1869 = x3d.Shape()
Shape1869.setUSE("HAnimSiteShape")

HAnimSite1867.addChild(Shape1869)
Viewpoint1870 = x3d.Viewpoint()
Viewpoint1870.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1870.setDescription("left inclined")
Viewpoint1870.setPosition(x3d.doubleToFloat([0,0,0]))

HAnimSite1867.addChild(Viewpoint1870)
Anchor1871 = x3d.Anchor()
Anchor1871.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1871.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1872 = x3d.LOD()
LOD1872.setForceTransitions(True)
LOD1872.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1873 = x3d.WorldInfo()
WorldInfo1873.setInfo(["hide diamond when close"])

LOD1872.addChild(WorldInfo1873)
Shape1874 = x3d.Shape()
Shape1874.setUSE("HAnimSiteViewpointShape")

LOD1872.addChild(Shape1874)

Anchor1871.addChild(LOD1872)

HAnimSite1867.addChild(Anchor1871)

HAnimHumanoid41.addViewpoints(HAnimSite1867)
HAnimSite1875 = x3d.HAnimSite()
HAnimSite1875.setDEF("hanim_r_inclined_view")
HAnimSite1875.setName("r_inclined_view")
HAnimSite1875.setTranslation(x3d.doubleToFloat([-1.62,1.05,2.06]))
HAnimSite1875.setRotation(x3d.doubleToFloat([-0.113,-0.993,0.0347,0.671]))
TouchSensor1876 = x3d.TouchSensor()
TouchSensor1876.setDescription("HAnimSite r_inclined_view")

HAnimSite1875.addChild(TouchSensor1876)
Shape1877 = x3d.Shape()
Shape1877.setUSE("HAnimSiteShape")

HAnimSite1875.addChild(Shape1877)
Viewpoint1878 = x3d.Viewpoint()
Viewpoint1878.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1878.setDescription("right inclined")
Viewpoint1878.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1878.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1875.addChild(Viewpoint1878)
Anchor1879 = x3d.Anchor()
Anchor1879.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1879.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1880 = x3d.LOD()
LOD1880.setForceTransitions(True)
LOD1880.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1881 = x3d.WorldInfo()
WorldInfo1881.setInfo(["hide diamond when close"])

LOD1880.addChild(WorldInfo1881)
Shape1882 = x3d.Shape()
Shape1882.setUSE("HAnimSiteViewpointShape")

LOD1880.addChild(Shape1882)

Anchor1879.addChild(LOD1880)

HAnimSite1875.addChild(Anchor1879)

HAnimHumanoid41.addViewpoints(HAnimSite1875)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.setDEF("hanim_front_view")
HAnimSite1883.setName("front_view")
HAnimSite1883.setTranslation(x3d.doubleToFloat([0,0.85,2.58]))
TouchSensor1884 = x3d.TouchSensor()
TouchSensor1884.setDescription("HAnimSite front_view")

HAnimSite1883.addChild(TouchSensor1884)
Shape1885 = x3d.Shape()
Shape1885.setUSE("HAnimSiteShape")

HAnimSite1883.addChild(Shape1885)
Viewpoint1886 = x3d.Viewpoint()
Viewpoint1886.setDEF("hanim_front_viewpoint")
Viewpoint1886.setDescription("front")
Viewpoint1886.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1886.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1883.addChild(Viewpoint1886)
Anchor1887 = x3d.Anchor()
Anchor1887.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1887.setUrl(["#hanim_front_viewpoint"])
LOD1888 = x3d.LOD()
LOD1888.setForceTransitions(True)
LOD1888.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1889 = x3d.WorldInfo()
WorldInfo1889.setInfo(["hide diamond when close"])

LOD1888.addChild(WorldInfo1889)
Shape1890 = x3d.Shape()
Shape1890.setUSE("HAnimSiteViewpointShape")

LOD1888.addChild(Shape1890)

Anchor1887.addChild(LOD1888)

HAnimSite1883.addChild(Anchor1887)

HAnimHumanoid41.addViewpoints(HAnimSite1883)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setDEF("hanim_back_view")
HAnimSite1891.setName("back_view")
HAnimSite1891.setTranslation(x3d.doubleToFloat([0,0.85,-2.58]))
HAnimSite1891.setRotation(x3d.doubleToFloat([0,1,0,3.14]))
TouchSensor1892 = x3d.TouchSensor()
TouchSensor1892.setDescription("HAnimSite back_view")

HAnimSite1891.addChild(TouchSensor1892)
Shape1893 = x3d.Shape()
Shape1893.setUSE("HAnimSiteShape")

HAnimSite1891.addChild(Shape1893)
Viewpoint1894 = x3d.Viewpoint()
Viewpoint1894.setDEF("hanim_back_viewpoint")
Viewpoint1894.setDescription("back")
Viewpoint1894.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1894.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1891.addChild(Viewpoint1894)
Anchor1895 = x3d.Anchor()
Anchor1895.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1895.setUrl(["#hanim_back_viewpoint"])
LOD1896 = x3d.LOD()
LOD1896.setForceTransitions(True)
LOD1896.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1897 = x3d.WorldInfo()
WorldInfo1897.setInfo(["hide diamond when close"])

LOD1896.addChild(WorldInfo1897)
Shape1898 = x3d.Shape()
Shape1898.setUSE("HAnimSiteViewpointShape")

LOD1896.addChild(Shape1898)

Anchor1895.addChild(LOD1896)

HAnimSite1891.addChild(Anchor1895)

HAnimHumanoid41.addViewpoints(HAnimSite1891)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setDEF("hanim_l_side_view")
HAnimSite1899.setName("l_side_view")
HAnimSite1899.setTranslation(x3d.doubleToFloat([2.6,0.854,0]))
HAnimSite1899.setRotation(x3d.doubleToFloat([0,1,0,1.5708]))
TouchSensor1900 = x3d.TouchSensor()
TouchSensor1900.setDescription("HAnimSite l_side_view")

HAnimSite1899.addChild(TouchSensor1900)
Shape1901 = x3d.Shape()
Shape1901.setUSE("HAnimSiteShape")

HAnimSite1899.addChild(Shape1901)
Viewpoint1902 = x3d.Viewpoint()
Viewpoint1902.setDEF("hanim_l_side_viewpoint")
Viewpoint1902.setDescription("left side")
Viewpoint1902.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1902.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1899.addChild(Viewpoint1902)
Anchor1903 = x3d.Anchor()
Anchor1903.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1903.setUrl(["#hanim_l_side_viewpoint"])
LOD1904 = x3d.LOD()
LOD1904.setForceTransitions(True)
LOD1904.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1905 = x3d.WorldInfo()
WorldInfo1905.setInfo(["hide diamond when close"])

LOD1904.addChild(WorldInfo1905)
Shape1906 = x3d.Shape()
Shape1906.setUSE("HAnimSiteViewpointShape")

LOD1904.addChild(Shape1906)

Anchor1903.addChild(LOD1904)

HAnimSite1899.addChild(Anchor1903)

HAnimHumanoid41.addViewpoints(HAnimSite1899)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setDEF("hanim_Top_view")
HAnimSite1907.setName("Top_view")
HAnimSite1907.setTranslation(x3d.doubleToFloat([0,3.5,0]))
HAnimSite1907.setRotation(x3d.doubleToFloat([1,0,0,-1.57]))
TouchSensor1908 = x3d.TouchSensor()
TouchSensor1908.setDescription("HAnimSite Top_view")

HAnimSite1907.addChild(TouchSensor1908)
Shape1909 = x3d.Shape()
Shape1909.setUSE("HAnimSiteShape")

HAnimSite1907.addChild(Shape1909)
Viewpoint1910 = x3d.Viewpoint()
Viewpoint1910.setDEF("hanim_Top_viewpoint")
Viewpoint1910.setDescription("Top")
Viewpoint1910.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1910.setCenterOfRotation(x3d.doubleToFloat([0,0.9,0]))

HAnimSite1907.addChild(Viewpoint1910)
Anchor1911 = x3d.Anchor()
Anchor1911.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1911.setUrl(["#hanim_Top_viewpoint"])
LOD1912 = x3d.LOD()
LOD1912.setForceTransitions(True)
LOD1912.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1913 = x3d.WorldInfo()
WorldInfo1913.setInfo(["hide diamond when close"])

LOD1912.addChild(WorldInfo1913)
Shape1914 = x3d.Shape()
Shape1914.setUSE("HAnimSiteViewpointShape")

LOD1912.addChild(Shape1914)

Anchor1911.addChild(LOD1912)

HAnimSite1907.addChild(Anchor1911)

HAnimHumanoid41.addViewpoints(HAnimSite1907)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setDEF("hanim_front_close_view")
HAnimSite1915.setName("front_close_view")
HAnimSite1915.setTranslation(x3d.doubleToFloat([0,0.854,1.575]))
TouchSensor1916 = x3d.TouchSensor()
TouchSensor1916.setDescription("HAnimSite front_close_view")

HAnimSite1915.addChild(TouchSensor1916)
Shape1917 = x3d.Shape()
Shape1917.setUSE("HAnimSiteShape")

HAnimSite1915.addChild(Shape1917)
Viewpoint1918 = x3d.Viewpoint()
Viewpoint1918.setDEF("hanim_front_close_viewpoint")
Viewpoint1918.setDescription("front close")
Viewpoint1918.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1918.setCenterOfRotation(x3d.doubleToFloat([0,0,1.575]))

HAnimSite1915.addChild(Viewpoint1918)
Anchor1919 = x3d.Anchor()
Anchor1919.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1919.setUrl(["#hanim_front_close_viewpoint"])
LOD1920 = x3d.LOD()
LOD1920.setForceTransitions(True)
LOD1920.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1921 = x3d.WorldInfo()
WorldInfo1921.setInfo(["hide diamond when close"])

LOD1920.addChild(WorldInfo1921)
Shape1922 = x3d.Shape()
Shape1922.setUSE("HAnimSiteViewpointShape")

LOD1920.addChild(Shape1922)

Anchor1919.addChild(LOD1920)

HAnimSite1915.addChild(Anchor1919)

HAnimHumanoid41.addViewpoints(HAnimSite1915)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setDEF("hanim_side_close_view")
HAnimSite1923.setName("side_close_view")
HAnimSite1923.setTranslation(x3d.doubleToFloat([1.56,0.854,0]))
HAnimSite1923.setRotation(x3d.doubleToFloat([0,1,0,1.5708]))
TouchSensor1924 = x3d.TouchSensor()
TouchSensor1924.setDescription("HAnimSite side_close_view")

HAnimSite1923.addChild(TouchSensor1924)
Shape1925 = x3d.Shape()
Shape1925.setUSE("HAnimSiteShape")

HAnimSite1923.addChild(Shape1925)
Viewpoint1926 = x3d.Viewpoint()
Viewpoint1926.setDEF("hanim_side_close_viewpoint")
Viewpoint1926.setDescription("side close")
Viewpoint1926.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1926.setCenterOfRotation(x3d.doubleToFloat([1.6,0,0]))

HAnimSite1923.addChild(Viewpoint1926)
Anchor1927 = x3d.Anchor()
Anchor1927.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1927.setUrl(["#hanim_side_close_viewpoint"])
LOD1928 = x3d.LOD()
LOD1928.setForceTransitions(True)
LOD1928.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1929 = x3d.WorldInfo()
WorldInfo1929.setInfo(["hide diamond when close"])

LOD1928.addChild(WorldInfo1929)
Shape1930 = x3d.Shape()
Shape1930.setUSE("HAnimSiteViewpointShape")

LOD1928.addChild(Shape1930)

Anchor1927.addChild(LOD1928)

HAnimSite1923.addChild(Anchor1927)

HAnimHumanoid41.addViewpoints(HAnimSite1923)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setDEF("hanim_head_front_close_view")
HAnimSite1931.setName("head_front_close_view")
HAnimSite1931.setTranslation(x3d.doubleToFloat([0,1.5,1]))
TouchSensor1932 = x3d.TouchSensor()
TouchSensor1932.setDescription("HAnimSite head_front_close_view")

HAnimSite1931.addChild(TouchSensor1932)
Shape1933 = x3d.Shape()
Shape1933.setUSE("HAnimSiteShape")

HAnimSite1931.addChild(Shape1933)
Viewpoint1934 = x3d.Viewpoint()
Viewpoint1934.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1934.setDescription("head front close")
Viewpoint1934.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1934.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1931.addChild(Viewpoint1934)
Anchor1935 = x3d.Anchor()
Anchor1935.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1935.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1936 = x3d.LOD()
LOD1936.setForceTransitions(True)
LOD1936.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1937 = x3d.WorldInfo()
WorldInfo1937.setInfo(["hide diamond when close"])

LOD1936.addChild(WorldInfo1937)
Shape1938 = x3d.Shape()
Shape1938.setUSE("HAnimSiteViewpointShape")

LOD1936.addChild(Shape1938)

Anchor1935.addChild(LOD1936)

HAnimSite1931.addChild(Anchor1935)

HAnimHumanoid41.addViewpoints(HAnimSite1931)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setDEF("hanim_chest_front_close_view")
HAnimSite1939.setName("chest_front_close_view")
HAnimSite1939.setTranslation(x3d.doubleToFloat([0,1.2,1]))
TouchSensor1940 = x3d.TouchSensor()
TouchSensor1940.setDescription("HAnimSite chest_front_close_view")

HAnimSite1939.addChild(TouchSensor1940)
Shape1941 = x3d.Shape()
Shape1941.setUSE("HAnimSiteShape")

HAnimSite1939.addChild(Shape1941)
Viewpoint1942 = x3d.Viewpoint()
Viewpoint1942.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1942.setDescription("chest front close")
Viewpoint1942.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1942.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1939.addChild(Viewpoint1942)
Anchor1943 = x3d.Anchor()
Anchor1943.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1943.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1944 = x3d.LOD()
LOD1944.setForceTransitions(True)
LOD1944.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1945 = x3d.WorldInfo()
WorldInfo1945.setInfo(["hide diamond when close"])

LOD1944.addChild(WorldInfo1945)
Shape1946 = x3d.Shape()
Shape1946.setUSE("HAnimSiteViewpointShape")

LOD1944.addChild(Shape1946)

Anchor1943.addChild(LOD1944)

HAnimSite1939.addChild(Anchor1943)

HAnimHumanoid41.addViewpoints(HAnimSite1939)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setDEF("hanim_pelvis_front_close_view")
HAnimSite1947.setName("pelvis_front_close_view")
HAnimSite1947.setTranslation(x3d.doubleToFloat([0,0.8,1]))
TouchSensor1948 = x3d.TouchSensor()
TouchSensor1948.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1947.addChild(TouchSensor1948)
Shape1949 = x3d.Shape()
Shape1949.setUSE("HAnimSiteShape")

HAnimSite1947.addChild(Shape1949)
Viewpoint1950 = x3d.Viewpoint()
Viewpoint1950.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1950.setDescription("pelvis front close")
Viewpoint1950.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1950.setCenterOfRotation(x3d.doubleToFloat([0,0,1]))

HAnimSite1947.addChild(Viewpoint1950)
Anchor1951 = x3d.Anchor()
Anchor1951.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1951.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1952 = x3d.LOD()
LOD1952.setForceTransitions(True)
LOD1952.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1953 = x3d.WorldInfo()
WorldInfo1953.setInfo(["hide diamond when close"])

LOD1952.addChild(WorldInfo1953)
Shape1954 = x3d.Shape()
Shape1954.setUSE("HAnimSiteViewpointShape")

LOD1952.addChild(Shape1954)

Anchor1951.addChild(LOD1952)

HAnimSite1947.addChild(Anchor1951)

HAnimHumanoid41.addViewpoints(HAnimSite1947)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setDEF("hanim_knees_front_close_view")
HAnimSite1955.setName("knees_front_close_view")
HAnimSite1955.setTranslation(x3d.doubleToFloat([0,0.4,1]))
TouchSensor1956 = x3d.TouchSensor()
TouchSensor1956.setDescription("HAnimSite knees_front_close_view")

HAnimSite1955.addChild(TouchSensor1956)
Shape1957 = x3d.Shape()
Shape1957.setUSE("HAnimSiteShape")

HAnimSite1955.addChild(Shape1957)
Viewpoint1958 = x3d.Viewpoint()
Viewpoint1958.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1958.setDescription("knees front close")
Viewpoint1958.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1958.setCenterOfRotation(x3d.doubleToFloat([0,0.4,0]))

HAnimSite1955.addChild(Viewpoint1958)
Anchor1959 = x3d.Anchor()
Anchor1959.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1959.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1960 = x3d.LOD()
LOD1960.setForceTransitions(True)
LOD1960.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1961 = x3d.WorldInfo()
WorldInfo1961.setInfo(["hide diamond when close"])

LOD1960.addChild(WorldInfo1961)
Shape1962 = x3d.Shape()
Shape1962.setUSE("HAnimSiteViewpointShape")

LOD1960.addChild(Shape1962)

Anchor1959.addChild(LOD1960)

HAnimSite1955.addChild(Anchor1959)

HAnimHumanoid41.addViewpoints(HAnimSite1955)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setDEF("hanim_feet_front_close_view")
HAnimSite1963.setName("feet_front_close_view")
HAnimSite1963.setTranslation(x3d.doubleToFloat([0,0,1]))
TouchSensor1964 = x3d.TouchSensor()
TouchSensor1964.setDescription("HAnimSite feet_front_close_view")

HAnimSite1963.addChild(TouchSensor1964)
Shape1965 = x3d.Shape()
Shape1965.setUSE("HAnimSiteShape")

HAnimSite1963.addChild(Shape1965)
Viewpoint1966 = x3d.Viewpoint()
Viewpoint1966.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1966.setDescription("feet front close")
Viewpoint1966.setPosition(x3d.doubleToFloat([0,0,0]))

HAnimSite1963.addChild(Viewpoint1966)
Anchor1967 = x3d.Anchor()
Anchor1967.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1967.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1968 = x3d.LOD()
LOD1968.setForceTransitions(True)
LOD1968.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1969 = x3d.WorldInfo()
WorldInfo1969.setInfo(["hide diamond when close"])

LOD1968.addChild(WorldInfo1969)
Shape1970 = x3d.Shape()
Shape1970.setUSE("HAnimSiteViewpointShape")

LOD1968.addChild(Shape1970)

Anchor1967.addChild(LOD1968)

HAnimSite1963.addChild(Anchor1967)

HAnimHumanoid41.addViewpoints(HAnimSite1963)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setDEF("hanim_eye_level_view")
HAnimSite1971.setName("eye_level_view")
HAnimSite1971.setTranslation(x3d.doubleToFloat([0,1.6332,0.0502]))
TouchSensor1972 = x3d.TouchSensor()
TouchSensor1972.setDescription("HAnimSite eye_level_view")

HAnimSite1971.addChild(TouchSensor1972)
Shape1973 = x3d.Shape()
Shape1973.setUSE("HAnimSiteShape")

HAnimSite1971.addChild(Shape1973)
Viewpoint1974 = x3d.Viewpoint()
Viewpoint1974.setDEF("hanim_eye_level_viewpoint")
Viewpoint1974.setDescription("eye level looking forward")
Viewpoint1974.setPosition(x3d.doubleToFloat([0,0,0]))
Viewpoint1974.setOrientation(x3d.doubleToFloat([0,1,0,3.141593]))

HAnimSite1971.addChild(Viewpoint1974)
Anchor1975 = x3d.Anchor()
Anchor1975.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1975.setUrl(["#hanim_eye_level_viewpoint"])
LOD1976 = x3d.LOD()
LOD1976.setForceTransitions(True)
LOD1976.setRange(x3d.doubleToFloat([0.04]))
WorldInfo1977 = x3d.WorldInfo()
WorldInfo1977.setInfo(["hide diamond when close"])

LOD1976.addChild(WorldInfo1977)
Shape1978 = x3d.Shape()
Shape1978.setUSE("HAnimSiteViewpointShape")

LOD1976.addChild(Shape1978)

Anchor1975.addChild(LOD1976)

HAnimSite1971.addChild(Anchor1975)

HAnimHumanoid41.addViewpoints(HAnimSite1971)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.setContainerFieldOverride("sites")
HAnimSite1979.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid41.addSites(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.setContainerFieldOverride("sites")
HAnimSite1980.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid41.addSites(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.setContainerFieldOverride("sites")
HAnimSite1981.setUSE("hanim_l_hand_front_view")

HAnimHumanoid41.addSites(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.setContainerFieldOverride("sites")
HAnimSite1982.setUSE("hanim_r_hand_front_view")

HAnimHumanoid41.addSites(HAnimSite1982)

Scene27.addChild(HAnimHumanoid41)

X3D0.setScene(Scene27)
X3D0.toFileX3D("../data/HAnim2SpecificationLOA3Illustrated.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnim2SpecificationLOA3Illustrated.new.graalpy.x3dj")

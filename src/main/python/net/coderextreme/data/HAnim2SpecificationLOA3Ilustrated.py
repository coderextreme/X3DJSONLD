import x3dpsail as x3d
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
meta6.setName("created")
meta6.setContent("18 February 2021")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("18 February 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("Don Brutzman")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("HAnim2SpecificationLOA3Invisible.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnim2SpecificationLOA3Animation.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("Image")
meta12.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("Image")
meta13.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("Image")
meta14.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("TODO")
meta15.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("TODO")
meta16.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("translator")
meta20.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("generator")
meta21.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("reference")
meta22.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("reference")
meta24.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("reference")
meta25.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("generator")
meta26.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("identifier")
meta27.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("license")
meta28.setContent("../license.html")

head1.addMeta(meta28)

X3D0.setHead(head1)
Scene29 = x3d.Scene()
Background30 = x3d.Background()
Background30.setSkyColor([0.3,0.3,0.3])

Scene29.addChildren(Background30)
NavigationInfo31 = x3d.NavigationInfo()

Scene29.addChildren(NavigationInfo31)
Group32 = x3d.Group()
Group32.setDEF("Original_WorldInfo")
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo33.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group32.addChildren(WorldInfo33)

Scene29.addChildren(Group32)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint34.setDescription("Humanoid LOA 3 Front")
Viewpoint34.setPosition([0,0.4,4])

Scene29.addChildren(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint35.setDescription("Humanoid LOA 3 Front Close")
Viewpoint35.setPosition([0,0.8,2])

Scene29.addChildren(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint36.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint36.setPosition([0,1.2,1])

Scene29.addChildren(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setCenterOfRotation([0,1.5,0.0016])
Viewpoint37.setDescription("Humanoid LOA 3 Front Face")
Viewpoint37.setPosition([0,1.63,1])

Scene29.addChildren(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Right Side")
Viewpoint38.setOrientation([0,1,0,1.5708])
Viewpoint38.setPosition([2.6,0.8,0])

Scene29.addChildren(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint39.setOrientation([0,1,0,1.2])
Viewpoint39.setPosition([1,0.8,0.5])

Scene29.addChildren(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint40.setOrientation([0,1,0,-1.2])
Viewpoint40.setPosition([-1,0.8,0.5])

Scene29.addChildren(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Left Side")
Viewpoint41.setOrientation([0,1,0,-1.5708])
Viewpoint41.setPosition([-2.6,0.8,0])

Scene29.addChildren(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Top")
Viewpoint42.setOrientation([1,0,0,-1.5708])
Viewpoint42.setPosition([0,3.5,0])

Scene29.addChildren(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.setName("humanoid")
HAnimHumanoid43.setDEF("hanim_humanoid")
HAnimHumanoid43.setVersion("2.0")
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.setName("humanoid_root")
HAnimJoint44.setDEF("hanim_humanoid_root")
HAnimJoint44.setCenter([0,0.824,0.0277])
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.setName("sacrum")
HAnimSegment45.setDEF("hanim_sacrum")
#Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
TouchSensor46 = x3d.TouchSensor()
TouchSensor46.setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum")

HAnimSegment45.addChildren(TouchSensor46)
Transform47 = x3d.Transform()
Transform47.setTranslation([0,0.824,0.0277])
Shape48 = x3d.Shape()
Shape48.setDEF("HAnimJointShape")
Sphere49 = x3d.Sphere()
Sphere49.setRadius(0.006)

Shape48.setGeometry(Sphere49)
Appearance50 = x3d.Appearance()
Appearance50.setDEF("HAnimJointAppearance")
Material51 = x3d.Material()
Material51.setDiffuseColor([1,0.5,0])
Material51.setTransparency(0.5)

Appearance50.setMaterial(Material51)

Shape48.setAppearance(Appearance50)

Transform47.addChildren(Shape48)

HAnimSegment45.addChildren(Transform47)
#HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
Shape52 = x3d.Shape()
LineSet53 = x3d.LineSet()
LineSet53.setVertexCount([2])
Coordinate54 = x3d.Coordinate()
Coordinate54.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet53.setCoord(Coordinate54)
ColorRGBA55 = x3d.ColorRGBA()
ColorRGBA55.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA55.setColor([1,1,0,1,1,1,0,0.1])

LineSet53.setColor(ColorRGBA55)

Shape52.setGeometry(LineSet53)

HAnimSegment45.addChildren(Shape52)
#HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.setVertexCount([2])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet57.setCoord(Coordinate58)
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.setUSE("HAnimSegmentLineColorRGBA")

LineSet57.setColor(ColorRGBA59)

Shape56.setGeometry(LineSet57)

HAnimSegment45.addChildren(Shape56)

HAnimJoint44.addChildren(HAnimSegment45)
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.setName("sacroiliac")
HAnimJoint60.setDEF("hanim_sacroiliac")
HAnimJoint60.setCenter([0,0.9149,0.0016])
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.setName("pelvis")
HAnimSegment61.setDEF("hanim_pelvis")
#Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
TouchSensor62 = x3d.TouchSensor()
TouchSensor62.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment61.addChildren(TouchSensor62)
Transform63 = x3d.Transform()
Transform63.setTranslation([0,0.9149,0.0016])
Shape64 = x3d.Shape()
Shape64.setUSE("HAnimJointShape")

Transform63.addChildren(Shape64)

HAnimSegment61.addChildren(Transform63)
#HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
Shape65 = x3d.Shape()
LineSet66 = x3d.LineSet()
LineSet66.setVertexCount([2])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet66.setCoord(Coordinate67)
ColorRGBA68 = x3d.ColorRGBA()
ColorRGBA68.setUSE("HAnimSegmentLineColorRGBA")

LineSet66.setColor(ColorRGBA68)

Shape65.setGeometry(LineSet66)

HAnimSegment61.addChildren(Shape65)
#HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
Shape69 = x3d.Shape()
LineSet70 = x3d.LineSet()
LineSet70.setVertexCount([2])
Coordinate71 = x3d.Coordinate()
Coordinate71.setPoint([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])

LineSet70.setCoord(Coordinate71)
ColorRGBA72 = x3d.ColorRGBA()
ColorRGBA72.setUSE("HAnimSegmentLineColorRGBA")

LineSet70.setColor(ColorRGBA72)

Shape69.setGeometry(LineSet70)

HAnimSegment61.addChildren(Shape69)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
Shape73 = x3d.Shape()
LineSet74 = x3d.LineSet()
LineSet74.setVertexCount([2])
Coordinate75 = x3d.Coordinate()
Coordinate75.setPoint([0,0.9149,0.0016,-0.1525,1.0628,0.0035])

LineSet74.setCoord(Coordinate75)
ColorRGBA76 = x3d.ColorRGBA()
ColorRGBA76.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA76.setColor([1,0,0,1,1,0,0,0.1])

LineSet74.setColor(ColorRGBA76)

Shape73.setGeometry(LineSet74)

HAnimSegment61.addChildren(Shape73)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
Shape77 = x3d.Shape()
LineSet78 = x3d.LineSet()
LineSet78.setVertexCount([2])
Coordinate79 = x3d.Coordinate()
Coordinate79.setPoint([0,0.9149,0.0016,-0.1689,0.8419,0.0352])

LineSet78.setCoord(Coordinate79)
ColorRGBA80 = x3d.ColorRGBA()
ColorRGBA80.setUSE("HAnimSiteLineColorRGBA")

LineSet78.setColor(ColorRGBA80)

Shape77.setGeometry(LineSet78)

HAnimSegment61.addChildren(Shape77)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
Shape81 = x3d.Shape()
LineSet82 = x3d.LineSet()
LineSet82.setVertexCount([2])
Coordinate83 = x3d.Coordinate()
Coordinate83.setPoint([0,0.9149,0.0016,0.1612,1.0537,0.0008])

LineSet82.setCoord(Coordinate83)
ColorRGBA84 = x3d.ColorRGBA()
ColorRGBA84.setUSE("HAnimSiteLineColorRGBA")

LineSet82.setColor(ColorRGBA84)

Shape81.setGeometry(LineSet82)

HAnimSegment61.addChildren(Shape81)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
Shape85 = x3d.Shape()
LineSet86 = x3d.LineSet()
LineSet86.setVertexCount([2])
Coordinate87 = x3d.Coordinate()
Coordinate87.setPoint([0,0.9149,0.0016,0.1677,0.8336,0.0303])

LineSet86.setCoord(Coordinate87)
ColorRGBA88 = x3d.ColorRGBA()
ColorRGBA88.setUSE("HAnimSiteLineColorRGBA")

LineSet86.setColor(ColorRGBA88)

Shape85.setGeometry(LineSet86)

HAnimSegment61.addChildren(Shape85)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
Shape89 = x3d.Shape()
LineSet90 = x3d.LineSet()
LineSet90.setVertexCount([2])
Coordinate91 = x3d.Coordinate()
Coordinate91.setPoint([0,0.9149,0.0016,-0.0887,1.0021,0.1112])

LineSet90.setCoord(Coordinate91)
ColorRGBA92 = x3d.ColorRGBA()
ColorRGBA92.setUSE("HAnimSiteLineColorRGBA")

LineSet90.setColor(ColorRGBA92)

Shape89.setGeometry(LineSet90)

HAnimSegment61.addChildren(Shape89)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
Shape93 = x3d.Shape()
LineSet94 = x3d.LineSet()
LineSet94.setVertexCount([2])
Coordinate95 = x3d.Coordinate()
Coordinate95.setPoint([0,0.9149,0.0016,0.0925,0.9983,0.1052])

LineSet94.setCoord(Coordinate95)
ColorRGBA96 = x3d.ColorRGBA()
ColorRGBA96.setUSE("HAnimSiteLineColorRGBA")

LineSet94.setColor(ColorRGBA96)

Shape93.setGeometry(LineSet94)

HAnimSegment61.addChildren(Shape93)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
Shape97 = x3d.Shape()
LineSet98 = x3d.LineSet()
LineSet98.setVertexCount([2])
Coordinate99 = x3d.Coordinate()
Coordinate99.setPoint([0,0.9149,0.0016,-0.0716,1.019,-0.1138])

LineSet98.setCoord(Coordinate99)
ColorRGBA100 = x3d.ColorRGBA()
ColorRGBA100.setUSE("HAnimSiteLineColorRGBA")

LineSet98.setColor(ColorRGBA100)

Shape97.setGeometry(LineSet98)

HAnimSegment61.addChildren(Shape97)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
Shape101 = x3d.Shape()
LineSet102 = x3d.LineSet()
LineSet102.setVertexCount([2])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint([0,0.9149,0.0016,0.0774,1.019,-0.1151])

LineSet102.setCoord(Coordinate103)
ColorRGBA104 = x3d.ColorRGBA()
ColorRGBA104.setUSE("HAnimSiteLineColorRGBA")

LineSet102.setColor(ColorRGBA104)

Shape101.setGeometry(LineSet102)

HAnimSegment61.addChildren(Shape101)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
Shape105 = x3d.Shape()
LineSet106 = x3d.LineSet()
LineSet106.setVertexCount([2])
Coordinate107 = x3d.Coordinate()
Coordinate107.setPoint([0,0.9149,0.0016,0.0034,0.8266,0.0257])

LineSet106.setCoord(Coordinate107)
ColorRGBA108 = x3d.ColorRGBA()
ColorRGBA108.setUSE("HAnimSiteLineColorRGBA")

LineSet106.setColor(ColorRGBA108)

Shape105.setGeometry(LineSet106)

HAnimSegment61.addChildren(Shape105)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setName("r_iliocristale_pt_pt")
HAnimSite109.setDEF("hanim_r_iliocristale_pt")
HAnimSite109.setTranslation([-0.1525,1.0628,0.0035])
#HAnimSite visualization shape
TouchSensor110 = x3d.TouchSensor()
TouchSensor110.setDescription("HAnimSite r_iliocristale_pt")

HAnimSite109.addChildren(TouchSensor110)
Shape111 = x3d.Shape()
Shape111.setDEF("HAnimSiteShape")
IndexedFaceSet112 = x3d.IndexedFaceSet()
IndexedFaceSet112.setDEF("DiamondIFS")
IndexedFaceSet112.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet112.setCreaseAngle(0.5)
IndexedFaceSet112.setSolid(False)
Coordinate113 = x3d.Coordinate()
Coordinate113.setPoint([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])

IndexedFaceSet112.setCoord(Coordinate113)

Shape111.setGeometry(IndexedFaceSet112)
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.setDiffuseColor([1,0,0])

Appearance114.setMaterial(Material115)

Shape111.setAppearance(Appearance114)

HAnimSite109.addChildren(Shape111)

HAnimSegment61.addChildren(HAnimSite109)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.setName("r_trochanterion_pt_pt")
HAnimSite116.setDEF("hanim_r_trochanterion_pt")
HAnimSite116.setTranslation([-0.1689,0.8419,0.0352])
#HAnimSite visualization shape
TouchSensor117 = x3d.TouchSensor()
TouchSensor117.setDescription("HAnimSite r_trochanterion_pt")

HAnimSite116.addChildren(TouchSensor117)
Shape118 = x3d.Shape()
Shape118.setUSE("HAnimSiteShape")

HAnimSite116.addChildren(Shape118)

HAnimSegment61.addChildren(HAnimSite116)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.setName("l_iliocristale_pt_pt")
HAnimSite119.setDEF("hanim_l_iliocristale_pt")
HAnimSite119.setTranslation([0.1612,1.0537,0.0008])
#HAnimSite visualization shape
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.setDescription("HAnimSite l_iliocristale_pt")

HAnimSite119.addChildren(TouchSensor120)
Shape121 = x3d.Shape()
Shape121.setUSE("HAnimSiteShape")

HAnimSite119.addChildren(Shape121)

HAnimSegment61.addChildren(HAnimSite119)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_trochanterion_pt_pt")
HAnimSite122.setDEF("hanim_l_trochanterion_pt")
HAnimSite122.setTranslation([0.1677,0.8336,0.0303])
#HAnimSite visualization shape
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDescription("HAnimSite l_trochanterion_pt")

HAnimSite122.addChildren(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChildren(Shape124)

HAnimSegment61.addChildren(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("r_asis_pt_pt")
HAnimSite125.setDEF("hanim_r_asis_pt")
HAnimSite125.setTranslation([-0.0887,1.0021,0.1112])
#HAnimSite visualization shape
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite r_asis_pt")

HAnimSite125.addChildren(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChildren(Shape127)

HAnimSegment61.addChildren(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("l_asis_pt_pt")
HAnimSite128.setDEF("hanim_l_asis_pt")
HAnimSite128.setTranslation([0.0925,0.9983,0.1052])
#HAnimSite visualization shape
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.setDescription("HAnimSite l_asis_pt")

HAnimSite128.addChildren(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimSiteShape")

HAnimSite128.addChildren(Shape130)

HAnimSegment61.addChildren(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setName("r_psis_pt_pt")
HAnimSite131.setDEF("hanim_r_psis_pt")
HAnimSite131.setTranslation([-0.0716,1.019,-0.1138])
#HAnimSite visualization shape
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.setDescription("HAnimSite r_psis_pt")

HAnimSite131.addChildren(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChildren(Shape133)

HAnimSegment61.addChildren(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.setName("l_psis_pt_pt")
HAnimSite134.setDEF("hanim_l_psis_pt")
HAnimSite134.setTranslation([0.0774,1.019,-0.1151])
#HAnimSite visualization shape
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.setDescription("HAnimSite l_psis_pt")

HAnimSite134.addChildren(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.setUSE("HAnimSiteShape")

HAnimSite134.addChildren(Shape136)

HAnimSegment61.addChildren(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("crotch_pt_pt")
HAnimSite137.setDEF("hanim_crotch_pt")
HAnimSite137.setTranslation([0.0034,0.8266,0.0257])
#HAnimSite visualization shape
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.setDescription("HAnimSite crotch_pt")

HAnimSite137.addChildren(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimSiteShape")

HAnimSite137.addChildren(Shape139)

HAnimSegment61.addChildren(HAnimSite137)

HAnimJoint60.addChildren(HAnimSegment61)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setName("l_hip")
HAnimJoint140.setDEF("hanim_l_hip")
HAnimJoint140.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.setName("l_thigh")
HAnimSegment141.setDEF("hanim_l_thigh")
#Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
TouchSensor142 = x3d.TouchSensor()
TouchSensor142.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment141.addChildren(TouchSensor142)
Transform143 = x3d.Transform()
Transform143.setTranslation([0.0961,0.9124,-0.0001])
Shape144 = x3d.Shape()
Shape144.setUSE("HAnimJointShape")

Transform143.addChildren(Shape144)

HAnimSegment141.addChildren(Transform143)
#HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
Shape145 = x3d.Shape()
LineSet146 = x3d.LineSet()
LineSet146.setVertexCount([2])
Coordinate147 = x3d.Coordinate()
Coordinate147.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet146.setCoord(Coordinate147)
ColorRGBA148 = x3d.ColorRGBA()
ColorRGBA148.setUSE("HAnimSegmentLineColorRGBA")

LineSet146.setColor(ColorRGBA148)

Shape145.setGeometry(LineSet146)

HAnimSegment141.addChildren(Shape145)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
Shape149 = x3d.Shape()
LineSet150 = x3d.LineSet()
LineSet150.setVertexCount([2])
Coordinate151 = x3d.Coordinate()
Coordinate151.setPoint([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])

LineSet150.setCoord(Coordinate151)
ColorRGBA152 = x3d.ColorRGBA()
ColorRGBA152.setUSE("HAnimSiteLineColorRGBA")

LineSet150.setColor(ColorRGBA152)

Shape149.setGeometry(LineSet150)

HAnimSegment141.addChildren(Shape149)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
Shape153 = x3d.Shape()
LineSet154 = x3d.LineSet()
LineSet154.setVertexCount([2])
Coordinate155 = x3d.Coordinate()
Coordinate155.setPoint([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])

LineSet154.setCoord(Coordinate155)
ColorRGBA156 = x3d.ColorRGBA()
ColorRGBA156.setUSE("HAnimSiteLineColorRGBA")

LineSet154.setColor(ColorRGBA156)

Shape153.setGeometry(LineSet154)

HAnimSegment141.addChildren(Shape153)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
Shape157 = x3d.Shape()
LineSet158 = x3d.LineSet()
LineSet158.setVertexCount([2])
Coordinate159 = x3d.Coordinate()
Coordinate159.setPoint([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])

LineSet158.setCoord(Coordinate159)
ColorRGBA160 = x3d.ColorRGBA()
ColorRGBA160.setUSE("HAnimSiteLineColorRGBA")

LineSet158.setColor(ColorRGBA160)

Shape157.setGeometry(LineSet158)

HAnimSegment141.addChildren(Shape157)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("l_knee_crease_pt_pt")
HAnimSite161.setDEF("hanim_l_knee_crease_pt")
HAnimSite161.setTranslation([0.0993,0.4881,-0.0309])
#HAnimSite visualization shape
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.setDescription("HAnimSite l_knee_crease_pt")

HAnimSite161.addChildren(TouchSensor162)
Shape163 = x3d.Shape()
Shape163.setUSE("HAnimSiteShape")

HAnimSite161.addChildren(Shape163)

HAnimSegment141.addChildren(HAnimSite161)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setName("l_femoral_lateral_epicn_pt_pt")
HAnimSite164.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite164.setTranslation([0.1598,0.4967,0.0297])
#HAnimSite visualization shape
TouchSensor165 = x3d.TouchSensor()
TouchSensor165.setDescription("HAnimSite l_femoral_lateral_epicn_pt")

HAnimSite164.addChildren(TouchSensor165)
Shape166 = x3d.Shape()
Shape166.setUSE("HAnimSiteShape")

HAnimSite164.addChildren(Shape166)

HAnimSegment141.addChildren(HAnimSite164)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("l_femoral_medial_epicn_pt_pt")
HAnimSite167.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite167.setTranslation([0.0398,0.4946,0.0303])
#HAnimSite visualization shape
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.setDescription("HAnimSite l_femoral_medial_epicn_pt")

HAnimSite167.addChildren(TouchSensor168)
Shape169 = x3d.Shape()
Shape169.setUSE("HAnimSiteShape")

HAnimSite167.addChildren(Shape169)

HAnimSegment141.addChildren(HAnimSite167)

HAnimJoint140.addChildren(HAnimSegment141)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.setName("l_knee")
HAnimJoint170.setDEF("hanim_l_knee")
HAnimJoint170.setCenter([0.104,0.4867,0.0308])
HAnimSegment171 = x3d.HAnimSegment()
HAnimSegment171.setName("l_calf")
HAnimSegment171.setDEF("hanim_l_calf")
#Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
TouchSensor172 = x3d.TouchSensor()
TouchSensor172.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment171.addChildren(TouchSensor172)
Transform173 = x3d.Transform()
Transform173.setTranslation([0.104,0.4867,0.0308])
Shape174 = x3d.Shape()
Shape174.setUSE("HAnimJointShape")

Transform173.addChildren(Shape174)

HAnimSegment171.addChildren(Transform173)
#HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
Shape175 = x3d.Shape()
LineSet176 = x3d.LineSet()
LineSet176.setVertexCount([2])
Coordinate177 = x3d.Coordinate()
Coordinate177.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet176.setCoord(Coordinate177)
ColorRGBA178 = x3d.ColorRGBA()
ColorRGBA178.setUSE("HAnimSegmentLineColorRGBA")

LineSet176.setColor(ColorRGBA178)

Shape175.setGeometry(LineSet176)

HAnimSegment171.addChildren(Shape175)

HAnimJoint170.addChildren(HAnimSegment171)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setName("l_talocrural")
HAnimJoint179.setDEF("hanim_l_talocrural")
HAnimJoint179.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.setName("l_talus")
HAnimSegment180.setDEF("hanim_l_talus")
#Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
TouchSensor181 = x3d.TouchSensor()
TouchSensor181.setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus")

HAnimSegment180.addChildren(TouchSensor181)
Transform182 = x3d.Transform()
Transform182.setTranslation([0.1101,0.0656,-0.0736])
Shape183 = x3d.Shape()
Shape183.setUSE("HAnimJointShape")

Transform182.addChildren(Shape183)

HAnimSegment180.addChildren(Transform182)
#HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
Shape184 = x3d.Shape()
LineSet185 = x3d.LineSet()
LineSet185.setVertexCount([2])
Coordinate186 = x3d.Coordinate()
Coordinate186.setPoint([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])

LineSet185.setCoord(Coordinate186)
ColorRGBA187 = x3d.ColorRGBA()
ColorRGBA187.setUSE("HAnimSegmentLineColorRGBA")

LineSet185.setColor(ColorRGBA187)

Shape184.setGeometry(LineSet185)

HAnimSegment180.addChildren(Shape184)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
Shape188 = x3d.Shape()
LineSet189 = x3d.LineSet()
LineSet189.setVertexCount([2])
Coordinate190 = x3d.Coordinate()
Coordinate190.setPoint([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])

LineSet189.setCoord(Coordinate190)
ColorRGBA191 = x3d.ColorRGBA()
ColorRGBA191.setUSE("HAnimSiteLineColorRGBA")

LineSet189.setColor(ColorRGBA191)

Shape188.setGeometry(LineSet189)

HAnimSegment180.addChildren(Shape188)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.setVertexCount([2])
Coordinate194 = x3d.Coordinate()
Coordinate194.setPoint([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])

LineSet193.setCoord(Coordinate194)
ColorRGBA195 = x3d.ColorRGBA()
ColorRGBA195.setUSE("HAnimSiteLineColorRGBA")

LineSet193.setColor(ColorRGBA195)

Shape192.setGeometry(LineSet193)

HAnimSegment180.addChildren(Shape192)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
Shape196 = x3d.Shape()
LineSet197 = x3d.LineSet()
LineSet197.setVertexCount([2])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])

LineSet197.setCoord(Coordinate198)
ColorRGBA199 = x3d.ColorRGBA()
ColorRGBA199.setUSE("HAnimSiteLineColorRGBA")

LineSet197.setColor(ColorRGBA199)

Shape196.setGeometry(LineSet197)

HAnimSegment180.addChildren(Shape196)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
Shape200 = x3d.Shape()
LineSet201 = x3d.LineSet()
LineSet201.setVertexCount([2])
Coordinate202 = x3d.Coordinate()
Coordinate202.setPoint([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])

LineSet201.setCoord(Coordinate202)
ColorRGBA203 = x3d.ColorRGBA()
ColorRGBA203.setUSE("HAnimSiteLineColorRGBA")

LineSet201.setColor(ColorRGBA203)

Shape200.setGeometry(LineSet201)

HAnimSegment180.addChildren(Shape200)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.setName("l_lateral_malleolus_pt_pt")
HAnimSite204.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite204.setTranslation([0.1308,0.0597,-0.1032])
#HAnimSite visualization shape
TouchSensor205 = x3d.TouchSensor()
TouchSensor205.setDescription("HAnimSite l_lateral_malleolus_pt")

HAnimSite204.addChildren(TouchSensor205)
Shape206 = x3d.Shape()
Shape206.setUSE("HAnimSiteShape")

HAnimSite204.addChildren(Shape206)

HAnimSegment180.addChildren(HAnimSite204)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.setName("l_medial_malleolus_pt_pt")
HAnimSite207.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite207.setTranslation([0.089,0.0716,-0.0881])
#HAnimSite visualization shape
TouchSensor208 = x3d.TouchSensor()
TouchSensor208.setDescription("HAnimSite l_medial_malleolus_pt")

HAnimSite207.addChildren(TouchSensor208)
Shape209 = x3d.Shape()
Shape209.setUSE("HAnimSiteShape")

HAnimSite207.addChildren(Shape209)

HAnimSegment180.addChildren(HAnimSite207)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("l_sphyrion_pt_pt")
HAnimSite210.setDEF("hanim_l_sphyrion_pt")
HAnimSite210.setTranslation([0.089,0.0575,-0.0943])
#HAnimSite visualization shape
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.setDescription("HAnimSite l_sphyrion_pt")

HAnimSite210.addChildren(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.setUSE("HAnimSiteShape")

HAnimSite210.addChildren(Shape212)

HAnimSegment180.addChildren(HAnimSite210)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setName("l_calcaneous_post_pt_pt")
HAnimSite213.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite213.setTranslation([0.0974,0.0259,-0.1171])
#HAnimSite visualization shape
TouchSensor214 = x3d.TouchSensor()
TouchSensor214.setDescription("HAnimSite l_calcaneous_post_pt")

HAnimSite213.addChildren(TouchSensor214)
Shape215 = x3d.Shape()
Shape215.setUSE("HAnimSiteShape")

HAnimSite213.addChildren(Shape215)

HAnimSegment180.addChildren(HAnimSite213)

HAnimJoint179.addChildren(HAnimSegment180)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.setName("l_tarsometatarsal_2")
HAnimJoint216.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint216.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.setName("l_metatarsal_2")
HAnimSegment217.setDEF("hanim_l_metatarsal_2")
#Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
TouchSensor218 = x3d.TouchSensor()
TouchSensor218.setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2")

HAnimSegment217.addChildren(TouchSensor218)
Transform219 = x3d.Transform()
Transform219.setTranslation([0.1086,0.0001,-0.0368])
Shape220 = x3d.Shape()
Shape220.setUSE("HAnimJointShape")

Transform219.addChildren(Shape220)

HAnimSegment217.addChildren(Transform219)
#HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
Shape221 = x3d.Shape()
LineSet222 = x3d.LineSet()
LineSet222.setVertexCount([2])
Coordinate223 = x3d.Coordinate()
Coordinate223.setPoint([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])

LineSet222.setCoord(Coordinate223)
ColorRGBA224 = x3d.ColorRGBA()
ColorRGBA224.setUSE("HAnimSegmentLineColorRGBA")

LineSet222.setColor(ColorRGBA224)

Shape221.setGeometry(LineSet222)

HAnimSegment217.addChildren(Shape221)

HAnimJoint216.addChildren(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.setName("l_metatarsophalangeal_2")
HAnimJoint225.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint225.setCenter([0.1086,0.0001,0.0368])
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment226.setDEF("hanim_l_tarsal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2")

HAnimSegment226.addChildren(TouchSensor227)
Transform228 = x3d.Transform()
Transform228.setTranslation([0.1086,0.0001,0.0368])
Shape229 = x3d.Shape()
Shape229.setUSE("HAnimJointShape")

Transform228.addChildren(Shape229)

HAnimSegment226.addChildren(Transform228)
#HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
Shape230 = x3d.Shape()
LineSet231 = x3d.LineSet()
LineSet231.setVertexCount([2])
Coordinate232 = x3d.Coordinate()
Coordinate232.setPoint([0.1086,0.0001,0.0368,0.1086,0,0.0762])

LineSet231.setCoord(Coordinate232)
ColorRGBA233 = x3d.ColorRGBA()
ColorRGBA233.setUSE("HAnimSegmentLineColorRGBA")

LineSet231.setColor(ColorRGBA233)

Shape230.setGeometry(LineSet231)

HAnimSegment226.addChildren(Shape230)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
Shape234 = x3d.Shape()
LineSet235 = x3d.LineSet()
LineSet235.setVertexCount([2])
Coordinate236 = x3d.Coordinate()
Coordinate236.setPoint([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])

LineSet235.setCoord(Coordinate236)
ColorRGBA237 = x3d.ColorRGBA()
ColorRGBA237.setUSE("HAnimSiteLineColorRGBA")

LineSet235.setColor(ColorRGBA237)

Shape234.setGeometry(LineSet235)

HAnimSegment226.addChildren(Shape234)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.setName("l_metatarsal_pha1_pt_pt")
HAnimSite238.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite238.setTranslation([0.0816,0.0232,0.0106])
#HAnimSite visualization shape
TouchSensor239 = x3d.TouchSensor()
TouchSensor239.setDescription("HAnimSite l_metatarsal_pha1_pt")

HAnimSite238.addChildren(TouchSensor239)
Shape240 = x3d.Shape()
Shape240.setUSE("HAnimSiteShape")

HAnimSite238.addChildren(Shape240)

HAnimSegment226.addChildren(HAnimSite238)

HAnimJoint225.addChildren(HAnimSegment226)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint241.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint241.setCenter([0.1086,0,0.0762])
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.setName("l_tarsal_distal_phalanx_2")
HAnimSegment242.setDEF("hanim_l_tarsal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2")

HAnimSegment242.addChildren(TouchSensor243)
Transform244 = x3d.Transform()
Transform244.setTranslation([0.1086,0,0.0762])
Shape245 = x3d.Shape()
Shape245.setUSE("HAnimJointShape")

Transform244.addChildren(Shape245)

HAnimSegment242.addChildren(Transform244)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.setVertexCount([2])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint([0.1086,0,0.0762,0.1354,0.0016,0.1476])

LineSet247.setCoord(Coordinate248)
ColorRGBA249 = x3d.ColorRGBA()
ColorRGBA249.setUSE("HAnimSiteLineColorRGBA")

LineSet247.setColor(ColorRGBA249)

Shape246.setGeometry(LineSet247)

HAnimSegment242.addChildren(Shape246)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
Shape250 = x3d.Shape()
LineSet251 = x3d.LineSet()
LineSet251.setVertexCount([2])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint([0.1086,0,0.0762,0.1825,0.007,0.0928])

LineSet251.setCoord(Coordinate252)
ColorRGBA253 = x3d.ColorRGBA()
ColorRGBA253.setUSE("HAnimSiteLineColorRGBA")

LineSet251.setColor(ColorRGBA253)

Shape250.setGeometry(LineSet251)

HAnimSegment242.addChildren(Shape250)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.setVertexCount([2])
Coordinate256 = x3d.Coordinate()
Coordinate256.setPoint([0.1086,0,0.0762,0.1195,0.0079,0.1433])

LineSet255.setCoord(Coordinate256)
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.setUSE("HAnimSiteLineColorRGBA")

LineSet255.setColor(ColorRGBA257)

Shape254.setGeometry(LineSet255)

HAnimSegment242.addChildren(Shape254)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.setName("l_forefoot_tip_pt")
HAnimSite258.setDEF("hanim_l_forefoot_tip")
HAnimSite258.setTranslation([0.1354,0.0016,0.1476])
#HAnimSite visualization shape
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.setDescription("HAnimSite l_forefoot_tip")

HAnimSite258.addChildren(TouchSensor259)
Shape260 = x3d.Shape()
Shape260.setUSE("HAnimSiteShape")

HAnimSite258.addChildren(Shape260)

HAnimSegment242.addChildren(HAnimSite258)
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.setName("l_metatarsal_pha5_pt_pt")
HAnimSite261.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite261.setTranslation([0.1825,0.007,0.0928])
#HAnimSite visualization shape
TouchSensor262 = x3d.TouchSensor()
TouchSensor262.setDescription("HAnimSite l_metatarsal_pha5_pt")

HAnimSite261.addChildren(TouchSensor262)
Shape263 = x3d.Shape()
Shape263.setUSE("HAnimSiteShape")

HAnimSite261.addChildren(Shape263)

HAnimSegment242.addChildren(HAnimSite261)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.setName("l_digit2_pt_pt")
HAnimSite264.setDEF("hanim_l_digit2_pt")
HAnimSite264.setTranslation([0.1195,0.0079,0.1433])
#HAnimSite visualization shape
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.setDescription("HAnimSite l_digit2_pt")

HAnimSite264.addChildren(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.setUSE("HAnimSiteShape")

HAnimSite264.addChildren(Shape266)

HAnimSegment242.addChildren(HAnimSite264)

HAnimJoint241.addChildren(HAnimSegment242)

HAnimJoint225.addChildren(HAnimJoint241)

HAnimJoint216.addChildren(HAnimJoint225)

HAnimJoint179.addChildren(HAnimJoint216)

HAnimJoint170.addChildren(HAnimJoint179)

HAnimJoint140.addChildren(HAnimJoint170)

HAnimJoint60.addChildren(HAnimJoint140)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setName("r_hip")
HAnimJoint267.setDEF("hanim_r_hip")
HAnimJoint267.setCenter([-0.0961,0.9124,-0.0001])
HAnimSegment268 = x3d.HAnimSegment()
HAnimSegment268.setName("r_thigh")
HAnimSegment268.setDEF("hanim_r_thigh")
#Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
TouchSensor269 = x3d.TouchSensor()
TouchSensor269.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment268.addChildren(TouchSensor269)
Transform270 = x3d.Transform()
Transform270.setTranslation([-0.0961,0.9124,-0.0001])
Shape271 = x3d.Shape()
Shape271.setUSE("HAnimJointShape")

Transform270.addChildren(Shape271)

HAnimSegment268.addChildren(Transform270)
#HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
Shape272 = x3d.Shape()
LineSet273 = x3d.LineSet()
LineSet273.setVertexCount([2])
Coordinate274 = x3d.Coordinate()
Coordinate274.setPoint([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])

LineSet273.setCoord(Coordinate274)
ColorRGBA275 = x3d.ColorRGBA()
ColorRGBA275.setUSE("HAnimSegmentLineColorRGBA")

LineSet273.setColor(ColorRGBA275)

Shape272.setGeometry(LineSet273)

HAnimSegment268.addChildren(Shape272)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.setVertexCount([2])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])

LineSet277.setCoord(Coordinate278)
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.setUSE("HAnimSiteLineColorRGBA")

LineSet277.setColor(ColorRGBA279)

Shape276.setGeometry(LineSet277)

HAnimSegment268.addChildren(Shape276)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
Shape280 = x3d.Shape()
LineSet281 = x3d.LineSet()
LineSet281.setVertexCount([2])
Coordinate282 = x3d.Coordinate()
Coordinate282.setPoint([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])

LineSet281.setCoord(Coordinate282)
ColorRGBA283 = x3d.ColorRGBA()
ColorRGBA283.setUSE("HAnimSiteLineColorRGBA")

LineSet281.setColor(ColorRGBA283)

Shape280.setGeometry(LineSet281)

HAnimSegment268.addChildren(Shape280)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
Shape284 = x3d.Shape()
LineSet285 = x3d.LineSet()
LineSet285.setVertexCount([2])
Coordinate286 = x3d.Coordinate()
Coordinate286.setPoint([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])

LineSet285.setCoord(Coordinate286)
ColorRGBA287 = x3d.ColorRGBA()
ColorRGBA287.setUSE("HAnimSiteLineColorRGBA")

LineSet285.setColor(ColorRGBA287)

Shape284.setGeometry(LineSet285)

HAnimSegment268.addChildren(Shape284)
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.setName("r_knee_crease_pt_pt")
HAnimSite288.setDEF("hanim_r_knee_crease_pt")
HAnimSite288.setTranslation([-0.0825,0.4932,-0.0326])
#HAnimSite visualization shape
TouchSensor289 = x3d.TouchSensor()
TouchSensor289.setDescription("HAnimSite r_knee_crease_pt")

HAnimSite288.addChildren(TouchSensor289)
Shape290 = x3d.Shape()
Shape290.setUSE("HAnimSiteShape")

HAnimSite288.addChildren(Shape290)

HAnimSegment268.addChildren(HAnimSite288)
HAnimSite291 = x3d.HAnimSite()
HAnimSite291.setName("r_femoral_lateral_epicn_pt_pt")
HAnimSite291.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite291.setTranslation([-0.1421,0.4992,0.031])
#HAnimSite visualization shape
TouchSensor292 = x3d.TouchSensor()
TouchSensor292.setDescription("HAnimSite r_femoral_lateral_epicn_pt")

HAnimSite291.addChildren(TouchSensor292)
Shape293 = x3d.Shape()
Shape293.setUSE("HAnimSiteShape")

HAnimSite291.addChildren(Shape293)

HAnimSegment268.addChildren(HAnimSite291)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.setName("r_femoral_medial_epicn_pt_pt")
HAnimSite294.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite294.setTranslation([-0.0221,0.5014,0.0289])
#HAnimSite visualization shape
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.setDescription("HAnimSite r_femoral_medial_epicn_pt")

HAnimSite294.addChildren(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.setUSE("HAnimSiteShape")

HAnimSite294.addChildren(Shape296)

HAnimSegment268.addChildren(HAnimSite294)

HAnimJoint267.addChildren(HAnimSegment268)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setName("r_knee")
HAnimJoint297.setDEF("hanim_r_knee")
HAnimJoint297.setCenter([-0.104,0.4867,0.0308])
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setName("r_calf")
HAnimSegment298.setDEF("hanim_r_calf")
#Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment298.addChildren(TouchSensor299)
Transform300 = x3d.Transform()
Transform300.setTranslation([-0.104,0.4867,0.0308])
Shape301 = x3d.Shape()
Shape301.setUSE("HAnimJointShape")

Transform300.addChildren(Shape301)

HAnimSegment298.addChildren(Transform300)
#HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
Shape302 = x3d.Shape()
LineSet303 = x3d.LineSet()
LineSet303.setVertexCount([2])
Coordinate304 = x3d.Coordinate()
Coordinate304.setPoint([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])

LineSet303.setCoord(Coordinate304)
ColorRGBA305 = x3d.ColorRGBA()
ColorRGBA305.setUSE("HAnimSegmentLineColorRGBA")

LineSet303.setColor(ColorRGBA305)

Shape302.setGeometry(LineSet303)

HAnimSegment298.addChildren(Shape302)

HAnimJoint297.addChildren(HAnimSegment298)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setName("r_talocrural")
HAnimJoint306.setDEF("hanim_r_talocrural")
HAnimJoint306.setCenter([-0.1101,0.0656,-0.0736])
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setName("r_talus")
HAnimSegment307.setDEF("hanim_r_talus")
#Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus")

HAnimSegment307.addChildren(TouchSensor308)
Transform309 = x3d.Transform()
Transform309.setTranslation([-0.1101,0.0656,-0.0736])
Shape310 = x3d.Shape()
Shape310.setUSE("HAnimJointShape")

Transform309.addChildren(Shape310)

HAnimSegment307.addChildren(Transform309)
#HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
Shape311 = x3d.Shape()
LineSet312 = x3d.LineSet()
LineSet312.setVertexCount([2])
Coordinate313 = x3d.Coordinate()
Coordinate313.setPoint([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])

LineSet312.setCoord(Coordinate313)
ColorRGBA314 = x3d.ColorRGBA()
ColorRGBA314.setUSE("HAnimSegmentLineColorRGBA")

LineSet312.setColor(ColorRGBA314)

Shape311.setGeometry(LineSet312)

HAnimSegment307.addChildren(Shape311)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
Shape315 = x3d.Shape()
LineSet316 = x3d.LineSet()
LineSet316.setVertexCount([2])
Coordinate317 = x3d.Coordinate()
Coordinate317.setPoint([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])

LineSet316.setCoord(Coordinate317)
ColorRGBA318 = x3d.ColorRGBA()
ColorRGBA318.setUSE("HAnimSiteLineColorRGBA")

LineSet316.setColor(ColorRGBA318)

Shape315.setGeometry(LineSet316)

HAnimSegment307.addChildren(Shape315)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
Shape319 = x3d.Shape()
LineSet320 = x3d.LineSet()
LineSet320.setVertexCount([2])
Coordinate321 = x3d.Coordinate()
Coordinate321.setPoint([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])

LineSet320.setCoord(Coordinate321)
ColorRGBA322 = x3d.ColorRGBA()
ColorRGBA322.setUSE("HAnimSiteLineColorRGBA")

LineSet320.setColor(ColorRGBA322)

Shape319.setGeometry(LineSet320)

HAnimSegment307.addChildren(Shape319)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
Shape323 = x3d.Shape()
LineSet324 = x3d.LineSet()
LineSet324.setVertexCount([2])
Coordinate325 = x3d.Coordinate()
Coordinate325.setPoint([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])

LineSet324.setCoord(Coordinate325)
ColorRGBA326 = x3d.ColorRGBA()
ColorRGBA326.setUSE("HAnimSiteLineColorRGBA")

LineSet324.setColor(ColorRGBA326)

Shape323.setGeometry(LineSet324)

HAnimSegment307.addChildren(Shape323)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
Shape327 = x3d.Shape()
LineSet328 = x3d.LineSet()
LineSet328.setVertexCount([2])
Coordinate329 = x3d.Coordinate()
Coordinate329.setPoint([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])

LineSet328.setCoord(Coordinate329)
ColorRGBA330 = x3d.ColorRGBA()
ColorRGBA330.setUSE("HAnimSiteLineColorRGBA")

LineSet328.setColor(ColorRGBA330)

Shape327.setGeometry(LineSet328)

HAnimSegment307.addChildren(Shape327)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("r_lateral_malleolus_pt_pt")
HAnimSite331.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite331.setTranslation([-0.1006,0.0658,-0.1075])
#HAnimSite visualization shape
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.setDescription("HAnimSite r_lateral_malleolus_pt")

HAnimSite331.addChildren(TouchSensor332)
Shape333 = x3d.Shape()
Shape333.setUSE("HAnimSiteShape")

HAnimSite331.addChildren(Shape333)

HAnimSegment307.addChildren(HAnimSite331)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.setName("r_medial_malleolus_pt_pt")
HAnimSite334.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite334.setTranslation([-0.0591,0.076,-0.0928])
#HAnimSite visualization shape
TouchSensor335 = x3d.TouchSensor()
TouchSensor335.setDescription("HAnimSite r_medial_malleolus_pt")

HAnimSite334.addChildren(TouchSensor335)
Shape336 = x3d.Shape()
Shape336.setUSE("HAnimSiteShape")

HAnimSite334.addChildren(Shape336)

HAnimSegment307.addChildren(HAnimSite334)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.setName("r_sphyrion_pt_pt")
HAnimSite337.setDEF("hanim_r_sphyrion_pt")
HAnimSite337.setTranslation([-0.0603,0.061,-0.1002])
#HAnimSite visualization shape
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.setDescription("HAnimSite r_sphyrion_pt")

HAnimSite337.addChildren(TouchSensor338)
Shape339 = x3d.Shape()
Shape339.setUSE("HAnimSiteShape")

HAnimSite337.addChildren(Shape339)

HAnimSegment307.addChildren(HAnimSite337)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.setName("r_calcaneous_post_pt_pt")
HAnimSite340.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite340.setTranslation([-0.0692,0.0297,-0.1221])
#HAnimSite visualization shape
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.setDescription("HAnimSite r_calcaneous_post_pt")

HAnimSite340.addChildren(TouchSensor341)
Shape342 = x3d.Shape()
Shape342.setUSE("HAnimSiteShape")

HAnimSite340.addChildren(Shape342)

HAnimSegment307.addChildren(HAnimSite340)

HAnimJoint306.addChildren(HAnimSegment307)
HAnimJoint343 = x3d.HAnimJoint()
HAnimJoint343.setName("r_tarsometatarsal_2")
HAnimJoint343.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint343.setCenter([-0.1086,0.0001,-0.0368])
HAnimSegment344 = x3d.HAnimSegment()
HAnimSegment344.setName("r_metatarsal_2")
HAnimSegment344.setDEF("hanim_r_metatarsal_2")
#Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
TouchSensor345 = x3d.TouchSensor()
TouchSensor345.setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2")

HAnimSegment344.addChildren(TouchSensor345)
Transform346 = x3d.Transform()
Transform346.setTranslation([-0.1086,0.0001,-0.0368])
Shape347 = x3d.Shape()
Shape347.setUSE("HAnimJointShape")

Transform346.addChildren(Shape347)

HAnimSegment344.addChildren(Transform346)
#HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
Shape348 = x3d.Shape()
LineSet349 = x3d.LineSet()
LineSet349.setVertexCount([2])
Coordinate350 = x3d.Coordinate()
Coordinate350.setPoint([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])

LineSet349.setCoord(Coordinate350)
ColorRGBA351 = x3d.ColorRGBA()
ColorRGBA351.setUSE("HAnimSegmentLineColorRGBA")

LineSet349.setColor(ColorRGBA351)

Shape348.setGeometry(LineSet349)

HAnimSegment344.addChildren(Shape348)

HAnimJoint343.addChildren(HAnimSegment344)
HAnimJoint352 = x3d.HAnimJoint()
HAnimJoint352.setName("r_metatarsophalangeal_2")
HAnimJoint352.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint352.setCenter([-0.1086,0.0001,0.0368])
HAnimSegment353 = x3d.HAnimSegment()
HAnimSegment353.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment353.setDEF("hanim_r_tarsal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
TouchSensor354 = x3d.TouchSensor()
TouchSensor354.setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2")

HAnimSegment353.addChildren(TouchSensor354)
Transform355 = x3d.Transform()
Transform355.setTranslation([-0.1086,0.0001,0.0368])
Shape356 = x3d.Shape()
Shape356.setUSE("HAnimJointShape")

Transform355.addChildren(Shape356)

HAnimSegment353.addChildren(Transform355)
#HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
Shape357 = x3d.Shape()
LineSet358 = x3d.LineSet()
LineSet358.setVertexCount([2])
Coordinate359 = x3d.Coordinate()
Coordinate359.setPoint([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])

LineSet358.setCoord(Coordinate359)
ColorRGBA360 = x3d.ColorRGBA()
ColorRGBA360.setUSE("HAnimSegmentLineColorRGBA")

LineSet358.setColor(ColorRGBA360)

Shape357.setGeometry(LineSet358)

HAnimSegment353.addChildren(Shape357)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
Shape361 = x3d.Shape()
LineSet362 = x3d.LineSet()
LineSet362.setVertexCount([2])
Coordinate363 = x3d.Coordinate()
Coordinate363.setPoint([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])

LineSet362.setCoord(Coordinate363)
ColorRGBA364 = x3d.ColorRGBA()
ColorRGBA364.setUSE("HAnimSiteLineColorRGBA")

LineSet362.setColor(ColorRGBA364)

Shape361.setGeometry(LineSet362)

HAnimSegment353.addChildren(Shape361)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.setName("r_metatarsal_pha1_pt_pt")
HAnimSite365.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite365.setTranslation([-0.0521,0.026,0.0127])
#HAnimSite visualization shape
TouchSensor366 = x3d.TouchSensor()
TouchSensor366.setDescription("HAnimSite r_metatarsal_pha1_pt")

HAnimSite365.addChildren(TouchSensor366)
Shape367 = x3d.Shape()
Shape367.setUSE("HAnimSiteShape")

HAnimSite365.addChildren(Shape367)

HAnimSegment353.addChildren(HAnimSite365)

HAnimJoint352.addChildren(HAnimSegment353)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint368.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint368.setCenter([-0.1086,0,0.0762])
HAnimSegment369 = x3d.HAnimSegment()
HAnimSegment369.setName("r_tarsal_distal_phalanx_2")
HAnimSegment369.setDEF("hanim_r_tarsal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2")

HAnimSegment369.addChildren(TouchSensor370)
Transform371 = x3d.Transform()
Transform371.setTranslation([-0.1086,0,0.0762])
Shape372 = x3d.Shape()
Shape372.setUSE("HAnimJointShape")

Transform371.addChildren(Shape372)

HAnimSegment369.addChildren(Transform371)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
Shape373 = x3d.Shape()
LineSet374 = x3d.LineSet()
LineSet374.setVertexCount([2])
Coordinate375 = x3d.Coordinate()
Coordinate375.setPoint([-0.1086,0,0.0762,-0.1043,0.0227,0.145])

LineSet374.setCoord(Coordinate375)
ColorRGBA376 = x3d.ColorRGBA()
ColorRGBA376.setUSE("HAnimSiteLineColorRGBA")

LineSet374.setColor(ColorRGBA376)

Shape373.setGeometry(LineSet374)

HAnimSegment369.addChildren(Shape373)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.setVertexCount([2])
Coordinate379 = x3d.Coordinate()
Coordinate379.setPoint([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])

LineSet378.setCoord(Coordinate379)
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.setUSE("HAnimSiteLineColorRGBA")

LineSet378.setColor(ColorRGBA380)

Shape377.setGeometry(LineSet378)

HAnimSegment369.addChildren(Shape377)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.setVertexCount([2])
Coordinate383 = x3d.Coordinate()
Coordinate383.setPoint([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])

LineSet382.setCoord(Coordinate383)
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.setUSE("HAnimSiteLineColorRGBA")

LineSet382.setColor(ColorRGBA384)

Shape381.setGeometry(LineSet382)

HAnimSegment369.addChildren(Shape381)
HAnimSite385 = x3d.HAnimSite()
HAnimSite385.setName("r_forefoot_tip_pt")
HAnimSite385.setDEF("hanim_r_forefoot_tip")
HAnimSite385.setTranslation([-0.1043,0.0227,0.145])
#HAnimSite visualization shape
TouchSensor386 = x3d.TouchSensor()
TouchSensor386.setDescription("HAnimSite r_forefoot_tip")

HAnimSite385.addChildren(TouchSensor386)
Shape387 = x3d.Shape()
Shape387.setUSE("HAnimSiteShape")

HAnimSite385.addChildren(Shape387)

HAnimSegment369.addChildren(HAnimSite385)
HAnimSite388 = x3d.HAnimSite()
HAnimSite388.setName("r_metatarsal_pha5_pt_pt")
HAnimSite388.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite388.setTranslation([-0.1523,0.0166,0.0895])
#HAnimSite visualization shape
TouchSensor389 = x3d.TouchSensor()
TouchSensor389.setDescription("HAnimSite r_metatarsal_pha5_pt")

HAnimSite388.addChildren(TouchSensor389)
Shape390 = x3d.Shape()
Shape390.setUSE("HAnimSiteShape")

HAnimSite388.addChildren(Shape390)

HAnimSegment369.addChildren(HAnimSite388)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.setName("r_digit2_pt_pt")
HAnimSite391.setDEF("hanim_r_digit2_pt")
HAnimSite391.setTranslation([-0.0883,0.0134,0.1383])
#HAnimSite visualization shape
TouchSensor392 = x3d.TouchSensor()
TouchSensor392.setDescription("HAnimSite r_digit2_pt")

HAnimSite391.addChildren(TouchSensor392)
Shape393 = x3d.Shape()
Shape393.setUSE("HAnimSiteShape")

HAnimSite391.addChildren(Shape393)

HAnimSegment369.addChildren(HAnimSite391)

HAnimJoint368.addChildren(HAnimSegment369)

HAnimJoint352.addChildren(HAnimJoint368)

HAnimJoint343.addChildren(HAnimJoint352)

HAnimJoint306.addChildren(HAnimJoint343)

HAnimJoint297.addChildren(HAnimJoint306)

HAnimJoint267.addChildren(HAnimJoint297)

HAnimJoint60.addChildren(HAnimJoint267)

HAnimJoint44.addChildren(HAnimJoint60)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setName("vl5")
HAnimJoint394.setDEF("hanim_vl5")
HAnimJoint394.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.setName("l5")
HAnimSegment395.setDEF("hanim_l5")
#Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
TouchSensor396 = x3d.TouchSensor()
TouchSensor396.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment395.addChildren(TouchSensor396)
Transform397 = x3d.Transform()
Transform397.setTranslation([0.0028,1.0568,-0.0776])
Shape398 = x3d.Shape()
Shape398.setUSE("HAnimJointShape")

Transform397.addChildren(Shape398)

HAnimSegment395.addChildren(Transform397)
#HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
Shape399 = x3d.Shape()
LineSet400 = x3d.LineSet()
LineSet400.setVertexCount([2])
Coordinate401 = x3d.Coordinate()
Coordinate401.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet400.setCoord(Coordinate401)
ColorRGBA402 = x3d.ColorRGBA()
ColorRGBA402.setUSE("HAnimSegmentLineColorRGBA")

LineSet400.setColor(ColorRGBA402)

Shape399.setGeometry(LineSet400)

HAnimSegment395.addChildren(Shape399)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
Shape403 = x3d.Shape()
LineSet404 = x3d.LineSet()
LineSet404.setVertexCount([2])
Coordinate405 = x3d.Coordinate()
Coordinate405.setPoint([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])

LineSet404.setCoord(Coordinate405)
ColorRGBA406 = x3d.ColorRGBA()
ColorRGBA406.setUSE("HAnimSiteLineColorRGBA")

LineSet404.setColor(ColorRGBA406)

Shape403.setGeometry(LineSet404)

HAnimSegment395.addChildren(Shape403)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
Shape407 = x3d.Shape()
LineSet408 = x3d.LineSet()
LineSet408.setVertexCount([2])
Coordinate409 = x3d.Coordinate()
Coordinate409.setPoint([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])

LineSet408.setCoord(Coordinate409)
ColorRGBA410 = x3d.ColorRGBA()
ColorRGBA410.setUSE("HAnimSiteLineColorRGBA")

LineSet408.setColor(ColorRGBA410)

Shape407.setGeometry(LineSet408)

HAnimSegment395.addChildren(Shape407)
HAnimSite411 = x3d.HAnimSite()
HAnimSite411.setName("waist_preferred_post_pt_pt")
HAnimSite411.setDEF("hanim_waist_preferred_post_pt")
HAnimSite411.setTranslation([0,1.0915,-0.1091])
#HAnimSite visualization shape
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.setDescription("HAnimSite waist_preferred_post_pt")

HAnimSite411.addChildren(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.setUSE("HAnimSiteShape")

HAnimSite411.addChildren(Shape413)

HAnimSegment395.addChildren(HAnimSite411)
HAnimSite414 = x3d.HAnimSite()
HAnimSite414.setName("navel_pt_pt")
HAnimSite414.setDEF("hanim_navel_pt")
HAnimSite414.setTranslation([0.0069,1.0966,0.1017])
#HAnimSite visualization shape
TouchSensor415 = x3d.TouchSensor()
TouchSensor415.setDescription("HAnimSite navel_pt")

HAnimSite414.addChildren(TouchSensor415)
Shape416 = x3d.Shape()
Shape416.setUSE("HAnimSiteShape")

HAnimSite414.addChildren(Shape416)

HAnimSegment395.addChildren(HAnimSite414)

HAnimJoint394.addChildren(HAnimSegment395)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setName("vl4")
HAnimJoint417.setDEF("hanim_vl4")
HAnimJoint417.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.setName("l4")
HAnimSegment418.setDEF("hanim_l4")
#Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment418.addChildren(TouchSensor419)
Transform420 = x3d.Transform()
Transform420.setTranslation([0.0035,1.0925,-0.0787])
Shape421 = x3d.Shape()
Shape421.setUSE("HAnimJointShape")

Transform420.addChildren(Shape421)

HAnimSegment418.addChildren(Transform420)
#HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
Shape422 = x3d.Shape()
LineSet423 = x3d.LineSet()
LineSet423.setVertexCount([2])
Coordinate424 = x3d.Coordinate()
Coordinate424.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet423.setCoord(Coordinate424)
ColorRGBA425 = x3d.ColorRGBA()
ColorRGBA425.setUSE("HAnimSegmentLineColorRGBA")

LineSet423.setColor(ColorRGBA425)

Shape422.setGeometry(LineSet423)

HAnimSegment418.addChildren(Shape422)

HAnimJoint417.addChildren(HAnimSegment418)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.setName("vl3")
HAnimJoint426.setDEF("hanim_vl3")
HAnimJoint426.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment427 = x3d.HAnimSegment()
HAnimSegment427.setName("l3")
HAnimSegment427.setDEF("hanim_l3")
#Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment427.addChildren(TouchSensor428)
Transform429 = x3d.Transform()
Transform429.setTranslation([0.0041,1.1276,-0.0796])
Shape430 = x3d.Shape()
Shape430.setUSE("HAnimJointShape")

Transform429.addChildren(Shape430)

HAnimSegment427.addChildren(Transform429)
#HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
Shape431 = x3d.Shape()
LineSet432 = x3d.LineSet()
LineSet432.setVertexCount([2])
Coordinate433 = x3d.Coordinate()
Coordinate433.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet432.setCoord(Coordinate433)
ColorRGBA434 = x3d.ColorRGBA()
ColorRGBA434.setUSE("HAnimSegmentLineColorRGBA")

LineSet432.setColor(ColorRGBA434)

Shape431.setGeometry(LineSet432)

HAnimSegment427.addChildren(Shape431)

HAnimJoint426.addChildren(HAnimSegment427)
HAnimJoint435 = x3d.HAnimJoint()
HAnimJoint435.setName("vl2")
HAnimJoint435.setDEF("hanim_vl2")
HAnimJoint435.setCenter([0.0045,1.1546,-0.08])
HAnimSegment436 = x3d.HAnimSegment()
HAnimSegment436.setName("l2")
HAnimSegment436.setDEF("hanim_l2")
#Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
TouchSensor437 = x3d.TouchSensor()
TouchSensor437.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment436.addChildren(TouchSensor437)
Transform438 = x3d.Transform()
Transform438.setTranslation([0.0045,1.1546,-0.08])
Shape439 = x3d.Shape()
Shape439.setUSE("HAnimJointShape")

Transform438.addChildren(Shape439)

HAnimSegment436.addChildren(Transform438)
#HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
Shape440 = x3d.Shape()
LineSet441 = x3d.LineSet()
LineSet441.setVertexCount([2])
Coordinate442 = x3d.Coordinate()
Coordinate442.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet441.setCoord(Coordinate442)
ColorRGBA443 = x3d.ColorRGBA()
ColorRGBA443.setUSE("HAnimSegmentLineColorRGBA")

LineSet441.setColor(ColorRGBA443)

Shape440.setGeometry(LineSet441)

HAnimSegment436.addChildren(Shape440)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
Shape444 = x3d.Shape()
LineSet445 = x3d.LineSet()
LineSet445.setVertexCount([2])
Coordinate446 = x3d.Coordinate()
Coordinate446.setPoint([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])

LineSet445.setCoord(Coordinate446)
ColorRGBA447 = x3d.ColorRGBA()
ColorRGBA447.setUSE("HAnimSiteLineColorRGBA")

LineSet445.setColor(ColorRGBA447)

Shape444.setGeometry(LineSet445)

HAnimSegment436.addChildren(Shape444)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
Shape448 = x3d.Shape()
LineSet449 = x3d.LineSet()
LineSet449.setVertexCount([2])
Coordinate450 = x3d.Coordinate()
Coordinate450.setPoint([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])

LineSet449.setCoord(Coordinate450)
ColorRGBA451 = x3d.ColorRGBA()
ColorRGBA451.setUSE("HAnimSiteLineColorRGBA")

LineSet449.setColor(ColorRGBA451)

Shape448.setGeometry(LineSet449)

HAnimSegment436.addChildren(Shape448)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
Shape452 = x3d.Shape()
LineSet453 = x3d.LineSet()
LineSet453.setVertexCount([2])
Coordinate454 = x3d.Coordinate()
Coordinate454.setPoint([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])

LineSet453.setCoord(Coordinate454)
ColorRGBA455 = x3d.ColorRGBA()
ColorRGBA455.setUSE("HAnimSiteLineColorRGBA")

LineSet453.setColor(ColorRGBA455)

Shape452.setGeometry(LineSet453)

HAnimSegment436.addChildren(Shape452)
HAnimSite456 = x3d.HAnimSite()
HAnimSite456.setName("r_rib10_pt_pt")
HAnimSite456.setDEF("hanim_r_rib10_pt")
HAnimSite456.setTranslation([-0.0711,1.1941,0.1016])
#HAnimSite visualization shape
TouchSensor457 = x3d.TouchSensor()
TouchSensor457.setDescription("HAnimSite r_rib10_pt")

HAnimSite456.addChildren(TouchSensor457)
Shape458 = x3d.Shape()
Shape458.setUSE("HAnimSiteShape")

HAnimSite456.addChildren(Shape458)

HAnimSegment436.addChildren(HAnimSite456)
HAnimSite459 = x3d.HAnimSite()
HAnimSite459.setName("l_rib10_pt_pt")
HAnimSite459.setDEF("hanim_l_rib10_pt")
HAnimSite459.setTranslation([0.0871,1.1925,0.0992])
#HAnimSite visualization shape
TouchSensor460 = x3d.TouchSensor()
TouchSensor460.setDescription("HAnimSite l_rib10_pt")

HAnimSite459.addChildren(TouchSensor460)
Shape461 = x3d.Shape()
Shape461.setUSE("HAnimSiteShape")

HAnimSite459.addChildren(Shape461)

HAnimSegment436.addChildren(HAnimSite459)
HAnimSite462 = x3d.HAnimSite()
HAnimSite462.setName("rib10_midspine_pt_pt")
HAnimSite462.setDEF("hanim_rib10_midspine_pt")
HAnimSite462.setTranslation([0.0049,1.1908,-0.1113])
#HAnimSite visualization shape
TouchSensor463 = x3d.TouchSensor()
TouchSensor463.setDescription("HAnimSite rib10_midspine_pt")

HAnimSite462.addChildren(TouchSensor463)
Shape464 = x3d.Shape()
Shape464.setUSE("HAnimSiteShape")

HAnimSite462.addChildren(Shape464)

HAnimSegment436.addChildren(HAnimSite462)

HAnimJoint435.addChildren(HAnimSegment436)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.setName("vl1")
HAnimJoint465.setDEF("hanim_vl1")
HAnimJoint465.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setName("l1")
HAnimSegment466.setDEF("hanim_l1")
#Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment466.addChildren(TouchSensor467)
Transform468 = x3d.Transform()
Transform468.setTranslation([0.0048,1.1912,-0.0805])
Shape469 = x3d.Shape()
Shape469.setUSE("HAnimJointShape")

Transform468.addChildren(Shape469)

HAnimSegment466.addChildren(Transform468)
#HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
Shape470 = x3d.Shape()
LineSet471 = x3d.LineSet()
LineSet471.setVertexCount([2])
Coordinate472 = x3d.Coordinate()
Coordinate472.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet471.setCoord(Coordinate472)
ColorRGBA473 = x3d.ColorRGBA()
ColorRGBA473.setUSE("HAnimSegmentLineColorRGBA")

LineSet471.setColor(ColorRGBA473)

Shape470.setGeometry(LineSet471)

HAnimSegment466.addChildren(Shape470)

HAnimJoint465.addChildren(HAnimSegment466)
HAnimJoint474 = x3d.HAnimJoint()
HAnimJoint474.setName("vt12")
HAnimJoint474.setDEF("hanim_vt12")
HAnimJoint474.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.setName("t12")
HAnimSegment475.setDEF("hanim_t12")
#Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment475.addChildren(TouchSensor476)
Transform477 = x3d.Transform()
Transform477.setTranslation([0.0051,1.2278,-0.0808])
Shape478 = x3d.Shape()
Shape478.setUSE("HAnimJointShape")

Transform477.addChildren(Shape478)

HAnimSegment475.addChildren(Transform477)
#HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
Shape479 = x3d.Shape()
LineSet480 = x3d.LineSet()
LineSet480.setVertexCount([2])
Coordinate481 = x3d.Coordinate()
Coordinate481.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet480.setCoord(Coordinate481)
ColorRGBA482 = x3d.ColorRGBA()
ColorRGBA482.setUSE("HAnimSegmentLineColorRGBA")

LineSet480.setColor(ColorRGBA482)

Shape479.setGeometry(LineSet480)

HAnimSegment475.addChildren(Shape479)

HAnimJoint474.addChildren(HAnimSegment475)
HAnimJoint483 = x3d.HAnimJoint()
HAnimJoint483.setName("vt11")
HAnimJoint483.setDEF("hanim_vt11")
HAnimJoint483.setCenter([0.0053,1.2679,-0.081])
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.setName("t11")
HAnimSegment484.setDEF("hanim_t11")
#Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
TouchSensor485 = x3d.TouchSensor()
TouchSensor485.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment484.addChildren(TouchSensor485)
Transform486 = x3d.Transform()
Transform486.setTranslation([0.0053,1.2679,-0.081])
Shape487 = x3d.Shape()
Shape487.setUSE("HAnimJointShape")

Transform486.addChildren(Shape487)

HAnimSegment484.addChildren(Transform486)
#HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
Shape488 = x3d.Shape()
LineSet489 = x3d.LineSet()
LineSet489.setVertexCount([2])
Coordinate490 = x3d.Coordinate()
Coordinate490.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet489.setCoord(Coordinate490)
ColorRGBA491 = x3d.ColorRGBA()
ColorRGBA491.setUSE("HAnimSegmentLineColorRGBA")

LineSet489.setColor(ColorRGBA491)

Shape488.setGeometry(LineSet489)

HAnimSegment484.addChildren(Shape488)

HAnimJoint483.addChildren(HAnimSegment484)
HAnimJoint492 = x3d.HAnimJoint()
HAnimJoint492.setName("vt10")
HAnimJoint492.setDEF("hanim_vt10")
HAnimJoint492.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.setName("t10")
HAnimSegment493.setDEF("hanim_t10")
#Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
TouchSensor494 = x3d.TouchSensor()
TouchSensor494.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment493.addChildren(TouchSensor494)
Transform495 = x3d.Transform()
Transform495.setTranslation([0.0056,1.2848,-0.0822])
Shape496 = x3d.Shape()
Shape496.setUSE("HAnimJointShape")

Transform495.addChildren(Shape496)

HAnimSegment493.addChildren(Transform495)
#HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
Shape497 = x3d.Shape()
LineSet498 = x3d.LineSet()
LineSet498.setVertexCount([2])
Coordinate499 = x3d.Coordinate()
Coordinate499.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet498.setCoord(Coordinate499)
ColorRGBA500 = x3d.ColorRGBA()
ColorRGBA500.setUSE("HAnimSegmentLineColorRGBA")

LineSet498.setColor(ColorRGBA500)

Shape497.setGeometry(LineSet498)

HAnimSegment493.addChildren(Shape497)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
Shape501 = x3d.Shape()
LineSet502 = x3d.LineSet()
LineSet502.setVertexCount([2])
Coordinate503 = x3d.Coordinate()
Coordinate503.setPoint([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])

LineSet502.setCoord(Coordinate503)
ColorRGBA504 = x3d.ColorRGBA()
ColorRGBA504.setUSE("HAnimSiteLineColorRGBA")

LineSet502.setColor(ColorRGBA504)

Shape501.setGeometry(LineSet502)

HAnimSegment493.addChildren(Shape501)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.setName("substernale_pt_pt")
HAnimSite505.setDEF("hanim_substernale_pt")
HAnimSite505.setTranslation([0.0085,1.2995,0.1147])
#HAnimSite visualization shape
TouchSensor506 = x3d.TouchSensor()
TouchSensor506.setDescription("HAnimSite substernale_pt")

HAnimSite505.addChildren(TouchSensor506)
Shape507 = x3d.Shape()
Shape507.setUSE("HAnimSiteShape")

HAnimSite505.addChildren(Shape507)

HAnimSegment493.addChildren(HAnimSite505)

HAnimJoint492.addChildren(HAnimSegment493)
HAnimJoint508 = x3d.HAnimJoint()
HAnimJoint508.setName("vt9")
HAnimJoint508.setDEF("hanim_vt9")
HAnimJoint508.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.setName("t9")
HAnimSegment509.setDEF("hanim_t9")
#Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment509.addChildren(TouchSensor510)
Transform511 = x3d.Transform()
Transform511.setTranslation([0.0057,1.3126,-0.0838])
Shape512 = x3d.Shape()
Shape512.setUSE("HAnimJointShape")

Transform511.addChildren(Shape512)

HAnimSegment509.addChildren(Transform511)
#HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
Shape513 = x3d.Shape()
LineSet514 = x3d.LineSet()
LineSet514.setVertexCount([2])
Coordinate515 = x3d.Coordinate()
Coordinate515.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet514.setCoord(Coordinate515)
ColorRGBA516 = x3d.ColorRGBA()
ColorRGBA516.setUSE("HAnimSegmentLineColorRGBA")

LineSet514.setColor(ColorRGBA516)

Shape513.setGeometry(LineSet514)

HAnimSegment509.addChildren(Shape513)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
Shape517 = x3d.Shape()
LineSet518 = x3d.LineSet()
LineSet518.setVertexCount([2])
Coordinate519 = x3d.Coordinate()
Coordinate519.setPoint([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])

LineSet518.setCoord(Coordinate519)
ColorRGBA520 = x3d.ColorRGBA()
ColorRGBA520.setUSE("HAnimSiteLineColorRGBA")

LineSet518.setColor(ColorRGBA520)

Shape517.setGeometry(LineSet518)

HAnimSegment509.addChildren(Shape517)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
Shape521 = x3d.Shape()
LineSet522 = x3d.LineSet()
LineSet522.setVertexCount([2])
Coordinate523 = x3d.Coordinate()
Coordinate523.setPoint([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])

LineSet522.setCoord(Coordinate523)
ColorRGBA524 = x3d.ColorRGBA()
ColorRGBA524.setUSE("HAnimSiteLineColorRGBA")

LineSet522.setColor(ColorRGBA524)

Shape521.setGeometry(LineSet522)

HAnimSegment509.addChildren(Shape521)
HAnimSite525 = x3d.HAnimSite()
HAnimSite525.setName("r_thelion_pt_pt")
HAnimSite525.setDEF("hanim_r_thelion_pt")
HAnimSite525.setTranslation([-0.0736,1.3385,0.1217])
#HAnimSite visualization shape
TouchSensor526 = x3d.TouchSensor()
TouchSensor526.setDescription("HAnimSite r_thelion_pt")

HAnimSite525.addChildren(TouchSensor526)
Shape527 = x3d.Shape()
Shape527.setUSE("HAnimSiteShape")

HAnimSite525.addChildren(Shape527)

HAnimSegment509.addChildren(HAnimSite525)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.setName("l_thelion_pt_pt")
HAnimSite528.setDEF("hanim_l_thelion_pt")
HAnimSite528.setTranslation([0.0918,1.3382,0.1192])
#HAnimSite visualization shape
TouchSensor529 = x3d.TouchSensor()
TouchSensor529.setDescription("HAnimSite l_thelion_pt")

HAnimSite528.addChildren(TouchSensor529)
Shape530 = x3d.Shape()
Shape530.setUSE("HAnimSiteShape")

HAnimSite528.addChildren(Shape530)

HAnimSegment509.addChildren(HAnimSite528)

HAnimJoint508.addChildren(HAnimSegment509)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.setName("vt8")
HAnimJoint531.setDEF("hanim_vt8")
HAnimJoint531.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.setName("t8")
HAnimSegment532.setDEF("hanim_t8")
#Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
TouchSensor533 = x3d.TouchSensor()
TouchSensor533.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment532.addChildren(TouchSensor533)
Transform534 = x3d.Transform()
Transform534.setTranslation([0.0057,1.3382,-0.0845])
Shape535 = x3d.Shape()
Shape535.setUSE("HAnimJointShape")

Transform534.addChildren(Shape535)

HAnimSegment532.addChildren(Transform534)
#HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
Shape536 = x3d.Shape()
LineSet537 = x3d.LineSet()
LineSet537.setVertexCount([2])
Coordinate538 = x3d.Coordinate()
Coordinate538.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet537.setCoord(Coordinate538)
ColorRGBA539 = x3d.ColorRGBA()
ColorRGBA539.setUSE("HAnimSegmentLineColorRGBA")

LineSet537.setColor(ColorRGBA539)

Shape536.setGeometry(LineSet537)

HAnimSegment532.addChildren(Shape536)

HAnimJoint531.addChildren(HAnimSegment532)
HAnimJoint540 = x3d.HAnimJoint()
HAnimJoint540.setName("vt7")
HAnimJoint540.setDEF("hanim_vt7")
HAnimJoint540.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setName("t7")
HAnimSegment541.setDEF("hanim_t7")
#Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
TouchSensor542 = x3d.TouchSensor()
TouchSensor542.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment541.addChildren(TouchSensor542)
Transform543 = x3d.Transform()
Transform543.setTranslation([0.0058,1.3625,-0.0833])
Shape544 = x3d.Shape()
Shape544.setUSE("HAnimJointShape")

Transform543.addChildren(Shape544)

HAnimSegment541.addChildren(Transform543)
#HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
Shape545 = x3d.Shape()
LineSet546 = x3d.LineSet()
LineSet546.setVertexCount([2])
Coordinate547 = x3d.Coordinate()
Coordinate547.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet546.setCoord(Coordinate547)
ColorRGBA548 = x3d.ColorRGBA()
ColorRGBA548.setUSE("HAnimSegmentLineColorRGBA")

LineSet546.setColor(ColorRGBA548)

Shape545.setGeometry(LineSet546)

HAnimSegment541.addChildren(Shape545)

HAnimJoint540.addChildren(HAnimSegment541)
HAnimJoint549 = x3d.HAnimJoint()
HAnimJoint549.setName("vt6")
HAnimJoint549.setDEF("hanim_vt6")
HAnimJoint549.setCenter([0.0059,1.3866,-0.08])
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setName("t6")
HAnimSegment550.setDEF("hanim_t6")
#Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
TouchSensor551 = x3d.TouchSensor()
TouchSensor551.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment550.addChildren(TouchSensor551)
Transform552 = x3d.Transform()
Transform552.setTranslation([0.0059,1.3866,-0.08])
Shape553 = x3d.Shape()
Shape553.setUSE("HAnimJointShape")

Transform552.addChildren(Shape553)

HAnimSegment550.addChildren(Transform552)
#HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
Shape554 = x3d.Shape()
LineSet555 = x3d.LineSet()
LineSet555.setVertexCount([2])
Coordinate556 = x3d.Coordinate()
Coordinate556.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet555.setCoord(Coordinate556)
ColorRGBA557 = x3d.ColorRGBA()
ColorRGBA557.setUSE("HAnimSegmentLineColorRGBA")

LineSet555.setColor(ColorRGBA557)

Shape554.setGeometry(LineSet555)

HAnimSegment550.addChildren(Shape554)

HAnimJoint549.addChildren(HAnimSegment550)
HAnimJoint558 = x3d.HAnimJoint()
HAnimJoint558.setName("vt5")
HAnimJoint558.setDEF("hanim_vt5")
HAnimJoint558.setCenter([0.006,1.4102,-0.0745])
HAnimSegment559 = x3d.HAnimSegment()
HAnimSegment559.setName("t5")
HAnimSegment559.setDEF("hanim_t5")
#Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
TouchSensor560 = x3d.TouchSensor()
TouchSensor560.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment559.addChildren(TouchSensor560)
Transform561 = x3d.Transform()
Transform561.setTranslation([0.006,1.4102,-0.0745])
Shape562 = x3d.Shape()
Shape562.setUSE("HAnimJointShape")

Transform561.addChildren(Shape562)

HAnimSegment559.addChildren(Transform561)
#HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
Shape563 = x3d.Shape()
LineSet564 = x3d.LineSet()
LineSet564.setVertexCount([2])
Coordinate565 = x3d.Coordinate()
Coordinate565.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet564.setCoord(Coordinate565)
ColorRGBA566 = x3d.ColorRGBA()
ColorRGBA566.setUSE("HAnimSegmentLineColorRGBA")

LineSet564.setColor(ColorRGBA566)

Shape563.setGeometry(LineSet564)

HAnimSegment559.addChildren(Shape563)

HAnimJoint558.addChildren(HAnimSegment559)
HAnimJoint567 = x3d.HAnimJoint()
HAnimJoint567.setName("vt4")
HAnimJoint567.setDEF("hanim_vt4")
HAnimJoint567.setCenter([0.0061,1.432,-0.0675])
HAnimSegment568 = x3d.HAnimSegment()
HAnimSegment568.setName("t4")
HAnimSegment568.setDEF("hanim_t4")
#Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
TouchSensor569 = x3d.TouchSensor()
TouchSensor569.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment568.addChildren(TouchSensor569)
Transform570 = x3d.Transform()
Transform570.setTranslation([0.0061,1.432,-0.0675])
Shape571 = x3d.Shape()
Shape571.setUSE("HAnimJointShape")

Transform570.addChildren(Shape571)

HAnimSegment568.addChildren(Transform570)
#HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
Shape572 = x3d.Shape()
LineSet573 = x3d.LineSet()
LineSet573.setVertexCount([2])
Coordinate574 = x3d.Coordinate()
Coordinate574.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet573.setCoord(Coordinate574)
ColorRGBA575 = x3d.ColorRGBA()
ColorRGBA575.setUSE("HAnimSegmentLineColorRGBA")

LineSet573.setColor(ColorRGBA575)

Shape572.setGeometry(LineSet573)

HAnimSegment568.addChildren(Shape572)

HAnimJoint567.addChildren(HAnimSegment568)
HAnimJoint576 = x3d.HAnimJoint()
HAnimJoint576.setName("vt3")
HAnimJoint576.setDEF("hanim_vt3")
HAnimJoint576.setCenter([0.0062,1.4583,-0.057])
HAnimSegment577 = x3d.HAnimSegment()
HAnimSegment577.setName("t3")
HAnimSegment577.setDEF("hanim_t3")
#Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
TouchSensor578 = x3d.TouchSensor()
TouchSensor578.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment577.addChildren(TouchSensor578)
Transform579 = x3d.Transform()
Transform579.setTranslation([0.0062,1.4583,-0.057])
Shape580 = x3d.Shape()
Shape580.setUSE("HAnimJointShape")

Transform579.addChildren(Shape580)

HAnimSegment577.addChildren(Transform579)
#HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
Shape581 = x3d.Shape()
LineSet582 = x3d.LineSet()
LineSet582.setVertexCount([2])
Coordinate583 = x3d.Coordinate()
Coordinate583.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet582.setCoord(Coordinate583)
ColorRGBA584 = x3d.ColorRGBA()
ColorRGBA584.setUSE("HAnimSegmentLineColorRGBA")

LineSet582.setColor(ColorRGBA584)

Shape581.setGeometry(LineSet582)

HAnimSegment577.addChildren(Shape581)

HAnimJoint576.addChildren(HAnimSegment577)
HAnimJoint585 = x3d.HAnimJoint()
HAnimJoint585.setName("vt2")
HAnimJoint585.setDEF("hanim_vt2")
HAnimJoint585.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment586 = x3d.HAnimSegment()
HAnimSegment586.setName("t2")
HAnimSegment586.setDEF("hanim_t2")
#Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment586.addChildren(TouchSensor587)
Transform588 = x3d.Transform()
Transform588.setTranslation([0.0063,1.4761,-0.0484])
Shape589 = x3d.Shape()
Shape589.setUSE("HAnimJointShape")

Transform588.addChildren(Shape589)

HAnimSegment586.addChildren(Transform588)
#HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
Shape590 = x3d.Shape()
LineSet591 = x3d.LineSet()
LineSet591.setVertexCount([2])
Coordinate592 = x3d.Coordinate()
Coordinate592.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet591.setCoord(Coordinate592)
ColorRGBA593 = x3d.ColorRGBA()
ColorRGBA593.setUSE("HAnimSegmentLineColorRGBA")

LineSet591.setColor(ColorRGBA593)

Shape590.setGeometry(LineSet591)

HAnimSegment586.addChildren(Shape590)

HAnimJoint585.addChildren(HAnimSegment586)
HAnimJoint594 = x3d.HAnimJoint()
HAnimJoint594.setName("vt1")
HAnimJoint594.setDEF("hanim_vt1")
HAnimJoint594.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment595 = x3d.HAnimSegment()
HAnimSegment595.setName("t1")
HAnimSegment595.setDEF("hanim_t1")
#Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
TouchSensor596 = x3d.TouchSensor()
TouchSensor596.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment595.addChildren(TouchSensor596)
Transform597 = x3d.Transform()
Transform597.setTranslation([0.0065,1.4951,-0.0387])
Shape598 = x3d.Shape()
Shape598.setUSE("HAnimJointShape")

Transform597.addChildren(Shape598)

HAnimSegment595.addChildren(Transform597)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
Shape599 = x3d.Shape()
LineSet600 = x3d.LineSet()
LineSet600.setVertexCount([2])
Coordinate601 = x3d.Coordinate()
Coordinate601.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet600.setCoord(Coordinate601)
ColorRGBA602 = x3d.ColorRGBA()
ColorRGBA602.setUSE("HAnimSegmentLineColorRGBA")

LineSet600.setColor(ColorRGBA602)

Shape599.setGeometry(LineSet600)

HAnimSegment595.addChildren(Shape599)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
Shape603 = x3d.Shape()
LineSet604 = x3d.LineSet()
LineSet604.setVertexCount([2])
Coordinate605 = x3d.Coordinate()
Coordinate605.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet604.setCoord(Coordinate605)
ColorRGBA606 = x3d.ColorRGBA()
ColorRGBA606.setUSE("HAnimSegmentLineColorRGBA")

LineSet604.setColor(ColorRGBA606)

Shape603.setGeometry(LineSet604)

HAnimSegment595.addChildren(Shape603)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.setVertexCount([2])
Coordinate609 = x3d.Coordinate()
Coordinate609.setPoint([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])

LineSet608.setCoord(Coordinate609)
ColorRGBA610 = x3d.ColorRGBA()
ColorRGBA610.setUSE("HAnimSegmentLineColorRGBA")

LineSet608.setColor(ColorRGBA610)

Shape607.setGeometry(LineSet608)

HAnimSegment595.addChildren(Shape607)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.setVertexCount([2])
Coordinate613 = x3d.Coordinate()
Coordinate613.setPoint([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])

LineSet612.setCoord(Coordinate613)
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.setUSE("HAnimSiteLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment595.addChildren(Shape611)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
Shape615 = x3d.Shape()
LineSet616 = x3d.LineSet()
LineSet616.setVertexCount([2])
Coordinate617 = x3d.Coordinate()
Coordinate617.setPoint([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])

LineSet616.setCoord(Coordinate617)
ColorRGBA618 = x3d.ColorRGBA()
ColorRGBA618.setUSE("HAnimSiteLineColorRGBA")

LineSet616.setColor(ColorRGBA618)

Shape615.setGeometry(LineSet616)

HAnimSegment595.addChildren(Shape615)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setName("suprasternale_pt_pt")
HAnimSite619.setDEF("hanim_suprasternale_pt")
HAnimSite619.setTranslation([0.0084,1.4714,0.0551])
#HAnimSite visualization shape
TouchSensor620 = x3d.TouchSensor()
TouchSensor620.setDescription("HAnimSite suprasternale_pt")

HAnimSite619.addChildren(TouchSensor620)
Shape621 = x3d.Shape()
Shape621.setUSE("HAnimSiteShape")

HAnimSite619.addChildren(Shape621)

HAnimSegment595.addChildren(HAnimSite619)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setName("cervicale_pt_pt")
HAnimSite622.setDEF("hanim_cervicale_pt")
HAnimSite622.setTranslation([0.0064,1.52,-0.0815])
#HAnimSite visualization shape
TouchSensor623 = x3d.TouchSensor()
TouchSensor623.setDescription("HAnimSite cervicale_pt")

HAnimSite622.addChildren(TouchSensor623)
Shape624 = x3d.Shape()
Shape624.setUSE("HAnimSiteShape")

HAnimSite622.addChildren(Shape624)

HAnimSegment595.addChildren(HAnimSite622)

HAnimJoint594.addChildren(HAnimSegment595)
HAnimJoint625 = x3d.HAnimJoint()
HAnimJoint625.setName("vc7")
HAnimJoint625.setDEF("hanim_vc7")
HAnimJoint625.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment626 = x3d.HAnimSegment()
HAnimSegment626.setName("c7")
HAnimSegment626.setDEF("hanim_c7")
#Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
TouchSensor627 = x3d.TouchSensor()
TouchSensor627.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment626.addChildren(TouchSensor627)
Transform628 = x3d.Transform()
Transform628.setTranslation([0.0066,1.5132,-0.0301])
Shape629 = x3d.Shape()
Shape629.setUSE("HAnimJointShape")

Transform628.addChildren(Shape629)

HAnimSegment626.addChildren(Transform628)
#HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
Shape630 = x3d.Shape()
LineSet631 = x3d.LineSet()
LineSet631.setVertexCount([2])
Coordinate632 = x3d.Coordinate()
Coordinate632.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet631.setCoord(Coordinate632)
ColorRGBA633 = x3d.ColorRGBA()
ColorRGBA633.setUSE("HAnimSegmentLineColorRGBA")

LineSet631.setColor(ColorRGBA633)

Shape630.setGeometry(LineSet631)

HAnimSegment626.addChildren(Shape630)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
Shape634 = x3d.Shape()
LineSet635 = x3d.LineSet()
LineSet635.setVertexCount([2])
Coordinate636 = x3d.Coordinate()
Coordinate636.setPoint([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])

LineSet635.setCoord(Coordinate636)
ColorRGBA637 = x3d.ColorRGBA()
ColorRGBA637.setUSE("HAnimSiteLineColorRGBA")

LineSet635.setColor(ColorRGBA637)

Shape634.setGeometry(LineSet635)

HAnimSegment626.addChildren(Shape634)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
Shape638 = x3d.Shape()
LineSet639 = x3d.LineSet()
LineSet639.setVertexCount([2])
Coordinate640 = x3d.Coordinate()
Coordinate640.setPoint([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])

LineSet639.setCoord(Coordinate640)
ColorRGBA641 = x3d.ColorRGBA()
ColorRGBA641.setUSE("HAnimSiteLineColorRGBA")

LineSet639.setColor(ColorRGBA641)

Shape638.setGeometry(LineSet639)

HAnimSegment626.addChildren(Shape638)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.setName("r_neck_base_pt_pt")
HAnimSite642.setDEF("hanim_r_neck_base_pt")
HAnimSite642.setTranslation([-0.0419,1.5149,-0.022])
#HAnimSite visualization shape
TouchSensor643 = x3d.TouchSensor()
TouchSensor643.setDescription("HAnimSite r_neck_base_pt")

HAnimSite642.addChildren(TouchSensor643)
Shape644 = x3d.Shape()
Shape644.setUSE("HAnimSiteShape")

HAnimSite642.addChildren(Shape644)

HAnimSegment626.addChildren(HAnimSite642)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setName("l_neck_base_pt_pt")
HAnimSite645.setDEF("hanim_l_neck_base_pt")
HAnimSite645.setTranslation([0.0646,1.5141,-0.038])
#HAnimSite visualization shape
TouchSensor646 = x3d.TouchSensor()
TouchSensor646.setDescription("HAnimSite l_neck_base_pt")

HAnimSite645.addChildren(TouchSensor646)
Shape647 = x3d.Shape()
Shape647.setUSE("HAnimSiteShape")

HAnimSite645.addChildren(Shape647)

HAnimSegment626.addChildren(HAnimSite645)

HAnimJoint625.addChildren(HAnimSegment626)
HAnimJoint648 = x3d.HAnimJoint()
HAnimJoint648.setName("vc6")
HAnimJoint648.setDEF("hanim_vc6")
HAnimJoint648.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment649 = x3d.HAnimSegment()
HAnimSegment649.setName("c6")
HAnimSegment649.setDEF("hanim_c6")
#Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
TouchSensor650 = x3d.TouchSensor()
TouchSensor650.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment649.addChildren(TouchSensor650)
Transform651 = x3d.Transform()
Transform651.setTranslation([0.0066,1.5357,-0.0143])
Shape652 = x3d.Shape()
Shape652.setUSE("HAnimJointShape")

Transform651.addChildren(Shape652)

HAnimSegment649.addChildren(Transform651)
#HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
Shape653 = x3d.Shape()
LineSet654 = x3d.LineSet()
LineSet654.setVertexCount([2])
Coordinate655 = x3d.Coordinate()
Coordinate655.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet654.setCoord(Coordinate655)
ColorRGBA656 = x3d.ColorRGBA()
ColorRGBA656.setUSE("HAnimSegmentLineColorRGBA")

LineSet654.setColor(ColorRGBA656)

Shape653.setGeometry(LineSet654)

HAnimSegment649.addChildren(Shape653)

HAnimJoint648.addChildren(HAnimSegment649)
HAnimJoint657 = x3d.HAnimJoint()
HAnimJoint657.setName("vc5")
HAnimJoint657.setDEF("hanim_vc5")
HAnimJoint657.setCenter([0.0066,1.552,-0.0082])
HAnimSegment658 = x3d.HAnimSegment()
HAnimSegment658.setName("c5")
HAnimSegment658.setDEF("hanim_c5")
#Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
TouchSensor659 = x3d.TouchSensor()
TouchSensor659.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment658.addChildren(TouchSensor659)
Transform660 = x3d.Transform()
Transform660.setTranslation([0.0066,1.552,-0.0082])
Shape661 = x3d.Shape()
Shape661.setUSE("HAnimJointShape")

Transform660.addChildren(Shape661)

HAnimSegment658.addChildren(Transform660)
#HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
Shape662 = x3d.Shape()
LineSet663 = x3d.LineSet()
LineSet663.setVertexCount([2])
Coordinate664 = x3d.Coordinate()
Coordinate664.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet663.setCoord(Coordinate664)
ColorRGBA665 = x3d.ColorRGBA()
ColorRGBA665.setUSE("HAnimSegmentLineColorRGBA")

LineSet663.setColor(ColorRGBA665)

Shape662.setGeometry(LineSet663)

HAnimSegment658.addChildren(Shape662)

HAnimJoint657.addChildren(HAnimSegment658)
HAnimJoint666 = x3d.HAnimJoint()
HAnimJoint666.setName("vc4")
HAnimJoint666.setDEF("hanim_vc4")
HAnimJoint666.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment667 = x3d.HAnimSegment()
HAnimSegment667.setName("c4")
HAnimSegment667.setDEF("hanim_c4")
#Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment667.addChildren(TouchSensor668)
Transform669 = x3d.Transform()
Transform669.setTranslation([0.0066,1.5662,-0.0084])
Shape670 = x3d.Shape()
Shape670.setUSE("HAnimJointShape")

Transform669.addChildren(Shape670)

HAnimSegment667.addChildren(Transform669)
#HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
Shape671 = x3d.Shape()
LineSet672 = x3d.LineSet()
LineSet672.setVertexCount([2])
Coordinate673 = x3d.Coordinate()
Coordinate673.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet672.setCoord(Coordinate673)
ColorRGBA674 = x3d.ColorRGBA()
ColorRGBA674.setUSE("HAnimSegmentLineColorRGBA")

LineSet672.setColor(ColorRGBA674)

Shape671.setGeometry(LineSet672)

HAnimSegment667.addChildren(Shape671)

HAnimJoint666.addChildren(HAnimSegment667)
HAnimJoint675 = x3d.HAnimJoint()
HAnimJoint675.setName("vc3")
HAnimJoint675.setDEF("hanim_vc3")
HAnimJoint675.setCenter([0.0066,1.58,-0.0103])
HAnimSegment676 = x3d.HAnimSegment()
HAnimSegment676.setName("c3")
HAnimSegment676.setDEF("hanim_c3")
#Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
TouchSensor677 = x3d.TouchSensor()
TouchSensor677.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment676.addChildren(TouchSensor677)
Transform678 = x3d.Transform()
Transform678.setTranslation([0.0066,1.58,-0.0103])
Shape679 = x3d.Shape()
Shape679.setUSE("HAnimJointShape")

Transform678.addChildren(Shape679)

HAnimSegment676.addChildren(Transform678)
#HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
Shape680 = x3d.Shape()
LineSet681 = x3d.LineSet()
LineSet681.setVertexCount([2])
Coordinate682 = x3d.Coordinate()
Coordinate682.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet681.setCoord(Coordinate682)
ColorRGBA683 = x3d.ColorRGBA()
ColorRGBA683.setUSE("HAnimSegmentLineColorRGBA")

LineSet681.setColor(ColorRGBA683)

Shape680.setGeometry(LineSet681)

HAnimSegment676.addChildren(Shape680)

HAnimJoint675.addChildren(HAnimSegment676)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.setName("vc2")
HAnimJoint684.setDEF("hanim_vc2")
HAnimJoint684.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment685 = x3d.HAnimSegment()
HAnimSegment685.setName("c2")
HAnimSegment685.setDEF("hanim_c2")
#Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
TouchSensor686 = x3d.TouchSensor()
TouchSensor686.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment685.addChildren(TouchSensor686)
Transform687 = x3d.Transform()
Transform687.setTranslation([0.0066,1.5928,-0.0103])
Shape688 = x3d.Shape()
Shape688.setUSE("HAnimJointShape")

Transform687.addChildren(Shape688)

HAnimSegment685.addChildren(Transform687)
#HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
Shape689 = x3d.Shape()
LineSet690 = x3d.LineSet()
LineSet690.setVertexCount([2])
Coordinate691 = x3d.Coordinate()
Coordinate691.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet690.setCoord(Coordinate691)
ColorRGBA692 = x3d.ColorRGBA()
ColorRGBA692.setUSE("HAnimSegmentLineColorRGBA")

LineSet690.setColor(ColorRGBA692)

Shape689.setGeometry(LineSet690)

HAnimSegment685.addChildren(Shape689)

HAnimJoint684.addChildren(HAnimSegment685)
HAnimJoint693 = x3d.HAnimJoint()
HAnimJoint693.setName("vc1")
HAnimJoint693.setDEF("hanim_vc1")
HAnimJoint693.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment694 = x3d.HAnimSegment()
HAnimSegment694.setName("c1")
HAnimSegment694.setDEF("hanim_c1")
#Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
TouchSensor695 = x3d.TouchSensor()
TouchSensor695.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment694.addChildren(TouchSensor695)
Transform696 = x3d.Transform()
Transform696.setTranslation([0.0066,1.6144,-0.0034])
Shape697 = x3d.Shape()
Shape697.setUSE("HAnimJointShape")

Transform696.addChildren(Shape697)

HAnimSegment694.addChildren(Transform696)
#HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
Shape698 = x3d.Shape()
LineSet699 = x3d.LineSet()
LineSet699.setVertexCount([2])
Coordinate700 = x3d.Coordinate()
Coordinate700.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet699.setCoord(Coordinate700)
ColorRGBA701 = x3d.ColorRGBA()
ColorRGBA701.setUSE("HAnimSegmentLineColorRGBA")

LineSet699.setColor(ColorRGBA701)

Shape698.setGeometry(LineSet699)

HAnimSegment694.addChildren(Shape698)

HAnimJoint693.addChildren(HAnimSegment694)
HAnimJoint702 = x3d.HAnimJoint()
HAnimJoint702.setName("skullbase")
HAnimJoint702.setDEF("hanim_skullbase")
HAnimJoint702.setCenter([0.0044,1.6209,0.0236])
HAnimSegment703 = x3d.HAnimSegment()
HAnimSegment703.setName("skull")
HAnimSegment703.setDEF("hanim_skull")
#Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
TouchSensor704 = x3d.TouchSensor()
TouchSensor704.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment703.addChildren(TouchSensor704)
Transform705 = x3d.Transform()
Transform705.setTranslation([0.0044,1.6209,0.0236])
Shape706 = x3d.Shape()
Shape706.setUSE("HAnimJointShape")

Transform705.addChildren(Shape706)

HAnimSegment703.addChildren(Transform705)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
Shape707 = x3d.Shape()
LineSet708 = x3d.LineSet()
LineSet708.setVertexCount([2])
Coordinate709 = x3d.Coordinate()
Coordinate709.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet708.setCoord(Coordinate709)
ColorRGBA710 = x3d.ColorRGBA()
ColorRGBA710.setUSE("HAnimSegmentLineColorRGBA")

LineSet708.setColor(ColorRGBA710)

Shape707.setGeometry(LineSet708)

HAnimSegment703.addChildren(Shape707)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
Shape711 = x3d.Shape()
LineSet712 = x3d.LineSet()
LineSet712.setVertexCount([2])
Coordinate713 = x3d.Coordinate()
Coordinate713.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet712.setCoord(Coordinate713)
ColorRGBA714 = x3d.ColorRGBA()
ColorRGBA714.setUSE("HAnimSegmentLineColorRGBA")

LineSet712.setColor(ColorRGBA714)

Shape711.setGeometry(LineSet712)

HAnimSegment703.addChildren(Shape711)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
Shape715 = x3d.Shape()
LineSet716 = x3d.LineSet()
LineSet716.setVertexCount([2])
Coordinate717 = x3d.Coordinate()
Coordinate717.setPoint([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])

LineSet716.setCoord(Coordinate717)
ColorRGBA718 = x3d.ColorRGBA()
ColorRGBA718.setUSE("HAnimSegmentLineColorRGBA")

LineSet716.setColor(ColorRGBA718)

Shape715.setGeometry(LineSet716)

HAnimSegment703.addChildren(Shape715)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
Shape719 = x3d.Shape()
LineSet720 = x3d.LineSet()
LineSet720.setVertexCount([2])
Coordinate721 = x3d.Coordinate()
Coordinate721.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet720.setCoord(Coordinate721)
ColorRGBA722 = x3d.ColorRGBA()
ColorRGBA722.setUSE("HAnimSegmentLineColorRGBA")

LineSet720.setColor(ColorRGBA722)

Shape719.setGeometry(LineSet720)

HAnimSegment703.addChildren(Shape719)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
Shape723 = x3d.Shape()
LineSet724 = x3d.LineSet()
LineSet724.setVertexCount([2])
Coordinate725 = x3d.Coordinate()
Coordinate725.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet724.setCoord(Coordinate725)
ColorRGBA726 = x3d.ColorRGBA()
ColorRGBA726.setUSE("HAnimSegmentLineColorRGBA")

LineSet724.setColor(ColorRGBA726)

Shape723.setGeometry(LineSet724)

HAnimSegment703.addChildren(Shape723)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
Shape727 = x3d.Shape()
LineSet728 = x3d.LineSet()
LineSet728.setVertexCount([2])
Coordinate729 = x3d.Coordinate()
Coordinate729.setPoint([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])

LineSet728.setCoord(Coordinate729)
ColorRGBA730 = x3d.ColorRGBA()
ColorRGBA730.setUSE("HAnimSegmentLineColorRGBA")

LineSet728.setColor(ColorRGBA730)

Shape727.setGeometry(LineSet728)

HAnimSegment703.addChildren(Shape727)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.setVertexCount([2])
Coordinate733 = x3d.Coordinate()
Coordinate733.setPoint([0.0044,1.6209,0.0236,0,1.63,0.015])

LineSet732.setCoord(Coordinate733)
ColorRGBA734 = x3d.ColorRGBA()
ColorRGBA734.setUSE("HAnimSegmentLineColorRGBA")

LineSet732.setColor(ColorRGBA734)

Shape731.setGeometry(LineSet732)

HAnimSegment703.addChildren(Shape731)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape735 = x3d.Shape()
LineSet736 = x3d.LineSet()
LineSet736.setVertexCount([2])
Coordinate737 = x3d.Coordinate()
Coordinate737.setPoint([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])

LineSet736.setCoord(Coordinate737)
ColorRGBA738 = x3d.ColorRGBA()
ColorRGBA738.setUSE("HAnimSiteLineColorRGBA")

LineSet736.setColor(ColorRGBA738)

Shape735.setGeometry(LineSet736)

HAnimSegment703.addChildren(Shape735)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.setVertexCount([2])
Coordinate741 = x3d.Coordinate()
Coordinate741.setPoint([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])

LineSet740.setCoord(Coordinate741)
ColorRGBA742 = x3d.ColorRGBA()
ColorRGBA742.setUSE("HAnimSiteLineColorRGBA")

LineSet740.setColor(ColorRGBA742)

Shape739.setGeometry(LineSet740)

HAnimSegment703.addChildren(Shape739)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
Shape743 = x3d.Shape()
LineSet744 = x3d.LineSet()
LineSet744.setVertexCount([2])
Coordinate745 = x3d.Coordinate()
Coordinate745.setPoint([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])

LineSet744.setCoord(Coordinate745)
ColorRGBA746 = x3d.ColorRGBA()
ColorRGBA746.setUSE("HAnimSiteLineColorRGBA")

LineSet744.setColor(ColorRGBA746)

Shape743.setGeometry(LineSet744)

HAnimSegment703.addChildren(Shape743)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
Shape747 = x3d.Shape()
LineSet748 = x3d.LineSet()
LineSet748.setVertexCount([2])
Coordinate749 = x3d.Coordinate()
Coordinate749.setPoint([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])

LineSet748.setCoord(Coordinate749)
ColorRGBA750 = x3d.ColorRGBA()
ColorRGBA750.setUSE("HAnimSiteLineColorRGBA")

LineSet748.setColor(ColorRGBA750)

Shape747.setGeometry(LineSet748)

HAnimSegment703.addChildren(Shape747)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
Shape751 = x3d.Shape()
LineSet752 = x3d.LineSet()
LineSet752.setVertexCount([2])
Coordinate753 = x3d.Coordinate()
Coordinate753.setPoint([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])

LineSet752.setCoord(Coordinate753)
ColorRGBA754 = x3d.ColorRGBA()
ColorRGBA754.setUSE("HAnimSiteLineColorRGBA")

LineSet752.setColor(ColorRGBA754)

Shape751.setGeometry(LineSet752)

HAnimSegment703.addChildren(Shape751)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
Shape755 = x3d.Shape()
LineSet756 = x3d.LineSet()
LineSet756.setVertexCount([2])
Coordinate757 = x3d.Coordinate()
Coordinate757.setPoint([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])

LineSet756.setCoord(Coordinate757)
ColorRGBA758 = x3d.ColorRGBA()
ColorRGBA758.setUSE("HAnimSiteLineColorRGBA")

LineSet756.setColor(ColorRGBA758)

Shape755.setGeometry(LineSet756)

HAnimSegment703.addChildren(Shape755)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
Shape759 = x3d.Shape()
LineSet760 = x3d.LineSet()
LineSet760.setVertexCount([2])
Coordinate761 = x3d.Coordinate()
Coordinate761.setPoint([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])

LineSet760.setCoord(Coordinate761)
ColorRGBA762 = x3d.ColorRGBA()
ColorRGBA762.setUSE("HAnimSiteLineColorRGBA")

LineSet760.setColor(ColorRGBA762)

Shape759.setGeometry(LineSet760)

HAnimSegment703.addChildren(Shape759)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
Shape763 = x3d.Shape()
LineSet764 = x3d.LineSet()
LineSet764.setVertexCount([2])
Coordinate765 = x3d.Coordinate()
Coordinate765.setPoint([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])

LineSet764.setCoord(Coordinate765)
ColorRGBA766 = x3d.ColorRGBA()
ColorRGBA766.setUSE("HAnimSiteLineColorRGBA")

LineSet764.setColor(ColorRGBA766)

Shape763.setGeometry(LineSet764)

HAnimSegment703.addChildren(Shape763)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
Shape767 = x3d.Shape()
LineSet768 = x3d.LineSet()
LineSet768.setVertexCount([2])
Coordinate769 = x3d.Coordinate()
Coordinate769.setPoint([0.0044,1.6209,0.0236,0.0631,1.553,0.033])

LineSet768.setCoord(Coordinate769)
ColorRGBA770 = x3d.ColorRGBA()
ColorRGBA770.setUSE("HAnimSiteLineColorRGBA")

LineSet768.setColor(ColorRGBA770)

Shape767.setGeometry(LineSet768)

HAnimSegment703.addChildren(Shape767)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
Shape771 = x3d.Shape()
LineSet772 = x3d.LineSet()
LineSet772.setVertexCount([2])
Coordinate773 = x3d.Coordinate()
Coordinate773.setPoint([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])

LineSet772.setCoord(Coordinate773)
ColorRGBA774 = x3d.ColorRGBA()
ColorRGBA774.setUSE("HAnimSiteLineColorRGBA")

LineSet772.setColor(ColorRGBA774)

Shape771.setGeometry(LineSet772)

HAnimSegment703.addChildren(Shape771)
HAnimSite775 = x3d.HAnimSite()
HAnimSite775.setName("skull_tip_pt")
HAnimSite775.setDEF("hanim_skull_tip")
HAnimSite775.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry
#HAnimSite visualization shape
TouchSensor776 = x3d.TouchSensor()
TouchSensor776.setDescription("HAnimSite skull_tip")

HAnimSite775.addChildren(TouchSensor776)
Shape777 = x3d.Shape()
Shape777.setUSE("HAnimSiteShape")

HAnimSite775.addChildren(Shape777)

HAnimSegment703.addChildren(HAnimSite775)
HAnimSite778 = x3d.HAnimSite()
HAnimSite778.setName("sellion_pt_pt")
HAnimSite778.setDEF("hanim_sellion_pt")
HAnimSite778.setTranslation([0.0058,1.6316,0.0852])
#HAnimSite visualization shape
TouchSensor779 = x3d.TouchSensor()
TouchSensor779.setDescription("HAnimSite sellion_pt")

HAnimSite778.addChildren(TouchSensor779)
Shape780 = x3d.Shape()
Shape780.setUSE("HAnimSiteShape")

HAnimSite778.addChildren(Shape780)

HAnimSegment703.addChildren(HAnimSite778)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.setName("r_infraorbitale_pt_pt")
HAnimSite781.setDEF("hanim_r_infraorbitale_pt")
HAnimSite781.setTranslation([-0.0237,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor782 = x3d.TouchSensor()
TouchSensor782.setDescription("HAnimSite r_infraorbitale_pt")

HAnimSite781.addChildren(TouchSensor782)
Shape783 = x3d.Shape()
Shape783.setUSE("HAnimSiteShape")

HAnimSite781.addChildren(Shape783)

HAnimSegment703.addChildren(HAnimSite781)
HAnimSite784 = x3d.HAnimSite()
HAnimSite784.setName("l_infraorbitale_pt_pt")
HAnimSite784.setDEF("hanim_l_infraorbitale_pt")
HAnimSite784.setTranslation([0.0341,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor785 = x3d.TouchSensor()
TouchSensor785.setDescription("HAnimSite l_infraorbitale_pt")

HAnimSite784.addChildren(TouchSensor785)
Shape786 = x3d.Shape()
Shape786.setUSE("HAnimSiteShape")

HAnimSite784.addChildren(Shape786)

HAnimSegment703.addChildren(HAnimSite784)
HAnimSite787 = x3d.HAnimSite()
HAnimSite787.setName("supramenton_pt_pt")
HAnimSite787.setDEF("hanim_supramenton_pt")
HAnimSite787.setTranslation([0.0061,1.541,0.0805])
#HAnimSite visualization shape
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.setDescription("HAnimSite supramenton_pt")

HAnimSite787.addChildren(TouchSensor788)
Shape789 = x3d.Shape()
Shape789.setUSE("HAnimSiteShape")

HAnimSite787.addChildren(Shape789)

HAnimSegment703.addChildren(HAnimSite787)
HAnimSite790 = x3d.HAnimSite()
HAnimSite790.setName("r_tragion_pt_pt")
HAnimSite790.setDEF("hanim_r_tragion_pt")
HAnimSite790.setTranslation([-0.0646,1.6347,0.0302])
#HAnimSite visualization shape
TouchSensor791 = x3d.TouchSensor()
TouchSensor791.setDescription("HAnimSite r_tragion_pt")

HAnimSite790.addChildren(TouchSensor791)
Shape792 = x3d.Shape()
Shape792.setUSE("HAnimSiteShape")

HAnimSite790.addChildren(Shape792)

HAnimSegment703.addChildren(HAnimSite790)
HAnimSite793 = x3d.HAnimSite()
HAnimSite793.setName("r_gonion_pt_pt")
HAnimSite793.setDEF("hanim_r_gonion_pt")
HAnimSite793.setTranslation([-0.052,1.5529,0.0347])
#HAnimSite visualization shape
TouchSensor794 = x3d.TouchSensor()
TouchSensor794.setDescription("HAnimSite r_gonion_pt")

HAnimSite793.addChildren(TouchSensor794)
Shape795 = x3d.Shape()
Shape795.setUSE("HAnimSiteShape")

HAnimSite793.addChildren(Shape795)

HAnimSegment703.addChildren(HAnimSite793)
HAnimSite796 = x3d.HAnimSite()
HAnimSite796.setName("l_tragion_pt_pt")
HAnimSite796.setDEF("hanim_l_tragion_pt")
HAnimSite796.setTranslation([0.0739,1.6348,0.0282])
#HAnimSite visualization shape
TouchSensor797 = x3d.TouchSensor()
TouchSensor797.setDescription("HAnimSite l_tragion_pt")

HAnimSite796.addChildren(TouchSensor797)
Shape798 = x3d.Shape()
Shape798.setUSE("HAnimSiteShape")

HAnimSite796.addChildren(Shape798)

HAnimSegment703.addChildren(HAnimSite796)
HAnimSite799 = x3d.HAnimSite()
HAnimSite799.setName("l_gonion_pt_pt")
HAnimSite799.setDEF("hanim_l_gonion_pt")
HAnimSite799.setTranslation([0.0631,1.553,0.033])
#HAnimSite visualization shape
TouchSensor800 = x3d.TouchSensor()
TouchSensor800.setDescription("HAnimSite l_gonion_pt")

HAnimSite799.addChildren(TouchSensor800)
Shape801 = x3d.Shape()
Shape801.setUSE("HAnimSiteShape")

HAnimSite799.addChildren(Shape801)

HAnimSegment703.addChildren(HAnimSite799)
HAnimSite802 = x3d.HAnimSite()
HAnimSite802.setName("nuchale_pt_pt")
HAnimSite802.setDEF("hanim_nuchale_pt")
HAnimSite802.setTranslation([0.0039,1.5972,-0.0796])
#HAnimSite visualization shape
TouchSensor803 = x3d.TouchSensor()
TouchSensor803.setDescription("HAnimSite nuchale_pt")

HAnimSite802.addChildren(TouchSensor803)
Shape804 = x3d.Shape()
Shape804.setUSE("HAnimSiteShape")

HAnimSite802.addChildren(Shape804)

HAnimSegment703.addChildren(HAnimSite802)

HAnimJoint702.addChildren(HAnimSegment703)
HAnimJoint805 = x3d.HAnimJoint()
HAnimJoint805.setName("l_eyeball_joint")
HAnimJoint805.setDEF("hanim_l_eyeball_joint")
HAnimJoint805.setCenter([0.0336,1.6332,0.0502])
HAnimSegment806 = x3d.HAnimSegment()
HAnimSegment806.setName("l_eyeball")
HAnimSegment806.setDEF("hanim_l_eyeball")
#Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor807 = x3d.TouchSensor()
TouchSensor807.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment806.addChildren(TouchSensor807)
Transform808 = x3d.Transform()
Transform808.setTranslation([0.0336,1.6332,0.0502])
Shape809 = x3d.Shape()
Shape809.setUSE("HAnimJointShape")

Transform808.addChildren(Shape809)

HAnimSegment806.addChildren(Transform808)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.setVertexCount([2])
Coordinate812 = x3d.Coordinate()
Coordinate812.setPoint([0.0336,1.6332,0.0502,0.034,1.64,0.05])

LineSet811.setCoord(Coordinate812)
ColorRGBA813 = x3d.ColorRGBA()
ColorRGBA813.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA813.setColor([1,1,0,1,1,1,0,0.1])

LineSet811.setColor(ColorRGBA813)

Shape810.setGeometry(LineSet811)

HAnimSegment806.addChildren(Shape810)
HAnimSite814 = x3d.HAnimSite()
HAnimSite814.setName("l_eyeball_site_view_pt")
HAnimSite814.setDEF("hanim_l_eyeball_site_view")
HAnimSite814.setTranslation([0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor815 = x3d.TouchSensor()
TouchSensor815.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite814.addChildren(TouchSensor815)
Shape816 = x3d.Shape()
Shape816.setUSE("HAnimSiteShape")

HAnimSite814.addChildren(Shape816)
Viewpoint817 = x3d.Viewpoint()
Viewpoint817.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint817.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint817.setOrientation([0,1,0,3.141593])
Viewpoint817.setPosition([0,0,0])

HAnimSite814.addChildren(Viewpoint817)
#HAnimSite/Viewpoint visualization shape
Anchor818 = x3d.Anchor()
Anchor818.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor818.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD819 = x3d.LOD()
LOD819.setForceTransitions(True)
LOD819.setRange([0.04])
WorldInfo820 = x3d.WorldInfo()
WorldInfo820.setInfo(["hide diamond when close"])

LOD819.addChildren(WorldInfo820)
Shape821 = x3d.Shape()
Shape821.setDEF("HAnimSiteViewpointShape")
IndexedFaceSet822 = x3d.IndexedFaceSet()
IndexedFaceSet822.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet822.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet822.setCreaseAngle(0.5)
Coordinate823 = x3d.Coordinate()
Coordinate823.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet822.setCoord(Coordinate823)

Shape821.setGeometry(IndexedFaceSet822)
Appearance824 = x3d.Appearance()
Material825 = x3d.Material()
Material825.setDiffuseColor([1,1,0])
Material825.setTransparency(0.3)

Appearance824.setMaterial(Material825)

Shape821.setAppearance(Appearance824)

LOD819.addChildren(Shape821)

Anchor818.addChildren(LOD819)

HAnimSite814.addChildren(Anchor818)

HAnimSegment806.addChildren(HAnimSite814)

HAnimJoint805.addChildren(HAnimSegment806)

HAnimJoint702.addChildren(HAnimJoint805)
HAnimJoint826 = x3d.HAnimJoint()
HAnimJoint826.setName("l_eyelid_joint")
HAnimJoint826.setDEF("hanim_l_eyelid_joint")
HAnimJoint826.setCenter([0.0336,1.6332,0.0502])
HAnimSegment827 = x3d.HAnimSegment()
HAnimSegment827.setName("l_eyelid")
HAnimSegment827.setDEF("hanim_l_eyelid")
#Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor828 = x3d.TouchSensor()
TouchSensor828.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment827.addChildren(TouchSensor828)
Transform829 = x3d.Transform()
Transform829.setTranslation([0.0336,1.6332,0.0502])
Shape830 = x3d.Shape()
Shape830.setUSE("HAnimJointShape")

Transform829.addChildren(Shape830)

HAnimSegment827.addChildren(Transform829)

HAnimJoint826.addChildren(HAnimSegment827)

HAnimJoint702.addChildren(HAnimJoint826)
HAnimJoint831 = x3d.HAnimJoint()
HAnimJoint831.setName("l_eyebrow_joint")
HAnimJoint831.setDEF("hanim_l_eyebrow_joint")
HAnimJoint831.setCenter([0.0336,1.635,0.0506])
HAnimSegment832 = x3d.HAnimSegment()
HAnimSegment832.setName("l_eyebrow")
HAnimSegment832.setDEF("hanim_l_eyebrow")
#Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor833 = x3d.TouchSensor()
TouchSensor833.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment832.addChildren(TouchSensor833)
Transform834 = x3d.Transform()
Transform834.setTranslation([0.0336,1.635,0.0506])
Shape835 = x3d.Shape()
Shape835.setUSE("HAnimJointShape")

Transform834.addChildren(Shape835)

HAnimSegment832.addChildren(Transform834)

HAnimJoint831.addChildren(HAnimSegment832)

HAnimJoint702.addChildren(HAnimJoint831)
HAnimJoint836 = x3d.HAnimJoint()
HAnimJoint836.setName("r_eyeball_joint")
HAnimJoint836.setDEF("hanim_r_eyeball_joint")
HAnimJoint836.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment837 = x3d.HAnimSegment()
HAnimSegment837.setName("r_eyeball")
HAnimSegment837.setDEF("hanim_r_eyeball")
#Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor838 = x3d.TouchSensor()
TouchSensor838.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment837.addChildren(TouchSensor838)
Transform839 = x3d.Transform()
Transform839.setTranslation([-0.0336,1.6332,0.0502])
Shape840 = x3d.Shape()
Shape840.setUSE("HAnimJointShape")

Transform839.addChildren(Shape840)

HAnimSegment837.addChildren(Transform839)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape841 = x3d.Shape()
LineSet842 = x3d.LineSet()
LineSet842.setVertexCount([2])
Coordinate843 = x3d.Coordinate()
Coordinate843.setPoint([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])

LineSet842.setCoord(Coordinate843)
ColorRGBA844 = x3d.ColorRGBA()
ColorRGBA844.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet842.setColor(ColorRGBA844)

Shape841.setGeometry(LineSet842)

HAnimSegment837.addChildren(Shape841)
HAnimSite845 = x3d.HAnimSite()
HAnimSite845.setName("r_eyeball_site_view_pt")
HAnimSite845.setDEF("hanim_r_eyeball_site_view")
HAnimSite845.setTranslation([-0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor846 = x3d.TouchSensor()
TouchSensor846.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite845.addChildren(TouchSensor846)
Shape847 = x3d.Shape()
Shape847.setUSE("HAnimSiteShape")

HAnimSite845.addChildren(Shape847)
Viewpoint848 = x3d.Viewpoint()
Viewpoint848.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint848.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint848.setOrientation([0,1,0,3.141593])
Viewpoint848.setPosition([0,0,0])

HAnimSite845.addChildren(Viewpoint848)
#HAnimSite/Viewpoint visualization shape
Anchor849 = x3d.Anchor()
Anchor849.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor849.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD850 = x3d.LOD()
LOD850.setForceTransitions(True)
LOD850.setRange([0.04])
WorldInfo851 = x3d.WorldInfo()
WorldInfo851.setInfo(["hide diamond when close"])

LOD850.addChildren(WorldInfo851)
Shape852 = x3d.Shape()
Shape852.setUSE("HAnimSiteViewpointShape")

LOD850.addChildren(Shape852)

Anchor849.addChildren(LOD850)

HAnimSite845.addChildren(Anchor849)

HAnimSegment837.addChildren(HAnimSite845)

HAnimJoint836.addChildren(HAnimSegment837)

HAnimJoint702.addChildren(HAnimJoint836)
HAnimJoint853 = x3d.HAnimJoint()
HAnimJoint853.setName("r_eyelid_joint")
HAnimJoint853.setDEF("hanim_r_eyelid_joint")
HAnimJoint853.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment854 = x3d.HAnimSegment()
HAnimSegment854.setName("r_eyelid")
HAnimSegment854.setDEF("hanim_r_eyelid")
#Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor855 = x3d.TouchSensor()
TouchSensor855.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment854.addChildren(TouchSensor855)
Transform856 = x3d.Transform()
Transform856.setTranslation([-0.0336,1.6332,0.0502])
Shape857 = x3d.Shape()
Shape857.setUSE("HAnimJointShape")

Transform856.addChildren(Shape857)

HAnimSegment854.addChildren(Transform856)

HAnimJoint853.addChildren(HAnimSegment854)

HAnimJoint702.addChildren(HAnimJoint853)
HAnimJoint858 = x3d.HAnimJoint()
HAnimJoint858.setName("r_eyebrow_joint")
HAnimJoint858.setDEF("hanim_r_eyebrow_joint")
HAnimJoint858.setCenter([-0.0336,1.635,0.0506])
HAnimSegment859 = x3d.HAnimSegment()
HAnimSegment859.setName("r_eyebrow")
HAnimSegment859.setDEF("hanim_r_eyebrow")
#Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor860 = x3d.TouchSensor()
TouchSensor860.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment859.addChildren(TouchSensor860)
Transform861 = x3d.Transform()
Transform861.setTranslation([-0.0336,1.635,0.0506])
Shape862 = x3d.Shape()
Shape862.setUSE("HAnimJointShape")

Transform861.addChildren(Shape862)

HAnimSegment859.addChildren(Transform861)

HAnimJoint858.addChildren(HAnimSegment859)

HAnimJoint702.addChildren(HAnimJoint858)
HAnimJoint863 = x3d.HAnimJoint()
HAnimJoint863.setName("temporomandibular")
HAnimJoint863.setDEF("hanim_temporomandibular")
HAnimJoint863.setCenter([0,1.63,0.015])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment864 = x3d.HAnimSegment()
HAnimSegment864.setName("jaw")
HAnimSegment864.setDEF("hanim_jaw")
#Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment864.addChildren(TouchSensor865)
Transform866 = x3d.Transform()
Transform866.setTranslation([0,1.63,0.015])
Shape867 = x3d.Shape()
Shape867.setUSE("HAnimJointShape")

Transform866.addChildren(Shape867)

HAnimSegment864.addChildren(Transform866)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
Shape868 = x3d.Shape()
LineSet869 = x3d.LineSet()
LineSet869.setVertexCount([2])
Coordinate870 = x3d.Coordinate()
Coordinate870.setPoint([0,1.63,0.015,0.045,1.63,0])

LineSet869.setCoord(Coordinate870)
ColorRGBA871 = x3d.ColorRGBA()
ColorRGBA871.setUSE("HAnimSiteLineColorRGBA")

LineSet869.setColor(ColorRGBA871)

Shape868.setGeometry(LineSet869)

HAnimSegment864.addChildren(Shape868)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
Shape872 = x3d.Shape()
LineSet873 = x3d.LineSet()
LineSet873.setVertexCount([2])
Coordinate874 = x3d.Coordinate()
Coordinate874.setPoint([0,1.63,0.015,-0.045,1.63,0])

LineSet873.setCoord(Coordinate874)
ColorRGBA875 = x3d.ColorRGBA()
ColorRGBA875.setUSE("HAnimSiteLineColorRGBA")

LineSet873.setColor(ColorRGBA875)

Shape872.setGeometry(LineSet873)

HAnimSegment864.addChildren(Shape872)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.setName("temporomandibular_l_site_pt_pt")
HAnimSite876.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite876.setTranslation([0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.setDescription("HAnimSite temporomandibular_l_site_pt")

HAnimSite876.addChildren(TouchSensor877)
Shape878 = x3d.Shape()
Shape878.setUSE("HAnimSiteShape")

HAnimSite876.addChildren(Shape878)

HAnimSegment864.addChildren(HAnimSite876)
HAnimSite879 = x3d.HAnimSite()
HAnimSite879.setName("temporomandibular_r_site_pt_pt")
HAnimSite879.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite879.setTranslation([-0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor880 = x3d.TouchSensor()
TouchSensor880.setDescription("HAnimSite temporomandibular_r_site_pt")

HAnimSite879.addChildren(TouchSensor880)
Shape881 = x3d.Shape()
Shape881.setUSE("HAnimSiteShape")

HAnimSite879.addChildren(Shape881)

HAnimSegment864.addChildren(HAnimSite879)

HAnimJoint863.addChildren(HAnimSegment864)

HAnimJoint702.addChildren(HAnimJoint863)

HAnimJoint693.addChildren(HAnimJoint702)

HAnimJoint684.addChildren(HAnimJoint693)

HAnimJoint675.addChildren(HAnimJoint684)

HAnimJoint666.addChildren(HAnimJoint675)

HAnimJoint657.addChildren(HAnimJoint666)

HAnimJoint648.addChildren(HAnimJoint657)

HAnimJoint625.addChildren(HAnimJoint648)

HAnimJoint594.addChildren(HAnimJoint625)
HAnimJoint882 = x3d.HAnimJoint()
HAnimJoint882.setName("l_sternoclavicular")
HAnimJoint882.setDEF("hanim_l_sternoclavicular")
HAnimJoint882.setCenter([0.082,1.4488,-0.0353])
HAnimSegment883 = x3d.HAnimSegment()
HAnimSegment883.setName("l_clavicle")
HAnimSegment883.setDEF("hanim_l_clavicle")
#Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment883.addChildren(TouchSensor884)
Transform885 = x3d.Transform()
Transform885.setTranslation([0.082,1.4488,-0.0353])
Shape886 = x3d.Shape()
Shape886.setUSE("HAnimJointShape")

Transform885.addChildren(Shape886)

HAnimSegment883.addChildren(Transform885)
#HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
Shape887 = x3d.Shape()
LineSet888 = x3d.LineSet()
LineSet888.setVertexCount([2])
Coordinate889 = x3d.Coordinate()
Coordinate889.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet888.setCoord(Coordinate889)
ColorRGBA890 = x3d.ColorRGBA()
ColorRGBA890.setUSE("HAnimSegmentLineColorRGBA")

LineSet888.setColor(ColorRGBA890)

Shape887.setGeometry(LineSet888)

HAnimSegment883.addChildren(Shape887)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
Shape891 = x3d.Shape()
LineSet892 = x3d.LineSet()
LineSet892.setVertexCount([2])
Coordinate893 = x3d.Coordinate()
Coordinate893.setPoint([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])

LineSet892.setCoord(Coordinate893)
ColorRGBA894 = x3d.ColorRGBA()
ColorRGBA894.setUSE("HAnimSiteLineColorRGBA")

LineSet892.setColor(ColorRGBA894)

Shape891.setGeometry(LineSet892)

HAnimSegment883.addChildren(Shape891)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
Shape895 = x3d.Shape()
LineSet896 = x3d.LineSet()
LineSet896.setVertexCount([2])
Coordinate897 = x3d.Coordinate()
Coordinate897.setPoint([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])

LineSet896.setCoord(Coordinate897)
ColorRGBA898 = x3d.ColorRGBA()
ColorRGBA898.setUSE("HAnimSiteLineColorRGBA")

LineSet896.setColor(ColorRGBA898)

Shape895.setGeometry(LineSet896)

HAnimSegment883.addChildren(Shape895)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
Shape899 = x3d.Shape()
LineSet900 = x3d.LineSet()
LineSet900.setVertexCount([2])
Coordinate901 = x3d.Coordinate()
Coordinate901.setPoint([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])

LineSet900.setCoord(Coordinate901)
ColorRGBA902 = x3d.ColorRGBA()
ColorRGBA902.setUSE("HAnimSiteLineColorRGBA")

LineSet900.setColor(ColorRGBA902)

Shape899.setGeometry(LineSet900)

HAnimSegment883.addChildren(Shape899)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
Shape903 = x3d.Shape()
LineSet904 = x3d.LineSet()
LineSet904.setVertexCount([2])
Coordinate905 = x3d.Coordinate()
Coordinate905.setPoint([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])

LineSet904.setCoord(Coordinate905)
ColorRGBA906 = x3d.ColorRGBA()
ColorRGBA906.setUSE("HAnimSiteLineColorRGBA")

LineSet904.setColor(ColorRGBA906)

Shape903.setGeometry(LineSet904)

HAnimSegment883.addChildren(Shape903)
HAnimSite907 = x3d.HAnimSite()
HAnimSite907.setName("l_clavicale_pt_pt")
HAnimSite907.setDEF("hanim_l_clavicale_pt")
HAnimSite907.setTranslation([0.0271,1.4943,0.0394])
#HAnimSite visualization shape
TouchSensor908 = x3d.TouchSensor()
TouchSensor908.setDescription("HAnimSite l_clavicale_pt")

HAnimSite907.addChildren(TouchSensor908)
Shape909 = x3d.Shape()
Shape909.setUSE("HAnimSiteShape")

HAnimSite907.addChildren(Shape909)

HAnimSegment883.addChildren(HAnimSite907)
HAnimSite910 = x3d.HAnimSite()
HAnimSite910.setName("l_acromion_pt_pt")
HAnimSite910.setDEF("hanim_l_acromion_pt")
HAnimSite910.setTranslation([0.2032,1.476,-0.049])
#HAnimSite visualization shape
TouchSensor911 = x3d.TouchSensor()
TouchSensor911.setDescription("HAnimSite l_acromion_pt")

HAnimSite910.addChildren(TouchSensor911)
Shape912 = x3d.Shape()
Shape912.setUSE("HAnimSiteShape")

HAnimSite910.addChildren(Shape912)

HAnimSegment883.addChildren(HAnimSite910)
HAnimSite913 = x3d.HAnimSite()
HAnimSite913.setName("l_axilla_ant_pt_pt")
HAnimSite913.setDEF("hanim_l_axilla_ant_pt")
HAnimSite913.setTranslation([0.1777,1.4065,-0.0075])
#HAnimSite visualization shape
TouchSensor914 = x3d.TouchSensor()
TouchSensor914.setDescription("HAnimSite l_axilla_ant_pt")

HAnimSite913.addChildren(TouchSensor914)
Shape915 = x3d.Shape()
Shape915.setUSE("HAnimSiteShape")

HAnimSite913.addChildren(Shape915)

HAnimSegment883.addChildren(HAnimSite913)
HAnimSite916 = x3d.HAnimSite()
HAnimSite916.setName("l_axilla_post_pt_pt")
HAnimSite916.setDEF("hanim_l_axilla_post_pt")
HAnimSite916.setTranslation([0.1706,1.4072,-0.0875])
#HAnimSite visualization shape
TouchSensor917 = x3d.TouchSensor()
TouchSensor917.setDescription("HAnimSite l_axilla_post_pt")

HAnimSite916.addChildren(TouchSensor917)
Shape918 = x3d.Shape()
Shape918.setUSE("HAnimSiteShape")

HAnimSite916.addChildren(Shape918)

HAnimSegment883.addChildren(HAnimSite916)

HAnimJoint882.addChildren(HAnimSegment883)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setName("l_acromioclavicular")
HAnimJoint919.setDEF("hanim_l_acromioclavicular")
HAnimJoint919.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment920 = x3d.HAnimSegment()
HAnimSegment920.setName("l_scapula")
HAnimSegment920.setDEF("hanim_l_scapula")
#Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
TouchSensor921 = x3d.TouchSensor()
TouchSensor921.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment920.addChildren(TouchSensor921)
Transform922 = x3d.Transform()
Transform922.setTranslation([0.0962,1.4269,-0.0424])
Shape923 = x3d.Shape()
Shape923.setUSE("HAnimJointShape")

Transform922.addChildren(Shape923)

HAnimSegment920.addChildren(Transform922)
#HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
Shape924 = x3d.Shape()
LineSet925 = x3d.LineSet()
LineSet925.setVertexCount([2])
Coordinate926 = x3d.Coordinate()
Coordinate926.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet925.setCoord(Coordinate926)
ColorRGBA927 = x3d.ColorRGBA()
ColorRGBA927.setUSE("HAnimSegmentLineColorRGBA")

LineSet925.setColor(ColorRGBA927)

Shape924.setGeometry(LineSet925)

HAnimSegment920.addChildren(Shape924)

HAnimJoint919.addChildren(HAnimSegment920)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setName("l_shoulder")
HAnimJoint928.setDEF("hanim_l_shoulder")
HAnimJoint928.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment929 = x3d.HAnimSegment()
HAnimSegment929.setName("l_upperarm")
HAnimSegment929.setDEF("hanim_l_upperarm")
#Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor930 = x3d.TouchSensor()
TouchSensor930.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment929.addChildren(TouchSensor930)
Transform931 = x3d.Transform()
Transform931.setTranslation([0.2029,1.4376,-0.0387])
Shape932 = x3d.Shape()
Shape932.setUSE("HAnimJointShape")

Transform931.addChildren(Shape932)

HAnimSegment929.addChildren(Transform931)
#HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
Shape933 = x3d.Shape()
LineSet934 = x3d.LineSet()
LineSet934.setVertexCount([2])
Coordinate935 = x3d.Coordinate()
Coordinate935.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet934.setCoord(Coordinate935)
ColorRGBA936 = x3d.ColorRGBA()
ColorRGBA936.setUSE("HAnimSegmentLineColorRGBA")

LineSet934.setColor(ColorRGBA936)

Shape933.setGeometry(LineSet934)

HAnimSegment929.addChildren(Shape933)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
Shape937 = x3d.Shape()
LineSet938 = x3d.LineSet()
LineSet938.setVertexCount([2])
Coordinate939 = x3d.Coordinate()
Coordinate939.setPoint([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])

LineSet938.setCoord(Coordinate939)
ColorRGBA940 = x3d.ColorRGBA()
ColorRGBA940.setUSE("HAnimSiteLineColorRGBA")

LineSet938.setColor(ColorRGBA940)

Shape937.setGeometry(LineSet938)

HAnimSegment929.addChildren(Shape937)
HAnimSite941 = x3d.HAnimSite()
HAnimSite941.setName("l_humeral_lateral_epicn_pt_pt")
HAnimSite941.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite941.setTranslation([0.228,1.1482,-0.11])
#HAnimSite visualization shape
TouchSensor942 = x3d.TouchSensor()
TouchSensor942.setDescription("HAnimSite l_humeral_lateral_epicn_pt")

HAnimSite941.addChildren(TouchSensor942)
Shape943 = x3d.Shape()
Shape943.setUSE("HAnimSiteShape")

HAnimSite941.addChildren(Shape943)

HAnimSegment929.addChildren(HAnimSite941)

HAnimJoint928.addChildren(HAnimSegment929)
HAnimJoint944 = x3d.HAnimJoint()
HAnimJoint944.setName("l_elbow")
HAnimJoint944.setDEF("hanim_l_elbow")
HAnimJoint944.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment945 = x3d.HAnimSegment()
HAnimSegment945.setName("l_forearm")
HAnimSegment945.setDEF("hanim_l_forearm")
#Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
TouchSensor946 = x3d.TouchSensor()
TouchSensor946.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment945.addChildren(TouchSensor946)
Transform947 = x3d.Transform()
Transform947.setTranslation([0.2014,1.1357,-0.0682])
Shape948 = x3d.Shape()
Shape948.setUSE("HAnimJointShape")

Transform947.addChildren(Shape948)

HAnimSegment945.addChildren(Transform947)
#HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
Shape949 = x3d.Shape()
LineSet950 = x3d.LineSet()
LineSet950.setVertexCount([2])
Coordinate951 = x3d.Coordinate()
Coordinate951.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet950.setCoord(Coordinate951)
ColorRGBA952 = x3d.ColorRGBA()
ColorRGBA952.setUSE("HAnimSegmentLineColorRGBA")

LineSet950.setColor(ColorRGBA952)

Shape949.setGeometry(LineSet950)

HAnimSegment945.addChildren(Shape949)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
Shape953 = x3d.Shape()
LineSet954 = x3d.LineSet()
LineSet954.setVertexCount([2])
Coordinate955 = x3d.Coordinate()
Coordinate955.setPoint([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])

LineSet954.setCoord(Coordinate955)
ColorRGBA956 = x3d.ColorRGBA()
ColorRGBA956.setUSE("HAnimSiteLineColorRGBA")

LineSet954.setColor(ColorRGBA956)

Shape953.setGeometry(LineSet954)

HAnimSegment945.addChildren(Shape953)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.setVertexCount([2])
Coordinate959 = x3d.Coordinate()
Coordinate959.setPoint([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])

LineSet958.setCoord(Coordinate959)
ColorRGBA960 = x3d.ColorRGBA()
ColorRGBA960.setUSE("HAnimSiteLineColorRGBA")

LineSet958.setColor(ColorRGBA960)

Shape957.setGeometry(LineSet958)

HAnimSegment945.addChildren(Shape957)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
Shape961 = x3d.Shape()
LineSet962 = x3d.LineSet()
LineSet962.setVertexCount([2])
Coordinate963 = x3d.Coordinate()
Coordinate963.setPoint([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])

LineSet962.setCoord(Coordinate963)
ColorRGBA964 = x3d.ColorRGBA()
ColorRGBA964.setUSE("HAnimSiteLineColorRGBA")

LineSet962.setColor(ColorRGBA964)

Shape961.setGeometry(LineSet962)

HAnimSegment945.addChildren(Shape961)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.setVertexCount([2])
Coordinate967 = x3d.Coordinate()
Coordinate967.setPoint([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])

LineSet966.setCoord(Coordinate967)
ColorRGBA968 = x3d.ColorRGBA()
ColorRGBA968.setUSE("HAnimSiteLineColorRGBA")

LineSet966.setColor(ColorRGBA968)

Shape965.setGeometry(LineSet966)

HAnimSegment945.addChildren(Shape965)
HAnimSite969 = x3d.HAnimSite()
HAnimSite969.setName("l_radial_styloid_pt_pt")
HAnimSite969.setDEF("hanim_l_radial_styloid_pt")
HAnimSite969.setTranslation([0.1901,0.8645,-0.0415])
#HAnimSite visualization shape
TouchSensor970 = x3d.TouchSensor()
TouchSensor970.setDescription("HAnimSite l_radial_styloid_pt")

HAnimSite969.addChildren(TouchSensor970)
Shape971 = x3d.Shape()
Shape971.setUSE("HAnimSiteShape")

HAnimSite969.addChildren(Shape971)

HAnimSegment945.addChildren(HAnimSite969)
HAnimSite972 = x3d.HAnimSite()
HAnimSite972.setName("l_olecranon_pt_pt")
HAnimSite972.setDEF("hanim_l_olecranon_pt")
HAnimSite972.setTranslation([0.1962,1.1375,-0.1123])
#HAnimSite visualization shape
TouchSensor973 = x3d.TouchSensor()
TouchSensor973.setDescription("HAnimSite l_olecranon_pt")

HAnimSite972.addChildren(TouchSensor973)
Shape974 = x3d.Shape()
Shape974.setUSE("HAnimSiteShape")

HAnimSite972.addChildren(Shape974)

HAnimSegment945.addChildren(HAnimSite972)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.setName("l_humeral_medial_epicn_pt_pt")
HAnimSite975.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite975.setTranslation([0.1735,1.1272,-0.1113])
#HAnimSite visualization shape
TouchSensor976 = x3d.TouchSensor()
TouchSensor976.setDescription("HAnimSite l_humeral_medial_epicn_pt")

HAnimSite975.addChildren(TouchSensor976)
Shape977 = x3d.Shape()
Shape977.setUSE("HAnimSiteShape")

HAnimSite975.addChildren(Shape977)

HAnimSegment945.addChildren(HAnimSite975)
HAnimSite978 = x3d.HAnimSite()
HAnimSite978.setName("l_radiale_pt_pt")
HAnimSite978.setDEF("hanim_l_radiale_pt")
HAnimSite978.setTranslation([0.2182,1.1212,-0.1167])
#HAnimSite visualization shape
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.setDescription("HAnimSite l_radiale_pt")

HAnimSite978.addChildren(TouchSensor979)
Shape980 = x3d.Shape()
Shape980.setUSE("HAnimSiteShape")

HAnimSite978.addChildren(Shape980)

HAnimSegment945.addChildren(HAnimSite978)

HAnimJoint944.addChildren(HAnimSegment945)
HAnimJoint981 = x3d.HAnimJoint()
HAnimJoint981.setName("l_radiocarpal")
HAnimJoint981.setDEF("hanim_l_radiocarpal")
HAnimJoint981.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.setName("l_carpal")
HAnimSegment982.setDEF("hanim_l_carpal")
#Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal")

HAnimSegment982.addChildren(TouchSensor983)
Transform984 = x3d.Transform()
Transform984.setTranslation([0.1984,0.8663,-0.0583])
Shape985 = x3d.Shape()
Shape985.setUSE("HAnimJointShape")

Transform984.addChildren(Shape985)

HAnimSegment982.addChildren(Transform984)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
Shape986 = x3d.Shape()
LineSet987 = x3d.LineSet()
LineSet987.setVertexCount([2])
Coordinate988 = x3d.Coordinate()
Coordinate988.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet987.setCoord(Coordinate988)
ColorRGBA989 = x3d.ColorRGBA()
ColorRGBA989.setUSE("HAnimSegmentLineColorRGBA")

LineSet987.setColor(ColorRGBA989)

Shape986.setGeometry(LineSet987)

HAnimSegment982.addChildren(Shape986)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
Shape990 = x3d.Shape()
LineSet991 = x3d.LineSet()
LineSet991.setVertexCount([2])
Coordinate992 = x3d.Coordinate()
Coordinate992.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet991.setCoord(Coordinate992)
ColorRGBA993 = x3d.ColorRGBA()
ColorRGBA993.setUSE("HAnimSegmentLineColorRGBA")

LineSet991.setColor(ColorRGBA993)

Shape990.setGeometry(LineSet991)

HAnimSegment982.addChildren(Shape990)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
Shape994 = x3d.Shape()
LineSet995 = x3d.LineSet()
LineSet995.setVertexCount([2])
Coordinate996 = x3d.Coordinate()
Coordinate996.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet995.setCoord(Coordinate996)
ColorRGBA997 = x3d.ColorRGBA()
ColorRGBA997.setUSE("HAnimSegmentLineColorRGBA")

LineSet995.setColor(ColorRGBA997)

Shape994.setGeometry(LineSet995)

HAnimSegment982.addChildren(Shape994)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
Shape998 = x3d.Shape()
LineSet999 = x3d.LineSet()
LineSet999.setVertexCount([2])
Coordinate1000 = x3d.Coordinate()
Coordinate1000.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet999.setCoord(Coordinate1000)
ColorRGBA1001 = x3d.ColorRGBA()
ColorRGBA1001.setUSE("HAnimSegmentLineColorRGBA")

LineSet999.setColor(ColorRGBA1001)

Shape998.setGeometry(LineSet999)

HAnimSegment982.addChildren(Shape998)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.setVertexCount([2])
Coordinate1004 = x3d.Coordinate()
Coordinate1004.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1003.setCoord(Coordinate1004)
ColorRGBA1005 = x3d.ColorRGBA()
ColorRGBA1005.setUSE("HAnimSegmentLineColorRGBA")

LineSet1003.setColor(ColorRGBA1005)

Shape1002.setGeometry(LineSet1003)

HAnimSegment982.addChildren(Shape1002)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.setVertexCount([2])
Coordinate1008 = x3d.Coordinate()
Coordinate1008.setPoint([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])

LineSet1007.setCoord(Coordinate1008)
ColorRGBA1009 = x3d.ColorRGBA()
ColorRGBA1009.setUSE("HAnimSiteLineColorRGBA")

LineSet1007.setColor(ColorRGBA1009)

Shape1006.setGeometry(LineSet1007)

HAnimSegment982.addChildren(Shape1006)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.setVertexCount([2])
Coordinate1012 = x3d.Coordinate()
Coordinate1012.setPoint([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])

LineSet1011.setCoord(Coordinate1012)
ColorRGBA1013 = x3d.ColorRGBA()
ColorRGBA1013.setUSE("HAnimSiteLineColorRGBA")

LineSet1011.setColor(ColorRGBA1013)

Shape1010.setGeometry(LineSet1011)

HAnimSegment982.addChildren(Shape1010)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.setVertexCount([2])
Coordinate1016 = x3d.Coordinate()
Coordinate1016.setPoint([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])

LineSet1015.setCoord(Coordinate1016)
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.setUSE("HAnimSiteLineColorRGBA")

LineSet1015.setColor(ColorRGBA1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment982.addChildren(Shape1014)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.setVertexCount([2])
Coordinate1020 = x3d.Coordinate()
Coordinate1020.setPoint([0.1984,0.8663,-0.0583,0.3,0.75,0.45])

LineSet1019.setCoord(Coordinate1020)
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1019.setColor(ColorRGBA1021)

Shape1018.setGeometry(LineSet1019)

HAnimSegment982.addChildren(Shape1018)
HAnimSite1022 = x3d.HAnimSite()
HAnimSite1022.setName("l_metacarpal_pha2_pt_pt")
HAnimSite1022.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite1022.setTranslation([0.2009,0.8139,-0.0237])
#HAnimSite visualization shape
TouchSensor1023 = x3d.TouchSensor()
TouchSensor1023.setDescription("HAnimSite l_metacarpal_pha2_pt")

HAnimSite1022.addChildren(TouchSensor1023)
Shape1024 = x3d.Shape()
Shape1024.setUSE("HAnimSiteShape")

HAnimSite1022.addChildren(Shape1024)

HAnimSegment982.addChildren(HAnimSite1022)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.setName("l_ulnar_styloid_pt_pt")
HAnimSite1025.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1025.setTranslation([0.2142,0.8529,-0.0648])
#HAnimSite visualization shape
TouchSensor1026 = x3d.TouchSensor()
TouchSensor1026.setDescription("HAnimSite l_ulnar_styloid_pt")

HAnimSite1025.addChildren(TouchSensor1026)
Shape1027 = x3d.Shape()
Shape1027.setUSE("HAnimSiteShape")

HAnimSite1025.addChildren(Shape1027)

HAnimSegment982.addChildren(HAnimSite1025)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.setName("l_metacarpal_pha5_pt_pt")
HAnimSite1028.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite1028.setTranslation([0.1929,0.786,-0.1122])
#HAnimSite visualization shape
TouchSensor1029 = x3d.TouchSensor()
TouchSensor1029.setDescription("HAnimSite l_metacarpal_pha5_pt")

HAnimSite1028.addChildren(TouchSensor1029)
Shape1030 = x3d.Shape()
Shape1030.setUSE("HAnimSiteShape")

HAnimSite1028.addChildren(Shape1030)

HAnimSegment982.addChildren(HAnimSite1028)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.setName("l_hand_front_view_pt")
HAnimSite1031.setDEF("hanim_l_hand_front_view")
HAnimSite1031.setTranslation([0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1032 = x3d.TouchSensor()
TouchSensor1032.setDescription("HAnimSite l_hand_front_view")

HAnimSite1031.addChildren(TouchSensor1032)
Shape1033 = x3d.Shape()
Shape1033.setUSE("HAnimSiteShape")

HAnimSite1031.addChildren(Shape1033)
Viewpoint1034 = x3d.Viewpoint()
Viewpoint1034.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1034.setCenterOfRotation([0,0.7,0])
Viewpoint1034.setDescription("left hand front")
Viewpoint1034.setPosition([0,0,0])

HAnimSite1031.addChildren(Viewpoint1034)
#HAnimSite/Viewpoint visualization shape
Anchor1035 = x3d.Anchor()
Anchor1035.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1035.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1036 = x3d.LOD()
LOD1036.setForceTransitions(True)
LOD1036.setRange([0.04])
WorldInfo1037 = x3d.WorldInfo()
WorldInfo1037.setInfo(["hide diamond when close"])

LOD1036.addChildren(WorldInfo1037)
Shape1038 = x3d.Shape()
Shape1038.setUSE("HAnimSiteViewpointShape")

LOD1036.addChildren(Shape1038)

Anchor1035.addChildren(LOD1036)

HAnimSite1031.addChildren(Anchor1035)

HAnimSegment982.addChildren(HAnimSite1031)

HAnimJoint981.addChildren(HAnimSegment982)
HAnimJoint1039 = x3d.HAnimJoint()
HAnimJoint1039.setName("l_thumb1")
HAnimJoint1039.setDEF("hanim_l_thumb1")
HAnimJoint1039.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment1040 = x3d.HAnimSegment()
HAnimSegment1040.setName("l_metacarpal_1")
HAnimSegment1040.setDEF("hanim_l_metacarpal_1")
#Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
TouchSensor1041 = x3d.TouchSensor()
TouchSensor1041.setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1")

HAnimSegment1040.addChildren(TouchSensor1041)
Transform1042 = x3d.Transform()
Transform1042.setTranslation([0.1924,0.8472,-0.0534])
Shape1043 = x3d.Shape()
Shape1043.setUSE("HAnimJointShape")

Transform1042.addChildren(Shape1043)

HAnimSegment1040.addChildren(Transform1042)
#HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
Shape1044 = x3d.Shape()
LineSet1045 = x3d.LineSet()
LineSet1045.setVertexCount([2])
Coordinate1046 = x3d.Coordinate()
Coordinate1046.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1045.setCoord(Coordinate1046)
ColorRGBA1047 = x3d.ColorRGBA()
ColorRGBA1047.setUSE("HAnimSegmentLineColorRGBA")

LineSet1045.setColor(ColorRGBA1047)

Shape1044.setGeometry(LineSet1045)

HAnimSegment1040.addChildren(Shape1044)

HAnimJoint1039.addChildren(HAnimSegment1040)
HAnimJoint1048 = x3d.HAnimJoint()
HAnimJoint1048.setName("l_thumb2")
HAnimJoint1048.setDEF("hanim_l_thumb2")
HAnimJoint1048.setCenter([0.1951,0.8226,0.0246])
HAnimSegment1049 = x3d.HAnimSegment()
HAnimSegment1049.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1049.setDEF("hanim_l_carpal_proximal_phalanx_1")
#Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
TouchSensor1050 = x3d.TouchSensor()
TouchSensor1050.setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1")

HAnimSegment1049.addChildren(TouchSensor1050)
Transform1051 = x3d.Transform()
Transform1051.setTranslation([0.1951,0.8226,0.0246])
Shape1052 = x3d.Shape()
Shape1052.setUSE("HAnimJointShape")

Transform1051.addChildren(Shape1052)

HAnimSegment1049.addChildren(Transform1051)
#HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
Shape1053 = x3d.Shape()
LineSet1054 = x3d.LineSet()
LineSet1054.setVertexCount([2])
Coordinate1055 = x3d.Coordinate()
Coordinate1055.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1054.setCoord(Coordinate1055)
ColorRGBA1056 = x3d.ColorRGBA()
ColorRGBA1056.setUSE("HAnimSegmentLineColorRGBA")

LineSet1054.setColor(ColorRGBA1056)

Shape1053.setGeometry(LineSet1054)

HAnimSegment1049.addChildren(Shape1053)

HAnimJoint1048.addChildren(HAnimSegment1049)
HAnimJoint1057 = x3d.HAnimJoint()
HAnimJoint1057.setName("l_thumb3")
HAnimJoint1057.setDEF("hanim_l_thumb3")
HAnimJoint1057.setCenter([0.1955,0.8159,0.0464])
HAnimSegment1058 = x3d.HAnimSegment()
HAnimSegment1058.setName("l_carpal_distal_phalanx_1")
HAnimSegment1058.setDEF("hanim_l_carpal_distal_phalanx_1")
#Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
TouchSensor1059 = x3d.TouchSensor()
TouchSensor1059.setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1")

HAnimSegment1058.addChildren(TouchSensor1059)
Transform1060 = x3d.Transform()
Transform1060.setTranslation([0.1955,0.8159,0.0464])
Shape1061 = x3d.Shape()
Shape1061.setUSE("HAnimJointShape")

Transform1060.addChildren(Shape1061)

HAnimSegment1058.addChildren(Transform1060)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape1062 = x3d.Shape()
LineSet1063 = x3d.LineSet()
LineSet1063.setVertexCount([2])
Coordinate1064 = x3d.Coordinate()
Coordinate1064.setPoint([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])

LineSet1063.setCoord(Coordinate1064)
ColorRGBA1065 = x3d.ColorRGBA()
ColorRGBA1065.setUSE("HAnimSiteLineColorRGBA")

LineSet1063.setColor(ColorRGBA1065)

Shape1062.setGeometry(LineSet1063)

HAnimSegment1058.addChildren(Shape1062)
HAnimSite1066 = x3d.HAnimSite()
HAnimSite1066.setName("l_thumb_distal_tip_pt")
HAnimSite1066.setDEF("hanim_l_thumb_distal_tip")
HAnimSite1066.setTranslation([0.1982,0.8061,0.0759])
#HAnimSite visualization shape
TouchSensor1067 = x3d.TouchSensor()
TouchSensor1067.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1066.addChildren(TouchSensor1067)
Shape1068 = x3d.Shape()
Shape1068.setUSE("HAnimSiteShape")

HAnimSite1066.addChildren(Shape1068)

HAnimSegment1058.addChildren(HAnimSite1066)

HAnimJoint1057.addChildren(HAnimSegment1058)

HAnimJoint1048.addChildren(HAnimJoint1057)

HAnimJoint1039.addChildren(HAnimJoint1048)

HAnimJoint981.addChildren(HAnimJoint1039)
HAnimJoint1069 = x3d.HAnimJoint()
HAnimJoint1069.setName("l_index0")
HAnimJoint1069.setDEF("hanim_l_index0")
HAnimJoint1069.setCenter([0.1983,0.8024,-0.028])
HAnimSegment1070 = x3d.HAnimSegment()
HAnimSegment1070.setName("l_metacarpal_2")
HAnimSegment1070.setDEF("hanim_l_metacarpal_2")
#Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
TouchSensor1071 = x3d.TouchSensor()
TouchSensor1071.setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2")

HAnimSegment1070.addChildren(TouchSensor1071)
Transform1072 = x3d.Transform()
Transform1072.setTranslation([0.1983,0.8024,-0.028])
Shape1073 = x3d.Shape()
Shape1073.setUSE("HAnimJointShape")

Transform1072.addChildren(Shape1073)

HAnimSegment1070.addChildren(Transform1072)
#HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
Shape1074 = x3d.Shape()
LineSet1075 = x3d.LineSet()
LineSet1075.setVertexCount([2])
Coordinate1076 = x3d.Coordinate()
Coordinate1076.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1075.setCoord(Coordinate1076)
ColorRGBA1077 = x3d.ColorRGBA()
ColorRGBA1077.setUSE("HAnimSegmentLineColorRGBA")

LineSet1075.setColor(ColorRGBA1077)

Shape1074.setGeometry(LineSet1075)

HAnimSegment1070.addChildren(Shape1074)

HAnimJoint1069.addChildren(HAnimSegment1070)
HAnimJoint1078 = x3d.HAnimJoint()
HAnimJoint1078.setName("l_index1")
HAnimJoint1078.setDEF("hanim_l_index1")
HAnimJoint1078.setCenter([0.1983,0.7815,-0.028])
HAnimSegment1079 = x3d.HAnimSegment()
HAnimSegment1079.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1079.setDEF("hanim_l_carpal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
TouchSensor1080 = x3d.TouchSensor()
TouchSensor1080.setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2")

HAnimSegment1079.addChildren(TouchSensor1080)
Transform1081 = x3d.Transform()
Transform1081.setTranslation([0.1983,0.7815,-0.028])
Shape1082 = x3d.Shape()
Shape1082.setUSE("HAnimJointShape")

Transform1081.addChildren(Shape1082)

HAnimSegment1079.addChildren(Transform1081)
#HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
Shape1083 = x3d.Shape()
LineSet1084 = x3d.LineSet()
LineSet1084.setVertexCount([2])
Coordinate1085 = x3d.Coordinate()
Coordinate1085.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1084.setCoord(Coordinate1085)
ColorRGBA1086 = x3d.ColorRGBA()
ColorRGBA1086.setUSE("HAnimSegmentLineColorRGBA")

LineSet1084.setColor(ColorRGBA1086)

Shape1083.setGeometry(LineSet1084)

HAnimSegment1079.addChildren(Shape1083)

HAnimJoint1078.addChildren(HAnimSegment1079)
HAnimJoint1087 = x3d.HAnimJoint()
HAnimJoint1087.setName("l_index2")
HAnimJoint1087.setDEF("hanim_l_index2")
HAnimJoint1087.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment1088 = x3d.HAnimSegment()
HAnimSegment1088.setName("l_carpal_middle_phalanx_2")
HAnimSegment1088.setDEF("hanim_l_carpal_middle_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
TouchSensor1089 = x3d.TouchSensor()
TouchSensor1089.setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2")

HAnimSegment1088.addChildren(TouchSensor1089)
Transform1090 = x3d.Transform()
Transform1090.setTranslation([0.2017,0.7363,-0.0248])
Shape1091 = x3d.Shape()
Shape1091.setUSE("HAnimJointShape")

Transform1090.addChildren(Shape1091)

HAnimSegment1088.addChildren(Transform1090)
#HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.setVertexCount([2])
Coordinate1094 = x3d.Coordinate()
Coordinate1094.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1093.setCoord(Coordinate1094)
ColorRGBA1095 = x3d.ColorRGBA()
ColorRGBA1095.setUSE("HAnimSegmentLineColorRGBA")

LineSet1093.setColor(ColorRGBA1095)

Shape1092.setGeometry(LineSet1093)

HAnimSegment1088.addChildren(Shape1092)

HAnimJoint1087.addChildren(HAnimSegment1088)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.setName("l_index3")
HAnimJoint1096.setDEF("hanim_l_index3")
HAnimJoint1096.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment1097 = x3d.HAnimSegment()
HAnimSegment1097.setName("l_carpal_distal_phalanx_2")
HAnimSegment1097.setDEF("hanim_l_carpal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
TouchSensor1098 = x3d.TouchSensor()
TouchSensor1098.setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2")

HAnimSegment1097.addChildren(TouchSensor1098)
Transform1099 = x3d.Transform()
Transform1099.setTranslation([0.2028,0.7139,-0.0236])
Shape1100 = x3d.Shape()
Shape1100.setUSE("HAnimJointShape")

Transform1099.addChildren(Shape1100)

HAnimSegment1097.addChildren(Transform1099)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape1101 = x3d.Shape()
LineSet1102 = x3d.LineSet()
LineSet1102.setVertexCount([2])
Coordinate1103 = x3d.Coordinate()
Coordinate1103.setPoint([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])

LineSet1102.setCoord(Coordinate1103)
ColorRGBA1104 = x3d.ColorRGBA()
ColorRGBA1104.setUSE("HAnimSiteLineColorRGBA")

LineSet1102.setColor(ColorRGBA1104)

Shape1101.setGeometry(LineSet1102)

HAnimSegment1097.addChildren(Shape1101)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
Shape1105 = x3d.Shape()
LineSet1106 = x3d.LineSet()
LineSet1106.setVertexCount([2])
Coordinate1107 = x3d.Coordinate()
Coordinate1107.setPoint([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])

LineSet1106.setCoord(Coordinate1107)
ColorRGBA1108 = x3d.ColorRGBA()
ColorRGBA1108.setUSE("HAnimSiteLineColorRGBA")

LineSet1106.setColor(ColorRGBA1108)

Shape1105.setGeometry(LineSet1106)

HAnimSegment1097.addChildren(Shape1105)
HAnimSite1109 = x3d.HAnimSite()
HAnimSite1109.setName("l_index_distal_tip_pt")
HAnimSite1109.setDEF("hanim_l_index_distal_tip")
HAnimSite1109.setTranslation([0.2089,0.6858,-0.0245])
#HAnimSite visualization shape
TouchSensor1110 = x3d.TouchSensor()
TouchSensor1110.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1109.addChildren(TouchSensor1110)
Shape1111 = x3d.Shape()
Shape1111.setUSE("HAnimSiteShape")

HAnimSite1109.addChildren(Shape1111)

HAnimSegment1097.addChildren(HAnimSite1109)
HAnimSite1112 = x3d.HAnimSite()
HAnimSite1112.setName("l_dactylion_pt_pt")
HAnimSite1112.setDEF("hanim_l_dactylion_pt")
HAnimSite1112.setTranslation([0.2056,0.6743,-0.0482])
#HAnimSite visualization shape
TouchSensor1113 = x3d.TouchSensor()
TouchSensor1113.setDescription("HAnimSite l_dactylion_pt")

HAnimSite1112.addChildren(TouchSensor1113)
Shape1114 = x3d.Shape()
Shape1114.setUSE("HAnimSiteShape")

HAnimSite1112.addChildren(Shape1114)

HAnimSegment1097.addChildren(HAnimSite1112)

HAnimJoint1096.addChildren(HAnimSegment1097)

HAnimJoint1087.addChildren(HAnimJoint1096)

HAnimJoint1078.addChildren(HAnimJoint1087)

HAnimJoint1069.addChildren(HAnimJoint1078)

HAnimJoint981.addChildren(HAnimJoint1069)
HAnimJoint1115 = x3d.HAnimJoint()
HAnimJoint1115.setName("l_middle0")
HAnimJoint1115.setDEF("hanim_l_middle0")
HAnimJoint1115.setCenter([0.1987,0.8029,-0.053])
HAnimSegment1116 = x3d.HAnimSegment()
HAnimSegment1116.setName("l_metacarpal_3")
HAnimSegment1116.setDEF("hanim_l_metacarpal_3")
#Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
TouchSensor1117 = x3d.TouchSensor()
TouchSensor1117.setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3")

HAnimSegment1116.addChildren(TouchSensor1117)
Transform1118 = x3d.Transform()
Transform1118.setTranslation([0.1987,0.8029,-0.053])
Shape1119 = x3d.Shape()
Shape1119.setUSE("HAnimJointShape")

Transform1118.addChildren(Shape1119)

HAnimSegment1116.addChildren(Transform1118)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
Shape1120 = x3d.Shape()
LineSet1121 = x3d.LineSet()
LineSet1121.setVertexCount([2])
Coordinate1122 = x3d.Coordinate()
Coordinate1122.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1121.setCoord(Coordinate1122)
ColorRGBA1123 = x3d.ColorRGBA()
ColorRGBA1123.setUSE("HAnimSegmentLineColorRGBA")

LineSet1121.setColor(ColorRGBA1123)

Shape1120.setGeometry(LineSet1121)

HAnimSegment1116.addChildren(Shape1120)

HAnimJoint1115.addChildren(HAnimSegment1116)
HAnimJoint1124 = x3d.HAnimJoint()
HAnimJoint1124.setName("l_middle1")
HAnimJoint1124.setDEF("hanim_l_middle1")
HAnimJoint1124.setCenter([0.1987,0.7818,-0.053])
HAnimSegment1125 = x3d.HAnimSegment()
HAnimSegment1125.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1125.setDEF("hanim_l_carpal_proximal_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
TouchSensor1126 = x3d.TouchSensor()
TouchSensor1126.setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3")

HAnimSegment1125.addChildren(TouchSensor1126)
Transform1127 = x3d.Transform()
Transform1127.setTranslation([0.1987,0.7818,-0.053])
Shape1128 = x3d.Shape()
Shape1128.setUSE("HAnimJointShape")

Transform1127.addChildren(Shape1128)

HAnimSegment1125.addChildren(Transform1127)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.setVertexCount([2])
Coordinate1131 = x3d.Coordinate()
Coordinate1131.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1130.setCoord(Coordinate1131)
ColorRGBA1132 = x3d.ColorRGBA()
ColorRGBA1132.setUSE("HAnimSegmentLineColorRGBA")

LineSet1130.setColor(ColorRGBA1132)

Shape1129.setGeometry(LineSet1130)

HAnimSegment1125.addChildren(Shape1129)

HAnimJoint1124.addChildren(HAnimSegment1125)
HAnimJoint1133 = x3d.HAnimJoint()
HAnimJoint1133.setName("l_middle2")
HAnimJoint1133.setDEF("hanim_l_middle2")
HAnimJoint1133.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment1134 = x3d.HAnimSegment()
HAnimSegment1134.setName("l_carpal_middle_phalanx_3")
HAnimSegment1134.setDEF("hanim_l_carpal_middle_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
TouchSensor1135 = x3d.TouchSensor()
TouchSensor1135.setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3")

HAnimSegment1134.addChildren(TouchSensor1135)
Transform1136 = x3d.Transform()
Transform1136.setTranslation([0.2013,0.7273,-0.0503])
Shape1137 = x3d.Shape()
Shape1137.setUSE("HAnimJointShape")

Transform1136.addChildren(Shape1137)

HAnimSegment1134.addChildren(Transform1136)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
Shape1138 = x3d.Shape()
LineSet1139 = x3d.LineSet()
LineSet1139.setVertexCount([2])
Coordinate1140 = x3d.Coordinate()
Coordinate1140.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1139.setCoord(Coordinate1140)
ColorRGBA1141 = x3d.ColorRGBA()
ColorRGBA1141.setUSE("HAnimSegmentLineColorRGBA")

LineSet1139.setColor(ColorRGBA1141)

Shape1138.setGeometry(LineSet1139)

HAnimSegment1134.addChildren(Shape1138)

HAnimJoint1133.addChildren(HAnimSegment1134)
HAnimJoint1142 = x3d.HAnimJoint()
HAnimJoint1142.setName("l_middle3")
HAnimJoint1142.setDEF("hanim_l_middle3")
HAnimJoint1142.setCenter([0.2026,0.7011,-0.0494])
HAnimSegment1143 = x3d.HAnimSegment()
HAnimSegment1143.setName("l_carpal_distal_phalanx_3")
HAnimSegment1143.setDEF("hanim_l_carpal_distal_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
TouchSensor1144 = x3d.TouchSensor()
TouchSensor1144.setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3")

HAnimSegment1143.addChildren(TouchSensor1144)
Transform1145 = x3d.Transform()
Transform1145.setTranslation([0.2026,0.7011,-0.0494])
Shape1146 = x3d.Shape()
Shape1146.setUSE("HAnimJointShape")

Transform1145.addChildren(Shape1146)

HAnimSegment1143.addChildren(Transform1145)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape1147 = x3d.Shape()
LineSet1148 = x3d.LineSet()
LineSet1148.setVertexCount([2])
Coordinate1149 = x3d.Coordinate()
Coordinate1149.setPoint([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])

LineSet1148.setCoord(Coordinate1149)
ColorRGBA1150 = x3d.ColorRGBA()
ColorRGBA1150.setUSE("HAnimSiteLineColorRGBA")

LineSet1148.setColor(ColorRGBA1150)

Shape1147.setGeometry(LineSet1148)

HAnimSegment1143.addChildren(Shape1147)
HAnimSite1151 = x3d.HAnimSite()
HAnimSite1151.setName("l_middle_distal_tip_pt")
HAnimSite1151.setDEF("hanim_l_middle_distal_tip")
HAnimSite1151.setTranslation([0.208,0.6731,-0.0491])
#HAnimSite visualization shape
TouchSensor1152 = x3d.TouchSensor()
TouchSensor1152.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1151.addChildren(TouchSensor1152)
Shape1153 = x3d.Shape()
Shape1153.setUSE("HAnimSiteShape")

HAnimSite1151.addChildren(Shape1153)

HAnimSegment1143.addChildren(HAnimSite1151)

HAnimJoint1142.addChildren(HAnimSegment1143)

HAnimJoint1133.addChildren(HAnimJoint1142)

HAnimJoint1124.addChildren(HAnimJoint1133)

HAnimJoint1115.addChildren(HAnimJoint1124)

HAnimJoint981.addChildren(HAnimJoint1115)
HAnimJoint1154 = x3d.HAnimJoint()
HAnimJoint1154.setName("l_ring0")
HAnimJoint1154.setDEF("hanim_l_ring0")
HAnimJoint1154.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment1155 = x3d.HAnimSegment()
HAnimSegment1155.setName("l_metacarpal_4")
HAnimSegment1155.setDEF("hanim_l_metacarpal_4")
#Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
TouchSensor1156 = x3d.TouchSensor()
TouchSensor1156.setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4")

HAnimSegment1155.addChildren(TouchSensor1156)
Transform1157 = x3d.Transform()
Transform1157.setTranslation([0.1956,0.8019,-0.0794])
Shape1158 = x3d.Shape()
Shape1158.setUSE("HAnimJointShape")

Transform1157.addChildren(Shape1158)

HAnimSegment1155.addChildren(Transform1157)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
Shape1159 = x3d.Shape()
LineSet1160 = x3d.LineSet()
LineSet1160.setVertexCount([2])
Coordinate1161 = x3d.Coordinate()
Coordinate1161.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1160.setCoord(Coordinate1161)
ColorRGBA1162 = x3d.ColorRGBA()
ColorRGBA1162.setUSE("HAnimSegmentLineColorRGBA")

LineSet1160.setColor(ColorRGBA1162)

Shape1159.setGeometry(LineSet1160)

HAnimSegment1155.addChildren(Shape1159)

HAnimJoint1154.addChildren(HAnimSegment1155)
HAnimJoint1163 = x3d.HAnimJoint()
HAnimJoint1163.setName("l_ring1")
HAnimJoint1163.setDEF("hanim_l_ring1")
HAnimJoint1163.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment1164 = x3d.HAnimSegment()
HAnimSegment1164.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1164.setDEF("hanim_l_carpal_proximal_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
TouchSensor1165 = x3d.TouchSensor()
TouchSensor1165.setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4")

HAnimSegment1164.addChildren(TouchSensor1165)
Transform1166 = x3d.Transform()
Transform1166.setTranslation([0.1956,0.7815,-0.0794])
Shape1167 = x3d.Shape()
Shape1167.setUSE("HAnimJointShape")

Transform1166.addChildren(Shape1167)

HAnimSegment1164.addChildren(Transform1166)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
Shape1168 = x3d.Shape()
LineSet1169 = x3d.LineSet()
LineSet1169.setVertexCount([2])
Coordinate1170 = x3d.Coordinate()
Coordinate1170.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1169.setCoord(Coordinate1170)
ColorRGBA1171 = x3d.ColorRGBA()
ColorRGBA1171.setUSE("HAnimSegmentLineColorRGBA")

LineSet1169.setColor(ColorRGBA1171)

Shape1168.setGeometry(LineSet1169)

HAnimSegment1164.addChildren(Shape1168)

HAnimJoint1163.addChildren(HAnimSegment1164)
HAnimJoint1172 = x3d.HAnimJoint()
HAnimJoint1172.setName("l_ring2")
HAnimJoint1172.setDEF("hanim_l_ring2")
HAnimJoint1172.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment1173 = x3d.HAnimSegment()
HAnimSegment1173.setName("l_carpal_middle_phalanx_4")
HAnimSegment1173.setDEF("hanim_l_carpal_middle_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
TouchSensor1174 = x3d.TouchSensor()
TouchSensor1174.setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4")

HAnimSegment1173.addChildren(TouchSensor1174)
Transform1175 = x3d.Transform()
Transform1175.setTranslation([0.1973,0.7287,-0.0777])
Shape1176 = x3d.Shape()
Shape1176.setUSE("HAnimJointShape")

Transform1175.addChildren(Shape1176)

HAnimSegment1173.addChildren(Transform1175)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
Shape1177 = x3d.Shape()
LineSet1178 = x3d.LineSet()
LineSet1178.setVertexCount([2])
Coordinate1179 = x3d.Coordinate()
Coordinate1179.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1178.setCoord(Coordinate1179)
ColorRGBA1180 = x3d.ColorRGBA()
ColorRGBA1180.setUSE("HAnimSegmentLineColorRGBA")

LineSet1178.setColor(ColorRGBA1180)

Shape1177.setGeometry(LineSet1178)

HAnimSegment1173.addChildren(Shape1177)

HAnimJoint1172.addChildren(HAnimSegment1173)
HAnimJoint1181 = x3d.HAnimJoint()
HAnimJoint1181.setName("l_ring3")
HAnimJoint1181.setDEF("hanim_l_ring3")
HAnimJoint1181.setCenter([0.1983,0.7045,-0.0767])
HAnimSegment1182 = x3d.HAnimSegment()
HAnimSegment1182.setName("l_carpal_distal_phalanx_4")
HAnimSegment1182.setDEF("hanim_l_carpal_distal_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
TouchSensor1183 = x3d.TouchSensor()
TouchSensor1183.setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4")

HAnimSegment1182.addChildren(TouchSensor1183)
Transform1184 = x3d.Transform()
Transform1184.setTranslation([0.1983,0.7045,-0.0767])
Shape1185 = x3d.Shape()
Shape1185.setUSE("HAnimJointShape")

Transform1184.addChildren(Shape1185)

HAnimSegment1182.addChildren(Transform1184)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape1186 = x3d.Shape()
LineSet1187 = x3d.LineSet()
LineSet1187.setVertexCount([2])
Coordinate1188 = x3d.Coordinate()
Coordinate1188.setPoint([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])

LineSet1187.setCoord(Coordinate1188)
ColorRGBA1189 = x3d.ColorRGBA()
ColorRGBA1189.setUSE("HAnimSiteLineColorRGBA")

LineSet1187.setColor(ColorRGBA1189)

Shape1186.setGeometry(LineSet1187)

HAnimSegment1182.addChildren(Shape1186)
HAnimSite1190 = x3d.HAnimSite()
HAnimSite1190.setName("l_ring_distal_tip_pt")
HAnimSite1190.setDEF("hanim_l_ring_distal_tip")
HAnimSite1190.setTranslation([0.2035,0.675,-0.0756])
#HAnimSite visualization shape
TouchSensor1191 = x3d.TouchSensor()
TouchSensor1191.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1190.addChildren(TouchSensor1191)
Shape1192 = x3d.Shape()
Shape1192.setUSE("HAnimSiteShape")

HAnimSite1190.addChildren(Shape1192)

HAnimSegment1182.addChildren(HAnimSite1190)

HAnimJoint1181.addChildren(HAnimSegment1182)

HAnimJoint1172.addChildren(HAnimJoint1181)

HAnimJoint1163.addChildren(HAnimJoint1172)

HAnimJoint1154.addChildren(HAnimJoint1163)

HAnimJoint981.addChildren(HAnimJoint1154)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.setName("l_pinky0")
HAnimJoint1193.setDEF("hanim_l_pinky0")
HAnimJoint1193.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment1194 = x3d.HAnimSegment()
HAnimSegment1194.setName("l_metacarpal_5")
HAnimSegment1194.setDEF("hanim_l_metacarpal_5")
#Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
TouchSensor1195 = x3d.TouchSensor()
TouchSensor1195.setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5")

HAnimSegment1194.addChildren(TouchSensor1195)
Transform1196 = x3d.Transform()
Transform1196.setTranslation([0.1925,0.8066,-0.1036])
Shape1197 = x3d.Shape()
Shape1197.setUSE("HAnimJointShape")

Transform1196.addChildren(Shape1197)

HAnimSegment1194.addChildren(Transform1196)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
Shape1198 = x3d.Shape()
LineSet1199 = x3d.LineSet()
LineSet1199.setVertexCount([2])
Coordinate1200 = x3d.Coordinate()
Coordinate1200.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1199.setCoord(Coordinate1200)
ColorRGBA1201 = x3d.ColorRGBA()
ColorRGBA1201.setUSE("HAnimSegmentLineColorRGBA")

LineSet1199.setColor(ColorRGBA1201)

Shape1198.setGeometry(LineSet1199)

HAnimSegment1194.addChildren(Shape1198)

HAnimJoint1193.addChildren(HAnimSegment1194)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.setName("l_pinky1")
HAnimJoint1202.setDEF("hanim_l_pinky1")
HAnimJoint1202.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment1203 = x3d.HAnimSegment()
HAnimSegment1203.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1203.setDEF("hanim_l_carpal_proximal_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
TouchSensor1204 = x3d.TouchSensor()
TouchSensor1204.setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5")

HAnimSegment1203.addChildren(TouchSensor1204)
Transform1205 = x3d.Transform()
Transform1205.setTranslation([0.1925,0.7866,-0.1036])
Shape1206 = x3d.Shape()
Shape1206.setUSE("HAnimJointShape")

Transform1205.addChildren(Shape1206)

HAnimSegment1203.addChildren(Transform1205)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
Shape1207 = x3d.Shape()
LineSet1208 = x3d.LineSet()
LineSet1208.setVertexCount([2])
Coordinate1209 = x3d.Coordinate()
Coordinate1209.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1208.setCoord(Coordinate1209)
ColorRGBA1210 = x3d.ColorRGBA()
ColorRGBA1210.setUSE("HAnimSegmentLineColorRGBA")

LineSet1208.setColor(ColorRGBA1210)

Shape1207.setGeometry(LineSet1208)

HAnimSegment1203.addChildren(Shape1207)

HAnimJoint1202.addChildren(HAnimSegment1203)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setName("l_pinky2")
HAnimJoint1211.setDEF("hanim_l_pinky2")
HAnimJoint1211.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment1212 = x3d.HAnimSegment()
HAnimSegment1212.setName("l_carpal_middle_phalanx_5")
HAnimSegment1212.setDEF("hanim_l_carpal_middle_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
TouchSensor1213 = x3d.TouchSensor()
TouchSensor1213.setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5")

HAnimSegment1212.addChildren(TouchSensor1213)
Transform1214 = x3d.Transform()
Transform1214.setTranslation([0.1938,0.7452,-0.1024])
Shape1215 = x3d.Shape()
Shape1215.setUSE("HAnimJointShape")

Transform1214.addChildren(Shape1215)

HAnimSegment1212.addChildren(Transform1214)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
Shape1216 = x3d.Shape()
LineSet1217 = x3d.LineSet()
LineSet1217.setVertexCount([2])
Coordinate1218 = x3d.Coordinate()
Coordinate1218.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1217.setCoord(Coordinate1218)
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.setUSE("HAnimSegmentLineColorRGBA")

LineSet1217.setColor(ColorRGBA1219)

Shape1216.setGeometry(LineSet1217)

HAnimSegment1212.addChildren(Shape1216)

HAnimJoint1211.addChildren(HAnimSegment1212)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setName("l_pinky3")
HAnimJoint1220.setDEF("hanim_l_pinky3")
HAnimJoint1220.setCenter([0.1948,0.7277,-0.1017])
HAnimSegment1221 = x3d.HAnimSegment()
HAnimSegment1221.setName("l_carpal_distal_phalanx_5")
HAnimSegment1221.setDEF("hanim_l_carpal_distal_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
TouchSensor1222 = x3d.TouchSensor()
TouchSensor1222.setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5")

HAnimSegment1221.addChildren(TouchSensor1222)
Transform1223 = x3d.Transform()
Transform1223.setTranslation([0.1948,0.7277,-0.1017])
Shape1224 = x3d.Shape()
Shape1224.setUSE("HAnimJointShape")

Transform1223.addChildren(Shape1224)

HAnimSegment1221.addChildren(Transform1223)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape1225 = x3d.Shape()
LineSet1226 = x3d.LineSet()
LineSet1226.setVertexCount([2])
Coordinate1227 = x3d.Coordinate()
Coordinate1227.setPoint([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])

LineSet1226.setCoord(Coordinate1227)
ColorRGBA1228 = x3d.ColorRGBA()
ColorRGBA1228.setUSE("HAnimSiteLineColorRGBA")

LineSet1226.setColor(ColorRGBA1228)

Shape1225.setGeometry(LineSet1226)

HAnimSegment1221.addChildren(Shape1225)
HAnimSite1229 = x3d.HAnimSite()
HAnimSite1229.setName("l_pinky_distal_tip_pt")
HAnimSite1229.setDEF("hanim_l_pinky_distal_tip")
HAnimSite1229.setTranslation([0.2014,0.7009,-0.1012])
#HAnimSite visualization shape
TouchSensor1230 = x3d.TouchSensor()
TouchSensor1230.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1229.addChildren(TouchSensor1230)
Shape1231 = x3d.Shape()
Shape1231.setUSE("HAnimSiteShape")

HAnimSite1229.addChildren(Shape1231)

HAnimSegment1221.addChildren(HAnimSite1229)

HAnimJoint1220.addChildren(HAnimSegment1221)

HAnimJoint1211.addChildren(HAnimJoint1220)

HAnimJoint1202.addChildren(HAnimJoint1211)

HAnimJoint1193.addChildren(HAnimJoint1202)

HAnimJoint981.addChildren(HAnimJoint1193)

HAnimJoint944.addChildren(HAnimJoint981)

HAnimJoint928.addChildren(HAnimJoint944)

HAnimJoint919.addChildren(HAnimJoint928)

HAnimJoint882.addChildren(HAnimJoint919)

HAnimJoint594.addChildren(HAnimJoint882)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setName("r_sternoclavicular")
HAnimJoint1232.setDEF("hanim_r_sternoclavicular")
HAnimJoint1232.setCenter([-0.082,1.4488,-0.0353])
HAnimSegment1233 = x3d.HAnimSegment()
HAnimSegment1233.setName("r_clavicle")
HAnimSegment1233.setDEF("hanim_r_clavicle")
#Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor1234 = x3d.TouchSensor()
TouchSensor1234.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1233.addChildren(TouchSensor1234)
Transform1235 = x3d.Transform()
Transform1235.setTranslation([-0.082,1.4488,-0.0353])
Shape1236 = x3d.Shape()
Shape1236.setUSE("HAnimJointShape")

Transform1235.addChildren(Shape1236)

HAnimSegment1233.addChildren(Transform1235)
#HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
Shape1237 = x3d.Shape()
LineSet1238 = x3d.LineSet()
LineSet1238.setVertexCount([2])
Coordinate1239 = x3d.Coordinate()
Coordinate1239.setPoint([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])

LineSet1238.setCoord(Coordinate1239)
ColorRGBA1240 = x3d.ColorRGBA()
ColorRGBA1240.setUSE("HAnimSegmentLineColorRGBA")

LineSet1238.setColor(ColorRGBA1240)

Shape1237.setGeometry(LineSet1238)

HAnimSegment1233.addChildren(Shape1237)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
Shape1241 = x3d.Shape()
LineSet1242 = x3d.LineSet()
LineSet1242.setVertexCount([2])
Coordinate1243 = x3d.Coordinate()
Coordinate1243.setPoint([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])

LineSet1242.setCoord(Coordinate1243)
ColorRGBA1244 = x3d.ColorRGBA()
ColorRGBA1244.setUSE("HAnimSiteLineColorRGBA")

LineSet1242.setColor(ColorRGBA1244)

Shape1241.setGeometry(LineSet1242)

HAnimSegment1233.addChildren(Shape1241)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
Shape1245 = x3d.Shape()
LineSet1246 = x3d.LineSet()
LineSet1246.setVertexCount([2])
Coordinate1247 = x3d.Coordinate()
Coordinate1247.setPoint([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])

LineSet1246.setCoord(Coordinate1247)
ColorRGBA1248 = x3d.ColorRGBA()
ColorRGBA1248.setUSE("HAnimSiteLineColorRGBA")

LineSet1246.setColor(ColorRGBA1248)

Shape1245.setGeometry(LineSet1246)

HAnimSegment1233.addChildren(Shape1245)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
Shape1249 = x3d.Shape()
LineSet1250 = x3d.LineSet()
LineSet1250.setVertexCount([2])
Coordinate1251 = x3d.Coordinate()
Coordinate1251.setPoint([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])

LineSet1250.setCoord(Coordinate1251)
ColorRGBA1252 = x3d.ColorRGBA()
ColorRGBA1252.setUSE("HAnimSiteLineColorRGBA")

LineSet1250.setColor(ColorRGBA1252)

Shape1249.setGeometry(LineSet1250)

HAnimSegment1233.addChildren(Shape1249)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
Shape1253 = x3d.Shape()
LineSet1254 = x3d.LineSet()
LineSet1254.setVertexCount([2])
Coordinate1255 = x3d.Coordinate()
Coordinate1255.setPoint([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])

LineSet1254.setCoord(Coordinate1255)
ColorRGBA1256 = x3d.ColorRGBA()
ColorRGBA1256.setUSE("HAnimSiteLineColorRGBA")

LineSet1254.setColor(ColorRGBA1256)

Shape1253.setGeometry(LineSet1254)

HAnimSegment1233.addChildren(Shape1253)
HAnimSite1257 = x3d.HAnimSite()
HAnimSite1257.setName("r_clavicale_pt_pt")
HAnimSite1257.setDEF("hanim_r_clavicale_pt")
HAnimSite1257.setTranslation([-0.0115,1.4943,0.04])
#HAnimSite visualization shape
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.setDescription("HAnimSite r_clavicale_pt")

HAnimSite1257.addChildren(TouchSensor1258)
Shape1259 = x3d.Shape()
Shape1259.setUSE("HAnimSiteShape")

HAnimSite1257.addChildren(Shape1259)

HAnimSegment1233.addChildren(HAnimSite1257)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.setName("r_acromion_pt_pt")
HAnimSite1260.setDEF("hanim_r_acromion_pt")
HAnimSite1260.setTranslation([-0.1905,1.4791,-0.0431])
#HAnimSite visualization shape
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.setDescription("HAnimSite r_acromion_pt")

HAnimSite1260.addChildren(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.setUSE("HAnimSiteShape")

HAnimSite1260.addChildren(Shape1262)

HAnimSegment1233.addChildren(HAnimSite1260)
HAnimSite1263 = x3d.HAnimSite()
HAnimSite1263.setName("r_axilla_ant_pt_pt")
HAnimSite1263.setDEF("hanim_r_axilla_ant_pt")
HAnimSite1263.setTranslation([-0.1626,1.4072,-0.0031])
#HAnimSite visualization shape
TouchSensor1264 = x3d.TouchSensor()
TouchSensor1264.setDescription("HAnimSite r_axilla_ant_pt")

HAnimSite1263.addChildren(TouchSensor1264)
Shape1265 = x3d.Shape()
Shape1265.setUSE("HAnimSiteShape")

HAnimSite1263.addChildren(Shape1265)

HAnimSegment1233.addChildren(HAnimSite1263)
HAnimSite1266 = x3d.HAnimSite()
HAnimSite1266.setName("r_axilla_post_pt_pt")
HAnimSite1266.setDEF("hanim_r_axilla_post_pt")
HAnimSite1266.setTranslation([-0.1603,1.4098,-0.0826])
#HAnimSite visualization shape
TouchSensor1267 = x3d.TouchSensor()
TouchSensor1267.setDescription("HAnimSite r_axilla_post_pt")

HAnimSite1266.addChildren(TouchSensor1267)
Shape1268 = x3d.Shape()
Shape1268.setUSE("HAnimSiteShape")

HAnimSite1266.addChildren(Shape1268)

HAnimSegment1233.addChildren(HAnimSite1266)

HAnimJoint1232.addChildren(HAnimSegment1233)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.setName("r_acromioclavicular")
HAnimJoint1269.setDEF("hanim_r_acromioclavicular")
HAnimJoint1269.setCenter([-0.0962,1.4269,-0.0424])
HAnimSegment1270 = x3d.HAnimSegment()
HAnimSegment1270.setName("r_scapula")
HAnimSegment1270.setDEF("hanim_r_scapula")
#Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
TouchSensor1271 = x3d.TouchSensor()
TouchSensor1271.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1270.addChildren(TouchSensor1271)
Transform1272 = x3d.Transform()
Transform1272.setTranslation([-0.0962,1.4269,-0.0424])
Shape1273 = x3d.Shape()
Shape1273.setUSE("HAnimJointShape")

Transform1272.addChildren(Shape1273)

HAnimSegment1270.addChildren(Transform1272)
#HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
Shape1274 = x3d.Shape()
LineSet1275 = x3d.LineSet()
LineSet1275.setVertexCount([2])
Coordinate1276 = x3d.Coordinate()
Coordinate1276.setPoint([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])

LineSet1275.setCoord(Coordinate1276)
ColorRGBA1277 = x3d.ColorRGBA()
ColorRGBA1277.setUSE("HAnimSegmentLineColorRGBA")

LineSet1275.setColor(ColorRGBA1277)

Shape1274.setGeometry(LineSet1275)

HAnimSegment1270.addChildren(Shape1274)

HAnimJoint1269.addChildren(HAnimSegment1270)
HAnimJoint1278 = x3d.HAnimJoint()
HAnimJoint1278.setName("r_shoulder")
HAnimJoint1278.setDEF("hanim_r_shoulder")
HAnimJoint1278.setCenter([-0.2029,1.4376,-0.0387])
HAnimSegment1279 = x3d.HAnimSegment()
HAnimSegment1279.setName("r_upperarm")
HAnimSegment1279.setDEF("hanim_r_upperarm")
#Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor1280 = x3d.TouchSensor()
TouchSensor1280.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1279.addChildren(TouchSensor1280)
Transform1281 = x3d.Transform()
Transform1281.setTranslation([-0.2029,1.4376,-0.0387])
Shape1282 = x3d.Shape()
Shape1282.setUSE("HAnimJointShape")

Transform1281.addChildren(Shape1282)

HAnimSegment1279.addChildren(Transform1281)
#HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
Shape1283 = x3d.Shape()
LineSet1284 = x3d.LineSet()
LineSet1284.setVertexCount([2])
Coordinate1285 = x3d.Coordinate()
Coordinate1285.setPoint([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])

LineSet1284.setCoord(Coordinate1285)
ColorRGBA1286 = x3d.ColorRGBA()
ColorRGBA1286.setUSE("HAnimSegmentLineColorRGBA")

LineSet1284.setColor(ColorRGBA1286)

Shape1283.setGeometry(LineSet1284)

HAnimSegment1279.addChildren(Shape1283)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
Shape1287 = x3d.Shape()
LineSet1288 = x3d.LineSet()
LineSet1288.setVertexCount([2])
Coordinate1289 = x3d.Coordinate()
Coordinate1289.setPoint([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])

LineSet1288.setCoord(Coordinate1289)
ColorRGBA1290 = x3d.ColorRGBA()
ColorRGBA1290.setUSE("HAnimSiteLineColorRGBA")

LineSet1288.setColor(ColorRGBA1290)

Shape1287.setGeometry(LineSet1288)

HAnimSegment1279.addChildren(Shape1287)
HAnimSite1291 = x3d.HAnimSite()
HAnimSite1291.setName("r_humeral_lateral_epicn_pt_pt")
HAnimSite1291.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite1291.setTranslation([-0.2224,1.1517,-0.1033])
#HAnimSite visualization shape
TouchSensor1292 = x3d.TouchSensor()
TouchSensor1292.setDescription("HAnimSite r_humeral_lateral_epicn_pt")

HAnimSite1291.addChildren(TouchSensor1292)
Shape1293 = x3d.Shape()
Shape1293.setUSE("HAnimSiteShape")

HAnimSite1291.addChildren(Shape1293)

HAnimSegment1279.addChildren(HAnimSite1291)

HAnimJoint1278.addChildren(HAnimSegment1279)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.setName("r_elbow")
HAnimJoint1294.setDEF("hanim_r_elbow")
HAnimJoint1294.setCenter([-0.2014,1.1357,-0.0682])
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.setName("r_forearm")
HAnimSegment1295.setDEF("hanim_r_forearm")
#Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
TouchSensor1296 = x3d.TouchSensor()
TouchSensor1296.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1295.addChildren(TouchSensor1296)
Transform1297 = x3d.Transform()
Transform1297.setTranslation([-0.2014,1.1357,-0.0682])
Shape1298 = x3d.Shape()
Shape1298.setUSE("HAnimJointShape")

Transform1297.addChildren(Shape1298)

HAnimSegment1295.addChildren(Transform1297)
#HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
Shape1299 = x3d.Shape()
LineSet1300 = x3d.LineSet()
LineSet1300.setVertexCount([2])
Coordinate1301 = x3d.Coordinate()
Coordinate1301.setPoint([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])

LineSet1300.setCoord(Coordinate1301)
ColorRGBA1302 = x3d.ColorRGBA()
ColorRGBA1302.setUSE("HAnimSegmentLineColorRGBA")

LineSet1300.setColor(ColorRGBA1302)

Shape1299.setGeometry(LineSet1300)

HAnimSegment1295.addChildren(Shape1299)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
Shape1303 = x3d.Shape()
LineSet1304 = x3d.LineSet()
LineSet1304.setVertexCount([2])
Coordinate1305 = x3d.Coordinate()
Coordinate1305.setPoint([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])

LineSet1304.setCoord(Coordinate1305)
ColorRGBA1306 = x3d.ColorRGBA()
ColorRGBA1306.setUSE("HAnimSiteLineColorRGBA")

LineSet1304.setColor(ColorRGBA1306)

Shape1303.setGeometry(LineSet1304)

HAnimSegment1295.addChildren(Shape1303)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
Shape1307 = x3d.Shape()
LineSet1308 = x3d.LineSet()
LineSet1308.setVertexCount([2])
Coordinate1309 = x3d.Coordinate()
Coordinate1309.setPoint([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])

LineSet1308.setCoord(Coordinate1309)
ColorRGBA1310 = x3d.ColorRGBA()
ColorRGBA1310.setUSE("HAnimSiteLineColorRGBA")

LineSet1308.setColor(ColorRGBA1310)

Shape1307.setGeometry(LineSet1308)

HAnimSegment1295.addChildren(Shape1307)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
Shape1311 = x3d.Shape()
LineSet1312 = x3d.LineSet()
LineSet1312.setVertexCount([2])
Coordinate1313 = x3d.Coordinate()
Coordinate1313.setPoint([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])

LineSet1312.setCoord(Coordinate1313)
ColorRGBA1314 = x3d.ColorRGBA()
ColorRGBA1314.setUSE("HAnimSiteLineColorRGBA")

LineSet1312.setColor(ColorRGBA1314)

Shape1311.setGeometry(LineSet1312)

HAnimSegment1295.addChildren(Shape1311)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
Shape1315 = x3d.Shape()
LineSet1316 = x3d.LineSet()
LineSet1316.setVertexCount([2])
Coordinate1317 = x3d.Coordinate()
Coordinate1317.setPoint([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])

LineSet1316.setCoord(Coordinate1317)
ColorRGBA1318 = x3d.ColorRGBA()
ColorRGBA1318.setUSE("HAnimSiteLineColorRGBA")

LineSet1316.setColor(ColorRGBA1318)

Shape1315.setGeometry(LineSet1316)

HAnimSegment1295.addChildren(Shape1315)
HAnimSite1319 = x3d.HAnimSite()
HAnimSite1319.setName("r_radial_styloid_pt_pt")
HAnimSite1319.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1319.setTranslation([-0.1884,0.8676,-0.036])
#HAnimSite visualization shape
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.setDescription("HAnimSite r_radial_styloid_pt")

HAnimSite1319.addChildren(TouchSensor1320)
Shape1321 = x3d.Shape()
Shape1321.setUSE("HAnimSiteShape")

HAnimSite1319.addChildren(Shape1321)

HAnimSegment1295.addChildren(HAnimSite1319)
HAnimSite1322 = x3d.HAnimSite()
HAnimSite1322.setName("r_olecranon_pt_pt")
HAnimSite1322.setDEF("hanim_r_olecranon_pt")
HAnimSite1322.setTranslation([-0.1907,1.1405,-0.1065])
#HAnimSite visualization shape
TouchSensor1323 = x3d.TouchSensor()
TouchSensor1323.setDescription("HAnimSite r_olecranon_pt")

HAnimSite1322.addChildren(TouchSensor1323)
Shape1324 = x3d.Shape()
Shape1324.setUSE("HAnimSiteShape")

HAnimSite1322.addChildren(Shape1324)

HAnimSegment1295.addChildren(HAnimSite1322)
HAnimSite1325 = x3d.HAnimSite()
HAnimSite1325.setName("r_humeral_medial_epicn_pt_pt")
HAnimSite1325.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite1325.setTranslation([-0.168,1.1298,-0.1062])
#HAnimSite visualization shape
TouchSensor1326 = x3d.TouchSensor()
TouchSensor1326.setDescription("HAnimSite r_humeral_medial_epicn_pt")

HAnimSite1325.addChildren(TouchSensor1326)
Shape1327 = x3d.Shape()
Shape1327.setUSE("HAnimSiteShape")

HAnimSite1325.addChildren(Shape1327)

HAnimSegment1295.addChildren(HAnimSite1325)
HAnimSite1328 = x3d.HAnimSite()
HAnimSite1328.setName("r_radiale_pt_pt")
HAnimSite1328.setDEF("hanim_r_radiale_pt")
HAnimSite1328.setTranslation([-0.213,1.1305,-0.1091])
#HAnimSite visualization shape
TouchSensor1329 = x3d.TouchSensor()
TouchSensor1329.setDescription("HAnimSite r_radiale_pt")

HAnimSite1328.addChildren(TouchSensor1329)
Shape1330 = x3d.Shape()
Shape1330.setUSE("HAnimSiteShape")

HAnimSite1328.addChildren(Shape1330)

HAnimSegment1295.addChildren(HAnimSite1328)

HAnimJoint1294.addChildren(HAnimSegment1295)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.setName("r_radiocarpal")
HAnimJoint1331.setDEF("hanim_r_radiocarpal")
HAnimJoint1331.setCenter([-0.1984,0.8663,-0.0583])
HAnimSegment1332 = x3d.HAnimSegment()
HAnimSegment1332.setName("r_carpal")
HAnimSegment1332.setDEF("hanim_r_carpal")
#Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
TouchSensor1333 = x3d.TouchSensor()
TouchSensor1333.setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal")

HAnimSegment1332.addChildren(TouchSensor1333)
Transform1334 = x3d.Transform()
Transform1334.setTranslation([-0.1984,0.8663,-0.0583])
Shape1335 = x3d.Shape()
Shape1335.setUSE("HAnimJointShape")

Transform1334.addChildren(Shape1335)

HAnimSegment1332.addChildren(Transform1334)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
Shape1336 = x3d.Shape()
LineSet1337 = x3d.LineSet()
LineSet1337.setVertexCount([2])
Coordinate1338 = x3d.Coordinate()
Coordinate1338.setPoint([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])

LineSet1337.setCoord(Coordinate1338)
ColorRGBA1339 = x3d.ColorRGBA()
ColorRGBA1339.setUSE("HAnimSegmentLineColorRGBA")

LineSet1337.setColor(ColorRGBA1339)

Shape1336.setGeometry(LineSet1337)

HAnimSegment1332.addChildren(Shape1336)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
Shape1340 = x3d.Shape()
LineSet1341 = x3d.LineSet()
LineSet1341.setVertexCount([2])
Coordinate1342 = x3d.Coordinate()
Coordinate1342.setPoint([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])

LineSet1341.setCoord(Coordinate1342)
ColorRGBA1343 = x3d.ColorRGBA()
ColorRGBA1343.setUSE("HAnimSegmentLineColorRGBA")

LineSet1341.setColor(ColorRGBA1343)

Shape1340.setGeometry(LineSet1341)

HAnimSegment1332.addChildren(Shape1340)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
Shape1344 = x3d.Shape()
LineSet1345 = x3d.LineSet()
LineSet1345.setVertexCount([2])
Coordinate1346 = x3d.Coordinate()
Coordinate1346.setPoint([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])

LineSet1345.setCoord(Coordinate1346)
ColorRGBA1347 = x3d.ColorRGBA()
ColorRGBA1347.setUSE("HAnimSegmentLineColorRGBA")

LineSet1345.setColor(ColorRGBA1347)

Shape1344.setGeometry(LineSet1345)

HAnimSegment1332.addChildren(Shape1344)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
Shape1348 = x3d.Shape()
LineSet1349 = x3d.LineSet()
LineSet1349.setVertexCount([2])
Coordinate1350 = x3d.Coordinate()
Coordinate1350.setPoint([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])

LineSet1349.setCoord(Coordinate1350)
ColorRGBA1351 = x3d.ColorRGBA()
ColorRGBA1351.setUSE("HAnimSegmentLineColorRGBA")

LineSet1349.setColor(ColorRGBA1351)

Shape1348.setGeometry(LineSet1349)

HAnimSegment1332.addChildren(Shape1348)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
Shape1352 = x3d.Shape()
LineSet1353 = x3d.LineSet()
LineSet1353.setVertexCount([2])
Coordinate1354 = x3d.Coordinate()
Coordinate1354.setPoint([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])

LineSet1353.setCoord(Coordinate1354)
ColorRGBA1355 = x3d.ColorRGBA()
ColorRGBA1355.setUSE("HAnimSegmentLineColorRGBA")

LineSet1353.setColor(ColorRGBA1355)

Shape1352.setGeometry(LineSet1353)

HAnimSegment1332.addChildren(Shape1352)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
Shape1356 = x3d.Shape()
LineSet1357 = x3d.LineSet()
LineSet1357.setVertexCount([2])
Coordinate1358 = x3d.Coordinate()
Coordinate1358.setPoint([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])

LineSet1357.setCoord(Coordinate1358)
ColorRGBA1359 = x3d.ColorRGBA()
ColorRGBA1359.setUSE("HAnimSiteLineColorRGBA")

LineSet1357.setColor(ColorRGBA1359)

Shape1356.setGeometry(LineSet1357)

HAnimSegment1332.addChildren(Shape1356)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
Shape1360 = x3d.Shape()
LineSet1361 = x3d.LineSet()
LineSet1361.setVertexCount([2])
Coordinate1362 = x3d.Coordinate()
Coordinate1362.setPoint([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])

LineSet1361.setCoord(Coordinate1362)
ColorRGBA1363 = x3d.ColorRGBA()
ColorRGBA1363.setUSE("HAnimSiteLineColorRGBA")

LineSet1361.setColor(ColorRGBA1363)

Shape1360.setGeometry(LineSet1361)

HAnimSegment1332.addChildren(Shape1360)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.setVertexCount([2])
Coordinate1366 = x3d.Coordinate()
Coordinate1366.setPoint([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])

LineSet1365.setCoord(Coordinate1366)
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.setUSE("HAnimSiteLineColorRGBA")

LineSet1365.setColor(ColorRGBA1367)

Shape1364.setGeometry(LineSet1365)

HAnimSegment1332.addChildren(Shape1364)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
Shape1368 = x3d.Shape()
LineSet1369 = x3d.LineSet()
LineSet1369.setVertexCount([2])
Coordinate1370 = x3d.Coordinate()
Coordinate1370.setPoint([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])

LineSet1369.setCoord(Coordinate1370)
ColorRGBA1371 = x3d.ColorRGBA()
ColorRGBA1371.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1369.setColor(ColorRGBA1371)

Shape1368.setGeometry(LineSet1369)

HAnimSegment1332.addChildren(Shape1368)
HAnimSite1372 = x3d.HAnimSite()
HAnimSite1372.setName("r_metacarpal_pha2_pt_pt")
HAnimSite1372.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite1372.setTranslation([-0.1977,0.8169,-0.0177])
#HAnimSite visualization shape
TouchSensor1373 = x3d.TouchSensor()
TouchSensor1373.setDescription("HAnimSite r_metacarpal_pha2_pt")

HAnimSite1372.addChildren(TouchSensor1373)
Shape1374 = x3d.Shape()
Shape1374.setUSE("HAnimSiteShape")

HAnimSite1372.addChildren(Shape1374)

HAnimSegment1332.addChildren(HAnimSite1372)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.setName("r_ulnar_styloid_pt_pt")
HAnimSite1375.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1375.setTranslation([-0.2117,0.8562,-0.0584])
#HAnimSite visualization shape
TouchSensor1376 = x3d.TouchSensor()
TouchSensor1376.setDescription("HAnimSite r_ulnar_styloid_pt")

HAnimSite1375.addChildren(TouchSensor1376)
Shape1377 = x3d.Shape()
Shape1377.setUSE("HAnimSiteShape")

HAnimSite1375.addChildren(Shape1377)

HAnimSegment1332.addChildren(HAnimSite1375)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.setName("r_metacarpal_pha5_pt_pt")
HAnimSite1378.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite1378.setTranslation([-0.1929,0.789,-0.1064])
#HAnimSite visualization shape
TouchSensor1379 = x3d.TouchSensor()
TouchSensor1379.setDescription("HAnimSite r_metacarpal_pha5_pt")

HAnimSite1378.addChildren(TouchSensor1379)
Shape1380 = x3d.Shape()
Shape1380.setUSE("HAnimSiteShape")

HAnimSite1378.addChildren(Shape1380)

HAnimSegment1332.addChildren(HAnimSite1378)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.setName("r_hand_front_view_pt")
HAnimSite1381.setDEF("hanim_r_hand_front_view")
HAnimSite1381.setTranslation([-0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1382 = x3d.TouchSensor()
TouchSensor1382.setDescription("HAnimSite r_hand_front_view")

HAnimSite1381.addChildren(TouchSensor1382)
Shape1383 = x3d.Shape()
Shape1383.setUSE("HAnimSiteShape")

HAnimSite1381.addChildren(Shape1383)
Viewpoint1384 = x3d.Viewpoint()
Viewpoint1384.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1384.setCenterOfRotation([0,0.7,0])
Viewpoint1384.setDescription("right hand front")
Viewpoint1384.setPosition([0,0,0])

HAnimSite1381.addChildren(Viewpoint1384)
#HAnimSite/Viewpoint visualization shape
Anchor1385 = x3d.Anchor()
Anchor1385.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1385.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1386 = x3d.LOD()
LOD1386.setForceTransitions(True)
LOD1386.setRange([0.04])
WorldInfo1387 = x3d.WorldInfo()
WorldInfo1387.setInfo(["hide diamond when close"])

LOD1386.addChildren(WorldInfo1387)
Shape1388 = x3d.Shape()
Shape1388.setUSE("HAnimSiteViewpointShape")

LOD1386.addChildren(Shape1388)

Anchor1385.addChildren(LOD1386)

HAnimSite1381.addChildren(Anchor1385)

HAnimSegment1332.addChildren(HAnimSite1381)

HAnimJoint1331.addChildren(HAnimSegment1332)
HAnimJoint1389 = x3d.HAnimJoint()
HAnimJoint1389.setName("r_thumb1")
HAnimJoint1389.setDEF("hanim_r_thumb1")
HAnimJoint1389.setCenter([-0.1924,0.8472,-0.0534])
HAnimSegment1390 = x3d.HAnimSegment()
HAnimSegment1390.setName("r_metacarpal_1")
HAnimSegment1390.setDEF("hanim_r_metacarpal_1")
#Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
TouchSensor1391 = x3d.TouchSensor()
TouchSensor1391.setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1")

HAnimSegment1390.addChildren(TouchSensor1391)
Transform1392 = x3d.Transform()
Transform1392.setTranslation([-0.1924,0.8472,-0.0534])
Shape1393 = x3d.Shape()
Shape1393.setUSE("HAnimJointShape")

Transform1392.addChildren(Shape1393)

HAnimSegment1390.addChildren(Transform1392)
#HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
Shape1394 = x3d.Shape()
LineSet1395 = x3d.LineSet()
LineSet1395.setVertexCount([2])
Coordinate1396 = x3d.Coordinate()
Coordinate1396.setPoint([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])

LineSet1395.setCoord(Coordinate1396)
ColorRGBA1397 = x3d.ColorRGBA()
ColorRGBA1397.setUSE("HAnimSegmentLineColorRGBA")

LineSet1395.setColor(ColorRGBA1397)

Shape1394.setGeometry(LineSet1395)

HAnimSegment1390.addChildren(Shape1394)

HAnimJoint1389.addChildren(HAnimSegment1390)
HAnimJoint1398 = x3d.HAnimJoint()
HAnimJoint1398.setName("r_thumb2")
HAnimJoint1398.setDEF("hanim_r_thumb2")
HAnimJoint1398.setCenter([-0.1951,0.8226,0.0246])
HAnimSegment1399 = x3d.HAnimSegment()
HAnimSegment1399.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1399.setDEF("hanim_r_carpal_proximal_phalanx_1")
#Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
TouchSensor1400 = x3d.TouchSensor()
TouchSensor1400.setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1")

HAnimSegment1399.addChildren(TouchSensor1400)
Transform1401 = x3d.Transform()
Transform1401.setTranslation([-0.1951,0.8226,0.0246])
Shape1402 = x3d.Shape()
Shape1402.setUSE("HAnimJointShape")

Transform1401.addChildren(Shape1402)

HAnimSegment1399.addChildren(Transform1401)
#HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
Shape1403 = x3d.Shape()
LineSet1404 = x3d.LineSet()
LineSet1404.setVertexCount([2])
Coordinate1405 = x3d.Coordinate()
Coordinate1405.setPoint([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])

LineSet1404.setCoord(Coordinate1405)
ColorRGBA1406 = x3d.ColorRGBA()
ColorRGBA1406.setUSE("HAnimSegmentLineColorRGBA")

LineSet1404.setColor(ColorRGBA1406)

Shape1403.setGeometry(LineSet1404)

HAnimSegment1399.addChildren(Shape1403)

HAnimJoint1398.addChildren(HAnimSegment1399)
HAnimJoint1407 = x3d.HAnimJoint()
HAnimJoint1407.setName("r_thumb3")
HAnimJoint1407.setDEF("hanim_r_thumb3")
HAnimJoint1407.setCenter([-0.1955,0.8159,0.0464])
HAnimSegment1408 = x3d.HAnimSegment()
HAnimSegment1408.setName("r_carpal_distal_phalanx_1")
HAnimSegment1408.setDEF("hanim_r_carpal_distal_phalanx_1")
#Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
TouchSensor1409 = x3d.TouchSensor()
TouchSensor1409.setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1")

HAnimSegment1408.addChildren(TouchSensor1409)
Transform1410 = x3d.Transform()
Transform1410.setTranslation([-0.1955,0.8159,0.0464])
Shape1411 = x3d.Shape()
Shape1411.setUSE("HAnimJointShape")

Transform1410.addChildren(Shape1411)

HAnimSegment1408.addChildren(Transform1410)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape1412 = x3d.Shape()
LineSet1413 = x3d.LineSet()
LineSet1413.setVertexCount([2])
Coordinate1414 = x3d.Coordinate()
Coordinate1414.setPoint([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])

LineSet1413.setCoord(Coordinate1414)
ColorRGBA1415 = x3d.ColorRGBA()
ColorRGBA1415.setUSE("HAnimSiteLineColorRGBA")

LineSet1413.setColor(ColorRGBA1415)

Shape1412.setGeometry(LineSet1413)

HAnimSegment1408.addChildren(Shape1412)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.setName("r_thumb_distal_tip_pt")
HAnimSite1416.setDEF("hanim_r_thumb_distal_tip")
HAnimSite1416.setTranslation([-0.1869,0.809,0.082])
#HAnimSite visualization shape
TouchSensor1417 = x3d.TouchSensor()
TouchSensor1417.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1416.addChildren(TouchSensor1417)
Shape1418 = x3d.Shape()
Shape1418.setUSE("HAnimSiteShape")

HAnimSite1416.addChildren(Shape1418)

HAnimSegment1408.addChildren(HAnimSite1416)

HAnimJoint1407.addChildren(HAnimSegment1408)

HAnimJoint1398.addChildren(HAnimJoint1407)

HAnimJoint1389.addChildren(HAnimJoint1398)

HAnimJoint1331.addChildren(HAnimJoint1389)
HAnimJoint1419 = x3d.HAnimJoint()
HAnimJoint1419.setName("r_index0")
HAnimJoint1419.setDEF("hanim_r_index0")
HAnimJoint1419.setCenter([-0.1983,0.8024,-0.028])
HAnimSegment1420 = x3d.HAnimSegment()
HAnimSegment1420.setName("r_metacarpal_2")
HAnimSegment1420.setDEF("hanim_r_metacarpal_2")
#Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
TouchSensor1421 = x3d.TouchSensor()
TouchSensor1421.setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2")

HAnimSegment1420.addChildren(TouchSensor1421)
Transform1422 = x3d.Transform()
Transform1422.setTranslation([-0.1983,0.8024,-0.028])
Shape1423 = x3d.Shape()
Shape1423.setUSE("HAnimJointShape")

Transform1422.addChildren(Shape1423)

HAnimSegment1420.addChildren(Transform1422)
#HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
Shape1424 = x3d.Shape()
LineSet1425 = x3d.LineSet()
LineSet1425.setVertexCount([2])
Coordinate1426 = x3d.Coordinate()
Coordinate1426.setPoint([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])

LineSet1425.setCoord(Coordinate1426)
ColorRGBA1427 = x3d.ColorRGBA()
ColorRGBA1427.setUSE("HAnimSegmentLineColorRGBA")

LineSet1425.setColor(ColorRGBA1427)

Shape1424.setGeometry(LineSet1425)

HAnimSegment1420.addChildren(Shape1424)

HAnimJoint1419.addChildren(HAnimSegment1420)
HAnimJoint1428 = x3d.HAnimJoint()
HAnimJoint1428.setName("r_index1")
HAnimJoint1428.setDEF("hanim_r_index1")
HAnimJoint1428.setCenter([-0.1983,0.7815,-0.028])
HAnimSegment1429 = x3d.HAnimSegment()
HAnimSegment1429.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1429.setDEF("hanim_r_carpal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
TouchSensor1430 = x3d.TouchSensor()
TouchSensor1430.setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2")

HAnimSegment1429.addChildren(TouchSensor1430)
Transform1431 = x3d.Transform()
Transform1431.setTranslation([-0.1983,0.7815,-0.028])
Shape1432 = x3d.Shape()
Shape1432.setUSE("HAnimJointShape")

Transform1431.addChildren(Shape1432)

HAnimSegment1429.addChildren(Transform1431)
#HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
Shape1433 = x3d.Shape()
LineSet1434 = x3d.LineSet()
LineSet1434.setVertexCount([2])
Coordinate1435 = x3d.Coordinate()
Coordinate1435.setPoint([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])

LineSet1434.setCoord(Coordinate1435)
ColorRGBA1436 = x3d.ColorRGBA()
ColorRGBA1436.setUSE("HAnimSegmentLineColorRGBA")

LineSet1434.setColor(ColorRGBA1436)

Shape1433.setGeometry(LineSet1434)

HAnimSegment1429.addChildren(Shape1433)

HAnimJoint1428.addChildren(HAnimSegment1429)
HAnimJoint1437 = x3d.HAnimJoint()
HAnimJoint1437.setName("r_index2")
HAnimJoint1437.setDEF("hanim_r_index2")
HAnimJoint1437.setCenter([-0.2017,0.7363,-0.0248])
HAnimSegment1438 = x3d.HAnimSegment()
HAnimSegment1438.setName("r_carpal_middle_phalanx_2")
HAnimSegment1438.setDEF("hanim_r_carpal_middle_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
TouchSensor1439 = x3d.TouchSensor()
TouchSensor1439.setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2")

HAnimSegment1438.addChildren(TouchSensor1439)
Transform1440 = x3d.Transform()
Transform1440.setTranslation([-0.2017,0.7363,-0.0248])
Shape1441 = x3d.Shape()
Shape1441.setUSE("HAnimJointShape")

Transform1440.addChildren(Shape1441)

HAnimSegment1438.addChildren(Transform1440)
#HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
Shape1442 = x3d.Shape()
LineSet1443 = x3d.LineSet()
LineSet1443.setVertexCount([2])
Coordinate1444 = x3d.Coordinate()
Coordinate1444.setPoint([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])

LineSet1443.setCoord(Coordinate1444)
ColorRGBA1445 = x3d.ColorRGBA()
ColorRGBA1445.setUSE("HAnimSegmentLineColorRGBA")

LineSet1443.setColor(ColorRGBA1445)

Shape1442.setGeometry(LineSet1443)

HAnimSegment1438.addChildren(Shape1442)

HAnimJoint1437.addChildren(HAnimSegment1438)
HAnimJoint1446 = x3d.HAnimJoint()
HAnimJoint1446.setName("r_index3")
HAnimJoint1446.setDEF("hanim_r_index3")
HAnimJoint1446.setCenter([-0.2028,0.7139,-0.0236])
HAnimSegment1447 = x3d.HAnimSegment()
HAnimSegment1447.setName("r_carpal_distal_phalanx_2")
HAnimSegment1447.setDEF("hanim_r_carpal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
TouchSensor1448 = x3d.TouchSensor()
TouchSensor1448.setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2")

HAnimSegment1447.addChildren(TouchSensor1448)
Transform1449 = x3d.Transform()
Transform1449.setTranslation([-0.2028,0.7139,-0.0236])
Shape1450 = x3d.Shape()
Shape1450.setUSE("HAnimJointShape")

Transform1449.addChildren(Shape1450)

HAnimSegment1447.addChildren(Transform1449)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape1451 = x3d.Shape()
LineSet1452 = x3d.LineSet()
LineSet1452.setVertexCount([2])
Coordinate1453 = x3d.Coordinate()
Coordinate1453.setPoint([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])

LineSet1452.setCoord(Coordinate1453)
ColorRGBA1454 = x3d.ColorRGBA()
ColorRGBA1454.setUSE("HAnimSiteLineColorRGBA")

LineSet1452.setColor(ColorRGBA1454)

Shape1451.setGeometry(LineSet1452)

HAnimSegment1447.addChildren(Shape1451)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
Shape1455 = x3d.Shape()
LineSet1456 = x3d.LineSet()
LineSet1456.setVertexCount([2])
Coordinate1457 = x3d.Coordinate()
Coordinate1457.setPoint([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])

LineSet1456.setCoord(Coordinate1457)
ColorRGBA1458 = x3d.ColorRGBA()
ColorRGBA1458.setUSE("HAnimSiteLineColorRGBA")

LineSet1456.setColor(ColorRGBA1458)

Shape1455.setGeometry(LineSet1456)

HAnimSegment1447.addChildren(Shape1455)
HAnimSite1459 = x3d.HAnimSite()
HAnimSite1459.setName("r_index_distal_tip_pt")
HAnimSite1459.setDEF("hanim_r_index_distal_tip")
HAnimSite1459.setTranslation([-0.198,0.6883,-0.018])
#HAnimSite visualization shape
TouchSensor1460 = x3d.TouchSensor()
TouchSensor1460.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1459.addChildren(TouchSensor1460)
Shape1461 = x3d.Shape()
Shape1461.setUSE("HAnimSiteShape")

HAnimSite1459.addChildren(Shape1461)

HAnimSegment1447.addChildren(HAnimSite1459)
HAnimSite1462 = x3d.HAnimSite()
HAnimSite1462.setName("r_dactylion_pt_pt")
HAnimSite1462.setDEF("hanim_r_dactylion_pt")
HAnimSite1462.setTranslation([-0.1941,0.6772,-0.0423])
#HAnimSite visualization shape
TouchSensor1463 = x3d.TouchSensor()
TouchSensor1463.setDescription("HAnimSite r_dactylion_pt")

HAnimSite1462.addChildren(TouchSensor1463)
Shape1464 = x3d.Shape()
Shape1464.setUSE("HAnimSiteShape")

HAnimSite1462.addChildren(Shape1464)

HAnimSegment1447.addChildren(HAnimSite1462)

HAnimJoint1446.addChildren(HAnimSegment1447)

HAnimJoint1437.addChildren(HAnimJoint1446)

HAnimJoint1428.addChildren(HAnimJoint1437)

HAnimJoint1419.addChildren(HAnimJoint1428)

HAnimJoint1331.addChildren(HAnimJoint1419)
HAnimJoint1465 = x3d.HAnimJoint()
HAnimJoint1465.setName("r_middle0")
HAnimJoint1465.setDEF("hanim_r_middle0")
HAnimJoint1465.setCenter([-0.1987,0.8029,-0.053])
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.setName("r_metacarpal_3")
HAnimSegment1466.setDEF("hanim_r_metacarpal_3")
#Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
TouchSensor1467 = x3d.TouchSensor()
TouchSensor1467.setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3")

HAnimSegment1466.addChildren(TouchSensor1467)
Transform1468 = x3d.Transform()
Transform1468.setTranslation([-0.1987,0.8029,-0.053])
Shape1469 = x3d.Shape()
Shape1469.setUSE("HAnimJointShape")

Transform1468.addChildren(Shape1469)

HAnimSegment1466.addChildren(Transform1468)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
Shape1470 = x3d.Shape()
LineSet1471 = x3d.LineSet()
LineSet1471.setVertexCount([2])
Coordinate1472 = x3d.Coordinate()
Coordinate1472.setPoint([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])

LineSet1471.setCoord(Coordinate1472)
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.setUSE("HAnimSegmentLineColorRGBA")

LineSet1471.setColor(ColorRGBA1473)

Shape1470.setGeometry(LineSet1471)

HAnimSegment1466.addChildren(Shape1470)

HAnimJoint1465.addChildren(HAnimSegment1466)
HAnimJoint1474 = x3d.HAnimJoint()
HAnimJoint1474.setName("r_middle1")
HAnimJoint1474.setDEF("hanim_r_middle1")
HAnimJoint1474.setCenter([-0.1987,0.7818,-0.053])
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1475.setDEF("hanim_r_carpal_proximal_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
TouchSensor1476 = x3d.TouchSensor()
TouchSensor1476.setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3")

HAnimSegment1475.addChildren(TouchSensor1476)
Transform1477 = x3d.Transform()
Transform1477.setTranslation([-0.1987,0.7818,-0.053])
Shape1478 = x3d.Shape()
Shape1478.setUSE("HAnimJointShape")

Transform1477.addChildren(Shape1478)

HAnimSegment1475.addChildren(Transform1477)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
Shape1479 = x3d.Shape()
LineSet1480 = x3d.LineSet()
LineSet1480.setVertexCount([2])
Coordinate1481 = x3d.Coordinate()
Coordinate1481.setPoint([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])

LineSet1480.setCoord(Coordinate1481)
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.setUSE("HAnimSegmentLineColorRGBA")

LineSet1480.setColor(ColorRGBA1482)

Shape1479.setGeometry(LineSet1480)

HAnimSegment1475.addChildren(Shape1479)

HAnimJoint1474.addChildren(HAnimSegment1475)
HAnimJoint1483 = x3d.HAnimJoint()
HAnimJoint1483.setName("r_middle2")
HAnimJoint1483.setDEF("hanim_r_middle2")
HAnimJoint1483.setCenter([-0.2013,0.7273,-0.0503])
HAnimSegment1484 = x3d.HAnimSegment()
HAnimSegment1484.setName("r_carpal_middle_phalanx_3")
HAnimSegment1484.setDEF("hanim_r_carpal_middle_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
TouchSensor1485 = x3d.TouchSensor()
TouchSensor1485.setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3")

HAnimSegment1484.addChildren(TouchSensor1485)
Transform1486 = x3d.Transform()
Transform1486.setTranslation([-0.2013,0.7273,-0.0503])
Shape1487 = x3d.Shape()
Shape1487.setUSE("HAnimJointShape")

Transform1486.addChildren(Shape1487)

HAnimSegment1484.addChildren(Transform1486)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
Shape1488 = x3d.Shape()
LineSet1489 = x3d.LineSet()
LineSet1489.setVertexCount([2])
Coordinate1490 = x3d.Coordinate()
Coordinate1490.setPoint([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])

LineSet1489.setCoord(Coordinate1490)
ColorRGBA1491 = x3d.ColorRGBA()
ColorRGBA1491.setUSE("HAnimSegmentLineColorRGBA")

LineSet1489.setColor(ColorRGBA1491)

Shape1488.setGeometry(LineSet1489)

HAnimSegment1484.addChildren(Shape1488)

HAnimJoint1483.addChildren(HAnimSegment1484)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.setName("r_middle3")
HAnimJoint1492.setDEF("hanim_r_middle3")
HAnimJoint1492.setCenter([-0.2026,0.7011,-0.0494])
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.setName("r_carpal_distal_phalanx_3")
HAnimSegment1493.setDEF("hanim_r_carpal_distal_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
TouchSensor1494 = x3d.TouchSensor()
TouchSensor1494.setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3")

HAnimSegment1493.addChildren(TouchSensor1494)
Transform1495 = x3d.Transform()
Transform1495.setTranslation([-0.2026,0.7011,-0.0494])
Shape1496 = x3d.Shape()
Shape1496.setUSE("HAnimJointShape")

Transform1495.addChildren(Shape1496)

HAnimSegment1493.addChildren(Transform1495)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.setVertexCount([2])
Coordinate1499 = x3d.Coordinate()
Coordinate1499.setPoint([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])

LineSet1498.setCoord(Coordinate1499)
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.setUSE("HAnimSiteLineColorRGBA")

LineSet1498.setColor(ColorRGBA1500)

Shape1497.setGeometry(LineSet1498)

HAnimSegment1493.addChildren(Shape1497)
HAnimSite1501 = x3d.HAnimSite()
HAnimSite1501.setName("r_middle_distal_tip_pt")
HAnimSite1501.setDEF("hanim_r_middle_distal_tip")
HAnimSite1501.setTranslation([-0.1969,0.6758,-0.0427])
#HAnimSite visualization shape
TouchSensor1502 = x3d.TouchSensor()
TouchSensor1502.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1501.addChildren(TouchSensor1502)
Shape1503 = x3d.Shape()
Shape1503.setUSE("HAnimSiteShape")

HAnimSite1501.addChildren(Shape1503)

HAnimSegment1493.addChildren(HAnimSite1501)

HAnimJoint1492.addChildren(HAnimSegment1493)

HAnimJoint1483.addChildren(HAnimJoint1492)

HAnimJoint1474.addChildren(HAnimJoint1483)

HAnimJoint1465.addChildren(HAnimJoint1474)

HAnimJoint1331.addChildren(HAnimJoint1465)
HAnimJoint1504 = x3d.HAnimJoint()
HAnimJoint1504.setName("r_ring0")
HAnimJoint1504.setDEF("hanim_r_ring0")
HAnimJoint1504.setCenter([-0.1956,0.8019,-0.0794])
HAnimSegment1505 = x3d.HAnimSegment()
HAnimSegment1505.setName("r_metacarpal_4")
HAnimSegment1505.setDEF("hanim_r_metacarpal_4")
#Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
TouchSensor1506 = x3d.TouchSensor()
TouchSensor1506.setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4")

HAnimSegment1505.addChildren(TouchSensor1506)
Transform1507 = x3d.Transform()
Transform1507.setTranslation([-0.1956,0.8019,-0.0794])
Shape1508 = x3d.Shape()
Shape1508.setUSE("HAnimJointShape")

Transform1507.addChildren(Shape1508)

HAnimSegment1505.addChildren(Transform1507)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
Shape1509 = x3d.Shape()
LineSet1510 = x3d.LineSet()
LineSet1510.setVertexCount([2])
Coordinate1511 = x3d.Coordinate()
Coordinate1511.setPoint([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])

LineSet1510.setCoord(Coordinate1511)
ColorRGBA1512 = x3d.ColorRGBA()
ColorRGBA1512.setUSE("HAnimSegmentLineColorRGBA")

LineSet1510.setColor(ColorRGBA1512)

Shape1509.setGeometry(LineSet1510)

HAnimSegment1505.addChildren(Shape1509)

HAnimJoint1504.addChildren(HAnimSegment1505)
HAnimJoint1513 = x3d.HAnimJoint()
HAnimJoint1513.setName("r_ring1")
HAnimJoint1513.setDEF("hanim_r_ring1")
HAnimJoint1513.setCenter([-0.1956,0.7815,-0.0794])
HAnimSegment1514 = x3d.HAnimSegment()
HAnimSegment1514.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1514.setDEF("hanim_r_carpal_proximal_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
TouchSensor1515 = x3d.TouchSensor()
TouchSensor1515.setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4")

HAnimSegment1514.addChildren(TouchSensor1515)
Transform1516 = x3d.Transform()
Transform1516.setTranslation([-0.1956,0.7815,-0.0794])
Shape1517 = x3d.Shape()
Shape1517.setUSE("HAnimJointShape")

Transform1516.addChildren(Shape1517)

HAnimSegment1514.addChildren(Transform1516)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
Shape1518 = x3d.Shape()
LineSet1519 = x3d.LineSet()
LineSet1519.setVertexCount([2])
Coordinate1520 = x3d.Coordinate()
Coordinate1520.setPoint([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])

LineSet1519.setCoord(Coordinate1520)
ColorRGBA1521 = x3d.ColorRGBA()
ColorRGBA1521.setUSE("HAnimSegmentLineColorRGBA")

LineSet1519.setColor(ColorRGBA1521)

Shape1518.setGeometry(LineSet1519)

HAnimSegment1514.addChildren(Shape1518)

HAnimJoint1513.addChildren(HAnimSegment1514)
HAnimJoint1522 = x3d.HAnimJoint()
HAnimJoint1522.setName("r_ring2")
HAnimJoint1522.setDEF("hanim_r_ring2")
HAnimJoint1522.setCenter([-0.1973,0.7287,-0.0777])
HAnimSegment1523 = x3d.HAnimSegment()
HAnimSegment1523.setName("r_carpal_middle_phalanx_4")
HAnimSegment1523.setDEF("hanim_r_carpal_middle_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
TouchSensor1524 = x3d.TouchSensor()
TouchSensor1524.setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4")

HAnimSegment1523.addChildren(TouchSensor1524)
Transform1525 = x3d.Transform()
Transform1525.setTranslation([-0.1973,0.7287,-0.0777])
Shape1526 = x3d.Shape()
Shape1526.setUSE("HAnimJointShape")

Transform1525.addChildren(Shape1526)

HAnimSegment1523.addChildren(Transform1525)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
Shape1527 = x3d.Shape()
LineSet1528 = x3d.LineSet()
LineSet1528.setVertexCount([2])
Coordinate1529 = x3d.Coordinate()
Coordinate1529.setPoint([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])

LineSet1528.setCoord(Coordinate1529)
ColorRGBA1530 = x3d.ColorRGBA()
ColorRGBA1530.setUSE("HAnimSegmentLineColorRGBA")

LineSet1528.setColor(ColorRGBA1530)

Shape1527.setGeometry(LineSet1528)

HAnimSegment1523.addChildren(Shape1527)

HAnimJoint1522.addChildren(HAnimSegment1523)
HAnimJoint1531 = x3d.HAnimJoint()
HAnimJoint1531.setName("r_ring3")
HAnimJoint1531.setDEF("hanim_r_ring3")
HAnimJoint1531.setCenter([-0.1983,0.7045,-0.0767])
HAnimSegment1532 = x3d.HAnimSegment()
HAnimSegment1532.setName("r_carpal_distal_phalanx_4")
HAnimSegment1532.setDEF("hanim_r_carpal_distal_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
TouchSensor1533 = x3d.TouchSensor()
TouchSensor1533.setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4")

HAnimSegment1532.addChildren(TouchSensor1533)
Transform1534 = x3d.Transform()
Transform1534.setTranslation([-0.1983,0.7045,-0.0767])
Shape1535 = x3d.Shape()
Shape1535.setUSE("HAnimJointShape")

Transform1534.addChildren(Shape1535)

HAnimSegment1532.addChildren(Transform1534)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape1536 = x3d.Shape()
LineSet1537 = x3d.LineSet()
LineSet1537.setVertexCount([2])
Coordinate1538 = x3d.Coordinate()
Coordinate1538.setPoint([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])

LineSet1537.setCoord(Coordinate1538)
ColorRGBA1539 = x3d.ColorRGBA()
ColorRGBA1539.setUSE("HAnimSiteLineColorRGBA")

LineSet1537.setColor(ColorRGBA1539)

Shape1536.setGeometry(LineSet1537)

HAnimSegment1532.addChildren(Shape1536)
HAnimSite1540 = x3d.HAnimSite()
HAnimSite1540.setName("r_ring_distal_tip_pt")
HAnimSite1540.setDEF("hanim_r_ring_distal_tip")
HAnimSite1540.setTranslation([-0.1934,0.6778,-0.0693])
#HAnimSite visualization shape
TouchSensor1541 = x3d.TouchSensor()
TouchSensor1541.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1540.addChildren(TouchSensor1541)
Shape1542 = x3d.Shape()
Shape1542.setUSE("HAnimSiteShape")

HAnimSite1540.addChildren(Shape1542)

HAnimSegment1532.addChildren(HAnimSite1540)

HAnimJoint1531.addChildren(HAnimSegment1532)

HAnimJoint1522.addChildren(HAnimJoint1531)

HAnimJoint1513.addChildren(HAnimJoint1522)

HAnimJoint1504.addChildren(HAnimJoint1513)

HAnimJoint1331.addChildren(HAnimJoint1504)
HAnimJoint1543 = x3d.HAnimJoint()
HAnimJoint1543.setName("r_pinky0")
HAnimJoint1543.setDEF("hanim_r_pinky0")
HAnimJoint1543.setCenter([-0.1925,0.8066,-0.1036])
HAnimSegment1544 = x3d.HAnimSegment()
HAnimSegment1544.setName("r_metacarpal_5")
HAnimSegment1544.setDEF("hanim_r_metacarpal_5")
#Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
TouchSensor1545 = x3d.TouchSensor()
TouchSensor1545.setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5")

HAnimSegment1544.addChildren(TouchSensor1545)
Transform1546 = x3d.Transform()
Transform1546.setTranslation([-0.1925,0.8066,-0.1036])
Shape1547 = x3d.Shape()
Shape1547.setUSE("HAnimJointShape")

Transform1546.addChildren(Shape1547)

HAnimSegment1544.addChildren(Transform1546)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
Shape1548 = x3d.Shape()
LineSet1549 = x3d.LineSet()
LineSet1549.setVertexCount([2])
Coordinate1550 = x3d.Coordinate()
Coordinate1550.setPoint([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])

LineSet1549.setCoord(Coordinate1550)
ColorRGBA1551 = x3d.ColorRGBA()
ColorRGBA1551.setUSE("HAnimSegmentLineColorRGBA")

LineSet1549.setColor(ColorRGBA1551)

Shape1548.setGeometry(LineSet1549)

HAnimSegment1544.addChildren(Shape1548)

HAnimJoint1543.addChildren(HAnimSegment1544)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.setName("r_pinky1")
HAnimJoint1552.setDEF("hanim_r_pinky1")
HAnimJoint1552.setCenter([-0.1925,0.7866,-0.1036])
HAnimSegment1553 = x3d.HAnimSegment()
HAnimSegment1553.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1553.setDEF("hanim_r_carpal_proximal_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
TouchSensor1554 = x3d.TouchSensor()
TouchSensor1554.setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5")

HAnimSegment1553.addChildren(TouchSensor1554)
Transform1555 = x3d.Transform()
Transform1555.setTranslation([-0.1925,0.7866,-0.1036])
Shape1556 = x3d.Shape()
Shape1556.setUSE("HAnimJointShape")

Transform1555.addChildren(Shape1556)

HAnimSegment1553.addChildren(Transform1555)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
Shape1557 = x3d.Shape()
LineSet1558 = x3d.LineSet()
LineSet1558.setVertexCount([2])
Coordinate1559 = x3d.Coordinate()
Coordinate1559.setPoint([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])

LineSet1558.setCoord(Coordinate1559)
ColorRGBA1560 = x3d.ColorRGBA()
ColorRGBA1560.setUSE("HAnimSegmentLineColorRGBA")

LineSet1558.setColor(ColorRGBA1560)

Shape1557.setGeometry(LineSet1558)

HAnimSegment1553.addChildren(Shape1557)

HAnimJoint1552.addChildren(HAnimSegment1553)
HAnimJoint1561 = x3d.HAnimJoint()
HAnimJoint1561.setName("r_pinky2")
HAnimJoint1561.setDEF("hanim_r_pinky2")
HAnimJoint1561.setCenter([-0.1938,0.7452,-0.1024])
HAnimSegment1562 = x3d.HAnimSegment()
HAnimSegment1562.setName("r_carpal_middle_phalanx_5")
HAnimSegment1562.setDEF("hanim_r_carpal_middle_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
TouchSensor1563 = x3d.TouchSensor()
TouchSensor1563.setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5")

HAnimSegment1562.addChildren(TouchSensor1563)
Transform1564 = x3d.Transform()
Transform1564.setTranslation([-0.1938,0.7452,-0.1024])
Shape1565 = x3d.Shape()
Shape1565.setUSE("HAnimJointShape")

Transform1564.addChildren(Shape1565)

HAnimSegment1562.addChildren(Transform1564)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
Shape1566 = x3d.Shape()
LineSet1567 = x3d.LineSet()
LineSet1567.setVertexCount([2])
Coordinate1568 = x3d.Coordinate()
Coordinate1568.setPoint([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])

LineSet1567.setCoord(Coordinate1568)
ColorRGBA1569 = x3d.ColorRGBA()
ColorRGBA1569.setUSE("HAnimSegmentLineColorRGBA")

LineSet1567.setColor(ColorRGBA1569)

Shape1566.setGeometry(LineSet1567)

HAnimSegment1562.addChildren(Shape1566)

HAnimJoint1561.addChildren(HAnimSegment1562)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.setName("r_pinky3")
HAnimJoint1570.setDEF("hanim_r_pinky3")
HAnimJoint1570.setCenter([-0.1948,0.7277,-0.1017])
HAnimSegment1571 = x3d.HAnimSegment()
HAnimSegment1571.setName("r_carpal_distal_phalanx_5")
HAnimSegment1571.setDEF("hanim_r_carpal_distal_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
TouchSensor1572 = x3d.TouchSensor()
TouchSensor1572.setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5")

HAnimSegment1571.addChildren(TouchSensor1572)
Transform1573 = x3d.Transform()
Transform1573.setTranslation([-0.1948,0.7277,-0.1017])
Shape1574 = x3d.Shape()
Shape1574.setUSE("HAnimJointShape")

Transform1573.addChildren(Shape1574)

HAnimSegment1571.addChildren(Transform1573)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape1575 = x3d.Shape()
LineSet1576 = x3d.LineSet()
LineSet1576.setVertexCount([2])
Coordinate1577 = x3d.Coordinate()
Coordinate1577.setPoint([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])

LineSet1576.setCoord(Coordinate1577)
ColorRGBA1578 = x3d.ColorRGBA()
ColorRGBA1578.setUSE("HAnimSiteLineColorRGBA")

LineSet1576.setColor(ColorRGBA1578)

Shape1575.setGeometry(LineSet1576)

HAnimSegment1571.addChildren(Shape1575)
HAnimSite1579 = x3d.HAnimSite()
HAnimSite1579.setName("r_pinky_distal_tip_pt")
HAnimSite1579.setDEF("hanim_r_pinky_distal_tip")
HAnimSite1579.setTranslation([-0.1938,0.7035,-0.0949])
#HAnimSite visualization shape
TouchSensor1580 = x3d.TouchSensor()
TouchSensor1580.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1579.addChildren(TouchSensor1580)
Shape1581 = x3d.Shape()
Shape1581.setUSE("HAnimSiteShape")

HAnimSite1579.addChildren(Shape1581)

HAnimSegment1571.addChildren(HAnimSite1579)

HAnimJoint1570.addChildren(HAnimSegment1571)

HAnimJoint1561.addChildren(HAnimJoint1570)

HAnimJoint1552.addChildren(HAnimJoint1561)

HAnimJoint1543.addChildren(HAnimJoint1552)

HAnimJoint1331.addChildren(HAnimJoint1543)

HAnimJoint1294.addChildren(HAnimJoint1331)

HAnimJoint1278.addChildren(HAnimJoint1294)

HAnimJoint1269.addChildren(HAnimJoint1278)

HAnimJoint1232.addChildren(HAnimJoint1269)

HAnimJoint594.addChildren(HAnimJoint1232)

HAnimJoint585.addChildren(HAnimJoint594)

HAnimJoint576.addChildren(HAnimJoint585)

HAnimJoint567.addChildren(HAnimJoint576)

HAnimJoint558.addChildren(HAnimJoint567)

HAnimJoint549.addChildren(HAnimJoint558)

HAnimJoint540.addChildren(HAnimJoint549)

HAnimJoint531.addChildren(HAnimJoint540)

HAnimJoint508.addChildren(HAnimJoint531)

HAnimJoint492.addChildren(HAnimJoint508)

HAnimJoint483.addChildren(HAnimJoint492)

HAnimJoint474.addChildren(HAnimJoint483)

HAnimJoint465.addChildren(HAnimJoint474)

HAnimJoint435.addChildren(HAnimJoint465)

HAnimJoint426.addChildren(HAnimJoint435)

HAnimJoint417.addChildren(HAnimJoint426)

HAnimJoint394.addChildren(HAnimJoint417)

HAnimJoint44.addChildren(HAnimJoint394)

HAnimHumanoid43.setSkeleton(HAnimJoint44)
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
HAnimSite1582 = x3d.HAnimSite()
HAnimSite1582.setName("l_inclined_view")
HAnimSite1582.setDEF("hanim_l_inclined_view")
HAnimSite1582.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite1582.setTranslation([1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1583 = x3d.TouchSensor()
TouchSensor1583.setDescription("HAnimSite l_inclined_view")

HAnimSite1582.addChildren(TouchSensor1583)
Shape1584 = x3d.Shape()
Shape1584.setUSE("HAnimSiteShape")

HAnimSite1582.addChildren(Shape1584)
Viewpoint1585 = x3d.Viewpoint()
Viewpoint1585.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1585.setDescription("left inclined")
Viewpoint1585.setPosition([0,0,0])

HAnimSite1582.addChildren(Viewpoint1585)
#HAnimSite/Viewpoint visualization shape
Anchor1586 = x3d.Anchor()
Anchor1586.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1586.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1587 = x3d.LOD()
LOD1587.setForceTransitions(True)
LOD1587.setRange([0.04])
WorldInfo1588 = x3d.WorldInfo()
WorldInfo1588.setInfo(["hide diamond when close"])

LOD1587.addChildren(WorldInfo1588)
Shape1589 = x3d.Shape()
Shape1589.setUSE("HAnimSiteViewpointShape")

LOD1587.addChildren(Shape1589)

Anchor1586.addChildren(LOD1587)

HAnimSite1582.addChildren(Anchor1586)

HAnimHumanoid43.addViewpoints(HAnimSite1582)
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.setName("r_inclined_view")
HAnimSite1590.setDEF("hanim_r_inclined_view")
HAnimSite1590.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite1590.setTranslation([-1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.setDescription("HAnimSite r_inclined_view")

HAnimSite1590.addChildren(TouchSensor1591)
Shape1592 = x3d.Shape()
Shape1592.setUSE("HAnimSiteShape")

HAnimSite1590.addChildren(Shape1592)
Viewpoint1593 = x3d.Viewpoint()
Viewpoint1593.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1593.setCenterOfRotation([0,0.9,0])
Viewpoint1593.setDescription("right inclined")
Viewpoint1593.setPosition([0,0,0])

HAnimSite1590.addChildren(Viewpoint1593)
#HAnimSite/Viewpoint visualization shape
Anchor1594 = x3d.Anchor()
Anchor1594.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1594.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1595 = x3d.LOD()
LOD1595.setForceTransitions(True)
LOD1595.setRange([0.04])
WorldInfo1596 = x3d.WorldInfo()
WorldInfo1596.setInfo(["hide diamond when close"])

LOD1595.addChildren(WorldInfo1596)
Shape1597 = x3d.Shape()
Shape1597.setUSE("HAnimSiteViewpointShape")

LOD1595.addChildren(Shape1597)

Anchor1594.addChildren(LOD1595)

HAnimSite1590.addChildren(Anchor1594)

HAnimHumanoid43.addViewpoints(HAnimSite1590)
HAnimSite1598 = x3d.HAnimSite()
HAnimSite1598.setName("front_view")
HAnimSite1598.setDEF("hanim_front_view")
HAnimSite1598.setTranslation([0,0.85,2.58])
#HAnimSite visualization shape
TouchSensor1599 = x3d.TouchSensor()
TouchSensor1599.setDescription("HAnimSite front_view")

HAnimSite1598.addChildren(TouchSensor1599)
Shape1600 = x3d.Shape()
Shape1600.setUSE("HAnimSiteShape")

HAnimSite1598.addChildren(Shape1600)
Viewpoint1601 = x3d.Viewpoint()
Viewpoint1601.setDEF("hanim_front_viewpoint")
Viewpoint1601.setCenterOfRotation([0,0.9,0])
Viewpoint1601.setDescription("front")
Viewpoint1601.setPosition([0,0,0])

HAnimSite1598.addChildren(Viewpoint1601)
#HAnimSite/Viewpoint visualization shape
Anchor1602 = x3d.Anchor()
Anchor1602.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1602.setUrl(["#hanim_front_viewpoint"])
LOD1603 = x3d.LOD()
LOD1603.setForceTransitions(True)
LOD1603.setRange([0.04])
WorldInfo1604 = x3d.WorldInfo()
WorldInfo1604.setInfo(["hide diamond when close"])

LOD1603.addChildren(WorldInfo1604)
Shape1605 = x3d.Shape()
Shape1605.setUSE("HAnimSiteViewpointShape")

LOD1603.addChildren(Shape1605)

Anchor1602.addChildren(LOD1603)

HAnimSite1598.addChildren(Anchor1602)

HAnimHumanoid43.addViewpoints(HAnimSite1598)
HAnimSite1606 = x3d.HAnimSite()
HAnimSite1606.setName("back_view")
HAnimSite1606.setDEF("hanim_back_view")
HAnimSite1606.setRotation([0,1,0,3.14])
HAnimSite1606.setTranslation([0,0.85,-2.58])
#HAnimSite visualization shape
TouchSensor1607 = x3d.TouchSensor()
TouchSensor1607.setDescription("HAnimSite back_view")

HAnimSite1606.addChildren(TouchSensor1607)
Shape1608 = x3d.Shape()
Shape1608.setUSE("HAnimSiteShape")

HAnimSite1606.addChildren(Shape1608)
Viewpoint1609 = x3d.Viewpoint()
Viewpoint1609.setDEF("hanim_back_viewpoint")
Viewpoint1609.setCenterOfRotation([0,0.9,0])
Viewpoint1609.setDescription("back")
Viewpoint1609.setPosition([0,0,0])

HAnimSite1606.addChildren(Viewpoint1609)
#HAnimSite/Viewpoint visualization shape
Anchor1610 = x3d.Anchor()
Anchor1610.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1610.setUrl(["#hanim_back_viewpoint"])
LOD1611 = x3d.LOD()
LOD1611.setForceTransitions(True)
LOD1611.setRange([0.04])
WorldInfo1612 = x3d.WorldInfo()
WorldInfo1612.setInfo(["hide diamond when close"])

LOD1611.addChildren(WorldInfo1612)
Shape1613 = x3d.Shape()
Shape1613.setUSE("HAnimSiteViewpointShape")

LOD1611.addChildren(Shape1613)

Anchor1610.addChildren(LOD1611)

HAnimSite1606.addChildren(Anchor1610)

HAnimHumanoid43.addViewpoints(HAnimSite1606)
HAnimSite1614 = x3d.HAnimSite()
HAnimSite1614.setName("l_side_view")
HAnimSite1614.setDEF("hanim_l_side_view")
HAnimSite1614.setRotation([0,1,0,1.5708])
HAnimSite1614.setTranslation([2.6,0.854,0])
#HAnimSite visualization shape
TouchSensor1615 = x3d.TouchSensor()
TouchSensor1615.setDescription("HAnimSite l_side_view")

HAnimSite1614.addChildren(TouchSensor1615)
Shape1616 = x3d.Shape()
Shape1616.setUSE("HAnimSiteShape")

HAnimSite1614.addChildren(Shape1616)
Viewpoint1617 = x3d.Viewpoint()
Viewpoint1617.setDEF("hanim_l_side_viewpoint")
Viewpoint1617.setCenterOfRotation([0,0.9,0])
Viewpoint1617.setDescription("left side")
Viewpoint1617.setPosition([0,0,0])

HAnimSite1614.addChildren(Viewpoint1617)
#HAnimSite/Viewpoint visualization shape
Anchor1618 = x3d.Anchor()
Anchor1618.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1618.setUrl(["#hanim_l_side_viewpoint"])
LOD1619 = x3d.LOD()
LOD1619.setForceTransitions(True)
LOD1619.setRange([0.04])
WorldInfo1620 = x3d.WorldInfo()
WorldInfo1620.setInfo(["hide diamond when close"])

LOD1619.addChildren(WorldInfo1620)
Shape1621 = x3d.Shape()
Shape1621.setUSE("HAnimSiteViewpointShape")

LOD1619.addChildren(Shape1621)

Anchor1618.addChildren(LOD1619)

HAnimSite1614.addChildren(Anchor1618)

HAnimHumanoid43.addViewpoints(HAnimSite1614)
HAnimSite1622 = x3d.HAnimSite()
HAnimSite1622.setName("Top_view")
HAnimSite1622.setDEF("hanim_Top_view")
HAnimSite1622.setRotation([1,0,0,-1.57])
HAnimSite1622.setTranslation([0,3.5,0])
#HAnimSite visualization shape
TouchSensor1623 = x3d.TouchSensor()
TouchSensor1623.setDescription("HAnimSite Top_view")

HAnimSite1622.addChildren(TouchSensor1623)
Shape1624 = x3d.Shape()
Shape1624.setUSE("HAnimSiteShape")

HAnimSite1622.addChildren(Shape1624)
Viewpoint1625 = x3d.Viewpoint()
Viewpoint1625.setDEF("hanim_Top_viewpoint")
Viewpoint1625.setCenterOfRotation([0,0.9,0])
Viewpoint1625.setDescription("Top")
Viewpoint1625.setPosition([0,0,0])

HAnimSite1622.addChildren(Viewpoint1625)
#HAnimSite/Viewpoint visualization shape
Anchor1626 = x3d.Anchor()
Anchor1626.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1626.setUrl(["#hanim_Top_viewpoint"])
LOD1627 = x3d.LOD()
LOD1627.setForceTransitions(True)
LOD1627.setRange([0.04])
WorldInfo1628 = x3d.WorldInfo()
WorldInfo1628.setInfo(["hide diamond when close"])

LOD1627.addChildren(WorldInfo1628)
Shape1629 = x3d.Shape()
Shape1629.setUSE("HAnimSiteViewpointShape")

LOD1627.addChildren(Shape1629)

Anchor1626.addChildren(LOD1627)

HAnimSite1622.addChildren(Anchor1626)

HAnimHumanoid43.addViewpoints(HAnimSite1622)
HAnimSite1630 = x3d.HAnimSite()
HAnimSite1630.setName("front_close_view")
HAnimSite1630.setDEF("hanim_front_close_view")
HAnimSite1630.setTranslation([0,0.854,1.575])
#HAnimSite visualization shape
TouchSensor1631 = x3d.TouchSensor()
TouchSensor1631.setDescription("HAnimSite front_close_view")

HAnimSite1630.addChildren(TouchSensor1631)
Shape1632 = x3d.Shape()
Shape1632.setUSE("HAnimSiteShape")

HAnimSite1630.addChildren(Shape1632)
Viewpoint1633 = x3d.Viewpoint()
Viewpoint1633.setDEF("hanim_front_close_viewpoint")
Viewpoint1633.setCenterOfRotation([0,0,1.575])
Viewpoint1633.setDescription("front close")
Viewpoint1633.setPosition([0,0,0])

HAnimSite1630.addChildren(Viewpoint1633)
#HAnimSite/Viewpoint visualization shape
Anchor1634 = x3d.Anchor()
Anchor1634.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1634.setUrl(["#hanim_front_close_viewpoint"])
LOD1635 = x3d.LOD()
LOD1635.setForceTransitions(True)
LOD1635.setRange([0.04])
WorldInfo1636 = x3d.WorldInfo()
WorldInfo1636.setInfo(["hide diamond when close"])

LOD1635.addChildren(WorldInfo1636)
Shape1637 = x3d.Shape()
Shape1637.setUSE("HAnimSiteViewpointShape")

LOD1635.addChildren(Shape1637)

Anchor1634.addChildren(LOD1635)

HAnimSite1630.addChildren(Anchor1634)

HAnimHumanoid43.addViewpoints(HAnimSite1630)
HAnimSite1638 = x3d.HAnimSite()
HAnimSite1638.setName("side_close_view")
HAnimSite1638.setDEF("hanim_side_close_view")
HAnimSite1638.setRotation([0,1,0,1.5708])
HAnimSite1638.setTranslation([1.56,0.854,0])
#HAnimSite visualization shape
TouchSensor1639 = x3d.TouchSensor()
TouchSensor1639.setDescription("HAnimSite side_close_view")

HAnimSite1638.addChildren(TouchSensor1639)
Shape1640 = x3d.Shape()
Shape1640.setUSE("HAnimSiteShape")

HAnimSite1638.addChildren(Shape1640)
Viewpoint1641 = x3d.Viewpoint()
Viewpoint1641.setDEF("hanim_side_close_viewpoint")
Viewpoint1641.setCenterOfRotation([1.6,0,0])
Viewpoint1641.setDescription("side close")
Viewpoint1641.setPosition([0,0,0])

HAnimSite1638.addChildren(Viewpoint1641)
#HAnimSite/Viewpoint visualization shape
Anchor1642 = x3d.Anchor()
Anchor1642.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1642.setUrl(["#hanim_side_close_viewpoint"])
LOD1643 = x3d.LOD()
LOD1643.setForceTransitions(True)
LOD1643.setRange([0.04])
WorldInfo1644 = x3d.WorldInfo()
WorldInfo1644.setInfo(["hide diamond when close"])

LOD1643.addChildren(WorldInfo1644)
Shape1645 = x3d.Shape()
Shape1645.setUSE("HAnimSiteViewpointShape")

LOD1643.addChildren(Shape1645)

Anchor1642.addChildren(LOD1643)

HAnimSite1638.addChildren(Anchor1642)

HAnimHumanoid43.addViewpoints(HAnimSite1638)
HAnimSite1646 = x3d.HAnimSite()
HAnimSite1646.setName("head_front_close_view")
HAnimSite1646.setDEF("hanim_head_front_close_view")
HAnimSite1646.setTranslation([0,1.5,1])
#HAnimSite visualization shape
TouchSensor1647 = x3d.TouchSensor()
TouchSensor1647.setDescription("HAnimSite head_front_close_view")

HAnimSite1646.addChildren(TouchSensor1647)
Shape1648 = x3d.Shape()
Shape1648.setUSE("HAnimSiteShape")

HAnimSite1646.addChildren(Shape1648)
Viewpoint1649 = x3d.Viewpoint()
Viewpoint1649.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1649.setCenterOfRotation([0,0,1])
Viewpoint1649.setDescription("head front close")
Viewpoint1649.setPosition([0,0,0])

HAnimSite1646.addChildren(Viewpoint1649)
#HAnimSite/Viewpoint visualization shape
Anchor1650 = x3d.Anchor()
Anchor1650.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1650.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1651 = x3d.LOD()
LOD1651.setForceTransitions(True)
LOD1651.setRange([0.04])
WorldInfo1652 = x3d.WorldInfo()
WorldInfo1652.setInfo(["hide diamond when close"])

LOD1651.addChildren(WorldInfo1652)
Shape1653 = x3d.Shape()
Shape1653.setUSE("HAnimSiteViewpointShape")

LOD1651.addChildren(Shape1653)

Anchor1650.addChildren(LOD1651)

HAnimSite1646.addChildren(Anchor1650)

HAnimHumanoid43.addViewpoints(HAnimSite1646)
HAnimSite1654 = x3d.HAnimSite()
HAnimSite1654.setName("chest_front_close_view")
HAnimSite1654.setDEF("hanim_chest_front_close_view")
HAnimSite1654.setTranslation([0,1.2,1])
#HAnimSite visualization shape
TouchSensor1655 = x3d.TouchSensor()
TouchSensor1655.setDescription("HAnimSite chest_front_close_view")

HAnimSite1654.addChildren(TouchSensor1655)
Shape1656 = x3d.Shape()
Shape1656.setUSE("HAnimSiteShape")

HAnimSite1654.addChildren(Shape1656)
Viewpoint1657 = x3d.Viewpoint()
Viewpoint1657.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1657.setCenterOfRotation([0,0,1])
Viewpoint1657.setDescription("chest front close")
Viewpoint1657.setPosition([0,0,0])

HAnimSite1654.addChildren(Viewpoint1657)
#HAnimSite/Viewpoint visualization shape
Anchor1658 = x3d.Anchor()
Anchor1658.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1658.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1659 = x3d.LOD()
LOD1659.setForceTransitions(True)
LOD1659.setRange([0.04])
WorldInfo1660 = x3d.WorldInfo()
WorldInfo1660.setInfo(["hide diamond when close"])

LOD1659.addChildren(WorldInfo1660)
Shape1661 = x3d.Shape()
Shape1661.setUSE("HAnimSiteViewpointShape")

LOD1659.addChildren(Shape1661)

Anchor1658.addChildren(LOD1659)

HAnimSite1654.addChildren(Anchor1658)

HAnimHumanoid43.addViewpoints(HAnimSite1654)
HAnimSite1662 = x3d.HAnimSite()
HAnimSite1662.setName("pelvis_front_close_view")
HAnimSite1662.setDEF("hanim_pelvis_front_close_view")
HAnimSite1662.setTranslation([0,0.8,1])
#HAnimSite visualization shape
TouchSensor1663 = x3d.TouchSensor()
TouchSensor1663.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1662.addChildren(TouchSensor1663)
Shape1664 = x3d.Shape()
Shape1664.setUSE("HAnimSiteShape")

HAnimSite1662.addChildren(Shape1664)
Viewpoint1665 = x3d.Viewpoint()
Viewpoint1665.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1665.setCenterOfRotation([0,0,1])
Viewpoint1665.setDescription("pelvis front close")
Viewpoint1665.setPosition([0,0,0])

HAnimSite1662.addChildren(Viewpoint1665)
#HAnimSite/Viewpoint visualization shape
Anchor1666 = x3d.Anchor()
Anchor1666.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1666.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1667 = x3d.LOD()
LOD1667.setForceTransitions(True)
LOD1667.setRange([0.04])
WorldInfo1668 = x3d.WorldInfo()
WorldInfo1668.setInfo(["hide diamond when close"])

LOD1667.addChildren(WorldInfo1668)
Shape1669 = x3d.Shape()
Shape1669.setUSE("HAnimSiteViewpointShape")

LOD1667.addChildren(Shape1669)

Anchor1666.addChildren(LOD1667)

HAnimSite1662.addChildren(Anchor1666)

HAnimHumanoid43.addViewpoints(HAnimSite1662)
HAnimSite1670 = x3d.HAnimSite()
HAnimSite1670.setName("knees_front_close_view")
HAnimSite1670.setDEF("hanim_knees_front_close_view")
HAnimSite1670.setTranslation([0,0.4,1])
#HAnimSite visualization shape
TouchSensor1671 = x3d.TouchSensor()
TouchSensor1671.setDescription("HAnimSite knees_front_close_view")

HAnimSite1670.addChildren(TouchSensor1671)
Shape1672 = x3d.Shape()
Shape1672.setUSE("HAnimSiteShape")

HAnimSite1670.addChildren(Shape1672)
Viewpoint1673 = x3d.Viewpoint()
Viewpoint1673.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1673.setCenterOfRotation([0,0.4,0])
Viewpoint1673.setDescription("knees front close")
Viewpoint1673.setPosition([0,0,0])

HAnimSite1670.addChildren(Viewpoint1673)
#HAnimSite/Viewpoint visualization shape
Anchor1674 = x3d.Anchor()
Anchor1674.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1674.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1675 = x3d.LOD()
LOD1675.setForceTransitions(True)
LOD1675.setRange([0.04])
WorldInfo1676 = x3d.WorldInfo()
WorldInfo1676.setInfo(["hide diamond when close"])

LOD1675.addChildren(WorldInfo1676)
Shape1677 = x3d.Shape()
Shape1677.setUSE("HAnimSiteViewpointShape")

LOD1675.addChildren(Shape1677)

Anchor1674.addChildren(LOD1675)

HAnimSite1670.addChildren(Anchor1674)

HAnimHumanoid43.addViewpoints(HAnimSite1670)
HAnimSite1678 = x3d.HAnimSite()
HAnimSite1678.setName("feet_front_close_view")
HAnimSite1678.setDEF("hanim_feet_front_close_view")
HAnimSite1678.setTranslation([0,0,1])
#HAnimSite visualization shape
TouchSensor1679 = x3d.TouchSensor()
TouchSensor1679.setDescription("HAnimSite feet_front_close_view")

HAnimSite1678.addChildren(TouchSensor1679)
Shape1680 = x3d.Shape()
Shape1680.setUSE("HAnimSiteShape")

HAnimSite1678.addChildren(Shape1680)
Viewpoint1681 = x3d.Viewpoint()
Viewpoint1681.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1681.setDescription("feet front close")
Viewpoint1681.setPosition([0,0,0])

HAnimSite1678.addChildren(Viewpoint1681)
#HAnimSite/Viewpoint visualization shape
Anchor1682 = x3d.Anchor()
Anchor1682.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1682.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1683 = x3d.LOD()
LOD1683.setForceTransitions(True)
LOD1683.setRange([0.04])
WorldInfo1684 = x3d.WorldInfo()
WorldInfo1684.setInfo(["hide diamond when close"])

LOD1683.addChildren(WorldInfo1684)
Shape1685 = x3d.Shape()
Shape1685.setUSE("HAnimSiteViewpointShape")

LOD1683.addChildren(Shape1685)

Anchor1682.addChildren(LOD1683)

HAnimSite1678.addChildren(Anchor1682)

HAnimHumanoid43.addViewpoints(HAnimSite1678)
HAnimSite1686 = x3d.HAnimSite()
HAnimSite1686.setName("eye_level_view")
HAnimSite1686.setDEF("hanim_eye_level_view")
HAnimSite1686.setTranslation([0,1.6332,0.0502])
#HAnimSite visualization shape
TouchSensor1687 = x3d.TouchSensor()
TouchSensor1687.setDescription("HAnimSite eye_level_view")

HAnimSite1686.addChildren(TouchSensor1687)
Shape1688 = x3d.Shape()
Shape1688.setUSE("HAnimSiteShape")

HAnimSite1686.addChildren(Shape1688)
Viewpoint1689 = x3d.Viewpoint()
Viewpoint1689.setDEF("hanim_eye_level_viewpoint")
Viewpoint1689.setDescription("eye level looking forward")
Viewpoint1689.setOrientation([0,1,0,3.141593])
Viewpoint1689.setPosition([0,0,0])

HAnimSite1686.addChildren(Viewpoint1689)
#HAnimSite/Viewpoint visualization shape
Anchor1690 = x3d.Anchor()
Anchor1690.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1690.setUrl(["#hanim_eye_level_viewpoint"])
LOD1691 = x3d.LOD()
LOD1691.setForceTransitions(True)
LOD1691.setRange([0.04])
WorldInfo1692 = x3d.WorldInfo()
WorldInfo1692.setInfo(["hide diamond when close"])

LOD1691.addChildren(WorldInfo1692)
Shape1693 = x3d.Shape()
Shape1693.setUSE("HAnimSiteViewpointShape")

LOD1691.addChildren(Shape1693)

Anchor1690.addChildren(LOD1691)

HAnimSite1686.addChildren(Anchor1690)

HAnimHumanoid43.addViewpoints(HAnimSite1686)
HAnimSite1694 = x3d.HAnimSite()
HAnimSite1694.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite1694)
HAnimSite1695 = x3d.HAnimSite()
HAnimSite1695.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite1695)
HAnimSite1696 = x3d.HAnimSite()
HAnimSite1696.setUSE("hanim_l_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite1696)
HAnimSite1697 = x3d.HAnimSite()
HAnimSite1697.setUSE("hanim_r_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setUSE("hanim_l_index0")

HAnimHumanoid43.addJoints(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.setUSE("hanim_r_index0")

HAnimHumanoid43.addJoints(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.setUSE("hanim_l_index1")

HAnimHumanoid43.addJoints(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.setUSE("hanim_r_index1")

HAnimHumanoid43.addJoints(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.setUSE("hanim_l_index2")

HAnimHumanoid43.addJoints(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.setUSE("hanim_r_index2")

HAnimHumanoid43.addJoints(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.setUSE("hanim_l_index3")

HAnimHumanoid43.addJoints(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.setUSE("hanim_r_index3")

HAnimHumanoid43.addJoints(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1746)
HAnimJoint1747 = x3d.HAnimJoint()
HAnimJoint1747.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1747)
HAnimJoint1748 = x3d.HAnimJoint()
HAnimJoint1748.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1748)
HAnimJoint1749 = x3d.HAnimJoint()
HAnimJoint1749.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1749)
HAnimJoint1750 = x3d.HAnimJoint()
HAnimJoint1750.setUSE("hanim_l_middle0")

HAnimHumanoid43.addJoints(HAnimJoint1750)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.setUSE("hanim_r_middle0")

HAnimHumanoid43.addJoints(HAnimJoint1751)
HAnimJoint1752 = x3d.HAnimJoint()
HAnimJoint1752.setUSE("hanim_l_middle1")

HAnimHumanoid43.addJoints(HAnimJoint1752)
HAnimJoint1753 = x3d.HAnimJoint()
HAnimJoint1753.setUSE("hanim_r_middle1")

HAnimHumanoid43.addJoints(HAnimJoint1753)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.setUSE("hanim_l_middle2")

HAnimHumanoid43.addJoints(HAnimJoint1754)
HAnimJoint1755 = x3d.HAnimJoint()
HAnimJoint1755.setUSE("hanim_r_middle2")

HAnimHumanoid43.addJoints(HAnimJoint1755)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.setUSE("hanim_l_middle3")

HAnimHumanoid43.addJoints(HAnimJoint1756)
HAnimJoint1757 = x3d.HAnimJoint()
HAnimJoint1757.setUSE("hanim_r_middle3")

HAnimHumanoid43.addJoints(HAnimJoint1757)
HAnimJoint1758 = x3d.HAnimJoint()
HAnimJoint1758.setUSE("hanim_l_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint1758)
HAnimJoint1759 = x3d.HAnimJoint()
HAnimJoint1759.setUSE("hanim_r_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint1759)
HAnimJoint1760 = x3d.HAnimJoint()
HAnimJoint1760.setUSE("hanim_l_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint1760)
HAnimJoint1761 = x3d.HAnimJoint()
HAnimJoint1761.setUSE("hanim_r_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint1761)
HAnimJoint1762 = x3d.HAnimJoint()
HAnimJoint1762.setUSE("hanim_l_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint1762)
HAnimJoint1763 = x3d.HAnimJoint()
HAnimJoint1763.setUSE("hanim_r_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint1763)
HAnimJoint1764 = x3d.HAnimJoint()
HAnimJoint1764.setUSE("hanim_l_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint1764)
HAnimJoint1765 = x3d.HAnimJoint()
HAnimJoint1765.setUSE("hanim_r_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint1765)
HAnimJoint1766 = x3d.HAnimJoint()
HAnimJoint1766.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1766)
HAnimJoint1767 = x3d.HAnimJoint()
HAnimJoint1767.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1767)
HAnimJoint1768 = x3d.HAnimJoint()
HAnimJoint1768.setUSE("hanim_l_ring0")

HAnimHumanoid43.addJoints(HAnimJoint1768)
HAnimJoint1769 = x3d.HAnimJoint()
HAnimJoint1769.setUSE("hanim_r_ring0")

HAnimHumanoid43.addJoints(HAnimJoint1769)
HAnimJoint1770 = x3d.HAnimJoint()
HAnimJoint1770.setUSE("hanim_l_ring1")

HAnimHumanoid43.addJoints(HAnimJoint1770)
HAnimJoint1771 = x3d.HAnimJoint()
HAnimJoint1771.setUSE("hanim_r_ring1")

HAnimHumanoid43.addJoints(HAnimJoint1771)
HAnimJoint1772 = x3d.HAnimJoint()
HAnimJoint1772.setUSE("hanim_l_ring2")

HAnimHumanoid43.addJoints(HAnimJoint1772)
HAnimJoint1773 = x3d.HAnimJoint()
HAnimJoint1773.setUSE("hanim_r_ring2")

HAnimHumanoid43.addJoints(HAnimJoint1773)
HAnimJoint1774 = x3d.HAnimJoint()
HAnimJoint1774.setUSE("hanim_l_ring3")

HAnimHumanoid43.addJoints(HAnimJoint1774)
HAnimJoint1775 = x3d.HAnimJoint()
HAnimJoint1775.setUSE("hanim_r_ring3")

HAnimHumanoid43.addJoints(HAnimJoint1775)
HAnimJoint1776 = x3d.HAnimJoint()
HAnimJoint1776.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1776)
HAnimJoint1777 = x3d.HAnimJoint()
HAnimJoint1777.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1777)
HAnimJoint1778 = x3d.HAnimJoint()
HAnimJoint1778.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1778)
HAnimJoint1779 = x3d.HAnimJoint()
HAnimJoint1779.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1779)
HAnimJoint1780 = x3d.HAnimJoint()
HAnimJoint1780.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1780)
HAnimJoint1781 = x3d.HAnimJoint()
HAnimJoint1781.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1781)
HAnimJoint1782 = x3d.HAnimJoint()
HAnimJoint1782.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1782)
HAnimJoint1783 = x3d.HAnimJoint()
HAnimJoint1783.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1783)
HAnimJoint1784 = x3d.HAnimJoint()
HAnimJoint1784.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1784)
HAnimJoint1785 = x3d.HAnimJoint()
HAnimJoint1785.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1785)
HAnimJoint1786 = x3d.HAnimJoint()
HAnimJoint1786.setUSE("hanim_l_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint1786)
HAnimJoint1787 = x3d.HAnimJoint()
HAnimJoint1787.setUSE("hanim_r_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint1787)
HAnimJoint1788 = x3d.HAnimJoint()
HAnimJoint1788.setUSE("hanim_l_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint1788)
HAnimJoint1789 = x3d.HAnimJoint()
HAnimJoint1789.setUSE("hanim_r_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint1789)
HAnimJoint1790 = x3d.HAnimJoint()
HAnimJoint1790.setUSE("hanim_l_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint1790)
HAnimJoint1791 = x3d.HAnimJoint()
HAnimJoint1791.setUSE("hanim_r_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.setUSE("hanim_pelvis")

HAnimHumanoid43.addSegments(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.setUSE("hanim_skull")

HAnimHumanoid43.addSegments(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.setUSE("hanim_jaw")

HAnimHumanoid43.addSegments(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.setUSE("hanim_c1")

HAnimHumanoid43.addSegments(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.setUSE("hanim_c2")

HAnimHumanoid43.addSegments(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.setUSE("hanim_c3")

HAnimHumanoid43.addSegments(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.setUSE("hanim_c4")

HAnimHumanoid43.addSegments(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setUSE("hanim_c5")

HAnimHumanoid43.addSegments(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.setUSE("hanim_c6")

HAnimHumanoid43.addSegments(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.setUSE("hanim_c7")

HAnimHumanoid43.addSegments(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.setUSE("hanim_t1")

HAnimHumanoid43.addSegments(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.setUSE("hanim_t2")

HAnimHumanoid43.addSegments(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.setUSE("hanim_t3")

HAnimHumanoid43.addSegments(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.setUSE("hanim_t4")

HAnimHumanoid43.addSegments(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.setUSE("hanim_t5")

HAnimHumanoid43.addSegments(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.setUSE("hanim_t6")

HAnimHumanoid43.addSegments(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setUSE("hanim_t7")

HAnimHumanoid43.addSegments(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.setUSE("hanim_t8")

HAnimHumanoid43.addSegments(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.setUSE("hanim_t9")

HAnimHumanoid43.addSegments(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setUSE("hanim_t10")

HAnimHumanoid43.addSegments(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.setUSE("hanim_t11")

HAnimHumanoid43.addSegments(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.setUSE("hanim_t12")

HAnimHumanoid43.addSegments(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.setUSE("hanim_l1")

HAnimHumanoid43.addSegments(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.setUSE("hanim_l2")

HAnimHumanoid43.addSegments(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.setUSE("hanim_l3")

HAnimHumanoid43.addSegments(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setUSE("hanim_l4")

HAnimHumanoid43.addSegments(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setUSE("hanim_l5")

HAnimHumanoid43.addSegments(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.setUSE("hanim_sacrum")

HAnimHumanoid43.addSegments(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.setUSE("hanim_l_calf")

HAnimHumanoid43.addSegments(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.setUSE("hanim_r_calf")

HAnimHumanoid43.addSegments(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.setUSE("hanim_l_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.setUSE("hanim_r_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.setUSE("hanim_l_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.setUSE("hanim_r_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.setUSE("hanim_l_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.setUSE("hanim_r_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.setUSE("hanim_l_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.setUSE("hanim_r_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.setUSE("hanim_l_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setUSE("hanim_r_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.setUSE("hanim_l_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.setUSE("hanim_r_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1865)
HAnimSegment1866 = x3d.HAnimSegment()
HAnimSegment1866.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1866)
HAnimSegment1867 = x3d.HAnimSegment()
HAnimSegment1867.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1867)
HAnimSegment1868 = x3d.HAnimSegment()
HAnimSegment1868.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1868)
HAnimSegment1869 = x3d.HAnimSegment()
HAnimSegment1869.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1869)
HAnimSegment1870 = x3d.HAnimSegment()
HAnimSegment1870.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1870)
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1871)
HAnimSegment1872 = x3d.HAnimSegment()
HAnimSegment1872.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1872)
HAnimSegment1873 = x3d.HAnimSegment()
HAnimSegment1873.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1873)
HAnimSegment1874 = x3d.HAnimSegment()
HAnimSegment1874.setUSE("hanim_l_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1874)
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.setUSE("hanim_r_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1875)
HAnimSegment1876 = x3d.HAnimSegment()
HAnimSegment1876.setUSE("hanim_l_talus")

HAnimHumanoid43.addSegments(HAnimSegment1876)
HAnimSegment1877 = x3d.HAnimSegment()
HAnimSegment1877.setUSE("hanim_r_talus")

HAnimHumanoid43.addSegments(HAnimSegment1877)
HAnimSegment1878 = x3d.HAnimSegment()
HAnimSegment1878.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1878)
HAnimSegment1879 = x3d.HAnimSegment()
HAnimSegment1879.setUSE("hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1879)
HAnimSegment1880 = x3d.HAnimSegment()
HAnimSegment1880.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1880)
HAnimSegment1881 = x3d.HAnimSegment()
HAnimSegment1881.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1881)
HAnimSegment1882 = x3d.HAnimSegment()
HAnimSegment1882.setUSE("hanim_l_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1882)
HAnimSegment1883 = x3d.HAnimSegment()
HAnimSegment1883.setUSE("hanim_r_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1883)
HAnimSegment1884 = x3d.HAnimSegment()
HAnimSegment1884.setUSE("hanim_l_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1884)
HAnimSegment1885 = x3d.HAnimSegment()
HAnimSegment1885.setUSE("hanim_r_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.setUSE("hanim_crotch_pt")

HAnimHumanoid43.addSites(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.setUSE("hanim_skull_tip")

HAnimHumanoid43.addSites(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.setUSE("hanim_sellion_pt")

HAnimHumanoid43.addSites(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.addSites(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.addSites(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.addSites(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.addSites(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.setUSE("hanim_substernale_pt")

HAnimHumanoid43.addSites(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid43.addSites(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid43.addSites(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.setUSE("hanim_navel_pt")

HAnimHumanoid43.addSites(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setUSE("hanim_l_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.setUSE("hanim_r_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid43.addSites(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid43.addSites(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1976)

Scene29.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/HAnim2SpecificationLOA3Ilustrated_RoundTrip.x3d")

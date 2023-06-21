from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("H-Anim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("title")
meta3.setContent("HAnim1SpecificationLOA3Animation.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("reference")
meta5.setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("24 April 2013")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("19 February 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("Image")
meta8.setContent("HAnim1SpecificationLOA3MotionH3DViewer.png")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("Image")
meta9.setContent("HAnim1SpecificationLOA3MotionInstantReality.png")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("Image")
meta10.setContent("HAnim1SpecificationLOA3MotionOctagaVS.png")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("Image")
meta11.setContent("HAnim1SpecificationLOA3MotionView3dscene.png")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("reference")
meta12.setContent("HAnim1SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("HAnim1SpecificationLOA3Invisible.x3d")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("reference")
meta14.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("Image")
meta15.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("Image")
meta16.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("Image")
meta17.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("reference")
meta19.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("reference")
meta20.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("creator")
meta21.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("translator")
meta22.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("generator")
meta23.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("reference")
meta24.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta24)
meta25 = meta()
meta25.setName("reference")
meta25.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta25)
meta26 = meta()
meta26.setName("reference")
meta26.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta26)
meta27 = meta()
meta27.setName("generator")
meta27.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta27)
meta28 = meta()
meta28.setName("identifier")
meta28.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Animation.x3d")

head1.addMeta(meta28)
meta29 = meta()
meta29.setName("license")
meta29.setContent("../license.html")

head1.addMeta(meta29)

X3D0.setHead(head1)
Scene30 = Scene()
Background31 = Background()
Background31.setSkyColor([0.3,0.3,0.3])

Scene30.addChildren(Background31)
NavigationInfo32 = NavigationInfo()

Scene30.addChildren(NavigationInfo32)
Group33 = Group()
Group33.setDEF("Original_WorldInfo")
WorldInfo34 = WorldInfo()
WorldInfo34.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo34.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group33.addChildren(WorldInfo34)

Scene30.addChildren(Group33)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint35 = Viewpoint()
Viewpoint35.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint35.setDescription("Humanoid LOA 3 Front")
Viewpoint35.setPosition([0,0.4,4])

Scene30.addChildren(Viewpoint35)
Viewpoint36 = Viewpoint()
Viewpoint36.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint36.setDescription("Humanoid LOA 3 Front Close")
Viewpoint36.setPosition([0,0.8,2])

Scene30.addChildren(Viewpoint36)
Viewpoint37 = Viewpoint()
Viewpoint37.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint37.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint37.setPosition([0,1.2,1])

Scene30.addChildren(Viewpoint37)
Viewpoint38 = Viewpoint()
Viewpoint38.setCenterOfRotation([0,1.5,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Front Face")
Viewpoint38.setPosition([0,1.63,1])

Scene30.addChildren(Viewpoint38)
Viewpoint39 = Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Right Side")
Viewpoint39.setOrientation([0,1,0,1.5708])
Viewpoint39.setPosition([2.6,0.8,0])

Scene30.addChildren(Viewpoint39)
Viewpoint40 = Viewpoint()
Viewpoint40.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint40.setOrientation([0,1,0,1.2])
Viewpoint40.setPosition([1,0.8,0.5])

Scene30.addChildren(Viewpoint40)
Viewpoint41 = Viewpoint()
Viewpoint41.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint41.setOrientation([0,1,0,-1.2])
Viewpoint41.setPosition([-1,0.8,0.5])

Scene30.addChildren(Viewpoint41)
Viewpoint42 = Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Left Side")
Viewpoint42.setOrientation([0,1,0,-1.5708])
Viewpoint42.setPosition([-2.6,0.8,0])

Scene30.addChildren(Viewpoint42)
Viewpoint43 = Viewpoint()
Viewpoint43.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint43.setDescription("Humanoid LOA 3 Top")
Viewpoint43.setOrientation([1,0,0,-1.5708])
Viewpoint43.setPosition([0,3.5,0])

Scene30.addChildren(Viewpoint43)
HAnimHumanoid44 = HAnimHumanoid()
HAnimHumanoid44.setName("humanoid")
HAnimHumanoid44.setDEF("hanim_humanoid")
HAnimHumanoid44.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"])
HAnimHumanoid44.setVersion("1.0")
HAnimJoint45 = HAnimJoint()
HAnimJoint45.setName("humanoid_root")
HAnimJoint45.setDEF("hanim_humanoid_root")
HAnimJoint45.setCenter([0,0.824,0.0277])
HAnimJoint45.setUlimit([0,0,0])
HAnimJoint45.setLlimit([0,0,0])
HAnimJoint45.setStiffness([0,0,0])
HAnimSegment46 = HAnimSegment()
HAnimSegment46.setName("sacrum")
HAnimSegment46.setDEF("hanim_sacrum")
#<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
TouchSensor47 = TouchSensor()
TouchSensor47.setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum")

HAnimSegment46.addChildren(TouchSensor47)
Transform48 = Transform()
Transform48.setTranslation([0,0.824,0.0277])
Shape49 = Shape()
Shape49.setDEF("HAnimJointShape")
Sphere50 = Sphere()
Sphere50.setRadius(0.006)

Shape49.setGeometry(Sphere50)
Appearance51 = Appearance()
Appearance51.setDEF("HAnimJointAppearance")
Material52 = Material()
Material52.setDiffuseColor([1,0.5,0])
Material52.setTransparency(0.5)

Appearance51.setMaterial(Material52)

Shape49.setAppearance(Appearance51)

Transform48.addChildren(Shape49)

HAnimSegment46.addChildren(Transform48)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape53 = Shape()
LineSet54 = LineSet()
LineSet54.setVertexCount([2])
Coordinate55 = Coordinate()
Coordinate55.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet54.setCoord(Coordinate55)
ColorRGBA56 = ColorRGBA()
ColorRGBA56.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA56.setColor([1,1,0,1,1,1,0,0.1])

LineSet54.setColor(ColorRGBA56)

Shape53.setGeometry(LineSet54)

HAnimSegment46.addChildren(Shape53)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape57 = Shape()
LineSet58 = LineSet()
LineSet58.setVertexCount([2])
Coordinate59 = Coordinate()
Coordinate59.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet58.setCoord(Coordinate59)
ColorRGBA60 = ColorRGBA()
ColorRGBA60.setUSE("HAnimSegmentLineColorRGBA")

LineSet58.setColor(ColorRGBA60)

Shape57.setGeometry(LineSet58)

HAnimSegment46.addChildren(Shape57)

HAnimJoint45.addChildren(HAnimSegment46)
HAnimJoint61 = HAnimJoint()
HAnimJoint61.setName("sacroiliac")
HAnimJoint61.setDEF("hanim_sacroiliac")
HAnimJoint61.setCenter([0,0.9149,0.0016])
HAnimJoint61.setUlimit([0,0,0])
HAnimJoint61.setLlimit([0,0,0])
HAnimJoint61.setStiffness([0,0,0])
HAnimSegment62 = HAnimSegment()
HAnimSegment62.setName("pelvis")
HAnimSegment62.setDEF("hanim_pelvis")
#<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
TouchSensor63 = TouchSensor()
TouchSensor63.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment62.addChildren(TouchSensor63)
Transform64 = Transform()
Transform64.setTranslation([0,0.9149,0.0016])
Shape65 = Shape()
Shape65.setUSE("HAnimJointShape")

Transform64.addChildren(Shape65)

HAnimSegment62.addChildren(Transform64)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape66 = Shape()
LineSet67 = LineSet()
LineSet67.setVertexCount([2])
Coordinate68 = Coordinate()
Coordinate68.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet67.setCoord(Coordinate68)
ColorRGBA69 = ColorRGBA()
ColorRGBA69.setUSE("HAnimSegmentLineColorRGBA")

LineSet67.setColor(ColorRGBA69)

Shape66.setGeometry(LineSet67)

HAnimSegment62.addChildren(Shape66)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape70 = Shape()
LineSet71 = LineSet()
LineSet71.setVertexCount([2])
Coordinate72 = Coordinate()
Coordinate72.setPoint([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])

LineSet71.setCoord(Coordinate72)
ColorRGBA73 = ColorRGBA()
ColorRGBA73.setUSE("HAnimSegmentLineColorRGBA")

LineSet71.setColor(ColorRGBA73)

Shape70.setGeometry(LineSet71)

HAnimSegment62.addChildren(Shape70)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape74 = Shape()
LineSet75 = LineSet()
LineSet75.setVertexCount([2])
Coordinate76 = Coordinate()
Coordinate76.setPoint([0,0.9149,0.0016,-0.1525,1.0628,0.0035])

LineSet75.setCoord(Coordinate76)
ColorRGBA77 = ColorRGBA()
ColorRGBA77.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA77.setColor([1,0,0,1,1,0,0,0.1])

LineSet75.setColor(ColorRGBA77)

Shape74.setGeometry(LineSet75)

HAnimSegment62.addChildren(Shape74)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape78 = Shape()
LineSet79 = LineSet()
LineSet79.setVertexCount([2])
Coordinate80 = Coordinate()
Coordinate80.setPoint([0,0.9149,0.0016,-0.1689,0.8419,0.0352])

LineSet79.setCoord(Coordinate80)
ColorRGBA81 = ColorRGBA()
ColorRGBA81.setUSE("HAnimSiteLineColorRGBA")

LineSet79.setColor(ColorRGBA81)

Shape78.setGeometry(LineSet79)

HAnimSegment62.addChildren(Shape78)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape82 = Shape()
LineSet83 = LineSet()
LineSet83.setVertexCount([2])
Coordinate84 = Coordinate()
Coordinate84.setPoint([0,0.9149,0.0016,0.1612,1.0537,0.0008])

LineSet83.setCoord(Coordinate84)
ColorRGBA85 = ColorRGBA()
ColorRGBA85.setUSE("HAnimSiteLineColorRGBA")

LineSet83.setColor(ColorRGBA85)

Shape82.setGeometry(LineSet83)

HAnimSegment62.addChildren(Shape82)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape86 = Shape()
LineSet87 = LineSet()
LineSet87.setVertexCount([2])
Coordinate88 = Coordinate()
Coordinate88.setPoint([0,0.9149,0.0016,0.1677,0.8336,0.0303])

LineSet87.setCoord(Coordinate88)
ColorRGBA89 = ColorRGBA()
ColorRGBA89.setUSE("HAnimSiteLineColorRGBA")

LineSet87.setColor(ColorRGBA89)

Shape86.setGeometry(LineSet87)

HAnimSegment62.addChildren(Shape86)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape90 = Shape()
LineSet91 = LineSet()
LineSet91.setVertexCount([2])
Coordinate92 = Coordinate()
Coordinate92.setPoint([0,0.9149,0.0016,-0.0887,1.0021,0.1112])

LineSet91.setCoord(Coordinate92)
ColorRGBA93 = ColorRGBA()
ColorRGBA93.setUSE("HAnimSiteLineColorRGBA")

LineSet91.setColor(ColorRGBA93)

Shape90.setGeometry(LineSet91)

HAnimSegment62.addChildren(Shape90)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape94 = Shape()
LineSet95 = LineSet()
LineSet95.setVertexCount([2])
Coordinate96 = Coordinate()
Coordinate96.setPoint([0,0.9149,0.0016,0.0925,0.9983,0.1052])

LineSet95.setCoord(Coordinate96)
ColorRGBA97 = ColorRGBA()
ColorRGBA97.setUSE("HAnimSiteLineColorRGBA")

LineSet95.setColor(ColorRGBA97)

Shape94.setGeometry(LineSet95)

HAnimSegment62.addChildren(Shape94)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape98 = Shape()
LineSet99 = LineSet()
LineSet99.setVertexCount([2])
Coordinate100 = Coordinate()
Coordinate100.setPoint([0,0.9149,0.0016,-0.0716,1.019,-0.1138])

LineSet99.setCoord(Coordinate100)
ColorRGBA101 = ColorRGBA()
ColorRGBA101.setUSE("HAnimSiteLineColorRGBA")

LineSet99.setColor(ColorRGBA101)

Shape98.setGeometry(LineSet99)

HAnimSegment62.addChildren(Shape98)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape102 = Shape()
LineSet103 = LineSet()
LineSet103.setVertexCount([2])
Coordinate104 = Coordinate()
Coordinate104.setPoint([0,0.9149,0.0016,0.0774,1.019,-0.1151])

LineSet103.setCoord(Coordinate104)
ColorRGBA105 = ColorRGBA()
ColorRGBA105.setUSE("HAnimSiteLineColorRGBA")

LineSet103.setColor(ColorRGBA105)

Shape102.setGeometry(LineSet103)

HAnimSegment62.addChildren(Shape102)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape106 = Shape()
LineSet107 = LineSet()
LineSet107.setVertexCount([2])
Coordinate108 = Coordinate()
Coordinate108.setPoint([0,0.9149,0.0016,0.0034,0.8266,0.0257])

LineSet107.setCoord(Coordinate108)
ColorRGBA109 = ColorRGBA()
ColorRGBA109.setUSE("HAnimSiteLineColorRGBA")

LineSet107.setColor(ColorRGBA109)

Shape106.setGeometry(LineSet107)

HAnimSegment62.addChildren(Shape106)
HAnimSite110 = HAnimSite()
HAnimSite110.setName("r_iliocristale_pt")
HAnimSite110.setDEF("hanim_r_iliocristale_pt")
HAnimSite110.setTranslation([-0.1525,1.0628,0.0035])
#HAnimSite visualization shape
TouchSensor111 = TouchSensor()
TouchSensor111.setDescription("HAnimSite r_iliocristale")

HAnimSite110.addChildren(TouchSensor111)
Shape112 = Shape()
Shape112.setDEF("HAnimSiteShape")
IndexedFaceSet113 = IndexedFaceSet()
IndexedFaceSet113.setDEF("DiamondIFS")
IndexedFaceSet113.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet113.setCreaseAngle(0.5)
IndexedFaceSet113.setSolid(False)
Coordinate114 = Coordinate()
Coordinate114.setPoint([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])

IndexedFaceSet113.setCoord(Coordinate114)

Shape112.setGeometry(IndexedFaceSet113)
Appearance115 = Appearance()
Material116 = Material()
Material116.setDiffuseColor([1,0,0])

Appearance115.setMaterial(Material116)

Shape112.setAppearance(Appearance115)

HAnimSite110.addChildren(Shape112)

HAnimSegment62.addChildren(HAnimSite110)
HAnimSite117 = HAnimSite()
HAnimSite117.setName("r_trochanterion_pt")
HAnimSite117.setDEF("hanim_r_trochanterion_pt")
HAnimSite117.setTranslation([-0.1689,0.8419,0.0352])
#HAnimSite visualization shape
TouchSensor118 = TouchSensor()
TouchSensor118.setDescription("HAnimSite r_trochanterion")

HAnimSite117.addChildren(TouchSensor118)
Shape119 = Shape()
Shape119.setUSE("HAnimSiteShape")

HAnimSite117.addChildren(Shape119)

HAnimSegment62.addChildren(HAnimSite117)
HAnimSite120 = HAnimSite()
HAnimSite120.setName("l_iliocristale_pt")
HAnimSite120.setDEF("hanim_l_iliocristale_pt")
HAnimSite120.setTranslation([0.1612,1.0537,0.0008])
#HAnimSite visualization shape
TouchSensor121 = TouchSensor()
TouchSensor121.setDescription("HAnimSite l_iliocristale")

HAnimSite120.addChildren(TouchSensor121)
Shape122 = Shape()
Shape122.setUSE("HAnimSiteShape")

HAnimSite120.addChildren(Shape122)

HAnimSegment62.addChildren(HAnimSite120)
HAnimSite123 = HAnimSite()
HAnimSite123.setName("l_trochanterion_pt")
HAnimSite123.setDEF("hanim_l_trochanterion_pt")
HAnimSite123.setTranslation([0.1677,0.8336,0.0303])
#HAnimSite visualization shape
TouchSensor124 = TouchSensor()
TouchSensor124.setDescription("HAnimSite l_trochanterion")

HAnimSite123.addChildren(TouchSensor124)
Shape125 = Shape()
Shape125.setUSE("HAnimSiteShape")

HAnimSite123.addChildren(Shape125)

HAnimSegment62.addChildren(HAnimSite123)
HAnimSite126 = HAnimSite()
HAnimSite126.setName("r_asis_pt")
HAnimSite126.setDEF("hanim_r_asis_pt")
HAnimSite126.setTranslation([-0.0887,1.0021,0.1112])
#HAnimSite visualization shape
TouchSensor127 = TouchSensor()
TouchSensor127.setDescription("HAnimSite r_asis")

HAnimSite126.addChildren(TouchSensor127)
Shape128 = Shape()
Shape128.setUSE("HAnimSiteShape")

HAnimSite126.addChildren(Shape128)

HAnimSegment62.addChildren(HAnimSite126)
HAnimSite129 = HAnimSite()
HAnimSite129.setName("l_asis_pt")
HAnimSite129.setDEF("hanim_l_asis_pt")
HAnimSite129.setTranslation([0.0925,0.9983,0.1052])
#HAnimSite visualization shape
TouchSensor130 = TouchSensor()
TouchSensor130.setDescription("HAnimSite l_asis")

HAnimSite129.addChildren(TouchSensor130)
Shape131 = Shape()
Shape131.setUSE("HAnimSiteShape")

HAnimSite129.addChildren(Shape131)

HAnimSegment62.addChildren(HAnimSite129)
HAnimSite132 = HAnimSite()
HAnimSite132.setName("r_psis_pt")
HAnimSite132.setDEF("hanim_r_psis_pt")
HAnimSite132.setTranslation([-0.0716,1.019,-0.1138])
#HAnimSite visualization shape
TouchSensor133 = TouchSensor()
TouchSensor133.setDescription("HAnimSite r_psis")

HAnimSite132.addChildren(TouchSensor133)
Shape134 = Shape()
Shape134.setUSE("HAnimSiteShape")

HAnimSite132.addChildren(Shape134)

HAnimSegment62.addChildren(HAnimSite132)
HAnimSite135 = HAnimSite()
HAnimSite135.setName("l_psis_pt")
HAnimSite135.setDEF("hanim_l_psis_pt")
HAnimSite135.setTranslation([0.0774,1.019,-0.1151])
#HAnimSite visualization shape
TouchSensor136 = TouchSensor()
TouchSensor136.setDescription("HAnimSite l_psis")

HAnimSite135.addChildren(TouchSensor136)
Shape137 = Shape()
Shape137.setUSE("HAnimSiteShape")

HAnimSite135.addChildren(Shape137)

HAnimSegment62.addChildren(HAnimSite135)
HAnimSite138 = HAnimSite()
HAnimSite138.setName("crotch_pt")
HAnimSite138.setDEF("hanim_crotch_pt")
HAnimSite138.setTranslation([0.0034,0.8266,0.0257])
#HAnimSite visualization shape
TouchSensor139 = TouchSensor()
TouchSensor139.setDescription("HAnimSite crotch")

HAnimSite138.addChildren(TouchSensor139)
Shape140 = Shape()
Shape140.setUSE("HAnimSiteShape")

HAnimSite138.addChildren(Shape140)

HAnimSegment62.addChildren(HAnimSite138)

HAnimJoint61.addChildren(HAnimSegment62)
HAnimJoint141 = HAnimJoint()
HAnimJoint141.setName("l_hip")
HAnimJoint141.setDEF("hanim_l_hip")
HAnimJoint141.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint141.setUlimit([0,0,0])
HAnimJoint141.setLlimit([0,0,0])
HAnimJoint141.setStiffness([0,0,0])
HAnimSegment142 = HAnimSegment()
HAnimSegment142.setName("l_thigh")
HAnimSegment142.setDEF("hanim_l_thigh")
#<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
TouchSensor143 = TouchSensor()
TouchSensor143.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment142.addChildren(TouchSensor143)
Transform144 = Transform()
Transform144.setTranslation([0.0961,0.9124,-0.0001])
Shape145 = Shape()
Shape145.setUSE("HAnimJointShape")

Transform144.addChildren(Shape145)

HAnimSegment142.addChildren(Transform144)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape146 = Shape()
LineSet147 = LineSet()
LineSet147.setVertexCount([2])
Coordinate148 = Coordinate()
Coordinate148.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet147.setCoord(Coordinate148)
ColorRGBA149 = ColorRGBA()
ColorRGBA149.setUSE("HAnimSegmentLineColorRGBA")

LineSet147.setColor(ColorRGBA149)

Shape146.setGeometry(LineSet147)

HAnimSegment142.addChildren(Shape146)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape150 = Shape()
LineSet151 = LineSet()
LineSet151.setVertexCount([2])
Coordinate152 = Coordinate()
Coordinate152.setPoint([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])

LineSet151.setCoord(Coordinate152)
ColorRGBA153 = ColorRGBA()
ColorRGBA153.setUSE("HAnimSiteLineColorRGBA")

LineSet151.setColor(ColorRGBA153)

Shape150.setGeometry(LineSet151)

HAnimSegment142.addChildren(Shape150)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape154 = Shape()
LineSet155 = LineSet()
LineSet155.setVertexCount([2])
Coordinate156 = Coordinate()
Coordinate156.setPoint([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])

LineSet155.setCoord(Coordinate156)
ColorRGBA157 = ColorRGBA()
ColorRGBA157.setUSE("HAnimSiteLineColorRGBA")

LineSet155.setColor(ColorRGBA157)

Shape154.setGeometry(LineSet155)

HAnimSegment142.addChildren(Shape154)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape158 = Shape()
LineSet159 = LineSet()
LineSet159.setVertexCount([2])
Coordinate160 = Coordinate()
Coordinate160.setPoint([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])

LineSet159.setCoord(Coordinate160)
ColorRGBA161 = ColorRGBA()
ColorRGBA161.setUSE("HAnimSiteLineColorRGBA")

LineSet159.setColor(ColorRGBA161)

Shape158.setGeometry(LineSet159)

HAnimSegment142.addChildren(Shape158)
HAnimSite162 = HAnimSite()
HAnimSite162.setName("l_knee_crease_pt")
HAnimSite162.setDEF("hanim_l_knee_crease_pt")
HAnimSite162.setTranslation([0.0993,0.4881,-0.0309])
#HAnimSite visualization shape
TouchSensor163 = TouchSensor()
TouchSensor163.setDescription("HAnimSite l_knee_crease")

HAnimSite162.addChildren(TouchSensor163)
Shape164 = Shape()
Shape164.setUSE("HAnimSiteShape")

HAnimSite162.addChildren(Shape164)

HAnimSegment142.addChildren(HAnimSite162)
HAnimSite165 = HAnimSite()
HAnimSite165.setName("l_femoral_lateral_epicn_pt")
HAnimSite165.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite165.setTranslation([0.1598,0.4967,0.0297])
#HAnimSite visualization shape
TouchSensor166 = TouchSensor()
TouchSensor166.setDescription("HAnimSite l_femoral_lateral_epicn")

HAnimSite165.addChildren(TouchSensor166)
Shape167 = Shape()
Shape167.setUSE("HAnimSiteShape")

HAnimSite165.addChildren(Shape167)

HAnimSegment142.addChildren(HAnimSite165)
HAnimSite168 = HAnimSite()
HAnimSite168.setName("l_femoral_medial_epicn_pt")
HAnimSite168.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite168.setTranslation([0.0398,0.4946,0.0303])
#HAnimSite visualization shape
TouchSensor169 = TouchSensor()
TouchSensor169.setDescription("HAnimSite l_femoral_medial_epicn")

HAnimSite168.addChildren(TouchSensor169)
Shape170 = Shape()
Shape170.setUSE("HAnimSiteShape")

HAnimSite168.addChildren(Shape170)

HAnimSegment142.addChildren(HAnimSite168)

HAnimJoint141.addChildren(HAnimSegment142)
HAnimJoint171 = HAnimJoint()
HAnimJoint171.setName("l_knee")
HAnimJoint171.setDEF("hanim_l_knee")
HAnimJoint171.setCenter([0.104,0.4867,0.0308])
HAnimJoint171.setUlimit([0,0,0])
HAnimJoint171.setLlimit([0,0,0])
HAnimJoint171.setStiffness([0,0,0])
HAnimSegment172 = HAnimSegment()
HAnimSegment172.setName("l_calf")
HAnimSegment172.setDEF("hanim_l_calf")
#<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
TouchSensor173 = TouchSensor()
TouchSensor173.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment172.addChildren(TouchSensor173)
Transform174 = Transform()
Transform174.setTranslation([0.104,0.4867,0.0308])
Shape175 = Shape()
Shape175.setUSE("HAnimJointShape")

Transform174.addChildren(Shape175)

HAnimSegment172.addChildren(Transform174)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape176 = Shape()
LineSet177 = LineSet()
LineSet177.setVertexCount([2])
Coordinate178 = Coordinate()
Coordinate178.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet177.setCoord(Coordinate178)
ColorRGBA179 = ColorRGBA()
ColorRGBA179.setUSE("HAnimSegmentLineColorRGBA")

LineSet177.setColor(ColorRGBA179)

Shape176.setGeometry(LineSet177)

HAnimSegment172.addChildren(Shape176)

HAnimJoint171.addChildren(HAnimSegment172)
HAnimJoint180 = HAnimJoint()
HAnimJoint180.setName("l_ankle")
HAnimJoint180.setDEF("hanim_l_ankle")
HAnimJoint180.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint180.setUlimit([0,0,0])
HAnimJoint180.setLlimit([0,0,0])
HAnimJoint180.setStiffness([0,0,0])
HAnimSegment181 = HAnimSegment()
HAnimSegment181.setName("l_hindfoot")
HAnimSegment181.setDEF("hanim_l_hindfoot")
#<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
TouchSensor182 = TouchSensor()
TouchSensor182.setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot")

HAnimSegment181.addChildren(TouchSensor182)
Transform183 = Transform()
Transform183.setTranslation([0.1101,0.0656,-0.0736])
Shape184 = Shape()
Shape184.setUSE("HAnimJointShape")

Transform183.addChildren(Shape184)

HAnimSegment181.addChildren(Transform183)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape185 = Shape()
LineSet186 = LineSet()
LineSet186.setVertexCount([2])
Coordinate187 = Coordinate()
Coordinate187.setPoint([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])

LineSet186.setCoord(Coordinate187)
ColorRGBA188 = ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet186.setColor(ColorRGBA188)

Shape185.setGeometry(LineSet186)

HAnimSegment181.addChildren(Shape185)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape189 = Shape()
LineSet190 = LineSet()
LineSet190.setVertexCount([2])
Coordinate191 = Coordinate()
Coordinate191.setPoint([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])

LineSet190.setCoord(Coordinate191)
ColorRGBA192 = ColorRGBA()
ColorRGBA192.setUSE("HAnimSiteLineColorRGBA")

LineSet190.setColor(ColorRGBA192)

Shape189.setGeometry(LineSet190)

HAnimSegment181.addChildren(Shape189)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape193 = Shape()
LineSet194 = LineSet()
LineSet194.setVertexCount([2])
Coordinate195 = Coordinate()
Coordinate195.setPoint([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])

LineSet194.setCoord(Coordinate195)
ColorRGBA196 = ColorRGBA()
ColorRGBA196.setUSE("HAnimSiteLineColorRGBA")

LineSet194.setColor(ColorRGBA196)

Shape193.setGeometry(LineSet194)

HAnimSegment181.addChildren(Shape193)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape197 = Shape()
LineSet198 = LineSet()
LineSet198.setVertexCount([2])
Coordinate199 = Coordinate()
Coordinate199.setPoint([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])

LineSet198.setCoord(Coordinate199)
ColorRGBA200 = ColorRGBA()
ColorRGBA200.setUSE("HAnimSiteLineColorRGBA")

LineSet198.setColor(ColorRGBA200)

Shape197.setGeometry(LineSet198)

HAnimSegment181.addChildren(Shape197)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape201 = Shape()
LineSet202 = LineSet()
LineSet202.setVertexCount([2])
Coordinate203 = Coordinate()
Coordinate203.setPoint([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])

LineSet202.setCoord(Coordinate203)
ColorRGBA204 = ColorRGBA()
ColorRGBA204.setUSE("HAnimSiteLineColorRGBA")

LineSet202.setColor(ColorRGBA204)

Shape201.setGeometry(LineSet202)

HAnimSegment181.addChildren(Shape201)
HAnimSite205 = HAnimSite()
HAnimSite205.setName("l_lateral_malleolus_pt")
HAnimSite205.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite205.setTranslation([0.1308,0.0597,-0.1032])
#HAnimSite visualization shape
TouchSensor206 = TouchSensor()
TouchSensor206.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite205.addChildren(TouchSensor206)
Shape207 = Shape()
Shape207.setUSE("HAnimSiteShape")

HAnimSite205.addChildren(Shape207)

HAnimSegment181.addChildren(HAnimSite205)
HAnimSite208 = HAnimSite()
HAnimSite208.setName("l_medial_malleolus_pt")
HAnimSite208.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite208.setTranslation([0.089,0.0716,-0.0881])
#HAnimSite visualization shape
TouchSensor209 = TouchSensor()
TouchSensor209.setDescription("HAnimSite l_medial_malleolus")

HAnimSite208.addChildren(TouchSensor209)
Shape210 = Shape()
Shape210.setUSE("HAnimSiteShape")

HAnimSite208.addChildren(Shape210)

HAnimSegment181.addChildren(HAnimSite208)
HAnimSite211 = HAnimSite()
HAnimSite211.setName("l_sphyrion_pt")
HAnimSite211.setDEF("hanim_l_sphyrion_pt")
HAnimSite211.setTranslation([0.089,0.0575,-0.0943])
#HAnimSite visualization shape
TouchSensor212 = TouchSensor()
TouchSensor212.setDescription("HAnimSite l_sphyrion")

HAnimSite211.addChildren(TouchSensor212)
Shape213 = Shape()
Shape213.setUSE("HAnimSiteShape")

HAnimSite211.addChildren(Shape213)

HAnimSegment181.addChildren(HAnimSite211)
HAnimSite214 = HAnimSite()
HAnimSite214.setName("l_calcaneous_post_pt")
HAnimSite214.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite214.setTranslation([0.0974,0.0259,-0.1171])
#HAnimSite visualization shape
TouchSensor215 = TouchSensor()
TouchSensor215.setDescription("HAnimSite l_calcaneous_post")

HAnimSite214.addChildren(TouchSensor215)
Shape216 = Shape()
Shape216.setUSE("HAnimSiteShape")

HAnimSite214.addChildren(Shape216)

HAnimSegment181.addChildren(HAnimSite214)

HAnimJoint180.addChildren(HAnimSegment181)
HAnimJoint217 = HAnimJoint()
HAnimJoint217.setName("l_subtalar")
HAnimJoint217.setDEF("hanim_l_subtalar")
HAnimJoint217.setCenter([0.1086,0.0001,-0.0368])
HAnimJoint217.setUlimit([0,0,0])
HAnimJoint217.setLlimit([0,0,0])
HAnimJoint217.setStiffness([0,0,0])
HAnimSegment218 = HAnimSegment()
HAnimSegment218.setName("l_midproximal")
HAnimSegment218.setDEF("hanim_l_midproximal")
#<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
TouchSensor219 = TouchSensor()
TouchSensor219.setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal")

HAnimSegment218.addChildren(TouchSensor219)
Transform220 = Transform()
Transform220.setTranslation([0.1086,0.0001,-0.0368])
Shape221 = Shape()
Shape221.setUSE("HAnimJointShape")

Transform220.addChildren(Shape221)

HAnimSegment218.addChildren(Transform220)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape222 = Shape()
LineSet223 = LineSet()
LineSet223.setVertexCount([2])
Coordinate224 = Coordinate()
Coordinate224.setPoint([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])

LineSet223.setCoord(Coordinate224)
ColorRGBA225 = ColorRGBA()
ColorRGBA225.setUSE("HAnimSegmentLineColorRGBA")

LineSet223.setColor(ColorRGBA225)

Shape222.setGeometry(LineSet223)

HAnimSegment218.addChildren(Shape222)

HAnimJoint217.addChildren(HAnimSegment218)
HAnimJoint226 = HAnimJoint()
HAnimJoint226.setName("l_midtarsal")
HAnimJoint226.setDEF("hanim_l_midtarsal")
HAnimJoint226.setCenter([0.1086,0.0001,0.0368])
HAnimJoint226.setUlimit([0,0,0])
HAnimJoint226.setLlimit([0,0,0])
HAnimJoint226.setStiffness([0,0,0])
HAnimSegment227 = HAnimSegment()
HAnimSegment227.setName("l_middistal")
HAnimSegment227.setDEF("hanim_l_middistal")
#<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
TouchSensor228 = TouchSensor()
TouchSensor228.setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal")

HAnimSegment227.addChildren(TouchSensor228)
Transform229 = Transform()
Transform229.setTranslation([0.1086,0.0001,0.0368])
Shape230 = Shape()
Shape230.setUSE("HAnimJointShape")

Transform229.addChildren(Shape230)

HAnimSegment227.addChildren(Transform229)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape231 = Shape()
LineSet232 = LineSet()
LineSet232.setVertexCount([2])
Coordinate233 = Coordinate()
Coordinate233.setPoint([0.1086,0.0001,0.0368,0.1086,0,0.0762])

LineSet232.setCoord(Coordinate233)
ColorRGBA234 = ColorRGBA()
ColorRGBA234.setUSE("HAnimSegmentLineColorRGBA")

LineSet232.setColor(ColorRGBA234)

Shape231.setGeometry(LineSet232)

HAnimSegment227.addChildren(Shape231)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape235 = Shape()
LineSet236 = LineSet()
LineSet236.setVertexCount([2])
Coordinate237 = Coordinate()
Coordinate237.setPoint([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])

LineSet236.setCoord(Coordinate237)
ColorRGBA238 = ColorRGBA()
ColorRGBA238.setUSE("HAnimSiteLineColorRGBA")

LineSet236.setColor(ColorRGBA238)

Shape235.setGeometry(LineSet236)

HAnimSegment227.addChildren(Shape235)
HAnimSite239 = HAnimSite()
HAnimSite239.setName("l_metatarsal_pha1_pt")
HAnimSite239.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite239.setTranslation([0.0816,0.0232,0.0106])
#HAnimSite visualization shape
TouchSensor240 = TouchSensor()
TouchSensor240.setDescription("HAnimSite l_metatarsal_pha1")

HAnimSite239.addChildren(TouchSensor240)
Shape241 = Shape()
Shape241.setUSE("HAnimSiteShape")

HAnimSite239.addChildren(Shape241)

HAnimSegment227.addChildren(HAnimSite239)

HAnimJoint226.addChildren(HAnimSegment227)
HAnimJoint242 = HAnimJoint()
HAnimJoint242.setName("l_metatarsal")
HAnimJoint242.setDEF("hanim_l_metatarsal")
HAnimJoint242.setCenter([0.1086,0,0.0762])
HAnimJoint242.setUlimit([0,0,0])
HAnimJoint242.setLlimit([0,0,0])
HAnimJoint242.setStiffness([0,0,0])
HAnimSegment243 = HAnimSegment()
HAnimSegment243.setName("l_forefoot")
HAnimSegment243.setDEF("hanim_l_forefoot")
#<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
TouchSensor244 = TouchSensor()
TouchSensor244.setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")

HAnimSegment243.addChildren(TouchSensor244)
Transform245 = Transform()
Transform245.setTranslation([0.1086,0,0.0762])
Shape246 = Shape()
Shape246.setUSE("HAnimJointShape")

Transform245.addChildren(Shape246)

HAnimSegment243.addChildren(Transform245)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape247 = Shape()
LineSet248 = LineSet()
LineSet248.setVertexCount([2])
Coordinate249 = Coordinate()
Coordinate249.setPoint([0.1086,0,0.0762,0.1354,0.0016,0.1476])

LineSet248.setCoord(Coordinate249)
ColorRGBA250 = ColorRGBA()
ColorRGBA250.setUSE("HAnimSiteLineColorRGBA")

LineSet248.setColor(ColorRGBA250)

Shape247.setGeometry(LineSet248)

HAnimSegment243.addChildren(Shape247)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape251 = Shape()
LineSet252 = LineSet()
LineSet252.setVertexCount([2])
Coordinate253 = Coordinate()
Coordinate253.setPoint([0.1086,0,0.0762,0.1825,0.007,0.0928])

LineSet252.setCoord(Coordinate253)
ColorRGBA254 = ColorRGBA()
ColorRGBA254.setUSE("HAnimSiteLineColorRGBA")

LineSet252.setColor(ColorRGBA254)

Shape251.setGeometry(LineSet252)

HAnimSegment243.addChildren(Shape251)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape255 = Shape()
LineSet256 = LineSet()
LineSet256.setVertexCount([2])
Coordinate257 = Coordinate()
Coordinate257.setPoint([0.1086,0,0.0762,0.1195,0.0079,0.1433])

LineSet256.setCoord(Coordinate257)
ColorRGBA258 = ColorRGBA()
ColorRGBA258.setUSE("HAnimSiteLineColorRGBA")

LineSet256.setColor(ColorRGBA258)

Shape255.setGeometry(LineSet256)

HAnimSegment243.addChildren(Shape255)
HAnimSite259 = HAnimSite()
HAnimSite259.setName("l_forefoot_tip")
HAnimSite259.setDEF("hanim_l_forefoot_tip")
HAnimSite259.setTranslation([0.1354,0.0016,0.1476])
#HAnimSite visualization shape
TouchSensor260 = TouchSensor()
TouchSensor260.setDescription("HAnimSite l_forefoot_tip")

HAnimSite259.addChildren(TouchSensor260)
Shape261 = Shape()
Shape261.setUSE("HAnimSiteShape")

HAnimSite259.addChildren(Shape261)

HAnimSegment243.addChildren(HAnimSite259)
HAnimSite262 = HAnimSite()
HAnimSite262.setName("l_metatarsal_pha5_pt")
HAnimSite262.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite262.setTranslation([0.1825,0.007,0.0928])
#HAnimSite visualization shape
TouchSensor263 = TouchSensor()
TouchSensor263.setDescription("HAnimSite l_metatarsal_pha5")

HAnimSite262.addChildren(TouchSensor263)
Shape264 = Shape()
Shape264.setUSE("HAnimSiteShape")

HAnimSite262.addChildren(Shape264)

HAnimSegment243.addChildren(HAnimSite262)
HAnimSite265 = HAnimSite()
HAnimSite265.setName("l_digit2_pt")
HAnimSite265.setDEF("hanim_l_digit2_pt")
HAnimSite265.setTranslation([0.1195,0.0079,0.1433])
#HAnimSite visualization shape
TouchSensor266 = TouchSensor()
TouchSensor266.setDescription("HAnimSite l_digit2")

HAnimSite265.addChildren(TouchSensor266)
Shape267 = Shape()
Shape267.setUSE("HAnimSiteShape")

HAnimSite265.addChildren(Shape267)

HAnimSegment243.addChildren(HAnimSite265)

HAnimJoint242.addChildren(HAnimSegment243)

HAnimJoint226.addChildren(HAnimJoint242)

HAnimJoint217.addChildren(HAnimJoint226)

HAnimJoint180.addChildren(HAnimJoint217)

HAnimJoint171.addChildren(HAnimJoint180)

HAnimJoint141.addChildren(HAnimJoint171)

HAnimJoint61.addChildren(HAnimJoint141)
HAnimJoint268 = HAnimJoint()
HAnimJoint268.setName("r_hip")
HAnimJoint268.setDEF("hanim_r_hip")
HAnimJoint268.setCenter([-0.0961,0.9124,-0.0001])
HAnimJoint268.setUlimit([0,0,0])
HAnimJoint268.setLlimit([0,0,0])
HAnimJoint268.setStiffness([0,0,0])
HAnimSegment269 = HAnimSegment()
HAnimSegment269.setName("r_thigh")
HAnimSegment269.setDEF("hanim_r_thigh")
#<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
TouchSensor270 = TouchSensor()
TouchSensor270.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment269.addChildren(TouchSensor270)
Transform271 = Transform()
Transform271.setTranslation([-0.0961,0.9124,-0.0001])
Shape272 = Shape()
Shape272.setUSE("HAnimJointShape")

Transform271.addChildren(Shape272)

HAnimSegment269.addChildren(Transform271)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape273 = Shape()
LineSet274 = LineSet()
LineSet274.setVertexCount([2])
Coordinate275 = Coordinate()
Coordinate275.setPoint([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])

LineSet274.setCoord(Coordinate275)
ColorRGBA276 = ColorRGBA()
ColorRGBA276.setUSE("HAnimSegmentLineColorRGBA")

LineSet274.setColor(ColorRGBA276)

Shape273.setGeometry(LineSet274)

HAnimSegment269.addChildren(Shape273)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape277 = Shape()
LineSet278 = LineSet()
LineSet278.setVertexCount([2])
Coordinate279 = Coordinate()
Coordinate279.setPoint([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])

LineSet278.setCoord(Coordinate279)
ColorRGBA280 = ColorRGBA()
ColorRGBA280.setUSE("HAnimSiteLineColorRGBA")

LineSet278.setColor(ColorRGBA280)

Shape277.setGeometry(LineSet278)

HAnimSegment269.addChildren(Shape277)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape281 = Shape()
LineSet282 = LineSet()
LineSet282.setVertexCount([2])
Coordinate283 = Coordinate()
Coordinate283.setPoint([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])

LineSet282.setCoord(Coordinate283)
ColorRGBA284 = ColorRGBA()
ColorRGBA284.setUSE("HAnimSiteLineColorRGBA")

LineSet282.setColor(ColorRGBA284)

Shape281.setGeometry(LineSet282)

HAnimSegment269.addChildren(Shape281)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape285 = Shape()
LineSet286 = LineSet()
LineSet286.setVertexCount([2])
Coordinate287 = Coordinate()
Coordinate287.setPoint([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])

LineSet286.setCoord(Coordinate287)
ColorRGBA288 = ColorRGBA()
ColorRGBA288.setUSE("HAnimSiteLineColorRGBA")

LineSet286.setColor(ColorRGBA288)

Shape285.setGeometry(LineSet286)

HAnimSegment269.addChildren(Shape285)
HAnimSite289 = HAnimSite()
HAnimSite289.setName("r_knee_crease_pt")
HAnimSite289.setDEF("hanim_r_knee_crease_pt")
HAnimSite289.setTranslation([-0.0825,0.4932,-0.0326])
#HAnimSite visualization shape
TouchSensor290 = TouchSensor()
TouchSensor290.setDescription("HAnimSite r_knee_crease")

HAnimSite289.addChildren(TouchSensor290)
Shape291 = Shape()
Shape291.setUSE("HAnimSiteShape")

HAnimSite289.addChildren(Shape291)

HAnimSegment269.addChildren(HAnimSite289)
HAnimSite292 = HAnimSite()
HAnimSite292.setName("r_femoral_lateral_epicn_pt")
HAnimSite292.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite292.setTranslation([-0.1421,0.4992,0.031])
#HAnimSite visualization shape
TouchSensor293 = TouchSensor()
TouchSensor293.setDescription("HAnimSite r_femoral_lateral_epicn")

HAnimSite292.addChildren(TouchSensor293)
Shape294 = Shape()
Shape294.setUSE("HAnimSiteShape")

HAnimSite292.addChildren(Shape294)

HAnimSegment269.addChildren(HAnimSite292)
HAnimSite295 = HAnimSite()
HAnimSite295.setName("r_femoral_medial_epicn_pt")
HAnimSite295.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite295.setTranslation([-0.0221,0.5014,0.0289])
#HAnimSite visualization shape
TouchSensor296 = TouchSensor()
TouchSensor296.setDescription("HAnimSite r_femoral_medial_epicn")

HAnimSite295.addChildren(TouchSensor296)
Shape297 = Shape()
Shape297.setUSE("HAnimSiteShape")

HAnimSite295.addChildren(Shape297)

HAnimSegment269.addChildren(HAnimSite295)

HAnimJoint268.addChildren(HAnimSegment269)
HAnimJoint298 = HAnimJoint()
HAnimJoint298.setName("r_knee")
HAnimJoint298.setDEF("hanim_r_knee")
HAnimJoint298.setCenter([-0.104,0.4867,0.0308])
HAnimJoint298.setUlimit([0,0,0])
HAnimJoint298.setLlimit([0,0,0])
HAnimJoint298.setStiffness([0,0,0])
HAnimSegment299 = HAnimSegment()
HAnimSegment299.setName("r_calf")
HAnimSegment299.setDEF("hanim_r_calf")
#<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
TouchSensor300 = TouchSensor()
TouchSensor300.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment299.addChildren(TouchSensor300)
Transform301 = Transform()
Transform301.setTranslation([-0.104,0.4867,0.0308])
Shape302 = Shape()
Shape302.setUSE("HAnimJointShape")

Transform301.addChildren(Shape302)

HAnimSegment299.addChildren(Transform301)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape303 = Shape()
LineSet304 = LineSet()
LineSet304.setVertexCount([2])
Coordinate305 = Coordinate()
Coordinate305.setPoint([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])

LineSet304.setCoord(Coordinate305)
ColorRGBA306 = ColorRGBA()
ColorRGBA306.setUSE("HAnimSegmentLineColorRGBA")

LineSet304.setColor(ColorRGBA306)

Shape303.setGeometry(LineSet304)

HAnimSegment299.addChildren(Shape303)

HAnimJoint298.addChildren(HAnimSegment299)
HAnimJoint307 = HAnimJoint()
HAnimJoint307.setName("r_ankle")
HAnimJoint307.setDEF("hanim_r_ankle")
HAnimJoint307.setCenter([-0.1101,0.0656,-0.0736])
HAnimJoint307.setUlimit([0,0,0])
HAnimJoint307.setLlimit([0,0,0])
HAnimJoint307.setStiffness([0,0,0])
HAnimSegment308 = HAnimSegment()
HAnimSegment308.setName("r_hindfoot")
HAnimSegment308.setDEF("hanim_r_hindfoot")
#<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
TouchSensor309 = TouchSensor()
TouchSensor309.setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot")

HAnimSegment308.addChildren(TouchSensor309)
Transform310 = Transform()
Transform310.setTranslation([-0.1101,0.0656,-0.0736])
Shape311 = Shape()
Shape311.setUSE("HAnimJointShape")

Transform310.addChildren(Shape311)

HAnimSegment308.addChildren(Transform310)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape312 = Shape()
LineSet313 = LineSet()
LineSet313.setVertexCount([2])
Coordinate314 = Coordinate()
Coordinate314.setPoint([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])

LineSet313.setCoord(Coordinate314)
ColorRGBA315 = ColorRGBA()
ColorRGBA315.setUSE("HAnimSegmentLineColorRGBA")

LineSet313.setColor(ColorRGBA315)

Shape312.setGeometry(LineSet313)

HAnimSegment308.addChildren(Shape312)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape316 = Shape()
LineSet317 = LineSet()
LineSet317.setVertexCount([2])
Coordinate318 = Coordinate()
Coordinate318.setPoint([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])

LineSet317.setCoord(Coordinate318)
ColorRGBA319 = ColorRGBA()
ColorRGBA319.setUSE("HAnimSiteLineColorRGBA")

LineSet317.setColor(ColorRGBA319)

Shape316.setGeometry(LineSet317)

HAnimSegment308.addChildren(Shape316)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape320 = Shape()
LineSet321 = LineSet()
LineSet321.setVertexCount([2])
Coordinate322 = Coordinate()
Coordinate322.setPoint([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])

LineSet321.setCoord(Coordinate322)
ColorRGBA323 = ColorRGBA()
ColorRGBA323.setUSE("HAnimSiteLineColorRGBA")

LineSet321.setColor(ColorRGBA323)

Shape320.setGeometry(LineSet321)

HAnimSegment308.addChildren(Shape320)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape324 = Shape()
LineSet325 = LineSet()
LineSet325.setVertexCount([2])
Coordinate326 = Coordinate()
Coordinate326.setPoint([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])

LineSet325.setCoord(Coordinate326)
ColorRGBA327 = ColorRGBA()
ColorRGBA327.setUSE("HAnimSiteLineColorRGBA")

LineSet325.setColor(ColorRGBA327)

Shape324.setGeometry(LineSet325)

HAnimSegment308.addChildren(Shape324)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape328 = Shape()
LineSet329 = LineSet()
LineSet329.setVertexCount([2])
Coordinate330 = Coordinate()
Coordinate330.setPoint([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])

LineSet329.setCoord(Coordinate330)
ColorRGBA331 = ColorRGBA()
ColorRGBA331.setUSE("HAnimSiteLineColorRGBA")

LineSet329.setColor(ColorRGBA331)

Shape328.setGeometry(LineSet329)

HAnimSegment308.addChildren(Shape328)
HAnimSite332 = HAnimSite()
HAnimSite332.setName("r_lateral_malleolus_pt")
HAnimSite332.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite332.setTranslation([-0.1006,0.0658,-0.1075])
#HAnimSite visualization shape
TouchSensor333 = TouchSensor()
TouchSensor333.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite332.addChildren(TouchSensor333)
Shape334 = Shape()
Shape334.setUSE("HAnimSiteShape")

HAnimSite332.addChildren(Shape334)

HAnimSegment308.addChildren(HAnimSite332)
HAnimSite335 = HAnimSite()
HAnimSite335.setName("r_medial_malleolus_pt")
HAnimSite335.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite335.setTranslation([-0.0591,0.076,-0.0928])
#HAnimSite visualization shape
TouchSensor336 = TouchSensor()
TouchSensor336.setDescription("HAnimSite r_medial_malleolus")

HAnimSite335.addChildren(TouchSensor336)
Shape337 = Shape()
Shape337.setUSE("HAnimSiteShape")

HAnimSite335.addChildren(Shape337)

HAnimSegment308.addChildren(HAnimSite335)
HAnimSite338 = HAnimSite()
HAnimSite338.setName("r_sphyrion_pt")
HAnimSite338.setDEF("hanim_r_sphyrion_pt")
HAnimSite338.setTranslation([-0.0603,0.061,-0.1002])
#HAnimSite visualization shape
TouchSensor339 = TouchSensor()
TouchSensor339.setDescription("HAnimSite r_sphyrion")

HAnimSite338.addChildren(TouchSensor339)
Shape340 = Shape()
Shape340.setUSE("HAnimSiteShape")

HAnimSite338.addChildren(Shape340)

HAnimSegment308.addChildren(HAnimSite338)
HAnimSite341 = HAnimSite()
HAnimSite341.setName("r_calcaneous_post_pt")
HAnimSite341.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite341.setTranslation([-0.0692,0.0297,-0.1221])
#HAnimSite visualization shape
TouchSensor342 = TouchSensor()
TouchSensor342.setDescription("HAnimSite r_calcaneous_post")

HAnimSite341.addChildren(TouchSensor342)
Shape343 = Shape()
Shape343.setUSE("HAnimSiteShape")

HAnimSite341.addChildren(Shape343)

HAnimSegment308.addChildren(HAnimSite341)

HAnimJoint307.addChildren(HAnimSegment308)
HAnimJoint344 = HAnimJoint()
HAnimJoint344.setName("r_subtalar")
HAnimJoint344.setDEF("hanim_r_subtalar")
HAnimJoint344.setCenter([-0.1086,0.0001,-0.0368])
HAnimJoint344.setUlimit([0,0,0])
HAnimJoint344.setLlimit([0,0,0])
HAnimJoint344.setStiffness([0,0,0])
HAnimSegment345 = HAnimSegment()
HAnimSegment345.setName("r_midproximal")
HAnimSegment345.setDEF("hanim_r_midproximal")
#<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
TouchSensor346 = TouchSensor()
TouchSensor346.setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal")

HAnimSegment345.addChildren(TouchSensor346)
Transform347 = Transform()
Transform347.setTranslation([-0.1086,0.0001,-0.0368])
Shape348 = Shape()
Shape348.setUSE("HAnimJointShape")

Transform347.addChildren(Shape348)

HAnimSegment345.addChildren(Transform347)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape349 = Shape()
LineSet350 = LineSet()
LineSet350.setVertexCount([2])
Coordinate351 = Coordinate()
Coordinate351.setPoint([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])

LineSet350.setCoord(Coordinate351)
ColorRGBA352 = ColorRGBA()
ColorRGBA352.setUSE("HAnimSegmentLineColorRGBA")

LineSet350.setColor(ColorRGBA352)

Shape349.setGeometry(LineSet350)

HAnimSegment345.addChildren(Shape349)

HAnimJoint344.addChildren(HAnimSegment345)
HAnimJoint353 = HAnimJoint()
HAnimJoint353.setName("r_midtarsal")
HAnimJoint353.setDEF("hanim_r_midtarsal")
HAnimJoint353.setCenter([-0.1086,0.0001,0.0368])
HAnimJoint353.setUlimit([0,0,0])
HAnimJoint353.setLlimit([0,0,0])
HAnimJoint353.setStiffness([0,0,0])
HAnimSegment354 = HAnimSegment()
HAnimSegment354.setName("r_middistal")
HAnimSegment354.setDEF("hanim_r_middistal")
#<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
TouchSensor355 = TouchSensor()
TouchSensor355.setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal")

HAnimSegment354.addChildren(TouchSensor355)
Transform356 = Transform()
Transform356.setTranslation([-0.1086,0.0001,0.0368])
Shape357 = Shape()
Shape357.setUSE("HAnimJointShape")

Transform356.addChildren(Shape357)

HAnimSegment354.addChildren(Transform356)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape358 = Shape()
LineSet359 = LineSet()
LineSet359.setVertexCount([2])
Coordinate360 = Coordinate()
Coordinate360.setPoint([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])

LineSet359.setCoord(Coordinate360)
ColorRGBA361 = ColorRGBA()
ColorRGBA361.setUSE("HAnimSegmentLineColorRGBA")

LineSet359.setColor(ColorRGBA361)

Shape358.setGeometry(LineSet359)

HAnimSegment354.addChildren(Shape358)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape362 = Shape()
LineSet363 = LineSet()
LineSet363.setVertexCount([2])
Coordinate364 = Coordinate()
Coordinate364.setPoint([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])

LineSet363.setCoord(Coordinate364)
ColorRGBA365 = ColorRGBA()
ColorRGBA365.setUSE("HAnimSiteLineColorRGBA")

LineSet363.setColor(ColorRGBA365)

Shape362.setGeometry(LineSet363)

HAnimSegment354.addChildren(Shape362)
HAnimSite366 = HAnimSite()
HAnimSite366.setName("r_metatarsal_pha1_pt")
HAnimSite366.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite366.setTranslation([-0.0521,0.026,0.0127])
#HAnimSite visualization shape
TouchSensor367 = TouchSensor()
TouchSensor367.setDescription("HAnimSite r_metatarsal_pha1")

HAnimSite366.addChildren(TouchSensor367)
Shape368 = Shape()
Shape368.setUSE("HAnimSiteShape")

HAnimSite366.addChildren(Shape368)

HAnimSegment354.addChildren(HAnimSite366)

HAnimJoint353.addChildren(HAnimSegment354)
HAnimJoint369 = HAnimJoint()
HAnimJoint369.setName("r_metatarsal")
HAnimJoint369.setDEF("hanim_r_metatarsal")
HAnimJoint369.setCenter([-0.1086,0,0.0762])
HAnimJoint369.setUlimit([0,0,0])
HAnimJoint369.setLlimit([0,0,0])
HAnimJoint369.setStiffness([0,0,0])
HAnimSegment370 = HAnimSegment()
HAnimSegment370.setName("r_forefoot")
HAnimSegment370.setDEF("hanim_r_forefoot")
#<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
TouchSensor371 = TouchSensor()
TouchSensor371.setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")

HAnimSegment370.addChildren(TouchSensor371)
Transform372 = Transform()
Transform372.setTranslation([-0.1086,0,0.0762])
Shape373 = Shape()
Shape373.setUSE("HAnimJointShape")

Transform372.addChildren(Shape373)

HAnimSegment370.addChildren(Transform372)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape374 = Shape()
LineSet375 = LineSet()
LineSet375.setVertexCount([2])
Coordinate376 = Coordinate()
Coordinate376.setPoint([-0.1086,0,0.0762,-0.1043,0.0227,0.145])

LineSet375.setCoord(Coordinate376)
ColorRGBA377 = ColorRGBA()
ColorRGBA377.setUSE("HAnimSiteLineColorRGBA")

LineSet375.setColor(ColorRGBA377)

Shape374.setGeometry(LineSet375)

HAnimSegment370.addChildren(Shape374)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape378 = Shape()
LineSet379 = LineSet()
LineSet379.setVertexCount([2])
Coordinate380 = Coordinate()
Coordinate380.setPoint([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])

LineSet379.setCoord(Coordinate380)
ColorRGBA381 = ColorRGBA()
ColorRGBA381.setUSE("HAnimSiteLineColorRGBA")

LineSet379.setColor(ColorRGBA381)

Shape378.setGeometry(LineSet379)

HAnimSegment370.addChildren(Shape378)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape382 = Shape()
LineSet383 = LineSet()
LineSet383.setVertexCount([2])
Coordinate384 = Coordinate()
Coordinate384.setPoint([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])

LineSet383.setCoord(Coordinate384)
ColorRGBA385 = ColorRGBA()
ColorRGBA385.setUSE("HAnimSiteLineColorRGBA")

LineSet383.setColor(ColorRGBA385)

Shape382.setGeometry(LineSet383)

HAnimSegment370.addChildren(Shape382)
HAnimSite386 = HAnimSite()
HAnimSite386.setName("r_forefoot_tip")
HAnimSite386.setDEF("hanim_r_forefoot_tip")
HAnimSite386.setTranslation([-0.1043,0.0227,0.145])
#HAnimSite visualization shape
TouchSensor387 = TouchSensor()
TouchSensor387.setDescription("HAnimSite r_forefoot_tip")

HAnimSite386.addChildren(TouchSensor387)
Shape388 = Shape()
Shape388.setUSE("HAnimSiteShape")

HAnimSite386.addChildren(Shape388)

HAnimSegment370.addChildren(HAnimSite386)
HAnimSite389 = HAnimSite()
HAnimSite389.setName("r_metatarsal_pha5_pt")
HAnimSite389.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite389.setTranslation([-0.1523,0.0166,0.0895])
#HAnimSite visualization shape
TouchSensor390 = TouchSensor()
TouchSensor390.setDescription("HAnimSite r_metatarsal_pha5")

HAnimSite389.addChildren(TouchSensor390)
Shape391 = Shape()
Shape391.setUSE("HAnimSiteShape")

HAnimSite389.addChildren(Shape391)

HAnimSegment370.addChildren(HAnimSite389)
HAnimSite392 = HAnimSite()
HAnimSite392.setName("r_digit2_pt")
HAnimSite392.setDEF("hanim_r_digit2_pt")
HAnimSite392.setTranslation([-0.0883,0.0134,0.1383])
#HAnimSite visualization shape
TouchSensor393 = TouchSensor()
TouchSensor393.setDescription("HAnimSite r_digit2")

HAnimSite392.addChildren(TouchSensor393)
Shape394 = Shape()
Shape394.setUSE("HAnimSiteShape")

HAnimSite392.addChildren(Shape394)

HAnimSegment370.addChildren(HAnimSite392)

HAnimJoint369.addChildren(HAnimSegment370)

HAnimJoint353.addChildren(HAnimJoint369)

HAnimJoint344.addChildren(HAnimJoint353)

HAnimJoint307.addChildren(HAnimJoint344)

HAnimJoint298.addChildren(HAnimJoint307)

HAnimJoint268.addChildren(HAnimJoint298)

HAnimJoint61.addChildren(HAnimJoint268)

HAnimJoint45.addChildren(HAnimJoint61)
HAnimJoint395 = HAnimJoint()
HAnimJoint395.setName("vl5")
HAnimJoint395.setDEF("hanim_vl5")
HAnimJoint395.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint395.setUlimit([0,0,0])
HAnimJoint395.setLlimit([0,0,0])
HAnimJoint395.setStiffness([0,0,0])
HAnimSegment396 = HAnimSegment()
HAnimSegment396.setName("l5")
HAnimSegment396.setDEF("hanim_l5")
#<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
TouchSensor397 = TouchSensor()
TouchSensor397.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment396.addChildren(TouchSensor397)
Transform398 = Transform()
Transform398.setTranslation([0.0028,1.0568,-0.0776])
Shape399 = Shape()
Shape399.setUSE("HAnimJointShape")

Transform398.addChildren(Shape399)

HAnimSegment396.addChildren(Transform398)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape400 = Shape()
LineSet401 = LineSet()
LineSet401.setVertexCount([2])
Coordinate402 = Coordinate()
Coordinate402.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet401.setCoord(Coordinate402)
ColorRGBA403 = ColorRGBA()
ColorRGBA403.setUSE("HAnimSegmentLineColorRGBA")

LineSet401.setColor(ColorRGBA403)

Shape400.setGeometry(LineSet401)

HAnimSegment396.addChildren(Shape400)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape404 = Shape()
LineSet405 = LineSet()
LineSet405.setVertexCount([2])
Coordinate406 = Coordinate()
Coordinate406.setPoint([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])

LineSet405.setCoord(Coordinate406)
ColorRGBA407 = ColorRGBA()
ColorRGBA407.setUSE("HAnimSiteLineColorRGBA")

LineSet405.setColor(ColorRGBA407)

Shape404.setGeometry(LineSet405)

HAnimSegment396.addChildren(Shape404)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape408 = Shape()
LineSet409 = LineSet()
LineSet409.setVertexCount([2])
Coordinate410 = Coordinate()
Coordinate410.setPoint([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])

LineSet409.setCoord(Coordinate410)
ColorRGBA411 = ColorRGBA()
ColorRGBA411.setUSE("HAnimSiteLineColorRGBA")

LineSet409.setColor(ColorRGBA411)

Shape408.setGeometry(LineSet409)

HAnimSegment396.addChildren(Shape408)
HAnimSite412 = HAnimSite()
HAnimSite412.setName("waist_preferred_post_pt")
HAnimSite412.setDEF("hanim_waist_preferred_post_pt")
HAnimSite412.setTranslation([0,1.0915,-0.1091])
#HAnimSite visualization shape
TouchSensor413 = TouchSensor()
TouchSensor413.setDescription("HAnimSite waist_preferred_post")

HAnimSite412.addChildren(TouchSensor413)
Shape414 = Shape()
Shape414.setUSE("HAnimSiteShape")

HAnimSite412.addChildren(Shape414)

HAnimSegment396.addChildren(HAnimSite412)
HAnimSite415 = HAnimSite()
HAnimSite415.setName("navel_pt")
HAnimSite415.setDEF("hanim_navel_pt")
HAnimSite415.setTranslation([0.0069,1.0966,0.1017])
#HAnimSite visualization shape
TouchSensor416 = TouchSensor()
TouchSensor416.setDescription("HAnimSite navel")

HAnimSite415.addChildren(TouchSensor416)
Shape417 = Shape()
Shape417.setUSE("HAnimSiteShape")

HAnimSite415.addChildren(Shape417)

HAnimSegment396.addChildren(HAnimSite415)

HAnimJoint395.addChildren(HAnimSegment396)
HAnimJoint418 = HAnimJoint()
HAnimJoint418.setName("vl4")
HAnimJoint418.setDEF("hanim_vl4")
HAnimJoint418.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint418.setUlimit([0,0,0])
HAnimJoint418.setLlimit([0,0,0])
HAnimJoint418.setStiffness([0,0,0])
HAnimSegment419 = HAnimSegment()
HAnimSegment419.setName("l4")
HAnimSegment419.setDEF("hanim_l4")
#<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
TouchSensor420 = TouchSensor()
TouchSensor420.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment419.addChildren(TouchSensor420)
Transform421 = Transform()
Transform421.setTranslation([0.0035,1.0925,-0.0787])
Shape422 = Shape()
Shape422.setUSE("HAnimJointShape")

Transform421.addChildren(Shape422)

HAnimSegment419.addChildren(Transform421)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape423 = Shape()
LineSet424 = LineSet()
LineSet424.setVertexCount([2])
Coordinate425 = Coordinate()
Coordinate425.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet424.setCoord(Coordinate425)
ColorRGBA426 = ColorRGBA()
ColorRGBA426.setUSE("HAnimSegmentLineColorRGBA")

LineSet424.setColor(ColorRGBA426)

Shape423.setGeometry(LineSet424)

HAnimSegment419.addChildren(Shape423)

HAnimJoint418.addChildren(HAnimSegment419)
HAnimJoint427 = HAnimJoint()
HAnimJoint427.setName("vl3")
HAnimJoint427.setDEF("hanim_vl3")
HAnimJoint427.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint427.setUlimit([0,0,0])
HAnimJoint427.setLlimit([0,0,0])
HAnimJoint427.setStiffness([0,0,0])
HAnimSegment428 = HAnimSegment()
HAnimSegment428.setName("l3")
HAnimSegment428.setDEF("hanim_l3")
#<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
TouchSensor429 = TouchSensor()
TouchSensor429.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment428.addChildren(TouchSensor429)
Transform430 = Transform()
Transform430.setTranslation([0.0041,1.1276,-0.0796])
Shape431 = Shape()
Shape431.setUSE("HAnimJointShape")

Transform430.addChildren(Shape431)

HAnimSegment428.addChildren(Transform430)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape432 = Shape()
LineSet433 = LineSet()
LineSet433.setVertexCount([2])
Coordinate434 = Coordinate()
Coordinate434.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet433.setCoord(Coordinate434)
ColorRGBA435 = ColorRGBA()
ColorRGBA435.setUSE("HAnimSegmentLineColorRGBA")

LineSet433.setColor(ColorRGBA435)

Shape432.setGeometry(LineSet433)

HAnimSegment428.addChildren(Shape432)

HAnimJoint427.addChildren(HAnimSegment428)
HAnimJoint436 = HAnimJoint()
HAnimJoint436.setName("vl2")
HAnimJoint436.setDEF("hanim_vl2")
HAnimJoint436.setCenter([0.0045,1.1546,-0.08])
HAnimJoint436.setUlimit([0,0,0])
HAnimJoint436.setLlimit([0,0,0])
HAnimJoint436.setStiffness([0,0,0])
HAnimSegment437 = HAnimSegment()
HAnimSegment437.setName("l2")
HAnimSegment437.setDEF("hanim_l2")
#<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
TouchSensor438 = TouchSensor()
TouchSensor438.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment437.addChildren(TouchSensor438)
Transform439 = Transform()
Transform439.setTranslation([0.0045,1.1546,-0.08])
Shape440 = Shape()
Shape440.setUSE("HAnimJointShape")

Transform439.addChildren(Shape440)

HAnimSegment437.addChildren(Transform439)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape441 = Shape()
LineSet442 = LineSet()
LineSet442.setVertexCount([2])
Coordinate443 = Coordinate()
Coordinate443.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet442.setCoord(Coordinate443)
ColorRGBA444 = ColorRGBA()
ColorRGBA444.setUSE("HAnimSegmentLineColorRGBA")

LineSet442.setColor(ColorRGBA444)

Shape441.setGeometry(LineSet442)

HAnimSegment437.addChildren(Shape441)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape445 = Shape()
LineSet446 = LineSet()
LineSet446.setVertexCount([2])
Coordinate447 = Coordinate()
Coordinate447.setPoint([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])

LineSet446.setCoord(Coordinate447)
ColorRGBA448 = ColorRGBA()
ColorRGBA448.setUSE("HAnimSiteLineColorRGBA")

LineSet446.setColor(ColorRGBA448)

Shape445.setGeometry(LineSet446)

HAnimSegment437.addChildren(Shape445)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape449 = Shape()
LineSet450 = LineSet()
LineSet450.setVertexCount([2])
Coordinate451 = Coordinate()
Coordinate451.setPoint([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])

LineSet450.setCoord(Coordinate451)
ColorRGBA452 = ColorRGBA()
ColorRGBA452.setUSE("HAnimSiteLineColorRGBA")

LineSet450.setColor(ColorRGBA452)

Shape449.setGeometry(LineSet450)

HAnimSegment437.addChildren(Shape449)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape453 = Shape()
LineSet454 = LineSet()
LineSet454.setVertexCount([2])
Coordinate455 = Coordinate()
Coordinate455.setPoint([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])

LineSet454.setCoord(Coordinate455)
ColorRGBA456 = ColorRGBA()
ColorRGBA456.setUSE("HAnimSiteLineColorRGBA")

LineSet454.setColor(ColorRGBA456)

Shape453.setGeometry(LineSet454)

HAnimSegment437.addChildren(Shape453)
HAnimSite457 = HAnimSite()
HAnimSite457.setName("r_rib10_pt")
HAnimSite457.setDEF("hanim_r_rib10_pt")
HAnimSite457.setTranslation([-0.0711,1.1941,0.1016])
#HAnimSite visualization shape
TouchSensor458 = TouchSensor()
TouchSensor458.setDescription("HAnimSite r_rib10")

HAnimSite457.addChildren(TouchSensor458)
Shape459 = Shape()
Shape459.setUSE("HAnimSiteShape")

HAnimSite457.addChildren(Shape459)

HAnimSegment437.addChildren(HAnimSite457)
HAnimSite460 = HAnimSite()
HAnimSite460.setName("l_rib10_pt")
HAnimSite460.setDEF("hanim_l_rib10_pt")
HAnimSite460.setTranslation([0.0871,1.1925,0.0992])
#HAnimSite visualization shape
TouchSensor461 = TouchSensor()
TouchSensor461.setDescription("HAnimSite l_rib10")

HAnimSite460.addChildren(TouchSensor461)
Shape462 = Shape()
Shape462.setUSE("HAnimSiteShape")

HAnimSite460.addChildren(Shape462)

HAnimSegment437.addChildren(HAnimSite460)
HAnimSite463 = HAnimSite()
HAnimSite463.setName("rib10_midspine_pt")
HAnimSite463.setDEF("hanim_rib10_midspine_pt")
HAnimSite463.setTranslation([0.0049,1.1908,-0.1113])
#HAnimSite visualization shape
TouchSensor464 = TouchSensor()
TouchSensor464.setDescription("HAnimSite rib10_midspine")

HAnimSite463.addChildren(TouchSensor464)
Shape465 = Shape()
Shape465.setUSE("HAnimSiteShape")

HAnimSite463.addChildren(Shape465)

HAnimSegment437.addChildren(HAnimSite463)

HAnimJoint436.addChildren(HAnimSegment437)
HAnimJoint466 = HAnimJoint()
HAnimJoint466.setName("vl1")
HAnimJoint466.setDEF("hanim_vl1")
HAnimJoint466.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint466.setUlimit([0,0,0])
HAnimJoint466.setLlimit([0,0,0])
HAnimJoint466.setStiffness([0,0,0])
HAnimSegment467 = HAnimSegment()
HAnimSegment467.setName("l1")
HAnimSegment467.setDEF("hanim_l1")
#<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
TouchSensor468 = TouchSensor()
TouchSensor468.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment467.addChildren(TouchSensor468)
Transform469 = Transform()
Transform469.setTranslation([0.0048,1.1912,-0.0805])
Shape470 = Shape()
Shape470.setUSE("HAnimJointShape")

Transform469.addChildren(Shape470)

HAnimSegment467.addChildren(Transform469)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape471 = Shape()
LineSet472 = LineSet()
LineSet472.setVertexCount([2])
Coordinate473 = Coordinate()
Coordinate473.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet472.setCoord(Coordinate473)
ColorRGBA474 = ColorRGBA()
ColorRGBA474.setUSE("HAnimSegmentLineColorRGBA")

LineSet472.setColor(ColorRGBA474)

Shape471.setGeometry(LineSet472)

HAnimSegment467.addChildren(Shape471)

HAnimJoint466.addChildren(HAnimSegment467)
HAnimJoint475 = HAnimJoint()
HAnimJoint475.setName("vt12")
HAnimJoint475.setDEF("hanim_vt12")
HAnimJoint475.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint475.setUlimit([0,0,0])
HAnimJoint475.setLlimit([0,0,0])
HAnimJoint475.setStiffness([0,0,0])
HAnimSegment476 = HAnimSegment()
HAnimSegment476.setName("t12")
HAnimSegment476.setDEF("hanim_t12")
#<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
TouchSensor477 = TouchSensor()
TouchSensor477.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment476.addChildren(TouchSensor477)
Transform478 = Transform()
Transform478.setTranslation([0.0051,1.2278,-0.0808])
Shape479 = Shape()
Shape479.setUSE("HAnimJointShape")

Transform478.addChildren(Shape479)

HAnimSegment476.addChildren(Transform478)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape480 = Shape()
LineSet481 = LineSet()
LineSet481.setVertexCount([2])
Coordinate482 = Coordinate()
Coordinate482.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet481.setCoord(Coordinate482)
ColorRGBA483 = ColorRGBA()
ColorRGBA483.setUSE("HAnimSegmentLineColorRGBA")

LineSet481.setColor(ColorRGBA483)

Shape480.setGeometry(LineSet481)

HAnimSegment476.addChildren(Shape480)

HAnimJoint475.addChildren(HAnimSegment476)
HAnimJoint484 = HAnimJoint()
HAnimJoint484.setName("vt11")
HAnimJoint484.setDEF("hanim_vt11")
HAnimJoint484.setCenter([0.0053,1.2679,-0.081])
HAnimJoint484.setUlimit([0,0,0])
HAnimJoint484.setLlimit([0,0,0])
HAnimJoint484.setStiffness([0,0,0])
HAnimSegment485 = HAnimSegment()
HAnimSegment485.setName("t11")
HAnimSegment485.setDEF("hanim_t11")
#<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
TouchSensor486 = TouchSensor()
TouchSensor486.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment485.addChildren(TouchSensor486)
Transform487 = Transform()
Transform487.setTranslation([0.0053,1.2679,-0.081])
Shape488 = Shape()
Shape488.setUSE("HAnimJointShape")

Transform487.addChildren(Shape488)

HAnimSegment485.addChildren(Transform487)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape489 = Shape()
LineSet490 = LineSet()
LineSet490.setVertexCount([2])
Coordinate491 = Coordinate()
Coordinate491.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet490.setCoord(Coordinate491)
ColorRGBA492 = ColorRGBA()
ColorRGBA492.setUSE("HAnimSegmentLineColorRGBA")

LineSet490.setColor(ColorRGBA492)

Shape489.setGeometry(LineSet490)

HAnimSegment485.addChildren(Shape489)

HAnimJoint484.addChildren(HAnimSegment485)
HAnimJoint493 = HAnimJoint()
HAnimJoint493.setName("vt10")
HAnimJoint493.setDEF("hanim_vt10")
HAnimJoint493.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint493.setUlimit([0,0,0])
HAnimJoint493.setLlimit([0,0,0])
HAnimJoint493.setStiffness([0,0,0])
HAnimSegment494 = HAnimSegment()
HAnimSegment494.setName("t10")
HAnimSegment494.setDEF("hanim_t10")
#<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
TouchSensor495 = TouchSensor()
TouchSensor495.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment494.addChildren(TouchSensor495)
Transform496 = Transform()
Transform496.setTranslation([0.0056,1.2848,-0.0822])
Shape497 = Shape()
Shape497.setUSE("HAnimJointShape")

Transform496.addChildren(Shape497)

HAnimSegment494.addChildren(Transform496)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape498 = Shape()
LineSet499 = LineSet()
LineSet499.setVertexCount([2])
Coordinate500 = Coordinate()
Coordinate500.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet499.setCoord(Coordinate500)
ColorRGBA501 = ColorRGBA()
ColorRGBA501.setUSE("HAnimSegmentLineColorRGBA")

LineSet499.setColor(ColorRGBA501)

Shape498.setGeometry(LineSet499)

HAnimSegment494.addChildren(Shape498)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape502 = Shape()
LineSet503 = LineSet()
LineSet503.setVertexCount([2])
Coordinate504 = Coordinate()
Coordinate504.setPoint([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])

LineSet503.setCoord(Coordinate504)
ColorRGBA505 = ColorRGBA()
ColorRGBA505.setUSE("HAnimSiteLineColorRGBA")

LineSet503.setColor(ColorRGBA505)

Shape502.setGeometry(LineSet503)

HAnimSegment494.addChildren(Shape502)
HAnimSite506 = HAnimSite()
HAnimSite506.setName("substernale_pt")
HAnimSite506.setDEF("hanim_substernale_pt")
HAnimSite506.setTranslation([0.0085,1.2995,0.1147])
#HAnimSite visualization shape
TouchSensor507 = TouchSensor()
TouchSensor507.setDescription("HAnimSite substernale")

HAnimSite506.addChildren(TouchSensor507)
Shape508 = Shape()
Shape508.setUSE("HAnimSiteShape")

HAnimSite506.addChildren(Shape508)

HAnimSegment494.addChildren(HAnimSite506)

HAnimJoint493.addChildren(HAnimSegment494)
HAnimJoint509 = HAnimJoint()
HAnimJoint509.setName("vt9")
HAnimJoint509.setDEF("hanim_vt9")
HAnimJoint509.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint509.setUlimit([0,0,0])
HAnimJoint509.setLlimit([0,0,0])
HAnimJoint509.setStiffness([0,0,0])
HAnimSegment510 = HAnimSegment()
HAnimSegment510.setName("t9")
HAnimSegment510.setDEF("hanim_t9")
#<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
TouchSensor511 = TouchSensor()
TouchSensor511.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment510.addChildren(TouchSensor511)
Transform512 = Transform()
Transform512.setTranslation([0.0057,1.3126,-0.0838])
Shape513 = Shape()
Shape513.setUSE("HAnimJointShape")

Transform512.addChildren(Shape513)

HAnimSegment510.addChildren(Transform512)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape514 = Shape()
LineSet515 = LineSet()
LineSet515.setVertexCount([2])
Coordinate516 = Coordinate()
Coordinate516.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet515.setCoord(Coordinate516)
ColorRGBA517 = ColorRGBA()
ColorRGBA517.setUSE("HAnimSegmentLineColorRGBA")

LineSet515.setColor(ColorRGBA517)

Shape514.setGeometry(LineSet515)

HAnimSegment510.addChildren(Shape514)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape518 = Shape()
LineSet519 = LineSet()
LineSet519.setVertexCount([2])
Coordinate520 = Coordinate()
Coordinate520.setPoint([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])

LineSet519.setCoord(Coordinate520)
ColorRGBA521 = ColorRGBA()
ColorRGBA521.setUSE("HAnimSiteLineColorRGBA")

LineSet519.setColor(ColorRGBA521)

Shape518.setGeometry(LineSet519)

HAnimSegment510.addChildren(Shape518)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape522 = Shape()
LineSet523 = LineSet()
LineSet523.setVertexCount([2])
Coordinate524 = Coordinate()
Coordinate524.setPoint([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])

LineSet523.setCoord(Coordinate524)
ColorRGBA525 = ColorRGBA()
ColorRGBA525.setUSE("HAnimSiteLineColorRGBA")

LineSet523.setColor(ColorRGBA525)

Shape522.setGeometry(LineSet523)

HAnimSegment510.addChildren(Shape522)
HAnimSite526 = HAnimSite()
HAnimSite526.setName("r_thelion_pt")
HAnimSite526.setDEF("hanim_r_thelion_pt")
HAnimSite526.setTranslation([-0.0736,1.3385,0.1217])
#HAnimSite visualization shape
TouchSensor527 = TouchSensor()
TouchSensor527.setDescription("HAnimSite r_thelion")

HAnimSite526.addChildren(TouchSensor527)
Shape528 = Shape()
Shape528.setUSE("HAnimSiteShape")

HAnimSite526.addChildren(Shape528)

HAnimSegment510.addChildren(HAnimSite526)
HAnimSite529 = HAnimSite()
HAnimSite529.setName("l_thelion_pt")
HAnimSite529.setDEF("hanim_l_thelion_pt")
HAnimSite529.setTranslation([0.0918,1.3382,0.1192])
#HAnimSite visualization shape
TouchSensor530 = TouchSensor()
TouchSensor530.setDescription("HAnimSite l_thelion")

HAnimSite529.addChildren(TouchSensor530)
Shape531 = Shape()
Shape531.setUSE("HAnimSiteShape")

HAnimSite529.addChildren(Shape531)

HAnimSegment510.addChildren(HAnimSite529)

HAnimJoint509.addChildren(HAnimSegment510)
HAnimJoint532 = HAnimJoint()
HAnimJoint532.setName("vt8")
HAnimJoint532.setDEF("hanim_vt8")
HAnimJoint532.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint532.setUlimit([0,0,0])
HAnimJoint532.setLlimit([0,0,0])
HAnimJoint532.setStiffness([0,0,0])
HAnimSegment533 = HAnimSegment()
HAnimSegment533.setName("t8")
HAnimSegment533.setDEF("hanim_t8")
#<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
TouchSensor534 = TouchSensor()
TouchSensor534.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment533.addChildren(TouchSensor534)
Transform535 = Transform()
Transform535.setTranslation([0.0057,1.3382,-0.0845])
Shape536 = Shape()
Shape536.setUSE("HAnimJointShape")

Transform535.addChildren(Shape536)

HAnimSegment533.addChildren(Transform535)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape537 = Shape()
LineSet538 = LineSet()
LineSet538.setVertexCount([2])
Coordinate539 = Coordinate()
Coordinate539.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet538.setCoord(Coordinate539)
ColorRGBA540 = ColorRGBA()
ColorRGBA540.setUSE("HAnimSegmentLineColorRGBA")

LineSet538.setColor(ColorRGBA540)

Shape537.setGeometry(LineSet538)

HAnimSegment533.addChildren(Shape537)

HAnimJoint532.addChildren(HAnimSegment533)
HAnimJoint541 = HAnimJoint()
HAnimJoint541.setName("vt7")
HAnimJoint541.setDEF("hanim_vt7")
HAnimJoint541.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint541.setUlimit([0,0,0])
HAnimJoint541.setLlimit([0,0,0])
HAnimJoint541.setStiffness([0,0,0])
HAnimSegment542 = HAnimSegment()
HAnimSegment542.setName("t7")
HAnimSegment542.setDEF("hanim_t7")
#<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
TouchSensor543 = TouchSensor()
TouchSensor543.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment542.addChildren(TouchSensor543)
Transform544 = Transform()
Transform544.setTranslation([0.0058,1.3625,-0.0833])
Shape545 = Shape()
Shape545.setUSE("HAnimJointShape")

Transform544.addChildren(Shape545)

HAnimSegment542.addChildren(Transform544)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape546 = Shape()
LineSet547 = LineSet()
LineSet547.setVertexCount([2])
Coordinate548 = Coordinate()
Coordinate548.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet547.setCoord(Coordinate548)
ColorRGBA549 = ColorRGBA()
ColorRGBA549.setUSE("HAnimSegmentLineColorRGBA")

LineSet547.setColor(ColorRGBA549)

Shape546.setGeometry(LineSet547)

HAnimSegment542.addChildren(Shape546)

HAnimJoint541.addChildren(HAnimSegment542)
HAnimJoint550 = HAnimJoint()
HAnimJoint550.setName("vt6")
HAnimJoint550.setDEF("hanim_vt6")
HAnimJoint550.setCenter([0.0059,1.3866,-0.08])
HAnimJoint550.setUlimit([0,0,0])
HAnimJoint550.setLlimit([0,0,0])
HAnimJoint550.setStiffness([0,0,0])
HAnimSegment551 = HAnimSegment()
HAnimSegment551.setName("t6")
HAnimSegment551.setDEF("hanim_t6")
#<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
TouchSensor552 = TouchSensor()
TouchSensor552.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment551.addChildren(TouchSensor552)
Transform553 = Transform()
Transform553.setTranslation([0.0059,1.3866,-0.08])
Shape554 = Shape()
Shape554.setUSE("HAnimJointShape")

Transform553.addChildren(Shape554)

HAnimSegment551.addChildren(Transform553)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape555 = Shape()
LineSet556 = LineSet()
LineSet556.setVertexCount([2])
Coordinate557 = Coordinate()
Coordinate557.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet556.setCoord(Coordinate557)
ColorRGBA558 = ColorRGBA()
ColorRGBA558.setUSE("HAnimSegmentLineColorRGBA")

LineSet556.setColor(ColorRGBA558)

Shape555.setGeometry(LineSet556)

HAnimSegment551.addChildren(Shape555)

HAnimJoint550.addChildren(HAnimSegment551)
HAnimJoint559 = HAnimJoint()
HAnimJoint559.setName("vt5")
HAnimJoint559.setDEF("hanim_vt5")
HAnimJoint559.setCenter([0.006,1.4102,-0.0745])
HAnimJoint559.setUlimit([0,0,0])
HAnimJoint559.setLlimit([0,0,0])
HAnimJoint559.setStiffness([0,0,0])
HAnimSegment560 = HAnimSegment()
HAnimSegment560.setName("t5")
HAnimSegment560.setDEF("hanim_t5")
#<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
TouchSensor561 = TouchSensor()
TouchSensor561.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment560.addChildren(TouchSensor561)
Transform562 = Transform()
Transform562.setTranslation([0.006,1.4102,-0.0745])
Shape563 = Shape()
Shape563.setUSE("HAnimJointShape")

Transform562.addChildren(Shape563)

HAnimSegment560.addChildren(Transform562)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape564 = Shape()
LineSet565 = LineSet()
LineSet565.setVertexCount([2])
Coordinate566 = Coordinate()
Coordinate566.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet565.setCoord(Coordinate566)
ColorRGBA567 = ColorRGBA()
ColorRGBA567.setUSE("HAnimSegmentLineColorRGBA")

LineSet565.setColor(ColorRGBA567)

Shape564.setGeometry(LineSet565)

HAnimSegment560.addChildren(Shape564)

HAnimJoint559.addChildren(HAnimSegment560)
HAnimJoint568 = HAnimJoint()
HAnimJoint568.setName("vt4")
HAnimJoint568.setDEF("hanim_vt4")
HAnimJoint568.setCenter([0.0061,1.432,-0.0675])
HAnimJoint568.setUlimit([0,0,0])
HAnimJoint568.setLlimit([0,0,0])
HAnimJoint568.setStiffness([0,0,0])
HAnimSegment569 = HAnimSegment()
HAnimSegment569.setName("t4")
HAnimSegment569.setDEF("hanim_t4")
#<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
TouchSensor570 = TouchSensor()
TouchSensor570.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment569.addChildren(TouchSensor570)
Transform571 = Transform()
Transform571.setTranslation([0.0061,1.432,-0.0675])
Shape572 = Shape()
Shape572.setUSE("HAnimJointShape")

Transform571.addChildren(Shape572)

HAnimSegment569.addChildren(Transform571)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape573 = Shape()
LineSet574 = LineSet()
LineSet574.setVertexCount([2])
Coordinate575 = Coordinate()
Coordinate575.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet574.setCoord(Coordinate575)
ColorRGBA576 = ColorRGBA()
ColorRGBA576.setUSE("HAnimSegmentLineColorRGBA")

LineSet574.setColor(ColorRGBA576)

Shape573.setGeometry(LineSet574)

HAnimSegment569.addChildren(Shape573)

HAnimJoint568.addChildren(HAnimSegment569)
HAnimJoint577 = HAnimJoint()
HAnimJoint577.setName("vt3")
HAnimJoint577.setDEF("hanim_vt3")
HAnimJoint577.setCenter([0.0062,1.4583,-0.057])
HAnimJoint577.setUlimit([0,0,0])
HAnimJoint577.setLlimit([0,0,0])
HAnimJoint577.setStiffness([0,0,0])
HAnimSegment578 = HAnimSegment()
HAnimSegment578.setName("t3")
HAnimSegment578.setDEF("hanim_t3")
#<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
TouchSensor579 = TouchSensor()
TouchSensor579.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment578.addChildren(TouchSensor579)
Transform580 = Transform()
Transform580.setTranslation([0.0062,1.4583,-0.057])
Shape581 = Shape()
Shape581.setUSE("HAnimJointShape")

Transform580.addChildren(Shape581)

HAnimSegment578.addChildren(Transform580)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape582 = Shape()
LineSet583 = LineSet()
LineSet583.setVertexCount([2])
Coordinate584 = Coordinate()
Coordinate584.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet583.setCoord(Coordinate584)
ColorRGBA585 = ColorRGBA()
ColorRGBA585.setUSE("HAnimSegmentLineColorRGBA")

LineSet583.setColor(ColorRGBA585)

Shape582.setGeometry(LineSet583)

HAnimSegment578.addChildren(Shape582)

HAnimJoint577.addChildren(HAnimSegment578)
HAnimJoint586 = HAnimJoint()
HAnimJoint586.setName("vt2")
HAnimJoint586.setDEF("hanim_vt2")
HAnimJoint586.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint586.setUlimit([0,0,0])
HAnimJoint586.setLlimit([0,0,0])
HAnimJoint586.setStiffness([0,0,0])
HAnimSegment587 = HAnimSegment()
HAnimSegment587.setName("t2")
HAnimSegment587.setDEF("hanim_t2")
#<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
TouchSensor588 = TouchSensor()
TouchSensor588.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment587.addChildren(TouchSensor588)
Transform589 = Transform()
Transform589.setTranslation([0.0063,1.4761,-0.0484])
Shape590 = Shape()
Shape590.setUSE("HAnimJointShape")

Transform589.addChildren(Shape590)

HAnimSegment587.addChildren(Transform589)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape591 = Shape()
LineSet592 = LineSet()
LineSet592.setVertexCount([2])
Coordinate593 = Coordinate()
Coordinate593.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet592.setCoord(Coordinate593)
ColorRGBA594 = ColorRGBA()
ColorRGBA594.setUSE("HAnimSegmentLineColorRGBA")

LineSet592.setColor(ColorRGBA594)

Shape591.setGeometry(LineSet592)

HAnimSegment587.addChildren(Shape591)

HAnimJoint586.addChildren(HAnimSegment587)
HAnimJoint595 = HAnimJoint()
HAnimJoint595.setName("vt1")
HAnimJoint595.setDEF("hanim_vt1")
HAnimJoint595.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint595.setUlimit([0,0,0])
HAnimJoint595.setLlimit([0,0,0])
HAnimJoint595.setStiffness([0,0,0])
HAnimSegment596 = HAnimSegment()
HAnimSegment596.setName("t1")
HAnimSegment596.setDEF("hanim_t1")
#<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
TouchSensor597 = TouchSensor()
TouchSensor597.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment596.addChildren(TouchSensor597)
Transform598 = Transform()
Transform598.setTranslation([0.0065,1.4951,-0.0387])
Shape599 = Shape()
Shape599.setUSE("HAnimJointShape")

Transform598.addChildren(Shape599)

HAnimSegment596.addChildren(Transform598)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape600 = Shape()
LineSet601 = LineSet()
LineSet601.setVertexCount([2])
Coordinate602 = Coordinate()
Coordinate602.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet601.setCoord(Coordinate602)
ColorRGBA603 = ColorRGBA()
ColorRGBA603.setUSE("HAnimSegmentLineColorRGBA")

LineSet601.setColor(ColorRGBA603)

Shape600.setGeometry(LineSet601)

HAnimSegment596.addChildren(Shape600)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape604 = Shape()
LineSet605 = LineSet()
LineSet605.setVertexCount([2])
Coordinate606 = Coordinate()
Coordinate606.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet605.setCoord(Coordinate606)
ColorRGBA607 = ColorRGBA()
ColorRGBA607.setUSE("HAnimSegmentLineColorRGBA")

LineSet605.setColor(ColorRGBA607)

Shape604.setGeometry(LineSet605)

HAnimSegment596.addChildren(Shape604)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape608 = Shape()
LineSet609 = LineSet()
LineSet609.setVertexCount([2])
Coordinate610 = Coordinate()
Coordinate610.setPoint([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])

LineSet609.setCoord(Coordinate610)
ColorRGBA611 = ColorRGBA()
ColorRGBA611.setUSE("HAnimSegmentLineColorRGBA")

LineSet609.setColor(ColorRGBA611)

Shape608.setGeometry(LineSet609)

HAnimSegment596.addChildren(Shape608)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape612 = Shape()
LineSet613 = LineSet()
LineSet613.setVertexCount([2])
Coordinate614 = Coordinate()
Coordinate614.setPoint([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])

LineSet613.setCoord(Coordinate614)
ColorRGBA615 = ColorRGBA()
ColorRGBA615.setUSE("HAnimSiteLineColorRGBA")

LineSet613.setColor(ColorRGBA615)

Shape612.setGeometry(LineSet613)

HAnimSegment596.addChildren(Shape612)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape616 = Shape()
LineSet617 = LineSet()
LineSet617.setVertexCount([2])
Coordinate618 = Coordinate()
Coordinate618.setPoint([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])

LineSet617.setCoord(Coordinate618)
ColorRGBA619 = ColorRGBA()
ColorRGBA619.setUSE("HAnimSiteLineColorRGBA")

LineSet617.setColor(ColorRGBA619)

Shape616.setGeometry(LineSet617)

HAnimSegment596.addChildren(Shape616)
HAnimSite620 = HAnimSite()
HAnimSite620.setName("suprasternale_pt")
HAnimSite620.setDEF("hanim_suprasternale_pt")
HAnimSite620.setTranslation([0.0084,1.4714,0.0551])
#HAnimSite visualization shape
TouchSensor621 = TouchSensor()
TouchSensor621.setDescription("HAnimSite suprasternale")

HAnimSite620.addChildren(TouchSensor621)
Shape622 = Shape()
Shape622.setUSE("HAnimSiteShape")

HAnimSite620.addChildren(Shape622)

HAnimSegment596.addChildren(HAnimSite620)
HAnimSite623 = HAnimSite()
HAnimSite623.setName("cervicale_pt")
HAnimSite623.setDEF("hanim_cervicale_pt")
HAnimSite623.setTranslation([0.0064,1.52,-0.0815])
#HAnimSite visualization shape
TouchSensor624 = TouchSensor()
TouchSensor624.setDescription("HAnimSite cervicale")

HAnimSite623.addChildren(TouchSensor624)
Shape625 = Shape()
Shape625.setUSE("HAnimSiteShape")

HAnimSite623.addChildren(Shape625)

HAnimSegment596.addChildren(HAnimSite623)

HAnimJoint595.addChildren(HAnimSegment596)
HAnimJoint626 = HAnimJoint()
HAnimJoint626.setName("vc7")
HAnimJoint626.setDEF("hanim_vc7")
HAnimJoint626.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint626.setUlimit([0,0,0])
HAnimJoint626.setLlimit([0,0,0])
HAnimJoint626.setStiffness([0,0,0])
HAnimSegment627 = HAnimSegment()
HAnimSegment627.setName("c7")
HAnimSegment627.setDEF("hanim_c7")
#<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
TouchSensor628 = TouchSensor()
TouchSensor628.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment627.addChildren(TouchSensor628)
Transform629 = Transform()
Transform629.setTranslation([0.0066,1.5132,-0.0301])
Shape630 = Shape()
Shape630.setUSE("HAnimJointShape")

Transform629.addChildren(Shape630)

HAnimSegment627.addChildren(Transform629)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape631 = Shape()
LineSet632 = LineSet()
LineSet632.setVertexCount([2])
Coordinate633 = Coordinate()
Coordinate633.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet632.setCoord(Coordinate633)
ColorRGBA634 = ColorRGBA()
ColorRGBA634.setUSE("HAnimSegmentLineColorRGBA")

LineSet632.setColor(ColorRGBA634)

Shape631.setGeometry(LineSet632)

HAnimSegment627.addChildren(Shape631)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape635 = Shape()
LineSet636 = LineSet()
LineSet636.setVertexCount([2])
Coordinate637 = Coordinate()
Coordinate637.setPoint([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])

LineSet636.setCoord(Coordinate637)
ColorRGBA638 = ColorRGBA()
ColorRGBA638.setUSE("HAnimSiteLineColorRGBA")

LineSet636.setColor(ColorRGBA638)

Shape635.setGeometry(LineSet636)

HAnimSegment627.addChildren(Shape635)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape639 = Shape()
LineSet640 = LineSet()
LineSet640.setVertexCount([2])
Coordinate641 = Coordinate()
Coordinate641.setPoint([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])

LineSet640.setCoord(Coordinate641)
ColorRGBA642 = ColorRGBA()
ColorRGBA642.setUSE("HAnimSiteLineColorRGBA")

LineSet640.setColor(ColorRGBA642)

Shape639.setGeometry(LineSet640)

HAnimSegment627.addChildren(Shape639)
HAnimSite643 = HAnimSite()
HAnimSite643.setName("r_neck_base_pt")
HAnimSite643.setDEF("hanim_r_neck_base_pt")
HAnimSite643.setTranslation([-0.0419,1.5149,-0.022])
#HAnimSite visualization shape
TouchSensor644 = TouchSensor()
TouchSensor644.setDescription("HAnimSite r_neck_base")

HAnimSite643.addChildren(TouchSensor644)
Shape645 = Shape()
Shape645.setUSE("HAnimSiteShape")

HAnimSite643.addChildren(Shape645)

HAnimSegment627.addChildren(HAnimSite643)
HAnimSite646 = HAnimSite()
HAnimSite646.setName("l_neck_base_pt")
HAnimSite646.setDEF("hanim_l_neck_base_pt")
HAnimSite646.setTranslation([0.0646,1.5141,-0.038])
#HAnimSite visualization shape
TouchSensor647 = TouchSensor()
TouchSensor647.setDescription("HAnimSite l_neck_base")

HAnimSite646.addChildren(TouchSensor647)
Shape648 = Shape()
Shape648.setUSE("HAnimSiteShape")

HAnimSite646.addChildren(Shape648)

HAnimSegment627.addChildren(HAnimSite646)

HAnimJoint626.addChildren(HAnimSegment627)
HAnimJoint649 = HAnimJoint()
HAnimJoint649.setName("vc6")
HAnimJoint649.setDEF("hanim_vc6")
HAnimJoint649.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint649.setUlimit([0,0,0])
HAnimJoint649.setLlimit([0,0,0])
HAnimJoint649.setStiffness([0,0,0])
HAnimSegment650 = HAnimSegment()
HAnimSegment650.setName("c6")
HAnimSegment650.setDEF("hanim_c6")
#<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
TouchSensor651 = TouchSensor()
TouchSensor651.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment650.addChildren(TouchSensor651)
Transform652 = Transform()
Transform652.setTranslation([0.0066,1.5357,-0.0143])
Shape653 = Shape()
Shape653.setUSE("HAnimJointShape")

Transform652.addChildren(Shape653)

HAnimSegment650.addChildren(Transform652)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape654 = Shape()
LineSet655 = LineSet()
LineSet655.setVertexCount([2])
Coordinate656 = Coordinate()
Coordinate656.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet655.setCoord(Coordinate656)
ColorRGBA657 = ColorRGBA()
ColorRGBA657.setUSE("HAnimSegmentLineColorRGBA")

LineSet655.setColor(ColorRGBA657)

Shape654.setGeometry(LineSet655)

HAnimSegment650.addChildren(Shape654)

HAnimJoint649.addChildren(HAnimSegment650)
HAnimJoint658 = HAnimJoint()
HAnimJoint658.setName("vc5")
HAnimJoint658.setDEF("hanim_vc5")
HAnimJoint658.setCenter([0.0066,1.552,-0.0082])
HAnimJoint658.setUlimit([0,0,0])
HAnimJoint658.setLlimit([0,0,0])
HAnimJoint658.setStiffness([0,0,0])
HAnimSegment659 = HAnimSegment()
HAnimSegment659.setName("c5")
HAnimSegment659.setDEF("hanim_c5")
#<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
TouchSensor660 = TouchSensor()
TouchSensor660.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment659.addChildren(TouchSensor660)
Transform661 = Transform()
Transform661.setTranslation([0.0066,1.552,-0.0082])
Shape662 = Shape()
Shape662.setUSE("HAnimJointShape")

Transform661.addChildren(Shape662)

HAnimSegment659.addChildren(Transform661)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape663 = Shape()
LineSet664 = LineSet()
LineSet664.setVertexCount([2])
Coordinate665 = Coordinate()
Coordinate665.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet664.setCoord(Coordinate665)
ColorRGBA666 = ColorRGBA()
ColorRGBA666.setUSE("HAnimSegmentLineColorRGBA")

LineSet664.setColor(ColorRGBA666)

Shape663.setGeometry(LineSet664)

HAnimSegment659.addChildren(Shape663)

HAnimJoint658.addChildren(HAnimSegment659)
HAnimJoint667 = HAnimJoint()
HAnimJoint667.setName("vc4")
HAnimJoint667.setDEF("hanim_vc4")
HAnimJoint667.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint667.setUlimit([0,0,0])
HAnimJoint667.setLlimit([0,0,0])
HAnimJoint667.setStiffness([0,0,0])
HAnimSegment668 = HAnimSegment()
HAnimSegment668.setName("c4")
HAnimSegment668.setDEF("hanim_c4")
#<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
TouchSensor669 = TouchSensor()
TouchSensor669.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment668.addChildren(TouchSensor669)
Transform670 = Transform()
Transform670.setTranslation([0.0066,1.5662,-0.0084])
Shape671 = Shape()
Shape671.setUSE("HAnimJointShape")

Transform670.addChildren(Shape671)

HAnimSegment668.addChildren(Transform670)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape672 = Shape()
LineSet673 = LineSet()
LineSet673.setVertexCount([2])
Coordinate674 = Coordinate()
Coordinate674.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet673.setCoord(Coordinate674)
ColorRGBA675 = ColorRGBA()
ColorRGBA675.setUSE("HAnimSegmentLineColorRGBA")

LineSet673.setColor(ColorRGBA675)

Shape672.setGeometry(LineSet673)

HAnimSegment668.addChildren(Shape672)

HAnimJoint667.addChildren(HAnimSegment668)
HAnimJoint676 = HAnimJoint()
HAnimJoint676.setName("vc3")
HAnimJoint676.setDEF("hanim_vc3")
HAnimJoint676.setCenter([0.0066,1.58,-0.0103])
HAnimJoint676.setUlimit([0,0,0])
HAnimJoint676.setLlimit([0,0,0])
HAnimJoint676.setStiffness([0,0,0])
HAnimSegment677 = HAnimSegment()
HAnimSegment677.setName("c3")
HAnimSegment677.setDEF("hanim_c3")
#<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
TouchSensor678 = TouchSensor()
TouchSensor678.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment677.addChildren(TouchSensor678)
Transform679 = Transform()
Transform679.setTranslation([0.0066,1.58,-0.0103])
Shape680 = Shape()
Shape680.setUSE("HAnimJointShape")

Transform679.addChildren(Shape680)

HAnimSegment677.addChildren(Transform679)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape681 = Shape()
LineSet682 = LineSet()
LineSet682.setVertexCount([2])
Coordinate683 = Coordinate()
Coordinate683.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet682.setCoord(Coordinate683)
ColorRGBA684 = ColorRGBA()
ColorRGBA684.setUSE("HAnimSegmentLineColorRGBA")

LineSet682.setColor(ColorRGBA684)

Shape681.setGeometry(LineSet682)

HAnimSegment677.addChildren(Shape681)

HAnimJoint676.addChildren(HAnimSegment677)
HAnimJoint685 = HAnimJoint()
HAnimJoint685.setName("vc2")
HAnimJoint685.setDEF("hanim_vc2")
HAnimJoint685.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint685.setUlimit([0,0,0])
HAnimJoint685.setLlimit([0,0,0])
HAnimJoint685.setStiffness([0,0,0])
HAnimSegment686 = HAnimSegment()
HAnimSegment686.setName("c2")
HAnimSegment686.setDEF("hanim_c2")
#<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
TouchSensor687 = TouchSensor()
TouchSensor687.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment686.addChildren(TouchSensor687)
Transform688 = Transform()
Transform688.setTranslation([0.0066,1.5928,-0.0103])
Shape689 = Shape()
Shape689.setUSE("HAnimJointShape")

Transform688.addChildren(Shape689)

HAnimSegment686.addChildren(Transform688)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape690 = Shape()
LineSet691 = LineSet()
LineSet691.setVertexCount([2])
Coordinate692 = Coordinate()
Coordinate692.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet691.setCoord(Coordinate692)
ColorRGBA693 = ColorRGBA()
ColorRGBA693.setUSE("HAnimSegmentLineColorRGBA")

LineSet691.setColor(ColorRGBA693)

Shape690.setGeometry(LineSet691)

HAnimSegment686.addChildren(Shape690)

HAnimJoint685.addChildren(HAnimSegment686)
HAnimJoint694 = HAnimJoint()
HAnimJoint694.setName("vc1")
HAnimJoint694.setDEF("hanim_vc1")
HAnimJoint694.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint694.setUlimit([0,0,0])
HAnimJoint694.setLlimit([0,0,0])
HAnimJoint694.setStiffness([0,0,0])
HAnimSegment695 = HAnimSegment()
HAnimSegment695.setName("c1")
HAnimSegment695.setDEF("hanim_c1")
#<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
TouchSensor696 = TouchSensor()
TouchSensor696.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment695.addChildren(TouchSensor696)
Transform697 = Transform()
Transform697.setTranslation([0.0066,1.6144,-0.0034])
Shape698 = Shape()
Shape698.setUSE("HAnimJointShape")

Transform697.addChildren(Shape698)

HAnimSegment695.addChildren(Transform697)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape699 = Shape()
LineSet700 = LineSet()
LineSet700.setVertexCount([2])
Coordinate701 = Coordinate()
Coordinate701.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet700.setCoord(Coordinate701)
ColorRGBA702 = ColorRGBA()
ColorRGBA702.setUSE("HAnimSegmentLineColorRGBA")

LineSet700.setColor(ColorRGBA702)

Shape699.setGeometry(LineSet700)

HAnimSegment695.addChildren(Shape699)

HAnimJoint694.addChildren(HAnimSegment695)
HAnimJoint703 = HAnimJoint()
HAnimJoint703.setName("skullbase")
HAnimJoint703.setDEF("hanim_skullbase")
HAnimJoint703.setCenter([0.0044,1.6209,0.0236])
HAnimJoint703.setUlimit([0,0,0])
HAnimJoint703.setLlimit([0,0,0])
HAnimJoint703.setStiffness([0,0,0])
HAnimSegment704 = HAnimSegment()
HAnimSegment704.setName("skull")
HAnimSegment704.setDEF("hanim_skull")
#<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
TouchSensor705 = TouchSensor()
TouchSensor705.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment704.addChildren(TouchSensor705)
Transform706 = Transform()
Transform706.setTranslation([0.0044,1.6209,0.0236])
Shape707 = Shape()
Shape707.setUSE("HAnimJointShape")

Transform706.addChildren(Shape707)

HAnimSegment704.addChildren(Transform706)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape708 = Shape()
LineSet709 = LineSet()
LineSet709.setVertexCount([2])
Coordinate710 = Coordinate()
Coordinate710.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet709.setCoord(Coordinate710)
ColorRGBA711 = ColorRGBA()
ColorRGBA711.setUSE("HAnimSegmentLineColorRGBA")

LineSet709.setColor(ColorRGBA711)

Shape708.setGeometry(LineSet709)

HAnimSegment704.addChildren(Shape708)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape712 = Shape()
LineSet713 = LineSet()
LineSet713.setVertexCount([2])
Coordinate714 = Coordinate()
Coordinate714.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet713.setCoord(Coordinate714)
ColorRGBA715 = ColorRGBA()
ColorRGBA715.setUSE("HAnimSegmentLineColorRGBA")

LineSet713.setColor(ColorRGBA715)

Shape712.setGeometry(LineSet713)

HAnimSegment704.addChildren(Shape712)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape716 = Shape()
LineSet717 = LineSet()
LineSet717.setVertexCount([2])
Coordinate718 = Coordinate()
Coordinate718.setPoint([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])

LineSet717.setCoord(Coordinate718)
ColorRGBA719 = ColorRGBA()
ColorRGBA719.setUSE("HAnimSegmentLineColorRGBA")

LineSet717.setColor(ColorRGBA719)

Shape716.setGeometry(LineSet717)

HAnimSegment704.addChildren(Shape716)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape720 = Shape()
LineSet721 = LineSet()
LineSet721.setVertexCount([2])
Coordinate722 = Coordinate()
Coordinate722.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet721.setCoord(Coordinate722)
ColorRGBA723 = ColorRGBA()
ColorRGBA723.setUSE("HAnimSegmentLineColorRGBA")

LineSet721.setColor(ColorRGBA723)

Shape720.setGeometry(LineSet721)

HAnimSegment704.addChildren(Shape720)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape724 = Shape()
LineSet725 = LineSet()
LineSet725.setVertexCount([2])
Coordinate726 = Coordinate()
Coordinate726.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet725.setCoord(Coordinate726)
ColorRGBA727 = ColorRGBA()
ColorRGBA727.setUSE("HAnimSegmentLineColorRGBA")

LineSet725.setColor(ColorRGBA727)

Shape724.setGeometry(LineSet725)

HAnimSegment704.addChildren(Shape724)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape728 = Shape()
LineSet729 = LineSet()
LineSet729.setVertexCount([2])
Coordinate730 = Coordinate()
Coordinate730.setPoint([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])

LineSet729.setCoord(Coordinate730)
ColorRGBA731 = ColorRGBA()
ColorRGBA731.setUSE("HAnimSegmentLineColorRGBA")

LineSet729.setColor(ColorRGBA731)

Shape728.setGeometry(LineSet729)

HAnimSegment704.addChildren(Shape728)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape732 = Shape()
LineSet733 = LineSet()
LineSet733.setVertexCount([2])
Coordinate734 = Coordinate()
Coordinate734.setPoint([0.0044,1.6209,0.0236,0,1.63,0.015])

LineSet733.setCoord(Coordinate734)
ColorRGBA735 = ColorRGBA()
ColorRGBA735.setUSE("HAnimSegmentLineColorRGBA")

LineSet733.setColor(ColorRGBA735)

Shape732.setGeometry(LineSet733)

HAnimSegment704.addChildren(Shape732)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape736 = Shape()
LineSet737 = LineSet()
LineSet737.setVertexCount([2])
Coordinate738 = Coordinate()
Coordinate738.setPoint([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])

LineSet737.setCoord(Coordinate738)
ColorRGBA739 = ColorRGBA()
ColorRGBA739.setUSE("HAnimSiteLineColorRGBA")

LineSet737.setColor(ColorRGBA739)

Shape736.setGeometry(LineSet737)

HAnimSegment704.addChildren(Shape736)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape740 = Shape()
LineSet741 = LineSet()
LineSet741.setVertexCount([2])
Coordinate742 = Coordinate()
Coordinate742.setPoint([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])

LineSet741.setCoord(Coordinate742)
ColorRGBA743 = ColorRGBA()
ColorRGBA743.setUSE("HAnimSiteLineColorRGBA")

LineSet741.setColor(ColorRGBA743)

Shape740.setGeometry(LineSet741)

HAnimSegment704.addChildren(Shape740)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape744 = Shape()
LineSet745 = LineSet()
LineSet745.setVertexCount([2])
Coordinate746 = Coordinate()
Coordinate746.setPoint([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])

LineSet745.setCoord(Coordinate746)
ColorRGBA747 = ColorRGBA()
ColorRGBA747.setUSE("HAnimSiteLineColorRGBA")

LineSet745.setColor(ColorRGBA747)

Shape744.setGeometry(LineSet745)

HAnimSegment704.addChildren(Shape744)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape748 = Shape()
LineSet749 = LineSet()
LineSet749.setVertexCount([2])
Coordinate750 = Coordinate()
Coordinate750.setPoint([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])

LineSet749.setCoord(Coordinate750)
ColorRGBA751 = ColorRGBA()
ColorRGBA751.setUSE("HAnimSiteLineColorRGBA")

LineSet749.setColor(ColorRGBA751)

Shape748.setGeometry(LineSet749)

HAnimSegment704.addChildren(Shape748)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape752 = Shape()
LineSet753 = LineSet()
LineSet753.setVertexCount([2])
Coordinate754 = Coordinate()
Coordinate754.setPoint([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])

LineSet753.setCoord(Coordinate754)
ColorRGBA755 = ColorRGBA()
ColorRGBA755.setUSE("HAnimSiteLineColorRGBA")

LineSet753.setColor(ColorRGBA755)

Shape752.setGeometry(LineSet753)

HAnimSegment704.addChildren(Shape752)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape756 = Shape()
LineSet757 = LineSet()
LineSet757.setVertexCount([2])
Coordinate758 = Coordinate()
Coordinate758.setPoint([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])

LineSet757.setCoord(Coordinate758)
ColorRGBA759 = ColorRGBA()
ColorRGBA759.setUSE("HAnimSiteLineColorRGBA")

LineSet757.setColor(ColorRGBA759)

Shape756.setGeometry(LineSet757)

HAnimSegment704.addChildren(Shape756)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape760 = Shape()
LineSet761 = LineSet()
LineSet761.setVertexCount([2])
Coordinate762 = Coordinate()
Coordinate762.setPoint([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])

LineSet761.setCoord(Coordinate762)
ColorRGBA763 = ColorRGBA()
ColorRGBA763.setUSE("HAnimSiteLineColorRGBA")

LineSet761.setColor(ColorRGBA763)

Shape760.setGeometry(LineSet761)

HAnimSegment704.addChildren(Shape760)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape764 = Shape()
LineSet765 = LineSet()
LineSet765.setVertexCount([2])
Coordinate766 = Coordinate()
Coordinate766.setPoint([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])

LineSet765.setCoord(Coordinate766)
ColorRGBA767 = ColorRGBA()
ColorRGBA767.setUSE("HAnimSiteLineColorRGBA")

LineSet765.setColor(ColorRGBA767)

Shape764.setGeometry(LineSet765)

HAnimSegment704.addChildren(Shape764)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape768 = Shape()
LineSet769 = LineSet()
LineSet769.setVertexCount([2])
Coordinate770 = Coordinate()
Coordinate770.setPoint([0.0044,1.6209,0.0236,0.0631,1.553,0.033])

LineSet769.setCoord(Coordinate770)
ColorRGBA771 = ColorRGBA()
ColorRGBA771.setUSE("HAnimSiteLineColorRGBA")

LineSet769.setColor(ColorRGBA771)

Shape768.setGeometry(LineSet769)

HAnimSegment704.addChildren(Shape768)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape772 = Shape()
LineSet773 = LineSet()
LineSet773.setVertexCount([2])
Coordinate774 = Coordinate()
Coordinate774.setPoint([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])

LineSet773.setCoord(Coordinate774)
ColorRGBA775 = ColorRGBA()
ColorRGBA775.setUSE("HAnimSiteLineColorRGBA")

LineSet773.setColor(ColorRGBA775)

Shape772.setGeometry(LineSet773)

HAnimSegment704.addChildren(Shape772)
#TODO move skull_tip x to zero
HAnimSite776 = HAnimSite()
HAnimSite776.setName("skull_tip")
HAnimSite776.setDEF("hanim_skull_tip")
HAnimSite776.setTranslation([0.005,1.7504,0.0055])
#HAnimSite visualization shape
TouchSensor777 = TouchSensor()
TouchSensor777.setDescription("HAnimSite skull_tip")

HAnimSite776.addChildren(TouchSensor777)
Shape778 = Shape()
Shape778.setUSE("HAnimSiteShape")

HAnimSite776.addChildren(Shape778)

HAnimSegment704.addChildren(HAnimSite776)
HAnimSite779 = HAnimSite()
HAnimSite779.setName("sellion_pt")
HAnimSite779.setDEF("hanim_sellion_pt")
HAnimSite779.setTranslation([0.0058,1.6316,0.0852])
#HAnimSite visualization shape
TouchSensor780 = TouchSensor()
TouchSensor780.setDescription("HAnimSite sellion")

HAnimSite779.addChildren(TouchSensor780)
Shape781 = Shape()
Shape781.setUSE("HAnimSiteShape")

HAnimSite779.addChildren(Shape781)

HAnimSegment704.addChildren(HAnimSite779)
HAnimSite782 = HAnimSite()
HAnimSite782.setName("r_infraorbitale_pt")
HAnimSite782.setDEF("hanim_r_infraorbitale_pt")
HAnimSite782.setTranslation([-0.0237,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor783 = TouchSensor()
TouchSensor783.setDescription("HAnimSite r_infraorbitale")

HAnimSite782.addChildren(TouchSensor783)
Shape784 = Shape()
Shape784.setUSE("HAnimSiteShape")

HAnimSite782.addChildren(Shape784)

HAnimSegment704.addChildren(HAnimSite782)
HAnimSite785 = HAnimSite()
HAnimSite785.setName("l_infraorbitale_pt")
HAnimSite785.setDEF("hanim_l_infraorbitale_pt")
HAnimSite785.setTranslation([0.0341,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor786 = TouchSensor()
TouchSensor786.setDescription("HAnimSite l_infraorbitale")

HAnimSite785.addChildren(TouchSensor786)
Shape787 = Shape()
Shape787.setUSE("HAnimSiteShape")

HAnimSite785.addChildren(Shape787)

HAnimSegment704.addChildren(HAnimSite785)
HAnimSite788 = HAnimSite()
HAnimSite788.setName("supramenton_pt")
HAnimSite788.setDEF("hanim_supramenton_pt")
HAnimSite788.setTranslation([0.0061,1.541,0.0805])
#HAnimSite visualization shape
TouchSensor789 = TouchSensor()
TouchSensor789.setDescription("HAnimSite supramenton")

HAnimSite788.addChildren(TouchSensor789)
Shape790 = Shape()
Shape790.setUSE("HAnimSiteShape")

HAnimSite788.addChildren(Shape790)

HAnimSegment704.addChildren(HAnimSite788)
HAnimSite791 = HAnimSite()
HAnimSite791.setName("r_tragion_pt")
HAnimSite791.setDEF("hanim_r_tragion_pt")
HAnimSite791.setTranslation([-0.0646,1.6347,0.0302])
#HAnimSite visualization shape
TouchSensor792 = TouchSensor()
TouchSensor792.setDescription("HAnimSite r_tragion")

HAnimSite791.addChildren(TouchSensor792)
Shape793 = Shape()
Shape793.setUSE("HAnimSiteShape")

HAnimSite791.addChildren(Shape793)

HAnimSegment704.addChildren(HAnimSite791)
HAnimSite794 = HAnimSite()
HAnimSite794.setName("r_gonion_pt")
HAnimSite794.setDEF("hanim_r_gonion_pt")
HAnimSite794.setTranslation([-0.052,1.5529,0.0347])
#HAnimSite visualization shape
TouchSensor795 = TouchSensor()
TouchSensor795.setDescription("HAnimSite r_gonion")

HAnimSite794.addChildren(TouchSensor795)
Shape796 = Shape()
Shape796.setUSE("HAnimSiteShape")

HAnimSite794.addChildren(Shape796)

HAnimSegment704.addChildren(HAnimSite794)
HAnimSite797 = HAnimSite()
HAnimSite797.setName("l_tragion_pt")
HAnimSite797.setDEF("hanim_l_tragion_pt")
HAnimSite797.setTranslation([0.0739,1.6348,0.0282])
#HAnimSite visualization shape
TouchSensor798 = TouchSensor()
TouchSensor798.setDescription("HAnimSite l_tragion")

HAnimSite797.addChildren(TouchSensor798)
Shape799 = Shape()
Shape799.setUSE("HAnimSiteShape")

HAnimSite797.addChildren(Shape799)

HAnimSegment704.addChildren(HAnimSite797)
HAnimSite800 = HAnimSite()
HAnimSite800.setName("l_gonion_pt")
HAnimSite800.setDEF("hanim_l_gonion_pt")
HAnimSite800.setTranslation([0.0631,1.553,0.033])
#HAnimSite visualization shape
TouchSensor801 = TouchSensor()
TouchSensor801.setDescription("HAnimSite l_gonion")

HAnimSite800.addChildren(TouchSensor801)
Shape802 = Shape()
Shape802.setUSE("HAnimSiteShape")

HAnimSite800.addChildren(Shape802)

HAnimSegment704.addChildren(HAnimSite800)
HAnimSite803 = HAnimSite()
HAnimSite803.setName("nuchale_pt")
HAnimSite803.setDEF("hanim_nuchale_pt")
HAnimSite803.setTranslation([0.0039,1.5972,-0.0796])
#HAnimSite visualization shape
TouchSensor804 = TouchSensor()
TouchSensor804.setDescription("HAnimSite nuchale")

HAnimSite803.addChildren(TouchSensor804)
Shape805 = Shape()
Shape805.setUSE("HAnimSiteShape")

HAnimSite803.addChildren(Shape805)

HAnimSegment704.addChildren(HAnimSite803)

HAnimJoint703.addChildren(HAnimSegment704)
HAnimJoint806 = HAnimJoint()
HAnimJoint806.setName("l_eyeball_joint")
HAnimJoint806.setDEF("hanim_l_eyeball_joint")
HAnimJoint806.setCenter([0.0336,1.6332,0.0502])
HAnimJoint806.setUlimit([0,0,0])
HAnimJoint806.setLlimit([0,0,0])
HAnimJoint806.setStiffness([0,0,0])
HAnimSegment807 = HAnimSegment()
HAnimSegment807.setName("l_eyeball")
HAnimSegment807.setDEF("hanim_l_eyeball")
#<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
TouchSensor808 = TouchSensor()
TouchSensor808.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment807.addChildren(TouchSensor808)
Transform809 = Transform()
Transform809.setTranslation([0.0336,1.6332,0.0502])
Shape810 = Shape()
Shape810.setUSE("HAnimJointShape")

Transform809.addChildren(Shape810)

HAnimSegment807.addChildren(Transform809)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape811 = Shape()
LineSet812 = LineSet()
LineSet812.setVertexCount([2])
Coordinate813 = Coordinate()
Coordinate813.setPoint([0.0336,1.6332,0.0502,0.034,1.64,0.05])

LineSet812.setCoord(Coordinate813)
ColorRGBA814 = ColorRGBA()
ColorRGBA814.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA814.setColor([0,0,1,1,0,0,1,0.1])

LineSet812.setColor(ColorRGBA814)

Shape811.setGeometry(LineSet812)

HAnimSegment807.addChildren(Shape811)
HAnimSite815 = HAnimSite()
HAnimSite815.setName("l_eyeball_site_view")
HAnimSite815.setDEF("hanim_l_eyeball_site_view")
HAnimSite815.setTranslation([0.034,1.64,0.05])
Viewpoint816 = Viewpoint()
Viewpoint816.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint816.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint816.setOrientation([0,1,0,3.141593])
Viewpoint816.setPosition([0,0,0])

HAnimSite815.addChildren(Viewpoint816)
#HAnimSite/Viewpoint visualization shape
Anchor817 = Anchor()
Anchor817.setDescription("HAnimSite Viewpoint hanim_l_eyeball_site_view")
Anchor817.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD818 = LOD()
LOD818.setForceTransitions(True)
LOD818.setRange([0.04])
WorldInfo819 = WorldInfo()
WorldInfo819.setInfo(["hide diamond when close"])

LOD818.addChildren(WorldInfo819)
Shape820 = Shape()
Shape820.setDEF("HAnimSiteViewpointShape")
IndexedFaceSet821 = IndexedFaceSet()
IndexedFaceSet821.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet821.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet821.setCreaseAngle(0.5)
Coordinate822 = Coordinate()
Coordinate822.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet821.setCoord(Coordinate822)

Shape820.setGeometry(IndexedFaceSet821)
Appearance823 = Appearance()
Material824 = Material()
Material824.setDiffuseColor([0,0,1])
Material824.setTransparency(0.6)

Appearance823.setMaterial(Material824)

Shape820.setAppearance(Appearance823)

LOD818.addChildren(Shape820)

Anchor817.addChildren(LOD818)

HAnimSite815.addChildren(Anchor817)

HAnimSegment807.addChildren(HAnimSite815)

HAnimJoint806.addChildren(HAnimSegment807)

HAnimJoint703.addChildren(HAnimJoint806)
HAnimJoint825 = HAnimJoint()
HAnimJoint825.setName("l_eyelid_joint")
HAnimJoint825.setDEF("hanim_l_eyelid_joint")
HAnimJoint825.setCenter([0.0336,1.6332,0.0502])
HAnimJoint825.setUlimit([0,0,0])
HAnimJoint825.setLlimit([0,0,0])
HAnimJoint825.setStiffness([0,0,0])
HAnimSegment826 = HAnimSegment()
HAnimSegment826.setName("l_eyelid")
HAnimSegment826.setDEF("hanim_l_eyelid")
#<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
TouchSensor827 = TouchSensor()
TouchSensor827.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment826.addChildren(TouchSensor827)
Transform828 = Transform()
Transform828.setTranslation([0.0336,1.6332,0.0502])
Shape829 = Shape()
Shape829.setUSE("HAnimJointShape")

Transform828.addChildren(Shape829)

HAnimSegment826.addChildren(Transform828)

HAnimJoint825.addChildren(HAnimSegment826)

HAnimJoint703.addChildren(HAnimJoint825)
HAnimJoint830 = HAnimJoint()
HAnimJoint830.setName("l_eyebrow_joint")
HAnimJoint830.setDEF("hanim_l_eyebrow_joint")
HAnimJoint830.setCenter([0.0336,1.635,0.0506])
HAnimJoint830.setUlimit([0,0,0])
HAnimJoint830.setLlimit([0,0,0])
HAnimJoint830.setStiffness([0,0,0])
HAnimSegment831 = HAnimSegment()
HAnimSegment831.setName("l_eyebrow")
HAnimSegment831.setDEF("hanim_l_eyebrow")
#<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
TouchSensor832 = TouchSensor()
TouchSensor832.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment831.addChildren(TouchSensor832)
Transform833 = Transform()
Transform833.setTranslation([0.0336,1.635,0.0506])
Shape834 = Shape()
Shape834.setUSE("HAnimJointShape")

Transform833.addChildren(Shape834)

HAnimSegment831.addChildren(Transform833)

HAnimJoint830.addChildren(HAnimSegment831)

HAnimJoint703.addChildren(HAnimJoint830)
HAnimJoint835 = HAnimJoint()
HAnimJoint835.setName("r_eyeball_joint")
HAnimJoint835.setDEF("hanim_r_eyeball_joint")
HAnimJoint835.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint835.setUlimit([0,0,0])
HAnimJoint835.setLlimit([0,0,0])
HAnimJoint835.setStiffness([0,0,0])
HAnimSegment836 = HAnimSegment()
HAnimSegment836.setName("r_eyeball")
HAnimSegment836.setDEF("hanim_r_eyeball")
#<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
TouchSensor837 = TouchSensor()
TouchSensor837.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment836.addChildren(TouchSensor837)
Transform838 = Transform()
Transform838.setTranslation([-0.0336,1.6332,0.0502])
Shape839 = Shape()
Shape839.setUSE("HAnimJointShape")

Transform838.addChildren(Shape839)

HAnimSegment836.addChildren(Transform838)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape840 = Shape()
LineSet841 = LineSet()
LineSet841.setVertexCount([2])
Coordinate842 = Coordinate()
Coordinate842.setPoint([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])

LineSet841.setCoord(Coordinate842)
ColorRGBA843 = ColorRGBA()
ColorRGBA843.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet841.setColor(ColorRGBA843)

Shape840.setGeometry(LineSet841)

HAnimSegment836.addChildren(Shape840)
HAnimSite844 = HAnimSite()
HAnimSite844.setName("r_eyeball_site_view")
HAnimSite844.setDEF("hanim_r_eyeball_site_view")
HAnimSite844.setTranslation([-0.034,1.64,0.05])
Viewpoint845 = Viewpoint()
Viewpoint845.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint845.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint845.setOrientation([0,1,0,3.141593])
Viewpoint845.setPosition([0,0,0])

HAnimSite844.addChildren(Viewpoint845)
#HAnimSite/Viewpoint visualization shape
Anchor846 = Anchor()
Anchor846.setDescription("HAnimSite Viewpoint hanim_r_eyeball_site_view")
Anchor846.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD847 = LOD()
LOD847.setForceTransitions(True)
LOD847.setRange([0.04])
WorldInfo848 = WorldInfo()
WorldInfo848.setInfo(["hide diamond when close"])

LOD847.addChildren(WorldInfo848)
Shape849 = Shape()
Shape849.setUSE("HAnimSiteViewpointShape")

LOD847.addChildren(Shape849)

Anchor846.addChildren(LOD847)

HAnimSite844.addChildren(Anchor846)

HAnimSegment836.addChildren(HAnimSite844)

HAnimJoint835.addChildren(HAnimSegment836)

HAnimJoint703.addChildren(HAnimJoint835)
HAnimJoint850 = HAnimJoint()
HAnimJoint850.setName("r_eyelid_joint")
HAnimJoint850.setDEF("hanim_r_eyelid_joint")
HAnimJoint850.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint850.setUlimit([0,0,0])
HAnimJoint850.setLlimit([0,0,0])
HAnimJoint850.setStiffness([0,0,0])
HAnimSegment851 = HAnimSegment()
HAnimSegment851.setName("r_eyelid")
HAnimSegment851.setDEF("hanim_r_eyelid")
#<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
TouchSensor852 = TouchSensor()
TouchSensor852.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment851.addChildren(TouchSensor852)
Transform853 = Transform()
Transform853.setTranslation([-0.0336,1.6332,0.0502])
Shape854 = Shape()
Shape854.setUSE("HAnimJointShape")

Transform853.addChildren(Shape854)

HAnimSegment851.addChildren(Transform853)

HAnimJoint850.addChildren(HAnimSegment851)

HAnimJoint703.addChildren(HAnimJoint850)
HAnimJoint855 = HAnimJoint()
HAnimJoint855.setName("r_eyebrow_joint")
HAnimJoint855.setDEF("hanim_r_eyebrow_joint")
HAnimJoint855.setCenter([-0.0336,1.635,0.0506])
HAnimJoint855.setUlimit([0,0,0])
HAnimJoint855.setLlimit([0,0,0])
HAnimJoint855.setStiffness([0,0,0])
HAnimSegment856 = HAnimSegment()
HAnimSegment856.setName("r_eyebrow")
HAnimSegment856.setDEF("hanim_r_eyebrow")
#<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
TouchSensor857 = TouchSensor()
TouchSensor857.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment856.addChildren(TouchSensor857)
Transform858 = Transform()
Transform858.setTranslation([-0.0336,1.635,0.0506])
Shape859 = Shape()
Shape859.setUSE("HAnimJointShape")

Transform858.addChildren(Shape859)

HAnimSegment856.addChildren(Transform858)

HAnimJoint855.addChildren(HAnimSegment856)

HAnimJoint703.addChildren(HAnimJoint855)
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimJoint860 = HAnimJoint()
HAnimJoint860.setName("temporomandibular")
HAnimJoint860.setDEF("hanim_temporomandibular")
HAnimJoint860.setCenter([0,1.63,0.015])
HAnimJoint860.setUlimit([0,0,0])
HAnimJoint860.setLlimit([0,0,0])
HAnimJoint860.setStiffness([0,0,0])
HAnimSegment861 = HAnimSegment()
HAnimSegment861.setName("jaw")
HAnimSegment861.setDEF("hanim_jaw")
#<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
TouchSensor862 = TouchSensor()
TouchSensor862.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment861.addChildren(TouchSensor862)
Transform863 = Transform()
Transform863.setTranslation([0,1.63,0.015])
Shape864 = Shape()
Shape864.setUSE("HAnimJointShape")

Transform863.addChildren(Shape864)

HAnimSegment861.addChildren(Transform863)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape865 = Shape()
LineSet866 = LineSet()
LineSet866.setVertexCount([2])
Coordinate867 = Coordinate()
Coordinate867.setPoint([0,1.63,0.015,0.045,1.63,0])

LineSet866.setCoord(Coordinate867)
ColorRGBA868 = ColorRGBA()
ColorRGBA868.setUSE("HAnimSiteLineColorRGBA")

LineSet866.setColor(ColorRGBA868)

Shape865.setGeometry(LineSet866)

HAnimSegment861.addChildren(Shape865)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape869 = Shape()
LineSet870 = LineSet()
LineSet870.setVertexCount([2])
Coordinate871 = Coordinate()
Coordinate871.setPoint([0,1.63,0.015,-0.045,1.63,0])

LineSet870.setCoord(Coordinate871)
ColorRGBA872 = ColorRGBA()
ColorRGBA872.setUSE("HAnimSiteLineColorRGBA")

LineSet870.setColor(ColorRGBA872)

Shape869.setGeometry(LineSet870)

HAnimSegment861.addChildren(Shape869)
HAnimSite873 = HAnimSite()
HAnimSite873.setName("temporomandibular_l_site_pt")
HAnimSite873.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite873.setTranslation([0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor874 = TouchSensor()
TouchSensor874.setDescription("HAnimSite temporomandibular_l_site")

HAnimSite873.addChildren(TouchSensor874)
Shape875 = Shape()
Shape875.setUSE("HAnimSiteShape")

HAnimSite873.addChildren(Shape875)

HAnimSegment861.addChildren(HAnimSite873)
HAnimSite876 = HAnimSite()
HAnimSite876.setName("temporomandibular_r_site_pt")
HAnimSite876.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite876.setTranslation([-0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor877 = TouchSensor()
TouchSensor877.setDescription("HAnimSite temporomandibular_r_site")

HAnimSite876.addChildren(TouchSensor877)
Shape878 = Shape()
Shape878.setUSE("HAnimSiteShape")

HAnimSite876.addChildren(Shape878)

HAnimSegment861.addChildren(HAnimSite876)

HAnimJoint860.addChildren(HAnimSegment861)

HAnimJoint703.addChildren(HAnimJoint860)

HAnimJoint694.addChildren(HAnimJoint703)

HAnimJoint685.addChildren(HAnimJoint694)

HAnimJoint676.addChildren(HAnimJoint685)

HAnimJoint667.addChildren(HAnimJoint676)

HAnimJoint658.addChildren(HAnimJoint667)

HAnimJoint649.addChildren(HAnimJoint658)

HAnimJoint626.addChildren(HAnimJoint649)

HAnimJoint595.addChildren(HAnimJoint626)
HAnimJoint879 = HAnimJoint()
HAnimJoint879.setName("l_sternoclavicular")
HAnimJoint879.setDEF("hanim_l_sternoclavicular")
HAnimJoint879.setCenter([0.082,1.4488,-0.0353])
HAnimJoint879.setUlimit([0,0,0])
HAnimJoint879.setLlimit([0,0,0])
HAnimJoint879.setStiffness([0,0,0])
HAnimSegment880 = HAnimSegment()
HAnimSegment880.setName("l_clavicle")
HAnimSegment880.setDEF("hanim_l_clavicle")
#<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
TouchSensor881 = TouchSensor()
TouchSensor881.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment880.addChildren(TouchSensor881)
Transform882 = Transform()
Transform882.setTranslation([0.082,1.4488,-0.0353])
Shape883 = Shape()
Shape883.setUSE("HAnimJointShape")

Transform882.addChildren(Shape883)

HAnimSegment880.addChildren(Transform882)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape884 = Shape()
LineSet885 = LineSet()
LineSet885.setVertexCount([2])
Coordinate886 = Coordinate()
Coordinate886.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet885.setCoord(Coordinate886)
ColorRGBA887 = ColorRGBA()
ColorRGBA887.setUSE("HAnimSegmentLineColorRGBA")

LineSet885.setColor(ColorRGBA887)

Shape884.setGeometry(LineSet885)

HAnimSegment880.addChildren(Shape884)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape888 = Shape()
LineSet889 = LineSet()
LineSet889.setVertexCount([2])
Coordinate890 = Coordinate()
Coordinate890.setPoint([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])

LineSet889.setCoord(Coordinate890)
ColorRGBA891 = ColorRGBA()
ColorRGBA891.setUSE("HAnimSiteLineColorRGBA")

LineSet889.setColor(ColorRGBA891)

Shape888.setGeometry(LineSet889)

HAnimSegment880.addChildren(Shape888)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape892 = Shape()
LineSet893 = LineSet()
LineSet893.setVertexCount([2])
Coordinate894 = Coordinate()
Coordinate894.setPoint([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])

LineSet893.setCoord(Coordinate894)
ColorRGBA895 = ColorRGBA()
ColorRGBA895.setUSE("HAnimSiteLineColorRGBA")

LineSet893.setColor(ColorRGBA895)

Shape892.setGeometry(LineSet893)

HAnimSegment880.addChildren(Shape892)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape896 = Shape()
LineSet897 = LineSet()
LineSet897.setVertexCount([2])
Coordinate898 = Coordinate()
Coordinate898.setPoint([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])

LineSet897.setCoord(Coordinate898)
ColorRGBA899 = ColorRGBA()
ColorRGBA899.setUSE("HAnimSiteLineColorRGBA")

LineSet897.setColor(ColorRGBA899)

Shape896.setGeometry(LineSet897)

HAnimSegment880.addChildren(Shape896)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape900 = Shape()
LineSet901 = LineSet()
LineSet901.setVertexCount([2])
Coordinate902 = Coordinate()
Coordinate902.setPoint([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])

LineSet901.setCoord(Coordinate902)
ColorRGBA903 = ColorRGBA()
ColorRGBA903.setUSE("HAnimSiteLineColorRGBA")

LineSet901.setColor(ColorRGBA903)

Shape900.setGeometry(LineSet901)

HAnimSegment880.addChildren(Shape900)
HAnimSite904 = HAnimSite()
HAnimSite904.setName("l_clavicale_pt")
HAnimSite904.setDEF("hanim_l_clavicale_pt")
HAnimSite904.setTranslation([0.0271,1.4943,0.0394])
#HAnimSite visualization shape
TouchSensor905 = TouchSensor()
TouchSensor905.setDescription("HAnimSite l_clavicale")

HAnimSite904.addChildren(TouchSensor905)
Shape906 = Shape()
Shape906.setUSE("HAnimSiteShape")

HAnimSite904.addChildren(Shape906)

HAnimSegment880.addChildren(HAnimSite904)
HAnimSite907 = HAnimSite()
HAnimSite907.setName("l_acromion_pt")
HAnimSite907.setDEF("hanim_l_acromion_pt")
HAnimSite907.setTranslation([0.2032,1.476,-0.049])
#HAnimSite visualization shape
TouchSensor908 = TouchSensor()
TouchSensor908.setDescription("HAnimSite l_acromion")

HAnimSite907.addChildren(TouchSensor908)
Shape909 = Shape()
Shape909.setUSE("HAnimSiteShape")

HAnimSite907.addChildren(Shape909)

HAnimSegment880.addChildren(HAnimSite907)
HAnimSite910 = HAnimSite()
HAnimSite910.setName("l_axilla_ant_pt")
HAnimSite910.setDEF("hanim_l_axilla_ant_pt")
HAnimSite910.setTranslation([0.1777,1.4065,-0.0075])
#HAnimSite visualization shape
TouchSensor911 = TouchSensor()
TouchSensor911.setDescription("HAnimSite l_axilla_ant")

HAnimSite910.addChildren(TouchSensor911)
Shape912 = Shape()
Shape912.setUSE("HAnimSiteShape")

HAnimSite910.addChildren(Shape912)

HAnimSegment880.addChildren(HAnimSite910)
HAnimSite913 = HAnimSite()
HAnimSite913.setName("l_axilla_post_pt")
HAnimSite913.setDEF("hanim_l_axilla_post_pt")
HAnimSite913.setTranslation([0.1706,1.4072,-0.0875])
#HAnimSite visualization shape
TouchSensor914 = TouchSensor()
TouchSensor914.setDescription("HAnimSite l_axilla_post")

HAnimSite913.addChildren(TouchSensor914)
Shape915 = Shape()
Shape915.setUSE("HAnimSiteShape")

HAnimSite913.addChildren(Shape915)

HAnimSegment880.addChildren(HAnimSite913)

HAnimJoint879.addChildren(HAnimSegment880)
HAnimJoint916 = HAnimJoint()
HAnimJoint916.setName("l_acromioclavicular")
HAnimJoint916.setDEF("hanim_l_acromioclavicular")
HAnimJoint916.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint916.setUlimit([0,0,0])
HAnimJoint916.setLlimit([0,0,0])
HAnimJoint916.setStiffness([0,0,0])
HAnimSegment917 = HAnimSegment()
HAnimSegment917.setName("l_scapula")
HAnimSegment917.setDEF("hanim_l_scapula")
#<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
TouchSensor918 = TouchSensor()
TouchSensor918.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment917.addChildren(TouchSensor918)
Transform919 = Transform()
Transform919.setTranslation([0.0962,1.4269,-0.0424])
Shape920 = Shape()
Shape920.setUSE("HAnimJointShape")

Transform919.addChildren(Shape920)

HAnimSegment917.addChildren(Transform919)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape921 = Shape()
LineSet922 = LineSet()
LineSet922.setVertexCount([2])
Coordinate923 = Coordinate()
Coordinate923.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet922.setCoord(Coordinate923)
ColorRGBA924 = ColorRGBA()
ColorRGBA924.setUSE("HAnimSegmentLineColorRGBA")

LineSet922.setColor(ColorRGBA924)

Shape921.setGeometry(LineSet922)

HAnimSegment917.addChildren(Shape921)

HAnimJoint916.addChildren(HAnimSegment917)
HAnimJoint925 = HAnimJoint()
HAnimJoint925.setName("l_shoulder")
HAnimJoint925.setDEF("hanim_l_shoulder")
HAnimJoint925.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint925.setUlimit([0,0,0])
HAnimJoint925.setLlimit([0,0,0])
HAnimJoint925.setStiffness([0,0,0])
HAnimSegment926 = HAnimSegment()
HAnimSegment926.setName("l_upperarm")
HAnimSegment926.setDEF("hanim_l_upperarm")
#<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
TouchSensor927 = TouchSensor()
TouchSensor927.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment926.addChildren(TouchSensor927)
Transform928 = Transform()
Transform928.setTranslation([0.2029,1.4376,-0.0387])
Shape929 = Shape()
Shape929.setUSE("HAnimJointShape")

Transform928.addChildren(Shape929)

HAnimSegment926.addChildren(Transform928)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape930 = Shape()
LineSet931 = LineSet()
LineSet931.setVertexCount([2])
Coordinate932 = Coordinate()
Coordinate932.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet931.setCoord(Coordinate932)
ColorRGBA933 = ColorRGBA()
ColorRGBA933.setUSE("HAnimSegmentLineColorRGBA")

LineSet931.setColor(ColorRGBA933)

Shape930.setGeometry(LineSet931)

HAnimSegment926.addChildren(Shape930)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape934 = Shape()
LineSet935 = LineSet()
LineSet935.setVertexCount([2])
Coordinate936 = Coordinate()
Coordinate936.setPoint([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])

LineSet935.setCoord(Coordinate936)
ColorRGBA937 = ColorRGBA()
ColorRGBA937.setUSE("HAnimSiteLineColorRGBA")

LineSet935.setColor(ColorRGBA937)

Shape934.setGeometry(LineSet935)

HAnimSegment926.addChildren(Shape934)
HAnimSite938 = HAnimSite()
HAnimSite938.setName("l_humeral_lateral_epicn_pt")
HAnimSite938.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite938.setTranslation([0.228,1.1482,-0.11])
#HAnimSite visualization shape
TouchSensor939 = TouchSensor()
TouchSensor939.setDescription("HAnimSite l_humeral_lateral_epicn")

HAnimSite938.addChildren(TouchSensor939)
Shape940 = Shape()
Shape940.setUSE("HAnimSiteShape")

HAnimSite938.addChildren(Shape940)

HAnimSegment926.addChildren(HAnimSite938)

HAnimJoint925.addChildren(HAnimSegment926)
HAnimJoint941 = HAnimJoint()
HAnimJoint941.setName("l_elbow")
HAnimJoint941.setDEF("hanim_l_elbow")
HAnimJoint941.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint941.setUlimit([0,0,0])
HAnimJoint941.setLlimit([0,0,0])
HAnimJoint941.setStiffness([0,0,0])
HAnimSegment942 = HAnimSegment()
HAnimSegment942.setName("l_forearm")
HAnimSegment942.setDEF("hanim_l_forearm")
#<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
TouchSensor943 = TouchSensor()
TouchSensor943.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment942.addChildren(TouchSensor943)
Transform944 = Transform()
Transform944.setTranslation([0.2014,1.1357,-0.0682])
Shape945 = Shape()
Shape945.setUSE("HAnimJointShape")

Transform944.addChildren(Shape945)

HAnimSegment942.addChildren(Transform944)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape946 = Shape()
LineSet947 = LineSet()
LineSet947.setVertexCount([2])
Coordinate948 = Coordinate()
Coordinate948.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet947.setCoord(Coordinate948)
ColorRGBA949 = ColorRGBA()
ColorRGBA949.setUSE("HAnimSegmentLineColorRGBA")

LineSet947.setColor(ColorRGBA949)

Shape946.setGeometry(LineSet947)

HAnimSegment942.addChildren(Shape946)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape950 = Shape()
LineSet951 = LineSet()
LineSet951.setVertexCount([2])
Coordinate952 = Coordinate()
Coordinate952.setPoint([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])

LineSet951.setCoord(Coordinate952)
ColorRGBA953 = ColorRGBA()
ColorRGBA953.setUSE("HAnimSiteLineColorRGBA")

LineSet951.setColor(ColorRGBA953)

Shape950.setGeometry(LineSet951)

HAnimSegment942.addChildren(Shape950)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape954 = Shape()
LineSet955 = LineSet()
LineSet955.setVertexCount([2])
Coordinate956 = Coordinate()
Coordinate956.setPoint([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])

LineSet955.setCoord(Coordinate956)
ColorRGBA957 = ColorRGBA()
ColorRGBA957.setUSE("HAnimSiteLineColorRGBA")

LineSet955.setColor(ColorRGBA957)

Shape954.setGeometry(LineSet955)

HAnimSegment942.addChildren(Shape954)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape958 = Shape()
LineSet959 = LineSet()
LineSet959.setVertexCount([2])
Coordinate960 = Coordinate()
Coordinate960.setPoint([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])

LineSet959.setCoord(Coordinate960)
ColorRGBA961 = ColorRGBA()
ColorRGBA961.setUSE("HAnimSiteLineColorRGBA")

LineSet959.setColor(ColorRGBA961)

Shape958.setGeometry(LineSet959)

HAnimSegment942.addChildren(Shape958)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape962 = Shape()
LineSet963 = LineSet()
LineSet963.setVertexCount([2])
Coordinate964 = Coordinate()
Coordinate964.setPoint([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])

LineSet963.setCoord(Coordinate964)
ColorRGBA965 = ColorRGBA()
ColorRGBA965.setUSE("HAnimSiteLineColorRGBA")

LineSet963.setColor(ColorRGBA965)

Shape962.setGeometry(LineSet963)

HAnimSegment942.addChildren(Shape962)
HAnimSite966 = HAnimSite()
HAnimSite966.setName("l_radial_styloid_pt")
HAnimSite966.setDEF("hanim_l_radial_styloid_pt")
HAnimSite966.setTranslation([0.1901,0.8645,-0.0415])
#HAnimSite visualization shape
TouchSensor967 = TouchSensor()
TouchSensor967.setDescription("HAnimSite l_radial_styloid")

HAnimSite966.addChildren(TouchSensor967)
Shape968 = Shape()
Shape968.setUSE("HAnimSiteShape")

HAnimSite966.addChildren(Shape968)

HAnimSegment942.addChildren(HAnimSite966)
HAnimSite969 = HAnimSite()
HAnimSite969.setName("l_olecranon_pt")
HAnimSite969.setDEF("hanim_l_olecranon_pt")
HAnimSite969.setTranslation([0.1962,1.1375,-0.1123])
#HAnimSite visualization shape
TouchSensor970 = TouchSensor()
TouchSensor970.setDescription("HAnimSite l_olecranon")

HAnimSite969.addChildren(TouchSensor970)
Shape971 = Shape()
Shape971.setUSE("HAnimSiteShape")

HAnimSite969.addChildren(Shape971)

HAnimSegment942.addChildren(HAnimSite969)
HAnimSite972 = HAnimSite()
HAnimSite972.setName("l_humeral_medial_epicn_pt")
HAnimSite972.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite972.setTranslation([0.1735,1.1272,-0.1113])
#HAnimSite visualization shape
TouchSensor973 = TouchSensor()
TouchSensor973.setDescription("HAnimSite l_humeral_medial_epicn")

HAnimSite972.addChildren(TouchSensor973)
Shape974 = Shape()
Shape974.setUSE("HAnimSiteShape")

HAnimSite972.addChildren(Shape974)

HAnimSegment942.addChildren(HAnimSite972)
HAnimSite975 = HAnimSite()
HAnimSite975.setName("l_radiale_pt")
HAnimSite975.setDEF("hanim_l_radiale_pt")
HAnimSite975.setTranslation([0.2182,1.1212,-0.1167])
#HAnimSite visualization shape
TouchSensor976 = TouchSensor()
TouchSensor976.setDescription("HAnimSite l_radiale")

HAnimSite975.addChildren(TouchSensor976)
Shape977 = Shape()
Shape977.setUSE("HAnimSiteShape")

HAnimSite975.addChildren(Shape977)

HAnimSegment942.addChildren(HAnimSite975)

HAnimJoint941.addChildren(HAnimSegment942)
HAnimJoint978 = HAnimJoint()
HAnimJoint978.setName("l_wrist")
HAnimJoint978.setDEF("hanim_l_wrist")
HAnimJoint978.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint978.setUlimit([0,0,0])
HAnimJoint978.setLlimit([0,0,0])
HAnimJoint978.setStiffness([0,0,0])
HAnimSegment979 = HAnimSegment()
HAnimSegment979.setName("l_hand")
HAnimSegment979.setDEF("hanim_l_hand")
#<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
TouchSensor980 = TouchSensor()
TouchSensor980.setDescription("HAnimJoint l_wrist, HAnimSegment l_hand")

HAnimSegment979.addChildren(TouchSensor980)
Transform981 = Transform()
Transform981.setTranslation([0.1984,0.8663,-0.0583])
Shape982 = Shape()
Shape982.setUSE("HAnimJointShape")

Transform981.addChildren(Shape982)

HAnimSegment979.addChildren(Transform981)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape983 = Shape()
LineSet984 = LineSet()
LineSet984.setVertexCount([2])
Coordinate985 = Coordinate()
Coordinate985.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet984.setCoord(Coordinate985)
ColorRGBA986 = ColorRGBA()
ColorRGBA986.setUSE("HAnimSegmentLineColorRGBA")

LineSet984.setColor(ColorRGBA986)

Shape983.setGeometry(LineSet984)

HAnimSegment979.addChildren(Shape983)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape987 = Shape()
LineSet988 = LineSet()
LineSet988.setVertexCount([2])
Coordinate989 = Coordinate()
Coordinate989.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet988.setCoord(Coordinate989)
ColorRGBA990 = ColorRGBA()
ColorRGBA990.setUSE("HAnimSegmentLineColorRGBA")

LineSet988.setColor(ColorRGBA990)

Shape987.setGeometry(LineSet988)

HAnimSegment979.addChildren(Shape987)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape991 = Shape()
LineSet992 = LineSet()
LineSet992.setVertexCount([2])
Coordinate993 = Coordinate()
Coordinate993.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet992.setCoord(Coordinate993)
ColorRGBA994 = ColorRGBA()
ColorRGBA994.setUSE("HAnimSegmentLineColorRGBA")

LineSet992.setColor(ColorRGBA994)

Shape991.setGeometry(LineSet992)

HAnimSegment979.addChildren(Shape991)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape995 = Shape()
LineSet996 = LineSet()
LineSet996.setVertexCount([2])
Coordinate997 = Coordinate()
Coordinate997.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet996.setCoord(Coordinate997)
ColorRGBA998 = ColorRGBA()
ColorRGBA998.setUSE("HAnimSegmentLineColorRGBA")

LineSet996.setColor(ColorRGBA998)

Shape995.setGeometry(LineSet996)

HAnimSegment979.addChildren(Shape995)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape999 = Shape()
LineSet1000 = LineSet()
LineSet1000.setVertexCount([2])
Coordinate1001 = Coordinate()
Coordinate1001.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1000.setCoord(Coordinate1001)
ColorRGBA1002 = ColorRGBA()
ColorRGBA1002.setUSE("HAnimSegmentLineColorRGBA")

LineSet1000.setColor(ColorRGBA1002)

Shape999.setGeometry(LineSet1000)

HAnimSegment979.addChildren(Shape999)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape1003 = Shape()
LineSet1004 = LineSet()
LineSet1004.setVertexCount([2])
Coordinate1005 = Coordinate()
Coordinate1005.setPoint([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])

LineSet1004.setCoord(Coordinate1005)
ColorRGBA1006 = ColorRGBA()
ColorRGBA1006.setUSE("HAnimSiteLineColorRGBA")

LineSet1004.setColor(ColorRGBA1006)

Shape1003.setGeometry(LineSet1004)

HAnimSegment979.addChildren(Shape1003)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape1007 = Shape()
LineSet1008 = LineSet()
LineSet1008.setVertexCount([2])
Coordinate1009 = Coordinate()
Coordinate1009.setPoint([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])

LineSet1008.setCoord(Coordinate1009)
ColorRGBA1010 = ColorRGBA()
ColorRGBA1010.setUSE("HAnimSiteLineColorRGBA")

LineSet1008.setColor(ColorRGBA1010)

Shape1007.setGeometry(LineSet1008)

HAnimSegment979.addChildren(Shape1007)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape1011 = Shape()
LineSet1012 = LineSet()
LineSet1012.setVertexCount([2])
Coordinate1013 = Coordinate()
Coordinate1013.setPoint([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])

LineSet1012.setCoord(Coordinate1013)
ColorRGBA1014 = ColorRGBA()
ColorRGBA1014.setUSE("HAnimSiteLineColorRGBA")

LineSet1012.setColor(ColorRGBA1014)

Shape1011.setGeometry(LineSet1012)

HAnimSegment979.addChildren(Shape1011)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape1015 = Shape()
LineSet1016 = LineSet()
LineSet1016.setVertexCount([2])
Coordinate1017 = Coordinate()
Coordinate1017.setPoint([0.1984,0.8663,-0.0583,0.3,0.75,0.45])

LineSet1016.setCoord(Coordinate1017)
ColorRGBA1018 = ColorRGBA()
ColorRGBA1018.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1016.setColor(ColorRGBA1018)

Shape1015.setGeometry(LineSet1016)

HAnimSegment979.addChildren(Shape1015)
HAnimSite1019 = HAnimSite()
HAnimSite1019.setName("l_metacarpal_pha2_pt")
HAnimSite1019.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite1019.setTranslation([0.2009,0.8139,-0.0237])
#HAnimSite visualization shape
TouchSensor1020 = TouchSensor()
TouchSensor1020.setDescription("HAnimSite l_metacarpal_pha2")

HAnimSite1019.addChildren(TouchSensor1020)
Shape1021 = Shape()
Shape1021.setUSE("HAnimSiteShape")

HAnimSite1019.addChildren(Shape1021)

HAnimSegment979.addChildren(HAnimSite1019)
HAnimSite1022 = HAnimSite()
HAnimSite1022.setName("l_ulnar_styloid_pt")
HAnimSite1022.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1022.setTranslation([0.2142,0.8529,-0.0648])
#HAnimSite visualization shape
TouchSensor1023 = TouchSensor()
TouchSensor1023.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite1022.addChildren(TouchSensor1023)
Shape1024 = Shape()
Shape1024.setUSE("HAnimSiteShape")

HAnimSite1022.addChildren(Shape1024)

HAnimSegment979.addChildren(HAnimSite1022)
HAnimSite1025 = HAnimSite()
HAnimSite1025.setName("l_metacarpal_pha5_pt")
HAnimSite1025.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite1025.setTranslation([0.1929,0.786,-0.1122])
#HAnimSite visualization shape
TouchSensor1026 = TouchSensor()
TouchSensor1026.setDescription("HAnimSite l_metacarpal_pha5")

HAnimSite1025.addChildren(TouchSensor1026)
Shape1027 = Shape()
Shape1027.setUSE("HAnimSiteShape")

HAnimSite1025.addChildren(Shape1027)

HAnimSegment979.addChildren(HAnimSite1025)
HAnimSite1028 = HAnimSite()
HAnimSite1028.setName("l_hand_front_view")
HAnimSite1028.setDEF("hanim_l_hand_front_view")
HAnimSite1028.setTranslation([0.3,0.75,0.45])
Viewpoint1029 = Viewpoint()
Viewpoint1029.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1029.setCenterOfRotation([0,0.7,0])
Viewpoint1029.setDescription("left hand front")
Viewpoint1029.setPosition([0,0,0])

HAnimSite1028.addChildren(Viewpoint1029)
#HAnimSite/Viewpoint visualization shape
Anchor1030 = Anchor()
Anchor1030.setDescription("HAnimSite Viewpoint hanim_l_hand_front_view")
Anchor1030.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1031 = LOD()
LOD1031.setForceTransitions(True)
LOD1031.setRange([0.04])
WorldInfo1032 = WorldInfo()
WorldInfo1032.setInfo(["hide diamond when close"])

LOD1031.addChildren(WorldInfo1032)
Shape1033 = Shape()
Shape1033.setUSE("HAnimSiteViewpointShape")

LOD1031.addChildren(Shape1033)

Anchor1030.addChildren(LOD1031)

HAnimSite1028.addChildren(Anchor1030)

HAnimSegment979.addChildren(HAnimSite1028)

HAnimJoint978.addChildren(HAnimSegment979)
HAnimJoint1034 = HAnimJoint()
HAnimJoint1034.setName("l_thumb1")
HAnimJoint1034.setDEF("hanim_l_thumb1")
HAnimJoint1034.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1034.setUlimit([0,0,0])
HAnimJoint1034.setLlimit([0,0,0])
HAnimJoint1034.setStiffness([0,0,0])
HAnimSegment1035 = HAnimSegment()
HAnimSegment1035.setName("l_thumb_metacarpal")
HAnimSegment1035.setDEF("hanim_l_thumb_metacarpal")
#<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor1036 = TouchSensor()
TouchSensor1036.setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")

HAnimSegment1035.addChildren(TouchSensor1036)
Transform1037 = Transform()
Transform1037.setTranslation([0.1924,0.8472,-0.0534])
Shape1038 = Shape()
Shape1038.setUSE("HAnimJointShape")

Transform1037.addChildren(Shape1038)

HAnimSegment1035.addChildren(Transform1037)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape1039 = Shape()
LineSet1040 = LineSet()
LineSet1040.setVertexCount([2])
Coordinate1041 = Coordinate()
Coordinate1041.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1040.setCoord(Coordinate1041)
ColorRGBA1042 = ColorRGBA()
ColorRGBA1042.setUSE("HAnimSegmentLineColorRGBA")

LineSet1040.setColor(ColorRGBA1042)

Shape1039.setGeometry(LineSet1040)

HAnimSegment1035.addChildren(Shape1039)

HAnimJoint1034.addChildren(HAnimSegment1035)
HAnimJoint1043 = HAnimJoint()
HAnimJoint1043.setName("l_thumb2")
HAnimJoint1043.setDEF("hanim_l_thumb2")
HAnimJoint1043.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1043.setUlimit([0,0,0])
HAnimJoint1043.setLlimit([0,0,0])
HAnimJoint1043.setStiffness([0,0,0])
HAnimSegment1044 = HAnimSegment()
HAnimSegment1044.setName("l_thumb_proximal")
HAnimSegment1044.setDEF("hanim_l_thumb_proximal")
#<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor1045 = TouchSensor()
TouchSensor1045.setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")

HAnimSegment1044.addChildren(TouchSensor1045)
Transform1046 = Transform()
Transform1046.setTranslation([0.1951,0.8226,0.0246])
Shape1047 = Shape()
Shape1047.setUSE("HAnimJointShape")

Transform1046.addChildren(Shape1047)

HAnimSegment1044.addChildren(Transform1046)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape1048 = Shape()
LineSet1049 = LineSet()
LineSet1049.setVertexCount([2])
Coordinate1050 = Coordinate()
Coordinate1050.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1049.setCoord(Coordinate1050)
ColorRGBA1051 = ColorRGBA()
ColorRGBA1051.setUSE("HAnimSegmentLineColorRGBA")

LineSet1049.setColor(ColorRGBA1051)

Shape1048.setGeometry(LineSet1049)

HAnimSegment1044.addChildren(Shape1048)

HAnimJoint1043.addChildren(HAnimSegment1044)
HAnimJoint1052 = HAnimJoint()
HAnimJoint1052.setName("l_thumb3")
HAnimJoint1052.setDEF("hanim_l_thumb3")
HAnimJoint1052.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1052.setUlimit([0,0,0])
HAnimJoint1052.setLlimit([0,0,0])
HAnimJoint1052.setStiffness([0,0,0])
HAnimSegment1053 = HAnimSegment()
HAnimSegment1053.setName("l_thumb_distal")
HAnimSegment1053.setDEF("hanim_l_thumb_distal")
#<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
TouchSensor1054 = TouchSensor()
TouchSensor1054.setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")

HAnimSegment1053.addChildren(TouchSensor1054)
Transform1055 = Transform()
Transform1055.setTranslation([0.1955,0.8159,0.0464])
Shape1056 = Shape()
Shape1056.setUSE("HAnimJointShape")

Transform1055.addChildren(Shape1056)

HAnimSegment1053.addChildren(Transform1055)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape1057 = Shape()
LineSet1058 = LineSet()
LineSet1058.setVertexCount([2])
Coordinate1059 = Coordinate()
Coordinate1059.setPoint([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])

LineSet1058.setCoord(Coordinate1059)
ColorRGBA1060 = ColorRGBA()
ColorRGBA1060.setUSE("HAnimSiteLineColorRGBA")

LineSet1058.setColor(ColorRGBA1060)

Shape1057.setGeometry(LineSet1058)

HAnimSegment1053.addChildren(Shape1057)
HAnimSite1061 = HAnimSite()
HAnimSite1061.setName("l_thumb_distal_tip")
HAnimSite1061.setDEF("hanim_l_thumb_distal_tip")
HAnimSite1061.setTranslation([0.1982,0.8061,0.0759])
#HAnimSite visualization shape
TouchSensor1062 = TouchSensor()
TouchSensor1062.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1061.addChildren(TouchSensor1062)
Shape1063 = Shape()
Shape1063.setUSE("HAnimSiteShape")

HAnimSite1061.addChildren(Shape1063)

HAnimSegment1053.addChildren(HAnimSite1061)

HAnimJoint1052.addChildren(HAnimSegment1053)

HAnimJoint1043.addChildren(HAnimJoint1052)

HAnimJoint1034.addChildren(HAnimJoint1043)

HAnimJoint978.addChildren(HAnimJoint1034)
HAnimJoint1064 = HAnimJoint()
HAnimJoint1064.setName("l_index0")
HAnimJoint1064.setDEF("hanim_l_index0")
HAnimJoint1064.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1064.setUlimit([0,0,0])
HAnimJoint1064.setLlimit([0,0,0])
HAnimJoint1064.setStiffness([0,0,0])
HAnimSegment1065 = HAnimSegment()
HAnimSegment1065.setName("l_index_metacarpal")
HAnimSegment1065.setDEF("hanim_l_index_metacarpal")
#<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor1066 = TouchSensor()
TouchSensor1066.setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")

HAnimSegment1065.addChildren(TouchSensor1066)
Transform1067 = Transform()
Transform1067.setTranslation([0.1983,0.8024,-0.028])
Shape1068 = Shape()
Shape1068.setUSE("HAnimJointShape")

Transform1067.addChildren(Shape1068)

HAnimSegment1065.addChildren(Transform1067)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape1069 = Shape()
LineSet1070 = LineSet()
LineSet1070.setVertexCount([2])
Coordinate1071 = Coordinate()
Coordinate1071.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1070.setCoord(Coordinate1071)
ColorRGBA1072 = ColorRGBA()
ColorRGBA1072.setUSE("HAnimSegmentLineColorRGBA")

LineSet1070.setColor(ColorRGBA1072)

Shape1069.setGeometry(LineSet1070)

HAnimSegment1065.addChildren(Shape1069)

HAnimJoint1064.addChildren(HAnimSegment1065)
HAnimJoint1073 = HAnimJoint()
HAnimJoint1073.setName("l_index1")
HAnimJoint1073.setDEF("hanim_l_index1")
HAnimJoint1073.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1073.setUlimit([0,0,0])
HAnimJoint1073.setLlimit([0,0,0])
HAnimJoint1073.setStiffness([0,0,0])
HAnimSegment1074 = HAnimSegment()
HAnimSegment1074.setName("l_index_proximal")
HAnimSegment1074.setDEF("hanim_l_index_proximal")
#<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
TouchSensor1075 = TouchSensor()
TouchSensor1075.setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal")

HAnimSegment1074.addChildren(TouchSensor1075)
Transform1076 = Transform()
Transform1076.setTranslation([0.1983,0.7815,-0.028])
Shape1077 = Shape()
Shape1077.setUSE("HAnimJointShape")

Transform1076.addChildren(Shape1077)

HAnimSegment1074.addChildren(Transform1076)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape1078 = Shape()
LineSet1079 = LineSet()
LineSet1079.setVertexCount([2])
Coordinate1080 = Coordinate()
Coordinate1080.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1079.setCoord(Coordinate1080)
ColorRGBA1081 = ColorRGBA()
ColorRGBA1081.setUSE("HAnimSegmentLineColorRGBA")

LineSet1079.setColor(ColorRGBA1081)

Shape1078.setGeometry(LineSet1079)

HAnimSegment1074.addChildren(Shape1078)

HAnimJoint1073.addChildren(HAnimSegment1074)
HAnimJoint1082 = HAnimJoint()
HAnimJoint1082.setName("l_index2")
HAnimJoint1082.setDEF("hanim_l_index2")
HAnimJoint1082.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1082.setUlimit([0,0,0])
HAnimJoint1082.setLlimit([0,0,0])
HAnimJoint1082.setStiffness([0,0,0])
HAnimSegment1083 = HAnimSegment()
HAnimSegment1083.setName("l_index_middle")
HAnimSegment1083.setDEF("hanim_l_index_middle")
#<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
TouchSensor1084 = TouchSensor()
TouchSensor1084.setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle")

HAnimSegment1083.addChildren(TouchSensor1084)
Transform1085 = Transform()
Transform1085.setTranslation([0.2017,0.7363,-0.0248])
Shape1086 = Shape()
Shape1086.setUSE("HAnimJointShape")

Transform1085.addChildren(Shape1086)

HAnimSegment1083.addChildren(Transform1085)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape1087 = Shape()
LineSet1088 = LineSet()
LineSet1088.setVertexCount([2])
Coordinate1089 = Coordinate()
Coordinate1089.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1088.setCoord(Coordinate1089)
ColorRGBA1090 = ColorRGBA()
ColorRGBA1090.setUSE("HAnimSegmentLineColorRGBA")

LineSet1088.setColor(ColorRGBA1090)

Shape1087.setGeometry(LineSet1088)

HAnimSegment1083.addChildren(Shape1087)

HAnimJoint1082.addChildren(HAnimSegment1083)
HAnimJoint1091 = HAnimJoint()
HAnimJoint1091.setName("l_index3")
HAnimJoint1091.setDEF("hanim_l_index3")
HAnimJoint1091.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1091.setUlimit([0,0,0])
HAnimJoint1091.setLlimit([0,0,0])
HAnimJoint1091.setStiffness([0,0,0])
HAnimSegment1092 = HAnimSegment()
HAnimSegment1092.setName("l_index_distal")
HAnimSegment1092.setDEF("hanim_l_index_distal")
#<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
TouchSensor1093 = TouchSensor()
TouchSensor1093.setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal")

HAnimSegment1092.addChildren(TouchSensor1093)
Transform1094 = Transform()
Transform1094.setTranslation([0.2028,0.7139,-0.0236])
Shape1095 = Shape()
Shape1095.setUSE("HAnimJointShape")

Transform1094.addChildren(Shape1095)

HAnimSegment1092.addChildren(Transform1094)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape1096 = Shape()
LineSet1097 = LineSet()
LineSet1097.setVertexCount([2])
Coordinate1098 = Coordinate()
Coordinate1098.setPoint([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])

LineSet1097.setCoord(Coordinate1098)
ColorRGBA1099 = ColorRGBA()
ColorRGBA1099.setUSE("HAnimSiteLineColorRGBA")

LineSet1097.setColor(ColorRGBA1099)

Shape1096.setGeometry(LineSet1097)

HAnimSegment1092.addChildren(Shape1096)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape1100 = Shape()
LineSet1101 = LineSet()
LineSet1101.setVertexCount([2])
Coordinate1102 = Coordinate()
Coordinate1102.setPoint([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])

LineSet1101.setCoord(Coordinate1102)
ColorRGBA1103 = ColorRGBA()
ColorRGBA1103.setUSE("HAnimSiteLineColorRGBA")

LineSet1101.setColor(ColorRGBA1103)

Shape1100.setGeometry(LineSet1101)

HAnimSegment1092.addChildren(Shape1100)
HAnimSite1104 = HAnimSite()
HAnimSite1104.setName("l_index_distal_tip")
HAnimSite1104.setDEF("hanim_l_index_distal_tip")
HAnimSite1104.setTranslation([0.2089,0.6858,-0.0245])
#HAnimSite visualization shape
TouchSensor1105 = TouchSensor()
TouchSensor1105.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1104.addChildren(TouchSensor1105)
Shape1106 = Shape()
Shape1106.setUSE("HAnimSiteShape")

HAnimSite1104.addChildren(Shape1106)

HAnimSegment1092.addChildren(HAnimSite1104)
HAnimSite1107 = HAnimSite()
HAnimSite1107.setName("l_dactylion_pt")
HAnimSite1107.setDEF("hanim_l_dactylion_pt")
HAnimSite1107.setTranslation([0.2056,0.6743,-0.0482])
#HAnimSite visualization shape
TouchSensor1108 = TouchSensor()
TouchSensor1108.setDescription("HAnimSite l_dactylion")

HAnimSite1107.addChildren(TouchSensor1108)
Shape1109 = Shape()
Shape1109.setUSE("HAnimSiteShape")

HAnimSite1107.addChildren(Shape1109)

HAnimSegment1092.addChildren(HAnimSite1107)

HAnimJoint1091.addChildren(HAnimSegment1092)

HAnimJoint1082.addChildren(HAnimJoint1091)

HAnimJoint1073.addChildren(HAnimJoint1082)

HAnimJoint1064.addChildren(HAnimJoint1073)

HAnimJoint978.addChildren(HAnimJoint1064)
HAnimJoint1110 = HAnimJoint()
HAnimJoint1110.setName("l_middle0")
HAnimJoint1110.setDEF("hanim_l_middle0")
HAnimJoint1110.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1110.setUlimit([0,0,0])
HAnimJoint1110.setLlimit([0,0,0])
HAnimJoint1110.setStiffness([0,0,0])
HAnimSegment1111 = HAnimSegment()
HAnimSegment1111.setName("l_middle_metacarpal")
HAnimSegment1111.setDEF("hanim_l_middle_metacarpal")
#<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor1112 = TouchSensor()
TouchSensor1112.setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")

HAnimSegment1111.addChildren(TouchSensor1112)
Transform1113 = Transform()
Transform1113.setTranslation([0.1987,0.8029,-0.053])
Shape1114 = Shape()
Shape1114.setUSE("HAnimJointShape")

Transform1113.addChildren(Shape1114)

HAnimSegment1111.addChildren(Transform1113)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape1115 = Shape()
LineSet1116 = LineSet()
LineSet1116.setVertexCount([2])
Coordinate1117 = Coordinate()
Coordinate1117.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1116.setCoord(Coordinate1117)
ColorRGBA1118 = ColorRGBA()
ColorRGBA1118.setUSE("HAnimSegmentLineColorRGBA")

LineSet1116.setColor(ColorRGBA1118)

Shape1115.setGeometry(LineSet1116)

HAnimSegment1111.addChildren(Shape1115)

HAnimJoint1110.addChildren(HAnimSegment1111)
HAnimJoint1119 = HAnimJoint()
HAnimJoint1119.setName("l_middle1")
HAnimJoint1119.setDEF("hanim_l_middle1")
HAnimJoint1119.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1119.setUlimit([0,0,0])
HAnimJoint1119.setLlimit([0,0,0])
HAnimJoint1119.setStiffness([0,0,0])
HAnimSegment1120 = HAnimSegment()
HAnimSegment1120.setName("l_middle_proximal")
HAnimSegment1120.setDEF("hanim_l_middle_proximal")
#<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
TouchSensor1121 = TouchSensor()
TouchSensor1121.setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")

HAnimSegment1120.addChildren(TouchSensor1121)
Transform1122 = Transform()
Transform1122.setTranslation([0.1987,0.7818,-0.053])
Shape1123 = Shape()
Shape1123.setUSE("HAnimJointShape")

Transform1122.addChildren(Shape1123)

HAnimSegment1120.addChildren(Transform1122)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape1124 = Shape()
LineSet1125 = LineSet()
LineSet1125.setVertexCount([2])
Coordinate1126 = Coordinate()
Coordinate1126.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1125.setCoord(Coordinate1126)
ColorRGBA1127 = ColorRGBA()
ColorRGBA1127.setUSE("HAnimSegmentLineColorRGBA")

LineSet1125.setColor(ColorRGBA1127)

Shape1124.setGeometry(LineSet1125)

HAnimSegment1120.addChildren(Shape1124)

HAnimJoint1119.addChildren(HAnimSegment1120)
HAnimJoint1128 = HAnimJoint()
HAnimJoint1128.setName("l_middle2")
HAnimJoint1128.setDEF("hanim_l_middle2")
HAnimJoint1128.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1128.setUlimit([0,0,0])
HAnimJoint1128.setLlimit([0,0,0])
HAnimJoint1128.setStiffness([0,0,0])
HAnimSegment1129 = HAnimSegment()
HAnimSegment1129.setName("l_middle_middle")
HAnimSegment1129.setDEF("hanim_l_middle_middle")
#<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
TouchSensor1130 = TouchSensor()
TouchSensor1130.setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle")

HAnimSegment1129.addChildren(TouchSensor1130)
Transform1131 = Transform()
Transform1131.setTranslation([0.2013,0.7273,-0.0503])
Shape1132 = Shape()
Shape1132.setUSE("HAnimJointShape")

Transform1131.addChildren(Shape1132)

HAnimSegment1129.addChildren(Transform1131)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape1133 = Shape()
LineSet1134 = LineSet()
LineSet1134.setVertexCount([2])
Coordinate1135 = Coordinate()
Coordinate1135.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1134.setCoord(Coordinate1135)
ColorRGBA1136 = ColorRGBA()
ColorRGBA1136.setUSE("HAnimSegmentLineColorRGBA")

LineSet1134.setColor(ColorRGBA1136)

Shape1133.setGeometry(LineSet1134)

HAnimSegment1129.addChildren(Shape1133)

HAnimJoint1128.addChildren(HAnimSegment1129)
HAnimJoint1137 = HAnimJoint()
HAnimJoint1137.setName("l_middle3")
HAnimJoint1137.setDEF("hanim_l_middle3")
HAnimJoint1137.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1137.setUlimit([0,0,0])
HAnimJoint1137.setLlimit([0,0,0])
HAnimJoint1137.setStiffness([0,0,0])
HAnimSegment1138 = HAnimSegment()
HAnimSegment1138.setName("l_middle_distal")
HAnimSegment1138.setDEF("hanim_l_middle_distal")
#<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
TouchSensor1139 = TouchSensor()
TouchSensor1139.setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal")

HAnimSegment1138.addChildren(TouchSensor1139)
Transform1140 = Transform()
Transform1140.setTranslation([0.2026,0.7011,-0.0494])
Shape1141 = Shape()
Shape1141.setUSE("HAnimJointShape")

Transform1140.addChildren(Shape1141)

HAnimSegment1138.addChildren(Transform1140)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape1142 = Shape()
LineSet1143 = LineSet()
LineSet1143.setVertexCount([2])
Coordinate1144 = Coordinate()
Coordinate1144.setPoint([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])

LineSet1143.setCoord(Coordinate1144)
ColorRGBA1145 = ColorRGBA()
ColorRGBA1145.setUSE("HAnimSiteLineColorRGBA")

LineSet1143.setColor(ColorRGBA1145)

Shape1142.setGeometry(LineSet1143)

HAnimSegment1138.addChildren(Shape1142)
HAnimSite1146 = HAnimSite()
HAnimSite1146.setName("l_middle_distal_tip")
HAnimSite1146.setDEF("hanim_l_middle_distal_tip")
HAnimSite1146.setTranslation([0.208,0.6731,-0.0491])
#HAnimSite visualization shape
TouchSensor1147 = TouchSensor()
TouchSensor1147.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1146.addChildren(TouchSensor1147)
Shape1148 = Shape()
Shape1148.setUSE("HAnimSiteShape")

HAnimSite1146.addChildren(Shape1148)

HAnimSegment1138.addChildren(HAnimSite1146)

HAnimJoint1137.addChildren(HAnimSegment1138)

HAnimJoint1128.addChildren(HAnimJoint1137)

HAnimJoint1119.addChildren(HAnimJoint1128)

HAnimJoint1110.addChildren(HAnimJoint1119)

HAnimJoint978.addChildren(HAnimJoint1110)
HAnimJoint1149 = HAnimJoint()
HAnimJoint1149.setName("l_ring0")
HAnimJoint1149.setDEF("hanim_l_ring0")
HAnimJoint1149.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1149.setUlimit([0,0,0])
HAnimJoint1149.setLlimit([0,0,0])
HAnimJoint1149.setStiffness([0,0,0])
HAnimSegment1150 = HAnimSegment()
HAnimSegment1150.setName("l_ring_metacarpal")
HAnimSegment1150.setDEF("hanim_l_ring_metacarpal")
#<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor1151 = TouchSensor()
TouchSensor1151.setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")

HAnimSegment1150.addChildren(TouchSensor1151)
Transform1152 = Transform()
Transform1152.setTranslation([0.1956,0.8019,-0.0794])
Shape1153 = Shape()
Shape1153.setUSE("HAnimJointShape")

Transform1152.addChildren(Shape1153)

HAnimSegment1150.addChildren(Transform1152)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape1154 = Shape()
LineSet1155 = LineSet()
LineSet1155.setVertexCount([2])
Coordinate1156 = Coordinate()
Coordinate1156.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1155.setCoord(Coordinate1156)
ColorRGBA1157 = ColorRGBA()
ColorRGBA1157.setUSE("HAnimSegmentLineColorRGBA")

LineSet1155.setColor(ColorRGBA1157)

Shape1154.setGeometry(LineSet1155)

HAnimSegment1150.addChildren(Shape1154)

HAnimJoint1149.addChildren(HAnimSegment1150)
HAnimJoint1158 = HAnimJoint()
HAnimJoint1158.setName("l_ring1")
HAnimJoint1158.setDEF("hanim_l_ring1")
HAnimJoint1158.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1158.setUlimit([0,0,0])
HAnimJoint1158.setLlimit([0,0,0])
HAnimJoint1158.setStiffness([0,0,0])
HAnimSegment1159 = HAnimSegment()
HAnimSegment1159.setName("l_ring_proximal")
HAnimSegment1159.setDEF("hanim_l_ring_proximal")
#<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
TouchSensor1160 = TouchSensor()
TouchSensor1160.setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")

HAnimSegment1159.addChildren(TouchSensor1160)
Transform1161 = Transform()
Transform1161.setTranslation([0.1956,0.7815,-0.0794])
Shape1162 = Shape()
Shape1162.setUSE("HAnimJointShape")

Transform1161.addChildren(Shape1162)

HAnimSegment1159.addChildren(Transform1161)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape1163 = Shape()
LineSet1164 = LineSet()
LineSet1164.setVertexCount([2])
Coordinate1165 = Coordinate()
Coordinate1165.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1164.setCoord(Coordinate1165)
ColorRGBA1166 = ColorRGBA()
ColorRGBA1166.setUSE("HAnimSegmentLineColorRGBA")

LineSet1164.setColor(ColorRGBA1166)

Shape1163.setGeometry(LineSet1164)

HAnimSegment1159.addChildren(Shape1163)

HAnimJoint1158.addChildren(HAnimSegment1159)
HAnimJoint1167 = HAnimJoint()
HAnimJoint1167.setName("l_ring2")
HAnimJoint1167.setDEF("hanim_l_ring2")
HAnimJoint1167.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1167.setUlimit([0,0,0])
HAnimJoint1167.setLlimit([0,0,0])
HAnimJoint1167.setStiffness([0,0,0])
HAnimSegment1168 = HAnimSegment()
HAnimSegment1168.setName("l_ring_middle")
HAnimSegment1168.setDEF("hanim_l_ring_middle")
#<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
TouchSensor1169 = TouchSensor()
TouchSensor1169.setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle")

HAnimSegment1168.addChildren(TouchSensor1169)
Transform1170 = Transform()
Transform1170.setTranslation([0.1973,0.7287,-0.0777])
Shape1171 = Shape()
Shape1171.setUSE("HAnimJointShape")

Transform1170.addChildren(Shape1171)

HAnimSegment1168.addChildren(Transform1170)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape1172 = Shape()
LineSet1173 = LineSet()
LineSet1173.setVertexCount([2])
Coordinate1174 = Coordinate()
Coordinate1174.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1173.setCoord(Coordinate1174)
ColorRGBA1175 = ColorRGBA()
ColorRGBA1175.setUSE("HAnimSegmentLineColorRGBA")

LineSet1173.setColor(ColorRGBA1175)

Shape1172.setGeometry(LineSet1173)

HAnimSegment1168.addChildren(Shape1172)

HAnimJoint1167.addChildren(HAnimSegment1168)
HAnimJoint1176 = HAnimJoint()
HAnimJoint1176.setName("l_ring3")
HAnimJoint1176.setDEF("hanim_l_ring3")
HAnimJoint1176.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1176.setUlimit([0,0,0])
HAnimJoint1176.setLlimit([0,0,0])
HAnimJoint1176.setStiffness([0,0,0])
HAnimSegment1177 = HAnimSegment()
HAnimSegment1177.setName("l_ring_distal")
HAnimSegment1177.setDEF("hanim_l_ring_distal")
#<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
TouchSensor1178 = TouchSensor()
TouchSensor1178.setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal")

HAnimSegment1177.addChildren(TouchSensor1178)
Transform1179 = Transform()
Transform1179.setTranslation([0.1983,0.7045,-0.0767])
Shape1180 = Shape()
Shape1180.setUSE("HAnimJointShape")

Transform1179.addChildren(Shape1180)

HAnimSegment1177.addChildren(Transform1179)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape1181 = Shape()
LineSet1182 = LineSet()
LineSet1182.setVertexCount([2])
Coordinate1183 = Coordinate()
Coordinate1183.setPoint([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])

LineSet1182.setCoord(Coordinate1183)
ColorRGBA1184 = ColorRGBA()
ColorRGBA1184.setUSE("HAnimSiteLineColorRGBA")

LineSet1182.setColor(ColorRGBA1184)

Shape1181.setGeometry(LineSet1182)

HAnimSegment1177.addChildren(Shape1181)
HAnimSite1185 = HAnimSite()
HAnimSite1185.setName("l_ring_distal_tip")
HAnimSite1185.setDEF("hanim_l_ring_distal_tip")
HAnimSite1185.setTranslation([0.2035,0.675,-0.0756])
#HAnimSite visualization shape
TouchSensor1186 = TouchSensor()
TouchSensor1186.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1185.addChildren(TouchSensor1186)
Shape1187 = Shape()
Shape1187.setUSE("HAnimSiteShape")

HAnimSite1185.addChildren(Shape1187)

HAnimSegment1177.addChildren(HAnimSite1185)

HAnimJoint1176.addChildren(HAnimSegment1177)

HAnimJoint1167.addChildren(HAnimJoint1176)

HAnimJoint1158.addChildren(HAnimJoint1167)

HAnimJoint1149.addChildren(HAnimJoint1158)

HAnimJoint978.addChildren(HAnimJoint1149)
HAnimJoint1188 = HAnimJoint()
HAnimJoint1188.setName("l_pinky0")
HAnimJoint1188.setDEF("hanim_l_pinky0")
HAnimJoint1188.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1188.setUlimit([0,0,0])
HAnimJoint1188.setLlimit([0,0,0])
HAnimJoint1188.setStiffness([0,0,0])
HAnimSegment1189 = HAnimSegment()
HAnimSegment1189.setName("l_pinky_metacarpal")
HAnimSegment1189.setDEF("hanim_l_pinky_metacarpal")
#<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor1190 = TouchSensor()
TouchSensor1190.setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")

HAnimSegment1189.addChildren(TouchSensor1190)
Transform1191 = Transform()
Transform1191.setTranslation([0.1925,0.8066,-0.1036])
Shape1192 = Shape()
Shape1192.setUSE("HAnimJointShape")

Transform1191.addChildren(Shape1192)

HAnimSegment1189.addChildren(Transform1191)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape1193 = Shape()
LineSet1194 = LineSet()
LineSet1194.setVertexCount([2])
Coordinate1195 = Coordinate()
Coordinate1195.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1194.setCoord(Coordinate1195)
ColorRGBA1196 = ColorRGBA()
ColorRGBA1196.setUSE("HAnimSegmentLineColorRGBA")

LineSet1194.setColor(ColorRGBA1196)

Shape1193.setGeometry(LineSet1194)

HAnimSegment1189.addChildren(Shape1193)

HAnimJoint1188.addChildren(HAnimSegment1189)
HAnimJoint1197 = HAnimJoint()
HAnimJoint1197.setName("l_pinky1")
HAnimJoint1197.setDEF("hanim_l_pinky1")
HAnimJoint1197.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1197.setUlimit([0,0,0])
HAnimJoint1197.setLlimit([0,0,0])
HAnimJoint1197.setStiffness([0,0,0])
HAnimSegment1198 = HAnimSegment()
HAnimSegment1198.setName("l_pinky_proximal")
HAnimSegment1198.setDEF("hanim_l_pinky_proximal")
#<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor1199 = TouchSensor()
TouchSensor1199.setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")

HAnimSegment1198.addChildren(TouchSensor1199)
Transform1200 = Transform()
Transform1200.setTranslation([0.1925,0.7866,-0.1036])
Shape1201 = Shape()
Shape1201.setUSE("HAnimJointShape")

Transform1200.addChildren(Shape1201)

HAnimSegment1198.addChildren(Transform1200)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape1202 = Shape()
LineSet1203 = LineSet()
LineSet1203.setVertexCount([2])
Coordinate1204 = Coordinate()
Coordinate1204.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1203.setCoord(Coordinate1204)
ColorRGBA1205 = ColorRGBA()
ColorRGBA1205.setUSE("HAnimSegmentLineColorRGBA")

LineSet1203.setColor(ColorRGBA1205)

Shape1202.setGeometry(LineSet1203)

HAnimSegment1198.addChildren(Shape1202)

HAnimJoint1197.addChildren(HAnimSegment1198)
HAnimJoint1206 = HAnimJoint()
HAnimJoint1206.setName("l_pinky2")
HAnimJoint1206.setDEF("hanim_l_pinky2")
HAnimJoint1206.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1206.setUlimit([0,0,0])
HAnimJoint1206.setLlimit([0,0,0])
HAnimJoint1206.setStiffness([0,0,0])
HAnimSegment1207 = HAnimSegment()
HAnimSegment1207.setName("l_pinky_middle")
HAnimSegment1207.setDEF("hanim_l_pinky_middle")
#<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
TouchSensor1208 = TouchSensor()
TouchSensor1208.setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")

HAnimSegment1207.addChildren(TouchSensor1208)
Transform1209 = Transform()
Transform1209.setTranslation([0.1938,0.7452,-0.1024])
Shape1210 = Shape()
Shape1210.setUSE("HAnimJointShape")

Transform1209.addChildren(Shape1210)

HAnimSegment1207.addChildren(Transform1209)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape1211 = Shape()
LineSet1212 = LineSet()
LineSet1212.setVertexCount([2])
Coordinate1213 = Coordinate()
Coordinate1213.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1212.setCoord(Coordinate1213)
ColorRGBA1214 = ColorRGBA()
ColorRGBA1214.setUSE("HAnimSegmentLineColorRGBA")

LineSet1212.setColor(ColorRGBA1214)

Shape1211.setGeometry(LineSet1212)

HAnimSegment1207.addChildren(Shape1211)

HAnimJoint1206.addChildren(HAnimSegment1207)
HAnimJoint1215 = HAnimJoint()
HAnimJoint1215.setName("l_pinky3")
HAnimJoint1215.setDEF("hanim_l_pinky3")
HAnimJoint1215.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1215.setUlimit([0,0,0])
HAnimJoint1215.setLlimit([0,0,0])
HAnimJoint1215.setStiffness([0,0,0])
HAnimSegment1216 = HAnimSegment()
HAnimSegment1216.setName("l_pinky_distal")
HAnimSegment1216.setDEF("hanim_l_pinky_distal")
#<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
TouchSensor1217 = TouchSensor()
TouchSensor1217.setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")

HAnimSegment1216.addChildren(TouchSensor1217)
Transform1218 = Transform()
Transform1218.setTranslation([0.1948,0.7277,-0.1017])
Shape1219 = Shape()
Shape1219.setUSE("HAnimJointShape")

Transform1218.addChildren(Shape1219)

HAnimSegment1216.addChildren(Transform1218)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape1220 = Shape()
LineSet1221 = LineSet()
LineSet1221.setVertexCount([2])
Coordinate1222 = Coordinate()
Coordinate1222.setPoint([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])

LineSet1221.setCoord(Coordinate1222)
ColorRGBA1223 = ColorRGBA()
ColorRGBA1223.setUSE("HAnimSiteLineColorRGBA")

LineSet1221.setColor(ColorRGBA1223)

Shape1220.setGeometry(LineSet1221)

HAnimSegment1216.addChildren(Shape1220)
HAnimSite1224 = HAnimSite()
HAnimSite1224.setName("l_pinky_distal_tip")
HAnimSite1224.setDEF("hanim_l_pinky_distal_tip")
HAnimSite1224.setTranslation([0.2014,0.7009,-0.1012])
#HAnimSite visualization shape
TouchSensor1225 = TouchSensor()
TouchSensor1225.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1224.addChildren(TouchSensor1225)
Shape1226 = Shape()
Shape1226.setUSE("HAnimSiteShape")

HAnimSite1224.addChildren(Shape1226)

HAnimSegment1216.addChildren(HAnimSite1224)

HAnimJoint1215.addChildren(HAnimSegment1216)

HAnimJoint1206.addChildren(HAnimJoint1215)

HAnimJoint1197.addChildren(HAnimJoint1206)

HAnimJoint1188.addChildren(HAnimJoint1197)

HAnimJoint978.addChildren(HAnimJoint1188)

HAnimJoint941.addChildren(HAnimJoint978)

HAnimJoint925.addChildren(HAnimJoint941)

HAnimJoint916.addChildren(HAnimJoint925)

HAnimJoint879.addChildren(HAnimJoint916)

HAnimJoint595.addChildren(HAnimJoint879)
HAnimJoint1227 = HAnimJoint()
HAnimJoint1227.setName("r_sternoclavicular")
HAnimJoint1227.setDEF("hanim_r_sternoclavicular")
HAnimJoint1227.setCenter([-0.082,1.4488,-0.0353])
HAnimJoint1227.setUlimit([0,0,0])
HAnimJoint1227.setLlimit([0,0,0])
HAnimJoint1227.setStiffness([0,0,0])
HAnimSegment1228 = HAnimSegment()
HAnimSegment1228.setName("r_clavicle")
HAnimSegment1228.setDEF("hanim_r_clavicle")
#<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
TouchSensor1229 = TouchSensor()
TouchSensor1229.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1228.addChildren(TouchSensor1229)
Transform1230 = Transform()
Transform1230.setTranslation([-0.082,1.4488,-0.0353])
Shape1231 = Shape()
Shape1231.setUSE("HAnimJointShape")

Transform1230.addChildren(Shape1231)

HAnimSegment1228.addChildren(Transform1230)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape1232 = Shape()
LineSet1233 = LineSet()
LineSet1233.setVertexCount([2])
Coordinate1234 = Coordinate()
Coordinate1234.setPoint([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])

LineSet1233.setCoord(Coordinate1234)
ColorRGBA1235 = ColorRGBA()
ColorRGBA1235.setUSE("HAnimSegmentLineColorRGBA")

LineSet1233.setColor(ColorRGBA1235)

Shape1232.setGeometry(LineSet1233)

HAnimSegment1228.addChildren(Shape1232)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape1236 = Shape()
LineSet1237 = LineSet()
LineSet1237.setVertexCount([2])
Coordinate1238 = Coordinate()
Coordinate1238.setPoint([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])

LineSet1237.setCoord(Coordinate1238)
ColorRGBA1239 = ColorRGBA()
ColorRGBA1239.setUSE("HAnimSiteLineColorRGBA")

LineSet1237.setColor(ColorRGBA1239)

Shape1236.setGeometry(LineSet1237)

HAnimSegment1228.addChildren(Shape1236)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape1240 = Shape()
LineSet1241 = LineSet()
LineSet1241.setVertexCount([2])
Coordinate1242 = Coordinate()
Coordinate1242.setPoint([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])

LineSet1241.setCoord(Coordinate1242)
ColorRGBA1243 = ColorRGBA()
ColorRGBA1243.setUSE("HAnimSiteLineColorRGBA")

LineSet1241.setColor(ColorRGBA1243)

Shape1240.setGeometry(LineSet1241)

HAnimSegment1228.addChildren(Shape1240)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape1244 = Shape()
LineSet1245 = LineSet()
LineSet1245.setVertexCount([2])
Coordinate1246 = Coordinate()
Coordinate1246.setPoint([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])

LineSet1245.setCoord(Coordinate1246)
ColorRGBA1247 = ColorRGBA()
ColorRGBA1247.setUSE("HAnimSiteLineColorRGBA")

LineSet1245.setColor(ColorRGBA1247)

Shape1244.setGeometry(LineSet1245)

HAnimSegment1228.addChildren(Shape1244)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape1248 = Shape()
LineSet1249 = LineSet()
LineSet1249.setVertexCount([2])
Coordinate1250 = Coordinate()
Coordinate1250.setPoint([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])

LineSet1249.setCoord(Coordinate1250)
ColorRGBA1251 = ColorRGBA()
ColorRGBA1251.setUSE("HAnimSiteLineColorRGBA")

LineSet1249.setColor(ColorRGBA1251)

Shape1248.setGeometry(LineSet1249)

HAnimSegment1228.addChildren(Shape1248)
HAnimSite1252 = HAnimSite()
HAnimSite1252.setName("r_clavicale_pt")
HAnimSite1252.setDEF("hanim_r_clavicale_pt")
HAnimSite1252.setTranslation([-0.0115,1.4943,0.04])
#HAnimSite visualization shape
TouchSensor1253 = TouchSensor()
TouchSensor1253.setDescription("HAnimSite r_clavicale")

HAnimSite1252.addChildren(TouchSensor1253)
Shape1254 = Shape()
Shape1254.setUSE("HAnimSiteShape")

HAnimSite1252.addChildren(Shape1254)

HAnimSegment1228.addChildren(HAnimSite1252)
HAnimSite1255 = HAnimSite()
HAnimSite1255.setName("r_acromion_pt")
HAnimSite1255.setDEF("hanim_r_acromion_pt")
HAnimSite1255.setTranslation([-0.1905,1.4791,-0.0431])
#HAnimSite visualization shape
TouchSensor1256 = TouchSensor()
TouchSensor1256.setDescription("HAnimSite r_acromion")

HAnimSite1255.addChildren(TouchSensor1256)
Shape1257 = Shape()
Shape1257.setUSE("HAnimSiteShape")

HAnimSite1255.addChildren(Shape1257)

HAnimSegment1228.addChildren(HAnimSite1255)
HAnimSite1258 = HAnimSite()
HAnimSite1258.setName("r_axilla_ant_pt")
HAnimSite1258.setDEF("hanim_r_axilla_ant_pt")
HAnimSite1258.setTranslation([-0.1626,1.4072,-0.0031])
#HAnimSite visualization shape
TouchSensor1259 = TouchSensor()
TouchSensor1259.setDescription("HAnimSite r_axilla_ant")

HAnimSite1258.addChildren(TouchSensor1259)
Shape1260 = Shape()
Shape1260.setUSE("HAnimSiteShape")

HAnimSite1258.addChildren(Shape1260)

HAnimSegment1228.addChildren(HAnimSite1258)
HAnimSite1261 = HAnimSite()
HAnimSite1261.setName("r_axilla_post_pt")
HAnimSite1261.setDEF("hanim_r_axilla_post_pt")
HAnimSite1261.setTranslation([-0.1603,1.4098,-0.0826])
#HAnimSite visualization shape
TouchSensor1262 = TouchSensor()
TouchSensor1262.setDescription("HAnimSite r_axilla_post")

HAnimSite1261.addChildren(TouchSensor1262)
Shape1263 = Shape()
Shape1263.setUSE("HAnimSiteShape")

HAnimSite1261.addChildren(Shape1263)

HAnimSegment1228.addChildren(HAnimSite1261)

HAnimJoint1227.addChildren(HAnimSegment1228)
HAnimJoint1264 = HAnimJoint()
HAnimJoint1264.setName("r_acromioclavicular")
HAnimJoint1264.setDEF("hanim_r_acromioclavicular")
HAnimJoint1264.setCenter([-0.0962,1.4269,-0.0424])
HAnimJoint1264.setUlimit([0,0,0])
HAnimJoint1264.setLlimit([0,0,0])
HAnimJoint1264.setStiffness([0,0,0])
HAnimSegment1265 = HAnimSegment()
HAnimSegment1265.setName("r_scapula")
HAnimSegment1265.setDEF("hanim_r_scapula")
#<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
TouchSensor1266 = TouchSensor()
TouchSensor1266.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1265.addChildren(TouchSensor1266)
Transform1267 = Transform()
Transform1267.setTranslation([-0.0962,1.4269,-0.0424])
Shape1268 = Shape()
Shape1268.setUSE("HAnimJointShape")

Transform1267.addChildren(Shape1268)

HAnimSegment1265.addChildren(Transform1267)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape1269 = Shape()
LineSet1270 = LineSet()
LineSet1270.setVertexCount([2])
Coordinate1271 = Coordinate()
Coordinate1271.setPoint([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])

LineSet1270.setCoord(Coordinate1271)
ColorRGBA1272 = ColorRGBA()
ColorRGBA1272.setUSE("HAnimSegmentLineColorRGBA")

LineSet1270.setColor(ColorRGBA1272)

Shape1269.setGeometry(LineSet1270)

HAnimSegment1265.addChildren(Shape1269)

HAnimJoint1264.addChildren(HAnimSegment1265)
HAnimJoint1273 = HAnimJoint()
HAnimJoint1273.setName("r_shoulder")
HAnimJoint1273.setDEF("hanim_r_shoulder")
HAnimJoint1273.setCenter([-0.2029,1.4376,-0.0387])
HAnimJoint1273.setUlimit([0,0,0])
HAnimJoint1273.setLlimit([0,0,0])
HAnimJoint1273.setStiffness([0,0,0])
HAnimSegment1274 = HAnimSegment()
HAnimSegment1274.setName("r_upperarm")
HAnimSegment1274.setDEF("hanim_r_upperarm")
#<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
TouchSensor1275 = TouchSensor()
TouchSensor1275.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1274.addChildren(TouchSensor1275)
Transform1276 = Transform()
Transform1276.setTranslation([-0.2029,1.4376,-0.0387])
Shape1277 = Shape()
Shape1277.setUSE("HAnimJointShape")

Transform1276.addChildren(Shape1277)

HAnimSegment1274.addChildren(Transform1276)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape1278 = Shape()
LineSet1279 = LineSet()
LineSet1279.setVertexCount([2])
Coordinate1280 = Coordinate()
Coordinate1280.setPoint([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])

LineSet1279.setCoord(Coordinate1280)
ColorRGBA1281 = ColorRGBA()
ColorRGBA1281.setUSE("HAnimSegmentLineColorRGBA")

LineSet1279.setColor(ColorRGBA1281)

Shape1278.setGeometry(LineSet1279)

HAnimSegment1274.addChildren(Shape1278)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape1282 = Shape()
LineSet1283 = LineSet()
LineSet1283.setVertexCount([2])
Coordinate1284 = Coordinate()
Coordinate1284.setPoint([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])

LineSet1283.setCoord(Coordinate1284)
ColorRGBA1285 = ColorRGBA()
ColorRGBA1285.setUSE("HAnimSiteLineColorRGBA")

LineSet1283.setColor(ColorRGBA1285)

Shape1282.setGeometry(LineSet1283)

HAnimSegment1274.addChildren(Shape1282)
HAnimSite1286 = HAnimSite()
HAnimSite1286.setName("r_humeral_lateral_epicn_pt")
HAnimSite1286.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite1286.setTranslation([-0.2224,1.1517,-0.1033])
#HAnimSite visualization shape
TouchSensor1287 = TouchSensor()
TouchSensor1287.setDescription("HAnimSite r_humeral_lateral_epicn")

HAnimSite1286.addChildren(TouchSensor1287)
Shape1288 = Shape()
Shape1288.setUSE("HAnimSiteShape")

HAnimSite1286.addChildren(Shape1288)

HAnimSegment1274.addChildren(HAnimSite1286)

HAnimJoint1273.addChildren(HAnimSegment1274)
HAnimJoint1289 = HAnimJoint()
HAnimJoint1289.setName("r_elbow")
HAnimJoint1289.setDEF("hanim_r_elbow")
HAnimJoint1289.setCenter([-0.2014,1.1357,-0.0682])
HAnimJoint1289.setUlimit([0,0,0])
HAnimJoint1289.setLlimit([0,0,0])
HAnimJoint1289.setStiffness([0,0,0])
HAnimSegment1290 = HAnimSegment()
HAnimSegment1290.setName("r_forearm")
HAnimSegment1290.setDEF("hanim_r_forearm")
#<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
TouchSensor1291 = TouchSensor()
TouchSensor1291.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1290.addChildren(TouchSensor1291)
Transform1292 = Transform()
Transform1292.setTranslation([-0.2014,1.1357,-0.0682])
Shape1293 = Shape()
Shape1293.setUSE("HAnimJointShape")

Transform1292.addChildren(Shape1293)

HAnimSegment1290.addChildren(Transform1292)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape1294 = Shape()
LineSet1295 = LineSet()
LineSet1295.setVertexCount([2])
Coordinate1296 = Coordinate()
Coordinate1296.setPoint([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])

LineSet1295.setCoord(Coordinate1296)
ColorRGBA1297 = ColorRGBA()
ColorRGBA1297.setUSE("HAnimSegmentLineColorRGBA")

LineSet1295.setColor(ColorRGBA1297)

Shape1294.setGeometry(LineSet1295)

HAnimSegment1290.addChildren(Shape1294)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape1298 = Shape()
LineSet1299 = LineSet()
LineSet1299.setVertexCount([2])
Coordinate1300 = Coordinate()
Coordinate1300.setPoint([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])

LineSet1299.setCoord(Coordinate1300)
ColorRGBA1301 = ColorRGBA()
ColorRGBA1301.setUSE("HAnimSiteLineColorRGBA")

LineSet1299.setColor(ColorRGBA1301)

Shape1298.setGeometry(LineSet1299)

HAnimSegment1290.addChildren(Shape1298)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape1302 = Shape()
LineSet1303 = LineSet()
LineSet1303.setVertexCount([2])
Coordinate1304 = Coordinate()
Coordinate1304.setPoint([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])

LineSet1303.setCoord(Coordinate1304)
ColorRGBA1305 = ColorRGBA()
ColorRGBA1305.setUSE("HAnimSiteLineColorRGBA")

LineSet1303.setColor(ColorRGBA1305)

Shape1302.setGeometry(LineSet1303)

HAnimSegment1290.addChildren(Shape1302)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape1306 = Shape()
LineSet1307 = LineSet()
LineSet1307.setVertexCount([2])
Coordinate1308 = Coordinate()
Coordinate1308.setPoint([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])

LineSet1307.setCoord(Coordinate1308)
ColorRGBA1309 = ColorRGBA()
ColorRGBA1309.setUSE("HAnimSiteLineColorRGBA")

LineSet1307.setColor(ColorRGBA1309)

Shape1306.setGeometry(LineSet1307)

HAnimSegment1290.addChildren(Shape1306)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape1310 = Shape()
LineSet1311 = LineSet()
LineSet1311.setVertexCount([2])
Coordinate1312 = Coordinate()
Coordinate1312.setPoint([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])

LineSet1311.setCoord(Coordinate1312)
ColorRGBA1313 = ColorRGBA()
ColorRGBA1313.setUSE("HAnimSiteLineColorRGBA")

LineSet1311.setColor(ColorRGBA1313)

Shape1310.setGeometry(LineSet1311)

HAnimSegment1290.addChildren(Shape1310)
HAnimSite1314 = HAnimSite()
HAnimSite1314.setName("r_radial_styloid_pt")
HAnimSite1314.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1314.setTranslation([-0.1884,0.8676,-0.036])
#HAnimSite visualization shape
TouchSensor1315 = TouchSensor()
TouchSensor1315.setDescription("HAnimSite r_radial_styloid")

HAnimSite1314.addChildren(TouchSensor1315)
Shape1316 = Shape()
Shape1316.setUSE("HAnimSiteShape")

HAnimSite1314.addChildren(Shape1316)

HAnimSegment1290.addChildren(HAnimSite1314)
HAnimSite1317 = HAnimSite()
HAnimSite1317.setName("r_olecranon_pt")
HAnimSite1317.setDEF("hanim_r_olecranon_pt")
HAnimSite1317.setTranslation([-0.1907,1.1405,-0.1065])
#HAnimSite visualization shape
TouchSensor1318 = TouchSensor()
TouchSensor1318.setDescription("HAnimSite r_olecranon")

HAnimSite1317.addChildren(TouchSensor1318)
Shape1319 = Shape()
Shape1319.setUSE("HAnimSiteShape")

HAnimSite1317.addChildren(Shape1319)

HAnimSegment1290.addChildren(HAnimSite1317)
HAnimSite1320 = HAnimSite()
HAnimSite1320.setName("r_humeral_medial_epicn_pt")
HAnimSite1320.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite1320.setTranslation([-0.168,1.1298,-0.1062])
#HAnimSite visualization shape
TouchSensor1321 = TouchSensor()
TouchSensor1321.setDescription("HAnimSite r_humeral_medial_epicn")

HAnimSite1320.addChildren(TouchSensor1321)
Shape1322 = Shape()
Shape1322.setUSE("HAnimSiteShape")

HAnimSite1320.addChildren(Shape1322)

HAnimSegment1290.addChildren(HAnimSite1320)
HAnimSite1323 = HAnimSite()
HAnimSite1323.setName("r_radiale_pt")
HAnimSite1323.setDEF("hanim_r_radiale_pt")
HAnimSite1323.setTranslation([-0.213,1.1305,-0.1091])
#HAnimSite visualization shape
TouchSensor1324 = TouchSensor()
TouchSensor1324.setDescription("HAnimSite r_radiale")

HAnimSite1323.addChildren(TouchSensor1324)
Shape1325 = Shape()
Shape1325.setUSE("HAnimSiteShape")

HAnimSite1323.addChildren(Shape1325)

HAnimSegment1290.addChildren(HAnimSite1323)

HAnimJoint1289.addChildren(HAnimSegment1290)
HAnimJoint1326 = HAnimJoint()
HAnimJoint1326.setName("r_wrist")
HAnimJoint1326.setDEF("hanim_r_wrist")
HAnimJoint1326.setCenter([-0.1984,0.8663,-0.0583])
HAnimJoint1326.setUlimit([0,0,0])
HAnimJoint1326.setLlimit([0,0,0])
HAnimJoint1326.setStiffness([0,0,0])
HAnimSegment1327 = HAnimSegment()
HAnimSegment1327.setName("r_hand")
HAnimSegment1327.setDEF("hanim_r_hand")
#<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
TouchSensor1328 = TouchSensor()
TouchSensor1328.setDescription("HAnimJoint r_wrist, HAnimSegment r_hand")

HAnimSegment1327.addChildren(TouchSensor1328)
Transform1329 = Transform()
Transform1329.setTranslation([-0.1984,0.8663,-0.0583])
Shape1330 = Shape()
Shape1330.setUSE("HAnimJointShape")

Transform1329.addChildren(Shape1330)

HAnimSegment1327.addChildren(Transform1329)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape1331 = Shape()
LineSet1332 = LineSet()
LineSet1332.setVertexCount([2])
Coordinate1333 = Coordinate()
Coordinate1333.setPoint([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])

LineSet1332.setCoord(Coordinate1333)
ColorRGBA1334 = ColorRGBA()
ColorRGBA1334.setUSE("HAnimSegmentLineColorRGBA")

LineSet1332.setColor(ColorRGBA1334)

Shape1331.setGeometry(LineSet1332)

HAnimSegment1327.addChildren(Shape1331)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape1335 = Shape()
LineSet1336 = LineSet()
LineSet1336.setVertexCount([2])
Coordinate1337 = Coordinate()
Coordinate1337.setPoint([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])

LineSet1336.setCoord(Coordinate1337)
ColorRGBA1338 = ColorRGBA()
ColorRGBA1338.setUSE("HAnimSegmentLineColorRGBA")

LineSet1336.setColor(ColorRGBA1338)

Shape1335.setGeometry(LineSet1336)

HAnimSegment1327.addChildren(Shape1335)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape1339 = Shape()
LineSet1340 = LineSet()
LineSet1340.setVertexCount([2])
Coordinate1341 = Coordinate()
Coordinate1341.setPoint([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])

LineSet1340.setCoord(Coordinate1341)
ColorRGBA1342 = ColorRGBA()
ColorRGBA1342.setUSE("HAnimSegmentLineColorRGBA")

LineSet1340.setColor(ColorRGBA1342)

Shape1339.setGeometry(LineSet1340)

HAnimSegment1327.addChildren(Shape1339)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape1343 = Shape()
LineSet1344 = LineSet()
LineSet1344.setVertexCount([2])
Coordinate1345 = Coordinate()
Coordinate1345.setPoint([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])

LineSet1344.setCoord(Coordinate1345)
ColorRGBA1346 = ColorRGBA()
ColorRGBA1346.setUSE("HAnimSegmentLineColorRGBA")

LineSet1344.setColor(ColorRGBA1346)

Shape1343.setGeometry(LineSet1344)

HAnimSegment1327.addChildren(Shape1343)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape1347 = Shape()
LineSet1348 = LineSet()
LineSet1348.setVertexCount([2])
Coordinate1349 = Coordinate()
Coordinate1349.setPoint([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])

LineSet1348.setCoord(Coordinate1349)
ColorRGBA1350 = ColorRGBA()
ColorRGBA1350.setUSE("HAnimSegmentLineColorRGBA")

LineSet1348.setColor(ColorRGBA1350)

Shape1347.setGeometry(LineSet1348)

HAnimSegment1327.addChildren(Shape1347)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape1351 = Shape()
LineSet1352 = LineSet()
LineSet1352.setVertexCount([2])
Coordinate1353 = Coordinate()
Coordinate1353.setPoint([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])

LineSet1352.setCoord(Coordinate1353)
ColorRGBA1354 = ColorRGBA()
ColorRGBA1354.setUSE("HAnimSiteLineColorRGBA")

LineSet1352.setColor(ColorRGBA1354)

Shape1351.setGeometry(LineSet1352)

HAnimSegment1327.addChildren(Shape1351)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape1355 = Shape()
LineSet1356 = LineSet()
LineSet1356.setVertexCount([2])
Coordinate1357 = Coordinate()
Coordinate1357.setPoint([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])

LineSet1356.setCoord(Coordinate1357)
ColorRGBA1358 = ColorRGBA()
ColorRGBA1358.setUSE("HAnimSiteLineColorRGBA")

LineSet1356.setColor(ColorRGBA1358)

Shape1355.setGeometry(LineSet1356)

HAnimSegment1327.addChildren(Shape1355)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape1359 = Shape()
LineSet1360 = LineSet()
LineSet1360.setVertexCount([2])
Coordinate1361 = Coordinate()
Coordinate1361.setPoint([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])

LineSet1360.setCoord(Coordinate1361)
ColorRGBA1362 = ColorRGBA()
ColorRGBA1362.setUSE("HAnimSiteLineColorRGBA")

LineSet1360.setColor(ColorRGBA1362)

Shape1359.setGeometry(LineSet1360)

HAnimSegment1327.addChildren(Shape1359)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape1363 = Shape()
LineSet1364 = LineSet()
LineSet1364.setVertexCount([2])
Coordinate1365 = Coordinate()
Coordinate1365.setPoint([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])

LineSet1364.setCoord(Coordinate1365)
ColorRGBA1366 = ColorRGBA()
ColorRGBA1366.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1364.setColor(ColorRGBA1366)

Shape1363.setGeometry(LineSet1364)

HAnimSegment1327.addChildren(Shape1363)
HAnimSite1367 = HAnimSite()
HAnimSite1367.setName("r_metacarpal_pha2_pt")
HAnimSite1367.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite1367.setTranslation([-0.1977,0.8169,-0.0177])
#HAnimSite visualization shape
TouchSensor1368 = TouchSensor()
TouchSensor1368.setDescription("HAnimSite r_metacarpal_pha2")

HAnimSite1367.addChildren(TouchSensor1368)
Shape1369 = Shape()
Shape1369.setUSE("HAnimSiteShape")

HAnimSite1367.addChildren(Shape1369)

HAnimSegment1327.addChildren(HAnimSite1367)
HAnimSite1370 = HAnimSite()
HAnimSite1370.setName("r_ulnar_styloid_pt")
HAnimSite1370.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1370.setTranslation([-0.2117,0.8562,-0.0584])
#HAnimSite visualization shape
TouchSensor1371 = TouchSensor()
TouchSensor1371.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite1370.addChildren(TouchSensor1371)
Shape1372 = Shape()
Shape1372.setUSE("HAnimSiteShape")

HAnimSite1370.addChildren(Shape1372)

HAnimSegment1327.addChildren(HAnimSite1370)
HAnimSite1373 = HAnimSite()
HAnimSite1373.setName("r_metacarpal_pha5_pt")
HAnimSite1373.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite1373.setTranslation([-0.1929,0.789,-0.1064])
#HAnimSite visualization shape
TouchSensor1374 = TouchSensor()
TouchSensor1374.setDescription("HAnimSite r_metacarpal_pha5")

HAnimSite1373.addChildren(TouchSensor1374)
Shape1375 = Shape()
Shape1375.setUSE("HAnimSiteShape")

HAnimSite1373.addChildren(Shape1375)

HAnimSegment1327.addChildren(HAnimSite1373)
HAnimSite1376 = HAnimSite()
HAnimSite1376.setName("r_hand_front_view")
HAnimSite1376.setDEF("hanim_r_hand_front_view")
HAnimSite1376.setTranslation([-0.3,0.75,0.45])
Viewpoint1377 = Viewpoint()
Viewpoint1377.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1377.setCenterOfRotation([0,0.7,0])
Viewpoint1377.setDescription("right hand front")
Viewpoint1377.setPosition([0,0,0])

HAnimSite1376.addChildren(Viewpoint1377)
#HAnimSite/Viewpoint visualization shape
Anchor1378 = Anchor()
Anchor1378.setDescription("HAnimSite Viewpoint hanim_r_hand_front_view")
Anchor1378.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1379 = LOD()
LOD1379.setForceTransitions(True)
LOD1379.setRange([0.04])
WorldInfo1380 = WorldInfo()
WorldInfo1380.setInfo(["hide diamond when close"])

LOD1379.addChildren(WorldInfo1380)
Shape1381 = Shape()
Shape1381.setUSE("HAnimSiteViewpointShape")

LOD1379.addChildren(Shape1381)

Anchor1378.addChildren(LOD1379)

HAnimSite1376.addChildren(Anchor1378)

HAnimSegment1327.addChildren(HAnimSite1376)

HAnimJoint1326.addChildren(HAnimSegment1327)
HAnimJoint1382 = HAnimJoint()
HAnimJoint1382.setName("r_thumb1")
HAnimJoint1382.setDEF("hanim_r_thumb1")
HAnimJoint1382.setCenter([-0.1924,0.8472,-0.0534])
HAnimJoint1382.setUlimit([0,0,0])
HAnimJoint1382.setLlimit([0,0,0])
HAnimJoint1382.setStiffness([0,0,0])
HAnimSegment1383 = HAnimSegment()
HAnimSegment1383.setName("r_thumb_metacarpal")
HAnimSegment1383.setDEF("hanim_r_thumb_metacarpal")
#<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor1384 = TouchSensor()
TouchSensor1384.setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")

HAnimSegment1383.addChildren(TouchSensor1384)
Transform1385 = Transform()
Transform1385.setTranslation([-0.1924,0.8472,-0.0534])
Shape1386 = Shape()
Shape1386.setUSE("HAnimJointShape")

Transform1385.addChildren(Shape1386)

HAnimSegment1383.addChildren(Transform1385)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape1387 = Shape()
LineSet1388 = LineSet()
LineSet1388.setVertexCount([2])
Coordinate1389 = Coordinate()
Coordinate1389.setPoint([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])

LineSet1388.setCoord(Coordinate1389)
ColorRGBA1390 = ColorRGBA()
ColorRGBA1390.setUSE("HAnimSegmentLineColorRGBA")

LineSet1388.setColor(ColorRGBA1390)

Shape1387.setGeometry(LineSet1388)

HAnimSegment1383.addChildren(Shape1387)

HAnimJoint1382.addChildren(HAnimSegment1383)
HAnimJoint1391 = HAnimJoint()
HAnimJoint1391.setName("r_thumb2")
HAnimJoint1391.setDEF("hanim_r_thumb2")
HAnimJoint1391.setCenter([-0.1951,0.8226,0.0246])
HAnimJoint1391.setUlimit([0,0,0])
HAnimJoint1391.setLlimit([0,0,0])
HAnimJoint1391.setStiffness([0,0,0])
HAnimSegment1392 = HAnimSegment()
HAnimSegment1392.setName("r_thumb_proximal")
HAnimSegment1392.setDEF("hanim_r_thumb_proximal")
#<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor1393 = TouchSensor()
TouchSensor1393.setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")

HAnimSegment1392.addChildren(TouchSensor1393)
Transform1394 = Transform()
Transform1394.setTranslation([-0.1951,0.8226,0.0246])
Shape1395 = Shape()
Shape1395.setUSE("HAnimJointShape")

Transform1394.addChildren(Shape1395)

HAnimSegment1392.addChildren(Transform1394)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape1396 = Shape()
LineSet1397 = LineSet()
LineSet1397.setVertexCount([2])
Coordinate1398 = Coordinate()
Coordinate1398.setPoint([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])

LineSet1397.setCoord(Coordinate1398)
ColorRGBA1399 = ColorRGBA()
ColorRGBA1399.setUSE("HAnimSegmentLineColorRGBA")

LineSet1397.setColor(ColorRGBA1399)

Shape1396.setGeometry(LineSet1397)

HAnimSegment1392.addChildren(Shape1396)

HAnimJoint1391.addChildren(HAnimSegment1392)
HAnimJoint1400 = HAnimJoint()
HAnimJoint1400.setName("r_thumb3")
HAnimJoint1400.setDEF("hanim_r_thumb3")
HAnimJoint1400.setCenter([-0.1955,0.8159,0.0464])
HAnimJoint1400.setUlimit([0,0,0])
HAnimJoint1400.setLlimit([0,0,0])
HAnimJoint1400.setStiffness([0,0,0])
HAnimSegment1401 = HAnimSegment()
HAnimSegment1401.setName("r_thumb_distal")
HAnimSegment1401.setDEF("hanim_r_thumb_distal")
#<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
TouchSensor1402 = TouchSensor()
TouchSensor1402.setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")

HAnimSegment1401.addChildren(TouchSensor1402)
Transform1403 = Transform()
Transform1403.setTranslation([-0.1955,0.8159,0.0464])
Shape1404 = Shape()
Shape1404.setUSE("HAnimJointShape")

Transform1403.addChildren(Shape1404)

HAnimSegment1401.addChildren(Transform1403)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape1405 = Shape()
LineSet1406 = LineSet()
LineSet1406.setVertexCount([2])
Coordinate1407 = Coordinate()
Coordinate1407.setPoint([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])

LineSet1406.setCoord(Coordinate1407)
ColorRGBA1408 = ColorRGBA()
ColorRGBA1408.setUSE("HAnimSiteLineColorRGBA")

LineSet1406.setColor(ColorRGBA1408)

Shape1405.setGeometry(LineSet1406)

HAnimSegment1401.addChildren(Shape1405)
HAnimSite1409 = HAnimSite()
HAnimSite1409.setName("r_thumb_distal_tip")
HAnimSite1409.setDEF("hanim_r_thumb_distal_tip")
HAnimSite1409.setTranslation([-0.1869,0.809,0.082])
#HAnimSite visualization shape
TouchSensor1410 = TouchSensor()
TouchSensor1410.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1409.addChildren(TouchSensor1410)
Shape1411 = Shape()
Shape1411.setUSE("HAnimSiteShape")

HAnimSite1409.addChildren(Shape1411)

HAnimSegment1401.addChildren(HAnimSite1409)

HAnimJoint1400.addChildren(HAnimSegment1401)

HAnimJoint1391.addChildren(HAnimJoint1400)

HAnimJoint1382.addChildren(HAnimJoint1391)

HAnimJoint1326.addChildren(HAnimJoint1382)
HAnimJoint1412 = HAnimJoint()
HAnimJoint1412.setName("r_index0")
HAnimJoint1412.setDEF("hanim_r_index0")
HAnimJoint1412.setCenter([-0.1983,0.8024,-0.028])
HAnimJoint1412.setUlimit([0,0,0])
HAnimJoint1412.setLlimit([0,0,0])
HAnimJoint1412.setStiffness([0,0,0])
HAnimSegment1413 = HAnimSegment()
HAnimSegment1413.setName("r_index_metacarpal")
HAnimSegment1413.setDEF("hanim_r_index_metacarpal")
#<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor1414 = TouchSensor()
TouchSensor1414.setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")

HAnimSegment1413.addChildren(TouchSensor1414)
Transform1415 = Transform()
Transform1415.setTranslation([-0.1983,0.8024,-0.028])
Shape1416 = Shape()
Shape1416.setUSE("HAnimJointShape")

Transform1415.addChildren(Shape1416)

HAnimSegment1413.addChildren(Transform1415)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape1417 = Shape()
LineSet1418 = LineSet()
LineSet1418.setVertexCount([2])
Coordinate1419 = Coordinate()
Coordinate1419.setPoint([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])

LineSet1418.setCoord(Coordinate1419)
ColorRGBA1420 = ColorRGBA()
ColorRGBA1420.setUSE("HAnimSegmentLineColorRGBA")

LineSet1418.setColor(ColorRGBA1420)

Shape1417.setGeometry(LineSet1418)

HAnimSegment1413.addChildren(Shape1417)

HAnimJoint1412.addChildren(HAnimSegment1413)
HAnimJoint1421 = HAnimJoint()
HAnimJoint1421.setName("r_index1")
HAnimJoint1421.setDEF("hanim_r_index1")
HAnimJoint1421.setCenter([-0.1983,0.7815,-0.028])
HAnimJoint1421.setUlimit([0,0,0])
HAnimJoint1421.setLlimit([0,0,0])
HAnimJoint1421.setStiffness([0,0,0])
HAnimSegment1422 = HAnimSegment()
HAnimSegment1422.setName("r_index_proximal")
HAnimSegment1422.setDEF("hanim_r_index_proximal")
#<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
TouchSensor1423 = TouchSensor()
TouchSensor1423.setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal")

HAnimSegment1422.addChildren(TouchSensor1423)
Transform1424 = Transform()
Transform1424.setTranslation([-0.1983,0.7815,-0.028])
Shape1425 = Shape()
Shape1425.setUSE("HAnimJointShape")

Transform1424.addChildren(Shape1425)

HAnimSegment1422.addChildren(Transform1424)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape1426 = Shape()
LineSet1427 = LineSet()
LineSet1427.setVertexCount([2])
Coordinate1428 = Coordinate()
Coordinate1428.setPoint([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])

LineSet1427.setCoord(Coordinate1428)
ColorRGBA1429 = ColorRGBA()
ColorRGBA1429.setUSE("HAnimSegmentLineColorRGBA")

LineSet1427.setColor(ColorRGBA1429)

Shape1426.setGeometry(LineSet1427)

HAnimSegment1422.addChildren(Shape1426)

HAnimJoint1421.addChildren(HAnimSegment1422)
HAnimJoint1430 = HAnimJoint()
HAnimJoint1430.setName("r_index2")
HAnimJoint1430.setDEF("hanim_r_index2")
HAnimJoint1430.setCenter([-0.2017,0.7363,-0.0248])
HAnimJoint1430.setUlimit([0,0,0])
HAnimJoint1430.setLlimit([0,0,0])
HAnimJoint1430.setStiffness([0,0,0])
HAnimSegment1431 = HAnimSegment()
HAnimSegment1431.setName("r_index_middle")
HAnimSegment1431.setDEF("hanim_r_index_middle")
#<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
TouchSensor1432 = TouchSensor()
TouchSensor1432.setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle")

HAnimSegment1431.addChildren(TouchSensor1432)
Transform1433 = Transform()
Transform1433.setTranslation([-0.2017,0.7363,-0.0248])
Shape1434 = Shape()
Shape1434.setUSE("HAnimJointShape")

Transform1433.addChildren(Shape1434)

HAnimSegment1431.addChildren(Transform1433)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape1435 = Shape()
LineSet1436 = LineSet()
LineSet1436.setVertexCount([2])
Coordinate1437 = Coordinate()
Coordinate1437.setPoint([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])

LineSet1436.setCoord(Coordinate1437)
ColorRGBA1438 = ColorRGBA()
ColorRGBA1438.setUSE("HAnimSegmentLineColorRGBA")

LineSet1436.setColor(ColorRGBA1438)

Shape1435.setGeometry(LineSet1436)

HAnimSegment1431.addChildren(Shape1435)

HAnimJoint1430.addChildren(HAnimSegment1431)
HAnimJoint1439 = HAnimJoint()
HAnimJoint1439.setName("r_index3")
HAnimJoint1439.setDEF("hanim_r_index3")
HAnimJoint1439.setCenter([-0.2028,0.7139,-0.0236])
HAnimJoint1439.setUlimit([0,0,0])
HAnimJoint1439.setLlimit([0,0,0])
HAnimJoint1439.setStiffness([0,0,0])
HAnimSegment1440 = HAnimSegment()
HAnimSegment1440.setName("r_index_distal")
HAnimSegment1440.setDEF("hanim_r_index_distal")
#<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
TouchSensor1441 = TouchSensor()
TouchSensor1441.setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal")

HAnimSegment1440.addChildren(TouchSensor1441)
Transform1442 = Transform()
Transform1442.setTranslation([-0.2028,0.7139,-0.0236])
Shape1443 = Shape()
Shape1443.setUSE("HAnimJointShape")

Transform1442.addChildren(Shape1443)

HAnimSegment1440.addChildren(Transform1442)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape1444 = Shape()
LineSet1445 = LineSet()
LineSet1445.setVertexCount([2])
Coordinate1446 = Coordinate()
Coordinate1446.setPoint([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])

LineSet1445.setCoord(Coordinate1446)
ColorRGBA1447 = ColorRGBA()
ColorRGBA1447.setUSE("HAnimSiteLineColorRGBA")

LineSet1445.setColor(ColorRGBA1447)

Shape1444.setGeometry(LineSet1445)

HAnimSegment1440.addChildren(Shape1444)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape1448 = Shape()
LineSet1449 = LineSet()
LineSet1449.setVertexCount([2])
Coordinate1450 = Coordinate()
Coordinate1450.setPoint([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])

LineSet1449.setCoord(Coordinate1450)
ColorRGBA1451 = ColorRGBA()
ColorRGBA1451.setUSE("HAnimSiteLineColorRGBA")

LineSet1449.setColor(ColorRGBA1451)

Shape1448.setGeometry(LineSet1449)

HAnimSegment1440.addChildren(Shape1448)
HAnimSite1452 = HAnimSite()
HAnimSite1452.setName("r_index_distal_tip")
HAnimSite1452.setDEF("hanim_r_index_distal_tip")
HAnimSite1452.setTranslation([-0.198,0.6883,-0.018])
#HAnimSite visualization shape
TouchSensor1453 = TouchSensor()
TouchSensor1453.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1452.addChildren(TouchSensor1453)
Shape1454 = Shape()
Shape1454.setUSE("HAnimSiteShape")

HAnimSite1452.addChildren(Shape1454)

HAnimSegment1440.addChildren(HAnimSite1452)
HAnimSite1455 = HAnimSite()
HAnimSite1455.setName("r_dactylion_pt")
HAnimSite1455.setDEF("hanim_r_dactylion_pt")
HAnimSite1455.setTranslation([-0.1941,0.6772,-0.0423])
#HAnimSite visualization shape
TouchSensor1456 = TouchSensor()
TouchSensor1456.setDescription("HAnimSite r_dactylion")

HAnimSite1455.addChildren(TouchSensor1456)
Shape1457 = Shape()
Shape1457.setUSE("HAnimSiteShape")

HAnimSite1455.addChildren(Shape1457)

HAnimSegment1440.addChildren(HAnimSite1455)

HAnimJoint1439.addChildren(HAnimSegment1440)

HAnimJoint1430.addChildren(HAnimJoint1439)

HAnimJoint1421.addChildren(HAnimJoint1430)

HAnimJoint1412.addChildren(HAnimJoint1421)

HAnimJoint1326.addChildren(HAnimJoint1412)
HAnimJoint1458 = HAnimJoint()
HAnimJoint1458.setName("r_middle0")
HAnimJoint1458.setDEF("hanim_r_middle0")
HAnimJoint1458.setCenter([-0.1987,0.8029,-0.053])
HAnimJoint1458.setUlimit([0,0,0])
HAnimJoint1458.setLlimit([0,0,0])
HAnimJoint1458.setStiffness([0,0,0])
HAnimSegment1459 = HAnimSegment()
HAnimSegment1459.setName("r_middle_metacarpal")
HAnimSegment1459.setDEF("hanim_r_middle_metacarpal")
#<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor1460 = TouchSensor()
TouchSensor1460.setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")

HAnimSegment1459.addChildren(TouchSensor1460)
Transform1461 = Transform()
Transform1461.setTranslation([-0.1987,0.8029,-0.053])
Shape1462 = Shape()
Shape1462.setUSE("HAnimJointShape")

Transform1461.addChildren(Shape1462)

HAnimSegment1459.addChildren(Transform1461)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape1463 = Shape()
LineSet1464 = LineSet()
LineSet1464.setVertexCount([2])
Coordinate1465 = Coordinate()
Coordinate1465.setPoint([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])

LineSet1464.setCoord(Coordinate1465)
ColorRGBA1466 = ColorRGBA()
ColorRGBA1466.setUSE("HAnimSegmentLineColorRGBA")

LineSet1464.setColor(ColorRGBA1466)

Shape1463.setGeometry(LineSet1464)

HAnimSegment1459.addChildren(Shape1463)

HAnimJoint1458.addChildren(HAnimSegment1459)
HAnimJoint1467 = HAnimJoint()
HAnimJoint1467.setName("r_middle1")
HAnimJoint1467.setDEF("hanim_r_middle1")
HAnimJoint1467.setCenter([-0.1987,0.7818,-0.053])
HAnimJoint1467.setUlimit([0,0,0])
HAnimJoint1467.setLlimit([0,0,0])
HAnimJoint1467.setStiffness([0,0,0])
HAnimSegment1468 = HAnimSegment()
HAnimSegment1468.setName("r_middle_proximal")
HAnimSegment1468.setDEF("hanim_r_middle_proximal")
#<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
TouchSensor1469 = TouchSensor()
TouchSensor1469.setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")

HAnimSegment1468.addChildren(TouchSensor1469)
Transform1470 = Transform()
Transform1470.setTranslation([-0.1987,0.7818,-0.053])
Shape1471 = Shape()
Shape1471.setUSE("HAnimJointShape")

Transform1470.addChildren(Shape1471)

HAnimSegment1468.addChildren(Transform1470)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape1472 = Shape()
LineSet1473 = LineSet()
LineSet1473.setVertexCount([2])
Coordinate1474 = Coordinate()
Coordinate1474.setPoint([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])

LineSet1473.setCoord(Coordinate1474)
ColorRGBA1475 = ColorRGBA()
ColorRGBA1475.setUSE("HAnimSegmentLineColorRGBA")

LineSet1473.setColor(ColorRGBA1475)

Shape1472.setGeometry(LineSet1473)

HAnimSegment1468.addChildren(Shape1472)

HAnimJoint1467.addChildren(HAnimSegment1468)
HAnimJoint1476 = HAnimJoint()
HAnimJoint1476.setName("r_middle2")
HAnimJoint1476.setDEF("hanim_r_middle2")
HAnimJoint1476.setCenter([-0.2013,0.7273,-0.0503])
HAnimJoint1476.setUlimit([0,0,0])
HAnimJoint1476.setLlimit([0,0,0])
HAnimJoint1476.setStiffness([0,0,0])
HAnimSegment1477 = HAnimSegment()
HAnimSegment1477.setName("r_middle_middle")
HAnimSegment1477.setDEF("hanim_r_middle_middle")
#<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
TouchSensor1478 = TouchSensor()
TouchSensor1478.setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle")

HAnimSegment1477.addChildren(TouchSensor1478)
Transform1479 = Transform()
Transform1479.setTranslation([-0.2013,0.7273,-0.0503])
Shape1480 = Shape()
Shape1480.setUSE("HAnimJointShape")

Transform1479.addChildren(Shape1480)

HAnimSegment1477.addChildren(Transform1479)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape1481 = Shape()
LineSet1482 = LineSet()
LineSet1482.setVertexCount([2])
Coordinate1483 = Coordinate()
Coordinate1483.setPoint([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])

LineSet1482.setCoord(Coordinate1483)
ColorRGBA1484 = ColorRGBA()
ColorRGBA1484.setUSE("HAnimSegmentLineColorRGBA")

LineSet1482.setColor(ColorRGBA1484)

Shape1481.setGeometry(LineSet1482)

HAnimSegment1477.addChildren(Shape1481)

HAnimJoint1476.addChildren(HAnimSegment1477)
HAnimJoint1485 = HAnimJoint()
HAnimJoint1485.setName("r_middle3")
HAnimJoint1485.setDEF("hanim_r_middle3")
HAnimJoint1485.setCenter([-0.2026,0.7011,-0.0494])
HAnimJoint1485.setUlimit([0,0,0])
HAnimJoint1485.setLlimit([0,0,0])
HAnimJoint1485.setStiffness([0,0,0])
HAnimSegment1486 = HAnimSegment()
HAnimSegment1486.setName("r_middle_distal")
HAnimSegment1486.setDEF("hanim_r_middle_distal")
#<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
TouchSensor1487 = TouchSensor()
TouchSensor1487.setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal")

HAnimSegment1486.addChildren(TouchSensor1487)
Transform1488 = Transform()
Transform1488.setTranslation([-0.2026,0.7011,-0.0494])
Shape1489 = Shape()
Shape1489.setUSE("HAnimJointShape")

Transform1488.addChildren(Shape1489)

HAnimSegment1486.addChildren(Transform1488)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape1490 = Shape()
LineSet1491 = LineSet()
LineSet1491.setVertexCount([2])
Coordinate1492 = Coordinate()
Coordinate1492.setPoint([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])

LineSet1491.setCoord(Coordinate1492)
ColorRGBA1493 = ColorRGBA()
ColorRGBA1493.setUSE("HAnimSiteLineColorRGBA")

LineSet1491.setColor(ColorRGBA1493)

Shape1490.setGeometry(LineSet1491)

HAnimSegment1486.addChildren(Shape1490)
HAnimSite1494 = HAnimSite()
HAnimSite1494.setName("r_middle_distal_tip")
HAnimSite1494.setDEF("hanim_r_middle_distal_tip")
HAnimSite1494.setTranslation([-0.1969,0.6758,-0.0427])
#HAnimSite visualization shape
TouchSensor1495 = TouchSensor()
TouchSensor1495.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1494.addChildren(TouchSensor1495)
Shape1496 = Shape()
Shape1496.setUSE("HAnimSiteShape")

HAnimSite1494.addChildren(Shape1496)

HAnimSegment1486.addChildren(HAnimSite1494)

HAnimJoint1485.addChildren(HAnimSegment1486)

HAnimJoint1476.addChildren(HAnimJoint1485)

HAnimJoint1467.addChildren(HAnimJoint1476)

HAnimJoint1458.addChildren(HAnimJoint1467)

HAnimJoint1326.addChildren(HAnimJoint1458)
HAnimJoint1497 = HAnimJoint()
HAnimJoint1497.setName("r_ring0")
HAnimJoint1497.setDEF("hanim_r_ring0")
HAnimJoint1497.setCenter([-0.1956,0.8019,-0.0794])
HAnimJoint1497.setUlimit([0,0,0])
HAnimJoint1497.setLlimit([0,0,0])
HAnimJoint1497.setStiffness([0,0,0])
HAnimSegment1498 = HAnimSegment()
HAnimSegment1498.setName("r_ring_metacarpal")
HAnimSegment1498.setDEF("hanim_r_ring_metacarpal")
#<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor1499 = TouchSensor()
TouchSensor1499.setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")

HAnimSegment1498.addChildren(TouchSensor1499)
Transform1500 = Transform()
Transform1500.setTranslation([-0.1956,0.8019,-0.0794])
Shape1501 = Shape()
Shape1501.setUSE("HAnimJointShape")

Transform1500.addChildren(Shape1501)

HAnimSegment1498.addChildren(Transform1500)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape1502 = Shape()
LineSet1503 = LineSet()
LineSet1503.setVertexCount([2])
Coordinate1504 = Coordinate()
Coordinate1504.setPoint([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])

LineSet1503.setCoord(Coordinate1504)
ColorRGBA1505 = ColorRGBA()
ColorRGBA1505.setUSE("HAnimSegmentLineColorRGBA")

LineSet1503.setColor(ColorRGBA1505)

Shape1502.setGeometry(LineSet1503)

HAnimSegment1498.addChildren(Shape1502)

HAnimJoint1497.addChildren(HAnimSegment1498)
HAnimJoint1506 = HAnimJoint()
HAnimJoint1506.setName("r_ring1")
HAnimJoint1506.setDEF("hanim_r_ring1")
HAnimJoint1506.setCenter([-0.1956,0.7815,-0.0794])
HAnimJoint1506.setUlimit([0,0,0])
HAnimJoint1506.setLlimit([0,0,0])
HAnimJoint1506.setStiffness([0,0,0])
HAnimSegment1507 = HAnimSegment()
HAnimSegment1507.setName("r_ring_proximal")
HAnimSegment1507.setDEF("hanim_r_ring_proximal")
#<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
TouchSensor1508 = TouchSensor()
TouchSensor1508.setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")

HAnimSegment1507.addChildren(TouchSensor1508)
Transform1509 = Transform()
Transform1509.setTranslation([-0.1956,0.7815,-0.0794])
Shape1510 = Shape()
Shape1510.setUSE("HAnimJointShape")

Transform1509.addChildren(Shape1510)

HAnimSegment1507.addChildren(Transform1509)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape1511 = Shape()
LineSet1512 = LineSet()
LineSet1512.setVertexCount([2])
Coordinate1513 = Coordinate()
Coordinate1513.setPoint([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])

LineSet1512.setCoord(Coordinate1513)
ColorRGBA1514 = ColorRGBA()
ColorRGBA1514.setUSE("HAnimSegmentLineColorRGBA")

LineSet1512.setColor(ColorRGBA1514)

Shape1511.setGeometry(LineSet1512)

HAnimSegment1507.addChildren(Shape1511)

HAnimJoint1506.addChildren(HAnimSegment1507)
HAnimJoint1515 = HAnimJoint()
HAnimJoint1515.setName("r_ring2")
HAnimJoint1515.setDEF("hanim_r_ring2")
HAnimJoint1515.setCenter([-0.1973,0.7287,-0.0777])
HAnimJoint1515.setUlimit([0,0,0])
HAnimJoint1515.setLlimit([0,0,0])
HAnimJoint1515.setStiffness([0,0,0])
HAnimSegment1516 = HAnimSegment()
HAnimSegment1516.setName("r_ring_middle")
HAnimSegment1516.setDEF("hanim_r_ring_middle")
#<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
TouchSensor1517 = TouchSensor()
TouchSensor1517.setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle")

HAnimSegment1516.addChildren(TouchSensor1517)
Transform1518 = Transform()
Transform1518.setTranslation([-0.1973,0.7287,-0.0777])
Shape1519 = Shape()
Shape1519.setUSE("HAnimJointShape")

Transform1518.addChildren(Shape1519)

HAnimSegment1516.addChildren(Transform1518)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape1520 = Shape()
LineSet1521 = LineSet()
LineSet1521.setVertexCount([2])
Coordinate1522 = Coordinate()
Coordinate1522.setPoint([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])

LineSet1521.setCoord(Coordinate1522)
ColorRGBA1523 = ColorRGBA()
ColorRGBA1523.setUSE("HAnimSegmentLineColorRGBA")

LineSet1521.setColor(ColorRGBA1523)

Shape1520.setGeometry(LineSet1521)

HAnimSegment1516.addChildren(Shape1520)

HAnimJoint1515.addChildren(HAnimSegment1516)
HAnimJoint1524 = HAnimJoint()
HAnimJoint1524.setName("r_ring3")
HAnimJoint1524.setDEF("hanim_r_ring3")
HAnimJoint1524.setCenter([-0.1983,0.7045,-0.0767])
HAnimJoint1524.setUlimit([0,0,0])
HAnimJoint1524.setLlimit([0,0,0])
HAnimJoint1524.setStiffness([0,0,0])
HAnimSegment1525 = HAnimSegment()
HAnimSegment1525.setName("r_ring_distal")
HAnimSegment1525.setDEF("hanim_r_ring_distal")
#<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
TouchSensor1526 = TouchSensor()
TouchSensor1526.setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal")

HAnimSegment1525.addChildren(TouchSensor1526)
Transform1527 = Transform()
Transform1527.setTranslation([-0.1983,0.7045,-0.0767])
Shape1528 = Shape()
Shape1528.setUSE("HAnimJointShape")

Transform1527.addChildren(Shape1528)

HAnimSegment1525.addChildren(Transform1527)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape1529 = Shape()
LineSet1530 = LineSet()
LineSet1530.setVertexCount([2])
Coordinate1531 = Coordinate()
Coordinate1531.setPoint([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])

LineSet1530.setCoord(Coordinate1531)
ColorRGBA1532 = ColorRGBA()
ColorRGBA1532.setUSE("HAnimSiteLineColorRGBA")

LineSet1530.setColor(ColorRGBA1532)

Shape1529.setGeometry(LineSet1530)

HAnimSegment1525.addChildren(Shape1529)
HAnimSite1533 = HAnimSite()
HAnimSite1533.setName("r_ring_distal_tip")
HAnimSite1533.setDEF("hanim_r_ring_distal_tip")
HAnimSite1533.setTranslation([-0.1934,0.6778,-0.0693])
#HAnimSite visualization shape
TouchSensor1534 = TouchSensor()
TouchSensor1534.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1533.addChildren(TouchSensor1534)
Shape1535 = Shape()
Shape1535.setUSE("HAnimSiteShape")

HAnimSite1533.addChildren(Shape1535)

HAnimSegment1525.addChildren(HAnimSite1533)

HAnimJoint1524.addChildren(HAnimSegment1525)

HAnimJoint1515.addChildren(HAnimJoint1524)

HAnimJoint1506.addChildren(HAnimJoint1515)

HAnimJoint1497.addChildren(HAnimJoint1506)

HAnimJoint1326.addChildren(HAnimJoint1497)
HAnimJoint1536 = HAnimJoint()
HAnimJoint1536.setName("r_pinky0")
HAnimJoint1536.setDEF("hanim_r_pinky0")
HAnimJoint1536.setCenter([-0.1925,0.8066,-0.1036])
HAnimJoint1536.setUlimit([0,0,0])
HAnimJoint1536.setLlimit([0,0,0])
HAnimJoint1536.setStiffness([0,0,0])
HAnimSegment1537 = HAnimSegment()
HAnimSegment1537.setName("r_pinky_metacarpal")
HAnimSegment1537.setDEF("hanim_r_pinky_metacarpal")
#<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor1538 = TouchSensor()
TouchSensor1538.setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")

HAnimSegment1537.addChildren(TouchSensor1538)
Transform1539 = Transform()
Transform1539.setTranslation([-0.1925,0.8066,-0.1036])
Shape1540 = Shape()
Shape1540.setUSE("HAnimJointShape")

Transform1539.addChildren(Shape1540)

HAnimSegment1537.addChildren(Transform1539)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape1541 = Shape()
LineSet1542 = LineSet()
LineSet1542.setVertexCount([2])
Coordinate1543 = Coordinate()
Coordinate1543.setPoint([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])

LineSet1542.setCoord(Coordinate1543)
ColorRGBA1544 = ColorRGBA()
ColorRGBA1544.setUSE("HAnimSegmentLineColorRGBA")

LineSet1542.setColor(ColorRGBA1544)

Shape1541.setGeometry(LineSet1542)

HAnimSegment1537.addChildren(Shape1541)

HAnimJoint1536.addChildren(HAnimSegment1537)
HAnimJoint1545 = HAnimJoint()
HAnimJoint1545.setName("r_pinky1")
HAnimJoint1545.setDEF("hanim_r_pinky1")
HAnimJoint1545.setCenter([-0.1925,0.7866,-0.1036])
HAnimJoint1545.setUlimit([0,0,0])
HAnimJoint1545.setLlimit([0,0,0])
HAnimJoint1545.setStiffness([0,0,0])
HAnimSegment1546 = HAnimSegment()
HAnimSegment1546.setName("r_pinky_proximal")
HAnimSegment1546.setDEF("hanim_r_pinky_proximal")
#<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor1547 = TouchSensor()
TouchSensor1547.setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")

HAnimSegment1546.addChildren(TouchSensor1547)
Transform1548 = Transform()
Transform1548.setTranslation([-0.1925,0.7866,-0.1036])
Shape1549 = Shape()
Shape1549.setUSE("HAnimJointShape")

Transform1548.addChildren(Shape1549)

HAnimSegment1546.addChildren(Transform1548)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape1550 = Shape()
LineSet1551 = LineSet()
LineSet1551.setVertexCount([2])
Coordinate1552 = Coordinate()
Coordinate1552.setPoint([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])

LineSet1551.setCoord(Coordinate1552)
ColorRGBA1553 = ColorRGBA()
ColorRGBA1553.setUSE("HAnimSegmentLineColorRGBA")

LineSet1551.setColor(ColorRGBA1553)

Shape1550.setGeometry(LineSet1551)

HAnimSegment1546.addChildren(Shape1550)

HAnimJoint1545.addChildren(HAnimSegment1546)
HAnimJoint1554 = HAnimJoint()
HAnimJoint1554.setName("r_pinky2")
HAnimJoint1554.setDEF("hanim_r_pinky2")
HAnimJoint1554.setCenter([-0.1938,0.7452,-0.1024])
HAnimJoint1554.setUlimit([0,0,0])
HAnimJoint1554.setLlimit([0,0,0])
HAnimJoint1554.setStiffness([0,0,0])
HAnimSegment1555 = HAnimSegment()
HAnimSegment1555.setName("r_pinky_middle")
HAnimSegment1555.setDEF("hanim_r_pinky_middle")
#<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
TouchSensor1556 = TouchSensor()
TouchSensor1556.setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")

HAnimSegment1555.addChildren(TouchSensor1556)
Transform1557 = Transform()
Transform1557.setTranslation([-0.1938,0.7452,-0.1024])
Shape1558 = Shape()
Shape1558.setUSE("HAnimJointShape")

Transform1557.addChildren(Shape1558)

HAnimSegment1555.addChildren(Transform1557)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape1559 = Shape()
LineSet1560 = LineSet()
LineSet1560.setVertexCount([2])
Coordinate1561 = Coordinate()
Coordinate1561.setPoint([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])

LineSet1560.setCoord(Coordinate1561)
ColorRGBA1562 = ColorRGBA()
ColorRGBA1562.setUSE("HAnimSegmentLineColorRGBA")

LineSet1560.setColor(ColorRGBA1562)

Shape1559.setGeometry(LineSet1560)

HAnimSegment1555.addChildren(Shape1559)

HAnimJoint1554.addChildren(HAnimSegment1555)
HAnimJoint1563 = HAnimJoint()
HAnimJoint1563.setName("r_pinky3")
HAnimJoint1563.setDEF("hanim_r_pinky3")
HAnimJoint1563.setCenter([-0.1948,0.7277,-0.1017])
HAnimJoint1563.setUlimit([0,0,0])
HAnimJoint1563.setLlimit([0,0,0])
HAnimJoint1563.setStiffness([0,0,0])
HAnimSegment1564 = HAnimSegment()
HAnimSegment1564.setName("r_pinky_distal")
HAnimSegment1564.setDEF("hanim_r_pinky_distal")
#<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
TouchSensor1565 = TouchSensor()
TouchSensor1565.setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")

HAnimSegment1564.addChildren(TouchSensor1565)
Transform1566 = Transform()
Transform1566.setTranslation([-0.1948,0.7277,-0.1017])
Shape1567 = Shape()
Shape1567.setUSE("HAnimJointShape")

Transform1566.addChildren(Shape1567)

HAnimSegment1564.addChildren(Transform1566)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape1568 = Shape()
LineSet1569 = LineSet()
LineSet1569.setVertexCount([2])
Coordinate1570 = Coordinate()
Coordinate1570.setPoint([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])

LineSet1569.setCoord(Coordinate1570)
ColorRGBA1571 = ColorRGBA()
ColorRGBA1571.setUSE("HAnimSiteLineColorRGBA")

LineSet1569.setColor(ColorRGBA1571)

Shape1568.setGeometry(LineSet1569)

HAnimSegment1564.addChildren(Shape1568)
HAnimSite1572 = HAnimSite()
HAnimSite1572.setName("r_pinky_distal_tip")
HAnimSite1572.setDEF("hanim_r_pinky_distal_tip")
HAnimSite1572.setTranslation([-0.1938,0.7035,-0.0949])
#HAnimSite visualization shape
TouchSensor1573 = TouchSensor()
TouchSensor1573.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1572.addChildren(TouchSensor1573)
Shape1574 = Shape()
Shape1574.setUSE("HAnimSiteShape")

HAnimSite1572.addChildren(Shape1574)

HAnimSegment1564.addChildren(HAnimSite1572)

HAnimJoint1563.addChildren(HAnimSegment1564)

HAnimJoint1554.addChildren(HAnimJoint1563)

HAnimJoint1545.addChildren(HAnimJoint1554)

HAnimJoint1536.addChildren(HAnimJoint1545)

HAnimJoint1326.addChildren(HAnimJoint1536)

HAnimJoint1289.addChildren(HAnimJoint1326)

HAnimJoint1273.addChildren(HAnimJoint1289)

HAnimJoint1264.addChildren(HAnimJoint1273)

HAnimJoint1227.addChildren(HAnimJoint1264)

HAnimJoint595.addChildren(HAnimJoint1227)

HAnimJoint586.addChildren(HAnimJoint595)

HAnimJoint577.addChildren(HAnimJoint586)

HAnimJoint568.addChildren(HAnimJoint577)

HAnimJoint559.addChildren(HAnimJoint568)

HAnimJoint550.addChildren(HAnimJoint559)

HAnimJoint541.addChildren(HAnimJoint550)

HAnimJoint532.addChildren(HAnimJoint541)

HAnimJoint509.addChildren(HAnimJoint532)

HAnimJoint493.addChildren(HAnimJoint509)

HAnimJoint484.addChildren(HAnimJoint493)

HAnimJoint475.addChildren(HAnimJoint484)

HAnimJoint466.addChildren(HAnimJoint475)

HAnimJoint436.addChildren(HAnimJoint466)

HAnimJoint427.addChildren(HAnimJoint436)

HAnimJoint418.addChildren(HAnimJoint427)

HAnimJoint395.addChildren(HAnimJoint418)

HAnimJoint45.addChildren(HAnimJoint395)

HAnimHumanoid44.setSkeleton(HAnimJoint45)
#USE nodes for inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
HAnimSite1575 = HAnimSite()
HAnimSite1575.setName("l_inclined_view")
HAnimSite1575.setDEF("hanim_l_inclined_view")
HAnimSite1575.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite1575.setTranslation([1.62,1.05,2.06])
Viewpoint1576 = Viewpoint()
Viewpoint1576.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1576.setDescription("left inclined")
Viewpoint1576.setPosition([0,0,0])

HAnimSite1575.addChildren(Viewpoint1576)
#HAnimSite/Viewpoint visualization shape
Anchor1577 = Anchor()
Anchor1577.setDescription("HAnimSite Viewpoint hanim_l_inclined_view")
Anchor1577.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1578 = LOD()
LOD1578.setForceTransitions(True)
LOD1578.setRange([0.04])
WorldInfo1579 = WorldInfo()
WorldInfo1579.setInfo(["hide diamond when close"])

LOD1578.addChildren(WorldInfo1579)
Shape1580 = Shape()
Shape1580.setUSE("HAnimSiteViewpointShape")

LOD1578.addChildren(Shape1580)

Anchor1577.addChildren(LOD1578)

HAnimSite1575.addChildren(Anchor1577)

HAnimHumanoid44.addViewpoints(HAnimSite1575)
HAnimSite1581 = HAnimSite()
HAnimSite1581.setName("r_inclined_view")
HAnimSite1581.setDEF("hanim_r_inclined_view")
HAnimSite1581.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite1581.setTranslation([-1.62,1.05,2.06])
Viewpoint1582 = Viewpoint()
Viewpoint1582.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1582.setCenterOfRotation([0,0.9,0])
Viewpoint1582.setDescription("right inclined")
Viewpoint1582.setPosition([0,0,0])

HAnimSite1581.addChildren(Viewpoint1582)
#HAnimSite/Viewpoint visualization shape
Anchor1583 = Anchor()
Anchor1583.setDescription("HAnimSite Viewpoint hanim_r_inclined_view")
Anchor1583.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1584 = LOD()
LOD1584.setForceTransitions(True)
LOD1584.setRange([0.04])
WorldInfo1585 = WorldInfo()
WorldInfo1585.setInfo(["hide diamond when close"])

LOD1584.addChildren(WorldInfo1585)
Shape1586 = Shape()
Shape1586.setUSE("HAnimSiteViewpointShape")

LOD1584.addChildren(Shape1586)

Anchor1583.addChildren(LOD1584)

HAnimSite1581.addChildren(Anchor1583)

HAnimHumanoid44.addViewpoints(HAnimSite1581)
HAnimSite1587 = HAnimSite()
HAnimSite1587.setName("front_view")
HAnimSite1587.setDEF("hanim_front_view")
HAnimSite1587.setTranslation([0,0.85,2.58])
Viewpoint1588 = Viewpoint()
Viewpoint1588.setDEF("hanim_front_viewpoint")
Viewpoint1588.setCenterOfRotation([0,0.9,0])
Viewpoint1588.setDescription("front")
Viewpoint1588.setPosition([0,0,0])

HAnimSite1587.addChildren(Viewpoint1588)
#HAnimSite/Viewpoint visualization shape
Anchor1589 = Anchor()
Anchor1589.setDescription("HAnimSite Viewpoint hanim_front_view")
Anchor1589.setUrl(["#hanim_front_viewpoint"])
LOD1590 = LOD()
LOD1590.setForceTransitions(True)
LOD1590.setRange([0.04])
WorldInfo1591 = WorldInfo()
WorldInfo1591.setInfo(["hide diamond when close"])

LOD1590.addChildren(WorldInfo1591)
Shape1592 = Shape()
Shape1592.setUSE("HAnimSiteViewpointShape")

LOD1590.addChildren(Shape1592)

Anchor1589.addChildren(LOD1590)

HAnimSite1587.addChildren(Anchor1589)

HAnimHumanoid44.addViewpoints(HAnimSite1587)
HAnimSite1593 = HAnimSite()
HAnimSite1593.setName("back_view")
HAnimSite1593.setDEF("hanim_back_view")
HAnimSite1593.setRotation([0,1,0,3.14])
HAnimSite1593.setTranslation([0,0.85,-2.58])
Viewpoint1594 = Viewpoint()
Viewpoint1594.setDEF("hanim_back_viewpoint")
Viewpoint1594.setCenterOfRotation([0,0.9,0])
Viewpoint1594.setDescription("back")
Viewpoint1594.setPosition([0,0,0])

HAnimSite1593.addChildren(Viewpoint1594)
#HAnimSite/Viewpoint visualization shape
Anchor1595 = Anchor()
Anchor1595.setDescription("HAnimSite Viewpoint hanim_back_view")
Anchor1595.setUrl(["#hanim_back_viewpoint"])
LOD1596 = LOD()
LOD1596.setForceTransitions(True)
LOD1596.setRange([0.04])
WorldInfo1597 = WorldInfo()
WorldInfo1597.setInfo(["hide diamond when close"])

LOD1596.addChildren(WorldInfo1597)
Shape1598 = Shape()
Shape1598.setUSE("HAnimSiteViewpointShape")

LOD1596.addChildren(Shape1598)

Anchor1595.addChildren(LOD1596)

HAnimSite1593.addChildren(Anchor1595)

HAnimHumanoid44.addViewpoints(HAnimSite1593)
HAnimSite1599 = HAnimSite()
HAnimSite1599.setName("l_side_view")
HAnimSite1599.setDEF("hanim_l_side_view")
HAnimSite1599.setRotation([0,1,0,1.5708])
HAnimSite1599.setTranslation([2.6,0.854,0])
Viewpoint1600 = Viewpoint()
Viewpoint1600.setDEF("hanim_l_side_viewpoint")
Viewpoint1600.setCenterOfRotation([0,0.9,0])
Viewpoint1600.setDescription("left side")
Viewpoint1600.setPosition([0,0,0])

HAnimSite1599.addChildren(Viewpoint1600)
#HAnimSite/Viewpoint visualization shape
Anchor1601 = Anchor()
Anchor1601.setDescription("HAnimSite Viewpoint hanim_l_side_view")
Anchor1601.setUrl(["#hanim_l_side_viewpoint"])
LOD1602 = LOD()
LOD1602.setForceTransitions(True)
LOD1602.setRange([0.04])
WorldInfo1603 = WorldInfo()
WorldInfo1603.setInfo(["hide diamond when close"])

LOD1602.addChildren(WorldInfo1603)
Shape1604 = Shape()
Shape1604.setUSE("HAnimSiteViewpointShape")

LOD1602.addChildren(Shape1604)

Anchor1601.addChildren(LOD1602)

HAnimSite1599.addChildren(Anchor1601)

HAnimHumanoid44.addViewpoints(HAnimSite1599)
HAnimSite1605 = HAnimSite()
HAnimSite1605.setName("Top_view")
HAnimSite1605.setDEF("hanim_Top_view")
HAnimSite1605.setRotation([1,0,0,-1.57])
HAnimSite1605.setTranslation([0,3.5,0])
Viewpoint1606 = Viewpoint()
Viewpoint1606.setDEF("hanim_Top_viewpoint")
Viewpoint1606.setCenterOfRotation([0,0.9,0])
Viewpoint1606.setDescription("Top")
Viewpoint1606.setPosition([0,0,0])

HAnimSite1605.addChildren(Viewpoint1606)
#HAnimSite/Viewpoint visualization shape
Anchor1607 = Anchor()
Anchor1607.setDescription("HAnimSite Viewpoint hanim_Top_view")
Anchor1607.setUrl(["#hanim_Top_viewpoint"])
LOD1608 = LOD()
LOD1608.setForceTransitions(True)
LOD1608.setRange([0.04])
WorldInfo1609 = WorldInfo()
WorldInfo1609.setInfo(["hide diamond when close"])

LOD1608.addChildren(WorldInfo1609)
Shape1610 = Shape()
Shape1610.setUSE("HAnimSiteViewpointShape")

LOD1608.addChildren(Shape1610)

Anchor1607.addChildren(LOD1608)

HAnimSite1605.addChildren(Anchor1607)

HAnimHumanoid44.addViewpoints(HAnimSite1605)
HAnimSite1611 = HAnimSite()
HAnimSite1611.setName("front_close_view")
HAnimSite1611.setDEF("hanim_front_close_view")
HAnimSite1611.setTranslation([0,0.854,1.575])
Viewpoint1612 = Viewpoint()
Viewpoint1612.setDEF("hanim_front_close_viewpoint")
Viewpoint1612.setCenterOfRotation([0,0,1.575])
Viewpoint1612.setDescription("front close")
Viewpoint1612.setPosition([0,0,0])

HAnimSite1611.addChildren(Viewpoint1612)
#HAnimSite/Viewpoint visualization shape
Anchor1613 = Anchor()
Anchor1613.setDescription("HAnimSite Viewpoint hanim_front_close_view")
Anchor1613.setUrl(["#hanim_front_close_viewpoint"])
LOD1614 = LOD()
LOD1614.setForceTransitions(True)
LOD1614.setRange([0.04])
WorldInfo1615 = WorldInfo()
WorldInfo1615.setInfo(["hide diamond when close"])

LOD1614.addChildren(WorldInfo1615)
Shape1616 = Shape()
Shape1616.setUSE("HAnimSiteViewpointShape")

LOD1614.addChildren(Shape1616)

Anchor1613.addChildren(LOD1614)

HAnimSite1611.addChildren(Anchor1613)

HAnimHumanoid44.addViewpoints(HAnimSite1611)
HAnimSite1617 = HAnimSite()
HAnimSite1617.setName("side_close_view")
HAnimSite1617.setDEF("hanim_side_close_view")
HAnimSite1617.setRotation([0,1,0,1.5708])
HAnimSite1617.setTranslation([1.56,0.854,0])
Viewpoint1618 = Viewpoint()
Viewpoint1618.setDEF("hanim_side_close_viewpoint")
Viewpoint1618.setCenterOfRotation([1.6,0,0])
Viewpoint1618.setDescription("side close")
Viewpoint1618.setPosition([0,0,0])

HAnimSite1617.addChildren(Viewpoint1618)
#HAnimSite/Viewpoint visualization shape
Anchor1619 = Anchor()
Anchor1619.setDescription("HAnimSite Viewpoint hanim_side_close_view")
Anchor1619.setUrl(["#hanim_side_close_viewpoint"])
LOD1620 = LOD()
LOD1620.setForceTransitions(True)
LOD1620.setRange([0.04])
WorldInfo1621 = WorldInfo()
WorldInfo1621.setInfo(["hide diamond when close"])

LOD1620.addChildren(WorldInfo1621)
Shape1622 = Shape()
Shape1622.setUSE("HAnimSiteViewpointShape")

LOD1620.addChildren(Shape1622)

Anchor1619.addChildren(LOD1620)

HAnimSite1617.addChildren(Anchor1619)

HAnimHumanoid44.addViewpoints(HAnimSite1617)
HAnimSite1623 = HAnimSite()
HAnimSite1623.setName("head_front_close_view")
HAnimSite1623.setDEF("hanim_head_front_close_view")
HAnimSite1623.setTranslation([0,1.5,1])
Viewpoint1624 = Viewpoint()
Viewpoint1624.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1624.setCenterOfRotation([0,0,1])
Viewpoint1624.setDescription("head front close")
Viewpoint1624.setPosition([0,0,0])

HAnimSite1623.addChildren(Viewpoint1624)
#HAnimSite/Viewpoint visualization shape
Anchor1625 = Anchor()
Anchor1625.setDescription("HAnimSite Viewpoint hanim_head_front_close_view")
Anchor1625.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1626 = LOD()
LOD1626.setForceTransitions(True)
LOD1626.setRange([0.04])
WorldInfo1627 = WorldInfo()
WorldInfo1627.setInfo(["hide diamond when close"])

LOD1626.addChildren(WorldInfo1627)
Shape1628 = Shape()
Shape1628.setUSE("HAnimSiteViewpointShape")

LOD1626.addChildren(Shape1628)

Anchor1625.addChildren(LOD1626)

HAnimSite1623.addChildren(Anchor1625)

HAnimHumanoid44.addViewpoints(HAnimSite1623)
HAnimSite1629 = HAnimSite()
HAnimSite1629.setName("chest_front_close_view")
HAnimSite1629.setDEF("hanim_chest_front_close_view")
HAnimSite1629.setTranslation([0,1.2,1])
Viewpoint1630 = Viewpoint()
Viewpoint1630.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1630.setCenterOfRotation([0,0,1])
Viewpoint1630.setDescription("chest front close")
Viewpoint1630.setPosition([0,0,0])

HAnimSite1629.addChildren(Viewpoint1630)
#HAnimSite/Viewpoint visualization shape
Anchor1631 = Anchor()
Anchor1631.setDescription("HAnimSite Viewpoint hanim_chest_front_close_view")
Anchor1631.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1632 = LOD()
LOD1632.setForceTransitions(True)
LOD1632.setRange([0.04])
WorldInfo1633 = WorldInfo()
WorldInfo1633.setInfo(["hide diamond when close"])

LOD1632.addChildren(WorldInfo1633)
Shape1634 = Shape()
Shape1634.setUSE("HAnimSiteViewpointShape")

LOD1632.addChildren(Shape1634)

Anchor1631.addChildren(LOD1632)

HAnimSite1629.addChildren(Anchor1631)

HAnimHumanoid44.addViewpoints(HAnimSite1629)
HAnimSite1635 = HAnimSite()
HAnimSite1635.setName("pelvis_front_close_view")
HAnimSite1635.setDEF("hanim_pelvis_front_close_view")
HAnimSite1635.setTranslation([0,0.8,1])
Viewpoint1636 = Viewpoint()
Viewpoint1636.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1636.setCenterOfRotation([0,0,1])
Viewpoint1636.setDescription("pelvis front close")
Viewpoint1636.setPosition([0,0,0])

HAnimSite1635.addChildren(Viewpoint1636)
#HAnimSite/Viewpoint visualization shape
Anchor1637 = Anchor()
Anchor1637.setDescription("HAnimSite Viewpoint hanim_pelvis_front_close_view")
Anchor1637.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1638 = LOD()
LOD1638.setForceTransitions(True)
LOD1638.setRange([0.04])
WorldInfo1639 = WorldInfo()
WorldInfo1639.setInfo(["hide diamond when close"])

LOD1638.addChildren(WorldInfo1639)
Shape1640 = Shape()
Shape1640.setUSE("HAnimSiteViewpointShape")

LOD1638.addChildren(Shape1640)

Anchor1637.addChildren(LOD1638)

HAnimSite1635.addChildren(Anchor1637)

HAnimHumanoid44.addViewpoints(HAnimSite1635)
HAnimSite1641 = HAnimSite()
HAnimSite1641.setName("knees_front_close_view")
HAnimSite1641.setDEF("hanim_knees_front_close_view")
HAnimSite1641.setTranslation([0,0.4,1])
Viewpoint1642 = Viewpoint()
Viewpoint1642.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1642.setCenterOfRotation([0,0.4,0])
Viewpoint1642.setDescription("knees front close")
Viewpoint1642.setPosition([0,0,0])

HAnimSite1641.addChildren(Viewpoint1642)
#HAnimSite/Viewpoint visualization shape
Anchor1643 = Anchor()
Anchor1643.setDescription("HAnimSite Viewpoint hanim_knees_front_close_view")
Anchor1643.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1644 = LOD()
LOD1644.setForceTransitions(True)
LOD1644.setRange([0.04])
WorldInfo1645 = WorldInfo()
WorldInfo1645.setInfo(["hide diamond when close"])

LOD1644.addChildren(WorldInfo1645)
Shape1646 = Shape()
Shape1646.setUSE("HAnimSiteViewpointShape")

LOD1644.addChildren(Shape1646)

Anchor1643.addChildren(LOD1644)

HAnimSite1641.addChildren(Anchor1643)

HAnimHumanoid44.addViewpoints(HAnimSite1641)
HAnimSite1647 = HAnimSite()
HAnimSite1647.setName("feet_front_close_view")
HAnimSite1647.setDEF("hanim_feet_front_close_view")
HAnimSite1647.setTranslation([0,0,1])
Viewpoint1648 = Viewpoint()
Viewpoint1648.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1648.setDescription("feet front close")
Viewpoint1648.setPosition([0,0,0])

HAnimSite1647.addChildren(Viewpoint1648)
#HAnimSite/Viewpoint visualization shape
Anchor1649 = Anchor()
Anchor1649.setDescription("HAnimSite Viewpoint hanim_feet_front_close_view")
Anchor1649.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1650 = LOD()
LOD1650.setForceTransitions(True)
LOD1650.setRange([0.04])
WorldInfo1651 = WorldInfo()
WorldInfo1651.setInfo(["hide diamond when close"])

LOD1650.addChildren(WorldInfo1651)
Shape1652 = Shape()
Shape1652.setUSE("HAnimSiteViewpointShape")

LOD1650.addChildren(Shape1652)

Anchor1649.addChildren(LOD1650)

HAnimSite1647.addChildren(Anchor1649)

HAnimHumanoid44.addViewpoints(HAnimSite1647)
HAnimSite1653 = HAnimSite()
HAnimSite1653.setName("eye_level_view")
HAnimSite1653.setDEF("hanim_eye_level_view")
HAnimSite1653.setTranslation([0,1.6332,0.0502])
Viewpoint1654 = Viewpoint()
Viewpoint1654.setDEF("hanim_eye_level_viewpoint")
Viewpoint1654.setDescription("eye level looking forward")
Viewpoint1654.setOrientation([0,1,0,3.141593])
Viewpoint1654.setPosition([0,0,0])

HAnimSite1653.addChildren(Viewpoint1654)
#HAnimSite/Viewpoint visualization shape
Anchor1655 = Anchor()
Anchor1655.setDescription("HAnimSite Viewpoint hanim_eye_level_view")
Anchor1655.setUrl(["#hanim_eye_level_viewpoint"])
LOD1656 = LOD()
LOD1656.setForceTransitions(True)
LOD1656.setRange([0.04])
WorldInfo1657 = WorldInfo()
WorldInfo1657.setInfo(["hide diamond when close"])

LOD1656.addChildren(WorldInfo1657)
Shape1658 = Shape()
Shape1658.setUSE("HAnimSiteViewpointShape")

LOD1656.addChildren(Shape1658)

Anchor1655.addChildren(LOD1656)

HAnimSite1653.addChildren(Anchor1655)

HAnimHumanoid44.addViewpoints(HAnimSite1653)
HAnimSite1659 = HAnimSite()
HAnimSite1659.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid44.addSites(HAnimSite1659)
HAnimSite1660 = HAnimSite()
HAnimSite1660.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid44.addSites(HAnimSite1660)
HAnimSite1661 = HAnimSite()
HAnimSite1661.setUSE("hanim_l_hand_front_view")

HAnimHumanoid44.addSites(HAnimSite1661)
HAnimSite1662 = HAnimSite()
HAnimSite1662.setUSE("hanim_r_hand_front_view")

HAnimHumanoid44.addSites(HAnimSite1662)
HAnimJoint1663 = HAnimJoint()
HAnimJoint1663.setUSE("hanim_humanoid_root")

HAnimHumanoid44.addJoints(HAnimJoint1663)
HAnimJoint1664 = HAnimJoint()
HAnimJoint1664.setUSE("hanim_sacroiliac")

HAnimHumanoid44.addJoints(HAnimJoint1664)
HAnimJoint1665 = HAnimJoint()
HAnimJoint1665.setUSE("hanim_vl5")

HAnimHumanoid44.addJoints(HAnimJoint1665)
HAnimJoint1666 = HAnimJoint()
HAnimJoint1666.setUSE("hanim_vl4")

HAnimHumanoid44.addJoints(HAnimJoint1666)
HAnimJoint1667 = HAnimJoint()
HAnimJoint1667.setUSE("hanim_vl3")

HAnimHumanoid44.addJoints(HAnimJoint1667)
HAnimJoint1668 = HAnimJoint()
HAnimJoint1668.setUSE("hanim_vl2")

HAnimHumanoid44.addJoints(HAnimJoint1668)
HAnimJoint1669 = HAnimJoint()
HAnimJoint1669.setUSE("hanim_vl1")

HAnimHumanoid44.addJoints(HAnimJoint1669)
HAnimJoint1670 = HAnimJoint()
HAnimJoint1670.setUSE("hanim_vt12")

HAnimHumanoid44.addJoints(HAnimJoint1670)
HAnimJoint1671 = HAnimJoint()
HAnimJoint1671.setUSE("hanim_vt11")

HAnimHumanoid44.addJoints(HAnimJoint1671)
HAnimJoint1672 = HAnimJoint()
HAnimJoint1672.setUSE("hanim_vt10")

HAnimHumanoid44.addJoints(HAnimJoint1672)
HAnimJoint1673 = HAnimJoint()
HAnimJoint1673.setUSE("hanim_vt9")

HAnimHumanoid44.addJoints(HAnimJoint1673)
HAnimJoint1674 = HAnimJoint()
HAnimJoint1674.setUSE("hanim_vt8")

HAnimHumanoid44.addJoints(HAnimJoint1674)
HAnimJoint1675 = HAnimJoint()
HAnimJoint1675.setUSE("hanim_vt7")

HAnimHumanoid44.addJoints(HAnimJoint1675)
HAnimJoint1676 = HAnimJoint()
HAnimJoint1676.setUSE("hanim_vt6")

HAnimHumanoid44.addJoints(HAnimJoint1676)
HAnimJoint1677 = HAnimJoint()
HAnimJoint1677.setUSE("hanim_vt5")

HAnimHumanoid44.addJoints(HAnimJoint1677)
HAnimJoint1678 = HAnimJoint()
HAnimJoint1678.setUSE("hanim_vt4")

HAnimHumanoid44.addJoints(HAnimJoint1678)
HAnimJoint1679 = HAnimJoint()
HAnimJoint1679.setUSE("hanim_vt3")

HAnimHumanoid44.addJoints(HAnimJoint1679)
HAnimJoint1680 = HAnimJoint()
HAnimJoint1680.setUSE("hanim_vt2")

HAnimHumanoid44.addJoints(HAnimJoint1680)
HAnimJoint1681 = HAnimJoint()
HAnimJoint1681.setUSE("hanim_vt1")

HAnimHumanoid44.addJoints(HAnimJoint1681)
HAnimJoint1682 = HAnimJoint()
HAnimJoint1682.setUSE("hanim_vc7")

HAnimHumanoid44.addJoints(HAnimJoint1682)
HAnimJoint1683 = HAnimJoint()
HAnimJoint1683.setUSE("hanim_vc6")

HAnimHumanoid44.addJoints(HAnimJoint1683)
HAnimJoint1684 = HAnimJoint()
HAnimJoint1684.setUSE("hanim_vc5")

HAnimHumanoid44.addJoints(HAnimJoint1684)
HAnimJoint1685 = HAnimJoint()
HAnimJoint1685.setUSE("hanim_vc4")

HAnimHumanoid44.addJoints(HAnimJoint1685)
HAnimJoint1686 = HAnimJoint()
HAnimJoint1686.setUSE("hanim_vc3")

HAnimHumanoid44.addJoints(HAnimJoint1686)
HAnimJoint1687 = HAnimJoint()
HAnimJoint1687.setUSE("hanim_vc2")

HAnimHumanoid44.addJoints(HAnimJoint1687)
HAnimJoint1688 = HAnimJoint()
HAnimJoint1688.setUSE("hanim_vc1")

HAnimHumanoid44.addJoints(HAnimJoint1688)
HAnimJoint1689 = HAnimJoint()
HAnimJoint1689.setUSE("hanim_skullbase")

HAnimHumanoid44.addJoints(HAnimJoint1689)
HAnimJoint1690 = HAnimJoint()
HAnimJoint1690.setUSE("hanim_temporomandibular")

HAnimHumanoid44.addJoints(HAnimJoint1690)
HAnimJoint1691 = HAnimJoint()
HAnimJoint1691.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid44.addJoints(HAnimJoint1691)
HAnimJoint1692 = HAnimJoint()
HAnimJoint1692.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid44.addJoints(HAnimJoint1692)
HAnimJoint1693 = HAnimJoint()
HAnimJoint1693.setUSE("hanim_l_ankle")

HAnimHumanoid44.addJoints(HAnimJoint1693)
HAnimJoint1694 = HAnimJoint()
HAnimJoint1694.setUSE("hanim_r_ankle")

HAnimHumanoid44.addJoints(HAnimJoint1694)
HAnimJoint1695 = HAnimJoint()
HAnimJoint1695.setUSE("hanim_l_elbow")

HAnimHumanoid44.addJoints(HAnimJoint1695)
HAnimJoint1696 = HAnimJoint()
HAnimJoint1696.setUSE("hanim_r_elbow")

HAnimHumanoid44.addJoints(HAnimJoint1696)
HAnimJoint1697 = HAnimJoint()
HAnimJoint1697.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid44.addJoints(HAnimJoint1697)
HAnimJoint1698 = HAnimJoint()
HAnimJoint1698.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid44.addJoints(HAnimJoint1698)
HAnimJoint1699 = HAnimJoint()
HAnimJoint1699.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid44.addJoints(HAnimJoint1699)
HAnimJoint1700 = HAnimJoint()
HAnimJoint1700.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid44.addJoints(HAnimJoint1700)
HAnimJoint1701 = HAnimJoint()
HAnimJoint1701.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid44.addJoints(HAnimJoint1701)
HAnimJoint1702 = HAnimJoint()
HAnimJoint1702.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid44.addJoints(HAnimJoint1702)
HAnimJoint1703 = HAnimJoint()
HAnimJoint1703.setUSE("hanim_l_hip")

HAnimHumanoid44.addJoints(HAnimJoint1703)
HAnimJoint1704 = HAnimJoint()
HAnimJoint1704.setUSE("hanim_r_hip")

HAnimHumanoid44.addJoints(HAnimJoint1704)
HAnimJoint1705 = HAnimJoint()
HAnimJoint1705.setUSE("hanim_l_index0")

HAnimHumanoid44.addJoints(HAnimJoint1705)
HAnimJoint1706 = HAnimJoint()
HAnimJoint1706.setUSE("hanim_r_index0")

HAnimHumanoid44.addJoints(HAnimJoint1706)
HAnimJoint1707 = HAnimJoint()
HAnimJoint1707.setUSE("hanim_l_index1")

HAnimHumanoid44.addJoints(HAnimJoint1707)
HAnimJoint1708 = HAnimJoint()
HAnimJoint1708.setUSE("hanim_r_index1")

HAnimHumanoid44.addJoints(HAnimJoint1708)
HAnimJoint1709 = HAnimJoint()
HAnimJoint1709.setUSE("hanim_l_index2")

HAnimHumanoid44.addJoints(HAnimJoint1709)
HAnimJoint1710 = HAnimJoint()
HAnimJoint1710.setUSE("hanim_r_index2")

HAnimHumanoid44.addJoints(HAnimJoint1710)
HAnimJoint1711 = HAnimJoint()
HAnimJoint1711.setUSE("hanim_l_index3")

HAnimHumanoid44.addJoints(HAnimJoint1711)
HAnimJoint1712 = HAnimJoint()
HAnimJoint1712.setUSE("hanim_r_index3")

HAnimHumanoid44.addJoints(HAnimJoint1712)
HAnimJoint1713 = HAnimJoint()
HAnimJoint1713.setUSE("hanim_l_knee")

HAnimHumanoid44.addJoints(HAnimJoint1713)
HAnimJoint1714 = HAnimJoint()
HAnimJoint1714.setUSE("hanim_r_knee")

HAnimHumanoid44.addJoints(HAnimJoint1714)
HAnimJoint1715 = HAnimJoint()
HAnimJoint1715.setUSE("hanim_l_metatarsal")

HAnimHumanoid44.addJoints(HAnimJoint1715)
HAnimJoint1716 = HAnimJoint()
HAnimJoint1716.setUSE("hanim_r_metatarsal")

HAnimHumanoid44.addJoints(HAnimJoint1716)
HAnimJoint1717 = HAnimJoint()
HAnimJoint1717.setUSE("hanim_l_middle0")

HAnimHumanoid44.addJoints(HAnimJoint1717)
HAnimJoint1718 = HAnimJoint()
HAnimJoint1718.setUSE("hanim_r_middle0")

HAnimHumanoid44.addJoints(HAnimJoint1718)
HAnimJoint1719 = HAnimJoint()
HAnimJoint1719.setUSE("hanim_l_middle1")

HAnimHumanoid44.addJoints(HAnimJoint1719)
HAnimJoint1720 = HAnimJoint()
HAnimJoint1720.setUSE("hanim_r_middle1")

HAnimHumanoid44.addJoints(HAnimJoint1720)
HAnimJoint1721 = HAnimJoint()
HAnimJoint1721.setUSE("hanim_l_middle2")

HAnimHumanoid44.addJoints(HAnimJoint1721)
HAnimJoint1722 = HAnimJoint()
HAnimJoint1722.setUSE("hanim_r_middle2")

HAnimHumanoid44.addJoints(HAnimJoint1722)
HAnimJoint1723 = HAnimJoint()
HAnimJoint1723.setUSE("hanim_l_middle3")

HAnimHumanoid44.addJoints(HAnimJoint1723)
HAnimJoint1724 = HAnimJoint()
HAnimJoint1724.setUSE("hanim_r_middle3")

HAnimHumanoid44.addJoints(HAnimJoint1724)
HAnimJoint1725 = HAnimJoint()
HAnimJoint1725.setUSE("hanim_l_midtarsal")

HAnimHumanoid44.addJoints(HAnimJoint1725)
HAnimJoint1726 = HAnimJoint()
HAnimJoint1726.setUSE("hanim_r_midtarsal")

HAnimHumanoid44.addJoints(HAnimJoint1726)
HAnimJoint1727 = HAnimJoint()
HAnimJoint1727.setUSE("hanim_l_pinky0")

HAnimHumanoid44.addJoints(HAnimJoint1727)
HAnimJoint1728 = HAnimJoint()
HAnimJoint1728.setUSE("hanim_r_pinky0")

HAnimHumanoid44.addJoints(HAnimJoint1728)
HAnimJoint1729 = HAnimJoint()
HAnimJoint1729.setUSE("hanim_l_pinky1")

HAnimHumanoid44.addJoints(HAnimJoint1729)
HAnimJoint1730 = HAnimJoint()
HAnimJoint1730.setUSE("hanim_r_pinky1")

HAnimHumanoid44.addJoints(HAnimJoint1730)
HAnimJoint1731 = HAnimJoint()
HAnimJoint1731.setUSE("hanim_l_pinky2")

HAnimHumanoid44.addJoints(HAnimJoint1731)
HAnimJoint1732 = HAnimJoint()
HAnimJoint1732.setUSE("hanim_r_pinky2")

HAnimHumanoid44.addJoints(HAnimJoint1732)
HAnimJoint1733 = HAnimJoint()
HAnimJoint1733.setUSE("hanim_l_pinky3")

HAnimHumanoid44.addJoints(HAnimJoint1733)
HAnimJoint1734 = HAnimJoint()
HAnimJoint1734.setUSE("hanim_r_pinky3")

HAnimHumanoid44.addJoints(HAnimJoint1734)
HAnimJoint1735 = HAnimJoint()
HAnimJoint1735.setUSE("hanim_l_ring0")

HAnimHumanoid44.addJoints(HAnimJoint1735)
HAnimJoint1736 = HAnimJoint()
HAnimJoint1736.setUSE("hanim_r_ring0")

HAnimHumanoid44.addJoints(HAnimJoint1736)
HAnimJoint1737 = HAnimJoint()
HAnimJoint1737.setUSE("hanim_l_ring1")

HAnimHumanoid44.addJoints(HAnimJoint1737)
HAnimJoint1738 = HAnimJoint()
HAnimJoint1738.setUSE("hanim_r_ring1")

HAnimHumanoid44.addJoints(HAnimJoint1738)
HAnimJoint1739 = HAnimJoint()
HAnimJoint1739.setUSE("hanim_l_ring2")

HAnimHumanoid44.addJoints(HAnimJoint1739)
HAnimJoint1740 = HAnimJoint()
HAnimJoint1740.setUSE("hanim_r_ring2")

HAnimHumanoid44.addJoints(HAnimJoint1740)
HAnimJoint1741 = HAnimJoint()
HAnimJoint1741.setUSE("hanim_l_ring3")

HAnimHumanoid44.addJoints(HAnimJoint1741)
HAnimJoint1742 = HAnimJoint()
HAnimJoint1742.setUSE("hanim_r_ring3")

HAnimHumanoid44.addJoints(HAnimJoint1742)
HAnimJoint1743 = HAnimJoint()
HAnimJoint1743.setUSE("hanim_l_shoulder")

HAnimHumanoid44.addJoints(HAnimJoint1743)
HAnimJoint1744 = HAnimJoint()
HAnimJoint1744.setUSE("hanim_r_shoulder")

HAnimHumanoid44.addJoints(HAnimJoint1744)
HAnimJoint1745 = HAnimJoint()
HAnimJoint1745.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid44.addJoints(HAnimJoint1745)
HAnimJoint1746 = HAnimJoint()
HAnimJoint1746.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid44.addJoints(HAnimJoint1746)
HAnimJoint1747 = HAnimJoint()
HAnimJoint1747.setUSE("hanim_l_subtalar")

HAnimHumanoid44.addJoints(HAnimJoint1747)
HAnimJoint1748 = HAnimJoint()
HAnimJoint1748.setUSE("hanim_r_subtalar")

HAnimHumanoid44.addJoints(HAnimJoint1748)
HAnimJoint1749 = HAnimJoint()
HAnimJoint1749.setUSE("hanim_l_thumb1")

HAnimHumanoid44.addJoints(HAnimJoint1749)
HAnimJoint1750 = HAnimJoint()
HAnimJoint1750.setUSE("hanim_r_thumb1")

HAnimHumanoid44.addJoints(HAnimJoint1750)
HAnimJoint1751 = HAnimJoint()
HAnimJoint1751.setUSE("hanim_l_thumb2")

HAnimHumanoid44.addJoints(HAnimJoint1751)
HAnimJoint1752 = HAnimJoint()
HAnimJoint1752.setUSE("hanim_r_thumb2")

HAnimHumanoid44.addJoints(HAnimJoint1752)
HAnimJoint1753 = HAnimJoint()
HAnimJoint1753.setUSE("hanim_l_thumb3")

HAnimHumanoid44.addJoints(HAnimJoint1753)
HAnimJoint1754 = HAnimJoint()
HAnimJoint1754.setUSE("hanim_r_thumb3")

HAnimHumanoid44.addJoints(HAnimJoint1754)
HAnimJoint1755 = HAnimJoint()
HAnimJoint1755.setUSE("hanim_l_wrist")

HAnimHumanoid44.addJoints(HAnimJoint1755)
HAnimJoint1756 = HAnimJoint()
HAnimJoint1756.setUSE("hanim_r_wrist")

HAnimHumanoid44.addJoints(HAnimJoint1756)
HAnimSegment1757 = HAnimSegment()
HAnimSegment1757.setUSE("hanim_pelvis")

HAnimHumanoid44.addSegments(HAnimSegment1757)
HAnimSegment1758 = HAnimSegment()
HAnimSegment1758.setUSE("hanim_skull")

HAnimHumanoid44.addSegments(HAnimSegment1758)
HAnimSegment1759 = HAnimSegment()
HAnimSegment1759.setUSE("hanim_jaw")

HAnimHumanoid44.addSegments(HAnimSegment1759)
HAnimSegment1760 = HAnimSegment()
HAnimSegment1760.setUSE("hanim_c1")

HAnimHumanoid44.addSegments(HAnimSegment1760)
HAnimSegment1761 = HAnimSegment()
HAnimSegment1761.setUSE("hanim_c2")

HAnimHumanoid44.addSegments(HAnimSegment1761)
HAnimSegment1762 = HAnimSegment()
HAnimSegment1762.setUSE("hanim_c3")

HAnimHumanoid44.addSegments(HAnimSegment1762)
HAnimSegment1763 = HAnimSegment()
HAnimSegment1763.setUSE("hanim_c4")

HAnimHumanoid44.addSegments(HAnimSegment1763)
HAnimSegment1764 = HAnimSegment()
HAnimSegment1764.setUSE("hanim_c5")

HAnimHumanoid44.addSegments(HAnimSegment1764)
HAnimSegment1765 = HAnimSegment()
HAnimSegment1765.setUSE("hanim_c6")

HAnimHumanoid44.addSegments(HAnimSegment1765)
HAnimSegment1766 = HAnimSegment()
HAnimSegment1766.setUSE("hanim_c7")

HAnimHumanoid44.addSegments(HAnimSegment1766)
HAnimSegment1767 = HAnimSegment()
HAnimSegment1767.setUSE("hanim_t1")

HAnimHumanoid44.addSegments(HAnimSegment1767)
HAnimSegment1768 = HAnimSegment()
HAnimSegment1768.setUSE("hanim_t2")

HAnimHumanoid44.addSegments(HAnimSegment1768)
HAnimSegment1769 = HAnimSegment()
HAnimSegment1769.setUSE("hanim_t3")

HAnimHumanoid44.addSegments(HAnimSegment1769)
HAnimSegment1770 = HAnimSegment()
HAnimSegment1770.setUSE("hanim_t4")

HAnimHumanoid44.addSegments(HAnimSegment1770)
HAnimSegment1771 = HAnimSegment()
HAnimSegment1771.setUSE("hanim_t5")

HAnimHumanoid44.addSegments(HAnimSegment1771)
HAnimSegment1772 = HAnimSegment()
HAnimSegment1772.setUSE("hanim_t6")

HAnimHumanoid44.addSegments(HAnimSegment1772)
HAnimSegment1773 = HAnimSegment()
HAnimSegment1773.setUSE("hanim_t7")

HAnimHumanoid44.addSegments(HAnimSegment1773)
HAnimSegment1774 = HAnimSegment()
HAnimSegment1774.setUSE("hanim_t8")

HAnimHumanoid44.addSegments(HAnimSegment1774)
HAnimSegment1775 = HAnimSegment()
HAnimSegment1775.setUSE("hanim_t9")

HAnimHumanoid44.addSegments(HAnimSegment1775)
HAnimSegment1776 = HAnimSegment()
HAnimSegment1776.setUSE("hanim_t10")

HAnimHumanoid44.addSegments(HAnimSegment1776)
HAnimSegment1777 = HAnimSegment()
HAnimSegment1777.setUSE("hanim_t11")

HAnimHumanoid44.addSegments(HAnimSegment1777)
HAnimSegment1778 = HAnimSegment()
HAnimSegment1778.setUSE("hanim_t12")

HAnimHumanoid44.addSegments(HAnimSegment1778)
HAnimSegment1779 = HAnimSegment()
HAnimSegment1779.setUSE("hanim_l1")

HAnimHumanoid44.addSegments(HAnimSegment1779)
HAnimSegment1780 = HAnimSegment()
HAnimSegment1780.setUSE("hanim_l2")

HAnimHumanoid44.addSegments(HAnimSegment1780)
HAnimSegment1781 = HAnimSegment()
HAnimSegment1781.setUSE("hanim_l3")

HAnimHumanoid44.addSegments(HAnimSegment1781)
HAnimSegment1782 = HAnimSegment()
HAnimSegment1782.setUSE("hanim_l4")

HAnimHumanoid44.addSegments(HAnimSegment1782)
HAnimSegment1783 = HAnimSegment()
HAnimSegment1783.setUSE("hanim_l5")

HAnimHumanoid44.addSegments(HAnimSegment1783)
HAnimSegment1784 = HAnimSegment()
HAnimSegment1784.setUSE("hanim_sacrum")

HAnimHumanoid44.addSegments(HAnimSegment1784)
HAnimSegment1785 = HAnimSegment()
HAnimSegment1785.setUSE("hanim_l_calf")

HAnimHumanoid44.addSegments(HAnimSegment1785)
HAnimSegment1786 = HAnimSegment()
HAnimSegment1786.setUSE("hanim_r_calf")

HAnimHumanoid44.addSegments(HAnimSegment1786)
HAnimSegment1787 = HAnimSegment()
HAnimSegment1787.setUSE("hanim_l_clavicle")

HAnimHumanoid44.addSegments(HAnimSegment1787)
HAnimSegment1788 = HAnimSegment()
HAnimSegment1788.setUSE("hanim_r_clavicle")

HAnimHumanoid44.addSegments(HAnimSegment1788)
HAnimSegment1789 = HAnimSegment()
HAnimSegment1789.setUSE("hanim_l_eyeball")

HAnimHumanoid44.addSegments(HAnimSegment1789)
HAnimSegment1790 = HAnimSegment()
HAnimSegment1790.setUSE("hanim_r_eyeball")

HAnimHumanoid44.addSegments(HAnimSegment1790)
HAnimSegment1791 = HAnimSegment()
HAnimSegment1791.setUSE("hanim_l_eyebrow")

HAnimHumanoid44.addSegments(HAnimSegment1791)
HAnimSegment1792 = HAnimSegment()
HAnimSegment1792.setUSE("hanim_r_eyebrow")

HAnimHumanoid44.addSegments(HAnimSegment1792)
HAnimSegment1793 = HAnimSegment()
HAnimSegment1793.setUSE("hanim_l_eyelid")

HAnimHumanoid44.addSegments(HAnimSegment1793)
HAnimSegment1794 = HAnimSegment()
HAnimSegment1794.setUSE("hanim_r_eyelid")

HAnimHumanoid44.addSegments(HAnimSegment1794)
HAnimSegment1795 = HAnimSegment()
HAnimSegment1795.setUSE("hanim_l_forearm")

HAnimHumanoid44.addSegments(HAnimSegment1795)
HAnimSegment1796 = HAnimSegment()
HAnimSegment1796.setUSE("hanim_r_forearm")

HAnimHumanoid44.addSegments(HAnimSegment1796)
HAnimSegment1797 = HAnimSegment()
HAnimSegment1797.setUSE("hanim_l_forefoot")

HAnimHumanoid44.addSegments(HAnimSegment1797)
HAnimSegment1798 = HAnimSegment()
HAnimSegment1798.setUSE("hanim_r_forefoot")

HAnimHumanoid44.addSegments(HAnimSegment1798)
HAnimSegment1799 = HAnimSegment()
HAnimSegment1799.setUSE("hanim_l_hand")

HAnimHumanoid44.addSegments(HAnimSegment1799)
HAnimSegment1800 = HAnimSegment()
HAnimSegment1800.setUSE("hanim_r_hand")

HAnimHumanoid44.addSegments(HAnimSegment1800)
HAnimSegment1801 = HAnimSegment()
HAnimSegment1801.setUSE("hanim_l_hindfoot")

HAnimHumanoid44.addSegments(HAnimSegment1801)
HAnimSegment1802 = HAnimSegment()
HAnimSegment1802.setUSE("hanim_r_hindfoot")

HAnimHumanoid44.addSegments(HAnimSegment1802)
HAnimSegment1803 = HAnimSegment()
HAnimSegment1803.setUSE("hanim_l_index_distal")

HAnimHumanoid44.addSegments(HAnimSegment1803)
HAnimSegment1804 = HAnimSegment()
HAnimSegment1804.setUSE("hanim_r_index_distal")

HAnimHumanoid44.addSegments(HAnimSegment1804)
HAnimSegment1805 = HAnimSegment()
HAnimSegment1805.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1805)
HAnimSegment1806 = HAnimSegment()
HAnimSegment1806.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1806)
HAnimSegment1807 = HAnimSegment()
HAnimSegment1807.setUSE("hanim_l_index_middle")

HAnimHumanoid44.addSegments(HAnimSegment1807)
HAnimSegment1808 = HAnimSegment()
HAnimSegment1808.setUSE("hanim_r_index_middle")

HAnimHumanoid44.addSegments(HAnimSegment1808)
HAnimSegment1809 = HAnimSegment()
HAnimSegment1809.setUSE("hanim_l_index_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1809)
HAnimSegment1810 = HAnimSegment()
HAnimSegment1810.setUSE("hanim_r_index_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1810)
HAnimSegment1811 = HAnimSegment()
HAnimSegment1811.setUSE("hanim_l_middistal")

HAnimHumanoid44.addSegments(HAnimSegment1811)
HAnimSegment1812 = HAnimSegment()
HAnimSegment1812.setUSE("hanim_r_middistal")

HAnimHumanoid44.addSegments(HAnimSegment1812)
HAnimSegment1813 = HAnimSegment()
HAnimSegment1813.setUSE("hanim_l_middle_distal")

HAnimHumanoid44.addSegments(HAnimSegment1813)
HAnimSegment1814 = HAnimSegment()
HAnimSegment1814.setUSE("hanim_r_middle_distal")

HAnimHumanoid44.addSegments(HAnimSegment1814)
HAnimSegment1815 = HAnimSegment()
HAnimSegment1815.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1815)
HAnimSegment1816 = HAnimSegment()
HAnimSegment1816.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1816)
HAnimSegment1817 = HAnimSegment()
HAnimSegment1817.setUSE("hanim_l_middle_middle")

HAnimHumanoid44.addSegments(HAnimSegment1817)
HAnimSegment1818 = HAnimSegment()
HAnimSegment1818.setUSE("hanim_r_middle_middle")

HAnimHumanoid44.addSegments(HAnimSegment1818)
HAnimSegment1819 = HAnimSegment()
HAnimSegment1819.setUSE("hanim_l_middle_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1819)
HAnimSegment1820 = HAnimSegment()
HAnimSegment1820.setUSE("hanim_r_middle_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1820)
HAnimSegment1821 = HAnimSegment()
HAnimSegment1821.setUSE("hanim_l_midproximal")

HAnimHumanoid44.addSegments(HAnimSegment1821)
HAnimSegment1822 = HAnimSegment()
HAnimSegment1822.setUSE("hanim_r_midproximal")

HAnimHumanoid44.addSegments(HAnimSegment1822)
HAnimSegment1823 = HAnimSegment()
HAnimSegment1823.setUSE("hanim_l_pinky_distal")

HAnimHumanoid44.addSegments(HAnimSegment1823)
HAnimSegment1824 = HAnimSegment()
HAnimSegment1824.setUSE("hanim_r_pinky_distal")

HAnimHumanoid44.addSegments(HAnimSegment1824)
HAnimSegment1825 = HAnimSegment()
HAnimSegment1825.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1825)
HAnimSegment1826 = HAnimSegment()
HAnimSegment1826.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1826)
HAnimSegment1827 = HAnimSegment()
HAnimSegment1827.setUSE("hanim_l_pinky_middle")

HAnimHumanoid44.addSegments(HAnimSegment1827)
HAnimSegment1828 = HAnimSegment()
HAnimSegment1828.setUSE("hanim_r_pinky_middle")

HAnimHumanoid44.addSegments(HAnimSegment1828)
HAnimSegment1829 = HAnimSegment()
HAnimSegment1829.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1829)
HAnimSegment1830 = HAnimSegment()
HAnimSegment1830.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1830)
HAnimSegment1831 = HAnimSegment()
HAnimSegment1831.setUSE("hanim_l_ring_distal")

HAnimHumanoid44.addSegments(HAnimSegment1831)
HAnimSegment1832 = HAnimSegment()
HAnimSegment1832.setUSE("hanim_r_ring_distal")

HAnimHumanoid44.addSegments(HAnimSegment1832)
HAnimSegment1833 = HAnimSegment()
HAnimSegment1833.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1833)
HAnimSegment1834 = HAnimSegment()
HAnimSegment1834.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1834)
HAnimSegment1835 = HAnimSegment()
HAnimSegment1835.setUSE("hanim_l_ring_middle")

HAnimHumanoid44.addSegments(HAnimSegment1835)
HAnimSegment1836 = HAnimSegment()
HAnimSegment1836.setUSE("hanim_r_ring_middle")

HAnimHumanoid44.addSegments(HAnimSegment1836)
HAnimSegment1837 = HAnimSegment()
HAnimSegment1837.setUSE("hanim_l_ring_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1837)
HAnimSegment1838 = HAnimSegment()
HAnimSegment1838.setUSE("hanim_r_ring_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1838)
HAnimSegment1839 = HAnimSegment()
HAnimSegment1839.setUSE("hanim_l_scapula")

HAnimHumanoid44.addSegments(HAnimSegment1839)
HAnimSegment1840 = HAnimSegment()
HAnimSegment1840.setUSE("hanim_r_scapula")

HAnimHumanoid44.addSegments(HAnimSegment1840)
HAnimSegment1841 = HAnimSegment()
HAnimSegment1841.setUSE("hanim_l_thigh")

HAnimHumanoid44.addSegments(HAnimSegment1841)
HAnimSegment1842 = HAnimSegment()
HAnimSegment1842.setUSE("hanim_r_thigh")

HAnimHumanoid44.addSegments(HAnimSegment1842)
HAnimSegment1843 = HAnimSegment()
HAnimSegment1843.setUSE("hanim_l_thumb_distal")

HAnimHumanoid44.addSegments(HAnimSegment1843)
HAnimSegment1844 = HAnimSegment()
HAnimSegment1844.setUSE("hanim_r_thumb_distal")

HAnimHumanoid44.addSegments(HAnimSegment1844)
HAnimSegment1845 = HAnimSegment()
HAnimSegment1845.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1845)
HAnimSegment1846 = HAnimSegment()
HAnimSegment1846.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment1846)
HAnimSegment1847 = HAnimSegment()
HAnimSegment1847.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1847)
HAnimSegment1848 = HAnimSegment()
HAnimSegment1848.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid44.addSegments(HAnimSegment1848)
HAnimSegment1849 = HAnimSegment()
HAnimSegment1849.setUSE("hanim_l_upperarm")

HAnimHumanoid44.addSegments(HAnimSegment1849)
HAnimSegment1850 = HAnimSegment()
HAnimSegment1850.setUSE("hanim_r_upperarm")

HAnimHumanoid44.addSegments(HAnimSegment1850)
HAnimSite1851 = HAnimSite()
HAnimSite1851.setUSE("hanim_crotch_pt")

HAnimHumanoid44.addSites(HAnimSite1851)
HAnimSite1852 = HAnimSite()
HAnimSite1852.setUSE("hanim_skull_tip")

HAnimHumanoid44.addSites(HAnimSite1852)
HAnimSite1853 = HAnimSite()
HAnimSite1853.setUSE("hanim_sellion_pt")

HAnimHumanoid44.addSites(HAnimSite1853)
HAnimSite1854 = HAnimSite()
HAnimSite1854.setUSE("hanim_supramenton_pt")

HAnimHumanoid44.addSites(HAnimSite1854)
HAnimSite1855 = HAnimSite()
HAnimSite1855.setUSE("hanim_nuchale_pt")

HAnimHumanoid44.addSites(HAnimSite1855)
HAnimSite1856 = HAnimSite()
HAnimSite1856.setUSE("hanim_suprasternale_pt")

HAnimHumanoid44.addSites(HAnimSite1856)
HAnimSite1857 = HAnimSite()
HAnimSite1857.setUSE("hanim_cervicale_pt")

HAnimHumanoid44.addSites(HAnimSite1857)
HAnimSite1858 = HAnimSite()
HAnimSite1858.setUSE("hanim_substernale_pt")

HAnimHumanoid44.addSites(HAnimSite1858)
HAnimSite1859 = HAnimSite()
HAnimSite1859.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid44.addSites(HAnimSite1859)
HAnimSite1860 = HAnimSite()
HAnimSite1860.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid44.addSites(HAnimSite1860)
HAnimSite1861 = HAnimSite()
HAnimSite1861.setUSE("hanim_navel_pt")

HAnimHumanoid44.addSites(HAnimSite1861)
HAnimSite1862 = HAnimSite()
HAnimSite1862.setUSE("hanim_l_acromion_pt")

HAnimHumanoid44.addSites(HAnimSite1862)
HAnimSite1863 = HAnimSite()
HAnimSite1863.setUSE("hanim_r_acromion_pt")

HAnimHumanoid44.addSites(HAnimSite1863)
HAnimSite1864 = HAnimSite()
HAnimSite1864.setUSE("hanim_r_asis_pt")

HAnimHumanoid44.addSites(HAnimSite1864)
HAnimSite1865 = HAnimSite()
HAnimSite1865.setUSE("hanim_l_asis_pt")

HAnimHumanoid44.addSites(HAnimSite1865)
HAnimSite1866 = HAnimSite()
HAnimSite1866.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid44.addSites(HAnimSite1866)
HAnimSite1867 = HAnimSite()
HAnimSite1867.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid44.addSites(HAnimSite1867)
HAnimSite1868 = HAnimSite()
HAnimSite1868.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid44.addSites(HAnimSite1868)
HAnimSite1869 = HAnimSite()
HAnimSite1869.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid44.addSites(HAnimSite1869)
HAnimSite1870 = HAnimSite()
HAnimSite1870.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid44.addSites(HAnimSite1870)
HAnimSite1871 = HAnimSite()
HAnimSite1871.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid44.addSites(HAnimSite1871)
HAnimSite1872 = HAnimSite()
HAnimSite1872.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid44.addSites(HAnimSite1872)
HAnimSite1873 = HAnimSite()
HAnimSite1873.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid44.addSites(HAnimSite1873)
HAnimSite1874 = HAnimSite()
HAnimSite1874.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid44.addSites(HAnimSite1874)
HAnimSite1875 = HAnimSite()
HAnimSite1875.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid44.addSites(HAnimSite1875)
HAnimSite1876 = HAnimSite()
HAnimSite1876.setUSE("hanim_l_digit2_pt")

HAnimHumanoid44.addSites(HAnimSite1876)
HAnimSite1877 = HAnimSite()
HAnimSite1877.setUSE("hanim_r_digit2_pt")

HAnimHumanoid44.addSites(HAnimSite1877)
HAnimSite1878 = HAnimSite()
HAnimSite1878.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1878)
HAnimSite1879 = HAnimSite()
HAnimSite1879.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1879)
HAnimSite1880 = HAnimSite()
HAnimSite1880.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1880)
HAnimSite1881 = HAnimSite()
HAnimSite1881.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1881)
HAnimSite1882 = HAnimSite()
HAnimSite1882.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid44.addSites(HAnimSite1882)
HAnimSite1883 = HAnimSite()
HAnimSite1883.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid44.addSites(HAnimSite1883)
HAnimSite1884 = HAnimSite()
HAnimSite1884.setUSE("hanim_r_gonion_pt")

HAnimHumanoid44.addSites(HAnimSite1884)
HAnimSite1885 = HAnimSite()
HAnimSite1885.setUSE("hanim_l_gonion_pt")

HAnimHumanoid44.addSites(HAnimSite1885)
HAnimSite1886 = HAnimSite()
HAnimSite1886.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1886)
HAnimSite1887 = HAnimSite()
HAnimSite1887.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1887)
HAnimSite1888 = HAnimSite()
HAnimSite1888.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1888)
HAnimSite1889 = HAnimSite()
HAnimSite1889.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite1889)
HAnimSite1890 = HAnimSite()
HAnimSite1890.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid44.addSites(HAnimSite1890)
HAnimSite1891 = HAnimSite()
HAnimSite1891.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid44.addSites(HAnimSite1891)
HAnimSite1892 = HAnimSite()
HAnimSite1892.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1892)
HAnimSite1893 = HAnimSite()
HAnimSite1893.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1893)
HAnimSite1894 = HAnimSite()
HAnimSite1894.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid44.addSites(HAnimSite1894)
HAnimSite1895 = HAnimSite()
HAnimSite1895.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid44.addSites(HAnimSite1895)
HAnimSite1896 = HAnimSite()
HAnimSite1896.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid44.addSites(HAnimSite1896)
HAnimSite1897 = HAnimSite()
HAnimSite1897.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid44.addSites(HAnimSite1897)
HAnimSite1898 = HAnimSite()
HAnimSite1898.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite1898)
HAnimSite1899 = HAnimSite()
HAnimSite1899.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite1899)
HAnimSite1900 = HAnimSite()
HAnimSite1900.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite1900)
HAnimSite1901 = HAnimSite()
HAnimSite1901.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite1901)
HAnimSite1902 = HAnimSite()
HAnimSite1902.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid44.addSites(HAnimSite1902)
HAnimSite1903 = HAnimSite()
HAnimSite1903.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid44.addSites(HAnimSite1903)
HAnimSite1904 = HAnimSite()
HAnimSite1904.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite1904)
HAnimSite1905 = HAnimSite()
HAnimSite1905.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite1905)
HAnimSite1906 = HAnimSite()
HAnimSite1906.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid44.addSites(HAnimSite1906)
HAnimSite1907 = HAnimSite()
HAnimSite1907.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid44.addSites(HAnimSite1907)
HAnimSite1908 = HAnimSite()
HAnimSite1908.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite1908)
HAnimSite1909 = HAnimSite()
HAnimSite1909.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite1909)
HAnimSite1910 = HAnimSite()
HAnimSite1910.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1910)
HAnimSite1911 = HAnimSite()
HAnimSite1911.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1911)
HAnimSite1912 = HAnimSite()
HAnimSite1912.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid44.addSites(HAnimSite1912)
HAnimSite1913 = HAnimSite()
HAnimSite1913.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid44.addSites(HAnimSite1913)
HAnimSite1914 = HAnimSite()
HAnimSite1914.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid44.addSites(HAnimSite1914)
HAnimSite1915 = HAnimSite()
HAnimSite1915.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid44.addSites(HAnimSite1915)
HAnimSite1916 = HAnimSite()
HAnimSite1916.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1916)
HAnimSite1917 = HAnimSite()
HAnimSite1917.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1917)
HAnimSite1918 = HAnimSite()
HAnimSite1918.setUSE("hanim_r_psis_pt")

HAnimHumanoid44.addSites(HAnimSite1918)
HAnimSite1919 = HAnimSite()
HAnimSite1919.setUSE("hanim_l_psis_pt")

HAnimHumanoid44.addSites(HAnimSite1919)
HAnimSite1920 = HAnimSite()
HAnimSite1920.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite1920)
HAnimSite1921 = HAnimSite()
HAnimSite1921.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite1921)
HAnimSite1922 = HAnimSite()
HAnimSite1922.setUSE("hanim_l_radiale_pt")

HAnimHumanoid44.addSites(HAnimSite1922)
HAnimSite1923 = HAnimSite()
HAnimSite1923.setUSE("hanim_r_radiale_pt")

HAnimHumanoid44.addSites(HAnimSite1923)
HAnimSite1924 = HAnimSite()
HAnimSite1924.setUSE("hanim_r_rib10_pt")

HAnimHumanoid44.addSites(HAnimSite1924)
HAnimSite1925 = HAnimSite()
HAnimSite1925.setUSE("hanim_l_rib10_pt")

HAnimHumanoid44.addSites(HAnimSite1925)
HAnimSite1926 = HAnimSite()
HAnimSite1926.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1926)
HAnimSite1927 = HAnimSite()
HAnimSite1927.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1927)
HAnimSite1928 = HAnimSite()
HAnimSite1928.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid44.addSites(HAnimSite1928)
HAnimSite1929 = HAnimSite()
HAnimSite1929.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid44.addSites(HAnimSite1929)
HAnimSite1930 = HAnimSite()
HAnimSite1930.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid44.addSites(HAnimSite1930)
HAnimSite1931 = HAnimSite()
HAnimSite1931.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid44.addSites(HAnimSite1931)
HAnimSite1932 = HAnimSite()
HAnimSite1932.setUSE("hanim_r_thelion_pt")

HAnimHumanoid44.addSites(HAnimSite1932)
HAnimSite1933 = HAnimSite()
HAnimSite1933.setUSE("hanim_l_thelion_pt")

HAnimHumanoid44.addSites(HAnimSite1933)
HAnimSite1934 = HAnimSite()
HAnimSite1934.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1934)
HAnimSite1935 = HAnimSite()
HAnimSite1935.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid44.addSites(HAnimSite1935)
HAnimSite1936 = HAnimSite()
HAnimSite1936.setUSE("hanim_r_tragion_pt")

HAnimHumanoid44.addSites(HAnimSite1936)
HAnimSite1937 = HAnimSite()
HAnimSite1937.setUSE("hanim_l_tragion_pt")

HAnimHumanoid44.addSites(HAnimSite1937)
HAnimSite1938 = HAnimSite()
HAnimSite1938.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid44.addSites(HAnimSite1938)
HAnimSite1939 = HAnimSite()
HAnimSite1939.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid44.addSites(HAnimSite1939)
HAnimSite1940 = HAnimSite()
HAnimSite1940.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite1940)
HAnimSite1941 = HAnimSite()
HAnimSite1941.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite1941)

Scene30.addChildren(HAnimHumanoid44)
Group1942 = Group()
Group1942.setDEF("StopAnimation")
TimeSensor1943 = TimeSensor()
TimeSensor1943.setDEF("StopTimer")
TimeSensor1943.setCycleInterval(5.73)
TimeSensor1943.setLoop(True)

Group1942.addChildren(TimeSensor1943)
PositionInterpolator1944 = PositionInterpolator()
PositionInterpolator1944.setDEF("Stop_humanoid_root_TranslationInterpolator")
PositionInterpolator1944.setKey([0,0.5,1])
PositionInterpolator1944.setKeyValue([0,0,0,0,0,0,0,0,0])

Group1942.addChildren(PositionInterpolator1944)
OrientationInterpolator1945 = OrientationInterpolator()
OrientationInterpolator1945.setDEF("Stop_humanoid_root_RotationInterpolator")
OrientationInterpolator1945.setKey([0,0.5,1])
OrientationInterpolator1945.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1945)
OrientationInterpolator1946 = OrientationInterpolator()
OrientationInterpolator1946.setDEF("Stop_sacroiliac_RotationInterpolator")
OrientationInterpolator1946.setKey([0,0.5,1])
OrientationInterpolator1946.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1946)
OrientationInterpolator1947 = OrientationInterpolator()
OrientationInterpolator1947.setDEF("Stop_l_hip_RotationInterpolator")
OrientationInterpolator1947.setKey([0,0.5,1])
OrientationInterpolator1947.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1947)
OrientationInterpolator1948 = OrientationInterpolator()
OrientationInterpolator1948.setDEF("Stop_l_knee_RotationInterpolator")
OrientationInterpolator1948.setKey([0,0.5,1])
OrientationInterpolator1948.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1948)
OrientationInterpolator1949 = OrientationInterpolator()
OrientationInterpolator1949.setDEF("Stop_l_ankle_RotationInterpolator")
OrientationInterpolator1949.setKey([0,0.5,1])
OrientationInterpolator1949.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1949)
OrientationInterpolator1950 = OrientationInterpolator()
OrientationInterpolator1950.setDEF("Stop_l_subtalar_RotationInterpolator")
OrientationInterpolator1950.setKey([0,0.5,1])
OrientationInterpolator1950.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1950)
OrientationInterpolator1951 = OrientationInterpolator()
OrientationInterpolator1951.setDEF("Stop_l_midtarsal_RotationInterpolator")
OrientationInterpolator1951.setKey([0,0.5,1])
OrientationInterpolator1951.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1951)
OrientationInterpolator1952 = OrientationInterpolator()
OrientationInterpolator1952.setDEF("Stop_l_metatarsal_RotationInterpolator")
OrientationInterpolator1952.setKey([0,0.5,1])
OrientationInterpolator1952.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1952)
OrientationInterpolator1953 = OrientationInterpolator()
OrientationInterpolator1953.setDEF("Stop_r_hip_RotationInterpolator")
OrientationInterpolator1953.setKey([0,0.5,1])
OrientationInterpolator1953.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1953)
OrientationInterpolator1954 = OrientationInterpolator()
OrientationInterpolator1954.setDEF("Stop_r_knee_RotationInterpolator")
OrientationInterpolator1954.setKey([0,0.5,1])
OrientationInterpolator1954.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1954)
OrientationInterpolator1955 = OrientationInterpolator()
OrientationInterpolator1955.setDEF("Stop_r_ankle_RotationInterpolator")
OrientationInterpolator1955.setKey([0,0.5,1])
OrientationInterpolator1955.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1955)
OrientationInterpolator1956 = OrientationInterpolator()
OrientationInterpolator1956.setDEF("Stop_r_subtalar_RotationInterpolator")
OrientationInterpolator1956.setKey([0,0.5,1])
OrientationInterpolator1956.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1956)
OrientationInterpolator1957 = OrientationInterpolator()
OrientationInterpolator1957.setDEF("Stop_r_midtarsal_RotationInterpolator")
OrientationInterpolator1957.setKey([0,0.5,1])
OrientationInterpolator1957.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1957)
OrientationInterpolator1958 = OrientationInterpolator()
OrientationInterpolator1958.setDEF("Stop_r_metatarsal_RotationInterpolator")
OrientationInterpolator1958.setKey([0,0.5,1])
OrientationInterpolator1958.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1958)
OrientationInterpolator1959 = OrientationInterpolator()
OrientationInterpolator1959.setDEF("Stop_vl5_RotationInterpolator")
OrientationInterpolator1959.setKey([0,0.5,1])
OrientationInterpolator1959.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1959)
OrientationInterpolator1960 = OrientationInterpolator()
OrientationInterpolator1960.setDEF("Stop_vl4_RotationInterpolator")
OrientationInterpolator1960.setKey([0,0.5,1])
OrientationInterpolator1960.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1960)
OrientationInterpolator1961 = OrientationInterpolator()
OrientationInterpolator1961.setDEF("Stop_vl3_RotationInterpolator")
OrientationInterpolator1961.setKey([0,0.5,1])
OrientationInterpolator1961.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1961)
OrientationInterpolator1962 = OrientationInterpolator()
OrientationInterpolator1962.setDEF("Stop_vl2_RotationInterpolator")
OrientationInterpolator1962.setKey([0,0.5,1])
OrientationInterpolator1962.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1962)
OrientationInterpolator1963 = OrientationInterpolator()
OrientationInterpolator1963.setDEF("Stop_vl1_RotationInterpolator")
OrientationInterpolator1963.setKey([0,0.5,1])
OrientationInterpolator1963.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1963)
OrientationInterpolator1964 = OrientationInterpolator()
OrientationInterpolator1964.setDEF("Stop_vt12_RotationInterpolator")
OrientationInterpolator1964.setKey([0,0.5,1])
OrientationInterpolator1964.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1964)
OrientationInterpolator1965 = OrientationInterpolator()
OrientationInterpolator1965.setDEF("Stop_vt11_RotationInterpolator")
OrientationInterpolator1965.setKey([0,0.5,1])
OrientationInterpolator1965.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1965)
OrientationInterpolator1966 = OrientationInterpolator()
OrientationInterpolator1966.setDEF("Stop_vt10_RotationInterpolator")
OrientationInterpolator1966.setKey([0,0.5,1])
OrientationInterpolator1966.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1966)
OrientationInterpolator1967 = OrientationInterpolator()
OrientationInterpolator1967.setDEF("Stop_vt9_RotationInterpolator")
OrientationInterpolator1967.setKey([0,0.5,1])
OrientationInterpolator1967.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1967)
OrientationInterpolator1968 = OrientationInterpolator()
OrientationInterpolator1968.setDEF("Stop_vt8_RotationInterpolator")
OrientationInterpolator1968.setKey([0,0.5,1])
OrientationInterpolator1968.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1968)
OrientationInterpolator1969 = OrientationInterpolator()
OrientationInterpolator1969.setDEF("Stop_vt7_RotationInterpolator")
OrientationInterpolator1969.setKey([0,0.5,1])
OrientationInterpolator1969.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1969)
OrientationInterpolator1970 = OrientationInterpolator()
OrientationInterpolator1970.setDEF("Stop_vt6_RotationInterpolator")
OrientationInterpolator1970.setKey([0,0.5,1])
OrientationInterpolator1970.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1970)
OrientationInterpolator1971 = OrientationInterpolator()
OrientationInterpolator1971.setDEF("Stop_vt5_RotationInterpolator")
OrientationInterpolator1971.setKey([0,0.5,1])
OrientationInterpolator1971.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1971)
OrientationInterpolator1972 = OrientationInterpolator()
OrientationInterpolator1972.setDEF("Stop_vt4_RotationInterpolator")
OrientationInterpolator1972.setKey([0,0.5,1])
OrientationInterpolator1972.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1972)
OrientationInterpolator1973 = OrientationInterpolator()
OrientationInterpolator1973.setDEF("Stop_vt3_RotationInterpolator")
OrientationInterpolator1973.setKey([0,0.5,1])
OrientationInterpolator1973.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1973)
OrientationInterpolator1974 = OrientationInterpolator()
OrientationInterpolator1974.setDEF("Stop_vt2_RotationInterpolator")
OrientationInterpolator1974.setKey([0,0.5,1])
OrientationInterpolator1974.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1974)
OrientationInterpolator1975 = OrientationInterpolator()
OrientationInterpolator1975.setDEF("Stop_vt1_RotationInterpolator")
OrientationInterpolator1975.setKey([0,0.5,1])
OrientationInterpolator1975.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1975)
OrientationInterpolator1976 = OrientationInterpolator()
OrientationInterpolator1976.setDEF("Stop_vc7_RotationInterpolator")
OrientationInterpolator1976.setKey([0,0.5,1])
OrientationInterpolator1976.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1976)
OrientationInterpolator1977 = OrientationInterpolator()
OrientationInterpolator1977.setDEF("Stop_vc6_RotationInterpolator")
OrientationInterpolator1977.setKey([0,0.5,1])
OrientationInterpolator1977.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1977)
OrientationInterpolator1978 = OrientationInterpolator()
OrientationInterpolator1978.setDEF("Stop_vc5_RotationInterpolator")
OrientationInterpolator1978.setKey([0,0.5,1])
OrientationInterpolator1978.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1978)
OrientationInterpolator1979 = OrientationInterpolator()
OrientationInterpolator1979.setDEF("Stop_vc4_RotationInterpolator")
OrientationInterpolator1979.setKey([0,0.5,1])
OrientationInterpolator1979.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1979)
OrientationInterpolator1980 = OrientationInterpolator()
OrientationInterpolator1980.setDEF("Stop_vc3_RotationInterpolator")
OrientationInterpolator1980.setKey([0,0.5,1])
OrientationInterpolator1980.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1980)
OrientationInterpolator1981 = OrientationInterpolator()
OrientationInterpolator1981.setDEF("Stop_vc2_RotationInterpolator")
OrientationInterpolator1981.setKey([0,0.5,1])
OrientationInterpolator1981.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1981)
OrientationInterpolator1982 = OrientationInterpolator()
OrientationInterpolator1982.setDEF("Stop_vc1_RotationInterpolator")
OrientationInterpolator1982.setKey([0,0.5,1])
OrientationInterpolator1982.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1982)
OrientationInterpolator1983 = OrientationInterpolator()
OrientationInterpolator1983.setDEF("Stop_skullbase_RotationInterpolator")
OrientationInterpolator1983.setKey([0,0.5,1])
OrientationInterpolator1983.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1983)
OrientationInterpolator1984 = OrientationInterpolator()
OrientationInterpolator1984.setDEF("Stop_l_eyeball_joint_RotationInterpolator")
OrientationInterpolator1984.setKey([0,0.5,1])
OrientationInterpolator1984.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1984)
OrientationInterpolator1985 = OrientationInterpolator()
OrientationInterpolator1985.setDEF("Stop_r_eyeball_joint_RotationInterpolator")
OrientationInterpolator1985.setKey([0,0.5,1])
OrientationInterpolator1985.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1985)
OrientationInterpolator1986 = OrientationInterpolator()
OrientationInterpolator1986.setDEF("Stop_l_sternoclavicular_RotationInterpolator")
OrientationInterpolator1986.setKey([0,0.5,1])
OrientationInterpolator1986.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1986)
OrientationInterpolator1987 = OrientationInterpolator()
OrientationInterpolator1987.setDEF("Stop_l_acromioclavicular_RotationInterpolator")
OrientationInterpolator1987.setKey([0,0.5,1])
OrientationInterpolator1987.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1987)
OrientationInterpolator1988 = OrientationInterpolator()
OrientationInterpolator1988.setDEF("Stop_l_shoulder_RotationInterpolator")
OrientationInterpolator1988.setKey([0,0.5,1])
OrientationInterpolator1988.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1988)
OrientationInterpolator1989 = OrientationInterpolator()
OrientationInterpolator1989.setDEF("Stop_l_elbow_RotationInterpolator")
OrientationInterpolator1989.setKey([0,0.5,1])
OrientationInterpolator1989.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1989)
OrientationInterpolator1990 = OrientationInterpolator()
OrientationInterpolator1990.setDEF("Stop_l_wrist_RotationInterpolator")
OrientationInterpolator1990.setKey([0,0.5,1])
OrientationInterpolator1990.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1990)
OrientationInterpolator1991 = OrientationInterpolator()
OrientationInterpolator1991.setDEF("Stop_l_thumb1_RotationInterpolator")
OrientationInterpolator1991.setKey([0,0.5,1])
OrientationInterpolator1991.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1991)
OrientationInterpolator1992 = OrientationInterpolator()
OrientationInterpolator1992.setDEF("Stop_l_thumb2_RotationInterpolator")
OrientationInterpolator1992.setKey([0,0.5,1])
OrientationInterpolator1992.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1992)
OrientationInterpolator1993 = OrientationInterpolator()
OrientationInterpolator1993.setDEF("Stop_l_thumb3_RotationInterpolator")
OrientationInterpolator1993.setKey([0,0.5,1])
OrientationInterpolator1993.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1993)
OrientationInterpolator1994 = OrientationInterpolator()
OrientationInterpolator1994.setDEF("Stop_l_index0_RotationInterpolator")
OrientationInterpolator1994.setKey([0,0.5,1])
OrientationInterpolator1994.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1994)
OrientationInterpolator1995 = OrientationInterpolator()
OrientationInterpolator1995.setDEF("Stop_l_index1_RotationInterpolator")
OrientationInterpolator1995.setKey([0,0.5,1])
OrientationInterpolator1995.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1995)
OrientationInterpolator1996 = OrientationInterpolator()
OrientationInterpolator1996.setDEF("Stop_l_index2_RotationInterpolator")
OrientationInterpolator1996.setKey([0,0.5,1])
OrientationInterpolator1996.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1996)
OrientationInterpolator1997 = OrientationInterpolator()
OrientationInterpolator1997.setDEF("Stop_l_index3_RotationInterpolator")
OrientationInterpolator1997.setKey([0,0.5,1])
OrientationInterpolator1997.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1997)
OrientationInterpolator1998 = OrientationInterpolator()
OrientationInterpolator1998.setDEF("Stop_l_middle0_RotationInterpolator")
OrientationInterpolator1998.setKey([0,0.5,1])
OrientationInterpolator1998.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1998)
OrientationInterpolator1999 = OrientationInterpolator()
OrientationInterpolator1999.setDEF("Stop_l_middle1_RotationInterpolator")
OrientationInterpolator1999.setKey([0,0.5,1])
OrientationInterpolator1999.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator1999)
OrientationInterpolator2000 = OrientationInterpolator()
OrientationInterpolator2000.setDEF("Stop_l_middle2_RotationInterpolator")
OrientationInterpolator2000.setKey([0,0.5,1])
OrientationInterpolator2000.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2000)
OrientationInterpolator2001 = OrientationInterpolator()
OrientationInterpolator2001.setDEF("Stop_l_middle3_RotationInterpolator")
OrientationInterpolator2001.setKey([0,0.5,1])
OrientationInterpolator2001.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2001)
OrientationInterpolator2002 = OrientationInterpolator()
OrientationInterpolator2002.setDEF("Stop_l_ring0_RotationInterpolator")
OrientationInterpolator2002.setKey([0,0.5,1])
OrientationInterpolator2002.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2002)
OrientationInterpolator2003 = OrientationInterpolator()
OrientationInterpolator2003.setDEF("Stop_l_ring1_RotationInterpolator")
OrientationInterpolator2003.setKey([0,0.5,1])
OrientationInterpolator2003.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2003)
OrientationInterpolator2004 = OrientationInterpolator()
OrientationInterpolator2004.setDEF("Stop_l_ring2_RotationInterpolator")
OrientationInterpolator2004.setKey([0,0.5,1])
OrientationInterpolator2004.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2004)
OrientationInterpolator2005 = OrientationInterpolator()
OrientationInterpolator2005.setDEF("Stop_l_ring3_RotationInterpolator")
OrientationInterpolator2005.setKey([0,0.5,1])
OrientationInterpolator2005.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2005)
OrientationInterpolator2006 = OrientationInterpolator()
OrientationInterpolator2006.setDEF("Stop_l_pinky0_RotationInterpolator")
OrientationInterpolator2006.setKey([0,0.5,1])
OrientationInterpolator2006.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2006)
OrientationInterpolator2007 = OrientationInterpolator()
OrientationInterpolator2007.setDEF("Stop_l_pinky1_RotationInterpolator")
OrientationInterpolator2007.setKey([0,0.5,1])
OrientationInterpolator2007.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2007)
OrientationInterpolator2008 = OrientationInterpolator()
OrientationInterpolator2008.setDEF("Stop_l_pinky2_RotationInterpolator")
OrientationInterpolator2008.setKey([0,0.5,1])
OrientationInterpolator2008.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2008)
OrientationInterpolator2009 = OrientationInterpolator()
OrientationInterpolator2009.setDEF("Stop_l_pinky3_RotationInterpolator")
OrientationInterpolator2009.setKey([0,0.5,1])
OrientationInterpolator2009.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2009)
OrientationInterpolator2010 = OrientationInterpolator()
OrientationInterpolator2010.setDEF("Stop_r_sternoclavicular_RotationInterpolator")
OrientationInterpolator2010.setKey([0,0.5,1])
OrientationInterpolator2010.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2010)
OrientationInterpolator2011 = OrientationInterpolator()
OrientationInterpolator2011.setDEF("Stop_r_acromioclavicular_RotationInterpolator")
OrientationInterpolator2011.setKey([0,0.5,1])
OrientationInterpolator2011.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2011)
OrientationInterpolator2012 = OrientationInterpolator()
OrientationInterpolator2012.setDEF("Stop_r_shoulder_RotationInterpolator")
OrientationInterpolator2012.setKey([0,0.5,1])
OrientationInterpolator2012.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2012)
OrientationInterpolator2013 = OrientationInterpolator()
OrientationInterpolator2013.setDEF("Stop_r_elbow_RotationInterpolator")
OrientationInterpolator2013.setKey([0,0.5,1])
OrientationInterpolator2013.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2013)
OrientationInterpolator2014 = OrientationInterpolator()
OrientationInterpolator2014.setDEF("Stop_r_wrist_RotationInterpolator")
OrientationInterpolator2014.setKey([0,0.5,1])
OrientationInterpolator2014.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2014)
OrientationInterpolator2015 = OrientationInterpolator()
OrientationInterpolator2015.setDEF("Stop_r_thumb1_RotationInterpolator")
OrientationInterpolator2015.setKey([0,0.5,1])
OrientationInterpolator2015.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2015)
OrientationInterpolator2016 = OrientationInterpolator()
OrientationInterpolator2016.setDEF("Stop_r_thumb2_RotationInterpolator")
OrientationInterpolator2016.setKey([0,0.5,1])
OrientationInterpolator2016.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2016)
OrientationInterpolator2017 = OrientationInterpolator()
OrientationInterpolator2017.setDEF("Stop_r_thumb3_RotationInterpolator")
OrientationInterpolator2017.setKey([0,0.5,1])
OrientationInterpolator2017.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2017)
OrientationInterpolator2018 = OrientationInterpolator()
OrientationInterpolator2018.setDEF("Stop_r_index0_RotationInterpolator")
OrientationInterpolator2018.setKey([0,0.5,1])
OrientationInterpolator2018.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2018)
OrientationInterpolator2019 = OrientationInterpolator()
OrientationInterpolator2019.setDEF("Stop_r_index1_RotationInterpolator")
OrientationInterpolator2019.setKey([0,0.5,1])
OrientationInterpolator2019.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2019)
OrientationInterpolator2020 = OrientationInterpolator()
OrientationInterpolator2020.setDEF("Stop_r_index2_RotationInterpolator")
OrientationInterpolator2020.setKey([0,0.5,1])
OrientationInterpolator2020.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2020)
OrientationInterpolator2021 = OrientationInterpolator()
OrientationInterpolator2021.setDEF("Stop_r_index3_RotationInterpolator")
OrientationInterpolator2021.setKey([0,0.5,1])
OrientationInterpolator2021.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2021)
OrientationInterpolator2022 = OrientationInterpolator()
OrientationInterpolator2022.setDEF("Stop_r_middle0_RotationInterpolator")
OrientationInterpolator2022.setKey([0,0.5,1])
OrientationInterpolator2022.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2022)
OrientationInterpolator2023 = OrientationInterpolator()
OrientationInterpolator2023.setDEF("Stop_r_middle1_RotationInterpolator")
OrientationInterpolator2023.setKey([0,0.5,1])
OrientationInterpolator2023.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2023)
OrientationInterpolator2024 = OrientationInterpolator()
OrientationInterpolator2024.setDEF("Stop_r_middle2_RotationInterpolator")
OrientationInterpolator2024.setKey([0,0.5,1])
OrientationInterpolator2024.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2024)
OrientationInterpolator2025 = OrientationInterpolator()
OrientationInterpolator2025.setDEF("Stop_r_middle3_RotationInterpolator")
OrientationInterpolator2025.setKey([0,0.5,1])
OrientationInterpolator2025.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2025)
OrientationInterpolator2026 = OrientationInterpolator()
OrientationInterpolator2026.setDEF("Stop_r_ring0_RotationInterpolator")
OrientationInterpolator2026.setKey([0,0.5,1])
OrientationInterpolator2026.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2026)
OrientationInterpolator2027 = OrientationInterpolator()
OrientationInterpolator2027.setDEF("Stop_r_ring1_RotationInterpolator")
OrientationInterpolator2027.setKey([0,0.5,1])
OrientationInterpolator2027.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2027)
OrientationInterpolator2028 = OrientationInterpolator()
OrientationInterpolator2028.setDEF("Stop_r_ring2_RotationInterpolator")
OrientationInterpolator2028.setKey([0,0.5,1])
OrientationInterpolator2028.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2028)
OrientationInterpolator2029 = OrientationInterpolator()
OrientationInterpolator2029.setDEF("Stop_r_ring3_RotationInterpolator")
OrientationInterpolator2029.setKey([0,0.5,1])
OrientationInterpolator2029.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2029)
OrientationInterpolator2030 = OrientationInterpolator()
OrientationInterpolator2030.setDEF("Stop_r_pinky0_RotationInterpolator")
OrientationInterpolator2030.setKey([0,0.5,1])
OrientationInterpolator2030.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2030)
OrientationInterpolator2031 = OrientationInterpolator()
OrientationInterpolator2031.setDEF("Stop_r_pinky1_RotationInterpolator")
OrientationInterpolator2031.setKey([0,0.5,1])
OrientationInterpolator2031.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2031)
OrientationInterpolator2032 = OrientationInterpolator()
OrientationInterpolator2032.setDEF("Stop_r_pinky2_RotationInterpolator")
OrientationInterpolator2032.setKey([0,0.5,1])
OrientationInterpolator2032.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2032)
OrientationInterpolator2033 = OrientationInterpolator()
OrientationInterpolator2033.setDEF("Stop_r_pinky3_RotationInterpolator")
OrientationInterpolator2033.setKey([0,0.5,1])
OrientationInterpolator2033.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group1942.addChildren(OrientationInterpolator2033)
ROUTE2034 = ROUTE()
ROUTE2034.setFromField("fraction_changed")
ROUTE2034.setFromNode("StopTimer")
ROUTE2034.setToField("set_fraction")
ROUTE2034.setToNode("Stop_humanoid_root_TranslationInterpolator")

Group1942.addChildren(ROUTE2034)
ROUTE2035 = ROUTE()
ROUTE2035.setFromField("fraction_changed")
ROUTE2035.setFromNode("StopTimer")
ROUTE2035.setToField("set_fraction")
ROUTE2035.setToNode("Stop_humanoid_root_RotationInterpolator")

Group1942.addChildren(ROUTE2035)
ROUTE2036 = ROUTE()
ROUTE2036.setFromField("fraction_changed")
ROUTE2036.setFromNode("StopTimer")
ROUTE2036.setToField("set_fraction")
ROUTE2036.setToNode("Stop_sacroiliac_RotationInterpolator")

Group1942.addChildren(ROUTE2036)
ROUTE2037 = ROUTE()
ROUTE2037.setFromField("fraction_changed")
ROUTE2037.setFromNode("StopTimer")
ROUTE2037.setToField("set_fraction")
ROUTE2037.setToNode("Stop_l_hip_RotationInterpolator")

Group1942.addChildren(ROUTE2037)
ROUTE2038 = ROUTE()
ROUTE2038.setFromField("fraction_changed")
ROUTE2038.setFromNode("StopTimer")
ROUTE2038.setToField("set_fraction")
ROUTE2038.setToNode("Stop_l_knee_RotationInterpolator")

Group1942.addChildren(ROUTE2038)
ROUTE2039 = ROUTE()
ROUTE2039.setFromField("fraction_changed")
ROUTE2039.setFromNode("StopTimer")
ROUTE2039.setToField("set_fraction")
ROUTE2039.setToNode("Stop_l_ankle_RotationInterpolator")

Group1942.addChildren(ROUTE2039)
ROUTE2040 = ROUTE()
ROUTE2040.setFromField("fraction_changed")
ROUTE2040.setFromNode("StopTimer")
ROUTE2040.setToField("set_fraction")
ROUTE2040.setToNode("Stop_l_subtalar_RotationInterpolator")

Group1942.addChildren(ROUTE2040)
ROUTE2041 = ROUTE()
ROUTE2041.setFromField("fraction_changed")
ROUTE2041.setFromNode("StopTimer")
ROUTE2041.setToField("set_fraction")
ROUTE2041.setToNode("Stop_l_midtarsal_RotationInterpolator")

Group1942.addChildren(ROUTE2041)
ROUTE2042 = ROUTE()
ROUTE2042.setFromField("fraction_changed")
ROUTE2042.setFromNode("StopTimer")
ROUTE2042.setToField("set_fraction")
ROUTE2042.setToNode("Stop_l_metatarsal_RotationInterpolator")

Group1942.addChildren(ROUTE2042)
ROUTE2043 = ROUTE()
ROUTE2043.setFromField("fraction_changed")
ROUTE2043.setFromNode("StopTimer")
ROUTE2043.setToField("set_fraction")
ROUTE2043.setToNode("Stop_r_hip_RotationInterpolator")

Group1942.addChildren(ROUTE2043)
ROUTE2044 = ROUTE()
ROUTE2044.setFromField("fraction_changed")
ROUTE2044.setFromNode("StopTimer")
ROUTE2044.setToField("set_fraction")
ROUTE2044.setToNode("Stop_r_knee_RotationInterpolator")

Group1942.addChildren(ROUTE2044)
ROUTE2045 = ROUTE()
ROUTE2045.setFromField("fraction_changed")
ROUTE2045.setFromNode("StopTimer")
ROUTE2045.setToField("set_fraction")
ROUTE2045.setToNode("Stop_r_ankle_RotationInterpolator")

Group1942.addChildren(ROUTE2045)
ROUTE2046 = ROUTE()
ROUTE2046.setFromField("fraction_changed")
ROUTE2046.setFromNode("StopTimer")
ROUTE2046.setToField("set_fraction")
ROUTE2046.setToNode("Stop_r_subtalar_RotationInterpolator")

Group1942.addChildren(ROUTE2046)
ROUTE2047 = ROUTE()
ROUTE2047.setFromField("fraction_changed")
ROUTE2047.setFromNode("StopTimer")
ROUTE2047.setToField("set_fraction")
ROUTE2047.setToNode("Stop_r_midtarsal_RotationInterpolator")

Group1942.addChildren(ROUTE2047)
ROUTE2048 = ROUTE()
ROUTE2048.setFromField("fraction_changed")
ROUTE2048.setFromNode("StopTimer")
ROUTE2048.setToField("set_fraction")
ROUTE2048.setToNode("Stop_r_metatarsal_RotationInterpolator")

Group1942.addChildren(ROUTE2048)
ROUTE2049 = ROUTE()
ROUTE2049.setFromField("fraction_changed")
ROUTE2049.setFromNode("StopTimer")
ROUTE2049.setToField("set_fraction")
ROUTE2049.setToNode("Stop_vl5_RotationInterpolator")

Group1942.addChildren(ROUTE2049)
ROUTE2050 = ROUTE()
ROUTE2050.setFromField("fraction_changed")
ROUTE2050.setFromNode("StopTimer")
ROUTE2050.setToField("set_fraction")
ROUTE2050.setToNode("Stop_vl4_RotationInterpolator")

Group1942.addChildren(ROUTE2050)
ROUTE2051 = ROUTE()
ROUTE2051.setFromField("fraction_changed")
ROUTE2051.setFromNode("StopTimer")
ROUTE2051.setToField("set_fraction")
ROUTE2051.setToNode("Stop_vl3_RotationInterpolator")

Group1942.addChildren(ROUTE2051)
ROUTE2052 = ROUTE()
ROUTE2052.setFromField("fraction_changed")
ROUTE2052.setFromNode("StopTimer")
ROUTE2052.setToField("set_fraction")
ROUTE2052.setToNode("Stop_vl2_RotationInterpolator")

Group1942.addChildren(ROUTE2052)
ROUTE2053 = ROUTE()
ROUTE2053.setFromField("fraction_changed")
ROUTE2053.setFromNode("StopTimer")
ROUTE2053.setToField("set_fraction")
ROUTE2053.setToNode("Stop_vl1_RotationInterpolator")

Group1942.addChildren(ROUTE2053)
ROUTE2054 = ROUTE()
ROUTE2054.setFromField("fraction_changed")
ROUTE2054.setFromNode("StopTimer")
ROUTE2054.setToField("set_fraction")
ROUTE2054.setToNode("Stop_vt12_RotationInterpolator")

Group1942.addChildren(ROUTE2054)
ROUTE2055 = ROUTE()
ROUTE2055.setFromField("fraction_changed")
ROUTE2055.setFromNode("StopTimer")
ROUTE2055.setToField("set_fraction")
ROUTE2055.setToNode("Stop_vt11_RotationInterpolator")

Group1942.addChildren(ROUTE2055)
ROUTE2056 = ROUTE()
ROUTE2056.setFromField("fraction_changed")
ROUTE2056.setFromNode("StopTimer")
ROUTE2056.setToField("set_fraction")
ROUTE2056.setToNode("Stop_vt10_RotationInterpolator")

Group1942.addChildren(ROUTE2056)
ROUTE2057 = ROUTE()
ROUTE2057.setFromField("fraction_changed")
ROUTE2057.setFromNode("StopTimer")
ROUTE2057.setToField("set_fraction")
ROUTE2057.setToNode("Stop_vt9_RotationInterpolator")

Group1942.addChildren(ROUTE2057)
ROUTE2058 = ROUTE()
ROUTE2058.setFromField("fraction_changed")
ROUTE2058.setFromNode("StopTimer")
ROUTE2058.setToField("set_fraction")
ROUTE2058.setToNode("Stop_vt8_RotationInterpolator")

Group1942.addChildren(ROUTE2058)
ROUTE2059 = ROUTE()
ROUTE2059.setFromField("fraction_changed")
ROUTE2059.setFromNode("StopTimer")
ROUTE2059.setToField("set_fraction")
ROUTE2059.setToNode("Stop_vt7_RotationInterpolator")

Group1942.addChildren(ROUTE2059)
ROUTE2060 = ROUTE()
ROUTE2060.setFromField("fraction_changed")
ROUTE2060.setFromNode("StopTimer")
ROUTE2060.setToField("set_fraction")
ROUTE2060.setToNode("Stop_vt6_RotationInterpolator")

Group1942.addChildren(ROUTE2060)
ROUTE2061 = ROUTE()
ROUTE2061.setFromField("fraction_changed")
ROUTE2061.setFromNode("StopTimer")
ROUTE2061.setToField("set_fraction")
ROUTE2061.setToNode("Stop_vt5_RotationInterpolator")

Group1942.addChildren(ROUTE2061)
ROUTE2062 = ROUTE()
ROUTE2062.setFromField("fraction_changed")
ROUTE2062.setFromNode("StopTimer")
ROUTE2062.setToField("set_fraction")
ROUTE2062.setToNode("Stop_vt4_RotationInterpolator")

Group1942.addChildren(ROUTE2062)
ROUTE2063 = ROUTE()
ROUTE2063.setFromField("fraction_changed")
ROUTE2063.setFromNode("StopTimer")
ROUTE2063.setToField("set_fraction")
ROUTE2063.setToNode("Stop_vt3_RotationInterpolator")

Group1942.addChildren(ROUTE2063)
ROUTE2064 = ROUTE()
ROUTE2064.setFromField("fraction_changed")
ROUTE2064.setFromNode("StopTimer")
ROUTE2064.setToField("set_fraction")
ROUTE2064.setToNode("Stop_vt2_RotationInterpolator")

Group1942.addChildren(ROUTE2064)
ROUTE2065 = ROUTE()
ROUTE2065.setFromField("fraction_changed")
ROUTE2065.setFromNode("StopTimer")
ROUTE2065.setToField("set_fraction")
ROUTE2065.setToNode("Stop_vt1_RotationInterpolator")

Group1942.addChildren(ROUTE2065)
ROUTE2066 = ROUTE()
ROUTE2066.setFromField("fraction_changed")
ROUTE2066.setFromNode("StopTimer")
ROUTE2066.setToField("set_fraction")
ROUTE2066.setToNode("Stop_vc7_RotationInterpolator")

Group1942.addChildren(ROUTE2066)
ROUTE2067 = ROUTE()
ROUTE2067.setFromField("fraction_changed")
ROUTE2067.setFromNode("StopTimer")
ROUTE2067.setToField("set_fraction")
ROUTE2067.setToNode("Stop_vc6_RotationInterpolator")

Group1942.addChildren(ROUTE2067)
ROUTE2068 = ROUTE()
ROUTE2068.setFromField("fraction_changed")
ROUTE2068.setFromNode("StopTimer")
ROUTE2068.setToField("set_fraction")
ROUTE2068.setToNode("Stop_vc5_RotationInterpolator")

Group1942.addChildren(ROUTE2068)
ROUTE2069 = ROUTE()
ROUTE2069.setFromField("fraction_changed")
ROUTE2069.setFromNode("StopTimer")
ROUTE2069.setToField("set_fraction")
ROUTE2069.setToNode("Stop_vc4_RotationInterpolator")

Group1942.addChildren(ROUTE2069)
ROUTE2070 = ROUTE()
ROUTE2070.setFromField("fraction_changed")
ROUTE2070.setFromNode("StopTimer")
ROUTE2070.setToField("set_fraction")
ROUTE2070.setToNode("Stop_vc3_RotationInterpolator")

Group1942.addChildren(ROUTE2070)
ROUTE2071 = ROUTE()
ROUTE2071.setFromField("fraction_changed")
ROUTE2071.setFromNode("StopTimer")
ROUTE2071.setToField("set_fraction")
ROUTE2071.setToNode("Stop_vc2_RotationInterpolator")

Group1942.addChildren(ROUTE2071)
ROUTE2072 = ROUTE()
ROUTE2072.setFromField("fraction_changed")
ROUTE2072.setFromNode("StopTimer")
ROUTE2072.setToField("set_fraction")
ROUTE2072.setToNode("Stop_vc1_RotationInterpolator")

Group1942.addChildren(ROUTE2072)
ROUTE2073 = ROUTE()
ROUTE2073.setFromField("fraction_changed")
ROUTE2073.setFromNode("StopTimer")
ROUTE2073.setToField("set_fraction")
ROUTE2073.setToNode("Stop_skullbase_RotationInterpolator")

Group1942.addChildren(ROUTE2073)
ROUTE2074 = ROUTE()
ROUTE2074.setFromField("fraction_changed")
ROUTE2074.setFromNode("StopTimer")
ROUTE2074.setToField("set_fraction")
ROUTE2074.setToNode("Stop_l_eyeball_joint_RotationInterpolator")

Group1942.addChildren(ROUTE2074)
ROUTE2075 = ROUTE()
ROUTE2075.setFromField("fraction_changed")
ROUTE2075.setFromNode("StopTimer")
ROUTE2075.setToField("set_fraction")
ROUTE2075.setToNode("Stop_r_eyeball_joint_RotationInterpolator")

Group1942.addChildren(ROUTE2075)
ROUTE2076 = ROUTE()
ROUTE2076.setFromField("fraction_changed")
ROUTE2076.setFromNode("StopTimer")
ROUTE2076.setToField("set_fraction")
ROUTE2076.setToNode("Stop_l_sternoclavicular_RotationInterpolator")

Group1942.addChildren(ROUTE2076)
ROUTE2077 = ROUTE()
ROUTE2077.setFromField("fraction_changed")
ROUTE2077.setFromNode("StopTimer")
ROUTE2077.setToField("set_fraction")
ROUTE2077.setToNode("Stop_l_acromioclavicular_RotationInterpolator")

Group1942.addChildren(ROUTE2077)
ROUTE2078 = ROUTE()
ROUTE2078.setFromField("fraction_changed")
ROUTE2078.setFromNode("StopTimer")
ROUTE2078.setToField("set_fraction")
ROUTE2078.setToNode("Stop_l_shoulder_RotationInterpolator")

Group1942.addChildren(ROUTE2078)
ROUTE2079 = ROUTE()
ROUTE2079.setFromField("fraction_changed")
ROUTE2079.setFromNode("StopTimer")
ROUTE2079.setToField("set_fraction")
ROUTE2079.setToNode("Stop_l_elbow_RotationInterpolator")

Group1942.addChildren(ROUTE2079)
ROUTE2080 = ROUTE()
ROUTE2080.setFromField("fraction_changed")
ROUTE2080.setFromNode("StopTimer")
ROUTE2080.setToField("set_fraction")
ROUTE2080.setToNode("Stop_l_wrist_RotationInterpolator")

Group1942.addChildren(ROUTE2080)
ROUTE2081 = ROUTE()
ROUTE2081.setFromField("fraction_changed")
ROUTE2081.setFromNode("StopTimer")
ROUTE2081.setToField("set_fraction")
ROUTE2081.setToNode("Stop_l_thumb1_RotationInterpolator")

Group1942.addChildren(ROUTE2081)
ROUTE2082 = ROUTE()
ROUTE2082.setFromField("fraction_changed")
ROUTE2082.setFromNode("StopTimer")
ROUTE2082.setToField("set_fraction")
ROUTE2082.setToNode("Stop_l_thumb2_RotationInterpolator")

Group1942.addChildren(ROUTE2082)
ROUTE2083 = ROUTE()
ROUTE2083.setFromField("fraction_changed")
ROUTE2083.setFromNode("StopTimer")
ROUTE2083.setToField("set_fraction")
ROUTE2083.setToNode("Stop_l_thumb3_RotationInterpolator")

Group1942.addChildren(ROUTE2083)
ROUTE2084 = ROUTE()
ROUTE2084.setFromField("fraction_changed")
ROUTE2084.setFromNode("StopTimer")
ROUTE2084.setToField("set_fraction")
ROUTE2084.setToNode("Stop_l_index0_RotationInterpolator")

Group1942.addChildren(ROUTE2084)
ROUTE2085 = ROUTE()
ROUTE2085.setFromField("fraction_changed")
ROUTE2085.setFromNode("StopTimer")
ROUTE2085.setToField("set_fraction")
ROUTE2085.setToNode("Stop_l_index1_RotationInterpolator")

Group1942.addChildren(ROUTE2085)
ROUTE2086 = ROUTE()
ROUTE2086.setFromField("fraction_changed")
ROUTE2086.setFromNode("StopTimer")
ROUTE2086.setToField("set_fraction")
ROUTE2086.setToNode("Stop_l_index2_RotationInterpolator")

Group1942.addChildren(ROUTE2086)
ROUTE2087 = ROUTE()
ROUTE2087.setFromField("fraction_changed")
ROUTE2087.setFromNode("StopTimer")
ROUTE2087.setToField("set_fraction")
ROUTE2087.setToNode("Stop_l_index3_RotationInterpolator")

Group1942.addChildren(ROUTE2087)
ROUTE2088 = ROUTE()
ROUTE2088.setFromField("fraction_changed")
ROUTE2088.setFromNode("StopTimer")
ROUTE2088.setToField("set_fraction")
ROUTE2088.setToNode("Stop_l_middle0_RotationInterpolator")

Group1942.addChildren(ROUTE2088)
ROUTE2089 = ROUTE()
ROUTE2089.setFromField("fraction_changed")
ROUTE2089.setFromNode("StopTimer")
ROUTE2089.setToField("set_fraction")
ROUTE2089.setToNode("Stop_l_middle1_RotationInterpolator")

Group1942.addChildren(ROUTE2089)
ROUTE2090 = ROUTE()
ROUTE2090.setFromField("fraction_changed")
ROUTE2090.setFromNode("StopTimer")
ROUTE2090.setToField("set_fraction")
ROUTE2090.setToNode("Stop_l_middle2_RotationInterpolator")

Group1942.addChildren(ROUTE2090)
ROUTE2091 = ROUTE()
ROUTE2091.setFromField("fraction_changed")
ROUTE2091.setFromNode("StopTimer")
ROUTE2091.setToField("set_fraction")
ROUTE2091.setToNode("Stop_l_middle3_RotationInterpolator")

Group1942.addChildren(ROUTE2091)
ROUTE2092 = ROUTE()
ROUTE2092.setFromField("fraction_changed")
ROUTE2092.setFromNode("StopTimer")
ROUTE2092.setToField("set_fraction")
ROUTE2092.setToNode("Stop_l_ring0_RotationInterpolator")

Group1942.addChildren(ROUTE2092)
ROUTE2093 = ROUTE()
ROUTE2093.setFromField("fraction_changed")
ROUTE2093.setFromNode("StopTimer")
ROUTE2093.setToField("set_fraction")
ROUTE2093.setToNode("Stop_l_ring1_RotationInterpolator")

Group1942.addChildren(ROUTE2093)
ROUTE2094 = ROUTE()
ROUTE2094.setFromField("fraction_changed")
ROUTE2094.setFromNode("StopTimer")
ROUTE2094.setToField("set_fraction")
ROUTE2094.setToNode("Stop_l_ring2_RotationInterpolator")

Group1942.addChildren(ROUTE2094)
ROUTE2095 = ROUTE()
ROUTE2095.setFromField("fraction_changed")
ROUTE2095.setFromNode("StopTimer")
ROUTE2095.setToField("set_fraction")
ROUTE2095.setToNode("Stop_l_ring3_RotationInterpolator")

Group1942.addChildren(ROUTE2095)
ROUTE2096 = ROUTE()
ROUTE2096.setFromField("fraction_changed")
ROUTE2096.setFromNode("StopTimer")
ROUTE2096.setToField("set_fraction")
ROUTE2096.setToNode("Stop_l_pinky0_RotationInterpolator")

Group1942.addChildren(ROUTE2096)
ROUTE2097 = ROUTE()
ROUTE2097.setFromField("fraction_changed")
ROUTE2097.setFromNode("StopTimer")
ROUTE2097.setToField("set_fraction")
ROUTE2097.setToNode("Stop_l_pinky1_RotationInterpolator")

Group1942.addChildren(ROUTE2097)
ROUTE2098 = ROUTE()
ROUTE2098.setFromField("fraction_changed")
ROUTE2098.setFromNode("StopTimer")
ROUTE2098.setToField("set_fraction")
ROUTE2098.setToNode("Stop_l_pinky2_RotationInterpolator")

Group1942.addChildren(ROUTE2098)
ROUTE2099 = ROUTE()
ROUTE2099.setFromField("fraction_changed")
ROUTE2099.setFromNode("StopTimer")
ROUTE2099.setToField("set_fraction")
ROUTE2099.setToNode("Stop_l_pinky3_RotationInterpolator")

Group1942.addChildren(ROUTE2099)
ROUTE2100 = ROUTE()
ROUTE2100.setFromField("fraction_changed")
ROUTE2100.setFromNode("StopTimer")
ROUTE2100.setToField("set_fraction")
ROUTE2100.setToNode("Stop_r_sternoclavicular_RotationInterpolator")

Group1942.addChildren(ROUTE2100)
ROUTE2101 = ROUTE()
ROUTE2101.setFromField("fraction_changed")
ROUTE2101.setFromNode("StopTimer")
ROUTE2101.setToField("set_fraction")
ROUTE2101.setToNode("Stop_r_acromioclavicular_RotationInterpolator")

Group1942.addChildren(ROUTE2101)
ROUTE2102 = ROUTE()
ROUTE2102.setFromField("fraction_changed")
ROUTE2102.setFromNode("StopTimer")
ROUTE2102.setToField("set_fraction")
ROUTE2102.setToNode("Stop_r_shoulder_RotationInterpolator")

Group1942.addChildren(ROUTE2102)
ROUTE2103 = ROUTE()
ROUTE2103.setFromField("fraction_changed")
ROUTE2103.setFromNode("StopTimer")
ROUTE2103.setToField("set_fraction")
ROUTE2103.setToNode("Stop_r_elbow_RotationInterpolator")

Group1942.addChildren(ROUTE2103)
ROUTE2104 = ROUTE()
ROUTE2104.setFromField("fraction_changed")
ROUTE2104.setFromNode("StopTimer")
ROUTE2104.setToField("set_fraction")
ROUTE2104.setToNode("Stop_r_wrist_RotationInterpolator")

Group1942.addChildren(ROUTE2104)
ROUTE2105 = ROUTE()
ROUTE2105.setFromField("fraction_changed")
ROUTE2105.setFromNode("StopTimer")
ROUTE2105.setToField("set_fraction")
ROUTE2105.setToNode("Stop_r_thumb1_RotationInterpolator")

Group1942.addChildren(ROUTE2105)
ROUTE2106 = ROUTE()
ROUTE2106.setFromField("fraction_changed")
ROUTE2106.setFromNode("StopTimer")
ROUTE2106.setToField("set_fraction")
ROUTE2106.setToNode("Stop_r_thumb2_RotationInterpolator")

Group1942.addChildren(ROUTE2106)
ROUTE2107 = ROUTE()
ROUTE2107.setFromField("fraction_changed")
ROUTE2107.setFromNode("StopTimer")
ROUTE2107.setToField("set_fraction")
ROUTE2107.setToNode("Stop_r_thumb3_RotationInterpolator")

Group1942.addChildren(ROUTE2107)
ROUTE2108 = ROUTE()
ROUTE2108.setFromField("fraction_changed")
ROUTE2108.setFromNode("StopTimer")
ROUTE2108.setToField("set_fraction")
ROUTE2108.setToNode("Stop_r_index0_RotationInterpolator")

Group1942.addChildren(ROUTE2108)
ROUTE2109 = ROUTE()
ROUTE2109.setFromField("fraction_changed")
ROUTE2109.setFromNode("StopTimer")
ROUTE2109.setToField("set_fraction")
ROUTE2109.setToNode("Stop_r_index1_RotationInterpolator")

Group1942.addChildren(ROUTE2109)
ROUTE2110 = ROUTE()
ROUTE2110.setFromField("fraction_changed")
ROUTE2110.setFromNode("StopTimer")
ROUTE2110.setToField("set_fraction")
ROUTE2110.setToNode("Stop_r_index2_RotationInterpolator")

Group1942.addChildren(ROUTE2110)
ROUTE2111 = ROUTE()
ROUTE2111.setFromField("fraction_changed")
ROUTE2111.setFromNode("StopTimer")
ROUTE2111.setToField("set_fraction")
ROUTE2111.setToNode("Stop_r_index3_RotationInterpolator")

Group1942.addChildren(ROUTE2111)
ROUTE2112 = ROUTE()
ROUTE2112.setFromField("fraction_changed")
ROUTE2112.setFromNode("StopTimer")
ROUTE2112.setToField("set_fraction")
ROUTE2112.setToNode("Stop_r_middle0_RotationInterpolator")

Group1942.addChildren(ROUTE2112)
ROUTE2113 = ROUTE()
ROUTE2113.setFromField("fraction_changed")
ROUTE2113.setFromNode("StopTimer")
ROUTE2113.setToField("set_fraction")
ROUTE2113.setToNode("Stop_r_middle1_RotationInterpolator")

Group1942.addChildren(ROUTE2113)
ROUTE2114 = ROUTE()
ROUTE2114.setFromField("fraction_changed")
ROUTE2114.setFromNode("StopTimer")
ROUTE2114.setToField("set_fraction")
ROUTE2114.setToNode("Stop_r_middle2_RotationInterpolator")

Group1942.addChildren(ROUTE2114)
ROUTE2115 = ROUTE()
ROUTE2115.setFromField("fraction_changed")
ROUTE2115.setFromNode("StopTimer")
ROUTE2115.setToField("set_fraction")
ROUTE2115.setToNode("Stop_r_middle3_RotationInterpolator")

Group1942.addChildren(ROUTE2115)
ROUTE2116 = ROUTE()
ROUTE2116.setFromField("fraction_changed")
ROUTE2116.setFromNode("StopTimer")
ROUTE2116.setToField("set_fraction")
ROUTE2116.setToNode("Stop_r_ring0_RotationInterpolator")

Group1942.addChildren(ROUTE2116)
ROUTE2117 = ROUTE()
ROUTE2117.setFromField("fraction_changed")
ROUTE2117.setFromNode("StopTimer")
ROUTE2117.setToField("set_fraction")
ROUTE2117.setToNode("Stop_r_ring1_RotationInterpolator")

Group1942.addChildren(ROUTE2117)
ROUTE2118 = ROUTE()
ROUTE2118.setFromField("fraction_changed")
ROUTE2118.setFromNode("StopTimer")
ROUTE2118.setToField("set_fraction")
ROUTE2118.setToNode("Stop_r_ring2_RotationInterpolator")

Group1942.addChildren(ROUTE2118)
ROUTE2119 = ROUTE()
ROUTE2119.setFromField("fraction_changed")
ROUTE2119.setFromNode("StopTimer")
ROUTE2119.setToField("set_fraction")
ROUTE2119.setToNode("Stop_r_ring3_RotationInterpolator")

Group1942.addChildren(ROUTE2119)
ROUTE2120 = ROUTE()
ROUTE2120.setFromField("fraction_changed")
ROUTE2120.setFromNode("StopTimer")
ROUTE2120.setToField("set_fraction")
ROUTE2120.setToNode("Stop_r_pinky0_RotationInterpolator")

Group1942.addChildren(ROUTE2120)
ROUTE2121 = ROUTE()
ROUTE2121.setFromField("fraction_changed")
ROUTE2121.setFromNode("StopTimer")
ROUTE2121.setToField("set_fraction")
ROUTE2121.setToNode("Stop_r_pinky1_RotationInterpolator")

Group1942.addChildren(ROUTE2121)
ROUTE2122 = ROUTE()
ROUTE2122.setFromField("fraction_changed")
ROUTE2122.setFromNode("StopTimer")
ROUTE2122.setToField("set_fraction")
ROUTE2122.setToNode("Stop_r_pinky2_RotationInterpolator")

Group1942.addChildren(ROUTE2122)
ROUTE2123 = ROUTE()
ROUTE2123.setFromField("fraction_changed")
ROUTE2123.setFromNode("StopTimer")
ROUTE2123.setToField("set_fraction")
ROUTE2123.setToNode("Stop_r_pinky3_RotationInterpolator")

Group1942.addChildren(ROUTE2123)
ROUTE2124 = ROUTE()
ROUTE2124.setFromField("value_changed")
ROUTE2124.setFromNode("Stop_humanoid_root_TranslationInterpolator")
ROUTE2124.setToField("translation")
ROUTE2124.setToNode("hanim_humanoid_root")

Group1942.addChildren(ROUTE2124)
ROUTE2125 = ROUTE()
ROUTE2125.setFromField("value_changed")
ROUTE2125.setFromNode("Stop_humanoid_root_RotationInterpolator")
ROUTE2125.setToField("rotation")
ROUTE2125.setToNode("hanim_humanoid_root")

Group1942.addChildren(ROUTE2125)
ROUTE2126 = ROUTE()
ROUTE2126.setFromField("value_changed")
ROUTE2126.setFromNode("Stop_sacroiliac_RotationInterpolator")
ROUTE2126.setToField("rotation")
ROUTE2126.setToNode("hanim_sacroiliac")

Group1942.addChildren(ROUTE2126)
ROUTE2127 = ROUTE()
ROUTE2127.setFromField("value_changed")
ROUTE2127.setFromNode("Stop_l_hip_RotationInterpolator")
ROUTE2127.setToField("rotation")
ROUTE2127.setToNode("hanim_l_hip")

Group1942.addChildren(ROUTE2127)
ROUTE2128 = ROUTE()
ROUTE2128.setFromField("value_changed")
ROUTE2128.setFromNode("Stop_l_knee_RotationInterpolator")
ROUTE2128.setToField("rotation")
ROUTE2128.setToNode("hanim_l_knee")

Group1942.addChildren(ROUTE2128)
ROUTE2129 = ROUTE()
ROUTE2129.setFromField("value_changed")
ROUTE2129.setFromNode("Stop_l_ankle_RotationInterpolator")
ROUTE2129.setToField("rotation")
ROUTE2129.setToNode("hanim_l_ankle")

Group1942.addChildren(ROUTE2129)
ROUTE2130 = ROUTE()
ROUTE2130.setFromField("value_changed")
ROUTE2130.setFromNode("Stop_l_subtalar_RotationInterpolator")
ROUTE2130.setToField("rotation")
ROUTE2130.setToNode("hanim_l_subtalar")

Group1942.addChildren(ROUTE2130)
ROUTE2131 = ROUTE()
ROUTE2131.setFromField("value_changed")
ROUTE2131.setFromNode("Stop_l_midtarsal_RotationInterpolator")
ROUTE2131.setToField("rotation")
ROUTE2131.setToNode("hanim_l_midtarsal")

Group1942.addChildren(ROUTE2131)
ROUTE2132 = ROUTE()
ROUTE2132.setFromField("value_changed")
ROUTE2132.setFromNode("Stop_l_metatarsal_RotationInterpolator")
ROUTE2132.setToField("rotation")
ROUTE2132.setToNode("hanim_l_metatarsal")

Group1942.addChildren(ROUTE2132)
ROUTE2133 = ROUTE()
ROUTE2133.setFromField("value_changed")
ROUTE2133.setFromNode("Stop_r_hip_RotationInterpolator")
ROUTE2133.setToField("rotation")
ROUTE2133.setToNode("hanim_r_hip")

Group1942.addChildren(ROUTE2133)
ROUTE2134 = ROUTE()
ROUTE2134.setFromField("value_changed")
ROUTE2134.setFromNode("Stop_r_knee_RotationInterpolator")
ROUTE2134.setToField("rotation")
ROUTE2134.setToNode("hanim_r_knee")

Group1942.addChildren(ROUTE2134)
ROUTE2135 = ROUTE()
ROUTE2135.setFromField("value_changed")
ROUTE2135.setFromNode("Stop_r_ankle_RotationInterpolator")
ROUTE2135.setToField("rotation")
ROUTE2135.setToNode("hanim_r_ankle")

Group1942.addChildren(ROUTE2135)
ROUTE2136 = ROUTE()
ROUTE2136.setFromField("value_changed")
ROUTE2136.setFromNode("Stop_r_subtalar_RotationInterpolator")
ROUTE2136.setToField("rotation")
ROUTE2136.setToNode("hanim_r_subtalar")

Group1942.addChildren(ROUTE2136)
ROUTE2137 = ROUTE()
ROUTE2137.setFromField("value_changed")
ROUTE2137.setFromNode("Stop_r_midtarsal_RotationInterpolator")
ROUTE2137.setToField("rotation")
ROUTE2137.setToNode("hanim_r_midtarsal")

Group1942.addChildren(ROUTE2137)
ROUTE2138 = ROUTE()
ROUTE2138.setFromField("value_changed")
ROUTE2138.setFromNode("Stop_r_metatarsal_RotationInterpolator")
ROUTE2138.setToField("rotation")
ROUTE2138.setToNode("hanim_r_metatarsal")

Group1942.addChildren(ROUTE2138)
ROUTE2139 = ROUTE()
ROUTE2139.setFromField("value_changed")
ROUTE2139.setFromNode("Stop_vl5_RotationInterpolator")
ROUTE2139.setToField("rotation")
ROUTE2139.setToNode("hanim_vl5")

Group1942.addChildren(ROUTE2139)
ROUTE2140 = ROUTE()
ROUTE2140.setFromField("value_changed")
ROUTE2140.setFromNode("Stop_vl4_RotationInterpolator")
ROUTE2140.setToField("rotation")
ROUTE2140.setToNode("hanim_vl4")

Group1942.addChildren(ROUTE2140)
ROUTE2141 = ROUTE()
ROUTE2141.setFromField("value_changed")
ROUTE2141.setFromNode("Stop_vl3_RotationInterpolator")
ROUTE2141.setToField("rotation")
ROUTE2141.setToNode("hanim_vl3")

Group1942.addChildren(ROUTE2141)
ROUTE2142 = ROUTE()
ROUTE2142.setFromField("value_changed")
ROUTE2142.setFromNode("Stop_vl2_RotationInterpolator")
ROUTE2142.setToField("rotation")
ROUTE2142.setToNode("hanim_vl2")

Group1942.addChildren(ROUTE2142)
ROUTE2143 = ROUTE()
ROUTE2143.setFromField("value_changed")
ROUTE2143.setFromNode("Stop_vl1_RotationInterpolator")
ROUTE2143.setToField("rotation")
ROUTE2143.setToNode("hanim_vl1")

Group1942.addChildren(ROUTE2143)
ROUTE2144 = ROUTE()
ROUTE2144.setFromField("value_changed")
ROUTE2144.setFromNode("Stop_vt12_RotationInterpolator")
ROUTE2144.setToField("rotation")
ROUTE2144.setToNode("hanim_vt12")

Group1942.addChildren(ROUTE2144)
ROUTE2145 = ROUTE()
ROUTE2145.setFromField("value_changed")
ROUTE2145.setFromNode("Stop_vt11_RotationInterpolator")
ROUTE2145.setToField("rotation")
ROUTE2145.setToNode("hanim_vt11")

Group1942.addChildren(ROUTE2145)
ROUTE2146 = ROUTE()
ROUTE2146.setFromField("value_changed")
ROUTE2146.setFromNode("Stop_vt10_RotationInterpolator")
ROUTE2146.setToField("rotation")
ROUTE2146.setToNode("hanim_vt10")

Group1942.addChildren(ROUTE2146)
ROUTE2147 = ROUTE()
ROUTE2147.setFromField("value_changed")
ROUTE2147.setFromNode("Stop_vt9_RotationInterpolator")
ROUTE2147.setToField("rotation")
ROUTE2147.setToNode("hanim_vt9")

Group1942.addChildren(ROUTE2147)
ROUTE2148 = ROUTE()
ROUTE2148.setFromField("value_changed")
ROUTE2148.setFromNode("Stop_vt8_RotationInterpolator")
ROUTE2148.setToField("rotation")
ROUTE2148.setToNode("hanim_vt8")

Group1942.addChildren(ROUTE2148)
ROUTE2149 = ROUTE()
ROUTE2149.setFromField("value_changed")
ROUTE2149.setFromNode("Stop_vt7_RotationInterpolator")
ROUTE2149.setToField("rotation")
ROUTE2149.setToNode("hanim_vt7")

Group1942.addChildren(ROUTE2149)
ROUTE2150 = ROUTE()
ROUTE2150.setFromField("value_changed")
ROUTE2150.setFromNode("Stop_vt6_RotationInterpolator")
ROUTE2150.setToField("rotation")
ROUTE2150.setToNode("hanim_vt6")

Group1942.addChildren(ROUTE2150)
ROUTE2151 = ROUTE()
ROUTE2151.setFromField("value_changed")
ROUTE2151.setFromNode("Stop_vt5_RotationInterpolator")
ROUTE2151.setToField("rotation")
ROUTE2151.setToNode("hanim_vt5")

Group1942.addChildren(ROUTE2151)
ROUTE2152 = ROUTE()
ROUTE2152.setFromField("value_changed")
ROUTE2152.setFromNode("Stop_vt4_RotationInterpolator")
ROUTE2152.setToField("rotation")
ROUTE2152.setToNode("hanim_vt4")

Group1942.addChildren(ROUTE2152)
ROUTE2153 = ROUTE()
ROUTE2153.setFromField("value_changed")
ROUTE2153.setFromNode("Stop_vt3_RotationInterpolator")
ROUTE2153.setToField("rotation")
ROUTE2153.setToNode("hanim_vt3")

Group1942.addChildren(ROUTE2153)
ROUTE2154 = ROUTE()
ROUTE2154.setFromField("value_changed")
ROUTE2154.setFromNode("Stop_vt2_RotationInterpolator")
ROUTE2154.setToField("rotation")
ROUTE2154.setToNode("hanim_vt2")

Group1942.addChildren(ROUTE2154)
ROUTE2155 = ROUTE()
ROUTE2155.setFromField("value_changed")
ROUTE2155.setFromNode("Stop_vt1_RotationInterpolator")
ROUTE2155.setToField("rotation")
ROUTE2155.setToNode("hanim_vt1")

Group1942.addChildren(ROUTE2155)
ROUTE2156 = ROUTE()
ROUTE2156.setFromField("value_changed")
ROUTE2156.setFromNode("Stop_vc7_RotationInterpolator")
ROUTE2156.setToField("rotation")
ROUTE2156.setToNode("hanim_vc7")

Group1942.addChildren(ROUTE2156)
ROUTE2157 = ROUTE()
ROUTE2157.setFromField("value_changed")
ROUTE2157.setFromNode("Stop_vc6_RotationInterpolator")
ROUTE2157.setToField("rotation")
ROUTE2157.setToNode("hanim_vc6")

Group1942.addChildren(ROUTE2157)
ROUTE2158 = ROUTE()
ROUTE2158.setFromField("value_changed")
ROUTE2158.setFromNode("Stop_vc5_RotationInterpolator")
ROUTE2158.setToField("rotation")
ROUTE2158.setToNode("hanim_vc5")

Group1942.addChildren(ROUTE2158)
ROUTE2159 = ROUTE()
ROUTE2159.setFromField("value_changed")
ROUTE2159.setFromNode("Stop_vc4_RotationInterpolator")
ROUTE2159.setToField("rotation")
ROUTE2159.setToNode("hanim_vc4")

Group1942.addChildren(ROUTE2159)
ROUTE2160 = ROUTE()
ROUTE2160.setFromField("value_changed")
ROUTE2160.setFromNode("Stop_vc3_RotationInterpolator")
ROUTE2160.setToField("rotation")
ROUTE2160.setToNode("hanim_vc3")

Group1942.addChildren(ROUTE2160)
ROUTE2161 = ROUTE()
ROUTE2161.setFromField("value_changed")
ROUTE2161.setFromNode("Stop_vc2_RotationInterpolator")
ROUTE2161.setToField("rotation")
ROUTE2161.setToNode("hanim_vc2")

Group1942.addChildren(ROUTE2161)
ROUTE2162 = ROUTE()
ROUTE2162.setFromField("value_changed")
ROUTE2162.setFromNode("Stop_vc1_RotationInterpolator")
ROUTE2162.setToField("rotation")
ROUTE2162.setToNode("hanim_vc1")

Group1942.addChildren(ROUTE2162)
ROUTE2163 = ROUTE()
ROUTE2163.setFromField("value_changed")
ROUTE2163.setFromNode("Stop_skullbase_RotationInterpolator")
ROUTE2163.setToField("rotation")
ROUTE2163.setToNode("hanim_skullbase")

Group1942.addChildren(ROUTE2163)
ROUTE2164 = ROUTE()
ROUTE2164.setFromField("value_changed")
ROUTE2164.setFromNode("Stop_l_eyeball_joint_RotationInterpolator")
ROUTE2164.setToField("rotation")
ROUTE2164.setToNode("hanim_l_eyeball_joint")

Group1942.addChildren(ROUTE2164)
ROUTE2165 = ROUTE()
ROUTE2165.setFromField("value_changed")
ROUTE2165.setFromNode("Stop_r_eyeball_joint_RotationInterpolator")
ROUTE2165.setToField("rotation")
ROUTE2165.setToNode("hanim_r_eyeball_joint")

Group1942.addChildren(ROUTE2165)
ROUTE2166 = ROUTE()
ROUTE2166.setFromField("value_changed")
ROUTE2166.setFromNode("Stop_l_sternoclavicular_RotationInterpolator")
ROUTE2166.setToField("rotation")
ROUTE2166.setToNode("hanim_l_sternoclavicular")

Group1942.addChildren(ROUTE2166)
ROUTE2167 = ROUTE()
ROUTE2167.setFromField("value_changed")
ROUTE2167.setFromNode("Stop_l_acromioclavicular_RotationInterpolator")
ROUTE2167.setToField("rotation")
ROUTE2167.setToNode("hanim_l_acromioclavicular")

Group1942.addChildren(ROUTE2167)
ROUTE2168 = ROUTE()
ROUTE2168.setFromField("value_changed")
ROUTE2168.setFromNode("Stop_l_shoulder_RotationInterpolator")
ROUTE2168.setToField("rotation")
ROUTE2168.setToNode("hanim_l_shoulder")

Group1942.addChildren(ROUTE2168)
ROUTE2169 = ROUTE()
ROUTE2169.setFromField("value_changed")
ROUTE2169.setFromNode("Stop_l_elbow_RotationInterpolator")
ROUTE2169.setToField("rotation")
ROUTE2169.setToNode("hanim_l_elbow")

Group1942.addChildren(ROUTE2169)
ROUTE2170 = ROUTE()
ROUTE2170.setFromField("value_changed")
ROUTE2170.setFromNode("Stop_l_wrist_RotationInterpolator")
ROUTE2170.setToField("rotation")
ROUTE2170.setToNode("hanim_l_wrist")

Group1942.addChildren(ROUTE2170)
ROUTE2171 = ROUTE()
ROUTE2171.setFromField("value_changed")
ROUTE2171.setFromNode("Stop_l_thumb1_RotationInterpolator")
ROUTE2171.setToField("rotation")
ROUTE2171.setToNode("hanim_l_thumb1")

Group1942.addChildren(ROUTE2171)
ROUTE2172 = ROUTE()
ROUTE2172.setFromField("value_changed")
ROUTE2172.setFromNode("Stop_l_thumb2_RotationInterpolator")
ROUTE2172.setToField("rotation")
ROUTE2172.setToNode("hanim_l_thumb2")

Group1942.addChildren(ROUTE2172)
ROUTE2173 = ROUTE()
ROUTE2173.setFromField("value_changed")
ROUTE2173.setFromNode("Stop_l_thumb3_RotationInterpolator")
ROUTE2173.setToField("rotation")
ROUTE2173.setToNode("hanim_l_thumb3")

Group1942.addChildren(ROUTE2173)
ROUTE2174 = ROUTE()
ROUTE2174.setFromField("value_changed")
ROUTE2174.setFromNode("Stop_l_index0_RotationInterpolator")
ROUTE2174.setToField("rotation")
ROUTE2174.setToNode("hanim_l_index0")

Group1942.addChildren(ROUTE2174)
ROUTE2175 = ROUTE()
ROUTE2175.setFromField("value_changed")
ROUTE2175.setFromNode("Stop_l_index1_RotationInterpolator")
ROUTE2175.setToField("rotation")
ROUTE2175.setToNode("hanim_l_index1")

Group1942.addChildren(ROUTE2175)
ROUTE2176 = ROUTE()
ROUTE2176.setFromField("value_changed")
ROUTE2176.setFromNode("Stop_l_index2_RotationInterpolator")
ROUTE2176.setToField("rotation")
ROUTE2176.setToNode("hanim_l_index2")

Group1942.addChildren(ROUTE2176)
ROUTE2177 = ROUTE()
ROUTE2177.setFromField("value_changed")
ROUTE2177.setFromNode("Stop_l_index3_RotationInterpolator")
ROUTE2177.setToField("rotation")
ROUTE2177.setToNode("hanim_l_index3")

Group1942.addChildren(ROUTE2177)
ROUTE2178 = ROUTE()
ROUTE2178.setFromField("value_changed")
ROUTE2178.setFromNode("Stop_l_middle0_RotationInterpolator")
ROUTE2178.setToField("rotation")
ROUTE2178.setToNode("hanim_l_middle0")

Group1942.addChildren(ROUTE2178)
ROUTE2179 = ROUTE()
ROUTE2179.setFromField("value_changed")
ROUTE2179.setFromNode("Stop_l_middle1_RotationInterpolator")
ROUTE2179.setToField("rotation")
ROUTE2179.setToNode("hanim_l_middle1")

Group1942.addChildren(ROUTE2179)
ROUTE2180 = ROUTE()
ROUTE2180.setFromField("value_changed")
ROUTE2180.setFromNode("Stop_l_middle2_RotationInterpolator")
ROUTE2180.setToField("rotation")
ROUTE2180.setToNode("hanim_l_middle2")

Group1942.addChildren(ROUTE2180)
ROUTE2181 = ROUTE()
ROUTE2181.setFromField("value_changed")
ROUTE2181.setFromNode("Stop_l_middle3_RotationInterpolator")
ROUTE2181.setToField("rotation")
ROUTE2181.setToNode("hanim_l_middle3")

Group1942.addChildren(ROUTE2181)
ROUTE2182 = ROUTE()
ROUTE2182.setFromField("value_changed")
ROUTE2182.setFromNode("Stop_l_ring0_RotationInterpolator")
ROUTE2182.setToField("rotation")
ROUTE2182.setToNode("hanim_l_ring0")

Group1942.addChildren(ROUTE2182)
ROUTE2183 = ROUTE()
ROUTE2183.setFromField("value_changed")
ROUTE2183.setFromNode("Stop_l_ring1_RotationInterpolator")
ROUTE2183.setToField("rotation")
ROUTE2183.setToNode("hanim_l_ring1")

Group1942.addChildren(ROUTE2183)
ROUTE2184 = ROUTE()
ROUTE2184.setFromField("value_changed")
ROUTE2184.setFromNode("Stop_l_ring2_RotationInterpolator")
ROUTE2184.setToField("rotation")
ROUTE2184.setToNode("hanim_l_ring2")

Group1942.addChildren(ROUTE2184)
ROUTE2185 = ROUTE()
ROUTE2185.setFromField("value_changed")
ROUTE2185.setFromNode("Stop_l_ring3_RotationInterpolator")
ROUTE2185.setToField("rotation")
ROUTE2185.setToNode("hanim_l_ring3")

Group1942.addChildren(ROUTE2185)
ROUTE2186 = ROUTE()
ROUTE2186.setFromField("value_changed")
ROUTE2186.setFromNode("Stop_l_pinky0_RotationInterpolator")
ROUTE2186.setToField("rotation")
ROUTE2186.setToNode("hanim_l_pinky0")

Group1942.addChildren(ROUTE2186)
ROUTE2187 = ROUTE()
ROUTE2187.setFromField("value_changed")
ROUTE2187.setFromNode("Stop_l_pinky1_RotationInterpolator")
ROUTE2187.setToField("rotation")
ROUTE2187.setToNode("hanim_l_pinky1")

Group1942.addChildren(ROUTE2187)
ROUTE2188 = ROUTE()
ROUTE2188.setFromField("value_changed")
ROUTE2188.setFromNode("Stop_l_pinky2_RotationInterpolator")
ROUTE2188.setToField("rotation")
ROUTE2188.setToNode("hanim_l_pinky2")

Group1942.addChildren(ROUTE2188)
ROUTE2189 = ROUTE()
ROUTE2189.setFromField("value_changed")
ROUTE2189.setFromNode("Stop_l_pinky3_RotationInterpolator")
ROUTE2189.setToField("rotation")
ROUTE2189.setToNode("hanim_l_pinky3")

Group1942.addChildren(ROUTE2189)
ROUTE2190 = ROUTE()
ROUTE2190.setFromField("value_changed")
ROUTE2190.setFromNode("Stop_r_sternoclavicular_RotationInterpolator")
ROUTE2190.setToField("rotation")
ROUTE2190.setToNode("hanim_r_sternoclavicular")

Group1942.addChildren(ROUTE2190)
ROUTE2191 = ROUTE()
ROUTE2191.setFromField("value_changed")
ROUTE2191.setFromNode("Stop_r_acromioclavicular_RotationInterpolator")
ROUTE2191.setToField("rotation")
ROUTE2191.setToNode("hanim_r_acromioclavicular")

Group1942.addChildren(ROUTE2191)
ROUTE2192 = ROUTE()
ROUTE2192.setFromField("value_changed")
ROUTE2192.setFromNode("Stop_r_shoulder_RotationInterpolator")
ROUTE2192.setToField("rotation")
ROUTE2192.setToNode("hanim_r_shoulder")

Group1942.addChildren(ROUTE2192)
ROUTE2193 = ROUTE()
ROUTE2193.setFromField("value_changed")
ROUTE2193.setFromNode("Stop_r_elbow_RotationInterpolator")
ROUTE2193.setToField("rotation")
ROUTE2193.setToNode("hanim_r_elbow")

Group1942.addChildren(ROUTE2193)
ROUTE2194 = ROUTE()
ROUTE2194.setFromField("value_changed")
ROUTE2194.setFromNode("Stop_r_wrist_RotationInterpolator")
ROUTE2194.setToField("rotation")
ROUTE2194.setToNode("hanim_r_wrist")

Group1942.addChildren(ROUTE2194)
ROUTE2195 = ROUTE()
ROUTE2195.setFromField("value_changed")
ROUTE2195.setFromNode("Stop_r_thumb1_RotationInterpolator")
ROUTE2195.setToField("rotation")
ROUTE2195.setToNode("hanim_r_thumb1")

Group1942.addChildren(ROUTE2195)
ROUTE2196 = ROUTE()
ROUTE2196.setFromField("value_changed")
ROUTE2196.setFromNode("Stop_r_thumb2_RotationInterpolator")
ROUTE2196.setToField("rotation")
ROUTE2196.setToNode("hanim_r_thumb2")

Group1942.addChildren(ROUTE2196)
ROUTE2197 = ROUTE()
ROUTE2197.setFromField("value_changed")
ROUTE2197.setFromNode("Stop_r_thumb3_RotationInterpolator")
ROUTE2197.setToField("rotation")
ROUTE2197.setToNode("hanim_r_thumb3")

Group1942.addChildren(ROUTE2197)
ROUTE2198 = ROUTE()
ROUTE2198.setFromField("value_changed")
ROUTE2198.setFromNode("Stop_r_index0_RotationInterpolator")
ROUTE2198.setToField("rotation")
ROUTE2198.setToNode("hanim_r_index0")

Group1942.addChildren(ROUTE2198)
ROUTE2199 = ROUTE()
ROUTE2199.setFromField("value_changed")
ROUTE2199.setFromNode("Stop_r_index1_RotationInterpolator")
ROUTE2199.setToField("rotation")
ROUTE2199.setToNode("hanim_r_index1")

Group1942.addChildren(ROUTE2199)
ROUTE2200 = ROUTE()
ROUTE2200.setFromField("value_changed")
ROUTE2200.setFromNode("Stop_r_index2_RotationInterpolator")
ROUTE2200.setToField("rotation")
ROUTE2200.setToNode("hanim_r_index2")

Group1942.addChildren(ROUTE2200)
ROUTE2201 = ROUTE()
ROUTE2201.setFromField("value_changed")
ROUTE2201.setFromNode("Stop_r_index3_RotationInterpolator")
ROUTE2201.setToField("rotation")
ROUTE2201.setToNode("hanim_r_index3")

Group1942.addChildren(ROUTE2201)
ROUTE2202 = ROUTE()
ROUTE2202.setFromField("value_changed")
ROUTE2202.setFromNode("Stop_r_middle0_RotationInterpolator")
ROUTE2202.setToField("rotation")
ROUTE2202.setToNode("hanim_r_middle0")

Group1942.addChildren(ROUTE2202)
ROUTE2203 = ROUTE()
ROUTE2203.setFromField("value_changed")
ROUTE2203.setFromNode("Stop_r_middle1_RotationInterpolator")
ROUTE2203.setToField("rotation")
ROUTE2203.setToNode("hanim_r_middle1")

Group1942.addChildren(ROUTE2203)
ROUTE2204 = ROUTE()
ROUTE2204.setFromField("value_changed")
ROUTE2204.setFromNode("Stop_r_middle2_RotationInterpolator")
ROUTE2204.setToField("rotation")
ROUTE2204.setToNode("hanim_r_middle2")

Group1942.addChildren(ROUTE2204)
ROUTE2205 = ROUTE()
ROUTE2205.setFromField("value_changed")
ROUTE2205.setFromNode("Stop_r_middle3_RotationInterpolator")
ROUTE2205.setToField("rotation")
ROUTE2205.setToNode("hanim_r_middle3")

Group1942.addChildren(ROUTE2205)
ROUTE2206 = ROUTE()
ROUTE2206.setFromField("value_changed")
ROUTE2206.setFromNode("Stop_r_ring0_RotationInterpolator")
ROUTE2206.setToField("rotation")
ROUTE2206.setToNode("hanim_r_ring0")

Group1942.addChildren(ROUTE2206)
ROUTE2207 = ROUTE()
ROUTE2207.setFromField("value_changed")
ROUTE2207.setFromNode("Stop_r_ring1_RotationInterpolator")
ROUTE2207.setToField("rotation")
ROUTE2207.setToNode("hanim_r_ring1")

Group1942.addChildren(ROUTE2207)
ROUTE2208 = ROUTE()
ROUTE2208.setFromField("value_changed")
ROUTE2208.setFromNode("Stop_r_ring2_RotationInterpolator")
ROUTE2208.setToField("rotation")
ROUTE2208.setToNode("hanim_r_ring2")

Group1942.addChildren(ROUTE2208)
ROUTE2209 = ROUTE()
ROUTE2209.setFromField("value_changed")
ROUTE2209.setFromNode("Stop_r_ring3_RotationInterpolator")
ROUTE2209.setToField("rotation")
ROUTE2209.setToNode("hanim_r_ring3")

Group1942.addChildren(ROUTE2209)
ROUTE2210 = ROUTE()
ROUTE2210.setFromField("value_changed")
ROUTE2210.setFromNode("Stop_r_pinky0_RotationInterpolator")
ROUTE2210.setToField("rotation")
ROUTE2210.setToNode("hanim_r_pinky0")

Group1942.addChildren(ROUTE2210)
ROUTE2211 = ROUTE()
ROUTE2211.setFromField("value_changed")
ROUTE2211.setFromNode("Stop_r_pinky1_RotationInterpolator")
ROUTE2211.setToField("rotation")
ROUTE2211.setToNode("hanim_r_pinky1")

Group1942.addChildren(ROUTE2211)
ROUTE2212 = ROUTE()
ROUTE2212.setFromField("value_changed")
ROUTE2212.setFromNode("Stop_r_pinky2_RotationInterpolator")
ROUTE2212.setToField("rotation")
ROUTE2212.setToNode("hanim_r_pinky2")

Group1942.addChildren(ROUTE2212)
ROUTE2213 = ROUTE()
ROUTE2213.setFromField("value_changed")
ROUTE2213.setFromNode("Stop_r_pinky3_RotationInterpolator")
ROUTE2213.setToField("rotation")
ROUTE2213.setToNode("hanim_r_pinky3")

Group1942.addChildren(ROUTE2213)

Scene30.addChildren(Group1942)
Group2214 = Group()
Group2214.setDEF("StandAnimation")
TimeSensor2215 = TimeSensor()
TimeSensor2215.setDEF("StandTimer")
TimeSensor2215.setCycleInterval(5.73)
TimeSensor2215.setLoop(True)

Group2214.addChildren(TimeSensor2215)
OrientationInterpolator2216 = OrientationInterpolator()
OrientationInterpolator2216.setDEF("Stand_r_metatarsal_PitchInterpolator")
OrientationInterpolator2216.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2216.setKeyValue([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0])

Group2214.addChildren(OrientationInterpolator2216)
OrientationInterpolator2217 = OrientationInterpolator()
OrientationInterpolator2217.setDEF("Stand_r_ankle_RotationInterpolator")
OrientationInterpolator2217.setKey([0,0.5,1])
OrientationInterpolator2217.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2217)
OrientationInterpolator2218 = OrientationInterpolator()
OrientationInterpolator2218.setDEF("Stand_r_knee_RotationInterpolator")
OrientationInterpolator2218.setKey([0,0.5,1])
OrientationInterpolator2218.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2218)
OrientationInterpolator2219 = OrientationInterpolator()
OrientationInterpolator2219.setDEF("Stand_r_hip_RotationInterpolator")
OrientationInterpolator2219.setKey([0,0.5,1])
OrientationInterpolator2219.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2219)
OrientationInterpolator2220 = OrientationInterpolator()
OrientationInterpolator2220.setDEF("Stand_l_ankle_RotationInterpolator")
OrientationInterpolator2220.setKey([0,0.5,1])
OrientationInterpolator2220.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2220)
OrientationInterpolator2221 = OrientationInterpolator()
OrientationInterpolator2221.setDEF("Stand_l_knee_RotationInterpolator")
OrientationInterpolator2221.setKey([0,0.5,1])
OrientationInterpolator2221.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2221)
OrientationInterpolator2222 = OrientationInterpolator()
OrientationInterpolator2222.setDEF("Stand_l_hip_RotationInterpolator")
OrientationInterpolator2222.setKey([0,0.5,1])
OrientationInterpolator2222.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2222)
OrientationInterpolator2223 = OrientationInterpolator()
OrientationInterpolator2223.setDEF("Stand_r_wrist_RotationInterpolator")
OrientationInterpolator2223.setKey([0,0.5,1])
OrientationInterpolator2223.setKeyValue([0,0,1,0,0,0,-1,0.25,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2223)
OrientationInterpolator2224 = OrientationInterpolator()
OrientationInterpolator2224.setDEF("Stand_r_elbow_RotationInterpolator")
OrientationInterpolator2224.setKey([0,0.5,1])
OrientationInterpolator2224.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2224)
OrientationInterpolator2225 = OrientationInterpolator()
OrientationInterpolator2225.setDEF("Stand_r_shoulder_RotationInterpolator")
OrientationInterpolator2225.setKey([0,0.5,1])
OrientationInterpolator2225.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2225)
OrientationInterpolator2226 = OrientationInterpolator()
OrientationInterpolator2226.setDEF("Stand_l_wrist_RotationInterpolator")
OrientationInterpolator2226.setKey([0,0.5,1])
OrientationInterpolator2226.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2226)
OrientationInterpolator2227 = OrientationInterpolator()
OrientationInterpolator2227.setDEF("Stand_l_elbow_RotationInterpolator")
OrientationInterpolator2227.setKey([0,0.5,1])
OrientationInterpolator2227.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2227)
OrientationInterpolator2228 = OrientationInterpolator()
OrientationInterpolator2228.setDEF("Stand_l_shoulder_RotationInterpolator")
OrientationInterpolator2228.setKey([0,0.5,1])
OrientationInterpolator2228.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2228)
OrientationInterpolator2229 = OrientationInterpolator()
OrientationInterpolator2229.setDEF("Stand_head_RotationInterpolator")
OrientationInterpolator2229.setKey([0,0.5,1])
OrientationInterpolator2229.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2229)
OrientationInterpolator2230 = OrientationInterpolator()
OrientationInterpolator2230.setDEF("Stand_neck_RotationInterpolator")
OrientationInterpolator2230.setKey([0,0.5,1])
OrientationInterpolator2230.setKeyValue([0,0,1,0,-1,0,0,0.5,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2230)
OrientationInterpolator2231 = OrientationInterpolator()
OrientationInterpolator2231.setDEF("Stand_l_eyeball_RotationInterpolator")
OrientationInterpolator2231.setKey([0,0.4,0.7,1])
OrientationInterpolator2231.setKeyValue([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2231)
OrientationInterpolator2232 = OrientationInterpolator()
OrientationInterpolator2232.setDEF("Stand_r_eyeball_RotationInterpolator")
OrientationInterpolator2232.setKey([0,0.4,0.7,1])
OrientationInterpolator2232.setKeyValue([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2232)
OrientationInterpolator2233 = OrientationInterpolator()
OrientationInterpolator2233.setDEF("Stand_lower_body_RotationInterpolator")
OrientationInterpolator2233.setKey([0,0.5,1])
OrientationInterpolator2233.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2233)
OrientationInterpolator2234 = OrientationInterpolator()
OrientationInterpolator2234.setDEF("Stand_upper_body_RotationInterpolator")
OrientationInterpolator2234.setKey([0,0.5,1])
OrientationInterpolator2234.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2234)
OrientationInterpolator2235 = OrientationInterpolator()
OrientationInterpolator2235.setDEF("Stand_whole_body_RotationInterpolator")
OrientationInterpolator2235.setKey([0,0.5,1])
OrientationInterpolator2235.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2235)
PositionInterpolator2236 = PositionInterpolator()
PositionInterpolator2236.setDEF("Stand_whole_body_TranslationInterpolator")
PositionInterpolator2236.setKey([0,0.5,1])
PositionInterpolator2236.setKeyValue([0,0,0,0,0,0,0,0,0])

Group2214.addChildren(PositionInterpolator2236)
OrientationInterpolator2237 = OrientationInterpolator()
OrientationInterpolator2237.setDEF("Stand_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2237.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2237.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2237)
OrientationInterpolator2238 = OrientationInterpolator()
OrientationInterpolator2238.setDEF("Stand_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2238.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2238.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2238)
OrientationInterpolator2239 = OrientationInterpolator()
OrientationInterpolator2239.setDEF("Stand_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2239.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2239.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2239)
OrientationInterpolator2240 = OrientationInterpolator()
OrientationInterpolator2240.setDEF("Stand_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2240.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2240.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2240)
OrientationInterpolator2241 = OrientationInterpolator()
OrientationInterpolator2241.setDEF("Stand_sacroiliac_YawInterpolator")
OrientationInterpolator2241.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2241.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2241)
OrientationInterpolator2242 = OrientationInterpolator()
OrientationInterpolator2242.setDEF("Stand_vl5_YawInterpolator")
OrientationInterpolator2242.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2242.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2242)
OrientationInterpolator2243 = OrientationInterpolator()
OrientationInterpolator2243.setDEF("Stand_vc6_YawInterpolator")
OrientationInterpolator2243.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2243.setKeyValue([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0])

Group2214.addChildren(OrientationInterpolator2243)
OrientationInterpolator2244 = OrientationInterpolator()
OrientationInterpolator2244.setDEF("Stand_l_thumb1_PitchInterpolator")
OrientationInterpolator2244.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2244.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2244)
OrientationInterpolator2245 = OrientationInterpolator()
OrientationInterpolator2245.setDEF("Stand_r_thumb1_PitchInterpolator")
OrientationInterpolator2245.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2245.setKeyValue([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0])

Group2214.addChildren(OrientationInterpolator2245)
OrientationInterpolator2246 = OrientationInterpolator()
OrientationInterpolator2246.setDEF("Stand_r_index1_RollInterpolator")
OrientationInterpolator2246.setKey([0,0.2,0.4,0.5,0.8,1])
OrientationInterpolator2246.setKeyValue([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2246)
OrientationInterpolator2247 = OrientationInterpolator()
OrientationInterpolator2247.setDEF("Stand_r_index2_RollInterpolator")
OrientationInterpolator2247.setKey([0,0.2,0.4,0.5,0.8,1])
OrientationInterpolator2247.setKeyValue([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2247)
OrientationInterpolator2248 = OrientationInterpolator()
OrientationInterpolator2248.setDEF("Stand_r_index3_RollInterpolator")
OrientationInterpolator2248.setKey([0,0.2,0.4,0.5,0.8,1])
OrientationInterpolator2248.setKeyValue([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0])

Group2214.addChildren(OrientationInterpolator2248)
ROUTE2249 = ROUTE()
ROUTE2249.setFromField("fraction_changed")
ROUTE2249.setFromNode("StandTimer")
ROUTE2249.setToField("set_fraction")
ROUTE2249.setToNode("Stand_r_ankle_RotationInterpolator")

Group2214.addChildren(ROUTE2249)
ROUTE2250 = ROUTE()
ROUTE2250.setFromField("fraction_changed")
ROUTE2250.setFromNode("StandTimer")
ROUTE2250.setToField("set_fraction")
ROUTE2250.setToNode("Stand_r_knee_RotationInterpolator")

Group2214.addChildren(ROUTE2250)
ROUTE2251 = ROUTE()
ROUTE2251.setFromField("fraction_changed")
ROUTE2251.setFromNode("StandTimer")
ROUTE2251.setToField("set_fraction")
ROUTE2251.setToNode("Stand_r_hip_RotationInterpolator")

Group2214.addChildren(ROUTE2251)
ROUTE2252 = ROUTE()
ROUTE2252.setFromField("fraction_changed")
ROUTE2252.setFromNode("StandTimer")
ROUTE2252.setToField("set_fraction")
ROUTE2252.setToNode("Stand_l_ankle_RotationInterpolator")

Group2214.addChildren(ROUTE2252)
ROUTE2253 = ROUTE()
ROUTE2253.setFromField("fraction_changed")
ROUTE2253.setFromNode("StandTimer")
ROUTE2253.setToField("set_fraction")
ROUTE2253.setToNode("Stand_l_knee_RotationInterpolator")

Group2214.addChildren(ROUTE2253)
ROUTE2254 = ROUTE()
ROUTE2254.setFromField("fraction_changed")
ROUTE2254.setFromNode("StandTimer")
ROUTE2254.setToField("set_fraction")
ROUTE2254.setToNode("Stand_l_hip_RotationInterpolator")

Group2214.addChildren(ROUTE2254)
ROUTE2255 = ROUTE()
ROUTE2255.setFromField("fraction_changed")
ROUTE2255.setFromNode("StandTimer")
ROUTE2255.setToField("set_fraction")
ROUTE2255.setToNode("Stand_lower_body_RotationInterpolator")

Group2214.addChildren(ROUTE2255)
ROUTE2256 = ROUTE()
ROUTE2256.setFromField("fraction_changed")
ROUTE2256.setFromNode("StandTimer")
ROUTE2256.setToField("set_fraction")
ROUTE2256.setToNode("Stand_r_wrist_RotationInterpolator")

Group2214.addChildren(ROUTE2256)
ROUTE2257 = ROUTE()
ROUTE2257.setFromField("fraction_changed")
ROUTE2257.setFromNode("StandTimer")
ROUTE2257.setToField("set_fraction")
ROUTE2257.setToNode("Stand_r_elbow_RotationInterpolator")

Group2214.addChildren(ROUTE2257)
ROUTE2258 = ROUTE()
ROUTE2258.setFromField("fraction_changed")
ROUTE2258.setFromNode("StandTimer")
ROUTE2258.setToField("set_fraction")
ROUTE2258.setToNode("Stand_r_shoulder_RotationInterpolator")

Group2214.addChildren(ROUTE2258)
ROUTE2259 = ROUTE()
ROUTE2259.setFromField("fraction_changed")
ROUTE2259.setFromNode("StandTimer")
ROUTE2259.setToField("set_fraction")
ROUTE2259.setToNode("Stand_l_wrist_RotationInterpolator")

Group2214.addChildren(ROUTE2259)
ROUTE2260 = ROUTE()
ROUTE2260.setFromField("fraction_changed")
ROUTE2260.setFromNode("StandTimer")
ROUTE2260.setToField("set_fraction")
ROUTE2260.setToNode("Stand_l_elbow_RotationInterpolator")

Group2214.addChildren(ROUTE2260)
ROUTE2261 = ROUTE()
ROUTE2261.setFromField("fraction_changed")
ROUTE2261.setFromNode("StandTimer")
ROUTE2261.setToField("set_fraction")
ROUTE2261.setToNode("Stand_l_shoulder_RotationInterpolator")

Group2214.addChildren(ROUTE2261)
ROUTE2262 = ROUTE()
ROUTE2262.setFromField("fraction_changed")
ROUTE2262.setFromNode("StandTimer")
ROUTE2262.setToField("set_fraction")
ROUTE2262.setToNode("Stand_head_RotationInterpolator")

Group2214.addChildren(ROUTE2262)
ROUTE2263 = ROUTE()
ROUTE2263.setFromField("fraction_changed")
ROUTE2263.setFromNode("StandTimer")
ROUTE2263.setToField("set_fraction")
ROUTE2263.setToNode("Stand_neck_RotationInterpolator")

Group2214.addChildren(ROUTE2263)
ROUTE2264 = ROUTE()
ROUTE2264.setFromField("fraction_changed")
ROUTE2264.setFromNode("StandTimer")
ROUTE2264.setToField("set_fraction")
ROUTE2264.setToNode("Stand_l_eyeball_RotationInterpolator")

Group2214.addChildren(ROUTE2264)
ROUTE2265 = ROUTE()
ROUTE2265.setFromField("fraction_changed")
ROUTE2265.setFromNode("StandTimer")
ROUTE2265.setToField("set_fraction")
ROUTE2265.setToNode("Stand_r_eyeball_RotationInterpolator")

Group2214.addChildren(ROUTE2265)
ROUTE2266 = ROUTE()
ROUTE2266.setFromField("fraction_changed")
ROUTE2266.setFromNode("StandTimer")
ROUTE2266.setToField("set_fraction")
ROUTE2266.setToNode("Stand_upper_body_RotationInterpolator")

Group2214.addChildren(ROUTE2266)
ROUTE2267 = ROUTE()
ROUTE2267.setFromField("fraction_changed")
ROUTE2267.setFromNode("StandTimer")
ROUTE2267.setToField("set_fraction")
ROUTE2267.setToNode("Stand_whole_body_RotationInterpolator")

Group2214.addChildren(ROUTE2267)
ROUTE2268 = ROUTE()
ROUTE2268.setFromField("fraction_changed")
ROUTE2268.setFromNode("StandTimer")
ROUTE2268.setToField("set_fraction")
ROUTE2268.setToNode("Stand_whole_body_TranslationInterpolator")

Group2214.addChildren(ROUTE2268)
ROUTE2269 = ROUTE()
ROUTE2269.setFromField("fraction_changed")
ROUTE2269.setFromNode("StandTimer")
ROUTE2269.setToField("set_fraction")
ROUTE2269.setToNode("Stand_l_sternoclavicular_RollInterpolator")

Group2214.addChildren(ROUTE2269)
ROUTE2270 = ROUTE()
ROUTE2270.setFromField("fraction_changed")
ROUTE2270.setFromNode("StandTimer")
ROUTE2270.setToField("set_fraction")
ROUTE2270.setToNode("Stand_l_acromioclavicular_RollInterpolator")

Group2214.addChildren(ROUTE2270)
ROUTE2271 = ROUTE()
ROUTE2271.setFromField("fraction_changed")
ROUTE2271.setFromNode("StandTimer")
ROUTE2271.setToField("set_fraction")
ROUTE2271.setToNode("Stand_r_sternoclavicular_RollInterpolator")

Group2214.addChildren(ROUTE2271)
ROUTE2272 = ROUTE()
ROUTE2272.setFromField("fraction_changed")
ROUTE2272.setFromNode("StandTimer")
ROUTE2272.setToField("set_fraction")
ROUTE2272.setToNode("Stand_r_acromioclavicular_RollInterpolator")

Group2214.addChildren(ROUTE2272)
ROUTE2273 = ROUTE()
ROUTE2273.setFromField("fraction_changed")
ROUTE2273.setFromNode("StandTimer")
ROUTE2273.setToField("set_fraction")
ROUTE2273.setToNode("Stand_r_metatarsal_PitchInterpolator")

Group2214.addChildren(ROUTE2273)
ROUTE2274 = ROUTE()
ROUTE2274.setFromField("fraction_changed")
ROUTE2274.setFromNode("StandTimer")
ROUTE2274.setToField("set_fraction")
ROUTE2274.setToNode("Stand_sacroiliac_YawInterpolator")

Group2214.addChildren(ROUTE2274)
ROUTE2275 = ROUTE()
ROUTE2275.setFromField("fraction_changed")
ROUTE2275.setFromNode("StandTimer")
ROUTE2275.setToField("set_fraction")
ROUTE2275.setToNode("Stand_vl5_YawInterpolator")

Group2214.addChildren(ROUTE2275)
ROUTE2276 = ROUTE()
ROUTE2276.setFromField("fraction_changed")
ROUTE2276.setFromNode("StandTimer")
ROUTE2276.setToField("set_fraction")
ROUTE2276.setToNode("Stand_vc6_YawInterpolator")

Group2214.addChildren(ROUTE2276)
ROUTE2277 = ROUTE()
ROUTE2277.setFromField("fraction_changed")
ROUTE2277.setFromNode("StandTimer")
ROUTE2277.setToField("set_fraction")
ROUTE2277.setToNode("Stand_l_thumb1_PitchInterpolator")

Group2214.addChildren(ROUTE2277)
ROUTE2278 = ROUTE()
ROUTE2278.setFromField("fraction_changed")
ROUTE2278.setFromNode("StandTimer")
ROUTE2278.setToField("set_fraction")
ROUTE2278.setToNode("Stand_r_thumb1_PitchInterpolator")

Group2214.addChildren(ROUTE2278)
ROUTE2279 = ROUTE()
ROUTE2279.setFromField("fraction_changed")
ROUTE2279.setFromNode("StandTimer")
ROUTE2279.setToField("set_fraction")
ROUTE2279.setToNode("Stand_r_index1_RollInterpolator")

Group2214.addChildren(ROUTE2279)
ROUTE2280 = ROUTE()
ROUTE2280.setFromField("fraction_changed")
ROUTE2280.setFromNode("StandTimer")
ROUTE2280.setToField("set_fraction")
ROUTE2280.setToNode("Stand_r_index2_RollInterpolator")

Group2214.addChildren(ROUTE2280)
ROUTE2281 = ROUTE()
ROUTE2281.setFromField("fraction_changed")
ROUTE2281.setFromNode("StandTimer")
ROUTE2281.setToField("set_fraction")
ROUTE2281.setToNode("Stand_r_index3_RollInterpolator")

Group2214.addChildren(ROUTE2281)
ROUTE2282 = ROUTE()
ROUTE2282.setFromField("value_changed")
ROUTE2282.setFromNode("Stand_r_ankle_RotationInterpolator")
ROUTE2282.setToField("rotation")
ROUTE2282.setToNode("hanim_r_ankle")

Group2214.addChildren(ROUTE2282)
ROUTE2283 = ROUTE()
ROUTE2283.setFromField("value_changed")
ROUTE2283.setFromNode("Stand_r_knee_RotationInterpolator")
ROUTE2283.setToField("rotation")
ROUTE2283.setToNode("hanim_r_knee")

Group2214.addChildren(ROUTE2283)
ROUTE2284 = ROUTE()
ROUTE2284.setFromField("value_changed")
ROUTE2284.setFromNode("Stand_r_hip_RotationInterpolator")
ROUTE2284.setToField("rotation")
ROUTE2284.setToNode("hanim_r_hip")

Group2214.addChildren(ROUTE2284)
ROUTE2285 = ROUTE()
ROUTE2285.setFromField("value_changed")
ROUTE2285.setFromNode("Stand_l_ankle_RotationInterpolator")
ROUTE2285.setToField("rotation")
ROUTE2285.setToNode("hanim_l_ankle")

Group2214.addChildren(ROUTE2285)
ROUTE2286 = ROUTE()
ROUTE2286.setFromField("value_changed")
ROUTE2286.setFromNode("Stand_l_knee_RotationInterpolator")
ROUTE2286.setToField("rotation")
ROUTE2286.setToNode("hanim_l_knee")

Group2214.addChildren(ROUTE2286)
ROUTE2287 = ROUTE()
ROUTE2287.setFromField("value_changed")
ROUTE2287.setFromNode("Stand_l_hip_RotationInterpolator")
ROUTE2287.setToField("rotation")
ROUTE2287.setToNode("hanim_l_hip")

Group2214.addChildren(ROUTE2287)
ROUTE2288 = ROUTE()
ROUTE2288.setFromField("value_changed")
ROUTE2288.setFromNode("Stand_r_wrist_RotationInterpolator")
ROUTE2288.setToField("rotation")
ROUTE2288.setToNode("hanim_r_wrist")

Group2214.addChildren(ROUTE2288)
ROUTE2289 = ROUTE()
ROUTE2289.setFromField("value_changed")
ROUTE2289.setFromNode("Stand_r_elbow_RotationInterpolator")
ROUTE2289.setToField("rotation")
ROUTE2289.setToNode("hanim_r_elbow")

Group2214.addChildren(ROUTE2289)
ROUTE2290 = ROUTE()
ROUTE2290.setFromField("value_changed")
ROUTE2290.setFromNode("Stand_r_shoulder_RotationInterpolator")
ROUTE2290.setToField("rotation")
ROUTE2290.setToNode("hanim_r_shoulder")

Group2214.addChildren(ROUTE2290)
ROUTE2291 = ROUTE()
ROUTE2291.setFromField("value_changed")
ROUTE2291.setFromNode("Stand_l_wrist_RotationInterpolator")
ROUTE2291.setToField("rotation")
ROUTE2291.setToNode("hanim_l_wrist")

Group2214.addChildren(ROUTE2291)
ROUTE2292 = ROUTE()
ROUTE2292.setFromField("value_changed")
ROUTE2292.setFromNode("Stand_l_elbow_RotationInterpolator")
ROUTE2292.setToField("rotation")
ROUTE2292.setToNode("hanim_l_elbow")

Group2214.addChildren(ROUTE2292)
ROUTE2293 = ROUTE()
ROUTE2293.setFromField("value_changed")
ROUTE2293.setFromNode("Stand_l_shoulder_RotationInterpolator")
ROUTE2293.setToField("rotation")
ROUTE2293.setToNode("hanim_l_shoulder")

Group2214.addChildren(ROUTE2293)
ROUTE2294 = ROUTE()
ROUTE2294.setFromField("value_changed")
ROUTE2294.setFromNode("Stand_head_RotationInterpolator")
ROUTE2294.setToField("rotation")
ROUTE2294.setToNode("hanim_skullbase")

Group2214.addChildren(ROUTE2294)
ROUTE2295 = ROUTE()
ROUTE2295.setFromField("value_changed")
ROUTE2295.setFromNode("Stand_neck_RotationInterpolator")
ROUTE2295.setToField("rotation")
ROUTE2295.setToNode("hanim_vc7")

Group2214.addChildren(ROUTE2295)
ROUTE2296 = ROUTE()
ROUTE2296.setFromField("value_changed")
ROUTE2296.setFromNode("Stand_l_eyeball_RotationInterpolator")
ROUTE2296.setToField("rotation")
ROUTE2296.setToNode("hanim_l_eyeball_joint")

Group2214.addChildren(ROUTE2296)
ROUTE2297 = ROUTE()
ROUTE2297.setFromField("value_changed")
ROUTE2297.setFromNode("Stand_r_eyeball_RotationInterpolator")
ROUTE2297.setToField("rotation")
ROUTE2297.setToNode("hanim_r_eyeball_joint")

Group2214.addChildren(ROUTE2297)
ROUTE2298 = ROUTE()
ROUTE2298.setFromField("value_changed")
ROUTE2298.setFromNode("Stand_upper_body_RotationInterpolator")
ROUTE2298.setToField("rotation")
ROUTE2298.setToNode("hanim_vl1")

Group2214.addChildren(ROUTE2298)
ROUTE2299 = ROUTE()
ROUTE2299.setFromField("value_changed")
ROUTE2299.setFromNode("Stand_lower_body_RotationInterpolator")
ROUTE2299.setToField("rotation")
ROUTE2299.setToNode("hanim_sacroiliac")

Group2214.addChildren(ROUTE2299)
ROUTE2300 = ROUTE()
ROUTE2300.setFromField("value_changed")
ROUTE2300.setFromNode("Stand_whole_body_RotationInterpolator")
ROUTE2300.setToField("rotation")
ROUTE2300.setToNode("hanim_humanoid_root")

Group2214.addChildren(ROUTE2300)
ROUTE2301 = ROUTE()
ROUTE2301.setFromField("value_changed")
ROUTE2301.setFromNode("Stand_whole_body_TranslationInterpolator")
ROUTE2301.setToField("translation")
ROUTE2301.setToNode("hanim_humanoid_root")

Group2214.addChildren(ROUTE2301)
ROUTE2302 = ROUTE()
ROUTE2302.setFromField("value_changed")
ROUTE2302.setFromNode("Stand_l_sternoclavicular_RollInterpolator")
ROUTE2302.setToField("rotation")
ROUTE2302.setToNode("hanim_l_sternoclavicular")

Group2214.addChildren(ROUTE2302)
ROUTE2303 = ROUTE()
ROUTE2303.setFromField("value_changed")
ROUTE2303.setFromNode("Stand_l_acromioclavicular_RollInterpolator")
ROUTE2303.setToField("rotation")
ROUTE2303.setToNode("hanim_l_acromioclavicular")

Group2214.addChildren(ROUTE2303)
ROUTE2304 = ROUTE()
ROUTE2304.setFromField("value_changed")
ROUTE2304.setFromNode("Stand_r_sternoclavicular_RollInterpolator")
ROUTE2304.setToField("rotation")
ROUTE2304.setToNode("hanim_r_sternoclavicular")

Group2214.addChildren(ROUTE2304)
ROUTE2305 = ROUTE()
ROUTE2305.setFromField("value_changed")
ROUTE2305.setFromNode("Stand_r_acromioclavicular_RollInterpolator")
ROUTE2305.setToField("rotation")
ROUTE2305.setToNode("hanim_r_acromioclavicular")

Group2214.addChildren(ROUTE2305)
ROUTE2306 = ROUTE()
ROUTE2306.setFromField("value_changed")
ROUTE2306.setFromNode("Stand_r_metatarsal_PitchInterpolator")
ROUTE2306.setToField("rotation")
ROUTE2306.setToNode("hanim_l_metatarsal")

Group2214.addChildren(ROUTE2306)
ROUTE2307 = ROUTE()
ROUTE2307.setFromField("value_changed")
ROUTE2307.setFromNode("Stand_r_metatarsal_PitchInterpolator")
ROUTE2307.setToField("rotation")
ROUTE2307.setToNode("hanim_r_metatarsal")

Group2214.addChildren(ROUTE2307)
ROUTE2308 = ROUTE()
ROUTE2308.setFromField("value_changed")
ROUTE2308.setFromNode("Stand_sacroiliac_YawInterpolator")
ROUTE2308.setToField("rotation")
ROUTE2308.setToNode("hanim_sacroiliac")

Group2214.addChildren(ROUTE2308)
ROUTE2309 = ROUTE()
ROUTE2309.setFromField("value_changed")
ROUTE2309.setFromNode("Stand_vl5_YawInterpolator")
ROUTE2309.setToField("rotation")
ROUTE2309.setToNode("hanim_vl5")

Group2214.addChildren(ROUTE2309)
ROUTE2310 = ROUTE()
ROUTE2310.setFromField("value_changed")
ROUTE2310.setFromNode("Stand_vc6_YawInterpolator")
ROUTE2310.setToField("rotation")
ROUTE2310.setToNode("hanim_vc6")

Group2214.addChildren(ROUTE2310)
ROUTE2311 = ROUTE()
ROUTE2311.setFromField("value_changed")
ROUTE2311.setFromNode("Stand_l_thumb1_PitchInterpolator")
ROUTE2311.setToField("rotation")
ROUTE2311.setToNode("hanim_l_thumb1")

Group2214.addChildren(ROUTE2311)
ROUTE2312 = ROUTE()
ROUTE2312.setFromField("value_changed")
ROUTE2312.setFromNode("Stand_r_thumb1_PitchInterpolator")
ROUTE2312.setToField("rotation")
ROUTE2312.setToNode("hanim_r_thumb1")

Group2214.addChildren(ROUTE2312)
ROUTE2313 = ROUTE()
ROUTE2313.setFromField("value_changed")
ROUTE2313.setFromNode("Stand_r_index1_RollInterpolator")
ROUTE2313.setToField("rotation")
ROUTE2313.setToNode("hanim_r_index1")

Group2214.addChildren(ROUTE2313)
ROUTE2314 = ROUTE()
ROUTE2314.setFromField("value_changed")
ROUTE2314.setFromNode("Stand_r_index2_RollInterpolator")
ROUTE2314.setToField("rotation")
ROUTE2314.setToNode("hanim_r_index2")

Group2214.addChildren(ROUTE2314)
ROUTE2315 = ROUTE()
ROUTE2315.setFromField("value_changed")
ROUTE2315.setFromNode("Stand_r_index3_RollInterpolator")
ROUTE2315.setToField("rotation")
ROUTE2315.setToNode("hanim_r_index3")

Group2214.addChildren(ROUTE2315)
ROUTE2316 = ROUTE()
ROUTE2316.setFromField("value_changed")
ROUTE2316.setFromNode("Stand_r_index1_RollInterpolator")
ROUTE2316.setToField("rotation")
ROUTE2316.setToNode("hanim_r_middle1")

Group2214.addChildren(ROUTE2316)
ROUTE2317 = ROUTE()
ROUTE2317.setFromField("value_changed")
ROUTE2317.setFromNode("Stand_r_index2_RollInterpolator")
ROUTE2317.setToField("rotation")
ROUTE2317.setToNode("hanim_r_middle2")

Group2214.addChildren(ROUTE2317)
ROUTE2318 = ROUTE()
ROUTE2318.setFromField("value_changed")
ROUTE2318.setFromNode("Stand_r_index3_RollInterpolator")
ROUTE2318.setToField("rotation")
ROUTE2318.setToNode("hanim_r_middle3")

Group2214.addChildren(ROUTE2318)
ROUTE2319 = ROUTE()
ROUTE2319.setFromField("value_changed")
ROUTE2319.setFromNode("Stand_r_index1_RollInterpolator")
ROUTE2319.setToField("rotation")
ROUTE2319.setToNode("hanim_r_ring1")

Group2214.addChildren(ROUTE2319)
ROUTE2320 = ROUTE()
ROUTE2320.setFromField("value_changed")
ROUTE2320.setFromNode("Stand_r_index2_RollInterpolator")
ROUTE2320.setToField("rotation")
ROUTE2320.setToNode("hanim_r_ring2")

Group2214.addChildren(ROUTE2320)
ROUTE2321 = ROUTE()
ROUTE2321.setFromField("value_changed")
ROUTE2321.setFromNode("Stand_r_index3_RollInterpolator")
ROUTE2321.setToField("rotation")
ROUTE2321.setToNode("hanim_r_ring3")

Group2214.addChildren(ROUTE2321)
ROUTE2322 = ROUTE()
ROUTE2322.setFromField("value_changed")
ROUTE2322.setFromNode("Stand_r_index1_RollInterpolator")
ROUTE2322.setToField("rotation")
ROUTE2322.setToNode("hanim_r_pinky1")

Group2214.addChildren(ROUTE2322)
ROUTE2323 = ROUTE()
ROUTE2323.setFromField("value_changed")
ROUTE2323.setFromNode("Stand_r_index2_RollInterpolator")
ROUTE2323.setToField("rotation")
ROUTE2323.setToNode("hanim_r_pinky2")

Group2214.addChildren(ROUTE2323)
ROUTE2324 = ROUTE()
ROUTE2324.setFromField("value_changed")
ROUTE2324.setFromNode("Stand_r_index3_RollInterpolator")
ROUTE2324.setToField("rotation")
ROUTE2324.setToNode("hanim_r_pinky3")

Group2214.addChildren(ROUTE2324)

Scene30.addChildren(Group2214)
Group2325 = Group()
Group2325.setDEF("PitchesAnimation")
TimeSensor2326 = TimeSensor()
TimeSensor2326.setDEF("PitchTimer")
TimeSensor2326.setCycleInterval(5.73)
TimeSensor2326.setLoop(True)

Group2325.addChildren(TimeSensor2326)
OrientationInterpolator2327 = OrientationInterpolator()
OrientationInterpolator2327.setDEF("Pitch_r_metatarsal_PitchInterpolator")
OrientationInterpolator2327.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2327.setKeyValue([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])

Group2325.addChildren(OrientationInterpolator2327)
OrientationInterpolator2328 = OrientationInterpolator()
OrientationInterpolator2328.setDEF("Pitches_r_ankle_RotationInterpolator")
OrientationInterpolator2328.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2328.setKeyValue([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2328)
OrientationInterpolator2329 = OrientationInterpolator()
OrientationInterpolator2329.setDEF("Pitches_r_knee_RotationInterpolator")
OrientationInterpolator2329.setKey([0,0.5,1])
OrientationInterpolator2329.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2329)
OrientationInterpolator2330 = OrientationInterpolator()
OrientationInterpolator2330.setDEF("Pitches_r_hip_RotationInterpolator")
OrientationInterpolator2330.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2330.setKeyValue([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2330)
OrientationInterpolator2331 = OrientationInterpolator()
OrientationInterpolator2331.setDEF("Pitches_l_ankle_RotationInterpolator")
OrientationInterpolator2331.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2331.setKeyValue([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2331)
OrientationInterpolator2332 = OrientationInterpolator()
OrientationInterpolator2332.setDEF("Pitches_l_knee_RotationInterpolator")
OrientationInterpolator2332.setKey([0,0.5,1])
OrientationInterpolator2332.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2332)
OrientationInterpolator2333 = OrientationInterpolator()
OrientationInterpolator2333.setDEF("Pitches_l_hip_RotationInterpolator")
OrientationInterpolator2333.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2333.setKeyValue([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2333)
OrientationInterpolator2334 = OrientationInterpolator()
OrientationInterpolator2334.setDEF("Pitches_r_wrist_RotationInterpolator")
OrientationInterpolator2334.setKey([0,0.5,1])
OrientationInterpolator2334.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2334)
OrientationInterpolator2335 = OrientationInterpolator()
OrientationInterpolator2335.setDEF("Pitches_r_elbow_RotationInterpolator")
OrientationInterpolator2335.setKey([0,0.5,1])
OrientationInterpolator2335.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2335)
OrientationInterpolator2336 = OrientationInterpolator()
OrientationInterpolator2336.setDEF("Pitches_r_shoulder_RotationInterpolator")
OrientationInterpolator2336.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2336.setKeyValue([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2336)
OrientationInterpolator2337 = OrientationInterpolator()
OrientationInterpolator2337.setDEF("Pitches_l_wrist_RotationInterpolator")
OrientationInterpolator2337.setKey([0,0.5,1])
OrientationInterpolator2337.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2337)
OrientationInterpolator2338 = OrientationInterpolator()
OrientationInterpolator2338.setDEF("Pitches_l_elbow_RotationInterpolator")
OrientationInterpolator2338.setKey([0,0.5,1])
OrientationInterpolator2338.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2338)
OrientationInterpolator2339 = OrientationInterpolator()
OrientationInterpolator2339.setDEF("Pitches_l_shoulder_RotationInterpolator")
OrientationInterpolator2339.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2339.setKeyValue([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2339)
OrientationInterpolator2340 = OrientationInterpolator()
OrientationInterpolator2340.setDEF("Pitches_head_RotationInterpolator")
OrientationInterpolator2340.setKey([0,0.5,1])
OrientationInterpolator2340.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2340)
OrientationInterpolator2341 = OrientationInterpolator()
OrientationInterpolator2341.setDEF("Pitches_neck_RotationInterpolator")
OrientationInterpolator2341.setKey([0,0.25,0.55,1])
OrientationInterpolator2341.setKeyValue([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2341)
OrientationInterpolator2342 = OrientationInterpolator()
OrientationInterpolator2342.setDEF("Pitches_lower_body_RotationInterpolator")
OrientationInterpolator2342.setKey([0,0.5,1])
OrientationInterpolator2342.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2342)
OrientationInterpolator2343 = OrientationInterpolator()
OrientationInterpolator2343.setDEF("Pitches_upper_body_RotationInterpolator")
OrientationInterpolator2343.setKey([0,0.5,1])
OrientationInterpolator2343.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2343)
OrientationInterpolator2344 = OrientationInterpolator()
OrientationInterpolator2344.setDEF("Pitches_whole_body_RotationInterpolator")
OrientationInterpolator2344.setKey([0,0.5,1])
OrientationInterpolator2344.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2344)
PositionInterpolator2345 = PositionInterpolator()
PositionInterpolator2345.setDEF("Pitches_whole_body_TranslationInterpolator")
PositionInterpolator2345.setKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1])
PositionInterpolator2345.setKeyValue([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0])

Group2325.addChildren(PositionInterpolator2345)
OrientationInterpolator2346 = OrientationInterpolator()
OrientationInterpolator2346.setDEF("Pitch_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2346.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2346.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2346)
OrientationInterpolator2347 = OrientationInterpolator()
OrientationInterpolator2347.setDEF("Pitch_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2347.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2347.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2347)
OrientationInterpolator2348 = OrientationInterpolator()
OrientationInterpolator2348.setDEF("Pitch_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2348.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2348.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2348)
OrientationInterpolator2349 = OrientationInterpolator()
OrientationInterpolator2349.setDEF("Pitch_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2349.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2349.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2349)
OrientationInterpolator2350 = OrientationInterpolator()
OrientationInterpolator2350.setDEF("Pitch_sacroiliac_YawInterpolator")
OrientationInterpolator2350.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2350.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2350)
OrientationInterpolator2351 = OrientationInterpolator()
OrientationInterpolator2351.setDEF("Pitch_vl5_YawInterpolator")
OrientationInterpolator2351.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2351.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2351)
OrientationInterpolator2352 = OrientationInterpolator()
OrientationInterpolator2352.setDEF("Pitch_vc6_YawInterpolator")
OrientationInterpolator2352.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2352.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2325.addChildren(OrientationInterpolator2352)
OrientationInterpolator2353 = OrientationInterpolator()
OrientationInterpolator2353.setDEF("Pitch_l_thumb1_PitchInterpolator")
OrientationInterpolator2353.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2353.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])

Group2325.addChildren(OrientationInterpolator2353)
OrientationInterpolator2354 = OrientationInterpolator()
OrientationInterpolator2354.setDEF("Pitch_r_thumb1_PitchInterpolator")
OrientationInterpolator2354.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2354.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])

Group2325.addChildren(OrientationInterpolator2354)
ROUTE2355 = ROUTE()
ROUTE2355.setFromField("fraction_changed")
ROUTE2355.setFromNode("PitchTimer")
ROUTE2355.setToField("set_fraction")
ROUTE2355.setToNode("Pitches_r_ankle_RotationInterpolator")

Group2325.addChildren(ROUTE2355)
ROUTE2356 = ROUTE()
ROUTE2356.setFromField("fraction_changed")
ROUTE2356.setFromNode("PitchTimer")
ROUTE2356.setToField("set_fraction")
ROUTE2356.setToNode("Pitches_r_knee_RotationInterpolator")

Group2325.addChildren(ROUTE2356)
ROUTE2357 = ROUTE()
ROUTE2357.setFromField("fraction_changed")
ROUTE2357.setFromNode("PitchTimer")
ROUTE2357.setToField("set_fraction")
ROUTE2357.setToNode("Pitches_r_hip_RotationInterpolator")

Group2325.addChildren(ROUTE2357)
ROUTE2358 = ROUTE()
ROUTE2358.setFromField("fraction_changed")
ROUTE2358.setFromNode("PitchTimer")
ROUTE2358.setToField("set_fraction")
ROUTE2358.setToNode("Pitches_l_ankle_RotationInterpolator")

Group2325.addChildren(ROUTE2358)
ROUTE2359 = ROUTE()
ROUTE2359.setFromField("fraction_changed")
ROUTE2359.setFromNode("PitchTimer")
ROUTE2359.setToField("set_fraction")
ROUTE2359.setToNode("Pitches_l_knee_RotationInterpolator")

Group2325.addChildren(ROUTE2359)
ROUTE2360 = ROUTE()
ROUTE2360.setFromField("fraction_changed")
ROUTE2360.setFromNode("PitchTimer")
ROUTE2360.setToField("set_fraction")
ROUTE2360.setToNode("Pitches_l_hip_RotationInterpolator")

Group2325.addChildren(ROUTE2360)
ROUTE2361 = ROUTE()
ROUTE2361.setFromField("fraction_changed")
ROUTE2361.setFromNode("PitchTimer")
ROUTE2361.setToField("set_fraction")
ROUTE2361.setToNode("Pitches_lower_body_RotationInterpolator")

Group2325.addChildren(ROUTE2361)
ROUTE2362 = ROUTE()
ROUTE2362.setFromField("fraction_changed")
ROUTE2362.setFromNode("PitchTimer")
ROUTE2362.setToField("set_fraction")
ROUTE2362.setToNode("Pitches_r_wrist_RotationInterpolator")

Group2325.addChildren(ROUTE2362)
ROUTE2363 = ROUTE()
ROUTE2363.setFromField("fraction_changed")
ROUTE2363.setFromNode("PitchTimer")
ROUTE2363.setToField("set_fraction")
ROUTE2363.setToNode("Pitches_r_elbow_RotationInterpolator")

Group2325.addChildren(ROUTE2363)
ROUTE2364 = ROUTE()
ROUTE2364.setFromField("fraction_changed")
ROUTE2364.setFromNode("PitchTimer")
ROUTE2364.setToField("set_fraction")
ROUTE2364.setToNode("Pitches_r_shoulder_RotationInterpolator")

Group2325.addChildren(ROUTE2364)
ROUTE2365 = ROUTE()
ROUTE2365.setFromField("fraction_changed")
ROUTE2365.setFromNode("PitchTimer")
ROUTE2365.setToField("set_fraction")
ROUTE2365.setToNode("Pitches_l_wrist_RotationInterpolator")

Group2325.addChildren(ROUTE2365)
ROUTE2366 = ROUTE()
ROUTE2366.setFromField("fraction_changed")
ROUTE2366.setFromNode("PitchTimer")
ROUTE2366.setToField("set_fraction")
ROUTE2366.setToNode("Pitches_l_elbow_RotationInterpolator")

Group2325.addChildren(ROUTE2366)
ROUTE2367 = ROUTE()
ROUTE2367.setFromField("fraction_changed")
ROUTE2367.setFromNode("PitchTimer")
ROUTE2367.setToField("set_fraction")
ROUTE2367.setToNode("Pitches_l_shoulder_RotationInterpolator")

Group2325.addChildren(ROUTE2367)
ROUTE2368 = ROUTE()
ROUTE2368.setFromField("fraction_changed")
ROUTE2368.setFromNode("PitchTimer")
ROUTE2368.setToField("set_fraction")
ROUTE2368.setToNode("Pitches_head_RotationInterpolator")

Group2325.addChildren(ROUTE2368)
ROUTE2369 = ROUTE()
ROUTE2369.setFromField("fraction_changed")
ROUTE2369.setFromNode("PitchTimer")
ROUTE2369.setToField("set_fraction")
ROUTE2369.setToNode("Pitches_neck_RotationInterpolator")

Group2325.addChildren(ROUTE2369)
ROUTE2370 = ROUTE()
ROUTE2370.setFromField("fraction_changed")
ROUTE2370.setFromNode("PitchTimer")
ROUTE2370.setToField("set_fraction")
ROUTE2370.setToNode("Pitches_upper_body_RotationInterpolator")

Group2325.addChildren(ROUTE2370)
ROUTE2371 = ROUTE()
ROUTE2371.setFromField("fraction_changed")
ROUTE2371.setFromNode("PitchTimer")
ROUTE2371.setToField("set_fraction")
ROUTE2371.setToNode("Pitches_whole_body_RotationInterpolator")

Group2325.addChildren(ROUTE2371)
ROUTE2372 = ROUTE()
ROUTE2372.setFromField("fraction_changed")
ROUTE2372.setFromNode("PitchTimer")
ROUTE2372.setToField("set_fraction")
ROUTE2372.setToNode("Pitches_whole_body_TranslationInterpolator")

Group2325.addChildren(ROUTE2372)
ROUTE2373 = ROUTE()
ROUTE2373.setFromField("fraction_changed")
ROUTE2373.setFromNode("PitchTimer")
ROUTE2373.setToField("set_fraction")
ROUTE2373.setToNode("Pitch_l_sternoclavicular_RollInterpolator")

Group2325.addChildren(ROUTE2373)
ROUTE2374 = ROUTE()
ROUTE2374.setFromField("fraction_changed")
ROUTE2374.setFromNode("PitchTimer")
ROUTE2374.setToField("set_fraction")
ROUTE2374.setToNode("Pitch_l_acromioclavicular_RollInterpolator")

Group2325.addChildren(ROUTE2374)
ROUTE2375 = ROUTE()
ROUTE2375.setFromField("fraction_changed")
ROUTE2375.setFromNode("PitchTimer")
ROUTE2375.setToField("set_fraction")
ROUTE2375.setToNode("Pitch_r_sternoclavicular_RollInterpolator")

Group2325.addChildren(ROUTE2375)
ROUTE2376 = ROUTE()
ROUTE2376.setFromField("fraction_changed")
ROUTE2376.setFromNode("PitchTimer")
ROUTE2376.setToField("set_fraction")
ROUTE2376.setToNode("Pitch_r_acromioclavicular_RollInterpolator")

Group2325.addChildren(ROUTE2376)
ROUTE2377 = ROUTE()
ROUTE2377.setFromField("fraction_changed")
ROUTE2377.setFromNode("PitchTimer")
ROUTE2377.setToField("set_fraction")
ROUTE2377.setToNode("Pitch_r_metatarsal_PitchInterpolator")

Group2325.addChildren(ROUTE2377)
ROUTE2378 = ROUTE()
ROUTE2378.setFromField("fraction_changed")
ROUTE2378.setFromNode("PitchTimer")
ROUTE2378.setToField("set_fraction")
ROUTE2378.setToNode("Pitch_sacroiliac_YawInterpolator")

Group2325.addChildren(ROUTE2378)
ROUTE2379 = ROUTE()
ROUTE2379.setFromField("fraction_changed")
ROUTE2379.setFromNode("PitchTimer")
ROUTE2379.setToField("set_fraction")
ROUTE2379.setToNode("Pitch_vl5_YawInterpolator")

Group2325.addChildren(ROUTE2379)
ROUTE2380 = ROUTE()
ROUTE2380.setFromField("fraction_changed")
ROUTE2380.setFromNode("PitchTimer")
ROUTE2380.setToField("set_fraction")
ROUTE2380.setToNode("Pitch_vc6_YawInterpolator")

Group2325.addChildren(ROUTE2380)
ROUTE2381 = ROUTE()
ROUTE2381.setFromField("fraction_changed")
ROUTE2381.setFromNode("PitchTimer")
ROUTE2381.setToField("set_fraction")
ROUTE2381.setToNode("Pitch_l_thumb1_PitchInterpolator")

Group2325.addChildren(ROUTE2381)
ROUTE2382 = ROUTE()
ROUTE2382.setFromField("fraction_changed")
ROUTE2382.setFromNode("PitchTimer")
ROUTE2382.setToField("set_fraction")
ROUTE2382.setToNode("Pitch_r_thumb1_PitchInterpolator")

Group2325.addChildren(ROUTE2382)
ROUTE2383 = ROUTE()
ROUTE2383.setFromField("value_changed")
ROUTE2383.setFromNode("Pitches_r_ankle_RotationInterpolator")
ROUTE2383.setToField("rotation")
ROUTE2383.setToNode("hanim_r_ankle")

Group2325.addChildren(ROUTE2383)
ROUTE2384 = ROUTE()
ROUTE2384.setFromField("value_changed")
ROUTE2384.setFromNode("Pitches_r_knee_RotationInterpolator")
ROUTE2384.setToField("rotation")
ROUTE2384.setToNode("hanim_r_knee")

Group2325.addChildren(ROUTE2384)
ROUTE2385 = ROUTE()
ROUTE2385.setFromField("value_changed")
ROUTE2385.setFromNode("Pitches_r_hip_RotationInterpolator")
ROUTE2385.setToField("rotation")
ROUTE2385.setToNode("hanim_r_hip")

Group2325.addChildren(ROUTE2385)
ROUTE2386 = ROUTE()
ROUTE2386.setFromField("value_changed")
ROUTE2386.setFromNode("Pitches_l_ankle_RotationInterpolator")
ROUTE2386.setToField("rotation")
ROUTE2386.setToNode("hanim_l_ankle")

Group2325.addChildren(ROUTE2386)
ROUTE2387 = ROUTE()
ROUTE2387.setFromField("value_changed")
ROUTE2387.setFromNode("Pitches_l_knee_RotationInterpolator")
ROUTE2387.setToField("rotation")
ROUTE2387.setToNode("hanim_l_knee")

Group2325.addChildren(ROUTE2387)
ROUTE2388 = ROUTE()
ROUTE2388.setFromField("value_changed")
ROUTE2388.setFromNode("Pitches_l_hip_RotationInterpolator")
ROUTE2388.setToField("rotation")
ROUTE2388.setToNode("hanim_l_hip")

Group2325.addChildren(ROUTE2388)
ROUTE2389 = ROUTE()
ROUTE2389.setFromField("value_changed")
ROUTE2389.setFromNode("Pitches_lower_body_RotationInterpolator")
ROUTE2389.setToField("rotation")
ROUTE2389.setToNode("hanim_sacroiliac")

Group2325.addChildren(ROUTE2389)
ROUTE2390 = ROUTE()
ROUTE2390.setFromField("value_changed")
ROUTE2390.setFromNode("Pitches_r_wrist_RotationInterpolator")
ROUTE2390.setToField("rotation")
ROUTE2390.setToNode("hanim_r_wrist")

Group2325.addChildren(ROUTE2390)
ROUTE2391 = ROUTE()
ROUTE2391.setFromField("value_changed")
ROUTE2391.setFromNode("Pitches_r_elbow_RotationInterpolator")
ROUTE2391.setToField("rotation")
ROUTE2391.setToNode("hanim_r_elbow")

Group2325.addChildren(ROUTE2391)
ROUTE2392 = ROUTE()
ROUTE2392.setFromField("value_changed")
ROUTE2392.setFromNode("Pitches_r_shoulder_RotationInterpolator")
ROUTE2392.setToField("rotation")
ROUTE2392.setToNode("hanim_r_shoulder")

Group2325.addChildren(ROUTE2392)
ROUTE2393 = ROUTE()
ROUTE2393.setFromField("value_changed")
ROUTE2393.setFromNode("Pitches_l_wrist_RotationInterpolator")
ROUTE2393.setToField("rotation")
ROUTE2393.setToNode("hanim_l_wrist")

Group2325.addChildren(ROUTE2393)
ROUTE2394 = ROUTE()
ROUTE2394.setFromField("value_changed")
ROUTE2394.setFromNode("Pitches_l_elbow_RotationInterpolator")
ROUTE2394.setToField("rotation")
ROUTE2394.setToNode("hanim_l_elbow")

Group2325.addChildren(ROUTE2394)
ROUTE2395 = ROUTE()
ROUTE2395.setFromField("value_changed")
ROUTE2395.setFromNode("Pitches_l_shoulder_RotationInterpolator")
ROUTE2395.setToField("rotation")
ROUTE2395.setToNode("hanim_l_shoulder")

Group2325.addChildren(ROUTE2395)
ROUTE2396 = ROUTE()
ROUTE2396.setFromField("value_changed")
ROUTE2396.setFromNode("Pitches_head_RotationInterpolator")
ROUTE2396.setToField("rotation")
ROUTE2396.setToNode("hanim_skullbase")

Group2325.addChildren(ROUTE2396)
ROUTE2397 = ROUTE()
ROUTE2397.setFromField("value_changed")
ROUTE2397.setFromNode("Pitches_neck_RotationInterpolator")
ROUTE2397.setToField("rotation")
ROUTE2397.setToNode("hanim_vc4")

Group2325.addChildren(ROUTE2397)
ROUTE2398 = ROUTE()
ROUTE2398.setFromField("value_changed")
ROUTE2398.setFromNode("Pitches_upper_body_RotationInterpolator")
ROUTE2398.setToField("rotation")
ROUTE2398.setToNode("hanim_vl1")

Group2325.addChildren(ROUTE2398)
ROUTE2399 = ROUTE()
ROUTE2399.setFromField("value_changed")
ROUTE2399.setFromNode("Pitches_whole_body_RotationInterpolator")
ROUTE2399.setToField("rotation")
ROUTE2399.setToNode("hanim_humanoid_root")

Group2325.addChildren(ROUTE2399)
ROUTE2400 = ROUTE()
ROUTE2400.setFromField("value_changed")
ROUTE2400.setFromNode("Pitches_whole_body_TranslationInterpolator")
ROUTE2400.setToField("translation")
ROUTE2400.setToNode("hanim_humanoid_root")

Group2325.addChildren(ROUTE2400)
ROUTE2401 = ROUTE()
ROUTE2401.setFromField("value_changed")
ROUTE2401.setFromNode("Pitch_l_sternoclavicular_RollInterpolator")
ROUTE2401.setToField("rotation")
ROUTE2401.setToNode("hanim_l_sternoclavicular")

Group2325.addChildren(ROUTE2401)
ROUTE2402 = ROUTE()
ROUTE2402.setFromField("value_changed")
ROUTE2402.setFromNode("Pitch_l_acromioclavicular_RollInterpolator")
ROUTE2402.setToField("rotation")
ROUTE2402.setToNode("hanim_l_acromioclavicular")

Group2325.addChildren(ROUTE2402)
ROUTE2403 = ROUTE()
ROUTE2403.setFromField("value_changed")
ROUTE2403.setFromNode("Pitch_r_sternoclavicular_RollInterpolator")
ROUTE2403.setToField("rotation")
ROUTE2403.setToNode("hanim_r_sternoclavicular")

Group2325.addChildren(ROUTE2403)
ROUTE2404 = ROUTE()
ROUTE2404.setFromField("value_changed")
ROUTE2404.setFromNode("Pitch_r_acromioclavicular_RollInterpolator")
ROUTE2404.setToField("rotation")
ROUTE2404.setToNode("hanim_r_acromioclavicular")

Group2325.addChildren(ROUTE2404)
ROUTE2405 = ROUTE()
ROUTE2405.setFromField("value_changed")
ROUTE2405.setFromNode("Pitch_r_metatarsal_PitchInterpolator")
ROUTE2405.setToField("rotation")
ROUTE2405.setToNode("hanim_l_metatarsal")

Group2325.addChildren(ROUTE2405)
ROUTE2406 = ROUTE()
ROUTE2406.setFromField("value_changed")
ROUTE2406.setFromNode("Pitch_r_metatarsal_PitchInterpolator")
ROUTE2406.setToField("rotation")
ROUTE2406.setToNode("hanim_r_metatarsal")

Group2325.addChildren(ROUTE2406)
ROUTE2407 = ROUTE()
ROUTE2407.setFromField("value_changed")
ROUTE2407.setFromNode("Pitch_sacroiliac_YawInterpolator")
ROUTE2407.setToField("rotation")
ROUTE2407.setToNode("hanim_sacroiliac")

Group2325.addChildren(ROUTE2407)
ROUTE2408 = ROUTE()
ROUTE2408.setFromField("value_changed")
ROUTE2408.setFromNode("Pitch_vl5_YawInterpolator")
ROUTE2408.setToField("rotation")
ROUTE2408.setToNode("hanim_vl5")

Group2325.addChildren(ROUTE2408)
ROUTE2409 = ROUTE()
ROUTE2409.setFromField("value_changed")
ROUTE2409.setFromNode("Pitch_vc6_YawInterpolator")
ROUTE2409.setToField("rotation")
ROUTE2409.setToNode("hanim_vc6")

Group2325.addChildren(ROUTE2409)
ROUTE2410 = ROUTE()
ROUTE2410.setFromField("value_changed")
ROUTE2410.setFromNode("Pitch_l_thumb1_PitchInterpolator")
ROUTE2410.setToField("rotation")
ROUTE2410.setToNode("hanim_l_thumb1")

Group2325.addChildren(ROUTE2410)
ROUTE2411 = ROUTE()
ROUTE2411.setFromField("value_changed")
ROUTE2411.setFromNode("Pitch_r_thumb1_PitchInterpolator")
ROUTE2411.setToField("rotation")
ROUTE2411.setToNode("hanim_r_thumb1")

Group2325.addChildren(ROUTE2411)

Scene30.addChildren(Group2325)
Group2412 = Group()
Group2412.setDEF("YawsAnimation")
TimeSensor2413 = TimeSensor()
TimeSensor2413.setDEF("YawTimer")
TimeSensor2413.setCycleInterval(5.73)
TimeSensor2413.setLoop(True)

Group2412.addChildren(TimeSensor2413)
OrientationInterpolator2414 = OrientationInterpolator()
OrientationInterpolator2414.setDEF("Yaw_r_metatarsal_PitchInterpolator")
OrientationInterpolator2414.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2414.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2414)
OrientationInterpolator2415 = OrientationInterpolator()
OrientationInterpolator2415.setDEF("Yaws_r_ankle_RotationInterpolator")
OrientationInterpolator2415.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2415.setKeyValue([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2415)
OrientationInterpolator2416 = OrientationInterpolator()
OrientationInterpolator2416.setDEF("Yaws_r_knee_RotationInterpolator")
OrientationInterpolator2416.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2416.setKeyValue([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2416)
OrientationInterpolator2417 = OrientationInterpolator()
OrientationInterpolator2417.setDEF("Yaws_r_hip_RotationInterpolator")
OrientationInterpolator2417.setKey([0,0.5,1])
OrientationInterpolator2417.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2417)
OrientationInterpolator2418 = OrientationInterpolator()
OrientationInterpolator2418.setDEF("Yaws_l_ankle_RotationInterpolator")
OrientationInterpolator2418.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2418.setKeyValue([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2418)
OrientationInterpolator2419 = OrientationInterpolator()
OrientationInterpolator2419.setDEF("Yaws_l_knee_RotationInterpolator")
OrientationInterpolator2419.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2419.setKeyValue([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2419)
OrientationInterpolator2420 = OrientationInterpolator()
OrientationInterpolator2420.setDEF("Yaws_l_hip_RotationInterpolator")
OrientationInterpolator2420.setKey([0,0.5,1])
OrientationInterpolator2420.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2420)
OrientationInterpolator2421 = OrientationInterpolator()
OrientationInterpolator2421.setDEF("Yaws_r_wrist_RotationInterpolator")
OrientationInterpolator2421.setKey([0,0.5,1])
OrientationInterpolator2421.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2421)
OrientationInterpolator2422 = OrientationInterpolator()
OrientationInterpolator2422.setDEF("Yaws_r_elbow_RotationInterpolator")
OrientationInterpolator2422.setKey([0,0.5,1])
OrientationInterpolator2422.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2422)
OrientationInterpolator2423 = OrientationInterpolator()
OrientationInterpolator2423.setDEF("Yaws_r_shoulder_RotationInterpolator")
OrientationInterpolator2423.setKey([0,0.5,1])
OrientationInterpolator2423.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2423)
OrientationInterpolator2424 = OrientationInterpolator()
OrientationInterpolator2424.setDEF("Yaws_l_wrist_RotationInterpolator")
OrientationInterpolator2424.setKey([0,0.5,1])
OrientationInterpolator2424.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2424)
OrientationInterpolator2425 = OrientationInterpolator()
OrientationInterpolator2425.setDEF("Yaws_l_elbow_RotationInterpolator")
OrientationInterpolator2425.setKey([0,0.5,1])
OrientationInterpolator2425.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2425)
OrientationInterpolator2426 = OrientationInterpolator()
OrientationInterpolator2426.setDEF("Yaws_l_shoulder_RotationInterpolator")
OrientationInterpolator2426.setKey([0,0.5,1])
OrientationInterpolator2426.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2426)
OrientationInterpolator2427 = OrientationInterpolator()
OrientationInterpolator2427.setDEF("Yaws_head_RotationInterpolator")
OrientationInterpolator2427.setKey([0,0.5,1])
OrientationInterpolator2427.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2427)
OrientationInterpolator2428 = OrientationInterpolator()
OrientationInterpolator2428.setDEF("Yaws_neck_RotationInterpolator")
OrientationInterpolator2428.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2428.setKeyValue([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2428)
OrientationInterpolator2429 = OrientationInterpolator()
OrientationInterpolator2429.setDEF("Yaws_upper_body_RotationInterpolator")
OrientationInterpolator2429.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2429.setKeyValue([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2429)
OrientationInterpolator2430 = OrientationInterpolator()
OrientationInterpolator2430.setDEF("Yaws_lower_body_RotationInterpolator")
OrientationInterpolator2430.setKey([0,0.5,1])
OrientationInterpolator2430.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2430)
OrientationInterpolator2431 = OrientationInterpolator()
OrientationInterpolator2431.setDEF("Yaws_whole_body_RotationInterpolator")
OrientationInterpolator2431.setKey([0,0.5,1])
OrientationInterpolator2431.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2431)
PositionInterpolator2432 = PositionInterpolator()
PositionInterpolator2432.setDEF("Yaws_whole_body_TranslationInterpolator")
PositionInterpolator2432.setKey([0,0.5,1])
PositionInterpolator2432.setKeyValue([0,0,0,0,0,0,0,0,0])

Group2412.addChildren(PositionInterpolator2432)
OrientationInterpolator2433 = OrientationInterpolator()
OrientationInterpolator2433.setDEF("Yaw_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2433.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2433.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2433)
OrientationInterpolator2434 = OrientationInterpolator()
OrientationInterpolator2434.setDEF("Yaw_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2434.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2434.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2434)
OrientationInterpolator2435 = OrientationInterpolator()
OrientationInterpolator2435.setDEF("Yaw_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2435.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2435.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2435)
OrientationInterpolator2436 = OrientationInterpolator()
OrientationInterpolator2436.setDEF("Yaw_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2436.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2436.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2436)
OrientationInterpolator2437 = OrientationInterpolator()
OrientationInterpolator2437.setDEF("Yaw_sacroiliac_YawInterpolator")
OrientationInterpolator2437.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2437.setKeyValue([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0])

Group2412.addChildren(OrientationInterpolator2437)
OrientationInterpolator2438 = OrientationInterpolator()
OrientationInterpolator2438.setDEF("Yaw_vl5_YawInterpolator")
OrientationInterpolator2438.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2438.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2438)
OrientationInterpolator2439 = OrientationInterpolator()
OrientationInterpolator2439.setDEF("Yaw_vc6_YawInterpolator")
OrientationInterpolator2439.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2439.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2439)
OrientationInterpolator2440 = OrientationInterpolator()
OrientationInterpolator2440.setDEF("Yaw_l_thumb1_PitchInterpolator")
OrientationInterpolator2440.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2440.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2440)
OrientationInterpolator2441 = OrientationInterpolator()
OrientationInterpolator2441.setDEF("Yaw_r_thumb1_PitchInterpolator")
OrientationInterpolator2441.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2441.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2412.addChildren(OrientationInterpolator2441)
ROUTE2442 = ROUTE()
ROUTE2442.setFromField("fraction_changed")
ROUTE2442.setFromNode("YawTimer")
ROUTE2442.setToField("set_fraction")
ROUTE2442.setToNode("Yaws_r_ankle_RotationInterpolator")

Group2412.addChildren(ROUTE2442)
ROUTE2443 = ROUTE()
ROUTE2443.setFromField("fraction_changed")
ROUTE2443.setFromNode("YawTimer")
ROUTE2443.setToField("set_fraction")
ROUTE2443.setToNode("Yaws_r_knee_RotationInterpolator")

Group2412.addChildren(ROUTE2443)
ROUTE2444 = ROUTE()
ROUTE2444.setFromField("fraction_changed")
ROUTE2444.setFromNode("YawTimer")
ROUTE2444.setToField("set_fraction")
ROUTE2444.setToNode("Yaws_r_hip_RotationInterpolator")

Group2412.addChildren(ROUTE2444)
ROUTE2445 = ROUTE()
ROUTE2445.setFromField("fraction_changed")
ROUTE2445.setFromNode("YawTimer")
ROUTE2445.setToField("set_fraction")
ROUTE2445.setToNode("Yaws_l_ankle_RotationInterpolator")

Group2412.addChildren(ROUTE2445)
ROUTE2446 = ROUTE()
ROUTE2446.setFromField("fraction_changed")
ROUTE2446.setFromNode("YawTimer")
ROUTE2446.setToField("set_fraction")
ROUTE2446.setToNode("Yaws_l_knee_RotationInterpolator")

Group2412.addChildren(ROUTE2446)
ROUTE2447 = ROUTE()
ROUTE2447.setFromField("fraction_changed")
ROUTE2447.setFromNode("YawTimer")
ROUTE2447.setToField("set_fraction")
ROUTE2447.setToNode("Yaws_l_hip_RotationInterpolator")

Group2412.addChildren(ROUTE2447)
ROUTE2448 = ROUTE()
ROUTE2448.setFromField("fraction_changed")
ROUTE2448.setFromNode("YawTimer")
ROUTE2448.setToField("set_fraction")
ROUTE2448.setToNode("Yaws_lower_body_RotationInterpolator")

Group2412.addChildren(ROUTE2448)
ROUTE2449 = ROUTE()
ROUTE2449.setFromField("fraction_changed")
ROUTE2449.setFromNode("YawTimer")
ROUTE2449.setToField("set_fraction")
ROUTE2449.setToNode("Yaws_r_wrist_RotationInterpolator")

Group2412.addChildren(ROUTE2449)
ROUTE2450 = ROUTE()
ROUTE2450.setFromField("fraction_changed")
ROUTE2450.setFromNode("YawTimer")
ROUTE2450.setToField("set_fraction")
ROUTE2450.setToNode("Yaws_r_elbow_RotationInterpolator")

Group2412.addChildren(ROUTE2450)
ROUTE2451 = ROUTE()
ROUTE2451.setFromField("fraction_changed")
ROUTE2451.setFromNode("YawTimer")
ROUTE2451.setToField("set_fraction")
ROUTE2451.setToNode("Yaws_r_shoulder_RotationInterpolator")

Group2412.addChildren(ROUTE2451)
ROUTE2452 = ROUTE()
ROUTE2452.setFromField("fraction_changed")
ROUTE2452.setFromNode("YawTimer")
ROUTE2452.setToField("set_fraction")
ROUTE2452.setToNode("Yaws_l_wrist_RotationInterpolator")

Group2412.addChildren(ROUTE2452)
ROUTE2453 = ROUTE()
ROUTE2453.setFromField("fraction_changed")
ROUTE2453.setFromNode("YawTimer")
ROUTE2453.setToField("set_fraction")
ROUTE2453.setToNode("Yaws_l_elbow_RotationInterpolator")

Group2412.addChildren(ROUTE2453)
ROUTE2454 = ROUTE()
ROUTE2454.setFromField("fraction_changed")
ROUTE2454.setFromNode("YawTimer")
ROUTE2454.setToField("set_fraction")
ROUTE2454.setToNode("Yaws_l_shoulder_RotationInterpolator")

Group2412.addChildren(ROUTE2454)
ROUTE2455 = ROUTE()
ROUTE2455.setFromField("fraction_changed")
ROUTE2455.setFromNode("YawTimer")
ROUTE2455.setToField("set_fraction")
ROUTE2455.setToNode("Yaws_head_RotationInterpolator")

Group2412.addChildren(ROUTE2455)
ROUTE2456 = ROUTE()
ROUTE2456.setFromField("fraction_changed")
ROUTE2456.setFromNode("YawTimer")
ROUTE2456.setToField("set_fraction")
ROUTE2456.setToNode("Yaws_neck_RotationInterpolator")

Group2412.addChildren(ROUTE2456)
ROUTE2457 = ROUTE()
ROUTE2457.setFromField("fraction_changed")
ROUTE2457.setFromNode("YawTimer")
ROUTE2457.setToField("set_fraction")
ROUTE2457.setToNode("Yaws_upper_body_RotationInterpolator")

Group2412.addChildren(ROUTE2457)
ROUTE2458 = ROUTE()
ROUTE2458.setFromField("fraction_changed")
ROUTE2458.setFromNode("YawTimer")
ROUTE2458.setToField("set_fraction")
ROUTE2458.setToNode("Yaws_whole_body_RotationInterpolator")

Group2412.addChildren(ROUTE2458)
ROUTE2459 = ROUTE()
ROUTE2459.setFromField("fraction_changed")
ROUTE2459.setFromNode("YawTimer")
ROUTE2459.setToField("set_fraction")
ROUTE2459.setToNode("Yaws_whole_body_TranslationInterpolator")

Group2412.addChildren(ROUTE2459)
ROUTE2460 = ROUTE()
ROUTE2460.setFromField("fraction_changed")
ROUTE2460.setFromNode("YawTimer")
ROUTE2460.setToField("set_fraction")
ROUTE2460.setToNode("Yaw_l_sternoclavicular_RollInterpolator")

Group2412.addChildren(ROUTE2460)
ROUTE2461 = ROUTE()
ROUTE2461.setFromField("fraction_changed")
ROUTE2461.setFromNode("YawTimer")
ROUTE2461.setToField("set_fraction")
ROUTE2461.setToNode("Yaw_l_acromioclavicular_RollInterpolator")

Group2412.addChildren(ROUTE2461)
ROUTE2462 = ROUTE()
ROUTE2462.setFromField("fraction_changed")
ROUTE2462.setFromNode("YawTimer")
ROUTE2462.setToField("set_fraction")
ROUTE2462.setToNode("Yaw_r_sternoclavicular_RollInterpolator")

Group2412.addChildren(ROUTE2462)
ROUTE2463 = ROUTE()
ROUTE2463.setFromField("fraction_changed")
ROUTE2463.setFromNode("YawTimer")
ROUTE2463.setToField("set_fraction")
ROUTE2463.setToNode("Yaw_r_acromioclavicular_RollInterpolator")

Group2412.addChildren(ROUTE2463)
ROUTE2464 = ROUTE()
ROUTE2464.setFromField("fraction_changed")
ROUTE2464.setFromNode("YawTimer")
ROUTE2464.setToField("set_fraction")
ROUTE2464.setToNode("Yaw_r_metatarsal_PitchInterpolator")

Group2412.addChildren(ROUTE2464)
ROUTE2465 = ROUTE()
ROUTE2465.setFromField("fraction_changed")
ROUTE2465.setFromNode("YawTimer")
ROUTE2465.setToField("set_fraction")
ROUTE2465.setToNode("Yaw_sacroiliac_YawInterpolator")

Group2412.addChildren(ROUTE2465)
ROUTE2466 = ROUTE()
ROUTE2466.setFromField("fraction_changed")
ROUTE2466.setFromNode("YawTimer")
ROUTE2466.setToField("set_fraction")
ROUTE2466.setToNode("Yaw_vl5_YawInterpolator")

Group2412.addChildren(ROUTE2466)
ROUTE2467 = ROUTE()
ROUTE2467.setFromField("fraction_changed")
ROUTE2467.setFromNode("YawTimer")
ROUTE2467.setToField("set_fraction")
ROUTE2467.setToNode("Yaw_vc6_YawInterpolator")

Group2412.addChildren(ROUTE2467)
ROUTE2468 = ROUTE()
ROUTE2468.setFromField("fraction_changed")
ROUTE2468.setFromNode("YawTimer")
ROUTE2468.setToField("set_fraction")
ROUTE2468.setToNode("Yaw_l_thumb1_PitchInterpolator")

Group2412.addChildren(ROUTE2468)
ROUTE2469 = ROUTE()
ROUTE2469.setFromField("fraction_changed")
ROUTE2469.setFromNode("YawTimer")
ROUTE2469.setToField("set_fraction")
ROUTE2469.setToNode("Yaw_r_thumb1_PitchInterpolator")

Group2412.addChildren(ROUTE2469)
ROUTE2470 = ROUTE()
ROUTE2470.setFromField("value_changed")
ROUTE2470.setFromNode("Yaws_r_ankle_RotationInterpolator")
ROUTE2470.setToField("rotation")
ROUTE2470.setToNode("hanim_r_ankle")

Group2412.addChildren(ROUTE2470)
ROUTE2471 = ROUTE()
ROUTE2471.setFromField("value_changed")
ROUTE2471.setFromNode("Yaws_r_knee_RotationInterpolator")
ROUTE2471.setToField("rotation")
ROUTE2471.setToNode("hanim_r_knee")

Group2412.addChildren(ROUTE2471)
ROUTE2472 = ROUTE()
ROUTE2472.setFromField("value_changed")
ROUTE2472.setFromNode("Yaws_r_hip_RotationInterpolator")
ROUTE2472.setToField("rotation")
ROUTE2472.setToNode("hanim_r_hip")

Group2412.addChildren(ROUTE2472)
ROUTE2473 = ROUTE()
ROUTE2473.setFromField("value_changed")
ROUTE2473.setFromNode("Yaws_l_ankle_RotationInterpolator")
ROUTE2473.setToField("rotation")
ROUTE2473.setToNode("hanim_l_ankle")

Group2412.addChildren(ROUTE2473)
ROUTE2474 = ROUTE()
ROUTE2474.setFromField("value_changed")
ROUTE2474.setFromNode("Yaws_l_knee_RotationInterpolator")
ROUTE2474.setToField("rotation")
ROUTE2474.setToNode("hanim_l_knee")

Group2412.addChildren(ROUTE2474)
ROUTE2475 = ROUTE()
ROUTE2475.setFromField("value_changed")
ROUTE2475.setFromNode("Yaws_l_hip_RotationInterpolator")
ROUTE2475.setToField("rotation")
ROUTE2475.setToNode("hanim_l_hip")

Group2412.addChildren(ROUTE2475)
ROUTE2476 = ROUTE()
ROUTE2476.setFromField("value_changed")
ROUTE2476.setFromNode("Yaws_lower_body_RotationInterpolator")
ROUTE2476.setToField("rotation")
ROUTE2476.setToNode("hanim_sacroiliac")

Group2412.addChildren(ROUTE2476)
ROUTE2477 = ROUTE()
ROUTE2477.setFromField("value_changed")
ROUTE2477.setFromNode("Yaws_r_wrist_RotationInterpolator")
ROUTE2477.setToField("rotation")
ROUTE2477.setToNode("hanim_r_wrist")

Group2412.addChildren(ROUTE2477)
ROUTE2478 = ROUTE()
ROUTE2478.setFromField("value_changed")
ROUTE2478.setFromNode("Yaws_r_elbow_RotationInterpolator")
ROUTE2478.setToField("rotation")
ROUTE2478.setToNode("hanim_r_elbow")

Group2412.addChildren(ROUTE2478)
ROUTE2479 = ROUTE()
ROUTE2479.setFromField("value_changed")
ROUTE2479.setFromNode("Yaws_r_shoulder_RotationInterpolator")
ROUTE2479.setToField("rotation")
ROUTE2479.setToNode("hanim_r_shoulder")

Group2412.addChildren(ROUTE2479)
ROUTE2480 = ROUTE()
ROUTE2480.setFromField("value_changed")
ROUTE2480.setFromNode("Yaws_l_wrist_RotationInterpolator")
ROUTE2480.setToField("rotation")
ROUTE2480.setToNode("hanim_l_wrist")

Group2412.addChildren(ROUTE2480)
ROUTE2481 = ROUTE()
ROUTE2481.setFromField("value_changed")
ROUTE2481.setFromNode("Yaws_l_elbow_RotationInterpolator")
ROUTE2481.setToField("rotation")
ROUTE2481.setToNode("hanim_l_elbow")

Group2412.addChildren(ROUTE2481)
ROUTE2482 = ROUTE()
ROUTE2482.setFromField("value_changed")
ROUTE2482.setFromNode("Yaws_l_shoulder_RotationInterpolator")
ROUTE2482.setToField("rotation")
ROUTE2482.setToNode("hanim_l_shoulder")

Group2412.addChildren(ROUTE2482)
ROUTE2483 = ROUTE()
ROUTE2483.setFromField("value_changed")
ROUTE2483.setFromNode("Yaws_head_RotationInterpolator")
ROUTE2483.setToField("rotation")
ROUTE2483.setToNode("hanim_skullbase")

Group2412.addChildren(ROUTE2483)
ROUTE2484 = ROUTE()
ROUTE2484.setFromField("value_changed")
ROUTE2484.setFromNode("Yaws_neck_RotationInterpolator")
ROUTE2484.setToField("rotation")
ROUTE2484.setToNode("hanim_vc4")

Group2412.addChildren(ROUTE2484)
ROUTE2485 = ROUTE()
ROUTE2485.setFromField("value_changed")
ROUTE2485.setFromNode("Yaws_upper_body_RotationInterpolator")
ROUTE2485.setToField("rotation")
ROUTE2485.setToNode("hanim_vl1")

Group2412.addChildren(ROUTE2485)
ROUTE2486 = ROUTE()
ROUTE2486.setFromField("value_changed")
ROUTE2486.setFromNode("Yaws_whole_body_RotationInterpolator")
ROUTE2486.setToField("rotation")
ROUTE2486.setToNode("hanim_humanoid_root")

Group2412.addChildren(ROUTE2486)
ROUTE2487 = ROUTE()
ROUTE2487.setFromField("value_changed")
ROUTE2487.setFromNode("Yaws_whole_body_TranslationInterpolator")
ROUTE2487.setToField("translation")
ROUTE2487.setToNode("hanim_humanoid_root")

Group2412.addChildren(ROUTE2487)
ROUTE2488 = ROUTE()
ROUTE2488.setFromField("value_changed")
ROUTE2488.setFromNode("Yaw_l_sternoclavicular_RollInterpolator")
ROUTE2488.setToField("rotation")
ROUTE2488.setToNode("hanim_l_sternoclavicular")

Group2412.addChildren(ROUTE2488)
ROUTE2489 = ROUTE()
ROUTE2489.setFromField("value_changed")
ROUTE2489.setFromNode("Yaw_l_acromioclavicular_RollInterpolator")
ROUTE2489.setToField("rotation")
ROUTE2489.setToNode("hanim_l_acromioclavicular")

Group2412.addChildren(ROUTE2489)
ROUTE2490 = ROUTE()
ROUTE2490.setFromField("value_changed")
ROUTE2490.setFromNode("Yaw_r_sternoclavicular_RollInterpolator")
ROUTE2490.setToField("rotation")
ROUTE2490.setToNode("hanim_r_sternoclavicular")

Group2412.addChildren(ROUTE2490)
ROUTE2491 = ROUTE()
ROUTE2491.setFromField("value_changed")
ROUTE2491.setFromNode("Yaw_r_acromioclavicular_RollInterpolator")
ROUTE2491.setToField("rotation")
ROUTE2491.setToNode("hanim_r_acromioclavicular")

Group2412.addChildren(ROUTE2491)
ROUTE2492 = ROUTE()
ROUTE2492.setFromField("value_changed")
ROUTE2492.setFromNode("Yaw_r_metatarsal_PitchInterpolator")
ROUTE2492.setToField("rotation")
ROUTE2492.setToNode("hanim_l_metatarsal")

Group2412.addChildren(ROUTE2492)
ROUTE2493 = ROUTE()
ROUTE2493.setFromField("value_changed")
ROUTE2493.setFromNode("Yaw_r_metatarsal_PitchInterpolator")
ROUTE2493.setToField("rotation")
ROUTE2493.setToNode("hanim_r_metatarsal")

Group2412.addChildren(ROUTE2493)
ROUTE2494 = ROUTE()
ROUTE2494.setFromField("value_changed")
ROUTE2494.setFromNode("Yaw_sacroiliac_YawInterpolator")
ROUTE2494.setToField("rotation")
ROUTE2494.setToNode("hanim_sacroiliac")

Group2412.addChildren(ROUTE2494)
ROUTE2495 = ROUTE()
ROUTE2495.setFromField("value_changed")
ROUTE2495.setFromNode("Yaw_vl5_YawInterpolator")
ROUTE2495.setToField("rotation")
ROUTE2495.setToNode("hanim_vl5")

Group2412.addChildren(ROUTE2495)
ROUTE2496 = ROUTE()
ROUTE2496.setFromField("value_changed")
ROUTE2496.setFromNode("Yaw_vc6_YawInterpolator")
ROUTE2496.setToField("rotation")
ROUTE2496.setToNode("hanim_vc6")

Group2412.addChildren(ROUTE2496)
ROUTE2497 = ROUTE()
ROUTE2497.setFromField("value_changed")
ROUTE2497.setFromNode("Yaw_l_thumb1_PitchInterpolator")
ROUTE2497.setToField("rotation")
ROUTE2497.setToNode("hanim_l_thumb1")

Group2412.addChildren(ROUTE2497)
ROUTE2498 = ROUTE()
ROUTE2498.setFromField("value_changed")
ROUTE2498.setFromNode("Yaw_r_thumb1_PitchInterpolator")
ROUTE2498.setToField("rotation")
ROUTE2498.setToNode("hanim_r_thumb1")

Group2412.addChildren(ROUTE2498)

Scene30.addChildren(Group2412)
Group2499 = Group()
Group2499.setDEF("RollsAnimation")
TimeSensor2500 = TimeSensor()
TimeSensor2500.setDEF("RollTimer")
TimeSensor2500.setCycleInterval(5.73)
TimeSensor2500.setLoop(True)

Group2499.addChildren(TimeSensor2500)
OrientationInterpolator2501 = OrientationInterpolator()
OrientationInterpolator2501.setDEF("Roll_r_metatarsal_PitchInterpolator")
OrientationInterpolator2501.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2501.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2501)
OrientationInterpolator2502 = OrientationInterpolator()
OrientationInterpolator2502.setDEF("Rolls_r_ankle_RotationInterpolator")
OrientationInterpolator2502.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2502.setKeyValue([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2502)
OrientationInterpolator2503 = OrientationInterpolator()
OrientationInterpolator2503.setDEF("Rolls_r_knee_RotationInterpolator")
OrientationInterpolator2503.setKey([0,0.5,1])
OrientationInterpolator2503.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2503)
OrientationInterpolator2504 = OrientationInterpolator()
OrientationInterpolator2504.setDEF("Rolls_r_hip_RotationInterpolator")
OrientationInterpolator2504.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2504.setKeyValue([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2504)
OrientationInterpolator2505 = OrientationInterpolator()
OrientationInterpolator2505.setDEF("Rolls_l_ankle_RotationInterpolator")
OrientationInterpolator2505.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2505.setKeyValue([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2505)
OrientationInterpolator2506 = OrientationInterpolator()
OrientationInterpolator2506.setDEF("Rolls_l_knee_RotationInterpolator")
OrientationInterpolator2506.setKey([0,0.5,1])
OrientationInterpolator2506.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2506)
OrientationInterpolator2507 = OrientationInterpolator()
OrientationInterpolator2507.setDEF("Rolls_l_hip_RotationInterpolator")
OrientationInterpolator2507.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2507.setKeyValue([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2507)
OrientationInterpolator2508 = OrientationInterpolator()
OrientationInterpolator2508.setDEF("Rolls_r_wrist_RotationInterpolator")
OrientationInterpolator2508.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2508.setKeyValue([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2508)
OrientationInterpolator2509 = OrientationInterpolator()
OrientationInterpolator2509.setDEF("Rolls_r_elbow_RotationInterpolator")
OrientationInterpolator2509.setKey([0,0.5,1])
OrientationInterpolator2509.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2509)
OrientationInterpolator2510 = OrientationInterpolator()
OrientationInterpolator2510.setDEF("Rolls_r_shoulder_RotationInterpolator")
OrientationInterpolator2510.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2510.setKeyValue([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2510)
OrientationInterpolator2511 = OrientationInterpolator()
OrientationInterpolator2511.setDEF("Rolls_l_wrist_RotationInterpolator")
OrientationInterpolator2511.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2511.setKeyValue([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2511)
OrientationInterpolator2512 = OrientationInterpolator()
OrientationInterpolator2512.setDEF("Rolls_l_elbow_RotationInterpolator")
OrientationInterpolator2512.setKey([0,0.5,1])
OrientationInterpolator2512.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2512)
OrientationInterpolator2513 = OrientationInterpolator()
OrientationInterpolator2513.setDEF("Rolls_l_shoulder_RotationInterpolator")
OrientationInterpolator2513.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2513.setKeyValue([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2513)
OrientationInterpolator2514 = OrientationInterpolator()
OrientationInterpolator2514.setDEF("Rolls_head_RotationInterpolator")
OrientationInterpolator2514.setKey([0,0.5,1])
OrientationInterpolator2514.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2514)
OrientationInterpolator2515 = OrientationInterpolator()
OrientationInterpolator2515.setDEF("Rolls_neck_RotationInterpolator")
OrientationInterpolator2515.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2515.setKeyValue([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2515)
OrientationInterpolator2516 = OrientationInterpolator()
OrientationInterpolator2516.setDEF("Rolls_lower_body_RotationInterpolator")
OrientationInterpolator2516.setKey([0,0.5,1])
OrientationInterpolator2516.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2516)
OrientationInterpolator2517 = OrientationInterpolator()
OrientationInterpolator2517.setDEF("Rolls_upper_body_RotationInterpolator")
OrientationInterpolator2517.setKey([0,0.5,1])
OrientationInterpolator2517.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2517)
OrientationInterpolator2518 = OrientationInterpolator()
OrientationInterpolator2518.setDEF("Rolls_whole_body_RotationInterpolator")
OrientationInterpolator2518.setKey([0,0.5,1])
OrientationInterpolator2518.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2518)
PositionInterpolator2519 = PositionInterpolator()
PositionInterpolator2519.setDEF("Rolls_whole_body_TranslationInterpolator")
PositionInterpolator2519.setKey([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1])
PositionInterpolator2519.setKeyValue([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0])

Group2499.addChildren(PositionInterpolator2519)
OrientationInterpolator2520 = OrientationInterpolator()
OrientationInterpolator2520.setDEF("Roll_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2520.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2520.setKeyValue([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2520)
OrientationInterpolator2521 = OrientationInterpolator()
OrientationInterpolator2521.setDEF("Roll_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2521.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2521.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2521)
OrientationInterpolator2522 = OrientationInterpolator()
OrientationInterpolator2522.setDEF("Roll_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2522.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2522.setKeyValue([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2522)
OrientationInterpolator2523 = OrientationInterpolator()
OrientationInterpolator2523.setDEF("Roll_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2523.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2523.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2523)
OrientationInterpolator2524 = OrientationInterpolator()
OrientationInterpolator2524.setDEF("Roll_sacroiliac_YawInterpolator")
OrientationInterpolator2524.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2524.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2524)
OrientationInterpolator2525 = OrientationInterpolator()
OrientationInterpolator2525.setDEF("Roll_vl5_YawInterpolator")
OrientationInterpolator2525.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2525.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2525)
OrientationInterpolator2526 = OrientationInterpolator()
OrientationInterpolator2526.setDEF("Roll_vc6_YawInterpolator")
OrientationInterpolator2526.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2526.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2526)
OrientationInterpolator2527 = OrientationInterpolator()
OrientationInterpolator2527.setDEF("Roll_l_thumb1_PitchInterpolator")
OrientationInterpolator2527.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2527.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2527)
OrientationInterpolator2528 = OrientationInterpolator()
OrientationInterpolator2528.setDEF("Roll_r_thumb1_PitchInterpolator")
OrientationInterpolator2528.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2528.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2499.addChildren(OrientationInterpolator2528)
ROUTE2529 = ROUTE()
ROUTE2529.setFromField("fraction_changed")
ROUTE2529.setFromNode("RollTimer")
ROUTE2529.setToField("set_fraction")
ROUTE2529.setToNode("Rolls_r_ankle_RotationInterpolator")

Group2499.addChildren(ROUTE2529)
ROUTE2530 = ROUTE()
ROUTE2530.setFromField("fraction_changed")
ROUTE2530.setFromNode("RollTimer")
ROUTE2530.setToField("set_fraction")
ROUTE2530.setToNode("Rolls_r_knee_RotationInterpolator")

Group2499.addChildren(ROUTE2530)
ROUTE2531 = ROUTE()
ROUTE2531.setFromField("fraction_changed")
ROUTE2531.setFromNode("RollTimer")
ROUTE2531.setToField("set_fraction")
ROUTE2531.setToNode("Rolls_r_hip_RotationInterpolator")

Group2499.addChildren(ROUTE2531)
ROUTE2532 = ROUTE()
ROUTE2532.setFromField("fraction_changed")
ROUTE2532.setFromNode("RollTimer")
ROUTE2532.setToField("set_fraction")
ROUTE2532.setToNode("Rolls_l_ankle_RotationInterpolator")

Group2499.addChildren(ROUTE2532)
ROUTE2533 = ROUTE()
ROUTE2533.setFromField("fraction_changed")
ROUTE2533.setFromNode("RollTimer")
ROUTE2533.setToField("set_fraction")
ROUTE2533.setToNode("Rolls_l_knee_RotationInterpolator")

Group2499.addChildren(ROUTE2533)
ROUTE2534 = ROUTE()
ROUTE2534.setFromField("fraction_changed")
ROUTE2534.setFromNode("RollTimer")
ROUTE2534.setToField("set_fraction")
ROUTE2534.setToNode("Rolls_l_hip_RotationInterpolator")

Group2499.addChildren(ROUTE2534)
ROUTE2535 = ROUTE()
ROUTE2535.setFromField("fraction_changed")
ROUTE2535.setFromNode("RollTimer")
ROUTE2535.setToField("set_fraction")
ROUTE2535.setToNode("Rolls_lower_body_RotationInterpolator")

Group2499.addChildren(ROUTE2535)
ROUTE2536 = ROUTE()
ROUTE2536.setFromField("fraction_changed")
ROUTE2536.setFromNode("RollTimer")
ROUTE2536.setToField("set_fraction")
ROUTE2536.setToNode("Rolls_r_wrist_RotationInterpolator")

Group2499.addChildren(ROUTE2536)
ROUTE2537 = ROUTE()
ROUTE2537.setFromField("fraction_changed")
ROUTE2537.setFromNode("RollTimer")
ROUTE2537.setToField("set_fraction")
ROUTE2537.setToNode("Rolls_r_elbow_RotationInterpolator")

Group2499.addChildren(ROUTE2537)
ROUTE2538 = ROUTE()
ROUTE2538.setFromField("fraction_changed")
ROUTE2538.setFromNode("RollTimer")
ROUTE2538.setToField("set_fraction")
ROUTE2538.setToNode("Rolls_r_shoulder_RotationInterpolator")

Group2499.addChildren(ROUTE2538)
ROUTE2539 = ROUTE()
ROUTE2539.setFromField("fraction_changed")
ROUTE2539.setFromNode("RollTimer")
ROUTE2539.setToField("set_fraction")
ROUTE2539.setToNode("Rolls_l_wrist_RotationInterpolator")

Group2499.addChildren(ROUTE2539)
ROUTE2540 = ROUTE()
ROUTE2540.setFromField("fraction_changed")
ROUTE2540.setFromNode("RollTimer")
ROUTE2540.setToField("set_fraction")
ROUTE2540.setToNode("Rolls_l_elbow_RotationInterpolator")

Group2499.addChildren(ROUTE2540)
ROUTE2541 = ROUTE()
ROUTE2541.setFromField("fraction_changed")
ROUTE2541.setFromNode("RollTimer")
ROUTE2541.setToField("set_fraction")
ROUTE2541.setToNode("Rolls_l_shoulder_RotationInterpolator")

Group2499.addChildren(ROUTE2541)
ROUTE2542 = ROUTE()
ROUTE2542.setFromField("fraction_changed")
ROUTE2542.setFromNode("RollTimer")
ROUTE2542.setToField("set_fraction")
ROUTE2542.setToNode("Rolls_head_RotationInterpolator")

Group2499.addChildren(ROUTE2542)
ROUTE2543 = ROUTE()
ROUTE2543.setFromField("fraction_changed")
ROUTE2543.setFromNode("RollTimer")
ROUTE2543.setToField("set_fraction")
ROUTE2543.setToNode("Rolls_neck_RotationInterpolator")

Group2499.addChildren(ROUTE2543)
ROUTE2544 = ROUTE()
ROUTE2544.setFromField("fraction_changed")
ROUTE2544.setFromNode("RollTimer")
ROUTE2544.setToField("set_fraction")
ROUTE2544.setToNode("Rolls_upper_body_RotationInterpolator")

Group2499.addChildren(ROUTE2544)
ROUTE2545 = ROUTE()
ROUTE2545.setFromField("fraction_changed")
ROUTE2545.setFromNode("RollTimer")
ROUTE2545.setToField("set_fraction")
ROUTE2545.setToNode("Rolls_whole_body_RotationInterpolator")

Group2499.addChildren(ROUTE2545)
ROUTE2546 = ROUTE()
ROUTE2546.setFromField("fraction_changed")
ROUTE2546.setFromNode("RollTimer")
ROUTE2546.setToField("set_fraction")
ROUTE2546.setToNode("Rolls_whole_body_TranslationInterpolator")

Group2499.addChildren(ROUTE2546)
ROUTE2547 = ROUTE()
ROUTE2547.setFromField("fraction_changed")
ROUTE2547.setFromNode("RollTimer")
ROUTE2547.setToField("set_fraction")
ROUTE2547.setToNode("Roll_l_sternoclavicular_RollInterpolator")

Group2499.addChildren(ROUTE2547)
ROUTE2548 = ROUTE()
ROUTE2548.setFromField("fraction_changed")
ROUTE2548.setFromNode("RollTimer")
ROUTE2548.setToField("set_fraction")
ROUTE2548.setToNode("Roll_l_acromioclavicular_RollInterpolator")

Group2499.addChildren(ROUTE2548)
ROUTE2549 = ROUTE()
ROUTE2549.setFromField("fraction_changed")
ROUTE2549.setFromNode("RollTimer")
ROUTE2549.setToField("set_fraction")
ROUTE2549.setToNode("Roll_r_sternoclavicular_RollInterpolator")

Group2499.addChildren(ROUTE2549)
ROUTE2550 = ROUTE()
ROUTE2550.setFromField("fraction_changed")
ROUTE2550.setFromNode("RollTimer")
ROUTE2550.setToField("set_fraction")
ROUTE2550.setToNode("Roll_r_acromioclavicular_RollInterpolator")

Group2499.addChildren(ROUTE2550)
ROUTE2551 = ROUTE()
ROUTE2551.setFromField("fraction_changed")
ROUTE2551.setFromNode("RollTimer")
ROUTE2551.setToField("set_fraction")
ROUTE2551.setToNode("Roll_r_metatarsal_PitchInterpolator")

Group2499.addChildren(ROUTE2551)
ROUTE2552 = ROUTE()
ROUTE2552.setFromField("fraction_changed")
ROUTE2552.setFromNode("RollTimer")
ROUTE2552.setToField("set_fraction")
ROUTE2552.setToNode("Roll_sacroiliac_YawInterpolator")

Group2499.addChildren(ROUTE2552)
ROUTE2553 = ROUTE()
ROUTE2553.setFromField("fraction_changed")
ROUTE2553.setFromNode("RollTimer")
ROUTE2553.setToField("set_fraction")
ROUTE2553.setToNode("Roll_vl5_YawInterpolator")

Group2499.addChildren(ROUTE2553)
ROUTE2554 = ROUTE()
ROUTE2554.setFromField("fraction_changed")
ROUTE2554.setFromNode("RollTimer")
ROUTE2554.setToField("set_fraction")
ROUTE2554.setToNode("Roll_vc6_YawInterpolator")

Group2499.addChildren(ROUTE2554)
ROUTE2555 = ROUTE()
ROUTE2555.setFromField("fraction_changed")
ROUTE2555.setFromNode("RollTimer")
ROUTE2555.setToField("set_fraction")
ROUTE2555.setToNode("Roll_l_thumb1_PitchInterpolator")

Group2499.addChildren(ROUTE2555)
ROUTE2556 = ROUTE()
ROUTE2556.setFromField("fraction_changed")
ROUTE2556.setFromNode("RollTimer")
ROUTE2556.setToField("set_fraction")
ROUTE2556.setToNode("Roll_r_thumb1_PitchInterpolator")

Group2499.addChildren(ROUTE2556)
ROUTE2557 = ROUTE()
ROUTE2557.setFromField("value_changed")
ROUTE2557.setFromNode("Rolls_r_ankle_RotationInterpolator")
ROUTE2557.setToField("rotation")
ROUTE2557.setToNode("hanim_r_ankle")

Group2499.addChildren(ROUTE2557)
ROUTE2558 = ROUTE()
ROUTE2558.setFromField("value_changed")
ROUTE2558.setFromNode("Rolls_r_knee_RotationInterpolator")
ROUTE2558.setToField("rotation")
ROUTE2558.setToNode("hanim_r_knee")

Group2499.addChildren(ROUTE2558)
ROUTE2559 = ROUTE()
ROUTE2559.setFromField("value_changed")
ROUTE2559.setFromNode("Rolls_r_hip_RotationInterpolator")
ROUTE2559.setToField("rotation")
ROUTE2559.setToNode("hanim_r_hip")

Group2499.addChildren(ROUTE2559)
ROUTE2560 = ROUTE()
ROUTE2560.setFromField("value_changed")
ROUTE2560.setFromNode("Rolls_l_ankle_RotationInterpolator")
ROUTE2560.setToField("rotation")
ROUTE2560.setToNode("hanim_l_ankle")

Group2499.addChildren(ROUTE2560)
ROUTE2561 = ROUTE()
ROUTE2561.setFromField("value_changed")
ROUTE2561.setFromNode("Rolls_l_knee_RotationInterpolator")
ROUTE2561.setToField("rotation")
ROUTE2561.setToNode("hanim_l_knee")

Group2499.addChildren(ROUTE2561)
ROUTE2562 = ROUTE()
ROUTE2562.setFromField("value_changed")
ROUTE2562.setFromNode("Rolls_l_hip_RotationInterpolator")
ROUTE2562.setToField("rotation")
ROUTE2562.setToNode("hanim_l_hip")

Group2499.addChildren(ROUTE2562)
ROUTE2563 = ROUTE()
ROUTE2563.setFromField("value_changed")
ROUTE2563.setFromNode("Rolls_lower_body_RotationInterpolator")
ROUTE2563.setToField("rotation")
ROUTE2563.setToNode("hanim_sacroiliac")

Group2499.addChildren(ROUTE2563)
ROUTE2564 = ROUTE()
ROUTE2564.setFromField("value_changed")
ROUTE2564.setFromNode("Rolls_r_wrist_RotationInterpolator")
ROUTE2564.setToField("rotation")
ROUTE2564.setToNode("hanim_r_wrist")

Group2499.addChildren(ROUTE2564)
ROUTE2565 = ROUTE()
ROUTE2565.setFromField("value_changed")
ROUTE2565.setFromNode("Rolls_r_elbow_RotationInterpolator")
ROUTE2565.setToField("rotation")
ROUTE2565.setToNode("hanim_r_elbow")

Group2499.addChildren(ROUTE2565)
ROUTE2566 = ROUTE()
ROUTE2566.setFromField("value_changed")
ROUTE2566.setFromNode("Rolls_r_shoulder_RotationInterpolator")
ROUTE2566.setToField("rotation")
ROUTE2566.setToNode("hanim_r_shoulder")

Group2499.addChildren(ROUTE2566)
ROUTE2567 = ROUTE()
ROUTE2567.setFromField("value_changed")
ROUTE2567.setFromNode("Rolls_l_wrist_RotationInterpolator")
ROUTE2567.setToField("rotation")
ROUTE2567.setToNode("hanim_l_wrist")

Group2499.addChildren(ROUTE2567)
ROUTE2568 = ROUTE()
ROUTE2568.setFromField("value_changed")
ROUTE2568.setFromNode("Rolls_l_elbow_RotationInterpolator")
ROUTE2568.setToField("rotation")
ROUTE2568.setToNode("hanim_l_elbow")

Group2499.addChildren(ROUTE2568)
ROUTE2569 = ROUTE()
ROUTE2569.setFromField("value_changed")
ROUTE2569.setFromNode("Rolls_l_shoulder_RotationInterpolator")
ROUTE2569.setToField("rotation")
ROUTE2569.setToNode("hanim_l_shoulder")

Group2499.addChildren(ROUTE2569)
ROUTE2570 = ROUTE()
ROUTE2570.setFromField("value_changed")
ROUTE2570.setFromNode("Rolls_head_RotationInterpolator")
ROUTE2570.setToField("rotation")
ROUTE2570.setToNode("hanim_skullbase")

Group2499.addChildren(ROUTE2570)
ROUTE2571 = ROUTE()
ROUTE2571.setFromField("value_changed")
ROUTE2571.setFromNode("Rolls_neck_RotationInterpolator")
ROUTE2571.setToField("rotation")
ROUTE2571.setToNode("hanim_vc4")

Group2499.addChildren(ROUTE2571)
ROUTE2572 = ROUTE()
ROUTE2572.setFromField("value_changed")
ROUTE2572.setFromNode("Rolls_upper_body_RotationInterpolator")
ROUTE2572.setToField("rotation")
ROUTE2572.setToNode("hanim_vl1")

Group2499.addChildren(ROUTE2572)
ROUTE2573 = ROUTE()
ROUTE2573.setFromField("value_changed")
ROUTE2573.setFromNode("Rolls_whole_body_RotationInterpolator")
ROUTE2573.setToField("rotation")
ROUTE2573.setToNode("hanim_humanoid_root")

Group2499.addChildren(ROUTE2573)
ROUTE2574 = ROUTE()
ROUTE2574.setFromField("value_changed")
ROUTE2574.setFromNode("Rolls_whole_body_TranslationInterpolator")
ROUTE2574.setToField("translation")
ROUTE2574.setToNode("hanim_humanoid_root")

Group2499.addChildren(ROUTE2574)
ROUTE2575 = ROUTE()
ROUTE2575.setFromField("value_changed")
ROUTE2575.setFromNode("Roll_l_sternoclavicular_RollInterpolator")
ROUTE2575.setToField("rotation")
ROUTE2575.setToNode("hanim_l_sternoclavicular")

Group2499.addChildren(ROUTE2575)
ROUTE2576 = ROUTE()
ROUTE2576.setFromField("value_changed")
ROUTE2576.setFromNode("Roll_l_acromioclavicular_RollInterpolator")
ROUTE2576.setToField("rotation")
ROUTE2576.setToNode("hanim_l_acromioclavicular")

Group2499.addChildren(ROUTE2576)
ROUTE2577 = ROUTE()
ROUTE2577.setFromField("value_changed")
ROUTE2577.setFromNode("Roll_r_sternoclavicular_RollInterpolator")
ROUTE2577.setToField("rotation")
ROUTE2577.setToNode("hanim_r_sternoclavicular")

Group2499.addChildren(ROUTE2577)
ROUTE2578 = ROUTE()
ROUTE2578.setFromField("value_changed")
ROUTE2578.setFromNode("Roll_r_acromioclavicular_RollInterpolator")
ROUTE2578.setToField("rotation")
ROUTE2578.setToNode("hanim_r_acromioclavicular")

Group2499.addChildren(ROUTE2578)
ROUTE2579 = ROUTE()
ROUTE2579.setFromField("value_changed")
ROUTE2579.setFromNode("Roll_r_metatarsal_PitchInterpolator")
ROUTE2579.setToField("rotation")
ROUTE2579.setToNode("hanim_l_metatarsal")

Group2499.addChildren(ROUTE2579)
ROUTE2580 = ROUTE()
ROUTE2580.setFromField("value_changed")
ROUTE2580.setFromNode("Roll_r_metatarsal_PitchInterpolator")
ROUTE2580.setToField("rotation")
ROUTE2580.setToNode("hanim_r_metatarsal")

Group2499.addChildren(ROUTE2580)
ROUTE2581 = ROUTE()
ROUTE2581.setFromField("value_changed")
ROUTE2581.setFromNode("Roll_sacroiliac_YawInterpolator")
ROUTE2581.setToField("rotation")
ROUTE2581.setToNode("hanim_sacroiliac")

Group2499.addChildren(ROUTE2581)
ROUTE2582 = ROUTE()
ROUTE2582.setFromField("value_changed")
ROUTE2582.setFromNode("Roll_vl5_YawInterpolator")
ROUTE2582.setToField("rotation")
ROUTE2582.setToNode("hanim_vl5")

Group2499.addChildren(ROUTE2582)
ROUTE2583 = ROUTE()
ROUTE2583.setFromField("value_changed")
ROUTE2583.setFromNode("Roll_vc6_YawInterpolator")
ROUTE2583.setToField("rotation")
ROUTE2583.setToNode("hanim_vc6")

Group2499.addChildren(ROUTE2583)
ROUTE2584 = ROUTE()
ROUTE2584.setFromField("value_changed")
ROUTE2584.setFromNode("Roll_l_thumb1_PitchInterpolator")
ROUTE2584.setToField("rotation")
ROUTE2584.setToNode("hanim_l_thumb1")

Group2499.addChildren(ROUTE2584)
ROUTE2585 = ROUTE()
ROUTE2585.setFromField("value_changed")
ROUTE2585.setFromNode("Roll_r_thumb1_PitchInterpolator")
ROUTE2585.setToField("rotation")
ROUTE2585.setToNode("hanim_r_thumb1")

Group2499.addChildren(ROUTE2585)

Scene30.addChildren(Group2499)
Group2586 = Group()
Group2586.setDEF("WalkAnimation")
TimeSensor2587 = TimeSensor()
TimeSensor2587.setDEF("WalkTimer")
TimeSensor2587.setCycleInterval(1.73)
TimeSensor2587.setLoop(True)

Group2586.addChildren(TimeSensor2587)
OrientationInterpolator2588 = OrientationInterpolator()
OrientationInterpolator2588.setDEF("Walk_r_metatarsal_PitchInterpolator")
OrientationInterpolator2588.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2588.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2588)
OrientationInterpolator2589 = OrientationInterpolator()
OrientationInterpolator2589.setDEF("Walk_r_ankle_RotationInterpolator")
OrientationInterpolator2589.setKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1])
OrientationInterpolator2589.setKeyValue([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2589)
OrientationInterpolator2590 = OrientationInterpolator()
OrientationInterpolator2590.setDEF("Walk_r_knee_RotationInterpolator")
OrientationInterpolator2590.setKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator2590.setKeyValue([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573])

Group2586.addChildren(OrientationInterpolator2590)
OrientationInterpolator2591 = OrientationInterpolator()
OrientationInterpolator2591.setDEF("Walk_r_hip_RotationInterpolator")
OrientationInterpolator2591.setKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator2591.setKeyValue([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])

Group2586.addChildren(OrientationInterpolator2591)
OrientationInterpolator2592 = OrientationInterpolator()
OrientationInterpolator2592.setDEF("Walk_l_ankle_RotationInterpolator")
OrientationInterpolator2592.setKey([0,0.125,0.2083,0.375,0.6667,0.9167,1])
OrientationInterpolator2592.setKeyValue([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714])

Group2586.addChildren(OrientationInterpolator2592)
OrientationInterpolator2593 = OrientationInterpolator()
OrientationInterpolator2593.setDEF("Walk_l_knee_RotationInterpolator")
OrientationInterpolator2593.setKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator2593.setKeyValue([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])

Group2586.addChildren(OrientationInterpolator2593)
OrientationInterpolator2594 = OrientationInterpolator()
OrientationInterpolator2594.setDEF("Walk_l_hip_RotationInterpolator")
OrientationInterpolator2594.setKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1])
OrientationInterpolator2594.setKeyValue([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])

Group2586.addChildren(OrientationInterpolator2594)
OrientationInterpolator2595 = OrientationInterpolator()
OrientationInterpolator2595.setDEF("Walk_lower_body_RotationInterpolator")
OrientationInterpolator2595.setKey([0,0.5,1])
OrientationInterpolator2595.setKeyValue([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])

Group2586.addChildren(OrientationInterpolator2595)
OrientationInterpolator2596 = OrientationInterpolator()
OrientationInterpolator2596.setDEF("Walk_r_wrist_RotationInterpolator")
OrientationInterpolator2596.setKey([0,0.375,0.9167,1])
OrientationInterpolator2596.setKeyValue([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346])

Group2586.addChildren(OrientationInterpolator2596)
OrientationInterpolator2597 = OrientationInterpolator()
OrientationInterpolator2597.setDEF("Walk_r_elbow_RotationInterpolator")
OrientationInterpolator2597.setKey([0,0.375,0.9167,1])
OrientationInterpolator2597.setKeyValue([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508])

Group2586.addChildren(OrientationInterpolator2597)
OrientationInterpolator2598 = OrientationInterpolator()
OrientationInterpolator2598.setDEF("Walk_r_shoulder_RotationInterpolator")
OrientationInterpolator2598.setKey([0,0.375,0.9167,1])
OrientationInterpolator2598.setKeyValue([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346])

Group2586.addChildren(OrientationInterpolator2598)
OrientationInterpolator2599 = OrientationInterpolator()
OrientationInterpolator2599.setDEF("Walk_l_wrist_RotationInterpolator")
OrientationInterpolator2599.setKey([0,0.375,0.9167,1])
OrientationInterpolator2599.setKeyValue([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076])

Group2586.addChildren(OrientationInterpolator2599)
OrientationInterpolator2600 = OrientationInterpolator()
OrientationInterpolator2600.setDEF("Walk_l_elbow_RotationInterpolator")
OrientationInterpolator2600.setKey([0,0.375,0.9167,1])
OrientationInterpolator2600.setKeyValue([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878])

Group2586.addChildren(OrientationInterpolator2600)
OrientationInterpolator2601 = OrientationInterpolator()
OrientationInterpolator2601.setDEF("Walk_l_shoulder_RotationInterpolator")
OrientationInterpolator2601.setKey([0,0.375,0.9167,1])
OrientationInterpolator2601.setKeyValue([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189])

Group2586.addChildren(OrientationInterpolator2601)
OrientationInterpolator2602 = OrientationInterpolator()
OrientationInterpolator2602.setDEF("Walk_head_RotationInterpolator")
OrientationInterpolator2602.setKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1])
OrientationInterpolator2602.setKeyValue([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642])

Group2586.addChildren(OrientationInterpolator2602)
OrientationInterpolator2603 = OrientationInterpolator()
OrientationInterpolator2603.setDEF("Walk_neck_RotationInterpolator")
OrientationInterpolator2603.setKey([0,1])
OrientationInterpolator2603.setKeyValue([0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2603)
OrientationInterpolator2604 = OrientationInterpolator()
OrientationInterpolator2604.setDEF("Walk_upper_body_RotationInterpolator")
OrientationInterpolator2604.setKey([0,0.2083,0.375,0.75,0.8333,1])
OrientationInterpolator2604.setKeyValue([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])

Group2586.addChildren(OrientationInterpolator2604)
OrientationInterpolator2605 = OrientationInterpolator()
OrientationInterpolator2605.setDEF("Walk_whole_body_RotationInterpolator")
OrientationInterpolator2605.setKey([0,1])
OrientationInterpolator2605.setKeyValue([0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2605)
PositionInterpolator2606 = PositionInterpolator()
PositionInterpolator2606.setDEF("Walk_whole_body_TranslationInterpolator")
PositionInterpolator2606.setKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1])
PositionInterpolator2606.setKeyValue([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])

Group2586.addChildren(PositionInterpolator2606)
OrientationInterpolator2607 = OrientationInterpolator()
OrientationInterpolator2607.setDEF("Walk_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2607.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2607.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2607)
OrientationInterpolator2608 = OrientationInterpolator()
OrientationInterpolator2608.setDEF("Walk_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2608.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2608.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2608)
OrientationInterpolator2609 = OrientationInterpolator()
OrientationInterpolator2609.setDEF("Walk_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2609.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2609.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2609)
OrientationInterpolator2610 = OrientationInterpolator()
OrientationInterpolator2610.setDEF("Walk_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2610.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2610.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2610)
OrientationInterpolator2611 = OrientationInterpolator()
OrientationInterpolator2611.setDEF("Walk_sacroiliac_YawInterpolator")
OrientationInterpolator2611.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2611.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2611)
OrientationInterpolator2612 = OrientationInterpolator()
OrientationInterpolator2612.setDEF("Walk_vl5_YawInterpolator")
OrientationInterpolator2612.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2612.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2612)
OrientationInterpolator2613 = OrientationInterpolator()
OrientationInterpolator2613.setDEF("Walk_vc6_YawInterpolator")
OrientationInterpolator2613.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2613.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2586.addChildren(OrientationInterpolator2613)
OrientationInterpolator2614 = OrientationInterpolator()
OrientationInterpolator2614.setDEF("Walk_l_thumb1_PitchInterpolator")
OrientationInterpolator2614.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2614.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2586.addChildren(OrientationInterpolator2614)
OrientationInterpolator2615 = OrientationInterpolator()
OrientationInterpolator2615.setDEF("Walk_r_thumb1_PitchInterpolator")
OrientationInterpolator2615.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2615.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2586.addChildren(OrientationInterpolator2615)
ROUTE2616 = ROUTE()
ROUTE2616.setFromField("fraction_changed")
ROUTE2616.setFromNode("WalkTimer")
ROUTE2616.setToField("set_fraction")
ROUTE2616.setToNode("Walk_r_ankle_RotationInterpolator")

Group2586.addChildren(ROUTE2616)
ROUTE2617 = ROUTE()
ROUTE2617.setFromField("fraction_changed")
ROUTE2617.setFromNode("WalkTimer")
ROUTE2617.setToField("set_fraction")
ROUTE2617.setToNode("Walk_r_knee_RotationInterpolator")

Group2586.addChildren(ROUTE2617)
ROUTE2618 = ROUTE()
ROUTE2618.setFromField("fraction_changed")
ROUTE2618.setFromNode("WalkTimer")
ROUTE2618.setToField("set_fraction")
ROUTE2618.setToNode("Walk_r_hip_RotationInterpolator")

Group2586.addChildren(ROUTE2618)
ROUTE2619 = ROUTE()
ROUTE2619.setFromField("fraction_changed")
ROUTE2619.setFromNode("WalkTimer")
ROUTE2619.setToField("set_fraction")
ROUTE2619.setToNode("Walk_l_ankle_RotationInterpolator")

Group2586.addChildren(ROUTE2619)
ROUTE2620 = ROUTE()
ROUTE2620.setFromField("fraction_changed")
ROUTE2620.setFromNode("WalkTimer")
ROUTE2620.setToField("set_fraction")
ROUTE2620.setToNode("Walk_l_knee_RotationInterpolator")

Group2586.addChildren(ROUTE2620)
ROUTE2621 = ROUTE()
ROUTE2621.setFromField("fraction_changed")
ROUTE2621.setFromNode("WalkTimer")
ROUTE2621.setToField("set_fraction")
ROUTE2621.setToNode("Walk_l_hip_RotationInterpolator")

Group2586.addChildren(ROUTE2621)
ROUTE2622 = ROUTE()
ROUTE2622.setFromField("fraction_changed")
ROUTE2622.setFromNode("WalkTimer")
ROUTE2622.setToField("set_fraction")
ROUTE2622.setToNode("Walk_lower_body_RotationInterpolator")

Group2586.addChildren(ROUTE2622)
ROUTE2623 = ROUTE()
ROUTE2623.setFromField("fraction_changed")
ROUTE2623.setFromNode("WalkTimer")
ROUTE2623.setToField("set_fraction")
ROUTE2623.setToNode("Walk_r_wrist_RotationInterpolator")

Group2586.addChildren(ROUTE2623)
ROUTE2624 = ROUTE()
ROUTE2624.setFromField("fraction_changed")
ROUTE2624.setFromNode("WalkTimer")
ROUTE2624.setToField("set_fraction")
ROUTE2624.setToNode("Walk_r_elbow_RotationInterpolator")

Group2586.addChildren(ROUTE2624)
ROUTE2625 = ROUTE()
ROUTE2625.setFromField("fraction_changed")
ROUTE2625.setFromNode("WalkTimer")
ROUTE2625.setToField("set_fraction")
ROUTE2625.setToNode("Walk_r_shoulder_RotationInterpolator")

Group2586.addChildren(ROUTE2625)
ROUTE2626 = ROUTE()
ROUTE2626.setFromField("fraction_changed")
ROUTE2626.setFromNode("WalkTimer")
ROUTE2626.setToField("set_fraction")
ROUTE2626.setToNode("Walk_l_wrist_RotationInterpolator")

Group2586.addChildren(ROUTE2626)
ROUTE2627 = ROUTE()
ROUTE2627.setFromField("fraction_changed")
ROUTE2627.setFromNode("WalkTimer")
ROUTE2627.setToField("set_fraction")
ROUTE2627.setToNode("Walk_l_elbow_RotationInterpolator")

Group2586.addChildren(ROUTE2627)
ROUTE2628 = ROUTE()
ROUTE2628.setFromField("fraction_changed")
ROUTE2628.setFromNode("WalkTimer")
ROUTE2628.setToField("set_fraction")
ROUTE2628.setToNode("Walk_l_shoulder_RotationInterpolator")

Group2586.addChildren(ROUTE2628)
ROUTE2629 = ROUTE()
ROUTE2629.setFromField("fraction_changed")
ROUTE2629.setFromNode("WalkTimer")
ROUTE2629.setToField("set_fraction")
ROUTE2629.setToNode("Walk_head_RotationInterpolator")

Group2586.addChildren(ROUTE2629)
ROUTE2630 = ROUTE()
ROUTE2630.setFromField("fraction_changed")
ROUTE2630.setFromNode("WalkTimer")
ROUTE2630.setToField("set_fraction")
ROUTE2630.setToNode("Walk_neck_RotationInterpolator")

Group2586.addChildren(ROUTE2630)
ROUTE2631 = ROUTE()
ROUTE2631.setFromField("fraction_changed")
ROUTE2631.setFromNode("WalkTimer")
ROUTE2631.setToField("set_fraction")
ROUTE2631.setToNode("Walk_upper_body_RotationInterpolator")

Group2586.addChildren(ROUTE2631)
ROUTE2632 = ROUTE()
ROUTE2632.setFromField("fraction_changed")
ROUTE2632.setFromNode("WalkTimer")
ROUTE2632.setToField("set_fraction")
ROUTE2632.setToNode("Walk_whole_body_RotationInterpolator")

Group2586.addChildren(ROUTE2632)
ROUTE2633 = ROUTE()
ROUTE2633.setFromField("fraction_changed")
ROUTE2633.setFromNode("WalkTimer")
ROUTE2633.setToField("set_fraction")
ROUTE2633.setToNode("Walk_whole_body_TranslationInterpolator")

Group2586.addChildren(ROUTE2633)
ROUTE2634 = ROUTE()
ROUTE2634.setFromField("fraction_changed")
ROUTE2634.setFromNode("WalkTimer")
ROUTE2634.setToField("set_fraction")
ROUTE2634.setToNode("Walk_l_sternoclavicular_RollInterpolator")

Group2586.addChildren(ROUTE2634)
ROUTE2635 = ROUTE()
ROUTE2635.setFromField("fraction_changed")
ROUTE2635.setFromNode("WalkTimer")
ROUTE2635.setToField("set_fraction")
ROUTE2635.setToNode("Walk_l_acromioclavicular_RollInterpolator")

Group2586.addChildren(ROUTE2635)
ROUTE2636 = ROUTE()
ROUTE2636.setFromField("fraction_changed")
ROUTE2636.setFromNode("WalkTimer")
ROUTE2636.setToField("set_fraction")
ROUTE2636.setToNode("Walk_r_sternoclavicular_RollInterpolator")

Group2586.addChildren(ROUTE2636)
ROUTE2637 = ROUTE()
ROUTE2637.setFromField("fraction_changed")
ROUTE2637.setFromNode("WalkTimer")
ROUTE2637.setToField("set_fraction")
ROUTE2637.setToNode("Walk_r_acromioclavicular_RollInterpolator")

Group2586.addChildren(ROUTE2637)
ROUTE2638 = ROUTE()
ROUTE2638.setFromField("fraction_changed")
ROUTE2638.setFromNode("WalkTimer")
ROUTE2638.setToField("set_fraction")
ROUTE2638.setToNode("Walk_r_metatarsal_PitchInterpolator")

Group2586.addChildren(ROUTE2638)
ROUTE2639 = ROUTE()
ROUTE2639.setFromField("fraction_changed")
ROUTE2639.setFromNode("WalkTimer")
ROUTE2639.setToField("set_fraction")
ROUTE2639.setToNode("Walk_sacroiliac_YawInterpolator")

Group2586.addChildren(ROUTE2639)
ROUTE2640 = ROUTE()
ROUTE2640.setFromField("fraction_changed")
ROUTE2640.setFromNode("WalkTimer")
ROUTE2640.setToField("set_fraction")
ROUTE2640.setToNode("Walk_vl5_YawInterpolator")

Group2586.addChildren(ROUTE2640)
ROUTE2641 = ROUTE()
ROUTE2641.setFromField("fraction_changed")
ROUTE2641.setFromNode("WalkTimer")
ROUTE2641.setToField("set_fraction")
ROUTE2641.setToNode("Walk_vc6_YawInterpolator")

Group2586.addChildren(ROUTE2641)
ROUTE2642 = ROUTE()
ROUTE2642.setFromField("fraction_changed")
ROUTE2642.setFromNode("WalkTimer")
ROUTE2642.setToField("set_fraction")
ROUTE2642.setToNode("Walk_l_thumb1_PitchInterpolator")

Group2586.addChildren(ROUTE2642)
ROUTE2643 = ROUTE()
ROUTE2643.setFromField("fraction_changed")
ROUTE2643.setFromNode("WalkTimer")
ROUTE2643.setToField("set_fraction")
ROUTE2643.setToNode("Walk_r_thumb1_PitchInterpolator")

Group2586.addChildren(ROUTE2643)
ROUTE2644 = ROUTE()
ROUTE2644.setFromField("value_changed")
ROUTE2644.setFromNode("Walk_r_ankle_RotationInterpolator")
ROUTE2644.setToField("rotation")
ROUTE2644.setToNode("hanim_r_ankle")

Group2586.addChildren(ROUTE2644)
ROUTE2645 = ROUTE()
ROUTE2645.setFromField("value_changed")
ROUTE2645.setFromNode("Walk_r_knee_RotationInterpolator")
ROUTE2645.setToField("rotation")
ROUTE2645.setToNode("hanim_r_knee")

Group2586.addChildren(ROUTE2645)
ROUTE2646 = ROUTE()
ROUTE2646.setFromField("value_changed")
ROUTE2646.setFromNode("Walk_r_hip_RotationInterpolator")
ROUTE2646.setToField("rotation")
ROUTE2646.setToNode("hanim_r_hip")

Group2586.addChildren(ROUTE2646)
ROUTE2647 = ROUTE()
ROUTE2647.setFromField("value_changed")
ROUTE2647.setFromNode("Walk_l_ankle_RotationInterpolator")
ROUTE2647.setToField("rotation")
ROUTE2647.setToNode("hanim_l_ankle")

Group2586.addChildren(ROUTE2647)
ROUTE2648 = ROUTE()
ROUTE2648.setFromField("value_changed")
ROUTE2648.setFromNode("Walk_l_knee_RotationInterpolator")
ROUTE2648.setToField("rotation")
ROUTE2648.setToNode("hanim_l_knee")

Group2586.addChildren(ROUTE2648)
ROUTE2649 = ROUTE()
ROUTE2649.setFromField("value_changed")
ROUTE2649.setFromNode("Walk_l_hip_RotationInterpolator")
ROUTE2649.setToField("rotation")
ROUTE2649.setToNode("hanim_l_hip")

Group2586.addChildren(ROUTE2649)
ROUTE2650 = ROUTE()
ROUTE2650.setFromField("value_changed")
ROUTE2650.setFromNode("Walk_lower_body_RotationInterpolator")
ROUTE2650.setToField("rotation")
ROUTE2650.setToNode("hanim_sacroiliac")

Group2586.addChildren(ROUTE2650)
ROUTE2651 = ROUTE()
ROUTE2651.setFromField("value_changed")
ROUTE2651.setFromNode("Walk_r_wrist_RotationInterpolator")
ROUTE2651.setToField("rotation")
ROUTE2651.setToNode("hanim_r_wrist")

Group2586.addChildren(ROUTE2651)
ROUTE2652 = ROUTE()
ROUTE2652.setFromField("value_changed")
ROUTE2652.setFromNode("Walk_r_elbow_RotationInterpolator")
ROUTE2652.setToField("rotation")
ROUTE2652.setToNode("hanim_r_elbow")

Group2586.addChildren(ROUTE2652)
ROUTE2653 = ROUTE()
ROUTE2653.setFromField("value_changed")
ROUTE2653.setFromNode("Walk_r_shoulder_RotationInterpolator")
ROUTE2653.setToField("rotation")
ROUTE2653.setToNode("hanim_r_shoulder")

Group2586.addChildren(ROUTE2653)
ROUTE2654 = ROUTE()
ROUTE2654.setFromField("value_changed")
ROUTE2654.setFromNode("Walk_l_wrist_RotationInterpolator")
ROUTE2654.setToField("rotation")
ROUTE2654.setToNode("hanim_l_wrist")

Group2586.addChildren(ROUTE2654)
ROUTE2655 = ROUTE()
ROUTE2655.setFromField("value_changed")
ROUTE2655.setFromNode("Walk_l_elbow_RotationInterpolator")
ROUTE2655.setToField("rotation")
ROUTE2655.setToNode("hanim_l_elbow")

Group2586.addChildren(ROUTE2655)
ROUTE2656 = ROUTE()
ROUTE2656.setFromField("value_changed")
ROUTE2656.setFromNode("Walk_l_shoulder_RotationInterpolator")
ROUTE2656.setToField("rotation")
ROUTE2656.setToNode("hanim_l_shoulder")

Group2586.addChildren(ROUTE2656)
ROUTE2657 = ROUTE()
ROUTE2657.setFromField("value_changed")
ROUTE2657.setFromNode("Walk_head_RotationInterpolator")
ROUTE2657.setToField("rotation")
ROUTE2657.setToNode("hanim_skullbase")

Group2586.addChildren(ROUTE2657)
ROUTE2658 = ROUTE()
ROUTE2658.setFromField("value_changed")
ROUTE2658.setFromNode("Walk_neck_RotationInterpolator")
ROUTE2658.setToField("rotation")
ROUTE2658.setToNode("hanim_vc4")

Group2586.addChildren(ROUTE2658)
ROUTE2659 = ROUTE()
ROUTE2659.setFromField("value_changed")
ROUTE2659.setFromNode("Walk_upper_body_RotationInterpolator")
ROUTE2659.setToField("rotation")
ROUTE2659.setToNode("hanim_vl1")

Group2586.addChildren(ROUTE2659)
ROUTE2660 = ROUTE()
ROUTE2660.setFromField("value_changed")
ROUTE2660.setFromNode("Walk_whole_body_RotationInterpolator")
ROUTE2660.setToField("rotation")
ROUTE2660.setToNode("hanim_humanoid_root")

Group2586.addChildren(ROUTE2660)
ROUTE2661 = ROUTE()
ROUTE2661.setFromField("value_changed")
ROUTE2661.setFromNode("Walk_whole_body_TranslationInterpolator")
ROUTE2661.setToField("translation")
ROUTE2661.setToNode("hanim_humanoid_root")

Group2586.addChildren(ROUTE2661)
ROUTE2662 = ROUTE()
ROUTE2662.setFromField("value_changed")
ROUTE2662.setFromNode("Walk_l_sternoclavicular_RollInterpolator")
ROUTE2662.setToField("rotation")
ROUTE2662.setToNode("hanim_l_sternoclavicular")

Group2586.addChildren(ROUTE2662)
ROUTE2663 = ROUTE()
ROUTE2663.setFromField("value_changed")
ROUTE2663.setFromNode("Walk_l_acromioclavicular_RollInterpolator")
ROUTE2663.setToField("rotation")
ROUTE2663.setToNode("hanim_l_acromioclavicular")

Group2586.addChildren(ROUTE2663)
ROUTE2664 = ROUTE()
ROUTE2664.setFromField("value_changed")
ROUTE2664.setFromNode("Walk_r_sternoclavicular_RollInterpolator")
ROUTE2664.setToField("rotation")
ROUTE2664.setToNode("hanim_r_sternoclavicular")

Group2586.addChildren(ROUTE2664)
ROUTE2665 = ROUTE()
ROUTE2665.setFromField("value_changed")
ROUTE2665.setFromNode("Walk_r_acromioclavicular_RollInterpolator")
ROUTE2665.setToField("rotation")
ROUTE2665.setToNode("hanim_r_acromioclavicular")

Group2586.addChildren(ROUTE2665)
ROUTE2666 = ROUTE()
ROUTE2666.setFromField("value_changed")
ROUTE2666.setFromNode("Walk_r_metatarsal_PitchInterpolator")
ROUTE2666.setToField("rotation")
ROUTE2666.setToNode("hanim_l_metatarsal")

Group2586.addChildren(ROUTE2666)
ROUTE2667 = ROUTE()
ROUTE2667.setFromField("value_changed")
ROUTE2667.setFromNode("Walk_r_metatarsal_PitchInterpolator")
ROUTE2667.setToField("rotation")
ROUTE2667.setToNode("hanim_r_metatarsal")

Group2586.addChildren(ROUTE2667)
ROUTE2668 = ROUTE()
ROUTE2668.setFromField("value_changed")
ROUTE2668.setFromNode("Walk_sacroiliac_YawInterpolator")
ROUTE2668.setToField("rotation")
ROUTE2668.setToNode("hanim_sacroiliac")

Group2586.addChildren(ROUTE2668)
ROUTE2669 = ROUTE()
ROUTE2669.setFromField("value_changed")
ROUTE2669.setFromNode("Walk_vl5_YawInterpolator")
ROUTE2669.setToField("rotation")
ROUTE2669.setToNode("hanim_vl5")

Group2586.addChildren(ROUTE2669)
ROUTE2670 = ROUTE()
ROUTE2670.setFromField("value_changed")
ROUTE2670.setFromNode("Walk_vc6_YawInterpolator")
ROUTE2670.setToField("rotation")
ROUTE2670.setToNode("hanim_vc6")

Group2586.addChildren(ROUTE2670)
ROUTE2671 = ROUTE()
ROUTE2671.setFromField("value_changed")
ROUTE2671.setFromNode("Walk_l_thumb1_PitchInterpolator")
ROUTE2671.setToField("rotation")
ROUTE2671.setToNode("hanim_l_thumb1")

Group2586.addChildren(ROUTE2671)
ROUTE2672 = ROUTE()
ROUTE2672.setFromField("value_changed")
ROUTE2672.setFromNode("Walk_r_thumb1_PitchInterpolator")
ROUTE2672.setToField("rotation")
ROUTE2672.setToNode("hanim_r_thumb1")

Group2586.addChildren(ROUTE2672)

Scene30.addChildren(Group2586)
Group2673 = Group()
Group2673.setDEF("RunAnimation")
TimeSensor2674 = TimeSensor()
TimeSensor2674.setDEF("RunTimer")
TimeSensor2674.setCycleInterval(0.9)
TimeSensor2674.setLoop(True)

Group2673.addChildren(TimeSensor2674)
OrientationInterpolator2675 = OrientationInterpolator()
OrientationInterpolator2675.setDEF("Run_r_metatarsal_PitchInterpolator")
OrientationInterpolator2675.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2675.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2675)
OrientationInterpolator2676 = OrientationInterpolator()
OrientationInterpolator2676.setDEF("Run_l_hip_RotationInterpolator_Run")
OrientationInterpolator2676.setKey([0,0.2182,0.4909,0.7455,1])
OrientationInterpolator2676.setKeyValue([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42])

Group2673.addChildren(OrientationInterpolator2676)
OrientationInterpolator2677 = OrientationInterpolator()
OrientationInterpolator2677.setDEF("Run_l_knee_RotationInterpolator_Run")
OrientationInterpolator2677.setKey([0,0.2182,0.4909,0.7455,1])
OrientationInterpolator2677.setKeyValue([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01])

Group2673.addChildren(OrientationInterpolator2677)
OrientationInterpolator2678 = OrientationInterpolator()
OrientationInterpolator2678.setDEF("Run_l_ankle_RotationInterpolator_Run")
OrientationInterpolator2678.setKey([0,0.22,0.3,0.4,1])
OrientationInterpolator2678.setKeyValue([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574])

Group2673.addChildren(OrientationInterpolator2678)
OrientationInterpolator2679 = OrientationInterpolator()
OrientationInterpolator2679.setDEF("Run_r_hip_RotationInterpolator_Run")
OrientationInterpolator2679.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2679.setKeyValue([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9])

Group2673.addChildren(OrientationInterpolator2679)
OrientationInterpolator2680 = OrientationInterpolator()
OrientationInterpolator2680.setDEF("Run_r_knee_RotationInterpolator_Run")
OrientationInterpolator2680.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2680.setKeyValue([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705])

Group2673.addChildren(OrientationInterpolator2680)
OrientationInterpolator2681 = OrientationInterpolator()
OrientationInterpolator2681.setDEF("Run_r_ankle_RotationInterpolator_Run")
OrientationInterpolator2681.setKey([0,0.4,0.71,0.8,0.82,1])
OrientationInterpolator2681.setKeyValue([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323])

Group2673.addChildren(OrientationInterpolator2681)
OrientationInterpolator2682 = OrientationInterpolator()
OrientationInterpolator2682.setDEF("Run_l_shoulder_RotationInterpolator_Run")
OrientationInterpolator2682.setKey([0,0.2182,0.4909,0.7455,1])
OrientationInterpolator2682.setKeyValue([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5])

Group2673.addChildren(OrientationInterpolator2682)
OrientationInterpolator2683 = OrientationInterpolator()
OrientationInterpolator2683.setDEF("Run_l_elbow_RotationInterpolator_Run")
OrientationInterpolator2683.setKey([0,0.2182,0.4909,0.7455,1])
OrientationInterpolator2683.setKeyValue([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85])

Group2673.addChildren(OrientationInterpolator2683)
OrientationInterpolator2684 = OrientationInterpolator()
OrientationInterpolator2684.setDEF("Run_l_wrist_RotationInterpolator_Run")
OrientationInterpolator2684.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2684.setKeyValue([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14])

Group2673.addChildren(OrientationInterpolator2684)
OrientationInterpolator2685 = OrientationInterpolator()
OrientationInterpolator2685.setDEF("Run_r_shoulder_RotationInterpolator_Run")
OrientationInterpolator2685.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2685.setKeyValue([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85])

Group2673.addChildren(OrientationInterpolator2685)
OrientationInterpolator2686 = OrientationInterpolator()
OrientationInterpolator2686.setDEF("Run_r_elbow_RotationInterpolator_Run")
OrientationInterpolator2686.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2686.setKeyValue([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975])

Group2673.addChildren(OrientationInterpolator2686)
OrientationInterpolator2687 = OrientationInterpolator()
OrientationInterpolator2687.setDEF("Run_r_wrist_RotationInterpolator_Run")
OrientationInterpolator2687.setKey([0,1])
OrientationInterpolator2687.setKeyValue([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273])

Group2673.addChildren(OrientationInterpolator2687)
OrientationInterpolator2688 = OrientationInterpolator()
OrientationInterpolator2688.setDEF("Run_lower_body_RotationInterpolator_Run")
OrientationInterpolator2688.setKey([0,0.2182,0.4909,0.7455,1])
OrientationInterpolator2688.setKeyValue([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125])

Group2673.addChildren(OrientationInterpolator2688)
OrientationInterpolator2689 = OrientationInterpolator()
OrientationInterpolator2689.setDEF("Run_head_RotationInterpolator_Run")
OrientationInterpolator2689.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2689.setKeyValue([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08])

Group2673.addChildren(OrientationInterpolator2689)
OrientationInterpolator2690 = OrientationInterpolator()
OrientationInterpolator2690.setDEF("Run_neck_RotationInterpolator_Run")
OrientationInterpolator2690.setKey([0,0.2545,0.4909,0.7091,1])
OrientationInterpolator2690.setKeyValue([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4])

Group2673.addChildren(OrientationInterpolator2690)
OrientationInterpolator2691 = OrientationInterpolator()
OrientationInterpolator2691.setDEF("Run_upper_body_RotationInterpolator_Run")
OrientationInterpolator2691.setKey([0,0.2545,0.4909,0.7636,1])
OrientationInterpolator2691.setKeyValue([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5])

Group2673.addChildren(OrientationInterpolator2691)
OrientationInterpolator2692 = OrientationInterpolator()
OrientationInterpolator2692.setDEF("Run_whole_body_RotationInterpolator_Run")
OrientationInterpolator2692.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator2692.setKeyValue([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06])

Group2673.addChildren(OrientationInterpolator2692)
PositionInterpolator2693 = PositionInterpolator()
PositionInterpolator2693.setDEF("Run_whole_body_TranslationInterpolator_Run")
PositionInterpolator2693.setKey([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1])
PositionInterpolator2693.setKeyValue([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0])

Group2673.addChildren(PositionInterpolator2693)
OrientationInterpolator2694 = OrientationInterpolator()
OrientationInterpolator2694.setDEF("Run_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2694.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2694.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2694)
OrientationInterpolator2695 = OrientationInterpolator()
OrientationInterpolator2695.setDEF("Run_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2695.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2695.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2695)
OrientationInterpolator2696 = OrientationInterpolator()
OrientationInterpolator2696.setDEF("Run_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2696.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2696.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2696)
OrientationInterpolator2697 = OrientationInterpolator()
OrientationInterpolator2697.setDEF("Run_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2697.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2697.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2697)
OrientationInterpolator2698 = OrientationInterpolator()
OrientationInterpolator2698.setDEF("Run_sacroiliac_YawInterpolator")
OrientationInterpolator2698.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2698.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2698)
OrientationInterpolator2699 = OrientationInterpolator()
OrientationInterpolator2699.setDEF("Run_vl5_YawInterpolator")
OrientationInterpolator2699.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2699.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2699)
OrientationInterpolator2700 = OrientationInterpolator()
OrientationInterpolator2700.setDEF("Run_vc6_YawInterpolator")
OrientationInterpolator2700.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2700.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2673.addChildren(OrientationInterpolator2700)
OrientationInterpolator2701 = OrientationInterpolator()
OrientationInterpolator2701.setDEF("Run_l_thumb1_PitchInterpolator")
OrientationInterpolator2701.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2701.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])

Group2673.addChildren(OrientationInterpolator2701)
OrientationInterpolator2702 = OrientationInterpolator()
OrientationInterpolator2702.setDEF("Run_r_thumb1_PitchInterpolator")
OrientationInterpolator2702.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2702.setKeyValue([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])

Group2673.addChildren(OrientationInterpolator2702)
ROUTE2703 = ROUTE()
ROUTE2703.setFromField("fraction_changed")
ROUTE2703.setFromNode("RunTimer")
ROUTE2703.setToField("set_fraction")
ROUTE2703.setToNode("Run_r_ankle_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2703)
ROUTE2704 = ROUTE()
ROUTE2704.setFromField("fraction_changed")
ROUTE2704.setFromNode("RunTimer")
ROUTE2704.setToField("set_fraction")
ROUTE2704.setToNode("Run_r_knee_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2704)
ROUTE2705 = ROUTE()
ROUTE2705.setFromField("fraction_changed")
ROUTE2705.setFromNode("RunTimer")
ROUTE2705.setToField("set_fraction")
ROUTE2705.setToNode("Run_r_hip_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2705)
ROUTE2706 = ROUTE()
ROUTE2706.setFromField("fraction_changed")
ROUTE2706.setFromNode("RunTimer")
ROUTE2706.setToField("set_fraction")
ROUTE2706.setToNode("Run_l_ankle_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2706)
ROUTE2707 = ROUTE()
ROUTE2707.setFromField("fraction_changed")
ROUTE2707.setFromNode("RunTimer")
ROUTE2707.setToField("set_fraction")
ROUTE2707.setToNode("Run_l_knee_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2707)
ROUTE2708 = ROUTE()
ROUTE2708.setFromField("fraction_changed")
ROUTE2708.setFromNode("RunTimer")
ROUTE2708.setToField("set_fraction")
ROUTE2708.setToNode("Run_l_hip_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2708)
ROUTE2709 = ROUTE()
ROUTE2709.setFromField("fraction_changed")
ROUTE2709.setFromNode("RunTimer")
ROUTE2709.setToField("set_fraction")
ROUTE2709.setToNode("Run_lower_body_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2709)
ROUTE2710 = ROUTE()
ROUTE2710.setFromField("fraction_changed")
ROUTE2710.setFromNode("RunTimer")
ROUTE2710.setToField("set_fraction")
ROUTE2710.setToNode("Run_r_wrist_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2710)
ROUTE2711 = ROUTE()
ROUTE2711.setFromField("fraction_changed")
ROUTE2711.setFromNode("RunTimer")
ROUTE2711.setToField("set_fraction")
ROUTE2711.setToNode("Run_r_elbow_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2711)
ROUTE2712 = ROUTE()
ROUTE2712.setFromField("fraction_changed")
ROUTE2712.setFromNode("RunTimer")
ROUTE2712.setToField("set_fraction")
ROUTE2712.setToNode("Run_r_shoulder_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2712)
ROUTE2713 = ROUTE()
ROUTE2713.setFromField("fraction_changed")
ROUTE2713.setFromNode("RunTimer")
ROUTE2713.setToField("set_fraction")
ROUTE2713.setToNode("Run_l_wrist_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2713)
ROUTE2714 = ROUTE()
ROUTE2714.setFromField("fraction_changed")
ROUTE2714.setFromNode("RunTimer")
ROUTE2714.setToField("set_fraction")
ROUTE2714.setToNode("Run_l_elbow_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2714)
ROUTE2715 = ROUTE()
ROUTE2715.setFromField("fraction_changed")
ROUTE2715.setFromNode("RunTimer")
ROUTE2715.setToField("set_fraction")
ROUTE2715.setToNode("Run_l_shoulder_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2715)
ROUTE2716 = ROUTE()
ROUTE2716.setFromField("fraction_changed")
ROUTE2716.setFromNode("RunTimer")
ROUTE2716.setToField("set_fraction")
ROUTE2716.setToNode("Run_head_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2716)
ROUTE2717 = ROUTE()
ROUTE2717.setFromField("fraction_changed")
ROUTE2717.setFromNode("RunTimer")
ROUTE2717.setToField("set_fraction")
ROUTE2717.setToNode("Run_neck_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2717)
ROUTE2718 = ROUTE()
ROUTE2718.setFromField("fraction_changed")
ROUTE2718.setFromNode("RunTimer")
ROUTE2718.setToField("set_fraction")
ROUTE2718.setToNode("Run_upper_body_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2718)
ROUTE2719 = ROUTE()
ROUTE2719.setFromField("fraction_changed")
ROUTE2719.setFromNode("RunTimer")
ROUTE2719.setToField("set_fraction")
ROUTE2719.setToNode("Run_whole_body_RotationInterpolator_Run")

Group2673.addChildren(ROUTE2719)
ROUTE2720 = ROUTE()
ROUTE2720.setFromField("fraction_changed")
ROUTE2720.setFromNode("RunTimer")
ROUTE2720.setToField("set_fraction")
ROUTE2720.setToNode("Run_whole_body_TranslationInterpolator_Run")

Group2673.addChildren(ROUTE2720)
ROUTE2721 = ROUTE()
ROUTE2721.setFromField("fraction_changed")
ROUTE2721.setFromNode("RunTimer")
ROUTE2721.setToField("set_fraction")
ROUTE2721.setToNode("Run_l_sternoclavicular_RollInterpolator")

Group2673.addChildren(ROUTE2721)
ROUTE2722 = ROUTE()
ROUTE2722.setFromField("fraction_changed")
ROUTE2722.setFromNode("RunTimer")
ROUTE2722.setToField("set_fraction")
ROUTE2722.setToNode("Run_l_acromioclavicular_RollInterpolator")

Group2673.addChildren(ROUTE2722)
ROUTE2723 = ROUTE()
ROUTE2723.setFromField("fraction_changed")
ROUTE2723.setFromNode("RunTimer")
ROUTE2723.setToField("set_fraction")
ROUTE2723.setToNode("Run_r_sternoclavicular_RollInterpolator")

Group2673.addChildren(ROUTE2723)
ROUTE2724 = ROUTE()
ROUTE2724.setFromField("fraction_changed")
ROUTE2724.setFromNode("RunTimer")
ROUTE2724.setToField("set_fraction")
ROUTE2724.setToNode("Run_r_acromioclavicular_RollInterpolator")

Group2673.addChildren(ROUTE2724)
ROUTE2725 = ROUTE()
ROUTE2725.setFromField("fraction_changed")
ROUTE2725.setFromNode("RunTimer")
ROUTE2725.setToField("set_fraction")
ROUTE2725.setToNode("Run_r_metatarsal_PitchInterpolator")

Group2673.addChildren(ROUTE2725)
ROUTE2726 = ROUTE()
ROUTE2726.setFromField("fraction_changed")
ROUTE2726.setFromNode("RunTimer")
ROUTE2726.setToField("set_fraction")
ROUTE2726.setToNode("Run_sacroiliac_YawInterpolator")

Group2673.addChildren(ROUTE2726)
ROUTE2727 = ROUTE()
ROUTE2727.setFromField("fraction_changed")
ROUTE2727.setFromNode("RunTimer")
ROUTE2727.setToField("set_fraction")
ROUTE2727.setToNode("Run_vl5_YawInterpolator")

Group2673.addChildren(ROUTE2727)
ROUTE2728 = ROUTE()
ROUTE2728.setFromField("fraction_changed")
ROUTE2728.setFromNode("RunTimer")
ROUTE2728.setToField("set_fraction")
ROUTE2728.setToNode("Run_vc6_YawInterpolator")

Group2673.addChildren(ROUTE2728)
ROUTE2729 = ROUTE()
ROUTE2729.setFromField("fraction_changed")
ROUTE2729.setFromNode("RunTimer")
ROUTE2729.setToField("set_fraction")
ROUTE2729.setToNode("Run_l_thumb1_PitchInterpolator")

Group2673.addChildren(ROUTE2729)
ROUTE2730 = ROUTE()
ROUTE2730.setFromField("fraction_changed")
ROUTE2730.setFromNode("RunTimer")
ROUTE2730.setToField("set_fraction")
ROUTE2730.setToNode("Run_r_thumb1_PitchInterpolator")

Group2673.addChildren(ROUTE2730)
ROUTE2731 = ROUTE()
ROUTE2731.setFromField("value_changed")
ROUTE2731.setFromNode("Run_r_ankle_RotationInterpolator_Run")
ROUTE2731.setToField("rotation")
ROUTE2731.setToNode("hanim_r_ankle")

Group2673.addChildren(ROUTE2731)
ROUTE2732 = ROUTE()
ROUTE2732.setFromField("value_changed")
ROUTE2732.setFromNode("Run_r_knee_RotationInterpolator_Run")
ROUTE2732.setToField("rotation")
ROUTE2732.setToNode("hanim_r_knee")

Group2673.addChildren(ROUTE2732)
ROUTE2733 = ROUTE()
ROUTE2733.setFromField("value_changed")
ROUTE2733.setFromNode("Run_r_hip_RotationInterpolator_Run")
ROUTE2733.setToField("rotation")
ROUTE2733.setToNode("hanim_r_hip")

Group2673.addChildren(ROUTE2733)
ROUTE2734 = ROUTE()
ROUTE2734.setFromField("value_changed")
ROUTE2734.setFromNode("Run_l_ankle_RotationInterpolator_Run")
ROUTE2734.setToField("rotation")
ROUTE2734.setToNode("hanim_l_ankle")

Group2673.addChildren(ROUTE2734)
ROUTE2735 = ROUTE()
ROUTE2735.setFromField("value_changed")
ROUTE2735.setFromNode("Run_l_knee_RotationInterpolator_Run")
ROUTE2735.setToField("rotation")
ROUTE2735.setToNode("hanim_l_knee")

Group2673.addChildren(ROUTE2735)
ROUTE2736 = ROUTE()
ROUTE2736.setFromField("value_changed")
ROUTE2736.setFromNode("Run_l_hip_RotationInterpolator_Run")
ROUTE2736.setToField("rotation")
ROUTE2736.setToNode("hanim_l_hip")

Group2673.addChildren(ROUTE2736)
ROUTE2737 = ROUTE()
ROUTE2737.setFromField("value_changed")
ROUTE2737.setFromNode("Run_r_wrist_RotationInterpolator_Run")
ROUTE2737.setToField("rotation")
ROUTE2737.setToNode("hanim_r_wrist")

Group2673.addChildren(ROUTE2737)
ROUTE2738 = ROUTE()
ROUTE2738.setFromField("value_changed")
ROUTE2738.setFromNode("Run_r_elbow_RotationInterpolator_Run")
ROUTE2738.setToField("rotation")
ROUTE2738.setToNode("hanim_r_elbow")

Group2673.addChildren(ROUTE2738)
ROUTE2739 = ROUTE()
ROUTE2739.setFromField("value_changed")
ROUTE2739.setFromNode("Run_r_shoulder_RotationInterpolator_Run")
ROUTE2739.setToField("rotation")
ROUTE2739.setToNode("hanim_r_shoulder")

Group2673.addChildren(ROUTE2739)
ROUTE2740 = ROUTE()
ROUTE2740.setFromField("value_changed")
ROUTE2740.setFromNode("Run_l_wrist_RotationInterpolator_Run")
ROUTE2740.setToField("rotation")
ROUTE2740.setToNode("hanim_l_wrist")

Group2673.addChildren(ROUTE2740)
ROUTE2741 = ROUTE()
ROUTE2741.setFromField("value_changed")
ROUTE2741.setFromNode("Run_l_elbow_RotationInterpolator_Run")
ROUTE2741.setToField("rotation")
ROUTE2741.setToNode("hanim_l_elbow")

Group2673.addChildren(ROUTE2741)
ROUTE2742 = ROUTE()
ROUTE2742.setFromField("value_changed")
ROUTE2742.setFromNode("Run_l_shoulder_RotationInterpolator_Run")
ROUTE2742.setToField("rotation")
ROUTE2742.setToNode("hanim_l_shoulder")

Group2673.addChildren(ROUTE2742)
ROUTE2743 = ROUTE()
ROUTE2743.setFromField("value_changed")
ROUTE2743.setFromNode("Run_lower_body_RotationInterpolator_Run")
ROUTE2743.setToField("rotation")
ROUTE2743.setToNode("hanim_sacroiliac")

Group2673.addChildren(ROUTE2743)
ROUTE2744 = ROUTE()
ROUTE2744.setFromField("value_changed")
ROUTE2744.setFromNode("Run_head_RotationInterpolator_Run")
ROUTE2744.setToField("rotation")
ROUTE2744.setToNode("hanim_skullbase")

Group2673.addChildren(ROUTE2744)
ROUTE2745 = ROUTE()
ROUTE2745.setFromField("value_changed")
ROUTE2745.setFromNode("Run_neck_RotationInterpolator_Run")
ROUTE2745.setToField("rotation")
ROUTE2745.setToNode("hanim_vc4")

Group2673.addChildren(ROUTE2745)
ROUTE2746 = ROUTE()
ROUTE2746.setFromField("value_changed")
ROUTE2746.setFromNode("Run_upper_body_RotationInterpolator_Run")
ROUTE2746.setToField("rotation")
ROUTE2746.setToNode("hanim_vl1")

Group2673.addChildren(ROUTE2746)
ROUTE2747 = ROUTE()
ROUTE2747.setFromField("value_changed")
ROUTE2747.setFromNode("Run_whole_body_RotationInterpolator_Run")
ROUTE2747.setToField("rotation")
ROUTE2747.setToNode("hanim_humanoid_root")

Group2673.addChildren(ROUTE2747)
ROUTE2748 = ROUTE()
ROUTE2748.setFromField("value_changed")
ROUTE2748.setFromNode("Run_whole_body_TranslationInterpolator_Run")
ROUTE2748.setToField("translation")
ROUTE2748.setToNode("hanim_humanoid_root")

Group2673.addChildren(ROUTE2748)
ROUTE2749 = ROUTE()
ROUTE2749.setFromField("value_changed")
ROUTE2749.setFromNode("Run_l_sternoclavicular_RollInterpolator")
ROUTE2749.setToField("rotation")
ROUTE2749.setToNode("hanim_l_sternoclavicular")

Group2673.addChildren(ROUTE2749)
ROUTE2750 = ROUTE()
ROUTE2750.setFromField("value_changed")
ROUTE2750.setFromNode("Run_l_acromioclavicular_RollInterpolator")
ROUTE2750.setToField("rotation")
ROUTE2750.setToNode("hanim_l_acromioclavicular")

Group2673.addChildren(ROUTE2750)
ROUTE2751 = ROUTE()
ROUTE2751.setFromField("value_changed")
ROUTE2751.setFromNode("Run_r_sternoclavicular_RollInterpolator")
ROUTE2751.setToField("rotation")
ROUTE2751.setToNode("hanim_r_sternoclavicular")

Group2673.addChildren(ROUTE2751)
ROUTE2752 = ROUTE()
ROUTE2752.setFromField("value_changed")
ROUTE2752.setFromNode("Run_r_acromioclavicular_RollInterpolator")
ROUTE2752.setToField("rotation")
ROUTE2752.setToNode("hanim_r_acromioclavicular")

Group2673.addChildren(ROUTE2752)
ROUTE2753 = ROUTE()
ROUTE2753.setFromField("value_changed")
ROUTE2753.setFromNode("Run_r_metatarsal_PitchInterpolator")
ROUTE2753.setToField("rotation")
ROUTE2753.setToNode("hanim_l_metatarsal")

Group2673.addChildren(ROUTE2753)
ROUTE2754 = ROUTE()
ROUTE2754.setFromField("value_changed")
ROUTE2754.setFromNode("Run_r_metatarsal_PitchInterpolator")
ROUTE2754.setToField("rotation")
ROUTE2754.setToNode("hanim_r_metatarsal")

Group2673.addChildren(ROUTE2754)
ROUTE2755 = ROUTE()
ROUTE2755.setFromField("value_changed")
ROUTE2755.setFromNode("Run_sacroiliac_YawInterpolator")
ROUTE2755.setToField("rotation")
ROUTE2755.setToNode("hanim_sacroiliac")

Group2673.addChildren(ROUTE2755)
ROUTE2756 = ROUTE()
ROUTE2756.setFromField("value_changed")
ROUTE2756.setFromNode("Run_vl5_YawInterpolator")
ROUTE2756.setToField("rotation")
ROUTE2756.setToNode("hanim_vl5")

Group2673.addChildren(ROUTE2756)
ROUTE2757 = ROUTE()
ROUTE2757.setFromField("value_changed")
ROUTE2757.setFromNode("Run_vc6_YawInterpolator")
ROUTE2757.setToField("rotation")
ROUTE2757.setToNode("hanim_vc6")

Group2673.addChildren(ROUTE2757)
ROUTE2758 = ROUTE()
ROUTE2758.setFromField("value_changed")
ROUTE2758.setFromNode("Run_l_thumb1_PitchInterpolator")
ROUTE2758.setToField("rotation")
ROUTE2758.setToNode("hanim_l_thumb1")

Group2673.addChildren(ROUTE2758)
ROUTE2759 = ROUTE()
ROUTE2759.setFromField("value_changed")
ROUTE2759.setFromNode("Run_r_thumb1_PitchInterpolator")
ROUTE2759.setToField("rotation")
ROUTE2759.setToNode("hanim_r_thumb1")

Group2673.addChildren(ROUTE2759)

Scene30.addChildren(Group2673)
Group2760 = Group()
Group2760.setDEF("JumpAnimation")
TimeSensor2761 = TimeSensor()
TimeSensor2761.setDEF("JumpTimer")
TimeSensor2761.setCycleInterval(3.73)
TimeSensor2761.setLoop(True)

Group2760.addChildren(TimeSensor2761)
OrientationInterpolator2762 = OrientationInterpolator()
OrientationInterpolator2762.setDEF("Jump_r_metatarsal_PitchInterpolator")
OrientationInterpolator2762.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2762.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2762)
OrientationInterpolator2763 = OrientationInterpolator()
OrientationInterpolator2763.setDEF("Jump_r_ankle_RotationInterpolator")
OrientationInterpolator2763.setKey([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1])
OrientationInterpolator2763.setKeyValue([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2763)
OrientationInterpolator2764 = OrientationInterpolator()
OrientationInterpolator2764.setDEF("Jump_r_knee_RotationInterpolator")
OrientationInterpolator2764.setKey([0,0.2,0.25,0.3,0.64,0.76,0.88,1])
OrientationInterpolator2764.setKeyValue([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2764)
OrientationInterpolator2765 = OrientationInterpolator()
OrientationInterpolator2765.setDEF("Jump_r_hip_RotationInterpolator")
OrientationInterpolator2765.setKey([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1])
OrientationInterpolator2765.setKeyValue([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2765)
OrientationInterpolator2766 = OrientationInterpolator()
OrientationInterpolator2766.setDEF("Jump_l_ankle_RotationInterpolator")
OrientationInterpolator2766.setKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1])
OrientationInterpolator2766.setKeyValue([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2766)
OrientationInterpolator2767 = OrientationInterpolator()
OrientationInterpolator2767.setDEF("Jump_l_knee_RotationInterpolator")
OrientationInterpolator2767.setKey([0,0.28,0.32,0.48,0.64,0.76,0.88,1])
OrientationInterpolator2767.setKeyValue([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2767)
OrientationInterpolator2768 = OrientationInterpolator()
OrientationInterpolator2768.setDEF("Jump_l_hip_RotationInterpolator")
OrientationInterpolator2768.setKey([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1])
OrientationInterpolator2768.setKeyValue([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2768)
OrientationInterpolator2769 = OrientationInterpolator()
OrientationInterpolator2769.setDEF("Jump_lower_body_RotationInterpolator")
OrientationInterpolator2769.setKey([0,0.28,0.32,0.48,0.76,1])
OrientationInterpolator2769.setKeyValue([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2769)
OrientationInterpolator2770 = OrientationInterpolator()
OrientationInterpolator2770.setDEF("Jump_r_wrist_RotationInterpolator")
OrientationInterpolator2770.setKey([0,0.28,0.32,0.64,0.76,1])
OrientationInterpolator2770.setKeyValue([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2770)
OrientationInterpolator2771 = OrientationInterpolator()
OrientationInterpolator2771.setDEF("Jump_r_elbow_RotationInterpolator")
OrientationInterpolator2771.setKey([0,0.28,0.32,0.64,0.76,1])
OrientationInterpolator2771.setKeyValue([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2771)
OrientationInterpolator2772 = OrientationInterpolator()
OrientationInterpolator2772.setDEF("Jump_r_shoulder_RotationInterpolator")
OrientationInterpolator2772.setKey([0,0.28,0.32,0.64,0.76,0.88,1])
OrientationInterpolator2772.setKeyValue([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2772)
OrientationInterpolator2773 = OrientationInterpolator()
OrientationInterpolator2773.setDEF("Jump_l_wrist_RotationInterpolator")
OrientationInterpolator2773.setKey([0,0.48,0.52,0.64,0.76,0.88,1])
OrientationInterpolator2773.setKeyValue([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2773)
OrientationInterpolator2774 = OrientationInterpolator()
OrientationInterpolator2774.setDEF("Jump_l_elbow_RotationInterpolator")
OrientationInterpolator2774.setKey([0,0.28,0.32,0.58,0.72,1])
OrientationInterpolator2774.setKeyValue([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2774)
OrientationInterpolator2775 = OrientationInterpolator()
OrientationInterpolator2775.setDEF("Jump_l_shoulder_RotationInterpolator")
OrientationInterpolator2775.setKey([0,0.28,0.32,0.64,0.76,0.88,1])
OrientationInterpolator2775.setKeyValue([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2775)
OrientationInterpolator2776 = OrientationInterpolator()
OrientationInterpolator2776.setDEF("Jump_head_RotationInterpolator")
OrientationInterpolator2776.setKey([0,0.28,0.32,0.48,0.76,1])
OrientationInterpolator2776.setKeyValue([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2776)
OrientationInterpolator2777 = OrientationInterpolator()
OrientationInterpolator2777.setDEF("Jump_neck_RotationInterpolator")
OrientationInterpolator2777.setKey([0,0.28,0.32,0.48,0.76,1])
OrientationInterpolator2777.setKeyValue([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2777)
OrientationInterpolator2778 = OrientationInterpolator()
OrientationInterpolator2778.setDEF("Jump_upper_body_RotationInterpolator")
OrientationInterpolator2778.setKey([0,0.22,0.28,0.34,0.71,0.88,1])
OrientationInterpolator2778.setKeyValue([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2778)
OrientationInterpolator2779 = OrientationInterpolator()
OrientationInterpolator2779.setDEF("Jump_whole_body_RotationInterpolator")
OrientationInterpolator2779.setKey([0,0.28,0.32,0.48,0.64,0.76,1])
OrientationInterpolator2779.setKeyValue([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2779)
PositionInterpolator2780 = PositionInterpolator()
PositionInterpolator2780.setDEF("Jump_whole_body_TranslationInterpolator")
PositionInterpolator2780.setKey([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1])
PositionInterpolator2780.setKeyValue([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0])

Group2760.addChildren(PositionInterpolator2780)
OrientationInterpolator2781 = OrientationInterpolator()
OrientationInterpolator2781.setDEF("Jump_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2781.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2781.setKeyValue([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2781)
OrientationInterpolator2782 = OrientationInterpolator()
OrientationInterpolator2782.setDEF("Jump_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2782.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2782.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2782)
OrientationInterpolator2783 = OrientationInterpolator()
OrientationInterpolator2783.setDEF("Jump_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2783.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2783.setKeyValue([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2783)
OrientationInterpolator2784 = OrientationInterpolator()
OrientationInterpolator2784.setDEF("Jump_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2784.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2784.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2760.addChildren(OrientationInterpolator2784)
OrientationInterpolator2785 = OrientationInterpolator()
OrientationInterpolator2785.setDEF("Jump_sacroiliac_YawInterpolator")
OrientationInterpolator2785.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2785.setKeyValue([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])

Group2760.addChildren(OrientationInterpolator2785)
OrientationInterpolator2786 = OrientationInterpolator()
OrientationInterpolator2786.setDEF("Jump_vl5_YawInterpolator")
OrientationInterpolator2786.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2786.setKeyValue([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0])

Group2760.addChildren(OrientationInterpolator2786)
OrientationInterpolator2787 = OrientationInterpolator()
OrientationInterpolator2787.setDEF("Jump_vc6_YawInterpolator")
OrientationInterpolator2787.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2787.setKeyValue([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0])

Group2760.addChildren(OrientationInterpolator2787)
OrientationInterpolator2788 = OrientationInterpolator()
OrientationInterpolator2788.setDEF("Jump_l_thumb1_PitchInterpolator")
OrientationInterpolator2788.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2788.setKeyValue([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2760.addChildren(OrientationInterpolator2788)
OrientationInterpolator2789 = OrientationInterpolator()
OrientationInterpolator2789.setDEF("Jump_r_thumb1_PitchInterpolator")
OrientationInterpolator2789.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2789.setKeyValue([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2760.addChildren(OrientationInterpolator2789)
ROUTE2790 = ROUTE()
ROUTE2790.setFromField("fraction_changed")
ROUTE2790.setFromNode("JumpTimer")
ROUTE2790.setToField("set_fraction")
ROUTE2790.setToNode("Jump_r_ankle_RotationInterpolator")

Group2760.addChildren(ROUTE2790)
ROUTE2791 = ROUTE()
ROUTE2791.setFromField("fraction_changed")
ROUTE2791.setFromNode("JumpTimer")
ROUTE2791.setToField("set_fraction")
ROUTE2791.setToNode("Jump_r_knee_RotationInterpolator")

Group2760.addChildren(ROUTE2791)
ROUTE2792 = ROUTE()
ROUTE2792.setFromField("fraction_changed")
ROUTE2792.setFromNode("JumpTimer")
ROUTE2792.setToField("set_fraction")
ROUTE2792.setToNode("Jump_r_hip_RotationInterpolator")

Group2760.addChildren(ROUTE2792)
ROUTE2793 = ROUTE()
ROUTE2793.setFromField("fraction_changed")
ROUTE2793.setFromNode("JumpTimer")
ROUTE2793.setToField("set_fraction")
ROUTE2793.setToNode("Jump_l_ankle_RotationInterpolator")

Group2760.addChildren(ROUTE2793)
ROUTE2794 = ROUTE()
ROUTE2794.setFromField("fraction_changed")
ROUTE2794.setFromNode("JumpTimer")
ROUTE2794.setToField("set_fraction")
ROUTE2794.setToNode("Jump_l_knee_RotationInterpolator")

Group2760.addChildren(ROUTE2794)
ROUTE2795 = ROUTE()
ROUTE2795.setFromField("fraction_changed")
ROUTE2795.setFromNode("JumpTimer")
ROUTE2795.setToField("set_fraction")
ROUTE2795.setToNode("Jump_l_hip_RotationInterpolator")

Group2760.addChildren(ROUTE2795)
ROUTE2796 = ROUTE()
ROUTE2796.setFromField("fraction_changed")
ROUTE2796.setFromNode("JumpTimer")
ROUTE2796.setToField("set_fraction")
ROUTE2796.setToNode("Jump_lower_body_RotationInterpolator")

Group2760.addChildren(ROUTE2796)
ROUTE2797 = ROUTE()
ROUTE2797.setFromField("fraction_changed")
ROUTE2797.setFromNode("JumpTimer")
ROUTE2797.setToField("set_fraction")
ROUTE2797.setToNode("Jump_r_wrist_RotationInterpolator")

Group2760.addChildren(ROUTE2797)
ROUTE2798 = ROUTE()
ROUTE2798.setFromField("fraction_changed")
ROUTE2798.setFromNode("JumpTimer")
ROUTE2798.setToField("set_fraction")
ROUTE2798.setToNode("Jump_r_elbow_RotationInterpolator")

Group2760.addChildren(ROUTE2798)
ROUTE2799 = ROUTE()
ROUTE2799.setFromField("fraction_changed")
ROUTE2799.setFromNode("JumpTimer")
ROUTE2799.setToField("set_fraction")
ROUTE2799.setToNode("Jump_r_shoulder_RotationInterpolator")

Group2760.addChildren(ROUTE2799)
ROUTE2800 = ROUTE()
ROUTE2800.setFromField("fraction_changed")
ROUTE2800.setFromNode("JumpTimer")
ROUTE2800.setToField("set_fraction")
ROUTE2800.setToNode("Jump_l_wrist_RotationInterpolator")

Group2760.addChildren(ROUTE2800)
ROUTE2801 = ROUTE()
ROUTE2801.setFromField("fraction_changed")
ROUTE2801.setFromNode("JumpTimer")
ROUTE2801.setToField("set_fraction")
ROUTE2801.setToNode("Jump_l_elbow_RotationInterpolator")

Group2760.addChildren(ROUTE2801)
ROUTE2802 = ROUTE()
ROUTE2802.setFromField("fraction_changed")
ROUTE2802.setFromNode("JumpTimer")
ROUTE2802.setToField("set_fraction")
ROUTE2802.setToNode("Jump_l_shoulder_RotationInterpolator")

Group2760.addChildren(ROUTE2802)
ROUTE2803 = ROUTE()
ROUTE2803.setFromField("fraction_changed")
ROUTE2803.setFromNode("JumpTimer")
ROUTE2803.setToField("set_fraction")
ROUTE2803.setToNode("Jump_head_RotationInterpolator")

Group2760.addChildren(ROUTE2803)
ROUTE2804 = ROUTE()
ROUTE2804.setFromField("fraction_changed")
ROUTE2804.setFromNode("JumpTimer")
ROUTE2804.setToField("set_fraction")
ROUTE2804.setToNode("Jump_neck_RotationInterpolator")

Group2760.addChildren(ROUTE2804)
ROUTE2805 = ROUTE()
ROUTE2805.setFromField("fraction_changed")
ROUTE2805.setFromNode("JumpTimer")
ROUTE2805.setToField("set_fraction")
ROUTE2805.setToNode("Jump_upper_body_RotationInterpolator")

Group2760.addChildren(ROUTE2805)
ROUTE2806 = ROUTE()
ROUTE2806.setFromField("fraction_changed")
ROUTE2806.setFromNode("JumpTimer")
ROUTE2806.setToField("set_fraction")
ROUTE2806.setToNode("Jump_whole_body_RotationInterpolator")

Group2760.addChildren(ROUTE2806)
ROUTE2807 = ROUTE()
ROUTE2807.setFromField("fraction_changed")
ROUTE2807.setFromNode("JumpTimer")
ROUTE2807.setToField("set_fraction")
ROUTE2807.setToNode("Jump_whole_body_TranslationInterpolator")

Group2760.addChildren(ROUTE2807)
ROUTE2808 = ROUTE()
ROUTE2808.setFromField("fraction_changed")
ROUTE2808.setFromNode("JumpTimer")
ROUTE2808.setToField("set_fraction")
ROUTE2808.setToNode("Jump_l_sternoclavicular_RollInterpolator")

Group2760.addChildren(ROUTE2808)
ROUTE2809 = ROUTE()
ROUTE2809.setFromField("fraction_changed")
ROUTE2809.setFromNode("JumpTimer")
ROUTE2809.setToField("set_fraction")
ROUTE2809.setToNode("Jump_l_acromioclavicular_RollInterpolator")

Group2760.addChildren(ROUTE2809)
ROUTE2810 = ROUTE()
ROUTE2810.setFromField("fraction_changed")
ROUTE2810.setFromNode("JumpTimer")
ROUTE2810.setToField("set_fraction")
ROUTE2810.setToNode("Jump_r_sternoclavicular_RollInterpolator")

Group2760.addChildren(ROUTE2810)
ROUTE2811 = ROUTE()
ROUTE2811.setFromField("fraction_changed")
ROUTE2811.setFromNode("JumpTimer")
ROUTE2811.setToField("set_fraction")
ROUTE2811.setToNode("Jump_r_acromioclavicular_RollInterpolator")

Group2760.addChildren(ROUTE2811)
ROUTE2812 = ROUTE()
ROUTE2812.setFromField("fraction_changed")
ROUTE2812.setFromNode("JumpTimer")
ROUTE2812.setToField("set_fraction")
ROUTE2812.setToNode("Jump_r_metatarsal_PitchInterpolator")

Group2760.addChildren(ROUTE2812)
ROUTE2813 = ROUTE()
ROUTE2813.setFromField("fraction_changed")
ROUTE2813.setFromNode("JumpTimer")
ROUTE2813.setToField("set_fraction")
ROUTE2813.setToNode("Jump_sacroiliac_YawInterpolator")

Group2760.addChildren(ROUTE2813)
ROUTE2814 = ROUTE()
ROUTE2814.setFromField("fraction_changed")
ROUTE2814.setFromNode("JumpTimer")
ROUTE2814.setToField("set_fraction")
ROUTE2814.setToNode("Jump_vl5_YawInterpolator")

Group2760.addChildren(ROUTE2814)
ROUTE2815 = ROUTE()
ROUTE2815.setFromField("fraction_changed")
ROUTE2815.setFromNode("JumpTimer")
ROUTE2815.setToField("set_fraction")
ROUTE2815.setToNode("Jump_vc6_YawInterpolator")

Group2760.addChildren(ROUTE2815)
ROUTE2816 = ROUTE()
ROUTE2816.setFromField("fraction_changed")
ROUTE2816.setFromNode("JumpTimer")
ROUTE2816.setToField("set_fraction")
ROUTE2816.setToNode("Jump_l_thumb1_PitchInterpolator")

Group2760.addChildren(ROUTE2816)
ROUTE2817 = ROUTE()
ROUTE2817.setFromField("fraction_changed")
ROUTE2817.setFromNode("JumpTimer")
ROUTE2817.setToField("set_fraction")
ROUTE2817.setToNode("Jump_r_thumb1_PitchInterpolator")

Group2760.addChildren(ROUTE2817)
ROUTE2818 = ROUTE()
ROUTE2818.setFromField("value_changed")
ROUTE2818.setFromNode("Jump_r_ankle_RotationInterpolator")
ROUTE2818.setToField("rotation")
ROUTE2818.setToNode("hanim_r_ankle")

Group2760.addChildren(ROUTE2818)
ROUTE2819 = ROUTE()
ROUTE2819.setFromField("value_changed")
ROUTE2819.setFromNode("Jump_r_knee_RotationInterpolator")
ROUTE2819.setToField("rotation")
ROUTE2819.setToNode("hanim_r_knee")

Group2760.addChildren(ROUTE2819)
ROUTE2820 = ROUTE()
ROUTE2820.setFromField("value_changed")
ROUTE2820.setFromNode("Jump_r_hip_RotationInterpolator")
ROUTE2820.setToField("rotation")
ROUTE2820.setToNode("hanim_r_hip")

Group2760.addChildren(ROUTE2820)
ROUTE2821 = ROUTE()
ROUTE2821.setFromField("value_changed")
ROUTE2821.setFromNode("Jump_l_ankle_RotationInterpolator")
ROUTE2821.setToField("rotation")
ROUTE2821.setToNode("hanim_l_ankle")

Group2760.addChildren(ROUTE2821)
ROUTE2822 = ROUTE()
ROUTE2822.setFromField("value_changed")
ROUTE2822.setFromNode("Jump_l_knee_RotationInterpolator")
ROUTE2822.setToField("rotation")
ROUTE2822.setToNode("hanim_l_knee")

Group2760.addChildren(ROUTE2822)
ROUTE2823 = ROUTE()
ROUTE2823.setFromField("value_changed")
ROUTE2823.setFromNode("Jump_l_hip_RotationInterpolator")
ROUTE2823.setToField("rotation")
ROUTE2823.setToNode("hanim_l_hip")

Group2760.addChildren(ROUTE2823)
ROUTE2824 = ROUTE()
ROUTE2824.setFromField("value_changed")
ROUTE2824.setFromNode("Jump_lower_body_RotationInterpolator")
ROUTE2824.setToField("rotation")
ROUTE2824.setToNode("hanim_sacroiliac")

Group2760.addChildren(ROUTE2824)
ROUTE2825 = ROUTE()
ROUTE2825.setFromField("value_changed")
ROUTE2825.setFromNode("Jump_r_wrist_RotationInterpolator")
ROUTE2825.setToField("rotation")
ROUTE2825.setToNode("hanim_r_wrist")

Group2760.addChildren(ROUTE2825)
ROUTE2826 = ROUTE()
ROUTE2826.setFromField("value_changed")
ROUTE2826.setFromNode("Jump_r_elbow_RotationInterpolator")
ROUTE2826.setToField("rotation")
ROUTE2826.setToNode("hanim_r_elbow")

Group2760.addChildren(ROUTE2826)
ROUTE2827 = ROUTE()
ROUTE2827.setFromField("value_changed")
ROUTE2827.setFromNode("Jump_r_shoulder_RotationInterpolator")
ROUTE2827.setToField("rotation")
ROUTE2827.setToNode("hanim_r_shoulder")

Group2760.addChildren(ROUTE2827)
ROUTE2828 = ROUTE()
ROUTE2828.setFromField("value_changed")
ROUTE2828.setFromNode("Jump_l_wrist_RotationInterpolator")
ROUTE2828.setToField("rotation")
ROUTE2828.setToNode("hanim_l_wrist")

Group2760.addChildren(ROUTE2828)
ROUTE2829 = ROUTE()
ROUTE2829.setFromField("value_changed")
ROUTE2829.setFromNode("Jump_l_elbow_RotationInterpolator")
ROUTE2829.setToField("rotation")
ROUTE2829.setToNode("hanim_l_elbow")

Group2760.addChildren(ROUTE2829)
ROUTE2830 = ROUTE()
ROUTE2830.setFromField("value_changed")
ROUTE2830.setFromNode("Jump_l_shoulder_RotationInterpolator")
ROUTE2830.setToField("rotation")
ROUTE2830.setToNode("hanim_l_shoulder")

Group2760.addChildren(ROUTE2830)
ROUTE2831 = ROUTE()
ROUTE2831.setFromField("value_changed")
ROUTE2831.setFromNode("Jump_head_RotationInterpolator")
ROUTE2831.setToField("rotation")
ROUTE2831.setToNode("hanim_skullbase")

Group2760.addChildren(ROUTE2831)
ROUTE2832 = ROUTE()
ROUTE2832.setFromField("value_changed")
ROUTE2832.setFromNode("Jump_neck_RotationInterpolator")
ROUTE2832.setToField("rotation")
ROUTE2832.setToNode("hanim_vc4")

Group2760.addChildren(ROUTE2832)
ROUTE2833 = ROUTE()
ROUTE2833.setFromField("value_changed")
ROUTE2833.setFromNode("Jump_upper_body_RotationInterpolator")
ROUTE2833.setToField("rotation")
ROUTE2833.setToNode("hanim_vl1")

Group2760.addChildren(ROUTE2833)
ROUTE2834 = ROUTE()
ROUTE2834.setFromField("value_changed")
ROUTE2834.setFromNode("Jump_whole_body_RotationInterpolator")
ROUTE2834.setToField("rotation")
ROUTE2834.setToNode("hanim_humanoid_root")

Group2760.addChildren(ROUTE2834)
ROUTE2835 = ROUTE()
ROUTE2835.setFromField("value_changed")
ROUTE2835.setFromNode("Jump_whole_body_TranslationInterpolator")
ROUTE2835.setToField("translation")
ROUTE2835.setToNode("hanim_humanoid_root")

Group2760.addChildren(ROUTE2835)
ROUTE2836 = ROUTE()
ROUTE2836.setFromField("value_changed")
ROUTE2836.setFromNode("Jump_l_sternoclavicular_RollInterpolator")
ROUTE2836.setToField("rotation")
ROUTE2836.setToNode("hanim_l_sternoclavicular")

Group2760.addChildren(ROUTE2836)
ROUTE2837 = ROUTE()
ROUTE2837.setFromField("value_changed")
ROUTE2837.setFromNode("Jump_l_acromioclavicular_RollInterpolator")
ROUTE2837.setToField("rotation")
ROUTE2837.setToNode("hanim_l_acromioclavicular")

Group2760.addChildren(ROUTE2837)
ROUTE2838 = ROUTE()
ROUTE2838.setFromField("value_changed")
ROUTE2838.setFromNode("Jump_r_sternoclavicular_RollInterpolator")
ROUTE2838.setToField("rotation")
ROUTE2838.setToNode("hanim_r_sternoclavicular")

Group2760.addChildren(ROUTE2838)
ROUTE2839 = ROUTE()
ROUTE2839.setFromField("value_changed")
ROUTE2839.setFromNode("Jump_r_acromioclavicular_RollInterpolator")
ROUTE2839.setToField("rotation")
ROUTE2839.setToNode("hanim_r_acromioclavicular")

Group2760.addChildren(ROUTE2839)
ROUTE2840 = ROUTE()
ROUTE2840.setFromField("value_changed")
ROUTE2840.setFromNode("Jump_r_metatarsal_PitchInterpolator")
ROUTE2840.setToField("rotation")
ROUTE2840.setToNode("hanim_l_metatarsal")

Group2760.addChildren(ROUTE2840)
ROUTE2841 = ROUTE()
ROUTE2841.setFromField("value_changed")
ROUTE2841.setFromNode("Jump_r_metatarsal_PitchInterpolator")
ROUTE2841.setToField("rotation")
ROUTE2841.setToNode("hanim_r_metatarsal")

Group2760.addChildren(ROUTE2841)
ROUTE2842 = ROUTE()
ROUTE2842.setFromField("value_changed")
ROUTE2842.setFromNode("Jump_sacroiliac_YawInterpolator")
ROUTE2842.setToField("rotation")
ROUTE2842.setToNode("hanim_sacroiliac")

Group2760.addChildren(ROUTE2842)
ROUTE2843 = ROUTE()
ROUTE2843.setFromField("value_changed")
ROUTE2843.setFromNode("Jump_vl5_YawInterpolator")
ROUTE2843.setToField("rotation")
ROUTE2843.setToNode("hanim_vl5")

Group2760.addChildren(ROUTE2843)
ROUTE2844 = ROUTE()
ROUTE2844.setFromField("value_changed")
ROUTE2844.setFromNode("Jump_vc6_YawInterpolator")
ROUTE2844.setToField("rotation")
ROUTE2844.setToNode("hanim_vc6")

Group2760.addChildren(ROUTE2844)
ROUTE2845 = ROUTE()
ROUTE2845.setFromField("value_changed")
ROUTE2845.setFromNode("Jump_l_thumb1_PitchInterpolator")
ROUTE2845.setToField("rotation")
ROUTE2845.setToNode("hanim_l_thumb1")

Group2760.addChildren(ROUTE2845)
ROUTE2846 = ROUTE()
ROUTE2846.setFromField("value_changed")
ROUTE2846.setFromNode("Jump_r_thumb1_PitchInterpolator")
ROUTE2846.setToField("rotation")
ROUTE2846.setToNode("hanim_r_thumb1")

Group2760.addChildren(ROUTE2846)

Scene30.addChildren(Group2760)
Group2847 = Group()
Group2847.setDEF("KickAnimation")
TimeSensor2848 = TimeSensor()
TimeSensor2848.setDEF("KickTimer")
TimeSensor2848.setCycleInterval(3.73)
TimeSensor2848.setLoop(True)

Group2847.addChildren(TimeSensor2848)
OrientationInterpolator2849 = OrientationInterpolator()
OrientationInterpolator2849.setDEF("Kick_l_sternoclavicular_RollInterpolator")
OrientationInterpolator2849.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2849.setKeyValue([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2849)
OrientationInterpolator2850 = OrientationInterpolator()
OrientationInterpolator2850.setDEF("Kick_l_acromioclavicular_RollInterpolator")
OrientationInterpolator2850.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2850.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2850)
OrientationInterpolator2851 = OrientationInterpolator()
OrientationInterpolator2851.setDEF("Kick_l_shoulder_RollInterpolator")
OrientationInterpolator2851.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2851.setKeyValue([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2851)
OrientationInterpolator2852 = OrientationInterpolator()
OrientationInterpolator2852.setDEF("Kick_l_ForeArm_PitchInterpolator")
OrientationInterpolator2852.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2852.setKeyValue([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2852)
OrientationInterpolator2853 = OrientationInterpolator()
OrientationInterpolator2853.setDEF("Kick_l_wrist_RollInterpolator")
OrientationInterpolator2853.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2853.setKeyValue([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2853)
OrientationInterpolator2854 = OrientationInterpolator()
OrientationInterpolator2854.setDEF("Kick_l_thumb1_PitchInterpolator")
OrientationInterpolator2854.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2854.setKeyValue([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2854)
OrientationInterpolator2855 = OrientationInterpolator()
OrientationInterpolator2855.setDEF("Kick_r_sternoclavicular_RollInterpolator")
OrientationInterpolator2855.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2855.setKeyValue([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2855)
OrientationInterpolator2856 = OrientationInterpolator()
OrientationInterpolator2856.setDEF("Kick_r_acromioclavicular_RollInterpolator")
OrientationInterpolator2856.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2856.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2856)
OrientationInterpolator2857 = OrientationInterpolator()
OrientationInterpolator2857.setDEF("Kick_r_shoulder_RollInterpolator")
OrientationInterpolator2857.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2857.setKeyValue([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2857)
OrientationInterpolator2858 = OrientationInterpolator()
OrientationInterpolator2858.setDEF("Kick_r_ForeArm_PitchInterpolator")
OrientationInterpolator2858.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2858.setKeyValue([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2858)
OrientationInterpolator2859 = OrientationInterpolator()
OrientationInterpolator2859.setDEF("Kick_r_wrist_RollInterpolator")
OrientationInterpolator2859.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2859.setKeyValue([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2859)
OrientationInterpolator2860 = OrientationInterpolator()
OrientationInterpolator2860.setDEF("Kick_r_thumb1_PitchInterpolator")
OrientationInterpolator2860.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2860.setKeyValue([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2860)
OrientationInterpolator2861 = OrientationInterpolator()
OrientationInterpolator2861.setDEF("Kick_r_hip_PitchInterpolator")
OrientationInterpolator2861.setKey([0,0.2,0.3,0.5,0.6,0.9,1])
OrientationInterpolator2861.setKeyValue([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2861)
OrientationInterpolator2862 = OrientationInterpolator()
OrientationInterpolator2862.setDEF("Kick_r_knee_PitchInterpolator")
OrientationInterpolator2862.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2862.setKeyValue([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2862)
OrientationInterpolator2863 = OrientationInterpolator()
OrientationInterpolator2863.setDEF("Kick_l_hip_PitchInterpolator")
OrientationInterpolator2863.setKey([0,0.2,0.3,0.5,0.6,0.9,1])
OrientationInterpolator2863.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2863)
OrientationInterpolator2864 = OrientationInterpolator()
OrientationInterpolator2864.setDEF("Kick_l_knee_PitchInterpolator")
OrientationInterpolator2864.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2864.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2864)
OrientationInterpolator2865 = OrientationInterpolator()
OrientationInterpolator2865.setDEF("Kick_r_ankle_PitchInterpolator")
OrientationInterpolator2865.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2865.setKeyValue([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2865)
OrientationInterpolator2866 = OrientationInterpolator()
OrientationInterpolator2866.setDEF("Kick_r_metatarsal_PitchInterpolator")
OrientationInterpolator2866.setKey([0,0.2,0.4,0.6,0.7,1])
OrientationInterpolator2866.setKeyValue([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])

Group2847.addChildren(OrientationInterpolator2866)
OrientationInterpolator2867 = OrientationInterpolator()
OrientationInterpolator2867.setDEF("Kick_sacroiliac_YawInterpolator")
OrientationInterpolator2867.setKey([0,0.2,0.4,0.6,0.8,1])
OrientationInterpolator2867.setKeyValue([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])

Group2847.addChildren(OrientationInterpolator2867)
OrientationInterpolator2868 = OrientationInterpolator()
OrientationInterpolator2868.setDEF("Kick_vl5_YawInterpolator")
OrientationInterpolator2868.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2868.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2868)
OrientationInterpolator2869 = OrientationInterpolator()
OrientationInterpolator2869.setDEF("Kick_vc6_YawInterpolator")
OrientationInterpolator2869.setKey([0,0.2,0.4,0.5,0.6,0.8,1])
OrientationInterpolator2869.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2869)
OrientationInterpolator2870 = OrientationInterpolator()
OrientationInterpolator2870.setDEF("Kick_lower_body_RotationInterpolator")
OrientationInterpolator2870.setKey([0,0.5,1])
OrientationInterpolator2870.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2870)
OrientationInterpolator2871 = OrientationInterpolator()
OrientationInterpolator2871.setDEF("Kick_upper_body_RotationInterpolator")
OrientationInterpolator2871.setKey([0,0.5,1])
OrientationInterpolator2871.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2871)
OrientationInterpolator2872 = OrientationInterpolator()
OrientationInterpolator2872.setDEF("Kick_whole_body_RotationInterpolator")
OrientationInterpolator2872.setKey([0,0.5,1])
OrientationInterpolator2872.setKeyValue([0,0,1,0,0,0,1,0,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2872)
PositionInterpolator2873 = PositionInterpolator()
PositionInterpolator2873.setDEF("Kick_whole_body_TranslationInterpolator")
PositionInterpolator2873.setKey([0,0.5,1])
PositionInterpolator2873.setKeyValue([0,0,0,0,0,0,0,0,0])

Group2847.addChildren(PositionInterpolator2873)
OrientationInterpolator2874 = OrientationInterpolator()
OrientationInterpolator2874.setDEF("Kick_neck_RotationInterpolator")
OrientationInterpolator2874.setKey([0,0.25,0.55,1])
OrientationInterpolator2874.setKeyValue([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0])

Group2847.addChildren(OrientationInterpolator2874)
ROUTE2875 = ROUTE()
ROUTE2875.setFromField("fraction_changed")
ROUTE2875.setFromNode("KickTimer")
ROUTE2875.setToField("set_fraction")
ROUTE2875.setToNode("Kick_l_sternoclavicular_RollInterpolator")

Group2847.addChildren(ROUTE2875)
ROUTE2876 = ROUTE()
ROUTE2876.setFromField("fraction_changed")
ROUTE2876.setFromNode("KickTimer")
ROUTE2876.setToField("set_fraction")
ROUTE2876.setToNode("Kick_l_acromioclavicular_RollInterpolator")

Group2847.addChildren(ROUTE2876)
ROUTE2877 = ROUTE()
ROUTE2877.setFromField("fraction_changed")
ROUTE2877.setFromNode("KickTimer")
ROUTE2877.setToField("set_fraction")
ROUTE2877.setToNode("Kick_l_shoulder_RollInterpolator")

Group2847.addChildren(ROUTE2877)
ROUTE2878 = ROUTE()
ROUTE2878.setFromField("fraction_changed")
ROUTE2878.setFromNode("KickTimer")
ROUTE2878.setToField("set_fraction")
ROUTE2878.setToNode("Kick_l_ForeArm_PitchInterpolator")

Group2847.addChildren(ROUTE2878)
ROUTE2879 = ROUTE()
ROUTE2879.setFromField("fraction_changed")
ROUTE2879.setFromNode("KickTimer")
ROUTE2879.setToField("set_fraction")
ROUTE2879.setToNode("Kick_l_wrist_RollInterpolator")

Group2847.addChildren(ROUTE2879)
ROUTE2880 = ROUTE()
ROUTE2880.setFromField("fraction_changed")
ROUTE2880.setFromNode("KickTimer")
ROUTE2880.setToField("set_fraction")
ROUTE2880.setToNode("Kick_l_thumb1_PitchInterpolator")

Group2847.addChildren(ROUTE2880)
ROUTE2881 = ROUTE()
ROUTE2881.setFromField("fraction_changed")
ROUTE2881.setFromNode("KickTimer")
ROUTE2881.setToField("set_fraction")
ROUTE2881.setToNode("Kick_r_sternoclavicular_RollInterpolator")

Group2847.addChildren(ROUTE2881)
ROUTE2882 = ROUTE()
ROUTE2882.setFromField("fraction_changed")
ROUTE2882.setFromNode("KickTimer")
ROUTE2882.setToField("set_fraction")
ROUTE2882.setToNode("Kick_r_acromioclavicular_RollInterpolator")

Group2847.addChildren(ROUTE2882)
ROUTE2883 = ROUTE()
ROUTE2883.setFromField("fraction_changed")
ROUTE2883.setFromNode("KickTimer")
ROUTE2883.setToField("set_fraction")
ROUTE2883.setToNode("Kick_r_shoulder_RollInterpolator")

Group2847.addChildren(ROUTE2883)
ROUTE2884 = ROUTE()
ROUTE2884.setFromField("fraction_changed")
ROUTE2884.setFromNode("KickTimer")
ROUTE2884.setToField("set_fraction")
ROUTE2884.setToNode("Kick_r_ForeArm_PitchInterpolator")

Group2847.addChildren(ROUTE2884)
ROUTE2885 = ROUTE()
ROUTE2885.setFromField("fraction_changed")
ROUTE2885.setFromNode("KickTimer")
ROUTE2885.setToField("set_fraction")
ROUTE2885.setToNode("Kick_r_wrist_RollInterpolator")

Group2847.addChildren(ROUTE2885)
ROUTE2886 = ROUTE()
ROUTE2886.setFromField("fraction_changed")
ROUTE2886.setFromNode("KickTimer")
ROUTE2886.setToField("set_fraction")
ROUTE2886.setToNode("Kick_r_thumb1_PitchInterpolator")

Group2847.addChildren(ROUTE2886)
ROUTE2887 = ROUTE()
ROUTE2887.setFromField("fraction_changed")
ROUTE2887.setFromNode("KickTimer")
ROUTE2887.setToField("set_fraction")
ROUTE2887.setToNode("Kick_r_hip_PitchInterpolator")

Group2847.addChildren(ROUTE2887)
ROUTE2888 = ROUTE()
ROUTE2888.setFromField("fraction_changed")
ROUTE2888.setFromNode("KickTimer")
ROUTE2888.setToField("set_fraction")
ROUTE2888.setToNode("Kick_r_knee_PitchInterpolator")

Group2847.addChildren(ROUTE2888)
ROUTE2889 = ROUTE()
ROUTE2889.setFromField("fraction_changed")
ROUTE2889.setFromNode("KickTimer")
ROUTE2889.setToField("set_fraction")
ROUTE2889.setToNode("Kick_l_hip_PitchInterpolator")

Group2847.addChildren(ROUTE2889)
ROUTE2890 = ROUTE()
ROUTE2890.setFromField("fraction_changed")
ROUTE2890.setFromNode("KickTimer")
ROUTE2890.setToField("set_fraction")
ROUTE2890.setToNode("Kick_l_knee_PitchInterpolator")

Group2847.addChildren(ROUTE2890)
ROUTE2891 = ROUTE()
ROUTE2891.setFromField("fraction_changed")
ROUTE2891.setFromNode("KickTimer")
ROUTE2891.setToField("set_fraction")
ROUTE2891.setToNode("Kick_r_ankle_PitchInterpolator")

Group2847.addChildren(ROUTE2891)
ROUTE2892 = ROUTE()
ROUTE2892.setFromField("fraction_changed")
ROUTE2892.setFromNode("KickTimer")
ROUTE2892.setToField("set_fraction")
ROUTE2892.setToNode("Kick_r_metatarsal_PitchInterpolator")

Group2847.addChildren(ROUTE2892)
ROUTE2893 = ROUTE()
ROUTE2893.setFromField("fraction_changed")
ROUTE2893.setFromNode("KickTimer")
ROUTE2893.setToField("set_fraction")
ROUTE2893.setToNode("Kick_sacroiliac_YawInterpolator")

Group2847.addChildren(ROUTE2893)
ROUTE2894 = ROUTE()
ROUTE2894.setFromField("fraction_changed")
ROUTE2894.setFromNode("KickTimer")
ROUTE2894.setToField("set_fraction")
ROUTE2894.setToNode("Kick_vl5_YawInterpolator")

Group2847.addChildren(ROUTE2894)
ROUTE2895 = ROUTE()
ROUTE2895.setFromField("fraction_changed")
ROUTE2895.setFromNode("KickTimer")
ROUTE2895.setToField("set_fraction")
ROUTE2895.setToNode("Kick_vc6_YawInterpolator")

Group2847.addChildren(ROUTE2895)
ROUTE2896 = ROUTE()
ROUTE2896.setFromField("fraction_changed")
ROUTE2896.setFromNode("KickTimer")
ROUTE2896.setToField("set_fraction")
ROUTE2896.setToNode("Kick_lower_body_RotationInterpolator")

Group2847.addChildren(ROUTE2896)
ROUTE2897 = ROUTE()
ROUTE2897.setFromField("fraction_changed")
ROUTE2897.setFromNode("KickTimer")
ROUTE2897.setToField("set_fraction")
ROUTE2897.setToNode("Kick_upper_body_RotationInterpolator")

Group2847.addChildren(ROUTE2897)
ROUTE2898 = ROUTE()
ROUTE2898.setFromField("fraction_changed")
ROUTE2898.setFromNode("KickTimer")
ROUTE2898.setToField("set_fraction")
ROUTE2898.setToNode("Kick_whole_body_RotationInterpolator")

Group2847.addChildren(ROUTE2898)
ROUTE2899 = ROUTE()
ROUTE2899.setFromField("fraction_changed")
ROUTE2899.setFromNode("KickTimer")
ROUTE2899.setToField("set_fraction")
ROUTE2899.setToNode("Kick_whole_body_TranslationInterpolator")

Group2847.addChildren(ROUTE2899)
ROUTE2900 = ROUTE()
ROUTE2900.setFromField("fraction_changed")
ROUTE2900.setFromNode("KickTimer")
ROUTE2900.setToField("set_fraction")
ROUTE2900.setToNode("Kick_neck_RotationInterpolator")

Group2847.addChildren(ROUTE2900)
ROUTE2901 = ROUTE()
ROUTE2901.setFromField("value_changed")
ROUTE2901.setFromNode("Kick_l_sternoclavicular_RollInterpolator")
ROUTE2901.setToField("rotation")
ROUTE2901.setToNode("hanim_l_sternoclavicular")

Group2847.addChildren(ROUTE2901)
ROUTE2902 = ROUTE()
ROUTE2902.setFromField("value_changed")
ROUTE2902.setFromNode("Kick_l_acromioclavicular_RollInterpolator")
ROUTE2902.setToField("rotation")
ROUTE2902.setToNode("hanim_l_acromioclavicular")

Group2847.addChildren(ROUTE2902)
ROUTE2903 = ROUTE()
ROUTE2903.setFromField("value_changed")
ROUTE2903.setFromNode("Kick_l_shoulder_RollInterpolator")
ROUTE2903.setToField("rotation")
ROUTE2903.setToNode("hanim_l_shoulder")

Group2847.addChildren(ROUTE2903)
ROUTE2904 = ROUTE()
ROUTE2904.setFromField("value_changed")
ROUTE2904.setFromNode("Kick_l_ForeArm_PitchInterpolator")
ROUTE2904.setToField("rotation")
ROUTE2904.setToNode("hanim_l_elbow")

Group2847.addChildren(ROUTE2904)
ROUTE2905 = ROUTE()
ROUTE2905.setFromField("value_changed")
ROUTE2905.setFromNode("Kick_l_wrist_RollInterpolator")
ROUTE2905.setToField("rotation")
ROUTE2905.setToNode("hanim_l_wrist")

Group2847.addChildren(ROUTE2905)
ROUTE2906 = ROUTE()
ROUTE2906.setFromField("value_changed")
ROUTE2906.setFromNode("Kick_l_thumb1_PitchInterpolator")
ROUTE2906.setToField("rotation")
ROUTE2906.setToNode("hanim_l_thumb1")

Group2847.addChildren(ROUTE2906)
ROUTE2907 = ROUTE()
ROUTE2907.setFromField("value_changed")
ROUTE2907.setFromNode("Kick_r_sternoclavicular_RollInterpolator")
ROUTE2907.setToField("rotation")
ROUTE2907.setToNode("hanim_r_sternoclavicular")

Group2847.addChildren(ROUTE2907)
ROUTE2908 = ROUTE()
ROUTE2908.setFromField("value_changed")
ROUTE2908.setFromNode("Kick_r_acromioclavicular_RollInterpolator")
ROUTE2908.setToField("rotation")
ROUTE2908.setToNode("hanim_r_acromioclavicular")

Group2847.addChildren(ROUTE2908)
ROUTE2909 = ROUTE()
ROUTE2909.setFromField("value_changed")
ROUTE2909.setFromNode("Kick_r_shoulder_RollInterpolator")
ROUTE2909.setToField("rotation")
ROUTE2909.setToNode("hanim_r_shoulder")

Group2847.addChildren(ROUTE2909)
ROUTE2910 = ROUTE()
ROUTE2910.setFromField("value_changed")
ROUTE2910.setFromNode("Kick_r_ForeArm_PitchInterpolator")
ROUTE2910.setToField("rotation")
ROUTE2910.setToNode("hanim_r_elbow")

Group2847.addChildren(ROUTE2910)
ROUTE2911 = ROUTE()
ROUTE2911.setFromField("value_changed")
ROUTE2911.setFromNode("Kick_r_wrist_RollInterpolator")
ROUTE2911.setToField("rotation")
ROUTE2911.setToNode("hanim_r_wrist")

Group2847.addChildren(ROUTE2911)
ROUTE2912 = ROUTE()
ROUTE2912.setFromField("value_changed")
ROUTE2912.setFromNode("Kick_r_thumb1_PitchInterpolator")
ROUTE2912.setToField("rotation")
ROUTE2912.setToNode("hanim_r_thumb1")

Group2847.addChildren(ROUTE2912)
ROUTE2913 = ROUTE()
ROUTE2913.setFromField("value_changed")
ROUTE2913.setFromNode("Kick_r_hip_PitchInterpolator")
ROUTE2913.setToField("rotation")
ROUTE2913.setToNode("hanim_r_hip")

Group2847.addChildren(ROUTE2913)
ROUTE2914 = ROUTE()
ROUTE2914.setFromField("value_changed")
ROUTE2914.setFromNode("Kick_r_knee_PitchInterpolator")
ROUTE2914.setToField("rotation")
ROUTE2914.setToNode("hanim_r_knee")

Group2847.addChildren(ROUTE2914)
ROUTE2915 = ROUTE()
ROUTE2915.setFromField("value_changed")
ROUTE2915.setFromNode("Kick_r_ankle_PitchInterpolator")
ROUTE2915.setToField("rotation")
ROUTE2915.setToNode("hanim_r_ankle")

Group2847.addChildren(ROUTE2915)
ROUTE2916 = ROUTE()
ROUTE2916.setFromField("value_changed")
ROUTE2916.setFromNode("Kick_r_metatarsal_PitchInterpolator")
ROUTE2916.setToField("rotation")
ROUTE2916.setToNode("hanim_r_metatarsal")

Group2847.addChildren(ROUTE2916)
ROUTE2917 = ROUTE()
ROUTE2917.setFromField("value_changed")
ROUTE2917.setFromNode("Kick_l_hip_PitchInterpolator")
ROUTE2917.setToField("rotation")
ROUTE2917.setToNode("hanim_l_hip")

Group2847.addChildren(ROUTE2917)
ROUTE2918 = ROUTE()
ROUTE2918.setFromField("value_changed")
ROUTE2918.setFromNode("Kick_l_knee_PitchInterpolator")
ROUTE2918.setToField("rotation")
ROUTE2918.setToNode("hanim_l_knee")

Group2847.addChildren(ROUTE2918)
ROUTE2919 = ROUTE()
ROUTE2919.setFromField("value_changed")
ROUTE2919.setFromNode("Kick_r_ankle_PitchInterpolator")
ROUTE2919.setToField("rotation")
ROUTE2919.setToNode("hanim_l_ankle")

Group2847.addChildren(ROUTE2919)
ROUTE2920 = ROUTE()
ROUTE2920.setFromField("value_changed")
ROUTE2920.setFromNode("Kick_r_metatarsal_PitchInterpolator")
ROUTE2920.setToField("rotation")
ROUTE2920.setToNode("hanim_l_metatarsal")

Group2847.addChildren(ROUTE2920)
ROUTE2921 = ROUTE()
ROUTE2921.setFromField("value_changed")
ROUTE2921.setFromNode("Kick_sacroiliac_YawInterpolator")
ROUTE2921.setToField("rotation")
ROUTE2921.setToNode("hanim_sacroiliac")

Group2847.addChildren(ROUTE2921)
ROUTE2922 = ROUTE()
ROUTE2922.setFromField("value_changed")
ROUTE2922.setFromNode("Kick_vl5_YawInterpolator")
ROUTE2922.setToField("rotation")
ROUTE2922.setToNode("hanim_vl5")

Group2847.addChildren(ROUTE2922)
ROUTE2923 = ROUTE()
ROUTE2923.setFromField("value_changed")
ROUTE2923.setFromNode("Kick_vc6_YawInterpolator")
ROUTE2923.setToField("rotation")
ROUTE2923.setToNode("hanim_vc6")

Group2847.addChildren(ROUTE2923)
ROUTE2924 = ROUTE()
ROUTE2924.setFromField("value_changed")
ROUTE2924.setFromNode("Kick_upper_body_RotationInterpolator")
ROUTE2924.setToField("rotation")
ROUTE2924.setToNode("hanim_vl1")

Group2847.addChildren(ROUTE2924)
ROUTE2925 = ROUTE()
ROUTE2925.setFromField("value_changed")
ROUTE2925.setFromNode("Kick_lower_body_RotationInterpolator")
ROUTE2925.setToField("rotation")
ROUTE2925.setToNode("hanim_sacroiliac")

Group2847.addChildren(ROUTE2925)
ROUTE2926 = ROUTE()
ROUTE2926.setFromField("value_changed")
ROUTE2926.setFromNode("Kick_whole_body_RotationInterpolator")
ROUTE2926.setToField("rotation")
ROUTE2926.setToNode("hanim_humanoid_root")

Group2847.addChildren(ROUTE2926)
ROUTE2927 = ROUTE()
ROUTE2927.setFromField("value_changed")
ROUTE2927.setFromNode("Kick_whole_body_TranslationInterpolator")
ROUTE2927.setToField("translation")
ROUTE2927.setToNode("hanim_humanoid_root")

Group2847.addChildren(ROUTE2927)
ROUTE2928 = ROUTE()
ROUTE2928.setFromField("value_changed")
ROUTE2928.setFromNode("Kick_neck_RotationInterpolator")
ROUTE2928.setToField("rotation")
ROUTE2928.setToNode("hanim_vc4")

Group2847.addChildren(ROUTE2928)

Scene30.addChildren(Group2847)
Group2929 = Group()
Group2929.setDEF("UserInterface")
#Authoring hint: these axes are aligned within local coordinate system
Transform2930 = Transform()
Transform2930.setDEF("CoordinateAxesAdjustedScale")
Transform2930.setScale([0.175,0.175,0.175])
Inline2931 = Inline()
Inline2931.setDEF("CoordinateAxes")
Inline2931.setUrl(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])

Transform2930.addChildren(Inline2931)

Group2929.addChildren(Transform2930)
Transform2932 = Transform()
Transform2932.setDEF("cordsys")
Transform2932.setScale([0.175,0.175,0.175])
#<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>

Group2929.addChildren(Transform2932)
ProximitySensor2933 = ProximitySensor()
ProximitySensor2933.setDEF("HudProximitySensor")
ProximitySensor2933.setCenter([0,20,0])
ProximitySensor2933.setSize([500,100,500])

Group2929.addChildren(ProximitySensor2933)
Transform2934 = Transform()
Transform2934.setDEF("Stage")
Transform2934.setScale([1,0.0125,1])
Transform2934.setTranslation([0,-0.0125,0])
Shape2935 = Shape()
Appearance2936 = Appearance()
Material2937 = Material()
Material2937.setTransparency(0.6)

Appearance2936.setMaterial(Material2937)

Shape2935.setAppearance(Appearance2936)
Box2938 = Box()

Shape2935.setGeometry(Box2938)

Transform2934.addChildren(Shape2935)
Transform2939 = Transform()
Transform2939.setDEF("Circle0")
Transform2939.setScale([1.175,1,1.175])
Shape2940 = Shape()
Appearance2941 = Appearance()
Material2942 = Material()
Material2942.setDiffuseColor([0.9,0,0.7])
Material2942.setEmissiveColor([0.424956,0.483976,1])

Appearance2941.setMaterial(Material2942)

Shape2940.setAppearance(Appearance2941)
IndexedLineSet2943 = IndexedLineSet()
IndexedLineSet2943.setDEF("Orbit1")
IndexedLineSet2943.setCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1])
Coordinate2944 = Coordinate()
Coordinate2944.setPoint([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0])

IndexedLineSet2943.setCoord(Coordinate2944)

Shape2940.setGeometry(IndexedLineSet2943)

Transform2939.addChildren(Shape2940)

Transform2934.addChildren(Transform2939)
Transform2945 = Transform()
Transform2945.setDEF("Circle1")
Transform2945.setScale([0.5,1,0.5])
Shape2946 = Shape()
Appearance2947 = Appearance()
Material2948 = Material()
Material2948.setDiffuseColor([0.9,0,0.7])
Material2948.setEmissiveColor([0.424956,0.483976,1])

Appearance2947.setMaterial(Material2948)

Shape2946.setAppearance(Appearance2947)
IndexedLineSet2949 = IndexedLineSet()
IndexedLineSet2949.setUSE("Orbit1")

Shape2946.setGeometry(IndexedLineSet2949)

Transform2945.addChildren(Shape2946)

Transform2934.addChildren(Transform2945)
Transform2950 = Transform()
Transform2950.setDEF("Circle2")
Transform2950.setScale([0.25,1,0.25])
Shape2951 = Shape()
Appearance2952 = Appearance()
Material2953 = Material()
Material2953.setDiffuseColor([0.9,0,0.7])
Material2953.setEmissiveColor([0.424956,0.483976,1])

Appearance2952.setMaterial(Material2953)

Shape2951.setAppearance(Appearance2952)
IndexedLineSet2954 = IndexedLineSet()
IndexedLineSet2954.setUSE("Orbit1")

Shape2951.setGeometry(IndexedLineSet2954)

Transform2950.addChildren(Shape2951)

Transform2934.addChildren(Transform2950)

Group2929.addChildren(Transform2934)
Transform2955 = Transform()
Transform2955.setDEF("HudXform")
Transform2955.setRotation([-0.09996068,0.9942513,0.03837026,0.7131352])
Transform2955.setTranslation([1.705442,1.042139,1.989742])
Transform2956 = Transform()
Transform2956.setScale([0.035,0.035,0.035])
Transform2956.setTranslation([-0.42,-0.2,-0.75])
Transform2957 = Transform()
Transform2957.setDEF("StandTransform")
Transform2957.setTranslation([0,-1,0])
TouchSensor2958 = TouchSensor()
TouchSensor2958.setDEF("Stand_Touch")
TouchSensor2958.setDescription("touch to select")

Transform2957.addChildren(TouchSensor2958)
Shape2959 = Shape()
Shape2959.setDEF("StandTextShape")
Appearance2960 = Appearance()
Material2961 = Material()
Material2961.setDEF("text_color")
Material2961.setAmbientIntensity(1)
Material2961.setDiffuseColor([0.819,0.521,0.169])
Material2961.setEmissiveColor([0.819,0.521,0.169])
Material2961.setSpecularColor([0.819,0.521,0.169])

Appearance2960.setMaterial(Material2961)

Shape2959.setAppearance(Appearance2960)
Text2962 = Text()
Text2962.setString(["Stand"])

Shape2959.setGeometry(Text2962)

Transform2957.addChildren(Shape2959)
Shape2963 = Shape()
Shape2963.setDEF("Stand_Back")
Appearance2964 = Appearance()
Material2965 = Material()
Material2965.setDEF("Clear")
Material2965.setAmbientIntensity(1)
Material2965.setDiffuseColor([0,0.5,0])
Material2965.setEmissiveColor([0,0.5,0])
Material2965.setTransparency(0.8)

Appearance2964.setMaterial(Material2965)

Shape2963.setAppearance(Appearance2964)
IndexedFaceSet2966 = IndexedFaceSet()
IndexedFaceSet2966.setDEF("Backing")
IndexedFaceSet2966.setCoordIndex([0,1,2,3,-1])
Coordinate2967 = Coordinate()
Coordinate2967.setPoint([-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01])

IndexedFaceSet2966.setCoord(Coordinate2967)

Shape2963.setGeometry(IndexedFaceSet2966)

Transform2957.addChildren(Shape2963)

Transform2956.addChildren(Transform2957)
Transform2968 = Transform()
Transform2968.setDEF("PitchTransform")
Transform2968.setTranslation([3,-1,0])
TouchSensor2969 = TouchSensor()
TouchSensor2969.setDEF("Pitch_Touch")
TouchSensor2969.setDescription("touch to select")

Transform2968.addChildren(TouchSensor2969)
Shape2970 = Shape()
Shape2970.setDEF("PitchTextShape")
Appearance2971 = Appearance()
Material2972 = Material()
Material2972.setUSE("text_color")

Appearance2971.setMaterial(Material2972)

Shape2970.setAppearance(Appearance2971)
Text2973 = Text()
Text2973.setString(["Pitch"])

Shape2970.setGeometry(Text2973)

Transform2968.addChildren(Shape2970)
Shape2974 = Shape()
Shape2974.setDEF("Pitch_Back")
Appearance2975 = Appearance()
Material2976 = Material()
Material2976.setUSE("Clear")

Appearance2975.setMaterial(Material2976)

Shape2974.setAppearance(Appearance2975)
IndexedFaceSet2977 = IndexedFaceSet()
IndexedFaceSet2977.setUSE("Backing")

Shape2974.setGeometry(IndexedFaceSet2977)

Transform2968.addChildren(Shape2974)

Transform2956.addChildren(Transform2968)
Transform2978 = Transform()
Transform2978.setDEF("YawTransform")
Transform2978.setTranslation([6,-1,0])
TouchSensor2979 = TouchSensor()
TouchSensor2979.setDEF("Yaw_Touch")
TouchSensor2979.setDescription("touch to select")

Transform2978.addChildren(TouchSensor2979)
Shape2980 = Shape()
Shape2980.setDEF("YawText")
Appearance2981 = Appearance()
Material2982 = Material()
Material2982.setUSE("text_color")

Appearance2981.setMaterial(Material2982)

Shape2980.setAppearance(Appearance2981)
Text2983 = Text()
Text2983.setString(["Yaw"])

Shape2980.setGeometry(Text2983)

Transform2978.addChildren(Shape2980)
Shape2984 = Shape()
Shape2984.setDEF("Yaw_Back")
Appearance2985 = Appearance()
Material2986 = Material()
Material2986.setUSE("Clear")

Appearance2985.setMaterial(Material2986)

Shape2984.setAppearance(Appearance2985)
IndexedFaceSet2987 = IndexedFaceSet()
IndexedFaceSet2987.setUSE("Backing")

Shape2984.setGeometry(IndexedFaceSet2987)

Transform2978.addChildren(Shape2984)

Transform2956.addChildren(Transform2978)
Transform2988 = Transform()
Transform2988.setDEF("RollTransform")
Transform2988.setTranslation([9,-1,0])
TouchSensor2989 = TouchSensor()
TouchSensor2989.setDEF("Roll_Touch")
TouchSensor2989.setDescription("touch to select")

Transform2988.addChildren(TouchSensor2989)
Shape2990 = Shape()
Shape2990.setDEF("_RollInterpolator")
Appearance2991 = Appearance()
Material2992 = Material()
Material2992.setUSE("text_color")

Appearance2991.setMaterial(Material2992)

Shape2990.setAppearance(Appearance2991)
Text2993 = Text()
Text2993.setString(["Roll"])

Shape2990.setGeometry(Text2993)

Transform2988.addChildren(Shape2990)
Shape2994 = Shape()
Shape2994.setDEF("Roll_Back")
Appearance2995 = Appearance()
Material2996 = Material()
Material2996.setUSE("Clear")

Appearance2995.setMaterial(Material2996)

Shape2994.setAppearance(Appearance2995)
IndexedFaceSet2997 = IndexedFaceSet()
IndexedFaceSet2997.setUSE("Backing")

Shape2994.setGeometry(IndexedFaceSet2997)

Transform2988.addChildren(Shape2994)

Transform2956.addChildren(Transform2988)
Transform2998 = Transform()
Transform2998.setDEF("WalkTransform")
Transform2998.setTranslation([12,-1,0])
TouchSensor2999 = TouchSensor()
TouchSensor2999.setDEF("Walk_Touch")
TouchSensor2999.setDescription("touch to select")

Transform2998.addChildren(TouchSensor2999)
Shape3000 = Shape()
Shape3000.setDEF("WalkText")
Appearance3001 = Appearance()
Material3002 = Material()
Material3002.setUSE("text_color")

Appearance3001.setMaterial(Material3002)

Shape3000.setAppearance(Appearance3001)
Text3003 = Text()
Text3003.setString(["Walk"])

Shape3000.setGeometry(Text3003)

Transform2998.addChildren(Shape3000)
Shape3004 = Shape()
Shape3004.setDEF("Walk_Back")
Appearance3005 = Appearance()
Material3006 = Material()
Material3006.setUSE("Clear")

Appearance3005.setMaterial(Material3006)

Shape3004.setAppearance(Appearance3005)
IndexedFaceSet3007 = IndexedFaceSet()
IndexedFaceSet3007.setUSE("Backing")

Shape3004.setGeometry(IndexedFaceSet3007)

Transform2998.addChildren(Shape3004)

Transform2956.addChildren(Transform2998)
Transform3008 = Transform()
Transform3008.setDEF("RunTransform")
Transform3008.setTranslation([15,-1,0])
TouchSensor3009 = TouchSensor()
TouchSensor3009.setDEF("Run_Touch")
TouchSensor3009.setDescription("touch to select")

Transform3008.addChildren(TouchSensor3009)
Shape3010 = Shape()
Shape3010.setDEF("RunText")
Appearance3011 = Appearance()
Material3012 = Material()
Material3012.setUSE("text_color")

Appearance3011.setMaterial(Material3012)

Shape3010.setAppearance(Appearance3011)
Text3013 = Text()
Text3013.setString(["Run"])

Shape3010.setGeometry(Text3013)

Transform3008.addChildren(Shape3010)
Shape3014 = Shape()
Shape3014.setDEF("Run_Back")
Appearance3015 = Appearance()
Material3016 = Material()
Material3016.setUSE("Clear")

Appearance3015.setMaterial(Material3016)

Shape3014.setAppearance(Appearance3015)
IndexedFaceSet3017 = IndexedFaceSet()
IndexedFaceSet3017.setUSE("Backing")

Shape3014.setGeometry(IndexedFaceSet3017)

Transform3008.addChildren(Shape3014)

Transform2956.addChildren(Transform3008)
Transform3018 = Transform()
Transform3018.setDEF("JumpTransform")
Transform3018.setTranslation([18,-1,0])
TouchSensor3019 = TouchSensor()
TouchSensor3019.setDEF("Jump_Touch")
TouchSensor3019.setDescription("touch to select")

Transform3018.addChildren(TouchSensor3019)
Shape3020 = Shape()
Shape3020.setDEF("Jump")
Appearance3021 = Appearance()
Material3022 = Material()
Material3022.setUSE("text_color")

Appearance3021.setMaterial(Material3022)

Shape3020.setAppearance(Appearance3021)
Text3023 = Text()
Text3023.setString(["Jump"])

Shape3020.setGeometry(Text3023)

Transform3018.addChildren(Shape3020)
Shape3024 = Shape()
Shape3024.setDEF("Jump_Back")
Appearance3025 = Appearance()
Material3026 = Material()
Material3026.setUSE("Clear")

Appearance3025.setMaterial(Material3026)

Shape3024.setAppearance(Appearance3025)
IndexedFaceSet3027 = IndexedFaceSet()
IndexedFaceSet3027.setUSE("Backing")

Shape3024.setGeometry(IndexedFaceSet3027)

Transform3018.addChildren(Shape3024)

Transform2956.addChildren(Transform3018)
Transform3028 = Transform()
Transform3028.setDEF("KickTransform")
Transform3028.setTranslation([21,-1,0])
TouchSensor3029 = TouchSensor()
TouchSensor3029.setDEF("Kick_Touch")
TouchSensor3029.setDescription("touch to select")

Transform3028.addChildren(TouchSensor3029)
Shape3030 = Shape()
Shape3030.setDEF("KickText")
Appearance3031 = Appearance()
Material3032 = Material()
Material3032.setUSE("text_color")

Appearance3031.setMaterial(Material3032)

Shape3030.setAppearance(Appearance3031)
Text3033 = Text()
Text3033.setString(["Kick"])

Shape3030.setGeometry(Text3033)

Transform3028.addChildren(Shape3030)
Shape3034 = Shape()
Shape3034.setDEF("Kick_Back")
Appearance3035 = Appearance()
Material3036 = Material()
Material3036.setUSE("Clear")

Appearance3035.setMaterial(Material3036)

Shape3034.setAppearance(Appearance3035)
IndexedFaceSet3037 = IndexedFaceSet()
IndexedFaceSet3037.setUSE("Backing")

Shape3034.setGeometry(IndexedFaceSet3037)

Transform3028.addChildren(Shape3034)

Transform2956.addChildren(Transform3028)
Transform3038 = Transform()
Transform3038.setDEF("Stop_Text")
Transform3038.setTranslation([0,1.4,0])
TouchSensor3039 = TouchSensor()
TouchSensor3039.setDEF("Stop_Touch")
TouchSensor3039.setDescription("touch to select")

Transform3038.addChildren(TouchSensor3039)
Shape3040 = Shape()
Shape3040.setDEF("StopText")
Appearance3041 = Appearance()
Material3042 = Material()
Material3042.setUSE("text_color")

Appearance3041.setMaterial(Material3042)

Shape3040.setAppearance(Appearance3041)
Text3043 = Text()
Text3043.setString(["Stop","Default Pose"])

Shape3040.setGeometry(Text3043)

Transform3038.addChildren(Shape3040)
Shape3044 = Shape()
Shape3044.setDEF("Stop_Back")
Appearance3045 = Appearance()
Material3046 = Material()
Material3046.setUSE("Clear")

Appearance3045.setMaterial(Material3046)

Shape3044.setAppearance(Appearance3045)
IndexedFaceSet3047 = IndexedFaceSet()
IndexedFaceSet3047.setUSE("Backing")

Shape3044.setGeometry(IndexedFaceSet3047)

Transform3038.addChildren(Shape3044)

Transform2956.addChildren(Transform3038)

Transform2955.addChildren(Transform2956)

Group2929.addChildren(Transform2955)
ROUTE3048 = ROUTE()
ROUTE3048.setFromField("position_changed")
ROUTE3048.setFromNode("HudProximitySensor")
ROUTE3048.setToField("translation")
ROUTE3048.setToNode("HudXform")

Group2929.addChildren(ROUTE3048)
ROUTE3049 = ROUTE()
ROUTE3049.setFromField("orientation_changed")
ROUTE3049.setFromNode("HudProximitySensor")
ROUTE3049.setToField("rotation")
ROUTE3049.setToNode("HudXform")

Group2929.addChildren(ROUTE3049)

Scene30.addChildren(Group2929)
Group3050 = Group()
Group3050.setDEF("BehaviorSynchronization")
ROUTE3051 = ROUTE()
ROUTE3051.setFromField("touchTime")
ROUTE3051.setFromNode("Stand_Touch")
ROUTE3051.setToField("stopTime")
ROUTE3051.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3051)
ROUTE3052 = ROUTE()
ROUTE3052.setFromField("touchTime")
ROUTE3052.setFromNode("Stand_Touch")
ROUTE3052.setToField("stopTime")
ROUTE3052.setToNode("YawTimer")

Group3050.addChildren(ROUTE3052)
ROUTE3053 = ROUTE()
ROUTE3053.setFromField("touchTime")
ROUTE3053.setFromNode("Stand_Touch")
ROUTE3053.setToField("stopTime")
ROUTE3053.setToNode("RollTimer")

Group3050.addChildren(ROUTE3053)
ROUTE3054 = ROUTE()
ROUTE3054.setFromField("touchTime")
ROUTE3054.setFromNode("Stand_Touch")
ROUTE3054.setToField("stopTime")
ROUTE3054.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3054)
ROUTE3055 = ROUTE()
ROUTE3055.setFromField("touchTime")
ROUTE3055.setFromNode("Stand_Touch")
ROUTE3055.setToField("stopTime")
ROUTE3055.setToNode("RunTimer")

Group3050.addChildren(ROUTE3055)
ROUTE3056 = ROUTE()
ROUTE3056.setFromField("touchTime")
ROUTE3056.setFromNode("Stand_Touch")
ROUTE3056.setToField("stopTime")
ROUTE3056.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3056)
ROUTE3057 = ROUTE()
ROUTE3057.setFromField("touchTime")
ROUTE3057.setFromNode("Stand_Touch")
ROUTE3057.setToField("stopTime")
ROUTE3057.setToNode("KickTimer")

Group3050.addChildren(ROUTE3057)
ROUTE3058 = ROUTE()
ROUTE3058.setFromField("touchTime")
ROUTE3058.setFromNode("Stand_Touch")
ROUTE3058.setToField("stopTime")
ROUTE3058.setToNode("StopTimer")

Group3050.addChildren(ROUTE3058)
ROUTE3059 = ROUTE()
ROUTE3059.setFromField("touchTime")
ROUTE3059.setFromNode("Stand_Touch")
ROUTE3059.setToField("startTime")
ROUTE3059.setToNode("StandTimer")

Group3050.addChildren(ROUTE3059)
ROUTE3060 = ROUTE()
ROUTE3060.setFromField("touchTime")
ROUTE3060.setFromNode("Pitch_Touch")
ROUTE3060.setToField("stopTime")
ROUTE3060.setToNode("StandTimer")

Group3050.addChildren(ROUTE3060)
ROUTE3061 = ROUTE()
ROUTE3061.setFromField("touchTime")
ROUTE3061.setFromNode("Pitch_Touch")
ROUTE3061.setToField("stopTime")
ROUTE3061.setToNode("YawTimer")

Group3050.addChildren(ROUTE3061)
ROUTE3062 = ROUTE()
ROUTE3062.setFromField("touchTime")
ROUTE3062.setFromNode("Pitch_Touch")
ROUTE3062.setToField("stopTime")
ROUTE3062.setToNode("RollTimer")

Group3050.addChildren(ROUTE3062)
ROUTE3063 = ROUTE()
ROUTE3063.setFromField("touchTime")
ROUTE3063.setFromNode("Pitch_Touch")
ROUTE3063.setToField("stopTime")
ROUTE3063.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3063)
ROUTE3064 = ROUTE()
ROUTE3064.setFromField("touchTime")
ROUTE3064.setFromNode("Pitch_Touch")
ROUTE3064.setToField("stopTime")
ROUTE3064.setToNode("RunTimer")

Group3050.addChildren(ROUTE3064)
ROUTE3065 = ROUTE()
ROUTE3065.setFromField("touchTime")
ROUTE3065.setFromNode("Pitch_Touch")
ROUTE3065.setToField("stopTime")
ROUTE3065.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3065)
ROUTE3066 = ROUTE()
ROUTE3066.setFromField("touchTime")
ROUTE3066.setFromNode("Pitch_Touch")
ROUTE3066.setToField("stopTime")
ROUTE3066.setToNode("KickTimer")

Group3050.addChildren(ROUTE3066)
ROUTE3067 = ROUTE()
ROUTE3067.setFromField("touchTime")
ROUTE3067.setFromNode("Pitch_Touch")
ROUTE3067.setToField("stopTime")
ROUTE3067.setToNode("StopTimer")

Group3050.addChildren(ROUTE3067)
ROUTE3068 = ROUTE()
ROUTE3068.setFromField("touchTime")
ROUTE3068.setFromNode("Pitch_Touch")
ROUTE3068.setToField("startTime")
ROUTE3068.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3068)
ROUTE3069 = ROUTE()
ROUTE3069.setFromField("touchTime")
ROUTE3069.setFromNode("Yaw_Touch")
ROUTE3069.setToField("stopTime")
ROUTE3069.setToNode("StandTimer")

Group3050.addChildren(ROUTE3069)
ROUTE3070 = ROUTE()
ROUTE3070.setFromField("touchTime")
ROUTE3070.setFromNode("Yaw_Touch")
ROUTE3070.setToField("stopTime")
ROUTE3070.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3070)
ROUTE3071 = ROUTE()
ROUTE3071.setFromField("touchTime")
ROUTE3071.setFromNode("Yaw_Touch")
ROUTE3071.setToField("stopTime")
ROUTE3071.setToNode("RollTimer")

Group3050.addChildren(ROUTE3071)
ROUTE3072 = ROUTE()
ROUTE3072.setFromField("touchTime")
ROUTE3072.setFromNode("Yaw_Touch")
ROUTE3072.setToField("stopTime")
ROUTE3072.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3072)
ROUTE3073 = ROUTE()
ROUTE3073.setFromField("touchTime")
ROUTE3073.setFromNode("Yaw_Touch")
ROUTE3073.setToField("stopTime")
ROUTE3073.setToNode("RunTimer")

Group3050.addChildren(ROUTE3073)
ROUTE3074 = ROUTE()
ROUTE3074.setFromField("touchTime")
ROUTE3074.setFromNode("Yaw_Touch")
ROUTE3074.setToField("stopTime")
ROUTE3074.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3074)
ROUTE3075 = ROUTE()
ROUTE3075.setFromField("touchTime")
ROUTE3075.setFromNode("Yaw_Touch")
ROUTE3075.setToField("stopTime")
ROUTE3075.setToNode("KickTimer")

Group3050.addChildren(ROUTE3075)
ROUTE3076 = ROUTE()
ROUTE3076.setFromField("touchTime")
ROUTE3076.setFromNode("Yaw_Touch")
ROUTE3076.setToField("stopTime")
ROUTE3076.setToNode("StopTimer")

Group3050.addChildren(ROUTE3076)
ROUTE3077 = ROUTE()
ROUTE3077.setFromField("touchTime")
ROUTE3077.setFromNode("Yaw_Touch")
ROUTE3077.setToField("startTime")
ROUTE3077.setToNode("YawTimer")

Group3050.addChildren(ROUTE3077)
ROUTE3078 = ROUTE()
ROUTE3078.setFromField("touchTime")
ROUTE3078.setFromNode("Walk_Touch")
ROUTE3078.setToField("stopTime")
ROUTE3078.setToNode("StandTimer")

Group3050.addChildren(ROUTE3078)
ROUTE3079 = ROUTE()
ROUTE3079.setFromField("touchTime")
ROUTE3079.setFromNode("Walk_Touch")
ROUTE3079.setToField("stopTime")
ROUTE3079.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3079)
ROUTE3080 = ROUTE()
ROUTE3080.setFromField("touchTime")
ROUTE3080.setFromNode("Walk_Touch")
ROUTE3080.setToField("stopTime")
ROUTE3080.setToNode("YawTimer")

Group3050.addChildren(ROUTE3080)
ROUTE3081 = ROUTE()
ROUTE3081.setFromField("touchTime")
ROUTE3081.setFromNode("Walk_Touch")
ROUTE3081.setToField("stopTime")
ROUTE3081.setToNode("RollTimer")

Group3050.addChildren(ROUTE3081)
ROUTE3082 = ROUTE()
ROUTE3082.setFromField("touchTime")
ROUTE3082.setFromNode("Walk_Touch")
ROUTE3082.setToField("stopTime")
ROUTE3082.setToNode("RunTimer")

Group3050.addChildren(ROUTE3082)
ROUTE3083 = ROUTE()
ROUTE3083.setFromField("touchTime")
ROUTE3083.setFromNode("Walk_Touch")
ROUTE3083.setToField("stopTime")
ROUTE3083.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3083)
ROUTE3084 = ROUTE()
ROUTE3084.setFromField("touchTime")
ROUTE3084.setFromNode("Walk_Touch")
ROUTE3084.setToField("stopTime")
ROUTE3084.setToNode("KickTimer")

Group3050.addChildren(ROUTE3084)
ROUTE3085 = ROUTE()
ROUTE3085.setFromField("touchTime")
ROUTE3085.setFromNode("Walk_Touch")
ROUTE3085.setToField("stopTime")
ROUTE3085.setToNode("StopTimer")

Group3050.addChildren(ROUTE3085)
ROUTE3086 = ROUTE()
ROUTE3086.setFromField("touchTime")
ROUTE3086.setFromNode("Walk_Touch")
ROUTE3086.setToField("startTime")
ROUTE3086.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3086)
ROUTE3087 = ROUTE()
ROUTE3087.setFromField("touchTime")
ROUTE3087.setFromNode("Roll_Touch")
ROUTE3087.setToField("stopTime")
ROUTE3087.setToNode("StandTimer")

Group3050.addChildren(ROUTE3087)
ROUTE3088 = ROUTE()
ROUTE3088.setFromField("touchTime")
ROUTE3088.setFromNode("Roll_Touch")
ROUTE3088.setToField("stopTime")
ROUTE3088.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3088)
ROUTE3089 = ROUTE()
ROUTE3089.setFromField("touchTime")
ROUTE3089.setFromNode("Roll_Touch")
ROUTE3089.setToField("stopTime")
ROUTE3089.setToNode("YawTimer")

Group3050.addChildren(ROUTE3089)
ROUTE3090 = ROUTE()
ROUTE3090.setFromField("touchTime")
ROUTE3090.setFromNode("Roll_Touch")
ROUTE3090.setToField("stopTime")
ROUTE3090.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3090)
ROUTE3091 = ROUTE()
ROUTE3091.setFromField("touchTime")
ROUTE3091.setFromNode("Roll_Touch")
ROUTE3091.setToField("stopTime")
ROUTE3091.setToNode("RunTimer")

Group3050.addChildren(ROUTE3091)
ROUTE3092 = ROUTE()
ROUTE3092.setFromField("touchTime")
ROUTE3092.setFromNode("Roll_Touch")
ROUTE3092.setToField("stopTime")
ROUTE3092.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3092)
ROUTE3093 = ROUTE()
ROUTE3093.setFromField("touchTime")
ROUTE3093.setFromNode("Roll_Touch")
ROUTE3093.setToField("stopTime")
ROUTE3093.setToNode("KickTimer")

Group3050.addChildren(ROUTE3093)
ROUTE3094 = ROUTE()
ROUTE3094.setFromField("touchTime")
ROUTE3094.setFromNode("Roll_Touch")
ROUTE3094.setToField("stopTime")
ROUTE3094.setToNode("StopTimer")

Group3050.addChildren(ROUTE3094)
ROUTE3095 = ROUTE()
ROUTE3095.setFromField("touchTime")
ROUTE3095.setFromNode("Roll_Touch")
ROUTE3095.setToField("startTime")
ROUTE3095.setToNode("RollTimer")

Group3050.addChildren(ROUTE3095)
ROUTE3096 = ROUTE()
ROUTE3096.setFromField("touchTime")
ROUTE3096.setFromNode("Run_Touch")
ROUTE3096.setToField("stopTime")
ROUTE3096.setToNode("StandTimer")

Group3050.addChildren(ROUTE3096)
ROUTE3097 = ROUTE()
ROUTE3097.setFromField("touchTime")
ROUTE3097.setFromNode("Run_Touch")
ROUTE3097.setToField("stopTime")
ROUTE3097.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3097)
ROUTE3098 = ROUTE()
ROUTE3098.setFromField("touchTime")
ROUTE3098.setFromNode("Run_Touch")
ROUTE3098.setToField("stopTime")
ROUTE3098.setToNode("YawTimer")

Group3050.addChildren(ROUTE3098)
ROUTE3099 = ROUTE()
ROUTE3099.setFromField("touchTime")
ROUTE3099.setFromNode("Run_Touch")
ROUTE3099.setToField("stopTime")
ROUTE3099.setToNode("RollTimer")

Group3050.addChildren(ROUTE3099)
ROUTE3100 = ROUTE()
ROUTE3100.setFromField("touchTime")
ROUTE3100.setFromNode("Run_Touch")
ROUTE3100.setToField("stopTime")
ROUTE3100.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3100)
ROUTE3101 = ROUTE()
ROUTE3101.setFromField("touchTime")
ROUTE3101.setFromNode("Run_Touch")
ROUTE3101.setToField("stopTime")
ROUTE3101.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3101)
ROUTE3102 = ROUTE()
ROUTE3102.setFromField("touchTime")
ROUTE3102.setFromNode("Run_Touch")
ROUTE3102.setToField("stopTime")
ROUTE3102.setToNode("KickTimer")

Group3050.addChildren(ROUTE3102)
ROUTE3103 = ROUTE()
ROUTE3103.setFromField("touchTime")
ROUTE3103.setFromNode("Run_Touch")
ROUTE3103.setToField("stopTime")
ROUTE3103.setToNode("StopTimer")

Group3050.addChildren(ROUTE3103)
ROUTE3104 = ROUTE()
ROUTE3104.setFromField("touchTime")
ROUTE3104.setFromNode("Run_Touch")
ROUTE3104.setToField("startTime")
ROUTE3104.setToNode("RunTimer")

Group3050.addChildren(ROUTE3104)
ROUTE3105 = ROUTE()
ROUTE3105.setFromField("touchTime")
ROUTE3105.setFromNode("Jump_Touch")
ROUTE3105.setToField("stopTime")
ROUTE3105.setToNode("StandTimer")

Group3050.addChildren(ROUTE3105)
ROUTE3106 = ROUTE()
ROUTE3106.setFromField("touchTime")
ROUTE3106.setFromNode("Jump_Touch")
ROUTE3106.setToField("stopTime")
ROUTE3106.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3106)
ROUTE3107 = ROUTE()
ROUTE3107.setFromField("touchTime")
ROUTE3107.setFromNode("Jump_Touch")
ROUTE3107.setToField("stopTime")
ROUTE3107.setToNode("YawTimer")

Group3050.addChildren(ROUTE3107)
ROUTE3108 = ROUTE()
ROUTE3108.setFromField("touchTime")
ROUTE3108.setFromNode("Jump_Touch")
ROUTE3108.setToField("stopTime")
ROUTE3108.setToNode("RollTimer")

Group3050.addChildren(ROUTE3108)
ROUTE3109 = ROUTE()
ROUTE3109.setFromField("touchTime")
ROUTE3109.setFromNode("Jump_Touch")
ROUTE3109.setToField("stopTime")
ROUTE3109.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3109)
ROUTE3110 = ROUTE()
ROUTE3110.setFromField("touchTime")
ROUTE3110.setFromNode("Jump_Touch")
ROUTE3110.setToField("stopTime")
ROUTE3110.setToNode("RunTimer")

Group3050.addChildren(ROUTE3110)
ROUTE3111 = ROUTE()
ROUTE3111.setFromField("touchTime")
ROUTE3111.setFromNode("Jump_Touch")
ROUTE3111.setToField("stopTime")
ROUTE3111.setToNode("KickTimer")

Group3050.addChildren(ROUTE3111)
ROUTE3112 = ROUTE()
ROUTE3112.setFromField("touchTime")
ROUTE3112.setFromNode("Jump_Touch")
ROUTE3112.setToField("stopTime")
ROUTE3112.setToNode("StopTimer")

Group3050.addChildren(ROUTE3112)
ROUTE3113 = ROUTE()
ROUTE3113.setFromField("touchTime")
ROUTE3113.setFromNode("Jump_Touch")
ROUTE3113.setToField("startTime")
ROUTE3113.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3113)
ROUTE3114 = ROUTE()
ROUTE3114.setFromField("touchTime")
ROUTE3114.setFromNode("Kick_Touch")
ROUTE3114.setToField("stopTime")
ROUTE3114.setToNode("StandTimer")

Group3050.addChildren(ROUTE3114)
ROUTE3115 = ROUTE()
ROUTE3115.setFromField("touchTime")
ROUTE3115.setFromNode("Kick_Touch")
ROUTE3115.setToField("stopTime")
ROUTE3115.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3115)
ROUTE3116 = ROUTE()
ROUTE3116.setFromField("touchTime")
ROUTE3116.setFromNode("Kick_Touch")
ROUTE3116.setToField("stopTime")
ROUTE3116.setToNode("YawTimer")

Group3050.addChildren(ROUTE3116)
ROUTE3117 = ROUTE()
ROUTE3117.setFromField("touchTime")
ROUTE3117.setFromNode("Kick_Touch")
ROUTE3117.setToField("stopTime")
ROUTE3117.setToNode("RollTimer")

Group3050.addChildren(ROUTE3117)
ROUTE3118 = ROUTE()
ROUTE3118.setFromField("touchTime")
ROUTE3118.setFromNode("Kick_Touch")
ROUTE3118.setToField("stopTime")
ROUTE3118.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3118)
ROUTE3119 = ROUTE()
ROUTE3119.setFromField("touchTime")
ROUTE3119.setFromNode("Kick_Touch")
ROUTE3119.setToField("stopTime")
ROUTE3119.setToNode("RunTimer")

Group3050.addChildren(ROUTE3119)
ROUTE3120 = ROUTE()
ROUTE3120.setFromField("touchTime")
ROUTE3120.setFromNode("Kick_Touch")
ROUTE3120.setToField("stopTime")
ROUTE3120.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3120)
ROUTE3121 = ROUTE()
ROUTE3121.setFromField("touchTime")
ROUTE3121.setFromNode("Kick_Touch")
ROUTE3121.setToField("stopTime")
ROUTE3121.setToNode("StopTimer")

Group3050.addChildren(ROUTE3121)
ROUTE3122 = ROUTE()
ROUTE3122.setFromField("touchTime")
ROUTE3122.setFromNode("Kick_Touch")
ROUTE3122.setToField("startTime")
ROUTE3122.setToNode("KickTimer")

Group3050.addChildren(ROUTE3122)
ROUTE3123 = ROUTE()
ROUTE3123.setFromField("touchTime")
ROUTE3123.setFromNode("Stop_Touch")
ROUTE3123.setToField("stopTime")
ROUTE3123.setToNode("StandTimer")

Group3050.addChildren(ROUTE3123)
ROUTE3124 = ROUTE()
ROUTE3124.setFromField("touchTime")
ROUTE3124.setFromNode("Stop_Touch")
ROUTE3124.setToField("stopTime")
ROUTE3124.setToNode("PitchTimer")

Group3050.addChildren(ROUTE3124)
ROUTE3125 = ROUTE()
ROUTE3125.setFromField("touchTime")
ROUTE3125.setFromNode("Stop_Touch")
ROUTE3125.setToField("stopTime")
ROUTE3125.setToNode("YawTimer")

Group3050.addChildren(ROUTE3125)
ROUTE3126 = ROUTE()
ROUTE3126.setFromField("touchTime")
ROUTE3126.setFromNode("Stop_Touch")
ROUTE3126.setToField("stopTime")
ROUTE3126.setToNode("RollTimer")

Group3050.addChildren(ROUTE3126)
ROUTE3127 = ROUTE()
ROUTE3127.setFromField("touchTime")
ROUTE3127.setFromNode("Stop_Touch")
ROUTE3127.setToField("stopTime")
ROUTE3127.setToNode("WalkTimer")

Group3050.addChildren(ROUTE3127)
ROUTE3128 = ROUTE()
ROUTE3128.setFromField("touchTime")
ROUTE3128.setFromNode("Stop_Touch")
ROUTE3128.setToField("stopTime")
ROUTE3128.setToNode("RunTimer")

Group3050.addChildren(ROUTE3128)
ROUTE3129 = ROUTE()
ROUTE3129.setFromField("touchTime")
ROUTE3129.setFromNode("Stop_Touch")
ROUTE3129.setToField("stopTime")
ROUTE3129.setToNode("JumpTimer")

Group3050.addChildren(ROUTE3129)
ROUTE3130 = ROUTE()
ROUTE3130.setFromField("touchTime")
ROUTE3130.setFromNode("Stop_Touch")
ROUTE3130.setToField("stopTime")
ROUTE3130.setToNode("KickTimer")

Group3050.addChildren(ROUTE3130)
ROUTE3131 = ROUTE()
ROUTE3131.setFromField("touchTime")
ROUTE3131.setFromNode("Stop_Touch")
ROUTE3131.setToField("startTime")
ROUTE3131.setToNode("StopTimer")

Group3050.addChildren(ROUTE3131)

Scene30.addChildren(Group3050)

X3D0.setScene(Scene30)
X3D0.toFileX3D("../data/HAnim1SpecificationLOA3Animation_RoundTrip.x3d")

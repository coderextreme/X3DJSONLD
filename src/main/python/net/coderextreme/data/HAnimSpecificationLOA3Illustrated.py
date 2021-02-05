import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
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
meta6.setName("created")
meta6.setContent("24 April 2013")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("4 July 2020")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("TODO")
meta8.setContent("Convert to X3D4 HAnim2")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("Image")
meta10.setContent("HAnimSpecificationLOA3Illustrated.png")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("Image")
meta11.setContent("HAnimSpecificationLOA3IllustratedLeftSide.png")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("HAnimSpecificationLOA3Invisible.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("HAnimSpecificationLOA3Motion.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("Image")
meta15.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("Image")
meta16.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("Image")
meta17.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("TODO")
meta18.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("warning")
meta19.setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("TODO")
meta20.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("reference")
meta21.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("reference")
meta22.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

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
meta26.setName("reference")
meta26.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("reference")
meta27.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("reference")
meta28.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("reference")
meta29.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("generator")
meta30.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("identifier")
meta31.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Illustrated.x3d")

head1.addMeta(meta31)
meta32 = x3d.meta()
meta32.setName("license")
meta32.setContent("../license.html")

head1.addMeta(meta32)

X3D0.setHead(head1)
Scene33 = x3d.Scene()
Background34 = x3d.Background()
Background34.setSkyColor([0.3,0.3,0.3])

Scene33.addChildren(Background34)
NavigationInfo35 = x3d.NavigationInfo()

Scene33.addChildren(NavigationInfo35)
Group36 = x3d.Group()
Group36.setDEF("Original_WorldInfo")
WorldInfo37 = x3d.WorldInfo()
WorldInfo37.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo37.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group36.addChildren(WorldInfo37)

Scene33.addChildren(Group36)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Front")
Viewpoint38.setPosition([0,0.4,4])

Scene33.addChildren(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Front Close")
Viewpoint39.setPosition([0,0.8,2])

Scene33.addChildren(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint40.setPosition([0,1.2,1])

Scene33.addChildren(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setCenterOfRotation([0,1.5,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Front Face")
Viewpoint41.setPosition([0,1.63,1])

Scene33.addChildren(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Right Side")
Viewpoint42.setOrientation([0,1,0,1.5708])
Viewpoint42.setPosition([2.6,0.8,0])

Scene33.addChildren(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint43.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint43.setOrientation([0,1,0,1.2])
Viewpoint43.setPosition([1,0.8,0.5])

Scene33.addChildren(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint44.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint44.setOrientation([0,1,0,-1.2])
Viewpoint44.setPosition([-1,0.8,0.5])

Scene33.addChildren(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint45.setDescription("Humanoid LOA 3 Left Side")
Viewpoint45.setOrientation([0,1,0,-1.5708])
Viewpoint45.setPosition([-2.6,0.8,0])

Scene33.addChildren(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint46.setDescription("Humanoid LOA 3 Top")
Viewpoint46.setOrientation([1,0,0,-1.5708])
Viewpoint46.setPosition([0,3.5,0])

Scene33.addChildren(Viewpoint46)
HAnimHumanoid47 = x3d.HAnimHumanoid()
HAnimHumanoid47.setName("humanoid")
HAnimHumanoid47.setDEF("hanim_humanoid")
HAnimHumanoid47.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"])
HAnimHumanoid47.setVersion("1.0")
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setName("humanoid_root")
HAnimJoint48.setDEF("hanim_humanoid_root")
HAnimJoint48.setCenter([0,0.824,0.0277])
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.setName("sacrum")
HAnimSegment49.setDEF("hanim_sacrum")
#<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
TouchSensor50 = x3d.TouchSensor()
TouchSensor50.setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum")

HAnimSegment49.addChildren(TouchSensor50)
Transform51 = x3d.Transform()
Transform51.setTranslation([0,0.824,0.0277])
Shape52 = x3d.Shape()
Shape52.setDEF("HAnimJointShape")
Sphere53 = x3d.Sphere()
Sphere53.setRadius(0.006)

Shape52.setGeometry(Sphere53)
Appearance54 = x3d.Appearance()
Appearance54.setDEF("HAnimJointAppearance")
Material55 = x3d.Material()
Material55.setDiffuseColor([1,0.5,0])
Material55.setTransparency(0.5)

Appearance54.setMaterial(Material55)

Shape52.setAppearance(Appearance54)

Transform51.addChildren(Shape52)

HAnimSegment49.addChildren(Transform51)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.setVertexCount([2])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet57.setCoord(Coordinate58)
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA59.setColor([1,1,0,1,1,1,0,0.1])

LineSet57.setColor(ColorRGBA59)

Shape56.setGeometry(LineSet57)

HAnimSegment49.addChildren(Shape56)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape60 = x3d.Shape()
LineSet61 = x3d.LineSet()
LineSet61.setVertexCount([2])
Coordinate62 = x3d.Coordinate()
Coordinate62.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet61.setCoord(Coordinate62)
ColorRGBA63 = x3d.ColorRGBA()
ColorRGBA63.setUSE("HAnimSegmentLineColorRGBA")

LineSet61.setColor(ColorRGBA63)

Shape60.setGeometry(LineSet61)

HAnimSegment49.addChildren(Shape60)

HAnimJoint48.addChildren(HAnimSegment49)
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.setName("sacroiliac")
HAnimJoint64.setDEF("hanim_sacroiliac")
HAnimJoint64.setCenter([0,0.9149,0.0016])
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.setName("pelvis")
HAnimSegment65.setDEF("hanim_pelvis")
#<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
TouchSensor66 = x3d.TouchSensor()
TouchSensor66.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment65.addChildren(TouchSensor66)
Transform67 = x3d.Transform()
Transform67.setTranslation([0,0.9149,0.0016])
Shape68 = x3d.Shape()
Shape68.setUSE("HAnimJointShape")

Transform67.addChildren(Shape68)

HAnimSegment65.addChildren(Transform67)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape69 = x3d.Shape()
LineSet70 = x3d.LineSet()
LineSet70.setVertexCount([2])
Coordinate71 = x3d.Coordinate()
Coordinate71.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet70.setCoord(Coordinate71)
ColorRGBA72 = x3d.ColorRGBA()
ColorRGBA72.setUSE("HAnimSegmentLineColorRGBA")

LineSet70.setColor(ColorRGBA72)

Shape69.setGeometry(LineSet70)

HAnimSegment65.addChildren(Shape69)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape73 = x3d.Shape()
LineSet74 = x3d.LineSet()
LineSet74.setVertexCount([2])
Coordinate75 = x3d.Coordinate()
Coordinate75.setPoint([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])

LineSet74.setCoord(Coordinate75)
ColorRGBA76 = x3d.ColorRGBA()
ColorRGBA76.setUSE("HAnimSegmentLineColorRGBA")

LineSet74.setColor(ColorRGBA76)

Shape73.setGeometry(LineSet74)

HAnimSegment65.addChildren(Shape73)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape77 = x3d.Shape()
LineSet78 = x3d.LineSet()
LineSet78.setVertexCount([2])
Coordinate79 = x3d.Coordinate()
Coordinate79.setPoint([0,0.9149,0.0016,-0.1525,1.0628,0.0035])

LineSet78.setCoord(Coordinate79)
ColorRGBA80 = x3d.ColorRGBA()
ColorRGBA80.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA80.setColor([1,0,0,1,1,0,0,0.1])

LineSet78.setColor(ColorRGBA80)

Shape77.setGeometry(LineSet78)

HAnimSegment65.addChildren(Shape77)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape81 = x3d.Shape()
LineSet82 = x3d.LineSet()
LineSet82.setVertexCount([2])
Coordinate83 = x3d.Coordinate()
Coordinate83.setPoint([0,0.9149,0.0016,-0.1689,0.8419,0.0352])

LineSet82.setCoord(Coordinate83)
ColorRGBA84 = x3d.ColorRGBA()
ColorRGBA84.setUSE("HAnimSiteLineColorRGBA")

LineSet82.setColor(ColorRGBA84)

Shape81.setGeometry(LineSet82)

HAnimSegment65.addChildren(Shape81)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape85 = x3d.Shape()
LineSet86 = x3d.LineSet()
LineSet86.setVertexCount([2])
Coordinate87 = x3d.Coordinate()
Coordinate87.setPoint([0,0.9149,0.0016,0.1612,1.0537,0.0008])

LineSet86.setCoord(Coordinate87)
ColorRGBA88 = x3d.ColorRGBA()
ColorRGBA88.setUSE("HAnimSiteLineColorRGBA")

LineSet86.setColor(ColorRGBA88)

Shape85.setGeometry(LineSet86)

HAnimSegment65.addChildren(Shape85)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape89 = x3d.Shape()
LineSet90 = x3d.LineSet()
LineSet90.setVertexCount([2])
Coordinate91 = x3d.Coordinate()
Coordinate91.setPoint([0,0.9149,0.0016,0.1677,0.8336,0.0303])

LineSet90.setCoord(Coordinate91)
ColorRGBA92 = x3d.ColorRGBA()
ColorRGBA92.setUSE("HAnimSiteLineColorRGBA")

LineSet90.setColor(ColorRGBA92)

Shape89.setGeometry(LineSet90)

HAnimSegment65.addChildren(Shape89)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape93 = x3d.Shape()
LineSet94 = x3d.LineSet()
LineSet94.setVertexCount([2])
Coordinate95 = x3d.Coordinate()
Coordinate95.setPoint([0,0.9149,0.0016,-0.0887,1.0021,0.1112])

LineSet94.setCoord(Coordinate95)
ColorRGBA96 = x3d.ColorRGBA()
ColorRGBA96.setUSE("HAnimSiteLineColorRGBA")

LineSet94.setColor(ColorRGBA96)

Shape93.setGeometry(LineSet94)

HAnimSegment65.addChildren(Shape93)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape97 = x3d.Shape()
LineSet98 = x3d.LineSet()
LineSet98.setVertexCount([2])
Coordinate99 = x3d.Coordinate()
Coordinate99.setPoint([0,0.9149,0.0016,0.0925,0.9983,0.1052])

LineSet98.setCoord(Coordinate99)
ColorRGBA100 = x3d.ColorRGBA()
ColorRGBA100.setUSE("HAnimSiteLineColorRGBA")

LineSet98.setColor(ColorRGBA100)

Shape97.setGeometry(LineSet98)

HAnimSegment65.addChildren(Shape97)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape101 = x3d.Shape()
LineSet102 = x3d.LineSet()
LineSet102.setVertexCount([2])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint([0,0.9149,0.0016,-0.0716,1.019,-0.1138])

LineSet102.setCoord(Coordinate103)
ColorRGBA104 = x3d.ColorRGBA()
ColorRGBA104.setUSE("HAnimSiteLineColorRGBA")

LineSet102.setColor(ColorRGBA104)

Shape101.setGeometry(LineSet102)

HAnimSegment65.addChildren(Shape101)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape105 = x3d.Shape()
LineSet106 = x3d.LineSet()
LineSet106.setVertexCount([2])
Coordinate107 = x3d.Coordinate()
Coordinate107.setPoint([0,0.9149,0.0016,0.0774,1.019,-0.1151])

LineSet106.setCoord(Coordinate107)
ColorRGBA108 = x3d.ColorRGBA()
ColorRGBA108.setUSE("HAnimSiteLineColorRGBA")

LineSet106.setColor(ColorRGBA108)

Shape105.setGeometry(LineSet106)

HAnimSegment65.addChildren(Shape105)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape109 = x3d.Shape()
LineSet110 = x3d.LineSet()
LineSet110.setVertexCount([2])
Coordinate111 = x3d.Coordinate()
Coordinate111.setPoint([0,0.9149,0.0016,0.0034,0.8266,0.0257])

LineSet110.setCoord(Coordinate111)
ColorRGBA112 = x3d.ColorRGBA()
ColorRGBA112.setUSE("HAnimSiteLineColorRGBA")

LineSet110.setColor(ColorRGBA112)

Shape109.setGeometry(LineSet110)

HAnimSegment65.addChildren(Shape109)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("r_iliocristale_pt")
HAnimSite113.setDEF("hanim_r_iliocristale_pt")
HAnimSite113.setTranslation([-0.1525,1.0628,0.0035])
#HAnimSite visualization shape
TouchSensor114 = x3d.TouchSensor()
TouchSensor114.setDescription("HAnimSite r_iliocristale")

HAnimSite113.addChildren(TouchSensor114)
Shape115 = x3d.Shape()
Shape115.setDEF("HAnimSiteShape")
IndexedFaceSet116 = x3d.IndexedFaceSet()
IndexedFaceSet116.setDEF("DiamondIFS")
IndexedFaceSet116.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet116.setCreaseAngle(0.5)
IndexedFaceSet116.setSolid(False)
Coordinate117 = x3d.Coordinate()
Coordinate117.setPoint([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])

IndexedFaceSet116.setCoord(Coordinate117)

Shape115.setGeometry(IndexedFaceSet116)
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.setDiffuseColor([1,0,0])

Appearance118.setMaterial(Material119)

Shape115.setAppearance(Appearance118)

HAnimSite113.addChildren(Shape115)

HAnimSegment65.addChildren(HAnimSite113)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.setName("r_trochanterion_pt")
HAnimSite120.setDEF("hanim_r_trochanterion_pt")
HAnimSite120.setTranslation([-0.1689,0.8419,0.0352])
#HAnimSite visualization shape
TouchSensor121 = x3d.TouchSensor()
TouchSensor121.setDescription("HAnimSite r_trochanterion")

HAnimSite120.addChildren(TouchSensor121)
Shape122 = x3d.Shape()
Shape122.setUSE("HAnimSiteShape")

HAnimSite120.addChildren(Shape122)

HAnimSegment65.addChildren(HAnimSite120)
HAnimSite123 = x3d.HAnimSite()
HAnimSite123.setName("l_iliocristale_pt")
HAnimSite123.setDEF("hanim_l_iliocristale_pt")
HAnimSite123.setTranslation([0.1612,1.0537,0.0008])
#HAnimSite visualization shape
TouchSensor124 = x3d.TouchSensor()
TouchSensor124.setDescription("HAnimSite l_iliocristale")

HAnimSite123.addChildren(TouchSensor124)
Shape125 = x3d.Shape()
Shape125.setUSE("HAnimSiteShape")

HAnimSite123.addChildren(Shape125)

HAnimSegment65.addChildren(HAnimSite123)
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.setName("l_trochanterion_pt")
HAnimSite126.setDEF("hanim_l_trochanterion_pt")
HAnimSite126.setTranslation([0.1677,0.8336,0.0303])
#HAnimSite visualization shape
TouchSensor127 = x3d.TouchSensor()
TouchSensor127.setDescription("HAnimSite l_trochanterion")

HAnimSite126.addChildren(TouchSensor127)
Shape128 = x3d.Shape()
Shape128.setUSE("HAnimSiteShape")

HAnimSite126.addChildren(Shape128)

HAnimSegment65.addChildren(HAnimSite126)
HAnimSite129 = x3d.HAnimSite()
HAnimSite129.setName("r_asis_pt")
HAnimSite129.setDEF("hanim_r_asis_pt")
HAnimSite129.setTranslation([-0.0887,1.0021,0.1112])
#HAnimSite visualization shape
TouchSensor130 = x3d.TouchSensor()
TouchSensor130.setDescription("HAnimSite r_asis")

HAnimSite129.addChildren(TouchSensor130)
Shape131 = x3d.Shape()
Shape131.setUSE("HAnimSiteShape")

HAnimSite129.addChildren(Shape131)

HAnimSegment65.addChildren(HAnimSite129)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("l_asis_pt")
HAnimSite132.setDEF("hanim_l_asis_pt")
HAnimSite132.setTranslation([0.0925,0.9983,0.1052])
#HAnimSite visualization shape
TouchSensor133 = x3d.TouchSensor()
TouchSensor133.setDescription("HAnimSite l_asis")

HAnimSite132.addChildren(TouchSensor133)
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimSiteShape")

HAnimSite132.addChildren(Shape134)

HAnimSegment65.addChildren(HAnimSite132)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.setName("r_psis_pt")
HAnimSite135.setDEF("hanim_r_psis_pt")
HAnimSite135.setTranslation([-0.0716,1.019,-0.1138])
#HAnimSite visualization shape
TouchSensor136 = x3d.TouchSensor()
TouchSensor136.setDescription("HAnimSite r_psis")

HAnimSite135.addChildren(TouchSensor136)
Shape137 = x3d.Shape()
Shape137.setUSE("HAnimSiteShape")

HAnimSite135.addChildren(Shape137)

HAnimSegment65.addChildren(HAnimSite135)
HAnimSite138 = x3d.HAnimSite()
HAnimSite138.setName("l_psis_pt")
HAnimSite138.setDEF("hanim_l_psis_pt")
HAnimSite138.setTranslation([0.0774,1.019,-0.1151])
#HAnimSite visualization shape
TouchSensor139 = x3d.TouchSensor()
TouchSensor139.setDescription("HAnimSite l_psis")

HAnimSite138.addChildren(TouchSensor139)
Shape140 = x3d.Shape()
Shape140.setUSE("HAnimSiteShape")

HAnimSite138.addChildren(Shape140)

HAnimSegment65.addChildren(HAnimSite138)
HAnimSite141 = x3d.HAnimSite()
HAnimSite141.setName("crotch_pt")
HAnimSite141.setDEF("hanim_crotch_pt")
HAnimSite141.setTranslation([0.0034,0.8266,0.0257])
#HAnimSite visualization shape
TouchSensor142 = x3d.TouchSensor()
TouchSensor142.setDescription("HAnimSite crotch")

HAnimSite141.addChildren(TouchSensor142)
Shape143 = x3d.Shape()
Shape143.setUSE("HAnimSiteShape")

HAnimSite141.addChildren(Shape143)

HAnimSegment65.addChildren(HAnimSite141)

HAnimJoint64.addChildren(HAnimSegment65)
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.setName("l_hip")
HAnimJoint144.setDEF("hanim_l_hip")
HAnimJoint144.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment145 = x3d.HAnimSegment()
HAnimSegment145.setName("l_thigh")
HAnimSegment145.setDEF("hanim_l_thigh")
#<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
TouchSensor146 = x3d.TouchSensor()
TouchSensor146.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment145.addChildren(TouchSensor146)
Transform147 = x3d.Transform()
Transform147.setTranslation([0.0961,0.9124,-0.0001])
Shape148 = x3d.Shape()
Shape148.setUSE("HAnimJointShape")

Transform147.addChildren(Shape148)

HAnimSegment145.addChildren(Transform147)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape149 = x3d.Shape()
LineSet150 = x3d.LineSet()
LineSet150.setVertexCount([2])
Coordinate151 = x3d.Coordinate()
Coordinate151.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet150.setCoord(Coordinate151)
ColorRGBA152 = x3d.ColorRGBA()
ColorRGBA152.setUSE("HAnimSegmentLineColorRGBA")

LineSet150.setColor(ColorRGBA152)

Shape149.setGeometry(LineSet150)

HAnimSegment145.addChildren(Shape149)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape153 = x3d.Shape()
LineSet154 = x3d.LineSet()
LineSet154.setVertexCount([2])
Coordinate155 = x3d.Coordinate()
Coordinate155.setPoint([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])

LineSet154.setCoord(Coordinate155)
ColorRGBA156 = x3d.ColorRGBA()
ColorRGBA156.setUSE("HAnimSiteLineColorRGBA")

LineSet154.setColor(ColorRGBA156)

Shape153.setGeometry(LineSet154)

HAnimSegment145.addChildren(Shape153)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape157 = x3d.Shape()
LineSet158 = x3d.LineSet()
LineSet158.setVertexCount([2])
Coordinate159 = x3d.Coordinate()
Coordinate159.setPoint([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])

LineSet158.setCoord(Coordinate159)
ColorRGBA160 = x3d.ColorRGBA()
ColorRGBA160.setUSE("HAnimSiteLineColorRGBA")

LineSet158.setColor(ColorRGBA160)

Shape157.setGeometry(LineSet158)

HAnimSegment145.addChildren(Shape157)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape161 = x3d.Shape()
LineSet162 = x3d.LineSet()
LineSet162.setVertexCount([2])
Coordinate163 = x3d.Coordinate()
Coordinate163.setPoint([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])

LineSet162.setCoord(Coordinate163)
ColorRGBA164 = x3d.ColorRGBA()
ColorRGBA164.setUSE("HAnimSiteLineColorRGBA")

LineSet162.setColor(ColorRGBA164)

Shape161.setGeometry(LineSet162)

HAnimSegment145.addChildren(Shape161)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.setName("l_knee_crease_pt")
HAnimSite165.setDEF("hanim_l_knee_crease_pt")
HAnimSite165.setTranslation([0.0993,0.4881,-0.0309])
#HAnimSite visualization shape
TouchSensor166 = x3d.TouchSensor()
TouchSensor166.setDescription("HAnimSite l_knee_crease")

HAnimSite165.addChildren(TouchSensor166)
Shape167 = x3d.Shape()
Shape167.setUSE("HAnimSiteShape")

HAnimSite165.addChildren(Shape167)

HAnimSegment145.addChildren(HAnimSite165)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("l_femoral_lateral_epicn_pt")
HAnimSite168.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite168.setTranslation([0.1598,0.4967,0.0297])
#HAnimSite visualization shape
TouchSensor169 = x3d.TouchSensor()
TouchSensor169.setDescription("HAnimSite l_femoral_lateral_epicn")

HAnimSite168.addChildren(TouchSensor169)
Shape170 = x3d.Shape()
Shape170.setUSE("HAnimSiteShape")

HAnimSite168.addChildren(Shape170)

HAnimSegment145.addChildren(HAnimSite168)
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.setName("l_femoral_medial_epicn_pt")
HAnimSite171.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite171.setTranslation([0.0398,0.4946,0.0303])
#HAnimSite visualization shape
TouchSensor172 = x3d.TouchSensor()
TouchSensor172.setDescription("HAnimSite l_femoral_medial_epicn")

HAnimSite171.addChildren(TouchSensor172)
Shape173 = x3d.Shape()
Shape173.setUSE("HAnimSiteShape")

HAnimSite171.addChildren(Shape173)

HAnimSegment145.addChildren(HAnimSite171)

HAnimJoint144.addChildren(HAnimSegment145)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setName("l_knee")
HAnimJoint174.setDEF("hanim_l_knee")
HAnimJoint174.setCenter([0.104,0.4867,0.0308])
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.setName("l_calf")
HAnimSegment175.setDEF("hanim_l_calf")
#<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
TouchSensor176 = x3d.TouchSensor()
TouchSensor176.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment175.addChildren(TouchSensor176)
Transform177 = x3d.Transform()
Transform177.setTranslation([0.104,0.4867,0.0308])
Shape178 = x3d.Shape()
Shape178.setUSE("HAnimJointShape")

Transform177.addChildren(Shape178)

HAnimSegment175.addChildren(Transform177)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape179 = x3d.Shape()
LineSet180 = x3d.LineSet()
LineSet180.setVertexCount([2])
Coordinate181 = x3d.Coordinate()
Coordinate181.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet180.setCoord(Coordinate181)
ColorRGBA182 = x3d.ColorRGBA()
ColorRGBA182.setUSE("HAnimSegmentLineColorRGBA")

LineSet180.setColor(ColorRGBA182)

Shape179.setGeometry(LineSet180)

HAnimSegment175.addChildren(Shape179)

HAnimJoint174.addChildren(HAnimSegment175)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setName("l_ankle")
HAnimJoint183.setDEF("hanim_l_ankle")
HAnimJoint183.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.setName("l_hindfoot")
HAnimSegment184.setDEF("hanim_l_hindfoot")
#<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
TouchSensor185 = x3d.TouchSensor()
TouchSensor185.setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot")

HAnimSegment184.addChildren(TouchSensor185)
Transform186 = x3d.Transform()
Transform186.setTranslation([0.1101,0.0656,-0.0736])
Shape187 = x3d.Shape()
Shape187.setUSE("HAnimJointShape")

Transform186.addChildren(Shape187)

HAnimSegment184.addChildren(Transform186)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape188 = x3d.Shape()
LineSet189 = x3d.LineSet()
LineSet189.setVertexCount([2])
Coordinate190 = x3d.Coordinate()
Coordinate190.setPoint([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])

LineSet189.setCoord(Coordinate190)
ColorRGBA191 = x3d.ColorRGBA()
ColorRGBA191.setUSE("HAnimSegmentLineColorRGBA")

LineSet189.setColor(ColorRGBA191)

Shape188.setGeometry(LineSet189)

HAnimSegment184.addChildren(Shape188)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.setVertexCount([2])
Coordinate194 = x3d.Coordinate()
Coordinate194.setPoint([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])

LineSet193.setCoord(Coordinate194)
ColorRGBA195 = x3d.ColorRGBA()
ColorRGBA195.setUSE("HAnimSiteLineColorRGBA")

LineSet193.setColor(ColorRGBA195)

Shape192.setGeometry(LineSet193)

HAnimSegment184.addChildren(Shape192)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape196 = x3d.Shape()
LineSet197 = x3d.LineSet()
LineSet197.setVertexCount([2])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])

LineSet197.setCoord(Coordinate198)
ColorRGBA199 = x3d.ColorRGBA()
ColorRGBA199.setUSE("HAnimSiteLineColorRGBA")

LineSet197.setColor(ColorRGBA199)

Shape196.setGeometry(LineSet197)

HAnimSegment184.addChildren(Shape196)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape200 = x3d.Shape()
LineSet201 = x3d.LineSet()
LineSet201.setVertexCount([2])
Coordinate202 = x3d.Coordinate()
Coordinate202.setPoint([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])

LineSet201.setCoord(Coordinate202)
ColorRGBA203 = x3d.ColorRGBA()
ColorRGBA203.setUSE("HAnimSiteLineColorRGBA")

LineSet201.setColor(ColorRGBA203)

Shape200.setGeometry(LineSet201)

HAnimSegment184.addChildren(Shape200)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape204 = x3d.Shape()
LineSet205 = x3d.LineSet()
LineSet205.setVertexCount([2])
Coordinate206 = x3d.Coordinate()
Coordinate206.setPoint([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])

LineSet205.setCoord(Coordinate206)
ColorRGBA207 = x3d.ColorRGBA()
ColorRGBA207.setUSE("HAnimSiteLineColorRGBA")

LineSet205.setColor(ColorRGBA207)

Shape204.setGeometry(LineSet205)

HAnimSegment184.addChildren(Shape204)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.setName("l_lateral_malleolus_pt")
HAnimSite208.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite208.setTranslation([0.1308,0.0597,-0.1032])
#HAnimSite visualization shape
TouchSensor209 = x3d.TouchSensor()
TouchSensor209.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite208.addChildren(TouchSensor209)
Shape210 = x3d.Shape()
Shape210.setUSE("HAnimSiteShape")

HAnimSite208.addChildren(Shape210)

HAnimSegment184.addChildren(HAnimSite208)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.setName("l_medial_malleolus_pt")
HAnimSite211.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite211.setTranslation([0.089,0.0716,-0.0881])
#HAnimSite visualization shape
TouchSensor212 = x3d.TouchSensor()
TouchSensor212.setDescription("HAnimSite l_medial_malleolus")

HAnimSite211.addChildren(TouchSensor212)
Shape213 = x3d.Shape()
Shape213.setUSE("HAnimSiteShape")

HAnimSite211.addChildren(Shape213)

HAnimSegment184.addChildren(HAnimSite211)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.setName("l_sphyrion_pt")
HAnimSite214.setDEF("hanim_l_sphyrion_pt")
HAnimSite214.setTranslation([0.089,0.0575,-0.0943])
#HAnimSite visualization shape
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.setDescription("HAnimSite l_sphyrion")

HAnimSite214.addChildren(TouchSensor215)
Shape216 = x3d.Shape()
Shape216.setUSE("HAnimSiteShape")

HAnimSite214.addChildren(Shape216)

HAnimSegment184.addChildren(HAnimSite214)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setName("l_calcaneous_post_pt")
HAnimSite217.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite217.setTranslation([0.0974,0.0259,-0.1171])
#HAnimSite visualization shape
TouchSensor218 = x3d.TouchSensor()
TouchSensor218.setDescription("HAnimSite l_calcaneous_post")

HAnimSite217.addChildren(TouchSensor218)
Shape219 = x3d.Shape()
Shape219.setUSE("HAnimSiteShape")

HAnimSite217.addChildren(Shape219)

HAnimSegment184.addChildren(HAnimSite217)

HAnimJoint183.addChildren(HAnimSegment184)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.setName("l_subtalar")
HAnimJoint220.setDEF("hanim_l_subtalar")
HAnimJoint220.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment221 = x3d.HAnimSegment()
HAnimSegment221.setName("l_midproximal")
HAnimSegment221.setDEF("hanim_l_midproximal")
#<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
TouchSensor222 = x3d.TouchSensor()
TouchSensor222.setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal")

HAnimSegment221.addChildren(TouchSensor222)
Transform223 = x3d.Transform()
Transform223.setTranslation([0.1086,0.0001,-0.0368])
Shape224 = x3d.Shape()
Shape224.setUSE("HAnimJointShape")

Transform223.addChildren(Shape224)

HAnimSegment221.addChildren(Transform223)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape225 = x3d.Shape()
LineSet226 = x3d.LineSet()
LineSet226.setVertexCount([2])
Coordinate227 = x3d.Coordinate()
Coordinate227.setPoint([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])

LineSet226.setCoord(Coordinate227)
ColorRGBA228 = x3d.ColorRGBA()
ColorRGBA228.setUSE("HAnimSegmentLineColorRGBA")

LineSet226.setColor(ColorRGBA228)

Shape225.setGeometry(LineSet226)

HAnimSegment221.addChildren(Shape225)

HAnimJoint220.addChildren(HAnimSegment221)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setName("l_midtarsal")
HAnimJoint229.setDEF("hanim_l_midtarsal")
HAnimJoint229.setCenter([0.1086,0.0001,0.0368])
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.setName("l_middistal")
HAnimSegment230.setDEF("hanim_l_middistal")
#<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
TouchSensor231 = x3d.TouchSensor()
TouchSensor231.setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal")

HAnimSegment230.addChildren(TouchSensor231)
Transform232 = x3d.Transform()
Transform232.setTranslation([0.1086,0.0001,0.0368])
Shape233 = x3d.Shape()
Shape233.setUSE("HAnimJointShape")

Transform232.addChildren(Shape233)

HAnimSegment230.addChildren(Transform232)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape234 = x3d.Shape()
LineSet235 = x3d.LineSet()
LineSet235.setVertexCount([2])
Coordinate236 = x3d.Coordinate()
Coordinate236.setPoint([0.1086,0.0001,0.0368,0.1086,0,0.0762])

LineSet235.setCoord(Coordinate236)
ColorRGBA237 = x3d.ColorRGBA()
ColorRGBA237.setUSE("HAnimSegmentLineColorRGBA")

LineSet235.setColor(ColorRGBA237)

Shape234.setGeometry(LineSet235)

HAnimSegment230.addChildren(Shape234)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape238 = x3d.Shape()
LineSet239 = x3d.LineSet()
LineSet239.setVertexCount([2])
Coordinate240 = x3d.Coordinate()
Coordinate240.setPoint([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])

LineSet239.setCoord(Coordinate240)
ColorRGBA241 = x3d.ColorRGBA()
ColorRGBA241.setUSE("HAnimSiteLineColorRGBA")

LineSet239.setColor(ColorRGBA241)

Shape238.setGeometry(LineSet239)

HAnimSegment230.addChildren(Shape238)
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.setName("l_metatarsal_pha1_pt")
HAnimSite242.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite242.setTranslation([0.0816,0.0232,0.0106])
#HAnimSite visualization shape
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.setDescription("HAnimSite l_metatarsal_pha1")

HAnimSite242.addChildren(TouchSensor243)
Shape244 = x3d.Shape()
Shape244.setUSE("HAnimSiteShape")

HAnimSite242.addChildren(Shape244)

HAnimSegment230.addChildren(HAnimSite242)

HAnimJoint229.addChildren(HAnimSegment230)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.setName("l_metatarsal")
HAnimJoint245.setDEF("hanim_l_metatarsal")
HAnimJoint245.setCenter([0.1086,0,0.0762])
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.setName("l_forefoot")
HAnimSegment246.setDEF("hanim_l_forefoot")
#<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
TouchSensor247 = x3d.TouchSensor()
TouchSensor247.setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")

HAnimSegment246.addChildren(TouchSensor247)
Transform248 = x3d.Transform()
Transform248.setTranslation([0.1086,0,0.0762])
Shape249 = x3d.Shape()
Shape249.setUSE("HAnimJointShape")

Transform248.addChildren(Shape249)

HAnimSegment246.addChildren(Transform248)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape250 = x3d.Shape()
LineSet251 = x3d.LineSet()
LineSet251.setVertexCount([2])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint([0.1086,0,0.0762,0.1354,0.0016,0.1476])

LineSet251.setCoord(Coordinate252)
ColorRGBA253 = x3d.ColorRGBA()
ColorRGBA253.setUSE("HAnimSiteLineColorRGBA")

LineSet251.setColor(ColorRGBA253)

Shape250.setGeometry(LineSet251)

HAnimSegment246.addChildren(Shape250)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.setVertexCount([2])
Coordinate256 = x3d.Coordinate()
Coordinate256.setPoint([0.1086,0,0.0762,0.1825,0.007,0.0928])

LineSet255.setCoord(Coordinate256)
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.setUSE("HAnimSiteLineColorRGBA")

LineSet255.setColor(ColorRGBA257)

Shape254.setGeometry(LineSet255)

HAnimSegment246.addChildren(Shape254)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape258 = x3d.Shape()
LineSet259 = x3d.LineSet()
LineSet259.setVertexCount([2])
Coordinate260 = x3d.Coordinate()
Coordinate260.setPoint([0.1086,0,0.0762,0.1195,0.0079,0.1433])

LineSet259.setCoord(Coordinate260)
ColorRGBA261 = x3d.ColorRGBA()
ColorRGBA261.setUSE("HAnimSiteLineColorRGBA")

LineSet259.setColor(ColorRGBA261)

Shape258.setGeometry(LineSet259)

HAnimSegment246.addChildren(Shape258)
HAnimSite262 = x3d.HAnimSite()
HAnimSite262.setName("l_forefoot_tip")
HAnimSite262.setDEF("hanim_l_forefoot_tip")
HAnimSite262.setTranslation([0.1354,0.0016,0.1476])
#HAnimSite visualization shape
TouchSensor263 = x3d.TouchSensor()
TouchSensor263.setDescription("HAnimSite l_forefoot_tip")

HAnimSite262.addChildren(TouchSensor263)
Shape264 = x3d.Shape()
Shape264.setUSE("HAnimSiteShape")

HAnimSite262.addChildren(Shape264)

HAnimSegment246.addChildren(HAnimSite262)
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.setName("l_metatarsal_pha5_pt")
HAnimSite265.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite265.setTranslation([0.1825,0.007,0.0928])
#HAnimSite visualization shape
TouchSensor266 = x3d.TouchSensor()
TouchSensor266.setDescription("HAnimSite l_metatarsal_pha5")

HAnimSite265.addChildren(TouchSensor266)
Shape267 = x3d.Shape()
Shape267.setUSE("HAnimSiteShape")

HAnimSite265.addChildren(Shape267)

HAnimSegment246.addChildren(HAnimSite265)
HAnimSite268 = x3d.HAnimSite()
HAnimSite268.setName("l_digit2_pt")
HAnimSite268.setDEF("hanim_l_digit2_pt")
HAnimSite268.setTranslation([0.1195,0.0079,0.1433])
#HAnimSite visualization shape
TouchSensor269 = x3d.TouchSensor()
TouchSensor269.setDescription("HAnimSite l_digit2")

HAnimSite268.addChildren(TouchSensor269)
Shape270 = x3d.Shape()
Shape270.setUSE("HAnimSiteShape")

HAnimSite268.addChildren(Shape270)

HAnimSegment246.addChildren(HAnimSite268)

HAnimJoint245.addChildren(HAnimSegment246)

HAnimJoint229.addChildren(HAnimJoint245)

HAnimJoint220.addChildren(HAnimJoint229)

HAnimJoint183.addChildren(HAnimJoint220)

HAnimJoint174.addChildren(HAnimJoint183)

HAnimJoint144.addChildren(HAnimJoint174)

HAnimJoint64.addChildren(HAnimJoint144)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setName("r_hip")
HAnimJoint271.setDEF("hanim_r_hip")
HAnimJoint271.setCenter([-0.0961,0.9124,-0.0001])
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setName("r_thigh")
HAnimSegment272.setDEF("hanim_r_thigh")
#<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
TouchSensor273 = x3d.TouchSensor()
TouchSensor273.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment272.addChildren(TouchSensor273)
Transform274 = x3d.Transform()
Transform274.setTranslation([-0.0961,0.9124,-0.0001])
Shape275 = x3d.Shape()
Shape275.setUSE("HAnimJointShape")

Transform274.addChildren(Shape275)

HAnimSegment272.addChildren(Transform274)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.setVertexCount([2])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])

LineSet277.setCoord(Coordinate278)
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.setUSE("HAnimSegmentLineColorRGBA")

LineSet277.setColor(ColorRGBA279)

Shape276.setGeometry(LineSet277)

HAnimSegment272.addChildren(Shape276)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape280 = x3d.Shape()
LineSet281 = x3d.LineSet()
LineSet281.setVertexCount([2])
Coordinate282 = x3d.Coordinate()
Coordinate282.setPoint([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])

LineSet281.setCoord(Coordinate282)
ColorRGBA283 = x3d.ColorRGBA()
ColorRGBA283.setUSE("HAnimSiteLineColorRGBA")

LineSet281.setColor(ColorRGBA283)

Shape280.setGeometry(LineSet281)

HAnimSegment272.addChildren(Shape280)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape284 = x3d.Shape()
LineSet285 = x3d.LineSet()
LineSet285.setVertexCount([2])
Coordinate286 = x3d.Coordinate()
Coordinate286.setPoint([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])

LineSet285.setCoord(Coordinate286)
ColorRGBA287 = x3d.ColorRGBA()
ColorRGBA287.setUSE("HAnimSiteLineColorRGBA")

LineSet285.setColor(ColorRGBA287)

Shape284.setGeometry(LineSet285)

HAnimSegment272.addChildren(Shape284)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape288 = x3d.Shape()
LineSet289 = x3d.LineSet()
LineSet289.setVertexCount([2])
Coordinate290 = x3d.Coordinate()
Coordinate290.setPoint([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])

LineSet289.setCoord(Coordinate290)
ColorRGBA291 = x3d.ColorRGBA()
ColorRGBA291.setUSE("HAnimSiteLineColorRGBA")

LineSet289.setColor(ColorRGBA291)

Shape288.setGeometry(LineSet289)

HAnimSegment272.addChildren(Shape288)
HAnimSite292 = x3d.HAnimSite()
HAnimSite292.setName("r_knee_crease_pt")
HAnimSite292.setDEF("hanim_r_knee_crease_pt")
HAnimSite292.setTranslation([-0.0825,0.4932,-0.0326])
#HAnimSite visualization shape
TouchSensor293 = x3d.TouchSensor()
TouchSensor293.setDescription("HAnimSite r_knee_crease")

HAnimSite292.addChildren(TouchSensor293)
Shape294 = x3d.Shape()
Shape294.setUSE("HAnimSiteShape")

HAnimSite292.addChildren(Shape294)

HAnimSegment272.addChildren(HAnimSite292)
HAnimSite295 = x3d.HAnimSite()
HAnimSite295.setName("r_femoral_lateral_epicn_pt")
HAnimSite295.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite295.setTranslation([-0.1421,0.4992,0.031])
#HAnimSite visualization shape
TouchSensor296 = x3d.TouchSensor()
TouchSensor296.setDescription("HAnimSite r_femoral_lateral_epicn")

HAnimSite295.addChildren(TouchSensor296)
Shape297 = x3d.Shape()
Shape297.setUSE("HAnimSiteShape")

HAnimSite295.addChildren(Shape297)

HAnimSegment272.addChildren(HAnimSite295)
HAnimSite298 = x3d.HAnimSite()
HAnimSite298.setName("r_femoral_medial_epicn_pt")
HAnimSite298.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite298.setTranslation([-0.0221,0.5014,0.0289])
#HAnimSite visualization shape
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.setDescription("HAnimSite r_femoral_medial_epicn")

HAnimSite298.addChildren(TouchSensor299)
Shape300 = x3d.Shape()
Shape300.setUSE("HAnimSiteShape")

HAnimSite298.addChildren(Shape300)

HAnimSegment272.addChildren(HAnimSite298)

HAnimJoint271.addChildren(HAnimSegment272)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setName("r_knee")
HAnimJoint301.setDEF("hanim_r_knee")
HAnimJoint301.setCenter([-0.104,0.4867,0.0308])
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setName("r_calf")
HAnimSegment302.setDEF("hanim_r_calf")
#<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
TouchSensor303 = x3d.TouchSensor()
TouchSensor303.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment302.addChildren(TouchSensor303)
Transform304 = x3d.Transform()
Transform304.setTranslation([-0.104,0.4867,0.0308])
Shape305 = x3d.Shape()
Shape305.setUSE("HAnimJointShape")

Transform304.addChildren(Shape305)

HAnimSegment302.addChildren(Transform304)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape306 = x3d.Shape()
LineSet307 = x3d.LineSet()
LineSet307.setVertexCount([2])
Coordinate308 = x3d.Coordinate()
Coordinate308.setPoint([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])

LineSet307.setCoord(Coordinate308)
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.setUSE("HAnimSegmentLineColorRGBA")

LineSet307.setColor(ColorRGBA309)

Shape306.setGeometry(LineSet307)

HAnimSegment302.addChildren(Shape306)

HAnimJoint301.addChildren(HAnimSegment302)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setName("r_ankle")
HAnimJoint310.setDEF("hanim_r_ankle")
HAnimJoint310.setCenter([-0.1101,0.0656,-0.0736])
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setName("r_hindfoot")
HAnimSegment311.setDEF("hanim_r_hindfoot")
#<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
TouchSensor312 = x3d.TouchSensor()
TouchSensor312.setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot")

HAnimSegment311.addChildren(TouchSensor312)
Transform313 = x3d.Transform()
Transform313.setTranslation([-0.1101,0.0656,-0.0736])
Shape314 = x3d.Shape()
Shape314.setUSE("HAnimJointShape")

Transform313.addChildren(Shape314)

HAnimSegment311.addChildren(Transform313)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape315 = x3d.Shape()
LineSet316 = x3d.LineSet()
LineSet316.setVertexCount([2])
Coordinate317 = x3d.Coordinate()
Coordinate317.setPoint([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])

LineSet316.setCoord(Coordinate317)
ColorRGBA318 = x3d.ColorRGBA()
ColorRGBA318.setUSE("HAnimSegmentLineColorRGBA")

LineSet316.setColor(ColorRGBA318)

Shape315.setGeometry(LineSet316)

HAnimSegment311.addChildren(Shape315)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape319 = x3d.Shape()
LineSet320 = x3d.LineSet()
LineSet320.setVertexCount([2])
Coordinate321 = x3d.Coordinate()
Coordinate321.setPoint([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])

LineSet320.setCoord(Coordinate321)
ColorRGBA322 = x3d.ColorRGBA()
ColorRGBA322.setUSE("HAnimSiteLineColorRGBA")

LineSet320.setColor(ColorRGBA322)

Shape319.setGeometry(LineSet320)

HAnimSegment311.addChildren(Shape319)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape323 = x3d.Shape()
LineSet324 = x3d.LineSet()
LineSet324.setVertexCount([2])
Coordinate325 = x3d.Coordinate()
Coordinate325.setPoint([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])

LineSet324.setCoord(Coordinate325)
ColorRGBA326 = x3d.ColorRGBA()
ColorRGBA326.setUSE("HAnimSiteLineColorRGBA")

LineSet324.setColor(ColorRGBA326)

Shape323.setGeometry(LineSet324)

HAnimSegment311.addChildren(Shape323)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape327 = x3d.Shape()
LineSet328 = x3d.LineSet()
LineSet328.setVertexCount([2])
Coordinate329 = x3d.Coordinate()
Coordinate329.setPoint([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])

LineSet328.setCoord(Coordinate329)
ColorRGBA330 = x3d.ColorRGBA()
ColorRGBA330.setUSE("HAnimSiteLineColorRGBA")

LineSet328.setColor(ColorRGBA330)

Shape327.setGeometry(LineSet328)

HAnimSegment311.addChildren(Shape327)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape331 = x3d.Shape()
LineSet332 = x3d.LineSet()
LineSet332.setVertexCount([2])
Coordinate333 = x3d.Coordinate()
Coordinate333.setPoint([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])

LineSet332.setCoord(Coordinate333)
ColorRGBA334 = x3d.ColorRGBA()
ColorRGBA334.setUSE("HAnimSiteLineColorRGBA")

LineSet332.setColor(ColorRGBA334)

Shape331.setGeometry(LineSet332)

HAnimSegment311.addChildren(Shape331)
HAnimSite335 = x3d.HAnimSite()
HAnimSite335.setName("r_lateral_malleolus_pt")
HAnimSite335.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite335.setTranslation([-0.1006,0.0658,-0.1075])
#HAnimSite visualization shape
TouchSensor336 = x3d.TouchSensor()
TouchSensor336.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite335.addChildren(TouchSensor336)
Shape337 = x3d.Shape()
Shape337.setUSE("HAnimSiteShape")

HAnimSite335.addChildren(Shape337)

HAnimSegment311.addChildren(HAnimSite335)
HAnimSite338 = x3d.HAnimSite()
HAnimSite338.setName("r_medial_malleolus_pt")
HAnimSite338.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite338.setTranslation([-0.0591,0.076,-0.0928])
#HAnimSite visualization shape
TouchSensor339 = x3d.TouchSensor()
TouchSensor339.setDescription("HAnimSite r_medial_malleolus")

HAnimSite338.addChildren(TouchSensor339)
Shape340 = x3d.Shape()
Shape340.setUSE("HAnimSiteShape")

HAnimSite338.addChildren(Shape340)

HAnimSegment311.addChildren(HAnimSite338)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.setName("r_sphyrion_pt")
HAnimSite341.setDEF("hanim_r_sphyrion_pt")
HAnimSite341.setTranslation([-0.0603,0.061,-0.1002])
#HAnimSite visualization shape
TouchSensor342 = x3d.TouchSensor()
TouchSensor342.setDescription("HAnimSite r_sphyrion")

HAnimSite341.addChildren(TouchSensor342)
Shape343 = x3d.Shape()
Shape343.setUSE("HAnimSiteShape")

HAnimSite341.addChildren(Shape343)

HAnimSegment311.addChildren(HAnimSite341)
HAnimSite344 = x3d.HAnimSite()
HAnimSite344.setName("r_calcaneous_post_pt")
HAnimSite344.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite344.setTranslation([-0.0692,0.0297,-0.1221])
#HAnimSite visualization shape
TouchSensor345 = x3d.TouchSensor()
TouchSensor345.setDescription("HAnimSite r_calcaneous_post")

HAnimSite344.addChildren(TouchSensor345)
Shape346 = x3d.Shape()
Shape346.setUSE("HAnimSiteShape")

HAnimSite344.addChildren(Shape346)

HAnimSegment311.addChildren(HAnimSite344)

HAnimJoint310.addChildren(HAnimSegment311)
HAnimJoint347 = x3d.HAnimJoint()
HAnimJoint347.setName("r_subtalar")
HAnimJoint347.setDEF("hanim_r_subtalar")
HAnimJoint347.setCenter([-0.1086,0.0001,-0.0368])
HAnimSegment348 = x3d.HAnimSegment()
HAnimSegment348.setName("r_midproximal")
HAnimSegment348.setDEF("hanim_r_midproximal")
#<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
TouchSensor349 = x3d.TouchSensor()
TouchSensor349.setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal")

HAnimSegment348.addChildren(TouchSensor349)
Transform350 = x3d.Transform()
Transform350.setTranslation([-0.1086,0.0001,-0.0368])
Shape351 = x3d.Shape()
Shape351.setUSE("HAnimJointShape")

Transform350.addChildren(Shape351)

HAnimSegment348.addChildren(Transform350)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape352 = x3d.Shape()
LineSet353 = x3d.LineSet()
LineSet353.setVertexCount([2])
Coordinate354 = x3d.Coordinate()
Coordinate354.setPoint([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])

LineSet353.setCoord(Coordinate354)
ColorRGBA355 = x3d.ColorRGBA()
ColorRGBA355.setUSE("HAnimSegmentLineColorRGBA")

LineSet353.setColor(ColorRGBA355)

Shape352.setGeometry(LineSet353)

HAnimSegment348.addChildren(Shape352)

HAnimJoint347.addChildren(HAnimSegment348)
HAnimJoint356 = x3d.HAnimJoint()
HAnimJoint356.setName("r_midtarsal")
HAnimJoint356.setDEF("hanim_r_midtarsal")
HAnimJoint356.setCenter([-0.1086,0.0001,0.0368])
HAnimSegment357 = x3d.HAnimSegment()
HAnimSegment357.setName("r_middistal")
HAnimSegment357.setDEF("hanim_r_middistal")
#<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
TouchSensor358 = x3d.TouchSensor()
TouchSensor358.setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal")

HAnimSegment357.addChildren(TouchSensor358)
Transform359 = x3d.Transform()
Transform359.setTranslation([-0.1086,0.0001,0.0368])
Shape360 = x3d.Shape()
Shape360.setUSE("HAnimJointShape")

Transform359.addChildren(Shape360)

HAnimSegment357.addChildren(Transform359)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape361 = x3d.Shape()
LineSet362 = x3d.LineSet()
LineSet362.setVertexCount([2])
Coordinate363 = x3d.Coordinate()
Coordinate363.setPoint([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])

LineSet362.setCoord(Coordinate363)
ColorRGBA364 = x3d.ColorRGBA()
ColorRGBA364.setUSE("HAnimSegmentLineColorRGBA")

LineSet362.setColor(ColorRGBA364)

Shape361.setGeometry(LineSet362)

HAnimSegment357.addChildren(Shape361)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape365 = x3d.Shape()
LineSet366 = x3d.LineSet()
LineSet366.setVertexCount([2])
Coordinate367 = x3d.Coordinate()
Coordinate367.setPoint([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])

LineSet366.setCoord(Coordinate367)
ColorRGBA368 = x3d.ColorRGBA()
ColorRGBA368.setUSE("HAnimSiteLineColorRGBA")

LineSet366.setColor(ColorRGBA368)

Shape365.setGeometry(LineSet366)

HAnimSegment357.addChildren(Shape365)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.setName("r_metatarsal_pha1_pt")
HAnimSite369.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite369.setTranslation([-0.0521,0.026,0.0127])
#HAnimSite visualization shape
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.setDescription("HAnimSite r_metatarsal_pha1")

HAnimSite369.addChildren(TouchSensor370)
Shape371 = x3d.Shape()
Shape371.setUSE("HAnimSiteShape")

HAnimSite369.addChildren(Shape371)

HAnimSegment357.addChildren(HAnimSite369)

HAnimJoint356.addChildren(HAnimSegment357)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setName("r_metatarsal")
HAnimJoint372.setDEF("hanim_r_metatarsal")
HAnimJoint372.setCenter([-0.1086,0,0.0762])
HAnimSegment373 = x3d.HAnimSegment()
HAnimSegment373.setName("r_forefoot")
HAnimSegment373.setDEF("hanim_r_forefoot")
#<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
TouchSensor374 = x3d.TouchSensor()
TouchSensor374.setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")

HAnimSegment373.addChildren(TouchSensor374)
Transform375 = x3d.Transform()
Transform375.setTranslation([-0.1086,0,0.0762])
Shape376 = x3d.Shape()
Shape376.setUSE("HAnimJointShape")

Transform375.addChildren(Shape376)

HAnimSegment373.addChildren(Transform375)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.setVertexCount([2])
Coordinate379 = x3d.Coordinate()
Coordinate379.setPoint([-0.1086,0,0.0762,-0.1043,0.0227,0.145])

LineSet378.setCoord(Coordinate379)
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.setUSE("HAnimSiteLineColorRGBA")

LineSet378.setColor(ColorRGBA380)

Shape377.setGeometry(LineSet378)

HAnimSegment373.addChildren(Shape377)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.setVertexCount([2])
Coordinate383 = x3d.Coordinate()
Coordinate383.setPoint([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])

LineSet382.setCoord(Coordinate383)
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.setUSE("HAnimSiteLineColorRGBA")

LineSet382.setColor(ColorRGBA384)

Shape381.setGeometry(LineSet382)

HAnimSegment373.addChildren(Shape381)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape385 = x3d.Shape()
LineSet386 = x3d.LineSet()
LineSet386.setVertexCount([2])
Coordinate387 = x3d.Coordinate()
Coordinate387.setPoint([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])

LineSet386.setCoord(Coordinate387)
ColorRGBA388 = x3d.ColorRGBA()
ColorRGBA388.setUSE("HAnimSiteLineColorRGBA")

LineSet386.setColor(ColorRGBA388)

Shape385.setGeometry(LineSet386)

HAnimSegment373.addChildren(Shape385)
HAnimSite389 = x3d.HAnimSite()
HAnimSite389.setName("r_forefoot_tip")
HAnimSite389.setDEF("hanim_r_forefoot_tip")
HAnimSite389.setTranslation([-0.1043,0.0227,0.145])
#HAnimSite visualization shape
TouchSensor390 = x3d.TouchSensor()
TouchSensor390.setDescription("HAnimSite r_forefoot_tip")

HAnimSite389.addChildren(TouchSensor390)
Shape391 = x3d.Shape()
Shape391.setUSE("HAnimSiteShape")

HAnimSite389.addChildren(Shape391)

HAnimSegment373.addChildren(HAnimSite389)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setName("r_metatarsal_pha5_pt")
HAnimSite392.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite392.setTranslation([-0.1523,0.0166,0.0895])
#HAnimSite visualization shape
TouchSensor393 = x3d.TouchSensor()
TouchSensor393.setDescription("HAnimSite r_metatarsal_pha5")

HAnimSite392.addChildren(TouchSensor393)
Shape394 = x3d.Shape()
Shape394.setUSE("HAnimSiteShape")

HAnimSite392.addChildren(Shape394)

HAnimSegment373.addChildren(HAnimSite392)
HAnimSite395 = x3d.HAnimSite()
HAnimSite395.setName("r_digit2_pt")
HAnimSite395.setDEF("hanim_r_digit2_pt")
HAnimSite395.setTranslation([-0.0883,0.0134,0.1383])
#HAnimSite visualization shape
TouchSensor396 = x3d.TouchSensor()
TouchSensor396.setDescription("HAnimSite r_digit2")

HAnimSite395.addChildren(TouchSensor396)
Shape397 = x3d.Shape()
Shape397.setUSE("HAnimSiteShape")

HAnimSite395.addChildren(Shape397)

HAnimSegment373.addChildren(HAnimSite395)

HAnimJoint372.addChildren(HAnimSegment373)

HAnimJoint356.addChildren(HAnimJoint372)

HAnimJoint347.addChildren(HAnimJoint356)

HAnimJoint310.addChildren(HAnimJoint347)

HAnimJoint301.addChildren(HAnimJoint310)

HAnimJoint271.addChildren(HAnimJoint301)

HAnimJoint64.addChildren(HAnimJoint271)

HAnimJoint48.addChildren(HAnimJoint64)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setName("vl5")
HAnimJoint398.setDEF("hanim_vl5")
HAnimJoint398.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment399 = x3d.HAnimSegment()
HAnimSegment399.setName("l5")
HAnimSegment399.setDEF("hanim_l5")
#<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
TouchSensor400 = x3d.TouchSensor()
TouchSensor400.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment399.addChildren(TouchSensor400)
Transform401 = x3d.Transform()
Transform401.setTranslation([0.0028,1.0568,-0.0776])
Shape402 = x3d.Shape()
Shape402.setUSE("HAnimJointShape")

Transform401.addChildren(Shape402)

HAnimSegment399.addChildren(Transform401)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape403 = x3d.Shape()
LineSet404 = x3d.LineSet()
LineSet404.setVertexCount([2])
Coordinate405 = x3d.Coordinate()
Coordinate405.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet404.setCoord(Coordinate405)
ColorRGBA406 = x3d.ColorRGBA()
ColorRGBA406.setUSE("HAnimSegmentLineColorRGBA")

LineSet404.setColor(ColorRGBA406)

Shape403.setGeometry(LineSet404)

HAnimSegment399.addChildren(Shape403)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape407 = x3d.Shape()
LineSet408 = x3d.LineSet()
LineSet408.setVertexCount([2])
Coordinate409 = x3d.Coordinate()
Coordinate409.setPoint([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])

LineSet408.setCoord(Coordinate409)
ColorRGBA410 = x3d.ColorRGBA()
ColorRGBA410.setUSE("HAnimSiteLineColorRGBA")

LineSet408.setColor(ColorRGBA410)

Shape407.setGeometry(LineSet408)

HAnimSegment399.addChildren(Shape407)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape411 = x3d.Shape()
LineSet412 = x3d.LineSet()
LineSet412.setVertexCount([2])
Coordinate413 = x3d.Coordinate()
Coordinate413.setPoint([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])

LineSet412.setCoord(Coordinate413)
ColorRGBA414 = x3d.ColorRGBA()
ColorRGBA414.setUSE("HAnimSiteLineColorRGBA")

LineSet412.setColor(ColorRGBA414)

Shape411.setGeometry(LineSet412)

HAnimSegment399.addChildren(Shape411)
HAnimSite415 = x3d.HAnimSite()
HAnimSite415.setName("waist_preferred_post_pt")
HAnimSite415.setDEF("hanim_waist_preferred_post_pt")
HAnimSite415.setTranslation([0,1.0915,-0.1091])
#HAnimSite visualization shape
TouchSensor416 = x3d.TouchSensor()
TouchSensor416.setDescription("HAnimSite waist_preferred_post")

HAnimSite415.addChildren(TouchSensor416)
Shape417 = x3d.Shape()
Shape417.setUSE("HAnimSiteShape")

HAnimSite415.addChildren(Shape417)

HAnimSegment399.addChildren(HAnimSite415)
HAnimSite418 = x3d.HAnimSite()
HAnimSite418.setName("navel_pt")
HAnimSite418.setDEF("hanim_navel_pt")
HAnimSite418.setTranslation([0.0069,1.0966,0.1017])
#HAnimSite visualization shape
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.setDescription("HAnimSite navel")

HAnimSite418.addChildren(TouchSensor419)
Shape420 = x3d.Shape()
Shape420.setUSE("HAnimSiteShape")

HAnimSite418.addChildren(Shape420)

HAnimSegment399.addChildren(HAnimSite418)

HAnimJoint398.addChildren(HAnimSegment399)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setName("vl4")
HAnimJoint421.setDEF("hanim_vl4")
HAnimJoint421.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment422 = x3d.HAnimSegment()
HAnimSegment422.setName("l4")
HAnimSegment422.setDEF("hanim_l4")
#<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment422.addChildren(TouchSensor423)
Transform424 = x3d.Transform()
Transform424.setTranslation([0.0035,1.0925,-0.0787])
Shape425 = x3d.Shape()
Shape425.setUSE("HAnimJointShape")

Transform424.addChildren(Shape425)

HAnimSegment422.addChildren(Transform424)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape426 = x3d.Shape()
LineSet427 = x3d.LineSet()
LineSet427.setVertexCount([2])
Coordinate428 = x3d.Coordinate()
Coordinate428.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet427.setCoord(Coordinate428)
ColorRGBA429 = x3d.ColorRGBA()
ColorRGBA429.setUSE("HAnimSegmentLineColorRGBA")

LineSet427.setColor(ColorRGBA429)

Shape426.setGeometry(LineSet427)

HAnimSegment422.addChildren(Shape426)

HAnimJoint421.addChildren(HAnimSegment422)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setName("vl3")
HAnimJoint430.setDEF("hanim_vl3")
HAnimJoint430.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.setName("l3")
HAnimSegment431.setDEF("hanim_l3")
#<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
TouchSensor432 = x3d.TouchSensor()
TouchSensor432.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment431.addChildren(TouchSensor432)
Transform433 = x3d.Transform()
Transform433.setTranslation([0.0041,1.1276,-0.0796])
Shape434 = x3d.Shape()
Shape434.setUSE("HAnimJointShape")

Transform433.addChildren(Shape434)

HAnimSegment431.addChildren(Transform433)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape435 = x3d.Shape()
LineSet436 = x3d.LineSet()
LineSet436.setVertexCount([2])
Coordinate437 = x3d.Coordinate()
Coordinate437.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet436.setCoord(Coordinate437)
ColorRGBA438 = x3d.ColorRGBA()
ColorRGBA438.setUSE("HAnimSegmentLineColorRGBA")

LineSet436.setColor(ColorRGBA438)

Shape435.setGeometry(LineSet436)

HAnimSegment431.addChildren(Shape435)

HAnimJoint430.addChildren(HAnimSegment431)
HAnimJoint439 = x3d.HAnimJoint()
HAnimJoint439.setName("vl2")
HAnimJoint439.setDEF("hanim_vl2")
HAnimJoint439.setCenter([0.0045,1.1546,-0.08])
HAnimSegment440 = x3d.HAnimSegment()
HAnimSegment440.setName("l2")
HAnimSegment440.setDEF("hanim_l2")
#<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
TouchSensor441 = x3d.TouchSensor()
TouchSensor441.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment440.addChildren(TouchSensor441)
Transform442 = x3d.Transform()
Transform442.setTranslation([0.0045,1.1546,-0.08])
Shape443 = x3d.Shape()
Shape443.setUSE("HAnimJointShape")

Transform442.addChildren(Shape443)

HAnimSegment440.addChildren(Transform442)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape444 = x3d.Shape()
LineSet445 = x3d.LineSet()
LineSet445.setVertexCount([2])
Coordinate446 = x3d.Coordinate()
Coordinate446.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet445.setCoord(Coordinate446)
ColorRGBA447 = x3d.ColorRGBA()
ColorRGBA447.setUSE("HAnimSegmentLineColorRGBA")

LineSet445.setColor(ColorRGBA447)

Shape444.setGeometry(LineSet445)

HAnimSegment440.addChildren(Shape444)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape448 = x3d.Shape()
LineSet449 = x3d.LineSet()
LineSet449.setVertexCount([2])
Coordinate450 = x3d.Coordinate()
Coordinate450.setPoint([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])

LineSet449.setCoord(Coordinate450)
ColorRGBA451 = x3d.ColorRGBA()
ColorRGBA451.setUSE("HAnimSiteLineColorRGBA")

LineSet449.setColor(ColorRGBA451)

Shape448.setGeometry(LineSet449)

HAnimSegment440.addChildren(Shape448)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape452 = x3d.Shape()
LineSet453 = x3d.LineSet()
LineSet453.setVertexCount([2])
Coordinate454 = x3d.Coordinate()
Coordinate454.setPoint([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])

LineSet453.setCoord(Coordinate454)
ColorRGBA455 = x3d.ColorRGBA()
ColorRGBA455.setUSE("HAnimSiteLineColorRGBA")

LineSet453.setColor(ColorRGBA455)

Shape452.setGeometry(LineSet453)

HAnimSegment440.addChildren(Shape452)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape456 = x3d.Shape()
LineSet457 = x3d.LineSet()
LineSet457.setVertexCount([2])
Coordinate458 = x3d.Coordinate()
Coordinate458.setPoint([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])

LineSet457.setCoord(Coordinate458)
ColorRGBA459 = x3d.ColorRGBA()
ColorRGBA459.setUSE("HAnimSiteLineColorRGBA")

LineSet457.setColor(ColorRGBA459)

Shape456.setGeometry(LineSet457)

HAnimSegment440.addChildren(Shape456)
HAnimSite460 = x3d.HAnimSite()
HAnimSite460.setName("r_rib10_pt")
HAnimSite460.setDEF("hanim_r_rib10_pt")
HAnimSite460.setTranslation([-0.0711,1.1941,0.1016])
#HAnimSite visualization shape
TouchSensor461 = x3d.TouchSensor()
TouchSensor461.setDescription("HAnimSite r_rib10")

HAnimSite460.addChildren(TouchSensor461)
Shape462 = x3d.Shape()
Shape462.setUSE("HAnimSiteShape")

HAnimSite460.addChildren(Shape462)

HAnimSegment440.addChildren(HAnimSite460)
HAnimSite463 = x3d.HAnimSite()
HAnimSite463.setName("l_rib10_pt")
HAnimSite463.setDEF("hanim_l_rib10_pt")
HAnimSite463.setTranslation([0.0871,1.1925,0.0992])
#HAnimSite visualization shape
TouchSensor464 = x3d.TouchSensor()
TouchSensor464.setDescription("HAnimSite l_rib10")

HAnimSite463.addChildren(TouchSensor464)
Shape465 = x3d.Shape()
Shape465.setUSE("HAnimSiteShape")

HAnimSite463.addChildren(Shape465)

HAnimSegment440.addChildren(HAnimSite463)
HAnimSite466 = x3d.HAnimSite()
HAnimSite466.setName("rib10_midspine_pt")
HAnimSite466.setDEF("hanim_rib10_midspine_pt")
HAnimSite466.setTranslation([0.0049,1.1908,-0.1113])
#HAnimSite visualization shape
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.setDescription("HAnimSite rib10_midspine")

HAnimSite466.addChildren(TouchSensor467)
Shape468 = x3d.Shape()
Shape468.setUSE("HAnimSiteShape")

HAnimSite466.addChildren(Shape468)

HAnimSegment440.addChildren(HAnimSite466)

HAnimJoint439.addChildren(HAnimSegment440)
HAnimJoint469 = x3d.HAnimJoint()
HAnimJoint469.setName("vl1")
HAnimJoint469.setDEF("hanim_vl1")
HAnimJoint469.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.setName("l1")
HAnimSegment470.setDEF("hanim_l1")
#<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
TouchSensor471 = x3d.TouchSensor()
TouchSensor471.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment470.addChildren(TouchSensor471)
Transform472 = x3d.Transform()
Transform472.setTranslation([0.0048,1.1912,-0.0805])
Shape473 = x3d.Shape()
Shape473.setUSE("HAnimJointShape")

Transform472.addChildren(Shape473)

HAnimSegment470.addChildren(Transform472)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape474 = x3d.Shape()
LineSet475 = x3d.LineSet()
LineSet475.setVertexCount([2])
Coordinate476 = x3d.Coordinate()
Coordinate476.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet475.setCoord(Coordinate476)
ColorRGBA477 = x3d.ColorRGBA()
ColorRGBA477.setUSE("HAnimSegmentLineColorRGBA")

LineSet475.setColor(ColorRGBA477)

Shape474.setGeometry(LineSet475)

HAnimSegment470.addChildren(Shape474)

HAnimJoint469.addChildren(HAnimSegment470)
HAnimJoint478 = x3d.HAnimJoint()
HAnimJoint478.setName("vt12")
HAnimJoint478.setDEF("hanim_vt12")
HAnimJoint478.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setName("t12")
HAnimSegment479.setDEF("hanim_t12")
#<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
TouchSensor480 = x3d.TouchSensor()
TouchSensor480.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment479.addChildren(TouchSensor480)
Transform481 = x3d.Transform()
Transform481.setTranslation([0.0051,1.2278,-0.0808])
Shape482 = x3d.Shape()
Shape482.setUSE("HAnimJointShape")

Transform481.addChildren(Shape482)

HAnimSegment479.addChildren(Transform481)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape483 = x3d.Shape()
LineSet484 = x3d.LineSet()
LineSet484.setVertexCount([2])
Coordinate485 = x3d.Coordinate()
Coordinate485.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet484.setCoord(Coordinate485)
ColorRGBA486 = x3d.ColorRGBA()
ColorRGBA486.setUSE("HAnimSegmentLineColorRGBA")

LineSet484.setColor(ColorRGBA486)

Shape483.setGeometry(LineSet484)

HAnimSegment479.addChildren(Shape483)

HAnimJoint478.addChildren(HAnimSegment479)
HAnimJoint487 = x3d.HAnimJoint()
HAnimJoint487.setName("vt11")
HAnimJoint487.setDEF("hanim_vt11")
HAnimJoint487.setCenter([0.0053,1.2679,-0.081])
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.setName("t11")
HAnimSegment488.setDEF("hanim_t11")
#<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment488.addChildren(TouchSensor489)
Transform490 = x3d.Transform()
Transform490.setTranslation([0.0053,1.2679,-0.081])
Shape491 = x3d.Shape()
Shape491.setUSE("HAnimJointShape")

Transform490.addChildren(Shape491)

HAnimSegment488.addChildren(Transform490)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape492 = x3d.Shape()
LineSet493 = x3d.LineSet()
LineSet493.setVertexCount([2])
Coordinate494 = x3d.Coordinate()
Coordinate494.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet493.setCoord(Coordinate494)
ColorRGBA495 = x3d.ColorRGBA()
ColorRGBA495.setUSE("HAnimSegmentLineColorRGBA")

LineSet493.setColor(ColorRGBA495)

Shape492.setGeometry(LineSet493)

HAnimSegment488.addChildren(Shape492)

HAnimJoint487.addChildren(HAnimSegment488)
HAnimJoint496 = x3d.HAnimJoint()
HAnimJoint496.setName("vt10")
HAnimJoint496.setDEF("hanim_vt10")
HAnimJoint496.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.setName("t10")
HAnimSegment497.setDEF("hanim_t10")
#<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
TouchSensor498 = x3d.TouchSensor()
TouchSensor498.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment497.addChildren(TouchSensor498)
Transform499 = x3d.Transform()
Transform499.setTranslation([0.0056,1.2848,-0.0822])
Shape500 = x3d.Shape()
Shape500.setUSE("HAnimJointShape")

Transform499.addChildren(Shape500)

HAnimSegment497.addChildren(Transform499)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape501 = x3d.Shape()
LineSet502 = x3d.LineSet()
LineSet502.setVertexCount([2])
Coordinate503 = x3d.Coordinate()
Coordinate503.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet502.setCoord(Coordinate503)
ColorRGBA504 = x3d.ColorRGBA()
ColorRGBA504.setUSE("HAnimSegmentLineColorRGBA")

LineSet502.setColor(ColorRGBA504)

Shape501.setGeometry(LineSet502)

HAnimSegment497.addChildren(Shape501)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape505 = x3d.Shape()
LineSet506 = x3d.LineSet()
LineSet506.setVertexCount([2])
Coordinate507 = x3d.Coordinate()
Coordinate507.setPoint([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])

LineSet506.setCoord(Coordinate507)
ColorRGBA508 = x3d.ColorRGBA()
ColorRGBA508.setUSE("HAnimSiteLineColorRGBA")

LineSet506.setColor(ColorRGBA508)

Shape505.setGeometry(LineSet506)

HAnimSegment497.addChildren(Shape505)
HAnimSite509 = x3d.HAnimSite()
HAnimSite509.setName("substernale_pt")
HAnimSite509.setDEF("hanim_substernale_pt")
HAnimSite509.setTranslation([0.0085,1.2995,0.1147])
#HAnimSite visualization shape
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.setDescription("HAnimSite substernale")

HAnimSite509.addChildren(TouchSensor510)
Shape511 = x3d.Shape()
Shape511.setUSE("HAnimSiteShape")

HAnimSite509.addChildren(Shape511)

HAnimSegment497.addChildren(HAnimSite509)

HAnimJoint496.addChildren(HAnimSegment497)
HAnimJoint512 = x3d.HAnimJoint()
HAnimJoint512.setName("vt9")
HAnimJoint512.setDEF("hanim_vt9")
HAnimJoint512.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.setName("t9")
HAnimSegment513.setDEF("hanim_t9")
#<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
TouchSensor514 = x3d.TouchSensor()
TouchSensor514.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment513.addChildren(TouchSensor514)
Transform515 = x3d.Transform()
Transform515.setTranslation([0.0057,1.3126,-0.0838])
Shape516 = x3d.Shape()
Shape516.setUSE("HAnimJointShape")

Transform515.addChildren(Shape516)

HAnimSegment513.addChildren(Transform515)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape517 = x3d.Shape()
LineSet518 = x3d.LineSet()
LineSet518.setVertexCount([2])
Coordinate519 = x3d.Coordinate()
Coordinate519.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet518.setCoord(Coordinate519)
ColorRGBA520 = x3d.ColorRGBA()
ColorRGBA520.setUSE("HAnimSegmentLineColorRGBA")

LineSet518.setColor(ColorRGBA520)

Shape517.setGeometry(LineSet518)

HAnimSegment513.addChildren(Shape517)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape521 = x3d.Shape()
LineSet522 = x3d.LineSet()
LineSet522.setVertexCount([2])
Coordinate523 = x3d.Coordinate()
Coordinate523.setPoint([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])

LineSet522.setCoord(Coordinate523)
ColorRGBA524 = x3d.ColorRGBA()
ColorRGBA524.setUSE("HAnimSiteLineColorRGBA")

LineSet522.setColor(ColorRGBA524)

Shape521.setGeometry(LineSet522)

HAnimSegment513.addChildren(Shape521)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape525 = x3d.Shape()
LineSet526 = x3d.LineSet()
LineSet526.setVertexCount([2])
Coordinate527 = x3d.Coordinate()
Coordinate527.setPoint([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])

LineSet526.setCoord(Coordinate527)
ColorRGBA528 = x3d.ColorRGBA()
ColorRGBA528.setUSE("HAnimSiteLineColorRGBA")

LineSet526.setColor(ColorRGBA528)

Shape525.setGeometry(LineSet526)

HAnimSegment513.addChildren(Shape525)
HAnimSite529 = x3d.HAnimSite()
HAnimSite529.setName("r_thelion_pt")
HAnimSite529.setDEF("hanim_r_thelion_pt")
HAnimSite529.setTranslation([-0.0736,1.3385,0.1217])
#HAnimSite visualization shape
TouchSensor530 = x3d.TouchSensor()
TouchSensor530.setDescription("HAnimSite r_thelion")

HAnimSite529.addChildren(TouchSensor530)
Shape531 = x3d.Shape()
Shape531.setUSE("HAnimSiteShape")

HAnimSite529.addChildren(Shape531)

HAnimSegment513.addChildren(HAnimSite529)
HAnimSite532 = x3d.HAnimSite()
HAnimSite532.setName("l_thelion_pt")
HAnimSite532.setDEF("hanim_l_thelion_pt")
HAnimSite532.setTranslation([0.0918,1.3382,0.1192])
#HAnimSite visualization shape
TouchSensor533 = x3d.TouchSensor()
TouchSensor533.setDescription("HAnimSite l_thelion")

HAnimSite532.addChildren(TouchSensor533)
Shape534 = x3d.Shape()
Shape534.setUSE("HAnimSiteShape")

HAnimSite532.addChildren(Shape534)

HAnimSegment513.addChildren(HAnimSite532)

HAnimJoint512.addChildren(HAnimSegment513)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.setName("vt8")
HAnimJoint535.setDEF("hanim_vt8")
HAnimJoint535.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setName("t8")
HAnimSegment536.setDEF("hanim_t8")
#<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
TouchSensor537 = x3d.TouchSensor()
TouchSensor537.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment536.addChildren(TouchSensor537)
Transform538 = x3d.Transform()
Transform538.setTranslation([0.0057,1.3382,-0.0845])
Shape539 = x3d.Shape()
Shape539.setUSE("HAnimJointShape")

Transform538.addChildren(Shape539)

HAnimSegment536.addChildren(Transform538)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape540 = x3d.Shape()
LineSet541 = x3d.LineSet()
LineSet541.setVertexCount([2])
Coordinate542 = x3d.Coordinate()
Coordinate542.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet541.setCoord(Coordinate542)
ColorRGBA543 = x3d.ColorRGBA()
ColorRGBA543.setUSE("HAnimSegmentLineColorRGBA")

LineSet541.setColor(ColorRGBA543)

Shape540.setGeometry(LineSet541)

HAnimSegment536.addChildren(Shape540)

HAnimJoint535.addChildren(HAnimSegment536)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.setName("vt7")
HAnimJoint544.setDEF("hanim_vt7")
HAnimJoint544.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setName("t7")
HAnimSegment545.setDEF("hanim_t7")
#<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
TouchSensor546 = x3d.TouchSensor()
TouchSensor546.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment545.addChildren(TouchSensor546)
Transform547 = x3d.Transform()
Transform547.setTranslation([0.0058,1.3625,-0.0833])
Shape548 = x3d.Shape()
Shape548.setUSE("HAnimJointShape")

Transform547.addChildren(Shape548)

HAnimSegment545.addChildren(Transform547)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape549 = x3d.Shape()
LineSet550 = x3d.LineSet()
LineSet550.setVertexCount([2])
Coordinate551 = x3d.Coordinate()
Coordinate551.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet550.setCoord(Coordinate551)
ColorRGBA552 = x3d.ColorRGBA()
ColorRGBA552.setUSE("HAnimSegmentLineColorRGBA")

LineSet550.setColor(ColorRGBA552)

Shape549.setGeometry(LineSet550)

HAnimSegment545.addChildren(Shape549)

HAnimJoint544.addChildren(HAnimSegment545)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.setName("vt6")
HAnimJoint553.setDEF("hanim_vt6")
HAnimJoint553.setCenter([0.0059,1.3866,-0.08])
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.setName("t6")
HAnimSegment554.setDEF("hanim_t6")
#<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
TouchSensor555 = x3d.TouchSensor()
TouchSensor555.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment554.addChildren(TouchSensor555)
Transform556 = x3d.Transform()
Transform556.setTranslation([0.0059,1.3866,-0.08])
Shape557 = x3d.Shape()
Shape557.setUSE("HAnimJointShape")

Transform556.addChildren(Shape557)

HAnimSegment554.addChildren(Transform556)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape558 = x3d.Shape()
LineSet559 = x3d.LineSet()
LineSet559.setVertexCount([2])
Coordinate560 = x3d.Coordinate()
Coordinate560.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet559.setCoord(Coordinate560)
ColorRGBA561 = x3d.ColorRGBA()
ColorRGBA561.setUSE("HAnimSegmentLineColorRGBA")

LineSet559.setColor(ColorRGBA561)

Shape558.setGeometry(LineSet559)

HAnimSegment554.addChildren(Shape558)

HAnimJoint553.addChildren(HAnimSegment554)
HAnimJoint562 = x3d.HAnimJoint()
HAnimJoint562.setName("vt5")
HAnimJoint562.setDEF("hanim_vt5")
HAnimJoint562.setCenter([0.006,1.4102,-0.0745])
HAnimSegment563 = x3d.HAnimSegment()
HAnimSegment563.setName("t5")
HAnimSegment563.setDEF("hanim_t5")
#<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
TouchSensor564 = x3d.TouchSensor()
TouchSensor564.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment563.addChildren(TouchSensor564)
Transform565 = x3d.Transform()
Transform565.setTranslation([0.006,1.4102,-0.0745])
Shape566 = x3d.Shape()
Shape566.setUSE("HAnimJointShape")

Transform565.addChildren(Shape566)

HAnimSegment563.addChildren(Transform565)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape567 = x3d.Shape()
LineSet568 = x3d.LineSet()
LineSet568.setVertexCount([2])
Coordinate569 = x3d.Coordinate()
Coordinate569.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet568.setCoord(Coordinate569)
ColorRGBA570 = x3d.ColorRGBA()
ColorRGBA570.setUSE("HAnimSegmentLineColorRGBA")

LineSet568.setColor(ColorRGBA570)

Shape567.setGeometry(LineSet568)

HAnimSegment563.addChildren(Shape567)

HAnimJoint562.addChildren(HAnimSegment563)
HAnimJoint571 = x3d.HAnimJoint()
HAnimJoint571.setName("vt4")
HAnimJoint571.setDEF("hanim_vt4")
HAnimJoint571.setCenter([0.0061,1.432,-0.0675])
HAnimSegment572 = x3d.HAnimSegment()
HAnimSegment572.setName("t4")
HAnimSegment572.setDEF("hanim_t4")
#<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
TouchSensor573 = x3d.TouchSensor()
TouchSensor573.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment572.addChildren(TouchSensor573)
Transform574 = x3d.Transform()
Transform574.setTranslation([0.0061,1.432,-0.0675])
Shape575 = x3d.Shape()
Shape575.setUSE("HAnimJointShape")

Transform574.addChildren(Shape575)

HAnimSegment572.addChildren(Transform574)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape576 = x3d.Shape()
LineSet577 = x3d.LineSet()
LineSet577.setVertexCount([2])
Coordinate578 = x3d.Coordinate()
Coordinate578.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet577.setCoord(Coordinate578)
ColorRGBA579 = x3d.ColorRGBA()
ColorRGBA579.setUSE("HAnimSegmentLineColorRGBA")

LineSet577.setColor(ColorRGBA579)

Shape576.setGeometry(LineSet577)

HAnimSegment572.addChildren(Shape576)

HAnimJoint571.addChildren(HAnimSegment572)
HAnimJoint580 = x3d.HAnimJoint()
HAnimJoint580.setName("vt3")
HAnimJoint580.setDEF("hanim_vt3")
HAnimJoint580.setCenter([0.0062,1.4583,-0.057])
HAnimSegment581 = x3d.HAnimSegment()
HAnimSegment581.setName("t3")
HAnimSegment581.setDEF("hanim_t3")
#<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
TouchSensor582 = x3d.TouchSensor()
TouchSensor582.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment581.addChildren(TouchSensor582)
Transform583 = x3d.Transform()
Transform583.setTranslation([0.0062,1.4583,-0.057])
Shape584 = x3d.Shape()
Shape584.setUSE("HAnimJointShape")

Transform583.addChildren(Shape584)

HAnimSegment581.addChildren(Transform583)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape585 = x3d.Shape()
LineSet586 = x3d.LineSet()
LineSet586.setVertexCount([2])
Coordinate587 = x3d.Coordinate()
Coordinate587.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet586.setCoord(Coordinate587)
ColorRGBA588 = x3d.ColorRGBA()
ColorRGBA588.setUSE("HAnimSegmentLineColorRGBA")

LineSet586.setColor(ColorRGBA588)

Shape585.setGeometry(LineSet586)

HAnimSegment581.addChildren(Shape585)

HAnimJoint580.addChildren(HAnimSegment581)
HAnimJoint589 = x3d.HAnimJoint()
HAnimJoint589.setName("vt2")
HAnimJoint589.setDEF("hanim_vt2")
HAnimJoint589.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment590 = x3d.HAnimSegment()
HAnimSegment590.setName("t2")
HAnimSegment590.setDEF("hanim_t2")
#<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
TouchSensor591 = x3d.TouchSensor()
TouchSensor591.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment590.addChildren(TouchSensor591)
Transform592 = x3d.Transform()
Transform592.setTranslation([0.0063,1.4761,-0.0484])
Shape593 = x3d.Shape()
Shape593.setUSE("HAnimJointShape")

Transform592.addChildren(Shape593)

HAnimSegment590.addChildren(Transform592)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape594 = x3d.Shape()
LineSet595 = x3d.LineSet()
LineSet595.setVertexCount([2])
Coordinate596 = x3d.Coordinate()
Coordinate596.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet595.setCoord(Coordinate596)
ColorRGBA597 = x3d.ColorRGBA()
ColorRGBA597.setUSE("HAnimSegmentLineColorRGBA")

LineSet595.setColor(ColorRGBA597)

Shape594.setGeometry(LineSet595)

HAnimSegment590.addChildren(Shape594)

HAnimJoint589.addChildren(HAnimSegment590)
HAnimJoint598 = x3d.HAnimJoint()
HAnimJoint598.setName("vt1")
HAnimJoint598.setDEF("hanim_vt1")
HAnimJoint598.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment599 = x3d.HAnimSegment()
HAnimSegment599.setName("t1")
HAnimSegment599.setDEF("hanim_t1")
#<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
TouchSensor600 = x3d.TouchSensor()
TouchSensor600.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment599.addChildren(TouchSensor600)
Transform601 = x3d.Transform()
Transform601.setTranslation([0.0065,1.4951,-0.0387])
Shape602 = x3d.Shape()
Shape602.setUSE("HAnimJointShape")

Transform601.addChildren(Shape602)

HAnimSegment599.addChildren(Transform601)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape603 = x3d.Shape()
LineSet604 = x3d.LineSet()
LineSet604.setVertexCount([2])
Coordinate605 = x3d.Coordinate()
Coordinate605.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet604.setCoord(Coordinate605)
ColorRGBA606 = x3d.ColorRGBA()
ColorRGBA606.setUSE("HAnimSegmentLineColorRGBA")

LineSet604.setColor(ColorRGBA606)

Shape603.setGeometry(LineSet604)

HAnimSegment599.addChildren(Shape603)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.setVertexCount([2])
Coordinate609 = x3d.Coordinate()
Coordinate609.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet608.setCoord(Coordinate609)
ColorRGBA610 = x3d.ColorRGBA()
ColorRGBA610.setUSE("HAnimSegmentLineColorRGBA")

LineSet608.setColor(ColorRGBA610)

Shape607.setGeometry(LineSet608)

HAnimSegment599.addChildren(Shape607)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.setVertexCount([2])
Coordinate613 = x3d.Coordinate()
Coordinate613.setPoint([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])

LineSet612.setCoord(Coordinate613)
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.setUSE("HAnimSegmentLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment599.addChildren(Shape611)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape615 = x3d.Shape()
LineSet616 = x3d.LineSet()
LineSet616.setVertexCount([2])
Coordinate617 = x3d.Coordinate()
Coordinate617.setPoint([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])

LineSet616.setCoord(Coordinate617)
ColorRGBA618 = x3d.ColorRGBA()
ColorRGBA618.setUSE("HAnimSiteLineColorRGBA")

LineSet616.setColor(ColorRGBA618)

Shape615.setGeometry(LineSet616)

HAnimSegment599.addChildren(Shape615)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape619 = x3d.Shape()
LineSet620 = x3d.LineSet()
LineSet620.setVertexCount([2])
Coordinate621 = x3d.Coordinate()
Coordinate621.setPoint([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])

LineSet620.setCoord(Coordinate621)
ColorRGBA622 = x3d.ColorRGBA()
ColorRGBA622.setUSE("HAnimSiteLineColorRGBA")

LineSet620.setColor(ColorRGBA622)

Shape619.setGeometry(LineSet620)

HAnimSegment599.addChildren(Shape619)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setName("suprasternale_pt")
HAnimSite623.setDEF("hanim_suprasternale_pt")
HAnimSite623.setTranslation([0.0084,1.4714,0.0551])
#HAnimSite visualization shape
TouchSensor624 = x3d.TouchSensor()
TouchSensor624.setDescription("HAnimSite suprasternale")

HAnimSite623.addChildren(TouchSensor624)
Shape625 = x3d.Shape()
Shape625.setUSE("HAnimSiteShape")

HAnimSite623.addChildren(Shape625)

HAnimSegment599.addChildren(HAnimSite623)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.setName("cervicale_pt")
HAnimSite626.setDEF("hanim_cervicale_pt")
HAnimSite626.setTranslation([0.0064,1.52,-0.0815])
#HAnimSite visualization shape
TouchSensor627 = x3d.TouchSensor()
TouchSensor627.setDescription("HAnimSite cervicale")

HAnimSite626.addChildren(TouchSensor627)
Shape628 = x3d.Shape()
Shape628.setUSE("HAnimSiteShape")

HAnimSite626.addChildren(Shape628)

HAnimSegment599.addChildren(HAnimSite626)

HAnimJoint598.addChildren(HAnimSegment599)
HAnimJoint629 = x3d.HAnimJoint()
HAnimJoint629.setName("vc7")
HAnimJoint629.setDEF("hanim_vc7")
HAnimJoint629.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment630 = x3d.HAnimSegment()
HAnimSegment630.setName("c7")
HAnimSegment630.setDEF("hanim_c7")
#<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
TouchSensor631 = x3d.TouchSensor()
TouchSensor631.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment630.addChildren(TouchSensor631)
Transform632 = x3d.Transform()
Transform632.setTranslation([0.0066,1.5132,-0.0301])
Shape633 = x3d.Shape()
Shape633.setUSE("HAnimJointShape")

Transform632.addChildren(Shape633)

HAnimSegment630.addChildren(Transform632)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape634 = x3d.Shape()
LineSet635 = x3d.LineSet()
LineSet635.setVertexCount([2])
Coordinate636 = x3d.Coordinate()
Coordinate636.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet635.setCoord(Coordinate636)
ColorRGBA637 = x3d.ColorRGBA()
ColorRGBA637.setUSE("HAnimSegmentLineColorRGBA")

LineSet635.setColor(ColorRGBA637)

Shape634.setGeometry(LineSet635)

HAnimSegment630.addChildren(Shape634)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape638 = x3d.Shape()
LineSet639 = x3d.LineSet()
LineSet639.setVertexCount([2])
Coordinate640 = x3d.Coordinate()
Coordinate640.setPoint([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])

LineSet639.setCoord(Coordinate640)
ColorRGBA641 = x3d.ColorRGBA()
ColorRGBA641.setUSE("HAnimSiteLineColorRGBA")

LineSet639.setColor(ColorRGBA641)

Shape638.setGeometry(LineSet639)

HAnimSegment630.addChildren(Shape638)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.setVertexCount([2])
Coordinate644 = x3d.Coordinate()
Coordinate644.setPoint([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])

LineSet643.setCoord(Coordinate644)
ColorRGBA645 = x3d.ColorRGBA()
ColorRGBA645.setUSE("HAnimSiteLineColorRGBA")

LineSet643.setColor(ColorRGBA645)

Shape642.setGeometry(LineSet643)

HAnimSegment630.addChildren(Shape642)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setName("r_neck_base_pt")
HAnimSite646.setDEF("hanim_r_neck_base_pt")
HAnimSite646.setTranslation([-0.0419,1.5149,-0.022])
#HAnimSite visualization shape
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.setDescription("HAnimSite r_neck_base")

HAnimSite646.addChildren(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.setUSE("HAnimSiteShape")

HAnimSite646.addChildren(Shape648)

HAnimSegment630.addChildren(HAnimSite646)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setName("l_neck_base_pt")
HAnimSite649.setDEF("hanim_l_neck_base_pt")
HAnimSite649.setTranslation([0.0646,1.5141,-0.038])
#HAnimSite visualization shape
TouchSensor650 = x3d.TouchSensor()
TouchSensor650.setDescription("HAnimSite l_neck_base")

HAnimSite649.addChildren(TouchSensor650)
Shape651 = x3d.Shape()
Shape651.setUSE("HAnimSiteShape")

HAnimSite649.addChildren(Shape651)

HAnimSegment630.addChildren(HAnimSite649)

HAnimJoint629.addChildren(HAnimSegment630)
HAnimJoint652 = x3d.HAnimJoint()
HAnimJoint652.setName("vc6")
HAnimJoint652.setDEF("hanim_vc6")
HAnimJoint652.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment653 = x3d.HAnimSegment()
HAnimSegment653.setName("c6")
HAnimSegment653.setDEF("hanim_c6")
#<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
TouchSensor654 = x3d.TouchSensor()
TouchSensor654.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment653.addChildren(TouchSensor654)
Transform655 = x3d.Transform()
Transform655.setTranslation([0.0066,1.5357,-0.0143])
Shape656 = x3d.Shape()
Shape656.setUSE("HAnimJointShape")

Transform655.addChildren(Shape656)

HAnimSegment653.addChildren(Transform655)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape657 = x3d.Shape()
LineSet658 = x3d.LineSet()
LineSet658.setVertexCount([2])
Coordinate659 = x3d.Coordinate()
Coordinate659.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet658.setCoord(Coordinate659)
ColorRGBA660 = x3d.ColorRGBA()
ColorRGBA660.setUSE("HAnimSegmentLineColorRGBA")

LineSet658.setColor(ColorRGBA660)

Shape657.setGeometry(LineSet658)

HAnimSegment653.addChildren(Shape657)

HAnimJoint652.addChildren(HAnimSegment653)
HAnimJoint661 = x3d.HAnimJoint()
HAnimJoint661.setName("vc5")
HAnimJoint661.setDEF("hanim_vc5")
HAnimJoint661.setCenter([0.0066,1.552,-0.0082])
HAnimSegment662 = x3d.HAnimSegment()
HAnimSegment662.setName("c5")
HAnimSegment662.setDEF("hanim_c5")
#<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
TouchSensor663 = x3d.TouchSensor()
TouchSensor663.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment662.addChildren(TouchSensor663)
Transform664 = x3d.Transform()
Transform664.setTranslation([0.0066,1.552,-0.0082])
Shape665 = x3d.Shape()
Shape665.setUSE("HAnimJointShape")

Transform664.addChildren(Shape665)

HAnimSegment662.addChildren(Transform664)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape666 = x3d.Shape()
LineSet667 = x3d.LineSet()
LineSet667.setVertexCount([2])
Coordinate668 = x3d.Coordinate()
Coordinate668.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet667.setCoord(Coordinate668)
ColorRGBA669 = x3d.ColorRGBA()
ColorRGBA669.setUSE("HAnimSegmentLineColorRGBA")

LineSet667.setColor(ColorRGBA669)

Shape666.setGeometry(LineSet667)

HAnimSegment662.addChildren(Shape666)

HAnimJoint661.addChildren(HAnimSegment662)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.setName("vc4")
HAnimJoint670.setDEF("hanim_vc4")
HAnimJoint670.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment671 = x3d.HAnimSegment()
HAnimSegment671.setName("c4")
HAnimSegment671.setDEF("hanim_c4")
#<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
TouchSensor672 = x3d.TouchSensor()
TouchSensor672.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment671.addChildren(TouchSensor672)
Transform673 = x3d.Transform()
Transform673.setTranslation([0.0066,1.5662,-0.0084])
Shape674 = x3d.Shape()
Shape674.setUSE("HAnimJointShape")

Transform673.addChildren(Shape674)

HAnimSegment671.addChildren(Transform673)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape675 = x3d.Shape()
LineSet676 = x3d.LineSet()
LineSet676.setVertexCount([2])
Coordinate677 = x3d.Coordinate()
Coordinate677.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet676.setCoord(Coordinate677)
ColorRGBA678 = x3d.ColorRGBA()
ColorRGBA678.setUSE("HAnimSegmentLineColorRGBA")

LineSet676.setColor(ColorRGBA678)

Shape675.setGeometry(LineSet676)

HAnimSegment671.addChildren(Shape675)

HAnimJoint670.addChildren(HAnimSegment671)
HAnimJoint679 = x3d.HAnimJoint()
HAnimJoint679.setName("vc3")
HAnimJoint679.setDEF("hanim_vc3")
HAnimJoint679.setCenter([0.0066,1.58,-0.0103])
HAnimSegment680 = x3d.HAnimSegment()
HAnimSegment680.setName("c3")
HAnimSegment680.setDEF("hanim_c3")
#<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
TouchSensor681 = x3d.TouchSensor()
TouchSensor681.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment680.addChildren(TouchSensor681)
Transform682 = x3d.Transform()
Transform682.setTranslation([0.0066,1.58,-0.0103])
Shape683 = x3d.Shape()
Shape683.setUSE("HAnimJointShape")

Transform682.addChildren(Shape683)

HAnimSegment680.addChildren(Transform682)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape684 = x3d.Shape()
LineSet685 = x3d.LineSet()
LineSet685.setVertexCount([2])
Coordinate686 = x3d.Coordinate()
Coordinate686.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet685.setCoord(Coordinate686)
ColorRGBA687 = x3d.ColorRGBA()
ColorRGBA687.setUSE("HAnimSegmentLineColorRGBA")

LineSet685.setColor(ColorRGBA687)

Shape684.setGeometry(LineSet685)

HAnimSegment680.addChildren(Shape684)

HAnimJoint679.addChildren(HAnimSegment680)
HAnimJoint688 = x3d.HAnimJoint()
HAnimJoint688.setName("vc2")
HAnimJoint688.setDEF("hanim_vc2")
HAnimJoint688.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.setName("c2")
HAnimSegment689.setDEF("hanim_c2")
#<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment689.addChildren(TouchSensor690)
Transform691 = x3d.Transform()
Transform691.setTranslation([0.0066,1.5928,-0.0103])
Shape692 = x3d.Shape()
Shape692.setUSE("HAnimJointShape")

Transform691.addChildren(Shape692)

HAnimSegment689.addChildren(Transform691)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape693 = x3d.Shape()
LineSet694 = x3d.LineSet()
LineSet694.setVertexCount([2])
Coordinate695 = x3d.Coordinate()
Coordinate695.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet694.setCoord(Coordinate695)
ColorRGBA696 = x3d.ColorRGBA()
ColorRGBA696.setUSE("HAnimSegmentLineColorRGBA")

LineSet694.setColor(ColorRGBA696)

Shape693.setGeometry(LineSet694)

HAnimSegment689.addChildren(Shape693)

HAnimJoint688.addChildren(HAnimSegment689)
HAnimJoint697 = x3d.HAnimJoint()
HAnimJoint697.setName("vc1")
HAnimJoint697.setDEF("hanim_vc1")
HAnimJoint697.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment698 = x3d.HAnimSegment()
HAnimSegment698.setName("c1")
HAnimSegment698.setDEF("hanim_c1")
#<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
TouchSensor699 = x3d.TouchSensor()
TouchSensor699.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment698.addChildren(TouchSensor699)
Transform700 = x3d.Transform()
Transform700.setTranslation([0.0066,1.6144,-0.0034])
Shape701 = x3d.Shape()
Shape701.setUSE("HAnimJointShape")

Transform700.addChildren(Shape701)

HAnimSegment698.addChildren(Transform700)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape702 = x3d.Shape()
LineSet703 = x3d.LineSet()
LineSet703.setVertexCount([2])
Coordinate704 = x3d.Coordinate()
Coordinate704.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet703.setCoord(Coordinate704)
ColorRGBA705 = x3d.ColorRGBA()
ColorRGBA705.setUSE("HAnimSegmentLineColorRGBA")

LineSet703.setColor(ColorRGBA705)

Shape702.setGeometry(LineSet703)

HAnimSegment698.addChildren(Shape702)

HAnimJoint697.addChildren(HAnimSegment698)
HAnimJoint706 = x3d.HAnimJoint()
HAnimJoint706.setName("skullbase")
HAnimJoint706.setDEF("hanim_skullbase")
HAnimJoint706.setCenter([0.0044,1.6209,0.0236])
HAnimSegment707 = x3d.HAnimSegment()
HAnimSegment707.setName("skull")
HAnimSegment707.setDEF("hanim_skull")
#<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
TouchSensor708 = x3d.TouchSensor()
TouchSensor708.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment707.addChildren(TouchSensor708)
Transform709 = x3d.Transform()
Transform709.setTranslation([0.0044,1.6209,0.0236])
Shape710 = x3d.Shape()
Shape710.setUSE("HAnimJointShape")

Transform709.addChildren(Shape710)

HAnimSegment707.addChildren(Transform709)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
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

HAnimSegment707.addChildren(Shape711)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape715 = x3d.Shape()
LineSet716 = x3d.LineSet()
LineSet716.setVertexCount([2])
Coordinate717 = x3d.Coordinate()
Coordinate717.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet716.setCoord(Coordinate717)
ColorRGBA718 = x3d.ColorRGBA()
ColorRGBA718.setUSE("HAnimSegmentLineColorRGBA")

LineSet716.setColor(ColorRGBA718)

Shape715.setGeometry(LineSet716)

HAnimSegment707.addChildren(Shape715)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape719 = x3d.Shape()
LineSet720 = x3d.LineSet()
LineSet720.setVertexCount([2])
Coordinate721 = x3d.Coordinate()
Coordinate721.setPoint([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])

LineSet720.setCoord(Coordinate721)
ColorRGBA722 = x3d.ColorRGBA()
ColorRGBA722.setUSE("HAnimSegmentLineColorRGBA")

LineSet720.setColor(ColorRGBA722)

Shape719.setGeometry(LineSet720)

HAnimSegment707.addChildren(Shape719)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
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

HAnimSegment707.addChildren(Shape723)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape727 = x3d.Shape()
LineSet728 = x3d.LineSet()
LineSet728.setVertexCount([2])
Coordinate729 = x3d.Coordinate()
Coordinate729.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet728.setCoord(Coordinate729)
ColorRGBA730 = x3d.ColorRGBA()
ColorRGBA730.setUSE("HAnimSegmentLineColorRGBA")

LineSet728.setColor(ColorRGBA730)

Shape727.setGeometry(LineSet728)

HAnimSegment707.addChildren(Shape727)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.setVertexCount([2])
Coordinate733 = x3d.Coordinate()
Coordinate733.setPoint([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])

LineSet732.setCoord(Coordinate733)
ColorRGBA734 = x3d.ColorRGBA()
ColorRGBA734.setUSE("HAnimSegmentLineColorRGBA")

LineSet732.setColor(ColorRGBA734)

Shape731.setGeometry(LineSet732)

HAnimSegment707.addChildren(Shape731)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape735 = x3d.Shape()
LineSet736 = x3d.LineSet()
LineSet736.setVertexCount([2])
Coordinate737 = x3d.Coordinate()
Coordinate737.setPoint([0.0044,1.6209,0.0236,0,1.63,0.015])

LineSet736.setCoord(Coordinate737)
ColorRGBA738 = x3d.ColorRGBA()
ColorRGBA738.setUSE("HAnimSegmentLineColorRGBA")

LineSet736.setColor(ColorRGBA738)

Shape735.setGeometry(LineSet736)

HAnimSegment707.addChildren(Shape735)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.setVertexCount([2])
Coordinate741 = x3d.Coordinate()
Coordinate741.setPoint([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])

LineSet740.setCoord(Coordinate741)
ColorRGBA742 = x3d.ColorRGBA()
ColorRGBA742.setUSE("HAnimSiteLineColorRGBA")

LineSet740.setColor(ColorRGBA742)

Shape739.setGeometry(LineSet740)

HAnimSegment707.addChildren(Shape739)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape743 = x3d.Shape()
LineSet744 = x3d.LineSet()
LineSet744.setVertexCount([2])
Coordinate745 = x3d.Coordinate()
Coordinate745.setPoint([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])

LineSet744.setCoord(Coordinate745)
ColorRGBA746 = x3d.ColorRGBA()
ColorRGBA746.setUSE("HAnimSiteLineColorRGBA")

LineSet744.setColor(ColorRGBA746)

Shape743.setGeometry(LineSet744)

HAnimSegment707.addChildren(Shape743)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape747 = x3d.Shape()
LineSet748 = x3d.LineSet()
LineSet748.setVertexCount([2])
Coordinate749 = x3d.Coordinate()
Coordinate749.setPoint([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])

LineSet748.setCoord(Coordinate749)
ColorRGBA750 = x3d.ColorRGBA()
ColorRGBA750.setUSE("HAnimSiteLineColorRGBA")

LineSet748.setColor(ColorRGBA750)

Shape747.setGeometry(LineSet748)

HAnimSegment707.addChildren(Shape747)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape751 = x3d.Shape()
LineSet752 = x3d.LineSet()
LineSet752.setVertexCount([2])
Coordinate753 = x3d.Coordinate()
Coordinate753.setPoint([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])

LineSet752.setCoord(Coordinate753)
ColorRGBA754 = x3d.ColorRGBA()
ColorRGBA754.setUSE("HAnimSiteLineColorRGBA")

LineSet752.setColor(ColorRGBA754)

Shape751.setGeometry(LineSet752)

HAnimSegment707.addChildren(Shape751)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape755 = x3d.Shape()
LineSet756 = x3d.LineSet()
LineSet756.setVertexCount([2])
Coordinate757 = x3d.Coordinate()
Coordinate757.setPoint([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])

LineSet756.setCoord(Coordinate757)
ColorRGBA758 = x3d.ColorRGBA()
ColorRGBA758.setUSE("HAnimSiteLineColorRGBA")

LineSet756.setColor(ColorRGBA758)

Shape755.setGeometry(LineSet756)

HAnimSegment707.addChildren(Shape755)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape759 = x3d.Shape()
LineSet760 = x3d.LineSet()
LineSet760.setVertexCount([2])
Coordinate761 = x3d.Coordinate()
Coordinate761.setPoint([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])

LineSet760.setCoord(Coordinate761)
ColorRGBA762 = x3d.ColorRGBA()
ColorRGBA762.setUSE("HAnimSiteLineColorRGBA")

LineSet760.setColor(ColorRGBA762)

Shape759.setGeometry(LineSet760)

HAnimSegment707.addChildren(Shape759)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape763 = x3d.Shape()
LineSet764 = x3d.LineSet()
LineSet764.setVertexCount([2])
Coordinate765 = x3d.Coordinate()
Coordinate765.setPoint([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])

LineSet764.setCoord(Coordinate765)
ColorRGBA766 = x3d.ColorRGBA()
ColorRGBA766.setUSE("HAnimSiteLineColorRGBA")

LineSet764.setColor(ColorRGBA766)

Shape763.setGeometry(LineSet764)

HAnimSegment707.addChildren(Shape763)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape767 = x3d.Shape()
LineSet768 = x3d.LineSet()
LineSet768.setVertexCount([2])
Coordinate769 = x3d.Coordinate()
Coordinate769.setPoint([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])

LineSet768.setCoord(Coordinate769)
ColorRGBA770 = x3d.ColorRGBA()
ColorRGBA770.setUSE("HAnimSiteLineColorRGBA")

LineSet768.setColor(ColorRGBA770)

Shape767.setGeometry(LineSet768)

HAnimSegment707.addChildren(Shape767)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape771 = x3d.Shape()
LineSet772 = x3d.LineSet()
LineSet772.setVertexCount([2])
Coordinate773 = x3d.Coordinate()
Coordinate773.setPoint([0.0044,1.6209,0.0236,0.0631,1.553,0.033])

LineSet772.setCoord(Coordinate773)
ColorRGBA774 = x3d.ColorRGBA()
ColorRGBA774.setUSE("HAnimSiteLineColorRGBA")

LineSet772.setColor(ColorRGBA774)

Shape771.setGeometry(LineSet772)

HAnimSegment707.addChildren(Shape771)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.setVertexCount([2])
Coordinate777 = x3d.Coordinate()
Coordinate777.setPoint([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])

LineSet776.setCoord(Coordinate777)
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.setUSE("HAnimSiteLineColorRGBA")

LineSet776.setColor(ColorRGBA778)

Shape775.setGeometry(LineSet776)

HAnimSegment707.addChildren(Shape775)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.setName("skull_tip")
HAnimSite779.setDEF("hanim_skull_tip")
HAnimSite779.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry
#HAnimSite visualization shape
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.setDescription("HAnimSite skull_tip")

HAnimSite779.addChildren(TouchSensor780)
Shape781 = x3d.Shape()
Shape781.setUSE("HAnimSiteShape")

HAnimSite779.addChildren(Shape781)

HAnimSegment707.addChildren(HAnimSite779)
HAnimSite782 = x3d.HAnimSite()
HAnimSite782.setName("sellion_pt")
HAnimSite782.setDEF("hanim_sellion_pt")
HAnimSite782.setTranslation([0.0058,1.6316,0.0852])
#HAnimSite visualization shape
TouchSensor783 = x3d.TouchSensor()
TouchSensor783.setDescription("HAnimSite sellion")

HAnimSite782.addChildren(TouchSensor783)
Shape784 = x3d.Shape()
Shape784.setUSE("HAnimSiteShape")

HAnimSite782.addChildren(Shape784)

HAnimSegment707.addChildren(HAnimSite782)
HAnimSite785 = x3d.HAnimSite()
HAnimSite785.setName("r_infraorbitale_pt")
HAnimSite785.setDEF("hanim_r_infraorbitale_pt")
HAnimSite785.setTranslation([-0.0237,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.setDescription("HAnimSite r_infraorbitale")

HAnimSite785.addChildren(TouchSensor786)
Shape787 = x3d.Shape()
Shape787.setUSE("HAnimSiteShape")

HAnimSite785.addChildren(Shape787)

HAnimSegment707.addChildren(HAnimSite785)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.setName("l_infraorbitale_pt")
HAnimSite788.setDEF("hanim_l_infraorbitale_pt")
HAnimSite788.setTranslation([0.0341,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.setDescription("HAnimSite l_infraorbitale")

HAnimSite788.addChildren(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.setUSE("HAnimSiteShape")

HAnimSite788.addChildren(Shape790)

HAnimSegment707.addChildren(HAnimSite788)
HAnimSite791 = x3d.HAnimSite()
HAnimSite791.setName("supramenton_pt")
HAnimSite791.setDEF("hanim_supramenton_pt")
HAnimSite791.setTranslation([0.0061,1.541,0.0805])
#HAnimSite visualization shape
TouchSensor792 = x3d.TouchSensor()
TouchSensor792.setDescription("HAnimSite supramenton")

HAnimSite791.addChildren(TouchSensor792)
Shape793 = x3d.Shape()
Shape793.setUSE("HAnimSiteShape")

HAnimSite791.addChildren(Shape793)

HAnimSegment707.addChildren(HAnimSite791)
HAnimSite794 = x3d.HAnimSite()
HAnimSite794.setName("r_tragion_pt")
HAnimSite794.setDEF("hanim_r_tragion_pt")
HAnimSite794.setTranslation([-0.0646,1.6347,0.0302])
#HAnimSite visualization shape
TouchSensor795 = x3d.TouchSensor()
TouchSensor795.setDescription("HAnimSite r_tragion")

HAnimSite794.addChildren(TouchSensor795)
Shape796 = x3d.Shape()
Shape796.setUSE("HAnimSiteShape")

HAnimSite794.addChildren(Shape796)

HAnimSegment707.addChildren(HAnimSite794)
HAnimSite797 = x3d.HAnimSite()
HAnimSite797.setName("r_gonion_pt")
HAnimSite797.setDEF("hanim_r_gonion_pt")
HAnimSite797.setTranslation([-0.052,1.5529,0.0347])
#HAnimSite visualization shape
TouchSensor798 = x3d.TouchSensor()
TouchSensor798.setDescription("HAnimSite r_gonion")

HAnimSite797.addChildren(TouchSensor798)
Shape799 = x3d.Shape()
Shape799.setUSE("HAnimSiteShape")

HAnimSite797.addChildren(Shape799)

HAnimSegment707.addChildren(HAnimSite797)
HAnimSite800 = x3d.HAnimSite()
HAnimSite800.setName("l_tragion_pt")
HAnimSite800.setDEF("hanim_l_tragion_pt")
HAnimSite800.setTranslation([0.0739,1.6348,0.0282])
#HAnimSite visualization shape
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.setDescription("HAnimSite l_tragion")

HAnimSite800.addChildren(TouchSensor801)
Shape802 = x3d.Shape()
Shape802.setUSE("HAnimSiteShape")

HAnimSite800.addChildren(Shape802)

HAnimSegment707.addChildren(HAnimSite800)
HAnimSite803 = x3d.HAnimSite()
HAnimSite803.setName("l_gonion_pt")
HAnimSite803.setDEF("hanim_l_gonion_pt")
HAnimSite803.setTranslation([0.0631,1.553,0.033])
#HAnimSite visualization shape
TouchSensor804 = x3d.TouchSensor()
TouchSensor804.setDescription("HAnimSite l_gonion")

HAnimSite803.addChildren(TouchSensor804)
Shape805 = x3d.Shape()
Shape805.setUSE("HAnimSiteShape")

HAnimSite803.addChildren(Shape805)

HAnimSegment707.addChildren(HAnimSite803)
HAnimSite806 = x3d.HAnimSite()
HAnimSite806.setName("nuchale_pt")
HAnimSite806.setDEF("hanim_nuchale_pt")
HAnimSite806.setTranslation([0.0039,1.5972,-0.0796])
#HAnimSite visualization shape
TouchSensor807 = x3d.TouchSensor()
TouchSensor807.setDescription("HAnimSite nuchale")

HAnimSite806.addChildren(TouchSensor807)
Shape808 = x3d.Shape()
Shape808.setUSE("HAnimSiteShape")

HAnimSite806.addChildren(Shape808)

HAnimSegment707.addChildren(HAnimSite806)

HAnimJoint706.addChildren(HAnimSegment707)
HAnimJoint809 = x3d.HAnimJoint()
HAnimJoint809.setName("l_eyeball_joint")
HAnimJoint809.setDEF("hanim_l_eyeball_joint")
HAnimJoint809.setCenter([0.0336,1.6332,0.0502])
HAnimSegment810 = x3d.HAnimSegment()
HAnimSegment810.setName("l_eyeball")
HAnimSegment810.setDEF("hanim_l_eyeball")
#<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor811 = x3d.TouchSensor()
TouchSensor811.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment810.addChildren(TouchSensor811)
Transform812 = x3d.Transform()
Transform812.setTranslation([0.0336,1.6332,0.0502])
Shape813 = x3d.Shape()
Shape813.setUSE("HAnimJointShape")

Transform812.addChildren(Shape813)

HAnimSegment810.addChildren(Transform812)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape814 = x3d.Shape()
LineSet815 = x3d.LineSet()
LineSet815.setVertexCount([2])
Coordinate816 = x3d.Coordinate()
Coordinate816.setPoint([0.0336,1.6332,0.0502,0.034,1.64,0.05])

LineSet815.setCoord(Coordinate816)
ColorRGBA817 = x3d.ColorRGBA()
ColorRGBA817.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA817.setColor([0,0,1,1,0,0,1,0.1])

LineSet815.setColor(ColorRGBA817)

Shape814.setGeometry(LineSet815)

HAnimSegment810.addChildren(Shape814)
HAnimSite818 = x3d.HAnimSite()
HAnimSite818.setName("l_eyeball_site_view")
HAnimSite818.setDEF("hanim_l_eyeball_site_view")
HAnimSite818.setTranslation([0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor819 = x3d.TouchSensor()
TouchSensor819.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite818.addChildren(TouchSensor819)
Shape820 = x3d.Shape()
Shape820.setUSE("HAnimSiteShape")

HAnimSite818.addChildren(Shape820)
Viewpoint821 = x3d.Viewpoint()
Viewpoint821.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint821.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint821.setOrientation([0,1,0,3.141593])
Viewpoint821.setPosition([0,0,0])

HAnimSite818.addChildren(Viewpoint821)
#HAnimSite/Viewpoint visualization shape
Anchor822 = x3d.Anchor()
Anchor822.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor822.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD823 = x3d.LOD()
LOD823.setForceTransitions(True)
LOD823.setRange([0.04])
WorldInfo824 = x3d.WorldInfo()
WorldInfo824.setInfo(["hide diamond when close"])

LOD823.addChildren(WorldInfo824)
Shape825 = x3d.Shape()
Shape825.setDEF("HAnimSiteViewpointShape")
IndexedFaceSet826 = x3d.IndexedFaceSet()
IndexedFaceSet826.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet826.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet826.setCreaseAngle(0.5)
Coordinate827 = x3d.Coordinate()
Coordinate827.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet826.setCoord(Coordinate827)

Shape825.setGeometry(IndexedFaceSet826)
Appearance828 = x3d.Appearance()
Material829 = x3d.Material()
Material829.setDiffuseColor([0,0,1])
Material829.setTransparency(0.6)

Appearance828.setMaterial(Material829)

Shape825.setAppearance(Appearance828)

LOD823.addChildren(Shape825)

Anchor822.addChildren(LOD823)

HAnimSite818.addChildren(Anchor822)

HAnimSegment810.addChildren(HAnimSite818)

HAnimJoint809.addChildren(HAnimSegment810)

HAnimJoint706.addChildren(HAnimJoint809)
HAnimJoint830 = x3d.HAnimJoint()
HAnimJoint830.setName("l_eyelid_joint")
HAnimJoint830.setDEF("hanim_l_eyelid_joint")
HAnimJoint830.setCenter([0.0336,1.6332,0.0502])
HAnimSegment831 = x3d.HAnimSegment()
HAnimSegment831.setName("l_eyelid")
HAnimSegment831.setDEF("hanim_l_eyelid")
#<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor832 = x3d.TouchSensor()
TouchSensor832.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment831.addChildren(TouchSensor832)
Transform833 = x3d.Transform()
Transform833.setTranslation([0.0336,1.6332,0.0502])
Shape834 = x3d.Shape()
Shape834.setUSE("HAnimJointShape")

Transform833.addChildren(Shape834)

HAnimSegment831.addChildren(Transform833)

HAnimJoint830.addChildren(HAnimSegment831)

HAnimJoint706.addChildren(HAnimJoint830)
HAnimJoint835 = x3d.HAnimJoint()
HAnimJoint835.setName("l_eyebrow_joint")
HAnimJoint835.setDEF("hanim_l_eyebrow_joint")
HAnimJoint835.setCenter([0.0336,1.635,0.0506])
HAnimSegment836 = x3d.HAnimSegment()
HAnimSegment836.setName("l_eyebrow")
HAnimSegment836.setDEF("hanim_l_eyebrow")
#<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor837 = x3d.TouchSensor()
TouchSensor837.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment836.addChildren(TouchSensor837)
Transform838 = x3d.Transform()
Transform838.setTranslation([0.0336,1.635,0.0506])
Shape839 = x3d.Shape()
Shape839.setUSE("HAnimJointShape")

Transform838.addChildren(Shape839)

HAnimSegment836.addChildren(Transform838)

HAnimJoint835.addChildren(HAnimSegment836)

HAnimJoint706.addChildren(HAnimJoint835)
HAnimJoint840 = x3d.HAnimJoint()
HAnimJoint840.setName("r_eyeball_joint")
HAnimJoint840.setDEF("hanim_r_eyeball_joint")
HAnimJoint840.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment841 = x3d.HAnimSegment()
HAnimSegment841.setName("r_eyeball")
HAnimSegment841.setDEF("hanim_r_eyeball")
#<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor842 = x3d.TouchSensor()
TouchSensor842.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment841.addChildren(TouchSensor842)
Transform843 = x3d.Transform()
Transform843.setTranslation([-0.0336,1.6332,0.0502])
Shape844 = x3d.Shape()
Shape844.setUSE("HAnimJointShape")

Transform843.addChildren(Shape844)

HAnimSegment841.addChildren(Transform843)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape845 = x3d.Shape()
LineSet846 = x3d.LineSet()
LineSet846.setVertexCount([2])
Coordinate847 = x3d.Coordinate()
Coordinate847.setPoint([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])

LineSet846.setCoord(Coordinate847)
ColorRGBA848 = x3d.ColorRGBA()
ColorRGBA848.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet846.setColor(ColorRGBA848)

Shape845.setGeometry(LineSet846)

HAnimSegment841.addChildren(Shape845)
HAnimSite849 = x3d.HAnimSite()
HAnimSite849.setName("r_eyeball_site_view")
HAnimSite849.setDEF("hanim_r_eyeball_site_view")
HAnimSite849.setTranslation([-0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor850 = x3d.TouchSensor()
TouchSensor850.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite849.addChildren(TouchSensor850)
Shape851 = x3d.Shape()
Shape851.setUSE("HAnimSiteShape")

HAnimSite849.addChildren(Shape851)
Viewpoint852 = x3d.Viewpoint()
Viewpoint852.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint852.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint852.setOrientation([0,1,0,3.141593])
Viewpoint852.setPosition([0,0,0])

HAnimSite849.addChildren(Viewpoint852)
#HAnimSite/Viewpoint visualization shape
Anchor853 = x3d.Anchor()
Anchor853.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor853.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD854 = x3d.LOD()
LOD854.setForceTransitions(True)
LOD854.setRange([0.04])
WorldInfo855 = x3d.WorldInfo()
WorldInfo855.setInfo(["hide diamond when close"])

LOD854.addChildren(WorldInfo855)
Shape856 = x3d.Shape()
Shape856.setUSE("HAnimSiteViewpointShape")

LOD854.addChildren(Shape856)

Anchor853.addChildren(LOD854)

HAnimSite849.addChildren(Anchor853)

HAnimSegment841.addChildren(HAnimSite849)

HAnimJoint840.addChildren(HAnimSegment841)

HAnimJoint706.addChildren(HAnimJoint840)
HAnimJoint857 = x3d.HAnimJoint()
HAnimJoint857.setName("r_eyelid_joint")
HAnimJoint857.setDEF("hanim_r_eyelid_joint")
HAnimJoint857.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment858 = x3d.HAnimSegment()
HAnimSegment858.setName("r_eyelid")
HAnimSegment858.setDEF("hanim_r_eyelid")
#<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor859 = x3d.TouchSensor()
TouchSensor859.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment858.addChildren(TouchSensor859)
Transform860 = x3d.Transform()
Transform860.setTranslation([-0.0336,1.6332,0.0502])
Shape861 = x3d.Shape()
Shape861.setUSE("HAnimJointShape")

Transform860.addChildren(Shape861)

HAnimSegment858.addChildren(Transform860)

HAnimJoint857.addChildren(HAnimSegment858)

HAnimJoint706.addChildren(HAnimJoint857)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.setName("r_eyebrow_joint")
HAnimJoint862.setDEF("hanim_r_eyebrow_joint")
HAnimJoint862.setCenter([-0.0336,1.635,0.0506])
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.setName("r_eyebrow")
HAnimSegment863.setDEF("hanim_r_eyebrow")
#<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor864 = x3d.TouchSensor()
TouchSensor864.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment863.addChildren(TouchSensor864)
Transform865 = x3d.Transform()
Transform865.setTranslation([-0.0336,1.635,0.0506])
Shape866 = x3d.Shape()
Shape866.setUSE("HAnimJointShape")

Transform865.addChildren(Shape866)

HAnimSegment863.addChildren(Transform865)

HAnimJoint862.addChildren(HAnimSegment863)

HAnimJoint706.addChildren(HAnimJoint862)
HAnimJoint867 = x3d.HAnimJoint()
HAnimJoint867.setName("temporomandibular")
HAnimJoint867.setDEF("hanim_temporomandibular")
HAnimJoint867.setCenter([0,1.63,0.015])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment868 = x3d.HAnimSegment()
HAnimSegment868.setName("jaw")
HAnimSegment868.setDEF("hanim_jaw")
#<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
TouchSensor869 = x3d.TouchSensor()
TouchSensor869.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment868.addChildren(TouchSensor869)
Transform870 = x3d.Transform()
Transform870.setTranslation([0,1.63,0.015])
Shape871 = x3d.Shape()
Shape871.setUSE("HAnimJointShape")

Transform870.addChildren(Shape871)

HAnimSegment868.addChildren(Transform870)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape872 = x3d.Shape()
LineSet873 = x3d.LineSet()
LineSet873.setVertexCount([2])
Coordinate874 = x3d.Coordinate()
Coordinate874.setPoint([0,1.63,0.015,0.045,1.63,0])

LineSet873.setCoord(Coordinate874)
ColorRGBA875 = x3d.ColorRGBA()
ColorRGBA875.setUSE("HAnimSiteLineColorRGBA")

LineSet873.setColor(ColorRGBA875)

Shape872.setGeometry(LineSet873)

HAnimSegment868.addChildren(Shape872)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape876 = x3d.Shape()
LineSet877 = x3d.LineSet()
LineSet877.setVertexCount([2])
Coordinate878 = x3d.Coordinate()
Coordinate878.setPoint([0,1.63,0.015,-0.045,1.63,0])

LineSet877.setCoord(Coordinate878)
ColorRGBA879 = x3d.ColorRGBA()
ColorRGBA879.setUSE("HAnimSiteLineColorRGBA")

LineSet877.setColor(ColorRGBA879)

Shape876.setGeometry(LineSet877)

HAnimSegment868.addChildren(Shape876)
HAnimSite880 = x3d.HAnimSite()
HAnimSite880.setName("temporomandibular_l_site_pt")
HAnimSite880.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite880.setTranslation([0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor881 = x3d.TouchSensor()
TouchSensor881.setDescription("HAnimSite temporomandibular_l_site")

HAnimSite880.addChildren(TouchSensor881)
Shape882 = x3d.Shape()
Shape882.setUSE("HAnimSiteShape")

HAnimSite880.addChildren(Shape882)

HAnimSegment868.addChildren(HAnimSite880)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setName("temporomandibular_r_site_pt")
HAnimSite883.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite883.setTranslation([-0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.setDescription("HAnimSite temporomandibular_r_site")

HAnimSite883.addChildren(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.setUSE("HAnimSiteShape")

HAnimSite883.addChildren(Shape885)

HAnimSegment868.addChildren(HAnimSite883)

HAnimJoint867.addChildren(HAnimSegment868)

HAnimJoint706.addChildren(HAnimJoint867)

HAnimJoint697.addChildren(HAnimJoint706)

HAnimJoint688.addChildren(HAnimJoint697)

HAnimJoint679.addChildren(HAnimJoint688)

HAnimJoint670.addChildren(HAnimJoint679)

HAnimJoint661.addChildren(HAnimJoint670)

HAnimJoint652.addChildren(HAnimJoint661)

HAnimJoint629.addChildren(HAnimJoint652)

HAnimJoint598.addChildren(HAnimJoint629)
HAnimJoint886 = x3d.HAnimJoint()
HAnimJoint886.setName("l_sternoclavicular")
HAnimJoint886.setDEF("hanim_l_sternoclavicular")
HAnimJoint886.setCenter([0.082,1.4488,-0.0353])
HAnimSegment887 = x3d.HAnimSegment()
HAnimSegment887.setName("l_clavicle")
HAnimSegment887.setDEF("hanim_l_clavicle")
#<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor888 = x3d.TouchSensor()
TouchSensor888.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment887.addChildren(TouchSensor888)
Transform889 = x3d.Transform()
Transform889.setTranslation([0.082,1.4488,-0.0353])
Shape890 = x3d.Shape()
Shape890.setUSE("HAnimJointShape")

Transform889.addChildren(Shape890)

HAnimSegment887.addChildren(Transform889)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape891 = x3d.Shape()
LineSet892 = x3d.LineSet()
LineSet892.setVertexCount([2])
Coordinate893 = x3d.Coordinate()
Coordinate893.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet892.setCoord(Coordinate893)
ColorRGBA894 = x3d.ColorRGBA()
ColorRGBA894.setUSE("HAnimSegmentLineColorRGBA")

LineSet892.setColor(ColorRGBA894)

Shape891.setGeometry(LineSet892)

HAnimSegment887.addChildren(Shape891)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape895 = x3d.Shape()
LineSet896 = x3d.LineSet()
LineSet896.setVertexCount([2])
Coordinate897 = x3d.Coordinate()
Coordinate897.setPoint([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])

LineSet896.setCoord(Coordinate897)
ColorRGBA898 = x3d.ColorRGBA()
ColorRGBA898.setUSE("HAnimSiteLineColorRGBA")

LineSet896.setColor(ColorRGBA898)

Shape895.setGeometry(LineSet896)

HAnimSegment887.addChildren(Shape895)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape899 = x3d.Shape()
LineSet900 = x3d.LineSet()
LineSet900.setVertexCount([2])
Coordinate901 = x3d.Coordinate()
Coordinate901.setPoint([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])

LineSet900.setCoord(Coordinate901)
ColorRGBA902 = x3d.ColorRGBA()
ColorRGBA902.setUSE("HAnimSiteLineColorRGBA")

LineSet900.setColor(ColorRGBA902)

Shape899.setGeometry(LineSet900)

HAnimSegment887.addChildren(Shape899)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape903 = x3d.Shape()
LineSet904 = x3d.LineSet()
LineSet904.setVertexCount([2])
Coordinate905 = x3d.Coordinate()
Coordinate905.setPoint([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])

LineSet904.setCoord(Coordinate905)
ColorRGBA906 = x3d.ColorRGBA()
ColorRGBA906.setUSE("HAnimSiteLineColorRGBA")

LineSet904.setColor(ColorRGBA906)

Shape903.setGeometry(LineSet904)

HAnimSegment887.addChildren(Shape903)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape907 = x3d.Shape()
LineSet908 = x3d.LineSet()
LineSet908.setVertexCount([2])
Coordinate909 = x3d.Coordinate()
Coordinate909.setPoint([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])

LineSet908.setCoord(Coordinate909)
ColorRGBA910 = x3d.ColorRGBA()
ColorRGBA910.setUSE("HAnimSiteLineColorRGBA")

LineSet908.setColor(ColorRGBA910)

Shape907.setGeometry(LineSet908)

HAnimSegment887.addChildren(Shape907)
HAnimSite911 = x3d.HAnimSite()
HAnimSite911.setName("l_clavicale_pt")
HAnimSite911.setDEF("hanim_l_clavicale_pt")
HAnimSite911.setTranslation([0.0271,1.4943,0.0394])
#HAnimSite visualization shape
TouchSensor912 = x3d.TouchSensor()
TouchSensor912.setDescription("HAnimSite l_clavicale")

HAnimSite911.addChildren(TouchSensor912)
Shape913 = x3d.Shape()
Shape913.setUSE("HAnimSiteShape")

HAnimSite911.addChildren(Shape913)

HAnimSegment887.addChildren(HAnimSite911)
HAnimSite914 = x3d.HAnimSite()
HAnimSite914.setName("l_acromion_pt")
HAnimSite914.setDEF("hanim_l_acromion_pt")
HAnimSite914.setTranslation([0.2032,1.476,-0.049])
#HAnimSite visualization shape
TouchSensor915 = x3d.TouchSensor()
TouchSensor915.setDescription("HAnimSite l_acromion")

HAnimSite914.addChildren(TouchSensor915)
Shape916 = x3d.Shape()
Shape916.setUSE("HAnimSiteShape")

HAnimSite914.addChildren(Shape916)

HAnimSegment887.addChildren(HAnimSite914)
HAnimSite917 = x3d.HAnimSite()
HAnimSite917.setName("l_axilla_ant_pt")
HAnimSite917.setDEF("hanim_l_axilla_ant_pt")
HAnimSite917.setTranslation([0.1777,1.4065,-0.0075])
#HAnimSite visualization shape
TouchSensor918 = x3d.TouchSensor()
TouchSensor918.setDescription("HAnimSite l_axilla_ant")

HAnimSite917.addChildren(TouchSensor918)
Shape919 = x3d.Shape()
Shape919.setUSE("HAnimSiteShape")

HAnimSite917.addChildren(Shape919)

HAnimSegment887.addChildren(HAnimSite917)
HAnimSite920 = x3d.HAnimSite()
HAnimSite920.setName("l_axilla_post_pt")
HAnimSite920.setDEF("hanim_l_axilla_post_pt")
HAnimSite920.setTranslation([0.1706,1.4072,-0.0875])
#HAnimSite visualization shape
TouchSensor921 = x3d.TouchSensor()
TouchSensor921.setDescription("HAnimSite l_axilla_post")

HAnimSite920.addChildren(TouchSensor921)
Shape922 = x3d.Shape()
Shape922.setUSE("HAnimSiteShape")

HAnimSite920.addChildren(Shape922)

HAnimSegment887.addChildren(HAnimSite920)

HAnimJoint886.addChildren(HAnimSegment887)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.setName("l_acromioclavicular")
HAnimJoint923.setDEF("hanim_l_acromioclavicular")
HAnimJoint923.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment924 = x3d.HAnimSegment()
HAnimSegment924.setName("l_scapula")
HAnimSegment924.setDEF("hanim_l_scapula")
#<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
TouchSensor925 = x3d.TouchSensor()
TouchSensor925.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment924.addChildren(TouchSensor925)
Transform926 = x3d.Transform()
Transform926.setTranslation([0.0962,1.4269,-0.0424])
Shape927 = x3d.Shape()
Shape927.setUSE("HAnimJointShape")

Transform926.addChildren(Shape927)

HAnimSegment924.addChildren(Transform926)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape928 = x3d.Shape()
LineSet929 = x3d.LineSet()
LineSet929.setVertexCount([2])
Coordinate930 = x3d.Coordinate()
Coordinate930.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet929.setCoord(Coordinate930)
ColorRGBA931 = x3d.ColorRGBA()
ColorRGBA931.setUSE("HAnimSegmentLineColorRGBA")

LineSet929.setColor(ColorRGBA931)

Shape928.setGeometry(LineSet929)

HAnimSegment924.addChildren(Shape928)

HAnimJoint923.addChildren(HAnimSegment924)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setName("l_shoulder")
HAnimJoint932.setDEF("hanim_l_shoulder")
HAnimJoint932.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment933 = x3d.HAnimSegment()
HAnimSegment933.setName("l_upperarm")
HAnimSegment933.setDEF("hanim_l_upperarm")
#<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor934 = x3d.TouchSensor()
TouchSensor934.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment933.addChildren(TouchSensor934)
Transform935 = x3d.Transform()
Transform935.setTranslation([0.2029,1.4376,-0.0387])
Shape936 = x3d.Shape()
Shape936.setUSE("HAnimJointShape")

Transform935.addChildren(Shape936)

HAnimSegment933.addChildren(Transform935)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape937 = x3d.Shape()
LineSet938 = x3d.LineSet()
LineSet938.setVertexCount([2])
Coordinate939 = x3d.Coordinate()
Coordinate939.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet938.setCoord(Coordinate939)
ColorRGBA940 = x3d.ColorRGBA()
ColorRGBA940.setUSE("HAnimSegmentLineColorRGBA")

LineSet938.setColor(ColorRGBA940)

Shape937.setGeometry(LineSet938)

HAnimSegment933.addChildren(Shape937)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape941 = x3d.Shape()
LineSet942 = x3d.LineSet()
LineSet942.setVertexCount([2])
Coordinate943 = x3d.Coordinate()
Coordinate943.setPoint([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])

LineSet942.setCoord(Coordinate943)
ColorRGBA944 = x3d.ColorRGBA()
ColorRGBA944.setUSE("HAnimSiteLineColorRGBA")

LineSet942.setColor(ColorRGBA944)

Shape941.setGeometry(LineSet942)

HAnimSegment933.addChildren(Shape941)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.setName("l_humeral_lateral_epicn_pt")
HAnimSite945.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite945.setTranslation([0.228,1.1482,-0.11])
#HAnimSite visualization shape
TouchSensor946 = x3d.TouchSensor()
TouchSensor946.setDescription("HAnimSite l_humeral_lateral_epicn")

HAnimSite945.addChildren(TouchSensor946)
Shape947 = x3d.Shape()
Shape947.setUSE("HAnimSiteShape")

HAnimSite945.addChildren(Shape947)

HAnimSegment933.addChildren(HAnimSite945)

HAnimJoint932.addChildren(HAnimSegment933)
HAnimJoint948 = x3d.HAnimJoint()
HAnimJoint948.setName("l_elbow")
HAnimJoint948.setDEF("hanim_l_elbow")
HAnimJoint948.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment949 = x3d.HAnimSegment()
HAnimSegment949.setName("l_forearm")
HAnimSegment949.setDEF("hanim_l_forearm")
#<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
TouchSensor950 = x3d.TouchSensor()
TouchSensor950.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment949.addChildren(TouchSensor950)
Transform951 = x3d.Transform()
Transform951.setTranslation([0.2014,1.1357,-0.0682])
Shape952 = x3d.Shape()
Shape952.setUSE("HAnimJointShape")

Transform951.addChildren(Shape952)

HAnimSegment949.addChildren(Transform951)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape953 = x3d.Shape()
LineSet954 = x3d.LineSet()
LineSet954.setVertexCount([2])
Coordinate955 = x3d.Coordinate()
Coordinate955.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet954.setCoord(Coordinate955)
ColorRGBA956 = x3d.ColorRGBA()
ColorRGBA956.setUSE("HAnimSegmentLineColorRGBA")

LineSet954.setColor(ColorRGBA956)

Shape953.setGeometry(LineSet954)

HAnimSegment949.addChildren(Shape953)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.setVertexCount([2])
Coordinate959 = x3d.Coordinate()
Coordinate959.setPoint([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])

LineSet958.setCoord(Coordinate959)
ColorRGBA960 = x3d.ColorRGBA()
ColorRGBA960.setUSE("HAnimSiteLineColorRGBA")

LineSet958.setColor(ColorRGBA960)

Shape957.setGeometry(LineSet958)

HAnimSegment949.addChildren(Shape957)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape961 = x3d.Shape()
LineSet962 = x3d.LineSet()
LineSet962.setVertexCount([2])
Coordinate963 = x3d.Coordinate()
Coordinate963.setPoint([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])

LineSet962.setCoord(Coordinate963)
ColorRGBA964 = x3d.ColorRGBA()
ColorRGBA964.setUSE("HAnimSiteLineColorRGBA")

LineSet962.setColor(ColorRGBA964)

Shape961.setGeometry(LineSet962)

HAnimSegment949.addChildren(Shape961)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.setVertexCount([2])
Coordinate967 = x3d.Coordinate()
Coordinate967.setPoint([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])

LineSet966.setCoord(Coordinate967)
ColorRGBA968 = x3d.ColorRGBA()
ColorRGBA968.setUSE("HAnimSiteLineColorRGBA")

LineSet966.setColor(ColorRGBA968)

Shape965.setGeometry(LineSet966)

HAnimSegment949.addChildren(Shape965)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape969 = x3d.Shape()
LineSet970 = x3d.LineSet()
LineSet970.setVertexCount([2])
Coordinate971 = x3d.Coordinate()
Coordinate971.setPoint([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])

LineSet970.setCoord(Coordinate971)
ColorRGBA972 = x3d.ColorRGBA()
ColorRGBA972.setUSE("HAnimSiteLineColorRGBA")

LineSet970.setColor(ColorRGBA972)

Shape969.setGeometry(LineSet970)

HAnimSegment949.addChildren(Shape969)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.setName("l_radial_styloid_pt")
HAnimSite973.setDEF("hanim_l_radial_styloid_pt")
HAnimSite973.setTranslation([0.1901,0.8645,-0.0415])
#HAnimSite visualization shape
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.setDescription("HAnimSite l_radial_styloid")

HAnimSite973.addChildren(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.setUSE("HAnimSiteShape")

HAnimSite973.addChildren(Shape975)

HAnimSegment949.addChildren(HAnimSite973)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.setName("l_olecranon_pt")
HAnimSite976.setDEF("hanim_l_olecranon_pt")
HAnimSite976.setTranslation([0.1962,1.1375,-0.1123])
#HAnimSite visualization shape
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.setDescription("HAnimSite l_olecranon")

HAnimSite976.addChildren(TouchSensor977)
Shape978 = x3d.Shape()
Shape978.setUSE("HAnimSiteShape")

HAnimSite976.addChildren(Shape978)

HAnimSegment949.addChildren(HAnimSite976)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.setName("l_humeral_medial_epicn_pt")
HAnimSite979.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite979.setTranslation([0.1735,1.1272,-0.1113])
#HAnimSite visualization shape
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.setDescription("HAnimSite l_humeral_medial_epicn")

HAnimSite979.addChildren(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimSiteShape")

HAnimSite979.addChildren(Shape981)

HAnimSegment949.addChildren(HAnimSite979)
HAnimSite982 = x3d.HAnimSite()
HAnimSite982.setName("l_radiale_pt")
HAnimSite982.setDEF("hanim_l_radiale_pt")
HAnimSite982.setTranslation([0.2182,1.1212,-0.1167])
#HAnimSite visualization shape
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.setDescription("HAnimSite l_radiale")

HAnimSite982.addChildren(TouchSensor983)
Shape984 = x3d.Shape()
Shape984.setUSE("HAnimSiteShape")

HAnimSite982.addChildren(Shape984)

HAnimSegment949.addChildren(HAnimSite982)

HAnimJoint948.addChildren(HAnimSegment949)
HAnimJoint985 = x3d.HAnimJoint()
HAnimJoint985.setName("l_wrist")
HAnimJoint985.setDEF("hanim_l_wrist")
HAnimJoint985.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment986 = x3d.HAnimSegment()
HAnimSegment986.setName("l_hand")
HAnimSegment986.setDEF("hanim_l_hand")
#<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.setDescription("HAnimJoint l_wrist, HAnimSegment l_hand")

HAnimSegment986.addChildren(TouchSensor987)
Transform988 = x3d.Transform()
Transform988.setTranslation([0.1984,0.8663,-0.0583])
Shape989 = x3d.Shape()
Shape989.setUSE("HAnimJointShape")

Transform988.addChildren(Shape989)

HAnimSegment986.addChildren(Transform988)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape990 = x3d.Shape()
LineSet991 = x3d.LineSet()
LineSet991.setVertexCount([2])
Coordinate992 = x3d.Coordinate()
Coordinate992.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet991.setCoord(Coordinate992)
ColorRGBA993 = x3d.ColorRGBA()
ColorRGBA993.setUSE("HAnimSegmentLineColorRGBA")

LineSet991.setColor(ColorRGBA993)

Shape990.setGeometry(LineSet991)

HAnimSegment986.addChildren(Shape990)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape994 = x3d.Shape()
LineSet995 = x3d.LineSet()
LineSet995.setVertexCount([2])
Coordinate996 = x3d.Coordinate()
Coordinate996.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet995.setCoord(Coordinate996)
ColorRGBA997 = x3d.ColorRGBA()
ColorRGBA997.setUSE("HAnimSegmentLineColorRGBA")

LineSet995.setColor(ColorRGBA997)

Shape994.setGeometry(LineSet995)

HAnimSegment986.addChildren(Shape994)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape998 = x3d.Shape()
LineSet999 = x3d.LineSet()
LineSet999.setVertexCount([2])
Coordinate1000 = x3d.Coordinate()
Coordinate1000.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet999.setCoord(Coordinate1000)
ColorRGBA1001 = x3d.ColorRGBA()
ColorRGBA1001.setUSE("HAnimSegmentLineColorRGBA")

LineSet999.setColor(ColorRGBA1001)

Shape998.setGeometry(LineSet999)

HAnimSegment986.addChildren(Shape998)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.setVertexCount([2])
Coordinate1004 = x3d.Coordinate()
Coordinate1004.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet1003.setCoord(Coordinate1004)
ColorRGBA1005 = x3d.ColorRGBA()
ColorRGBA1005.setUSE("HAnimSegmentLineColorRGBA")

LineSet1003.setColor(ColorRGBA1005)

Shape1002.setGeometry(LineSet1003)

HAnimSegment986.addChildren(Shape1002)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.setVertexCount([2])
Coordinate1008 = x3d.Coordinate()
Coordinate1008.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1007.setCoord(Coordinate1008)
ColorRGBA1009 = x3d.ColorRGBA()
ColorRGBA1009.setUSE("HAnimSegmentLineColorRGBA")

LineSet1007.setColor(ColorRGBA1009)

Shape1006.setGeometry(LineSet1007)

HAnimSegment986.addChildren(Shape1006)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.setVertexCount([2])
Coordinate1012 = x3d.Coordinate()
Coordinate1012.setPoint([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])

LineSet1011.setCoord(Coordinate1012)
ColorRGBA1013 = x3d.ColorRGBA()
ColorRGBA1013.setUSE("HAnimSiteLineColorRGBA")

LineSet1011.setColor(ColorRGBA1013)

Shape1010.setGeometry(LineSet1011)

HAnimSegment986.addChildren(Shape1010)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.setVertexCount([2])
Coordinate1016 = x3d.Coordinate()
Coordinate1016.setPoint([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])

LineSet1015.setCoord(Coordinate1016)
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.setUSE("HAnimSiteLineColorRGBA")

LineSet1015.setColor(ColorRGBA1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment986.addChildren(Shape1014)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.setVertexCount([2])
Coordinate1020 = x3d.Coordinate()
Coordinate1020.setPoint([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])

LineSet1019.setCoord(Coordinate1020)
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.setUSE("HAnimSiteLineColorRGBA")

LineSet1019.setColor(ColorRGBA1021)

Shape1018.setGeometry(LineSet1019)

HAnimSegment986.addChildren(Shape1018)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.setVertexCount([2])
Coordinate1024 = x3d.Coordinate()
Coordinate1024.setPoint([0.1984,0.8663,-0.0583,0.3,0.75,0.45])

LineSet1023.setCoord(Coordinate1024)
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1023.setColor(ColorRGBA1025)

Shape1022.setGeometry(LineSet1023)

HAnimSegment986.addChildren(Shape1022)
HAnimSite1026 = x3d.HAnimSite()
HAnimSite1026.setName("l_metacarpal_pha2_pt")
HAnimSite1026.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite1026.setTranslation([0.2009,0.8139,-0.0237])
#HAnimSite visualization shape
TouchSensor1027 = x3d.TouchSensor()
TouchSensor1027.setDescription("HAnimSite l_metacarpal_pha2")

HAnimSite1026.addChildren(TouchSensor1027)
Shape1028 = x3d.Shape()
Shape1028.setUSE("HAnimSiteShape")

HAnimSite1026.addChildren(Shape1028)

HAnimSegment986.addChildren(HAnimSite1026)
HAnimSite1029 = x3d.HAnimSite()
HAnimSite1029.setName("l_ulnar_styloid_pt")
HAnimSite1029.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1029.setTranslation([0.2142,0.8529,-0.0648])
#HAnimSite visualization shape
TouchSensor1030 = x3d.TouchSensor()
TouchSensor1030.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite1029.addChildren(TouchSensor1030)
Shape1031 = x3d.Shape()
Shape1031.setUSE("HAnimSiteShape")

HAnimSite1029.addChildren(Shape1031)

HAnimSegment986.addChildren(HAnimSite1029)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setName("l_metacarpal_pha5_pt")
HAnimSite1032.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite1032.setTranslation([0.1929,0.786,-0.1122])
#HAnimSite visualization shape
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.setDescription("HAnimSite l_metacarpal_pha5")

HAnimSite1032.addChildren(TouchSensor1033)
Shape1034 = x3d.Shape()
Shape1034.setUSE("HAnimSiteShape")

HAnimSite1032.addChildren(Shape1034)

HAnimSegment986.addChildren(HAnimSite1032)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setName("l_hand_front_view")
HAnimSite1035.setDEF("hanim_l_hand_front_view")
HAnimSite1035.setTranslation([0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1036 = x3d.TouchSensor()
TouchSensor1036.setDescription("HAnimSite l_hand_front_view")

HAnimSite1035.addChildren(TouchSensor1036)
Shape1037 = x3d.Shape()
Shape1037.setUSE("HAnimSiteShape")

HAnimSite1035.addChildren(Shape1037)
Viewpoint1038 = x3d.Viewpoint()
Viewpoint1038.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1038.setCenterOfRotation([0,0.7,0])
Viewpoint1038.setDescription("left hand front")
Viewpoint1038.setPosition([0,0,0])

HAnimSite1035.addChildren(Viewpoint1038)
#HAnimSite/Viewpoint visualization shape
Anchor1039 = x3d.Anchor()
Anchor1039.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1039.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1040 = x3d.LOD()
LOD1040.setForceTransitions(True)
LOD1040.setRange([0.04])
WorldInfo1041 = x3d.WorldInfo()
WorldInfo1041.setInfo(["hide diamond when close"])

LOD1040.addChildren(WorldInfo1041)
Shape1042 = x3d.Shape()
Shape1042.setUSE("HAnimSiteViewpointShape")

LOD1040.addChildren(Shape1042)

Anchor1039.addChildren(LOD1040)

HAnimSite1035.addChildren(Anchor1039)

HAnimSegment986.addChildren(HAnimSite1035)

HAnimJoint985.addChildren(HAnimSegment986)
HAnimJoint1043 = x3d.HAnimJoint()
HAnimJoint1043.setName("l_thumb1")
HAnimJoint1043.setDEF("hanim_l_thumb1")
HAnimJoint1043.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment1044 = x3d.HAnimSegment()
HAnimSegment1044.setName("l_thumb_metacarpal")
HAnimSegment1044.setDEF("hanim_l_thumb_metacarpal")
#<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor1045 = x3d.TouchSensor()
TouchSensor1045.setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")

HAnimSegment1044.addChildren(TouchSensor1045)
Transform1046 = x3d.Transform()
Transform1046.setTranslation([0.1924,0.8472,-0.0534])
Shape1047 = x3d.Shape()
Shape1047.setUSE("HAnimJointShape")

Transform1046.addChildren(Shape1047)

HAnimSegment1044.addChildren(Transform1046)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape1048 = x3d.Shape()
LineSet1049 = x3d.LineSet()
LineSet1049.setVertexCount([2])
Coordinate1050 = x3d.Coordinate()
Coordinate1050.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1049.setCoord(Coordinate1050)
ColorRGBA1051 = x3d.ColorRGBA()
ColorRGBA1051.setUSE("HAnimSegmentLineColorRGBA")

LineSet1049.setColor(ColorRGBA1051)

Shape1048.setGeometry(LineSet1049)

HAnimSegment1044.addChildren(Shape1048)

HAnimJoint1043.addChildren(HAnimSegment1044)
HAnimJoint1052 = x3d.HAnimJoint()
HAnimJoint1052.setName("l_thumb2")
HAnimJoint1052.setDEF("hanim_l_thumb2")
HAnimJoint1052.setCenter([0.1951,0.8226,0.0246])
HAnimSegment1053 = x3d.HAnimSegment()
HAnimSegment1053.setName("l_thumb_proximal")
HAnimSegment1053.setDEF("hanim_l_thumb_proximal")
#<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor1054 = x3d.TouchSensor()
TouchSensor1054.setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")

HAnimSegment1053.addChildren(TouchSensor1054)
Transform1055 = x3d.Transform()
Transform1055.setTranslation([0.1951,0.8226,0.0246])
Shape1056 = x3d.Shape()
Shape1056.setUSE("HAnimJointShape")

Transform1055.addChildren(Shape1056)

HAnimSegment1053.addChildren(Transform1055)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape1057 = x3d.Shape()
LineSet1058 = x3d.LineSet()
LineSet1058.setVertexCount([2])
Coordinate1059 = x3d.Coordinate()
Coordinate1059.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1058.setCoord(Coordinate1059)
ColorRGBA1060 = x3d.ColorRGBA()
ColorRGBA1060.setUSE("HAnimSegmentLineColorRGBA")

LineSet1058.setColor(ColorRGBA1060)

Shape1057.setGeometry(LineSet1058)

HAnimSegment1053.addChildren(Shape1057)

HAnimJoint1052.addChildren(HAnimSegment1053)
HAnimJoint1061 = x3d.HAnimJoint()
HAnimJoint1061.setName("l_thumb3")
HAnimJoint1061.setDEF("hanim_l_thumb3")
HAnimJoint1061.setCenter([0.1955,0.8159,0.0464])
HAnimSegment1062 = x3d.HAnimSegment()
HAnimSegment1062.setName("l_thumb_distal")
HAnimSegment1062.setDEF("hanim_l_thumb_distal")
#<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
TouchSensor1063 = x3d.TouchSensor()
TouchSensor1063.setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")

HAnimSegment1062.addChildren(TouchSensor1063)
Transform1064 = x3d.Transform()
Transform1064.setTranslation([0.1955,0.8159,0.0464])
Shape1065 = x3d.Shape()
Shape1065.setUSE("HAnimJointShape")

Transform1064.addChildren(Shape1065)

HAnimSegment1062.addChildren(Transform1064)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape1066 = x3d.Shape()
LineSet1067 = x3d.LineSet()
LineSet1067.setVertexCount([2])
Coordinate1068 = x3d.Coordinate()
Coordinate1068.setPoint([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])

LineSet1067.setCoord(Coordinate1068)
ColorRGBA1069 = x3d.ColorRGBA()
ColorRGBA1069.setUSE("HAnimSiteLineColorRGBA")

LineSet1067.setColor(ColorRGBA1069)

Shape1066.setGeometry(LineSet1067)

HAnimSegment1062.addChildren(Shape1066)
HAnimSite1070 = x3d.HAnimSite()
HAnimSite1070.setName("l_thumb_distal_tip")
HAnimSite1070.setDEF("hanim_l_thumb_distal_tip")
HAnimSite1070.setTranslation([0.1982,0.8061,0.0759])
#HAnimSite visualization shape
TouchSensor1071 = x3d.TouchSensor()
TouchSensor1071.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1070.addChildren(TouchSensor1071)
Shape1072 = x3d.Shape()
Shape1072.setUSE("HAnimSiteShape")

HAnimSite1070.addChildren(Shape1072)

HAnimSegment1062.addChildren(HAnimSite1070)

HAnimJoint1061.addChildren(HAnimSegment1062)

HAnimJoint1052.addChildren(HAnimJoint1061)

HAnimJoint1043.addChildren(HAnimJoint1052)

HAnimJoint985.addChildren(HAnimJoint1043)
HAnimJoint1073 = x3d.HAnimJoint()
HAnimJoint1073.setName("l_index0")
HAnimJoint1073.setDEF("hanim_l_index0")
HAnimJoint1073.setCenter([0.1983,0.8024,-0.028])
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.setName("l_index_metacarpal")
HAnimSegment1074.setDEF("hanim_l_index_metacarpal")
#<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor1075 = x3d.TouchSensor()
TouchSensor1075.setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")

HAnimSegment1074.addChildren(TouchSensor1075)
Transform1076 = x3d.Transform()
Transform1076.setTranslation([0.1983,0.8024,-0.028])
Shape1077 = x3d.Shape()
Shape1077.setUSE("HAnimJointShape")

Transform1076.addChildren(Shape1077)

HAnimSegment1074.addChildren(Transform1076)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape1078 = x3d.Shape()
LineSet1079 = x3d.LineSet()
LineSet1079.setVertexCount([2])
Coordinate1080 = x3d.Coordinate()
Coordinate1080.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1079.setCoord(Coordinate1080)
ColorRGBA1081 = x3d.ColorRGBA()
ColorRGBA1081.setUSE("HAnimSegmentLineColorRGBA")

LineSet1079.setColor(ColorRGBA1081)

Shape1078.setGeometry(LineSet1079)

HAnimSegment1074.addChildren(Shape1078)

HAnimJoint1073.addChildren(HAnimSegment1074)
HAnimJoint1082 = x3d.HAnimJoint()
HAnimJoint1082.setName("l_index1")
HAnimJoint1082.setDEF("hanim_l_index1")
HAnimJoint1082.setCenter([0.1983,0.7815,-0.028])
HAnimSegment1083 = x3d.HAnimSegment()
HAnimSegment1083.setName("l_index_proximal")
HAnimSegment1083.setDEF("hanim_l_index_proximal")
#<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
TouchSensor1084 = x3d.TouchSensor()
TouchSensor1084.setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal")

HAnimSegment1083.addChildren(TouchSensor1084)
Transform1085 = x3d.Transform()
Transform1085.setTranslation([0.1983,0.7815,-0.028])
Shape1086 = x3d.Shape()
Shape1086.setUSE("HAnimJointShape")

Transform1085.addChildren(Shape1086)

HAnimSegment1083.addChildren(Transform1085)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape1087 = x3d.Shape()
LineSet1088 = x3d.LineSet()
LineSet1088.setVertexCount([2])
Coordinate1089 = x3d.Coordinate()
Coordinate1089.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1088.setCoord(Coordinate1089)
ColorRGBA1090 = x3d.ColorRGBA()
ColorRGBA1090.setUSE("HAnimSegmentLineColorRGBA")

LineSet1088.setColor(ColorRGBA1090)

Shape1087.setGeometry(LineSet1088)

HAnimSegment1083.addChildren(Shape1087)

HAnimJoint1082.addChildren(HAnimSegment1083)
HAnimJoint1091 = x3d.HAnimJoint()
HAnimJoint1091.setName("l_index2")
HAnimJoint1091.setDEF("hanim_l_index2")
HAnimJoint1091.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment1092 = x3d.HAnimSegment()
HAnimSegment1092.setName("l_index_middle")
HAnimSegment1092.setDEF("hanim_l_index_middle")
#<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle")

HAnimSegment1092.addChildren(TouchSensor1093)
Transform1094 = x3d.Transform()
Transform1094.setTranslation([0.2017,0.7363,-0.0248])
Shape1095 = x3d.Shape()
Shape1095.setUSE("HAnimJointShape")

Transform1094.addChildren(Shape1095)

HAnimSegment1092.addChildren(Transform1094)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape1096 = x3d.Shape()
LineSet1097 = x3d.LineSet()
LineSet1097.setVertexCount([2])
Coordinate1098 = x3d.Coordinate()
Coordinate1098.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1097.setCoord(Coordinate1098)
ColorRGBA1099 = x3d.ColorRGBA()
ColorRGBA1099.setUSE("HAnimSegmentLineColorRGBA")

LineSet1097.setColor(ColorRGBA1099)

Shape1096.setGeometry(LineSet1097)

HAnimSegment1092.addChildren(Shape1096)

HAnimJoint1091.addChildren(HAnimSegment1092)
HAnimJoint1100 = x3d.HAnimJoint()
HAnimJoint1100.setName("l_index3")
HAnimJoint1100.setDEF("hanim_l_index3")
HAnimJoint1100.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment1101 = x3d.HAnimSegment()
HAnimSegment1101.setName("l_index_distal")
HAnimSegment1101.setDEF("hanim_l_index_distal")
#<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
TouchSensor1102 = x3d.TouchSensor()
TouchSensor1102.setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal")

HAnimSegment1101.addChildren(TouchSensor1102)
Transform1103 = x3d.Transform()
Transform1103.setTranslation([0.2028,0.7139,-0.0236])
Shape1104 = x3d.Shape()
Shape1104.setUSE("HAnimJointShape")

Transform1103.addChildren(Shape1104)

HAnimSegment1101.addChildren(Transform1103)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape1105 = x3d.Shape()
LineSet1106 = x3d.LineSet()
LineSet1106.setVertexCount([2])
Coordinate1107 = x3d.Coordinate()
Coordinate1107.setPoint([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])

LineSet1106.setCoord(Coordinate1107)
ColorRGBA1108 = x3d.ColorRGBA()
ColorRGBA1108.setUSE("HAnimSiteLineColorRGBA")

LineSet1106.setColor(ColorRGBA1108)

Shape1105.setGeometry(LineSet1106)

HAnimSegment1101.addChildren(Shape1105)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape1109 = x3d.Shape()
LineSet1110 = x3d.LineSet()
LineSet1110.setVertexCount([2])
Coordinate1111 = x3d.Coordinate()
Coordinate1111.setPoint([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])

LineSet1110.setCoord(Coordinate1111)
ColorRGBA1112 = x3d.ColorRGBA()
ColorRGBA1112.setUSE("HAnimSiteLineColorRGBA")

LineSet1110.setColor(ColorRGBA1112)

Shape1109.setGeometry(LineSet1110)

HAnimSegment1101.addChildren(Shape1109)
HAnimSite1113 = x3d.HAnimSite()
HAnimSite1113.setName("l_index_distal_tip")
HAnimSite1113.setDEF("hanim_l_index_distal_tip")
HAnimSite1113.setTranslation([0.2089,0.6858,-0.0245])
#HAnimSite visualization shape
TouchSensor1114 = x3d.TouchSensor()
TouchSensor1114.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1113.addChildren(TouchSensor1114)
Shape1115 = x3d.Shape()
Shape1115.setUSE("HAnimSiteShape")

HAnimSite1113.addChildren(Shape1115)

HAnimSegment1101.addChildren(HAnimSite1113)
HAnimSite1116 = x3d.HAnimSite()
HAnimSite1116.setName("l_dactylion_pt")
HAnimSite1116.setDEF("hanim_l_dactylion_pt")
HAnimSite1116.setTranslation([0.2056,0.6743,-0.0482])
#HAnimSite visualization shape
TouchSensor1117 = x3d.TouchSensor()
TouchSensor1117.setDescription("HAnimSite l_dactylion")

HAnimSite1116.addChildren(TouchSensor1117)
Shape1118 = x3d.Shape()
Shape1118.setUSE("HAnimSiteShape")

HAnimSite1116.addChildren(Shape1118)

HAnimSegment1101.addChildren(HAnimSite1116)

HAnimJoint1100.addChildren(HAnimSegment1101)

HAnimJoint1091.addChildren(HAnimJoint1100)

HAnimJoint1082.addChildren(HAnimJoint1091)

HAnimJoint1073.addChildren(HAnimJoint1082)

HAnimJoint985.addChildren(HAnimJoint1073)
HAnimJoint1119 = x3d.HAnimJoint()
HAnimJoint1119.setName("l_middle0")
HAnimJoint1119.setDEF("hanim_l_middle0")
HAnimJoint1119.setCenter([0.1987,0.8029,-0.053])
HAnimSegment1120 = x3d.HAnimSegment()
HAnimSegment1120.setName("l_middle_metacarpal")
HAnimSegment1120.setDEF("hanim_l_middle_metacarpal")
#<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor1121 = x3d.TouchSensor()
TouchSensor1121.setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")

HAnimSegment1120.addChildren(TouchSensor1121)
Transform1122 = x3d.Transform()
Transform1122.setTranslation([0.1987,0.8029,-0.053])
Shape1123 = x3d.Shape()
Shape1123.setUSE("HAnimJointShape")

Transform1122.addChildren(Shape1123)

HAnimSegment1120.addChildren(Transform1122)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape1124 = x3d.Shape()
LineSet1125 = x3d.LineSet()
LineSet1125.setVertexCount([2])
Coordinate1126 = x3d.Coordinate()
Coordinate1126.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1125.setCoord(Coordinate1126)
ColorRGBA1127 = x3d.ColorRGBA()
ColorRGBA1127.setUSE("HAnimSegmentLineColorRGBA")

LineSet1125.setColor(ColorRGBA1127)

Shape1124.setGeometry(LineSet1125)

HAnimSegment1120.addChildren(Shape1124)

HAnimJoint1119.addChildren(HAnimSegment1120)
HAnimJoint1128 = x3d.HAnimJoint()
HAnimJoint1128.setName("l_middle1")
HAnimJoint1128.setDEF("hanim_l_middle1")
HAnimJoint1128.setCenter([0.1987,0.7818,-0.053])
HAnimSegment1129 = x3d.HAnimSegment()
HAnimSegment1129.setName("l_middle_proximal")
HAnimSegment1129.setDEF("hanim_l_middle_proximal")
#<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
TouchSensor1130 = x3d.TouchSensor()
TouchSensor1130.setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")

HAnimSegment1129.addChildren(TouchSensor1130)
Transform1131 = x3d.Transform()
Transform1131.setTranslation([0.1987,0.7818,-0.053])
Shape1132 = x3d.Shape()
Shape1132.setUSE("HAnimJointShape")

Transform1131.addChildren(Shape1132)

HAnimSegment1129.addChildren(Transform1131)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape1133 = x3d.Shape()
LineSet1134 = x3d.LineSet()
LineSet1134.setVertexCount([2])
Coordinate1135 = x3d.Coordinate()
Coordinate1135.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1134.setCoord(Coordinate1135)
ColorRGBA1136 = x3d.ColorRGBA()
ColorRGBA1136.setUSE("HAnimSegmentLineColorRGBA")

LineSet1134.setColor(ColorRGBA1136)

Shape1133.setGeometry(LineSet1134)

HAnimSegment1129.addChildren(Shape1133)

HAnimJoint1128.addChildren(HAnimSegment1129)
HAnimJoint1137 = x3d.HAnimJoint()
HAnimJoint1137.setName("l_middle2")
HAnimJoint1137.setDEF("hanim_l_middle2")
HAnimJoint1137.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment1138 = x3d.HAnimSegment()
HAnimSegment1138.setName("l_middle_middle")
HAnimSegment1138.setDEF("hanim_l_middle_middle")
#<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
TouchSensor1139 = x3d.TouchSensor()
TouchSensor1139.setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle")

HAnimSegment1138.addChildren(TouchSensor1139)
Transform1140 = x3d.Transform()
Transform1140.setTranslation([0.2013,0.7273,-0.0503])
Shape1141 = x3d.Shape()
Shape1141.setUSE("HAnimJointShape")

Transform1140.addChildren(Shape1141)

HAnimSegment1138.addChildren(Transform1140)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape1142 = x3d.Shape()
LineSet1143 = x3d.LineSet()
LineSet1143.setVertexCount([2])
Coordinate1144 = x3d.Coordinate()
Coordinate1144.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1143.setCoord(Coordinate1144)
ColorRGBA1145 = x3d.ColorRGBA()
ColorRGBA1145.setUSE("HAnimSegmentLineColorRGBA")

LineSet1143.setColor(ColorRGBA1145)

Shape1142.setGeometry(LineSet1143)

HAnimSegment1138.addChildren(Shape1142)

HAnimJoint1137.addChildren(HAnimSegment1138)
HAnimJoint1146 = x3d.HAnimJoint()
HAnimJoint1146.setName("l_middle3")
HAnimJoint1146.setDEF("hanim_l_middle3")
HAnimJoint1146.setCenter([0.2026,0.7011,-0.0494])
HAnimSegment1147 = x3d.HAnimSegment()
HAnimSegment1147.setName("l_middle_distal")
HAnimSegment1147.setDEF("hanim_l_middle_distal")
#<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
TouchSensor1148 = x3d.TouchSensor()
TouchSensor1148.setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal")

HAnimSegment1147.addChildren(TouchSensor1148)
Transform1149 = x3d.Transform()
Transform1149.setTranslation([0.2026,0.7011,-0.0494])
Shape1150 = x3d.Shape()
Shape1150.setUSE("HAnimJointShape")

Transform1149.addChildren(Shape1150)

HAnimSegment1147.addChildren(Transform1149)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape1151 = x3d.Shape()
LineSet1152 = x3d.LineSet()
LineSet1152.setVertexCount([2])
Coordinate1153 = x3d.Coordinate()
Coordinate1153.setPoint([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])

LineSet1152.setCoord(Coordinate1153)
ColorRGBA1154 = x3d.ColorRGBA()
ColorRGBA1154.setUSE("HAnimSiteLineColorRGBA")

LineSet1152.setColor(ColorRGBA1154)

Shape1151.setGeometry(LineSet1152)

HAnimSegment1147.addChildren(Shape1151)
HAnimSite1155 = x3d.HAnimSite()
HAnimSite1155.setName("l_middle_distal_tip")
HAnimSite1155.setDEF("hanim_l_middle_distal_tip")
HAnimSite1155.setTranslation([0.208,0.6731,-0.0491])
#HAnimSite visualization shape
TouchSensor1156 = x3d.TouchSensor()
TouchSensor1156.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1155.addChildren(TouchSensor1156)
Shape1157 = x3d.Shape()
Shape1157.setUSE("HAnimSiteShape")

HAnimSite1155.addChildren(Shape1157)

HAnimSegment1147.addChildren(HAnimSite1155)

HAnimJoint1146.addChildren(HAnimSegment1147)

HAnimJoint1137.addChildren(HAnimJoint1146)

HAnimJoint1128.addChildren(HAnimJoint1137)

HAnimJoint1119.addChildren(HAnimJoint1128)

HAnimJoint985.addChildren(HAnimJoint1119)
HAnimJoint1158 = x3d.HAnimJoint()
HAnimJoint1158.setName("l_ring0")
HAnimJoint1158.setDEF("hanim_l_ring0")
HAnimJoint1158.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment1159 = x3d.HAnimSegment()
HAnimSegment1159.setName("l_ring_metacarpal")
HAnimSegment1159.setDEF("hanim_l_ring_metacarpal")
#<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor1160 = x3d.TouchSensor()
TouchSensor1160.setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")

HAnimSegment1159.addChildren(TouchSensor1160)
Transform1161 = x3d.Transform()
Transform1161.setTranslation([0.1956,0.8019,-0.0794])
Shape1162 = x3d.Shape()
Shape1162.setUSE("HAnimJointShape")

Transform1161.addChildren(Shape1162)

HAnimSegment1159.addChildren(Transform1161)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape1163 = x3d.Shape()
LineSet1164 = x3d.LineSet()
LineSet1164.setVertexCount([2])
Coordinate1165 = x3d.Coordinate()
Coordinate1165.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1164.setCoord(Coordinate1165)
ColorRGBA1166 = x3d.ColorRGBA()
ColorRGBA1166.setUSE("HAnimSegmentLineColorRGBA")

LineSet1164.setColor(ColorRGBA1166)

Shape1163.setGeometry(LineSet1164)

HAnimSegment1159.addChildren(Shape1163)

HAnimJoint1158.addChildren(HAnimSegment1159)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.setName("l_ring1")
HAnimJoint1167.setDEF("hanim_l_ring1")
HAnimJoint1167.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment1168 = x3d.HAnimSegment()
HAnimSegment1168.setName("l_ring_proximal")
HAnimSegment1168.setDEF("hanim_l_ring_proximal")
#<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")

HAnimSegment1168.addChildren(TouchSensor1169)
Transform1170 = x3d.Transform()
Transform1170.setTranslation([0.1956,0.7815,-0.0794])
Shape1171 = x3d.Shape()
Shape1171.setUSE("HAnimJointShape")

Transform1170.addChildren(Shape1171)

HAnimSegment1168.addChildren(Transform1170)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape1172 = x3d.Shape()
LineSet1173 = x3d.LineSet()
LineSet1173.setVertexCount([2])
Coordinate1174 = x3d.Coordinate()
Coordinate1174.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1173.setCoord(Coordinate1174)
ColorRGBA1175 = x3d.ColorRGBA()
ColorRGBA1175.setUSE("HAnimSegmentLineColorRGBA")

LineSet1173.setColor(ColorRGBA1175)

Shape1172.setGeometry(LineSet1173)

HAnimSegment1168.addChildren(Shape1172)

HAnimJoint1167.addChildren(HAnimSegment1168)
HAnimJoint1176 = x3d.HAnimJoint()
HAnimJoint1176.setName("l_ring2")
HAnimJoint1176.setDEF("hanim_l_ring2")
HAnimJoint1176.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment1177 = x3d.HAnimSegment()
HAnimSegment1177.setName("l_ring_middle")
HAnimSegment1177.setDEF("hanim_l_ring_middle")
#<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
TouchSensor1178 = x3d.TouchSensor()
TouchSensor1178.setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle")

HAnimSegment1177.addChildren(TouchSensor1178)
Transform1179 = x3d.Transform()
Transform1179.setTranslation([0.1973,0.7287,-0.0777])
Shape1180 = x3d.Shape()
Shape1180.setUSE("HAnimJointShape")

Transform1179.addChildren(Shape1180)

HAnimSegment1177.addChildren(Transform1179)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape1181 = x3d.Shape()
LineSet1182 = x3d.LineSet()
LineSet1182.setVertexCount([2])
Coordinate1183 = x3d.Coordinate()
Coordinate1183.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1182.setCoord(Coordinate1183)
ColorRGBA1184 = x3d.ColorRGBA()
ColorRGBA1184.setUSE("HAnimSegmentLineColorRGBA")

LineSet1182.setColor(ColorRGBA1184)

Shape1181.setGeometry(LineSet1182)

HAnimSegment1177.addChildren(Shape1181)

HAnimJoint1176.addChildren(HAnimSegment1177)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setName("l_ring3")
HAnimJoint1185.setDEF("hanim_l_ring3")
HAnimJoint1185.setCenter([0.1983,0.7045,-0.0767])
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.setName("l_ring_distal")
HAnimSegment1186.setDEF("hanim_l_ring_distal")
#<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
TouchSensor1187 = x3d.TouchSensor()
TouchSensor1187.setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal")

HAnimSegment1186.addChildren(TouchSensor1187)
Transform1188 = x3d.Transform()
Transform1188.setTranslation([0.1983,0.7045,-0.0767])
Shape1189 = x3d.Shape()
Shape1189.setUSE("HAnimJointShape")

Transform1188.addChildren(Shape1189)

HAnimSegment1186.addChildren(Transform1188)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape1190 = x3d.Shape()
LineSet1191 = x3d.LineSet()
LineSet1191.setVertexCount([2])
Coordinate1192 = x3d.Coordinate()
Coordinate1192.setPoint([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])

LineSet1191.setCoord(Coordinate1192)
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.setUSE("HAnimSiteLineColorRGBA")

LineSet1191.setColor(ColorRGBA1193)

Shape1190.setGeometry(LineSet1191)

HAnimSegment1186.addChildren(Shape1190)
HAnimSite1194 = x3d.HAnimSite()
HAnimSite1194.setName("l_ring_distal_tip")
HAnimSite1194.setDEF("hanim_l_ring_distal_tip")
HAnimSite1194.setTranslation([0.2035,0.675,-0.0756])
#HAnimSite visualization shape
TouchSensor1195 = x3d.TouchSensor()
TouchSensor1195.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1194.addChildren(TouchSensor1195)
Shape1196 = x3d.Shape()
Shape1196.setUSE("HAnimSiteShape")

HAnimSite1194.addChildren(Shape1196)

HAnimSegment1186.addChildren(HAnimSite1194)

HAnimJoint1185.addChildren(HAnimSegment1186)

HAnimJoint1176.addChildren(HAnimJoint1185)

HAnimJoint1167.addChildren(HAnimJoint1176)

HAnimJoint1158.addChildren(HAnimJoint1167)

HAnimJoint985.addChildren(HAnimJoint1158)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.setName("l_pinky0")
HAnimJoint1197.setDEF("hanim_l_pinky0")
HAnimJoint1197.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment1198 = x3d.HAnimSegment()
HAnimSegment1198.setName("l_pinky_metacarpal")
HAnimSegment1198.setDEF("hanim_l_pinky_metacarpal")
#<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor1199 = x3d.TouchSensor()
TouchSensor1199.setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")

HAnimSegment1198.addChildren(TouchSensor1199)
Transform1200 = x3d.Transform()
Transform1200.setTranslation([0.1925,0.8066,-0.1036])
Shape1201 = x3d.Shape()
Shape1201.setUSE("HAnimJointShape")

Transform1200.addChildren(Shape1201)

HAnimSegment1198.addChildren(Transform1200)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape1202 = x3d.Shape()
LineSet1203 = x3d.LineSet()
LineSet1203.setVertexCount([2])
Coordinate1204 = x3d.Coordinate()
Coordinate1204.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1203.setCoord(Coordinate1204)
ColorRGBA1205 = x3d.ColorRGBA()
ColorRGBA1205.setUSE("HAnimSegmentLineColorRGBA")

LineSet1203.setColor(ColorRGBA1205)

Shape1202.setGeometry(LineSet1203)

HAnimSegment1198.addChildren(Shape1202)

HAnimJoint1197.addChildren(HAnimSegment1198)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.setName("l_pinky1")
HAnimJoint1206.setDEF("hanim_l_pinky1")
HAnimJoint1206.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment1207 = x3d.HAnimSegment()
HAnimSegment1207.setName("l_pinky_proximal")
HAnimSegment1207.setDEF("hanim_l_pinky_proximal")
#<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor1208 = x3d.TouchSensor()
TouchSensor1208.setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")

HAnimSegment1207.addChildren(TouchSensor1208)
Transform1209 = x3d.Transform()
Transform1209.setTranslation([0.1925,0.7866,-0.1036])
Shape1210 = x3d.Shape()
Shape1210.setUSE("HAnimJointShape")

Transform1209.addChildren(Shape1210)

HAnimSegment1207.addChildren(Transform1209)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape1211 = x3d.Shape()
LineSet1212 = x3d.LineSet()
LineSet1212.setVertexCount([2])
Coordinate1213 = x3d.Coordinate()
Coordinate1213.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1212.setCoord(Coordinate1213)
ColorRGBA1214 = x3d.ColorRGBA()
ColorRGBA1214.setUSE("HAnimSegmentLineColorRGBA")

LineSet1212.setColor(ColorRGBA1214)

Shape1211.setGeometry(LineSet1212)

HAnimSegment1207.addChildren(Shape1211)

HAnimJoint1206.addChildren(HAnimSegment1207)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.setName("l_pinky2")
HAnimJoint1215.setDEF("hanim_l_pinky2")
HAnimJoint1215.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment1216 = x3d.HAnimSegment()
HAnimSegment1216.setName("l_pinky_middle")
HAnimSegment1216.setDEF("hanim_l_pinky_middle")
#<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
TouchSensor1217 = x3d.TouchSensor()
TouchSensor1217.setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")

HAnimSegment1216.addChildren(TouchSensor1217)
Transform1218 = x3d.Transform()
Transform1218.setTranslation([0.1938,0.7452,-0.1024])
Shape1219 = x3d.Shape()
Shape1219.setUSE("HAnimJointShape")

Transform1218.addChildren(Shape1219)

HAnimSegment1216.addChildren(Transform1218)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape1220 = x3d.Shape()
LineSet1221 = x3d.LineSet()
LineSet1221.setVertexCount([2])
Coordinate1222 = x3d.Coordinate()
Coordinate1222.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1221.setCoord(Coordinate1222)
ColorRGBA1223 = x3d.ColorRGBA()
ColorRGBA1223.setUSE("HAnimSegmentLineColorRGBA")

LineSet1221.setColor(ColorRGBA1223)

Shape1220.setGeometry(LineSet1221)

HAnimSegment1216.addChildren(Shape1220)

HAnimJoint1215.addChildren(HAnimSegment1216)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setName("l_pinky3")
HAnimJoint1224.setDEF("hanim_l_pinky3")
HAnimJoint1224.setCenter([0.1948,0.7277,-0.1017])
HAnimSegment1225 = x3d.HAnimSegment()
HAnimSegment1225.setName("l_pinky_distal")
HAnimSegment1225.setDEF("hanim_l_pinky_distal")
#<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
TouchSensor1226 = x3d.TouchSensor()
TouchSensor1226.setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")

HAnimSegment1225.addChildren(TouchSensor1226)
Transform1227 = x3d.Transform()
Transform1227.setTranslation([0.1948,0.7277,-0.1017])
Shape1228 = x3d.Shape()
Shape1228.setUSE("HAnimJointShape")

Transform1227.addChildren(Shape1228)

HAnimSegment1225.addChildren(Transform1227)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape1229 = x3d.Shape()
LineSet1230 = x3d.LineSet()
LineSet1230.setVertexCount([2])
Coordinate1231 = x3d.Coordinate()
Coordinate1231.setPoint([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])

LineSet1230.setCoord(Coordinate1231)
ColorRGBA1232 = x3d.ColorRGBA()
ColorRGBA1232.setUSE("HAnimSiteLineColorRGBA")

LineSet1230.setColor(ColorRGBA1232)

Shape1229.setGeometry(LineSet1230)

HAnimSegment1225.addChildren(Shape1229)
HAnimSite1233 = x3d.HAnimSite()
HAnimSite1233.setName("l_pinky_distal_tip")
HAnimSite1233.setDEF("hanim_l_pinky_distal_tip")
HAnimSite1233.setTranslation([0.2014,0.7009,-0.1012])
#HAnimSite visualization shape
TouchSensor1234 = x3d.TouchSensor()
TouchSensor1234.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1233.addChildren(TouchSensor1234)
Shape1235 = x3d.Shape()
Shape1235.setUSE("HAnimSiteShape")

HAnimSite1233.addChildren(Shape1235)

HAnimSegment1225.addChildren(HAnimSite1233)

HAnimJoint1224.addChildren(HAnimSegment1225)

HAnimJoint1215.addChildren(HAnimJoint1224)

HAnimJoint1206.addChildren(HAnimJoint1215)

HAnimJoint1197.addChildren(HAnimJoint1206)

HAnimJoint985.addChildren(HAnimJoint1197)

HAnimJoint948.addChildren(HAnimJoint985)

HAnimJoint932.addChildren(HAnimJoint948)

HAnimJoint923.addChildren(HAnimJoint932)

HAnimJoint886.addChildren(HAnimJoint923)

HAnimJoint598.addChildren(HAnimJoint886)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.setName("r_sternoclavicular")
HAnimJoint1236.setDEF("hanim_r_sternoclavicular")
HAnimJoint1236.setCenter([-0.082,1.4488,-0.0353])
HAnimSegment1237 = x3d.HAnimSegment()
HAnimSegment1237.setName("r_clavicle")
HAnimSegment1237.setDEF("hanim_r_clavicle")
#<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor1238 = x3d.TouchSensor()
TouchSensor1238.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1237.addChildren(TouchSensor1238)
Transform1239 = x3d.Transform()
Transform1239.setTranslation([-0.082,1.4488,-0.0353])
Shape1240 = x3d.Shape()
Shape1240.setUSE("HAnimJointShape")

Transform1239.addChildren(Shape1240)

HAnimSegment1237.addChildren(Transform1239)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape1241 = x3d.Shape()
LineSet1242 = x3d.LineSet()
LineSet1242.setVertexCount([2])
Coordinate1243 = x3d.Coordinate()
Coordinate1243.setPoint([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])

LineSet1242.setCoord(Coordinate1243)
ColorRGBA1244 = x3d.ColorRGBA()
ColorRGBA1244.setUSE("HAnimSegmentLineColorRGBA")

LineSet1242.setColor(ColorRGBA1244)

Shape1241.setGeometry(LineSet1242)

HAnimSegment1237.addChildren(Shape1241)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape1245 = x3d.Shape()
LineSet1246 = x3d.LineSet()
LineSet1246.setVertexCount([2])
Coordinate1247 = x3d.Coordinate()
Coordinate1247.setPoint([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])

LineSet1246.setCoord(Coordinate1247)
ColorRGBA1248 = x3d.ColorRGBA()
ColorRGBA1248.setUSE("HAnimSiteLineColorRGBA")

LineSet1246.setColor(ColorRGBA1248)

Shape1245.setGeometry(LineSet1246)

HAnimSegment1237.addChildren(Shape1245)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape1249 = x3d.Shape()
LineSet1250 = x3d.LineSet()
LineSet1250.setVertexCount([2])
Coordinate1251 = x3d.Coordinate()
Coordinate1251.setPoint([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])

LineSet1250.setCoord(Coordinate1251)
ColorRGBA1252 = x3d.ColorRGBA()
ColorRGBA1252.setUSE("HAnimSiteLineColorRGBA")

LineSet1250.setColor(ColorRGBA1252)

Shape1249.setGeometry(LineSet1250)

HAnimSegment1237.addChildren(Shape1249)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape1253 = x3d.Shape()
LineSet1254 = x3d.LineSet()
LineSet1254.setVertexCount([2])
Coordinate1255 = x3d.Coordinate()
Coordinate1255.setPoint([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])

LineSet1254.setCoord(Coordinate1255)
ColorRGBA1256 = x3d.ColorRGBA()
ColorRGBA1256.setUSE("HAnimSiteLineColorRGBA")

LineSet1254.setColor(ColorRGBA1256)

Shape1253.setGeometry(LineSet1254)

HAnimSegment1237.addChildren(Shape1253)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape1257 = x3d.Shape()
LineSet1258 = x3d.LineSet()
LineSet1258.setVertexCount([2])
Coordinate1259 = x3d.Coordinate()
Coordinate1259.setPoint([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])

LineSet1258.setCoord(Coordinate1259)
ColorRGBA1260 = x3d.ColorRGBA()
ColorRGBA1260.setUSE("HAnimSiteLineColorRGBA")

LineSet1258.setColor(ColorRGBA1260)

Shape1257.setGeometry(LineSet1258)

HAnimSegment1237.addChildren(Shape1257)
HAnimSite1261 = x3d.HAnimSite()
HAnimSite1261.setName("r_clavicale_pt")
HAnimSite1261.setDEF("hanim_r_clavicale_pt")
HAnimSite1261.setTranslation([-0.0115,1.4943,0.04])
#HAnimSite visualization shape
TouchSensor1262 = x3d.TouchSensor()
TouchSensor1262.setDescription("HAnimSite r_clavicale")

HAnimSite1261.addChildren(TouchSensor1262)
Shape1263 = x3d.Shape()
Shape1263.setUSE("HAnimSiteShape")

HAnimSite1261.addChildren(Shape1263)

HAnimSegment1237.addChildren(HAnimSite1261)
HAnimSite1264 = x3d.HAnimSite()
HAnimSite1264.setName("r_acromion_pt")
HAnimSite1264.setDEF("hanim_r_acromion_pt")
HAnimSite1264.setTranslation([-0.1905,1.4791,-0.0431])
#HAnimSite visualization shape
TouchSensor1265 = x3d.TouchSensor()
TouchSensor1265.setDescription("HAnimSite r_acromion")

HAnimSite1264.addChildren(TouchSensor1265)
Shape1266 = x3d.Shape()
Shape1266.setUSE("HAnimSiteShape")

HAnimSite1264.addChildren(Shape1266)

HAnimSegment1237.addChildren(HAnimSite1264)
HAnimSite1267 = x3d.HAnimSite()
HAnimSite1267.setName("r_axilla_ant_pt")
HAnimSite1267.setDEF("hanim_r_axilla_ant_pt")
HAnimSite1267.setTranslation([-0.1626,1.4072,-0.0031])
#HAnimSite visualization shape
TouchSensor1268 = x3d.TouchSensor()
TouchSensor1268.setDescription("HAnimSite r_axilla_ant")

HAnimSite1267.addChildren(TouchSensor1268)
Shape1269 = x3d.Shape()
Shape1269.setUSE("HAnimSiteShape")

HAnimSite1267.addChildren(Shape1269)

HAnimSegment1237.addChildren(HAnimSite1267)
HAnimSite1270 = x3d.HAnimSite()
HAnimSite1270.setName("r_axilla_post_pt")
HAnimSite1270.setDEF("hanim_r_axilla_post_pt")
HAnimSite1270.setTranslation([-0.1603,1.4098,-0.0826])
#HAnimSite visualization shape
TouchSensor1271 = x3d.TouchSensor()
TouchSensor1271.setDescription("HAnimSite r_axilla_post")

HAnimSite1270.addChildren(TouchSensor1271)
Shape1272 = x3d.Shape()
Shape1272.setUSE("HAnimSiteShape")

HAnimSite1270.addChildren(Shape1272)

HAnimSegment1237.addChildren(HAnimSite1270)

HAnimJoint1236.addChildren(HAnimSegment1237)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setName("r_acromioclavicular")
HAnimJoint1273.setDEF("hanim_r_acromioclavicular")
HAnimJoint1273.setCenter([-0.0962,1.4269,-0.0424])
HAnimSegment1274 = x3d.HAnimSegment()
HAnimSegment1274.setName("r_scapula")
HAnimSegment1274.setDEF("hanim_r_scapula")
#<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
TouchSensor1275 = x3d.TouchSensor()
TouchSensor1275.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1274.addChildren(TouchSensor1275)
Transform1276 = x3d.Transform()
Transform1276.setTranslation([-0.0962,1.4269,-0.0424])
Shape1277 = x3d.Shape()
Shape1277.setUSE("HAnimJointShape")

Transform1276.addChildren(Shape1277)

HAnimSegment1274.addChildren(Transform1276)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape1278 = x3d.Shape()
LineSet1279 = x3d.LineSet()
LineSet1279.setVertexCount([2])
Coordinate1280 = x3d.Coordinate()
Coordinate1280.setPoint([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])

LineSet1279.setCoord(Coordinate1280)
ColorRGBA1281 = x3d.ColorRGBA()
ColorRGBA1281.setUSE("HAnimSegmentLineColorRGBA")

LineSet1279.setColor(ColorRGBA1281)

Shape1278.setGeometry(LineSet1279)

HAnimSegment1274.addChildren(Shape1278)

HAnimJoint1273.addChildren(HAnimSegment1274)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.setName("r_shoulder")
HAnimJoint1282.setDEF("hanim_r_shoulder")
HAnimJoint1282.setCenter([-0.2029,1.4376,-0.0387])
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.setName("r_upperarm")
HAnimSegment1283.setDEF("hanim_r_upperarm")
#<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor1284 = x3d.TouchSensor()
TouchSensor1284.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1283.addChildren(TouchSensor1284)
Transform1285 = x3d.Transform()
Transform1285.setTranslation([-0.2029,1.4376,-0.0387])
Shape1286 = x3d.Shape()
Shape1286.setUSE("HAnimJointShape")

Transform1285.addChildren(Shape1286)

HAnimSegment1283.addChildren(Transform1285)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape1287 = x3d.Shape()
LineSet1288 = x3d.LineSet()
LineSet1288.setVertexCount([2])
Coordinate1289 = x3d.Coordinate()
Coordinate1289.setPoint([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])

LineSet1288.setCoord(Coordinate1289)
ColorRGBA1290 = x3d.ColorRGBA()
ColorRGBA1290.setUSE("HAnimSegmentLineColorRGBA")

LineSet1288.setColor(ColorRGBA1290)

Shape1287.setGeometry(LineSet1288)

HAnimSegment1283.addChildren(Shape1287)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape1291 = x3d.Shape()
LineSet1292 = x3d.LineSet()
LineSet1292.setVertexCount([2])
Coordinate1293 = x3d.Coordinate()
Coordinate1293.setPoint([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])

LineSet1292.setCoord(Coordinate1293)
ColorRGBA1294 = x3d.ColorRGBA()
ColorRGBA1294.setUSE("HAnimSiteLineColorRGBA")

LineSet1292.setColor(ColorRGBA1294)

Shape1291.setGeometry(LineSet1292)

HAnimSegment1283.addChildren(Shape1291)
HAnimSite1295 = x3d.HAnimSite()
HAnimSite1295.setName("r_humeral_lateral_epicn_pt")
HAnimSite1295.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite1295.setTranslation([-0.2224,1.1517,-0.1033])
#HAnimSite visualization shape
TouchSensor1296 = x3d.TouchSensor()
TouchSensor1296.setDescription("HAnimSite r_humeral_lateral_epicn")

HAnimSite1295.addChildren(TouchSensor1296)
Shape1297 = x3d.Shape()
Shape1297.setUSE("HAnimSiteShape")

HAnimSite1295.addChildren(Shape1297)

HAnimSegment1283.addChildren(HAnimSite1295)

HAnimJoint1282.addChildren(HAnimSegment1283)
HAnimJoint1298 = x3d.HAnimJoint()
HAnimJoint1298.setName("r_elbow")
HAnimJoint1298.setDEF("hanim_r_elbow")
HAnimJoint1298.setCenter([-0.2014,1.1357,-0.0682])
HAnimSegment1299 = x3d.HAnimSegment()
HAnimSegment1299.setName("r_forearm")
HAnimSegment1299.setDEF("hanim_r_forearm")
#<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
TouchSensor1300 = x3d.TouchSensor()
TouchSensor1300.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1299.addChildren(TouchSensor1300)
Transform1301 = x3d.Transform()
Transform1301.setTranslation([-0.2014,1.1357,-0.0682])
Shape1302 = x3d.Shape()
Shape1302.setUSE("HAnimJointShape")

Transform1301.addChildren(Shape1302)

HAnimSegment1299.addChildren(Transform1301)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape1303 = x3d.Shape()
LineSet1304 = x3d.LineSet()
LineSet1304.setVertexCount([2])
Coordinate1305 = x3d.Coordinate()
Coordinate1305.setPoint([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])

LineSet1304.setCoord(Coordinate1305)
ColorRGBA1306 = x3d.ColorRGBA()
ColorRGBA1306.setUSE("HAnimSegmentLineColorRGBA")

LineSet1304.setColor(ColorRGBA1306)

Shape1303.setGeometry(LineSet1304)

HAnimSegment1299.addChildren(Shape1303)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape1307 = x3d.Shape()
LineSet1308 = x3d.LineSet()
LineSet1308.setVertexCount([2])
Coordinate1309 = x3d.Coordinate()
Coordinate1309.setPoint([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])

LineSet1308.setCoord(Coordinate1309)
ColorRGBA1310 = x3d.ColorRGBA()
ColorRGBA1310.setUSE("HAnimSiteLineColorRGBA")

LineSet1308.setColor(ColorRGBA1310)

Shape1307.setGeometry(LineSet1308)

HAnimSegment1299.addChildren(Shape1307)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape1311 = x3d.Shape()
LineSet1312 = x3d.LineSet()
LineSet1312.setVertexCount([2])
Coordinate1313 = x3d.Coordinate()
Coordinate1313.setPoint([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])

LineSet1312.setCoord(Coordinate1313)
ColorRGBA1314 = x3d.ColorRGBA()
ColorRGBA1314.setUSE("HAnimSiteLineColorRGBA")

LineSet1312.setColor(ColorRGBA1314)

Shape1311.setGeometry(LineSet1312)

HAnimSegment1299.addChildren(Shape1311)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape1315 = x3d.Shape()
LineSet1316 = x3d.LineSet()
LineSet1316.setVertexCount([2])
Coordinate1317 = x3d.Coordinate()
Coordinate1317.setPoint([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])

LineSet1316.setCoord(Coordinate1317)
ColorRGBA1318 = x3d.ColorRGBA()
ColorRGBA1318.setUSE("HAnimSiteLineColorRGBA")

LineSet1316.setColor(ColorRGBA1318)

Shape1315.setGeometry(LineSet1316)

HAnimSegment1299.addChildren(Shape1315)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape1319 = x3d.Shape()
LineSet1320 = x3d.LineSet()
LineSet1320.setVertexCount([2])
Coordinate1321 = x3d.Coordinate()
Coordinate1321.setPoint([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])

LineSet1320.setCoord(Coordinate1321)
ColorRGBA1322 = x3d.ColorRGBA()
ColorRGBA1322.setUSE("HAnimSiteLineColorRGBA")

LineSet1320.setColor(ColorRGBA1322)

Shape1319.setGeometry(LineSet1320)

HAnimSegment1299.addChildren(Shape1319)
HAnimSite1323 = x3d.HAnimSite()
HAnimSite1323.setName("r_radial_styloid_pt")
HAnimSite1323.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1323.setTranslation([-0.1884,0.8676,-0.036])
#HAnimSite visualization shape
TouchSensor1324 = x3d.TouchSensor()
TouchSensor1324.setDescription("HAnimSite r_radial_styloid")

HAnimSite1323.addChildren(TouchSensor1324)
Shape1325 = x3d.Shape()
Shape1325.setUSE("HAnimSiteShape")

HAnimSite1323.addChildren(Shape1325)

HAnimSegment1299.addChildren(HAnimSite1323)
HAnimSite1326 = x3d.HAnimSite()
HAnimSite1326.setName("r_olecranon_pt")
HAnimSite1326.setDEF("hanim_r_olecranon_pt")
HAnimSite1326.setTranslation([-0.1907,1.1405,-0.1065])
#HAnimSite visualization shape
TouchSensor1327 = x3d.TouchSensor()
TouchSensor1327.setDescription("HAnimSite r_olecranon")

HAnimSite1326.addChildren(TouchSensor1327)
Shape1328 = x3d.Shape()
Shape1328.setUSE("HAnimSiteShape")

HAnimSite1326.addChildren(Shape1328)

HAnimSegment1299.addChildren(HAnimSite1326)
HAnimSite1329 = x3d.HAnimSite()
HAnimSite1329.setName("r_humeral_medial_epicn_pt")
HAnimSite1329.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite1329.setTranslation([-0.168,1.1298,-0.1062])
#HAnimSite visualization shape
TouchSensor1330 = x3d.TouchSensor()
TouchSensor1330.setDescription("HAnimSite r_humeral_medial_epicn")

HAnimSite1329.addChildren(TouchSensor1330)
Shape1331 = x3d.Shape()
Shape1331.setUSE("HAnimSiteShape")

HAnimSite1329.addChildren(Shape1331)

HAnimSegment1299.addChildren(HAnimSite1329)
HAnimSite1332 = x3d.HAnimSite()
HAnimSite1332.setName("r_radiale_pt")
HAnimSite1332.setDEF("hanim_r_radiale_pt")
HAnimSite1332.setTranslation([-0.213,1.1305,-0.1091])
#HAnimSite visualization shape
TouchSensor1333 = x3d.TouchSensor()
TouchSensor1333.setDescription("HAnimSite r_radiale")

HAnimSite1332.addChildren(TouchSensor1333)
Shape1334 = x3d.Shape()
Shape1334.setUSE("HAnimSiteShape")

HAnimSite1332.addChildren(Shape1334)

HAnimSegment1299.addChildren(HAnimSite1332)

HAnimJoint1298.addChildren(HAnimSegment1299)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.setName("r_wrist")
HAnimJoint1335.setDEF("hanim_r_wrist")
HAnimJoint1335.setCenter([-0.1984,0.8663,-0.0583])
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.setName("r_hand")
HAnimSegment1336.setDEF("hanim_r_hand")
#<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
TouchSensor1337 = x3d.TouchSensor()
TouchSensor1337.setDescription("HAnimJoint r_wrist, HAnimSegment r_hand")

HAnimSegment1336.addChildren(TouchSensor1337)
Transform1338 = x3d.Transform()
Transform1338.setTranslation([-0.1984,0.8663,-0.0583])
Shape1339 = x3d.Shape()
Shape1339.setUSE("HAnimJointShape")

Transform1338.addChildren(Shape1339)

HAnimSegment1336.addChildren(Transform1338)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape1340 = x3d.Shape()
LineSet1341 = x3d.LineSet()
LineSet1341.setVertexCount([2])
Coordinate1342 = x3d.Coordinate()
Coordinate1342.setPoint([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])

LineSet1341.setCoord(Coordinate1342)
ColorRGBA1343 = x3d.ColorRGBA()
ColorRGBA1343.setUSE("HAnimSegmentLineColorRGBA")

LineSet1341.setColor(ColorRGBA1343)

Shape1340.setGeometry(LineSet1341)

HAnimSegment1336.addChildren(Shape1340)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape1344 = x3d.Shape()
LineSet1345 = x3d.LineSet()
LineSet1345.setVertexCount([2])
Coordinate1346 = x3d.Coordinate()
Coordinate1346.setPoint([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])

LineSet1345.setCoord(Coordinate1346)
ColorRGBA1347 = x3d.ColorRGBA()
ColorRGBA1347.setUSE("HAnimSegmentLineColorRGBA")

LineSet1345.setColor(ColorRGBA1347)

Shape1344.setGeometry(LineSet1345)

HAnimSegment1336.addChildren(Shape1344)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape1348 = x3d.Shape()
LineSet1349 = x3d.LineSet()
LineSet1349.setVertexCount([2])
Coordinate1350 = x3d.Coordinate()
Coordinate1350.setPoint([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])

LineSet1349.setCoord(Coordinate1350)
ColorRGBA1351 = x3d.ColorRGBA()
ColorRGBA1351.setUSE("HAnimSegmentLineColorRGBA")

LineSet1349.setColor(ColorRGBA1351)

Shape1348.setGeometry(LineSet1349)

HAnimSegment1336.addChildren(Shape1348)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape1352 = x3d.Shape()
LineSet1353 = x3d.LineSet()
LineSet1353.setVertexCount([2])
Coordinate1354 = x3d.Coordinate()
Coordinate1354.setPoint([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])

LineSet1353.setCoord(Coordinate1354)
ColorRGBA1355 = x3d.ColorRGBA()
ColorRGBA1355.setUSE("HAnimSegmentLineColorRGBA")

LineSet1353.setColor(ColorRGBA1355)

Shape1352.setGeometry(LineSet1353)

HAnimSegment1336.addChildren(Shape1352)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape1356 = x3d.Shape()
LineSet1357 = x3d.LineSet()
LineSet1357.setVertexCount([2])
Coordinate1358 = x3d.Coordinate()
Coordinate1358.setPoint([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])

LineSet1357.setCoord(Coordinate1358)
ColorRGBA1359 = x3d.ColorRGBA()
ColorRGBA1359.setUSE("HAnimSegmentLineColorRGBA")

LineSet1357.setColor(ColorRGBA1359)

Shape1356.setGeometry(LineSet1357)

HAnimSegment1336.addChildren(Shape1356)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape1360 = x3d.Shape()
LineSet1361 = x3d.LineSet()
LineSet1361.setVertexCount([2])
Coordinate1362 = x3d.Coordinate()
Coordinate1362.setPoint([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])

LineSet1361.setCoord(Coordinate1362)
ColorRGBA1363 = x3d.ColorRGBA()
ColorRGBA1363.setUSE("HAnimSiteLineColorRGBA")

LineSet1361.setColor(ColorRGBA1363)

Shape1360.setGeometry(LineSet1361)

HAnimSegment1336.addChildren(Shape1360)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.setVertexCount([2])
Coordinate1366 = x3d.Coordinate()
Coordinate1366.setPoint([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])

LineSet1365.setCoord(Coordinate1366)
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.setUSE("HAnimSiteLineColorRGBA")

LineSet1365.setColor(ColorRGBA1367)

Shape1364.setGeometry(LineSet1365)

HAnimSegment1336.addChildren(Shape1364)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape1368 = x3d.Shape()
LineSet1369 = x3d.LineSet()
LineSet1369.setVertexCount([2])
Coordinate1370 = x3d.Coordinate()
Coordinate1370.setPoint([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])

LineSet1369.setCoord(Coordinate1370)
ColorRGBA1371 = x3d.ColorRGBA()
ColorRGBA1371.setUSE("HAnimSiteLineColorRGBA")

LineSet1369.setColor(ColorRGBA1371)

Shape1368.setGeometry(LineSet1369)

HAnimSegment1336.addChildren(Shape1368)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape1372 = x3d.Shape()
LineSet1373 = x3d.LineSet()
LineSet1373.setVertexCount([2])
Coordinate1374 = x3d.Coordinate()
Coordinate1374.setPoint([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])

LineSet1373.setCoord(Coordinate1374)
ColorRGBA1375 = x3d.ColorRGBA()
ColorRGBA1375.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1373.setColor(ColorRGBA1375)

Shape1372.setGeometry(LineSet1373)

HAnimSegment1336.addChildren(Shape1372)
HAnimSite1376 = x3d.HAnimSite()
HAnimSite1376.setName("r_metacarpal_pha2_pt")
HAnimSite1376.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite1376.setTranslation([-0.1977,0.8169,-0.0177])
#HAnimSite visualization shape
TouchSensor1377 = x3d.TouchSensor()
TouchSensor1377.setDescription("HAnimSite r_metacarpal_pha2")

HAnimSite1376.addChildren(TouchSensor1377)
Shape1378 = x3d.Shape()
Shape1378.setUSE("HAnimSiteShape")

HAnimSite1376.addChildren(Shape1378)

HAnimSegment1336.addChildren(HAnimSite1376)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.setName("r_ulnar_styloid_pt")
HAnimSite1379.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1379.setTranslation([-0.2117,0.8562,-0.0584])
#HAnimSite visualization shape
TouchSensor1380 = x3d.TouchSensor()
TouchSensor1380.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite1379.addChildren(TouchSensor1380)
Shape1381 = x3d.Shape()
Shape1381.setUSE("HAnimSiteShape")

HAnimSite1379.addChildren(Shape1381)

HAnimSegment1336.addChildren(HAnimSite1379)
HAnimSite1382 = x3d.HAnimSite()
HAnimSite1382.setName("r_metacarpal_pha5_pt")
HAnimSite1382.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite1382.setTranslation([-0.1929,0.789,-0.1064])
#HAnimSite visualization shape
TouchSensor1383 = x3d.TouchSensor()
TouchSensor1383.setDescription("HAnimSite r_metacarpal_pha5")

HAnimSite1382.addChildren(TouchSensor1383)
Shape1384 = x3d.Shape()
Shape1384.setUSE("HAnimSiteShape")

HAnimSite1382.addChildren(Shape1384)

HAnimSegment1336.addChildren(HAnimSite1382)
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.setName("r_hand_front_view")
HAnimSite1385.setDEF("hanim_r_hand_front_view")
HAnimSite1385.setTranslation([-0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1386 = x3d.TouchSensor()
TouchSensor1386.setDescription("HAnimSite r_hand_front_view")

HAnimSite1385.addChildren(TouchSensor1386)
Shape1387 = x3d.Shape()
Shape1387.setUSE("HAnimSiteShape")

HAnimSite1385.addChildren(Shape1387)
Viewpoint1388 = x3d.Viewpoint()
Viewpoint1388.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1388.setCenterOfRotation([0,0.7,0])
Viewpoint1388.setDescription("right hand front")
Viewpoint1388.setPosition([0,0,0])

HAnimSite1385.addChildren(Viewpoint1388)
#HAnimSite/Viewpoint visualization shape
Anchor1389 = x3d.Anchor()
Anchor1389.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1389.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1390 = x3d.LOD()
LOD1390.setForceTransitions(True)
LOD1390.setRange([0.04])
WorldInfo1391 = x3d.WorldInfo()
WorldInfo1391.setInfo(["hide diamond when close"])

LOD1390.addChildren(WorldInfo1391)
Shape1392 = x3d.Shape()
Shape1392.setUSE("HAnimSiteViewpointShape")

LOD1390.addChildren(Shape1392)

Anchor1389.addChildren(LOD1390)

HAnimSite1385.addChildren(Anchor1389)

HAnimSegment1336.addChildren(HAnimSite1385)

HAnimJoint1335.addChildren(HAnimSegment1336)
HAnimJoint1393 = x3d.HAnimJoint()
HAnimJoint1393.setName("r_thumb1")
HAnimJoint1393.setDEF("hanim_r_thumb1")
HAnimJoint1393.setCenter([-0.1924,0.8472,-0.0534])
HAnimSegment1394 = x3d.HAnimSegment()
HAnimSegment1394.setName("r_thumb_metacarpal")
HAnimSegment1394.setDEF("hanim_r_thumb_metacarpal")
#<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor1395 = x3d.TouchSensor()
TouchSensor1395.setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")

HAnimSegment1394.addChildren(TouchSensor1395)
Transform1396 = x3d.Transform()
Transform1396.setTranslation([-0.1924,0.8472,-0.0534])
Shape1397 = x3d.Shape()
Shape1397.setUSE("HAnimJointShape")

Transform1396.addChildren(Shape1397)

HAnimSegment1394.addChildren(Transform1396)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape1398 = x3d.Shape()
LineSet1399 = x3d.LineSet()
LineSet1399.setVertexCount([2])
Coordinate1400 = x3d.Coordinate()
Coordinate1400.setPoint([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])

LineSet1399.setCoord(Coordinate1400)
ColorRGBA1401 = x3d.ColorRGBA()
ColorRGBA1401.setUSE("HAnimSegmentLineColorRGBA")

LineSet1399.setColor(ColorRGBA1401)

Shape1398.setGeometry(LineSet1399)

HAnimSegment1394.addChildren(Shape1398)

HAnimJoint1393.addChildren(HAnimSegment1394)
HAnimJoint1402 = x3d.HAnimJoint()
HAnimJoint1402.setName("r_thumb2")
HAnimJoint1402.setDEF("hanim_r_thumb2")
HAnimJoint1402.setCenter([-0.1951,0.8226,0.0246])
HAnimSegment1403 = x3d.HAnimSegment()
HAnimSegment1403.setName("r_thumb_proximal")
HAnimSegment1403.setDEF("hanim_r_thumb_proximal")
#<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor1404 = x3d.TouchSensor()
TouchSensor1404.setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")

HAnimSegment1403.addChildren(TouchSensor1404)
Transform1405 = x3d.Transform()
Transform1405.setTranslation([-0.1951,0.8226,0.0246])
Shape1406 = x3d.Shape()
Shape1406.setUSE("HAnimJointShape")

Transform1405.addChildren(Shape1406)

HAnimSegment1403.addChildren(Transform1405)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape1407 = x3d.Shape()
LineSet1408 = x3d.LineSet()
LineSet1408.setVertexCount([2])
Coordinate1409 = x3d.Coordinate()
Coordinate1409.setPoint([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])

LineSet1408.setCoord(Coordinate1409)
ColorRGBA1410 = x3d.ColorRGBA()
ColorRGBA1410.setUSE("HAnimSegmentLineColorRGBA")

LineSet1408.setColor(ColorRGBA1410)

Shape1407.setGeometry(LineSet1408)

HAnimSegment1403.addChildren(Shape1407)

HAnimJoint1402.addChildren(HAnimSegment1403)
HAnimJoint1411 = x3d.HAnimJoint()
HAnimJoint1411.setName("r_thumb3")
HAnimJoint1411.setDEF("hanim_r_thumb3")
HAnimJoint1411.setCenter([-0.1955,0.8159,0.0464])
HAnimSegment1412 = x3d.HAnimSegment()
HAnimSegment1412.setName("r_thumb_distal")
HAnimSegment1412.setDEF("hanim_r_thumb_distal")
#<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
TouchSensor1413 = x3d.TouchSensor()
TouchSensor1413.setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")

HAnimSegment1412.addChildren(TouchSensor1413)
Transform1414 = x3d.Transform()
Transform1414.setTranslation([-0.1955,0.8159,0.0464])
Shape1415 = x3d.Shape()
Shape1415.setUSE("HAnimJointShape")

Transform1414.addChildren(Shape1415)

HAnimSegment1412.addChildren(Transform1414)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape1416 = x3d.Shape()
LineSet1417 = x3d.LineSet()
LineSet1417.setVertexCount([2])
Coordinate1418 = x3d.Coordinate()
Coordinate1418.setPoint([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])

LineSet1417.setCoord(Coordinate1418)
ColorRGBA1419 = x3d.ColorRGBA()
ColorRGBA1419.setUSE("HAnimSiteLineColorRGBA")

LineSet1417.setColor(ColorRGBA1419)

Shape1416.setGeometry(LineSet1417)

HAnimSegment1412.addChildren(Shape1416)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.setName("r_thumb_distal_tip")
HAnimSite1420.setDEF("hanim_r_thumb_distal_tip")
HAnimSite1420.setTranslation([-0.1869,0.809,0.082])
#HAnimSite visualization shape
TouchSensor1421 = x3d.TouchSensor()
TouchSensor1421.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1420.addChildren(TouchSensor1421)
Shape1422 = x3d.Shape()
Shape1422.setUSE("HAnimSiteShape")

HAnimSite1420.addChildren(Shape1422)

HAnimSegment1412.addChildren(HAnimSite1420)

HAnimJoint1411.addChildren(HAnimSegment1412)

HAnimJoint1402.addChildren(HAnimJoint1411)

HAnimJoint1393.addChildren(HAnimJoint1402)

HAnimJoint1335.addChildren(HAnimJoint1393)
HAnimJoint1423 = x3d.HAnimJoint()
HAnimJoint1423.setName("r_index0")
HAnimJoint1423.setDEF("hanim_r_index0")
HAnimJoint1423.setCenter([-0.1983,0.8024,-0.028])
HAnimSegment1424 = x3d.HAnimSegment()
HAnimSegment1424.setName("r_index_metacarpal")
HAnimSegment1424.setDEF("hanim_r_index_metacarpal")
#<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor1425 = x3d.TouchSensor()
TouchSensor1425.setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")

HAnimSegment1424.addChildren(TouchSensor1425)
Transform1426 = x3d.Transform()
Transform1426.setTranslation([-0.1983,0.8024,-0.028])
Shape1427 = x3d.Shape()
Shape1427.setUSE("HAnimJointShape")

Transform1426.addChildren(Shape1427)

HAnimSegment1424.addChildren(Transform1426)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape1428 = x3d.Shape()
LineSet1429 = x3d.LineSet()
LineSet1429.setVertexCount([2])
Coordinate1430 = x3d.Coordinate()
Coordinate1430.setPoint([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])

LineSet1429.setCoord(Coordinate1430)
ColorRGBA1431 = x3d.ColorRGBA()
ColorRGBA1431.setUSE("HAnimSegmentLineColorRGBA")

LineSet1429.setColor(ColorRGBA1431)

Shape1428.setGeometry(LineSet1429)

HAnimSegment1424.addChildren(Shape1428)

HAnimJoint1423.addChildren(HAnimSegment1424)
HAnimJoint1432 = x3d.HAnimJoint()
HAnimJoint1432.setName("r_index1")
HAnimJoint1432.setDEF("hanim_r_index1")
HAnimJoint1432.setCenter([-0.1983,0.7815,-0.028])
HAnimSegment1433 = x3d.HAnimSegment()
HAnimSegment1433.setName("r_index_proximal")
HAnimSegment1433.setDEF("hanim_r_index_proximal")
#<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
TouchSensor1434 = x3d.TouchSensor()
TouchSensor1434.setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal")

HAnimSegment1433.addChildren(TouchSensor1434)
Transform1435 = x3d.Transform()
Transform1435.setTranslation([-0.1983,0.7815,-0.028])
Shape1436 = x3d.Shape()
Shape1436.setUSE("HAnimJointShape")

Transform1435.addChildren(Shape1436)

HAnimSegment1433.addChildren(Transform1435)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape1437 = x3d.Shape()
LineSet1438 = x3d.LineSet()
LineSet1438.setVertexCount([2])
Coordinate1439 = x3d.Coordinate()
Coordinate1439.setPoint([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])

LineSet1438.setCoord(Coordinate1439)
ColorRGBA1440 = x3d.ColorRGBA()
ColorRGBA1440.setUSE("HAnimSegmentLineColorRGBA")

LineSet1438.setColor(ColorRGBA1440)

Shape1437.setGeometry(LineSet1438)

HAnimSegment1433.addChildren(Shape1437)

HAnimJoint1432.addChildren(HAnimSegment1433)
HAnimJoint1441 = x3d.HAnimJoint()
HAnimJoint1441.setName("r_index2")
HAnimJoint1441.setDEF("hanim_r_index2")
HAnimJoint1441.setCenter([-0.2017,0.7363,-0.0248])
HAnimSegment1442 = x3d.HAnimSegment()
HAnimSegment1442.setName("r_index_middle")
HAnimSegment1442.setDEF("hanim_r_index_middle")
#<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
TouchSensor1443 = x3d.TouchSensor()
TouchSensor1443.setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle")

HAnimSegment1442.addChildren(TouchSensor1443)
Transform1444 = x3d.Transform()
Transform1444.setTranslation([-0.2017,0.7363,-0.0248])
Shape1445 = x3d.Shape()
Shape1445.setUSE("HAnimJointShape")

Transform1444.addChildren(Shape1445)

HAnimSegment1442.addChildren(Transform1444)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape1446 = x3d.Shape()
LineSet1447 = x3d.LineSet()
LineSet1447.setVertexCount([2])
Coordinate1448 = x3d.Coordinate()
Coordinate1448.setPoint([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])

LineSet1447.setCoord(Coordinate1448)
ColorRGBA1449 = x3d.ColorRGBA()
ColorRGBA1449.setUSE("HAnimSegmentLineColorRGBA")

LineSet1447.setColor(ColorRGBA1449)

Shape1446.setGeometry(LineSet1447)

HAnimSegment1442.addChildren(Shape1446)

HAnimJoint1441.addChildren(HAnimSegment1442)
HAnimJoint1450 = x3d.HAnimJoint()
HAnimJoint1450.setName("r_index3")
HAnimJoint1450.setDEF("hanim_r_index3")
HAnimJoint1450.setCenter([-0.2028,0.7139,-0.0236])
HAnimSegment1451 = x3d.HAnimSegment()
HAnimSegment1451.setName("r_index_distal")
HAnimSegment1451.setDEF("hanim_r_index_distal")
#<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
TouchSensor1452 = x3d.TouchSensor()
TouchSensor1452.setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal")

HAnimSegment1451.addChildren(TouchSensor1452)
Transform1453 = x3d.Transform()
Transform1453.setTranslation([-0.2028,0.7139,-0.0236])
Shape1454 = x3d.Shape()
Shape1454.setUSE("HAnimJointShape")

Transform1453.addChildren(Shape1454)

HAnimSegment1451.addChildren(Transform1453)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape1455 = x3d.Shape()
LineSet1456 = x3d.LineSet()
LineSet1456.setVertexCount([2])
Coordinate1457 = x3d.Coordinate()
Coordinate1457.setPoint([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])

LineSet1456.setCoord(Coordinate1457)
ColorRGBA1458 = x3d.ColorRGBA()
ColorRGBA1458.setUSE("HAnimSiteLineColorRGBA")

LineSet1456.setColor(ColorRGBA1458)

Shape1455.setGeometry(LineSet1456)

HAnimSegment1451.addChildren(Shape1455)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape1459 = x3d.Shape()
LineSet1460 = x3d.LineSet()
LineSet1460.setVertexCount([2])
Coordinate1461 = x3d.Coordinate()
Coordinate1461.setPoint([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])

LineSet1460.setCoord(Coordinate1461)
ColorRGBA1462 = x3d.ColorRGBA()
ColorRGBA1462.setUSE("HAnimSiteLineColorRGBA")

LineSet1460.setColor(ColorRGBA1462)

Shape1459.setGeometry(LineSet1460)

HAnimSegment1451.addChildren(Shape1459)
HAnimSite1463 = x3d.HAnimSite()
HAnimSite1463.setName("r_index_distal_tip")
HAnimSite1463.setDEF("hanim_r_index_distal_tip")
HAnimSite1463.setTranslation([-0.198,0.6883,-0.018])
#HAnimSite visualization shape
TouchSensor1464 = x3d.TouchSensor()
TouchSensor1464.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1463.addChildren(TouchSensor1464)
Shape1465 = x3d.Shape()
Shape1465.setUSE("HAnimSiteShape")

HAnimSite1463.addChildren(Shape1465)

HAnimSegment1451.addChildren(HAnimSite1463)
HAnimSite1466 = x3d.HAnimSite()
HAnimSite1466.setName("r_dactylion_pt")
HAnimSite1466.setDEF("hanim_r_dactylion_pt")
HAnimSite1466.setTranslation([-0.1941,0.6772,-0.0423])
#HAnimSite visualization shape
TouchSensor1467 = x3d.TouchSensor()
TouchSensor1467.setDescription("HAnimSite r_dactylion")

HAnimSite1466.addChildren(TouchSensor1467)
Shape1468 = x3d.Shape()
Shape1468.setUSE("HAnimSiteShape")

HAnimSite1466.addChildren(Shape1468)

HAnimSegment1451.addChildren(HAnimSite1466)

HAnimJoint1450.addChildren(HAnimSegment1451)

HAnimJoint1441.addChildren(HAnimJoint1450)

HAnimJoint1432.addChildren(HAnimJoint1441)

HAnimJoint1423.addChildren(HAnimJoint1432)

HAnimJoint1335.addChildren(HAnimJoint1423)
HAnimJoint1469 = x3d.HAnimJoint()
HAnimJoint1469.setName("r_middle0")
HAnimJoint1469.setDEF("hanim_r_middle0")
HAnimJoint1469.setCenter([-0.1987,0.8029,-0.053])
HAnimSegment1470 = x3d.HAnimSegment()
HAnimSegment1470.setName("r_middle_metacarpal")
HAnimSegment1470.setDEF("hanim_r_middle_metacarpal")
#<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor1471 = x3d.TouchSensor()
TouchSensor1471.setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")

HAnimSegment1470.addChildren(TouchSensor1471)
Transform1472 = x3d.Transform()
Transform1472.setTranslation([-0.1987,0.8029,-0.053])
Shape1473 = x3d.Shape()
Shape1473.setUSE("HAnimJointShape")

Transform1472.addChildren(Shape1473)

HAnimSegment1470.addChildren(Transform1472)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape1474 = x3d.Shape()
LineSet1475 = x3d.LineSet()
LineSet1475.setVertexCount([2])
Coordinate1476 = x3d.Coordinate()
Coordinate1476.setPoint([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])

LineSet1475.setCoord(Coordinate1476)
ColorRGBA1477 = x3d.ColorRGBA()
ColorRGBA1477.setUSE("HAnimSegmentLineColorRGBA")

LineSet1475.setColor(ColorRGBA1477)

Shape1474.setGeometry(LineSet1475)

HAnimSegment1470.addChildren(Shape1474)

HAnimJoint1469.addChildren(HAnimSegment1470)
HAnimJoint1478 = x3d.HAnimJoint()
HAnimJoint1478.setName("r_middle1")
HAnimJoint1478.setDEF("hanim_r_middle1")
HAnimJoint1478.setCenter([-0.1987,0.7818,-0.053])
HAnimSegment1479 = x3d.HAnimSegment()
HAnimSegment1479.setName("r_middle_proximal")
HAnimSegment1479.setDEF("hanim_r_middle_proximal")
#<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
TouchSensor1480 = x3d.TouchSensor()
TouchSensor1480.setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")

HAnimSegment1479.addChildren(TouchSensor1480)
Transform1481 = x3d.Transform()
Transform1481.setTranslation([-0.1987,0.7818,-0.053])
Shape1482 = x3d.Shape()
Shape1482.setUSE("HAnimJointShape")

Transform1481.addChildren(Shape1482)

HAnimSegment1479.addChildren(Transform1481)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape1483 = x3d.Shape()
LineSet1484 = x3d.LineSet()
LineSet1484.setVertexCount([2])
Coordinate1485 = x3d.Coordinate()
Coordinate1485.setPoint([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])

LineSet1484.setCoord(Coordinate1485)
ColorRGBA1486 = x3d.ColorRGBA()
ColorRGBA1486.setUSE("HAnimSegmentLineColorRGBA")

LineSet1484.setColor(ColorRGBA1486)

Shape1483.setGeometry(LineSet1484)

HAnimSegment1479.addChildren(Shape1483)

HAnimJoint1478.addChildren(HAnimSegment1479)
HAnimJoint1487 = x3d.HAnimJoint()
HAnimJoint1487.setName("r_middle2")
HAnimJoint1487.setDEF("hanim_r_middle2")
HAnimJoint1487.setCenter([-0.2013,0.7273,-0.0503])
HAnimSegment1488 = x3d.HAnimSegment()
HAnimSegment1488.setName("r_middle_middle")
HAnimSegment1488.setDEF("hanim_r_middle_middle")
#<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
TouchSensor1489 = x3d.TouchSensor()
TouchSensor1489.setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle")

HAnimSegment1488.addChildren(TouchSensor1489)
Transform1490 = x3d.Transform()
Transform1490.setTranslation([-0.2013,0.7273,-0.0503])
Shape1491 = x3d.Shape()
Shape1491.setUSE("HAnimJointShape")

Transform1490.addChildren(Shape1491)

HAnimSegment1488.addChildren(Transform1490)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape1492 = x3d.Shape()
LineSet1493 = x3d.LineSet()
LineSet1493.setVertexCount([2])
Coordinate1494 = x3d.Coordinate()
Coordinate1494.setPoint([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])

LineSet1493.setCoord(Coordinate1494)
ColorRGBA1495 = x3d.ColorRGBA()
ColorRGBA1495.setUSE("HAnimSegmentLineColorRGBA")

LineSet1493.setColor(ColorRGBA1495)

Shape1492.setGeometry(LineSet1493)

HAnimSegment1488.addChildren(Shape1492)

HAnimJoint1487.addChildren(HAnimSegment1488)
HAnimJoint1496 = x3d.HAnimJoint()
HAnimJoint1496.setName("r_middle3")
HAnimJoint1496.setDEF("hanim_r_middle3")
HAnimJoint1496.setCenter([-0.2026,0.7011,-0.0494])
HAnimSegment1497 = x3d.HAnimSegment()
HAnimSegment1497.setName("r_middle_distal")
HAnimSegment1497.setDEF("hanim_r_middle_distal")
#<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
TouchSensor1498 = x3d.TouchSensor()
TouchSensor1498.setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal")

HAnimSegment1497.addChildren(TouchSensor1498)
Transform1499 = x3d.Transform()
Transform1499.setTranslation([-0.2026,0.7011,-0.0494])
Shape1500 = x3d.Shape()
Shape1500.setUSE("HAnimJointShape")

Transform1499.addChildren(Shape1500)

HAnimSegment1497.addChildren(Transform1499)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape1501 = x3d.Shape()
LineSet1502 = x3d.LineSet()
LineSet1502.setVertexCount([2])
Coordinate1503 = x3d.Coordinate()
Coordinate1503.setPoint([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])

LineSet1502.setCoord(Coordinate1503)
ColorRGBA1504 = x3d.ColorRGBA()
ColorRGBA1504.setUSE("HAnimSiteLineColorRGBA")

LineSet1502.setColor(ColorRGBA1504)

Shape1501.setGeometry(LineSet1502)

HAnimSegment1497.addChildren(Shape1501)
HAnimSite1505 = x3d.HAnimSite()
HAnimSite1505.setName("r_middle_distal_tip")
HAnimSite1505.setDEF("hanim_r_middle_distal_tip")
HAnimSite1505.setTranslation([-0.1969,0.6758,-0.0427])
#HAnimSite visualization shape
TouchSensor1506 = x3d.TouchSensor()
TouchSensor1506.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1505.addChildren(TouchSensor1506)
Shape1507 = x3d.Shape()
Shape1507.setUSE("HAnimSiteShape")

HAnimSite1505.addChildren(Shape1507)

HAnimSegment1497.addChildren(HAnimSite1505)

HAnimJoint1496.addChildren(HAnimSegment1497)

HAnimJoint1487.addChildren(HAnimJoint1496)

HAnimJoint1478.addChildren(HAnimJoint1487)

HAnimJoint1469.addChildren(HAnimJoint1478)

HAnimJoint1335.addChildren(HAnimJoint1469)
HAnimJoint1508 = x3d.HAnimJoint()
HAnimJoint1508.setName("r_ring0")
HAnimJoint1508.setDEF("hanim_r_ring0")
HAnimJoint1508.setCenter([-0.1956,0.8019,-0.0794])
HAnimSegment1509 = x3d.HAnimSegment()
HAnimSegment1509.setName("r_ring_metacarpal")
HAnimSegment1509.setDEF("hanim_r_ring_metacarpal")
#<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor1510 = x3d.TouchSensor()
TouchSensor1510.setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")

HAnimSegment1509.addChildren(TouchSensor1510)
Transform1511 = x3d.Transform()
Transform1511.setTranslation([-0.1956,0.8019,-0.0794])
Shape1512 = x3d.Shape()
Shape1512.setUSE("HAnimJointShape")

Transform1511.addChildren(Shape1512)

HAnimSegment1509.addChildren(Transform1511)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape1513 = x3d.Shape()
LineSet1514 = x3d.LineSet()
LineSet1514.setVertexCount([2])
Coordinate1515 = x3d.Coordinate()
Coordinate1515.setPoint([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])

LineSet1514.setCoord(Coordinate1515)
ColorRGBA1516 = x3d.ColorRGBA()
ColorRGBA1516.setUSE("HAnimSegmentLineColorRGBA")

LineSet1514.setColor(ColorRGBA1516)

Shape1513.setGeometry(LineSet1514)

HAnimSegment1509.addChildren(Shape1513)

HAnimJoint1508.addChildren(HAnimSegment1509)
HAnimJoint1517 = x3d.HAnimJoint()
HAnimJoint1517.setName("r_ring1")
HAnimJoint1517.setDEF("hanim_r_ring1")
HAnimJoint1517.setCenter([-0.1956,0.7815,-0.0794])
HAnimSegment1518 = x3d.HAnimSegment()
HAnimSegment1518.setName("r_ring_proximal")
HAnimSegment1518.setDEF("hanim_r_ring_proximal")
#<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
TouchSensor1519 = x3d.TouchSensor()
TouchSensor1519.setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")

HAnimSegment1518.addChildren(TouchSensor1519)
Transform1520 = x3d.Transform()
Transform1520.setTranslation([-0.1956,0.7815,-0.0794])
Shape1521 = x3d.Shape()
Shape1521.setUSE("HAnimJointShape")

Transform1520.addChildren(Shape1521)

HAnimSegment1518.addChildren(Transform1520)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape1522 = x3d.Shape()
LineSet1523 = x3d.LineSet()
LineSet1523.setVertexCount([2])
Coordinate1524 = x3d.Coordinate()
Coordinate1524.setPoint([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])

LineSet1523.setCoord(Coordinate1524)
ColorRGBA1525 = x3d.ColorRGBA()
ColorRGBA1525.setUSE("HAnimSegmentLineColorRGBA")

LineSet1523.setColor(ColorRGBA1525)

Shape1522.setGeometry(LineSet1523)

HAnimSegment1518.addChildren(Shape1522)

HAnimJoint1517.addChildren(HAnimSegment1518)
HAnimJoint1526 = x3d.HAnimJoint()
HAnimJoint1526.setName("r_ring2")
HAnimJoint1526.setDEF("hanim_r_ring2")
HAnimJoint1526.setCenter([-0.1973,0.7287,-0.0777])
HAnimSegment1527 = x3d.HAnimSegment()
HAnimSegment1527.setName("r_ring_middle")
HAnimSegment1527.setDEF("hanim_r_ring_middle")
#<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
TouchSensor1528 = x3d.TouchSensor()
TouchSensor1528.setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle")

HAnimSegment1527.addChildren(TouchSensor1528)
Transform1529 = x3d.Transform()
Transform1529.setTranslation([-0.1973,0.7287,-0.0777])
Shape1530 = x3d.Shape()
Shape1530.setUSE("HAnimJointShape")

Transform1529.addChildren(Shape1530)

HAnimSegment1527.addChildren(Transform1529)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape1531 = x3d.Shape()
LineSet1532 = x3d.LineSet()
LineSet1532.setVertexCount([2])
Coordinate1533 = x3d.Coordinate()
Coordinate1533.setPoint([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])

LineSet1532.setCoord(Coordinate1533)
ColorRGBA1534 = x3d.ColorRGBA()
ColorRGBA1534.setUSE("HAnimSegmentLineColorRGBA")

LineSet1532.setColor(ColorRGBA1534)

Shape1531.setGeometry(LineSet1532)

HAnimSegment1527.addChildren(Shape1531)

HAnimJoint1526.addChildren(HAnimSegment1527)
HAnimJoint1535 = x3d.HAnimJoint()
HAnimJoint1535.setName("r_ring3")
HAnimJoint1535.setDEF("hanim_r_ring3")
HAnimJoint1535.setCenter([-0.1983,0.7045,-0.0767])
HAnimSegment1536 = x3d.HAnimSegment()
HAnimSegment1536.setName("r_ring_distal")
HAnimSegment1536.setDEF("hanim_r_ring_distal")
#<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal")

HAnimSegment1536.addChildren(TouchSensor1537)
Transform1538 = x3d.Transform()
Transform1538.setTranslation([-0.1983,0.7045,-0.0767])
Shape1539 = x3d.Shape()
Shape1539.setUSE("HAnimJointShape")

Transform1538.addChildren(Shape1539)

HAnimSegment1536.addChildren(Transform1538)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape1540 = x3d.Shape()
LineSet1541 = x3d.LineSet()
LineSet1541.setVertexCount([2])
Coordinate1542 = x3d.Coordinate()
Coordinate1542.setPoint([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])

LineSet1541.setCoord(Coordinate1542)
ColorRGBA1543 = x3d.ColorRGBA()
ColorRGBA1543.setUSE("HAnimSiteLineColorRGBA")

LineSet1541.setColor(ColorRGBA1543)

Shape1540.setGeometry(LineSet1541)

HAnimSegment1536.addChildren(Shape1540)
HAnimSite1544 = x3d.HAnimSite()
HAnimSite1544.setName("r_ring_distal_tip")
HAnimSite1544.setDEF("hanim_r_ring_distal_tip")
HAnimSite1544.setTranslation([-0.1934,0.6778,-0.0693])
#HAnimSite visualization shape
TouchSensor1545 = x3d.TouchSensor()
TouchSensor1545.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1544.addChildren(TouchSensor1545)
Shape1546 = x3d.Shape()
Shape1546.setUSE("HAnimSiteShape")

HAnimSite1544.addChildren(Shape1546)

HAnimSegment1536.addChildren(HAnimSite1544)

HAnimJoint1535.addChildren(HAnimSegment1536)

HAnimJoint1526.addChildren(HAnimJoint1535)

HAnimJoint1517.addChildren(HAnimJoint1526)

HAnimJoint1508.addChildren(HAnimJoint1517)

HAnimJoint1335.addChildren(HAnimJoint1508)
HAnimJoint1547 = x3d.HAnimJoint()
HAnimJoint1547.setName("r_pinky0")
HAnimJoint1547.setDEF("hanim_r_pinky0")
HAnimJoint1547.setCenter([-0.1925,0.8066,-0.1036])
HAnimSegment1548 = x3d.HAnimSegment()
HAnimSegment1548.setName("r_pinky_metacarpal")
HAnimSegment1548.setDEF("hanim_r_pinky_metacarpal")
#<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor1549 = x3d.TouchSensor()
TouchSensor1549.setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")

HAnimSegment1548.addChildren(TouchSensor1549)
Transform1550 = x3d.Transform()
Transform1550.setTranslation([-0.1925,0.8066,-0.1036])
Shape1551 = x3d.Shape()
Shape1551.setUSE("HAnimJointShape")

Transform1550.addChildren(Shape1551)

HAnimSegment1548.addChildren(Transform1550)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape1552 = x3d.Shape()
LineSet1553 = x3d.LineSet()
LineSet1553.setVertexCount([2])
Coordinate1554 = x3d.Coordinate()
Coordinate1554.setPoint([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])

LineSet1553.setCoord(Coordinate1554)
ColorRGBA1555 = x3d.ColorRGBA()
ColorRGBA1555.setUSE("HAnimSegmentLineColorRGBA")

LineSet1553.setColor(ColorRGBA1555)

Shape1552.setGeometry(LineSet1553)

HAnimSegment1548.addChildren(Shape1552)

HAnimJoint1547.addChildren(HAnimSegment1548)
HAnimJoint1556 = x3d.HAnimJoint()
HAnimJoint1556.setName("r_pinky1")
HAnimJoint1556.setDEF("hanim_r_pinky1")
HAnimJoint1556.setCenter([-0.1925,0.7866,-0.1036])
HAnimSegment1557 = x3d.HAnimSegment()
HAnimSegment1557.setName("r_pinky_proximal")
HAnimSegment1557.setDEF("hanim_r_pinky_proximal")
#<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor1558 = x3d.TouchSensor()
TouchSensor1558.setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")

HAnimSegment1557.addChildren(TouchSensor1558)
Transform1559 = x3d.Transform()
Transform1559.setTranslation([-0.1925,0.7866,-0.1036])
Shape1560 = x3d.Shape()
Shape1560.setUSE("HAnimJointShape")

Transform1559.addChildren(Shape1560)

HAnimSegment1557.addChildren(Transform1559)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape1561 = x3d.Shape()
LineSet1562 = x3d.LineSet()
LineSet1562.setVertexCount([2])
Coordinate1563 = x3d.Coordinate()
Coordinate1563.setPoint([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])

LineSet1562.setCoord(Coordinate1563)
ColorRGBA1564 = x3d.ColorRGBA()
ColorRGBA1564.setUSE("HAnimSegmentLineColorRGBA")

LineSet1562.setColor(ColorRGBA1564)

Shape1561.setGeometry(LineSet1562)

HAnimSegment1557.addChildren(Shape1561)

HAnimJoint1556.addChildren(HAnimSegment1557)
HAnimJoint1565 = x3d.HAnimJoint()
HAnimJoint1565.setName("r_pinky2")
HAnimJoint1565.setDEF("hanim_r_pinky2")
HAnimJoint1565.setCenter([-0.1938,0.7452,-0.1024])
HAnimSegment1566 = x3d.HAnimSegment()
HAnimSegment1566.setName("r_pinky_middle")
HAnimSegment1566.setDEF("hanim_r_pinky_middle")
#<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")

HAnimSegment1566.addChildren(TouchSensor1567)
Transform1568 = x3d.Transform()
Transform1568.setTranslation([-0.1938,0.7452,-0.1024])
Shape1569 = x3d.Shape()
Shape1569.setUSE("HAnimJointShape")

Transform1568.addChildren(Shape1569)

HAnimSegment1566.addChildren(Transform1568)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape1570 = x3d.Shape()
LineSet1571 = x3d.LineSet()
LineSet1571.setVertexCount([2])
Coordinate1572 = x3d.Coordinate()
Coordinate1572.setPoint([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])

LineSet1571.setCoord(Coordinate1572)
ColorRGBA1573 = x3d.ColorRGBA()
ColorRGBA1573.setUSE("HAnimSegmentLineColorRGBA")

LineSet1571.setColor(ColorRGBA1573)

Shape1570.setGeometry(LineSet1571)

HAnimSegment1566.addChildren(Shape1570)

HAnimJoint1565.addChildren(HAnimSegment1566)
HAnimJoint1574 = x3d.HAnimJoint()
HAnimJoint1574.setName("r_pinky3")
HAnimJoint1574.setDEF("hanim_r_pinky3")
HAnimJoint1574.setCenter([-0.1948,0.7277,-0.1017])
HAnimSegment1575 = x3d.HAnimSegment()
HAnimSegment1575.setName("r_pinky_distal")
HAnimSegment1575.setDEF("hanim_r_pinky_distal")
#<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
TouchSensor1576 = x3d.TouchSensor()
TouchSensor1576.setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")

HAnimSegment1575.addChildren(TouchSensor1576)
Transform1577 = x3d.Transform()
Transform1577.setTranslation([-0.1948,0.7277,-0.1017])
Shape1578 = x3d.Shape()
Shape1578.setUSE("HAnimJointShape")

Transform1577.addChildren(Shape1578)

HAnimSegment1575.addChildren(Transform1577)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape1579 = x3d.Shape()
LineSet1580 = x3d.LineSet()
LineSet1580.setVertexCount([2])
Coordinate1581 = x3d.Coordinate()
Coordinate1581.setPoint([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])

LineSet1580.setCoord(Coordinate1581)
ColorRGBA1582 = x3d.ColorRGBA()
ColorRGBA1582.setUSE("HAnimSiteLineColorRGBA")

LineSet1580.setColor(ColorRGBA1582)

Shape1579.setGeometry(LineSet1580)

HAnimSegment1575.addChildren(Shape1579)
HAnimSite1583 = x3d.HAnimSite()
HAnimSite1583.setName("r_pinky_distal_tip")
HAnimSite1583.setDEF("hanim_r_pinky_distal_tip")
HAnimSite1583.setTranslation([-0.1938,0.7035,-0.0949])
#HAnimSite visualization shape
TouchSensor1584 = x3d.TouchSensor()
TouchSensor1584.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1583.addChildren(TouchSensor1584)
Shape1585 = x3d.Shape()
Shape1585.setUSE("HAnimSiteShape")

HAnimSite1583.addChildren(Shape1585)

HAnimSegment1575.addChildren(HAnimSite1583)

HAnimJoint1574.addChildren(HAnimSegment1575)

HAnimJoint1565.addChildren(HAnimJoint1574)

HAnimJoint1556.addChildren(HAnimJoint1565)

HAnimJoint1547.addChildren(HAnimJoint1556)

HAnimJoint1335.addChildren(HAnimJoint1547)

HAnimJoint1298.addChildren(HAnimJoint1335)

HAnimJoint1282.addChildren(HAnimJoint1298)

HAnimJoint1273.addChildren(HAnimJoint1282)

HAnimJoint1236.addChildren(HAnimJoint1273)

HAnimJoint598.addChildren(HAnimJoint1236)

HAnimJoint589.addChildren(HAnimJoint598)

HAnimJoint580.addChildren(HAnimJoint589)

HAnimJoint571.addChildren(HAnimJoint580)

HAnimJoint562.addChildren(HAnimJoint571)

HAnimJoint553.addChildren(HAnimJoint562)

HAnimJoint544.addChildren(HAnimJoint553)

HAnimJoint535.addChildren(HAnimJoint544)

HAnimJoint512.addChildren(HAnimJoint535)

HAnimJoint496.addChildren(HAnimJoint512)

HAnimJoint487.addChildren(HAnimJoint496)

HAnimJoint478.addChildren(HAnimJoint487)

HAnimJoint469.addChildren(HAnimJoint478)

HAnimJoint439.addChildren(HAnimJoint469)

HAnimJoint430.addChildren(HAnimJoint439)

HAnimJoint421.addChildren(HAnimJoint430)

HAnimJoint398.addChildren(HAnimJoint421)

HAnimJoint48.addChildren(HAnimJoint398)

HAnimHumanoid47.setSkeleton(HAnimJoint48)
HAnimSite1586 = x3d.HAnimSite()
HAnimSite1586.setName("l_inclined_view")
HAnimSite1586.setDEF("hanim_l_inclined_view")
HAnimSite1586.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite1586.setTranslation([1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1587 = x3d.TouchSensor()
TouchSensor1587.setDescription("HAnimSite l_inclined_view")

HAnimSite1586.addChildren(TouchSensor1587)
Shape1588 = x3d.Shape()
Shape1588.setUSE("HAnimSiteShape")

HAnimSite1586.addChildren(Shape1588)
Viewpoint1589 = x3d.Viewpoint()
Viewpoint1589.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1589.setDescription("left inclined")
Viewpoint1589.setPosition([0,0,0])

HAnimSite1586.addChildren(Viewpoint1589)
#HAnimSite/Viewpoint visualization shape
Anchor1590 = x3d.Anchor()
Anchor1590.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1590.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1591 = x3d.LOD()
LOD1591.setForceTransitions(True)
LOD1591.setRange([0.04])
WorldInfo1592 = x3d.WorldInfo()
WorldInfo1592.setInfo(["hide diamond when close"])

LOD1591.addChildren(WorldInfo1592)
Shape1593 = x3d.Shape()
Shape1593.setUSE("HAnimSiteViewpointShape")

LOD1591.addChildren(Shape1593)

Anchor1590.addChildren(LOD1591)

HAnimSite1586.addChildren(Anchor1590)

HAnimHumanoid47.addViewpoints(HAnimSite1586)
HAnimSite1594 = x3d.HAnimSite()
HAnimSite1594.setName("r_inclined_view")
HAnimSite1594.setDEF("hanim_r_inclined_view")
HAnimSite1594.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite1594.setTranslation([-1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1595 = x3d.TouchSensor()
TouchSensor1595.setDescription("HAnimSite r_inclined_view")

HAnimSite1594.addChildren(TouchSensor1595)
Shape1596 = x3d.Shape()
Shape1596.setUSE("HAnimSiteShape")

HAnimSite1594.addChildren(Shape1596)
Viewpoint1597 = x3d.Viewpoint()
Viewpoint1597.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1597.setCenterOfRotation([0,0.9,0])
Viewpoint1597.setDescription("right inclined")
Viewpoint1597.setPosition([0,0,0])

HAnimSite1594.addChildren(Viewpoint1597)
#HAnimSite/Viewpoint visualization shape
Anchor1598 = x3d.Anchor()
Anchor1598.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1598.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1599 = x3d.LOD()
LOD1599.setForceTransitions(True)
LOD1599.setRange([0.04])
WorldInfo1600 = x3d.WorldInfo()
WorldInfo1600.setInfo(["hide diamond when close"])

LOD1599.addChildren(WorldInfo1600)
Shape1601 = x3d.Shape()
Shape1601.setUSE("HAnimSiteViewpointShape")

LOD1599.addChildren(Shape1601)

Anchor1598.addChildren(LOD1599)

HAnimSite1594.addChildren(Anchor1598)

HAnimHumanoid47.addViewpoints(HAnimSite1594)
HAnimSite1602 = x3d.HAnimSite()
HAnimSite1602.setName("front_view")
HAnimSite1602.setDEF("hanim_front_view")
HAnimSite1602.setTranslation([0,0.85,2.58])
#HAnimSite visualization shape
TouchSensor1603 = x3d.TouchSensor()
TouchSensor1603.setDescription("HAnimSite front_view")

HAnimSite1602.addChildren(TouchSensor1603)
Shape1604 = x3d.Shape()
Shape1604.setUSE("HAnimSiteShape")

HAnimSite1602.addChildren(Shape1604)
Viewpoint1605 = x3d.Viewpoint()
Viewpoint1605.setDEF("hanim_front_viewpoint")
Viewpoint1605.setCenterOfRotation([0,0.9,0])
Viewpoint1605.setDescription("front")
Viewpoint1605.setPosition([0,0,0])

HAnimSite1602.addChildren(Viewpoint1605)
#HAnimSite/Viewpoint visualization shape
Anchor1606 = x3d.Anchor()
Anchor1606.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1606.setUrl(["#hanim_front_viewpoint"])
LOD1607 = x3d.LOD()
LOD1607.setForceTransitions(True)
LOD1607.setRange([0.04])
WorldInfo1608 = x3d.WorldInfo()
WorldInfo1608.setInfo(["hide diamond when close"])

LOD1607.addChildren(WorldInfo1608)
Shape1609 = x3d.Shape()
Shape1609.setUSE("HAnimSiteViewpointShape")

LOD1607.addChildren(Shape1609)

Anchor1606.addChildren(LOD1607)

HAnimSite1602.addChildren(Anchor1606)

HAnimHumanoid47.addViewpoints(HAnimSite1602)
HAnimSite1610 = x3d.HAnimSite()
HAnimSite1610.setName("back_view")
HAnimSite1610.setDEF("hanim_back_view")
HAnimSite1610.setRotation([0,1,0,3.14])
HAnimSite1610.setTranslation([0,0.85,-2.58])
#HAnimSite visualization shape
TouchSensor1611 = x3d.TouchSensor()
TouchSensor1611.setDescription("HAnimSite back_view")

HAnimSite1610.addChildren(TouchSensor1611)
Shape1612 = x3d.Shape()
Shape1612.setUSE("HAnimSiteShape")

HAnimSite1610.addChildren(Shape1612)
Viewpoint1613 = x3d.Viewpoint()
Viewpoint1613.setDEF("hanim_back_viewpoint")
Viewpoint1613.setCenterOfRotation([0,0.9,0])
Viewpoint1613.setDescription("back")
Viewpoint1613.setPosition([0,0,0])

HAnimSite1610.addChildren(Viewpoint1613)
#HAnimSite/Viewpoint visualization shape
Anchor1614 = x3d.Anchor()
Anchor1614.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1614.setUrl(["#hanim_back_viewpoint"])
LOD1615 = x3d.LOD()
LOD1615.setForceTransitions(True)
LOD1615.setRange([0.04])
WorldInfo1616 = x3d.WorldInfo()
WorldInfo1616.setInfo(["hide diamond when close"])

LOD1615.addChildren(WorldInfo1616)
Shape1617 = x3d.Shape()
Shape1617.setUSE("HAnimSiteViewpointShape")

LOD1615.addChildren(Shape1617)

Anchor1614.addChildren(LOD1615)

HAnimSite1610.addChildren(Anchor1614)

HAnimHumanoid47.addViewpoints(HAnimSite1610)
HAnimSite1618 = x3d.HAnimSite()
HAnimSite1618.setName("l_side_view")
HAnimSite1618.setDEF("hanim_l_side_view")
HAnimSite1618.setRotation([0,1,0,1.5708])
HAnimSite1618.setTranslation([2.6,0.854,0])
#HAnimSite visualization shape
TouchSensor1619 = x3d.TouchSensor()
TouchSensor1619.setDescription("HAnimSite l_side_view")

HAnimSite1618.addChildren(TouchSensor1619)
Shape1620 = x3d.Shape()
Shape1620.setUSE("HAnimSiteShape")

HAnimSite1618.addChildren(Shape1620)
Viewpoint1621 = x3d.Viewpoint()
Viewpoint1621.setDEF("hanim_l_side_viewpoint")
Viewpoint1621.setCenterOfRotation([0,0.9,0])
Viewpoint1621.setDescription("left side")
Viewpoint1621.setPosition([0,0,0])

HAnimSite1618.addChildren(Viewpoint1621)
#HAnimSite/Viewpoint visualization shape
Anchor1622 = x3d.Anchor()
Anchor1622.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1622.setUrl(["#hanim_l_side_viewpoint"])
LOD1623 = x3d.LOD()
LOD1623.setForceTransitions(True)
LOD1623.setRange([0.04])
WorldInfo1624 = x3d.WorldInfo()
WorldInfo1624.setInfo(["hide diamond when close"])

LOD1623.addChildren(WorldInfo1624)
Shape1625 = x3d.Shape()
Shape1625.setUSE("HAnimSiteViewpointShape")

LOD1623.addChildren(Shape1625)

Anchor1622.addChildren(LOD1623)

HAnimSite1618.addChildren(Anchor1622)

HAnimHumanoid47.addViewpoints(HAnimSite1618)
HAnimSite1626 = x3d.HAnimSite()
HAnimSite1626.setName("Top_view")
HAnimSite1626.setDEF("hanim_Top_view")
HAnimSite1626.setRotation([1,0,0,-1.57])
HAnimSite1626.setTranslation([0,3.5,0])
#HAnimSite visualization shape
TouchSensor1627 = x3d.TouchSensor()
TouchSensor1627.setDescription("HAnimSite Top_view")

HAnimSite1626.addChildren(TouchSensor1627)
Shape1628 = x3d.Shape()
Shape1628.setUSE("HAnimSiteShape")

HAnimSite1626.addChildren(Shape1628)
Viewpoint1629 = x3d.Viewpoint()
Viewpoint1629.setDEF("hanim_Top_viewpoint")
Viewpoint1629.setCenterOfRotation([0,0.9,0])
Viewpoint1629.setDescription("Top")
Viewpoint1629.setPosition([0,0,0])

HAnimSite1626.addChildren(Viewpoint1629)
#HAnimSite/Viewpoint visualization shape
Anchor1630 = x3d.Anchor()
Anchor1630.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1630.setUrl(["#hanim_Top_viewpoint"])
LOD1631 = x3d.LOD()
LOD1631.setForceTransitions(True)
LOD1631.setRange([0.04])
WorldInfo1632 = x3d.WorldInfo()
WorldInfo1632.setInfo(["hide diamond when close"])

LOD1631.addChildren(WorldInfo1632)
Shape1633 = x3d.Shape()
Shape1633.setUSE("HAnimSiteViewpointShape")

LOD1631.addChildren(Shape1633)

Anchor1630.addChildren(LOD1631)

HAnimSite1626.addChildren(Anchor1630)

HAnimHumanoid47.addViewpoints(HAnimSite1626)
HAnimSite1634 = x3d.HAnimSite()
HAnimSite1634.setName("front_close_view")
HAnimSite1634.setDEF("hanim_front_close_view")
HAnimSite1634.setTranslation([0,0.854,1.575])
#HAnimSite visualization shape
TouchSensor1635 = x3d.TouchSensor()
TouchSensor1635.setDescription("HAnimSite front_close_view")

HAnimSite1634.addChildren(TouchSensor1635)
Shape1636 = x3d.Shape()
Shape1636.setUSE("HAnimSiteShape")

HAnimSite1634.addChildren(Shape1636)
Viewpoint1637 = x3d.Viewpoint()
Viewpoint1637.setDEF("hanim_front_close_viewpoint")
Viewpoint1637.setCenterOfRotation([0,0,1.575])
Viewpoint1637.setDescription("front close")
Viewpoint1637.setPosition([0,0,0])

HAnimSite1634.addChildren(Viewpoint1637)
#HAnimSite/Viewpoint visualization shape
Anchor1638 = x3d.Anchor()
Anchor1638.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1638.setUrl(["#hanim_front_close_viewpoint"])
LOD1639 = x3d.LOD()
LOD1639.setForceTransitions(True)
LOD1639.setRange([0.04])
WorldInfo1640 = x3d.WorldInfo()
WorldInfo1640.setInfo(["hide diamond when close"])

LOD1639.addChildren(WorldInfo1640)
Shape1641 = x3d.Shape()
Shape1641.setUSE("HAnimSiteViewpointShape")

LOD1639.addChildren(Shape1641)

Anchor1638.addChildren(LOD1639)

HAnimSite1634.addChildren(Anchor1638)

HAnimHumanoid47.addViewpoints(HAnimSite1634)
HAnimSite1642 = x3d.HAnimSite()
HAnimSite1642.setName("side_close_view")
HAnimSite1642.setDEF("hanim_side_close_view")
HAnimSite1642.setRotation([0,1,0,1.5708])
HAnimSite1642.setTranslation([1.56,0.854,0])
#HAnimSite visualization shape
TouchSensor1643 = x3d.TouchSensor()
TouchSensor1643.setDescription("HAnimSite side_close_view")

HAnimSite1642.addChildren(TouchSensor1643)
Shape1644 = x3d.Shape()
Shape1644.setUSE("HAnimSiteShape")

HAnimSite1642.addChildren(Shape1644)
Viewpoint1645 = x3d.Viewpoint()
Viewpoint1645.setDEF("hanim_side_close_viewpoint")
Viewpoint1645.setCenterOfRotation([1.6,0,0])
Viewpoint1645.setDescription("side close")
Viewpoint1645.setPosition([0,0,0])

HAnimSite1642.addChildren(Viewpoint1645)
#HAnimSite/Viewpoint visualization shape
Anchor1646 = x3d.Anchor()
Anchor1646.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1646.setUrl(["#hanim_side_close_viewpoint"])
LOD1647 = x3d.LOD()
LOD1647.setForceTransitions(True)
LOD1647.setRange([0.04])
WorldInfo1648 = x3d.WorldInfo()
WorldInfo1648.setInfo(["hide diamond when close"])

LOD1647.addChildren(WorldInfo1648)
Shape1649 = x3d.Shape()
Shape1649.setUSE("HAnimSiteViewpointShape")

LOD1647.addChildren(Shape1649)

Anchor1646.addChildren(LOD1647)

HAnimSite1642.addChildren(Anchor1646)

HAnimHumanoid47.addViewpoints(HAnimSite1642)
HAnimSite1650 = x3d.HAnimSite()
HAnimSite1650.setName("head_front_close_view")
HAnimSite1650.setDEF("hanim_head_front_close_view")
HAnimSite1650.setTranslation([0,1.5,1])
#HAnimSite visualization shape
TouchSensor1651 = x3d.TouchSensor()
TouchSensor1651.setDescription("HAnimSite head_front_close_view")

HAnimSite1650.addChildren(TouchSensor1651)
Shape1652 = x3d.Shape()
Shape1652.setUSE("HAnimSiteShape")

HAnimSite1650.addChildren(Shape1652)
Viewpoint1653 = x3d.Viewpoint()
Viewpoint1653.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1653.setCenterOfRotation([0,0,1])
Viewpoint1653.setDescription("head front close")
Viewpoint1653.setPosition([0,0,0])

HAnimSite1650.addChildren(Viewpoint1653)
#HAnimSite/Viewpoint visualization shape
Anchor1654 = x3d.Anchor()
Anchor1654.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1654.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1655 = x3d.LOD()
LOD1655.setForceTransitions(True)
LOD1655.setRange([0.04])
WorldInfo1656 = x3d.WorldInfo()
WorldInfo1656.setInfo(["hide diamond when close"])

LOD1655.addChildren(WorldInfo1656)
Shape1657 = x3d.Shape()
Shape1657.setUSE("HAnimSiteViewpointShape")

LOD1655.addChildren(Shape1657)

Anchor1654.addChildren(LOD1655)

HAnimSite1650.addChildren(Anchor1654)

HAnimHumanoid47.addViewpoints(HAnimSite1650)
HAnimSite1658 = x3d.HAnimSite()
HAnimSite1658.setName("chest_front_close_view")
HAnimSite1658.setDEF("hanim_chest_front_close_view")
HAnimSite1658.setTranslation([0,1.2,1])
#HAnimSite visualization shape
TouchSensor1659 = x3d.TouchSensor()
TouchSensor1659.setDescription("HAnimSite chest_front_close_view")

HAnimSite1658.addChildren(TouchSensor1659)
Shape1660 = x3d.Shape()
Shape1660.setUSE("HAnimSiteShape")

HAnimSite1658.addChildren(Shape1660)
Viewpoint1661 = x3d.Viewpoint()
Viewpoint1661.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1661.setCenterOfRotation([0,0,1])
Viewpoint1661.setDescription("chest front close")
Viewpoint1661.setPosition([0,0,0])

HAnimSite1658.addChildren(Viewpoint1661)
#HAnimSite/Viewpoint visualization shape
Anchor1662 = x3d.Anchor()
Anchor1662.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1662.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1663 = x3d.LOD()
LOD1663.setForceTransitions(True)
LOD1663.setRange([0.04])
WorldInfo1664 = x3d.WorldInfo()
WorldInfo1664.setInfo(["hide diamond when close"])

LOD1663.addChildren(WorldInfo1664)
Shape1665 = x3d.Shape()
Shape1665.setUSE("HAnimSiteViewpointShape")

LOD1663.addChildren(Shape1665)

Anchor1662.addChildren(LOD1663)

HAnimSite1658.addChildren(Anchor1662)

HAnimHumanoid47.addViewpoints(HAnimSite1658)
HAnimSite1666 = x3d.HAnimSite()
HAnimSite1666.setName("pelvis_front_close_view")
HAnimSite1666.setDEF("hanim_pelvis_front_close_view")
HAnimSite1666.setTranslation([0,0.8,1])
#HAnimSite visualization shape
TouchSensor1667 = x3d.TouchSensor()
TouchSensor1667.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1666.addChildren(TouchSensor1667)
Shape1668 = x3d.Shape()
Shape1668.setUSE("HAnimSiteShape")

HAnimSite1666.addChildren(Shape1668)
Viewpoint1669 = x3d.Viewpoint()
Viewpoint1669.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1669.setCenterOfRotation([0,0,1])
Viewpoint1669.setDescription("pelvis front close")
Viewpoint1669.setPosition([0,0,0])

HAnimSite1666.addChildren(Viewpoint1669)
#HAnimSite/Viewpoint visualization shape
Anchor1670 = x3d.Anchor()
Anchor1670.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1670.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1671 = x3d.LOD()
LOD1671.setForceTransitions(True)
LOD1671.setRange([0.04])
WorldInfo1672 = x3d.WorldInfo()
WorldInfo1672.setInfo(["hide diamond when close"])

LOD1671.addChildren(WorldInfo1672)
Shape1673 = x3d.Shape()
Shape1673.setUSE("HAnimSiteViewpointShape")

LOD1671.addChildren(Shape1673)

Anchor1670.addChildren(LOD1671)

HAnimSite1666.addChildren(Anchor1670)

HAnimHumanoid47.addViewpoints(HAnimSite1666)
HAnimSite1674 = x3d.HAnimSite()
HAnimSite1674.setName("knees_front_close_view")
HAnimSite1674.setDEF("hanim_knees_front_close_view")
HAnimSite1674.setTranslation([0,0.4,1])
#HAnimSite visualization shape
TouchSensor1675 = x3d.TouchSensor()
TouchSensor1675.setDescription("HAnimSite knees_front_close_view")

HAnimSite1674.addChildren(TouchSensor1675)
Shape1676 = x3d.Shape()
Shape1676.setUSE("HAnimSiteShape")

HAnimSite1674.addChildren(Shape1676)
Viewpoint1677 = x3d.Viewpoint()
Viewpoint1677.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1677.setCenterOfRotation([0,0.4,0])
Viewpoint1677.setDescription("knees front close")
Viewpoint1677.setPosition([0,0,0])

HAnimSite1674.addChildren(Viewpoint1677)
#HAnimSite/Viewpoint visualization shape
Anchor1678 = x3d.Anchor()
Anchor1678.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1678.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1679 = x3d.LOD()
LOD1679.setForceTransitions(True)
LOD1679.setRange([0.04])
WorldInfo1680 = x3d.WorldInfo()
WorldInfo1680.setInfo(["hide diamond when close"])

LOD1679.addChildren(WorldInfo1680)
Shape1681 = x3d.Shape()
Shape1681.setUSE("HAnimSiteViewpointShape")

LOD1679.addChildren(Shape1681)

Anchor1678.addChildren(LOD1679)

HAnimSite1674.addChildren(Anchor1678)

HAnimHumanoid47.addViewpoints(HAnimSite1674)
HAnimSite1682 = x3d.HAnimSite()
HAnimSite1682.setName("feet_front_close_view")
HAnimSite1682.setDEF("hanim_feet_front_close_view")
HAnimSite1682.setTranslation([0,0,1])
#HAnimSite visualization shape
TouchSensor1683 = x3d.TouchSensor()
TouchSensor1683.setDescription("HAnimSite feet_front_close_view")

HAnimSite1682.addChildren(TouchSensor1683)
Shape1684 = x3d.Shape()
Shape1684.setUSE("HAnimSiteShape")

HAnimSite1682.addChildren(Shape1684)
Viewpoint1685 = x3d.Viewpoint()
Viewpoint1685.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1685.setDescription("feet front close")
Viewpoint1685.setPosition([0,0,0])

HAnimSite1682.addChildren(Viewpoint1685)
#HAnimSite/Viewpoint visualization shape
Anchor1686 = x3d.Anchor()
Anchor1686.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1686.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1687 = x3d.LOD()
LOD1687.setForceTransitions(True)
LOD1687.setRange([0.04])
WorldInfo1688 = x3d.WorldInfo()
WorldInfo1688.setInfo(["hide diamond when close"])

LOD1687.addChildren(WorldInfo1688)
Shape1689 = x3d.Shape()
Shape1689.setUSE("HAnimSiteViewpointShape")

LOD1687.addChildren(Shape1689)

Anchor1686.addChildren(LOD1687)

HAnimSite1682.addChildren(Anchor1686)

HAnimHumanoid47.addViewpoints(HAnimSite1682)
HAnimSite1690 = x3d.HAnimSite()
HAnimSite1690.setName("eye_level_view")
HAnimSite1690.setDEF("hanim_eye_level_view")
HAnimSite1690.setTranslation([0,1.6332,0.0502])
#HAnimSite visualization shape
TouchSensor1691 = x3d.TouchSensor()
TouchSensor1691.setDescription("HAnimSite eye_level_view")

HAnimSite1690.addChildren(TouchSensor1691)
Shape1692 = x3d.Shape()
Shape1692.setUSE("HAnimSiteShape")

HAnimSite1690.addChildren(Shape1692)
Viewpoint1693 = x3d.Viewpoint()
Viewpoint1693.setDEF("hanim_eye_level_viewpoint")
Viewpoint1693.setDescription("eye level looking forward")
Viewpoint1693.setOrientation([0,1,0,3.141593])
Viewpoint1693.setPosition([0,0,0])

HAnimSite1690.addChildren(Viewpoint1693)
#HAnimSite/Viewpoint visualization shape
Anchor1694 = x3d.Anchor()
Anchor1694.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1694.setUrl(["#hanim_eye_level_viewpoint"])
LOD1695 = x3d.LOD()
LOD1695.setForceTransitions(True)
LOD1695.setRange([0.04])
WorldInfo1696 = x3d.WorldInfo()
WorldInfo1696.setInfo(["hide diamond when close"])

LOD1695.addChildren(WorldInfo1696)
Shape1697 = x3d.Shape()
Shape1697.setUSE("HAnimSiteViewpointShape")

LOD1695.addChildren(Shape1697)

Anchor1694.addChildren(LOD1695)

HAnimSite1690.addChildren(Anchor1694)

HAnimHumanoid47.addViewpoints(HAnimSite1690)
HAnimSite1698 = x3d.HAnimSite()
HAnimSite1698.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid47.addSites(HAnimSite1698)
HAnimSite1699 = x3d.HAnimSite()
HAnimSite1699.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid47.addSites(HAnimSite1699)
HAnimSite1700 = x3d.HAnimSite()
HAnimSite1700.setUSE("hanim_l_hand_front_view")

HAnimHumanoid47.addSites(HAnimSite1700)
HAnimSite1701 = x3d.HAnimSite()
HAnimSite1701.setUSE("hanim_r_hand_front_view")

HAnimHumanoid47.addSites(HAnimSite1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.setUSE("hanim_humanoid_root")

HAnimHumanoid47.addJoints(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.setUSE("hanim_sacroiliac")

HAnimHumanoid47.addJoints(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.setUSE("hanim_vl5")

HAnimHumanoid47.addJoints(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.setUSE("hanim_vl4")

HAnimHumanoid47.addJoints(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.setUSE("hanim_vl3")

HAnimHumanoid47.addJoints(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.setUSE("hanim_vl2")

HAnimHumanoid47.addJoints(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setUSE("hanim_vl1")

HAnimHumanoid47.addJoints(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.setUSE("hanim_vt12")

HAnimHumanoid47.addJoints(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setUSE("hanim_vt11")

HAnimHumanoid47.addJoints(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.setUSE("hanim_vt10")

HAnimHumanoid47.addJoints(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.setUSE("hanim_vt9")

HAnimHumanoid47.addJoints(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.setUSE("hanim_vt8")

HAnimHumanoid47.addJoints(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setUSE("hanim_vt7")

HAnimHumanoid47.addJoints(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.setUSE("hanim_vt6")

HAnimHumanoid47.addJoints(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.setUSE("hanim_vt5")

HAnimHumanoid47.addJoints(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.setUSE("hanim_vt4")

HAnimHumanoid47.addJoints(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.setUSE("hanim_vt3")

HAnimHumanoid47.addJoints(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setUSE("hanim_vt2")

HAnimHumanoid47.addJoints(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.setUSE("hanim_vt1")

HAnimHumanoid47.addJoints(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.setUSE("hanim_vc7")

HAnimHumanoid47.addJoints(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.setUSE("hanim_vc6")

HAnimHumanoid47.addJoints(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.setUSE("hanim_vc5")

HAnimHumanoid47.addJoints(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.setUSE("hanim_vc4")

HAnimHumanoid47.addJoints(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.setUSE("hanim_vc3")

HAnimHumanoid47.addJoints(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.setUSE("hanim_vc2")

HAnimHumanoid47.addJoints(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.setUSE("hanim_vc1")

HAnimHumanoid47.addJoints(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setUSE("hanim_skullbase")

HAnimHumanoid47.addJoints(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setUSE("hanim_temporomandibular")

HAnimHumanoid47.addJoints(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid47.addJoints(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid47.addJoints(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setUSE("hanim_l_ankle")

HAnimHumanoid47.addJoints(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.setUSE("hanim_r_ankle")

HAnimHumanoid47.addJoints(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.setUSE("hanim_l_elbow")

HAnimHumanoid47.addJoints(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.setUSE("hanim_r_elbow")

HAnimHumanoid47.addJoints(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid47.addJoints(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid47.addJoints(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid47.addJoints(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid47.addJoints(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid47.addJoints(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid47.addJoints(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.setUSE("hanim_l_hip")

HAnimHumanoid47.addJoints(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.setUSE("hanim_r_hip")

HAnimHumanoid47.addJoints(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.setUSE("hanim_l_index0")

HAnimHumanoid47.addJoints(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.setUSE("hanim_r_index0")

HAnimHumanoid47.addJoints(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.setUSE("hanim_l_index1")

HAnimHumanoid47.addJoints(HAnimJoint1746)
HAnimJoint1747 = x3d.HAnimJoint()
HAnimJoint1747.setUSE("hanim_r_index1")

HAnimHumanoid47.addJoints(HAnimJoint1747)
HAnimJoint1748 = x3d.HAnimJoint()
HAnimJoint1748.setUSE("hanim_l_index2")

HAnimHumanoid47.addJoints(HAnimJoint1748)
HAnimJoint1749 = x3d.HAnimJoint()
HAnimJoint1749.setUSE("hanim_r_index2")

HAnimHumanoid47.addJoints(HAnimJoint1749)
HAnimJoint1750 = x3d.HAnimJoint()
HAnimJoint1750.setUSE("hanim_l_index3")

HAnimHumanoid47.addJoints(HAnimJoint1750)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.setUSE("hanim_r_index3")

HAnimHumanoid47.addJoints(HAnimJoint1751)
HAnimJoint1752 = x3d.HAnimJoint()
HAnimJoint1752.setUSE("hanim_l_knee")

HAnimHumanoid47.addJoints(HAnimJoint1752)
HAnimJoint1753 = x3d.HAnimJoint()
HAnimJoint1753.setUSE("hanim_r_knee")

HAnimHumanoid47.addJoints(HAnimJoint1753)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.setUSE("hanim_l_metatarsal")

HAnimHumanoid47.addJoints(HAnimJoint1754)
HAnimJoint1755 = x3d.HAnimJoint()
HAnimJoint1755.setUSE("hanim_r_metatarsal")

HAnimHumanoid47.addJoints(HAnimJoint1755)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.setUSE("hanim_l_middle0")

HAnimHumanoid47.addJoints(HAnimJoint1756)
HAnimJoint1757 = x3d.HAnimJoint()
HAnimJoint1757.setUSE("hanim_r_middle0")

HAnimHumanoid47.addJoints(HAnimJoint1757)
HAnimJoint1758 = x3d.HAnimJoint()
HAnimJoint1758.setUSE("hanim_l_middle1")

HAnimHumanoid47.addJoints(HAnimJoint1758)
HAnimJoint1759 = x3d.HAnimJoint()
HAnimJoint1759.setUSE("hanim_r_middle1")

HAnimHumanoid47.addJoints(HAnimJoint1759)
HAnimJoint1760 = x3d.HAnimJoint()
HAnimJoint1760.setUSE("hanim_l_middle2")

HAnimHumanoid47.addJoints(HAnimJoint1760)
HAnimJoint1761 = x3d.HAnimJoint()
HAnimJoint1761.setUSE("hanim_r_middle2")

HAnimHumanoid47.addJoints(HAnimJoint1761)
HAnimJoint1762 = x3d.HAnimJoint()
HAnimJoint1762.setUSE("hanim_l_middle3")

HAnimHumanoid47.addJoints(HAnimJoint1762)
HAnimJoint1763 = x3d.HAnimJoint()
HAnimJoint1763.setUSE("hanim_r_middle3")

HAnimHumanoid47.addJoints(HAnimJoint1763)
HAnimJoint1764 = x3d.HAnimJoint()
HAnimJoint1764.setUSE("hanim_l_midtarsal")

HAnimHumanoid47.addJoints(HAnimJoint1764)
HAnimJoint1765 = x3d.HAnimJoint()
HAnimJoint1765.setUSE("hanim_r_midtarsal")

HAnimHumanoid47.addJoints(HAnimJoint1765)
HAnimJoint1766 = x3d.HAnimJoint()
HAnimJoint1766.setUSE("hanim_l_pinky0")

HAnimHumanoid47.addJoints(HAnimJoint1766)
HAnimJoint1767 = x3d.HAnimJoint()
HAnimJoint1767.setUSE("hanim_r_pinky0")

HAnimHumanoid47.addJoints(HAnimJoint1767)
HAnimJoint1768 = x3d.HAnimJoint()
HAnimJoint1768.setUSE("hanim_l_pinky1")

HAnimHumanoid47.addJoints(HAnimJoint1768)
HAnimJoint1769 = x3d.HAnimJoint()
HAnimJoint1769.setUSE("hanim_r_pinky1")

HAnimHumanoid47.addJoints(HAnimJoint1769)
HAnimJoint1770 = x3d.HAnimJoint()
HAnimJoint1770.setUSE("hanim_l_pinky2")

HAnimHumanoid47.addJoints(HAnimJoint1770)
HAnimJoint1771 = x3d.HAnimJoint()
HAnimJoint1771.setUSE("hanim_r_pinky2")

HAnimHumanoid47.addJoints(HAnimJoint1771)
HAnimJoint1772 = x3d.HAnimJoint()
HAnimJoint1772.setUSE("hanim_l_pinky3")

HAnimHumanoid47.addJoints(HAnimJoint1772)
HAnimJoint1773 = x3d.HAnimJoint()
HAnimJoint1773.setUSE("hanim_r_pinky3")

HAnimHumanoid47.addJoints(HAnimJoint1773)
HAnimJoint1774 = x3d.HAnimJoint()
HAnimJoint1774.setUSE("hanim_l_ring0")

HAnimHumanoid47.addJoints(HAnimJoint1774)
HAnimJoint1775 = x3d.HAnimJoint()
HAnimJoint1775.setUSE("hanim_r_ring0")

HAnimHumanoid47.addJoints(HAnimJoint1775)
HAnimJoint1776 = x3d.HAnimJoint()
HAnimJoint1776.setUSE("hanim_l_ring1")

HAnimHumanoid47.addJoints(HAnimJoint1776)
HAnimJoint1777 = x3d.HAnimJoint()
HAnimJoint1777.setUSE("hanim_r_ring1")

HAnimHumanoid47.addJoints(HAnimJoint1777)
HAnimJoint1778 = x3d.HAnimJoint()
HAnimJoint1778.setUSE("hanim_l_ring2")

HAnimHumanoid47.addJoints(HAnimJoint1778)
HAnimJoint1779 = x3d.HAnimJoint()
HAnimJoint1779.setUSE("hanim_r_ring2")

HAnimHumanoid47.addJoints(HAnimJoint1779)
HAnimJoint1780 = x3d.HAnimJoint()
HAnimJoint1780.setUSE("hanim_l_ring3")

HAnimHumanoid47.addJoints(HAnimJoint1780)
HAnimJoint1781 = x3d.HAnimJoint()
HAnimJoint1781.setUSE("hanim_r_ring3")

HAnimHumanoid47.addJoints(HAnimJoint1781)
HAnimJoint1782 = x3d.HAnimJoint()
HAnimJoint1782.setUSE("hanim_l_shoulder")

HAnimHumanoid47.addJoints(HAnimJoint1782)
HAnimJoint1783 = x3d.HAnimJoint()
HAnimJoint1783.setUSE("hanim_r_shoulder")

HAnimHumanoid47.addJoints(HAnimJoint1783)
HAnimJoint1784 = x3d.HAnimJoint()
HAnimJoint1784.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid47.addJoints(HAnimJoint1784)
HAnimJoint1785 = x3d.HAnimJoint()
HAnimJoint1785.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid47.addJoints(HAnimJoint1785)
HAnimJoint1786 = x3d.HAnimJoint()
HAnimJoint1786.setUSE("hanim_l_subtalar")

HAnimHumanoid47.addJoints(HAnimJoint1786)
HAnimJoint1787 = x3d.HAnimJoint()
HAnimJoint1787.setUSE("hanim_r_subtalar")

HAnimHumanoid47.addJoints(HAnimJoint1787)
HAnimJoint1788 = x3d.HAnimJoint()
HAnimJoint1788.setUSE("hanim_l_thumb1")

HAnimHumanoid47.addJoints(HAnimJoint1788)
HAnimJoint1789 = x3d.HAnimJoint()
HAnimJoint1789.setUSE("hanim_r_thumb1")

HAnimHumanoid47.addJoints(HAnimJoint1789)
HAnimJoint1790 = x3d.HAnimJoint()
HAnimJoint1790.setUSE("hanim_l_thumb2")

HAnimHumanoid47.addJoints(HAnimJoint1790)
HAnimJoint1791 = x3d.HAnimJoint()
HAnimJoint1791.setUSE("hanim_r_thumb2")

HAnimHumanoid47.addJoints(HAnimJoint1791)
HAnimJoint1792 = x3d.HAnimJoint()
HAnimJoint1792.setUSE("hanim_l_thumb3")

HAnimHumanoid47.addJoints(HAnimJoint1792)
HAnimJoint1793 = x3d.HAnimJoint()
HAnimJoint1793.setUSE("hanim_r_thumb3")

HAnimHumanoid47.addJoints(HAnimJoint1793)
HAnimJoint1794 = x3d.HAnimJoint()
HAnimJoint1794.setUSE("hanim_l_wrist")

HAnimHumanoid47.addJoints(HAnimJoint1794)
HAnimJoint1795 = x3d.HAnimJoint()
HAnimJoint1795.setUSE("hanim_r_wrist")

HAnimHumanoid47.addJoints(HAnimJoint1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.setUSE("hanim_pelvis")

HAnimHumanoid47.addSegments(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.setUSE("hanim_skull")

HAnimHumanoid47.addSegments(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.setUSE("hanim_jaw")

HAnimHumanoid47.addSegments(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setUSE("hanim_c1")

HAnimHumanoid47.addSegments(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.setUSE("hanim_c2")

HAnimHumanoid47.addSegments(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.setUSE("hanim_c3")

HAnimHumanoid47.addSegments(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.setUSE("hanim_c4")

HAnimHumanoid47.addSegments(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.setUSE("hanim_c5")

HAnimHumanoid47.addSegments(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.setUSE("hanim_c6")

HAnimHumanoid47.addSegments(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.setUSE("hanim_c7")

HAnimHumanoid47.addSegments(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.setUSE("hanim_t1")

HAnimHumanoid47.addSegments(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.setUSE("hanim_t2")

HAnimHumanoid47.addSegments(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setUSE("hanim_t3")

HAnimHumanoid47.addSegments(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.setUSE("hanim_t4")

HAnimHumanoid47.addSegments(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.setUSE("hanim_t5")

HAnimHumanoid47.addSegments(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setUSE("hanim_t6")

HAnimHumanoid47.addSegments(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.setUSE("hanim_t7")

HAnimHumanoid47.addSegments(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.setUSE("hanim_t8")

HAnimHumanoid47.addSegments(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.setUSE("hanim_t9")

HAnimHumanoid47.addSegments(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.setUSE("hanim_t10")

HAnimHumanoid47.addSegments(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.setUSE("hanim_t11")

HAnimHumanoid47.addSegments(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setUSE("hanim_t12")

HAnimHumanoid47.addSegments(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setUSE("hanim_l1")

HAnimHumanoid47.addSegments(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.setUSE("hanim_l2")

HAnimHumanoid47.addSegments(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.setUSE("hanim_l3")

HAnimHumanoid47.addSegments(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.setUSE("hanim_l4")

HAnimHumanoid47.addSegments(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.setUSE("hanim_l5")

HAnimHumanoid47.addSegments(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.setUSE("hanim_sacrum")

HAnimHumanoid47.addSegments(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.setUSE("hanim_l_calf")

HAnimHumanoid47.addSegments(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.setUSE("hanim_r_calf")

HAnimHumanoid47.addSegments(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.setUSE("hanim_l_clavicle")

HAnimHumanoid47.addSegments(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.setUSE("hanim_r_clavicle")

HAnimHumanoid47.addSegments(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.setUSE("hanim_l_eyeball")

HAnimHumanoid47.addSegments(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.setUSE("hanim_r_eyeball")

HAnimHumanoid47.addSegments(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.setUSE("hanim_l_eyebrow")

HAnimHumanoid47.addSegments(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setUSE("hanim_r_eyebrow")

HAnimHumanoid47.addSegments(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.setUSE("hanim_l_eyelid")

HAnimHumanoid47.addSegments(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.setUSE("hanim_r_eyelid")

HAnimHumanoid47.addSegments(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.setUSE("hanim_l_forearm")

HAnimHumanoid47.addSegments(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setUSE("hanim_r_forearm")

HAnimHumanoid47.addSegments(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.setUSE("hanim_l_forefoot")

HAnimHumanoid47.addSegments(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.setUSE("hanim_r_forefoot")

HAnimHumanoid47.addSegments(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.setUSE("hanim_l_hand")

HAnimHumanoid47.addSegments(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.setUSE("hanim_r_hand")

HAnimHumanoid47.addSegments(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setUSE("hanim_l_hindfoot")

HAnimHumanoid47.addSegments(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setUSE("hanim_r_hindfoot")

HAnimHumanoid47.addSegments(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.setUSE("hanim_l_index_distal")

HAnimHumanoid47.addSegments(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.setUSE("hanim_r_index_distal")

HAnimHumanoid47.addSegments(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.setUSE("hanim_l_index_middle")

HAnimHumanoid47.addSegments(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setUSE("hanim_r_index_middle")

HAnimHumanoid47.addSegments(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.setUSE("hanim_l_index_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setUSE("hanim_r_index_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.setUSE("hanim_l_middistal")

HAnimHumanoid47.addSegments(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.setUSE("hanim_r_middistal")

HAnimHumanoid47.addSegments(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.setUSE("hanim_l_middle_distal")

HAnimHumanoid47.addSegments(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.setUSE("hanim_r_middle_distal")

HAnimHumanoid47.addSegments(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.setUSE("hanim_l_middle_middle")

HAnimHumanoid47.addSegments(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.setUSE("hanim_r_middle_middle")

HAnimHumanoid47.addSegments(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.setUSE("hanim_l_middle_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setUSE("hanim_r_middle_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.setUSE("hanim_l_midproximal")

HAnimHumanoid47.addSegments(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.setUSE("hanim_r_midproximal")

HAnimHumanoid47.addSegments(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.setUSE("hanim_l_pinky_distal")

HAnimHumanoid47.addSegments(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.setUSE("hanim_r_pinky_distal")

HAnimHumanoid47.addSegments(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1865)
HAnimSegment1866 = x3d.HAnimSegment()
HAnimSegment1866.setUSE("hanim_l_pinky_middle")

HAnimHumanoid47.addSegments(HAnimSegment1866)
HAnimSegment1867 = x3d.HAnimSegment()
HAnimSegment1867.setUSE("hanim_r_pinky_middle")

HAnimHumanoid47.addSegments(HAnimSegment1867)
HAnimSegment1868 = x3d.HAnimSegment()
HAnimSegment1868.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1868)
HAnimSegment1869 = x3d.HAnimSegment()
HAnimSegment1869.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1869)
HAnimSegment1870 = x3d.HAnimSegment()
HAnimSegment1870.setUSE("hanim_l_ring_distal")

HAnimHumanoid47.addSegments(HAnimSegment1870)
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.setUSE("hanim_r_ring_distal")

HAnimHumanoid47.addSegments(HAnimSegment1871)
HAnimSegment1872 = x3d.HAnimSegment()
HAnimSegment1872.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1872)
HAnimSegment1873 = x3d.HAnimSegment()
HAnimSegment1873.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1873)
HAnimSegment1874 = x3d.HAnimSegment()
HAnimSegment1874.setUSE("hanim_l_ring_middle")

HAnimHumanoid47.addSegments(HAnimSegment1874)
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.setUSE("hanim_r_ring_middle")

HAnimHumanoid47.addSegments(HAnimSegment1875)
HAnimSegment1876 = x3d.HAnimSegment()
HAnimSegment1876.setUSE("hanim_l_ring_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1876)
HAnimSegment1877 = x3d.HAnimSegment()
HAnimSegment1877.setUSE("hanim_r_ring_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1877)
HAnimSegment1878 = x3d.HAnimSegment()
HAnimSegment1878.setUSE("hanim_l_scapula")

HAnimHumanoid47.addSegments(HAnimSegment1878)
HAnimSegment1879 = x3d.HAnimSegment()
HAnimSegment1879.setUSE("hanim_r_scapula")

HAnimHumanoid47.addSegments(HAnimSegment1879)
HAnimSegment1880 = x3d.HAnimSegment()
HAnimSegment1880.setUSE("hanim_l_thigh")

HAnimHumanoid47.addSegments(HAnimSegment1880)
HAnimSegment1881 = x3d.HAnimSegment()
HAnimSegment1881.setUSE("hanim_r_thigh")

HAnimHumanoid47.addSegments(HAnimSegment1881)
HAnimSegment1882 = x3d.HAnimSegment()
HAnimSegment1882.setUSE("hanim_l_thumb_distal")

HAnimHumanoid47.addSegments(HAnimSegment1882)
HAnimSegment1883 = x3d.HAnimSegment()
HAnimSegment1883.setUSE("hanim_r_thumb_distal")

HAnimHumanoid47.addSegments(HAnimSegment1883)
HAnimSegment1884 = x3d.HAnimSegment()
HAnimSegment1884.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1884)
HAnimSegment1885 = x3d.HAnimSegment()
HAnimSegment1885.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid47.addSegments(HAnimSegment1885)
HAnimSegment1886 = x3d.HAnimSegment()
HAnimSegment1886.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1886)
HAnimSegment1887 = x3d.HAnimSegment()
HAnimSegment1887.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid47.addSegments(HAnimSegment1887)
HAnimSegment1888 = x3d.HAnimSegment()
HAnimSegment1888.setUSE("hanim_l_upperarm")

HAnimHumanoid47.addSegments(HAnimSegment1888)
HAnimSegment1889 = x3d.HAnimSegment()
HAnimSegment1889.setUSE("hanim_r_upperarm")

HAnimHumanoid47.addSegments(HAnimSegment1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setUSE("hanim_crotch_pt")

HAnimHumanoid47.addSites(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setUSE("hanim_skull_tip")

HAnimHumanoid47.addSites(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.setUSE("hanim_sellion_pt")

HAnimHumanoid47.addSites(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.setUSE("hanim_supramenton_pt")

HAnimHumanoid47.addSites(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.setUSE("hanim_nuchale_pt")

HAnimHumanoid47.addSites(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setUSE("hanim_suprasternale_pt")

HAnimHumanoid47.addSites(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.setUSE("hanim_cervicale_pt")

HAnimHumanoid47.addSites(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.setUSE("hanim_substernale_pt")

HAnimHumanoid47.addSites(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid47.addSites(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid47.addSites(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.setUSE("hanim_navel_pt")

HAnimHumanoid47.addSites(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.setUSE("hanim_l_acromion_pt")

HAnimHumanoid47.addSites(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.setUSE("hanim_r_acromion_pt")

HAnimHumanoid47.addSites(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setUSE("hanim_r_asis_pt")

HAnimHumanoid47.addSites(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.setUSE("hanim_l_asis_pt")

HAnimHumanoid47.addSites(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid47.addSites(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid47.addSites(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid47.addSites(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid47.addSites(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid47.addSites(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid47.addSites(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid47.addSites(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid47.addSites(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid47.addSites(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid47.addSites(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setUSE("hanim_l_digit2_pt")

HAnimHumanoid47.addSites(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.setUSE("hanim_r_digit2_pt")

HAnimHumanoid47.addSites(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid47.addSites(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid47.addSites(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setUSE("hanim_r_gonion_pt")

HAnimHumanoid47.addSites(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.setUSE("hanim_l_gonion_pt")

HAnimHumanoid47.addSites(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid47.addSites(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid47.addSites(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid47.addSites(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid47.addSites(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid47.addSites(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid47.addSites(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid47.addSites(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid47.addSites(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid47.addSites(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid47.addSites(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid47.addSites(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid47.addSites(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid47.addSites(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid47.addSites(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid47.addSites(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid47.addSites(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid47.addSites(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid47.addSites(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid47.addSites(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid47.addSites(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid47.addSites(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid47.addSites(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid47.addSites(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.setUSE("hanim_r_psis_pt")

HAnimHumanoid47.addSites(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.setUSE("hanim_l_psis_pt")

HAnimHumanoid47.addSites(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid47.addSites(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid47.addSites(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.setUSE("hanim_l_radiale_pt")

HAnimHumanoid47.addSites(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.setUSE("hanim_r_radiale_pt")

HAnimHumanoid47.addSites(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setUSE("hanim_r_rib10_pt")

HAnimHumanoid47.addSites(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.setUSE("hanim_l_rib10_pt")

HAnimHumanoid47.addSites(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid47.addSites(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid47.addSites(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid47.addSites(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid47.addSites(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setUSE("hanim_r_thelion_pt")

HAnimHumanoid47.addSites(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.setUSE("hanim_l_thelion_pt")

HAnimHumanoid47.addSites(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid47.addSites(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setUSE("hanim_r_tragion_pt")

HAnimHumanoid47.addSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setUSE("hanim_l_tragion_pt")

HAnimHumanoid47.addSites(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid47.addSites(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid47.addSites(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid47.addSites(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid47.addSites(HAnimSite1980)

Scene33.addChildren(HAnimHumanoid47)

X3D0.setScene(Scene33)
X3D0.toFileX3D("../data/HAnimSpecificationLOA3Illustrated_RoundTrip.x3d")

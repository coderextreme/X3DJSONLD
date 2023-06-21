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
meta3.setContent("HAnim1SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")

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
meta8.setName("creator")
meta8.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("Image")
meta9.setContent("HAnim1SpecificationLOA3Illustrated.png")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("Image")
meta10.setContent("HAnim1SpecificationLOA3IllustratedLeftSide.png")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("reference")
meta11.setContent("HAnim1SpecificationLOA3Invisible.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("reference")
meta12.setContent("HAnim1SpecificationLOA3Animation.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("Image")
meta14.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("Image")
meta15.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("Image")
meta16.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("TODO")
meta17.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("warning")
meta18.setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("TODO")
meta19.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("reference")
meta20.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("reference")
meta21.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("reference")
meta22.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("translator")
meta23.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("generator")
meta24.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta24)
meta25 = meta()
meta25.setName("reference")
meta25.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta25)
meta26 = meta()
meta26.setName("reference")
meta26.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta26)
meta27 = meta()
meta27.setName("reference")
meta27.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta27)
meta28 = meta()
meta28.setName("reference")
meta28.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta28)
meta29 = meta()
meta29.setName("generator")
meta29.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta29)
meta30 = meta()
meta30.setName("identifier")
meta30.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta30)
meta31 = meta()
meta31.setName("license")
meta31.setContent("../license.html")

head1.addMeta(meta31)

X3D0.setHead(head1)
Scene32 = Scene()
Background33 = Background()
Background33.setSkyColor([0.3,0.3,0.3])

Scene32.addChildren(Background33)
NavigationInfo34 = NavigationInfo()

Scene32.addChildren(NavigationInfo34)
Group35 = Group()
Group35.setDEF("Original_WorldInfo")
WorldInfo36 = WorldInfo()
WorldInfo36.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo36.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group35.addChildren(WorldInfo36)

Scene32.addChildren(Group35)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint37 = Viewpoint()
Viewpoint37.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint37.setDescription("Humanoid LOA 3 Front")
Viewpoint37.setPosition([0,0.4,4])

Scene32.addChildren(Viewpoint37)
Viewpoint38 = Viewpoint()
Viewpoint38.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Front Close")
Viewpoint38.setPosition([0,0.8,2])

Scene32.addChildren(Viewpoint38)
Viewpoint39 = Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint39.setPosition([0,1.2,1])

Scene32.addChildren(Viewpoint39)
Viewpoint40 = Viewpoint()
Viewpoint40.setCenterOfRotation([0,1.5,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Front Face")
Viewpoint40.setPosition([0,1.63,1])

Scene32.addChildren(Viewpoint40)
Viewpoint41 = Viewpoint()
Viewpoint41.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Right Side")
Viewpoint41.setOrientation([0,1,0,1.5708])
Viewpoint41.setPosition([2.6,0.8,0])

Scene32.addChildren(Viewpoint41)
Viewpoint42 = Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint42.setOrientation([0,1,0,1.2])
Viewpoint42.setPosition([1,0.8,0.5])

Scene32.addChildren(Viewpoint42)
Viewpoint43 = Viewpoint()
Viewpoint43.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint43.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint43.setOrientation([0,1,0,-1.2])
Viewpoint43.setPosition([-1,0.8,0.5])

Scene32.addChildren(Viewpoint43)
Viewpoint44 = Viewpoint()
Viewpoint44.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint44.setDescription("Humanoid LOA 3 Left Side")
Viewpoint44.setOrientation([0,1,0,-1.5708])
Viewpoint44.setPosition([-2.6,0.8,0])

Scene32.addChildren(Viewpoint44)
Viewpoint45 = Viewpoint()
Viewpoint45.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint45.setDescription("Humanoid LOA 3 Top")
Viewpoint45.setOrientation([1,0,0,-1.5708])
Viewpoint45.setPosition([0,3.5,0])

Scene32.addChildren(Viewpoint45)
HAnimHumanoid46 = HAnimHumanoid()
HAnimHumanoid46.setName("humanoid")
HAnimHumanoid46.setDEF("hanim_humanoid")
HAnimHumanoid46.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"])
HAnimHumanoid46.setVersion("1.0")
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
HAnimJoint47 = HAnimJoint()
HAnimJoint47.setName("humanoid_root")
HAnimJoint47.setDEF("hanim_humanoid_root")
HAnimJoint47.setCenter([0,0.824,0.0277])
HAnimJoint47.setUlimit([0,0,0])
HAnimJoint47.setLlimit([0,0,0])
HAnimJoint47.setStiffness([0,0,0])
HAnimSegment48 = HAnimSegment()
HAnimSegment48.setName("sacrum")
HAnimSegment48.setDEF("hanim_sacrum")
#<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
TouchSensor49 = TouchSensor()
TouchSensor49.setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum")

HAnimSegment48.addChildren(TouchSensor49)
Transform50 = Transform()
Transform50.setTranslation([0,0.824,0.0277])
Shape51 = Shape()
Shape51.setDEF("HAnimJointShape")
Sphere52 = Sphere()
Sphere52.setRadius(0.006)

Shape51.setGeometry(Sphere52)
Appearance53 = Appearance()
Appearance53.setDEF("HAnimJointAppearance")
Material54 = Material()
Material54.setDiffuseColor([1,0.5,0])
Material54.setTransparency(0.5)

Appearance53.setMaterial(Material54)

Shape51.setAppearance(Appearance53)

Transform50.addChildren(Shape51)

HAnimSegment48.addChildren(Transform50)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape55 = Shape()
LineSet56 = LineSet()
LineSet56.setVertexCount([2])
Coordinate57 = Coordinate()
Coordinate57.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet56.setCoord(Coordinate57)
ColorRGBA58 = ColorRGBA()
ColorRGBA58.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA58.setColor([1,1,0,1,1,1,0,0.1])

LineSet56.setColor(ColorRGBA58)

Shape55.setGeometry(LineSet56)

HAnimSegment48.addChildren(Shape55)
#HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape59 = Shape()
LineSet60 = LineSet()
LineSet60.setVertexCount([2])
Coordinate61 = Coordinate()
Coordinate61.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet60.setCoord(Coordinate61)
ColorRGBA62 = ColorRGBA()
ColorRGBA62.setUSE("HAnimSegmentLineColorRGBA")

LineSet60.setColor(ColorRGBA62)

Shape59.setGeometry(LineSet60)

HAnimSegment48.addChildren(Shape59)

HAnimJoint47.addChildren(HAnimSegment48)
HAnimJoint63 = HAnimJoint()
HAnimJoint63.setName("sacroiliac")
HAnimJoint63.setDEF("hanim_sacroiliac")
HAnimJoint63.setCenter([0,0.9149,0.0016])
HAnimJoint63.setUlimit([0,0,0])
HAnimJoint63.setLlimit([0,0,0])
HAnimJoint63.setStiffness([0,0,0])
HAnimSegment64 = HAnimSegment()
HAnimSegment64.setName("pelvis")
HAnimSegment64.setDEF("hanim_pelvis")
#<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
TouchSensor65 = TouchSensor()
TouchSensor65.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment64.addChildren(TouchSensor65)
Transform66 = Transform()
Transform66.setTranslation([0,0.9149,0.0016])
Shape67 = Shape()
Shape67.setUSE("HAnimJointShape")

Transform66.addChildren(Shape67)

HAnimSegment64.addChildren(Transform66)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape68 = Shape()
LineSet69 = LineSet()
LineSet69.setVertexCount([2])
Coordinate70 = Coordinate()
Coordinate70.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet69.setCoord(Coordinate70)
ColorRGBA71 = ColorRGBA()
ColorRGBA71.setUSE("HAnimSegmentLineColorRGBA")

LineSet69.setColor(ColorRGBA71)

Shape68.setGeometry(LineSet69)

HAnimSegment64.addChildren(Shape68)
#HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape72 = Shape()
LineSet73 = LineSet()
LineSet73.setVertexCount([2])
Coordinate74 = Coordinate()
Coordinate74.setPoint([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])

LineSet73.setCoord(Coordinate74)
ColorRGBA75 = ColorRGBA()
ColorRGBA75.setUSE("HAnimSegmentLineColorRGBA")

LineSet73.setColor(ColorRGBA75)

Shape72.setGeometry(LineSet73)

HAnimSegment64.addChildren(Shape72)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape76 = Shape()
LineSet77 = LineSet()
LineSet77.setVertexCount([2])
Coordinate78 = Coordinate()
Coordinate78.setPoint([0,0.9149,0.0016,-0.1525,1.0628,0.0035])

LineSet77.setCoord(Coordinate78)
ColorRGBA79 = ColorRGBA()
ColorRGBA79.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA79.setColor([1,0,0,1,1,0,0,0.1])

LineSet77.setColor(ColorRGBA79)

Shape76.setGeometry(LineSet77)

HAnimSegment64.addChildren(Shape76)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape80 = Shape()
LineSet81 = LineSet()
LineSet81.setVertexCount([2])
Coordinate82 = Coordinate()
Coordinate82.setPoint([0,0.9149,0.0016,-0.1689,0.8419,0.0352])

LineSet81.setCoord(Coordinate82)
ColorRGBA83 = ColorRGBA()
ColorRGBA83.setUSE("HAnimSiteLineColorRGBA")

LineSet81.setColor(ColorRGBA83)

Shape80.setGeometry(LineSet81)

HAnimSegment64.addChildren(Shape80)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape84 = Shape()
LineSet85 = LineSet()
LineSet85.setVertexCount([2])
Coordinate86 = Coordinate()
Coordinate86.setPoint([0,0.9149,0.0016,0.1612,1.0537,0.0008])

LineSet85.setCoord(Coordinate86)
ColorRGBA87 = ColorRGBA()
ColorRGBA87.setUSE("HAnimSiteLineColorRGBA")

LineSet85.setColor(ColorRGBA87)

Shape84.setGeometry(LineSet85)

HAnimSegment64.addChildren(Shape84)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape88 = Shape()
LineSet89 = LineSet()
LineSet89.setVertexCount([2])
Coordinate90 = Coordinate()
Coordinate90.setPoint([0,0.9149,0.0016,0.1677,0.8336,0.0303])

LineSet89.setCoord(Coordinate90)
ColorRGBA91 = ColorRGBA()
ColorRGBA91.setUSE("HAnimSiteLineColorRGBA")

LineSet89.setColor(ColorRGBA91)

Shape88.setGeometry(LineSet89)

HAnimSegment64.addChildren(Shape88)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape92 = Shape()
LineSet93 = LineSet()
LineSet93.setVertexCount([2])
Coordinate94 = Coordinate()
Coordinate94.setPoint([0,0.9149,0.0016,-0.0887,1.0021,0.1112])

LineSet93.setCoord(Coordinate94)
ColorRGBA95 = ColorRGBA()
ColorRGBA95.setUSE("HAnimSiteLineColorRGBA")

LineSet93.setColor(ColorRGBA95)

Shape92.setGeometry(LineSet93)

HAnimSegment64.addChildren(Shape92)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape96 = Shape()
LineSet97 = LineSet()
LineSet97.setVertexCount([2])
Coordinate98 = Coordinate()
Coordinate98.setPoint([0,0.9149,0.0016,0.0925,0.9983,0.1052])

LineSet97.setCoord(Coordinate98)
ColorRGBA99 = ColorRGBA()
ColorRGBA99.setUSE("HAnimSiteLineColorRGBA")

LineSet97.setColor(ColorRGBA99)

Shape96.setGeometry(LineSet97)

HAnimSegment64.addChildren(Shape96)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape100 = Shape()
LineSet101 = LineSet()
LineSet101.setVertexCount([2])
Coordinate102 = Coordinate()
Coordinate102.setPoint([0,0.9149,0.0016,-0.0716,1.019,-0.1138])

LineSet101.setCoord(Coordinate102)
ColorRGBA103 = ColorRGBA()
ColorRGBA103.setUSE("HAnimSiteLineColorRGBA")

LineSet101.setColor(ColorRGBA103)

Shape100.setGeometry(LineSet101)

HAnimSegment64.addChildren(Shape100)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape104 = Shape()
LineSet105 = LineSet()
LineSet105.setVertexCount([2])
Coordinate106 = Coordinate()
Coordinate106.setPoint([0,0.9149,0.0016,0.0774,1.019,-0.1151])

LineSet105.setCoord(Coordinate106)
ColorRGBA107 = ColorRGBA()
ColorRGBA107.setUSE("HAnimSiteLineColorRGBA")

LineSet105.setColor(ColorRGBA107)

Shape104.setGeometry(LineSet105)

HAnimSegment64.addChildren(Shape104)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape108 = Shape()
LineSet109 = LineSet()
LineSet109.setVertexCount([2])
Coordinate110 = Coordinate()
Coordinate110.setPoint([0,0.9149,0.0016,0.0034,0.8266,0.0257])

LineSet109.setCoord(Coordinate110)
ColorRGBA111 = ColorRGBA()
ColorRGBA111.setUSE("HAnimSiteLineColorRGBA")

LineSet109.setColor(ColorRGBA111)

Shape108.setGeometry(LineSet109)

HAnimSegment64.addChildren(Shape108)
HAnimSite112 = HAnimSite()
HAnimSite112.setName("r_iliocristale_pt")
HAnimSite112.setDEF("hanim_r_iliocristale_pt")
HAnimSite112.setTranslation([-0.1525,1.0628,0.0035])
#HAnimSite visualization shape
TouchSensor113 = TouchSensor()
TouchSensor113.setDescription("HAnimSite r_iliocristale")

HAnimSite112.addChildren(TouchSensor113)
Shape114 = Shape()
Shape114.setDEF("HAnimSiteShape")
IndexedFaceSet115 = IndexedFaceSet()
IndexedFaceSet115.setDEF("DiamondIFS")
IndexedFaceSet115.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet115.setCreaseAngle(0.5)
IndexedFaceSet115.setSolid(False)
Coordinate116 = Coordinate()
Coordinate116.setPoint([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])

IndexedFaceSet115.setCoord(Coordinate116)

Shape114.setGeometry(IndexedFaceSet115)
Appearance117 = Appearance()
Material118 = Material()
Material118.setDiffuseColor([1,0,0])

Appearance117.setMaterial(Material118)

Shape114.setAppearance(Appearance117)

HAnimSite112.addChildren(Shape114)

HAnimSegment64.addChildren(HAnimSite112)
HAnimSite119 = HAnimSite()
HAnimSite119.setName("r_trochanterion_pt")
HAnimSite119.setDEF("hanim_r_trochanterion_pt")
HAnimSite119.setTranslation([-0.1689,0.8419,0.0352])
#HAnimSite visualization shape
TouchSensor120 = TouchSensor()
TouchSensor120.setDescription("HAnimSite r_trochanterion")

HAnimSite119.addChildren(TouchSensor120)
Shape121 = Shape()
Shape121.setUSE("HAnimSiteShape")

HAnimSite119.addChildren(Shape121)

HAnimSegment64.addChildren(HAnimSite119)
HAnimSite122 = HAnimSite()
HAnimSite122.setName("l_iliocristale_pt")
HAnimSite122.setDEF("hanim_l_iliocristale_pt")
HAnimSite122.setTranslation([0.1612,1.0537,0.0008])
#HAnimSite visualization shape
TouchSensor123 = TouchSensor()
TouchSensor123.setDescription("HAnimSite l_iliocristale")

HAnimSite122.addChildren(TouchSensor123)
Shape124 = Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChildren(Shape124)

HAnimSegment64.addChildren(HAnimSite122)
HAnimSite125 = HAnimSite()
HAnimSite125.setName("l_trochanterion_pt")
HAnimSite125.setDEF("hanim_l_trochanterion_pt")
HAnimSite125.setTranslation([0.1677,0.8336,0.0303])
#HAnimSite visualization shape
TouchSensor126 = TouchSensor()
TouchSensor126.setDescription("HAnimSite l_trochanterion")

HAnimSite125.addChildren(TouchSensor126)
Shape127 = Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChildren(Shape127)

HAnimSegment64.addChildren(HAnimSite125)
HAnimSite128 = HAnimSite()
HAnimSite128.setName("r_asis_pt")
HAnimSite128.setDEF("hanim_r_asis_pt")
HAnimSite128.setTranslation([-0.0887,1.0021,0.1112])
#HAnimSite visualization shape
TouchSensor129 = TouchSensor()
TouchSensor129.setDescription("HAnimSite r_asis")

HAnimSite128.addChildren(TouchSensor129)
Shape130 = Shape()
Shape130.setUSE("HAnimSiteShape")

HAnimSite128.addChildren(Shape130)

HAnimSegment64.addChildren(HAnimSite128)
HAnimSite131 = HAnimSite()
HAnimSite131.setName("l_asis_pt")
HAnimSite131.setDEF("hanim_l_asis_pt")
HAnimSite131.setTranslation([0.0925,0.9983,0.1052])
#HAnimSite visualization shape
TouchSensor132 = TouchSensor()
TouchSensor132.setDescription("HAnimSite l_asis")

HAnimSite131.addChildren(TouchSensor132)
Shape133 = Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChildren(Shape133)

HAnimSegment64.addChildren(HAnimSite131)
HAnimSite134 = HAnimSite()
HAnimSite134.setName("r_psis_pt")
HAnimSite134.setDEF("hanim_r_psis_pt")
HAnimSite134.setTranslation([-0.0716,1.019,-0.1138])
#HAnimSite visualization shape
TouchSensor135 = TouchSensor()
TouchSensor135.setDescription("HAnimSite r_psis")

HAnimSite134.addChildren(TouchSensor135)
Shape136 = Shape()
Shape136.setUSE("HAnimSiteShape")

HAnimSite134.addChildren(Shape136)

HAnimSegment64.addChildren(HAnimSite134)
HAnimSite137 = HAnimSite()
HAnimSite137.setName("l_psis_pt")
HAnimSite137.setDEF("hanim_l_psis_pt")
HAnimSite137.setTranslation([0.0774,1.019,-0.1151])
#HAnimSite visualization shape
TouchSensor138 = TouchSensor()
TouchSensor138.setDescription("HAnimSite l_psis")

HAnimSite137.addChildren(TouchSensor138)
Shape139 = Shape()
Shape139.setUSE("HAnimSiteShape")

HAnimSite137.addChildren(Shape139)

HAnimSegment64.addChildren(HAnimSite137)
HAnimSite140 = HAnimSite()
HAnimSite140.setName("crotch_pt")
HAnimSite140.setDEF("hanim_crotch_pt")
HAnimSite140.setTranslation([0.0034,0.8266,0.0257])
#HAnimSite visualization shape
TouchSensor141 = TouchSensor()
TouchSensor141.setDescription("HAnimSite crotch")

HAnimSite140.addChildren(TouchSensor141)
Shape142 = Shape()
Shape142.setUSE("HAnimSiteShape")

HAnimSite140.addChildren(Shape142)

HAnimSegment64.addChildren(HAnimSite140)

HAnimJoint63.addChildren(HAnimSegment64)
HAnimJoint143 = HAnimJoint()
HAnimJoint143.setName("l_hip")
HAnimJoint143.setDEF("hanim_l_hip")
HAnimJoint143.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint143.setUlimit([0,0,0])
HAnimJoint143.setLlimit([0,0,0])
HAnimJoint143.setStiffness([0,0,0])
HAnimSegment144 = HAnimSegment()
HAnimSegment144.setName("l_thigh")
HAnimSegment144.setDEF("hanim_l_thigh")
#<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
TouchSensor145 = TouchSensor()
TouchSensor145.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment144.addChildren(TouchSensor145)
Transform146 = Transform()
Transform146.setTranslation([0.0961,0.9124,-0.0001])
Shape147 = Shape()
Shape147.setUSE("HAnimJointShape")

Transform146.addChildren(Shape147)

HAnimSegment144.addChildren(Transform146)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape148 = Shape()
LineSet149 = LineSet()
LineSet149.setVertexCount([2])
Coordinate150 = Coordinate()
Coordinate150.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet149.setCoord(Coordinate150)
ColorRGBA151 = ColorRGBA()
ColorRGBA151.setUSE("HAnimSegmentLineColorRGBA")

LineSet149.setColor(ColorRGBA151)

Shape148.setGeometry(LineSet149)

HAnimSegment144.addChildren(Shape148)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape152 = Shape()
LineSet153 = LineSet()
LineSet153.setVertexCount([2])
Coordinate154 = Coordinate()
Coordinate154.setPoint([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])

LineSet153.setCoord(Coordinate154)
ColorRGBA155 = ColorRGBA()
ColorRGBA155.setUSE("HAnimSiteLineColorRGBA")

LineSet153.setColor(ColorRGBA155)

Shape152.setGeometry(LineSet153)

HAnimSegment144.addChildren(Shape152)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape156 = Shape()
LineSet157 = LineSet()
LineSet157.setVertexCount([2])
Coordinate158 = Coordinate()
Coordinate158.setPoint([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])

LineSet157.setCoord(Coordinate158)
ColorRGBA159 = ColorRGBA()
ColorRGBA159.setUSE("HAnimSiteLineColorRGBA")

LineSet157.setColor(ColorRGBA159)

Shape156.setGeometry(LineSet157)

HAnimSegment144.addChildren(Shape156)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape160 = Shape()
LineSet161 = LineSet()
LineSet161.setVertexCount([2])
Coordinate162 = Coordinate()
Coordinate162.setPoint([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])

LineSet161.setCoord(Coordinate162)
ColorRGBA163 = ColorRGBA()
ColorRGBA163.setUSE("HAnimSiteLineColorRGBA")

LineSet161.setColor(ColorRGBA163)

Shape160.setGeometry(LineSet161)

HAnimSegment144.addChildren(Shape160)
HAnimSite164 = HAnimSite()
HAnimSite164.setName("l_knee_crease_pt")
HAnimSite164.setDEF("hanim_l_knee_crease_pt")
HAnimSite164.setTranslation([0.0993,0.4881,-0.0309])
#HAnimSite visualization shape
TouchSensor165 = TouchSensor()
TouchSensor165.setDescription("HAnimSite l_knee_crease")

HAnimSite164.addChildren(TouchSensor165)
Shape166 = Shape()
Shape166.setUSE("HAnimSiteShape")

HAnimSite164.addChildren(Shape166)

HAnimSegment144.addChildren(HAnimSite164)
HAnimSite167 = HAnimSite()
HAnimSite167.setName("l_femoral_lateral_epicn_pt")
HAnimSite167.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite167.setTranslation([0.1598,0.4967,0.0297])
#HAnimSite visualization shape
TouchSensor168 = TouchSensor()
TouchSensor168.setDescription("HAnimSite l_femoral_lateral_epicn")

HAnimSite167.addChildren(TouchSensor168)
Shape169 = Shape()
Shape169.setUSE("HAnimSiteShape")

HAnimSite167.addChildren(Shape169)

HAnimSegment144.addChildren(HAnimSite167)
HAnimSite170 = HAnimSite()
HAnimSite170.setName("l_femoral_medial_epicn_pt")
HAnimSite170.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite170.setTranslation([0.0398,0.4946,0.0303])
#HAnimSite visualization shape
TouchSensor171 = TouchSensor()
TouchSensor171.setDescription("HAnimSite l_femoral_medial_epicn")

HAnimSite170.addChildren(TouchSensor171)
Shape172 = Shape()
Shape172.setUSE("HAnimSiteShape")

HAnimSite170.addChildren(Shape172)

HAnimSegment144.addChildren(HAnimSite170)

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint173 = HAnimJoint()
HAnimJoint173.setName("l_knee")
HAnimJoint173.setDEF("hanim_l_knee")
HAnimJoint173.setCenter([0.104,0.4867,0.0308])
HAnimJoint173.setUlimit([0,0,0])
HAnimJoint173.setLlimit([0,0,0])
HAnimJoint173.setStiffness([0,0,0])
HAnimSegment174 = HAnimSegment()
HAnimSegment174.setName("l_calf")
HAnimSegment174.setDEF("hanim_l_calf")
#<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
TouchSensor175 = TouchSensor()
TouchSensor175.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment174.addChildren(TouchSensor175)
Transform176 = Transform()
Transform176.setTranslation([0.104,0.4867,0.0308])
Shape177 = Shape()
Shape177.setUSE("HAnimJointShape")

Transform176.addChildren(Shape177)

HAnimSegment174.addChildren(Transform176)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape178 = Shape()
LineSet179 = LineSet()
LineSet179.setVertexCount([2])
Coordinate180 = Coordinate()
Coordinate180.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet179.setCoord(Coordinate180)
ColorRGBA181 = ColorRGBA()
ColorRGBA181.setUSE("HAnimSegmentLineColorRGBA")

LineSet179.setColor(ColorRGBA181)

Shape178.setGeometry(LineSet179)

HAnimSegment174.addChildren(Shape178)

HAnimJoint173.addChildren(HAnimSegment174)
HAnimJoint182 = HAnimJoint()
HAnimJoint182.setName("l_ankle")
HAnimJoint182.setDEF("hanim_l_ankle")
HAnimJoint182.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint182.setUlimit([0,0,0])
HAnimJoint182.setLlimit([0,0,0])
HAnimJoint182.setStiffness([0,0,0])
HAnimSegment183 = HAnimSegment()
HAnimSegment183.setName("l_hindfoot")
HAnimSegment183.setDEF("hanim_l_hindfoot")
#<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
TouchSensor184 = TouchSensor()
TouchSensor184.setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot")

HAnimSegment183.addChildren(TouchSensor184)
Transform185 = Transform()
Transform185.setTranslation([0.1101,0.0656,-0.0736])
Shape186 = Shape()
Shape186.setUSE("HAnimJointShape")

Transform185.addChildren(Shape186)

HAnimSegment183.addChildren(Transform185)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape187 = Shape()
LineSet188 = LineSet()
LineSet188.setVertexCount([2])
Coordinate189 = Coordinate()
Coordinate189.setPoint([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])

LineSet188.setCoord(Coordinate189)
ColorRGBA190 = ColorRGBA()
ColorRGBA190.setUSE("HAnimSegmentLineColorRGBA")

LineSet188.setColor(ColorRGBA190)

Shape187.setGeometry(LineSet188)

HAnimSegment183.addChildren(Shape187)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape191 = Shape()
LineSet192 = LineSet()
LineSet192.setVertexCount([2])
Coordinate193 = Coordinate()
Coordinate193.setPoint([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])

LineSet192.setCoord(Coordinate193)
ColorRGBA194 = ColorRGBA()
ColorRGBA194.setUSE("HAnimSiteLineColorRGBA")

LineSet192.setColor(ColorRGBA194)

Shape191.setGeometry(LineSet192)

HAnimSegment183.addChildren(Shape191)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape195 = Shape()
LineSet196 = LineSet()
LineSet196.setVertexCount([2])
Coordinate197 = Coordinate()
Coordinate197.setPoint([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])

LineSet196.setCoord(Coordinate197)
ColorRGBA198 = ColorRGBA()
ColorRGBA198.setUSE("HAnimSiteLineColorRGBA")

LineSet196.setColor(ColorRGBA198)

Shape195.setGeometry(LineSet196)

HAnimSegment183.addChildren(Shape195)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape199 = Shape()
LineSet200 = LineSet()
LineSet200.setVertexCount([2])
Coordinate201 = Coordinate()
Coordinate201.setPoint([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])

LineSet200.setCoord(Coordinate201)
ColorRGBA202 = ColorRGBA()
ColorRGBA202.setUSE("HAnimSiteLineColorRGBA")

LineSet200.setColor(ColorRGBA202)

Shape199.setGeometry(LineSet200)

HAnimSegment183.addChildren(Shape199)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape203 = Shape()
LineSet204 = LineSet()
LineSet204.setVertexCount([2])
Coordinate205 = Coordinate()
Coordinate205.setPoint([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])

LineSet204.setCoord(Coordinate205)
ColorRGBA206 = ColorRGBA()
ColorRGBA206.setUSE("HAnimSiteLineColorRGBA")

LineSet204.setColor(ColorRGBA206)

Shape203.setGeometry(LineSet204)

HAnimSegment183.addChildren(Shape203)
HAnimSite207 = HAnimSite()
HAnimSite207.setName("l_lateral_malleolus_pt")
HAnimSite207.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite207.setTranslation([0.1308,0.0597,-0.1032])
#HAnimSite visualization shape
TouchSensor208 = TouchSensor()
TouchSensor208.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite207.addChildren(TouchSensor208)
Shape209 = Shape()
Shape209.setUSE("HAnimSiteShape")

HAnimSite207.addChildren(Shape209)

HAnimSegment183.addChildren(HAnimSite207)
HAnimSite210 = HAnimSite()
HAnimSite210.setName("l_medial_malleolus_pt")
HAnimSite210.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite210.setTranslation([0.089,0.0716,-0.0881])
#HAnimSite visualization shape
TouchSensor211 = TouchSensor()
TouchSensor211.setDescription("HAnimSite l_medial_malleolus")

HAnimSite210.addChildren(TouchSensor211)
Shape212 = Shape()
Shape212.setUSE("HAnimSiteShape")

HAnimSite210.addChildren(Shape212)

HAnimSegment183.addChildren(HAnimSite210)
HAnimSite213 = HAnimSite()
HAnimSite213.setName("l_sphyrion_pt")
HAnimSite213.setDEF("hanim_l_sphyrion_pt")
HAnimSite213.setTranslation([0.089,0.0575,-0.0943])
#HAnimSite visualization shape
TouchSensor214 = TouchSensor()
TouchSensor214.setDescription("HAnimSite l_sphyrion")

HAnimSite213.addChildren(TouchSensor214)
Shape215 = Shape()
Shape215.setUSE("HAnimSiteShape")

HAnimSite213.addChildren(Shape215)

HAnimSegment183.addChildren(HAnimSite213)
HAnimSite216 = HAnimSite()
HAnimSite216.setName("l_calcaneous_post_pt")
HAnimSite216.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite216.setTranslation([0.0974,0.0259,-0.1171])
#HAnimSite visualization shape
TouchSensor217 = TouchSensor()
TouchSensor217.setDescription("HAnimSite l_calcaneous_post")

HAnimSite216.addChildren(TouchSensor217)
Shape218 = Shape()
Shape218.setUSE("HAnimSiteShape")

HAnimSite216.addChildren(Shape218)

HAnimSegment183.addChildren(HAnimSite216)

HAnimJoint182.addChildren(HAnimSegment183)
HAnimJoint219 = HAnimJoint()
HAnimJoint219.setName("l_subtalar")
HAnimJoint219.setDEF("hanim_l_subtalar")
HAnimJoint219.setCenter([0.1086,0.0001,-0.0368])
HAnimJoint219.setUlimit([0,0,0])
HAnimJoint219.setLlimit([0,0,0])
HAnimJoint219.setStiffness([0,0,0])
HAnimSegment220 = HAnimSegment()
HAnimSegment220.setName("l_midproximal")
HAnimSegment220.setDEF("hanim_l_midproximal")
#<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
TouchSensor221 = TouchSensor()
TouchSensor221.setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal")

HAnimSegment220.addChildren(TouchSensor221)
Transform222 = Transform()
Transform222.setTranslation([0.1086,0.0001,-0.0368])
Shape223 = Shape()
Shape223.setUSE("HAnimJointShape")

Transform222.addChildren(Shape223)

HAnimSegment220.addChildren(Transform222)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape224 = Shape()
LineSet225 = LineSet()
LineSet225.setVertexCount([2])
Coordinate226 = Coordinate()
Coordinate226.setPoint([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])

LineSet225.setCoord(Coordinate226)
ColorRGBA227 = ColorRGBA()
ColorRGBA227.setUSE("HAnimSegmentLineColorRGBA")

LineSet225.setColor(ColorRGBA227)

Shape224.setGeometry(LineSet225)

HAnimSegment220.addChildren(Shape224)

HAnimJoint219.addChildren(HAnimSegment220)
HAnimJoint228 = HAnimJoint()
HAnimJoint228.setName("l_midtarsal")
HAnimJoint228.setDEF("hanim_l_midtarsal")
HAnimJoint228.setCenter([0.1086,0.0001,0.0368])
HAnimJoint228.setUlimit([0,0,0])
HAnimJoint228.setLlimit([0,0,0])
HAnimJoint228.setStiffness([0,0,0])
HAnimSegment229 = HAnimSegment()
HAnimSegment229.setName("l_middistal")
HAnimSegment229.setDEF("hanim_l_middistal")
#<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
TouchSensor230 = TouchSensor()
TouchSensor230.setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal")

HAnimSegment229.addChildren(TouchSensor230)
Transform231 = Transform()
Transform231.setTranslation([0.1086,0.0001,0.0368])
Shape232 = Shape()
Shape232.setUSE("HAnimJointShape")

Transform231.addChildren(Shape232)

HAnimSegment229.addChildren(Transform231)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape233 = Shape()
LineSet234 = LineSet()
LineSet234.setVertexCount([2])
Coordinate235 = Coordinate()
Coordinate235.setPoint([0.1086,0.0001,0.0368,0.1086,0,0.0762])

LineSet234.setCoord(Coordinate235)
ColorRGBA236 = ColorRGBA()
ColorRGBA236.setUSE("HAnimSegmentLineColorRGBA")

LineSet234.setColor(ColorRGBA236)

Shape233.setGeometry(LineSet234)

HAnimSegment229.addChildren(Shape233)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape237 = Shape()
LineSet238 = LineSet()
LineSet238.setVertexCount([2])
Coordinate239 = Coordinate()
Coordinate239.setPoint([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])

LineSet238.setCoord(Coordinate239)
ColorRGBA240 = ColorRGBA()
ColorRGBA240.setUSE("HAnimSiteLineColorRGBA")

LineSet238.setColor(ColorRGBA240)

Shape237.setGeometry(LineSet238)

HAnimSegment229.addChildren(Shape237)
HAnimSite241 = HAnimSite()
HAnimSite241.setName("l_metatarsal_pha1_pt")
HAnimSite241.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite241.setTranslation([0.0816,0.0232,0.0106])
#HAnimSite visualization shape
TouchSensor242 = TouchSensor()
TouchSensor242.setDescription("HAnimSite l_metatarsal_pha1")

HAnimSite241.addChildren(TouchSensor242)
Shape243 = Shape()
Shape243.setUSE("HAnimSiteShape")

HAnimSite241.addChildren(Shape243)

HAnimSegment229.addChildren(HAnimSite241)

HAnimJoint228.addChildren(HAnimSegment229)
HAnimJoint244 = HAnimJoint()
HAnimJoint244.setName("l_metatarsal")
HAnimJoint244.setDEF("hanim_l_metatarsal")
HAnimJoint244.setCenter([0.1086,0,0.0762])
HAnimJoint244.setUlimit([0,0,0])
HAnimJoint244.setLlimit([0,0,0])
HAnimJoint244.setStiffness([0,0,0])
HAnimSegment245 = HAnimSegment()
HAnimSegment245.setName("l_forefoot")
HAnimSegment245.setDEF("hanim_l_forefoot")
#<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
TouchSensor246 = TouchSensor()
TouchSensor246.setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")

HAnimSegment245.addChildren(TouchSensor246)
Transform247 = Transform()
Transform247.setTranslation([0.1086,0,0.0762])
Shape248 = Shape()
Shape248.setUSE("HAnimJointShape")

Transform247.addChildren(Shape248)

HAnimSegment245.addChildren(Transform247)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape249 = Shape()
LineSet250 = LineSet()
LineSet250.setVertexCount([2])
Coordinate251 = Coordinate()
Coordinate251.setPoint([0.1086,0,0.0762,0.1354,0.0016,0.1476])

LineSet250.setCoord(Coordinate251)
ColorRGBA252 = ColorRGBA()
ColorRGBA252.setUSE("HAnimSiteLineColorRGBA")

LineSet250.setColor(ColorRGBA252)

Shape249.setGeometry(LineSet250)

HAnimSegment245.addChildren(Shape249)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape253 = Shape()
LineSet254 = LineSet()
LineSet254.setVertexCount([2])
Coordinate255 = Coordinate()
Coordinate255.setPoint([0.1086,0,0.0762,0.1825,0.007,0.0928])

LineSet254.setCoord(Coordinate255)
ColorRGBA256 = ColorRGBA()
ColorRGBA256.setUSE("HAnimSiteLineColorRGBA")

LineSet254.setColor(ColorRGBA256)

Shape253.setGeometry(LineSet254)

HAnimSegment245.addChildren(Shape253)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape257 = Shape()
LineSet258 = LineSet()
LineSet258.setVertexCount([2])
Coordinate259 = Coordinate()
Coordinate259.setPoint([0.1086,0,0.0762,0.1195,0.0079,0.1433])

LineSet258.setCoord(Coordinate259)
ColorRGBA260 = ColorRGBA()
ColorRGBA260.setUSE("HAnimSiteLineColorRGBA")

LineSet258.setColor(ColorRGBA260)

Shape257.setGeometry(LineSet258)

HAnimSegment245.addChildren(Shape257)
HAnimSite261 = HAnimSite()
HAnimSite261.setName("l_forefoot_tip")
HAnimSite261.setDEF("hanim_l_forefoot_tip")
HAnimSite261.setTranslation([0.1354,0.0016,0.1476])
#HAnimSite visualization shape
TouchSensor262 = TouchSensor()
TouchSensor262.setDescription("HAnimSite l_forefoot_tip")

HAnimSite261.addChildren(TouchSensor262)
Shape263 = Shape()
Shape263.setUSE("HAnimSiteShape")

HAnimSite261.addChildren(Shape263)

HAnimSegment245.addChildren(HAnimSite261)
HAnimSite264 = HAnimSite()
HAnimSite264.setName("l_metatarsal_pha5_pt")
HAnimSite264.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite264.setTranslation([0.1825,0.007,0.0928])
#HAnimSite visualization shape
TouchSensor265 = TouchSensor()
TouchSensor265.setDescription("HAnimSite l_metatarsal_pha5")

HAnimSite264.addChildren(TouchSensor265)
Shape266 = Shape()
Shape266.setUSE("HAnimSiteShape")

HAnimSite264.addChildren(Shape266)

HAnimSegment245.addChildren(HAnimSite264)
HAnimSite267 = HAnimSite()
HAnimSite267.setName("l_digit2_pt")
HAnimSite267.setDEF("hanim_l_digit2_pt")
HAnimSite267.setTranslation([0.1195,0.0079,0.1433])
#HAnimSite visualization shape
TouchSensor268 = TouchSensor()
TouchSensor268.setDescription("HAnimSite l_digit2")

HAnimSite267.addChildren(TouchSensor268)
Shape269 = Shape()
Shape269.setUSE("HAnimSiteShape")

HAnimSite267.addChildren(Shape269)

HAnimSegment245.addChildren(HAnimSite267)

HAnimJoint244.addChildren(HAnimSegment245)

HAnimJoint228.addChildren(HAnimJoint244)

HAnimJoint219.addChildren(HAnimJoint228)

HAnimJoint182.addChildren(HAnimJoint219)

HAnimJoint173.addChildren(HAnimJoint182)

HAnimJoint143.addChildren(HAnimJoint173)

HAnimJoint63.addChildren(HAnimJoint143)
HAnimJoint270 = HAnimJoint()
HAnimJoint270.setName("r_hip")
HAnimJoint270.setDEF("hanim_r_hip")
HAnimJoint270.setCenter([-0.0961,0.9124,-0.0001])
HAnimJoint270.setUlimit([0,0,0])
HAnimJoint270.setLlimit([0,0,0])
HAnimJoint270.setStiffness([0,0,0])
HAnimSegment271 = HAnimSegment()
HAnimSegment271.setName("r_thigh")
HAnimSegment271.setDEF("hanim_r_thigh")
#<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
TouchSensor272 = TouchSensor()
TouchSensor272.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment271.addChildren(TouchSensor272)
Transform273 = Transform()
Transform273.setTranslation([-0.0961,0.9124,-0.0001])
Shape274 = Shape()
Shape274.setUSE("HAnimJointShape")

Transform273.addChildren(Shape274)

HAnimSegment271.addChildren(Transform273)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape275 = Shape()
LineSet276 = LineSet()
LineSet276.setVertexCount([2])
Coordinate277 = Coordinate()
Coordinate277.setPoint([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])

LineSet276.setCoord(Coordinate277)
ColorRGBA278 = ColorRGBA()
ColorRGBA278.setUSE("HAnimSegmentLineColorRGBA")

LineSet276.setColor(ColorRGBA278)

Shape275.setGeometry(LineSet276)

HAnimSegment271.addChildren(Shape275)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape279 = Shape()
LineSet280 = LineSet()
LineSet280.setVertexCount([2])
Coordinate281 = Coordinate()
Coordinate281.setPoint([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])

LineSet280.setCoord(Coordinate281)
ColorRGBA282 = ColorRGBA()
ColorRGBA282.setUSE("HAnimSiteLineColorRGBA")

LineSet280.setColor(ColorRGBA282)

Shape279.setGeometry(LineSet280)

HAnimSegment271.addChildren(Shape279)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape283 = Shape()
LineSet284 = LineSet()
LineSet284.setVertexCount([2])
Coordinate285 = Coordinate()
Coordinate285.setPoint([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])

LineSet284.setCoord(Coordinate285)
ColorRGBA286 = ColorRGBA()
ColorRGBA286.setUSE("HAnimSiteLineColorRGBA")

LineSet284.setColor(ColorRGBA286)

Shape283.setGeometry(LineSet284)

HAnimSegment271.addChildren(Shape283)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape287 = Shape()
LineSet288 = LineSet()
LineSet288.setVertexCount([2])
Coordinate289 = Coordinate()
Coordinate289.setPoint([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])

LineSet288.setCoord(Coordinate289)
ColorRGBA290 = ColorRGBA()
ColorRGBA290.setUSE("HAnimSiteLineColorRGBA")

LineSet288.setColor(ColorRGBA290)

Shape287.setGeometry(LineSet288)

HAnimSegment271.addChildren(Shape287)
HAnimSite291 = HAnimSite()
HAnimSite291.setName("r_knee_crease_pt")
HAnimSite291.setDEF("hanim_r_knee_crease_pt")
HAnimSite291.setTranslation([-0.0825,0.4932,-0.0326])
#HAnimSite visualization shape
TouchSensor292 = TouchSensor()
TouchSensor292.setDescription("HAnimSite r_knee_crease")

HAnimSite291.addChildren(TouchSensor292)
Shape293 = Shape()
Shape293.setUSE("HAnimSiteShape")

HAnimSite291.addChildren(Shape293)

HAnimSegment271.addChildren(HAnimSite291)
HAnimSite294 = HAnimSite()
HAnimSite294.setName("r_femoral_lateral_epicn_pt")
HAnimSite294.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite294.setTranslation([-0.1421,0.4992,0.031])
#HAnimSite visualization shape
TouchSensor295 = TouchSensor()
TouchSensor295.setDescription("HAnimSite r_femoral_lateral_epicn")

HAnimSite294.addChildren(TouchSensor295)
Shape296 = Shape()
Shape296.setUSE("HAnimSiteShape")

HAnimSite294.addChildren(Shape296)

HAnimSegment271.addChildren(HAnimSite294)
HAnimSite297 = HAnimSite()
HAnimSite297.setName("r_femoral_medial_epicn_pt")
HAnimSite297.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite297.setTranslation([-0.0221,0.5014,0.0289])
#HAnimSite visualization shape
TouchSensor298 = TouchSensor()
TouchSensor298.setDescription("HAnimSite r_femoral_medial_epicn")

HAnimSite297.addChildren(TouchSensor298)
Shape299 = Shape()
Shape299.setUSE("HAnimSiteShape")

HAnimSite297.addChildren(Shape299)

HAnimSegment271.addChildren(HAnimSite297)

HAnimJoint270.addChildren(HAnimSegment271)
HAnimJoint300 = HAnimJoint()
HAnimJoint300.setName("r_knee")
HAnimJoint300.setDEF("hanim_r_knee")
HAnimJoint300.setCenter([-0.104,0.4867,0.0308])
HAnimJoint300.setUlimit([0,0,0])
HAnimJoint300.setLlimit([0,0,0])
HAnimJoint300.setStiffness([0,0,0])
HAnimSegment301 = HAnimSegment()
HAnimSegment301.setName("r_calf")
HAnimSegment301.setDEF("hanim_r_calf")
#<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
TouchSensor302 = TouchSensor()
TouchSensor302.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment301.addChildren(TouchSensor302)
Transform303 = Transform()
Transform303.setTranslation([-0.104,0.4867,0.0308])
Shape304 = Shape()
Shape304.setUSE("HAnimJointShape")

Transform303.addChildren(Shape304)

HAnimSegment301.addChildren(Transform303)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape305 = Shape()
LineSet306 = LineSet()
LineSet306.setVertexCount([2])
Coordinate307 = Coordinate()
Coordinate307.setPoint([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])

LineSet306.setCoord(Coordinate307)
ColorRGBA308 = ColorRGBA()
ColorRGBA308.setUSE("HAnimSegmentLineColorRGBA")

LineSet306.setColor(ColorRGBA308)

Shape305.setGeometry(LineSet306)

HAnimSegment301.addChildren(Shape305)

HAnimJoint300.addChildren(HAnimSegment301)
HAnimJoint309 = HAnimJoint()
HAnimJoint309.setName("r_ankle")
HAnimJoint309.setDEF("hanim_r_ankle")
HAnimJoint309.setCenter([-0.1101,0.0656,-0.0736])
HAnimJoint309.setUlimit([0,0,0])
HAnimJoint309.setLlimit([0,0,0])
HAnimJoint309.setStiffness([0,0,0])
HAnimSegment310 = HAnimSegment()
HAnimSegment310.setName("r_hindfoot")
HAnimSegment310.setDEF("hanim_r_hindfoot")
#<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
TouchSensor311 = TouchSensor()
TouchSensor311.setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot")

HAnimSegment310.addChildren(TouchSensor311)
Transform312 = Transform()
Transform312.setTranslation([-0.1101,0.0656,-0.0736])
Shape313 = Shape()
Shape313.setUSE("HAnimJointShape")

Transform312.addChildren(Shape313)

HAnimSegment310.addChildren(Transform312)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape314 = Shape()
LineSet315 = LineSet()
LineSet315.setVertexCount([2])
Coordinate316 = Coordinate()
Coordinate316.setPoint([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])

LineSet315.setCoord(Coordinate316)
ColorRGBA317 = ColorRGBA()
ColorRGBA317.setUSE("HAnimSegmentLineColorRGBA")

LineSet315.setColor(ColorRGBA317)

Shape314.setGeometry(LineSet315)

HAnimSegment310.addChildren(Shape314)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape318 = Shape()
LineSet319 = LineSet()
LineSet319.setVertexCount([2])
Coordinate320 = Coordinate()
Coordinate320.setPoint([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])

LineSet319.setCoord(Coordinate320)
ColorRGBA321 = ColorRGBA()
ColorRGBA321.setUSE("HAnimSiteLineColorRGBA")

LineSet319.setColor(ColorRGBA321)

Shape318.setGeometry(LineSet319)

HAnimSegment310.addChildren(Shape318)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape322 = Shape()
LineSet323 = LineSet()
LineSet323.setVertexCount([2])
Coordinate324 = Coordinate()
Coordinate324.setPoint([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])

LineSet323.setCoord(Coordinate324)
ColorRGBA325 = ColorRGBA()
ColorRGBA325.setUSE("HAnimSiteLineColorRGBA")

LineSet323.setColor(ColorRGBA325)

Shape322.setGeometry(LineSet323)

HAnimSegment310.addChildren(Shape322)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape326 = Shape()
LineSet327 = LineSet()
LineSet327.setVertexCount([2])
Coordinate328 = Coordinate()
Coordinate328.setPoint([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])

LineSet327.setCoord(Coordinate328)
ColorRGBA329 = ColorRGBA()
ColorRGBA329.setUSE("HAnimSiteLineColorRGBA")

LineSet327.setColor(ColorRGBA329)

Shape326.setGeometry(LineSet327)

HAnimSegment310.addChildren(Shape326)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape330 = Shape()
LineSet331 = LineSet()
LineSet331.setVertexCount([2])
Coordinate332 = Coordinate()
Coordinate332.setPoint([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])

LineSet331.setCoord(Coordinate332)
ColorRGBA333 = ColorRGBA()
ColorRGBA333.setUSE("HAnimSiteLineColorRGBA")

LineSet331.setColor(ColorRGBA333)

Shape330.setGeometry(LineSet331)

HAnimSegment310.addChildren(Shape330)
HAnimSite334 = HAnimSite()
HAnimSite334.setName("r_lateral_malleolus_pt")
HAnimSite334.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite334.setTranslation([-0.1006,0.0658,-0.1075])
#HAnimSite visualization shape
TouchSensor335 = TouchSensor()
TouchSensor335.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite334.addChildren(TouchSensor335)
Shape336 = Shape()
Shape336.setUSE("HAnimSiteShape")

HAnimSite334.addChildren(Shape336)

HAnimSegment310.addChildren(HAnimSite334)
HAnimSite337 = HAnimSite()
HAnimSite337.setName("r_medial_malleolus_pt")
HAnimSite337.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite337.setTranslation([-0.0591,0.076,-0.0928])
#HAnimSite visualization shape
TouchSensor338 = TouchSensor()
TouchSensor338.setDescription("HAnimSite r_medial_malleolus")

HAnimSite337.addChildren(TouchSensor338)
Shape339 = Shape()
Shape339.setUSE("HAnimSiteShape")

HAnimSite337.addChildren(Shape339)

HAnimSegment310.addChildren(HAnimSite337)
HAnimSite340 = HAnimSite()
HAnimSite340.setName("r_sphyrion_pt")
HAnimSite340.setDEF("hanim_r_sphyrion_pt")
HAnimSite340.setTranslation([-0.0603,0.061,-0.1002])
#HAnimSite visualization shape
TouchSensor341 = TouchSensor()
TouchSensor341.setDescription("HAnimSite r_sphyrion")

HAnimSite340.addChildren(TouchSensor341)
Shape342 = Shape()
Shape342.setUSE("HAnimSiteShape")

HAnimSite340.addChildren(Shape342)

HAnimSegment310.addChildren(HAnimSite340)
HAnimSite343 = HAnimSite()
HAnimSite343.setName("r_calcaneous_post_pt")
HAnimSite343.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite343.setTranslation([-0.0692,0.0297,-0.1221])
#HAnimSite visualization shape
TouchSensor344 = TouchSensor()
TouchSensor344.setDescription("HAnimSite r_calcaneous_post")

HAnimSite343.addChildren(TouchSensor344)
Shape345 = Shape()
Shape345.setUSE("HAnimSiteShape")

HAnimSite343.addChildren(Shape345)

HAnimSegment310.addChildren(HAnimSite343)

HAnimJoint309.addChildren(HAnimSegment310)
HAnimJoint346 = HAnimJoint()
HAnimJoint346.setName("r_subtalar")
HAnimJoint346.setDEF("hanim_r_subtalar")
HAnimJoint346.setCenter([-0.1086,0.0001,-0.0368])
HAnimJoint346.setUlimit([0,0,0])
HAnimJoint346.setLlimit([0,0,0])
HAnimJoint346.setStiffness([0,0,0])
HAnimSegment347 = HAnimSegment()
HAnimSegment347.setName("r_midproximal")
HAnimSegment347.setDEF("hanim_r_midproximal")
#<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
TouchSensor348 = TouchSensor()
TouchSensor348.setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal")

HAnimSegment347.addChildren(TouchSensor348)
Transform349 = Transform()
Transform349.setTranslation([-0.1086,0.0001,-0.0368])
Shape350 = Shape()
Shape350.setUSE("HAnimJointShape")

Transform349.addChildren(Shape350)

HAnimSegment347.addChildren(Transform349)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape351 = Shape()
LineSet352 = LineSet()
LineSet352.setVertexCount([2])
Coordinate353 = Coordinate()
Coordinate353.setPoint([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])

LineSet352.setCoord(Coordinate353)
ColorRGBA354 = ColorRGBA()
ColorRGBA354.setUSE("HAnimSegmentLineColorRGBA")

LineSet352.setColor(ColorRGBA354)

Shape351.setGeometry(LineSet352)

HAnimSegment347.addChildren(Shape351)

HAnimJoint346.addChildren(HAnimSegment347)
HAnimJoint355 = HAnimJoint()
HAnimJoint355.setName("r_midtarsal")
HAnimJoint355.setDEF("hanim_r_midtarsal")
HAnimJoint355.setCenter([-0.1086,0.0001,0.0368])
HAnimJoint355.setUlimit([0,0,0])
HAnimJoint355.setLlimit([0,0,0])
HAnimJoint355.setStiffness([0,0,0])
HAnimSegment356 = HAnimSegment()
HAnimSegment356.setName("r_middistal")
HAnimSegment356.setDEF("hanim_r_middistal")
#<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
TouchSensor357 = TouchSensor()
TouchSensor357.setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal")

HAnimSegment356.addChildren(TouchSensor357)
Transform358 = Transform()
Transform358.setTranslation([-0.1086,0.0001,0.0368])
Shape359 = Shape()
Shape359.setUSE("HAnimJointShape")

Transform358.addChildren(Shape359)

HAnimSegment356.addChildren(Transform358)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape360 = Shape()
LineSet361 = LineSet()
LineSet361.setVertexCount([2])
Coordinate362 = Coordinate()
Coordinate362.setPoint([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])

LineSet361.setCoord(Coordinate362)
ColorRGBA363 = ColorRGBA()
ColorRGBA363.setUSE("HAnimSegmentLineColorRGBA")

LineSet361.setColor(ColorRGBA363)

Shape360.setGeometry(LineSet361)

HAnimSegment356.addChildren(Shape360)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape364 = Shape()
LineSet365 = LineSet()
LineSet365.setVertexCount([2])
Coordinate366 = Coordinate()
Coordinate366.setPoint([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])

LineSet365.setCoord(Coordinate366)
ColorRGBA367 = ColorRGBA()
ColorRGBA367.setUSE("HAnimSiteLineColorRGBA")

LineSet365.setColor(ColorRGBA367)

Shape364.setGeometry(LineSet365)

HAnimSegment356.addChildren(Shape364)
HAnimSite368 = HAnimSite()
HAnimSite368.setName("r_metatarsal_pha1_pt")
HAnimSite368.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite368.setTranslation([-0.0521,0.026,0.0127])
#HAnimSite visualization shape
TouchSensor369 = TouchSensor()
TouchSensor369.setDescription("HAnimSite r_metatarsal_pha1")

HAnimSite368.addChildren(TouchSensor369)
Shape370 = Shape()
Shape370.setUSE("HAnimSiteShape")

HAnimSite368.addChildren(Shape370)

HAnimSegment356.addChildren(HAnimSite368)

HAnimJoint355.addChildren(HAnimSegment356)
HAnimJoint371 = HAnimJoint()
HAnimJoint371.setName("r_metatarsal")
HAnimJoint371.setDEF("hanim_r_metatarsal")
HAnimJoint371.setCenter([-0.1086,0,0.0762])
HAnimJoint371.setUlimit([0,0,0])
HAnimJoint371.setLlimit([0,0,0])
HAnimJoint371.setStiffness([0,0,0])
HAnimSegment372 = HAnimSegment()
HAnimSegment372.setName("r_forefoot")
HAnimSegment372.setDEF("hanim_r_forefoot")
#<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
TouchSensor373 = TouchSensor()
TouchSensor373.setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")

HAnimSegment372.addChildren(TouchSensor373)
Transform374 = Transform()
Transform374.setTranslation([-0.1086,0,0.0762])
Shape375 = Shape()
Shape375.setUSE("HAnimJointShape")

Transform374.addChildren(Shape375)

HAnimSegment372.addChildren(Transform374)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape376 = Shape()
LineSet377 = LineSet()
LineSet377.setVertexCount([2])
Coordinate378 = Coordinate()
Coordinate378.setPoint([-0.1086,0,0.0762,-0.1043,0.0227,0.145])

LineSet377.setCoord(Coordinate378)
ColorRGBA379 = ColorRGBA()
ColorRGBA379.setUSE("HAnimSiteLineColorRGBA")

LineSet377.setColor(ColorRGBA379)

Shape376.setGeometry(LineSet377)

HAnimSegment372.addChildren(Shape376)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape380 = Shape()
LineSet381 = LineSet()
LineSet381.setVertexCount([2])
Coordinate382 = Coordinate()
Coordinate382.setPoint([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])

LineSet381.setCoord(Coordinate382)
ColorRGBA383 = ColorRGBA()
ColorRGBA383.setUSE("HAnimSiteLineColorRGBA")

LineSet381.setColor(ColorRGBA383)

Shape380.setGeometry(LineSet381)

HAnimSegment372.addChildren(Shape380)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape384 = Shape()
LineSet385 = LineSet()
LineSet385.setVertexCount([2])
Coordinate386 = Coordinate()
Coordinate386.setPoint([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])

LineSet385.setCoord(Coordinate386)
ColorRGBA387 = ColorRGBA()
ColorRGBA387.setUSE("HAnimSiteLineColorRGBA")

LineSet385.setColor(ColorRGBA387)

Shape384.setGeometry(LineSet385)

HAnimSegment372.addChildren(Shape384)
HAnimSite388 = HAnimSite()
HAnimSite388.setName("r_forefoot_tip")
HAnimSite388.setDEF("hanim_r_forefoot_tip")
HAnimSite388.setTranslation([-0.1043,0.0227,0.145])
#HAnimSite visualization shape
TouchSensor389 = TouchSensor()
TouchSensor389.setDescription("HAnimSite r_forefoot_tip")

HAnimSite388.addChildren(TouchSensor389)
Shape390 = Shape()
Shape390.setUSE("HAnimSiteShape")

HAnimSite388.addChildren(Shape390)

HAnimSegment372.addChildren(HAnimSite388)
HAnimSite391 = HAnimSite()
HAnimSite391.setName("r_metatarsal_pha5_pt")
HAnimSite391.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite391.setTranslation([-0.1523,0.0166,0.0895])
#HAnimSite visualization shape
TouchSensor392 = TouchSensor()
TouchSensor392.setDescription("HAnimSite r_metatarsal_pha5")

HAnimSite391.addChildren(TouchSensor392)
Shape393 = Shape()
Shape393.setUSE("HAnimSiteShape")

HAnimSite391.addChildren(Shape393)

HAnimSegment372.addChildren(HAnimSite391)
HAnimSite394 = HAnimSite()
HAnimSite394.setName("r_digit2_pt")
HAnimSite394.setDEF("hanim_r_digit2_pt")
HAnimSite394.setTranslation([-0.0883,0.0134,0.1383])
#HAnimSite visualization shape
TouchSensor395 = TouchSensor()
TouchSensor395.setDescription("HAnimSite r_digit2")

HAnimSite394.addChildren(TouchSensor395)
Shape396 = Shape()
Shape396.setUSE("HAnimSiteShape")

HAnimSite394.addChildren(Shape396)

HAnimSegment372.addChildren(HAnimSite394)

HAnimJoint371.addChildren(HAnimSegment372)

HAnimJoint355.addChildren(HAnimJoint371)

HAnimJoint346.addChildren(HAnimJoint355)

HAnimJoint309.addChildren(HAnimJoint346)

HAnimJoint300.addChildren(HAnimJoint309)

HAnimJoint270.addChildren(HAnimJoint300)

HAnimJoint63.addChildren(HAnimJoint270)

HAnimJoint47.addChildren(HAnimJoint63)
HAnimJoint397 = HAnimJoint()
HAnimJoint397.setName("vl5")
HAnimJoint397.setDEF("hanim_vl5")
HAnimJoint397.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint397.setUlimit([0,0,0])
HAnimJoint397.setLlimit([0,0,0])
HAnimJoint397.setStiffness([0,0,0])
HAnimSegment398 = HAnimSegment()
HAnimSegment398.setName("l5")
HAnimSegment398.setDEF("hanim_l5")
#<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
TouchSensor399 = TouchSensor()
TouchSensor399.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment398.addChildren(TouchSensor399)
Transform400 = Transform()
Transform400.setTranslation([0.0028,1.0568,-0.0776])
Shape401 = Shape()
Shape401.setUSE("HAnimJointShape")

Transform400.addChildren(Shape401)

HAnimSegment398.addChildren(Transform400)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape402 = Shape()
LineSet403 = LineSet()
LineSet403.setVertexCount([2])
Coordinate404 = Coordinate()
Coordinate404.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet403.setCoord(Coordinate404)
ColorRGBA405 = ColorRGBA()
ColorRGBA405.setUSE("HAnimSegmentLineColorRGBA")

LineSet403.setColor(ColorRGBA405)

Shape402.setGeometry(LineSet403)

HAnimSegment398.addChildren(Shape402)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape406 = Shape()
LineSet407 = LineSet()
LineSet407.setVertexCount([2])
Coordinate408 = Coordinate()
Coordinate408.setPoint([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])

LineSet407.setCoord(Coordinate408)
ColorRGBA409 = ColorRGBA()
ColorRGBA409.setUSE("HAnimSiteLineColorRGBA")

LineSet407.setColor(ColorRGBA409)

Shape406.setGeometry(LineSet407)

HAnimSegment398.addChildren(Shape406)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape410 = Shape()
LineSet411 = LineSet()
LineSet411.setVertexCount([2])
Coordinate412 = Coordinate()
Coordinate412.setPoint([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])

LineSet411.setCoord(Coordinate412)
ColorRGBA413 = ColorRGBA()
ColorRGBA413.setUSE("HAnimSiteLineColorRGBA")

LineSet411.setColor(ColorRGBA413)

Shape410.setGeometry(LineSet411)

HAnimSegment398.addChildren(Shape410)
HAnimSite414 = HAnimSite()
HAnimSite414.setName("waist_preferred_post_pt")
HAnimSite414.setDEF("hanim_waist_preferred_post_pt")
HAnimSite414.setTranslation([0,1.0915,-0.1091])
#HAnimSite visualization shape
TouchSensor415 = TouchSensor()
TouchSensor415.setDescription("HAnimSite waist_preferred_post")

HAnimSite414.addChildren(TouchSensor415)
Shape416 = Shape()
Shape416.setUSE("HAnimSiteShape")

HAnimSite414.addChildren(Shape416)

HAnimSegment398.addChildren(HAnimSite414)
HAnimSite417 = HAnimSite()
HAnimSite417.setName("navel_pt")
HAnimSite417.setDEF("hanim_navel_pt")
HAnimSite417.setTranslation([0.0069,1.0966,0.1017])
#HAnimSite visualization shape
TouchSensor418 = TouchSensor()
TouchSensor418.setDescription("HAnimSite navel")

HAnimSite417.addChildren(TouchSensor418)
Shape419 = Shape()
Shape419.setUSE("HAnimSiteShape")

HAnimSite417.addChildren(Shape419)

HAnimSegment398.addChildren(HAnimSite417)

HAnimJoint397.addChildren(HAnimSegment398)
HAnimJoint420 = HAnimJoint()
HAnimJoint420.setName("vl4")
HAnimJoint420.setDEF("hanim_vl4")
HAnimJoint420.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint420.setUlimit([0,0,0])
HAnimJoint420.setLlimit([0,0,0])
HAnimJoint420.setStiffness([0,0,0])
HAnimSegment421 = HAnimSegment()
HAnimSegment421.setName("l4")
HAnimSegment421.setDEF("hanim_l4")
#<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
TouchSensor422 = TouchSensor()
TouchSensor422.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment421.addChildren(TouchSensor422)
Transform423 = Transform()
Transform423.setTranslation([0.0035,1.0925,-0.0787])
Shape424 = Shape()
Shape424.setUSE("HAnimJointShape")

Transform423.addChildren(Shape424)

HAnimSegment421.addChildren(Transform423)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape425 = Shape()
LineSet426 = LineSet()
LineSet426.setVertexCount([2])
Coordinate427 = Coordinate()
Coordinate427.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet426.setCoord(Coordinate427)
ColorRGBA428 = ColorRGBA()
ColorRGBA428.setUSE("HAnimSegmentLineColorRGBA")

LineSet426.setColor(ColorRGBA428)

Shape425.setGeometry(LineSet426)

HAnimSegment421.addChildren(Shape425)

HAnimJoint420.addChildren(HAnimSegment421)
HAnimJoint429 = HAnimJoint()
HAnimJoint429.setName("vl3")
HAnimJoint429.setDEF("hanim_vl3")
HAnimJoint429.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint429.setUlimit([0,0,0])
HAnimJoint429.setLlimit([0,0,0])
HAnimJoint429.setStiffness([0,0,0])
HAnimSegment430 = HAnimSegment()
HAnimSegment430.setName("l3")
HAnimSegment430.setDEF("hanim_l3")
#<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
TouchSensor431 = TouchSensor()
TouchSensor431.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment430.addChildren(TouchSensor431)
Transform432 = Transform()
Transform432.setTranslation([0.0041,1.1276,-0.0796])
Shape433 = Shape()
Shape433.setUSE("HAnimJointShape")

Transform432.addChildren(Shape433)

HAnimSegment430.addChildren(Transform432)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape434 = Shape()
LineSet435 = LineSet()
LineSet435.setVertexCount([2])
Coordinate436 = Coordinate()
Coordinate436.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet435.setCoord(Coordinate436)
ColorRGBA437 = ColorRGBA()
ColorRGBA437.setUSE("HAnimSegmentLineColorRGBA")

LineSet435.setColor(ColorRGBA437)

Shape434.setGeometry(LineSet435)

HAnimSegment430.addChildren(Shape434)

HAnimJoint429.addChildren(HAnimSegment430)
HAnimJoint438 = HAnimJoint()
HAnimJoint438.setName("vl2")
HAnimJoint438.setDEF("hanim_vl2")
HAnimJoint438.setCenter([0.0045,1.1546,-0.08])
HAnimJoint438.setUlimit([0,0,0])
HAnimJoint438.setLlimit([0,0,0])
HAnimJoint438.setStiffness([0,0,0])
HAnimSegment439 = HAnimSegment()
HAnimSegment439.setName("l2")
HAnimSegment439.setDEF("hanim_l2")
#<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
TouchSensor440 = TouchSensor()
TouchSensor440.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment439.addChildren(TouchSensor440)
Transform441 = Transform()
Transform441.setTranslation([0.0045,1.1546,-0.08])
Shape442 = Shape()
Shape442.setUSE("HAnimJointShape")

Transform441.addChildren(Shape442)

HAnimSegment439.addChildren(Transform441)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape443 = Shape()
LineSet444 = LineSet()
LineSet444.setVertexCount([2])
Coordinate445 = Coordinate()
Coordinate445.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet444.setCoord(Coordinate445)
ColorRGBA446 = ColorRGBA()
ColorRGBA446.setUSE("HAnimSegmentLineColorRGBA")

LineSet444.setColor(ColorRGBA446)

Shape443.setGeometry(LineSet444)

HAnimSegment439.addChildren(Shape443)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape447 = Shape()
LineSet448 = LineSet()
LineSet448.setVertexCount([2])
Coordinate449 = Coordinate()
Coordinate449.setPoint([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])

LineSet448.setCoord(Coordinate449)
ColorRGBA450 = ColorRGBA()
ColorRGBA450.setUSE("HAnimSiteLineColorRGBA")

LineSet448.setColor(ColorRGBA450)

Shape447.setGeometry(LineSet448)

HAnimSegment439.addChildren(Shape447)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape451 = Shape()
LineSet452 = LineSet()
LineSet452.setVertexCount([2])
Coordinate453 = Coordinate()
Coordinate453.setPoint([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])

LineSet452.setCoord(Coordinate453)
ColorRGBA454 = ColorRGBA()
ColorRGBA454.setUSE("HAnimSiteLineColorRGBA")

LineSet452.setColor(ColorRGBA454)

Shape451.setGeometry(LineSet452)

HAnimSegment439.addChildren(Shape451)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape455 = Shape()
LineSet456 = LineSet()
LineSet456.setVertexCount([2])
Coordinate457 = Coordinate()
Coordinate457.setPoint([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])

LineSet456.setCoord(Coordinate457)
ColorRGBA458 = ColorRGBA()
ColorRGBA458.setUSE("HAnimSiteLineColorRGBA")

LineSet456.setColor(ColorRGBA458)

Shape455.setGeometry(LineSet456)

HAnimSegment439.addChildren(Shape455)
HAnimSite459 = HAnimSite()
HAnimSite459.setName("r_rib10_pt")
HAnimSite459.setDEF("hanim_r_rib10_pt")
HAnimSite459.setTranslation([-0.0711,1.1941,0.1016])
#HAnimSite visualization shape
TouchSensor460 = TouchSensor()
TouchSensor460.setDescription("HAnimSite r_rib10")

HAnimSite459.addChildren(TouchSensor460)
Shape461 = Shape()
Shape461.setUSE("HAnimSiteShape")

HAnimSite459.addChildren(Shape461)

HAnimSegment439.addChildren(HAnimSite459)
HAnimSite462 = HAnimSite()
HAnimSite462.setName("l_rib10_pt")
HAnimSite462.setDEF("hanim_l_rib10_pt")
HAnimSite462.setTranslation([0.0871,1.1925,0.0992])
#HAnimSite visualization shape
TouchSensor463 = TouchSensor()
TouchSensor463.setDescription("HAnimSite l_rib10")

HAnimSite462.addChildren(TouchSensor463)
Shape464 = Shape()
Shape464.setUSE("HAnimSiteShape")

HAnimSite462.addChildren(Shape464)

HAnimSegment439.addChildren(HAnimSite462)
HAnimSite465 = HAnimSite()
HAnimSite465.setName("rib10_midspine_pt")
HAnimSite465.setDEF("hanim_rib10_midspine_pt")
HAnimSite465.setTranslation([0.0049,1.1908,-0.1113])
#HAnimSite visualization shape
TouchSensor466 = TouchSensor()
TouchSensor466.setDescription("HAnimSite rib10_midspine")

HAnimSite465.addChildren(TouchSensor466)
Shape467 = Shape()
Shape467.setUSE("HAnimSiteShape")

HAnimSite465.addChildren(Shape467)

HAnimSegment439.addChildren(HAnimSite465)

HAnimJoint438.addChildren(HAnimSegment439)
HAnimJoint468 = HAnimJoint()
HAnimJoint468.setName("vl1")
HAnimJoint468.setDEF("hanim_vl1")
HAnimJoint468.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint468.setUlimit([0,0,0])
HAnimJoint468.setLlimit([0,0,0])
HAnimJoint468.setStiffness([0,0,0])
HAnimSegment469 = HAnimSegment()
HAnimSegment469.setName("l1")
HAnimSegment469.setDEF("hanim_l1")
#<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
TouchSensor470 = TouchSensor()
TouchSensor470.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment469.addChildren(TouchSensor470)
Transform471 = Transform()
Transform471.setTranslation([0.0048,1.1912,-0.0805])
Shape472 = Shape()
Shape472.setUSE("HAnimJointShape")

Transform471.addChildren(Shape472)

HAnimSegment469.addChildren(Transform471)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape473 = Shape()
LineSet474 = LineSet()
LineSet474.setVertexCount([2])
Coordinate475 = Coordinate()
Coordinate475.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet474.setCoord(Coordinate475)
ColorRGBA476 = ColorRGBA()
ColorRGBA476.setUSE("HAnimSegmentLineColorRGBA")

LineSet474.setColor(ColorRGBA476)

Shape473.setGeometry(LineSet474)

HAnimSegment469.addChildren(Shape473)

HAnimJoint468.addChildren(HAnimSegment469)
HAnimJoint477 = HAnimJoint()
HAnimJoint477.setName("vt12")
HAnimJoint477.setDEF("hanim_vt12")
HAnimJoint477.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint477.setUlimit([0,0,0])
HAnimJoint477.setLlimit([0,0,0])
HAnimJoint477.setStiffness([0,0,0])
HAnimSegment478 = HAnimSegment()
HAnimSegment478.setName("t12")
HAnimSegment478.setDEF("hanim_t12")
#<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
TouchSensor479 = TouchSensor()
TouchSensor479.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment478.addChildren(TouchSensor479)
Transform480 = Transform()
Transform480.setTranslation([0.0051,1.2278,-0.0808])
Shape481 = Shape()
Shape481.setUSE("HAnimJointShape")

Transform480.addChildren(Shape481)

HAnimSegment478.addChildren(Transform480)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape482 = Shape()
LineSet483 = LineSet()
LineSet483.setVertexCount([2])
Coordinate484 = Coordinate()
Coordinate484.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet483.setCoord(Coordinate484)
ColorRGBA485 = ColorRGBA()
ColorRGBA485.setUSE("HAnimSegmentLineColorRGBA")

LineSet483.setColor(ColorRGBA485)

Shape482.setGeometry(LineSet483)

HAnimSegment478.addChildren(Shape482)

HAnimJoint477.addChildren(HAnimSegment478)
HAnimJoint486 = HAnimJoint()
HAnimJoint486.setName("vt11")
HAnimJoint486.setDEF("hanim_vt11")
HAnimJoint486.setCenter([0.0053,1.2679,-0.081])
HAnimJoint486.setUlimit([0,0,0])
HAnimJoint486.setLlimit([0,0,0])
HAnimJoint486.setStiffness([0,0,0])
HAnimSegment487 = HAnimSegment()
HAnimSegment487.setName("t11")
HAnimSegment487.setDEF("hanim_t11")
#<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
TouchSensor488 = TouchSensor()
TouchSensor488.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment487.addChildren(TouchSensor488)
Transform489 = Transform()
Transform489.setTranslation([0.0053,1.2679,-0.081])
Shape490 = Shape()
Shape490.setUSE("HAnimJointShape")

Transform489.addChildren(Shape490)

HAnimSegment487.addChildren(Transform489)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape491 = Shape()
LineSet492 = LineSet()
LineSet492.setVertexCount([2])
Coordinate493 = Coordinate()
Coordinate493.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet492.setCoord(Coordinate493)
ColorRGBA494 = ColorRGBA()
ColorRGBA494.setUSE("HAnimSegmentLineColorRGBA")

LineSet492.setColor(ColorRGBA494)

Shape491.setGeometry(LineSet492)

HAnimSegment487.addChildren(Shape491)

HAnimJoint486.addChildren(HAnimSegment487)
HAnimJoint495 = HAnimJoint()
HAnimJoint495.setName("vt10")
HAnimJoint495.setDEF("hanim_vt10")
HAnimJoint495.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint495.setUlimit([0,0,0])
HAnimJoint495.setLlimit([0,0,0])
HAnimJoint495.setStiffness([0,0,0])
HAnimSegment496 = HAnimSegment()
HAnimSegment496.setName("t10")
HAnimSegment496.setDEF("hanim_t10")
#<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
TouchSensor497 = TouchSensor()
TouchSensor497.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment496.addChildren(TouchSensor497)
Transform498 = Transform()
Transform498.setTranslation([0.0056,1.2848,-0.0822])
Shape499 = Shape()
Shape499.setUSE("HAnimJointShape")

Transform498.addChildren(Shape499)

HAnimSegment496.addChildren(Transform498)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape500 = Shape()
LineSet501 = LineSet()
LineSet501.setVertexCount([2])
Coordinate502 = Coordinate()
Coordinate502.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet501.setCoord(Coordinate502)
ColorRGBA503 = ColorRGBA()
ColorRGBA503.setUSE("HAnimSegmentLineColorRGBA")

LineSet501.setColor(ColorRGBA503)

Shape500.setGeometry(LineSet501)

HAnimSegment496.addChildren(Shape500)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape504 = Shape()
LineSet505 = LineSet()
LineSet505.setVertexCount([2])
Coordinate506 = Coordinate()
Coordinate506.setPoint([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])

LineSet505.setCoord(Coordinate506)
ColorRGBA507 = ColorRGBA()
ColorRGBA507.setUSE("HAnimSiteLineColorRGBA")

LineSet505.setColor(ColorRGBA507)

Shape504.setGeometry(LineSet505)

HAnimSegment496.addChildren(Shape504)
HAnimSite508 = HAnimSite()
HAnimSite508.setName("substernale_pt")
HAnimSite508.setDEF("hanim_substernale_pt")
HAnimSite508.setTranslation([0.0085,1.2995,0.1147])
#HAnimSite visualization shape
TouchSensor509 = TouchSensor()
TouchSensor509.setDescription("HAnimSite substernale")

HAnimSite508.addChildren(TouchSensor509)
Shape510 = Shape()
Shape510.setUSE("HAnimSiteShape")

HAnimSite508.addChildren(Shape510)

HAnimSegment496.addChildren(HAnimSite508)

HAnimJoint495.addChildren(HAnimSegment496)
HAnimJoint511 = HAnimJoint()
HAnimJoint511.setName("vt9")
HAnimJoint511.setDEF("hanim_vt9")
HAnimJoint511.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint511.setUlimit([0,0,0])
HAnimJoint511.setLlimit([0,0,0])
HAnimJoint511.setStiffness([0,0,0])
HAnimSegment512 = HAnimSegment()
HAnimSegment512.setName("t9")
HAnimSegment512.setDEF("hanim_t9")
#<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
TouchSensor513 = TouchSensor()
TouchSensor513.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment512.addChildren(TouchSensor513)
Transform514 = Transform()
Transform514.setTranslation([0.0057,1.3126,-0.0838])
Shape515 = Shape()
Shape515.setUSE("HAnimJointShape")

Transform514.addChildren(Shape515)

HAnimSegment512.addChildren(Transform514)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape516 = Shape()
LineSet517 = LineSet()
LineSet517.setVertexCount([2])
Coordinate518 = Coordinate()
Coordinate518.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet517.setCoord(Coordinate518)
ColorRGBA519 = ColorRGBA()
ColorRGBA519.setUSE("HAnimSegmentLineColorRGBA")

LineSet517.setColor(ColorRGBA519)

Shape516.setGeometry(LineSet517)

HAnimSegment512.addChildren(Shape516)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape520 = Shape()
LineSet521 = LineSet()
LineSet521.setVertexCount([2])
Coordinate522 = Coordinate()
Coordinate522.setPoint([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])

LineSet521.setCoord(Coordinate522)
ColorRGBA523 = ColorRGBA()
ColorRGBA523.setUSE("HAnimSiteLineColorRGBA")

LineSet521.setColor(ColorRGBA523)

Shape520.setGeometry(LineSet521)

HAnimSegment512.addChildren(Shape520)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape524 = Shape()
LineSet525 = LineSet()
LineSet525.setVertexCount([2])
Coordinate526 = Coordinate()
Coordinate526.setPoint([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])

LineSet525.setCoord(Coordinate526)
ColorRGBA527 = ColorRGBA()
ColorRGBA527.setUSE("HAnimSiteLineColorRGBA")

LineSet525.setColor(ColorRGBA527)

Shape524.setGeometry(LineSet525)

HAnimSegment512.addChildren(Shape524)
HAnimSite528 = HAnimSite()
HAnimSite528.setName("r_thelion_pt")
HAnimSite528.setDEF("hanim_r_thelion_pt")
HAnimSite528.setTranslation([-0.0736,1.3385,0.1217])
#HAnimSite visualization shape
TouchSensor529 = TouchSensor()
TouchSensor529.setDescription("HAnimSite r_thelion")

HAnimSite528.addChildren(TouchSensor529)
Shape530 = Shape()
Shape530.setUSE("HAnimSiteShape")

HAnimSite528.addChildren(Shape530)

HAnimSegment512.addChildren(HAnimSite528)
HAnimSite531 = HAnimSite()
HAnimSite531.setName("l_thelion_pt")
HAnimSite531.setDEF("hanim_l_thelion_pt")
HAnimSite531.setTranslation([0.0918,1.3382,0.1192])
#HAnimSite visualization shape
TouchSensor532 = TouchSensor()
TouchSensor532.setDescription("HAnimSite l_thelion")

HAnimSite531.addChildren(TouchSensor532)
Shape533 = Shape()
Shape533.setUSE("HAnimSiteShape")

HAnimSite531.addChildren(Shape533)

HAnimSegment512.addChildren(HAnimSite531)

HAnimJoint511.addChildren(HAnimSegment512)
HAnimJoint534 = HAnimJoint()
HAnimJoint534.setName("vt8")
HAnimJoint534.setDEF("hanim_vt8")
HAnimJoint534.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint534.setUlimit([0,0,0])
HAnimJoint534.setLlimit([0,0,0])
HAnimJoint534.setStiffness([0,0,0])
HAnimSegment535 = HAnimSegment()
HAnimSegment535.setName("t8")
HAnimSegment535.setDEF("hanim_t8")
#<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
TouchSensor536 = TouchSensor()
TouchSensor536.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment535.addChildren(TouchSensor536)
Transform537 = Transform()
Transform537.setTranslation([0.0057,1.3382,-0.0845])
Shape538 = Shape()
Shape538.setUSE("HAnimJointShape")

Transform537.addChildren(Shape538)

HAnimSegment535.addChildren(Transform537)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape539 = Shape()
LineSet540 = LineSet()
LineSet540.setVertexCount([2])
Coordinate541 = Coordinate()
Coordinate541.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet540.setCoord(Coordinate541)
ColorRGBA542 = ColorRGBA()
ColorRGBA542.setUSE("HAnimSegmentLineColorRGBA")

LineSet540.setColor(ColorRGBA542)

Shape539.setGeometry(LineSet540)

HAnimSegment535.addChildren(Shape539)

HAnimJoint534.addChildren(HAnimSegment535)
HAnimJoint543 = HAnimJoint()
HAnimJoint543.setName("vt7")
HAnimJoint543.setDEF("hanim_vt7")
HAnimJoint543.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint543.setUlimit([0,0,0])
HAnimJoint543.setLlimit([0,0,0])
HAnimJoint543.setStiffness([0,0,0])
HAnimSegment544 = HAnimSegment()
HAnimSegment544.setName("t7")
HAnimSegment544.setDEF("hanim_t7")
#<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
TouchSensor545 = TouchSensor()
TouchSensor545.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment544.addChildren(TouchSensor545)
Transform546 = Transform()
Transform546.setTranslation([0.0058,1.3625,-0.0833])
Shape547 = Shape()
Shape547.setUSE("HAnimJointShape")

Transform546.addChildren(Shape547)

HAnimSegment544.addChildren(Transform546)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape548 = Shape()
LineSet549 = LineSet()
LineSet549.setVertexCount([2])
Coordinate550 = Coordinate()
Coordinate550.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet549.setCoord(Coordinate550)
ColorRGBA551 = ColorRGBA()
ColorRGBA551.setUSE("HAnimSegmentLineColorRGBA")

LineSet549.setColor(ColorRGBA551)

Shape548.setGeometry(LineSet549)

HAnimSegment544.addChildren(Shape548)

HAnimJoint543.addChildren(HAnimSegment544)
HAnimJoint552 = HAnimJoint()
HAnimJoint552.setName("vt6")
HAnimJoint552.setDEF("hanim_vt6")
HAnimJoint552.setCenter([0.0059,1.3866,-0.08])
HAnimJoint552.setUlimit([0,0,0])
HAnimJoint552.setLlimit([0,0,0])
HAnimJoint552.setStiffness([0,0,0])
HAnimSegment553 = HAnimSegment()
HAnimSegment553.setName("t6")
HAnimSegment553.setDEF("hanim_t6")
#<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
TouchSensor554 = TouchSensor()
TouchSensor554.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment553.addChildren(TouchSensor554)
Transform555 = Transform()
Transform555.setTranslation([0.0059,1.3866,-0.08])
Shape556 = Shape()
Shape556.setUSE("HAnimJointShape")

Transform555.addChildren(Shape556)

HAnimSegment553.addChildren(Transform555)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape557 = Shape()
LineSet558 = LineSet()
LineSet558.setVertexCount([2])
Coordinate559 = Coordinate()
Coordinate559.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet558.setCoord(Coordinate559)
ColorRGBA560 = ColorRGBA()
ColorRGBA560.setUSE("HAnimSegmentLineColorRGBA")

LineSet558.setColor(ColorRGBA560)

Shape557.setGeometry(LineSet558)

HAnimSegment553.addChildren(Shape557)

HAnimJoint552.addChildren(HAnimSegment553)
HAnimJoint561 = HAnimJoint()
HAnimJoint561.setName("vt5")
HAnimJoint561.setDEF("hanim_vt5")
HAnimJoint561.setCenter([0.006,1.4102,-0.0745])
HAnimJoint561.setUlimit([0,0,0])
HAnimJoint561.setLlimit([0,0,0])
HAnimJoint561.setStiffness([0,0,0])
HAnimSegment562 = HAnimSegment()
HAnimSegment562.setName("t5")
HAnimSegment562.setDEF("hanim_t5")
#<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
TouchSensor563 = TouchSensor()
TouchSensor563.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment562.addChildren(TouchSensor563)
Transform564 = Transform()
Transform564.setTranslation([0.006,1.4102,-0.0745])
Shape565 = Shape()
Shape565.setUSE("HAnimJointShape")

Transform564.addChildren(Shape565)

HAnimSegment562.addChildren(Transform564)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape566 = Shape()
LineSet567 = LineSet()
LineSet567.setVertexCount([2])
Coordinate568 = Coordinate()
Coordinate568.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet567.setCoord(Coordinate568)
ColorRGBA569 = ColorRGBA()
ColorRGBA569.setUSE("HAnimSegmentLineColorRGBA")

LineSet567.setColor(ColorRGBA569)

Shape566.setGeometry(LineSet567)

HAnimSegment562.addChildren(Shape566)

HAnimJoint561.addChildren(HAnimSegment562)
HAnimJoint570 = HAnimJoint()
HAnimJoint570.setName("vt4")
HAnimJoint570.setDEF("hanim_vt4")
HAnimJoint570.setCenter([0.0061,1.432,-0.0675])
HAnimJoint570.setUlimit([0,0,0])
HAnimJoint570.setLlimit([0,0,0])
HAnimJoint570.setStiffness([0,0,0])
HAnimSegment571 = HAnimSegment()
HAnimSegment571.setName("t4")
HAnimSegment571.setDEF("hanim_t4")
#<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
TouchSensor572 = TouchSensor()
TouchSensor572.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment571.addChildren(TouchSensor572)
Transform573 = Transform()
Transform573.setTranslation([0.0061,1.432,-0.0675])
Shape574 = Shape()
Shape574.setUSE("HAnimJointShape")

Transform573.addChildren(Shape574)

HAnimSegment571.addChildren(Transform573)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape575 = Shape()
LineSet576 = LineSet()
LineSet576.setVertexCount([2])
Coordinate577 = Coordinate()
Coordinate577.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet576.setCoord(Coordinate577)
ColorRGBA578 = ColorRGBA()
ColorRGBA578.setUSE("HAnimSegmentLineColorRGBA")

LineSet576.setColor(ColorRGBA578)

Shape575.setGeometry(LineSet576)

HAnimSegment571.addChildren(Shape575)

HAnimJoint570.addChildren(HAnimSegment571)
HAnimJoint579 = HAnimJoint()
HAnimJoint579.setName("vt3")
HAnimJoint579.setDEF("hanim_vt3")
HAnimJoint579.setCenter([0.0062,1.4583,-0.057])
HAnimJoint579.setUlimit([0,0,0])
HAnimJoint579.setLlimit([0,0,0])
HAnimJoint579.setStiffness([0,0,0])
HAnimSegment580 = HAnimSegment()
HAnimSegment580.setName("t3")
HAnimSegment580.setDEF("hanim_t3")
#<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
TouchSensor581 = TouchSensor()
TouchSensor581.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment580.addChildren(TouchSensor581)
Transform582 = Transform()
Transform582.setTranslation([0.0062,1.4583,-0.057])
Shape583 = Shape()
Shape583.setUSE("HAnimJointShape")

Transform582.addChildren(Shape583)

HAnimSegment580.addChildren(Transform582)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape584 = Shape()
LineSet585 = LineSet()
LineSet585.setVertexCount([2])
Coordinate586 = Coordinate()
Coordinate586.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet585.setCoord(Coordinate586)
ColorRGBA587 = ColorRGBA()
ColorRGBA587.setUSE("HAnimSegmentLineColorRGBA")

LineSet585.setColor(ColorRGBA587)

Shape584.setGeometry(LineSet585)

HAnimSegment580.addChildren(Shape584)

HAnimJoint579.addChildren(HAnimSegment580)
HAnimJoint588 = HAnimJoint()
HAnimJoint588.setName("vt2")
HAnimJoint588.setDEF("hanim_vt2")
HAnimJoint588.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint588.setUlimit([0,0,0])
HAnimJoint588.setLlimit([0,0,0])
HAnimJoint588.setStiffness([0,0,0])
HAnimSegment589 = HAnimSegment()
HAnimSegment589.setName("t2")
HAnimSegment589.setDEF("hanim_t2")
#<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
TouchSensor590 = TouchSensor()
TouchSensor590.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment589.addChildren(TouchSensor590)
Transform591 = Transform()
Transform591.setTranslation([0.0063,1.4761,-0.0484])
Shape592 = Shape()
Shape592.setUSE("HAnimJointShape")

Transform591.addChildren(Shape592)

HAnimSegment589.addChildren(Transform591)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape593 = Shape()
LineSet594 = LineSet()
LineSet594.setVertexCount([2])
Coordinate595 = Coordinate()
Coordinate595.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet594.setCoord(Coordinate595)
ColorRGBA596 = ColorRGBA()
ColorRGBA596.setUSE("HAnimSegmentLineColorRGBA")

LineSet594.setColor(ColorRGBA596)

Shape593.setGeometry(LineSet594)

HAnimSegment589.addChildren(Shape593)

HAnimJoint588.addChildren(HAnimSegment589)
HAnimJoint597 = HAnimJoint()
HAnimJoint597.setName("vt1")
HAnimJoint597.setDEF("hanim_vt1")
HAnimJoint597.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint597.setUlimit([0,0,0])
HAnimJoint597.setLlimit([0,0,0])
HAnimJoint597.setStiffness([0,0,0])
HAnimSegment598 = HAnimSegment()
HAnimSegment598.setName("t1")
HAnimSegment598.setDEF("hanim_t1")
#<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
TouchSensor599 = TouchSensor()
TouchSensor599.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment598.addChildren(TouchSensor599)
Transform600 = Transform()
Transform600.setTranslation([0.0065,1.4951,-0.0387])
Shape601 = Shape()
Shape601.setUSE("HAnimJointShape")

Transform600.addChildren(Shape601)

HAnimSegment598.addChildren(Transform600)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape602 = Shape()
LineSet603 = LineSet()
LineSet603.setVertexCount([2])
Coordinate604 = Coordinate()
Coordinate604.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet603.setCoord(Coordinate604)
ColorRGBA605 = ColorRGBA()
ColorRGBA605.setUSE("HAnimSegmentLineColorRGBA")

LineSet603.setColor(ColorRGBA605)

Shape602.setGeometry(LineSet603)

HAnimSegment598.addChildren(Shape602)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape606 = Shape()
LineSet607 = LineSet()
LineSet607.setVertexCount([2])
Coordinate608 = Coordinate()
Coordinate608.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet607.setCoord(Coordinate608)
ColorRGBA609 = ColorRGBA()
ColorRGBA609.setUSE("HAnimSegmentLineColorRGBA")

LineSet607.setColor(ColorRGBA609)

Shape606.setGeometry(LineSet607)

HAnimSegment598.addChildren(Shape606)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape610 = Shape()
LineSet611 = LineSet()
LineSet611.setVertexCount([2])
Coordinate612 = Coordinate()
Coordinate612.setPoint([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])

LineSet611.setCoord(Coordinate612)
ColorRGBA613 = ColorRGBA()
ColorRGBA613.setUSE("HAnimSegmentLineColorRGBA")

LineSet611.setColor(ColorRGBA613)

Shape610.setGeometry(LineSet611)

HAnimSegment598.addChildren(Shape610)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape614 = Shape()
LineSet615 = LineSet()
LineSet615.setVertexCount([2])
Coordinate616 = Coordinate()
Coordinate616.setPoint([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])

LineSet615.setCoord(Coordinate616)
ColorRGBA617 = ColorRGBA()
ColorRGBA617.setUSE("HAnimSiteLineColorRGBA")

LineSet615.setColor(ColorRGBA617)

Shape614.setGeometry(LineSet615)

HAnimSegment598.addChildren(Shape614)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape618 = Shape()
LineSet619 = LineSet()
LineSet619.setVertexCount([2])
Coordinate620 = Coordinate()
Coordinate620.setPoint([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])

LineSet619.setCoord(Coordinate620)
ColorRGBA621 = ColorRGBA()
ColorRGBA621.setUSE("HAnimSiteLineColorRGBA")

LineSet619.setColor(ColorRGBA621)

Shape618.setGeometry(LineSet619)

HAnimSegment598.addChildren(Shape618)
HAnimSite622 = HAnimSite()
HAnimSite622.setName("suprasternale_pt")
HAnimSite622.setDEF("hanim_suprasternale_pt")
HAnimSite622.setTranslation([0.0084,1.4714,0.0551])
#HAnimSite visualization shape
TouchSensor623 = TouchSensor()
TouchSensor623.setDescription("HAnimSite suprasternale")

HAnimSite622.addChildren(TouchSensor623)
Shape624 = Shape()
Shape624.setUSE("HAnimSiteShape")

HAnimSite622.addChildren(Shape624)

HAnimSegment598.addChildren(HAnimSite622)
HAnimSite625 = HAnimSite()
HAnimSite625.setName("cervicale_pt")
HAnimSite625.setDEF("hanim_cervicale_pt")
HAnimSite625.setTranslation([0.0064,1.52,-0.0815])
#HAnimSite visualization shape
TouchSensor626 = TouchSensor()
TouchSensor626.setDescription("HAnimSite cervicale")

HAnimSite625.addChildren(TouchSensor626)
Shape627 = Shape()
Shape627.setUSE("HAnimSiteShape")

HAnimSite625.addChildren(Shape627)

HAnimSegment598.addChildren(HAnimSite625)

HAnimJoint597.addChildren(HAnimSegment598)
HAnimJoint628 = HAnimJoint()
HAnimJoint628.setName("vc7")
HAnimJoint628.setDEF("hanim_vc7")
HAnimJoint628.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint628.setUlimit([0,0,0])
HAnimJoint628.setLlimit([0,0,0])
HAnimJoint628.setStiffness([0,0,0])
HAnimSegment629 = HAnimSegment()
HAnimSegment629.setName("c7")
HAnimSegment629.setDEF("hanim_c7")
#<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
TouchSensor630 = TouchSensor()
TouchSensor630.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment629.addChildren(TouchSensor630)
Transform631 = Transform()
Transform631.setTranslation([0.0066,1.5132,-0.0301])
Shape632 = Shape()
Shape632.setUSE("HAnimJointShape")

Transform631.addChildren(Shape632)

HAnimSegment629.addChildren(Transform631)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape633 = Shape()
LineSet634 = LineSet()
LineSet634.setVertexCount([2])
Coordinate635 = Coordinate()
Coordinate635.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet634.setCoord(Coordinate635)
ColorRGBA636 = ColorRGBA()
ColorRGBA636.setUSE("HAnimSegmentLineColorRGBA")

LineSet634.setColor(ColorRGBA636)

Shape633.setGeometry(LineSet634)

HAnimSegment629.addChildren(Shape633)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape637 = Shape()
LineSet638 = LineSet()
LineSet638.setVertexCount([2])
Coordinate639 = Coordinate()
Coordinate639.setPoint([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])

LineSet638.setCoord(Coordinate639)
ColorRGBA640 = ColorRGBA()
ColorRGBA640.setUSE("HAnimSiteLineColorRGBA")

LineSet638.setColor(ColorRGBA640)

Shape637.setGeometry(LineSet638)

HAnimSegment629.addChildren(Shape637)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape641 = Shape()
LineSet642 = LineSet()
LineSet642.setVertexCount([2])
Coordinate643 = Coordinate()
Coordinate643.setPoint([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])

LineSet642.setCoord(Coordinate643)
ColorRGBA644 = ColorRGBA()
ColorRGBA644.setUSE("HAnimSiteLineColorRGBA")

LineSet642.setColor(ColorRGBA644)

Shape641.setGeometry(LineSet642)

HAnimSegment629.addChildren(Shape641)
HAnimSite645 = HAnimSite()
HAnimSite645.setName("r_neck_base_pt")
HAnimSite645.setDEF("hanim_r_neck_base_pt")
HAnimSite645.setTranslation([-0.0419,1.5149,-0.022])
#HAnimSite visualization shape
TouchSensor646 = TouchSensor()
TouchSensor646.setDescription("HAnimSite r_neck_base")

HAnimSite645.addChildren(TouchSensor646)
Shape647 = Shape()
Shape647.setUSE("HAnimSiteShape")

HAnimSite645.addChildren(Shape647)

HAnimSegment629.addChildren(HAnimSite645)
HAnimSite648 = HAnimSite()
HAnimSite648.setName("l_neck_base_pt")
HAnimSite648.setDEF("hanim_l_neck_base_pt")
HAnimSite648.setTranslation([0.0646,1.5141,-0.038])
#HAnimSite visualization shape
TouchSensor649 = TouchSensor()
TouchSensor649.setDescription("HAnimSite l_neck_base")

HAnimSite648.addChildren(TouchSensor649)
Shape650 = Shape()
Shape650.setUSE("HAnimSiteShape")

HAnimSite648.addChildren(Shape650)

HAnimSegment629.addChildren(HAnimSite648)

HAnimJoint628.addChildren(HAnimSegment629)
HAnimJoint651 = HAnimJoint()
HAnimJoint651.setName("vc6")
HAnimJoint651.setDEF("hanim_vc6")
HAnimJoint651.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint651.setUlimit([0,0,0])
HAnimJoint651.setLlimit([0,0,0])
HAnimJoint651.setStiffness([0,0,0])
HAnimSegment652 = HAnimSegment()
HAnimSegment652.setName("c6")
HAnimSegment652.setDEF("hanim_c6")
#<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
TouchSensor653 = TouchSensor()
TouchSensor653.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment652.addChildren(TouchSensor653)
Transform654 = Transform()
Transform654.setTranslation([0.0066,1.5357,-0.0143])
Shape655 = Shape()
Shape655.setUSE("HAnimJointShape")

Transform654.addChildren(Shape655)

HAnimSegment652.addChildren(Transform654)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape656 = Shape()
LineSet657 = LineSet()
LineSet657.setVertexCount([2])
Coordinate658 = Coordinate()
Coordinate658.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet657.setCoord(Coordinate658)
ColorRGBA659 = ColorRGBA()
ColorRGBA659.setUSE("HAnimSegmentLineColorRGBA")

LineSet657.setColor(ColorRGBA659)

Shape656.setGeometry(LineSet657)

HAnimSegment652.addChildren(Shape656)

HAnimJoint651.addChildren(HAnimSegment652)
HAnimJoint660 = HAnimJoint()
HAnimJoint660.setName("vc5")
HAnimJoint660.setDEF("hanim_vc5")
HAnimJoint660.setCenter([0.0066,1.552,-0.0082])
HAnimJoint660.setUlimit([0,0,0])
HAnimJoint660.setLlimit([0,0,0])
HAnimJoint660.setStiffness([0,0,0])
HAnimSegment661 = HAnimSegment()
HAnimSegment661.setName("c5")
HAnimSegment661.setDEF("hanim_c5")
#<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
TouchSensor662 = TouchSensor()
TouchSensor662.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment661.addChildren(TouchSensor662)
Transform663 = Transform()
Transform663.setTranslation([0.0066,1.552,-0.0082])
Shape664 = Shape()
Shape664.setUSE("HAnimJointShape")

Transform663.addChildren(Shape664)

HAnimSegment661.addChildren(Transform663)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape665 = Shape()
LineSet666 = LineSet()
LineSet666.setVertexCount([2])
Coordinate667 = Coordinate()
Coordinate667.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet666.setCoord(Coordinate667)
ColorRGBA668 = ColorRGBA()
ColorRGBA668.setUSE("HAnimSegmentLineColorRGBA")

LineSet666.setColor(ColorRGBA668)

Shape665.setGeometry(LineSet666)

HAnimSegment661.addChildren(Shape665)

HAnimJoint660.addChildren(HAnimSegment661)
HAnimJoint669 = HAnimJoint()
HAnimJoint669.setName("vc4")
HAnimJoint669.setDEF("hanim_vc4")
HAnimJoint669.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint669.setUlimit([0,0,0])
HAnimJoint669.setLlimit([0,0,0])
HAnimJoint669.setStiffness([0,0,0])
HAnimSegment670 = HAnimSegment()
HAnimSegment670.setName("c4")
HAnimSegment670.setDEF("hanim_c4")
#<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
TouchSensor671 = TouchSensor()
TouchSensor671.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment670.addChildren(TouchSensor671)
Transform672 = Transform()
Transform672.setTranslation([0.0066,1.5662,-0.0084])
Shape673 = Shape()
Shape673.setUSE("HAnimJointShape")

Transform672.addChildren(Shape673)

HAnimSegment670.addChildren(Transform672)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape674 = Shape()
LineSet675 = LineSet()
LineSet675.setVertexCount([2])
Coordinate676 = Coordinate()
Coordinate676.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet675.setCoord(Coordinate676)
ColorRGBA677 = ColorRGBA()
ColorRGBA677.setUSE("HAnimSegmentLineColorRGBA")

LineSet675.setColor(ColorRGBA677)

Shape674.setGeometry(LineSet675)

HAnimSegment670.addChildren(Shape674)

HAnimJoint669.addChildren(HAnimSegment670)
HAnimJoint678 = HAnimJoint()
HAnimJoint678.setName("vc3")
HAnimJoint678.setDEF("hanim_vc3")
HAnimJoint678.setCenter([0.0066,1.58,-0.0103])
HAnimJoint678.setUlimit([0,0,0])
HAnimJoint678.setLlimit([0,0,0])
HAnimJoint678.setStiffness([0,0,0])
HAnimSegment679 = HAnimSegment()
HAnimSegment679.setName("c3")
HAnimSegment679.setDEF("hanim_c3")
#<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
TouchSensor680 = TouchSensor()
TouchSensor680.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment679.addChildren(TouchSensor680)
Transform681 = Transform()
Transform681.setTranslation([0.0066,1.58,-0.0103])
Shape682 = Shape()
Shape682.setUSE("HAnimJointShape")

Transform681.addChildren(Shape682)

HAnimSegment679.addChildren(Transform681)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape683 = Shape()
LineSet684 = LineSet()
LineSet684.setVertexCount([2])
Coordinate685 = Coordinate()
Coordinate685.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet684.setCoord(Coordinate685)
ColorRGBA686 = ColorRGBA()
ColorRGBA686.setUSE("HAnimSegmentLineColorRGBA")

LineSet684.setColor(ColorRGBA686)

Shape683.setGeometry(LineSet684)

HAnimSegment679.addChildren(Shape683)

HAnimJoint678.addChildren(HAnimSegment679)
HAnimJoint687 = HAnimJoint()
HAnimJoint687.setName("vc2")
HAnimJoint687.setDEF("hanim_vc2")
HAnimJoint687.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint687.setUlimit([0,0,0])
HAnimJoint687.setLlimit([0,0,0])
HAnimJoint687.setStiffness([0,0,0])
HAnimSegment688 = HAnimSegment()
HAnimSegment688.setName("c2")
HAnimSegment688.setDEF("hanim_c2")
#<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
TouchSensor689 = TouchSensor()
TouchSensor689.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment688.addChildren(TouchSensor689)
Transform690 = Transform()
Transform690.setTranslation([0.0066,1.5928,-0.0103])
Shape691 = Shape()
Shape691.setUSE("HAnimJointShape")

Transform690.addChildren(Shape691)

HAnimSegment688.addChildren(Transform690)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape692 = Shape()
LineSet693 = LineSet()
LineSet693.setVertexCount([2])
Coordinate694 = Coordinate()
Coordinate694.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet693.setCoord(Coordinate694)
ColorRGBA695 = ColorRGBA()
ColorRGBA695.setUSE("HAnimSegmentLineColorRGBA")

LineSet693.setColor(ColorRGBA695)

Shape692.setGeometry(LineSet693)

HAnimSegment688.addChildren(Shape692)

HAnimJoint687.addChildren(HAnimSegment688)
HAnimJoint696 = HAnimJoint()
HAnimJoint696.setName("vc1")
HAnimJoint696.setDEF("hanim_vc1")
HAnimJoint696.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint696.setUlimit([0,0,0])
HAnimJoint696.setLlimit([0,0,0])
HAnimJoint696.setStiffness([0,0,0])
HAnimSegment697 = HAnimSegment()
HAnimSegment697.setName("c1")
HAnimSegment697.setDEF("hanim_c1")
#<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
TouchSensor698 = TouchSensor()
TouchSensor698.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment697.addChildren(TouchSensor698)
Transform699 = Transform()
Transform699.setTranslation([0.0066,1.6144,-0.0034])
Shape700 = Shape()
Shape700.setUSE("HAnimJointShape")

Transform699.addChildren(Shape700)

HAnimSegment697.addChildren(Transform699)
#HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape701 = Shape()
LineSet702 = LineSet()
LineSet702.setVertexCount([2])
Coordinate703 = Coordinate()
Coordinate703.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet702.setCoord(Coordinate703)
ColorRGBA704 = ColorRGBA()
ColorRGBA704.setUSE("HAnimSegmentLineColorRGBA")

LineSet702.setColor(ColorRGBA704)

Shape701.setGeometry(LineSet702)

HAnimSegment697.addChildren(Shape701)

HAnimJoint696.addChildren(HAnimSegment697)
HAnimJoint705 = HAnimJoint()
HAnimJoint705.setName("skullbase")
HAnimJoint705.setDEF("hanim_skullbase")
HAnimJoint705.setCenter([0.0044,1.6209,0.0236])
HAnimJoint705.setUlimit([0,0,0])
HAnimJoint705.setLlimit([0,0,0])
HAnimJoint705.setStiffness([0,0,0])
HAnimSegment706 = HAnimSegment()
HAnimSegment706.setName("skull")
HAnimSegment706.setDEF("hanim_skull")
#<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
TouchSensor707 = TouchSensor()
TouchSensor707.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment706.addChildren(TouchSensor707)
Transform708 = Transform()
Transform708.setTranslation([0.0044,1.6209,0.0236])
Shape709 = Shape()
Shape709.setUSE("HAnimJointShape")

Transform708.addChildren(Shape709)

HAnimSegment706.addChildren(Transform708)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape710 = Shape()
LineSet711 = LineSet()
LineSet711.setVertexCount([2])
Coordinate712 = Coordinate()
Coordinate712.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet711.setCoord(Coordinate712)
ColorRGBA713 = ColorRGBA()
ColorRGBA713.setUSE("HAnimSegmentLineColorRGBA")

LineSet711.setColor(ColorRGBA713)

Shape710.setGeometry(LineSet711)

HAnimSegment706.addChildren(Shape710)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape714 = Shape()
LineSet715 = LineSet()
LineSet715.setVertexCount([2])
Coordinate716 = Coordinate()
Coordinate716.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet715.setCoord(Coordinate716)
ColorRGBA717 = ColorRGBA()
ColorRGBA717.setUSE("HAnimSegmentLineColorRGBA")

LineSet715.setColor(ColorRGBA717)

Shape714.setGeometry(LineSet715)

HAnimSegment706.addChildren(Shape714)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape718 = Shape()
LineSet719 = LineSet()
LineSet719.setVertexCount([2])
Coordinate720 = Coordinate()
Coordinate720.setPoint([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])

LineSet719.setCoord(Coordinate720)
ColorRGBA721 = ColorRGBA()
ColorRGBA721.setUSE("HAnimSegmentLineColorRGBA")

LineSet719.setColor(ColorRGBA721)

Shape718.setGeometry(LineSet719)

HAnimSegment706.addChildren(Shape718)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape722 = Shape()
LineSet723 = LineSet()
LineSet723.setVertexCount([2])
Coordinate724 = Coordinate()
Coordinate724.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet723.setCoord(Coordinate724)
ColorRGBA725 = ColorRGBA()
ColorRGBA725.setUSE("HAnimSegmentLineColorRGBA")

LineSet723.setColor(ColorRGBA725)

Shape722.setGeometry(LineSet723)

HAnimSegment706.addChildren(Shape722)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape726 = Shape()
LineSet727 = LineSet()
LineSet727.setVertexCount([2])
Coordinate728 = Coordinate()
Coordinate728.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet727.setCoord(Coordinate728)
ColorRGBA729 = ColorRGBA()
ColorRGBA729.setUSE("HAnimSegmentLineColorRGBA")

LineSet727.setColor(ColorRGBA729)

Shape726.setGeometry(LineSet727)

HAnimSegment706.addChildren(Shape726)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape730 = Shape()
LineSet731 = LineSet()
LineSet731.setVertexCount([2])
Coordinate732 = Coordinate()
Coordinate732.setPoint([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])

LineSet731.setCoord(Coordinate732)
ColorRGBA733 = ColorRGBA()
ColorRGBA733.setUSE("HAnimSegmentLineColorRGBA")

LineSet731.setColor(ColorRGBA733)

Shape730.setGeometry(LineSet731)

HAnimSegment706.addChildren(Shape730)
#HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape734 = Shape()
LineSet735 = LineSet()
LineSet735.setVertexCount([2])
Coordinate736 = Coordinate()
Coordinate736.setPoint([0.0044,1.6209,0.0236,0,1.63,0.015])

LineSet735.setCoord(Coordinate736)
ColorRGBA737 = ColorRGBA()
ColorRGBA737.setUSE("HAnimSegmentLineColorRGBA")

LineSet735.setColor(ColorRGBA737)

Shape734.setGeometry(LineSet735)

HAnimSegment706.addChildren(Shape734)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape738 = Shape()
LineSet739 = LineSet()
LineSet739.setVertexCount([2])
Coordinate740 = Coordinate()
Coordinate740.setPoint([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])

LineSet739.setCoord(Coordinate740)
ColorRGBA741 = ColorRGBA()
ColorRGBA741.setUSE("HAnimSiteLineColorRGBA")

LineSet739.setColor(ColorRGBA741)

Shape738.setGeometry(LineSet739)

HAnimSegment706.addChildren(Shape738)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape742 = Shape()
LineSet743 = LineSet()
LineSet743.setVertexCount([2])
Coordinate744 = Coordinate()
Coordinate744.setPoint([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])

LineSet743.setCoord(Coordinate744)
ColorRGBA745 = ColorRGBA()
ColorRGBA745.setUSE("HAnimSiteLineColorRGBA")

LineSet743.setColor(ColorRGBA745)

Shape742.setGeometry(LineSet743)

HAnimSegment706.addChildren(Shape742)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape746 = Shape()
LineSet747 = LineSet()
LineSet747.setVertexCount([2])
Coordinate748 = Coordinate()
Coordinate748.setPoint([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])

LineSet747.setCoord(Coordinate748)
ColorRGBA749 = ColorRGBA()
ColorRGBA749.setUSE("HAnimSiteLineColorRGBA")

LineSet747.setColor(ColorRGBA749)

Shape746.setGeometry(LineSet747)

HAnimSegment706.addChildren(Shape746)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape750 = Shape()
LineSet751 = LineSet()
LineSet751.setVertexCount([2])
Coordinate752 = Coordinate()
Coordinate752.setPoint([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])

LineSet751.setCoord(Coordinate752)
ColorRGBA753 = ColorRGBA()
ColorRGBA753.setUSE("HAnimSiteLineColorRGBA")

LineSet751.setColor(ColorRGBA753)

Shape750.setGeometry(LineSet751)

HAnimSegment706.addChildren(Shape750)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape754 = Shape()
LineSet755 = LineSet()
LineSet755.setVertexCount([2])
Coordinate756 = Coordinate()
Coordinate756.setPoint([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])

LineSet755.setCoord(Coordinate756)
ColorRGBA757 = ColorRGBA()
ColorRGBA757.setUSE("HAnimSiteLineColorRGBA")

LineSet755.setColor(ColorRGBA757)

Shape754.setGeometry(LineSet755)

HAnimSegment706.addChildren(Shape754)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape758 = Shape()
LineSet759 = LineSet()
LineSet759.setVertexCount([2])
Coordinate760 = Coordinate()
Coordinate760.setPoint([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])

LineSet759.setCoord(Coordinate760)
ColorRGBA761 = ColorRGBA()
ColorRGBA761.setUSE("HAnimSiteLineColorRGBA")

LineSet759.setColor(ColorRGBA761)

Shape758.setGeometry(LineSet759)

HAnimSegment706.addChildren(Shape758)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape762 = Shape()
LineSet763 = LineSet()
LineSet763.setVertexCount([2])
Coordinate764 = Coordinate()
Coordinate764.setPoint([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])

LineSet763.setCoord(Coordinate764)
ColorRGBA765 = ColorRGBA()
ColorRGBA765.setUSE("HAnimSiteLineColorRGBA")

LineSet763.setColor(ColorRGBA765)

Shape762.setGeometry(LineSet763)

HAnimSegment706.addChildren(Shape762)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape766 = Shape()
LineSet767 = LineSet()
LineSet767.setVertexCount([2])
Coordinate768 = Coordinate()
Coordinate768.setPoint([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])

LineSet767.setCoord(Coordinate768)
ColorRGBA769 = ColorRGBA()
ColorRGBA769.setUSE("HAnimSiteLineColorRGBA")

LineSet767.setColor(ColorRGBA769)

Shape766.setGeometry(LineSet767)

HAnimSegment706.addChildren(Shape766)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape770 = Shape()
LineSet771 = LineSet()
LineSet771.setVertexCount([2])
Coordinate772 = Coordinate()
Coordinate772.setPoint([0.0044,1.6209,0.0236,0.0631,1.553,0.033])

LineSet771.setCoord(Coordinate772)
ColorRGBA773 = ColorRGBA()
ColorRGBA773.setUSE("HAnimSiteLineColorRGBA")

LineSet771.setColor(ColorRGBA773)

Shape770.setGeometry(LineSet771)

HAnimSegment706.addChildren(Shape770)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape774 = Shape()
LineSet775 = LineSet()
LineSet775.setVertexCount([2])
Coordinate776 = Coordinate()
Coordinate776.setPoint([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])

LineSet775.setCoord(Coordinate776)
ColorRGBA777 = ColorRGBA()
ColorRGBA777.setUSE("HAnimSiteLineColorRGBA")

LineSet775.setColor(ColorRGBA777)

Shape774.setGeometry(LineSet775)

HAnimSegment706.addChildren(Shape774)
HAnimSite778 = HAnimSite()
HAnimSite778.setName("skull_tip")
HAnimSite778.setDEF("hanim_skull_tip")
HAnimSite778.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry
#HAnimSite visualization shape
TouchSensor779 = TouchSensor()
TouchSensor779.setDescription("HAnimSite skull_tip")

HAnimSite778.addChildren(TouchSensor779)
Shape780 = Shape()
Shape780.setUSE("HAnimSiteShape")

HAnimSite778.addChildren(Shape780)

HAnimSegment706.addChildren(HAnimSite778)
HAnimSite781 = HAnimSite()
HAnimSite781.setName("sellion_pt")
HAnimSite781.setDEF("hanim_sellion_pt")
HAnimSite781.setTranslation([0.0058,1.6316,0.0852])
#HAnimSite visualization shape
TouchSensor782 = TouchSensor()
TouchSensor782.setDescription("HAnimSite sellion")

HAnimSite781.addChildren(TouchSensor782)
Shape783 = Shape()
Shape783.setUSE("HAnimSiteShape")

HAnimSite781.addChildren(Shape783)

HAnimSegment706.addChildren(HAnimSite781)
HAnimSite784 = HAnimSite()
HAnimSite784.setName("r_infraorbitale_pt")
HAnimSite784.setDEF("hanim_r_infraorbitale_pt")
HAnimSite784.setTranslation([-0.0237,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor785 = TouchSensor()
TouchSensor785.setDescription("HAnimSite r_infraorbitale")

HAnimSite784.addChildren(TouchSensor785)
Shape786 = Shape()
Shape786.setUSE("HAnimSiteShape")

HAnimSite784.addChildren(Shape786)

HAnimSegment706.addChildren(HAnimSite784)
HAnimSite787 = HAnimSite()
HAnimSite787.setName("l_infraorbitale_pt")
HAnimSite787.setDEF("hanim_l_infraorbitale_pt")
HAnimSite787.setTranslation([0.0341,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor788 = TouchSensor()
TouchSensor788.setDescription("HAnimSite l_infraorbitale")

HAnimSite787.addChildren(TouchSensor788)
Shape789 = Shape()
Shape789.setUSE("HAnimSiteShape")

HAnimSite787.addChildren(Shape789)

HAnimSegment706.addChildren(HAnimSite787)
HAnimSite790 = HAnimSite()
HAnimSite790.setName("supramenton_pt")
HAnimSite790.setDEF("hanim_supramenton_pt")
HAnimSite790.setTranslation([0.0061,1.541,0.0805])
#HAnimSite visualization shape
TouchSensor791 = TouchSensor()
TouchSensor791.setDescription("HAnimSite supramenton")

HAnimSite790.addChildren(TouchSensor791)
Shape792 = Shape()
Shape792.setUSE("HAnimSiteShape")

HAnimSite790.addChildren(Shape792)

HAnimSegment706.addChildren(HAnimSite790)
HAnimSite793 = HAnimSite()
HAnimSite793.setName("r_tragion_pt")
HAnimSite793.setDEF("hanim_r_tragion_pt")
HAnimSite793.setTranslation([-0.0646,1.6347,0.0302])
#HAnimSite visualization shape
TouchSensor794 = TouchSensor()
TouchSensor794.setDescription("HAnimSite r_tragion")

HAnimSite793.addChildren(TouchSensor794)
Shape795 = Shape()
Shape795.setUSE("HAnimSiteShape")

HAnimSite793.addChildren(Shape795)

HAnimSegment706.addChildren(HAnimSite793)
HAnimSite796 = HAnimSite()
HAnimSite796.setName("r_gonion_pt")
HAnimSite796.setDEF("hanim_r_gonion_pt")
HAnimSite796.setTranslation([-0.052,1.5529,0.0347])
#HAnimSite visualization shape
TouchSensor797 = TouchSensor()
TouchSensor797.setDescription("HAnimSite r_gonion")

HAnimSite796.addChildren(TouchSensor797)
Shape798 = Shape()
Shape798.setUSE("HAnimSiteShape")

HAnimSite796.addChildren(Shape798)

HAnimSegment706.addChildren(HAnimSite796)
HAnimSite799 = HAnimSite()
HAnimSite799.setName("l_tragion_pt")
HAnimSite799.setDEF("hanim_l_tragion_pt")
HAnimSite799.setTranslation([0.0739,1.6348,0.0282])
#HAnimSite visualization shape
TouchSensor800 = TouchSensor()
TouchSensor800.setDescription("HAnimSite l_tragion")

HAnimSite799.addChildren(TouchSensor800)
Shape801 = Shape()
Shape801.setUSE("HAnimSiteShape")

HAnimSite799.addChildren(Shape801)

HAnimSegment706.addChildren(HAnimSite799)
HAnimSite802 = HAnimSite()
HAnimSite802.setName("l_gonion_pt")
HAnimSite802.setDEF("hanim_l_gonion_pt")
HAnimSite802.setTranslation([0.0631,1.553,0.033])
#HAnimSite visualization shape
TouchSensor803 = TouchSensor()
TouchSensor803.setDescription("HAnimSite l_gonion")

HAnimSite802.addChildren(TouchSensor803)
Shape804 = Shape()
Shape804.setUSE("HAnimSiteShape")

HAnimSite802.addChildren(Shape804)

HAnimSegment706.addChildren(HAnimSite802)
HAnimSite805 = HAnimSite()
HAnimSite805.setName("nuchale_pt")
HAnimSite805.setDEF("hanim_nuchale_pt")
HAnimSite805.setTranslation([0.0039,1.5972,-0.0796])
#HAnimSite visualization shape
TouchSensor806 = TouchSensor()
TouchSensor806.setDescription("HAnimSite nuchale")

HAnimSite805.addChildren(TouchSensor806)
Shape807 = Shape()
Shape807.setUSE("HAnimSiteShape")

HAnimSite805.addChildren(Shape807)

HAnimSegment706.addChildren(HAnimSite805)

HAnimJoint705.addChildren(HAnimSegment706)
HAnimJoint808 = HAnimJoint()
HAnimJoint808.setName("l_eyeball_joint")
HAnimJoint808.setDEF("hanim_l_eyeball_joint")
HAnimJoint808.setCenter([0.0336,1.6332,0.0502])
HAnimJoint808.setUlimit([0,0,0])
HAnimJoint808.setLlimit([0,0,0])
HAnimJoint808.setStiffness([0,0,0])
HAnimSegment809 = HAnimSegment()
HAnimSegment809.setName("l_eyeball")
HAnimSegment809.setDEF("hanim_l_eyeball")
#<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor810 = TouchSensor()
TouchSensor810.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment809.addChildren(TouchSensor810)
Transform811 = Transform()
Transform811.setTranslation([0.0336,1.6332,0.0502])
Shape812 = Shape()
Shape812.setUSE("HAnimJointShape")

Transform811.addChildren(Shape812)

HAnimSegment809.addChildren(Transform811)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape813 = Shape()
LineSet814 = LineSet()
LineSet814.setVertexCount([2])
Coordinate815 = Coordinate()
Coordinate815.setPoint([0.0336,1.6332,0.0502,0.034,1.64,0.05])

LineSet814.setCoord(Coordinate815)
ColorRGBA816 = ColorRGBA()
ColorRGBA816.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA816.setColor([0,0,1,1,0,0,1,0.1])

LineSet814.setColor(ColorRGBA816)

Shape813.setGeometry(LineSet814)

HAnimSegment809.addChildren(Shape813)
HAnimSite817 = HAnimSite()
HAnimSite817.setName("l_eyeball_site_view")
HAnimSite817.setDEF("hanim_l_eyeball_site_view")
HAnimSite817.setTranslation([0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor818 = TouchSensor()
TouchSensor818.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite817.addChildren(TouchSensor818)
Shape819 = Shape()
Shape819.setUSE("HAnimSiteShape")

HAnimSite817.addChildren(Shape819)
Viewpoint820 = Viewpoint()
Viewpoint820.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint820.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint820.setOrientation([0,1,0,3.141593])
Viewpoint820.setPosition([0,0,0])

HAnimSite817.addChildren(Viewpoint820)
#HAnimSite/Viewpoint visualization shape
Anchor821 = Anchor()
Anchor821.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor821.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD822 = LOD()
LOD822.setForceTransitions(True)
LOD822.setRange([0.04])
WorldInfo823 = WorldInfo()
WorldInfo823.setInfo(["hide diamond when close"])

LOD822.addChildren(WorldInfo823)
Shape824 = Shape()
Shape824.setDEF("HAnimSiteViewpointShape")
IndexedFaceSet825 = IndexedFaceSet()
IndexedFaceSet825.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet825.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet825.setCreaseAngle(0.5)
Coordinate826 = Coordinate()
Coordinate826.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet825.setCoord(Coordinate826)

Shape824.setGeometry(IndexedFaceSet825)
Appearance827 = Appearance()
Material828 = Material()
Material828.setDiffuseColor([0,0,1])
Material828.setTransparency(0.6)

Appearance827.setMaterial(Material828)

Shape824.setAppearance(Appearance827)

LOD822.addChildren(Shape824)

Anchor821.addChildren(LOD822)

HAnimSite817.addChildren(Anchor821)

HAnimSegment809.addChildren(HAnimSite817)

HAnimJoint808.addChildren(HAnimSegment809)

HAnimJoint705.addChildren(HAnimJoint808)
HAnimJoint829 = HAnimJoint()
HAnimJoint829.setName("l_eyelid_joint")
HAnimJoint829.setDEF("hanim_l_eyelid_joint")
HAnimJoint829.setCenter([0.0336,1.6332,0.0502])
HAnimJoint829.setUlimit([0,0,0])
HAnimJoint829.setLlimit([0,0,0])
HAnimJoint829.setStiffness([0,0,0])
HAnimSegment830 = HAnimSegment()
HAnimSegment830.setName("l_eyelid")
HAnimSegment830.setDEF("hanim_l_eyelid")
#<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor831 = TouchSensor()
TouchSensor831.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment830.addChildren(TouchSensor831)
Transform832 = Transform()
Transform832.setTranslation([0.0336,1.6332,0.0502])
Shape833 = Shape()
Shape833.setUSE("HAnimJointShape")

Transform832.addChildren(Shape833)

HAnimSegment830.addChildren(Transform832)

HAnimJoint829.addChildren(HAnimSegment830)

HAnimJoint705.addChildren(HAnimJoint829)
HAnimJoint834 = HAnimJoint()
HAnimJoint834.setName("l_eyebrow_joint")
HAnimJoint834.setDEF("hanim_l_eyebrow_joint")
HAnimJoint834.setCenter([0.0336,1.635,0.0506])
HAnimJoint834.setUlimit([0,0,0])
HAnimJoint834.setLlimit([0,0,0])
HAnimJoint834.setStiffness([0,0,0])
HAnimSegment835 = HAnimSegment()
HAnimSegment835.setName("l_eyebrow")
HAnimSegment835.setDEF("hanim_l_eyebrow")
#<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor836 = TouchSensor()
TouchSensor836.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment835.addChildren(TouchSensor836)
Transform837 = Transform()
Transform837.setTranslation([0.0336,1.635,0.0506])
Shape838 = Shape()
Shape838.setUSE("HAnimJointShape")

Transform837.addChildren(Shape838)

HAnimSegment835.addChildren(Transform837)

HAnimJoint834.addChildren(HAnimSegment835)

HAnimJoint705.addChildren(HAnimJoint834)
HAnimJoint839 = HAnimJoint()
HAnimJoint839.setName("r_eyeball_joint")
HAnimJoint839.setDEF("hanim_r_eyeball_joint")
HAnimJoint839.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint839.setUlimit([0,0,0])
HAnimJoint839.setLlimit([0,0,0])
HAnimJoint839.setStiffness([0,0,0])
HAnimSegment840 = HAnimSegment()
HAnimSegment840.setName("r_eyeball")
HAnimSegment840.setDEF("hanim_r_eyeball")
#<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor841 = TouchSensor()
TouchSensor841.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment840.addChildren(TouchSensor841)
Transform842 = Transform()
Transform842.setTranslation([-0.0336,1.6332,0.0502])
Shape843 = Shape()
Shape843.setUSE("HAnimJointShape")

Transform842.addChildren(Shape843)

HAnimSegment840.addChildren(Transform842)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape844 = Shape()
LineSet845 = LineSet()
LineSet845.setVertexCount([2])
Coordinate846 = Coordinate()
Coordinate846.setPoint([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])

LineSet845.setCoord(Coordinate846)
ColorRGBA847 = ColorRGBA()
ColorRGBA847.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet845.setColor(ColorRGBA847)

Shape844.setGeometry(LineSet845)

HAnimSegment840.addChildren(Shape844)
HAnimSite848 = HAnimSite()
HAnimSite848.setName("r_eyeball_site_view")
HAnimSite848.setDEF("hanim_r_eyeball_site_view")
HAnimSite848.setTranslation([-0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor849 = TouchSensor()
TouchSensor849.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite848.addChildren(TouchSensor849)
Shape850 = Shape()
Shape850.setUSE("HAnimSiteShape")

HAnimSite848.addChildren(Shape850)
Viewpoint851 = Viewpoint()
Viewpoint851.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint851.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint851.setOrientation([0,1,0,3.141593])
Viewpoint851.setPosition([0,0,0])

HAnimSite848.addChildren(Viewpoint851)
#HAnimSite/Viewpoint visualization shape
Anchor852 = Anchor()
Anchor852.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor852.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD853 = LOD()
LOD853.setForceTransitions(True)
LOD853.setRange([0.04])
WorldInfo854 = WorldInfo()
WorldInfo854.setInfo(["hide diamond when close"])

LOD853.addChildren(WorldInfo854)
Shape855 = Shape()
Shape855.setUSE("HAnimSiteViewpointShape")

LOD853.addChildren(Shape855)

Anchor852.addChildren(LOD853)

HAnimSite848.addChildren(Anchor852)

HAnimSegment840.addChildren(HAnimSite848)

HAnimJoint839.addChildren(HAnimSegment840)

HAnimJoint705.addChildren(HAnimJoint839)
HAnimJoint856 = HAnimJoint()
HAnimJoint856.setName("r_eyelid_joint")
HAnimJoint856.setDEF("hanim_r_eyelid_joint")
HAnimJoint856.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint856.setUlimit([0,0,0])
HAnimJoint856.setLlimit([0,0,0])
HAnimJoint856.setStiffness([0,0,0])
HAnimSegment857 = HAnimSegment()
HAnimSegment857.setName("r_eyelid")
HAnimSegment857.setDEF("hanim_r_eyelid")
#<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor858 = TouchSensor()
TouchSensor858.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment857.addChildren(TouchSensor858)
Transform859 = Transform()
Transform859.setTranslation([-0.0336,1.6332,0.0502])
Shape860 = Shape()
Shape860.setUSE("HAnimJointShape")

Transform859.addChildren(Shape860)

HAnimSegment857.addChildren(Transform859)

HAnimJoint856.addChildren(HAnimSegment857)

HAnimJoint705.addChildren(HAnimJoint856)
HAnimJoint861 = HAnimJoint()
HAnimJoint861.setName("r_eyebrow_joint")
HAnimJoint861.setDEF("hanim_r_eyebrow_joint")
HAnimJoint861.setCenter([-0.0336,1.635,0.0506])
HAnimJoint861.setUlimit([0,0,0])
HAnimJoint861.setLlimit([0,0,0])
HAnimJoint861.setStiffness([0,0,0])
HAnimSegment862 = HAnimSegment()
HAnimSegment862.setName("r_eyebrow")
HAnimSegment862.setDEF("hanim_r_eyebrow")
#<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor863 = TouchSensor()
TouchSensor863.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment862.addChildren(TouchSensor863)
Transform864 = Transform()
Transform864.setTranslation([-0.0336,1.635,0.0506])
Shape865 = Shape()
Shape865.setUSE("HAnimJointShape")

Transform864.addChildren(Shape865)

HAnimSegment862.addChildren(Transform864)

HAnimJoint861.addChildren(HAnimSegment862)

HAnimJoint705.addChildren(HAnimJoint861)
HAnimJoint866 = HAnimJoint()
HAnimJoint866.setName("temporomandibular")
HAnimJoint866.setDEF("hanim_temporomandibular")
HAnimJoint866.setCenter([0,1.63,0.015])
HAnimJoint866.setUlimit([0,0,0])
HAnimJoint866.setLlimit([0,0,0])
HAnimJoint866.setStiffness([0,0,0])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment867 = HAnimSegment()
HAnimSegment867.setName("jaw")
HAnimSegment867.setDEF("hanim_jaw")
#<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
TouchSensor868 = TouchSensor()
TouchSensor868.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment867.addChildren(TouchSensor868)
Transform869 = Transform()
Transform869.setTranslation([0,1.63,0.015])
Shape870 = Shape()
Shape870.setUSE("HAnimJointShape")

Transform869.addChildren(Shape870)

HAnimSegment867.addChildren(Transform869)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape871 = Shape()
LineSet872 = LineSet()
LineSet872.setVertexCount([2])
Coordinate873 = Coordinate()
Coordinate873.setPoint([0,1.63,0.015,0.045,1.63,0])

LineSet872.setCoord(Coordinate873)
ColorRGBA874 = ColorRGBA()
ColorRGBA874.setUSE("HAnimSiteLineColorRGBA")

LineSet872.setColor(ColorRGBA874)

Shape871.setGeometry(LineSet872)

HAnimSegment867.addChildren(Shape871)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape875 = Shape()
LineSet876 = LineSet()
LineSet876.setVertexCount([2])
Coordinate877 = Coordinate()
Coordinate877.setPoint([0,1.63,0.015,-0.045,1.63,0])

LineSet876.setCoord(Coordinate877)
ColorRGBA878 = ColorRGBA()
ColorRGBA878.setUSE("HAnimSiteLineColorRGBA")

LineSet876.setColor(ColorRGBA878)

Shape875.setGeometry(LineSet876)

HAnimSegment867.addChildren(Shape875)
HAnimSite879 = HAnimSite()
HAnimSite879.setName("temporomandibular_l_site_pt")
HAnimSite879.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite879.setTranslation([0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor880 = TouchSensor()
TouchSensor880.setDescription("HAnimSite temporomandibular_l_site")

HAnimSite879.addChildren(TouchSensor880)
Shape881 = Shape()
Shape881.setUSE("HAnimSiteShape")

HAnimSite879.addChildren(Shape881)

HAnimSegment867.addChildren(HAnimSite879)
HAnimSite882 = HAnimSite()
HAnimSite882.setName("temporomandibular_r_site_pt")
HAnimSite882.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite882.setTranslation([-0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor883 = TouchSensor()
TouchSensor883.setDescription("HAnimSite temporomandibular_r_site")

HAnimSite882.addChildren(TouchSensor883)
Shape884 = Shape()
Shape884.setUSE("HAnimSiteShape")

HAnimSite882.addChildren(Shape884)

HAnimSegment867.addChildren(HAnimSite882)

HAnimJoint866.addChildren(HAnimSegment867)

HAnimJoint705.addChildren(HAnimJoint866)

HAnimJoint696.addChildren(HAnimJoint705)

HAnimJoint687.addChildren(HAnimJoint696)

HAnimJoint678.addChildren(HAnimJoint687)

HAnimJoint669.addChildren(HAnimJoint678)

HAnimJoint660.addChildren(HAnimJoint669)

HAnimJoint651.addChildren(HAnimJoint660)

HAnimJoint628.addChildren(HAnimJoint651)

HAnimJoint597.addChildren(HAnimJoint628)
HAnimJoint885 = HAnimJoint()
HAnimJoint885.setName("l_sternoclavicular")
HAnimJoint885.setDEF("hanim_l_sternoclavicular")
HAnimJoint885.setCenter([0.082,1.4488,-0.0353])
HAnimJoint885.setUlimit([0,0,0])
HAnimJoint885.setLlimit([0,0,0])
HAnimJoint885.setStiffness([0,0,0])
HAnimSegment886 = HAnimSegment()
HAnimSegment886.setName("l_clavicle")
HAnimSegment886.setDEF("hanim_l_clavicle")
#<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor887 = TouchSensor()
TouchSensor887.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment886.addChildren(TouchSensor887)
Transform888 = Transform()
Transform888.setTranslation([0.082,1.4488,-0.0353])
Shape889 = Shape()
Shape889.setUSE("HAnimJointShape")

Transform888.addChildren(Shape889)

HAnimSegment886.addChildren(Transform888)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape890 = Shape()
LineSet891 = LineSet()
LineSet891.setVertexCount([2])
Coordinate892 = Coordinate()
Coordinate892.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet891.setCoord(Coordinate892)
ColorRGBA893 = ColorRGBA()
ColorRGBA893.setUSE("HAnimSegmentLineColorRGBA")

LineSet891.setColor(ColorRGBA893)

Shape890.setGeometry(LineSet891)

HAnimSegment886.addChildren(Shape890)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape894 = Shape()
LineSet895 = LineSet()
LineSet895.setVertexCount([2])
Coordinate896 = Coordinate()
Coordinate896.setPoint([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])

LineSet895.setCoord(Coordinate896)
ColorRGBA897 = ColorRGBA()
ColorRGBA897.setUSE("HAnimSiteLineColorRGBA")

LineSet895.setColor(ColorRGBA897)

Shape894.setGeometry(LineSet895)

HAnimSegment886.addChildren(Shape894)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape898 = Shape()
LineSet899 = LineSet()
LineSet899.setVertexCount([2])
Coordinate900 = Coordinate()
Coordinate900.setPoint([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])

LineSet899.setCoord(Coordinate900)
ColorRGBA901 = ColorRGBA()
ColorRGBA901.setUSE("HAnimSiteLineColorRGBA")

LineSet899.setColor(ColorRGBA901)

Shape898.setGeometry(LineSet899)

HAnimSegment886.addChildren(Shape898)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape902 = Shape()
LineSet903 = LineSet()
LineSet903.setVertexCount([2])
Coordinate904 = Coordinate()
Coordinate904.setPoint([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])

LineSet903.setCoord(Coordinate904)
ColorRGBA905 = ColorRGBA()
ColorRGBA905.setUSE("HAnimSiteLineColorRGBA")

LineSet903.setColor(ColorRGBA905)

Shape902.setGeometry(LineSet903)

HAnimSegment886.addChildren(Shape902)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape906 = Shape()
LineSet907 = LineSet()
LineSet907.setVertexCount([2])
Coordinate908 = Coordinate()
Coordinate908.setPoint([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])

LineSet907.setCoord(Coordinate908)
ColorRGBA909 = ColorRGBA()
ColorRGBA909.setUSE("HAnimSiteLineColorRGBA")

LineSet907.setColor(ColorRGBA909)

Shape906.setGeometry(LineSet907)

HAnimSegment886.addChildren(Shape906)
HAnimSite910 = HAnimSite()
HAnimSite910.setName("l_clavicale_pt")
HAnimSite910.setDEF("hanim_l_clavicale_pt")
HAnimSite910.setTranslation([0.0271,1.4943,0.0394])
#HAnimSite visualization shape
TouchSensor911 = TouchSensor()
TouchSensor911.setDescription("HAnimSite l_clavicale")

HAnimSite910.addChildren(TouchSensor911)
Shape912 = Shape()
Shape912.setUSE("HAnimSiteShape")

HAnimSite910.addChildren(Shape912)

HAnimSegment886.addChildren(HAnimSite910)
HAnimSite913 = HAnimSite()
HAnimSite913.setName("l_acromion_pt")
HAnimSite913.setDEF("hanim_l_acromion_pt")
HAnimSite913.setTranslation([0.2032,1.476,-0.049])
#HAnimSite visualization shape
TouchSensor914 = TouchSensor()
TouchSensor914.setDescription("HAnimSite l_acromion")

HAnimSite913.addChildren(TouchSensor914)
Shape915 = Shape()
Shape915.setUSE("HAnimSiteShape")

HAnimSite913.addChildren(Shape915)

HAnimSegment886.addChildren(HAnimSite913)
HAnimSite916 = HAnimSite()
HAnimSite916.setName("l_axilla_ant_pt")
HAnimSite916.setDEF("hanim_l_axilla_ant_pt")
HAnimSite916.setTranslation([0.1777,1.4065,-0.0075])
#HAnimSite visualization shape
TouchSensor917 = TouchSensor()
TouchSensor917.setDescription("HAnimSite l_axilla_ant")

HAnimSite916.addChildren(TouchSensor917)
Shape918 = Shape()
Shape918.setUSE("HAnimSiteShape")

HAnimSite916.addChildren(Shape918)

HAnimSegment886.addChildren(HAnimSite916)
HAnimSite919 = HAnimSite()
HAnimSite919.setName("l_axilla_post_pt")
HAnimSite919.setDEF("hanim_l_axilla_post_pt")
HAnimSite919.setTranslation([0.1706,1.4072,-0.0875])
#HAnimSite visualization shape
TouchSensor920 = TouchSensor()
TouchSensor920.setDescription("HAnimSite l_axilla_post")

HAnimSite919.addChildren(TouchSensor920)
Shape921 = Shape()
Shape921.setUSE("HAnimSiteShape")

HAnimSite919.addChildren(Shape921)

HAnimSegment886.addChildren(HAnimSite919)

HAnimJoint885.addChildren(HAnimSegment886)
HAnimJoint922 = HAnimJoint()
HAnimJoint922.setName("l_acromioclavicular")
HAnimJoint922.setDEF("hanim_l_acromioclavicular")
HAnimJoint922.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint922.setUlimit([0,0,0])
HAnimJoint922.setLlimit([0,0,0])
HAnimJoint922.setStiffness([0,0,0])
HAnimSegment923 = HAnimSegment()
HAnimSegment923.setName("l_scapula")
HAnimSegment923.setDEF("hanim_l_scapula")
#<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
TouchSensor924 = TouchSensor()
TouchSensor924.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment923.addChildren(TouchSensor924)
Transform925 = Transform()
Transform925.setTranslation([0.0962,1.4269,-0.0424])
Shape926 = Shape()
Shape926.setUSE("HAnimJointShape")

Transform925.addChildren(Shape926)

HAnimSegment923.addChildren(Transform925)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape927 = Shape()
LineSet928 = LineSet()
LineSet928.setVertexCount([2])
Coordinate929 = Coordinate()
Coordinate929.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet928.setCoord(Coordinate929)
ColorRGBA930 = ColorRGBA()
ColorRGBA930.setUSE("HAnimSegmentLineColorRGBA")

LineSet928.setColor(ColorRGBA930)

Shape927.setGeometry(LineSet928)

HAnimSegment923.addChildren(Shape927)

HAnimJoint922.addChildren(HAnimSegment923)
HAnimJoint931 = HAnimJoint()
HAnimJoint931.setName("l_shoulder")
HAnimJoint931.setDEF("hanim_l_shoulder")
HAnimJoint931.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint931.setUlimit([0,0,0])
HAnimJoint931.setLlimit([0,0,0])
HAnimJoint931.setStiffness([0,0,0])
HAnimSegment932 = HAnimSegment()
HAnimSegment932.setName("l_upperarm")
HAnimSegment932.setDEF("hanim_l_upperarm")
#<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor933 = TouchSensor()
TouchSensor933.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment932.addChildren(TouchSensor933)
Transform934 = Transform()
Transform934.setTranslation([0.2029,1.4376,-0.0387])
Shape935 = Shape()
Shape935.setUSE("HAnimJointShape")

Transform934.addChildren(Shape935)

HAnimSegment932.addChildren(Transform934)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape936 = Shape()
LineSet937 = LineSet()
LineSet937.setVertexCount([2])
Coordinate938 = Coordinate()
Coordinate938.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet937.setCoord(Coordinate938)
ColorRGBA939 = ColorRGBA()
ColorRGBA939.setUSE("HAnimSegmentLineColorRGBA")

LineSet937.setColor(ColorRGBA939)

Shape936.setGeometry(LineSet937)

HAnimSegment932.addChildren(Shape936)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape940 = Shape()
LineSet941 = LineSet()
LineSet941.setVertexCount([2])
Coordinate942 = Coordinate()
Coordinate942.setPoint([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])

LineSet941.setCoord(Coordinate942)
ColorRGBA943 = ColorRGBA()
ColorRGBA943.setUSE("HAnimSiteLineColorRGBA")

LineSet941.setColor(ColorRGBA943)

Shape940.setGeometry(LineSet941)

HAnimSegment932.addChildren(Shape940)
HAnimSite944 = HAnimSite()
HAnimSite944.setName("l_humeral_lateral_epicn_pt")
HAnimSite944.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite944.setTranslation([0.228,1.1482,-0.11])
#HAnimSite visualization shape
TouchSensor945 = TouchSensor()
TouchSensor945.setDescription("HAnimSite l_humeral_lateral_epicn")

HAnimSite944.addChildren(TouchSensor945)
Shape946 = Shape()
Shape946.setUSE("HAnimSiteShape")

HAnimSite944.addChildren(Shape946)

HAnimSegment932.addChildren(HAnimSite944)

HAnimJoint931.addChildren(HAnimSegment932)
HAnimJoint947 = HAnimJoint()
HAnimJoint947.setName("l_elbow")
HAnimJoint947.setDEF("hanim_l_elbow")
HAnimJoint947.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint947.setUlimit([0,0,0])
HAnimJoint947.setLlimit([0,0,0])
HAnimJoint947.setStiffness([0,0,0])
HAnimSegment948 = HAnimSegment()
HAnimSegment948.setName("l_forearm")
HAnimSegment948.setDEF("hanim_l_forearm")
#<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
TouchSensor949 = TouchSensor()
TouchSensor949.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment948.addChildren(TouchSensor949)
Transform950 = Transform()
Transform950.setTranslation([0.2014,1.1357,-0.0682])
Shape951 = Shape()
Shape951.setUSE("HAnimJointShape")

Transform950.addChildren(Shape951)

HAnimSegment948.addChildren(Transform950)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape952 = Shape()
LineSet953 = LineSet()
LineSet953.setVertexCount([2])
Coordinate954 = Coordinate()
Coordinate954.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet953.setCoord(Coordinate954)
ColorRGBA955 = ColorRGBA()
ColorRGBA955.setUSE("HAnimSegmentLineColorRGBA")

LineSet953.setColor(ColorRGBA955)

Shape952.setGeometry(LineSet953)

HAnimSegment948.addChildren(Shape952)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape956 = Shape()
LineSet957 = LineSet()
LineSet957.setVertexCount([2])
Coordinate958 = Coordinate()
Coordinate958.setPoint([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])

LineSet957.setCoord(Coordinate958)
ColorRGBA959 = ColorRGBA()
ColorRGBA959.setUSE("HAnimSiteLineColorRGBA")

LineSet957.setColor(ColorRGBA959)

Shape956.setGeometry(LineSet957)

HAnimSegment948.addChildren(Shape956)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape960 = Shape()
LineSet961 = LineSet()
LineSet961.setVertexCount([2])
Coordinate962 = Coordinate()
Coordinate962.setPoint([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])

LineSet961.setCoord(Coordinate962)
ColorRGBA963 = ColorRGBA()
ColorRGBA963.setUSE("HAnimSiteLineColorRGBA")

LineSet961.setColor(ColorRGBA963)

Shape960.setGeometry(LineSet961)

HAnimSegment948.addChildren(Shape960)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape964 = Shape()
LineSet965 = LineSet()
LineSet965.setVertexCount([2])
Coordinate966 = Coordinate()
Coordinate966.setPoint([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])

LineSet965.setCoord(Coordinate966)
ColorRGBA967 = ColorRGBA()
ColorRGBA967.setUSE("HAnimSiteLineColorRGBA")

LineSet965.setColor(ColorRGBA967)

Shape964.setGeometry(LineSet965)

HAnimSegment948.addChildren(Shape964)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape968 = Shape()
LineSet969 = LineSet()
LineSet969.setVertexCount([2])
Coordinate970 = Coordinate()
Coordinate970.setPoint([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])

LineSet969.setCoord(Coordinate970)
ColorRGBA971 = ColorRGBA()
ColorRGBA971.setUSE("HAnimSiteLineColorRGBA")

LineSet969.setColor(ColorRGBA971)

Shape968.setGeometry(LineSet969)

HAnimSegment948.addChildren(Shape968)
HAnimSite972 = HAnimSite()
HAnimSite972.setName("l_radial_styloid_pt")
HAnimSite972.setDEF("hanim_l_radial_styloid_pt")
HAnimSite972.setTranslation([0.1901,0.8645,-0.0415])
#HAnimSite visualization shape
TouchSensor973 = TouchSensor()
TouchSensor973.setDescription("HAnimSite l_radial_styloid")

HAnimSite972.addChildren(TouchSensor973)
Shape974 = Shape()
Shape974.setUSE("HAnimSiteShape")

HAnimSite972.addChildren(Shape974)

HAnimSegment948.addChildren(HAnimSite972)
HAnimSite975 = HAnimSite()
HAnimSite975.setName("l_olecranon_pt")
HAnimSite975.setDEF("hanim_l_olecranon_pt")
HAnimSite975.setTranslation([0.1962,1.1375,-0.1123])
#HAnimSite visualization shape
TouchSensor976 = TouchSensor()
TouchSensor976.setDescription("HAnimSite l_olecranon")

HAnimSite975.addChildren(TouchSensor976)
Shape977 = Shape()
Shape977.setUSE("HAnimSiteShape")

HAnimSite975.addChildren(Shape977)

HAnimSegment948.addChildren(HAnimSite975)
HAnimSite978 = HAnimSite()
HAnimSite978.setName("l_humeral_medial_epicn_pt")
HAnimSite978.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite978.setTranslation([0.1735,1.1272,-0.1113])
#HAnimSite visualization shape
TouchSensor979 = TouchSensor()
TouchSensor979.setDescription("HAnimSite l_humeral_medial_epicn")

HAnimSite978.addChildren(TouchSensor979)
Shape980 = Shape()
Shape980.setUSE("HAnimSiteShape")

HAnimSite978.addChildren(Shape980)

HAnimSegment948.addChildren(HAnimSite978)
HAnimSite981 = HAnimSite()
HAnimSite981.setName("l_radiale_pt")
HAnimSite981.setDEF("hanim_l_radiale_pt")
HAnimSite981.setTranslation([0.2182,1.1212,-0.1167])
#HAnimSite visualization shape
TouchSensor982 = TouchSensor()
TouchSensor982.setDescription("HAnimSite l_radiale")

HAnimSite981.addChildren(TouchSensor982)
Shape983 = Shape()
Shape983.setUSE("HAnimSiteShape")

HAnimSite981.addChildren(Shape983)

HAnimSegment948.addChildren(HAnimSite981)

HAnimJoint947.addChildren(HAnimSegment948)
HAnimJoint984 = HAnimJoint()
HAnimJoint984.setName("l_wrist")
HAnimJoint984.setDEF("hanim_l_wrist")
HAnimJoint984.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint984.setUlimit([0,0,0])
HAnimJoint984.setLlimit([0,0,0])
HAnimJoint984.setStiffness([0,0,0])
HAnimSegment985 = HAnimSegment()
HAnimSegment985.setName("l_hand")
HAnimSegment985.setDEF("hanim_l_hand")
#<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
TouchSensor986 = TouchSensor()
TouchSensor986.setDescription("HAnimJoint l_wrist, HAnimSegment l_hand")

HAnimSegment985.addChildren(TouchSensor986)
Transform987 = Transform()
Transform987.setTranslation([0.1984,0.8663,-0.0583])
Shape988 = Shape()
Shape988.setUSE("HAnimJointShape")

Transform987.addChildren(Shape988)

HAnimSegment985.addChildren(Transform987)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape989 = Shape()
LineSet990 = LineSet()
LineSet990.setVertexCount([2])
Coordinate991 = Coordinate()
Coordinate991.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet990.setCoord(Coordinate991)
ColorRGBA992 = ColorRGBA()
ColorRGBA992.setUSE("HAnimSegmentLineColorRGBA")

LineSet990.setColor(ColorRGBA992)

Shape989.setGeometry(LineSet990)

HAnimSegment985.addChildren(Shape989)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape993 = Shape()
LineSet994 = LineSet()
LineSet994.setVertexCount([2])
Coordinate995 = Coordinate()
Coordinate995.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet994.setCoord(Coordinate995)
ColorRGBA996 = ColorRGBA()
ColorRGBA996.setUSE("HAnimSegmentLineColorRGBA")

LineSet994.setColor(ColorRGBA996)

Shape993.setGeometry(LineSet994)

HAnimSegment985.addChildren(Shape993)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape997 = Shape()
LineSet998 = LineSet()
LineSet998.setVertexCount([2])
Coordinate999 = Coordinate()
Coordinate999.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet998.setCoord(Coordinate999)
ColorRGBA1000 = ColorRGBA()
ColorRGBA1000.setUSE("HAnimSegmentLineColorRGBA")

LineSet998.setColor(ColorRGBA1000)

Shape997.setGeometry(LineSet998)

HAnimSegment985.addChildren(Shape997)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape1001 = Shape()
LineSet1002 = LineSet()
LineSet1002.setVertexCount([2])
Coordinate1003 = Coordinate()
Coordinate1003.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet1002.setCoord(Coordinate1003)
ColorRGBA1004 = ColorRGBA()
ColorRGBA1004.setUSE("HAnimSegmentLineColorRGBA")

LineSet1002.setColor(ColorRGBA1004)

Shape1001.setGeometry(LineSet1002)

HAnimSegment985.addChildren(Shape1001)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape1005 = Shape()
LineSet1006 = LineSet()
LineSet1006.setVertexCount([2])
Coordinate1007 = Coordinate()
Coordinate1007.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1006.setCoord(Coordinate1007)
ColorRGBA1008 = ColorRGBA()
ColorRGBA1008.setUSE("HAnimSegmentLineColorRGBA")

LineSet1006.setColor(ColorRGBA1008)

Shape1005.setGeometry(LineSet1006)

HAnimSegment985.addChildren(Shape1005)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape1009 = Shape()
LineSet1010 = LineSet()
LineSet1010.setVertexCount([2])
Coordinate1011 = Coordinate()
Coordinate1011.setPoint([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])

LineSet1010.setCoord(Coordinate1011)
ColorRGBA1012 = ColorRGBA()
ColorRGBA1012.setUSE("HAnimSiteLineColorRGBA")

LineSet1010.setColor(ColorRGBA1012)

Shape1009.setGeometry(LineSet1010)

HAnimSegment985.addChildren(Shape1009)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape1013 = Shape()
LineSet1014 = LineSet()
LineSet1014.setVertexCount([2])
Coordinate1015 = Coordinate()
Coordinate1015.setPoint([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])

LineSet1014.setCoord(Coordinate1015)
ColorRGBA1016 = ColorRGBA()
ColorRGBA1016.setUSE("HAnimSiteLineColorRGBA")

LineSet1014.setColor(ColorRGBA1016)

Shape1013.setGeometry(LineSet1014)

HAnimSegment985.addChildren(Shape1013)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape1017 = Shape()
LineSet1018 = LineSet()
LineSet1018.setVertexCount([2])
Coordinate1019 = Coordinate()
Coordinate1019.setPoint([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])

LineSet1018.setCoord(Coordinate1019)
ColorRGBA1020 = ColorRGBA()
ColorRGBA1020.setUSE("HAnimSiteLineColorRGBA")

LineSet1018.setColor(ColorRGBA1020)

Shape1017.setGeometry(LineSet1018)

HAnimSegment985.addChildren(Shape1017)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape1021 = Shape()
LineSet1022 = LineSet()
LineSet1022.setVertexCount([2])
Coordinate1023 = Coordinate()
Coordinate1023.setPoint([0.1984,0.8663,-0.0583,0.3,0.75,0.45])

LineSet1022.setCoord(Coordinate1023)
ColorRGBA1024 = ColorRGBA()
ColorRGBA1024.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1022.setColor(ColorRGBA1024)

Shape1021.setGeometry(LineSet1022)

HAnimSegment985.addChildren(Shape1021)
HAnimSite1025 = HAnimSite()
HAnimSite1025.setName("l_metacarpal_pha2_pt")
HAnimSite1025.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite1025.setTranslation([0.2009,0.8139,-0.0237])
#HAnimSite visualization shape
TouchSensor1026 = TouchSensor()
TouchSensor1026.setDescription("HAnimSite l_metacarpal_pha2")

HAnimSite1025.addChildren(TouchSensor1026)
Shape1027 = Shape()
Shape1027.setUSE("HAnimSiteShape")

HAnimSite1025.addChildren(Shape1027)

HAnimSegment985.addChildren(HAnimSite1025)
HAnimSite1028 = HAnimSite()
HAnimSite1028.setName("l_ulnar_styloid_pt")
HAnimSite1028.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1028.setTranslation([0.2142,0.8529,-0.0648])
#HAnimSite visualization shape
TouchSensor1029 = TouchSensor()
TouchSensor1029.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite1028.addChildren(TouchSensor1029)
Shape1030 = Shape()
Shape1030.setUSE("HAnimSiteShape")

HAnimSite1028.addChildren(Shape1030)

HAnimSegment985.addChildren(HAnimSite1028)
HAnimSite1031 = HAnimSite()
HAnimSite1031.setName("l_metacarpal_pha5_pt")
HAnimSite1031.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite1031.setTranslation([0.1929,0.786,-0.1122])
#HAnimSite visualization shape
TouchSensor1032 = TouchSensor()
TouchSensor1032.setDescription("HAnimSite l_metacarpal_pha5")

HAnimSite1031.addChildren(TouchSensor1032)
Shape1033 = Shape()
Shape1033.setUSE("HAnimSiteShape")

HAnimSite1031.addChildren(Shape1033)

HAnimSegment985.addChildren(HAnimSite1031)
HAnimSite1034 = HAnimSite()
HAnimSite1034.setName("l_hand_front_view")
HAnimSite1034.setDEF("hanim_l_hand_front_view")
HAnimSite1034.setTranslation([0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1035 = TouchSensor()
TouchSensor1035.setDescription("HAnimSite l_hand_front_view")

HAnimSite1034.addChildren(TouchSensor1035)
Shape1036 = Shape()
Shape1036.setUSE("HAnimSiteShape")

HAnimSite1034.addChildren(Shape1036)
Viewpoint1037 = Viewpoint()
Viewpoint1037.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1037.setCenterOfRotation([0,0.7,0])
Viewpoint1037.setDescription("left hand front")
Viewpoint1037.setPosition([0,0,0])

HAnimSite1034.addChildren(Viewpoint1037)
#HAnimSite/Viewpoint visualization shape
Anchor1038 = Anchor()
Anchor1038.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1038.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1039 = LOD()
LOD1039.setForceTransitions(True)
LOD1039.setRange([0.04])
WorldInfo1040 = WorldInfo()
WorldInfo1040.setInfo(["hide diamond when close"])

LOD1039.addChildren(WorldInfo1040)
Shape1041 = Shape()
Shape1041.setUSE("HAnimSiteViewpointShape")

LOD1039.addChildren(Shape1041)

Anchor1038.addChildren(LOD1039)

HAnimSite1034.addChildren(Anchor1038)

HAnimSegment985.addChildren(HAnimSite1034)

HAnimJoint984.addChildren(HAnimSegment985)
HAnimJoint1042 = HAnimJoint()
HAnimJoint1042.setName("l_thumb1")
HAnimJoint1042.setDEF("hanim_l_thumb1")
HAnimJoint1042.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1042.setUlimit([0,0,0])
HAnimJoint1042.setLlimit([0,0,0])
HAnimJoint1042.setStiffness([0,0,0])
HAnimSegment1043 = HAnimSegment()
HAnimSegment1043.setName("l_thumb_metacarpal")
HAnimSegment1043.setDEF("hanim_l_thumb_metacarpal")
#<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor1044 = TouchSensor()
TouchSensor1044.setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")

HAnimSegment1043.addChildren(TouchSensor1044)
Transform1045 = Transform()
Transform1045.setTranslation([0.1924,0.8472,-0.0534])
Shape1046 = Shape()
Shape1046.setUSE("HAnimJointShape")

Transform1045.addChildren(Shape1046)

HAnimSegment1043.addChildren(Transform1045)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape1047 = Shape()
LineSet1048 = LineSet()
LineSet1048.setVertexCount([2])
Coordinate1049 = Coordinate()
Coordinate1049.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1048.setCoord(Coordinate1049)
ColorRGBA1050 = ColorRGBA()
ColorRGBA1050.setUSE("HAnimSegmentLineColorRGBA")

LineSet1048.setColor(ColorRGBA1050)

Shape1047.setGeometry(LineSet1048)

HAnimSegment1043.addChildren(Shape1047)

HAnimJoint1042.addChildren(HAnimSegment1043)
HAnimJoint1051 = HAnimJoint()
HAnimJoint1051.setName("l_thumb2")
HAnimJoint1051.setDEF("hanim_l_thumb2")
HAnimJoint1051.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1051.setUlimit([0,0,0])
HAnimJoint1051.setLlimit([0,0,0])
HAnimJoint1051.setStiffness([0,0,0])
HAnimSegment1052 = HAnimSegment()
HAnimSegment1052.setName("l_thumb_proximal")
HAnimSegment1052.setDEF("hanim_l_thumb_proximal")
#<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor1053 = TouchSensor()
TouchSensor1053.setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")

HAnimSegment1052.addChildren(TouchSensor1053)
Transform1054 = Transform()
Transform1054.setTranslation([0.1951,0.8226,0.0246])
Shape1055 = Shape()
Shape1055.setUSE("HAnimJointShape")

Transform1054.addChildren(Shape1055)

HAnimSegment1052.addChildren(Transform1054)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape1056 = Shape()
LineSet1057 = LineSet()
LineSet1057.setVertexCount([2])
Coordinate1058 = Coordinate()
Coordinate1058.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1057.setCoord(Coordinate1058)
ColorRGBA1059 = ColorRGBA()
ColorRGBA1059.setUSE("HAnimSegmentLineColorRGBA")

LineSet1057.setColor(ColorRGBA1059)

Shape1056.setGeometry(LineSet1057)

HAnimSegment1052.addChildren(Shape1056)

HAnimJoint1051.addChildren(HAnimSegment1052)
HAnimJoint1060 = HAnimJoint()
HAnimJoint1060.setName("l_thumb3")
HAnimJoint1060.setDEF("hanim_l_thumb3")
HAnimJoint1060.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1060.setUlimit([0,0,0])
HAnimJoint1060.setLlimit([0,0,0])
HAnimJoint1060.setStiffness([0,0,0])
HAnimSegment1061 = HAnimSegment()
HAnimSegment1061.setName("l_thumb_distal")
HAnimSegment1061.setDEF("hanim_l_thumb_distal")
#<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
TouchSensor1062 = TouchSensor()
TouchSensor1062.setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")

HAnimSegment1061.addChildren(TouchSensor1062)
Transform1063 = Transform()
Transform1063.setTranslation([0.1955,0.8159,0.0464])
Shape1064 = Shape()
Shape1064.setUSE("HAnimJointShape")

Transform1063.addChildren(Shape1064)

HAnimSegment1061.addChildren(Transform1063)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape1065 = Shape()
LineSet1066 = LineSet()
LineSet1066.setVertexCount([2])
Coordinate1067 = Coordinate()
Coordinate1067.setPoint([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])

LineSet1066.setCoord(Coordinate1067)
ColorRGBA1068 = ColorRGBA()
ColorRGBA1068.setUSE("HAnimSiteLineColorRGBA")

LineSet1066.setColor(ColorRGBA1068)

Shape1065.setGeometry(LineSet1066)

HAnimSegment1061.addChildren(Shape1065)
HAnimSite1069 = HAnimSite()
HAnimSite1069.setName("l_thumb_distal_tip")
HAnimSite1069.setDEF("hanim_l_thumb_distal_tip")
HAnimSite1069.setTranslation([0.1982,0.8061,0.0759])
#HAnimSite visualization shape
TouchSensor1070 = TouchSensor()
TouchSensor1070.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1069.addChildren(TouchSensor1070)
Shape1071 = Shape()
Shape1071.setUSE("HAnimSiteShape")

HAnimSite1069.addChildren(Shape1071)

HAnimSegment1061.addChildren(HAnimSite1069)

HAnimJoint1060.addChildren(HAnimSegment1061)

HAnimJoint1051.addChildren(HAnimJoint1060)

HAnimJoint1042.addChildren(HAnimJoint1051)

HAnimJoint984.addChildren(HAnimJoint1042)
HAnimJoint1072 = HAnimJoint()
HAnimJoint1072.setName("l_index0")
HAnimJoint1072.setDEF("hanim_l_index0")
HAnimJoint1072.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1072.setUlimit([0,0,0])
HAnimJoint1072.setLlimit([0,0,0])
HAnimJoint1072.setStiffness([0,0,0])
HAnimSegment1073 = HAnimSegment()
HAnimSegment1073.setName("l_index_metacarpal")
HAnimSegment1073.setDEF("hanim_l_index_metacarpal")
#<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor1074 = TouchSensor()
TouchSensor1074.setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")

HAnimSegment1073.addChildren(TouchSensor1074)
Transform1075 = Transform()
Transform1075.setTranslation([0.1983,0.8024,-0.028])
Shape1076 = Shape()
Shape1076.setUSE("HAnimJointShape")

Transform1075.addChildren(Shape1076)

HAnimSegment1073.addChildren(Transform1075)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape1077 = Shape()
LineSet1078 = LineSet()
LineSet1078.setVertexCount([2])
Coordinate1079 = Coordinate()
Coordinate1079.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1078.setCoord(Coordinate1079)
ColorRGBA1080 = ColorRGBA()
ColorRGBA1080.setUSE("HAnimSegmentLineColorRGBA")

LineSet1078.setColor(ColorRGBA1080)

Shape1077.setGeometry(LineSet1078)

HAnimSegment1073.addChildren(Shape1077)

HAnimJoint1072.addChildren(HAnimSegment1073)
HAnimJoint1081 = HAnimJoint()
HAnimJoint1081.setName("l_index1")
HAnimJoint1081.setDEF("hanim_l_index1")
HAnimJoint1081.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1081.setUlimit([0,0,0])
HAnimJoint1081.setLlimit([0,0,0])
HAnimJoint1081.setStiffness([0,0,0])
HAnimSegment1082 = HAnimSegment()
HAnimSegment1082.setName("l_index_proximal")
HAnimSegment1082.setDEF("hanim_l_index_proximal")
#<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
TouchSensor1083 = TouchSensor()
TouchSensor1083.setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal")

HAnimSegment1082.addChildren(TouchSensor1083)
Transform1084 = Transform()
Transform1084.setTranslation([0.1983,0.7815,-0.028])
Shape1085 = Shape()
Shape1085.setUSE("HAnimJointShape")

Transform1084.addChildren(Shape1085)

HAnimSegment1082.addChildren(Transform1084)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape1086 = Shape()
LineSet1087 = LineSet()
LineSet1087.setVertexCount([2])
Coordinate1088 = Coordinate()
Coordinate1088.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1087.setCoord(Coordinate1088)
ColorRGBA1089 = ColorRGBA()
ColorRGBA1089.setUSE("HAnimSegmentLineColorRGBA")

LineSet1087.setColor(ColorRGBA1089)

Shape1086.setGeometry(LineSet1087)

HAnimSegment1082.addChildren(Shape1086)

HAnimJoint1081.addChildren(HAnimSegment1082)
HAnimJoint1090 = HAnimJoint()
HAnimJoint1090.setName("l_index2")
HAnimJoint1090.setDEF("hanim_l_index2")
HAnimJoint1090.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1090.setUlimit([0,0,0])
HAnimJoint1090.setLlimit([0,0,0])
HAnimJoint1090.setStiffness([0,0,0])
HAnimSegment1091 = HAnimSegment()
HAnimSegment1091.setName("l_index_middle")
HAnimSegment1091.setDEF("hanim_l_index_middle")
#<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
TouchSensor1092 = TouchSensor()
TouchSensor1092.setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle")

HAnimSegment1091.addChildren(TouchSensor1092)
Transform1093 = Transform()
Transform1093.setTranslation([0.2017,0.7363,-0.0248])
Shape1094 = Shape()
Shape1094.setUSE("HAnimJointShape")

Transform1093.addChildren(Shape1094)

HAnimSegment1091.addChildren(Transform1093)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape1095 = Shape()
LineSet1096 = LineSet()
LineSet1096.setVertexCount([2])
Coordinate1097 = Coordinate()
Coordinate1097.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1096.setCoord(Coordinate1097)
ColorRGBA1098 = ColorRGBA()
ColorRGBA1098.setUSE("HAnimSegmentLineColorRGBA")

LineSet1096.setColor(ColorRGBA1098)

Shape1095.setGeometry(LineSet1096)

HAnimSegment1091.addChildren(Shape1095)

HAnimJoint1090.addChildren(HAnimSegment1091)
HAnimJoint1099 = HAnimJoint()
HAnimJoint1099.setName("l_index3")
HAnimJoint1099.setDEF("hanim_l_index3")
HAnimJoint1099.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1099.setUlimit([0,0,0])
HAnimJoint1099.setLlimit([0,0,0])
HAnimJoint1099.setStiffness([0,0,0])
HAnimSegment1100 = HAnimSegment()
HAnimSegment1100.setName("l_index_distal")
HAnimSegment1100.setDEF("hanim_l_index_distal")
#<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
TouchSensor1101 = TouchSensor()
TouchSensor1101.setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal")

HAnimSegment1100.addChildren(TouchSensor1101)
Transform1102 = Transform()
Transform1102.setTranslation([0.2028,0.7139,-0.0236])
Shape1103 = Shape()
Shape1103.setUSE("HAnimJointShape")

Transform1102.addChildren(Shape1103)

HAnimSegment1100.addChildren(Transform1102)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape1104 = Shape()
LineSet1105 = LineSet()
LineSet1105.setVertexCount([2])
Coordinate1106 = Coordinate()
Coordinate1106.setPoint([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])

LineSet1105.setCoord(Coordinate1106)
ColorRGBA1107 = ColorRGBA()
ColorRGBA1107.setUSE("HAnimSiteLineColorRGBA")

LineSet1105.setColor(ColorRGBA1107)

Shape1104.setGeometry(LineSet1105)

HAnimSegment1100.addChildren(Shape1104)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape1108 = Shape()
LineSet1109 = LineSet()
LineSet1109.setVertexCount([2])
Coordinate1110 = Coordinate()
Coordinate1110.setPoint([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])

LineSet1109.setCoord(Coordinate1110)
ColorRGBA1111 = ColorRGBA()
ColorRGBA1111.setUSE("HAnimSiteLineColorRGBA")

LineSet1109.setColor(ColorRGBA1111)

Shape1108.setGeometry(LineSet1109)

HAnimSegment1100.addChildren(Shape1108)
HAnimSite1112 = HAnimSite()
HAnimSite1112.setName("l_index_distal_tip")
HAnimSite1112.setDEF("hanim_l_index_distal_tip")
HAnimSite1112.setTranslation([0.2089,0.6858,-0.0245])
#HAnimSite visualization shape
TouchSensor1113 = TouchSensor()
TouchSensor1113.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1112.addChildren(TouchSensor1113)
Shape1114 = Shape()
Shape1114.setUSE("HAnimSiteShape")

HAnimSite1112.addChildren(Shape1114)

HAnimSegment1100.addChildren(HAnimSite1112)
HAnimSite1115 = HAnimSite()
HAnimSite1115.setName("l_dactylion_pt")
HAnimSite1115.setDEF("hanim_l_dactylion_pt")
HAnimSite1115.setTranslation([0.2056,0.6743,-0.0482])
#HAnimSite visualization shape
TouchSensor1116 = TouchSensor()
TouchSensor1116.setDescription("HAnimSite l_dactylion")

HAnimSite1115.addChildren(TouchSensor1116)
Shape1117 = Shape()
Shape1117.setUSE("HAnimSiteShape")

HAnimSite1115.addChildren(Shape1117)

HAnimSegment1100.addChildren(HAnimSite1115)

HAnimJoint1099.addChildren(HAnimSegment1100)

HAnimJoint1090.addChildren(HAnimJoint1099)

HAnimJoint1081.addChildren(HAnimJoint1090)

HAnimJoint1072.addChildren(HAnimJoint1081)

HAnimJoint984.addChildren(HAnimJoint1072)
HAnimJoint1118 = HAnimJoint()
HAnimJoint1118.setName("l_middle0")
HAnimJoint1118.setDEF("hanim_l_middle0")
HAnimJoint1118.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1118.setUlimit([0,0,0])
HAnimJoint1118.setLlimit([0,0,0])
HAnimJoint1118.setStiffness([0,0,0])
HAnimSegment1119 = HAnimSegment()
HAnimSegment1119.setName("l_middle_metacarpal")
HAnimSegment1119.setDEF("hanim_l_middle_metacarpal")
#<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor1120 = TouchSensor()
TouchSensor1120.setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")

HAnimSegment1119.addChildren(TouchSensor1120)
Transform1121 = Transform()
Transform1121.setTranslation([0.1987,0.8029,-0.053])
Shape1122 = Shape()
Shape1122.setUSE("HAnimJointShape")

Transform1121.addChildren(Shape1122)

HAnimSegment1119.addChildren(Transform1121)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape1123 = Shape()
LineSet1124 = LineSet()
LineSet1124.setVertexCount([2])
Coordinate1125 = Coordinate()
Coordinate1125.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1124.setCoord(Coordinate1125)
ColorRGBA1126 = ColorRGBA()
ColorRGBA1126.setUSE("HAnimSegmentLineColorRGBA")

LineSet1124.setColor(ColorRGBA1126)

Shape1123.setGeometry(LineSet1124)

HAnimSegment1119.addChildren(Shape1123)

HAnimJoint1118.addChildren(HAnimSegment1119)
HAnimJoint1127 = HAnimJoint()
HAnimJoint1127.setName("l_middle1")
HAnimJoint1127.setDEF("hanim_l_middle1")
HAnimJoint1127.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1127.setUlimit([0,0,0])
HAnimJoint1127.setLlimit([0,0,0])
HAnimJoint1127.setStiffness([0,0,0])
HAnimSegment1128 = HAnimSegment()
HAnimSegment1128.setName("l_middle_proximal")
HAnimSegment1128.setDEF("hanim_l_middle_proximal")
#<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
TouchSensor1129 = TouchSensor()
TouchSensor1129.setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")

HAnimSegment1128.addChildren(TouchSensor1129)
Transform1130 = Transform()
Transform1130.setTranslation([0.1987,0.7818,-0.053])
Shape1131 = Shape()
Shape1131.setUSE("HAnimJointShape")

Transform1130.addChildren(Shape1131)

HAnimSegment1128.addChildren(Transform1130)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape1132 = Shape()
LineSet1133 = LineSet()
LineSet1133.setVertexCount([2])
Coordinate1134 = Coordinate()
Coordinate1134.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1133.setCoord(Coordinate1134)
ColorRGBA1135 = ColorRGBA()
ColorRGBA1135.setUSE("HAnimSegmentLineColorRGBA")

LineSet1133.setColor(ColorRGBA1135)

Shape1132.setGeometry(LineSet1133)

HAnimSegment1128.addChildren(Shape1132)

HAnimJoint1127.addChildren(HAnimSegment1128)
HAnimJoint1136 = HAnimJoint()
HAnimJoint1136.setName("l_middle2")
HAnimJoint1136.setDEF("hanim_l_middle2")
HAnimJoint1136.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1136.setUlimit([0,0,0])
HAnimJoint1136.setLlimit([0,0,0])
HAnimJoint1136.setStiffness([0,0,0])
HAnimSegment1137 = HAnimSegment()
HAnimSegment1137.setName("l_middle_middle")
HAnimSegment1137.setDEF("hanim_l_middle_middle")
#<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
TouchSensor1138 = TouchSensor()
TouchSensor1138.setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle")

HAnimSegment1137.addChildren(TouchSensor1138)
Transform1139 = Transform()
Transform1139.setTranslation([0.2013,0.7273,-0.0503])
Shape1140 = Shape()
Shape1140.setUSE("HAnimJointShape")

Transform1139.addChildren(Shape1140)

HAnimSegment1137.addChildren(Transform1139)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape1141 = Shape()
LineSet1142 = LineSet()
LineSet1142.setVertexCount([2])
Coordinate1143 = Coordinate()
Coordinate1143.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1142.setCoord(Coordinate1143)
ColorRGBA1144 = ColorRGBA()
ColorRGBA1144.setUSE("HAnimSegmentLineColorRGBA")

LineSet1142.setColor(ColorRGBA1144)

Shape1141.setGeometry(LineSet1142)

HAnimSegment1137.addChildren(Shape1141)

HAnimJoint1136.addChildren(HAnimSegment1137)
HAnimJoint1145 = HAnimJoint()
HAnimJoint1145.setName("l_middle3")
HAnimJoint1145.setDEF("hanim_l_middle3")
HAnimJoint1145.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1145.setUlimit([0,0,0])
HAnimJoint1145.setLlimit([0,0,0])
HAnimJoint1145.setStiffness([0,0,0])
HAnimSegment1146 = HAnimSegment()
HAnimSegment1146.setName("l_middle_distal")
HAnimSegment1146.setDEF("hanim_l_middle_distal")
#<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
TouchSensor1147 = TouchSensor()
TouchSensor1147.setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal")

HAnimSegment1146.addChildren(TouchSensor1147)
Transform1148 = Transform()
Transform1148.setTranslation([0.2026,0.7011,-0.0494])
Shape1149 = Shape()
Shape1149.setUSE("HAnimJointShape")

Transform1148.addChildren(Shape1149)

HAnimSegment1146.addChildren(Transform1148)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape1150 = Shape()
LineSet1151 = LineSet()
LineSet1151.setVertexCount([2])
Coordinate1152 = Coordinate()
Coordinate1152.setPoint([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])

LineSet1151.setCoord(Coordinate1152)
ColorRGBA1153 = ColorRGBA()
ColorRGBA1153.setUSE("HAnimSiteLineColorRGBA")

LineSet1151.setColor(ColorRGBA1153)

Shape1150.setGeometry(LineSet1151)

HAnimSegment1146.addChildren(Shape1150)
HAnimSite1154 = HAnimSite()
HAnimSite1154.setName("l_middle_distal_tip")
HAnimSite1154.setDEF("hanim_l_middle_distal_tip")
HAnimSite1154.setTranslation([0.208,0.6731,-0.0491])
#HAnimSite visualization shape
TouchSensor1155 = TouchSensor()
TouchSensor1155.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1154.addChildren(TouchSensor1155)
Shape1156 = Shape()
Shape1156.setUSE("HAnimSiteShape")

HAnimSite1154.addChildren(Shape1156)

HAnimSegment1146.addChildren(HAnimSite1154)

HAnimJoint1145.addChildren(HAnimSegment1146)

HAnimJoint1136.addChildren(HAnimJoint1145)

HAnimJoint1127.addChildren(HAnimJoint1136)

HAnimJoint1118.addChildren(HAnimJoint1127)

HAnimJoint984.addChildren(HAnimJoint1118)
HAnimJoint1157 = HAnimJoint()
HAnimJoint1157.setName("l_ring0")
HAnimJoint1157.setDEF("hanim_l_ring0")
HAnimJoint1157.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1157.setUlimit([0,0,0])
HAnimJoint1157.setLlimit([0,0,0])
HAnimJoint1157.setStiffness([0,0,0])
HAnimSegment1158 = HAnimSegment()
HAnimSegment1158.setName("l_ring_metacarpal")
HAnimSegment1158.setDEF("hanim_l_ring_metacarpal")
#<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor1159 = TouchSensor()
TouchSensor1159.setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")

HAnimSegment1158.addChildren(TouchSensor1159)
Transform1160 = Transform()
Transform1160.setTranslation([0.1956,0.8019,-0.0794])
Shape1161 = Shape()
Shape1161.setUSE("HAnimJointShape")

Transform1160.addChildren(Shape1161)

HAnimSegment1158.addChildren(Transform1160)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape1162 = Shape()
LineSet1163 = LineSet()
LineSet1163.setVertexCount([2])
Coordinate1164 = Coordinate()
Coordinate1164.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1163.setCoord(Coordinate1164)
ColorRGBA1165 = ColorRGBA()
ColorRGBA1165.setUSE("HAnimSegmentLineColorRGBA")

LineSet1163.setColor(ColorRGBA1165)

Shape1162.setGeometry(LineSet1163)

HAnimSegment1158.addChildren(Shape1162)

HAnimJoint1157.addChildren(HAnimSegment1158)
HAnimJoint1166 = HAnimJoint()
HAnimJoint1166.setName("l_ring1")
HAnimJoint1166.setDEF("hanim_l_ring1")
HAnimJoint1166.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1166.setUlimit([0,0,0])
HAnimJoint1166.setLlimit([0,0,0])
HAnimJoint1166.setStiffness([0,0,0])
HAnimSegment1167 = HAnimSegment()
HAnimSegment1167.setName("l_ring_proximal")
HAnimSegment1167.setDEF("hanim_l_ring_proximal")
#<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
TouchSensor1168 = TouchSensor()
TouchSensor1168.setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")

HAnimSegment1167.addChildren(TouchSensor1168)
Transform1169 = Transform()
Transform1169.setTranslation([0.1956,0.7815,-0.0794])
Shape1170 = Shape()
Shape1170.setUSE("HAnimJointShape")

Transform1169.addChildren(Shape1170)

HAnimSegment1167.addChildren(Transform1169)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape1171 = Shape()
LineSet1172 = LineSet()
LineSet1172.setVertexCount([2])
Coordinate1173 = Coordinate()
Coordinate1173.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1172.setCoord(Coordinate1173)
ColorRGBA1174 = ColorRGBA()
ColorRGBA1174.setUSE("HAnimSegmentLineColorRGBA")

LineSet1172.setColor(ColorRGBA1174)

Shape1171.setGeometry(LineSet1172)

HAnimSegment1167.addChildren(Shape1171)

HAnimJoint1166.addChildren(HAnimSegment1167)
HAnimJoint1175 = HAnimJoint()
HAnimJoint1175.setName("l_ring2")
HAnimJoint1175.setDEF("hanim_l_ring2")
HAnimJoint1175.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1175.setUlimit([0,0,0])
HAnimJoint1175.setLlimit([0,0,0])
HAnimJoint1175.setStiffness([0,0,0])
HAnimSegment1176 = HAnimSegment()
HAnimSegment1176.setName("l_ring_middle")
HAnimSegment1176.setDEF("hanim_l_ring_middle")
#<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
TouchSensor1177 = TouchSensor()
TouchSensor1177.setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle")

HAnimSegment1176.addChildren(TouchSensor1177)
Transform1178 = Transform()
Transform1178.setTranslation([0.1973,0.7287,-0.0777])
Shape1179 = Shape()
Shape1179.setUSE("HAnimJointShape")

Transform1178.addChildren(Shape1179)

HAnimSegment1176.addChildren(Transform1178)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape1180 = Shape()
LineSet1181 = LineSet()
LineSet1181.setVertexCount([2])
Coordinate1182 = Coordinate()
Coordinate1182.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1181.setCoord(Coordinate1182)
ColorRGBA1183 = ColorRGBA()
ColorRGBA1183.setUSE("HAnimSegmentLineColorRGBA")

LineSet1181.setColor(ColorRGBA1183)

Shape1180.setGeometry(LineSet1181)

HAnimSegment1176.addChildren(Shape1180)

HAnimJoint1175.addChildren(HAnimSegment1176)
HAnimJoint1184 = HAnimJoint()
HAnimJoint1184.setName("l_ring3")
HAnimJoint1184.setDEF("hanim_l_ring3")
HAnimJoint1184.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1184.setUlimit([0,0,0])
HAnimJoint1184.setLlimit([0,0,0])
HAnimJoint1184.setStiffness([0,0,0])
HAnimSegment1185 = HAnimSegment()
HAnimSegment1185.setName("l_ring_distal")
HAnimSegment1185.setDEF("hanim_l_ring_distal")
#<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
TouchSensor1186 = TouchSensor()
TouchSensor1186.setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal")

HAnimSegment1185.addChildren(TouchSensor1186)
Transform1187 = Transform()
Transform1187.setTranslation([0.1983,0.7045,-0.0767])
Shape1188 = Shape()
Shape1188.setUSE("HAnimJointShape")

Transform1187.addChildren(Shape1188)

HAnimSegment1185.addChildren(Transform1187)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape1189 = Shape()
LineSet1190 = LineSet()
LineSet1190.setVertexCount([2])
Coordinate1191 = Coordinate()
Coordinate1191.setPoint([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])

LineSet1190.setCoord(Coordinate1191)
ColorRGBA1192 = ColorRGBA()
ColorRGBA1192.setUSE("HAnimSiteLineColorRGBA")

LineSet1190.setColor(ColorRGBA1192)

Shape1189.setGeometry(LineSet1190)

HAnimSegment1185.addChildren(Shape1189)
HAnimSite1193 = HAnimSite()
HAnimSite1193.setName("l_ring_distal_tip")
HAnimSite1193.setDEF("hanim_l_ring_distal_tip")
HAnimSite1193.setTranslation([0.2035,0.675,-0.0756])
#HAnimSite visualization shape
TouchSensor1194 = TouchSensor()
TouchSensor1194.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1193.addChildren(TouchSensor1194)
Shape1195 = Shape()
Shape1195.setUSE("HAnimSiteShape")

HAnimSite1193.addChildren(Shape1195)

HAnimSegment1185.addChildren(HAnimSite1193)

HAnimJoint1184.addChildren(HAnimSegment1185)

HAnimJoint1175.addChildren(HAnimJoint1184)

HAnimJoint1166.addChildren(HAnimJoint1175)

HAnimJoint1157.addChildren(HAnimJoint1166)

HAnimJoint984.addChildren(HAnimJoint1157)
HAnimJoint1196 = HAnimJoint()
HAnimJoint1196.setName("l_pinky0")
HAnimJoint1196.setDEF("hanim_l_pinky0")
HAnimJoint1196.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1196.setUlimit([0,0,0])
HAnimJoint1196.setLlimit([0,0,0])
HAnimJoint1196.setStiffness([0,0,0])
HAnimSegment1197 = HAnimSegment()
HAnimSegment1197.setName("l_pinky_metacarpal")
HAnimSegment1197.setDEF("hanim_l_pinky_metacarpal")
#<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor1198 = TouchSensor()
TouchSensor1198.setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")

HAnimSegment1197.addChildren(TouchSensor1198)
Transform1199 = Transform()
Transform1199.setTranslation([0.1925,0.8066,-0.1036])
Shape1200 = Shape()
Shape1200.setUSE("HAnimJointShape")

Transform1199.addChildren(Shape1200)

HAnimSegment1197.addChildren(Transform1199)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape1201 = Shape()
LineSet1202 = LineSet()
LineSet1202.setVertexCount([2])
Coordinate1203 = Coordinate()
Coordinate1203.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1202.setCoord(Coordinate1203)
ColorRGBA1204 = ColorRGBA()
ColorRGBA1204.setUSE("HAnimSegmentLineColorRGBA")

LineSet1202.setColor(ColorRGBA1204)

Shape1201.setGeometry(LineSet1202)

HAnimSegment1197.addChildren(Shape1201)

HAnimJoint1196.addChildren(HAnimSegment1197)
HAnimJoint1205 = HAnimJoint()
HAnimJoint1205.setName("l_pinky1")
HAnimJoint1205.setDEF("hanim_l_pinky1")
HAnimJoint1205.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1205.setUlimit([0,0,0])
HAnimJoint1205.setLlimit([0,0,0])
HAnimJoint1205.setStiffness([0,0,0])
HAnimSegment1206 = HAnimSegment()
HAnimSegment1206.setName("l_pinky_proximal")
HAnimSegment1206.setDEF("hanim_l_pinky_proximal")
#<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor1207 = TouchSensor()
TouchSensor1207.setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")

HAnimSegment1206.addChildren(TouchSensor1207)
Transform1208 = Transform()
Transform1208.setTranslation([0.1925,0.7866,-0.1036])
Shape1209 = Shape()
Shape1209.setUSE("HAnimJointShape")

Transform1208.addChildren(Shape1209)

HAnimSegment1206.addChildren(Transform1208)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape1210 = Shape()
LineSet1211 = LineSet()
LineSet1211.setVertexCount([2])
Coordinate1212 = Coordinate()
Coordinate1212.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1211.setCoord(Coordinate1212)
ColorRGBA1213 = ColorRGBA()
ColorRGBA1213.setUSE("HAnimSegmentLineColorRGBA")

LineSet1211.setColor(ColorRGBA1213)

Shape1210.setGeometry(LineSet1211)

HAnimSegment1206.addChildren(Shape1210)

HAnimJoint1205.addChildren(HAnimSegment1206)
HAnimJoint1214 = HAnimJoint()
HAnimJoint1214.setName("l_pinky2")
HAnimJoint1214.setDEF("hanim_l_pinky2")
HAnimJoint1214.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1214.setUlimit([0,0,0])
HAnimJoint1214.setLlimit([0,0,0])
HAnimJoint1214.setStiffness([0,0,0])
HAnimSegment1215 = HAnimSegment()
HAnimSegment1215.setName("l_pinky_middle")
HAnimSegment1215.setDEF("hanim_l_pinky_middle")
#<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
TouchSensor1216 = TouchSensor()
TouchSensor1216.setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")

HAnimSegment1215.addChildren(TouchSensor1216)
Transform1217 = Transform()
Transform1217.setTranslation([0.1938,0.7452,-0.1024])
Shape1218 = Shape()
Shape1218.setUSE("HAnimJointShape")

Transform1217.addChildren(Shape1218)

HAnimSegment1215.addChildren(Transform1217)
#HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape1219 = Shape()
LineSet1220 = LineSet()
LineSet1220.setVertexCount([2])
Coordinate1221 = Coordinate()
Coordinate1221.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1220.setCoord(Coordinate1221)
ColorRGBA1222 = ColorRGBA()
ColorRGBA1222.setUSE("HAnimSegmentLineColorRGBA")

LineSet1220.setColor(ColorRGBA1222)

Shape1219.setGeometry(LineSet1220)

HAnimSegment1215.addChildren(Shape1219)

HAnimJoint1214.addChildren(HAnimSegment1215)
HAnimJoint1223 = HAnimJoint()
HAnimJoint1223.setName("l_pinky3")
HAnimJoint1223.setDEF("hanim_l_pinky3")
HAnimJoint1223.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1223.setUlimit([0,0,0])
HAnimJoint1223.setLlimit([0,0,0])
HAnimJoint1223.setStiffness([0,0,0])
HAnimSegment1224 = HAnimSegment()
HAnimSegment1224.setName("l_pinky_distal")
HAnimSegment1224.setDEF("hanim_l_pinky_distal")
#<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
TouchSensor1225 = TouchSensor()
TouchSensor1225.setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")

HAnimSegment1224.addChildren(TouchSensor1225)
Transform1226 = Transform()
Transform1226.setTranslation([0.1948,0.7277,-0.1017])
Shape1227 = Shape()
Shape1227.setUSE("HAnimJointShape")

Transform1226.addChildren(Shape1227)

HAnimSegment1224.addChildren(Transform1226)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape1228 = Shape()
LineSet1229 = LineSet()
LineSet1229.setVertexCount([2])
Coordinate1230 = Coordinate()
Coordinate1230.setPoint([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])

LineSet1229.setCoord(Coordinate1230)
ColorRGBA1231 = ColorRGBA()
ColorRGBA1231.setUSE("HAnimSiteLineColorRGBA")

LineSet1229.setColor(ColorRGBA1231)

Shape1228.setGeometry(LineSet1229)

HAnimSegment1224.addChildren(Shape1228)
HAnimSite1232 = HAnimSite()
HAnimSite1232.setName("l_pinky_distal_tip")
HAnimSite1232.setDEF("hanim_l_pinky_distal_tip")
HAnimSite1232.setTranslation([0.2014,0.7009,-0.1012])
#HAnimSite visualization shape
TouchSensor1233 = TouchSensor()
TouchSensor1233.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1232.addChildren(TouchSensor1233)
Shape1234 = Shape()
Shape1234.setUSE("HAnimSiteShape")

HAnimSite1232.addChildren(Shape1234)

HAnimSegment1224.addChildren(HAnimSite1232)

HAnimJoint1223.addChildren(HAnimSegment1224)

HAnimJoint1214.addChildren(HAnimJoint1223)

HAnimJoint1205.addChildren(HAnimJoint1214)

HAnimJoint1196.addChildren(HAnimJoint1205)

HAnimJoint984.addChildren(HAnimJoint1196)

HAnimJoint947.addChildren(HAnimJoint984)

HAnimJoint931.addChildren(HAnimJoint947)

HAnimJoint922.addChildren(HAnimJoint931)

HAnimJoint885.addChildren(HAnimJoint922)

HAnimJoint597.addChildren(HAnimJoint885)
HAnimJoint1235 = HAnimJoint()
HAnimJoint1235.setName("r_sternoclavicular")
HAnimJoint1235.setDEF("hanim_r_sternoclavicular")
HAnimJoint1235.setCenter([-0.082,1.4488,-0.0353])
HAnimJoint1235.setUlimit([0,0,0])
HAnimJoint1235.setLlimit([0,0,0])
HAnimJoint1235.setStiffness([0,0,0])
HAnimSegment1236 = HAnimSegment()
HAnimSegment1236.setName("r_clavicle")
HAnimSegment1236.setDEF("hanim_r_clavicle")
#<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor1237 = TouchSensor()
TouchSensor1237.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1236.addChildren(TouchSensor1237)
Transform1238 = Transform()
Transform1238.setTranslation([-0.082,1.4488,-0.0353])
Shape1239 = Shape()
Shape1239.setUSE("HAnimJointShape")

Transform1238.addChildren(Shape1239)

HAnimSegment1236.addChildren(Transform1238)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape1240 = Shape()
LineSet1241 = LineSet()
LineSet1241.setVertexCount([2])
Coordinate1242 = Coordinate()
Coordinate1242.setPoint([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])

LineSet1241.setCoord(Coordinate1242)
ColorRGBA1243 = ColorRGBA()
ColorRGBA1243.setUSE("HAnimSegmentLineColorRGBA")

LineSet1241.setColor(ColorRGBA1243)

Shape1240.setGeometry(LineSet1241)

HAnimSegment1236.addChildren(Shape1240)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape1244 = Shape()
LineSet1245 = LineSet()
LineSet1245.setVertexCount([2])
Coordinate1246 = Coordinate()
Coordinate1246.setPoint([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])

LineSet1245.setCoord(Coordinate1246)
ColorRGBA1247 = ColorRGBA()
ColorRGBA1247.setUSE("HAnimSiteLineColorRGBA")

LineSet1245.setColor(ColorRGBA1247)

Shape1244.setGeometry(LineSet1245)

HAnimSegment1236.addChildren(Shape1244)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape1248 = Shape()
LineSet1249 = LineSet()
LineSet1249.setVertexCount([2])
Coordinate1250 = Coordinate()
Coordinate1250.setPoint([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])

LineSet1249.setCoord(Coordinate1250)
ColorRGBA1251 = ColorRGBA()
ColorRGBA1251.setUSE("HAnimSiteLineColorRGBA")

LineSet1249.setColor(ColorRGBA1251)

Shape1248.setGeometry(LineSet1249)

HAnimSegment1236.addChildren(Shape1248)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape1252 = Shape()
LineSet1253 = LineSet()
LineSet1253.setVertexCount([2])
Coordinate1254 = Coordinate()
Coordinate1254.setPoint([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])

LineSet1253.setCoord(Coordinate1254)
ColorRGBA1255 = ColorRGBA()
ColorRGBA1255.setUSE("HAnimSiteLineColorRGBA")

LineSet1253.setColor(ColorRGBA1255)

Shape1252.setGeometry(LineSet1253)

HAnimSegment1236.addChildren(Shape1252)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape1256 = Shape()
LineSet1257 = LineSet()
LineSet1257.setVertexCount([2])
Coordinate1258 = Coordinate()
Coordinate1258.setPoint([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])

LineSet1257.setCoord(Coordinate1258)
ColorRGBA1259 = ColorRGBA()
ColorRGBA1259.setUSE("HAnimSiteLineColorRGBA")

LineSet1257.setColor(ColorRGBA1259)

Shape1256.setGeometry(LineSet1257)

HAnimSegment1236.addChildren(Shape1256)
HAnimSite1260 = HAnimSite()
HAnimSite1260.setName("r_clavicale_pt")
HAnimSite1260.setDEF("hanim_r_clavicale_pt")
HAnimSite1260.setTranslation([-0.0115,1.4943,0.04])
#HAnimSite visualization shape
TouchSensor1261 = TouchSensor()
TouchSensor1261.setDescription("HAnimSite r_clavicale")

HAnimSite1260.addChildren(TouchSensor1261)
Shape1262 = Shape()
Shape1262.setUSE("HAnimSiteShape")

HAnimSite1260.addChildren(Shape1262)

HAnimSegment1236.addChildren(HAnimSite1260)
HAnimSite1263 = HAnimSite()
HAnimSite1263.setName("r_acromion_pt")
HAnimSite1263.setDEF("hanim_r_acromion_pt")
HAnimSite1263.setTranslation([-0.1905,1.4791,-0.0431])
#HAnimSite visualization shape
TouchSensor1264 = TouchSensor()
TouchSensor1264.setDescription("HAnimSite r_acromion")

HAnimSite1263.addChildren(TouchSensor1264)
Shape1265 = Shape()
Shape1265.setUSE("HAnimSiteShape")

HAnimSite1263.addChildren(Shape1265)

HAnimSegment1236.addChildren(HAnimSite1263)
HAnimSite1266 = HAnimSite()
HAnimSite1266.setName("r_axilla_ant_pt")
HAnimSite1266.setDEF("hanim_r_axilla_ant_pt")
HAnimSite1266.setTranslation([-0.1626,1.4072,-0.0031])
#HAnimSite visualization shape
TouchSensor1267 = TouchSensor()
TouchSensor1267.setDescription("HAnimSite r_axilla_ant")

HAnimSite1266.addChildren(TouchSensor1267)
Shape1268 = Shape()
Shape1268.setUSE("HAnimSiteShape")

HAnimSite1266.addChildren(Shape1268)

HAnimSegment1236.addChildren(HAnimSite1266)
HAnimSite1269 = HAnimSite()
HAnimSite1269.setName("r_axilla_post_pt")
HAnimSite1269.setDEF("hanim_r_axilla_post_pt")
HAnimSite1269.setTranslation([-0.1603,1.4098,-0.0826])
#HAnimSite visualization shape
TouchSensor1270 = TouchSensor()
TouchSensor1270.setDescription("HAnimSite r_axilla_post")

HAnimSite1269.addChildren(TouchSensor1270)
Shape1271 = Shape()
Shape1271.setUSE("HAnimSiteShape")

HAnimSite1269.addChildren(Shape1271)

HAnimSegment1236.addChildren(HAnimSite1269)

HAnimJoint1235.addChildren(HAnimSegment1236)
HAnimJoint1272 = HAnimJoint()
HAnimJoint1272.setName("r_acromioclavicular")
HAnimJoint1272.setDEF("hanim_r_acromioclavicular")
HAnimJoint1272.setCenter([-0.0962,1.4269,-0.0424])
HAnimJoint1272.setUlimit([0,0,0])
HAnimJoint1272.setLlimit([0,0,0])
HAnimJoint1272.setStiffness([0,0,0])
HAnimSegment1273 = HAnimSegment()
HAnimSegment1273.setName("r_scapula")
HAnimSegment1273.setDEF("hanim_r_scapula")
#<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
TouchSensor1274 = TouchSensor()
TouchSensor1274.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1273.addChildren(TouchSensor1274)
Transform1275 = Transform()
Transform1275.setTranslation([-0.0962,1.4269,-0.0424])
Shape1276 = Shape()
Shape1276.setUSE("HAnimJointShape")

Transform1275.addChildren(Shape1276)

HAnimSegment1273.addChildren(Transform1275)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape1277 = Shape()
LineSet1278 = LineSet()
LineSet1278.setVertexCount([2])
Coordinate1279 = Coordinate()
Coordinate1279.setPoint([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])

LineSet1278.setCoord(Coordinate1279)
ColorRGBA1280 = ColorRGBA()
ColorRGBA1280.setUSE("HAnimSegmentLineColorRGBA")

LineSet1278.setColor(ColorRGBA1280)

Shape1277.setGeometry(LineSet1278)

HAnimSegment1273.addChildren(Shape1277)

HAnimJoint1272.addChildren(HAnimSegment1273)
HAnimJoint1281 = HAnimJoint()
HAnimJoint1281.setName("r_shoulder")
HAnimJoint1281.setDEF("hanim_r_shoulder")
HAnimJoint1281.setCenter([-0.2029,1.4376,-0.0387])
HAnimJoint1281.setUlimit([0,0,0])
HAnimJoint1281.setLlimit([0,0,0])
HAnimJoint1281.setStiffness([0,0,0])
HAnimSegment1282 = HAnimSegment()
HAnimSegment1282.setName("r_upperarm")
HAnimSegment1282.setDEF("hanim_r_upperarm")
#<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor1283 = TouchSensor()
TouchSensor1283.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1282.addChildren(TouchSensor1283)
Transform1284 = Transform()
Transform1284.setTranslation([-0.2029,1.4376,-0.0387])
Shape1285 = Shape()
Shape1285.setUSE("HAnimJointShape")

Transform1284.addChildren(Shape1285)

HAnimSegment1282.addChildren(Transform1284)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape1286 = Shape()
LineSet1287 = LineSet()
LineSet1287.setVertexCount([2])
Coordinate1288 = Coordinate()
Coordinate1288.setPoint([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])

LineSet1287.setCoord(Coordinate1288)
ColorRGBA1289 = ColorRGBA()
ColorRGBA1289.setUSE("HAnimSegmentLineColorRGBA")

LineSet1287.setColor(ColorRGBA1289)

Shape1286.setGeometry(LineSet1287)

HAnimSegment1282.addChildren(Shape1286)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape1290 = Shape()
LineSet1291 = LineSet()
LineSet1291.setVertexCount([2])
Coordinate1292 = Coordinate()
Coordinate1292.setPoint([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])

LineSet1291.setCoord(Coordinate1292)
ColorRGBA1293 = ColorRGBA()
ColorRGBA1293.setUSE("HAnimSiteLineColorRGBA")

LineSet1291.setColor(ColorRGBA1293)

Shape1290.setGeometry(LineSet1291)

HAnimSegment1282.addChildren(Shape1290)
HAnimSite1294 = HAnimSite()
HAnimSite1294.setName("r_humeral_lateral_epicn_pt")
HAnimSite1294.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite1294.setTranslation([-0.2224,1.1517,-0.1033])
#HAnimSite visualization shape
TouchSensor1295 = TouchSensor()
TouchSensor1295.setDescription("HAnimSite r_humeral_lateral_epicn")

HAnimSite1294.addChildren(TouchSensor1295)
Shape1296 = Shape()
Shape1296.setUSE("HAnimSiteShape")

HAnimSite1294.addChildren(Shape1296)

HAnimSegment1282.addChildren(HAnimSite1294)

HAnimJoint1281.addChildren(HAnimSegment1282)
HAnimJoint1297 = HAnimJoint()
HAnimJoint1297.setName("r_elbow")
HAnimJoint1297.setDEF("hanim_r_elbow")
HAnimJoint1297.setCenter([-0.2014,1.1357,-0.0682])
HAnimJoint1297.setUlimit([0,0,0])
HAnimJoint1297.setLlimit([0,0,0])
HAnimJoint1297.setStiffness([0,0,0])
HAnimSegment1298 = HAnimSegment()
HAnimSegment1298.setName("r_forearm")
HAnimSegment1298.setDEF("hanim_r_forearm")
#<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
TouchSensor1299 = TouchSensor()
TouchSensor1299.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1298.addChildren(TouchSensor1299)
Transform1300 = Transform()
Transform1300.setTranslation([-0.2014,1.1357,-0.0682])
Shape1301 = Shape()
Shape1301.setUSE("HAnimJointShape")

Transform1300.addChildren(Shape1301)

HAnimSegment1298.addChildren(Transform1300)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape1302 = Shape()
LineSet1303 = LineSet()
LineSet1303.setVertexCount([2])
Coordinate1304 = Coordinate()
Coordinate1304.setPoint([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])

LineSet1303.setCoord(Coordinate1304)
ColorRGBA1305 = ColorRGBA()
ColorRGBA1305.setUSE("HAnimSegmentLineColorRGBA")

LineSet1303.setColor(ColorRGBA1305)

Shape1302.setGeometry(LineSet1303)

HAnimSegment1298.addChildren(Shape1302)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape1306 = Shape()
LineSet1307 = LineSet()
LineSet1307.setVertexCount([2])
Coordinate1308 = Coordinate()
Coordinate1308.setPoint([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])

LineSet1307.setCoord(Coordinate1308)
ColorRGBA1309 = ColorRGBA()
ColorRGBA1309.setUSE("HAnimSiteLineColorRGBA")

LineSet1307.setColor(ColorRGBA1309)

Shape1306.setGeometry(LineSet1307)

HAnimSegment1298.addChildren(Shape1306)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape1310 = Shape()
LineSet1311 = LineSet()
LineSet1311.setVertexCount([2])
Coordinate1312 = Coordinate()
Coordinate1312.setPoint([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])

LineSet1311.setCoord(Coordinate1312)
ColorRGBA1313 = ColorRGBA()
ColorRGBA1313.setUSE("HAnimSiteLineColorRGBA")

LineSet1311.setColor(ColorRGBA1313)

Shape1310.setGeometry(LineSet1311)

HAnimSegment1298.addChildren(Shape1310)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape1314 = Shape()
LineSet1315 = LineSet()
LineSet1315.setVertexCount([2])
Coordinate1316 = Coordinate()
Coordinate1316.setPoint([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])

LineSet1315.setCoord(Coordinate1316)
ColorRGBA1317 = ColorRGBA()
ColorRGBA1317.setUSE("HAnimSiteLineColorRGBA")

LineSet1315.setColor(ColorRGBA1317)

Shape1314.setGeometry(LineSet1315)

HAnimSegment1298.addChildren(Shape1314)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape1318 = Shape()
LineSet1319 = LineSet()
LineSet1319.setVertexCount([2])
Coordinate1320 = Coordinate()
Coordinate1320.setPoint([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])

LineSet1319.setCoord(Coordinate1320)
ColorRGBA1321 = ColorRGBA()
ColorRGBA1321.setUSE("HAnimSiteLineColorRGBA")

LineSet1319.setColor(ColorRGBA1321)

Shape1318.setGeometry(LineSet1319)

HAnimSegment1298.addChildren(Shape1318)
HAnimSite1322 = HAnimSite()
HAnimSite1322.setName("r_radial_styloid_pt")
HAnimSite1322.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1322.setTranslation([-0.1884,0.8676,-0.036])
#HAnimSite visualization shape
TouchSensor1323 = TouchSensor()
TouchSensor1323.setDescription("HAnimSite r_radial_styloid")

HAnimSite1322.addChildren(TouchSensor1323)
Shape1324 = Shape()
Shape1324.setUSE("HAnimSiteShape")

HAnimSite1322.addChildren(Shape1324)

HAnimSegment1298.addChildren(HAnimSite1322)
HAnimSite1325 = HAnimSite()
HAnimSite1325.setName("r_olecranon_pt")
HAnimSite1325.setDEF("hanim_r_olecranon_pt")
HAnimSite1325.setTranslation([-0.1907,1.1405,-0.1065])
#HAnimSite visualization shape
TouchSensor1326 = TouchSensor()
TouchSensor1326.setDescription("HAnimSite r_olecranon")

HAnimSite1325.addChildren(TouchSensor1326)
Shape1327 = Shape()
Shape1327.setUSE("HAnimSiteShape")

HAnimSite1325.addChildren(Shape1327)

HAnimSegment1298.addChildren(HAnimSite1325)
HAnimSite1328 = HAnimSite()
HAnimSite1328.setName("r_humeral_medial_epicn_pt")
HAnimSite1328.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite1328.setTranslation([-0.168,1.1298,-0.1062])
#HAnimSite visualization shape
TouchSensor1329 = TouchSensor()
TouchSensor1329.setDescription("HAnimSite r_humeral_medial_epicn")

HAnimSite1328.addChildren(TouchSensor1329)
Shape1330 = Shape()
Shape1330.setUSE("HAnimSiteShape")

HAnimSite1328.addChildren(Shape1330)

HAnimSegment1298.addChildren(HAnimSite1328)
HAnimSite1331 = HAnimSite()
HAnimSite1331.setName("r_radiale_pt")
HAnimSite1331.setDEF("hanim_r_radiale_pt")
HAnimSite1331.setTranslation([-0.213,1.1305,-0.1091])
#HAnimSite visualization shape
TouchSensor1332 = TouchSensor()
TouchSensor1332.setDescription("HAnimSite r_radiale")

HAnimSite1331.addChildren(TouchSensor1332)
Shape1333 = Shape()
Shape1333.setUSE("HAnimSiteShape")

HAnimSite1331.addChildren(Shape1333)

HAnimSegment1298.addChildren(HAnimSite1331)

HAnimJoint1297.addChildren(HAnimSegment1298)
HAnimJoint1334 = HAnimJoint()
HAnimJoint1334.setName("r_wrist")
HAnimJoint1334.setDEF("hanim_r_wrist")
HAnimJoint1334.setCenter([-0.1984,0.8663,-0.0583])
HAnimJoint1334.setUlimit([0,0,0])
HAnimJoint1334.setLlimit([0,0,0])
HAnimJoint1334.setStiffness([0,0,0])
HAnimSegment1335 = HAnimSegment()
HAnimSegment1335.setName("r_hand")
HAnimSegment1335.setDEF("hanim_r_hand")
#<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
TouchSensor1336 = TouchSensor()
TouchSensor1336.setDescription("HAnimJoint r_wrist, HAnimSegment r_hand")

HAnimSegment1335.addChildren(TouchSensor1336)
Transform1337 = Transform()
Transform1337.setTranslation([-0.1984,0.8663,-0.0583])
Shape1338 = Shape()
Shape1338.setUSE("HAnimJointShape")

Transform1337.addChildren(Shape1338)

HAnimSegment1335.addChildren(Transform1337)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape1339 = Shape()
LineSet1340 = LineSet()
LineSet1340.setVertexCount([2])
Coordinate1341 = Coordinate()
Coordinate1341.setPoint([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])

LineSet1340.setCoord(Coordinate1341)
ColorRGBA1342 = ColorRGBA()
ColorRGBA1342.setUSE("HAnimSegmentLineColorRGBA")

LineSet1340.setColor(ColorRGBA1342)

Shape1339.setGeometry(LineSet1340)

HAnimSegment1335.addChildren(Shape1339)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape1343 = Shape()
LineSet1344 = LineSet()
LineSet1344.setVertexCount([2])
Coordinate1345 = Coordinate()
Coordinate1345.setPoint([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])

LineSet1344.setCoord(Coordinate1345)
ColorRGBA1346 = ColorRGBA()
ColorRGBA1346.setUSE("HAnimSegmentLineColorRGBA")

LineSet1344.setColor(ColorRGBA1346)

Shape1343.setGeometry(LineSet1344)

HAnimSegment1335.addChildren(Shape1343)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape1347 = Shape()
LineSet1348 = LineSet()
LineSet1348.setVertexCount([2])
Coordinate1349 = Coordinate()
Coordinate1349.setPoint([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])

LineSet1348.setCoord(Coordinate1349)
ColorRGBA1350 = ColorRGBA()
ColorRGBA1350.setUSE("HAnimSegmentLineColorRGBA")

LineSet1348.setColor(ColorRGBA1350)

Shape1347.setGeometry(LineSet1348)

HAnimSegment1335.addChildren(Shape1347)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape1351 = Shape()
LineSet1352 = LineSet()
LineSet1352.setVertexCount([2])
Coordinate1353 = Coordinate()
Coordinate1353.setPoint([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])

LineSet1352.setCoord(Coordinate1353)
ColorRGBA1354 = ColorRGBA()
ColorRGBA1354.setUSE("HAnimSegmentLineColorRGBA")

LineSet1352.setColor(ColorRGBA1354)

Shape1351.setGeometry(LineSet1352)

HAnimSegment1335.addChildren(Shape1351)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape1355 = Shape()
LineSet1356 = LineSet()
LineSet1356.setVertexCount([2])
Coordinate1357 = Coordinate()
Coordinate1357.setPoint([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])

LineSet1356.setCoord(Coordinate1357)
ColorRGBA1358 = ColorRGBA()
ColorRGBA1358.setUSE("HAnimSegmentLineColorRGBA")

LineSet1356.setColor(ColorRGBA1358)

Shape1355.setGeometry(LineSet1356)

HAnimSegment1335.addChildren(Shape1355)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape1359 = Shape()
LineSet1360 = LineSet()
LineSet1360.setVertexCount([2])
Coordinate1361 = Coordinate()
Coordinate1361.setPoint([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])

LineSet1360.setCoord(Coordinate1361)
ColorRGBA1362 = ColorRGBA()
ColorRGBA1362.setUSE("HAnimSiteLineColorRGBA")

LineSet1360.setColor(ColorRGBA1362)

Shape1359.setGeometry(LineSet1360)

HAnimSegment1335.addChildren(Shape1359)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape1363 = Shape()
LineSet1364 = LineSet()
LineSet1364.setVertexCount([2])
Coordinate1365 = Coordinate()
Coordinate1365.setPoint([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])

LineSet1364.setCoord(Coordinate1365)
ColorRGBA1366 = ColorRGBA()
ColorRGBA1366.setUSE("HAnimSiteLineColorRGBA")

LineSet1364.setColor(ColorRGBA1366)

Shape1363.setGeometry(LineSet1364)

HAnimSegment1335.addChildren(Shape1363)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape1367 = Shape()
LineSet1368 = LineSet()
LineSet1368.setVertexCount([2])
Coordinate1369 = Coordinate()
Coordinate1369.setPoint([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])

LineSet1368.setCoord(Coordinate1369)
ColorRGBA1370 = ColorRGBA()
ColorRGBA1370.setUSE("HAnimSiteLineColorRGBA")

LineSet1368.setColor(ColorRGBA1370)

Shape1367.setGeometry(LineSet1368)

HAnimSegment1335.addChildren(Shape1367)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape1371 = Shape()
LineSet1372 = LineSet()
LineSet1372.setVertexCount([2])
Coordinate1373 = Coordinate()
Coordinate1373.setPoint([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])

LineSet1372.setCoord(Coordinate1373)
ColorRGBA1374 = ColorRGBA()
ColorRGBA1374.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1372.setColor(ColorRGBA1374)

Shape1371.setGeometry(LineSet1372)

HAnimSegment1335.addChildren(Shape1371)
HAnimSite1375 = HAnimSite()
HAnimSite1375.setName("r_metacarpal_pha2_pt")
HAnimSite1375.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite1375.setTranslation([-0.1977,0.8169,-0.0177])
#HAnimSite visualization shape
TouchSensor1376 = TouchSensor()
TouchSensor1376.setDescription("HAnimSite r_metacarpal_pha2")

HAnimSite1375.addChildren(TouchSensor1376)
Shape1377 = Shape()
Shape1377.setUSE("HAnimSiteShape")

HAnimSite1375.addChildren(Shape1377)

HAnimSegment1335.addChildren(HAnimSite1375)
HAnimSite1378 = HAnimSite()
HAnimSite1378.setName("r_ulnar_styloid_pt")
HAnimSite1378.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1378.setTranslation([-0.2117,0.8562,-0.0584])
#HAnimSite visualization shape
TouchSensor1379 = TouchSensor()
TouchSensor1379.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite1378.addChildren(TouchSensor1379)
Shape1380 = Shape()
Shape1380.setUSE("HAnimSiteShape")

HAnimSite1378.addChildren(Shape1380)

HAnimSegment1335.addChildren(HAnimSite1378)
HAnimSite1381 = HAnimSite()
HAnimSite1381.setName("r_metacarpal_pha5_pt")
HAnimSite1381.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite1381.setTranslation([-0.1929,0.789,-0.1064])
#HAnimSite visualization shape
TouchSensor1382 = TouchSensor()
TouchSensor1382.setDescription("HAnimSite r_metacarpal_pha5")

HAnimSite1381.addChildren(TouchSensor1382)
Shape1383 = Shape()
Shape1383.setUSE("HAnimSiteShape")

HAnimSite1381.addChildren(Shape1383)

HAnimSegment1335.addChildren(HAnimSite1381)
HAnimSite1384 = HAnimSite()
HAnimSite1384.setName("r_hand_front_view")
HAnimSite1384.setDEF("hanim_r_hand_front_view")
HAnimSite1384.setTranslation([-0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1385 = TouchSensor()
TouchSensor1385.setDescription("HAnimSite r_hand_front_view")

HAnimSite1384.addChildren(TouchSensor1385)
Shape1386 = Shape()
Shape1386.setUSE("HAnimSiteShape")

HAnimSite1384.addChildren(Shape1386)
Viewpoint1387 = Viewpoint()
Viewpoint1387.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1387.setCenterOfRotation([0,0.7,0])
Viewpoint1387.setDescription("right hand front")
Viewpoint1387.setPosition([0,0,0])

HAnimSite1384.addChildren(Viewpoint1387)
#HAnimSite/Viewpoint visualization shape
Anchor1388 = Anchor()
Anchor1388.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1388.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1389 = LOD()
LOD1389.setForceTransitions(True)
LOD1389.setRange([0.04])
WorldInfo1390 = WorldInfo()
WorldInfo1390.setInfo(["hide diamond when close"])

LOD1389.addChildren(WorldInfo1390)
Shape1391 = Shape()
Shape1391.setUSE("HAnimSiteViewpointShape")

LOD1389.addChildren(Shape1391)

Anchor1388.addChildren(LOD1389)

HAnimSite1384.addChildren(Anchor1388)

HAnimSegment1335.addChildren(HAnimSite1384)

HAnimJoint1334.addChildren(HAnimSegment1335)
HAnimJoint1392 = HAnimJoint()
HAnimJoint1392.setName("r_thumb1")
HAnimJoint1392.setDEF("hanim_r_thumb1")
HAnimJoint1392.setCenter([-0.1924,0.8472,-0.0534])
HAnimJoint1392.setUlimit([0,0,0])
HAnimJoint1392.setLlimit([0,0,0])
HAnimJoint1392.setStiffness([0,0,0])
HAnimSegment1393 = HAnimSegment()
HAnimSegment1393.setName("r_thumb_metacarpal")
HAnimSegment1393.setDEF("hanim_r_thumb_metacarpal")
#<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor1394 = TouchSensor()
TouchSensor1394.setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")

HAnimSegment1393.addChildren(TouchSensor1394)
Transform1395 = Transform()
Transform1395.setTranslation([-0.1924,0.8472,-0.0534])
Shape1396 = Shape()
Shape1396.setUSE("HAnimJointShape")

Transform1395.addChildren(Shape1396)

HAnimSegment1393.addChildren(Transform1395)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape1397 = Shape()
LineSet1398 = LineSet()
LineSet1398.setVertexCount([2])
Coordinate1399 = Coordinate()
Coordinate1399.setPoint([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])

LineSet1398.setCoord(Coordinate1399)
ColorRGBA1400 = ColorRGBA()
ColorRGBA1400.setUSE("HAnimSegmentLineColorRGBA")

LineSet1398.setColor(ColorRGBA1400)

Shape1397.setGeometry(LineSet1398)

HAnimSegment1393.addChildren(Shape1397)

HAnimJoint1392.addChildren(HAnimSegment1393)
HAnimJoint1401 = HAnimJoint()
HAnimJoint1401.setName("r_thumb2")
HAnimJoint1401.setDEF("hanim_r_thumb2")
HAnimJoint1401.setCenter([-0.1951,0.8226,0.0246])
HAnimJoint1401.setUlimit([0,0,0])
HAnimJoint1401.setLlimit([0,0,0])
HAnimJoint1401.setStiffness([0,0,0])
HAnimSegment1402 = HAnimSegment()
HAnimSegment1402.setName("r_thumb_proximal")
HAnimSegment1402.setDEF("hanim_r_thumb_proximal")
#<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor1403 = TouchSensor()
TouchSensor1403.setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")

HAnimSegment1402.addChildren(TouchSensor1403)
Transform1404 = Transform()
Transform1404.setTranslation([-0.1951,0.8226,0.0246])
Shape1405 = Shape()
Shape1405.setUSE("HAnimJointShape")

Transform1404.addChildren(Shape1405)

HAnimSegment1402.addChildren(Transform1404)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape1406 = Shape()
LineSet1407 = LineSet()
LineSet1407.setVertexCount([2])
Coordinate1408 = Coordinate()
Coordinate1408.setPoint([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])

LineSet1407.setCoord(Coordinate1408)
ColorRGBA1409 = ColorRGBA()
ColorRGBA1409.setUSE("HAnimSegmentLineColorRGBA")

LineSet1407.setColor(ColorRGBA1409)

Shape1406.setGeometry(LineSet1407)

HAnimSegment1402.addChildren(Shape1406)

HAnimJoint1401.addChildren(HAnimSegment1402)
HAnimJoint1410 = HAnimJoint()
HAnimJoint1410.setName("r_thumb3")
HAnimJoint1410.setDEF("hanim_r_thumb3")
HAnimJoint1410.setCenter([-0.1955,0.8159,0.0464])
HAnimJoint1410.setUlimit([0,0,0])
HAnimJoint1410.setLlimit([0,0,0])
HAnimJoint1410.setStiffness([0,0,0])
HAnimSegment1411 = HAnimSegment()
HAnimSegment1411.setName("r_thumb_distal")
HAnimSegment1411.setDEF("hanim_r_thumb_distal")
#<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
TouchSensor1412 = TouchSensor()
TouchSensor1412.setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")

HAnimSegment1411.addChildren(TouchSensor1412)
Transform1413 = Transform()
Transform1413.setTranslation([-0.1955,0.8159,0.0464])
Shape1414 = Shape()
Shape1414.setUSE("HAnimJointShape")

Transform1413.addChildren(Shape1414)

HAnimSegment1411.addChildren(Transform1413)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape1415 = Shape()
LineSet1416 = LineSet()
LineSet1416.setVertexCount([2])
Coordinate1417 = Coordinate()
Coordinate1417.setPoint([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])

LineSet1416.setCoord(Coordinate1417)
ColorRGBA1418 = ColorRGBA()
ColorRGBA1418.setUSE("HAnimSiteLineColorRGBA")

LineSet1416.setColor(ColorRGBA1418)

Shape1415.setGeometry(LineSet1416)

HAnimSegment1411.addChildren(Shape1415)
HAnimSite1419 = HAnimSite()
HAnimSite1419.setName("r_thumb_distal_tip")
HAnimSite1419.setDEF("hanim_r_thumb_distal_tip")
HAnimSite1419.setTranslation([-0.1869,0.809,0.082])
#HAnimSite visualization shape
TouchSensor1420 = TouchSensor()
TouchSensor1420.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1419.addChildren(TouchSensor1420)
Shape1421 = Shape()
Shape1421.setUSE("HAnimSiteShape")

HAnimSite1419.addChildren(Shape1421)

HAnimSegment1411.addChildren(HAnimSite1419)

HAnimJoint1410.addChildren(HAnimSegment1411)

HAnimJoint1401.addChildren(HAnimJoint1410)

HAnimJoint1392.addChildren(HAnimJoint1401)

HAnimJoint1334.addChildren(HAnimJoint1392)
HAnimJoint1422 = HAnimJoint()
HAnimJoint1422.setName("r_index0")
HAnimJoint1422.setDEF("hanim_r_index0")
HAnimJoint1422.setCenter([-0.1983,0.8024,-0.028])
HAnimJoint1422.setUlimit([0,0,0])
HAnimJoint1422.setLlimit([0,0,0])
HAnimJoint1422.setStiffness([0,0,0])
HAnimSegment1423 = HAnimSegment()
HAnimSegment1423.setName("r_index_metacarpal")
HAnimSegment1423.setDEF("hanim_r_index_metacarpal")
#<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor1424 = TouchSensor()
TouchSensor1424.setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")

HAnimSegment1423.addChildren(TouchSensor1424)
Transform1425 = Transform()
Transform1425.setTranslation([-0.1983,0.8024,-0.028])
Shape1426 = Shape()
Shape1426.setUSE("HAnimJointShape")

Transform1425.addChildren(Shape1426)

HAnimSegment1423.addChildren(Transform1425)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape1427 = Shape()
LineSet1428 = LineSet()
LineSet1428.setVertexCount([2])
Coordinate1429 = Coordinate()
Coordinate1429.setPoint([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])

LineSet1428.setCoord(Coordinate1429)
ColorRGBA1430 = ColorRGBA()
ColorRGBA1430.setUSE("HAnimSegmentLineColorRGBA")

LineSet1428.setColor(ColorRGBA1430)

Shape1427.setGeometry(LineSet1428)

HAnimSegment1423.addChildren(Shape1427)

HAnimJoint1422.addChildren(HAnimSegment1423)
HAnimJoint1431 = HAnimJoint()
HAnimJoint1431.setName("r_index1")
HAnimJoint1431.setDEF("hanim_r_index1")
HAnimJoint1431.setCenter([-0.1983,0.7815,-0.028])
HAnimJoint1431.setUlimit([0,0,0])
HAnimJoint1431.setLlimit([0,0,0])
HAnimJoint1431.setStiffness([0,0,0])
HAnimSegment1432 = HAnimSegment()
HAnimSegment1432.setName("r_index_proximal")
HAnimSegment1432.setDEF("hanim_r_index_proximal")
#<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
TouchSensor1433 = TouchSensor()
TouchSensor1433.setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal")

HAnimSegment1432.addChildren(TouchSensor1433)
Transform1434 = Transform()
Transform1434.setTranslation([-0.1983,0.7815,-0.028])
Shape1435 = Shape()
Shape1435.setUSE("HAnimJointShape")

Transform1434.addChildren(Shape1435)

HAnimSegment1432.addChildren(Transform1434)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape1436 = Shape()
LineSet1437 = LineSet()
LineSet1437.setVertexCount([2])
Coordinate1438 = Coordinate()
Coordinate1438.setPoint([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])

LineSet1437.setCoord(Coordinate1438)
ColorRGBA1439 = ColorRGBA()
ColorRGBA1439.setUSE("HAnimSegmentLineColorRGBA")

LineSet1437.setColor(ColorRGBA1439)

Shape1436.setGeometry(LineSet1437)

HAnimSegment1432.addChildren(Shape1436)

HAnimJoint1431.addChildren(HAnimSegment1432)
HAnimJoint1440 = HAnimJoint()
HAnimJoint1440.setName("r_index2")
HAnimJoint1440.setDEF("hanim_r_index2")
HAnimJoint1440.setCenter([-0.2017,0.7363,-0.0248])
HAnimJoint1440.setUlimit([0,0,0])
HAnimJoint1440.setLlimit([0,0,0])
HAnimJoint1440.setStiffness([0,0,0])
HAnimSegment1441 = HAnimSegment()
HAnimSegment1441.setName("r_index_middle")
HAnimSegment1441.setDEF("hanim_r_index_middle")
#<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
TouchSensor1442 = TouchSensor()
TouchSensor1442.setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle")

HAnimSegment1441.addChildren(TouchSensor1442)
Transform1443 = Transform()
Transform1443.setTranslation([-0.2017,0.7363,-0.0248])
Shape1444 = Shape()
Shape1444.setUSE("HAnimJointShape")

Transform1443.addChildren(Shape1444)

HAnimSegment1441.addChildren(Transform1443)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape1445 = Shape()
LineSet1446 = LineSet()
LineSet1446.setVertexCount([2])
Coordinate1447 = Coordinate()
Coordinate1447.setPoint([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])

LineSet1446.setCoord(Coordinate1447)
ColorRGBA1448 = ColorRGBA()
ColorRGBA1448.setUSE("HAnimSegmentLineColorRGBA")

LineSet1446.setColor(ColorRGBA1448)

Shape1445.setGeometry(LineSet1446)

HAnimSegment1441.addChildren(Shape1445)

HAnimJoint1440.addChildren(HAnimSegment1441)
HAnimJoint1449 = HAnimJoint()
HAnimJoint1449.setName("r_index3")
HAnimJoint1449.setDEF("hanim_r_index3")
HAnimJoint1449.setCenter([-0.2028,0.7139,-0.0236])
HAnimJoint1449.setUlimit([0,0,0])
HAnimJoint1449.setLlimit([0,0,0])
HAnimJoint1449.setStiffness([0,0,0])
HAnimSegment1450 = HAnimSegment()
HAnimSegment1450.setName("r_index_distal")
HAnimSegment1450.setDEF("hanim_r_index_distal")
#<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
TouchSensor1451 = TouchSensor()
TouchSensor1451.setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal")

HAnimSegment1450.addChildren(TouchSensor1451)
Transform1452 = Transform()
Transform1452.setTranslation([-0.2028,0.7139,-0.0236])
Shape1453 = Shape()
Shape1453.setUSE("HAnimJointShape")

Transform1452.addChildren(Shape1453)

HAnimSegment1450.addChildren(Transform1452)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape1454 = Shape()
LineSet1455 = LineSet()
LineSet1455.setVertexCount([2])
Coordinate1456 = Coordinate()
Coordinate1456.setPoint([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])

LineSet1455.setCoord(Coordinate1456)
ColorRGBA1457 = ColorRGBA()
ColorRGBA1457.setUSE("HAnimSiteLineColorRGBA")

LineSet1455.setColor(ColorRGBA1457)

Shape1454.setGeometry(LineSet1455)

HAnimSegment1450.addChildren(Shape1454)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape1458 = Shape()
LineSet1459 = LineSet()
LineSet1459.setVertexCount([2])
Coordinate1460 = Coordinate()
Coordinate1460.setPoint([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])

LineSet1459.setCoord(Coordinate1460)
ColorRGBA1461 = ColorRGBA()
ColorRGBA1461.setUSE("HAnimSiteLineColorRGBA")

LineSet1459.setColor(ColorRGBA1461)

Shape1458.setGeometry(LineSet1459)

HAnimSegment1450.addChildren(Shape1458)
HAnimSite1462 = HAnimSite()
HAnimSite1462.setName("r_index_distal_tip")
HAnimSite1462.setDEF("hanim_r_index_distal_tip")
HAnimSite1462.setTranslation([-0.198,0.6883,-0.018])
#HAnimSite visualization shape
TouchSensor1463 = TouchSensor()
TouchSensor1463.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1462.addChildren(TouchSensor1463)
Shape1464 = Shape()
Shape1464.setUSE("HAnimSiteShape")

HAnimSite1462.addChildren(Shape1464)

HAnimSegment1450.addChildren(HAnimSite1462)
HAnimSite1465 = HAnimSite()
HAnimSite1465.setName("r_dactylion_pt")
HAnimSite1465.setDEF("hanim_r_dactylion_pt")
HAnimSite1465.setTranslation([-0.1941,0.6772,-0.0423])
#HAnimSite visualization shape
TouchSensor1466 = TouchSensor()
TouchSensor1466.setDescription("HAnimSite r_dactylion")

HAnimSite1465.addChildren(TouchSensor1466)
Shape1467 = Shape()
Shape1467.setUSE("HAnimSiteShape")

HAnimSite1465.addChildren(Shape1467)

HAnimSegment1450.addChildren(HAnimSite1465)

HAnimJoint1449.addChildren(HAnimSegment1450)

HAnimJoint1440.addChildren(HAnimJoint1449)

HAnimJoint1431.addChildren(HAnimJoint1440)

HAnimJoint1422.addChildren(HAnimJoint1431)

HAnimJoint1334.addChildren(HAnimJoint1422)
HAnimJoint1468 = HAnimJoint()
HAnimJoint1468.setName("r_middle0")
HAnimJoint1468.setDEF("hanim_r_middle0")
HAnimJoint1468.setCenter([-0.1987,0.8029,-0.053])
HAnimJoint1468.setUlimit([0,0,0])
HAnimJoint1468.setLlimit([0,0,0])
HAnimJoint1468.setStiffness([0,0,0])
HAnimSegment1469 = HAnimSegment()
HAnimSegment1469.setName("r_middle_metacarpal")
HAnimSegment1469.setDEF("hanim_r_middle_metacarpal")
#<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor1470 = TouchSensor()
TouchSensor1470.setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")

HAnimSegment1469.addChildren(TouchSensor1470)
Transform1471 = Transform()
Transform1471.setTranslation([-0.1987,0.8029,-0.053])
Shape1472 = Shape()
Shape1472.setUSE("HAnimJointShape")

Transform1471.addChildren(Shape1472)

HAnimSegment1469.addChildren(Transform1471)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape1473 = Shape()
LineSet1474 = LineSet()
LineSet1474.setVertexCount([2])
Coordinate1475 = Coordinate()
Coordinate1475.setPoint([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])

LineSet1474.setCoord(Coordinate1475)
ColorRGBA1476 = ColorRGBA()
ColorRGBA1476.setUSE("HAnimSegmentLineColorRGBA")

LineSet1474.setColor(ColorRGBA1476)

Shape1473.setGeometry(LineSet1474)

HAnimSegment1469.addChildren(Shape1473)

HAnimJoint1468.addChildren(HAnimSegment1469)
HAnimJoint1477 = HAnimJoint()
HAnimJoint1477.setName("r_middle1")
HAnimJoint1477.setDEF("hanim_r_middle1")
HAnimJoint1477.setCenter([-0.1987,0.7818,-0.053])
HAnimJoint1477.setUlimit([0,0,0])
HAnimJoint1477.setLlimit([0,0,0])
HAnimJoint1477.setStiffness([0,0,0])
HAnimSegment1478 = HAnimSegment()
HAnimSegment1478.setName("r_middle_proximal")
HAnimSegment1478.setDEF("hanim_r_middle_proximal")
#<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
TouchSensor1479 = TouchSensor()
TouchSensor1479.setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")

HAnimSegment1478.addChildren(TouchSensor1479)
Transform1480 = Transform()
Transform1480.setTranslation([-0.1987,0.7818,-0.053])
Shape1481 = Shape()
Shape1481.setUSE("HAnimJointShape")

Transform1480.addChildren(Shape1481)

HAnimSegment1478.addChildren(Transform1480)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape1482 = Shape()
LineSet1483 = LineSet()
LineSet1483.setVertexCount([2])
Coordinate1484 = Coordinate()
Coordinate1484.setPoint([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])

LineSet1483.setCoord(Coordinate1484)
ColorRGBA1485 = ColorRGBA()
ColorRGBA1485.setUSE("HAnimSegmentLineColorRGBA")

LineSet1483.setColor(ColorRGBA1485)

Shape1482.setGeometry(LineSet1483)

HAnimSegment1478.addChildren(Shape1482)

HAnimJoint1477.addChildren(HAnimSegment1478)
HAnimJoint1486 = HAnimJoint()
HAnimJoint1486.setName("r_middle2")
HAnimJoint1486.setDEF("hanim_r_middle2")
HAnimJoint1486.setCenter([-0.2013,0.7273,-0.0503])
HAnimJoint1486.setUlimit([0,0,0])
HAnimJoint1486.setLlimit([0,0,0])
HAnimJoint1486.setStiffness([0,0,0])
HAnimSegment1487 = HAnimSegment()
HAnimSegment1487.setName("r_middle_middle")
HAnimSegment1487.setDEF("hanim_r_middle_middle")
#<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
TouchSensor1488 = TouchSensor()
TouchSensor1488.setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle")

HAnimSegment1487.addChildren(TouchSensor1488)
Transform1489 = Transform()
Transform1489.setTranslation([-0.2013,0.7273,-0.0503])
Shape1490 = Shape()
Shape1490.setUSE("HAnimJointShape")

Transform1489.addChildren(Shape1490)

HAnimSegment1487.addChildren(Transform1489)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape1491 = Shape()
LineSet1492 = LineSet()
LineSet1492.setVertexCount([2])
Coordinate1493 = Coordinate()
Coordinate1493.setPoint([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])

LineSet1492.setCoord(Coordinate1493)
ColorRGBA1494 = ColorRGBA()
ColorRGBA1494.setUSE("HAnimSegmentLineColorRGBA")

LineSet1492.setColor(ColorRGBA1494)

Shape1491.setGeometry(LineSet1492)

HAnimSegment1487.addChildren(Shape1491)

HAnimJoint1486.addChildren(HAnimSegment1487)
HAnimJoint1495 = HAnimJoint()
HAnimJoint1495.setName("r_middle3")
HAnimJoint1495.setDEF("hanim_r_middle3")
HAnimJoint1495.setCenter([-0.2026,0.7011,-0.0494])
HAnimJoint1495.setUlimit([0,0,0])
HAnimJoint1495.setLlimit([0,0,0])
HAnimJoint1495.setStiffness([0,0,0])
HAnimSegment1496 = HAnimSegment()
HAnimSegment1496.setName("r_middle_distal")
HAnimSegment1496.setDEF("hanim_r_middle_distal")
#<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
TouchSensor1497 = TouchSensor()
TouchSensor1497.setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal")

HAnimSegment1496.addChildren(TouchSensor1497)
Transform1498 = Transform()
Transform1498.setTranslation([-0.2026,0.7011,-0.0494])
Shape1499 = Shape()
Shape1499.setUSE("HAnimJointShape")

Transform1498.addChildren(Shape1499)

HAnimSegment1496.addChildren(Transform1498)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape1500 = Shape()
LineSet1501 = LineSet()
LineSet1501.setVertexCount([2])
Coordinate1502 = Coordinate()
Coordinate1502.setPoint([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])

LineSet1501.setCoord(Coordinate1502)
ColorRGBA1503 = ColorRGBA()
ColorRGBA1503.setUSE("HAnimSiteLineColorRGBA")

LineSet1501.setColor(ColorRGBA1503)

Shape1500.setGeometry(LineSet1501)

HAnimSegment1496.addChildren(Shape1500)
HAnimSite1504 = HAnimSite()
HAnimSite1504.setName("r_middle_distal_tip")
HAnimSite1504.setDEF("hanim_r_middle_distal_tip")
HAnimSite1504.setTranslation([-0.1969,0.6758,-0.0427])
#HAnimSite visualization shape
TouchSensor1505 = TouchSensor()
TouchSensor1505.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1504.addChildren(TouchSensor1505)
Shape1506 = Shape()
Shape1506.setUSE("HAnimSiteShape")

HAnimSite1504.addChildren(Shape1506)

HAnimSegment1496.addChildren(HAnimSite1504)

HAnimJoint1495.addChildren(HAnimSegment1496)

HAnimJoint1486.addChildren(HAnimJoint1495)

HAnimJoint1477.addChildren(HAnimJoint1486)

HAnimJoint1468.addChildren(HAnimJoint1477)

HAnimJoint1334.addChildren(HAnimJoint1468)
HAnimJoint1507 = HAnimJoint()
HAnimJoint1507.setName("r_ring0")
HAnimJoint1507.setDEF("hanim_r_ring0")
HAnimJoint1507.setCenter([-0.1956,0.8019,-0.0794])
HAnimJoint1507.setUlimit([0,0,0])
HAnimJoint1507.setLlimit([0,0,0])
HAnimJoint1507.setStiffness([0,0,0])
HAnimSegment1508 = HAnimSegment()
HAnimSegment1508.setName("r_ring_metacarpal")
HAnimSegment1508.setDEF("hanim_r_ring_metacarpal")
#<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor1509 = TouchSensor()
TouchSensor1509.setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")

HAnimSegment1508.addChildren(TouchSensor1509)
Transform1510 = Transform()
Transform1510.setTranslation([-0.1956,0.8019,-0.0794])
Shape1511 = Shape()
Shape1511.setUSE("HAnimJointShape")

Transform1510.addChildren(Shape1511)

HAnimSegment1508.addChildren(Transform1510)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape1512 = Shape()
LineSet1513 = LineSet()
LineSet1513.setVertexCount([2])
Coordinate1514 = Coordinate()
Coordinate1514.setPoint([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])

LineSet1513.setCoord(Coordinate1514)
ColorRGBA1515 = ColorRGBA()
ColorRGBA1515.setUSE("HAnimSegmentLineColorRGBA")

LineSet1513.setColor(ColorRGBA1515)

Shape1512.setGeometry(LineSet1513)

HAnimSegment1508.addChildren(Shape1512)

HAnimJoint1507.addChildren(HAnimSegment1508)
HAnimJoint1516 = HAnimJoint()
HAnimJoint1516.setName("r_ring1")
HAnimJoint1516.setDEF("hanim_r_ring1")
HAnimJoint1516.setCenter([-0.1956,0.7815,-0.0794])
HAnimJoint1516.setUlimit([0,0,0])
HAnimJoint1516.setLlimit([0,0,0])
HAnimJoint1516.setStiffness([0,0,0])
HAnimSegment1517 = HAnimSegment()
HAnimSegment1517.setName("r_ring_proximal")
HAnimSegment1517.setDEF("hanim_r_ring_proximal")
#<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
TouchSensor1518 = TouchSensor()
TouchSensor1518.setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")

HAnimSegment1517.addChildren(TouchSensor1518)
Transform1519 = Transform()
Transform1519.setTranslation([-0.1956,0.7815,-0.0794])
Shape1520 = Shape()
Shape1520.setUSE("HAnimJointShape")

Transform1519.addChildren(Shape1520)

HAnimSegment1517.addChildren(Transform1519)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape1521 = Shape()
LineSet1522 = LineSet()
LineSet1522.setVertexCount([2])
Coordinate1523 = Coordinate()
Coordinate1523.setPoint([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])

LineSet1522.setCoord(Coordinate1523)
ColorRGBA1524 = ColorRGBA()
ColorRGBA1524.setUSE("HAnimSegmentLineColorRGBA")

LineSet1522.setColor(ColorRGBA1524)

Shape1521.setGeometry(LineSet1522)

HAnimSegment1517.addChildren(Shape1521)

HAnimJoint1516.addChildren(HAnimSegment1517)
HAnimJoint1525 = HAnimJoint()
HAnimJoint1525.setName("r_ring2")
HAnimJoint1525.setDEF("hanim_r_ring2")
HAnimJoint1525.setCenter([-0.1973,0.7287,-0.0777])
HAnimJoint1525.setUlimit([0,0,0])
HAnimJoint1525.setLlimit([0,0,0])
HAnimJoint1525.setStiffness([0,0,0])
HAnimSegment1526 = HAnimSegment()
HAnimSegment1526.setName("r_ring_middle")
HAnimSegment1526.setDEF("hanim_r_ring_middle")
#<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
TouchSensor1527 = TouchSensor()
TouchSensor1527.setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle")

HAnimSegment1526.addChildren(TouchSensor1527)
Transform1528 = Transform()
Transform1528.setTranslation([-0.1973,0.7287,-0.0777])
Shape1529 = Shape()
Shape1529.setUSE("HAnimJointShape")

Transform1528.addChildren(Shape1529)

HAnimSegment1526.addChildren(Transform1528)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape1530 = Shape()
LineSet1531 = LineSet()
LineSet1531.setVertexCount([2])
Coordinate1532 = Coordinate()
Coordinate1532.setPoint([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])

LineSet1531.setCoord(Coordinate1532)
ColorRGBA1533 = ColorRGBA()
ColorRGBA1533.setUSE("HAnimSegmentLineColorRGBA")

LineSet1531.setColor(ColorRGBA1533)

Shape1530.setGeometry(LineSet1531)

HAnimSegment1526.addChildren(Shape1530)

HAnimJoint1525.addChildren(HAnimSegment1526)
HAnimJoint1534 = HAnimJoint()
HAnimJoint1534.setName("r_ring3")
HAnimJoint1534.setDEF("hanim_r_ring3")
HAnimJoint1534.setCenter([-0.1983,0.7045,-0.0767])
HAnimJoint1534.setUlimit([0,0,0])
HAnimJoint1534.setLlimit([0,0,0])
HAnimJoint1534.setStiffness([0,0,0])
HAnimSegment1535 = HAnimSegment()
HAnimSegment1535.setName("r_ring_distal")
HAnimSegment1535.setDEF("hanim_r_ring_distal")
#<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
TouchSensor1536 = TouchSensor()
TouchSensor1536.setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal")

HAnimSegment1535.addChildren(TouchSensor1536)
Transform1537 = Transform()
Transform1537.setTranslation([-0.1983,0.7045,-0.0767])
Shape1538 = Shape()
Shape1538.setUSE("HAnimJointShape")

Transform1537.addChildren(Shape1538)

HAnimSegment1535.addChildren(Transform1537)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape1539 = Shape()
LineSet1540 = LineSet()
LineSet1540.setVertexCount([2])
Coordinate1541 = Coordinate()
Coordinate1541.setPoint([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])

LineSet1540.setCoord(Coordinate1541)
ColorRGBA1542 = ColorRGBA()
ColorRGBA1542.setUSE("HAnimSiteLineColorRGBA")

LineSet1540.setColor(ColorRGBA1542)

Shape1539.setGeometry(LineSet1540)

HAnimSegment1535.addChildren(Shape1539)
HAnimSite1543 = HAnimSite()
HAnimSite1543.setName("r_ring_distal_tip")
HAnimSite1543.setDEF("hanim_r_ring_distal_tip")
HAnimSite1543.setTranslation([-0.1934,0.6778,-0.0693])
#HAnimSite visualization shape
TouchSensor1544 = TouchSensor()
TouchSensor1544.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1543.addChildren(TouchSensor1544)
Shape1545 = Shape()
Shape1545.setUSE("HAnimSiteShape")

HAnimSite1543.addChildren(Shape1545)

HAnimSegment1535.addChildren(HAnimSite1543)

HAnimJoint1534.addChildren(HAnimSegment1535)

HAnimJoint1525.addChildren(HAnimJoint1534)

HAnimJoint1516.addChildren(HAnimJoint1525)

HAnimJoint1507.addChildren(HAnimJoint1516)

HAnimJoint1334.addChildren(HAnimJoint1507)
HAnimJoint1546 = HAnimJoint()
HAnimJoint1546.setName("r_pinky0")
HAnimJoint1546.setDEF("hanim_r_pinky0")
HAnimJoint1546.setCenter([-0.1925,0.8066,-0.1036])
HAnimJoint1546.setUlimit([0,0,0])
HAnimJoint1546.setLlimit([0,0,0])
HAnimJoint1546.setStiffness([0,0,0])
HAnimSegment1547 = HAnimSegment()
HAnimSegment1547.setName("r_pinky_metacarpal")
HAnimSegment1547.setDEF("hanim_r_pinky_metacarpal")
#<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor1548 = TouchSensor()
TouchSensor1548.setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")

HAnimSegment1547.addChildren(TouchSensor1548)
Transform1549 = Transform()
Transform1549.setTranslation([-0.1925,0.8066,-0.1036])
Shape1550 = Shape()
Shape1550.setUSE("HAnimJointShape")

Transform1549.addChildren(Shape1550)

HAnimSegment1547.addChildren(Transform1549)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape1551 = Shape()
LineSet1552 = LineSet()
LineSet1552.setVertexCount([2])
Coordinate1553 = Coordinate()
Coordinate1553.setPoint([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])

LineSet1552.setCoord(Coordinate1553)
ColorRGBA1554 = ColorRGBA()
ColorRGBA1554.setUSE("HAnimSegmentLineColorRGBA")

LineSet1552.setColor(ColorRGBA1554)

Shape1551.setGeometry(LineSet1552)

HAnimSegment1547.addChildren(Shape1551)

HAnimJoint1546.addChildren(HAnimSegment1547)
HAnimJoint1555 = HAnimJoint()
HAnimJoint1555.setName("r_pinky1")
HAnimJoint1555.setDEF("hanim_r_pinky1")
HAnimJoint1555.setCenter([-0.1925,0.7866,-0.1036])
HAnimJoint1555.setUlimit([0,0,0])
HAnimJoint1555.setLlimit([0,0,0])
HAnimJoint1555.setStiffness([0,0,0])
HAnimSegment1556 = HAnimSegment()
HAnimSegment1556.setName("r_pinky_proximal")
HAnimSegment1556.setDEF("hanim_r_pinky_proximal")
#<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor1557 = TouchSensor()
TouchSensor1557.setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")

HAnimSegment1556.addChildren(TouchSensor1557)
Transform1558 = Transform()
Transform1558.setTranslation([-0.1925,0.7866,-0.1036])
Shape1559 = Shape()
Shape1559.setUSE("HAnimJointShape")

Transform1558.addChildren(Shape1559)

HAnimSegment1556.addChildren(Transform1558)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape1560 = Shape()
LineSet1561 = LineSet()
LineSet1561.setVertexCount([2])
Coordinate1562 = Coordinate()
Coordinate1562.setPoint([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])

LineSet1561.setCoord(Coordinate1562)
ColorRGBA1563 = ColorRGBA()
ColorRGBA1563.setUSE("HAnimSegmentLineColorRGBA")

LineSet1561.setColor(ColorRGBA1563)

Shape1560.setGeometry(LineSet1561)

HAnimSegment1556.addChildren(Shape1560)

HAnimJoint1555.addChildren(HAnimSegment1556)
HAnimJoint1564 = HAnimJoint()
HAnimJoint1564.setName("r_pinky2")
HAnimJoint1564.setDEF("hanim_r_pinky2")
HAnimJoint1564.setCenter([-0.1938,0.7452,-0.1024])
HAnimJoint1564.setUlimit([0,0,0])
HAnimJoint1564.setLlimit([0,0,0])
HAnimJoint1564.setStiffness([0,0,0])
HAnimSegment1565 = HAnimSegment()
HAnimSegment1565.setName("r_pinky_middle")
HAnimSegment1565.setDEF("hanim_r_pinky_middle")
#<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
TouchSensor1566 = TouchSensor()
TouchSensor1566.setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")

HAnimSegment1565.addChildren(TouchSensor1566)
Transform1567 = Transform()
Transform1567.setTranslation([-0.1938,0.7452,-0.1024])
Shape1568 = Shape()
Shape1568.setUSE("HAnimJointShape")

Transform1567.addChildren(Shape1568)

HAnimSegment1565.addChildren(Transform1567)
#HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape1569 = Shape()
LineSet1570 = LineSet()
LineSet1570.setVertexCount([2])
Coordinate1571 = Coordinate()
Coordinate1571.setPoint([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])

LineSet1570.setCoord(Coordinate1571)
ColorRGBA1572 = ColorRGBA()
ColorRGBA1572.setUSE("HAnimSegmentLineColorRGBA")

LineSet1570.setColor(ColorRGBA1572)

Shape1569.setGeometry(LineSet1570)

HAnimSegment1565.addChildren(Shape1569)

HAnimJoint1564.addChildren(HAnimSegment1565)
HAnimJoint1573 = HAnimJoint()
HAnimJoint1573.setName("r_pinky3")
HAnimJoint1573.setDEF("hanim_r_pinky3")
HAnimJoint1573.setCenter([-0.1948,0.7277,-0.1017])
HAnimJoint1573.setUlimit([0,0,0])
HAnimJoint1573.setLlimit([0,0,0])
HAnimJoint1573.setStiffness([0,0,0])
HAnimSegment1574 = HAnimSegment()
HAnimSegment1574.setName("r_pinky_distal")
HAnimSegment1574.setDEF("hanim_r_pinky_distal")
#<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
TouchSensor1575 = TouchSensor()
TouchSensor1575.setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")

HAnimSegment1574.addChildren(TouchSensor1575)
Transform1576 = Transform()
Transform1576.setTranslation([-0.1948,0.7277,-0.1017])
Shape1577 = Shape()
Shape1577.setUSE("HAnimJointShape")

Transform1576.addChildren(Shape1577)

HAnimSegment1574.addChildren(Transform1576)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape1578 = Shape()
LineSet1579 = LineSet()
LineSet1579.setVertexCount([2])
Coordinate1580 = Coordinate()
Coordinate1580.setPoint([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])

LineSet1579.setCoord(Coordinate1580)
ColorRGBA1581 = ColorRGBA()
ColorRGBA1581.setUSE("HAnimSiteLineColorRGBA")

LineSet1579.setColor(ColorRGBA1581)

Shape1578.setGeometry(LineSet1579)

HAnimSegment1574.addChildren(Shape1578)
HAnimSite1582 = HAnimSite()
HAnimSite1582.setName("r_pinky_distal_tip")
HAnimSite1582.setDEF("hanim_r_pinky_distal_tip")
HAnimSite1582.setTranslation([-0.1938,0.7035,-0.0949])
#HAnimSite visualization shape
TouchSensor1583 = TouchSensor()
TouchSensor1583.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1582.addChildren(TouchSensor1583)
Shape1584 = Shape()
Shape1584.setUSE("HAnimSiteShape")

HAnimSite1582.addChildren(Shape1584)

HAnimSegment1574.addChildren(HAnimSite1582)

HAnimJoint1573.addChildren(HAnimSegment1574)

HAnimJoint1564.addChildren(HAnimJoint1573)

HAnimJoint1555.addChildren(HAnimJoint1564)

HAnimJoint1546.addChildren(HAnimJoint1555)

HAnimJoint1334.addChildren(HAnimJoint1546)

HAnimJoint1297.addChildren(HAnimJoint1334)

HAnimJoint1281.addChildren(HAnimJoint1297)

HAnimJoint1272.addChildren(HAnimJoint1281)

HAnimJoint1235.addChildren(HAnimJoint1272)

HAnimJoint597.addChildren(HAnimJoint1235)

HAnimJoint588.addChildren(HAnimJoint597)

HAnimJoint579.addChildren(HAnimJoint588)

HAnimJoint570.addChildren(HAnimJoint579)

HAnimJoint561.addChildren(HAnimJoint570)

HAnimJoint552.addChildren(HAnimJoint561)

HAnimJoint543.addChildren(HAnimJoint552)

HAnimJoint534.addChildren(HAnimJoint543)

HAnimJoint511.addChildren(HAnimJoint534)

HAnimJoint495.addChildren(HAnimJoint511)

HAnimJoint486.addChildren(HAnimJoint495)

HAnimJoint477.addChildren(HAnimJoint486)

HAnimJoint468.addChildren(HAnimJoint477)

HAnimJoint438.addChildren(HAnimJoint468)

HAnimJoint429.addChildren(HAnimJoint438)

HAnimJoint420.addChildren(HAnimJoint429)

HAnimJoint397.addChildren(HAnimJoint420)

HAnimJoint47.addChildren(HAnimJoint397)

HAnimHumanoid46.setSkeleton(HAnimJoint47)
HAnimSite1585 = HAnimSite()
HAnimSite1585.setName("l_inclined_view")
HAnimSite1585.setDEF("hanim_l_inclined_view")
HAnimSite1585.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite1585.setTranslation([1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1586 = TouchSensor()
TouchSensor1586.setDescription("HAnimSite l_inclined_view")

HAnimSite1585.addChildren(TouchSensor1586)
Shape1587 = Shape()
Shape1587.setUSE("HAnimSiteShape")

HAnimSite1585.addChildren(Shape1587)
Viewpoint1588 = Viewpoint()
Viewpoint1588.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1588.setDescription("left inclined")
Viewpoint1588.setPosition([0,0,0])

HAnimSite1585.addChildren(Viewpoint1588)
#HAnimSite/Viewpoint visualization shape
Anchor1589 = Anchor()
Anchor1589.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1589.setUrl(["#hanim_l_inclined_viewpoint"])
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

HAnimSite1585.addChildren(Anchor1589)

HAnimHumanoid46.addViewpoints(HAnimSite1585)
HAnimSite1593 = HAnimSite()
HAnimSite1593.setName("r_inclined_view")
HAnimSite1593.setDEF("hanim_r_inclined_view")
HAnimSite1593.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite1593.setTranslation([-1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1594 = TouchSensor()
TouchSensor1594.setDescription("HAnimSite r_inclined_view")

HAnimSite1593.addChildren(TouchSensor1594)
Shape1595 = Shape()
Shape1595.setUSE("HAnimSiteShape")

HAnimSite1593.addChildren(Shape1595)
Viewpoint1596 = Viewpoint()
Viewpoint1596.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1596.setCenterOfRotation([0,0.9,0])
Viewpoint1596.setDescription("right inclined")
Viewpoint1596.setPosition([0,0,0])

HAnimSite1593.addChildren(Viewpoint1596)
#HAnimSite/Viewpoint visualization shape
Anchor1597 = Anchor()
Anchor1597.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1597.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1598 = LOD()
LOD1598.setForceTransitions(True)
LOD1598.setRange([0.04])
WorldInfo1599 = WorldInfo()
WorldInfo1599.setInfo(["hide diamond when close"])

LOD1598.addChildren(WorldInfo1599)
Shape1600 = Shape()
Shape1600.setUSE("HAnimSiteViewpointShape")

LOD1598.addChildren(Shape1600)

Anchor1597.addChildren(LOD1598)

HAnimSite1593.addChildren(Anchor1597)

HAnimHumanoid46.addViewpoints(HAnimSite1593)
HAnimSite1601 = HAnimSite()
HAnimSite1601.setName("front_view")
HAnimSite1601.setDEF("hanim_front_view")
HAnimSite1601.setTranslation([0,0.85,2.58])
#HAnimSite visualization shape
TouchSensor1602 = TouchSensor()
TouchSensor1602.setDescription("HAnimSite front_view")

HAnimSite1601.addChildren(TouchSensor1602)
Shape1603 = Shape()
Shape1603.setUSE("HAnimSiteShape")

HAnimSite1601.addChildren(Shape1603)
Viewpoint1604 = Viewpoint()
Viewpoint1604.setDEF("hanim_front_viewpoint")
Viewpoint1604.setCenterOfRotation([0,0.9,0])
Viewpoint1604.setDescription("front")
Viewpoint1604.setPosition([0,0,0])

HAnimSite1601.addChildren(Viewpoint1604)
#HAnimSite/Viewpoint visualization shape
Anchor1605 = Anchor()
Anchor1605.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1605.setUrl(["#hanim_front_viewpoint"])
LOD1606 = LOD()
LOD1606.setForceTransitions(True)
LOD1606.setRange([0.04])
WorldInfo1607 = WorldInfo()
WorldInfo1607.setInfo(["hide diamond when close"])

LOD1606.addChildren(WorldInfo1607)
Shape1608 = Shape()
Shape1608.setUSE("HAnimSiteViewpointShape")

LOD1606.addChildren(Shape1608)

Anchor1605.addChildren(LOD1606)

HAnimSite1601.addChildren(Anchor1605)

HAnimHumanoid46.addViewpoints(HAnimSite1601)
HAnimSite1609 = HAnimSite()
HAnimSite1609.setName("back_view")
HAnimSite1609.setDEF("hanim_back_view")
HAnimSite1609.setRotation([0,1,0,3.14])
HAnimSite1609.setTranslation([0,0.85,-2.58])
#HAnimSite visualization shape
TouchSensor1610 = TouchSensor()
TouchSensor1610.setDescription("HAnimSite back_view")

HAnimSite1609.addChildren(TouchSensor1610)
Shape1611 = Shape()
Shape1611.setUSE("HAnimSiteShape")

HAnimSite1609.addChildren(Shape1611)
Viewpoint1612 = Viewpoint()
Viewpoint1612.setDEF("hanim_back_viewpoint")
Viewpoint1612.setCenterOfRotation([0,0.9,0])
Viewpoint1612.setDescription("back")
Viewpoint1612.setPosition([0,0,0])

HAnimSite1609.addChildren(Viewpoint1612)
#HAnimSite/Viewpoint visualization shape
Anchor1613 = Anchor()
Anchor1613.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1613.setUrl(["#hanim_back_viewpoint"])
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

HAnimSite1609.addChildren(Anchor1613)

HAnimHumanoid46.addViewpoints(HAnimSite1609)
HAnimSite1617 = HAnimSite()
HAnimSite1617.setName("l_side_view")
HAnimSite1617.setDEF("hanim_l_side_view")
HAnimSite1617.setRotation([0,1,0,1.5708])
HAnimSite1617.setTranslation([2.6,0.854,0])
#HAnimSite visualization shape
TouchSensor1618 = TouchSensor()
TouchSensor1618.setDescription("HAnimSite l_side_view")

HAnimSite1617.addChildren(TouchSensor1618)
Shape1619 = Shape()
Shape1619.setUSE("HAnimSiteShape")

HAnimSite1617.addChildren(Shape1619)
Viewpoint1620 = Viewpoint()
Viewpoint1620.setDEF("hanim_l_side_viewpoint")
Viewpoint1620.setCenterOfRotation([0,0.9,0])
Viewpoint1620.setDescription("left side")
Viewpoint1620.setPosition([0,0,0])

HAnimSite1617.addChildren(Viewpoint1620)
#HAnimSite/Viewpoint visualization shape
Anchor1621 = Anchor()
Anchor1621.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1621.setUrl(["#hanim_l_side_viewpoint"])
LOD1622 = LOD()
LOD1622.setForceTransitions(True)
LOD1622.setRange([0.04])
WorldInfo1623 = WorldInfo()
WorldInfo1623.setInfo(["hide diamond when close"])

LOD1622.addChildren(WorldInfo1623)
Shape1624 = Shape()
Shape1624.setUSE("HAnimSiteViewpointShape")

LOD1622.addChildren(Shape1624)

Anchor1621.addChildren(LOD1622)

HAnimSite1617.addChildren(Anchor1621)

HAnimHumanoid46.addViewpoints(HAnimSite1617)
HAnimSite1625 = HAnimSite()
HAnimSite1625.setName("Top_view")
HAnimSite1625.setDEF("hanim_Top_view")
HAnimSite1625.setRotation([1,0,0,-1.57])
HAnimSite1625.setTranslation([0,3.5,0])
#HAnimSite visualization shape
TouchSensor1626 = TouchSensor()
TouchSensor1626.setDescription("HAnimSite Top_view")

HAnimSite1625.addChildren(TouchSensor1626)
Shape1627 = Shape()
Shape1627.setUSE("HAnimSiteShape")

HAnimSite1625.addChildren(Shape1627)
Viewpoint1628 = Viewpoint()
Viewpoint1628.setDEF("hanim_Top_viewpoint")
Viewpoint1628.setCenterOfRotation([0,0.9,0])
Viewpoint1628.setDescription("Top")
Viewpoint1628.setPosition([0,0,0])

HAnimSite1625.addChildren(Viewpoint1628)
#HAnimSite/Viewpoint visualization shape
Anchor1629 = Anchor()
Anchor1629.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1629.setUrl(["#hanim_Top_viewpoint"])
LOD1630 = LOD()
LOD1630.setForceTransitions(True)
LOD1630.setRange([0.04])
WorldInfo1631 = WorldInfo()
WorldInfo1631.setInfo(["hide diamond when close"])

LOD1630.addChildren(WorldInfo1631)
Shape1632 = Shape()
Shape1632.setUSE("HAnimSiteViewpointShape")

LOD1630.addChildren(Shape1632)

Anchor1629.addChildren(LOD1630)

HAnimSite1625.addChildren(Anchor1629)

HAnimHumanoid46.addViewpoints(HAnimSite1625)
HAnimSite1633 = HAnimSite()
HAnimSite1633.setName("front_close_view")
HAnimSite1633.setDEF("hanim_front_close_view")
HAnimSite1633.setTranslation([0,0.854,1.575])
#HAnimSite visualization shape
TouchSensor1634 = TouchSensor()
TouchSensor1634.setDescription("HAnimSite front_close_view")

HAnimSite1633.addChildren(TouchSensor1634)
Shape1635 = Shape()
Shape1635.setUSE("HAnimSiteShape")

HAnimSite1633.addChildren(Shape1635)
Viewpoint1636 = Viewpoint()
Viewpoint1636.setDEF("hanim_front_close_viewpoint")
Viewpoint1636.setCenterOfRotation([0,0,1.575])
Viewpoint1636.setDescription("front close")
Viewpoint1636.setPosition([0,0,0])

HAnimSite1633.addChildren(Viewpoint1636)
#HAnimSite/Viewpoint visualization shape
Anchor1637 = Anchor()
Anchor1637.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1637.setUrl(["#hanim_front_close_viewpoint"])
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

HAnimSite1633.addChildren(Anchor1637)

HAnimHumanoid46.addViewpoints(HAnimSite1633)
HAnimSite1641 = HAnimSite()
HAnimSite1641.setName("side_close_view")
HAnimSite1641.setDEF("hanim_side_close_view")
HAnimSite1641.setRotation([0,1,0,1.5708])
HAnimSite1641.setTranslation([1.56,0.854,0])
#HAnimSite visualization shape
TouchSensor1642 = TouchSensor()
TouchSensor1642.setDescription("HAnimSite side_close_view")

HAnimSite1641.addChildren(TouchSensor1642)
Shape1643 = Shape()
Shape1643.setUSE("HAnimSiteShape")

HAnimSite1641.addChildren(Shape1643)
Viewpoint1644 = Viewpoint()
Viewpoint1644.setDEF("hanim_side_close_viewpoint")
Viewpoint1644.setCenterOfRotation([1.6,0,0])
Viewpoint1644.setDescription("side close")
Viewpoint1644.setPosition([0,0,0])

HAnimSite1641.addChildren(Viewpoint1644)
#HAnimSite/Viewpoint visualization shape
Anchor1645 = Anchor()
Anchor1645.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1645.setUrl(["#hanim_side_close_viewpoint"])
LOD1646 = LOD()
LOD1646.setForceTransitions(True)
LOD1646.setRange([0.04])
WorldInfo1647 = WorldInfo()
WorldInfo1647.setInfo(["hide diamond when close"])

LOD1646.addChildren(WorldInfo1647)
Shape1648 = Shape()
Shape1648.setUSE("HAnimSiteViewpointShape")

LOD1646.addChildren(Shape1648)

Anchor1645.addChildren(LOD1646)

HAnimSite1641.addChildren(Anchor1645)

HAnimHumanoid46.addViewpoints(HAnimSite1641)
HAnimSite1649 = HAnimSite()
HAnimSite1649.setName("head_front_close_view")
HAnimSite1649.setDEF("hanim_head_front_close_view")
HAnimSite1649.setTranslation([0,1.5,1])
#HAnimSite visualization shape
TouchSensor1650 = TouchSensor()
TouchSensor1650.setDescription("HAnimSite head_front_close_view")

HAnimSite1649.addChildren(TouchSensor1650)
Shape1651 = Shape()
Shape1651.setUSE("HAnimSiteShape")

HAnimSite1649.addChildren(Shape1651)
Viewpoint1652 = Viewpoint()
Viewpoint1652.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1652.setCenterOfRotation([0,0,1])
Viewpoint1652.setDescription("head front close")
Viewpoint1652.setPosition([0,0,0])

HAnimSite1649.addChildren(Viewpoint1652)
#HAnimSite/Viewpoint visualization shape
Anchor1653 = Anchor()
Anchor1653.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1653.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1654 = LOD()
LOD1654.setForceTransitions(True)
LOD1654.setRange([0.04])
WorldInfo1655 = WorldInfo()
WorldInfo1655.setInfo(["hide diamond when close"])

LOD1654.addChildren(WorldInfo1655)
Shape1656 = Shape()
Shape1656.setUSE("HAnimSiteViewpointShape")

LOD1654.addChildren(Shape1656)

Anchor1653.addChildren(LOD1654)

HAnimSite1649.addChildren(Anchor1653)

HAnimHumanoid46.addViewpoints(HAnimSite1649)
HAnimSite1657 = HAnimSite()
HAnimSite1657.setName("chest_front_close_view")
HAnimSite1657.setDEF("hanim_chest_front_close_view")
HAnimSite1657.setTranslation([0,1.2,1])
#HAnimSite visualization shape
TouchSensor1658 = TouchSensor()
TouchSensor1658.setDescription("HAnimSite chest_front_close_view")

HAnimSite1657.addChildren(TouchSensor1658)
Shape1659 = Shape()
Shape1659.setUSE("HAnimSiteShape")

HAnimSite1657.addChildren(Shape1659)
Viewpoint1660 = Viewpoint()
Viewpoint1660.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1660.setCenterOfRotation([0,0,1])
Viewpoint1660.setDescription("chest front close")
Viewpoint1660.setPosition([0,0,0])

HAnimSite1657.addChildren(Viewpoint1660)
#HAnimSite/Viewpoint visualization shape
Anchor1661 = Anchor()
Anchor1661.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1661.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1662 = LOD()
LOD1662.setForceTransitions(True)
LOD1662.setRange([0.04])
WorldInfo1663 = WorldInfo()
WorldInfo1663.setInfo(["hide diamond when close"])

LOD1662.addChildren(WorldInfo1663)
Shape1664 = Shape()
Shape1664.setUSE("HAnimSiteViewpointShape")

LOD1662.addChildren(Shape1664)

Anchor1661.addChildren(LOD1662)

HAnimSite1657.addChildren(Anchor1661)

HAnimHumanoid46.addViewpoints(HAnimSite1657)
HAnimSite1665 = HAnimSite()
HAnimSite1665.setName("pelvis_front_close_view")
HAnimSite1665.setDEF("hanim_pelvis_front_close_view")
HAnimSite1665.setTranslation([0,0.8,1])
#HAnimSite visualization shape
TouchSensor1666 = TouchSensor()
TouchSensor1666.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1665.addChildren(TouchSensor1666)
Shape1667 = Shape()
Shape1667.setUSE("HAnimSiteShape")

HAnimSite1665.addChildren(Shape1667)
Viewpoint1668 = Viewpoint()
Viewpoint1668.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1668.setCenterOfRotation([0,0,1])
Viewpoint1668.setDescription("pelvis front close")
Viewpoint1668.setPosition([0,0,0])

HAnimSite1665.addChildren(Viewpoint1668)
#HAnimSite/Viewpoint visualization shape
Anchor1669 = Anchor()
Anchor1669.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1669.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1670 = LOD()
LOD1670.setForceTransitions(True)
LOD1670.setRange([0.04])
WorldInfo1671 = WorldInfo()
WorldInfo1671.setInfo(["hide diamond when close"])

LOD1670.addChildren(WorldInfo1671)
Shape1672 = Shape()
Shape1672.setUSE("HAnimSiteViewpointShape")

LOD1670.addChildren(Shape1672)

Anchor1669.addChildren(LOD1670)

HAnimSite1665.addChildren(Anchor1669)

HAnimHumanoid46.addViewpoints(HAnimSite1665)
HAnimSite1673 = HAnimSite()
HAnimSite1673.setName("knees_front_close_view")
HAnimSite1673.setDEF("hanim_knees_front_close_view")
HAnimSite1673.setTranslation([0,0.4,1])
#HAnimSite visualization shape
TouchSensor1674 = TouchSensor()
TouchSensor1674.setDescription("HAnimSite knees_front_close_view")

HAnimSite1673.addChildren(TouchSensor1674)
Shape1675 = Shape()
Shape1675.setUSE("HAnimSiteShape")

HAnimSite1673.addChildren(Shape1675)
Viewpoint1676 = Viewpoint()
Viewpoint1676.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1676.setCenterOfRotation([0,0.4,0])
Viewpoint1676.setDescription("knees front close")
Viewpoint1676.setPosition([0,0,0])

HAnimSite1673.addChildren(Viewpoint1676)
#HAnimSite/Viewpoint visualization shape
Anchor1677 = Anchor()
Anchor1677.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1677.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1678 = LOD()
LOD1678.setForceTransitions(True)
LOD1678.setRange([0.04])
WorldInfo1679 = WorldInfo()
WorldInfo1679.setInfo(["hide diamond when close"])

LOD1678.addChildren(WorldInfo1679)
Shape1680 = Shape()
Shape1680.setUSE("HAnimSiteViewpointShape")

LOD1678.addChildren(Shape1680)

Anchor1677.addChildren(LOD1678)

HAnimSite1673.addChildren(Anchor1677)

HAnimHumanoid46.addViewpoints(HAnimSite1673)
HAnimSite1681 = HAnimSite()
HAnimSite1681.setName("feet_front_close_view")
HAnimSite1681.setDEF("hanim_feet_front_close_view")
HAnimSite1681.setTranslation([0,0,1])
#HAnimSite visualization shape
TouchSensor1682 = TouchSensor()
TouchSensor1682.setDescription("HAnimSite feet_front_close_view")

HAnimSite1681.addChildren(TouchSensor1682)
Shape1683 = Shape()
Shape1683.setUSE("HAnimSiteShape")

HAnimSite1681.addChildren(Shape1683)
Viewpoint1684 = Viewpoint()
Viewpoint1684.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1684.setDescription("feet front close")
Viewpoint1684.setPosition([0,0,0])

HAnimSite1681.addChildren(Viewpoint1684)
#HAnimSite/Viewpoint visualization shape
Anchor1685 = Anchor()
Anchor1685.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1685.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1686 = LOD()
LOD1686.setForceTransitions(True)
LOD1686.setRange([0.04])
WorldInfo1687 = WorldInfo()
WorldInfo1687.setInfo(["hide diamond when close"])

LOD1686.addChildren(WorldInfo1687)
Shape1688 = Shape()
Shape1688.setUSE("HAnimSiteViewpointShape")

LOD1686.addChildren(Shape1688)

Anchor1685.addChildren(LOD1686)

HAnimSite1681.addChildren(Anchor1685)

HAnimHumanoid46.addViewpoints(HAnimSite1681)
HAnimSite1689 = HAnimSite()
HAnimSite1689.setName("eye_level_view")
HAnimSite1689.setDEF("hanim_eye_level_view")
HAnimSite1689.setTranslation([0,1.6332,0.0502])
#HAnimSite visualization shape
TouchSensor1690 = TouchSensor()
TouchSensor1690.setDescription("HAnimSite eye_level_view")

HAnimSite1689.addChildren(TouchSensor1690)
Shape1691 = Shape()
Shape1691.setUSE("HAnimSiteShape")

HAnimSite1689.addChildren(Shape1691)
Viewpoint1692 = Viewpoint()
Viewpoint1692.setDEF("hanim_eye_level_viewpoint")
Viewpoint1692.setDescription("eye level looking forward")
Viewpoint1692.setOrientation([0,1,0,3.141593])
Viewpoint1692.setPosition([0,0,0])

HAnimSite1689.addChildren(Viewpoint1692)
#HAnimSite/Viewpoint visualization shape
Anchor1693 = Anchor()
Anchor1693.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1693.setUrl(["#hanim_eye_level_viewpoint"])
LOD1694 = LOD()
LOD1694.setForceTransitions(True)
LOD1694.setRange([0.04])
WorldInfo1695 = WorldInfo()
WorldInfo1695.setInfo(["hide diamond when close"])

LOD1694.addChildren(WorldInfo1695)
Shape1696 = Shape()
Shape1696.setUSE("HAnimSiteViewpointShape")

LOD1694.addChildren(Shape1696)

Anchor1693.addChildren(LOD1694)

HAnimSite1689.addChildren(Anchor1693)

HAnimHumanoid46.addViewpoints(HAnimSite1689)
HAnimSite1697 = HAnimSite()
HAnimSite1697.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid46.addSites(HAnimSite1697)
HAnimSite1698 = HAnimSite()
HAnimSite1698.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid46.addSites(HAnimSite1698)
HAnimSite1699 = HAnimSite()
HAnimSite1699.setUSE("hanim_l_hand_front_view")

HAnimHumanoid46.addSites(HAnimSite1699)
HAnimSite1700 = HAnimSite()
HAnimSite1700.setUSE("hanim_r_hand_front_view")

HAnimHumanoid46.addSites(HAnimSite1700)
HAnimJoint1701 = HAnimJoint()
HAnimJoint1701.setUSE("hanim_humanoid_root")

HAnimHumanoid46.addJoints(HAnimJoint1701)
HAnimJoint1702 = HAnimJoint()
HAnimJoint1702.setUSE("hanim_sacroiliac")

HAnimHumanoid46.addJoints(HAnimJoint1702)
HAnimJoint1703 = HAnimJoint()
HAnimJoint1703.setUSE("hanim_vl5")

HAnimHumanoid46.addJoints(HAnimJoint1703)
HAnimJoint1704 = HAnimJoint()
HAnimJoint1704.setUSE("hanim_vl4")

HAnimHumanoid46.addJoints(HAnimJoint1704)
HAnimJoint1705 = HAnimJoint()
HAnimJoint1705.setUSE("hanim_vl3")

HAnimHumanoid46.addJoints(HAnimJoint1705)
HAnimJoint1706 = HAnimJoint()
HAnimJoint1706.setUSE("hanim_vl2")

HAnimHumanoid46.addJoints(HAnimJoint1706)
HAnimJoint1707 = HAnimJoint()
HAnimJoint1707.setUSE("hanim_vl1")

HAnimHumanoid46.addJoints(HAnimJoint1707)
HAnimJoint1708 = HAnimJoint()
HAnimJoint1708.setUSE("hanim_vt12")

HAnimHumanoid46.addJoints(HAnimJoint1708)
HAnimJoint1709 = HAnimJoint()
HAnimJoint1709.setUSE("hanim_vt11")

HAnimHumanoid46.addJoints(HAnimJoint1709)
HAnimJoint1710 = HAnimJoint()
HAnimJoint1710.setUSE("hanim_vt10")

HAnimHumanoid46.addJoints(HAnimJoint1710)
HAnimJoint1711 = HAnimJoint()
HAnimJoint1711.setUSE("hanim_vt9")

HAnimHumanoid46.addJoints(HAnimJoint1711)
HAnimJoint1712 = HAnimJoint()
HAnimJoint1712.setUSE("hanim_vt8")

HAnimHumanoid46.addJoints(HAnimJoint1712)
HAnimJoint1713 = HAnimJoint()
HAnimJoint1713.setUSE("hanim_vt7")

HAnimHumanoid46.addJoints(HAnimJoint1713)
HAnimJoint1714 = HAnimJoint()
HAnimJoint1714.setUSE("hanim_vt6")

HAnimHumanoid46.addJoints(HAnimJoint1714)
HAnimJoint1715 = HAnimJoint()
HAnimJoint1715.setUSE("hanim_vt5")

HAnimHumanoid46.addJoints(HAnimJoint1715)
HAnimJoint1716 = HAnimJoint()
HAnimJoint1716.setUSE("hanim_vt4")

HAnimHumanoid46.addJoints(HAnimJoint1716)
HAnimJoint1717 = HAnimJoint()
HAnimJoint1717.setUSE("hanim_vt3")

HAnimHumanoid46.addJoints(HAnimJoint1717)
HAnimJoint1718 = HAnimJoint()
HAnimJoint1718.setUSE("hanim_vt2")

HAnimHumanoid46.addJoints(HAnimJoint1718)
HAnimJoint1719 = HAnimJoint()
HAnimJoint1719.setUSE("hanim_vt1")

HAnimHumanoid46.addJoints(HAnimJoint1719)
HAnimJoint1720 = HAnimJoint()
HAnimJoint1720.setUSE("hanim_vc7")

HAnimHumanoid46.addJoints(HAnimJoint1720)
HAnimJoint1721 = HAnimJoint()
HAnimJoint1721.setUSE("hanim_vc6")

HAnimHumanoid46.addJoints(HAnimJoint1721)
HAnimJoint1722 = HAnimJoint()
HAnimJoint1722.setUSE("hanim_vc5")

HAnimHumanoid46.addJoints(HAnimJoint1722)
HAnimJoint1723 = HAnimJoint()
HAnimJoint1723.setUSE("hanim_vc4")

HAnimHumanoid46.addJoints(HAnimJoint1723)
HAnimJoint1724 = HAnimJoint()
HAnimJoint1724.setUSE("hanim_vc3")

HAnimHumanoid46.addJoints(HAnimJoint1724)
HAnimJoint1725 = HAnimJoint()
HAnimJoint1725.setUSE("hanim_vc2")

HAnimHumanoid46.addJoints(HAnimJoint1725)
HAnimJoint1726 = HAnimJoint()
HAnimJoint1726.setUSE("hanim_vc1")

HAnimHumanoid46.addJoints(HAnimJoint1726)
HAnimJoint1727 = HAnimJoint()
HAnimJoint1727.setUSE("hanim_skullbase")

HAnimHumanoid46.addJoints(HAnimJoint1727)
HAnimJoint1728 = HAnimJoint()
HAnimJoint1728.setUSE("hanim_temporomandibular")

HAnimHumanoid46.addJoints(HAnimJoint1728)
HAnimJoint1729 = HAnimJoint()
HAnimJoint1729.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid46.addJoints(HAnimJoint1729)
HAnimJoint1730 = HAnimJoint()
HAnimJoint1730.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid46.addJoints(HAnimJoint1730)
HAnimJoint1731 = HAnimJoint()
HAnimJoint1731.setUSE("hanim_l_ankle")

HAnimHumanoid46.addJoints(HAnimJoint1731)
HAnimJoint1732 = HAnimJoint()
HAnimJoint1732.setUSE("hanim_r_ankle")

HAnimHumanoid46.addJoints(HAnimJoint1732)
HAnimJoint1733 = HAnimJoint()
HAnimJoint1733.setUSE("hanim_l_elbow")

HAnimHumanoid46.addJoints(HAnimJoint1733)
HAnimJoint1734 = HAnimJoint()
HAnimJoint1734.setUSE("hanim_r_elbow")

HAnimHumanoid46.addJoints(HAnimJoint1734)
HAnimJoint1735 = HAnimJoint()
HAnimJoint1735.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid46.addJoints(HAnimJoint1735)
HAnimJoint1736 = HAnimJoint()
HAnimJoint1736.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid46.addJoints(HAnimJoint1736)
HAnimJoint1737 = HAnimJoint()
HAnimJoint1737.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid46.addJoints(HAnimJoint1737)
HAnimJoint1738 = HAnimJoint()
HAnimJoint1738.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid46.addJoints(HAnimJoint1738)
HAnimJoint1739 = HAnimJoint()
HAnimJoint1739.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid46.addJoints(HAnimJoint1739)
HAnimJoint1740 = HAnimJoint()
HAnimJoint1740.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid46.addJoints(HAnimJoint1740)
HAnimJoint1741 = HAnimJoint()
HAnimJoint1741.setUSE("hanim_l_hip")

HAnimHumanoid46.addJoints(HAnimJoint1741)
HAnimJoint1742 = HAnimJoint()
HAnimJoint1742.setUSE("hanim_r_hip")

HAnimHumanoid46.addJoints(HAnimJoint1742)
HAnimJoint1743 = HAnimJoint()
HAnimJoint1743.setUSE("hanim_l_index0")

HAnimHumanoid46.addJoints(HAnimJoint1743)
HAnimJoint1744 = HAnimJoint()
HAnimJoint1744.setUSE("hanim_r_index0")

HAnimHumanoid46.addJoints(HAnimJoint1744)
HAnimJoint1745 = HAnimJoint()
HAnimJoint1745.setUSE("hanim_l_index1")

HAnimHumanoid46.addJoints(HAnimJoint1745)
HAnimJoint1746 = HAnimJoint()
HAnimJoint1746.setUSE("hanim_r_index1")

HAnimHumanoid46.addJoints(HAnimJoint1746)
HAnimJoint1747 = HAnimJoint()
HAnimJoint1747.setUSE("hanim_l_index2")

HAnimHumanoid46.addJoints(HAnimJoint1747)
HAnimJoint1748 = HAnimJoint()
HAnimJoint1748.setUSE("hanim_r_index2")

HAnimHumanoid46.addJoints(HAnimJoint1748)
HAnimJoint1749 = HAnimJoint()
HAnimJoint1749.setUSE("hanim_l_index3")

HAnimHumanoid46.addJoints(HAnimJoint1749)
HAnimJoint1750 = HAnimJoint()
HAnimJoint1750.setUSE("hanim_r_index3")

HAnimHumanoid46.addJoints(HAnimJoint1750)
HAnimJoint1751 = HAnimJoint()
HAnimJoint1751.setUSE("hanim_l_knee")

HAnimHumanoid46.addJoints(HAnimJoint1751)
HAnimJoint1752 = HAnimJoint()
HAnimJoint1752.setUSE("hanim_r_knee")

HAnimHumanoid46.addJoints(HAnimJoint1752)
HAnimJoint1753 = HAnimJoint()
HAnimJoint1753.setUSE("hanim_l_metatarsal")

HAnimHumanoid46.addJoints(HAnimJoint1753)
HAnimJoint1754 = HAnimJoint()
HAnimJoint1754.setUSE("hanim_r_metatarsal")

HAnimHumanoid46.addJoints(HAnimJoint1754)
HAnimJoint1755 = HAnimJoint()
HAnimJoint1755.setUSE("hanim_l_middle0")

HAnimHumanoid46.addJoints(HAnimJoint1755)
HAnimJoint1756 = HAnimJoint()
HAnimJoint1756.setUSE("hanim_r_middle0")

HAnimHumanoid46.addJoints(HAnimJoint1756)
HAnimJoint1757 = HAnimJoint()
HAnimJoint1757.setUSE("hanim_l_middle1")

HAnimHumanoid46.addJoints(HAnimJoint1757)
HAnimJoint1758 = HAnimJoint()
HAnimJoint1758.setUSE("hanim_r_middle1")

HAnimHumanoid46.addJoints(HAnimJoint1758)
HAnimJoint1759 = HAnimJoint()
HAnimJoint1759.setUSE("hanim_l_middle2")

HAnimHumanoid46.addJoints(HAnimJoint1759)
HAnimJoint1760 = HAnimJoint()
HAnimJoint1760.setUSE("hanim_r_middle2")

HAnimHumanoid46.addJoints(HAnimJoint1760)
HAnimJoint1761 = HAnimJoint()
HAnimJoint1761.setUSE("hanim_l_middle3")

HAnimHumanoid46.addJoints(HAnimJoint1761)
HAnimJoint1762 = HAnimJoint()
HAnimJoint1762.setUSE("hanim_r_middle3")

HAnimHumanoid46.addJoints(HAnimJoint1762)
HAnimJoint1763 = HAnimJoint()
HAnimJoint1763.setUSE("hanim_l_midtarsal")

HAnimHumanoid46.addJoints(HAnimJoint1763)
HAnimJoint1764 = HAnimJoint()
HAnimJoint1764.setUSE("hanim_r_midtarsal")

HAnimHumanoid46.addJoints(HAnimJoint1764)
HAnimJoint1765 = HAnimJoint()
HAnimJoint1765.setUSE("hanim_l_pinky0")

HAnimHumanoid46.addJoints(HAnimJoint1765)
HAnimJoint1766 = HAnimJoint()
HAnimJoint1766.setUSE("hanim_r_pinky0")

HAnimHumanoid46.addJoints(HAnimJoint1766)
HAnimJoint1767 = HAnimJoint()
HAnimJoint1767.setUSE("hanim_l_pinky1")

HAnimHumanoid46.addJoints(HAnimJoint1767)
HAnimJoint1768 = HAnimJoint()
HAnimJoint1768.setUSE("hanim_r_pinky1")

HAnimHumanoid46.addJoints(HAnimJoint1768)
HAnimJoint1769 = HAnimJoint()
HAnimJoint1769.setUSE("hanim_l_pinky2")

HAnimHumanoid46.addJoints(HAnimJoint1769)
HAnimJoint1770 = HAnimJoint()
HAnimJoint1770.setUSE("hanim_r_pinky2")

HAnimHumanoid46.addJoints(HAnimJoint1770)
HAnimJoint1771 = HAnimJoint()
HAnimJoint1771.setUSE("hanim_l_pinky3")

HAnimHumanoid46.addJoints(HAnimJoint1771)
HAnimJoint1772 = HAnimJoint()
HAnimJoint1772.setUSE("hanim_r_pinky3")

HAnimHumanoid46.addJoints(HAnimJoint1772)
HAnimJoint1773 = HAnimJoint()
HAnimJoint1773.setUSE("hanim_l_ring0")

HAnimHumanoid46.addJoints(HAnimJoint1773)
HAnimJoint1774 = HAnimJoint()
HAnimJoint1774.setUSE("hanim_r_ring0")

HAnimHumanoid46.addJoints(HAnimJoint1774)
HAnimJoint1775 = HAnimJoint()
HAnimJoint1775.setUSE("hanim_l_ring1")

HAnimHumanoid46.addJoints(HAnimJoint1775)
HAnimJoint1776 = HAnimJoint()
HAnimJoint1776.setUSE("hanim_r_ring1")

HAnimHumanoid46.addJoints(HAnimJoint1776)
HAnimJoint1777 = HAnimJoint()
HAnimJoint1777.setUSE("hanim_l_ring2")

HAnimHumanoid46.addJoints(HAnimJoint1777)
HAnimJoint1778 = HAnimJoint()
HAnimJoint1778.setUSE("hanim_r_ring2")

HAnimHumanoid46.addJoints(HAnimJoint1778)
HAnimJoint1779 = HAnimJoint()
HAnimJoint1779.setUSE("hanim_l_ring3")

HAnimHumanoid46.addJoints(HAnimJoint1779)
HAnimJoint1780 = HAnimJoint()
HAnimJoint1780.setUSE("hanim_r_ring3")

HAnimHumanoid46.addJoints(HAnimJoint1780)
HAnimJoint1781 = HAnimJoint()
HAnimJoint1781.setUSE("hanim_l_shoulder")

HAnimHumanoid46.addJoints(HAnimJoint1781)
HAnimJoint1782 = HAnimJoint()
HAnimJoint1782.setUSE("hanim_r_shoulder")

HAnimHumanoid46.addJoints(HAnimJoint1782)
HAnimJoint1783 = HAnimJoint()
HAnimJoint1783.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid46.addJoints(HAnimJoint1783)
HAnimJoint1784 = HAnimJoint()
HAnimJoint1784.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid46.addJoints(HAnimJoint1784)
HAnimJoint1785 = HAnimJoint()
HAnimJoint1785.setUSE("hanim_l_subtalar")

HAnimHumanoid46.addJoints(HAnimJoint1785)
HAnimJoint1786 = HAnimJoint()
HAnimJoint1786.setUSE("hanim_r_subtalar")

HAnimHumanoid46.addJoints(HAnimJoint1786)
HAnimJoint1787 = HAnimJoint()
HAnimJoint1787.setUSE("hanim_l_thumb1")

HAnimHumanoid46.addJoints(HAnimJoint1787)
HAnimJoint1788 = HAnimJoint()
HAnimJoint1788.setUSE("hanim_r_thumb1")

HAnimHumanoid46.addJoints(HAnimJoint1788)
HAnimJoint1789 = HAnimJoint()
HAnimJoint1789.setUSE("hanim_l_thumb2")

HAnimHumanoid46.addJoints(HAnimJoint1789)
HAnimJoint1790 = HAnimJoint()
HAnimJoint1790.setUSE("hanim_r_thumb2")

HAnimHumanoid46.addJoints(HAnimJoint1790)
HAnimJoint1791 = HAnimJoint()
HAnimJoint1791.setUSE("hanim_l_thumb3")

HAnimHumanoid46.addJoints(HAnimJoint1791)
HAnimJoint1792 = HAnimJoint()
HAnimJoint1792.setUSE("hanim_r_thumb3")

HAnimHumanoid46.addJoints(HAnimJoint1792)
HAnimJoint1793 = HAnimJoint()
HAnimJoint1793.setUSE("hanim_l_wrist")

HAnimHumanoid46.addJoints(HAnimJoint1793)
HAnimJoint1794 = HAnimJoint()
HAnimJoint1794.setUSE("hanim_r_wrist")

HAnimHumanoid46.addJoints(HAnimJoint1794)
HAnimSegment1795 = HAnimSegment()
HAnimSegment1795.setUSE("hanim_pelvis")

HAnimHumanoid46.addSegments(HAnimSegment1795)
HAnimSegment1796 = HAnimSegment()
HAnimSegment1796.setUSE("hanim_skull")

HAnimHumanoid46.addSegments(HAnimSegment1796)
HAnimSegment1797 = HAnimSegment()
HAnimSegment1797.setUSE("hanim_jaw")

HAnimHumanoid46.addSegments(HAnimSegment1797)
HAnimSegment1798 = HAnimSegment()
HAnimSegment1798.setUSE("hanim_c1")

HAnimHumanoid46.addSegments(HAnimSegment1798)
HAnimSegment1799 = HAnimSegment()
HAnimSegment1799.setUSE("hanim_c2")

HAnimHumanoid46.addSegments(HAnimSegment1799)
HAnimSegment1800 = HAnimSegment()
HAnimSegment1800.setUSE("hanim_c3")

HAnimHumanoid46.addSegments(HAnimSegment1800)
HAnimSegment1801 = HAnimSegment()
HAnimSegment1801.setUSE("hanim_c4")

HAnimHumanoid46.addSegments(HAnimSegment1801)
HAnimSegment1802 = HAnimSegment()
HAnimSegment1802.setUSE("hanim_c5")

HAnimHumanoid46.addSegments(HAnimSegment1802)
HAnimSegment1803 = HAnimSegment()
HAnimSegment1803.setUSE("hanim_c6")

HAnimHumanoid46.addSegments(HAnimSegment1803)
HAnimSegment1804 = HAnimSegment()
HAnimSegment1804.setUSE("hanim_c7")

HAnimHumanoid46.addSegments(HAnimSegment1804)
HAnimSegment1805 = HAnimSegment()
HAnimSegment1805.setUSE("hanim_t1")

HAnimHumanoid46.addSegments(HAnimSegment1805)
HAnimSegment1806 = HAnimSegment()
HAnimSegment1806.setUSE("hanim_t2")

HAnimHumanoid46.addSegments(HAnimSegment1806)
HAnimSegment1807 = HAnimSegment()
HAnimSegment1807.setUSE("hanim_t3")

HAnimHumanoid46.addSegments(HAnimSegment1807)
HAnimSegment1808 = HAnimSegment()
HAnimSegment1808.setUSE("hanim_t4")

HAnimHumanoid46.addSegments(HAnimSegment1808)
HAnimSegment1809 = HAnimSegment()
HAnimSegment1809.setUSE("hanim_t5")

HAnimHumanoid46.addSegments(HAnimSegment1809)
HAnimSegment1810 = HAnimSegment()
HAnimSegment1810.setUSE("hanim_t6")

HAnimHumanoid46.addSegments(HAnimSegment1810)
HAnimSegment1811 = HAnimSegment()
HAnimSegment1811.setUSE("hanim_t7")

HAnimHumanoid46.addSegments(HAnimSegment1811)
HAnimSegment1812 = HAnimSegment()
HAnimSegment1812.setUSE("hanim_t8")

HAnimHumanoid46.addSegments(HAnimSegment1812)
HAnimSegment1813 = HAnimSegment()
HAnimSegment1813.setUSE("hanim_t9")

HAnimHumanoid46.addSegments(HAnimSegment1813)
HAnimSegment1814 = HAnimSegment()
HAnimSegment1814.setUSE("hanim_t10")

HAnimHumanoid46.addSegments(HAnimSegment1814)
HAnimSegment1815 = HAnimSegment()
HAnimSegment1815.setUSE("hanim_t11")

HAnimHumanoid46.addSegments(HAnimSegment1815)
HAnimSegment1816 = HAnimSegment()
HAnimSegment1816.setUSE("hanim_t12")

HAnimHumanoid46.addSegments(HAnimSegment1816)
HAnimSegment1817 = HAnimSegment()
HAnimSegment1817.setUSE("hanim_l1")

HAnimHumanoid46.addSegments(HAnimSegment1817)
HAnimSegment1818 = HAnimSegment()
HAnimSegment1818.setUSE("hanim_l2")

HAnimHumanoid46.addSegments(HAnimSegment1818)
HAnimSegment1819 = HAnimSegment()
HAnimSegment1819.setUSE("hanim_l3")

HAnimHumanoid46.addSegments(HAnimSegment1819)
HAnimSegment1820 = HAnimSegment()
HAnimSegment1820.setUSE("hanim_l4")

HAnimHumanoid46.addSegments(HAnimSegment1820)
HAnimSegment1821 = HAnimSegment()
HAnimSegment1821.setUSE("hanim_l5")

HAnimHumanoid46.addSegments(HAnimSegment1821)
HAnimSegment1822 = HAnimSegment()
HAnimSegment1822.setUSE("hanim_sacrum")

HAnimHumanoid46.addSegments(HAnimSegment1822)
HAnimSegment1823 = HAnimSegment()
HAnimSegment1823.setUSE("hanim_l_calf")

HAnimHumanoid46.addSegments(HAnimSegment1823)
HAnimSegment1824 = HAnimSegment()
HAnimSegment1824.setUSE("hanim_r_calf")

HAnimHumanoid46.addSegments(HAnimSegment1824)
HAnimSegment1825 = HAnimSegment()
HAnimSegment1825.setUSE("hanim_l_clavicle")

HAnimHumanoid46.addSegments(HAnimSegment1825)
HAnimSegment1826 = HAnimSegment()
HAnimSegment1826.setUSE("hanim_r_clavicle")

HAnimHumanoid46.addSegments(HAnimSegment1826)
HAnimSegment1827 = HAnimSegment()
HAnimSegment1827.setUSE("hanim_l_eyeball")

HAnimHumanoid46.addSegments(HAnimSegment1827)
HAnimSegment1828 = HAnimSegment()
HAnimSegment1828.setUSE("hanim_r_eyeball")

HAnimHumanoid46.addSegments(HAnimSegment1828)
HAnimSegment1829 = HAnimSegment()
HAnimSegment1829.setUSE("hanim_l_eyebrow")

HAnimHumanoid46.addSegments(HAnimSegment1829)
HAnimSegment1830 = HAnimSegment()
HAnimSegment1830.setUSE("hanim_r_eyebrow")

HAnimHumanoid46.addSegments(HAnimSegment1830)
HAnimSegment1831 = HAnimSegment()
HAnimSegment1831.setUSE("hanim_l_eyelid")

HAnimHumanoid46.addSegments(HAnimSegment1831)
HAnimSegment1832 = HAnimSegment()
HAnimSegment1832.setUSE("hanim_r_eyelid")

HAnimHumanoid46.addSegments(HAnimSegment1832)
HAnimSegment1833 = HAnimSegment()
HAnimSegment1833.setUSE("hanim_l_forearm")

HAnimHumanoid46.addSegments(HAnimSegment1833)
HAnimSegment1834 = HAnimSegment()
HAnimSegment1834.setUSE("hanim_r_forearm")

HAnimHumanoid46.addSegments(HAnimSegment1834)
HAnimSegment1835 = HAnimSegment()
HAnimSegment1835.setUSE("hanim_l_forefoot")

HAnimHumanoid46.addSegments(HAnimSegment1835)
HAnimSegment1836 = HAnimSegment()
HAnimSegment1836.setUSE("hanim_r_forefoot")

HAnimHumanoid46.addSegments(HAnimSegment1836)
HAnimSegment1837 = HAnimSegment()
HAnimSegment1837.setUSE("hanim_l_hand")

HAnimHumanoid46.addSegments(HAnimSegment1837)
HAnimSegment1838 = HAnimSegment()
HAnimSegment1838.setUSE("hanim_r_hand")

HAnimHumanoid46.addSegments(HAnimSegment1838)
HAnimSegment1839 = HAnimSegment()
HAnimSegment1839.setUSE("hanim_l_hindfoot")

HAnimHumanoid46.addSegments(HAnimSegment1839)
HAnimSegment1840 = HAnimSegment()
HAnimSegment1840.setUSE("hanim_r_hindfoot")

HAnimHumanoid46.addSegments(HAnimSegment1840)
HAnimSegment1841 = HAnimSegment()
HAnimSegment1841.setUSE("hanim_l_index_distal")

HAnimHumanoid46.addSegments(HAnimSegment1841)
HAnimSegment1842 = HAnimSegment()
HAnimSegment1842.setUSE("hanim_r_index_distal")

HAnimHumanoid46.addSegments(HAnimSegment1842)
HAnimSegment1843 = HAnimSegment()
HAnimSegment1843.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1843)
HAnimSegment1844 = HAnimSegment()
HAnimSegment1844.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1844)
HAnimSegment1845 = HAnimSegment()
HAnimSegment1845.setUSE("hanim_l_index_middle")

HAnimHumanoid46.addSegments(HAnimSegment1845)
HAnimSegment1846 = HAnimSegment()
HAnimSegment1846.setUSE("hanim_r_index_middle")

HAnimHumanoid46.addSegments(HAnimSegment1846)
HAnimSegment1847 = HAnimSegment()
HAnimSegment1847.setUSE("hanim_l_index_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1847)
HAnimSegment1848 = HAnimSegment()
HAnimSegment1848.setUSE("hanim_r_index_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1848)
HAnimSegment1849 = HAnimSegment()
HAnimSegment1849.setUSE("hanim_l_middistal")

HAnimHumanoid46.addSegments(HAnimSegment1849)
HAnimSegment1850 = HAnimSegment()
HAnimSegment1850.setUSE("hanim_r_middistal")

HAnimHumanoid46.addSegments(HAnimSegment1850)
HAnimSegment1851 = HAnimSegment()
HAnimSegment1851.setUSE("hanim_l_middle_distal")

HAnimHumanoid46.addSegments(HAnimSegment1851)
HAnimSegment1852 = HAnimSegment()
HAnimSegment1852.setUSE("hanim_r_middle_distal")

HAnimHumanoid46.addSegments(HAnimSegment1852)
HAnimSegment1853 = HAnimSegment()
HAnimSegment1853.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1853)
HAnimSegment1854 = HAnimSegment()
HAnimSegment1854.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1854)
HAnimSegment1855 = HAnimSegment()
HAnimSegment1855.setUSE("hanim_l_middle_middle")

HAnimHumanoid46.addSegments(HAnimSegment1855)
HAnimSegment1856 = HAnimSegment()
HAnimSegment1856.setUSE("hanim_r_middle_middle")

HAnimHumanoid46.addSegments(HAnimSegment1856)
HAnimSegment1857 = HAnimSegment()
HAnimSegment1857.setUSE("hanim_l_middle_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1857)
HAnimSegment1858 = HAnimSegment()
HAnimSegment1858.setUSE("hanim_r_middle_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1858)
HAnimSegment1859 = HAnimSegment()
HAnimSegment1859.setUSE("hanim_l_midproximal")

HAnimHumanoid46.addSegments(HAnimSegment1859)
HAnimSegment1860 = HAnimSegment()
HAnimSegment1860.setUSE("hanim_r_midproximal")

HAnimHumanoid46.addSegments(HAnimSegment1860)
HAnimSegment1861 = HAnimSegment()
HAnimSegment1861.setUSE("hanim_l_pinky_distal")

HAnimHumanoid46.addSegments(HAnimSegment1861)
HAnimSegment1862 = HAnimSegment()
HAnimSegment1862.setUSE("hanim_r_pinky_distal")

HAnimHumanoid46.addSegments(HAnimSegment1862)
HAnimSegment1863 = HAnimSegment()
HAnimSegment1863.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1863)
HAnimSegment1864 = HAnimSegment()
HAnimSegment1864.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1864)
HAnimSegment1865 = HAnimSegment()
HAnimSegment1865.setUSE("hanim_l_pinky_middle")

HAnimHumanoid46.addSegments(HAnimSegment1865)
HAnimSegment1866 = HAnimSegment()
HAnimSegment1866.setUSE("hanim_r_pinky_middle")

HAnimHumanoid46.addSegments(HAnimSegment1866)
HAnimSegment1867 = HAnimSegment()
HAnimSegment1867.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1867)
HAnimSegment1868 = HAnimSegment()
HAnimSegment1868.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1868)
HAnimSegment1869 = HAnimSegment()
HAnimSegment1869.setUSE("hanim_l_ring_distal")

HAnimHumanoid46.addSegments(HAnimSegment1869)
HAnimSegment1870 = HAnimSegment()
HAnimSegment1870.setUSE("hanim_r_ring_distal")

HAnimHumanoid46.addSegments(HAnimSegment1870)
HAnimSegment1871 = HAnimSegment()
HAnimSegment1871.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1871)
HAnimSegment1872 = HAnimSegment()
HAnimSegment1872.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1872)
HAnimSegment1873 = HAnimSegment()
HAnimSegment1873.setUSE("hanim_l_ring_middle")

HAnimHumanoid46.addSegments(HAnimSegment1873)
HAnimSegment1874 = HAnimSegment()
HAnimSegment1874.setUSE("hanim_r_ring_middle")

HAnimHumanoid46.addSegments(HAnimSegment1874)
HAnimSegment1875 = HAnimSegment()
HAnimSegment1875.setUSE("hanim_l_ring_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1875)
HAnimSegment1876 = HAnimSegment()
HAnimSegment1876.setUSE("hanim_r_ring_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1876)
HAnimSegment1877 = HAnimSegment()
HAnimSegment1877.setUSE("hanim_l_scapula")

HAnimHumanoid46.addSegments(HAnimSegment1877)
HAnimSegment1878 = HAnimSegment()
HAnimSegment1878.setUSE("hanim_r_scapula")

HAnimHumanoid46.addSegments(HAnimSegment1878)
HAnimSegment1879 = HAnimSegment()
HAnimSegment1879.setUSE("hanim_l_thigh")

HAnimHumanoid46.addSegments(HAnimSegment1879)
HAnimSegment1880 = HAnimSegment()
HAnimSegment1880.setUSE("hanim_r_thigh")

HAnimHumanoid46.addSegments(HAnimSegment1880)
HAnimSegment1881 = HAnimSegment()
HAnimSegment1881.setUSE("hanim_l_thumb_distal")

HAnimHumanoid46.addSegments(HAnimSegment1881)
HAnimSegment1882 = HAnimSegment()
HAnimSegment1882.setUSE("hanim_r_thumb_distal")

HAnimHumanoid46.addSegments(HAnimSegment1882)
HAnimSegment1883 = HAnimSegment()
HAnimSegment1883.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1883)
HAnimSegment1884 = HAnimSegment()
HAnimSegment1884.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid46.addSegments(HAnimSegment1884)
HAnimSegment1885 = HAnimSegment()
HAnimSegment1885.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1885)
HAnimSegment1886 = HAnimSegment()
HAnimSegment1886.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid46.addSegments(HAnimSegment1886)
HAnimSegment1887 = HAnimSegment()
HAnimSegment1887.setUSE("hanim_l_upperarm")

HAnimHumanoid46.addSegments(HAnimSegment1887)
HAnimSegment1888 = HAnimSegment()
HAnimSegment1888.setUSE("hanim_r_upperarm")

HAnimHumanoid46.addSegments(HAnimSegment1888)
HAnimSite1889 = HAnimSite()
HAnimSite1889.setUSE("hanim_crotch_pt")

HAnimHumanoid46.addSites(HAnimSite1889)
HAnimSite1890 = HAnimSite()
HAnimSite1890.setUSE("hanim_skull_tip")

HAnimHumanoid46.addSites(HAnimSite1890)
HAnimSite1891 = HAnimSite()
HAnimSite1891.setUSE("hanim_sellion_pt")

HAnimHumanoid46.addSites(HAnimSite1891)
HAnimSite1892 = HAnimSite()
HAnimSite1892.setUSE("hanim_supramenton_pt")

HAnimHumanoid46.addSites(HAnimSite1892)
HAnimSite1893 = HAnimSite()
HAnimSite1893.setUSE("hanim_nuchale_pt")

HAnimHumanoid46.addSites(HAnimSite1893)
HAnimSite1894 = HAnimSite()
HAnimSite1894.setUSE("hanim_suprasternale_pt")

HAnimHumanoid46.addSites(HAnimSite1894)
HAnimSite1895 = HAnimSite()
HAnimSite1895.setUSE("hanim_cervicale_pt")

HAnimHumanoid46.addSites(HAnimSite1895)
HAnimSite1896 = HAnimSite()
HAnimSite1896.setUSE("hanim_substernale_pt")

HAnimHumanoid46.addSites(HAnimSite1896)
HAnimSite1897 = HAnimSite()
HAnimSite1897.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid46.addSites(HAnimSite1897)
HAnimSite1898 = HAnimSite()
HAnimSite1898.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid46.addSites(HAnimSite1898)
HAnimSite1899 = HAnimSite()
HAnimSite1899.setUSE("hanim_navel_pt")

HAnimHumanoid46.addSites(HAnimSite1899)
HAnimSite1900 = HAnimSite()
HAnimSite1900.setUSE("hanim_l_acromion_pt")

HAnimHumanoid46.addSites(HAnimSite1900)
HAnimSite1901 = HAnimSite()
HAnimSite1901.setUSE("hanim_r_acromion_pt")

HAnimHumanoid46.addSites(HAnimSite1901)
HAnimSite1902 = HAnimSite()
HAnimSite1902.setUSE("hanim_r_asis_pt")

HAnimHumanoid46.addSites(HAnimSite1902)
HAnimSite1903 = HAnimSite()
HAnimSite1903.setUSE("hanim_l_asis_pt")

HAnimHumanoid46.addSites(HAnimSite1903)
HAnimSite1904 = HAnimSite()
HAnimSite1904.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid46.addSites(HAnimSite1904)
HAnimSite1905 = HAnimSite()
HAnimSite1905.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid46.addSites(HAnimSite1905)
HAnimSite1906 = HAnimSite()
HAnimSite1906.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid46.addSites(HAnimSite1906)
HAnimSite1907 = HAnimSite()
HAnimSite1907.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid46.addSites(HAnimSite1907)
HAnimSite1908 = HAnimSite()
HAnimSite1908.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid46.addSites(HAnimSite1908)
HAnimSite1909 = HAnimSite()
HAnimSite1909.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid46.addSites(HAnimSite1909)
HAnimSite1910 = HAnimSite()
HAnimSite1910.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid46.addSites(HAnimSite1910)
HAnimSite1911 = HAnimSite()
HAnimSite1911.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid46.addSites(HAnimSite1911)
HAnimSite1912 = HAnimSite()
HAnimSite1912.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid46.addSites(HAnimSite1912)
HAnimSite1913 = HAnimSite()
HAnimSite1913.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid46.addSites(HAnimSite1913)
HAnimSite1914 = HAnimSite()
HAnimSite1914.setUSE("hanim_l_digit2_pt")

HAnimHumanoid46.addSites(HAnimSite1914)
HAnimSite1915 = HAnimSite()
HAnimSite1915.setUSE("hanim_r_digit2_pt")

HAnimHumanoid46.addSites(HAnimSite1915)
HAnimSite1916 = HAnimSite()
HAnimSite1916.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1916)
HAnimSite1917 = HAnimSite()
HAnimSite1917.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1917)
HAnimSite1918 = HAnimSite()
HAnimSite1918.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1918)
HAnimSite1919 = HAnimSite()
HAnimSite1919.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1919)
HAnimSite1920 = HAnimSite()
HAnimSite1920.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid46.addSites(HAnimSite1920)
HAnimSite1921 = HAnimSite()
HAnimSite1921.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid46.addSites(HAnimSite1921)
HAnimSite1922 = HAnimSite()
HAnimSite1922.setUSE("hanim_r_gonion_pt")

HAnimHumanoid46.addSites(HAnimSite1922)
HAnimSite1923 = HAnimSite()
HAnimSite1923.setUSE("hanim_l_gonion_pt")

HAnimHumanoid46.addSites(HAnimSite1923)
HAnimSite1924 = HAnimSite()
HAnimSite1924.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1924)
HAnimSite1925 = HAnimSite()
HAnimSite1925.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1925)
HAnimSite1926 = HAnimSite()
HAnimSite1926.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1926)
HAnimSite1927 = HAnimSite()
HAnimSite1927.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid46.addSites(HAnimSite1927)
HAnimSite1928 = HAnimSite()
HAnimSite1928.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid46.addSites(HAnimSite1928)
HAnimSite1929 = HAnimSite()
HAnimSite1929.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid46.addSites(HAnimSite1929)
HAnimSite1930 = HAnimSite()
HAnimSite1930.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1930)
HAnimSite1931 = HAnimSite()
HAnimSite1931.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1931)
HAnimSite1932 = HAnimSite()
HAnimSite1932.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid46.addSites(HAnimSite1932)
HAnimSite1933 = HAnimSite()
HAnimSite1933.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid46.addSites(HAnimSite1933)
HAnimSite1934 = HAnimSite()
HAnimSite1934.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid46.addSites(HAnimSite1934)
HAnimSite1935 = HAnimSite()
HAnimSite1935.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid46.addSites(HAnimSite1935)
HAnimSite1936 = HAnimSite()
HAnimSite1936.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid46.addSites(HAnimSite1936)
HAnimSite1937 = HAnimSite()
HAnimSite1937.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid46.addSites(HAnimSite1937)
HAnimSite1938 = HAnimSite()
HAnimSite1938.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid46.addSites(HAnimSite1938)
HAnimSite1939 = HAnimSite()
HAnimSite1939.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid46.addSites(HAnimSite1939)
HAnimSite1940 = HAnimSite()
HAnimSite1940.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid46.addSites(HAnimSite1940)
HAnimSite1941 = HAnimSite()
HAnimSite1941.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid46.addSites(HAnimSite1941)
HAnimSite1942 = HAnimSite()
HAnimSite1942.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid46.addSites(HAnimSite1942)
HAnimSite1943 = HAnimSite()
HAnimSite1943.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid46.addSites(HAnimSite1943)
HAnimSite1944 = HAnimSite()
HAnimSite1944.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid46.addSites(HAnimSite1944)
HAnimSite1945 = HAnimSite()
HAnimSite1945.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid46.addSites(HAnimSite1945)
HAnimSite1946 = HAnimSite()
HAnimSite1946.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid46.addSites(HAnimSite1946)
HAnimSite1947 = HAnimSite()
HAnimSite1947.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid46.addSites(HAnimSite1947)
HAnimSite1948 = HAnimSite()
HAnimSite1948.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1948)
HAnimSite1949 = HAnimSite()
HAnimSite1949.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1949)
HAnimSite1950 = HAnimSite()
HAnimSite1950.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid46.addSites(HAnimSite1950)
HAnimSite1951 = HAnimSite()
HAnimSite1951.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid46.addSites(HAnimSite1951)
HAnimSite1952 = HAnimSite()
HAnimSite1952.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid46.addSites(HAnimSite1952)
HAnimSite1953 = HAnimSite()
HAnimSite1953.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid46.addSites(HAnimSite1953)
HAnimSite1954 = HAnimSite()
HAnimSite1954.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1954)
HAnimSite1955 = HAnimSite()
HAnimSite1955.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1955)
HAnimSite1956 = HAnimSite()
HAnimSite1956.setUSE("hanim_r_psis_pt")

HAnimHumanoid46.addSites(HAnimSite1956)
HAnimSite1957 = HAnimSite()
HAnimSite1957.setUSE("hanim_l_psis_pt")

HAnimHumanoid46.addSites(HAnimSite1957)
HAnimSite1958 = HAnimSite()
HAnimSite1958.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid46.addSites(HAnimSite1958)
HAnimSite1959 = HAnimSite()
HAnimSite1959.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid46.addSites(HAnimSite1959)
HAnimSite1960 = HAnimSite()
HAnimSite1960.setUSE("hanim_l_radiale_pt")

HAnimHumanoid46.addSites(HAnimSite1960)
HAnimSite1961 = HAnimSite()
HAnimSite1961.setUSE("hanim_r_radiale_pt")

HAnimHumanoid46.addSites(HAnimSite1961)
HAnimSite1962 = HAnimSite()
HAnimSite1962.setUSE("hanim_r_rib10_pt")

HAnimHumanoid46.addSites(HAnimSite1962)
HAnimSite1963 = HAnimSite()
HAnimSite1963.setUSE("hanim_l_rib10_pt")

HAnimHumanoid46.addSites(HAnimSite1963)
HAnimSite1964 = HAnimSite()
HAnimSite1964.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1964)
HAnimSite1965 = HAnimSite()
HAnimSite1965.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1965)
HAnimSite1966 = HAnimSite()
HAnimSite1966.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid46.addSites(HAnimSite1966)
HAnimSite1967 = HAnimSite()
HAnimSite1967.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid46.addSites(HAnimSite1967)
HAnimSite1968 = HAnimSite()
HAnimSite1968.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid46.addSites(HAnimSite1968)
HAnimSite1969 = HAnimSite()
HAnimSite1969.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid46.addSites(HAnimSite1969)
HAnimSite1970 = HAnimSite()
HAnimSite1970.setUSE("hanim_r_thelion_pt")

HAnimHumanoid46.addSites(HAnimSite1970)
HAnimSite1971 = HAnimSite()
HAnimSite1971.setUSE("hanim_l_thelion_pt")

HAnimHumanoid46.addSites(HAnimSite1971)
HAnimSite1972 = HAnimSite()
HAnimSite1972.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1972)
HAnimSite1973 = HAnimSite()
HAnimSite1973.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid46.addSites(HAnimSite1973)
HAnimSite1974 = HAnimSite()
HAnimSite1974.setUSE("hanim_r_tragion_pt")

HAnimHumanoid46.addSites(HAnimSite1974)
HAnimSite1975 = HAnimSite()
HAnimSite1975.setUSE("hanim_l_tragion_pt")

HAnimHumanoid46.addSites(HAnimSite1975)
HAnimSite1976 = HAnimSite()
HAnimSite1976.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid46.addSites(HAnimSite1976)
HAnimSite1977 = HAnimSite()
HAnimSite1977.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid46.addSites(HAnimSite1977)
HAnimSite1978 = HAnimSite()
HAnimSite1978.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid46.addSites(HAnimSite1978)
HAnimSite1979 = HAnimSite()
HAnimSite1979.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid46.addSites(HAnimSite1979)

Scene32.addChildren(HAnimHumanoid46)

X3D0.setScene(Scene32)
X3D0.toFileX3D("../data/HAnim1SpecificationLOA3Illustrated_RoundTrip.x3d")

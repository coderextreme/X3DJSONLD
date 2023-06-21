from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("title")
meta3.setContent("HAnim2SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("reference")
meta5.setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("18 February 2021")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("13 March 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("creator")
meta8.setContent("Don Brutzman")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("reference")
meta9.setContent("HAnim2SpecificationLOA3Invisible.x3d")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("HAnim2SpecificationLOA3Animation.x3d")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("reference")
meta11.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("Image")
meta12.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("Image")
meta13.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("Image")
meta14.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("TODO")
meta15.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("TODO")
meta16.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("reference")
meta17.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("reference")
meta19.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("translator")
meta20.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("generator")
meta21.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("reference")
meta22.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("reference")
meta23.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("reference")
meta24.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta24)
meta25 = meta()
meta25.setName("reference")
meta25.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta25)
meta26 = meta()
meta26.setName("generator")
meta26.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta26)
meta27 = meta()
meta27.setName("identifier")
meta27.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d")

head1.addMeta(meta27)
meta28 = meta()
meta28.setName("license")
meta28.setContent("../license.html")

head1.addMeta(meta28)

X3D0.setHead(head1)
Scene29 = Scene()
Background30 = Background()
Background30.setSkyColor([0.3,0.3,0.3])

Scene29.addChildren(Background30)
NavigationInfo31 = NavigationInfo()

Scene29.addChildren(NavigationInfo31)
Group32 = Group()
Group32.setDEF("Original_WorldInfo")
WorldInfo33 = WorldInfo()
WorldInfo33.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo33.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group32.addChildren(WorldInfo33)

Scene29.addChildren(Group32)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint34 = Viewpoint()
Viewpoint34.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint34.setDescription("Humanoid LOA 3 Front")
Viewpoint34.setPosition([0,0.4,4])

Scene29.addChildren(Viewpoint34)
Viewpoint35 = Viewpoint()
Viewpoint35.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint35.setDescription("Humanoid LOA 3 Front Close")
Viewpoint35.setPosition([0,0.8,2])

Scene29.addChildren(Viewpoint35)
Viewpoint36 = Viewpoint()
Viewpoint36.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint36.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint36.setPosition([0,1.2,1])

Scene29.addChildren(Viewpoint36)
Viewpoint37 = Viewpoint()
Viewpoint37.setCenterOfRotation([0,1.5,0.0016])
Viewpoint37.setDescription("Humanoid LOA 3 Front Face")
Viewpoint37.setPosition([0,1.63,1])

Scene29.addChildren(Viewpoint37)
Viewpoint38 = Viewpoint()
Viewpoint38.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Right Side")
Viewpoint38.setOrientation([0,1,0,1.5708])
Viewpoint38.setPosition([2.6,0.8,0])

Scene29.addChildren(Viewpoint38)
Viewpoint39 = Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint39.setOrientation([0,1,0,1.2])
Viewpoint39.setPosition([1,0.8,0.5])

Scene29.addChildren(Viewpoint39)
Viewpoint40 = Viewpoint()
Viewpoint40.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint40.setOrientation([0,1,0,-1.2])
Viewpoint40.setPosition([-1,0.8,0.5])

Scene29.addChildren(Viewpoint40)
Viewpoint41 = Viewpoint()
Viewpoint41.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Left Side")
Viewpoint41.setOrientation([0,1,0,-1.5708])
Viewpoint41.setPosition([-2.6,0.8,0])

Scene29.addChildren(Viewpoint41)
Viewpoint42 = Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Top")
Viewpoint42.setOrientation([1,0,0,-1.5708])
Viewpoint42.setPosition([0,3.5,0])

Scene29.addChildren(Viewpoint42)
HAnimHumanoid43 = HAnimHumanoid()
HAnimHumanoid43.setName("humanoid")
HAnimHumanoid43.setDEF("hanim_humanoid")
HAnimHumanoid43.setLoa(3)
HAnimHumanoid43.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is allowed
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is allowed
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
MetadataSet44 = MetadataSet()
MetadataSet44.setName("HAnimHumanoid.info")
MetadataSet44.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString45 = MetadataString()
MetadataString45.setName("authorName")
MetadataString45.setValue(["Matthew T. Beitler Joe D. Williams Don Brutzman"])

MetadataSet44.setValue(MetadataString45)
MetadataString46 = MetadataString()
MetadataString46.setName("authorEmail")
MetadataString46.setValue(["HAnim@web3D.org"])

MetadataSet44.addValue(MetadataString46)
MetadataString47 = MetadataString()
MetadataString47.setName("copyright")
MetadataString47.setValue(["none"])

MetadataSet44.addValue(MetadataString47)
MetadataString48 = MetadataString()
MetadataString48.setName("creationDate")
MetadataString48.setValue(["12 May 1999"])

MetadataSet44.addValue(MetadataString48)
MetadataFloat49 = MetadataFloat()
MetadataFloat49.setName("height")
MetadataFloat49.setValue([1.7504])

MetadataSet44.addValue(MetadataFloat49)
MetadataString50 = MetadataString()
MetadataString50.setName("humanoidVersion")
MetadataString50.setValue(["2.0"])

MetadataSet44.addValue(MetadataString50)
MetadataString51 = MetadataString()
MetadataString51.setName("usageRestrictions")
MetadataString51.setValue(["none"])

MetadataSet44.addValue(MetadataString51)

HAnimHumanoid43.setValue(MetadataSet44)
HAnimJoint52 = HAnimJoint()
HAnimJoint52.setName("humanoid_root")
HAnimJoint52.setDEF("hanim_humanoid_root")
HAnimJoint52.setCenter([0,0.824,0.0277])
HAnimJoint52.setUlimit([0,0,0])
HAnimJoint52.setLlimit([0,0,0])
HAnimJoint52.setStiffness([0,0,0])
HAnimSegment53 = HAnimSegment()
HAnimSegment53.setName("sacrum")
HAnimSegment53.setDEF("hanim_sacrum")
#Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
TouchSensor54 = TouchSensor()
TouchSensor54.setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum")

HAnimSegment53.addChildren(TouchSensor54)
Transform55 = Transform()
Transform55.setTranslation([0,0.824,0.0277])
Shape56 = Shape()
Shape56.setDEF("HAnimJointShape")
Sphere57 = Sphere()
Sphere57.setRadius(0.006)

Shape56.setGeometry(Sphere57)
Appearance58 = Appearance()
Appearance58.setDEF("HAnimJointAppearance")
Material59 = Material()
Material59.setDiffuseColor([1,0.5,0])
Material59.setTransparency(0.5)

Appearance58.setMaterial(Material59)

Shape56.setAppearance(Appearance58)

Transform55.addChildren(Shape56)

HAnimSegment53.addChildren(Transform55)
#HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
Shape60 = Shape()
LineSet61 = LineSet()
LineSet61.setVertexCount([2])
Coordinate62 = Coordinate()
Coordinate62.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet61.setCoord(Coordinate62)
ColorRGBA63 = ColorRGBA()
ColorRGBA63.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA63.setColor([1,1,0,1,1,1,0,0.1])

LineSet61.setColor(ColorRGBA63)

Shape60.setGeometry(LineSet61)

HAnimSegment53.addChildren(Shape60)
#HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
Shape64 = Shape()
LineSet65 = LineSet()
LineSet65.setVertexCount([2])
Coordinate66 = Coordinate()
Coordinate66.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet65.setCoord(Coordinate66)
ColorRGBA67 = ColorRGBA()
ColorRGBA67.setUSE("HAnimSegmentLineColorRGBA")

LineSet65.setColor(ColorRGBA67)

Shape64.setGeometry(LineSet65)

HAnimSegment53.addChildren(Shape64)

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint68 = HAnimJoint()
HAnimJoint68.setName("sacroiliac")
HAnimJoint68.setDEF("hanim_sacroiliac")
HAnimJoint68.setCenter([0,0.9149,0.0016])
HAnimJoint68.setUlimit([0,0,0])
HAnimJoint68.setLlimit([0,0,0])
HAnimJoint68.setStiffness([0,0,0])
HAnimSegment69 = HAnimSegment()
HAnimSegment69.setName("pelvis")
HAnimSegment69.setDEF("hanim_pelvis")
#Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
TouchSensor70 = TouchSensor()
TouchSensor70.setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis")

HAnimSegment69.addChildren(TouchSensor70)
Transform71 = Transform()
Transform71.setTranslation([0,0.9149,0.0016])
Shape72 = Shape()
Shape72.setUSE("HAnimJointShape")

Transform71.addChildren(Shape72)

HAnimSegment69.addChildren(Transform71)
#HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
Shape73 = Shape()
LineSet74 = LineSet()
LineSet74.setVertexCount([2])
Coordinate75 = Coordinate()
Coordinate75.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet74.setCoord(Coordinate75)
ColorRGBA76 = ColorRGBA()
ColorRGBA76.setUSE("HAnimSegmentLineColorRGBA")

LineSet74.setColor(ColorRGBA76)

Shape73.setGeometry(LineSet74)

HAnimSegment69.addChildren(Shape73)
#HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
Shape77 = Shape()
LineSet78 = LineSet()
LineSet78.setVertexCount([2])
Coordinate79 = Coordinate()
Coordinate79.setPoint([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])

LineSet78.setCoord(Coordinate79)
ColorRGBA80 = ColorRGBA()
ColorRGBA80.setUSE("HAnimSegmentLineColorRGBA")

LineSet78.setColor(ColorRGBA80)

Shape77.setGeometry(LineSet78)

HAnimSegment69.addChildren(Shape77)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
Shape81 = Shape()
LineSet82 = LineSet()
LineSet82.setVertexCount([2])
Coordinate83 = Coordinate()
Coordinate83.setPoint([0,0.9149,0.0016,-0.1525,1.0628,0.0035])

LineSet82.setCoord(Coordinate83)
ColorRGBA84 = ColorRGBA()
ColorRGBA84.setDEF("HAnimSiteLineColorRGBA")
ColorRGBA84.setColor([1,0,0,1,1,0,0,0.1])

LineSet82.setColor(ColorRGBA84)

Shape81.setGeometry(LineSet82)

HAnimSegment69.addChildren(Shape81)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
Shape85 = Shape()
LineSet86 = LineSet()
LineSet86.setVertexCount([2])
Coordinate87 = Coordinate()
Coordinate87.setPoint([0,0.9149,0.0016,-0.1689,0.8419,0.0352])

LineSet86.setCoord(Coordinate87)
ColorRGBA88 = ColorRGBA()
ColorRGBA88.setUSE("HAnimSiteLineColorRGBA")

LineSet86.setColor(ColorRGBA88)

Shape85.setGeometry(LineSet86)

HAnimSegment69.addChildren(Shape85)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
Shape89 = Shape()
LineSet90 = LineSet()
LineSet90.setVertexCount([2])
Coordinate91 = Coordinate()
Coordinate91.setPoint([0,0.9149,0.0016,0.1612,1.0537,0.0008])

LineSet90.setCoord(Coordinate91)
ColorRGBA92 = ColorRGBA()
ColorRGBA92.setUSE("HAnimSiteLineColorRGBA")

LineSet90.setColor(ColorRGBA92)

Shape89.setGeometry(LineSet90)

HAnimSegment69.addChildren(Shape89)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
Shape93 = Shape()
LineSet94 = LineSet()
LineSet94.setVertexCount([2])
Coordinate95 = Coordinate()
Coordinate95.setPoint([0,0.9149,0.0016,0.1677,0.8336,0.0303])

LineSet94.setCoord(Coordinate95)
ColorRGBA96 = ColorRGBA()
ColorRGBA96.setUSE("HAnimSiteLineColorRGBA")

LineSet94.setColor(ColorRGBA96)

Shape93.setGeometry(LineSet94)

HAnimSegment69.addChildren(Shape93)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
Shape97 = Shape()
LineSet98 = LineSet()
LineSet98.setVertexCount([2])
Coordinate99 = Coordinate()
Coordinate99.setPoint([0,0.9149,0.0016,-0.0887,1.0021,0.1112])

LineSet98.setCoord(Coordinate99)
ColorRGBA100 = ColorRGBA()
ColorRGBA100.setUSE("HAnimSiteLineColorRGBA")

LineSet98.setColor(ColorRGBA100)

Shape97.setGeometry(LineSet98)

HAnimSegment69.addChildren(Shape97)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
Shape101 = Shape()
LineSet102 = LineSet()
LineSet102.setVertexCount([2])
Coordinate103 = Coordinate()
Coordinate103.setPoint([0,0.9149,0.0016,0.0925,0.9983,0.1052])

LineSet102.setCoord(Coordinate103)
ColorRGBA104 = ColorRGBA()
ColorRGBA104.setUSE("HAnimSiteLineColorRGBA")

LineSet102.setColor(ColorRGBA104)

Shape101.setGeometry(LineSet102)

HAnimSegment69.addChildren(Shape101)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
Shape105 = Shape()
LineSet106 = LineSet()
LineSet106.setVertexCount([2])
Coordinate107 = Coordinate()
Coordinate107.setPoint([0,0.9149,0.0016,-0.0716,1.019,-0.1138])

LineSet106.setCoord(Coordinate107)
ColorRGBA108 = ColorRGBA()
ColorRGBA108.setUSE("HAnimSiteLineColorRGBA")

LineSet106.setColor(ColorRGBA108)

Shape105.setGeometry(LineSet106)

HAnimSegment69.addChildren(Shape105)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
Shape109 = Shape()
LineSet110 = LineSet()
LineSet110.setVertexCount([2])
Coordinate111 = Coordinate()
Coordinate111.setPoint([0,0.9149,0.0016,0.0774,1.019,-0.1151])

LineSet110.setCoord(Coordinate111)
ColorRGBA112 = ColorRGBA()
ColorRGBA112.setUSE("HAnimSiteLineColorRGBA")

LineSet110.setColor(ColorRGBA112)

Shape109.setGeometry(LineSet110)

HAnimSegment69.addChildren(Shape109)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
Shape113 = Shape()
LineSet114 = LineSet()
LineSet114.setVertexCount([2])
Coordinate115 = Coordinate()
Coordinate115.setPoint([0,0.9149,0.0016,0.0034,0.8266,0.0257])

LineSet114.setCoord(Coordinate115)
ColorRGBA116 = ColorRGBA()
ColorRGBA116.setUSE("HAnimSiteLineColorRGBA")

LineSet114.setColor(ColorRGBA116)

Shape113.setGeometry(LineSet114)

HAnimSegment69.addChildren(Shape113)
HAnimSite117 = HAnimSite()
HAnimSite117.setName("r_iliocristale_pt")
HAnimSite117.setDEF("hanim_r_iliocristale_pt")
HAnimSite117.setTranslation([-0.1525,1.0628,0.0035])
#HAnimSite visualization shape
TouchSensor118 = TouchSensor()
TouchSensor118.setDescription("HAnimSite r_iliocristale_pt")

HAnimSite117.addChildren(TouchSensor118)
Shape119 = Shape()
Shape119.setDEF("HAnimSiteShape")
IndexedFaceSet120 = IndexedFaceSet()
IndexedFaceSet120.setDEF("DiamondIFS")
IndexedFaceSet120.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet120.setCreaseAngle(0.5)
IndexedFaceSet120.setSolid(False)
Coordinate121 = Coordinate()
Coordinate121.setPoint([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])

IndexedFaceSet120.setCoord(Coordinate121)

Shape119.setGeometry(IndexedFaceSet120)
Appearance122 = Appearance()
Material123 = Material()
Material123.setDiffuseColor([1,0,0])

Appearance122.setMaterial(Material123)

Shape119.setAppearance(Appearance122)

HAnimSite117.addChildren(Shape119)

HAnimSegment69.addChildren(HAnimSite117)
HAnimSite124 = HAnimSite()
HAnimSite124.setName("r_trochanterion_pt")
HAnimSite124.setDEF("hanim_r_trochanterion_pt")
HAnimSite124.setTranslation([-0.1689,0.8419,0.0352])
#HAnimSite visualization shape
TouchSensor125 = TouchSensor()
TouchSensor125.setDescription("HAnimSite r_trochanterion_pt")

HAnimSite124.addChildren(TouchSensor125)
Shape126 = Shape()
Shape126.setUSE("HAnimSiteShape")

HAnimSite124.addChildren(Shape126)

HAnimSegment69.addChildren(HAnimSite124)
HAnimSite127 = HAnimSite()
HAnimSite127.setName("l_iliocristale_pt")
HAnimSite127.setDEF("hanim_l_iliocristale_pt")
HAnimSite127.setTranslation([0.1612,1.0537,0.0008])
#HAnimSite visualization shape
TouchSensor128 = TouchSensor()
TouchSensor128.setDescription("HAnimSite l_iliocristale_pt")

HAnimSite127.addChildren(TouchSensor128)
Shape129 = Shape()
Shape129.setUSE("HAnimSiteShape")

HAnimSite127.addChildren(Shape129)

HAnimSegment69.addChildren(HAnimSite127)
HAnimSite130 = HAnimSite()
HAnimSite130.setName("l_trochanterion_pt")
HAnimSite130.setDEF("hanim_l_trochanterion_pt")
HAnimSite130.setTranslation([0.1677,0.8336,0.0303])
#HAnimSite visualization shape
TouchSensor131 = TouchSensor()
TouchSensor131.setDescription("HAnimSite l_trochanterion_pt")

HAnimSite130.addChildren(TouchSensor131)
Shape132 = Shape()
Shape132.setUSE("HAnimSiteShape")

HAnimSite130.addChildren(Shape132)

HAnimSegment69.addChildren(HAnimSite130)
HAnimSite133 = HAnimSite()
HAnimSite133.setName("r_asis_pt")
HAnimSite133.setDEF("hanim_r_asis_pt")
HAnimSite133.setTranslation([-0.0887,1.0021,0.1112])
#HAnimSite visualization shape
TouchSensor134 = TouchSensor()
TouchSensor134.setDescription("HAnimSite r_asis_pt")

HAnimSite133.addChildren(TouchSensor134)
Shape135 = Shape()
Shape135.setUSE("HAnimSiteShape")

HAnimSite133.addChildren(Shape135)

HAnimSegment69.addChildren(HAnimSite133)
HAnimSite136 = HAnimSite()
HAnimSite136.setName("l_asis_pt")
HAnimSite136.setDEF("hanim_l_asis_pt")
HAnimSite136.setTranslation([0.0925,0.9983,0.1052])
#HAnimSite visualization shape
TouchSensor137 = TouchSensor()
TouchSensor137.setDescription("HAnimSite l_asis_pt")

HAnimSite136.addChildren(TouchSensor137)
Shape138 = Shape()
Shape138.setUSE("HAnimSiteShape")

HAnimSite136.addChildren(Shape138)

HAnimSegment69.addChildren(HAnimSite136)
HAnimSite139 = HAnimSite()
HAnimSite139.setName("r_psis_pt")
HAnimSite139.setDEF("hanim_r_psis_pt")
HAnimSite139.setTranslation([-0.0716,1.019,-0.1138])
#HAnimSite visualization shape
TouchSensor140 = TouchSensor()
TouchSensor140.setDescription("HAnimSite r_psis_pt")

HAnimSite139.addChildren(TouchSensor140)
Shape141 = Shape()
Shape141.setUSE("HAnimSiteShape")

HAnimSite139.addChildren(Shape141)

HAnimSegment69.addChildren(HAnimSite139)
HAnimSite142 = HAnimSite()
HAnimSite142.setName("l_psis_pt")
HAnimSite142.setDEF("hanim_l_psis_pt")
HAnimSite142.setTranslation([0.0774,1.019,-0.1151])
#HAnimSite visualization shape
TouchSensor143 = TouchSensor()
TouchSensor143.setDescription("HAnimSite l_psis_pt")

HAnimSite142.addChildren(TouchSensor143)
Shape144 = Shape()
Shape144.setUSE("HAnimSiteShape")

HAnimSite142.addChildren(Shape144)

HAnimSegment69.addChildren(HAnimSite142)
HAnimSite145 = HAnimSite()
HAnimSite145.setName("crotch_pt")
HAnimSite145.setDEF("hanim_crotch_pt")
HAnimSite145.setTranslation([0.0034,0.8266,0.0257])
#HAnimSite visualization shape
TouchSensor146 = TouchSensor()
TouchSensor146.setDescription("HAnimSite crotch_pt")

HAnimSite145.addChildren(TouchSensor146)
Shape147 = Shape()
Shape147.setUSE("HAnimSiteShape")

HAnimSite145.addChildren(Shape147)

HAnimSegment69.addChildren(HAnimSite145)

HAnimJoint68.addChildren(HAnimSegment69)
HAnimJoint148 = HAnimJoint()
HAnimJoint148.setName("l_hip")
HAnimJoint148.setDEF("hanim_l_hip")
HAnimJoint148.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint148.setUlimit([0,0,0])
HAnimJoint148.setLlimit([0,0,0])
HAnimJoint148.setStiffness([0,0,0])
HAnimSegment149 = HAnimSegment()
HAnimSegment149.setName("l_thigh")
HAnimSegment149.setDEF("hanim_l_thigh")
#Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
TouchSensor150 = TouchSensor()
TouchSensor150.setDescription("HAnimJoint l_hip, HAnimSegment l_thigh")

HAnimSegment149.addChildren(TouchSensor150)
Transform151 = Transform()
Transform151.setTranslation([0.0961,0.9124,-0.0001])
Shape152 = Shape()
Shape152.setUSE("HAnimJointShape")

Transform151.addChildren(Shape152)

HAnimSegment149.addChildren(Transform151)
#HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
Shape153 = Shape()
LineSet154 = LineSet()
LineSet154.setVertexCount([2])
Coordinate155 = Coordinate()
Coordinate155.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet154.setCoord(Coordinate155)
ColorRGBA156 = ColorRGBA()
ColorRGBA156.setUSE("HAnimSegmentLineColorRGBA")

LineSet154.setColor(ColorRGBA156)

Shape153.setGeometry(LineSet154)

HAnimSegment149.addChildren(Shape153)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
Shape157 = Shape()
LineSet158 = LineSet()
LineSet158.setVertexCount([2])
Coordinate159 = Coordinate()
Coordinate159.setPoint([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])

LineSet158.setCoord(Coordinate159)
ColorRGBA160 = ColorRGBA()
ColorRGBA160.setUSE("HAnimSiteLineColorRGBA")

LineSet158.setColor(ColorRGBA160)

Shape157.setGeometry(LineSet158)

HAnimSegment149.addChildren(Shape157)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
Shape161 = Shape()
LineSet162 = LineSet()
LineSet162.setVertexCount([2])
Coordinate163 = Coordinate()
Coordinate163.setPoint([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])

LineSet162.setCoord(Coordinate163)
ColorRGBA164 = ColorRGBA()
ColorRGBA164.setUSE("HAnimSiteLineColorRGBA")

LineSet162.setColor(ColorRGBA164)

Shape161.setGeometry(LineSet162)

HAnimSegment149.addChildren(Shape161)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
Shape165 = Shape()
LineSet166 = LineSet()
LineSet166.setVertexCount([2])
Coordinate167 = Coordinate()
Coordinate167.setPoint([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])

LineSet166.setCoord(Coordinate167)
ColorRGBA168 = ColorRGBA()
ColorRGBA168.setUSE("HAnimSiteLineColorRGBA")

LineSet166.setColor(ColorRGBA168)

Shape165.setGeometry(LineSet166)

HAnimSegment149.addChildren(Shape165)
HAnimSite169 = HAnimSite()
HAnimSite169.setName("l_knee_crease_pt")
HAnimSite169.setDEF("hanim_l_knee_crease_pt")
HAnimSite169.setTranslation([0.0993,0.4881,-0.0309])
#HAnimSite visualization shape
TouchSensor170 = TouchSensor()
TouchSensor170.setDescription("HAnimSite l_knee_crease_pt")

HAnimSite169.addChildren(TouchSensor170)
Shape171 = Shape()
Shape171.setUSE("HAnimSiteShape")

HAnimSite169.addChildren(Shape171)

HAnimSegment149.addChildren(HAnimSite169)
HAnimSite172 = HAnimSite()
HAnimSite172.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite172.setDEF("hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite172.setTranslation([0.1598,0.4967,0.0297])
#HAnimSite visualization shape
TouchSensor173 = TouchSensor()
TouchSensor173.setDescription("HAnimSite l_femoral_lateral_epicn_pt")

HAnimSite172.addChildren(TouchSensor173)
Shape174 = Shape()
Shape174.setUSE("HAnimSiteShape")

HAnimSite172.addChildren(Shape174)

HAnimSegment149.addChildren(HAnimSite172)
HAnimSite175 = HAnimSite()
HAnimSite175.setName("l_femoral_medial_epicondyle_pt")
HAnimSite175.setDEF("hanim_l_femoral_medial_epicondyle_pt")
HAnimSite175.setTranslation([0.0398,0.4946,0.0303])
#HAnimSite visualization shape
TouchSensor176 = TouchSensor()
TouchSensor176.setDescription("HAnimSite l_femoral_medial_epicn_pt")

HAnimSite175.addChildren(TouchSensor176)
Shape177 = Shape()
Shape177.setUSE("HAnimSiteShape")

HAnimSite175.addChildren(Shape177)

HAnimSegment149.addChildren(HAnimSite175)

HAnimJoint148.addChildren(HAnimSegment149)
HAnimJoint178 = HAnimJoint()
HAnimJoint178.setName("l_knee")
HAnimJoint178.setDEF("hanim_l_knee")
HAnimJoint178.setCenter([0.104,0.4867,0.0308])
HAnimJoint178.setUlimit([0,0,0])
HAnimJoint178.setLlimit([0,0,0])
HAnimJoint178.setStiffness([0,0,0])
HAnimSegment179 = HAnimSegment()
HAnimSegment179.setName("l_calf")
HAnimSegment179.setDEF("hanim_l_calf")
#Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
TouchSensor180 = TouchSensor()
TouchSensor180.setDescription("HAnimJoint l_knee, HAnimSegment l_calf")

HAnimSegment179.addChildren(TouchSensor180)
Transform181 = Transform()
Transform181.setTranslation([0.104,0.4867,0.0308])
Shape182 = Shape()
Shape182.setUSE("HAnimJointShape")

Transform181.addChildren(Shape182)

HAnimSegment179.addChildren(Transform181)
#HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
Shape183 = Shape()
LineSet184 = LineSet()
LineSet184.setVertexCount([2])
Coordinate185 = Coordinate()
Coordinate185.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet184.setCoord(Coordinate185)
ColorRGBA186 = ColorRGBA()
ColorRGBA186.setUSE("HAnimSegmentLineColorRGBA")

LineSet184.setColor(ColorRGBA186)

Shape183.setGeometry(LineSet184)

HAnimSegment179.addChildren(Shape183)

HAnimJoint178.addChildren(HAnimSegment179)
HAnimJoint187 = HAnimJoint()
HAnimJoint187.setName("l_talocrural")
HAnimJoint187.setDEF("hanim_l_talocrural")
HAnimJoint187.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint187.setUlimit([0,0,0])
HAnimJoint187.setLlimit([0,0,0])
HAnimJoint187.setStiffness([0,0,0])
HAnimSegment188 = HAnimSegment()
HAnimSegment188.setName("l_talus")
HAnimSegment188.setDEF("hanim_l_talus")
#Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
TouchSensor189 = TouchSensor()
TouchSensor189.setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus")

HAnimSegment188.addChildren(TouchSensor189)
Transform190 = Transform()
Transform190.setTranslation([0.1101,0.0656,-0.0736])
Shape191 = Shape()
Shape191.setUSE("HAnimJointShape")

Transform190.addChildren(Shape191)

HAnimSegment188.addChildren(Transform190)
#HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
Shape192 = Shape()
LineSet193 = LineSet()
LineSet193.setVertexCount([2])
Coordinate194 = Coordinate()
Coordinate194.setPoint([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])

LineSet193.setCoord(Coordinate194)
ColorRGBA195 = ColorRGBA()
ColorRGBA195.setUSE("HAnimSegmentLineColorRGBA")

LineSet193.setColor(ColorRGBA195)

Shape192.setGeometry(LineSet193)

HAnimSegment188.addChildren(Shape192)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
Shape196 = Shape()
LineSet197 = LineSet()
LineSet197.setVertexCount([2])
Coordinate198 = Coordinate()
Coordinate198.setPoint([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])

LineSet197.setCoord(Coordinate198)
ColorRGBA199 = ColorRGBA()
ColorRGBA199.setUSE("HAnimSiteLineColorRGBA")

LineSet197.setColor(ColorRGBA199)

Shape196.setGeometry(LineSet197)

HAnimSegment188.addChildren(Shape196)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
Shape200 = Shape()
LineSet201 = LineSet()
LineSet201.setVertexCount([2])
Coordinate202 = Coordinate()
Coordinate202.setPoint([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])

LineSet201.setCoord(Coordinate202)
ColorRGBA203 = ColorRGBA()
ColorRGBA203.setUSE("HAnimSiteLineColorRGBA")

LineSet201.setColor(ColorRGBA203)

Shape200.setGeometry(LineSet201)

HAnimSegment188.addChildren(Shape200)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
Shape204 = Shape()
LineSet205 = LineSet()
LineSet205.setVertexCount([2])
Coordinate206 = Coordinate()
Coordinate206.setPoint([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])

LineSet205.setCoord(Coordinate206)
ColorRGBA207 = ColorRGBA()
ColorRGBA207.setUSE("HAnimSiteLineColorRGBA")

LineSet205.setColor(ColorRGBA207)

Shape204.setGeometry(LineSet205)

HAnimSegment188.addChildren(Shape204)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
Shape208 = Shape()
LineSet209 = LineSet()
LineSet209.setVertexCount([2])
Coordinate210 = Coordinate()
Coordinate210.setPoint([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])

LineSet209.setCoord(Coordinate210)
ColorRGBA211 = ColorRGBA()
ColorRGBA211.setUSE("HAnimSiteLineColorRGBA")

LineSet209.setColor(ColorRGBA211)

Shape208.setGeometry(LineSet209)

HAnimSegment188.addChildren(Shape208)
HAnimSite212 = HAnimSite()
HAnimSite212.setName("l_lateral_malleolus_pt")
HAnimSite212.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite212.setTranslation([0.1308,0.0597,-0.1032])
#HAnimSite visualization shape
TouchSensor213 = TouchSensor()
TouchSensor213.setDescription("HAnimSite l_lateral_malleolus_pt")

HAnimSite212.addChildren(TouchSensor213)
Shape214 = Shape()
Shape214.setUSE("HAnimSiteShape")

HAnimSite212.addChildren(Shape214)

HAnimSegment188.addChildren(HAnimSite212)
HAnimSite215 = HAnimSite()
HAnimSite215.setName("l_medial_malleolus_pt")
HAnimSite215.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite215.setTranslation([0.089,0.0716,-0.0881])
#HAnimSite visualization shape
TouchSensor216 = TouchSensor()
TouchSensor216.setDescription("HAnimSite l_medial_malleolus_pt")

HAnimSite215.addChildren(TouchSensor216)
Shape217 = Shape()
Shape217.setUSE("HAnimSiteShape")

HAnimSite215.addChildren(Shape217)

HAnimSegment188.addChildren(HAnimSite215)
HAnimSite218 = HAnimSite()
HAnimSite218.setName("l_sphyrion_pt")
HAnimSite218.setDEF("hanim_l_sphyrion_pt")
HAnimSite218.setTranslation([0.089,0.0575,-0.0943])
#HAnimSite visualization shape
TouchSensor219 = TouchSensor()
TouchSensor219.setDescription("HAnimSite l_sphyrion_pt")

HAnimSite218.addChildren(TouchSensor219)
Shape220 = Shape()
Shape220.setUSE("HAnimSiteShape")

HAnimSite218.addChildren(Shape220)

HAnimSegment188.addChildren(HAnimSite218)
HAnimSite221 = HAnimSite()
HAnimSite221.setName("l_calcaneus_posterior_pt")
HAnimSite221.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite221.setTranslation([0.0974,0.0259,-0.1171])
#HAnimSite visualization shape
TouchSensor222 = TouchSensor()
TouchSensor222.setDescription("HAnimSite l_calcaneous_post_pt")

HAnimSite221.addChildren(TouchSensor222)
Shape223 = Shape()
Shape223.setUSE("HAnimSiteShape")

HAnimSite221.addChildren(Shape223)

HAnimSegment188.addChildren(HAnimSite221)

HAnimJoint187.addChildren(HAnimSegment188)
HAnimJoint224 = HAnimJoint()
HAnimJoint224.setName("l_tarsometatarsal_2")
HAnimJoint224.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint224.setCenter([0.1086,0.0001,-0.0368])
HAnimJoint224.setUlimit([0,0,0])
HAnimJoint224.setLlimit([0,0,0])
HAnimJoint224.setStiffness([0,0,0])
HAnimSegment225 = HAnimSegment()
HAnimSegment225.setName("l_metatarsal_2")
HAnimSegment225.setDEF("hanim_l_metatarsal_2")
#Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
TouchSensor226 = TouchSensor()
TouchSensor226.setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2")

HAnimSegment225.addChildren(TouchSensor226)
Transform227 = Transform()
Transform227.setTranslation([0.1086,0.0001,-0.0368])
Shape228 = Shape()
Shape228.setUSE("HAnimJointShape")

Transform227.addChildren(Shape228)

HAnimSegment225.addChildren(Transform227)
#HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
Shape229 = Shape()
LineSet230 = LineSet()
LineSet230.setVertexCount([2])
Coordinate231 = Coordinate()
Coordinate231.setPoint([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])

LineSet230.setCoord(Coordinate231)
ColorRGBA232 = ColorRGBA()
ColorRGBA232.setUSE("HAnimSegmentLineColorRGBA")

LineSet230.setColor(ColorRGBA232)

Shape229.setGeometry(LineSet230)

HAnimSegment225.addChildren(Shape229)

HAnimJoint224.addChildren(HAnimSegment225)
HAnimJoint233 = HAnimJoint()
HAnimJoint233.setName("l_metatarsophalangeal_2")
HAnimJoint233.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint233.setCenter([0.1086,0.0001,0.0368])
HAnimJoint233.setUlimit([0,0,0])
HAnimJoint233.setLlimit([0,0,0])
HAnimJoint233.setStiffness([0,0,0])
HAnimSegment234 = HAnimSegment()
HAnimSegment234.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment234.setDEF("hanim_l_tarsal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
TouchSensor235 = TouchSensor()
TouchSensor235.setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2")

HAnimSegment234.addChildren(TouchSensor235)
Transform236 = Transform()
Transform236.setTranslation([0.1086,0.0001,0.0368])
Shape237 = Shape()
Shape237.setUSE("HAnimJointShape")

Transform236.addChildren(Shape237)

HAnimSegment234.addChildren(Transform236)
#HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
Shape238 = Shape()
LineSet239 = LineSet()
LineSet239.setVertexCount([2])
Coordinate240 = Coordinate()
Coordinate240.setPoint([0.1086,0.0001,0.0368,0.1086,0,0.0762])

LineSet239.setCoord(Coordinate240)
ColorRGBA241 = ColorRGBA()
ColorRGBA241.setUSE("HAnimSegmentLineColorRGBA")

LineSet239.setColor(ColorRGBA241)

Shape238.setGeometry(LineSet239)

HAnimSegment234.addChildren(Shape238)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
Shape242 = Shape()
LineSet243 = LineSet()
LineSet243.setVertexCount([2])
Coordinate244 = Coordinate()
Coordinate244.setPoint([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])

LineSet243.setCoord(Coordinate244)
ColorRGBA245 = ColorRGBA()
ColorRGBA245.setUSE("HAnimSiteLineColorRGBA")

LineSet243.setColor(ColorRGBA245)

Shape242.setGeometry(LineSet243)

HAnimSegment234.addChildren(Shape242)
HAnimSite246 = HAnimSite()
HAnimSite246.setName("l_metatarsal_phalanx_1_pt")
HAnimSite246.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite246.setTranslation([0.0816,0.0232,0.0106])
#HAnimSite visualization shape
TouchSensor247 = TouchSensor()
TouchSensor247.setDescription("HAnimSite l_metatarsal_pha1_pt")

HAnimSite246.addChildren(TouchSensor247)
Shape248 = Shape()
Shape248.setUSE("HAnimSiteShape")

HAnimSite246.addChildren(Shape248)

HAnimSegment234.addChildren(HAnimSite246)

HAnimJoint233.addChildren(HAnimSegment234)
HAnimJoint249 = HAnimJoint()
HAnimJoint249.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint249.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint249.setCenter([0.1086,0,0.0762])
HAnimJoint249.setUlimit([0,0,0])
HAnimJoint249.setLlimit([0,0,0])
HAnimJoint249.setStiffness([0,0,0])
HAnimSegment250 = HAnimSegment()
HAnimSegment250.setName("l_tarsal_distal_phalanx_2")
HAnimSegment250.setDEF("hanim_l_tarsal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
TouchSensor251 = TouchSensor()
TouchSensor251.setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2")

HAnimSegment250.addChildren(TouchSensor251)
Transform252 = Transform()
Transform252.setTranslation([0.1086,0,0.0762])
Shape253 = Shape()
Shape253.setUSE("HAnimJointShape")

Transform252.addChildren(Shape253)

HAnimSegment250.addChildren(Transform252)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
Shape254 = Shape()
LineSet255 = LineSet()
LineSet255.setVertexCount([2])
Coordinate256 = Coordinate()
Coordinate256.setPoint([0.1086,0,0.0762,0.1354,0.0016,0.1476])

LineSet255.setCoord(Coordinate256)
ColorRGBA257 = ColorRGBA()
ColorRGBA257.setUSE("HAnimSiteLineColorRGBA")

LineSet255.setColor(ColorRGBA257)

Shape254.setGeometry(LineSet255)

HAnimSegment250.addChildren(Shape254)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
Shape258 = Shape()
LineSet259 = LineSet()
LineSet259.setVertexCount([2])
Coordinate260 = Coordinate()
Coordinate260.setPoint([0.1086,0,0.0762,0.1825,0.007,0.0928])

LineSet259.setCoord(Coordinate260)
ColorRGBA261 = ColorRGBA()
ColorRGBA261.setUSE("HAnimSiteLineColorRGBA")

LineSet259.setColor(ColorRGBA261)

Shape258.setGeometry(LineSet259)

HAnimSegment250.addChildren(Shape258)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
Shape262 = Shape()
LineSet263 = LineSet()
LineSet263.setVertexCount([2])
Coordinate264 = Coordinate()
Coordinate264.setPoint([0.1086,0,0.0762,0.1195,0.0079,0.1433])

LineSet263.setCoord(Coordinate264)
ColorRGBA265 = ColorRGBA()
ColorRGBA265.setUSE("HAnimSiteLineColorRGBA")

LineSet263.setColor(ColorRGBA265)

Shape262.setGeometry(LineSet263)

HAnimSegment250.addChildren(Shape262)
HAnimSite266 = HAnimSite()
HAnimSite266.setName("l_forefoot_tip_pt")
HAnimSite266.setDEF("hanim_l_forefoot_tip_pt")
HAnimSite266.setTranslation([0.1354,0.0016,0.1476])
#HAnimSite visualization shape
TouchSensor267 = TouchSensor()
TouchSensor267.setDescription("HAnimSite l_forefoot_tip")

HAnimSite266.addChildren(TouchSensor267)
Shape268 = Shape()
Shape268.setUSE("HAnimSiteShape")

HAnimSite266.addChildren(Shape268)

HAnimSegment250.addChildren(HAnimSite266)
HAnimSite269 = HAnimSite()
HAnimSite269.setName("l_metatarsal_phalanx_5_pt")
HAnimSite269.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite269.setTranslation([0.1825,0.007,0.0928])
#HAnimSite visualization shape
TouchSensor270 = TouchSensor()
TouchSensor270.setDescription("HAnimSite l_metatarsal_pha5_pt")

HAnimSite269.addChildren(TouchSensor270)
Shape271 = Shape()
Shape271.setUSE("HAnimSiteShape")

HAnimSite269.addChildren(Shape271)

HAnimSegment250.addChildren(HAnimSite269)
HAnimSite272 = HAnimSite()
HAnimSite272.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite272.setDEF("hanim_l_tarsal_distal_phalanx_2_pt")
HAnimSite272.setTranslation([0.1195,0.0079,0.1433])
#HAnimSite visualization shape
TouchSensor273 = TouchSensor()
TouchSensor273.setDescription("HAnimSite l_digit2_pt")

HAnimSite272.addChildren(TouchSensor273)
Shape274 = Shape()
Shape274.setUSE("HAnimSiteShape")

HAnimSite272.addChildren(Shape274)

HAnimSegment250.addChildren(HAnimSite272)

HAnimJoint249.addChildren(HAnimSegment250)

HAnimJoint233.addChildren(HAnimJoint249)

HAnimJoint224.addChildren(HAnimJoint233)

HAnimJoint187.addChildren(HAnimJoint224)

HAnimJoint178.addChildren(HAnimJoint187)

HAnimJoint148.addChildren(HAnimJoint178)

HAnimJoint68.addChildren(HAnimJoint148)
HAnimJoint275 = HAnimJoint()
HAnimJoint275.setName("r_hip")
HAnimJoint275.setDEF("hanim_r_hip")
HAnimJoint275.setCenter([-0.0961,0.9124,-0.0001])
HAnimJoint275.setUlimit([0,0,0])
HAnimJoint275.setLlimit([0,0,0])
HAnimJoint275.setStiffness([0,0,0])
HAnimSegment276 = HAnimSegment()
HAnimSegment276.setName("r_thigh")
HAnimSegment276.setDEF("hanim_r_thigh")
#Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
TouchSensor277 = TouchSensor()
TouchSensor277.setDescription("HAnimJoint r_hip, HAnimSegment r_thigh")

HAnimSegment276.addChildren(TouchSensor277)
Transform278 = Transform()
Transform278.setTranslation([-0.0961,0.9124,-0.0001])
Shape279 = Shape()
Shape279.setUSE("HAnimJointShape")

Transform278.addChildren(Shape279)

HAnimSegment276.addChildren(Transform278)
#HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
Shape280 = Shape()
LineSet281 = LineSet()
LineSet281.setVertexCount([2])
Coordinate282 = Coordinate()
Coordinate282.setPoint([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])

LineSet281.setCoord(Coordinate282)
ColorRGBA283 = ColorRGBA()
ColorRGBA283.setUSE("HAnimSegmentLineColorRGBA")

LineSet281.setColor(ColorRGBA283)

Shape280.setGeometry(LineSet281)

HAnimSegment276.addChildren(Shape280)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
Shape284 = Shape()
LineSet285 = LineSet()
LineSet285.setVertexCount([2])
Coordinate286 = Coordinate()
Coordinate286.setPoint([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])

LineSet285.setCoord(Coordinate286)
ColorRGBA287 = ColorRGBA()
ColorRGBA287.setUSE("HAnimSiteLineColorRGBA")

LineSet285.setColor(ColorRGBA287)

Shape284.setGeometry(LineSet285)

HAnimSegment276.addChildren(Shape284)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
Shape288 = Shape()
LineSet289 = LineSet()
LineSet289.setVertexCount([2])
Coordinate290 = Coordinate()
Coordinate290.setPoint([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])

LineSet289.setCoord(Coordinate290)
ColorRGBA291 = ColorRGBA()
ColorRGBA291.setUSE("HAnimSiteLineColorRGBA")

LineSet289.setColor(ColorRGBA291)

Shape288.setGeometry(LineSet289)

HAnimSegment276.addChildren(Shape288)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
Shape292 = Shape()
LineSet293 = LineSet()
LineSet293.setVertexCount([2])
Coordinate294 = Coordinate()
Coordinate294.setPoint([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])

LineSet293.setCoord(Coordinate294)
ColorRGBA295 = ColorRGBA()
ColorRGBA295.setUSE("HAnimSiteLineColorRGBA")

LineSet293.setColor(ColorRGBA295)

Shape292.setGeometry(LineSet293)

HAnimSegment276.addChildren(Shape292)
HAnimSite296 = HAnimSite()
HAnimSite296.setName("r_knee_crease_pt")
HAnimSite296.setDEF("hanim_r_knee_crease_pt")
HAnimSite296.setTranslation([-0.0825,0.4932,-0.0326])
#HAnimSite visualization shape
TouchSensor297 = TouchSensor()
TouchSensor297.setDescription("HAnimSite r_knee_crease_pt")

HAnimSite296.addChildren(TouchSensor297)
Shape298 = Shape()
Shape298.setUSE("HAnimSiteShape")

HAnimSite296.addChildren(Shape298)

HAnimSegment276.addChildren(HAnimSite296)
HAnimSite299 = HAnimSite()
HAnimSite299.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite299.setDEF("hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite299.setTranslation([-0.1421,0.4992,0.031])
#HAnimSite visualization shape
TouchSensor300 = TouchSensor()
TouchSensor300.setDescription("HAnimSite r_femoral_lateral_epicn_pt")

HAnimSite299.addChildren(TouchSensor300)
Shape301 = Shape()
Shape301.setUSE("HAnimSiteShape")

HAnimSite299.addChildren(Shape301)

HAnimSegment276.addChildren(HAnimSite299)
HAnimSite302 = HAnimSite()
HAnimSite302.setName("r_femoral_medial_epicondyle_pt")
HAnimSite302.setDEF("hanim_r_femoral_medial_epicondyle_pt")
HAnimSite302.setTranslation([-0.0221,0.5014,0.0289])
#HAnimSite visualization shape
TouchSensor303 = TouchSensor()
TouchSensor303.setDescription("HAnimSite r_femoral_medial_epicn_pt")

HAnimSite302.addChildren(TouchSensor303)
Shape304 = Shape()
Shape304.setUSE("HAnimSiteShape")

HAnimSite302.addChildren(Shape304)

HAnimSegment276.addChildren(HAnimSite302)

HAnimJoint275.addChildren(HAnimSegment276)
HAnimJoint305 = HAnimJoint()
HAnimJoint305.setName("r_knee")
HAnimJoint305.setDEF("hanim_r_knee")
HAnimJoint305.setCenter([-0.104,0.4867,0.0308])
HAnimJoint305.setUlimit([0,0,0])
HAnimJoint305.setLlimit([0,0,0])
HAnimJoint305.setStiffness([0,0,0])
HAnimSegment306 = HAnimSegment()
HAnimSegment306.setName("r_calf")
HAnimSegment306.setDEF("hanim_r_calf")
#Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
TouchSensor307 = TouchSensor()
TouchSensor307.setDescription("HAnimJoint r_knee, HAnimSegment r_calf")

HAnimSegment306.addChildren(TouchSensor307)
Transform308 = Transform()
Transform308.setTranslation([-0.104,0.4867,0.0308])
Shape309 = Shape()
Shape309.setUSE("HAnimJointShape")

Transform308.addChildren(Shape309)

HAnimSegment306.addChildren(Transform308)
#HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
Shape310 = Shape()
LineSet311 = LineSet()
LineSet311.setVertexCount([2])
Coordinate312 = Coordinate()
Coordinate312.setPoint([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])

LineSet311.setCoord(Coordinate312)
ColorRGBA313 = ColorRGBA()
ColorRGBA313.setUSE("HAnimSegmentLineColorRGBA")

LineSet311.setColor(ColorRGBA313)

Shape310.setGeometry(LineSet311)

HAnimSegment306.addChildren(Shape310)

HAnimJoint305.addChildren(HAnimSegment306)
HAnimJoint314 = HAnimJoint()
HAnimJoint314.setName("r_talocrural")
HAnimJoint314.setDEF("hanim_r_talocrural")
HAnimJoint314.setCenter([-0.1101,0.0656,-0.0736])
HAnimJoint314.setUlimit([0,0,0])
HAnimJoint314.setLlimit([0,0,0])
HAnimJoint314.setStiffness([0,0,0])
HAnimSegment315 = HAnimSegment()
HAnimSegment315.setName("r_talus")
HAnimSegment315.setDEF("hanim_r_talus")
#Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
TouchSensor316 = TouchSensor()
TouchSensor316.setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus")

HAnimSegment315.addChildren(TouchSensor316)
Transform317 = Transform()
Transform317.setTranslation([-0.1101,0.0656,-0.0736])
Shape318 = Shape()
Shape318.setUSE("HAnimJointShape")

Transform317.addChildren(Shape318)

HAnimSegment315.addChildren(Transform317)
#HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
Shape319 = Shape()
LineSet320 = LineSet()
LineSet320.setVertexCount([2])
Coordinate321 = Coordinate()
Coordinate321.setPoint([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])

LineSet320.setCoord(Coordinate321)
ColorRGBA322 = ColorRGBA()
ColorRGBA322.setUSE("HAnimSegmentLineColorRGBA")

LineSet320.setColor(ColorRGBA322)

Shape319.setGeometry(LineSet320)

HAnimSegment315.addChildren(Shape319)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
Shape323 = Shape()
LineSet324 = LineSet()
LineSet324.setVertexCount([2])
Coordinate325 = Coordinate()
Coordinate325.setPoint([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])

LineSet324.setCoord(Coordinate325)
ColorRGBA326 = ColorRGBA()
ColorRGBA326.setUSE("HAnimSiteLineColorRGBA")

LineSet324.setColor(ColorRGBA326)

Shape323.setGeometry(LineSet324)

HAnimSegment315.addChildren(Shape323)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
Shape327 = Shape()
LineSet328 = LineSet()
LineSet328.setVertexCount([2])
Coordinate329 = Coordinate()
Coordinate329.setPoint([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])

LineSet328.setCoord(Coordinate329)
ColorRGBA330 = ColorRGBA()
ColorRGBA330.setUSE("HAnimSiteLineColorRGBA")

LineSet328.setColor(ColorRGBA330)

Shape327.setGeometry(LineSet328)

HAnimSegment315.addChildren(Shape327)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
Shape331 = Shape()
LineSet332 = LineSet()
LineSet332.setVertexCount([2])
Coordinate333 = Coordinate()
Coordinate333.setPoint([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])

LineSet332.setCoord(Coordinate333)
ColorRGBA334 = ColorRGBA()
ColorRGBA334.setUSE("HAnimSiteLineColorRGBA")

LineSet332.setColor(ColorRGBA334)

Shape331.setGeometry(LineSet332)

HAnimSegment315.addChildren(Shape331)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
Shape335 = Shape()
LineSet336 = LineSet()
LineSet336.setVertexCount([2])
Coordinate337 = Coordinate()
Coordinate337.setPoint([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])

LineSet336.setCoord(Coordinate337)
ColorRGBA338 = ColorRGBA()
ColorRGBA338.setUSE("HAnimSiteLineColorRGBA")

LineSet336.setColor(ColorRGBA338)

Shape335.setGeometry(LineSet336)

HAnimSegment315.addChildren(Shape335)
HAnimSite339 = HAnimSite()
HAnimSite339.setName("r_lateral_malleolus_pt")
HAnimSite339.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite339.setTranslation([-0.1006,0.0658,-0.1075])
#HAnimSite visualization shape
TouchSensor340 = TouchSensor()
TouchSensor340.setDescription("HAnimSite r_lateral_malleolus_pt")

HAnimSite339.addChildren(TouchSensor340)
Shape341 = Shape()
Shape341.setUSE("HAnimSiteShape")

HAnimSite339.addChildren(Shape341)

HAnimSegment315.addChildren(HAnimSite339)
HAnimSite342 = HAnimSite()
HAnimSite342.setName("r_medial_malleolus_pt")
HAnimSite342.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite342.setTranslation([-0.0591,0.076,-0.0928])
#HAnimSite visualization shape
TouchSensor343 = TouchSensor()
TouchSensor343.setDescription("HAnimSite r_medial_malleolus_pt")

HAnimSite342.addChildren(TouchSensor343)
Shape344 = Shape()
Shape344.setUSE("HAnimSiteShape")

HAnimSite342.addChildren(Shape344)

HAnimSegment315.addChildren(HAnimSite342)
HAnimSite345 = HAnimSite()
HAnimSite345.setName("r_sphyrion_pt")
HAnimSite345.setDEF("hanim_r_sphyrion_pt")
HAnimSite345.setTranslation([-0.0603,0.061,-0.1002])
#HAnimSite visualization shape
TouchSensor346 = TouchSensor()
TouchSensor346.setDescription("HAnimSite r_sphyrion_pt")

HAnimSite345.addChildren(TouchSensor346)
Shape347 = Shape()
Shape347.setUSE("HAnimSiteShape")

HAnimSite345.addChildren(Shape347)

HAnimSegment315.addChildren(HAnimSite345)
HAnimSite348 = HAnimSite()
HAnimSite348.setName("r_calcaneus_posterior_pt")
HAnimSite348.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite348.setTranslation([-0.0692,0.0297,-0.1221])
#HAnimSite visualization shape
TouchSensor349 = TouchSensor()
TouchSensor349.setDescription("HAnimSite r_calcaneous_post_pt")

HAnimSite348.addChildren(TouchSensor349)
Shape350 = Shape()
Shape350.setUSE("HAnimSiteShape")

HAnimSite348.addChildren(Shape350)

HAnimSegment315.addChildren(HAnimSite348)

HAnimJoint314.addChildren(HAnimSegment315)
HAnimJoint351 = HAnimJoint()
HAnimJoint351.setName("r_tarsometatarsal_2")
HAnimJoint351.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint351.setCenter([-0.1086,0.0001,-0.0368])
HAnimJoint351.setUlimit([0,0,0])
HAnimJoint351.setLlimit([0,0,0])
HAnimJoint351.setStiffness([0,0,0])
HAnimSegment352 = HAnimSegment()
HAnimSegment352.setName("r_metatarsal_2")
HAnimSegment352.setDEF("hanim_r_metatarsal_2")
#Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
TouchSensor353 = TouchSensor()
TouchSensor353.setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2")

HAnimSegment352.addChildren(TouchSensor353)
Transform354 = Transform()
Transform354.setTranslation([-0.1086,0.0001,-0.0368])
Shape355 = Shape()
Shape355.setUSE("HAnimJointShape")

Transform354.addChildren(Shape355)

HAnimSegment352.addChildren(Transform354)
#HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
Shape356 = Shape()
LineSet357 = LineSet()
LineSet357.setVertexCount([2])
Coordinate358 = Coordinate()
Coordinate358.setPoint([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])

LineSet357.setCoord(Coordinate358)
ColorRGBA359 = ColorRGBA()
ColorRGBA359.setUSE("HAnimSegmentLineColorRGBA")

LineSet357.setColor(ColorRGBA359)

Shape356.setGeometry(LineSet357)

HAnimSegment352.addChildren(Shape356)

HAnimJoint351.addChildren(HAnimSegment352)
HAnimJoint360 = HAnimJoint()
HAnimJoint360.setName("r_metatarsophalangeal_2")
HAnimJoint360.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint360.setCenter([-0.1086,0.0001,0.0368])
HAnimJoint360.setUlimit([0,0,0])
HAnimJoint360.setLlimit([0,0,0])
HAnimJoint360.setStiffness([0,0,0])
HAnimSegment361 = HAnimSegment()
HAnimSegment361.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment361.setDEF("hanim_r_tarsal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
TouchSensor362 = TouchSensor()
TouchSensor362.setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2")

HAnimSegment361.addChildren(TouchSensor362)
Transform363 = Transform()
Transform363.setTranslation([-0.1086,0.0001,0.0368])
Shape364 = Shape()
Shape364.setUSE("HAnimJointShape")

Transform363.addChildren(Shape364)

HAnimSegment361.addChildren(Transform363)
#HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
Shape365 = Shape()
LineSet366 = LineSet()
LineSet366.setVertexCount([2])
Coordinate367 = Coordinate()
Coordinate367.setPoint([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])

LineSet366.setCoord(Coordinate367)
ColorRGBA368 = ColorRGBA()
ColorRGBA368.setUSE("HAnimSegmentLineColorRGBA")

LineSet366.setColor(ColorRGBA368)

Shape365.setGeometry(LineSet366)

HAnimSegment361.addChildren(Shape365)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
Shape369 = Shape()
LineSet370 = LineSet()
LineSet370.setVertexCount([2])
Coordinate371 = Coordinate()
Coordinate371.setPoint([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])

LineSet370.setCoord(Coordinate371)
ColorRGBA372 = ColorRGBA()
ColorRGBA372.setUSE("HAnimSiteLineColorRGBA")

LineSet370.setColor(ColorRGBA372)

Shape369.setGeometry(LineSet370)

HAnimSegment361.addChildren(Shape369)
HAnimSite373 = HAnimSite()
HAnimSite373.setName("r_metatarsal_phalanx_1_pt")
HAnimSite373.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite373.setTranslation([-0.0521,0.026,0.0127])
#HAnimSite visualization shape
TouchSensor374 = TouchSensor()
TouchSensor374.setDescription("HAnimSite r_metatarsal_pha1_pt")

HAnimSite373.addChildren(TouchSensor374)
Shape375 = Shape()
Shape375.setUSE("HAnimSiteShape")

HAnimSite373.addChildren(Shape375)

HAnimSegment361.addChildren(HAnimSite373)

HAnimJoint360.addChildren(HAnimSegment361)
HAnimJoint376 = HAnimJoint()
HAnimJoint376.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint376.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint376.setCenter([-0.1086,0,0.0762])
HAnimJoint376.setUlimit([0,0,0])
HAnimJoint376.setLlimit([0,0,0])
HAnimJoint376.setStiffness([0,0,0])
HAnimSegment377 = HAnimSegment()
HAnimSegment377.setName("r_tarsal_distal_phalanx_2")
HAnimSegment377.setDEF("hanim_r_tarsal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
TouchSensor378 = TouchSensor()
TouchSensor378.setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2")

HAnimSegment377.addChildren(TouchSensor378)
Transform379 = Transform()
Transform379.setTranslation([-0.1086,0,0.0762])
Shape380 = Shape()
Shape380.setUSE("HAnimJointShape")

Transform379.addChildren(Shape380)

HAnimSegment377.addChildren(Transform379)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
Shape381 = Shape()
LineSet382 = LineSet()
LineSet382.setVertexCount([2])
Coordinate383 = Coordinate()
Coordinate383.setPoint([-0.1086,0,0.0762,-0.1043,0.0227,0.145])

LineSet382.setCoord(Coordinate383)
ColorRGBA384 = ColorRGBA()
ColorRGBA384.setUSE("HAnimSiteLineColorRGBA")

LineSet382.setColor(ColorRGBA384)

Shape381.setGeometry(LineSet382)

HAnimSegment377.addChildren(Shape381)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
Shape385 = Shape()
LineSet386 = LineSet()
LineSet386.setVertexCount([2])
Coordinate387 = Coordinate()
Coordinate387.setPoint([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])

LineSet386.setCoord(Coordinate387)
ColorRGBA388 = ColorRGBA()
ColorRGBA388.setUSE("HAnimSiteLineColorRGBA")

LineSet386.setColor(ColorRGBA388)

Shape385.setGeometry(LineSet386)

HAnimSegment377.addChildren(Shape385)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
Shape389 = Shape()
LineSet390 = LineSet()
LineSet390.setVertexCount([2])
Coordinate391 = Coordinate()
Coordinate391.setPoint([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])

LineSet390.setCoord(Coordinate391)
ColorRGBA392 = ColorRGBA()
ColorRGBA392.setUSE("HAnimSiteLineColorRGBA")

LineSet390.setColor(ColorRGBA392)

Shape389.setGeometry(LineSet390)

HAnimSegment377.addChildren(Shape389)
HAnimSite393 = HAnimSite()
HAnimSite393.setName("r_forefoot_tip_pt")
HAnimSite393.setDEF("hanim_r_forefoot_tip_pt")
HAnimSite393.setTranslation([-0.1043,0.0227,0.145])
#HAnimSite visualization shape
TouchSensor394 = TouchSensor()
TouchSensor394.setDescription("HAnimSite r_forefoot_tip")

HAnimSite393.addChildren(TouchSensor394)
Shape395 = Shape()
Shape395.setUSE("HAnimSiteShape")

HAnimSite393.addChildren(Shape395)

HAnimSegment377.addChildren(HAnimSite393)
HAnimSite396 = HAnimSite()
HAnimSite396.setName("r_metatarsal_phalanx_5_pt")
HAnimSite396.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite396.setTranslation([-0.1523,0.0166,0.0895])
#HAnimSite visualization shape
TouchSensor397 = TouchSensor()
TouchSensor397.setDescription("HAnimSite r_metatarsal_pha5_pt")

HAnimSite396.addChildren(TouchSensor397)
Shape398 = Shape()
Shape398.setUSE("HAnimSiteShape")

HAnimSite396.addChildren(Shape398)

HAnimSegment377.addChildren(HAnimSite396)
HAnimSite399 = HAnimSite()
HAnimSite399.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite399.setDEF("hanim_r_tarsal_distal_phalanx_2_pt")
HAnimSite399.setTranslation([-0.0883,0.0134,0.1383])
#HAnimSite visualization shape
TouchSensor400 = TouchSensor()
TouchSensor400.setDescription("HAnimSite r_digit2_pt")

HAnimSite399.addChildren(TouchSensor400)
Shape401 = Shape()
Shape401.setUSE("HAnimSiteShape")

HAnimSite399.addChildren(Shape401)

HAnimSegment377.addChildren(HAnimSite399)

HAnimJoint376.addChildren(HAnimSegment377)

HAnimJoint360.addChildren(HAnimJoint376)

HAnimJoint351.addChildren(HAnimJoint360)

HAnimJoint314.addChildren(HAnimJoint351)

HAnimJoint305.addChildren(HAnimJoint314)

HAnimJoint275.addChildren(HAnimJoint305)

HAnimJoint68.addChildren(HAnimJoint275)

HAnimJoint52.addChildren(HAnimJoint68)
HAnimJoint402 = HAnimJoint()
HAnimJoint402.setName("vl5")
HAnimJoint402.setDEF("hanim_vl5")
HAnimJoint402.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint402.setUlimit([0,0,0])
HAnimJoint402.setLlimit([0,0,0])
HAnimJoint402.setStiffness([0,0,0])
HAnimSegment403 = HAnimSegment()
HAnimSegment403.setName("l5")
HAnimSegment403.setDEF("hanim_l5")
#Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
TouchSensor404 = TouchSensor()
TouchSensor404.setDescription("HAnimJoint vl5, HAnimSegment l5")

HAnimSegment403.addChildren(TouchSensor404)
Transform405 = Transform()
Transform405.setTranslation([0.0028,1.0568,-0.0776])
Shape406 = Shape()
Shape406.setUSE("HAnimJointShape")

Transform405.addChildren(Shape406)

HAnimSegment403.addChildren(Transform405)
#HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
Shape407 = Shape()
LineSet408 = LineSet()
LineSet408.setVertexCount([2])
Coordinate409 = Coordinate()
Coordinate409.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet408.setCoord(Coordinate409)
ColorRGBA410 = ColorRGBA()
ColorRGBA410.setUSE("HAnimSegmentLineColorRGBA")

LineSet408.setColor(ColorRGBA410)

Shape407.setGeometry(LineSet408)

HAnimSegment403.addChildren(Shape407)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
Shape411 = Shape()
LineSet412 = LineSet()
LineSet412.setVertexCount([2])
Coordinate413 = Coordinate()
Coordinate413.setPoint([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])

LineSet412.setCoord(Coordinate413)
ColorRGBA414 = ColorRGBA()
ColorRGBA414.setUSE("HAnimSiteLineColorRGBA")

LineSet412.setColor(ColorRGBA414)

Shape411.setGeometry(LineSet412)

HAnimSegment403.addChildren(Shape411)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
Shape415 = Shape()
LineSet416 = LineSet()
LineSet416.setVertexCount([2])
Coordinate417 = Coordinate()
Coordinate417.setPoint([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])

LineSet416.setCoord(Coordinate417)
ColorRGBA418 = ColorRGBA()
ColorRGBA418.setUSE("HAnimSiteLineColorRGBA")

LineSet416.setColor(ColorRGBA418)

Shape415.setGeometry(LineSet416)

HAnimSegment403.addChildren(Shape415)
HAnimSite419 = HAnimSite()
HAnimSite419.setName("waist_preferred_posterior_pt")
HAnimSite419.setDEF("hanim_waist_preferred_posterior_pt")
HAnimSite419.setTranslation([0,1.0915,-0.1091])
#HAnimSite visualization shape
TouchSensor420 = TouchSensor()
TouchSensor420.setDescription("HAnimSite waist_preferred_post_pt")

HAnimSite419.addChildren(TouchSensor420)
Shape421 = Shape()
Shape421.setUSE("HAnimSiteShape")

HAnimSite419.addChildren(Shape421)

HAnimSegment403.addChildren(HAnimSite419)
HAnimSite422 = HAnimSite()
HAnimSite422.setName("navel_pt")
HAnimSite422.setDEF("hanim_navel_pt")
HAnimSite422.setTranslation([0.0069,1.0966,0.1017])
#HAnimSite visualization shape
TouchSensor423 = TouchSensor()
TouchSensor423.setDescription("HAnimSite navel_pt")

HAnimSite422.addChildren(TouchSensor423)
Shape424 = Shape()
Shape424.setUSE("HAnimSiteShape")

HAnimSite422.addChildren(Shape424)

HAnimSegment403.addChildren(HAnimSite422)

HAnimJoint402.addChildren(HAnimSegment403)
HAnimJoint425 = HAnimJoint()
HAnimJoint425.setName("vl4")
HAnimJoint425.setDEF("hanim_vl4")
HAnimJoint425.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint425.setUlimit([0,0,0])
HAnimJoint425.setLlimit([0,0,0])
HAnimJoint425.setStiffness([0,0,0])
HAnimSegment426 = HAnimSegment()
HAnimSegment426.setName("l4")
HAnimSegment426.setDEF("hanim_l4")
#Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
TouchSensor427 = TouchSensor()
TouchSensor427.setDescription("HAnimJoint vl4, HAnimSegment l4")

HAnimSegment426.addChildren(TouchSensor427)
Transform428 = Transform()
Transform428.setTranslation([0.0035,1.0925,-0.0787])
Shape429 = Shape()
Shape429.setUSE("HAnimJointShape")

Transform428.addChildren(Shape429)

HAnimSegment426.addChildren(Transform428)
#HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
Shape430 = Shape()
LineSet431 = LineSet()
LineSet431.setVertexCount([2])
Coordinate432 = Coordinate()
Coordinate432.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet431.setCoord(Coordinate432)
ColorRGBA433 = ColorRGBA()
ColorRGBA433.setUSE("HAnimSegmentLineColorRGBA")

LineSet431.setColor(ColorRGBA433)

Shape430.setGeometry(LineSet431)

HAnimSegment426.addChildren(Shape430)

HAnimJoint425.addChildren(HAnimSegment426)
HAnimJoint434 = HAnimJoint()
HAnimJoint434.setName("vl3")
HAnimJoint434.setDEF("hanim_vl3")
HAnimJoint434.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint434.setUlimit([0,0,0])
HAnimJoint434.setLlimit([0,0,0])
HAnimJoint434.setStiffness([0,0,0])
HAnimSegment435 = HAnimSegment()
HAnimSegment435.setName("l3")
HAnimSegment435.setDEF("hanim_l3")
#Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
TouchSensor436 = TouchSensor()
TouchSensor436.setDescription("HAnimJoint vl3, HAnimSegment l3")

HAnimSegment435.addChildren(TouchSensor436)
Transform437 = Transform()
Transform437.setTranslation([0.0041,1.1276,-0.0796])
Shape438 = Shape()
Shape438.setUSE("HAnimJointShape")

Transform437.addChildren(Shape438)

HAnimSegment435.addChildren(Transform437)
#HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
Shape439 = Shape()
LineSet440 = LineSet()
LineSet440.setVertexCount([2])
Coordinate441 = Coordinate()
Coordinate441.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet440.setCoord(Coordinate441)
ColorRGBA442 = ColorRGBA()
ColorRGBA442.setUSE("HAnimSegmentLineColorRGBA")

LineSet440.setColor(ColorRGBA442)

Shape439.setGeometry(LineSet440)

HAnimSegment435.addChildren(Shape439)

HAnimJoint434.addChildren(HAnimSegment435)
HAnimJoint443 = HAnimJoint()
HAnimJoint443.setName("vl2")
HAnimJoint443.setDEF("hanim_vl2")
HAnimJoint443.setCenter([0.0045,1.1546,-0.08])
HAnimJoint443.setUlimit([0,0,0])
HAnimJoint443.setLlimit([0,0,0])
HAnimJoint443.setStiffness([0,0,0])
HAnimSegment444 = HAnimSegment()
HAnimSegment444.setName("l2")
HAnimSegment444.setDEF("hanim_l2")
#Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
TouchSensor445 = TouchSensor()
TouchSensor445.setDescription("HAnimJoint vl2, HAnimSegment l2")

HAnimSegment444.addChildren(TouchSensor445)
Transform446 = Transform()
Transform446.setTranslation([0.0045,1.1546,-0.08])
Shape447 = Shape()
Shape447.setUSE("HAnimJointShape")

Transform446.addChildren(Shape447)

HAnimSegment444.addChildren(Transform446)
#HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
Shape448 = Shape()
LineSet449 = LineSet()
LineSet449.setVertexCount([2])
Coordinate450 = Coordinate()
Coordinate450.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet449.setCoord(Coordinate450)
ColorRGBA451 = ColorRGBA()
ColorRGBA451.setUSE("HAnimSegmentLineColorRGBA")

LineSet449.setColor(ColorRGBA451)

Shape448.setGeometry(LineSet449)

HAnimSegment444.addChildren(Shape448)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
Shape452 = Shape()
LineSet453 = LineSet()
LineSet453.setVertexCount([2])
Coordinate454 = Coordinate()
Coordinate454.setPoint([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])

LineSet453.setCoord(Coordinate454)
ColorRGBA455 = ColorRGBA()
ColorRGBA455.setUSE("HAnimSiteLineColorRGBA")

LineSet453.setColor(ColorRGBA455)

Shape452.setGeometry(LineSet453)

HAnimSegment444.addChildren(Shape452)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
Shape456 = Shape()
LineSet457 = LineSet()
LineSet457.setVertexCount([2])
Coordinate458 = Coordinate()
Coordinate458.setPoint([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])

LineSet457.setCoord(Coordinate458)
ColorRGBA459 = ColorRGBA()
ColorRGBA459.setUSE("HAnimSiteLineColorRGBA")

LineSet457.setColor(ColorRGBA459)

Shape456.setGeometry(LineSet457)

HAnimSegment444.addChildren(Shape456)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
Shape460 = Shape()
LineSet461 = LineSet()
LineSet461.setVertexCount([2])
Coordinate462 = Coordinate()
Coordinate462.setPoint([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])

LineSet461.setCoord(Coordinate462)
ColorRGBA463 = ColorRGBA()
ColorRGBA463.setUSE("HAnimSiteLineColorRGBA")

LineSet461.setColor(ColorRGBA463)

Shape460.setGeometry(LineSet461)

HAnimSegment444.addChildren(Shape460)
HAnimSite464 = HAnimSite()
HAnimSite464.setName("r_rib10_pt")
HAnimSite464.setDEF("hanim_r_rib10_pt")
HAnimSite464.setTranslation([-0.0711,1.1941,0.1016])
#HAnimSite visualization shape
TouchSensor465 = TouchSensor()
TouchSensor465.setDescription("HAnimSite r_rib10_pt")

HAnimSite464.addChildren(TouchSensor465)
Shape466 = Shape()
Shape466.setUSE("HAnimSiteShape")

HAnimSite464.addChildren(Shape466)

HAnimSegment444.addChildren(HAnimSite464)
HAnimSite467 = HAnimSite()
HAnimSite467.setName("l_rib10_pt")
HAnimSite467.setDEF("hanim_l_rib10_pt")
HAnimSite467.setTranslation([0.0871,1.1925,0.0992])
#HAnimSite visualization shape
TouchSensor468 = TouchSensor()
TouchSensor468.setDescription("HAnimSite l_rib10_pt")

HAnimSite467.addChildren(TouchSensor468)
Shape469 = Shape()
Shape469.setUSE("HAnimSiteShape")

HAnimSite467.addChildren(Shape469)

HAnimSegment444.addChildren(HAnimSite467)
HAnimSite470 = HAnimSite()
HAnimSite470.setName("rib10_midspine_pt")
HAnimSite470.setDEF("hanim_rib10_midspine_pt")
HAnimSite470.setTranslation([0.0049,1.1908,-0.1113])
#HAnimSite visualization shape
TouchSensor471 = TouchSensor()
TouchSensor471.setDescription("HAnimSite rib10_midspine_pt")

HAnimSite470.addChildren(TouchSensor471)
Shape472 = Shape()
Shape472.setUSE("HAnimSiteShape")

HAnimSite470.addChildren(Shape472)

HAnimSegment444.addChildren(HAnimSite470)

HAnimJoint443.addChildren(HAnimSegment444)
HAnimJoint473 = HAnimJoint()
HAnimJoint473.setName("vl1")
HAnimJoint473.setDEF("hanim_vl1")
HAnimJoint473.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint473.setUlimit([0,0,0])
HAnimJoint473.setLlimit([0,0,0])
HAnimJoint473.setStiffness([0,0,0])
HAnimSegment474 = HAnimSegment()
HAnimSegment474.setName("l1")
HAnimSegment474.setDEF("hanim_l1")
#Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
TouchSensor475 = TouchSensor()
TouchSensor475.setDescription("HAnimJoint vl1, HAnimSegment l1")

HAnimSegment474.addChildren(TouchSensor475)
Transform476 = Transform()
Transform476.setTranslation([0.0048,1.1912,-0.0805])
Shape477 = Shape()
Shape477.setUSE("HAnimJointShape")

Transform476.addChildren(Shape477)

HAnimSegment474.addChildren(Transform476)
#HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
Shape478 = Shape()
LineSet479 = LineSet()
LineSet479.setVertexCount([2])
Coordinate480 = Coordinate()
Coordinate480.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet479.setCoord(Coordinate480)
ColorRGBA481 = ColorRGBA()
ColorRGBA481.setUSE("HAnimSegmentLineColorRGBA")

LineSet479.setColor(ColorRGBA481)

Shape478.setGeometry(LineSet479)

HAnimSegment474.addChildren(Shape478)

HAnimJoint473.addChildren(HAnimSegment474)
HAnimJoint482 = HAnimJoint()
HAnimJoint482.setName("vt12")
HAnimJoint482.setDEF("hanim_vt12")
HAnimJoint482.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint482.setUlimit([0,0,0])
HAnimJoint482.setLlimit([0,0,0])
HAnimJoint482.setStiffness([0,0,0])
HAnimSegment483 = HAnimSegment()
HAnimSegment483.setName("t12")
HAnimSegment483.setDEF("hanim_t12")
#Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
TouchSensor484 = TouchSensor()
TouchSensor484.setDescription("HAnimJoint vt12, HAnimSegment t12")

HAnimSegment483.addChildren(TouchSensor484)
Transform485 = Transform()
Transform485.setTranslation([0.0051,1.2278,-0.0808])
Shape486 = Shape()
Shape486.setUSE("HAnimJointShape")

Transform485.addChildren(Shape486)

HAnimSegment483.addChildren(Transform485)
#HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
Shape487 = Shape()
LineSet488 = LineSet()
LineSet488.setVertexCount([2])
Coordinate489 = Coordinate()
Coordinate489.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet488.setCoord(Coordinate489)
ColorRGBA490 = ColorRGBA()
ColorRGBA490.setUSE("HAnimSegmentLineColorRGBA")

LineSet488.setColor(ColorRGBA490)

Shape487.setGeometry(LineSet488)

HAnimSegment483.addChildren(Shape487)

HAnimJoint482.addChildren(HAnimSegment483)
HAnimJoint491 = HAnimJoint()
HAnimJoint491.setName("vt11")
HAnimJoint491.setDEF("hanim_vt11")
HAnimJoint491.setCenter([0.0053,1.2679,-0.081])
HAnimJoint491.setUlimit([0,0,0])
HAnimJoint491.setLlimit([0,0,0])
HAnimJoint491.setStiffness([0,0,0])
HAnimSegment492 = HAnimSegment()
HAnimSegment492.setName("t11")
HAnimSegment492.setDEF("hanim_t11")
#Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
TouchSensor493 = TouchSensor()
TouchSensor493.setDescription("HAnimJoint vt11, HAnimSegment t11")

HAnimSegment492.addChildren(TouchSensor493)
Transform494 = Transform()
Transform494.setTranslation([0.0053,1.2679,-0.081])
Shape495 = Shape()
Shape495.setUSE("HAnimJointShape")

Transform494.addChildren(Shape495)

HAnimSegment492.addChildren(Transform494)
#HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
Shape496 = Shape()
LineSet497 = LineSet()
LineSet497.setVertexCount([2])
Coordinate498 = Coordinate()
Coordinate498.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet497.setCoord(Coordinate498)
ColorRGBA499 = ColorRGBA()
ColorRGBA499.setUSE("HAnimSegmentLineColorRGBA")

LineSet497.setColor(ColorRGBA499)

Shape496.setGeometry(LineSet497)

HAnimSegment492.addChildren(Shape496)

HAnimJoint491.addChildren(HAnimSegment492)
HAnimJoint500 = HAnimJoint()
HAnimJoint500.setName("vt10")
HAnimJoint500.setDEF("hanim_vt10")
HAnimJoint500.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint500.setUlimit([0,0,0])
HAnimJoint500.setLlimit([0,0,0])
HAnimJoint500.setStiffness([0,0,0])
HAnimSegment501 = HAnimSegment()
HAnimSegment501.setName("t10")
HAnimSegment501.setDEF("hanim_t10")
#Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
TouchSensor502 = TouchSensor()
TouchSensor502.setDescription("HAnimJoint vt10, HAnimSegment t10")

HAnimSegment501.addChildren(TouchSensor502)
Transform503 = Transform()
Transform503.setTranslation([0.0056,1.2848,-0.0822])
Shape504 = Shape()
Shape504.setUSE("HAnimJointShape")

Transform503.addChildren(Shape504)

HAnimSegment501.addChildren(Transform503)
#HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
Shape505 = Shape()
LineSet506 = LineSet()
LineSet506.setVertexCount([2])
Coordinate507 = Coordinate()
Coordinate507.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet506.setCoord(Coordinate507)
ColorRGBA508 = ColorRGBA()
ColorRGBA508.setUSE("HAnimSegmentLineColorRGBA")

LineSet506.setColor(ColorRGBA508)

Shape505.setGeometry(LineSet506)

HAnimSegment501.addChildren(Shape505)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
Shape509 = Shape()
LineSet510 = LineSet()
LineSet510.setVertexCount([2])
Coordinate511 = Coordinate()
Coordinate511.setPoint([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])

LineSet510.setCoord(Coordinate511)
ColorRGBA512 = ColorRGBA()
ColorRGBA512.setUSE("HAnimSiteLineColorRGBA")

LineSet510.setColor(ColorRGBA512)

Shape509.setGeometry(LineSet510)

HAnimSegment501.addChildren(Shape509)
HAnimSite513 = HAnimSite()
HAnimSite513.setName("substernale_pt")
HAnimSite513.setDEF("hanim_substernale_pt")
HAnimSite513.setTranslation([0.0085,1.2995,0.1147])
#HAnimSite visualization shape
TouchSensor514 = TouchSensor()
TouchSensor514.setDescription("HAnimSite substernale_pt")

HAnimSite513.addChildren(TouchSensor514)
Shape515 = Shape()
Shape515.setUSE("HAnimSiteShape")

HAnimSite513.addChildren(Shape515)

HAnimSegment501.addChildren(HAnimSite513)

HAnimJoint500.addChildren(HAnimSegment501)
HAnimJoint516 = HAnimJoint()
HAnimJoint516.setName("vt9")
HAnimJoint516.setDEF("hanim_vt9")
HAnimJoint516.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint516.setUlimit([0,0,0])
HAnimJoint516.setLlimit([0,0,0])
HAnimJoint516.setStiffness([0,0,0])
HAnimSegment517 = HAnimSegment()
HAnimSegment517.setName("t9")
HAnimSegment517.setDEF("hanim_t9")
#Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
TouchSensor518 = TouchSensor()
TouchSensor518.setDescription("HAnimJoint vt9, HAnimSegment t9")

HAnimSegment517.addChildren(TouchSensor518)
Transform519 = Transform()
Transform519.setTranslation([0.0057,1.3126,-0.0838])
Shape520 = Shape()
Shape520.setUSE("HAnimJointShape")

Transform519.addChildren(Shape520)

HAnimSegment517.addChildren(Transform519)
#HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
Shape521 = Shape()
LineSet522 = LineSet()
LineSet522.setVertexCount([2])
Coordinate523 = Coordinate()
Coordinate523.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet522.setCoord(Coordinate523)
ColorRGBA524 = ColorRGBA()
ColorRGBA524.setUSE("HAnimSegmentLineColorRGBA")

LineSet522.setColor(ColorRGBA524)

Shape521.setGeometry(LineSet522)

HAnimSegment517.addChildren(Shape521)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
Shape525 = Shape()
LineSet526 = LineSet()
LineSet526.setVertexCount([2])
Coordinate527 = Coordinate()
Coordinate527.setPoint([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])

LineSet526.setCoord(Coordinate527)
ColorRGBA528 = ColorRGBA()
ColorRGBA528.setUSE("HAnimSiteLineColorRGBA")

LineSet526.setColor(ColorRGBA528)

Shape525.setGeometry(LineSet526)

HAnimSegment517.addChildren(Shape525)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
Shape529 = Shape()
LineSet530 = LineSet()
LineSet530.setVertexCount([2])
Coordinate531 = Coordinate()
Coordinate531.setPoint([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])

LineSet530.setCoord(Coordinate531)
ColorRGBA532 = ColorRGBA()
ColorRGBA532.setUSE("HAnimSiteLineColorRGBA")

LineSet530.setColor(ColorRGBA532)

Shape529.setGeometry(LineSet530)

HAnimSegment517.addChildren(Shape529)
HAnimSite533 = HAnimSite()
HAnimSite533.setName("r_thelion_pt")
HAnimSite533.setDEF("hanim_r_thelion_pt")
HAnimSite533.setTranslation([-0.0736,1.3385,0.1217])
#HAnimSite visualization shape
TouchSensor534 = TouchSensor()
TouchSensor534.setDescription("HAnimSite r_thelion_pt")

HAnimSite533.addChildren(TouchSensor534)
Shape535 = Shape()
Shape535.setUSE("HAnimSiteShape")

HAnimSite533.addChildren(Shape535)

HAnimSegment517.addChildren(HAnimSite533)
HAnimSite536 = HAnimSite()
HAnimSite536.setName("l_thelion_pt")
HAnimSite536.setDEF("hanim_l_thelion_pt")
HAnimSite536.setTranslation([0.0918,1.3382,0.1192])
#HAnimSite visualization shape
TouchSensor537 = TouchSensor()
TouchSensor537.setDescription("HAnimSite l_thelion_pt")

HAnimSite536.addChildren(TouchSensor537)
Shape538 = Shape()
Shape538.setUSE("HAnimSiteShape")

HAnimSite536.addChildren(Shape538)

HAnimSegment517.addChildren(HAnimSite536)

HAnimJoint516.addChildren(HAnimSegment517)
HAnimJoint539 = HAnimJoint()
HAnimJoint539.setName("vt8")
HAnimJoint539.setDEF("hanim_vt8")
HAnimJoint539.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint539.setUlimit([0,0,0])
HAnimJoint539.setLlimit([0,0,0])
HAnimJoint539.setStiffness([0,0,0])
HAnimSegment540 = HAnimSegment()
HAnimSegment540.setName("t8")
HAnimSegment540.setDEF("hanim_t8")
#Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
TouchSensor541 = TouchSensor()
TouchSensor541.setDescription("HAnimJoint vt8, HAnimSegment t8")

HAnimSegment540.addChildren(TouchSensor541)
Transform542 = Transform()
Transform542.setTranslation([0.0057,1.3382,-0.0845])
Shape543 = Shape()
Shape543.setUSE("HAnimJointShape")

Transform542.addChildren(Shape543)

HAnimSegment540.addChildren(Transform542)
#HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
Shape544 = Shape()
LineSet545 = LineSet()
LineSet545.setVertexCount([2])
Coordinate546 = Coordinate()
Coordinate546.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet545.setCoord(Coordinate546)
ColorRGBA547 = ColorRGBA()
ColorRGBA547.setUSE("HAnimSegmentLineColorRGBA")

LineSet545.setColor(ColorRGBA547)

Shape544.setGeometry(LineSet545)

HAnimSegment540.addChildren(Shape544)

HAnimJoint539.addChildren(HAnimSegment540)
HAnimJoint548 = HAnimJoint()
HAnimJoint548.setName("vt7")
HAnimJoint548.setDEF("hanim_vt7")
HAnimJoint548.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint548.setUlimit([0,0,0])
HAnimJoint548.setLlimit([0,0,0])
HAnimJoint548.setStiffness([0,0,0])
HAnimSegment549 = HAnimSegment()
HAnimSegment549.setName("t7")
HAnimSegment549.setDEF("hanim_t7")
#Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
TouchSensor550 = TouchSensor()
TouchSensor550.setDescription("HAnimJoint vt7, HAnimSegment t7")

HAnimSegment549.addChildren(TouchSensor550)
Transform551 = Transform()
Transform551.setTranslation([0.0058,1.3625,-0.0833])
Shape552 = Shape()
Shape552.setUSE("HAnimJointShape")

Transform551.addChildren(Shape552)

HAnimSegment549.addChildren(Transform551)
#HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
Shape553 = Shape()
LineSet554 = LineSet()
LineSet554.setVertexCount([2])
Coordinate555 = Coordinate()
Coordinate555.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet554.setCoord(Coordinate555)
ColorRGBA556 = ColorRGBA()
ColorRGBA556.setUSE("HAnimSegmentLineColorRGBA")

LineSet554.setColor(ColorRGBA556)

Shape553.setGeometry(LineSet554)

HAnimSegment549.addChildren(Shape553)

HAnimJoint548.addChildren(HAnimSegment549)
HAnimJoint557 = HAnimJoint()
HAnimJoint557.setName("vt6")
HAnimJoint557.setDEF("hanim_vt6")
HAnimJoint557.setCenter([0.0059,1.3866,-0.08])
HAnimJoint557.setUlimit([0,0,0])
HAnimJoint557.setLlimit([0,0,0])
HAnimJoint557.setStiffness([0,0,0])
HAnimSegment558 = HAnimSegment()
HAnimSegment558.setName("t6")
HAnimSegment558.setDEF("hanim_t6")
#Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
TouchSensor559 = TouchSensor()
TouchSensor559.setDescription("HAnimJoint vt6, HAnimSegment t6")

HAnimSegment558.addChildren(TouchSensor559)
Transform560 = Transform()
Transform560.setTranslation([0.0059,1.3866,-0.08])
Shape561 = Shape()
Shape561.setUSE("HAnimJointShape")

Transform560.addChildren(Shape561)

HAnimSegment558.addChildren(Transform560)
#HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
Shape562 = Shape()
LineSet563 = LineSet()
LineSet563.setVertexCount([2])
Coordinate564 = Coordinate()
Coordinate564.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet563.setCoord(Coordinate564)
ColorRGBA565 = ColorRGBA()
ColorRGBA565.setUSE("HAnimSegmentLineColorRGBA")

LineSet563.setColor(ColorRGBA565)

Shape562.setGeometry(LineSet563)

HAnimSegment558.addChildren(Shape562)

HAnimJoint557.addChildren(HAnimSegment558)
HAnimJoint566 = HAnimJoint()
HAnimJoint566.setName("vt5")
HAnimJoint566.setDEF("hanim_vt5")
HAnimJoint566.setCenter([0.006,1.4102,-0.0745])
HAnimJoint566.setUlimit([0,0,0])
HAnimJoint566.setLlimit([0,0,0])
HAnimJoint566.setStiffness([0,0,0])
HAnimSegment567 = HAnimSegment()
HAnimSegment567.setName("t5")
HAnimSegment567.setDEF("hanim_t5")
#Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
TouchSensor568 = TouchSensor()
TouchSensor568.setDescription("HAnimJoint vt5, HAnimSegment t5")

HAnimSegment567.addChildren(TouchSensor568)
Transform569 = Transform()
Transform569.setTranslation([0.006,1.4102,-0.0745])
Shape570 = Shape()
Shape570.setUSE("HAnimJointShape")

Transform569.addChildren(Shape570)

HAnimSegment567.addChildren(Transform569)
#HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
Shape571 = Shape()
LineSet572 = LineSet()
LineSet572.setVertexCount([2])
Coordinate573 = Coordinate()
Coordinate573.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet572.setCoord(Coordinate573)
ColorRGBA574 = ColorRGBA()
ColorRGBA574.setUSE("HAnimSegmentLineColorRGBA")

LineSet572.setColor(ColorRGBA574)

Shape571.setGeometry(LineSet572)

HAnimSegment567.addChildren(Shape571)

HAnimJoint566.addChildren(HAnimSegment567)
HAnimJoint575 = HAnimJoint()
HAnimJoint575.setName("vt4")
HAnimJoint575.setDEF("hanim_vt4")
HAnimJoint575.setCenter([0.0061,1.432,-0.0675])
HAnimJoint575.setUlimit([0,0,0])
HAnimJoint575.setLlimit([0,0,0])
HAnimJoint575.setStiffness([0,0,0])
HAnimSegment576 = HAnimSegment()
HAnimSegment576.setName("t4")
HAnimSegment576.setDEF("hanim_t4")
#Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
TouchSensor577 = TouchSensor()
TouchSensor577.setDescription("HAnimJoint vt4, HAnimSegment t4")

HAnimSegment576.addChildren(TouchSensor577)
Transform578 = Transform()
Transform578.setTranslation([0.0061,1.432,-0.0675])
Shape579 = Shape()
Shape579.setUSE("HAnimJointShape")

Transform578.addChildren(Shape579)

HAnimSegment576.addChildren(Transform578)
#HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
Shape580 = Shape()
LineSet581 = LineSet()
LineSet581.setVertexCount([2])
Coordinate582 = Coordinate()
Coordinate582.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet581.setCoord(Coordinate582)
ColorRGBA583 = ColorRGBA()
ColorRGBA583.setUSE("HAnimSegmentLineColorRGBA")

LineSet581.setColor(ColorRGBA583)

Shape580.setGeometry(LineSet581)

HAnimSegment576.addChildren(Shape580)

HAnimJoint575.addChildren(HAnimSegment576)
HAnimJoint584 = HAnimJoint()
HAnimJoint584.setName("vt3")
HAnimJoint584.setDEF("hanim_vt3")
HAnimJoint584.setCenter([0.0062,1.4583,-0.057])
HAnimJoint584.setUlimit([0,0,0])
HAnimJoint584.setLlimit([0,0,0])
HAnimJoint584.setStiffness([0,0,0])
HAnimSegment585 = HAnimSegment()
HAnimSegment585.setName("t3")
HAnimSegment585.setDEF("hanim_t3")
#Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
TouchSensor586 = TouchSensor()
TouchSensor586.setDescription("HAnimJoint vt3, HAnimSegment t3")

HAnimSegment585.addChildren(TouchSensor586)
Transform587 = Transform()
Transform587.setTranslation([0.0062,1.4583,-0.057])
Shape588 = Shape()
Shape588.setUSE("HAnimJointShape")

Transform587.addChildren(Shape588)

HAnimSegment585.addChildren(Transform587)
#HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
Shape589 = Shape()
LineSet590 = LineSet()
LineSet590.setVertexCount([2])
Coordinate591 = Coordinate()
Coordinate591.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet590.setCoord(Coordinate591)
ColorRGBA592 = ColorRGBA()
ColorRGBA592.setUSE("HAnimSegmentLineColorRGBA")

LineSet590.setColor(ColorRGBA592)

Shape589.setGeometry(LineSet590)

HAnimSegment585.addChildren(Shape589)

HAnimJoint584.addChildren(HAnimSegment585)
HAnimJoint593 = HAnimJoint()
HAnimJoint593.setName("vt2")
HAnimJoint593.setDEF("hanim_vt2")
HAnimJoint593.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint593.setUlimit([0,0,0])
HAnimJoint593.setLlimit([0,0,0])
HAnimJoint593.setStiffness([0,0,0])
HAnimSegment594 = HAnimSegment()
HAnimSegment594.setName("t2")
HAnimSegment594.setDEF("hanim_t2")
#Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
TouchSensor595 = TouchSensor()
TouchSensor595.setDescription("HAnimJoint vt2, HAnimSegment t2")

HAnimSegment594.addChildren(TouchSensor595)
Transform596 = Transform()
Transform596.setTranslation([0.0063,1.4761,-0.0484])
Shape597 = Shape()
Shape597.setUSE("HAnimJointShape")

Transform596.addChildren(Shape597)

HAnimSegment594.addChildren(Transform596)
#HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
Shape598 = Shape()
LineSet599 = LineSet()
LineSet599.setVertexCount([2])
Coordinate600 = Coordinate()
Coordinate600.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet599.setCoord(Coordinate600)
ColorRGBA601 = ColorRGBA()
ColorRGBA601.setUSE("HAnimSegmentLineColorRGBA")

LineSet599.setColor(ColorRGBA601)

Shape598.setGeometry(LineSet599)

HAnimSegment594.addChildren(Shape598)

HAnimJoint593.addChildren(HAnimSegment594)
HAnimJoint602 = HAnimJoint()
HAnimJoint602.setName("vt1")
HAnimJoint602.setDEF("hanim_vt1")
HAnimJoint602.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint602.setUlimit([0,0,0])
HAnimJoint602.setLlimit([0,0,0])
HAnimJoint602.setStiffness([0,0,0])
HAnimSegment603 = HAnimSegment()
HAnimSegment603.setName("t1")
HAnimSegment603.setDEF("hanim_t1")
#Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
TouchSensor604 = TouchSensor()
TouchSensor604.setDescription("HAnimJoint vt1, HAnimSegment t1")

HAnimSegment603.addChildren(TouchSensor604)
Transform605 = Transform()
Transform605.setTranslation([0.0065,1.4951,-0.0387])
Shape606 = Shape()
Shape606.setUSE("HAnimJointShape")

Transform605.addChildren(Shape606)

HAnimSegment603.addChildren(Transform605)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
Shape607 = Shape()
LineSet608 = LineSet()
LineSet608.setVertexCount([2])
Coordinate609 = Coordinate()
Coordinate609.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet608.setCoord(Coordinate609)
ColorRGBA610 = ColorRGBA()
ColorRGBA610.setUSE("HAnimSegmentLineColorRGBA")

LineSet608.setColor(ColorRGBA610)

Shape607.setGeometry(LineSet608)

HAnimSegment603.addChildren(Shape607)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
Shape611 = Shape()
LineSet612 = LineSet()
LineSet612.setVertexCount([2])
Coordinate613 = Coordinate()
Coordinate613.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet612.setCoord(Coordinate613)
ColorRGBA614 = ColorRGBA()
ColorRGBA614.setUSE("HAnimSegmentLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment603.addChildren(Shape611)
#HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
Shape615 = Shape()
LineSet616 = LineSet()
LineSet616.setVertexCount([2])
Coordinate617 = Coordinate()
Coordinate617.setPoint([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])

LineSet616.setCoord(Coordinate617)
ColorRGBA618 = ColorRGBA()
ColorRGBA618.setUSE("HAnimSegmentLineColorRGBA")

LineSet616.setColor(ColorRGBA618)

Shape615.setGeometry(LineSet616)

HAnimSegment603.addChildren(Shape615)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
Shape619 = Shape()
LineSet620 = LineSet()
LineSet620.setVertexCount([2])
Coordinate621 = Coordinate()
Coordinate621.setPoint([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])

LineSet620.setCoord(Coordinate621)
ColorRGBA622 = ColorRGBA()
ColorRGBA622.setUSE("HAnimSiteLineColorRGBA")

LineSet620.setColor(ColorRGBA622)

Shape619.setGeometry(LineSet620)

HAnimSegment603.addChildren(Shape619)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
Shape623 = Shape()
LineSet624 = LineSet()
LineSet624.setVertexCount([2])
Coordinate625 = Coordinate()
Coordinate625.setPoint([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])

LineSet624.setCoord(Coordinate625)
ColorRGBA626 = ColorRGBA()
ColorRGBA626.setUSE("HAnimSiteLineColorRGBA")

LineSet624.setColor(ColorRGBA626)

Shape623.setGeometry(LineSet624)

HAnimSegment603.addChildren(Shape623)
HAnimSite627 = HAnimSite()
HAnimSite627.setName("suprasternale_pt")
HAnimSite627.setDEF("hanim_suprasternale_pt")
HAnimSite627.setTranslation([0.0084,1.4714,0.0551])
#HAnimSite visualization shape
TouchSensor628 = TouchSensor()
TouchSensor628.setDescription("HAnimSite suprasternale_pt")

HAnimSite627.addChildren(TouchSensor628)
Shape629 = Shape()
Shape629.setUSE("HAnimSiteShape")

HAnimSite627.addChildren(Shape629)

HAnimSegment603.addChildren(HAnimSite627)
HAnimSite630 = HAnimSite()
HAnimSite630.setName("cervicale_pt")
HAnimSite630.setDEF("hanim_cervicale_pt")
HAnimSite630.setTranslation([0.0064,1.52,-0.0815])
#HAnimSite visualization shape
TouchSensor631 = TouchSensor()
TouchSensor631.setDescription("HAnimSite cervicale_pt")

HAnimSite630.addChildren(TouchSensor631)
Shape632 = Shape()
Shape632.setUSE("HAnimSiteShape")

HAnimSite630.addChildren(Shape632)

HAnimSegment603.addChildren(HAnimSite630)

HAnimJoint602.addChildren(HAnimSegment603)
HAnimJoint633 = HAnimJoint()
HAnimJoint633.setName("vc7")
HAnimJoint633.setDEF("hanim_vc7")
HAnimJoint633.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint633.setUlimit([0,0,0])
HAnimJoint633.setLlimit([0,0,0])
HAnimJoint633.setStiffness([0,0,0])
HAnimSegment634 = HAnimSegment()
HAnimSegment634.setName("c7")
HAnimSegment634.setDEF("hanim_c7")
#Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
TouchSensor635 = TouchSensor()
TouchSensor635.setDescription("HAnimJoint vc7, HAnimSegment c7")

HAnimSegment634.addChildren(TouchSensor635)
Transform636 = Transform()
Transform636.setTranslation([0.0066,1.5132,-0.0301])
Shape637 = Shape()
Shape637.setUSE("HAnimJointShape")

Transform636.addChildren(Shape637)

HAnimSegment634.addChildren(Transform636)
#HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
Shape638 = Shape()
LineSet639 = LineSet()
LineSet639.setVertexCount([2])
Coordinate640 = Coordinate()
Coordinate640.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet639.setCoord(Coordinate640)
ColorRGBA641 = ColorRGBA()
ColorRGBA641.setUSE("HAnimSegmentLineColorRGBA")

LineSet639.setColor(ColorRGBA641)

Shape638.setGeometry(LineSet639)

HAnimSegment634.addChildren(Shape638)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
Shape642 = Shape()
LineSet643 = LineSet()
LineSet643.setVertexCount([2])
Coordinate644 = Coordinate()
Coordinate644.setPoint([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])

LineSet643.setCoord(Coordinate644)
ColorRGBA645 = ColorRGBA()
ColorRGBA645.setUSE("HAnimSiteLineColorRGBA")

LineSet643.setColor(ColorRGBA645)

Shape642.setGeometry(LineSet643)

HAnimSegment634.addChildren(Shape642)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
Shape646 = Shape()
LineSet647 = LineSet()
LineSet647.setVertexCount([2])
Coordinate648 = Coordinate()
Coordinate648.setPoint([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])

LineSet647.setCoord(Coordinate648)
ColorRGBA649 = ColorRGBA()
ColorRGBA649.setUSE("HAnimSiteLineColorRGBA")

LineSet647.setColor(ColorRGBA649)

Shape646.setGeometry(LineSet647)

HAnimSegment634.addChildren(Shape646)
HAnimSite650 = HAnimSite()
HAnimSite650.setName("r_neck_base_pt")
HAnimSite650.setDEF("hanim_r_neck_base_pt")
HAnimSite650.setTranslation([-0.0419,1.5149,-0.022])
#HAnimSite visualization shape
TouchSensor651 = TouchSensor()
TouchSensor651.setDescription("HAnimSite r_neck_base_pt")

HAnimSite650.addChildren(TouchSensor651)
Shape652 = Shape()
Shape652.setUSE("HAnimSiteShape")

HAnimSite650.addChildren(Shape652)

HAnimSegment634.addChildren(HAnimSite650)
HAnimSite653 = HAnimSite()
HAnimSite653.setName("l_neck_base_pt")
HAnimSite653.setDEF("hanim_l_neck_base_pt")
HAnimSite653.setTranslation([0.0646,1.5141,-0.038])
#HAnimSite visualization shape
TouchSensor654 = TouchSensor()
TouchSensor654.setDescription("HAnimSite l_neck_base_pt")

HAnimSite653.addChildren(TouchSensor654)
Shape655 = Shape()
Shape655.setUSE("HAnimSiteShape")

HAnimSite653.addChildren(Shape655)

HAnimSegment634.addChildren(HAnimSite653)

HAnimJoint633.addChildren(HAnimSegment634)
HAnimJoint656 = HAnimJoint()
HAnimJoint656.setName("vc6")
HAnimJoint656.setDEF("hanim_vc6")
HAnimJoint656.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint656.setUlimit([0,0,0])
HAnimJoint656.setLlimit([0,0,0])
HAnimJoint656.setStiffness([0,0,0])
HAnimSegment657 = HAnimSegment()
HAnimSegment657.setName("c6")
HAnimSegment657.setDEF("hanim_c6")
#Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
TouchSensor658 = TouchSensor()
TouchSensor658.setDescription("HAnimJoint vc6, HAnimSegment c6")

HAnimSegment657.addChildren(TouchSensor658)
Transform659 = Transform()
Transform659.setTranslation([0.0066,1.5357,-0.0143])
Shape660 = Shape()
Shape660.setUSE("HAnimJointShape")

Transform659.addChildren(Shape660)

HAnimSegment657.addChildren(Transform659)
#HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
Shape661 = Shape()
LineSet662 = LineSet()
LineSet662.setVertexCount([2])
Coordinate663 = Coordinate()
Coordinate663.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet662.setCoord(Coordinate663)
ColorRGBA664 = ColorRGBA()
ColorRGBA664.setUSE("HAnimSegmentLineColorRGBA")

LineSet662.setColor(ColorRGBA664)

Shape661.setGeometry(LineSet662)

HAnimSegment657.addChildren(Shape661)

HAnimJoint656.addChildren(HAnimSegment657)
HAnimJoint665 = HAnimJoint()
HAnimJoint665.setName("vc5")
HAnimJoint665.setDEF("hanim_vc5")
HAnimJoint665.setCenter([0.0066,1.552,-0.0082])
HAnimJoint665.setUlimit([0,0,0])
HAnimJoint665.setLlimit([0,0,0])
HAnimJoint665.setStiffness([0,0,0])
HAnimSegment666 = HAnimSegment()
HAnimSegment666.setName("c5")
HAnimSegment666.setDEF("hanim_c5")
#Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
TouchSensor667 = TouchSensor()
TouchSensor667.setDescription("HAnimJoint vc5, HAnimSegment c5")

HAnimSegment666.addChildren(TouchSensor667)
Transform668 = Transform()
Transform668.setTranslation([0.0066,1.552,-0.0082])
Shape669 = Shape()
Shape669.setUSE("HAnimJointShape")

Transform668.addChildren(Shape669)

HAnimSegment666.addChildren(Transform668)
#HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
Shape670 = Shape()
LineSet671 = LineSet()
LineSet671.setVertexCount([2])
Coordinate672 = Coordinate()
Coordinate672.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet671.setCoord(Coordinate672)
ColorRGBA673 = ColorRGBA()
ColorRGBA673.setUSE("HAnimSegmentLineColorRGBA")

LineSet671.setColor(ColorRGBA673)

Shape670.setGeometry(LineSet671)

HAnimSegment666.addChildren(Shape670)

HAnimJoint665.addChildren(HAnimSegment666)
HAnimJoint674 = HAnimJoint()
HAnimJoint674.setName("vc4")
HAnimJoint674.setDEF("hanim_vc4")
HAnimJoint674.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint674.setUlimit([0,0,0])
HAnimJoint674.setLlimit([0,0,0])
HAnimJoint674.setStiffness([0,0,0])
HAnimSegment675 = HAnimSegment()
HAnimSegment675.setName("c4")
HAnimSegment675.setDEF("hanim_c4")
#Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
TouchSensor676 = TouchSensor()
TouchSensor676.setDescription("HAnimJoint vc4, HAnimSegment c4")

HAnimSegment675.addChildren(TouchSensor676)
Transform677 = Transform()
Transform677.setTranslation([0.0066,1.5662,-0.0084])
Shape678 = Shape()
Shape678.setUSE("HAnimJointShape")

Transform677.addChildren(Shape678)

HAnimSegment675.addChildren(Transform677)
#HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
Shape679 = Shape()
LineSet680 = LineSet()
LineSet680.setVertexCount([2])
Coordinate681 = Coordinate()
Coordinate681.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet680.setCoord(Coordinate681)
ColorRGBA682 = ColorRGBA()
ColorRGBA682.setUSE("HAnimSegmentLineColorRGBA")

LineSet680.setColor(ColorRGBA682)

Shape679.setGeometry(LineSet680)

HAnimSegment675.addChildren(Shape679)

HAnimJoint674.addChildren(HAnimSegment675)
HAnimJoint683 = HAnimJoint()
HAnimJoint683.setName("vc3")
HAnimJoint683.setDEF("hanim_vc3")
HAnimJoint683.setCenter([0.0066,1.58,-0.0103])
HAnimJoint683.setUlimit([0,0,0])
HAnimJoint683.setLlimit([0,0,0])
HAnimJoint683.setStiffness([0,0,0])
HAnimSegment684 = HAnimSegment()
HAnimSegment684.setName("c3")
HAnimSegment684.setDEF("hanim_c3")
#Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
TouchSensor685 = TouchSensor()
TouchSensor685.setDescription("HAnimJoint vc3, HAnimSegment c3")

HAnimSegment684.addChildren(TouchSensor685)
Transform686 = Transform()
Transform686.setTranslation([0.0066,1.58,-0.0103])
Shape687 = Shape()
Shape687.setUSE("HAnimJointShape")

Transform686.addChildren(Shape687)

HAnimSegment684.addChildren(Transform686)
#HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
Shape688 = Shape()
LineSet689 = LineSet()
LineSet689.setVertexCount([2])
Coordinate690 = Coordinate()
Coordinate690.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet689.setCoord(Coordinate690)
ColorRGBA691 = ColorRGBA()
ColorRGBA691.setUSE("HAnimSegmentLineColorRGBA")

LineSet689.setColor(ColorRGBA691)

Shape688.setGeometry(LineSet689)

HAnimSegment684.addChildren(Shape688)

HAnimJoint683.addChildren(HAnimSegment684)
HAnimJoint692 = HAnimJoint()
HAnimJoint692.setName("vc2")
HAnimJoint692.setDEF("hanim_vc2")
HAnimJoint692.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint692.setUlimit([0,0,0])
HAnimJoint692.setLlimit([0,0,0])
HAnimJoint692.setStiffness([0,0,0])
HAnimSegment693 = HAnimSegment()
HAnimSegment693.setName("c2")
HAnimSegment693.setDEF("hanim_c2")
#Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
TouchSensor694 = TouchSensor()
TouchSensor694.setDescription("HAnimJoint vc2, HAnimSegment c2")

HAnimSegment693.addChildren(TouchSensor694)
Transform695 = Transform()
Transform695.setTranslation([0.0066,1.5928,-0.0103])
Shape696 = Shape()
Shape696.setUSE("HAnimJointShape")

Transform695.addChildren(Shape696)

HAnimSegment693.addChildren(Transform695)
#HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
Shape697 = Shape()
LineSet698 = LineSet()
LineSet698.setVertexCount([2])
Coordinate699 = Coordinate()
Coordinate699.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet698.setCoord(Coordinate699)
ColorRGBA700 = ColorRGBA()
ColorRGBA700.setUSE("HAnimSegmentLineColorRGBA")

LineSet698.setColor(ColorRGBA700)

Shape697.setGeometry(LineSet698)

HAnimSegment693.addChildren(Shape697)

HAnimJoint692.addChildren(HAnimSegment693)
HAnimJoint701 = HAnimJoint()
HAnimJoint701.setName("vc1")
HAnimJoint701.setDEF("hanim_vc1")
HAnimJoint701.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint701.setUlimit([0,0,0])
HAnimJoint701.setLlimit([0,0,0])
HAnimJoint701.setStiffness([0,0,0])
HAnimSegment702 = HAnimSegment()
HAnimSegment702.setName("c1")
HAnimSegment702.setDEF("hanim_c1")
#Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
TouchSensor703 = TouchSensor()
TouchSensor703.setDescription("HAnimJoint vc1, HAnimSegment c1")

HAnimSegment702.addChildren(TouchSensor703)
Transform704 = Transform()
Transform704.setTranslation([0.0066,1.6144,-0.0034])
Shape705 = Shape()
Shape705.setUSE("HAnimJointShape")

Transform704.addChildren(Shape705)

HAnimSegment702.addChildren(Transform704)
#HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
Shape706 = Shape()
LineSet707 = LineSet()
LineSet707.setVertexCount([2])
Coordinate708 = Coordinate()
Coordinate708.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet707.setCoord(Coordinate708)
ColorRGBA709 = ColorRGBA()
ColorRGBA709.setUSE("HAnimSegmentLineColorRGBA")

LineSet707.setColor(ColorRGBA709)

Shape706.setGeometry(LineSet707)

HAnimSegment702.addChildren(Shape706)

HAnimJoint701.addChildren(HAnimSegment702)
HAnimJoint710 = HAnimJoint()
HAnimJoint710.setName("skullbase")
HAnimJoint710.setDEF("hanim_skullbase")
HAnimJoint710.setCenter([0.0044,1.6209,0.0236])
HAnimJoint710.setUlimit([0,0,0])
HAnimJoint710.setLlimit([0,0,0])
HAnimJoint710.setStiffness([0,0,0])
HAnimSegment711 = HAnimSegment()
HAnimSegment711.setName("skull")
HAnimSegment711.setDEF("hanim_skull")
#Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
TouchSensor712 = TouchSensor()
TouchSensor712.setDescription("HAnimJoint skullbase, HAnimSegment skull")

HAnimSegment711.addChildren(TouchSensor712)
Transform713 = Transform()
Transform713.setTranslation([0.0044,1.6209,0.0236])
Shape714 = Shape()
Shape714.setUSE("HAnimJointShape")

Transform713.addChildren(Shape714)

HAnimSegment711.addChildren(Transform713)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
Shape715 = Shape()
LineSet716 = LineSet()
LineSet716.setVertexCount([2])
Coordinate717 = Coordinate()
Coordinate717.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet716.setCoord(Coordinate717)
ColorRGBA718 = ColorRGBA()
ColorRGBA718.setUSE("HAnimSegmentLineColorRGBA")

LineSet716.setColor(ColorRGBA718)

Shape715.setGeometry(LineSet716)

HAnimSegment711.addChildren(Shape715)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
Shape719 = Shape()
LineSet720 = LineSet()
LineSet720.setVertexCount([2])
Coordinate721 = Coordinate()
Coordinate721.setPoint([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])

LineSet720.setCoord(Coordinate721)
ColorRGBA722 = ColorRGBA()
ColorRGBA722.setUSE("HAnimSegmentLineColorRGBA")

LineSet720.setColor(ColorRGBA722)

Shape719.setGeometry(LineSet720)

HAnimSegment711.addChildren(Shape719)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
Shape723 = Shape()
LineSet724 = LineSet()
LineSet724.setVertexCount([2])
Coordinate725 = Coordinate()
Coordinate725.setPoint([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])

LineSet724.setCoord(Coordinate725)
ColorRGBA726 = ColorRGBA()
ColorRGBA726.setUSE("HAnimSegmentLineColorRGBA")

LineSet724.setColor(ColorRGBA726)

Shape723.setGeometry(LineSet724)

HAnimSegment711.addChildren(Shape723)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
Shape727 = Shape()
LineSet728 = LineSet()
LineSet728.setVertexCount([2])
Coordinate729 = Coordinate()
Coordinate729.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet728.setCoord(Coordinate729)
ColorRGBA730 = ColorRGBA()
ColorRGBA730.setUSE("HAnimSegmentLineColorRGBA")

LineSet728.setColor(ColorRGBA730)

Shape727.setGeometry(LineSet728)

HAnimSegment711.addChildren(Shape727)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
Shape731 = Shape()
LineSet732 = LineSet()
LineSet732.setVertexCount([2])
Coordinate733 = Coordinate()
Coordinate733.setPoint([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])

LineSet732.setCoord(Coordinate733)
ColorRGBA734 = ColorRGBA()
ColorRGBA734.setUSE("HAnimSegmentLineColorRGBA")

LineSet732.setColor(ColorRGBA734)

Shape731.setGeometry(LineSet732)

HAnimSegment711.addChildren(Shape731)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
Shape735 = Shape()
LineSet736 = LineSet()
LineSet736.setVertexCount([2])
Coordinate737 = Coordinate()
Coordinate737.setPoint([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])

LineSet736.setCoord(Coordinate737)
ColorRGBA738 = ColorRGBA()
ColorRGBA738.setUSE("HAnimSegmentLineColorRGBA")

LineSet736.setColor(ColorRGBA738)

Shape735.setGeometry(LineSet736)

HAnimSegment711.addChildren(Shape735)
#HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
Shape739 = Shape()
LineSet740 = LineSet()
LineSet740.setVertexCount([2])
Coordinate741 = Coordinate()
Coordinate741.setPoint([0.0044,1.6209,0.0236,0,1.63,0.015])

LineSet740.setCoord(Coordinate741)
ColorRGBA742 = ColorRGBA()
ColorRGBA742.setUSE("HAnimSegmentLineColorRGBA")

LineSet740.setColor(ColorRGBA742)

Shape739.setGeometry(LineSet740)

HAnimSegment711.addChildren(Shape739)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape743 = Shape()
LineSet744 = LineSet()
LineSet744.setVertexCount([2])
Coordinate745 = Coordinate()
Coordinate745.setPoint([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])

LineSet744.setCoord(Coordinate745)
ColorRGBA746 = ColorRGBA()
ColorRGBA746.setUSE("HAnimSiteLineColorRGBA")

LineSet744.setColor(ColorRGBA746)

Shape743.setGeometry(LineSet744)

HAnimSegment711.addChildren(Shape743)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
Shape747 = Shape()
LineSet748 = LineSet()
LineSet748.setVertexCount([2])
Coordinate749 = Coordinate()
Coordinate749.setPoint([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])

LineSet748.setCoord(Coordinate749)
ColorRGBA750 = ColorRGBA()
ColorRGBA750.setUSE("HAnimSiteLineColorRGBA")

LineSet748.setColor(ColorRGBA750)

Shape747.setGeometry(LineSet748)

HAnimSegment711.addChildren(Shape747)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
Shape751 = Shape()
LineSet752 = LineSet()
LineSet752.setVertexCount([2])
Coordinate753 = Coordinate()
Coordinate753.setPoint([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])

LineSet752.setCoord(Coordinate753)
ColorRGBA754 = ColorRGBA()
ColorRGBA754.setUSE("HAnimSiteLineColorRGBA")

LineSet752.setColor(ColorRGBA754)

Shape751.setGeometry(LineSet752)

HAnimSegment711.addChildren(Shape751)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
Shape755 = Shape()
LineSet756 = LineSet()
LineSet756.setVertexCount([2])
Coordinate757 = Coordinate()
Coordinate757.setPoint([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])

LineSet756.setCoord(Coordinate757)
ColorRGBA758 = ColorRGBA()
ColorRGBA758.setUSE("HAnimSiteLineColorRGBA")

LineSet756.setColor(ColorRGBA758)

Shape755.setGeometry(LineSet756)

HAnimSegment711.addChildren(Shape755)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
Shape759 = Shape()
LineSet760 = LineSet()
LineSet760.setVertexCount([2])
Coordinate761 = Coordinate()
Coordinate761.setPoint([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])

LineSet760.setCoord(Coordinate761)
ColorRGBA762 = ColorRGBA()
ColorRGBA762.setUSE("HAnimSiteLineColorRGBA")

LineSet760.setColor(ColorRGBA762)

Shape759.setGeometry(LineSet760)

HAnimSegment711.addChildren(Shape759)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
Shape763 = Shape()
LineSet764 = LineSet()
LineSet764.setVertexCount([2])
Coordinate765 = Coordinate()
Coordinate765.setPoint([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])

LineSet764.setCoord(Coordinate765)
ColorRGBA766 = ColorRGBA()
ColorRGBA766.setUSE("HAnimSiteLineColorRGBA")

LineSet764.setColor(ColorRGBA766)

Shape763.setGeometry(LineSet764)

HAnimSegment711.addChildren(Shape763)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
Shape767 = Shape()
LineSet768 = LineSet()
LineSet768.setVertexCount([2])
Coordinate769 = Coordinate()
Coordinate769.setPoint([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])

LineSet768.setCoord(Coordinate769)
ColorRGBA770 = ColorRGBA()
ColorRGBA770.setUSE("HAnimSiteLineColorRGBA")

LineSet768.setColor(ColorRGBA770)

Shape767.setGeometry(LineSet768)

HAnimSegment711.addChildren(Shape767)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
Shape771 = Shape()
LineSet772 = LineSet()
LineSet772.setVertexCount([2])
Coordinate773 = Coordinate()
Coordinate773.setPoint([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])

LineSet772.setCoord(Coordinate773)
ColorRGBA774 = ColorRGBA()
ColorRGBA774.setUSE("HAnimSiteLineColorRGBA")

LineSet772.setColor(ColorRGBA774)

Shape771.setGeometry(LineSet772)

HAnimSegment711.addChildren(Shape771)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
Shape775 = Shape()
LineSet776 = LineSet()
LineSet776.setVertexCount([2])
Coordinate777 = Coordinate()
Coordinate777.setPoint([0.0044,1.6209,0.0236,0.0631,1.553,0.033])

LineSet776.setCoord(Coordinate777)
ColorRGBA778 = ColorRGBA()
ColorRGBA778.setUSE("HAnimSiteLineColorRGBA")

LineSet776.setColor(ColorRGBA778)

Shape775.setGeometry(LineSet776)

HAnimSegment711.addChildren(Shape775)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
Shape779 = Shape()
LineSet780 = LineSet()
LineSet780.setVertexCount([2])
Coordinate781 = Coordinate()
Coordinate781.setPoint([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])

LineSet780.setCoord(Coordinate781)
ColorRGBA782 = ColorRGBA()
ColorRGBA782.setUSE("HAnimSiteLineColorRGBA")

LineSet780.setColor(ColorRGBA782)

Shape779.setGeometry(LineSet780)

HAnimSegment711.addChildren(Shape779)
HAnimSite783 = HAnimSite()
HAnimSite783.setName("skull_vertex_pt")
HAnimSite783.setDEF("hanim_skull_vertex_pt")
HAnimSite783.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry
#HAnimSite visualization shape
TouchSensor784 = TouchSensor()
TouchSensor784.setDescription("HAnimSite skull_tip")

HAnimSite783.addChildren(TouchSensor784)
Shape785 = Shape()
Shape785.setUSE("HAnimSiteShape")

HAnimSite783.addChildren(Shape785)

HAnimSegment711.addChildren(HAnimSite783)
HAnimSite786 = HAnimSite()
HAnimSite786.setName("sellion_pt")
HAnimSite786.setDEF("hanim_sellion_pt")
HAnimSite786.setTranslation([0.0058,1.6316,0.0852])
#HAnimSite visualization shape
TouchSensor787 = TouchSensor()
TouchSensor787.setDescription("HAnimSite sellion_pt")

HAnimSite786.addChildren(TouchSensor787)
Shape788 = Shape()
Shape788.setUSE("HAnimSiteShape")

HAnimSite786.addChildren(Shape788)

HAnimSegment711.addChildren(HAnimSite786)
HAnimSite789 = HAnimSite()
HAnimSite789.setName("r_infraorbitale_pt")
HAnimSite789.setDEF("hanim_r_infraorbitale_pt")
HAnimSite789.setTranslation([-0.0237,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor790 = TouchSensor()
TouchSensor790.setDescription("HAnimSite r_infraorbitale_pt")

HAnimSite789.addChildren(TouchSensor790)
Shape791 = Shape()
Shape791.setUSE("HAnimSiteShape")

HAnimSite789.addChildren(Shape791)

HAnimSegment711.addChildren(HAnimSite789)
HAnimSite792 = HAnimSite()
HAnimSite792.setName("l_infraorbitale_pt")
HAnimSite792.setDEF("hanim_l_infraorbitale_pt")
HAnimSite792.setTranslation([0.0341,1.6171,0.0752])
#HAnimSite visualization shape
TouchSensor793 = TouchSensor()
TouchSensor793.setDescription("HAnimSite l_infraorbitale_pt")

HAnimSite792.addChildren(TouchSensor793)
Shape794 = Shape()
Shape794.setUSE("HAnimSiteShape")

HAnimSite792.addChildren(Shape794)

HAnimSegment711.addChildren(HAnimSite792)
HAnimSite795 = HAnimSite()
HAnimSite795.setName("supramenton_pt")
HAnimSite795.setDEF("hanim_supramenton_pt")
HAnimSite795.setTranslation([0.0061,1.541,0.0805])
#HAnimSite visualization shape
TouchSensor796 = TouchSensor()
TouchSensor796.setDescription("HAnimSite supramenton_pt")

HAnimSite795.addChildren(TouchSensor796)
Shape797 = Shape()
Shape797.setUSE("HAnimSiteShape")

HAnimSite795.addChildren(Shape797)

HAnimSegment711.addChildren(HAnimSite795)
HAnimSite798 = HAnimSite()
HAnimSite798.setName("r_tragion_pt")
HAnimSite798.setDEF("hanim_r_tragion_pt")
HAnimSite798.setTranslation([-0.0646,1.6347,0.0302])
#HAnimSite visualization shape
TouchSensor799 = TouchSensor()
TouchSensor799.setDescription("HAnimSite r_tragion_pt")

HAnimSite798.addChildren(TouchSensor799)
Shape800 = Shape()
Shape800.setUSE("HAnimSiteShape")

HAnimSite798.addChildren(Shape800)

HAnimSegment711.addChildren(HAnimSite798)
HAnimSite801 = HAnimSite()
HAnimSite801.setName("r_gonion_pt")
HAnimSite801.setDEF("hanim_r_gonion_pt")
HAnimSite801.setTranslation([-0.052,1.5529,0.0347])
#HAnimSite visualization shape
TouchSensor802 = TouchSensor()
TouchSensor802.setDescription("HAnimSite r_gonion_pt")

HAnimSite801.addChildren(TouchSensor802)
Shape803 = Shape()
Shape803.setUSE("HAnimSiteShape")

HAnimSite801.addChildren(Shape803)

HAnimSegment711.addChildren(HAnimSite801)
HAnimSite804 = HAnimSite()
HAnimSite804.setName("l_tragion_pt")
HAnimSite804.setDEF("hanim_l_tragion_pt")
HAnimSite804.setTranslation([0.0739,1.6348,0.0282])
#HAnimSite visualization shape
TouchSensor805 = TouchSensor()
TouchSensor805.setDescription("HAnimSite l_tragion_pt")

HAnimSite804.addChildren(TouchSensor805)
Shape806 = Shape()
Shape806.setUSE("HAnimSiteShape")

HAnimSite804.addChildren(Shape806)

HAnimSegment711.addChildren(HAnimSite804)
HAnimSite807 = HAnimSite()
HAnimSite807.setName("l_gonion_pt")
HAnimSite807.setDEF("hanim_l_gonion_pt")
HAnimSite807.setTranslation([0.0631,1.553,0.033])
#HAnimSite visualization shape
TouchSensor808 = TouchSensor()
TouchSensor808.setDescription("HAnimSite l_gonion_pt")

HAnimSite807.addChildren(TouchSensor808)
Shape809 = Shape()
Shape809.setUSE("HAnimSiteShape")

HAnimSite807.addChildren(Shape809)

HAnimSegment711.addChildren(HAnimSite807)
HAnimSite810 = HAnimSite()
HAnimSite810.setName("nuchale_pt")
HAnimSite810.setDEF("hanim_nuchale_pt")
HAnimSite810.setTranslation([0.0039,1.5972,-0.0796])
#HAnimSite visualization shape
TouchSensor811 = TouchSensor()
TouchSensor811.setDescription("HAnimSite nuchale_pt")

HAnimSite810.addChildren(TouchSensor811)
Shape812 = Shape()
Shape812.setUSE("HAnimSiteShape")

HAnimSite810.addChildren(Shape812)

HAnimSegment711.addChildren(HAnimSite810)

HAnimJoint710.addChildren(HAnimSegment711)
HAnimJoint813 = HAnimJoint()
HAnimJoint813.setName("l_eyeball_joint")
HAnimJoint813.setDEF("hanim_l_eyeball_joint")
HAnimJoint813.setCenter([0.0336,1.6332,0.0502])
HAnimJoint813.setUlimit([0,0,0])
HAnimJoint813.setLlimit([0,0,0])
HAnimJoint813.setStiffness([0,0,0])
HAnimSegment814 = HAnimSegment()
HAnimSegment814.setName("l_eyeball")
HAnimSegment814.setDEF("hanim_l_eyeball")
#Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor815 = TouchSensor()
TouchSensor815.setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")

HAnimSegment814.addChildren(TouchSensor815)
Transform816 = Transform()
Transform816.setTranslation([0.0336,1.6332,0.0502])
Shape817 = Shape()
Shape817.setUSE("HAnimJointShape")

Transform816.addChildren(Shape817)

HAnimSegment814.addChildren(Transform816)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape818 = Shape()
LineSet819 = LineSet()
LineSet819.setVertexCount([2])
Coordinate820 = Coordinate()
Coordinate820.setPoint([0.0336,1.6332,0.0502,0.034,1.64,0.05])

LineSet819.setCoord(Coordinate820)
ColorRGBA821 = ColorRGBA()
ColorRGBA821.setDEF("HAnimSiteViewpointLineColorRGBA")
ColorRGBA821.setColor([1,1,0,1,1,1,0,0.1])

LineSet819.setColor(ColorRGBA821)

Shape818.setGeometry(LineSet819)

HAnimSegment814.addChildren(Shape818)
HAnimSite822 = HAnimSite()
HAnimSite822.setName("l_eyeball_site_view")
HAnimSite822.setDEF("hanim_l_eyeball_site_view")
HAnimSite822.setTranslation([0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor823 = TouchSensor()
TouchSensor823.setDescription("HAnimSite l_eyeball_site_view")

HAnimSite822.addChildren(TouchSensor823)
Shape824 = Shape()
Shape824.setUSE("HAnimSiteShape")

HAnimSite822.addChildren(Shape824)
Viewpoint825 = Viewpoint()
Viewpoint825.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint825.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint825.setOrientation([0,1,0,3.141593])
Viewpoint825.setPosition([0,0,0])

HAnimSite822.addChildren(Viewpoint825)
#HAnimSite/Viewpoint visualization shape
Anchor826 = Anchor()
Anchor826.setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint")
Anchor826.setUrl(["#hanim_l_eyeball_site_viewpoint"])
LOD827 = LOD()
LOD827.setForceTransitions(True)
LOD827.setRange([0.04])
WorldInfo828 = WorldInfo()
WorldInfo828.setInfo(["hide diamond when close"])

LOD827.addChildren(WorldInfo828)
Shape829 = Shape()
Shape829.setDEF("HAnimSiteViewpointShape")
IndexedFaceSet830 = IndexedFaceSet()
IndexedFaceSet830.setDEF("SiteViewpointDiamondIFS")
IndexedFaceSet830.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet830.setCreaseAngle(0.5)
Coordinate831 = Coordinate()
Coordinate831.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet830.setCoord(Coordinate831)

Shape829.setGeometry(IndexedFaceSet830)
Appearance832 = Appearance()
Material833 = Material()
Material833.setDiffuseColor([1,1,0])
Material833.setTransparency(0.3)

Appearance832.setMaterial(Material833)

Shape829.setAppearance(Appearance832)

LOD827.addChildren(Shape829)

Anchor826.addChildren(LOD827)

HAnimSite822.addChildren(Anchor826)

HAnimSegment814.addChildren(HAnimSite822)

HAnimJoint813.addChildren(HAnimSegment814)

HAnimJoint710.addChildren(HAnimJoint813)
HAnimJoint834 = HAnimJoint()
HAnimJoint834.setName("l_eyelid_joint")
HAnimJoint834.setDEF("hanim_l_eyelid_joint")
HAnimJoint834.setCenter([0.0336,1.6332,0.0502])
HAnimJoint834.setUlimit([0,0,0])
HAnimJoint834.setLlimit([0,0,0])
HAnimJoint834.setStiffness([0,0,0])
HAnimSegment835 = HAnimSegment()
HAnimSegment835.setName("l_eyelid")
HAnimSegment835.setDEF("hanim_l_eyelid")
#Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor836 = TouchSensor()
TouchSensor836.setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")

HAnimSegment835.addChildren(TouchSensor836)
Transform837 = Transform()
Transform837.setTranslation([0.0336,1.6332,0.0502])
Shape838 = Shape()
Shape838.setUSE("HAnimJointShape")

Transform837.addChildren(Shape838)

HAnimSegment835.addChildren(Transform837)

HAnimJoint834.addChildren(HAnimSegment835)

HAnimJoint710.addChildren(HAnimJoint834)
HAnimJoint839 = HAnimJoint()
HAnimJoint839.setName("l_eyebrow_joint")
HAnimJoint839.setDEF("hanim_l_eyebrow_joint")
HAnimJoint839.setCenter([0.0336,1.635,0.0506])
HAnimJoint839.setUlimit([0,0,0])
HAnimJoint839.setLlimit([0,0,0])
HAnimJoint839.setStiffness([0,0,0])
HAnimSegment840 = HAnimSegment()
HAnimSegment840.setName("l_eyebrow")
HAnimSegment840.setDEF("hanim_l_eyebrow")
#Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor841 = TouchSensor()
TouchSensor841.setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")

HAnimSegment840.addChildren(TouchSensor841)
Transform842 = Transform()
Transform842.setTranslation([0.0336,1.635,0.0506])
Shape843 = Shape()
Shape843.setUSE("HAnimJointShape")

Transform842.addChildren(Shape843)

HAnimSegment840.addChildren(Transform842)

HAnimJoint839.addChildren(HAnimSegment840)

HAnimJoint710.addChildren(HAnimJoint839)
HAnimJoint844 = HAnimJoint()
HAnimJoint844.setName("r_eyeball_joint")
HAnimJoint844.setDEF("hanim_r_eyeball_joint")
HAnimJoint844.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint844.setUlimit([0,0,0])
HAnimJoint844.setLlimit([0,0,0])
HAnimJoint844.setStiffness([0,0,0])
HAnimSegment845 = HAnimSegment()
HAnimSegment845.setName("r_eyeball")
HAnimSegment845.setDEF("hanim_r_eyeball")
#Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor846 = TouchSensor()
TouchSensor846.setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")

HAnimSegment845.addChildren(TouchSensor846)
Transform847 = Transform()
Transform847.setTranslation([-0.0336,1.6332,0.0502])
Shape848 = Shape()
Shape848.setUSE("HAnimJointShape")

Transform847.addChildren(Shape848)

HAnimSegment845.addChildren(Transform847)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape849 = Shape()
LineSet850 = LineSet()
LineSet850.setVertexCount([2])
Coordinate851 = Coordinate()
Coordinate851.setPoint([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])

LineSet850.setCoord(Coordinate851)
ColorRGBA852 = ColorRGBA()
ColorRGBA852.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet850.setColor(ColorRGBA852)

Shape849.setGeometry(LineSet850)

HAnimSegment845.addChildren(Shape849)
HAnimSite853 = HAnimSite()
HAnimSite853.setName("r_eyeball_site_view")
HAnimSite853.setDEF("hanim_r_eyeball_site_view")
HAnimSite853.setTranslation([-0.034,1.64,0.05])
#HAnimSite visualization shape
TouchSensor854 = TouchSensor()
TouchSensor854.setDescription("HAnimSite r_eyeball_site_view")

HAnimSite853.addChildren(TouchSensor854)
Shape855 = Shape()
Shape855.setUSE("HAnimSiteShape")

HAnimSite853.addChildren(Shape855)
Viewpoint856 = Viewpoint()
Viewpoint856.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint856.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint856.setOrientation([0,1,0,3.141593])
Viewpoint856.setPosition([0,0,0])

HAnimSite853.addChildren(Viewpoint856)
#HAnimSite/Viewpoint visualization shape
Anchor857 = Anchor()
Anchor857.setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint")
Anchor857.setUrl(["#hanim_r_eyeball_site_viewpoint"])
LOD858 = LOD()
LOD858.setForceTransitions(True)
LOD858.setRange([0.04])
WorldInfo859 = WorldInfo()
WorldInfo859.setInfo(["hide diamond when close"])

LOD858.addChildren(WorldInfo859)
Shape860 = Shape()
Shape860.setUSE("HAnimSiteViewpointShape")

LOD858.addChildren(Shape860)

Anchor857.addChildren(LOD858)

HAnimSite853.addChildren(Anchor857)

HAnimSegment845.addChildren(HAnimSite853)

HAnimJoint844.addChildren(HAnimSegment845)

HAnimJoint710.addChildren(HAnimJoint844)
HAnimJoint861 = HAnimJoint()
HAnimJoint861.setName("r_eyelid_joint")
HAnimJoint861.setDEF("hanim_r_eyelid_joint")
HAnimJoint861.setCenter([-0.0336,1.6332,0.0502])
HAnimJoint861.setUlimit([0,0,0])
HAnimJoint861.setLlimit([0,0,0])
HAnimJoint861.setStiffness([0,0,0])
HAnimSegment862 = HAnimSegment()
HAnimSegment862.setName("r_eyelid")
HAnimSegment862.setDEF("hanim_r_eyelid")
#Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor863 = TouchSensor()
TouchSensor863.setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")

HAnimSegment862.addChildren(TouchSensor863)
Transform864 = Transform()
Transform864.setTranslation([-0.0336,1.6332,0.0502])
Shape865 = Shape()
Shape865.setUSE("HAnimJointShape")

Transform864.addChildren(Shape865)

HAnimSegment862.addChildren(Transform864)

HAnimJoint861.addChildren(HAnimSegment862)

HAnimJoint710.addChildren(HAnimJoint861)
HAnimJoint866 = HAnimJoint()
HAnimJoint866.setName("r_eyebrow_joint")
HAnimJoint866.setDEF("hanim_r_eyebrow_joint")
HAnimJoint866.setCenter([-0.0336,1.635,0.0506])
HAnimJoint866.setUlimit([0,0,0])
HAnimJoint866.setLlimit([0,0,0])
HAnimJoint866.setStiffness([0,0,0])
HAnimSegment867 = HAnimSegment()
HAnimSegment867.setName("r_eyebrow")
HAnimSegment867.setDEF("hanim_r_eyebrow")
#Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor868 = TouchSensor()
TouchSensor868.setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")

HAnimSegment867.addChildren(TouchSensor868)
Transform869 = Transform()
Transform869.setTranslation([-0.0336,1.635,0.0506])
Shape870 = Shape()
Shape870.setUSE("HAnimJointShape")

Transform869.addChildren(Shape870)

HAnimSegment867.addChildren(Transform869)

HAnimJoint866.addChildren(HAnimSegment867)

HAnimJoint710.addChildren(HAnimJoint866)
HAnimJoint871 = HAnimJoint()
HAnimJoint871.setName("temporomandibular")
HAnimJoint871.setDEF("hanim_temporomandibular")
HAnimJoint871.setCenter([0,1.63,0.015])
HAnimJoint871.setUlimit([0,0,0])
HAnimJoint871.setLlimit([0,0,0])
HAnimJoint871.setStiffness([0,0,0])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment872 = HAnimSegment()
HAnimSegment872.setName("jaw")
HAnimSegment872.setDEF("hanim_jaw")
#Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
TouchSensor873 = TouchSensor()
TouchSensor873.setDescription("HAnimJoint temporomandibular, HAnimSegment jaw")

HAnimSegment872.addChildren(TouchSensor873)
Transform874 = Transform()
Transform874.setTranslation([0,1.63,0.015])
Shape875 = Shape()
Shape875.setUSE("HAnimJointShape")

Transform874.addChildren(Shape875)

HAnimSegment872.addChildren(Transform874)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
Shape876 = Shape()
LineSet877 = LineSet()
LineSet877.setVertexCount([2])
Coordinate878 = Coordinate()
Coordinate878.setPoint([0,1.63,0.015,0.045,1.63,0])

LineSet877.setCoord(Coordinate878)
ColorRGBA879 = ColorRGBA()
ColorRGBA879.setUSE("HAnimSiteLineColorRGBA")

LineSet877.setColor(ColorRGBA879)

Shape876.setGeometry(LineSet877)

HAnimSegment872.addChildren(Shape876)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
Shape880 = Shape()
LineSet881 = LineSet()
LineSet881.setVertexCount([2])
Coordinate882 = Coordinate()
Coordinate882.setPoint([0,1.63,0.015,-0.045,1.63,0])

LineSet881.setCoord(Coordinate882)
ColorRGBA883 = ColorRGBA()
ColorRGBA883.setUSE("HAnimSiteLineColorRGBA")

LineSet881.setColor(ColorRGBA883)

Shape880.setGeometry(LineSet881)

HAnimSegment872.addChildren(Shape880)
HAnimSite884 = HAnimSite()
HAnimSite884.setName("temporomandibular_l_site_pt")
HAnimSite884.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite884.setTranslation([0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor885 = TouchSensor()
TouchSensor885.setDescription("HAnimSite temporomandibular_l_site_pt")

HAnimSite884.addChildren(TouchSensor885)
Shape886 = Shape()
Shape886.setUSE("HAnimSiteShape")

HAnimSite884.addChildren(Shape886)

HAnimSegment872.addChildren(HAnimSite884)
HAnimSite887 = HAnimSite()
HAnimSite887.setName("temporomandibular_r_site_pt")
HAnimSite887.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite887.setTranslation([-0.045,1.63,0])
#HAnimSite visualization shape
TouchSensor888 = TouchSensor()
TouchSensor888.setDescription("HAnimSite temporomandibular_r_site_pt")

HAnimSite887.addChildren(TouchSensor888)
Shape889 = Shape()
Shape889.setUSE("HAnimSiteShape")

HAnimSite887.addChildren(Shape889)

HAnimSegment872.addChildren(HAnimSite887)

HAnimJoint871.addChildren(HAnimSegment872)

HAnimJoint710.addChildren(HAnimJoint871)

HAnimJoint701.addChildren(HAnimJoint710)

HAnimJoint692.addChildren(HAnimJoint701)

HAnimJoint683.addChildren(HAnimJoint692)

HAnimJoint674.addChildren(HAnimJoint683)

HAnimJoint665.addChildren(HAnimJoint674)

HAnimJoint656.addChildren(HAnimJoint665)

HAnimJoint633.addChildren(HAnimJoint656)

HAnimJoint602.addChildren(HAnimJoint633)
HAnimJoint890 = HAnimJoint()
HAnimJoint890.setName("l_sternoclavicular")
HAnimJoint890.setDEF("hanim_l_sternoclavicular")
HAnimJoint890.setCenter([0.082,1.4488,-0.0353])
HAnimJoint890.setUlimit([0,0,0])
HAnimJoint890.setLlimit([0,0,0])
HAnimJoint890.setStiffness([0,0,0])
HAnimSegment891 = HAnimSegment()
HAnimSegment891.setName("l_clavicle")
HAnimSegment891.setDEF("hanim_l_clavicle")
#Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor892 = TouchSensor()
TouchSensor892.setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")

HAnimSegment891.addChildren(TouchSensor892)
Transform893 = Transform()
Transform893.setTranslation([0.082,1.4488,-0.0353])
Shape894 = Shape()
Shape894.setUSE("HAnimJointShape")

Transform893.addChildren(Shape894)

HAnimSegment891.addChildren(Transform893)
#HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
Shape895 = Shape()
LineSet896 = LineSet()
LineSet896.setVertexCount([2])
Coordinate897 = Coordinate()
Coordinate897.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet896.setCoord(Coordinate897)
ColorRGBA898 = ColorRGBA()
ColorRGBA898.setUSE("HAnimSegmentLineColorRGBA")

LineSet896.setColor(ColorRGBA898)

Shape895.setGeometry(LineSet896)

HAnimSegment891.addChildren(Shape895)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
Shape899 = Shape()
LineSet900 = LineSet()
LineSet900.setVertexCount([2])
Coordinate901 = Coordinate()
Coordinate901.setPoint([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])

LineSet900.setCoord(Coordinate901)
ColorRGBA902 = ColorRGBA()
ColorRGBA902.setUSE("HAnimSiteLineColorRGBA")

LineSet900.setColor(ColorRGBA902)

Shape899.setGeometry(LineSet900)

HAnimSegment891.addChildren(Shape899)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
Shape903 = Shape()
LineSet904 = LineSet()
LineSet904.setVertexCount([2])
Coordinate905 = Coordinate()
Coordinate905.setPoint([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])

LineSet904.setCoord(Coordinate905)
ColorRGBA906 = ColorRGBA()
ColorRGBA906.setUSE("HAnimSiteLineColorRGBA")

LineSet904.setColor(ColorRGBA906)

Shape903.setGeometry(LineSet904)

HAnimSegment891.addChildren(Shape903)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
Shape907 = Shape()
LineSet908 = LineSet()
LineSet908.setVertexCount([2])
Coordinate909 = Coordinate()
Coordinate909.setPoint([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])

LineSet908.setCoord(Coordinate909)
ColorRGBA910 = ColorRGBA()
ColorRGBA910.setUSE("HAnimSiteLineColorRGBA")

LineSet908.setColor(ColorRGBA910)

Shape907.setGeometry(LineSet908)

HAnimSegment891.addChildren(Shape907)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
Shape911 = Shape()
LineSet912 = LineSet()
LineSet912.setVertexCount([2])
Coordinate913 = Coordinate()
Coordinate913.setPoint([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])

LineSet912.setCoord(Coordinate913)
ColorRGBA914 = ColorRGBA()
ColorRGBA914.setUSE("HAnimSiteLineColorRGBA")

LineSet912.setColor(ColorRGBA914)

Shape911.setGeometry(LineSet912)

HAnimSegment891.addChildren(Shape911)
HAnimSite915 = HAnimSite()
HAnimSite915.setName("l_clavicle_pt")
HAnimSite915.setDEF("hanim_l_clavicle_pt")
HAnimSite915.setTranslation([0.0271,1.4943,0.0394])
#HAnimSite visualization shape
TouchSensor916 = TouchSensor()
TouchSensor916.setDescription("HAnimSite l_clavicale_pt")

HAnimSite915.addChildren(TouchSensor916)
Shape917 = Shape()
Shape917.setUSE("HAnimSiteShape")

HAnimSite915.addChildren(Shape917)

HAnimSegment891.addChildren(HAnimSite915)
HAnimSite918 = HAnimSite()
HAnimSite918.setName("l_acromion_pt")
HAnimSite918.setDEF("hanim_l_acromion_pt")
HAnimSite918.setTranslation([0.2032,1.476,-0.049])
#HAnimSite visualization shape
TouchSensor919 = TouchSensor()
TouchSensor919.setDescription("HAnimSite l_acromion_pt")

HAnimSite918.addChildren(TouchSensor919)
Shape920 = Shape()
Shape920.setUSE("HAnimSiteShape")

HAnimSite918.addChildren(Shape920)

HAnimSegment891.addChildren(HAnimSite918)
HAnimSite921 = HAnimSite()
HAnimSite921.setName("l_axilla_proximal_pt")
HAnimSite921.setDEF("hanim_l_axilla_proximal_pt")
HAnimSite921.setTranslation([0.1777,1.4065,-0.0075])
#HAnimSite visualization shape
TouchSensor922 = TouchSensor()
TouchSensor922.setDescription("HAnimSite l_axilla_ant_pt")

HAnimSite921.addChildren(TouchSensor922)
Shape923 = Shape()
Shape923.setUSE("HAnimSiteShape")

HAnimSite921.addChildren(Shape923)

HAnimSegment891.addChildren(HAnimSite921)
HAnimSite924 = HAnimSite()
HAnimSite924.setName("l_axilla_distal_pt")
HAnimSite924.setDEF("hanim_l_axilla_distal_pt")
HAnimSite924.setTranslation([0.1706,1.4072,-0.0875])
#HAnimSite visualization shape
TouchSensor925 = TouchSensor()
TouchSensor925.setDescription("HAnimSite l_axilla_post_pt")

HAnimSite924.addChildren(TouchSensor925)
Shape926 = Shape()
Shape926.setUSE("HAnimSiteShape")

HAnimSite924.addChildren(Shape926)

HAnimSegment891.addChildren(HAnimSite924)

HAnimJoint890.addChildren(HAnimSegment891)
HAnimJoint927 = HAnimJoint()
HAnimJoint927.setName("l_acromioclavicular")
HAnimJoint927.setDEF("hanim_l_acromioclavicular")
HAnimJoint927.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint927.setUlimit([0,0,0])
HAnimJoint927.setLlimit([0,0,0])
HAnimJoint927.setStiffness([0,0,0])
HAnimSegment928 = HAnimSegment()
HAnimSegment928.setName("l_scapula")
HAnimSegment928.setDEF("hanim_l_scapula")
#Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
TouchSensor929 = TouchSensor()
TouchSensor929.setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")

HAnimSegment928.addChildren(TouchSensor929)
Transform930 = Transform()
Transform930.setTranslation([0.0962,1.4269,-0.0424])
Shape931 = Shape()
Shape931.setUSE("HAnimJointShape")

Transform930.addChildren(Shape931)

HAnimSegment928.addChildren(Transform930)
#HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
Shape932 = Shape()
LineSet933 = LineSet()
LineSet933.setVertexCount([2])
Coordinate934 = Coordinate()
Coordinate934.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet933.setCoord(Coordinate934)
ColorRGBA935 = ColorRGBA()
ColorRGBA935.setUSE("HAnimSegmentLineColorRGBA")

LineSet933.setColor(ColorRGBA935)

Shape932.setGeometry(LineSet933)

HAnimSegment928.addChildren(Shape932)

HAnimJoint927.addChildren(HAnimSegment928)
HAnimJoint936 = HAnimJoint()
HAnimJoint936.setName("l_shoulder")
HAnimJoint936.setDEF("hanim_l_shoulder")
HAnimJoint936.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint936.setUlimit([0,0,0])
HAnimJoint936.setLlimit([0,0,0])
HAnimJoint936.setStiffness([0,0,0])
HAnimSegment937 = HAnimSegment()
HAnimSegment937.setName("l_upperarm")
HAnimSegment937.setDEF("hanim_l_upperarm")
#Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor938 = TouchSensor()
TouchSensor938.setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm")

HAnimSegment937.addChildren(TouchSensor938)
Transform939 = Transform()
Transform939.setTranslation([0.2029,1.4376,-0.0387])
Shape940 = Shape()
Shape940.setUSE("HAnimJointShape")

Transform939.addChildren(Shape940)

HAnimSegment937.addChildren(Transform939)
#HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
Shape941 = Shape()
LineSet942 = LineSet()
LineSet942.setVertexCount([2])
Coordinate943 = Coordinate()
Coordinate943.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet942.setCoord(Coordinate943)
ColorRGBA944 = ColorRGBA()
ColorRGBA944.setUSE("HAnimSegmentLineColorRGBA")

LineSet942.setColor(ColorRGBA944)

Shape941.setGeometry(LineSet942)

HAnimSegment937.addChildren(Shape941)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
Shape945 = Shape()
LineSet946 = LineSet()
LineSet946.setVertexCount([2])
Coordinate947 = Coordinate()
Coordinate947.setPoint([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])

LineSet946.setCoord(Coordinate947)
ColorRGBA948 = ColorRGBA()
ColorRGBA948.setUSE("HAnimSiteLineColorRGBA")

LineSet946.setColor(ColorRGBA948)

Shape945.setGeometry(LineSet946)

HAnimSegment937.addChildren(Shape945)
HAnimSite949 = HAnimSite()
HAnimSite949.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite949.setDEF("hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite949.setTranslation([0.228,1.1482,-0.11])
#HAnimSite visualization shape
TouchSensor950 = TouchSensor()
TouchSensor950.setDescription("HAnimSite l_humeral_lateral_epicn_pt")

HAnimSite949.addChildren(TouchSensor950)
Shape951 = Shape()
Shape951.setUSE("HAnimSiteShape")

HAnimSite949.addChildren(Shape951)

HAnimSegment937.addChildren(HAnimSite949)

HAnimJoint936.addChildren(HAnimSegment937)
HAnimJoint952 = HAnimJoint()
HAnimJoint952.setName("l_elbow")
HAnimJoint952.setDEF("hanim_l_elbow")
HAnimJoint952.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint952.setUlimit([0,0,0])
HAnimJoint952.setLlimit([0,0,0])
HAnimJoint952.setStiffness([0,0,0])
HAnimSegment953 = HAnimSegment()
HAnimSegment953.setName("l_forearm")
HAnimSegment953.setDEF("hanim_l_forearm")
#Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
TouchSensor954 = TouchSensor()
TouchSensor954.setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm")

HAnimSegment953.addChildren(TouchSensor954)
Transform955 = Transform()
Transform955.setTranslation([0.2014,1.1357,-0.0682])
Shape956 = Shape()
Shape956.setUSE("HAnimJointShape")

Transform955.addChildren(Shape956)

HAnimSegment953.addChildren(Transform955)
#HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
Shape957 = Shape()
LineSet958 = LineSet()
LineSet958.setVertexCount([2])
Coordinate959 = Coordinate()
Coordinate959.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet958.setCoord(Coordinate959)
ColorRGBA960 = ColorRGBA()
ColorRGBA960.setUSE("HAnimSegmentLineColorRGBA")

LineSet958.setColor(ColorRGBA960)

Shape957.setGeometry(LineSet958)

HAnimSegment953.addChildren(Shape957)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
Shape961 = Shape()
LineSet962 = LineSet()
LineSet962.setVertexCount([2])
Coordinate963 = Coordinate()
Coordinate963.setPoint([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])

LineSet962.setCoord(Coordinate963)
ColorRGBA964 = ColorRGBA()
ColorRGBA964.setUSE("HAnimSiteLineColorRGBA")

LineSet962.setColor(ColorRGBA964)

Shape961.setGeometry(LineSet962)

HAnimSegment953.addChildren(Shape961)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
Shape965 = Shape()
LineSet966 = LineSet()
LineSet966.setVertexCount([2])
Coordinate967 = Coordinate()
Coordinate967.setPoint([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])

LineSet966.setCoord(Coordinate967)
ColorRGBA968 = ColorRGBA()
ColorRGBA968.setUSE("HAnimSiteLineColorRGBA")

LineSet966.setColor(ColorRGBA968)

Shape965.setGeometry(LineSet966)

HAnimSegment953.addChildren(Shape965)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
Shape969 = Shape()
LineSet970 = LineSet()
LineSet970.setVertexCount([2])
Coordinate971 = Coordinate()
Coordinate971.setPoint([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])

LineSet970.setCoord(Coordinate971)
ColorRGBA972 = ColorRGBA()
ColorRGBA972.setUSE("HAnimSiteLineColorRGBA")

LineSet970.setColor(ColorRGBA972)

Shape969.setGeometry(LineSet970)

HAnimSegment953.addChildren(Shape969)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
Shape973 = Shape()
LineSet974 = LineSet()
LineSet974.setVertexCount([2])
Coordinate975 = Coordinate()
Coordinate975.setPoint([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])

LineSet974.setCoord(Coordinate975)
ColorRGBA976 = ColorRGBA()
ColorRGBA976.setUSE("HAnimSiteLineColorRGBA")

LineSet974.setColor(ColorRGBA976)

Shape973.setGeometry(LineSet974)

HAnimSegment953.addChildren(Shape973)
HAnimSite977 = HAnimSite()
HAnimSite977.setName("l_radial_styloid_pt")
HAnimSite977.setDEF("hanim_l_radial_styloid_pt")
HAnimSite977.setTranslation([0.1901,0.8645,-0.0415])
#HAnimSite visualization shape
TouchSensor978 = TouchSensor()
TouchSensor978.setDescription("HAnimSite l_radial_styloid_pt")

HAnimSite977.addChildren(TouchSensor978)
Shape979 = Shape()
Shape979.setUSE("HAnimSiteShape")

HAnimSite977.addChildren(Shape979)

HAnimSegment953.addChildren(HAnimSite977)
HAnimSite980 = HAnimSite()
HAnimSite980.setName("l_olecranon_pt")
HAnimSite980.setDEF("hanim_l_olecranon_pt")
HAnimSite980.setTranslation([0.1962,1.1375,-0.1123])
#HAnimSite visualization shape
TouchSensor981 = TouchSensor()
TouchSensor981.setDescription("HAnimSite l_olecranon_pt")

HAnimSite980.addChildren(TouchSensor981)
Shape982 = Shape()
Shape982.setUSE("HAnimSiteShape")

HAnimSite980.addChildren(Shape982)

HAnimSegment953.addChildren(HAnimSite980)
HAnimSite983 = HAnimSite()
HAnimSite983.setName("l_humeral_medial_epicondyle_pt")
HAnimSite983.setDEF("hanim_l_humeral_medial_epicondyle_pt")
HAnimSite983.setTranslation([0.1735,1.1272,-0.1113])
#HAnimSite visualization shape
TouchSensor984 = TouchSensor()
TouchSensor984.setDescription("HAnimSite l_humeral_medial_epicn_pt")

HAnimSite983.addChildren(TouchSensor984)
Shape985 = Shape()
Shape985.setUSE("HAnimSiteShape")

HAnimSite983.addChildren(Shape985)

HAnimSegment953.addChildren(HAnimSite983)
HAnimSite986 = HAnimSite()
HAnimSite986.setName("l_radiale_pt")
HAnimSite986.setDEF("hanim_l_radiale_pt")
HAnimSite986.setTranslation([0.2182,1.1212,-0.1167])
#HAnimSite visualization shape
TouchSensor987 = TouchSensor()
TouchSensor987.setDescription("HAnimSite l_radiale_pt")

HAnimSite986.addChildren(TouchSensor987)
Shape988 = Shape()
Shape988.setUSE("HAnimSiteShape")

HAnimSite986.addChildren(Shape988)

HAnimSegment953.addChildren(HAnimSite986)

HAnimJoint952.addChildren(HAnimSegment953)
HAnimJoint989 = HAnimJoint()
HAnimJoint989.setName("l_radiocarpal")
HAnimJoint989.setDEF("hanim_l_radiocarpal")
HAnimJoint989.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint989.setUlimit([0,0,0])
HAnimJoint989.setLlimit([0,0,0])
HAnimJoint989.setStiffness([0,0,0])
HAnimSegment990 = HAnimSegment()
HAnimSegment990.setName("l_carpal")
HAnimSegment990.setDEF("hanim_l_carpal")
#Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
TouchSensor991 = TouchSensor()
TouchSensor991.setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal")

HAnimSegment990.addChildren(TouchSensor991)
Transform992 = Transform()
Transform992.setTranslation([0.1984,0.8663,-0.0583])
Shape993 = Shape()
Shape993.setUSE("HAnimJointShape")

Transform992.addChildren(Shape993)

HAnimSegment990.addChildren(Transform992)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
Shape994 = Shape()
LineSet995 = LineSet()
LineSet995.setVertexCount([2])
Coordinate996 = Coordinate()
Coordinate996.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet995.setCoord(Coordinate996)
ColorRGBA997 = ColorRGBA()
ColorRGBA997.setUSE("HAnimSegmentLineColorRGBA")

LineSet995.setColor(ColorRGBA997)

Shape994.setGeometry(LineSet995)

HAnimSegment990.addChildren(Shape994)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
Shape998 = Shape()
LineSet999 = LineSet()
LineSet999.setVertexCount([2])
Coordinate1000 = Coordinate()
Coordinate1000.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet999.setCoord(Coordinate1000)
ColorRGBA1001 = ColorRGBA()
ColorRGBA1001.setUSE("HAnimSegmentLineColorRGBA")

LineSet999.setColor(ColorRGBA1001)

Shape998.setGeometry(LineSet999)

HAnimSegment990.addChildren(Shape998)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
Shape1002 = Shape()
LineSet1003 = LineSet()
LineSet1003.setVertexCount([2])
Coordinate1004 = Coordinate()
Coordinate1004.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet1003.setCoord(Coordinate1004)
ColorRGBA1005 = ColorRGBA()
ColorRGBA1005.setUSE("HAnimSegmentLineColorRGBA")

LineSet1003.setColor(ColorRGBA1005)

Shape1002.setGeometry(LineSet1003)

HAnimSegment990.addChildren(Shape1002)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
Shape1006 = Shape()
LineSet1007 = LineSet()
LineSet1007.setVertexCount([2])
Coordinate1008 = Coordinate()
Coordinate1008.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet1007.setCoord(Coordinate1008)
ColorRGBA1009 = ColorRGBA()
ColorRGBA1009.setUSE("HAnimSegmentLineColorRGBA")

LineSet1007.setColor(ColorRGBA1009)

Shape1006.setGeometry(LineSet1007)

HAnimSegment990.addChildren(Shape1006)
#HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
Shape1010 = Shape()
LineSet1011 = LineSet()
LineSet1011.setVertexCount([2])
Coordinate1012 = Coordinate()
Coordinate1012.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1011.setCoord(Coordinate1012)
ColorRGBA1013 = ColorRGBA()
ColorRGBA1013.setUSE("HAnimSegmentLineColorRGBA")

LineSet1011.setColor(ColorRGBA1013)

Shape1010.setGeometry(LineSet1011)

HAnimSegment990.addChildren(Shape1010)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
Shape1014 = Shape()
LineSet1015 = LineSet()
LineSet1015.setVertexCount([2])
Coordinate1016 = Coordinate()
Coordinate1016.setPoint([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])

LineSet1015.setCoord(Coordinate1016)
ColorRGBA1017 = ColorRGBA()
ColorRGBA1017.setUSE("HAnimSiteLineColorRGBA")

LineSet1015.setColor(ColorRGBA1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment990.addChildren(Shape1014)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
Shape1018 = Shape()
LineSet1019 = LineSet()
LineSet1019.setVertexCount([2])
Coordinate1020 = Coordinate()
Coordinate1020.setPoint([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])

LineSet1019.setCoord(Coordinate1020)
ColorRGBA1021 = ColorRGBA()
ColorRGBA1021.setUSE("HAnimSiteLineColorRGBA")

LineSet1019.setColor(ColorRGBA1021)

Shape1018.setGeometry(LineSet1019)

HAnimSegment990.addChildren(Shape1018)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
Shape1022 = Shape()
LineSet1023 = LineSet()
LineSet1023.setVertexCount([2])
Coordinate1024 = Coordinate()
Coordinate1024.setPoint([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])

LineSet1023.setCoord(Coordinate1024)
ColorRGBA1025 = ColorRGBA()
ColorRGBA1025.setUSE("HAnimSiteLineColorRGBA")

LineSet1023.setColor(ColorRGBA1025)

Shape1022.setGeometry(LineSet1023)

HAnimSegment990.addChildren(Shape1022)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
Shape1026 = Shape()
LineSet1027 = LineSet()
LineSet1027.setVertexCount([2])
Coordinate1028 = Coordinate()
Coordinate1028.setPoint([0.1984,0.8663,-0.0583,0.3,0.75,0.45])

LineSet1027.setCoord(Coordinate1028)
ColorRGBA1029 = ColorRGBA()
ColorRGBA1029.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1027.setColor(ColorRGBA1029)

Shape1026.setGeometry(LineSet1027)

HAnimSegment990.addChildren(Shape1026)
HAnimSite1030 = HAnimSite()
HAnimSite1030.setName("l_metacarpal_phalanx_2_pt")
HAnimSite1030.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1030.setTranslation([0.2009,0.8139,-0.0237])
#HAnimSite visualization shape
TouchSensor1031 = TouchSensor()
TouchSensor1031.setDescription("HAnimSite l_metacarpal_pha2_pt")

HAnimSite1030.addChildren(TouchSensor1031)
Shape1032 = Shape()
Shape1032.setUSE("HAnimSiteShape")

HAnimSite1030.addChildren(Shape1032)

HAnimSegment990.addChildren(HAnimSite1030)
HAnimSite1033 = HAnimSite()
HAnimSite1033.setName("l_ulnar_styloid_pt")
HAnimSite1033.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1033.setTranslation([0.2142,0.8529,-0.0648])
#HAnimSite visualization shape
TouchSensor1034 = TouchSensor()
TouchSensor1034.setDescription("HAnimSite l_ulnar_styloid_pt")

HAnimSite1033.addChildren(TouchSensor1034)
Shape1035 = Shape()
Shape1035.setUSE("HAnimSiteShape")

HAnimSite1033.addChildren(Shape1035)

HAnimSegment990.addChildren(HAnimSite1033)
HAnimSite1036 = HAnimSite()
HAnimSite1036.setName("l_metacarpal_phalanx_5_pt")
HAnimSite1036.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1036.setTranslation([0.1929,0.786,-0.1122])
#HAnimSite visualization shape
TouchSensor1037 = TouchSensor()
TouchSensor1037.setDescription("HAnimSite l_metacarpal_pha5_pt")

HAnimSite1036.addChildren(TouchSensor1037)
Shape1038 = Shape()
Shape1038.setUSE("HAnimSiteShape")

HAnimSite1036.addChildren(Shape1038)

HAnimSegment990.addChildren(HAnimSite1036)
HAnimSite1039 = HAnimSite()
HAnimSite1039.setName("l_hand_front_view")
HAnimSite1039.setDEF("hanim_l_hand_front_view")
HAnimSite1039.setTranslation([0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1040 = TouchSensor()
TouchSensor1040.setDescription("HAnimSite l_hand_front_view")

HAnimSite1039.addChildren(TouchSensor1040)
Shape1041 = Shape()
Shape1041.setUSE("HAnimSiteShape")

HAnimSite1039.addChildren(Shape1041)
Viewpoint1042 = Viewpoint()
Viewpoint1042.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint1042.setCenterOfRotation([0,0.7,0])
Viewpoint1042.setDescription("left hand front")
Viewpoint1042.setPosition([0,0,0])

HAnimSite1039.addChildren(Viewpoint1042)
#HAnimSite/Viewpoint visualization shape
Anchor1043 = Anchor()
Anchor1043.setDescription("HAnimSite hanim_l_hand_front_view Viewpoint")
Anchor1043.setUrl(["#hanim_l_hand_front_viewpoint"])
LOD1044 = LOD()
LOD1044.setForceTransitions(True)
LOD1044.setRange([0.04])
WorldInfo1045 = WorldInfo()
WorldInfo1045.setInfo(["hide diamond when close"])

LOD1044.addChildren(WorldInfo1045)
Shape1046 = Shape()
Shape1046.setUSE("HAnimSiteViewpointShape")

LOD1044.addChildren(Shape1046)

Anchor1043.addChildren(LOD1044)

HAnimSite1039.addChildren(Anchor1043)

HAnimSegment990.addChildren(HAnimSite1039)

HAnimJoint989.addChildren(HAnimSegment990)
HAnimJoint1047 = HAnimJoint()
HAnimJoint1047.setName("l_carpometacarpal_1")
HAnimJoint1047.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1047.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1047.setUlimit([0,0,0])
HAnimJoint1047.setLlimit([0,0,0])
HAnimJoint1047.setStiffness([0,0,0])
HAnimSegment1048 = HAnimSegment()
HAnimSegment1048.setName("l_metacarpal_1")
HAnimSegment1048.setDEF("hanim_l_metacarpal_1")
#Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
TouchSensor1049 = TouchSensor()
TouchSensor1049.setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1")

HAnimSegment1048.addChildren(TouchSensor1049)
Transform1050 = Transform()
Transform1050.setTranslation([0.1924,0.8472,-0.0534])
Shape1051 = Shape()
Shape1051.setUSE("HAnimJointShape")

Transform1050.addChildren(Shape1051)

HAnimSegment1048.addChildren(Transform1050)
#HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
Shape1052 = Shape()
LineSet1053 = LineSet()
LineSet1053.setVertexCount([2])
Coordinate1054 = Coordinate()
Coordinate1054.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1053.setCoord(Coordinate1054)
ColorRGBA1055 = ColorRGBA()
ColorRGBA1055.setUSE("HAnimSegmentLineColorRGBA")

LineSet1053.setColor(ColorRGBA1055)

Shape1052.setGeometry(LineSet1053)

HAnimSegment1048.addChildren(Shape1052)

HAnimJoint1047.addChildren(HAnimSegment1048)
HAnimJoint1056 = HAnimJoint()
HAnimJoint1056.setName("l_metacarpophalangeal_1")
HAnimJoint1056.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1056.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1056.setUlimit([0,0,0])
HAnimJoint1056.setLlimit([0,0,0])
HAnimJoint1056.setStiffness([0,0,0])
HAnimSegment1057 = HAnimSegment()
HAnimSegment1057.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1057.setDEF("hanim_l_carpal_proximal_phalanx_1")
#Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
TouchSensor1058 = TouchSensor()
TouchSensor1058.setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1")

HAnimSegment1057.addChildren(TouchSensor1058)
Transform1059 = Transform()
Transform1059.setTranslation([0.1951,0.8226,0.0246])
Shape1060 = Shape()
Shape1060.setUSE("HAnimJointShape")

Transform1059.addChildren(Shape1060)

HAnimSegment1057.addChildren(Transform1059)
#HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
Shape1061 = Shape()
LineSet1062 = LineSet()
LineSet1062.setVertexCount([2])
Coordinate1063 = Coordinate()
Coordinate1063.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1062.setCoord(Coordinate1063)
ColorRGBA1064 = ColorRGBA()
ColorRGBA1064.setUSE("HAnimSegmentLineColorRGBA")

LineSet1062.setColor(ColorRGBA1064)

Shape1061.setGeometry(LineSet1062)

HAnimSegment1057.addChildren(Shape1061)

HAnimJoint1056.addChildren(HAnimSegment1057)
HAnimJoint1065 = HAnimJoint()
HAnimJoint1065.setName("l_carpal_interphalangeal_1")
HAnimJoint1065.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1065.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1065.setUlimit([0,0,0])
HAnimJoint1065.setLlimit([0,0,0])
HAnimJoint1065.setStiffness([0,0,0])
HAnimSegment1066 = HAnimSegment()
HAnimSegment1066.setName("l_carpal_distal_phalanx_1")
HAnimSegment1066.setDEF("hanim_l_carpal_distal_phalanx_1")
#Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
TouchSensor1067 = TouchSensor()
TouchSensor1067.setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1")

HAnimSegment1066.addChildren(TouchSensor1067)
Transform1068 = Transform()
Transform1068.setTranslation([0.1955,0.8159,0.0464])
Shape1069 = Shape()
Shape1069.setUSE("HAnimJointShape")

Transform1068.addChildren(Shape1069)

HAnimSegment1066.addChildren(Transform1068)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape1070 = Shape()
LineSet1071 = LineSet()
LineSet1071.setVertexCount([2])
Coordinate1072 = Coordinate()
Coordinate1072.setPoint([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])

LineSet1071.setCoord(Coordinate1072)
ColorRGBA1073 = ColorRGBA()
ColorRGBA1073.setUSE("HAnimSiteLineColorRGBA")

LineSet1071.setColor(ColorRGBA1073)

Shape1070.setGeometry(LineSet1071)

HAnimSegment1066.addChildren(Shape1070)
HAnimSite1074 = HAnimSite()
HAnimSite1074.setName("l_carpal_distal_phalanx_1_pt")
HAnimSite1074.setDEF("hanim_l_carpal_distal_phalanx_1_pt")
HAnimSite1074.setTranslation([0.1982,0.8061,0.0759])
#HAnimSite visualization shape
TouchSensor1075 = TouchSensor()
TouchSensor1075.setDescription("HAnimSite l_thumb_distal_tip")

HAnimSite1074.addChildren(TouchSensor1075)
Shape1076 = Shape()
Shape1076.setUSE("HAnimSiteShape")

HAnimSite1074.addChildren(Shape1076)

HAnimSegment1066.addChildren(HAnimSite1074)

HAnimJoint1065.addChildren(HAnimSegment1066)

HAnimJoint1056.addChildren(HAnimJoint1065)

HAnimJoint1047.addChildren(HAnimJoint1056)

HAnimJoint989.addChildren(HAnimJoint1047)
HAnimJoint1077 = HAnimJoint()
HAnimJoint1077.setName("l_carpometacarpal_2")
HAnimJoint1077.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1077.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1077.setUlimit([0,0,0])
HAnimJoint1077.setLlimit([0,0,0])
HAnimJoint1077.setStiffness([0,0,0])
HAnimSegment1078 = HAnimSegment()
HAnimSegment1078.setName("l_metacarpal_2")
HAnimSegment1078.setDEF("hanim_l_metacarpal_2")
#Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
TouchSensor1079 = TouchSensor()
TouchSensor1079.setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2")

HAnimSegment1078.addChildren(TouchSensor1079)
Transform1080 = Transform()
Transform1080.setTranslation([0.1983,0.8024,-0.028])
Shape1081 = Shape()
Shape1081.setUSE("HAnimJointShape")

Transform1080.addChildren(Shape1081)

HAnimSegment1078.addChildren(Transform1080)
#HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
Shape1082 = Shape()
LineSet1083 = LineSet()
LineSet1083.setVertexCount([2])
Coordinate1084 = Coordinate()
Coordinate1084.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1083.setCoord(Coordinate1084)
ColorRGBA1085 = ColorRGBA()
ColorRGBA1085.setUSE("HAnimSegmentLineColorRGBA")

LineSet1083.setColor(ColorRGBA1085)

Shape1082.setGeometry(LineSet1083)

HAnimSegment1078.addChildren(Shape1082)

HAnimJoint1077.addChildren(HAnimSegment1078)
HAnimJoint1086 = HAnimJoint()
HAnimJoint1086.setName("l_metacarpophalangeal_2")
HAnimJoint1086.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1086.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1086.setUlimit([0,0,0])
HAnimJoint1086.setLlimit([0,0,0])
HAnimJoint1086.setStiffness([0,0,0])
HAnimSegment1087 = HAnimSegment()
HAnimSegment1087.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1087.setDEF("hanim_l_carpal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
TouchSensor1088 = TouchSensor()
TouchSensor1088.setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2")

HAnimSegment1087.addChildren(TouchSensor1088)
Transform1089 = Transform()
Transform1089.setTranslation([0.1983,0.7815,-0.028])
Shape1090 = Shape()
Shape1090.setUSE("HAnimJointShape")

Transform1089.addChildren(Shape1090)

HAnimSegment1087.addChildren(Transform1089)
#HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
Shape1091 = Shape()
LineSet1092 = LineSet()
LineSet1092.setVertexCount([2])
Coordinate1093 = Coordinate()
Coordinate1093.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1092.setCoord(Coordinate1093)
ColorRGBA1094 = ColorRGBA()
ColorRGBA1094.setUSE("HAnimSegmentLineColorRGBA")

LineSet1092.setColor(ColorRGBA1094)

Shape1091.setGeometry(LineSet1092)

HAnimSegment1087.addChildren(Shape1091)

HAnimJoint1086.addChildren(HAnimSegment1087)
HAnimJoint1095 = HAnimJoint()
HAnimJoint1095.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1095.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1095.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1095.setUlimit([0,0,0])
HAnimJoint1095.setLlimit([0,0,0])
HAnimJoint1095.setStiffness([0,0,0])
HAnimSegment1096 = HAnimSegment()
HAnimSegment1096.setName("l_carpal_middle_phalanx_2")
HAnimSegment1096.setDEF("hanim_l_carpal_middle_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
TouchSensor1097 = TouchSensor()
TouchSensor1097.setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2")

HAnimSegment1096.addChildren(TouchSensor1097)
Transform1098 = Transform()
Transform1098.setTranslation([0.2017,0.7363,-0.0248])
Shape1099 = Shape()
Shape1099.setUSE("HAnimJointShape")

Transform1098.addChildren(Shape1099)

HAnimSegment1096.addChildren(Transform1098)
#HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
Shape1100 = Shape()
LineSet1101 = LineSet()
LineSet1101.setVertexCount([2])
Coordinate1102 = Coordinate()
Coordinate1102.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1101.setCoord(Coordinate1102)
ColorRGBA1103 = ColorRGBA()
ColorRGBA1103.setUSE("HAnimSegmentLineColorRGBA")

LineSet1101.setColor(ColorRGBA1103)

Shape1100.setGeometry(LineSet1101)

HAnimSegment1096.addChildren(Shape1100)

HAnimJoint1095.addChildren(HAnimSegment1096)
HAnimJoint1104 = HAnimJoint()
HAnimJoint1104.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1104.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1104.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1104.setUlimit([0,0,0])
HAnimJoint1104.setLlimit([0,0,0])
HAnimJoint1104.setStiffness([0,0,0])
HAnimSegment1105 = HAnimSegment()
HAnimSegment1105.setName("l_carpal_distal_phalanx_2")
HAnimSegment1105.setDEF("hanim_l_carpal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
TouchSensor1106 = TouchSensor()
TouchSensor1106.setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2")

HAnimSegment1105.addChildren(TouchSensor1106)
Transform1107 = Transform()
Transform1107.setTranslation([0.2028,0.7139,-0.0236])
Shape1108 = Shape()
Shape1108.setUSE("HAnimJointShape")

Transform1107.addChildren(Shape1108)

HAnimSegment1105.addChildren(Transform1107)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape1109 = Shape()
LineSet1110 = LineSet()
LineSet1110.setVertexCount([2])
Coordinate1111 = Coordinate()
Coordinate1111.setPoint([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])

LineSet1110.setCoord(Coordinate1111)
ColorRGBA1112 = ColorRGBA()
ColorRGBA1112.setUSE("HAnimSiteLineColorRGBA")

LineSet1110.setColor(ColorRGBA1112)

Shape1109.setGeometry(LineSet1110)

HAnimSegment1105.addChildren(Shape1109)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
Shape1113 = Shape()
LineSet1114 = LineSet()
LineSet1114.setVertexCount([2])
Coordinate1115 = Coordinate()
Coordinate1115.setPoint([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])

LineSet1114.setCoord(Coordinate1115)
ColorRGBA1116 = ColorRGBA()
ColorRGBA1116.setUSE("HAnimSiteLineColorRGBA")

LineSet1114.setColor(ColorRGBA1116)

Shape1113.setGeometry(LineSet1114)

HAnimSegment1105.addChildren(Shape1113)
HAnimSite1117 = HAnimSite()
HAnimSite1117.setName("l_carpal_distal_phalanx_2_pt")
HAnimSite1117.setDEF("hanim_l_carpal_distal_phalanx_2_pt")
HAnimSite1117.setTranslation([0.2089,0.6858,-0.0245])
#HAnimSite visualization shape
TouchSensor1118 = TouchSensor()
TouchSensor1118.setDescription("HAnimSite l_index_distal_tip")

HAnimSite1117.addChildren(TouchSensor1118)
Shape1119 = Shape()
Shape1119.setUSE("HAnimSiteShape")

HAnimSite1117.addChildren(Shape1119)

HAnimSegment1105.addChildren(HAnimSite1117)
HAnimSite1120 = HAnimSite()
HAnimSite1120.setName("l_dactylion_pt")
HAnimSite1120.setDEF("hanim_l_dactylion_pt")
HAnimSite1120.setTranslation([0.2056,0.6743,-0.0482])
#HAnimSite visualization shape
TouchSensor1121 = TouchSensor()
TouchSensor1121.setDescription("HAnimSite l_dactylion_pt")

HAnimSite1120.addChildren(TouchSensor1121)
Shape1122 = Shape()
Shape1122.setUSE("HAnimSiteShape")

HAnimSite1120.addChildren(Shape1122)

HAnimSegment1105.addChildren(HAnimSite1120)

HAnimJoint1104.addChildren(HAnimSegment1105)

HAnimJoint1095.addChildren(HAnimJoint1104)

HAnimJoint1086.addChildren(HAnimJoint1095)

HAnimJoint1077.addChildren(HAnimJoint1086)

HAnimJoint989.addChildren(HAnimJoint1077)
HAnimJoint1123 = HAnimJoint()
HAnimJoint1123.setName("l_carpometacarpal_3")
HAnimJoint1123.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1123.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1123.setUlimit([0,0,0])
HAnimJoint1123.setLlimit([0,0,0])
HAnimJoint1123.setStiffness([0,0,0])
HAnimSegment1124 = HAnimSegment()
HAnimSegment1124.setName("l_metacarpal_3")
HAnimSegment1124.setDEF("hanim_l_metacarpal_3")
#Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
TouchSensor1125 = TouchSensor()
TouchSensor1125.setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3")

HAnimSegment1124.addChildren(TouchSensor1125)
Transform1126 = Transform()
Transform1126.setTranslation([0.1987,0.8029,-0.053])
Shape1127 = Shape()
Shape1127.setUSE("HAnimJointShape")

Transform1126.addChildren(Shape1127)

HAnimSegment1124.addChildren(Transform1126)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
Shape1128 = Shape()
LineSet1129 = LineSet()
LineSet1129.setVertexCount([2])
Coordinate1130 = Coordinate()
Coordinate1130.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1129.setCoord(Coordinate1130)
ColorRGBA1131 = ColorRGBA()
ColorRGBA1131.setUSE("HAnimSegmentLineColorRGBA")

LineSet1129.setColor(ColorRGBA1131)

Shape1128.setGeometry(LineSet1129)

HAnimSegment1124.addChildren(Shape1128)

HAnimJoint1123.addChildren(HAnimSegment1124)
HAnimJoint1132 = HAnimJoint()
HAnimJoint1132.setName("l_metacarpophalangeal_3")
HAnimJoint1132.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1132.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1132.setUlimit([0,0,0])
HAnimJoint1132.setLlimit([0,0,0])
HAnimJoint1132.setStiffness([0,0,0])
HAnimSegment1133 = HAnimSegment()
HAnimSegment1133.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1133.setDEF("hanim_l_carpal_proximal_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
TouchSensor1134 = TouchSensor()
TouchSensor1134.setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3")

HAnimSegment1133.addChildren(TouchSensor1134)
Transform1135 = Transform()
Transform1135.setTranslation([0.1987,0.7818,-0.053])
Shape1136 = Shape()
Shape1136.setUSE("HAnimJointShape")

Transform1135.addChildren(Shape1136)

HAnimSegment1133.addChildren(Transform1135)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
Shape1137 = Shape()
LineSet1138 = LineSet()
LineSet1138.setVertexCount([2])
Coordinate1139 = Coordinate()
Coordinate1139.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1138.setCoord(Coordinate1139)
ColorRGBA1140 = ColorRGBA()
ColorRGBA1140.setUSE("HAnimSegmentLineColorRGBA")

LineSet1138.setColor(ColorRGBA1140)

Shape1137.setGeometry(LineSet1138)

HAnimSegment1133.addChildren(Shape1137)

HAnimJoint1132.addChildren(HAnimSegment1133)
HAnimJoint1141 = HAnimJoint()
HAnimJoint1141.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1141.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1141.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1141.setUlimit([0,0,0])
HAnimJoint1141.setLlimit([0,0,0])
HAnimJoint1141.setStiffness([0,0,0])
HAnimSegment1142 = HAnimSegment()
HAnimSegment1142.setName("l_carpal_middle_phalanx_3")
HAnimSegment1142.setDEF("hanim_l_carpal_middle_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
TouchSensor1143 = TouchSensor()
TouchSensor1143.setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3")

HAnimSegment1142.addChildren(TouchSensor1143)
Transform1144 = Transform()
Transform1144.setTranslation([0.2013,0.7273,-0.0503])
Shape1145 = Shape()
Shape1145.setUSE("HAnimJointShape")

Transform1144.addChildren(Shape1145)

HAnimSegment1142.addChildren(Transform1144)
#HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
Shape1146 = Shape()
LineSet1147 = LineSet()
LineSet1147.setVertexCount([2])
Coordinate1148 = Coordinate()
Coordinate1148.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1147.setCoord(Coordinate1148)
ColorRGBA1149 = ColorRGBA()
ColorRGBA1149.setUSE("HAnimSegmentLineColorRGBA")

LineSet1147.setColor(ColorRGBA1149)

Shape1146.setGeometry(LineSet1147)

HAnimSegment1142.addChildren(Shape1146)

HAnimJoint1141.addChildren(HAnimSegment1142)
HAnimJoint1150 = HAnimJoint()
HAnimJoint1150.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1150.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1150.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1150.setUlimit([0,0,0])
HAnimJoint1150.setLlimit([0,0,0])
HAnimJoint1150.setStiffness([0,0,0])
HAnimSegment1151 = HAnimSegment()
HAnimSegment1151.setName("l_carpal_distal_phalanx_3")
HAnimSegment1151.setDEF("hanim_l_carpal_distal_phalanx_3")
#Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
TouchSensor1152 = TouchSensor()
TouchSensor1152.setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3")

HAnimSegment1151.addChildren(TouchSensor1152)
Transform1153 = Transform()
Transform1153.setTranslation([0.2026,0.7011,-0.0494])
Shape1154 = Shape()
Shape1154.setUSE("HAnimJointShape")

Transform1153.addChildren(Shape1154)

HAnimSegment1151.addChildren(Transform1153)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape1155 = Shape()
LineSet1156 = LineSet()
LineSet1156.setVertexCount([2])
Coordinate1157 = Coordinate()
Coordinate1157.setPoint([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])

LineSet1156.setCoord(Coordinate1157)
ColorRGBA1158 = ColorRGBA()
ColorRGBA1158.setUSE("HAnimSiteLineColorRGBA")

LineSet1156.setColor(ColorRGBA1158)

Shape1155.setGeometry(LineSet1156)

HAnimSegment1151.addChildren(Shape1155)
HAnimSite1159 = HAnimSite()
HAnimSite1159.setName("l_carpal_distal_phalanx_3_pt")
HAnimSite1159.setDEF("hanim_l_carpal_distal_phalanx_3_pt")
HAnimSite1159.setTranslation([0.208,0.6731,-0.0491])
#HAnimSite visualization shape
TouchSensor1160 = TouchSensor()
TouchSensor1160.setDescription("HAnimSite l_middle_distal_tip")

HAnimSite1159.addChildren(TouchSensor1160)
Shape1161 = Shape()
Shape1161.setUSE("HAnimSiteShape")

HAnimSite1159.addChildren(Shape1161)

HAnimSegment1151.addChildren(HAnimSite1159)

HAnimJoint1150.addChildren(HAnimSegment1151)

HAnimJoint1141.addChildren(HAnimJoint1150)

HAnimJoint1132.addChildren(HAnimJoint1141)

HAnimJoint1123.addChildren(HAnimJoint1132)

HAnimJoint989.addChildren(HAnimJoint1123)
HAnimJoint1162 = HAnimJoint()
HAnimJoint1162.setName("l_carpometacarpal_4")
HAnimJoint1162.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1162.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1162.setUlimit([0,0,0])
HAnimJoint1162.setLlimit([0,0,0])
HAnimJoint1162.setStiffness([0,0,0])
HAnimSegment1163 = HAnimSegment()
HAnimSegment1163.setName("l_metacarpal_4")
HAnimSegment1163.setDEF("hanim_l_metacarpal_4")
#Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
TouchSensor1164 = TouchSensor()
TouchSensor1164.setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4")

HAnimSegment1163.addChildren(TouchSensor1164)
Transform1165 = Transform()
Transform1165.setTranslation([0.1956,0.8019,-0.0794])
Shape1166 = Shape()
Shape1166.setUSE("HAnimJointShape")

Transform1165.addChildren(Shape1166)

HAnimSegment1163.addChildren(Transform1165)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
Shape1167 = Shape()
LineSet1168 = LineSet()
LineSet1168.setVertexCount([2])
Coordinate1169 = Coordinate()
Coordinate1169.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1168.setCoord(Coordinate1169)
ColorRGBA1170 = ColorRGBA()
ColorRGBA1170.setUSE("HAnimSegmentLineColorRGBA")

LineSet1168.setColor(ColorRGBA1170)

Shape1167.setGeometry(LineSet1168)

HAnimSegment1163.addChildren(Shape1167)

HAnimJoint1162.addChildren(HAnimSegment1163)
HAnimJoint1171 = HAnimJoint()
HAnimJoint1171.setName("l_metacarpophalangeal_4")
HAnimJoint1171.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1171.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1171.setUlimit([0,0,0])
HAnimJoint1171.setLlimit([0,0,0])
HAnimJoint1171.setStiffness([0,0,0])
HAnimSegment1172 = HAnimSegment()
HAnimSegment1172.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1172.setDEF("hanim_l_carpal_proximal_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
TouchSensor1173 = TouchSensor()
TouchSensor1173.setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4")

HAnimSegment1172.addChildren(TouchSensor1173)
Transform1174 = Transform()
Transform1174.setTranslation([0.1956,0.7815,-0.0794])
Shape1175 = Shape()
Shape1175.setUSE("HAnimJointShape")

Transform1174.addChildren(Shape1175)

HAnimSegment1172.addChildren(Transform1174)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
Shape1176 = Shape()
LineSet1177 = LineSet()
LineSet1177.setVertexCount([2])
Coordinate1178 = Coordinate()
Coordinate1178.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1177.setCoord(Coordinate1178)
ColorRGBA1179 = ColorRGBA()
ColorRGBA1179.setUSE("HAnimSegmentLineColorRGBA")

LineSet1177.setColor(ColorRGBA1179)

Shape1176.setGeometry(LineSet1177)

HAnimSegment1172.addChildren(Shape1176)

HAnimJoint1171.addChildren(HAnimSegment1172)
HAnimJoint1180 = HAnimJoint()
HAnimJoint1180.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1180.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1180.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1180.setUlimit([0,0,0])
HAnimJoint1180.setLlimit([0,0,0])
HAnimJoint1180.setStiffness([0,0,0])
HAnimSegment1181 = HAnimSegment()
HAnimSegment1181.setName("l_carpal_middle_phalanx_4")
HAnimSegment1181.setDEF("hanim_l_carpal_middle_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
TouchSensor1182 = TouchSensor()
TouchSensor1182.setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4")

HAnimSegment1181.addChildren(TouchSensor1182)
Transform1183 = Transform()
Transform1183.setTranslation([0.1973,0.7287,-0.0777])
Shape1184 = Shape()
Shape1184.setUSE("HAnimJointShape")

Transform1183.addChildren(Shape1184)

HAnimSegment1181.addChildren(Transform1183)
#HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
Shape1185 = Shape()
LineSet1186 = LineSet()
LineSet1186.setVertexCount([2])
Coordinate1187 = Coordinate()
Coordinate1187.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1186.setCoord(Coordinate1187)
ColorRGBA1188 = ColorRGBA()
ColorRGBA1188.setUSE("HAnimSegmentLineColorRGBA")

LineSet1186.setColor(ColorRGBA1188)

Shape1185.setGeometry(LineSet1186)

HAnimSegment1181.addChildren(Shape1185)

HAnimJoint1180.addChildren(HAnimSegment1181)
HAnimJoint1189 = HAnimJoint()
HAnimJoint1189.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1189.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1189.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1189.setUlimit([0,0,0])
HAnimJoint1189.setLlimit([0,0,0])
HAnimJoint1189.setStiffness([0,0,0])
HAnimSegment1190 = HAnimSegment()
HAnimSegment1190.setName("l_carpal_distal_phalanx_4")
HAnimSegment1190.setDEF("hanim_l_carpal_distal_phalanx_4")
#Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
TouchSensor1191 = TouchSensor()
TouchSensor1191.setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4")

HAnimSegment1190.addChildren(TouchSensor1191)
Transform1192 = Transform()
Transform1192.setTranslation([0.1983,0.7045,-0.0767])
Shape1193 = Shape()
Shape1193.setUSE("HAnimJointShape")

Transform1192.addChildren(Shape1193)

HAnimSegment1190.addChildren(Transform1192)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape1194 = Shape()
LineSet1195 = LineSet()
LineSet1195.setVertexCount([2])
Coordinate1196 = Coordinate()
Coordinate1196.setPoint([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])

LineSet1195.setCoord(Coordinate1196)
ColorRGBA1197 = ColorRGBA()
ColorRGBA1197.setUSE("HAnimSiteLineColorRGBA")

LineSet1195.setColor(ColorRGBA1197)

Shape1194.setGeometry(LineSet1195)

HAnimSegment1190.addChildren(Shape1194)
HAnimSite1198 = HAnimSite()
HAnimSite1198.setName("l_carpal_distal_phalanx_4_pt")
HAnimSite1198.setDEF("hanim_l_carpal_distal_phalanx_4_pt")
HAnimSite1198.setTranslation([0.2035,0.675,-0.0756])
#HAnimSite visualization shape
TouchSensor1199 = TouchSensor()
TouchSensor1199.setDescription("HAnimSite l_ring_distal_tip")

HAnimSite1198.addChildren(TouchSensor1199)
Shape1200 = Shape()
Shape1200.setUSE("HAnimSiteShape")

HAnimSite1198.addChildren(Shape1200)

HAnimSegment1190.addChildren(HAnimSite1198)

HAnimJoint1189.addChildren(HAnimSegment1190)

HAnimJoint1180.addChildren(HAnimJoint1189)

HAnimJoint1171.addChildren(HAnimJoint1180)

HAnimJoint1162.addChildren(HAnimJoint1171)

HAnimJoint989.addChildren(HAnimJoint1162)
HAnimJoint1201 = HAnimJoint()
HAnimJoint1201.setName("l_carpometacarpal_5")
HAnimJoint1201.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1201.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1201.setUlimit([0,0,0])
HAnimJoint1201.setLlimit([0,0,0])
HAnimJoint1201.setStiffness([0,0,0])
HAnimSegment1202 = HAnimSegment()
HAnimSegment1202.setName("l_metacarpal_5")
HAnimSegment1202.setDEF("hanim_l_metacarpal_5")
#Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
TouchSensor1203 = TouchSensor()
TouchSensor1203.setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5")

HAnimSegment1202.addChildren(TouchSensor1203)
Transform1204 = Transform()
Transform1204.setTranslation([0.1925,0.8066,-0.1036])
Shape1205 = Shape()
Shape1205.setUSE("HAnimJointShape")

Transform1204.addChildren(Shape1205)

HAnimSegment1202.addChildren(Transform1204)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
Shape1206 = Shape()
LineSet1207 = LineSet()
LineSet1207.setVertexCount([2])
Coordinate1208 = Coordinate()
Coordinate1208.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1207.setCoord(Coordinate1208)
ColorRGBA1209 = ColorRGBA()
ColorRGBA1209.setUSE("HAnimSegmentLineColorRGBA")

LineSet1207.setColor(ColorRGBA1209)

Shape1206.setGeometry(LineSet1207)

HAnimSegment1202.addChildren(Shape1206)

HAnimJoint1201.addChildren(HAnimSegment1202)
HAnimJoint1210 = HAnimJoint()
HAnimJoint1210.setName("l_metacarpophalangeal_5")
HAnimJoint1210.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1210.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1210.setUlimit([0,0,0])
HAnimJoint1210.setLlimit([0,0,0])
HAnimJoint1210.setStiffness([0,0,0])
HAnimSegment1211 = HAnimSegment()
HAnimSegment1211.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1211.setDEF("hanim_l_carpal_proximal_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
TouchSensor1212 = TouchSensor()
TouchSensor1212.setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5")

HAnimSegment1211.addChildren(TouchSensor1212)
Transform1213 = Transform()
Transform1213.setTranslation([0.1925,0.7866,-0.1036])
Shape1214 = Shape()
Shape1214.setUSE("HAnimJointShape")

Transform1213.addChildren(Shape1214)

HAnimSegment1211.addChildren(Transform1213)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
Shape1215 = Shape()
LineSet1216 = LineSet()
LineSet1216.setVertexCount([2])
Coordinate1217 = Coordinate()
Coordinate1217.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1216.setCoord(Coordinate1217)
ColorRGBA1218 = ColorRGBA()
ColorRGBA1218.setUSE("HAnimSegmentLineColorRGBA")

LineSet1216.setColor(ColorRGBA1218)

Shape1215.setGeometry(LineSet1216)

HAnimSegment1211.addChildren(Shape1215)

HAnimJoint1210.addChildren(HAnimSegment1211)
HAnimJoint1219 = HAnimJoint()
HAnimJoint1219.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1219.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1219.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1219.setUlimit([0,0,0])
HAnimJoint1219.setLlimit([0,0,0])
HAnimJoint1219.setStiffness([0,0,0])
HAnimSegment1220 = HAnimSegment()
HAnimSegment1220.setName("l_carpal_middle_phalanx_5")
HAnimSegment1220.setDEF("hanim_l_carpal_middle_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
TouchSensor1221 = TouchSensor()
TouchSensor1221.setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5")

HAnimSegment1220.addChildren(TouchSensor1221)
Transform1222 = Transform()
Transform1222.setTranslation([0.1938,0.7452,-0.1024])
Shape1223 = Shape()
Shape1223.setUSE("HAnimJointShape")

Transform1222.addChildren(Shape1223)

HAnimSegment1220.addChildren(Transform1222)
#HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
Shape1224 = Shape()
LineSet1225 = LineSet()
LineSet1225.setVertexCount([2])
Coordinate1226 = Coordinate()
Coordinate1226.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1225.setCoord(Coordinate1226)
ColorRGBA1227 = ColorRGBA()
ColorRGBA1227.setUSE("HAnimSegmentLineColorRGBA")

LineSet1225.setColor(ColorRGBA1227)

Shape1224.setGeometry(LineSet1225)

HAnimSegment1220.addChildren(Shape1224)

HAnimJoint1219.addChildren(HAnimSegment1220)
HAnimJoint1228 = HAnimJoint()
HAnimJoint1228.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1228.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1228.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1228.setUlimit([0,0,0])
HAnimJoint1228.setLlimit([0,0,0])
HAnimJoint1228.setStiffness([0,0,0])
HAnimSegment1229 = HAnimSegment()
HAnimSegment1229.setName("l_carpal_distal_phalanx_5")
HAnimSegment1229.setDEF("hanim_l_carpal_distal_phalanx_5")
#Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
TouchSensor1230 = TouchSensor()
TouchSensor1230.setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5")

HAnimSegment1229.addChildren(TouchSensor1230)
Transform1231 = Transform()
Transform1231.setTranslation([0.1948,0.7277,-0.1017])
Shape1232 = Shape()
Shape1232.setUSE("HAnimJointShape")

Transform1231.addChildren(Shape1232)

HAnimSegment1229.addChildren(Transform1231)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape1233 = Shape()
LineSet1234 = LineSet()
LineSet1234.setVertexCount([2])
Coordinate1235 = Coordinate()
Coordinate1235.setPoint([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])

LineSet1234.setCoord(Coordinate1235)
ColorRGBA1236 = ColorRGBA()
ColorRGBA1236.setUSE("HAnimSiteLineColorRGBA")

LineSet1234.setColor(ColorRGBA1236)

Shape1233.setGeometry(LineSet1234)

HAnimSegment1229.addChildren(Shape1233)
HAnimSite1237 = HAnimSite()
HAnimSite1237.setName("l_carpal_distal_phalanx_5_pt")
HAnimSite1237.setDEF("hanim_l_carpal_distal_phalanx_5_pt")
HAnimSite1237.setTranslation([0.2014,0.7009,-0.1012])
#HAnimSite visualization shape
TouchSensor1238 = TouchSensor()
TouchSensor1238.setDescription("HAnimSite l_pinky_distal_tip")

HAnimSite1237.addChildren(TouchSensor1238)
Shape1239 = Shape()
Shape1239.setUSE("HAnimSiteShape")

HAnimSite1237.addChildren(Shape1239)

HAnimSegment1229.addChildren(HAnimSite1237)

HAnimJoint1228.addChildren(HAnimSegment1229)

HAnimJoint1219.addChildren(HAnimJoint1228)

HAnimJoint1210.addChildren(HAnimJoint1219)

HAnimJoint1201.addChildren(HAnimJoint1210)

HAnimJoint989.addChildren(HAnimJoint1201)

HAnimJoint952.addChildren(HAnimJoint989)

HAnimJoint936.addChildren(HAnimJoint952)

HAnimJoint927.addChildren(HAnimJoint936)

HAnimJoint890.addChildren(HAnimJoint927)

HAnimJoint602.addChildren(HAnimJoint890)
HAnimJoint1240 = HAnimJoint()
HAnimJoint1240.setName("r_sternoclavicular")
HAnimJoint1240.setDEF("hanim_r_sternoclavicular")
HAnimJoint1240.setCenter([-0.082,1.4488,-0.0353])
HAnimJoint1240.setUlimit([0,0,0])
HAnimJoint1240.setLlimit([0,0,0])
HAnimJoint1240.setStiffness([0,0,0])
HAnimSegment1241 = HAnimSegment()
HAnimSegment1241.setName("r_clavicle")
HAnimSegment1241.setDEF("hanim_r_clavicle")
#Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor1242 = TouchSensor()
TouchSensor1242.setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")

HAnimSegment1241.addChildren(TouchSensor1242)
Transform1243 = Transform()
Transform1243.setTranslation([-0.082,1.4488,-0.0353])
Shape1244 = Shape()
Shape1244.setUSE("HAnimJointShape")

Transform1243.addChildren(Shape1244)

HAnimSegment1241.addChildren(Transform1243)
#HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
Shape1245 = Shape()
LineSet1246 = LineSet()
LineSet1246.setVertexCount([2])
Coordinate1247 = Coordinate()
Coordinate1247.setPoint([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])

LineSet1246.setCoord(Coordinate1247)
ColorRGBA1248 = ColorRGBA()
ColorRGBA1248.setUSE("HAnimSegmentLineColorRGBA")

LineSet1246.setColor(ColorRGBA1248)

Shape1245.setGeometry(LineSet1246)

HAnimSegment1241.addChildren(Shape1245)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
Shape1249 = Shape()
LineSet1250 = LineSet()
LineSet1250.setVertexCount([2])
Coordinate1251 = Coordinate()
Coordinate1251.setPoint([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])

LineSet1250.setCoord(Coordinate1251)
ColorRGBA1252 = ColorRGBA()
ColorRGBA1252.setUSE("HAnimSiteLineColorRGBA")

LineSet1250.setColor(ColorRGBA1252)

Shape1249.setGeometry(LineSet1250)

HAnimSegment1241.addChildren(Shape1249)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
Shape1253 = Shape()
LineSet1254 = LineSet()
LineSet1254.setVertexCount([2])
Coordinate1255 = Coordinate()
Coordinate1255.setPoint([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])

LineSet1254.setCoord(Coordinate1255)
ColorRGBA1256 = ColorRGBA()
ColorRGBA1256.setUSE("HAnimSiteLineColorRGBA")

LineSet1254.setColor(ColorRGBA1256)

Shape1253.setGeometry(LineSet1254)

HAnimSegment1241.addChildren(Shape1253)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
Shape1257 = Shape()
LineSet1258 = LineSet()
LineSet1258.setVertexCount([2])
Coordinate1259 = Coordinate()
Coordinate1259.setPoint([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])

LineSet1258.setCoord(Coordinate1259)
ColorRGBA1260 = ColorRGBA()
ColorRGBA1260.setUSE("HAnimSiteLineColorRGBA")

LineSet1258.setColor(ColorRGBA1260)

Shape1257.setGeometry(LineSet1258)

HAnimSegment1241.addChildren(Shape1257)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
Shape1261 = Shape()
LineSet1262 = LineSet()
LineSet1262.setVertexCount([2])
Coordinate1263 = Coordinate()
Coordinate1263.setPoint([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])

LineSet1262.setCoord(Coordinate1263)
ColorRGBA1264 = ColorRGBA()
ColorRGBA1264.setUSE("HAnimSiteLineColorRGBA")

LineSet1262.setColor(ColorRGBA1264)

Shape1261.setGeometry(LineSet1262)

HAnimSegment1241.addChildren(Shape1261)
HAnimSite1265 = HAnimSite()
HAnimSite1265.setName("r_clavicle_pt")
HAnimSite1265.setDEF("hanim_r_clavicle_pt")
HAnimSite1265.setTranslation([-0.0115,1.4943,0.04])
#HAnimSite visualization shape
TouchSensor1266 = TouchSensor()
TouchSensor1266.setDescription("HAnimSite r_clavicale_pt")

HAnimSite1265.addChildren(TouchSensor1266)
Shape1267 = Shape()
Shape1267.setUSE("HAnimSiteShape")

HAnimSite1265.addChildren(Shape1267)

HAnimSegment1241.addChildren(HAnimSite1265)
HAnimSite1268 = HAnimSite()
HAnimSite1268.setName("r_acromion_pt")
HAnimSite1268.setDEF("hanim_r_acromion_pt")
HAnimSite1268.setTranslation([-0.1905,1.4791,-0.0431])
#HAnimSite visualization shape
TouchSensor1269 = TouchSensor()
TouchSensor1269.setDescription("HAnimSite r_acromion_pt")

HAnimSite1268.addChildren(TouchSensor1269)
Shape1270 = Shape()
Shape1270.setUSE("HAnimSiteShape")

HAnimSite1268.addChildren(Shape1270)

HAnimSegment1241.addChildren(HAnimSite1268)
HAnimSite1271 = HAnimSite()
HAnimSite1271.setName("r_axilla_proximal_pt")
HAnimSite1271.setDEF("hanim_r_axilla_proximal_pt")
HAnimSite1271.setTranslation([-0.1626,1.4072,-0.0031])
#HAnimSite visualization shape
TouchSensor1272 = TouchSensor()
TouchSensor1272.setDescription("HAnimSite r_axilla_ant_pt")

HAnimSite1271.addChildren(TouchSensor1272)
Shape1273 = Shape()
Shape1273.setUSE("HAnimSiteShape")

HAnimSite1271.addChildren(Shape1273)

HAnimSegment1241.addChildren(HAnimSite1271)
HAnimSite1274 = HAnimSite()
HAnimSite1274.setName("r_axilla_distal_pt")
HAnimSite1274.setDEF("hanim_r_axilla_distal_pt")
HAnimSite1274.setTranslation([-0.1603,1.4098,-0.0826])
#HAnimSite visualization shape
TouchSensor1275 = TouchSensor()
TouchSensor1275.setDescription("HAnimSite r_axilla_post_pt")

HAnimSite1274.addChildren(TouchSensor1275)
Shape1276 = Shape()
Shape1276.setUSE("HAnimSiteShape")

HAnimSite1274.addChildren(Shape1276)

HAnimSegment1241.addChildren(HAnimSite1274)

HAnimJoint1240.addChildren(HAnimSegment1241)
HAnimJoint1277 = HAnimJoint()
HAnimJoint1277.setName("r_acromioclavicular")
HAnimJoint1277.setDEF("hanim_r_acromioclavicular")
HAnimJoint1277.setCenter([-0.0962,1.4269,-0.0424])
HAnimJoint1277.setUlimit([0,0,0])
HAnimJoint1277.setLlimit([0,0,0])
HAnimJoint1277.setStiffness([0,0,0])
HAnimSegment1278 = HAnimSegment()
HAnimSegment1278.setName("r_scapula")
HAnimSegment1278.setDEF("hanim_r_scapula")
#Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
TouchSensor1279 = TouchSensor()
TouchSensor1279.setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")

HAnimSegment1278.addChildren(TouchSensor1279)
Transform1280 = Transform()
Transform1280.setTranslation([-0.0962,1.4269,-0.0424])
Shape1281 = Shape()
Shape1281.setUSE("HAnimJointShape")

Transform1280.addChildren(Shape1281)

HAnimSegment1278.addChildren(Transform1280)
#HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
Shape1282 = Shape()
LineSet1283 = LineSet()
LineSet1283.setVertexCount([2])
Coordinate1284 = Coordinate()
Coordinate1284.setPoint([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])

LineSet1283.setCoord(Coordinate1284)
ColorRGBA1285 = ColorRGBA()
ColorRGBA1285.setUSE("HAnimSegmentLineColorRGBA")

LineSet1283.setColor(ColorRGBA1285)

Shape1282.setGeometry(LineSet1283)

HAnimSegment1278.addChildren(Shape1282)

HAnimJoint1277.addChildren(HAnimSegment1278)
HAnimJoint1286 = HAnimJoint()
HAnimJoint1286.setName("r_shoulder")
HAnimJoint1286.setDEF("hanim_r_shoulder")
HAnimJoint1286.setCenter([-0.2029,1.4376,-0.0387])
HAnimJoint1286.setUlimit([0,0,0])
HAnimJoint1286.setLlimit([0,0,0])
HAnimJoint1286.setStiffness([0,0,0])
HAnimSegment1287 = HAnimSegment()
HAnimSegment1287.setName("r_upperarm")
HAnimSegment1287.setDEF("hanim_r_upperarm")
#Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor1288 = TouchSensor()
TouchSensor1288.setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm")

HAnimSegment1287.addChildren(TouchSensor1288)
Transform1289 = Transform()
Transform1289.setTranslation([-0.2029,1.4376,-0.0387])
Shape1290 = Shape()
Shape1290.setUSE("HAnimJointShape")

Transform1289.addChildren(Shape1290)

HAnimSegment1287.addChildren(Transform1289)
#HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
Shape1291 = Shape()
LineSet1292 = LineSet()
LineSet1292.setVertexCount([2])
Coordinate1293 = Coordinate()
Coordinate1293.setPoint([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])

LineSet1292.setCoord(Coordinate1293)
ColorRGBA1294 = ColorRGBA()
ColorRGBA1294.setUSE("HAnimSegmentLineColorRGBA")

LineSet1292.setColor(ColorRGBA1294)

Shape1291.setGeometry(LineSet1292)

HAnimSegment1287.addChildren(Shape1291)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
Shape1295 = Shape()
LineSet1296 = LineSet()
LineSet1296.setVertexCount([2])
Coordinate1297 = Coordinate()
Coordinate1297.setPoint([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])

LineSet1296.setCoord(Coordinate1297)
ColorRGBA1298 = ColorRGBA()
ColorRGBA1298.setUSE("HAnimSiteLineColorRGBA")

LineSet1296.setColor(ColorRGBA1298)

Shape1295.setGeometry(LineSet1296)

HAnimSegment1287.addChildren(Shape1295)
HAnimSite1299 = HAnimSite()
HAnimSite1299.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite1299.setDEF("hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite1299.setTranslation([-0.2224,1.1517,-0.1033])
#HAnimSite visualization shape
TouchSensor1300 = TouchSensor()
TouchSensor1300.setDescription("HAnimSite r_humeral_lateral_epicn_pt")

HAnimSite1299.addChildren(TouchSensor1300)
Shape1301 = Shape()
Shape1301.setUSE("HAnimSiteShape")

HAnimSite1299.addChildren(Shape1301)

HAnimSegment1287.addChildren(HAnimSite1299)

HAnimJoint1286.addChildren(HAnimSegment1287)
HAnimJoint1302 = HAnimJoint()
HAnimJoint1302.setName("r_elbow")
HAnimJoint1302.setDEF("hanim_r_elbow")
HAnimJoint1302.setCenter([-0.2014,1.1357,-0.0682])
HAnimJoint1302.setUlimit([0,0,0])
HAnimJoint1302.setLlimit([0,0,0])
HAnimJoint1302.setStiffness([0,0,0])
HAnimSegment1303 = HAnimSegment()
HAnimSegment1303.setName("r_forearm")
HAnimSegment1303.setDEF("hanim_r_forearm")
#Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
TouchSensor1304 = TouchSensor()
TouchSensor1304.setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm")

HAnimSegment1303.addChildren(TouchSensor1304)
Transform1305 = Transform()
Transform1305.setTranslation([-0.2014,1.1357,-0.0682])
Shape1306 = Shape()
Shape1306.setUSE("HAnimJointShape")

Transform1305.addChildren(Shape1306)

HAnimSegment1303.addChildren(Transform1305)
#HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
Shape1307 = Shape()
LineSet1308 = LineSet()
LineSet1308.setVertexCount([2])
Coordinate1309 = Coordinate()
Coordinate1309.setPoint([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])

LineSet1308.setCoord(Coordinate1309)
ColorRGBA1310 = ColorRGBA()
ColorRGBA1310.setUSE("HAnimSegmentLineColorRGBA")

LineSet1308.setColor(ColorRGBA1310)

Shape1307.setGeometry(LineSet1308)

HAnimSegment1303.addChildren(Shape1307)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
Shape1311 = Shape()
LineSet1312 = LineSet()
LineSet1312.setVertexCount([2])
Coordinate1313 = Coordinate()
Coordinate1313.setPoint([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])

LineSet1312.setCoord(Coordinate1313)
ColorRGBA1314 = ColorRGBA()
ColorRGBA1314.setUSE("HAnimSiteLineColorRGBA")

LineSet1312.setColor(ColorRGBA1314)

Shape1311.setGeometry(LineSet1312)

HAnimSegment1303.addChildren(Shape1311)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
Shape1315 = Shape()
LineSet1316 = LineSet()
LineSet1316.setVertexCount([2])
Coordinate1317 = Coordinate()
Coordinate1317.setPoint([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])

LineSet1316.setCoord(Coordinate1317)
ColorRGBA1318 = ColorRGBA()
ColorRGBA1318.setUSE("HAnimSiteLineColorRGBA")

LineSet1316.setColor(ColorRGBA1318)

Shape1315.setGeometry(LineSet1316)

HAnimSegment1303.addChildren(Shape1315)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
Shape1319 = Shape()
LineSet1320 = LineSet()
LineSet1320.setVertexCount([2])
Coordinate1321 = Coordinate()
Coordinate1321.setPoint([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])

LineSet1320.setCoord(Coordinate1321)
ColorRGBA1322 = ColorRGBA()
ColorRGBA1322.setUSE("HAnimSiteLineColorRGBA")

LineSet1320.setColor(ColorRGBA1322)

Shape1319.setGeometry(LineSet1320)

HAnimSegment1303.addChildren(Shape1319)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
Shape1323 = Shape()
LineSet1324 = LineSet()
LineSet1324.setVertexCount([2])
Coordinate1325 = Coordinate()
Coordinate1325.setPoint([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])

LineSet1324.setCoord(Coordinate1325)
ColorRGBA1326 = ColorRGBA()
ColorRGBA1326.setUSE("HAnimSiteLineColorRGBA")

LineSet1324.setColor(ColorRGBA1326)

Shape1323.setGeometry(LineSet1324)

HAnimSegment1303.addChildren(Shape1323)
HAnimSite1327 = HAnimSite()
HAnimSite1327.setName("r_radial_styloid_pt")
HAnimSite1327.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1327.setTranslation([-0.1884,0.8676,-0.036])
#HAnimSite visualization shape
TouchSensor1328 = TouchSensor()
TouchSensor1328.setDescription("HAnimSite r_radial_styloid_pt")

HAnimSite1327.addChildren(TouchSensor1328)
Shape1329 = Shape()
Shape1329.setUSE("HAnimSiteShape")

HAnimSite1327.addChildren(Shape1329)

HAnimSegment1303.addChildren(HAnimSite1327)
HAnimSite1330 = HAnimSite()
HAnimSite1330.setName("r_olecranon_pt")
HAnimSite1330.setDEF("hanim_r_olecranon_pt")
HAnimSite1330.setTranslation([-0.1907,1.1405,-0.1065])
#HAnimSite visualization shape
TouchSensor1331 = TouchSensor()
TouchSensor1331.setDescription("HAnimSite r_olecranon_pt")

HAnimSite1330.addChildren(TouchSensor1331)
Shape1332 = Shape()
Shape1332.setUSE("HAnimSiteShape")

HAnimSite1330.addChildren(Shape1332)

HAnimSegment1303.addChildren(HAnimSite1330)
HAnimSite1333 = HAnimSite()
HAnimSite1333.setName("r_humeral_medial_epicondyle_pt")
HAnimSite1333.setDEF("hanim_r_humeral_medial_epicondyle_pt")
HAnimSite1333.setTranslation([-0.168,1.1298,-0.1062])
#HAnimSite visualization shape
TouchSensor1334 = TouchSensor()
TouchSensor1334.setDescription("HAnimSite r_humeral_medial_epicn_pt")

HAnimSite1333.addChildren(TouchSensor1334)
Shape1335 = Shape()
Shape1335.setUSE("HAnimSiteShape")

HAnimSite1333.addChildren(Shape1335)

HAnimSegment1303.addChildren(HAnimSite1333)
HAnimSite1336 = HAnimSite()
HAnimSite1336.setName("r_radiale_pt")
HAnimSite1336.setDEF("hanim_r_radiale_pt")
HAnimSite1336.setTranslation([-0.213,1.1305,-0.1091])
#HAnimSite visualization shape
TouchSensor1337 = TouchSensor()
TouchSensor1337.setDescription("HAnimSite r_radiale_pt")

HAnimSite1336.addChildren(TouchSensor1337)
Shape1338 = Shape()
Shape1338.setUSE("HAnimSiteShape")

HAnimSite1336.addChildren(Shape1338)

HAnimSegment1303.addChildren(HAnimSite1336)

HAnimJoint1302.addChildren(HAnimSegment1303)
HAnimJoint1339 = HAnimJoint()
HAnimJoint1339.setName("r_radiocarpal")
HAnimJoint1339.setDEF("hanim_r_radiocarpal")
HAnimJoint1339.setCenter([-0.1984,0.8663,-0.0583])
HAnimJoint1339.setUlimit([0,0,0])
HAnimJoint1339.setLlimit([0,0,0])
HAnimJoint1339.setStiffness([0,0,0])
HAnimSegment1340 = HAnimSegment()
HAnimSegment1340.setName("r_carpal")
HAnimSegment1340.setDEF("hanim_r_carpal")
#Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
TouchSensor1341 = TouchSensor()
TouchSensor1341.setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal")

HAnimSegment1340.addChildren(TouchSensor1341)
Transform1342 = Transform()
Transform1342.setTranslation([-0.1984,0.8663,-0.0583])
Shape1343 = Shape()
Shape1343.setUSE("HAnimJointShape")

Transform1342.addChildren(Shape1343)

HAnimSegment1340.addChildren(Transform1342)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
Shape1344 = Shape()
LineSet1345 = LineSet()
LineSet1345.setVertexCount([2])
Coordinate1346 = Coordinate()
Coordinate1346.setPoint([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])

LineSet1345.setCoord(Coordinate1346)
ColorRGBA1347 = ColorRGBA()
ColorRGBA1347.setUSE("HAnimSegmentLineColorRGBA")

LineSet1345.setColor(ColorRGBA1347)

Shape1344.setGeometry(LineSet1345)

HAnimSegment1340.addChildren(Shape1344)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
Shape1348 = Shape()
LineSet1349 = LineSet()
LineSet1349.setVertexCount([2])
Coordinate1350 = Coordinate()
Coordinate1350.setPoint([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])

LineSet1349.setCoord(Coordinate1350)
ColorRGBA1351 = ColorRGBA()
ColorRGBA1351.setUSE("HAnimSegmentLineColorRGBA")

LineSet1349.setColor(ColorRGBA1351)

Shape1348.setGeometry(LineSet1349)

HAnimSegment1340.addChildren(Shape1348)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
Shape1352 = Shape()
LineSet1353 = LineSet()
LineSet1353.setVertexCount([2])
Coordinate1354 = Coordinate()
Coordinate1354.setPoint([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])

LineSet1353.setCoord(Coordinate1354)
ColorRGBA1355 = ColorRGBA()
ColorRGBA1355.setUSE("HAnimSegmentLineColorRGBA")

LineSet1353.setColor(ColorRGBA1355)

Shape1352.setGeometry(LineSet1353)

HAnimSegment1340.addChildren(Shape1352)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
Shape1356 = Shape()
LineSet1357 = LineSet()
LineSet1357.setVertexCount([2])
Coordinate1358 = Coordinate()
Coordinate1358.setPoint([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])

LineSet1357.setCoord(Coordinate1358)
ColorRGBA1359 = ColorRGBA()
ColorRGBA1359.setUSE("HAnimSegmentLineColorRGBA")

LineSet1357.setColor(ColorRGBA1359)

Shape1356.setGeometry(LineSet1357)

HAnimSegment1340.addChildren(Shape1356)
#HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
Shape1360 = Shape()
LineSet1361 = LineSet()
LineSet1361.setVertexCount([2])
Coordinate1362 = Coordinate()
Coordinate1362.setPoint([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])

LineSet1361.setCoord(Coordinate1362)
ColorRGBA1363 = ColorRGBA()
ColorRGBA1363.setUSE("HAnimSegmentLineColorRGBA")

LineSet1361.setColor(ColorRGBA1363)

Shape1360.setGeometry(LineSet1361)

HAnimSegment1340.addChildren(Shape1360)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
Shape1364 = Shape()
LineSet1365 = LineSet()
LineSet1365.setVertexCount([2])
Coordinate1366 = Coordinate()
Coordinate1366.setPoint([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])

LineSet1365.setCoord(Coordinate1366)
ColorRGBA1367 = ColorRGBA()
ColorRGBA1367.setUSE("HAnimSiteLineColorRGBA")

LineSet1365.setColor(ColorRGBA1367)

Shape1364.setGeometry(LineSet1365)

HAnimSegment1340.addChildren(Shape1364)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
Shape1368 = Shape()
LineSet1369 = LineSet()
LineSet1369.setVertexCount([2])
Coordinate1370 = Coordinate()
Coordinate1370.setPoint([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])

LineSet1369.setCoord(Coordinate1370)
ColorRGBA1371 = ColorRGBA()
ColorRGBA1371.setUSE("HAnimSiteLineColorRGBA")

LineSet1369.setColor(ColorRGBA1371)

Shape1368.setGeometry(LineSet1369)

HAnimSegment1340.addChildren(Shape1368)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
Shape1372 = Shape()
LineSet1373 = LineSet()
LineSet1373.setVertexCount([2])
Coordinate1374 = Coordinate()
Coordinate1374.setPoint([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])

LineSet1373.setCoord(Coordinate1374)
ColorRGBA1375 = ColorRGBA()
ColorRGBA1375.setUSE("HAnimSiteLineColorRGBA")

LineSet1373.setColor(ColorRGBA1375)

Shape1372.setGeometry(LineSet1373)

HAnimSegment1340.addChildren(Shape1372)
#HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
Shape1376 = Shape()
LineSet1377 = LineSet()
LineSet1377.setVertexCount([2])
Coordinate1378 = Coordinate()
Coordinate1378.setPoint([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])

LineSet1377.setCoord(Coordinate1378)
ColorRGBA1379 = ColorRGBA()
ColorRGBA1379.setUSE("HAnimSiteViewpointLineColorRGBA")

LineSet1377.setColor(ColorRGBA1379)

Shape1376.setGeometry(LineSet1377)

HAnimSegment1340.addChildren(Shape1376)
HAnimSite1380 = HAnimSite()
HAnimSite1380.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1380.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1380.setTranslation([-0.1977,0.8169,-0.0177])
#HAnimSite visualization shape
TouchSensor1381 = TouchSensor()
TouchSensor1381.setDescription("HAnimSite r_metacarpal_pha2_pt")

HAnimSite1380.addChildren(TouchSensor1381)
Shape1382 = Shape()
Shape1382.setUSE("HAnimSiteShape")

HAnimSite1380.addChildren(Shape1382)

HAnimSegment1340.addChildren(HAnimSite1380)
HAnimSite1383 = HAnimSite()
HAnimSite1383.setName("r_ulnar_styloid_pt")
HAnimSite1383.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1383.setTranslation([-0.2117,0.8562,-0.0584])
#HAnimSite visualization shape
TouchSensor1384 = TouchSensor()
TouchSensor1384.setDescription("HAnimSite r_ulnar_styloid_pt")

HAnimSite1383.addChildren(TouchSensor1384)
Shape1385 = Shape()
Shape1385.setUSE("HAnimSiteShape")

HAnimSite1383.addChildren(Shape1385)

HAnimSegment1340.addChildren(HAnimSite1383)
HAnimSite1386 = HAnimSite()
HAnimSite1386.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1386.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1386.setTranslation([-0.1929,0.789,-0.1064])
#HAnimSite visualization shape
TouchSensor1387 = TouchSensor()
TouchSensor1387.setDescription("HAnimSite r_metacarpal_pha5_pt")

HAnimSite1386.addChildren(TouchSensor1387)
Shape1388 = Shape()
Shape1388.setUSE("HAnimSiteShape")

HAnimSite1386.addChildren(Shape1388)

HAnimSegment1340.addChildren(HAnimSite1386)
HAnimSite1389 = HAnimSite()
HAnimSite1389.setName("r_hand_front_view")
HAnimSite1389.setDEF("hanim_r_hand_front_view")
HAnimSite1389.setTranslation([-0.3,0.75,0.45])
#HAnimSite visualization shape
TouchSensor1390 = TouchSensor()
TouchSensor1390.setDescription("HAnimSite r_hand_front_view")

HAnimSite1389.addChildren(TouchSensor1390)
Shape1391 = Shape()
Shape1391.setUSE("HAnimSiteShape")

HAnimSite1389.addChildren(Shape1391)
Viewpoint1392 = Viewpoint()
Viewpoint1392.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint1392.setCenterOfRotation([0,0.7,0])
Viewpoint1392.setDescription("right hand front")
Viewpoint1392.setPosition([0,0,0])

HAnimSite1389.addChildren(Viewpoint1392)
#HAnimSite/Viewpoint visualization shape
Anchor1393 = Anchor()
Anchor1393.setDescription("HAnimSite hanim_r_hand_front_view Viewpoint")
Anchor1393.setUrl(["#hanim_r_hand_front_viewpoint"])
LOD1394 = LOD()
LOD1394.setForceTransitions(True)
LOD1394.setRange([0.04])
WorldInfo1395 = WorldInfo()
WorldInfo1395.setInfo(["hide diamond when close"])

LOD1394.addChildren(WorldInfo1395)
Shape1396 = Shape()
Shape1396.setUSE("HAnimSiteViewpointShape")

LOD1394.addChildren(Shape1396)

Anchor1393.addChildren(LOD1394)

HAnimSite1389.addChildren(Anchor1393)

HAnimSegment1340.addChildren(HAnimSite1389)

HAnimJoint1339.addChildren(HAnimSegment1340)
HAnimJoint1397 = HAnimJoint()
HAnimJoint1397.setName("r_carpometacarpal_1")
HAnimJoint1397.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1397.setCenter([-0.1924,0.8472,-0.0534])
HAnimJoint1397.setUlimit([0,0,0])
HAnimJoint1397.setLlimit([0,0,0])
HAnimJoint1397.setStiffness([0,0,0])
HAnimSegment1398 = HAnimSegment()
HAnimSegment1398.setName("r_metacarpal_1")
HAnimSegment1398.setDEF("hanim_r_metacarpal_1")
#Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
TouchSensor1399 = TouchSensor()
TouchSensor1399.setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1")

HAnimSegment1398.addChildren(TouchSensor1399)
Transform1400 = Transform()
Transform1400.setTranslation([-0.1924,0.8472,-0.0534])
Shape1401 = Shape()
Shape1401.setUSE("HAnimJointShape")

Transform1400.addChildren(Shape1401)

HAnimSegment1398.addChildren(Transform1400)
#HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
Shape1402 = Shape()
LineSet1403 = LineSet()
LineSet1403.setVertexCount([2])
Coordinate1404 = Coordinate()
Coordinate1404.setPoint([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])

LineSet1403.setCoord(Coordinate1404)
ColorRGBA1405 = ColorRGBA()
ColorRGBA1405.setUSE("HAnimSegmentLineColorRGBA")

LineSet1403.setColor(ColorRGBA1405)

Shape1402.setGeometry(LineSet1403)

HAnimSegment1398.addChildren(Shape1402)

HAnimJoint1397.addChildren(HAnimSegment1398)
HAnimJoint1406 = HAnimJoint()
HAnimJoint1406.setName("r_metacarpophalangeal_1")
HAnimJoint1406.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1406.setCenter([-0.1951,0.8226,0.0246])
HAnimJoint1406.setUlimit([0,0,0])
HAnimJoint1406.setLlimit([0,0,0])
HAnimJoint1406.setStiffness([0,0,0])
HAnimSegment1407 = HAnimSegment()
HAnimSegment1407.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1407.setDEF("hanim_r_carpal_proximal_phalanx_1")
#Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
TouchSensor1408 = TouchSensor()
TouchSensor1408.setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1")

HAnimSegment1407.addChildren(TouchSensor1408)
Transform1409 = Transform()
Transform1409.setTranslation([-0.1951,0.8226,0.0246])
Shape1410 = Shape()
Shape1410.setUSE("HAnimJointShape")

Transform1409.addChildren(Shape1410)

HAnimSegment1407.addChildren(Transform1409)
#HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
Shape1411 = Shape()
LineSet1412 = LineSet()
LineSet1412.setVertexCount([2])
Coordinate1413 = Coordinate()
Coordinate1413.setPoint([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])

LineSet1412.setCoord(Coordinate1413)
ColorRGBA1414 = ColorRGBA()
ColorRGBA1414.setUSE("HAnimSegmentLineColorRGBA")

LineSet1412.setColor(ColorRGBA1414)

Shape1411.setGeometry(LineSet1412)

HAnimSegment1407.addChildren(Shape1411)

HAnimJoint1406.addChildren(HAnimSegment1407)
HAnimJoint1415 = HAnimJoint()
HAnimJoint1415.setName("r_carpal_interphalangeal_1")
HAnimJoint1415.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1415.setCenter([-0.1955,0.8159,0.0464])
HAnimJoint1415.setUlimit([0,0,0])
HAnimJoint1415.setLlimit([0,0,0])
HAnimJoint1415.setStiffness([0,0,0])
HAnimSegment1416 = HAnimSegment()
HAnimSegment1416.setName("r_carpal_distal_phalanx_1")
HAnimSegment1416.setDEF("hanim_r_carpal_distal_phalanx_1")
#Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
TouchSensor1417 = TouchSensor()
TouchSensor1417.setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1")

HAnimSegment1416.addChildren(TouchSensor1417)
Transform1418 = Transform()
Transform1418.setTranslation([-0.1955,0.8159,0.0464])
Shape1419 = Shape()
Shape1419.setUSE("HAnimJointShape")

Transform1418.addChildren(Shape1419)

HAnimSegment1416.addChildren(Transform1418)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape1420 = Shape()
LineSet1421 = LineSet()
LineSet1421.setVertexCount([2])
Coordinate1422 = Coordinate()
Coordinate1422.setPoint([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])

LineSet1421.setCoord(Coordinate1422)
ColorRGBA1423 = ColorRGBA()
ColorRGBA1423.setUSE("HAnimSiteLineColorRGBA")

LineSet1421.setColor(ColorRGBA1423)

Shape1420.setGeometry(LineSet1421)

HAnimSegment1416.addChildren(Shape1420)
HAnimSite1424 = HAnimSite()
HAnimSite1424.setName("r_carpal_distal_phalanx_1_pt")
HAnimSite1424.setDEF("hanim_r_carpal_distal_phalanx_1_pt")
HAnimSite1424.setTranslation([-0.1869,0.809,0.082])
#HAnimSite visualization shape
TouchSensor1425 = TouchSensor()
TouchSensor1425.setDescription("HAnimSite r_thumb_distal_tip")

HAnimSite1424.addChildren(TouchSensor1425)
Shape1426 = Shape()
Shape1426.setUSE("HAnimSiteShape")

HAnimSite1424.addChildren(Shape1426)

HAnimSegment1416.addChildren(HAnimSite1424)

HAnimJoint1415.addChildren(HAnimSegment1416)

HAnimJoint1406.addChildren(HAnimJoint1415)

HAnimJoint1397.addChildren(HAnimJoint1406)

HAnimJoint1339.addChildren(HAnimJoint1397)
HAnimJoint1427 = HAnimJoint()
HAnimJoint1427.setName("r_carpometacarpal_2")
HAnimJoint1427.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1427.setCenter([-0.1983,0.8024,-0.028])
HAnimJoint1427.setUlimit([0,0,0])
HAnimJoint1427.setLlimit([0,0,0])
HAnimJoint1427.setStiffness([0,0,0])
HAnimSegment1428 = HAnimSegment()
HAnimSegment1428.setName("r_metacarpal_2")
HAnimSegment1428.setDEF("hanim_r_metacarpal_2")
#Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
TouchSensor1429 = TouchSensor()
TouchSensor1429.setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2")

HAnimSegment1428.addChildren(TouchSensor1429)
Transform1430 = Transform()
Transform1430.setTranslation([-0.1983,0.8024,-0.028])
Shape1431 = Shape()
Shape1431.setUSE("HAnimJointShape")

Transform1430.addChildren(Shape1431)

HAnimSegment1428.addChildren(Transform1430)
#HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
Shape1432 = Shape()
LineSet1433 = LineSet()
LineSet1433.setVertexCount([2])
Coordinate1434 = Coordinate()
Coordinate1434.setPoint([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])

LineSet1433.setCoord(Coordinate1434)
ColorRGBA1435 = ColorRGBA()
ColorRGBA1435.setUSE("HAnimSegmentLineColorRGBA")

LineSet1433.setColor(ColorRGBA1435)

Shape1432.setGeometry(LineSet1433)

HAnimSegment1428.addChildren(Shape1432)

HAnimJoint1427.addChildren(HAnimSegment1428)
HAnimJoint1436 = HAnimJoint()
HAnimJoint1436.setName("r_metacarpophalangeal_2")
HAnimJoint1436.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1436.setCenter([-0.1983,0.7815,-0.028])
HAnimJoint1436.setUlimit([0,0,0])
HAnimJoint1436.setLlimit([0,0,0])
HAnimJoint1436.setStiffness([0,0,0])
HAnimSegment1437 = HAnimSegment()
HAnimSegment1437.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1437.setDEF("hanim_r_carpal_proximal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
TouchSensor1438 = TouchSensor()
TouchSensor1438.setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2")

HAnimSegment1437.addChildren(TouchSensor1438)
Transform1439 = Transform()
Transform1439.setTranslation([-0.1983,0.7815,-0.028])
Shape1440 = Shape()
Shape1440.setUSE("HAnimJointShape")

Transform1439.addChildren(Shape1440)

HAnimSegment1437.addChildren(Transform1439)
#HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
Shape1441 = Shape()
LineSet1442 = LineSet()
LineSet1442.setVertexCount([2])
Coordinate1443 = Coordinate()
Coordinate1443.setPoint([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])

LineSet1442.setCoord(Coordinate1443)
ColorRGBA1444 = ColorRGBA()
ColorRGBA1444.setUSE("HAnimSegmentLineColorRGBA")

LineSet1442.setColor(ColorRGBA1444)

Shape1441.setGeometry(LineSet1442)

HAnimSegment1437.addChildren(Shape1441)

HAnimJoint1436.addChildren(HAnimSegment1437)
HAnimJoint1445 = HAnimJoint()
HAnimJoint1445.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1445.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1445.setCenter([-0.2017,0.7363,-0.0248])
HAnimJoint1445.setUlimit([0,0,0])
HAnimJoint1445.setLlimit([0,0,0])
HAnimJoint1445.setStiffness([0,0,0])
HAnimSegment1446 = HAnimSegment()
HAnimSegment1446.setName("r_carpal_middle_phalanx_2")
HAnimSegment1446.setDEF("hanim_r_carpal_middle_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
TouchSensor1447 = TouchSensor()
TouchSensor1447.setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2")

HAnimSegment1446.addChildren(TouchSensor1447)
Transform1448 = Transform()
Transform1448.setTranslation([-0.2017,0.7363,-0.0248])
Shape1449 = Shape()
Shape1449.setUSE("HAnimJointShape")

Transform1448.addChildren(Shape1449)

HAnimSegment1446.addChildren(Transform1448)
#HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
Shape1450 = Shape()
LineSet1451 = LineSet()
LineSet1451.setVertexCount([2])
Coordinate1452 = Coordinate()
Coordinate1452.setPoint([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])

LineSet1451.setCoord(Coordinate1452)
ColorRGBA1453 = ColorRGBA()
ColorRGBA1453.setUSE("HAnimSegmentLineColorRGBA")

LineSet1451.setColor(ColorRGBA1453)

Shape1450.setGeometry(LineSet1451)

HAnimSegment1446.addChildren(Shape1450)

HAnimJoint1445.addChildren(HAnimSegment1446)
HAnimJoint1454 = HAnimJoint()
HAnimJoint1454.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1454.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1454.setCenter([-0.2028,0.7139,-0.0236])
HAnimJoint1454.setUlimit([0,0,0])
HAnimJoint1454.setLlimit([0,0,0])
HAnimJoint1454.setStiffness([0,0,0])
HAnimSegment1455 = HAnimSegment()
HAnimSegment1455.setName("r_carpal_distal_phalanx_2")
HAnimSegment1455.setDEF("hanim_r_carpal_distal_phalanx_2")
#Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
TouchSensor1456 = TouchSensor()
TouchSensor1456.setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2")

HAnimSegment1455.addChildren(TouchSensor1456)
Transform1457 = Transform()
Transform1457.setTranslation([-0.2028,0.7139,-0.0236])
Shape1458 = Shape()
Shape1458.setUSE("HAnimJointShape")

Transform1457.addChildren(Shape1458)

HAnimSegment1455.addChildren(Transform1457)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape1459 = Shape()
LineSet1460 = LineSet()
LineSet1460.setVertexCount([2])
Coordinate1461 = Coordinate()
Coordinate1461.setPoint([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])

LineSet1460.setCoord(Coordinate1461)
ColorRGBA1462 = ColorRGBA()
ColorRGBA1462.setUSE("HAnimSiteLineColorRGBA")

LineSet1460.setColor(ColorRGBA1462)

Shape1459.setGeometry(LineSet1460)

HAnimSegment1455.addChildren(Shape1459)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
Shape1463 = Shape()
LineSet1464 = LineSet()
LineSet1464.setVertexCount([2])
Coordinate1465 = Coordinate()
Coordinate1465.setPoint([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])

LineSet1464.setCoord(Coordinate1465)
ColorRGBA1466 = ColorRGBA()
ColorRGBA1466.setUSE("HAnimSiteLineColorRGBA")

LineSet1464.setColor(ColorRGBA1466)

Shape1463.setGeometry(LineSet1464)

HAnimSegment1455.addChildren(Shape1463)
HAnimSite1467 = HAnimSite()
HAnimSite1467.setName("r_carpal_distal_phalanx_2_pt")
HAnimSite1467.setDEF("hanim_r_carpal_distal_phalanx_2_pt")
HAnimSite1467.setTranslation([-0.198,0.6883,-0.018])
#HAnimSite visualization shape
TouchSensor1468 = TouchSensor()
TouchSensor1468.setDescription("HAnimSite r_index_distal_tip")

HAnimSite1467.addChildren(TouchSensor1468)
Shape1469 = Shape()
Shape1469.setUSE("HAnimSiteShape")

HAnimSite1467.addChildren(Shape1469)

HAnimSegment1455.addChildren(HAnimSite1467)
HAnimSite1470 = HAnimSite()
HAnimSite1470.setName("r_dactylion_pt")
HAnimSite1470.setDEF("hanim_r_dactylion_pt")
HAnimSite1470.setTranslation([-0.1941,0.6772,-0.0423])
#HAnimSite visualization shape
TouchSensor1471 = TouchSensor()
TouchSensor1471.setDescription("HAnimSite r_dactylion_pt")

HAnimSite1470.addChildren(TouchSensor1471)
Shape1472 = Shape()
Shape1472.setUSE("HAnimSiteShape")

HAnimSite1470.addChildren(Shape1472)

HAnimSegment1455.addChildren(HAnimSite1470)

HAnimJoint1454.addChildren(HAnimSegment1455)

HAnimJoint1445.addChildren(HAnimJoint1454)

HAnimJoint1436.addChildren(HAnimJoint1445)

HAnimJoint1427.addChildren(HAnimJoint1436)

HAnimJoint1339.addChildren(HAnimJoint1427)
HAnimJoint1473 = HAnimJoint()
HAnimJoint1473.setName("r_carpometacarpal_3")
HAnimJoint1473.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1473.setCenter([-0.1987,0.8029,-0.053])
HAnimJoint1473.setUlimit([0,0,0])
HAnimJoint1473.setLlimit([0,0,0])
HAnimJoint1473.setStiffness([0,0,0])
HAnimSegment1474 = HAnimSegment()
HAnimSegment1474.setName("r_metacarpal_3")
HAnimSegment1474.setDEF("hanim_r_metacarpal_3")
#Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
TouchSensor1475 = TouchSensor()
TouchSensor1475.setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3")

HAnimSegment1474.addChildren(TouchSensor1475)
Transform1476 = Transform()
Transform1476.setTranslation([-0.1987,0.8029,-0.053])
Shape1477 = Shape()
Shape1477.setUSE("HAnimJointShape")

Transform1476.addChildren(Shape1477)

HAnimSegment1474.addChildren(Transform1476)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
Shape1478 = Shape()
LineSet1479 = LineSet()
LineSet1479.setVertexCount([2])
Coordinate1480 = Coordinate()
Coordinate1480.setPoint([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])

LineSet1479.setCoord(Coordinate1480)
ColorRGBA1481 = ColorRGBA()
ColorRGBA1481.setUSE("HAnimSegmentLineColorRGBA")

LineSet1479.setColor(ColorRGBA1481)

Shape1478.setGeometry(LineSet1479)

HAnimSegment1474.addChildren(Shape1478)

HAnimJoint1473.addChildren(HAnimSegment1474)
HAnimJoint1482 = HAnimJoint()
HAnimJoint1482.setName("r_metacarpophalangeal_3")
HAnimJoint1482.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1482.setCenter([-0.1987,0.7818,-0.053])
HAnimJoint1482.setUlimit([0,0,0])
HAnimJoint1482.setLlimit([0,0,0])
HAnimJoint1482.setStiffness([0,0,0])
HAnimSegment1483 = HAnimSegment()
HAnimSegment1483.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1483.setDEF("hanim_r_carpal_proximal_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
TouchSensor1484 = TouchSensor()
TouchSensor1484.setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3")

HAnimSegment1483.addChildren(TouchSensor1484)
Transform1485 = Transform()
Transform1485.setTranslation([-0.1987,0.7818,-0.053])
Shape1486 = Shape()
Shape1486.setUSE("HAnimJointShape")

Transform1485.addChildren(Shape1486)

HAnimSegment1483.addChildren(Transform1485)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
Shape1487 = Shape()
LineSet1488 = LineSet()
LineSet1488.setVertexCount([2])
Coordinate1489 = Coordinate()
Coordinate1489.setPoint([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])

LineSet1488.setCoord(Coordinate1489)
ColorRGBA1490 = ColorRGBA()
ColorRGBA1490.setUSE("HAnimSegmentLineColorRGBA")

LineSet1488.setColor(ColorRGBA1490)

Shape1487.setGeometry(LineSet1488)

HAnimSegment1483.addChildren(Shape1487)

HAnimJoint1482.addChildren(HAnimSegment1483)
HAnimJoint1491 = HAnimJoint()
HAnimJoint1491.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1491.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1491.setCenter([-0.2013,0.7273,-0.0503])
HAnimJoint1491.setUlimit([0,0,0])
HAnimJoint1491.setLlimit([0,0,0])
HAnimJoint1491.setStiffness([0,0,0])
HAnimSegment1492 = HAnimSegment()
HAnimSegment1492.setName("r_carpal_middle_phalanx_3")
HAnimSegment1492.setDEF("hanim_r_carpal_middle_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
TouchSensor1493 = TouchSensor()
TouchSensor1493.setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3")

HAnimSegment1492.addChildren(TouchSensor1493)
Transform1494 = Transform()
Transform1494.setTranslation([-0.2013,0.7273,-0.0503])
Shape1495 = Shape()
Shape1495.setUSE("HAnimJointShape")

Transform1494.addChildren(Shape1495)

HAnimSegment1492.addChildren(Transform1494)
#HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
Shape1496 = Shape()
LineSet1497 = LineSet()
LineSet1497.setVertexCount([2])
Coordinate1498 = Coordinate()
Coordinate1498.setPoint([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])

LineSet1497.setCoord(Coordinate1498)
ColorRGBA1499 = ColorRGBA()
ColorRGBA1499.setUSE("HAnimSegmentLineColorRGBA")

LineSet1497.setColor(ColorRGBA1499)

Shape1496.setGeometry(LineSet1497)

HAnimSegment1492.addChildren(Shape1496)

HAnimJoint1491.addChildren(HAnimSegment1492)
HAnimJoint1500 = HAnimJoint()
HAnimJoint1500.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1500.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1500.setCenter([-0.2026,0.7011,-0.0494])
HAnimJoint1500.setUlimit([0,0,0])
HAnimJoint1500.setLlimit([0,0,0])
HAnimJoint1500.setStiffness([0,0,0])
HAnimSegment1501 = HAnimSegment()
HAnimSegment1501.setName("r_carpal_distal_phalanx_3")
HAnimSegment1501.setDEF("hanim_r_carpal_distal_phalanx_3")
#Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
TouchSensor1502 = TouchSensor()
TouchSensor1502.setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3")

HAnimSegment1501.addChildren(TouchSensor1502)
Transform1503 = Transform()
Transform1503.setTranslation([-0.2026,0.7011,-0.0494])
Shape1504 = Shape()
Shape1504.setUSE("HAnimJointShape")

Transform1503.addChildren(Shape1504)

HAnimSegment1501.addChildren(Transform1503)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape1505 = Shape()
LineSet1506 = LineSet()
LineSet1506.setVertexCount([2])
Coordinate1507 = Coordinate()
Coordinate1507.setPoint([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])

LineSet1506.setCoord(Coordinate1507)
ColorRGBA1508 = ColorRGBA()
ColorRGBA1508.setUSE("HAnimSiteLineColorRGBA")

LineSet1506.setColor(ColorRGBA1508)

Shape1505.setGeometry(LineSet1506)

HAnimSegment1501.addChildren(Shape1505)
HAnimSite1509 = HAnimSite()
HAnimSite1509.setName("r_carpal_distal_phalanx_3_pt")
HAnimSite1509.setDEF("hanim_r_carpal_distal_phalanx_3_pt")
HAnimSite1509.setTranslation([-0.1969,0.6758,-0.0427])
#HAnimSite visualization shape
TouchSensor1510 = TouchSensor()
TouchSensor1510.setDescription("HAnimSite r_middle_distal_tip")

HAnimSite1509.addChildren(TouchSensor1510)
Shape1511 = Shape()
Shape1511.setUSE("HAnimSiteShape")

HAnimSite1509.addChildren(Shape1511)

HAnimSegment1501.addChildren(HAnimSite1509)

HAnimJoint1500.addChildren(HAnimSegment1501)

HAnimJoint1491.addChildren(HAnimJoint1500)

HAnimJoint1482.addChildren(HAnimJoint1491)

HAnimJoint1473.addChildren(HAnimJoint1482)

HAnimJoint1339.addChildren(HAnimJoint1473)
HAnimJoint1512 = HAnimJoint()
HAnimJoint1512.setName("r_carpometacarpal_4")
HAnimJoint1512.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1512.setCenter([-0.1956,0.8019,-0.0794])
HAnimJoint1512.setUlimit([0,0,0])
HAnimJoint1512.setLlimit([0,0,0])
HAnimJoint1512.setStiffness([0,0,0])
HAnimSegment1513 = HAnimSegment()
HAnimSegment1513.setName("r_metacarpal_4")
HAnimSegment1513.setDEF("hanim_r_metacarpal_4")
#Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
TouchSensor1514 = TouchSensor()
TouchSensor1514.setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4")

HAnimSegment1513.addChildren(TouchSensor1514)
Transform1515 = Transform()
Transform1515.setTranslation([-0.1956,0.8019,-0.0794])
Shape1516 = Shape()
Shape1516.setUSE("HAnimJointShape")

Transform1515.addChildren(Shape1516)

HAnimSegment1513.addChildren(Transform1515)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
Shape1517 = Shape()
LineSet1518 = LineSet()
LineSet1518.setVertexCount([2])
Coordinate1519 = Coordinate()
Coordinate1519.setPoint([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])

LineSet1518.setCoord(Coordinate1519)
ColorRGBA1520 = ColorRGBA()
ColorRGBA1520.setUSE("HAnimSegmentLineColorRGBA")

LineSet1518.setColor(ColorRGBA1520)

Shape1517.setGeometry(LineSet1518)

HAnimSegment1513.addChildren(Shape1517)

HAnimJoint1512.addChildren(HAnimSegment1513)
HAnimJoint1521 = HAnimJoint()
HAnimJoint1521.setName("r_metacarpophalangeal_4")
HAnimJoint1521.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1521.setCenter([-0.1956,0.7815,-0.0794])
HAnimJoint1521.setUlimit([0,0,0])
HAnimJoint1521.setLlimit([0,0,0])
HAnimJoint1521.setStiffness([0,0,0])
HAnimSegment1522 = HAnimSegment()
HAnimSegment1522.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1522.setDEF("hanim_r_carpal_proximal_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
TouchSensor1523 = TouchSensor()
TouchSensor1523.setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4")

HAnimSegment1522.addChildren(TouchSensor1523)
Transform1524 = Transform()
Transform1524.setTranslation([-0.1956,0.7815,-0.0794])
Shape1525 = Shape()
Shape1525.setUSE("HAnimJointShape")

Transform1524.addChildren(Shape1525)

HAnimSegment1522.addChildren(Transform1524)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
Shape1526 = Shape()
LineSet1527 = LineSet()
LineSet1527.setVertexCount([2])
Coordinate1528 = Coordinate()
Coordinate1528.setPoint([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])

LineSet1527.setCoord(Coordinate1528)
ColorRGBA1529 = ColorRGBA()
ColorRGBA1529.setUSE("HAnimSegmentLineColorRGBA")

LineSet1527.setColor(ColorRGBA1529)

Shape1526.setGeometry(LineSet1527)

HAnimSegment1522.addChildren(Shape1526)

HAnimJoint1521.addChildren(HAnimSegment1522)
HAnimJoint1530 = HAnimJoint()
HAnimJoint1530.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1530.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1530.setCenter([-0.1973,0.7287,-0.0777])
HAnimJoint1530.setUlimit([0,0,0])
HAnimJoint1530.setLlimit([0,0,0])
HAnimJoint1530.setStiffness([0,0,0])
HAnimSegment1531 = HAnimSegment()
HAnimSegment1531.setName("r_carpal_middle_phalanx_4")
HAnimSegment1531.setDEF("hanim_r_carpal_middle_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
TouchSensor1532 = TouchSensor()
TouchSensor1532.setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4")

HAnimSegment1531.addChildren(TouchSensor1532)
Transform1533 = Transform()
Transform1533.setTranslation([-0.1973,0.7287,-0.0777])
Shape1534 = Shape()
Shape1534.setUSE("HAnimJointShape")

Transform1533.addChildren(Shape1534)

HAnimSegment1531.addChildren(Transform1533)
#HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
Shape1535 = Shape()
LineSet1536 = LineSet()
LineSet1536.setVertexCount([2])
Coordinate1537 = Coordinate()
Coordinate1537.setPoint([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])

LineSet1536.setCoord(Coordinate1537)
ColorRGBA1538 = ColorRGBA()
ColorRGBA1538.setUSE("HAnimSegmentLineColorRGBA")

LineSet1536.setColor(ColorRGBA1538)

Shape1535.setGeometry(LineSet1536)

HAnimSegment1531.addChildren(Shape1535)

HAnimJoint1530.addChildren(HAnimSegment1531)
HAnimJoint1539 = HAnimJoint()
HAnimJoint1539.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1539.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1539.setCenter([-0.1983,0.7045,-0.0767])
HAnimJoint1539.setUlimit([0,0,0])
HAnimJoint1539.setLlimit([0,0,0])
HAnimJoint1539.setStiffness([0,0,0])
HAnimSegment1540 = HAnimSegment()
HAnimSegment1540.setName("r_carpal_distal_phalanx_4")
HAnimSegment1540.setDEF("hanim_r_carpal_distal_phalanx_4")
#Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
TouchSensor1541 = TouchSensor()
TouchSensor1541.setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4")

HAnimSegment1540.addChildren(TouchSensor1541)
Transform1542 = Transform()
Transform1542.setTranslation([-0.1983,0.7045,-0.0767])
Shape1543 = Shape()
Shape1543.setUSE("HAnimJointShape")

Transform1542.addChildren(Shape1543)

HAnimSegment1540.addChildren(Transform1542)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape1544 = Shape()
LineSet1545 = LineSet()
LineSet1545.setVertexCount([2])
Coordinate1546 = Coordinate()
Coordinate1546.setPoint([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])

LineSet1545.setCoord(Coordinate1546)
ColorRGBA1547 = ColorRGBA()
ColorRGBA1547.setUSE("HAnimSiteLineColorRGBA")

LineSet1545.setColor(ColorRGBA1547)

Shape1544.setGeometry(LineSet1545)

HAnimSegment1540.addChildren(Shape1544)
HAnimSite1548 = HAnimSite()
HAnimSite1548.setName("r_carpal_distal_phalanx_4_pt")
HAnimSite1548.setDEF("hanim_r_carpal_distal_phalanx_4_pt")
HAnimSite1548.setTranslation([-0.1934,0.6778,-0.0693])
#HAnimSite visualization shape
TouchSensor1549 = TouchSensor()
TouchSensor1549.setDescription("HAnimSite r_ring_distal_tip")

HAnimSite1548.addChildren(TouchSensor1549)
Shape1550 = Shape()
Shape1550.setUSE("HAnimSiteShape")

HAnimSite1548.addChildren(Shape1550)

HAnimSegment1540.addChildren(HAnimSite1548)

HAnimJoint1539.addChildren(HAnimSegment1540)

HAnimJoint1530.addChildren(HAnimJoint1539)

HAnimJoint1521.addChildren(HAnimJoint1530)

HAnimJoint1512.addChildren(HAnimJoint1521)

HAnimJoint1339.addChildren(HAnimJoint1512)
HAnimJoint1551 = HAnimJoint()
HAnimJoint1551.setName("r_carpometacarpal_5")
HAnimJoint1551.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1551.setCenter([-0.1925,0.8066,-0.1036])
HAnimJoint1551.setUlimit([0,0,0])
HAnimJoint1551.setLlimit([0,0,0])
HAnimJoint1551.setStiffness([0,0,0])
HAnimSegment1552 = HAnimSegment()
HAnimSegment1552.setName("r_metacarpal_5")
HAnimSegment1552.setDEF("hanim_r_metacarpal_5")
#Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
TouchSensor1553 = TouchSensor()
TouchSensor1553.setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5")

HAnimSegment1552.addChildren(TouchSensor1553)
Transform1554 = Transform()
Transform1554.setTranslation([-0.1925,0.8066,-0.1036])
Shape1555 = Shape()
Shape1555.setUSE("HAnimJointShape")

Transform1554.addChildren(Shape1555)

HAnimSegment1552.addChildren(Transform1554)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
Shape1556 = Shape()
LineSet1557 = LineSet()
LineSet1557.setVertexCount([2])
Coordinate1558 = Coordinate()
Coordinate1558.setPoint([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])

LineSet1557.setCoord(Coordinate1558)
ColorRGBA1559 = ColorRGBA()
ColorRGBA1559.setUSE("HAnimSegmentLineColorRGBA")

LineSet1557.setColor(ColorRGBA1559)

Shape1556.setGeometry(LineSet1557)

HAnimSegment1552.addChildren(Shape1556)

HAnimJoint1551.addChildren(HAnimSegment1552)
HAnimJoint1560 = HAnimJoint()
HAnimJoint1560.setName("r_metacarpophalangeal_5")
HAnimJoint1560.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1560.setCenter([-0.1925,0.7866,-0.1036])
HAnimJoint1560.setUlimit([0,0,0])
HAnimJoint1560.setLlimit([0,0,0])
HAnimJoint1560.setStiffness([0,0,0])
HAnimSegment1561 = HAnimSegment()
HAnimSegment1561.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1561.setDEF("hanim_r_carpal_proximal_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
TouchSensor1562 = TouchSensor()
TouchSensor1562.setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5")

HAnimSegment1561.addChildren(TouchSensor1562)
Transform1563 = Transform()
Transform1563.setTranslation([-0.1925,0.7866,-0.1036])
Shape1564 = Shape()
Shape1564.setUSE("HAnimJointShape")

Transform1563.addChildren(Shape1564)

HAnimSegment1561.addChildren(Transform1563)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
Shape1565 = Shape()
LineSet1566 = LineSet()
LineSet1566.setVertexCount([2])
Coordinate1567 = Coordinate()
Coordinate1567.setPoint([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])

LineSet1566.setCoord(Coordinate1567)
ColorRGBA1568 = ColorRGBA()
ColorRGBA1568.setUSE("HAnimSegmentLineColorRGBA")

LineSet1566.setColor(ColorRGBA1568)

Shape1565.setGeometry(LineSet1566)

HAnimSegment1561.addChildren(Shape1565)

HAnimJoint1560.addChildren(HAnimSegment1561)
HAnimJoint1569 = HAnimJoint()
HAnimJoint1569.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1569.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1569.setCenter([-0.1938,0.7452,-0.1024])
HAnimJoint1569.setUlimit([0,0,0])
HAnimJoint1569.setLlimit([0,0,0])
HAnimJoint1569.setStiffness([0,0,0])
HAnimSegment1570 = HAnimSegment()
HAnimSegment1570.setName("r_carpal_middle_phalanx_5")
HAnimSegment1570.setDEF("hanim_r_carpal_middle_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
TouchSensor1571 = TouchSensor()
TouchSensor1571.setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5")

HAnimSegment1570.addChildren(TouchSensor1571)
Transform1572 = Transform()
Transform1572.setTranslation([-0.1938,0.7452,-0.1024])
Shape1573 = Shape()
Shape1573.setUSE("HAnimJointShape")

Transform1572.addChildren(Shape1573)

HAnimSegment1570.addChildren(Transform1572)
#HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
Shape1574 = Shape()
LineSet1575 = LineSet()
LineSet1575.setVertexCount([2])
Coordinate1576 = Coordinate()
Coordinate1576.setPoint([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])

LineSet1575.setCoord(Coordinate1576)
ColorRGBA1577 = ColorRGBA()
ColorRGBA1577.setUSE("HAnimSegmentLineColorRGBA")

LineSet1575.setColor(ColorRGBA1577)

Shape1574.setGeometry(LineSet1575)

HAnimSegment1570.addChildren(Shape1574)

HAnimJoint1569.addChildren(HAnimSegment1570)
HAnimJoint1578 = HAnimJoint()
HAnimJoint1578.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1578.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1578.setCenter([-0.1948,0.7277,-0.1017])
HAnimJoint1578.setUlimit([0,0,0])
HAnimJoint1578.setLlimit([0,0,0])
HAnimJoint1578.setStiffness([0,0,0])
HAnimSegment1579 = HAnimSegment()
HAnimSegment1579.setName("r_carpal_distal_phalanx_5")
HAnimSegment1579.setDEF("hanim_r_carpal_distal_phalanx_5")
#Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
TouchSensor1580 = TouchSensor()
TouchSensor1580.setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5")

HAnimSegment1579.addChildren(TouchSensor1580)
Transform1581 = Transform()
Transform1581.setTranslation([-0.1948,0.7277,-0.1017])
Shape1582 = Shape()
Shape1582.setUSE("HAnimJointShape")

Transform1581.addChildren(Shape1582)

HAnimSegment1579.addChildren(Transform1581)
#HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape1583 = Shape()
LineSet1584 = LineSet()
LineSet1584.setVertexCount([2])
Coordinate1585 = Coordinate()
Coordinate1585.setPoint([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])

LineSet1584.setCoord(Coordinate1585)
ColorRGBA1586 = ColorRGBA()
ColorRGBA1586.setUSE("HAnimSiteLineColorRGBA")

LineSet1584.setColor(ColorRGBA1586)

Shape1583.setGeometry(LineSet1584)

HAnimSegment1579.addChildren(Shape1583)
HAnimSite1587 = HAnimSite()
HAnimSite1587.setName("r_carpal_distal_phalanx_5_pt")
HAnimSite1587.setDEF("hanim_r_carpal_distal_phalanx_5_pt")
HAnimSite1587.setTranslation([-0.1938,0.7035,-0.0949])
#HAnimSite visualization shape
TouchSensor1588 = TouchSensor()
TouchSensor1588.setDescription("HAnimSite r_pinky_distal_tip")

HAnimSite1587.addChildren(TouchSensor1588)
Shape1589 = Shape()
Shape1589.setUSE("HAnimSiteShape")

HAnimSite1587.addChildren(Shape1589)

HAnimSegment1579.addChildren(HAnimSite1587)

HAnimJoint1578.addChildren(HAnimSegment1579)

HAnimJoint1569.addChildren(HAnimJoint1578)

HAnimJoint1560.addChildren(HAnimJoint1569)

HAnimJoint1551.addChildren(HAnimJoint1560)

HAnimJoint1339.addChildren(HAnimJoint1551)

HAnimJoint1302.addChildren(HAnimJoint1339)

HAnimJoint1286.addChildren(HAnimJoint1302)

HAnimJoint1277.addChildren(HAnimJoint1286)

HAnimJoint1240.addChildren(HAnimJoint1277)

HAnimJoint602.addChildren(HAnimJoint1240)

HAnimJoint593.addChildren(HAnimJoint602)

HAnimJoint584.addChildren(HAnimJoint593)

HAnimJoint575.addChildren(HAnimJoint584)

HAnimJoint566.addChildren(HAnimJoint575)

HAnimJoint557.addChildren(HAnimJoint566)

HAnimJoint548.addChildren(HAnimJoint557)

HAnimJoint539.addChildren(HAnimJoint548)

HAnimJoint516.addChildren(HAnimJoint539)

HAnimJoint500.addChildren(HAnimJoint516)

HAnimJoint491.addChildren(HAnimJoint500)

HAnimJoint482.addChildren(HAnimJoint491)

HAnimJoint473.addChildren(HAnimJoint482)

HAnimJoint443.addChildren(HAnimJoint473)

HAnimJoint434.addChildren(HAnimJoint443)

HAnimJoint425.addChildren(HAnimJoint434)

HAnimJoint402.addChildren(HAnimJoint425)

HAnimJoint52.addChildren(HAnimJoint402)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimSite1590 = HAnimSite()
HAnimSite1590.setName("l_inclined_view")
HAnimSite1590.setDEF("hanim_l_inclined_view")
HAnimSite1590.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite1590.setTranslation([1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1591 = TouchSensor()
TouchSensor1591.setDescription("HAnimSite l_inclined_view")

HAnimSite1590.addChildren(TouchSensor1591)
Shape1592 = Shape()
Shape1592.setUSE("HAnimSiteShape")

HAnimSite1590.addChildren(Shape1592)
Viewpoint1593 = Viewpoint()
Viewpoint1593.setDEF("hanim_l_inclined_viewpoint")
Viewpoint1593.setDescription("left inclined")
Viewpoint1593.setPosition([0,0,0])

HAnimSite1590.addChildren(Viewpoint1593)
#HAnimSite/Viewpoint visualization shape
Anchor1594 = Anchor()
Anchor1594.setDescription("HAnimSite hanim_l_inclined_view Viewpoint")
Anchor1594.setUrl(["#hanim_l_inclined_viewpoint"])
LOD1595 = LOD()
LOD1595.setForceTransitions(True)
LOD1595.setRange([0.04])
WorldInfo1596 = WorldInfo()
WorldInfo1596.setInfo(["hide diamond when close"])

LOD1595.addChildren(WorldInfo1596)
Shape1597 = Shape()
Shape1597.setUSE("HAnimSiteViewpointShape")

LOD1595.addChildren(Shape1597)

Anchor1594.addChildren(LOD1595)

HAnimSite1590.addChildren(Anchor1594)

HAnimHumanoid43.addViewpoints(HAnimSite1590)
HAnimSite1598 = HAnimSite()
HAnimSite1598.setName("r_inclined_view")
HAnimSite1598.setDEF("hanim_r_inclined_view")
HAnimSite1598.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite1598.setTranslation([-1.62,1.05,2.06])
#HAnimSite visualization shape
TouchSensor1599 = TouchSensor()
TouchSensor1599.setDescription("HAnimSite r_inclined_view")

HAnimSite1598.addChildren(TouchSensor1599)
Shape1600 = Shape()
Shape1600.setUSE("HAnimSiteShape")

HAnimSite1598.addChildren(Shape1600)
Viewpoint1601 = Viewpoint()
Viewpoint1601.setDEF("hanim_r_inclined_viewpoint")
Viewpoint1601.setCenterOfRotation([0,0.9,0])
Viewpoint1601.setDescription("right inclined")
Viewpoint1601.setPosition([0,0,0])

HAnimSite1598.addChildren(Viewpoint1601)
#HAnimSite/Viewpoint visualization shape
Anchor1602 = Anchor()
Anchor1602.setDescription("HAnimSite hanim_r_inclined_view Viewpoint")
Anchor1602.setUrl(["#hanim_r_inclined_viewpoint"])
LOD1603 = LOD()
LOD1603.setForceTransitions(True)
LOD1603.setRange([0.04])
WorldInfo1604 = WorldInfo()
WorldInfo1604.setInfo(["hide diamond when close"])

LOD1603.addChildren(WorldInfo1604)
Shape1605 = Shape()
Shape1605.setUSE("HAnimSiteViewpointShape")

LOD1603.addChildren(Shape1605)

Anchor1602.addChildren(LOD1603)

HAnimSite1598.addChildren(Anchor1602)

HAnimHumanoid43.addViewpoints(HAnimSite1598)
HAnimSite1606 = HAnimSite()
HAnimSite1606.setName("front_view")
HAnimSite1606.setDEF("hanim_front_view")
HAnimSite1606.setTranslation([0,0.85,2.58])
#HAnimSite visualization shape
TouchSensor1607 = TouchSensor()
TouchSensor1607.setDescription("HAnimSite front_view")

HAnimSite1606.addChildren(TouchSensor1607)
Shape1608 = Shape()
Shape1608.setUSE("HAnimSiteShape")

HAnimSite1606.addChildren(Shape1608)
Viewpoint1609 = Viewpoint()
Viewpoint1609.setDEF("hanim_front_viewpoint")
Viewpoint1609.setCenterOfRotation([0,0.9,0])
Viewpoint1609.setDescription("front")
Viewpoint1609.setPosition([0,0,0])

HAnimSite1606.addChildren(Viewpoint1609)
#HAnimSite/Viewpoint visualization shape
Anchor1610 = Anchor()
Anchor1610.setDescription("HAnimSite hanim_front_view Viewpoint")
Anchor1610.setUrl(["#hanim_front_viewpoint"])
LOD1611 = LOD()
LOD1611.setForceTransitions(True)
LOD1611.setRange([0.04])
WorldInfo1612 = WorldInfo()
WorldInfo1612.setInfo(["hide diamond when close"])

LOD1611.addChildren(WorldInfo1612)
Shape1613 = Shape()
Shape1613.setUSE("HAnimSiteViewpointShape")

LOD1611.addChildren(Shape1613)

Anchor1610.addChildren(LOD1611)

HAnimSite1606.addChildren(Anchor1610)

HAnimHumanoid43.addViewpoints(HAnimSite1606)
HAnimSite1614 = HAnimSite()
HAnimSite1614.setName("back_view")
HAnimSite1614.setDEF("hanim_back_view")
HAnimSite1614.setRotation([0,1,0,3.14])
HAnimSite1614.setTranslation([0,0.85,-2.58])
#HAnimSite visualization shape
TouchSensor1615 = TouchSensor()
TouchSensor1615.setDescription("HAnimSite back_view")

HAnimSite1614.addChildren(TouchSensor1615)
Shape1616 = Shape()
Shape1616.setUSE("HAnimSiteShape")

HAnimSite1614.addChildren(Shape1616)
Viewpoint1617 = Viewpoint()
Viewpoint1617.setDEF("hanim_back_viewpoint")
Viewpoint1617.setCenterOfRotation([0,0.9,0])
Viewpoint1617.setDescription("back")
Viewpoint1617.setPosition([0,0,0])

HAnimSite1614.addChildren(Viewpoint1617)
#HAnimSite/Viewpoint visualization shape
Anchor1618 = Anchor()
Anchor1618.setDescription("HAnimSite hanim_back_view Viewpoint")
Anchor1618.setUrl(["#hanim_back_viewpoint"])
LOD1619 = LOD()
LOD1619.setForceTransitions(True)
LOD1619.setRange([0.04])
WorldInfo1620 = WorldInfo()
WorldInfo1620.setInfo(["hide diamond when close"])

LOD1619.addChildren(WorldInfo1620)
Shape1621 = Shape()
Shape1621.setUSE("HAnimSiteViewpointShape")

LOD1619.addChildren(Shape1621)

Anchor1618.addChildren(LOD1619)

HAnimSite1614.addChildren(Anchor1618)

HAnimHumanoid43.addViewpoints(HAnimSite1614)
HAnimSite1622 = HAnimSite()
HAnimSite1622.setName("l_side_view")
HAnimSite1622.setDEF("hanim_l_side_view")
HAnimSite1622.setRotation([0,1,0,1.5708])
HAnimSite1622.setTranslation([2.6,0.854,0])
#HAnimSite visualization shape
TouchSensor1623 = TouchSensor()
TouchSensor1623.setDescription("HAnimSite l_side_view")

HAnimSite1622.addChildren(TouchSensor1623)
Shape1624 = Shape()
Shape1624.setUSE("HAnimSiteShape")

HAnimSite1622.addChildren(Shape1624)
Viewpoint1625 = Viewpoint()
Viewpoint1625.setDEF("hanim_l_side_viewpoint")
Viewpoint1625.setCenterOfRotation([0,0.9,0])
Viewpoint1625.setDescription("left side")
Viewpoint1625.setPosition([0,0,0])

HAnimSite1622.addChildren(Viewpoint1625)
#HAnimSite/Viewpoint visualization shape
Anchor1626 = Anchor()
Anchor1626.setDescription("HAnimSite hanim_l_side_view Viewpoint")
Anchor1626.setUrl(["#hanim_l_side_viewpoint"])
LOD1627 = LOD()
LOD1627.setForceTransitions(True)
LOD1627.setRange([0.04])
WorldInfo1628 = WorldInfo()
WorldInfo1628.setInfo(["hide diamond when close"])

LOD1627.addChildren(WorldInfo1628)
Shape1629 = Shape()
Shape1629.setUSE("HAnimSiteViewpointShape")

LOD1627.addChildren(Shape1629)

Anchor1626.addChildren(LOD1627)

HAnimSite1622.addChildren(Anchor1626)

HAnimHumanoid43.addViewpoints(HAnimSite1622)
HAnimSite1630 = HAnimSite()
HAnimSite1630.setName("Top_view")
HAnimSite1630.setDEF("hanim_Top_view")
HAnimSite1630.setRotation([1,0,0,-1.57])
HAnimSite1630.setTranslation([0,3.5,0])
#HAnimSite visualization shape
TouchSensor1631 = TouchSensor()
TouchSensor1631.setDescription("HAnimSite Top_view")

HAnimSite1630.addChildren(TouchSensor1631)
Shape1632 = Shape()
Shape1632.setUSE("HAnimSiteShape")

HAnimSite1630.addChildren(Shape1632)
Viewpoint1633 = Viewpoint()
Viewpoint1633.setDEF("hanim_Top_viewpoint")
Viewpoint1633.setCenterOfRotation([0,0.9,0])
Viewpoint1633.setDescription("Top")
Viewpoint1633.setPosition([0,0,0])

HAnimSite1630.addChildren(Viewpoint1633)
#HAnimSite/Viewpoint visualization shape
Anchor1634 = Anchor()
Anchor1634.setDescription("HAnimSite hanim_Top_view Viewpoint")
Anchor1634.setUrl(["#hanim_Top_viewpoint"])
LOD1635 = LOD()
LOD1635.setForceTransitions(True)
LOD1635.setRange([0.04])
WorldInfo1636 = WorldInfo()
WorldInfo1636.setInfo(["hide diamond when close"])

LOD1635.addChildren(WorldInfo1636)
Shape1637 = Shape()
Shape1637.setUSE("HAnimSiteViewpointShape")

LOD1635.addChildren(Shape1637)

Anchor1634.addChildren(LOD1635)

HAnimSite1630.addChildren(Anchor1634)

HAnimHumanoid43.addViewpoints(HAnimSite1630)
HAnimSite1638 = HAnimSite()
HAnimSite1638.setName("front_close_view")
HAnimSite1638.setDEF("hanim_front_close_view")
HAnimSite1638.setTranslation([0,0.854,1.575])
#HAnimSite visualization shape
TouchSensor1639 = TouchSensor()
TouchSensor1639.setDescription("HAnimSite front_close_view")

HAnimSite1638.addChildren(TouchSensor1639)
Shape1640 = Shape()
Shape1640.setUSE("HAnimSiteShape")

HAnimSite1638.addChildren(Shape1640)
Viewpoint1641 = Viewpoint()
Viewpoint1641.setDEF("hanim_front_close_viewpoint")
Viewpoint1641.setCenterOfRotation([0,0,1.575])
Viewpoint1641.setDescription("front close")
Viewpoint1641.setPosition([0,0,0])

HAnimSite1638.addChildren(Viewpoint1641)
#HAnimSite/Viewpoint visualization shape
Anchor1642 = Anchor()
Anchor1642.setDescription("HAnimSite hanim_front_close_view Viewpoint")
Anchor1642.setUrl(["#hanim_front_close_viewpoint"])
LOD1643 = LOD()
LOD1643.setForceTransitions(True)
LOD1643.setRange([0.04])
WorldInfo1644 = WorldInfo()
WorldInfo1644.setInfo(["hide diamond when close"])

LOD1643.addChildren(WorldInfo1644)
Shape1645 = Shape()
Shape1645.setUSE("HAnimSiteViewpointShape")

LOD1643.addChildren(Shape1645)

Anchor1642.addChildren(LOD1643)

HAnimSite1638.addChildren(Anchor1642)

HAnimHumanoid43.addViewpoints(HAnimSite1638)
HAnimSite1646 = HAnimSite()
HAnimSite1646.setName("side_close_view")
HAnimSite1646.setDEF("hanim_side_close_view")
HAnimSite1646.setRotation([0,1,0,1.5708])
HAnimSite1646.setTranslation([1.56,0.854,0])
#HAnimSite visualization shape
TouchSensor1647 = TouchSensor()
TouchSensor1647.setDescription("HAnimSite side_close_view")

HAnimSite1646.addChildren(TouchSensor1647)
Shape1648 = Shape()
Shape1648.setUSE("HAnimSiteShape")

HAnimSite1646.addChildren(Shape1648)
Viewpoint1649 = Viewpoint()
Viewpoint1649.setDEF("hanim_side_close_viewpoint")
Viewpoint1649.setCenterOfRotation([1.6,0,0])
Viewpoint1649.setDescription("side close")
Viewpoint1649.setPosition([0,0,0])

HAnimSite1646.addChildren(Viewpoint1649)
#HAnimSite/Viewpoint visualization shape
Anchor1650 = Anchor()
Anchor1650.setDescription("HAnimSite hanim_side_close_view Viewpoint")
Anchor1650.setUrl(["#hanim_side_close_viewpoint"])
LOD1651 = LOD()
LOD1651.setForceTransitions(True)
LOD1651.setRange([0.04])
WorldInfo1652 = WorldInfo()
WorldInfo1652.setInfo(["hide diamond when close"])

LOD1651.addChildren(WorldInfo1652)
Shape1653 = Shape()
Shape1653.setUSE("HAnimSiteViewpointShape")

LOD1651.addChildren(Shape1653)

Anchor1650.addChildren(LOD1651)

HAnimSite1646.addChildren(Anchor1650)

HAnimHumanoid43.addViewpoints(HAnimSite1646)
HAnimSite1654 = HAnimSite()
HAnimSite1654.setName("head_front_close_view")
HAnimSite1654.setDEF("hanim_head_front_close_view")
HAnimSite1654.setTranslation([0,1.5,1])
#HAnimSite visualization shape
TouchSensor1655 = TouchSensor()
TouchSensor1655.setDescription("HAnimSite head_front_close_view")

HAnimSite1654.addChildren(TouchSensor1655)
Shape1656 = Shape()
Shape1656.setUSE("HAnimSiteShape")

HAnimSite1654.addChildren(Shape1656)
Viewpoint1657 = Viewpoint()
Viewpoint1657.setDEF("hanim_head_front_close_viewpoint")
Viewpoint1657.setCenterOfRotation([0,0,1])
Viewpoint1657.setDescription("head front close")
Viewpoint1657.setPosition([0,0,0])

HAnimSite1654.addChildren(Viewpoint1657)
#HAnimSite/Viewpoint visualization shape
Anchor1658 = Anchor()
Anchor1658.setDescription("HAnimSite hanim_head_front_close_view Viewpoint")
Anchor1658.setUrl(["#hanim_head_front_close_viewpoint"])
LOD1659 = LOD()
LOD1659.setForceTransitions(True)
LOD1659.setRange([0.04])
WorldInfo1660 = WorldInfo()
WorldInfo1660.setInfo(["hide diamond when close"])

LOD1659.addChildren(WorldInfo1660)
Shape1661 = Shape()
Shape1661.setUSE("HAnimSiteViewpointShape")

LOD1659.addChildren(Shape1661)

Anchor1658.addChildren(LOD1659)

HAnimSite1654.addChildren(Anchor1658)

HAnimHumanoid43.addViewpoints(HAnimSite1654)
HAnimSite1662 = HAnimSite()
HAnimSite1662.setName("chest_front_close_view")
HAnimSite1662.setDEF("hanim_chest_front_close_view")
HAnimSite1662.setTranslation([0,1.2,1])
#HAnimSite visualization shape
TouchSensor1663 = TouchSensor()
TouchSensor1663.setDescription("HAnimSite chest_front_close_view")

HAnimSite1662.addChildren(TouchSensor1663)
Shape1664 = Shape()
Shape1664.setUSE("HAnimSiteShape")

HAnimSite1662.addChildren(Shape1664)
Viewpoint1665 = Viewpoint()
Viewpoint1665.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint1665.setCenterOfRotation([0,0,1])
Viewpoint1665.setDescription("chest front close")
Viewpoint1665.setPosition([0,0,0])

HAnimSite1662.addChildren(Viewpoint1665)
#HAnimSite/Viewpoint visualization shape
Anchor1666 = Anchor()
Anchor1666.setDescription("HAnimSite hanim_chest_front_close_view Viewpoint")
Anchor1666.setUrl(["#hanim_chest_front_close_viewpoint"])
LOD1667 = LOD()
LOD1667.setForceTransitions(True)
LOD1667.setRange([0.04])
WorldInfo1668 = WorldInfo()
WorldInfo1668.setInfo(["hide diamond when close"])

LOD1667.addChildren(WorldInfo1668)
Shape1669 = Shape()
Shape1669.setUSE("HAnimSiteViewpointShape")

LOD1667.addChildren(Shape1669)

Anchor1666.addChildren(LOD1667)

HAnimSite1662.addChildren(Anchor1666)

HAnimHumanoid43.addViewpoints(HAnimSite1662)
HAnimSite1670 = HAnimSite()
HAnimSite1670.setName("pelvis_front_close_view")
HAnimSite1670.setDEF("hanim_pelvis_front_close_view")
HAnimSite1670.setTranslation([0,0.8,1])
#HAnimSite visualization shape
TouchSensor1671 = TouchSensor()
TouchSensor1671.setDescription("HAnimSite pelvis_front_close_view")

HAnimSite1670.addChildren(TouchSensor1671)
Shape1672 = Shape()
Shape1672.setUSE("HAnimSiteShape")

HAnimSite1670.addChildren(Shape1672)
Viewpoint1673 = Viewpoint()
Viewpoint1673.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint1673.setCenterOfRotation([0,0,1])
Viewpoint1673.setDescription("pelvis front close")
Viewpoint1673.setPosition([0,0,0])

HAnimSite1670.addChildren(Viewpoint1673)
#HAnimSite/Viewpoint visualization shape
Anchor1674 = Anchor()
Anchor1674.setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint")
Anchor1674.setUrl(["#hanim_pelvis_front_close_viewpoint"])
LOD1675 = LOD()
LOD1675.setForceTransitions(True)
LOD1675.setRange([0.04])
WorldInfo1676 = WorldInfo()
WorldInfo1676.setInfo(["hide diamond when close"])

LOD1675.addChildren(WorldInfo1676)
Shape1677 = Shape()
Shape1677.setUSE("HAnimSiteViewpointShape")

LOD1675.addChildren(Shape1677)

Anchor1674.addChildren(LOD1675)

HAnimSite1670.addChildren(Anchor1674)

HAnimHumanoid43.addViewpoints(HAnimSite1670)
HAnimSite1678 = HAnimSite()
HAnimSite1678.setName("knees_front_close_view")
HAnimSite1678.setDEF("hanim_knees_front_close_view")
HAnimSite1678.setTranslation([0,0.4,1])
#HAnimSite visualization shape
TouchSensor1679 = TouchSensor()
TouchSensor1679.setDescription("HAnimSite knees_front_close_view")

HAnimSite1678.addChildren(TouchSensor1679)
Shape1680 = Shape()
Shape1680.setUSE("HAnimSiteShape")

HAnimSite1678.addChildren(Shape1680)
Viewpoint1681 = Viewpoint()
Viewpoint1681.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint1681.setCenterOfRotation([0,0.4,0])
Viewpoint1681.setDescription("knees front close")
Viewpoint1681.setPosition([0,0,0])

HAnimSite1678.addChildren(Viewpoint1681)
#HAnimSite/Viewpoint visualization shape
Anchor1682 = Anchor()
Anchor1682.setDescription("HAnimSite hanim_knees_front_close_view Viewpoint")
Anchor1682.setUrl(["#hanim_knees_front_close_viewpoint"])
LOD1683 = LOD()
LOD1683.setForceTransitions(True)
LOD1683.setRange([0.04])
WorldInfo1684 = WorldInfo()
WorldInfo1684.setInfo(["hide diamond when close"])

LOD1683.addChildren(WorldInfo1684)
Shape1685 = Shape()
Shape1685.setUSE("HAnimSiteViewpointShape")

LOD1683.addChildren(Shape1685)

Anchor1682.addChildren(LOD1683)

HAnimSite1678.addChildren(Anchor1682)

HAnimHumanoid43.addViewpoints(HAnimSite1678)
HAnimSite1686 = HAnimSite()
HAnimSite1686.setName("feet_front_close_view")
HAnimSite1686.setDEF("hanim_feet_front_close_view")
HAnimSite1686.setTranslation([0,0,1])
#HAnimSite visualization shape
TouchSensor1687 = TouchSensor()
TouchSensor1687.setDescription("HAnimSite feet_front_close_view")

HAnimSite1686.addChildren(TouchSensor1687)
Shape1688 = Shape()
Shape1688.setUSE("HAnimSiteShape")

HAnimSite1686.addChildren(Shape1688)
Viewpoint1689 = Viewpoint()
Viewpoint1689.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint1689.setDescription("feet front close")
Viewpoint1689.setPosition([0,0,0])

HAnimSite1686.addChildren(Viewpoint1689)
#HAnimSite/Viewpoint visualization shape
Anchor1690 = Anchor()
Anchor1690.setDescription("HAnimSite hanim_feet_front_close_view Viewpoint")
Anchor1690.setUrl(["#hanim_feet_front_close_viewpoint"])
LOD1691 = LOD()
LOD1691.setForceTransitions(True)
LOD1691.setRange([0.04])
WorldInfo1692 = WorldInfo()
WorldInfo1692.setInfo(["hide diamond when close"])

LOD1691.addChildren(WorldInfo1692)
Shape1693 = Shape()
Shape1693.setUSE("HAnimSiteViewpointShape")

LOD1691.addChildren(Shape1693)

Anchor1690.addChildren(LOD1691)

HAnimSite1686.addChildren(Anchor1690)

HAnimHumanoid43.addViewpoints(HAnimSite1686)
HAnimSite1694 = HAnimSite()
HAnimSite1694.setName("eye_level_view")
HAnimSite1694.setDEF("hanim_eye_level_view")
HAnimSite1694.setTranslation([0,1.6332,0.0502])
#HAnimSite visualization shape
TouchSensor1695 = TouchSensor()
TouchSensor1695.setDescription("HAnimSite eye_level_view")

HAnimSite1694.addChildren(TouchSensor1695)
Shape1696 = Shape()
Shape1696.setUSE("HAnimSiteShape")

HAnimSite1694.addChildren(Shape1696)
Viewpoint1697 = Viewpoint()
Viewpoint1697.setDEF("hanim_eye_level_viewpoint")
Viewpoint1697.setDescription("eye level looking forward")
Viewpoint1697.setOrientation([0,1,0,3.141593])
Viewpoint1697.setPosition([0,0,0])

HAnimSite1694.addChildren(Viewpoint1697)
#HAnimSite/Viewpoint visualization shape
Anchor1698 = Anchor()
Anchor1698.setDescription("HAnimSite hanim_eye_level_view Viewpoint")
Anchor1698.setUrl(["#hanim_eye_level_viewpoint"])
LOD1699 = LOD()
LOD1699.setForceTransitions(True)
LOD1699.setRange([0.04])
WorldInfo1700 = WorldInfo()
WorldInfo1700.setInfo(["hide diamond when close"])

LOD1699.addChildren(WorldInfo1700)
Shape1701 = Shape()
Shape1701.setUSE("HAnimSiteViewpointShape")

LOD1699.addChildren(Shape1701)

Anchor1698.addChildren(LOD1699)

HAnimSite1694.addChildren(Anchor1698)

HAnimHumanoid43.addViewpoints(HAnimSite1694)
HAnimSite1702 = HAnimSite()
HAnimSite1702.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite1702)
HAnimSite1703 = HAnimSite()
HAnimSite1703.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite1703)
HAnimSite1704 = HAnimSite()
HAnimSite1704.setUSE("hanim_l_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite1704)
HAnimSite1705 = HAnimSite()
HAnimSite1705.setUSE("hanim_r_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite1705)
HAnimJoint1706 = HAnimJoint()
HAnimJoint1706.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1706)
HAnimJoint1707 = HAnimJoint()
HAnimJoint1707.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1707)
HAnimJoint1708 = HAnimJoint()
HAnimJoint1708.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1708)
HAnimJoint1709 = HAnimJoint()
HAnimJoint1709.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1709)
HAnimJoint1710 = HAnimJoint()
HAnimJoint1710.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1710)
HAnimJoint1711 = HAnimJoint()
HAnimJoint1711.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1711)
HAnimJoint1712 = HAnimJoint()
HAnimJoint1712.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1712)
HAnimJoint1713 = HAnimJoint()
HAnimJoint1713.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1713)
HAnimJoint1714 = HAnimJoint()
HAnimJoint1714.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1714)
HAnimJoint1715 = HAnimJoint()
HAnimJoint1715.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1715)
HAnimJoint1716 = HAnimJoint()
HAnimJoint1716.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1716)
HAnimJoint1717 = HAnimJoint()
HAnimJoint1717.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1717)
HAnimJoint1718 = HAnimJoint()
HAnimJoint1718.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1718)
HAnimJoint1719 = HAnimJoint()
HAnimJoint1719.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1719)
HAnimJoint1720 = HAnimJoint()
HAnimJoint1720.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1720)
HAnimJoint1721 = HAnimJoint()
HAnimJoint1721.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1721)
HAnimJoint1722 = HAnimJoint()
HAnimJoint1722.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1722)
HAnimJoint1723 = HAnimJoint()
HAnimJoint1723.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1723)
HAnimJoint1724 = HAnimJoint()
HAnimJoint1724.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1724)
HAnimJoint1725 = HAnimJoint()
HAnimJoint1725.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1725)
HAnimJoint1726 = HAnimJoint()
HAnimJoint1726.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1726)
HAnimJoint1727 = HAnimJoint()
HAnimJoint1727.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1727)
HAnimJoint1728 = HAnimJoint()
HAnimJoint1728.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1728)
HAnimJoint1729 = HAnimJoint()
HAnimJoint1729.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1729)
HAnimJoint1730 = HAnimJoint()
HAnimJoint1730.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1730)
HAnimJoint1731 = HAnimJoint()
HAnimJoint1731.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1731)
HAnimJoint1732 = HAnimJoint()
HAnimJoint1732.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1732)
HAnimJoint1733 = HAnimJoint()
HAnimJoint1733.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1733)
HAnimJoint1734 = HAnimJoint()
HAnimJoint1734.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1734)
HAnimJoint1735 = HAnimJoint()
HAnimJoint1735.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1735)
HAnimJoint1736 = HAnimJoint()
HAnimJoint1736.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1736)
HAnimJoint1737 = HAnimJoint()
HAnimJoint1737.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1737)
HAnimJoint1738 = HAnimJoint()
HAnimJoint1738.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1738)
HAnimJoint1739 = HAnimJoint()
HAnimJoint1739.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1739)
HAnimJoint1740 = HAnimJoint()
HAnimJoint1740.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1740)
HAnimJoint1741 = HAnimJoint()
HAnimJoint1741.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1741)
HAnimJoint1742 = HAnimJoint()
HAnimJoint1742.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1742)
HAnimJoint1743 = HAnimJoint()
HAnimJoint1743.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1743)
HAnimJoint1744 = HAnimJoint()
HAnimJoint1744.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1744)
HAnimJoint1745 = HAnimJoint()
HAnimJoint1745.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1745)
HAnimJoint1746 = HAnimJoint()
HAnimJoint1746.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1746)
HAnimJoint1747 = HAnimJoint()
HAnimJoint1747.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1747)
HAnimJoint1748 = HAnimJoint()
HAnimJoint1748.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1748)
HAnimJoint1749 = HAnimJoint()
HAnimJoint1749.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1749)
HAnimJoint1750 = HAnimJoint()
HAnimJoint1750.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1750)
HAnimJoint1751 = HAnimJoint()
HAnimJoint1751.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1751)
HAnimJoint1752 = HAnimJoint()
HAnimJoint1752.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1752)
HAnimJoint1753 = HAnimJoint()
HAnimJoint1753.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1753)
HAnimJoint1754 = HAnimJoint()
HAnimJoint1754.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1754)
HAnimJoint1755 = HAnimJoint()
HAnimJoint1755.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1755)
HAnimJoint1756 = HAnimJoint()
HAnimJoint1756.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1756)
HAnimJoint1757 = HAnimJoint()
HAnimJoint1757.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1757)
HAnimJoint1758 = HAnimJoint()
HAnimJoint1758.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1758)
HAnimJoint1759 = HAnimJoint()
HAnimJoint1759.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1759)
HAnimJoint1760 = HAnimJoint()
HAnimJoint1760.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1760)
HAnimJoint1761 = HAnimJoint()
HAnimJoint1761.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1761)
HAnimJoint1762 = HAnimJoint()
HAnimJoint1762.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1762)
HAnimJoint1763 = HAnimJoint()
HAnimJoint1763.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1763)
HAnimJoint1764 = HAnimJoint()
HAnimJoint1764.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1764)
HAnimJoint1765 = HAnimJoint()
HAnimJoint1765.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1765)
HAnimJoint1766 = HAnimJoint()
HAnimJoint1766.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1766)
HAnimJoint1767 = HAnimJoint()
HAnimJoint1767.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1767)
HAnimJoint1768 = HAnimJoint()
HAnimJoint1768.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1768)
HAnimJoint1769 = HAnimJoint()
HAnimJoint1769.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1769)
HAnimJoint1770 = HAnimJoint()
HAnimJoint1770.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1770)
HAnimJoint1771 = HAnimJoint()
HAnimJoint1771.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1771)
HAnimJoint1772 = HAnimJoint()
HAnimJoint1772.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1772)
HAnimJoint1773 = HAnimJoint()
HAnimJoint1773.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1773)
HAnimJoint1774 = HAnimJoint()
HAnimJoint1774.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1774)
HAnimJoint1775 = HAnimJoint()
HAnimJoint1775.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1775)
HAnimJoint1776 = HAnimJoint()
HAnimJoint1776.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1776)
HAnimJoint1777 = HAnimJoint()
HAnimJoint1777.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1777)
HAnimJoint1778 = HAnimJoint()
HAnimJoint1778.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1778)
HAnimJoint1779 = HAnimJoint()
HAnimJoint1779.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1779)
HAnimJoint1780 = HAnimJoint()
HAnimJoint1780.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1780)
HAnimJoint1781 = HAnimJoint()
HAnimJoint1781.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1781)
HAnimJoint1782 = HAnimJoint()
HAnimJoint1782.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1782)
HAnimJoint1783 = HAnimJoint()
HAnimJoint1783.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1783)
HAnimJoint1784 = HAnimJoint()
HAnimJoint1784.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1784)
HAnimJoint1785 = HAnimJoint()
HAnimJoint1785.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1785)
HAnimJoint1786 = HAnimJoint()
HAnimJoint1786.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1786)
HAnimJoint1787 = HAnimJoint()
HAnimJoint1787.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1787)
HAnimJoint1788 = HAnimJoint()
HAnimJoint1788.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1788)
HAnimJoint1789 = HAnimJoint()
HAnimJoint1789.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1789)
HAnimJoint1790 = HAnimJoint()
HAnimJoint1790.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1790)
HAnimJoint1791 = HAnimJoint()
HAnimJoint1791.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1791)
HAnimJoint1792 = HAnimJoint()
HAnimJoint1792.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1792)
HAnimJoint1793 = HAnimJoint()
HAnimJoint1793.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1793)
HAnimJoint1794 = HAnimJoint()
HAnimJoint1794.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1794)
HAnimJoint1795 = HAnimJoint()
HAnimJoint1795.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1795)
HAnimJoint1796 = HAnimJoint()
HAnimJoint1796.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1796)
HAnimJoint1797 = HAnimJoint()
HAnimJoint1797.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1797)
HAnimJoint1798 = HAnimJoint()
HAnimJoint1798.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1798)
HAnimJoint1799 = HAnimJoint()
HAnimJoint1799.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1799)
HAnimSegment1800 = HAnimSegment()
HAnimSegment1800.setUSE("hanim_pelvis")

HAnimHumanoid43.addSegments(HAnimSegment1800)
HAnimSegment1801 = HAnimSegment()
HAnimSegment1801.setUSE("hanim_skull")

HAnimHumanoid43.addSegments(HAnimSegment1801)
HAnimSegment1802 = HAnimSegment()
HAnimSegment1802.setUSE("hanim_jaw")

HAnimHumanoid43.addSegments(HAnimSegment1802)
HAnimSegment1803 = HAnimSegment()
HAnimSegment1803.setUSE("hanim_c1")

HAnimHumanoid43.addSegments(HAnimSegment1803)
HAnimSegment1804 = HAnimSegment()
HAnimSegment1804.setUSE("hanim_c2")

HAnimHumanoid43.addSegments(HAnimSegment1804)
HAnimSegment1805 = HAnimSegment()
HAnimSegment1805.setUSE("hanim_c3")

HAnimHumanoid43.addSegments(HAnimSegment1805)
HAnimSegment1806 = HAnimSegment()
HAnimSegment1806.setUSE("hanim_c4")

HAnimHumanoid43.addSegments(HAnimSegment1806)
HAnimSegment1807 = HAnimSegment()
HAnimSegment1807.setUSE("hanim_c5")

HAnimHumanoid43.addSegments(HAnimSegment1807)
HAnimSegment1808 = HAnimSegment()
HAnimSegment1808.setUSE("hanim_c6")

HAnimHumanoid43.addSegments(HAnimSegment1808)
HAnimSegment1809 = HAnimSegment()
HAnimSegment1809.setUSE("hanim_c7")

HAnimHumanoid43.addSegments(HAnimSegment1809)
HAnimSegment1810 = HAnimSegment()
HAnimSegment1810.setUSE("hanim_t1")

HAnimHumanoid43.addSegments(HAnimSegment1810)
HAnimSegment1811 = HAnimSegment()
HAnimSegment1811.setUSE("hanim_t2")

HAnimHumanoid43.addSegments(HAnimSegment1811)
HAnimSegment1812 = HAnimSegment()
HAnimSegment1812.setUSE("hanim_t3")

HAnimHumanoid43.addSegments(HAnimSegment1812)
HAnimSegment1813 = HAnimSegment()
HAnimSegment1813.setUSE("hanim_t4")

HAnimHumanoid43.addSegments(HAnimSegment1813)
HAnimSegment1814 = HAnimSegment()
HAnimSegment1814.setUSE("hanim_t5")

HAnimHumanoid43.addSegments(HAnimSegment1814)
HAnimSegment1815 = HAnimSegment()
HAnimSegment1815.setUSE("hanim_t6")

HAnimHumanoid43.addSegments(HAnimSegment1815)
HAnimSegment1816 = HAnimSegment()
HAnimSegment1816.setUSE("hanim_t7")

HAnimHumanoid43.addSegments(HAnimSegment1816)
HAnimSegment1817 = HAnimSegment()
HAnimSegment1817.setUSE("hanim_t8")

HAnimHumanoid43.addSegments(HAnimSegment1817)
HAnimSegment1818 = HAnimSegment()
HAnimSegment1818.setUSE("hanim_t9")

HAnimHumanoid43.addSegments(HAnimSegment1818)
HAnimSegment1819 = HAnimSegment()
HAnimSegment1819.setUSE("hanim_t10")

HAnimHumanoid43.addSegments(HAnimSegment1819)
HAnimSegment1820 = HAnimSegment()
HAnimSegment1820.setUSE("hanim_t11")

HAnimHumanoid43.addSegments(HAnimSegment1820)
HAnimSegment1821 = HAnimSegment()
HAnimSegment1821.setUSE("hanim_t12")

HAnimHumanoid43.addSegments(HAnimSegment1821)
HAnimSegment1822 = HAnimSegment()
HAnimSegment1822.setUSE("hanim_l1")

HAnimHumanoid43.addSegments(HAnimSegment1822)
HAnimSegment1823 = HAnimSegment()
HAnimSegment1823.setUSE("hanim_l2")

HAnimHumanoid43.addSegments(HAnimSegment1823)
HAnimSegment1824 = HAnimSegment()
HAnimSegment1824.setUSE("hanim_l3")

HAnimHumanoid43.addSegments(HAnimSegment1824)
HAnimSegment1825 = HAnimSegment()
HAnimSegment1825.setUSE("hanim_l4")

HAnimHumanoid43.addSegments(HAnimSegment1825)
HAnimSegment1826 = HAnimSegment()
HAnimSegment1826.setUSE("hanim_l5")

HAnimHumanoid43.addSegments(HAnimSegment1826)
HAnimSegment1827 = HAnimSegment()
HAnimSegment1827.setUSE("hanim_sacrum")

HAnimHumanoid43.addSegments(HAnimSegment1827)
HAnimSegment1828 = HAnimSegment()
HAnimSegment1828.setUSE("hanim_l_calf")

HAnimHumanoid43.addSegments(HAnimSegment1828)
HAnimSegment1829 = HAnimSegment()
HAnimSegment1829.setUSE("hanim_r_calf")

HAnimHumanoid43.addSegments(HAnimSegment1829)
HAnimSegment1830 = HAnimSegment()
HAnimSegment1830.setUSE("hanim_l_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1830)
HAnimSegment1831 = HAnimSegment()
HAnimSegment1831.setUSE("hanim_r_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1831)
HAnimSegment1832 = HAnimSegment()
HAnimSegment1832.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1832)
HAnimSegment1833 = HAnimSegment()
HAnimSegment1833.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1833)
HAnimSegment1834 = HAnimSegment()
HAnimSegment1834.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1834)
HAnimSegment1835 = HAnimSegment()
HAnimSegment1835.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1835)
HAnimSegment1836 = HAnimSegment()
HAnimSegment1836.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1836)
HAnimSegment1837 = HAnimSegment()
HAnimSegment1837.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1837)
HAnimSegment1838 = HAnimSegment()
HAnimSegment1838.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1838)
HAnimSegment1839 = HAnimSegment()
HAnimSegment1839.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1839)
HAnimSegment1840 = HAnimSegment()
HAnimSegment1840.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1840)
HAnimSegment1841 = HAnimSegment()
HAnimSegment1841.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1841)
HAnimSegment1842 = HAnimSegment()
HAnimSegment1842.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1842)
HAnimSegment1843 = HAnimSegment()
HAnimSegment1843.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1843)
HAnimSegment1844 = HAnimSegment()
HAnimSegment1844.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1844)
HAnimSegment1845 = HAnimSegment()
HAnimSegment1845.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1845)
HAnimSegment1846 = HAnimSegment()
HAnimSegment1846.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1846)
HAnimSegment1847 = HAnimSegment()
HAnimSegment1847.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1847)
HAnimSegment1848 = HAnimSegment()
HAnimSegment1848.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1848)
HAnimSegment1849 = HAnimSegment()
HAnimSegment1849.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1849)
HAnimSegment1850 = HAnimSegment()
HAnimSegment1850.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1850)
HAnimSegment1851 = HAnimSegment()
HAnimSegment1851.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1851)
HAnimSegment1852 = HAnimSegment()
HAnimSegment1852.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1852)
HAnimSegment1853 = HAnimSegment()
HAnimSegment1853.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1853)
HAnimSegment1854 = HAnimSegment()
HAnimSegment1854.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1854)
HAnimSegment1855 = HAnimSegment()
HAnimSegment1855.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1855)
HAnimSegment1856 = HAnimSegment()
HAnimSegment1856.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1856)
HAnimSegment1857 = HAnimSegment()
HAnimSegment1857.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1857)
HAnimSegment1858 = HAnimSegment()
HAnimSegment1858.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1858)
HAnimSegment1859 = HAnimSegment()
HAnimSegment1859.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1859)
HAnimSegment1860 = HAnimSegment()
HAnimSegment1860.setUSE("hanim_l_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1860)
HAnimSegment1861 = HAnimSegment()
HAnimSegment1861.setUSE("hanim_r_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1861)
HAnimSegment1862 = HAnimSegment()
HAnimSegment1862.setUSE("hanim_l_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment1862)
HAnimSegment1863 = HAnimSegment()
HAnimSegment1863.setUSE("hanim_r_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment1863)
HAnimSegment1864 = HAnimSegment()
HAnimSegment1864.setUSE("hanim_l_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment1864)
HAnimSegment1865 = HAnimSegment()
HAnimSegment1865.setUSE("hanim_r_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment1865)
HAnimSegment1866 = HAnimSegment()
HAnimSegment1866.setUSE("hanim_l_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment1866)
HAnimSegment1867 = HAnimSegment()
HAnimSegment1867.setUSE("hanim_r_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment1867)
HAnimSegment1868 = HAnimSegment()
HAnimSegment1868.setUSE("hanim_l_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1868)
HAnimSegment1869 = HAnimSegment()
HAnimSegment1869.setUSE("hanim_r_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1869)
HAnimSegment1870 = HAnimSegment()
HAnimSegment1870.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1870)
HAnimSegment1871 = HAnimSegment()
HAnimSegment1871.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1871)
HAnimSegment1872 = HAnimSegment()
HAnimSegment1872.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1872)
HAnimSegment1873 = HAnimSegment()
HAnimSegment1873.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1873)
HAnimSegment1874 = HAnimSegment()
HAnimSegment1874.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1874)
HAnimSegment1875 = HAnimSegment()
HAnimSegment1875.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1875)
HAnimSegment1876 = HAnimSegment()
HAnimSegment1876.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1876)
HAnimSegment1877 = HAnimSegment()
HAnimSegment1877.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1877)
HAnimSegment1878 = HAnimSegment()
HAnimSegment1878.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1878)
HAnimSegment1879 = HAnimSegment()
HAnimSegment1879.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1879)
HAnimSegment1880 = HAnimSegment()
HAnimSegment1880.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1880)
HAnimSegment1881 = HAnimSegment()
HAnimSegment1881.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1881)
HAnimSegment1882 = HAnimSegment()
HAnimSegment1882.setUSE("hanim_l_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1882)
HAnimSegment1883 = HAnimSegment()
HAnimSegment1883.setUSE("hanim_r_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1883)
HAnimSegment1884 = HAnimSegment()
HAnimSegment1884.setUSE("hanim_l_talus")

HAnimHumanoid43.addSegments(HAnimSegment1884)
HAnimSegment1885 = HAnimSegment()
HAnimSegment1885.setUSE("hanim_r_talus")

HAnimHumanoid43.addSegments(HAnimSegment1885)
HAnimSegment1886 = HAnimSegment()
HAnimSegment1886.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1886)
HAnimSegment1887 = HAnimSegment()
HAnimSegment1887.setUSE("hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1887)
HAnimSegment1888 = HAnimSegment()
HAnimSegment1888.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1888)
HAnimSegment1889 = HAnimSegment()
HAnimSegment1889.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1889)
HAnimSegment1890 = HAnimSegment()
HAnimSegment1890.setUSE("hanim_l_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1890)
HAnimSegment1891 = HAnimSegment()
HAnimSegment1891.setUSE("hanim_r_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1891)
HAnimSegment1892 = HAnimSegment()
HAnimSegment1892.setUSE("hanim_l_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1892)
HAnimSegment1893 = HAnimSegment()
HAnimSegment1893.setUSE("hanim_r_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1893)
HAnimSite1894 = HAnimSite()
HAnimSite1894.setUSE("hanim_crotch_pt")

HAnimHumanoid43.addSites(HAnimSite1894)
HAnimSite1895 = HAnimSite()
HAnimSite1895.setUSE("hanim_skull_vertex_pt")

HAnimHumanoid43.addSites(HAnimSite1895)
HAnimSite1896 = HAnimSite()
HAnimSite1896.setUSE("hanim_sellion_pt")

HAnimHumanoid43.addSites(HAnimSite1896)
HAnimSite1897 = HAnimSite()
HAnimSite1897.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.addSites(HAnimSite1897)
HAnimSite1898 = HAnimSite()
HAnimSite1898.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.addSites(HAnimSite1898)
HAnimSite1899 = HAnimSite()
HAnimSite1899.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.addSites(HAnimSite1899)
HAnimSite1900 = HAnimSite()
HAnimSite1900.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.addSites(HAnimSite1900)
HAnimSite1901 = HAnimSite()
HAnimSite1901.setUSE("hanim_substernale_pt")

HAnimHumanoid43.addSites(HAnimSite1901)
HAnimSite1902 = HAnimSite()
HAnimSite1902.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid43.addSites(HAnimSite1902)
HAnimSite1903 = HAnimSite()
HAnimSite1903.setUSE("hanim_waist_preferred_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1903)
HAnimSite1904 = HAnimSite()
HAnimSite1904.setUSE("hanim_navel_pt")

HAnimHumanoid43.addSites(HAnimSite1904)
HAnimSite1905 = HAnimSite()
HAnimSite1905.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1905)
HAnimSite1906 = HAnimSite()
HAnimSite1906.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1906)
HAnimSite1907 = HAnimSite()
HAnimSite1907.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1907)
HAnimSite1908 = HAnimSite()
HAnimSite1908.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1908)
HAnimSite1909 = HAnimSite()
HAnimSite1909.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.addSites(HAnimSite1909)
HAnimSite1910 = HAnimSite()
HAnimSite1910.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.addSites(HAnimSite1910)
HAnimSite1911 = HAnimSite()
HAnimSite1911.setUSE("hanim_l_axilla_proximal_pt")

HAnimHumanoid43.addSites(HAnimSite1911)
HAnimSite1912 = HAnimSite()
HAnimSite1912.setUSE("hanim_r_axilla_proximal_pt")

HAnimHumanoid43.addSites(HAnimSite1912)
HAnimSite1913 = HAnimSite()
HAnimSite1913.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1913)
HAnimSite1914 = HAnimSite()
HAnimSite1914.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1914)
HAnimSite1915 = HAnimSite()
HAnimSite1915.setUSE("hanim_l_carpal_distal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1915)
HAnimSite1916 = HAnimSite()
HAnimSite1916.setUSE("hanim_r_carpal_distal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1916)
HAnimSite1917 = HAnimSite()
HAnimSite1917.setUSE("hanim_l_carpal_distal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1917)
HAnimSite1918 = HAnimSite()
HAnimSite1918.setUSE("hanim_r_carpal_distal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1918)
HAnimSite1919 = HAnimSite()
HAnimSite1919.setUSE("hanim_l_carpal_distal_phalanx_3_pt")

HAnimHumanoid43.addSites(HAnimSite1919)
HAnimSite1920 = HAnimSite()
HAnimSite1920.setUSE("hanim_r_carpal_distal_phalanx_3_pt")

HAnimHumanoid43.addSites(HAnimSite1920)
HAnimSite1921 = HAnimSite()
HAnimSite1921.setUSE("hanim_l_carpal_distal_phalanx_4_pt")

HAnimHumanoid43.addSites(HAnimSite1921)
HAnimSite1922 = HAnimSite()
HAnimSite1922.setUSE("hanim_r_carpal_distal_phalanx_4_pt")

HAnimHumanoid43.addSites(HAnimSite1922)
HAnimSite1923 = HAnimSite()
HAnimSite1923.setUSE("hanim_l_carpal_distal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1923)
HAnimSite1924 = HAnimSite()
HAnimSite1924.setUSE("hanim_r_carpal_distal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1924)
HAnimSite1925 = HAnimSite()
HAnimSite1925.setUSE("hanim_l_clavicle_pt")

HAnimHumanoid43.addSites(HAnimSite1925)
HAnimSite1926 = HAnimSite()
HAnimSite1926.setUSE("hanim_r_clavicle_pt")

HAnimHumanoid43.addSites(HAnimSite1926)
HAnimSite1927 = HAnimSite()
HAnimSite1927.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1927)
HAnimSite1928 = HAnimSite()
HAnimSite1928.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1928)
HAnimSite1929 = HAnimSite()
HAnimSite1929.setUSE("hanim_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1929)
HAnimSite1930 = HAnimSite()
HAnimSite1930.setUSE("hanim_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1930)
HAnimSite1931 = HAnimSite()
HAnimSite1931.setUSE("hanim_l_femoral_medial_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1931)
HAnimSite1932 = HAnimSite()
HAnimSite1932.setUSE("hanim_r_femoral_medial_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1932)
HAnimSite1933 = HAnimSite()
HAnimSite1933.setUSE("hanim_l_forefoot_tip_pt")

HAnimHumanoid43.addSites(HAnimSite1933)
HAnimSite1934 = HAnimSite()
HAnimSite1934.setUSE("hanim_r_forefoot_tip_pt")

HAnimHumanoid43.addSites(HAnimSite1934)
HAnimSite1935 = HAnimSite()
HAnimSite1935.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1935)
HAnimSite1936 = HAnimSite()
HAnimSite1936.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1936)
HAnimSite1937 = HAnimSite()
HAnimSite1937.setUSE("hanim_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1937)
HAnimSite1938 = HAnimSite()
HAnimSite1938.setUSE("hanim_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1938)
HAnimSite1939 = HAnimSite()
HAnimSite1939.setUSE("hanim_l_humeral_medial_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1939)
HAnimSite1940 = HAnimSite()
HAnimSite1940.setUSE("hanim_r_humeral_medial_epicondyle_pt")

HAnimHumanoid43.addSites(HAnimSite1940)
HAnimSite1941 = HAnimSite()
HAnimSite1941.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1941)
HAnimSite1942 = HAnimSite()
HAnimSite1942.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1942)
HAnimSite1943 = HAnimSite()
HAnimSite1943.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1943)
HAnimSite1944 = HAnimSite()
HAnimSite1944.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1944)
HAnimSite1945 = HAnimSite()
HAnimSite1945.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1945)
HAnimSite1946 = HAnimSite()
HAnimSite1946.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1946)
HAnimSite1947 = HAnimSite()
HAnimSite1947.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1947)
HAnimSite1948 = HAnimSite()
HAnimSite1948.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1948)
HAnimSite1949 = HAnimSite()
HAnimSite1949.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1949)
HAnimSite1950 = HAnimSite()
HAnimSite1950.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1950)
HAnimSite1951 = HAnimSite()
HAnimSite1951.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1951)
HAnimSite1952 = HAnimSite()
HAnimSite1952.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1952)
HAnimSite1953 = HAnimSite()
HAnimSite1953.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1953)
HAnimSite1954 = HAnimSite()
HAnimSite1954.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1954)
HAnimSite1955 = HAnimSite()
HAnimSite1955.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1955)
HAnimSite1956 = HAnimSite()
HAnimSite1956.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1956)
HAnimSite1957 = HAnimSite()
HAnimSite1957.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1957)
HAnimSite1958 = HAnimSite()
HAnimSite1958.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1958)
HAnimSite1959 = HAnimSite()
HAnimSite1959.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1959)
HAnimSite1960 = HAnimSite()
HAnimSite1960.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1960)
HAnimSite1961 = HAnimSite()
HAnimSite1961.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1961)
HAnimSite1962 = HAnimSite()
HAnimSite1962.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1962)
HAnimSite1963 = HAnimSite()
HAnimSite1963.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1963)
HAnimSite1964 = HAnimSite()
HAnimSite1964.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1964)
HAnimSite1965 = HAnimSite()
HAnimSite1965.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1965)
HAnimSite1966 = HAnimSite()
HAnimSite1966.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1966)
HAnimSite1967 = HAnimSite()
HAnimSite1967.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1967)
HAnimSite1968 = HAnimSite()
HAnimSite1968.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1968)
HAnimSite1969 = HAnimSite()
HAnimSite1969.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1969)
HAnimSite1970 = HAnimSite()
HAnimSite1970.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1970)
HAnimSite1971 = HAnimSite()
HAnimSite1971.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid43.addSites(HAnimSite1971)
HAnimSite1972 = HAnimSite()
HAnimSite1972.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid43.addSites(HAnimSite1972)
HAnimSite1973 = HAnimSite()
HAnimSite1973.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1973)
HAnimSite1974 = HAnimSite()
HAnimSite1974.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1974)
HAnimSite1975 = HAnimSite()
HAnimSite1975.setUSE("hanim_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1975)
HAnimSite1976 = HAnimSite()
HAnimSite1976.setUSE("hanim_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1976)
HAnimSite1977 = HAnimSite()
HAnimSite1977.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1977)
HAnimSite1978 = HAnimSite()
HAnimSite1978.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1978)
HAnimSite1979 = HAnimSite()
HAnimSite1979.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1979)
HAnimSite1980 = HAnimSite()
HAnimSite1980.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1980)
HAnimSite1981 = HAnimSite()
HAnimSite1981.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1981)
HAnimSite1982 = HAnimSite()
HAnimSite1982.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1982)
HAnimSite1983 = HAnimSite()
HAnimSite1983.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1983)
HAnimSite1984 = HAnimSite()
HAnimSite1984.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1984)

Scene29.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/HAnim2SpecificationLOA3Illustrated_RoundTrip.x3d")

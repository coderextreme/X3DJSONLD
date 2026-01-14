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
meta3.setContent("DiamondManLOA_0.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Matthew T. Beitler")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Joel S. Pawloski")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("12 November 2001")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("Tue, 09 Sep 2025 19:37:54 GMT")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("../Templates/DiamondManLOA_0.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("http://ece.uwaterloo.ca/~HAnim")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("reference")
meta20.setContent("http://www.cis.upenn.edu/~beitler")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("error")
meta21.setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("motto")
meta22.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("humanoid_landmark_locations.gif")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("Image")
meta24.setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("identifier")
meta25.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d")

head1.addMeta(meta25)

X3D0.setHead(head1)
Scene26 = x3d.Scene()
WorldInfo27 = x3d.WorldInfo()
WorldInfo27.setTitle("HANIM 2.0 Default Joint Centers, LOA0")
WorldInfo27.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])

Scene26.addChild(WorldInfo27)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.setSpeed(1.5)

Scene26.addChild(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.setDescription("Diamond Man, LOA 0")
Viewpoint29.setPosition(x3d.doubleToFloat([0,1,3]))
Viewpoint29.setCenterOfRotation(x3d.doubleToFloat([0,1,0]))

Scene26.addChild(Viewpoint29)
HAnimHumanoid30 = x3d.HAnimHumanoid()
HAnimHumanoid30.setDEF("hanim_humanoid")
HAnimHumanoid30.setName("humanoid")
HAnimHumanoid30.setVersion("1.0")
MetadataSet31 = x3d.MetadataSet()
MetadataSet31.setName("HAnimHumanoid.info")
MetadataSet31.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString32 = x3d.MetadataString()
MetadataString32.setName("authorEmail")

MetadataSet31.setMetadata(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.setName("authorName")

MetadataSet31.setMetadata(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.setName("copyright")

MetadataSet31.setMetadata(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.setName("creationDate")

MetadataSet31.setMetadata(MetadataString35)
MetadataString36 = x3d.MetadataString()
MetadataString36.setName("humanoidVersion")

MetadataSet31.setMetadata(MetadataString36)
MetadataString37 = x3d.MetadataString()
MetadataString37.setName("usageRestrictions")

MetadataSet31.setMetadata(MetadataString37)

HAnimHumanoid30.setMetadata(MetadataSet31)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.setContainerFieldOverride("skeleton")
HAnimJoint38.setDEF("hanim_HumanoidRoot")
HAnimJoint38.setName("humanoid_root")
HAnimJoint38.setCenter(x3d.doubleToFloat([0,0.824,0.0277]))
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setDEF("hanim_sacroiliac")
HAnimJoint39.setName("sacroiliac")
HAnimJoint39.setCenter(x3d.doubleToFloat([0,0.9149,0.0016]))
HAnimSegment40 = x3d.HAnimSegment()
HAnimSegment40.setDEF("hanim_pelvis")
HAnimSegment40.setName("pelvis")
Transform41 = x3d.Transform()
Transform41.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Shape42 = x3d.Shape()
Shape42.setDEF("DiamondShape")
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDiffuseColor(x3d.doubleToFloat([1,1,0]))

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
IndexedFaceSet45 = x3d.IndexedFaceSet()
IndexedFaceSet45.setCreaseAngle(0.5)
IndexedFaceSet45.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate46 = x3d.Coordinate()
Coordinate46.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet45.setCoord(Coordinate46)

Shape42.setGeometry(IndexedFaceSet45)

Transform41.addChild(Shape42)

HAnimSegment40.addChild(Transform41)

HAnimJoint39.addChild(HAnimSegment40)

HAnimJoint38.addChild(HAnimJoint39)

HAnimHumanoid30.addSkeleton(HAnimJoint38)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.setContainerFieldOverride("joints")
HAnimJoint47.setUSE("hanim_HumanoidRoot")

HAnimHumanoid30.addJoints(HAnimJoint47)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setContainerFieldOverride("joints")
HAnimJoint48.setUSE("hanim_sacroiliac")

HAnimHumanoid30.addJoints(HAnimJoint48)
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.setContainerFieldOverride("segments")
HAnimSegment49.setUSE("hanim_pelvis")

HAnimHumanoid30.addSegments(HAnimSegment49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.setDEF("hanim_site_view")
HAnimSite50.setName("site_view")
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.setDEF("InclinedView")
Viewpoint51.setDescription("Inclined View")
Viewpoint51.setPosition(x3d.doubleToFloat([1.62,1.05,2.06]))
Viewpoint51.setOrientation(x3d.doubleToFloat([-0.113,0.993,0.0347,0.671]))

HAnimSite50.addChild(Viewpoint51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.setDEF("FrontView")
Viewpoint52.setDescription("Front View")
Viewpoint52.setPosition(x3d.doubleToFloat([0,0.854,2.57665]))

HAnimSite50.addChild(Viewpoint52)
Viewpoint53 = x3d.Viewpoint()
Viewpoint53.setDEF("SideView")
Viewpoint53.setDescription("Side View")
Viewpoint53.setPosition(x3d.doubleToFloat([2.5929,0.854,0]))
Viewpoint53.setOrientation(x3d.doubleToFloat([0,1,0,1.57079]))

HAnimSite50.addChild(Viewpoint53)
Viewpoint54 = x3d.Viewpoint()
Viewpoint54.setDEF("TopView")
Viewpoint54.setDescription("Top View")
Viewpoint54.setPosition(x3d.doubleToFloat([0,3.4495,0]))
Viewpoint54.setOrientation(x3d.doubleToFloat([1,0,0,-1.57079]))

HAnimSite50.addChild(Viewpoint54)

HAnimHumanoid30.addViewpoints(HAnimSite50)

Scene26.addChild(HAnimHumanoid30)

X3D0.setScene(Scene26)
X3D0.toFileX3D("../data/DiamondManLOA_0.new.graalpy.x3d")
X3D0.toFileJSON("../data/DiamondManLOA_0.new.graalpy.json")

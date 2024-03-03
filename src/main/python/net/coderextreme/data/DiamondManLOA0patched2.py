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
meta3.setContent("DiamondManLOA0patched2.x3d")

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
meta8.setContent("2 November 2023")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("motto")
meta9.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

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
meta21.setName("Image")
meta21.setContent("humanoid_landmark_locations.gif")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("Image")
meta22.setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("identifier")
meta23.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("generator")
meta24.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("license")
meta25.setContent("../license.html")

head1.addMeta(meta25)

X3D0.setHead(head1)
Scene26 = x3d.Scene()
WorldInfo27 = x3d.WorldInfo()
WorldInfo27.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])
WorldInfo27.setTitle("HANIM 2.0 Default Joint Centers, LOA0")

Scene26.addChildren(WorldInfo27)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.setSpeed(1.5)

Scene26.addChildren(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.setCenterOfRotation([0,1,0])
Viewpoint29.setDescription("Diamond Man, LOA 0")
Viewpoint29.setPosition([0,1,3])

Scene26.addChildren(Viewpoint29)
HAnimHumanoid30 = x3d.HAnimHumanoid()
HAnimHumanoid30.setName("humanoid")
HAnimHumanoid30.setDEF("hanim_humanoid")
HAnimHumanoid30.setLoa(0)
HAnimHumanoid30.setVersion("2.0")
#original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
MetadataSet31 = x3d.MetadataSet()
MetadataSet31.setName("HAnimHumanoid.info")
MetadataSet31.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString32 = x3d.MetadataString()
MetadataString32.setName("authorEmail")
MetadataString32.setValue(["beitler@graphics.cis.upenn.edu beitler@acm.org"])

MetadataSet31.setValue(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.setName("authorName")
MetadataString33.setValue(["Matthew T. Beitler"])

MetadataSet31.setValue(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.setName("copyright")
MetadataString34.setValue(["Copyright 1999 Matthew T. Beitler"])

MetadataSet31.setValue(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.setName("creationDate")
MetadataString35.setValue(["05/12/99"])

MetadataSet31.setValue(MetadataString35)
MetadataString36 = x3d.MetadataString()
MetadataString36.setName("humanoidVersion")
MetadataString36.setValue(["JointCenters 1.1 LOA0"])

MetadataSet31.setValue(MetadataString36)
MetadataString37 = x3d.MetadataString()
MetadataString37.setName("usageRestrictions")
MetadataString37.setValue(["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])

MetadataSet31.setValue(MetadataString37)

HAnimHumanoid30.setMetadata(MetadataSet31)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.setName("humanoid_root")
HAnimJoint38.setDEF("hanim_humanoid_root")
HAnimJoint38.setCenter([0,0.824,0.0277])
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setName("sacroiliac")
HAnimJoint39.setDEF("hanim_sacroiliac")
HAnimJoint39.setCenter([0,0.9149,0.0016])
HAnimSegment40 = x3d.HAnimSegment()
HAnimSegment40.setName("pelvis")
HAnimSegment40.setDEF("hanim_pelvis")
Transform41 = x3d.Transform()
Transform41.setTranslation([0,0.9149,0.0016])
Shape42 = x3d.Shape()
Shape42.setDEF("DiamondShape")
IndexedFaceSet43 = x3d.IndexedFaceSet()
IndexedFaceSet43.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet43.setCreaseAngle(0.5)
Coordinate44 = x3d.Coordinate()
Coordinate44.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet43.setCoord(Coordinate44)

Shape42.setGeometry(IndexedFaceSet43)
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setDiffuseColor([1,1,0])

Appearance45.setMaterial(Material46)

Shape42.setAppearance(Appearance45)

Transform41.addChild(Shape42)

HAnimSegment40.addChildren(Transform41)

HAnimJoint39.addChildren(HAnimSegment40)

HAnimJoint38.addChildren(HAnimJoint39)

HAnimHumanoid30.setSkeleton(HAnimJoint38)
HAnimSite47 = x3d.HAnimSite()
HAnimSite47.setName("site_view")
HAnimSite47.setDEF("hanim_site_view")
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.setDEF("InclinedView")
Viewpoint48.setDescription("Inclined View")
Viewpoint48.setOrientation([-0.113,0.993,0.0347,0.671])
Viewpoint48.setPosition([1.62,1.05,2.06])

HAnimSite47.addChildren(Viewpoint48)
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.setDEF("FrontView")
Viewpoint49.setDescription("Front View")
Viewpoint49.setPosition([0,0.854,2.57665])

HAnimSite47.addChildren(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.setDEF("SideView")
Viewpoint50.setDescription("Side View")
Viewpoint50.setOrientation([0,1,0,1.57079])
Viewpoint50.setPosition([2.5929,0.854,0])

HAnimSite47.addChildren(Viewpoint50)
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.setDEF("TopView")
Viewpoint51.setDescription("Top View")
Viewpoint51.setOrientation([1,0,0,-1.57079])
Viewpoint51.setPosition([0,3.4495,0])

HAnimSite47.addChildren(Viewpoint51)

HAnimHumanoid30.setViewpoints(HAnimSite47)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setUSE("hanim_humanoid_root")

HAnimHumanoid30.addJoints(HAnimJoint52)
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.setUSE("hanim_sacroiliac")

HAnimHumanoid30.addJoints(HAnimJoint53)
HAnimSegment54 = x3d.HAnimSegment()
HAnimSegment54.setUSE("hanim_pelvis")

HAnimHumanoid30.setSegments(HAnimSegment54)

Scene26.addChildren(HAnimHumanoid30)

X3D0.setScene(Scene26)
X3D0.toFileX3D("../data/DiamondManLOA0patched2.new.python.x3d")
X3D0.toFileJSON("../data/DiamondManLOA0patched2.new.python.json")

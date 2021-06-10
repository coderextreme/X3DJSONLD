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
meta3.setContent("DiamondManLOA1.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.")

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
meta8.setContent("13 March 2021")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("Image")
meta9.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("motto")
meta10.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("warning")
meta11.setContent("Still needs comments on CAESAR feature points inserted")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("http://ece.uwaterloo.ca/~HAnim")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("http://www.cis.upenn.edu/~beitler")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("humanoid_landmark_locations.gif")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("identifier")
meta22.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("generator")
meta23.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

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
WorldInfo27.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])
WorldInfo27.setTitle("HANIM 1.1 Default Joint Centers, LOA1")

Scene26.addChildren(WorldInfo27)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.setSpeed(1.5)

Scene26.addChildren(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.setCenterOfRotation([0,1,0])
Viewpoint29.setDescription("Diamond Man, LOA 1")
Viewpoint29.setPosition([0,1,3])

Scene26.addChildren(Viewpoint29)
HAnimHumanoid30 = x3d.HAnimHumanoid()
HAnimHumanoid30.setName("humanoid")
HAnimHumanoid30.setDEF("hanim_humanoid")
HAnimHumanoid30.setLoa(1)
HAnimHumanoid30.setVersion("2.0")
#HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
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

MetadataSet31.addValue(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.setName("copyright")
MetadataString34.setValue(["Copyright 1999 Matthew T. Beitler"])

MetadataSet31.addValue(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.setName("humanoidVersion")
MetadataString35.setValue(["JointCenters 1.1 LOA1"])

MetadataSet31.addValue(MetadataString35)
MetadataString36 = x3d.MetadataString()
MetadataString36.setName("usageRestrictions")
MetadataString36.setValue(["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])

MetadataSet31.addValue(MetadataString36)

HAnimHumanoid30.setMetadata(MetadataSet31)
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.setName("humanoid_root")
HAnimJoint37.setDEF("hanim_humanoid_root")
HAnimJoint37.setCenter([0,0.824,0.0277])
HAnimJoint37.setStiffness([0,0,0])
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.setName("sacroiliac")
HAnimJoint38.setDEF("hanim_sacroiliac")
HAnimJoint38.setCenter([0,0.9149,0.0016])
HAnimJoint38.setStiffness([0,0,0])
HAnimSegment39 = x3d.HAnimSegment()
HAnimSegment39.setName("pelvis")
HAnimSegment39.setDEF("hanim_pelvis")
Transform40 = x3d.Transform()
Transform40.setTranslation([0,0.9149,0.0016])
Shape41 = x3d.Shape()
Shape41.setDEF("DiamondShape")
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet42.setCreaseAngle(0.5)
Coordinate43 = x3d.Coordinate()
Coordinate43.setDEF("points")
Coordinate43.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet42.setCoord(Coordinate43)

Shape41.setGeometry(IndexedFaceSet42)
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.setDiffuseColor([1,1,0])

Appearance44.setMaterial(Material45)

Shape41.setAppearance(Appearance44)

Transform40.addChildren(Shape41)

HAnimSegment39.addChildren(Transform40)

HAnimJoint38.addChildren(HAnimSegment39)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.setName("l_hip")
HAnimJoint46.setDEF("hanim_l_hip")
HAnimJoint46.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint46.setStiffness([0,0,0])
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.setName("l_thigh")
HAnimSegment47.setDEF("hanim_l_thigh")
Transform48 = x3d.Transform()
Transform48.setTranslation([0.0961,0.9124,-0.0001])
Shape49 = x3d.Shape()
Shape49.setUSE("DiamondShape")

Transform48.addChildren(Shape49)

HAnimSegment47.addChildren(Transform48)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.setName("l_knee_crease_pt")
HAnimSite50.setDEF("hanim_l_knee_crease_pt")
HAnimSite50.setTranslation([0.0993,0.4881,-0.0309])

HAnimSegment47.addChildren(HAnimSite50)
HAnimSite51 = x3d.HAnimSite()
HAnimSite51.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite51.setDEF("hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite51.setTranslation([0.1598,0.4967,0.0297])

HAnimSegment47.addChildren(HAnimSite51)
HAnimSite52 = x3d.HAnimSite()
HAnimSite52.setName("l_femoral_medial_epicondyle_pt")
HAnimSite52.setDEF("hanim_l_femoral_medial_epicondyle_pt")
HAnimSite52.setTranslation([0.0398,0.4946,0.0303])

HAnimSegment47.addChildren(HAnimSite52)

HAnimJoint46.addChildren(HAnimSegment47)
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.setName("l_knee")
HAnimJoint53.setDEF("hanim_l_knee")
HAnimJoint53.setCenter([0.104,0.4867,0.0308])
HAnimJoint53.setStiffness([0,0,0])
HAnimSegment54 = x3d.HAnimSegment()
HAnimSegment54.setName("l_calf")
HAnimSegment54.setDEF("hanim_l_calf")
Transform55 = x3d.Transform()
Transform55.setTranslation([0.104,0.4867,0.0308])
Shape56 = x3d.Shape()
Shape56.setUSE("DiamondShape")

Transform55.addChildren(Shape56)

HAnimSegment54.addChildren(Transform55)

HAnimJoint53.addChildren(HAnimSegment54)
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.setName("l_talocrural")
HAnimJoint57.setDEF("hanim_l_talocrural")
HAnimJoint57.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint57.setStiffness([0,0,0])
HAnimSegment58 = x3d.HAnimSegment()
HAnimSegment58.setName("l_talus")
HAnimSegment58.setDEF("hanim_l_talus")
Transform59 = x3d.Transform()
Transform59.setTranslation([0.1101,0.0656,-0.0736])
Shape60 = x3d.Shape()
Shape60.setUSE("DiamondShape")

Transform59.addChildren(Shape60)

HAnimSegment58.addChildren(Transform59)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.setName("l_lateral_malleolus_pt")
HAnimSite61.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite61.setTranslation([0.1308,0.0597,-0.1032])

HAnimSegment58.addChildren(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.setName("l_medial_malleolus_pt")
HAnimSite62.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite62.setTranslation([0.089,0.0716,-0.0881])

HAnimSegment58.addChildren(HAnimSite62)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.setName("l_sphyrion_pt")
HAnimSite63.setDEF("hanim_l_sphyrion_pt")
HAnimSite63.setTranslation([0.089,0.0575,-0.0943])

HAnimSegment58.addChildren(HAnimSite63)
HAnimSite64 = x3d.HAnimSite()
HAnimSite64.setName("l_calcaneus_posterior_pt")
HAnimSite64.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite64.setTranslation([0.0974,0.0259,-0.1171])

HAnimSegment58.addChildren(HAnimSite64)

HAnimJoint57.addChildren(HAnimSegment58)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.setName("l_metatarsophalangeal_2")
HAnimJoint65.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint65.setCenter([0.1086,0.0001,0.0368])
HAnimJoint65.setStiffness([0,0,0])
HAnimSegment66 = x3d.HAnimSegment()
HAnimSegment66.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment66.setDEF("hanim_l_tarsal_proximal_phalanx_2")
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.setName("l_middistal_tip")
HAnimSite67.setDEF("hanim_l_middistal_tip")
HAnimSite67.setTranslation([0.1354,0.0016,0.1476])

HAnimSegment66.addChildren(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.setName("l_metatarsal_phalanx_5_pt")
HAnimSite68.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite68.setTranslation([0.1825,0.007,0.0928])

HAnimSegment66.addChildren(HAnimSite68)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_metatarsal_phalanx_1_pt")
HAnimSite69.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite69.setTranslation([0.0816,0.0232,0.0106])

HAnimSegment66.addChildren(HAnimSite69)
HAnimSite70 = x3d.HAnimSite()
HAnimSite70.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite70.setDEF("hanim_l_tarsal_distal_phalanx_2_pt")
HAnimSite70.setTranslation([0.1195,0.0079,0.1433])

HAnimSegment66.addChildren(HAnimSite70)

HAnimJoint65.addChildren(HAnimSegment66)

HAnimJoint57.addChildren(HAnimJoint65)

HAnimJoint53.addChildren(HAnimJoint57)

HAnimJoint46.addChildren(HAnimJoint53)

HAnimJoint38.addChildren(HAnimJoint46)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.setName("r_hip")
HAnimJoint71.setDEF("hanim_r_hip")
HAnimJoint71.setCenter([-0.095,0.9171,0.0029])
HAnimJoint71.setStiffness([0,0,0])
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.setName("r_thigh")
HAnimSegment72.setDEF("hanim_r_thigh")
Transform73 = x3d.Transform()
Transform73.setTranslation([-0.095,0.9171,0.0029])
Shape74 = x3d.Shape()
Shape74.setUSE("DiamondShape")

Transform73.addChildren(Shape74)

HAnimSegment72.addChildren(Transform73)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("r_knee_crease_pt")
HAnimSite75.setDEF("hanim_r_knee_crease_pt")
HAnimSite75.setTranslation([-0.0825,0.4932,-0.0326])

HAnimSegment72.addChildren(HAnimSite75)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite76.setDEF("hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite76.setTranslation([-0.1421,0.4992,0.031])

HAnimSegment72.addChildren(HAnimSite76)
HAnimSite77 = x3d.HAnimSite()
HAnimSite77.setName("r_femoral_medial_epicondyle_pt")
HAnimSite77.setDEF("hanim_r_femoral_medial_epicondyle_pt")
HAnimSite77.setTranslation([-0.0221,0.5014,0.0289])

HAnimSegment72.addChildren(HAnimSite77)

HAnimJoint71.addChildren(HAnimSegment72)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("r_knee")
HAnimJoint78.setDEF("hanim_r_knee")
HAnimJoint78.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint78.setStiffness([0,0,0])
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("r_calf")
HAnimSegment79.setDEF("hanim_r_calf")
Transform80 = x3d.Transform()
Transform80.setTranslation([-0.0867,0.4913,0.0318])
Shape81 = x3d.Shape()
Shape81.setUSE("DiamondShape")

Transform80.addChildren(Shape81)

HAnimSegment79.addChildren(Transform80)

HAnimJoint78.addChildren(HAnimSegment79)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.setName("r_talocrural")
HAnimJoint82.setDEF("hanim_r_talocrural")
HAnimJoint82.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint82.setStiffness([0,0,0])
HAnimSegment83 = x3d.HAnimSegment()
HAnimSegment83.setName("r_talus")
HAnimSegment83.setDEF("hanim_r_talus")
Transform84 = x3d.Transform()
Transform84.setTranslation([-0.0801,0.0712,-0.0766])
Shape85 = x3d.Shape()
Shape85.setUSE("DiamondShape")

Transform84.addChildren(Shape85)

HAnimSegment83.addChildren(Transform84)
HAnimSite86 = x3d.HAnimSite()
HAnimSite86.setName("r_lateral_malleolus_pt")
HAnimSite86.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite86.setTranslation([-0.1006,0.0658,-0.1075])

HAnimSegment83.addChildren(HAnimSite86)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.setName("r_medial_malleolus_pt")
HAnimSite87.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite87.setTranslation([-0.0591,0.076,-0.0928])

HAnimSegment83.addChildren(HAnimSite87)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.setName("r_sphyrion_pt")
HAnimSite88.setDEF("hanim_r_sphyrion_pt")
HAnimSite88.setTranslation([-0.0603,0.061,-0.1002])

HAnimSegment83.addChildren(HAnimSite88)
HAnimSite89 = x3d.HAnimSite()
HAnimSite89.setName("r_calcaneus_posterior_pt")
HAnimSite89.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite89.setTranslation([-0.0692,0.0297,-0.1221])

HAnimSegment83.addChildren(HAnimSite89)

HAnimJoint82.addChildren(HAnimSegment83)
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.setName("r_metatarsophalangeal_2")
HAnimJoint90.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint90.setCenter([-0.0801,0,0.0368])
HAnimJoint90.setStiffness([0,0,0])
HAnimSegment91 = x3d.HAnimSegment()
HAnimSegment91.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment91.setDEF("hanim_r_tarsal_proximal_phalanx_2")
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.setName("r_middistal_tip")
HAnimSite92.setDEF("hanim_r_middistal_tip")
HAnimSite92.setTranslation([-0.1043,-0.0227,0.145])

HAnimSegment91.addChildren(HAnimSite92)
HAnimSite93 = x3d.HAnimSite()
HAnimSite93.setName("r_metatarsal_phalanx_5_pt")
HAnimSite93.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite93.setTranslation([-0.1523,0.0166,0.0895])

HAnimSegment91.addChildren(HAnimSite93)
HAnimSite94 = x3d.HAnimSite()
HAnimSite94.setName("r_metatarsal_phalanx_1_pt")
HAnimSite94.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite94.setTranslation([-0.0521,0.026,0.0127])

HAnimSegment91.addChildren(HAnimSite94)
HAnimSite95 = x3d.HAnimSite()
HAnimSite95.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite95.setDEF("hanim_r_tarsal_distal_phalanx_2_pt")
HAnimSite95.setTranslation([-0.0883,0.0134,0.1383])

HAnimSegment91.addChildren(HAnimSite95)

HAnimJoint90.addChildren(HAnimSegment91)

HAnimJoint82.addChildren(HAnimJoint90)

HAnimJoint78.addChildren(HAnimJoint82)

HAnimJoint71.addChildren(HAnimJoint78)

HAnimJoint38.addChildren(HAnimJoint71)

HAnimJoint37.addChildren(HAnimJoint38)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.setName("vl1")
HAnimJoint96.setDEF("hanim_vl1")
HAnimJoint96.setCenter([-0.00405,1.07,-0.0275])
HAnimJoint96.setStiffness([0,0,0])
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.setName("l1")
HAnimSegment97.setDEF("hanim_l1")

HAnimJoint96.addChildren(HAnimSegment97)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("l_shoulder")
HAnimJoint98.setDEF("hanim_l_shoulder")
HAnimJoint98.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint98.setStiffness([0,0,0])
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setName("l_upperarm")
HAnimSegment99.setDEF("hanim_l_upperarm")
Transform100 = x3d.Transform()
Transform100.setTranslation([0.2029,1.4376,-0.0387])
Shape101 = x3d.Shape()
Shape101.setUSE("DiamondShape")

Transform100.addChildren(Shape101)

HAnimSegment99.addChildren(Transform100)
Transform102 = x3d.Transform()
Transform102.setDEF("l_upperarm_adjust")
Transform102.setCenter([0.182,1.22,-0.047])
Transform102.setRotation([1,0,0,0.119])
Transform102.setTranslation([0.2029,1.4376,-0.0387])

HAnimSegment99.addChildren(Transform102)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite103.setDEF("hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite103.setTranslation([0.228,1.1482,-0.11])

HAnimSegment99.addChildren(HAnimSite103)

HAnimJoint98.addChildren(HAnimSegment99)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setName("l_elbow")
HAnimJoint104.setDEF("hanim_l_elbow")
HAnimJoint104.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint104.setStiffness([0,0,0])
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.setName("l_forearm")
HAnimSegment105.setDEF("hanim_l_forearm")
Transform106 = x3d.Transform()
Transform106.setTranslation([0.2014,1.1357,-0.0682])
Shape107 = x3d.Shape()
Shape107.setUSE("DiamondShape")

Transform106.addChildren(Shape107)

HAnimSegment105.addChildren(Transform106)
Transform108 = x3d.Transform()
Transform108.setDEF("l_forearm_adjust")
Transform108.setCenter([0.198,0.961,-0.0405])
Transform108.setRotation([-1,0,0,0.1])
Transform108.setTranslation([0.2014,1.1357,-0.0682])

HAnimSegment105.addChildren(Transform108)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setName("l_radial_styloid_pt")
HAnimSite109.setDEF("hanim_l_radial_styloid_pt")
HAnimSite109.setTranslation([0.1901,0.8645,-0.0415])

HAnimSegment105.addChildren(HAnimSite109)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.setName("l_olecranon_pt")
HAnimSite110.setDEF("hanim_l_olecranon_pt")
HAnimSite110.setTranslation([-0.1962,1.1375,-0.1123])

HAnimSegment105.addChildren(HAnimSite110)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setName("l_humeral_medial_epicondyle_pt")
HAnimSite111.setDEF("hanim_l_humeral_medial_epicondyle_pt")
HAnimSite111.setTranslation([0.1735,1.1272,-0.1113])

HAnimSegment105.addChildren(HAnimSite111)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.setName("l_radiale_pt")
HAnimSite112.setDEF("hanim_l_radiale_pt")
HAnimSite112.setTranslation([0.2182,1.1212,-0.1167])

HAnimSegment105.addChildren(HAnimSite112)

HAnimJoint104.addChildren(HAnimSegment105)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setName("l_radiocarpal")
HAnimJoint113.setDEF("hanim_l_radiocarpal")
HAnimJoint113.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint113.setStiffness([0,0,0])
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.setName("l_carpal")
HAnimSegment114.setDEF("hanim_l_carpal")
Transform115 = x3d.Transform()
Transform115.setTranslation([0.1984,0.8663,-0.0583])
Shape116 = x3d.Shape()
Shape116.setUSE("DiamondShape")

Transform115.addChildren(Shape116)

HAnimSegment114.addChildren(Transform115)
Transform117 = x3d.Transform()
Transform117.setDEF("l_hand_adjust")
Transform117.setCenter([0.213,0.811,-0.0338])
Transform117.setRotation([-0.06361,-0.9967,0.04988,1.333])
Transform117.setTranslation([0.1984,0.8663,-0.0583])

HAnimSegment114.addChildren(Transform117)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("l_hand_tip")
HAnimSite118.setDEF("hanim_l_hand_tip")
HAnimSite118.setTranslation([0.208,0.6731,-0.0491])

HAnimSegment114.addChildren(HAnimSite118)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.setName("l_metacarpal_phalanx_2_pt")
HAnimSite119.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite119.setTranslation([0.2009,0.8139,-0.0237])

HAnimSegment114.addChildren(HAnimSite119)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.setName("l_dactylion_pt")
HAnimSite120.setDEF("hanim_l_dactylion_pt")
HAnimSite120.setTranslation([0.2056,0.6743,-0.0482])

HAnimSegment114.addChildren(HAnimSite120)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setName("l_ulnar_styloid_pt")
HAnimSite121.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite121.setTranslation([-0.2142,0.8529,-0.0648])

HAnimSegment114.addChildren(HAnimSite121)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_metacarpal_phalanx_5_pt")
HAnimSite122.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite122.setTranslation([0.1929,0.786,-0.1122])

HAnimSegment114.addChildren(HAnimSite122)

HAnimJoint113.addChildren(HAnimSegment114)

HAnimJoint104.addChildren(HAnimJoint113)

HAnimJoint98.addChildren(HAnimJoint104)

HAnimJoint96.addChildren(HAnimJoint98)
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("r_shoulder")
HAnimJoint123.setDEF("hanim_r_shoulder")
HAnimJoint123.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint123.setStiffness([0,0,0])
HAnimSegment124 = x3d.HAnimSegment()
HAnimSegment124.setName("r_upperarm")
HAnimSegment124.setDEF("hanim_r_upperarm")
Transform125 = x3d.Transform()
Transform125.setTranslation([-0.1907,1.4407,-0.0325])
Shape126 = x3d.Shape()
Shape126.setUSE("DiamondShape")

Transform125.addChildren(Shape126)

HAnimSegment124.addChildren(Transform125)
Transform127 = x3d.Transform()
Transform127.setDEF("r_upperarm_adjust")
Transform127.setCenter([-0.182,1.22,-0.047])
Transform127.setRotation([1,0,0,0.0836])
Transform127.setTranslation([-0.1907,1.4407,-0.0325])

HAnimSegment124.addChildren(Transform127)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite128.setDEF("hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite128.setTranslation([-0.2224,1.1517,-0.1033])

HAnimSegment124.addChildren(HAnimSite128)

HAnimJoint123.addChildren(HAnimSegment124)
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.setName("r_elbow")
HAnimJoint129.setDEF("hanim_r_elbow")
HAnimJoint129.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint129.setStiffness([0,0,0])
HAnimSegment130 = x3d.HAnimSegment()
HAnimSegment130.setName("r_forearm")
HAnimSegment130.setDEF("hanim_r_forearm")
Transform131 = x3d.Transform()
Transform131.setTranslation([-0.1949,1.1388,-0.062])
Shape132 = x3d.Shape()
Shape132.setUSE("DiamondShape")

Transform131.addChildren(Shape132)

HAnimSegment130.addChildren(Transform131)
Transform133 = x3d.Transform()
Transform133.setDEF("r_forearm_adjust")
Transform133.setCenter([-0.198,0.961,-0.0397])
Transform133.setRotation([-1,0,0,0.1254])
Transform133.setTranslation([-0.1949,1.1388,-0.062])

HAnimSegment130.addChildren(Transform133)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.setName("r_radial_styloid_pt")
HAnimSite134.setDEF("hanim_r_radial_styloid_pt")
HAnimSite134.setTranslation([-0.1884,0.8676,-0.036])

HAnimSegment130.addChildren(HAnimSite134)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.setName("r_olecranon_pt")
HAnimSite135.setDEF("hanim_r_olecranon_pt")
HAnimSite135.setTranslation([-0.1907,1.1405,-0.1065])

HAnimSegment130.addChildren(HAnimSite135)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.setName("r_humeral_medial_epicondyle_pt")
HAnimSite136.setDEF("hanim_r_humeral_medial_epicondyle_pt")
HAnimSite136.setTranslation([-0.168,1.1298,-0.1062])

HAnimSegment130.addChildren(HAnimSite136)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("r_radiale_pt")
HAnimSite137.setDEF("hanim_r_radiale_pt")
HAnimSite137.setTranslation([-0.213,1.1305,-0.1091])

HAnimSegment130.addChildren(HAnimSite137)

HAnimJoint129.addChildren(HAnimSegment130)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.setName("r_radiocarpal")
HAnimJoint138.setDEF("hanim_r_radiocarpal")
HAnimJoint138.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint138.setStiffness([0,0,0])
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.setName("r_carpal")
HAnimSegment139.setDEF("hanim_r_carpal")
Transform140 = x3d.Transform()
Transform140.setTranslation([-0.1959,0.8694,-0.0521])
Shape141 = x3d.Shape()
Shape141.setUSE("DiamondShape")

Transform140.addChildren(Shape141)

HAnimSegment139.addChildren(Transform140)
Transform142 = x3d.Transform()
Transform142.setDEF("r_hand_adjust")
Transform142.setCenter([-0.217,0.811,-0.0338])
Transform142.setRotation([-0.09024,0.994,-0.0624,1.216])

HAnimSegment139.addChildren(Transform142)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setName("r_hand_tip")
HAnimSite143.setDEF("hanim_r_hand_tip")
HAnimSite143.setTranslation([-0.1969,0.6758,-0.0427])

HAnimSegment139.addChildren(HAnimSite143)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.setName("r_metacarpal_phalanx_2_pt")
HAnimSite144.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite144.setTranslation([-0.1977,0.8169,-0.0177])

HAnimSegment139.addChildren(HAnimSite144)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.setName("r_dactylion_pt")
HAnimSite145.setDEF("hanim_r_dactylion_pt")
HAnimSite145.setTranslation([-0.1941,0.6772,-0.0423])

HAnimSegment139.addChildren(HAnimSite145)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("r_ulnar_styloid_pt")
HAnimSite146.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite146.setTranslation([-0.2117,0.8562,-0.0584])

HAnimSegment139.addChildren(HAnimSite146)
HAnimSite147 = x3d.HAnimSite()
HAnimSite147.setName("r_metacarpal_phalanx_5_pt")
HAnimSite147.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite147.setTranslation([-0.1929,0.789,-0.1064])

HAnimSegment139.addChildren(HAnimSite147)

HAnimJoint138.addChildren(HAnimSegment139)

HAnimJoint129.addChildren(HAnimJoint138)

HAnimJoint123.addChildren(HAnimJoint129)

HAnimJoint96.addChildren(HAnimJoint123)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("vc4")
HAnimJoint148.setDEF("hanim_vc4")
HAnimJoint148.setCenter([0,1.43,-0.0458])
HAnimJoint148.setStiffness([0,0,0])
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.setName("c4")
HAnimSegment149.setDEF("hanim_c4")

HAnimJoint148.addChildren(HAnimSegment149)

HAnimJoint96.addChildren(HAnimJoint148)

HAnimJoint37.addChildren(HAnimJoint96)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setName("vl5")
HAnimJoint150.setDEF("hanim_vl5")
HAnimJoint150.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint150.setStiffness([0,0,0])
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setName("skullbase")
HAnimJoint151.setDEF("hanim_skullbase")
HAnimJoint151.setCenter([0.0044,1.6209,0.0236])
HAnimJoint151.setStiffness([0,0,0])
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.setName("skull")
HAnimSegment152.setDEF("hanim_skull")
Transform153 = x3d.Transform()
Transform153.setTranslation([0.0044,1.6209,0.0236])
Shape154 = x3d.Shape()
Shape154.setUSE("DiamondShape")

Transform153.addChildren(Shape154)

HAnimSegment152.addChildren(Transform153)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.setName("skull_vertex_tip")
HAnimSite155.setDEF("hanim_skull_vertex_tip")
HAnimSite155.setTranslation([0.005,1.7504,0.0055])

HAnimSegment152.addChildren(HAnimSite155)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.setName("sellion_pt")
HAnimSite156.setDEF("hanim_sellion_pt")
HAnimSite156.setTranslation([0.0058,1.6316,0.0852])

HAnimSegment152.addChildren(HAnimSite156)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.setName("r_infraorbitale_pt")
HAnimSite157.setDEF("hanim_r_infraorbitale_pt")
HAnimSite157.setTranslation([-0.0237,1.6171,0.0752])

HAnimSegment152.addChildren(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.setName("l_infraorbitale_pt")
HAnimSite158.setDEF("hanim_l_infraorbitale_pt")
HAnimSite158.setTranslation([0.0341,1.6171,0.0752])

HAnimSegment152.addChildren(HAnimSite158)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.setName("supramenton_pt")
HAnimSite159.setDEF("hanim_supramenton_pt")
HAnimSite159.setTranslation([0.0061,1.541,0.0805])

HAnimSegment152.addChildren(HAnimSite159)
HAnimSite160 = x3d.HAnimSite()
HAnimSite160.setName("r_tragion_pt")
HAnimSite160.setDEF("hanim_r_tragion_pt")
HAnimSite160.setTranslation([-0.0646,1.6347,0.0302])

HAnimSegment152.addChildren(HAnimSite160)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("r_gonion_pt")
HAnimSite161.setDEF("hanim_r_gonion_pt")
HAnimSite161.setTranslation([-0.052,1.5529,0.0347])

HAnimSegment152.addChildren(HAnimSite161)
HAnimSite162 = x3d.HAnimSite()
HAnimSite162.setName("l_tragion_pt")
HAnimSite162.setDEF("hanim_l_tragion_pt")
HAnimSite162.setTranslation([0.0739,1.6348,0.0282])

HAnimSegment152.addChildren(HAnimSite162)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.setName("l_gonion_pt")
HAnimSite163.setDEF("hanim_l_gonion_pt")
HAnimSite163.setTranslation([0.0631,1.553,0.033])

HAnimSegment152.addChildren(HAnimSite163)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setName("nuchale_pt")
HAnimSite164.setDEF("hanim_nuchale_pt")
HAnimSite164.setTranslation([0.0039,1.5972,-0.0796])

HAnimSegment152.addChildren(HAnimSite164)

HAnimJoint151.addChildren(HAnimSegment152)

HAnimJoint150.addChildren(HAnimJoint151)

HAnimJoint37.addChildren(HAnimJoint150)

HAnimHumanoid30.setSkeleton(HAnimJoint37)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.setName("DiamondManLOA1_view")
HAnimSite165.setDEF("hanim_DiamondManLOA1_view")
Viewpoint166 = x3d.Viewpoint()
Viewpoint166.setDEF("InclinedView")
Viewpoint166.setDescription("Inclined View")
Viewpoint166.setOrientation([-0.113,0.993,0.0347,0.671])
Viewpoint166.setPosition([1.62,1.05,2.06])

HAnimSite165.addChildren(Viewpoint166)
Viewpoint167 = x3d.Viewpoint()
Viewpoint167.setDEF("FrontView")
Viewpoint167.setDescription("Front View")
Viewpoint167.setPosition([0,0.854,2.57665])

HAnimSite165.addChildren(Viewpoint167)
Viewpoint168 = x3d.Viewpoint()
Viewpoint168.setDEF("SideView")
Viewpoint168.setDescription("Side View")
Viewpoint168.setOrientation([0,1,0,1.57079])
Viewpoint168.setPosition([2.5929,0.854,0])

HAnimSite165.addChildren(Viewpoint168)
Viewpoint169 = x3d.Viewpoint()
Viewpoint169.setDEF("TopView")
Viewpoint169.setDescription("Top View")
Viewpoint169.setOrientation([1,0,0,-1.57079])
Viewpoint169.setPosition([0,3.4495,0])

HAnimSite165.addChildren(Viewpoint169)

HAnimHumanoid30.addViewpoints(HAnimSite165)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.setUSE("hanim_humanoid_root")

HAnimHumanoid30.addJoints(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.setUSE("hanim_sacroiliac")

HAnimHumanoid30.addJoints(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setUSE("hanim_vl1")

HAnimHumanoid30.addJoints(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.setUSE("hanim_vc4")

HAnimHumanoid30.addJoints(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setUSE("hanim_skullbase")

HAnimHumanoid30.addJoints(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setUSE("hanim_vl5")

HAnimHumanoid30.addJoints(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setUSE("hanim_l_elbow")

HAnimHumanoid30.addJoints(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.setUSE("hanim_r_elbow")

HAnimHumanoid30.addJoints(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.setUSE("hanim_l_hip")

HAnimHumanoid30.addJoints(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setUSE("hanim_r_hip")

HAnimHumanoid30.addJoints(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setUSE("hanim_l_knee")

HAnimHumanoid30.addJoints(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setUSE("hanim_r_knee")

HAnimHumanoid30.addJoints(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid30.addJoints(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid30.addJoints(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setUSE("hanim_l_radiocarpal")

HAnimHumanoid30.addJoints(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setUSE("hanim_r_radiocarpal")

HAnimHumanoid30.addJoints(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.setUSE("hanim_l_shoulder")

HAnimHumanoid30.addJoints(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setUSE("hanim_r_shoulder")

HAnimHumanoid30.addJoints(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.setUSE("hanim_l_talocrural")

HAnimHumanoid30.addJoints(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setUSE("hanim_r_talocrural")

HAnimHumanoid30.addJoints(HAnimJoint189)
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.setUSE("hanim_pelvis")

HAnimHumanoid30.addSegments(HAnimSegment190)
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.setUSE("hanim_l1")

HAnimHumanoid30.addSegments(HAnimSegment191)
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.setUSE("hanim_c4")

HAnimHumanoid30.addSegments(HAnimSegment192)
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.setUSE("hanim_skull")

HAnimHumanoid30.addSegments(HAnimSegment193)
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.setUSE("hanim_l_calf")

HAnimHumanoid30.addSegments(HAnimSegment194)
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.setUSE("hanim_r_calf")

HAnimHumanoid30.addSegments(HAnimSegment195)
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.setUSE("hanim_l_carpal")

HAnimHumanoid30.addSegments(HAnimSegment196)
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.setUSE("hanim_r_carpal")

HAnimHumanoid30.addSegments(HAnimSegment197)
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.setUSE("hanim_l_forearm")

HAnimHumanoid30.addSegments(HAnimSegment198)
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.setUSE("hanim_r_forearm")

HAnimHumanoid30.addSegments(HAnimSegment199)
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.setUSE("hanim_l_talus")

HAnimHumanoid30.addSegments(HAnimSegment200)
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.setUSE("hanim_r_talus")

HAnimHumanoid30.addSegments(HAnimSegment201)
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid30.addSegments(HAnimSegment202)
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid30.addSegments(HAnimSegment203)
HAnimSegment204 = x3d.HAnimSegment()
HAnimSegment204.setUSE("hanim_l_thigh")

HAnimHumanoid30.addSegments(HAnimSegment204)
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.setUSE("hanim_r_thigh")

HAnimHumanoid30.addSegments(HAnimSegment205)
HAnimSegment206 = x3d.HAnimSegment()
HAnimSegment206.setUSE("hanim_l_upperarm")

HAnimHumanoid30.addSegments(HAnimSegment206)
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setUSE("hanim_r_upperarm")

HAnimHumanoid30.addSegments(HAnimSegment207)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.setUSE("hanim_skull_vertex_tip")

HAnimHumanoid30.addSites(HAnimSite208)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.setUSE("hanim_sellion_pt")

HAnimHumanoid30.addSites(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setUSE("hanim_supramenton_pt")

HAnimHumanoid30.addSites(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.setUSE("hanim_nuchale_pt")

HAnimHumanoid30.addSites(HAnimSite211)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid30.addSites(HAnimSite212)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid30.addSites(HAnimSite213)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid30.addSites(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid30.addSites(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setUSE("hanim_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setUSE("hanim_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.setUSE("hanim_l_femoral_medial_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite218)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setUSE("hanim_r_femoral_medial_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite219)
HAnimSite220 = x3d.HAnimSite()
HAnimSite220.setUSE("hanim_r_gonion_pt")

HAnimHumanoid30.addSites(HAnimSite220)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.setUSE("hanim_l_gonion_pt")

HAnimHumanoid30.addSites(HAnimSite221)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setUSE("hanim_l_hand_tip")

HAnimHumanoid30.addSites(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.setUSE("hanim_r_hand_tip")

HAnimHumanoid30.addSites(HAnimSite223)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.setUSE("hanim_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite224)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.setUSE("hanim_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite225)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setUSE("hanim_l_humeral_medial_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite226)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.setUSE("hanim_r_humeral_medial_epicondyle_pt")

HAnimHumanoid30.addSites(HAnimSite227)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid30.addSites(HAnimSite228)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid30.addSites(HAnimSite229)
HAnimSite230 = x3d.HAnimSite()
HAnimSite230.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid30.addSites(HAnimSite230)
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid30.addSites(HAnimSite231)
HAnimSite232 = x3d.HAnimSite()
HAnimSite232.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid30.addSites(HAnimSite232)
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid30.addSites(HAnimSite233)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid30.addSites(HAnimSite234)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid30.addSites(HAnimSite235)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid30.addSites(HAnimSite236)
HAnimSite237 = x3d.HAnimSite()
HAnimSite237.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid30.addSites(HAnimSite237)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid30.addSites(HAnimSite238)
HAnimSite239 = x3d.HAnimSite()
HAnimSite239.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid30.addSites(HAnimSite239)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid30.addSites(HAnimSite240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid30.addSites(HAnimSite241)
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid30.addSites(HAnimSite242)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid30.addSites(HAnimSite243)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.setUSE("hanim_l_middistal_tip")

HAnimHumanoid30.addSites(HAnimSite244)
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.setUSE("hanim_r_middistal_tip")

HAnimHumanoid30.addSites(HAnimSite245)
HAnimSite246 = x3d.HAnimSite()
HAnimSite246.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid30.addSites(HAnimSite246)
HAnimSite247 = x3d.HAnimSite()
HAnimSite247.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid30.addSites(HAnimSite247)
HAnimSite248 = x3d.HAnimSite()
HAnimSite248.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid30.addSites(HAnimSite248)
HAnimSite249 = x3d.HAnimSite()
HAnimSite249.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid30.addSites(HAnimSite249)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.setUSE("hanim_l_radiale_pt")

HAnimHumanoid30.addSites(HAnimSite250)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.setUSE("hanim_r_radiale_pt")

HAnimHumanoid30.addSites(HAnimSite251)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid30.addSites(HAnimSite252)
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid30.addSites(HAnimSite253)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.setUSE("hanim_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid30.addSites(HAnimSite254)
HAnimSite255 = x3d.HAnimSite()
HAnimSite255.setUSE("hanim_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid30.addSites(HAnimSite255)
HAnimSite256 = x3d.HAnimSite()
HAnimSite256.setUSE("hanim_r_tragion_pt")

HAnimHumanoid30.addSites(HAnimSite256)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.setUSE("hanim_l_tragion_pt")

HAnimHumanoid30.addSites(HAnimSite257)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid30.addSites(HAnimSite258)
HAnimSite259 = x3d.HAnimSite()
HAnimSite259.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid30.addSites(HAnimSite259)

Scene26.addChildren(HAnimHumanoid30)

X3D0.setScene(Scene26)
X3D0.toFileX3D("../data/DiamondManLOA1_RoundTrip.x3d")

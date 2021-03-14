import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("H-Anim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("DiamondManLOA_1.x3d")

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
meta8.setContent("20 February 2021")

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
meta12.setName("TODO")
meta12.setContent("can X3dTidy sort top-level USE nodes by node type?")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl")

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
meta22.setName("warning")
meta22.setContent("need to fix HAnimHumanoid metadata form")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("identifier")
meta24.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("generator")
meta25.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("generator")
meta26.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("license")
meta27.setContent("../license.html")

head1.addMeta(meta27)

X3D0.setHead(head1)
Scene28 = x3d.Scene()
WorldInfo29 = x3d.WorldInfo()
WorldInfo29.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])
WorldInfo29.setTitle("HANIM 1.1 Default Joint Centers, LOA1")

Scene28.addChildren(WorldInfo29)
NavigationInfo30 = x3d.NavigationInfo()
NavigationInfo30.setSpeed(1.5)

Scene28.addChildren(NavigationInfo30)
Viewpoint31 = x3d.Viewpoint()
Viewpoint31.setCenterOfRotation([0,1,0])
Viewpoint31.setDescription("Diamond Man, LOA 1")
Viewpoint31.setPosition([0,1,3])

Scene28.addChildren(Viewpoint31)
HAnimHumanoid32 = x3d.HAnimHumanoid()
HAnimHumanoid32.setName("humanoid")
HAnimHumanoid32.setDEF("hanim_humanoid")
HAnimHumanoid32.setVersion("1.0")
#HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
MetadataSet33 = x3d.MetadataSet()
MetadataSet33.setName("HAnimHumanoid.info")
MetadataSet33.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString34 = x3d.MetadataString()
MetadataString34.setName("authorEmail")
MetadataString34.setValue(["beitler@graphics.cis.upenn.edu beitler@acm.org"])

MetadataSet33.setValue(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.setName("authorName")
MetadataString35.setValue(["Matthew T. Beitler"])

MetadataSet33.addValue(MetadataString35)
MetadataString36 = x3d.MetadataString()
MetadataString36.setName("copyright")
MetadataString36.setValue(["Copyright 1999 Matthew T. Beitler"])

MetadataSet33.addValue(MetadataString36)
MetadataString37 = x3d.MetadataString()
MetadataString37.setName("humanoidVersion")
MetadataString37.setValue(["JointCenters 1.1 LOA1"])

MetadataSet33.addValue(MetadataString37)
MetadataString38 = x3d.MetadataString()
MetadataString38.setName("usageRestrictions")
MetadataString38.setValue(["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])

MetadataSet33.addValue(MetadataString38)

HAnimHumanoid32.setMetadata(MetadataSet33)
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setName("humanoid_root")
HAnimJoint39.setDEF("hanim_humanoid_root")
HAnimJoint39.setCenter([0,0.824,0.0277])
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.setName("sacroiliac")
HAnimJoint40.setDEF("hanim_sacroiliac")
HAnimJoint40.setCenter([0,0.9149,0.0016])
HAnimSegment41 = x3d.HAnimSegment()
HAnimSegment41.setName("pelvis")
HAnimSegment41.setDEF("hanim_pelvis")
Transform42 = x3d.Transform()
Transform42.setTranslation([0,0.9149,0.0016])
Shape43 = x3d.Shape()
Shape43.setDEF("DiamondShape")
IndexedFaceSet44 = x3d.IndexedFaceSet()
IndexedFaceSet44.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet44.setCreaseAngle(0.5)
Coordinate45 = x3d.Coordinate()
Coordinate45.setDEF("points")
Coordinate45.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet44.setCoord(Coordinate45)

Shape43.setGeometry(IndexedFaceSet44)
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setDiffuseColor([1,1,0])

Appearance46.setMaterial(Material47)

Shape43.setAppearance(Appearance46)

Transform42.addChildren(Shape43)

HAnimSegment41.addChildren(Transform42)

HAnimJoint40.addChildren(HAnimSegment41)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setName("l_hip")
HAnimJoint48.setDEF("hanim_l_hip")
HAnimJoint48.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.setName("l_thigh")
HAnimSegment49.setDEF("hanim_l_thigh")
Transform50 = x3d.Transform()
Transform50.setTranslation([0.0961,0.9124,-0.0001])
Shape51 = x3d.Shape()
Shape51.setUSE("DiamondShape")

Transform50.addChildren(Shape51)

HAnimSegment49.addChildren(Transform50)
HAnimSite52 = x3d.HAnimSite()
HAnimSite52.setName("l_knee_crease_pt")
HAnimSite52.setDEF("hanim_l_knee_crease_pt")
HAnimSite52.setTranslation([0.0993,0.4881,-0.0309])

HAnimSegment49.addChildren(HAnimSite52)
HAnimSite53 = x3d.HAnimSite()
HAnimSite53.setName("l_femoral_lateral_epicn_pt")
HAnimSite53.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite53.setTranslation([0.1598,0.4967,0.0297])

HAnimSegment49.addChildren(HAnimSite53)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.setName("l_femoral_medial_epicn_pt")
HAnimSite54.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite54.setTranslation([0.0398,0.4946,0.0303])

HAnimSegment49.addChildren(HAnimSite54)

HAnimJoint48.addChildren(HAnimSegment49)
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.setName("l_knee")
HAnimJoint55.setDEF("hanim_l_knee")
HAnimJoint55.setCenter([0.104,0.4867,0.0308])
HAnimSegment56 = x3d.HAnimSegment()
HAnimSegment56.setName("l_calf")
HAnimSegment56.setDEF("hanim_l_calf")
Transform57 = x3d.Transform()
Transform57.setTranslation([0.104,0.4867,0.0308])
Shape58 = x3d.Shape()
Shape58.setUSE("DiamondShape")

Transform57.addChildren(Shape58)

HAnimSegment56.addChildren(Transform57)

HAnimJoint55.addChildren(HAnimSegment56)
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.setName("l_ankle")
HAnimJoint59.setDEF("hanim_l_ankle")
HAnimJoint59.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment60 = x3d.HAnimSegment()
HAnimSegment60.setName("l_hindfoot")
HAnimSegment60.setDEF("hanim_l_hindfoot")
Transform61 = x3d.Transform()
Transform61.setTranslation([0.1101,0.0656,-0.0736])
Shape62 = x3d.Shape()
Shape62.setUSE("DiamondShape")

Transform61.addChildren(Shape62)

HAnimSegment60.addChildren(Transform61)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.setName("l_lateral_malleolus_pt")
HAnimSite63.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite63.setTranslation([0.1308,0.0597,-0.1032])

HAnimSegment60.addChildren(HAnimSite63)
HAnimSite64 = x3d.HAnimSite()
HAnimSite64.setName("l_medial_malleolus_pt")
HAnimSite64.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite64.setTranslation([0.089,0.0716,-0.0881])

HAnimSegment60.addChildren(HAnimSite64)
HAnimSite65 = x3d.HAnimSite()
HAnimSite65.setName("l_sphyrion_pt")
HAnimSite65.setDEF("hanim_l_sphyrion_pt")
HAnimSite65.setTranslation([0.089,0.0575,-0.0943])

HAnimSegment60.addChildren(HAnimSite65)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.setName("l_calcaneous_post_pt")
HAnimSite66.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite66.setTranslation([0.0974,0.0259,-0.1171])

HAnimSegment60.addChildren(HAnimSite66)

HAnimJoint59.addChildren(HAnimSegment60)
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.setName("l_midtarsal")
HAnimJoint67.setDEF("hanim_l_midtarsal")
HAnimJoint67.setCenter([0.1086,0.0001,0.0368])
HAnimSegment68 = x3d.HAnimSegment()
HAnimSegment68.setName("l_middistal")
HAnimSegment68.setDEF("hanim_l_middistal")
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_middistal_tip")
HAnimSite69.setDEF("hanim_l_middistal_tip")
HAnimSite69.setTranslation([0.1354,0.0016,0.1476])

HAnimSegment68.addChildren(HAnimSite69)
HAnimSite70 = x3d.HAnimSite()
HAnimSite70.setName("l_metatarsal_pha5_pt")
HAnimSite70.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite70.setTranslation([0.1825,0.007,0.0928])

HAnimSegment68.addChildren(HAnimSite70)
HAnimSite71 = x3d.HAnimSite()
HAnimSite71.setName("l_metatarsal_pha1_pt")
HAnimSite71.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite71.setTranslation([0.0816,0.0232,0.0106])

HAnimSegment68.addChildren(HAnimSite71)
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.setName("l_digit2_pt")
HAnimSite72.setDEF("hanim_l_digit2_pt")
HAnimSite72.setTranslation([0.1195,0.0079,0.1433])

HAnimSegment68.addChildren(HAnimSite72)

HAnimJoint67.addChildren(HAnimSegment68)

HAnimJoint59.addChildren(HAnimJoint67)

HAnimJoint55.addChildren(HAnimJoint59)

HAnimJoint48.addChildren(HAnimJoint55)

HAnimJoint40.addChildren(HAnimJoint48)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.setName("r_hip")
HAnimJoint73.setDEF("hanim_r_hip")
HAnimJoint73.setCenter([-0.095,0.9171,0.0029])
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.setName("r_thigh")
HAnimSegment74.setDEF("hanim_r_thigh")
Transform75 = x3d.Transform()
Transform75.setTranslation([-0.095,0.9171,0.0029])
Shape76 = x3d.Shape()
Shape76.setUSE("DiamondShape")

Transform75.addChildren(Shape76)

HAnimSegment74.addChildren(Transform75)
HAnimSite77 = x3d.HAnimSite()
HAnimSite77.setName("r_knee_crease_pt")
HAnimSite77.setDEF("hanim_r_knee_crease_pt")
HAnimSite77.setTranslation([-0.0825,0.4932,-0.0326])

HAnimSegment74.addChildren(HAnimSite77)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("r_femoral_lateral_epicn_pt")
HAnimSite78.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite78.setTranslation([-0.1421,0.4992,0.031])

HAnimSegment74.addChildren(HAnimSite78)
HAnimSite79 = x3d.HAnimSite()
HAnimSite79.setName("r_femoral_medial_epicn_pt")
HAnimSite79.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite79.setTranslation([-0.0221,0.5014,0.0289])

HAnimSegment74.addChildren(HAnimSite79)

HAnimJoint73.addChildren(HAnimSegment74)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setName("r_knee")
HAnimJoint80.setDEF("hanim_r_knee")
HAnimJoint80.setCenter([-0.0867,0.4913,0.0318])
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.setName("r_calf")
HAnimSegment81.setDEF("hanim_r_calf")
Transform82 = x3d.Transform()
Transform82.setTranslation([-0.0867,0.4913,0.0318])
Shape83 = x3d.Shape()
Shape83.setUSE("DiamondShape")

Transform82.addChildren(Shape83)

HAnimSegment81.addChildren(Transform82)

HAnimJoint80.addChildren(HAnimSegment81)
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.setName("r_ankle")
HAnimJoint84.setDEF("hanim_r_ankle")
HAnimJoint84.setCenter([-0.0801,0.0712,-0.0766])
HAnimSegment85 = x3d.HAnimSegment()
HAnimSegment85.setName("r_hindfoot")
HAnimSegment85.setDEF("hanim_r_hindfoot")
Transform86 = x3d.Transform()
Transform86.setTranslation([-0.0801,0.0712,-0.0766])
Shape87 = x3d.Shape()
Shape87.setUSE("DiamondShape")

Transform86.addChildren(Shape87)

HAnimSegment85.addChildren(Transform86)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.setName("r_lateral_malleolus_pt")
HAnimSite88.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite88.setTranslation([-0.1006,0.0658,-0.1075])

HAnimSegment85.addChildren(HAnimSite88)
HAnimSite89 = x3d.HAnimSite()
HAnimSite89.setName("r_medial_malleolus_pt")
HAnimSite89.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite89.setTranslation([-0.0591,0.076,-0.0928])

HAnimSegment85.addChildren(HAnimSite89)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("r_sphyrion_pt")
HAnimSite90.setDEF("hanim_r_sphyrion_pt")
HAnimSite90.setTranslation([-0.0603,0.061,-0.1002])

HAnimSegment85.addChildren(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.setName("r_calcaneous_post_pt")
HAnimSite91.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite91.setTranslation([-0.0692,0.0297,-0.1221])

HAnimSegment85.addChildren(HAnimSite91)

HAnimJoint84.addChildren(HAnimSegment85)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.setName("r_midtarsal")
HAnimJoint92.setDEF("hanim_r_midtarsal")
HAnimJoint92.setCenter([-0.0801,0,0.0368])
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.setName("r_middistal")
HAnimSegment93.setDEF("hanim_r_middistal")
HAnimSite94 = x3d.HAnimSite()
HAnimSite94.setName("r_middistal_tip")
HAnimSite94.setDEF("hanim_r_middistal_tip")
HAnimSite94.setTranslation([-0.1043,-0.0227,0.145])

HAnimSegment93.addChildren(HAnimSite94)
HAnimSite95 = x3d.HAnimSite()
HAnimSite95.setName("r_metatarsal_pha5_pt")
HAnimSite95.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite95.setTranslation([-0.1523,0.0166,0.0895])

HAnimSegment93.addChildren(HAnimSite95)
HAnimSite96 = x3d.HAnimSite()
HAnimSite96.setName("r_metatarsal_pha1_pt")
HAnimSite96.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite96.setTranslation([-0.0521,0.026,0.0127])

HAnimSegment93.addChildren(HAnimSite96)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("r_digit2_pt")
HAnimSite97.setDEF("hanim_r_digit2_pt")
HAnimSite97.setTranslation([-0.0883,0.0134,0.1383])

HAnimSegment93.addChildren(HAnimSite97)

HAnimJoint92.addChildren(HAnimSegment93)

HAnimJoint84.addChildren(HAnimJoint92)

HAnimJoint80.addChildren(HAnimJoint84)

HAnimJoint73.addChildren(HAnimJoint80)

HAnimJoint40.addChildren(HAnimJoint73)

HAnimJoint39.addChildren(HAnimJoint40)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("vl1")
HAnimJoint98.setDEF("hanim_vl1")
HAnimJoint98.setCenter([-0.00405,1.07,-0.0275])
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setName("l1")
HAnimSegment99.setDEF("hanim_l1")

HAnimJoint98.addChildren(HAnimSegment99)
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.setName("l_shoulder")
HAnimJoint100.setDEF("hanim_l_shoulder")
HAnimJoint100.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment101 = x3d.HAnimSegment()
HAnimSegment101.setName("l_upperarm")
HAnimSegment101.setDEF("hanim_l_upperarm")
Transform102 = x3d.Transform()
Transform102.setTranslation([0.2029,1.4376,-0.0387])
Shape103 = x3d.Shape()
Shape103.setUSE("DiamondShape")

Transform102.addChildren(Shape103)

HAnimSegment101.addChildren(Transform102)
Transform104 = x3d.Transform()
Transform104.setDEF("l_upperarm_adjust")
Transform104.setCenter([0.182,1.22,-0.047])
Transform104.setRotation([1,0,0,0.119])
Transform104.setTranslation([0.2029,1.4376,-0.0387])

HAnimSegment101.addChildren(Transform104)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.setName("l_humeral_lateral_epicn_pt")
HAnimSite105.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite105.setTranslation([0.228,1.1482,-0.11])

HAnimSegment101.addChildren(HAnimSite105)

HAnimJoint100.addChildren(HAnimSegment101)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.setName("l_elbow")
HAnimJoint106.setDEF("hanim_l_elbow")
HAnimJoint106.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.setName("l_forearm")
HAnimSegment107.setDEF("hanim_l_forearm")
Transform108 = x3d.Transform()
Transform108.setTranslation([0.2014,1.1357,-0.0682])
Shape109 = x3d.Shape()
Shape109.setUSE("DiamondShape")

Transform108.addChildren(Shape109)

HAnimSegment107.addChildren(Transform108)
Transform110 = x3d.Transform()
Transform110.setDEF("l_forearm_adjust")
Transform110.setCenter([0.198,0.961,-0.0405])
Transform110.setRotation([-1,0,0,0.1])
Transform110.setTranslation([0.2014,1.1357,-0.0682])

HAnimSegment107.addChildren(Transform110)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setName("l_radial_styloid_pt")
HAnimSite111.setDEF("hanim_l_radial_styloid_pt")
HAnimSite111.setTranslation([0.1901,0.8645,-0.0415])

HAnimSegment107.addChildren(HAnimSite111)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.setName("l_olecranon_pt")
HAnimSite112.setDEF("hanim_l_olecranon_pt")
HAnimSite112.setTranslation([-0.1962,1.1375,-0.1123])

HAnimSegment107.addChildren(HAnimSite112)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("l_humeral_medial_epicn_pt")
HAnimSite113.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite113.setTranslation([0.1735,1.1272,-0.1113])

HAnimSegment107.addChildren(HAnimSite113)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("l_radiale_pt")
HAnimSite114.setDEF("hanim_l_radiale_pt")
HAnimSite114.setTranslation([0.2182,1.1212,-0.1167])

HAnimSegment107.addChildren(HAnimSite114)

HAnimJoint106.addChildren(HAnimSegment107)
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.setName("l_wrist")
HAnimJoint115.setDEF("hanim_l_wrist")
HAnimJoint115.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment116 = x3d.HAnimSegment()
HAnimSegment116.setName("l_hand")
HAnimSegment116.setDEF("hanim_l_hand")
Transform117 = x3d.Transform()
Transform117.setTranslation([0.1984,0.8663,-0.0583])
Shape118 = x3d.Shape()
Shape118.setUSE("DiamondShape")

Transform117.addChildren(Shape118)

HAnimSegment116.addChildren(Transform117)
Transform119 = x3d.Transform()
Transform119.setDEF("l_hand_adjust")
Transform119.setCenter([0.213,0.811,-0.0338])
Transform119.setRotation([-0.06361,-0.9967,0.04988,1.333])
Transform119.setTranslation([0.1984,0.8663,-0.0583])

HAnimSegment116.addChildren(Transform119)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.setName("l_hand_tip")
HAnimSite120.setDEF("hanim_l_hand_tip")
HAnimSite120.setTranslation([0.208,0.6731,-0.0491])

HAnimSegment116.addChildren(HAnimSite120)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setName("l_metacarpal_pha2_pt")
HAnimSite121.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite121.setTranslation([0.2009,0.8139,-0.0237])

HAnimSegment116.addChildren(HAnimSite121)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_dactylion_pt")
HAnimSite122.setDEF("hanim_l_dactylion_pt")
HAnimSite122.setTranslation([0.2056,0.6743,-0.0482])

HAnimSegment116.addChildren(HAnimSite122)
HAnimSite123 = x3d.HAnimSite()
HAnimSite123.setName("l_ulnar_styloid_pt")
HAnimSite123.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite123.setTranslation([-0.2142,0.8529,-0.0648])

HAnimSegment116.addChildren(HAnimSite123)
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.setName("l_metacarpal_pha5_pt")
HAnimSite124.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite124.setTranslation([0.1929,0.786,-0.1122])

HAnimSegment116.addChildren(HAnimSite124)

HAnimJoint115.addChildren(HAnimSegment116)

HAnimJoint106.addChildren(HAnimJoint115)

HAnimJoint100.addChildren(HAnimJoint106)

HAnimJoint98.addChildren(HAnimJoint100)
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.setName("r_shoulder")
HAnimJoint125.setDEF("hanim_r_shoulder")
HAnimJoint125.setCenter([-0.1907,1.4407,-0.0325])
HAnimSegment126 = x3d.HAnimSegment()
HAnimSegment126.setName("r_upperarm")
HAnimSegment126.setDEF("hanim_r_upperarm")
Transform127 = x3d.Transform()
Transform127.setTranslation([-0.1907,1.4407,-0.0325])
Shape128 = x3d.Shape()
Shape128.setUSE("DiamondShape")

Transform127.addChildren(Shape128)

HAnimSegment126.addChildren(Transform127)
Transform129 = x3d.Transform()
Transform129.setDEF("r_upperarm_adjust")
Transform129.setCenter([-0.182,1.22,-0.047])
Transform129.setRotation([1,0,0,0.0836])
Transform129.setTranslation([-0.1907,1.4407,-0.0325])

HAnimSegment126.addChildren(Transform129)
HAnimSite130 = x3d.HAnimSite()
HAnimSite130.setName("r_humeral_lateral_epicn_pt")
HAnimSite130.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite130.setTranslation([-0.2224,1.1517,-0.1033])

HAnimSegment126.addChildren(HAnimSite130)

HAnimJoint125.addChildren(HAnimSegment126)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.setName("r_elbow")
HAnimJoint131.setDEF("hanim_r_elbow")
HAnimJoint131.setCenter([-0.1949,1.1388,-0.062])
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.setName("r_forearm")
HAnimSegment132.setDEF("hanim_r_forearm")
Transform133 = x3d.Transform()
Transform133.setTranslation([-0.1949,1.1388,-0.062])
Shape134 = x3d.Shape()
Shape134.setUSE("DiamondShape")

Transform133.addChildren(Shape134)

HAnimSegment132.addChildren(Transform133)
Transform135 = x3d.Transform()
Transform135.setDEF("r_forearm_adjust")
Transform135.setCenter([-0.198,0.961,-0.0397])
Transform135.setRotation([-1,0,0,0.1254])
Transform135.setTranslation([-0.1949,1.1388,-0.062])

HAnimSegment132.addChildren(Transform135)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.setName("r_radial_styloid_pt")
HAnimSite136.setDEF("hanim_r_radial_styloid_pt")
HAnimSite136.setTranslation([-0.1884,0.8676,-0.036])

HAnimSegment132.addChildren(HAnimSite136)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("r_olecranon_pt")
HAnimSite137.setDEF("hanim_r_olecranon_pt")
HAnimSite137.setTranslation([-0.1907,1.1405,-0.1065])

HAnimSegment132.addChildren(HAnimSite137)
HAnimSite138 = x3d.HAnimSite()
HAnimSite138.setName("r_humeral_medial_epicn_pt")
HAnimSite138.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite138.setTranslation([-0.168,1.1298,-0.1062])

HAnimSegment132.addChildren(HAnimSite138)
HAnimSite139 = x3d.HAnimSite()
HAnimSite139.setName("r_radiale_pt")
HAnimSite139.setDEF("hanim_r_radiale_pt")
HAnimSite139.setTranslation([-0.213,1.1305,-0.1091])

HAnimSegment132.addChildren(HAnimSite139)

HAnimJoint131.addChildren(HAnimSegment132)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setName("r_wrist")
HAnimJoint140.setDEF("hanim_r_wrist")
HAnimJoint140.setCenter([-0.1959,0.8694,-0.0521])
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.setName("r_hand")
HAnimSegment141.setDEF("hanim_r_hand")
Transform142 = x3d.Transform()
Transform142.setTranslation([-0.1959,0.8694,-0.0521])
Shape143 = x3d.Shape()
Shape143.setUSE("DiamondShape")

Transform142.addChildren(Shape143)

HAnimSegment141.addChildren(Transform142)
Transform144 = x3d.Transform()
Transform144.setDEF("r_hand_adjust")
Transform144.setCenter([-0.217,0.811,-0.0338])
Transform144.setRotation([-0.09024,0.994,-0.0624,1.216])

HAnimSegment141.addChildren(Transform144)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.setName("r_hand_tip")
HAnimSite145.setDEF("hanim_r_hand_tip")
HAnimSite145.setTranslation([-0.1969,0.6758,-0.0427])

HAnimSegment141.addChildren(HAnimSite145)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("r_metacarpal_pha2_pt")
HAnimSite146.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite146.setTranslation([-0.1977,0.8169,-0.0177])

HAnimSegment141.addChildren(HAnimSite146)
HAnimSite147 = x3d.HAnimSite()
HAnimSite147.setName("r_dactylion_pt")
HAnimSite147.setDEF("hanim_r_dactylion_pt")
HAnimSite147.setTranslation([-0.1941,0.6772,-0.0423])

HAnimSegment141.addChildren(HAnimSite147)
HAnimSite148 = x3d.HAnimSite()
HAnimSite148.setName("r_ulnar_styloid_pt")
HAnimSite148.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite148.setTranslation([-0.2117,0.8562,-0.0584])

HAnimSegment141.addChildren(HAnimSite148)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.setName("r_metacarpal_pha5_pt")
HAnimSite149.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite149.setTranslation([-0.1929,0.789,-0.1064])

HAnimSegment141.addChildren(HAnimSite149)

HAnimJoint140.addChildren(HAnimSegment141)

HAnimJoint131.addChildren(HAnimJoint140)

HAnimJoint125.addChildren(HAnimJoint131)

HAnimJoint98.addChildren(HAnimJoint125)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setName("vc4")
HAnimJoint150.setDEF("hanim_vc4")
HAnimJoint150.setCenter([0,1.43,-0.0458])
HAnimSegment151 = x3d.HAnimSegment()
HAnimSegment151.setName("c4")
HAnimSegment151.setDEF("hanim_c4")

HAnimJoint150.addChildren(HAnimSegment151)

HAnimJoint98.addChildren(HAnimJoint150)

HAnimJoint39.addChildren(HAnimJoint98)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("vl5")
HAnimJoint152.setDEF("hanim_vl5")
HAnimJoint152.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("skullbase")
HAnimJoint153.setDEF("hanim_skullbase")
HAnimJoint153.setCenter([0.0044,1.6209,0.0236])
HAnimSegment154 = x3d.HAnimSegment()
HAnimSegment154.setName("skull")
HAnimSegment154.setDEF("hanim_skull")
Transform155 = x3d.Transform()
Transform155.setTranslation([0.0044,1.6209,0.0236])
Shape156 = x3d.Shape()
Shape156.setUSE("DiamondShape")

Transform155.addChildren(Shape156)

HAnimSegment154.addChildren(Transform155)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.setName("skull_tip")
HAnimSite157.setDEF("hanim_skull_tip")
HAnimSite157.setTranslation([0.005,1.7504,0.0055])

HAnimSegment154.addChildren(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.setName("sellion_pt")
HAnimSite158.setDEF("hanim_sellion_pt")
HAnimSite158.setTranslation([0.0058,1.6316,0.0852])

HAnimSegment154.addChildren(HAnimSite158)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.setName("r_infraorbitale_pt")
HAnimSite159.setDEF("hanim_r_infraorbitale_pt")
HAnimSite159.setTranslation([-0.0237,1.6171,0.0752])

HAnimSegment154.addChildren(HAnimSite159)
HAnimSite160 = x3d.HAnimSite()
HAnimSite160.setName("l_infraorbitale_pt")
HAnimSite160.setDEF("hanim_l_infraorbitale_pt")
HAnimSite160.setTranslation([0.0341,1.6171,0.0752])

HAnimSegment154.addChildren(HAnimSite160)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("supramenton_pt")
HAnimSite161.setDEF("hanim_supramenton_pt")
HAnimSite161.setTranslation([0.0061,1.541,0.0805])

HAnimSegment154.addChildren(HAnimSite161)
HAnimSite162 = x3d.HAnimSite()
HAnimSite162.setName("r_tragion_pt")
HAnimSite162.setDEF("hanim_r_tragion_pt")
HAnimSite162.setTranslation([-0.0646,1.6347,0.0302])

HAnimSegment154.addChildren(HAnimSite162)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.setName("r_gonion_pt")
HAnimSite163.setDEF("hanim_r_gonion_pt")
HAnimSite163.setTranslation([-0.052,1.5529,0.0347])

HAnimSegment154.addChildren(HAnimSite163)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setName("l_tragion_pt")
HAnimSite164.setDEF("hanim_l_tragion_pt")
HAnimSite164.setTranslation([0.0739,1.6348,0.0282])

HAnimSegment154.addChildren(HAnimSite164)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.setName("l_gonion_pt")
HAnimSite165.setDEF("hanim_l_gonion_pt")
HAnimSite165.setTranslation([0.0631,1.553,0.033])

HAnimSegment154.addChildren(HAnimSite165)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setName("nuchale_pt")
HAnimSite166.setDEF("hanim_nuchale_pt")
HAnimSite166.setTranslation([0.0039,1.5972,-0.0796])

HAnimSegment154.addChildren(HAnimSite166)

HAnimJoint153.addChildren(HAnimSegment154)

HAnimJoint152.addChildren(HAnimJoint153)

HAnimJoint39.addChildren(HAnimJoint152)

HAnimHumanoid32.setSkeleton(HAnimJoint39)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("DiamondManLOA_1_view")
HAnimSite167.setDEF("hanim_DiamondManLOA_1_view")
Viewpoint168 = x3d.Viewpoint()
Viewpoint168.setDEF("InclinedView")
Viewpoint168.setDescription("Inclined View")
Viewpoint168.setOrientation([-0.113,0.993,0.0347,0.671])
Viewpoint168.setPosition([1.62,1.05,2.06])

HAnimSite167.addChildren(Viewpoint168)
Viewpoint169 = x3d.Viewpoint()
Viewpoint169.setDEF("FrontView")
Viewpoint169.setDescription("Front View")
Viewpoint169.setPosition([0,0.854,2.57665])

HAnimSite167.addChildren(Viewpoint169)
Viewpoint170 = x3d.Viewpoint()
Viewpoint170.setDEF("SideView")
Viewpoint170.setDescription("Side View")
Viewpoint170.setOrientation([0,1,0,1.57079])
Viewpoint170.setPosition([2.5929,0.854,0])

HAnimSite167.addChildren(Viewpoint170)
Viewpoint171 = x3d.Viewpoint()
Viewpoint171.setDEF("TopView")
Viewpoint171.setDescription("Top View")
Viewpoint171.setOrientation([1,0,0,-1.57079])
Viewpoint171.setPosition([0,3.4495,0])

HAnimSite167.addChildren(Viewpoint171)

HAnimHumanoid32.addViewpoints(HAnimSite167)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setUSE("hanim_humanoid_root")

HAnimHumanoid32.addJoints(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.setUSE("hanim_sacroiliac")

HAnimHumanoid32.addJoints(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setUSE("hanim_vl1")

HAnimHumanoid32.addJoints(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setUSE("hanim_vc4")

HAnimHumanoid32.addJoints(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setUSE("hanim_skullbase")

HAnimHumanoid32.addJoints(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.setUSE("hanim_vl5")

HAnimHumanoid32.addJoints(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.setUSE("hanim_l_ankle")

HAnimHumanoid32.addJoints(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setUSE("hanim_r_ankle")

HAnimHumanoid32.addJoints(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setUSE("hanim_l_elbow")

HAnimHumanoid32.addJoints(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setUSE("hanim_r_elbow")

HAnimHumanoid32.addJoints(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.setUSE("hanim_l_hip")

HAnimHumanoid32.addJoints(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setUSE("hanim_r_hip")

HAnimHumanoid32.addJoints(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setUSE("hanim_l_knee")

HAnimHumanoid32.addJoints(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setUSE("hanim_r_knee")

HAnimHumanoid32.addJoints(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.setUSE("hanim_l_midtarsal")

HAnimHumanoid32.addJoints(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setUSE("hanim_r_midtarsal")

HAnimHumanoid32.addJoints(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.setUSE("hanim_l_shoulder")

HAnimHumanoid32.addJoints(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setUSE("hanim_r_shoulder")

HAnimHumanoid32.addJoints(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.setUSE("hanim_l_wrist")

HAnimHumanoid32.addJoints(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.setUSE("hanim_r_wrist")

HAnimHumanoid32.addJoints(HAnimJoint191)
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.setUSE("hanim_pelvis")

HAnimHumanoid32.addSegments(HAnimSegment192)
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.setUSE("hanim_l1")

HAnimHumanoid32.addSegments(HAnimSegment193)
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.setUSE("hanim_c4")

HAnimHumanoid32.addSegments(HAnimSegment194)
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.setUSE("hanim_skull")

HAnimHumanoid32.addSegments(HAnimSegment195)
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.setUSE("hanim_l_calf")

HAnimHumanoid32.addSegments(HAnimSegment196)
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.setUSE("hanim_r_calf")

HAnimHumanoid32.addSegments(HAnimSegment197)
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.setUSE("hanim_l_forearm")

HAnimHumanoid32.addSegments(HAnimSegment198)
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.setUSE("hanim_r_forearm")

HAnimHumanoid32.addSegments(HAnimSegment199)
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.setUSE("hanim_l_hand")

HAnimHumanoid32.addSegments(HAnimSegment200)
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.setUSE("hanim_r_hand")

HAnimHumanoid32.addSegments(HAnimSegment201)
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.setUSE("hanim_l_hindfoot")

HAnimHumanoid32.addSegments(HAnimSegment202)
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.setUSE("hanim_r_hindfoot")

HAnimHumanoid32.addSegments(HAnimSegment203)
HAnimSegment204 = x3d.HAnimSegment()
HAnimSegment204.setUSE("hanim_l_middistal")

HAnimHumanoid32.addSegments(HAnimSegment204)
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.setUSE("hanim_r_middistal")

HAnimHumanoid32.addSegments(HAnimSegment205)
HAnimSegment206 = x3d.HAnimSegment()
HAnimSegment206.setUSE("hanim_l_thigh")

HAnimHumanoid32.addSegments(HAnimSegment206)
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setUSE("hanim_r_thigh")

HAnimHumanoid32.addSegments(HAnimSegment207)
HAnimSegment208 = x3d.HAnimSegment()
HAnimSegment208.setUSE("hanim_l_upperarm")

HAnimHumanoid32.addSegments(HAnimSegment208)
HAnimSegment209 = x3d.HAnimSegment()
HAnimSegment209.setUSE("hanim_r_upperarm")

HAnimHumanoid32.addSegments(HAnimSegment209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setUSE("hanim_skull_tip")

HAnimHumanoid32.addSites(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.setUSE("hanim_sellion_pt")

HAnimHumanoid32.addSites(HAnimSite211)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.setUSE("hanim_supramenton_pt")

HAnimHumanoid32.addSites(HAnimSite212)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setUSE("hanim_nuchale_pt")

HAnimHumanoid32.addSites(HAnimSite213)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid32.addSites(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid32.addSites(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid32.addSites(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid32.addSites(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.setUSE("hanim_l_digit2_pt")

HAnimHumanoid32.addSites(HAnimSite218)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setUSE("hanim_r_digit2_pt")

HAnimHumanoid32.addSites(HAnimSite219)
HAnimSite220 = x3d.HAnimSite()
HAnimSite220.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite220)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite221)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite223)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.setUSE("hanim_r_gonion_pt")

HAnimHumanoid32.addSites(HAnimSite224)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.setUSE("hanim_l_gonion_pt")

HAnimHumanoid32.addSites(HAnimSite225)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setUSE("hanim_l_hand_tip")

HAnimHumanoid32.addSites(HAnimSite226)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.setUSE("hanim_r_hand_tip")

HAnimHumanoid32.addSites(HAnimSite227)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite228)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite229)
HAnimSite230 = x3d.HAnimSite()
HAnimSite230.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite230)
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid32.addSites(HAnimSite231)
HAnimSite232 = x3d.HAnimSite()
HAnimSite232.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid32.addSites(HAnimSite232)
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid32.addSites(HAnimSite233)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid32.addSites(HAnimSite234)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid32.addSites(HAnimSite235)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid32.addSites(HAnimSite236)
HAnimSite237 = x3d.HAnimSite()
HAnimSite237.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid32.addSites(HAnimSite237)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid32.addSites(HAnimSite238)
HAnimSite239 = x3d.HAnimSite()
HAnimSite239.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid32.addSites(HAnimSite239)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid32.addSites(HAnimSite240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid32.addSites(HAnimSite241)
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid32.addSites(HAnimSite242)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid32.addSites(HAnimSite243)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid32.addSites(HAnimSite244)
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid32.addSites(HAnimSite245)
HAnimSite246 = x3d.HAnimSite()
HAnimSite246.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid32.addSites(HAnimSite246)
HAnimSite247 = x3d.HAnimSite()
HAnimSite247.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid32.addSites(HAnimSite247)
HAnimSite248 = x3d.HAnimSite()
HAnimSite248.setUSE("hanim_l_middistal_tip")

HAnimHumanoid32.addSites(HAnimSite248)
HAnimSite249 = x3d.HAnimSite()
HAnimSite249.setUSE("hanim_r_middistal_tip")

HAnimHumanoid32.addSites(HAnimSite249)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid32.addSites(HAnimSite250)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid32.addSites(HAnimSite251)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid32.addSites(HAnimSite252)
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid32.addSites(HAnimSite253)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.setUSE("hanim_l_radiale_pt")

HAnimHumanoid32.addSites(HAnimSite254)
HAnimSite255 = x3d.HAnimSite()
HAnimSite255.setUSE("hanim_r_radiale_pt")

HAnimHumanoid32.addSites(HAnimSite255)
HAnimSite256 = x3d.HAnimSite()
HAnimSite256.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid32.addSites(HAnimSite256)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid32.addSites(HAnimSite257)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.setUSE("hanim_r_tragion_pt")

HAnimHumanoid32.addSites(HAnimSite258)
HAnimSite259 = x3d.HAnimSite()
HAnimSite259.setUSE("hanim_l_tragion_pt")

HAnimHumanoid32.addSites(HAnimSite259)
HAnimSite260 = x3d.HAnimSite()
HAnimSite260.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid32.addSites(HAnimSite260)
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid32.addSites(HAnimSite261)

Scene28.addChildren(HAnimHumanoid32)

X3D0.setScene(Scene28)
X3D0.toFileX3D("../data/DiamondManLOA_1_RoundTrip.x3d")

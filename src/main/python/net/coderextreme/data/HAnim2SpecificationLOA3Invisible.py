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
meta3.setContent("HAnim2SpecificationLOA3Invisible.x3d")

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
meta6.setContent("24 April 2013")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 February 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("HAnim2SpecificationLOA3Illustrated.x3d")

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
meta27.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d")

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
HAnimHumanoid43.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid43.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
MetadataSet44 = x3d.MetadataSet()
MetadataSet44.setName("HAnimHumanoid.info")
MetadataSet44.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString45 = x3d.MetadataString()
MetadataString45.setName("authorName")
MetadataString45.setValue(["Matthew T. Beitler Joe D. Williams Don Brutzman"])

MetadataSet44.setValue(MetadataString45)
MetadataString46 = x3d.MetadataString()
MetadataString46.setName("authorEmail")
MetadataString46.setValue(["HAnim@web3D.org"])

MetadataSet44.addValue(MetadataString46)
MetadataString47 = x3d.MetadataString()
MetadataString47.setName("copyright")
MetadataString47.setValue(["none"])

MetadataSet44.addValue(MetadataString47)
MetadataString48 = x3d.MetadataString()
MetadataString48.setName("creationDate")
MetadataString48.setValue(["12 May 1999"])

MetadataSet44.addValue(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.setName("height")
MetadataString49.setValue(["1.7504"])

MetadataSet44.addValue(MetadataString49)
MetadataString50 = x3d.MetadataString()
MetadataString50.setName("humanoidVersion")
MetadataString50.setValue(["2.0"])

MetadataSet44.addValue(MetadataString50)
MetadataString51 = x3d.MetadataString()
MetadataString51.setName("usageRestrictions")
MetadataString51.setValue(["none"])

MetadataSet44.addValue(MetadataString51)

HAnimHumanoid43.setMetadata(MetadataSet44)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("humanoid_root")
HAnimJoint52.setDEF("hanim_humanoid_root")
HAnimJoint52.setCenter([0,0.824,0.0277])
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.setName("sacrum")
HAnimSegment53.setDEF("hanim_sacrum")

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.setName("sacroiliac")
HAnimJoint54.setDEF("hanim_sacroiliac")
HAnimJoint54.setCenter([0,0.9149,0.0016])
HAnimSegment55 = x3d.HAnimSegment()
HAnimSegment55.setName("pelvis")
HAnimSegment55.setDEF("hanim_pelvis")
HAnimSite56 = x3d.HAnimSite()
HAnimSite56.setName("r_iliocristale_pt")
HAnimSite56.setDEF("hanim_r_iliocristale_pt")
HAnimSite56.setTranslation([-0.1525,1.0628,0.0035])

HAnimSegment55.addChildren(HAnimSite56)
HAnimSite57 = x3d.HAnimSite()
HAnimSite57.setName("r_trochanterion_pt")
HAnimSite57.setDEF("hanim_r_trochanterion_pt")
HAnimSite57.setTranslation([-0.1689,0.8419,0.0352])

HAnimSegment55.addChildren(HAnimSite57)
HAnimSite58 = x3d.HAnimSite()
HAnimSite58.setName("l_iliocristale_pt")
HAnimSite58.setDEF("hanim_l_iliocristale_pt")
HAnimSite58.setTranslation([0.1612,1.0537,0.0008])

HAnimSegment55.addChildren(HAnimSite58)
HAnimSite59 = x3d.HAnimSite()
HAnimSite59.setName("l_trochanterion_pt")
HAnimSite59.setDEF("hanim_l_trochanterion_pt")
HAnimSite59.setTranslation([0.1677,0.8336,0.0303])

HAnimSegment55.addChildren(HAnimSite59)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.setName("r_asis_pt")
HAnimSite60.setDEF("hanim_r_asis_pt")
HAnimSite60.setTranslation([-0.0887,1.0021,0.1112])

HAnimSegment55.addChildren(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.setName("l_asis_pt")
HAnimSite61.setDEF("hanim_l_asis_pt")
HAnimSite61.setTranslation([0.0925,0.9983,0.1052])

HAnimSegment55.addChildren(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.setName("r_psis_pt")
HAnimSite62.setDEF("hanim_r_psis_pt")
HAnimSite62.setTranslation([-0.0716,1.019,-0.1138])

HAnimSegment55.addChildren(HAnimSite62)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.setName("l_psis_pt")
HAnimSite63.setDEF("hanim_l_psis_pt")
HAnimSite63.setTranslation([0.0774,1.019,-0.1151])

HAnimSegment55.addChildren(HAnimSite63)
HAnimSite64 = x3d.HAnimSite()
HAnimSite64.setName("crotch_pt")
HAnimSite64.setDEF("hanim_crotch_pt")
HAnimSite64.setTranslation([0.0034,0.8266,0.0257])

HAnimSegment55.addChildren(HAnimSite64)

HAnimJoint54.addChildren(HAnimSegment55)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.setName("l_hip")
HAnimJoint65.setDEF("hanim_l_hip")
HAnimJoint65.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment66 = x3d.HAnimSegment()
HAnimSegment66.setName("l_thigh")
HAnimSegment66.setDEF("hanim_l_thigh")
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.setName("l_knee_crease_pt")
HAnimSite67.setDEF("hanim_l_knee_crease_pt")
HAnimSite67.setTranslation([0.0993,0.4881,-0.0309])

HAnimSegment66.addChildren(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.setName("l_femoral_lateral_epicn_pt")
HAnimSite68.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite68.setTranslation([0.1598,0.4967,0.0297])

HAnimSegment66.addChildren(HAnimSite68)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_femoral_medial_epicn_pt")
HAnimSite69.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite69.setTranslation([0.0398,0.4946,0.0303])

HAnimSegment66.addChildren(HAnimSite69)

HAnimJoint65.addChildren(HAnimSegment66)
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.setName("l_knee")
HAnimJoint70.setDEF("hanim_l_knee")
HAnimJoint70.setCenter([0.104,0.4867,0.0308])
HAnimSegment71 = x3d.HAnimSegment()
HAnimSegment71.setName("l_calf")
HAnimSegment71.setDEF("hanim_l_calf")

HAnimJoint70.addChildren(HAnimSegment71)
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.setName("l_talocrural")
HAnimJoint72.setDEF("hanim_l_talocrural")
HAnimJoint72.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment73 = x3d.HAnimSegment()
HAnimSegment73.setName("l_talus")
HAnimSegment73.setDEF("hanim_l_talus")
HAnimSite74 = x3d.HAnimSite()
HAnimSite74.setName("l_lateral_malleolus_pt")
HAnimSite74.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite74.setTranslation([0.1308,0.0597,-0.1032])

HAnimSegment73.addChildren(HAnimSite74)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("l_medial_malleolus_pt")
HAnimSite75.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite75.setTranslation([0.089,0.0716,-0.0881])

HAnimSegment73.addChildren(HAnimSite75)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.setName("l_sphyrion_pt")
HAnimSite76.setDEF("hanim_l_sphyrion_pt")
HAnimSite76.setTranslation([0.089,0.0575,-0.0943])

HAnimSegment73.addChildren(HAnimSite76)
HAnimSite77 = x3d.HAnimSite()
HAnimSite77.setName("l_calcaneous_post_pt")
HAnimSite77.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite77.setTranslation([0.0974,0.0259,-0.1171])

HAnimSegment73.addChildren(HAnimSite77)

HAnimJoint72.addChildren(HAnimSegment73)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("l_tarsometatarsal_2")
HAnimJoint78.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint78.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("l_metatarsal_2")
HAnimSegment79.setDEF("hanim_l_metatarsal_2")

HAnimJoint78.addChildren(HAnimSegment79)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setName("l_metatarsophalangeal_2")
HAnimJoint80.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint80.setCenter([0.1086,0.0001,0.0368])
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment81.setDEF("hanim_l_tarsal_proximal_phalanx_2")
HAnimSite82 = x3d.HAnimSite()
HAnimSite82.setName("l_metatarsal_pha1_pt")
HAnimSite82.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite82.setTranslation([0.0816,0.0232,0.0106])

HAnimSegment81.addChildren(HAnimSite82)

HAnimJoint80.addChildren(HAnimSegment81)
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint83.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint83.setCenter([0.1086,0,0.0762])
HAnimSegment84 = x3d.HAnimSegment()
HAnimSegment84.setName("l_tarsal_distal_phalanx_2")
HAnimSegment84.setDEF("hanim_l_tarsal_distal_phalanx_2")
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.setName("l_forefoot_tip")
HAnimSite85.setDEF("hanim_l_forefoot_tip")
HAnimSite85.setTranslation([0.1354,0.0016,0.1476])

HAnimSegment84.addChildren(HAnimSite85)
HAnimSite86 = x3d.HAnimSite()
HAnimSite86.setName("l_metatarsal_pha5_pt")
HAnimSite86.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite86.setTranslation([0.1825,0.007,0.0928])

HAnimSegment84.addChildren(HAnimSite86)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.setName("l_digit2_pt")
HAnimSite87.setDEF("hanim_l_digit2_pt")
HAnimSite87.setTranslation([0.1195,0.0079,0.1433])

HAnimSegment84.addChildren(HAnimSite87)

HAnimJoint83.addChildren(HAnimSegment84)

HAnimJoint80.addChildren(HAnimJoint83)

HAnimJoint78.addChildren(HAnimJoint80)

HAnimJoint72.addChildren(HAnimJoint78)

HAnimJoint70.addChildren(HAnimJoint72)

HAnimJoint65.addChildren(HAnimJoint70)

HAnimJoint54.addChildren(HAnimJoint65)
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.setName("r_hip")
HAnimJoint88.setDEF("hanim_r_hip")
HAnimJoint88.setCenter([-0.0961,0.9124,-0.0001])
HAnimSegment89 = x3d.HAnimSegment()
HAnimSegment89.setName("r_thigh")
HAnimSegment89.setDEF("hanim_r_thigh")
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("r_knee_crease_pt")
HAnimSite90.setDEF("hanim_r_knee_crease_pt")
HAnimSite90.setTranslation([-0.0825,0.4932,-0.0326])

HAnimSegment89.addChildren(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.setName("r_femoral_lateral_epicn_pt")
HAnimSite91.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite91.setTranslation([-0.1421,0.4992,0.031])

HAnimSegment89.addChildren(HAnimSite91)
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.setName("r_femoral_medial_epicn_pt")
HAnimSite92.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite92.setTranslation([-0.0221,0.5014,0.0289])

HAnimSegment89.addChildren(HAnimSite92)

HAnimJoint88.addChildren(HAnimSegment89)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.setName("r_knee")
HAnimJoint93.setDEF("hanim_r_knee")
HAnimJoint93.setCenter([-0.104,0.4867,0.0308])
HAnimSegment94 = x3d.HAnimSegment()
HAnimSegment94.setName("r_calf")
HAnimSegment94.setDEF("hanim_r_calf")

HAnimJoint93.addChildren(HAnimSegment94)
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.setName("r_talocrural")
HAnimJoint95.setDEF("hanim_r_talocrural")
HAnimJoint95.setCenter([-0.1101,0.0656,-0.0736])
HAnimSegment96 = x3d.HAnimSegment()
HAnimSegment96.setName("r_talus")
HAnimSegment96.setDEF("hanim_r_talus")
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("r_lateral_malleolus_pt")
HAnimSite97.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite97.setTranslation([-0.1006,0.0658,-0.1075])

HAnimSegment96.addChildren(HAnimSite97)
HAnimSite98 = x3d.HAnimSite()
HAnimSite98.setName("r_medial_malleolus_pt")
HAnimSite98.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite98.setTranslation([-0.0591,0.076,-0.0928])

HAnimSegment96.addChildren(HAnimSite98)
HAnimSite99 = x3d.HAnimSite()
HAnimSite99.setName("r_sphyrion_pt")
HAnimSite99.setDEF("hanim_r_sphyrion_pt")
HAnimSite99.setTranslation([-0.0603,0.061,-0.1002])

HAnimSegment96.addChildren(HAnimSite99)
HAnimSite100 = x3d.HAnimSite()
HAnimSite100.setName("r_calcaneous_post_pt")
HAnimSite100.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite100.setTranslation([-0.0692,0.0297,-0.1221])

HAnimSegment96.addChildren(HAnimSite100)

HAnimJoint95.addChildren(HAnimSegment96)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.setName("r_tarsometatarsal_2")
HAnimJoint101.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint101.setCenter([-0.1086,0.0001,-0.0368])
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.setName("r_metatarsal_2")
HAnimSegment102.setDEF("hanim_r_metatarsal_2")

HAnimJoint101.addChildren(HAnimSegment102)
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("r_metatarsophalangeal_2")
HAnimJoint103.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint103.setCenter([-0.1086,0.0001,0.0368])
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment104.setDEF("hanim_r_tarsal_proximal_phalanx_2")
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.setName("r_metatarsal_pha1_pt")
HAnimSite105.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite105.setTranslation([-0.0521,0.026,0.0127])

HAnimSegment104.addChildren(HAnimSite105)

HAnimJoint103.addChildren(HAnimSegment104)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint106.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint106.setCenter([-0.1086,0,0.0762])
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.setName("r_tarsal_distal_phalanx_2")
HAnimSegment107.setDEF("hanim_r_tarsal_distal_phalanx_2")
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.setName("r_forefoot_tip")
HAnimSite108.setDEF("hanim_r_forefoot_tip")
HAnimSite108.setTranslation([-0.1043,0.0227,0.145])

HAnimSegment107.addChildren(HAnimSite108)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setName("r_metatarsal_pha5_pt")
HAnimSite109.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite109.setTranslation([-0.1523,0.0166,0.0895])

HAnimSegment107.addChildren(HAnimSite109)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.setName("r_digit2_pt")
HAnimSite110.setDEF("hanim_r_digit2_pt")
HAnimSite110.setTranslation([-0.0883,0.0134,0.1383])

HAnimSegment107.addChildren(HAnimSite110)

HAnimJoint106.addChildren(HAnimSegment107)

HAnimJoint103.addChildren(HAnimJoint106)

HAnimJoint101.addChildren(HAnimJoint103)

HAnimJoint95.addChildren(HAnimJoint101)

HAnimJoint93.addChildren(HAnimJoint95)

HAnimJoint88.addChildren(HAnimJoint93)

HAnimJoint54.addChildren(HAnimJoint88)

HAnimJoint52.addChildren(HAnimJoint54)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.setName("vl5")
HAnimJoint111.setDEF("hanim_vl5")
HAnimJoint111.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.setName("l5")
HAnimSegment112.setDEF("hanim_l5")
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("waist_preferred_post_pt")
HAnimSite113.setDEF("hanim_waist_preferred_post_pt")
HAnimSite113.setTranslation([0,1.0915,-0.1091])

HAnimSegment112.addChildren(HAnimSite113)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("navel_pt")
HAnimSite114.setDEF("hanim_navel_pt")
HAnimSite114.setTranslation([0.0069,1.0966,0.1017])

HAnimSegment112.addChildren(HAnimSite114)

HAnimJoint111.addChildren(HAnimSegment112)
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.setName("vl4")
HAnimJoint115.setDEF("hanim_vl4")
HAnimJoint115.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment116 = x3d.HAnimSegment()
HAnimSegment116.setName("l4")
HAnimSegment116.setDEF("hanim_l4")

HAnimJoint115.addChildren(HAnimSegment116)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.setName("vl3")
HAnimJoint117.setDEF("hanim_vl3")
HAnimJoint117.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.setName("l3")
HAnimSegment118.setDEF("hanim_l3")

HAnimJoint117.addChildren(HAnimSegment118)
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.setName("vl2")
HAnimJoint119.setDEF("hanim_vl2")
HAnimJoint119.setCenter([0.0045,1.1546,-0.08])
HAnimSegment120 = x3d.HAnimSegment()
HAnimSegment120.setName("l2")
HAnimSegment120.setDEF("hanim_l2")
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setName("r_rib10_pt")
HAnimSite121.setDEF("hanim_r_rib10_pt")
HAnimSite121.setTranslation([-0.0711,1.1941,0.1016])

HAnimSegment120.addChildren(HAnimSite121)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_rib10_pt")
HAnimSite122.setDEF("hanim_l_rib10_pt")
HAnimSite122.setTranslation([0.0871,1.1925,0.0992])

HAnimSegment120.addChildren(HAnimSite122)
HAnimSite123 = x3d.HAnimSite()
HAnimSite123.setName("rib10_midspine_pt")
HAnimSite123.setDEF("hanim_rib10_midspine_pt")
HAnimSite123.setTranslation([0.0049,1.1908,-0.1113])

HAnimSegment120.addChildren(HAnimSite123)

HAnimJoint119.addChildren(HAnimSegment120)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.setName("vl1")
HAnimJoint124.setDEF("hanim_vl1")
HAnimJoint124.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment125 = x3d.HAnimSegment()
HAnimSegment125.setName("l1")
HAnimSegment125.setDEF("hanim_l1")

HAnimJoint124.addChildren(HAnimSegment125)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.setName("vt12")
HAnimJoint126.setDEF("hanim_vt12")
HAnimJoint126.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.setName("t12")
HAnimSegment127.setDEF("hanim_t12")

HAnimJoint126.addChildren(HAnimSegment127)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.setName("vt11")
HAnimJoint128.setDEF("hanim_vt11")
HAnimJoint128.setCenter([0.0053,1.2679,-0.081])
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.setName("t11")
HAnimSegment129.setDEF("hanim_t11")

HAnimJoint128.addChildren(HAnimSegment129)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.setName("vt10")
HAnimJoint130.setDEF("hanim_vt10")
HAnimJoint130.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.setName("t10")
HAnimSegment131.setDEF("hanim_t10")
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("substernale_pt")
HAnimSite132.setDEF("hanim_substernale_pt")
HAnimSite132.setTranslation([0.0085,1.2995,0.1147])

HAnimSegment131.addChildren(HAnimSite132)

HAnimJoint130.addChildren(HAnimSegment131)
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.setName("vt9")
HAnimJoint133.setDEF("hanim_vt9")
HAnimJoint133.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment134 = x3d.HAnimSegment()
HAnimSegment134.setName("t9")
HAnimSegment134.setDEF("hanim_t9")
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.setName("r_thelion_pt")
HAnimSite135.setDEF("hanim_r_thelion_pt")
HAnimSite135.setTranslation([-0.0736,1.3385,0.1217])

HAnimSegment134.addChildren(HAnimSite135)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.setName("l_thelion_pt")
HAnimSite136.setDEF("hanim_l_thelion_pt")
HAnimSite136.setTranslation([0.0918,1.3382,0.1192])

HAnimSegment134.addChildren(HAnimSite136)

HAnimJoint133.addChildren(HAnimSegment134)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.setName("vt8")
HAnimJoint137.setDEF("hanim_vt8")
HAnimJoint137.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment138 = x3d.HAnimSegment()
HAnimSegment138.setName("t8")
HAnimSegment138.setDEF("hanim_t8")

HAnimJoint137.addChildren(HAnimSegment138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.setName("vt7")
HAnimJoint139.setDEF("hanim_vt7")
HAnimJoint139.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.setName("t7")
HAnimSegment140.setDEF("hanim_t7")

HAnimJoint139.addChildren(HAnimSegment140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.setName("vt6")
HAnimJoint141.setDEF("hanim_vt6")
HAnimJoint141.setCenter([0.0059,1.3866,-0.08])
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.setName("t6")
HAnimSegment142.setDEF("hanim_t6")

HAnimJoint141.addChildren(HAnimSegment142)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("vt5")
HAnimJoint143.setDEF("hanim_vt5")
HAnimJoint143.setCenter([0.006,1.4102,-0.0745])
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.setName("t5")
HAnimSegment144.setDEF("hanim_t5")

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.setName("vt4")
HAnimJoint145.setDEF("hanim_vt4")
HAnimJoint145.setCenter([0.0061,1.432,-0.0675])
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.setName("t4")
HAnimSegment146.setDEF("hanim_t4")

HAnimJoint145.addChildren(HAnimSegment146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.setName("vt3")
HAnimJoint147.setDEF("hanim_vt3")
HAnimJoint147.setCenter([0.0062,1.4583,-0.057])
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.setName("t3")
HAnimSegment148.setDEF("hanim_t3")

HAnimJoint147.addChildren(HAnimSegment148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setName("vt2")
HAnimJoint149.setDEF("hanim_vt2")
HAnimJoint149.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.setName("t2")
HAnimSegment150.setDEF("hanim_t2")

HAnimJoint149.addChildren(HAnimSegment150)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setName("vt1")
HAnimJoint151.setDEF("hanim_vt1")
HAnimJoint151.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.setName("t1")
HAnimSegment152.setDEF("hanim_t1")
HAnimSite153 = x3d.HAnimSite()
HAnimSite153.setName("suprasternale_pt")
HAnimSite153.setDEF("hanim_suprasternale_pt")
HAnimSite153.setTranslation([0.0084,1.4714,0.0551])

HAnimSegment152.addChildren(HAnimSite153)
HAnimSite154 = x3d.HAnimSite()
HAnimSite154.setName("cervicale_pt")
HAnimSite154.setDEF("hanim_cervicale_pt")
HAnimSite154.setTranslation([0.0064,1.52,-0.0815])

HAnimSegment152.addChildren(HAnimSite154)

HAnimJoint151.addChildren(HAnimSegment152)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.setName("vc7")
HAnimJoint155.setDEF("hanim_vc7")
HAnimJoint155.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment156 = x3d.HAnimSegment()
HAnimSegment156.setName("c7")
HAnimSegment156.setDEF("hanim_c7")
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.setName("r_neck_base_pt")
HAnimSite157.setDEF("hanim_r_neck_base_pt")
HAnimSite157.setTranslation([-0.0419,1.5149,-0.022])

HAnimSegment156.addChildren(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.setName("l_neck_base_pt")
HAnimSite158.setDEF("hanim_l_neck_base_pt")
HAnimSite158.setTranslation([0.0646,1.5141,-0.038])

HAnimSegment156.addChildren(HAnimSite158)

HAnimJoint155.addChildren(HAnimSegment156)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("vc6")
HAnimJoint159.setDEF("hanim_vc6")
HAnimJoint159.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.setName("c6")
HAnimSegment160.setDEF("hanim_c6")

HAnimJoint159.addChildren(HAnimSegment160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("vc5")
HAnimJoint161.setDEF("hanim_vc5")
HAnimJoint161.setCenter([0.0066,1.552,-0.0082])
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.setName("c5")
HAnimSegment162.setDEF("hanim_c5")

HAnimJoint161.addChildren(HAnimSegment162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setName("vc4")
HAnimJoint163.setDEF("hanim_vc4")
HAnimJoint163.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.setName("c4")
HAnimSegment164.setDEF("hanim_c4")

HAnimJoint163.addChildren(HAnimSegment164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.setName("vc3")
HAnimJoint165.setDEF("hanim_vc3")
HAnimJoint165.setCenter([0.0066,1.58,-0.0103])
HAnimSegment166 = x3d.HAnimSegment()
HAnimSegment166.setName("c3")
HAnimSegment166.setDEF("hanim_c3")

HAnimJoint165.addChildren(HAnimSegment166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.setName("vc2")
HAnimJoint167.setDEF("hanim_vc2")
HAnimJoint167.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.setName("c2")
HAnimSegment168.setDEF("hanim_c2")

HAnimJoint167.addChildren(HAnimSegment168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.setName("vc1")
HAnimJoint169.setDEF("hanim_vc1")
HAnimJoint169.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment170 = x3d.HAnimSegment()
HAnimSegment170.setName("c1")
HAnimSegment170.setDEF("hanim_c1")

HAnimJoint169.addChildren(HAnimSegment170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.setName("skullbase")
HAnimJoint171.setDEF("hanim_skullbase")
HAnimJoint171.setCenter([0.0044,1.6209,0.0236])
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.setName("skull")
HAnimSegment172.setDEF("hanim_skull")
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("skull_tip")
HAnimSite173.setDEF("hanim_skull_tip")
HAnimSite173.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry

HAnimSegment172.addChildren(HAnimSite173)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.setName("sellion_pt")
HAnimSite174.setDEF("hanim_sellion_pt")
HAnimSite174.setTranslation([0.0058,1.6316,0.0852])

HAnimSegment172.addChildren(HAnimSite174)
HAnimSite175 = x3d.HAnimSite()
HAnimSite175.setName("r_infraorbitale_pt")
HAnimSite175.setDEF("hanim_r_infraorbitale_pt")
HAnimSite175.setTranslation([-0.0237,1.6171,0.0752])

HAnimSegment172.addChildren(HAnimSite175)
HAnimSite176 = x3d.HAnimSite()
HAnimSite176.setName("l_infraorbitale_pt")
HAnimSite176.setDEF("hanim_l_infraorbitale_pt")
HAnimSite176.setTranslation([0.0341,1.6171,0.0752])

HAnimSegment172.addChildren(HAnimSite176)
HAnimSite177 = x3d.HAnimSite()
HAnimSite177.setName("supramenton_pt")
HAnimSite177.setDEF("hanim_supramenton_pt")
HAnimSite177.setTranslation([0.0061,1.541,0.0805])

HAnimSegment172.addChildren(HAnimSite177)
HAnimSite178 = x3d.HAnimSite()
HAnimSite178.setName("r_tragion_pt")
HAnimSite178.setDEF("hanim_r_tragion_pt")
HAnimSite178.setTranslation([-0.0646,1.6347,0.0302])

HAnimSegment172.addChildren(HAnimSite178)
HAnimSite179 = x3d.HAnimSite()
HAnimSite179.setName("r_gonion_pt")
HAnimSite179.setDEF("hanim_r_gonion_pt")
HAnimSite179.setTranslation([-0.052,1.5529,0.0347])

HAnimSegment172.addChildren(HAnimSite179)
HAnimSite180 = x3d.HAnimSite()
HAnimSite180.setName("l_tragion_pt")
HAnimSite180.setDEF("hanim_l_tragion_pt")
HAnimSite180.setTranslation([0.0739,1.6348,0.0282])

HAnimSegment172.addChildren(HAnimSite180)
HAnimSite181 = x3d.HAnimSite()
HAnimSite181.setName("l_gonion_pt")
HAnimSite181.setDEF("hanim_l_gonion_pt")
HAnimSite181.setTranslation([0.0631,1.553,0.033])

HAnimSegment172.addChildren(HAnimSite181)
HAnimSite182 = x3d.HAnimSite()
HAnimSite182.setName("nuchale_pt")
HAnimSite182.setDEF("hanim_nuchale_pt")
HAnimSite182.setTranslation([0.0039,1.5972,-0.0796])

HAnimSegment172.addChildren(HAnimSite182)

HAnimJoint171.addChildren(HAnimSegment172)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setName("l_eyeball_joint")
HAnimJoint183.setDEF("hanim_l_eyeball_joint")
HAnimJoint183.setCenter([0.0336,1.6332,0.0502])
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.setName("l_eyeball")
HAnimSegment184.setDEF("hanim_l_eyeball")
HAnimSite185 = x3d.HAnimSite()
HAnimSite185.setName("l_eyeball_site_view")
HAnimSite185.setDEF("hanim_l_eyeball_site_view")
HAnimSite185.setTranslation([0.034,1.64,0.05])
Viewpoint186 = x3d.Viewpoint()
Viewpoint186.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint186.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint186.setOrientation([0,1,0,3.141593])
Viewpoint186.setPosition([0,0,0])

HAnimSite185.addChildren(Viewpoint186)

HAnimSegment184.addChildren(HAnimSite185)

HAnimJoint183.addChildren(HAnimSegment184)

HAnimJoint171.addChildren(HAnimJoint183)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setName("l_eyelid_joint")
HAnimJoint187.setDEF("hanim_l_eyelid_joint")
HAnimJoint187.setCenter([0.0336,1.6332,0.0502])
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.setName("l_eyelid")
HAnimSegment188.setDEF("hanim_l_eyelid")

HAnimJoint187.addChildren(HAnimSegment188)

HAnimJoint171.addChildren(HAnimJoint187)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setName("l_eyebrow_joint")
HAnimJoint189.setDEF("hanim_l_eyebrow_joint")
HAnimJoint189.setCenter([0.0336,1.635,0.0506])
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.setName("l_eyebrow")
HAnimSegment190.setDEF("hanim_l_eyebrow")

HAnimJoint189.addChildren(HAnimSegment190)

HAnimJoint171.addChildren(HAnimJoint189)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.setName("r_eyeball_joint")
HAnimJoint191.setDEF("hanim_r_eyeball_joint")
HAnimJoint191.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.setName("r_eyeball")
HAnimSegment192.setDEF("hanim_r_eyeball")
HAnimSite193 = x3d.HAnimSite()
HAnimSite193.setName("r_eyeball_site_view")
HAnimSite193.setDEF("hanim_r_eyeball_site_view")
HAnimSite193.setTranslation([-0.034,1.64,0.05])
Viewpoint194 = x3d.Viewpoint()
Viewpoint194.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint194.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint194.setOrientation([0,1,0,3.141593])
Viewpoint194.setPosition([0,0,0])

HAnimSite193.addChildren(Viewpoint194)

HAnimSegment192.addChildren(HAnimSite193)

HAnimJoint191.addChildren(HAnimSegment192)

HAnimJoint171.addChildren(HAnimJoint191)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.setName("r_eyelid_joint")
HAnimJoint195.setDEF("hanim_r_eyelid_joint")
HAnimJoint195.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.setName("r_eyelid")
HAnimSegment196.setDEF("hanim_r_eyelid")

HAnimJoint195.addChildren(HAnimSegment196)

HAnimJoint171.addChildren(HAnimJoint195)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.setName("r_eyebrow_joint")
HAnimJoint197.setDEF("hanim_r_eyebrow_joint")
HAnimJoint197.setCenter([-0.0336,1.635,0.0506])
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.setName("r_eyebrow")
HAnimSegment198.setDEF("hanim_r_eyebrow")

HAnimJoint197.addChildren(HAnimSegment198)

HAnimJoint171.addChildren(HAnimJoint197)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.setName("temporomandibular")
HAnimJoint199.setDEF("hanim_temporomandibular")
HAnimJoint199.setCenter([0,1.63,0.015])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.setName("jaw")
HAnimSegment200.setDEF("hanim_jaw")
HAnimSite201 = x3d.HAnimSite()
HAnimSite201.setName("temporomandibular_l_site_pt")
HAnimSite201.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite201.setTranslation([0.045,1.63,0])

HAnimSegment200.addChildren(HAnimSite201)
HAnimSite202 = x3d.HAnimSite()
HAnimSite202.setName("temporomandibular_r_site_pt")
HAnimSite202.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite202.setTranslation([-0.045,1.63,0])

HAnimSegment200.addChildren(HAnimSite202)

HAnimJoint199.addChildren(HAnimSegment200)

HAnimJoint171.addChildren(HAnimJoint199)

HAnimJoint169.addChildren(HAnimJoint171)

HAnimJoint167.addChildren(HAnimJoint169)

HAnimJoint165.addChildren(HAnimJoint167)

HAnimJoint163.addChildren(HAnimJoint165)

HAnimJoint161.addChildren(HAnimJoint163)

HAnimJoint159.addChildren(HAnimJoint161)

HAnimJoint155.addChildren(HAnimJoint159)

HAnimJoint151.addChildren(HAnimJoint155)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.setName("l_sternoclavicular")
HAnimJoint203.setDEF("hanim_l_sternoclavicular")
HAnimJoint203.setCenter([0.082,1.4488,-0.0353])
HAnimSegment204 = x3d.HAnimSegment()
HAnimSegment204.setName("l_clavicle")
HAnimSegment204.setDEF("hanim_l_clavicle")
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.setName("l_clavicale_pt")
HAnimSite205.setDEF("hanim_l_clavicale_pt")
HAnimSite205.setTranslation([0.0271,1.4943,0.0394])

HAnimSegment204.addChildren(HAnimSite205)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.setName("l_acromion_pt")
HAnimSite206.setDEF("hanim_l_acromion_pt")
HAnimSite206.setTranslation([0.2032,1.476,-0.049])

HAnimSegment204.addChildren(HAnimSite206)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.setName("l_axilla_ant_pt")
HAnimSite207.setDEF("hanim_l_axilla_ant_pt")
HAnimSite207.setTranslation([0.1777,1.4065,-0.0075])

HAnimSegment204.addChildren(HAnimSite207)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.setName("l_axilla_post_pt")
HAnimSite208.setDEF("hanim_l_axilla_post_pt")
HAnimSite208.setTranslation([0.1706,1.4072,-0.0875])

HAnimSegment204.addChildren(HAnimSite208)

HAnimJoint203.addChildren(HAnimSegment204)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.setName("l_acromioclavicular")
HAnimJoint209.setDEF("hanim_l_acromioclavicular")
HAnimJoint209.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.setName("l_scapula")
HAnimSegment210.setDEF("hanim_l_scapula")

HAnimJoint209.addChildren(HAnimSegment210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.setName("l_shoulder")
HAnimJoint211.setDEF("hanim_l_shoulder")
HAnimJoint211.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment212 = x3d.HAnimSegment()
HAnimSegment212.setName("l_upperarm")
HAnimSegment212.setDEF("hanim_l_upperarm")
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setName("l_humeral_lateral_epicn_pt")
HAnimSite213.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite213.setTranslation([0.228,1.1482,-0.11])

HAnimSegment212.addChildren(HAnimSite213)

HAnimJoint211.addChildren(HAnimSegment212)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.setName("l_elbow")
HAnimJoint214.setDEF("hanim_l_elbow")
HAnimJoint214.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment215 = x3d.HAnimSegment()
HAnimSegment215.setName("l_forearm")
HAnimSegment215.setDEF("hanim_l_forearm")
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setName("l_radial_styloid_pt")
HAnimSite216.setDEF("hanim_l_radial_styloid_pt")
HAnimSite216.setTranslation([0.1901,0.8645,-0.0415])

HAnimSegment215.addChildren(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setName("l_olecranon_pt")
HAnimSite217.setDEF("hanim_l_olecranon_pt")
HAnimSite217.setTranslation([0.1962,1.1375,-0.1123])

HAnimSegment215.addChildren(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.setName("l_humeral_medial_epicn_pt")
HAnimSite218.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite218.setTranslation([0.1735,1.1272,-0.1113])

HAnimSegment215.addChildren(HAnimSite218)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setName("l_radiale_pt")
HAnimSite219.setDEF("hanim_l_radiale_pt")
HAnimSite219.setTranslation([0.2182,1.1212,-0.1167])

HAnimSegment215.addChildren(HAnimSite219)

HAnimJoint214.addChildren(HAnimSegment215)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.setName("l_radiocarpal")
HAnimJoint220.setDEF("hanim_l_radiocarpal")
HAnimJoint220.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment221 = x3d.HAnimSegment()
HAnimSegment221.setName("l_carpal")
HAnimSegment221.setDEF("hanim_l_carpal")
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setName("l_metacarpal_pha2_pt")
HAnimSite222.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite222.setTranslation([0.2009,0.8139,-0.0237])

HAnimSegment221.addChildren(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.setName("l_ulnar_styloid_pt")
HAnimSite223.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite223.setTranslation([0.2142,0.8529,-0.0648])

HAnimSegment221.addChildren(HAnimSite223)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.setName("l_metacarpal_pha5_pt")
HAnimSite224.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite224.setTranslation([0.1929,0.786,-0.1122])

HAnimSegment221.addChildren(HAnimSite224)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.setName("l_hand_front_view")
HAnimSite225.setDEF("hanim_l_hand_front_view")
HAnimSite225.setTranslation([0.3,0.75,0.45])
Viewpoint226 = x3d.Viewpoint()
Viewpoint226.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint226.setCenterOfRotation([0,0.7,0])
Viewpoint226.setDescription("left hand front")
Viewpoint226.setPosition([0,0,0])

HAnimSite225.addChildren(Viewpoint226)

HAnimSegment221.addChildren(HAnimSite225)

HAnimJoint220.addChildren(HAnimSegment221)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setName("l_thumb1")
HAnimJoint227.setDEF("hanim_l_thumb1")
HAnimJoint227.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.setName("l_metacarpal_1")
HAnimSegment228.setDEF("hanim_l_metacarpal_1")

HAnimJoint227.addChildren(HAnimSegment228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setName("l_thumb2")
HAnimJoint229.setDEF("hanim_l_thumb2")
HAnimJoint229.setCenter([0.1951,0.8226,0.0246])
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.setName("l_carpal_proximal_phalanx_1")
HAnimSegment230.setDEF("hanim_l_carpal_proximal_phalanx_1")

HAnimJoint229.addChildren(HAnimSegment230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setName("l_thumb3")
HAnimJoint231.setDEF("hanim_l_thumb3")
HAnimJoint231.setCenter([0.1955,0.8159,0.0464])
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.setName("l_carpal_distal_phalanx_1")
HAnimSegment232.setDEF("hanim_l_carpal_distal_phalanx_1")
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.setName("l_thumb_distal_tip")
HAnimSite233.setDEF("hanim_l_thumb_distal_tip")
HAnimSite233.setTranslation([0.1982,0.8061,0.0759])

HAnimSegment232.addChildren(HAnimSite233)

HAnimJoint231.addChildren(HAnimSegment232)

HAnimJoint229.addChildren(HAnimJoint231)

HAnimJoint227.addChildren(HAnimJoint229)

HAnimJoint220.addChildren(HAnimJoint227)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.setName("l_index0")
HAnimJoint234.setDEF("hanim_l_index0")
HAnimJoint234.setCenter([0.1983,0.8024,-0.028])
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.setName("l_metacarpal_2")
HAnimSegment235.setDEF("hanim_l_metacarpal_2")

HAnimJoint234.addChildren(HAnimSegment235)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.setName("l_index1")
HAnimJoint236.setDEF("hanim_l_index1")
HAnimJoint236.setCenter([0.1983,0.7815,-0.028])
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.setName("l_carpal_proximal_phalanx_2")
HAnimSegment237.setDEF("hanim_l_carpal_proximal_phalanx_2")

HAnimJoint236.addChildren(HAnimSegment237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setName("l_index2")
HAnimJoint238.setDEF("hanim_l_index2")
HAnimJoint238.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.setName("l_carpal_middle_phalanx_2")
HAnimSegment239.setDEF("hanim_l_carpal_middle_phalanx_2")

HAnimJoint238.addChildren(HAnimSegment239)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setName("l_index3")
HAnimJoint240.setDEF("hanim_l_index3")
HAnimJoint240.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.setName("l_carpal_distal_phalanx_2")
HAnimSegment241.setDEF("hanim_l_carpal_distal_phalanx_2")
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.setName("l_index_distal_tip")
HAnimSite242.setDEF("hanim_l_index_distal_tip")
HAnimSite242.setTranslation([0.2089,0.6858,-0.0245])

HAnimSegment241.addChildren(HAnimSite242)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.setName("l_dactylion_pt")
HAnimSite243.setDEF("hanim_l_dactylion_pt")
HAnimSite243.setTranslation([0.2056,0.6743,-0.0482])

HAnimSegment241.addChildren(HAnimSite243)

HAnimJoint240.addChildren(HAnimSegment241)

HAnimJoint238.addChildren(HAnimJoint240)

HAnimJoint236.addChildren(HAnimJoint238)

HAnimJoint234.addChildren(HAnimJoint236)

HAnimJoint220.addChildren(HAnimJoint234)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.setName("l_middle0")
HAnimJoint244.setDEF("hanim_l_middle0")
HAnimJoint244.setCenter([0.1987,0.8029,-0.053])
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.setName("l_metacarpal_3")
HAnimSegment245.setDEF("hanim_l_metacarpal_3")

HAnimJoint244.addChildren(HAnimSegment245)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.setName("l_middle1")
HAnimJoint246.setDEF("hanim_l_middle1")
HAnimJoint246.setCenter([0.1987,0.7818,-0.053])
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.setName("l_carpal_proximal_phalanx_3")
HAnimSegment247.setDEF("hanim_l_carpal_proximal_phalanx_3")

HAnimJoint246.addChildren(HAnimSegment247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.setName("l_middle2")
HAnimJoint248.setDEF("hanim_l_middle2")
HAnimJoint248.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment249 = x3d.HAnimSegment()
HAnimSegment249.setName("l_carpal_middle_phalanx_3")
HAnimSegment249.setDEF("hanim_l_carpal_middle_phalanx_3")

HAnimJoint248.addChildren(HAnimSegment249)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.setName("l_middle3")
HAnimJoint250.setDEF("hanim_l_middle3")
HAnimJoint250.setCenter([0.2026,0.7011,-0.0494])
HAnimSegment251 = x3d.HAnimSegment()
HAnimSegment251.setName("l_carpal_distal_phalanx_3")
HAnimSegment251.setDEF("hanim_l_carpal_distal_phalanx_3")
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.setName("l_middle_distal_tip")
HAnimSite252.setDEF("hanim_l_middle_distal_tip")
HAnimSite252.setTranslation([0.208,0.6731,-0.0491])

HAnimSegment251.addChildren(HAnimSite252)

HAnimJoint250.addChildren(HAnimSegment251)

HAnimJoint248.addChildren(HAnimJoint250)

HAnimJoint246.addChildren(HAnimJoint248)

HAnimJoint244.addChildren(HAnimJoint246)

HAnimJoint220.addChildren(HAnimJoint244)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.setName("l_ring0")
HAnimJoint253.setDEF("hanim_l_ring0")
HAnimJoint253.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.setName("l_metacarpal_4")
HAnimSegment254.setDEF("hanim_l_metacarpal_4")

HAnimJoint253.addChildren(HAnimSegment254)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.setName("l_ring1")
HAnimJoint255.setDEF("hanim_l_ring1")
HAnimJoint255.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.setName("l_carpal_proximal_phalanx_4")
HAnimSegment256.setDEF("hanim_l_carpal_proximal_phalanx_4")

HAnimJoint255.addChildren(HAnimSegment256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.setName("l_ring2")
HAnimJoint257.setDEF("hanim_l_ring2")
HAnimJoint257.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment258 = x3d.HAnimSegment()
HAnimSegment258.setName("l_carpal_middle_phalanx_4")
HAnimSegment258.setDEF("hanim_l_carpal_middle_phalanx_4")

HAnimJoint257.addChildren(HAnimSegment258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setName("l_ring3")
HAnimJoint259.setDEF("hanim_l_ring3")
HAnimJoint259.setCenter([0.1983,0.7045,-0.0767])
HAnimSegment260 = x3d.HAnimSegment()
HAnimSegment260.setName("l_carpal_distal_phalanx_4")
HAnimSegment260.setDEF("hanim_l_carpal_distal_phalanx_4")
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.setName("l_ring_distal_tip")
HAnimSite261.setDEF("hanim_l_ring_distal_tip")
HAnimSite261.setTranslation([0.2035,0.675,-0.0756])

HAnimSegment260.addChildren(HAnimSite261)

HAnimJoint259.addChildren(HAnimSegment260)

HAnimJoint257.addChildren(HAnimJoint259)

HAnimJoint255.addChildren(HAnimJoint257)

HAnimJoint253.addChildren(HAnimJoint255)

HAnimJoint220.addChildren(HAnimJoint253)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setName("l_pinky0")
HAnimJoint262.setDEF("hanim_l_pinky0")
HAnimJoint262.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment263 = x3d.HAnimSegment()
HAnimSegment263.setName("l_metacarpal_5")
HAnimSegment263.setDEF("hanim_l_metacarpal_5")

HAnimJoint262.addChildren(HAnimSegment263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.setName("l_pinky1")
HAnimJoint264.setDEF("hanim_l_pinky1")
HAnimJoint264.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment265 = x3d.HAnimSegment()
HAnimSegment265.setName("l_carpal_proximal_phalanx_5")
HAnimSegment265.setDEF("hanim_l_carpal_proximal_phalanx_5")

HAnimJoint264.addChildren(HAnimSegment265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.setName("l_pinky2")
HAnimJoint266.setDEF("hanim_l_pinky2")
HAnimJoint266.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment267 = x3d.HAnimSegment()
HAnimSegment267.setName("l_carpal_middle_phalanx_5")
HAnimSegment267.setDEF("hanim_l_carpal_middle_phalanx_5")

HAnimJoint266.addChildren(HAnimSegment267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setName("l_pinky3")
HAnimJoint268.setDEF("hanim_l_pinky3")
HAnimJoint268.setCenter([0.1948,0.7277,-0.1017])
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.setName("l_carpal_distal_phalanx_5")
HAnimSegment269.setDEF("hanim_l_carpal_distal_phalanx_5")
HAnimSite270 = x3d.HAnimSite()
HAnimSite270.setName("l_pinky_distal_tip")
HAnimSite270.setDEF("hanim_l_pinky_distal_tip")
HAnimSite270.setTranslation([0.2014,0.7009,-0.1012])

HAnimSegment269.addChildren(HAnimSite270)

HAnimJoint268.addChildren(HAnimSegment269)

HAnimJoint266.addChildren(HAnimJoint268)

HAnimJoint264.addChildren(HAnimJoint266)

HAnimJoint262.addChildren(HAnimJoint264)

HAnimJoint220.addChildren(HAnimJoint262)

HAnimJoint214.addChildren(HAnimJoint220)

HAnimJoint211.addChildren(HAnimJoint214)

HAnimJoint209.addChildren(HAnimJoint211)

HAnimJoint203.addChildren(HAnimJoint209)

HAnimJoint151.addChildren(HAnimJoint203)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setName("r_sternoclavicular")
HAnimJoint271.setDEF("hanim_r_sternoclavicular")
HAnimJoint271.setCenter([-0.082,1.4488,-0.0353])
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setName("r_clavicle")
HAnimSegment272.setDEF("hanim_r_clavicle")
HAnimSite273 = x3d.HAnimSite()
HAnimSite273.setName("r_clavicale_pt")
HAnimSite273.setDEF("hanim_r_clavicale_pt")
HAnimSite273.setTranslation([-0.0115,1.4943,0.04])

HAnimSegment272.addChildren(HAnimSite273)
HAnimSite274 = x3d.HAnimSite()
HAnimSite274.setName("r_acromion_pt")
HAnimSite274.setDEF("hanim_r_acromion_pt")
HAnimSite274.setTranslation([-0.1905,1.4791,-0.0431])

HAnimSegment272.addChildren(HAnimSite274)
HAnimSite275 = x3d.HAnimSite()
HAnimSite275.setName("r_axilla_ant_pt")
HAnimSite275.setDEF("hanim_r_axilla_ant_pt")
HAnimSite275.setTranslation([-0.1626,1.4072,-0.0031])

HAnimSegment272.addChildren(HAnimSite275)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.setName("r_axilla_post_pt")
HAnimSite276.setDEF("hanim_r_axilla_post_pt")
HAnimSite276.setTranslation([-0.1603,1.4098,-0.0826])

HAnimSegment272.addChildren(HAnimSite276)

HAnimJoint271.addChildren(HAnimSegment272)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setName("r_acromioclavicular")
HAnimJoint277.setDEF("hanim_r_acromioclavicular")
HAnimJoint277.setCenter([-0.0962,1.4269,-0.0424])
HAnimSegment278 = x3d.HAnimSegment()
HAnimSegment278.setName("r_scapula")
HAnimSegment278.setDEF("hanim_r_scapula")

HAnimJoint277.addChildren(HAnimSegment278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setName("r_shoulder")
HAnimJoint279.setDEF("hanim_r_shoulder")
HAnimJoint279.setCenter([-0.2029,1.4376,-0.0387])
HAnimSegment280 = x3d.HAnimSegment()
HAnimSegment280.setName("r_upperarm")
HAnimSegment280.setDEF("hanim_r_upperarm")
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.setName("r_humeral_lateral_epicn_pt")
HAnimSite281.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite281.setTranslation([-0.2224,1.1517,-0.1033])

HAnimSegment280.addChildren(HAnimSite281)

HAnimJoint279.addChildren(HAnimSegment280)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setName("r_elbow")
HAnimJoint282.setDEF("hanim_r_elbow")
HAnimJoint282.setCenter([-0.2014,1.1357,-0.0682])
HAnimSegment283 = x3d.HAnimSegment()
HAnimSegment283.setName("r_forearm")
HAnimSegment283.setDEF("hanim_r_forearm")
HAnimSite284 = x3d.HAnimSite()
HAnimSite284.setName("r_radial_styloid_pt")
HAnimSite284.setDEF("hanim_r_radial_styloid_pt")
HAnimSite284.setTranslation([-0.1884,0.8676,-0.036])

HAnimSegment283.addChildren(HAnimSite284)
HAnimSite285 = x3d.HAnimSite()
HAnimSite285.setName("r_olecranon_pt")
HAnimSite285.setDEF("hanim_r_olecranon_pt")
HAnimSite285.setTranslation([-0.1907,1.1405,-0.1065])

HAnimSegment283.addChildren(HAnimSite285)
HAnimSite286 = x3d.HAnimSite()
HAnimSite286.setName("r_humeral_medial_epicn_pt")
HAnimSite286.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite286.setTranslation([-0.168,1.1298,-0.1062])

HAnimSegment283.addChildren(HAnimSite286)
HAnimSite287 = x3d.HAnimSite()
HAnimSite287.setName("r_radiale_pt")
HAnimSite287.setDEF("hanim_r_radiale_pt")
HAnimSite287.setTranslation([-0.213,1.1305,-0.1091])

HAnimSegment283.addChildren(HAnimSite287)

HAnimJoint282.addChildren(HAnimSegment283)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setName("r_radiocarpal")
HAnimJoint288.setDEF("hanim_r_radiocarpal")
HAnimJoint288.setCenter([-0.1984,0.8663,-0.0583])
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.setName("r_carpal")
HAnimSegment289.setDEF("hanim_r_carpal")
HAnimSite290 = x3d.HAnimSite()
HAnimSite290.setName("r_metacarpal_pha2_pt")
HAnimSite290.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite290.setTranslation([-0.1977,0.8169,-0.0177])

HAnimSegment289.addChildren(HAnimSite290)
HAnimSite291 = x3d.HAnimSite()
HAnimSite291.setName("r_ulnar_styloid_pt")
HAnimSite291.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite291.setTranslation([-0.2117,0.8562,-0.0584])

HAnimSegment289.addChildren(HAnimSite291)
HAnimSite292 = x3d.HAnimSite()
HAnimSite292.setName("r_metacarpal_pha5_pt")
HAnimSite292.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite292.setTranslation([-0.1929,0.789,-0.1064])

HAnimSegment289.addChildren(HAnimSite292)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.setName("r_hand_front_view")
HAnimSite293.setDEF("hanim_r_hand_front_view")
HAnimSite293.setTranslation([-0.3,0.75,0.45])
Viewpoint294 = x3d.Viewpoint()
Viewpoint294.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint294.setCenterOfRotation([0,0.7,0])
Viewpoint294.setDescription("right hand front")
Viewpoint294.setPosition([0,0,0])

HAnimSite293.addChildren(Viewpoint294)

HAnimSegment289.addChildren(HAnimSite293)

HAnimJoint288.addChildren(HAnimSegment289)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setName("r_thumb1")
HAnimJoint295.setDEF("hanim_r_thumb1")
HAnimJoint295.setCenter([-0.1924,0.8472,-0.0534])
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setName("r_metacarpal_1")
HAnimSegment296.setDEF("hanim_r_metacarpal_1")

HAnimJoint295.addChildren(HAnimSegment296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setName("r_thumb2")
HAnimJoint297.setDEF("hanim_r_thumb2")
HAnimJoint297.setCenter([-0.1951,0.8226,0.0246])
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setName("r_carpal_proximal_phalanx_1")
HAnimSegment298.setDEF("hanim_r_carpal_proximal_phalanx_1")

HAnimJoint297.addChildren(HAnimSegment298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setName("r_thumb3")
HAnimJoint299.setDEF("hanim_r_thumb3")
HAnimJoint299.setCenter([-0.1955,0.8159,0.0464])
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setName("r_carpal_distal_phalanx_1")
HAnimSegment300.setDEF("hanim_r_carpal_distal_phalanx_1")
HAnimSite301 = x3d.HAnimSite()
HAnimSite301.setName("r_thumb_distal_tip")
HAnimSite301.setDEF("hanim_r_thumb_distal_tip")
HAnimSite301.setTranslation([-0.1869,0.809,0.082])

HAnimSegment300.addChildren(HAnimSite301)

HAnimJoint299.addChildren(HAnimSegment300)

HAnimJoint297.addChildren(HAnimJoint299)

HAnimJoint295.addChildren(HAnimJoint297)

HAnimJoint288.addChildren(HAnimJoint295)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.setName("r_index0")
HAnimJoint302.setDEF("hanim_r_index0")
HAnimJoint302.setCenter([-0.1983,0.8024,-0.028])
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.setName("r_metacarpal_2")
HAnimSegment303.setDEF("hanim_r_metacarpal_2")

HAnimJoint302.addChildren(HAnimSegment303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setName("r_index1")
HAnimJoint304.setDEF("hanim_r_index1")
HAnimJoint304.setCenter([-0.1983,0.7815,-0.028])
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setName("r_carpal_proximal_phalanx_2")
HAnimSegment305.setDEF("hanim_r_carpal_proximal_phalanx_2")

HAnimJoint304.addChildren(HAnimSegment305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setName("r_index2")
HAnimJoint306.setDEF("hanim_r_index2")
HAnimJoint306.setCenter([-0.2017,0.7363,-0.0248])
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setName("r_carpal_middle_phalanx_2")
HAnimSegment307.setDEF("hanim_r_carpal_middle_phalanx_2")

HAnimJoint306.addChildren(HAnimSegment307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.setName("r_index3")
HAnimJoint308.setDEF("hanim_r_index3")
HAnimJoint308.setCenter([-0.2028,0.7139,-0.0236])
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setName("r_carpal_distal_phalanx_2")
HAnimSegment309.setDEF("hanim_r_carpal_distal_phalanx_2")
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.setName("r_index_distal_tip")
HAnimSite310.setDEF("hanim_r_index_distal_tip")
HAnimSite310.setTranslation([-0.198,0.6883,-0.018])

HAnimSegment309.addChildren(HAnimSite310)
HAnimSite311 = x3d.HAnimSite()
HAnimSite311.setName("r_dactylion_pt")
HAnimSite311.setDEF("hanim_r_dactylion_pt")
HAnimSite311.setTranslation([-0.1941,0.6772,-0.0423])

HAnimSegment309.addChildren(HAnimSite311)

HAnimJoint308.addChildren(HAnimSegment309)

HAnimJoint306.addChildren(HAnimJoint308)

HAnimJoint304.addChildren(HAnimJoint306)

HAnimJoint302.addChildren(HAnimJoint304)

HAnimJoint288.addChildren(HAnimJoint302)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.setName("r_middle0")
HAnimJoint312.setDEF("hanim_r_middle0")
HAnimJoint312.setCenter([-0.1987,0.8029,-0.053])
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setName("r_metacarpal_3")
HAnimSegment313.setDEF("hanim_r_metacarpal_3")

HAnimJoint312.addChildren(HAnimSegment313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.setName("r_middle1")
HAnimJoint314.setDEF("hanim_r_middle1")
HAnimJoint314.setCenter([-0.1987,0.7818,-0.053])
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setName("r_carpal_proximal_phalanx_3")
HAnimSegment315.setDEF("hanim_r_carpal_proximal_phalanx_3")

HAnimJoint314.addChildren(HAnimSegment315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.setName("r_middle2")
HAnimJoint316.setDEF("hanim_r_middle2")
HAnimJoint316.setCenter([-0.2013,0.7273,-0.0503])
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setName("r_carpal_middle_phalanx_3")
HAnimSegment317.setDEF("hanim_r_carpal_middle_phalanx_3")

HAnimJoint316.addChildren(HAnimSegment317)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.setName("r_middle3")
HAnimJoint318.setDEF("hanim_r_middle3")
HAnimJoint318.setCenter([-0.2026,0.7011,-0.0494])
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setName("r_carpal_distal_phalanx_3")
HAnimSegment319.setDEF("hanim_r_carpal_distal_phalanx_3")
HAnimSite320 = x3d.HAnimSite()
HAnimSite320.setName("r_middle_distal_tip")
HAnimSite320.setDEF("hanim_r_middle_distal_tip")
HAnimSite320.setTranslation([-0.1969,0.6758,-0.0427])

HAnimSegment319.addChildren(HAnimSite320)

HAnimJoint318.addChildren(HAnimSegment319)

HAnimJoint316.addChildren(HAnimJoint318)

HAnimJoint314.addChildren(HAnimJoint316)

HAnimJoint312.addChildren(HAnimJoint314)

HAnimJoint288.addChildren(HAnimJoint312)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.setName("r_ring0")
HAnimJoint321.setDEF("hanim_r_ring0")
HAnimJoint321.setCenter([-0.1956,0.8019,-0.0794])
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.setName("r_metacarpal_4")
HAnimSegment322.setDEF("hanim_r_metacarpal_4")

HAnimJoint321.addChildren(HAnimSegment322)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.setName("r_ring1")
HAnimJoint323.setDEF("hanim_r_ring1")
HAnimJoint323.setCenter([-0.1956,0.7815,-0.0794])
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.setName("r_carpal_proximal_phalanx_4")
HAnimSegment324.setDEF("hanim_r_carpal_proximal_phalanx_4")

HAnimJoint323.addChildren(HAnimSegment324)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.setName("r_ring2")
HAnimJoint325.setDEF("hanim_r_ring2")
HAnimJoint325.setCenter([-0.1973,0.7287,-0.0777])
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.setName("r_carpal_middle_phalanx_4")
HAnimSegment326.setDEF("hanim_r_carpal_middle_phalanx_4")

HAnimJoint325.addChildren(HAnimSegment326)
HAnimJoint327 = x3d.HAnimJoint()
HAnimJoint327.setName("r_ring3")
HAnimJoint327.setDEF("hanim_r_ring3")
HAnimJoint327.setCenter([-0.1983,0.7045,-0.0767])
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.setName("r_carpal_distal_phalanx_4")
HAnimSegment328.setDEF("hanim_r_carpal_distal_phalanx_4")
HAnimSite329 = x3d.HAnimSite()
HAnimSite329.setName("r_ring_distal_tip")
HAnimSite329.setDEF("hanim_r_ring_distal_tip")
HAnimSite329.setTranslation([-0.1934,0.6778,-0.0693])

HAnimSegment328.addChildren(HAnimSite329)

HAnimJoint327.addChildren(HAnimSegment328)

HAnimJoint325.addChildren(HAnimJoint327)

HAnimJoint323.addChildren(HAnimJoint325)

HAnimJoint321.addChildren(HAnimJoint323)

HAnimJoint288.addChildren(HAnimJoint321)
HAnimJoint330 = x3d.HAnimJoint()
HAnimJoint330.setName("r_pinky0")
HAnimJoint330.setDEF("hanim_r_pinky0")
HAnimJoint330.setCenter([-0.1925,0.8066,-0.1036])
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.setName("r_metacarpal_5")
HAnimSegment331.setDEF("hanim_r_metacarpal_5")

HAnimJoint330.addChildren(HAnimSegment331)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.setName("r_pinky1")
HAnimJoint332.setDEF("hanim_r_pinky1")
HAnimJoint332.setCenter([-0.1925,0.7866,-0.1036])
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.setName("r_carpal_proximal_phalanx_5")
HAnimSegment333.setDEF("hanim_r_carpal_proximal_phalanx_5")

HAnimJoint332.addChildren(HAnimSegment333)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.setName("r_pinky2")
HAnimJoint334.setDEF("hanim_r_pinky2")
HAnimJoint334.setCenter([-0.1938,0.7452,-0.1024])
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.setName("r_carpal_middle_phalanx_5")
HAnimSegment335.setDEF("hanim_r_carpal_middle_phalanx_5")

HAnimJoint334.addChildren(HAnimSegment335)
HAnimJoint336 = x3d.HAnimJoint()
HAnimJoint336.setName("r_pinky3")
HAnimJoint336.setDEF("hanim_r_pinky3")
HAnimJoint336.setCenter([-0.1948,0.7277,-0.1017])
HAnimSegment337 = x3d.HAnimSegment()
HAnimSegment337.setName("r_carpal_distal_phalanx_5")
HAnimSegment337.setDEF("hanim_r_carpal_distal_phalanx_5")
HAnimSite338 = x3d.HAnimSite()
HAnimSite338.setName("r_pinky_distal_tip")
HAnimSite338.setDEF("hanim_r_pinky_distal_tip")
HAnimSite338.setTranslation([-0.1938,0.7035,-0.0949])

HAnimSegment337.addChildren(HAnimSite338)

HAnimJoint336.addChildren(HAnimSegment337)

HAnimJoint334.addChildren(HAnimJoint336)

HAnimJoint332.addChildren(HAnimJoint334)

HAnimJoint330.addChildren(HAnimJoint332)

HAnimJoint288.addChildren(HAnimJoint330)

HAnimJoint282.addChildren(HAnimJoint288)

HAnimJoint279.addChildren(HAnimJoint282)

HAnimJoint277.addChildren(HAnimJoint279)

HAnimJoint271.addChildren(HAnimJoint277)

HAnimJoint151.addChildren(HAnimJoint271)

HAnimJoint149.addChildren(HAnimJoint151)

HAnimJoint147.addChildren(HAnimJoint149)

HAnimJoint145.addChildren(HAnimJoint147)

HAnimJoint143.addChildren(HAnimJoint145)

HAnimJoint141.addChildren(HAnimJoint143)

HAnimJoint139.addChildren(HAnimJoint141)

HAnimJoint137.addChildren(HAnimJoint139)

HAnimJoint133.addChildren(HAnimJoint137)

HAnimJoint130.addChildren(HAnimJoint133)

HAnimJoint128.addChildren(HAnimJoint130)

HAnimJoint126.addChildren(HAnimJoint128)

HAnimJoint124.addChildren(HAnimJoint126)

HAnimJoint119.addChildren(HAnimJoint124)

HAnimJoint117.addChildren(HAnimJoint119)

HAnimJoint115.addChildren(HAnimJoint117)

HAnimJoint111.addChildren(HAnimJoint115)

HAnimJoint52.addChildren(HAnimJoint111)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimSite339 = x3d.HAnimSite()
HAnimSite339.setName("l_inclined_view")
HAnimSite339.setDEF("hanim_l_inclined_view")
HAnimSite339.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite339.setTranslation([1.62,1.05,2.06])
Viewpoint340 = x3d.Viewpoint()
Viewpoint340.setDEF("hanim_l_inclined_viewpoint")
Viewpoint340.setDescription("left inclined")
Viewpoint340.setPosition([0,0,0])

HAnimSite339.addChildren(Viewpoint340)

HAnimHumanoid43.addViewpoints(HAnimSite339)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.setName("r_inclined_view")
HAnimSite341.setDEF("hanim_r_inclined_view")
HAnimSite341.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite341.setTranslation([-1.62,1.05,2.06])
Viewpoint342 = x3d.Viewpoint()
Viewpoint342.setDEF("hanim_r_inclined_viewpoint")
Viewpoint342.setCenterOfRotation([0,0.9,0])
Viewpoint342.setDescription("right inclined")
Viewpoint342.setPosition([0,0,0])

HAnimSite341.addChildren(Viewpoint342)

HAnimHumanoid43.addViewpoints(HAnimSite341)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.setName("front_view")
HAnimSite343.setDEF("hanim_front_view")
HAnimSite343.setTranslation([0,0.85,2.58])
Viewpoint344 = x3d.Viewpoint()
Viewpoint344.setDEF("hanim_front_viewpoint")
Viewpoint344.setCenterOfRotation([0,0.9,0])
Viewpoint344.setDescription("front")
Viewpoint344.setPosition([0,0,0])

HAnimSite343.addChildren(Viewpoint344)

HAnimHumanoid43.addViewpoints(HAnimSite343)
HAnimSite345 = x3d.HAnimSite()
HAnimSite345.setName("back_view")
HAnimSite345.setDEF("hanim_back_view")
HAnimSite345.setRotation([0,1,0,3.14])
HAnimSite345.setTranslation([0,0.85,-2.58])
Viewpoint346 = x3d.Viewpoint()
Viewpoint346.setDEF("hanim_back_viewpoint")
Viewpoint346.setCenterOfRotation([0,0.9,0])
Viewpoint346.setDescription("back")
Viewpoint346.setPosition([0,0,0])

HAnimSite345.addChildren(Viewpoint346)

HAnimHumanoid43.addViewpoints(HAnimSite345)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.setName("l_side_view")
HAnimSite347.setDEF("hanim_l_side_view")
HAnimSite347.setRotation([0,1,0,1.5708])
HAnimSite347.setTranslation([2.6,0.854,0])
Viewpoint348 = x3d.Viewpoint()
Viewpoint348.setDEF("hanim_l_side_viewpoint")
Viewpoint348.setCenterOfRotation([0,0.9,0])
Viewpoint348.setDescription("left side")
Viewpoint348.setPosition([0,0,0])

HAnimSite347.addChildren(Viewpoint348)

HAnimHumanoid43.addViewpoints(HAnimSite347)
HAnimSite349 = x3d.HAnimSite()
HAnimSite349.setName("Top_view")
HAnimSite349.setDEF("hanim_Top_view")
HAnimSite349.setRotation([1,0,0,-1.57])
HAnimSite349.setTranslation([0,3.5,0])
Viewpoint350 = x3d.Viewpoint()
Viewpoint350.setDEF("hanim_Top_viewpoint")
Viewpoint350.setCenterOfRotation([0,0.9,0])
Viewpoint350.setDescription("Top")
Viewpoint350.setPosition([0,0,0])

HAnimSite349.addChildren(Viewpoint350)

HAnimHumanoid43.addViewpoints(HAnimSite349)
HAnimSite351 = x3d.HAnimSite()
HAnimSite351.setName("front_close_view")
HAnimSite351.setDEF("hanim_front_close_view")
HAnimSite351.setTranslation([0,0.854,1.575])
Viewpoint352 = x3d.Viewpoint()
Viewpoint352.setDEF("hanim_front_close_viewpoint")
Viewpoint352.setCenterOfRotation([0,0,1.575])
Viewpoint352.setDescription("front close")
Viewpoint352.setPosition([0,0,0])

HAnimSite351.addChildren(Viewpoint352)

HAnimHumanoid43.addViewpoints(HAnimSite351)
HAnimSite353 = x3d.HAnimSite()
HAnimSite353.setName("side_close_view")
HAnimSite353.setDEF("hanim_side_close_view")
HAnimSite353.setRotation([0,1,0,1.5708])
HAnimSite353.setTranslation([1.56,0.854,0])
Viewpoint354 = x3d.Viewpoint()
Viewpoint354.setDEF("hanim_side_close_viewpoint")
Viewpoint354.setCenterOfRotation([1.6,0,0])
Viewpoint354.setDescription("side close")
Viewpoint354.setPosition([0,0,0])

HAnimSite353.addChildren(Viewpoint354)

HAnimHumanoid43.addViewpoints(HAnimSite353)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.setName("head_front_close_view")
HAnimSite355.setDEF("hanim_head_front_close_view")
HAnimSite355.setTranslation([0,1.5,1])
Viewpoint356 = x3d.Viewpoint()
Viewpoint356.setDEF("hanim_head_front_close_viewpoint")
Viewpoint356.setCenterOfRotation([0,0,1])
Viewpoint356.setDescription("head front close")
Viewpoint356.setPosition([0,0,0])

HAnimSite355.addChildren(Viewpoint356)

HAnimHumanoid43.addViewpoints(HAnimSite355)
HAnimSite357 = x3d.HAnimSite()
HAnimSite357.setName("chest_front_close_view")
HAnimSite357.setDEF("hanim_chest_front_close_view")
HAnimSite357.setTranslation([0,1.2,1])
Viewpoint358 = x3d.Viewpoint()
Viewpoint358.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint358.setCenterOfRotation([0,0,1])
Viewpoint358.setDescription("chest front close")
Viewpoint358.setPosition([0,0,0])

HAnimSite357.addChildren(Viewpoint358)

HAnimHumanoid43.addViewpoints(HAnimSite357)
HAnimSite359 = x3d.HAnimSite()
HAnimSite359.setName("pelvis_front_close_view")
HAnimSite359.setDEF("hanim_pelvis_front_close_view")
HAnimSite359.setTranslation([0,0.8,1])
Viewpoint360 = x3d.Viewpoint()
Viewpoint360.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint360.setCenterOfRotation([0,0,1])
Viewpoint360.setDescription("pelvis front close")
Viewpoint360.setPosition([0,0,0])

HAnimSite359.addChildren(Viewpoint360)

HAnimHumanoid43.addViewpoints(HAnimSite359)
HAnimSite361 = x3d.HAnimSite()
HAnimSite361.setName("knees_front_close_view")
HAnimSite361.setDEF("hanim_knees_front_close_view")
HAnimSite361.setTranslation([0,0.4,1])
Viewpoint362 = x3d.Viewpoint()
Viewpoint362.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint362.setCenterOfRotation([0,0.4,0])
Viewpoint362.setDescription("knees front close")
Viewpoint362.setPosition([0,0,0])

HAnimSite361.addChildren(Viewpoint362)

HAnimHumanoid43.addViewpoints(HAnimSite361)
HAnimSite363 = x3d.HAnimSite()
HAnimSite363.setName("feet_front_close_view")
HAnimSite363.setDEF("hanim_feet_front_close_view")
HAnimSite363.setTranslation([0,0,1])
Viewpoint364 = x3d.Viewpoint()
Viewpoint364.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint364.setDescription("feet front close")
Viewpoint364.setPosition([0,0,0])

HAnimSite363.addChildren(Viewpoint364)

HAnimHumanoid43.addViewpoints(HAnimSite363)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.setName("eye_level_view")
HAnimSite365.setDEF("hanim_eye_level_view")
HAnimSite365.setTranslation([0,1.6332,0.0502])
Viewpoint366 = x3d.Viewpoint()
Viewpoint366.setDEF("hanim_eye_level_viewpoint")
Viewpoint366.setDescription("eye level looking forward")
Viewpoint366.setOrientation([0,1,0,3.141593])
Viewpoint366.setPosition([0,0,0])

HAnimSite365.addChildren(Viewpoint366)

HAnimHumanoid43.addViewpoints(HAnimSite365)
HAnimSite367 = x3d.HAnimSite()
HAnimSite367.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite367)
HAnimSite368 = x3d.HAnimSite()
HAnimSite368.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite368)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.setUSE("hanim_l_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite369)
HAnimSite370 = x3d.HAnimSite()
HAnimSite370.setUSE("hanim_r_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite370)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint371)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint372)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint373)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint374)
HAnimJoint375 = x3d.HAnimJoint()
HAnimJoint375.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint375)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint376)
HAnimJoint377 = x3d.HAnimJoint()
HAnimJoint377.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint377)
HAnimJoint378 = x3d.HAnimJoint()
HAnimJoint378.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint378)
HAnimJoint379 = x3d.HAnimJoint()
HAnimJoint379.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint379)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint380)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint381)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint382)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint383)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint384)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint385)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint386)
HAnimJoint387 = x3d.HAnimJoint()
HAnimJoint387.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint387)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint388)
HAnimJoint389 = x3d.HAnimJoint()
HAnimJoint389.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint389)
HAnimJoint390 = x3d.HAnimJoint()
HAnimJoint390.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint390)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint391)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint392)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint393)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint394)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint395)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint396)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint397)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint398)
HAnimJoint399 = x3d.HAnimJoint()
HAnimJoint399.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint399)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint400)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint401)
HAnimJoint402 = x3d.HAnimJoint()
HAnimJoint402.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint402)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint403)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint404)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint405)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint406)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint407)
HAnimJoint408 = x3d.HAnimJoint()
HAnimJoint408.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint408)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint409)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint410)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.setUSE("hanim_l_index0")

HAnimHumanoid43.addJoints(HAnimJoint411)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.setUSE("hanim_r_index0")

HAnimHumanoid43.addJoints(HAnimJoint412)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setUSE("hanim_l_index1")

HAnimHumanoid43.addJoints(HAnimJoint413)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.setUSE("hanim_r_index1")

HAnimHumanoid43.addJoints(HAnimJoint414)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.setUSE("hanim_l_index2")

HAnimHumanoid43.addJoints(HAnimJoint415)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.setUSE("hanim_r_index2")

HAnimHumanoid43.addJoints(HAnimJoint416)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setUSE("hanim_l_index3")

HAnimHumanoid43.addJoints(HAnimJoint417)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setUSE("hanim_r_index3")

HAnimHumanoid43.addJoints(HAnimJoint418)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint419)
HAnimJoint420 = x3d.HAnimJoint()
HAnimJoint420.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint420)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint422)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setUSE("hanim_l_middle0")

HAnimHumanoid43.addJoints(HAnimJoint423)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.setUSE("hanim_r_middle0")

HAnimHumanoid43.addJoints(HAnimJoint424)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setUSE("hanim_l_middle1")

HAnimHumanoid43.addJoints(HAnimJoint425)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.setUSE("hanim_r_middle1")

HAnimHumanoid43.addJoints(HAnimJoint426)
HAnimJoint427 = x3d.HAnimJoint()
HAnimJoint427.setUSE("hanim_l_middle2")

HAnimHumanoid43.addJoints(HAnimJoint427)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.setUSE("hanim_r_middle2")

HAnimHumanoid43.addJoints(HAnimJoint428)
HAnimJoint429 = x3d.HAnimJoint()
HAnimJoint429.setUSE("hanim_l_middle3")

HAnimHumanoid43.addJoints(HAnimJoint429)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setUSE("hanim_r_middle3")

HAnimHumanoid43.addJoints(HAnimJoint430)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.setUSE("hanim_l_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint431)
HAnimJoint432 = x3d.HAnimJoint()
HAnimJoint432.setUSE("hanim_r_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint432)
HAnimJoint433 = x3d.HAnimJoint()
HAnimJoint433.setUSE("hanim_l_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint433)
HAnimJoint434 = x3d.HAnimJoint()
HAnimJoint434.setUSE("hanim_r_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint434)
HAnimJoint435 = x3d.HAnimJoint()
HAnimJoint435.setUSE("hanim_l_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint435)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.setUSE("hanim_r_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint436)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setUSE("hanim_l_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint437)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setUSE("hanim_r_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint438)
HAnimJoint439 = x3d.HAnimJoint()
HAnimJoint439.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint439)
HAnimJoint440 = x3d.HAnimJoint()
HAnimJoint440.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint440)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.setUSE("hanim_l_ring0")

HAnimHumanoid43.addJoints(HAnimJoint441)
HAnimJoint442 = x3d.HAnimJoint()
HAnimJoint442.setUSE("hanim_r_ring0")

HAnimHumanoid43.addJoints(HAnimJoint442)
HAnimJoint443 = x3d.HAnimJoint()
HAnimJoint443.setUSE("hanim_l_ring1")

HAnimHumanoid43.addJoints(HAnimJoint443)
HAnimJoint444 = x3d.HAnimJoint()
HAnimJoint444.setUSE("hanim_r_ring1")

HAnimHumanoid43.addJoints(HAnimJoint444)
HAnimJoint445 = x3d.HAnimJoint()
HAnimJoint445.setUSE("hanim_l_ring2")

HAnimHumanoid43.addJoints(HAnimJoint445)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setUSE("hanim_r_ring2")

HAnimHumanoid43.addJoints(HAnimJoint446)
HAnimJoint447 = x3d.HAnimJoint()
HAnimJoint447.setUSE("hanim_l_ring3")

HAnimHumanoid43.addJoints(HAnimJoint447)
HAnimJoint448 = x3d.HAnimJoint()
HAnimJoint448.setUSE("hanim_r_ring3")

HAnimHumanoid43.addJoints(HAnimJoint448)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint449)
HAnimJoint450 = x3d.HAnimJoint()
HAnimJoint450.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint450)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint451)
HAnimJoint452 = x3d.HAnimJoint()
HAnimJoint452.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint452)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint453)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint454)
HAnimJoint455 = x3d.HAnimJoint()
HAnimJoint455.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint455)
HAnimJoint456 = x3d.HAnimJoint()
HAnimJoint456.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint456)
HAnimJoint457 = x3d.HAnimJoint()
HAnimJoint457.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint457)
HAnimJoint458 = x3d.HAnimJoint()
HAnimJoint458.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint458)
HAnimJoint459 = x3d.HAnimJoint()
HAnimJoint459.setUSE("hanim_l_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint459)
HAnimJoint460 = x3d.HAnimJoint()
HAnimJoint460.setUSE("hanim_r_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint460)
HAnimJoint461 = x3d.HAnimJoint()
HAnimJoint461.setUSE("hanim_l_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint461)
HAnimJoint462 = x3d.HAnimJoint()
HAnimJoint462.setUSE("hanim_r_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint462)
HAnimJoint463 = x3d.HAnimJoint()
HAnimJoint463.setUSE("hanim_l_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint463)
HAnimJoint464 = x3d.HAnimJoint()
HAnimJoint464.setUSE("hanim_r_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint464)
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.setUSE("hanim_pelvis")

HAnimHumanoid43.addSegments(HAnimSegment465)
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setUSE("hanim_skull")

HAnimHumanoid43.addSegments(HAnimSegment466)
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.setUSE("hanim_jaw")

HAnimHumanoid43.addSegments(HAnimSegment467)
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.setUSE("hanim_c1")

HAnimHumanoid43.addSegments(HAnimSegment468)
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.setUSE("hanim_c2")

HAnimHumanoid43.addSegments(HAnimSegment469)
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.setUSE("hanim_c3")

HAnimHumanoid43.addSegments(HAnimSegment470)
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setUSE("hanim_c4")

HAnimHumanoid43.addSegments(HAnimSegment471)
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.setUSE("hanim_c5")

HAnimHumanoid43.addSegments(HAnimSegment472)
HAnimSegment473 = x3d.HAnimSegment()
HAnimSegment473.setUSE("hanim_c6")

HAnimHumanoid43.addSegments(HAnimSegment473)
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setUSE("hanim_c7")

HAnimHumanoid43.addSegments(HAnimSegment474)
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.setUSE("hanim_t1")

HAnimHumanoid43.addSegments(HAnimSegment475)
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.setUSE("hanim_t2")

HAnimHumanoid43.addSegments(HAnimSegment476)
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.setUSE("hanim_t3")

HAnimHumanoid43.addSegments(HAnimSegment477)
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.setUSE("hanim_t4")

HAnimHumanoid43.addSegments(HAnimSegment478)
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setUSE("hanim_t5")

HAnimHumanoid43.addSegments(HAnimSegment479)
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.setUSE("hanim_t6")

HAnimHumanoid43.addSegments(HAnimSegment480)
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.setUSE("hanim_t7")

HAnimHumanoid43.addSegments(HAnimSegment481)
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.setUSE("hanim_t8")

HAnimHumanoid43.addSegments(HAnimSegment482)
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.setUSE("hanim_t9")

HAnimHumanoid43.addSegments(HAnimSegment483)
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.setUSE("hanim_t10")

HAnimHumanoid43.addSegments(HAnimSegment484)
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.setUSE("hanim_t11")

HAnimHumanoid43.addSegments(HAnimSegment485)
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setUSE("hanim_t12")

HAnimHumanoid43.addSegments(HAnimSegment486)
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.setUSE("hanim_l1")

HAnimHumanoid43.addSegments(HAnimSegment487)
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.setUSE("hanim_l2")

HAnimHumanoid43.addSegments(HAnimSegment488)
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.setUSE("hanim_l3")

HAnimHumanoid43.addSegments(HAnimSegment489)
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setUSE("hanim_l4")

HAnimHumanoid43.addSegments(HAnimSegment490)
HAnimSegment491 = x3d.HAnimSegment()
HAnimSegment491.setUSE("hanim_l5")

HAnimHumanoid43.addSegments(HAnimSegment491)
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.setUSE("hanim_sacrum")

HAnimHumanoid43.addSegments(HAnimSegment492)
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.setUSE("hanim_l_calf")

HAnimHumanoid43.addSegments(HAnimSegment493)
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.setUSE("hanim_r_calf")

HAnimHumanoid43.addSegments(HAnimSegment494)
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.setUSE("hanim_l_carpal")

HAnimHumanoid43.addSegments(HAnimSegment495)
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.setUSE("hanim_r_carpal")

HAnimHumanoid43.addSegments(HAnimSegment496)
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment497)
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment498)
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment499)
HAnimSegment500 = x3d.HAnimSegment()
HAnimSegment500.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment500)
HAnimSegment501 = x3d.HAnimSegment()
HAnimSegment501.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment501)
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment502)
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment503)
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment504)
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment505)
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment506)
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment507)
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment508)
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment509)
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment510)
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment511)
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment512)
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment513)
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment514)
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment515)
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment516)
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment517)
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment518)
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment519)
HAnimSegment520 = x3d.HAnimSegment()
HAnimSegment520.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment520)
HAnimSegment521 = x3d.HAnimSegment()
HAnimSegment521.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment521)
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment522)
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment523)
HAnimSegment524 = x3d.HAnimSegment()
HAnimSegment524.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment524)
HAnimSegment525 = x3d.HAnimSegment()
HAnimSegment525.setUSE("hanim_l_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment525)
HAnimSegment526 = x3d.HAnimSegment()
HAnimSegment526.setUSE("hanim_r_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment526)
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.setUSE("hanim_l_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment527)
HAnimSegment528 = x3d.HAnimSegment()
HAnimSegment528.setUSE("hanim_r_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment528)
HAnimSegment529 = x3d.HAnimSegment()
HAnimSegment529.setUSE("hanim_l_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment529)
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setUSE("hanim_r_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment530)
HAnimSegment531 = x3d.HAnimSegment()
HAnimSegment531.setUSE("hanim_l_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment531)
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.setUSE("hanim_r_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment532)
HAnimSegment533 = x3d.HAnimSegment()
HAnimSegment533.setUSE("hanim_l_forearm")

HAnimHumanoid43.addSegments(HAnimSegment533)
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setUSE("hanim_r_forearm")

HAnimHumanoid43.addSegments(HAnimSegment534)
HAnimSegment535 = x3d.HAnimSegment()
HAnimSegment535.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment535)
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment536)
HAnimSegment537 = x3d.HAnimSegment()
HAnimSegment537.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment537)
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment538)
HAnimSegment539 = x3d.HAnimSegment()
HAnimSegment539.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment539)
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment540)
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment541)
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment542)
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment543)
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment544)
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment545)
HAnimSegment546 = x3d.HAnimSegment()
HAnimSegment546.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment546)
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setUSE("hanim_l_scapula")

HAnimHumanoid43.addSegments(HAnimSegment547)
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.setUSE("hanim_r_scapula")

HAnimHumanoid43.addSegments(HAnimSegment548)
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setUSE("hanim_l_talus")

HAnimHumanoid43.addSegments(HAnimSegment549)
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setUSE("hanim_r_talus")

HAnimHumanoid43.addSegments(HAnimSegment550)
HAnimSegment551 = x3d.HAnimSegment()
HAnimSegment551.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment551)
HAnimSegment552 = x3d.HAnimSegment()
HAnimSegment552.setUSE("hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment552)
HAnimSegment553 = x3d.HAnimSegment()
HAnimSegment553.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment553)
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment554)
HAnimSegment555 = x3d.HAnimSegment()
HAnimSegment555.setUSE("hanim_l_thigh")

HAnimHumanoid43.addSegments(HAnimSegment555)
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.setUSE("hanim_r_thigh")

HAnimHumanoid43.addSegments(HAnimSegment556)
HAnimSegment557 = x3d.HAnimSegment()
HAnimSegment557.setUSE("hanim_l_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment557)
HAnimSegment558 = x3d.HAnimSegment()
HAnimSegment558.setUSE("hanim_r_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.setUSE("hanim_crotch_pt")

HAnimHumanoid43.addSites(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.setUSE("hanim_skull_tip")

HAnimHumanoid43.addSites(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.setUSE("hanim_sellion_pt")

HAnimHumanoid43.addSites(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.addSites(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.addSites(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.addSites(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.addSites(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.setUSE("hanim_substernale_pt")

HAnimHumanoid43.addSites(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid43.addSites(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid43.addSites(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.setUSE("hanim_navel_pt")

HAnimHumanoid43.addSites(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.addSites(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.addSites(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.setUSE("hanim_l_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.setUSE("hanim_r_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite609)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite610)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite611)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite612)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite613)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite614)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite615)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite616)
HAnimSite617 = x3d.HAnimSite()
HAnimSite617.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite617)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite618)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite619)
HAnimSite620 = x3d.HAnimSite()
HAnimSite620.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite620)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite621)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite622)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite623)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite624)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite625)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.addSites(HAnimSite626)
HAnimSite627 = x3d.HAnimSite()
HAnimSite627.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.addSites(HAnimSite627)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite628)
HAnimSite629 = x3d.HAnimSite()
HAnimSite629.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite629)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite630)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite631)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite632)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite633)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite634)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite635)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid43.addSites(HAnimSite636)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid43.addSites(HAnimSite637)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite638)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite639)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite640)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite641)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite642)
HAnimSite643 = x3d.HAnimSite()
HAnimSite643.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite643)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite644)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite645)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite646)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite647)
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite648)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite649)

Scene29.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/HAnim2SpecificationLOA3Invisible_RoundTrip.x3d")
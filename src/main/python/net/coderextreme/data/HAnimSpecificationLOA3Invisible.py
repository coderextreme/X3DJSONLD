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
meta3.setContent("HAnimSpecificationLOA3Invisible.x3d")

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
meta7.setContent("11 July 2020")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("HAnimSpecificationLOA3Illustrated.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnimSpecificationLOA3Motion.x3d")

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
meta27.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnimSpecificationLOA3Invisible.x3d")

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
HAnimHumanoid43.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"])
HAnimHumanoid43.setVersion("1.0")
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.setName("humanoid_root")
HAnimJoint44.setDEF("hanim_humanoid_root")
HAnimJoint44.setCenter([0,0.824,0.0277])
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.setName("sacrum")
HAnimSegment45.setDEF("hanim_sacrum")

HAnimJoint44.addChildren(HAnimSegment45)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.setName("sacroiliac")
HAnimJoint46.setDEF("hanim_sacroiliac")
HAnimJoint46.setCenter([0,0.9149,0.0016])
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.setName("pelvis")
HAnimSegment47.setDEF("hanim_pelvis")
HAnimSite48 = x3d.HAnimSite()
HAnimSite48.setName("r_iliocristale_pt")
HAnimSite48.setDEF("hanim_r_iliocristale_pt")
HAnimSite48.setTranslation([-0.1525,1.0628,0.0035])

HAnimSegment47.addChildren(HAnimSite48)
HAnimSite49 = x3d.HAnimSite()
HAnimSite49.setName("r_trochanterion_pt")
HAnimSite49.setDEF("hanim_r_trochanterion_pt")
HAnimSite49.setTranslation([-0.1689,0.8419,0.0352])

HAnimSegment47.addChildren(HAnimSite49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.setName("l_iliocristale_pt")
HAnimSite50.setDEF("hanim_l_iliocristale_pt")
HAnimSite50.setTranslation([0.1612,1.0537,0.0008])

HAnimSegment47.addChildren(HAnimSite50)
HAnimSite51 = x3d.HAnimSite()
HAnimSite51.setName("l_trochanterion_pt")
HAnimSite51.setDEF("hanim_l_trochanterion_pt")
HAnimSite51.setTranslation([0.1677,0.8336,0.0303])

HAnimSegment47.addChildren(HAnimSite51)
HAnimSite52 = x3d.HAnimSite()
HAnimSite52.setName("r_asis_pt")
HAnimSite52.setDEF("hanim_r_asis_pt")
HAnimSite52.setTranslation([-0.0887,1.0021,0.1112])

HAnimSegment47.addChildren(HAnimSite52)
HAnimSite53 = x3d.HAnimSite()
HAnimSite53.setName("l_asis_pt")
HAnimSite53.setDEF("hanim_l_asis_pt")
HAnimSite53.setTranslation([0.0925,0.9983,0.1052])

HAnimSegment47.addChildren(HAnimSite53)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.setName("r_psis_pt")
HAnimSite54.setDEF("hanim_r_psis_pt")
HAnimSite54.setTranslation([-0.0716,1.019,-0.1138])

HAnimSegment47.addChildren(HAnimSite54)
HAnimSite55 = x3d.HAnimSite()
HAnimSite55.setName("l_psis_pt")
HAnimSite55.setDEF("hanim_l_psis_pt")
HAnimSite55.setTranslation([0.0774,1.019,-0.1151])

HAnimSegment47.addChildren(HAnimSite55)
HAnimSite56 = x3d.HAnimSite()
HAnimSite56.setName("crotch_pt")
HAnimSite56.setDEF("hanim_crotch_pt")
HAnimSite56.setTranslation([0.0034,0.8266,0.0257])

HAnimSegment47.addChildren(HAnimSite56)

HAnimJoint46.addChildren(HAnimSegment47)
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.setName("l_hip")
HAnimJoint57.setDEF("hanim_l_hip")
HAnimJoint57.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment58 = x3d.HAnimSegment()
HAnimSegment58.setName("l_thigh")
HAnimSegment58.setDEF("hanim_l_thigh")
HAnimSite59 = x3d.HAnimSite()
HAnimSite59.setName("l_knee_crease_pt")
HAnimSite59.setDEF("hanim_l_knee_crease_pt")
HAnimSite59.setTranslation([0.0993,0.4881,-0.0309])

HAnimSegment58.addChildren(HAnimSite59)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.setName("l_femoral_lateral_epicn_pt")
HAnimSite60.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite60.setTranslation([0.1598,0.4967,0.0297])

HAnimSegment58.addChildren(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.setName("l_femoral_medial_epicn_pt")
HAnimSite61.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite61.setTranslation([0.0398,0.4946,0.0303])

HAnimSegment58.addChildren(HAnimSite61)

HAnimJoint57.addChildren(HAnimSegment58)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.setName("l_knee")
HAnimJoint62.setDEF("hanim_l_knee")
HAnimJoint62.setCenter([0.104,0.4867,0.0308])
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.setName("l_calf")
HAnimSegment63.setDEF("hanim_l_calf")

HAnimJoint62.addChildren(HAnimSegment63)
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.setName("l_ankle")
HAnimJoint64.setDEF("hanim_l_ankle")
HAnimJoint64.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.setName("l_hindfoot")
HAnimSegment65.setDEF("hanim_l_hindfoot")
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.setName("l_lateral_malleolus_pt")
HAnimSite66.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite66.setTranslation([0.1308,0.0597,-0.1032])

HAnimSegment65.addChildren(HAnimSite66)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.setName("l_medial_malleolus_pt")
HAnimSite67.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite67.setTranslation([0.089,0.0716,-0.0881])

HAnimSegment65.addChildren(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.setName("l_sphyrion_pt")
HAnimSite68.setDEF("hanim_l_sphyrion_pt")
HAnimSite68.setTranslation([0.089,0.0575,-0.0943])

HAnimSegment65.addChildren(HAnimSite68)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_calcaneous_post_pt")
HAnimSite69.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite69.setTranslation([0.0974,0.0259,-0.1171])

HAnimSegment65.addChildren(HAnimSite69)

HAnimJoint64.addChildren(HAnimSegment65)
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.setName("l_subtalar")
HAnimJoint70.setDEF("hanim_l_subtalar")
HAnimJoint70.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment71 = x3d.HAnimSegment()
HAnimSegment71.setName("l_midproximal")
HAnimSegment71.setDEF("hanim_l_midproximal")

HAnimJoint70.addChildren(HAnimSegment71)
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.setName("l_midtarsal")
HAnimJoint72.setDEF("hanim_l_midtarsal")
HAnimJoint72.setCenter([0.1086,0.0001,0.0368])
HAnimSegment73 = x3d.HAnimSegment()
HAnimSegment73.setName("l_middistal")
HAnimSegment73.setDEF("hanim_l_middistal")
HAnimSite74 = x3d.HAnimSite()
HAnimSite74.setName("l_metatarsal_pha1_pt")
HAnimSite74.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite74.setTranslation([0.0816,0.0232,0.0106])

HAnimSegment73.addChildren(HAnimSite74)

HAnimJoint72.addChildren(HAnimSegment73)
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.setName("l_metatarsal")
HAnimJoint75.setDEF("hanim_l_metatarsal")
HAnimJoint75.setCenter([0.1086,0,0.0762])
HAnimSegment76 = x3d.HAnimSegment()
HAnimSegment76.setName("l_forefoot")
HAnimSegment76.setDEF("hanim_l_forefoot")
HAnimSite77 = x3d.HAnimSite()
HAnimSite77.setName("l_forefoot_tip")
HAnimSite77.setDEF("hanim_l_forefoot_tip")
HAnimSite77.setTranslation([0.1354,0.0016,0.1476])

HAnimSegment76.addChildren(HAnimSite77)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("l_metatarsal_pha5_pt")
HAnimSite78.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite78.setTranslation([0.1825,0.007,0.0928])

HAnimSegment76.addChildren(HAnimSite78)
HAnimSite79 = x3d.HAnimSite()
HAnimSite79.setName("l_digit2_pt")
HAnimSite79.setDEF("hanim_l_digit2_pt")
HAnimSite79.setTranslation([0.1195,0.0079,0.1433])

HAnimSegment76.addChildren(HAnimSite79)

HAnimJoint75.addChildren(HAnimSegment76)

HAnimJoint72.addChildren(HAnimJoint75)

HAnimJoint70.addChildren(HAnimJoint72)

HAnimJoint64.addChildren(HAnimJoint70)

HAnimJoint62.addChildren(HAnimJoint64)

HAnimJoint57.addChildren(HAnimJoint62)

HAnimJoint46.addChildren(HAnimJoint57)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setName("r_hip")
HAnimJoint80.setDEF("hanim_r_hip")
HAnimJoint80.setCenter([-0.0961,0.9124,-0.0001])
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.setName("r_thigh")
HAnimSegment81.setDEF("hanim_r_thigh")
HAnimSite82 = x3d.HAnimSite()
HAnimSite82.setName("r_knee_crease_pt")
HAnimSite82.setDEF("hanim_r_knee_crease_pt")
HAnimSite82.setTranslation([-0.0825,0.4932,-0.0326])

HAnimSegment81.addChildren(HAnimSite82)
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.setName("r_femoral_lateral_epicn_pt")
HAnimSite83.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite83.setTranslation([-0.1421,0.4992,0.031])

HAnimSegment81.addChildren(HAnimSite83)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.setName("r_femoral_medial_epicn_pt")
HAnimSite84.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite84.setTranslation([-0.0221,0.5014,0.0289])

HAnimSegment81.addChildren(HAnimSite84)

HAnimJoint80.addChildren(HAnimSegment81)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.setName("r_knee")
HAnimJoint85.setDEF("hanim_r_knee")
HAnimJoint85.setCenter([-0.104,0.4867,0.0308])
HAnimSegment86 = x3d.HAnimSegment()
HAnimSegment86.setName("r_calf")
HAnimSegment86.setDEF("hanim_r_calf")

HAnimJoint85.addChildren(HAnimSegment86)
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.setName("r_ankle")
HAnimJoint87.setDEF("hanim_r_ankle")
HAnimJoint87.setCenter([-0.1101,0.0656,-0.0736])
HAnimSegment88 = x3d.HAnimSegment()
HAnimSegment88.setName("r_hindfoot")
HAnimSegment88.setDEF("hanim_r_hindfoot")
HAnimSite89 = x3d.HAnimSite()
HAnimSite89.setName("r_lateral_malleolus_pt")
HAnimSite89.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite89.setTranslation([-0.1006,0.0658,-0.1075])

HAnimSegment88.addChildren(HAnimSite89)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("r_medial_malleolus_pt")
HAnimSite90.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite90.setTranslation([-0.0591,0.076,-0.0928])

HAnimSegment88.addChildren(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.setName("r_sphyrion_pt")
HAnimSite91.setDEF("hanim_r_sphyrion_pt")
HAnimSite91.setTranslation([-0.0603,0.061,-0.1002])

HAnimSegment88.addChildren(HAnimSite91)
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.setName("r_calcaneous_post_pt")
HAnimSite92.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite92.setTranslation([-0.0692,0.0297,-0.1221])

HAnimSegment88.addChildren(HAnimSite92)

HAnimJoint87.addChildren(HAnimSegment88)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.setName("r_subtalar")
HAnimJoint93.setDEF("hanim_r_subtalar")
HAnimJoint93.setCenter([-0.1086,0.0001,-0.0368])
HAnimSegment94 = x3d.HAnimSegment()
HAnimSegment94.setName("r_midproximal")
HAnimSegment94.setDEF("hanim_r_midproximal")

HAnimJoint93.addChildren(HAnimSegment94)
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.setName("r_midtarsal")
HAnimJoint95.setDEF("hanim_r_midtarsal")
HAnimJoint95.setCenter([-0.1086,0.0001,0.0368])
HAnimSegment96 = x3d.HAnimSegment()
HAnimSegment96.setName("r_middistal")
HAnimSegment96.setDEF("hanim_r_middistal")
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("r_metatarsal_pha1_pt")
HAnimSite97.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite97.setTranslation([-0.0521,0.026,0.0127])

HAnimSegment96.addChildren(HAnimSite97)

HAnimJoint95.addChildren(HAnimSegment96)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("r_metatarsal")
HAnimJoint98.setDEF("hanim_r_metatarsal")
HAnimJoint98.setCenter([-0.1086,0,0.0762])
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setName("r_forefoot")
HAnimSegment99.setDEF("hanim_r_forefoot")
HAnimSite100 = x3d.HAnimSite()
HAnimSite100.setName("r_forefoot_tip")
HAnimSite100.setDEF("hanim_r_forefoot_tip")
HAnimSite100.setTranslation([-0.1043,0.0227,0.145])

HAnimSegment99.addChildren(HAnimSite100)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setName("r_metatarsal_pha5_pt")
HAnimSite101.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite101.setTranslation([-0.1523,0.0166,0.0895])

HAnimSegment99.addChildren(HAnimSite101)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.setName("r_digit2_pt")
HAnimSite102.setDEF("hanim_r_digit2_pt")
HAnimSite102.setTranslation([-0.0883,0.0134,0.1383])

HAnimSegment99.addChildren(HAnimSite102)

HAnimJoint98.addChildren(HAnimSegment99)

HAnimJoint95.addChildren(HAnimJoint98)

HAnimJoint93.addChildren(HAnimJoint95)

HAnimJoint87.addChildren(HAnimJoint93)

HAnimJoint85.addChildren(HAnimJoint87)

HAnimJoint80.addChildren(HAnimJoint85)

HAnimJoint46.addChildren(HAnimJoint80)

HAnimJoint44.addChildren(HAnimJoint46)
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("vl5")
HAnimJoint103.setDEF("hanim_vl5")
HAnimJoint103.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.setName("l5")
HAnimSegment104.setDEF("hanim_l5")
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.setName("waist_preferred_post_pt")
HAnimSite105.setDEF("hanim_waist_preferred_post_pt")
HAnimSite105.setTranslation([0,1.0915,-0.1091])

HAnimSegment104.addChildren(HAnimSite105)
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.setName("navel_pt")
HAnimSite106.setDEF("hanim_navel_pt")
HAnimSite106.setTranslation([0.0069,1.0966,0.1017])

HAnimSegment104.addChildren(HAnimSite106)

HAnimJoint103.addChildren(HAnimSegment104)
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.setName("vl4")
HAnimJoint107.setDEF("hanim_vl4")
HAnimJoint107.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment108 = x3d.HAnimSegment()
HAnimSegment108.setName("l4")
HAnimSegment108.setDEF("hanim_l4")

HAnimJoint107.addChildren(HAnimSegment108)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.setName("vl3")
HAnimJoint109.setDEF("hanim_vl3")
HAnimJoint109.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.setName("l3")
HAnimSegment110.setDEF("hanim_l3")

HAnimJoint109.addChildren(HAnimSegment110)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.setName("vl2")
HAnimJoint111.setDEF("hanim_vl2")
HAnimJoint111.setCenter([0.0045,1.1546,-0.08])
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.setName("l2")
HAnimSegment112.setDEF("hanim_l2")
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("r_rib10_pt")
HAnimSite113.setDEF("hanim_r_rib10_pt")
HAnimSite113.setTranslation([-0.0711,1.1941,0.1016])

HAnimSegment112.addChildren(HAnimSite113)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("l_rib10_pt")
HAnimSite114.setDEF("hanim_l_rib10_pt")
HAnimSite114.setTranslation([0.0871,1.1925,0.0992])

HAnimSegment112.addChildren(HAnimSite114)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setName("rib10_midspine_pt")
HAnimSite115.setDEF("hanim_rib10_midspine_pt")
HAnimSite115.setTranslation([0.0049,1.1908,-0.1113])

HAnimSegment112.addChildren(HAnimSite115)

HAnimJoint111.addChildren(HAnimSegment112)
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.setName("vl1")
HAnimJoint116.setDEF("hanim_vl1")
HAnimJoint116.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment117 = x3d.HAnimSegment()
HAnimSegment117.setName("l1")
HAnimSegment117.setDEF("hanim_l1")

HAnimJoint116.addChildren(HAnimSegment117)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.setName("vt12")
HAnimJoint118.setDEF("hanim_vt12")
HAnimJoint118.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.setName("t12")
HAnimSegment119.setDEF("hanim_t12")

HAnimJoint118.addChildren(HAnimSegment119)
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.setName("vt11")
HAnimJoint120.setDEF("hanim_vt11")
HAnimJoint120.setCenter([0.0053,1.2679,-0.081])
HAnimSegment121 = x3d.HAnimSegment()
HAnimSegment121.setName("t11")
HAnimSegment121.setDEF("hanim_t11")

HAnimJoint120.addChildren(HAnimSegment121)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.setName("vt10")
HAnimJoint122.setDEF("hanim_vt10")
HAnimJoint122.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.setName("t10")
HAnimSegment123.setDEF("hanim_t10")
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.setName("substernale_pt")
HAnimSite124.setDEF("hanim_substernale_pt")
HAnimSite124.setTranslation([0.0085,1.2995,0.1147])

HAnimSegment123.addChildren(HAnimSite124)

HAnimJoint122.addChildren(HAnimSegment123)
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.setName("vt9")
HAnimJoint125.setDEF("hanim_vt9")
HAnimJoint125.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment126 = x3d.HAnimSegment()
HAnimSegment126.setName("t9")
HAnimSegment126.setDEF("hanim_t9")
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.setName("r_thelion_pt")
HAnimSite127.setDEF("hanim_r_thelion_pt")
HAnimSite127.setTranslation([-0.0736,1.3385,0.1217])

HAnimSegment126.addChildren(HAnimSite127)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("l_thelion_pt")
HAnimSite128.setDEF("hanim_l_thelion_pt")
HAnimSite128.setTranslation([0.0918,1.3382,0.1192])

HAnimSegment126.addChildren(HAnimSite128)

HAnimJoint125.addChildren(HAnimSegment126)
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.setName("vt8")
HAnimJoint129.setDEF("hanim_vt8")
HAnimJoint129.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment130 = x3d.HAnimSegment()
HAnimSegment130.setName("t8")
HAnimSegment130.setDEF("hanim_t8")

HAnimJoint129.addChildren(HAnimSegment130)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.setName("vt7")
HAnimJoint131.setDEF("hanim_vt7")
HAnimJoint131.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.setName("t7")
HAnimSegment132.setDEF("hanim_t7")

HAnimJoint131.addChildren(HAnimSegment132)
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.setName("vt6")
HAnimJoint133.setDEF("hanim_vt6")
HAnimJoint133.setCenter([0.0059,1.3866,-0.08])
HAnimSegment134 = x3d.HAnimSegment()
HAnimSegment134.setName("t6")
HAnimSegment134.setDEF("hanim_t6")

HAnimJoint133.addChildren(HAnimSegment134)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.setName("vt5")
HAnimJoint135.setDEF("hanim_vt5")
HAnimJoint135.setCenter([0.006,1.4102,-0.0745])
HAnimSegment136 = x3d.HAnimSegment()
HAnimSegment136.setName("t5")
HAnimSegment136.setDEF("hanim_t5")

HAnimJoint135.addChildren(HAnimSegment136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.setName("vt4")
HAnimJoint137.setDEF("hanim_vt4")
HAnimJoint137.setCenter([0.0061,1.432,-0.0675])
HAnimSegment138 = x3d.HAnimSegment()
HAnimSegment138.setName("t4")
HAnimSegment138.setDEF("hanim_t4")

HAnimJoint137.addChildren(HAnimSegment138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.setName("vt3")
HAnimJoint139.setDEF("hanim_vt3")
HAnimJoint139.setCenter([0.0062,1.4583,-0.057])
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.setName("t3")
HAnimSegment140.setDEF("hanim_t3")

HAnimJoint139.addChildren(HAnimSegment140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.setName("vt2")
HAnimJoint141.setDEF("hanim_vt2")
HAnimJoint141.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.setName("t2")
HAnimSegment142.setDEF("hanim_t2")

HAnimJoint141.addChildren(HAnimSegment142)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("vt1")
HAnimJoint143.setDEF("hanim_vt1")
HAnimJoint143.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.setName("t1")
HAnimSegment144.setDEF("hanim_t1")
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.setName("suprasternale_pt")
HAnimSite145.setDEF("hanim_suprasternale_pt")
HAnimSite145.setTranslation([0.0084,1.4714,0.0551])

HAnimSegment144.addChildren(HAnimSite145)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("cervicale_pt")
HAnimSite146.setDEF("hanim_cervicale_pt")
HAnimSite146.setTranslation([0.0064,1.52,-0.0815])

HAnimSegment144.addChildren(HAnimSite146)

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.setName("vc7")
HAnimJoint147.setDEF("hanim_vc7")
HAnimJoint147.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.setName("c7")
HAnimSegment148.setDEF("hanim_c7")
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.setName("r_neck_base_pt")
HAnimSite149.setDEF("hanim_r_neck_base_pt")
HAnimSite149.setTranslation([-0.0419,1.5149,-0.022])

HAnimSegment148.addChildren(HAnimSite149)
HAnimSite150 = x3d.HAnimSite()
HAnimSite150.setName("l_neck_base_pt")
HAnimSite150.setDEF("hanim_l_neck_base_pt")
HAnimSite150.setTranslation([0.0646,1.5141,-0.038])

HAnimSegment148.addChildren(HAnimSite150)

HAnimJoint147.addChildren(HAnimSegment148)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setName("vc6")
HAnimJoint151.setDEF("hanim_vc6")
HAnimJoint151.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment152 = x3d.HAnimSegment()
HAnimSegment152.setName("c6")
HAnimSegment152.setDEF("hanim_c6")

HAnimJoint151.addChildren(HAnimSegment152)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("vc5")
HAnimJoint153.setDEF("hanim_vc5")
HAnimJoint153.setCenter([0.0066,1.552,-0.0082])
HAnimSegment154 = x3d.HAnimSegment()
HAnimSegment154.setName("c5")
HAnimSegment154.setDEF("hanim_c5")

HAnimJoint153.addChildren(HAnimSegment154)
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.setName("vc4")
HAnimJoint155.setDEF("hanim_vc4")
HAnimJoint155.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment156 = x3d.HAnimSegment()
HAnimSegment156.setName("c4")
HAnimSegment156.setDEF("hanim_c4")

HAnimJoint155.addChildren(HAnimSegment156)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setName("vc3")
HAnimJoint157.setDEF("hanim_vc3")
HAnimJoint157.setCenter([0.0066,1.58,-0.0103])
HAnimSegment158 = x3d.HAnimSegment()
HAnimSegment158.setName("c3")
HAnimSegment158.setDEF("hanim_c3")

HAnimJoint157.addChildren(HAnimSegment158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("vc2")
HAnimJoint159.setDEF("hanim_vc2")
HAnimJoint159.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.setName("c2")
HAnimSegment160.setDEF("hanim_c2")

HAnimJoint159.addChildren(HAnimSegment160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("vc1")
HAnimJoint161.setDEF("hanim_vc1")
HAnimJoint161.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.setName("c1")
HAnimSegment162.setDEF("hanim_c1")

HAnimJoint161.addChildren(HAnimSegment162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setName("skullbase")
HAnimJoint163.setDEF("hanim_skullbase")
HAnimJoint163.setCenter([0.0044,1.6209,0.0236])
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.setName("skull")
HAnimSegment164.setDEF("hanim_skull")
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.setName("skull_tip")
HAnimSite165.setDEF("hanim_skull_tip")
HAnimSite165.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry

HAnimSegment164.addChildren(HAnimSite165)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setName("sellion_pt")
HAnimSite166.setDEF("hanim_sellion_pt")
HAnimSite166.setTranslation([0.0058,1.6316,0.0852])

HAnimSegment164.addChildren(HAnimSite166)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("r_infraorbitale_pt")
HAnimSite167.setDEF("hanim_r_infraorbitale_pt")
HAnimSite167.setTranslation([-0.0237,1.6171,0.0752])

HAnimSegment164.addChildren(HAnimSite167)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("l_infraorbitale_pt")
HAnimSite168.setDEF("hanim_l_infraorbitale_pt")
HAnimSite168.setTranslation([0.0341,1.6171,0.0752])

HAnimSegment164.addChildren(HAnimSite168)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.setName("supramenton_pt")
HAnimSite169.setDEF("hanim_supramenton_pt")
HAnimSite169.setTranslation([0.0061,1.541,0.0805])

HAnimSegment164.addChildren(HAnimSite169)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setName("r_tragion_pt")
HAnimSite170.setDEF("hanim_r_tragion_pt")
HAnimSite170.setTranslation([-0.0646,1.6347,0.0302])

HAnimSegment164.addChildren(HAnimSite170)
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.setName("r_gonion_pt")
HAnimSite171.setDEF("hanim_r_gonion_pt")
HAnimSite171.setTranslation([-0.052,1.5529,0.0347])

HAnimSegment164.addChildren(HAnimSite171)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.setName("l_tragion_pt")
HAnimSite172.setDEF("hanim_l_tragion_pt")
HAnimSite172.setTranslation([0.0739,1.6348,0.0282])

HAnimSegment164.addChildren(HAnimSite172)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_gonion_pt")
HAnimSite173.setDEF("hanim_l_gonion_pt")
HAnimSite173.setTranslation([0.0631,1.553,0.033])

HAnimSegment164.addChildren(HAnimSite173)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.setName("nuchale_pt")
HAnimSite174.setDEF("hanim_nuchale_pt")
HAnimSite174.setTranslation([0.0039,1.5972,-0.0796])

HAnimSegment164.addChildren(HAnimSite174)

HAnimJoint163.addChildren(HAnimSegment164)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setName("l_eyeball_joint")
HAnimJoint175.setDEF("hanim_l_eyeball_joint")
HAnimJoint175.setCenter([0.0336,1.6332,0.0502])
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.setName("l_eyeball")
HAnimSegment176.setDEF("hanim_l_eyeball")
HAnimSite177 = x3d.HAnimSite()
HAnimSite177.setName("l_eyeball_site_view")
HAnimSite177.setDEF("hanim_l_eyeball_site_view")
HAnimSite177.setTranslation([0.034,1.64,0.05])
Viewpoint178 = x3d.Viewpoint()
Viewpoint178.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint178.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint178.setOrientation([0,1,0,3.141593])
Viewpoint178.setPosition([0,0,0])

HAnimSite177.addChildren(Viewpoint178)

HAnimSegment176.addChildren(HAnimSite177)

HAnimJoint175.addChildren(HAnimSegment176)

HAnimJoint163.addChildren(HAnimJoint175)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setName("l_eyelid_joint")
HAnimJoint179.setDEF("hanim_l_eyelid_joint")
HAnimJoint179.setCenter([0.0336,1.6332,0.0502])
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.setName("l_eyelid")
HAnimSegment180.setDEF("hanim_l_eyelid")

HAnimJoint179.addChildren(HAnimSegment180)

HAnimJoint163.addChildren(HAnimJoint179)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setName("l_eyebrow_joint")
HAnimJoint181.setDEF("hanim_l_eyebrow_joint")
HAnimJoint181.setCenter([0.0336,1.635,0.0506])
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.setName("l_eyebrow")
HAnimSegment182.setDEF("hanim_l_eyebrow")

HAnimJoint181.addChildren(HAnimSegment182)

HAnimJoint163.addChildren(HAnimJoint181)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setName("r_eyeball_joint")
HAnimJoint183.setDEF("hanim_r_eyeball_joint")
HAnimJoint183.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.setName("r_eyeball")
HAnimSegment184.setDEF("hanim_r_eyeball")
HAnimSite185 = x3d.HAnimSite()
HAnimSite185.setName("r_eyeball_site_view")
HAnimSite185.setDEF("hanim_r_eyeball_site_view")
HAnimSite185.setTranslation([-0.034,1.64,0.05])
Viewpoint186 = x3d.Viewpoint()
Viewpoint186.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint186.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint186.setOrientation([0,1,0,3.141593])
Viewpoint186.setPosition([0,0,0])

HAnimSite185.addChildren(Viewpoint186)

HAnimSegment184.addChildren(HAnimSite185)

HAnimJoint183.addChildren(HAnimSegment184)

HAnimJoint163.addChildren(HAnimJoint183)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setName("r_eyelid_joint")
HAnimJoint187.setDEF("hanim_r_eyelid_joint")
HAnimJoint187.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.setName("r_eyelid")
HAnimSegment188.setDEF("hanim_r_eyelid")

HAnimJoint187.addChildren(HAnimSegment188)

HAnimJoint163.addChildren(HAnimJoint187)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setName("r_eyebrow_joint")
HAnimJoint189.setDEF("hanim_r_eyebrow_joint")
HAnimJoint189.setCenter([-0.0336,1.635,0.0506])
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.setName("r_eyebrow")
HAnimSegment190.setDEF("hanim_r_eyebrow")

HAnimJoint189.addChildren(HAnimSegment190)

HAnimJoint163.addChildren(HAnimJoint189)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.setName("temporomandibular")
HAnimJoint191.setDEF("hanim_temporomandibular")
HAnimJoint191.setCenter([0,1.63,0.015])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.setName("jaw")
HAnimSegment192.setDEF("hanim_jaw")
HAnimSite193 = x3d.HAnimSite()
HAnimSite193.setName("temporomandibular_l_site_pt")
HAnimSite193.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite193.setTranslation([0.045,1.63,0])

HAnimSegment192.addChildren(HAnimSite193)
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.setName("temporomandibular_r_site_pt")
HAnimSite194.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite194.setTranslation([-0.045,1.63,0])

HAnimSegment192.addChildren(HAnimSite194)

HAnimJoint191.addChildren(HAnimSegment192)

HAnimJoint163.addChildren(HAnimJoint191)

HAnimJoint161.addChildren(HAnimJoint163)

HAnimJoint159.addChildren(HAnimJoint161)

HAnimJoint157.addChildren(HAnimJoint159)

HAnimJoint155.addChildren(HAnimJoint157)

HAnimJoint153.addChildren(HAnimJoint155)

HAnimJoint151.addChildren(HAnimJoint153)

HAnimJoint147.addChildren(HAnimJoint151)

HAnimJoint143.addChildren(HAnimJoint147)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.setName("l_sternoclavicular")
HAnimJoint195.setDEF("hanim_l_sternoclavicular")
HAnimJoint195.setCenter([0.082,1.4488,-0.0353])
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.setName("l_clavicle")
HAnimSegment196.setDEF("hanim_l_clavicle")
HAnimSite197 = x3d.HAnimSite()
HAnimSite197.setName("l_clavicale_pt")
HAnimSite197.setDEF("hanim_l_clavicale_pt")
HAnimSite197.setTranslation([0.0271,1.4943,0.0394])

HAnimSegment196.addChildren(HAnimSite197)
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.setName("l_acromion_pt")
HAnimSite198.setDEF("hanim_l_acromion_pt")
HAnimSite198.setTranslation([0.2032,1.476,-0.049])

HAnimSegment196.addChildren(HAnimSite198)
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.setName("l_axilla_ant_pt")
HAnimSite199.setDEF("hanim_l_axilla_ant_pt")
HAnimSite199.setTranslation([0.1777,1.4065,-0.0075])

HAnimSegment196.addChildren(HAnimSite199)
HAnimSite200 = x3d.HAnimSite()
HAnimSite200.setName("l_axilla_post_pt")
HAnimSite200.setDEF("hanim_l_axilla_post_pt")
HAnimSite200.setTranslation([0.1706,1.4072,-0.0875])

HAnimSegment196.addChildren(HAnimSite200)

HAnimJoint195.addChildren(HAnimSegment196)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.setName("l_acromioclavicular")
HAnimJoint201.setDEF("hanim_l_acromioclavicular")
HAnimJoint201.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.setName("l_scapula")
HAnimSegment202.setDEF("hanim_l_scapula")

HAnimJoint201.addChildren(HAnimSegment202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.setName("l_shoulder")
HAnimJoint203.setDEF("hanim_l_shoulder")
HAnimJoint203.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment204 = x3d.HAnimSegment()
HAnimSegment204.setName("l_upperarm")
HAnimSegment204.setDEF("hanim_l_upperarm")
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.setName("l_humeral_lateral_epicn_pt")
HAnimSite205.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite205.setTranslation([0.228,1.1482,-0.11])

HAnimSegment204.addChildren(HAnimSite205)

HAnimJoint203.addChildren(HAnimSegment204)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.setName("l_elbow")
HAnimJoint206.setDEF("hanim_l_elbow")
HAnimJoint206.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setName("l_forearm")
HAnimSegment207.setDEF("hanim_l_forearm")
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.setName("l_radial_styloid_pt")
HAnimSite208.setDEF("hanim_l_radial_styloid_pt")
HAnimSite208.setTranslation([0.1901,0.8645,-0.0415])

HAnimSegment207.addChildren(HAnimSite208)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.setName("l_olecranon_pt")
HAnimSite209.setDEF("hanim_l_olecranon_pt")
HAnimSite209.setTranslation([0.1962,1.1375,-0.1123])

HAnimSegment207.addChildren(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("l_humeral_medial_epicn_pt")
HAnimSite210.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite210.setTranslation([0.1735,1.1272,-0.1113])

HAnimSegment207.addChildren(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.setName("l_radiale_pt")
HAnimSite211.setDEF("hanim_l_radiale_pt")
HAnimSite211.setTranslation([0.2182,1.1212,-0.1167])

HAnimSegment207.addChildren(HAnimSite211)

HAnimJoint206.addChildren(HAnimSegment207)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.setName("l_wrist")
HAnimJoint212.setDEF("hanim_l_wrist")
HAnimJoint212.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment213 = x3d.HAnimSegment()
HAnimSegment213.setName("l_hand")
HAnimSegment213.setDEF("hanim_l_hand")
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.setName("l_metacarpal_pha2_pt")
HAnimSite214.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite214.setTranslation([0.2009,0.8139,-0.0237])

HAnimSegment213.addChildren(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setName("l_ulnar_styloid_pt")
HAnimSite215.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite215.setTranslation([0.2142,0.8529,-0.0648])

HAnimSegment213.addChildren(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setName("l_metacarpal_pha5_pt")
HAnimSite216.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite216.setTranslation([0.1929,0.786,-0.1122])

HAnimSegment213.addChildren(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setName("l_hand_front_view")
HAnimSite217.setDEF("hanim_l_hand_front_view")
HAnimSite217.setTranslation([0.3,0.75,0.45])
Viewpoint218 = x3d.Viewpoint()
Viewpoint218.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint218.setCenterOfRotation([0,0.7,0])
Viewpoint218.setDescription("left hand front")
Viewpoint218.setPosition([0,0,0])

HAnimSite217.addChildren(Viewpoint218)

HAnimSegment213.addChildren(HAnimSite217)

HAnimJoint212.addChildren(HAnimSegment213)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.setName("l_thumb1")
HAnimJoint219.setDEF("hanim_l_thumb1")
HAnimJoint219.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment220 = x3d.HAnimSegment()
HAnimSegment220.setName("l_thumb_metacarpal")
HAnimSegment220.setDEF("hanim_l_thumb_metacarpal")

HAnimJoint219.addChildren(HAnimSegment220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.setName("l_thumb2")
HAnimJoint221.setDEF("hanim_l_thumb2")
HAnimJoint221.setCenter([0.1951,0.8226,0.0246])
HAnimSegment222 = x3d.HAnimSegment()
HAnimSegment222.setName("l_thumb_proximal")
HAnimSegment222.setDEF("hanim_l_thumb_proximal")

HAnimJoint221.addChildren(HAnimSegment222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.setName("l_thumb3")
HAnimJoint223.setDEF("hanim_l_thumb3")
HAnimJoint223.setCenter([0.1955,0.8159,0.0464])
HAnimSegment224 = x3d.HAnimSegment()
HAnimSegment224.setName("l_thumb_distal")
HAnimSegment224.setDEF("hanim_l_thumb_distal")
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.setName("l_thumb_distal_tip")
HAnimSite225.setDEF("hanim_l_thumb_distal_tip")
HAnimSite225.setTranslation([0.1982,0.8061,0.0759])

HAnimSegment224.addChildren(HAnimSite225)

HAnimJoint223.addChildren(HAnimSegment224)

HAnimJoint221.addChildren(HAnimJoint223)

HAnimJoint219.addChildren(HAnimJoint221)

HAnimJoint212.addChildren(HAnimJoint219)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.setName("l_index0")
HAnimJoint226.setDEF("hanim_l_index0")
HAnimJoint226.setCenter([0.1983,0.8024,-0.028])
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.setName("l_index_metacarpal")
HAnimSegment227.setDEF("hanim_l_index_metacarpal")

HAnimJoint226.addChildren(HAnimSegment227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.setName("l_index1")
HAnimJoint228.setDEF("hanim_l_index1")
HAnimJoint228.setCenter([0.1983,0.7815,-0.028])
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.setName("l_index_proximal")
HAnimSegment229.setDEF("hanim_l_index_proximal")

HAnimJoint228.addChildren(HAnimSegment229)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.setName("l_index2")
HAnimJoint230.setDEF("hanim_l_index2")
HAnimJoint230.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment231 = x3d.HAnimSegment()
HAnimSegment231.setName("l_index_middle")
HAnimSegment231.setDEF("hanim_l_index_middle")

HAnimJoint230.addChildren(HAnimSegment231)
HAnimJoint232 = x3d.HAnimJoint()
HAnimJoint232.setName("l_index3")
HAnimJoint232.setDEF("hanim_l_index3")
HAnimJoint232.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment233 = x3d.HAnimSegment()
HAnimSegment233.setName("l_index_distal")
HAnimSegment233.setDEF("hanim_l_index_distal")
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setName("l_index_distal_tip")
HAnimSite234.setDEF("hanim_l_index_distal_tip")
HAnimSite234.setTranslation([0.2089,0.6858,-0.0245])

HAnimSegment233.addChildren(HAnimSite234)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setName("l_dactylion_pt")
HAnimSite235.setDEF("hanim_l_dactylion_pt")
HAnimSite235.setTranslation([0.2056,0.6743,-0.0482])

HAnimSegment233.addChildren(HAnimSite235)

HAnimJoint232.addChildren(HAnimSegment233)

HAnimJoint230.addChildren(HAnimJoint232)

HAnimJoint228.addChildren(HAnimJoint230)

HAnimJoint226.addChildren(HAnimJoint228)

HAnimJoint212.addChildren(HAnimJoint226)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.setName("l_middle0")
HAnimJoint236.setDEF("hanim_l_middle0")
HAnimJoint236.setCenter([0.1987,0.8029,-0.053])
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.setName("l_middle_metacarpal")
HAnimSegment237.setDEF("hanim_l_middle_metacarpal")

HAnimJoint236.addChildren(HAnimSegment237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setName("l_middle1")
HAnimJoint238.setDEF("hanim_l_middle1")
HAnimJoint238.setCenter([0.1987,0.7818,-0.053])
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.setName("l_middle_proximal")
HAnimSegment239.setDEF("hanim_l_middle_proximal")

HAnimJoint238.addChildren(HAnimSegment239)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setName("l_middle2")
HAnimJoint240.setDEF("hanim_l_middle2")
HAnimJoint240.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.setName("l_middle_middle")
HAnimSegment241.setDEF("hanim_l_middle_middle")

HAnimJoint240.addChildren(HAnimSegment241)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.setName("l_middle3")
HAnimJoint242.setDEF("hanim_l_middle3")
HAnimJoint242.setCenter([0.2026,0.7011,-0.0494])
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.setName("l_middle_distal")
HAnimSegment243.setDEF("hanim_l_middle_distal")
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.setName("l_middle_distal_tip")
HAnimSite244.setDEF("hanim_l_middle_distal_tip")
HAnimSite244.setTranslation([0.208,0.6731,-0.0491])

HAnimSegment243.addChildren(HAnimSite244)

HAnimJoint242.addChildren(HAnimSegment243)

HAnimJoint240.addChildren(HAnimJoint242)

HAnimJoint238.addChildren(HAnimJoint240)

HAnimJoint236.addChildren(HAnimJoint238)

HAnimJoint212.addChildren(HAnimJoint236)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.setName("l_ring0")
HAnimJoint245.setDEF("hanim_l_ring0")
HAnimJoint245.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.setName("l_ring_metacarpal")
HAnimSegment246.setDEF("hanim_l_ring_metacarpal")

HAnimJoint245.addChildren(HAnimSegment246)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.setName("l_ring1")
HAnimJoint247.setDEF("hanim_l_ring1")
HAnimJoint247.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment248 = x3d.HAnimSegment()
HAnimSegment248.setName("l_ring_proximal")
HAnimSegment248.setDEF("hanim_l_ring_proximal")

HAnimJoint247.addChildren(HAnimSegment248)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setName("l_ring2")
HAnimJoint249.setDEF("hanim_l_ring2")
HAnimJoint249.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.setName("l_ring_middle")
HAnimSegment250.setDEF("hanim_l_ring_middle")

HAnimJoint249.addChildren(HAnimSegment250)
HAnimJoint251 = x3d.HAnimJoint()
HAnimJoint251.setName("l_ring3")
HAnimJoint251.setDEF("hanim_l_ring3")
HAnimJoint251.setCenter([0.1983,0.7045,-0.0767])
HAnimSegment252 = x3d.HAnimSegment()
HAnimSegment252.setName("l_ring_distal")
HAnimSegment252.setDEF("hanim_l_ring_distal")
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.setName("l_ring_distal_tip")
HAnimSite253.setDEF("hanim_l_ring_distal_tip")
HAnimSite253.setTranslation([0.2035,0.675,-0.0756])

HAnimSegment252.addChildren(HAnimSite253)

HAnimJoint251.addChildren(HAnimSegment252)

HAnimJoint249.addChildren(HAnimJoint251)

HAnimJoint247.addChildren(HAnimJoint249)

HAnimJoint245.addChildren(HAnimJoint247)

HAnimJoint212.addChildren(HAnimJoint245)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.setName("l_pinky0")
HAnimJoint254.setDEF("hanim_l_pinky0")
HAnimJoint254.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment255 = x3d.HAnimSegment()
HAnimSegment255.setName("l_pinky_metacarpal")
HAnimSegment255.setDEF("hanim_l_pinky_metacarpal")

HAnimJoint254.addChildren(HAnimSegment255)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setName("l_pinky1")
HAnimJoint256.setDEF("hanim_l_pinky1")
HAnimJoint256.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment257 = x3d.HAnimSegment()
HAnimSegment257.setName("l_pinky_proximal")
HAnimSegment257.setDEF("hanim_l_pinky_proximal")

HAnimJoint256.addChildren(HAnimSegment257)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setName("l_pinky2")
HAnimJoint258.setDEF("hanim_l_pinky2")
HAnimJoint258.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.setName("l_pinky_middle")
HAnimSegment259.setDEF("hanim_l_pinky_middle")

HAnimJoint258.addChildren(HAnimSegment259)
HAnimJoint260 = x3d.HAnimJoint()
HAnimJoint260.setName("l_pinky3")
HAnimJoint260.setDEF("hanim_l_pinky3")
HAnimJoint260.setCenter([0.1948,0.7277,-0.1017])
HAnimSegment261 = x3d.HAnimSegment()
HAnimSegment261.setName("l_pinky_distal")
HAnimSegment261.setDEF("hanim_l_pinky_distal")
HAnimSite262 = x3d.HAnimSite()
HAnimSite262.setName("l_pinky_distal_tip")
HAnimSite262.setDEF("hanim_l_pinky_distal_tip")
HAnimSite262.setTranslation([0.2014,0.7009,-0.1012])

HAnimSegment261.addChildren(HAnimSite262)

HAnimJoint260.addChildren(HAnimSegment261)

HAnimJoint258.addChildren(HAnimJoint260)

HAnimJoint256.addChildren(HAnimJoint258)

HAnimJoint254.addChildren(HAnimJoint256)

HAnimJoint212.addChildren(HAnimJoint254)

HAnimJoint206.addChildren(HAnimJoint212)

HAnimJoint203.addChildren(HAnimJoint206)

HAnimJoint201.addChildren(HAnimJoint203)

HAnimJoint195.addChildren(HAnimJoint201)

HAnimJoint143.addChildren(HAnimJoint195)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setName("r_sternoclavicular")
HAnimJoint263.setDEF("hanim_r_sternoclavicular")
HAnimJoint263.setCenter([-0.082,1.4488,-0.0353])
HAnimSegment264 = x3d.HAnimSegment()
HAnimSegment264.setName("r_clavicle")
HAnimSegment264.setDEF("hanim_r_clavicle")
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.setName("r_clavicale_pt")
HAnimSite265.setDEF("hanim_r_clavicale_pt")
HAnimSite265.setTranslation([-0.0115,1.4943,0.04])

HAnimSegment264.addChildren(HAnimSite265)
HAnimSite266 = x3d.HAnimSite()
HAnimSite266.setName("r_acromion_pt")
HAnimSite266.setDEF("hanim_r_acromion_pt")
HAnimSite266.setTranslation([-0.1905,1.4791,-0.0431])

HAnimSegment264.addChildren(HAnimSite266)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setName("r_axilla_ant_pt")
HAnimSite267.setDEF("hanim_r_axilla_ant_pt")
HAnimSite267.setTranslation([-0.1626,1.4072,-0.0031])

HAnimSegment264.addChildren(HAnimSite267)
HAnimSite268 = x3d.HAnimSite()
HAnimSite268.setName("r_axilla_post_pt")
HAnimSite268.setDEF("hanim_r_axilla_post_pt")
HAnimSite268.setTranslation([-0.1603,1.4098,-0.0826])

HAnimSegment264.addChildren(HAnimSite268)

HAnimJoint263.addChildren(HAnimSegment264)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setName("r_acromioclavicular")
HAnimJoint269.setDEF("hanim_r_acromioclavicular")
HAnimJoint269.setCenter([-0.0962,1.4269,-0.0424])
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.setName("r_scapula")
HAnimSegment270.setDEF("hanim_r_scapula")

HAnimJoint269.addChildren(HAnimSegment270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setName("r_shoulder")
HAnimJoint271.setDEF("hanim_r_shoulder")
HAnimJoint271.setCenter([-0.2029,1.4376,-0.0387])
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setName("r_upperarm")
HAnimSegment272.setDEF("hanim_r_upperarm")
HAnimSite273 = x3d.HAnimSite()
HAnimSite273.setName("r_humeral_lateral_epicn_pt")
HAnimSite273.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite273.setTranslation([-0.2224,1.1517,-0.1033])

HAnimSegment272.addChildren(HAnimSite273)

HAnimJoint271.addChildren(HAnimSegment272)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setName("r_elbow")
HAnimJoint274.setDEF("hanim_r_elbow")
HAnimJoint274.setCenter([-0.2014,1.1357,-0.0682])
HAnimSegment275 = x3d.HAnimSegment()
HAnimSegment275.setName("r_forearm")
HAnimSegment275.setDEF("hanim_r_forearm")
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.setName("r_radial_styloid_pt")
HAnimSite276.setDEF("hanim_r_radial_styloid_pt")
HAnimSite276.setTranslation([-0.1884,0.8676,-0.036])

HAnimSegment275.addChildren(HAnimSite276)
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.setName("r_olecranon_pt")
HAnimSite277.setDEF("hanim_r_olecranon_pt")
HAnimSite277.setTranslation([-0.1907,1.1405,-0.1065])

HAnimSegment275.addChildren(HAnimSite277)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.setName("r_humeral_medial_epicn_pt")
HAnimSite278.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite278.setTranslation([-0.168,1.1298,-0.1062])

HAnimSegment275.addChildren(HAnimSite278)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.setName("r_radiale_pt")
HAnimSite279.setDEF("hanim_r_radiale_pt")
HAnimSite279.setTranslation([-0.213,1.1305,-0.1091])

HAnimSegment275.addChildren(HAnimSite279)

HAnimJoint274.addChildren(HAnimSegment275)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setName("r_wrist")
HAnimJoint280.setDEF("hanim_r_wrist")
HAnimJoint280.setCenter([-0.1984,0.8663,-0.0583])
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.setName("r_hand")
HAnimSegment281.setDEF("hanim_r_hand")
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.setName("r_metacarpal_pha2_pt")
HAnimSite282.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite282.setTranslation([-0.1977,0.8169,-0.0177])

HAnimSegment281.addChildren(HAnimSite282)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.setName("r_ulnar_styloid_pt")
HAnimSite283.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite283.setTranslation([-0.2117,0.8562,-0.0584])

HAnimSegment281.addChildren(HAnimSite283)
HAnimSite284 = x3d.HAnimSite()
HAnimSite284.setName("r_metacarpal_pha5_pt")
HAnimSite284.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite284.setTranslation([-0.1929,0.789,-0.1064])

HAnimSegment281.addChildren(HAnimSite284)
HAnimSite285 = x3d.HAnimSite()
HAnimSite285.setName("r_hand_front_view")
HAnimSite285.setDEF("hanim_r_hand_front_view")
HAnimSite285.setTranslation([-0.3,0.75,0.45])
Viewpoint286 = x3d.Viewpoint()
Viewpoint286.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint286.setCenterOfRotation([0,0.7,0])
Viewpoint286.setDescription("right hand front")
Viewpoint286.setPosition([0,0,0])

HAnimSite285.addChildren(Viewpoint286)

HAnimSegment281.addChildren(HAnimSite285)

HAnimJoint280.addChildren(HAnimSegment281)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setName("r_thumb1")
HAnimJoint287.setDEF("hanim_r_thumb1")
HAnimJoint287.setCenter([-0.1924,0.8472,-0.0534])
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.setName("r_thumb_metacarpal")
HAnimSegment288.setDEF("hanim_r_thumb_metacarpal")

HAnimJoint287.addChildren(HAnimSegment288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setName("r_thumb2")
HAnimJoint289.setDEF("hanim_r_thumb2")
HAnimJoint289.setCenter([-0.1951,0.8226,0.0246])
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setName("r_thumb_proximal")
HAnimSegment290.setDEF("hanim_r_thumb_proximal")

HAnimJoint289.addChildren(HAnimSegment290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setName("r_thumb3")
HAnimJoint291.setDEF("hanim_r_thumb3")
HAnimJoint291.setCenter([-0.1955,0.8159,0.0464])
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.setName("r_thumb_distal")
HAnimSegment292.setDEF("hanim_r_thumb_distal")
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.setName("r_thumb_distal_tip")
HAnimSite293.setDEF("hanim_r_thumb_distal_tip")
HAnimSite293.setTranslation([-0.1869,0.809,0.082])

HAnimSegment292.addChildren(HAnimSite293)

HAnimJoint291.addChildren(HAnimSegment292)

HAnimJoint289.addChildren(HAnimJoint291)

HAnimJoint287.addChildren(HAnimJoint289)

HAnimJoint280.addChildren(HAnimJoint287)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setName("r_index0")
HAnimJoint294.setDEF("hanim_r_index0")
HAnimJoint294.setCenter([-0.1983,0.8024,-0.028])
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.setName("r_index_metacarpal")
HAnimSegment295.setDEF("hanim_r_index_metacarpal")

HAnimJoint294.addChildren(HAnimSegment295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setName("r_index1")
HAnimJoint296.setDEF("hanim_r_index1")
HAnimJoint296.setCenter([-0.1983,0.7815,-0.028])
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setName("r_index_proximal")
HAnimSegment297.setDEF("hanim_r_index_proximal")

HAnimJoint296.addChildren(HAnimSegment297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setName("r_index2")
HAnimJoint298.setDEF("hanim_r_index2")
HAnimJoint298.setCenter([-0.2017,0.7363,-0.0248])
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setName("r_index_middle")
HAnimSegment299.setDEF("hanim_r_index_middle")

HAnimJoint298.addChildren(HAnimSegment299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setName("r_index3")
HAnimJoint300.setDEF("hanim_r_index3")
HAnimJoint300.setCenter([-0.2028,0.7139,-0.0236])
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setName("r_index_distal")
HAnimSegment301.setDEF("hanim_r_index_distal")
HAnimSite302 = x3d.HAnimSite()
HAnimSite302.setName("r_index_distal_tip")
HAnimSite302.setDEF("hanim_r_index_distal_tip")
HAnimSite302.setTranslation([-0.198,0.6883,-0.018])

HAnimSegment301.addChildren(HAnimSite302)
HAnimSite303 = x3d.HAnimSite()
HAnimSite303.setName("r_dactylion_pt")
HAnimSite303.setDEF("hanim_r_dactylion_pt")
HAnimSite303.setTranslation([-0.1941,0.6772,-0.0423])

HAnimSegment301.addChildren(HAnimSite303)

HAnimJoint300.addChildren(HAnimSegment301)

HAnimJoint298.addChildren(HAnimJoint300)

HAnimJoint296.addChildren(HAnimJoint298)

HAnimJoint294.addChildren(HAnimJoint296)

HAnimJoint280.addChildren(HAnimJoint294)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setName("r_middle0")
HAnimJoint304.setDEF("hanim_r_middle0")
HAnimJoint304.setCenter([-0.1987,0.8029,-0.053])
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setName("r_middle_metacarpal")
HAnimSegment305.setDEF("hanim_r_middle_metacarpal")

HAnimJoint304.addChildren(HAnimSegment305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setName("r_middle1")
HAnimJoint306.setDEF("hanim_r_middle1")
HAnimJoint306.setCenter([-0.1987,0.7818,-0.053])
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setName("r_middle_proximal")
HAnimSegment307.setDEF("hanim_r_middle_proximal")

HAnimJoint306.addChildren(HAnimSegment307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.setName("r_middle2")
HAnimJoint308.setDEF("hanim_r_middle2")
HAnimJoint308.setCenter([-0.2013,0.7273,-0.0503])
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setName("r_middle_middle")
HAnimSegment309.setDEF("hanim_r_middle_middle")

HAnimJoint308.addChildren(HAnimSegment309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setName("r_middle3")
HAnimJoint310.setDEF("hanim_r_middle3")
HAnimJoint310.setCenter([-0.2026,0.7011,-0.0494])
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setName("r_middle_distal")
HAnimSegment311.setDEF("hanim_r_middle_distal")
HAnimSite312 = x3d.HAnimSite()
HAnimSite312.setName("r_middle_distal_tip")
HAnimSite312.setDEF("hanim_r_middle_distal_tip")
HAnimSite312.setTranslation([-0.1969,0.6758,-0.0427])

HAnimSegment311.addChildren(HAnimSite312)

HAnimJoint310.addChildren(HAnimSegment311)

HAnimJoint308.addChildren(HAnimJoint310)

HAnimJoint306.addChildren(HAnimJoint308)

HAnimJoint304.addChildren(HAnimJoint306)

HAnimJoint280.addChildren(HAnimJoint304)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.setName("r_ring0")
HAnimJoint313.setDEF("hanim_r_ring0")
HAnimJoint313.setCenter([-0.1956,0.8019,-0.0794])
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setName("r_ring_metacarpal")
HAnimSegment314.setDEF("hanim_r_ring_metacarpal")

HAnimJoint313.addChildren(HAnimSegment314)
HAnimJoint315 = x3d.HAnimJoint()
HAnimJoint315.setName("r_ring1")
HAnimJoint315.setDEF("hanim_r_ring1")
HAnimJoint315.setCenter([-0.1956,0.7815,-0.0794])
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.setName("r_ring_proximal")
HAnimSegment316.setDEF("hanim_r_ring_proximal")

HAnimJoint315.addChildren(HAnimSegment316)
HAnimJoint317 = x3d.HAnimJoint()
HAnimJoint317.setName("r_ring2")
HAnimJoint317.setDEF("hanim_r_ring2")
HAnimJoint317.setCenter([-0.1973,0.7287,-0.0777])
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.setName("r_ring_middle")
HAnimSegment318.setDEF("hanim_r_ring_middle")

HAnimJoint317.addChildren(HAnimSegment318)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.setName("r_ring3")
HAnimJoint319.setDEF("hanim_r_ring3")
HAnimJoint319.setCenter([-0.1983,0.7045,-0.0767])
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.setName("r_ring_distal")
HAnimSegment320.setDEF("hanim_r_ring_distal")
HAnimSite321 = x3d.HAnimSite()
HAnimSite321.setName("r_ring_distal_tip")
HAnimSite321.setDEF("hanim_r_ring_distal_tip")
HAnimSite321.setTranslation([-0.1934,0.6778,-0.0693])

HAnimSegment320.addChildren(HAnimSite321)

HAnimJoint319.addChildren(HAnimSegment320)

HAnimJoint317.addChildren(HAnimJoint319)

HAnimJoint315.addChildren(HAnimJoint317)

HAnimJoint313.addChildren(HAnimJoint315)

HAnimJoint280.addChildren(HAnimJoint313)
HAnimJoint322 = x3d.HAnimJoint()
HAnimJoint322.setName("r_pinky0")
HAnimJoint322.setDEF("hanim_r_pinky0")
HAnimJoint322.setCenter([-0.1925,0.8066,-0.1036])
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.setName("r_pinky_metacarpal")
HAnimSegment323.setDEF("hanim_r_pinky_metacarpal")

HAnimJoint322.addChildren(HAnimSegment323)
HAnimJoint324 = x3d.HAnimJoint()
HAnimJoint324.setName("r_pinky1")
HAnimJoint324.setDEF("hanim_r_pinky1")
HAnimJoint324.setCenter([-0.1925,0.7866,-0.1036])
HAnimSegment325 = x3d.HAnimSegment()
HAnimSegment325.setName("r_pinky_proximal")
HAnimSegment325.setDEF("hanim_r_pinky_proximal")

HAnimJoint324.addChildren(HAnimSegment325)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.setName("r_pinky2")
HAnimJoint326.setDEF("hanim_r_pinky2")
HAnimJoint326.setCenter([-0.1938,0.7452,-0.1024])
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.setName("r_pinky_middle")
HAnimSegment327.setDEF("hanim_r_pinky_middle")

HAnimJoint326.addChildren(HAnimSegment327)
HAnimJoint328 = x3d.HAnimJoint()
HAnimJoint328.setName("r_pinky3")
HAnimJoint328.setDEF("hanim_r_pinky3")
HAnimJoint328.setCenter([-0.1948,0.7277,-0.1017])
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.setName("r_pinky_distal")
HAnimSegment329.setDEF("hanim_r_pinky_distal")
HAnimSite330 = x3d.HAnimSite()
HAnimSite330.setName("r_pinky_distal_tip")
HAnimSite330.setDEF("hanim_r_pinky_distal_tip")
HAnimSite330.setTranslation([-0.1938,0.7035,-0.0949])

HAnimSegment329.addChildren(HAnimSite330)

HAnimJoint328.addChildren(HAnimSegment329)

HAnimJoint326.addChildren(HAnimJoint328)

HAnimJoint324.addChildren(HAnimJoint326)

HAnimJoint322.addChildren(HAnimJoint324)

HAnimJoint280.addChildren(HAnimJoint322)

HAnimJoint274.addChildren(HAnimJoint280)

HAnimJoint271.addChildren(HAnimJoint274)

HAnimJoint269.addChildren(HAnimJoint271)

HAnimJoint263.addChildren(HAnimJoint269)

HAnimJoint143.addChildren(HAnimJoint263)

HAnimJoint141.addChildren(HAnimJoint143)

HAnimJoint139.addChildren(HAnimJoint141)

HAnimJoint137.addChildren(HAnimJoint139)

HAnimJoint135.addChildren(HAnimJoint137)

HAnimJoint133.addChildren(HAnimJoint135)

HAnimJoint131.addChildren(HAnimJoint133)

HAnimJoint129.addChildren(HAnimJoint131)

HAnimJoint125.addChildren(HAnimJoint129)

HAnimJoint122.addChildren(HAnimJoint125)

HAnimJoint120.addChildren(HAnimJoint122)

HAnimJoint118.addChildren(HAnimJoint120)

HAnimJoint116.addChildren(HAnimJoint118)

HAnimJoint111.addChildren(HAnimJoint116)

HAnimJoint109.addChildren(HAnimJoint111)

HAnimJoint107.addChildren(HAnimJoint109)

HAnimJoint103.addChildren(HAnimJoint107)

HAnimJoint44.addChildren(HAnimJoint103)

HAnimHumanoid43.setSkeleton(HAnimJoint44)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("l_inclined_view")
HAnimSite331.setDEF("hanim_l_inclined_view")
HAnimSite331.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite331.setTranslation([1.62,1.05,2.06])
Viewpoint332 = x3d.Viewpoint()
Viewpoint332.setDEF("hanim_l_inclined_viewpoint")
Viewpoint332.setDescription("left inclined")
Viewpoint332.setPosition([0,0,0])

HAnimSite331.addChildren(Viewpoint332)

HAnimHumanoid43.addViewpoints(HAnimSite331)
HAnimSite333 = x3d.HAnimSite()
HAnimSite333.setName("r_inclined_view")
HAnimSite333.setDEF("hanim_r_inclined_view")
HAnimSite333.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite333.setTranslation([-1.62,1.05,2.06])
Viewpoint334 = x3d.Viewpoint()
Viewpoint334.setDEF("hanim_r_inclined_viewpoint")
Viewpoint334.setCenterOfRotation([0,0.9,0])
Viewpoint334.setDescription("right inclined")
Viewpoint334.setPosition([0,0,0])

HAnimSite333.addChildren(Viewpoint334)

HAnimHumanoid43.addViewpoints(HAnimSite333)
HAnimSite335 = x3d.HAnimSite()
HAnimSite335.setName("front_view")
HAnimSite335.setDEF("hanim_front_view")
HAnimSite335.setTranslation([0,0.85,2.58])
Viewpoint336 = x3d.Viewpoint()
Viewpoint336.setDEF("hanim_front_viewpoint")
Viewpoint336.setCenterOfRotation([0,0.9,0])
Viewpoint336.setDescription("front")
Viewpoint336.setPosition([0,0,0])

HAnimSite335.addChildren(Viewpoint336)

HAnimHumanoid43.addViewpoints(HAnimSite335)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.setName("back_view")
HAnimSite337.setDEF("hanim_back_view")
HAnimSite337.setRotation([0,1,0,3.14])
HAnimSite337.setTranslation([0,0.85,-2.58])
Viewpoint338 = x3d.Viewpoint()
Viewpoint338.setDEF("hanim_back_viewpoint")
Viewpoint338.setCenterOfRotation([0,0.9,0])
Viewpoint338.setDescription("back")
Viewpoint338.setPosition([0,0,0])

HAnimSite337.addChildren(Viewpoint338)

HAnimHumanoid43.addViewpoints(HAnimSite337)
HAnimSite339 = x3d.HAnimSite()
HAnimSite339.setName("l_side_view")
HAnimSite339.setDEF("hanim_l_side_view")
HAnimSite339.setRotation([0,1,0,1.5708])
HAnimSite339.setTranslation([2.6,0.854,0])
Viewpoint340 = x3d.Viewpoint()
Viewpoint340.setDEF("hanim_l_side_viewpoint")
Viewpoint340.setCenterOfRotation([0,0.9,0])
Viewpoint340.setDescription("left side")
Viewpoint340.setPosition([0,0,0])

HAnimSite339.addChildren(Viewpoint340)

HAnimHumanoid43.addViewpoints(HAnimSite339)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.setName("Top_view")
HAnimSite341.setDEF("hanim_Top_view")
HAnimSite341.setRotation([1,0,0,-1.57])
HAnimSite341.setTranslation([0,3.5,0])
Viewpoint342 = x3d.Viewpoint()
Viewpoint342.setDEF("hanim_Top_viewpoint")
Viewpoint342.setCenterOfRotation([0,0.9,0])
Viewpoint342.setDescription("Top")
Viewpoint342.setPosition([0,0,0])

HAnimSite341.addChildren(Viewpoint342)

HAnimHumanoid43.addViewpoints(HAnimSite341)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.setName("front_close_view")
HAnimSite343.setDEF("hanim_front_close_view")
HAnimSite343.setTranslation([0,0.854,1.575])
Viewpoint344 = x3d.Viewpoint()
Viewpoint344.setDEF("hanim_front_close_viewpoint")
Viewpoint344.setCenterOfRotation([0,0,1.575])
Viewpoint344.setDescription("front close")
Viewpoint344.setPosition([0,0,0])

HAnimSite343.addChildren(Viewpoint344)

HAnimHumanoid43.addViewpoints(HAnimSite343)
HAnimSite345 = x3d.HAnimSite()
HAnimSite345.setName("side_close_view")
HAnimSite345.setDEF("hanim_side_close_view")
HAnimSite345.setRotation([0,1,0,1.5708])
HAnimSite345.setTranslation([1.56,0.854,0])
Viewpoint346 = x3d.Viewpoint()
Viewpoint346.setDEF("hanim_side_close_viewpoint")
Viewpoint346.setCenterOfRotation([1.6,0,0])
Viewpoint346.setDescription("side close")
Viewpoint346.setPosition([0,0,0])

HAnimSite345.addChildren(Viewpoint346)

HAnimHumanoid43.addViewpoints(HAnimSite345)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.setName("head_front_close_view")
HAnimSite347.setDEF("hanim_head_front_close_view")
HAnimSite347.setTranslation([0,1.5,1])
Viewpoint348 = x3d.Viewpoint()
Viewpoint348.setDEF("hanim_head_front_close_viewpoint")
Viewpoint348.setCenterOfRotation([0,0,1])
Viewpoint348.setDescription("head front close")
Viewpoint348.setPosition([0,0,0])

HAnimSite347.addChildren(Viewpoint348)

HAnimHumanoid43.addViewpoints(HAnimSite347)
HAnimSite349 = x3d.HAnimSite()
HAnimSite349.setName("chest_front_close_view")
HAnimSite349.setDEF("hanim_chest_front_close_view")
HAnimSite349.setTranslation([0,1.2,1])
Viewpoint350 = x3d.Viewpoint()
Viewpoint350.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint350.setCenterOfRotation([0,0,1])
Viewpoint350.setDescription("chest front close")
Viewpoint350.setPosition([0,0,0])

HAnimSite349.addChildren(Viewpoint350)

HAnimHumanoid43.addViewpoints(HAnimSite349)
HAnimSite351 = x3d.HAnimSite()
HAnimSite351.setName("pelvis_front_close_view")
HAnimSite351.setDEF("hanim_pelvis_front_close_view")
HAnimSite351.setTranslation([0,0.8,1])
Viewpoint352 = x3d.Viewpoint()
Viewpoint352.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint352.setCenterOfRotation([0,0,1])
Viewpoint352.setDescription("pelvis front close")
Viewpoint352.setPosition([0,0,0])

HAnimSite351.addChildren(Viewpoint352)

HAnimHumanoid43.addViewpoints(HAnimSite351)
HAnimSite353 = x3d.HAnimSite()
HAnimSite353.setName("knees_front_close_view")
HAnimSite353.setDEF("hanim_knees_front_close_view")
HAnimSite353.setTranslation([0,0.4,1])
Viewpoint354 = x3d.Viewpoint()
Viewpoint354.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint354.setCenterOfRotation([0,0.4,0])
Viewpoint354.setDescription("knees front close")
Viewpoint354.setPosition([0,0,0])

HAnimSite353.addChildren(Viewpoint354)

HAnimHumanoid43.addViewpoints(HAnimSite353)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.setName("feet_front_close_view")
HAnimSite355.setDEF("hanim_feet_front_close_view")
HAnimSite355.setTranslation([0,0,1])
Viewpoint356 = x3d.Viewpoint()
Viewpoint356.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint356.setDescription("feet front close")
Viewpoint356.setPosition([0,0,0])

HAnimSite355.addChildren(Viewpoint356)

HAnimHumanoid43.addViewpoints(HAnimSite355)
HAnimSite357 = x3d.HAnimSite()
HAnimSite357.setName("eye_level_view")
HAnimSite357.setDEF("hanim_eye_level_view")
HAnimSite357.setTranslation([0,1.6332,0.0502])
Viewpoint358 = x3d.Viewpoint()
Viewpoint358.setDEF("hanim_eye_level_viewpoint")
Viewpoint358.setDescription("eye level looking forward")
Viewpoint358.setOrientation([0,1,0,3.141593])
Viewpoint358.setPosition([0,0,0])

HAnimSite357.addChildren(Viewpoint358)

HAnimHumanoid43.addViewpoints(HAnimSite357)
HAnimSite359 = x3d.HAnimSite()
HAnimSite359.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite359)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid43.addSites(HAnimSite360)
HAnimSite361 = x3d.HAnimSite()
HAnimSite361.setUSE("hanim_l_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite361)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setUSE("hanim_r_hand_front_view")

HAnimHumanoid43.addSites(HAnimSite362)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint363)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint364)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint365)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint366)
HAnimJoint367 = x3d.HAnimJoint()
HAnimJoint367.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint367)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint368)
HAnimJoint369 = x3d.HAnimJoint()
HAnimJoint369.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint369)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint370)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint371)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint372)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint373)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint374)
HAnimJoint375 = x3d.HAnimJoint()
HAnimJoint375.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint375)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint376)
HAnimJoint377 = x3d.HAnimJoint()
HAnimJoint377.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint377)
HAnimJoint378 = x3d.HAnimJoint()
HAnimJoint378.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint378)
HAnimJoint379 = x3d.HAnimJoint()
HAnimJoint379.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint379)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint380)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint381)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint382)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint383)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint384)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint385)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint386)
HAnimJoint387 = x3d.HAnimJoint()
HAnimJoint387.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint387)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint388)
HAnimJoint389 = x3d.HAnimJoint()
HAnimJoint389.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint389)
HAnimJoint390 = x3d.HAnimJoint()
HAnimJoint390.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint390)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint391)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint392)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.setUSE("hanim_l_ankle")

HAnimHumanoid43.addJoints(HAnimJoint393)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setUSE("hanim_r_ankle")

HAnimHumanoid43.addJoints(HAnimJoint394)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint395)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint396)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint397)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint398)
HAnimJoint399 = x3d.HAnimJoint()
HAnimJoint399.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint399)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint400)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint401)
HAnimJoint402 = x3d.HAnimJoint()
HAnimJoint402.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint402)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint403)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint404)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.setUSE("hanim_l_index0")

HAnimHumanoid43.addJoints(HAnimJoint405)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setUSE("hanim_r_index0")

HAnimHumanoid43.addJoints(HAnimJoint406)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.setUSE("hanim_l_index1")

HAnimHumanoid43.addJoints(HAnimJoint407)
HAnimJoint408 = x3d.HAnimJoint()
HAnimJoint408.setUSE("hanim_r_index1")

HAnimHumanoid43.addJoints(HAnimJoint408)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setUSE("hanim_l_index2")

HAnimHumanoid43.addJoints(HAnimJoint409)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.setUSE("hanim_r_index2")

HAnimHumanoid43.addJoints(HAnimJoint410)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.setUSE("hanim_l_index3")

HAnimHumanoid43.addJoints(HAnimJoint411)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.setUSE("hanim_r_index3")

HAnimHumanoid43.addJoints(HAnimJoint412)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint413)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint414)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.setUSE("hanim_l_metatarsal")

HAnimHumanoid43.addJoints(HAnimJoint415)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.setUSE("hanim_r_metatarsal")

HAnimHumanoid43.addJoints(HAnimJoint416)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setUSE("hanim_l_middle0")

HAnimHumanoid43.addJoints(HAnimJoint417)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setUSE("hanim_r_middle0")

HAnimHumanoid43.addJoints(HAnimJoint418)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.setUSE("hanim_l_middle1")

HAnimHumanoid43.addJoints(HAnimJoint419)
HAnimJoint420 = x3d.HAnimJoint()
HAnimJoint420.setUSE("hanim_r_middle1")

HAnimHumanoid43.addJoints(HAnimJoint420)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setUSE("hanim_l_middle2")

HAnimHumanoid43.addJoints(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setUSE("hanim_r_middle2")

HAnimHumanoid43.addJoints(HAnimJoint422)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setUSE("hanim_l_middle3")

HAnimHumanoid43.addJoints(HAnimJoint423)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.setUSE("hanim_r_middle3")

HAnimHumanoid43.addJoints(HAnimJoint424)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setUSE("hanim_l_midtarsal")

HAnimHumanoid43.addJoints(HAnimJoint425)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.setUSE("hanim_r_midtarsal")

HAnimHumanoid43.addJoints(HAnimJoint426)
HAnimJoint427 = x3d.HAnimJoint()
HAnimJoint427.setUSE("hanim_l_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint427)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.setUSE("hanim_r_pinky0")

HAnimHumanoid43.addJoints(HAnimJoint428)
HAnimJoint429 = x3d.HAnimJoint()
HAnimJoint429.setUSE("hanim_l_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint429)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setUSE("hanim_r_pinky1")

HAnimHumanoid43.addJoints(HAnimJoint430)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.setUSE("hanim_l_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint431)
HAnimJoint432 = x3d.HAnimJoint()
HAnimJoint432.setUSE("hanim_r_pinky2")

HAnimHumanoid43.addJoints(HAnimJoint432)
HAnimJoint433 = x3d.HAnimJoint()
HAnimJoint433.setUSE("hanim_l_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint433)
HAnimJoint434 = x3d.HAnimJoint()
HAnimJoint434.setUSE("hanim_r_pinky3")

HAnimHumanoid43.addJoints(HAnimJoint434)
HAnimJoint435 = x3d.HAnimJoint()
HAnimJoint435.setUSE("hanim_l_ring0")

HAnimHumanoid43.addJoints(HAnimJoint435)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.setUSE("hanim_r_ring0")

HAnimHumanoid43.addJoints(HAnimJoint436)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setUSE("hanim_l_ring1")

HAnimHumanoid43.addJoints(HAnimJoint437)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setUSE("hanim_r_ring1")

HAnimHumanoid43.addJoints(HAnimJoint438)
HAnimJoint439 = x3d.HAnimJoint()
HAnimJoint439.setUSE("hanim_l_ring2")

HAnimHumanoid43.addJoints(HAnimJoint439)
HAnimJoint440 = x3d.HAnimJoint()
HAnimJoint440.setUSE("hanim_r_ring2")

HAnimHumanoid43.addJoints(HAnimJoint440)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.setUSE("hanim_l_ring3")

HAnimHumanoid43.addJoints(HAnimJoint441)
HAnimJoint442 = x3d.HAnimJoint()
HAnimJoint442.setUSE("hanim_r_ring3")

HAnimHumanoid43.addJoints(HAnimJoint442)
HAnimJoint443 = x3d.HAnimJoint()
HAnimJoint443.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint443)
HAnimJoint444 = x3d.HAnimJoint()
HAnimJoint444.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint444)
HAnimJoint445 = x3d.HAnimJoint()
HAnimJoint445.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint445)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint446)
HAnimJoint447 = x3d.HAnimJoint()
HAnimJoint447.setUSE("hanim_l_subtalar")

HAnimHumanoid43.addJoints(HAnimJoint447)
HAnimJoint448 = x3d.HAnimJoint()
HAnimJoint448.setUSE("hanim_r_subtalar")

HAnimHumanoid43.addJoints(HAnimJoint448)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.setUSE("hanim_l_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint449)
HAnimJoint450 = x3d.HAnimJoint()
HAnimJoint450.setUSE("hanim_r_thumb1")

HAnimHumanoid43.addJoints(HAnimJoint450)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.setUSE("hanim_l_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint451)
HAnimJoint452 = x3d.HAnimJoint()
HAnimJoint452.setUSE("hanim_r_thumb2")

HAnimHumanoid43.addJoints(HAnimJoint452)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.setUSE("hanim_l_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint453)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setUSE("hanim_r_thumb3")

HAnimHumanoid43.addJoints(HAnimJoint454)
HAnimJoint455 = x3d.HAnimJoint()
HAnimJoint455.setUSE("hanim_l_wrist")

HAnimHumanoid43.addJoints(HAnimJoint455)
HAnimJoint456 = x3d.HAnimJoint()
HAnimJoint456.setUSE("hanim_r_wrist")

HAnimHumanoid43.addJoints(HAnimJoint456)
HAnimSegment457 = x3d.HAnimSegment()
HAnimSegment457.setUSE("hanim_pelvis")

HAnimHumanoid43.addSegments(HAnimSegment457)
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.setUSE("hanim_skull")

HAnimHumanoid43.addSegments(HAnimSegment458)
HAnimSegment459 = x3d.HAnimSegment()
HAnimSegment459.setUSE("hanim_jaw")

HAnimHumanoid43.addSegments(HAnimSegment459)
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.setUSE("hanim_c1")

HAnimHumanoid43.addSegments(HAnimSegment460)
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.setUSE("hanim_c2")

HAnimHumanoid43.addSegments(HAnimSegment461)
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.setUSE("hanim_c3")

HAnimHumanoid43.addSegments(HAnimSegment462)
HAnimSegment463 = x3d.HAnimSegment()
HAnimSegment463.setUSE("hanim_c4")

HAnimHumanoid43.addSegments(HAnimSegment463)
HAnimSegment464 = x3d.HAnimSegment()
HAnimSegment464.setUSE("hanim_c5")

HAnimHumanoid43.addSegments(HAnimSegment464)
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.setUSE("hanim_c6")

HAnimHumanoid43.addSegments(HAnimSegment465)
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setUSE("hanim_c7")

HAnimHumanoid43.addSegments(HAnimSegment466)
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.setUSE("hanim_t1")

HAnimHumanoid43.addSegments(HAnimSegment467)
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.setUSE("hanim_t2")

HAnimHumanoid43.addSegments(HAnimSegment468)
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.setUSE("hanim_t3")

HAnimHumanoid43.addSegments(HAnimSegment469)
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.setUSE("hanim_t4")

HAnimHumanoid43.addSegments(HAnimSegment470)
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setUSE("hanim_t5")

HAnimHumanoid43.addSegments(HAnimSegment471)
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.setUSE("hanim_t6")

HAnimHumanoid43.addSegments(HAnimSegment472)
HAnimSegment473 = x3d.HAnimSegment()
HAnimSegment473.setUSE("hanim_t7")

HAnimHumanoid43.addSegments(HAnimSegment473)
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setUSE("hanim_t8")

HAnimHumanoid43.addSegments(HAnimSegment474)
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.setUSE("hanim_t9")

HAnimHumanoid43.addSegments(HAnimSegment475)
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.setUSE("hanim_t10")

HAnimHumanoid43.addSegments(HAnimSegment476)
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.setUSE("hanim_t11")

HAnimHumanoid43.addSegments(HAnimSegment477)
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.setUSE("hanim_t12")

HAnimHumanoid43.addSegments(HAnimSegment478)
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setUSE("hanim_l1")

HAnimHumanoid43.addSegments(HAnimSegment479)
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.setUSE("hanim_l2")

HAnimHumanoid43.addSegments(HAnimSegment480)
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.setUSE("hanim_l3")

HAnimHumanoid43.addSegments(HAnimSegment481)
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.setUSE("hanim_l4")

HAnimHumanoid43.addSegments(HAnimSegment482)
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.setUSE("hanim_l5")

HAnimHumanoid43.addSegments(HAnimSegment483)
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.setUSE("hanim_sacrum")

HAnimHumanoid43.addSegments(HAnimSegment484)
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.setUSE("hanim_l_calf")

HAnimHumanoid43.addSegments(HAnimSegment485)
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setUSE("hanim_r_calf")

HAnimHumanoid43.addSegments(HAnimSegment486)
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.setUSE("hanim_l_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment487)
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.setUSE("hanim_r_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment488)
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.setUSE("hanim_l_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment489)
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setUSE("hanim_r_eyeball")

HAnimHumanoid43.addSegments(HAnimSegment490)
HAnimSegment491 = x3d.HAnimSegment()
HAnimSegment491.setUSE("hanim_l_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment491)
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.setUSE("hanim_r_eyebrow")

HAnimHumanoid43.addSegments(HAnimSegment492)
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.setUSE("hanim_l_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment493)
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.setUSE("hanim_r_eyelid")

HAnimHumanoid43.addSegments(HAnimSegment494)
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.setUSE("hanim_l_forearm")

HAnimHumanoid43.addSegments(HAnimSegment495)
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.setUSE("hanim_r_forearm")

HAnimHumanoid43.addSegments(HAnimSegment496)
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.setUSE("hanim_l_forefoot")

HAnimHumanoid43.addSegments(HAnimSegment497)
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.setUSE("hanim_r_forefoot")

HAnimHumanoid43.addSegments(HAnimSegment498)
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setUSE("hanim_l_hand")

HAnimHumanoid43.addSegments(HAnimSegment499)
HAnimSegment500 = x3d.HAnimSegment()
HAnimSegment500.setUSE("hanim_r_hand")

HAnimHumanoid43.addSegments(HAnimSegment500)
HAnimSegment501 = x3d.HAnimSegment()
HAnimSegment501.setUSE("hanim_l_hindfoot")

HAnimHumanoid43.addSegments(HAnimSegment501)
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.setUSE("hanim_r_hindfoot")

HAnimHumanoid43.addSegments(HAnimSegment502)
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setUSE("hanim_l_index_distal")

HAnimHumanoid43.addSegments(HAnimSegment503)
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.setUSE("hanim_r_index_distal")

HAnimHumanoid43.addSegments(HAnimSegment504)
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment505)
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment506)
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.setUSE("hanim_l_index_middle")

HAnimHumanoid43.addSegments(HAnimSegment507)
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.setUSE("hanim_r_index_middle")

HAnimHumanoid43.addSegments(HAnimSegment508)
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.setUSE("hanim_l_index_proximal")

HAnimHumanoid43.addSegments(HAnimSegment509)
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.setUSE("hanim_r_index_proximal")

HAnimHumanoid43.addSegments(HAnimSegment510)
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.setUSE("hanim_l_middistal")

HAnimHumanoid43.addSegments(HAnimSegment511)
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.setUSE("hanim_r_middistal")

HAnimHumanoid43.addSegments(HAnimSegment512)
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.setUSE("hanim_l_middle_distal")

HAnimHumanoid43.addSegments(HAnimSegment513)
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setUSE("hanim_r_middle_distal")

HAnimHumanoid43.addSegments(HAnimSegment514)
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment515)
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment516)
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.setUSE("hanim_l_middle_middle")

HAnimHumanoid43.addSegments(HAnimSegment517)
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.setUSE("hanim_r_middle_middle")

HAnimHumanoid43.addSegments(HAnimSegment518)
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.setUSE("hanim_l_middle_proximal")

HAnimHumanoid43.addSegments(HAnimSegment519)
HAnimSegment520 = x3d.HAnimSegment()
HAnimSegment520.setUSE("hanim_r_middle_proximal")

HAnimHumanoid43.addSegments(HAnimSegment520)
HAnimSegment521 = x3d.HAnimSegment()
HAnimSegment521.setUSE("hanim_l_midproximal")

HAnimHumanoid43.addSegments(HAnimSegment521)
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.setUSE("hanim_r_midproximal")

HAnimHumanoid43.addSegments(HAnimSegment522)
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setUSE("hanim_l_pinky_distal")

HAnimHumanoid43.addSegments(HAnimSegment523)
HAnimSegment524 = x3d.HAnimSegment()
HAnimSegment524.setUSE("hanim_r_pinky_distal")

HAnimHumanoid43.addSegments(HAnimSegment524)
HAnimSegment525 = x3d.HAnimSegment()
HAnimSegment525.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment525)
HAnimSegment526 = x3d.HAnimSegment()
HAnimSegment526.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment526)
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.setUSE("hanim_l_pinky_middle")

HAnimHumanoid43.addSegments(HAnimSegment527)
HAnimSegment528 = x3d.HAnimSegment()
HAnimSegment528.setUSE("hanim_r_pinky_middle")

HAnimHumanoid43.addSegments(HAnimSegment528)
HAnimSegment529 = x3d.HAnimSegment()
HAnimSegment529.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid43.addSegments(HAnimSegment529)
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid43.addSegments(HAnimSegment530)
HAnimSegment531 = x3d.HAnimSegment()
HAnimSegment531.setUSE("hanim_l_ring_distal")

HAnimHumanoid43.addSegments(HAnimSegment531)
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.setUSE("hanim_r_ring_distal")

HAnimHumanoid43.addSegments(HAnimSegment532)
HAnimSegment533 = x3d.HAnimSegment()
HAnimSegment533.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment533)
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment534)
HAnimSegment535 = x3d.HAnimSegment()
HAnimSegment535.setUSE("hanim_l_ring_middle")

HAnimHumanoid43.addSegments(HAnimSegment535)
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setUSE("hanim_r_ring_middle")

HAnimHumanoid43.addSegments(HAnimSegment536)
HAnimSegment537 = x3d.HAnimSegment()
HAnimSegment537.setUSE("hanim_l_ring_proximal")

HAnimHumanoid43.addSegments(HAnimSegment537)
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setUSE("hanim_r_ring_proximal")

HAnimHumanoid43.addSegments(HAnimSegment538)
HAnimSegment539 = x3d.HAnimSegment()
HAnimSegment539.setUSE("hanim_l_scapula")

HAnimHumanoid43.addSegments(HAnimSegment539)
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.setUSE("hanim_r_scapula")

HAnimHumanoid43.addSegments(HAnimSegment540)
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setUSE("hanim_l_thigh")

HAnimHumanoid43.addSegments(HAnimSegment541)
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.setUSE("hanim_r_thigh")

HAnimHumanoid43.addSegments(HAnimSegment542)
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setUSE("hanim_l_thumb_distal")

HAnimHumanoid43.addSegments(HAnimSegment543)
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.setUSE("hanim_r_thumb_distal")

HAnimHumanoid43.addSegments(HAnimSegment544)
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment545)
HAnimSegment546 = x3d.HAnimSegment()
HAnimSegment546.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid43.addSegments(HAnimSegment546)
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid43.addSegments(HAnimSegment547)
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid43.addSegments(HAnimSegment548)
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setUSE("hanim_l_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment549)
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setUSE("hanim_r_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment550)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.setUSE("hanim_crotch_pt")

HAnimHumanoid43.addSites(HAnimSite551)
HAnimSite552 = x3d.HAnimSite()
HAnimSite552.setUSE("hanim_skull_tip")

HAnimHumanoid43.addSites(HAnimSite552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.setUSE("hanim_sellion_pt")

HAnimHumanoid43.addSites(HAnimSite553)
HAnimSite554 = x3d.HAnimSite()
HAnimSite554.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.addSites(HAnimSite554)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.addSites(HAnimSite555)
HAnimSite556 = x3d.HAnimSite()
HAnimSite556.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.addSites(HAnimSite556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.addSites(HAnimSite557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setUSE("hanim_substernale_pt")

HAnimHumanoid43.addSites(HAnimSite558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid43.addSites(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid43.addSites(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.setUSE("hanim_navel_pt")

HAnimHumanoid43.addSites(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.addSites(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.addSites(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid43.addSites(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid43.addSites(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid43.addSites(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setUSE("hanim_l_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.setUSE("hanim_r_digit2_pt")

HAnimHumanoid43.addSites(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid43.addSites(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid43.addSites(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid43.addSites(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid43.addSites(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid43.addSites(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid43.addSites(HAnimSite609)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite610)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid43.addSites(HAnimSite611)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite612)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite613)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite614)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite615)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite616)
HAnimSite617 = x3d.HAnimSite()
HAnimSite617.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid43.addSites(HAnimSite617)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.addSites(HAnimSite618)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.addSites(HAnimSite619)
HAnimSite620 = x3d.HAnimSite()
HAnimSite620.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite620)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite621)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite622)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite623)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite624)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite625)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite626)
HAnimSite627 = x3d.HAnimSite()
HAnimSite627.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid43.addSites(HAnimSite627)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid43.addSites(HAnimSite628)
HAnimSite629 = x3d.HAnimSite()
HAnimSite629.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid43.addSites(HAnimSite629)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite630)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite631)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite632)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite633)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite634)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid43.addSites(HAnimSite635)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite636)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite637)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite638)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite639)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite640)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite641)

Scene29.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/HAnimSpecificationLOA3Invisible_RoundTrip.x3d")

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
meta10.setName("reference")
meta10.setContent("HAnimSpecificationLOA3Illustrated.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("HAnimSpecificationLOA3Motion.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("HAnimSpecificationExampleChangeLog.txt")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("Image")
meta13.setContent("images/BonesAllSkeletonFrontViewLOA1.png")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("Image")
meta14.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("Image")
meta15.setContent("images/BonesAllSkeletonFrontViewLOA3.png")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("TODO")
meta16.setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("TODO")
meta17.setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("reference")
meta20.setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("translator")
meta21.setContent("Don Brutzman and Joe Williams")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("generator")
meta22.setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("reference")
meta24.setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("reference")
meta25.setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("reference")
meta26.setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("generator")
meta27.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("identifier")
meta28.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("license")
meta29.setContent("../license.html")

head1.addMeta(meta29)

X3D0.setHead(head1)
Scene30 = x3d.Scene()
Background31 = x3d.Background()
Background31.setSkyColor([0.3,0.3,0.3])

Scene30.addChildren(Background31)
NavigationInfo32 = x3d.NavigationInfo()

Scene30.addChildren(NavigationInfo32)
Group33 = x3d.Group()
Group33.setDEF("Original_WorldInfo")
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])
WorldInfo34.setTitle("HANIM 200x Default Joint Centers, LOA3")

Group33.addChildren(WorldInfo34)

Scene30.addChildren(Group33)
#TODO move viewpoints to be internal to HAnimHumanoid
#Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint35.setDescription("Humanoid LOA 3 Front")
Viewpoint35.setPosition([0,0.4,4])

Scene30.addChildren(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint36.setDescription("Humanoid LOA 3 Front Close")
Viewpoint36.setPosition([0,0.8,2])

Scene30.addChildren(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint37.setDescription("Humanoid LOA 3 Front Closer")
Viewpoint37.setPosition([0,1.2,1])

Scene30.addChildren(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setCenterOfRotation([0,1.5,0.0016])
Viewpoint38.setDescription("Humanoid LOA 3 Front Face")
Viewpoint38.setPosition([0,1.63,1])

Scene30.addChildren(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint39.setDescription("Humanoid LOA 3 Right Side")
Viewpoint39.setOrientation([0,1,0,1.5708])
Viewpoint39.setPosition([2.6,0.8,0])

Scene30.addChildren(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint40.setDescription("Humanoid LOA 3 Right Side Close")
Viewpoint40.setOrientation([0,1,0,1.2])
Viewpoint40.setPosition([1,0.8,0.5])

Scene30.addChildren(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint41.setDescription("Humanoid LOA 3 Left Side Close")
Viewpoint41.setOrientation([0,1,0,-1.2])
Viewpoint41.setPosition([-1,0.8,0.5])

Scene30.addChildren(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint42.setDescription("Humanoid LOA 3 Left Side")
Viewpoint42.setOrientation([0,1,0,-1.5708])
Viewpoint42.setPosition([-2.6,0.8,0])

Scene30.addChildren(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setCenterOfRotation([0,0.9149,0.0016])
Viewpoint43.setDescription("Humanoid LOA 3 Top")
Viewpoint43.setOrientation([1,0,0,-1.5708])
Viewpoint43.setPosition([0,3.5,0])

Scene30.addChildren(Viewpoint43)
HAnimHumanoid44 = x3d.HAnimHumanoid()
HAnimHumanoid44.setName("humanoid")
HAnimHumanoid44.setDEF("hanim_humanoid")
HAnimHumanoid44.setInfo(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"])
HAnimHumanoid44.setVersion("1.0")
#Only one root HAnimJoint is expected
#USE nodes go here for access by inverse kinematics (IK) engines and other tools
#Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
#TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
#right between the eyes, stationary position not animating except with body itself
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("humanoid_root")
HAnimJoint45.setDEF("hanim_humanoid_root")
HAnimJoint45.setCenter([0,0.824,0.0277])
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.setName("sacrum")
HAnimSegment46.setDEF("hanim_sacrum")

HAnimJoint45.addChildren(HAnimSegment46)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.setName("sacroiliac")
HAnimJoint47.setDEF("hanim_sacroiliac")
HAnimJoint47.setCenter([0,0.9149,0.0016])
HAnimSegment48 = x3d.HAnimSegment()
HAnimSegment48.setName("pelvis")
HAnimSegment48.setDEF("hanim_pelvis")
HAnimSite49 = x3d.HAnimSite()
HAnimSite49.setName("r_iliocristale_pt")
HAnimSite49.setDEF("hanim_r_iliocristale_pt")
HAnimSite49.setTranslation([-0.1525,1.0628,0.0035])

HAnimSegment48.addChildren(HAnimSite49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.setName("r_trochanterion_pt")
HAnimSite50.setDEF("hanim_r_trochanterion_pt")
HAnimSite50.setTranslation([-0.1689,0.8419,0.0352])

HAnimSegment48.addChildren(HAnimSite50)
HAnimSite51 = x3d.HAnimSite()
HAnimSite51.setName("l_iliocristale_pt")
HAnimSite51.setDEF("hanim_l_iliocristale_pt")
HAnimSite51.setTranslation([0.1612,1.0537,0.0008])

HAnimSegment48.addChildren(HAnimSite51)
HAnimSite52 = x3d.HAnimSite()
HAnimSite52.setName("l_trochanterion_pt")
HAnimSite52.setDEF("hanim_l_trochanterion_pt")
HAnimSite52.setTranslation([0.1677,0.8336,0.0303])

HAnimSegment48.addChildren(HAnimSite52)
HAnimSite53 = x3d.HAnimSite()
HAnimSite53.setName("r_asis_pt")
HAnimSite53.setDEF("hanim_r_asis_pt")
HAnimSite53.setTranslation([-0.0887,1.0021,0.1112])

HAnimSegment48.addChildren(HAnimSite53)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.setName("l_asis_pt")
HAnimSite54.setDEF("hanim_l_asis_pt")
HAnimSite54.setTranslation([0.0925,0.9983,0.1052])

HAnimSegment48.addChildren(HAnimSite54)
HAnimSite55 = x3d.HAnimSite()
HAnimSite55.setName("r_psis_pt")
HAnimSite55.setDEF("hanim_r_psis_pt")
HAnimSite55.setTranslation([-0.0716,1.019,-0.1138])

HAnimSegment48.addChildren(HAnimSite55)
HAnimSite56 = x3d.HAnimSite()
HAnimSite56.setName("l_psis_pt")
HAnimSite56.setDEF("hanim_l_psis_pt")
HAnimSite56.setTranslation([0.0774,1.019,-0.1151])

HAnimSegment48.addChildren(HAnimSite56)
HAnimSite57 = x3d.HAnimSite()
HAnimSite57.setName("crotch_pt")
HAnimSite57.setDEF("hanim_crotch_pt")
HAnimSite57.setTranslation([0.0034,0.8266,0.0257])

HAnimSegment48.addChildren(HAnimSite57)

HAnimJoint47.addChildren(HAnimSegment48)
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.setName("l_hip")
HAnimJoint58.setDEF("hanim_l_hip")
HAnimJoint58.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment59 = x3d.HAnimSegment()
HAnimSegment59.setName("l_thigh")
HAnimSegment59.setDEF("hanim_l_thigh")
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.setName("l_knee_crease_pt")
HAnimSite60.setDEF("hanim_l_knee_crease_pt")
HAnimSite60.setTranslation([0.0993,0.4881,-0.0309])

HAnimSegment59.addChildren(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.setName("l_femoral_lateral_epicn_pt")
HAnimSite61.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite61.setTranslation([0.1598,0.4967,0.0297])

HAnimSegment59.addChildren(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.setName("l_femoral_medial_epicn_pt")
HAnimSite62.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite62.setTranslation([0.0398,0.4946,0.0303])

HAnimSegment59.addChildren(HAnimSite62)

HAnimJoint58.addChildren(HAnimSegment59)
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.setName("l_knee")
HAnimJoint63.setDEF("hanim_l_knee")
HAnimJoint63.setCenter([0.104,0.4867,0.0308])
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.setName("l_calf")
HAnimSegment64.setDEF("hanim_l_calf")

HAnimJoint63.addChildren(HAnimSegment64)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.setName("l_ankle")
HAnimJoint65.setDEF("hanim_l_ankle")
HAnimJoint65.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment66 = x3d.HAnimSegment()
HAnimSegment66.setName("l_hindfoot")
HAnimSegment66.setDEF("hanim_l_hindfoot")
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.setName("l_lateral_malleolus_pt")
HAnimSite67.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite67.setTranslation([0.1308,0.0597,-0.1032])

HAnimSegment66.addChildren(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.setName("l_medial_malleolus_pt")
HAnimSite68.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite68.setTranslation([0.089,0.0716,-0.0881])

HAnimSegment66.addChildren(HAnimSite68)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_sphyrion_pt")
HAnimSite69.setDEF("hanim_l_sphyrion_pt")
HAnimSite69.setTranslation([0.089,0.0575,-0.0943])

HAnimSegment66.addChildren(HAnimSite69)
HAnimSite70 = x3d.HAnimSite()
HAnimSite70.setName("l_calcaneous_post_pt")
HAnimSite70.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite70.setTranslation([0.0974,0.0259,-0.1171])

HAnimSegment66.addChildren(HAnimSite70)

HAnimJoint65.addChildren(HAnimSegment66)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.setName("l_subtalar")
HAnimJoint71.setDEF("hanim_l_subtalar")
HAnimJoint71.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.setName("l_midproximal")
HAnimSegment72.setDEF("hanim_l_midproximal")

HAnimJoint71.addChildren(HAnimSegment72)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.setName("l_midtarsal")
HAnimJoint73.setDEF("hanim_l_midtarsal")
HAnimJoint73.setCenter([0.1086,0.0001,0.0368])
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.setName("l_middistal")
HAnimSegment74.setDEF("hanim_l_middistal")
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("l_metatarsal_pha1_pt")
HAnimSite75.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite75.setTranslation([0.0816,0.0232,0.0106])

HAnimSegment74.addChildren(HAnimSite75)

HAnimJoint73.addChildren(HAnimSegment74)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.setName("l_metatarsal")
HAnimJoint76.setDEF("hanim_l_metatarsal")
HAnimJoint76.setCenter([0.1086,0,0.0762])
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.setName("l_forefoot")
HAnimSegment77.setDEF("hanim_l_forefoot")
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("l_forefoot_tip")
HAnimSite78.setDEF("hanim_l_forefoot_tip")
HAnimSite78.setTranslation([0.1354,0.0016,0.1476])

HAnimSegment77.addChildren(HAnimSite78)
HAnimSite79 = x3d.HAnimSite()
HAnimSite79.setName("l_metatarsal_pha5_pt")
HAnimSite79.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite79.setTranslation([0.1825,0.007,0.0928])

HAnimSegment77.addChildren(HAnimSite79)
HAnimSite80 = x3d.HAnimSite()
HAnimSite80.setName("l_digit2_pt")
HAnimSite80.setDEF("hanim_l_digit2_pt")
HAnimSite80.setTranslation([0.1195,0.0079,0.1433])

HAnimSegment77.addChildren(HAnimSite80)

HAnimJoint76.addChildren(HAnimSegment77)

HAnimJoint73.addChildren(HAnimJoint76)

HAnimJoint71.addChildren(HAnimJoint73)

HAnimJoint65.addChildren(HAnimJoint71)

HAnimJoint63.addChildren(HAnimJoint65)

HAnimJoint58.addChildren(HAnimJoint63)

HAnimJoint47.addChildren(HAnimJoint58)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.setName("r_hip")
HAnimJoint81.setDEF("hanim_r_hip")
HAnimJoint81.setCenter([-0.0961,0.9124,-0.0001])
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.setName("r_thigh")
HAnimSegment82.setDEF("hanim_r_thigh")
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.setName("r_knee_crease_pt")
HAnimSite83.setDEF("hanim_r_knee_crease_pt")
HAnimSite83.setTranslation([-0.0825,0.4932,-0.0326])

HAnimSegment82.addChildren(HAnimSite83)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.setName("r_femoral_lateral_epicn_pt")
HAnimSite84.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite84.setTranslation([-0.1421,0.4992,0.031])

HAnimSegment82.addChildren(HAnimSite84)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.setName("r_femoral_medial_epicn_pt")
HAnimSite85.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite85.setTranslation([-0.0221,0.5014,0.0289])

HAnimSegment82.addChildren(HAnimSite85)

HAnimJoint81.addChildren(HAnimSegment82)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.setName("r_knee")
HAnimJoint86.setDEF("hanim_r_knee")
HAnimJoint86.setCenter([-0.104,0.4867,0.0308])
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.setName("r_calf")
HAnimSegment87.setDEF("hanim_r_calf")

HAnimJoint86.addChildren(HAnimSegment87)
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.setName("r_ankle")
HAnimJoint88.setDEF("hanim_r_ankle")
HAnimJoint88.setCenter([-0.1101,0.0656,-0.0736])
HAnimSegment89 = x3d.HAnimSegment()
HAnimSegment89.setName("r_hindfoot")
HAnimSegment89.setDEF("hanim_r_hindfoot")
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("r_lateral_malleolus_pt")
HAnimSite90.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite90.setTranslation([-0.1006,0.0658,-0.1075])

HAnimSegment89.addChildren(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.setName("r_medial_malleolus_pt")
HAnimSite91.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite91.setTranslation([-0.0591,0.076,-0.0928])

HAnimSegment89.addChildren(HAnimSite91)
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.setName("r_sphyrion_pt")
HAnimSite92.setDEF("hanim_r_sphyrion_pt")
HAnimSite92.setTranslation([-0.0603,0.061,-0.1002])

HAnimSegment89.addChildren(HAnimSite92)
HAnimSite93 = x3d.HAnimSite()
HAnimSite93.setName("r_calcaneous_post_pt")
HAnimSite93.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite93.setTranslation([-0.0692,0.0297,-0.1221])

HAnimSegment89.addChildren(HAnimSite93)

HAnimJoint88.addChildren(HAnimSegment89)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.setName("r_subtalar")
HAnimJoint94.setDEF("hanim_r_subtalar")
HAnimJoint94.setCenter([-0.1086,0.0001,-0.0368])
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.setName("r_midproximal")
HAnimSegment95.setDEF("hanim_r_midproximal")

HAnimJoint94.addChildren(HAnimSegment95)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.setName("r_midtarsal")
HAnimJoint96.setDEF("hanim_r_midtarsal")
HAnimJoint96.setCenter([-0.1086,0.0001,0.0368])
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.setName("r_middistal")
HAnimSegment97.setDEF("hanim_r_middistal")
HAnimSite98 = x3d.HAnimSite()
HAnimSite98.setName("r_metatarsal_pha1_pt")
HAnimSite98.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite98.setTranslation([-0.0521,0.026,0.0127])

HAnimSegment97.addChildren(HAnimSite98)

HAnimJoint96.addChildren(HAnimSegment97)
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.setName("r_metatarsal")
HAnimJoint99.setDEF("hanim_r_metatarsal")
HAnimJoint99.setCenter([-0.1086,0,0.0762])
HAnimSegment100 = x3d.HAnimSegment()
HAnimSegment100.setName("r_forefoot")
HAnimSegment100.setDEF("hanim_r_forefoot")
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setName("r_forefoot_tip")
HAnimSite101.setDEF("hanim_r_forefoot_tip")
HAnimSite101.setTranslation([-0.1043,0.0227,0.145])

HAnimSegment100.addChildren(HAnimSite101)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.setName("r_metatarsal_pha5_pt")
HAnimSite102.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite102.setTranslation([-0.1523,0.0166,0.0895])

HAnimSegment100.addChildren(HAnimSite102)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.setName("r_digit2_pt")
HAnimSite103.setDEF("hanim_r_digit2_pt")
HAnimSite103.setTranslation([-0.0883,0.0134,0.1383])

HAnimSegment100.addChildren(HAnimSite103)

HAnimJoint99.addChildren(HAnimSegment100)

HAnimJoint96.addChildren(HAnimJoint99)

HAnimJoint94.addChildren(HAnimJoint96)

HAnimJoint88.addChildren(HAnimJoint94)

HAnimJoint86.addChildren(HAnimJoint88)

HAnimJoint81.addChildren(HAnimJoint86)

HAnimJoint47.addChildren(HAnimJoint81)

HAnimJoint45.addChildren(HAnimJoint47)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setName("vl5")
HAnimJoint104.setDEF("hanim_vl5")
HAnimJoint104.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.setName("l5")
HAnimSegment105.setDEF("hanim_l5")
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.setName("waist_preferred_post_pt")
HAnimSite106.setDEF("hanim_waist_preferred_post_pt")
HAnimSite106.setTranslation([0,1.0915,-0.1091])

HAnimSegment105.addChildren(HAnimSite106)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.setName("navel_pt")
HAnimSite107.setDEF("hanim_navel_pt")
HAnimSite107.setTranslation([0.0069,1.0966,0.1017])

HAnimSegment105.addChildren(HAnimSite107)

HAnimJoint104.addChildren(HAnimSegment105)
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.setName("vl4")
HAnimJoint108.setDEF("hanim_vl4")
HAnimJoint108.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment109 = x3d.HAnimSegment()
HAnimSegment109.setName("l4")
HAnimSegment109.setDEF("hanim_l4")

HAnimJoint108.addChildren(HAnimSegment109)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.setName("vl3")
HAnimJoint110.setDEF("hanim_vl3")
HAnimJoint110.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment111 = x3d.HAnimSegment()
HAnimSegment111.setName("l3")
HAnimSegment111.setDEF("hanim_l3")

HAnimJoint110.addChildren(HAnimSegment111)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.setName("vl2")
HAnimJoint112.setDEF("hanim_vl2")
HAnimJoint112.setCenter([0.0045,1.1546,-0.08])
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.setName("l2")
HAnimSegment113.setDEF("hanim_l2")
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("r_rib10_pt")
HAnimSite114.setDEF("hanim_r_rib10_pt")
HAnimSite114.setTranslation([-0.0711,1.1941,0.1016])

HAnimSegment113.addChildren(HAnimSite114)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setName("l_rib10_pt")
HAnimSite115.setDEF("hanim_l_rib10_pt")
HAnimSite115.setTranslation([0.0871,1.1925,0.0992])

HAnimSegment113.addChildren(HAnimSite115)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.setName("rib10_midspine_pt")
HAnimSite116.setDEF("hanim_rib10_midspine_pt")
HAnimSite116.setTranslation([0.0049,1.1908,-0.1113])

HAnimSegment113.addChildren(HAnimSite116)

HAnimJoint112.addChildren(HAnimSegment113)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.setName("vl1")
HAnimJoint117.setDEF("hanim_vl1")
HAnimJoint117.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.setName("l1")
HAnimSegment118.setDEF("hanim_l1")

HAnimJoint117.addChildren(HAnimSegment118)
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.setName("vt12")
HAnimJoint119.setDEF("hanim_vt12")
HAnimJoint119.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment120 = x3d.HAnimSegment()
HAnimSegment120.setName("t12")
HAnimSegment120.setDEF("hanim_t12")

HAnimJoint119.addChildren(HAnimSegment120)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.setName("vt11")
HAnimJoint121.setDEF("hanim_vt11")
HAnimJoint121.setCenter([0.0053,1.2679,-0.081])
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.setName("t11")
HAnimSegment122.setDEF("hanim_t11")

HAnimJoint121.addChildren(HAnimSegment122)
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("vt10")
HAnimJoint123.setDEF("hanim_vt10")
HAnimJoint123.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment124 = x3d.HAnimSegment()
HAnimSegment124.setName("t10")
HAnimSegment124.setDEF("hanim_t10")
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("substernale_pt")
HAnimSite125.setDEF("hanim_substernale_pt")
HAnimSite125.setTranslation([0.0085,1.2995,0.1147])

HAnimSegment124.addChildren(HAnimSite125)

HAnimJoint123.addChildren(HAnimSegment124)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.setName("vt9")
HAnimJoint126.setDEF("hanim_vt9")
HAnimJoint126.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.setName("t9")
HAnimSegment127.setDEF("hanim_t9")
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("r_thelion_pt")
HAnimSite128.setDEF("hanim_r_thelion_pt")
HAnimSite128.setTranslation([-0.0736,1.3385,0.1217])

HAnimSegment127.addChildren(HAnimSite128)
HAnimSite129 = x3d.HAnimSite()
HAnimSite129.setName("l_thelion_pt")
HAnimSite129.setDEF("hanim_l_thelion_pt")
HAnimSite129.setTranslation([0.0918,1.3382,0.1192])

HAnimSegment127.addChildren(HAnimSite129)

HAnimJoint126.addChildren(HAnimSegment127)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.setName("vt8")
HAnimJoint130.setDEF("hanim_vt8")
HAnimJoint130.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.setName("t8")
HAnimSegment131.setDEF("hanim_t8")

HAnimJoint130.addChildren(HAnimSegment131)
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.setName("vt7")
HAnimJoint132.setDEF("hanim_vt7")
HAnimJoint132.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment133 = x3d.HAnimSegment()
HAnimSegment133.setName("t7")
HAnimSegment133.setDEF("hanim_t7")

HAnimJoint132.addChildren(HAnimSegment133)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.setName("vt6")
HAnimJoint134.setDEF("hanim_vt6")
HAnimJoint134.setCenter([0.0059,1.3866,-0.08])
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.setName("t6")
HAnimSegment135.setDEF("hanim_t6")

HAnimJoint134.addChildren(HAnimSegment135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.setName("vt5")
HAnimJoint136.setDEF("hanim_vt5")
HAnimJoint136.setCenter([0.006,1.4102,-0.0745])
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.setName("t5")
HAnimSegment137.setDEF("hanim_t5")

HAnimJoint136.addChildren(HAnimSegment137)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.setName("vt4")
HAnimJoint138.setDEF("hanim_vt4")
HAnimJoint138.setCenter([0.0061,1.432,-0.0675])
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.setName("t4")
HAnimSegment139.setDEF("hanim_t4")

HAnimJoint138.addChildren(HAnimSegment139)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setName("vt3")
HAnimJoint140.setDEF("hanim_vt3")
HAnimJoint140.setCenter([0.0062,1.4583,-0.057])
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.setName("t3")
HAnimSegment141.setDEF("hanim_t3")

HAnimJoint140.addChildren(HAnimSegment141)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.setName("vt2")
HAnimJoint142.setDEF("hanim_vt2")
HAnimJoint142.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.setName("t2")
HAnimSegment143.setDEF("hanim_t2")

HAnimJoint142.addChildren(HAnimSegment143)
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.setName("vt1")
HAnimJoint144.setDEF("hanim_vt1")
HAnimJoint144.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment145 = x3d.HAnimSegment()
HAnimSegment145.setName("t1")
HAnimSegment145.setDEF("hanim_t1")
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("suprasternale_pt")
HAnimSite146.setDEF("hanim_suprasternale_pt")
HAnimSite146.setTranslation([0.0084,1.4714,0.0551])

HAnimSegment145.addChildren(HAnimSite146)
HAnimSite147 = x3d.HAnimSite()
HAnimSite147.setName("cervicale_pt")
HAnimSite147.setDEF("hanim_cervicale_pt")
HAnimSite147.setTranslation([0.0064,1.52,-0.0815])

HAnimSegment145.addChildren(HAnimSite147)

HAnimJoint144.addChildren(HAnimSegment145)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("vc7")
HAnimJoint148.setDEF("hanim_vc7")
HAnimJoint148.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.setName("c7")
HAnimSegment149.setDEF("hanim_c7")
HAnimSite150 = x3d.HAnimSite()
HAnimSite150.setName("r_neck_base_pt")
HAnimSite150.setDEF("hanim_r_neck_base_pt")
HAnimSite150.setTranslation([-0.0419,1.5149,-0.022])

HAnimSegment149.addChildren(HAnimSite150)
HAnimSite151 = x3d.HAnimSite()
HAnimSite151.setName("l_neck_base_pt")
HAnimSite151.setDEF("hanim_l_neck_base_pt")
HAnimSite151.setTranslation([0.0646,1.5141,-0.038])

HAnimSegment149.addChildren(HAnimSite151)

HAnimJoint148.addChildren(HAnimSegment149)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("vc6")
HAnimJoint152.setDEF("hanim_vc6")
HAnimJoint152.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.setName("c6")
HAnimSegment153.setDEF("hanim_c6")

HAnimJoint152.addChildren(HAnimSegment153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setName("vc5")
HAnimJoint154.setDEF("hanim_vc5")
HAnimJoint154.setCenter([0.0066,1.552,-0.0082])
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.setName("c5")
HAnimSegment155.setDEF("hanim_c5")

HAnimJoint154.addChildren(HAnimSegment155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.setName("vc4")
HAnimJoint156.setDEF("hanim_vc4")
HAnimJoint156.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment157 = x3d.HAnimSegment()
HAnimSegment157.setName("c4")
HAnimSegment157.setDEF("hanim_c4")

HAnimJoint156.addChildren(HAnimSegment157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setName("vc3")
HAnimJoint158.setDEF("hanim_vc3")
HAnimJoint158.setCenter([0.0066,1.58,-0.0103])
HAnimSegment159 = x3d.HAnimSegment()
HAnimSegment159.setName("c3")
HAnimSegment159.setDEF("hanim_c3")

HAnimJoint158.addChildren(HAnimSegment159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.setName("vc2")
HAnimJoint160.setDEF("hanim_vc2")
HAnimJoint160.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment161 = x3d.HAnimSegment()
HAnimSegment161.setName("c2")
HAnimSegment161.setDEF("hanim_c2")

HAnimJoint160.addChildren(HAnimSegment161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.setName("vc1")
HAnimJoint162.setDEF("hanim_vc1")
HAnimJoint162.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment163 = x3d.HAnimSegment()
HAnimSegment163.setName("c1")
HAnimSegment163.setDEF("hanim_c1")

HAnimJoint162.addChildren(HAnimSegment163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.setName("skullbase")
HAnimJoint164.setDEF("hanim_skullbase")
HAnimJoint164.setCenter([0.0044,1.6209,0.0236])
HAnimSegment165 = x3d.HAnimSegment()
HAnimSegment165.setName("skull")
HAnimSegment165.setDEF("hanim_skull")
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setName("skull_tip")
HAnimSite166.setDEF("hanim_skull_tip")
HAnimSite166.setTranslation([0.005,1.7504,0.0055])
#TODO move skull_tip x to zero, check others for symmetry

HAnimSegment165.addChildren(HAnimSite166)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("sellion_pt")
HAnimSite167.setDEF("hanim_sellion_pt")
HAnimSite167.setTranslation([0.0058,1.6316,0.0852])

HAnimSegment165.addChildren(HAnimSite167)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("r_infraorbitale_pt")
HAnimSite168.setDEF("hanim_r_infraorbitale_pt")
HAnimSite168.setTranslation([-0.0237,1.6171,0.0752])

HAnimSegment165.addChildren(HAnimSite168)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.setName("l_infraorbitale_pt")
HAnimSite169.setDEF("hanim_l_infraorbitale_pt")
HAnimSite169.setTranslation([0.0341,1.6171,0.0752])

HAnimSegment165.addChildren(HAnimSite169)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setName("supramenton_pt")
HAnimSite170.setDEF("hanim_supramenton_pt")
HAnimSite170.setTranslation([0.0061,1.541,0.0805])

HAnimSegment165.addChildren(HAnimSite170)
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.setName("r_tragion_pt")
HAnimSite171.setDEF("hanim_r_tragion_pt")
HAnimSite171.setTranslation([-0.0646,1.6347,0.0302])

HAnimSegment165.addChildren(HAnimSite171)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.setName("r_gonion_pt")
HAnimSite172.setDEF("hanim_r_gonion_pt")
HAnimSite172.setTranslation([-0.052,1.5529,0.0347])

HAnimSegment165.addChildren(HAnimSite172)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_tragion_pt")
HAnimSite173.setDEF("hanim_l_tragion_pt")
HAnimSite173.setTranslation([0.0739,1.6348,0.0282])

HAnimSegment165.addChildren(HAnimSite173)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.setName("l_gonion_pt")
HAnimSite174.setDEF("hanim_l_gonion_pt")
HAnimSite174.setTranslation([0.0631,1.553,0.033])

HAnimSegment165.addChildren(HAnimSite174)
HAnimSite175 = x3d.HAnimSite()
HAnimSite175.setName("nuchale_pt")
HAnimSite175.setDEF("hanim_nuchale_pt")
HAnimSite175.setTranslation([0.0039,1.5972,-0.0796])

HAnimSegment165.addChildren(HAnimSite175)

HAnimJoint164.addChildren(HAnimSegment165)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setName("l_eyeball_joint")
HAnimJoint176.setDEF("hanim_l_eyeball_joint")
HAnimJoint176.setCenter([0.0336,1.6332,0.0502])
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setName("l_eyeball")
HAnimSegment177.setDEF("hanim_l_eyeball")
HAnimSite178 = x3d.HAnimSite()
HAnimSite178.setName("l_eyeball_site_view")
HAnimSite178.setDEF("hanim_l_eyeball_site_view")
HAnimSite178.setTranslation([0.034,1.64,0.05])
Viewpoint179 = x3d.Viewpoint()
Viewpoint179.setDEF("hanim_l_eyeball_site_viewpoint")
Viewpoint179.setDescription("l_eyeball_site_viewpoint looking forward")
Viewpoint179.setOrientation([0,1,0,3.141593])
Viewpoint179.setPosition([0,0,0])

HAnimSite178.addChildren(Viewpoint179)

HAnimSegment177.addChildren(HAnimSite178)

HAnimJoint176.addChildren(HAnimSegment177)

HAnimJoint164.addChildren(HAnimJoint176)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("l_eyelid_joint")
HAnimJoint180.setDEF("hanim_l_eyelid_joint")
HAnimJoint180.setCenter([0.0336,1.6332,0.0502])
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("l_eyelid")
HAnimSegment181.setDEF("hanim_l_eyelid")

HAnimJoint180.addChildren(HAnimSegment181)

HAnimJoint164.addChildren(HAnimJoint180)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.setName("l_eyebrow_joint")
HAnimJoint182.setDEF("hanim_l_eyebrow_joint")
HAnimJoint182.setCenter([0.0336,1.635,0.0506])
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.setName("l_eyebrow")
HAnimSegment183.setDEF("hanim_l_eyebrow")

HAnimJoint182.addChildren(HAnimSegment183)

HAnimJoint164.addChildren(HAnimJoint182)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setName("r_eyeball_joint")
HAnimJoint184.setDEF("hanim_r_eyeball_joint")
HAnimJoint184.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.setName("r_eyeball")
HAnimSegment185.setDEF("hanim_r_eyeball")
HAnimSite186 = x3d.HAnimSite()
HAnimSite186.setName("r_eyeball_site_view")
HAnimSite186.setDEF("hanim_r_eyeball_site_view")
HAnimSite186.setTranslation([-0.034,1.64,0.05])
Viewpoint187 = x3d.Viewpoint()
Viewpoint187.setDEF("hanim_r_eyeball_site_viewpoint")
Viewpoint187.setDescription("r_eyeball_site_viewpoint looking forward")
Viewpoint187.setOrientation([0,1,0,3.141593])
Viewpoint187.setPosition([0,0,0])

HAnimSite186.addChildren(Viewpoint187)

HAnimSegment185.addChildren(HAnimSite186)

HAnimJoint184.addChildren(HAnimSegment185)

HAnimJoint164.addChildren(HAnimJoint184)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.setName("r_eyelid_joint")
HAnimJoint188.setDEF("hanim_r_eyelid_joint")
HAnimJoint188.setCenter([-0.0336,1.6332,0.0502])
HAnimSegment189 = x3d.HAnimSegment()
HAnimSegment189.setName("r_eyelid")
HAnimSegment189.setDEF("hanim_r_eyelid")

HAnimJoint188.addChildren(HAnimSegment189)

HAnimJoint164.addChildren(HAnimJoint188)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.setName("r_eyebrow_joint")
HAnimJoint190.setDEF("hanim_r_eyebrow_joint")
HAnimJoint190.setCenter([-0.0336,1.635,0.0506])
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.setName("r_eyebrow")
HAnimSegment191.setDEF("hanim_r_eyebrow")

HAnimJoint190.addChildren(HAnimSegment191)

HAnimJoint164.addChildren(HAnimJoint190)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.setName("temporomandibular")
HAnimJoint192.setDEF("hanim_temporomandibular")
HAnimJoint192.setCenter([0,1.63,0.015])
#Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.setName("jaw")
HAnimSegment193.setDEF("hanim_jaw")
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.setName("temporomandibular_l_site_pt")
HAnimSite194.setDEF("hanim_temporomandibular_l_site_pt")
HAnimSite194.setTranslation([0.045,1.63,0])

HAnimSegment193.addChildren(HAnimSite194)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.setName("temporomandibular_r_site_pt")
HAnimSite195.setDEF("hanim_temporomandibular_r_site_pt")
HAnimSite195.setTranslation([-0.045,1.63,0])

HAnimSegment193.addChildren(HAnimSite195)

HAnimJoint192.addChildren(HAnimSegment193)

HAnimJoint164.addChildren(HAnimJoint192)

HAnimJoint162.addChildren(HAnimJoint164)

HAnimJoint160.addChildren(HAnimJoint162)

HAnimJoint158.addChildren(HAnimJoint160)

HAnimJoint156.addChildren(HAnimJoint158)

HAnimJoint154.addChildren(HAnimJoint156)

HAnimJoint152.addChildren(HAnimJoint154)

HAnimJoint148.addChildren(HAnimJoint152)

HAnimJoint144.addChildren(HAnimJoint148)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.setName("l_sternoclavicular")
HAnimJoint196.setDEF("hanim_l_sternoclavicular")
HAnimJoint196.setCenter([0.082,1.4488,-0.0353])
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.setName("l_clavicle")
HAnimSegment197.setDEF("hanim_l_clavicle")
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.setName("l_clavicale_pt")
HAnimSite198.setDEF("hanim_l_clavicale_pt")
HAnimSite198.setTranslation([0.0271,1.4943,0.0394])

HAnimSegment197.addChildren(HAnimSite198)
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.setName("l_acromion_pt")
HAnimSite199.setDEF("hanim_l_acromion_pt")
HAnimSite199.setTranslation([0.2032,1.476,-0.049])

HAnimSegment197.addChildren(HAnimSite199)
HAnimSite200 = x3d.HAnimSite()
HAnimSite200.setName("l_axilla_ant_pt")
HAnimSite200.setDEF("hanim_l_axilla_ant_pt")
HAnimSite200.setTranslation([0.1777,1.4065,-0.0075])

HAnimSegment197.addChildren(HAnimSite200)
HAnimSite201 = x3d.HAnimSite()
HAnimSite201.setName("l_axilla_post_pt")
HAnimSite201.setDEF("hanim_l_axilla_post_pt")
HAnimSite201.setTranslation([0.1706,1.4072,-0.0875])

HAnimSegment197.addChildren(HAnimSite201)

HAnimJoint196.addChildren(HAnimSegment197)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.setName("l_acromioclavicular")
HAnimJoint202.setDEF("hanim_l_acromioclavicular")
HAnimJoint202.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.setName("l_scapula")
HAnimSegment203.setDEF("hanim_l_scapula")

HAnimJoint202.addChildren(HAnimSegment203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.setName("l_shoulder")
HAnimJoint204.setDEF("hanim_l_shoulder")
HAnimJoint204.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.setName("l_upperarm")
HAnimSegment205.setDEF("hanim_l_upperarm")
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.setName("l_humeral_lateral_epicn_pt")
HAnimSite206.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite206.setTranslation([0.228,1.1482,-0.11])

HAnimSegment205.addChildren(HAnimSite206)

HAnimJoint204.addChildren(HAnimSegment205)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.setName("l_elbow")
HAnimJoint207.setDEF("hanim_l_elbow")
HAnimJoint207.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment208 = x3d.HAnimSegment()
HAnimSegment208.setName("l_forearm")
HAnimSegment208.setDEF("hanim_l_forearm")
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.setName("l_radial_styloid_pt")
HAnimSite209.setDEF("hanim_l_radial_styloid_pt")
HAnimSite209.setTranslation([0.1901,0.8645,-0.0415])

HAnimSegment208.addChildren(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("l_olecranon_pt")
HAnimSite210.setDEF("hanim_l_olecranon_pt")
HAnimSite210.setTranslation([0.1962,1.1375,-0.1123])

HAnimSegment208.addChildren(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.setName("l_humeral_medial_epicn_pt")
HAnimSite211.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite211.setTranslation([0.1735,1.1272,-0.1113])

HAnimSegment208.addChildren(HAnimSite211)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.setName("l_radiale_pt")
HAnimSite212.setDEF("hanim_l_radiale_pt")
HAnimSite212.setTranslation([0.2182,1.1212,-0.1167])

HAnimSegment208.addChildren(HAnimSite212)

HAnimJoint207.addChildren(HAnimSegment208)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setName("l_wrist")
HAnimJoint213.setDEF("hanim_l_wrist")
HAnimJoint213.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.setName("l_hand")
HAnimSegment214.setDEF("hanim_l_hand")
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setName("l_metacarpal_pha2_pt")
HAnimSite215.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite215.setTranslation([0.2009,0.8139,-0.0237])

HAnimSegment214.addChildren(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setName("l_ulnar_styloid_pt")
HAnimSite216.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite216.setTranslation([0.2142,0.8529,-0.0648])

HAnimSegment214.addChildren(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setName("l_metacarpal_pha5_pt")
HAnimSite217.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite217.setTranslation([0.1929,0.786,-0.1122])

HAnimSegment214.addChildren(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.setName("l_hand_front_view")
HAnimSite218.setDEF("hanim_l_hand_front_view")
HAnimSite218.setTranslation([0.3,0.75,0.45])
Viewpoint219 = x3d.Viewpoint()
Viewpoint219.setDEF("hanim_l_hand_front_viewpoint")
Viewpoint219.setCenterOfRotation([0,0.7,0])
Viewpoint219.setDescription("left hand front")
Viewpoint219.setPosition([0,0,0])

HAnimSite218.addChildren(Viewpoint219)

HAnimSegment214.addChildren(HAnimSite218)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.setName("l_thumb1")
HAnimJoint220.setDEF("hanim_l_thumb1")
HAnimJoint220.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment221 = x3d.HAnimSegment()
HAnimSegment221.setName("l_thumb_metacarpal")
HAnimSegment221.setDEF("hanim_l_thumb_metacarpal")

HAnimJoint220.addChildren(HAnimSegment221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.setName("l_thumb2")
HAnimJoint222.setDEF("hanim_l_thumb2")
HAnimJoint222.setCenter([0.1951,0.8226,0.0246])
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.setName("l_thumb_proximal")
HAnimSegment223.setDEF("hanim_l_thumb_proximal")

HAnimJoint222.addChildren(HAnimSegment223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.setName("l_thumb3")
HAnimJoint224.setDEF("hanim_l_thumb3")
HAnimJoint224.setCenter([0.1955,0.8159,0.0464])
HAnimSegment225 = x3d.HAnimSegment()
HAnimSegment225.setName("l_thumb_distal")
HAnimSegment225.setDEF("hanim_l_thumb_distal")
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setName("l_thumb_distal_tip")
HAnimSite226.setDEF("hanim_l_thumb_distal_tip")
HAnimSite226.setTranslation([0.1982,0.8061,0.0759])

HAnimSegment225.addChildren(HAnimSite226)

HAnimJoint224.addChildren(HAnimSegment225)

HAnimJoint222.addChildren(HAnimJoint224)

HAnimJoint220.addChildren(HAnimJoint222)

HAnimJoint213.addChildren(HAnimJoint220)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setName("l_index0")
HAnimJoint227.setDEF("hanim_l_index0")
HAnimJoint227.setCenter([0.1983,0.8024,-0.028])
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.setName("l_index_metacarpal")
HAnimSegment228.setDEF("hanim_l_index_metacarpal")

HAnimJoint227.addChildren(HAnimSegment228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setName("l_index1")
HAnimJoint229.setDEF("hanim_l_index1")
HAnimJoint229.setCenter([0.1983,0.7815,-0.028])
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.setName("l_index_proximal")
HAnimSegment230.setDEF("hanim_l_index_proximal")

HAnimJoint229.addChildren(HAnimSegment230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setName("l_index2")
HAnimJoint231.setDEF("hanim_l_index2")
HAnimJoint231.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.setName("l_index_middle")
HAnimSegment232.setDEF("hanim_l_index_middle")

HAnimJoint231.addChildren(HAnimSegment232)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.setName("l_index3")
HAnimJoint233.setDEF("hanim_l_index3")
HAnimJoint233.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.setName("l_index_distal")
HAnimSegment234.setDEF("hanim_l_index_distal")
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setName("l_index_distal_tip")
HAnimSite235.setDEF("hanim_l_index_distal_tip")
HAnimSite235.setTranslation([0.2089,0.6858,-0.0245])

HAnimSegment234.addChildren(HAnimSite235)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.setName("l_dactylion_pt")
HAnimSite236.setDEF("hanim_l_dactylion_pt")
HAnimSite236.setTranslation([0.2056,0.6743,-0.0482])

HAnimSegment234.addChildren(HAnimSite236)

HAnimJoint233.addChildren(HAnimSegment234)

HAnimJoint231.addChildren(HAnimJoint233)

HAnimJoint229.addChildren(HAnimJoint231)

HAnimJoint227.addChildren(HAnimJoint229)

HAnimJoint213.addChildren(HAnimJoint227)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setName("l_middle0")
HAnimJoint237.setDEF("hanim_l_middle0")
HAnimJoint237.setCenter([0.1987,0.8029,-0.053])
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.setName("l_middle_metacarpal")
HAnimSegment238.setDEF("hanim_l_middle_metacarpal")

HAnimJoint237.addChildren(HAnimSegment238)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.setName("l_middle1")
HAnimJoint239.setDEF("hanim_l_middle1")
HAnimJoint239.setCenter([0.1987,0.7818,-0.053])
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.setName("l_middle_proximal")
HAnimSegment240.setDEF("hanim_l_middle_proximal")

HAnimJoint239.addChildren(HAnimSegment240)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.setName("l_middle2")
HAnimJoint241.setDEF("hanim_l_middle2")
HAnimJoint241.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.setName("l_middle_middle")
HAnimSegment242.setDEF("hanim_l_middle_middle")

HAnimJoint241.addChildren(HAnimSegment242)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.setName("l_middle3")
HAnimJoint243.setDEF("hanim_l_middle3")
HAnimJoint243.setCenter([0.2026,0.7011,-0.0494])
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.setName("l_middle_distal")
HAnimSegment244.setDEF("hanim_l_middle_distal")
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.setName("l_middle_distal_tip")
HAnimSite245.setDEF("hanim_l_middle_distal_tip")
HAnimSite245.setTranslation([0.208,0.6731,-0.0491])

HAnimSegment244.addChildren(HAnimSite245)

HAnimJoint243.addChildren(HAnimSegment244)

HAnimJoint241.addChildren(HAnimJoint243)

HAnimJoint239.addChildren(HAnimJoint241)

HAnimJoint237.addChildren(HAnimJoint239)

HAnimJoint213.addChildren(HAnimJoint237)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.setName("l_ring0")
HAnimJoint246.setDEF("hanim_l_ring0")
HAnimJoint246.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.setName("l_ring_metacarpal")
HAnimSegment247.setDEF("hanim_l_ring_metacarpal")

HAnimJoint246.addChildren(HAnimSegment247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.setName("l_ring1")
HAnimJoint248.setDEF("hanim_l_ring1")
HAnimJoint248.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment249 = x3d.HAnimSegment()
HAnimSegment249.setName("l_ring_proximal")
HAnimSegment249.setDEF("hanim_l_ring_proximal")

HAnimJoint248.addChildren(HAnimSegment249)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.setName("l_ring2")
HAnimJoint250.setDEF("hanim_l_ring2")
HAnimJoint250.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment251 = x3d.HAnimSegment()
HAnimSegment251.setName("l_ring_middle")
HAnimSegment251.setDEF("hanim_l_ring_middle")

HAnimJoint250.addChildren(HAnimSegment251)
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.setName("l_ring3")
HAnimJoint252.setDEF("hanim_l_ring3")
HAnimJoint252.setCenter([0.1983,0.7045,-0.0767])
HAnimSegment253 = x3d.HAnimSegment()
HAnimSegment253.setName("l_ring_distal")
HAnimSegment253.setDEF("hanim_l_ring_distal")
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.setName("l_ring_distal_tip")
HAnimSite254.setDEF("hanim_l_ring_distal_tip")
HAnimSite254.setTranslation([0.2035,0.675,-0.0756])

HAnimSegment253.addChildren(HAnimSite254)

HAnimJoint252.addChildren(HAnimSegment253)

HAnimJoint250.addChildren(HAnimJoint252)

HAnimJoint248.addChildren(HAnimJoint250)

HAnimJoint246.addChildren(HAnimJoint248)

HAnimJoint213.addChildren(HAnimJoint246)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.setName("l_pinky0")
HAnimJoint255.setDEF("hanim_l_pinky0")
HAnimJoint255.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.setName("l_pinky_metacarpal")
HAnimSegment256.setDEF("hanim_l_pinky_metacarpal")

HAnimJoint255.addChildren(HAnimSegment256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.setName("l_pinky1")
HAnimJoint257.setDEF("hanim_l_pinky1")
HAnimJoint257.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment258 = x3d.HAnimSegment()
HAnimSegment258.setName("l_pinky_proximal")
HAnimSegment258.setDEF("hanim_l_pinky_proximal")

HAnimJoint257.addChildren(HAnimSegment258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setName("l_pinky2")
HAnimJoint259.setDEF("hanim_l_pinky2")
HAnimJoint259.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment260 = x3d.HAnimSegment()
HAnimSegment260.setName("l_pinky_middle")
HAnimSegment260.setDEF("hanim_l_pinky_middle")

HAnimJoint259.addChildren(HAnimSegment260)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.setName("l_pinky3")
HAnimJoint261.setDEF("hanim_l_pinky3")
HAnimJoint261.setCenter([0.1948,0.7277,-0.1017])
HAnimSegment262 = x3d.HAnimSegment()
HAnimSegment262.setName("l_pinky_distal")
HAnimSegment262.setDEF("hanim_l_pinky_distal")
HAnimSite263 = x3d.HAnimSite()
HAnimSite263.setName("l_pinky_distal_tip")
HAnimSite263.setDEF("hanim_l_pinky_distal_tip")
HAnimSite263.setTranslation([0.2014,0.7009,-0.1012])

HAnimSegment262.addChildren(HAnimSite263)

HAnimJoint261.addChildren(HAnimSegment262)

HAnimJoint259.addChildren(HAnimJoint261)

HAnimJoint257.addChildren(HAnimJoint259)

HAnimJoint255.addChildren(HAnimJoint257)

HAnimJoint213.addChildren(HAnimJoint255)

HAnimJoint207.addChildren(HAnimJoint213)

HAnimJoint204.addChildren(HAnimJoint207)

HAnimJoint202.addChildren(HAnimJoint204)

HAnimJoint196.addChildren(HAnimJoint202)

HAnimJoint144.addChildren(HAnimJoint196)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.setName("r_sternoclavicular")
HAnimJoint264.setDEF("hanim_r_sternoclavicular")
HAnimJoint264.setCenter([-0.082,1.4488,-0.0353])
HAnimSegment265 = x3d.HAnimSegment()
HAnimSegment265.setName("r_clavicle")
HAnimSegment265.setDEF("hanim_r_clavicle")
HAnimSite266 = x3d.HAnimSite()
HAnimSite266.setName("r_clavicale_pt")
HAnimSite266.setDEF("hanim_r_clavicale_pt")
HAnimSite266.setTranslation([-0.0115,1.4943,0.04])

HAnimSegment265.addChildren(HAnimSite266)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setName("r_acromion_pt")
HAnimSite267.setDEF("hanim_r_acromion_pt")
HAnimSite267.setTranslation([-0.1905,1.4791,-0.0431])

HAnimSegment265.addChildren(HAnimSite267)
HAnimSite268 = x3d.HAnimSite()
HAnimSite268.setName("r_axilla_ant_pt")
HAnimSite268.setDEF("hanim_r_axilla_ant_pt")
HAnimSite268.setTranslation([-0.1626,1.4072,-0.0031])

HAnimSegment265.addChildren(HAnimSite268)
HAnimSite269 = x3d.HAnimSite()
HAnimSite269.setName("r_axilla_post_pt")
HAnimSite269.setDEF("hanim_r_axilla_post_pt")
HAnimSite269.setTranslation([-0.1603,1.4098,-0.0826])

HAnimSegment265.addChildren(HAnimSite269)

HAnimJoint264.addChildren(HAnimSegment265)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setName("r_acromioclavicular")
HAnimJoint270.setDEF("hanim_r_acromioclavicular")
HAnimJoint270.setCenter([-0.0962,1.4269,-0.0424])
HAnimSegment271 = x3d.HAnimSegment()
HAnimSegment271.setName("r_scapula")
HAnimSegment271.setDEF("hanim_r_scapula")

HAnimJoint270.addChildren(HAnimSegment271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setName("r_shoulder")
HAnimJoint272.setDEF("hanim_r_shoulder")
HAnimJoint272.setCenter([-0.2029,1.4376,-0.0387])
HAnimSegment273 = x3d.HAnimSegment()
HAnimSegment273.setName("r_upperarm")
HAnimSegment273.setDEF("hanim_r_upperarm")
HAnimSite274 = x3d.HAnimSite()
HAnimSite274.setName("r_humeral_lateral_epicn_pt")
HAnimSite274.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite274.setTranslation([-0.2224,1.1517,-0.1033])

HAnimSegment273.addChildren(HAnimSite274)

HAnimJoint272.addChildren(HAnimSegment273)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setName("r_elbow")
HAnimJoint275.setDEF("hanim_r_elbow")
HAnimJoint275.setCenter([-0.2014,1.1357,-0.0682])
HAnimSegment276 = x3d.HAnimSegment()
HAnimSegment276.setName("r_forearm")
HAnimSegment276.setDEF("hanim_r_forearm")
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.setName("r_radial_styloid_pt")
HAnimSite277.setDEF("hanim_r_radial_styloid_pt")
HAnimSite277.setTranslation([-0.1884,0.8676,-0.036])

HAnimSegment276.addChildren(HAnimSite277)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.setName("r_olecranon_pt")
HAnimSite278.setDEF("hanim_r_olecranon_pt")
HAnimSite278.setTranslation([-0.1907,1.1405,-0.1065])

HAnimSegment276.addChildren(HAnimSite278)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.setName("r_humeral_medial_epicn_pt")
HAnimSite279.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite279.setTranslation([-0.168,1.1298,-0.1062])

HAnimSegment276.addChildren(HAnimSite279)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.setName("r_radiale_pt")
HAnimSite280.setDEF("hanim_r_radiale_pt")
HAnimSite280.setTranslation([-0.213,1.1305,-0.1091])

HAnimSegment276.addChildren(HAnimSite280)

HAnimJoint275.addChildren(HAnimSegment276)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setName("r_wrist")
HAnimJoint281.setDEF("hanim_r_wrist")
HAnimJoint281.setCenter([-0.1984,0.8663,-0.0583])
HAnimSegment282 = x3d.HAnimSegment()
HAnimSegment282.setName("r_hand")
HAnimSegment282.setDEF("hanim_r_hand")
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.setName("r_metacarpal_pha2_pt")
HAnimSite283.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite283.setTranslation([-0.1977,0.8169,-0.0177])

HAnimSegment282.addChildren(HAnimSite283)
HAnimSite284 = x3d.HAnimSite()
HAnimSite284.setName("r_ulnar_styloid_pt")
HAnimSite284.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite284.setTranslation([-0.2117,0.8562,-0.0584])

HAnimSegment282.addChildren(HAnimSite284)
HAnimSite285 = x3d.HAnimSite()
HAnimSite285.setName("r_metacarpal_pha5_pt")
HAnimSite285.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite285.setTranslation([-0.1929,0.789,-0.1064])

HAnimSegment282.addChildren(HAnimSite285)
HAnimSite286 = x3d.HAnimSite()
HAnimSite286.setName("r_hand_front_view")
HAnimSite286.setDEF("hanim_r_hand_front_view")
HAnimSite286.setTranslation([-0.3,0.75,0.45])
Viewpoint287 = x3d.Viewpoint()
Viewpoint287.setDEF("hanim_r_hand_front_viewpoint")
Viewpoint287.setCenterOfRotation([0,0.7,0])
Viewpoint287.setDescription("right hand front")
Viewpoint287.setPosition([0,0,0])

HAnimSite286.addChildren(Viewpoint287)

HAnimSegment282.addChildren(HAnimSite286)

HAnimJoint281.addChildren(HAnimSegment282)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setName("r_thumb1")
HAnimJoint288.setDEF("hanim_r_thumb1")
HAnimJoint288.setCenter([-0.1924,0.8472,-0.0534])
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.setName("r_thumb_metacarpal")
HAnimSegment289.setDEF("hanim_r_thumb_metacarpal")

HAnimJoint288.addChildren(HAnimSegment289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setName("r_thumb2")
HAnimJoint290.setDEF("hanim_r_thumb2")
HAnimJoint290.setCenter([-0.1951,0.8226,0.0246])
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.setName("r_thumb_proximal")
HAnimSegment291.setDEF("hanim_r_thumb_proximal")

HAnimJoint290.addChildren(HAnimSegment291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setName("r_thumb3")
HAnimJoint292.setDEF("hanim_r_thumb3")
HAnimJoint292.setCenter([-0.1955,0.8159,0.0464])
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.setName("r_thumb_distal")
HAnimSegment293.setDEF("hanim_r_thumb_distal")
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.setName("r_thumb_distal_tip")
HAnimSite294.setDEF("hanim_r_thumb_distal_tip")
HAnimSite294.setTranslation([-0.1869,0.809,0.082])

HAnimSegment293.addChildren(HAnimSite294)

HAnimJoint292.addChildren(HAnimSegment293)

HAnimJoint290.addChildren(HAnimJoint292)

HAnimJoint288.addChildren(HAnimJoint290)

HAnimJoint281.addChildren(HAnimJoint288)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setName("r_index0")
HAnimJoint295.setDEF("hanim_r_index0")
HAnimJoint295.setCenter([-0.1983,0.8024,-0.028])
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setName("r_index_metacarpal")
HAnimSegment296.setDEF("hanim_r_index_metacarpal")

HAnimJoint295.addChildren(HAnimSegment296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setName("r_index1")
HAnimJoint297.setDEF("hanim_r_index1")
HAnimJoint297.setCenter([-0.1983,0.7815,-0.028])
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setName("r_index_proximal")
HAnimSegment298.setDEF("hanim_r_index_proximal")

HAnimJoint297.addChildren(HAnimSegment298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setName("r_index2")
HAnimJoint299.setDEF("hanim_r_index2")
HAnimJoint299.setCenter([-0.2017,0.7363,-0.0248])
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setName("r_index_middle")
HAnimSegment300.setDEF("hanim_r_index_middle")

HAnimJoint299.addChildren(HAnimSegment300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setName("r_index3")
HAnimJoint301.setDEF("hanim_r_index3")
HAnimJoint301.setCenter([-0.2028,0.7139,-0.0236])
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setName("r_index_distal")
HAnimSegment302.setDEF("hanim_r_index_distal")
HAnimSite303 = x3d.HAnimSite()
HAnimSite303.setName("r_index_distal_tip")
HAnimSite303.setDEF("hanim_r_index_distal_tip")
HAnimSite303.setTranslation([-0.198,0.6883,-0.018])

HAnimSegment302.addChildren(HAnimSite303)
HAnimSite304 = x3d.HAnimSite()
HAnimSite304.setName("r_dactylion_pt")
HAnimSite304.setDEF("hanim_r_dactylion_pt")
HAnimSite304.setTranslation([-0.1941,0.6772,-0.0423])

HAnimSegment302.addChildren(HAnimSite304)

HAnimJoint301.addChildren(HAnimSegment302)

HAnimJoint299.addChildren(HAnimJoint301)

HAnimJoint297.addChildren(HAnimJoint299)

HAnimJoint295.addChildren(HAnimJoint297)

HAnimJoint281.addChildren(HAnimJoint295)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setName("r_middle0")
HAnimJoint305.setDEF("hanim_r_middle0")
HAnimJoint305.setCenter([-0.1987,0.8029,-0.053])
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setName("r_middle_metacarpal")
HAnimSegment306.setDEF("hanim_r_middle_metacarpal")

HAnimJoint305.addChildren(HAnimSegment306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.setName("r_middle1")
HAnimJoint307.setDEF("hanim_r_middle1")
HAnimJoint307.setCenter([-0.1987,0.7818,-0.053])
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setName("r_middle_proximal")
HAnimSegment308.setDEF("hanim_r_middle_proximal")

HAnimJoint307.addChildren(HAnimSegment308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.setName("r_middle2")
HAnimJoint309.setDEF("hanim_r_middle2")
HAnimJoint309.setCenter([-0.2013,0.7273,-0.0503])
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.setName("r_middle_middle")
HAnimSegment310.setDEF("hanim_r_middle_middle")

HAnimJoint309.addChildren(HAnimSegment310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.setName("r_middle3")
HAnimJoint311.setDEF("hanim_r_middle3")
HAnimJoint311.setCenter([-0.2026,0.7011,-0.0494])
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setName("r_middle_distal")
HAnimSegment312.setDEF("hanim_r_middle_distal")
HAnimSite313 = x3d.HAnimSite()
HAnimSite313.setName("r_middle_distal_tip")
HAnimSite313.setDEF("hanim_r_middle_distal_tip")
HAnimSite313.setTranslation([-0.1969,0.6758,-0.0427])

HAnimSegment312.addChildren(HAnimSite313)

HAnimJoint311.addChildren(HAnimSegment312)

HAnimJoint309.addChildren(HAnimJoint311)

HAnimJoint307.addChildren(HAnimJoint309)

HAnimJoint305.addChildren(HAnimJoint307)

HAnimJoint281.addChildren(HAnimJoint305)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.setName("r_ring0")
HAnimJoint314.setDEF("hanim_r_ring0")
HAnimJoint314.setCenter([-0.1956,0.8019,-0.0794])
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setName("r_ring_metacarpal")
HAnimSegment315.setDEF("hanim_r_ring_metacarpal")

HAnimJoint314.addChildren(HAnimSegment315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.setName("r_ring1")
HAnimJoint316.setDEF("hanim_r_ring1")
HAnimJoint316.setCenter([-0.1956,0.7815,-0.0794])
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setName("r_ring_proximal")
HAnimSegment317.setDEF("hanim_r_ring_proximal")

HAnimJoint316.addChildren(HAnimSegment317)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.setName("r_ring2")
HAnimJoint318.setDEF("hanim_r_ring2")
HAnimJoint318.setCenter([-0.1973,0.7287,-0.0777])
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setName("r_ring_middle")
HAnimSegment319.setDEF("hanim_r_ring_middle")

HAnimJoint318.addChildren(HAnimSegment319)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.setName("r_ring3")
HAnimJoint320.setDEF("hanim_r_ring3")
HAnimJoint320.setCenter([-0.1983,0.7045,-0.0767])
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.setName("r_ring_distal")
HAnimSegment321.setDEF("hanim_r_ring_distal")
HAnimSite322 = x3d.HAnimSite()
HAnimSite322.setName("r_ring_distal_tip")
HAnimSite322.setDEF("hanim_r_ring_distal_tip")
HAnimSite322.setTranslation([-0.1934,0.6778,-0.0693])

HAnimSegment321.addChildren(HAnimSite322)

HAnimJoint320.addChildren(HAnimSegment321)

HAnimJoint318.addChildren(HAnimJoint320)

HAnimJoint316.addChildren(HAnimJoint318)

HAnimJoint314.addChildren(HAnimJoint316)

HAnimJoint281.addChildren(HAnimJoint314)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.setName("r_pinky0")
HAnimJoint323.setDEF("hanim_r_pinky0")
HAnimJoint323.setCenter([-0.1925,0.8066,-0.1036])
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.setName("r_pinky_metacarpal")
HAnimSegment324.setDEF("hanim_r_pinky_metacarpal")

HAnimJoint323.addChildren(HAnimSegment324)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.setName("r_pinky1")
HAnimJoint325.setDEF("hanim_r_pinky1")
HAnimJoint325.setCenter([-0.1925,0.7866,-0.1036])
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.setName("r_pinky_proximal")
HAnimSegment326.setDEF("hanim_r_pinky_proximal")

HAnimJoint325.addChildren(HAnimSegment326)
HAnimJoint327 = x3d.HAnimJoint()
HAnimJoint327.setName("r_pinky2")
HAnimJoint327.setDEF("hanim_r_pinky2")
HAnimJoint327.setCenter([-0.1938,0.7452,-0.1024])
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.setName("r_pinky_middle")
HAnimSegment328.setDEF("hanim_r_pinky_middle")

HAnimJoint327.addChildren(HAnimSegment328)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.setName("r_pinky3")
HAnimJoint329.setDEF("hanim_r_pinky3")
HAnimJoint329.setCenter([-0.1948,0.7277,-0.1017])
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.setName("r_pinky_distal")
HAnimSegment330.setDEF("hanim_r_pinky_distal")
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("r_pinky_distal_tip")
HAnimSite331.setDEF("hanim_r_pinky_distal_tip")
HAnimSite331.setTranslation([-0.1938,0.7035,-0.0949])

HAnimSegment330.addChildren(HAnimSite331)

HAnimJoint329.addChildren(HAnimSegment330)

HAnimJoint327.addChildren(HAnimJoint329)

HAnimJoint325.addChildren(HAnimJoint327)

HAnimJoint323.addChildren(HAnimJoint325)

HAnimJoint281.addChildren(HAnimJoint323)

HAnimJoint275.addChildren(HAnimJoint281)

HAnimJoint272.addChildren(HAnimJoint275)

HAnimJoint270.addChildren(HAnimJoint272)

HAnimJoint264.addChildren(HAnimJoint270)

HAnimJoint144.addChildren(HAnimJoint264)

HAnimJoint142.addChildren(HAnimJoint144)

HAnimJoint140.addChildren(HAnimJoint142)

HAnimJoint138.addChildren(HAnimJoint140)

HAnimJoint136.addChildren(HAnimJoint138)

HAnimJoint134.addChildren(HAnimJoint136)

HAnimJoint132.addChildren(HAnimJoint134)

HAnimJoint130.addChildren(HAnimJoint132)

HAnimJoint126.addChildren(HAnimJoint130)

HAnimJoint123.addChildren(HAnimJoint126)

HAnimJoint121.addChildren(HAnimJoint123)

HAnimJoint119.addChildren(HAnimJoint121)

HAnimJoint117.addChildren(HAnimJoint119)

HAnimJoint112.addChildren(HAnimJoint117)

HAnimJoint110.addChildren(HAnimJoint112)

HAnimJoint108.addChildren(HAnimJoint110)

HAnimJoint104.addChildren(HAnimJoint108)

HAnimJoint45.addChildren(HAnimJoint104)

HAnimHumanoid44.setSkeleton(HAnimJoint45)
HAnimSite332 = x3d.HAnimSite()
HAnimSite332.setName("l_inclined_view")
HAnimSite332.setDEF("hanim_l_inclined_view")
HAnimSite332.setRotation([-0.113,0.993,0.0347,0.671])
HAnimSite332.setTranslation([1.62,1.05,2.06])
Viewpoint333 = x3d.Viewpoint()
Viewpoint333.setDEF("hanim_l_inclined_viewpoint")
Viewpoint333.setDescription("left inclined")
Viewpoint333.setPosition([0,0,0])

HAnimSite332.addChildren(Viewpoint333)

HAnimHumanoid44.addViewpoints(HAnimSite332)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.setName("r_inclined_view")
HAnimSite334.setDEF("hanim_r_inclined_view")
HAnimSite334.setRotation([-0.113,-0.993,0.0347,0.671])
HAnimSite334.setTranslation([-1.62,1.05,2.06])
Viewpoint335 = x3d.Viewpoint()
Viewpoint335.setDEF("hanim_r_inclined_viewpoint")
Viewpoint335.setCenterOfRotation([0,0.9,0])
Viewpoint335.setDescription("right inclined")
Viewpoint335.setPosition([0,0,0])

HAnimSite334.addChildren(Viewpoint335)

HAnimHumanoid44.addViewpoints(HAnimSite334)
HAnimSite336 = x3d.HAnimSite()
HAnimSite336.setName("front_view")
HAnimSite336.setDEF("hanim_front_view")
HAnimSite336.setTranslation([0,0.85,2.58])
Viewpoint337 = x3d.Viewpoint()
Viewpoint337.setDEF("hanim_front_viewpoint")
Viewpoint337.setCenterOfRotation([0,0.9,0])
Viewpoint337.setDescription("front")
Viewpoint337.setPosition([0,0,0])

HAnimSite336.addChildren(Viewpoint337)

HAnimHumanoid44.addViewpoints(HAnimSite336)
HAnimSite338 = x3d.HAnimSite()
HAnimSite338.setName("back_view")
HAnimSite338.setDEF("hanim_back_view")
HAnimSite338.setRotation([0,1,0,3.14])
HAnimSite338.setTranslation([0,0.85,-2.58])
Viewpoint339 = x3d.Viewpoint()
Viewpoint339.setDEF("hanim_back_viewpoint")
Viewpoint339.setCenterOfRotation([0,0.9,0])
Viewpoint339.setDescription("back")
Viewpoint339.setPosition([0,0,0])

HAnimSite338.addChildren(Viewpoint339)

HAnimHumanoid44.addViewpoints(HAnimSite338)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.setName("l_side_view")
HAnimSite340.setDEF("hanim_l_side_view")
HAnimSite340.setRotation([0,1,0,1.5708])
HAnimSite340.setTranslation([2.6,0.854,0])
Viewpoint341 = x3d.Viewpoint()
Viewpoint341.setDEF("hanim_l_side_viewpoint")
Viewpoint341.setCenterOfRotation([0,0.9,0])
Viewpoint341.setDescription("left side")
Viewpoint341.setPosition([0,0,0])

HAnimSite340.addChildren(Viewpoint341)

HAnimHumanoid44.addViewpoints(HAnimSite340)
HAnimSite342 = x3d.HAnimSite()
HAnimSite342.setName("Top_view")
HAnimSite342.setDEF("hanim_Top_view")
HAnimSite342.setRotation([1,0,0,-1.57])
HAnimSite342.setTranslation([0,3.5,0])
Viewpoint343 = x3d.Viewpoint()
Viewpoint343.setDEF("hanim_Top_viewpoint")
Viewpoint343.setCenterOfRotation([0,0.9,0])
Viewpoint343.setDescription("Top")
Viewpoint343.setPosition([0,0,0])

HAnimSite342.addChildren(Viewpoint343)

HAnimHumanoid44.addViewpoints(HAnimSite342)
HAnimSite344 = x3d.HAnimSite()
HAnimSite344.setName("front_close_view")
HAnimSite344.setDEF("hanim_front_close_view")
HAnimSite344.setTranslation([0,0.854,1.575])
Viewpoint345 = x3d.Viewpoint()
Viewpoint345.setDEF("hanim_front_close_viewpoint")
Viewpoint345.setCenterOfRotation([0,0,1.575])
Viewpoint345.setDescription("front close")
Viewpoint345.setPosition([0,0,0])

HAnimSite344.addChildren(Viewpoint345)

HAnimHumanoid44.addViewpoints(HAnimSite344)
HAnimSite346 = x3d.HAnimSite()
HAnimSite346.setName("side_close_view")
HAnimSite346.setDEF("hanim_side_close_view")
HAnimSite346.setRotation([0,1,0,1.5708])
HAnimSite346.setTranslation([1.56,0.854,0])
Viewpoint347 = x3d.Viewpoint()
Viewpoint347.setDEF("hanim_side_close_viewpoint")
Viewpoint347.setCenterOfRotation([1.6,0,0])
Viewpoint347.setDescription("side close")
Viewpoint347.setPosition([0,0,0])

HAnimSite346.addChildren(Viewpoint347)

HAnimHumanoid44.addViewpoints(HAnimSite346)
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.setName("head_front_close_view")
HAnimSite348.setDEF("hanim_head_front_close_view")
HAnimSite348.setTranslation([0,1.5,1])
Viewpoint349 = x3d.Viewpoint()
Viewpoint349.setDEF("hanim_head_front_close_viewpoint")
Viewpoint349.setCenterOfRotation([0,0,1])
Viewpoint349.setDescription("head front close")
Viewpoint349.setPosition([0,0,0])

HAnimSite348.addChildren(Viewpoint349)

HAnimHumanoid44.addViewpoints(HAnimSite348)
HAnimSite350 = x3d.HAnimSite()
HAnimSite350.setName("chest_front_close_view")
HAnimSite350.setDEF("hanim_chest_front_close_view")
HAnimSite350.setTranslation([0,1.2,1])
Viewpoint351 = x3d.Viewpoint()
Viewpoint351.setDEF("hanim_chest_front_close_viewpoint")
Viewpoint351.setCenterOfRotation([0,0,1])
Viewpoint351.setDescription("chest front close")
Viewpoint351.setPosition([0,0,0])

HAnimSite350.addChildren(Viewpoint351)

HAnimHumanoid44.addViewpoints(HAnimSite350)
HAnimSite352 = x3d.HAnimSite()
HAnimSite352.setName("pelvis_front_close_view")
HAnimSite352.setDEF("hanim_pelvis_front_close_view")
HAnimSite352.setTranslation([0,0.8,1])
Viewpoint353 = x3d.Viewpoint()
Viewpoint353.setDEF("hanim_pelvis_front_close_viewpoint")
Viewpoint353.setCenterOfRotation([0,0,1])
Viewpoint353.setDescription("pelvis front close")
Viewpoint353.setPosition([0,0,0])

HAnimSite352.addChildren(Viewpoint353)

HAnimHumanoid44.addViewpoints(HAnimSite352)
HAnimSite354 = x3d.HAnimSite()
HAnimSite354.setName("knees_front_close_view")
HAnimSite354.setDEF("hanim_knees_front_close_view")
HAnimSite354.setTranslation([0,0.4,1])
Viewpoint355 = x3d.Viewpoint()
Viewpoint355.setDEF("hanim_knees_front_close_viewpoint")
Viewpoint355.setCenterOfRotation([0,0.4,0])
Viewpoint355.setDescription("knees front close")
Viewpoint355.setPosition([0,0,0])

HAnimSite354.addChildren(Viewpoint355)

HAnimHumanoid44.addViewpoints(HAnimSite354)
HAnimSite356 = x3d.HAnimSite()
HAnimSite356.setName("feet_front_close_view")
HAnimSite356.setDEF("hanim_feet_front_close_view")
HAnimSite356.setTranslation([0,0,1])
Viewpoint357 = x3d.Viewpoint()
Viewpoint357.setDEF("hanim_feet_front_close_viewpoint")
Viewpoint357.setDescription("feet front close")
Viewpoint357.setPosition([0,0,0])

HAnimSite356.addChildren(Viewpoint357)

HAnimHumanoid44.addViewpoints(HAnimSite356)
HAnimSite358 = x3d.HAnimSite()
HAnimSite358.setName("eye_level_view")
HAnimSite358.setDEF("hanim_eye_level_view")
HAnimSite358.setTranslation([0,1.6332,0.0502])
Viewpoint359 = x3d.Viewpoint()
Viewpoint359.setDEF("hanim_eye_level_viewpoint")
Viewpoint359.setDescription("eye level looking forward")
Viewpoint359.setOrientation([0,1,0,3.141593])
Viewpoint359.setPosition([0,0,0])

HAnimSite358.addChildren(Viewpoint359)

HAnimHumanoid44.addViewpoints(HAnimSite358)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.setUSE("hanim_l_eyeball_site_view")

HAnimHumanoid44.addSites(HAnimSite360)
HAnimSite361 = x3d.HAnimSite()
HAnimSite361.setUSE("hanim_r_eyeball_site_view")

HAnimHumanoid44.addSites(HAnimSite361)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setUSE("hanim_l_hand_front_view")

HAnimHumanoid44.addSites(HAnimSite362)
HAnimSite363 = x3d.HAnimSite()
HAnimSite363.setUSE("hanim_r_hand_front_view")

HAnimHumanoid44.addSites(HAnimSite363)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.setUSE("hanim_humanoid_root")

HAnimHumanoid44.addJoints(HAnimJoint364)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.setUSE("hanim_sacroiliac")

HAnimHumanoid44.addJoints(HAnimJoint365)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.setUSE("hanim_vl5")

HAnimHumanoid44.addJoints(HAnimJoint366)
HAnimJoint367 = x3d.HAnimJoint()
HAnimJoint367.setUSE("hanim_vl4")

HAnimHumanoid44.addJoints(HAnimJoint367)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.setUSE("hanim_vl3")

HAnimHumanoid44.addJoints(HAnimJoint368)
HAnimJoint369 = x3d.HAnimJoint()
HAnimJoint369.setUSE("hanim_vl2")

HAnimHumanoid44.addJoints(HAnimJoint369)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.setUSE("hanim_vl1")

HAnimHumanoid44.addJoints(HAnimJoint370)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.setUSE("hanim_vt12")

HAnimHumanoid44.addJoints(HAnimJoint371)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setUSE("hanim_vt11")

HAnimHumanoid44.addJoints(HAnimJoint372)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.setUSE("hanim_vt10")

HAnimHumanoid44.addJoints(HAnimJoint373)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.setUSE("hanim_vt9")

HAnimHumanoid44.addJoints(HAnimJoint374)
HAnimJoint375 = x3d.HAnimJoint()
HAnimJoint375.setUSE("hanim_vt8")

HAnimHumanoid44.addJoints(HAnimJoint375)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.setUSE("hanim_vt7")

HAnimHumanoid44.addJoints(HAnimJoint376)
HAnimJoint377 = x3d.HAnimJoint()
HAnimJoint377.setUSE("hanim_vt6")

HAnimHumanoid44.addJoints(HAnimJoint377)
HAnimJoint378 = x3d.HAnimJoint()
HAnimJoint378.setUSE("hanim_vt5")

HAnimHumanoid44.addJoints(HAnimJoint378)
HAnimJoint379 = x3d.HAnimJoint()
HAnimJoint379.setUSE("hanim_vt4")

HAnimHumanoid44.addJoints(HAnimJoint379)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.setUSE("hanim_vt3")

HAnimHumanoid44.addJoints(HAnimJoint380)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.setUSE("hanim_vt2")

HAnimHumanoid44.addJoints(HAnimJoint381)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.setUSE("hanim_vt1")

HAnimHumanoid44.addJoints(HAnimJoint382)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.setUSE("hanim_vc7")

HAnimHumanoid44.addJoints(HAnimJoint383)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.setUSE("hanim_vc6")

HAnimHumanoid44.addJoints(HAnimJoint384)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setUSE("hanim_vc5")

HAnimHumanoid44.addJoints(HAnimJoint385)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.setUSE("hanim_vc4")

HAnimHumanoid44.addJoints(HAnimJoint386)
HAnimJoint387 = x3d.HAnimJoint()
HAnimJoint387.setUSE("hanim_vc3")

HAnimHumanoid44.addJoints(HAnimJoint387)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.setUSE("hanim_vc2")

HAnimHumanoid44.addJoints(HAnimJoint388)
HAnimJoint389 = x3d.HAnimJoint()
HAnimJoint389.setUSE("hanim_vc1")

HAnimHumanoid44.addJoints(HAnimJoint389)
HAnimJoint390 = x3d.HAnimJoint()
HAnimJoint390.setUSE("hanim_skullbase")

HAnimHumanoid44.addJoints(HAnimJoint390)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.setUSE("hanim_temporomandibular")

HAnimHumanoid44.addJoints(HAnimJoint391)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid44.addJoints(HAnimJoint392)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid44.addJoints(HAnimJoint393)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setUSE("hanim_l_ankle")

HAnimHumanoid44.addJoints(HAnimJoint394)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setUSE("hanim_r_ankle")

HAnimHumanoid44.addJoints(HAnimJoint395)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.setUSE("hanim_l_elbow")

HAnimHumanoid44.addJoints(HAnimJoint396)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.setUSE("hanim_r_elbow")

HAnimHumanoid44.addJoints(HAnimJoint397)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid44.addJoints(HAnimJoint398)
HAnimJoint399 = x3d.HAnimJoint()
HAnimJoint399.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid44.addJoints(HAnimJoint399)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid44.addJoints(HAnimJoint400)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid44.addJoints(HAnimJoint401)
HAnimJoint402 = x3d.HAnimJoint()
HAnimJoint402.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid44.addJoints(HAnimJoint402)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid44.addJoints(HAnimJoint403)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.setUSE("hanim_l_hip")

HAnimHumanoid44.addJoints(HAnimJoint404)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.setUSE("hanim_r_hip")

HAnimHumanoid44.addJoints(HAnimJoint405)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setUSE("hanim_l_index0")

HAnimHumanoid44.addJoints(HAnimJoint406)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.setUSE("hanim_r_index0")

HAnimHumanoid44.addJoints(HAnimJoint407)
HAnimJoint408 = x3d.HAnimJoint()
HAnimJoint408.setUSE("hanim_l_index1")

HAnimHumanoid44.addJoints(HAnimJoint408)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setUSE("hanim_r_index1")

HAnimHumanoid44.addJoints(HAnimJoint409)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.setUSE("hanim_l_index2")

HAnimHumanoid44.addJoints(HAnimJoint410)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.setUSE("hanim_r_index2")

HAnimHumanoid44.addJoints(HAnimJoint411)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.setUSE("hanim_l_index3")

HAnimHumanoid44.addJoints(HAnimJoint412)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setUSE("hanim_r_index3")

HAnimHumanoid44.addJoints(HAnimJoint413)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.setUSE("hanim_l_knee")

HAnimHumanoid44.addJoints(HAnimJoint414)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.setUSE("hanim_r_knee")

HAnimHumanoid44.addJoints(HAnimJoint415)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.setUSE("hanim_l_metatarsal")

HAnimHumanoid44.addJoints(HAnimJoint416)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setUSE("hanim_r_metatarsal")

HAnimHumanoid44.addJoints(HAnimJoint417)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setUSE("hanim_l_middle0")

HAnimHumanoid44.addJoints(HAnimJoint418)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.setUSE("hanim_r_middle0")

HAnimHumanoid44.addJoints(HAnimJoint419)
HAnimJoint420 = x3d.HAnimJoint()
HAnimJoint420.setUSE("hanim_l_middle1")

HAnimHumanoid44.addJoints(HAnimJoint420)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setUSE("hanim_r_middle1")

HAnimHumanoid44.addJoints(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setUSE("hanim_l_middle2")

HAnimHumanoid44.addJoints(HAnimJoint422)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setUSE("hanim_r_middle2")

HAnimHumanoid44.addJoints(HAnimJoint423)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.setUSE("hanim_l_middle3")

HAnimHumanoid44.addJoints(HAnimJoint424)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setUSE("hanim_r_middle3")

HAnimHumanoid44.addJoints(HAnimJoint425)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.setUSE("hanim_l_midtarsal")

HAnimHumanoid44.addJoints(HAnimJoint426)
HAnimJoint427 = x3d.HAnimJoint()
HAnimJoint427.setUSE("hanim_r_midtarsal")

HAnimHumanoid44.addJoints(HAnimJoint427)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.setUSE("hanim_l_pinky0")

HAnimHumanoid44.addJoints(HAnimJoint428)
HAnimJoint429 = x3d.HAnimJoint()
HAnimJoint429.setUSE("hanim_r_pinky0")

HAnimHumanoid44.addJoints(HAnimJoint429)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setUSE("hanim_l_pinky1")

HAnimHumanoid44.addJoints(HAnimJoint430)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.setUSE("hanim_r_pinky1")

HAnimHumanoid44.addJoints(HAnimJoint431)
HAnimJoint432 = x3d.HAnimJoint()
HAnimJoint432.setUSE("hanim_l_pinky2")

HAnimHumanoid44.addJoints(HAnimJoint432)
HAnimJoint433 = x3d.HAnimJoint()
HAnimJoint433.setUSE("hanim_r_pinky2")

HAnimHumanoid44.addJoints(HAnimJoint433)
HAnimJoint434 = x3d.HAnimJoint()
HAnimJoint434.setUSE("hanim_l_pinky3")

HAnimHumanoid44.addJoints(HAnimJoint434)
HAnimJoint435 = x3d.HAnimJoint()
HAnimJoint435.setUSE("hanim_r_pinky3")

HAnimHumanoid44.addJoints(HAnimJoint435)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.setUSE("hanim_l_ring0")

HAnimHumanoid44.addJoints(HAnimJoint436)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setUSE("hanim_r_ring0")

HAnimHumanoid44.addJoints(HAnimJoint437)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setUSE("hanim_l_ring1")

HAnimHumanoid44.addJoints(HAnimJoint438)
HAnimJoint439 = x3d.HAnimJoint()
HAnimJoint439.setUSE("hanim_r_ring1")

HAnimHumanoid44.addJoints(HAnimJoint439)
HAnimJoint440 = x3d.HAnimJoint()
HAnimJoint440.setUSE("hanim_l_ring2")

HAnimHumanoid44.addJoints(HAnimJoint440)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.setUSE("hanim_r_ring2")

HAnimHumanoid44.addJoints(HAnimJoint441)
HAnimJoint442 = x3d.HAnimJoint()
HAnimJoint442.setUSE("hanim_l_ring3")

HAnimHumanoid44.addJoints(HAnimJoint442)
HAnimJoint443 = x3d.HAnimJoint()
HAnimJoint443.setUSE("hanim_r_ring3")

HAnimHumanoid44.addJoints(HAnimJoint443)
HAnimJoint444 = x3d.HAnimJoint()
HAnimJoint444.setUSE("hanim_l_shoulder")

HAnimHumanoid44.addJoints(HAnimJoint444)
HAnimJoint445 = x3d.HAnimJoint()
HAnimJoint445.setUSE("hanim_r_shoulder")

HAnimHumanoid44.addJoints(HAnimJoint445)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid44.addJoints(HAnimJoint446)
HAnimJoint447 = x3d.HAnimJoint()
HAnimJoint447.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid44.addJoints(HAnimJoint447)
HAnimJoint448 = x3d.HAnimJoint()
HAnimJoint448.setUSE("hanim_l_subtalar")

HAnimHumanoid44.addJoints(HAnimJoint448)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.setUSE("hanim_r_subtalar")

HAnimHumanoid44.addJoints(HAnimJoint449)
HAnimJoint450 = x3d.HAnimJoint()
HAnimJoint450.setUSE("hanim_l_thumb1")

HAnimHumanoid44.addJoints(HAnimJoint450)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.setUSE("hanim_r_thumb1")

HAnimHumanoid44.addJoints(HAnimJoint451)
HAnimJoint452 = x3d.HAnimJoint()
HAnimJoint452.setUSE("hanim_l_thumb2")

HAnimHumanoid44.addJoints(HAnimJoint452)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.setUSE("hanim_r_thumb2")

HAnimHumanoid44.addJoints(HAnimJoint453)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setUSE("hanim_l_thumb3")

HAnimHumanoid44.addJoints(HAnimJoint454)
HAnimJoint455 = x3d.HAnimJoint()
HAnimJoint455.setUSE("hanim_r_thumb3")

HAnimHumanoid44.addJoints(HAnimJoint455)
HAnimJoint456 = x3d.HAnimJoint()
HAnimJoint456.setUSE("hanim_l_wrist")

HAnimHumanoid44.addJoints(HAnimJoint456)
HAnimJoint457 = x3d.HAnimJoint()
HAnimJoint457.setUSE("hanim_r_wrist")

HAnimHumanoid44.addJoints(HAnimJoint457)
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.setUSE("hanim_pelvis")

HAnimHumanoid44.addSegments(HAnimSegment458)
HAnimSegment459 = x3d.HAnimSegment()
HAnimSegment459.setUSE("hanim_skull")

HAnimHumanoid44.addSegments(HAnimSegment459)
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.setUSE("hanim_jaw")

HAnimHumanoid44.addSegments(HAnimSegment460)
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.setUSE("hanim_c1")

HAnimHumanoid44.addSegments(HAnimSegment461)
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.setUSE("hanim_c2")

HAnimHumanoid44.addSegments(HAnimSegment462)
HAnimSegment463 = x3d.HAnimSegment()
HAnimSegment463.setUSE("hanim_c3")

HAnimHumanoid44.addSegments(HAnimSegment463)
HAnimSegment464 = x3d.HAnimSegment()
HAnimSegment464.setUSE("hanim_c4")

HAnimHumanoid44.addSegments(HAnimSegment464)
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.setUSE("hanim_c5")

HAnimHumanoid44.addSegments(HAnimSegment465)
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setUSE("hanim_c6")

HAnimHumanoid44.addSegments(HAnimSegment466)
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.setUSE("hanim_c7")

HAnimHumanoid44.addSegments(HAnimSegment467)
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.setUSE("hanim_t1")

HAnimHumanoid44.addSegments(HAnimSegment468)
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.setUSE("hanim_t2")

HAnimHumanoid44.addSegments(HAnimSegment469)
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.setUSE("hanim_t3")

HAnimHumanoid44.addSegments(HAnimSegment470)
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setUSE("hanim_t4")

HAnimHumanoid44.addSegments(HAnimSegment471)
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.setUSE("hanim_t5")

HAnimHumanoid44.addSegments(HAnimSegment472)
HAnimSegment473 = x3d.HAnimSegment()
HAnimSegment473.setUSE("hanim_t6")

HAnimHumanoid44.addSegments(HAnimSegment473)
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setUSE("hanim_t7")

HAnimHumanoid44.addSegments(HAnimSegment474)
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.setUSE("hanim_t8")

HAnimHumanoid44.addSegments(HAnimSegment475)
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.setUSE("hanim_t9")

HAnimHumanoid44.addSegments(HAnimSegment476)
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.setUSE("hanim_t10")

HAnimHumanoid44.addSegments(HAnimSegment477)
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.setUSE("hanim_t11")

HAnimHumanoid44.addSegments(HAnimSegment478)
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setUSE("hanim_t12")

HAnimHumanoid44.addSegments(HAnimSegment479)
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.setUSE("hanim_l1")

HAnimHumanoid44.addSegments(HAnimSegment480)
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.setUSE("hanim_l2")

HAnimHumanoid44.addSegments(HAnimSegment481)
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.setUSE("hanim_l3")

HAnimHumanoid44.addSegments(HAnimSegment482)
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.setUSE("hanim_l4")

HAnimHumanoid44.addSegments(HAnimSegment483)
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.setUSE("hanim_l5")

HAnimHumanoid44.addSegments(HAnimSegment484)
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.setUSE("hanim_sacrum")

HAnimHumanoid44.addSegments(HAnimSegment485)
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setUSE("hanim_l_calf")

HAnimHumanoid44.addSegments(HAnimSegment486)
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.setUSE("hanim_r_calf")

HAnimHumanoid44.addSegments(HAnimSegment487)
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.setUSE("hanim_l_clavicle")

HAnimHumanoid44.addSegments(HAnimSegment488)
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.setUSE("hanim_r_clavicle")

HAnimHumanoid44.addSegments(HAnimSegment489)
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setUSE("hanim_l_eyeball")

HAnimHumanoid44.addSegments(HAnimSegment490)
HAnimSegment491 = x3d.HAnimSegment()
HAnimSegment491.setUSE("hanim_r_eyeball")

HAnimHumanoid44.addSegments(HAnimSegment491)
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.setUSE("hanim_l_eyebrow")

HAnimHumanoid44.addSegments(HAnimSegment492)
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.setUSE("hanim_r_eyebrow")

HAnimHumanoid44.addSegments(HAnimSegment493)
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.setUSE("hanim_l_eyelid")

HAnimHumanoid44.addSegments(HAnimSegment494)
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.setUSE("hanim_r_eyelid")

HAnimHumanoid44.addSegments(HAnimSegment495)
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.setUSE("hanim_l_forearm")

HAnimHumanoid44.addSegments(HAnimSegment496)
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.setUSE("hanim_r_forearm")

HAnimHumanoid44.addSegments(HAnimSegment497)
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.setUSE("hanim_l_forefoot")

HAnimHumanoid44.addSegments(HAnimSegment498)
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setUSE("hanim_r_forefoot")

HAnimHumanoid44.addSegments(HAnimSegment499)
HAnimSegment500 = x3d.HAnimSegment()
HAnimSegment500.setUSE("hanim_l_hand")

HAnimHumanoid44.addSegments(HAnimSegment500)
HAnimSegment501 = x3d.HAnimSegment()
HAnimSegment501.setUSE("hanim_r_hand")

HAnimHumanoid44.addSegments(HAnimSegment501)
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.setUSE("hanim_l_hindfoot")

HAnimHumanoid44.addSegments(HAnimSegment502)
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setUSE("hanim_r_hindfoot")

HAnimHumanoid44.addSegments(HAnimSegment503)
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.setUSE("hanim_l_index_distal")

HAnimHumanoid44.addSegments(HAnimSegment504)
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.setUSE("hanim_r_index_distal")

HAnimHumanoid44.addSegments(HAnimSegment505)
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment506)
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.setUSE("hanim_r_index_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment507)
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.setUSE("hanim_l_index_middle")

HAnimHumanoid44.addSegments(HAnimSegment508)
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.setUSE("hanim_r_index_middle")

HAnimHumanoid44.addSegments(HAnimSegment509)
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.setUSE("hanim_l_index_proximal")

HAnimHumanoid44.addSegments(HAnimSegment510)
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.setUSE("hanim_r_index_proximal")

HAnimHumanoid44.addSegments(HAnimSegment511)
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.setUSE("hanim_l_middistal")

HAnimHumanoid44.addSegments(HAnimSegment512)
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.setUSE("hanim_r_middistal")

HAnimHumanoid44.addSegments(HAnimSegment513)
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setUSE("hanim_l_middle_distal")

HAnimHumanoid44.addSegments(HAnimSegment514)
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.setUSE("hanim_r_middle_distal")

HAnimHumanoid44.addSegments(HAnimSegment515)
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.setUSE("hanim_l_middle_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment516)
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.setUSE("hanim_r_middle_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment517)
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.setUSE("hanim_l_middle_middle")

HAnimHumanoid44.addSegments(HAnimSegment518)
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.setUSE("hanim_r_middle_middle")

HAnimHumanoid44.addSegments(HAnimSegment519)
HAnimSegment520 = x3d.HAnimSegment()
HAnimSegment520.setUSE("hanim_l_middle_proximal")

HAnimHumanoid44.addSegments(HAnimSegment520)
HAnimSegment521 = x3d.HAnimSegment()
HAnimSegment521.setUSE("hanim_r_middle_proximal")

HAnimHumanoid44.addSegments(HAnimSegment521)
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.setUSE("hanim_l_midproximal")

HAnimHumanoid44.addSegments(HAnimSegment522)
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setUSE("hanim_r_midproximal")

HAnimHumanoid44.addSegments(HAnimSegment523)
HAnimSegment524 = x3d.HAnimSegment()
HAnimSegment524.setUSE("hanim_l_pinky_distal")

HAnimHumanoid44.addSegments(HAnimSegment524)
HAnimSegment525 = x3d.HAnimSegment()
HAnimSegment525.setUSE("hanim_r_pinky_distal")

HAnimHumanoid44.addSegments(HAnimSegment525)
HAnimSegment526 = x3d.HAnimSegment()
HAnimSegment526.setUSE("hanim_l_pinky_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment526)
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.setUSE("hanim_r_pinky_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment527)
HAnimSegment528 = x3d.HAnimSegment()
HAnimSegment528.setUSE("hanim_l_pinky_middle")

HAnimHumanoid44.addSegments(HAnimSegment528)
HAnimSegment529 = x3d.HAnimSegment()
HAnimSegment529.setUSE("hanim_r_pinky_middle")

HAnimHumanoid44.addSegments(HAnimSegment529)
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setUSE("hanim_l_pinky_proximal")

HAnimHumanoid44.addSegments(HAnimSegment530)
HAnimSegment531 = x3d.HAnimSegment()
HAnimSegment531.setUSE("hanim_r_pinky_proximal")

HAnimHumanoid44.addSegments(HAnimSegment531)
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.setUSE("hanim_l_ring_distal")

HAnimHumanoid44.addSegments(HAnimSegment532)
HAnimSegment533 = x3d.HAnimSegment()
HAnimSegment533.setUSE("hanim_r_ring_distal")

HAnimHumanoid44.addSegments(HAnimSegment533)
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setUSE("hanim_l_ring_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment534)
HAnimSegment535 = x3d.HAnimSegment()
HAnimSegment535.setUSE("hanim_r_ring_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment535)
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setUSE("hanim_l_ring_middle")

HAnimHumanoid44.addSegments(HAnimSegment536)
HAnimSegment537 = x3d.HAnimSegment()
HAnimSegment537.setUSE("hanim_r_ring_middle")

HAnimHumanoid44.addSegments(HAnimSegment537)
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setUSE("hanim_l_ring_proximal")

HAnimHumanoid44.addSegments(HAnimSegment538)
HAnimSegment539 = x3d.HAnimSegment()
HAnimSegment539.setUSE("hanim_r_ring_proximal")

HAnimHumanoid44.addSegments(HAnimSegment539)
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.setUSE("hanim_l_scapula")

HAnimHumanoid44.addSegments(HAnimSegment540)
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setUSE("hanim_r_scapula")

HAnimHumanoid44.addSegments(HAnimSegment541)
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.setUSE("hanim_l_thigh")

HAnimHumanoid44.addSegments(HAnimSegment542)
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setUSE("hanim_r_thigh")

HAnimHumanoid44.addSegments(HAnimSegment543)
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.setUSE("hanim_l_thumb_distal")

HAnimHumanoid44.addSegments(HAnimSegment544)
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setUSE("hanim_r_thumb_distal")

HAnimHumanoid44.addSegments(HAnimSegment545)
HAnimSegment546 = x3d.HAnimSegment()
HAnimSegment546.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment546)
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setUSE("hanim_r_thumb_metacarpal")

HAnimHumanoid44.addSegments(HAnimSegment547)
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid44.addSegments(HAnimSegment548)
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setUSE("hanim_r_thumb_proximal")

HAnimHumanoid44.addSegments(HAnimSegment549)
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setUSE("hanim_l_upperarm")

HAnimHumanoid44.addSegments(HAnimSegment550)
HAnimSegment551 = x3d.HAnimSegment()
HAnimSegment551.setUSE("hanim_r_upperarm")

HAnimHumanoid44.addSegments(HAnimSegment551)
HAnimSite552 = x3d.HAnimSite()
HAnimSite552.setUSE("hanim_crotch_pt")

HAnimHumanoid44.addSites(HAnimSite552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.setUSE("hanim_skull_tip")

HAnimHumanoid44.addSites(HAnimSite553)
HAnimSite554 = x3d.HAnimSite()
HAnimSite554.setUSE("hanim_sellion_pt")

HAnimHumanoid44.addSites(HAnimSite554)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.setUSE("hanim_supramenton_pt")

HAnimHumanoid44.addSites(HAnimSite555)
HAnimSite556 = x3d.HAnimSite()
HAnimSite556.setUSE("hanim_nuchale_pt")

HAnimHumanoid44.addSites(HAnimSite556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.setUSE("hanim_suprasternale_pt")

HAnimHumanoid44.addSites(HAnimSite557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setUSE("hanim_cervicale_pt")

HAnimHumanoid44.addSites(HAnimSite558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.setUSE("hanim_substernale_pt")

HAnimHumanoid44.addSites(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.setUSE("hanim_rib10_midspine_pt")

HAnimHumanoid44.addSites(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.setUSE("hanim_waist_preferred_post_pt")

HAnimHumanoid44.addSites(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.setUSE("hanim_navel_pt")

HAnimHumanoid44.addSites(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setUSE("hanim_l_acromion_pt")

HAnimHumanoid44.addSites(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setUSE("hanim_r_acromion_pt")

HAnimHumanoid44.addSites(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setUSE("hanim_r_asis_pt")

HAnimHumanoid44.addSites(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.setUSE("hanim_l_asis_pt")

HAnimHumanoid44.addSites(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.setUSE("hanim_l_axilla_ant_pt")

HAnimHumanoid44.addSites(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.setUSE("hanim_r_axilla_ant_pt")

HAnimHumanoid44.addSites(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.setUSE("hanim_l_axilla_post_pt")

HAnimHumanoid44.addSites(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setUSE("hanim_r_axilla_post_pt")

HAnimHumanoid44.addSites(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid44.addSites(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid44.addSites(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid44.addSites(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid44.addSites(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid44.addSites(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid44.addSites(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.setUSE("hanim_l_digit2_pt")

HAnimHumanoid44.addSites(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setUSE("hanim_r_digit2_pt")

HAnimHumanoid44.addSites(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid44.addSites(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.setUSE("hanim_r_forefoot_tip")

HAnimHumanoid44.addSites(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.setUSE("hanim_r_gonion_pt")

HAnimHumanoid44.addSites(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setUSE("hanim_l_gonion_pt")

HAnimHumanoid44.addSites(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid44.addSites(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid44.addSites(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid44.addSites(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid44.addSites(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.setUSE("hanim_r_index_distal_tip")

HAnimHumanoid44.addSites(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid44.addSites(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid44.addSites(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid44.addSites(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid44.addSites(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid44.addSites(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid44.addSites(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid44.addSites(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid44.addSites(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid44.addSites(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite609)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid44.addSites(HAnimSite610)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.setUSE("hanim_l_middle_distal_tip")

HAnimHumanoid44.addSites(HAnimSite611)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.setUSE("hanim_r_middle_distal_tip")

HAnimHumanoid44.addSites(HAnimSite612)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid44.addSites(HAnimSite613)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid44.addSites(HAnimSite614)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid44.addSites(HAnimSite615)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid44.addSites(HAnimSite616)
HAnimSite617 = x3d.HAnimSite()
HAnimSite617.setUSE("hanim_l_pinky_distal_tip")

HAnimHumanoid44.addSites(HAnimSite617)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setUSE("hanim_r_pinky_distal_tip")

HAnimHumanoid44.addSites(HAnimSite618)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setUSE("hanim_r_psis_pt")

HAnimHumanoid44.addSites(HAnimSite619)
HAnimSite620 = x3d.HAnimSite()
HAnimSite620.setUSE("hanim_l_psis_pt")

HAnimHumanoid44.addSites(HAnimSite620)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite621)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite622)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setUSE("hanim_l_radiale_pt")

HAnimHumanoid44.addSites(HAnimSite623)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setUSE("hanim_r_radiale_pt")

HAnimHumanoid44.addSites(HAnimSite624)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setUSE("hanim_r_rib10_pt")

HAnimHumanoid44.addSites(HAnimSite625)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.setUSE("hanim_l_rib10_pt")

HAnimHumanoid44.addSites(HAnimSite626)
HAnimSite627 = x3d.HAnimSite()
HAnimSite627.setUSE("hanim_l_ring_distal_tip")

HAnimHumanoid44.addSites(HAnimSite627)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setUSE("hanim_r_ring_distal_tip")

HAnimHumanoid44.addSites(HAnimSite628)
HAnimSite629 = x3d.HAnimSite()
HAnimSite629.setUSE("hanim_temporomandibular_l_site_pt")

HAnimHumanoid44.addSites(HAnimSite629)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.setUSE("hanim_temporomandibular_r_site_pt")

HAnimHumanoid44.addSites(HAnimSite630)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid44.addSites(HAnimSite631)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid44.addSites(HAnimSite632)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setUSE("hanim_r_thelion_pt")

HAnimHumanoid44.addSites(HAnimSite633)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.setUSE("hanim_l_thelion_pt")

HAnimHumanoid44.addSites(HAnimSite634)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid44.addSites(HAnimSite635)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.setUSE("hanim_r_thumb_distal_tip")

HAnimHumanoid44.addSites(HAnimSite636)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setUSE("hanim_r_tragion_pt")

HAnimHumanoid44.addSites(HAnimSite637)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.setUSE("hanim_l_tragion_pt")

HAnimHumanoid44.addSites(HAnimSite638)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid44.addSites(HAnimSite639)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid44.addSites(HAnimSite640)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite641)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid44.addSites(HAnimSite642)

Scene30.addChildren(HAnimHumanoid44)

X3D0.setScene(Scene30)
X3D0.toFileX3D("../data/HAnimSpecificationLOA3Invisible_RoundTrip.x3d")

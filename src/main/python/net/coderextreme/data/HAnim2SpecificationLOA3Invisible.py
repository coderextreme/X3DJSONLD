print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "HAnim2SpecificationLOA3Invisible.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "reference"
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "reference"
meta6.content = "HAnim2SpecificationLOA3Illustrated.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "HAnim2SpecificationLOA3Animation.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "HAnimSpecificationExampleChangeLog.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "created"
meta16.content = "24 April 2013"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "modified"
meta17.content = "Mon, 15 Sep 2025 05:20:09 GMT"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "creator"
meta18.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "images/BonesAllSkeletonFrontViewLOA2.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "images/BonesAllSkeletonFrontViewLOA3.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "TODO"
meta22.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "TODO"
meta23.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "translator"
meta24.content = "Don Brutzman and Joe Williams"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "generator"
meta25.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "generator"
meta26.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta26)

X3D0.head = head1
Scene27 = x3d.Scene()
Background28 = x3d.Background()
Background28.skyColor = [(0.3, 0.3, 0.3)]

Scene27.children.append(Background28)
NavigationInfo29 = x3d.NavigationInfo()

Scene27.children.append(NavigationInfo29)
Group30 = x3d.Group()
Group30.DEF = "Original_WorldInfo"
WorldInfo31 = x3d.WorldInfo()
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3"
WorldInfo31.info = [" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]

Group30.children.append(WorldInfo31)

Scene27.children.append(Group30)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.description = "Humanoid LOA 3 Front"
Viewpoint32.position = [0,0.4,4]
Viewpoint32.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint32)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.description = "Humanoid LOA 3 Front Close"
Viewpoint33.position = [0,0.8,2]
Viewpoint33.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint33)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.description = "Humanoid LOA 3 Front Closer"
Viewpoint34.position = [0,1.2,1]
Viewpoint34.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "Humanoid LOA 3 Front Face"
Viewpoint35.position = [0,1.63,1]
Viewpoint35.centerOfRotation = [0,1.5,0.0016]

Scene27.children.append(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.description = "Humanoid LOA 3 Right Side"
Viewpoint36.position = [2.6,0.8,0]
Viewpoint36.orientation = [0,1,0,1.5708]
Viewpoint36.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Humanoid LOA 3 Right Side Close"
Viewpoint37.position = [1,0.8,0.5]
Viewpoint37.orientation = [0,1,0,1.2]
Viewpoint37.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "Humanoid LOA 3 Left Side Close"
Viewpoint38.position = [-1,0.8,0.5]
Viewpoint38.orientation = [0,1,0,-1.2]
Viewpoint38.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Humanoid LOA 3 Left Side"
Viewpoint39.position = [-2.6,0.8,0]
Viewpoint39.orientation = [0,1,0,-1.5708]
Viewpoint39.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Humanoid LOA 3 Top"
Viewpoint40.position = [0,3.5,0]
Viewpoint40.orientation = [1,0,0,-1.5708]
Viewpoint40.centerOfRotation = [0,0.9149,0.0016]

Scene27.children.append(Viewpoint40)
HAnimHumanoid41 = x3d.HAnimHumanoid()
HAnimHumanoid41.DEF = "hanim_humanoid"
HAnimHumanoid41.name = "humanoid"
HAnimHumanoid41.loa = 3
MetadataSet42 = x3d.MetadataSet()
MetadataSet42.name = "HAnimHumanoid.info"
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString43 = x3d.MetadataString()
MetadataString43.name = "authorName"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString43)
MetadataString44 = x3d.MetadataString()
MetadataString44.name = "authorEmail"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString44)
MetadataString45 = x3d.MetadataString()
MetadataString45.name = "copyright"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString45)
MetadataString46 = x3d.MetadataString()
MetadataString46.name = "creationDate"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString46)
MetadataFloat47 = x3d.MetadataFloat()
MetadataFloat47.name = "height"
MetadataFloat47.value = [1.7504]

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataFloat47)
MetadataString48 = x3d.MetadataString()
MetadataString48.name = "humanoidVersion"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.name = "usageRestrictions"

if MetadataSet42.value is None:
    MetadataSet42.value = []
MetadataSet42.value.append(MetadataString49)

HAnimHumanoid41.metadata = MetadataSet42
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.DEF = "hanim_humanoid_root"
HAnimJoint50.name = "humanoid_root"
HAnimJoint50.center = [0,0.824,0.0277]
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.DEF = "hanim_sacrum"
HAnimSegment51.name = "sacrum"

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "hanim_sacroiliac"
HAnimJoint52.name = "sacroiliac"
HAnimJoint52.center = [0,0.9149,0.0016]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.DEF = "hanim_pelvis"
HAnimSegment53.name = "pelvis"
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.DEF = "hanim_r_iliocristale_pt"
HAnimSite54.name = "r_iliocristale_pt"
HAnimSite54.translation = [-0.1525,1.0628,0.0035]

HAnimSegment53.children.append(HAnimSite54)
HAnimSite55 = x3d.HAnimSite()
HAnimSite55.DEF = "hanim_r_trochanterion_pt"
HAnimSite55.name = "r_trochanterion_pt"
HAnimSite55.translation = [-0.1689,0.8419,0.0352]

HAnimSegment53.children.append(HAnimSite55)
HAnimSite56 = x3d.HAnimSite()
HAnimSite56.DEF = "hanim_l_iliocristale_pt"
HAnimSite56.name = "l_iliocristale_pt"
HAnimSite56.translation = [0.1612,1.0537,0.0008]

HAnimSegment53.children.append(HAnimSite56)
HAnimSite57 = x3d.HAnimSite()
HAnimSite57.DEF = "hanim_l_trochanterion_pt"
HAnimSite57.name = "l_trochanterion_pt"
HAnimSite57.translation = [0.1677,0.8336,0.0303]

HAnimSegment53.children.append(HAnimSite57)
HAnimSite58 = x3d.HAnimSite()
HAnimSite58.DEF = "hanim_r_asis_pt"
HAnimSite58.name = "r_asis_pt"
HAnimSite58.translation = [-0.0887,1.0021,0.1112]

HAnimSegment53.children.append(HAnimSite58)
HAnimSite59 = x3d.HAnimSite()
HAnimSite59.DEF = "hanim_l_asis_pt"
HAnimSite59.name = "l_asis_pt"
HAnimSite59.translation = [0.0925,0.9983,0.1052]

HAnimSegment53.children.append(HAnimSite59)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.DEF = "hanim_r_psis_pt"
HAnimSite60.name = "r_psis_pt"
HAnimSite60.translation = [-0.0716,1.019,-0.1138]

HAnimSegment53.children.append(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.DEF = "hanim_l_psis_pt"
HAnimSite61.name = "l_psis_pt"
HAnimSite61.translation = [0.0774,1.019,-0.1151]

HAnimSegment53.children.append(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.DEF = "hanim_crotch_pt"
HAnimSite62.name = "crotch_pt"
HAnimSite62.translation = [0.0034,0.8266,0.0257]

HAnimSegment53.children.append(HAnimSite62)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "hanim_l_hip"
HAnimJoint63.name = "l_hip"
HAnimJoint63.center = [0.0961,0.9124,-0.0001]
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.DEF = "hanim_l_thigh"
HAnimSegment64.name = "l_thigh"
HAnimSite65 = x3d.HAnimSite()
HAnimSite65.DEF = "hanim_l_knee_crease_pt"
HAnimSite65.name = "l_knee_crease_pt"
HAnimSite65.translation = [0.0993,0.4881,-0.0309]

HAnimSegment64.children.append(HAnimSite65)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.DEF = "hanim_l_femoral_lateral_epicondyle_pt"
HAnimSite66.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite66.translation = [0.1598,0.4967,0.0297]

HAnimSegment64.children.append(HAnimSite66)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.DEF = "hanim_l_femoral_medial_epicondyle_pt"
HAnimSite67.name = "l_femoral_medial_epicondyle_pt"
HAnimSite67.translation = [0.0398,0.4946,0.0303]

HAnimSegment64.children.append(HAnimSite67)

HAnimJoint63.children.append(HAnimSegment64)
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.DEF = "hanim_l_knee"
HAnimJoint68.name = "l_knee"
HAnimJoint68.center = [0.104,0.4867,0.0308]
HAnimSegment69 = x3d.HAnimSegment()
HAnimSegment69.DEF = "hanim_l_calf"
HAnimSegment69.name = "l_calf"

HAnimJoint68.children.append(HAnimSegment69)
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.DEF = "hanim_l_talocrural"
HAnimJoint70.name = "l_talocrural"
HAnimJoint70.center = [0.1101,0.0656,-0.0736]
HAnimSegment71 = x3d.HAnimSegment()
HAnimSegment71.DEF = "hanim_l_talus"
HAnimSegment71.name = "l_talus"
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite72.name = "l_lateral_malleolus_pt"
HAnimSite72.translation = [0.1308,0.0597,-0.1032]

HAnimSegment71.children.append(HAnimSite72)
HAnimSite73 = x3d.HAnimSite()
HAnimSite73.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite73.name = "l_medial_malleolus_pt"
HAnimSite73.translation = [0.089,0.0716,-0.0881]

HAnimSegment71.children.append(HAnimSite73)
HAnimSite74 = x3d.HAnimSite()
HAnimSite74.DEF = "hanim_l_sphyrion_pt"
HAnimSite74.name = "l_sphyrion_pt"
HAnimSite74.translation = [0.089,0.0575,-0.0943]

HAnimSegment71.children.append(HAnimSite74)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite75.name = "l_calcaneus_posterior_pt"
HAnimSite75.translation = [0.0974,0.0259,-0.1171]

HAnimSegment71.children.append(HAnimSite75)

HAnimJoint70.children.append(HAnimSegment71)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint76.name = "l_tarsometatarsal_2"
HAnimJoint76.center = [0.1086,0.0001,-0.0368]
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.DEF = "hanim_l_metatarsal_2"
HAnimSegment77.name = "l_metatarsal_2"

HAnimJoint76.children.append(HAnimSegment77)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint78.name = "l_metatarsophalangeal_2"
HAnimJoint78.center = [0.1086,0.0001,0.0368]
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.DEF = "hanim_l_tarsal_proximal_phalanx_2"
HAnimSegment79.name = "l_tarsal_proximal_phalanx_2"
HAnimSite80 = x3d.HAnimSite()
HAnimSite80.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite80.name = "l_metatarsal_phalanx_1_pt"
HAnimSite80.translation = [0.0816,0.0232,0.0106]

HAnimSegment79.children.append(HAnimSite80)

HAnimJoint78.children.append(HAnimSegment79)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint81.center = [0.1086,0,0.0762]
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.DEF = "hanim_l_tarsal_distal_phalanx_2"
HAnimSegment82.name = "l_tarsal_distal_phalanx_2"
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.DEF = "hanim_l_forefoot_tip"
HAnimSite83.name = "l_forefoot_tip"
HAnimSite83.translation = [0.1354,0.0016,0.1476]

HAnimSegment82.children.append(HAnimSite83)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite84.name = "l_metatarsal_phalanx_5_pt"
HAnimSite84.translation = [0.1825,0.007,0.0928]

HAnimSegment82.children.append(HAnimSite84)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.DEF = "hanim_l_tarsal_distal_phalanx_2_pt"
HAnimSite85.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite85.translation = [0.1195,0.0079,0.1433]

HAnimSegment82.children.append(HAnimSite85)

HAnimJoint81.children.append(HAnimSegment82)

HAnimJoint78.children.append(HAnimJoint81)

HAnimJoint76.children.append(HAnimJoint78)

HAnimJoint70.children.append(HAnimJoint76)

HAnimJoint68.children.append(HAnimJoint70)

HAnimJoint63.children.append(HAnimJoint68)

HAnimJoint52.children.append(HAnimJoint63)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.DEF = "hanim_r_hip"
HAnimJoint86.name = "r_hip"
HAnimJoint86.center = [-0.0961,0.9124,-0.0001]
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.DEF = "hanim_r_thigh"
HAnimSegment87.name = "r_thigh"
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.DEF = "hanim_r_knee_crease_pt"
HAnimSite88.name = "r_knee_crease_pt"
HAnimSite88.translation = [-0.0825,0.4932,-0.0326]

HAnimSegment87.children.append(HAnimSite88)
HAnimSite89 = x3d.HAnimSite()
HAnimSite89.DEF = "hanim_r_femoral_lateral_epicondyle_pt"
HAnimSite89.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite89.translation = [-0.1421,0.4992,0.031]

HAnimSegment87.children.append(HAnimSite89)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.DEF = "hanim_r_femoral_medial_epicondyle_pt"
HAnimSite90.name = "r_femoral_medial_epicondyle_pt"
HAnimSite90.translation = [-0.0221,0.5014,0.0289]

HAnimSegment87.children.append(HAnimSite90)

HAnimJoint86.children.append(HAnimSegment87)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.DEF = "hanim_r_knee"
HAnimJoint91.name = "r_knee"
HAnimJoint91.center = [-0.104,0.4867,0.0308]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.DEF = "hanim_r_calf"
HAnimSegment92.name = "r_calf"

HAnimJoint91.children.append(HAnimSegment92)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.DEF = "hanim_r_talocrural"
HAnimJoint93.name = "r_talocrural"
HAnimJoint93.center = [-0.1101,0.0656,-0.0736]
HAnimSegment94 = x3d.HAnimSegment()
HAnimSegment94.DEF = "hanim_r_talus"
HAnimSegment94.name = "r_talus"
HAnimSite95 = x3d.HAnimSite()
HAnimSite95.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite95.name = "r_lateral_malleolus_pt"
HAnimSite95.translation = [-0.1006,0.0658,-0.1075]

HAnimSegment94.children.append(HAnimSite95)
HAnimSite96 = x3d.HAnimSite()
HAnimSite96.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite96.name = "r_medial_malleolus_pt"
HAnimSite96.translation = [-0.0591,0.076,-0.0928]

HAnimSegment94.children.append(HAnimSite96)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.DEF = "hanim_r_sphyrion_pt"
HAnimSite97.name = "r_sphyrion_pt"
HAnimSite97.translation = [-0.0603,0.061,-0.1002]

HAnimSegment94.children.append(HAnimSite97)
HAnimSite98 = x3d.HAnimSite()
HAnimSite98.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite98.name = "r_calcaneus_posterior_pt"
HAnimSite98.translation = [-0.0692,0.0297,-0.1221]

HAnimSegment94.children.append(HAnimSite98)

HAnimJoint93.children.append(HAnimSegment94)
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint99.name = "r_tarsometatarsal_2"
HAnimJoint99.center = [-0.1086,0.0001,-0.0368]
HAnimSegment100 = x3d.HAnimSegment()
HAnimSegment100.DEF = "hanim_r_metatarsal_2"
HAnimSegment100.name = "r_metatarsal_2"

HAnimJoint99.children.append(HAnimSegment100)
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint101.name = "r_metatarsophalangeal_2"
HAnimJoint101.center = [-0.1086,0.0001,0.0368]
HAnimSegment102 = x3d.HAnimSegment()
HAnimSegment102.DEF = "hanim_r_tarsal_proximal_phalanx_2"
HAnimSegment102.name = "r_tarsal_proximal_phalanx_2"
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite103.name = "r_metatarsal_phalanx_1_pt"
HAnimSite103.translation = [-0.0521,0.026,0.0127]

HAnimSegment102.children.append(HAnimSite103)

HAnimJoint101.children.append(HAnimSegment102)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint104.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint104.center = [-0.1086,0,0.0762]
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.DEF = "hanim_r_tarsal_distal_phalanx_2"
HAnimSegment105.name = "r_tarsal_distal_phalanx_2"
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.DEF = "hanim_r_forefoot_tip"
HAnimSite106.name = "r_forefoot_tip"
HAnimSite106.translation = [-0.1043,0.0227,0.145]

HAnimSegment105.children.append(HAnimSite106)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite107.name = "r_metatarsal_phalanx_5_pt"
HAnimSite107.translation = [-0.1523,0.0166,0.0895]

HAnimSegment105.children.append(HAnimSite107)
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.DEF = "hanim_r_tarsal_distal_phalanx_2_pt"
HAnimSite108.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite108.translation = [-0.0883,0.0134,0.1383]

HAnimSegment105.children.append(HAnimSite108)

HAnimJoint104.children.append(HAnimSegment105)

HAnimJoint101.children.append(HAnimJoint104)

HAnimJoint99.children.append(HAnimJoint101)

HAnimJoint93.children.append(HAnimJoint99)

HAnimJoint91.children.append(HAnimJoint93)

HAnimJoint86.children.append(HAnimJoint91)

HAnimJoint52.children.append(HAnimJoint86)

HAnimJoint50.children.append(HAnimJoint52)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.DEF = "hanim_vl5"
HAnimJoint109.name = "vl5"
HAnimJoint109.center = [0.0028,1.0568,-0.0776]
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.DEF = "hanim_l5"
HAnimSegment110.name = "l5"
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite111.name = "waist_preferred_posterior_pt"
HAnimSite111.translation = [0,1.0915,-0.1091]

HAnimSegment110.children.append(HAnimSite111)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.DEF = "hanim_navel_pt"
HAnimSite112.name = "navel_pt"
HAnimSite112.translation = [0.0069,1.0966,0.1017]

HAnimSegment110.children.append(HAnimSite112)

HAnimJoint109.children.append(HAnimSegment110)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.DEF = "hanim_vl4"
HAnimJoint113.name = "vl4"
HAnimJoint113.center = [0.0035,1.0925,-0.0787]
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.DEF = "hanim_l4"
HAnimSegment114.name = "l4"

HAnimJoint113.children.append(HAnimSegment114)
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "hanim_vl3"
HAnimJoint115.name = "vl3"
HAnimJoint115.center = [0.0041,1.1276,-0.0796]
HAnimSegment116 = x3d.HAnimSegment()
HAnimSegment116.DEF = "hanim_l3"
HAnimSegment116.name = "l3"

HAnimJoint115.children.append(HAnimSegment116)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "hanim_vl2"
HAnimJoint117.name = "vl2"
HAnimJoint117.center = [0.0045,1.1546,-0.08]
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.DEF = "hanim_l2"
HAnimSegment118.name = "l2"
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.DEF = "hanim_r_rib10_pt"
HAnimSite119.name = "r_rib10_pt"
HAnimSite119.translation = [-0.0711,1.1941,0.1016]

HAnimSegment118.children.append(HAnimSite119)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.DEF = "hanim_l_rib10_pt"
HAnimSite120.name = "l_rib10_pt"
HAnimSite120.translation = [0.0871,1.1925,0.0992]

HAnimSegment118.children.append(HAnimSite120)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.DEF = "hanim_rib10_midspine_pt"
HAnimSite121.name = "rib10_midspine_pt"
HAnimSite121.translation = [0.0049,1.1908,-0.1113]

HAnimSegment118.children.append(HAnimSite121)

HAnimJoint117.children.append(HAnimSegment118)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "hanim_vl1"
HAnimJoint122.name = "vl1"
HAnimJoint122.center = [0.0048,1.1912,-0.0805]
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.DEF = "hanim_l1"
HAnimSegment123.name = "l1"

HAnimJoint122.children.append(HAnimSegment123)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "hanim_vt12"
HAnimJoint124.name = "vt12"
HAnimJoint124.center = [0.0051,1.2278,-0.0808]
HAnimSegment125 = x3d.HAnimSegment()
HAnimSegment125.DEF = "hanim_t12"
HAnimSegment125.name = "t12"

HAnimJoint124.children.append(HAnimSegment125)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.DEF = "hanim_vt11"
HAnimJoint126.name = "vt11"
HAnimJoint126.center = [0.0053,1.2679,-0.081]
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.DEF = "hanim_t11"
HAnimSegment127.name = "t11"

HAnimJoint126.children.append(HAnimSegment127)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "hanim_vt10"
HAnimJoint128.name = "vt10"
HAnimJoint128.center = [0.0056,1.2848,-0.0822]
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.DEF = "hanim_t10"
HAnimSegment129.name = "t10"
HAnimSite130 = x3d.HAnimSite()
HAnimSite130.DEF = "hanim_substernale_pt"
HAnimSite130.name = "substernale_pt"
HAnimSite130.translation = [0.0085,1.2995,0.1147]

HAnimSegment129.children.append(HAnimSite130)

HAnimJoint128.children.append(HAnimSegment129)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.DEF = "hanim_vt9"
HAnimJoint131.name = "vt9"
HAnimJoint131.center = [0.0057,1.3126,-0.0838]
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.DEF = "hanim_t9"
HAnimSegment132.name = "t9"
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.DEF = "hanim_r_thelion_pt"
HAnimSite133.name = "r_thelion_pt"
HAnimSite133.translation = [-0.0736,1.3385,0.1217]

HAnimSegment132.children.append(HAnimSite133)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.DEF = "hanim_l_thelion_pt"
HAnimSite134.name = "l_thelion_pt"
HAnimSite134.translation = [0.0918,1.3382,0.1192]

HAnimSegment132.children.append(HAnimSite134)

HAnimJoint131.children.append(HAnimSegment132)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.DEF = "hanim_vt8"
HAnimJoint135.name = "vt8"
HAnimJoint135.center = [0.0057,1.3382,-0.0845]
HAnimSegment136 = x3d.HAnimSegment()
HAnimSegment136.DEF = "hanim_t8"
HAnimSegment136.name = "t8"

HAnimJoint135.children.append(HAnimSegment136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.DEF = "hanim_vt7"
HAnimJoint137.name = "vt7"
HAnimJoint137.center = [0.0058,1.3625,-0.0833]
HAnimSegment138 = x3d.HAnimSegment()
HAnimSegment138.DEF = "hanim_t7"
HAnimSegment138.name = "t7"

HAnimJoint137.children.append(HAnimSegment138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.DEF = "hanim_vt6"
HAnimJoint139.name = "vt6"
HAnimJoint139.center = [0.0059,1.3866,-0.08]
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.DEF = "hanim_t6"
HAnimSegment140.name = "t6"

HAnimJoint139.children.append(HAnimSegment140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.DEF = "hanim_vt5"
HAnimJoint141.name = "vt5"
HAnimJoint141.center = [0.006,1.4102,-0.0745]
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.DEF = "hanim_t5"
HAnimSegment142.name = "t5"

HAnimJoint141.children.append(HAnimSegment142)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.DEF = "hanim_vt4"
HAnimJoint143.name = "vt4"
HAnimJoint143.center = [0.0061,1.432,-0.0675]
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.DEF = "hanim_t4"
HAnimSegment144.name = "t4"

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.DEF = "hanim_vt3"
HAnimJoint145.name = "vt3"
HAnimJoint145.center = [0.0062,1.4583,-0.057]
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.DEF = "hanim_t3"
HAnimSegment146.name = "t3"

HAnimJoint145.children.append(HAnimSegment146)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.DEF = "hanim_vt2"
HAnimJoint147.name = "vt2"
HAnimJoint147.center = [0.0063,1.4761,-0.0484]
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.DEF = "hanim_t2"
HAnimSegment148.name = "t2"

HAnimJoint147.children.append(HAnimSegment148)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.DEF = "hanim_vt1"
HAnimJoint149.name = "vt1"
HAnimJoint149.center = [0.0065,1.4951,-0.0387]
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.DEF = "hanim_t1"
HAnimSegment150.name = "t1"
HAnimSite151 = x3d.HAnimSite()
HAnimSite151.DEF = "hanim_suprasternale_pt"
HAnimSite151.name = "suprasternale_pt"
HAnimSite151.translation = [0.0084,1.4714,0.0551]

HAnimSegment150.children.append(HAnimSite151)
HAnimSite152 = x3d.HAnimSite()
HAnimSite152.DEF = "hanim_cervicale_pt"
HAnimSite152.name = "cervicale_pt"
HAnimSite152.translation = [0.0064,1.52,-0.0815]

HAnimSegment150.children.append(HAnimSite152)

HAnimJoint149.children.append(HAnimSegment150)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.DEF = "hanim_vc7"
HAnimJoint153.name = "vc7"
HAnimJoint153.center = [0.0066,1.5132,-0.0301]
HAnimSegment154 = x3d.HAnimSegment()
HAnimSegment154.DEF = "hanim_c7"
HAnimSegment154.name = "c7"
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.DEF = "hanim_r_neck_base_pt"
HAnimSite155.name = "r_neck_base_pt"
HAnimSite155.translation = [-0.0419,1.5149,-0.022]

HAnimSegment154.children.append(HAnimSite155)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.DEF = "hanim_l_neck_base_pt"
HAnimSite156.name = "l_neck_base_pt"
HAnimSite156.translation = [0.0646,1.5141,-0.038]

HAnimSegment154.children.append(HAnimSite156)

HAnimJoint153.children.append(HAnimSegment154)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.DEF = "hanim_vc6"
HAnimJoint157.name = "vc6"
HAnimJoint157.center = [0.0066,1.5357,-0.0143]
HAnimSegment158 = x3d.HAnimSegment()
HAnimSegment158.DEF = "hanim_c6"
HAnimSegment158.name = "c6"

HAnimJoint157.children.append(HAnimSegment158)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.DEF = "hanim_vc5"
HAnimJoint159.name = "vc5"
HAnimJoint159.center = [0.0066,1.552,-0.0082]
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.DEF = "hanim_c5"
HAnimSegment160.name = "c5"

HAnimJoint159.children.append(HAnimSegment160)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.DEF = "hanim_vc4"
HAnimJoint161.name = "vc4"
HAnimJoint161.center = [0.0066,1.5662,-0.0084]
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.DEF = "hanim_c4"
HAnimSegment162.name = "c4"

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.DEF = "hanim_vc3"
HAnimJoint163.name = "vc3"
HAnimJoint163.center = [0.0066,1.58,-0.0103]
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.DEF = "hanim_c3"
HAnimSegment164.name = "c3"

HAnimJoint163.children.append(HAnimSegment164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.DEF = "hanim_vc2"
HAnimJoint165.name = "vc2"
HAnimJoint165.center = [0.0066,1.5928,-0.0103]
HAnimSegment166 = x3d.HAnimSegment()
HAnimSegment166.DEF = "hanim_c2"
HAnimSegment166.name = "c2"

HAnimJoint165.children.append(HAnimSegment166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.DEF = "hanim_vc1"
HAnimJoint167.name = "vc1"
HAnimJoint167.center = [0.0066,1.6144,-0.0034]
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.DEF = "hanim_c1"
HAnimSegment168.name = "c1"

HAnimJoint167.children.append(HAnimSegment168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.DEF = "hanim_skullbase"
HAnimJoint169.name = "skullbase"
HAnimJoint169.center = [0.0044,1.6209,0.0236]
HAnimSegment170 = x3d.HAnimSegment()
HAnimSegment170.DEF = "hanim_skull"
HAnimSegment170.name = "skull"
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.DEF = "hanim_skull_vertex_tip"
HAnimSite171.name = "skull_vertex_tip"
HAnimSite171.translation = [0.005,1.7504,0.0055]

HAnimSegment170.children.append(HAnimSite171)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.DEF = "hanim_sellion_pt"
HAnimSite172.name = "sellion_pt"
HAnimSite172.translation = [0.0058,1.6316,0.0852]

HAnimSegment170.children.append(HAnimSite172)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.DEF = "hanim_r_infraorbitale_pt"
HAnimSite173.name = "r_infraorbitale_pt"
HAnimSite173.translation = [-0.0237,1.6171,0.0752]

HAnimSegment170.children.append(HAnimSite173)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.DEF = "hanim_l_infraorbitale_pt"
HAnimSite174.name = "l_infraorbitale_pt"
HAnimSite174.translation = [0.0341,1.6171,0.0752]

HAnimSegment170.children.append(HAnimSite174)
HAnimSite175 = x3d.HAnimSite()
HAnimSite175.DEF = "hanim_supramenton_pt"
HAnimSite175.name = "supramenton_pt"
HAnimSite175.translation = [0.0061,1.541,0.0805]

HAnimSegment170.children.append(HAnimSite175)
HAnimSite176 = x3d.HAnimSite()
HAnimSite176.DEF = "hanim_r_tragion_pt"
HAnimSite176.name = "r_tragion_pt"
HAnimSite176.translation = [-0.0646,1.6347,0.0302]

HAnimSegment170.children.append(HAnimSite176)
HAnimSite177 = x3d.HAnimSite()
HAnimSite177.DEF = "hanim_r_gonion_pt"
HAnimSite177.name = "r_gonion_pt"
HAnimSite177.translation = [-0.052,1.5529,0.0347]

HAnimSegment170.children.append(HAnimSite177)
HAnimSite178 = x3d.HAnimSite()
HAnimSite178.DEF = "hanim_l_tragion_pt"
HAnimSite178.name = "l_tragion_pt"
HAnimSite178.translation = [0.0739,1.6348,0.0282]

HAnimSegment170.children.append(HAnimSite178)
HAnimSite179 = x3d.HAnimSite()
HAnimSite179.DEF = "hanim_l_gonion_pt"
HAnimSite179.name = "l_gonion_pt"
HAnimSite179.translation = [0.0631,1.553,0.033]

HAnimSegment170.children.append(HAnimSite179)
HAnimSite180 = x3d.HAnimSite()
HAnimSite180.DEF = "hanim_nuchale_pt"
HAnimSite180.name = "nuchale_pt"
HAnimSite180.translation = [0.0039,1.5972,-0.0796]

HAnimSegment170.children.append(HAnimSite180)

HAnimJoint169.children.append(HAnimSegment170)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.DEF = "hanim_l_eyeball_joint"
HAnimJoint181.name = "l_eyeball_joint"
HAnimJoint181.center = [0.0336,1.6332,0.0502]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.DEF = "hanim_l_eyeball"
HAnimSegment182.name = "l_eyeball"
HAnimSite183 = x3d.HAnimSite()
HAnimSite183.DEF = "hanim_l_eyeball_site_view"
HAnimSite183.name = "l_eyeball_site_view"
HAnimSite183.translation = [0.034,1.64,0.05]
Viewpoint184 = x3d.Viewpoint()
Viewpoint184.DEF = "hanim_l_eyeball_site_viewpoint"
Viewpoint184.description = "l_eyeball_site_viewpoint looking forward"
Viewpoint184.position = [0,0,0]
Viewpoint184.orientation = [0,1,0,3.141593]

HAnimSite183.children.append(Viewpoint184)

HAnimSegment182.children.append(HAnimSite183)

HAnimJoint181.children.append(HAnimSegment182)

HAnimJoint169.children.append(HAnimJoint181)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.DEF = "hanim_l_eyelid_joint"
HAnimJoint185.name = "l_eyelid_joint"
HAnimJoint185.center = [0.0336,1.6332,0.0502]
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.DEF = "hanim_l_eyelid"
HAnimSegment186.name = "l_eyelid"

HAnimJoint185.children.append(HAnimSegment186)

HAnimJoint169.children.append(HAnimJoint185)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.DEF = "hanim_l_eyebrow_joint"
HAnimJoint187.name = "l_eyebrow_joint"
HAnimJoint187.center = [0.0336,1.635,0.0506]
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.DEF = "hanim_l_eyebrow"
HAnimSegment188.name = "l_eyebrow"

HAnimJoint187.children.append(HAnimSegment188)

HAnimJoint169.children.append(HAnimJoint187)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.DEF = "hanim_r_eyeball_joint"
HAnimJoint189.name = "r_eyeball_joint"
HAnimJoint189.center = [-0.0336,1.6332,0.0502]
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.DEF = "hanim_r_eyeball"
HAnimSegment190.name = "r_eyeball"
HAnimSite191 = x3d.HAnimSite()
HAnimSite191.DEF = "hanim_r_eyeball_site_view"
HAnimSite191.name = "r_eyeball_site_view"
HAnimSite191.translation = [-0.034,1.64,0.05]
Viewpoint192 = x3d.Viewpoint()
Viewpoint192.DEF = "hanim_r_eyeball_site_viewpoint"
Viewpoint192.description = "r_eyeball_site_viewpoint looking forward"
Viewpoint192.position = [0,0,0]
Viewpoint192.orientation = [0,1,0,3.141593]

HAnimSite191.children.append(Viewpoint192)

HAnimSegment190.children.append(HAnimSite191)

HAnimJoint189.children.append(HAnimSegment190)

HAnimJoint169.children.append(HAnimJoint189)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.DEF = "hanim_r_eyelid_joint"
HAnimJoint193.name = "r_eyelid_joint"
HAnimJoint193.center = [-0.0336,1.6332,0.0502]
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.DEF = "hanim_r_eyelid"
HAnimSegment194.name = "r_eyelid"

HAnimJoint193.children.append(HAnimSegment194)

HAnimJoint169.children.append(HAnimJoint193)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.DEF = "hanim_r_eyebrow_joint"
HAnimJoint195.name = "r_eyebrow_joint"
HAnimJoint195.center = [-0.0336,1.635,0.0506]
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.DEF = "hanim_r_eyebrow"
HAnimSegment196.name = "r_eyebrow"

HAnimJoint195.children.append(HAnimSegment196)

HAnimJoint169.children.append(HAnimJoint195)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.DEF = "hanim_temporomandibular"
HAnimJoint197.name = "temporomandibular"
HAnimJoint197.center = [0,1.63,0.015]
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.DEF = "hanim_jaw"
HAnimSegment198.name = "jaw"
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.DEF = "hanim_temporomandibular_l_site_pt"
HAnimSite199.name = "temporomandibular_l_site_pt"
HAnimSite199.translation = [0.045,1.63,0]

HAnimSegment198.children.append(HAnimSite199)
HAnimSite200 = x3d.HAnimSite()
HAnimSite200.DEF = "hanim_temporomandibular_r_site_pt"
HAnimSite200.name = "temporomandibular_r_site_pt"
HAnimSite200.translation = [-0.045,1.63,0]

HAnimSegment198.children.append(HAnimSite200)

HAnimJoint197.children.append(HAnimSegment198)

HAnimJoint169.children.append(HAnimJoint197)

HAnimJoint167.children.append(HAnimJoint169)

HAnimJoint165.children.append(HAnimJoint167)

HAnimJoint163.children.append(HAnimJoint165)

HAnimJoint161.children.append(HAnimJoint163)

HAnimJoint159.children.append(HAnimJoint161)

HAnimJoint157.children.append(HAnimJoint159)

HAnimJoint153.children.append(HAnimJoint157)

HAnimJoint149.children.append(HAnimJoint153)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.DEF = "hanim_l_sternoclavicular"
HAnimJoint201.name = "l_sternoclavicular"
HAnimJoint201.center = [0.082,1.4488,-0.0353]
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.DEF = "hanim_l_clavicle"
HAnimSegment202.name = "l_clavicle"
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.DEF = "hanim_l_clavicle_pt"
HAnimSite203.name = "l_clavicle_pt"
HAnimSite203.translation = [0.0271,1.4943,0.0394]

HAnimSegment202.children.append(HAnimSite203)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.DEF = "hanim_l_acromion_pt"
HAnimSite204.name = "l_acromion_pt"
HAnimSite204.translation = [0.2032,1.476,-0.049]

HAnimSegment202.children.append(HAnimSite204)
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite205.name = "l_axilla_proximal_pt"
HAnimSite205.translation = [0.1777,1.4065,-0.0075]

HAnimSegment202.children.append(HAnimSite205)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.DEF = "hanim_l_axilla_distal_pt"
HAnimSite206.name = "l_axilla_distal_pt"
HAnimSite206.translation = [0.1706,1.4072,-0.0875]

HAnimSegment202.children.append(HAnimSite206)

HAnimJoint201.children.append(HAnimSegment202)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.DEF = "hanim_l_acromioclavicular"
HAnimJoint207.name = "l_acromioclavicular"
HAnimJoint207.center = [0.0962,1.4269,-0.0424]
HAnimSegment208 = x3d.HAnimSegment()
HAnimSegment208.DEF = "hanim_l_scapula"
HAnimSegment208.name = "l_scapula"

HAnimJoint207.children.append(HAnimSegment208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.DEF = "hanim_l_shoulder"
HAnimJoint209.name = "l_shoulder"
HAnimJoint209.center = [0.2029,1.4376,-0.0387]
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.DEF = "hanim_l_upperarm"
HAnimSegment210.name = "l_upperarm"
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.DEF = "hanim_l_humeral_lateral_epicondyle_pt"
HAnimSite211.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite211.translation = [0.228,1.1482,-0.11]

HAnimSegment210.children.append(HAnimSite211)

HAnimJoint209.children.append(HAnimSegment210)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.DEF = "hanim_l_elbow"
HAnimJoint212.name = "l_elbow"
HAnimJoint212.center = [0.2014,1.1357,-0.0682]
HAnimSegment213 = x3d.HAnimSegment()
HAnimSegment213.DEF = "hanim_l_forearm"
HAnimSegment213.name = "l_forearm"
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.DEF = "hanim_l_radial_styloid_pt"
HAnimSite214.name = "l_radial_styloid_pt"
HAnimSite214.translation = [0.1901,0.8645,-0.0415]

HAnimSegment213.children.append(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.DEF = "hanim_l_olecranon_pt"
HAnimSite215.name = "l_olecranon_pt"
HAnimSite215.translation = [0.1962,1.1375,-0.1123]

HAnimSegment213.children.append(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.DEF = "hanim_l_humeral_medial_epicondyle_pt"
HAnimSite216.name = "l_humeral_medial_epicondyle_pt"
HAnimSite216.translation = [0.1735,1.1272,-0.1113]

HAnimSegment213.children.append(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.DEF = "hanim_l_radiale_pt"
HAnimSite217.name = "l_radiale_pt"
HAnimSite217.translation = [0.2182,1.1212,-0.1167]

HAnimSegment213.children.append(HAnimSite217)

HAnimJoint212.children.append(HAnimSegment213)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.DEF = "hanim_l_radiocarpal"
HAnimJoint218.name = "l_radiocarpal"
HAnimJoint218.center = [0.1984,0.8663,-0.0583]
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.DEF = "hanim_l_carpal"
HAnimSegment219.name = "l_carpal"
HAnimSite220 = x3d.HAnimSite()
HAnimSite220.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite220.name = "l_metacarpal_phalanx_2_pt"
HAnimSite220.translation = [0.2009,0.8139,-0.0237]

HAnimSegment219.children.append(HAnimSite220)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite221.name = "l_ulnar_styloid_pt"
HAnimSite221.translation = [0.2142,0.8529,-0.0648]

HAnimSegment219.children.append(HAnimSite221)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite222.name = "l_metacarpal_phalanx_5_pt"
HAnimSite222.translation = [0.1929,0.786,-0.1122]

HAnimSegment219.children.append(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.DEF = "hanim_l_hand_front_view"
HAnimSite223.name = "l_hand_front_view"
HAnimSite223.translation = [0.3,0.75,0.45]
Viewpoint224 = x3d.Viewpoint()
Viewpoint224.DEF = "hanim_l_hand_front_viewpoint"
Viewpoint224.description = "left hand front"
Viewpoint224.position = [0,0,0]
Viewpoint224.centerOfRotation = [0,0.7,0]

HAnimSite223.children.append(Viewpoint224)

HAnimSegment219.children.append(HAnimSite223)

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint225.name = "l_carpometacarpal_1"
HAnimJoint225.center = [0.1924,0.8472,-0.0534]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.DEF = "hanim_l_metacarpal_1"
HAnimSegment226.name = "l_metacarpal_1"

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint227.name = "l_metacarpophalangeal_1"
HAnimJoint227.center = [0.1951,0.8226,0.0246]
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.DEF = "hanim_l_carpal_proximal_phalanx_1"
HAnimSegment228.name = "l_carpal_proximal_phalanx_1"

HAnimJoint227.children.append(HAnimSegment228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint229.name = "l_carpal_interphalangeal_1"
HAnimJoint229.center = [0.1955,0.8159,0.0464]
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.DEF = "hanim_l_carpal_distal_phalanx_1"
HAnimSegment230.name = "l_carpal_distal_phalanx_1"
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
HAnimSite231.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite231.translation = [0.1982,0.8061,0.0759]

HAnimSegment230.children.append(HAnimSite231)

HAnimJoint229.children.append(HAnimSegment230)

HAnimJoint227.children.append(HAnimJoint229)

HAnimJoint225.children.append(HAnimJoint227)

HAnimJoint218.children.append(HAnimJoint225)
HAnimJoint232 = x3d.HAnimJoint()
HAnimJoint232.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint232.name = "l_carpometacarpal_2"
HAnimJoint232.center = [0.1983,0.8024,-0.028]
HAnimSegment233 = x3d.HAnimSegment()
HAnimSegment233.DEF = "hanim_l_metacarpal_2"
HAnimSegment233.name = "l_metacarpal_2"

HAnimJoint232.children.append(HAnimSegment233)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint234.name = "l_metacarpophalangeal_2"
HAnimJoint234.center = [0.1983,0.7815,-0.028]
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.DEF = "hanim_l_carpal_proximal_phalanx_2"
HAnimSegment235.name = "l_carpal_proximal_phalanx_2"

HAnimJoint234.children.append(HAnimSegment235)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint236.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint236.center = [0.2017,0.7363,-0.0248]
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.DEF = "hanim_l_carpal_middle_phalanx_2"
HAnimSegment237.name = "l_carpal_middle_phalanx_2"

HAnimJoint236.children.append(HAnimSegment237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint238.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint238.center = [0.2028,0.7139,-0.0236]
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.DEF = "hanim_l_carpal_distal_phalanx_2"
HAnimSegment239.name = "l_carpal_distal_phalanx_2"
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
HAnimSite240.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite240.translation = [0.2089,0.6858,-0.0245]

HAnimSegment239.children.append(HAnimSite240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.DEF = "hanim_l_dactylion_pt"
HAnimSite241.name = "l_dactylion_pt"
HAnimSite241.translation = [0.2056,0.6743,-0.0482]

HAnimSegment239.children.append(HAnimSite241)

HAnimJoint238.children.append(HAnimSegment239)

HAnimJoint236.children.append(HAnimJoint238)

HAnimJoint234.children.append(HAnimJoint236)

HAnimJoint232.children.append(HAnimJoint234)

HAnimJoint218.children.append(HAnimJoint232)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint242.name = "l_carpometacarpal_3"
HAnimJoint242.center = [0.1987,0.8029,-0.053]
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.DEF = "hanim_l_metacarpal_3"
HAnimSegment243.name = "l_metacarpal_3"

HAnimJoint242.children.append(HAnimSegment243)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint244.name = "l_metacarpophalangeal_3"
HAnimJoint244.center = [0.1987,0.7818,-0.053]
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.DEF = "hanim_l_carpal_proximal_phalanx_3"
HAnimSegment245.name = "l_carpal_proximal_phalanx_3"

HAnimJoint244.children.append(HAnimSegment245)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint246.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint246.center = [0.2013,0.7273,-0.0503]
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.DEF = "hanim_l_carpal_middle_phalanx_3"
HAnimSegment247.name = "l_carpal_middle_phalanx_3"

HAnimJoint246.children.append(HAnimSegment247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint248.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint248.center = [0.2026,0.7011,-0.0494]
HAnimSegment249 = x3d.HAnimSegment()
HAnimSegment249.DEF = "hanim_l_carpal_distal_phalanx_3"
HAnimSegment249.name = "l_carpal_distal_phalanx_3"
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.DEF = "hanim_l_carpal_distal_phalanx_3_tip"
HAnimSite250.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite250.translation = [0.208,0.6731,-0.0491]

HAnimSegment249.children.append(HAnimSite250)

HAnimJoint248.children.append(HAnimSegment249)

HAnimJoint246.children.append(HAnimJoint248)

HAnimJoint244.children.append(HAnimJoint246)

HAnimJoint242.children.append(HAnimJoint244)

HAnimJoint218.children.append(HAnimJoint242)
HAnimJoint251 = x3d.HAnimJoint()
HAnimJoint251.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint251.name = "l_carpometacarpal_4"
HAnimJoint251.center = [0.1956,0.8019,-0.0794]
HAnimSegment252 = x3d.HAnimSegment()
HAnimSegment252.DEF = "hanim_l_metacarpal_4"
HAnimSegment252.name = "l_metacarpal_4"

HAnimJoint251.children.append(HAnimSegment252)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint253.name = "l_metacarpophalangeal_4"
HAnimJoint253.center = [0.1956,0.7815,-0.0794]
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.DEF = "hanim_l_carpal_proximal_phalanx_4"
HAnimSegment254.name = "l_carpal_proximal_phalanx_4"

HAnimJoint253.children.append(HAnimSegment254)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint255.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint255.center = [0.1973,0.7287,-0.0777]
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.DEF = "hanim_l_carpal_middle_phalanx_4"
HAnimSegment256.name = "l_carpal_middle_phalanx_4"

HAnimJoint255.children.append(HAnimSegment256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint257.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint257.center = [0.1983,0.7045,-0.0767]
HAnimSegment258 = x3d.HAnimSegment()
HAnimSegment258.DEF = "hanim_l_carpal_distal_phalanx_4"
HAnimSegment258.name = "l_carpal_distal_phalanx_4"
HAnimSite259 = x3d.HAnimSite()
HAnimSite259.DEF = "hanim_l_carpal_distal_phalanx_4_tip"
HAnimSite259.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite259.translation = [0.2035,0.675,-0.0756]

HAnimSegment258.children.append(HAnimSite259)

HAnimJoint257.children.append(HAnimSegment258)

HAnimJoint255.children.append(HAnimJoint257)

HAnimJoint253.children.append(HAnimJoint255)

HAnimJoint251.children.append(HAnimJoint253)

HAnimJoint218.children.append(HAnimJoint251)
HAnimJoint260 = x3d.HAnimJoint()
HAnimJoint260.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint260.name = "l_carpometacarpal_5"
HAnimJoint260.center = [0.1925,0.8066,-0.1036]
HAnimSegment261 = x3d.HAnimSegment()
HAnimSegment261.DEF = "hanim_l_metacarpal_5"
HAnimSegment261.name = "l_metacarpal_5"

HAnimJoint260.children.append(HAnimSegment261)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint262.name = "l_metacarpophalangeal_5"
HAnimJoint262.center = [0.1925,0.7866,-0.1036]
HAnimSegment263 = x3d.HAnimSegment()
HAnimSegment263.DEF = "hanim_l_carpal_proximal_phalanx_5"
HAnimSegment263.name = "l_carpal_proximal_phalanx_5"

HAnimJoint262.children.append(HAnimSegment263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint264.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint264.center = [0.1938,0.7452,-0.1024]
HAnimSegment265 = x3d.HAnimSegment()
HAnimSegment265.DEF = "hanim_l_carpal_middle_phalanx_5"
HAnimSegment265.name = "l_carpal_middle_phalanx_5"

HAnimJoint264.children.append(HAnimSegment265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint266.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint266.center = [0.1948,0.7277,-0.1017]
HAnimSegment267 = x3d.HAnimSegment()
HAnimSegment267.DEF = "hanim_l_carpal_distal_phalanx_5"
HAnimSegment267.name = "l_carpal_distal_phalanx_5"
HAnimSite268 = x3d.HAnimSite()
HAnimSite268.DEF = "hanim_l_carpal_distal_phalanx_5_tip"
HAnimSite268.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite268.translation = [0.2014,0.7009,-0.1012]

HAnimSegment267.children.append(HAnimSite268)

HAnimJoint266.children.append(HAnimSegment267)

HAnimJoint264.children.append(HAnimJoint266)

HAnimJoint262.children.append(HAnimJoint264)

HAnimJoint260.children.append(HAnimJoint262)

HAnimJoint218.children.append(HAnimJoint260)

HAnimJoint212.children.append(HAnimJoint218)

HAnimJoint209.children.append(HAnimJoint212)

HAnimJoint207.children.append(HAnimJoint209)

HAnimJoint201.children.append(HAnimJoint207)

HAnimJoint149.children.append(HAnimJoint201)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.DEF = "hanim_r_sternoclavicular"
HAnimJoint269.name = "r_sternoclavicular"
HAnimJoint269.center = [-0.082,1.4488,-0.0353]
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.DEF = "hanim_r_clavicle"
HAnimSegment270.name = "r_clavicle"
HAnimSite271 = x3d.HAnimSite()
HAnimSite271.DEF = "hanim_r_clavicle_pt"
HAnimSite271.name = "r_clavicle_pt"
HAnimSite271.translation = [-0.0115,1.4943,0.04]

HAnimSegment270.children.append(HAnimSite271)
HAnimSite272 = x3d.HAnimSite()
HAnimSite272.DEF = "hanim_r_acromion_pt"
HAnimSite272.name = "r_acromion_pt"
HAnimSite272.translation = [-0.1905,1.4791,-0.0431]

HAnimSegment270.children.append(HAnimSite272)
HAnimSite273 = x3d.HAnimSite()
HAnimSite273.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite273.name = "r_axilla_proximal_pt"
HAnimSite273.translation = [-0.1626,1.4072,-0.0031]

HAnimSegment270.children.append(HAnimSite273)
HAnimSite274 = x3d.HAnimSite()
HAnimSite274.DEF = "hanim_r_axilla_distal_pt"
HAnimSite274.name = "r_axilla_distal_pt"
HAnimSite274.translation = [-0.1603,1.4098,-0.0826]

HAnimSegment270.children.append(HAnimSite274)

HAnimJoint269.children.append(HAnimSegment270)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.DEF = "hanim_r_acromioclavicular"
HAnimJoint275.name = "r_acromioclavicular"
HAnimJoint275.center = [-0.0962,1.4269,-0.0424]
HAnimSegment276 = x3d.HAnimSegment()
HAnimSegment276.DEF = "hanim_r_scapula"
HAnimSegment276.name = "r_scapula"

HAnimJoint275.children.append(HAnimSegment276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.DEF = "hanim_r_shoulder"
HAnimJoint277.name = "r_shoulder"
HAnimJoint277.center = [-0.2029,1.4376,-0.0387]
HAnimSegment278 = x3d.HAnimSegment()
HAnimSegment278.DEF = "hanim_r_upperarm"
HAnimSegment278.name = "r_upperarm"
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.DEF = "hanim_r_humeral_lateral_epicondyle_pt"
HAnimSite279.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite279.translation = [-0.2224,1.1517,-0.1033]

HAnimSegment278.children.append(HAnimSite279)

HAnimJoint277.children.append(HAnimSegment278)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.DEF = "hanim_r_elbow"
HAnimJoint280.name = "r_elbow"
HAnimJoint280.center = [-0.2014,1.1357,-0.0682]
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.DEF = "hanim_r_forearm"
HAnimSegment281.name = "r_forearm"
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.DEF = "hanim_r_radial_styloid_pt"
HAnimSite282.name = "r_radial_styloid_pt"
HAnimSite282.translation = [-0.1884,0.8676,-0.036]

HAnimSegment281.children.append(HAnimSite282)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.DEF = "hanim_r_olecranon_pt"
HAnimSite283.name = "r_olecranon_pt"
HAnimSite283.translation = [-0.1907,1.1405,-0.1065]

HAnimSegment281.children.append(HAnimSite283)
HAnimSite284 = x3d.HAnimSite()
HAnimSite284.DEF = "hanim_r_humeral_medial_epicondyle_pt"
HAnimSite284.name = "r_humeral_medial_epicondyle_pt"
HAnimSite284.translation = [-0.168,1.1298,-0.1062]

HAnimSegment281.children.append(HAnimSite284)
HAnimSite285 = x3d.HAnimSite()
HAnimSite285.DEF = "hanim_r_radiale_pt"
HAnimSite285.name = "r_radiale_pt"
HAnimSite285.translation = [-0.213,1.1305,-0.1091]

HAnimSegment281.children.append(HAnimSite285)

HAnimJoint280.children.append(HAnimSegment281)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.DEF = "hanim_r_radiocarpal"
HAnimJoint286.name = "r_radiocarpal"
HAnimJoint286.center = [-0.1984,0.8663,-0.0583]
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.DEF = "hanim_r_carpal"
HAnimSegment287.name = "r_carpal"
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite288.name = "r_metacarpal_phalanx_2_pt"
HAnimSite288.translation = [-0.1977,0.8169,-0.0177]

HAnimSegment287.children.append(HAnimSite288)
HAnimSite289 = x3d.HAnimSite()
HAnimSite289.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite289.name = "r_ulnar_styloid_pt"
HAnimSite289.translation = [-0.2117,0.8562,-0.0584]

HAnimSegment287.children.append(HAnimSite289)
HAnimSite290 = x3d.HAnimSite()
HAnimSite290.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite290.name = "r_metacarpal_phalanx_5_pt"
HAnimSite290.translation = [-0.1929,0.789,-0.1064]

HAnimSegment287.children.append(HAnimSite290)
HAnimSite291 = x3d.HAnimSite()
HAnimSite291.DEF = "hanim_r_hand_front_view"
HAnimSite291.name = "r_hand_front_view"
HAnimSite291.translation = [-0.3,0.75,0.45]
Viewpoint292 = x3d.Viewpoint()
Viewpoint292.DEF = "hanim_r_hand_front_viewpoint"
Viewpoint292.description = "right hand front"
Viewpoint292.position = [0,0,0]
Viewpoint292.centerOfRotation = [0,0.7,0]

HAnimSite291.children.append(Viewpoint292)

HAnimSegment287.children.append(HAnimSite291)

HAnimJoint286.children.append(HAnimSegment287)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint293.name = "r_carpometacarpal_1"
HAnimJoint293.center = [-0.1924,0.8472,-0.0534]
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.DEF = "hanim_r_metacarpal_1"
HAnimSegment294.name = "r_metacarpal_1"

HAnimJoint293.children.append(HAnimSegment294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint295.name = "r_metacarpophalangeal_1"
HAnimJoint295.center = [-0.1951,0.8226,0.0246]
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.DEF = "hanim_r_carpal_proximal_phalanx_1"
HAnimSegment296.name = "r_carpal_proximal_phalanx_1"

HAnimJoint295.children.append(HAnimSegment296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint297.name = "r_carpal_interphalangeal_1"
HAnimJoint297.center = [-0.1955,0.8159,0.0464]
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.DEF = "hanim_r_carpal_distal_phalanx_1"
HAnimSegment298.name = "r_carpal_distal_phalanx_1"
HAnimSite299 = x3d.HAnimSite()
HAnimSite299.DEF = "hanim_r_carpal_distal_phalanx_1_tip"
HAnimSite299.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite299.translation = [-0.1869,0.809,0.082]

HAnimSegment298.children.append(HAnimSite299)

HAnimJoint297.children.append(HAnimSegment298)

HAnimJoint295.children.append(HAnimJoint297)

HAnimJoint293.children.append(HAnimJoint295)

HAnimJoint286.children.append(HAnimJoint293)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint300.name = "r_carpometacarpal_2"
HAnimJoint300.center = [-0.1983,0.8024,-0.028]
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.DEF = "hanim_r_metacarpal_2"
HAnimSegment301.name = "r_metacarpal_2"

HAnimJoint300.children.append(HAnimSegment301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint302.name = "r_metacarpophalangeal_2"
HAnimJoint302.center = [-0.1983,0.7815,-0.028]
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.DEF = "hanim_r_carpal_proximal_phalanx_2"
HAnimSegment303.name = "r_carpal_proximal_phalanx_2"

HAnimJoint302.children.append(HAnimSegment303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint304.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint304.center = [-0.2017,0.7363,-0.0248]
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.DEF = "hanim_r_carpal_middle_phalanx_2"
HAnimSegment305.name = "r_carpal_middle_phalanx_2"

HAnimJoint304.children.append(HAnimSegment305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint306.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint306.center = [-0.2028,0.7139,-0.0236]
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.DEF = "hanim_r_carpal_distal_phalanx_2"
HAnimSegment307.name = "r_carpal_distal_phalanx_2"
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.DEF = "hanim_r_carpal_distal_phalanx_2_tip"
HAnimSite308.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite308.translation = [-0.198,0.6883,-0.018]

HAnimSegment307.children.append(HAnimSite308)
HAnimSite309 = x3d.HAnimSite()
HAnimSite309.DEF = "hanim_r_dactylion_pt"
HAnimSite309.name = "r_dactylion_pt"
HAnimSite309.translation = [-0.1941,0.6772,-0.0423]

HAnimSegment307.children.append(HAnimSite309)

HAnimJoint306.children.append(HAnimSegment307)

HAnimJoint304.children.append(HAnimJoint306)

HAnimJoint302.children.append(HAnimJoint304)

HAnimJoint300.children.append(HAnimJoint302)

HAnimJoint286.children.append(HAnimJoint300)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint310.name = "r_carpometacarpal_3"
HAnimJoint310.center = [-0.1987,0.8029,-0.053]
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.DEF = "hanim_r_metacarpal_3"
HAnimSegment311.name = "r_metacarpal_3"

HAnimJoint310.children.append(HAnimSegment311)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint312.name = "r_metacarpophalangeal_3"
HAnimJoint312.center = [-0.1987,0.7818,-0.053]
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.DEF = "hanim_r_carpal_proximal_phalanx_3"
HAnimSegment313.name = "r_carpal_proximal_phalanx_3"

HAnimJoint312.children.append(HAnimSegment313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint314.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint314.center = [-0.2013,0.7273,-0.0503]
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.DEF = "hanim_r_carpal_middle_phalanx_3"
HAnimSegment315.name = "r_carpal_middle_phalanx_3"

HAnimJoint314.children.append(HAnimSegment315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint316.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint316.center = [-0.2026,0.7011,-0.0494]
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.DEF = "hanim_r_carpal_distal_phalanx_3"
HAnimSegment317.name = "r_carpal_distal_phalanx_3"
HAnimSite318 = x3d.HAnimSite()
HAnimSite318.DEF = "hanim_r_carpal_distal_phalanx_3_tip"
HAnimSite318.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite318.translation = [-0.1969,0.6758,-0.0427]

HAnimSegment317.children.append(HAnimSite318)

HAnimJoint316.children.append(HAnimSegment317)

HAnimJoint314.children.append(HAnimJoint316)

HAnimJoint312.children.append(HAnimJoint314)

HAnimJoint310.children.append(HAnimJoint312)

HAnimJoint286.children.append(HAnimJoint310)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint319.name = "r_carpometacarpal_4"
HAnimJoint319.center = [-0.1956,0.8019,-0.0794]
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.DEF = "hanim_r_metacarpal_4"
HAnimSegment320.name = "r_metacarpal_4"

HAnimJoint319.children.append(HAnimSegment320)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint321.name = "r_metacarpophalangeal_4"
HAnimJoint321.center = [-0.1956,0.7815,-0.0794]
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.DEF = "hanim_r_carpal_proximal_phalanx_4"
HAnimSegment322.name = "r_carpal_proximal_phalanx_4"

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint323.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint323.center = [-0.1973,0.7287,-0.0777]
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.DEF = "hanim_r_carpal_middle_phalanx_4"
HAnimSegment324.name = "r_carpal_middle_phalanx_4"

HAnimJoint323.children.append(HAnimSegment324)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint325.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint325.center = [-0.1983,0.7045,-0.0767]
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.DEF = "hanim_r_carpal_distal_phalanx_4"
HAnimSegment326.name = "r_carpal_distal_phalanx_4"
HAnimSite327 = x3d.HAnimSite()
HAnimSite327.DEF = "hanim_r_carpal_distal_phalanx_4_tip"
HAnimSite327.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite327.translation = [-0.1934,0.6778,-0.0693]

HAnimSegment326.children.append(HAnimSite327)

HAnimJoint325.children.append(HAnimSegment326)

HAnimJoint323.children.append(HAnimJoint325)

HAnimJoint321.children.append(HAnimJoint323)

HAnimJoint319.children.append(HAnimJoint321)

HAnimJoint286.children.append(HAnimJoint319)
HAnimJoint328 = x3d.HAnimJoint()
HAnimJoint328.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint328.name = "r_carpometacarpal_5"
HAnimJoint328.center = [-0.1925,0.8066,-0.1036]
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.DEF = "hanim_r_metacarpal_5"
HAnimSegment329.name = "r_metacarpal_5"

HAnimJoint328.children.append(HAnimSegment329)
HAnimJoint330 = x3d.HAnimJoint()
HAnimJoint330.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint330.name = "r_metacarpophalangeal_5"
HAnimJoint330.center = [-0.1925,0.7866,-0.1036]
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.DEF = "hanim_r_carpal_proximal_phalanx_5"
HAnimSegment331.name = "r_carpal_proximal_phalanx_5"

HAnimJoint330.children.append(HAnimSegment331)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint332.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint332.center = [-0.1938,0.7452,-0.1024]
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.DEF = "hanim_r_carpal_middle_phalanx_5"
HAnimSegment333.name = "r_carpal_middle_phalanx_5"

HAnimJoint332.children.append(HAnimSegment333)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint334.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint334.center = [-0.1948,0.7277,-0.1017]
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.DEF = "hanim_r_carpal_distal_phalanx_5"
HAnimSegment335.name = "r_carpal_distal_phalanx_5"
HAnimSite336 = x3d.HAnimSite()
HAnimSite336.DEF = "hanim_r_carpal_distal_phalanx_5_tip"
HAnimSite336.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite336.translation = [-0.1938,0.7035,-0.0949]

HAnimSegment335.children.append(HAnimSite336)

HAnimJoint334.children.append(HAnimSegment335)

HAnimJoint332.children.append(HAnimJoint334)

HAnimJoint330.children.append(HAnimJoint332)

HAnimJoint328.children.append(HAnimJoint330)

HAnimJoint286.children.append(HAnimJoint328)

HAnimJoint280.children.append(HAnimJoint286)

HAnimJoint277.children.append(HAnimJoint280)

HAnimJoint275.children.append(HAnimJoint277)

HAnimJoint269.children.append(HAnimJoint275)

HAnimJoint149.children.append(HAnimJoint269)

HAnimJoint147.children.append(HAnimJoint149)

HAnimJoint145.children.append(HAnimJoint147)

HAnimJoint143.children.append(HAnimJoint145)

HAnimJoint141.children.append(HAnimJoint143)

HAnimJoint139.children.append(HAnimJoint141)

HAnimJoint137.children.append(HAnimJoint139)

HAnimJoint135.children.append(HAnimJoint137)

HAnimJoint131.children.append(HAnimJoint135)

HAnimJoint128.children.append(HAnimJoint131)

HAnimJoint126.children.append(HAnimJoint128)

HAnimJoint124.children.append(HAnimJoint126)

HAnimJoint122.children.append(HAnimJoint124)

HAnimJoint117.children.append(HAnimJoint122)

HAnimJoint115.children.append(HAnimJoint117)

HAnimJoint113.children.append(HAnimJoint115)

HAnimJoint109.children.append(HAnimJoint113)

HAnimJoint50.children.append(HAnimJoint109)

HAnimHumanoid41.skeleton.append(HAnimJoint50)
HAnimJoint337 = x3d.HAnimJoint()
HAnimJoint337.USE = "hanim_humanoid_root"

HAnimHumanoid41.joints.append(HAnimJoint337)
HAnimJoint338 = x3d.HAnimJoint()
HAnimJoint338.USE = "hanim_sacroiliac"

HAnimHumanoid41.joints.append(HAnimJoint338)
HAnimJoint339 = x3d.HAnimJoint()
HAnimJoint339.USE = "hanim_vl5"

HAnimHumanoid41.joints.append(HAnimJoint339)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.USE = "hanim_vl4"

HAnimHumanoid41.joints.append(HAnimJoint340)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.USE = "hanim_vl3"

HAnimHumanoid41.joints.append(HAnimJoint341)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.USE = "hanim_vl2"

HAnimHumanoid41.joints.append(HAnimJoint342)
HAnimJoint343 = x3d.HAnimJoint()
HAnimJoint343.USE = "hanim_vl1"

HAnimHumanoid41.joints.append(HAnimJoint343)
HAnimJoint344 = x3d.HAnimJoint()
HAnimJoint344.USE = "hanim_vt12"

HAnimHumanoid41.joints.append(HAnimJoint344)
HAnimJoint345 = x3d.HAnimJoint()
HAnimJoint345.USE = "hanim_vt11"

HAnimHumanoid41.joints.append(HAnimJoint345)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.USE = "hanim_vt10"

HAnimHumanoid41.joints.append(HAnimJoint346)
HAnimJoint347 = x3d.HAnimJoint()
HAnimJoint347.USE = "hanim_vt9"

HAnimHumanoid41.joints.append(HAnimJoint347)
HAnimJoint348 = x3d.HAnimJoint()
HAnimJoint348.USE = "hanim_vt8"

HAnimHumanoid41.joints.append(HAnimJoint348)
HAnimJoint349 = x3d.HAnimJoint()
HAnimJoint349.USE = "hanim_vt7"

HAnimHumanoid41.joints.append(HAnimJoint349)
HAnimJoint350 = x3d.HAnimJoint()
HAnimJoint350.USE = "hanim_vt6"

HAnimHumanoid41.joints.append(HAnimJoint350)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.USE = "hanim_vt5"

HAnimHumanoid41.joints.append(HAnimJoint351)
HAnimJoint352 = x3d.HAnimJoint()
HAnimJoint352.USE = "hanim_vt4"

HAnimHumanoid41.joints.append(HAnimJoint352)
HAnimJoint353 = x3d.HAnimJoint()
HAnimJoint353.USE = "hanim_vt3"

HAnimHumanoid41.joints.append(HAnimJoint353)
HAnimJoint354 = x3d.HAnimJoint()
HAnimJoint354.USE = "hanim_vt2"

HAnimHumanoid41.joints.append(HAnimJoint354)
HAnimJoint355 = x3d.HAnimJoint()
HAnimJoint355.USE = "hanim_vt1"

HAnimHumanoid41.joints.append(HAnimJoint355)
HAnimJoint356 = x3d.HAnimJoint()
HAnimJoint356.USE = "hanim_vc7"

HAnimHumanoid41.joints.append(HAnimJoint356)
HAnimJoint357 = x3d.HAnimJoint()
HAnimJoint357.USE = "hanim_vc6"

HAnimHumanoid41.joints.append(HAnimJoint357)
HAnimJoint358 = x3d.HAnimJoint()
HAnimJoint358.USE = "hanim_vc5"

HAnimHumanoid41.joints.append(HAnimJoint358)
HAnimJoint359 = x3d.HAnimJoint()
HAnimJoint359.USE = "hanim_vc4"

HAnimHumanoid41.joints.append(HAnimJoint359)
HAnimJoint360 = x3d.HAnimJoint()
HAnimJoint360.USE = "hanim_vc3"

HAnimHumanoid41.joints.append(HAnimJoint360)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.USE = "hanim_vc2"

HAnimHumanoid41.joints.append(HAnimJoint361)
HAnimJoint362 = x3d.HAnimJoint()
HAnimJoint362.USE = "hanim_vc1"

HAnimHumanoid41.joints.append(HAnimJoint362)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.USE = "hanim_skullbase"

HAnimHumanoid41.joints.append(HAnimJoint363)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.USE = "hanim_temporomandibular"

HAnimHumanoid41.joints.append(HAnimJoint364)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.USE = "hanim_l_acromioclavicular"

HAnimHumanoid41.joints.append(HAnimJoint365)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.USE = "hanim_r_acromioclavicular"

HAnimHumanoid41.joints.append(HAnimJoint366)
HAnimJoint367 = x3d.HAnimJoint()
HAnimJoint367.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint367)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint368)
HAnimJoint369 = x3d.HAnimJoint()
HAnimJoint369.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint369)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint370)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint371)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint372)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint373)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint374)
HAnimJoint375 = x3d.HAnimJoint()
HAnimJoint375.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint375)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint376)
HAnimJoint377 = x3d.HAnimJoint()
HAnimJoint377.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint377)
HAnimJoint378 = x3d.HAnimJoint()
HAnimJoint378.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint378)
HAnimJoint379 = x3d.HAnimJoint()
HAnimJoint379.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint379)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint380)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint381)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint382)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint383)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint384)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid41.joints.append(HAnimJoint385)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid41.joints.append(HAnimJoint386)
HAnimJoint387 = x3d.HAnimJoint()
HAnimJoint387.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid41.joints.append(HAnimJoint387)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid41.joints.append(HAnimJoint388)
HAnimJoint389 = x3d.HAnimJoint()
HAnimJoint389.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid41.joints.append(HAnimJoint389)
HAnimJoint390 = x3d.HAnimJoint()
HAnimJoint390.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid41.joints.append(HAnimJoint390)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid41.joints.append(HAnimJoint391)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid41.joints.append(HAnimJoint392)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid41.joints.append(HAnimJoint393)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid41.joints.append(HAnimJoint394)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.USE = "hanim_l_elbow"

HAnimHumanoid41.joints.append(HAnimJoint395)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.USE = "hanim_r_elbow"

HAnimHumanoid41.joints.append(HAnimJoint396)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.USE = "hanim_l_eyeball_joint"

HAnimHumanoid41.joints.append(HAnimJoint397)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.USE = "hanim_r_eyeball_joint"

HAnimHumanoid41.joints.append(HAnimJoint398)
HAnimJoint399 = x3d.HAnimJoint()
HAnimJoint399.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid41.joints.append(HAnimJoint399)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid41.joints.append(HAnimJoint400)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.USE = "hanim_l_eyelid_joint"

HAnimHumanoid41.joints.append(HAnimJoint401)
HAnimJoint402 = x3d.HAnimJoint()
HAnimJoint402.USE = "hanim_r_eyelid_joint"

HAnimHumanoid41.joints.append(HAnimJoint402)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.USE = "hanim_l_hip"

HAnimHumanoid41.joints.append(HAnimJoint403)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.USE = "hanim_r_hip"

HAnimHumanoid41.joints.append(HAnimJoint404)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.USE = "hanim_l_knee"

HAnimHumanoid41.joints.append(HAnimJoint405)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.USE = "hanim_r_knee"

HAnimHumanoid41.joints.append(HAnimJoint406)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint407)
HAnimJoint408 = x3d.HAnimJoint()
HAnimJoint408.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid41.joints.append(HAnimJoint408)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint409)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint410)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint411)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid41.joints.append(HAnimJoint412)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint413)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid41.joints.append(HAnimJoint414)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint415)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid41.joints.append(HAnimJoint416)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint417)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint418)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.USE = "hanim_l_radiocarpal"

HAnimHumanoid41.joints.append(HAnimJoint419)
HAnimJoint420 = x3d.HAnimJoint()
HAnimJoint420.USE = "hanim_r_radiocarpal"

HAnimHumanoid41.joints.append(HAnimJoint420)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.USE = "hanim_l_shoulder"

HAnimHumanoid41.joints.append(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.USE = "hanim_r_shoulder"

HAnimHumanoid41.joints.append(HAnimJoint422)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.USE = "hanim_l_sternoclavicular"

HAnimHumanoid41.joints.append(HAnimJoint423)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.USE = "hanim_r_sternoclavicular"

HAnimHumanoid41.joints.append(HAnimJoint424)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.USE = "hanim_l_talocrural"

HAnimHumanoid41.joints.append(HAnimJoint425)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.USE = "hanim_r_talocrural"

HAnimHumanoid41.joints.append(HAnimJoint426)
HAnimJoint427 = x3d.HAnimJoint()
HAnimJoint427.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint427)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid41.joints.append(HAnimJoint428)
HAnimJoint429 = x3d.HAnimJoint()
HAnimJoint429.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid41.joints.append(HAnimJoint429)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid41.joints.append(HAnimJoint430)
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.USE = "hanim_pelvis"

HAnimHumanoid41.segments.append(HAnimSegment431)
HAnimSegment432 = x3d.HAnimSegment()
HAnimSegment432.USE = "hanim_skull"

HAnimHumanoid41.segments.append(HAnimSegment432)
HAnimSegment433 = x3d.HAnimSegment()
HAnimSegment433.USE = "hanim_jaw"

HAnimHumanoid41.segments.append(HAnimSegment433)
HAnimSegment434 = x3d.HAnimSegment()
HAnimSegment434.USE = "hanim_c1"

HAnimHumanoid41.segments.append(HAnimSegment434)
HAnimSegment435 = x3d.HAnimSegment()
HAnimSegment435.USE = "hanim_c2"

HAnimHumanoid41.segments.append(HAnimSegment435)
HAnimSegment436 = x3d.HAnimSegment()
HAnimSegment436.USE = "hanim_c3"

HAnimHumanoid41.segments.append(HAnimSegment436)
HAnimSegment437 = x3d.HAnimSegment()
HAnimSegment437.USE = "hanim_c4"

HAnimHumanoid41.segments.append(HAnimSegment437)
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.USE = "hanim_c5"

HAnimHumanoid41.segments.append(HAnimSegment438)
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.USE = "hanim_c6"

HAnimHumanoid41.segments.append(HAnimSegment439)
HAnimSegment440 = x3d.HAnimSegment()
HAnimSegment440.USE = "hanim_c7"

HAnimHumanoid41.segments.append(HAnimSegment440)
HAnimSegment441 = x3d.HAnimSegment()
HAnimSegment441.USE = "hanim_t1"

HAnimHumanoid41.segments.append(HAnimSegment441)
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.USE = "hanim_t2"

HAnimHumanoid41.segments.append(HAnimSegment442)
HAnimSegment443 = x3d.HAnimSegment()
HAnimSegment443.USE = "hanim_t3"

HAnimHumanoid41.segments.append(HAnimSegment443)
HAnimSegment444 = x3d.HAnimSegment()
HAnimSegment444.USE = "hanim_t4"

HAnimHumanoid41.segments.append(HAnimSegment444)
HAnimSegment445 = x3d.HAnimSegment()
HAnimSegment445.USE = "hanim_t5"

HAnimHumanoid41.segments.append(HAnimSegment445)
HAnimSegment446 = x3d.HAnimSegment()
HAnimSegment446.USE = "hanim_t6"

HAnimHumanoid41.segments.append(HAnimSegment446)
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.USE = "hanim_t7"

HAnimHumanoid41.segments.append(HAnimSegment447)
HAnimSegment448 = x3d.HAnimSegment()
HAnimSegment448.USE = "hanim_t8"

HAnimHumanoid41.segments.append(HAnimSegment448)
HAnimSegment449 = x3d.HAnimSegment()
HAnimSegment449.USE = "hanim_t9"

HAnimHumanoid41.segments.append(HAnimSegment449)
HAnimSegment450 = x3d.HAnimSegment()
HAnimSegment450.USE = "hanim_t10"

HAnimHumanoid41.segments.append(HAnimSegment450)
HAnimSegment451 = x3d.HAnimSegment()
HAnimSegment451.USE = "hanim_t11"

HAnimHumanoid41.segments.append(HAnimSegment451)
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.USE = "hanim_t12"

HAnimHumanoid41.segments.append(HAnimSegment452)
HAnimSegment453 = x3d.HAnimSegment()
HAnimSegment453.USE = "hanim_l1"

HAnimHumanoid41.segments.append(HAnimSegment453)
HAnimSegment454 = x3d.HAnimSegment()
HAnimSegment454.USE = "hanim_l2"

HAnimHumanoid41.segments.append(HAnimSegment454)
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.USE = "hanim_l3"

HAnimHumanoid41.segments.append(HAnimSegment455)
HAnimSegment456 = x3d.HAnimSegment()
HAnimSegment456.USE = "hanim_l4"

HAnimHumanoid41.segments.append(HAnimSegment456)
HAnimSegment457 = x3d.HAnimSegment()
HAnimSegment457.USE = "hanim_l5"

HAnimHumanoid41.segments.append(HAnimSegment457)
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.USE = "hanim_sacrum"

HAnimHumanoid41.segments.append(HAnimSegment458)
HAnimSegment459 = x3d.HAnimSegment()
HAnimSegment459.USE = "hanim_l_calf"

HAnimHumanoid41.segments.append(HAnimSegment459)
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.USE = "hanim_r_calf"

HAnimHumanoid41.segments.append(HAnimSegment460)
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.USE = "hanim_l_carpal"

HAnimHumanoid41.segments.append(HAnimSegment461)
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.USE = "hanim_r_carpal"

HAnimHumanoid41.segments.append(HAnimSegment462)
HAnimSegment463 = x3d.HAnimSegment()
HAnimSegment463.USE = "hanim_l_carpal_distal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment463)
HAnimSegment464 = x3d.HAnimSegment()
HAnimSegment464.USE = "hanim_r_carpal_distal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment464)
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.USE = "hanim_l_carpal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment465)
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.USE = "hanim_r_carpal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment466)
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.USE = "hanim_l_carpal_distal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment467)
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.USE = "hanim_r_carpal_distal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment468)
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.USE = "hanim_l_carpal_distal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment469)
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.USE = "hanim_r_carpal_distal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment470)
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.USE = "hanim_l_carpal_distal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment471)
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.USE = "hanim_r_carpal_distal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment472)
HAnimSegment473 = x3d.HAnimSegment()
HAnimSegment473.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment473)
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment474)
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment475)
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment476)
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment477)
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment478)
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment479)
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment480)
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment481)
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid41.segments.append(HAnimSegment482)
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment483)
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment484)
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment485)
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid41.segments.append(HAnimSegment486)
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment487)
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid41.segments.append(HAnimSegment488)
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment489)
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid41.segments.append(HAnimSegment490)
HAnimSegment491 = x3d.HAnimSegment()
HAnimSegment491.USE = "hanim_l_clavicle"

HAnimHumanoid41.segments.append(HAnimSegment491)
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.USE = "hanim_r_clavicle"

HAnimHumanoid41.segments.append(HAnimSegment492)
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.USE = "hanim_l_eyeball"

HAnimHumanoid41.segments.append(HAnimSegment493)
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.USE = "hanim_r_eyeball"

HAnimHumanoid41.segments.append(HAnimSegment494)
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.USE = "hanim_l_eyebrow"

HAnimHumanoid41.segments.append(HAnimSegment495)
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.USE = "hanim_r_eyebrow"

HAnimHumanoid41.segments.append(HAnimSegment496)
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.USE = "hanim_l_eyelid"

HAnimHumanoid41.segments.append(HAnimSegment497)
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.USE = "hanim_r_eyelid"

HAnimHumanoid41.segments.append(HAnimSegment498)
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.USE = "hanim_l_forearm"

HAnimHumanoid41.segments.append(HAnimSegment499)
HAnimSegment500 = x3d.HAnimSegment()
HAnimSegment500.USE = "hanim_r_forearm"

HAnimHumanoid41.segments.append(HAnimSegment500)
HAnimSegment501 = x3d.HAnimSegment()
HAnimSegment501.USE = "hanim_l_metacarpal_1"

HAnimHumanoid41.segments.append(HAnimSegment501)
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.USE = "hanim_r_metacarpal_1"

HAnimHumanoid41.segments.append(HAnimSegment502)
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.USE = "hanim_l_metacarpal_2"

HAnimHumanoid41.segments.append(HAnimSegment503)
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.USE = "hanim_r_metacarpal_2"

HAnimHumanoid41.segments.append(HAnimSegment504)
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.USE = "hanim_l_metacarpal_3"

HAnimHumanoid41.segments.append(HAnimSegment505)
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.USE = "hanim_r_metacarpal_3"

HAnimHumanoid41.segments.append(HAnimSegment506)
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.USE = "hanim_l_metacarpal_4"

HAnimHumanoid41.segments.append(HAnimSegment507)
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.USE = "hanim_r_metacarpal_4"

HAnimHumanoid41.segments.append(HAnimSegment508)
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.USE = "hanim_l_metacarpal_5"

HAnimHumanoid41.segments.append(HAnimSegment509)
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.USE = "hanim_r_metacarpal_5"

HAnimHumanoid41.segments.append(HAnimSegment510)
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.USE = "hanim_l_metatarsal_2"

HAnimHumanoid41.segments.append(HAnimSegment511)
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.USE = "hanim_r_metatarsal_2"

HAnimHumanoid41.segments.append(HAnimSegment512)
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.USE = "hanim_l_scapula"

HAnimHumanoid41.segments.append(HAnimSegment513)
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.USE = "hanim_r_scapula"

HAnimHumanoid41.segments.append(HAnimSegment514)
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.USE = "hanim_l_talus"

HAnimHumanoid41.segments.append(HAnimSegment515)
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.USE = "hanim_r_talus"

HAnimHumanoid41.segments.append(HAnimSegment516)
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.USE = "hanim_l_tarsal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment517)
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.USE = "hanim_r_tarsal_distal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment518)
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment519)
HAnimSegment520 = x3d.HAnimSegment()
HAnimSegment520.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid41.segments.append(HAnimSegment520)
HAnimSegment521 = x3d.HAnimSegment()
HAnimSegment521.USE = "hanim_l_thigh"

HAnimHumanoid41.segments.append(HAnimSegment521)
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.USE = "hanim_r_thigh"

HAnimHumanoid41.segments.append(HAnimSegment522)
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.USE = "hanim_l_upperarm"

HAnimHumanoid41.segments.append(HAnimSegment523)
HAnimSegment524 = x3d.HAnimSegment()
HAnimSegment524.USE = "hanim_r_upperarm"

HAnimHumanoid41.segments.append(HAnimSegment524)
HAnimSite525 = x3d.HAnimSite()
HAnimSite525.USE = "hanim_crotch_pt"

HAnimHumanoid41.sites.append(HAnimSite525)
HAnimSite526 = x3d.HAnimSite()
HAnimSite526.USE = "hanim_skull_vertex_tip"

HAnimHumanoid41.sites.append(HAnimSite526)
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.USE = "hanim_sellion_pt"

HAnimHumanoid41.sites.append(HAnimSite527)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.USE = "hanim_supramenton_pt"

HAnimHumanoid41.sites.append(HAnimSite528)
HAnimSite529 = x3d.HAnimSite()
HAnimSite529.USE = "hanim_nuchale_pt"

HAnimHumanoid41.sites.append(HAnimSite529)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.USE = "hanim_suprasternale_pt"

HAnimHumanoid41.sites.append(HAnimSite530)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.USE = "hanim_cervicale_pt"

HAnimHumanoid41.sites.append(HAnimSite531)
HAnimSite532 = x3d.HAnimSite()
HAnimSite532.USE = "hanim_substernale_pt"

HAnimHumanoid41.sites.append(HAnimSite532)
HAnimSite533 = x3d.HAnimSite()
HAnimSite533.USE = "hanim_rib10_midspine_pt"

HAnimHumanoid41.sites.append(HAnimSite533)
HAnimSite534 = x3d.HAnimSite()
HAnimSite534.USE = "hanim_waist_preferred_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite534)
HAnimSite535 = x3d.HAnimSite()
HAnimSite535.USE = "hanim_navel_pt"

HAnimHumanoid41.sites.append(HAnimSite535)
HAnimSite536 = x3d.HAnimSite()
HAnimSite536.USE = "hanim_l_acromion_pt"

HAnimHumanoid41.sites.append(HAnimSite536)
HAnimSite537 = x3d.HAnimSite()
HAnimSite537.USE = "hanim_r_acromion_pt"

HAnimHumanoid41.sites.append(HAnimSite537)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.USE = "hanim_r_asis_pt"

HAnimHumanoid41.sites.append(HAnimSite538)
HAnimSite539 = x3d.HAnimSite()
HAnimSite539.USE = "hanim_l_asis_pt"

HAnimHumanoid41.sites.append(HAnimSite539)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.USE = "hanim_l_axilla_distal_pt"

HAnimHumanoid41.sites.append(HAnimSite540)
HAnimSite541 = x3d.HAnimSite()
HAnimSite541.USE = "hanim_r_axilla_distal_pt"

HAnimHumanoid41.sites.append(HAnimSite541)
HAnimSite542 = x3d.HAnimSite()
HAnimSite542.USE = "hanim_l_axilla_proximal_pt"

HAnimHumanoid41.sites.append(HAnimSite542)
HAnimSite543 = x3d.HAnimSite()
HAnimSite543.USE = "hanim_r_axilla_proximal_pt"

HAnimHumanoid41.sites.append(HAnimSite543)
HAnimSite544 = x3d.HAnimSite()
HAnimSite544.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite544)
HAnimSite545 = x3d.HAnimSite()
HAnimSite545.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid41.sites.append(HAnimSite545)
HAnimSite546 = x3d.HAnimSite()
HAnimSite546.USE = "hanim_l_carpal_distal_phalanx_1_tip"

HAnimHumanoid41.sites.append(HAnimSite546)
HAnimSite547 = x3d.HAnimSite()
HAnimSite547.USE = "hanim_r_carpal_distal_phalanx_1_tip"

HAnimHumanoid41.sites.append(HAnimSite547)
HAnimSite548 = x3d.HAnimSite()
HAnimSite548.USE = "hanim_l_carpal_distal_phalanx_2_tip"

HAnimHumanoid41.sites.append(HAnimSite548)
HAnimSite549 = x3d.HAnimSite()
HAnimSite549.USE = "hanim_r_carpal_distal_phalanx_2_tip"

HAnimHumanoid41.sites.append(HAnimSite549)
HAnimSite550 = x3d.HAnimSite()
HAnimSite550.USE = "hanim_l_carpal_distal_phalanx_3_tip"

HAnimHumanoid41.sites.append(HAnimSite550)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.USE = "hanim_r_carpal_distal_phalanx_3_tip"

HAnimHumanoid41.sites.append(HAnimSite551)
HAnimSite552 = x3d.HAnimSite()
HAnimSite552.USE = "hanim_l_carpal_distal_phalanx_4_tip"

HAnimHumanoid41.sites.append(HAnimSite552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.USE = "hanim_r_carpal_distal_phalanx_4_tip"

HAnimHumanoid41.sites.append(HAnimSite553)
HAnimSite554 = x3d.HAnimSite()
HAnimSite554.USE = "hanim_l_carpal_distal_phalanx_5_tip"

HAnimHumanoid41.sites.append(HAnimSite554)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.USE = "hanim_r_carpal_distal_phalanx_5_tip"

HAnimHumanoid41.sites.append(HAnimSite555)
HAnimSite556 = x3d.HAnimSite()
HAnimSite556.USE = "hanim_l_clavicle_pt"

HAnimHumanoid41.sites.append(HAnimSite556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.USE = "hanim_r_clavicle_pt"

HAnimHumanoid41.sites.append(HAnimSite557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.USE = "hanim_l_dactylion_pt"

HAnimHumanoid41.sites.append(HAnimSite558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.USE = "hanim_r_dactylion_pt"

HAnimHumanoid41.sites.append(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.USE = "hanim_l_femoral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.USE = "hanim_r_femoral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.USE = "hanim_l_femoral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.USE = "hanim_r_femoral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.USE = "hanim_l_forefoot_tip"

HAnimHumanoid41.sites.append(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.USE = "hanim_r_forefoot_tip"

HAnimHumanoid41.sites.append(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.USE = "hanim_r_gonion_pt"

HAnimHumanoid41.sites.append(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.USE = "hanim_l_gonion_pt"

HAnimHumanoid41.sites.append(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.USE = "hanim_l_humeral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.USE = "hanim_r_humeral_lateral_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.USE = "hanim_l_humeral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.USE = "hanim_r_humeral_medial_epicondyle_pt"

HAnimHumanoid41.sites.append(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid41.sites.append(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid41.sites.append(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid41.sites.append(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid41.sites.append(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid41.sites.append(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid41.sites.append(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid41.sites.append(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid41.sites.append(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid41.sites.append(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.USE = "hanim_r_neck_base_pt"

HAnimHumanoid41.sites.append(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.USE = "hanim_l_neck_base_pt"

HAnimHumanoid41.sites.append(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.USE = "hanim_l_olecranon_pt"

HAnimHumanoid41.sites.append(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.USE = "hanim_r_olecranon_pt"

HAnimHumanoid41.sites.append(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.USE = "hanim_r_psis_pt"

HAnimHumanoid41.sites.append(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.USE = "hanim_l_psis_pt"

HAnimHumanoid41.sites.append(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.USE = "hanim_l_radiale_pt"

HAnimHumanoid41.sites.append(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.USE = "hanim_r_radiale_pt"

HAnimHumanoid41.sites.append(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.USE = "hanim_r_rib10_pt"

HAnimHumanoid41.sites.append(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.USE = "hanim_l_rib10_pt"

HAnimHumanoid41.sites.append(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.USE = "hanim_temporomandibular_l_site_pt"

HAnimHumanoid41.sites.append(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.USE = "hanim_temporomandibular_r_site_pt"

HAnimHumanoid41.sites.append(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid41.sites.append(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid41.sites.append(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.USE = "hanim_l_tarsal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.USE = "hanim_r_tarsal_distal_phalanx_2_pt"

HAnimHumanoid41.sites.append(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.USE = "hanim_r_thelion_pt"

HAnimHumanoid41.sites.append(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.USE = "hanim_l_thelion_pt"

HAnimHumanoid41.sites.append(HAnimSite609)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.USE = "hanim_r_tragion_pt"

HAnimHumanoid41.sites.append(HAnimSite610)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.USE = "hanim_l_tragion_pt"

HAnimHumanoid41.sites.append(HAnimSite611)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid41.sites.append(HAnimSite612)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid41.sites.append(HAnimSite613)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite614)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid41.sites.append(HAnimSite615)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.DEF = "hanim_l_inclined_view"
HAnimSite616.name = "l_inclined_view"
HAnimSite616.translation = [1.62,1.05,2.06]
HAnimSite616.rotation = [-0.113,0.993,0.0347,0.671]
Viewpoint617 = x3d.Viewpoint()
Viewpoint617.DEF = "hanim_l_inclined_viewpoint"
Viewpoint617.description = "left inclined"
Viewpoint617.position = [0,0,0]

HAnimSite616.children.append(Viewpoint617)

HAnimHumanoid41.viewpoints.append(HAnimSite616)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.DEF = "hanim_r_inclined_view"
HAnimSite618.name = "r_inclined_view"
HAnimSite618.translation = [-1.62,1.05,2.06]
HAnimSite618.rotation = [-0.113,-0.993,0.0347,0.671]
Viewpoint619 = x3d.Viewpoint()
Viewpoint619.DEF = "hanim_r_inclined_viewpoint"
Viewpoint619.description = "right inclined"
Viewpoint619.position = [0,0,0]
Viewpoint619.centerOfRotation = [0,0.9,0]

HAnimSite618.children.append(Viewpoint619)

HAnimHumanoid41.viewpoints.append(HAnimSite618)
HAnimSite620 = x3d.HAnimSite()
HAnimSite620.DEF = "hanim_front_view"
HAnimSite620.name = "front_view"
HAnimSite620.translation = [0,0.85,2.58]
Viewpoint621 = x3d.Viewpoint()
Viewpoint621.DEF = "hanim_front_viewpoint"
Viewpoint621.description = "front"
Viewpoint621.position = [0,0,0]
Viewpoint621.centerOfRotation = [0,0.9,0]

HAnimSite620.children.append(Viewpoint621)

HAnimHumanoid41.viewpoints.append(HAnimSite620)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.DEF = "hanim_back_view"
HAnimSite622.name = "back_view"
HAnimSite622.translation = [0,0.85,-2.58]
HAnimSite622.rotation = [0,1,0,3.14]
Viewpoint623 = x3d.Viewpoint()
Viewpoint623.DEF = "hanim_back_viewpoint"
Viewpoint623.description = "back"
Viewpoint623.position = [0,0,0]
Viewpoint623.centerOfRotation = [0,0.9,0]

HAnimSite622.children.append(Viewpoint623)

HAnimHumanoid41.viewpoints.append(HAnimSite622)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.DEF = "hanim_l_side_view"
HAnimSite624.name = "l_side_view"
HAnimSite624.translation = [2.6,0.854,0]
HAnimSite624.rotation = [0,1,0,1.5708]
Viewpoint625 = x3d.Viewpoint()
Viewpoint625.DEF = "hanim_l_side_viewpoint"
Viewpoint625.description = "left side"
Viewpoint625.position = [0,0,0]
Viewpoint625.centerOfRotation = [0,0.9,0]

HAnimSite624.children.append(Viewpoint625)

HAnimHumanoid41.viewpoints.append(HAnimSite624)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.DEF = "hanim_Top_view"
HAnimSite626.name = "Top_view"
HAnimSite626.translation = [0,3.5,0]
HAnimSite626.rotation = [1,0,0,-1.57]
Viewpoint627 = x3d.Viewpoint()
Viewpoint627.DEF = "hanim_Top_viewpoint"
Viewpoint627.description = "Top"
Viewpoint627.position = [0,0,0]
Viewpoint627.centerOfRotation = [0,0.9,0]

HAnimSite626.children.append(Viewpoint627)

HAnimHumanoid41.viewpoints.append(HAnimSite626)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.DEF = "hanim_front_close_view"
HAnimSite628.name = "front_close_view"
HAnimSite628.translation = [0,0.854,1.575]
Viewpoint629 = x3d.Viewpoint()
Viewpoint629.DEF = "hanim_front_close_viewpoint"
Viewpoint629.description = "front close"
Viewpoint629.position = [0,0,0]
Viewpoint629.centerOfRotation = [0,0,1.575]

HAnimSite628.children.append(Viewpoint629)

HAnimHumanoid41.viewpoints.append(HAnimSite628)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.DEF = "hanim_side_close_view"
HAnimSite630.name = "side_close_view"
HAnimSite630.translation = [1.56,0.854,0]
HAnimSite630.rotation = [0,1,0,1.5708]
Viewpoint631 = x3d.Viewpoint()
Viewpoint631.DEF = "hanim_side_close_viewpoint"
Viewpoint631.description = "side close"
Viewpoint631.position = [0,0,0]
Viewpoint631.centerOfRotation = [1.6,0,0]

HAnimSite630.children.append(Viewpoint631)

HAnimHumanoid41.viewpoints.append(HAnimSite630)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.DEF = "hanim_head_front_close_view"
HAnimSite632.name = "head_front_close_view"
HAnimSite632.translation = [0,1.5,1]
Viewpoint633 = x3d.Viewpoint()
Viewpoint633.DEF = "hanim_head_front_close_viewpoint"
Viewpoint633.description = "head front close"
Viewpoint633.position = [0,0,0]
Viewpoint633.centerOfRotation = [0,0,1]

HAnimSite632.children.append(Viewpoint633)

HAnimHumanoid41.viewpoints.append(HAnimSite632)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.DEF = "hanim_chest_front_close_view"
HAnimSite634.name = "chest_front_close_view"
HAnimSite634.translation = [0,1.2,1]
Viewpoint635 = x3d.Viewpoint()
Viewpoint635.DEF = "hanim_chest_front_close_viewpoint"
Viewpoint635.description = "chest front close"
Viewpoint635.position = [0,0,0]
Viewpoint635.centerOfRotation = [0,0,1]

HAnimSite634.children.append(Viewpoint635)

HAnimHumanoid41.viewpoints.append(HAnimSite634)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.DEF = "hanim_pelvis_front_close_view"
HAnimSite636.name = "pelvis_front_close_view"
HAnimSite636.translation = [0,0.8,1]
Viewpoint637 = x3d.Viewpoint()
Viewpoint637.DEF = "hanim_pelvis_front_close_viewpoint"
Viewpoint637.description = "pelvis front close"
Viewpoint637.position = [0,0,0]
Viewpoint637.centerOfRotation = [0,0,1]

HAnimSite636.children.append(Viewpoint637)

HAnimHumanoid41.viewpoints.append(HAnimSite636)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.DEF = "hanim_knees_front_close_view"
HAnimSite638.name = "knees_front_close_view"
HAnimSite638.translation = [0,0.4,1]
Viewpoint639 = x3d.Viewpoint()
Viewpoint639.DEF = "hanim_knees_front_close_viewpoint"
Viewpoint639.description = "knees front close"
Viewpoint639.position = [0,0,0]
Viewpoint639.centerOfRotation = [0,0.4,0]

HAnimSite638.children.append(Viewpoint639)

HAnimHumanoid41.viewpoints.append(HAnimSite638)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.DEF = "hanim_feet_front_close_view"
HAnimSite640.name = "feet_front_close_view"
HAnimSite640.translation = [0,0,1]
Viewpoint641 = x3d.Viewpoint()
Viewpoint641.DEF = "hanim_feet_front_close_viewpoint"
Viewpoint641.description = "feet front close"
Viewpoint641.position = [0,0,0]

HAnimSite640.children.append(Viewpoint641)

HAnimHumanoid41.viewpoints.append(HAnimSite640)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.DEF = "hanim_eye_level_view"
HAnimSite642.name = "eye_level_view"
HAnimSite642.translation = [0,1.6332,0.0502]
Viewpoint643 = x3d.Viewpoint()
Viewpoint643.DEF = "hanim_eye_level_viewpoint"
Viewpoint643.description = "eye level looking forward"
Viewpoint643.position = [0,0,0]
Viewpoint643.orientation = [0,1,0,3.141593]

HAnimSite642.children.append(Viewpoint643)

HAnimHumanoid41.viewpoints.append(HAnimSite642)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.USE = "hanim_l_eyeball_site_view"

HAnimHumanoid41.sites.append(HAnimSite644)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.USE = "hanim_r_eyeball_site_view"

HAnimHumanoid41.sites.append(HAnimSite645)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.USE = "hanim_l_hand_front_view"

HAnimHumanoid41.sites.append(HAnimSite646)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.USE = "hanim_r_hand_front_view"

HAnimHumanoid41.sites.append(HAnimSite647)

Scene27.children.append(HAnimHumanoid41)

X3D0.Scene = Scene27
f = open("../data/HAnim2SpecificationLOA3Invisible.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnim2SpecificationLOA3Invisible.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnim2SpecificationLOA3Invisible.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

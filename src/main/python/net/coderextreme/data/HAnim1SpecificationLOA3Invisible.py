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
meta3.content = "HAnimSpecificationLOA3Invisible.x3d"

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
meta6.content = "HAnimSpecificationLOA3Illustrated.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "HAnimSpecificationLOA3Animation.x3d"

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
meta17.content = "Tue, 09 Sep 2025 19:39:08 GMT"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "error"
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "creator"
meta19.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "images/BonesAllSkeletonFrontViewLOA2.png"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "images/BonesAllSkeletonFrontViewLOA3.png"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "TODO"
meta23.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "TODO"
meta24.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "translator"
meta25.content = "Don Brutzman and Joe Williams"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "generator"
meta26.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "generator"
meta27.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta27)

X3D0.head = head1
Scene28 = x3d.Scene()
Background29 = x3d.Background()
Background29.skyColor = [(0.3, 0.3, 0.3)]

Scene28.children.append(Background29)
NavigationInfo30 = x3d.NavigationInfo()

Scene28.children.append(NavigationInfo30)
Group31 = x3d.Group()
Group31.DEF = "Original_WorldInfo"
WorldInfo32 = x3d.WorldInfo()
WorldInfo32.title = "HANIM 200x Default Joint Centers, LOA3"
WorldInfo32.info = [" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]

Group31.children.append(WorldInfo32)

Scene28.children.append(Group31)
Viewpoint33 = x3d.Viewpoint()
Viewpoint33.description = "Humanoid LOA 3 Front"
Viewpoint33.position = [0,0.4,4]
Viewpoint33.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint33)
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.description = "Humanoid LOA 3 Front Close"
Viewpoint34.position = [0,0.8,2]
Viewpoint34.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "Humanoid LOA 3 Front Closer"
Viewpoint35.position = [0,1.2,1]
Viewpoint35.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint35)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.description = "Humanoid LOA 3 Front Face"
Viewpoint36.position = [0,1.63,1]
Viewpoint36.centerOfRotation = [0,1.5,0.0016]

Scene28.children.append(Viewpoint36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "Humanoid LOA 3 Right Side"
Viewpoint37.position = [2.6,0.8,0]
Viewpoint37.orientation = [0,1,0,1.5708]
Viewpoint37.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.description = "Humanoid LOA 3 Right Side Close"
Viewpoint38.position = [1,0.8,0.5]
Viewpoint38.orientation = [0,1,0,1.2]
Viewpoint38.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.description = "Humanoid LOA 3 Left Side Close"
Viewpoint39.position = [-1,0.8,0.5]
Viewpoint39.orientation = [0,1,0,-1.2]
Viewpoint39.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "Humanoid LOA 3 Left Side"
Viewpoint40.position = [-2.6,0.8,0]
Viewpoint40.orientation = [0,1,0,-1.5708]
Viewpoint40.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.description = "Humanoid LOA 3 Top"
Viewpoint41.position = [0,3.5,0]
Viewpoint41.orientation = [1,0,0,-1.5708]
Viewpoint41.centerOfRotation = [0,0.9149,0.0016]

Scene28.children.append(Viewpoint41)
HAnimHumanoid42 = x3d.HAnimHumanoid()
HAnimHumanoid42.DEF = "hanim_humanoid"
HAnimHumanoid42.name = "humanoid"
HAnimHumanoid42.info = ["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]
HAnimHumanoid42.version = "1.0"
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.DEF = "hanim_humanoid_root"
HAnimJoint43.name = "humanoid_root"
HAnimJoint43.center = [0,0.824,0.0277]
HAnimSegment44 = x3d.HAnimSegment()
HAnimSegment44.DEF = "hanim_sacrum"
HAnimSegment44.name = "sacrum"

HAnimJoint43.children.append(HAnimSegment44)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.DEF = "hanim_sacroiliac"
HAnimJoint45.name = "sacroiliac"
HAnimJoint45.center = [0,0.9149,0.0016]
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.DEF = "hanim_pelvis"
HAnimSegment46.name = "pelvis"
HAnimSite47 = x3d.HAnimSite()
HAnimSite47.DEF = "hanim_r_iliocristale_pt"
HAnimSite47.name = "r_iliocristale_pt"
HAnimSite47.translation = [-0.1525,1.0628,0.0035]

HAnimSegment46.children.append(HAnimSite47)
HAnimSite48 = x3d.HAnimSite()
HAnimSite48.DEF = "hanim_r_trochanterion_pt"
HAnimSite48.name = "r_trochanterion_pt"
HAnimSite48.translation = [-0.1689,0.8419,0.0352]

HAnimSegment46.children.append(HAnimSite48)
HAnimSite49 = x3d.HAnimSite()
HAnimSite49.DEF = "hanim_l_iliocristale_pt"
HAnimSite49.name = "l_iliocristale_pt"
HAnimSite49.translation = [0.1612,1.0537,0.0008]

HAnimSegment46.children.append(HAnimSite49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.DEF = "hanim_l_trochanterion_pt"
HAnimSite50.name = "l_trochanterion_pt"
HAnimSite50.translation = [0.1677,0.8336,0.0303]

HAnimSegment46.children.append(HAnimSite50)
HAnimSite51 = x3d.HAnimSite()
HAnimSite51.DEF = "hanim_r_asis_pt"
HAnimSite51.name = "r_asis_pt"
HAnimSite51.translation = [-0.0887,1.0021,0.1112]

HAnimSegment46.children.append(HAnimSite51)
HAnimSite52 = x3d.HAnimSite()
HAnimSite52.DEF = "hanim_l_asis_pt"
HAnimSite52.name = "l_asis_pt"
HAnimSite52.translation = [0.0925,0.9983,0.1052]

HAnimSegment46.children.append(HAnimSite52)
HAnimSite53 = x3d.HAnimSite()
HAnimSite53.DEF = "hanim_r_psis_pt"
HAnimSite53.name = "r_psis_pt"
HAnimSite53.translation = [-0.0716,1.019,-0.1138]

HAnimSegment46.children.append(HAnimSite53)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.DEF = "hanim_l_psis_pt"
HAnimSite54.name = "l_psis_pt"
HAnimSite54.translation = [0.0774,1.019,-0.1151]

HAnimSegment46.children.append(HAnimSite54)
HAnimSite55 = x3d.HAnimSite()
HAnimSite55.DEF = "hanim_crotch_pt"
HAnimSite55.name = "crotch_pt"
HAnimSite55.translation = [0.0034,0.8266,0.0257]

HAnimSegment46.children.append(HAnimSite55)

HAnimJoint45.children.append(HAnimSegment46)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "hanim_l_hip"
HAnimJoint56.name = "l_hip"
HAnimJoint56.center = [0.0961,0.9124,-0.0001]
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.DEF = "hanim_l_thigh"
HAnimSegment57.name = "l_thigh"
HAnimSite58 = x3d.HAnimSite()
HAnimSite58.DEF = "hanim_l_knee_crease_pt"
HAnimSite58.name = "l_knee_crease_pt"
HAnimSite58.translation = [0.0993,0.4881,-0.0309]

HAnimSegment57.children.append(HAnimSite58)
HAnimSite59 = x3d.HAnimSite()
HAnimSite59.DEF = "hanim_l_femoral_lateral_epicn_pt"
HAnimSite59.name = "l_femoral_lateral_epicn_pt"
HAnimSite59.translation = [0.1598,0.4967,0.0297]

HAnimSegment57.children.append(HAnimSite59)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.DEF = "hanim_l_femoral_medial_epicn_pt"
HAnimSite60.name = "l_femoral_medial_epicn_pt"
HAnimSite60.translation = [0.0398,0.4946,0.0303]

HAnimSegment57.children.append(HAnimSite60)

HAnimJoint56.children.append(HAnimSegment57)
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.DEF = "hanim_l_knee"
HAnimJoint61.name = "l_knee"
HAnimJoint61.center = [0.104,0.4867,0.0308]
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.DEF = "hanim_l_calf"
HAnimSegment62.name = "l_calf"

HAnimJoint61.children.append(HAnimSegment62)
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "hanim_l_ankle"
HAnimJoint63.name = "l_ankle"
HAnimJoint63.center = [0.1101,0.0656,-0.0736]
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.DEF = "hanim_l_hindfoot"
HAnimSegment64.name = "l_hindfoot"
HAnimSite65 = x3d.HAnimSite()
HAnimSite65.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite65.name = "l_lateral_malleolus_pt"
HAnimSite65.translation = [0.1308,0.0597,-0.1032]

HAnimSegment64.children.append(HAnimSite65)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite66.name = "l_medial_malleolus_pt"
HAnimSite66.translation = [0.089,0.0716,-0.0881]

HAnimSegment64.children.append(HAnimSite66)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.DEF = "hanim_l_sphyrion_pt"
HAnimSite67.name = "l_sphyrion_pt"
HAnimSite67.translation = [0.089,0.0575,-0.0943]

HAnimSegment64.children.append(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.DEF = "hanim_l_calcaneous_post_pt"
HAnimSite68.name = "l_calcaneous_post_pt"
HAnimSite68.translation = [0.0974,0.0259,-0.1171]

HAnimSegment64.children.append(HAnimSite68)

HAnimJoint63.children.append(HAnimSegment64)
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "hanim_l_subtalar"
HAnimJoint69.name = "l_subtalar"
HAnimJoint69.center = [0.1086,0.0001,-0.0368]
HAnimSegment70 = x3d.HAnimSegment()
HAnimSegment70.DEF = "hanim_l_midproximal"
HAnimSegment70.name = "l_midproximal"

HAnimJoint69.children.append(HAnimSegment70)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.DEF = "hanim_l_midtarsal"
HAnimJoint71.name = "l_midtarsal"
HAnimJoint71.center = [0.1086,0.0001,0.0368]
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.DEF = "hanim_l_middistal"
HAnimSegment72.name = "l_middistal"
HAnimSite73 = x3d.HAnimSite()
HAnimSite73.DEF = "hanim_l_metatarsal_pha1_pt"
HAnimSite73.name = "l_metatarsal_pha1_pt"
HAnimSite73.translation = [0.0816,0.0232,0.0106]

HAnimSegment72.children.append(HAnimSite73)

HAnimJoint71.children.append(HAnimSegment72)
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.DEF = "hanim_l_metatarsal"
HAnimJoint74.name = "l_metatarsal"
HAnimJoint74.center = [0.1086,0,0.0762]
HAnimSegment75 = x3d.HAnimSegment()
HAnimSegment75.DEF = "hanim_l_forefoot"
HAnimSegment75.name = "l_forefoot"
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.DEF = "hanim_l_forefoot_tip"
HAnimSite76.name = "l_forefoot_tip"
HAnimSite76.translation = [0.1354,0.0016,0.1476]

HAnimSegment75.children.append(HAnimSite76)
HAnimSite77 = x3d.HAnimSite()
HAnimSite77.DEF = "hanim_l_metatarsal_pha5_pt"
HAnimSite77.name = "l_metatarsal_pha5_pt"
HAnimSite77.translation = [0.1825,0.007,0.0928]

HAnimSegment75.children.append(HAnimSite77)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.DEF = "hanim_l_digit2_pt"
HAnimSite78.name = "l_digit2_pt"
HAnimSite78.translation = [0.1195,0.0079,0.1433]

HAnimSegment75.children.append(HAnimSite78)

HAnimJoint74.children.append(HAnimSegment75)

HAnimJoint71.children.append(HAnimJoint74)

HAnimJoint69.children.append(HAnimJoint71)

HAnimJoint63.children.append(HAnimJoint69)

HAnimJoint61.children.append(HAnimJoint63)

HAnimJoint56.children.append(HAnimJoint61)

HAnimJoint45.children.append(HAnimJoint56)
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.DEF = "hanim_r_hip"
HAnimJoint79.name = "r_hip"
HAnimJoint79.center = [-0.0961,0.9124,-0.0001]
HAnimSegment80 = x3d.HAnimSegment()
HAnimSegment80.DEF = "hanim_r_thigh"
HAnimSegment80.name = "r_thigh"
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.DEF = "hanim_r_knee_crease_pt"
HAnimSite81.name = "r_knee_crease_pt"
HAnimSite81.translation = [-0.0825,0.4932,-0.0326]

HAnimSegment80.children.append(HAnimSite81)
HAnimSite82 = x3d.HAnimSite()
HAnimSite82.DEF = "hanim_r_femoral_lateral_epicn_pt"
HAnimSite82.name = "r_femoral_lateral_epicn_pt"
HAnimSite82.translation = [-0.1421,0.4992,0.031]

HAnimSegment80.children.append(HAnimSite82)
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.DEF = "hanim_r_femoral_medial_epicn_pt"
HAnimSite83.name = "r_femoral_medial_epicn_pt"
HAnimSite83.translation = [-0.0221,0.5014,0.0289]

HAnimSegment80.children.append(HAnimSite83)

HAnimJoint79.children.append(HAnimSegment80)
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.DEF = "hanim_r_knee"
HAnimJoint84.name = "r_knee"
HAnimJoint84.center = [-0.104,0.4867,0.0308]
HAnimSegment85 = x3d.HAnimSegment()
HAnimSegment85.DEF = "hanim_r_calf"
HAnimSegment85.name = "r_calf"

HAnimJoint84.children.append(HAnimSegment85)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.DEF = "hanim_r_ankle"
HAnimJoint86.name = "r_ankle"
HAnimJoint86.center = [-0.1101,0.0656,-0.0736]
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.DEF = "hanim_r_hindfoot"
HAnimSegment87.name = "r_hindfoot"
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite88.name = "r_lateral_malleolus_pt"
HAnimSite88.translation = [-0.1006,0.0658,-0.1075]

HAnimSegment87.children.append(HAnimSite88)
HAnimSite89 = x3d.HAnimSite()
HAnimSite89.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite89.name = "r_medial_malleolus_pt"
HAnimSite89.translation = [-0.0591,0.076,-0.0928]

HAnimSegment87.children.append(HAnimSite89)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.DEF = "hanim_r_sphyrion_pt"
HAnimSite90.name = "r_sphyrion_pt"
HAnimSite90.translation = [-0.0603,0.061,-0.1002]

HAnimSegment87.children.append(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.DEF = "hanim_r_calcaneous_post_pt"
HAnimSite91.name = "r_calcaneous_post_pt"
HAnimSite91.translation = [-0.0692,0.0297,-0.1221]

HAnimSegment87.children.append(HAnimSite91)

HAnimJoint86.children.append(HAnimSegment87)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.DEF = "hanim_r_subtalar"
HAnimJoint92.name = "r_subtalar"
HAnimJoint92.center = [-0.1086,0.0001,-0.0368]
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.DEF = "hanim_r_midproximal"
HAnimSegment93.name = "r_midproximal"

HAnimJoint92.children.append(HAnimSegment93)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.DEF = "hanim_r_midtarsal"
HAnimJoint94.name = "r_midtarsal"
HAnimJoint94.center = [-0.1086,0.0001,0.0368]
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.DEF = "hanim_r_middistal"
HAnimSegment95.name = "r_middistal"
HAnimSite96 = x3d.HAnimSite()
HAnimSite96.DEF = "hanim_r_metatarsal_pha1_pt"
HAnimSite96.name = "r_metatarsal_pha1_pt"
HAnimSite96.translation = [-0.0521,0.026,0.0127]

HAnimSegment95.children.append(HAnimSite96)

HAnimJoint94.children.append(HAnimSegment95)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "hanim_r_metatarsal"
HAnimJoint97.name = "r_metatarsal"
HAnimJoint97.center = [-0.1086,0,0.0762]
HAnimSegment98 = x3d.HAnimSegment()
HAnimSegment98.DEF = "hanim_r_forefoot"
HAnimSegment98.name = "r_forefoot"
HAnimSite99 = x3d.HAnimSite()
HAnimSite99.DEF = "hanim_r_forefoot_tip"
HAnimSite99.name = "r_forefoot_tip"
HAnimSite99.translation = [-0.1043,0.0227,0.145]

HAnimSegment98.children.append(HAnimSite99)
HAnimSite100 = x3d.HAnimSite()
HAnimSite100.DEF = "hanim_r_metatarsal_pha5_pt"
HAnimSite100.name = "r_metatarsal_pha5_pt"
HAnimSite100.translation = [-0.1523,0.0166,0.0895]

HAnimSegment98.children.append(HAnimSite100)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.DEF = "hanim_r_digit2_pt"
HAnimSite101.name = "r_digit2_pt"
HAnimSite101.translation = [-0.0883,0.0134,0.1383]

HAnimSegment98.children.append(HAnimSite101)

HAnimJoint97.children.append(HAnimSegment98)

HAnimJoint94.children.append(HAnimJoint97)

HAnimJoint92.children.append(HAnimJoint94)

HAnimJoint86.children.append(HAnimJoint92)

HAnimJoint84.children.append(HAnimJoint86)

HAnimJoint79.children.append(HAnimJoint84)

HAnimJoint45.children.append(HAnimJoint79)

HAnimJoint43.children.append(HAnimJoint45)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.DEF = "hanim_vl5"
HAnimJoint102.name = "vl5"
HAnimJoint102.center = [0.0028,1.0568,-0.0776]
HAnimSegment103 = x3d.HAnimSegment()
HAnimSegment103.DEF = "hanim_l5"
HAnimSegment103.name = "l5"
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.DEF = "hanim_waist_preferred_post_pt"
HAnimSite104.name = "waist_preferred_post_pt"
HAnimSite104.translation = [0,1.0915,-0.1091]

HAnimSegment103.children.append(HAnimSite104)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.DEF = "hanim_navel_pt"
HAnimSite105.name = "navel_pt"
HAnimSite105.translation = [0.0069,1.0966,0.1017]

HAnimSegment103.children.append(HAnimSite105)

HAnimJoint102.children.append(HAnimSegment103)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.DEF = "hanim_vl4"
HAnimJoint106.name = "vl4"
HAnimJoint106.center = [0.0035,1.0925,-0.0787]
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.DEF = "hanim_l4"
HAnimSegment107.name = "l4"

HAnimJoint106.children.append(HAnimSegment107)
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.DEF = "hanim_vl3"
HAnimJoint108.name = "vl3"
HAnimJoint108.center = [0.0041,1.1276,-0.0796]
HAnimSegment109 = x3d.HAnimSegment()
HAnimSegment109.DEF = "hanim_l3"
HAnimSegment109.name = "l3"

HAnimJoint108.children.append(HAnimSegment109)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.DEF = "hanim_vl2"
HAnimJoint110.name = "vl2"
HAnimJoint110.center = [0.0045,1.1546,-0.08]
HAnimSegment111 = x3d.HAnimSegment()
HAnimSegment111.DEF = "hanim_l2"
HAnimSegment111.name = "l2"
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.DEF = "hanim_r_rib10_pt"
HAnimSite112.name = "r_rib10_pt"
HAnimSite112.translation = [-0.0711,1.1941,0.1016]

HAnimSegment111.children.append(HAnimSite112)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.DEF = "hanim_l_rib10_pt"
HAnimSite113.name = "l_rib10_pt"
HAnimSite113.translation = [0.0871,1.1925,0.0992]

HAnimSegment111.children.append(HAnimSite113)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.DEF = "hanim_rib10_midspine_pt"
HAnimSite114.name = "rib10_midspine_pt"
HAnimSite114.translation = [0.0049,1.1908,-0.1113]

HAnimSegment111.children.append(HAnimSite114)

HAnimJoint110.children.append(HAnimSegment111)
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.DEF = "hanim_vl1"
HAnimJoint115.name = "vl1"
HAnimJoint115.center = [0.0048,1.1912,-0.0805]
HAnimSegment116 = x3d.HAnimSegment()
HAnimSegment116.DEF = "hanim_l1"
HAnimSegment116.name = "l1"

HAnimJoint115.children.append(HAnimSegment116)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "hanim_vt12"
HAnimJoint117.name = "vt12"
HAnimJoint117.center = [0.0051,1.2278,-0.0808]
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.DEF = "hanim_t12"
HAnimSegment118.name = "t12"

HAnimJoint117.children.append(HAnimSegment118)
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.DEF = "hanim_vt11"
HAnimJoint119.name = "vt11"
HAnimJoint119.center = [0.0053,1.2679,-0.081]
HAnimSegment120 = x3d.HAnimSegment()
HAnimSegment120.DEF = "hanim_t11"
HAnimSegment120.name = "t11"

HAnimJoint119.children.append(HAnimSegment120)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.DEF = "hanim_vt10"
HAnimJoint121.name = "vt10"
HAnimJoint121.center = [0.0056,1.2848,-0.0822]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.DEF = "hanim_t10"
HAnimSegment122.name = "t10"
HAnimSite123 = x3d.HAnimSite()
HAnimSite123.DEF = "hanim_substernale_pt"
HAnimSite123.name = "substernale_pt"
HAnimSite123.translation = [0.0085,1.2995,0.1147]

HAnimSegment122.children.append(HAnimSite123)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.DEF = "hanim_vt9"
HAnimJoint124.name = "vt9"
HAnimJoint124.center = [0.0057,1.3126,-0.0838]
HAnimSegment125 = x3d.HAnimSegment()
HAnimSegment125.DEF = "hanim_t9"
HAnimSegment125.name = "t9"
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.DEF = "hanim_r_thelion_pt"
HAnimSite126.name = "r_thelion_pt"
HAnimSite126.translation = [-0.0736,1.3385,0.1217]

HAnimSegment125.children.append(HAnimSite126)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.DEF = "hanim_l_thelion_pt"
HAnimSite127.name = "l_thelion_pt"
HAnimSite127.translation = [0.0918,1.3382,0.1192]

HAnimSegment125.children.append(HAnimSite127)

HAnimJoint124.children.append(HAnimSegment125)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "hanim_vt8"
HAnimJoint128.name = "vt8"
HAnimJoint128.center = [0.0057,1.3382,-0.0845]
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.DEF = "hanim_t8"
HAnimSegment129.name = "t8"

HAnimJoint128.children.append(HAnimSegment129)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.DEF = "hanim_vt7"
HAnimJoint130.name = "vt7"
HAnimJoint130.center = [0.0058,1.3625,-0.0833]
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.DEF = "hanim_t7"
HAnimSegment131.name = "t7"

HAnimJoint130.children.append(HAnimSegment131)
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.DEF = "hanim_vt6"
HAnimJoint132.name = "vt6"
HAnimJoint132.center = [0.0059,1.3866,-0.08]
HAnimSegment133 = x3d.HAnimSegment()
HAnimSegment133.DEF = "hanim_t6"
HAnimSegment133.name = "t6"

HAnimJoint132.children.append(HAnimSegment133)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.DEF = "hanim_vt5"
HAnimJoint134.name = "vt5"
HAnimJoint134.center = [0.006,1.4102,-0.0745]
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.DEF = "hanim_t5"
HAnimSegment135.name = "t5"

HAnimJoint134.children.append(HAnimSegment135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.DEF = "hanim_vt4"
HAnimJoint136.name = "vt4"
HAnimJoint136.center = [0.0061,1.432,-0.0675]
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.DEF = "hanim_t4"
HAnimSegment137.name = "t4"

HAnimJoint136.children.append(HAnimSegment137)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.DEF = "hanim_vt3"
HAnimJoint138.name = "vt3"
HAnimJoint138.center = [0.0062,1.4583,-0.057]
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.DEF = "hanim_t3"
HAnimSegment139.name = "t3"

HAnimJoint138.children.append(HAnimSegment139)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.DEF = "hanim_vt2"
HAnimJoint140.name = "vt2"
HAnimJoint140.center = [0.0063,1.4761,-0.0484]
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.DEF = "hanim_t2"
HAnimSegment141.name = "t2"

HAnimJoint140.children.append(HAnimSegment141)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.DEF = "hanim_vt1"
HAnimJoint142.name = "vt1"
HAnimJoint142.center = [0.0065,1.4951,-0.0387]
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.DEF = "hanim_t1"
HAnimSegment143.name = "t1"
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.DEF = "hanim_suprasternale_pt"
HAnimSite144.name = "suprasternale_pt"
HAnimSite144.translation = [0.0084,1.4714,0.0551]

HAnimSegment143.children.append(HAnimSite144)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.DEF = "hanim_cervicale_pt"
HAnimSite145.name = "cervicale_pt"
HAnimSite145.translation = [0.0064,1.52,-0.0815]

HAnimSegment143.children.append(HAnimSite145)

HAnimJoint142.children.append(HAnimSegment143)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.DEF = "hanim_vc7"
HAnimJoint146.name = "vc7"
HAnimJoint146.center = [0.0066,1.5132,-0.0301]
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.DEF = "hanim_c7"
HAnimSegment147.name = "c7"
HAnimSite148 = x3d.HAnimSite()
HAnimSite148.DEF = "hanim_r_neck_base_pt"
HAnimSite148.name = "r_neck_base_pt"
HAnimSite148.translation = [-0.0419,1.5149,-0.022]

HAnimSegment147.children.append(HAnimSite148)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.DEF = "hanim_l_neck_base_pt"
HAnimSite149.name = "l_neck_base_pt"
HAnimSite149.translation = [0.0646,1.5141,-0.038]

HAnimSegment147.children.append(HAnimSite149)

HAnimJoint146.children.append(HAnimSegment147)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.DEF = "hanim_vc6"
HAnimJoint150.name = "vc6"
HAnimJoint150.center = [0.0066,1.5357,-0.0143]
HAnimSegment151 = x3d.HAnimSegment()
HAnimSegment151.DEF = "hanim_c6"
HAnimSegment151.name = "c6"

HAnimJoint150.children.append(HAnimSegment151)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.DEF = "hanim_vc5"
HAnimJoint152.name = "vc5"
HAnimJoint152.center = [0.0066,1.552,-0.0082]
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.DEF = "hanim_c5"
HAnimSegment153.name = "c5"

HAnimJoint152.children.append(HAnimSegment153)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.DEF = "hanim_vc4"
HAnimJoint154.name = "vc4"
HAnimJoint154.center = [0.0066,1.5662,-0.0084]
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.DEF = "hanim_c4"
HAnimSegment155.name = "c4"

HAnimJoint154.children.append(HAnimSegment155)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.DEF = "hanim_vc3"
HAnimJoint156.name = "vc3"
HAnimJoint156.center = [0.0066,1.58,-0.0103]
HAnimSegment157 = x3d.HAnimSegment()
HAnimSegment157.DEF = "hanim_c3"
HAnimSegment157.name = "c3"

HAnimJoint156.children.append(HAnimSegment157)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.DEF = "hanim_vc2"
HAnimJoint158.name = "vc2"
HAnimJoint158.center = [0.0066,1.5928,-0.0103]
HAnimSegment159 = x3d.HAnimSegment()
HAnimSegment159.DEF = "hanim_c2"
HAnimSegment159.name = "c2"

HAnimJoint158.children.append(HAnimSegment159)
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.DEF = "hanim_vc1"
HAnimJoint160.name = "vc1"
HAnimJoint160.center = [0.0066,1.6144,-0.0034]
HAnimSegment161 = x3d.HAnimSegment()
HAnimSegment161.DEF = "hanim_c1"
HAnimSegment161.name = "c1"

HAnimJoint160.children.append(HAnimSegment161)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.DEF = "hanim_skullbase"
HAnimJoint162.name = "skullbase"
HAnimJoint162.center = [0.0044,1.6209,0.0236]
HAnimSegment163 = x3d.HAnimSegment()
HAnimSegment163.DEF = "hanim_skull"
HAnimSegment163.name = "skull"
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.DEF = "hanim_skull_tip"
HAnimSite164.name = "skull_tip"
HAnimSite164.translation = [0.005,1.7504,0.0055]

HAnimSegment163.children.append(HAnimSite164)
HAnimSite165 = x3d.HAnimSite()
HAnimSite165.DEF = "hanim_sellion_pt"
HAnimSite165.name = "sellion_pt"
HAnimSite165.translation = [0.0058,1.6316,0.0852]

HAnimSegment163.children.append(HAnimSite165)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.DEF = "hanim_r_infraorbitale_pt"
HAnimSite166.name = "r_infraorbitale_pt"
HAnimSite166.translation = [-0.0237,1.6171,0.0752]

HAnimSegment163.children.append(HAnimSite166)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.DEF = "hanim_l_infraorbitale_pt"
HAnimSite167.name = "l_infraorbitale_pt"
HAnimSite167.translation = [0.0341,1.6171,0.0752]

HAnimSegment163.children.append(HAnimSite167)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.DEF = "hanim_supramenton_pt"
HAnimSite168.name = "supramenton_pt"
HAnimSite168.translation = [0.0061,1.541,0.0805]

HAnimSegment163.children.append(HAnimSite168)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.DEF = "hanim_r_tragion_pt"
HAnimSite169.name = "r_tragion_pt"
HAnimSite169.translation = [-0.0646,1.6347,0.0302]

HAnimSegment163.children.append(HAnimSite169)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.DEF = "hanim_r_gonion_pt"
HAnimSite170.name = "r_gonion_pt"
HAnimSite170.translation = [-0.052,1.5529,0.0347]

HAnimSegment163.children.append(HAnimSite170)
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.DEF = "hanim_l_tragion_pt"
HAnimSite171.name = "l_tragion_pt"
HAnimSite171.translation = [0.0739,1.6348,0.0282]

HAnimSegment163.children.append(HAnimSite171)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.DEF = "hanim_l_gonion_pt"
HAnimSite172.name = "l_gonion_pt"
HAnimSite172.translation = [0.0631,1.553,0.033]

HAnimSegment163.children.append(HAnimSite172)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.DEF = "hanim_nuchale_pt"
HAnimSite173.name = "nuchale_pt"
HAnimSite173.translation = [0.0039,1.5972,-0.0796]

HAnimSegment163.children.append(HAnimSite173)

HAnimJoint162.children.append(HAnimSegment163)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.DEF = "hanim_l_eyeball_joint"
HAnimJoint174.name = "l_eyeball_joint"
HAnimJoint174.center = [0.0336,1.6332,0.0502]
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.DEF = "hanim_l_eyeball"
HAnimSegment175.name = "l_eyeball"
HAnimSite176 = x3d.HAnimSite()
HAnimSite176.DEF = "hanim_l_eyeball_site_view"
HAnimSite176.name = "l_eyeball_site_view"
HAnimSite176.translation = [0.034,1.64,0.05]
Viewpoint177 = x3d.Viewpoint()
Viewpoint177.DEF = "hanim_l_eyeball_site_viewpoint"
Viewpoint177.description = "l_eyeball_site_viewpoint looking forward"
Viewpoint177.position = [0,0,0]
Viewpoint177.orientation = [0,1,0,3.141593]

HAnimSite176.children.append(Viewpoint177)

HAnimSegment175.children.append(HAnimSite176)

HAnimJoint174.children.append(HAnimSegment175)

HAnimJoint162.children.append(HAnimJoint174)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.DEF = "hanim_l_eyelid_joint"
HAnimJoint178.name = "l_eyelid_joint"
HAnimJoint178.center = [0.0336,1.6332,0.0502]
HAnimSegment179 = x3d.HAnimSegment()
HAnimSegment179.DEF = "hanim_l_eyelid"
HAnimSegment179.name = "l_eyelid"

HAnimJoint178.children.append(HAnimSegment179)

HAnimJoint162.children.append(HAnimJoint178)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.DEF = "hanim_l_eyebrow_joint"
HAnimJoint180.name = "l_eyebrow_joint"
HAnimJoint180.center = [0.0336,1.635,0.0506]
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.DEF = "hanim_l_eyebrow"
HAnimSegment181.name = "l_eyebrow"

HAnimJoint180.children.append(HAnimSegment181)

HAnimJoint162.children.append(HAnimJoint180)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.DEF = "hanim_r_eyeball_joint"
HAnimJoint182.name = "r_eyeball_joint"
HAnimJoint182.center = [-0.0336,1.6332,0.0502]
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.DEF = "hanim_r_eyeball"
HAnimSegment183.name = "r_eyeball"
HAnimSite184 = x3d.HAnimSite()
HAnimSite184.DEF = "hanim_r_eyeball_site_view"
HAnimSite184.name = "r_eyeball_site_view"
HAnimSite184.translation = [-0.034,1.64,0.05]
Viewpoint185 = x3d.Viewpoint()
Viewpoint185.DEF = "hanim_r_eyeball_site_viewpoint"
Viewpoint185.description = "r_eyeball_site_viewpoint looking forward"
Viewpoint185.position = [0,0,0]
Viewpoint185.orientation = [0,1,0,3.141593]

HAnimSite184.children.append(Viewpoint185)

HAnimSegment183.children.append(HAnimSite184)

HAnimJoint182.children.append(HAnimSegment183)

HAnimJoint162.children.append(HAnimJoint182)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.DEF = "hanim_r_eyelid_joint"
HAnimJoint186.name = "r_eyelid_joint"
HAnimJoint186.center = [-0.0336,1.6332,0.0502]
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.DEF = "hanim_r_eyelid"
HAnimSegment187.name = "r_eyelid"

HAnimJoint186.children.append(HAnimSegment187)

HAnimJoint162.children.append(HAnimJoint186)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.DEF = "hanim_r_eyebrow_joint"
HAnimJoint188.name = "r_eyebrow_joint"
HAnimJoint188.center = [-0.0336,1.635,0.0506]
HAnimSegment189 = x3d.HAnimSegment()
HAnimSegment189.DEF = "hanim_r_eyebrow"
HAnimSegment189.name = "r_eyebrow"

HAnimJoint188.children.append(HAnimSegment189)

HAnimJoint162.children.append(HAnimJoint188)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.DEF = "hanim_temporomandibular"
HAnimJoint190.name = "temporomandibular"
HAnimJoint190.center = [0,1.63,0.015]
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.DEF = "hanim_jaw"
HAnimSegment191.name = "jaw"
HAnimSite192 = x3d.HAnimSite()
HAnimSite192.DEF = "hanim_temporomandibular_l_site_pt"
HAnimSite192.name = "temporomandibular_l_site_pt"
HAnimSite192.translation = [0.045,1.63,0]

HAnimSegment191.children.append(HAnimSite192)
HAnimSite193 = x3d.HAnimSite()
HAnimSite193.DEF = "hanim_temporomandibular_r_site_pt"
HAnimSite193.name = "temporomandibular_r_site_pt"
HAnimSite193.translation = [-0.045,1.63,0]

HAnimSegment191.children.append(HAnimSite193)

HAnimJoint190.children.append(HAnimSegment191)

HAnimJoint162.children.append(HAnimJoint190)

HAnimJoint160.children.append(HAnimJoint162)

HAnimJoint158.children.append(HAnimJoint160)

HAnimJoint156.children.append(HAnimJoint158)

HAnimJoint154.children.append(HAnimJoint156)

HAnimJoint152.children.append(HAnimJoint154)

HAnimJoint150.children.append(HAnimJoint152)

HAnimJoint146.children.append(HAnimJoint150)

HAnimJoint142.children.append(HAnimJoint146)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.DEF = "hanim_l_sternoclavicular"
HAnimJoint194.name = "l_sternoclavicular"
HAnimJoint194.center = [0.082,1.4488,-0.0353]
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.DEF = "hanim_l_clavicle"
HAnimSegment195.name = "l_clavicle"
HAnimSite196 = x3d.HAnimSite()
HAnimSite196.DEF = "hanim_l_clavicale_pt"
HAnimSite196.name = "l_clavicale_pt"
HAnimSite196.translation = [0.0271,1.4943,0.0394]

HAnimSegment195.children.append(HAnimSite196)
HAnimSite197 = x3d.HAnimSite()
HAnimSite197.DEF = "hanim_l_acromion_pt"
HAnimSite197.name = "l_acromion_pt"
HAnimSite197.translation = [0.2032,1.476,-0.049]

HAnimSegment195.children.append(HAnimSite197)
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.DEF = "hanim_l_axilla_ant_pt"
HAnimSite198.name = "l_axilla_ant_pt"
HAnimSite198.translation = [0.1777,1.4065,-0.0075]

HAnimSegment195.children.append(HAnimSite198)
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.DEF = "hanim_l_axilla_post_pt"
HAnimSite199.name = "l_axilla_post_pt"
HAnimSite199.translation = [0.1706,1.4072,-0.0875]

HAnimSegment195.children.append(HAnimSite199)

HAnimJoint194.children.append(HAnimSegment195)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.DEF = "hanim_l_acromioclavicular"
HAnimJoint200.name = "l_acromioclavicular"
HAnimJoint200.center = [0.0962,1.4269,-0.0424]
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.DEF = "hanim_l_scapula"
HAnimSegment201.name = "l_scapula"

HAnimJoint200.children.append(HAnimSegment201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.DEF = "hanim_l_shoulder"
HAnimJoint202.name = "l_shoulder"
HAnimJoint202.center = [0.2029,1.4376,-0.0387]
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.DEF = "hanim_l_upperarm"
HAnimSegment203.name = "l_upperarm"
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.DEF = "hanim_l_humeral_lateral_epicn_pt"
HAnimSite204.name = "l_humeral_lateral_epicn_pt"
HAnimSite204.translation = [0.228,1.1482,-0.11]

HAnimSegment203.children.append(HAnimSite204)

HAnimJoint202.children.append(HAnimSegment203)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.DEF = "hanim_l_elbow"
HAnimJoint205.name = "l_elbow"
HAnimJoint205.center = [0.2014,1.1357,-0.0682]
HAnimSegment206 = x3d.HAnimSegment()
HAnimSegment206.DEF = "hanim_l_forearm"
HAnimSegment206.name = "l_forearm"
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.DEF = "hanim_l_radial_styloid_pt"
HAnimSite207.name = "l_radial_styloid_pt"
HAnimSite207.translation = [0.1901,0.8645,-0.0415]

HAnimSegment206.children.append(HAnimSite207)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.DEF = "hanim_l_olecranon_pt"
HAnimSite208.name = "l_olecranon_pt"
HAnimSite208.translation = [0.1962,1.1375,-0.1123]

HAnimSegment206.children.append(HAnimSite208)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.DEF = "hanim_l_humeral_medial_epicn_pt"
HAnimSite209.name = "l_humeral_medial_epicn_pt"
HAnimSite209.translation = [0.1735,1.1272,-0.1113]

HAnimSegment206.children.append(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.DEF = "hanim_l_radiale_pt"
HAnimSite210.name = "l_radiale_pt"
HAnimSite210.translation = [0.2182,1.1212,-0.1167]

HAnimSegment206.children.append(HAnimSite210)

HAnimJoint205.children.append(HAnimSegment206)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.DEF = "hanim_l_wrist"
HAnimJoint211.name = "l_wrist"
HAnimJoint211.center = [0.1984,0.8663,-0.0583]
HAnimSegment212 = x3d.HAnimSegment()
HAnimSegment212.DEF = "hanim_l_hand"
HAnimSegment212.name = "l_hand"
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.DEF = "hanim_l_metacarpal_pha2_pt"
HAnimSite213.name = "l_metacarpal_pha2_pt"
HAnimSite213.translation = [0.2009,0.8139,-0.0237]

HAnimSegment212.children.append(HAnimSite213)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite214.name = "l_ulnar_styloid_pt"
HAnimSite214.translation = [0.2142,0.8529,-0.0648]

HAnimSegment212.children.append(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.DEF = "hanim_l_metacarpal_pha5_pt"
HAnimSite215.name = "l_metacarpal_pha5_pt"
HAnimSite215.translation = [0.1929,0.786,-0.1122]

HAnimSegment212.children.append(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.DEF = "hanim_l_hand_front_view"
HAnimSite216.name = "l_hand_front_view"
HAnimSite216.translation = [0.3,0.75,0.45]
Viewpoint217 = x3d.Viewpoint()
Viewpoint217.DEF = "hanim_l_hand_front_viewpoint"
Viewpoint217.description = "left hand front"
Viewpoint217.position = [0,0,0]
Viewpoint217.centerOfRotation = [0,0.7,0]

HAnimSite216.children.append(Viewpoint217)

HAnimSegment212.children.append(HAnimSite216)

HAnimJoint211.children.append(HAnimSegment212)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.DEF = "hanim_l_thumb1"
HAnimJoint218.name = "l_thumb1"
HAnimJoint218.center = [0.1924,0.8472,-0.0534]
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.DEF = "hanim_l_thumb_metacarpal"
HAnimSegment219.name = "l_thumb_metacarpal"

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.DEF = "hanim_l_thumb2"
HAnimJoint220.name = "l_thumb2"
HAnimJoint220.center = [0.1951,0.8226,0.0246]
HAnimSegment221 = x3d.HAnimSegment()
HAnimSegment221.DEF = "hanim_l_thumb_proximal"
HAnimSegment221.name = "l_thumb_proximal"

HAnimJoint220.children.append(HAnimSegment221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.DEF = "hanim_l_thumb3"
HAnimJoint222.name = "l_thumb3"
HAnimJoint222.center = [0.1955,0.8159,0.0464]
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.DEF = "hanim_l_thumb_distal"
HAnimSegment223.name = "l_thumb_distal"
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.DEF = "hanim_l_thumb_distal_tip"
HAnimSite224.name = "l_thumb_distal_tip"
HAnimSite224.translation = [0.1982,0.8061,0.0759]

HAnimSegment223.children.append(HAnimSite224)

HAnimJoint222.children.append(HAnimSegment223)

HAnimJoint220.children.append(HAnimJoint222)

HAnimJoint218.children.append(HAnimJoint220)

HAnimJoint211.children.append(HAnimJoint218)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.DEF = "hanim_l_index0"
HAnimJoint225.name = "l_index0"
HAnimJoint225.center = [0.1983,0.8024,-0.028]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.DEF = "hanim_l_index_metacarpal"
HAnimSegment226.name = "l_index_metacarpal"

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.DEF = "hanim_l_index1"
HAnimJoint227.name = "l_index1"
HAnimJoint227.center = [0.1983,0.7815,-0.028]
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.DEF = "hanim_l_index_proximal"
HAnimSegment228.name = "l_index_proximal"

HAnimJoint227.children.append(HAnimSegment228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.DEF = "hanim_l_index2"
HAnimJoint229.name = "l_index2"
HAnimJoint229.center = [0.2017,0.7363,-0.0248]
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.DEF = "hanim_l_index_middle"
HAnimSegment230.name = "l_index_middle"

HAnimJoint229.children.append(HAnimSegment230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.DEF = "hanim_l_index3"
HAnimJoint231.name = "l_index3"
HAnimJoint231.center = [0.2028,0.7139,-0.0236]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.DEF = "hanim_l_index_distal"
HAnimSegment232.name = "l_index_distal"
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.DEF = "hanim_l_index_distal_tip"
HAnimSite233.name = "l_index_distal_tip"
HAnimSite233.translation = [0.2089,0.6858,-0.0245]

HAnimSegment232.children.append(HAnimSite233)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.DEF = "hanim_l_dactylion_pt"
HAnimSite234.name = "l_dactylion_pt"
HAnimSite234.translation = [0.2056,0.6743,-0.0482]

HAnimSegment232.children.append(HAnimSite234)

HAnimJoint231.children.append(HAnimSegment232)

HAnimJoint229.children.append(HAnimJoint231)

HAnimJoint227.children.append(HAnimJoint229)

HAnimJoint225.children.append(HAnimJoint227)

HAnimJoint211.children.append(HAnimJoint225)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.DEF = "hanim_l_middle0"
HAnimJoint235.name = "l_middle0"
HAnimJoint235.center = [0.1987,0.8029,-0.053]
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.DEF = "hanim_l_middle_metacarpal"
HAnimSegment236.name = "l_middle_metacarpal"

HAnimJoint235.children.append(HAnimSegment236)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.DEF = "hanim_l_middle1"
HAnimJoint237.name = "l_middle1"
HAnimJoint237.center = [0.1987,0.7818,-0.053]
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.DEF = "hanim_l_middle_proximal"
HAnimSegment238.name = "l_middle_proximal"

HAnimJoint237.children.append(HAnimSegment238)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.DEF = "hanim_l_middle2"
HAnimJoint239.name = "l_middle2"
HAnimJoint239.center = [0.2013,0.7273,-0.0503]
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.DEF = "hanim_l_middle_middle"
HAnimSegment240.name = "l_middle_middle"

HAnimJoint239.children.append(HAnimSegment240)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.DEF = "hanim_l_middle3"
HAnimJoint241.name = "l_middle3"
HAnimJoint241.center = [0.2026,0.7011,-0.0494]
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.DEF = "hanim_l_middle_distal"
HAnimSegment242.name = "l_middle_distal"
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.DEF = "hanim_l_middle_distal_tip"
HAnimSite243.name = "l_middle_distal_tip"
HAnimSite243.translation = [0.208,0.6731,-0.0491]

HAnimSegment242.children.append(HAnimSite243)

HAnimJoint241.children.append(HAnimSegment242)

HAnimJoint239.children.append(HAnimJoint241)

HAnimJoint237.children.append(HAnimJoint239)

HAnimJoint235.children.append(HAnimJoint237)

HAnimJoint211.children.append(HAnimJoint235)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.DEF = "hanim_l_ring0"
HAnimJoint244.name = "l_ring0"
HAnimJoint244.center = [0.1956,0.8019,-0.0794]
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.DEF = "hanim_l_ring_metacarpal"
HAnimSegment245.name = "l_ring_metacarpal"

HAnimJoint244.children.append(HAnimSegment245)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.DEF = "hanim_l_ring1"
HAnimJoint246.name = "l_ring1"
HAnimJoint246.center = [0.1956,0.7815,-0.0794]
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.DEF = "hanim_l_ring_proximal"
HAnimSegment247.name = "l_ring_proximal"

HAnimJoint246.children.append(HAnimSegment247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.DEF = "hanim_l_ring2"
HAnimJoint248.name = "l_ring2"
HAnimJoint248.center = [0.1973,0.7287,-0.0777]
HAnimSegment249 = x3d.HAnimSegment()
HAnimSegment249.DEF = "hanim_l_ring_middle"
HAnimSegment249.name = "l_ring_middle"

HAnimJoint248.children.append(HAnimSegment249)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.DEF = "hanim_l_ring3"
HAnimJoint250.name = "l_ring3"
HAnimJoint250.center = [0.1983,0.7045,-0.0767]
HAnimSegment251 = x3d.HAnimSegment()
HAnimSegment251.DEF = "hanim_l_ring_distal"
HAnimSegment251.name = "l_ring_distal"
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.DEF = "hanim_l_ring_distal_tip"
HAnimSite252.name = "l_ring_distal_tip"
HAnimSite252.translation = [0.2035,0.675,-0.0756]

HAnimSegment251.children.append(HAnimSite252)

HAnimJoint250.children.append(HAnimSegment251)

HAnimJoint248.children.append(HAnimJoint250)

HAnimJoint246.children.append(HAnimJoint248)

HAnimJoint244.children.append(HAnimJoint246)

HAnimJoint211.children.append(HAnimJoint244)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.DEF = "hanim_l_pinky0"
HAnimJoint253.name = "l_pinky0"
HAnimJoint253.center = [0.1925,0.8066,-0.1036]
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.DEF = "hanim_l_pinky_metacarpal"
HAnimSegment254.name = "l_pinky_metacarpal"

HAnimJoint253.children.append(HAnimSegment254)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.DEF = "hanim_l_pinky1"
HAnimJoint255.name = "l_pinky1"
HAnimJoint255.center = [0.1925,0.7866,-0.1036]
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.DEF = "hanim_l_pinky_proximal"
HAnimSegment256.name = "l_pinky_proximal"

HAnimJoint255.children.append(HAnimSegment256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.DEF = "hanim_l_pinky2"
HAnimJoint257.name = "l_pinky2"
HAnimJoint257.center = [0.1938,0.7452,-0.1024]
HAnimSegment258 = x3d.HAnimSegment()
HAnimSegment258.DEF = "hanim_l_pinky_middle"
HAnimSegment258.name = "l_pinky_middle"

HAnimJoint257.children.append(HAnimSegment258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.DEF = "hanim_l_pinky3"
HAnimJoint259.name = "l_pinky3"
HAnimJoint259.center = [0.1948,0.7277,-0.1017]
HAnimSegment260 = x3d.HAnimSegment()
HAnimSegment260.DEF = "hanim_l_pinky_distal"
HAnimSegment260.name = "l_pinky_distal"
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.DEF = "hanim_l_pinky_distal_tip"
HAnimSite261.name = "l_pinky_distal_tip"
HAnimSite261.translation = [0.2014,0.7009,-0.1012]

HAnimSegment260.children.append(HAnimSite261)

HAnimJoint259.children.append(HAnimSegment260)

HAnimJoint257.children.append(HAnimJoint259)

HAnimJoint255.children.append(HAnimJoint257)

HAnimJoint253.children.append(HAnimJoint255)

HAnimJoint211.children.append(HAnimJoint253)

HAnimJoint205.children.append(HAnimJoint211)

HAnimJoint202.children.append(HAnimJoint205)

HAnimJoint200.children.append(HAnimJoint202)

HAnimJoint194.children.append(HAnimJoint200)

HAnimJoint142.children.append(HAnimJoint194)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.DEF = "hanim_r_sternoclavicular"
HAnimJoint262.name = "r_sternoclavicular"
HAnimJoint262.center = [-0.082,1.4488,-0.0353]
HAnimSegment263 = x3d.HAnimSegment()
HAnimSegment263.DEF = "hanim_r_clavicle"
HAnimSegment263.name = "r_clavicle"
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.DEF = "hanim_r_clavicale_pt"
HAnimSite264.name = "r_clavicale_pt"
HAnimSite264.translation = [-0.0115,1.4943,0.04]

HAnimSegment263.children.append(HAnimSite264)
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.DEF = "hanim_r_acromion_pt"
HAnimSite265.name = "r_acromion_pt"
HAnimSite265.translation = [-0.1905,1.4791,-0.0431]

HAnimSegment263.children.append(HAnimSite265)
HAnimSite266 = x3d.HAnimSite()
HAnimSite266.DEF = "hanim_r_axilla_ant_pt"
HAnimSite266.name = "r_axilla_ant_pt"
HAnimSite266.translation = [-0.1626,1.4072,-0.0031]

HAnimSegment263.children.append(HAnimSite266)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.DEF = "hanim_r_axilla_post_pt"
HAnimSite267.name = "r_axilla_post_pt"
HAnimSite267.translation = [-0.1603,1.4098,-0.0826]

HAnimSegment263.children.append(HAnimSite267)

HAnimJoint262.children.append(HAnimSegment263)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.DEF = "hanim_r_acromioclavicular"
HAnimJoint268.name = "r_acromioclavicular"
HAnimJoint268.center = [-0.0962,1.4269,-0.0424]
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.DEF = "hanim_r_scapula"
HAnimSegment269.name = "r_scapula"

HAnimJoint268.children.append(HAnimSegment269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.DEF = "hanim_r_shoulder"
HAnimJoint270.name = "r_shoulder"
HAnimJoint270.center = [-0.2029,1.4376,-0.0387]
HAnimSegment271 = x3d.HAnimSegment()
HAnimSegment271.DEF = "hanim_r_upperarm"
HAnimSegment271.name = "r_upperarm"
HAnimSite272 = x3d.HAnimSite()
HAnimSite272.DEF = "hanim_r_humeral_lateral_epicn_pt"
HAnimSite272.name = "r_humeral_lateral_epicn_pt"
HAnimSite272.translation = [-0.2224,1.1517,-0.1033]

HAnimSegment271.children.append(HAnimSite272)

HAnimJoint270.children.append(HAnimSegment271)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.DEF = "hanim_r_elbow"
HAnimJoint273.name = "r_elbow"
HAnimJoint273.center = [-0.2014,1.1357,-0.0682]
HAnimSegment274 = x3d.HAnimSegment()
HAnimSegment274.DEF = "hanim_r_forearm"
HAnimSegment274.name = "r_forearm"
HAnimSite275 = x3d.HAnimSite()
HAnimSite275.DEF = "hanim_r_radial_styloid_pt"
HAnimSite275.name = "r_radial_styloid_pt"
HAnimSite275.translation = [-0.1884,0.8676,-0.036]

HAnimSegment274.children.append(HAnimSite275)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.DEF = "hanim_r_olecranon_pt"
HAnimSite276.name = "r_olecranon_pt"
HAnimSite276.translation = [-0.1907,1.1405,-0.1065]

HAnimSegment274.children.append(HAnimSite276)
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.DEF = "hanim_r_humeral_medial_epicn_pt"
HAnimSite277.name = "r_humeral_medial_epicn_pt"
HAnimSite277.translation = [-0.168,1.1298,-0.1062]

HAnimSegment274.children.append(HAnimSite277)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.DEF = "hanim_r_radiale_pt"
HAnimSite278.name = "r_radiale_pt"
HAnimSite278.translation = [-0.213,1.1305,-0.1091]

HAnimSegment274.children.append(HAnimSite278)

HAnimJoint273.children.append(HAnimSegment274)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.DEF = "hanim_r_wrist"
HAnimJoint279.name = "r_wrist"
HAnimJoint279.center = [-0.1984,0.8663,-0.0583]
HAnimSegment280 = x3d.HAnimSegment()
HAnimSegment280.DEF = "hanim_r_hand"
HAnimSegment280.name = "r_hand"
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.DEF = "hanim_r_metacarpal_pha2_pt"
HAnimSite281.name = "r_metacarpal_pha2_pt"
HAnimSite281.translation = [-0.1977,0.8169,-0.0177]

HAnimSegment280.children.append(HAnimSite281)
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite282.name = "r_ulnar_styloid_pt"
HAnimSite282.translation = [-0.2117,0.8562,-0.0584]

HAnimSegment280.children.append(HAnimSite282)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.DEF = "hanim_r_metacarpal_pha5_pt"
HAnimSite283.name = "r_metacarpal_pha5_pt"
HAnimSite283.translation = [-0.1929,0.789,-0.1064]

HAnimSegment280.children.append(HAnimSite283)
HAnimSite284 = x3d.HAnimSite()
HAnimSite284.DEF = "hanim_r_hand_front_view"
HAnimSite284.name = "r_hand_front_view"
HAnimSite284.translation = [-0.3,0.75,0.45]
Viewpoint285 = x3d.Viewpoint()
Viewpoint285.DEF = "hanim_r_hand_front_viewpoint"
Viewpoint285.description = "right hand front"
Viewpoint285.position = [0,0,0]
Viewpoint285.centerOfRotation = [0,0.7,0]

HAnimSite284.children.append(Viewpoint285)

HAnimSegment280.children.append(HAnimSite284)

HAnimJoint279.children.append(HAnimSegment280)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.DEF = "hanim_r_thumb1"
HAnimJoint286.name = "r_thumb1"
HAnimJoint286.center = [-0.1924,0.8472,-0.0534]
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.DEF = "hanim_r_thumb_metacarpal"
HAnimSegment287.name = "r_thumb_metacarpal"

HAnimJoint286.children.append(HAnimSegment287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.DEF = "hanim_r_thumb2"
HAnimJoint288.name = "r_thumb2"
HAnimJoint288.center = [-0.1951,0.8226,0.0246]
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.DEF = "hanim_r_thumb_proximal"
HAnimSegment289.name = "r_thumb_proximal"

HAnimJoint288.children.append(HAnimSegment289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.DEF = "hanim_r_thumb3"
HAnimJoint290.name = "r_thumb3"
HAnimJoint290.center = [-0.1955,0.8159,0.0464]
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.DEF = "hanim_r_thumb_distal"
HAnimSegment291.name = "r_thumb_distal"
HAnimSite292 = x3d.HAnimSite()
HAnimSite292.DEF = "hanim_r_thumb_distal_tip"
HAnimSite292.name = "r_thumb_distal_tip"
HAnimSite292.translation = [-0.1869,0.809,0.082]

HAnimSegment291.children.append(HAnimSite292)

HAnimJoint290.children.append(HAnimSegment291)

HAnimJoint288.children.append(HAnimJoint290)

HAnimJoint286.children.append(HAnimJoint288)

HAnimJoint279.children.append(HAnimJoint286)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.DEF = "hanim_r_index0"
HAnimJoint293.name = "r_index0"
HAnimJoint293.center = [-0.1983,0.8024,-0.028]
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.DEF = "hanim_r_index_metacarpal"
HAnimSegment294.name = "r_index_metacarpal"

HAnimJoint293.children.append(HAnimSegment294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.DEF = "hanim_r_index1"
HAnimJoint295.name = "r_index1"
HAnimJoint295.center = [-0.1983,0.7815,-0.028]
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.DEF = "hanim_r_index_proximal"
HAnimSegment296.name = "r_index_proximal"

HAnimJoint295.children.append(HAnimSegment296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.DEF = "hanim_r_index2"
HAnimJoint297.name = "r_index2"
HAnimJoint297.center = [-0.2017,0.7363,-0.0248]
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.DEF = "hanim_r_index_middle"
HAnimSegment298.name = "r_index_middle"

HAnimJoint297.children.append(HAnimSegment298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.DEF = "hanim_r_index3"
HAnimJoint299.name = "r_index3"
HAnimJoint299.center = [-0.2028,0.7139,-0.0236]
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.DEF = "hanim_r_index_distal"
HAnimSegment300.name = "r_index_distal"
HAnimSite301 = x3d.HAnimSite()
HAnimSite301.DEF = "hanim_r_index_distal_tip"
HAnimSite301.name = "r_index_distal_tip"
HAnimSite301.translation = [-0.198,0.6883,-0.018]

HAnimSegment300.children.append(HAnimSite301)
HAnimSite302 = x3d.HAnimSite()
HAnimSite302.DEF = "hanim_r_dactylion_pt"
HAnimSite302.name = "r_dactylion_pt"
HAnimSite302.translation = [-0.1941,0.6772,-0.0423]

HAnimSegment300.children.append(HAnimSite302)

HAnimJoint299.children.append(HAnimSegment300)

HAnimJoint297.children.append(HAnimJoint299)

HAnimJoint295.children.append(HAnimJoint297)

HAnimJoint293.children.append(HAnimJoint295)

HAnimJoint279.children.append(HAnimJoint293)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.DEF = "hanim_r_middle0"
HAnimJoint303.name = "r_middle0"
HAnimJoint303.center = [-0.1987,0.8029,-0.053]
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.DEF = "hanim_r_middle_metacarpal"
HAnimSegment304.name = "r_middle_metacarpal"

HAnimJoint303.children.append(HAnimSegment304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.DEF = "hanim_r_middle1"
HAnimJoint305.name = "r_middle1"
HAnimJoint305.center = [-0.1987,0.7818,-0.053]
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.DEF = "hanim_r_middle_proximal"
HAnimSegment306.name = "r_middle_proximal"

HAnimJoint305.children.append(HAnimSegment306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.DEF = "hanim_r_middle2"
HAnimJoint307.name = "r_middle2"
HAnimJoint307.center = [-0.2013,0.7273,-0.0503]
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.DEF = "hanim_r_middle_middle"
HAnimSegment308.name = "r_middle_middle"

HAnimJoint307.children.append(HAnimSegment308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.DEF = "hanim_r_middle3"
HAnimJoint309.name = "r_middle3"
HAnimJoint309.center = [-0.2026,0.7011,-0.0494]
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.DEF = "hanim_r_middle_distal"
HAnimSegment310.name = "r_middle_distal"
HAnimSite311 = x3d.HAnimSite()
HAnimSite311.DEF = "hanim_r_middle_distal_tip"
HAnimSite311.name = "r_middle_distal_tip"
HAnimSite311.translation = [-0.1969,0.6758,-0.0427]

HAnimSegment310.children.append(HAnimSite311)

HAnimJoint309.children.append(HAnimSegment310)

HAnimJoint307.children.append(HAnimJoint309)

HAnimJoint305.children.append(HAnimJoint307)

HAnimJoint303.children.append(HAnimJoint305)

HAnimJoint279.children.append(HAnimJoint303)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.DEF = "hanim_r_ring0"
HAnimJoint312.name = "r_ring0"
HAnimJoint312.center = [-0.1956,0.8019,-0.0794]
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.DEF = "hanim_r_ring_metacarpal"
HAnimSegment313.name = "r_ring_metacarpal"

HAnimJoint312.children.append(HAnimSegment313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.DEF = "hanim_r_ring1"
HAnimJoint314.name = "r_ring1"
HAnimJoint314.center = [-0.1956,0.7815,-0.0794]
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.DEF = "hanim_r_ring_proximal"
HAnimSegment315.name = "r_ring_proximal"

HAnimJoint314.children.append(HAnimSegment315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.DEF = "hanim_r_ring2"
HAnimJoint316.name = "r_ring2"
HAnimJoint316.center = [-0.1973,0.7287,-0.0777]
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.DEF = "hanim_r_ring_middle"
HAnimSegment317.name = "r_ring_middle"

HAnimJoint316.children.append(HAnimSegment317)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.DEF = "hanim_r_ring3"
HAnimJoint318.name = "r_ring3"
HAnimJoint318.center = [-0.1983,0.7045,-0.0767]
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.DEF = "hanim_r_ring_distal"
HAnimSegment319.name = "r_ring_distal"
HAnimSite320 = x3d.HAnimSite()
HAnimSite320.DEF = "hanim_r_ring_distal_tip"
HAnimSite320.name = "r_ring_distal_tip"
HAnimSite320.translation = [-0.1934,0.6778,-0.0693]

HAnimSegment319.children.append(HAnimSite320)

HAnimJoint318.children.append(HAnimSegment319)

HAnimJoint316.children.append(HAnimJoint318)

HAnimJoint314.children.append(HAnimJoint316)

HAnimJoint312.children.append(HAnimJoint314)

HAnimJoint279.children.append(HAnimJoint312)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.DEF = "hanim_r_pinky0"
HAnimJoint321.name = "r_pinky0"
HAnimJoint321.center = [-0.1925,0.8066,-0.1036]
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.DEF = "hanim_r_pinky_metacarpal"
HAnimSegment322.name = "r_pinky_metacarpal"

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.DEF = "hanim_r_pinky1"
HAnimJoint323.name = "r_pinky1"
HAnimJoint323.center = [-0.1925,0.7866,-0.1036]
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.DEF = "hanim_r_pinky_proximal"
HAnimSegment324.name = "r_pinky_proximal"

HAnimJoint323.children.append(HAnimSegment324)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.DEF = "hanim_r_pinky2"
HAnimJoint325.name = "r_pinky2"
HAnimJoint325.center = [-0.1938,0.7452,-0.1024]
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.DEF = "hanim_r_pinky_middle"
HAnimSegment326.name = "r_pinky_middle"

HAnimJoint325.children.append(HAnimSegment326)
HAnimJoint327 = x3d.HAnimJoint()
HAnimJoint327.DEF = "hanim_r_pinky3"
HAnimJoint327.name = "r_pinky3"
HAnimJoint327.center = [-0.1948,0.7277,-0.1017]
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.DEF = "hanim_r_pinky_distal"
HAnimSegment328.name = "r_pinky_distal"
HAnimSite329 = x3d.HAnimSite()
HAnimSite329.DEF = "hanim_r_pinky_distal_tip"
HAnimSite329.name = "r_pinky_distal_tip"
HAnimSite329.translation = [-0.1938,0.7035,-0.0949]

HAnimSegment328.children.append(HAnimSite329)

HAnimJoint327.children.append(HAnimSegment328)

HAnimJoint325.children.append(HAnimJoint327)

HAnimJoint323.children.append(HAnimJoint325)

HAnimJoint321.children.append(HAnimJoint323)

HAnimJoint279.children.append(HAnimJoint321)

HAnimJoint273.children.append(HAnimJoint279)

HAnimJoint270.children.append(HAnimJoint273)

HAnimJoint268.children.append(HAnimJoint270)

HAnimJoint262.children.append(HAnimJoint268)

HAnimJoint142.children.append(HAnimJoint262)

HAnimJoint140.children.append(HAnimJoint142)

HAnimJoint138.children.append(HAnimJoint140)

HAnimJoint136.children.append(HAnimJoint138)

HAnimJoint134.children.append(HAnimJoint136)

HAnimJoint132.children.append(HAnimJoint134)

HAnimJoint130.children.append(HAnimJoint132)

HAnimJoint128.children.append(HAnimJoint130)

HAnimJoint124.children.append(HAnimJoint128)

HAnimJoint121.children.append(HAnimJoint124)

HAnimJoint119.children.append(HAnimJoint121)

HAnimJoint117.children.append(HAnimJoint119)

HAnimJoint115.children.append(HAnimJoint117)

HAnimJoint110.children.append(HAnimJoint115)

HAnimJoint108.children.append(HAnimJoint110)

HAnimJoint106.children.append(HAnimJoint108)

HAnimJoint102.children.append(HAnimJoint106)

HAnimJoint43.children.append(HAnimJoint102)

HAnimHumanoid42.skeleton.append(HAnimJoint43)
HAnimJoint330 = x3d.HAnimJoint()
HAnimJoint330.USE = "hanim_humanoid_root"

HAnimHumanoid42.joints.append(HAnimJoint330)
HAnimJoint331 = x3d.HAnimJoint()
HAnimJoint331.USE = "hanim_sacroiliac"

HAnimHumanoid42.joints.append(HAnimJoint331)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.USE = "hanim_vl5"

HAnimHumanoid42.joints.append(HAnimJoint332)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.USE = "hanim_vl4"

HAnimHumanoid42.joints.append(HAnimJoint333)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.USE = "hanim_vl3"

HAnimHumanoid42.joints.append(HAnimJoint334)
HAnimJoint335 = x3d.HAnimJoint()
HAnimJoint335.USE = "hanim_vl2"

HAnimHumanoid42.joints.append(HAnimJoint335)
HAnimJoint336 = x3d.HAnimJoint()
HAnimJoint336.USE = "hanim_vl1"

HAnimHumanoid42.joints.append(HAnimJoint336)
HAnimJoint337 = x3d.HAnimJoint()
HAnimJoint337.USE = "hanim_vt12"

HAnimHumanoid42.joints.append(HAnimJoint337)
HAnimJoint338 = x3d.HAnimJoint()
HAnimJoint338.USE = "hanim_vt11"

HAnimHumanoid42.joints.append(HAnimJoint338)
HAnimJoint339 = x3d.HAnimJoint()
HAnimJoint339.USE = "hanim_vt10"

HAnimHumanoid42.joints.append(HAnimJoint339)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.USE = "hanim_vt9"

HAnimHumanoid42.joints.append(HAnimJoint340)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.USE = "hanim_vt8"

HAnimHumanoid42.joints.append(HAnimJoint341)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.USE = "hanim_vt7"

HAnimHumanoid42.joints.append(HAnimJoint342)
HAnimJoint343 = x3d.HAnimJoint()
HAnimJoint343.USE = "hanim_vt6"

HAnimHumanoid42.joints.append(HAnimJoint343)
HAnimJoint344 = x3d.HAnimJoint()
HAnimJoint344.USE = "hanim_vt5"

HAnimHumanoid42.joints.append(HAnimJoint344)
HAnimJoint345 = x3d.HAnimJoint()
HAnimJoint345.USE = "hanim_vt4"

HAnimHumanoid42.joints.append(HAnimJoint345)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.USE = "hanim_vt3"

HAnimHumanoid42.joints.append(HAnimJoint346)
HAnimJoint347 = x3d.HAnimJoint()
HAnimJoint347.USE = "hanim_vt2"

HAnimHumanoid42.joints.append(HAnimJoint347)
HAnimJoint348 = x3d.HAnimJoint()
HAnimJoint348.USE = "hanim_vt1"

HAnimHumanoid42.joints.append(HAnimJoint348)
HAnimJoint349 = x3d.HAnimJoint()
HAnimJoint349.USE = "hanim_vc7"

HAnimHumanoid42.joints.append(HAnimJoint349)
HAnimJoint350 = x3d.HAnimJoint()
HAnimJoint350.USE = "hanim_vc6"

HAnimHumanoid42.joints.append(HAnimJoint350)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.USE = "hanim_vc5"

HAnimHumanoid42.joints.append(HAnimJoint351)
HAnimJoint352 = x3d.HAnimJoint()
HAnimJoint352.USE = "hanim_vc4"

HAnimHumanoid42.joints.append(HAnimJoint352)
HAnimJoint353 = x3d.HAnimJoint()
HAnimJoint353.USE = "hanim_vc3"

HAnimHumanoid42.joints.append(HAnimJoint353)
HAnimJoint354 = x3d.HAnimJoint()
HAnimJoint354.USE = "hanim_vc2"

HAnimHumanoid42.joints.append(HAnimJoint354)
HAnimJoint355 = x3d.HAnimJoint()
HAnimJoint355.USE = "hanim_vc1"

HAnimHumanoid42.joints.append(HAnimJoint355)
HAnimJoint356 = x3d.HAnimJoint()
HAnimJoint356.USE = "hanim_skullbase"

HAnimHumanoid42.joints.append(HAnimJoint356)
HAnimJoint357 = x3d.HAnimJoint()
HAnimJoint357.USE = "hanim_temporomandibular"

HAnimHumanoid42.joints.append(HAnimJoint357)
HAnimJoint358 = x3d.HAnimJoint()
HAnimJoint358.USE = "hanim_l_acromioclavicular"

HAnimHumanoid42.joints.append(HAnimJoint358)
HAnimJoint359 = x3d.HAnimJoint()
HAnimJoint359.USE = "hanim_r_acromioclavicular"

HAnimHumanoid42.joints.append(HAnimJoint359)
HAnimJoint360 = x3d.HAnimJoint()
HAnimJoint360.USE = "hanim_l_ankle"

HAnimHumanoid42.joints.append(HAnimJoint360)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.USE = "hanim_r_ankle"

HAnimHumanoid42.joints.append(HAnimJoint361)
HAnimJoint362 = x3d.HAnimJoint()
HAnimJoint362.USE = "hanim_l_elbow"

HAnimHumanoid42.joints.append(HAnimJoint362)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.USE = "hanim_r_elbow"

HAnimHumanoid42.joints.append(HAnimJoint363)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.USE = "hanim_l_eyeball_joint"

HAnimHumanoid42.joints.append(HAnimJoint364)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.USE = "hanim_r_eyeball_joint"

HAnimHumanoid42.joints.append(HAnimJoint365)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid42.joints.append(HAnimJoint366)
HAnimJoint367 = x3d.HAnimJoint()
HAnimJoint367.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid42.joints.append(HAnimJoint367)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.USE = "hanim_l_eyelid_joint"

HAnimHumanoid42.joints.append(HAnimJoint368)
HAnimJoint369 = x3d.HAnimJoint()
HAnimJoint369.USE = "hanim_r_eyelid_joint"

HAnimHumanoid42.joints.append(HAnimJoint369)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.USE = "hanim_l_hip"

HAnimHumanoid42.joints.append(HAnimJoint370)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.USE = "hanim_r_hip"

HAnimHumanoid42.joints.append(HAnimJoint371)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.USE = "hanim_l_index0"

HAnimHumanoid42.joints.append(HAnimJoint372)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.USE = "hanim_r_index0"

HAnimHumanoid42.joints.append(HAnimJoint373)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.USE = "hanim_l_index1"

HAnimHumanoid42.joints.append(HAnimJoint374)
HAnimJoint375 = x3d.HAnimJoint()
HAnimJoint375.USE = "hanim_r_index1"

HAnimHumanoid42.joints.append(HAnimJoint375)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.USE = "hanim_l_index2"

HAnimHumanoid42.joints.append(HAnimJoint376)
HAnimJoint377 = x3d.HAnimJoint()
HAnimJoint377.USE = "hanim_r_index2"

HAnimHumanoid42.joints.append(HAnimJoint377)
HAnimJoint378 = x3d.HAnimJoint()
HAnimJoint378.USE = "hanim_l_index3"

HAnimHumanoid42.joints.append(HAnimJoint378)
HAnimJoint379 = x3d.HAnimJoint()
HAnimJoint379.USE = "hanim_r_index3"

HAnimHumanoid42.joints.append(HAnimJoint379)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.USE = "hanim_l_knee"

HAnimHumanoid42.joints.append(HAnimJoint380)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.USE = "hanim_r_knee"

HAnimHumanoid42.joints.append(HAnimJoint381)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.USE = "hanim_l_metatarsal"

HAnimHumanoid42.joints.append(HAnimJoint382)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.USE = "hanim_r_metatarsal"

HAnimHumanoid42.joints.append(HAnimJoint383)
HAnimJoint384 = x3d.HAnimJoint()
HAnimJoint384.USE = "hanim_l_middle0"

HAnimHumanoid42.joints.append(HAnimJoint384)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.USE = "hanim_r_middle0"

HAnimHumanoid42.joints.append(HAnimJoint385)
HAnimJoint386 = x3d.HAnimJoint()
HAnimJoint386.USE = "hanim_l_middle1"

HAnimHumanoid42.joints.append(HAnimJoint386)
HAnimJoint387 = x3d.HAnimJoint()
HAnimJoint387.USE = "hanim_r_middle1"

HAnimHumanoid42.joints.append(HAnimJoint387)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.USE = "hanim_l_middle2"

HAnimHumanoid42.joints.append(HAnimJoint388)
HAnimJoint389 = x3d.HAnimJoint()
HAnimJoint389.USE = "hanim_r_middle2"

HAnimHumanoid42.joints.append(HAnimJoint389)
HAnimJoint390 = x3d.HAnimJoint()
HAnimJoint390.USE = "hanim_l_middle3"

HAnimHumanoid42.joints.append(HAnimJoint390)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.USE = "hanim_r_middle3"

HAnimHumanoid42.joints.append(HAnimJoint391)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.USE = "hanim_l_midtarsal"

HAnimHumanoid42.joints.append(HAnimJoint392)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.USE = "hanim_r_midtarsal"

HAnimHumanoid42.joints.append(HAnimJoint393)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.USE = "hanim_l_pinky0"

HAnimHumanoid42.joints.append(HAnimJoint394)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.USE = "hanim_r_pinky0"

HAnimHumanoid42.joints.append(HAnimJoint395)
HAnimJoint396 = x3d.HAnimJoint()
HAnimJoint396.USE = "hanim_l_pinky1"

HAnimHumanoid42.joints.append(HAnimJoint396)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.USE = "hanim_r_pinky1"

HAnimHumanoid42.joints.append(HAnimJoint397)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.USE = "hanim_l_pinky2"

HAnimHumanoid42.joints.append(HAnimJoint398)
HAnimJoint399 = x3d.HAnimJoint()
HAnimJoint399.USE = "hanim_r_pinky2"

HAnimHumanoid42.joints.append(HAnimJoint399)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.USE = "hanim_l_pinky3"

HAnimHumanoid42.joints.append(HAnimJoint400)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.USE = "hanim_r_pinky3"

HAnimHumanoid42.joints.append(HAnimJoint401)
HAnimJoint402 = x3d.HAnimJoint()
HAnimJoint402.USE = "hanim_l_ring0"

HAnimHumanoid42.joints.append(HAnimJoint402)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.USE = "hanim_r_ring0"

HAnimHumanoid42.joints.append(HAnimJoint403)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.USE = "hanim_l_ring1"

HAnimHumanoid42.joints.append(HAnimJoint404)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.USE = "hanim_r_ring1"

HAnimHumanoid42.joints.append(HAnimJoint405)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.USE = "hanim_l_ring2"

HAnimHumanoid42.joints.append(HAnimJoint406)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.USE = "hanim_r_ring2"

HAnimHumanoid42.joints.append(HAnimJoint407)
HAnimJoint408 = x3d.HAnimJoint()
HAnimJoint408.USE = "hanim_l_ring3"

HAnimHumanoid42.joints.append(HAnimJoint408)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.USE = "hanim_r_ring3"

HAnimHumanoid42.joints.append(HAnimJoint409)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.USE = "hanim_l_shoulder"

HAnimHumanoid42.joints.append(HAnimJoint410)
HAnimJoint411 = x3d.HAnimJoint()
HAnimJoint411.USE = "hanim_r_shoulder"

HAnimHumanoid42.joints.append(HAnimJoint411)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.USE = "hanim_l_sternoclavicular"

HAnimHumanoid42.joints.append(HAnimJoint412)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.USE = "hanim_r_sternoclavicular"

HAnimHumanoid42.joints.append(HAnimJoint413)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.USE = "hanim_l_subtalar"

HAnimHumanoid42.joints.append(HAnimJoint414)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.USE = "hanim_r_subtalar"

HAnimHumanoid42.joints.append(HAnimJoint415)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.USE = "hanim_l_thumb1"

HAnimHumanoid42.joints.append(HAnimJoint416)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.USE = "hanim_r_thumb1"

HAnimHumanoid42.joints.append(HAnimJoint417)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.USE = "hanim_l_thumb2"

HAnimHumanoid42.joints.append(HAnimJoint418)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.USE = "hanim_r_thumb2"

HAnimHumanoid42.joints.append(HAnimJoint419)
HAnimJoint420 = x3d.HAnimJoint()
HAnimJoint420.USE = "hanim_l_thumb3"

HAnimHumanoid42.joints.append(HAnimJoint420)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.USE = "hanim_r_thumb3"

HAnimHumanoid42.joints.append(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.USE = "hanim_l_wrist"

HAnimHumanoid42.joints.append(HAnimJoint422)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.USE = "hanim_r_wrist"

HAnimHumanoid42.joints.append(HAnimJoint423)
HAnimSegment424 = x3d.HAnimSegment()
HAnimSegment424.USE = "hanim_pelvis"

HAnimHumanoid42.segments.append(HAnimSegment424)
HAnimSegment425 = x3d.HAnimSegment()
HAnimSegment425.USE = "hanim_skull"

HAnimHumanoid42.segments.append(HAnimSegment425)
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.USE = "hanim_jaw"

HAnimHumanoid42.segments.append(HAnimSegment426)
HAnimSegment427 = x3d.HAnimSegment()
HAnimSegment427.USE = "hanim_c1"

HAnimHumanoid42.segments.append(HAnimSegment427)
HAnimSegment428 = x3d.HAnimSegment()
HAnimSegment428.USE = "hanim_c2"

HAnimHumanoid42.segments.append(HAnimSegment428)
HAnimSegment429 = x3d.HAnimSegment()
HAnimSegment429.USE = "hanim_c3"

HAnimHumanoid42.segments.append(HAnimSegment429)
HAnimSegment430 = x3d.HAnimSegment()
HAnimSegment430.USE = "hanim_c4"

HAnimHumanoid42.segments.append(HAnimSegment430)
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.USE = "hanim_c5"

HAnimHumanoid42.segments.append(HAnimSegment431)
HAnimSegment432 = x3d.HAnimSegment()
HAnimSegment432.USE = "hanim_c6"

HAnimHumanoid42.segments.append(HAnimSegment432)
HAnimSegment433 = x3d.HAnimSegment()
HAnimSegment433.USE = "hanim_c7"

HAnimHumanoid42.segments.append(HAnimSegment433)
HAnimSegment434 = x3d.HAnimSegment()
HAnimSegment434.USE = "hanim_t1"

HAnimHumanoid42.segments.append(HAnimSegment434)
HAnimSegment435 = x3d.HAnimSegment()
HAnimSegment435.USE = "hanim_t2"

HAnimHumanoid42.segments.append(HAnimSegment435)
HAnimSegment436 = x3d.HAnimSegment()
HAnimSegment436.USE = "hanim_t3"

HAnimHumanoid42.segments.append(HAnimSegment436)
HAnimSegment437 = x3d.HAnimSegment()
HAnimSegment437.USE = "hanim_t4"

HAnimHumanoid42.segments.append(HAnimSegment437)
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.USE = "hanim_t5"

HAnimHumanoid42.segments.append(HAnimSegment438)
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.USE = "hanim_t6"

HAnimHumanoid42.segments.append(HAnimSegment439)
HAnimSegment440 = x3d.HAnimSegment()
HAnimSegment440.USE = "hanim_t7"

HAnimHumanoid42.segments.append(HAnimSegment440)
HAnimSegment441 = x3d.HAnimSegment()
HAnimSegment441.USE = "hanim_t8"

HAnimHumanoid42.segments.append(HAnimSegment441)
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.USE = "hanim_t9"

HAnimHumanoid42.segments.append(HAnimSegment442)
HAnimSegment443 = x3d.HAnimSegment()
HAnimSegment443.USE = "hanim_t10"

HAnimHumanoid42.segments.append(HAnimSegment443)
HAnimSegment444 = x3d.HAnimSegment()
HAnimSegment444.USE = "hanim_t11"

HAnimHumanoid42.segments.append(HAnimSegment444)
HAnimSegment445 = x3d.HAnimSegment()
HAnimSegment445.USE = "hanim_t12"

HAnimHumanoid42.segments.append(HAnimSegment445)
HAnimSegment446 = x3d.HAnimSegment()
HAnimSegment446.USE = "hanim_l1"

HAnimHumanoid42.segments.append(HAnimSegment446)
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.USE = "hanim_l2"

HAnimHumanoid42.segments.append(HAnimSegment447)
HAnimSegment448 = x3d.HAnimSegment()
HAnimSegment448.USE = "hanim_l3"

HAnimHumanoid42.segments.append(HAnimSegment448)
HAnimSegment449 = x3d.HAnimSegment()
HAnimSegment449.USE = "hanim_l4"

HAnimHumanoid42.segments.append(HAnimSegment449)
HAnimSegment450 = x3d.HAnimSegment()
HAnimSegment450.USE = "hanim_l5"

HAnimHumanoid42.segments.append(HAnimSegment450)
HAnimSegment451 = x3d.HAnimSegment()
HAnimSegment451.USE = "hanim_sacrum"

HAnimHumanoid42.segments.append(HAnimSegment451)
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.USE = "hanim_l_calf"

HAnimHumanoid42.segments.append(HAnimSegment452)
HAnimSegment453 = x3d.HAnimSegment()
HAnimSegment453.USE = "hanim_r_calf"

HAnimHumanoid42.segments.append(HAnimSegment453)
HAnimSegment454 = x3d.HAnimSegment()
HAnimSegment454.USE = "hanim_l_clavicle"

HAnimHumanoid42.segments.append(HAnimSegment454)
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.USE = "hanim_r_clavicle"

HAnimHumanoid42.segments.append(HAnimSegment455)
HAnimSegment456 = x3d.HAnimSegment()
HAnimSegment456.USE = "hanim_l_eyeball"

HAnimHumanoid42.segments.append(HAnimSegment456)
HAnimSegment457 = x3d.HAnimSegment()
HAnimSegment457.USE = "hanim_r_eyeball"

HAnimHumanoid42.segments.append(HAnimSegment457)
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.USE = "hanim_l_eyebrow"

HAnimHumanoid42.segments.append(HAnimSegment458)
HAnimSegment459 = x3d.HAnimSegment()
HAnimSegment459.USE = "hanim_r_eyebrow"

HAnimHumanoid42.segments.append(HAnimSegment459)
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.USE = "hanim_l_eyelid"

HAnimHumanoid42.segments.append(HAnimSegment460)
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.USE = "hanim_r_eyelid"

HAnimHumanoid42.segments.append(HAnimSegment461)
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.USE = "hanim_l_forearm"

HAnimHumanoid42.segments.append(HAnimSegment462)
HAnimSegment463 = x3d.HAnimSegment()
HAnimSegment463.USE = "hanim_r_forearm"

HAnimHumanoid42.segments.append(HAnimSegment463)
HAnimSegment464 = x3d.HAnimSegment()
HAnimSegment464.USE = "hanim_l_forefoot"

HAnimHumanoid42.segments.append(HAnimSegment464)
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.USE = "hanim_r_forefoot"

HAnimHumanoid42.segments.append(HAnimSegment465)
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.USE = "hanim_l_hand"

HAnimHumanoid42.segments.append(HAnimSegment466)
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.USE = "hanim_r_hand"

HAnimHumanoid42.segments.append(HAnimSegment467)
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.USE = "hanim_l_hindfoot"

HAnimHumanoid42.segments.append(HAnimSegment468)
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.USE = "hanim_r_hindfoot"

HAnimHumanoid42.segments.append(HAnimSegment469)
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.USE = "hanim_l_index_distal"

HAnimHumanoid42.segments.append(HAnimSegment470)
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.USE = "hanim_r_index_distal"

HAnimHumanoid42.segments.append(HAnimSegment471)
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.USE = "hanim_l_index_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment472)
HAnimSegment473 = x3d.HAnimSegment()
HAnimSegment473.USE = "hanim_r_index_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment473)
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.USE = "hanim_l_index_middle"

HAnimHumanoid42.segments.append(HAnimSegment474)
HAnimSegment475 = x3d.HAnimSegment()
HAnimSegment475.USE = "hanim_r_index_middle"

HAnimHumanoid42.segments.append(HAnimSegment475)
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.USE = "hanim_l_index_proximal"

HAnimHumanoid42.segments.append(HAnimSegment476)
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.USE = "hanim_r_index_proximal"

HAnimHumanoid42.segments.append(HAnimSegment477)
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.USE = "hanim_l_middistal"

HAnimHumanoid42.segments.append(HAnimSegment478)
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.USE = "hanim_r_middistal"

HAnimHumanoid42.segments.append(HAnimSegment479)
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.USE = "hanim_l_middle_distal"

HAnimHumanoid42.segments.append(HAnimSegment480)
HAnimSegment481 = x3d.HAnimSegment()
HAnimSegment481.USE = "hanim_r_middle_distal"

HAnimHumanoid42.segments.append(HAnimSegment481)
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.USE = "hanim_l_middle_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment482)
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.USE = "hanim_r_middle_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment483)
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.USE = "hanim_l_middle_middle"

HAnimHumanoid42.segments.append(HAnimSegment484)
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.USE = "hanim_r_middle_middle"

HAnimHumanoid42.segments.append(HAnimSegment485)
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.USE = "hanim_l_middle_proximal"

HAnimHumanoid42.segments.append(HAnimSegment486)
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.USE = "hanim_r_middle_proximal"

HAnimHumanoid42.segments.append(HAnimSegment487)
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.USE = "hanim_l_midproximal"

HAnimHumanoid42.segments.append(HAnimSegment488)
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.USE = "hanim_r_midproximal"

HAnimHumanoid42.segments.append(HAnimSegment489)
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.USE = "hanim_l_pinky_distal"

HAnimHumanoid42.segments.append(HAnimSegment490)
HAnimSegment491 = x3d.HAnimSegment()
HAnimSegment491.USE = "hanim_r_pinky_distal"

HAnimHumanoid42.segments.append(HAnimSegment491)
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.USE = "hanim_l_pinky_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment492)
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.USE = "hanim_r_pinky_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment493)
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.USE = "hanim_l_pinky_middle"

HAnimHumanoid42.segments.append(HAnimSegment494)
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.USE = "hanim_r_pinky_middle"

HAnimHumanoid42.segments.append(HAnimSegment495)
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.USE = "hanim_l_pinky_proximal"

HAnimHumanoid42.segments.append(HAnimSegment496)
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.USE = "hanim_r_pinky_proximal"

HAnimHumanoid42.segments.append(HAnimSegment497)
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.USE = "hanim_l_ring_distal"

HAnimHumanoid42.segments.append(HAnimSegment498)
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.USE = "hanim_r_ring_distal"

HAnimHumanoid42.segments.append(HAnimSegment499)
HAnimSegment500 = x3d.HAnimSegment()
HAnimSegment500.USE = "hanim_l_ring_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment500)
HAnimSegment501 = x3d.HAnimSegment()
HAnimSegment501.USE = "hanim_r_ring_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment501)
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.USE = "hanim_l_ring_middle"

HAnimHumanoid42.segments.append(HAnimSegment502)
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.USE = "hanim_r_ring_middle"

HAnimHumanoid42.segments.append(HAnimSegment503)
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.USE = "hanim_l_ring_proximal"

HAnimHumanoid42.segments.append(HAnimSegment504)
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.USE = "hanim_r_ring_proximal"

HAnimHumanoid42.segments.append(HAnimSegment505)
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.USE = "hanim_l_scapula"

HAnimHumanoid42.segments.append(HAnimSegment506)
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.USE = "hanim_r_scapula"

HAnimHumanoid42.segments.append(HAnimSegment507)
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.USE = "hanim_l_thigh"

HAnimHumanoid42.segments.append(HAnimSegment508)
HAnimSegment509 = x3d.HAnimSegment()
HAnimSegment509.USE = "hanim_r_thigh"

HAnimHumanoid42.segments.append(HAnimSegment509)
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.USE = "hanim_l_thumb_distal"

HAnimHumanoid42.segments.append(HAnimSegment510)
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.USE = "hanim_r_thumb_distal"

HAnimHumanoid42.segments.append(HAnimSegment511)
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.USE = "hanim_l_thumb_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment512)
HAnimSegment513 = x3d.HAnimSegment()
HAnimSegment513.USE = "hanim_r_thumb_metacarpal"

HAnimHumanoid42.segments.append(HAnimSegment513)
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.USE = "hanim_l_thumb_proximal"

HAnimHumanoid42.segments.append(HAnimSegment514)
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.USE = "hanim_r_thumb_proximal"

HAnimHumanoid42.segments.append(HAnimSegment515)
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.USE = "hanim_l_upperarm"

HAnimHumanoid42.segments.append(HAnimSegment516)
HAnimSegment517 = x3d.HAnimSegment()
HAnimSegment517.USE = "hanim_r_upperarm"

HAnimHumanoid42.segments.append(HAnimSegment517)
HAnimSite518 = x3d.HAnimSite()
HAnimSite518.USE = "hanim_crotch_pt"

HAnimHumanoid42.sites.append(HAnimSite518)
HAnimSite519 = x3d.HAnimSite()
HAnimSite519.USE = "hanim_skull_tip"

HAnimHumanoid42.sites.append(HAnimSite519)
HAnimSite520 = x3d.HAnimSite()
HAnimSite520.USE = "hanim_sellion_pt"

HAnimHumanoid42.sites.append(HAnimSite520)
HAnimSite521 = x3d.HAnimSite()
HAnimSite521.USE = "hanim_supramenton_pt"

HAnimHumanoid42.sites.append(HAnimSite521)
HAnimSite522 = x3d.HAnimSite()
HAnimSite522.USE = "hanim_nuchale_pt"

HAnimHumanoid42.sites.append(HAnimSite522)
HAnimSite523 = x3d.HAnimSite()
HAnimSite523.USE = "hanim_suprasternale_pt"

HAnimHumanoid42.sites.append(HAnimSite523)
HAnimSite524 = x3d.HAnimSite()
HAnimSite524.USE = "hanim_cervicale_pt"

HAnimHumanoid42.sites.append(HAnimSite524)
HAnimSite525 = x3d.HAnimSite()
HAnimSite525.USE = "hanim_substernale_pt"

HAnimHumanoid42.sites.append(HAnimSite525)
HAnimSite526 = x3d.HAnimSite()
HAnimSite526.USE = "hanim_rib10_midspine_pt"

HAnimHumanoid42.sites.append(HAnimSite526)
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.USE = "hanim_waist_preferred_post_pt"

HAnimHumanoid42.sites.append(HAnimSite527)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.USE = "hanim_navel_pt"

HAnimHumanoid42.sites.append(HAnimSite528)
HAnimSite529 = x3d.HAnimSite()
HAnimSite529.USE = "hanim_l_acromion_pt"

HAnimHumanoid42.sites.append(HAnimSite529)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.USE = "hanim_r_acromion_pt"

HAnimHumanoid42.sites.append(HAnimSite530)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.USE = "hanim_r_asis_pt"

HAnimHumanoid42.sites.append(HAnimSite531)
HAnimSite532 = x3d.HAnimSite()
HAnimSite532.USE = "hanim_l_asis_pt"

HAnimHumanoid42.sites.append(HAnimSite532)
HAnimSite533 = x3d.HAnimSite()
HAnimSite533.USE = "hanim_l_axilla_ant_pt"

HAnimHumanoid42.sites.append(HAnimSite533)
HAnimSite534 = x3d.HAnimSite()
HAnimSite534.USE = "hanim_r_axilla_ant_pt"

HAnimHumanoid42.sites.append(HAnimSite534)
HAnimSite535 = x3d.HAnimSite()
HAnimSite535.USE = "hanim_l_axilla_post_pt"

HAnimHumanoid42.sites.append(HAnimSite535)
HAnimSite536 = x3d.HAnimSite()
HAnimSite536.USE = "hanim_r_axilla_post_pt"

HAnimHumanoid42.sites.append(HAnimSite536)
HAnimSite537 = x3d.HAnimSite()
HAnimSite537.USE = "hanim_l_calcaneous_post_pt"

HAnimHumanoid42.sites.append(HAnimSite537)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.USE = "hanim_r_calcaneous_post_pt"

HAnimHumanoid42.sites.append(HAnimSite538)
HAnimSite539 = x3d.HAnimSite()
HAnimSite539.USE = "hanim_l_clavicale_pt"

HAnimHumanoid42.sites.append(HAnimSite539)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.USE = "hanim_r_clavicale_pt"

HAnimHumanoid42.sites.append(HAnimSite540)
HAnimSite541 = x3d.HAnimSite()
HAnimSite541.USE = "hanim_l_dactylion_pt"

HAnimHumanoid42.sites.append(HAnimSite541)
HAnimSite542 = x3d.HAnimSite()
HAnimSite542.USE = "hanim_r_dactylion_pt"

HAnimHumanoid42.sites.append(HAnimSite542)
HAnimSite543 = x3d.HAnimSite()
HAnimSite543.USE = "hanim_l_digit2_pt"

HAnimHumanoid42.sites.append(HAnimSite543)
HAnimSite544 = x3d.HAnimSite()
HAnimSite544.USE = "hanim_r_digit2_pt"

HAnimHumanoid42.sites.append(HAnimSite544)
HAnimSite545 = x3d.HAnimSite()
HAnimSite545.USE = "hanim_l_femoral_lateral_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite545)
HAnimSite546 = x3d.HAnimSite()
HAnimSite546.USE = "hanim_r_femoral_lateral_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite546)
HAnimSite547 = x3d.HAnimSite()
HAnimSite547.USE = "hanim_l_femoral_medial_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite547)
HAnimSite548 = x3d.HAnimSite()
HAnimSite548.USE = "hanim_r_femoral_medial_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite548)
HAnimSite549 = x3d.HAnimSite()
HAnimSite549.USE = "hanim_l_forefoot_tip"

HAnimHumanoid42.sites.append(HAnimSite549)
HAnimSite550 = x3d.HAnimSite()
HAnimSite550.USE = "hanim_r_forefoot_tip"

HAnimHumanoid42.sites.append(HAnimSite550)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.USE = "hanim_r_gonion_pt"

HAnimHumanoid42.sites.append(HAnimSite551)
HAnimSite552 = x3d.HAnimSite()
HAnimSite552.USE = "hanim_l_gonion_pt"

HAnimHumanoid42.sites.append(HAnimSite552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.USE = "hanim_l_humeral_lateral_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite553)
HAnimSite554 = x3d.HAnimSite()
HAnimSite554.USE = "hanim_r_humeral_lateral_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite554)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.USE = "hanim_l_humeral_medial_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite555)
HAnimSite556 = x3d.HAnimSite()
HAnimSite556.USE = "hanim_r_humeral_medial_epicn_pt"

HAnimHumanoid42.sites.append(HAnimSite556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid42.sites.append(HAnimSite557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid42.sites.append(HAnimSite558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.USE = "hanim_l_index_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.USE = "hanim_r_index_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid42.sites.append(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid42.sites.append(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid42.sites.append(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid42.sites.append(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid42.sites.append(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid42.sites.append(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid42.sites.append(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid42.sites.append(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.USE = "hanim_l_metacarpal_pha2_pt"

HAnimHumanoid42.sites.append(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.USE = "hanim_r_metacarpal_pha2_pt"

HAnimHumanoid42.sites.append(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.USE = "hanim_l_metacarpal_pha5_pt"

HAnimHumanoid42.sites.append(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.USE = "hanim_r_metacarpal_pha5_pt"

HAnimHumanoid42.sites.append(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.USE = "hanim_l_metatarsal_pha1_pt"

HAnimHumanoid42.sites.append(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.USE = "hanim_r_metatarsal_pha1_pt"

HAnimHumanoid42.sites.append(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.USE = "hanim_l_metatarsal_pha5_pt"

HAnimHumanoid42.sites.append(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.USE = "hanim_r_metatarsal_pha5_pt"

HAnimHumanoid42.sites.append(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.USE = "hanim_l_middle_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.USE = "hanim_r_middle_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.USE = "hanim_r_neck_base_pt"

HAnimHumanoid42.sites.append(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.USE = "hanim_l_neck_base_pt"

HAnimHumanoid42.sites.append(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.USE = "hanim_l_olecranon_pt"

HAnimHumanoid42.sites.append(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.USE = "hanim_r_olecranon_pt"

HAnimHumanoid42.sites.append(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.USE = "hanim_l_pinky_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.USE = "hanim_r_pinky_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.USE = "hanim_r_psis_pt"

HAnimHumanoid42.sites.append(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.USE = "hanim_l_psis_pt"

HAnimHumanoid42.sites.append(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid42.sites.append(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid42.sites.append(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.USE = "hanim_l_radiale_pt"

HAnimHumanoid42.sites.append(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.USE = "hanim_r_radiale_pt"

HAnimHumanoid42.sites.append(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.USE = "hanim_r_rib10_pt"

HAnimHumanoid42.sites.append(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.USE = "hanim_l_rib10_pt"

HAnimHumanoid42.sites.append(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.USE = "hanim_l_ring_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.USE = "hanim_r_ring_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.USE = "hanim_temporomandibular_l_site_pt"

HAnimHumanoid42.sites.append(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.USE = "hanim_temporomandibular_r_site_pt"

HAnimHumanoid42.sites.append(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid42.sites.append(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid42.sites.append(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.USE = "hanim_r_thelion_pt"

HAnimHumanoid42.sites.append(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.USE = "hanim_l_thelion_pt"

HAnimHumanoid42.sites.append(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.USE = "hanim_l_thumb_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.USE = "hanim_r_thumb_distal_tip"

HAnimHumanoid42.sites.append(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.USE = "hanim_r_tragion_pt"

HAnimHumanoid42.sites.append(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.USE = "hanim_l_tragion_pt"

HAnimHumanoid42.sites.append(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid42.sites.append(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid42.sites.append(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid42.sites.append(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid42.sites.append(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.DEF = "hanim_l_inclined_view"
HAnimSite609.name = "l_inclined_view"
HAnimSite609.translation = [1.62,1.05,2.06]
HAnimSite609.rotation = [-0.113,0.993,0.0347,0.671]
Viewpoint610 = x3d.Viewpoint()
Viewpoint610.DEF = "hanim_l_inclined_viewpoint"
Viewpoint610.description = "left inclined"
Viewpoint610.position = [0,0,0]

HAnimSite609.children.append(Viewpoint610)

HAnimHumanoid42.viewpoints.append(HAnimSite609)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.DEF = "hanim_r_inclined_view"
HAnimSite611.name = "r_inclined_view"
HAnimSite611.translation = [-1.62,1.05,2.06]
HAnimSite611.rotation = [-0.113,-0.993,0.0347,0.671]
Viewpoint612 = x3d.Viewpoint()
Viewpoint612.DEF = "hanim_r_inclined_viewpoint"
Viewpoint612.description = "right inclined"
Viewpoint612.position = [0,0,0]
Viewpoint612.centerOfRotation = [0,0.9,0]

HAnimSite611.children.append(Viewpoint612)

HAnimHumanoid42.viewpoints.append(HAnimSite611)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.DEF = "hanim_front_view"
HAnimSite613.name = "front_view"
HAnimSite613.translation = [0,0.85,2.58]
Viewpoint614 = x3d.Viewpoint()
Viewpoint614.DEF = "hanim_front_viewpoint"
Viewpoint614.description = "front"
Viewpoint614.position = [0,0,0]
Viewpoint614.centerOfRotation = [0,0.9,0]

HAnimSite613.children.append(Viewpoint614)

HAnimHumanoid42.viewpoints.append(HAnimSite613)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.DEF = "hanim_back_view"
HAnimSite615.name = "back_view"
HAnimSite615.translation = [0,0.85,-2.58]
HAnimSite615.rotation = [0,1,0,3.14]
Viewpoint616 = x3d.Viewpoint()
Viewpoint616.DEF = "hanim_back_viewpoint"
Viewpoint616.description = "back"
Viewpoint616.position = [0,0,0]
Viewpoint616.centerOfRotation = [0,0.9,0]

HAnimSite615.children.append(Viewpoint616)

HAnimHumanoid42.viewpoints.append(HAnimSite615)
HAnimSite617 = x3d.HAnimSite()
HAnimSite617.DEF = "hanim_l_side_view"
HAnimSite617.name = "l_side_view"
HAnimSite617.translation = [2.6,0.854,0]
HAnimSite617.rotation = [0,1,0,1.5708]
Viewpoint618 = x3d.Viewpoint()
Viewpoint618.DEF = "hanim_l_side_viewpoint"
Viewpoint618.description = "left side"
Viewpoint618.position = [0,0,0]
Viewpoint618.centerOfRotation = [0,0.9,0]

HAnimSite617.children.append(Viewpoint618)

HAnimHumanoid42.viewpoints.append(HAnimSite617)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.DEF = "hanim_Top_view"
HAnimSite619.name = "Top_view"
HAnimSite619.translation = [0,3.5,0]
HAnimSite619.rotation = [1,0,0,-1.57]
Viewpoint620 = x3d.Viewpoint()
Viewpoint620.DEF = "hanim_Top_viewpoint"
Viewpoint620.description = "Top"
Viewpoint620.position = [0,0,0]
Viewpoint620.centerOfRotation = [0,0.9,0]

HAnimSite619.children.append(Viewpoint620)

HAnimHumanoid42.viewpoints.append(HAnimSite619)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.DEF = "hanim_front_close_view"
HAnimSite621.name = "front_close_view"
HAnimSite621.translation = [0,0.854,1.575]
Viewpoint622 = x3d.Viewpoint()
Viewpoint622.DEF = "hanim_front_close_viewpoint"
Viewpoint622.description = "front close"
Viewpoint622.position = [0,0,0]
Viewpoint622.centerOfRotation = [0,0,1.575]

HAnimSite621.children.append(Viewpoint622)

HAnimHumanoid42.viewpoints.append(HAnimSite621)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.DEF = "hanim_side_close_view"
HAnimSite623.name = "side_close_view"
HAnimSite623.translation = [1.56,0.854,0]
HAnimSite623.rotation = [0,1,0,1.5708]
Viewpoint624 = x3d.Viewpoint()
Viewpoint624.DEF = "hanim_side_close_viewpoint"
Viewpoint624.description = "side close"
Viewpoint624.position = [0,0,0]
Viewpoint624.centerOfRotation = [1.6,0,0]

HAnimSite623.children.append(Viewpoint624)

HAnimHumanoid42.viewpoints.append(HAnimSite623)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.DEF = "hanim_head_front_close_view"
HAnimSite625.name = "head_front_close_view"
HAnimSite625.translation = [0,1.5,1]
Viewpoint626 = x3d.Viewpoint()
Viewpoint626.DEF = "hanim_head_front_close_viewpoint"
Viewpoint626.description = "head front close"
Viewpoint626.position = [0,0,0]
Viewpoint626.centerOfRotation = [0,0,1]

HAnimSite625.children.append(Viewpoint626)

HAnimHumanoid42.viewpoints.append(HAnimSite625)
HAnimSite627 = x3d.HAnimSite()
HAnimSite627.DEF = "hanim_chest_front_close_view"
HAnimSite627.name = "chest_front_close_view"
HAnimSite627.translation = [0,1.2,1]
Viewpoint628 = x3d.Viewpoint()
Viewpoint628.DEF = "hanim_chest_front_close_viewpoint"
Viewpoint628.description = "chest front close"
Viewpoint628.position = [0,0,0]
Viewpoint628.centerOfRotation = [0,0,1]

HAnimSite627.children.append(Viewpoint628)

HAnimHumanoid42.viewpoints.append(HAnimSite627)
HAnimSite629 = x3d.HAnimSite()
HAnimSite629.DEF = "hanim_pelvis_front_close_view"
HAnimSite629.name = "pelvis_front_close_view"
HAnimSite629.translation = [0,0.8,1]
Viewpoint630 = x3d.Viewpoint()
Viewpoint630.DEF = "hanim_pelvis_front_close_viewpoint"
Viewpoint630.description = "pelvis front close"
Viewpoint630.position = [0,0,0]
Viewpoint630.centerOfRotation = [0,0,1]

HAnimSite629.children.append(Viewpoint630)

HAnimHumanoid42.viewpoints.append(HAnimSite629)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.DEF = "hanim_knees_front_close_view"
HAnimSite631.name = "knees_front_close_view"
HAnimSite631.translation = [0,0.4,1]
Viewpoint632 = x3d.Viewpoint()
Viewpoint632.DEF = "hanim_knees_front_close_viewpoint"
Viewpoint632.description = "knees front close"
Viewpoint632.position = [0,0,0]
Viewpoint632.centerOfRotation = [0,0.4,0]

HAnimSite631.children.append(Viewpoint632)

HAnimHumanoid42.viewpoints.append(HAnimSite631)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.DEF = "hanim_feet_front_close_view"
HAnimSite633.name = "feet_front_close_view"
HAnimSite633.translation = [0,0,1]
Viewpoint634 = x3d.Viewpoint()
Viewpoint634.DEF = "hanim_feet_front_close_viewpoint"
Viewpoint634.description = "feet front close"
Viewpoint634.position = [0,0,0]

HAnimSite633.children.append(Viewpoint634)

HAnimHumanoid42.viewpoints.append(HAnimSite633)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.DEF = "hanim_eye_level_view"
HAnimSite635.name = "eye_level_view"
HAnimSite635.translation = [0,1.6332,0.0502]
Viewpoint636 = x3d.Viewpoint()
Viewpoint636.DEF = "hanim_eye_level_viewpoint"
Viewpoint636.description = "eye level looking forward"
Viewpoint636.position = [0,0,0]
Viewpoint636.orientation = [0,1,0,3.141593]

HAnimSite635.children.append(Viewpoint636)

HAnimHumanoid42.viewpoints.append(HAnimSite635)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.USE = "hanim_l_eyeball_site_view"

HAnimHumanoid42.sites.append(HAnimSite637)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.USE = "hanim_r_eyeball_site_view"

HAnimHumanoid42.sites.append(HAnimSite638)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.USE = "hanim_l_hand_front_view"

HAnimHumanoid42.sites.append(HAnimSite639)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.USE = "hanim_r_hand_front_view"

HAnimHumanoid42.sites.append(HAnimSite640)

Scene28.children.append(HAnimHumanoid42)

X3D0.Scene = Scene28
f = open("../data/HAnim1SpecificationLOA3Invisible.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Invisible.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnim1SpecificationLOA3Invisible.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

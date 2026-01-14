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
meta3.content = "DiamondManLOA_1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Matthew T. Beitler"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Joel S. Pawloski"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "12 November 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Tue, 09 Sep 2025 19:37:54 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "../Templates/DiamondManLOA_1.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "http://ece.uwaterloo.ca/~HAnim"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "http://www.cis.upenn.edu/~beitler"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "error"
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "Image"
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "Image"
meta20.content = "humanoid_landmark_locations.gif"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "motto"
meta22.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "warning"
meta23.content = "Still needs comments on CAESAR feature points inserted"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "identifier"
meta24.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d"

head1.children.append(meta24)

X3D0.head = head1
Scene25 = x3d.Scene()
WorldInfo26 = x3d.WorldInfo()
WorldInfo26.title = "HANIM 1.1 Default Joint Centers, LOA1"
WorldInfo26.info = ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]

Scene25.children.append(WorldInfo26)
NavigationInfo27 = x3d.NavigationInfo()
NavigationInfo27.speed = 1.5

Scene25.children.append(NavigationInfo27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.description = "Diamond Man, LOA 1"
Viewpoint28.position = [0,1,3]
Viewpoint28.centerOfRotation = [0,1,0]

Scene25.children.append(Viewpoint28)
HAnimHumanoid29 = x3d.HAnimHumanoid()
HAnimHumanoid29.DEF = "hanim_humanoid"
HAnimHumanoid29.name = "humanoid"
HAnimHumanoid29.version = "1.0"
MetadataSet30 = x3d.MetadataSet()
MetadataSet30.name = "HAnimHumanoid.info"
MetadataSet30.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "authorEmail"

if MetadataSet30.value is None:
    MetadataSet30.value = []
MetadataSet30.value.append(MetadataString31)
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "authorName"

if MetadataSet30.value is None:
    MetadataSet30.value = []
MetadataSet30.value.append(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.name = "copyright"

if MetadataSet30.value is None:
    MetadataSet30.value = []
MetadataSet30.value.append(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "humanoidVersion"

if MetadataSet30.value is None:
    MetadataSet30.value = []
MetadataSet30.value.append(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.name = "usageRestrictions"

if MetadataSet30.value is None:
    MetadataSet30.value = []
MetadataSet30.value.append(MetadataString35)

HAnimHumanoid29.metadata = MetadataSet30
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.DEF = "hanim_HumanoidRoot"
HAnimJoint36.name = "humanoid_root"
HAnimJoint36.center = [0,0.824,0.0277]
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.DEF = "hanim_sacroiliac"
HAnimJoint37.name = "sacroiliac"
HAnimJoint37.center = [0,0.9149,0.0016]
HAnimSegment38 = x3d.HAnimSegment()
HAnimSegment38.DEF = "hanim_pelvis"
HAnimSegment38.name = "pelvis"
Transform39 = x3d.Transform()
Transform39.translation = [0,0.9149,0.0016]
Shape40 = x3d.Shape()
Shape40.DEF = "DiamondShape"
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.diffuseColor = [1,1,0]

Appearance41.material = Material42

Shape40.appearance = Appearance41
IndexedFaceSet43 = x3d.IndexedFaceSet()
IndexedFaceSet43.creaseAngle = 0.5
IndexedFaceSet43.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate44 = x3d.Coordinate()
Coordinate44.DEF = "points"
Coordinate44.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet43.coord = Coordinate44

Shape40.geometry = IndexedFaceSet43

Transform39.children.append(Shape40)

HAnimSegment38.children.append(Transform39)

HAnimJoint37.children.append(HAnimSegment38)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.DEF = "hanim_l_hip"
HAnimJoint45.name = "l_hip"
HAnimJoint45.center = [0.0961,0.9124,-0.0001]
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.DEF = "hanim_l_thigh"
HAnimSegment46.name = "l_thigh"
Transform47 = x3d.Transform()
Transform47.translation = [0.0961,0.9124,-0.0001]
Shape48 = x3d.Shape()
Shape48.USE = "DiamondShape"

Transform47.children.append(Shape48)

HAnimSegment46.children.append(Transform47)
HAnimSite49 = x3d.HAnimSite()
HAnimSite49.DEF = "hanim_l_knee_crease_pt"
HAnimSite49.name = "l_knee_crease_pt"
HAnimSite49.translation = [0.0993,0.4881,-0.0309]

HAnimSegment46.children.append(HAnimSite49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.DEF = "hanim_l_femoral_lateral_epicn_pt"
HAnimSite50.name = "l_femoral_lateral_epicn_pt"
HAnimSite50.translation = [0.1598,0.4967,0.0297]

HAnimSegment46.children.append(HAnimSite50)
HAnimSite51 = x3d.HAnimSite()
HAnimSite51.DEF = "hanim_l_femoral_medial_epicn_pt"
HAnimSite51.name = "l_femoral_medial_epicn_pt"
HAnimSite51.translation = [0.0398,0.4946,0.0303]

HAnimSegment46.children.append(HAnimSite51)

HAnimJoint45.children.append(HAnimSegment46)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.DEF = "hanim_l_knee"
HAnimJoint52.name = "l_knee"
HAnimJoint52.center = [0.104,0.4867,0.0308]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.DEF = "hanim_l_calf"
HAnimSegment53.name = "l_calf"
Transform54 = x3d.Transform()
Transform54.translation = [0.104,0.4867,0.0308]
Shape55 = x3d.Shape()
Shape55.USE = "DiamondShape"

Transform54.children.append(Shape55)

HAnimSegment53.children.append(Transform54)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.DEF = "hanim_l_ankle"
HAnimJoint56.name = "l_ankle"
HAnimJoint56.center = [0.1101,0.0656,-0.0736]
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.DEF = "hanim_l_hindfoot"
HAnimSegment57.name = "l_hindfoot"
Transform58 = x3d.Transform()
Transform58.translation = [0.1101,0.0656,-0.0736]
Shape59 = x3d.Shape()
Shape59.USE = "DiamondShape"

Transform58.children.append(Shape59)

HAnimSegment57.children.append(Transform58)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite60.name = "l_lateral_malleolus_pt"
HAnimSite60.translation = [0.1308,0.0597,-0.1032]

HAnimSegment57.children.append(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite61.name = "l_medial_malleolus_pt"
HAnimSite61.translation = [0.089,0.0716,-0.0881]

HAnimSegment57.children.append(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.DEF = "hanim_l_sphyrion_pt"
HAnimSite62.name = "l_sphyrion_pt"
HAnimSite62.translation = [0.089,0.0575,-0.0943]

HAnimSegment57.children.append(HAnimSite62)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.DEF = "hanim_l_calcaneous_post_pt"
HAnimSite63.name = "l_calcaneous_post_pt"
HAnimSite63.translation = [0.0974,0.0259,-0.1171]

HAnimSegment57.children.append(HAnimSite63)

HAnimJoint56.children.append(HAnimSegment57)
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.DEF = "hanim_l_midtarsal"
HAnimJoint64.name = "l_midtarsal"
HAnimJoint64.center = [0.1086,0.0001,0.0368]
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.DEF = "hanim_l_middistal"
HAnimSegment65.name = "l_middistal"
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.DEF = "hanim_l_middistal_tip"
HAnimSite66.name = "l_middistal_tip"
HAnimSite66.translation = [0.1354,0.0016,0.1476]

HAnimSegment65.children.append(HAnimSite66)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.DEF = "hanim_l_metatarsal_pha5_pt"
HAnimSite67.name = "l_metatarsal_pha5_pt"
HAnimSite67.translation = [0.1825,0.007,0.0928]

HAnimSegment65.children.append(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.DEF = "hanim_l_metatarsal_pha1_pt"
HAnimSite68.name = "l_metatarsal_pha1_pt"
HAnimSite68.translation = [0.0816,0.0232,0.0106]

HAnimSegment65.children.append(HAnimSite68)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.DEF = "hanim_l_digit2_pt"
HAnimSite69.name = "l_digit2_pt"
HAnimSite69.translation = [0.1195,0.0079,0.1433]

HAnimSegment65.children.append(HAnimSite69)

HAnimJoint64.children.append(HAnimSegment65)

HAnimJoint56.children.append(HAnimJoint64)

HAnimJoint52.children.append(HAnimJoint56)

HAnimJoint45.children.append(HAnimJoint52)

HAnimJoint37.children.append(HAnimJoint45)
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.DEF = "hanim_r_hip"
HAnimJoint70.name = "r_hip"
HAnimJoint70.center = [-0.095,0.9171,0.0029]
HAnimSegment71 = x3d.HAnimSegment()
HAnimSegment71.DEF = "hanim_r_thigh"
HAnimSegment71.name = "r_thigh"
Transform72 = x3d.Transform()
Transform72.translation = [-0.095,0.9171,0.0029]
Shape73 = x3d.Shape()
Shape73.USE = "DiamondShape"

Transform72.children.append(Shape73)

HAnimSegment71.children.append(Transform72)
HAnimSite74 = x3d.HAnimSite()
HAnimSite74.DEF = "hanim_r_knee_crease_pt"
HAnimSite74.name = "r_knee_crease_pt"
HAnimSite74.translation = [-0.0825,0.4932,-0.0326]

HAnimSegment71.children.append(HAnimSite74)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.DEF = "hanim_r_femoral_lateral_epicn_pt"
HAnimSite75.name = "r_femoral_lateral_epicn_pt"
HAnimSite75.translation = [-0.1421,0.4992,0.031]

HAnimSegment71.children.append(HAnimSite75)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.DEF = "hanim_r_femoral_medial_epicn_pt"
HAnimSite76.name = "r_femoral_medial_epicn_pt"
HAnimSite76.translation = [-0.0221,0.5014,0.0289]

HAnimSegment71.children.append(HAnimSite76)

HAnimJoint70.children.append(HAnimSegment71)
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.DEF = "hanim_r_knee"
HAnimJoint77.name = "r_knee"
HAnimJoint77.center = [-0.0867,0.4913,0.0318]
HAnimSegment78 = x3d.HAnimSegment()
HAnimSegment78.DEF = "hanim_r_calf"
HAnimSegment78.name = "r_calf"
Transform79 = x3d.Transform()
Transform79.translation = [-0.0867,0.4913,0.0318]
Shape80 = x3d.Shape()
Shape80.USE = "DiamondShape"

Transform79.children.append(Shape80)

HAnimSegment78.children.append(Transform79)

HAnimJoint77.children.append(HAnimSegment78)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.DEF = "hanim_r_ankle"
HAnimJoint81.name = "r_ankle"
HAnimJoint81.center = [-0.0801,0.0712,-0.0766]
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.DEF = "hanim_r_hindfoot"
HAnimSegment82.name = "r_hindfoot"
Transform83 = x3d.Transform()
Transform83.translation = [-0.0801,0.0712,-0.0766]
Shape84 = x3d.Shape()
Shape84.USE = "DiamondShape"

Transform83.children.append(Shape84)

HAnimSegment82.children.append(Transform83)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite85.name = "r_lateral_malleolus_pt"
HAnimSite85.translation = [-0.1006,0.0658,-0.1075]

HAnimSegment82.children.append(HAnimSite85)
HAnimSite86 = x3d.HAnimSite()
HAnimSite86.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite86.name = "r_medial_malleolus_pt"
HAnimSite86.translation = [-0.0591,0.076,-0.0928]

HAnimSegment82.children.append(HAnimSite86)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.DEF = "hanim_r_sphyrion_pt"
HAnimSite87.name = "r_sphyrion_pt"
HAnimSite87.translation = [-0.0603,0.061,-0.1002]

HAnimSegment82.children.append(HAnimSite87)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.DEF = "hanim_r_calcaneous_post_pt"
HAnimSite88.name = "r_calcaneous_post_pt"
HAnimSite88.translation = [-0.0692,0.0297,-0.1221]

HAnimSegment82.children.append(HAnimSite88)

HAnimJoint81.children.append(HAnimSegment82)
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.DEF = "hanim_r_midtarsal"
HAnimJoint89.name = "r_midtarsal"
HAnimJoint89.center = [-0.0801,0,0.0368]
HAnimSegment90 = x3d.HAnimSegment()
HAnimSegment90.DEF = "hanim_r_middistal"
HAnimSegment90.name = "r_middistal"
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.DEF = "hanim_r_middistal_tip"
HAnimSite91.name = "r_middistal_tip"
HAnimSite91.translation = [-0.1043,-0.0227,0.145]

HAnimSegment90.children.append(HAnimSite91)
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.DEF = "hanim_r_metatarsal_pha5_pt"
HAnimSite92.name = "r_metatarsal_pha5_pt"
HAnimSite92.translation = [-0.1523,0.0166,0.0895]

HAnimSegment90.children.append(HAnimSite92)
HAnimSite93 = x3d.HAnimSite()
HAnimSite93.DEF = "hanim_r_metatarsal_pha1_pt"
HAnimSite93.name = "r_metatarsal_pha1_pt"
HAnimSite93.translation = [-0.0521,0.026,0.0127]

HAnimSegment90.children.append(HAnimSite93)
HAnimSite94 = x3d.HAnimSite()
HAnimSite94.DEF = "hanim_r_digit2_pt"
HAnimSite94.name = "r_digit2_pt"
HAnimSite94.translation = [-0.0883,0.0134,0.1383]

HAnimSegment90.children.append(HAnimSite94)

HAnimJoint89.children.append(HAnimSegment90)

HAnimJoint81.children.append(HAnimJoint89)

HAnimJoint77.children.append(HAnimJoint81)

HAnimJoint70.children.append(HAnimJoint77)

HAnimJoint37.children.append(HAnimJoint70)

HAnimJoint36.children.append(HAnimJoint37)
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.DEF = "hanim_vl1"
HAnimJoint95.name = "vl1"
HAnimJoint95.center = [-0.00405,1.07,-0.0275]
HAnimSegment96 = x3d.HAnimSegment()
HAnimSegment96.DEF = "hanim_l1"
HAnimSegment96.name = "l1"

HAnimJoint95.children.append(HAnimSegment96)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.DEF = "hanim_l_shoulder"
HAnimJoint97.name = "l_shoulder"
HAnimJoint97.center = [0.2029,1.4376,-0.0387]
HAnimSegment98 = x3d.HAnimSegment()
HAnimSegment98.DEF = "hanim_l_upperarm"
HAnimSegment98.name = "l_upperarm"
Transform99 = x3d.Transform()
Transform99.translation = [0.2029,1.4376,-0.0387]
Shape100 = x3d.Shape()
Shape100.USE = "DiamondShape"

Transform99.children.append(Shape100)

HAnimSegment98.children.append(Transform99)
Transform101 = x3d.Transform()
Transform101.DEF = "l_upperarm_adjust"
Transform101.translation = [0.2029,1.4376,-0.0387]
Transform101.rotation = [1,0,0,0.119]
Transform101.center = [0.182,1.22,-0.047]

HAnimSegment98.children.append(Transform101)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.DEF = "hanim_l_humeral_lateral_epicn_pt"
HAnimSite102.name = "l_humeral_lateral_epicn_pt"
HAnimSite102.translation = [0.228,1.1482,-0.11]

HAnimSegment98.children.append(HAnimSite102)

HAnimJoint97.children.append(HAnimSegment98)
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.DEF = "hanim_l_elbow"
HAnimJoint103.name = "l_elbow"
HAnimJoint103.center = [0.2014,1.1357,-0.0682]
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.DEF = "hanim_l_forearm"
HAnimSegment104.name = "l_forearm"
Transform105 = x3d.Transform()
Transform105.translation = [0.2014,1.1357,-0.0682]
Shape106 = x3d.Shape()
Shape106.USE = "DiamondShape"

Transform105.children.append(Shape106)

HAnimSegment104.children.append(Transform105)
Transform107 = x3d.Transform()
Transform107.DEF = "l_forearm_adjust"
Transform107.translation = [0.2014,1.1357,-0.0682]
Transform107.rotation = [-1,0,0,0.1]
Transform107.center = [0.198,0.961,-0.0405]

HAnimSegment104.children.append(Transform107)
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.DEF = "hanim_l_radial_styloid_pt"
HAnimSite108.name = "l_radial_styloid_pt"
HAnimSite108.translation = [0.1901,0.8645,-0.0415]

HAnimSegment104.children.append(HAnimSite108)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.DEF = "hanim_l_olecranon_pt"
HAnimSite109.name = "l_olecranon_pt"
HAnimSite109.translation = [-0.1962,1.1375,-0.1123]

HAnimSegment104.children.append(HAnimSite109)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.DEF = "hanim_l_humeral_medial_epicn_pt"
HAnimSite110.name = "l_humeral_medial_epicn_pt"
HAnimSite110.translation = [0.1735,1.1272,-0.1113]

HAnimSegment104.children.append(HAnimSite110)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.DEF = "hanim_l_radiale_pt"
HAnimSite111.name = "l_radiale_pt"
HAnimSite111.translation = [0.2182,1.1212,-0.1167]

HAnimSegment104.children.append(HAnimSite111)

HAnimJoint103.children.append(HAnimSegment104)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.DEF = "hanim_l_wrist"
HAnimJoint112.name = "l_wrist"
HAnimJoint112.center = [0.1984,0.8663,-0.0583]
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.DEF = "hanim_l_hand"
HAnimSegment113.name = "l_hand"
Transform114 = x3d.Transform()
Transform114.translation = [0.1984,0.8663,-0.0583]
Shape115 = x3d.Shape()
Shape115.USE = "DiamondShape"

Transform114.children.append(Shape115)

HAnimSegment113.children.append(Transform114)
Transform116 = x3d.Transform()
Transform116.DEF = "l_hand_adjust"
Transform116.translation = [0.1984,0.8663,-0.0583]
Transform116.rotation = [-0.06361,-0.9967,0.04988,1.333]
Transform116.center = [0.213,0.811,-0.0338]

HAnimSegment113.children.append(Transform116)
HAnimSite117 = x3d.HAnimSite()
HAnimSite117.DEF = "hanim_l_hand_tip"
HAnimSite117.name = "l_hand_tip"
HAnimSite117.translation = [0.208,0.6731,-0.0491]

HAnimSegment113.children.append(HAnimSite117)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.DEF = "hanim_l_metacarpal_pha2_pt"
HAnimSite118.name = "l_metacarpal_pha2_pt"
HAnimSite118.translation = [0.2009,0.8139,-0.0237]

HAnimSegment113.children.append(HAnimSite118)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.DEF = "hanim_l_dactylion_pt"
HAnimSite119.name = "l_dactylion_pt"
HAnimSite119.translation = [0.2056,0.6743,-0.0482]

HAnimSegment113.children.append(HAnimSite119)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite120.name = "l_ulnar_styloid_pt"
HAnimSite120.translation = [-0.2142,0.8529,-0.0648]

HAnimSegment113.children.append(HAnimSite120)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.DEF = "hanim_l_metacarpal_pha5_pt"
HAnimSite121.name = "l_metacarpal_pha5_pt"
HAnimSite121.translation = [0.1929,0.786,-0.1122]

HAnimSegment113.children.append(HAnimSite121)

HAnimJoint112.children.append(HAnimSegment113)

HAnimJoint103.children.append(HAnimJoint112)

HAnimJoint97.children.append(HAnimJoint103)

HAnimJoint95.children.append(HAnimJoint97)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.DEF = "hanim_r_shoulder"
HAnimJoint122.name = "r_shoulder"
HAnimJoint122.center = [-0.1907,1.4407,-0.0325]
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.DEF = "hanim_r_upperarm"
HAnimSegment123.name = "r_upperarm"
Transform124 = x3d.Transform()
Transform124.translation = [-0.1907,1.4407,-0.0325]
Shape125 = x3d.Shape()
Shape125.USE = "DiamondShape"

Transform124.children.append(Shape125)

HAnimSegment123.children.append(Transform124)
Transform126 = x3d.Transform()
Transform126.DEF = "r_upperarm_adjust"
Transform126.translation = [-0.1907,1.4407,-0.0325]
Transform126.rotation = [1,0,0,0.0836]
Transform126.center = [-0.182,1.22,-0.047]

HAnimSegment123.children.append(Transform126)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.DEF = "hanim_r_humeral_lateral_epicn_pt"
HAnimSite127.name = "r_humeral_lateral_epicn_pt"
HAnimSite127.translation = [-0.2224,1.1517,-0.1033]

HAnimSegment123.children.append(HAnimSite127)

HAnimJoint122.children.append(HAnimSegment123)
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.DEF = "hanim_r_elbow"
HAnimJoint128.name = "r_elbow"
HAnimJoint128.center = [-0.1949,1.1388,-0.062]
HAnimSegment129 = x3d.HAnimSegment()
HAnimSegment129.DEF = "hanim_r_forearm"
HAnimSegment129.name = "r_forearm"
Transform130 = x3d.Transform()
Transform130.translation = [-0.1949,1.1388,-0.062]
Shape131 = x3d.Shape()
Shape131.USE = "DiamondShape"

Transform130.children.append(Shape131)

HAnimSegment129.children.append(Transform130)
Transform132 = x3d.Transform()
Transform132.DEF = "r_forearm_adjust"
Transform132.translation = [-0.1949,1.1388,-0.062]
Transform132.rotation = [-1,0,0,0.1254]
Transform132.center = [-0.198,0.961,-0.0397]

HAnimSegment129.children.append(Transform132)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.DEF = "hanim_r_radial_styloid_pt"
HAnimSite133.name = "r_radial_styloid_pt"
HAnimSite133.translation = [-0.1884,0.8676,-0.036]

HAnimSegment129.children.append(HAnimSite133)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.DEF = "hanim_r_olecranon_pt"
HAnimSite134.name = "r_olecranon_pt"
HAnimSite134.translation = [-0.1907,1.1405,-0.1065]

HAnimSegment129.children.append(HAnimSite134)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.DEF = "hanim_r_humeral_medial_epicn_pt"
HAnimSite135.name = "r_humeral_medial_epicn_pt"
HAnimSite135.translation = [-0.168,1.1298,-0.1062]

HAnimSegment129.children.append(HAnimSite135)
HAnimSite136 = x3d.HAnimSite()
HAnimSite136.DEF = "hanim_r_radiale_pt"
HAnimSite136.name = "r_radiale_pt"
HAnimSite136.translation = [-0.213,1.1305,-0.1091]

HAnimSegment129.children.append(HAnimSite136)

HAnimJoint128.children.append(HAnimSegment129)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.DEF = "hanim_r_wrist"
HAnimJoint137.name = "r_wrist"
HAnimJoint137.center = [-0.1959,0.8694,-0.0521]
HAnimSegment138 = x3d.HAnimSegment()
HAnimSegment138.DEF = "hanim_r_hand"
HAnimSegment138.name = "r_hand"
Transform139 = x3d.Transform()
Transform139.translation = [-0.1959,0.8694,-0.0521]
Shape140 = x3d.Shape()
Shape140.USE = "DiamondShape"

Transform139.children.append(Shape140)

HAnimSegment138.children.append(Transform139)
Transform141 = x3d.Transform()
Transform141.DEF = "r_hand_adjust"
Transform141.rotation = [-0.09024,0.994,-0.0624,1.216]
Transform141.center = [-0.217,0.811,-0.0338]

HAnimSegment138.children.append(Transform141)
HAnimSite142 = x3d.HAnimSite()
HAnimSite142.DEF = "hanim_r_hand_tip"
HAnimSite142.name = "r_hand_tip"
HAnimSite142.translation = [-0.1969,0.6758,-0.0427]

HAnimSegment138.children.append(HAnimSite142)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.DEF = "hanim_r_metacarpal_pha2_pt"
HAnimSite143.name = "r_metacarpal_pha2_pt"
HAnimSite143.translation = [-0.1977,0.8169,-0.0177]

HAnimSegment138.children.append(HAnimSite143)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.DEF = "hanim_r_dactylion_pt"
HAnimSite144.name = "r_dactylion_pt"
HAnimSite144.translation = [-0.1941,0.6772,-0.0423]

HAnimSegment138.children.append(HAnimSite144)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite145.name = "r_ulnar_styloid_pt"
HAnimSite145.translation = [-0.2117,0.8562,-0.0584]

HAnimSegment138.children.append(HAnimSite145)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.DEF = "hanim_r_metacarpal_pha5_pt"
HAnimSite146.name = "r_metacarpal_pha5_pt"
HAnimSite146.translation = [-0.1929,0.789,-0.1064]

HAnimSegment138.children.append(HAnimSite146)

HAnimJoint137.children.append(HAnimSegment138)

HAnimJoint128.children.append(HAnimJoint137)

HAnimJoint122.children.append(HAnimJoint128)

HAnimJoint95.children.append(HAnimJoint122)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.DEF = "hanim_vc4"
HAnimJoint147.name = "vc4"
HAnimJoint147.center = [0,1.43,-0.0458]
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.DEF = "hanim_c4"
HAnimSegment148.name = "c4"

HAnimJoint147.children.append(HAnimSegment148)

HAnimJoint95.children.append(HAnimJoint147)

HAnimJoint36.children.append(HAnimJoint95)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.DEF = "hanim_vl5"
HAnimJoint149.name = "vl5"
HAnimJoint149.center = [0.0028,1.0568,-0.0776]
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.DEF = "hanim_skullbase"
HAnimJoint150.name = "skullbase"
HAnimJoint150.center = [0.0044,1.6209,0.0236]
HAnimSegment151 = x3d.HAnimSegment()
HAnimSegment151.DEF = "hanim_skull"
HAnimSegment151.name = "skull"
Transform152 = x3d.Transform()
Transform152.translation = [0.0044,1.6209,0.0236]
Shape153 = x3d.Shape()
Shape153.USE = "DiamondShape"

Transform152.children.append(Shape153)

HAnimSegment151.children.append(Transform152)
HAnimSite154 = x3d.HAnimSite()
HAnimSite154.DEF = "hanim_skull_tip"
HAnimSite154.name = "skull_tip"
HAnimSite154.translation = [0.005,1.7504,0.0055]

HAnimSegment151.children.append(HAnimSite154)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.DEF = "hanim_sellion_pt"
HAnimSite155.name = "sellion_pt"
HAnimSite155.translation = [0.0058,1.6316,0.0852]

HAnimSegment151.children.append(HAnimSite155)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.DEF = "hanim_r_infraorbitale_pt"
HAnimSite156.name = "r_infraorbitale_pt"
HAnimSite156.translation = [-0.0237,1.6171,0.0752]

HAnimSegment151.children.append(HAnimSite156)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.DEF = "hanim_l_infraorbitale_pt"
HAnimSite157.name = "l_infraorbitale_pt"
HAnimSite157.translation = [0.0341,1.6171,0.0752]

HAnimSegment151.children.append(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.DEF = "hanim_supramenton_pt"
HAnimSite158.name = "supramenton_pt"
HAnimSite158.translation = [0.0061,1.541,0.0805]

HAnimSegment151.children.append(HAnimSite158)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.DEF = "hanim_r_tragion_pt"
HAnimSite159.name = "r_tragion_pt"
HAnimSite159.translation = [-0.0646,1.6347,0.0302]

HAnimSegment151.children.append(HAnimSite159)
HAnimSite160 = x3d.HAnimSite()
HAnimSite160.DEF = "hanim_r_gonion_pt"
HAnimSite160.name = "r_gonion_pt"
HAnimSite160.translation = [-0.052,1.5529,0.0347]

HAnimSegment151.children.append(HAnimSite160)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.DEF = "hanim_l_tragion_pt"
HAnimSite161.name = "l_tragion_pt"
HAnimSite161.translation = [0.0739,1.6348,0.0282]

HAnimSegment151.children.append(HAnimSite161)
HAnimSite162 = x3d.HAnimSite()
HAnimSite162.DEF = "hanim_l_gonion_pt"
HAnimSite162.name = "l_gonion_pt"
HAnimSite162.translation = [0.0631,1.553,0.033]

HAnimSegment151.children.append(HAnimSite162)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.DEF = "hanim_nuchale_pt"
HAnimSite163.name = "nuchale_pt"
HAnimSite163.translation = [0.0039,1.5972,-0.0796]

HAnimSegment151.children.append(HAnimSite163)

HAnimJoint150.children.append(HAnimSegment151)

HAnimJoint149.children.append(HAnimJoint150)

HAnimJoint36.children.append(HAnimJoint149)

HAnimHumanoid29.skeleton.append(HAnimJoint36)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "hanim_HumanoidRoot"

HAnimHumanoid29.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.USE = "hanim_sacroiliac"

HAnimHumanoid29.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.USE = "hanim_vl1"

HAnimHumanoid29.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.USE = "hanim_vc4"

HAnimHumanoid29.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.USE = "hanim_skullbase"

HAnimHumanoid29.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.USE = "hanim_vl5"

HAnimHumanoid29.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.USE = "hanim_l_ankle"

HAnimHumanoid29.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.USE = "hanim_r_ankle"

HAnimHumanoid29.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.USE = "hanim_l_elbow"

HAnimHumanoid29.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.USE = "hanim_r_elbow"

HAnimHumanoid29.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.USE = "hanim_l_hip"

HAnimHumanoid29.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.USE = "hanim_r_hip"

HAnimHumanoid29.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.USE = "hanim_l_knee"

HAnimHumanoid29.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.USE = "hanim_r_knee"

HAnimHumanoid29.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.USE = "hanim_l_midtarsal"

HAnimHumanoid29.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.USE = "hanim_r_midtarsal"

HAnimHumanoid29.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.USE = "hanim_l_shoulder"

HAnimHumanoid29.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.USE = "hanim_r_shoulder"

HAnimHumanoid29.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.USE = "hanim_l_wrist"

HAnimHumanoid29.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.USE = "hanim_r_wrist"

HAnimHumanoid29.joints.append(HAnimJoint183)
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.USE = "hanim_pelvis"

HAnimHumanoid29.segments.append(HAnimSegment184)
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.USE = "hanim_l1"

HAnimHumanoid29.segments.append(HAnimSegment185)
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.USE = "hanim_c4"

HAnimHumanoid29.segments.append(HAnimSegment186)
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.USE = "hanim_skull"

HAnimHumanoid29.segments.append(HAnimSegment187)
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.USE = "hanim_l_calf"

HAnimHumanoid29.segments.append(HAnimSegment188)
HAnimSegment189 = x3d.HAnimSegment()
HAnimSegment189.USE = "hanim_r_calf"

HAnimHumanoid29.segments.append(HAnimSegment189)
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.USE = "hanim_l_forearm"

HAnimHumanoid29.segments.append(HAnimSegment190)
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.USE = "hanim_r_forearm"

HAnimHumanoid29.segments.append(HAnimSegment191)
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.USE = "hanim_l_hand"

HAnimHumanoid29.segments.append(HAnimSegment192)
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.USE = "hanim_r_hand"

HAnimHumanoid29.segments.append(HAnimSegment193)
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.USE = "hanim_l_hindfoot"

HAnimHumanoid29.segments.append(HAnimSegment194)
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.USE = "hanim_r_hindfoot"

HAnimHumanoid29.segments.append(HAnimSegment195)
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.USE = "hanim_l_middistal"

HAnimHumanoid29.segments.append(HAnimSegment196)
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.USE = "hanim_r_middistal"

HAnimHumanoid29.segments.append(HAnimSegment197)
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.USE = "hanim_l_thigh"

HAnimHumanoid29.segments.append(HAnimSegment198)
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.USE = "hanim_r_thigh"

HAnimHumanoid29.segments.append(HAnimSegment199)
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.USE = "hanim_l_upperarm"

HAnimHumanoid29.segments.append(HAnimSegment200)
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.USE = "hanim_r_upperarm"

HAnimHumanoid29.segments.append(HAnimSegment201)
HAnimSite202 = x3d.HAnimSite()
HAnimSite202.USE = "hanim_skull_tip"

HAnimHumanoid29.sites.append(HAnimSite202)
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.USE = "hanim_sellion_pt"

HAnimHumanoid29.sites.append(HAnimSite203)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.USE = "hanim_supramenton_pt"

HAnimHumanoid29.sites.append(HAnimSite204)
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.USE = "hanim_nuchale_pt"

HAnimHumanoid29.sites.append(HAnimSite205)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.USE = "hanim_l_calcaneous_post_pt"

HAnimHumanoid29.sites.append(HAnimSite206)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.USE = "hanim_r_calcaneous_post_pt"

HAnimHumanoid29.sites.append(HAnimSite207)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.USE = "hanim_l_dactylion_pt"

HAnimHumanoid29.sites.append(HAnimSite208)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.USE = "hanim_r_dactylion_pt"

HAnimHumanoid29.sites.append(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.USE = "hanim_l_digit2_pt"

HAnimHumanoid29.sites.append(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.USE = "hanim_r_digit2_pt"

HAnimHumanoid29.sites.append(HAnimSite211)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.USE = "hanim_l_femoral_lateral_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite212)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.USE = "hanim_r_femoral_lateral_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite213)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.USE = "hanim_l_femoral_medial_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.USE = "hanim_r_femoral_medial_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.USE = "hanim_r_gonion_pt"

HAnimHumanoid29.sites.append(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.USE = "hanim_l_gonion_pt"

HAnimHumanoid29.sites.append(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.USE = "hanim_l_hand_tip"

HAnimHumanoid29.sites.append(HAnimSite218)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.USE = "hanim_r_hand_tip"

HAnimHumanoid29.sites.append(HAnimSite219)
HAnimSite220 = x3d.HAnimSite()
HAnimSite220.USE = "hanim_l_humeral_lateral_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite220)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.USE = "hanim_r_humeral_lateral_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite221)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.USE = "hanim_l_humeral_medial_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.USE = "hanim_r_humeral_medial_epicn_pt"

HAnimHumanoid29.sites.append(HAnimSite223)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid29.sites.append(HAnimSite224)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid29.sites.append(HAnimSite225)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid29.sites.append(HAnimSite226)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid29.sites.append(HAnimSite227)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid29.sites.append(HAnimSite228)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid29.sites.append(HAnimSite229)
HAnimSite230 = x3d.HAnimSite()
HAnimSite230.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid29.sites.append(HAnimSite230)
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid29.sites.append(HAnimSite231)
HAnimSite232 = x3d.HAnimSite()
HAnimSite232.USE = "hanim_l_metacarpal_pha2_pt"

HAnimHumanoid29.sites.append(HAnimSite232)
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.USE = "hanim_r_metacarpal_pha2_pt"

HAnimHumanoid29.sites.append(HAnimSite233)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.USE = "hanim_l_metacarpal_pha5_pt"

HAnimHumanoid29.sites.append(HAnimSite234)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.USE = "hanim_r_metacarpal_pha5_pt"

HAnimHumanoid29.sites.append(HAnimSite235)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.USE = "hanim_l_metatarsal_pha1_pt"

HAnimHumanoid29.sites.append(HAnimSite236)
HAnimSite237 = x3d.HAnimSite()
HAnimSite237.USE = "hanim_r_metatarsal_pha1_pt"

HAnimHumanoid29.sites.append(HAnimSite237)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.USE = "hanim_l_metatarsal_pha5_pt"

HAnimHumanoid29.sites.append(HAnimSite238)
HAnimSite239 = x3d.HAnimSite()
HAnimSite239.USE = "hanim_r_metatarsal_pha5_pt"

HAnimHumanoid29.sites.append(HAnimSite239)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.USE = "hanim_l_middistal_tip"

HAnimHumanoid29.sites.append(HAnimSite240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.USE = "hanim_r_middistal_tip"

HAnimHumanoid29.sites.append(HAnimSite241)
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.USE = "hanim_l_olecranon_pt"

HAnimHumanoid29.sites.append(HAnimSite242)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.USE = "hanim_r_olecranon_pt"

HAnimHumanoid29.sites.append(HAnimSite243)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid29.sites.append(HAnimSite244)
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid29.sites.append(HAnimSite245)
HAnimSite246 = x3d.HAnimSite()
HAnimSite246.USE = "hanim_l_radiale_pt"

HAnimHumanoid29.sites.append(HAnimSite246)
HAnimSite247 = x3d.HAnimSite()
HAnimSite247.USE = "hanim_r_radiale_pt"

HAnimHumanoid29.sites.append(HAnimSite247)
HAnimSite248 = x3d.HAnimSite()
HAnimSite248.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid29.sites.append(HAnimSite248)
HAnimSite249 = x3d.HAnimSite()
HAnimSite249.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid29.sites.append(HAnimSite249)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.USE = "hanim_r_tragion_pt"

HAnimHumanoid29.sites.append(HAnimSite250)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.USE = "hanim_l_tragion_pt"

HAnimHumanoid29.sites.append(HAnimSite251)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid29.sites.append(HAnimSite252)
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid29.sites.append(HAnimSite253)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.DEF = "hanim_DiamondManLOA_1_view"
HAnimSite254.name = "DiamondManLOA_1_view"
Viewpoint255 = x3d.Viewpoint()
Viewpoint255.DEF = "InclinedView"
Viewpoint255.description = "Inclined View"
Viewpoint255.position = [1.62,1.05,2.06]
Viewpoint255.orientation = [-0.113,0.993,0.0347,0.671]

HAnimSite254.children.append(Viewpoint255)
Viewpoint256 = x3d.Viewpoint()
Viewpoint256.DEF = "FrontView"
Viewpoint256.description = "Front View"
Viewpoint256.position = [0,0.854,2.57665]

HAnimSite254.children.append(Viewpoint256)
Viewpoint257 = x3d.Viewpoint()
Viewpoint257.DEF = "SideView"
Viewpoint257.description = "Side View"
Viewpoint257.position = [2.5929,0.854,0]
Viewpoint257.orientation = [0,1,0,1.57079]

HAnimSite254.children.append(Viewpoint257)
Viewpoint258 = x3d.Viewpoint()
Viewpoint258.DEF = "TopView"
Viewpoint258.description = "Top View"
Viewpoint258.position = [0,3.4495,0]
Viewpoint258.orientation = [1,0,0,-1.57079]

HAnimSite254.children.append(Viewpoint258)

HAnimHumanoid29.viewpoints.append(HAnimSite254)

Scene25.children.append(HAnimHumanoid29)

X3D0.Scene = Scene25
f = open("../data/DiamondManLOA_1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DiamondManLOA_1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DiamondManLOA_1.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta3.content = "DiamondManLOA1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy."

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
meta8.content = "Mon, 15 Sep 2025 05:18:46 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "Image"
meta9.content = "images/BonesAllSkeletonFrontViewLOA1.png"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "Image"
meta10.content = "humanoid_landmark_locations.gif"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "Image"
meta11.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "motto"
meta12.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "warning"
meta13.content = "Still needs comments on CAESAR feature points inserted"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "http://ece.uwaterloo.ca/~HAnim"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "reference"
meta20.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "reference"
meta21.content = "http://www.cis.upenn.edu/~beitler"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "identifier"
meta22.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "generator"
meta23.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta23)

X3D0.head = head1
Scene24 = x3d.Scene()
WorldInfo25 = x3d.WorldInfo()
WorldInfo25.title = "HANIM 1.1 Default Joint Centers, LOA1"
WorldInfo25.info = ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]

Scene24.children.append(WorldInfo25)
NavigationInfo26 = x3d.NavigationInfo()
NavigationInfo26.speed = 1.5

Scene24.children.append(NavigationInfo26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "Diamond Man, LOA 1"
Viewpoint27.position = [0,1,3]
Viewpoint27.centerOfRotation = [0,1,0]

Scene24.children.append(Viewpoint27)
HAnimHumanoid28 = x3d.HAnimHumanoid()
HAnimHumanoid28.DEF = "hanim_humanoid"
HAnimHumanoid28.name = "humanoid"
HAnimHumanoid28.loa = 1
MetadataSet29 = x3d.MetadataSet()
MetadataSet29.name = "HAnimHumanoid.info"
MetadataSet29.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "authorEmail"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString30)
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "authorName"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString31)
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "copyright"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.name = "humanoidVersion"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "usageRestrictions"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString34)

HAnimHumanoid28.metadata = MetadataSet29
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.DEF = "hanim_humanoid_root"
HAnimJoint35.name = "humanoid_root"
HAnimJoint35.center = [0,0.824,0.0277]
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.DEF = "hanim_sacroiliac"
HAnimJoint36.name = "sacroiliac"
HAnimJoint36.center = [0,0.9149,0.0016]
HAnimSegment37 = x3d.HAnimSegment()
HAnimSegment37.DEF = "hanim_pelvis"
HAnimSegment37.name = "pelvis"
Transform38 = x3d.Transform()
Transform38.translation = [0,0.9149,0.0016]
Shape39 = x3d.Shape()
Shape39.DEF = "DiamondShape"
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.diffuseColor = [1,1,0]

Appearance40.material = Material41

Shape39.appearance = Appearance40
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.creaseAngle = 0.5
IndexedFaceSet42.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate43 = x3d.Coordinate()
Coordinate43.DEF = "points"
Coordinate43.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet42.coord = Coordinate43

Shape39.geometry = IndexedFaceSet42

Transform38.children.append(Shape39)

HAnimSegment37.children.append(Transform38)

HAnimJoint36.children.append(HAnimSegment37)
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.DEF = "hanim_l_hip"
HAnimJoint44.name = "l_hip"
HAnimJoint44.center = [0.0961,0.9124,-0.0001]
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.DEF = "hanim_l_thigh"
HAnimSegment45.name = "l_thigh"
Transform46 = x3d.Transform()
Transform46.translation = [0.0961,0.9124,-0.0001]
Shape47 = x3d.Shape()
Shape47.USE = "DiamondShape"

Transform46.children.append(Shape47)

HAnimSegment45.children.append(Transform46)
HAnimSite48 = x3d.HAnimSite()
HAnimSite48.DEF = "hanim_l_knee_crease_pt"
HAnimSite48.name = "l_knee_crease_pt"
HAnimSite48.translation = [0.0993,0.4881,-0.0309]

HAnimSegment45.children.append(HAnimSite48)
HAnimSite49 = x3d.HAnimSite()
HAnimSite49.DEF = "hanim_l_femoral_lateral_epicondyle_pt"
HAnimSite49.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite49.translation = [0.1598,0.4967,0.0297]

HAnimSegment45.children.append(HAnimSite49)
HAnimSite50 = x3d.HAnimSite()
HAnimSite50.DEF = "hanim_l_femoral_medial_epicondyle_pt"
HAnimSite50.name = "l_femoral_medial_epicondyle_pt"
HAnimSite50.translation = [0.0398,0.4946,0.0303]

HAnimSegment45.children.append(HAnimSite50)

HAnimJoint44.children.append(HAnimSegment45)
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.DEF = "hanim_l_knee"
HAnimJoint51.name = "l_knee"
HAnimJoint51.center = [0.104,0.4867,0.0308]
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.DEF = "hanim_l_calf"
HAnimSegment52.name = "l_calf"
Transform53 = x3d.Transform()
Transform53.translation = [0.104,0.4867,0.0308]
Shape54 = x3d.Shape()
Shape54.USE = "DiamondShape"

Transform53.children.append(Shape54)

HAnimSegment52.children.append(Transform53)

HAnimJoint51.children.append(HAnimSegment52)
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.DEF = "hanim_l_talocrural"
HAnimJoint55.name = "l_talocrural"
HAnimJoint55.center = [0.1101,0.0656,-0.0736]
HAnimSegment56 = x3d.HAnimSegment()
HAnimSegment56.DEF = "hanim_l_talus"
HAnimSegment56.name = "l_talus"
Transform57 = x3d.Transform()
Transform57.translation = [0.1101,0.0656,-0.0736]
Shape58 = x3d.Shape()
Shape58.USE = "DiamondShape"

Transform57.children.append(Shape58)

HAnimSegment56.children.append(Transform57)
HAnimSite59 = x3d.HAnimSite()
HAnimSite59.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite59.name = "l_lateral_malleolus_pt"
HAnimSite59.translation = [0.1308,0.0597,-0.1032]

HAnimSegment56.children.append(HAnimSite59)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite60.name = "l_medial_malleolus_pt"
HAnimSite60.translation = [0.089,0.0716,-0.0881]

HAnimSegment56.children.append(HAnimSite60)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.DEF = "hanim_l_sphyrion_pt"
HAnimSite61.name = "l_sphyrion_pt"
HAnimSite61.translation = [0.089,0.0575,-0.0943]

HAnimSegment56.children.append(HAnimSite61)
HAnimSite62 = x3d.HAnimSite()
HAnimSite62.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite62.name = "l_calcaneus_posterior_pt"
HAnimSite62.translation = [0.0974,0.0259,-0.1171]

HAnimSegment56.children.append(HAnimSite62)

HAnimJoint55.children.append(HAnimSegment56)
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint63.name = "l_metatarsophalangeal_2"
HAnimJoint63.center = [0.1086,0.0001,0.0368]
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.DEF = "hanim_l_tarsal_proximal_phalanx_2"
HAnimSegment64.name = "l_tarsal_proximal_phalanx_2"
HAnimSite65 = x3d.HAnimSite()
HAnimSite65.DEF = "hanim_l_middistal_tip"
HAnimSite65.name = "l_middistal_tip"
HAnimSite65.translation = [0.1354,0.0016,0.1476]

HAnimSegment64.children.append(HAnimSite65)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite66.name = "l_metatarsal_phalanx_5_pt"
HAnimSite66.translation = [0.1825,0.007,0.0928]

HAnimSegment64.children.append(HAnimSite66)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite67.name = "l_metatarsal_phalanx_1_pt"
HAnimSite67.translation = [0.0816,0.0232,0.0106]

HAnimSegment64.children.append(HAnimSite67)
HAnimSite68 = x3d.HAnimSite()
HAnimSite68.DEF = "hanim_l_tarsal_distal_phalanx_2_pt"
HAnimSite68.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite68.translation = [0.1195,0.0079,0.1433]

HAnimSegment64.children.append(HAnimSite68)

HAnimJoint63.children.append(HAnimSegment64)

HAnimJoint55.children.append(HAnimJoint63)

HAnimJoint51.children.append(HAnimJoint55)

HAnimJoint44.children.append(HAnimJoint51)

HAnimJoint36.children.append(HAnimJoint44)
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.DEF = "hanim_r_hip"
HAnimJoint69.name = "r_hip"
HAnimJoint69.center = [-0.095,0.9171,0.0029]
HAnimSegment70 = x3d.HAnimSegment()
HAnimSegment70.DEF = "hanim_r_thigh"
HAnimSegment70.name = "r_thigh"
Transform71 = x3d.Transform()
Transform71.translation = [-0.095,0.9171,0.0029]
Shape72 = x3d.Shape()
Shape72.USE = "DiamondShape"

Transform71.children.append(Shape72)

HAnimSegment70.children.append(Transform71)
HAnimSite73 = x3d.HAnimSite()
HAnimSite73.DEF = "hanim_r_knee_crease_pt"
HAnimSite73.name = "r_knee_crease_pt"
HAnimSite73.translation = [-0.0825,0.4932,-0.0326]

HAnimSegment70.children.append(HAnimSite73)
HAnimSite74 = x3d.HAnimSite()
HAnimSite74.DEF = "hanim_r_femoral_lateral_epicondyle_pt"
HAnimSite74.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite74.translation = [-0.1421,0.4992,0.031]

HAnimSegment70.children.append(HAnimSite74)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.DEF = "hanim_r_femoral_medial_epicondyle_pt"
HAnimSite75.name = "r_femoral_medial_epicondyle_pt"
HAnimSite75.translation = [-0.0221,0.5014,0.0289]

HAnimSegment70.children.append(HAnimSite75)

HAnimJoint69.children.append(HAnimSegment70)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.DEF = "hanim_r_knee"
HAnimJoint76.name = "r_knee"
HAnimJoint76.center = [-0.0867,0.4913,0.0318]
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.DEF = "hanim_r_calf"
HAnimSegment77.name = "r_calf"
Transform78 = x3d.Transform()
Transform78.translation = [-0.0867,0.4913,0.0318]
Shape79 = x3d.Shape()
Shape79.USE = "DiamondShape"

Transform78.children.append(Shape79)

HAnimSegment77.children.append(Transform78)

HAnimJoint76.children.append(HAnimSegment77)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.DEF = "hanim_r_talocrural"
HAnimJoint80.name = "r_talocrural"
HAnimJoint80.center = [-0.0801,0.0712,-0.0766]
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.DEF = "hanim_r_talus"
HAnimSegment81.name = "r_talus"
Transform82 = x3d.Transform()
Transform82.translation = [-0.0801,0.0712,-0.0766]
Shape83 = x3d.Shape()
Shape83.USE = "DiamondShape"

Transform82.children.append(Shape83)

HAnimSegment81.children.append(Transform82)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite84.name = "r_lateral_malleolus_pt"
HAnimSite84.translation = [-0.1006,0.0658,-0.1075]

HAnimSegment81.children.append(HAnimSite84)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite85.name = "r_medial_malleolus_pt"
HAnimSite85.translation = [-0.0591,0.076,-0.0928]

HAnimSegment81.children.append(HAnimSite85)
HAnimSite86 = x3d.HAnimSite()
HAnimSite86.DEF = "hanim_r_sphyrion_pt"
HAnimSite86.name = "r_sphyrion_pt"
HAnimSite86.translation = [-0.0603,0.061,-0.1002]

HAnimSegment81.children.append(HAnimSite86)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite87.name = "r_calcaneus_posterior_pt"
HAnimSite87.translation = [-0.0692,0.0297,-0.1221]

HAnimSegment81.children.append(HAnimSite87)

HAnimJoint80.children.append(HAnimSegment81)
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint88.name = "r_metatarsophalangeal_2"
HAnimJoint88.center = [-0.0801,0,0.0368]
HAnimSegment89 = x3d.HAnimSegment()
HAnimSegment89.DEF = "hanim_r_tarsal_proximal_phalanx_2"
HAnimSegment89.name = "r_tarsal_proximal_phalanx_2"
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.DEF = "hanim_r_middistal_tip"
HAnimSite90.name = "r_middistal_tip"
HAnimSite90.translation = [-0.1043,-0.0227,0.145]

HAnimSegment89.children.append(HAnimSite90)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite91.name = "r_metatarsal_phalanx_5_pt"
HAnimSite91.translation = [-0.1523,0.0166,0.0895]

HAnimSegment89.children.append(HAnimSite91)
HAnimSite92 = x3d.HAnimSite()
HAnimSite92.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite92.name = "r_metatarsal_phalanx_1_pt"
HAnimSite92.translation = [-0.0521,0.026,0.0127]

HAnimSegment89.children.append(HAnimSite92)
HAnimSite93 = x3d.HAnimSite()
HAnimSite93.DEF = "hanim_r_tarsal_distal_phalanx_2_pt"
HAnimSite93.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite93.translation = [-0.0883,0.0134,0.1383]

HAnimSegment89.children.append(HAnimSite93)

HAnimJoint88.children.append(HAnimSegment89)

HAnimJoint80.children.append(HAnimJoint88)

HAnimJoint76.children.append(HAnimJoint80)

HAnimJoint69.children.append(HAnimJoint76)

HAnimJoint36.children.append(HAnimJoint69)

HAnimJoint35.children.append(HAnimJoint36)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.DEF = "hanim_vl1"
HAnimJoint94.name = "vl1"
HAnimJoint94.center = [-0.00405,1.07,-0.0275]
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.DEF = "hanim_l1"
HAnimSegment95.name = "l1"

HAnimJoint94.children.append(HAnimSegment95)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.DEF = "hanim_l_shoulder"
HAnimJoint96.name = "l_shoulder"
HAnimJoint96.center = [0.2029,1.4376,-0.0387]
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.DEF = "hanim_l_upperarm"
HAnimSegment97.name = "l_upperarm"
Transform98 = x3d.Transform()
Transform98.translation = [0.2029,1.4376,-0.0387]
Shape99 = x3d.Shape()
Shape99.USE = "DiamondShape"

Transform98.children.append(Shape99)

HAnimSegment97.children.append(Transform98)
Transform100 = x3d.Transform()
Transform100.DEF = "l_upperarm_adjust"
Transform100.translation = [0.2029,1.4376,-0.0387]
Transform100.rotation = [1,0,0,0.119]
Transform100.center = [0.182,1.22,-0.047]

HAnimSegment97.children.append(Transform100)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.DEF = "hanim_l_humeral_lateral_epicondyle_pt"
HAnimSite101.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite101.translation = [0.228,1.1482,-0.11]

HAnimSegment97.children.append(HAnimSite101)

HAnimJoint96.children.append(HAnimSegment97)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.DEF = "hanim_l_elbow"
HAnimJoint102.name = "l_elbow"
HAnimJoint102.center = [0.2014,1.1357,-0.0682]
HAnimSegment103 = x3d.HAnimSegment()
HAnimSegment103.DEF = "hanim_l_forearm"
HAnimSegment103.name = "l_forearm"
Transform104 = x3d.Transform()
Transform104.translation = [0.2014,1.1357,-0.0682]
Shape105 = x3d.Shape()
Shape105.USE = "DiamondShape"

Transform104.children.append(Shape105)

HAnimSegment103.children.append(Transform104)
Transform106 = x3d.Transform()
Transform106.DEF = "l_forearm_adjust"
Transform106.translation = [0.2014,1.1357,-0.0682]
Transform106.rotation = [-1,0,0,0.1]
Transform106.center = [0.198,0.961,-0.0405]

HAnimSegment103.children.append(Transform106)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.DEF = "hanim_l_radial_styloid_pt"
HAnimSite107.name = "l_radial_styloid_pt"
HAnimSite107.translation = [0.1901,0.8645,-0.0415]

HAnimSegment103.children.append(HAnimSite107)
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.DEF = "hanim_l_olecranon_pt"
HAnimSite108.name = "l_olecranon_pt"
HAnimSite108.translation = [-0.1962,1.1375,-0.1123]

HAnimSegment103.children.append(HAnimSite108)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.DEF = "hanim_l_humeral_medial_epicondyle_pt"
HAnimSite109.name = "l_humeral_medial_epicondyle_pt"
HAnimSite109.translation = [0.1735,1.1272,-0.1113]

HAnimSegment103.children.append(HAnimSite109)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.DEF = "hanim_l_radiale_pt"
HAnimSite110.name = "l_radiale_pt"
HAnimSite110.translation = [0.2182,1.1212,-0.1167]

HAnimSegment103.children.append(HAnimSite110)

HAnimJoint102.children.append(HAnimSegment103)
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.DEF = "hanim_l_radiocarpal"
HAnimJoint111.name = "l_radiocarpal"
HAnimJoint111.center = [0.1984,0.8663,-0.0583]
HAnimSegment112 = x3d.HAnimSegment()
HAnimSegment112.DEF = "hanim_l_carpal"
HAnimSegment112.name = "l_carpal"
Transform113 = x3d.Transform()
Transform113.translation = [0.1984,0.8663,-0.0583]
Shape114 = x3d.Shape()
Shape114.USE = "DiamondShape"

Transform113.children.append(Shape114)

HAnimSegment112.children.append(Transform113)
Transform115 = x3d.Transform()
Transform115.DEF = "l_hand_adjust"
Transform115.translation = [0.1984,0.8663,-0.0583]
Transform115.rotation = [-0.06361,-0.9967,0.04988,1.333]
Transform115.center = [0.213,0.811,-0.0338]

HAnimSegment112.children.append(Transform115)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.DEF = "hanim_l_hand_tip"
HAnimSite116.name = "l_hand_tip"
HAnimSite116.translation = [0.208,0.6731,-0.0491]

HAnimSegment112.children.append(HAnimSite116)
HAnimSite117 = x3d.HAnimSite()
HAnimSite117.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite117.name = "l_metacarpal_phalanx_2_pt"
HAnimSite117.translation = [0.2009,0.8139,-0.0237]

HAnimSegment112.children.append(HAnimSite117)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.DEF = "hanim_l_dactylion_pt"
HAnimSite118.name = "l_dactylion_pt"
HAnimSite118.translation = [0.2056,0.6743,-0.0482]

HAnimSegment112.children.append(HAnimSite118)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite119.name = "l_ulnar_styloid_pt"
HAnimSite119.translation = [-0.2142,0.8529,-0.0648]

HAnimSegment112.children.append(HAnimSite119)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite120.name = "l_metacarpal_phalanx_5_pt"
HAnimSite120.translation = [0.1929,0.786,-0.1122]

HAnimSegment112.children.append(HAnimSite120)

HAnimJoint111.children.append(HAnimSegment112)

HAnimJoint102.children.append(HAnimJoint111)

HAnimJoint96.children.append(HAnimJoint102)

HAnimJoint94.children.append(HAnimJoint96)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.DEF = "hanim_r_shoulder"
HAnimJoint121.name = "r_shoulder"
HAnimJoint121.center = [-0.1907,1.4407,-0.0325]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.DEF = "hanim_r_upperarm"
HAnimSegment122.name = "r_upperarm"
Transform123 = x3d.Transform()
Transform123.translation = [-0.1907,1.4407,-0.0325]
Shape124 = x3d.Shape()
Shape124.USE = "DiamondShape"

Transform123.children.append(Shape124)

HAnimSegment122.children.append(Transform123)
Transform125 = x3d.Transform()
Transform125.DEF = "r_upperarm_adjust"
Transform125.translation = [-0.1907,1.4407,-0.0325]
Transform125.rotation = [1,0,0,0.0836]
Transform125.center = [-0.182,1.22,-0.047]

HAnimSegment122.children.append(Transform125)
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.DEF = "hanim_r_humeral_lateral_epicondyle_pt"
HAnimSite126.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite126.translation = [-0.2224,1.1517,-0.1033]

HAnimSegment122.children.append(HAnimSite126)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.DEF = "hanim_r_elbow"
HAnimJoint127.name = "r_elbow"
HAnimJoint127.center = [-0.1949,1.1388,-0.062]
HAnimSegment128 = x3d.HAnimSegment()
HAnimSegment128.DEF = "hanim_r_forearm"
HAnimSegment128.name = "r_forearm"
Transform129 = x3d.Transform()
Transform129.translation = [-0.1949,1.1388,-0.062]
Shape130 = x3d.Shape()
Shape130.USE = "DiamondShape"

Transform129.children.append(Shape130)

HAnimSegment128.children.append(Transform129)
Transform131 = x3d.Transform()
Transform131.DEF = "r_forearm_adjust"
Transform131.translation = [-0.1949,1.1388,-0.062]
Transform131.rotation = [-1,0,0,0.1254]
Transform131.center = [-0.198,0.961,-0.0397]

HAnimSegment128.children.append(Transform131)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.DEF = "hanim_r_radial_styloid_pt"
HAnimSite132.name = "r_radial_styloid_pt"
HAnimSite132.translation = [-0.1884,0.8676,-0.036]

HAnimSegment128.children.append(HAnimSite132)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.DEF = "hanim_r_olecranon_pt"
HAnimSite133.name = "r_olecranon_pt"
HAnimSite133.translation = [-0.1907,1.1405,-0.1065]

HAnimSegment128.children.append(HAnimSite133)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.DEF = "hanim_r_humeral_medial_epicondyle_pt"
HAnimSite134.name = "r_humeral_medial_epicondyle_pt"
HAnimSite134.translation = [-0.168,1.1298,-0.1062]

HAnimSegment128.children.append(HAnimSite134)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.DEF = "hanim_r_radiale_pt"
HAnimSite135.name = "r_radiale_pt"
HAnimSite135.translation = [-0.213,1.1305,-0.1091]

HAnimSegment128.children.append(HAnimSite135)

HAnimJoint127.children.append(HAnimSegment128)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.DEF = "hanim_r_radiocarpal"
HAnimJoint136.name = "r_radiocarpal"
HAnimJoint136.center = [-0.1959,0.8694,-0.0521]
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.DEF = "hanim_r_carpal"
HAnimSegment137.name = "r_carpal"
Transform138 = x3d.Transform()
Transform138.translation = [-0.1959,0.8694,-0.0521]
Shape139 = x3d.Shape()
Shape139.USE = "DiamondShape"

Transform138.children.append(Shape139)

HAnimSegment137.children.append(Transform138)
Transform140 = x3d.Transform()
Transform140.DEF = "r_hand_adjust"
Transform140.rotation = [-0.09024,0.994,-0.0624,1.216]
Transform140.center = [-0.217,0.811,-0.0338]

HAnimSegment137.children.append(Transform140)
HAnimSite141 = x3d.HAnimSite()
HAnimSite141.DEF = "hanim_r_hand_tip"
HAnimSite141.name = "r_hand_tip"
HAnimSite141.translation = [-0.1969,0.6758,-0.0427]

HAnimSegment137.children.append(HAnimSite141)
HAnimSite142 = x3d.HAnimSite()
HAnimSite142.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite142.name = "r_metacarpal_phalanx_2_pt"
HAnimSite142.translation = [-0.1977,0.8169,-0.0177]

HAnimSegment137.children.append(HAnimSite142)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.DEF = "hanim_r_dactylion_pt"
HAnimSite143.name = "r_dactylion_pt"
HAnimSite143.translation = [-0.1941,0.6772,-0.0423]

HAnimSegment137.children.append(HAnimSite143)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite144.name = "r_ulnar_styloid_pt"
HAnimSite144.translation = [-0.2117,0.8562,-0.0584]

HAnimSegment137.children.append(HAnimSite144)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite145.name = "r_metacarpal_phalanx_5_pt"
HAnimSite145.translation = [-0.1929,0.789,-0.1064]

HAnimSegment137.children.append(HAnimSite145)

HAnimJoint136.children.append(HAnimSegment137)

HAnimJoint127.children.append(HAnimJoint136)

HAnimJoint121.children.append(HAnimJoint127)

HAnimJoint94.children.append(HAnimJoint121)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.DEF = "hanim_vc4"
HAnimJoint146.name = "vc4"
HAnimJoint146.center = [0,1.43,-0.0458]
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.DEF = "hanim_c4"
HAnimSegment147.name = "c4"

HAnimJoint146.children.append(HAnimSegment147)

HAnimJoint94.children.append(HAnimJoint146)

HAnimJoint35.children.append(HAnimJoint94)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.DEF = "hanim_vl5"
HAnimJoint148.name = "vl5"
HAnimJoint148.center = [0.0028,1.0568,-0.0776]
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.DEF = "hanim_skullbase"
HAnimJoint149.name = "skullbase"
HAnimJoint149.center = [0.0044,1.6209,0.0236]
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.DEF = "hanim_skull"
HAnimSegment150.name = "skull"
Transform151 = x3d.Transform()
Transform151.translation = [0.0044,1.6209,0.0236]
Shape152 = x3d.Shape()
Shape152.USE = "DiamondShape"

Transform151.children.append(Shape152)

HAnimSegment150.children.append(Transform151)
HAnimSite153 = x3d.HAnimSite()
HAnimSite153.DEF = "hanim_skull_vertex_tip"
HAnimSite153.name = "skull_vertex_tip"
HAnimSite153.translation = [0.005,1.7504,0.0055]

HAnimSegment150.children.append(HAnimSite153)
HAnimSite154 = x3d.HAnimSite()
HAnimSite154.DEF = "hanim_sellion_pt"
HAnimSite154.name = "sellion_pt"
HAnimSite154.translation = [0.0058,1.6316,0.0852]

HAnimSegment150.children.append(HAnimSite154)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.DEF = "hanim_r_infraorbitale_pt"
HAnimSite155.name = "r_infraorbitale_pt"
HAnimSite155.translation = [-0.0237,1.6171,0.0752]

HAnimSegment150.children.append(HAnimSite155)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.DEF = "hanim_l_infraorbitale_pt"
HAnimSite156.name = "l_infraorbitale_pt"
HAnimSite156.translation = [0.0341,1.6171,0.0752]

HAnimSegment150.children.append(HAnimSite156)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.DEF = "hanim_supramenton_pt"
HAnimSite157.name = "supramenton_pt"
HAnimSite157.translation = [0.0061,1.541,0.0805]

HAnimSegment150.children.append(HAnimSite157)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.DEF = "hanim_r_tragion_pt"
HAnimSite158.name = "r_tragion_pt"
HAnimSite158.translation = [-0.0646,1.6347,0.0302]

HAnimSegment150.children.append(HAnimSite158)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.DEF = "hanim_r_gonion_pt"
HAnimSite159.name = "r_gonion_pt"
HAnimSite159.translation = [-0.052,1.5529,0.0347]

HAnimSegment150.children.append(HAnimSite159)
HAnimSite160 = x3d.HAnimSite()
HAnimSite160.DEF = "hanim_l_tragion_pt"
HAnimSite160.name = "l_tragion_pt"
HAnimSite160.translation = [0.0739,1.6348,0.0282]

HAnimSegment150.children.append(HAnimSite160)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.DEF = "hanim_l_gonion_pt"
HAnimSite161.name = "l_gonion_pt"
HAnimSite161.translation = [0.0631,1.553,0.033]

HAnimSegment150.children.append(HAnimSite161)
HAnimSite162 = x3d.HAnimSite()
HAnimSite162.DEF = "hanim_nuchale_pt"
HAnimSite162.name = "nuchale_pt"
HAnimSite162.translation = [0.0039,1.5972,-0.0796]

HAnimSegment150.children.append(HAnimSite162)

HAnimJoint149.children.append(HAnimSegment150)

HAnimJoint148.children.append(HAnimJoint149)

HAnimJoint35.children.append(HAnimJoint148)

HAnimHumanoid28.skeleton.append(HAnimJoint35)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.USE = "hanim_humanoid_root"

HAnimHumanoid28.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.USE = "hanim_sacroiliac"

HAnimHumanoid28.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.USE = "hanim_vl1"

HAnimHumanoid28.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.USE = "hanim_vc4"

HAnimHumanoid28.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.USE = "hanim_skullbase"

HAnimHumanoid28.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.USE = "hanim_vl5"

HAnimHumanoid28.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.USE = "hanim_l_elbow"

HAnimHumanoid28.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.USE = "hanim_r_elbow"

HAnimHumanoid28.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.USE = "hanim_l_hip"

HAnimHumanoid28.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.USE = "hanim_r_hip"

HAnimHumanoid28.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.USE = "hanim_l_knee"

HAnimHumanoid28.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.USE = "hanim_r_knee"

HAnimHumanoid28.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid28.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.USE = "hanim_l_radiocarpal"

HAnimHumanoid28.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.USE = "hanim_r_radiocarpal"

HAnimHumanoid28.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.USE = "hanim_l_shoulder"

HAnimHumanoid28.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.USE = "hanim_r_shoulder"

HAnimHumanoid28.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.USE = "hanim_l_talocrural"

HAnimHumanoid28.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.USE = "hanim_r_talocrural"

HAnimHumanoid28.joints.append(HAnimJoint182)
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.USE = "hanim_pelvis"

HAnimHumanoid28.segments.append(HAnimSegment183)
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.USE = "hanim_l1"

HAnimHumanoid28.segments.append(HAnimSegment184)
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.USE = "hanim_c4"

HAnimHumanoid28.segments.append(HAnimSegment185)
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.USE = "hanim_skull"

HAnimHumanoid28.segments.append(HAnimSegment186)
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.USE = "hanim_l_calf"

HAnimHumanoid28.segments.append(HAnimSegment187)
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.USE = "hanim_r_calf"

HAnimHumanoid28.segments.append(HAnimSegment188)
HAnimSegment189 = x3d.HAnimSegment()
HAnimSegment189.USE = "hanim_l_carpal"

HAnimHumanoid28.segments.append(HAnimSegment189)
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.USE = "hanim_r_carpal"

HAnimHumanoid28.segments.append(HAnimSegment190)
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.USE = "hanim_l_forearm"

HAnimHumanoid28.segments.append(HAnimSegment191)
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.USE = "hanim_r_forearm"

HAnimHumanoid28.segments.append(HAnimSegment192)
HAnimSegment193 = x3d.HAnimSegment()
HAnimSegment193.USE = "hanim_l_talus"

HAnimHumanoid28.segments.append(HAnimSegment193)
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.USE = "hanim_r_talus"

HAnimHumanoid28.segments.append(HAnimSegment194)
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid28.segments.append(HAnimSegment195)
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid28.segments.append(HAnimSegment196)
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.USE = "hanim_l_thigh"

HAnimHumanoid28.segments.append(HAnimSegment197)
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.USE = "hanim_r_thigh"

HAnimHumanoid28.segments.append(HAnimSegment198)
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.USE = "hanim_l_upperarm"

HAnimHumanoid28.segments.append(HAnimSegment199)
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.USE = "hanim_r_upperarm"

HAnimHumanoid28.segments.append(HAnimSegment200)
HAnimSite201 = x3d.HAnimSite()
HAnimSite201.USE = "hanim_skull_vertex_tip"

HAnimHumanoid28.sites.append(HAnimSite201)
HAnimSite202 = x3d.HAnimSite()
HAnimSite202.USE = "hanim_sellion_pt"

HAnimHumanoid28.sites.append(HAnimSite202)
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.USE = "hanim_supramenton_pt"

HAnimHumanoid28.sites.append(HAnimSite203)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.USE = "hanim_nuchale_pt"

HAnimHumanoid28.sites.append(HAnimSite204)
HAnimSite205 = x3d.HAnimSite()
HAnimSite205.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid28.sites.append(HAnimSite205)
HAnimSite206 = x3d.HAnimSite()
HAnimSite206.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid28.sites.append(HAnimSite206)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.USE = "hanim_l_dactylion_pt"

HAnimHumanoid28.sites.append(HAnimSite207)
HAnimSite208 = x3d.HAnimSite()
HAnimSite208.USE = "hanim_r_dactylion_pt"

HAnimHumanoid28.sites.append(HAnimSite208)
HAnimSite209 = x3d.HAnimSite()
HAnimSite209.USE = "hanim_l_femoral_lateral_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite209)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.USE = "hanim_r_femoral_lateral_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite210)
HAnimSite211 = x3d.HAnimSite()
HAnimSite211.USE = "hanim_l_femoral_medial_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite211)
HAnimSite212 = x3d.HAnimSite()
HAnimSite212.USE = "hanim_r_femoral_medial_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite212)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.USE = "hanim_r_gonion_pt"

HAnimHumanoid28.sites.append(HAnimSite213)
HAnimSite214 = x3d.HAnimSite()
HAnimSite214.USE = "hanim_l_gonion_pt"

HAnimHumanoid28.sites.append(HAnimSite214)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.USE = "hanim_l_hand_tip"

HAnimHumanoid28.sites.append(HAnimSite215)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.USE = "hanim_r_hand_tip"

HAnimHumanoid28.sites.append(HAnimSite216)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.USE = "hanim_l_humeral_lateral_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite217)
HAnimSite218 = x3d.HAnimSite()
HAnimSite218.USE = "hanim_r_humeral_lateral_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite218)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.USE = "hanim_l_humeral_medial_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite219)
HAnimSite220 = x3d.HAnimSite()
HAnimSite220.USE = "hanim_r_humeral_medial_epicondyle_pt"

HAnimHumanoid28.sites.append(HAnimSite220)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid28.sites.append(HAnimSite221)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid28.sites.append(HAnimSite222)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid28.sites.append(HAnimSite223)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid28.sites.append(HAnimSite224)
HAnimSite225 = x3d.HAnimSite()
HAnimSite225.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid28.sites.append(HAnimSite225)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid28.sites.append(HAnimSite226)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid28.sites.append(HAnimSite227)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid28.sites.append(HAnimSite228)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid28.sites.append(HAnimSite229)
HAnimSite230 = x3d.HAnimSite()
HAnimSite230.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid28.sites.append(HAnimSite230)
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid28.sites.append(HAnimSite231)
HAnimSite232 = x3d.HAnimSite()
HAnimSite232.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid28.sites.append(HAnimSite232)
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid28.sites.append(HAnimSite233)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid28.sites.append(HAnimSite234)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid28.sites.append(HAnimSite235)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid28.sites.append(HAnimSite236)
HAnimSite237 = x3d.HAnimSite()
HAnimSite237.USE = "hanim_l_middistal_tip"

HAnimHumanoid28.sites.append(HAnimSite237)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.USE = "hanim_r_middistal_tip"

HAnimHumanoid28.sites.append(HAnimSite238)
HAnimSite239 = x3d.HAnimSite()
HAnimSite239.USE = "hanim_l_olecranon_pt"

HAnimHumanoid28.sites.append(HAnimSite239)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.USE = "hanim_r_olecranon_pt"

HAnimHumanoid28.sites.append(HAnimSite240)
HAnimSite241 = x3d.HAnimSite()
HAnimSite241.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid28.sites.append(HAnimSite241)
HAnimSite242 = x3d.HAnimSite()
HAnimSite242.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid28.sites.append(HAnimSite242)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.USE = "hanim_l_radiale_pt"

HAnimHumanoid28.sites.append(HAnimSite243)
HAnimSite244 = x3d.HAnimSite()
HAnimSite244.USE = "hanim_r_radiale_pt"

HAnimHumanoid28.sites.append(HAnimSite244)
HAnimSite245 = x3d.HAnimSite()
HAnimSite245.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid28.sites.append(HAnimSite245)
HAnimSite246 = x3d.HAnimSite()
HAnimSite246.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid28.sites.append(HAnimSite246)
HAnimSite247 = x3d.HAnimSite()
HAnimSite247.USE = "hanim_l_tarsal_distal_phalanx_2_pt"

HAnimHumanoid28.sites.append(HAnimSite247)
HAnimSite248 = x3d.HAnimSite()
HAnimSite248.USE = "hanim_r_tarsal_distal_phalanx_2_pt"

HAnimHumanoid28.sites.append(HAnimSite248)
HAnimSite249 = x3d.HAnimSite()
HAnimSite249.USE = "hanim_r_tragion_pt"

HAnimHumanoid28.sites.append(HAnimSite249)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.USE = "hanim_l_tragion_pt"

HAnimHumanoid28.sites.append(HAnimSite250)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid28.sites.append(HAnimSite251)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid28.sites.append(HAnimSite252)
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.DEF = "hanim_DiamondManLOA1_view"
HAnimSite253.name = "DiamondManLOA1_view"
Viewpoint254 = x3d.Viewpoint()
Viewpoint254.DEF = "InclinedView"
Viewpoint254.description = "Inclined View"
Viewpoint254.position = [1.62,1.05,2.06]
Viewpoint254.orientation = [-0.113,0.993,0.0347,0.671]

HAnimSite253.children.append(Viewpoint254)
Viewpoint255 = x3d.Viewpoint()
Viewpoint255.DEF = "FrontView"
Viewpoint255.description = "Front View"
Viewpoint255.position = [0,0.854,2.57665]

HAnimSite253.children.append(Viewpoint255)
Viewpoint256 = x3d.Viewpoint()
Viewpoint256.DEF = "SideView"
Viewpoint256.description = "Side View"
Viewpoint256.position = [2.5929,0.854,0]
Viewpoint256.orientation = [0,1,0,1.57079]

HAnimSite253.children.append(Viewpoint256)
Viewpoint257 = x3d.Viewpoint()
Viewpoint257.DEF = "TopView"
Viewpoint257.description = "Top View"
Viewpoint257.position = [0,3.4495,0]
Viewpoint257.orientation = [1,0,0,-1.57079]

HAnimSite253.children.append(Viewpoint257)

HAnimHumanoid28.viewpoints.append(HAnimSite253)

Scene24.children.append(HAnimHumanoid28)

X3D0.Scene = Scene24
f = open("../data/DiamondManLOA1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DiamondManLOA1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DiamondManLOA1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta3.content = "DiamondManLOA2.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim skeletal structure at level of articulation two, one diamond at the base node for the structure, blue spheres for HAnimSite feaature points"

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
meta7.name = "translator"
meta7.content = "Don Brutzman"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "created"
meta8.content = "12 November 2001"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "Mon, 15 Sep 2025 05:18:47 GMT"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "Image"
meta10.content = "DiamondManLOA2.png"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "Image"
meta11.content = "images/BonesAllSkeletonFrontViewLOA2.png"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "motto"
meta12.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "subject"
meta14.content = "human animation, x3d, vrml, animation"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.title = "HANIM 1.1 Default Joint Centers, LOA1"
WorldInfo17.info = ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]

Scene16.children.append(WorldInfo17)
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.speed = 1.5

Scene16.children.append(NavigationInfo18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.description = "Diamond Man, LOA 2"
Viewpoint19.position = [0,1,3]
Viewpoint19.centerOfRotation = [0,1,0]

Scene16.children.append(Viewpoint19)
Transform20 = x3d.Transform()
Transform20.translation = [1,1.5,0]
Billboard21 = x3d.Billboard()
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.DEF = "TextMaterial"
Material24.diffuseColor = [0.9,0.9,0.9]

Appearance23.material = Material24

Shape22.appearance = Appearance23
Text25 = x3d.Text()
Text25.string = ["Diamond Man Key"]
FontStyle26 = x3d.FontStyle()
FontStyle26.family = ["SANS"]
FontStyle26.size = 0.1

Text25.fontStyle = FontStyle26

Shape22.geometry = Text25

Billboard21.children.append(Shape22)
Transform27 = x3d.Transform()
Transform27.translation = [0,-0.3,0]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.DEF = "MIN_COLOR"
Material30.diffuseColor = [1,0,0]

Appearance29.material = Material30

Shape28.appearance = Appearance29
Sphere31 = x3d.Sphere()
Sphere31.radius = 0.08

Shape28.geometry = Sphere31

Transform27.children.append(Shape28)
Transform32 = x3d.Transform()
Transform32.translation = [0.2,0,0]
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.USE = "TextMaterial"

Appearance34.material = Material35

Shape33.appearance = Appearance34
Text36 = x3d.Text()
Text36.string = ["Minimal Humanoid Joints"]
FontStyle37 = x3d.FontStyle()
FontStyle37.family = ["SANS"]
FontStyle37.size = 0.1

Text36.fontStyle = FontStyle37

Shape33.geometry = Text36

Transform32.children.append(Shape33)

Transform27.children.append(Transform32)

Billboard21.children.append(Transform27)
Transform38 = x3d.Transform()
Transform38.translation = [0,-0.5,0]
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.DEF = "JOINT_COLOR"
Material41.diffuseColor = [1,1,0]

Appearance40.material = Material41

Shape39.appearance = Appearance40
Sphere42 = x3d.Sphere()
Sphere42.radius = 0.08

Shape39.geometry = Sphere42

Transform38.children.append(Shape39)
Transform43 = x3d.Transform()
Transform43.translation = [0.2,0,0]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.USE = "TextMaterial"

Appearance45.material = Material46

Shape44.appearance = Appearance45
Text47 = x3d.Text()
Text47.string = ["Humanoid Joints"]
FontStyle48 = x3d.FontStyle()
FontStyle48.family = ["SANS"]
FontStyle48.size = 0.1

Text47.fontStyle = FontStyle48

Shape44.geometry = Text47

Transform43.children.append(Shape44)

Transform38.children.append(Transform43)

Billboard21.children.append(Transform38)
Transform49 = x3d.Transform()
Transform49.translation = [0,-0.7,0]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.DEF = "REC_SPINAL_COLOR"
Material52.diffuseColor = [1,0,1]

Appearance51.material = Material52

Shape50.appearance = Appearance51
Sphere53 = x3d.Sphere()
Sphere53.radius = 0.08

Shape50.geometry = Sphere53

Transform49.children.append(Shape50)
Transform54 = x3d.Transform()
Transform54.translation = [0.2,0,0]
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.USE = "TextMaterial"

Appearance56.material = Material57

Shape55.appearance = Appearance56
Text58 = x3d.Text()
Text58.string = ["Recommended Spinal Joints"]
FontStyle59 = x3d.FontStyle()
FontStyle59.family = ["SANS"]
FontStyle59.size = 0.1

Text58.fontStyle = FontStyle59

Shape55.geometry = Text58

Transform54.children.append(Shape55)

Transform49.children.append(Transform54)

Billboard21.children.append(Transform49)
Transform60 = x3d.Transform()
Transform60.translation = [0,-0.9,0]
Shape61 = x3d.Shape()
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.DEF = "SPINAL_COLOR"
Material63.diffuseColor = [0,1,0]

Appearance62.material = Material63

Shape61.appearance = Appearance62
Sphere64 = x3d.Sphere()
Sphere64.radius = 0.08

Shape61.geometry = Sphere64

Transform60.children.append(Shape61)
Transform65 = x3d.Transform()
Transform65.translation = [0.2,0,0]
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.USE = "TextMaterial"

Appearance67.material = Material68

Shape66.appearance = Appearance67
Text69 = x3d.Text()
Text69.string = ["Spinal Joints"]
FontStyle70 = x3d.FontStyle()
FontStyle70.family = ["SANS"]
FontStyle70.size = 0.1

Text69.fontStyle = FontStyle70

Shape66.geometry = Text69

Transform65.children.append(Shape66)

Transform60.children.append(Transform65)

Billboard21.children.append(Transform60)
Transform71 = x3d.Transform()
Transform71.translation = [0,-1.3,0]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.DEF = "SITE_COLOR"
Material74.diffuseColor = [0,0,1]

Appearance73.material = Material74

Shape72.appearance = Appearance73
Sphere75 = x3d.Sphere()
Sphere75.radius = 0.08

Shape72.geometry = Sphere75

Transform71.children.append(Shape72)
Transform76 = x3d.Transform()
Transform76.translation = [0.2,0,0]
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material()
Material79.USE = "TextMaterial"

Appearance78.material = Material79

Shape77.appearance = Appearance78
Text80 = x3d.Text()
Text80.string = ["Humanoid Sites"]
FontStyle81 = x3d.FontStyle()
FontStyle81.family = ["SANS"]
FontStyle81.size = 0.1

Text80.fontStyle = FontStyle81

Shape77.geometry = Text80

Transform76.children.append(Shape77)

Transform71.children.append(Transform76)

Billboard21.children.append(Transform71)
Transform82 = x3d.Transform()
Transform82.translation = [0,-1.1,0]
Shape83 = x3d.Shape()
Appearance84 = x3d.Appearance()
Material85 = x3d.Material()
Material85.DEF = "HAND_FEET_COLOR"
Material85.diffuseColor = [0,1,1]

Appearance84.material = Material85

Shape83.appearance = Appearance84
Sphere86 = x3d.Sphere()
Sphere86.radius = 0.08

Shape83.geometry = Sphere86

Transform82.children.append(Shape83)
Transform87 = x3d.Transform()
Transform87.translation = [0.2,0,0]
Shape88 = x3d.Shape()
Appearance89 = x3d.Appearance()
Material90 = x3d.Material()
Material90.USE = "TextMaterial"

Appearance89.material = Material90

Shape88.appearance = Appearance89
Text91 = x3d.Text()
Text91.string = ["Hand & Feet Joints"]
FontStyle92 = x3d.FontStyle()
FontStyle92.family = ["SANS"]
FontStyle92.size = 0.1

Text91.fontStyle = FontStyle92

Shape88.geometry = Text91

Transform87.children.append(Shape88)

Transform82.children.append(Transform87)

Billboard21.children.append(Transform82)

Transform20.children.append(Billboard21)

Scene16.children.append(Transform20)
HAnimHumanoid93 = x3d.HAnimHumanoid()
HAnimHumanoid93.DEF = "hanim_humanoid"
HAnimHumanoid93.name = "humanoid"
HAnimHumanoid93.loa = 2
MetadataSet94 = x3d.MetadataSet()
MetadataSet94.name = "HAnimHumanoid.info"
MetadataSet94.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString95 = x3d.MetadataString()
MetadataString95.name = "humanoidVersion"

if MetadataSet94.value is None:
    MetadataSet94.value = []
MetadataSet94.value.append(MetadataString95)
MetadataString96 = x3d.MetadataString()
MetadataString96.name = "authorEmail"

if MetadataSet94.value is None:
    MetadataSet94.value = []
MetadataSet94.value.append(MetadataString96)
MetadataString97 = x3d.MetadataString()
MetadataString97.name = "authorName"

if MetadataSet94.value is None:
    MetadataSet94.value = []
MetadataSet94.value.append(MetadataString97)

HAnimHumanoid93.metadata = MetadataSet94
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.DEF = "hanim_humanoid_root"
HAnimJoint98.name = "humanoid_root"
HAnimJoint98.center = [0,0.824,0.0277]
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.DEF = "hanim_sacrum"
HAnimSegment99.name = "sacrum"
Transform100 = x3d.Transform()
Transform100.translation = [0,0.824,0.0277]
Shape101 = x3d.Shape()
Shape101.DEF = "DiamondShape"
Appearance102 = x3d.Appearance()
Material103 = x3d.Material()
Material103.DEF = "ROOT_COLOR"
Material103.diffuseColor = [1,1,1]

Appearance102.material = Material103

Shape101.appearance = Appearance102
IndexedFaceSet104 = x3d.IndexedFaceSet()
IndexedFaceSet104.creaseAngle = 0.5
IndexedFaceSet104.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate105 = x3d.Coordinate()
Coordinate105.DEF = "points"
Coordinate105.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet104.coord = Coordinate105

Shape101.geometry = IndexedFaceSet104

Transform100.children.append(Shape101)
Transform106 = x3d.Transform()
Transform106.translation = [0,0.01,0]
Billboard107 = x3d.Billboard()
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.diffuseColor = [0.039216,1,0.568627]

Appearance109.material = Material110

Shape108.appearance = Appearance109
Text111 = x3d.Text()
Text111.string = ["Humanoid Root"]
FontStyle112 = x3d.FontStyle()
FontStyle112.family = ["SANS"]
FontStyle112.style = "ITALIC"
FontStyle112.size = 0.01

Text111.fontStyle = FontStyle112

Shape108.geometry = Text111

Billboard107.children.append(Shape108)

Transform106.children.append(Billboard107)

Transform100.children.append(Transform106)

HAnimSegment99.children.append(Transform100)

HAnimJoint98.children.append(HAnimSegment99)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.DEF = "hanim_sacroiliac"
HAnimJoint113.name = "sacroiliac"
HAnimJoint113.center = [0,0.9149,0.0016]
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.DEF = "hanim_pelvis"
HAnimSegment114.name = "pelvis"
Transform115 = x3d.Transform()
Transform115.DEF = "sacroiliacPos"
Transform115.translation = [0,0.9149,0.0016]
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.USE = "MIN_COLOR"

Appearance117.material = Material118

Shape116.appearance = Appearance117
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.creaseAngle = 0.5
IndexedFaceSet119.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate120 = x3d.Coordinate()
Coordinate120.USE = "points"

IndexedFaceSet119.coord = Coordinate120

Shape116.geometry = IndexedFaceSet119

Transform115.children.append(Shape116)

HAnimSegment114.children.append(Transform115)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.DEF = "hanim_r_iliocristale_pt"
HAnimSite121.name = "r_iliocristale_pt"
HAnimSite121.translation = [-0.1525,1.0628,0.0035]
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.USE = "SITE_COLOR"

Appearance123.material = Material124

Shape122.appearance = Appearance123
IndexedFaceSet125 = x3d.IndexedFaceSet()
IndexedFaceSet125.creaseAngle = 0.5
IndexedFaceSet125.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate126 = x3d.Coordinate()
Coordinate126.USE = "points"

IndexedFaceSet125.coord = Coordinate126

Shape122.geometry = IndexedFaceSet125

HAnimSite121.children.append(Shape122)

HAnimSegment114.children.append(HAnimSite121)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.DEF = "hanim_r_trochanterion_pt"
HAnimSite127.name = "r_trochanterion_pt"
HAnimSite127.translation = [-0.1689,0.8419,0.0352]
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.USE = "SITE_COLOR"

Appearance129.material = Material130

Shape128.appearance = Appearance129
IndexedFaceSet131 = x3d.IndexedFaceSet()
IndexedFaceSet131.creaseAngle = 0.5
IndexedFaceSet131.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate132 = x3d.Coordinate()
Coordinate132.USE = "points"

IndexedFaceSet131.coord = Coordinate132

Shape128.geometry = IndexedFaceSet131

HAnimSite127.children.append(Shape128)

HAnimSegment114.children.append(HAnimSite127)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.DEF = "hanim_l_iliocristale_pt"
HAnimSite133.name = "l_iliocristale_pt"
HAnimSite133.translation = [0.1612,1.0537,0.0008]
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.USE = "SITE_COLOR"

Appearance135.material = Material136

Shape134.appearance = Appearance135
IndexedFaceSet137 = x3d.IndexedFaceSet()
IndexedFaceSet137.creaseAngle = 0.5
IndexedFaceSet137.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate138 = x3d.Coordinate()
Coordinate138.USE = "points"

IndexedFaceSet137.coord = Coordinate138

Shape134.geometry = IndexedFaceSet137

HAnimSite133.children.append(Shape134)

HAnimSegment114.children.append(HAnimSite133)
HAnimSite139 = x3d.HAnimSite()
HAnimSite139.DEF = "hanim_l_trochanterion_pt"
HAnimSite139.name = "l_trochanterion_pt"
HAnimSite139.translation = [0.1677,0.8336,0.0303]
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.USE = "SITE_COLOR"

Appearance141.material = Material142

Shape140.appearance = Appearance141
IndexedFaceSet143 = x3d.IndexedFaceSet()
IndexedFaceSet143.creaseAngle = 0.5
IndexedFaceSet143.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate144 = x3d.Coordinate()
Coordinate144.USE = "points"

IndexedFaceSet143.coord = Coordinate144

Shape140.geometry = IndexedFaceSet143

HAnimSite139.children.append(Shape140)

HAnimSegment114.children.append(HAnimSite139)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.DEF = "hanim_r_asis_pt"
HAnimSite145.name = "r_asis_pt"
HAnimSite145.translation = [-0.0887,1.0021,0.1112]
Shape146 = x3d.Shape()
Appearance147 = x3d.Appearance()
Material148 = x3d.Material()
Material148.USE = "SITE_COLOR"

Appearance147.material = Material148

Shape146.appearance = Appearance147
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.creaseAngle = 0.5
IndexedFaceSet149.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate150 = x3d.Coordinate()
Coordinate150.USE = "points"

IndexedFaceSet149.coord = Coordinate150

Shape146.geometry = IndexedFaceSet149

HAnimSite145.children.append(Shape146)

HAnimSegment114.children.append(HAnimSite145)
HAnimSite151 = x3d.HAnimSite()
HAnimSite151.DEF = "hanim_l_asis_pt"
HAnimSite151.name = "l_asis_pt"
HAnimSite151.translation = [0.0925,0.9983,0.1052]
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.USE = "SITE_COLOR"

Appearance153.material = Material154

Shape152.appearance = Appearance153
IndexedFaceSet155 = x3d.IndexedFaceSet()
IndexedFaceSet155.creaseAngle = 0.5
IndexedFaceSet155.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate156 = x3d.Coordinate()
Coordinate156.USE = "points"

IndexedFaceSet155.coord = Coordinate156

Shape152.geometry = IndexedFaceSet155

HAnimSite151.children.append(Shape152)

HAnimSegment114.children.append(HAnimSite151)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.DEF = "hanim_r_psis_pt"
HAnimSite157.name = "r_psis_pt"
HAnimSite157.translation = [-0.0716,1.019,-0.1138]
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.USE = "SITE_COLOR"

Appearance159.material = Material160

Shape158.appearance = Appearance159
IndexedFaceSet161 = x3d.IndexedFaceSet()
IndexedFaceSet161.creaseAngle = 0.5
IndexedFaceSet161.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate162 = x3d.Coordinate()
Coordinate162.USE = "points"

IndexedFaceSet161.coord = Coordinate162

Shape158.geometry = IndexedFaceSet161

HAnimSite157.children.append(Shape158)

HAnimSegment114.children.append(HAnimSite157)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.DEF = "hanim_l_psis_pt"
HAnimSite163.name = "l_psis_pt"
HAnimSite163.translation = [0.0774,1.019,-0.1151]
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.USE = "SITE_COLOR"

Appearance165.material = Material166

Shape164.appearance = Appearance165
IndexedFaceSet167 = x3d.IndexedFaceSet()
IndexedFaceSet167.creaseAngle = 0.5
IndexedFaceSet167.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate168 = x3d.Coordinate()
Coordinate168.USE = "points"

IndexedFaceSet167.coord = Coordinate168

Shape164.geometry = IndexedFaceSet167

HAnimSite163.children.append(Shape164)

HAnimSegment114.children.append(HAnimSite163)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.DEF = "hanim_crotch_pt"
HAnimSite169.name = "crotch_pt"
HAnimSite169.translation = [0.0034,0.8266,0.0257]
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.USE = "SITE_COLOR"

Appearance171.material = Material172

Shape170.appearance = Appearance171
IndexedFaceSet173 = x3d.IndexedFaceSet()
IndexedFaceSet173.creaseAngle = 0.5
IndexedFaceSet173.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate174 = x3d.Coordinate()
Coordinate174.USE = "points"

IndexedFaceSet173.coord = Coordinate174

Shape170.geometry = IndexedFaceSet173

HAnimSite169.children.append(Shape170)

HAnimSegment114.children.append(HAnimSite169)

HAnimJoint113.children.append(HAnimSegment114)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.DEF = "hanim_l_hip"
HAnimJoint175.name = "l_hip"
HAnimJoint175.center = [0.0961,0.9124,-0.0001]
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.DEF = "hanim_l_thigh"
HAnimSegment176.name = "l_thigh"
Transform177 = x3d.Transform()
Transform177.translation = [0.0961,0.9124,-0.0001]
Shape178 = x3d.Shape()
Appearance179 = x3d.Appearance()
Material180 = x3d.Material()
Material180.USE = "MIN_COLOR"

Appearance179.material = Material180

Shape178.appearance = Appearance179
IndexedFaceSet181 = x3d.IndexedFaceSet()
IndexedFaceSet181.creaseAngle = 0.5
IndexedFaceSet181.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate182 = x3d.Coordinate()
Coordinate182.USE = "points"

IndexedFaceSet181.coord = Coordinate182

Shape178.geometry = IndexedFaceSet181

Transform177.children.append(Shape178)

HAnimSegment176.children.append(Transform177)
HAnimSite183 = x3d.HAnimSite()
HAnimSite183.DEF = "hanim_l_knee_crease_pt"
HAnimSite183.name = "l_knee_crease_pt"
HAnimSite183.translation = [0.0993,0.4881,-0.0309]
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.USE = "SITE_COLOR"

Appearance185.material = Material186

Shape184.appearance = Appearance185
IndexedFaceSet187 = x3d.IndexedFaceSet()
IndexedFaceSet187.creaseAngle = 0.5
IndexedFaceSet187.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate188 = x3d.Coordinate()
Coordinate188.USE = "points"

IndexedFaceSet187.coord = Coordinate188

Shape184.geometry = IndexedFaceSet187

HAnimSite183.children.append(Shape184)

HAnimSegment176.children.append(HAnimSite183)
HAnimSite189 = x3d.HAnimSite()
HAnimSite189.DEF = "hanim_l_femoral_lateral_epicondyle_pt"
HAnimSite189.name = "l_femoral_lateral_epicondyle_pt"
HAnimSite189.translation = [0.1598,0.4967,0.0297]
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.USE = "SITE_COLOR"

Appearance191.material = Material192

Shape190.appearance = Appearance191
IndexedFaceSet193 = x3d.IndexedFaceSet()
IndexedFaceSet193.creaseAngle = 0.5
IndexedFaceSet193.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate194 = x3d.Coordinate()
Coordinate194.USE = "points"

IndexedFaceSet193.coord = Coordinate194

Shape190.geometry = IndexedFaceSet193

HAnimSite189.children.append(Shape190)

HAnimSegment176.children.append(HAnimSite189)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.DEF = "hanim_l_femoral_medial_epicondyle_pt"
HAnimSite195.name = "l_femoral_medial_epicondyle_pt"
HAnimSite195.translation = [0.0398,0.4946,0.0303]
Shape196 = x3d.Shape()
Appearance197 = x3d.Appearance()
Material198 = x3d.Material()
Material198.USE = "SITE_COLOR"

Appearance197.material = Material198

Shape196.appearance = Appearance197
IndexedFaceSet199 = x3d.IndexedFaceSet()
IndexedFaceSet199.creaseAngle = 0.5
IndexedFaceSet199.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate200 = x3d.Coordinate()
Coordinate200.USE = "points"

IndexedFaceSet199.coord = Coordinate200

Shape196.geometry = IndexedFaceSet199

HAnimSite195.children.append(Shape196)

HAnimSegment176.children.append(HAnimSite195)

HAnimJoint175.children.append(HAnimSegment176)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.DEF = "hanim_l_knee"
HAnimJoint201.name = "l_knee"
HAnimJoint201.center = [0.104,0.4867,0.0308]
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.DEF = "hanim_l_calf"
HAnimSegment202.name = "l_calf"
Transform203 = x3d.Transform()
Transform203.translation = [0.104,0.4867,0.0308]
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.USE = "MIN_COLOR"

Appearance205.material = Material206

Shape204.appearance = Appearance205
IndexedFaceSet207 = x3d.IndexedFaceSet()
IndexedFaceSet207.creaseAngle = 0.5
IndexedFaceSet207.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate208 = x3d.Coordinate()
Coordinate208.USE = "points"

IndexedFaceSet207.coord = Coordinate208

Shape204.geometry = IndexedFaceSet207

Transform203.children.append(Shape204)

HAnimSegment202.children.append(Transform203)

HAnimJoint201.children.append(HAnimSegment202)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.DEF = "hanim_l_talocrural"
HAnimJoint209.name = "l_talocrural"
HAnimJoint209.center = [0.1101,0.0656,-0.0736]
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.DEF = "hanim_l_talus"
HAnimSegment210.name = "l_talus"
Transform211 = x3d.Transform()
Transform211.translation = [0.1101,0.0656,-0.0736]
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.USE = "MIN_COLOR"

Appearance213.material = Material214

Shape212.appearance = Appearance213
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.creaseAngle = 0.5
IndexedFaceSet215.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate216 = x3d.Coordinate()
Coordinate216.USE = "points"

IndexedFaceSet215.coord = Coordinate216

Shape212.geometry = IndexedFaceSet215

Transform211.children.append(Shape212)

HAnimSegment210.children.append(Transform211)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite217.name = "l_lateral_malleolus_pt"
HAnimSite217.translation = [0.1308,0.0597,-0.1032]
Shape218 = x3d.Shape()
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.USE = "HAND_FEET_COLOR"

Appearance219.material = Material220

Shape218.appearance = Appearance219
IndexedFaceSet221 = x3d.IndexedFaceSet()
IndexedFaceSet221.creaseAngle = 0.5
IndexedFaceSet221.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate222 = x3d.Coordinate()
Coordinate222.USE = "points"

IndexedFaceSet221.coord = Coordinate222

Shape218.geometry = IndexedFaceSet221

HAnimSite217.children.append(Shape218)

HAnimSegment210.children.append(HAnimSite217)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite223.name = "l_medial_malleolus_pt"
HAnimSite223.translation = [0.089,0.0716,-0.0881]
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.USE = "HAND_FEET_COLOR"

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.creaseAngle = 0.5
IndexedFaceSet227.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate228 = x3d.Coordinate()
Coordinate228.USE = "points"

IndexedFaceSet227.coord = Coordinate228

Shape224.geometry = IndexedFaceSet227

HAnimSite223.children.append(Shape224)

HAnimSegment210.children.append(HAnimSite223)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.DEF = "hanim_l_sphyrion_pt"
HAnimSite229.name = "l_sphyrion_pt"
HAnimSite229.translation = [0.089,0.0575,-0.0943]
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.USE = "HAND_FEET_COLOR"

Appearance231.material = Material232

Shape230.appearance = Appearance231
IndexedFaceSet233 = x3d.IndexedFaceSet()
IndexedFaceSet233.creaseAngle = 0.5
IndexedFaceSet233.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate234 = x3d.Coordinate()
Coordinate234.USE = "points"

IndexedFaceSet233.coord = Coordinate234

Shape230.geometry = IndexedFaceSet233

HAnimSite229.children.append(Shape230)

HAnimSegment210.children.append(HAnimSite229)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite235.name = "l_calcaneus_posterior_pt"
HAnimSite235.translation = [0.0974,0.0259,-0.1171]
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
Material238 = x3d.Material()
Material238.USE = "HAND_FEET_COLOR"

Appearance237.material = Material238

Shape236.appearance = Appearance237
IndexedFaceSet239 = x3d.IndexedFaceSet()
IndexedFaceSet239.creaseAngle = 0.5
IndexedFaceSet239.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate240 = x3d.Coordinate()
Coordinate240.USE = "points"

IndexedFaceSet239.coord = Coordinate240

Shape236.geometry = IndexedFaceSet239

HAnimSite235.children.append(Shape236)

HAnimSegment210.children.append(HAnimSite235)

HAnimJoint209.children.append(HAnimSegment210)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint241.name = "l_tarsometatarsal_2"
HAnimJoint241.center = [0.1086,0.0001,-0.0368]
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.DEF = "hanim_l_metatarsal_2"
HAnimSegment242.name = "l_metatarsal_2"
Transform243 = x3d.Transform()
Transform243.translation = [0.1086,0.0001,-0.0368]
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.USE = "MIN_COLOR"

Appearance245.material = Material246

Shape244.appearance = Appearance245
IndexedFaceSet247 = x3d.IndexedFaceSet()
IndexedFaceSet247.creaseAngle = 0.5
IndexedFaceSet247.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate248 = x3d.Coordinate()
Coordinate248.USE = "points"

IndexedFaceSet247.coord = Coordinate248

Shape244.geometry = IndexedFaceSet247

Transform243.children.append(Shape244)

HAnimSegment242.children.append(Transform243)

HAnimJoint241.children.append(HAnimSegment242)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint249.name = "l_metatarsophalangeal_2"
HAnimJoint249.center = [0.1086,0.0001,0.0368]
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2"
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2"
Transform251 = x3d.Transform()
Transform251.translation = [0.1086,0.0001,0.0368]
Shape252 = x3d.Shape()
Appearance253 = x3d.Appearance()
Material254 = x3d.Material()
Material254.USE = "JOINT_COLOR"

Appearance253.material = Material254

Shape252.appearance = Appearance253
IndexedFaceSet255 = x3d.IndexedFaceSet()
IndexedFaceSet255.creaseAngle = 0.5
IndexedFaceSet255.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate256 = x3d.Coordinate()
Coordinate256.USE = "points"

IndexedFaceSet255.coord = Coordinate256

Shape252.geometry = IndexedFaceSet255

Transform251.children.append(Shape252)

HAnimSegment250.children.append(Transform251)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.DEF = "hanim_l_middistal_tip"
HAnimSite257.name = "l_middistal_tip"
HAnimSite257.translation = [0.1354,0.0016,0.1476]
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.USE = "HAND_FEET_COLOR"

Appearance259.material = Material260

Shape258.appearance = Appearance259
IndexedFaceSet261 = x3d.IndexedFaceSet()
IndexedFaceSet261.creaseAngle = 0.5
IndexedFaceSet261.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate262 = x3d.Coordinate()
Coordinate262.USE = "points"

IndexedFaceSet261.coord = Coordinate262

Shape258.geometry = IndexedFaceSet261

HAnimSite257.children.append(Shape258)

HAnimSegment250.children.append(HAnimSite257)
HAnimSite263 = x3d.HAnimSite()
HAnimSite263.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite263.name = "l_metatarsal_phalanx_1_pt"
HAnimSite263.translation = [0.0816,0.0232,0.0106]
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.USE = "HAND_FEET_COLOR"

Appearance265.material = Material266

Shape264.appearance = Appearance265
IndexedFaceSet267 = x3d.IndexedFaceSet()
IndexedFaceSet267.creaseAngle = 0.5
IndexedFaceSet267.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate268 = x3d.Coordinate()
Coordinate268.USE = "points"

IndexedFaceSet267.coord = Coordinate268

Shape264.geometry = IndexedFaceSet267

HAnimSite263.children.append(Shape264)

HAnimSegment250.children.append(HAnimSite263)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint269.center = [0.1086,0,0.0762]
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.DEF = "hanim_l_tarsal_distal_phalanx_2"
HAnimSegment270.name = "l_tarsal_distal_phalanx_2"
Transform271 = x3d.Transform()
Transform271.translation = [0.1086,0,0.0762]
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.USE = "JOINT_COLOR"

Appearance273.material = Material274

Shape272.appearance = Appearance273
IndexedFaceSet275 = x3d.IndexedFaceSet()
IndexedFaceSet275.creaseAngle = 0.5
IndexedFaceSet275.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate276 = x3d.Coordinate()
Coordinate276.USE = "points"

IndexedFaceSet275.coord = Coordinate276

Shape272.geometry = IndexedFaceSet275

Transform271.children.append(Shape272)

HAnimSegment270.children.append(Transform271)
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.DEF = "hanim_l_forefoot_tip"
HAnimSite277.name = "l_forefoot_tip"
HAnimSite277.translation = [0.1354,0.0016,0.1476]
Shape278 = x3d.Shape()
Appearance279 = x3d.Appearance()
Material280 = x3d.Material()
Material280.USE = "HAND_FEET_COLOR"

Appearance279.material = Material280

Shape278.appearance = Appearance279
IndexedFaceSet281 = x3d.IndexedFaceSet()
IndexedFaceSet281.creaseAngle = 0.5
IndexedFaceSet281.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate282 = x3d.Coordinate()
Coordinate282.USE = "points"

IndexedFaceSet281.coord = Coordinate282

Shape278.geometry = IndexedFaceSet281

HAnimSite277.children.append(Shape278)

HAnimSegment270.children.append(HAnimSite277)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite283.name = "l_metatarsal_phalanx_5_pt"
HAnimSite283.translation = [0.1825,0.007,0.0928]
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.USE = "HAND_FEET_COLOR"

Appearance285.material = Material286

Shape284.appearance = Appearance285
IndexedFaceSet287 = x3d.IndexedFaceSet()
IndexedFaceSet287.creaseAngle = 0.5
IndexedFaceSet287.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate288 = x3d.Coordinate()
Coordinate288.USE = "points"

IndexedFaceSet287.coord = Coordinate288

Shape284.geometry = IndexedFaceSet287

HAnimSite283.children.append(Shape284)

HAnimSegment270.children.append(HAnimSite283)
HAnimSite289 = x3d.HAnimSite()
HAnimSite289.DEF = "hanim_l_tarsal_distal_phalanx_2_pt"
HAnimSite289.name = "l_tarsal_distal_phalanx_2_pt"
HAnimSite289.translation = [0.1195,0.0079,0.1433]
Shape290 = x3d.Shape()
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.USE = "HAND_FEET_COLOR"

Appearance291.material = Material292

Shape290.appearance = Appearance291
IndexedFaceSet293 = x3d.IndexedFaceSet()
IndexedFaceSet293.creaseAngle = 0.5
IndexedFaceSet293.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate294 = x3d.Coordinate()
Coordinate294.USE = "points"

IndexedFaceSet293.coord = Coordinate294

Shape290.geometry = IndexedFaceSet293

HAnimSite289.children.append(Shape290)

HAnimSegment270.children.append(HAnimSite289)

HAnimJoint269.children.append(HAnimSegment270)

HAnimJoint249.children.append(HAnimJoint269)

HAnimJoint241.children.append(HAnimJoint249)

HAnimJoint209.children.append(HAnimJoint241)

HAnimJoint201.children.append(HAnimJoint209)

HAnimJoint175.children.append(HAnimJoint201)

HAnimJoint113.children.append(HAnimJoint175)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.DEF = "hanim_r_hip"
HAnimJoint295.name = "r_hip"
HAnimJoint295.center = [-0.095,0.9171,0.0029]
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.DEF = "hanim_r_thigh"
HAnimSegment296.name = "r_thigh"
Transform297 = x3d.Transform()
Transform297.translation = [-0.095,0.9171,0.0029]
Shape298 = x3d.Shape()
Appearance299 = x3d.Appearance()
Material300 = x3d.Material()
Material300.USE = "MIN_COLOR"

Appearance299.material = Material300

Shape298.appearance = Appearance299
IndexedFaceSet301 = x3d.IndexedFaceSet()
IndexedFaceSet301.creaseAngle = 0.5
IndexedFaceSet301.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate302 = x3d.Coordinate()
Coordinate302.USE = "points"

IndexedFaceSet301.coord = Coordinate302

Shape298.geometry = IndexedFaceSet301

Transform297.children.append(Shape298)

HAnimSegment296.children.append(Transform297)
HAnimSite303 = x3d.HAnimSite()
HAnimSite303.DEF = "hanim_r_knee_crease_pt"
HAnimSite303.name = "r_knee_crease_pt"
HAnimSite303.translation = [-0.0825,0.4932,-0.0326]
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.USE = "SITE_COLOR"

Appearance305.material = Material306

Shape304.appearance = Appearance305
IndexedFaceSet307 = x3d.IndexedFaceSet()
IndexedFaceSet307.creaseAngle = 0.5
IndexedFaceSet307.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate308 = x3d.Coordinate()
Coordinate308.USE = "points"

IndexedFaceSet307.coord = Coordinate308

Shape304.geometry = IndexedFaceSet307

HAnimSite303.children.append(Shape304)

HAnimSegment296.children.append(HAnimSite303)
HAnimSite309 = x3d.HAnimSite()
HAnimSite309.DEF = "hanim_r_femoral_lateral_epicondyle_pt"
HAnimSite309.name = "r_femoral_lateral_epicondyle_pt"
HAnimSite309.translation = [-0.1421,0.4992,0.031]
Shape310 = x3d.Shape()
Appearance311 = x3d.Appearance()
Material312 = x3d.Material()
Material312.USE = "SITE_COLOR"

Appearance311.material = Material312

Shape310.appearance = Appearance311
IndexedFaceSet313 = x3d.IndexedFaceSet()
IndexedFaceSet313.creaseAngle = 0.5
IndexedFaceSet313.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate314 = x3d.Coordinate()
Coordinate314.USE = "points"

IndexedFaceSet313.coord = Coordinate314

Shape310.geometry = IndexedFaceSet313

HAnimSite309.children.append(Shape310)

HAnimSegment296.children.append(HAnimSite309)
HAnimSite315 = x3d.HAnimSite()
HAnimSite315.DEF = "hanim_r_femoral_medial_epicondyle_pt"
HAnimSite315.name = "r_femoral_medial_epicondyle_pt"
HAnimSite315.translation = [-0.0221,0.5014,0.0289]
Shape316 = x3d.Shape()
Appearance317 = x3d.Appearance()
Material318 = x3d.Material()
Material318.USE = "SITE_COLOR"

Appearance317.material = Material318

Shape316.appearance = Appearance317
IndexedFaceSet319 = x3d.IndexedFaceSet()
IndexedFaceSet319.creaseAngle = 0.5
IndexedFaceSet319.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate320 = x3d.Coordinate()
Coordinate320.USE = "points"

IndexedFaceSet319.coord = Coordinate320

Shape316.geometry = IndexedFaceSet319

HAnimSite315.children.append(Shape316)

HAnimSegment296.children.append(HAnimSite315)

HAnimJoint295.children.append(HAnimSegment296)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.DEF = "hanim_r_knee"
HAnimJoint321.name = "r_knee"
HAnimJoint321.center = [-0.0867,0.4913,0.0318]
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.DEF = "hanim_r_calf"
HAnimSegment322.name = "r_calf"
Transform323 = x3d.Transform()
Transform323.translation = [-0.0867,0.4913,0.0318]
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material()
Material326.USE = "SITE_COLOR"

Appearance325.material = Material326

Shape324.appearance = Appearance325
IndexedFaceSet327 = x3d.IndexedFaceSet()
IndexedFaceSet327.creaseAngle = 0.5
IndexedFaceSet327.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate328 = x3d.Coordinate()
Coordinate328.USE = "points"

IndexedFaceSet327.coord = Coordinate328

Shape324.geometry = IndexedFaceSet327

Transform323.children.append(Shape324)

HAnimSegment322.children.append(Transform323)

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.DEF = "hanim_r_talocrural"
HAnimJoint329.name = "r_talocrural"
HAnimJoint329.center = [-0.0801,0.0712,-0.0766]
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.DEF = "hanim_r_talus"
HAnimSegment330.name = "r_talus"
Transform331 = x3d.Transform()
Transform331.translation = [-0.0801,0.0712,-0.0766]
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance()
Material334 = x3d.Material()
Material334.USE = "MIN_COLOR"

Appearance333.material = Material334

Shape332.appearance = Appearance333
IndexedFaceSet335 = x3d.IndexedFaceSet()
IndexedFaceSet335.creaseAngle = 0.5
IndexedFaceSet335.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate336 = x3d.Coordinate()
Coordinate336.USE = "points"

IndexedFaceSet335.coord = Coordinate336

Shape332.geometry = IndexedFaceSet335

Transform331.children.append(Shape332)

HAnimSegment330.children.append(Transform331)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite337.name = "r_lateral_malleolus_pt"
HAnimSite337.translation = [-0.1006,0.0658,-0.1075]
Shape338 = x3d.Shape()
Appearance339 = x3d.Appearance()
Material340 = x3d.Material()
Material340.USE = "HAND_FEET_COLOR"

Appearance339.material = Material340

Shape338.appearance = Appearance339
IndexedFaceSet341 = x3d.IndexedFaceSet()
IndexedFaceSet341.creaseAngle = 0.5
IndexedFaceSet341.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate342 = x3d.Coordinate()
Coordinate342.USE = "points"

IndexedFaceSet341.coord = Coordinate342

Shape338.geometry = IndexedFaceSet341

HAnimSite337.children.append(Shape338)

HAnimSegment330.children.append(HAnimSite337)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite343.name = "r_medial_malleolus_pt"
HAnimSite343.translation = [-0.0591,0.076,-0.0928]
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.USE = "HAND_FEET_COLOR"

Appearance345.material = Material346

Shape344.appearance = Appearance345
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.creaseAngle = 0.5
IndexedFaceSet347.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate348 = x3d.Coordinate()
Coordinate348.USE = "points"

IndexedFaceSet347.coord = Coordinate348

Shape344.geometry = IndexedFaceSet347

HAnimSite343.children.append(Shape344)

HAnimSegment330.children.append(HAnimSite343)
HAnimSite349 = x3d.HAnimSite()
HAnimSite349.DEF = "hanim_r_sphyrion_pt"
HAnimSite349.name = "r_sphyrion_pt"
HAnimSite349.translation = [-0.0603,0.061,-0.1002]
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Material352 = x3d.Material()
Material352.USE = "HAND_FEET_COLOR"

Appearance351.material = Material352

Shape350.appearance = Appearance351
IndexedFaceSet353 = x3d.IndexedFaceSet()
IndexedFaceSet353.creaseAngle = 0.5
IndexedFaceSet353.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate354 = x3d.Coordinate()
Coordinate354.USE = "points"

IndexedFaceSet353.coord = Coordinate354

Shape350.geometry = IndexedFaceSet353

HAnimSite349.children.append(Shape350)

HAnimSegment330.children.append(HAnimSite349)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite355.name = "r_calcaneus_posterior_pt"
HAnimSite355.translation = [-0.0692,0.0297,-0.1221]
Shape356 = x3d.Shape()
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.USE = "HAND_FEET_COLOR"

Appearance357.material = Material358

Shape356.appearance = Appearance357
IndexedFaceSet359 = x3d.IndexedFaceSet()
IndexedFaceSet359.creaseAngle = 0.5
IndexedFaceSet359.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate360 = x3d.Coordinate()
Coordinate360.USE = "points"

IndexedFaceSet359.coord = Coordinate360

Shape356.geometry = IndexedFaceSet359

HAnimSite355.children.append(Shape356)

HAnimSegment330.children.append(HAnimSite355)

HAnimJoint329.children.append(HAnimSegment330)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint361.name = "r_metatarsophalangeal_2"
HAnimJoint361.center = [-0.0801,0,0.0368]
HAnimSegment362 = x3d.HAnimSegment()
HAnimSegment362.DEF = "hanim_r_tarsal_proximal_phalanx_2"
HAnimSegment362.name = "r_tarsal_proximal_phalanx_2"
Transform363 = x3d.Transform()
Transform363.translation = [-0.0801,0,0.0368]
Shape364 = x3d.Shape()
Appearance365 = x3d.Appearance()
Material366 = x3d.Material()
Material366.USE = "JOINT_COLOR"

Appearance365.material = Material366

Shape364.appearance = Appearance365
IndexedFaceSet367 = x3d.IndexedFaceSet()
IndexedFaceSet367.creaseAngle = 0.5
IndexedFaceSet367.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate368 = x3d.Coordinate()
Coordinate368.USE = "points"

IndexedFaceSet367.coord = Coordinate368

Shape364.geometry = IndexedFaceSet367

Transform363.children.append(Shape364)

HAnimSegment362.children.append(Transform363)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.DEF = "hanim_r_middistal_tip"
HAnimSite369.name = "r_middistal_tip"
HAnimSite369.translation = [-0.1043,-0.0227,0.145]
Shape370 = x3d.Shape()
Appearance371 = x3d.Appearance()
Material372 = x3d.Material()
Material372.USE = "HAND_FEET_COLOR"

Appearance371.material = Material372

Shape370.appearance = Appearance371
IndexedFaceSet373 = x3d.IndexedFaceSet()
IndexedFaceSet373.creaseAngle = 0.5
IndexedFaceSet373.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate374 = x3d.Coordinate()
Coordinate374.USE = "points"

IndexedFaceSet373.coord = Coordinate374

Shape370.geometry = IndexedFaceSet373

HAnimSite369.children.append(Shape370)

HAnimSegment362.children.append(HAnimSite369)
HAnimSite375 = x3d.HAnimSite()
HAnimSite375.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite375.name = "r_metatarsal_phalanx_5_pt"
HAnimSite375.translation = [-0.1523,0.0166,0.0895]
Shape376 = x3d.Shape()
Appearance377 = x3d.Appearance()
Material378 = x3d.Material()
Material378.USE = "HAND_FEET_COLOR"

Appearance377.material = Material378

Shape376.appearance = Appearance377
IndexedFaceSet379 = x3d.IndexedFaceSet()
IndexedFaceSet379.creaseAngle = 0.5
IndexedFaceSet379.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate380 = x3d.Coordinate()
Coordinate380.USE = "points"

IndexedFaceSet379.coord = Coordinate380

Shape376.geometry = IndexedFaceSet379

HAnimSite375.children.append(Shape376)

HAnimSegment362.children.append(HAnimSite375)
HAnimSite381 = x3d.HAnimSite()
HAnimSite381.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite381.name = "r_metatarsal_phalanx_1_pt"
HAnimSite381.translation = [-0.0521,0.026,0.0127]
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.USE = "HAND_FEET_COLOR"

Appearance383.material = Material384

Shape382.appearance = Appearance383
IndexedFaceSet385 = x3d.IndexedFaceSet()
IndexedFaceSet385.creaseAngle = 0.5
IndexedFaceSet385.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate386 = x3d.Coordinate()
Coordinate386.USE = "points"

IndexedFaceSet385.coord = Coordinate386

Shape382.geometry = IndexedFaceSet385

HAnimSite381.children.append(Shape382)

HAnimSegment362.children.append(HAnimSite381)
HAnimSite387 = x3d.HAnimSite()
HAnimSite387.DEF = "hanim_r_tarsal_distal_phalanx_2_pt"
HAnimSite387.name = "r_tarsal_distal_phalanx_2_pt"
HAnimSite387.translation = [-0.0883,0.0134,0.1383]
Shape388 = x3d.Shape()
Appearance389 = x3d.Appearance()
Material390 = x3d.Material()
Material390.USE = "HAND_FEET_COLOR"

Appearance389.material = Material390

Shape388.appearance = Appearance389
IndexedFaceSet391 = x3d.IndexedFaceSet()
IndexedFaceSet391.creaseAngle = 0.5
IndexedFaceSet391.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate392 = x3d.Coordinate()
Coordinate392.USE = "points"

IndexedFaceSet391.coord = Coordinate392

Shape388.geometry = IndexedFaceSet391

HAnimSite387.children.append(Shape388)

HAnimSegment362.children.append(HAnimSite387)

HAnimJoint361.children.append(HAnimSegment362)

HAnimJoint329.children.append(HAnimJoint361)

HAnimJoint321.children.append(HAnimJoint329)

HAnimJoint295.children.append(HAnimJoint321)

HAnimJoint113.children.append(HAnimJoint295)

HAnimJoint98.children.append(HAnimJoint113)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.DEF = "hanim_vl5"
HAnimJoint393.name = "vl5"
HAnimJoint393.center = [0.0028,1.0568,-0.0776]
HAnimSegment394 = x3d.HAnimSegment()
HAnimSegment394.DEF = "hanim_l5"
HAnimSegment394.name = "l5"
Transform395 = x3d.Transform()
Transform395.translation = [0.0028,1.0568,-0.0776]
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Material398 = x3d.Material()
Material398.USE = "REC_SPINAL_COLOR"

Appearance397.material = Material398

Shape396.appearance = Appearance397
IndexedFaceSet399 = x3d.IndexedFaceSet()
IndexedFaceSet399.creaseAngle = 0.5
IndexedFaceSet399.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate400 = x3d.Coordinate()
Coordinate400.USE = "points"

IndexedFaceSet399.coord = Coordinate400

Shape396.geometry = IndexedFaceSet399

Transform395.children.append(Shape396)

HAnimSegment394.children.append(Transform395)

HAnimJoint393.children.append(HAnimSegment394)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.DEF = "hanim_vl4"
HAnimJoint401.name = "vl4"
HAnimJoint401.center = [0.0035,1.0925,-0.0787]
HAnimSegment402 = x3d.HAnimSegment()
HAnimSegment402.DEF = "hanim_l4"
HAnimSegment402.name = "l4"
Transform403 = x3d.Transform()
Transform403.translation = [0.0035,1.0925,-0.0787]
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.USE = "SPINAL_COLOR"

Appearance405.material = Material406

Shape404.appearance = Appearance405
IndexedFaceSet407 = x3d.IndexedFaceSet()
IndexedFaceSet407.creaseAngle = 0.5
IndexedFaceSet407.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate408 = x3d.Coordinate()
Coordinate408.USE = "points"

IndexedFaceSet407.coord = Coordinate408

Shape404.geometry = IndexedFaceSet407

Transform403.children.append(Shape404)

HAnimSegment402.children.append(Transform403)

HAnimJoint401.children.append(HAnimSegment402)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.DEF = "hanim_vl3"
HAnimJoint409.name = "vl3"
HAnimJoint409.center = [0.0041,1.1276,-0.0796]
HAnimSegment410 = x3d.HAnimSegment()
HAnimSegment410.DEF = "hanim_l3"
HAnimSegment410.name = "l3"
Transform411 = x3d.Transform()
Transform411.translation = [0.0041,1.1276,-0.0796]
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Material414 = x3d.Material()
Material414.USE = "REC_SPINAL_COLOR"

Appearance413.material = Material414

Shape412.appearance = Appearance413
IndexedFaceSet415 = x3d.IndexedFaceSet()
IndexedFaceSet415.creaseAngle = 0.5
IndexedFaceSet415.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate416 = x3d.Coordinate()
Coordinate416.USE = "points"

IndexedFaceSet415.coord = Coordinate416

Shape412.geometry = IndexedFaceSet415

Transform411.children.append(Shape412)

HAnimSegment410.children.append(Transform411)

HAnimJoint409.children.append(HAnimSegment410)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.DEF = "hanim_vl2"
HAnimJoint417.name = "vl2"
HAnimJoint417.center = [0.0045,1.1546,-0.08]
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.DEF = "hanim_l2"
HAnimSegment418.name = "l2"
Transform419 = x3d.Transform()
Transform419.translation = [0.0045,1.1546,-0.08]
Shape420 = x3d.Shape()
Appearance421 = x3d.Appearance()
Material422 = x3d.Material()
Material422.USE = "SPINAL_COLOR"

Appearance421.material = Material422

Shape420.appearance = Appearance421
IndexedFaceSet423 = x3d.IndexedFaceSet()
IndexedFaceSet423.creaseAngle = 0.5
IndexedFaceSet423.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate424 = x3d.Coordinate()
Coordinate424.USE = "points"

IndexedFaceSet423.coord = Coordinate424

Shape420.geometry = IndexedFaceSet423

Transform419.children.append(Shape420)

HAnimSegment418.children.append(Transform419)

HAnimJoint417.children.append(HAnimSegment418)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.DEF = "hanim_vl1"
HAnimJoint425.name = "vl1"
HAnimJoint425.center = [0.0048,1.1912,-0.0805]
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.DEF = "hanim_l1"
HAnimSegment426.name = "l1"
Transform427 = x3d.Transform()
Transform427.translation = [0.0048,1.1912,-0.0805]
Shape428 = x3d.Shape()
Appearance429 = x3d.Appearance()
Material430 = x3d.Material()
Material430.USE = "REC_SPINAL_COLOR"

Appearance429.material = Material430

Shape428.appearance = Appearance429
IndexedFaceSet431 = x3d.IndexedFaceSet()
IndexedFaceSet431.creaseAngle = 0.5
IndexedFaceSet431.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate432 = x3d.Coordinate()
Coordinate432.USE = "points"

IndexedFaceSet431.coord = Coordinate432

Shape428.geometry = IndexedFaceSet431

Transform427.children.append(Shape428)

HAnimSegment426.children.append(Transform427)

HAnimJoint425.children.append(HAnimSegment426)
HAnimJoint433 = x3d.HAnimJoint()
HAnimJoint433.DEF = "hanim_vt12"
HAnimJoint433.name = "vt12"
HAnimJoint433.center = [0.0051,1.2278,-0.0808]
HAnimSegment434 = x3d.HAnimSegment()
HAnimSegment434.DEF = "hanim_t12"
HAnimSegment434.name = "t12"
Transform435 = x3d.Transform()
Transform435.translation = [0.0051,1.2278,-0.0808]
Shape436 = x3d.Shape()
Appearance437 = x3d.Appearance()
Material438 = x3d.Material()
Material438.USE = "SPINAL_COLOR"

Appearance437.material = Material438

Shape436.appearance = Appearance437
IndexedFaceSet439 = x3d.IndexedFaceSet()
IndexedFaceSet439.creaseAngle = 0.5
IndexedFaceSet439.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate440 = x3d.Coordinate()
Coordinate440.USE = "points"

IndexedFaceSet439.coord = Coordinate440

Shape436.geometry = IndexedFaceSet439

Transform435.children.append(Shape436)

HAnimSegment434.children.append(Transform435)

HAnimJoint433.children.append(HAnimSegment434)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.DEF = "hanim_vt11"
HAnimJoint441.name = "vt11"
HAnimJoint441.center = [0.0053,1.2679,-0.081]
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.DEF = "hanim_t11"
HAnimSegment442.name = "t11"
Transform443 = x3d.Transform()
Transform443.translation = [0.0053,1.2679,-0.081]
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.USE = "SPINAL_COLOR"

Appearance445.material = Material446

Shape444.appearance = Appearance445
IndexedFaceSet447 = x3d.IndexedFaceSet()
IndexedFaceSet447.creaseAngle = 0.5
IndexedFaceSet447.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate448 = x3d.Coordinate()
Coordinate448.USE = "points"

IndexedFaceSet447.coord = Coordinate448

Shape444.geometry = IndexedFaceSet447

Transform443.children.append(Shape444)

HAnimSegment442.children.append(Transform443)

HAnimJoint441.children.append(HAnimSegment442)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.DEF = "hanim_vt10"
HAnimJoint449.name = "vt10"
HAnimJoint449.center = [0.0056,1.2848,-0.0822]
HAnimSegment450 = x3d.HAnimSegment()
HAnimSegment450.DEF = "hanim_t10"
HAnimSegment450.name = "t10"
Transform451 = x3d.Transform()
Transform451.translation = [0.0056,1.2848,-0.0822]
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.USE = "REC_SPINAL_COLOR"

Appearance453.material = Material454

Shape452.appearance = Appearance453
IndexedFaceSet455 = x3d.IndexedFaceSet()
IndexedFaceSet455.creaseAngle = 0.5
IndexedFaceSet455.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate456 = x3d.Coordinate()
Coordinate456.USE = "points"

IndexedFaceSet455.coord = Coordinate456

Shape452.geometry = IndexedFaceSet455

Transform451.children.append(Shape452)

HAnimSegment450.children.append(Transform451)

HAnimJoint449.children.append(HAnimSegment450)
HAnimJoint457 = x3d.HAnimJoint()
HAnimJoint457.DEF = "hanim_vt9"
HAnimJoint457.name = "vt9"
HAnimJoint457.center = [0.0057,1.3126,-0.0838]
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.DEF = "hanim_t9"
HAnimSegment458.name = "t9"
Transform459 = x3d.Transform()
Transform459.translation = [0.0057,1.3126,-0.0838]
Shape460 = x3d.Shape()
Appearance461 = x3d.Appearance()
Material462 = x3d.Material()
Material462.USE = "SPINAL_COLOR"

Appearance461.material = Material462

Shape460.appearance = Appearance461
IndexedFaceSet463 = x3d.IndexedFaceSet()
IndexedFaceSet463.creaseAngle = 0.5
IndexedFaceSet463.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate464 = x3d.Coordinate()
Coordinate464.USE = "points"

IndexedFaceSet463.coord = Coordinate464

Shape460.geometry = IndexedFaceSet463

Transform459.children.append(Shape460)

HAnimSegment458.children.append(Transform459)

HAnimJoint457.children.append(HAnimSegment458)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.DEF = "hanim_vt8"
HAnimJoint465.name = "vt8"
HAnimJoint465.center = [0.0057,1.3382,-0.0845]
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.DEF = "hanim_t8"
HAnimSegment466.name = "t8"
Transform467 = x3d.Transform()
Transform467.translation = [0.0057,1.3382,-0.0845]
Shape468 = x3d.Shape()
Appearance469 = x3d.Appearance()
Material470 = x3d.Material()
Material470.USE = "SPINAL_COLOR"

Appearance469.material = Material470

Shape468.appearance = Appearance469
IndexedFaceSet471 = x3d.IndexedFaceSet()
IndexedFaceSet471.creaseAngle = 0.5
IndexedFaceSet471.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate472 = x3d.Coordinate()
Coordinate472.USE = "points"

IndexedFaceSet471.coord = Coordinate472

Shape468.geometry = IndexedFaceSet471

Transform467.children.append(Shape468)

HAnimSegment466.children.append(Transform467)

HAnimJoint465.children.append(HAnimSegment466)
HAnimJoint473 = x3d.HAnimJoint()
HAnimJoint473.DEF = "hanim_vt7"
HAnimJoint473.name = "vt7"
HAnimJoint473.center = [0.0058,1.3625,-0.0833]
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.DEF = "hanim_t7"
HAnimSegment474.name = "t7"
Transform475 = x3d.Transform()
Transform475.translation = [0.0058,1.3625,-0.0833]
Shape476 = x3d.Shape()
Appearance477 = x3d.Appearance()
Material478 = x3d.Material()
Material478.USE = "SPINAL_COLOR"

Appearance477.material = Material478

Shape476.appearance = Appearance477
IndexedFaceSet479 = x3d.IndexedFaceSet()
IndexedFaceSet479.creaseAngle = 0.5
IndexedFaceSet479.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate480 = x3d.Coordinate()
Coordinate480.USE = "points"

IndexedFaceSet479.coord = Coordinate480

Shape476.geometry = IndexedFaceSet479

Transform475.children.append(Shape476)

HAnimSegment474.children.append(Transform475)

HAnimJoint473.children.append(HAnimSegment474)
HAnimJoint481 = x3d.HAnimJoint()
HAnimJoint481.DEF = "hanim_vt6"
HAnimJoint481.name = "vt6"
HAnimJoint481.center = [0.0059,1.3866,-0.08]
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.DEF = "hanim_t6"
HAnimSegment482.name = "t6"
Transform483 = x3d.Transform()
Transform483.translation = [0.0059,1.3866,-0.08]
Shape484 = x3d.Shape()
Appearance485 = x3d.Appearance()
Material486 = x3d.Material()
Material486.USE = "REC_SPINAL_COLOR"

Appearance485.material = Material486

Shape484.appearance = Appearance485
IndexedFaceSet487 = x3d.IndexedFaceSet()
IndexedFaceSet487.creaseAngle = 0.5
IndexedFaceSet487.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate488 = x3d.Coordinate()
Coordinate488.USE = "points"

IndexedFaceSet487.coord = Coordinate488

Shape484.geometry = IndexedFaceSet487

Transform483.children.append(Shape484)

HAnimSegment482.children.append(Transform483)

HAnimJoint481.children.append(HAnimSegment482)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.DEF = "hanim_vt5"
HAnimJoint489.name = "vt5"
HAnimJoint489.center = [0.006,1.4102,-0.0745]
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.DEF = "hanim_t5"
HAnimSegment490.name = "t5"
Transform491 = x3d.Transform()
Transform491.translation = [0.006,1.4102,-0.0745]
Shape492 = x3d.Shape()
Appearance493 = x3d.Appearance()
Material494 = x3d.Material()
Material494.USE = "SPINAL_COLOR"

Appearance493.material = Material494

Shape492.appearance = Appearance493
IndexedFaceSet495 = x3d.IndexedFaceSet()
IndexedFaceSet495.creaseAngle = 0.5
IndexedFaceSet495.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate496 = x3d.Coordinate()
Coordinate496.USE = "points"

IndexedFaceSet495.coord = Coordinate496

Shape492.geometry = IndexedFaceSet495

Transform491.children.append(Shape492)

HAnimSegment490.children.append(Transform491)

HAnimJoint489.children.append(HAnimSegment490)
HAnimJoint497 = x3d.HAnimJoint()
HAnimJoint497.DEF = "hanim_vt4"
HAnimJoint497.name = "vt4"
HAnimJoint497.center = [0.0061,1.432,-0.0675]
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.DEF = "hanim_t4"
HAnimSegment498.name = "t4"
Transform499 = x3d.Transform()
Transform499.translation = [0.0061,1.432,-0.0675]
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
Material502 = x3d.Material()
Material502.USE = "SPINAL_COLOR"

Appearance501.material = Material502

Shape500.appearance = Appearance501
IndexedFaceSet503 = x3d.IndexedFaceSet()
IndexedFaceSet503.creaseAngle = 0.5
IndexedFaceSet503.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate504 = x3d.Coordinate()
Coordinate504.USE = "points"

IndexedFaceSet503.coord = Coordinate504

Shape500.geometry = IndexedFaceSet503

Transform499.children.append(Shape500)

HAnimSegment498.children.append(Transform499)

HAnimJoint497.children.append(HAnimSegment498)
HAnimJoint505 = x3d.HAnimJoint()
HAnimJoint505.DEF = "hanim_vt3"
HAnimJoint505.name = "vt3"
HAnimJoint505.center = [0.0062,1.4583,-0.057]
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.DEF = "hanim_t3"
HAnimSegment506.name = "t3"
Transform507 = x3d.Transform()
Transform507.translation = [0.0062,1.4583,-0.057]
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance()
Material510 = x3d.Material()
Material510.USE = "SPINAL_COLOR"

Appearance509.material = Material510

Shape508.appearance = Appearance509
IndexedFaceSet511 = x3d.IndexedFaceSet()
IndexedFaceSet511.creaseAngle = 0.5
IndexedFaceSet511.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate512 = x3d.Coordinate()
Coordinate512.USE = "points"

IndexedFaceSet511.coord = Coordinate512

Shape508.geometry = IndexedFaceSet511

Transform507.children.append(Shape508)

HAnimSegment506.children.append(Transform507)

HAnimJoint505.children.append(HAnimSegment506)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.DEF = "hanim_vt2"
HAnimJoint513.name = "vt2"
HAnimJoint513.center = [0.0063,1.4761,-0.0484]
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.DEF = "hanim_t2"
HAnimSegment514.name = "t2"
Transform515 = x3d.Transform()
Transform515.translation = [0.0063,1.4761,-0.0484]
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance()
Material518 = x3d.Material()
Material518.USE = "SPINAL_COLOR"

Appearance517.material = Material518

Shape516.appearance = Appearance517
IndexedFaceSet519 = x3d.IndexedFaceSet()
IndexedFaceSet519.creaseAngle = 0.5
IndexedFaceSet519.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate520 = x3d.Coordinate()
Coordinate520.USE = "points"

IndexedFaceSet519.coord = Coordinate520

Shape516.geometry = IndexedFaceSet519

Transform515.children.append(Shape516)

HAnimSegment514.children.append(Transform515)

HAnimJoint513.children.append(HAnimSegment514)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.DEF = "hanim_vt1"
HAnimJoint521.name = "vt1"
HAnimJoint521.center = [0.0065,1.4951,-0.0387]
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.DEF = "hanim_t1"
HAnimSegment522.name = "t1"
Transform523 = x3d.Transform()
Transform523.translation = [0.0065,1.4951,-0.0387]
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.USE = "REC_SPINAL_COLOR"

Appearance525.material = Material526

Shape524.appearance = Appearance525
IndexedFaceSet527 = x3d.IndexedFaceSet()
IndexedFaceSet527.creaseAngle = 0.5
IndexedFaceSet527.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate528 = x3d.Coordinate()
Coordinate528.USE = "points"

IndexedFaceSet527.coord = Coordinate528

Shape524.geometry = IndexedFaceSet527

Transform523.children.append(Shape524)

HAnimSegment522.children.append(Transform523)

HAnimJoint521.children.append(HAnimSegment522)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.DEF = "hanim_l_shoulder"
HAnimJoint529.name = "l_shoulder"
HAnimJoint529.center = [0.2029,1.4376,-0.0387]
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.DEF = "hanim_l_upperarm"
HAnimSegment530.name = "l_upperarm"
Transform531 = x3d.Transform()
Transform531.translation = [0.2029,1.4376,-0.0387]
Shape532 = x3d.Shape()
Appearance533 = x3d.Appearance()
Material534 = x3d.Material()
Material534.USE = "MIN_COLOR"

Appearance533.material = Material534

Shape532.appearance = Appearance533
IndexedFaceSet535 = x3d.IndexedFaceSet()
IndexedFaceSet535.creaseAngle = 0.5
IndexedFaceSet535.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate536 = x3d.Coordinate()
Coordinate536.USE = "points"

IndexedFaceSet535.coord = Coordinate536

Shape532.geometry = IndexedFaceSet535

Transform531.children.append(Shape532)

HAnimSegment530.children.append(Transform531)
Transform537 = x3d.Transform()
Transform537.DEF = "l_upperarm_adjust"
Transform537.translation = [0.2029,1.4376,-0.0387]
Transform537.rotation = [1,0,0,0.119]
Transform537.center = [0.182,1.22,-0.047]

HAnimSegment530.children.append(Transform537)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.DEF = "hanim_l_humeral_lateral_epicondyle_pt"
HAnimSite538.name = "l_humeral_lateral_epicondyle_pt"
HAnimSite538.translation = [0.228,1.1482,-0.11]
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.USE = "SITE_COLOR"

Appearance540.material = Material541

Shape539.appearance = Appearance540
IndexedFaceSet542 = x3d.IndexedFaceSet()
IndexedFaceSet542.creaseAngle = 0.5
IndexedFaceSet542.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate543 = x3d.Coordinate()
Coordinate543.USE = "points"

IndexedFaceSet542.coord = Coordinate543

Shape539.geometry = IndexedFaceSet542

HAnimSite538.children.append(Shape539)

HAnimSegment530.children.append(HAnimSite538)

HAnimJoint529.children.append(HAnimSegment530)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.DEF = "hanim_l_elbow"
HAnimJoint544.name = "l_elbow"
HAnimJoint544.center = [0.2014,1.1357,-0.0682]
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.DEF = "hanim_l_forearm"
HAnimSegment545.name = "l_forearm"
Transform546 = x3d.Transform()
Transform546.translation = [0.2014,1.1357,-0.0682]
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance()
Material549 = x3d.Material()
Material549.USE = "MIN_COLOR"

Appearance548.material = Material549

Shape547.appearance = Appearance548
IndexedFaceSet550 = x3d.IndexedFaceSet()
IndexedFaceSet550.creaseAngle = 0.5
IndexedFaceSet550.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate551 = x3d.Coordinate()
Coordinate551.USE = "points"

IndexedFaceSet550.coord = Coordinate551

Shape547.geometry = IndexedFaceSet550

Transform546.children.append(Shape547)

HAnimSegment545.children.append(Transform546)
Transform552 = x3d.Transform()
Transform552.DEF = "l_forearm_adjust"
Transform552.translation = [0.2014,1.1357,-0.0682]
Transform552.rotation = [-1,0,0,0.1]
Transform552.center = [0.198,0.961,-0.0405]

HAnimSegment545.children.append(Transform552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.DEF = "hanim_l_radial_styloid_pt"
HAnimSite553.name = "l_radial_styloid_pt"
HAnimSite553.translation = [0.1901,0.8645,-0.0415]
Shape554 = x3d.Shape()
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.USE = "SITE_COLOR"

Appearance555.material = Material556

Shape554.appearance = Appearance555
IndexedFaceSet557 = x3d.IndexedFaceSet()
IndexedFaceSet557.creaseAngle = 0.5
IndexedFaceSet557.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate558 = x3d.Coordinate()
Coordinate558.USE = "points"

IndexedFaceSet557.coord = Coordinate558

Shape554.geometry = IndexedFaceSet557

HAnimSite553.children.append(Shape554)

HAnimSegment545.children.append(HAnimSite553)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.DEF = "hanim_l_olecranon_pt"
HAnimSite559.name = "l_olecranon_pt"
HAnimSite559.translation = [-0.1962,1.1375,-0.1123]
Shape560 = x3d.Shape()
Appearance561 = x3d.Appearance()
Material562 = x3d.Material()
Material562.USE = "SITE_COLOR"

Appearance561.material = Material562

Shape560.appearance = Appearance561
IndexedFaceSet563 = x3d.IndexedFaceSet()
IndexedFaceSet563.creaseAngle = 0.5
IndexedFaceSet563.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate564 = x3d.Coordinate()
Coordinate564.USE = "points"

IndexedFaceSet563.coord = Coordinate564

Shape560.geometry = IndexedFaceSet563

HAnimSite559.children.append(Shape560)

HAnimSegment545.children.append(HAnimSite559)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.DEF = "hanim_l_humeral_medial_epicondyle_pt"
HAnimSite565.name = "l_humeral_medial_epicondyle_pt"
HAnimSite565.translation = [0.1735,1.1272,-0.1113]
Shape566 = x3d.Shape()
Appearance567 = x3d.Appearance()
Material568 = x3d.Material()
Material568.USE = "SITE_COLOR"

Appearance567.material = Material568

Shape566.appearance = Appearance567
IndexedFaceSet569 = x3d.IndexedFaceSet()
IndexedFaceSet569.creaseAngle = 0.5
IndexedFaceSet569.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate570 = x3d.Coordinate()
Coordinate570.USE = "points"

IndexedFaceSet569.coord = Coordinate570

Shape566.geometry = IndexedFaceSet569

HAnimSite565.children.append(Shape566)

HAnimSegment545.children.append(HAnimSite565)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.DEF = "hanim_l_radiale_pt"
HAnimSite571.name = "l_radiale_pt"
HAnimSite571.translation = [0.2182,1.1212,-0.1167]
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.USE = "SITE_COLOR"

Appearance573.material = Material574

Shape572.appearance = Appearance573
IndexedFaceSet575 = x3d.IndexedFaceSet()
IndexedFaceSet575.creaseAngle = 0.5
IndexedFaceSet575.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate576 = x3d.Coordinate()
Coordinate576.USE = "points"

IndexedFaceSet575.coord = Coordinate576

Shape572.geometry = IndexedFaceSet575

HAnimSite571.children.append(Shape572)

HAnimSegment545.children.append(HAnimSite571)

HAnimJoint544.children.append(HAnimSegment545)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.DEF = "hanim_l_radiocarpal"
HAnimJoint577.name = "l_radiocarpal"
HAnimJoint577.center = [0.1984,0.8663,-0.0583]
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.DEF = "hanim_l_carpal"
HAnimSegment578.name = "l_carpal"
Transform579 = x3d.Transform()
Transform579.translation = [0.1984,0.8663,-0.0583]
Shape580 = x3d.Shape()
Appearance581 = x3d.Appearance()
Material582 = x3d.Material()
Material582.USE = "MIN_COLOR"

Appearance581.material = Material582

Shape580.appearance = Appearance581
IndexedFaceSet583 = x3d.IndexedFaceSet()
IndexedFaceSet583.creaseAngle = 0.5
IndexedFaceSet583.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate584 = x3d.Coordinate()
Coordinate584.USE = "points"

IndexedFaceSet583.coord = Coordinate584

Shape580.geometry = IndexedFaceSet583

Transform579.children.append(Shape580)

HAnimSegment578.children.append(Transform579)
Transform585 = x3d.Transform()
Transform585.DEF = "l_hand_adjust"
Transform585.translation = [0.1984,0.8663,-0.0583]
Transform585.rotation = [-0.06361,-0.9967,0.04988,1.333]
Transform585.center = [0.213,0.811,-0.0338]

HAnimSegment578.children.append(Transform585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.DEF = "hanim_l_hand_tip"
HAnimSite586.name = "l_hand_tip"
HAnimSite586.translation = [0.208,0.6731,-0.0491]
Shape587 = x3d.Shape()
Appearance588 = x3d.Appearance()
Material589 = x3d.Material()
Material589.USE = "SITE_COLOR"

Appearance588.material = Material589

Shape587.appearance = Appearance588
IndexedFaceSet590 = x3d.IndexedFaceSet()
IndexedFaceSet590.creaseAngle = 0.5
IndexedFaceSet590.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate591 = x3d.Coordinate()
Coordinate591.USE = "points"

IndexedFaceSet590.coord = Coordinate591

Shape587.geometry = IndexedFaceSet590

HAnimSite586.children.append(Shape587)

HAnimSegment578.children.append(HAnimSite586)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite592.name = "l_metacarpal_phalanx_2_pt"
HAnimSite592.translation = [0.2009,0.8139,-0.0237]
Shape593 = x3d.Shape()
Appearance594 = x3d.Appearance()
Material595 = x3d.Material()
Material595.USE = "SITE_COLOR"

Appearance594.material = Material595

Shape593.appearance = Appearance594
IndexedFaceSet596 = x3d.IndexedFaceSet()
IndexedFaceSet596.creaseAngle = 0.5
IndexedFaceSet596.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate597 = x3d.Coordinate()
Coordinate597.USE = "points"

IndexedFaceSet596.coord = Coordinate597

Shape593.geometry = IndexedFaceSet596

HAnimSite592.children.append(Shape593)

HAnimSegment578.children.append(HAnimSite592)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.DEF = "hanim_l_dactylion_pt"
HAnimSite598.name = "l_dactylion_pt"
HAnimSite598.translation = [0.2056,0.6743,-0.0482]
Shape599 = x3d.Shape()
Appearance600 = x3d.Appearance()
Material601 = x3d.Material()
Material601.USE = "SITE_COLOR"

Appearance600.material = Material601

Shape599.appearance = Appearance600
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.creaseAngle = 0.5
IndexedFaceSet602.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate603 = x3d.Coordinate()
Coordinate603.USE = "points"

IndexedFaceSet602.coord = Coordinate603

Shape599.geometry = IndexedFaceSet602

HAnimSite598.children.append(Shape599)

HAnimSegment578.children.append(HAnimSite598)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite604.name = "l_ulnar_styloid_pt"
HAnimSite604.translation = [-0.2142,0.8529,-0.0648]
Shape605 = x3d.Shape()
Appearance606 = x3d.Appearance()
Material607 = x3d.Material()
Material607.USE = "SITE_COLOR"

Appearance606.material = Material607

Shape605.appearance = Appearance606
IndexedFaceSet608 = x3d.IndexedFaceSet()
IndexedFaceSet608.creaseAngle = 0.5
IndexedFaceSet608.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate609 = x3d.Coordinate()
Coordinate609.USE = "points"

IndexedFaceSet608.coord = Coordinate609

Shape605.geometry = IndexedFaceSet608

HAnimSite604.children.append(Shape605)

HAnimSegment578.children.append(HAnimSite604)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite610.name = "l_metacarpal_phalanx_5_pt"
HAnimSite610.translation = [0.1929,0.786,-0.1122]
Shape611 = x3d.Shape()
Appearance612 = x3d.Appearance()
Material613 = x3d.Material()
Material613.USE = "SITE_COLOR"

Appearance612.material = Material613

Shape611.appearance = Appearance612
IndexedFaceSet614 = x3d.IndexedFaceSet()
IndexedFaceSet614.creaseAngle = 0.5
IndexedFaceSet614.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate615 = x3d.Coordinate()
Coordinate615.USE = "points"

IndexedFaceSet614.coord = Coordinate615

Shape611.geometry = IndexedFaceSet614

HAnimSite610.children.append(Shape611)

HAnimSegment578.children.append(HAnimSite610)

HAnimJoint577.children.append(HAnimSegment578)
HAnimJoint616 = x3d.HAnimJoint()
HAnimJoint616.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint616.name = "l_carpometacarpal_1"
HAnimJoint616.center = [0.1924,0.8472,-0.0534]
HAnimSegment617 = x3d.HAnimSegment()
HAnimSegment617.DEF = "hanim_l_metacarpal_1"
HAnimSegment617.name = "l_metacarpal_1"
Transform618 = x3d.Transform()
Transform618.translation = [0.1924,0.8472,-0.0534]
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance()
Material621 = x3d.Material()
Material621.USE = "JOINT_COLOR"

Appearance620.material = Material621

Shape619.appearance = Appearance620
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.creaseAngle = 0.5
IndexedFaceSet622.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate623 = x3d.Coordinate()
Coordinate623.USE = "points"

IndexedFaceSet622.coord = Coordinate623

Shape619.geometry = IndexedFaceSet622

Transform618.children.append(Shape619)

HAnimSegment617.children.append(Transform618)

HAnimJoint616.children.append(HAnimSegment617)
HAnimJoint624 = x3d.HAnimJoint()
HAnimJoint624.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint624.name = "l_metacarpophalangeal_1"
HAnimJoint624.center = [0.1951,0.8226,0.0246]
HAnimSegment625 = x3d.HAnimSegment()
HAnimSegment625.DEF = "hanim_l_carpal_proximal_phalanx_1"
HAnimSegment625.name = "l_carpal_proximal_phalanx_1"
Transform626 = x3d.Transform()
Transform626.translation = [0.1951,0.8226,0.0246]
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance()
Material629 = x3d.Material()
Material629.USE = "JOINT_COLOR"

Appearance628.material = Material629

Shape627.appearance = Appearance628
IndexedFaceSet630 = x3d.IndexedFaceSet()
IndexedFaceSet630.creaseAngle = 0.5
IndexedFaceSet630.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate631 = x3d.Coordinate()
Coordinate631.USE = "points"

IndexedFaceSet630.coord = Coordinate631

Shape627.geometry = IndexedFaceSet630

Transform626.children.append(Shape627)

HAnimSegment625.children.append(Transform626)

HAnimJoint624.children.append(HAnimSegment625)
HAnimJoint632 = x3d.HAnimJoint()
HAnimJoint632.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint632.name = "l_carpal_interphalangeal_1"
HAnimJoint632.center = [0.1955,0.8159,0.0464]
HAnimSegment633 = x3d.HAnimSegment()
HAnimSegment633.DEF = "hanim_l_carpal_distal_phalanx_1"
HAnimSegment633.name = "l_carpal_distal_phalanx_1"
Transform634 = x3d.Transform()
Transform634.translation = [0.1955,0.8159,0.0464]
Shape635 = x3d.Shape()
Appearance636 = x3d.Appearance()
Material637 = x3d.Material()
Material637.USE = "JOINT_COLOR"

Appearance636.material = Material637

Shape635.appearance = Appearance636
IndexedFaceSet638 = x3d.IndexedFaceSet()
IndexedFaceSet638.creaseAngle = 0.5
IndexedFaceSet638.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate639 = x3d.Coordinate()
Coordinate639.USE = "points"

IndexedFaceSet638.coord = Coordinate639

Shape635.geometry = IndexedFaceSet638

Transform634.children.append(Shape635)

HAnimSegment633.children.append(Transform634)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
HAnimSite640.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite640.translation = [0.1982,0.8061,0.0759]
Shape641 = x3d.Shape()
Appearance642 = x3d.Appearance()
Material643 = x3d.Material()
Material643.USE = "HAND_FEET_COLOR"

Appearance642.material = Material643

Shape641.appearance = Appearance642
IndexedFaceSet644 = x3d.IndexedFaceSet()
IndexedFaceSet644.creaseAngle = 0.5
IndexedFaceSet644.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate645 = x3d.Coordinate()
Coordinate645.USE = "points"

IndexedFaceSet644.coord = Coordinate645

Shape641.geometry = IndexedFaceSet644

HAnimSite640.children.append(Shape641)

HAnimSegment633.children.append(HAnimSite640)

HAnimJoint632.children.append(HAnimSegment633)

HAnimJoint624.children.append(HAnimJoint632)

HAnimJoint616.children.append(HAnimJoint624)

HAnimJoint577.children.append(HAnimJoint616)
HAnimJoint646 = x3d.HAnimJoint()
HAnimJoint646.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint646.name = "l_carpometacarpal_2"
HAnimJoint646.center = [0.1983,0.8024,-0.028]
HAnimSegment647 = x3d.HAnimSegment()
HAnimSegment647.DEF = "hanim_l_metacarpal_2"
HAnimSegment647.name = "l_metacarpal_2"
Transform648 = x3d.Transform()
Transform648.translation = [0.1983,0.8024,-0.028]
Shape649 = x3d.Shape()
Appearance650 = x3d.Appearance()
Material651 = x3d.Material()
Material651.USE = "JOINT_COLOR"

Appearance650.material = Material651

Shape649.appearance = Appearance650
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.creaseAngle = 0.5
IndexedFaceSet652.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate653 = x3d.Coordinate()
Coordinate653.USE = "points"

IndexedFaceSet652.coord = Coordinate653

Shape649.geometry = IndexedFaceSet652

Transform648.children.append(Shape649)

HAnimSegment647.children.append(Transform648)

HAnimJoint646.children.append(HAnimSegment647)
HAnimJoint654 = x3d.HAnimJoint()
HAnimJoint654.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint654.name = "l_metacarpophalangeal_2"
HAnimJoint654.center = [0.1983,0.7815,-0.028]
HAnimSegment655 = x3d.HAnimSegment()
HAnimSegment655.DEF = "hanim_l_carpal_proximal_phalanx_2"
HAnimSegment655.name = "l_carpal_proximal_phalanx_2"
Transform656 = x3d.Transform()
Transform656.translation = [0.1983,0.7815,-0.028]
Shape657 = x3d.Shape()
Appearance658 = x3d.Appearance()
Material659 = x3d.Material()
Material659.USE = "JOINT_COLOR"

Appearance658.material = Material659

Shape657.appearance = Appearance658
IndexedFaceSet660 = x3d.IndexedFaceSet()
IndexedFaceSet660.creaseAngle = 0.5
IndexedFaceSet660.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate661 = x3d.Coordinate()
Coordinate661.USE = "points"

IndexedFaceSet660.coord = Coordinate661

Shape657.geometry = IndexedFaceSet660

Transform656.children.append(Shape657)

HAnimSegment655.children.append(Transform656)

HAnimJoint654.children.append(HAnimSegment655)
HAnimJoint662 = x3d.HAnimJoint()
HAnimJoint662.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint662.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint662.center = [0.2017,0.7363,-0.0248]
HAnimSegment663 = x3d.HAnimSegment()
HAnimSegment663.DEF = "hanim_l_carpal_middle_phalanx_2"
HAnimSegment663.name = "l_carpal_middle_phalanx_2"
Transform664 = x3d.Transform()
Transform664.translation = [0.2017,0.7363,-0.0248]
Shape665 = x3d.Shape()
Appearance666 = x3d.Appearance()
Material667 = x3d.Material()
Material667.USE = "JOINT_COLOR"

Appearance666.material = Material667

Shape665.appearance = Appearance666
IndexedFaceSet668 = x3d.IndexedFaceSet()
IndexedFaceSet668.creaseAngle = 0.5
IndexedFaceSet668.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate669 = x3d.Coordinate()
Coordinate669.USE = "points"

IndexedFaceSet668.coord = Coordinate669

Shape665.geometry = IndexedFaceSet668

Transform664.children.append(Shape665)

HAnimSegment663.children.append(Transform664)

HAnimJoint662.children.append(HAnimSegment663)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint670.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint670.center = [0.2028,0.7139,-0.0236]
HAnimSegment671 = x3d.HAnimSegment()
HAnimSegment671.DEF = "hanim_l_carpal_distal_phalanx_2"
HAnimSegment671.name = "l_carpal_distal_phalanx_2"
Transform672 = x3d.Transform()
Transform672.translation = [0.2028,0.7139,-0.0236]
Shape673 = x3d.Shape()
Appearance674 = x3d.Appearance()
Material675 = x3d.Material()
Material675.USE = "JOINT_COLOR"

Appearance674.material = Material675

Shape673.appearance = Appearance674
IndexedFaceSet676 = x3d.IndexedFaceSet()
IndexedFaceSet676.creaseAngle = 0.5
IndexedFaceSet676.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate677 = x3d.Coordinate()
Coordinate677.USE = "points"

IndexedFaceSet676.coord = Coordinate677

Shape673.geometry = IndexedFaceSet676

Transform672.children.append(Shape673)

HAnimSegment671.children.append(Transform672)
HAnimSite678 = x3d.HAnimSite()
HAnimSite678.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
HAnimSite678.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite678.translation = [0.2089,0.6858,-0.0245]
Shape679 = x3d.Shape()
Appearance680 = x3d.Appearance()
Material681 = x3d.Material()
Material681.USE = "HAND_FEET_COLOR"

Appearance680.material = Material681

Shape679.appearance = Appearance680
IndexedFaceSet682 = x3d.IndexedFaceSet()
IndexedFaceSet682.creaseAngle = 0.5
IndexedFaceSet682.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate683 = x3d.Coordinate()
Coordinate683.USE = "points"

IndexedFaceSet682.coord = Coordinate683

Shape679.geometry = IndexedFaceSet682

HAnimSite678.children.append(Shape679)

HAnimSegment671.children.append(HAnimSite678)

HAnimJoint670.children.append(HAnimSegment671)

HAnimJoint662.children.append(HAnimJoint670)

HAnimJoint654.children.append(HAnimJoint662)

HAnimJoint646.children.append(HAnimJoint654)

HAnimJoint577.children.append(HAnimJoint646)

HAnimJoint544.children.append(HAnimJoint577)

HAnimJoint529.children.append(HAnimJoint544)

HAnimJoint521.children.append(HAnimJoint529)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.DEF = "hanim_r_shoulder"
HAnimJoint684.name = "r_shoulder"
HAnimJoint684.center = [-0.1907,1.4407,-0.0325]
HAnimSegment685 = x3d.HAnimSegment()
HAnimSegment685.DEF = "hanim_r_upperarm"
HAnimSegment685.name = "r_upperarm"
Transform686 = x3d.Transform()
Transform686.translation = [-0.1907,1.4407,-0.0325]
Shape687 = x3d.Shape()
Appearance688 = x3d.Appearance()
Material689 = x3d.Material()
Material689.USE = "MIN_COLOR"

Appearance688.material = Material689

Shape687.appearance = Appearance688
IndexedFaceSet690 = x3d.IndexedFaceSet()
IndexedFaceSet690.creaseAngle = 0.5
IndexedFaceSet690.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate691 = x3d.Coordinate()
Coordinate691.USE = "points"

IndexedFaceSet690.coord = Coordinate691

Shape687.geometry = IndexedFaceSet690

Transform686.children.append(Shape687)

HAnimSegment685.children.append(Transform686)
Transform692 = x3d.Transform()
Transform692.DEF = "r_upperarm_adjust"
Transform692.translation = [-0.1907,1.4407,-0.0325]
Transform692.rotation = [1,0,0,0.0836]
Transform692.center = [-0.182,1.22,-0.047]

HAnimSegment685.children.append(Transform692)
HAnimSite693 = x3d.HAnimSite()
HAnimSite693.DEF = "hanim_r_humeral_lateral_epicondyle_pt"
HAnimSite693.name = "r_humeral_lateral_epicondyle_pt"
HAnimSite693.translation = [-0.2224,1.1517,-0.1033]
Shape694 = x3d.Shape()
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.USE = "SITE_COLOR"

Appearance695.material = Material696

Shape694.appearance = Appearance695
IndexedFaceSet697 = x3d.IndexedFaceSet()
IndexedFaceSet697.creaseAngle = 0.5
IndexedFaceSet697.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate698 = x3d.Coordinate()
Coordinate698.USE = "points"

IndexedFaceSet697.coord = Coordinate698

Shape694.geometry = IndexedFaceSet697

HAnimSite693.children.append(Shape694)

HAnimSegment685.children.append(HAnimSite693)

HAnimJoint684.children.append(HAnimSegment685)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.DEF = "hanim_r_elbow"
HAnimJoint699.name = "r_elbow"
HAnimJoint699.center = [-0.1949,1.1388,-0.062]
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.DEF = "hanim_r_forearm"
HAnimSegment700.name = "r_forearm"
Transform701 = x3d.Transform()
Transform701.translation = [-0.1949,1.1388,-0.062]
Shape702 = x3d.Shape()
Appearance703 = x3d.Appearance()
Material704 = x3d.Material()
Material704.USE = "MIN_COLOR"

Appearance703.material = Material704

Shape702.appearance = Appearance703
IndexedFaceSet705 = x3d.IndexedFaceSet()
IndexedFaceSet705.creaseAngle = 0.5
IndexedFaceSet705.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate706 = x3d.Coordinate()
Coordinate706.USE = "points"

IndexedFaceSet705.coord = Coordinate706

Shape702.geometry = IndexedFaceSet705

Transform701.children.append(Shape702)

HAnimSegment700.children.append(Transform701)
Transform707 = x3d.Transform()
Transform707.DEF = "r_forearm_adjust"
Transform707.translation = [-0.1949,1.1388,-0.062]
Transform707.rotation = [-1,0,0,0.1254]
Transform707.center = [-0.198,0.961,-0.0397]

HAnimSegment700.children.append(Transform707)
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.DEF = "hanim_r_radial_styloid_pt"
HAnimSite708.name = "r_radial_styloid_pt"
HAnimSite708.translation = [-0.1884,0.8676,-0.036]
Shape709 = x3d.Shape()
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.USE = "SITE_COLOR"

Appearance710.material = Material711

Shape709.appearance = Appearance710
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.creaseAngle = 0.5
IndexedFaceSet712.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate713 = x3d.Coordinate()
Coordinate713.USE = "points"

IndexedFaceSet712.coord = Coordinate713

Shape709.geometry = IndexedFaceSet712

HAnimSite708.children.append(Shape709)

HAnimSegment700.children.append(HAnimSite708)
HAnimSite714 = x3d.HAnimSite()
HAnimSite714.DEF = "hanim_r_olecranon_pt"
HAnimSite714.name = "r_olecranon_pt"
HAnimSite714.translation = [-0.1907,1.1405,-0.1065]
Shape715 = x3d.Shape()
Appearance716 = x3d.Appearance()
Material717 = x3d.Material()
Material717.USE = "SITE_COLOR"

Appearance716.material = Material717

Shape715.appearance = Appearance716
IndexedFaceSet718 = x3d.IndexedFaceSet()
IndexedFaceSet718.creaseAngle = 0.5
IndexedFaceSet718.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate719 = x3d.Coordinate()
Coordinate719.USE = "points"

IndexedFaceSet718.coord = Coordinate719

Shape715.geometry = IndexedFaceSet718

HAnimSite714.children.append(Shape715)

HAnimSegment700.children.append(HAnimSite714)
HAnimSite720 = x3d.HAnimSite()
HAnimSite720.DEF = "hanim_r_humeral_medial_epicondyle_pt"
HAnimSite720.name = "r_humeral_medial_epicondyle_pt"
HAnimSite720.translation = [-0.168,1.1298,-0.1062]
Shape721 = x3d.Shape()
Appearance722 = x3d.Appearance()
Material723 = x3d.Material()
Material723.USE = "SITE_COLOR"

Appearance722.material = Material723

Shape721.appearance = Appearance722
IndexedFaceSet724 = x3d.IndexedFaceSet()
IndexedFaceSet724.creaseAngle = 0.5
IndexedFaceSet724.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate725 = x3d.Coordinate()
Coordinate725.USE = "points"

IndexedFaceSet724.coord = Coordinate725

Shape721.geometry = IndexedFaceSet724

HAnimSite720.children.append(Shape721)

HAnimSegment700.children.append(HAnimSite720)
HAnimSite726 = x3d.HAnimSite()
HAnimSite726.DEF = "hanim_r_radiale_pt"
HAnimSite726.name = "r_radiale_pt"
HAnimSite726.translation = [-0.213,1.1305,-0.1091]
Shape727 = x3d.Shape()
Appearance728 = x3d.Appearance()
Material729 = x3d.Material()
Material729.USE = "SITE_COLOR"

Appearance728.material = Material729

Shape727.appearance = Appearance728
IndexedFaceSet730 = x3d.IndexedFaceSet()
IndexedFaceSet730.creaseAngle = 0.5
IndexedFaceSet730.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate731 = x3d.Coordinate()
Coordinate731.USE = "points"

IndexedFaceSet730.coord = Coordinate731

Shape727.geometry = IndexedFaceSet730

HAnimSite726.children.append(Shape727)

HAnimSegment700.children.append(HAnimSite726)

HAnimJoint699.children.append(HAnimSegment700)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.DEF = "hanim_r_radiocarpal"
HAnimJoint732.name = "r_radiocarpal"
HAnimJoint732.center = [-0.1959,0.8694,-0.0521]
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.DEF = "hanim_r_carpal"
HAnimSegment733.name = "r_carpal"
Transform734 = x3d.Transform()
Transform734.translation = [-0.1959,0.8694,-0.0521]
Shape735 = x3d.Shape()
Appearance736 = x3d.Appearance()
Material737 = x3d.Material()
Material737.USE = "MIN_COLOR"

Appearance736.material = Material737

Shape735.appearance = Appearance736
IndexedFaceSet738 = x3d.IndexedFaceSet()
IndexedFaceSet738.creaseAngle = 0.5
IndexedFaceSet738.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate739 = x3d.Coordinate()
Coordinate739.USE = "points"

IndexedFaceSet738.coord = Coordinate739

Shape735.geometry = IndexedFaceSet738

Transform734.children.append(Shape735)

HAnimSegment733.children.append(Transform734)
Transform740 = x3d.Transform()
Transform740.DEF = "r_hand_adjust"
Transform740.rotation = [-0.09024,0.994,-0.0624,1.216]
Transform740.center = [-0.217,0.811,-0.0338]

HAnimSegment733.children.append(Transform740)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.DEF = "hanim_r_hand_tip"
HAnimSite741.name = "r_hand_tip"
HAnimSite741.translation = [-0.1969,0.6758,-0.0427]
Shape742 = x3d.Shape()
Appearance743 = x3d.Appearance()
Material744 = x3d.Material()
Material744.USE = "SITE_COLOR"

Appearance743.material = Material744

Shape742.appearance = Appearance743
IndexedFaceSet745 = x3d.IndexedFaceSet()
IndexedFaceSet745.creaseAngle = 0.5
IndexedFaceSet745.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate746 = x3d.Coordinate()
Coordinate746.USE = "points"

IndexedFaceSet745.coord = Coordinate746

Shape742.geometry = IndexedFaceSet745

HAnimSite741.children.append(Shape742)

HAnimSegment733.children.append(HAnimSite741)
HAnimSite747 = x3d.HAnimSite()
HAnimSite747.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite747.name = "r_metacarpal_phalanx_2_pt"
HAnimSite747.translation = [-0.1977,0.8169,-0.0177]
Shape748 = x3d.Shape()
Appearance749 = x3d.Appearance()
Material750 = x3d.Material()
Material750.USE = "SITE_COLOR"

Appearance749.material = Material750

Shape748.appearance = Appearance749
IndexedFaceSet751 = x3d.IndexedFaceSet()
IndexedFaceSet751.creaseAngle = 0.5
IndexedFaceSet751.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate752 = x3d.Coordinate()
Coordinate752.USE = "points"

IndexedFaceSet751.coord = Coordinate752

Shape748.geometry = IndexedFaceSet751

HAnimSite747.children.append(Shape748)

HAnimSegment733.children.append(HAnimSite747)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.DEF = "hanim_r_dactylion_pt"
HAnimSite753.name = "r_dactylion_pt"
HAnimSite753.translation = [-0.1941,0.6772,-0.0423]
Shape754 = x3d.Shape()
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.USE = "SITE_COLOR"

Appearance755.material = Material756

Shape754.appearance = Appearance755
IndexedFaceSet757 = x3d.IndexedFaceSet()
IndexedFaceSet757.creaseAngle = 0.5
IndexedFaceSet757.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate758 = x3d.Coordinate()
Coordinate758.USE = "points"

IndexedFaceSet757.coord = Coordinate758

Shape754.geometry = IndexedFaceSet757

HAnimSite753.children.append(Shape754)

HAnimSegment733.children.append(HAnimSite753)
HAnimSite759 = x3d.HAnimSite()
HAnimSite759.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite759.name = "r_ulnar_styloid_pt"
HAnimSite759.translation = [-0.2117,0.8562,-0.0584]
Shape760 = x3d.Shape()
Appearance761 = x3d.Appearance()
Material762 = x3d.Material()
Material762.USE = "SITE_COLOR"

Appearance761.material = Material762

Shape760.appearance = Appearance761
IndexedFaceSet763 = x3d.IndexedFaceSet()
IndexedFaceSet763.creaseAngle = 0.5
IndexedFaceSet763.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate764 = x3d.Coordinate()
Coordinate764.USE = "points"

IndexedFaceSet763.coord = Coordinate764

Shape760.geometry = IndexedFaceSet763

HAnimSite759.children.append(Shape760)

HAnimSegment733.children.append(HAnimSite759)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite765.name = "r_metacarpal_phalanx_5_pt"
HAnimSite765.translation = [-0.1929,0.789,-0.1064]
Shape766 = x3d.Shape()
Appearance767 = x3d.Appearance()
Material768 = x3d.Material()
Material768.USE = "SITE_COLOR"

Appearance767.material = Material768

Shape766.appearance = Appearance767
IndexedFaceSet769 = x3d.IndexedFaceSet()
IndexedFaceSet769.creaseAngle = 0.5
IndexedFaceSet769.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate770 = x3d.Coordinate()
Coordinate770.USE = "points"

IndexedFaceSet769.coord = Coordinate770

Shape766.geometry = IndexedFaceSet769

HAnimSite765.children.append(Shape766)

HAnimSegment733.children.append(HAnimSite765)

HAnimJoint732.children.append(HAnimSegment733)

HAnimJoint699.children.append(HAnimJoint732)

HAnimJoint684.children.append(HAnimJoint699)

HAnimJoint521.children.append(HAnimJoint684)
HAnimJoint771 = x3d.HAnimJoint()
HAnimJoint771.DEF = "hanim_vc7"
HAnimJoint771.name = "vc7"
HAnimJoint771.center = [0.0066,1.5132,-0.0301]
HAnimSegment772 = x3d.HAnimSegment()
HAnimSegment772.DEF = "hanim_c7"
HAnimSegment772.name = "c7"
Transform773 = x3d.Transform()
Transform773.translation = [0.0066,1.5132,-0.0301]
Shape774 = x3d.Shape()
Appearance775 = x3d.Appearance()
Material776 = x3d.Material()
Material776.USE = "SPINAL_COLOR"

Appearance775.material = Material776

Shape774.appearance = Appearance775
IndexedFaceSet777 = x3d.IndexedFaceSet()
IndexedFaceSet777.creaseAngle = 0.5
IndexedFaceSet777.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate778 = x3d.Coordinate()
Coordinate778.USE = "points"

IndexedFaceSet777.coord = Coordinate778

Shape774.geometry = IndexedFaceSet777

Transform773.children.append(Shape774)

HAnimSegment772.children.append(Transform773)

HAnimJoint771.children.append(HAnimSegment772)
HAnimJoint779 = x3d.HAnimJoint()
HAnimJoint779.DEF = "hanim_vc6"
HAnimJoint779.name = "vc6"
HAnimJoint779.center = [0.0066,1.5357,-0.0143]
HAnimSegment780 = x3d.HAnimSegment()
HAnimSegment780.DEF = "hanim_c6"
HAnimSegment780.name = "c6"
Transform781 = x3d.Transform()
Transform781.translation = [0.0066,1.5357,-0.0143]
Shape782 = x3d.Shape()
Appearance783 = x3d.Appearance()
Material784 = x3d.Material()
Material784.USE = "SPINAL_COLOR"

Appearance783.material = Material784

Shape782.appearance = Appearance783
IndexedFaceSet785 = x3d.IndexedFaceSet()
IndexedFaceSet785.creaseAngle = 0.5
IndexedFaceSet785.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate786 = x3d.Coordinate()
Coordinate786.USE = "points"

IndexedFaceSet785.coord = Coordinate786

Shape782.geometry = IndexedFaceSet785

Transform781.children.append(Shape782)

HAnimSegment780.children.append(Transform781)

HAnimJoint779.children.append(HAnimSegment780)
HAnimJoint787 = x3d.HAnimJoint()
HAnimJoint787.DEF = "hanim_vc5"
HAnimJoint787.name = "vc5"
HAnimJoint787.center = [0.0066,1.552,-0.0082]
HAnimSegment788 = x3d.HAnimSegment()
HAnimSegment788.DEF = "hanim_c5"
HAnimSegment788.name = "c5"
Transform789 = x3d.Transform()
Transform789.translation = [0.0066,1.552,-0.0082]
Shape790 = x3d.Shape()
Appearance791 = x3d.Appearance()
Material792 = x3d.Material()
Material792.USE = "SPINAL_COLOR"

Appearance791.material = Material792

Shape790.appearance = Appearance791
IndexedFaceSet793 = x3d.IndexedFaceSet()
IndexedFaceSet793.creaseAngle = 0.5
IndexedFaceSet793.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate794 = x3d.Coordinate()
Coordinate794.USE = "points"

IndexedFaceSet793.coord = Coordinate794

Shape790.geometry = IndexedFaceSet793

Transform789.children.append(Shape790)

HAnimSegment788.children.append(Transform789)

HAnimJoint787.children.append(HAnimSegment788)
HAnimJoint795 = x3d.HAnimJoint()
HAnimJoint795.DEF = "hanim_vc4"
HAnimJoint795.name = "vc4"
HAnimJoint795.center = [0.0066,1.5662,-0.0084]
HAnimSegment796 = x3d.HAnimSegment()
HAnimSegment796.DEF = "hanim_c4"
HAnimSegment796.name = "c4"
Transform797 = x3d.Transform()
Transform797.translation = [0.0066,1.5662,-0.0084]
Shape798 = x3d.Shape()
Appearance799 = x3d.Appearance()
Material800 = x3d.Material()
Material800.USE = "SPINAL_COLOR"

Appearance799.material = Material800

Shape798.appearance = Appearance799
IndexedFaceSet801 = x3d.IndexedFaceSet()
IndexedFaceSet801.creaseAngle = 0.5
IndexedFaceSet801.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate802 = x3d.Coordinate()
Coordinate802.USE = "points"

IndexedFaceSet801.coord = Coordinate802

Shape798.geometry = IndexedFaceSet801

Transform797.children.append(Shape798)

HAnimSegment796.children.append(Transform797)

HAnimJoint795.children.append(HAnimSegment796)
HAnimJoint803 = x3d.HAnimJoint()
HAnimJoint803.DEF = "hanim_vc3"
HAnimJoint803.name = "vc3"
HAnimJoint803.center = [0.0066,1.58,-0.0103]
HAnimSegment804 = x3d.HAnimSegment()
HAnimSegment804.DEF = "hanim_c3"
HAnimSegment804.name = "c3"
Transform805 = x3d.Transform()
Transform805.translation = [0.0066,1.58,-0.0103]
Shape806 = x3d.Shape()
Appearance807 = x3d.Appearance()
Material808 = x3d.Material()
Material808.USE = "SPINAL_COLOR"

Appearance807.material = Material808

Shape806.appearance = Appearance807
IndexedFaceSet809 = x3d.IndexedFaceSet()
IndexedFaceSet809.creaseAngle = 0.5
IndexedFaceSet809.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate810 = x3d.Coordinate()
Coordinate810.USE = "points"

IndexedFaceSet809.coord = Coordinate810

Shape806.geometry = IndexedFaceSet809

Transform805.children.append(Shape806)

HAnimSegment804.children.append(Transform805)

HAnimJoint803.children.append(HAnimSegment804)
HAnimJoint811 = x3d.HAnimJoint()
HAnimJoint811.DEF = "hanim_vc2"
HAnimJoint811.name = "vc2"
HAnimJoint811.center = [0.0066,1.5928,-0.0103]
HAnimSegment812 = x3d.HAnimSegment()
HAnimSegment812.DEF = "hanim_c2"
HAnimSegment812.name = "c2"
Transform813 = x3d.Transform()
Transform813.translation = [0.0066,1.5928,-0.0103]
Shape814 = x3d.Shape()
Appearance815 = x3d.Appearance()
Material816 = x3d.Material()
Material816.USE = "REC_SPINAL_COLOR"

Appearance815.material = Material816

Shape814.appearance = Appearance815
IndexedFaceSet817 = x3d.IndexedFaceSet()
IndexedFaceSet817.creaseAngle = 0.5
IndexedFaceSet817.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate818 = x3d.Coordinate()
Coordinate818.USE = "points"

IndexedFaceSet817.coord = Coordinate818

Shape814.geometry = IndexedFaceSet817

Transform813.children.append(Shape814)

HAnimSegment812.children.append(Transform813)

HAnimJoint811.children.append(HAnimSegment812)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.DEF = "hanim_vc1"
HAnimJoint819.name = "vc1"
HAnimJoint819.center = [0.0066,1.6144,-0.0034]
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.DEF = "hanim_c1"
HAnimSegment820.name = "c1"
Transform821 = x3d.Transform()
Transform821.translation = [0.0066,1.6144,-0.0034]
Shape822 = x3d.Shape()
Appearance823 = x3d.Appearance()
Material824 = x3d.Material()
Material824.USE = "SPINAL_COLOR"

Appearance823.material = Material824

Shape822.appearance = Appearance823
IndexedFaceSet825 = x3d.IndexedFaceSet()
IndexedFaceSet825.creaseAngle = 0.5
IndexedFaceSet825.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate826 = x3d.Coordinate()
Coordinate826.USE = "points"

IndexedFaceSet825.coord = Coordinate826

Shape822.geometry = IndexedFaceSet825

Transform821.children.append(Shape822)

HAnimSegment820.children.append(Transform821)

HAnimJoint819.children.append(HAnimSegment820)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.DEF = "hanim_skullbase"
HAnimJoint827.name = "skullbase"
HAnimJoint827.center = [0.0044,1.6209,0.0236]
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.DEF = "hanim_skull"
HAnimSegment828.name = "skull"
Transform829 = x3d.Transform()
Transform829.translation = [0.0044,1.6209,0.0236]
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance()
Material832 = x3d.Material()
Material832.USE = "MIN_COLOR"

Appearance831.material = Material832

Shape830.appearance = Appearance831
IndexedFaceSet833 = x3d.IndexedFaceSet()
IndexedFaceSet833.creaseAngle = 0.5
IndexedFaceSet833.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate834 = x3d.Coordinate()
Coordinate834.USE = "points"

IndexedFaceSet833.coord = Coordinate834

Shape830.geometry = IndexedFaceSet833

Transform829.children.append(Shape830)

HAnimSegment828.children.append(Transform829)
HAnimSite835 = x3d.HAnimSite()
HAnimSite835.DEF = "hanim_skull_vertex_tip"
HAnimSite835.name = "skull_vertex_tip"
HAnimSite835.translation = [0.005,1.7504,0.0055]
Shape836 = x3d.Shape()
Appearance837 = x3d.Appearance()
Material838 = x3d.Material()
Material838.USE = "SITE_COLOR"

Appearance837.material = Material838

Shape836.appearance = Appearance837
IndexedFaceSet839 = x3d.IndexedFaceSet()
IndexedFaceSet839.creaseAngle = 0.5
IndexedFaceSet839.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate840 = x3d.Coordinate()
Coordinate840.USE = "points"

IndexedFaceSet839.coord = Coordinate840

Shape836.geometry = IndexedFaceSet839

HAnimSite835.children.append(Shape836)

HAnimSegment828.children.append(HAnimSite835)
HAnimSite841 = x3d.HAnimSite()
HAnimSite841.DEF = "hanim_sellion_pt"
HAnimSite841.name = "sellion_pt"
HAnimSite841.translation = [0.0058,1.6316,0.0852]
Shape842 = x3d.Shape()
Appearance843 = x3d.Appearance()
Material844 = x3d.Material()
Material844.USE = "SITE_COLOR"

Appearance843.material = Material844

Shape842.appearance = Appearance843
IndexedFaceSet845 = x3d.IndexedFaceSet()
IndexedFaceSet845.creaseAngle = 0.5
IndexedFaceSet845.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate846 = x3d.Coordinate()
Coordinate846.USE = "points"

IndexedFaceSet845.coord = Coordinate846

Shape842.geometry = IndexedFaceSet845

HAnimSite841.children.append(Shape842)

HAnimSegment828.children.append(HAnimSite841)
HAnimSite847 = x3d.HAnimSite()
HAnimSite847.DEF = "hanim_r_infraorbitale_pt"
HAnimSite847.name = "r_infraorbitale_pt"
HAnimSite847.translation = [-0.0237,1.6171,0.0752]
Shape848 = x3d.Shape()
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.USE = "SITE_COLOR"

Appearance849.material = Material850

Shape848.appearance = Appearance849
IndexedFaceSet851 = x3d.IndexedFaceSet()
IndexedFaceSet851.creaseAngle = 0.5
IndexedFaceSet851.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate852 = x3d.Coordinate()
Coordinate852.USE = "points"

IndexedFaceSet851.coord = Coordinate852

Shape848.geometry = IndexedFaceSet851

HAnimSite847.children.append(Shape848)

HAnimSegment828.children.append(HAnimSite847)
HAnimSite853 = x3d.HAnimSite()
HAnimSite853.DEF = "hanim_l_infraorbitale_pt"
HAnimSite853.name = "l_infraorbitale_pt"
HAnimSite853.translation = [0.0341,1.6171,0.0752]
Shape854 = x3d.Shape()
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.USE = "SITE_COLOR"

Appearance855.material = Material856

Shape854.appearance = Appearance855
IndexedFaceSet857 = x3d.IndexedFaceSet()
IndexedFaceSet857.creaseAngle = 0.5
IndexedFaceSet857.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate858 = x3d.Coordinate()
Coordinate858.USE = "points"

IndexedFaceSet857.coord = Coordinate858

Shape854.geometry = IndexedFaceSet857

HAnimSite853.children.append(Shape854)

HAnimSegment828.children.append(HAnimSite853)
HAnimSite859 = x3d.HAnimSite()
HAnimSite859.DEF = "hanim_supramenton_pt"
HAnimSite859.name = "supramenton_pt"
HAnimSite859.translation = [0.0061,1.541,0.0805]
Shape860 = x3d.Shape()
Appearance861 = x3d.Appearance()
Material862 = x3d.Material()
Material862.USE = "SITE_COLOR"

Appearance861.material = Material862

Shape860.appearance = Appearance861
IndexedFaceSet863 = x3d.IndexedFaceSet()
IndexedFaceSet863.creaseAngle = 0.5
IndexedFaceSet863.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate864 = x3d.Coordinate()
Coordinate864.USE = "points"

IndexedFaceSet863.coord = Coordinate864

Shape860.geometry = IndexedFaceSet863

HAnimSite859.children.append(Shape860)

HAnimSegment828.children.append(HAnimSite859)
HAnimSite865 = x3d.HAnimSite()
HAnimSite865.DEF = "hanim_r_tragion_pt"
HAnimSite865.name = "r_tragion_pt"
HAnimSite865.translation = [-0.0646,1.6347,0.0302]
Shape866 = x3d.Shape()
Appearance867 = x3d.Appearance()
Material868 = x3d.Material()
Material868.USE = "SITE_COLOR"

Appearance867.material = Material868

Shape866.appearance = Appearance867
IndexedFaceSet869 = x3d.IndexedFaceSet()
IndexedFaceSet869.creaseAngle = 0.5
IndexedFaceSet869.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate870 = x3d.Coordinate()
Coordinate870.USE = "points"

IndexedFaceSet869.coord = Coordinate870

Shape866.geometry = IndexedFaceSet869

HAnimSite865.children.append(Shape866)

HAnimSegment828.children.append(HAnimSite865)
HAnimSite871 = x3d.HAnimSite()
HAnimSite871.DEF = "hanim_r_gonion_pt"
HAnimSite871.name = "r_gonion_pt"
HAnimSite871.translation = [-0.052,1.5529,0.0347]
Shape872 = x3d.Shape()
Appearance873 = x3d.Appearance()
Material874 = x3d.Material()
Material874.USE = "SITE_COLOR"

Appearance873.material = Material874

Shape872.appearance = Appearance873
IndexedFaceSet875 = x3d.IndexedFaceSet()
IndexedFaceSet875.creaseAngle = 0.5
IndexedFaceSet875.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate876 = x3d.Coordinate()
Coordinate876.USE = "points"

IndexedFaceSet875.coord = Coordinate876

Shape872.geometry = IndexedFaceSet875

HAnimSite871.children.append(Shape872)

HAnimSegment828.children.append(HAnimSite871)
HAnimSite877 = x3d.HAnimSite()
HAnimSite877.DEF = "hanim_l_tragion_pt"
HAnimSite877.name = "l_tragion_pt"
HAnimSite877.translation = [0.0739,1.6348,0.0282]
Shape878 = x3d.Shape()
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.USE = "SITE_COLOR"

Appearance879.material = Material880

Shape878.appearance = Appearance879
IndexedFaceSet881 = x3d.IndexedFaceSet()
IndexedFaceSet881.creaseAngle = 0.5
IndexedFaceSet881.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate882 = x3d.Coordinate()
Coordinate882.USE = "points"

IndexedFaceSet881.coord = Coordinate882

Shape878.geometry = IndexedFaceSet881

HAnimSite877.children.append(Shape878)

HAnimSegment828.children.append(HAnimSite877)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.DEF = "hanim_l_gonion_pt"
HAnimSite883.name = "l_gonion_pt"
HAnimSite883.translation = [0.0631,1.553,0.033]
Shape884 = x3d.Shape()
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.USE = "SITE_COLOR"

Appearance885.material = Material886

Shape884.appearance = Appearance885
IndexedFaceSet887 = x3d.IndexedFaceSet()
IndexedFaceSet887.creaseAngle = 0.5
IndexedFaceSet887.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate888 = x3d.Coordinate()
Coordinate888.USE = "points"

IndexedFaceSet887.coord = Coordinate888

Shape884.geometry = IndexedFaceSet887

HAnimSite883.children.append(Shape884)

HAnimSegment828.children.append(HAnimSite883)
HAnimSite889 = x3d.HAnimSite()
HAnimSite889.DEF = "hanim_nuchale_pt"
HAnimSite889.name = "nuchale_pt"
HAnimSite889.translation = [0.0039,1.5972,-0.0796]
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance()
Material892 = x3d.Material()
Material892.USE = "SITE_COLOR"

Appearance891.material = Material892

Shape890.appearance = Appearance891
IndexedFaceSet893 = x3d.IndexedFaceSet()
IndexedFaceSet893.creaseAngle = 0.5
IndexedFaceSet893.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate894 = x3d.Coordinate()
Coordinate894.USE = "points"

IndexedFaceSet893.coord = Coordinate894

Shape890.geometry = IndexedFaceSet893

HAnimSite889.children.append(Shape890)

HAnimSegment828.children.append(HAnimSite889)

HAnimJoint827.children.append(HAnimSegment828)

HAnimJoint819.children.append(HAnimJoint827)

HAnimJoint811.children.append(HAnimJoint819)

HAnimJoint803.children.append(HAnimJoint811)

HAnimJoint795.children.append(HAnimJoint803)

HAnimJoint787.children.append(HAnimJoint795)

HAnimJoint779.children.append(HAnimJoint787)

HAnimJoint771.children.append(HAnimJoint779)

HAnimJoint521.children.append(HAnimJoint771)

HAnimJoint513.children.append(HAnimJoint521)

HAnimJoint505.children.append(HAnimJoint513)

HAnimJoint497.children.append(HAnimJoint505)

HAnimJoint489.children.append(HAnimJoint497)

HAnimJoint481.children.append(HAnimJoint489)

HAnimJoint473.children.append(HAnimJoint481)

HAnimJoint465.children.append(HAnimJoint473)

HAnimJoint457.children.append(HAnimJoint465)

HAnimJoint449.children.append(HAnimJoint457)

HAnimJoint441.children.append(HAnimJoint449)

HAnimJoint433.children.append(HAnimJoint441)

HAnimJoint425.children.append(HAnimJoint433)

HAnimJoint417.children.append(HAnimJoint425)

HAnimJoint409.children.append(HAnimJoint417)

HAnimJoint401.children.append(HAnimJoint409)

HAnimJoint393.children.append(HAnimJoint401)

HAnimJoint98.children.append(HAnimJoint393)

HAnimHumanoid93.skeleton.append(HAnimJoint98)
HAnimJoint895 = x3d.HAnimJoint()
HAnimJoint895.USE = "hanim_humanoid_root"

HAnimHumanoid93.joints.append(HAnimJoint895)
HAnimJoint896 = x3d.HAnimJoint()
HAnimJoint896.USE = "hanim_sacroiliac"

HAnimHumanoid93.joints.append(HAnimJoint896)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.USE = "hanim_vl1"

HAnimHumanoid93.joints.append(HAnimJoint897)
HAnimJoint898 = x3d.HAnimJoint()
HAnimJoint898.USE = "hanim_vc4"

HAnimHumanoid93.joints.append(HAnimJoint898)
HAnimJoint899 = x3d.HAnimJoint()
HAnimJoint899.USE = "hanim_skullbase"

HAnimHumanoid93.joints.append(HAnimJoint899)
HAnimJoint900 = x3d.HAnimJoint()
HAnimJoint900.USE = "hanim_vl5"

HAnimHumanoid93.joints.append(HAnimJoint900)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.USE = "hanim_vl4"

HAnimHumanoid93.joints.append(HAnimJoint901)
HAnimJoint902 = x3d.HAnimJoint()
HAnimJoint902.USE = "hanim_vl3"

HAnimHumanoid93.joints.append(HAnimJoint902)
HAnimJoint903 = x3d.HAnimJoint()
HAnimJoint903.USE = "hanim_vl2"

HAnimHumanoid93.joints.append(HAnimJoint903)
HAnimJoint904 = x3d.HAnimJoint()
HAnimJoint904.USE = "hanim_vt12"

HAnimHumanoid93.joints.append(HAnimJoint904)
HAnimJoint905 = x3d.HAnimJoint()
HAnimJoint905.USE = "hanim_vt11"

HAnimHumanoid93.joints.append(HAnimJoint905)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.USE = "hanim_vt10"

HAnimHumanoid93.joints.append(HAnimJoint906)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.USE = "hanim_vt9"

HAnimHumanoid93.joints.append(HAnimJoint907)
HAnimJoint908 = x3d.HAnimJoint()
HAnimJoint908.USE = "hanim_vt8"

HAnimHumanoid93.joints.append(HAnimJoint908)
HAnimJoint909 = x3d.HAnimJoint()
HAnimJoint909.USE = "hanim_vt7"

HAnimHumanoid93.joints.append(HAnimJoint909)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.USE = "hanim_vt6"

HAnimHumanoid93.joints.append(HAnimJoint910)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.USE = "hanim_vt5"

HAnimHumanoid93.joints.append(HAnimJoint911)
HAnimJoint912 = x3d.HAnimJoint()
HAnimJoint912.USE = "hanim_vt4"

HAnimHumanoid93.joints.append(HAnimJoint912)
HAnimJoint913 = x3d.HAnimJoint()
HAnimJoint913.USE = "hanim_vt3"

HAnimHumanoid93.joints.append(HAnimJoint913)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.USE = "hanim_vt2"

HAnimHumanoid93.joints.append(HAnimJoint914)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.USE = "hanim_vt1"

HAnimHumanoid93.joints.append(HAnimJoint915)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.USE = "hanim_vc7"

HAnimHumanoid93.joints.append(HAnimJoint916)
HAnimJoint917 = x3d.HAnimJoint()
HAnimJoint917.USE = "hanim_vc6"

HAnimHumanoid93.joints.append(HAnimJoint917)
HAnimJoint918 = x3d.HAnimJoint()
HAnimJoint918.USE = "hanim_vc5"

HAnimHumanoid93.joints.append(HAnimJoint918)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.USE = "hanim_vc3"

HAnimHumanoid93.joints.append(HAnimJoint919)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.USE = "hanim_vc2"

HAnimHumanoid93.joints.append(HAnimJoint920)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.USE = "hanim_vc1"

HAnimHumanoid93.joints.append(HAnimJoint921)
HAnimJoint922 = x3d.HAnimJoint()
HAnimJoint922.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint922)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid93.joints.append(HAnimJoint923)
HAnimJoint924 = x3d.HAnimJoint()
HAnimJoint924.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint924)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid93.joints.append(HAnimJoint925)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid93.joints.append(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.USE = "hanim_l_elbow"

HAnimHumanoid93.joints.append(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.USE = "hanim_r_elbow"

HAnimHumanoid93.joints.append(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.USE = "hanim_l_hip"

HAnimHumanoid93.joints.append(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.USE = "hanim_r_hip"

HAnimHumanoid93.joints.append(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.USE = "hanim_l_knee"

HAnimHumanoid93.joints.append(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.USE = "hanim_r_knee"

HAnimHumanoid93.joints.append(HAnimJoint932)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid93.joints.append(HAnimJoint933)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint934)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint935)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint936)
HAnimJoint937 = x3d.HAnimJoint()
HAnimJoint937.USE = "hanim_l_radiocarpal"

HAnimHumanoid93.joints.append(HAnimJoint937)
HAnimJoint938 = x3d.HAnimJoint()
HAnimJoint938.USE = "hanim_r_radiocarpal"

HAnimHumanoid93.joints.append(HAnimJoint938)
HAnimJoint939 = x3d.HAnimJoint()
HAnimJoint939.USE = "hanim_l_shoulder"

HAnimHumanoid93.joints.append(HAnimJoint939)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.USE = "hanim_r_shoulder"

HAnimHumanoid93.joints.append(HAnimJoint940)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.USE = "hanim_l_talocrural"

HAnimHumanoid93.joints.append(HAnimJoint941)
HAnimJoint942 = x3d.HAnimJoint()
HAnimJoint942.USE = "hanim_r_talocrural"

HAnimHumanoid93.joints.append(HAnimJoint942)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid93.joints.append(HAnimJoint943)
HAnimJoint944 = x3d.HAnimJoint()
HAnimJoint944.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid93.joints.append(HAnimJoint944)
HAnimSegment945 = x3d.HAnimSegment()
HAnimSegment945.USE = "hanim_pelvis"

HAnimHumanoid93.segments.append(HAnimSegment945)
HAnimSegment946 = x3d.HAnimSegment()
HAnimSegment946.USE = "hanim_c7"

HAnimHumanoid93.segments.append(HAnimSegment946)
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.USE = "hanim_c4"

HAnimHumanoid93.segments.append(HAnimSegment947)
HAnimSegment948 = x3d.HAnimSegment()
HAnimSegment948.USE = "hanim_skull"

HAnimHumanoid93.segments.append(HAnimSegment948)
HAnimSegment949 = x3d.HAnimSegment()
HAnimSegment949.USE = "hanim_sacrum"

HAnimHumanoid93.segments.append(HAnimSegment949)
HAnimSegment950 = x3d.HAnimSegment()
HAnimSegment950.USE = "hanim_l5"

HAnimHumanoid93.segments.append(HAnimSegment950)
HAnimSegment951 = x3d.HAnimSegment()
HAnimSegment951.USE = "hanim_l4"

HAnimHumanoid93.segments.append(HAnimSegment951)
HAnimSegment952 = x3d.HAnimSegment()
HAnimSegment952.USE = "hanim_l3"

HAnimHumanoid93.segments.append(HAnimSegment952)
HAnimSegment953 = x3d.HAnimSegment()
HAnimSegment953.USE = "hanim_l2"

HAnimHumanoid93.segments.append(HAnimSegment953)
HAnimSegment954 = x3d.HAnimSegment()
HAnimSegment954.USE = "hanim_l1"

HAnimHumanoid93.segments.append(HAnimSegment954)
HAnimSegment955 = x3d.HAnimSegment()
HAnimSegment955.USE = "hanim_t12"

HAnimHumanoid93.segments.append(HAnimSegment955)
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.USE = "hanim_t11"

HAnimHumanoid93.segments.append(HAnimSegment956)
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.USE = "hanim_t10"

HAnimHumanoid93.segments.append(HAnimSegment957)
HAnimSegment958 = x3d.HAnimSegment()
HAnimSegment958.USE = "hanim_t9"

HAnimHumanoid93.segments.append(HAnimSegment958)
HAnimSegment959 = x3d.HAnimSegment()
HAnimSegment959.USE = "hanim_t8"

HAnimHumanoid93.segments.append(HAnimSegment959)
HAnimSegment960 = x3d.HAnimSegment()
HAnimSegment960.USE = "hanim_t7"

HAnimHumanoid93.segments.append(HAnimSegment960)
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.USE = "hanim_t6"

HAnimHumanoid93.segments.append(HAnimSegment961)
HAnimSegment962 = x3d.HAnimSegment()
HAnimSegment962.USE = "hanim_t5"

HAnimHumanoid93.segments.append(HAnimSegment962)
HAnimSegment963 = x3d.HAnimSegment()
HAnimSegment963.USE = "hanim_t4"

HAnimHumanoid93.segments.append(HAnimSegment963)
HAnimSegment964 = x3d.HAnimSegment()
HAnimSegment964.USE = "hanim_t3"

HAnimHumanoid93.segments.append(HAnimSegment964)
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.USE = "hanim_t2"

HAnimHumanoid93.segments.append(HAnimSegment965)
HAnimSegment966 = x3d.HAnimSegment()
HAnimSegment966.USE = "hanim_t1"

HAnimHumanoid93.segments.append(HAnimSegment966)
HAnimSegment967 = x3d.HAnimSegment()
HAnimSegment967.USE = "hanim_c6"

HAnimHumanoid93.segments.append(HAnimSegment967)
HAnimSegment968 = x3d.HAnimSegment()
HAnimSegment968.USE = "hanim_c5"

HAnimHumanoid93.segments.append(HAnimSegment968)
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.USE = "hanim_c3"

HAnimHumanoid93.segments.append(HAnimSegment969)
HAnimSegment970 = x3d.HAnimSegment()
HAnimSegment970.USE = "hanim_c2"

HAnimHumanoid93.segments.append(HAnimSegment970)
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.USE = "hanim_c1"

HAnimHumanoid93.segments.append(HAnimSegment971)
HAnimSegment972 = x3d.HAnimSegment()
HAnimSegment972.USE = "hanim_l_calf"

HAnimHumanoid93.segments.append(HAnimSegment972)
HAnimSegment973 = x3d.HAnimSegment()
HAnimSegment973.USE = "hanim_r_calf"

HAnimHumanoid93.segments.append(HAnimSegment973)
HAnimSegment974 = x3d.HAnimSegment()
HAnimSegment974.USE = "hanim_l_carpal"

HAnimHumanoid93.segments.append(HAnimSegment974)
HAnimSegment975 = x3d.HAnimSegment()
HAnimSegment975.USE = "hanim_r_carpal"

HAnimHumanoid93.segments.append(HAnimSegment975)
HAnimSegment976 = x3d.HAnimSegment()
HAnimSegment976.USE = "hanim_l_carpal_distal_phalanx_1"

HAnimHumanoid93.segments.append(HAnimSegment976)
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.USE = "hanim_l_carpal_distal_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment977)
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment978)
HAnimSegment979 = x3d.HAnimSegment()
HAnimSegment979.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid93.segments.append(HAnimSegment979)
HAnimSegment980 = x3d.HAnimSegment()
HAnimSegment980.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment980)
HAnimSegment981 = x3d.HAnimSegment()
HAnimSegment981.USE = "hanim_l_forearm"

HAnimHumanoid93.segments.append(HAnimSegment981)
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.USE = "hanim_r_forearm"

HAnimHumanoid93.segments.append(HAnimSegment982)
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.USE = "hanim_l_metacarpal_1"

HAnimHumanoid93.segments.append(HAnimSegment983)
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.USE = "hanim_l_metacarpal_2"

HAnimHumanoid93.segments.append(HAnimSegment984)
HAnimSegment985 = x3d.HAnimSegment()
HAnimSegment985.USE = "hanim_l_metatarsal_2"

HAnimHumanoid93.segments.append(HAnimSegment985)
HAnimSegment986 = x3d.HAnimSegment()
HAnimSegment986.USE = "hanim_l_talus"

HAnimHumanoid93.segments.append(HAnimSegment986)
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.USE = "hanim_r_talus"

HAnimHumanoid93.segments.append(HAnimSegment987)
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.USE = "hanim_l_tarsal_distal_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment988)
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment989)
HAnimSegment990 = x3d.HAnimSegment()
HAnimSegment990.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid93.segments.append(HAnimSegment990)
HAnimSegment991 = x3d.HAnimSegment()
HAnimSegment991.USE = "hanim_l_thigh"

HAnimHumanoid93.segments.append(HAnimSegment991)
HAnimSegment992 = x3d.HAnimSegment()
HAnimSegment992.USE = "hanim_r_thigh"

HAnimHumanoid93.segments.append(HAnimSegment992)
HAnimSegment993 = x3d.HAnimSegment()
HAnimSegment993.USE = "hanim_l_upperarm"

HAnimHumanoid93.segments.append(HAnimSegment993)
HAnimSegment994 = x3d.HAnimSegment()
HAnimSegment994.USE = "hanim_r_upperarm"

HAnimHumanoid93.segments.append(HAnimSegment994)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.USE = "hanim_crotch_pt"

HAnimHumanoid93.sites.append(HAnimSite995)
HAnimSite996 = x3d.HAnimSite()
HAnimSite996.USE = "hanim_skull_vertex_tip"

HAnimHumanoid93.sites.append(HAnimSite996)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.USE = "hanim_sellion_pt"

HAnimHumanoid93.sites.append(HAnimSite997)
HAnimSite998 = x3d.HAnimSite()
HAnimSite998.USE = "hanim_supramenton_pt"

HAnimHumanoid93.sites.append(HAnimSite998)
HAnimSite999 = x3d.HAnimSite()
HAnimSite999.USE = "hanim_nuchale_pt"

HAnimHumanoid93.sites.append(HAnimSite999)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.USE = "hanim_r_asis_pt"

HAnimHumanoid93.sites.append(HAnimSite1000)
HAnimSite1001 = x3d.HAnimSite()
HAnimSite1001.USE = "hanim_l_asis_pt"

HAnimHumanoid93.sites.append(HAnimSite1001)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid93.sites.append(HAnimSite1002)
HAnimSite1003 = x3d.HAnimSite()
HAnimSite1003.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid93.sites.append(HAnimSite1003)
HAnimSite1004 = x3d.HAnimSite()
HAnimSite1004.USE = "hanim_l_carpal_distal_phalanx_1_tip"

HAnimHumanoid93.sites.append(HAnimSite1004)
HAnimSite1005 = x3d.HAnimSite()
HAnimSite1005.USE = "hanim_l_carpal_distal_phalanx_2_tip"

HAnimHumanoid93.sites.append(HAnimSite1005)
HAnimSite1006 = x3d.HAnimSite()
HAnimSite1006.USE = "hanim_l_dactylion_pt"

HAnimHumanoid93.sites.append(HAnimSite1006)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.USE = "hanim_r_dactylion_pt"

HAnimHumanoid93.sites.append(HAnimSite1007)
HAnimSite1008 = x3d.HAnimSite()
HAnimSite1008.USE = "hanim_l_femoral_lateral_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1008)
HAnimSite1009 = x3d.HAnimSite()
HAnimSite1009.USE = "hanim_r_femoral_lateral_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1009)
HAnimSite1010 = x3d.HAnimSite()
HAnimSite1010.USE = "hanim_l_femoral_medial_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1010)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.USE = "hanim_r_femoral_medial_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1011)
HAnimSite1012 = x3d.HAnimSite()
HAnimSite1012.USE = "hanim_l_forefoot_tip"

HAnimHumanoid93.sites.append(HAnimSite1012)
HAnimSite1013 = x3d.HAnimSite()
HAnimSite1013.USE = "hanim_r_gonion_pt"

HAnimHumanoid93.sites.append(HAnimSite1013)
HAnimSite1014 = x3d.HAnimSite()
HAnimSite1014.USE = "hanim_l_gonion_pt"

HAnimHumanoid93.sites.append(HAnimSite1014)
HAnimSite1015 = x3d.HAnimSite()
HAnimSite1015.USE = "hanim_l_hand_tip"

HAnimHumanoid93.sites.append(HAnimSite1015)
HAnimSite1016 = x3d.HAnimSite()
HAnimSite1016.USE = "hanim_r_hand_tip"

HAnimHumanoid93.sites.append(HAnimSite1016)
HAnimSite1017 = x3d.HAnimSite()
HAnimSite1017.USE = "hanim_l_humeral_lateral_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1017)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.USE = "hanim_r_humeral_lateral_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1018)
HAnimSite1019 = x3d.HAnimSite()
HAnimSite1019.USE = "hanim_l_humeral_medial_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1019)
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.USE = "hanim_r_humeral_medial_epicondyle_pt"

HAnimHumanoid93.sites.append(HAnimSite1020)
HAnimSite1021 = x3d.HAnimSite()
HAnimSite1021.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid93.sites.append(HAnimSite1021)
HAnimSite1022 = x3d.HAnimSite()
HAnimSite1022.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid93.sites.append(HAnimSite1022)
HAnimSite1023 = x3d.HAnimSite()
HAnimSite1023.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid93.sites.append(HAnimSite1023)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid93.sites.append(HAnimSite1024)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid93.sites.append(HAnimSite1025)
HAnimSite1026 = x3d.HAnimSite()
HAnimSite1026.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid93.sites.append(HAnimSite1026)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid93.sites.append(HAnimSite1027)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid93.sites.append(HAnimSite1028)
HAnimSite1029 = x3d.HAnimSite()
HAnimSite1029.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid93.sites.append(HAnimSite1029)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid93.sites.append(HAnimSite1030)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid93.sites.append(HAnimSite1031)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid93.sites.append(HAnimSite1032)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid93.sites.append(HAnimSite1033)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid93.sites.append(HAnimSite1034)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid93.sites.append(HAnimSite1035)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid93.sites.append(HAnimSite1036)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid93.sites.append(HAnimSite1037)
HAnimSite1038 = x3d.HAnimSite()
HAnimSite1038.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid93.sites.append(HAnimSite1038)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.USE = "hanim_l_middistal_tip"

HAnimHumanoid93.sites.append(HAnimSite1039)
HAnimSite1040 = x3d.HAnimSite()
HAnimSite1040.USE = "hanim_r_middistal_tip"

HAnimHumanoid93.sites.append(HAnimSite1040)
HAnimSite1041 = x3d.HAnimSite()
HAnimSite1041.USE = "hanim_l_olecranon_pt"

HAnimHumanoid93.sites.append(HAnimSite1041)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.USE = "hanim_r_olecranon_pt"

HAnimHumanoid93.sites.append(HAnimSite1042)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.USE = "hanim_r_psis_pt"

HAnimHumanoid93.sites.append(HAnimSite1043)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.USE = "hanim_l_psis_pt"

HAnimHumanoid93.sites.append(HAnimSite1044)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid93.sites.append(HAnimSite1045)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid93.sites.append(HAnimSite1046)
HAnimSite1047 = x3d.HAnimSite()
HAnimSite1047.USE = "hanim_l_radiale_pt"

HAnimHumanoid93.sites.append(HAnimSite1047)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.USE = "hanim_r_radiale_pt"

HAnimHumanoid93.sites.append(HAnimSite1048)
HAnimSite1049 = x3d.HAnimSite()
HAnimSite1049.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid93.sites.append(HAnimSite1049)
HAnimSite1050 = x3d.HAnimSite()
HAnimSite1050.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid93.sites.append(HAnimSite1050)
HAnimSite1051 = x3d.HAnimSite()
HAnimSite1051.USE = "hanim_l_tarsal_distal_phalanx_2_pt"

HAnimHumanoid93.sites.append(HAnimSite1051)
HAnimSite1052 = x3d.HAnimSite()
HAnimSite1052.USE = "hanim_r_tarsal_distal_phalanx_2_pt"

HAnimHumanoid93.sites.append(HAnimSite1052)
HAnimSite1053 = x3d.HAnimSite()
HAnimSite1053.USE = "hanim_r_tragion_pt"

HAnimHumanoid93.sites.append(HAnimSite1053)
HAnimSite1054 = x3d.HAnimSite()
HAnimSite1054.USE = "hanim_l_tragion_pt"

HAnimHumanoid93.sites.append(HAnimSite1054)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid93.sites.append(HAnimSite1055)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid93.sites.append(HAnimSite1056)
HAnimSite1057 = x3d.HAnimSite()
HAnimSite1057.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid93.sites.append(HAnimSite1057)
HAnimSite1058 = x3d.HAnimSite()
HAnimSite1058.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid93.sites.append(HAnimSite1058)
HAnimSite1059 = x3d.HAnimSite()
HAnimSite1059.DEF = "hanim_DiamondManLOA2_view"
HAnimSite1059.name = "DiamondManLOA2_view"
Viewpoint1060 = x3d.Viewpoint()
Viewpoint1060.DEF = "FrontView"
Viewpoint1060.description = "Front View"
Viewpoint1060.position = [0.35,0.854,2.57665]

HAnimSite1059.children.append(Viewpoint1060)
Viewpoint1061 = x3d.Viewpoint()
Viewpoint1061.DEF = "SideView"
Viewpoint1061.description = "Side View"
Viewpoint1061.position = [2,0.854,0]
Viewpoint1061.orientation = [0,1,0,1.57079]

HAnimSite1059.children.append(Viewpoint1061)
Viewpoint1062 = x3d.Viewpoint()
Viewpoint1062.DEF = "TopView"
Viewpoint1062.description = "Top View"
Viewpoint1062.position = [0,3.4495,0]
Viewpoint1062.orientation = [1,0,0,-1.57079]

HAnimSite1059.children.append(Viewpoint1062)
Viewpoint1063 = x3d.Viewpoint()
Viewpoint1063.DEF = "RootView"
Viewpoint1063.description = "Humanoid Root View"
Viewpoint1063.position = [0,0.824,0.277]

HAnimSite1059.children.append(Viewpoint1063)
Viewpoint1064 = x3d.Viewpoint()
Viewpoint1064.DEF = "InclinedView"
Viewpoint1064.description = "Inclined View"
Viewpoint1064.position = [1.62,1.05,2.06]
Viewpoint1064.orientation = [-0.113,0.993,0.0347,0.671]

HAnimSite1059.children.append(Viewpoint1064)

HAnimHumanoid93.viewpoints.append(HAnimSite1059)

Scene16.children.append(HAnimHumanoid93)

X3D0.Scene = Scene16
f = open("../data/DiamondManLOA2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DiamondManLOA2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DiamondManLOA2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

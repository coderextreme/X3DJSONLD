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
meta3.content = "HAnimModelHandLeft.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Left hand, using high-fidelity definitions for HAnim version 2.0"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "26 January 2015"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "23 December 2021"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "TODO"
meta8.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "Image"
meta9.content = "HAnimModelHandRightSegmentVisualizationError.png"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "error"
meta10.content = "not yet to scale, also relatively flat"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "warning"
meta11.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "info"
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "subject"
meta19.content = "X3D HAnim humanoid animation"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "TODO"
meta20.content = "Integrate and confirm Segment/Joint names, Viewpoints."

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "identifier"
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "generator"
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "license"
meta23.content = "../license.html"

head1.children.append(meta23)

X3D0.head = head1
Scene24 = x3d.Scene()
WorldInfo25 = x3d.WorldInfo()
WorldInfo25.title = "HAnimModelHandLeft.x3d"

Scene24.children.append(WorldInfo25)
HAnimHumanoid26 = x3d.HAnimHumanoid(DEF="hanim_Hand_Left")
HAnimHumanoid26.name = "Hand_Left"
HAnimHumanoid26.loa = 4
HAnimHumanoid26.version = "2.0"
HAnimHumanoid26.children.append(x3d.Comment("""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""))
MetadataSet27 = x3d.MetadataSet()
MetadataSet27.name = "HAnimHumanoid.info"
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "authorName"
MetadataString28.value = ["Kwan-Hee YOO, Don Brutzman and Joe Williams"]

if MetadataSet27.value is None:
    MetadataSet27.value = []
MetadataSet27.value.append(MetadataString28)

HAnimHumanoid26.metadata = MetadataSet27
HAnimJoint29 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint29.name = "humanoid_root"
HAnimJoint29.ulimit = [0,0,0]
HAnimJoint29.llimit = [0,0,0]
HAnimJoint29.children.append(x3d.Comment("""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model"""))
HAnimJoint30 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint30.name = "l_radiocarpal"
HAnimJoint30.description = "connection joint of hand to leg above"
HAnimJoint30.ulimit = [0,0,0]
HAnimJoint30.llimit = [0,0,0]
HAnimSegment31 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment31.name = "l_carpal"
Transform32 = x3d.Transform()
Shape33 = x3d.Shape(DEF="HAnimJointShape")
Sphere34 = x3d.Sphere()
Sphere34.radius = 0.025

Shape33.geometry = Sphere34
Appearance35 = x3d.Appearance(DEF="HAnimJointAppearanceBlue")
Material36 = x3d.Material()
Material36.diffuseColor = [0,0,1]

Appearance35.material = Material36

Shape33.appearance = Appearance35

Transform32.children.append(Shape33)

HAnimSegment31.children.append(Transform32)
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.emissiveColor = [1,1,1]

Appearance38.material = Material39

Shape37.appearance = Appearance38
IndexedLineSet40 = x3d.IndexedLineSet(DEF="RCToMC12")
IndexedLineSet40.coordIndex = [0,1]
Coordinate41 = x3d.Coordinate()
Coordinate41.point = [(0, 0, 0),(0.1, 0.1, 0)]

IndexedLineSet40.coord = Coordinate41

Shape37.geometry = IndexedLineSet40

HAnimSegment31.children.append(Shape37)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.emissiveColor = [1,1,1]

Appearance43.material = Material44

Shape42.appearance = Appearance43
IndexedLineSet45 = x3d.IndexedLineSet(DEF="RCToMC3")
IndexedLineSet45.coordIndex = [0,1]
Coordinate46 = x3d.Coordinate()
Coordinate46.point = [(0, 0, 0),(0, 0.07, 0)]

IndexedLineSet45.coord = Coordinate46

Shape42.geometry = IndexedLineSet45

HAnimSegment31.children.append(Shape42)
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.emissiveColor = [1,1,1]

Appearance48.material = Material49

Shape47.appearance = Appearance48
IndexedLineSet50 = x3d.IndexedLineSet(DEF="RCToMC45")
IndexedLineSet50.coordIndex = [0,1]
Coordinate51 = x3d.Coordinate()
Coordinate51.point = [(0, 0, 0),(-0.1, 0.1, 0)]

IndexedLineSet50.coord = Coordinate51

Shape47.geometry = IndexedLineSet50

HAnimSegment31.children.append(Shape47)

HAnimJoint30.children.append(HAnimSegment31)
HAnimJoint30.children.append(x3d.Comment("""MC1"""))
HAnimJoint52 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint52.name = "l_midcarpal_1"
HAnimJoint52.center = [0.14,0.09,0]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimSegment53 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment53.name = "l_trapezium"
Transform54 = x3d.Transform()
Transform54.translation = [0.14,0.09,0]
Shape55 = x3d.Shape(DEF="HAnimNewJointShape")
Sphere56 = x3d.Sphere()
Sphere56.radius = 0.025

Shape55.geometry = Sphere56
Appearance57 = x3d.Appearance(DEF="HAnimJointAppearanceRed")
Material58 = x3d.Material()
Material58.diffuseColor = [1,0,0]

Appearance57.material = Material58

Shape55.appearance = Appearance57

Transform54.children.append(Shape55)

HAnimSegment53.children.append(Transform54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.emissiveColor = [1,1,1]

Appearance60.material = Material61

Shape59.appearance = Appearance60
IndexedLineSet62 = x3d.IndexedLineSet(DEF="MC12toCMC1")
IndexedLineSet62.coordIndex = [0,1]
Coordinate63 = x3d.Coordinate()
Coordinate63.point = [(0.1, 0.1, 0),(0.2, 0.15, 0)]

IndexedLineSet62.coord = Coordinate63

Shape59.geometry = IndexedLineSet62

HAnimSegment53.children.append(Shape59)
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.emissiveColor = [1,1,1]

Appearance65.material = Material66

Shape64.appearance = Appearance65
IndexedLineSet67 = x3d.IndexedLineSet(DEF="MC1toCMC1")
IndexedLineSet67.coordIndex = [0,1]
Coordinate68 = x3d.Coordinate()
Coordinate68.point = [(0.1, 0.1, 0),(0.1, 0.2, 0)]

IndexedLineSet67.coord = Coordinate68

Shape64.geometry = IndexedLineSet67

HAnimSegment53.children.append(Shape64)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint52.children.append(x3d.Comment("""thumb finger"""))
HAnimJoint69 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint69.name = "l_carpometacarpal_1"
HAnimJoint69.center = [0.2,0.15,0]
HAnimJoint69.ulimit = [0,0,0]
HAnimJoint69.llimit = [0,0,0]
HAnimSegment70 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment70.name = "l_metacarpal_1"
Transform71 = x3d.Transform()
Transform71.translation = [0.2,0.15,0]
Shape72 = x3d.Shape(USE="HAnimJointShape")

Transform71.children.append(Shape72)

HAnimSegment70.children.append(Transform71)
Shape73 = x3d.Shape()
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.emissiveColor = [1,1,1]

Appearance74.material = Material75

Shape73.appearance = Appearance74
IndexedLineSet76 = x3d.IndexedLineSet(DEF="CMC1toMCP1")
IndexedLineSet76.coordIndex = [0,1]
Coordinate77 = x3d.Coordinate()
Coordinate77.point = [(0.2, 0.15, 0),(0.3, 0.3, 0)]

IndexedLineSet76.coord = Coordinate77

Shape73.geometry = IndexedLineSet76

HAnimSegment70.children.append(Shape73)

HAnimJoint69.children.append(HAnimSegment70)
HAnimJoint78 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint78.name = "l_metacarpophalangeal_1"
HAnimJoint78.center = [0.3,0.3,0]
HAnimJoint78.ulimit = [0,0,0]
HAnimJoint78.llimit = [0,0,0]
HAnimSegment79 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment79.name = "l_carpal_proximal_phalanx_1"
Transform80 = x3d.Transform()
Transform80.translation = [0.3,0.3,0]
Shape81 = x3d.Shape(USE="HAnimJointShape")

Transform80.children.append(Shape81)

HAnimSegment79.children.append(Transform80)
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material()
Material84.emissiveColor = [1,1,1]

Appearance83.material = Material84

Shape82.appearance = Appearance83
IndexedLineSet85 = x3d.IndexedLineSet(DEF="MCP11toIP1")
IndexedLineSet85.coordIndex = [0,1]
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0.3, 0.3, 0),(0.35, 0.4, 0)]

IndexedLineSet85.coord = Coordinate86

Shape82.geometry = IndexedLineSet85

HAnimSegment79.children.append(Shape82)

HAnimJoint78.children.append(HAnimSegment79)
HAnimJoint87 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint87.name = "l_carpal_interphalangeal_1"
HAnimJoint87.center = [0.35,0.4,0]
HAnimJoint87.ulimit = [0,0,0]
HAnimJoint87.llimit = [0,0,0]
HAnimSegment88 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_1")
HAnimSegment88.name = "l_carpal_distal_phalanx_1"
Transform89 = x3d.Transform()
Transform89.translation = [0.35,0.4,0]
Shape90 = x3d.Shape(USE="HAnimJointShape")

Transform89.children.append(Shape90)

HAnimSegment88.children.append(Transform89)
Shape91 = x3d.Shape()
Appearance92 = x3d.Appearance()
Material93 = x3d.Material()
Material93.emissiveColor = [1,1,1]

Appearance92.material = Material93

Shape91.appearance = Appearance92
IndexedLineSet94 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_interphalangeal_1")
IndexedLineSet94.coordIndex = [0,1]
Coordinate95 = x3d.Coordinate()
Coordinate95.point = [(0.35, 0.4, 0),(0.36, 0.45, 0)]

IndexedLineSet94.coord = Coordinate95

Shape91.geometry = IndexedLineSet94

HAnimSegment88.children.append(Shape91)

HAnimJoint87.children.append(HAnimSegment88)

HAnimJoint78.children.append(HAnimJoint87)

HAnimJoint69.children.append(HAnimJoint78)

HAnimJoint52.children.append(HAnimJoint69)

HAnimJoint30.children.append(HAnimJoint52)
HAnimJoint30.children.append(x3d.Comment("""MC2"""))
HAnimJoint96 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint96.name = "l_midcarpal_2"
HAnimJoint96.center = [0.07,0.07,0]
HAnimJoint96.ulimit = [0,0,0]
HAnimJoint96.llimit = [0,0,0]
HAnimSegment97 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment97.name = "l_trapezoid"
Transform98 = x3d.Transform()
Transform98.translation = [0.07,0.07,0]
Shape99 = x3d.Shape(USE="HAnimNewJointShape")

Transform98.children.append(Shape99)

HAnimSegment97.children.append(Transform98)
Shape100 = x3d.Shape()
Appearance101 = x3d.Appearance()
Material102 = x3d.Material()
Material102.emissiveColor = [1,1,1]

Appearance101.material = Material102

Shape100.appearance = Appearance101
IndexedLineSet103 = x3d.IndexedLineSet(DEF="MC2toCMC2")
IndexedLineSet103.coordIndex = [0,1]
Coordinate104 = x3d.Coordinate()
Coordinate104.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet103.coord = Coordinate104

Shape100.geometry = IndexedLineSet103

HAnimSegment97.children.append(Shape100)

HAnimJoint96.children.append(HAnimSegment97)
HAnimJoint96.children.append(x3d.Comment("""index finger"""))
HAnimJoint105 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint105.name = "l_carpometacarpal_2"
HAnimJoint105.center = [0.1,0.2,0]
HAnimJoint105.ulimit = [0,0,0]
HAnimJoint105.llimit = [0,0,0]
HAnimSegment106 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment106.name = "l_metacarpal_2"
Transform107 = x3d.Transform()
Transform107.translation = [0.1,0.2,0]
Shape108 = x3d.Shape(USE="HAnimJointShape")

Transform107.children.append(Shape108)

HAnimSegment106.children.append(Transform107)
Shape109 = x3d.Shape()
Appearance110 = x3d.Appearance()
Material111 = x3d.Material()
Material111.emissiveColor = [1,1,1]

Appearance110.material = Material111

Shape109.appearance = Appearance110
IndexedLineSet112 = x3d.IndexedLineSet(DEF="CMC2toMCP2")
IndexedLineSet112.coordIndex = [0,1]
Coordinate113 = x3d.Coordinate()
Coordinate113.point = [(0.1, 0.2, 0),(0.15, 0.5, 0)]

IndexedLineSet112.coord = Coordinate113

Shape109.geometry = IndexedLineSet112

HAnimSegment106.children.append(Shape109)

HAnimJoint105.children.append(HAnimSegment106)
HAnimJoint114 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint114.name = "l_metacarpophalangeal_2"
HAnimJoint114.center = [0.15,0.5,0]
HAnimJoint114.ulimit = [0,0,0]
HAnimJoint114.llimit = [0,0,0]
HAnimSegment115 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment115.name = "l_carpal_proximal_phalanx_2"
Transform116 = x3d.Transform()
Transform116.translation = [0.15,0.5,0]
Shape117 = x3d.Shape(USE="HAnimJointShape")

Transform116.children.append(Shape117)

HAnimSegment115.children.append(Transform116)
Shape118 = x3d.Shape()
Appearance119 = x3d.Appearance()
Material120 = x3d.Material()
Material120.emissiveColor = [1,1,1]

Appearance119.material = Material120

Shape118.appearance = Appearance119
IndexedLineSet121 = x3d.IndexedLineSet(DEF="MCP2toPIP2")
IndexedLineSet121.coordIndex = [0,1]
Coordinate122 = x3d.Coordinate()
Coordinate122.point = [(0.15, 0.5, 0),(0.2, 0.7, 0)]

IndexedLineSet121.coord = Coordinate122

Shape118.geometry = IndexedLineSet121

HAnimSegment115.children.append(Shape118)

HAnimJoint114.children.append(HAnimSegment115)
HAnimJoint123 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint123.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint123.center = [0.2,0.7,0]
HAnimJoint123.ulimit = [0,0,0]
HAnimJoint123.llimit = [0,0,0]
HAnimSegment124 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment124.name = "l_carpal_middle_phalanx_2"
Transform125 = x3d.Transform()
Transform125.translation = [0.2,0.7,0]
Shape126 = x3d.Shape(USE="HAnimJointShape")

Transform125.children.append(Shape126)

HAnimSegment124.children.append(Transform125)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance()
Material129 = x3d.Material()
Material129.emissiveColor = [1,1,1]

Appearance128.material = Material129

Shape127.appearance = Appearance128
IndexedLineSet130 = x3d.IndexedLineSet(DEF="PIP2toDIP2")
IndexedLineSet130.coordIndex = [0,1]
Coordinate131 = x3d.Coordinate()
Coordinate131.point = [(0.2, 0.7, 0),(0.24, 0.87, 0)]

IndexedLineSet130.coord = Coordinate131

Shape127.geometry = IndexedLineSet130

HAnimSegment124.children.append(Shape127)

HAnimJoint123.children.append(HAnimSegment124)
HAnimJoint132 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint132.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint132.center = [0.24,0.87,0]
HAnimJoint132.ulimit = [0,0,0]
HAnimJoint132.llimit = [0,0,0]
HAnimSegment133 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_2")
HAnimSegment133.name = "l_carpal_distal_phalanx_2"
Transform134 = x3d.Transform()
Transform134.translation = [0.24,0.87,0]
Shape135 = x3d.Shape(USE="HAnimJointShape")

Transform134.children.append(Shape135)

HAnimSegment133.children.append(Transform134)
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()
Material138.emissiveColor = [1,1,1]

Appearance137.material = Material138

Shape136.appearance = Appearance137
IndexedLineSet139 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_2")
IndexedLineSet139.coordIndex = [0,1]
Coordinate140 = x3d.Coordinate()
Coordinate140.point = [(0.24, 0.87, 0),(0.26, 0.93, 0)]

IndexedLineSet139.coord = Coordinate140

Shape136.geometry = IndexedLineSet139

HAnimSegment133.children.append(Shape136)

HAnimJoint132.children.append(HAnimSegment133)

HAnimJoint123.children.append(HAnimJoint132)

HAnimJoint114.children.append(HAnimJoint123)

HAnimJoint105.children.append(HAnimJoint114)

HAnimJoint96.children.append(HAnimJoint105)

HAnimJoint30.children.append(HAnimJoint96)
HAnimJoint30.children.append(x3d.Comment("""MC3"""))
HAnimJoint141 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint141.name = "l_midcarpal_3"
HAnimJoint141.center = [0,0.07,0]
HAnimJoint141.ulimit = [0,0,0]
HAnimJoint141.llimit = [0,0,0]
HAnimSegment142 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment142.name = "l_capitate"
Transform143 = x3d.Transform()
Transform143.translation = [0,0.07,0]
Shape144 = x3d.Shape(USE="HAnimNewJointShape")

Transform143.children.append(Shape144)

HAnimSegment142.children.append(Transform143)
Shape145 = x3d.Shape()
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.emissiveColor = [1,1,1]

Appearance146.material = Material147

Shape145.appearance = Appearance146
IndexedLineSet148 = x3d.IndexedLineSet(DEF="MC3toCMC3")
IndexedLineSet148.coordIndex = [0,1]
Coordinate149 = x3d.Coordinate()
Coordinate149.point = [(0, 0.07, 0),(0, 0.2, 0)]

IndexedLineSet148.coord = Coordinate149

Shape145.geometry = IndexedLineSet148

HAnimSegment142.children.append(Shape145)

HAnimJoint141.children.append(HAnimSegment142)
HAnimJoint141.children.append(x3d.Comment("""Middle fingle"""))
HAnimJoint150 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint150.name = "l_carpometacarpal_3"
HAnimJoint150.center = [0,0.2,0]
HAnimJoint150.ulimit = [0,0,0]
HAnimJoint150.llimit = [0,0,0]
HAnimSegment151 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment151.name = "l_metacarpal_3"
Transform152 = x3d.Transform()
Transform152.translation = [0,0.2,0]
Shape153 = x3d.Shape(USE="HAnimJointShape")

Transform152.children.append(Shape153)

HAnimSegment151.children.append(Transform152)
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.emissiveColor = [1,1,1]

Appearance155.material = Material156

Shape154.appearance = Appearance155
IndexedLineSet157 = x3d.IndexedLineSet(DEF="CMC3toMCP3")
IndexedLineSet157.coordIndex = [0,1]
Coordinate158 = x3d.Coordinate()
Coordinate158.point = [(0, 0.2, 0),(0.03, 0.5, 0)]

IndexedLineSet157.coord = Coordinate158

Shape154.geometry = IndexedLineSet157

HAnimSegment151.children.append(Shape154)

HAnimJoint150.children.append(HAnimSegment151)
HAnimJoint159 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint159.name = "l_metacarpophalangeal_3"
HAnimJoint159.center = [0.03,0.5,0]
HAnimJoint159.ulimit = [0,0,0]
HAnimJoint159.llimit = [0,0,0]
HAnimSegment160 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment160.name = "l_carpal_proximal_phalanx_3"
Transform161 = x3d.Transform()
Transform161.translation = [0.03,0.5,0]
Shape162 = x3d.Shape(USE="HAnimJointShape")

Transform161.children.append(Shape162)

HAnimSegment160.children.append(Transform161)
Shape163 = x3d.Shape()
Appearance164 = x3d.Appearance()
Material165 = x3d.Material()
Material165.emissiveColor = [1,1,1]

Appearance164.material = Material165

Shape163.appearance = Appearance164
IndexedLineSet166 = x3d.IndexedLineSet(DEF="MCP3toPIP3")
IndexedLineSet166.coordIndex = [0,1]
Coordinate167 = x3d.Coordinate()
Coordinate167.point = [(0.03, 0.5, 0),(0.05, 0.75, 0)]

IndexedLineSet166.coord = Coordinate167

Shape163.geometry = IndexedLineSet166

HAnimSegment160.children.append(Shape163)

HAnimJoint159.children.append(HAnimSegment160)
HAnimJoint168 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint168.center = [0.05,0.75,0]
HAnimJoint168.ulimit = [0,0,0]
HAnimJoint168.llimit = [0,0,0]
HAnimSegment169 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment169.name = "l_carpal_middle_phalanx_3"
Transform170 = x3d.Transform()
Transform170.translation = [0.05,0.75,0]
Shape171 = x3d.Shape(USE="HAnimJointShape")

Transform170.children.append(Shape171)

HAnimSegment169.children.append(Transform170)
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()
Material174.emissiveColor = [1,1,1]

Appearance173.material = Material174

Shape172.appearance = Appearance173
IndexedLineSet175 = x3d.IndexedLineSet(DEF="PIP3toDIP3")
IndexedLineSet175.coordIndex = [0,1]
Coordinate176 = x3d.Coordinate()
Coordinate176.point = [(0.05, 0.75, 0),(0.08, 0.96, 0)]

IndexedLineSet175.coord = Coordinate176

Shape172.geometry = IndexedLineSet175

HAnimSegment169.children.append(Shape172)

HAnimJoint168.children.append(HAnimSegment169)
HAnimJoint177 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint177.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint177.center = [0.08,0.96,0]
HAnimJoint177.ulimit = [0,0,0]
HAnimJoint177.llimit = [0,0,0]
HAnimSegment178 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_3")
HAnimSegment178.name = "l_carpal_distal_phalanx_3"
Transform179 = x3d.Transform()
Transform179.translation = [0.08,0.96,0]
Shape180 = x3d.Shape(USE="HAnimJointShape")

Transform179.children.append(Shape180)

HAnimSegment178.children.append(Transform179)
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.emissiveColor = [1,1,1]

Appearance182.material = Material183

Shape181.appearance = Appearance182
IndexedLineSet184 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_3")
IndexedLineSet184.coordIndex = [0,1]
Coordinate185 = x3d.Coordinate()
Coordinate185.point = [(0.08, 0.96, 0),(0.09, 1.05, 0)]

IndexedLineSet184.coord = Coordinate185

Shape181.geometry = IndexedLineSet184

HAnimSegment178.children.append(Shape181)

HAnimJoint177.children.append(HAnimSegment178)

HAnimJoint168.children.append(HAnimJoint177)

HAnimJoint159.children.append(HAnimJoint168)

HAnimJoint150.children.append(HAnimJoint159)

HAnimJoint141.children.append(HAnimJoint150)

HAnimJoint30.children.append(HAnimJoint141)
HAnimJoint30.children.append(x3d.Comment("""MC45"""))
HAnimJoint186 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint186.name = "l_midcarpal_4_5"
HAnimJoint186.center = [-0.1,0.1,0]
HAnimJoint186.ulimit = [0,0,0]
HAnimJoint186.llimit = [0,0,0]
HAnimSegment187 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment187.name = "l_hamate"
Transform188 = x3d.Transform()
Transform188.translation = [-0.1,0.1,0]
Shape189 = x3d.Shape(USE="HAnimNewJointShape")

Transform188.children.append(Shape189)

HAnimSegment187.children.append(Transform188)
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.emissiveColor = [1,1,1]

Appearance191.material = Material192

Shape190.appearance = Appearance191
IndexedLineSet193 = x3d.IndexedLineSet(DEF="MC45toCMC4")
IndexedLineSet193.coordIndex = [0,1]
Coordinate194 = x3d.Coordinate()
Coordinate194.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet193.coord = Coordinate194

Shape190.geometry = IndexedLineSet193

HAnimSegment187.children.append(Shape190)
Shape195 = x3d.Shape()
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.emissiveColor = [1,1,1]

Appearance196.material = Material197

Shape195.appearance = Appearance196
IndexedLineSet198 = x3d.IndexedLineSet(DEF="MC45toCMC5")
IndexedLineSet198.coordIndex = [0,1]
Coordinate199 = x3d.Coordinate()
Coordinate199.point = [(-0.1, 0.1, 0),(-0.15, 0.17, 0)]

IndexedLineSet198.coord = Coordinate199

Shape195.geometry = IndexedLineSet198

HAnimSegment187.children.append(Shape195)

HAnimJoint186.children.append(HAnimSegment187)
HAnimJoint186.children.append(x3d.Comment("""ring finger"""))
HAnimJoint200 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint200.name = "l_carpometacarpal_4"
HAnimJoint200.center = [-0.1,0.2,0]
HAnimJoint200.ulimit = [0,0,0]
HAnimJoint200.llimit = [0,0,0]
HAnimSegment201 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment201.name = "l_metacarpal_4"
Transform202 = x3d.Transform()
Transform202.translation = [-0.1,0.2,0]
Shape203 = x3d.Shape(USE="HAnimJointShape")

Transform202.children.append(Shape203)

HAnimSegment201.children.append(Transform202)
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.emissiveColor = [1,1,1]

Appearance205.material = Material206

Shape204.appearance = Appearance205
IndexedLineSet207 = x3d.IndexedLineSet(DEF="CMC4toMCP4")
IndexedLineSet207.coordIndex = [0,1]
Coordinate208 = x3d.Coordinate()
Coordinate208.point = [(-0.1, 0.2, 0),(-0.1, 0.47, 0)]

IndexedLineSet207.coord = Coordinate208

Shape204.geometry = IndexedLineSet207

HAnimSegment201.children.append(Shape204)

HAnimJoint200.children.append(HAnimSegment201)
HAnimJoint209 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint209.name = "l_metacarpophalangeal_4"
HAnimJoint209.center = [-0.1,0.47,0]
HAnimJoint209.ulimit = [0,0,0]
HAnimJoint209.llimit = [0,0,0]
HAnimSegment210 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment210.name = "l_carpal_proximal_phalanx_4"
Transform211 = x3d.Transform()
Transform211.translation = [-0.1,0.47,0]
Shape212 = x3d.Shape(USE="HAnimJointShape")

Transform211.children.append(Shape212)

HAnimSegment210.children.append(Transform211)
Shape213 = x3d.Shape()
Appearance214 = x3d.Appearance()
Material215 = x3d.Material()
Material215.emissiveColor = [1,1,1]

Appearance214.material = Material215

Shape213.appearance = Appearance214
IndexedLineSet216 = x3d.IndexedLineSet(DEF="MCP4toPIP4")
IndexedLineSet216.coordIndex = [0,1]
Coordinate217 = x3d.Coordinate()
Coordinate217.point = [(-0.1, 0.47, 0),(-0.1, 0.7, 0)]

IndexedLineSet216.coord = Coordinate217

Shape213.geometry = IndexedLineSet216

HAnimSegment210.children.append(Shape213)

HAnimJoint209.children.append(HAnimSegment210)
HAnimJoint218 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint218.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint218.center = [-0.1,0.7,0]
HAnimJoint218.ulimit = [0,0,0]
HAnimJoint218.llimit = [0,0,0]
HAnimSegment219 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment219.name = "l_carpal_middle_phalanx_4"
Transform220 = x3d.Transform()
Transform220.translation = [-0.1,0.7,0]
Shape221 = x3d.Shape(USE="HAnimJointShape")

Transform220.children.append(Shape221)

HAnimSegment219.children.append(Transform220)
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
Material224 = x3d.Material()
Material224.emissiveColor = [1,1,1]

Appearance223.material = Material224

Shape222.appearance = Appearance223
IndexedLineSet225 = x3d.IndexedLineSet(DEF="PIP4toDIP4")
IndexedLineSet225.coordIndex = [0,1]
Coordinate226 = x3d.Coordinate()
Coordinate226.point = [(-0.1, 0.7, 0),(-0.1, 0.93, 0)]

IndexedLineSet225.coord = Coordinate226

Shape222.geometry = IndexedLineSet225

HAnimSegment219.children.append(Shape222)

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint227 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint227.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint227.center = [-0.1,0.93,0]
HAnimJoint227.ulimit = [0,0,0]
HAnimJoint227.llimit = [0,0,0]
HAnimSegment228 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_4")
HAnimSegment228.name = "l_carpal_distal_phalanx_4"
Transform229 = x3d.Transform()
Transform229.translation = [-0.1,0.93,0]
Shape230 = x3d.Shape(USE="HAnimJointShape")

Transform229.children.append(Shape230)

HAnimSegment228.children.append(Transform229)
Shape231 = x3d.Shape()
Appearance232 = x3d.Appearance()
Material233 = x3d.Material()
Material233.emissiveColor = [1,1,1]

Appearance232.material = Material233

Shape231.appearance = Appearance232
IndexedLineSet234 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_4")
IndexedLineSet234.coordIndex = [0,1]
Coordinate235 = x3d.Coordinate()
Coordinate235.point = [(-0.1, 0.93, 0),(-0.1, 1, 0)]

IndexedLineSet234.coord = Coordinate235

Shape231.geometry = IndexedLineSet234

HAnimSegment228.children.append(Shape231)

HAnimJoint227.children.append(HAnimSegment228)

HAnimJoint218.children.append(HAnimJoint227)

HAnimJoint209.children.append(HAnimJoint218)

HAnimJoint200.children.append(HAnimJoint209)

HAnimJoint186.children.append(HAnimJoint200)
HAnimJoint186.children.append(x3d.Comment("""pinky finger"""))
HAnimJoint236 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint236.name = "l_carpometacarpal_5"
HAnimJoint236.center = [-0.15,0.17,0]
HAnimJoint236.ulimit = [0,0,0]
HAnimJoint236.llimit = [0,0,0]
HAnimSegment237 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment237.name = "l_metacarpal_5"
Transform238 = x3d.Transform()
Transform238.translation = [-0.15,0.17,0]
Shape239 = x3d.Shape(USE="HAnimJointShape")

Transform238.children.append(Shape239)

HAnimSegment237.children.append(Transform238)
Shape240 = x3d.Shape()
Appearance241 = x3d.Appearance()
Material242 = x3d.Material()
Material242.emissiveColor = [1,1,1]

Appearance241.material = Material242

Shape240.appearance = Appearance241
IndexedLineSet243 = x3d.IndexedLineSet(DEF="CMC5toMCP5")
IndexedLineSet243.coordIndex = [0,1]
Coordinate244 = x3d.Coordinate()
Coordinate244.point = [(-0.15, 0.17, 0),(-0.2, 0.4, 0)]

IndexedLineSet243.coord = Coordinate244

Shape240.geometry = IndexedLineSet243

HAnimSegment237.children.append(Shape240)

HAnimJoint236.children.append(HAnimSegment237)
HAnimJoint245 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint245.name = "l_metacarpophalangeal_5"
HAnimJoint245.center = [-0.2,0.4,0]
HAnimJoint245.ulimit = [0,0,0]
HAnimJoint245.llimit = [0,0,0]
HAnimSegment246 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment246.name = "l_carpal_proximal_phalanx_5"
Transform247 = x3d.Transform()
Transform247.translation = [-0.2,0.4,0]
Shape248 = x3d.Shape(USE="HAnimJointShape")

Transform247.children.append(Shape248)

HAnimSegment246.children.append(Transform247)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.emissiveColor = [1,1,1]

Appearance250.material = Material251

Shape249.appearance = Appearance250
IndexedLineSet252 = x3d.IndexedLineSet(DEF="MCP5toPIP5")
IndexedLineSet252.coordIndex = [0,1]
Coordinate253 = x3d.Coordinate()
Coordinate253.point = [(-0.2, 0.4, 0),(-0.23, 0.63, 0)]

IndexedLineSet252.coord = Coordinate253

Shape249.geometry = IndexedLineSet252

HAnimSegment246.children.append(Shape249)

HAnimJoint245.children.append(HAnimSegment246)
HAnimJoint254 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint254.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint254.center = [-0.23,0.63,0]
HAnimJoint254.ulimit = [0,0,0]
HAnimJoint254.llimit = [0,0,0]
HAnimSegment255 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment255.name = "l_carpal_middle_phalanx_5"
Transform256 = x3d.Transform()
Transform256.translation = [-0.23,0.63,0]
Shape257 = x3d.Shape(USE="HAnimJointShape")

Transform256.children.append(Shape257)

HAnimSegment255.children.append(Transform256)
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.emissiveColor = [1,1,1]

Appearance259.material = Material260

Shape258.appearance = Appearance259
IndexedLineSet261 = x3d.IndexedLineSet(DEF="PIP5toDIP5")
IndexedLineSet261.coordIndex = [0,1]
Coordinate262 = x3d.Coordinate()
Coordinate262.point = [(-0.23, 0.63, 0),(-0.25, 0.79, 0)]

IndexedLineSet261.coord = Coordinate262

Shape258.geometry = IndexedLineSet261

HAnimSegment255.children.append(Shape258)

HAnimJoint254.children.append(HAnimSegment255)
HAnimJoint263 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint263.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint263.center = [-0.25,0.79,0]
HAnimJoint263.ulimit = [0,0,0]
HAnimJoint263.llimit = [0,0,0]
HAnimSegment264 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_5")
HAnimSegment264.name = "l_carpal_distal_phalanx_5"
Transform265 = x3d.Transform()
Transform265.translation = [-0.25,0.79,0]
Shape266 = x3d.Shape(USE="HAnimJointShape")

Transform265.children.append(Shape266)

HAnimSegment264.children.append(Transform265)
Shape267 = x3d.Shape()
Appearance268 = x3d.Appearance()
Material269 = x3d.Material()
Material269.emissiveColor = [1,1,1]

Appearance268.material = Material269

Shape267.appearance = Appearance268
IndexedLineSet270 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_5")
IndexedLineSet270.coordIndex = [0,1]
Coordinate271 = x3d.Coordinate()
Coordinate271.point = [(-0.25, 0.79, 0),(-0.26, 0.85, 0)]

IndexedLineSet270.coord = Coordinate271

Shape267.geometry = IndexedLineSet270

HAnimSegment264.children.append(Shape267)

HAnimJoint263.children.append(HAnimSegment264)

HAnimJoint254.children.append(HAnimJoint263)

HAnimJoint245.children.append(HAnimJoint254)

HAnimJoint236.children.append(HAnimJoint245)

HAnimJoint186.children.append(HAnimJoint236)

HAnimJoint30.children.append(HAnimJoint186)

HAnimJoint29.children.append(HAnimJoint30)

HAnimHumanoid26.skeleton.append(HAnimJoint29)
HAnimJoint272 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid26.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid26.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid26.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid26.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid26.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid26.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid26.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid26.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid26.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid26.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid26.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid26.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid26.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid26.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid26.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid26.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid26.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid26.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid26.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid26.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid26.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid26.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid26.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid26.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid26.joints.append(HAnimJoint296)

Scene24.children.append(HAnimHumanoid26)

X3D0.Scene = Scene24
f = open("../data/HAnimModelHandLeft.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelHandLeft.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelHandLeft.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "HAnimModelHandRight.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Right hand using high-fidelity definitions for HAnim version 2.0"

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
meta7.content = "Mon, 09 Feb 2026 12:24:16 GMT"

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
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"

head1.children.append(meta21)

X3D0.head = head1
Scene22 = x3d.Scene()
WorldInfo23 = x3d.WorldInfo()
WorldInfo23.title = "HAnimModelHandRight.x3d"

Scene22.children.append(WorldInfo23)
HAnimHumanoid24 = x3d.HAnimHumanoid(DEF="hanim_Hand_Right")
HAnimHumanoid24.name = "Hand_Right"
HAnimHumanoid24.version = "2.0"
HAnimHumanoid24.loa = 4
MetadataSet25 = x3d.MetadataSet()
MetadataSet25.name = "HAnimHumanoid.info"
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString26 = x3d.MetadataString()
MetadataString26.name = "authorName"

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString26)

HAnimHumanoid24.metadata = MetadataSet25
HAnimJoint27 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint27.name = "humanoid_root"
HAnimJoint28 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint28.description = "connection joint of hand to leg above"
HAnimJoint28.name = "r_radiocarpal"
HAnimSegment29 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment29.name = "r_carpal"
Transform30 = x3d.Transform()
Shape31 = x3d.Shape(DEF="HAnimJointShape")
Appearance32 = x3d.Appearance(DEF="HAnimJointAppearanceBlue")
Material33 = x3d.Material()
Material33.diffuseColor = [0,0,1]

Appearance32.material = Material33

Shape31.appearance = Appearance32
Sphere34 = x3d.Sphere()
Sphere34.radius = 0.025

Shape31.geometry = Sphere34

Transform30.children.append(Shape31)

HAnimSegment29.children.append(Transform30)
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.emissiveColor = [1,1,1]

Appearance36.material = Material37

Shape35.appearance = Appearance36
IndexedLineSet38 = x3d.IndexedLineSet(DEF="RCToMC12")
IndexedLineSet38.coordIndex = [0,1]
Coordinate39 = x3d.Coordinate()
Coordinate39.point = [(0, 0, 0),(-0.1, 0.1, 0)]

IndexedLineSet38.coord = Coordinate39

Shape35.geometry = IndexedLineSet38

HAnimSegment29.children.append(Shape35)
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.emissiveColor = [1,1,1]

Appearance41.material = Material42

Shape40.appearance = Appearance41
IndexedLineSet43 = x3d.IndexedLineSet(DEF="RCToMC3")
IndexedLineSet43.coordIndex = [0,1]
Coordinate44 = x3d.Coordinate()
Coordinate44.point = [(0, 0, 0),(0, 0.07, 0)]

IndexedLineSet43.coord = Coordinate44

Shape40.geometry = IndexedLineSet43

HAnimSegment29.children.append(Shape40)
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.emissiveColor = [1,1,1]

Appearance46.material = Material47

Shape45.appearance = Appearance46
IndexedLineSet48 = x3d.IndexedLineSet(DEF="RCToMC45")
IndexedLineSet48.coordIndex = [0,1]
Coordinate49 = x3d.Coordinate()
Coordinate49.point = [(0, 0, 0),(0.1, 0.1, 0)]

IndexedLineSet48.coord = Coordinate49

Shape45.geometry = IndexedLineSet48

HAnimSegment29.children.append(Shape45)

HAnimJoint28.children.append(HAnimSegment29)
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint50.name = "r_midcarpal_1"
HAnimJoint50.center = [-0.14,0.09,0]
HAnimSegment51 = x3d.HAnimSegment(DEF="hanim_r_trapezium")
HAnimSegment51.name = "r_trapezium"
Transform52 = x3d.Transform()
Transform52.translation = [-0.14,0.09,0]
Shape53 = x3d.Shape(DEF="HAnimNewJointShape")
Appearance54 = x3d.Appearance(DEF="HAnimJointAppearanceRed")
Material55 = x3d.Material()
Material55.diffuseColor = [1,0,0]

Appearance54.material = Material55

Shape53.appearance = Appearance54
Sphere56 = x3d.Sphere()
Sphere56.radius = 0.025

Shape53.geometry = Sphere56

Transform52.children.append(Shape53)

HAnimSegment51.children.append(Transform52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.emissiveColor = [1,1,1]

Appearance58.material = Material59

Shape57.appearance = Appearance58
IndexedLineSet60 = x3d.IndexedLineSet(DEF="MC12toCMC1")
IndexedLineSet60.coordIndex = [0,1]
Coordinate61 = x3d.Coordinate()
Coordinate61.point = [(-0.1, 0.1, 0),(-0.2, 0.15, 0)]

IndexedLineSet60.coord = Coordinate61

Shape57.geometry = IndexedLineSet60

HAnimSegment51.children.append(Shape57)

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint62.name = "r_carpometacarpal_1"
HAnimJoint62.center = [-0.2,0.15,0]
HAnimSegment63 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment63.name = "r_metacarpal_1"
Transform64 = x3d.Transform()
Transform64.translation = [-0.2,0.15,0]
Shape65 = x3d.Shape(USE="HAnimJointShape")

Transform64.children.append(Shape65)

HAnimSegment63.children.append(Transform64)
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.emissiveColor = [1,1,1]

Appearance67.material = Material68

Shape66.appearance = Appearance67
IndexedLineSet69 = x3d.IndexedLineSet(DEF="CMC1toMCP1xxx")
IndexedLineSet69.coordIndex = [0,1]
Coordinate70 = x3d.Coordinate()
Coordinate70.point = [(-0.2, 0.15, 0),(-0.3, 0.3, 0)]

IndexedLineSet69.coord = Coordinate70

Shape66.geometry = IndexedLineSet69

HAnimSegment63.children.append(Shape66)

HAnimJoint62.children.append(HAnimSegment63)
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint71.name = "r_metacarpophalangeal_1"
HAnimJoint71.center = [-0.3,0.3,0]
HAnimSegment72 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment72.name = "r_carpal_proximal_phalanx_1"
Transform73 = x3d.Transform()
Transform73.translation = [-0.3,0.3,0]
Shape74 = x3d.Shape(USE="HAnimJointShape")

Transform73.children.append(Shape74)

HAnimSegment72.children.append(Transform73)
Shape75 = x3d.Shape()
Appearance76 = x3d.Appearance()
Material77 = x3d.Material()
Material77.emissiveColor = [1,1,1]

Appearance76.material = Material77

Shape75.appearance = Appearance76
IndexedLineSet78 = x3d.IndexedLineSet(DEF="MCP11toIP1")
IndexedLineSet78.coordIndex = [0,1]
Coordinate79 = x3d.Coordinate()
Coordinate79.point = [(-0.3, 0.3, 0),(-0.35, 0.4, 0)]

IndexedLineSet78.coord = Coordinate79

Shape75.geometry = IndexedLineSet78

HAnimSegment72.children.append(Shape75)

HAnimJoint71.children.append(HAnimSegment72)
HAnimJoint80 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint80.name = "r_carpal_interphalangeal_1"
HAnimJoint80.center = [-0.35,0.4,0]
HAnimSegment81 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_1")
HAnimSegment81.name = "r_carpal_distal_phalanx_1"
Transform82 = x3d.Transform()
Transform82.translation = [-0.35,0.4,0]
Shape83 = x3d.Shape(USE="HAnimJointShape")

Transform82.children.append(Shape83)

HAnimSegment81.children.append(Transform82)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.emissiveColor = [1,1,1]

Appearance85.material = Material86

Shape84.appearance = Appearance85
IndexedLineSet87 = x3d.IndexedLineSet(DEF="fingertip_r_carpal_interphalangeal_1")
IndexedLineSet87.coordIndex = [0,1]
Coordinate88 = x3d.Coordinate()
Coordinate88.point = [(-0.35, 0.4, 0),(-0.36, 0.45, 0)]

IndexedLineSet87.coord = Coordinate88

Shape84.geometry = IndexedLineSet87

HAnimSegment81.children.append(Shape84)

HAnimJoint80.children.append(HAnimSegment81)

HAnimJoint71.children.append(HAnimJoint80)

HAnimJoint62.children.append(HAnimJoint71)

HAnimJoint50.children.append(HAnimJoint62)

HAnimJoint28.children.append(HAnimJoint50)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint89.name = "r_midcarpal_2"
HAnimJoint89.center = [-0.07,0.07,0]
HAnimSegment90 = x3d.HAnimSegment(DEF="hanim_r_trapezoid")
HAnimSegment90.name = "r_trapezoid"
Transform91 = x3d.Transform()
Transform91.translation = [-0.07,0.07,0]
Shape92 = x3d.Shape(USE="HAnimNewJointShape")

Transform91.children.append(Shape92)

HAnimSegment90.children.append(Transform91)
Shape93 = x3d.Shape()
Appearance94 = x3d.Appearance()
Material95 = x3d.Material()
Material95.emissiveColor = [1,1,1]

Appearance94.material = Material95

Shape93.appearance = Appearance94
IndexedLineSet96 = x3d.IndexedLineSet(DEF="MC12toCMC2")
IndexedLineSet96.coordIndex = [0,1]
Coordinate97 = x3d.Coordinate()
Coordinate97.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet96.coord = Coordinate97

Shape93.geometry = IndexedLineSet96

HAnimSegment90.children.append(Shape93)

HAnimJoint89.children.append(HAnimSegment90)
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint98.name = "r_carpometacarpal_2"
HAnimJoint98.center = [-0.1,0.2,0]
HAnimSegment99 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment99.name = "r_metacarpal_2"
Transform100 = x3d.Transform()
Transform100.translation = [-0.1,0.2,0]
Shape101 = x3d.Shape(USE="HAnimJointShape")

Transform100.children.append(Shape101)

HAnimSegment99.children.append(Transform100)
Shape102 = x3d.Shape()
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.emissiveColor = [1,1,1]

Appearance103.material = Material104

Shape102.appearance = Appearance103
IndexedLineSet105 = x3d.IndexedLineSet(DEF="CMC2toMCP2")
IndexedLineSet105.coordIndex = [0,1]
Coordinate106 = x3d.Coordinate()
Coordinate106.point = [(-0.1, 0.2, 0),(-0.15, 0.5, 0)]

IndexedLineSet105.coord = Coordinate106

Shape102.geometry = IndexedLineSet105

HAnimSegment99.children.append(Shape102)

HAnimJoint98.children.append(HAnimSegment99)
HAnimJoint107 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint107.name = "r_metacarpophalangeal_2"
HAnimJoint107.center = [-0.15,0.5,0]
HAnimSegment108 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment108.name = "r_carpal_proximal_phalanx_2"
Transform109 = x3d.Transform()
Transform109.translation = [-0.15,0.5,0]
Shape110 = x3d.Shape(USE="HAnimJointShape")

Transform109.children.append(Shape110)

HAnimSegment108.children.append(Transform109)
Shape111 = x3d.Shape()
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.emissiveColor = [1,1,1]

Appearance112.material = Material113

Shape111.appearance = Appearance112
IndexedLineSet114 = x3d.IndexedLineSet(DEF="MCP2toPIP2")
IndexedLineSet114.coordIndex = [0,1]
Coordinate115 = x3d.Coordinate()
Coordinate115.point = [(-0.15, 0.5, 0),(-0.2, 0.7, 0)]

IndexedLineSet114.coord = Coordinate115

Shape111.geometry = IndexedLineSet114

HAnimSegment108.children.append(Shape111)

HAnimJoint107.children.append(HAnimSegment108)
HAnimJoint116 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint116.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint116.center = [-0.2,0.7,0]
HAnimSegment117 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment117.name = "r_carpal_middle_phalanx_2"
Transform118 = x3d.Transform()
Transform118.translation = [-0.2,0.7,0]
Shape119 = x3d.Shape(USE="HAnimJointShape")

Transform118.children.append(Shape119)

HAnimSegment117.children.append(Transform118)
Shape120 = x3d.Shape()
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.emissiveColor = [1,1,1]

Appearance121.material = Material122

Shape120.appearance = Appearance121
IndexedLineSet123 = x3d.IndexedLineSet(DEF="PIP2toDIP2")
IndexedLineSet123.coordIndex = [0,1]
Coordinate124 = x3d.Coordinate()
Coordinate124.point = [(-0.2, 0.7, 0),(-0.24, 0.87, 0)]

IndexedLineSet123.coord = Coordinate124

Shape120.geometry = IndexedLineSet123

HAnimSegment117.children.append(Shape120)

HAnimJoint116.children.append(HAnimSegment117)
HAnimJoint125 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint125.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint125.center = [-0.24,0.87,0]
HAnimSegment126 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_2")
HAnimSegment126.name = "r_carpal_distal_phalanx_2"
Transform127 = x3d.Transform()
Transform127.translation = [-0.24,0.87,0]
Shape128 = x3d.Shape(USE="HAnimJointShape")

Transform127.children.append(Shape128)

HAnimSegment126.children.append(Transform127)
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.emissiveColor = [1,1,1]

Appearance130.material = Material131

Shape129.appearance = Appearance130
IndexedLineSet132 = x3d.IndexedLineSet(DEF="fingertip_r_carpal_distal_interphalangeal_2")
IndexedLineSet132.coordIndex = [0,1]
Coordinate133 = x3d.Coordinate()
Coordinate133.point = [(-0.24, 0.87, 0),(-0.26, 0.93, 0)]

IndexedLineSet132.coord = Coordinate133

Shape129.geometry = IndexedLineSet132

HAnimSegment126.children.append(Shape129)

HAnimJoint125.children.append(HAnimSegment126)

HAnimJoint116.children.append(HAnimJoint125)

HAnimJoint107.children.append(HAnimJoint116)

HAnimJoint98.children.append(HAnimJoint107)

HAnimJoint89.children.append(HAnimJoint98)

HAnimJoint28.children.append(HAnimJoint89)
HAnimJoint134 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint134.name = "r_midcarpal_3"
HAnimJoint134.center = [0,0.07,0]
HAnimSegment135 = x3d.HAnimSegment(DEF="hanim_r_capitate")
HAnimSegment135.name = "r_capitate"
Transform136 = x3d.Transform()
Transform136.translation = [0,0.07,0]
Shape137 = x3d.Shape(USE="HAnimNewJointShape")

Transform136.children.append(Shape137)

HAnimSegment135.children.append(Transform136)
Shape138 = x3d.Shape()
Appearance139 = x3d.Appearance()
Material140 = x3d.Material()
Material140.emissiveColor = [1,1,1]

Appearance139.material = Material140

Shape138.appearance = Appearance139
IndexedLineSet141 = x3d.IndexedLineSet(DEF="MC3toCMC3")
IndexedLineSet141.coordIndex = [0,1]
Coordinate142 = x3d.Coordinate()
Coordinate142.point = [(0, 0.07, 0),(0, 0.2, 0)]

IndexedLineSet141.coord = Coordinate142

Shape138.geometry = IndexedLineSet141

HAnimSegment135.children.append(Shape138)

HAnimJoint134.children.append(HAnimSegment135)
HAnimJoint143 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint143.name = "r_carpometacarpal_3"
HAnimJoint143.center = [0,0.2,0]
HAnimSegment144 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment144.name = "r_metacarpal_3"
Transform145 = x3d.Transform()
Transform145.translation = [0,0.2,0]
Shape146 = x3d.Shape(USE="HAnimJointShape")

Transform145.children.append(Shape146)

HAnimSegment144.children.append(Transform145)
Shape147 = x3d.Shape()
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.emissiveColor = [1,1,1]

Appearance148.material = Material149

Shape147.appearance = Appearance148
IndexedLineSet150 = x3d.IndexedLineSet(DEF="CMC3toMCP3")
IndexedLineSet150.coordIndex = [0,1]
Coordinate151 = x3d.Coordinate()
Coordinate151.point = [(0, 0.2, 0),(-0.03, 0.5, 0)]

IndexedLineSet150.coord = Coordinate151

Shape147.geometry = IndexedLineSet150

HAnimSegment144.children.append(Shape147)

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint152 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint152.name = "r_metacarpophalangeal_3"
HAnimJoint152.center = [-0.03,0.5,0]
HAnimSegment153 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment153.name = "r_carpal_proximal_phalanx_3"
Transform154 = x3d.Transform()
Transform154.translation = [-0.03,0.5,0]
Shape155 = x3d.Shape(USE="HAnimJointShape")

Transform154.children.append(Shape155)

HAnimSegment153.children.append(Transform154)
Shape156 = x3d.Shape()
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()
Material158.emissiveColor = [1,1,1]

Appearance157.material = Material158

Shape156.appearance = Appearance157
IndexedLineSet159 = x3d.IndexedLineSet(DEF="MCP3toPIP3")
IndexedLineSet159.coordIndex = [0,1]
Coordinate160 = x3d.Coordinate()
Coordinate160.point = [(-0.03, 0.5, 0),(-0.05, 0.75, 0)]

IndexedLineSet159.coord = Coordinate160

Shape156.geometry = IndexedLineSet159

HAnimSegment153.children.append(Shape156)

HAnimJoint152.children.append(HAnimSegment153)
HAnimJoint161 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint161.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint161.center = [-0.05,0.75,0]
HAnimSegment162 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment162.name = "r_carpal_middle_phalanx_3"
Transform163 = x3d.Transform()
Transform163.translation = [-0.05,0.75,0]
Shape164 = x3d.Shape(USE="HAnimJointShape")

Transform163.children.append(Shape164)

HAnimSegment162.children.append(Transform163)
Shape165 = x3d.Shape()
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.emissiveColor = [1,1,1]

Appearance166.material = Material167

Shape165.appearance = Appearance166
IndexedLineSet168 = x3d.IndexedLineSet(DEF="PIP3toDIP3")
IndexedLineSet168.coordIndex = [0,1]
Coordinate169 = x3d.Coordinate()
Coordinate169.point = [(-0.05, 0.75, 0),(-0.08, 0.96, 0)]

IndexedLineSet168.coord = Coordinate169

Shape165.geometry = IndexedLineSet168

HAnimSegment162.children.append(Shape165)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint170 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint170.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint170.center = [-0.08,0.96,0]
HAnimSegment171 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_3")
HAnimSegment171.name = "r_carpal_distal_phalanx_3"
Transform172 = x3d.Transform()
Transform172.translation = [-0.08,0.96,0]
Shape173 = x3d.Shape(USE="HAnimJointShape")

Transform172.children.append(Shape173)

HAnimSegment171.children.append(Transform172)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.emissiveColor = [1,1,1]

Appearance175.material = Material176

Shape174.appearance = Appearance175
IndexedLineSet177 = x3d.IndexedLineSet(DEF="fingertip_r_carpal_distal_interphalangeal_3")
IndexedLineSet177.coordIndex = [0,1]
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(-0.08, 0.96, 0),(-0.09, 1.05, 0)]

IndexedLineSet177.coord = Coordinate178

Shape174.geometry = IndexedLineSet177

HAnimSegment171.children.append(Shape174)

HAnimJoint170.children.append(HAnimSegment171)

HAnimJoint161.children.append(HAnimJoint170)

HAnimJoint152.children.append(HAnimJoint161)

HAnimJoint143.children.append(HAnimJoint152)

HAnimJoint134.children.append(HAnimJoint143)

HAnimJoint28.children.append(HAnimJoint134)
HAnimJoint179 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint179.name = "r_midcarpal_4_5"
HAnimJoint179.center = [0.1,0.1,0]
HAnimSegment180 = x3d.HAnimSegment(DEF="hanim_r_hamate")
HAnimSegment180.name = "r_hamate"
Transform181 = x3d.Transform()
Transform181.translation = [0.1,0.1,0]
Shape182 = x3d.Shape(USE="HAnimNewJointShape")

Transform181.children.append(Shape182)

HAnimSegment180.children.append(Transform181)
Shape183 = x3d.Shape()
Appearance184 = x3d.Appearance()
Material185 = x3d.Material()
Material185.emissiveColor = [1,1,1]

Appearance184.material = Material185

Shape183.appearance = Appearance184
IndexedLineSet186 = x3d.IndexedLineSet(DEF="MC45toCMC4")
IndexedLineSet186.coordIndex = [0,1]
Coordinate187 = x3d.Coordinate()
Coordinate187.point = [(0.1, 0.1, 0),(0.1, 0.2, 0)]

IndexedLineSet186.coord = Coordinate187

Shape183.geometry = IndexedLineSet186

HAnimSegment180.children.append(Shape183)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.emissiveColor = [1,1,1]

Appearance189.material = Material190

Shape188.appearance = Appearance189
IndexedLineSet191 = x3d.IndexedLineSet(DEF="MC45toCMC5")
IndexedLineSet191.coordIndex = [0,1]
Coordinate192 = x3d.Coordinate()
Coordinate192.point = [(0.1, 0.1, 0),(0.15, 0.17, 0)]

IndexedLineSet191.coord = Coordinate192

Shape188.geometry = IndexedLineSet191

HAnimSegment180.children.append(Shape188)

HAnimJoint179.children.append(HAnimSegment180)
HAnimJoint193 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint193.name = "r_carpometacarpal_4"
HAnimJoint193.center = [0.1,0.2,0]
HAnimSegment194 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment194.name = "r_metacarpal_4"
Transform195 = x3d.Transform()
Transform195.translation = [0.1,0.2,0]
Shape196 = x3d.Shape(USE="HAnimJointShape")

Transform195.children.append(Shape196)

HAnimSegment194.children.append(Transform195)
Shape197 = x3d.Shape()
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.emissiveColor = [1,1,1]

Appearance198.material = Material199

Shape197.appearance = Appearance198
IndexedLineSet200 = x3d.IndexedLineSet(DEF="CMC4toMCP4")
IndexedLineSet200.coordIndex = [0,1]
Coordinate201 = x3d.Coordinate()
Coordinate201.point = [(0.1, 0.2, 0),(0.1, 0.47, 0)]

IndexedLineSet200.coord = Coordinate201

Shape197.geometry = IndexedLineSet200

HAnimSegment194.children.append(Shape197)

HAnimJoint193.children.append(HAnimSegment194)
HAnimJoint202 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint202.name = "r_metacarpophalangeal_4"
HAnimJoint202.center = [0.1,0.47,0]
HAnimSegment203 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment203.name = "r_carpal_proximal_phalanx_4"
Transform204 = x3d.Transform()
Transform204.translation = [0.1,0.47,0]
Shape205 = x3d.Shape(USE="HAnimJointShape")

Transform204.children.append(Shape205)

HAnimSegment203.children.append(Transform204)
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.emissiveColor = [1,1,1]

Appearance207.material = Material208

Shape206.appearance = Appearance207
IndexedLineSet209 = x3d.IndexedLineSet(DEF="MCP4toPIP4")
IndexedLineSet209.coordIndex = [0,1]
Coordinate210 = x3d.Coordinate()
Coordinate210.point = [(0.1, 0.47, 0),(0.1, 0.7, 0)]

IndexedLineSet209.coord = Coordinate210

Shape206.geometry = IndexedLineSet209

HAnimSegment203.children.append(Shape206)

HAnimJoint202.children.append(HAnimSegment203)
HAnimJoint211 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint211.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint211.center = [0.1,0.7,0]
HAnimSegment212 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment212.name = "r_carpal_middle_phalanx_4"
Transform213 = x3d.Transform()
Transform213.translation = [0.1,0.7,0]
Shape214 = x3d.Shape(USE="HAnimJointShape")

Transform213.children.append(Shape214)

HAnimSegment212.children.append(Transform213)
Shape215 = x3d.Shape()
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.emissiveColor = [1,1,1]

Appearance216.material = Material217

Shape215.appearance = Appearance216
IndexedLineSet218 = x3d.IndexedLineSet(DEF="PIP4toDIP4")
IndexedLineSet218.coordIndex = [0,1]
Coordinate219 = x3d.Coordinate()
Coordinate219.point = [(0.1, 0.7, 0),(0.1, 0.93, 0)]

IndexedLineSet218.coord = Coordinate219

Shape215.geometry = IndexedLineSet218

HAnimSegment212.children.append(Shape215)

HAnimJoint211.children.append(HAnimSegment212)
HAnimJoint220 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint220.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint220.center = [0.1,0.93,0]
HAnimSegment221 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_4")
HAnimSegment221.name = "r_carpal_distal_phalanx_4"
Transform222 = x3d.Transform()
Transform222.translation = [0.1,0.93,0]
Shape223 = x3d.Shape(USE="HAnimJointShape")

Transform222.children.append(Shape223)

HAnimSegment221.children.append(Transform222)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.emissiveColor = [1,1,1]

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedLineSet227 = x3d.IndexedLineSet(DEF="fingertip_r_carpal_distal_interphalangeal_4")
IndexedLineSet227.coordIndex = [0,1]
Coordinate228 = x3d.Coordinate()
Coordinate228.point = [(0.1, 0.93, 0),(0.1, 1, 0)]

IndexedLineSet227.coord = Coordinate228

Shape224.geometry = IndexedLineSet227

HAnimSegment221.children.append(Shape224)

HAnimJoint220.children.append(HAnimSegment221)

HAnimJoint211.children.append(HAnimJoint220)

HAnimJoint202.children.append(HAnimJoint211)

HAnimJoint193.children.append(HAnimJoint202)

HAnimJoint179.children.append(HAnimJoint193)
HAnimJoint229 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint229.name = "r_carpometacarpal_5"
HAnimJoint229.center = [0.15,0.17,0]
HAnimSegment230 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment230.name = "r_metacarpal_5"
Transform231 = x3d.Transform()
Transform231.translation = [0.15,0.17,0]
Shape232 = x3d.Shape(USE="HAnimJointShape")

Transform231.children.append(Shape232)

HAnimSegment230.children.append(Transform231)
Shape233 = x3d.Shape()
Appearance234 = x3d.Appearance()
Material235 = x3d.Material()
Material235.emissiveColor = [1,1,1]

Appearance234.material = Material235

Shape233.appearance = Appearance234
IndexedLineSet236 = x3d.IndexedLineSet(DEF="CMC5toMCP5")
IndexedLineSet236.coordIndex = [0,1]
Coordinate237 = x3d.Coordinate()
Coordinate237.point = [(0.15, 0.17, 0),(0.2, 0.4, 0)]

IndexedLineSet236.coord = Coordinate237

Shape233.geometry = IndexedLineSet236

HAnimSegment230.children.append(Shape233)

HAnimJoint229.children.append(HAnimSegment230)
HAnimJoint238 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint238.name = "r_metacarpophalangeal_5"
HAnimJoint238.center = [0.2,0.4,0]
HAnimSegment239 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment239.name = "r_carpal_proximal_phalanx_5"
Transform240 = x3d.Transform()
Transform240.translation = [0.2,0.4,0]
Shape241 = x3d.Shape(USE="HAnimJointShape")

Transform240.children.append(Shape241)

HAnimSegment239.children.append(Transform240)
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.emissiveColor = [1,1,1]

Appearance243.material = Material244

Shape242.appearance = Appearance243
IndexedLineSet245 = x3d.IndexedLineSet(DEF="MCP5toPIP5")
IndexedLineSet245.coordIndex = [0,1]
Coordinate246 = x3d.Coordinate()
Coordinate246.point = [(0.2, 0.4, 0),(0.23, 0.63, 0)]

IndexedLineSet245.coord = Coordinate246

Shape242.geometry = IndexedLineSet245

HAnimSegment239.children.append(Shape242)

HAnimJoint238.children.append(HAnimSegment239)
HAnimJoint247 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint247.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint247.center = [0.23,0.63,0]
HAnimSegment248 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment248.name = "r_carpal_middle_phalanx_5"
Transform249 = x3d.Transform()
Transform249.translation = [0.23,0.63,0]
Shape250 = x3d.Shape(USE="HAnimJointShape")

Transform249.children.append(Shape250)

HAnimSegment248.children.append(Transform249)
Shape251 = x3d.Shape()
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.emissiveColor = [1,1,1]

Appearance252.material = Material253

Shape251.appearance = Appearance252
IndexedLineSet254 = x3d.IndexedLineSet(DEF="PIP5toDIP5")
IndexedLineSet254.coordIndex = [0,1]
Coordinate255 = x3d.Coordinate()
Coordinate255.point = [(0.23, 0.63, 0),(0.25, 0.79, 0)]

IndexedLineSet254.coord = Coordinate255

Shape251.geometry = IndexedLineSet254

HAnimSegment248.children.append(Shape251)

HAnimJoint247.children.append(HAnimSegment248)
HAnimJoint256 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint256.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint256.center = [0.25,0.79,0]
HAnimSegment257 = x3d.HAnimSegment(DEF="hanim_r_carpal_distal_phalanx_5")
HAnimSegment257.name = "r_carpal_distal_phalanx_5"
Transform258 = x3d.Transform()
Transform258.translation = [0.25,0.79,0]
Shape259 = x3d.Shape(USE="HAnimJointShape")

Transform258.children.append(Shape259)

HAnimSegment257.children.append(Transform258)
Shape260 = x3d.Shape()
Appearance261 = x3d.Appearance()
Material262 = x3d.Material()
Material262.emissiveColor = [1,1,1]

Appearance261.material = Material262

Shape260.appearance = Appearance261
IndexedLineSet263 = x3d.IndexedLineSet(DEF="fingertip_r_carpal_distal_interphalangeal_5")
IndexedLineSet263.coordIndex = [0,1]
Coordinate264 = x3d.Coordinate()
Coordinate264.point = [(0.25, 0.79, 0),(0.26, 0.85, 0)]

IndexedLineSet263.coord = Coordinate264

Shape260.geometry = IndexedLineSet263

HAnimSegment257.children.append(Shape260)

HAnimJoint256.children.append(HAnimSegment257)

HAnimJoint247.children.append(HAnimJoint256)

HAnimJoint238.children.append(HAnimJoint247)

HAnimJoint229.children.append(HAnimJoint238)

HAnimJoint179.children.append(HAnimJoint229)

HAnimJoint28.children.append(HAnimJoint179)

HAnimJoint27.children.append(HAnimJoint28)

HAnimHumanoid24.skeleton.append(HAnimJoint27)
HAnimJoint265 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid24.joints.append(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid24.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid24.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid24.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid24.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint(USE="hanim_r_midcarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_r_midcarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_r_midcarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_r_midcarpal_4_5")

HAnimHumanoid24.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid24.joints.append(HAnimJoint289)

Scene22.children.append(HAnimHumanoid24)

X3D0.Scene = Scene22
f = open("../data/HAnimModelHandRight.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelHandRight.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelHandRight.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

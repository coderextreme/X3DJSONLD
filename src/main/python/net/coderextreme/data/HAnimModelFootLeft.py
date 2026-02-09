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
meta3.content = "HAnimModelFootLeft.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Left foot, using high-fidelity definitions for HAnim version 2.0"

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
meta7.content = "Mon, 09 Feb 2026 07:11:17 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "warning"
meta8.content = "not yet to scale"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "warning"
meta9.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "info"
meta10.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.web3d.org/documents/specifications/19774/V2.0"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "subject"
meta17.content = "X3D HAnim humanoid animation"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "TODO"
meta18.content = "Integrate and confirm Segment/Joint names, Viewpoints."

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "identifier"
meta19.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
WorldInfo21 = x3d.WorldInfo()
WorldInfo21.title = "HAnimModelFootLeft.x3d"

Scene20.children.append(WorldInfo21)
HAnimHumanoid22 = x3d.HAnimHumanoid(DEF="hanim_Foot_Left")
HAnimHumanoid22.name = "Foot_Left"
HAnimHumanoid22.version = "2.0"
HAnimHumanoid22.loa = 4
MetadataSet23 = x3d.MetadataSet()
MetadataSet23.name = "HAnimHumanoid.info"
MetadataSet23.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString24 = x3d.MetadataString()
MetadataString24.name = "authorName"

if MetadataSet23.value is None:
    MetadataSet23.value = []
MetadataSet23.value.append(MetadataString24)

HAnimHumanoid22.metadata = MetadataSet23
HAnimJoint25 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint25.name = "humanoid_root"
HAnimJoint26 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint26.description = "connection joint of foot to leg above"
HAnimJoint26.name = "l_talocrural"
HAnimSegment27 = x3d.HAnimSegment(DEF="hanim_l_talus")
HAnimSegment27.name = "l_talus"
Transform28 = x3d.Transform()
Shape29 = x3d.Shape(DEF="HAnimJointShape")
Appearance30 = x3d.Appearance(DEF="HAnimJointAppearance")
Material31 = x3d.Material()
Material31.diffuseColor = [0,0,1]

Appearance30.material = Material31

Shape29.appearance = Appearance30
Sphere32 = x3d.Sphere()
Sphere32.radius = 0.025

Shape29.geometry = Sphere32

Transform28.children.append(Shape29)

HAnimSegment27.children.append(Transform28)
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.emissiveColor = [1,1,1]

Appearance34.material = Material35

Shape33.appearance = Appearance34
IndexedLineSet36 = x3d.IndexedLineSet(DEF="TCtoTCN")
IndexedLineSet36.coordIndex = [0,1]
Coordinate37 = x3d.Coordinate()
Coordinate37.point = [(0, 0, 0),(0, -0.3, 0)]

IndexedLineSet36.coord = Coordinate37

Shape33.geometry = IndexedLineSet36

HAnimSegment27.children.append(Shape33)
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.emissiveColor = [1,1,1]

Appearance39.material = Material40

Shape38.appearance = Appearance39
IndexedLineSet41 = x3d.IndexedLineSet(DEF="TCtoCC")
IndexedLineSet41.coordIndex = [0,1]
Coordinate42 = x3d.Coordinate()
Coordinate42.point = [(0, 0, 0),(0.2, 0.3, 0)]

IndexedLineSet41.coord = Coordinate42

Shape38.geometry = IndexedLineSet41

HAnimSegment27.children.append(Shape38)

HAnimJoint26.children.append(HAnimSegment27)
HAnimJoint43 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint43.name = "l_talocalcaneonavicular"
HAnimJoint43.center = [0,-0.3,0]
HAnimSegment44 = x3d.HAnimSegment(DEF="hanim_l_navicular")
HAnimSegment44.name = "l_navicular"
Transform45 = x3d.Transform()
Transform45.translation = [0,-0.3,0]
Shape46 = x3d.Shape(USE="HAnimJointShape")

Transform45.children.append(Shape46)

HAnimSegment44.children.append(Transform45)
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.emissiveColor = [1,1,1]

Appearance48.material = Material49

Shape47.appearance = Appearance48
IndexedLineSet50 = x3d.IndexedLineSet(DEF="TCNtoCN1")
IndexedLineSet50.coordIndex = [0,1]
Coordinate51 = x3d.Coordinate()
Coordinate51.point = [(0, -0.3, 0),(-0.1, -0.45, 0)]

IndexedLineSet50.coord = Coordinate51

Shape47.geometry = IndexedLineSet50

HAnimSegment44.children.append(Shape47)
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.emissiveColor = [1,1,1]

Appearance53.material = Material54

Shape52.appearance = Appearance53
IndexedLineSet55 = x3d.IndexedLineSet(DEF="TCNtoCN2")
IndexedLineSet55.coordIndex = [0,1]
Coordinate56 = x3d.Coordinate()
Coordinate56.point = [(0, -0.3, 0),(0, -0.45, 0)]

IndexedLineSet55.coord = Coordinate56

Shape52.geometry = IndexedLineSet55

HAnimSegment44.children.append(Shape52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.emissiveColor = [1,1,1]

Appearance58.material = Material59

Shape57.appearance = Appearance58
IndexedLineSet60 = x3d.IndexedLineSet(DEF="TCNtoCN3")
IndexedLineSet60.coordIndex = [0,1]
Coordinate61 = x3d.Coordinate()
Coordinate61.point = [(0, -0.3, 0),(0.1, -0.4, 0)]

IndexedLineSet60.coord = Coordinate61

Shape57.geometry = IndexedLineSet60

HAnimSegment44.children.append(Shape57)

HAnimJoint43.children.append(HAnimSegment44)
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint62.name = "l_cuneonavicular_1"
HAnimJoint62.center = [-0.1,-0.45,0]
HAnimSegment63 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_1")
HAnimSegment63.name = "l_cuneiform_1"
Transform64 = x3d.Transform()
Transform64.translation = [-0.1,-0.45,0]
Shape65 = x3d.Shape(USE="HAnimJointShape")

Transform64.children.append(Shape65)

HAnimSegment63.children.append(Transform64)
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.emissiveColor = [1,1,1]

Appearance67.material = Material68

Shape66.appearance = Appearance67
IndexedLineSet69 = x3d.IndexedLineSet(DEF="CN1toTMT1")
IndexedLineSet69.coordIndex = [0,1]
Coordinate70 = x3d.Coordinate()
Coordinate70.point = [(-0.1, -0.45, 0),(-0.1, -0.6, 0)]

IndexedLineSet69.coord = Coordinate70

Shape66.geometry = IndexedLineSet69

HAnimSegment63.children.append(Shape66)

HAnimJoint62.children.append(HAnimSegment63)
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint71.name = "l_tarsometatarsal_1"
HAnimJoint71.center = [-0.1,-0.6,0]
HAnimSegment72 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_1")
HAnimSegment72.name = "l_metatarsal_1"
Transform73 = x3d.Transform()
Transform73.translation = [-0.1,-0.6,0]
Shape74 = x3d.Shape(USE="HAnimJointShape")

Transform73.children.append(Shape74)

HAnimSegment72.children.append(Transform73)
Shape75 = x3d.Shape()
Appearance76 = x3d.Appearance()
Material77 = x3d.Material()
Material77.emissiveColor = [1,1,1]

Appearance76.material = Material77

Shape75.appearance = Appearance76
IndexedLineSet78 = x3d.IndexedLineSet(DEF="TMT1toMTP1")
IndexedLineSet78.coordIndex = [0,1]
Coordinate79 = x3d.Coordinate()
Coordinate79.point = [(-0.1, -0.6, 0),(-0.1, -0.9, 0)]

IndexedLineSet78.coord = Coordinate79

Shape75.geometry = IndexedLineSet78

HAnimSegment72.children.append(Shape75)

HAnimJoint71.children.append(HAnimSegment72)
HAnimJoint80 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint80.name = "l_metatarsophalangeal_1"
HAnimJoint80.center = [-0.1,-0.9,0]
HAnimSegment81 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimSegment81.name = "l_tarsal_proximal_phalanx_1"
Transform82 = x3d.Transform()
Transform82.translation = [-0.1,-0.9,0]
Shape83 = x3d.Shape(USE="HAnimJointShape")

Transform82.children.append(Shape83)

HAnimSegment81.children.append(Transform82)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.emissiveColor = [1,1,1]

Appearance85.material = Material86

Shape84.appearance = Appearance85
IndexedLineSet87 = x3d.IndexedLineSet(DEF="MTP1toIP1")
IndexedLineSet87.coordIndex = [0,1]
Coordinate88 = x3d.Coordinate()
Coordinate88.point = [(-0.1, -0.9, 0),(-0.1, -1.05, 0)]

IndexedLineSet87.coord = Coordinate88

Shape84.geometry = IndexedLineSet87

HAnimSegment81.children.append(Shape84)

HAnimJoint80.children.append(HAnimSegment81)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint89.name = "l_tarsal_interphalangeal_1"
HAnimJoint89.center = [-0.1,-1.05,0]
HAnimSegment90 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_1")
HAnimSegment90.name = "l_tarsal_distal_phalanx_1"
Transform91 = x3d.Transform()
Transform91.translation = [-0.1,-1.05,0]
Shape92 = x3d.Shape(USE="HAnimJointShape")

Transform91.children.append(Shape92)

HAnimSegment90.children.append(Transform91)
Shape93 = x3d.Shape()
Appearance94 = x3d.Appearance()
Material95 = x3d.Material()
Material95.emissiveColor = [1,1,1]

Appearance94.material = Material95

Shape93.appearance = Appearance94
IndexedLineSet96 = x3d.IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_1")
IndexedLineSet96.coordIndex = [0,1]
Coordinate97 = x3d.Coordinate()
Coordinate97.point = [(-0.1, -1.05, 0),(-0.1, -1.1, 0)]

IndexedLineSet96.coord = Coordinate97

Shape93.geometry = IndexedLineSet96

HAnimSegment90.children.append(Shape93)

HAnimJoint89.children.append(HAnimSegment90)

HAnimJoint80.children.append(HAnimJoint89)

HAnimJoint71.children.append(HAnimJoint80)

HAnimJoint62.children.append(HAnimJoint71)

HAnimJoint43.children.append(HAnimJoint62)
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint98.name = "l_cuneonavicular_2"
HAnimJoint98.center = [0,-0.45,0]
HAnimSegment99 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_2")
HAnimSegment99.name = "l_cuneiform_2"
Transform100 = x3d.Transform()
Transform100.translation = [0,-0.45,0]
Shape101 = x3d.Shape(USE="HAnimJointShape")

Transform100.children.append(Shape101)

HAnimSegment99.children.append(Transform100)
Shape102 = x3d.Shape()
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.emissiveColor = [1,1,1]

Appearance103.material = Material104

Shape102.appearance = Appearance103
IndexedLineSet105 = x3d.IndexedLineSet(DEF="CN2toTMT2")
IndexedLineSet105.coordIndex = [0,1]
Coordinate106 = x3d.Coordinate()
Coordinate106.point = [(0, -0.45, 0),(0.05, -0.6, 0)]

IndexedLineSet105.coord = Coordinate106

Shape102.geometry = IndexedLineSet105

HAnimSegment99.children.append(Shape102)

HAnimJoint98.children.append(HAnimSegment99)
HAnimJoint107 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint107.name = "l_tarsometatarsal_2"
HAnimJoint107.center = [0.05,-0.6,0]
HAnimSegment108 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment108.name = "l_metatarsal_2"
Transform109 = x3d.Transform()
Transform109.translation = [0.05,-0.6,0]
Shape110 = x3d.Shape(USE="HAnimJointShape")

Transform109.children.append(Shape110)

HAnimSegment108.children.append(Transform109)
Shape111 = x3d.Shape()
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.emissiveColor = [1,1,1]

Appearance112.material = Material113

Shape111.appearance = Appearance112
IndexedLineSet114 = x3d.IndexedLineSet(DEF="TMT2toMTP2")
IndexedLineSet114.coordIndex = [0,1]
Coordinate115 = x3d.Coordinate()
Coordinate115.point = [(0.05, -0.6, 0),(0.05, -0.9, 0)]

IndexedLineSet114.coord = Coordinate115

Shape111.geometry = IndexedLineSet114

HAnimSegment108.children.append(Shape111)

HAnimJoint107.children.append(HAnimSegment108)
HAnimJoint116 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint116.name = "l_metatarsophalangeal_2"
HAnimJoint116.center = [0.05,-0.9,0]
HAnimSegment117 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment117.name = "l_tarsal_proximal_phalanx_2"
Transform118 = x3d.Transform()
Transform118.translation = [0.05,-0.9,0]
Shape119 = x3d.Shape(USE="HAnimJointShape")

Transform118.children.append(Shape119)

HAnimSegment117.children.append(Transform118)
Shape120 = x3d.Shape()
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.emissiveColor = [1,1,1]

Appearance121.material = Material122

Shape120.appearance = Appearance121
IndexedLineSet123 = x3d.IndexedLineSet(DEF="MTP2toPIP2")
IndexedLineSet123.coordIndex = [0,1]
Coordinate124 = x3d.Coordinate()
Coordinate124.point = [(0.05, -0.9, 0),(0.05, -1.05, 0)]

IndexedLineSet123.coord = Coordinate124

Shape120.geometry = IndexedLineSet123

HAnimSegment117.children.append(Shape120)

HAnimJoint116.children.append(HAnimSegment117)
HAnimJoint125 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint125.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint125.center = [0.05,-1.05,0]
HAnimSegment126 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimSegment126.name = "l_tarsal_middle_phalanx_2"
Transform127 = x3d.Transform()
Transform127.translation = [0.05,-1.05,0]
Shape128 = x3d.Shape(USE="HAnimJointShape")

Transform127.children.append(Shape128)

HAnimSegment126.children.append(Transform127)
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.emissiveColor = [1,1,1]

Appearance130.material = Material131

Shape129.appearance = Appearance130
IndexedLineSet132 = x3d.IndexedLineSet(DEF="PIP2toDIP2")
IndexedLineSet132.coordIndex = [0,1]
Coordinate133 = x3d.Coordinate()
Coordinate133.point = [(0.05, -1.05, 0),(0.05, -1.12, 0)]

IndexedLineSet132.coord = Coordinate133

Shape129.geometry = IndexedLineSet132

HAnimSegment126.children.append(Shape129)

HAnimJoint125.children.append(HAnimSegment126)
HAnimJoint134 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint134.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint134.center = [0.05,-1.12,0]
HAnimSegment135 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_2")
HAnimSegment135.name = "l_tarsal_distal_phalanx_2"
Transform136 = x3d.Transform()
Transform136.translation = [0.05,-1.12,0]
Shape137 = x3d.Shape(USE="HAnimJointShape")

Transform136.children.append(Shape137)

HAnimSegment135.children.append(Transform136)
Shape138 = x3d.Shape()
Appearance139 = x3d.Appearance()
Material140 = x3d.Material()
Material140.emissiveColor = [1,1,1]

Appearance139.material = Material140

Shape138.appearance = Appearance139
IndexedLineSet141 = x3d.IndexedLineSet(DEF="tiptoe_l_tarsal_distal_phalanx_2")
IndexedLineSet141.coordIndex = [0,1]
Coordinate142 = x3d.Coordinate()
Coordinate142.point = [(0.05, -1.12, 0),(0.05, -1.16, 0)]

IndexedLineSet141.coord = Coordinate142

Shape138.geometry = IndexedLineSet141

HAnimSegment135.children.append(Shape138)

HAnimJoint134.children.append(HAnimSegment135)

HAnimJoint125.children.append(HAnimJoint134)

HAnimJoint116.children.append(HAnimJoint125)

HAnimJoint107.children.append(HAnimJoint116)

HAnimJoint98.children.append(HAnimJoint107)

HAnimJoint43.children.append(HAnimJoint98)
HAnimJoint143 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint143.name = "l_cuneonavicular_3"
HAnimJoint143.center = [0.1,-0.4,0]
HAnimSegment144 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_3")
HAnimSegment144.name = "l_cuneiform_3"
Transform145 = x3d.Transform()
Transform145.translation = [0.1,-0.4,0]
Shape146 = x3d.Shape(USE="HAnimJointShape")

Transform145.children.append(Shape146)

HAnimSegment144.children.append(Transform145)
Shape147 = x3d.Shape()
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.emissiveColor = [1,1,1]

Appearance148.material = Material149

Shape147.appearance = Appearance148
IndexedLineSet150 = x3d.IndexedLineSet(DEF="CN3toTMT3")
IndexedLineSet150.coordIndex = [0,1]
Coordinate151 = x3d.Coordinate()
Coordinate151.point = [(0.1, -0.4, 0),(0.15, -0.6, 0)]

IndexedLineSet150.coord = Coordinate151

Shape147.geometry = IndexedLineSet150

HAnimSegment144.children.append(Shape147)

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint152 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3")
HAnimJoint152.name = "l_tarsometatarsal_3"
HAnimJoint152.center = [0.15,-0.6,0]
HAnimSegment153 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_3")
HAnimSegment153.name = "l_metatarsal_3"
Transform154 = x3d.Transform()
Transform154.translation = [0.15,-0.6,0]
Shape155 = x3d.Shape(USE="HAnimJointShape")

Transform154.children.append(Shape155)

HAnimSegment153.children.append(Transform154)
Shape156 = x3d.Shape()
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()
Material158.emissiveColor = [1,1,1]

Appearance157.material = Material158

Shape156.appearance = Appearance157
IndexedLineSet159 = x3d.IndexedLineSet(DEF="TMT3toMTP3")
IndexedLineSet159.coordIndex = [0,1]
Coordinate160 = x3d.Coordinate()
Coordinate160.point = [(0.15, -0.6, 0),(0.15, -0.9, 0)]

IndexedLineSet159.coord = Coordinate160

Shape156.geometry = IndexedLineSet159

HAnimSegment153.children.append(Shape156)

HAnimJoint152.children.append(HAnimSegment153)
HAnimJoint161 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint161.name = "l_metatarsophalangeal_3"
HAnimJoint161.center = [0.15,-0.9,0]
HAnimSegment162 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimSegment162.name = "l_tarsal_proximal_phalanx_3"
Transform163 = x3d.Transform()
Transform163.translation = [0.15,-0.9,0]
Shape164 = x3d.Shape(USE="HAnimJointShape")

Transform163.children.append(Shape164)

HAnimSegment162.children.append(Transform163)
Shape165 = x3d.Shape()
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.emissiveColor = [1,1,1]

Appearance166.material = Material167

Shape165.appearance = Appearance166
IndexedLineSet168 = x3d.IndexedLineSet(DEF="MTP3toPIP3")
IndexedLineSet168.coordIndex = [0,1]
Coordinate169 = x3d.Coordinate()
Coordinate169.point = [(0.15, -0.9, 0),(0.15, -1.05, 0)]

IndexedLineSet168.coord = Coordinate169

Shape165.geometry = IndexedLineSet168

HAnimSegment162.children.append(Shape165)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint170 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint170.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint170.center = [0.15,-1.05,0]
HAnimSegment171 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimSegment171.name = "l_tarsal_middle_phalanx_3"
Transform172 = x3d.Transform()
Transform172.translation = [0.15,-1.05,0]
Shape173 = x3d.Shape(USE="HAnimJointShape")

Transform172.children.append(Shape173)

HAnimSegment171.children.append(Transform172)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.emissiveColor = [1,1,1]

Appearance175.material = Material176

Shape174.appearance = Appearance175
IndexedLineSet177 = x3d.IndexedLineSet(DEF="PIP3toDIP3")
IndexedLineSet177.coordIndex = [0,1]
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(0.15, -1.05, 0),(0.15, -1.13, 0)]

IndexedLineSet177.coord = Coordinate178

Shape174.geometry = IndexedLineSet177

HAnimSegment171.children.append(Shape174)

HAnimJoint170.children.append(HAnimSegment171)
HAnimJoint179 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint179.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint179.center = [0.15,-1.13,0]
HAnimSegment180 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_3")
HAnimSegment180.name = "l_tarsal_distal_phalanx_3"
Transform181 = x3d.Transform()
Transform181.translation = [0.15,-1.13,0]
Shape182 = x3d.Shape(USE="HAnimJointShape")

Transform181.children.append(Shape182)

HAnimSegment180.children.append(Transform181)
Shape183 = x3d.Shape()
Appearance184 = x3d.Appearance()
Material185 = x3d.Material()
Material185.emissiveColor = [1,1,1]

Appearance184.material = Material185

Shape183.appearance = Appearance184
IndexedLineSet186 = x3d.IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_3")
IndexedLineSet186.coordIndex = [0,1]
Coordinate187 = x3d.Coordinate()
Coordinate187.point = [(0.15, -1.13, 0),(0.15, -1.16, 0)]

IndexedLineSet186.coord = Coordinate187

Shape183.geometry = IndexedLineSet186

HAnimSegment180.children.append(Shape183)

HAnimJoint179.children.append(HAnimSegment180)

HAnimJoint170.children.append(HAnimJoint179)

HAnimJoint161.children.append(HAnimJoint170)

HAnimJoint152.children.append(HAnimJoint161)

HAnimJoint143.children.append(HAnimJoint152)

HAnimJoint43.children.append(HAnimJoint143)

HAnimJoint26.children.append(HAnimJoint43)
HAnimJoint188 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint188.name = "l_calcaneocuboid"
HAnimJoint188.center = [0.2,0.3,0]
HAnimSegment189 = x3d.HAnimSegment(DEF="hanim_l_calcaneus")
HAnimSegment189.name = "l_calcaneus"
Transform190 = x3d.Transform()
Transform190.translation = [0.2,0.3,0]
Shape191 = x3d.Shape(USE="HAnimJointShape")

Transform190.children.append(Shape191)

HAnimSegment189.children.append(Transform190)
Shape192 = x3d.Shape()
Appearance193 = x3d.Appearance()
Material194 = x3d.Material()
Material194.emissiveColor = [1,1,1]

Appearance193.material = Material194

Shape192.appearance = Appearance193
IndexedLineSet195 = x3d.IndexedLineSet(DEF="CCtoTT")
IndexedLineSet195.coordIndex = [0,1]
Coordinate196 = x3d.Coordinate()
Coordinate196.point = [(0.2, 0.3, 0),(0.21, -0.3, 0)]

IndexedLineSet195.coord = Coordinate196

Shape192.geometry = IndexedLineSet195

HAnimSegment189.children.append(Shape192)

HAnimJoint188.children.append(HAnimSegment189)
HAnimJoint197 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint197.name = "l_transversetarsal"
HAnimJoint197.center = [0.21,-0.3,0]
HAnimSegment198 = x3d.HAnimSegment(DEF="hanim_l_cuboid")
HAnimSegment198.name = "l_cuboid"
Transform199 = x3d.Transform()
Transform199.translation = [0.21,-0.3,0]
Shape200 = x3d.Shape(USE="HAnimJointShape")

Transform199.children.append(Shape200)

HAnimSegment198.children.append(Transform199)
Shape201 = x3d.Shape()
Appearance202 = x3d.Appearance()
Material203 = x3d.Material()
Material203.emissiveColor = [1,1,1]

Appearance202.material = Material203

Shape201.appearance = Appearance202
IndexedLineSet204 = x3d.IndexedLineSet(DEF="TTtoTMT4")
IndexedLineSet204.coordIndex = [0,1]
Coordinate205 = x3d.Coordinate()
Coordinate205.point = [(0.21, -0.3, 0),(0.25, -0.58, 0)]

IndexedLineSet204.coord = Coordinate205

Shape201.geometry = IndexedLineSet204

HAnimSegment198.children.append(Shape201)
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.emissiveColor = [1,1,1]

Appearance207.material = Material208

Shape206.appearance = Appearance207
IndexedLineSet209 = x3d.IndexedLineSet(DEF="TTtoTMT5")
IndexedLineSet209.coordIndex = [0,1]
Coordinate210 = x3d.Coordinate()
Coordinate210.point = [(0.21, -0.3, 0),(0.33, -0.52, 0)]

IndexedLineSet209.coord = Coordinate210

Shape206.geometry = IndexedLineSet209

HAnimSegment198.children.append(Shape206)

HAnimJoint197.children.append(HAnimSegment198)
HAnimJoint211 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint211.name = "l_tarsometatarsal_4"
HAnimJoint211.center = [0.25,-0.58,0]
HAnimSegment212 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_4")
HAnimSegment212.name = "l_metatarsal_4"
Transform213 = x3d.Transform()
Transform213.translation = [0.25,-0.58,0]
Shape214 = x3d.Shape(USE="HAnimJointShape")

Transform213.children.append(Shape214)

HAnimSegment212.children.append(Transform213)
Shape215 = x3d.Shape()
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.emissiveColor = [1,1,1]

Appearance216.material = Material217

Shape215.appearance = Appearance216
IndexedLineSet218 = x3d.IndexedLineSet(DEF="TMT4toMTP4")
IndexedLineSet218.coordIndex = [0,1]
Coordinate219 = x3d.Coordinate()
Coordinate219.point = [(0.25, -0.58, 0),(0.25, -0.87, 0)]

IndexedLineSet218.coord = Coordinate219

Shape215.geometry = IndexedLineSet218

HAnimSegment212.children.append(Shape215)

HAnimJoint211.children.append(HAnimSegment212)
HAnimJoint220 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint220.name = "l_metatarsophalangeal_4"
HAnimJoint220.center = [0.25,-0.87,0]
HAnimSegment221 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimSegment221.name = "l_tarsal_proximal_phalanx_4"
Transform222 = x3d.Transform()
Transform222.translation = [0.25,-0.87,0]
Shape223 = x3d.Shape(USE="HAnimJointShape")

Transform222.children.append(Shape223)

HAnimSegment221.children.append(Transform222)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.emissiveColor = [1,1,1]

Appearance225.material = Material226

Shape224.appearance = Appearance225
IndexedLineSet227 = x3d.IndexedLineSet(DEF="MTP4toPIP4")
IndexedLineSet227.coordIndex = [0,1]
Coordinate228 = x3d.Coordinate()
Coordinate228.point = [(0.25, -0.87, 0),(0.25, -1, 0)]

IndexedLineSet227.coord = Coordinate228

Shape224.geometry = IndexedLineSet227

HAnimSegment221.children.append(Shape224)

HAnimJoint220.children.append(HAnimSegment221)
HAnimJoint229 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint229.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint229.center = [0.25,-1,0]
HAnimSegment230 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimSegment230.name = "l_tarsal_middle_phalanx_4"
Transform231 = x3d.Transform()
Transform231.translation = [0.25,-1,0]
Shape232 = x3d.Shape(USE="HAnimJointShape")

Transform231.children.append(Shape232)

HAnimSegment230.children.append(Transform231)
Shape233 = x3d.Shape()
Appearance234 = x3d.Appearance()
Material235 = x3d.Material()
Material235.emissiveColor = [1,1,1]

Appearance234.material = Material235

Shape233.appearance = Appearance234
IndexedLineSet236 = x3d.IndexedLineSet(DEF="PIP4toDIP4")
IndexedLineSet236.coordIndex = [0,1]
Coordinate237 = x3d.Coordinate()
Coordinate237.point = [(0.25, -1, 0),(0.25, -1.1, 0)]

IndexedLineSet236.coord = Coordinate237

Shape233.geometry = IndexedLineSet236

HAnimSegment230.children.append(Shape233)

HAnimJoint229.children.append(HAnimSegment230)
HAnimJoint238 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint238.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint238.center = [0.25,-1.1,0]
HAnimSegment239 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_4")
HAnimSegment239.name = "l_tarsal_distal_phalanx_4"
Transform240 = x3d.Transform()
Transform240.translation = [0.25,-1.1,0]
Shape241 = x3d.Shape(USE="HAnimJointShape")

Transform240.children.append(Shape241)

HAnimSegment239.children.append(Transform240)
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.emissiveColor = [1,1,1]

Appearance243.material = Material244

Shape242.appearance = Appearance243
IndexedLineSet245 = x3d.IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_4")
IndexedLineSet245.coordIndex = [0,1]
Coordinate246 = x3d.Coordinate()
Coordinate246.point = [(0.25, -1.1, 0),(0.25, -1.15, 0)]

IndexedLineSet245.coord = Coordinate246

Shape242.geometry = IndexedLineSet245

HAnimSegment239.children.append(Shape242)

HAnimJoint238.children.append(HAnimSegment239)

HAnimJoint229.children.append(HAnimJoint238)

HAnimJoint220.children.append(HAnimJoint229)

HAnimJoint211.children.append(HAnimJoint220)

HAnimJoint197.children.append(HAnimJoint211)
HAnimJoint247 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint247.name = "l_tarsometatarsal_5"
HAnimJoint247.center = [0.33,-0.52,0]
HAnimSegment248 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_5")
HAnimSegment248.name = "l_metatarsal_5"
Transform249 = x3d.Transform()
Transform249.translation = [0.33,-0.52,0]
Shape250 = x3d.Shape(USE="HAnimJointShape")

Transform249.children.append(Shape250)

HAnimSegment248.children.append(Transform249)
Shape251 = x3d.Shape()
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.emissiveColor = [1,1,1]

Appearance252.material = Material253

Shape251.appearance = Appearance252
IndexedLineSet254 = x3d.IndexedLineSet(DEF="TMT5toMTP5")
IndexedLineSet254.coordIndex = [0,1]
Coordinate255 = x3d.Coordinate()
Coordinate255.point = [(0.33, -0.52, 0),(0.34, -0.8, 0)]

IndexedLineSet254.coord = Coordinate255

Shape251.geometry = IndexedLineSet254

HAnimSegment248.children.append(Shape251)

HAnimJoint247.children.append(HAnimSegment248)
HAnimJoint256 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint256.name = "l_metatarsophalangeal_5"
HAnimJoint256.center = [0.34,-0.8,0]
HAnimSegment257 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimSegment257.name = "l_tarsal_proximal_phalanx_5"
Transform258 = x3d.Transform()
Transform258.translation = [0.34,-0.8,0]
Shape259 = x3d.Shape(USE="HAnimJointShape")

Transform258.children.append(Shape259)

HAnimSegment257.children.append(Transform258)
Shape260 = x3d.Shape()
Appearance261 = x3d.Appearance()
Material262 = x3d.Material()
Material262.emissiveColor = [1,1,1]

Appearance261.material = Material262

Shape260.appearance = Appearance261
IndexedLineSet263 = x3d.IndexedLineSet(DEF="MTP5toPIP5")
IndexedLineSet263.coordIndex = [0,1]
Coordinate264 = x3d.Coordinate()
Coordinate264.point = [(0.34, -0.8, 0),(0.34, -0.95, 0)]

IndexedLineSet263.coord = Coordinate264

Shape260.geometry = IndexedLineSet263

HAnimSegment257.children.append(Shape260)

HAnimJoint256.children.append(HAnimSegment257)
HAnimJoint265 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint265.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint265.center = [0.34,-0.95,0]
HAnimSegment266 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimSegment266.name = "l_tarsal_middle_phalanx_5"
Transform267 = x3d.Transform()
Transform267.translation = [0.34,-0.95,0]
Shape268 = x3d.Shape(USE="HAnimJointShape")

Transform267.children.append(Shape268)

HAnimSegment266.children.append(Transform267)
Shape269 = x3d.Shape()
Appearance270 = x3d.Appearance()
Material271 = x3d.Material()
Material271.emissiveColor = [1,1,1]

Appearance270.material = Material271

Shape269.appearance = Appearance270
IndexedLineSet272 = x3d.IndexedLineSet(DEF="PIP5toDIP5")
IndexedLineSet272.coordIndex = [0,1]
Coordinate273 = x3d.Coordinate()
Coordinate273.point = [(0.34, -0.95, 0),(0.34, -1.05, 0)]

IndexedLineSet272.coord = Coordinate273

Shape269.geometry = IndexedLineSet272

HAnimSegment266.children.append(Shape269)

HAnimJoint265.children.append(HAnimSegment266)
HAnimJoint274 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint274.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint274.center = [0.34,-1.05,0]
HAnimSegment275 = x3d.HAnimSegment(DEF="hanim_l_tarsal_distal_phalanx_5")
HAnimSegment275.name = "l_tarsal_distal_phalanx_5"
Transform276 = x3d.Transform()
Transform276.translation = [0.34,-1.05,0]
Shape277 = x3d.Shape(USE="HAnimJointShape")

Transform276.children.append(Shape277)

HAnimSegment275.children.append(Transform276)
Shape278 = x3d.Shape()
Appearance279 = x3d.Appearance()
Material280 = x3d.Material()
Material280.emissiveColor = [1,1,1]

Appearance279.material = Material280

Shape278.appearance = Appearance279
IndexedLineSet281 = x3d.IndexedLineSet(DEF="tiptoe_l_tarsal_distal_interphalangeal_5")
IndexedLineSet281.coordIndex = [0,1]
Coordinate282 = x3d.Coordinate()
Coordinate282.point = [(0.34, -1.05, 0),(0.34, -1.08, 0)]

IndexedLineSet281.coord = Coordinate282

Shape278.geometry = IndexedLineSet281

HAnimSegment275.children.append(Shape278)

HAnimJoint274.children.append(HAnimSegment275)

HAnimJoint265.children.append(HAnimJoint274)

HAnimJoint256.children.append(HAnimJoint265)

HAnimJoint247.children.append(HAnimJoint256)

HAnimJoint197.children.append(HAnimJoint247)

HAnimJoint188.children.append(HAnimJoint197)

HAnimJoint26.children.append(HAnimJoint188)

HAnimJoint25.children.append(HAnimJoint26)

HAnimHumanoid22.skeleton.append(HAnimJoint25)
HAnimJoint283 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid22.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint(USE="hanim_l_calcaneocuboid")

HAnimHumanoid22.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_1")

HAnimHumanoid22.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_2")

HAnimHumanoid22.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_3")

HAnimHumanoid22.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_1")

HAnimHumanoid22.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid22.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_3")

HAnimHumanoid22.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_4")

HAnimHumanoid22.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_5")

HAnimHumanoid22.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint(USE="hanim_l_talocalcaneonavicular")

HAnimHumanoid22.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid22.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid22.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid22.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid22.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid22.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid22.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid22.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid22.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid22.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid22.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_1")

HAnimHumanoid22.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid22.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_3")

HAnimHumanoid22.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_4")

HAnimHumanoid22.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_5")

HAnimHumanoid22.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint(USE="hanim_l_transversetarsal")

HAnimHumanoid22.joints.append(HAnimJoint309)

Scene20.children.append(HAnimHumanoid22)

X3D0.Scene = Scene20
f = open("../data/HAnimModelFootLeft.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelFootLeft.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelFootLeft.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

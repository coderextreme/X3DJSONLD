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
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"

head1.children.append(meta21)

X3D0.head = head1
Scene22 = x3d.Scene()
WorldInfo23 = x3d.WorldInfo()
WorldInfo23.title = "HAnimModelHandLeft.x3d"

Scene22.children.append(WorldInfo23)
HAnimHumanoid24 = x3d.HAnimHumanoid(DEF="hanim_Hand_Left")
HAnimHumanoid24.name = "Hand_Left"
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
HAnimJoint28 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint28.description = "connection joint of hand to leg above"
HAnimJoint28.name = "l_radiocarpal"
HAnimSegment29 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment29.name = "l_carpal"
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
Coordinate39.point = [(0, 0, 0),(0.1, 0.1, 0)]

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
Coordinate49.point = [(0, 0, 0),(-0.1, 0.1, 0)]

IndexedLineSet48.coord = Coordinate49

Shape45.geometry = IndexedLineSet48

HAnimSegment29.children.append(Shape45)

HAnimJoint28.children.append(HAnimSegment29)
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint50.name = "l_midcarpal_1"
HAnimJoint50.center = [0.14,0.09,0]
HAnimSegment51 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment51.name = "l_trapezium"
Transform52 = x3d.Transform()
Transform52.translation = [0.14,0.09,0]
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
Coordinate61.point = [(0.1, 0.1, 0),(0.2, 0.15, 0)]

IndexedLineSet60.coord = Coordinate61

Shape57.geometry = IndexedLineSet60

HAnimSegment51.children.append(Shape57)
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.emissiveColor = [1,1,1]

Appearance63.material = Material64

Shape62.appearance = Appearance63
IndexedLineSet65 = x3d.IndexedLineSet(DEF="MC1toCMC1")
IndexedLineSet65.coordIndex = [0,1]
Coordinate66 = x3d.Coordinate()
Coordinate66.point = [(0.1, 0.1, 0),(0.1, 0.2, 0)]

IndexedLineSet65.coord = Coordinate66

Shape62.geometry = IndexedLineSet65

HAnimSegment51.children.append(Shape62)

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint67 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint67.name = "l_carpometacarpal_1"
HAnimJoint67.center = [0.2,0.15,0]
HAnimSegment68 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment68.name = "l_metacarpal_1"
Transform69 = x3d.Transform()
Transform69.translation = [0.2,0.15,0]
Shape70 = x3d.Shape(USE="HAnimJointShape")

Transform69.children.append(Shape70)

HAnimSegment68.children.append(Transform69)
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.emissiveColor = [1,1,1]

Appearance72.material = Material73

Shape71.appearance = Appearance72
IndexedLineSet74 = x3d.IndexedLineSet(DEF="CMC1toMCP1")
IndexedLineSet74.coordIndex = [0,1]
Coordinate75 = x3d.Coordinate()
Coordinate75.point = [(0.2, 0.15, 0),(0.3, 0.3, 0)]

IndexedLineSet74.coord = Coordinate75

Shape71.geometry = IndexedLineSet74

HAnimSegment68.children.append(Shape71)

HAnimJoint67.children.append(HAnimSegment68)
HAnimJoint76 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint76.name = "l_metacarpophalangeal_1"
HAnimJoint76.center = [0.3,0.3,0]
HAnimSegment77 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment77.name = "l_carpal_proximal_phalanx_1"
Transform78 = x3d.Transform()
Transform78.translation = [0.3,0.3,0]
Shape79 = x3d.Shape(USE="HAnimJointShape")

Transform78.children.append(Shape79)

HAnimSegment77.children.append(Transform78)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.emissiveColor = [1,1,1]

Appearance81.material = Material82

Shape80.appearance = Appearance81
IndexedLineSet83 = x3d.IndexedLineSet(DEF="MCP11toIP1")
IndexedLineSet83.coordIndex = [0,1]
Coordinate84 = x3d.Coordinate()
Coordinate84.point = [(0.3, 0.3, 0),(0.35, 0.4, 0)]

IndexedLineSet83.coord = Coordinate84

Shape80.geometry = IndexedLineSet83

HAnimSegment77.children.append(Shape80)

HAnimJoint76.children.append(HAnimSegment77)
HAnimJoint85 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint85.name = "l_carpal_interphalangeal_1"
HAnimJoint85.center = [0.35,0.4,0]
HAnimSegment86 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_1")
HAnimSegment86.name = "l_carpal_distal_phalanx_1"
Transform87 = x3d.Transform()
Transform87.translation = [0.35,0.4,0]
Shape88 = x3d.Shape(USE="HAnimJointShape")

Transform87.children.append(Shape88)

HAnimSegment86.children.append(Transform87)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.emissiveColor = [1,1,1]

Appearance90.material = Material91

Shape89.appearance = Appearance90
IndexedLineSet92 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_interphalangeal_1")
IndexedLineSet92.coordIndex = [0,1]
Coordinate93 = x3d.Coordinate()
Coordinate93.point = [(0.35, 0.4, 0),(0.36, 0.45, 0)]

IndexedLineSet92.coord = Coordinate93

Shape89.geometry = IndexedLineSet92

HAnimSegment86.children.append(Shape89)

HAnimJoint85.children.append(HAnimSegment86)

HAnimJoint76.children.append(HAnimJoint85)

HAnimJoint67.children.append(HAnimJoint76)

HAnimJoint50.children.append(HAnimJoint67)

HAnimJoint28.children.append(HAnimJoint50)
HAnimJoint94 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint94.name = "l_midcarpal_2"
HAnimJoint94.center = [0.07,0.07,0]
HAnimSegment95 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment95.name = "l_trapezoid"
Transform96 = x3d.Transform()
Transform96.translation = [0.07,0.07,0]
Shape97 = x3d.Shape(USE="HAnimNewJointShape")

Transform96.children.append(Shape97)

HAnimSegment95.children.append(Transform96)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.emissiveColor = [1,1,1]

Appearance99.material = Material100

Shape98.appearance = Appearance99
IndexedLineSet101 = x3d.IndexedLineSet(DEF="MC2toCMC2")
IndexedLineSet101.coordIndex = [0,1]
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet101.coord = Coordinate102

Shape98.geometry = IndexedLineSet101

HAnimSegment95.children.append(Shape98)

HAnimJoint94.children.append(HAnimSegment95)
HAnimJoint103 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint103.name = "l_carpometacarpal_2"
HAnimJoint103.center = [0.1,0.2,0]
HAnimSegment104 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment104.name = "l_metacarpal_2"
Transform105 = x3d.Transform()
Transform105.translation = [0.1,0.2,0]
Shape106 = x3d.Shape(USE="HAnimJointShape")

Transform105.children.append(Shape106)

HAnimSegment104.children.append(Transform105)
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.emissiveColor = [1,1,1]

Appearance108.material = Material109

Shape107.appearance = Appearance108
IndexedLineSet110 = x3d.IndexedLineSet(DEF="CMC2toMCP2")
IndexedLineSet110.coordIndex = [0,1]
Coordinate111 = x3d.Coordinate()
Coordinate111.point = [(0.1, 0.2, 0),(0.15, 0.5, 0)]

IndexedLineSet110.coord = Coordinate111

Shape107.geometry = IndexedLineSet110

HAnimSegment104.children.append(Shape107)

HAnimJoint103.children.append(HAnimSegment104)
HAnimJoint112 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint112.name = "l_metacarpophalangeal_2"
HAnimJoint112.center = [0.15,0.5,0]
HAnimSegment113 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment113.name = "l_carpal_proximal_phalanx_2"
Transform114 = x3d.Transform()
Transform114.translation = [0.15,0.5,0]
Shape115 = x3d.Shape(USE="HAnimJointShape")

Transform114.children.append(Shape115)

HAnimSegment113.children.append(Transform114)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.emissiveColor = [1,1,1]

Appearance117.material = Material118

Shape116.appearance = Appearance117
IndexedLineSet119 = x3d.IndexedLineSet(DEF="MCP2toPIP2")
IndexedLineSet119.coordIndex = [0,1]
Coordinate120 = x3d.Coordinate()
Coordinate120.point = [(0.15, 0.5, 0),(0.2, 0.7, 0)]

IndexedLineSet119.coord = Coordinate120

Shape116.geometry = IndexedLineSet119

HAnimSegment113.children.append(Shape116)

HAnimJoint112.children.append(HAnimSegment113)
HAnimJoint121 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint121.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint121.center = [0.2,0.7,0]
HAnimSegment122 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment122.name = "l_carpal_middle_phalanx_2"
Transform123 = x3d.Transform()
Transform123.translation = [0.2,0.7,0]
Shape124 = x3d.Shape(USE="HAnimJointShape")

Transform123.children.append(Shape124)

HAnimSegment122.children.append(Transform123)
Shape125 = x3d.Shape()
Appearance126 = x3d.Appearance()
Material127 = x3d.Material()
Material127.emissiveColor = [1,1,1]

Appearance126.material = Material127

Shape125.appearance = Appearance126
IndexedLineSet128 = x3d.IndexedLineSet(DEF="PIP2toDIP2")
IndexedLineSet128.coordIndex = [0,1]
Coordinate129 = x3d.Coordinate()
Coordinate129.point = [(0.2, 0.7, 0),(0.24, 0.87, 0)]

IndexedLineSet128.coord = Coordinate129

Shape125.geometry = IndexedLineSet128

HAnimSegment122.children.append(Shape125)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint130 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint130.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint130.center = [0.24,0.87,0]
HAnimSegment131 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_2")
HAnimSegment131.name = "l_carpal_distal_phalanx_2"
Transform132 = x3d.Transform()
Transform132.translation = [0.24,0.87,0]
Shape133 = x3d.Shape(USE="HAnimJointShape")

Transform132.children.append(Shape133)

HAnimSegment131.children.append(Transform132)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.emissiveColor = [1,1,1]

Appearance135.material = Material136

Shape134.appearance = Appearance135
IndexedLineSet137 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_2")
IndexedLineSet137.coordIndex = [0,1]
Coordinate138 = x3d.Coordinate()
Coordinate138.point = [(0.24, 0.87, 0),(0.26, 0.93, 0)]

IndexedLineSet137.coord = Coordinate138

Shape134.geometry = IndexedLineSet137

HAnimSegment131.children.append(Shape134)

HAnimJoint130.children.append(HAnimSegment131)

HAnimJoint121.children.append(HAnimJoint130)

HAnimJoint112.children.append(HAnimJoint121)

HAnimJoint103.children.append(HAnimJoint112)

HAnimJoint94.children.append(HAnimJoint103)

HAnimJoint28.children.append(HAnimJoint94)
HAnimJoint139 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint139.name = "l_midcarpal_3"
HAnimJoint139.center = [0,0.07,0]
HAnimSegment140 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment140.name = "l_capitate"
Transform141 = x3d.Transform()
Transform141.translation = [0,0.07,0]
Shape142 = x3d.Shape(USE="HAnimNewJointShape")

Transform141.children.append(Shape142)

HAnimSegment140.children.append(Transform141)
Shape143 = x3d.Shape()
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.emissiveColor = [1,1,1]

Appearance144.material = Material145

Shape143.appearance = Appearance144
IndexedLineSet146 = x3d.IndexedLineSet(DEF="MC3toCMC3")
IndexedLineSet146.coordIndex = [0,1]
Coordinate147 = x3d.Coordinate()
Coordinate147.point = [(0, 0.07, 0),(0, 0.2, 0)]

IndexedLineSet146.coord = Coordinate147

Shape143.geometry = IndexedLineSet146

HAnimSegment140.children.append(Shape143)

HAnimJoint139.children.append(HAnimSegment140)
HAnimJoint148 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint148.name = "l_carpometacarpal_3"
HAnimJoint148.center = [0,0.2,0]
HAnimSegment149 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment149.name = "l_metacarpal_3"
Transform150 = x3d.Transform()
Transform150.translation = [0,0.2,0]
Shape151 = x3d.Shape(USE="HAnimJointShape")

Transform150.children.append(Shape151)

HAnimSegment149.children.append(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.emissiveColor = [1,1,1]

Appearance153.material = Material154

Shape152.appearance = Appearance153
IndexedLineSet155 = x3d.IndexedLineSet(DEF="CMC3toMCP3")
IndexedLineSet155.coordIndex = [0,1]
Coordinate156 = x3d.Coordinate()
Coordinate156.point = [(0, 0.2, 0),(0.03, 0.5, 0)]

IndexedLineSet155.coord = Coordinate156

Shape152.geometry = IndexedLineSet155

HAnimSegment149.children.append(Shape152)

HAnimJoint148.children.append(HAnimSegment149)
HAnimJoint157 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint157.name = "l_metacarpophalangeal_3"
HAnimJoint157.center = [0.03,0.5,0]
HAnimSegment158 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment158.name = "l_carpal_proximal_phalanx_3"
Transform159 = x3d.Transform()
Transform159.translation = [0.03,0.5,0]
Shape160 = x3d.Shape(USE="HAnimJointShape")

Transform159.children.append(Shape160)

HAnimSegment158.children.append(Transform159)
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.emissiveColor = [1,1,1]

Appearance162.material = Material163

Shape161.appearance = Appearance162
IndexedLineSet164 = x3d.IndexedLineSet(DEF="MCP3toPIP3")
IndexedLineSet164.coordIndex = [0,1]
Coordinate165 = x3d.Coordinate()
Coordinate165.point = [(0.03, 0.5, 0),(0.05, 0.75, 0)]

IndexedLineSet164.coord = Coordinate165

Shape161.geometry = IndexedLineSet164

HAnimSegment158.children.append(Shape161)

HAnimJoint157.children.append(HAnimSegment158)
HAnimJoint166 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint166.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint166.center = [0.05,0.75,0]
HAnimSegment167 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment167.name = "l_carpal_middle_phalanx_3"
Transform168 = x3d.Transform()
Transform168.translation = [0.05,0.75,0]
Shape169 = x3d.Shape(USE="HAnimJointShape")

Transform168.children.append(Shape169)

HAnimSegment167.children.append(Transform168)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.emissiveColor = [1,1,1]

Appearance171.material = Material172

Shape170.appearance = Appearance171
IndexedLineSet173 = x3d.IndexedLineSet(DEF="PIP3toDIP3")
IndexedLineSet173.coordIndex = [0,1]
Coordinate174 = x3d.Coordinate()
Coordinate174.point = [(0.05, 0.75, 0),(0.08, 0.96, 0)]

IndexedLineSet173.coord = Coordinate174

Shape170.geometry = IndexedLineSet173

HAnimSegment167.children.append(Shape170)

HAnimJoint166.children.append(HAnimSegment167)
HAnimJoint175 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint175.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint175.center = [0.08,0.96,0]
HAnimSegment176 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_3")
HAnimSegment176.name = "l_carpal_distal_phalanx_3"
Transform177 = x3d.Transform()
Transform177.translation = [0.08,0.96,0]
Shape178 = x3d.Shape(USE="HAnimJointShape")

Transform177.children.append(Shape178)

HAnimSegment176.children.append(Transform177)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.emissiveColor = [1,1,1]

Appearance180.material = Material181

Shape179.appearance = Appearance180
IndexedLineSet182 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_3")
IndexedLineSet182.coordIndex = [0,1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(0.08, 0.96, 0),(0.09, 1.05, 0)]

IndexedLineSet182.coord = Coordinate183

Shape179.geometry = IndexedLineSet182

HAnimSegment176.children.append(Shape179)

HAnimJoint175.children.append(HAnimSegment176)

HAnimJoint166.children.append(HAnimJoint175)

HAnimJoint157.children.append(HAnimJoint166)

HAnimJoint148.children.append(HAnimJoint157)

HAnimJoint139.children.append(HAnimJoint148)

HAnimJoint28.children.append(HAnimJoint139)
HAnimJoint184 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint184.name = "l_midcarpal_4_5"
HAnimJoint184.center = [-0.1,0.1,0]
HAnimSegment185 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment185.name = "l_hamate"
Transform186 = x3d.Transform()
Transform186.translation = [-0.1,0.1,0]
Shape187 = x3d.Shape(USE="HAnimNewJointShape")

Transform186.children.append(Shape187)

HAnimSegment185.children.append(Transform186)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.emissiveColor = [1,1,1]

Appearance189.material = Material190

Shape188.appearance = Appearance189
IndexedLineSet191 = x3d.IndexedLineSet(DEF="MC45toCMC4")
IndexedLineSet191.coordIndex = [0,1]
Coordinate192 = x3d.Coordinate()
Coordinate192.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet191.coord = Coordinate192

Shape188.geometry = IndexedLineSet191

HAnimSegment185.children.append(Shape188)
Shape193 = x3d.Shape()
Appearance194 = x3d.Appearance()
Material195 = x3d.Material()
Material195.emissiveColor = [1,1,1]

Appearance194.material = Material195

Shape193.appearance = Appearance194
IndexedLineSet196 = x3d.IndexedLineSet(DEF="MC45toCMC5")
IndexedLineSet196.coordIndex = [0,1]
Coordinate197 = x3d.Coordinate()
Coordinate197.point = [(-0.1, 0.1, 0),(-0.15, 0.17, 0)]

IndexedLineSet196.coord = Coordinate197

Shape193.geometry = IndexedLineSet196

HAnimSegment185.children.append(Shape193)

HAnimJoint184.children.append(HAnimSegment185)
HAnimJoint198 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint198.name = "l_carpometacarpal_4"
HAnimJoint198.center = [-0.1,0.2,0]
HAnimSegment199 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment199.name = "l_metacarpal_4"
Transform200 = x3d.Transform()
Transform200.translation = [-0.1,0.2,0]
Shape201 = x3d.Shape(USE="HAnimJointShape")

Transform200.children.append(Shape201)

HAnimSegment199.children.append(Transform200)
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.emissiveColor = [1,1,1]

Appearance203.material = Material204

Shape202.appearance = Appearance203
IndexedLineSet205 = x3d.IndexedLineSet(DEF="CMC4toMCP4")
IndexedLineSet205.coordIndex = [0,1]
Coordinate206 = x3d.Coordinate()
Coordinate206.point = [(-0.1, 0.2, 0),(-0.1, 0.47, 0)]

IndexedLineSet205.coord = Coordinate206

Shape202.geometry = IndexedLineSet205

HAnimSegment199.children.append(Shape202)

HAnimJoint198.children.append(HAnimSegment199)
HAnimJoint207 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint207.name = "l_metacarpophalangeal_4"
HAnimJoint207.center = [-0.1,0.47,0]
HAnimSegment208 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment208.name = "l_carpal_proximal_phalanx_4"
Transform209 = x3d.Transform()
Transform209.translation = [-0.1,0.47,0]
Shape210 = x3d.Shape(USE="HAnimJointShape")

Transform209.children.append(Shape210)

HAnimSegment208.children.append(Transform209)
Shape211 = x3d.Shape()
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.emissiveColor = [1,1,1]

Appearance212.material = Material213

Shape211.appearance = Appearance212
IndexedLineSet214 = x3d.IndexedLineSet(DEF="MCP4toPIP4")
IndexedLineSet214.coordIndex = [0,1]
Coordinate215 = x3d.Coordinate()
Coordinate215.point = [(-0.1, 0.47, 0),(-0.1, 0.7, 0)]

IndexedLineSet214.coord = Coordinate215

Shape211.geometry = IndexedLineSet214

HAnimSegment208.children.append(Shape211)

HAnimJoint207.children.append(HAnimSegment208)
HAnimJoint216 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint216.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint216.center = [-0.1,0.7,0]
HAnimSegment217 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment217.name = "l_carpal_middle_phalanx_4"
Transform218 = x3d.Transform()
Transform218.translation = [-0.1,0.7,0]
Shape219 = x3d.Shape(USE="HAnimJointShape")

Transform218.children.append(Shape219)

HAnimSegment217.children.append(Transform218)
Shape220 = x3d.Shape()
Appearance221 = x3d.Appearance()
Material222 = x3d.Material()
Material222.emissiveColor = [1,1,1]

Appearance221.material = Material222

Shape220.appearance = Appearance221
IndexedLineSet223 = x3d.IndexedLineSet(DEF="PIP4toDIP4")
IndexedLineSet223.coordIndex = [0,1]
Coordinate224 = x3d.Coordinate()
Coordinate224.point = [(-0.1, 0.7, 0),(-0.1, 0.93, 0)]

IndexedLineSet223.coord = Coordinate224

Shape220.geometry = IndexedLineSet223

HAnimSegment217.children.append(Shape220)

HAnimJoint216.children.append(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint225.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint225.center = [-0.1,0.93,0]
HAnimSegment226 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_4")
HAnimSegment226.name = "l_carpal_distal_phalanx_4"
Transform227 = x3d.Transform()
Transform227.translation = [-0.1,0.93,0]
Shape228 = x3d.Shape(USE="HAnimJointShape")

Transform227.children.append(Shape228)

HAnimSegment226.children.append(Transform227)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.emissiveColor = [1,1,1]

Appearance230.material = Material231

Shape229.appearance = Appearance230
IndexedLineSet232 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_4")
IndexedLineSet232.coordIndex = [0,1]
Coordinate233 = x3d.Coordinate()
Coordinate233.point = [(-0.1, 0.93, 0),(-0.1, 1, 0)]

IndexedLineSet232.coord = Coordinate233

Shape229.geometry = IndexedLineSet232

HAnimSegment226.children.append(Shape229)

HAnimJoint225.children.append(HAnimSegment226)

HAnimJoint216.children.append(HAnimJoint225)

HAnimJoint207.children.append(HAnimJoint216)

HAnimJoint198.children.append(HAnimJoint207)

HAnimJoint184.children.append(HAnimJoint198)
HAnimJoint234 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint234.name = "l_carpometacarpal_5"
HAnimJoint234.center = [-0.15,0.17,0]
HAnimSegment235 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment235.name = "l_metacarpal_5"
Transform236 = x3d.Transform()
Transform236.translation = [-0.15,0.17,0]
Shape237 = x3d.Shape(USE="HAnimJointShape")

Transform236.children.append(Shape237)

HAnimSegment235.children.append(Transform236)
Shape238 = x3d.Shape()
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.emissiveColor = [1,1,1]

Appearance239.material = Material240

Shape238.appearance = Appearance239
IndexedLineSet241 = x3d.IndexedLineSet(DEF="CMC5toMCP5")
IndexedLineSet241.coordIndex = [0,1]
Coordinate242 = x3d.Coordinate()
Coordinate242.point = [(-0.15, 0.17, 0),(-0.2, 0.4, 0)]

IndexedLineSet241.coord = Coordinate242

Shape238.geometry = IndexedLineSet241

HAnimSegment235.children.append(Shape238)

HAnimJoint234.children.append(HAnimSegment235)
HAnimJoint243 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint243.name = "l_metacarpophalangeal_5"
HAnimJoint243.center = [-0.2,0.4,0]
HAnimSegment244 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment244.name = "l_carpal_proximal_phalanx_5"
Transform245 = x3d.Transform()
Transform245.translation = [-0.2,0.4,0]
Shape246 = x3d.Shape(USE="HAnimJointShape")

Transform245.children.append(Shape246)

HAnimSegment244.children.append(Transform245)
Shape247 = x3d.Shape()
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.emissiveColor = [1,1,1]

Appearance248.material = Material249

Shape247.appearance = Appearance248
IndexedLineSet250 = x3d.IndexedLineSet(DEF="MCP5toPIP5")
IndexedLineSet250.coordIndex = [0,1]
Coordinate251 = x3d.Coordinate()
Coordinate251.point = [(-0.2, 0.4, 0),(-0.23, 0.63, 0)]

IndexedLineSet250.coord = Coordinate251

Shape247.geometry = IndexedLineSet250

HAnimSegment244.children.append(Shape247)

HAnimJoint243.children.append(HAnimSegment244)
HAnimJoint252 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint252.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint252.center = [-0.23,0.63,0]
HAnimSegment253 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment253.name = "l_carpal_middle_phalanx_5"
Transform254 = x3d.Transform()
Transform254.translation = [-0.23,0.63,0]
Shape255 = x3d.Shape(USE="HAnimJointShape")

Transform254.children.append(Shape255)

HAnimSegment253.children.append(Transform254)
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.emissiveColor = [1,1,1]

Appearance257.material = Material258

Shape256.appearance = Appearance257
IndexedLineSet259 = x3d.IndexedLineSet(DEF="PIP5toDIP5")
IndexedLineSet259.coordIndex = [0,1]
Coordinate260 = x3d.Coordinate()
Coordinate260.point = [(-0.23, 0.63, 0),(-0.25, 0.79, 0)]

IndexedLineSet259.coord = Coordinate260

Shape256.geometry = IndexedLineSet259

HAnimSegment253.children.append(Shape256)

HAnimJoint252.children.append(HAnimSegment253)
HAnimJoint261 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint261.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint261.center = [-0.25,0.79,0]
HAnimSegment262 = x3d.HAnimSegment(DEF="hanim_l_carpal_distal_phalanx_5")
HAnimSegment262.name = "l_carpal_distal_phalanx_5"
Transform263 = x3d.Transform()
Transform263.translation = [-0.25,0.79,0]
Shape264 = x3d.Shape(USE="HAnimJointShape")

Transform263.children.append(Shape264)

HAnimSegment262.children.append(Transform263)
Shape265 = x3d.Shape()
Appearance266 = x3d.Appearance()
Material267 = x3d.Material()
Material267.emissiveColor = [1,1,1]

Appearance266.material = Material267

Shape265.appearance = Appearance266
IndexedLineSet268 = x3d.IndexedLineSet(DEF="fingertip_l_carpal_distal_interphalangeal_5")
IndexedLineSet268.coordIndex = [0,1]
Coordinate269 = x3d.Coordinate()
Coordinate269.point = [(-0.25, 0.79, 0),(-0.26, 0.85, 0)]

IndexedLineSet268.coord = Coordinate269

Shape265.geometry = IndexedLineSet268

HAnimSegment262.children.append(Shape265)

HAnimJoint261.children.append(HAnimSegment262)

HAnimJoint252.children.append(HAnimJoint261)

HAnimJoint243.children.append(HAnimJoint252)

HAnimJoint234.children.append(HAnimJoint243)

HAnimJoint184.children.append(HAnimJoint234)

HAnimJoint28.children.append(HAnimJoint184)

HAnimJoint27.children.append(HAnimJoint28)

HAnimHumanoid24.skeleton.append(HAnimJoint27)
HAnimJoint270 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid24.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid24.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid24.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid24.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid24.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid24.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid24.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid24.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid24.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid24.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid24.joints.append(HAnimJoint294)

Scene22.children.append(HAnimHumanoid24)

X3D0.Scene = Scene22
f = open("../data/HAnimModelHandLeft.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelHandLeft.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelHandLeft.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

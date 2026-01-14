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
meta3.content = "HAnimModelFootRight.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Right foot, using high-fidelity definitions for HAnim version 2.0"

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
meta8.name = "warning"
meta8.content = "not yet to scale"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "Update all values to match HAnim2 A.7 Level of articulation four LOA-4"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "TODO"
meta10.content = "Add links to figures"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "TODO"
meta11.content = "Add Viewpoints to enable inspection"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "info"
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "warning"
meta13.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "subject"
meta20.content = "X3D HAnim humanoid animation"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "TODO"
meta21.content = "Integrate and confirm Segment/Joint names, Viewpoints."

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "identifier"
meta22.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "generator"
meta23.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "license"
meta24.content = "../license.html"

head1.children.append(meta24)

X3D0.head = head1
Scene25 = x3d.Scene()
WorldInfo26 = x3d.WorldInfo()
WorldInfo26.title = "HAnimModelFootRight.x3d"

Scene25.children.append(WorldInfo26)
HAnimHumanoid27 = x3d.HAnimHumanoid()
HAnimHumanoid27.name = "Foot_Right"
HAnimHumanoid27.DEF = "hanim_Foot_Right"
HAnimHumanoid27.loa = 4
HAnimHumanoid27.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""
MetadataSet28 = x3d.MetadataSet()
MetadataSet28.name = "HAnimHumanoid.info"
MetadataSet28.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString29 = x3d.MetadataString()
MetadataString29.name = "authorName"
MetadataString29.value = ["Kwan-Hee YOO, Don Brutzman and Joe Williams"]

if MetadataSet28.value is None:
    MetadataSet28.value = []
MetadataSet28.value.append(MetadataString29)

HAnimHumanoid27.metadata = MetadataSet28
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.name = "humanoid_root"
HAnimJoint30.DEF = "hanim_humanoid_root"
HAnimJoint30.ulimit = [0,0,0]
HAnimJoint30.llimit = [0,0,0]
"""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model"""
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.name = "r_talocrural"
HAnimJoint31.DEF = "hanim_r_talocrural"
HAnimJoint31.description = "connection joint of foot to leg above"
HAnimJoint31.ulimit = [0,0,0]
HAnimJoint31.llimit = [0,0,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.name = "r_talus"
HAnimSegment32.DEF = "hanim_r_talus"
Transform33 = x3d.Transform()
Shape34 = x3d.Shape()
Shape34.DEF = "HAnimJointShape"
Sphere35 = x3d.Sphere()
Sphere35.radius = 0.025

Shape34.geometry = Sphere35
Appearance36 = x3d.Appearance()
Appearance36.DEF = "HAnimJointAppearance"
Material37 = x3d.Material()
Material37.diffuseColor = [0,0,1]

Appearance36.material = Material37

Shape34.appearance = Appearance36

Transform33.children.append(Shape34)

HAnimSegment32.children.append(Transform33)
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.emissiveColor = [1,1,1]

Appearance39.material = Material40

Shape38.appearance = Appearance39
IndexedLineSet41 = x3d.IndexedLineSet()
IndexedLineSet41.DEF = "TCtoTCN"
IndexedLineSet41.coordIndex = [0,1]
Coordinate42 = x3d.Coordinate()
Coordinate42.point = [(0, 0, 0),(0, -0.3, 0)]

IndexedLineSet41.coord = Coordinate42

Shape38.geometry = IndexedLineSet41

HAnimSegment32.children.append(Shape38)
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.emissiveColor = [1,1,1]

Appearance44.material = Material45

Shape43.appearance = Appearance44
IndexedLineSet46 = x3d.IndexedLineSet()
IndexedLineSet46.DEF = "TCtoCC"
IndexedLineSet46.coordIndex = [0,1]
Coordinate47 = x3d.Coordinate()
Coordinate47.point = [(0, 0, 0),(-0.2, 0.3, 0)]

IndexedLineSet46.coord = Coordinate47

Shape43.geometry = IndexedLineSet46

HAnimSegment32.children.append(Shape43)

HAnimJoint31.children.append(HAnimSegment32)
"""TCN"""
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.name = "r_talocalcaneonavicular"
HAnimJoint48.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint48.center = [0,-0.3,0]
HAnimJoint48.ulimit = [0,0,0]
HAnimJoint48.llimit = [0,0,0]
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.name = "r_navicular"
HAnimSegment49.DEF = "hanim_r_navicular"
Transform50 = x3d.Transform()
Transform50.translation = [0,-0.3,0]
Shape51 = x3d.Shape()
Shape51.USE = "HAnimJointShape"

Transform50.children.append(Shape51)

HAnimSegment49.children.append(Transform50)
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.emissiveColor = [1,1,1]

Appearance53.material = Material54

Shape52.appearance = Appearance53
IndexedLineSet55 = x3d.IndexedLineSet()
IndexedLineSet55.DEF = "TCNtoCN1"
IndexedLineSet55.coordIndex = [0,1]
Coordinate56 = x3d.Coordinate()
Coordinate56.point = [(0, -0.3, 0),(0.1, -0.45, 0)]

IndexedLineSet55.coord = Coordinate56

Shape52.geometry = IndexedLineSet55

HAnimSegment49.children.append(Shape52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.emissiveColor = [1,1,1]

Appearance58.material = Material59

Shape57.appearance = Appearance58
IndexedLineSet60 = x3d.IndexedLineSet()
IndexedLineSet60.DEF = "TCNtoCN2"
IndexedLineSet60.coordIndex = [0,1]
Coordinate61 = x3d.Coordinate()
Coordinate61.point = [(0, -0.3, 0),(0, -0.45, 0)]

IndexedLineSet60.coord = Coordinate61

Shape57.geometry = IndexedLineSet60

HAnimSegment49.children.append(Shape57)
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.emissiveColor = [1,1,1]

Appearance63.material = Material64

Shape62.appearance = Appearance63
IndexedLineSet65 = x3d.IndexedLineSet()
IndexedLineSet65.DEF = "TCNtoCN3"
IndexedLineSet65.coordIndex = [0,1]
Coordinate66 = x3d.Coordinate()
Coordinate66.point = [(0, -0.3, 0),(-0.1, -0.4, 0)]

IndexedLineSet65.coord = Coordinate66

Shape62.geometry = IndexedLineSet65

HAnimSegment49.children.append(Shape62)

HAnimJoint48.children.append(HAnimSegment49)
"""CN1"""
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.name = "r_cuneonavicular_1"
HAnimJoint67.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint67.center = [0.1,-0.45,0]
HAnimJoint67.ulimit = [0,0,0]
HAnimJoint67.llimit = [0,0,0]
HAnimSegment68 = x3d.HAnimSegment()
HAnimSegment68.name = "r_cuneiform_1"
HAnimSegment68.DEF = "hanim_r_cuneiform_1"
Transform69 = x3d.Transform()
Transform69.translation = [0.1,-0.45,0]
Shape70 = x3d.Shape()
Shape70.USE = "HAnimJointShape"

Transform69.children.append(Shape70)

HAnimSegment68.children.append(Transform69)
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.emissiveColor = [1,1,1]

Appearance72.material = Material73

Shape71.appearance = Appearance72
IndexedLineSet74 = x3d.IndexedLineSet()
IndexedLineSet74.DEF = "CN1toTMT1"
IndexedLineSet74.coordIndex = [0,1]
Coordinate75 = x3d.Coordinate()
Coordinate75.point = [(0.1, -0.45, 0),(0.1, -0.6, 0)]

IndexedLineSet74.coord = Coordinate75

Shape71.geometry = IndexedLineSet74

HAnimSegment68.children.append(Shape71)

HAnimJoint67.children.append(HAnimSegment68)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.name = "r_tarsometatarsal_1"
HAnimJoint76.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint76.center = [0.1,-0.6,0]
HAnimJoint76.ulimit = [0,0,0]
HAnimJoint76.llimit = [0,0,0]
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.name = "r_metatarsal_1"
HAnimSegment77.DEF = "hanim_r_metatarsal_1"
Transform78 = x3d.Transform()
Transform78.translation = [0.1,-0.6,0]
Shape79 = x3d.Shape()
Shape79.USE = "HAnimJointShape"

Transform78.children.append(Shape79)

HAnimSegment77.children.append(Transform78)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.emissiveColor = [1,1,1]

Appearance81.material = Material82

Shape80.appearance = Appearance81
IndexedLineSet83 = x3d.IndexedLineSet()
IndexedLineSet83.DEF = "TMT1toMTP1"
IndexedLineSet83.coordIndex = [0,1]
Coordinate84 = x3d.Coordinate()
Coordinate84.point = [(0.1, -0.6, 0),(0.1, -0.9, 0)]

IndexedLineSet83.coord = Coordinate84

Shape80.geometry = IndexedLineSet83

HAnimSegment77.children.append(Shape80)

HAnimJoint76.children.append(HAnimSegment77)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.name = "r_metatarsophalangeal_1"
HAnimJoint85.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint85.center = [0.1,-0.9,0]
HAnimJoint85.ulimit = [0,0,0]
HAnimJoint85.llimit = [0,0,0]
HAnimSegment86 = x3d.HAnimSegment()
HAnimSegment86.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment86.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Transform87 = x3d.Transform()
Transform87.translation = [0.1,-0.9,0]
Shape88 = x3d.Shape()
Shape88.USE = "HAnimJointShape"

Transform87.children.append(Shape88)

HAnimSegment86.children.append(Transform87)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.emissiveColor = [1,1,1]

Appearance90.material = Material91

Shape89.appearance = Appearance90
IndexedLineSet92 = x3d.IndexedLineSet()
IndexedLineSet92.DEF = "MTP1toIP1"
IndexedLineSet92.coordIndex = [0,1]
Coordinate93 = x3d.Coordinate()
Coordinate93.point = [(0.1, -0.9, 0),(0.1, -1.05, 0)]

IndexedLineSet92.coord = Coordinate93

Shape89.geometry = IndexedLineSet92

HAnimSegment86.children.append(Shape89)

HAnimJoint85.children.append(HAnimSegment86)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.name = "r_tarsal_interphalangeal_1"
HAnimJoint94.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint94.center = [0.1,-1.05,0]
HAnimJoint94.ulimit = [0,0,0]
HAnimJoint94.llimit = [0,0,0]
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.name = "r_tarsal_distal_phalanx_1"
HAnimSegment95.DEF = "hanim_r_tarsal_distal_phalanx_1"
Transform96 = x3d.Transform()
Transform96.translation = [0.1,-1.05,0]
Shape97 = x3d.Shape()
Shape97.USE = "HAnimJointShape"

Transform96.children.append(Shape97)

HAnimSegment95.children.append(Transform96)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.emissiveColor = [1,1,1]

Appearance99.material = Material100

Shape98.appearance = Appearance99
IndexedLineSet101 = x3d.IndexedLineSet()
IndexedLineSet101.DEF = "tiptoe_r_interphalangeal_"
IndexedLineSet101.coordIndex = [0,1]
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(0.1, -1.05, 0),(0.1, -1.1, 0)]

IndexedLineSet101.coord = Coordinate102

Shape98.geometry = IndexedLineSet101

HAnimSegment95.children.append(Shape98)

HAnimJoint94.children.append(HAnimSegment95)

HAnimJoint85.children.append(HAnimJoint94)

HAnimJoint76.children.append(HAnimJoint85)

HAnimJoint67.children.append(HAnimJoint76)

HAnimJoint48.children.append(HAnimJoint67)
"""CN2"""
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.name = "r_cuneonavicular_2"
HAnimJoint103.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint103.center = [0,-0.45,0]
HAnimJoint103.ulimit = [0,0,0]
HAnimJoint103.llimit = [0,0,0]
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.name = "r_cuneiform_2"
HAnimSegment104.DEF = "hanim_r_cuneiform_2"
Transform105 = x3d.Transform()
Transform105.translation = [0,-0.45,0]
Shape106 = x3d.Shape()
Shape106.USE = "HAnimJointShape"

Transform105.children.append(Shape106)

HAnimSegment104.children.append(Transform105)
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.emissiveColor = [1,1,1]

Appearance108.material = Material109

Shape107.appearance = Appearance108
IndexedLineSet110 = x3d.IndexedLineSet()
IndexedLineSet110.DEF = "CN2toTMT2"
IndexedLineSet110.coordIndex = [0,1]
Coordinate111 = x3d.Coordinate()
Coordinate111.point = [(0, -0.45, 0),(-0.05, -0.6, 0)]

IndexedLineSet110.coord = Coordinate111

Shape107.geometry = IndexedLineSet110

HAnimSegment104.children.append(Shape107)

HAnimJoint103.children.append(HAnimSegment104)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.name = "r_tarsometatarsal_2"
HAnimJoint112.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint112.center = [-0.05,-0.6,0]
HAnimJoint112.ulimit = [0,0,0]
HAnimJoint112.llimit = [0,0,0]
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.name = "r_metatarsal_2"
HAnimSegment113.DEF = "hanim_r_metatarsal_2"
Transform114 = x3d.Transform()
Transform114.translation = [-0.05,-0.6,0]
Shape115 = x3d.Shape()
Shape115.USE = "HAnimJointShape"

Transform114.children.append(Shape115)

HAnimSegment113.children.append(Transform114)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.emissiveColor = [1,1,1]

Appearance117.material = Material118

Shape116.appearance = Appearance117
IndexedLineSet119 = x3d.IndexedLineSet()
IndexedLineSet119.DEF = "TMT2toMTP2"
IndexedLineSet119.coordIndex = [0,1]
Coordinate120 = x3d.Coordinate()
Coordinate120.point = [(-0.05, -0.6, 0),(-0.05, -0.9, 0)]

IndexedLineSet119.coord = Coordinate120

Shape116.geometry = IndexedLineSet119

HAnimSegment113.children.append(Shape116)

HAnimJoint112.children.append(HAnimSegment113)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.name = "r_metatarsophalangeal_2"
HAnimJoint121.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint121.center = [-0.05,-0.9,0]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment122.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform123 = x3d.Transform()
Transform123.translation = [-0.05,-0.9,0]
Shape124 = x3d.Shape()
Shape124.USE = "HAnimJointShape"

Transform123.children.append(Shape124)

HAnimSegment122.children.append(Transform123)
Shape125 = x3d.Shape()
Appearance126 = x3d.Appearance()
Material127 = x3d.Material()
Material127.emissiveColor = [1,1,1]

Appearance126.material = Material127

Shape125.appearance = Appearance126
IndexedLineSet128 = x3d.IndexedLineSet()
IndexedLineSet128.DEF = "MTP2toPIP2"
IndexedLineSet128.coordIndex = [0,1]
Coordinate129 = x3d.Coordinate()
Coordinate129.point = [(-0.05, -0.9, 0),(-0.05, -1.05, 0)]

IndexedLineSet128.coord = Coordinate129

Shape125.geometry = IndexedLineSet128

HAnimSegment122.children.append(Shape125)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint130.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint130.center = [-0.05,-1.05,0]
HAnimJoint130.ulimit = [0,0,0]
HAnimJoint130.llimit = [0,0,0]
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.name = "r_tarsal_middle_phalanx_2"
HAnimSegment131.DEF = "hanim_r_tarsal_middle_phalanx_2"
Transform132 = x3d.Transform()
Transform132.translation = [-0.05,-1.05,0]
Shape133 = x3d.Shape()
Shape133.USE = "HAnimJointShape"

Transform132.children.append(Shape133)

HAnimSegment131.children.append(Transform132)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.emissiveColor = [1,1,1]

Appearance135.material = Material136

Shape134.appearance = Appearance135
IndexedLineSet137 = x3d.IndexedLineSet()
IndexedLineSet137.DEF = "PIP2toDIP2"
IndexedLineSet137.coordIndex = [0,1]
Coordinate138 = x3d.Coordinate()
Coordinate138.point = [(-0.05, -1.05, 0),(-0.05, -1.12, 0)]

IndexedLineSet137.coord = Coordinate138

Shape134.geometry = IndexedLineSet137

HAnimSegment131.children.append(Shape134)

HAnimJoint130.children.append(HAnimSegment131)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint139.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint139.center = [-0.05,-1.12,0]
HAnimJoint139.ulimit = [0,0,0]
HAnimJoint139.llimit = [0,0,0]
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.name = "r_tarsal_distal_phalanx_2"
HAnimSegment140.DEF = "hanim_r_tarsal_distal_phalanx_2"
Transform141 = x3d.Transform()
Transform141.translation = [-0.05,-1.12,0]
Shape142 = x3d.Shape()
Shape142.USE = "HAnimJointShape"

Transform141.children.append(Shape142)

HAnimSegment140.children.append(Transform141)
Shape143 = x3d.Shape()
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.emissiveColor = [1,1,1]

Appearance144.material = Material145

Shape143.appearance = Appearance144
IndexedLineSet146 = x3d.IndexedLineSet()
IndexedLineSet146.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2"
IndexedLineSet146.coordIndex = [0,1]
Coordinate147 = x3d.Coordinate()
Coordinate147.point = [(-0.05, -1.12, 0),(-0.05, -1.16, 0)]

IndexedLineSet146.coord = Coordinate147

Shape143.geometry = IndexedLineSet146

HAnimSegment140.children.append(Shape143)

HAnimJoint139.children.append(HAnimSegment140)

HAnimJoint130.children.append(HAnimJoint139)

HAnimJoint121.children.append(HAnimJoint130)

HAnimJoint112.children.append(HAnimJoint121)

HAnimJoint103.children.append(HAnimJoint112)

HAnimJoint48.children.append(HAnimJoint103)
"""CN3"""
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.name = "r_cuneonavicular_3"
HAnimJoint148.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint148.center = [-0.1,-0.4,0]
HAnimJoint148.ulimit = [0,0,0]
HAnimJoint148.llimit = [0,0,0]
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.name = "r_cuneiform_3"
HAnimSegment149.DEF = "hanim_r_cuneiform_3"
Transform150 = x3d.Transform()
Transform150.translation = [-0.1,-0.4,0]
Shape151 = x3d.Shape()
Shape151.USE = "HAnimJointShape"

Transform150.children.append(Shape151)

HAnimSegment149.children.append(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.emissiveColor = [1,1,1]

Appearance153.material = Material154

Shape152.appearance = Appearance153
IndexedLineSet155 = x3d.IndexedLineSet()
IndexedLineSet155.DEF = "CN3toTMT3"
IndexedLineSet155.coordIndex = [0,1]
Coordinate156 = x3d.Coordinate()
Coordinate156.point = [(-0.1, -0.4, 0),(-0.15, -0.6, 0)]

IndexedLineSet155.coord = Coordinate156

Shape152.geometry = IndexedLineSet155

HAnimSegment149.children.append(Shape152)

HAnimJoint148.children.append(HAnimSegment149)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.name = "r_tarsometatarsal_3"
HAnimJoint157.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint157.center = [-0.15,-0.6,0]
HAnimJoint157.ulimit = [0,0,0]
HAnimJoint157.llimit = [0,0,0]
HAnimSegment158 = x3d.HAnimSegment()
HAnimSegment158.name = "r_metatarsal_3"
HAnimSegment158.DEF = "hanim_r_metatarsal_3"
Transform159 = x3d.Transform()
Transform159.translation = [-0.15,-0.6,0]
Shape160 = x3d.Shape()
Shape160.USE = "HAnimJointShape"

Transform159.children.append(Shape160)

HAnimSegment158.children.append(Transform159)
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.emissiveColor = [1,1,1]

Appearance162.material = Material163

Shape161.appearance = Appearance162
IndexedLineSet164 = x3d.IndexedLineSet()
IndexedLineSet164.DEF = "TMT3toMTP3"
IndexedLineSet164.coordIndex = [0,1]
Coordinate165 = x3d.Coordinate()
Coordinate165.point = [(-0.15, -0.6, 0),(-0.15, -0.9, 0)]

IndexedLineSet164.coord = Coordinate165

Shape161.geometry = IndexedLineSet164

HAnimSegment158.children.append(Shape161)

HAnimJoint157.children.append(HAnimSegment158)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.name = "r_metatarsophalangeal_3"
HAnimJoint166.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint166.center = [-0.15,-0.9,0]
HAnimJoint166.ulimit = [0,0,0]
HAnimJoint166.llimit = [0,0,0]
HAnimSegment167 = x3d.HAnimSegment()
HAnimSegment167.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment167.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Transform168 = x3d.Transform()
Transform168.translation = [-0.15,-0.9,0]
Shape169 = x3d.Shape()
Shape169.USE = "HAnimJointShape"

Transform168.children.append(Shape169)

HAnimSegment167.children.append(Transform168)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.emissiveColor = [1,1,1]

Appearance171.material = Material172

Shape170.appearance = Appearance171
IndexedLineSet173 = x3d.IndexedLineSet()
IndexedLineSet173.DEF = "MTP3toPIP3"
IndexedLineSet173.coordIndex = [0,1]
Coordinate174 = x3d.Coordinate()
Coordinate174.point = [(-0.15, -0.9, 0),(-0.15, -1.05, 0)]

IndexedLineSet173.coord = Coordinate174

Shape170.geometry = IndexedLineSet173

HAnimSegment167.children.append(Shape170)

HAnimJoint166.children.append(HAnimSegment167)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint175.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint175.center = [-0.15,-1.05,0]
HAnimJoint175.ulimit = [0,0,0]
HAnimJoint175.llimit = [0,0,0]
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.name = "r_tarsal_middle_phalanx_3"
HAnimSegment176.DEF = "hanim_r_tarsal_middle_phalanx_3"
Transform177 = x3d.Transform()
Transform177.translation = [-0.15,-1.05,0]
Shape178 = x3d.Shape()
Shape178.USE = "HAnimJointShape"

Transform177.children.append(Shape178)

HAnimSegment176.children.append(Transform177)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.emissiveColor = [1,1,1]

Appearance180.material = Material181

Shape179.appearance = Appearance180
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.DEF = "PIP3toDIP3"
IndexedLineSet182.coordIndex = [0,1]
Coordinate183 = x3d.Coordinate()
Coordinate183.point = [(-0.15, -1.05, 0),(-0.15, -1.13, 0)]

IndexedLineSet182.coord = Coordinate183

Shape179.geometry = IndexedLineSet182

HAnimSegment176.children.append(Shape179)

HAnimJoint175.children.append(HAnimSegment176)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint184.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint184.center = [-0.15,-1.13,0]
HAnimJoint184.ulimit = [0,0,0]
HAnimJoint184.llimit = [0,0,0]
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.name = "r_tarsal_distal_phalanx_3"
HAnimSegment185.DEF = "hanim_r_tarsal_distal_phalanx_3"
Transform186 = x3d.Transform()
Transform186.translation = [-0.15,-1.13,0]
Shape187 = x3d.Shape()
Shape187.USE = "HAnimJointShape"

Transform186.children.append(Shape187)

HAnimSegment185.children.append(Transform186)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.emissiveColor = [1,1,1]

Appearance189.material = Material190

Shape188.appearance = Appearance189
IndexedLineSet191 = x3d.IndexedLineSet()
IndexedLineSet191.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3"
IndexedLineSet191.coordIndex = [0,1]
Coordinate192 = x3d.Coordinate()
Coordinate192.point = [(-0.15, -1.13, 0),(-0.15, -1.16, 0)]

IndexedLineSet191.coord = Coordinate192

Shape188.geometry = IndexedLineSet191

HAnimSegment185.children.append(Shape188)

HAnimJoint184.children.append(HAnimSegment185)

HAnimJoint175.children.append(HAnimJoint184)

HAnimJoint166.children.append(HAnimJoint175)

HAnimJoint157.children.append(HAnimJoint166)

HAnimJoint148.children.append(HAnimJoint157)

HAnimJoint48.children.append(HAnimJoint148)

HAnimJoint31.children.append(HAnimJoint48)
"""CC"""
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.name = "r_calcaneocuboid"
HAnimJoint193.DEF = "hanim_r_calcaneocuboid"
HAnimJoint193.center = [-0.2,0.3,0]
HAnimJoint193.ulimit = [0,0,0]
HAnimJoint193.llimit = [0,0,0]
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.name = "r_calcaneus"
HAnimSegment194.DEF = "hanim_r_calcaneus"
Transform195 = x3d.Transform()
Transform195.translation = [-0.2,0.3,0]
Shape196 = x3d.Shape()
Shape196.USE = "HAnimJointShape"

Transform195.children.append(Shape196)

HAnimSegment194.children.append(Transform195)
Shape197 = x3d.Shape()
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.emissiveColor = [1,1,1]

Appearance198.material = Material199

Shape197.appearance = Appearance198
IndexedLineSet200 = x3d.IndexedLineSet()
IndexedLineSet200.DEF = "CCtoTT"
IndexedLineSet200.coordIndex = [0,1]
Coordinate201 = x3d.Coordinate()
Coordinate201.point = [(-0.2, 0.3, 0),(-0.21, -0.3, 0)]

IndexedLineSet200.coord = Coordinate201

Shape197.geometry = IndexedLineSet200

HAnimSegment194.children.append(Shape197)

HAnimJoint193.children.append(HAnimSegment194)
"""TT"""
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.name = "r_transversetarsal"
HAnimJoint202.DEF = "hanim_r_transversetarsal"
HAnimJoint202.center = [-0.21,-0.3,0]
HAnimJoint202.ulimit = [0,0,0]
HAnimJoint202.llimit = [0,0,0]
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.name = "r_cuboid"
HAnimSegment203.DEF = "hanim_r_cuboid"
Transform204 = x3d.Transform()
Transform204.translation = [-0.21,-0.3,0]
Shape205 = x3d.Shape()
Shape205.USE = "HAnimJointShape"

Transform204.children.append(Shape205)

HAnimSegment203.children.append(Transform204)
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.emissiveColor = [1,1,1]

Appearance207.material = Material208

Shape206.appearance = Appearance207
IndexedLineSet209 = x3d.IndexedLineSet()
IndexedLineSet209.DEF = "TTtoTMT4"
IndexedLineSet209.coordIndex = [0,1]
Coordinate210 = x3d.Coordinate()
Coordinate210.point = [(-0.21, -0.3, 0),(-0.25, -0.58, 0)]

IndexedLineSet209.coord = Coordinate210

Shape206.geometry = IndexedLineSet209

HAnimSegment203.children.append(Shape206)
Shape211 = x3d.Shape()
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.emissiveColor = [1,1,1]

Appearance212.material = Material213

Shape211.appearance = Appearance212
IndexedLineSet214 = x3d.IndexedLineSet()
IndexedLineSet214.DEF = "TTtoTMT5"
IndexedLineSet214.coordIndex = [0,1]
Coordinate215 = x3d.Coordinate()
Coordinate215.point = [(-0.21, -0.3, 0),(-0.33, -0.52, 0)]

IndexedLineSet214.coord = Coordinate215

Shape211.geometry = IndexedLineSet214

HAnimSegment203.children.append(Shape211)

HAnimJoint202.children.append(HAnimSegment203)
"""TMT4"""
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.name = "r_tarsometatarsal_4"
HAnimJoint216.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint216.center = [-0.25,-0.58,0]
HAnimJoint216.ulimit = [0,0,0]
HAnimJoint216.llimit = [0,0,0]
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.name = "r_metatarsal_4"
HAnimSegment217.DEF = "hanim_r_metatarsal_4"
Transform218 = x3d.Transform()
Transform218.translation = [-0.25,-0.58,0]
Shape219 = x3d.Shape()
Shape219.USE = "HAnimJointShape"

Transform218.children.append(Shape219)

HAnimSegment217.children.append(Transform218)
Shape220 = x3d.Shape()
Appearance221 = x3d.Appearance()
Material222 = x3d.Material()
Material222.emissiveColor = [1,1,1]

Appearance221.material = Material222

Shape220.appearance = Appearance221
IndexedLineSet223 = x3d.IndexedLineSet()
IndexedLineSet223.DEF = "TMT4toMTP4"
IndexedLineSet223.coordIndex = [0,1]
Coordinate224 = x3d.Coordinate()
Coordinate224.point = [(-0.25, -0.58, 0),(-0.25, -0.87, 0)]

IndexedLineSet223.coord = Coordinate224

Shape220.geometry = IndexedLineSet223

HAnimSegment217.children.append(Shape220)

HAnimJoint216.children.append(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.name = "r_metatarsophalangeal_4"
HAnimJoint225.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint225.center = [-0.25,-0.87,0]
HAnimJoint225.ulimit = [0,0,0]
HAnimJoint225.llimit = [0,0,0]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment226.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Transform227 = x3d.Transform()
Transform227.translation = [-0.25,-0.87,0]
Shape228 = x3d.Shape()
Shape228.USE = "HAnimJointShape"

Transform227.children.append(Shape228)

HAnimSegment226.children.append(Transform227)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.emissiveColor = [1,1,1]

Appearance230.material = Material231

Shape229.appearance = Appearance230
IndexedLineSet232 = x3d.IndexedLineSet()
IndexedLineSet232.DEF = "MTP4toPIP4"
IndexedLineSet232.coordIndex = [0,1]
Coordinate233 = x3d.Coordinate()
Coordinate233.point = [(-0.25, -0.87, 0),(-0.25, -1, 0)]

IndexedLineSet232.coord = Coordinate233

Shape229.geometry = IndexedLineSet232

HAnimSegment226.children.append(Shape229)

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint234.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint234.center = [-0.25,-1,0]
HAnimJoint234.ulimit = [0,0,0]
HAnimJoint234.llimit = [0,0,0]
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.name = "r_tarsal_middle_phalanx_4"
HAnimSegment235.DEF = "hanim_r_tarsal_middle_phalanx_4"
Transform236 = x3d.Transform()
Transform236.translation = [-0.25,-1,0]
Shape237 = x3d.Shape()
Shape237.USE = "HAnimJointShape"

Transform236.children.append(Shape237)

HAnimSegment235.children.append(Transform236)
Shape238 = x3d.Shape()
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.emissiveColor = [1,1,1]

Appearance239.material = Material240

Shape238.appearance = Appearance239
IndexedLineSet241 = x3d.IndexedLineSet()
IndexedLineSet241.DEF = "PIP4toDIP4"
IndexedLineSet241.coordIndex = [0,1]
Coordinate242 = x3d.Coordinate()
Coordinate242.point = [(-0.25, -1, 0),(-0.25, -1.1, 0)]

IndexedLineSet241.coord = Coordinate242

Shape238.geometry = IndexedLineSet241

HAnimSegment235.children.append(Shape238)

HAnimJoint234.children.append(HAnimSegment235)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint243.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint243.center = [-0.25,-1.1,0]
HAnimJoint243.ulimit = [0,0,0]
HAnimJoint243.llimit = [0,0,0]
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.name = "r_tarsal_distal_phalanx_4"
HAnimSegment244.DEF = "hanim_r_tarsal_distal_phalanx_4"
Transform245 = x3d.Transform()
Transform245.translation = [-0.25,-1.1,0]
Shape246 = x3d.Shape()
Shape246.USE = "HAnimJointShape"

Transform245.children.append(Shape246)

HAnimSegment244.children.append(Transform245)
Shape247 = x3d.Shape()
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.emissiveColor = [1,1,1]

Appearance248.material = Material249

Shape247.appearance = Appearance248
IndexedLineSet250 = x3d.IndexedLineSet()
IndexedLineSet250.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4"
IndexedLineSet250.coordIndex = [0,1]
Coordinate251 = x3d.Coordinate()
Coordinate251.point = [(-0.25, -1.1, 0),(-0.25, -1.15, 0)]

IndexedLineSet250.coord = Coordinate251

Shape247.geometry = IndexedLineSet250

HAnimSegment244.children.append(Shape247)

HAnimJoint243.children.append(HAnimSegment244)

HAnimJoint234.children.append(HAnimJoint243)

HAnimJoint225.children.append(HAnimJoint234)

HAnimJoint216.children.append(HAnimJoint225)

HAnimJoint202.children.append(HAnimJoint216)
"""TMT5"""
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.name = "r_tarsometatarsal_5"
HAnimJoint252.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint252.center = [-0.33,-0.52,0]
HAnimJoint252.ulimit = [0,0,0]
HAnimJoint252.llimit = [0,0,0]
HAnimSegment253 = x3d.HAnimSegment()
HAnimSegment253.name = "r_metatarsal_5"
HAnimSegment253.DEF = "hanim_r_metatarsal_5"
Transform254 = x3d.Transform()
Transform254.translation = [-0.33,-0.52,0]
Shape255 = x3d.Shape()
Shape255.USE = "HAnimJointShape"

Transform254.children.append(Shape255)

HAnimSegment253.children.append(Transform254)
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.emissiveColor = [1,1,1]

Appearance257.material = Material258

Shape256.appearance = Appearance257
IndexedLineSet259 = x3d.IndexedLineSet()
IndexedLineSet259.DEF = "TMT5toMTP5"
IndexedLineSet259.coordIndex = [0,1]
Coordinate260 = x3d.Coordinate()
Coordinate260.point = [(-0.33, -0.52, 0),(-0.34, -0.8, 0)]

IndexedLineSet259.coord = Coordinate260

Shape256.geometry = IndexedLineSet259

HAnimSegment253.children.append(Shape256)

HAnimJoint252.children.append(HAnimSegment253)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.name = "r_metatarsophalangeal_5"
HAnimJoint261.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint261.center = [-0.34,-0.8,0]
HAnimJoint261.ulimit = [0,0,0]
HAnimJoint261.llimit = [0,0,0]
HAnimSegment262 = x3d.HAnimSegment()
HAnimSegment262.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment262.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Transform263 = x3d.Transform()
Transform263.translation = [-0.34,-0.8,0]
Shape264 = x3d.Shape()
Shape264.USE = "HAnimJointShape"

Transform263.children.append(Shape264)

HAnimSegment262.children.append(Transform263)
Shape265 = x3d.Shape()
Appearance266 = x3d.Appearance()
Material267 = x3d.Material()
Material267.emissiveColor = [1,1,1]

Appearance266.material = Material267

Shape265.appearance = Appearance266
IndexedLineSet268 = x3d.IndexedLineSet()
IndexedLineSet268.DEF = "MTP5toPIP5"
IndexedLineSet268.coordIndex = [0,1]
Coordinate269 = x3d.Coordinate()
Coordinate269.point = [(-0.34, -0.8, 0),(-0.34, -0.95, 0)]

IndexedLineSet268.coord = Coordinate269

Shape265.geometry = IndexedLineSet268

HAnimSegment262.children.append(Shape265)

HAnimJoint261.children.append(HAnimSegment262)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint270.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint270.center = [-0.34,-0.95,0]
HAnimJoint270.ulimit = [0,0,0]
HAnimJoint270.llimit = [0,0,0]
HAnimSegment271 = x3d.HAnimSegment()
HAnimSegment271.name = "r_tarsal_middle_phalanx_5"
HAnimSegment271.DEF = "hanim_r_tarsal_middle_phalanx_5"
Transform272 = x3d.Transform()
Transform272.translation = [-0.34,-0.95,0]
Shape273 = x3d.Shape()
Shape273.USE = "HAnimJointShape"

Transform272.children.append(Shape273)

HAnimSegment271.children.append(Transform272)
Shape274 = x3d.Shape()
Appearance275 = x3d.Appearance()
Material276 = x3d.Material()
Material276.emissiveColor = [1,1,1]

Appearance275.material = Material276

Shape274.appearance = Appearance275
IndexedLineSet277 = x3d.IndexedLineSet()
IndexedLineSet277.DEF = "PIP5toDIP5"
IndexedLineSet277.coordIndex = [0,1]
Coordinate278 = x3d.Coordinate()
Coordinate278.point = [(-0.34, -0.95, 0),(-0.34, -1.05, 0)]

IndexedLineSet277.coord = Coordinate278

Shape274.geometry = IndexedLineSet277

HAnimSegment271.children.append(Shape274)

HAnimJoint270.children.append(HAnimSegment271)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint279.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint279.center = [-0.34,-1.05,0]
HAnimJoint279.ulimit = [0,0,0]
HAnimJoint279.llimit = [0,0,0]
HAnimSegment280 = x3d.HAnimSegment()
HAnimSegment280.name = "r_tarsal_distal_phalanx_5"
HAnimSegment280.DEF = "hanim_r_tarsal_distal_phalanx_5"
Transform281 = x3d.Transform()
Transform281.translation = [-0.34,-1.05,0]
Shape282 = x3d.Shape()
Shape282.USE = "HAnimJointShape"

Transform281.children.append(Shape282)

HAnimSegment280.children.append(Transform281)
Shape283 = x3d.Shape()
Appearance284 = x3d.Appearance()
Material285 = x3d.Material()
Material285.emissiveColor = [1,1,1]

Appearance284.material = Material285

Shape283.appearance = Appearance284
IndexedLineSet286 = x3d.IndexedLineSet()
IndexedLineSet286.DEF = "tiptoe_r_tarsal_distal_interphalangeal_5"
IndexedLineSet286.coordIndex = [0,1]
Coordinate287 = x3d.Coordinate()
Coordinate287.point = [(-0.34, -1.05, 0),(-0.34, -1.08, 0)]

IndexedLineSet286.coord = Coordinate287

Shape283.geometry = IndexedLineSet286

HAnimSegment280.children.append(Shape283)

HAnimJoint279.children.append(HAnimSegment280)

HAnimJoint270.children.append(HAnimJoint279)

HAnimJoint261.children.append(HAnimJoint270)

HAnimJoint252.children.append(HAnimJoint261)

HAnimJoint202.children.append(HAnimJoint252)

HAnimJoint193.children.append(HAnimJoint202)

HAnimJoint31.children.append(HAnimJoint193)

HAnimJoint30.children.append(HAnimJoint31)

HAnimHumanoid27.skeleton.append(HAnimJoint30)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.USE = "hanim_humanoid_root"

HAnimHumanoid27.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid27.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid27.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid27.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid27.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid27.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid27.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid27.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid27.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid27.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid27.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.USE = "hanim_r_talocrural"

HAnimHumanoid27.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid27.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid27.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid27.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid27.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.USE = "hanim_r_tarsal_interphalangeal_1"

HAnimHumanoid27.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid27.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid27.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid27.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid27.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid27.joints.append(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid27.joints.append(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid27.joints.append(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid27.joints.append(HAnimJoint312)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid27.joints.append(HAnimJoint313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.USE = "hanim_r_transversetarsal"

HAnimHumanoid27.joints.append(HAnimJoint314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.USE = "hanim_r_calcaneus"

HAnimHumanoid27.segments.append(HAnimSegment315)
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.USE = "hanim_r_cuboid"

HAnimHumanoid27.segments.append(HAnimSegment316)
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.USE = "hanim_r_cuneiform_1"

HAnimHumanoid27.segments.append(HAnimSegment317)
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.USE = "hanim_r_cuneiform_2"

HAnimHumanoid27.segments.append(HAnimSegment318)
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.USE = "hanim_r_cuneiform_3"

HAnimHumanoid27.segments.append(HAnimSegment319)
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.USE = "hanim_r_metatarsal_1"

HAnimHumanoid27.segments.append(HAnimSegment320)
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.USE = "hanim_r_metatarsal_2"

HAnimHumanoid27.segments.append(HAnimSegment321)
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.USE = "hanim_r_metatarsal_3"

HAnimHumanoid27.segments.append(HAnimSegment322)
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.USE = "hanim_r_metatarsal_4"

HAnimHumanoid27.segments.append(HAnimSegment323)
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.USE = "hanim_r_metatarsal_5"

HAnimHumanoid27.segments.append(HAnimSegment324)
HAnimSegment325 = x3d.HAnimSegment()
HAnimSegment325.USE = "hanim_r_navicular"

HAnimHumanoid27.segments.append(HAnimSegment325)
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.USE = "hanim_r_talus"

HAnimHumanoid27.segments.append(HAnimSegment326)
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.USE = "hanim_r_tarsal_distal_phalanx_1"

HAnimHumanoid27.segments.append(HAnimSegment327)
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.USE = "hanim_r_tarsal_distal_phalanx_2"

HAnimHumanoid27.segments.append(HAnimSegment328)
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.USE = "hanim_r_tarsal_distal_phalanx_3"

HAnimHumanoid27.segments.append(HAnimSegment329)
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.USE = "hanim_r_tarsal_distal_phalanx_4"

HAnimHumanoid27.segments.append(HAnimSegment330)
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.USE = "hanim_r_tarsal_distal_phalanx_5"

HAnimHumanoid27.segments.append(HAnimSegment331)
HAnimSegment332 = x3d.HAnimSegment()
HAnimSegment332.USE = "hanim_r_tarsal_middle_phalanx_2"

HAnimHumanoid27.segments.append(HAnimSegment332)
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.USE = "hanim_r_tarsal_middle_phalanx_3"

HAnimHumanoid27.segments.append(HAnimSegment333)
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.USE = "hanim_r_tarsal_middle_phalanx_4"

HAnimHumanoid27.segments.append(HAnimSegment334)
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.USE = "hanim_r_tarsal_middle_phalanx_5"

HAnimHumanoid27.segments.append(HAnimSegment335)
HAnimSegment336 = x3d.HAnimSegment()
HAnimSegment336.USE = "hanim_r_tarsal_proximal_phalanx_1"

HAnimHumanoid27.segments.append(HAnimSegment336)
HAnimSegment337 = x3d.HAnimSegment()
HAnimSegment337.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid27.segments.append(HAnimSegment337)
HAnimSegment338 = x3d.HAnimSegment()
HAnimSegment338.USE = "hanim_r_tarsal_proximal_phalanx_3"

HAnimHumanoid27.segments.append(HAnimSegment338)
HAnimSegment339 = x3d.HAnimSegment()
HAnimSegment339.USE = "hanim_r_tarsal_proximal_phalanx_4"

HAnimHumanoid27.segments.append(HAnimSegment339)
HAnimSegment340 = x3d.HAnimSegment()
HAnimSegment340.USE = "hanim_r_tarsal_proximal_phalanx_5"

HAnimHumanoid27.segments.append(HAnimSegment340)

Scene25.children.append(HAnimHumanoid27)

X3D0.Scene = Scene25
f = open("../data/HAnimModelFootRight.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelFootRight.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelFootRight.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

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
meta7.content = "23 December 2021"

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
meta20 = x3d.meta()
meta20.name = "generator"
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "license"
meta21.content = "../license.html"

head1.children.append(meta21)

X3D0.head = head1
Scene22 = x3d.Scene()
WorldInfo23 = x3d.WorldInfo()
WorldInfo23.title = "HAnimModelFootLeft.x3d"

Scene22.children.append(WorldInfo23)
HAnimHumanoid24 = x3d.HAnimHumanoid()
HAnimHumanoid24.name = "Foot_Left"
HAnimHumanoid24.DEF = "hanim_Foot_Left"
HAnimHumanoid24.loa = 4
HAnimHumanoid24.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""
MetadataSet25 = x3d.MetadataSet()
MetadataSet25.name = "HAnimHumanoid.info"
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString26 = x3d.MetadataString()
MetadataString26.name = "authorName"
MetadataString26.value = ["Kwan-Hee YOO, Don Brutzman and Joe Williams"]

if MetadataSet25.value is None:
    MetadataSet25.value = []
MetadataSet25.value.append(MetadataString26)

HAnimHumanoid24.metadata = MetadataSet25
HAnimJoint27 = x3d.HAnimJoint()
HAnimJoint27.name = "humanoid_root"
HAnimJoint27.DEF = "hanim_humanoid_root"
HAnimJoint27.ulimit = [0,0,0]
HAnimJoint27.llimit = [0,0,0]
"""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model"""
HAnimJoint28 = x3d.HAnimJoint()
HAnimJoint28.name = "l_talocrural"
HAnimJoint28.DEF = "hanim_l_talocrural"
HAnimJoint28.description = "connection joint of foot to leg above"
HAnimJoint28.ulimit = [0,0,0]
HAnimJoint28.llimit = [0,0,0]
HAnimSegment29 = x3d.HAnimSegment()
HAnimSegment29.name = "l_talus"
HAnimSegment29.DEF = "hanim_l_talus"
Transform30 = x3d.Transform()
Shape31 = x3d.Shape()
Shape31.DEF = "HAnimJointShape"
Sphere32 = x3d.Sphere()
Sphere32.radius = 0.025

Shape31.geometry = Sphere32
Appearance33 = x3d.Appearance()
Appearance33.DEF = "HAnimJointAppearance"
Material34 = x3d.Material()
Material34.diffuseColor = [0,0,1]

Appearance33.material = Material34

Shape31.appearance = Appearance33

Transform30.children.append(Shape31)

HAnimSegment29.children.append(Transform30)
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.emissiveColor = [1,1,1]

Appearance36.material = Material37

Shape35.appearance = Appearance36
IndexedLineSet38 = x3d.IndexedLineSet()
IndexedLineSet38.DEF = "TCtoTCN"
IndexedLineSet38.coordIndex = [0,1]
Coordinate39 = x3d.Coordinate()
Coordinate39.point = [(0, 0, 0),(0, -0.3, 0)]

IndexedLineSet38.coord = Coordinate39

Shape35.geometry = IndexedLineSet38

HAnimSegment29.children.append(Shape35)
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.emissiveColor = [1,1,1]

Appearance41.material = Material42

Shape40.appearance = Appearance41
IndexedLineSet43 = x3d.IndexedLineSet()
IndexedLineSet43.DEF = "TCtoCC"
IndexedLineSet43.coordIndex = [0,1]
Coordinate44 = x3d.Coordinate()
Coordinate44.point = [(0, 0, 0),(0.2, 0.3, 0)]

IndexedLineSet43.coord = Coordinate44

Shape40.geometry = IndexedLineSet43

HAnimSegment29.children.append(Shape40)

HAnimJoint28.children.append(HAnimSegment29)
"""TCN"""
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "l_talocalcaneonavicular"
HAnimJoint45.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint45.center = [0,-0.3,0]
HAnimJoint45.ulimit = [0,0,0]
HAnimJoint45.llimit = [0,0,0]
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.name = "l_navicular"
HAnimSegment46.DEF = "hanim_l_navicular"
Transform47 = x3d.Transform()
Transform47.translation = [0,-0.3,0]
Shape48 = x3d.Shape()
Shape48.USE = "HAnimJointShape"

Transform47.children.append(Shape48)

HAnimSegment46.children.append(Transform47)
Shape49 = x3d.Shape()
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.emissiveColor = [1,1,1]

Appearance50.material = Material51

Shape49.appearance = Appearance50
IndexedLineSet52 = x3d.IndexedLineSet()
IndexedLineSet52.DEF = "TCNtoCN1"
IndexedLineSet52.coordIndex = [0,1]
Coordinate53 = x3d.Coordinate()
Coordinate53.point = [(0, -0.3, 0),(-0.1, -0.45, 0)]

IndexedLineSet52.coord = Coordinate53

Shape49.geometry = IndexedLineSet52

HAnimSegment46.children.append(Shape49)
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.emissiveColor = [1,1,1]

Appearance55.material = Material56

Shape54.appearance = Appearance55
IndexedLineSet57 = x3d.IndexedLineSet()
IndexedLineSet57.DEF = "TCNtoCN2"
IndexedLineSet57.coordIndex = [0,1]
Coordinate58 = x3d.Coordinate()
Coordinate58.point = [(0, -0.3, 0),(0, -0.45, 0)]

IndexedLineSet57.coord = Coordinate58

Shape54.geometry = IndexedLineSet57

HAnimSegment46.children.append(Shape54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.emissiveColor = [1,1,1]

Appearance60.material = Material61

Shape59.appearance = Appearance60
IndexedLineSet62 = x3d.IndexedLineSet()
IndexedLineSet62.DEF = "TCNtoCN3"
IndexedLineSet62.coordIndex = [0,1]
Coordinate63 = x3d.Coordinate()
Coordinate63.point = [(0, -0.3, 0),(0.1, -0.4, 0)]

IndexedLineSet62.coord = Coordinate63

Shape59.geometry = IndexedLineSet62

HAnimSegment46.children.append(Shape59)

HAnimJoint45.children.append(HAnimSegment46)
"""CN1"""
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.name = "l_cuneonavicular_1"
HAnimJoint64.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint64.center = [-0.1,-0.45,0]
HAnimJoint64.ulimit = [0,0,0]
HAnimJoint64.llimit = [0,0,0]
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.name = "l_cuneiform_1"
HAnimSegment65.DEF = "hanim_l_cuneiform_1"
Transform66 = x3d.Transform()
Transform66.translation = [-0.1,-0.45,0]
Shape67 = x3d.Shape()
Shape67.USE = "HAnimJointShape"

Transform66.children.append(Shape67)

HAnimSegment65.children.append(Transform66)
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.emissiveColor = [1,1,1]

Appearance69.material = Material70

Shape68.appearance = Appearance69
IndexedLineSet71 = x3d.IndexedLineSet()
IndexedLineSet71.DEF = "CN1toTMT1"
IndexedLineSet71.coordIndex = [0,1]
Coordinate72 = x3d.Coordinate()
Coordinate72.point = [(-0.1, -0.45, 0),(-0.1, -0.6, 0)]

IndexedLineSet71.coord = Coordinate72

Shape68.geometry = IndexedLineSet71

HAnimSegment65.children.append(Shape68)

HAnimJoint64.children.append(HAnimSegment65)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.name = "l_tarsometatarsal_1"
HAnimJoint73.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint73.center = [-0.1,-0.6,0]
HAnimJoint73.ulimit = [0,0,0]
HAnimJoint73.llimit = [0,0,0]
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.name = "l_metatarsal_1"
HAnimSegment74.DEF = "hanim_l_metatarsal_1"
Transform75 = x3d.Transform()
Transform75.translation = [-0.1,-0.6,0]
Shape76 = x3d.Shape()
Shape76.USE = "HAnimJointShape"

Transform75.children.append(Shape76)

HAnimSegment74.children.append(Transform75)
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material()
Material79.emissiveColor = [1,1,1]

Appearance78.material = Material79

Shape77.appearance = Appearance78
IndexedLineSet80 = x3d.IndexedLineSet()
IndexedLineSet80.DEF = "TMT1toMTP1"
IndexedLineSet80.coordIndex = [0,1]
Coordinate81 = x3d.Coordinate()
Coordinate81.point = [(-0.1, -0.6, 0),(-0.1, -0.9, 0)]

IndexedLineSet80.coord = Coordinate81

Shape77.geometry = IndexedLineSet80

HAnimSegment74.children.append(Shape77)

HAnimJoint73.children.append(HAnimSegment74)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.name = "l_metatarsophalangeal_1"
HAnimJoint82.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint82.center = [-0.1,-0.9,0]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]
HAnimSegment83 = x3d.HAnimSegment()
HAnimSegment83.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment83.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Transform84 = x3d.Transform()
Transform84.translation = [-0.1,-0.9,0]
Shape85 = x3d.Shape()
Shape85.USE = "HAnimJointShape"

Transform84.children.append(Shape85)

HAnimSegment83.children.append(Transform84)
Shape86 = x3d.Shape()
Appearance87 = x3d.Appearance()
Material88 = x3d.Material()
Material88.emissiveColor = [1,1,1]

Appearance87.material = Material88

Shape86.appearance = Appearance87
IndexedLineSet89 = x3d.IndexedLineSet()
IndexedLineSet89.DEF = "MTP1toIP1"
IndexedLineSet89.coordIndex = [0,1]
Coordinate90 = x3d.Coordinate()
Coordinate90.point = [(-0.1, -0.9, 0),(-0.1, -1.05, 0)]

IndexedLineSet89.coord = Coordinate90

Shape86.geometry = IndexedLineSet89

HAnimSegment83.children.append(Shape86)

HAnimJoint82.children.append(HAnimSegment83)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "l_tarsal_interphalangeal_1"
HAnimJoint91.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint91.center = [-0.1,-1.05,0]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.name = "l_tarsal_distal_phalanx_1"
HAnimSegment92.DEF = "hanim_l_tarsal_distal_phalanx_1"
Transform93 = x3d.Transform()
Transform93.translation = [-0.1,-1.05,0]
Shape94 = x3d.Shape()
Shape94.USE = "HAnimJointShape"

Transform93.children.append(Shape94)

HAnimSegment92.children.append(Transform93)
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
Material97 = x3d.Material()
Material97.emissiveColor = [1,1,1]

Appearance96.material = Material97

Shape95.appearance = Appearance96
IndexedLineSet98 = x3d.IndexedLineSet()
IndexedLineSet98.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1"
IndexedLineSet98.coordIndex = [0,1]
Coordinate99 = x3d.Coordinate()
Coordinate99.point = [(-0.1, -1.05, 0),(-0.1, -1.1, 0)]

IndexedLineSet98.coord = Coordinate99

Shape95.geometry = IndexedLineSet98

HAnimSegment92.children.append(Shape95)

HAnimJoint91.children.append(HAnimSegment92)

HAnimJoint82.children.append(HAnimJoint91)

HAnimJoint73.children.append(HAnimJoint82)

HAnimJoint64.children.append(HAnimJoint73)

HAnimJoint45.children.append(HAnimJoint64)
"""CN2"""
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.name = "l_cuneonavicular_2"
HAnimJoint100.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint100.center = [0,-0.45,0]
HAnimJoint100.ulimit = [0,0,0]
HAnimJoint100.llimit = [0,0,0]
HAnimSegment101 = x3d.HAnimSegment()
HAnimSegment101.name = "l_cuneiform_2"
HAnimSegment101.DEF = "hanim_l_cuneiform_2"
Transform102 = x3d.Transform()
Transform102.translation = [0,-0.45,0]
Shape103 = x3d.Shape()
Shape103.USE = "HAnimJointShape"

Transform102.children.append(Shape103)

HAnimSegment101.children.append(Transform102)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.emissiveColor = [1,1,1]

Appearance105.material = Material106

Shape104.appearance = Appearance105
IndexedLineSet107 = x3d.IndexedLineSet()
IndexedLineSet107.DEF = "CN2toTMT2"
IndexedLineSet107.coordIndex = [0,1]
Coordinate108 = x3d.Coordinate()
Coordinate108.point = [(0, -0.45, 0),(0.05, -0.6, 0)]

IndexedLineSet107.coord = Coordinate108

Shape104.geometry = IndexedLineSet107

HAnimSegment101.children.append(Shape104)

HAnimJoint100.children.append(HAnimSegment101)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.name = "l_tarsometatarsal_2"
HAnimJoint109.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint109.center = [0.05,-0.6,0]
HAnimJoint109.ulimit = [0,0,0]
HAnimJoint109.llimit = [0,0,0]
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.name = "l_metatarsal_2"
HAnimSegment110.DEF = "hanim_l_metatarsal_2"
Transform111 = x3d.Transform()
Transform111.translation = [0.05,-0.6,0]
Shape112 = x3d.Shape()
Shape112.USE = "HAnimJointShape"

Transform111.children.append(Shape112)

HAnimSegment110.children.append(Transform111)
Shape113 = x3d.Shape()
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.emissiveColor = [1,1,1]

Appearance114.material = Material115

Shape113.appearance = Appearance114
IndexedLineSet116 = x3d.IndexedLineSet()
IndexedLineSet116.DEF = "TMT2toMTP2"
IndexedLineSet116.coordIndex = [0,1]
Coordinate117 = x3d.Coordinate()
Coordinate117.point = [(0.05, -0.6, 0),(0.05, -0.9, 0)]

IndexedLineSet116.coord = Coordinate117

Shape113.geometry = IndexedLineSet116

HAnimSegment110.children.append(Shape113)

HAnimJoint109.children.append(HAnimSegment110)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.name = "l_metatarsophalangeal_2"
HAnimJoint118.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint118.center = [0.05,-0.9,0]
HAnimJoint118.ulimit = [0,0,0]
HAnimJoint118.llimit = [0,0,0]
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment119.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform120 = x3d.Transform()
Transform120.translation = [0.05,-0.9,0]
Shape121 = x3d.Shape()
Shape121.USE = "HAnimJointShape"

Transform120.children.append(Shape121)

HAnimSegment119.children.append(Transform120)
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.emissiveColor = [1,1,1]

Appearance123.material = Material124

Shape122.appearance = Appearance123
IndexedLineSet125 = x3d.IndexedLineSet()
IndexedLineSet125.DEF = "MTP2toPIP2"
IndexedLineSet125.coordIndex = [0,1]
Coordinate126 = x3d.Coordinate()
Coordinate126.point = [(0.05, -0.9, 0),(0.05, -1.05, 0)]

IndexedLineSet125.coord = Coordinate126

Shape122.geometry = IndexedLineSet125

HAnimSegment119.children.append(Shape122)

HAnimJoint118.children.append(HAnimSegment119)
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint127.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint127.center = [0.05,-1.05,0]
HAnimJoint127.ulimit = [0,0,0]
HAnimJoint127.llimit = [0,0,0]
HAnimSegment128 = x3d.HAnimSegment()
HAnimSegment128.name = "l_tarsal_middle_phalanx_2"
HAnimSegment128.DEF = "hanim_l_tarsal_middle_phalanx_2"
Transform129 = x3d.Transform()
Transform129.translation = [0.05,-1.05,0]
Shape130 = x3d.Shape()
Shape130.USE = "HAnimJointShape"

Transform129.children.append(Shape130)

HAnimSegment128.children.append(Transform129)
Shape131 = x3d.Shape()
Appearance132 = x3d.Appearance()
Material133 = x3d.Material()
Material133.emissiveColor = [1,1,1]

Appearance132.material = Material133

Shape131.appearance = Appearance132
IndexedLineSet134 = x3d.IndexedLineSet()
IndexedLineSet134.DEF = "PIP2toDIP2"
IndexedLineSet134.coordIndex = [0,1]
Coordinate135 = x3d.Coordinate()
Coordinate135.point = [(0.05, -1.05, 0),(0.05, -1.12, 0)]

IndexedLineSet134.coord = Coordinate135

Shape131.geometry = IndexedLineSet134

HAnimSegment128.children.append(Shape131)

HAnimJoint127.children.append(HAnimSegment128)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint136.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint136.center = [0.05,-1.12,0]
HAnimJoint136.ulimit = [0,0,0]
HAnimJoint136.llimit = [0,0,0]
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.name = "l_tarsal_distal_phalanx_2"
HAnimSegment137.DEF = "hanim_l_tarsal_distal_phalanx_2"
Transform138 = x3d.Transform()
Transform138.translation = [0.05,-1.12,0]
Shape139 = x3d.Shape()
Shape139.USE = "HAnimJointShape"

Transform138.children.append(Shape139)

HAnimSegment137.children.append(Transform138)
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.emissiveColor = [1,1,1]

Appearance141.material = Material142

Shape140.appearance = Appearance141
IndexedLineSet143 = x3d.IndexedLineSet()
IndexedLineSet143.DEF = "tiptoe_l_tarsal_distal_phalanx_2"
IndexedLineSet143.coordIndex = [0,1]
Coordinate144 = x3d.Coordinate()
Coordinate144.point = [(0.05, -1.12, 0),(0.05, -1.16, 0)]

IndexedLineSet143.coord = Coordinate144

Shape140.geometry = IndexedLineSet143

HAnimSegment137.children.append(Shape140)

HAnimJoint136.children.append(HAnimSegment137)

HAnimJoint127.children.append(HAnimJoint136)

HAnimJoint118.children.append(HAnimJoint127)

HAnimJoint109.children.append(HAnimJoint118)

HAnimJoint100.children.append(HAnimJoint109)

HAnimJoint45.children.append(HAnimJoint100)
"""CN3"""
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.name = "l_cuneonavicular_3"
HAnimJoint145.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint145.center = [0.1,-0.4,0]
HAnimJoint145.ulimit = [0,0,0]
HAnimJoint145.llimit = [0,0,0]
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.name = "l_cuneiform_3"
HAnimSegment146.DEF = "hanim_l_cuneiform_3"
Transform147 = x3d.Transform()
Transform147.translation = [0.1,-0.4,0]
Shape148 = x3d.Shape()
Shape148.USE = "HAnimJointShape"

Transform147.children.append(Shape148)

HAnimSegment146.children.append(Transform147)
Shape149 = x3d.Shape()
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()
Material151.emissiveColor = [1,1,1]

Appearance150.material = Material151

Shape149.appearance = Appearance150
IndexedLineSet152 = x3d.IndexedLineSet()
IndexedLineSet152.DEF = "CN3toTMT3"
IndexedLineSet152.coordIndex = [0,1]
Coordinate153 = x3d.Coordinate()
Coordinate153.point = [(0.1, -0.4, 0),(0.15, -0.6, 0)]

IndexedLineSet152.coord = Coordinate153

Shape149.geometry = IndexedLineSet152

HAnimSegment146.children.append(Shape149)

HAnimJoint145.children.append(HAnimSegment146)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.name = "l_tarsometatarsal_3"
HAnimJoint154.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint154.center = [0.15,-0.6,0]
HAnimJoint154.ulimit = [0,0,0]
HAnimJoint154.llimit = [0,0,0]
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.name = "l_metatarsal_3"
HAnimSegment155.DEF = "hanim_l_metatarsal_3"
Transform156 = x3d.Transform()
Transform156.translation = [0.15,-0.6,0]
Shape157 = x3d.Shape()
Shape157.USE = "HAnimJointShape"

Transform156.children.append(Shape157)

HAnimSegment155.children.append(Transform156)
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.emissiveColor = [1,1,1]

Appearance159.material = Material160

Shape158.appearance = Appearance159
IndexedLineSet161 = x3d.IndexedLineSet()
IndexedLineSet161.DEF = "TMT3toMTP3"
IndexedLineSet161.coordIndex = [0,1]
Coordinate162 = x3d.Coordinate()
Coordinate162.point = [(0.15, -0.6, 0),(0.15, -0.9, 0)]

IndexedLineSet161.coord = Coordinate162

Shape158.geometry = IndexedLineSet161

HAnimSegment155.children.append(Shape158)

HAnimJoint154.children.append(HAnimSegment155)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.name = "l_metatarsophalangeal_3"
HAnimJoint163.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint163.center = [0.15,-0.9,0]
HAnimJoint163.ulimit = [0,0,0]
HAnimJoint163.llimit = [0,0,0]
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment164.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Transform165 = x3d.Transform()
Transform165.translation = [0.15,-0.9,0]
Shape166 = x3d.Shape()
Shape166.USE = "HAnimJointShape"

Transform165.children.append(Shape166)

HAnimSegment164.children.append(Transform165)
Shape167 = x3d.Shape()
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()
Material169.emissiveColor = [1,1,1]

Appearance168.material = Material169

Shape167.appearance = Appearance168
IndexedLineSet170 = x3d.IndexedLineSet()
IndexedLineSet170.DEF = "MTP3toPIP3"
IndexedLineSet170.coordIndex = [0,1]
Coordinate171 = x3d.Coordinate()
Coordinate171.point = [(0.15, -0.9, 0),(0.15, -1.05, 0)]

IndexedLineSet170.coord = Coordinate171

Shape167.geometry = IndexedLineSet170

HAnimSegment164.children.append(Shape167)

HAnimJoint163.children.append(HAnimSegment164)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint172.center = [0.15,-1.05,0]
HAnimJoint172.ulimit = [0,0,0]
HAnimJoint172.llimit = [0,0,0]
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.name = "l_tarsal_middle_phalanx_3"
HAnimSegment173.DEF = "hanim_l_tarsal_middle_phalanx_3"
Transform174 = x3d.Transform()
Transform174.translation = [0.15,-1.05,0]
Shape175 = x3d.Shape()
Shape175.USE = "HAnimJointShape"

Transform174.children.append(Shape175)

HAnimSegment173.children.append(Transform174)
Shape176 = x3d.Shape()
Appearance177 = x3d.Appearance()
Material178 = x3d.Material()
Material178.emissiveColor = [1,1,1]

Appearance177.material = Material178

Shape176.appearance = Appearance177
IndexedLineSet179 = x3d.IndexedLineSet()
IndexedLineSet179.DEF = "PIP3toDIP3"
IndexedLineSet179.coordIndex = [0,1]
Coordinate180 = x3d.Coordinate()
Coordinate180.point = [(0.15, -1.05, 0),(0.15, -1.13, 0)]

IndexedLineSet179.coord = Coordinate180

Shape176.geometry = IndexedLineSet179

HAnimSegment173.children.append(Shape176)

HAnimJoint172.children.append(HAnimSegment173)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint181.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint181.center = [0.15,-1.13,0]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.name = "l_tarsal_distal_phalanx_3"
HAnimSegment182.DEF = "hanim_l_tarsal_distal_phalanx_3"
Transform183 = x3d.Transform()
Transform183.translation = [0.15,-1.13,0]
Shape184 = x3d.Shape()
Shape184.USE = "HAnimJointShape"

Transform183.children.append(Shape184)

HAnimSegment182.children.append(Transform183)
Shape185 = x3d.Shape()
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()
Material187.emissiveColor = [1,1,1]

Appearance186.material = Material187

Shape185.appearance = Appearance186
IndexedLineSet188 = x3d.IndexedLineSet()
IndexedLineSet188.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3"
IndexedLineSet188.coordIndex = [0,1]
Coordinate189 = x3d.Coordinate()
Coordinate189.point = [(0.15, -1.13, 0),(0.15, -1.16, 0)]

IndexedLineSet188.coord = Coordinate189

Shape185.geometry = IndexedLineSet188

HAnimSegment182.children.append(Shape185)

HAnimJoint181.children.append(HAnimSegment182)

HAnimJoint172.children.append(HAnimJoint181)

HAnimJoint163.children.append(HAnimJoint172)

HAnimJoint154.children.append(HAnimJoint163)

HAnimJoint145.children.append(HAnimJoint154)

HAnimJoint45.children.append(HAnimJoint145)

HAnimJoint28.children.append(HAnimJoint45)
"""CC"""
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.name = "l_calcaneocuboid"
HAnimJoint190.DEF = "hanim_l_calcaneocuboid"
HAnimJoint190.center = [0.2,0.3,0]
HAnimJoint190.ulimit = [0,0,0]
HAnimJoint190.llimit = [0,0,0]
HAnimSegment191 = x3d.HAnimSegment()
HAnimSegment191.name = "l_calcaneus"
HAnimSegment191.DEF = "hanim_l_calcaneus"
Transform192 = x3d.Transform()
Transform192.translation = [0.2,0.3,0]
Shape193 = x3d.Shape()
Shape193.USE = "HAnimJointShape"

Transform192.children.append(Shape193)

HAnimSegment191.children.append(Transform192)
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.emissiveColor = [1,1,1]

Appearance195.material = Material196

Shape194.appearance = Appearance195
IndexedLineSet197 = x3d.IndexedLineSet()
IndexedLineSet197.DEF = "CCtoTT"
IndexedLineSet197.coordIndex = [0,1]
Coordinate198 = x3d.Coordinate()
Coordinate198.point = [(0.2, 0.3, 0),(0.21, -0.3, 0)]

IndexedLineSet197.coord = Coordinate198

Shape194.geometry = IndexedLineSet197

HAnimSegment191.children.append(Shape194)

HAnimJoint190.children.append(HAnimSegment191)
"""TT"""
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.name = "l_transversetarsal"
HAnimJoint199.DEF = "hanim_l_transversetarsal"
HAnimJoint199.center = [0.21,-0.3,0]
HAnimJoint199.ulimit = [0,0,0]
HAnimJoint199.llimit = [0,0,0]
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.name = "l_cuboid"
HAnimSegment200.DEF = "hanim_l_cuboid"
Transform201 = x3d.Transform()
Transform201.translation = [0.21,-0.3,0]
Shape202 = x3d.Shape()
Shape202.USE = "HAnimJointShape"

Transform201.children.append(Shape202)

HAnimSegment200.children.append(Transform201)
Shape203 = x3d.Shape()
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()
Material205.emissiveColor = [1,1,1]

Appearance204.material = Material205

Shape203.appearance = Appearance204
IndexedLineSet206 = x3d.IndexedLineSet()
IndexedLineSet206.DEF = "TTtoTMT4"
IndexedLineSet206.coordIndex = [0,1]
Coordinate207 = x3d.Coordinate()
Coordinate207.point = [(0.21, -0.3, 0),(0.25, -0.58, 0)]

IndexedLineSet206.coord = Coordinate207

Shape203.geometry = IndexedLineSet206

HAnimSegment200.children.append(Shape203)
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()
Material210.emissiveColor = [1,1,1]

Appearance209.material = Material210

Shape208.appearance = Appearance209
IndexedLineSet211 = x3d.IndexedLineSet()
IndexedLineSet211.DEF = "TTtoTMT5"
IndexedLineSet211.coordIndex = [0,1]
Coordinate212 = x3d.Coordinate()
Coordinate212.point = [(0.21, -0.3, 0),(0.33, -0.52, 0)]

IndexedLineSet211.coord = Coordinate212

Shape208.geometry = IndexedLineSet211

HAnimSegment200.children.append(Shape208)

HAnimJoint199.children.append(HAnimSegment200)
"""TMT4"""
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.name = "l_tarsometatarsal_4"
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint213.center = [0.25,-0.58,0]
HAnimJoint213.ulimit = [0,0,0]
HAnimJoint213.llimit = [0,0,0]
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.name = "l_metatarsal_4"
HAnimSegment214.DEF = "hanim_l_metatarsal_4"
Transform215 = x3d.Transform()
Transform215.translation = [0.25,-0.58,0]
Shape216 = x3d.Shape()
Shape216.USE = "HAnimJointShape"

Transform215.children.append(Shape216)

HAnimSegment214.children.append(Transform215)
Shape217 = x3d.Shape()
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.emissiveColor = [1,1,1]

Appearance218.material = Material219

Shape217.appearance = Appearance218
IndexedLineSet220 = x3d.IndexedLineSet()
IndexedLineSet220.DEF = "TMT4toMTP4"
IndexedLineSet220.coordIndex = [0,1]
Coordinate221 = x3d.Coordinate()
Coordinate221.point = [(0.25, -0.58, 0),(0.25, -0.87, 0)]

IndexedLineSet220.coord = Coordinate221

Shape217.geometry = IndexedLineSet220

HAnimSegment214.children.append(Shape217)

HAnimJoint213.children.append(HAnimSegment214)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.name = "l_metatarsophalangeal_4"
HAnimJoint222.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint222.center = [0.25,-0.87,0]
HAnimJoint222.ulimit = [0,0,0]
HAnimJoint222.llimit = [0,0,0]
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment223.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Transform224 = x3d.Transform()
Transform224.translation = [0.25,-0.87,0]
Shape225 = x3d.Shape()
Shape225.USE = "HAnimJointShape"

Transform224.children.append(Shape225)

HAnimSegment223.children.append(Transform224)
Shape226 = x3d.Shape()
Appearance227 = x3d.Appearance()
Material228 = x3d.Material()
Material228.emissiveColor = [1,1,1]

Appearance227.material = Material228

Shape226.appearance = Appearance227
IndexedLineSet229 = x3d.IndexedLineSet()
IndexedLineSet229.DEF = "MTP4toPIP4"
IndexedLineSet229.coordIndex = [0,1]
Coordinate230 = x3d.Coordinate()
Coordinate230.point = [(0.25, -0.87, 0),(0.25, -1, 0)]

IndexedLineSet229.coord = Coordinate230

Shape226.geometry = IndexedLineSet229

HAnimSegment223.children.append(Shape226)

HAnimJoint222.children.append(HAnimSegment223)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint231.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint231.center = [0.25,-1,0]
HAnimJoint231.ulimit = [0,0,0]
HAnimJoint231.llimit = [0,0,0]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.name = "l_tarsal_middle_phalanx_4"
HAnimSegment232.DEF = "hanim_l_tarsal_middle_phalanx_4"
Transform233 = x3d.Transform()
Transform233.translation = [0.25,-1,0]
Shape234 = x3d.Shape()
Shape234.USE = "HAnimJointShape"

Transform233.children.append(Shape234)

HAnimSegment232.children.append(Transform233)
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance()
Material237 = x3d.Material()
Material237.emissiveColor = [1,1,1]

Appearance236.material = Material237

Shape235.appearance = Appearance236
IndexedLineSet238 = x3d.IndexedLineSet()
IndexedLineSet238.DEF = "PIP4toDIP4"
IndexedLineSet238.coordIndex = [0,1]
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(0.25, -1, 0),(0.25, -1.1, 0)]

IndexedLineSet238.coord = Coordinate239

Shape235.geometry = IndexedLineSet238

HAnimSegment232.children.append(Shape235)

HAnimJoint231.children.append(HAnimSegment232)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint240.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint240.center = [0.25,-1.1,0]
HAnimJoint240.ulimit = [0,0,0]
HAnimJoint240.llimit = [0,0,0]
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.name = "l_tarsal_distal_phalanx_4"
HAnimSegment241.DEF = "hanim_l_tarsal_distal_phalanx_4"
Transform242 = x3d.Transform()
Transform242.translation = [0.25,-1.1,0]
Shape243 = x3d.Shape()
Shape243.USE = "HAnimJointShape"

Transform242.children.append(Shape243)

HAnimSegment241.children.append(Transform242)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.emissiveColor = [1,1,1]

Appearance245.material = Material246

Shape244.appearance = Appearance245
IndexedLineSet247 = x3d.IndexedLineSet()
IndexedLineSet247.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4"
IndexedLineSet247.coordIndex = [0,1]
Coordinate248 = x3d.Coordinate()
Coordinate248.point = [(0.25, -1.1, 0),(0.25, -1.15, 0)]

IndexedLineSet247.coord = Coordinate248

Shape244.geometry = IndexedLineSet247

HAnimSegment241.children.append(Shape244)

HAnimJoint240.children.append(HAnimSegment241)

HAnimJoint231.children.append(HAnimJoint240)

HAnimJoint222.children.append(HAnimJoint231)

HAnimJoint213.children.append(HAnimJoint222)

HAnimJoint199.children.append(HAnimJoint213)
"""TMT5"""
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.name = "l_tarsometatarsal_5"
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint249.center = [0.33,-0.52,0]
HAnimJoint249.ulimit = [0,0,0]
HAnimJoint249.llimit = [0,0,0]
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.name = "l_metatarsal_5"
HAnimSegment250.DEF = "hanim_l_metatarsal_5"
Transform251 = x3d.Transform()
Transform251.translation = [0.33,-0.52,0]
Shape252 = x3d.Shape()
Shape252.USE = "HAnimJointShape"

Transform251.children.append(Shape252)

HAnimSegment250.children.append(Transform251)
Shape253 = x3d.Shape()
Appearance254 = x3d.Appearance()
Material255 = x3d.Material()
Material255.emissiveColor = [1,1,1]

Appearance254.material = Material255

Shape253.appearance = Appearance254
IndexedLineSet256 = x3d.IndexedLineSet()
IndexedLineSet256.DEF = "TMT5toMTP5"
IndexedLineSet256.coordIndex = [0,1]
Coordinate257 = x3d.Coordinate()
Coordinate257.point = [(0.33, -0.52, 0),(0.34, -0.8, 0)]

IndexedLineSet256.coord = Coordinate257

Shape253.geometry = IndexedLineSet256

HAnimSegment250.children.append(Shape253)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.name = "l_metatarsophalangeal_5"
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint258.center = [0.34,-0.8,0]
HAnimJoint258.ulimit = [0,0,0]
HAnimJoint258.llimit = [0,0,0]
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Transform260 = x3d.Transform()
Transform260.translation = [0.34,-0.8,0]
Shape261 = x3d.Shape()
Shape261.USE = "HAnimJointShape"

Transform260.children.append(Shape261)

HAnimSegment259.children.append(Transform260)
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Material264 = x3d.Material()
Material264.emissiveColor = [1,1,1]

Appearance263.material = Material264

Shape262.appearance = Appearance263
IndexedLineSet265 = x3d.IndexedLineSet()
IndexedLineSet265.DEF = "MTP5toPIP5"
IndexedLineSet265.coordIndex = [0,1]
Coordinate266 = x3d.Coordinate()
Coordinate266.point = [(0.34, -0.8, 0),(0.34, -0.95, 0)]

IndexedLineSet265.coord = Coordinate266

Shape262.geometry = IndexedLineSet265

HAnimSegment259.children.append(Shape262)

HAnimJoint258.children.append(HAnimSegment259)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint267.center = [0.34,-0.95,0]
HAnimJoint267.ulimit = [0,0,0]
HAnimJoint267.llimit = [0,0,0]
HAnimSegment268 = x3d.HAnimSegment()
HAnimSegment268.name = "l_tarsal_middle_phalanx_5"
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_5"
Transform269 = x3d.Transform()
Transform269.translation = [0.34,-0.95,0]
Shape270 = x3d.Shape()
Shape270.USE = "HAnimJointShape"

Transform269.children.append(Shape270)

HAnimSegment268.children.append(Transform269)
Shape271 = x3d.Shape()
Appearance272 = x3d.Appearance()
Material273 = x3d.Material()
Material273.emissiveColor = [1,1,1]

Appearance272.material = Material273

Shape271.appearance = Appearance272
IndexedLineSet274 = x3d.IndexedLineSet()
IndexedLineSet274.DEF = "PIP5toDIP5"
IndexedLineSet274.coordIndex = [0,1]
Coordinate275 = x3d.Coordinate()
Coordinate275.point = [(0.34, -0.95, 0),(0.34, -1.05, 0)]

IndexedLineSet274.coord = Coordinate275

Shape271.geometry = IndexedLineSet274

HAnimSegment268.children.append(Shape271)

HAnimJoint267.children.append(HAnimSegment268)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint276.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint276.center = [0.34,-1.05,0]
HAnimJoint276.ulimit = [0,0,0]
HAnimJoint276.llimit = [0,0,0]
HAnimSegment277 = x3d.HAnimSegment()
HAnimSegment277.name = "l_tarsal_distal_phalanx_5"
HAnimSegment277.DEF = "hanim_l_tarsal_distal_phalanx_5"
Transform278 = x3d.Transform()
Transform278.translation = [0.34,-1.05,0]
Shape279 = x3d.Shape()
Shape279.USE = "HAnimJointShape"

Transform278.children.append(Shape279)

HAnimSegment277.children.append(Transform278)
Shape280 = x3d.Shape()
Appearance281 = x3d.Appearance()
Material282 = x3d.Material()
Material282.emissiveColor = [1,1,1]

Appearance281.material = Material282

Shape280.appearance = Appearance281
IndexedLineSet283 = x3d.IndexedLineSet()
IndexedLineSet283.DEF = "tiptoe_l_tarsal_distal_interphalangeal_5"
IndexedLineSet283.coordIndex = [0,1]
Coordinate284 = x3d.Coordinate()
Coordinate284.point = [(0.34, -1.05, 0),(0.34, -1.08, 0)]

IndexedLineSet283.coord = Coordinate284

Shape280.geometry = IndexedLineSet283

HAnimSegment277.children.append(Shape280)

HAnimJoint276.children.append(HAnimSegment277)

HAnimJoint267.children.append(HAnimJoint276)

HAnimJoint258.children.append(HAnimJoint267)

HAnimJoint249.children.append(HAnimJoint258)

HAnimJoint199.children.append(HAnimJoint249)

HAnimJoint190.children.append(HAnimJoint199)

HAnimJoint28.children.append(HAnimJoint190)

HAnimJoint27.children.append(HAnimJoint28)

HAnimHumanoid24.skeleton.append(HAnimJoint27)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.USE = "hanim_humanoid_root"

HAnimHumanoid24.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid24.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid24.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid24.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid24.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid24.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid24.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid24.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid24.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid24.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid24.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.USE = "hanim_l_talocrural"

HAnimHumanoid24.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid24.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid24.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid24.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid24.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.USE = "hanim_l_tarsal_interphalangeal_1"

HAnimHumanoid24.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid24.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid24.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid24.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid24.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid24.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid24.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid24.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid24.joints.append(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid24.joints.append(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.USE = "hanim_l_transversetarsal"

HAnimHumanoid24.joints.append(HAnimJoint311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.USE = "hanim_l_calcaneus"

HAnimHumanoid24.segments.append(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.USE = "hanim_l_cuboid"

HAnimHumanoid24.segments.append(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.USE = "hanim_l_cuneiform_1"

HAnimHumanoid24.segments.append(HAnimSegment314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.USE = "hanim_l_cuneiform_2"

HAnimHumanoid24.segments.append(HAnimSegment315)
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.USE = "hanim_l_cuneiform_3"

HAnimHumanoid24.segments.append(HAnimSegment316)
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.USE = "hanim_l_metatarsal_1"

HAnimHumanoid24.segments.append(HAnimSegment317)
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.USE = "hanim_l_metatarsal_2"

HAnimHumanoid24.segments.append(HAnimSegment318)
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.USE = "hanim_l_metatarsal_3"

HAnimHumanoid24.segments.append(HAnimSegment319)
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.USE = "hanim_l_metatarsal_4"

HAnimHumanoid24.segments.append(HAnimSegment320)
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.USE = "hanim_l_metatarsal_5"

HAnimHumanoid24.segments.append(HAnimSegment321)
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.USE = "hanim_l_navicular"

HAnimHumanoid24.segments.append(HAnimSegment322)
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.USE = "hanim_l_talus"

HAnimHumanoid24.segments.append(HAnimSegment323)
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.USE = "hanim_l_tarsal_distal_phalanx_1"

HAnimHumanoid24.segments.append(HAnimSegment324)
HAnimSegment325 = x3d.HAnimSegment()
HAnimSegment325.USE = "hanim_l_tarsal_distal_phalanx_2"

HAnimHumanoid24.segments.append(HAnimSegment325)
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.USE = "hanim_l_tarsal_distal_phalanx_3"

HAnimHumanoid24.segments.append(HAnimSegment326)
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.USE = "hanim_l_tarsal_distal_phalanx_4"

HAnimHumanoid24.segments.append(HAnimSegment327)
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.USE = "hanim_l_tarsal_distal_phalanx_5"

HAnimHumanoid24.segments.append(HAnimSegment328)
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.USE = "hanim_l_tarsal_middle_phalanx_2"

HAnimHumanoid24.segments.append(HAnimSegment329)
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.USE = "hanim_l_tarsal_middle_phalanx_3"

HAnimHumanoid24.segments.append(HAnimSegment330)
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.USE = "hanim_l_tarsal_middle_phalanx_4"

HAnimHumanoid24.segments.append(HAnimSegment331)
HAnimSegment332 = x3d.HAnimSegment()
HAnimSegment332.USE = "hanim_l_tarsal_middle_phalanx_5"

HAnimHumanoid24.segments.append(HAnimSegment332)
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.USE = "hanim_l_tarsal_proximal_phalanx_1"

HAnimHumanoid24.segments.append(HAnimSegment333)
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid24.segments.append(HAnimSegment334)
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.USE = "hanim_l_tarsal_proximal_phalanx_3"

HAnimHumanoid24.segments.append(HAnimSegment335)
HAnimSegment336 = x3d.HAnimSegment()
HAnimSegment336.USE = "hanim_l_tarsal_proximal_phalanx_4"

HAnimHumanoid24.segments.append(HAnimSegment336)
HAnimSegment337 = x3d.HAnimSegment()
HAnimSegment337.USE = "hanim_l_tarsal_proximal_phalanx_5"

HAnimHumanoid24.segments.append(HAnimSegment337)

Scene22.children.append(HAnimHumanoid24)

X3D0.Scene = Scene22
f = open("../data/HAnimModelFootLeft.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelFootLeft.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelFootLeft.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

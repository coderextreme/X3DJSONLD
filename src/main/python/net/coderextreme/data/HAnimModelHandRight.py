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
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"

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
WorldInfo25.title = "HAnimModelHandRight.x3d"

Scene24.children.append(WorldInfo25)
HAnimHumanoid26 = x3d.HAnimHumanoid()
HAnimHumanoid26.name = "Hand_Right"
HAnimHumanoid26.DEF = "hanim_Hand_Right"
HAnimHumanoid26.loa = 4
HAnimHumanoid26.version = "2.0"
"""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""
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
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.name = "humanoid_root"
HAnimJoint29.DEF = "hanim_humanoid_root"
HAnimJoint29.ulimit = [0,0,0]
HAnimJoint29.llimit = [0,0,0]
"""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model"""
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.name = "r_radiocarpal"
HAnimJoint30.DEF = "hanim_r_radiocarpal"
HAnimJoint30.description = "connection joint of hand to leg above"
HAnimJoint30.ulimit = [0,0,0]
HAnimJoint30.llimit = [0,0,0]
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.name = "r_carpal"
HAnimSegment31.DEF = "hanim_r_carpal"
Transform32 = x3d.Transform()
Shape33 = x3d.Shape()
Shape33.DEF = "HAnimJointShape"
Sphere34 = x3d.Sphere()
Sphere34.radius = 0.025

Shape33.geometry = Sphere34
Appearance35 = x3d.Appearance()
Appearance35.DEF = "HAnimJointAppearanceBlue"
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
IndexedLineSet40 = x3d.IndexedLineSet()
IndexedLineSet40.DEF = "RCToMC12"
IndexedLineSet40.coordIndex = [0,1]
Coordinate41 = x3d.Coordinate()
Coordinate41.point = [(0, 0, 0),(-0.1, 0.1, 0)]

IndexedLineSet40.coord = Coordinate41

Shape37.geometry = IndexedLineSet40

HAnimSegment31.children.append(Shape37)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.emissiveColor = [1,1,1]

Appearance43.material = Material44

Shape42.appearance = Appearance43
IndexedLineSet45 = x3d.IndexedLineSet()
IndexedLineSet45.DEF = "RCToMC3"
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
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.DEF = "RCToMC45"
IndexedLineSet50.coordIndex = [0,1]
Coordinate51 = x3d.Coordinate()
Coordinate51.point = [(0, 0, 0),(0.1, 0.1, 0)]

IndexedLineSet50.coord = Coordinate51

Shape47.geometry = IndexedLineSet50

HAnimSegment31.children.append(Shape47)

HAnimJoint30.children.append(HAnimSegment31)
"""MC1"""
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.name = "r_midcarpal_1"
HAnimJoint52.DEF = "hanim_r_midcarpal_1"
HAnimJoint52.center = [-0.14,0.09,0]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.name = "r_trapezium"
HAnimSegment53.DEF = "hanim_r_trapezium"
Transform54 = x3d.Transform()
Transform54.translation = [-0.14,0.09,0]
Shape55 = x3d.Shape()
Shape55.DEF = "HAnimNewJointShape"
Sphere56 = x3d.Sphere()
Sphere56.radius = 0.025

Shape55.geometry = Sphere56
Appearance57 = x3d.Appearance()
Appearance57.DEF = "HAnimJointAppearanceRed"
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
IndexedLineSet62 = x3d.IndexedLineSet()
IndexedLineSet62.DEF = "MC12toCMC1"
IndexedLineSet62.coordIndex = [0,1]
Coordinate63 = x3d.Coordinate()
Coordinate63.point = [(-0.1, 0.1, 0),(-0.2, 0.15, 0)]

IndexedLineSet62.coord = Coordinate63

Shape59.geometry = IndexedLineSet62

HAnimSegment53.children.append(Shape59)

HAnimJoint52.children.append(HAnimSegment53)
"""thumb finger"""
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.name = "r_carpometacarpal_1"
HAnimJoint64.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint64.center = [-0.2,0.15,0]
HAnimJoint64.ulimit = [0,0,0]
HAnimJoint64.llimit = [0,0,0]
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.name = "r_metacarpal_1"
HAnimSegment65.DEF = "hanim_r_metacarpal_1"
Transform66 = x3d.Transform()
Transform66.translation = [-0.2,0.15,0]
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
IndexedLineSet71.DEF = "CMC1toMCP1xxx"
IndexedLineSet71.coordIndex = [0,1]
Coordinate72 = x3d.Coordinate()
Coordinate72.point = [(-0.2, 0.15, 0),(-0.3, 0.3, 0)]

IndexedLineSet71.coord = Coordinate72

Shape68.geometry = IndexedLineSet71

HAnimSegment65.children.append(Shape68)

HAnimJoint64.children.append(HAnimSegment65)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.name = "r_metacarpophalangeal_1"
HAnimJoint73.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint73.center = [-0.3,0.3,0]
HAnimJoint73.ulimit = [0,0,0]
HAnimJoint73.llimit = [0,0,0]
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.name = "r_carpal_proximal_phalanx_1"
HAnimSegment74.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform75 = x3d.Transform()
Transform75.translation = [-0.3,0.3,0]
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
IndexedLineSet80.DEF = "MCP11toIP1"
IndexedLineSet80.coordIndex = [0,1]
Coordinate81 = x3d.Coordinate()
Coordinate81.point = [(-0.3, 0.3, 0),(-0.35, 0.4, 0)]

IndexedLineSet80.coord = Coordinate81

Shape77.geometry = IndexedLineSet80

HAnimSegment74.children.append(Shape77)

HAnimJoint73.children.append(HAnimSegment74)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.name = "r_carpal_interphalangeal_1"
HAnimJoint82.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint82.center = [-0.35,0.4,0]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]
HAnimSegment83 = x3d.HAnimSegment()
HAnimSegment83.name = "r_carpal_distal_phalanx_1"
HAnimSegment83.DEF = "hanim_r_carpal_distal_phalanx_1"
Transform84 = x3d.Transform()
Transform84.translation = [-0.35,0.4,0]
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
IndexedLineSet89.DEF = "fingertip_r_carpal_interphalangeal_1"
IndexedLineSet89.coordIndex = [0,1]
Coordinate90 = x3d.Coordinate()
Coordinate90.point = [(-0.35, 0.4, 0),(-0.36, 0.45, 0)]

IndexedLineSet89.coord = Coordinate90

Shape86.geometry = IndexedLineSet89

HAnimSegment83.children.append(Shape86)

HAnimJoint82.children.append(HAnimSegment83)

HAnimJoint73.children.append(HAnimJoint82)

HAnimJoint64.children.append(HAnimJoint73)

HAnimJoint52.children.append(HAnimJoint64)

HAnimJoint30.children.append(HAnimJoint52)
"""MC2"""
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "r_midcarpal_2"
HAnimJoint91.DEF = "hanim_r_midcarpal_2"
HAnimJoint91.center = [-0.07,0.07,0]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.name = "r_trapezoid"
HAnimSegment92.DEF = "hanim_r_trapezoid"
Transform93 = x3d.Transform()
Transform93.translation = [-0.07,0.07,0]
Shape94 = x3d.Shape()
Shape94.USE = "HAnimNewJointShape"

Transform93.children.append(Shape94)

HAnimSegment92.children.append(Transform93)
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
Material97 = x3d.Material()
Material97.emissiveColor = [1,1,1]

Appearance96.material = Material97

Shape95.appearance = Appearance96
IndexedLineSet98 = x3d.IndexedLineSet()
IndexedLineSet98.DEF = "MC12toCMC2"
IndexedLineSet98.coordIndex = [0,1]
Coordinate99 = x3d.Coordinate()
Coordinate99.point = [(-0.1, 0.1, 0),(-0.1, 0.2, 0)]

IndexedLineSet98.coord = Coordinate99

Shape95.geometry = IndexedLineSet98

HAnimSegment92.children.append(Shape95)

HAnimJoint91.children.append(HAnimSegment92)
"""index finger"""
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.name = "r_carpometacarpal_2"
HAnimJoint100.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint100.center = [-0.1,0.2,0]
HAnimJoint100.ulimit = [0,0,0]
HAnimJoint100.llimit = [0,0,0]
HAnimSegment101 = x3d.HAnimSegment()
HAnimSegment101.name = "r_metacarpal_2"
HAnimSegment101.DEF = "hanim_r_metacarpal_2"
Transform102 = x3d.Transform()
Transform102.translation = [-0.1,0.2,0]
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
IndexedLineSet107.DEF = "CMC2toMCP2"
IndexedLineSet107.coordIndex = [0,1]
Coordinate108 = x3d.Coordinate()
Coordinate108.point = [(-0.1, 0.2, 0),(-0.15, 0.5, 0)]

IndexedLineSet107.coord = Coordinate108

Shape104.geometry = IndexedLineSet107

HAnimSegment101.children.append(Shape104)

HAnimJoint100.children.append(HAnimSegment101)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.name = "r_metacarpophalangeal_2"
HAnimJoint109.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint109.center = [-0.15,0.5,0]
HAnimJoint109.ulimit = [0,0,0]
HAnimJoint109.llimit = [0,0,0]
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.name = "r_carpal_proximal_phalanx_2"
HAnimSegment110.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform111 = x3d.Transform()
Transform111.translation = [-0.15,0.5,0]
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
IndexedLineSet116.DEF = "MCP2toPIP2"
IndexedLineSet116.coordIndex = [0,1]
Coordinate117 = x3d.Coordinate()
Coordinate117.point = [(-0.15, 0.5, 0),(-0.2, 0.7, 0)]

IndexedLineSet116.coord = Coordinate117

Shape113.geometry = IndexedLineSet116

HAnimSegment110.children.append(Shape113)

HAnimJoint109.children.append(HAnimSegment110)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint118.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint118.center = [-0.2,0.7,0]
HAnimJoint118.ulimit = [0,0,0]
HAnimJoint118.llimit = [0,0,0]
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.name = "r_carpal_middle_phalanx_2"
HAnimSegment119.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform120 = x3d.Transform()
Transform120.translation = [-0.2,0.7,0]
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
IndexedLineSet125.DEF = "PIP2toDIP2"
IndexedLineSet125.coordIndex = [0,1]
Coordinate126 = x3d.Coordinate()
Coordinate126.point = [(-0.2, 0.7, 0),(-0.24, 0.87, 0)]

IndexedLineSet125.coord = Coordinate126

Shape122.geometry = IndexedLineSet125

HAnimSegment119.children.append(Shape122)

HAnimJoint118.children.append(HAnimSegment119)
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint127.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint127.center = [-0.24,0.87,0]
HAnimJoint127.ulimit = [0,0,0]
HAnimJoint127.llimit = [0,0,0]
HAnimSegment128 = x3d.HAnimSegment()
HAnimSegment128.name = "r_carpal_distal_phalanx_2"
HAnimSegment128.DEF = "hanim_r_carpal_distal_phalanx_2"
Transform129 = x3d.Transform()
Transform129.translation = [-0.24,0.87,0]
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
IndexedLineSet134.DEF = "fingertip_r_carpal_distal_interphalangeal_2"
IndexedLineSet134.coordIndex = [0,1]
Coordinate135 = x3d.Coordinate()
Coordinate135.point = [(-0.24, 0.87, 0),(-0.26, 0.93, 0)]

IndexedLineSet134.coord = Coordinate135

Shape131.geometry = IndexedLineSet134

HAnimSegment128.children.append(Shape131)

HAnimJoint127.children.append(HAnimSegment128)

HAnimJoint118.children.append(HAnimJoint127)

HAnimJoint109.children.append(HAnimJoint118)

HAnimJoint100.children.append(HAnimJoint109)

HAnimJoint91.children.append(HAnimJoint100)

HAnimJoint30.children.append(HAnimJoint91)
"""MC3"""
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.name = "r_midcarpal_3"
HAnimJoint136.DEF = "hanim_r_midcarpal_3"
HAnimJoint136.center = [0,0.07,0]
HAnimJoint136.ulimit = [0,0,0]
HAnimJoint136.llimit = [0,0,0]
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.name = "r_capitate"
HAnimSegment137.DEF = "hanim_r_capitate"
Transform138 = x3d.Transform()
Transform138.translation = [0,0.07,0]
Shape139 = x3d.Shape()
Shape139.USE = "HAnimNewJointShape"

Transform138.children.append(Shape139)

HAnimSegment137.children.append(Transform138)
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.emissiveColor = [1,1,1]

Appearance141.material = Material142

Shape140.appearance = Appearance141
IndexedLineSet143 = x3d.IndexedLineSet()
IndexedLineSet143.DEF = "MC3toCMC3"
IndexedLineSet143.coordIndex = [0,1]
Coordinate144 = x3d.Coordinate()
Coordinate144.point = [(0, 0.07, 0),(0, 0.2, 0)]

IndexedLineSet143.coord = Coordinate144

Shape140.geometry = IndexedLineSet143

HAnimSegment137.children.append(Shape140)

HAnimJoint136.children.append(HAnimSegment137)
"""Middle fingle"""
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.name = "r_carpometacarpal_3"
HAnimJoint145.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint145.center = [0,0.2,0]
HAnimJoint145.ulimit = [0,0,0]
HAnimJoint145.llimit = [0,0,0]
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.name = "r_metacarpal_3"
HAnimSegment146.DEF = "hanim_r_metacarpal_3"
Transform147 = x3d.Transform()
Transform147.translation = [0,0.2,0]
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
IndexedLineSet152.DEF = "CMC3toMCP3"
IndexedLineSet152.coordIndex = [0,1]
Coordinate153 = x3d.Coordinate()
Coordinate153.point = [(0, 0.2, 0),(-0.03, 0.5, 0)]

IndexedLineSet152.coord = Coordinate153

Shape149.geometry = IndexedLineSet152

HAnimSegment146.children.append(Shape149)

HAnimJoint145.children.append(HAnimSegment146)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.name = "r_metacarpophalangeal_3"
HAnimJoint154.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint154.center = [-0.03,0.5,0]
HAnimJoint154.ulimit = [0,0,0]
HAnimJoint154.llimit = [0,0,0]
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.name = "r_carpal_proximal_phalanx_3"
HAnimSegment155.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform156 = x3d.Transform()
Transform156.translation = [-0.03,0.5,0]
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
IndexedLineSet161.DEF = "MCP3toPIP3"
IndexedLineSet161.coordIndex = [0,1]
Coordinate162 = x3d.Coordinate()
Coordinate162.point = [(-0.03, 0.5, 0),(-0.05, 0.75, 0)]

IndexedLineSet161.coord = Coordinate162

Shape158.geometry = IndexedLineSet161

HAnimSegment155.children.append(Shape158)

HAnimJoint154.children.append(HAnimSegment155)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint163.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint163.center = [-0.05,0.75,0]
HAnimJoint163.ulimit = [0,0,0]
HAnimJoint163.llimit = [0,0,0]
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.name = "r_carpal_middle_phalanx_3"
HAnimSegment164.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform165 = x3d.Transform()
Transform165.translation = [-0.05,0.75,0]
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
IndexedLineSet170.DEF = "PIP3toDIP3"
IndexedLineSet170.coordIndex = [0,1]
Coordinate171 = x3d.Coordinate()
Coordinate171.point = [(-0.05, 0.75, 0),(-0.08, 0.96, 0)]

IndexedLineSet170.coord = Coordinate171

Shape167.geometry = IndexedLineSet170

HAnimSegment164.children.append(Shape167)

HAnimJoint163.children.append(HAnimSegment164)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint172.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint172.center = [-0.08,0.96,0]
HAnimJoint172.ulimit = [0,0,0]
HAnimJoint172.llimit = [0,0,0]
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.name = "r_carpal_distal_phalanx_3"
HAnimSegment173.DEF = "hanim_r_carpal_distal_phalanx_3"
Transform174 = x3d.Transform()
Transform174.translation = [-0.08,0.96,0]
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
IndexedLineSet179.DEF = "fingertip_r_carpal_distal_interphalangeal_3"
IndexedLineSet179.coordIndex = [0,1]
Coordinate180 = x3d.Coordinate()
Coordinate180.point = [(-0.08, 0.96, 0),(-0.09, 1.05, 0)]

IndexedLineSet179.coord = Coordinate180

Shape176.geometry = IndexedLineSet179

HAnimSegment173.children.append(Shape176)

HAnimJoint172.children.append(HAnimSegment173)

HAnimJoint163.children.append(HAnimJoint172)

HAnimJoint154.children.append(HAnimJoint163)

HAnimJoint145.children.append(HAnimJoint154)

HAnimJoint136.children.append(HAnimJoint145)

HAnimJoint30.children.append(HAnimJoint136)
"""MC4_5"""
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.name = "r_midcarpal_4_5"
HAnimJoint181.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint181.center = [0.1,0.1,0]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.name = "r_hamate"
HAnimSegment182.DEF = "hanim_r_hamate"
Transform183 = x3d.Transform()
Transform183.translation = [0.1,0.1,0]
Shape184 = x3d.Shape()
Shape184.USE = "HAnimNewJointShape"

Transform183.children.append(Shape184)

HAnimSegment182.children.append(Transform183)
Shape185 = x3d.Shape()
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()
Material187.emissiveColor = [1,1,1]

Appearance186.material = Material187

Shape185.appearance = Appearance186
IndexedLineSet188 = x3d.IndexedLineSet()
IndexedLineSet188.DEF = "MC45toCMC4"
IndexedLineSet188.coordIndex = [0,1]
Coordinate189 = x3d.Coordinate()
Coordinate189.point = [(0.1, 0.1, 0),(0.1, 0.2, 0)]

IndexedLineSet188.coord = Coordinate189

Shape185.geometry = IndexedLineSet188

HAnimSegment182.children.append(Shape185)
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.emissiveColor = [1,1,1]

Appearance191.material = Material192

Shape190.appearance = Appearance191
IndexedLineSet193 = x3d.IndexedLineSet()
IndexedLineSet193.DEF = "MC45toCMC5"
IndexedLineSet193.coordIndex = [0,1]
Coordinate194 = x3d.Coordinate()
Coordinate194.point = [(0.1, 0.1, 0),(0.15, 0.17, 0)]

IndexedLineSet193.coord = Coordinate194

Shape190.geometry = IndexedLineSet193

HAnimSegment182.children.append(Shape190)

HAnimJoint181.children.append(HAnimSegment182)
"""ring finger"""
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.name = "r_carpometacarpal_4"
HAnimJoint195.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint195.center = [0.1,0.2,0]
HAnimJoint195.ulimit = [0,0,0]
HAnimJoint195.llimit = [0,0,0]
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.name = "r_metacarpal_4"
HAnimSegment196.DEF = "hanim_r_metacarpal_4"
Transform197 = x3d.Transform()
Transform197.translation = [0.1,0.2,0]
Shape198 = x3d.Shape()
Shape198.USE = "HAnimJointShape"

Transform197.children.append(Shape198)

HAnimSegment196.children.append(Transform197)
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.emissiveColor = [1,1,1]

Appearance200.material = Material201

Shape199.appearance = Appearance200
IndexedLineSet202 = x3d.IndexedLineSet()
IndexedLineSet202.DEF = "CMC4toMCP4"
IndexedLineSet202.coordIndex = [0,1]
Coordinate203 = x3d.Coordinate()
Coordinate203.point = [(0.1, 0.2, 0),(0.1, 0.47, 0)]

IndexedLineSet202.coord = Coordinate203

Shape199.geometry = IndexedLineSet202

HAnimSegment196.children.append(Shape199)

HAnimJoint195.children.append(HAnimSegment196)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.name = "r_metacarpophalangeal_4"
HAnimJoint204.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint204.center = [0.1,0.47,0]
HAnimJoint204.ulimit = [0,0,0]
HAnimJoint204.llimit = [0,0,0]
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.name = "r_carpal_proximal_phalanx_4"
HAnimSegment205.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform206 = x3d.Transform()
Transform206.translation = [0.1,0.47,0]
Shape207 = x3d.Shape()
Shape207.USE = "HAnimJointShape"

Transform206.children.append(Shape207)

HAnimSegment205.children.append(Transform206)
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()
Material210.emissiveColor = [1,1,1]

Appearance209.material = Material210

Shape208.appearance = Appearance209
IndexedLineSet211 = x3d.IndexedLineSet()
IndexedLineSet211.DEF = "MCP4toPIP4"
IndexedLineSet211.coordIndex = [0,1]
Coordinate212 = x3d.Coordinate()
Coordinate212.point = [(0.1, 0.47, 0),(0.1, 0.7, 0)]

IndexedLineSet211.coord = Coordinate212

Shape208.geometry = IndexedLineSet211

HAnimSegment205.children.append(Shape208)

HAnimJoint204.children.append(HAnimSegment205)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint213.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint213.center = [0.1,0.7,0]
HAnimJoint213.ulimit = [0,0,0]
HAnimJoint213.llimit = [0,0,0]
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.name = "r_carpal_middle_phalanx_4"
HAnimSegment214.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform215 = x3d.Transform()
Transform215.translation = [0.1,0.7,0]
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
IndexedLineSet220.DEF = "PIP4toDIP4"
IndexedLineSet220.coordIndex = [0,1]
Coordinate221 = x3d.Coordinate()
Coordinate221.point = [(0.1, 0.7, 0),(0.1, 0.93, 0)]

IndexedLineSet220.coord = Coordinate221

Shape217.geometry = IndexedLineSet220

HAnimSegment214.children.append(Shape217)

HAnimJoint213.children.append(HAnimSegment214)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint222.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint222.center = [0.1,0.93,0]
HAnimJoint222.ulimit = [0,0,0]
HAnimJoint222.llimit = [0,0,0]
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.name = "r_carpal_distal_phalanx_4"
HAnimSegment223.DEF = "hanim_r_carpal_distal_phalanx_4"
Transform224 = x3d.Transform()
Transform224.translation = [0.1,0.93,0]
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
IndexedLineSet229.DEF = "fingertip_r_carpal_distal_interphalangeal_4"
IndexedLineSet229.coordIndex = [0,1]
Coordinate230 = x3d.Coordinate()
Coordinate230.point = [(0.1, 0.93, 0),(0.1, 1, 0)]

IndexedLineSet229.coord = Coordinate230

Shape226.geometry = IndexedLineSet229

HAnimSegment223.children.append(Shape226)

HAnimJoint222.children.append(HAnimSegment223)

HAnimJoint213.children.append(HAnimJoint222)

HAnimJoint204.children.append(HAnimJoint213)

HAnimJoint195.children.append(HAnimJoint204)

HAnimJoint181.children.append(HAnimJoint195)
"""pinky finger"""
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.name = "r_carpometacarpal_5"
HAnimJoint231.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint231.center = [0.15,0.17,0]
HAnimJoint231.ulimit = [0,0,0]
HAnimJoint231.llimit = [0,0,0]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.name = "r_metacarpal_5"
HAnimSegment232.DEF = "hanim_r_metacarpal_5"
Transform233 = x3d.Transform()
Transform233.translation = [0.15,0.17,0]
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
IndexedLineSet238.DEF = "CMC5toMCP5"
IndexedLineSet238.coordIndex = [0,1]
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(0.15, 0.17, 0),(0.2, 0.4, 0)]

IndexedLineSet238.coord = Coordinate239

Shape235.geometry = IndexedLineSet238

HAnimSegment232.children.append(Shape235)

HAnimJoint231.children.append(HAnimSegment232)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.name = "r_metacarpophalangeal_5"
HAnimJoint240.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint240.center = [0.2,0.4,0]
HAnimJoint240.ulimit = [0,0,0]
HAnimJoint240.llimit = [0,0,0]
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.name = "r_carpal_proximal_phalanx_5"
HAnimSegment241.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform242 = x3d.Transform()
Transform242.translation = [0.2,0.4,0]
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
IndexedLineSet247.DEF = "MCP5toPIP5"
IndexedLineSet247.coordIndex = [0,1]
Coordinate248 = x3d.Coordinate()
Coordinate248.point = [(0.2, 0.4, 0),(0.23, 0.63, 0)]

IndexedLineSet247.coord = Coordinate248

Shape244.geometry = IndexedLineSet247

HAnimSegment241.children.append(Shape244)

HAnimJoint240.children.append(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint249.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint249.center = [0.23,0.63,0]
HAnimJoint249.ulimit = [0,0,0]
HAnimJoint249.llimit = [0,0,0]
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.name = "r_carpal_middle_phalanx_5"
HAnimSegment250.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform251 = x3d.Transform()
Transform251.translation = [0.23,0.63,0]
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
IndexedLineSet256.DEF = "PIP5toDIP5"
IndexedLineSet256.coordIndex = [0,1]
Coordinate257 = x3d.Coordinate()
Coordinate257.point = [(0.23, 0.63, 0),(0.25, 0.79, 0)]

IndexedLineSet256.coord = Coordinate257

Shape253.geometry = IndexedLineSet256

HAnimSegment250.children.append(Shape253)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint258.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint258.center = [0.25,0.79,0]
HAnimJoint258.ulimit = [0,0,0]
HAnimJoint258.llimit = [0,0,0]
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.name = "r_carpal_distal_phalanx_5"
HAnimSegment259.DEF = "hanim_r_carpal_distal_phalanx_5"
Transform260 = x3d.Transform()
Transform260.translation = [0.25,0.79,0]
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
IndexedLineSet265.DEF = "fingertip_r_carpal_distal_interphalangeal_5"
IndexedLineSet265.coordIndex = [0,1]
Coordinate266 = x3d.Coordinate()
Coordinate266.point = [(0.25, 0.79, 0),(0.26, 0.85, 0)]

IndexedLineSet265.coord = Coordinate266

Shape262.geometry = IndexedLineSet265

HAnimSegment259.children.append(Shape262)

HAnimJoint258.children.append(HAnimSegment259)

HAnimJoint249.children.append(HAnimJoint258)

HAnimJoint240.children.append(HAnimJoint249)

HAnimJoint231.children.append(HAnimJoint240)

HAnimJoint181.children.append(HAnimJoint231)

HAnimJoint30.children.append(HAnimJoint181)

HAnimJoint29.children.append(HAnimJoint30)

HAnimHumanoid26.skeleton.append(HAnimJoint29)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.USE = "hanim_humanoid_root"

HAnimHumanoid26.joints.append(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid26.joints.append(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid26.joints.append(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid26.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid26.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid26.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid26.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid26.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid26.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid26.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid26.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid26.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid26.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid26.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid26.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid26.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid26.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid26.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid26.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid26.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.USE = "hanim_r_midcarpal_1"

HAnimHumanoid26.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.USE = "hanim_r_midcarpal_2"

HAnimHumanoid26.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.USE = "hanim_r_midcarpal_3"

HAnimHumanoid26.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid26.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.USE = "hanim_r_radiocarpal"

HAnimHumanoid26.joints.append(HAnimJoint291)
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.USE = "hanim_r_capitate"

HAnimHumanoid26.segments.append(HAnimSegment292)
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.USE = "hanim_r_carpal"

HAnimHumanoid26.segments.append(HAnimSegment293)
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.USE = "hanim_r_carpal_distal_phalanx_1"

HAnimHumanoid26.segments.append(HAnimSegment294)
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.USE = "hanim_r_carpal_distal_phalanx_2"

HAnimHumanoid26.segments.append(HAnimSegment295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.USE = "hanim_r_carpal_distal_phalanx_3"

HAnimHumanoid26.segments.append(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.USE = "hanim_r_carpal_distal_phalanx_4"

HAnimHumanoid26.segments.append(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.USE = "hanim_r_carpal_distal_phalanx_5"

HAnimHumanoid26.segments.append(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid26.segments.append(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid26.segments.append(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid26.segments.append(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid26.segments.append(HAnimSegment302)
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid26.segments.append(HAnimSegment303)
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid26.segments.append(HAnimSegment304)
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid26.segments.append(HAnimSegment305)
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid26.segments.append(HAnimSegment306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid26.segments.append(HAnimSegment307)
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.USE = "hanim_r_hamate"

HAnimHumanoid26.segments.append(HAnimSegment308)
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.USE = "hanim_r_metacarpal_1"

HAnimHumanoid26.segments.append(HAnimSegment309)
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.USE = "hanim_r_metacarpal_2"

HAnimHumanoid26.segments.append(HAnimSegment310)
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.USE = "hanim_r_metacarpal_3"

HAnimHumanoid26.segments.append(HAnimSegment311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.USE = "hanim_r_metacarpal_4"

HAnimHumanoid26.segments.append(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.USE = "hanim_r_metacarpal_5"

HAnimHumanoid26.segments.append(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.USE = "hanim_r_trapezium"

HAnimHumanoid26.segments.append(HAnimSegment314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.USE = "hanim_r_trapezoid"

HAnimHumanoid26.segments.append(HAnimSegment315)

Scene24.children.append(HAnimHumanoid26)

X3D0.Scene = Scene24
f = open("../data/HAnimModelHandRight.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelHandRight.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelHandRight.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

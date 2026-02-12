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
meta7.content = "Mon, 09 Feb 2026 12:24:16 GMT"

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

X3D0.head = head1
Scene23 = x3d.Scene()
WorldInfo24 = x3d.WorldInfo()
WorldInfo24.title = "HAnimModelFootRight.x3d"

Scene23.children.append(WorldInfo24)
HAnimHumanoid25 = x3d.HAnimHumanoid(DEF="hanim_Foot_Right")
HAnimHumanoid25.name = "Foot_Right"
HAnimHumanoid25.version = "2.0"
HAnimHumanoid25.loa = 4
MetadataSet26 = x3d.MetadataSet()
MetadataSet26.name = "HAnimHumanoid.info"
MetadataSet26.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString27 = x3d.MetadataString()
MetadataString27.name = "authorName"

if MetadataSet26.value is None:
    MetadataSet26.value = []
MetadataSet26.value.append(MetadataString27)

HAnimHumanoid25.metadata = MetadataSet26
HAnimJoint28 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint28.name = "humanoid_root"
HAnimJoint29 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint29.description = "connection joint of foot to leg above"
HAnimJoint29.name = "r_talocrural"
HAnimSegment30 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment30.name = "r_talus"
Transform31 = x3d.Transform()
Shape32 = x3d.Shape(DEF="HAnimJointShape")
Appearance33 = x3d.Appearance(DEF="HAnimJointAppearance")
Material34 = x3d.Material()
Material34.diffuseColor = [0,0,1]

Appearance33.material = Material34

Shape32.appearance = Appearance33
Sphere35 = x3d.Sphere()
Sphere35.radius = 0.025

Shape32.geometry = Sphere35

Transform31.children.append(Shape32)

HAnimSegment30.children.append(Transform31)
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.emissiveColor = [1,1,1]

Appearance37.material = Material38

Shape36.appearance = Appearance37
IndexedLineSet39 = x3d.IndexedLineSet(DEF="TCtoTCN")
IndexedLineSet39.coordIndex = [0,1]
Coordinate40 = x3d.Coordinate()
Coordinate40.point = [(0, 0, 0),(0, -0.3, 0)]

IndexedLineSet39.coord = Coordinate40

Shape36.geometry = IndexedLineSet39

HAnimSegment30.children.append(Shape36)
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.emissiveColor = [1,1,1]

Appearance42.material = Material43

Shape41.appearance = Appearance42
IndexedLineSet44 = x3d.IndexedLineSet(DEF="TCtoCC")
IndexedLineSet44.coordIndex = [0,1]
Coordinate45 = x3d.Coordinate()
Coordinate45.point = [(0, 0, 0),(-0.2, 0.3, 0)]

IndexedLineSet44.coord = Coordinate45

Shape41.geometry = IndexedLineSet44

HAnimSegment30.children.append(Shape41)

HAnimJoint29.children.append(HAnimSegment30)
HAnimJoint46 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint46.name = "r_talocalcaneonavicular"
HAnimJoint46.center = [0,-0.3,0]
HAnimSegment47 = x3d.HAnimSegment(DEF="hanim_r_navicular")
HAnimSegment47.name = "r_navicular"
Transform48 = x3d.Transform()
Transform48.translation = [0,-0.3,0]
Shape49 = x3d.Shape(USE="HAnimJointShape")

Transform48.children.append(Shape49)

HAnimSegment47.children.append(Transform48)
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.emissiveColor = [1,1,1]

Appearance51.material = Material52

Shape50.appearance = Appearance51
IndexedLineSet53 = x3d.IndexedLineSet(DEF="TCNtoCN1")
IndexedLineSet53.coordIndex = [0,1]
Coordinate54 = x3d.Coordinate()
Coordinate54.point = [(0, -0.3, 0),(0.1, -0.45, 0)]

IndexedLineSet53.coord = Coordinate54

Shape50.geometry = IndexedLineSet53

HAnimSegment47.children.append(Shape50)
Shape55 = x3d.Shape()
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.emissiveColor = [1,1,1]

Appearance56.material = Material57

Shape55.appearance = Appearance56
IndexedLineSet58 = x3d.IndexedLineSet(DEF="TCNtoCN2")
IndexedLineSet58.coordIndex = [0,1]
Coordinate59 = x3d.Coordinate()
Coordinate59.point = [(0, -0.3, 0),(0, -0.45, 0)]

IndexedLineSet58.coord = Coordinate59

Shape55.geometry = IndexedLineSet58

HAnimSegment47.children.append(Shape55)
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
Material62 = x3d.Material()
Material62.emissiveColor = [1,1,1]

Appearance61.material = Material62

Shape60.appearance = Appearance61
IndexedLineSet63 = x3d.IndexedLineSet(DEF="TCNtoCN3")
IndexedLineSet63.coordIndex = [0,1]
Coordinate64 = x3d.Coordinate()
Coordinate64.point = [(0, -0.3, 0),(-0.1, -0.4, 0)]

IndexedLineSet63.coord = Coordinate64

Shape60.geometry = IndexedLineSet63

HAnimSegment47.children.append(Shape60)

HAnimJoint46.children.append(HAnimSegment47)
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint65.name = "r_cuneonavicular_1"
HAnimJoint65.center = [0.1,-0.45,0]
HAnimSegment66 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_1")
HAnimSegment66.name = "r_cuneiform_1"
Transform67 = x3d.Transform()
Transform67.translation = [0.1,-0.45,0]
Shape68 = x3d.Shape(USE="HAnimJointShape")

Transform67.children.append(Shape68)

HAnimSegment66.children.append(Transform67)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.emissiveColor = [1,1,1]

Appearance70.material = Material71

Shape69.appearance = Appearance70
IndexedLineSet72 = x3d.IndexedLineSet(DEF="CN1toTMT1")
IndexedLineSet72.coordIndex = [0,1]
Coordinate73 = x3d.Coordinate()
Coordinate73.point = [(0.1, -0.45, 0),(0.1, -0.6, 0)]

IndexedLineSet72.coord = Coordinate73

Shape69.geometry = IndexedLineSet72

HAnimSegment66.children.append(Shape69)

HAnimJoint65.children.append(HAnimSegment66)
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint74.name = "r_tarsometatarsal_1"
HAnimJoint74.center = [0.1,-0.6,0]
HAnimSegment75 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_1")
HAnimSegment75.name = "r_metatarsal_1"
Transform76 = x3d.Transform()
Transform76.translation = [0.1,-0.6,0]
Shape77 = x3d.Shape(USE="HAnimJointShape")

Transform76.children.append(Shape77)

HAnimSegment75.children.append(Transform76)
Shape78 = x3d.Shape()
Appearance79 = x3d.Appearance()
Material80 = x3d.Material()
Material80.emissiveColor = [1,1,1]

Appearance79.material = Material80

Shape78.appearance = Appearance79
IndexedLineSet81 = x3d.IndexedLineSet(DEF="TMT1toMTP1")
IndexedLineSet81.coordIndex = [0,1]
Coordinate82 = x3d.Coordinate()
Coordinate82.point = [(0.1, -0.6, 0),(0.1, -0.9, 0)]

IndexedLineSet81.coord = Coordinate82

Shape78.geometry = IndexedLineSet81

HAnimSegment75.children.append(Shape78)

HAnimJoint74.children.append(HAnimSegment75)
HAnimJoint83 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint83.name = "r_metatarsophalangeal_1"
HAnimJoint83.center = [0.1,-0.9,0]
HAnimSegment84 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimSegment84.name = "r_tarsal_proximal_phalanx_1"
Transform85 = x3d.Transform()
Transform85.translation = [0.1,-0.9,0]
Shape86 = x3d.Shape(USE="HAnimJointShape")

Transform85.children.append(Shape86)

HAnimSegment84.children.append(Transform85)
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Material89 = x3d.Material()
Material89.emissiveColor = [1,1,1]

Appearance88.material = Material89

Shape87.appearance = Appearance88
IndexedLineSet90 = x3d.IndexedLineSet(DEF="MTP1toIP1")
IndexedLineSet90.coordIndex = [0,1]
Coordinate91 = x3d.Coordinate()
Coordinate91.point = [(0.1, -0.9, 0),(0.1, -1.05, 0)]

IndexedLineSet90.coord = Coordinate91

Shape87.geometry = IndexedLineSet90

HAnimSegment84.children.append(Shape87)

HAnimJoint83.children.append(HAnimSegment84)
HAnimJoint92 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint92.name = "r_tarsal_interphalangeal_1"
HAnimJoint92.center = [0.1,-1.05,0]
HAnimSegment93 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_1")
HAnimSegment93.name = "r_tarsal_distal_phalanx_1"
Transform94 = x3d.Transform()
Transform94.translation = [0.1,-1.05,0]
Shape95 = x3d.Shape(USE="HAnimJointShape")

Transform94.children.append(Shape95)

HAnimSegment93.children.append(Transform94)
Shape96 = x3d.Shape()
Appearance97 = x3d.Appearance()
Material98 = x3d.Material()
Material98.emissiveColor = [1,1,1]

Appearance97.material = Material98

Shape96.appearance = Appearance97
IndexedLineSet99 = x3d.IndexedLineSet(DEF="tiptoe_r_interphalangeal_")
IndexedLineSet99.coordIndex = [0,1]
Coordinate100 = x3d.Coordinate()
Coordinate100.point = [(0.1, -1.05, 0),(0.1, -1.1, 0)]

IndexedLineSet99.coord = Coordinate100

Shape96.geometry = IndexedLineSet99

HAnimSegment93.children.append(Shape96)

HAnimJoint92.children.append(HAnimSegment93)

HAnimJoint83.children.append(HAnimJoint92)

HAnimJoint74.children.append(HAnimJoint83)

HAnimJoint65.children.append(HAnimJoint74)

HAnimJoint46.children.append(HAnimJoint65)
HAnimJoint101 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint101.name = "r_cuneonavicular_2"
HAnimJoint101.center = [0,-0.45,0]
HAnimSegment102 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_2")
HAnimSegment102.name = "r_cuneiform_2"
Transform103 = x3d.Transform()
Transform103.translation = [0,-0.45,0]
Shape104 = x3d.Shape(USE="HAnimJointShape")

Transform103.children.append(Shape104)

HAnimSegment102.children.append(Transform103)
Shape105 = x3d.Shape()
Appearance106 = x3d.Appearance()
Material107 = x3d.Material()
Material107.emissiveColor = [1,1,1]

Appearance106.material = Material107

Shape105.appearance = Appearance106
IndexedLineSet108 = x3d.IndexedLineSet(DEF="CN2toTMT2")
IndexedLineSet108.coordIndex = [0,1]
Coordinate109 = x3d.Coordinate()
Coordinate109.point = [(0, -0.45, 0),(-0.05, -0.6, 0)]

IndexedLineSet108.coord = Coordinate109

Shape105.geometry = IndexedLineSet108

HAnimSegment102.children.append(Shape105)

HAnimJoint101.children.append(HAnimSegment102)
HAnimJoint110 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint110.name = "r_tarsometatarsal_2"
HAnimJoint110.center = [-0.05,-0.6,0]
HAnimSegment111 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment111.name = "r_metatarsal_2"
Transform112 = x3d.Transform()
Transform112.translation = [-0.05,-0.6,0]
Shape113 = x3d.Shape(USE="HAnimJointShape")

Transform112.children.append(Shape113)

HAnimSegment111.children.append(Transform112)
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.emissiveColor = [1,1,1]

Appearance115.material = Material116

Shape114.appearance = Appearance115
IndexedLineSet117 = x3d.IndexedLineSet(DEF="TMT2toMTP2")
IndexedLineSet117.coordIndex = [0,1]
Coordinate118 = x3d.Coordinate()
Coordinate118.point = [(-0.05, -0.6, 0),(-0.05, -0.9, 0)]

IndexedLineSet117.coord = Coordinate118

Shape114.geometry = IndexedLineSet117

HAnimSegment111.children.append(Shape114)

HAnimJoint110.children.append(HAnimSegment111)
HAnimJoint119 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint119.name = "r_metatarsophalangeal_2"
HAnimJoint119.center = [-0.05,-0.9,0]
HAnimSegment120 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment120.name = "r_tarsal_proximal_phalanx_2"
Transform121 = x3d.Transform()
Transform121.translation = [-0.05,-0.9,0]
Shape122 = x3d.Shape(USE="HAnimJointShape")

Transform121.children.append(Shape122)

HAnimSegment120.children.append(Transform121)
Shape123 = x3d.Shape()
Appearance124 = x3d.Appearance()
Material125 = x3d.Material()
Material125.emissiveColor = [1,1,1]

Appearance124.material = Material125

Shape123.appearance = Appearance124
IndexedLineSet126 = x3d.IndexedLineSet(DEF="MTP2toPIP2")
IndexedLineSet126.coordIndex = [0,1]
Coordinate127 = x3d.Coordinate()
Coordinate127.point = [(-0.05, -0.9, 0),(-0.05, -1.05, 0)]

IndexedLineSet126.coord = Coordinate127

Shape123.geometry = IndexedLineSet126

HAnimSegment120.children.append(Shape123)

HAnimJoint119.children.append(HAnimSegment120)
HAnimJoint128 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint128.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint128.center = [-0.05,-1.05,0]
HAnimSegment129 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimSegment129.name = "r_tarsal_middle_phalanx_2"
Transform130 = x3d.Transform()
Transform130.translation = [-0.05,-1.05,0]
Shape131 = x3d.Shape(USE="HAnimJointShape")

Transform130.children.append(Shape131)

HAnimSegment129.children.append(Transform130)
Shape132 = x3d.Shape()
Appearance133 = x3d.Appearance()
Material134 = x3d.Material()
Material134.emissiveColor = [1,1,1]

Appearance133.material = Material134

Shape132.appearance = Appearance133
IndexedLineSet135 = x3d.IndexedLineSet(DEF="PIP2toDIP2")
IndexedLineSet135.coordIndex = [0,1]
Coordinate136 = x3d.Coordinate()
Coordinate136.point = [(-0.05, -1.05, 0),(-0.05, -1.12, 0)]

IndexedLineSet135.coord = Coordinate136

Shape132.geometry = IndexedLineSet135

HAnimSegment129.children.append(Shape132)

HAnimJoint128.children.append(HAnimSegment129)
HAnimJoint137 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint137.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint137.center = [-0.05,-1.12,0]
HAnimSegment138 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_2")
HAnimSegment138.name = "r_tarsal_distal_phalanx_2"
Transform139 = x3d.Transform()
Transform139.translation = [-0.05,-1.12,0]
Shape140 = x3d.Shape(USE="HAnimJointShape")

Transform139.children.append(Shape140)

HAnimSegment138.children.append(Transform139)
Shape141 = x3d.Shape()
Appearance142 = x3d.Appearance()
Material143 = x3d.Material()
Material143.emissiveColor = [1,1,1]

Appearance142.material = Material143

Shape141.appearance = Appearance142
IndexedLineSet144 = x3d.IndexedLineSet(DEF="tiptoe_r_tarsal_distal_interphalangeal_2")
IndexedLineSet144.coordIndex = [0,1]
Coordinate145 = x3d.Coordinate()
Coordinate145.point = [(-0.05, -1.12, 0),(-0.05, -1.16, 0)]

IndexedLineSet144.coord = Coordinate145

Shape141.geometry = IndexedLineSet144

HAnimSegment138.children.append(Shape141)

HAnimJoint137.children.append(HAnimSegment138)

HAnimJoint128.children.append(HAnimJoint137)

HAnimJoint119.children.append(HAnimJoint128)

HAnimJoint110.children.append(HAnimJoint119)

HAnimJoint101.children.append(HAnimJoint110)

HAnimJoint46.children.append(HAnimJoint101)
HAnimJoint146 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint146.name = "r_cuneonavicular_3"
HAnimJoint146.center = [-0.1,-0.4,0]
HAnimSegment147 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_3")
HAnimSegment147.name = "r_cuneiform_3"
Transform148 = x3d.Transform()
Transform148.translation = [-0.1,-0.4,0]
Shape149 = x3d.Shape(USE="HAnimJointShape")

Transform148.children.append(Shape149)

HAnimSegment147.children.append(Transform148)
Shape150 = x3d.Shape()
Appearance151 = x3d.Appearance()
Material152 = x3d.Material()
Material152.emissiveColor = [1,1,1]

Appearance151.material = Material152

Shape150.appearance = Appearance151
IndexedLineSet153 = x3d.IndexedLineSet(DEF="CN3toTMT3")
IndexedLineSet153.coordIndex = [0,1]
Coordinate154 = x3d.Coordinate()
Coordinate154.point = [(-0.1, -0.4, 0),(-0.15, -0.6, 0)]

IndexedLineSet153.coord = Coordinate154

Shape150.geometry = IndexedLineSet153

HAnimSegment147.children.append(Shape150)

HAnimJoint146.children.append(HAnimSegment147)
HAnimJoint155 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3")
HAnimJoint155.name = "r_tarsometatarsal_3"
HAnimJoint155.center = [-0.15,-0.6,0]
HAnimSegment156 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_3")
HAnimSegment156.name = "r_metatarsal_3"
Transform157 = x3d.Transform()
Transform157.translation = [-0.15,-0.6,0]
Shape158 = x3d.Shape(USE="HAnimJointShape")

Transform157.children.append(Shape158)

HAnimSegment156.children.append(Transform157)
Shape159 = x3d.Shape()
Appearance160 = x3d.Appearance()
Material161 = x3d.Material()
Material161.emissiveColor = [1,1,1]

Appearance160.material = Material161

Shape159.appearance = Appearance160
IndexedLineSet162 = x3d.IndexedLineSet(DEF="TMT3toMTP3")
IndexedLineSet162.coordIndex = [0,1]
Coordinate163 = x3d.Coordinate()
Coordinate163.point = [(-0.15, -0.6, 0),(-0.15, -0.9, 0)]

IndexedLineSet162.coord = Coordinate163

Shape159.geometry = IndexedLineSet162

HAnimSegment156.children.append(Shape159)

HAnimJoint155.children.append(HAnimSegment156)
HAnimJoint164 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint164.name = "r_metatarsophalangeal_3"
HAnimJoint164.center = [-0.15,-0.9,0]
HAnimSegment165 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimSegment165.name = "r_tarsal_proximal_phalanx_3"
Transform166 = x3d.Transform()
Transform166.translation = [-0.15,-0.9,0]
Shape167 = x3d.Shape(USE="HAnimJointShape")

Transform166.children.append(Shape167)

HAnimSegment165.children.append(Transform166)
Shape168 = x3d.Shape()
Appearance169 = x3d.Appearance()
Material170 = x3d.Material()
Material170.emissiveColor = [1,1,1]

Appearance169.material = Material170

Shape168.appearance = Appearance169
IndexedLineSet171 = x3d.IndexedLineSet(DEF="MTP3toPIP3")
IndexedLineSet171.coordIndex = [0,1]
Coordinate172 = x3d.Coordinate()
Coordinate172.point = [(-0.15, -0.9, 0),(-0.15, -1.05, 0)]

IndexedLineSet171.coord = Coordinate172

Shape168.geometry = IndexedLineSet171

HAnimSegment165.children.append(Shape168)

HAnimJoint164.children.append(HAnimSegment165)
HAnimJoint173 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint173.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint173.center = [-0.15,-1.05,0]
HAnimSegment174 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimSegment174.name = "r_tarsal_middle_phalanx_3"
Transform175 = x3d.Transform()
Transform175.translation = [-0.15,-1.05,0]
Shape176 = x3d.Shape(USE="HAnimJointShape")

Transform175.children.append(Shape176)

HAnimSegment174.children.append(Transform175)
Shape177 = x3d.Shape()
Appearance178 = x3d.Appearance()
Material179 = x3d.Material()
Material179.emissiveColor = [1,1,1]

Appearance178.material = Material179

Shape177.appearance = Appearance178
IndexedLineSet180 = x3d.IndexedLineSet(DEF="PIP3toDIP3")
IndexedLineSet180.coordIndex = [0,1]
Coordinate181 = x3d.Coordinate()
Coordinate181.point = [(-0.15, -1.05, 0),(-0.15, -1.13, 0)]

IndexedLineSet180.coord = Coordinate181

Shape177.geometry = IndexedLineSet180

HAnimSegment174.children.append(Shape177)

HAnimJoint173.children.append(HAnimSegment174)
HAnimJoint182 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint182.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint182.center = [-0.15,-1.13,0]
HAnimSegment183 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_3")
HAnimSegment183.name = "r_tarsal_distal_phalanx_3"
Transform184 = x3d.Transform()
Transform184.translation = [-0.15,-1.13,0]
Shape185 = x3d.Shape(USE="HAnimJointShape")

Transform184.children.append(Shape185)

HAnimSegment183.children.append(Transform184)
Shape186 = x3d.Shape()
Appearance187 = x3d.Appearance()
Material188 = x3d.Material()
Material188.emissiveColor = [1,1,1]

Appearance187.material = Material188

Shape186.appearance = Appearance187
IndexedLineSet189 = x3d.IndexedLineSet(DEF="tiptoe_r_tarsal_distal_interphalangeal_3")
IndexedLineSet189.coordIndex = [0,1]
Coordinate190 = x3d.Coordinate()
Coordinate190.point = [(-0.15, -1.13, 0),(-0.15, -1.16, 0)]

IndexedLineSet189.coord = Coordinate190

Shape186.geometry = IndexedLineSet189

HAnimSegment183.children.append(Shape186)

HAnimJoint182.children.append(HAnimSegment183)

HAnimJoint173.children.append(HAnimJoint182)

HAnimJoint164.children.append(HAnimJoint173)

HAnimJoint155.children.append(HAnimJoint164)

HAnimJoint146.children.append(HAnimJoint155)

HAnimJoint46.children.append(HAnimJoint146)

HAnimJoint29.children.append(HAnimJoint46)
HAnimJoint191 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint191.name = "r_calcaneocuboid"
HAnimJoint191.center = [-0.2,0.3,0]
HAnimSegment192 = x3d.HAnimSegment(DEF="hanim_r_calcaneus")
HAnimSegment192.name = "r_calcaneus"
Transform193 = x3d.Transform()
Transform193.translation = [-0.2,0.3,0]
Shape194 = x3d.Shape(USE="HAnimJointShape")

Transform193.children.append(Shape194)

HAnimSegment192.children.append(Transform193)
Shape195 = x3d.Shape()
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.emissiveColor = [1,1,1]

Appearance196.material = Material197

Shape195.appearance = Appearance196
IndexedLineSet198 = x3d.IndexedLineSet(DEF="CCtoTT")
IndexedLineSet198.coordIndex = [0,1]
Coordinate199 = x3d.Coordinate()
Coordinate199.point = [(-0.2, 0.3, 0),(-0.21, -0.3, 0)]

IndexedLineSet198.coord = Coordinate199

Shape195.geometry = IndexedLineSet198

HAnimSegment192.children.append(Shape195)

HAnimJoint191.children.append(HAnimSegment192)
HAnimJoint200 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint200.name = "r_transversetarsal"
HAnimJoint200.center = [-0.21,-0.3,0]
HAnimSegment201 = x3d.HAnimSegment(DEF="hanim_r_cuboid")
HAnimSegment201.name = "r_cuboid"
Transform202 = x3d.Transform()
Transform202.translation = [-0.21,-0.3,0]
Shape203 = x3d.Shape(USE="HAnimJointShape")

Transform202.children.append(Shape203)

HAnimSegment201.children.append(Transform202)
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.emissiveColor = [1,1,1]

Appearance205.material = Material206

Shape204.appearance = Appearance205
IndexedLineSet207 = x3d.IndexedLineSet(DEF="TTtoTMT4")
IndexedLineSet207.coordIndex = [0,1]
Coordinate208 = x3d.Coordinate()
Coordinate208.point = [(-0.21, -0.3, 0),(-0.25, -0.58, 0)]

IndexedLineSet207.coord = Coordinate208

Shape204.geometry = IndexedLineSet207

HAnimSegment201.children.append(Shape204)
Shape209 = x3d.Shape()
Appearance210 = x3d.Appearance()
Material211 = x3d.Material()
Material211.emissiveColor = [1,1,1]

Appearance210.material = Material211

Shape209.appearance = Appearance210
IndexedLineSet212 = x3d.IndexedLineSet(DEF="TTtoTMT5")
IndexedLineSet212.coordIndex = [0,1]
Coordinate213 = x3d.Coordinate()
Coordinate213.point = [(-0.21, -0.3, 0),(-0.33, -0.52, 0)]

IndexedLineSet212.coord = Coordinate213

Shape209.geometry = IndexedLineSet212

HAnimSegment201.children.append(Shape209)

HAnimJoint200.children.append(HAnimSegment201)
HAnimJoint214 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint214.name = "r_tarsometatarsal_4"
HAnimJoint214.center = [-0.25,-0.58,0]
HAnimSegment215 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_4")
HAnimSegment215.name = "r_metatarsal_4"
Transform216 = x3d.Transform()
Transform216.translation = [-0.25,-0.58,0]
Shape217 = x3d.Shape(USE="HAnimJointShape")

Transform216.children.append(Shape217)

HAnimSegment215.children.append(Transform216)
Shape218 = x3d.Shape()
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.emissiveColor = [1,1,1]

Appearance219.material = Material220

Shape218.appearance = Appearance219
IndexedLineSet221 = x3d.IndexedLineSet(DEF="TMT4toMTP4")
IndexedLineSet221.coordIndex = [0,1]
Coordinate222 = x3d.Coordinate()
Coordinate222.point = [(-0.25, -0.58, 0),(-0.25, -0.87, 0)]

IndexedLineSet221.coord = Coordinate222

Shape218.geometry = IndexedLineSet221

HAnimSegment215.children.append(Shape218)

HAnimJoint214.children.append(HAnimSegment215)
HAnimJoint223 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint223.name = "r_metatarsophalangeal_4"
HAnimJoint223.center = [-0.25,-0.87,0]
HAnimSegment224 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimSegment224.name = "r_tarsal_proximal_phalanx_4"
Transform225 = x3d.Transform()
Transform225.translation = [-0.25,-0.87,0]
Shape226 = x3d.Shape(USE="HAnimJointShape")

Transform225.children.append(Shape226)

HAnimSegment224.children.append(Transform225)
Shape227 = x3d.Shape()
Appearance228 = x3d.Appearance()
Material229 = x3d.Material()
Material229.emissiveColor = [1,1,1]

Appearance228.material = Material229

Shape227.appearance = Appearance228
IndexedLineSet230 = x3d.IndexedLineSet(DEF="MTP4toPIP4")
IndexedLineSet230.coordIndex = [0,1]
Coordinate231 = x3d.Coordinate()
Coordinate231.point = [(-0.25, -0.87, 0),(-0.25, -1, 0)]

IndexedLineSet230.coord = Coordinate231

Shape227.geometry = IndexedLineSet230

HAnimSegment224.children.append(Shape227)

HAnimJoint223.children.append(HAnimSegment224)
HAnimJoint232 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint232.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint232.center = [-0.25,-1,0]
HAnimSegment233 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimSegment233.name = "r_tarsal_middle_phalanx_4"
Transform234 = x3d.Transform()
Transform234.translation = [-0.25,-1,0]
Shape235 = x3d.Shape(USE="HAnimJointShape")

Transform234.children.append(Shape235)

HAnimSegment233.children.append(Transform234)
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
Material238 = x3d.Material()
Material238.emissiveColor = [1,1,1]

Appearance237.material = Material238

Shape236.appearance = Appearance237
IndexedLineSet239 = x3d.IndexedLineSet(DEF="PIP4toDIP4")
IndexedLineSet239.coordIndex = [0,1]
Coordinate240 = x3d.Coordinate()
Coordinate240.point = [(-0.25, -1, 0),(-0.25, -1.1, 0)]

IndexedLineSet239.coord = Coordinate240

Shape236.geometry = IndexedLineSet239

HAnimSegment233.children.append(Shape236)

HAnimJoint232.children.append(HAnimSegment233)
HAnimJoint241 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint241.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint241.center = [-0.25,-1.1,0]
HAnimSegment242 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_4")
HAnimSegment242.name = "r_tarsal_distal_phalanx_4"
Transform243 = x3d.Transform()
Transform243.translation = [-0.25,-1.1,0]
Shape244 = x3d.Shape(USE="HAnimJointShape")

Transform243.children.append(Shape244)

HAnimSegment242.children.append(Transform243)
Shape245 = x3d.Shape()
Appearance246 = x3d.Appearance()
Material247 = x3d.Material()
Material247.emissiveColor = [1,1,1]

Appearance246.material = Material247

Shape245.appearance = Appearance246
IndexedLineSet248 = x3d.IndexedLineSet(DEF="tiptoe_r_tarsal_distal_interphalangeal_4")
IndexedLineSet248.coordIndex = [0,1]
Coordinate249 = x3d.Coordinate()
Coordinate249.point = [(-0.25, -1.1, 0),(-0.25, -1.15, 0)]

IndexedLineSet248.coord = Coordinate249

Shape245.geometry = IndexedLineSet248

HAnimSegment242.children.append(Shape245)

HAnimJoint241.children.append(HAnimSegment242)

HAnimJoint232.children.append(HAnimJoint241)

HAnimJoint223.children.append(HAnimJoint232)

HAnimJoint214.children.append(HAnimJoint223)

HAnimJoint200.children.append(HAnimJoint214)
HAnimJoint250 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint250.name = "r_tarsometatarsal_5"
HAnimJoint250.center = [-0.33,-0.52,0]
HAnimSegment251 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_5")
HAnimSegment251.name = "r_metatarsal_5"
Transform252 = x3d.Transform()
Transform252.translation = [-0.33,-0.52,0]
Shape253 = x3d.Shape(USE="HAnimJointShape")

Transform252.children.append(Shape253)

HAnimSegment251.children.append(Transform252)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.emissiveColor = [1,1,1]

Appearance255.material = Material256

Shape254.appearance = Appearance255
IndexedLineSet257 = x3d.IndexedLineSet(DEF="TMT5toMTP5")
IndexedLineSet257.coordIndex = [0,1]
Coordinate258 = x3d.Coordinate()
Coordinate258.point = [(-0.33, -0.52, 0),(-0.34, -0.8, 0)]

IndexedLineSet257.coord = Coordinate258

Shape254.geometry = IndexedLineSet257

HAnimSegment251.children.append(Shape254)

HAnimJoint250.children.append(HAnimSegment251)
HAnimJoint259 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint259.name = "r_metatarsophalangeal_5"
HAnimJoint259.center = [-0.34,-0.8,0]
HAnimSegment260 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimSegment260.name = "r_tarsal_proximal_phalanx_5"
Transform261 = x3d.Transform()
Transform261.translation = [-0.34,-0.8,0]
Shape262 = x3d.Shape(USE="HAnimJointShape")

Transform261.children.append(Shape262)

HAnimSegment260.children.append(Transform261)
Shape263 = x3d.Shape()
Appearance264 = x3d.Appearance()
Material265 = x3d.Material()
Material265.emissiveColor = [1,1,1]

Appearance264.material = Material265

Shape263.appearance = Appearance264
IndexedLineSet266 = x3d.IndexedLineSet(DEF="MTP5toPIP5")
IndexedLineSet266.coordIndex = [0,1]
Coordinate267 = x3d.Coordinate()
Coordinate267.point = [(-0.34, -0.8, 0),(-0.34, -0.95, 0)]

IndexedLineSet266.coord = Coordinate267

Shape263.geometry = IndexedLineSet266

HAnimSegment260.children.append(Shape263)

HAnimJoint259.children.append(HAnimSegment260)
HAnimJoint268 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint268.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint268.center = [-0.34,-0.95,0]
HAnimSegment269 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimSegment269.name = "r_tarsal_middle_phalanx_5"
Transform270 = x3d.Transform()
Transform270.translation = [-0.34,-0.95,0]
Shape271 = x3d.Shape(USE="HAnimJointShape")

Transform270.children.append(Shape271)

HAnimSegment269.children.append(Transform270)
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.emissiveColor = [1,1,1]

Appearance273.material = Material274

Shape272.appearance = Appearance273
IndexedLineSet275 = x3d.IndexedLineSet(DEF="PIP5toDIP5")
IndexedLineSet275.coordIndex = [0,1]
Coordinate276 = x3d.Coordinate()
Coordinate276.point = [(-0.34, -0.95, 0),(-0.34, -1.05, 0)]

IndexedLineSet275.coord = Coordinate276

Shape272.geometry = IndexedLineSet275

HAnimSegment269.children.append(Shape272)

HAnimJoint268.children.append(HAnimSegment269)
HAnimJoint277 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint277.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint277.center = [-0.34,-1.05,0]
HAnimSegment278 = x3d.HAnimSegment(DEF="hanim_r_tarsal_distal_phalanx_5")
HAnimSegment278.name = "r_tarsal_distal_phalanx_5"
Transform279 = x3d.Transform()
Transform279.translation = [-0.34,-1.05,0]
Shape280 = x3d.Shape(USE="HAnimJointShape")

Transform279.children.append(Shape280)

HAnimSegment278.children.append(Transform279)
Shape281 = x3d.Shape()
Appearance282 = x3d.Appearance()
Material283 = x3d.Material()
Material283.emissiveColor = [1,1,1]

Appearance282.material = Material283

Shape281.appearance = Appearance282
IndexedLineSet284 = x3d.IndexedLineSet(DEF="tiptoe_r_tarsal_distal_interphalangeal_5")
IndexedLineSet284.coordIndex = [0,1]
Coordinate285 = x3d.Coordinate()
Coordinate285.point = [(-0.34, -1.05, 0),(-0.34, -1.08, 0)]

IndexedLineSet284.coord = Coordinate285

Shape281.geometry = IndexedLineSet284

HAnimSegment278.children.append(Shape281)

HAnimJoint277.children.append(HAnimSegment278)

HAnimJoint268.children.append(HAnimJoint277)

HAnimJoint259.children.append(HAnimJoint268)

HAnimJoint250.children.append(HAnimJoint259)

HAnimJoint200.children.append(HAnimJoint250)

HAnimJoint191.children.append(HAnimJoint200)

HAnimJoint29.children.append(HAnimJoint191)

HAnimJoint28.children.append(HAnimJoint29)

HAnimHumanoid25.skeleton.append(HAnimJoint28)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid25.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_r_calcaneocuboid")

HAnimHumanoid25.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_1")

HAnimHumanoid25.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_2")

HAnimHumanoid25.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_3")

HAnimHumanoid25.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_1")

HAnimHumanoid25.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid25.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_3")

HAnimHumanoid25.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_4")

HAnimHumanoid25.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_5")

HAnimHumanoid25.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint(USE="hanim_r_talocalcaneonavicular")

HAnimHumanoid25.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid25.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid25.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid25.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid25.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid25.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid25.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid25.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid25.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid25.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid25.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_1")

HAnimHumanoid25.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid25.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_3")

HAnimHumanoid25.joints.append(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_4")

HAnimHumanoid25.joints.append(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_5")

HAnimHumanoid25.joints.append(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint(USE="hanim_r_transversetarsal")

HAnimHumanoid25.joints.append(HAnimJoint312)

Scene23.children.append(HAnimHumanoid25)

X3D0.Scene = Scene23
f = open("../data/HAnimModelFootRight.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/HAnimModelFootRight.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/HAnimModelFootRight.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

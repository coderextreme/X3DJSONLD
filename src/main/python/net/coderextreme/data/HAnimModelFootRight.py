from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("title")
meta3.setContent("HAnimModelFootRight.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("Right foot, using high-fidelity definitions for HAnim version 2.0")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("26 January 2015")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("8 March 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("warning")
meta8.setContent("not yet to scale")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("TODO")
meta9.setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("TODO")
meta10.setContent("Add links to figures")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("TODO")
meta11.setContent("Add Viewpoints to enable inspection")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("info")
meta12.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("warning")
meta13.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("reference")
meta17.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("reference")
meta19.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("subject")
meta20.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("TODO")
meta21.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("identifier")
meta22.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("generator")
meta23.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)

X3D0.setHead(head1)
Scene25 = Scene()
WorldInfo26 = WorldInfo()
WorldInfo26.setTitle("HAnimModelFootRight.x3d")

Scene25.addChildren(WorldInfo26)
HAnimHumanoid27 = HAnimHumanoid()
HAnimHumanoid27.setName("Foot_Right")
HAnimHumanoid27.setDEF("hanim_Foot_Right")
HAnimHumanoid27.setLoa(4)
HAnimHumanoid27.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet28 = MetadataSet()
MetadataSet28.setName("HAnimHumanoid.info")
MetadataSet28.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString29 = MetadataString()
MetadataString29.setName("authorName")
MetadataString29.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet28.setValue(MetadataString29)

HAnimHumanoid27.setValue(MetadataSet28)
HAnimJoint30 = HAnimJoint()
HAnimJoint30.setName("humanoid_root")
HAnimJoint30.setDEF("hanim_humanoid_root")
HAnimJoint30.setUlimit([0,0,0])
HAnimJoint30.setLlimit([0,0,0])
HAnimJoint30.setStiffness([0,0,0])
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint31 = HAnimJoint()
HAnimJoint31.setName("r_talocrural")
HAnimJoint31.setDEF("hanim_r_talocrural")
HAnimJoint31.setDescription("connection joint of foot to leg above")
HAnimJoint31.setUlimit([0,0,0])
HAnimJoint31.setLlimit([0,0,0])
HAnimJoint31.setStiffness([0,0,0])
HAnimSegment32 = HAnimSegment()
HAnimSegment32.setName("r_talus")
HAnimSegment32.setDEF("hanim_r_talus")
Transform33 = Transform()
Shape34 = Shape()
Shape34.setDEF("HAnimJointShape")
Sphere35 = Sphere()
Sphere35.setRadius(0.025)

Shape34.setGeometry(Sphere35)
Appearance36 = Appearance()
Appearance36.setDEF("HAnimJointAppearance")
Material37 = Material()
Material37.setDiffuseColor([0,0,1])

Appearance36.setMaterial(Material37)

Shape34.setAppearance(Appearance36)

Transform33.addChildren(Shape34)

HAnimSegment32.addChildren(Transform33)
Shape38 = Shape()
Appearance39 = Appearance()
Material40 = Material()
Material40.setEmissiveColor([1,1,1])

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
IndexedLineSet41 = IndexedLineSet()
IndexedLineSet41.setDEF("TCtoTCN")
IndexedLineSet41.setCoordIndex([0,1])
Coordinate42 = Coordinate()
Coordinate42.setPoint([0,0,0,0,-0.3,0])

IndexedLineSet41.setCoord(Coordinate42)

Shape38.setGeometry(IndexedLineSet41)

HAnimSegment32.addChildren(Shape38)
Shape43 = Shape()
Appearance44 = Appearance()
Material45 = Material()
Material45.setEmissiveColor([1,1,1])

Appearance44.setMaterial(Material45)

Shape43.setAppearance(Appearance44)
IndexedLineSet46 = IndexedLineSet()
IndexedLineSet46.setDEF("TCtoCC")
IndexedLineSet46.setCoordIndex([0,1])
Coordinate47 = Coordinate()
Coordinate47.setPoint([0,0,0,-0.2,0.3,0])

IndexedLineSet46.setCoord(Coordinate47)

Shape43.setGeometry(IndexedLineSet46)

HAnimSegment32.addChildren(Shape43)

HAnimJoint31.addChildren(HAnimSegment32)
#TCN
HAnimJoint48 = HAnimJoint()
HAnimJoint48.setName("r_talocalcaneonavicular")
HAnimJoint48.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint48.setCenter([0,-0.3,0])
HAnimJoint48.setUlimit([0,0,0])
HAnimJoint48.setLlimit([0,0,0])
HAnimJoint48.setStiffness([0,0,0])
HAnimSegment49 = HAnimSegment()
HAnimSegment49.setName("r_navicular")
HAnimSegment49.setDEF("hanim_r_navicular")
Transform50 = Transform()
Transform50.setTranslation([0,-0.3,0])
Shape51 = Shape()
Shape51.setUSE("HAnimJointShape")

Transform50.addChildren(Shape51)

HAnimSegment49.addChildren(Transform50)
Shape52 = Shape()
Appearance53 = Appearance()
Material54 = Material()
Material54.setEmissiveColor([1,1,1])

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
IndexedLineSet55 = IndexedLineSet()
IndexedLineSet55.setDEF("TCNtoCN1")
IndexedLineSet55.setCoordIndex([0,1])
Coordinate56 = Coordinate()
Coordinate56.setPoint([0,-0.3,0,0.1,-0.45,0])

IndexedLineSet55.setCoord(Coordinate56)

Shape52.setGeometry(IndexedLineSet55)

HAnimSegment49.addChildren(Shape52)
Shape57 = Shape()
Appearance58 = Appearance()
Material59 = Material()
Material59.setEmissiveColor([1,1,1])

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
IndexedLineSet60 = IndexedLineSet()
IndexedLineSet60.setDEF("TCNtoCN2")
IndexedLineSet60.setCoordIndex([0,1])
Coordinate61 = Coordinate()
Coordinate61.setPoint([0,-0.3,0,0,-0.45,0])

IndexedLineSet60.setCoord(Coordinate61)

Shape57.setGeometry(IndexedLineSet60)

HAnimSegment49.addChildren(Shape57)
Shape62 = Shape()
Appearance63 = Appearance()
Material64 = Material()
Material64.setEmissiveColor([1,1,1])

Appearance63.setMaterial(Material64)

Shape62.setAppearance(Appearance63)
IndexedLineSet65 = IndexedLineSet()
IndexedLineSet65.setDEF("TCNtoCN3")
IndexedLineSet65.setCoordIndex([0,1])
Coordinate66 = Coordinate()
Coordinate66.setPoint([0,-0.3,0,-0.1,-0.4,0])

IndexedLineSet65.setCoord(Coordinate66)

Shape62.setGeometry(IndexedLineSet65)

HAnimSegment49.addChildren(Shape62)

HAnimJoint48.addChildren(HAnimSegment49)
#CN1
HAnimJoint67 = HAnimJoint()
HAnimJoint67.setName("r_cuneonavicular_1")
HAnimJoint67.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint67.setCenter([0.1,-0.45,0])
HAnimJoint67.setUlimit([0,0,0])
HAnimJoint67.setLlimit([0,0,0])
HAnimJoint67.setStiffness([0,0,0])
HAnimSegment68 = HAnimSegment()
HAnimSegment68.setName("r_cuneiform_1")
HAnimSegment68.setDEF("hanim_r_cuneiform_1")
Transform69 = Transform()
Transform69.setTranslation([0.1,-0.45,0])
Shape70 = Shape()
Shape70.setUSE("HAnimJointShape")

Transform69.addChildren(Shape70)

HAnimSegment68.addChildren(Transform69)
Shape71 = Shape()
Appearance72 = Appearance()
Material73 = Material()
Material73.setEmissiveColor([1,1,1])

Appearance72.setMaterial(Material73)

Shape71.setAppearance(Appearance72)
IndexedLineSet74 = IndexedLineSet()
IndexedLineSet74.setDEF("CN1toTMT1")
IndexedLineSet74.setCoordIndex([0,1])
Coordinate75 = Coordinate()
Coordinate75.setPoint([0.1,-0.45,0,0.1,-0.6,0])

IndexedLineSet74.setCoord(Coordinate75)

Shape71.setGeometry(IndexedLineSet74)

HAnimSegment68.addChildren(Shape71)

HAnimJoint67.addChildren(HAnimSegment68)
HAnimJoint76 = HAnimJoint()
HAnimJoint76.setName("r_tarsometatarsal_1")
HAnimJoint76.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint76.setCenter([0.1,-0.6,0])
HAnimJoint76.setUlimit([0,0,0])
HAnimJoint76.setLlimit([0,0,0])
HAnimJoint76.setStiffness([0,0,0])
HAnimSegment77 = HAnimSegment()
HAnimSegment77.setName("r_metatarsal_1")
HAnimSegment77.setDEF("hanim_r_metatarsal_1")
Transform78 = Transform()
Transform78.setTranslation([0.1,-0.6,0])
Shape79 = Shape()
Shape79.setUSE("HAnimJointShape")

Transform78.addChildren(Shape79)

HAnimSegment77.addChildren(Transform78)
Shape80 = Shape()
Appearance81 = Appearance()
Material82 = Material()
Material82.setEmissiveColor([1,1,1])

Appearance81.setMaterial(Material82)

Shape80.setAppearance(Appearance81)
IndexedLineSet83 = IndexedLineSet()
IndexedLineSet83.setDEF("TMT1toMTP1")
IndexedLineSet83.setCoordIndex([0,1])
Coordinate84 = Coordinate()
Coordinate84.setPoint([0.1,-0.6,0,0.1,-0.9,0])

IndexedLineSet83.setCoord(Coordinate84)

Shape80.setGeometry(IndexedLineSet83)

HAnimSegment77.addChildren(Shape80)

HAnimJoint76.addChildren(HAnimSegment77)
HAnimJoint85 = HAnimJoint()
HAnimJoint85.setName("r_metatarsophalangeal_1")
HAnimJoint85.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint85.setCenter([0.1,-0.9,0])
HAnimJoint85.setUlimit([0,0,0])
HAnimJoint85.setLlimit([0,0,0])
HAnimJoint85.setStiffness([0,0,0])
HAnimSegment86 = HAnimSegment()
HAnimSegment86.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment86.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform87 = Transform()
Transform87.setTranslation([0.1,-0.9,0])
Shape88 = Shape()
Shape88.setUSE("HAnimJointShape")

Transform87.addChildren(Shape88)

HAnimSegment86.addChildren(Transform87)
Shape89 = Shape()
Appearance90 = Appearance()
Material91 = Material()
Material91.setEmissiveColor([1,1,1])

Appearance90.setMaterial(Material91)

Shape89.setAppearance(Appearance90)
IndexedLineSet92 = IndexedLineSet()
IndexedLineSet92.setDEF("MTP1toIP1")
IndexedLineSet92.setCoordIndex([0,1])
Coordinate93 = Coordinate()
Coordinate93.setPoint([0.1,-0.9,0,0.1,-1.05,0])

IndexedLineSet92.setCoord(Coordinate93)

Shape89.setGeometry(IndexedLineSet92)

HAnimSegment86.addChildren(Shape89)

HAnimJoint85.addChildren(HAnimSegment86)
HAnimJoint94 = HAnimJoint()
HAnimJoint94.setName("r_tarsal_interphalangeal_1")
HAnimJoint94.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint94.setCenter([0.1,-1.05,0])
HAnimJoint94.setUlimit([0,0,0])
HAnimJoint94.setLlimit([0,0,0])
HAnimJoint94.setStiffness([0,0,0])
HAnimSegment95 = HAnimSegment()
HAnimSegment95.setName("r_tarsal_distal_phalanx_1")
HAnimSegment95.setDEF("hanim_r_tarsal_distal_phalanx_1")
Transform96 = Transform()
Transform96.setTranslation([0.1,-1.05,0])
Shape97 = Shape()
Shape97.setUSE("HAnimJointShape")

Transform96.addChildren(Shape97)

HAnimSegment95.addChildren(Transform96)
Shape98 = Shape()
Appearance99 = Appearance()
Material100 = Material()
Material100.setEmissiveColor([1,1,1])

Appearance99.setMaterial(Material100)

Shape98.setAppearance(Appearance99)
IndexedLineSet101 = IndexedLineSet()
IndexedLineSet101.setDEF("tiptoe_r_interphalangeal_")
IndexedLineSet101.setCoordIndex([0,1])
Coordinate102 = Coordinate()
Coordinate102.setPoint([0.1,-1.05,0,0.1,-1.1,0])

IndexedLineSet101.setCoord(Coordinate102)

Shape98.setGeometry(IndexedLineSet101)

HAnimSegment95.addChildren(Shape98)

HAnimJoint94.addChildren(HAnimSegment95)

HAnimJoint85.addChildren(HAnimJoint94)

HAnimJoint76.addChildren(HAnimJoint85)

HAnimJoint67.addChildren(HAnimJoint76)

HAnimJoint48.addChildren(HAnimJoint67)
#CN2
HAnimJoint103 = HAnimJoint()
HAnimJoint103.setName("r_cuneonavicular_2")
HAnimJoint103.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint103.setCenter([0,-0.45,0])
HAnimJoint103.setUlimit([0,0,0])
HAnimJoint103.setLlimit([0,0,0])
HAnimJoint103.setStiffness([0,0,0])
HAnimSegment104 = HAnimSegment()
HAnimSegment104.setName("r_cuneiform_2")
HAnimSegment104.setDEF("hanim_r_cuneiform_2")
Transform105 = Transform()
Transform105.setTranslation([0,-0.45,0])
Shape106 = Shape()
Shape106.setUSE("HAnimJointShape")

Transform105.addChildren(Shape106)

HAnimSegment104.addChildren(Transform105)
Shape107 = Shape()
Appearance108 = Appearance()
Material109 = Material()
Material109.setEmissiveColor([1,1,1])

Appearance108.setMaterial(Material109)

Shape107.setAppearance(Appearance108)
IndexedLineSet110 = IndexedLineSet()
IndexedLineSet110.setDEF("CN2toTMT2")
IndexedLineSet110.setCoordIndex([0,1])
Coordinate111 = Coordinate()
Coordinate111.setPoint([0,-0.45,0,-0.05,-0.6,0])

IndexedLineSet110.setCoord(Coordinate111)

Shape107.setGeometry(IndexedLineSet110)

HAnimSegment104.addChildren(Shape107)

HAnimJoint103.addChildren(HAnimSegment104)
HAnimJoint112 = HAnimJoint()
HAnimJoint112.setName("r_tarsometatarsal_2")
HAnimJoint112.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint112.setCenter([-0.05,-0.6,0])
HAnimJoint112.setUlimit([0,0,0])
HAnimJoint112.setLlimit([0,0,0])
HAnimJoint112.setStiffness([0,0,0])
HAnimSegment113 = HAnimSegment()
HAnimSegment113.setName("r_metatarsal_2")
HAnimSegment113.setDEF("hanim_r_metatarsal_2")
Transform114 = Transform()
Transform114.setTranslation([-0.05,-0.6,0])
Shape115 = Shape()
Shape115.setUSE("HAnimJointShape")

Transform114.addChildren(Shape115)

HAnimSegment113.addChildren(Transform114)
Shape116 = Shape()
Appearance117 = Appearance()
Material118 = Material()
Material118.setEmissiveColor([1,1,1])

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedLineSet119 = IndexedLineSet()
IndexedLineSet119.setDEF("TMT2toMTP2")
IndexedLineSet119.setCoordIndex([0,1])
Coordinate120 = Coordinate()
Coordinate120.setPoint([-0.05,-0.6,0,-0.05,-0.9,0])

IndexedLineSet119.setCoord(Coordinate120)

Shape116.setGeometry(IndexedLineSet119)

HAnimSegment113.addChildren(Shape116)

HAnimJoint112.addChildren(HAnimSegment113)
HAnimJoint121 = HAnimJoint()
HAnimJoint121.setName("r_metatarsophalangeal_2")
HAnimJoint121.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint121.setCenter([-0.05,-0.9,0])
HAnimJoint121.setUlimit([0,0,0])
HAnimJoint121.setLlimit([0,0,0])
HAnimJoint121.setStiffness([0,0,0])
HAnimSegment122 = HAnimSegment()
HAnimSegment122.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment122.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform123 = Transform()
Transform123.setTranslation([-0.05,-0.9,0])
Shape124 = Shape()
Shape124.setUSE("HAnimJointShape")

Transform123.addChildren(Shape124)

HAnimSegment122.addChildren(Transform123)
Shape125 = Shape()
Appearance126 = Appearance()
Material127 = Material()
Material127.setEmissiveColor([1,1,1])

Appearance126.setMaterial(Material127)

Shape125.setAppearance(Appearance126)
IndexedLineSet128 = IndexedLineSet()
IndexedLineSet128.setDEF("MTP2toPIP2")
IndexedLineSet128.setCoordIndex([0,1])
Coordinate129 = Coordinate()
Coordinate129.setPoint([-0.05,-0.9,0,-0.05,-1.05,0])

IndexedLineSet128.setCoord(Coordinate129)

Shape125.setGeometry(IndexedLineSet128)

HAnimSegment122.addChildren(Shape125)

HAnimJoint121.addChildren(HAnimSegment122)
HAnimJoint130 = HAnimJoint()
HAnimJoint130.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint130.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint130.setCenter([-0.05,-1.05,0])
HAnimJoint130.setUlimit([0,0,0])
HAnimJoint130.setLlimit([0,0,0])
HAnimJoint130.setStiffness([0,0,0])
HAnimSegment131 = HAnimSegment()
HAnimSegment131.setName("r_tarsal_middle_phalanx_2")
HAnimSegment131.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform132 = Transform()
Transform132.setTranslation([-0.05,-1.05,0])
Shape133 = Shape()
Shape133.setUSE("HAnimJointShape")

Transform132.addChildren(Shape133)

HAnimSegment131.addChildren(Transform132)
Shape134 = Shape()
Appearance135 = Appearance()
Material136 = Material()
Material136.setEmissiveColor([1,1,1])

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
IndexedLineSet137 = IndexedLineSet()
IndexedLineSet137.setDEF("PIP2toDIP2")
IndexedLineSet137.setCoordIndex([0,1])
Coordinate138 = Coordinate()
Coordinate138.setPoint([-0.05,-1.05,0,-0.05,-1.12,0])

IndexedLineSet137.setCoord(Coordinate138)

Shape134.setGeometry(IndexedLineSet137)

HAnimSegment131.addChildren(Shape134)

HAnimJoint130.addChildren(HAnimSegment131)
HAnimJoint139 = HAnimJoint()
HAnimJoint139.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint139.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint139.setCenter([-0.05,-1.12,0])
HAnimJoint139.setUlimit([0,0,0])
HAnimJoint139.setLlimit([0,0,0])
HAnimJoint139.setStiffness([0,0,0])
HAnimSegment140 = HAnimSegment()
HAnimSegment140.setName("r_tarsal_distal_phalanx_2")
HAnimSegment140.setDEF("hanim_r_tarsal_distal_phalanx_2")
Transform141 = Transform()
Transform141.setTranslation([-0.05,-1.12,0])
Shape142 = Shape()
Shape142.setUSE("HAnimJointShape")

Transform141.addChildren(Shape142)

HAnimSegment140.addChildren(Transform141)
Shape143 = Shape()
Appearance144 = Appearance()
Material145 = Material()
Material145.setEmissiveColor([1,1,1])

Appearance144.setMaterial(Material145)

Shape143.setAppearance(Appearance144)
IndexedLineSet146 = IndexedLineSet()
IndexedLineSet146.setDEF("tiptoe_r_tarsal_distal_interphalangeal_2")
IndexedLineSet146.setCoordIndex([0,1])
Coordinate147 = Coordinate()
Coordinate147.setPoint([-0.05,-1.12,0,-0.05,-1.16,0])

IndexedLineSet146.setCoord(Coordinate147)

Shape143.setGeometry(IndexedLineSet146)

HAnimSegment140.addChildren(Shape143)

HAnimJoint139.addChildren(HAnimSegment140)

HAnimJoint130.addChildren(HAnimJoint139)

HAnimJoint121.addChildren(HAnimJoint130)

HAnimJoint112.addChildren(HAnimJoint121)

HAnimJoint103.addChildren(HAnimJoint112)

HAnimJoint48.addChildren(HAnimJoint103)
#CN3
HAnimJoint148 = HAnimJoint()
HAnimJoint148.setName("r_cuneonavicular_3")
HAnimJoint148.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint148.setCenter([-0.1,-0.4,0])
HAnimJoint148.setUlimit([0,0,0])
HAnimJoint148.setLlimit([0,0,0])
HAnimJoint148.setStiffness([0,0,0])
HAnimSegment149 = HAnimSegment()
HAnimSegment149.setName("r_cuneiform_3")
HAnimSegment149.setDEF("hanim_r_cuneiform_3")
Transform150 = Transform()
Transform150.setTranslation([-0.1,-0.4,0])
Shape151 = Shape()
Shape151.setUSE("HAnimJointShape")

Transform150.addChildren(Shape151)

HAnimSegment149.addChildren(Transform150)
Shape152 = Shape()
Appearance153 = Appearance()
Material154 = Material()
Material154.setEmissiveColor([1,1,1])

Appearance153.setMaterial(Material154)

Shape152.setAppearance(Appearance153)
IndexedLineSet155 = IndexedLineSet()
IndexedLineSet155.setDEF("CN3toTMT3")
IndexedLineSet155.setCoordIndex([0,1])
Coordinate156 = Coordinate()
Coordinate156.setPoint([-0.1,-0.4,0,-0.15,-0.6,0])

IndexedLineSet155.setCoord(Coordinate156)

Shape152.setGeometry(IndexedLineSet155)

HAnimSegment149.addChildren(Shape152)

HAnimJoint148.addChildren(HAnimSegment149)
HAnimJoint157 = HAnimJoint()
HAnimJoint157.setName("r_tarsometatarsal_3")
HAnimJoint157.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint157.setCenter([-0.15,-0.6,0])
HAnimJoint157.setUlimit([0,0,0])
HAnimJoint157.setLlimit([0,0,0])
HAnimJoint157.setStiffness([0,0,0])
HAnimSegment158 = HAnimSegment()
HAnimSegment158.setName("r_metatarsal_3")
HAnimSegment158.setDEF("hanim_r_metatarsal_3")
Transform159 = Transform()
Transform159.setTranslation([-0.15,-0.6,0])
Shape160 = Shape()
Shape160.setUSE("HAnimJointShape")

Transform159.addChildren(Shape160)

HAnimSegment158.addChildren(Transform159)
Shape161 = Shape()
Appearance162 = Appearance()
Material163 = Material()
Material163.setEmissiveColor([1,1,1])

Appearance162.setMaterial(Material163)

Shape161.setAppearance(Appearance162)
IndexedLineSet164 = IndexedLineSet()
IndexedLineSet164.setDEF("TMT3toMTP3")
IndexedLineSet164.setCoordIndex([0,1])
Coordinate165 = Coordinate()
Coordinate165.setPoint([-0.15,-0.6,0,-0.15,-0.9,0])

IndexedLineSet164.setCoord(Coordinate165)

Shape161.setGeometry(IndexedLineSet164)

HAnimSegment158.addChildren(Shape161)

HAnimJoint157.addChildren(HAnimSegment158)
HAnimJoint166 = HAnimJoint()
HAnimJoint166.setName("r_metatarsophalangeal_3")
HAnimJoint166.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint166.setCenter([-0.15,-0.9,0])
HAnimJoint166.setUlimit([0,0,0])
HAnimJoint166.setLlimit([0,0,0])
HAnimJoint166.setStiffness([0,0,0])
HAnimSegment167 = HAnimSegment()
HAnimSegment167.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment167.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform168 = Transform()
Transform168.setTranslation([-0.15,-0.9,0])
Shape169 = Shape()
Shape169.setUSE("HAnimJointShape")

Transform168.addChildren(Shape169)

HAnimSegment167.addChildren(Transform168)
Shape170 = Shape()
Appearance171 = Appearance()
Material172 = Material()
Material172.setEmissiveColor([1,1,1])

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedLineSet173 = IndexedLineSet()
IndexedLineSet173.setDEF("MTP3toPIP3")
IndexedLineSet173.setCoordIndex([0,1])
Coordinate174 = Coordinate()
Coordinate174.setPoint([-0.15,-0.9,0,-0.15,-1.05,0])

IndexedLineSet173.setCoord(Coordinate174)

Shape170.setGeometry(IndexedLineSet173)

HAnimSegment167.addChildren(Shape170)

HAnimJoint166.addChildren(HAnimSegment167)
HAnimJoint175 = HAnimJoint()
HAnimJoint175.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint175.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint175.setCenter([-0.15,-1.05,0])
HAnimJoint175.setUlimit([0,0,0])
HAnimJoint175.setLlimit([0,0,0])
HAnimJoint175.setStiffness([0,0,0])
HAnimSegment176 = HAnimSegment()
HAnimSegment176.setName("r_tarsal_middle_phalanx_3")
HAnimSegment176.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform177 = Transform()
Transform177.setTranslation([-0.15,-1.05,0])
Shape178 = Shape()
Shape178.setUSE("HAnimJointShape")

Transform177.addChildren(Shape178)

HAnimSegment176.addChildren(Transform177)
Shape179 = Shape()
Appearance180 = Appearance()
Material181 = Material()
Material181.setEmissiveColor([1,1,1])

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedLineSet182 = IndexedLineSet()
IndexedLineSet182.setDEF("PIP3toDIP3")
IndexedLineSet182.setCoordIndex([0,1])
Coordinate183 = Coordinate()
Coordinate183.setPoint([-0.15,-1.05,0,-0.15,-1.13,0])

IndexedLineSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedLineSet182)

HAnimSegment176.addChildren(Shape179)

HAnimJoint175.addChildren(HAnimSegment176)
HAnimJoint184 = HAnimJoint()
HAnimJoint184.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint184.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint184.setCenter([-0.15,-1.13,0])
HAnimJoint184.setUlimit([0,0,0])
HAnimJoint184.setLlimit([0,0,0])
HAnimJoint184.setStiffness([0,0,0])
HAnimSegment185 = HAnimSegment()
HAnimSegment185.setName("r_tarsal_distal_phalanx_3")
HAnimSegment185.setDEF("hanim_r_tarsal_distal_phalanx_3")
Transform186 = Transform()
Transform186.setTranslation([-0.15,-1.13,0])
Shape187 = Shape()
Shape187.setUSE("HAnimJointShape")

Transform186.addChildren(Shape187)

HAnimSegment185.addChildren(Transform186)
Shape188 = Shape()
Appearance189 = Appearance()
Material190 = Material()
Material190.setEmissiveColor([1,1,1])

Appearance189.setMaterial(Material190)

Shape188.setAppearance(Appearance189)
IndexedLineSet191 = IndexedLineSet()
IndexedLineSet191.setDEF("tiptoe_r_tarsal_distal_interphalangeal_3")
IndexedLineSet191.setCoordIndex([0,1])
Coordinate192 = Coordinate()
Coordinate192.setPoint([-0.15,-1.13,0,-0.15,-1.16,0])

IndexedLineSet191.setCoord(Coordinate192)

Shape188.setGeometry(IndexedLineSet191)

HAnimSegment185.addChildren(Shape188)

HAnimJoint184.addChildren(HAnimSegment185)

HAnimJoint175.addChildren(HAnimJoint184)

HAnimJoint166.addChildren(HAnimJoint175)

HAnimJoint157.addChildren(HAnimJoint166)

HAnimJoint148.addChildren(HAnimJoint157)

HAnimJoint48.addChildren(HAnimJoint148)

HAnimJoint31.addChildren(HAnimJoint48)
#CC
HAnimJoint193 = HAnimJoint()
HAnimJoint193.setName("r_calcaneocuboid")
HAnimJoint193.setDEF("hanim_r_calcaneocuboid")
HAnimJoint193.setCenter([-0.2,0.3,0])
HAnimJoint193.setUlimit([0,0,0])
HAnimJoint193.setLlimit([0,0,0])
HAnimJoint193.setStiffness([0,0,0])
HAnimSegment194 = HAnimSegment()
HAnimSegment194.setName("r_calcaneus")
HAnimSegment194.setDEF("hanim_r_calcaneus")
Transform195 = Transform()
Transform195.setTranslation([-0.2,0.3,0])
Shape196 = Shape()
Shape196.setUSE("HAnimJointShape")

Transform195.addChildren(Shape196)

HAnimSegment194.addChildren(Transform195)
Shape197 = Shape()
Appearance198 = Appearance()
Material199 = Material()
Material199.setEmissiveColor([1,1,1])

Appearance198.setMaterial(Material199)

Shape197.setAppearance(Appearance198)
IndexedLineSet200 = IndexedLineSet()
IndexedLineSet200.setDEF("CCtoTT")
IndexedLineSet200.setCoordIndex([0,1])
Coordinate201 = Coordinate()
Coordinate201.setPoint([-0.2,0.3,0,-0.21,-0.3,0])

IndexedLineSet200.setCoord(Coordinate201)

Shape197.setGeometry(IndexedLineSet200)

HAnimSegment194.addChildren(Shape197)

HAnimJoint193.addChildren(HAnimSegment194)
#TT
HAnimJoint202 = HAnimJoint()
HAnimJoint202.setName("r_transversetarsal")
HAnimJoint202.setDEF("hanim_r_transversetarsal")
HAnimJoint202.setCenter([-0.21,-0.3,0])
HAnimJoint202.setUlimit([0,0,0])
HAnimJoint202.setLlimit([0,0,0])
HAnimJoint202.setStiffness([0,0,0])
HAnimSegment203 = HAnimSegment()
HAnimSegment203.setName("r_cuboid")
HAnimSegment203.setDEF("hanim_r_cuboid")
Transform204 = Transform()
Transform204.setTranslation([-0.21,-0.3,0])
Shape205 = Shape()
Shape205.setUSE("HAnimJointShape")

Transform204.addChildren(Shape205)

HAnimSegment203.addChildren(Transform204)
Shape206 = Shape()
Appearance207 = Appearance()
Material208 = Material()
Material208.setEmissiveColor([1,1,1])

Appearance207.setMaterial(Material208)

Shape206.setAppearance(Appearance207)
IndexedLineSet209 = IndexedLineSet()
IndexedLineSet209.setDEF("TTtoTMT4")
IndexedLineSet209.setCoordIndex([0,1])
Coordinate210 = Coordinate()
Coordinate210.setPoint([-0.21,-0.3,0,-0.25,-0.58,0])

IndexedLineSet209.setCoord(Coordinate210)

Shape206.setGeometry(IndexedLineSet209)

HAnimSegment203.addChildren(Shape206)
Shape211 = Shape()
Appearance212 = Appearance()
Material213 = Material()
Material213.setEmissiveColor([1,1,1])

Appearance212.setMaterial(Material213)

Shape211.setAppearance(Appearance212)
IndexedLineSet214 = IndexedLineSet()
IndexedLineSet214.setDEF("TTtoTMT5")
IndexedLineSet214.setCoordIndex([0,1])
Coordinate215 = Coordinate()
Coordinate215.setPoint([-0.21,-0.3,0,-0.33,-0.52,0])

IndexedLineSet214.setCoord(Coordinate215)

Shape211.setGeometry(IndexedLineSet214)

HAnimSegment203.addChildren(Shape211)

HAnimJoint202.addChildren(HAnimSegment203)
#TMT4
HAnimJoint216 = HAnimJoint()
HAnimJoint216.setName("r_tarsometatarsal_4")
HAnimJoint216.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint216.setCenter([-0.25,-0.58,0])
HAnimJoint216.setUlimit([0,0,0])
HAnimJoint216.setLlimit([0,0,0])
HAnimJoint216.setStiffness([0,0,0])
HAnimSegment217 = HAnimSegment()
HAnimSegment217.setName("r_metatarsal_4")
HAnimSegment217.setDEF("hanim_r_metatarsal_4")
Transform218 = Transform()
Transform218.setTranslation([-0.25,-0.58,0])
Shape219 = Shape()
Shape219.setUSE("HAnimJointShape")

Transform218.addChildren(Shape219)

HAnimSegment217.addChildren(Transform218)
Shape220 = Shape()
Appearance221 = Appearance()
Material222 = Material()
Material222.setEmissiveColor([1,1,1])

Appearance221.setMaterial(Material222)

Shape220.setAppearance(Appearance221)
IndexedLineSet223 = IndexedLineSet()
IndexedLineSet223.setDEF("TMT4toMTP4")
IndexedLineSet223.setCoordIndex([0,1])
Coordinate224 = Coordinate()
Coordinate224.setPoint([-0.25,-0.58,0,-0.25,-0.87,0])

IndexedLineSet223.setCoord(Coordinate224)

Shape220.setGeometry(IndexedLineSet223)

HAnimSegment217.addChildren(Shape220)

HAnimJoint216.addChildren(HAnimSegment217)
HAnimJoint225 = HAnimJoint()
HAnimJoint225.setName("r_metatarsophalangeal_4")
HAnimJoint225.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint225.setCenter([-0.25,-0.87,0])
HAnimJoint225.setUlimit([0,0,0])
HAnimJoint225.setLlimit([0,0,0])
HAnimJoint225.setStiffness([0,0,0])
HAnimSegment226 = HAnimSegment()
HAnimSegment226.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment226.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform227 = Transform()
Transform227.setTranslation([-0.25,-0.87,0])
Shape228 = Shape()
Shape228.setUSE("HAnimJointShape")

Transform227.addChildren(Shape228)

HAnimSegment226.addChildren(Transform227)
Shape229 = Shape()
Appearance230 = Appearance()
Material231 = Material()
Material231.setEmissiveColor([1,1,1])

Appearance230.setMaterial(Material231)

Shape229.setAppearance(Appearance230)
IndexedLineSet232 = IndexedLineSet()
IndexedLineSet232.setDEF("MTP4toPIP4")
IndexedLineSet232.setCoordIndex([0,1])
Coordinate233 = Coordinate()
Coordinate233.setPoint([-0.25,-0.87,0,-0.25,-1,0])

IndexedLineSet232.setCoord(Coordinate233)

Shape229.setGeometry(IndexedLineSet232)

HAnimSegment226.addChildren(Shape229)

HAnimJoint225.addChildren(HAnimSegment226)
HAnimJoint234 = HAnimJoint()
HAnimJoint234.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint234.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint234.setCenter([-0.25,-1,0])
HAnimJoint234.setUlimit([0,0,0])
HAnimJoint234.setLlimit([0,0,0])
HAnimJoint234.setStiffness([0,0,0])
HAnimSegment235 = HAnimSegment()
HAnimSegment235.setName("r_tarsal_middle_phalanx_4")
HAnimSegment235.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform236 = Transform()
Transform236.setTranslation([-0.25,-1,0])
Shape237 = Shape()
Shape237.setUSE("HAnimJointShape")

Transform236.addChildren(Shape237)

HAnimSegment235.addChildren(Transform236)
Shape238 = Shape()
Appearance239 = Appearance()
Material240 = Material()
Material240.setEmissiveColor([1,1,1])

Appearance239.setMaterial(Material240)

Shape238.setAppearance(Appearance239)
IndexedLineSet241 = IndexedLineSet()
IndexedLineSet241.setDEF("PIP4toDIP4")
IndexedLineSet241.setCoordIndex([0,1])
Coordinate242 = Coordinate()
Coordinate242.setPoint([-0.25,-1,0,-0.25,-1.1,0])

IndexedLineSet241.setCoord(Coordinate242)

Shape238.setGeometry(IndexedLineSet241)

HAnimSegment235.addChildren(Shape238)

HAnimJoint234.addChildren(HAnimSegment235)
HAnimJoint243 = HAnimJoint()
HAnimJoint243.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint243.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint243.setCenter([-0.25,-1.1,0])
HAnimJoint243.setUlimit([0,0,0])
HAnimJoint243.setLlimit([0,0,0])
HAnimJoint243.setStiffness([0,0,0])
HAnimSegment244 = HAnimSegment()
HAnimSegment244.setName("r_tarsal_distal_phalanx_4")
HAnimSegment244.setDEF("hanim_r_tarsal_distal_phalanx_4")
Transform245 = Transform()
Transform245.setTranslation([-0.25,-1.1,0])
Shape246 = Shape()
Shape246.setUSE("HAnimJointShape")

Transform245.addChildren(Shape246)

HAnimSegment244.addChildren(Transform245)
Shape247 = Shape()
Appearance248 = Appearance()
Material249 = Material()
Material249.setEmissiveColor([1,1,1])

Appearance248.setMaterial(Material249)

Shape247.setAppearance(Appearance248)
IndexedLineSet250 = IndexedLineSet()
IndexedLineSet250.setDEF("tiptoe_r_tarsal_distal_interphalangeal_4")
IndexedLineSet250.setCoordIndex([0,1])
Coordinate251 = Coordinate()
Coordinate251.setPoint([-0.25,-1.1,0,-0.25,-1.15,0])

IndexedLineSet250.setCoord(Coordinate251)

Shape247.setGeometry(IndexedLineSet250)

HAnimSegment244.addChildren(Shape247)

HAnimJoint243.addChildren(HAnimSegment244)

HAnimJoint234.addChildren(HAnimJoint243)

HAnimJoint225.addChildren(HAnimJoint234)

HAnimJoint216.addChildren(HAnimJoint225)

HAnimJoint202.addChildren(HAnimJoint216)
#TMT5
HAnimJoint252 = HAnimJoint()
HAnimJoint252.setName("r_tarsometatarsal_5")
HAnimJoint252.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint252.setCenter([-0.33,-0.52,0])
HAnimJoint252.setUlimit([0,0,0])
HAnimJoint252.setLlimit([0,0,0])
HAnimJoint252.setStiffness([0,0,0])
HAnimSegment253 = HAnimSegment()
HAnimSegment253.setName("r_metatarsal_5")
HAnimSegment253.setDEF("hanim_r_metatarsal_5")
Transform254 = Transform()
Transform254.setTranslation([-0.33,-0.52,0])
Shape255 = Shape()
Shape255.setUSE("HAnimJointShape")

Transform254.addChildren(Shape255)

HAnimSegment253.addChildren(Transform254)
Shape256 = Shape()
Appearance257 = Appearance()
Material258 = Material()
Material258.setEmissiveColor([1,1,1])

Appearance257.setMaterial(Material258)

Shape256.setAppearance(Appearance257)
IndexedLineSet259 = IndexedLineSet()
IndexedLineSet259.setDEF("TMT5toMTP5")
IndexedLineSet259.setCoordIndex([0,1])
Coordinate260 = Coordinate()
Coordinate260.setPoint([-0.33,-0.52,0,-0.34,-0.8,0])

IndexedLineSet259.setCoord(Coordinate260)

Shape256.setGeometry(IndexedLineSet259)

HAnimSegment253.addChildren(Shape256)

HAnimJoint252.addChildren(HAnimSegment253)
HAnimJoint261 = HAnimJoint()
HAnimJoint261.setName("r_metatarsophalangeal_5")
HAnimJoint261.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint261.setCenter([-0.34,-0.8,0])
HAnimJoint261.setUlimit([0,0,0])
HAnimJoint261.setLlimit([0,0,0])
HAnimJoint261.setStiffness([0,0,0])
HAnimSegment262 = HAnimSegment()
HAnimSegment262.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment262.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform263 = Transform()
Transform263.setTranslation([-0.34,-0.8,0])
Shape264 = Shape()
Shape264.setUSE("HAnimJointShape")

Transform263.addChildren(Shape264)

HAnimSegment262.addChildren(Transform263)
Shape265 = Shape()
Appearance266 = Appearance()
Material267 = Material()
Material267.setEmissiveColor([1,1,1])

Appearance266.setMaterial(Material267)

Shape265.setAppearance(Appearance266)
IndexedLineSet268 = IndexedLineSet()
IndexedLineSet268.setDEF("MTP5toPIP5")
IndexedLineSet268.setCoordIndex([0,1])
Coordinate269 = Coordinate()
Coordinate269.setPoint([-0.34,-0.8,0,-0.34,-0.95,0])

IndexedLineSet268.setCoord(Coordinate269)

Shape265.setGeometry(IndexedLineSet268)

HAnimSegment262.addChildren(Shape265)

HAnimJoint261.addChildren(HAnimSegment262)
HAnimJoint270 = HAnimJoint()
HAnimJoint270.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint270.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint270.setCenter([-0.34,-0.95,0])
HAnimJoint270.setUlimit([0,0,0])
HAnimJoint270.setLlimit([0,0,0])
HAnimJoint270.setStiffness([0,0,0])
HAnimSegment271 = HAnimSegment()
HAnimSegment271.setName("r_tarsal_middle_phalanx_5")
HAnimSegment271.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform272 = Transform()
Transform272.setTranslation([-0.34,-0.95,0])
Shape273 = Shape()
Shape273.setUSE("HAnimJointShape")

Transform272.addChildren(Shape273)

HAnimSegment271.addChildren(Transform272)
Shape274 = Shape()
Appearance275 = Appearance()
Material276 = Material()
Material276.setEmissiveColor([1,1,1])

Appearance275.setMaterial(Material276)

Shape274.setAppearance(Appearance275)
IndexedLineSet277 = IndexedLineSet()
IndexedLineSet277.setDEF("PIP5toDIP5")
IndexedLineSet277.setCoordIndex([0,1])
Coordinate278 = Coordinate()
Coordinate278.setPoint([-0.34,-0.95,0,-0.34,-1.05,0])

IndexedLineSet277.setCoord(Coordinate278)

Shape274.setGeometry(IndexedLineSet277)

HAnimSegment271.addChildren(Shape274)

HAnimJoint270.addChildren(HAnimSegment271)
HAnimJoint279 = HAnimJoint()
HAnimJoint279.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint279.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint279.setCenter([-0.34,-1.05,0])
HAnimJoint279.setUlimit([0,0,0])
HAnimJoint279.setLlimit([0,0,0])
HAnimJoint279.setStiffness([0,0,0])
HAnimSegment280 = HAnimSegment()
HAnimSegment280.setName("r_tarsal_distal_phalanx_5")
HAnimSegment280.setDEF("hanim_r_tarsal_distal_phalanx_5")
Transform281 = Transform()
Transform281.setTranslation([-0.34,-1.05,0])
Shape282 = Shape()
Shape282.setUSE("HAnimJointShape")

Transform281.addChildren(Shape282)

HAnimSegment280.addChildren(Transform281)
Shape283 = Shape()
Appearance284 = Appearance()
Material285 = Material()
Material285.setEmissiveColor([1,1,1])

Appearance284.setMaterial(Material285)

Shape283.setAppearance(Appearance284)
IndexedLineSet286 = IndexedLineSet()
IndexedLineSet286.setDEF("tiptoe_r_tarsal_distal_interphalangeal_5")
IndexedLineSet286.setCoordIndex([0,1])
Coordinate287 = Coordinate()
Coordinate287.setPoint([-0.34,-1.05,0,-0.34,-1.08,0])

IndexedLineSet286.setCoord(Coordinate287)

Shape283.setGeometry(IndexedLineSet286)

HAnimSegment280.addChildren(Shape283)

HAnimJoint279.addChildren(HAnimSegment280)

HAnimJoint270.addChildren(HAnimJoint279)

HAnimJoint261.addChildren(HAnimJoint270)

HAnimJoint252.addChildren(HAnimJoint261)

HAnimJoint202.addChildren(HAnimJoint252)

HAnimJoint193.addChildren(HAnimJoint202)

HAnimJoint31.addChildren(HAnimJoint193)

HAnimJoint30.addChildren(HAnimJoint31)

HAnimHumanoid27.setSkeleton(HAnimJoint30)
HAnimJoint288 = HAnimJoint()
HAnimJoint288.setUSE("hanim_humanoid_root")

HAnimHumanoid27.addJoints(HAnimJoint288)
HAnimJoint289 = HAnimJoint()
HAnimJoint289.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid27.addJoints(HAnimJoint289)
HAnimJoint290 = HAnimJoint()
HAnimJoint290.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid27.addJoints(HAnimJoint290)
HAnimJoint291 = HAnimJoint()
HAnimJoint291.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid27.addJoints(HAnimJoint291)
HAnimJoint292 = HAnimJoint()
HAnimJoint292.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid27.addJoints(HAnimJoint292)
HAnimJoint293 = HAnimJoint()
HAnimJoint293.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid27.addJoints(HAnimJoint293)
HAnimJoint294 = HAnimJoint()
HAnimJoint294.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint294)
HAnimJoint295 = HAnimJoint()
HAnimJoint295.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint295)
HAnimJoint296 = HAnimJoint()
HAnimJoint296.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint296)
HAnimJoint297 = HAnimJoint()
HAnimJoint297.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint297)
HAnimJoint298 = HAnimJoint()
HAnimJoint298.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid27.addJoints(HAnimJoint298)
HAnimJoint299 = HAnimJoint()
HAnimJoint299.setUSE("hanim_r_talocrural")

HAnimHumanoid27.addJoints(HAnimJoint299)
HAnimJoint300 = HAnimJoint()
HAnimJoint300.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint300)
HAnimJoint301 = HAnimJoint()
HAnimJoint301.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint301)
HAnimJoint302 = HAnimJoint()
HAnimJoint302.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint302)
HAnimJoint303 = HAnimJoint()
HAnimJoint303.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint303)
HAnimJoint304 = HAnimJoint()
HAnimJoint304.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid27.addJoints(HAnimJoint304)
HAnimJoint305 = HAnimJoint()
HAnimJoint305.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint305)
HAnimJoint306 = HAnimJoint()
HAnimJoint306.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint306)
HAnimJoint307 = HAnimJoint()
HAnimJoint307.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint307)
HAnimJoint308 = HAnimJoint()
HAnimJoint308.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint308)
HAnimJoint309 = HAnimJoint()
HAnimJoint309.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid27.addJoints(HAnimJoint309)
HAnimJoint310 = HAnimJoint()
HAnimJoint310.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid27.addJoints(HAnimJoint310)
HAnimJoint311 = HAnimJoint()
HAnimJoint311.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid27.addJoints(HAnimJoint311)
HAnimJoint312 = HAnimJoint()
HAnimJoint312.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid27.addJoints(HAnimJoint312)
HAnimJoint313 = HAnimJoint()
HAnimJoint313.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid27.addJoints(HAnimJoint313)
HAnimJoint314 = HAnimJoint()
HAnimJoint314.setUSE("hanim_r_transversetarsal")

HAnimHumanoid27.addJoints(HAnimJoint314)
HAnimSegment315 = HAnimSegment()
HAnimSegment315.setUSE("hanim_r_calcaneus")

HAnimHumanoid27.addSegments(HAnimSegment315)
HAnimSegment316 = HAnimSegment()
HAnimSegment316.setUSE("hanim_r_cuboid")

HAnimHumanoid27.addSegments(HAnimSegment316)
HAnimSegment317 = HAnimSegment()
HAnimSegment317.setUSE("hanim_r_cuneiform_1")

HAnimHumanoid27.addSegments(HAnimSegment317)
HAnimSegment318 = HAnimSegment()
HAnimSegment318.setUSE("hanim_r_cuneiform_2")

HAnimHumanoid27.addSegments(HAnimSegment318)
HAnimSegment319 = HAnimSegment()
HAnimSegment319.setUSE("hanim_r_cuneiform_3")

HAnimHumanoid27.addSegments(HAnimSegment319)
HAnimSegment320 = HAnimSegment()
HAnimSegment320.setUSE("hanim_r_metatarsal_1")

HAnimHumanoid27.addSegments(HAnimSegment320)
HAnimSegment321 = HAnimSegment()
HAnimSegment321.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid27.addSegments(HAnimSegment321)
HAnimSegment322 = HAnimSegment()
HAnimSegment322.setUSE("hanim_r_metatarsal_3")

HAnimHumanoid27.addSegments(HAnimSegment322)
HAnimSegment323 = HAnimSegment()
HAnimSegment323.setUSE("hanim_r_metatarsal_4")

HAnimHumanoid27.addSegments(HAnimSegment323)
HAnimSegment324 = HAnimSegment()
HAnimSegment324.setUSE("hanim_r_metatarsal_5")

HAnimHumanoid27.addSegments(HAnimSegment324)
HAnimSegment325 = HAnimSegment()
HAnimSegment325.setUSE("hanim_r_navicular")

HAnimHumanoid27.addSegments(HAnimSegment325)
HAnimSegment326 = HAnimSegment()
HAnimSegment326.setUSE("hanim_r_talus")

HAnimHumanoid27.addSegments(HAnimSegment326)
HAnimSegment327 = HAnimSegment()
HAnimSegment327.setUSE("hanim_r_tarsal_distal_phalanx_1")

HAnimHumanoid27.addSegments(HAnimSegment327)
HAnimSegment328 = HAnimSegment()
HAnimSegment328.setUSE("hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid27.addSegments(HAnimSegment328)
HAnimSegment329 = HAnimSegment()
HAnimSegment329.setUSE("hanim_r_tarsal_distal_phalanx_3")

HAnimHumanoid27.addSegments(HAnimSegment329)
HAnimSegment330 = HAnimSegment()
HAnimSegment330.setUSE("hanim_r_tarsal_distal_phalanx_4")

HAnimHumanoid27.addSegments(HAnimSegment330)
HAnimSegment331 = HAnimSegment()
HAnimSegment331.setUSE("hanim_r_tarsal_distal_phalanx_5")

HAnimHumanoid27.addSegments(HAnimSegment331)
HAnimSegment332 = HAnimSegment()
HAnimSegment332.setUSE("hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid27.addSegments(HAnimSegment332)
HAnimSegment333 = HAnimSegment()
HAnimSegment333.setUSE("hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid27.addSegments(HAnimSegment333)
HAnimSegment334 = HAnimSegment()
HAnimSegment334.setUSE("hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid27.addSegments(HAnimSegment334)
HAnimSegment335 = HAnimSegment()
HAnimSegment335.setUSE("hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid27.addSegments(HAnimSegment335)
HAnimSegment336 = HAnimSegment()
HAnimSegment336.setUSE("hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid27.addSegments(HAnimSegment336)
HAnimSegment337 = HAnimSegment()
HAnimSegment337.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid27.addSegments(HAnimSegment337)
HAnimSegment338 = HAnimSegment()
HAnimSegment338.setUSE("hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid27.addSegments(HAnimSegment338)
HAnimSegment339 = HAnimSegment()
HAnimSegment339.setUSE("hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid27.addSegments(HAnimSegment339)
HAnimSegment340 = HAnimSegment()
HAnimSegment340.setUSE("hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid27.addSegments(HAnimSegment340)

Scene25.addChildren(HAnimHumanoid27)

X3D0.setScene(Scene25)
X3D0.toFileX3D("../data/HAnimModelFootRight_RoundTrip.x3d")

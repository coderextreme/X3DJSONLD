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
meta3.setContent("HAnimModelFootLeft.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("Left foot, using high-fidelity definitions for HAnim version 2.0")

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
meta9.setName("warning")
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("info")
meta10.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("reference")
meta11.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("subject")
meta17.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("TODO")
meta18.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("identifier")
meta19.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("generator")
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("license")
meta21.setContent("../license.html")

head1.addMeta(meta21)

X3D0.setHead(head1)
Scene22 = Scene()
WorldInfo23 = WorldInfo()
WorldInfo23.setTitle("HAnimModelFootLeft.x3d")

Scene22.addChildren(WorldInfo23)
HAnimHumanoid24 = HAnimHumanoid()
HAnimHumanoid24.setName("Foot_Left")
HAnimHumanoid24.setDEF("hanim_Foot_Left")
HAnimHumanoid24.setLoa(4)
HAnimHumanoid24.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet25 = MetadataSet()
MetadataSet25.setName("HAnimHumanoid.info")
MetadataSet25.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString26 = MetadataString()
MetadataString26.setName("authorName")
MetadataString26.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet25.setValue(MetadataString26)

HAnimHumanoid24.setValue(MetadataSet25)
HAnimJoint27 = HAnimJoint()
HAnimJoint27.setName("humanoid_root")
HAnimJoint27.setDEF("hanim_humanoid_root")
HAnimJoint27.setUlimit([0,0,0])
HAnimJoint27.setLlimit([0,0,0])
HAnimJoint27.setStiffness([0,0,0])
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint28 = HAnimJoint()
HAnimJoint28.setName("l_talocrural")
HAnimJoint28.setDEF("hanim_l_talocrural")
HAnimJoint28.setDescription("connection joint of foot to leg above")
HAnimJoint28.setUlimit([0,0,0])
HAnimJoint28.setLlimit([0,0,0])
HAnimJoint28.setStiffness([0,0,0])
HAnimSegment29 = HAnimSegment()
HAnimSegment29.setName("l_talus")
HAnimSegment29.setDEF("hanim_l_talus")
Transform30 = Transform()
Shape31 = Shape()
Shape31.setDEF("HAnimJointShape")
Sphere32 = Sphere()
Sphere32.setRadius(0.025)

Shape31.setGeometry(Sphere32)
Appearance33 = Appearance()
Appearance33.setDEF("HAnimJointAppearance")
Material34 = Material()
Material34.setDiffuseColor([0,0,1])

Appearance33.setMaterial(Material34)

Shape31.setAppearance(Appearance33)

Transform30.addChildren(Shape31)

HAnimSegment29.addChildren(Transform30)
Shape35 = Shape()
Appearance36 = Appearance()
Material37 = Material()
Material37.setEmissiveColor([1,1,1])

Appearance36.setMaterial(Material37)

Shape35.setAppearance(Appearance36)
IndexedLineSet38 = IndexedLineSet()
IndexedLineSet38.setDEF("TCtoTCN")
IndexedLineSet38.setCoordIndex([0,1])
Coordinate39 = Coordinate()
Coordinate39.setPoint([0,0,0,0,-0.3,0])

IndexedLineSet38.setCoord(Coordinate39)

Shape35.setGeometry(IndexedLineSet38)

HAnimSegment29.addChildren(Shape35)
Shape40 = Shape()
Appearance41 = Appearance()
Material42 = Material()
Material42.setEmissiveColor([1,1,1])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
IndexedLineSet43 = IndexedLineSet()
IndexedLineSet43.setDEF("TCtoCC")
IndexedLineSet43.setCoordIndex([0,1])
Coordinate44 = Coordinate()
Coordinate44.setPoint([0,0,0,0.2,0.3,0])

IndexedLineSet43.setCoord(Coordinate44)

Shape40.setGeometry(IndexedLineSet43)

HAnimSegment29.addChildren(Shape40)

HAnimJoint28.addChildren(HAnimSegment29)
#TCN
HAnimJoint45 = HAnimJoint()
HAnimJoint45.setName("l_talocalcaneonavicular")
HAnimJoint45.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint45.setCenter([0,-0.3,0])
HAnimJoint45.setUlimit([0,0,0])
HAnimJoint45.setLlimit([0,0,0])
HAnimJoint45.setStiffness([0,0,0])
HAnimSegment46 = HAnimSegment()
HAnimSegment46.setName("l_navicular")
HAnimSegment46.setDEF("hanim_l_navicular")
Transform47 = Transform()
Transform47.setTranslation([0,-0.3,0])
Shape48 = Shape()
Shape48.setUSE("HAnimJointShape")

Transform47.addChildren(Shape48)

HAnimSegment46.addChildren(Transform47)
Shape49 = Shape()
Appearance50 = Appearance()
Material51 = Material()
Material51.setEmissiveColor([1,1,1])

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
IndexedLineSet52 = IndexedLineSet()
IndexedLineSet52.setDEF("TCNtoCN1")
IndexedLineSet52.setCoordIndex([0,1])
Coordinate53 = Coordinate()
Coordinate53.setPoint([0,-0.3,0,-0.1,-0.45,0])

IndexedLineSet52.setCoord(Coordinate53)

Shape49.setGeometry(IndexedLineSet52)

HAnimSegment46.addChildren(Shape49)
Shape54 = Shape()
Appearance55 = Appearance()
Material56 = Material()
Material56.setEmissiveColor([1,1,1])

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
IndexedLineSet57 = IndexedLineSet()
IndexedLineSet57.setDEF("TCNtoCN2")
IndexedLineSet57.setCoordIndex([0,1])
Coordinate58 = Coordinate()
Coordinate58.setPoint([0,-0.3,0,0,-0.45,0])

IndexedLineSet57.setCoord(Coordinate58)

Shape54.setGeometry(IndexedLineSet57)

HAnimSegment46.addChildren(Shape54)
Shape59 = Shape()
Appearance60 = Appearance()
Material61 = Material()
Material61.setEmissiveColor([1,1,1])

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
IndexedLineSet62 = IndexedLineSet()
IndexedLineSet62.setDEF("TCNtoCN3")
IndexedLineSet62.setCoordIndex([0,1])
Coordinate63 = Coordinate()
Coordinate63.setPoint([0,-0.3,0,0.1,-0.4,0])

IndexedLineSet62.setCoord(Coordinate63)

Shape59.setGeometry(IndexedLineSet62)

HAnimSegment46.addChildren(Shape59)

HAnimJoint45.addChildren(HAnimSegment46)
#CN1
HAnimJoint64 = HAnimJoint()
HAnimJoint64.setName("l_cuneonavicular_1")
HAnimJoint64.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint64.setCenter([-0.1,-0.45,0])
HAnimJoint64.setUlimit([0,0,0])
HAnimJoint64.setLlimit([0,0,0])
HAnimJoint64.setStiffness([0,0,0])
HAnimSegment65 = HAnimSegment()
HAnimSegment65.setName("l_cuneiform_1")
HAnimSegment65.setDEF("hanim_l_cuneiform_1")
Transform66 = Transform()
Transform66.setTranslation([-0.1,-0.45,0])
Shape67 = Shape()
Shape67.setUSE("HAnimJointShape")

Transform66.addChildren(Shape67)

HAnimSegment65.addChildren(Transform66)
Shape68 = Shape()
Appearance69 = Appearance()
Material70 = Material()
Material70.setEmissiveColor([1,1,1])

Appearance69.setMaterial(Material70)

Shape68.setAppearance(Appearance69)
IndexedLineSet71 = IndexedLineSet()
IndexedLineSet71.setDEF("CN1toTMT1")
IndexedLineSet71.setCoordIndex([0,1])
Coordinate72 = Coordinate()
Coordinate72.setPoint([-0.1,-0.45,0,-0.1,-0.6,0])

IndexedLineSet71.setCoord(Coordinate72)

Shape68.setGeometry(IndexedLineSet71)

HAnimSegment65.addChildren(Shape68)

HAnimJoint64.addChildren(HAnimSegment65)
HAnimJoint73 = HAnimJoint()
HAnimJoint73.setName("l_tarsometatarsal_1")
HAnimJoint73.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint73.setCenter([-0.1,-0.6,0])
HAnimJoint73.setUlimit([0,0,0])
HAnimJoint73.setLlimit([0,0,0])
HAnimJoint73.setStiffness([0,0,0])
HAnimSegment74 = HAnimSegment()
HAnimSegment74.setName("l_metatarsal_1")
HAnimSegment74.setDEF("hanim_l_metatarsal_1")
Transform75 = Transform()
Transform75.setTranslation([-0.1,-0.6,0])
Shape76 = Shape()
Shape76.setUSE("HAnimJointShape")

Transform75.addChildren(Shape76)

HAnimSegment74.addChildren(Transform75)
Shape77 = Shape()
Appearance78 = Appearance()
Material79 = Material()
Material79.setEmissiveColor([1,1,1])

Appearance78.setMaterial(Material79)

Shape77.setAppearance(Appearance78)
IndexedLineSet80 = IndexedLineSet()
IndexedLineSet80.setDEF("TMT1toMTP1")
IndexedLineSet80.setCoordIndex([0,1])
Coordinate81 = Coordinate()
Coordinate81.setPoint([-0.1,-0.6,0,-0.1,-0.9,0])

IndexedLineSet80.setCoord(Coordinate81)

Shape77.setGeometry(IndexedLineSet80)

HAnimSegment74.addChildren(Shape77)

HAnimJoint73.addChildren(HAnimSegment74)
HAnimJoint82 = HAnimJoint()
HAnimJoint82.setName("l_metatarsophalangeal_1")
HAnimJoint82.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint82.setCenter([-0.1,-0.9,0])
HAnimJoint82.setUlimit([0,0,0])
HAnimJoint82.setLlimit([0,0,0])
HAnimJoint82.setStiffness([0,0,0])
HAnimSegment83 = HAnimSegment()
HAnimSegment83.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment83.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform84 = Transform()
Transform84.setTranslation([-0.1,-0.9,0])
Shape85 = Shape()
Shape85.setUSE("HAnimJointShape")

Transform84.addChildren(Shape85)

HAnimSegment83.addChildren(Transform84)
Shape86 = Shape()
Appearance87 = Appearance()
Material88 = Material()
Material88.setEmissiveColor([1,1,1])

Appearance87.setMaterial(Material88)

Shape86.setAppearance(Appearance87)
IndexedLineSet89 = IndexedLineSet()
IndexedLineSet89.setDEF("MTP1toIP1")
IndexedLineSet89.setCoordIndex([0,1])
Coordinate90 = Coordinate()
Coordinate90.setPoint([-0.1,-0.9,0,-0.1,-1.05,0])

IndexedLineSet89.setCoord(Coordinate90)

Shape86.setGeometry(IndexedLineSet89)

HAnimSegment83.addChildren(Shape86)

HAnimJoint82.addChildren(HAnimSegment83)
HAnimJoint91 = HAnimJoint()
HAnimJoint91.setName("l_tarsal_interphalangeal_1")
HAnimJoint91.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint91.setCenter([-0.1,-1.05,0])
HAnimJoint91.setUlimit([0,0,0])
HAnimJoint91.setLlimit([0,0,0])
HAnimJoint91.setStiffness([0,0,0])
HAnimSegment92 = HAnimSegment()
HAnimSegment92.setName("l_tarsal_distal_phalanx_1")
HAnimSegment92.setDEF("hanim_l_tarsal_distal_phalanx_1")
Transform93 = Transform()
Transform93.setTranslation([-0.1,-1.05,0])
Shape94 = Shape()
Shape94.setUSE("HAnimJointShape")

Transform93.addChildren(Shape94)

HAnimSegment92.addChildren(Transform93)
Shape95 = Shape()
Appearance96 = Appearance()
Material97 = Material()
Material97.setEmissiveColor([1,1,1])

Appearance96.setMaterial(Material97)

Shape95.setAppearance(Appearance96)
IndexedLineSet98 = IndexedLineSet()
IndexedLineSet98.setDEF("tiptoe_l_tarsal_distal_interphalangeal_1")
IndexedLineSet98.setCoordIndex([0,1])
Coordinate99 = Coordinate()
Coordinate99.setPoint([-0.1,-1.05,0,-0.1,-1.1,0])

IndexedLineSet98.setCoord(Coordinate99)

Shape95.setGeometry(IndexedLineSet98)

HAnimSegment92.addChildren(Shape95)

HAnimJoint91.addChildren(HAnimSegment92)

HAnimJoint82.addChildren(HAnimJoint91)

HAnimJoint73.addChildren(HAnimJoint82)

HAnimJoint64.addChildren(HAnimJoint73)

HAnimJoint45.addChildren(HAnimJoint64)
#CN2
HAnimJoint100 = HAnimJoint()
HAnimJoint100.setName("l_cuneonavicular_2")
HAnimJoint100.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint100.setCenter([0,-0.45,0])
HAnimJoint100.setUlimit([0,0,0])
HAnimJoint100.setLlimit([0,0,0])
HAnimJoint100.setStiffness([0,0,0])
HAnimSegment101 = HAnimSegment()
HAnimSegment101.setName("l_cuneiform_2")
HAnimSegment101.setDEF("hanim_l_cuneiform_2")
Transform102 = Transform()
Transform102.setTranslation([0,-0.45,0])
Shape103 = Shape()
Shape103.setUSE("HAnimJointShape")

Transform102.addChildren(Shape103)

HAnimSegment101.addChildren(Transform102)
Shape104 = Shape()
Appearance105 = Appearance()
Material106 = Material()
Material106.setEmissiveColor([1,1,1])

Appearance105.setMaterial(Material106)

Shape104.setAppearance(Appearance105)
IndexedLineSet107 = IndexedLineSet()
IndexedLineSet107.setDEF("CN2toTMT2")
IndexedLineSet107.setCoordIndex([0,1])
Coordinate108 = Coordinate()
Coordinate108.setPoint([0,-0.45,0,0.05,-0.6,0])

IndexedLineSet107.setCoord(Coordinate108)

Shape104.setGeometry(IndexedLineSet107)

HAnimSegment101.addChildren(Shape104)

HAnimJoint100.addChildren(HAnimSegment101)
HAnimJoint109 = HAnimJoint()
HAnimJoint109.setName("l_tarsometatarsal_2")
HAnimJoint109.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint109.setCenter([0.05,-0.6,0])
HAnimJoint109.setUlimit([0,0,0])
HAnimJoint109.setLlimit([0,0,0])
HAnimJoint109.setStiffness([0,0,0])
HAnimSegment110 = HAnimSegment()
HAnimSegment110.setName("l_metatarsal_2")
HAnimSegment110.setDEF("hanim_l_metatarsal_2")
Transform111 = Transform()
Transform111.setTranslation([0.05,-0.6,0])
Shape112 = Shape()
Shape112.setUSE("HAnimJointShape")

Transform111.addChildren(Shape112)

HAnimSegment110.addChildren(Transform111)
Shape113 = Shape()
Appearance114 = Appearance()
Material115 = Material()
Material115.setEmissiveColor([1,1,1])

Appearance114.setMaterial(Material115)

Shape113.setAppearance(Appearance114)
IndexedLineSet116 = IndexedLineSet()
IndexedLineSet116.setDEF("TMT2toMTP2")
IndexedLineSet116.setCoordIndex([0,1])
Coordinate117 = Coordinate()
Coordinate117.setPoint([0.05,-0.6,0,0.05,-0.9,0])

IndexedLineSet116.setCoord(Coordinate117)

Shape113.setGeometry(IndexedLineSet116)

HAnimSegment110.addChildren(Shape113)

HAnimJoint109.addChildren(HAnimSegment110)
HAnimJoint118 = HAnimJoint()
HAnimJoint118.setName("l_metatarsophalangeal_2")
HAnimJoint118.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint118.setCenter([0.05,-0.9,0])
HAnimJoint118.setUlimit([0,0,0])
HAnimJoint118.setLlimit([0,0,0])
HAnimJoint118.setStiffness([0,0,0])
HAnimSegment119 = HAnimSegment()
HAnimSegment119.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment119.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform120 = Transform()
Transform120.setTranslation([0.05,-0.9,0])
Shape121 = Shape()
Shape121.setUSE("HAnimJointShape")

Transform120.addChildren(Shape121)

HAnimSegment119.addChildren(Transform120)
Shape122 = Shape()
Appearance123 = Appearance()
Material124 = Material()
Material124.setEmissiveColor([1,1,1])

Appearance123.setMaterial(Material124)

Shape122.setAppearance(Appearance123)
IndexedLineSet125 = IndexedLineSet()
IndexedLineSet125.setDEF("MTP2toPIP2")
IndexedLineSet125.setCoordIndex([0,1])
Coordinate126 = Coordinate()
Coordinate126.setPoint([0.05,-0.9,0,0.05,-1.05,0])

IndexedLineSet125.setCoord(Coordinate126)

Shape122.setGeometry(IndexedLineSet125)

HAnimSegment119.addChildren(Shape122)

HAnimJoint118.addChildren(HAnimSegment119)
HAnimJoint127 = HAnimJoint()
HAnimJoint127.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint127.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint127.setCenter([0.05,-1.05,0])
HAnimJoint127.setUlimit([0,0,0])
HAnimJoint127.setLlimit([0,0,0])
HAnimJoint127.setStiffness([0,0,0])
HAnimSegment128 = HAnimSegment()
HAnimSegment128.setName("l_tarsal_middle_phalanx_2")
HAnimSegment128.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform129 = Transform()
Transform129.setTranslation([0.05,-1.05,0])
Shape130 = Shape()
Shape130.setUSE("HAnimJointShape")

Transform129.addChildren(Shape130)

HAnimSegment128.addChildren(Transform129)
Shape131 = Shape()
Appearance132 = Appearance()
Material133 = Material()
Material133.setEmissiveColor([1,1,1])

Appearance132.setMaterial(Material133)

Shape131.setAppearance(Appearance132)
IndexedLineSet134 = IndexedLineSet()
IndexedLineSet134.setDEF("PIP2toDIP2")
IndexedLineSet134.setCoordIndex([0,1])
Coordinate135 = Coordinate()
Coordinate135.setPoint([0.05,-1.05,0,0.05,-1.12,0])

IndexedLineSet134.setCoord(Coordinate135)

Shape131.setGeometry(IndexedLineSet134)

HAnimSegment128.addChildren(Shape131)

HAnimJoint127.addChildren(HAnimSegment128)
HAnimJoint136 = HAnimJoint()
HAnimJoint136.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint136.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint136.setCenter([0.05,-1.12,0])
HAnimJoint136.setUlimit([0,0,0])
HAnimJoint136.setLlimit([0,0,0])
HAnimJoint136.setStiffness([0,0,0])
HAnimSegment137 = HAnimSegment()
HAnimSegment137.setName("l_tarsal_distal_phalanx_2")
HAnimSegment137.setDEF("hanim_l_tarsal_distal_phalanx_2")
Transform138 = Transform()
Transform138.setTranslation([0.05,-1.12,0])
Shape139 = Shape()
Shape139.setUSE("HAnimJointShape")

Transform138.addChildren(Shape139)

HAnimSegment137.addChildren(Transform138)
Shape140 = Shape()
Appearance141 = Appearance()
Material142 = Material()
Material142.setEmissiveColor([1,1,1])

Appearance141.setMaterial(Material142)

Shape140.setAppearance(Appearance141)
IndexedLineSet143 = IndexedLineSet()
IndexedLineSet143.setDEF("tiptoe_l_tarsal_distal_phalanx_2")
IndexedLineSet143.setCoordIndex([0,1])
Coordinate144 = Coordinate()
Coordinate144.setPoint([0.05,-1.12,0,0.05,-1.16,0])

IndexedLineSet143.setCoord(Coordinate144)

Shape140.setGeometry(IndexedLineSet143)

HAnimSegment137.addChildren(Shape140)

HAnimJoint136.addChildren(HAnimSegment137)

HAnimJoint127.addChildren(HAnimJoint136)

HAnimJoint118.addChildren(HAnimJoint127)

HAnimJoint109.addChildren(HAnimJoint118)

HAnimJoint100.addChildren(HAnimJoint109)

HAnimJoint45.addChildren(HAnimJoint100)
#CN3
HAnimJoint145 = HAnimJoint()
HAnimJoint145.setName("l_cuneonavicular_3")
HAnimJoint145.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint145.setCenter([0.1,-0.4,0])
HAnimJoint145.setUlimit([0,0,0])
HAnimJoint145.setLlimit([0,0,0])
HAnimJoint145.setStiffness([0,0,0])
HAnimSegment146 = HAnimSegment()
HAnimSegment146.setName("l_cuneiform_3")
HAnimSegment146.setDEF("hanim_l_cuneiform_3")
Transform147 = Transform()
Transform147.setTranslation([0.1,-0.4,0])
Shape148 = Shape()
Shape148.setUSE("HAnimJointShape")

Transform147.addChildren(Shape148)

HAnimSegment146.addChildren(Transform147)
Shape149 = Shape()
Appearance150 = Appearance()
Material151 = Material()
Material151.setEmissiveColor([1,1,1])

Appearance150.setMaterial(Material151)

Shape149.setAppearance(Appearance150)
IndexedLineSet152 = IndexedLineSet()
IndexedLineSet152.setDEF("CN3toTMT3")
IndexedLineSet152.setCoordIndex([0,1])
Coordinate153 = Coordinate()
Coordinate153.setPoint([0.1,-0.4,0,0.15,-0.6,0])

IndexedLineSet152.setCoord(Coordinate153)

Shape149.setGeometry(IndexedLineSet152)

HAnimSegment146.addChildren(Shape149)

HAnimJoint145.addChildren(HAnimSegment146)
HAnimJoint154 = HAnimJoint()
HAnimJoint154.setName("l_tarsometatarsal_3")
HAnimJoint154.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint154.setCenter([0.15,-0.6,0])
HAnimJoint154.setUlimit([0,0,0])
HAnimJoint154.setLlimit([0,0,0])
HAnimJoint154.setStiffness([0,0,0])
HAnimSegment155 = HAnimSegment()
HAnimSegment155.setName("l_metatarsal_3")
HAnimSegment155.setDEF("hanim_l_metatarsal_3")
Transform156 = Transform()
Transform156.setTranslation([0.15,-0.6,0])
Shape157 = Shape()
Shape157.setUSE("HAnimJointShape")

Transform156.addChildren(Shape157)

HAnimSegment155.addChildren(Transform156)
Shape158 = Shape()
Appearance159 = Appearance()
Material160 = Material()
Material160.setEmissiveColor([1,1,1])

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
IndexedLineSet161 = IndexedLineSet()
IndexedLineSet161.setDEF("TMT3toMTP3")
IndexedLineSet161.setCoordIndex([0,1])
Coordinate162 = Coordinate()
Coordinate162.setPoint([0.15,-0.6,0,0.15,-0.9,0])

IndexedLineSet161.setCoord(Coordinate162)

Shape158.setGeometry(IndexedLineSet161)

HAnimSegment155.addChildren(Shape158)

HAnimJoint154.addChildren(HAnimSegment155)
HAnimJoint163 = HAnimJoint()
HAnimJoint163.setName("l_metatarsophalangeal_3")
HAnimJoint163.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint163.setCenter([0.15,-0.9,0])
HAnimJoint163.setUlimit([0,0,0])
HAnimJoint163.setLlimit([0,0,0])
HAnimJoint163.setStiffness([0,0,0])
HAnimSegment164 = HAnimSegment()
HAnimSegment164.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment164.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform165 = Transform()
Transform165.setTranslation([0.15,-0.9,0])
Shape166 = Shape()
Shape166.setUSE("HAnimJointShape")

Transform165.addChildren(Shape166)

HAnimSegment164.addChildren(Transform165)
Shape167 = Shape()
Appearance168 = Appearance()
Material169 = Material()
Material169.setEmissiveColor([1,1,1])

Appearance168.setMaterial(Material169)

Shape167.setAppearance(Appearance168)
IndexedLineSet170 = IndexedLineSet()
IndexedLineSet170.setDEF("MTP3toPIP3")
IndexedLineSet170.setCoordIndex([0,1])
Coordinate171 = Coordinate()
Coordinate171.setPoint([0.15,-0.9,0,0.15,-1.05,0])

IndexedLineSet170.setCoord(Coordinate171)

Shape167.setGeometry(IndexedLineSet170)

HAnimSegment164.addChildren(Shape167)

HAnimJoint163.addChildren(HAnimSegment164)
HAnimJoint172 = HAnimJoint()
HAnimJoint172.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint172.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint172.setCenter([0.15,-1.05,0])
HAnimJoint172.setUlimit([0,0,0])
HAnimJoint172.setLlimit([0,0,0])
HAnimJoint172.setStiffness([0,0,0])
HAnimSegment173 = HAnimSegment()
HAnimSegment173.setName("l_tarsal_middle_phalanx_3")
HAnimSegment173.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform174 = Transform()
Transform174.setTranslation([0.15,-1.05,0])
Shape175 = Shape()
Shape175.setUSE("HAnimJointShape")

Transform174.addChildren(Shape175)

HAnimSegment173.addChildren(Transform174)
Shape176 = Shape()
Appearance177 = Appearance()
Material178 = Material()
Material178.setEmissiveColor([1,1,1])

Appearance177.setMaterial(Material178)

Shape176.setAppearance(Appearance177)
IndexedLineSet179 = IndexedLineSet()
IndexedLineSet179.setDEF("PIP3toDIP3")
IndexedLineSet179.setCoordIndex([0,1])
Coordinate180 = Coordinate()
Coordinate180.setPoint([0.15,-1.05,0,0.15,-1.13,0])

IndexedLineSet179.setCoord(Coordinate180)

Shape176.setGeometry(IndexedLineSet179)

HAnimSegment173.addChildren(Shape176)

HAnimJoint172.addChildren(HAnimSegment173)
HAnimJoint181 = HAnimJoint()
HAnimJoint181.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint181.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint181.setCenter([0.15,-1.13,0])
HAnimJoint181.setUlimit([0,0,0])
HAnimJoint181.setLlimit([0,0,0])
HAnimJoint181.setStiffness([0,0,0])
HAnimSegment182 = HAnimSegment()
HAnimSegment182.setName("l_tarsal_distal_phalanx_3")
HAnimSegment182.setDEF("hanim_l_tarsal_distal_phalanx_3")
Transform183 = Transform()
Transform183.setTranslation([0.15,-1.13,0])
Shape184 = Shape()
Shape184.setUSE("HAnimJointShape")

Transform183.addChildren(Shape184)

HAnimSegment182.addChildren(Transform183)
Shape185 = Shape()
Appearance186 = Appearance()
Material187 = Material()
Material187.setEmissiveColor([1,1,1])

Appearance186.setMaterial(Material187)

Shape185.setAppearance(Appearance186)
IndexedLineSet188 = IndexedLineSet()
IndexedLineSet188.setDEF("tiptoe_l_tarsal_distal_interphalangeal_3")
IndexedLineSet188.setCoordIndex([0,1])
Coordinate189 = Coordinate()
Coordinate189.setPoint([0.15,-1.13,0,0.15,-1.16,0])

IndexedLineSet188.setCoord(Coordinate189)

Shape185.setGeometry(IndexedLineSet188)

HAnimSegment182.addChildren(Shape185)

HAnimJoint181.addChildren(HAnimSegment182)

HAnimJoint172.addChildren(HAnimJoint181)

HAnimJoint163.addChildren(HAnimJoint172)

HAnimJoint154.addChildren(HAnimJoint163)

HAnimJoint145.addChildren(HAnimJoint154)

HAnimJoint45.addChildren(HAnimJoint145)

HAnimJoint28.addChildren(HAnimJoint45)
#CC
HAnimJoint190 = HAnimJoint()
HAnimJoint190.setName("l_calcaneocuboid")
HAnimJoint190.setDEF("hanim_l_calcaneocuboid")
HAnimJoint190.setCenter([0.2,0.3,0])
HAnimJoint190.setUlimit([0,0,0])
HAnimJoint190.setLlimit([0,0,0])
HAnimJoint190.setStiffness([0,0,0])
HAnimSegment191 = HAnimSegment()
HAnimSegment191.setName("l_calcaneus")
HAnimSegment191.setDEF("hanim_l_calcaneus")
Transform192 = Transform()
Transform192.setTranslation([0.2,0.3,0])
Shape193 = Shape()
Shape193.setUSE("HAnimJointShape")

Transform192.addChildren(Shape193)

HAnimSegment191.addChildren(Transform192)
Shape194 = Shape()
Appearance195 = Appearance()
Material196 = Material()
Material196.setEmissiveColor([1,1,1])

Appearance195.setMaterial(Material196)

Shape194.setAppearance(Appearance195)
IndexedLineSet197 = IndexedLineSet()
IndexedLineSet197.setDEF("CCtoTT")
IndexedLineSet197.setCoordIndex([0,1])
Coordinate198 = Coordinate()
Coordinate198.setPoint([0.2,0.3,0,0.21,-0.3,0])

IndexedLineSet197.setCoord(Coordinate198)

Shape194.setGeometry(IndexedLineSet197)

HAnimSegment191.addChildren(Shape194)

HAnimJoint190.addChildren(HAnimSegment191)
#TT
HAnimJoint199 = HAnimJoint()
HAnimJoint199.setName("l_transversetarsal")
HAnimJoint199.setDEF("hanim_l_transversetarsal")
HAnimJoint199.setCenter([0.21,-0.3,0])
HAnimJoint199.setUlimit([0,0,0])
HAnimJoint199.setLlimit([0,0,0])
HAnimJoint199.setStiffness([0,0,0])
HAnimSegment200 = HAnimSegment()
HAnimSegment200.setName("l_cuboid")
HAnimSegment200.setDEF("hanim_l_cuboid")
Transform201 = Transform()
Transform201.setTranslation([0.21,-0.3,0])
Shape202 = Shape()
Shape202.setUSE("HAnimJointShape")

Transform201.addChildren(Shape202)

HAnimSegment200.addChildren(Transform201)
Shape203 = Shape()
Appearance204 = Appearance()
Material205 = Material()
Material205.setEmissiveColor([1,1,1])

Appearance204.setMaterial(Material205)

Shape203.setAppearance(Appearance204)
IndexedLineSet206 = IndexedLineSet()
IndexedLineSet206.setDEF("TTtoTMT4")
IndexedLineSet206.setCoordIndex([0,1])
Coordinate207 = Coordinate()
Coordinate207.setPoint([0.21,-0.3,0,0.25,-0.58,0])

IndexedLineSet206.setCoord(Coordinate207)

Shape203.setGeometry(IndexedLineSet206)

HAnimSegment200.addChildren(Shape203)
Shape208 = Shape()
Appearance209 = Appearance()
Material210 = Material()
Material210.setEmissiveColor([1,1,1])

Appearance209.setMaterial(Material210)

Shape208.setAppearance(Appearance209)
IndexedLineSet211 = IndexedLineSet()
IndexedLineSet211.setDEF("TTtoTMT5")
IndexedLineSet211.setCoordIndex([0,1])
Coordinate212 = Coordinate()
Coordinate212.setPoint([0.21,-0.3,0,0.33,-0.52,0])

IndexedLineSet211.setCoord(Coordinate212)

Shape208.setGeometry(IndexedLineSet211)

HAnimSegment200.addChildren(Shape208)

HAnimJoint199.addChildren(HAnimSegment200)
#TMT4
HAnimJoint213 = HAnimJoint()
HAnimJoint213.setName("l_tarsometatarsal_4")
HAnimJoint213.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint213.setCenter([0.25,-0.58,0])
HAnimJoint213.setUlimit([0,0,0])
HAnimJoint213.setLlimit([0,0,0])
HAnimJoint213.setStiffness([0,0,0])
HAnimSegment214 = HAnimSegment()
HAnimSegment214.setName("l_metatarsal_4")
HAnimSegment214.setDEF("hanim_l_metatarsal_4")
Transform215 = Transform()
Transform215.setTranslation([0.25,-0.58,0])
Shape216 = Shape()
Shape216.setUSE("HAnimJointShape")

Transform215.addChildren(Shape216)

HAnimSegment214.addChildren(Transform215)
Shape217 = Shape()
Appearance218 = Appearance()
Material219 = Material()
Material219.setEmissiveColor([1,1,1])

Appearance218.setMaterial(Material219)

Shape217.setAppearance(Appearance218)
IndexedLineSet220 = IndexedLineSet()
IndexedLineSet220.setDEF("TMT4toMTP4")
IndexedLineSet220.setCoordIndex([0,1])
Coordinate221 = Coordinate()
Coordinate221.setPoint([0.25,-0.58,0,0.25,-0.87,0])

IndexedLineSet220.setCoord(Coordinate221)

Shape217.setGeometry(IndexedLineSet220)

HAnimSegment214.addChildren(Shape217)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint222 = HAnimJoint()
HAnimJoint222.setName("l_metatarsophalangeal_4")
HAnimJoint222.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint222.setCenter([0.25,-0.87,0])
HAnimJoint222.setUlimit([0,0,0])
HAnimJoint222.setLlimit([0,0,0])
HAnimJoint222.setStiffness([0,0,0])
HAnimSegment223 = HAnimSegment()
HAnimSegment223.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment223.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform224 = Transform()
Transform224.setTranslation([0.25,-0.87,0])
Shape225 = Shape()
Shape225.setUSE("HAnimJointShape")

Transform224.addChildren(Shape225)

HAnimSegment223.addChildren(Transform224)
Shape226 = Shape()
Appearance227 = Appearance()
Material228 = Material()
Material228.setEmissiveColor([1,1,1])

Appearance227.setMaterial(Material228)

Shape226.setAppearance(Appearance227)
IndexedLineSet229 = IndexedLineSet()
IndexedLineSet229.setDEF("MTP4toPIP4")
IndexedLineSet229.setCoordIndex([0,1])
Coordinate230 = Coordinate()
Coordinate230.setPoint([0.25,-0.87,0,0.25,-1,0])

IndexedLineSet229.setCoord(Coordinate230)

Shape226.setGeometry(IndexedLineSet229)

HAnimSegment223.addChildren(Shape226)

HAnimJoint222.addChildren(HAnimSegment223)
HAnimJoint231 = HAnimJoint()
HAnimJoint231.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint231.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint231.setCenter([0.25,-1,0])
HAnimJoint231.setUlimit([0,0,0])
HAnimJoint231.setLlimit([0,0,0])
HAnimJoint231.setStiffness([0,0,0])
HAnimSegment232 = HAnimSegment()
HAnimSegment232.setName("l_tarsal_middle_phalanx_4")
HAnimSegment232.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform233 = Transform()
Transform233.setTranslation([0.25,-1,0])
Shape234 = Shape()
Shape234.setUSE("HAnimJointShape")

Transform233.addChildren(Shape234)

HAnimSegment232.addChildren(Transform233)
Shape235 = Shape()
Appearance236 = Appearance()
Material237 = Material()
Material237.setEmissiveColor([1,1,1])

Appearance236.setMaterial(Material237)

Shape235.setAppearance(Appearance236)
IndexedLineSet238 = IndexedLineSet()
IndexedLineSet238.setDEF("PIP4toDIP4")
IndexedLineSet238.setCoordIndex([0,1])
Coordinate239 = Coordinate()
Coordinate239.setPoint([0.25,-1,0,0.25,-1.1,0])

IndexedLineSet238.setCoord(Coordinate239)

Shape235.setGeometry(IndexedLineSet238)

HAnimSegment232.addChildren(Shape235)

HAnimJoint231.addChildren(HAnimSegment232)
HAnimJoint240 = HAnimJoint()
HAnimJoint240.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint240.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint240.setCenter([0.25,-1.1,0])
HAnimJoint240.setUlimit([0,0,0])
HAnimJoint240.setLlimit([0,0,0])
HAnimJoint240.setStiffness([0,0,0])
HAnimSegment241 = HAnimSegment()
HAnimSegment241.setName("l_tarsal_distal_phalanx_4")
HAnimSegment241.setDEF("hanim_l_tarsal_distal_phalanx_4")
Transform242 = Transform()
Transform242.setTranslation([0.25,-1.1,0])
Shape243 = Shape()
Shape243.setUSE("HAnimJointShape")

Transform242.addChildren(Shape243)

HAnimSegment241.addChildren(Transform242)
Shape244 = Shape()
Appearance245 = Appearance()
Material246 = Material()
Material246.setEmissiveColor([1,1,1])

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
IndexedLineSet247 = IndexedLineSet()
IndexedLineSet247.setDEF("tiptoe_l_tarsal_distal_interphalangeal_4")
IndexedLineSet247.setCoordIndex([0,1])
Coordinate248 = Coordinate()
Coordinate248.setPoint([0.25,-1.1,0,0.25,-1.15,0])

IndexedLineSet247.setCoord(Coordinate248)

Shape244.setGeometry(IndexedLineSet247)

HAnimSegment241.addChildren(Shape244)

HAnimJoint240.addChildren(HAnimSegment241)

HAnimJoint231.addChildren(HAnimJoint240)

HAnimJoint222.addChildren(HAnimJoint231)

HAnimJoint213.addChildren(HAnimJoint222)

HAnimJoint199.addChildren(HAnimJoint213)
#TMT5
HAnimJoint249 = HAnimJoint()
HAnimJoint249.setName("l_tarsometatarsal_5")
HAnimJoint249.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint249.setCenter([0.33,-0.52,0])
HAnimJoint249.setUlimit([0,0,0])
HAnimJoint249.setLlimit([0,0,0])
HAnimJoint249.setStiffness([0,0,0])
HAnimSegment250 = HAnimSegment()
HAnimSegment250.setName("l_metatarsal_5")
HAnimSegment250.setDEF("hanim_l_metatarsal_5")
Transform251 = Transform()
Transform251.setTranslation([0.33,-0.52,0])
Shape252 = Shape()
Shape252.setUSE("HAnimJointShape")

Transform251.addChildren(Shape252)

HAnimSegment250.addChildren(Transform251)
Shape253 = Shape()
Appearance254 = Appearance()
Material255 = Material()
Material255.setEmissiveColor([1,1,1])

Appearance254.setMaterial(Material255)

Shape253.setAppearance(Appearance254)
IndexedLineSet256 = IndexedLineSet()
IndexedLineSet256.setDEF("TMT5toMTP5")
IndexedLineSet256.setCoordIndex([0,1])
Coordinate257 = Coordinate()
Coordinate257.setPoint([0.33,-0.52,0,0.34,-0.8,0])

IndexedLineSet256.setCoord(Coordinate257)

Shape253.setGeometry(IndexedLineSet256)

HAnimSegment250.addChildren(Shape253)

HAnimJoint249.addChildren(HAnimSegment250)
HAnimJoint258 = HAnimJoint()
HAnimJoint258.setName("l_metatarsophalangeal_5")
HAnimJoint258.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint258.setCenter([0.34,-0.8,0])
HAnimJoint258.setUlimit([0,0,0])
HAnimJoint258.setLlimit([0,0,0])
HAnimJoint258.setStiffness([0,0,0])
HAnimSegment259 = HAnimSegment()
HAnimSegment259.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment259.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform260 = Transform()
Transform260.setTranslation([0.34,-0.8,0])
Shape261 = Shape()
Shape261.setUSE("HAnimJointShape")

Transform260.addChildren(Shape261)

HAnimSegment259.addChildren(Transform260)
Shape262 = Shape()
Appearance263 = Appearance()
Material264 = Material()
Material264.setEmissiveColor([1,1,1])

Appearance263.setMaterial(Material264)

Shape262.setAppearance(Appearance263)
IndexedLineSet265 = IndexedLineSet()
IndexedLineSet265.setDEF("MTP5toPIP5")
IndexedLineSet265.setCoordIndex([0,1])
Coordinate266 = Coordinate()
Coordinate266.setPoint([0.34,-0.8,0,0.34,-0.95,0])

IndexedLineSet265.setCoord(Coordinate266)

Shape262.setGeometry(IndexedLineSet265)

HAnimSegment259.addChildren(Shape262)

HAnimJoint258.addChildren(HAnimSegment259)
HAnimJoint267 = HAnimJoint()
HAnimJoint267.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint267.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint267.setCenter([0.34,-0.95,0])
HAnimJoint267.setUlimit([0,0,0])
HAnimJoint267.setLlimit([0,0,0])
HAnimJoint267.setStiffness([0,0,0])
HAnimSegment268 = HAnimSegment()
HAnimSegment268.setName("l_tarsal_middle_phalanx_5")
HAnimSegment268.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform269 = Transform()
Transform269.setTranslation([0.34,-0.95,0])
Shape270 = Shape()
Shape270.setUSE("HAnimJointShape")

Transform269.addChildren(Shape270)

HAnimSegment268.addChildren(Transform269)
Shape271 = Shape()
Appearance272 = Appearance()
Material273 = Material()
Material273.setEmissiveColor([1,1,1])

Appearance272.setMaterial(Material273)

Shape271.setAppearance(Appearance272)
IndexedLineSet274 = IndexedLineSet()
IndexedLineSet274.setDEF("PIP5toDIP5")
IndexedLineSet274.setCoordIndex([0,1])
Coordinate275 = Coordinate()
Coordinate275.setPoint([0.34,-0.95,0,0.34,-1.05,0])

IndexedLineSet274.setCoord(Coordinate275)

Shape271.setGeometry(IndexedLineSet274)

HAnimSegment268.addChildren(Shape271)

HAnimJoint267.addChildren(HAnimSegment268)
HAnimJoint276 = HAnimJoint()
HAnimJoint276.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint276.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint276.setCenter([0.34,-1.05,0])
HAnimJoint276.setUlimit([0,0,0])
HAnimJoint276.setLlimit([0,0,0])
HAnimJoint276.setStiffness([0,0,0])
HAnimSegment277 = HAnimSegment()
HAnimSegment277.setName("l_tarsal_distal_phalanx_5")
HAnimSegment277.setDEF("hanim_l_tarsal_distal_phalanx_5")
Transform278 = Transform()
Transform278.setTranslation([0.34,-1.05,0])
Shape279 = Shape()
Shape279.setUSE("HAnimJointShape")

Transform278.addChildren(Shape279)

HAnimSegment277.addChildren(Transform278)
Shape280 = Shape()
Appearance281 = Appearance()
Material282 = Material()
Material282.setEmissiveColor([1,1,1])

Appearance281.setMaterial(Material282)

Shape280.setAppearance(Appearance281)
IndexedLineSet283 = IndexedLineSet()
IndexedLineSet283.setDEF("tiptoe_l_tarsal_distal_interphalangeal_5")
IndexedLineSet283.setCoordIndex([0,1])
Coordinate284 = Coordinate()
Coordinate284.setPoint([0.34,-1.05,0,0.34,-1.08,0])

IndexedLineSet283.setCoord(Coordinate284)

Shape280.setGeometry(IndexedLineSet283)

HAnimSegment277.addChildren(Shape280)

HAnimJoint276.addChildren(HAnimSegment277)

HAnimJoint267.addChildren(HAnimJoint276)

HAnimJoint258.addChildren(HAnimJoint267)

HAnimJoint249.addChildren(HAnimJoint258)

HAnimJoint199.addChildren(HAnimJoint249)

HAnimJoint190.addChildren(HAnimJoint199)

HAnimJoint28.addChildren(HAnimJoint190)

HAnimJoint27.addChildren(HAnimJoint28)

HAnimHumanoid24.setSkeleton(HAnimJoint27)
HAnimJoint285 = HAnimJoint()
HAnimJoint285.setUSE("hanim_humanoid_root")

HAnimHumanoid24.addJoints(HAnimJoint285)
HAnimJoint286 = HAnimJoint()
HAnimJoint286.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid24.addJoints(HAnimJoint286)
HAnimJoint287 = HAnimJoint()
HAnimJoint287.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid24.addJoints(HAnimJoint287)
HAnimJoint288 = HAnimJoint()
HAnimJoint288.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid24.addJoints(HAnimJoint288)
HAnimJoint289 = HAnimJoint()
HAnimJoint289.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid24.addJoints(HAnimJoint289)
HAnimJoint290 = HAnimJoint()
HAnimJoint290.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid24.addJoints(HAnimJoint290)
HAnimJoint291 = HAnimJoint()
HAnimJoint291.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint291)
HAnimJoint292 = HAnimJoint()
HAnimJoint292.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint292)
HAnimJoint293 = HAnimJoint()
HAnimJoint293.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint293)
HAnimJoint294 = HAnimJoint()
HAnimJoint294.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint294)
HAnimJoint295 = HAnimJoint()
HAnimJoint295.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid24.addJoints(HAnimJoint295)
HAnimJoint296 = HAnimJoint()
HAnimJoint296.setUSE("hanim_l_talocrural")

HAnimHumanoid24.addJoints(HAnimJoint296)
HAnimJoint297 = HAnimJoint()
HAnimJoint297.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint297)
HAnimJoint298 = HAnimJoint()
HAnimJoint298.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint298)
HAnimJoint299 = HAnimJoint()
HAnimJoint299.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint299)
HAnimJoint300 = HAnimJoint()
HAnimJoint300.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint300)
HAnimJoint301 = HAnimJoint()
HAnimJoint301.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid24.addJoints(HAnimJoint301)
HAnimJoint302 = HAnimJoint()
HAnimJoint302.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint302)
HAnimJoint303 = HAnimJoint()
HAnimJoint303.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint303)
HAnimJoint304 = HAnimJoint()
HAnimJoint304.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint304)
HAnimJoint305 = HAnimJoint()
HAnimJoint305.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint305)
HAnimJoint306 = HAnimJoint()
HAnimJoint306.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid24.addJoints(HAnimJoint306)
HAnimJoint307 = HAnimJoint()
HAnimJoint307.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid24.addJoints(HAnimJoint307)
HAnimJoint308 = HAnimJoint()
HAnimJoint308.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid24.addJoints(HAnimJoint308)
HAnimJoint309 = HAnimJoint()
HAnimJoint309.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid24.addJoints(HAnimJoint309)
HAnimJoint310 = HAnimJoint()
HAnimJoint310.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid24.addJoints(HAnimJoint310)
HAnimJoint311 = HAnimJoint()
HAnimJoint311.setUSE("hanim_l_transversetarsal")

HAnimHumanoid24.addJoints(HAnimJoint311)
HAnimSegment312 = HAnimSegment()
HAnimSegment312.setUSE("hanim_l_calcaneus")

HAnimHumanoid24.addSegments(HAnimSegment312)
HAnimSegment313 = HAnimSegment()
HAnimSegment313.setUSE("hanim_l_cuboid")

HAnimHumanoid24.addSegments(HAnimSegment313)
HAnimSegment314 = HAnimSegment()
HAnimSegment314.setUSE("hanim_l_cuneiform_1")

HAnimHumanoid24.addSegments(HAnimSegment314)
HAnimSegment315 = HAnimSegment()
HAnimSegment315.setUSE("hanim_l_cuneiform_2")

HAnimHumanoid24.addSegments(HAnimSegment315)
HAnimSegment316 = HAnimSegment()
HAnimSegment316.setUSE("hanim_l_cuneiform_3")

HAnimHumanoid24.addSegments(HAnimSegment316)
HAnimSegment317 = HAnimSegment()
HAnimSegment317.setUSE("hanim_l_metatarsal_1")

HAnimHumanoid24.addSegments(HAnimSegment317)
HAnimSegment318 = HAnimSegment()
HAnimSegment318.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid24.addSegments(HAnimSegment318)
HAnimSegment319 = HAnimSegment()
HAnimSegment319.setUSE("hanim_l_metatarsal_3")

HAnimHumanoid24.addSegments(HAnimSegment319)
HAnimSegment320 = HAnimSegment()
HAnimSegment320.setUSE("hanim_l_metatarsal_4")

HAnimHumanoid24.addSegments(HAnimSegment320)
HAnimSegment321 = HAnimSegment()
HAnimSegment321.setUSE("hanim_l_metatarsal_5")

HAnimHumanoid24.addSegments(HAnimSegment321)
HAnimSegment322 = HAnimSegment()
HAnimSegment322.setUSE("hanim_l_navicular")

HAnimHumanoid24.addSegments(HAnimSegment322)
HAnimSegment323 = HAnimSegment()
HAnimSegment323.setUSE("hanim_l_talus")

HAnimHumanoid24.addSegments(HAnimSegment323)
HAnimSegment324 = HAnimSegment()
HAnimSegment324.setUSE("hanim_l_tarsal_distal_phalanx_1")

HAnimHumanoid24.addSegments(HAnimSegment324)
HAnimSegment325 = HAnimSegment()
HAnimSegment325.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment325)
HAnimSegment326 = HAnimSegment()
HAnimSegment326.setUSE("hanim_l_tarsal_distal_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment326)
HAnimSegment327 = HAnimSegment()
HAnimSegment327.setUSE("hanim_l_tarsal_distal_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment327)
HAnimSegment328 = HAnimSegment()
HAnimSegment328.setUSE("hanim_l_tarsal_distal_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment328)
HAnimSegment329 = HAnimSegment()
HAnimSegment329.setUSE("hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment329)
HAnimSegment330 = HAnimSegment()
HAnimSegment330.setUSE("hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment330)
HAnimSegment331 = HAnimSegment()
HAnimSegment331.setUSE("hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment331)
HAnimSegment332 = HAnimSegment()
HAnimSegment332.setUSE("hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment332)
HAnimSegment333 = HAnimSegment()
HAnimSegment333.setUSE("hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid24.addSegments(HAnimSegment333)
HAnimSegment334 = HAnimSegment()
HAnimSegment334.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment334)
HAnimSegment335 = HAnimSegment()
HAnimSegment335.setUSE("hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment335)
HAnimSegment336 = HAnimSegment()
HAnimSegment336.setUSE("hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment336)
HAnimSegment337 = HAnimSegment()
HAnimSegment337.setUSE("hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment337)

Scene22.addChildren(HAnimHumanoid24)

X3D0.setScene(Scene22)
X3D0.toFileX3D("../data/HAnimModelFootLeft_RoundTrip.x3d")

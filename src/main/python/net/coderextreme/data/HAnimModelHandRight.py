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
meta3.setContent("HAnimModelHandRight.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("Right hand using high-fidelity definitions for HAnim version 2.0")

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
meta7.setContent("14 March 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("TODO")
meta8.setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("Image")
meta9.setContent("HAnimModelHandRightSegmentVisualizationError.png")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("error")
meta10.setContent("not yet to scale, also relatively flat")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("warning")
meta11.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("info")
meta12.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("reference")
meta17.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("subject")
meta19.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("TODO")
meta20.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("identifier")
meta21.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("generator")
meta22.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("license")
meta23.setContent("../license.html")

head1.addMeta(meta23)

X3D0.setHead(head1)
Scene24 = Scene()
WorldInfo25 = WorldInfo()
WorldInfo25.setTitle("HAnimModelHandRight.x3d")

Scene24.addChildren(WorldInfo25)
HAnimHumanoid26 = HAnimHumanoid()
HAnimHumanoid26.setName("Hand_Right")
HAnimHumanoid26.setDEF("hanim_Hand_Right")
HAnimHumanoid26.setLoa(4)
HAnimHumanoid26.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet27 = MetadataSet()
MetadataSet27.setName("HAnimHumanoid.info")
MetadataSet27.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString28 = MetadataString()
MetadataString28.setName("authorName")
MetadataString28.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet27.setValue(MetadataString28)

HAnimHumanoid26.setValue(MetadataSet27)
HAnimJoint29 = HAnimJoint()
HAnimJoint29.setName("humanoid_root")
HAnimJoint29.setDEF("hanim_humanoid_root")
HAnimJoint29.setUlimit([0,0,0])
HAnimJoint29.setLlimit([0,0,0])
HAnimJoint29.setStiffness([0,0,0])
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint30 = HAnimJoint()
HAnimJoint30.setName("r_radiocarpal")
HAnimJoint30.setDEF("hanim_r_radiocarpal")
HAnimJoint30.setDescription("connection joint of hand to leg above")
HAnimJoint30.setUlimit([0,0,0])
HAnimJoint30.setLlimit([0,0,0])
HAnimJoint30.setStiffness([0,0,0])
HAnimSegment31 = HAnimSegment()
HAnimSegment31.setName("r_carpal")
HAnimSegment31.setDEF("hanim_r_carpal")
Transform32 = Transform()
Shape33 = Shape()
Shape33.setDEF("HAnimJointShape")
Sphere34 = Sphere()
Sphere34.setRadius(0.025)

Shape33.setGeometry(Sphere34)
Appearance35 = Appearance()
Appearance35.setDEF("HAnimJointAppearanceBlue")
Material36 = Material()
Material36.setDiffuseColor([0,0,1])

Appearance35.setMaterial(Material36)

Shape33.setAppearance(Appearance35)

Transform32.addChildren(Shape33)

HAnimSegment31.addChildren(Transform32)
Shape37 = Shape()
Appearance38 = Appearance()
Material39 = Material()
Material39.setEmissiveColor([1,1,1])

Appearance38.setMaterial(Material39)

Shape37.setAppearance(Appearance38)
IndexedLineSet40 = IndexedLineSet()
IndexedLineSet40.setDEF("RCToMC12")
IndexedLineSet40.setCoordIndex([0,1])
Coordinate41 = Coordinate()
Coordinate41.setPoint([0,0,0,-0.1,0.1,0])

IndexedLineSet40.setCoord(Coordinate41)

Shape37.setGeometry(IndexedLineSet40)

HAnimSegment31.addChildren(Shape37)
Shape42 = Shape()
Appearance43 = Appearance()
Material44 = Material()
Material44.setEmissiveColor([1,1,1])

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
IndexedLineSet45 = IndexedLineSet()
IndexedLineSet45.setDEF("RCToMC3")
IndexedLineSet45.setCoordIndex([0,1])
Coordinate46 = Coordinate()
Coordinate46.setPoint([0,0,0,0,0.07,0])

IndexedLineSet45.setCoord(Coordinate46)

Shape42.setGeometry(IndexedLineSet45)

HAnimSegment31.addChildren(Shape42)
Shape47 = Shape()
Appearance48 = Appearance()
Material49 = Material()
Material49.setEmissiveColor([1,1,1])

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
IndexedLineSet50 = IndexedLineSet()
IndexedLineSet50.setDEF("RCToMC45")
IndexedLineSet50.setCoordIndex([0,1])
Coordinate51 = Coordinate()
Coordinate51.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet50.setCoord(Coordinate51)

Shape47.setGeometry(IndexedLineSet50)

HAnimSegment31.addChildren(Shape47)

HAnimJoint30.addChildren(HAnimSegment31)
#MC1
HAnimJoint52 = HAnimJoint()
HAnimJoint52.setName("r_midcarpal_1")
HAnimJoint52.setDEF("hanim_r_midcarpal_1")
HAnimJoint52.setCenter([-0.14,0.09,0])
HAnimJoint52.setUlimit([0,0,0])
HAnimJoint52.setLlimit([0,0,0])
HAnimJoint52.setStiffness([0,0,0])
HAnimSegment53 = HAnimSegment()
HAnimSegment53.setName("r_trapezium")
HAnimSegment53.setDEF("hanim_r_trapezium")
Transform54 = Transform()
Transform54.setTranslation([-0.14,0.09,0])
Shape55 = Shape()
Shape55.setDEF("HAnimNewJointShape")
Sphere56 = Sphere()
Sphere56.setRadius(0.025)

Shape55.setGeometry(Sphere56)
Appearance57 = Appearance()
Appearance57.setDEF("HAnimJointAppearanceRed")
Material58 = Material()
Material58.setDiffuseColor([1,0,0])

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Transform54.addChildren(Shape55)

HAnimSegment53.addChildren(Transform54)
Shape59 = Shape()
Appearance60 = Appearance()
Material61 = Material()
Material61.setEmissiveColor([1,1,1])

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
IndexedLineSet62 = IndexedLineSet()
IndexedLineSet62.setDEF("MC12toCMC1")
IndexedLineSet62.setCoordIndex([0,1])
Coordinate63 = Coordinate()
Coordinate63.setPoint([-0.1,0.1,0,-0.2,0.15,0])

IndexedLineSet62.setCoord(Coordinate63)

Shape59.setGeometry(IndexedLineSet62)

HAnimSegment53.addChildren(Shape59)

HAnimJoint52.addChildren(HAnimSegment53)
#thumb finger
HAnimJoint64 = HAnimJoint()
HAnimJoint64.setName("r_carpometacarpal_1")
HAnimJoint64.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint64.setCenter([-0.2,0.15,0])
HAnimJoint64.setUlimit([0,0,0])
HAnimJoint64.setLlimit([0,0,0])
HAnimJoint64.setStiffness([0,0,0])
HAnimSegment65 = HAnimSegment()
HAnimSegment65.setName("r_metacarpal_1")
HAnimSegment65.setDEF("hanim_r_metacarpal_1")
Transform66 = Transform()
Transform66.setTranslation([-0.2,0.15,0])
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
IndexedLineSet71.setDEF("CMC1toMCP1xxx")
IndexedLineSet71.setCoordIndex([0,1])
Coordinate72 = Coordinate()
Coordinate72.setPoint([-0.2,0.15,0,-0.3,0.3,0])

IndexedLineSet71.setCoord(Coordinate72)

Shape68.setGeometry(IndexedLineSet71)

HAnimSegment65.addChildren(Shape68)

HAnimJoint64.addChildren(HAnimSegment65)
HAnimJoint73 = HAnimJoint()
HAnimJoint73.setName("r_metacarpophalangeal_1")
HAnimJoint73.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint73.setCenter([-0.3,0.3,0])
HAnimJoint73.setUlimit([0,0,0])
HAnimJoint73.setLlimit([0,0,0])
HAnimJoint73.setStiffness([0,0,0])
HAnimSegment74 = HAnimSegment()
HAnimSegment74.setName("r_carpal_proximal_phalanx_1")
HAnimSegment74.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform75 = Transform()
Transform75.setTranslation([-0.3,0.3,0])
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
IndexedLineSet80.setDEF("MCP11toIP1")
IndexedLineSet80.setCoordIndex([0,1])
Coordinate81 = Coordinate()
Coordinate81.setPoint([-0.3,0.3,0,-0.35,0.4,0])

IndexedLineSet80.setCoord(Coordinate81)

Shape77.setGeometry(IndexedLineSet80)

HAnimSegment74.addChildren(Shape77)

HAnimJoint73.addChildren(HAnimSegment74)
HAnimJoint82 = HAnimJoint()
HAnimJoint82.setName("r_carpal_interphalangeal_1")
HAnimJoint82.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint82.setCenter([-0.35,0.4,0])
HAnimJoint82.setUlimit([0,0,0])
HAnimJoint82.setLlimit([0,0,0])
HAnimJoint82.setStiffness([0,0,0])
HAnimSegment83 = HAnimSegment()
HAnimSegment83.setName("r_carpal_distal_phalanx_1")
HAnimSegment83.setDEF("hanim_r_carpal_distal_phalanx_1")
Transform84 = Transform()
Transform84.setTranslation([-0.35,0.4,0])
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
IndexedLineSet89.setDEF("fingertip_r_carpal_interphalangeal_1")
IndexedLineSet89.setCoordIndex([0,1])
Coordinate90 = Coordinate()
Coordinate90.setPoint([-0.35,0.4,0,-0.36,0.45,0])

IndexedLineSet89.setCoord(Coordinate90)

Shape86.setGeometry(IndexedLineSet89)

HAnimSegment83.addChildren(Shape86)

HAnimJoint82.addChildren(HAnimSegment83)

HAnimJoint73.addChildren(HAnimJoint82)

HAnimJoint64.addChildren(HAnimJoint73)

HAnimJoint52.addChildren(HAnimJoint64)

HAnimJoint30.addChildren(HAnimJoint52)
#MC2
HAnimJoint91 = HAnimJoint()
HAnimJoint91.setName("r_midcarpal_2")
HAnimJoint91.setDEF("hanim_r_midcarpal_2")
HAnimJoint91.setCenter([-0.07,0.07,0])
HAnimJoint91.setUlimit([0,0,0])
HAnimJoint91.setLlimit([0,0,0])
HAnimJoint91.setStiffness([0,0,0])
HAnimSegment92 = HAnimSegment()
HAnimSegment92.setName("r_trapezoid")
HAnimSegment92.setDEF("hanim_r_trapezoid")
Transform93 = Transform()
Transform93.setTranslation([-0.07,0.07,0])
Shape94 = Shape()
Shape94.setUSE("HAnimNewJointShape")

Transform93.addChildren(Shape94)

HAnimSegment92.addChildren(Transform93)
Shape95 = Shape()
Appearance96 = Appearance()
Material97 = Material()
Material97.setEmissiveColor([1,1,1])

Appearance96.setMaterial(Material97)

Shape95.setAppearance(Appearance96)
IndexedLineSet98 = IndexedLineSet()
IndexedLineSet98.setDEF("MC12toCMC2")
IndexedLineSet98.setCoordIndex([0,1])
Coordinate99 = Coordinate()
Coordinate99.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet98.setCoord(Coordinate99)

Shape95.setGeometry(IndexedLineSet98)

HAnimSegment92.addChildren(Shape95)

HAnimJoint91.addChildren(HAnimSegment92)
#index finger
HAnimJoint100 = HAnimJoint()
HAnimJoint100.setName("r_carpometacarpal_2")
HAnimJoint100.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint100.setCenter([-0.1,0.2,0])
HAnimJoint100.setUlimit([0,0,0])
HAnimJoint100.setLlimit([0,0,0])
HAnimJoint100.setStiffness([0,0,0])
HAnimSegment101 = HAnimSegment()
HAnimSegment101.setName("r_metacarpal_2")
HAnimSegment101.setDEF("hanim_r_metacarpal_2")
Transform102 = Transform()
Transform102.setTranslation([-0.1,0.2,0])
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
IndexedLineSet107.setDEF("CMC2toMCP2")
IndexedLineSet107.setCoordIndex([0,1])
Coordinate108 = Coordinate()
Coordinate108.setPoint([-0.1,0.2,0,-0.15,0.5,0])

IndexedLineSet107.setCoord(Coordinate108)

Shape104.setGeometry(IndexedLineSet107)

HAnimSegment101.addChildren(Shape104)

HAnimJoint100.addChildren(HAnimSegment101)
HAnimJoint109 = HAnimJoint()
HAnimJoint109.setName("r_metacarpophalangeal_2")
HAnimJoint109.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint109.setCenter([-0.15,0.5,0])
HAnimJoint109.setUlimit([0,0,0])
HAnimJoint109.setLlimit([0,0,0])
HAnimJoint109.setStiffness([0,0,0])
HAnimSegment110 = HAnimSegment()
HAnimSegment110.setName("r_carpal_proximal_phalanx_2")
HAnimSegment110.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform111 = Transform()
Transform111.setTranslation([-0.15,0.5,0])
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
IndexedLineSet116.setDEF("MCP2toPIP2")
IndexedLineSet116.setCoordIndex([0,1])
Coordinate117 = Coordinate()
Coordinate117.setPoint([-0.15,0.5,0,-0.2,0.7,0])

IndexedLineSet116.setCoord(Coordinate117)

Shape113.setGeometry(IndexedLineSet116)

HAnimSegment110.addChildren(Shape113)

HAnimJoint109.addChildren(HAnimSegment110)
HAnimJoint118 = HAnimJoint()
HAnimJoint118.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint118.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint118.setCenter([-0.2,0.7,0])
HAnimJoint118.setUlimit([0,0,0])
HAnimJoint118.setLlimit([0,0,0])
HAnimJoint118.setStiffness([0,0,0])
HAnimSegment119 = HAnimSegment()
HAnimSegment119.setName("r_carpal_middle_phalanx_2")
HAnimSegment119.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform120 = Transform()
Transform120.setTranslation([-0.2,0.7,0])
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
IndexedLineSet125.setDEF("PIP2toDIP2")
IndexedLineSet125.setCoordIndex([0,1])
Coordinate126 = Coordinate()
Coordinate126.setPoint([-0.2,0.7,0,-0.24,0.87,0])

IndexedLineSet125.setCoord(Coordinate126)

Shape122.setGeometry(IndexedLineSet125)

HAnimSegment119.addChildren(Shape122)

HAnimJoint118.addChildren(HAnimSegment119)
HAnimJoint127 = HAnimJoint()
HAnimJoint127.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint127.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint127.setCenter([-0.24,0.87,0])
HAnimJoint127.setUlimit([0,0,0])
HAnimJoint127.setLlimit([0,0,0])
HAnimJoint127.setStiffness([0,0,0])
HAnimSegment128 = HAnimSegment()
HAnimSegment128.setName("r_carpal_distal_phalanx_2")
HAnimSegment128.setDEF("hanim_r_carpal_distal_phalanx_2")
Transform129 = Transform()
Transform129.setTranslation([-0.24,0.87,0])
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
IndexedLineSet134.setDEF("fingertip_r_carpal_distal_interphalangeal_2")
IndexedLineSet134.setCoordIndex([0,1])
Coordinate135 = Coordinate()
Coordinate135.setPoint([-0.24,0.87,0,-0.26,0.93,0])

IndexedLineSet134.setCoord(Coordinate135)

Shape131.setGeometry(IndexedLineSet134)

HAnimSegment128.addChildren(Shape131)

HAnimJoint127.addChildren(HAnimSegment128)

HAnimJoint118.addChildren(HAnimJoint127)

HAnimJoint109.addChildren(HAnimJoint118)

HAnimJoint100.addChildren(HAnimJoint109)

HAnimJoint91.addChildren(HAnimJoint100)

HAnimJoint30.addChildren(HAnimJoint91)
#MC3
HAnimJoint136 = HAnimJoint()
HAnimJoint136.setName("r_midcarpal_3")
HAnimJoint136.setDEF("hanim_r_midcarpal_3")
HAnimJoint136.setCenter([0,0.07,0])
HAnimJoint136.setUlimit([0,0,0])
HAnimJoint136.setLlimit([0,0,0])
HAnimJoint136.setStiffness([0,0,0])
HAnimSegment137 = HAnimSegment()
HAnimSegment137.setName("r_capitate")
HAnimSegment137.setDEF("hanim_r_capitate")
Transform138 = Transform()
Transform138.setTranslation([0,0.07,0])
Shape139 = Shape()
Shape139.setUSE("HAnimNewJointShape")

Transform138.addChildren(Shape139)

HAnimSegment137.addChildren(Transform138)
Shape140 = Shape()
Appearance141 = Appearance()
Material142 = Material()
Material142.setEmissiveColor([1,1,1])

Appearance141.setMaterial(Material142)

Shape140.setAppearance(Appearance141)
IndexedLineSet143 = IndexedLineSet()
IndexedLineSet143.setDEF("MC3toCMC3")
IndexedLineSet143.setCoordIndex([0,1])
Coordinate144 = Coordinate()
Coordinate144.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet143.setCoord(Coordinate144)

Shape140.setGeometry(IndexedLineSet143)

HAnimSegment137.addChildren(Shape140)

HAnimJoint136.addChildren(HAnimSegment137)
#Middle fingle
HAnimJoint145 = HAnimJoint()
HAnimJoint145.setName("r_carpometacarpal_3")
HAnimJoint145.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint145.setCenter([0,0.2,0])
HAnimJoint145.setUlimit([0,0,0])
HAnimJoint145.setLlimit([0,0,0])
HAnimJoint145.setStiffness([0,0,0])
HAnimSegment146 = HAnimSegment()
HAnimSegment146.setName("r_metacarpal_3")
HAnimSegment146.setDEF("hanim_r_metacarpal_3")
Transform147 = Transform()
Transform147.setTranslation([0,0.2,0])
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
IndexedLineSet152.setDEF("CMC3toMCP3")
IndexedLineSet152.setCoordIndex([0,1])
Coordinate153 = Coordinate()
Coordinate153.setPoint([0,0.2,0,-0.03,0.5,0])

IndexedLineSet152.setCoord(Coordinate153)

Shape149.setGeometry(IndexedLineSet152)

HAnimSegment146.addChildren(Shape149)

HAnimJoint145.addChildren(HAnimSegment146)
HAnimJoint154 = HAnimJoint()
HAnimJoint154.setName("r_metacarpophalangeal_3")
HAnimJoint154.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint154.setCenter([-0.03,0.5,0])
HAnimJoint154.setUlimit([0,0,0])
HAnimJoint154.setLlimit([0,0,0])
HAnimJoint154.setStiffness([0,0,0])
HAnimSegment155 = HAnimSegment()
HAnimSegment155.setName("r_carpal_proximal_phalanx_3")
HAnimSegment155.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform156 = Transform()
Transform156.setTranslation([-0.03,0.5,0])
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
IndexedLineSet161.setDEF("MCP3toPIP3")
IndexedLineSet161.setCoordIndex([0,1])
Coordinate162 = Coordinate()
Coordinate162.setPoint([-0.03,0.5,0,-0.05,0.75,0])

IndexedLineSet161.setCoord(Coordinate162)

Shape158.setGeometry(IndexedLineSet161)

HAnimSegment155.addChildren(Shape158)

HAnimJoint154.addChildren(HAnimSegment155)
HAnimJoint163 = HAnimJoint()
HAnimJoint163.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint163.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint163.setCenter([-0.05,0.75,0])
HAnimJoint163.setUlimit([0,0,0])
HAnimJoint163.setLlimit([0,0,0])
HAnimJoint163.setStiffness([0,0,0])
HAnimSegment164 = HAnimSegment()
HAnimSegment164.setName("r_carpal_middle_phalanx_3")
HAnimSegment164.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform165 = Transform()
Transform165.setTranslation([-0.05,0.75,0])
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
IndexedLineSet170.setDEF("PIP3toDIP3")
IndexedLineSet170.setCoordIndex([0,1])
Coordinate171 = Coordinate()
Coordinate171.setPoint([-0.05,0.75,0,-0.08,0.96,0])

IndexedLineSet170.setCoord(Coordinate171)

Shape167.setGeometry(IndexedLineSet170)

HAnimSegment164.addChildren(Shape167)

HAnimJoint163.addChildren(HAnimSegment164)
HAnimJoint172 = HAnimJoint()
HAnimJoint172.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint172.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint172.setCenter([-0.08,0.96,0])
HAnimJoint172.setUlimit([0,0,0])
HAnimJoint172.setLlimit([0,0,0])
HAnimJoint172.setStiffness([0,0,0])
HAnimSegment173 = HAnimSegment()
HAnimSegment173.setName("r_carpal_distal_phalanx_3")
HAnimSegment173.setDEF("hanim_r_carpal_distal_phalanx_3")
Transform174 = Transform()
Transform174.setTranslation([-0.08,0.96,0])
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
IndexedLineSet179.setDEF("fingertip_r_carpal_distal_interphalangeal_3")
IndexedLineSet179.setCoordIndex([0,1])
Coordinate180 = Coordinate()
Coordinate180.setPoint([-0.08,0.96,0,-0.09,1.05,0])

IndexedLineSet179.setCoord(Coordinate180)

Shape176.setGeometry(IndexedLineSet179)

HAnimSegment173.addChildren(Shape176)

HAnimJoint172.addChildren(HAnimSegment173)

HAnimJoint163.addChildren(HAnimJoint172)

HAnimJoint154.addChildren(HAnimJoint163)

HAnimJoint145.addChildren(HAnimJoint154)

HAnimJoint136.addChildren(HAnimJoint145)

HAnimJoint30.addChildren(HAnimJoint136)
#MC4_5
HAnimJoint181 = HAnimJoint()
HAnimJoint181.setName("r_midcarpal_4_5")
HAnimJoint181.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint181.setCenter([0.1,0.1,0])
HAnimJoint181.setUlimit([0,0,0])
HAnimJoint181.setLlimit([0,0,0])
HAnimJoint181.setStiffness([0,0,0])
HAnimSegment182 = HAnimSegment()
HAnimSegment182.setName("r_hamate")
HAnimSegment182.setDEF("hanim_r_hamate")
Transform183 = Transform()
Transform183.setTranslation([0.1,0.1,0])
Shape184 = Shape()
Shape184.setUSE("HAnimNewJointShape")

Transform183.addChildren(Shape184)

HAnimSegment182.addChildren(Transform183)
Shape185 = Shape()
Appearance186 = Appearance()
Material187 = Material()
Material187.setEmissiveColor([1,1,1])

Appearance186.setMaterial(Material187)

Shape185.setAppearance(Appearance186)
IndexedLineSet188 = IndexedLineSet()
IndexedLineSet188.setDEF("MC45toCMC4")
IndexedLineSet188.setCoordIndex([0,1])
Coordinate189 = Coordinate()
Coordinate189.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet188.setCoord(Coordinate189)

Shape185.setGeometry(IndexedLineSet188)

HAnimSegment182.addChildren(Shape185)
Shape190 = Shape()
Appearance191 = Appearance()
Material192 = Material()
Material192.setEmissiveColor([1,1,1])

Appearance191.setMaterial(Material192)

Shape190.setAppearance(Appearance191)
IndexedLineSet193 = IndexedLineSet()
IndexedLineSet193.setDEF("MC45toCMC5")
IndexedLineSet193.setCoordIndex([0,1])
Coordinate194 = Coordinate()
Coordinate194.setPoint([0.1,0.1,0,0.15,0.17,0])

IndexedLineSet193.setCoord(Coordinate194)

Shape190.setGeometry(IndexedLineSet193)

HAnimSegment182.addChildren(Shape190)

HAnimJoint181.addChildren(HAnimSegment182)
#ring finger
HAnimJoint195 = HAnimJoint()
HAnimJoint195.setName("r_carpometacarpal_4")
HAnimJoint195.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint195.setCenter([0.1,0.2,0])
HAnimJoint195.setUlimit([0,0,0])
HAnimJoint195.setLlimit([0,0,0])
HAnimJoint195.setStiffness([0,0,0])
HAnimSegment196 = HAnimSegment()
HAnimSegment196.setName("r_metacarpal_4")
HAnimSegment196.setDEF("hanim_r_metacarpal_4")
Transform197 = Transform()
Transform197.setTranslation([0.1,0.2,0])
Shape198 = Shape()
Shape198.setUSE("HAnimJointShape")

Transform197.addChildren(Shape198)

HAnimSegment196.addChildren(Transform197)
Shape199 = Shape()
Appearance200 = Appearance()
Material201 = Material()
Material201.setEmissiveColor([1,1,1])

Appearance200.setMaterial(Material201)

Shape199.setAppearance(Appearance200)
IndexedLineSet202 = IndexedLineSet()
IndexedLineSet202.setDEF("CMC4toMCP4")
IndexedLineSet202.setCoordIndex([0,1])
Coordinate203 = Coordinate()
Coordinate203.setPoint([0.1,0.2,0,0.1,0.47,0])

IndexedLineSet202.setCoord(Coordinate203)

Shape199.setGeometry(IndexedLineSet202)

HAnimSegment196.addChildren(Shape199)

HAnimJoint195.addChildren(HAnimSegment196)
HAnimJoint204 = HAnimJoint()
HAnimJoint204.setName("r_metacarpophalangeal_4")
HAnimJoint204.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint204.setCenter([0.1,0.47,0])
HAnimJoint204.setUlimit([0,0,0])
HAnimJoint204.setLlimit([0,0,0])
HAnimJoint204.setStiffness([0,0,0])
HAnimSegment205 = HAnimSegment()
HAnimSegment205.setName("r_carpal_proximal_phalanx_4")
HAnimSegment205.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform206 = Transform()
Transform206.setTranslation([0.1,0.47,0])
Shape207 = Shape()
Shape207.setUSE("HAnimJointShape")

Transform206.addChildren(Shape207)

HAnimSegment205.addChildren(Transform206)
Shape208 = Shape()
Appearance209 = Appearance()
Material210 = Material()
Material210.setEmissiveColor([1,1,1])

Appearance209.setMaterial(Material210)

Shape208.setAppearance(Appearance209)
IndexedLineSet211 = IndexedLineSet()
IndexedLineSet211.setDEF("MCP4toPIP4")
IndexedLineSet211.setCoordIndex([0,1])
Coordinate212 = Coordinate()
Coordinate212.setPoint([0.1,0.47,0,0.1,0.7,0])

IndexedLineSet211.setCoord(Coordinate212)

Shape208.setGeometry(IndexedLineSet211)

HAnimSegment205.addChildren(Shape208)

HAnimJoint204.addChildren(HAnimSegment205)
HAnimJoint213 = HAnimJoint()
HAnimJoint213.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint213.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint213.setCenter([0.1,0.7,0])
HAnimJoint213.setUlimit([0,0,0])
HAnimJoint213.setLlimit([0,0,0])
HAnimJoint213.setStiffness([0,0,0])
HAnimSegment214 = HAnimSegment()
HAnimSegment214.setName("r_carpal_middle_phalanx_4")
HAnimSegment214.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform215 = Transform()
Transform215.setTranslation([0.1,0.7,0])
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
IndexedLineSet220.setDEF("PIP4toDIP4")
IndexedLineSet220.setCoordIndex([0,1])
Coordinate221 = Coordinate()
Coordinate221.setPoint([0.1,0.7,0,0.1,0.93,0])

IndexedLineSet220.setCoord(Coordinate221)

Shape217.setGeometry(IndexedLineSet220)

HAnimSegment214.addChildren(Shape217)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint222 = HAnimJoint()
HAnimJoint222.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint222.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint222.setCenter([0.1,0.93,0])
HAnimJoint222.setUlimit([0,0,0])
HAnimJoint222.setLlimit([0,0,0])
HAnimJoint222.setStiffness([0,0,0])
HAnimSegment223 = HAnimSegment()
HAnimSegment223.setName("r_carpal_distal_phalanx_4")
HAnimSegment223.setDEF("hanim_r_carpal_distal_phalanx_4")
Transform224 = Transform()
Transform224.setTranslation([0.1,0.93,0])
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
IndexedLineSet229.setDEF("fingertip_r_carpal_distal_interphalangeal_4")
IndexedLineSet229.setCoordIndex([0,1])
Coordinate230 = Coordinate()
Coordinate230.setPoint([0.1,0.93,0,0.1,1,0])

IndexedLineSet229.setCoord(Coordinate230)

Shape226.setGeometry(IndexedLineSet229)

HAnimSegment223.addChildren(Shape226)

HAnimJoint222.addChildren(HAnimSegment223)

HAnimJoint213.addChildren(HAnimJoint222)

HAnimJoint204.addChildren(HAnimJoint213)

HAnimJoint195.addChildren(HAnimJoint204)

HAnimJoint181.addChildren(HAnimJoint195)
#pinky finger
HAnimJoint231 = HAnimJoint()
HAnimJoint231.setName("r_carpometacarpal_5")
HAnimJoint231.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint231.setCenter([0.15,0.17,0])
HAnimJoint231.setUlimit([0,0,0])
HAnimJoint231.setLlimit([0,0,0])
HAnimJoint231.setStiffness([0,0,0])
HAnimSegment232 = HAnimSegment()
HAnimSegment232.setName("r_metacarpal_5")
HAnimSegment232.setDEF("hanim_r_metacarpal_5")
Transform233 = Transform()
Transform233.setTranslation([0.15,0.17,0])
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
IndexedLineSet238.setDEF("CMC5toMCP5")
IndexedLineSet238.setCoordIndex([0,1])
Coordinate239 = Coordinate()
Coordinate239.setPoint([0.15,0.17,0,0.2,0.4,0])

IndexedLineSet238.setCoord(Coordinate239)

Shape235.setGeometry(IndexedLineSet238)

HAnimSegment232.addChildren(Shape235)

HAnimJoint231.addChildren(HAnimSegment232)
HAnimJoint240 = HAnimJoint()
HAnimJoint240.setName("r_metacarpophalangeal_5")
HAnimJoint240.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint240.setCenter([0.2,0.4,0])
HAnimJoint240.setUlimit([0,0,0])
HAnimJoint240.setLlimit([0,0,0])
HAnimJoint240.setStiffness([0,0,0])
HAnimSegment241 = HAnimSegment()
HAnimSegment241.setName("r_carpal_proximal_phalanx_5")
HAnimSegment241.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform242 = Transform()
Transform242.setTranslation([0.2,0.4,0])
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
IndexedLineSet247.setDEF("MCP5toPIP5")
IndexedLineSet247.setCoordIndex([0,1])
Coordinate248 = Coordinate()
Coordinate248.setPoint([0.2,0.4,0,0.23,0.63,0])

IndexedLineSet247.setCoord(Coordinate248)

Shape244.setGeometry(IndexedLineSet247)

HAnimSegment241.addChildren(Shape244)

HAnimJoint240.addChildren(HAnimSegment241)
HAnimJoint249 = HAnimJoint()
HAnimJoint249.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint249.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint249.setCenter([0.23,0.63,0])
HAnimJoint249.setUlimit([0,0,0])
HAnimJoint249.setLlimit([0,0,0])
HAnimJoint249.setStiffness([0,0,0])
HAnimSegment250 = HAnimSegment()
HAnimSegment250.setName("r_carpal_middle_phalanx_5")
HAnimSegment250.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform251 = Transform()
Transform251.setTranslation([0.23,0.63,0])
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
IndexedLineSet256.setDEF("PIP5toDIP5")
IndexedLineSet256.setCoordIndex([0,1])
Coordinate257 = Coordinate()
Coordinate257.setPoint([0.23,0.63,0,0.25,0.79,0])

IndexedLineSet256.setCoord(Coordinate257)

Shape253.setGeometry(IndexedLineSet256)

HAnimSegment250.addChildren(Shape253)

HAnimJoint249.addChildren(HAnimSegment250)
HAnimJoint258 = HAnimJoint()
HAnimJoint258.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint258.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint258.setCenter([0.25,0.79,0])
HAnimJoint258.setUlimit([0,0,0])
HAnimJoint258.setLlimit([0,0,0])
HAnimJoint258.setStiffness([0,0,0])
HAnimSegment259 = HAnimSegment()
HAnimSegment259.setName("r_carpal_distal_phalanx_5")
HAnimSegment259.setDEF("hanim_r_carpal_distal_phalanx_5")
Transform260 = Transform()
Transform260.setTranslation([0.25,0.79,0])
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
IndexedLineSet265.setDEF("fingertip_r_carpal_distal_interphalangeal_5")
IndexedLineSet265.setCoordIndex([0,1])
Coordinate266 = Coordinate()
Coordinate266.setPoint([0.25,0.79,0,0.26,0.85,0])

IndexedLineSet265.setCoord(Coordinate266)

Shape262.setGeometry(IndexedLineSet265)

HAnimSegment259.addChildren(Shape262)

HAnimJoint258.addChildren(HAnimSegment259)

HAnimJoint249.addChildren(HAnimJoint258)

HAnimJoint240.addChildren(HAnimJoint249)

HAnimJoint231.addChildren(HAnimJoint240)

HAnimJoint181.addChildren(HAnimJoint231)

HAnimJoint30.addChildren(HAnimJoint181)

HAnimJoint29.addChildren(HAnimJoint30)

HAnimHumanoid26.setSkeleton(HAnimJoint29)
HAnimJoint267 = HAnimJoint()
HAnimJoint267.setUSE("hanim_humanoid_root")

HAnimHumanoid26.addJoints(HAnimJoint267)
HAnimJoint268 = HAnimJoint()
HAnimJoint268.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint268)
HAnimJoint269 = HAnimJoint()
HAnimJoint269.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint269)
HAnimJoint270 = HAnimJoint()
HAnimJoint270.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint270)
HAnimJoint271 = HAnimJoint()
HAnimJoint271.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint271)
HAnimJoint272 = HAnimJoint()
HAnimJoint272.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint272)
HAnimJoint273 = HAnimJoint()
HAnimJoint273.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint273)
HAnimJoint274 = HAnimJoint()
HAnimJoint274.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint274)
HAnimJoint275 = HAnimJoint()
HAnimJoint275.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint275)
HAnimJoint276 = HAnimJoint()
HAnimJoint276.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint276)
HAnimJoint277 = HAnimJoint()
HAnimJoint277.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint277)
HAnimJoint278 = HAnimJoint()
HAnimJoint278.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint278)
HAnimJoint279 = HAnimJoint()
HAnimJoint279.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint279)
HAnimJoint280 = HAnimJoint()
HAnimJoint280.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid26.addJoints(HAnimJoint280)
HAnimJoint281 = HAnimJoint()
HAnimJoint281.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid26.addJoints(HAnimJoint281)
HAnimJoint282 = HAnimJoint()
HAnimJoint282.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint282)
HAnimJoint283 = HAnimJoint()
HAnimJoint283.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint283)
HAnimJoint284 = HAnimJoint()
HAnimJoint284.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint284)
HAnimJoint285 = HAnimJoint()
HAnimJoint285.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint285)
HAnimJoint286 = HAnimJoint()
HAnimJoint286.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint286)
HAnimJoint287 = HAnimJoint()
HAnimJoint287.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint287)
HAnimJoint288 = HAnimJoint()
HAnimJoint288.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint288)
HAnimJoint289 = HAnimJoint()
HAnimJoint289.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint289)
HAnimJoint290 = HAnimJoint()
HAnimJoint290.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid26.addJoints(HAnimJoint290)
HAnimJoint291 = HAnimJoint()
HAnimJoint291.setUSE("hanim_r_radiocarpal")

HAnimHumanoid26.addJoints(HAnimJoint291)
HAnimSegment292 = HAnimSegment()
HAnimSegment292.setUSE("hanim_r_capitate")

HAnimHumanoid26.addSegments(HAnimSegment292)
HAnimSegment293 = HAnimSegment()
HAnimSegment293.setUSE("hanim_r_carpal")

HAnimHumanoid26.addSegments(HAnimSegment293)
HAnimSegment294 = HAnimSegment()
HAnimSegment294.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid26.addSegments(HAnimSegment294)
HAnimSegment295 = HAnimSegment()
HAnimSegment295.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid26.addSegments(HAnimSegment295)
HAnimSegment296 = HAnimSegment()
HAnimSegment296.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid26.addSegments(HAnimSegment296)
HAnimSegment297 = HAnimSegment()
HAnimSegment297.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid26.addSegments(HAnimSegment297)
HAnimSegment298 = HAnimSegment()
HAnimSegment298.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid26.addSegments(HAnimSegment298)
HAnimSegment299 = HAnimSegment()
HAnimSegment299.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid26.addSegments(HAnimSegment299)
HAnimSegment300 = HAnimSegment()
HAnimSegment300.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid26.addSegments(HAnimSegment300)
HAnimSegment301 = HAnimSegment()
HAnimSegment301.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid26.addSegments(HAnimSegment301)
HAnimSegment302 = HAnimSegment()
HAnimSegment302.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid26.addSegments(HAnimSegment302)
HAnimSegment303 = HAnimSegment()
HAnimSegment303.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid26.addSegments(HAnimSegment303)
HAnimSegment304 = HAnimSegment()
HAnimSegment304.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid26.addSegments(HAnimSegment304)
HAnimSegment305 = HAnimSegment()
HAnimSegment305.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid26.addSegments(HAnimSegment305)
HAnimSegment306 = HAnimSegment()
HAnimSegment306.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid26.addSegments(HAnimSegment306)
HAnimSegment307 = HAnimSegment()
HAnimSegment307.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid26.addSegments(HAnimSegment307)
HAnimSegment308 = HAnimSegment()
HAnimSegment308.setUSE("hanim_r_hamate")

HAnimHumanoid26.addSegments(HAnimSegment308)
HAnimSegment309 = HAnimSegment()
HAnimSegment309.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid26.addSegments(HAnimSegment309)
HAnimSegment310 = HAnimSegment()
HAnimSegment310.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid26.addSegments(HAnimSegment310)
HAnimSegment311 = HAnimSegment()
HAnimSegment311.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid26.addSegments(HAnimSegment311)
HAnimSegment312 = HAnimSegment()
HAnimSegment312.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid26.addSegments(HAnimSegment312)
HAnimSegment313 = HAnimSegment()
HAnimSegment313.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid26.addSegments(HAnimSegment313)
HAnimSegment314 = HAnimSegment()
HAnimSegment314.setUSE("hanim_r_trapezium")

HAnimHumanoid26.addSegments(HAnimSegment314)
HAnimSegment315 = HAnimSegment()
HAnimSegment315.setUSE("hanim_r_trapezoid")

HAnimHumanoid26.addSegments(HAnimSegment315)

Scene24.addChildren(HAnimHumanoid26)

X3D0.setScene(Scene24)
X3D0.toFileX3D("../data/HAnimModelHandRight_RoundTrip.x3d")

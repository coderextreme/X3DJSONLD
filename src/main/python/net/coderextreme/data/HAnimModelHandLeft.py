import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("HAnimModelHandLeft.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Left hand, using high-fidelity definitions for HAnim version 2.0")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("26 January 2015")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("23 December 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("TODO")
meta8.setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("Image")
meta9.setContent("HAnimModelHandRightSegmentVisualizationError.png")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("error")
meta10.setContent("not yet to scale, also relatively flat")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("warning")
meta11.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("info")
meta12.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("subject")
meta19.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("TODO")
meta20.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("identifier")
meta21.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("generator")
meta22.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("license")
meta23.setContent("../license.html")

head1.addMeta(meta23)

X3D0.setHead(head1)
Scene24 = x3d.Scene()
WorldInfo25 = x3d.WorldInfo()
WorldInfo25.setTitle("HAnimModelHandLeft.x3d")

Scene24.addChildren(WorldInfo25)
HAnimHumanoid26 = x3d.HAnimHumanoid()
HAnimHumanoid26.setName("Hand_Left")
HAnimHumanoid26.setDEF("hanim_Hand_Left")
HAnimHumanoid26.setLoa(4)
HAnimHumanoid26.setVersion("2.0")
#original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet27 = x3d.MetadataSet()
MetadataSet27.setName("HAnimHumanoid.info")
MetadataSet27.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString28 = x3d.MetadataString()
MetadataString28.setName("authorName")
MetadataString28.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet27.setValue(MetadataString28)

HAnimHumanoid26.setMetadata(MetadataSet27)
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.setName("humanoid_root")
HAnimJoint29.setDEF("hanim_humanoid_root")
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("l_radiocarpal")
HAnimJoint30.setDEF("hanim_l_radiocarpal")
HAnimJoint30.setDescription("connection joint of hand to leg above")
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.setName("l_carpal")
HAnimSegment31.setDEF("hanim_l_carpal")
Transform32 = x3d.Transform()
Shape33 = x3d.Shape()
Shape33.setDEF("HAnimJointShape")
Sphere34 = x3d.Sphere()
Sphere34.setRadius(0.025)

Shape33.setGeometry(Sphere34)
Appearance35 = x3d.Appearance()
Appearance35.setDEF("HAnimJointAppearanceBlue")
Material36 = x3d.Material()
Material36.setDiffuseColor([0,0,1])

Appearance35.setMaterial(Material36)

Shape33.setAppearance(Appearance35)

Transform32.addChild(Shape33)

HAnimSegment31.addChildren(Transform32)
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setEmissiveColor([1,1,1])

Appearance38.setMaterial(Material39)

Shape37.setAppearance(Appearance38)
IndexedLineSet40 = x3d.IndexedLineSet()
IndexedLineSet40.setDEF("RCToMC12")
IndexedLineSet40.setCoordIndex([0,1])
Coordinate41 = x3d.Coordinate()
Coordinate41.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet40.setCoord(Coordinate41)

Shape37.setGeometry(IndexedLineSet40)

HAnimSegment31.addChildren(Shape37)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setEmissiveColor([1,1,1])

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
IndexedLineSet45 = x3d.IndexedLineSet()
IndexedLineSet45.setDEF("RCToMC3")
IndexedLineSet45.setCoordIndex([0,1])
Coordinate46 = x3d.Coordinate()
Coordinate46.setPoint([0,0,0,0,0.07,0])

IndexedLineSet45.setCoord(Coordinate46)

Shape42.setGeometry(IndexedLineSet45)

HAnimSegment31.addChildren(Shape42)
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setEmissiveColor([1,1,1])

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.setDEF("RCToMC45")
IndexedLineSet50.setCoordIndex([0,1])
Coordinate51 = x3d.Coordinate()
Coordinate51.setPoint([0,0,0,-0.1,0.1,0])

IndexedLineSet50.setCoord(Coordinate51)

Shape47.setGeometry(IndexedLineSet50)

HAnimSegment31.addChildren(Shape47)

HAnimJoint30.addChildren(HAnimSegment31)
#MC1
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("l_midcarpal_1")
HAnimJoint52.setDEF("hanim_l_midcarpal_1")
HAnimJoint52.setCenter([0.14,0.09,0])
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.setName("l_trapezium")
HAnimSegment53.setDEF("hanim_l_trapezium")
Transform54 = x3d.Transform()
Transform54.setTranslation([0.14,0.09,0])
Shape55 = x3d.Shape()
Shape55.setDEF("HAnimNewJointShape")
Sphere56 = x3d.Sphere()
Sphere56.setRadius(0.025)

Shape55.setGeometry(Sphere56)
Appearance57 = x3d.Appearance()
Appearance57.setDEF("HAnimJointAppearanceRed")
Material58 = x3d.Material()
Material58.setDiffuseColor([1,0,0])

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Transform54.addChild(Shape55)

HAnimSegment53.addChildren(Transform54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setEmissiveColor([1,1,1])

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
IndexedLineSet62 = x3d.IndexedLineSet()
IndexedLineSet62.setDEF("MC12toCMC1")
IndexedLineSet62.setCoordIndex([0,1])
Coordinate63 = x3d.Coordinate()
Coordinate63.setPoint([0.1,0.1,0,0.2,0.15,0])

IndexedLineSet62.setCoord(Coordinate63)

Shape59.setGeometry(IndexedLineSet62)

HAnimSegment53.addChildren(Shape59)
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.setEmissiveColor([1,1,1])

Appearance65.setMaterial(Material66)

Shape64.setAppearance(Appearance65)
IndexedLineSet67 = x3d.IndexedLineSet()
IndexedLineSet67.setDEF("MC1toCMC1")
IndexedLineSet67.setCoordIndex([0,1])
Coordinate68 = x3d.Coordinate()
Coordinate68.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet67.setCoord(Coordinate68)

Shape64.setGeometry(IndexedLineSet67)

HAnimSegment53.addChildren(Shape64)

HAnimJoint52.addChildren(HAnimSegment53)
#thumb finger
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.setName("l_carpometacarpal_1")
HAnimJoint69.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint69.setCenter([0.2,0.15,0])
HAnimSegment70 = x3d.HAnimSegment()
HAnimSegment70.setName("l_metacarpal_1")
HAnimSegment70.setDEF("hanim_l_metacarpal_1")
Transform71 = x3d.Transform()
Transform71.setTranslation([0.2,0.15,0])
Shape72 = x3d.Shape()
Shape72.setUSE("HAnimJointShape")

Transform71.addChild(Shape72)

HAnimSegment70.addChildren(Transform71)
Shape73 = x3d.Shape()
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.setEmissiveColor([1,1,1])

Appearance74.setMaterial(Material75)

Shape73.setAppearance(Appearance74)
IndexedLineSet76 = x3d.IndexedLineSet()
IndexedLineSet76.setDEF("CMC1toMCP1")
IndexedLineSet76.setCoordIndex([0,1])
Coordinate77 = x3d.Coordinate()
Coordinate77.setPoint([0.2,0.15,0,0.3,0.3,0])

IndexedLineSet76.setCoord(Coordinate77)

Shape73.setGeometry(IndexedLineSet76)

HAnimSegment70.addChildren(Shape73)

HAnimJoint69.addChildren(HAnimSegment70)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("l_metacarpophalangeal_1")
HAnimJoint78.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint78.setCenter([0.3,0.3,0])
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("l_carpal_proximal_phalanx_1")
HAnimSegment79.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform80 = x3d.Transform()
Transform80.setTranslation([0.3,0.3,0])
Shape81 = x3d.Shape()
Shape81.setUSE("HAnimJointShape")

Transform80.addChild(Shape81)

HAnimSegment79.addChildren(Transform80)
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material()
Material84.setEmissiveColor([1,1,1])

Appearance83.setMaterial(Material84)

Shape82.setAppearance(Appearance83)
IndexedLineSet85 = x3d.IndexedLineSet()
IndexedLineSet85.setDEF("MCP11toIP1")
IndexedLineSet85.setCoordIndex([0,1])
Coordinate86 = x3d.Coordinate()
Coordinate86.setPoint([0.3,0.3,0,0.35,0.4,0])

IndexedLineSet85.setCoord(Coordinate86)

Shape82.setGeometry(IndexedLineSet85)

HAnimSegment79.addChildren(Shape82)

HAnimJoint78.addChildren(HAnimSegment79)
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.setName("l_carpal_interphalangeal_1")
HAnimJoint87.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint87.setCenter([0.35,0.4,0])
HAnimSegment88 = x3d.HAnimSegment()
HAnimSegment88.setName("l_carpal_distal_phalanx_1")
HAnimSegment88.setDEF("hanim_l_carpal_distal_phalanx_1")
Transform89 = x3d.Transform()
Transform89.setTranslation([0.35,0.4,0])
Shape90 = x3d.Shape()
Shape90.setUSE("HAnimJointShape")

Transform89.addChild(Shape90)

HAnimSegment88.addChildren(Transform89)
Shape91 = x3d.Shape()
Appearance92 = x3d.Appearance()
Material93 = x3d.Material()
Material93.setEmissiveColor([1,1,1])

Appearance92.setMaterial(Material93)

Shape91.setAppearance(Appearance92)
IndexedLineSet94 = x3d.IndexedLineSet()
IndexedLineSet94.setDEF("fingertip_l_carpal_interphalangeal_1")
IndexedLineSet94.setCoordIndex([0,1])
Coordinate95 = x3d.Coordinate()
Coordinate95.setPoint([0.35,0.4,0,0.36,0.45,0])

IndexedLineSet94.setCoord(Coordinate95)

Shape91.setGeometry(IndexedLineSet94)

HAnimSegment88.addChildren(Shape91)

HAnimJoint87.addChildren(HAnimSegment88)

HAnimJoint78.addChildren(HAnimJoint87)

HAnimJoint69.addChildren(HAnimJoint78)

HAnimJoint52.addChildren(HAnimJoint69)

HAnimJoint30.addChildren(HAnimJoint52)
#MC2
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.setName("l_midcarpal_2")
HAnimJoint96.setDEF("hanim_l_midcarpal_2")
HAnimJoint96.setCenter([0.07,0.07,0])
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.setName("l_trapezoid")
HAnimSegment97.setDEF("hanim_l_trapezoid")
Transform98 = x3d.Transform()
Transform98.setTranslation([0.07,0.07,0])
Shape99 = x3d.Shape()
Shape99.setUSE("HAnimNewJointShape")

Transform98.addChild(Shape99)

HAnimSegment97.addChildren(Transform98)
Shape100 = x3d.Shape()
Appearance101 = x3d.Appearance()
Material102 = x3d.Material()
Material102.setEmissiveColor([1,1,1])

Appearance101.setMaterial(Material102)

Shape100.setAppearance(Appearance101)
IndexedLineSet103 = x3d.IndexedLineSet()
IndexedLineSet103.setDEF("MC2toCMC2")
IndexedLineSet103.setCoordIndex([0,1])
Coordinate104 = x3d.Coordinate()
Coordinate104.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet103.setCoord(Coordinate104)

Shape100.setGeometry(IndexedLineSet103)

HAnimSegment97.addChildren(Shape100)

HAnimJoint96.addChildren(HAnimSegment97)
#index finger
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.setName("l_carpometacarpal_2")
HAnimJoint105.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint105.setCenter([0.1,0.2,0])
HAnimSegment106 = x3d.HAnimSegment()
HAnimSegment106.setName("l_metacarpal_2")
HAnimSegment106.setDEF("hanim_l_metacarpal_2")
Transform107 = x3d.Transform()
Transform107.setTranslation([0.1,0.2,0])
Shape108 = x3d.Shape()
Shape108.setUSE("HAnimJointShape")

Transform107.addChild(Shape108)

HAnimSegment106.addChildren(Transform107)
Shape109 = x3d.Shape()
Appearance110 = x3d.Appearance()
Material111 = x3d.Material()
Material111.setEmissiveColor([1,1,1])

Appearance110.setMaterial(Material111)

Shape109.setAppearance(Appearance110)
IndexedLineSet112 = x3d.IndexedLineSet()
IndexedLineSet112.setDEF("CMC2toMCP2")
IndexedLineSet112.setCoordIndex([0,1])
Coordinate113 = x3d.Coordinate()
Coordinate113.setPoint([0.1,0.2,0,0.15,0.5,0])

IndexedLineSet112.setCoord(Coordinate113)

Shape109.setGeometry(IndexedLineSet112)

HAnimSegment106.addChildren(Shape109)

HAnimJoint105.addChildren(HAnimSegment106)
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.setName("l_metacarpophalangeal_2")
HAnimJoint114.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint114.setCenter([0.15,0.5,0])
HAnimSegment115 = x3d.HAnimSegment()
HAnimSegment115.setName("l_carpal_proximal_phalanx_2")
HAnimSegment115.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform116 = x3d.Transform()
Transform116.setTranslation([0.15,0.5,0])
Shape117 = x3d.Shape()
Shape117.setUSE("HAnimJointShape")

Transform116.addChild(Shape117)

HAnimSegment115.addChildren(Transform116)
Shape118 = x3d.Shape()
Appearance119 = x3d.Appearance()
Material120 = x3d.Material()
Material120.setEmissiveColor([1,1,1])

Appearance119.setMaterial(Material120)

Shape118.setAppearance(Appearance119)
IndexedLineSet121 = x3d.IndexedLineSet()
IndexedLineSet121.setDEF("MCP2toPIP2")
IndexedLineSet121.setCoordIndex([0,1])
Coordinate122 = x3d.Coordinate()
Coordinate122.setPoint([0.15,0.5,0,0.2,0.7,0])

IndexedLineSet121.setCoord(Coordinate122)

Shape118.setGeometry(IndexedLineSet121)

HAnimSegment115.addChildren(Shape118)

HAnimJoint114.addChildren(HAnimSegment115)
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint123.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint123.setCenter([0.2,0.7,0])
HAnimSegment124 = x3d.HAnimSegment()
HAnimSegment124.setName("l_carpal_middle_phalanx_2")
HAnimSegment124.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform125 = x3d.Transform()
Transform125.setTranslation([0.2,0.7,0])
Shape126 = x3d.Shape()
Shape126.setUSE("HAnimJointShape")

Transform125.addChild(Shape126)

HAnimSegment124.addChildren(Transform125)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance()
Material129 = x3d.Material()
Material129.setEmissiveColor([1,1,1])

Appearance128.setMaterial(Material129)

Shape127.setAppearance(Appearance128)
IndexedLineSet130 = x3d.IndexedLineSet()
IndexedLineSet130.setDEF("PIP2toDIP2")
IndexedLineSet130.setCoordIndex([0,1])
Coordinate131 = x3d.Coordinate()
Coordinate131.setPoint([0.2,0.7,0,0.24,0.87,0])

IndexedLineSet130.setCoord(Coordinate131)

Shape127.setGeometry(IndexedLineSet130)

HAnimSegment124.addChildren(Shape127)

HAnimJoint123.addChildren(HAnimSegment124)
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint132.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint132.setCenter([0.24,0.87,0])
HAnimSegment133 = x3d.HAnimSegment()
HAnimSegment133.setName("l_carpal_distal_phalanx_2")
HAnimSegment133.setDEF("hanim_l_carpal_distal_phalanx_2")
Transform134 = x3d.Transform()
Transform134.setTranslation([0.24,0.87,0])
Shape135 = x3d.Shape()
Shape135.setUSE("HAnimJointShape")

Transform134.addChild(Shape135)

HAnimSegment133.addChildren(Transform134)
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()
Material138.setEmissiveColor([1,1,1])

Appearance137.setMaterial(Material138)

Shape136.setAppearance(Appearance137)
IndexedLineSet139 = x3d.IndexedLineSet()
IndexedLineSet139.setDEF("fingertip_l_carpal_distal_interphalangeal_2")
IndexedLineSet139.setCoordIndex([0,1])
Coordinate140 = x3d.Coordinate()
Coordinate140.setPoint([0.24,0.87,0,0.26,0.93,0])

IndexedLineSet139.setCoord(Coordinate140)

Shape136.setGeometry(IndexedLineSet139)

HAnimSegment133.addChildren(Shape136)

HAnimJoint132.addChildren(HAnimSegment133)

HAnimJoint123.addChildren(HAnimJoint132)

HAnimJoint114.addChildren(HAnimJoint123)

HAnimJoint105.addChildren(HAnimJoint114)

HAnimJoint96.addChildren(HAnimJoint105)

HAnimJoint30.addChildren(HAnimJoint96)
#MC3
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.setName("l_midcarpal_3")
HAnimJoint141.setDEF("hanim_l_midcarpal_3")
HAnimJoint141.setCenter([0,0.07,0])
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.setName("l_capitate")
HAnimSegment142.setDEF("hanim_l_capitate")
Transform143 = x3d.Transform()
Transform143.setTranslation([0,0.07,0])
Shape144 = x3d.Shape()
Shape144.setUSE("HAnimNewJointShape")

Transform143.addChild(Shape144)

HAnimSegment142.addChildren(Transform143)
Shape145 = x3d.Shape()
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.setEmissiveColor([1,1,1])

Appearance146.setMaterial(Material147)

Shape145.setAppearance(Appearance146)
IndexedLineSet148 = x3d.IndexedLineSet()
IndexedLineSet148.setDEF("MC3toCMC3")
IndexedLineSet148.setCoordIndex([0,1])
Coordinate149 = x3d.Coordinate()
Coordinate149.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet148.setCoord(Coordinate149)

Shape145.setGeometry(IndexedLineSet148)

HAnimSegment142.addChildren(Shape145)

HAnimJoint141.addChildren(HAnimSegment142)
#Middle fingle
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setName("l_carpometacarpal_3")
HAnimJoint150.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint150.setCenter([0,0.2,0])
HAnimSegment151 = x3d.HAnimSegment()
HAnimSegment151.setName("l_metacarpal_3")
HAnimSegment151.setDEF("hanim_l_metacarpal_3")
Transform152 = x3d.Transform()
Transform152.setTranslation([0,0.2,0])
Shape153 = x3d.Shape()
Shape153.setUSE("HAnimJointShape")

Transform152.addChild(Shape153)

HAnimSegment151.addChildren(Transform152)
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.setEmissiveColor([1,1,1])

Appearance155.setMaterial(Material156)

Shape154.setAppearance(Appearance155)
IndexedLineSet157 = x3d.IndexedLineSet()
IndexedLineSet157.setDEF("CMC3toMCP3")
IndexedLineSet157.setCoordIndex([0,1])
Coordinate158 = x3d.Coordinate()
Coordinate158.setPoint([0,0.2,0,0.03,0.5,0])

IndexedLineSet157.setCoord(Coordinate158)

Shape154.setGeometry(IndexedLineSet157)

HAnimSegment151.addChildren(Shape154)

HAnimJoint150.addChildren(HAnimSegment151)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("l_metacarpophalangeal_3")
HAnimJoint159.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint159.setCenter([0.03,0.5,0])
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.setName("l_carpal_proximal_phalanx_3")
HAnimSegment160.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform161 = x3d.Transform()
Transform161.setTranslation([0.03,0.5,0])
Shape162 = x3d.Shape()
Shape162.setUSE("HAnimJointShape")

Transform161.addChild(Shape162)

HAnimSegment160.addChildren(Transform161)
Shape163 = x3d.Shape()
Appearance164 = x3d.Appearance()
Material165 = x3d.Material()
Material165.setEmissiveColor([1,1,1])

Appearance164.setMaterial(Material165)

Shape163.setAppearance(Appearance164)
IndexedLineSet166 = x3d.IndexedLineSet()
IndexedLineSet166.setDEF("MCP3toPIP3")
IndexedLineSet166.setCoordIndex([0,1])
Coordinate167 = x3d.Coordinate()
Coordinate167.setPoint([0.03,0.5,0,0.05,0.75,0])

IndexedLineSet166.setCoord(Coordinate167)

Shape163.setGeometry(IndexedLineSet166)

HAnimSegment160.addChildren(Shape163)

HAnimJoint159.addChildren(HAnimSegment160)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint168.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint168.setCenter([0.05,0.75,0])
HAnimSegment169 = x3d.HAnimSegment()
HAnimSegment169.setName("l_carpal_middle_phalanx_3")
HAnimSegment169.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform170 = x3d.Transform()
Transform170.setTranslation([0.05,0.75,0])
Shape171 = x3d.Shape()
Shape171.setUSE("HAnimJointShape")

Transform170.addChild(Shape171)

HAnimSegment169.addChildren(Transform170)
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()
Material174.setEmissiveColor([1,1,1])

Appearance173.setMaterial(Material174)

Shape172.setAppearance(Appearance173)
IndexedLineSet175 = x3d.IndexedLineSet()
IndexedLineSet175.setDEF("PIP3toDIP3")
IndexedLineSet175.setCoordIndex([0,1])
Coordinate176 = x3d.Coordinate()
Coordinate176.setPoint([0.05,0.75,0,0.08,0.96,0])

IndexedLineSet175.setCoord(Coordinate176)

Shape172.setGeometry(IndexedLineSet175)

HAnimSegment169.addChildren(Shape172)

HAnimJoint168.addChildren(HAnimSegment169)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint177.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint177.setCenter([0.08,0.96,0])
HAnimSegment178 = x3d.HAnimSegment()
HAnimSegment178.setName("l_carpal_distal_phalanx_3")
HAnimSegment178.setDEF("hanim_l_carpal_distal_phalanx_3")
Transform179 = x3d.Transform()
Transform179.setTranslation([0.08,0.96,0])
Shape180 = x3d.Shape()
Shape180.setUSE("HAnimJointShape")

Transform179.addChild(Shape180)

HAnimSegment178.addChildren(Transform179)
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.setEmissiveColor([1,1,1])

Appearance182.setMaterial(Material183)

Shape181.setAppearance(Appearance182)
IndexedLineSet184 = x3d.IndexedLineSet()
IndexedLineSet184.setDEF("fingertip_l_carpal_distal_interphalangeal_3")
IndexedLineSet184.setCoordIndex([0,1])
Coordinate185 = x3d.Coordinate()
Coordinate185.setPoint([0.08,0.96,0,0.09,1.05,0])

IndexedLineSet184.setCoord(Coordinate185)

Shape181.setGeometry(IndexedLineSet184)

HAnimSegment178.addChildren(Shape181)

HAnimJoint177.addChildren(HAnimSegment178)

HAnimJoint168.addChildren(HAnimJoint177)

HAnimJoint159.addChildren(HAnimJoint168)

HAnimJoint150.addChildren(HAnimJoint159)

HAnimJoint141.addChildren(HAnimJoint150)

HAnimJoint30.addChildren(HAnimJoint141)
#MC45
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.setName("l_midcarpal_4_5")
HAnimJoint186.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint186.setCenter([-0.1,0.1,0])
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.setName("l_hamate")
HAnimSegment187.setDEF("hanim_l_hamate")
Transform188 = x3d.Transform()
Transform188.setTranslation([-0.1,0.1,0])
Shape189 = x3d.Shape()
Shape189.setUSE("HAnimNewJointShape")

Transform188.addChild(Shape189)

HAnimSegment187.addChildren(Transform188)
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.setEmissiveColor([1,1,1])

Appearance191.setMaterial(Material192)

Shape190.setAppearance(Appearance191)
IndexedLineSet193 = x3d.IndexedLineSet()
IndexedLineSet193.setDEF("MC45toCMC4")
IndexedLineSet193.setCoordIndex([0,1])
Coordinate194 = x3d.Coordinate()
Coordinate194.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet193.setCoord(Coordinate194)

Shape190.setGeometry(IndexedLineSet193)

HAnimSegment187.addChildren(Shape190)
Shape195 = x3d.Shape()
Appearance196 = x3d.Appearance()
Material197 = x3d.Material()
Material197.setEmissiveColor([1,1,1])

Appearance196.setMaterial(Material197)

Shape195.setAppearance(Appearance196)
IndexedLineSet198 = x3d.IndexedLineSet()
IndexedLineSet198.setDEF("MC45toCMC5")
IndexedLineSet198.setCoordIndex([0,1])
Coordinate199 = x3d.Coordinate()
Coordinate199.setPoint([-0.1,0.1,0,-0.15,0.17,0])

IndexedLineSet198.setCoord(Coordinate199)

Shape195.setGeometry(IndexedLineSet198)

HAnimSegment187.addChildren(Shape195)

HAnimJoint186.addChildren(HAnimSegment187)
#ring finger
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.setName("l_carpometacarpal_4")
HAnimJoint200.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint200.setCenter([-0.1,0.2,0])
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.setName("l_metacarpal_4")
HAnimSegment201.setDEF("hanim_l_metacarpal_4")
Transform202 = x3d.Transform()
Transform202.setTranslation([-0.1,0.2,0])
Shape203 = x3d.Shape()
Shape203.setUSE("HAnimJointShape")

Transform202.addChild(Shape203)

HAnimSegment201.addChildren(Transform202)
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.setEmissiveColor([1,1,1])

Appearance205.setMaterial(Material206)

Shape204.setAppearance(Appearance205)
IndexedLineSet207 = x3d.IndexedLineSet()
IndexedLineSet207.setDEF("CMC4toMCP4")
IndexedLineSet207.setCoordIndex([0,1])
Coordinate208 = x3d.Coordinate()
Coordinate208.setPoint([-0.1,0.2,0,-0.1,0.47,0])

IndexedLineSet207.setCoord(Coordinate208)

Shape204.setGeometry(IndexedLineSet207)

HAnimSegment201.addChildren(Shape204)

HAnimJoint200.addChildren(HAnimSegment201)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.setName("l_metacarpophalangeal_4")
HAnimJoint209.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint209.setCenter([-0.1,0.47,0])
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.setName("l_carpal_proximal_phalanx_4")
HAnimSegment210.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform211 = x3d.Transform()
Transform211.setTranslation([-0.1,0.47,0])
Shape212 = x3d.Shape()
Shape212.setUSE("HAnimJointShape")

Transform211.addChild(Shape212)

HAnimSegment210.addChildren(Transform211)
Shape213 = x3d.Shape()
Appearance214 = x3d.Appearance()
Material215 = x3d.Material()
Material215.setEmissiveColor([1,1,1])

Appearance214.setMaterial(Material215)

Shape213.setAppearance(Appearance214)
IndexedLineSet216 = x3d.IndexedLineSet()
IndexedLineSet216.setDEF("MCP4toPIP4")
IndexedLineSet216.setCoordIndex([0,1])
Coordinate217 = x3d.Coordinate()
Coordinate217.setPoint([-0.1,0.47,0,-0.1,0.7,0])

IndexedLineSet216.setCoord(Coordinate217)

Shape213.setGeometry(IndexedLineSet216)

HAnimSegment210.addChildren(Shape213)

HAnimJoint209.addChildren(HAnimSegment210)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint218.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint218.setCenter([-0.1,0.7,0])
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.setName("l_carpal_middle_phalanx_4")
HAnimSegment219.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform220 = x3d.Transform()
Transform220.setTranslation([-0.1,0.7,0])
Shape221 = x3d.Shape()
Shape221.setUSE("HAnimJointShape")

Transform220.addChild(Shape221)

HAnimSegment219.addChildren(Transform220)
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
Material224 = x3d.Material()
Material224.setEmissiveColor([1,1,1])

Appearance223.setMaterial(Material224)

Shape222.setAppearance(Appearance223)
IndexedLineSet225 = x3d.IndexedLineSet()
IndexedLineSet225.setDEF("PIP4toDIP4")
IndexedLineSet225.setCoordIndex([0,1])
Coordinate226 = x3d.Coordinate()
Coordinate226.setPoint([-0.1,0.7,0,-0.1,0.93,0])

IndexedLineSet225.setCoord(Coordinate226)

Shape222.setGeometry(IndexedLineSet225)

HAnimSegment219.addChildren(Shape222)

HAnimJoint218.addChildren(HAnimSegment219)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint227.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint227.setCenter([-0.1,0.93,0])
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.setName("l_carpal_distal_phalanx_4")
HAnimSegment228.setDEF("hanim_l_carpal_distal_phalanx_4")
Transform229 = x3d.Transform()
Transform229.setTranslation([-0.1,0.93,0])
Shape230 = x3d.Shape()
Shape230.setUSE("HAnimJointShape")

Transform229.addChild(Shape230)

HAnimSegment228.addChildren(Transform229)
Shape231 = x3d.Shape()
Appearance232 = x3d.Appearance()
Material233 = x3d.Material()
Material233.setEmissiveColor([1,1,1])

Appearance232.setMaterial(Material233)

Shape231.setAppearance(Appearance232)
IndexedLineSet234 = x3d.IndexedLineSet()
IndexedLineSet234.setDEF("fingertip_l_carpal_distal_interphalangeal_4")
IndexedLineSet234.setCoordIndex([0,1])
Coordinate235 = x3d.Coordinate()
Coordinate235.setPoint([-0.1,0.93,0,-0.1,1,0])

IndexedLineSet234.setCoord(Coordinate235)

Shape231.setGeometry(IndexedLineSet234)

HAnimSegment228.addChildren(Shape231)

HAnimJoint227.addChildren(HAnimSegment228)

HAnimJoint218.addChildren(HAnimJoint227)

HAnimJoint209.addChildren(HAnimJoint218)

HAnimJoint200.addChildren(HAnimJoint209)

HAnimJoint186.addChildren(HAnimJoint200)
#pinky finger
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.setName("l_carpometacarpal_5")
HAnimJoint236.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint236.setCenter([-0.15,0.17,0])
HAnimSegment237 = x3d.HAnimSegment()
HAnimSegment237.setName("l_metacarpal_5")
HAnimSegment237.setDEF("hanim_l_metacarpal_5")
Transform238 = x3d.Transform()
Transform238.setTranslation([-0.15,0.17,0])
Shape239 = x3d.Shape()
Shape239.setUSE("HAnimJointShape")

Transform238.addChild(Shape239)

HAnimSegment237.addChildren(Transform238)
Shape240 = x3d.Shape()
Appearance241 = x3d.Appearance()
Material242 = x3d.Material()
Material242.setEmissiveColor([1,1,1])

Appearance241.setMaterial(Material242)

Shape240.setAppearance(Appearance241)
IndexedLineSet243 = x3d.IndexedLineSet()
IndexedLineSet243.setDEF("CMC5toMCP5")
IndexedLineSet243.setCoordIndex([0,1])
Coordinate244 = x3d.Coordinate()
Coordinate244.setPoint([-0.15,0.17,0,-0.2,0.4,0])

IndexedLineSet243.setCoord(Coordinate244)

Shape240.setGeometry(IndexedLineSet243)

HAnimSegment237.addChildren(Shape240)

HAnimJoint236.addChildren(HAnimSegment237)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.setName("l_metacarpophalangeal_5")
HAnimJoint245.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint245.setCenter([-0.2,0.4,0])
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.setName("l_carpal_proximal_phalanx_5")
HAnimSegment246.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform247 = x3d.Transform()
Transform247.setTranslation([-0.2,0.4,0])
Shape248 = x3d.Shape()
Shape248.setUSE("HAnimJointShape")

Transform247.addChild(Shape248)

HAnimSegment246.addChildren(Transform247)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.setEmissiveColor([1,1,1])

Appearance250.setMaterial(Material251)

Shape249.setAppearance(Appearance250)
IndexedLineSet252 = x3d.IndexedLineSet()
IndexedLineSet252.setDEF("MCP5toPIP5")
IndexedLineSet252.setCoordIndex([0,1])
Coordinate253 = x3d.Coordinate()
Coordinate253.setPoint([-0.2,0.4,0,-0.23,0.63,0])

IndexedLineSet252.setCoord(Coordinate253)

Shape249.setGeometry(IndexedLineSet252)

HAnimSegment246.addChildren(Shape249)

HAnimJoint245.addChildren(HAnimSegment246)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint254.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint254.setCenter([-0.23,0.63,0])
HAnimSegment255 = x3d.HAnimSegment()
HAnimSegment255.setName("l_carpal_middle_phalanx_5")
HAnimSegment255.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform256 = x3d.Transform()
Transform256.setTranslation([-0.23,0.63,0])
Shape257 = x3d.Shape()
Shape257.setUSE("HAnimJointShape")

Transform256.addChild(Shape257)

HAnimSegment255.addChildren(Transform256)
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.setEmissiveColor([1,1,1])

Appearance259.setMaterial(Material260)

Shape258.setAppearance(Appearance259)
IndexedLineSet261 = x3d.IndexedLineSet()
IndexedLineSet261.setDEF("PIP5toDIP5")
IndexedLineSet261.setCoordIndex([0,1])
Coordinate262 = x3d.Coordinate()
Coordinate262.setPoint([-0.23,0.63,0,-0.25,0.79,0])

IndexedLineSet261.setCoord(Coordinate262)

Shape258.setGeometry(IndexedLineSet261)

HAnimSegment255.addChildren(Shape258)

HAnimJoint254.addChildren(HAnimSegment255)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint263.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint263.setCenter([-0.25,0.79,0])
HAnimSegment264 = x3d.HAnimSegment()
HAnimSegment264.setName("l_carpal_distal_phalanx_5")
HAnimSegment264.setDEF("hanim_l_carpal_distal_phalanx_5")
Transform265 = x3d.Transform()
Transform265.setTranslation([-0.25,0.79,0])
Shape266 = x3d.Shape()
Shape266.setUSE("HAnimJointShape")

Transform265.addChild(Shape266)

HAnimSegment264.addChildren(Transform265)
Shape267 = x3d.Shape()
Appearance268 = x3d.Appearance()
Material269 = x3d.Material()
Material269.setEmissiveColor([1,1,1])

Appearance268.setMaterial(Material269)

Shape267.setAppearance(Appearance268)
IndexedLineSet270 = x3d.IndexedLineSet()
IndexedLineSet270.setDEF("fingertip_l_carpal_distal_interphalangeal_5")
IndexedLineSet270.setCoordIndex([0,1])
Coordinate271 = x3d.Coordinate()
Coordinate271.setPoint([-0.25,0.79,0,-0.26,0.85,0])

IndexedLineSet270.setCoord(Coordinate271)

Shape267.setGeometry(IndexedLineSet270)

HAnimSegment264.addChildren(Shape267)

HAnimJoint263.addChildren(HAnimSegment264)

HAnimJoint254.addChildren(HAnimJoint263)

HAnimJoint245.addChildren(HAnimJoint254)

HAnimJoint236.addChildren(HAnimJoint245)

HAnimJoint186.addChildren(HAnimJoint236)

HAnimJoint30.addChildren(HAnimJoint186)

HAnimJoint29.addChildren(HAnimJoint30)

HAnimHumanoid26.setSkeleton(HAnimJoint29)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("hanim_humanoid_root")

HAnimHumanoid26.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid26.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid26.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid26.addJoints(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setUSE("hanim_l_radiocarpal")

HAnimHumanoid26.addJoints(HAnimJoint296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setUSE("hanim_l_capitate")

HAnimHumanoid26.setSegments(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setUSE("hanim_l_carpal")

HAnimHumanoid26.setSegments(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid26.setSegments(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid26.setSegments(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid26.setSegments(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid26.setSegments(HAnimSegment302)
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid26.setSegments(HAnimSegment303)
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid26.setSegments(HAnimSegment304)
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid26.setSegments(HAnimSegment305)
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid26.setSegments(HAnimSegment306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid26.setSegments(HAnimSegment307)
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid26.setSegments(HAnimSegment308)
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid26.setSegments(HAnimSegment309)
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid26.setSegments(HAnimSegment310)
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid26.setSegments(HAnimSegment311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid26.setSegments(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setUSE("hanim_l_hamate")

HAnimHumanoid26.setSegments(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid26.setSegments(HAnimSegment314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid26.setSegments(HAnimSegment315)
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid26.setSegments(HAnimSegment316)
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid26.setSegments(HAnimSegment317)
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid26.setSegments(HAnimSegment318)
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setUSE("hanim_l_trapezium")

HAnimHumanoid26.setSegments(HAnimSegment319)
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.setUSE("hanim_l_trapezoid")

HAnimHumanoid26.setSegments(HAnimSegment320)

Scene24.addChildren(HAnimHumanoid26)

X3D0.setScene(Scene24)
X3D0.toFileX3D("../data/HAnimModelHandLeft.new.python.x3d")
X3D0.toFileJSON("../data/HAnimModelHandLeft.new.python.json")

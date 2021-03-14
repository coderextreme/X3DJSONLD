import x3dpsail as x3d
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
meta7.setContent("13 March 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("TODO")
meta8.setContent("fix visible geometry for thumb and index finger")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("not yet to scale")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("warning")
meta10.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("info")
meta11.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("subject")
meta18.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("TODO")
meta19.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("identifier")
meta20.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("generator")
meta21.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("license")
meta22.setContent("../license.html")

head1.addMeta(meta22)

X3D0.setHead(head1)
Scene23 = x3d.Scene()
WorldInfo24 = x3d.WorldInfo()
WorldInfo24.setTitle("HAnimModelHandLeft.x3d")

Scene23.addChildren(WorldInfo24)
HAnimHumanoid25 = x3d.HAnimHumanoid()
HAnimHumanoid25.setName("Hand_Left")
HAnimHumanoid25.setDEF("hanim_Hand_Left")
HAnimHumanoid25.setLoa(4)
HAnimHumanoid25.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet26 = x3d.MetadataSet()
MetadataSet26.setName("HAnimHumanoid.info")
MetadataSet26.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString27 = x3d.MetadataString()
MetadataString27.setName("authorName")
MetadataString27.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet26.setValue(MetadataString27)

HAnimHumanoid25.setMetadata(MetadataSet26)
HAnimJoint28 = x3d.HAnimJoint()
HAnimJoint28.setName("humanoid_root")
HAnimJoint28.setDEF("hanim_humanoid_root")
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.setName("l_radiocarpal")
HAnimJoint29.setDEF("hanim_l_radiocarpal")
HAnimJoint29.setDescription("connection joint of hand to leg above")
HAnimSegment30 = x3d.HAnimSegment()
HAnimSegment30.setName("l_carpal")
HAnimSegment30.setDEF("hanim_l_carpal")
Transform31 = x3d.Transform()
Shape32 = x3d.Shape()
Shape32.setDEF("HAnimJointShape")
Sphere33 = x3d.Sphere()
Sphere33.setRadius(0.025)

Shape32.setGeometry(Sphere33)
Appearance34 = x3d.Appearance()
Appearance34.setDEF("HAnimJointAppearanceBlue")
Material35 = x3d.Material()
Material35.setDiffuseColor([0,0,1])

Appearance34.setMaterial(Material35)

Shape32.setAppearance(Appearance34)

Transform31.addChildren(Shape32)

HAnimSegment30.addChildren(Transform31)
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setEmissiveColor([1,1,1])

Appearance37.setMaterial(Material38)

Shape36.setAppearance(Appearance37)
IndexedLineSet39 = x3d.IndexedLineSet()
IndexedLineSet39.setDEF("RCToMC12")
IndexedLineSet39.setCoordIndex([0,1])
Coordinate40 = x3d.Coordinate()
Coordinate40.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet39.setCoord(Coordinate40)

Shape36.setGeometry(IndexedLineSet39)

HAnimSegment30.addChildren(Shape36)
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setEmissiveColor([1,1,1])

Appearance42.setMaterial(Material43)

Shape41.setAppearance(Appearance42)
IndexedLineSet44 = x3d.IndexedLineSet()
IndexedLineSet44.setDEF("RCToMC3")
IndexedLineSet44.setCoordIndex([0,1])
Coordinate45 = x3d.Coordinate()
Coordinate45.setPoint([0,0,0,0,0.07,0])

IndexedLineSet44.setCoord(Coordinate45)

Shape41.setGeometry(IndexedLineSet44)

HAnimSegment30.addChildren(Shape41)
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.setEmissiveColor([1,1,1])

Appearance47.setMaterial(Material48)

Shape46.setAppearance(Appearance47)
IndexedLineSet49 = x3d.IndexedLineSet()
IndexedLineSet49.setDEF("RCToMC45")
IndexedLineSet49.setCoordIndex([0,1])
Coordinate50 = x3d.Coordinate()
Coordinate50.setPoint([0,0,0,-0.1,0.1,0])

IndexedLineSet49.setCoord(Coordinate50)

Shape46.setGeometry(IndexedLineSet49)

HAnimSegment30.addChildren(Shape46)

HAnimJoint29.addChildren(HAnimSegment30)
#MC1
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.setName("l_midcarpal_1")
HAnimJoint51.setDEF("hanim_l_midcarpal_1")
HAnimJoint51.setCenter([0.1,0.1,0])
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.setName("l_trapezium")
HAnimSegment52.setDEF("hanim_l_trapezium")
Transform53 = x3d.Transform()
Transform53.setTranslation([0.1,0.1,0])
Shape54 = x3d.Shape()
Shape54.setDEF("HAnimNewJointShape")
Sphere55 = x3d.Sphere()
Sphere55.setRadius(0.025)

Shape54.setGeometry(Sphere55)
Appearance56 = x3d.Appearance()
Appearance56.setDEF("HAnimJointAppearanceRed")
Material57 = x3d.Material()
Material57.setDiffuseColor([1,0,0])

Appearance56.setMaterial(Material57)

Shape54.setAppearance(Appearance56)

Transform53.addChildren(Shape54)

HAnimSegment52.addChildren(Transform53)
Shape58 = x3d.Shape()
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.setEmissiveColor([1,1,1])

Appearance59.setMaterial(Material60)

Shape58.setAppearance(Appearance59)
IndexedLineSet61 = x3d.IndexedLineSet()
IndexedLineSet61.setDEF("MC12toCMC1")
IndexedLineSet61.setCoordIndex([0,1])
Coordinate62 = x3d.Coordinate()
Coordinate62.setPoint([0.1,0.1,0,0.2,0.15,0])

IndexedLineSet61.setCoord(Coordinate62)

Shape58.setGeometry(IndexedLineSet61)

HAnimSegment52.addChildren(Shape58)
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance()
Material65 = x3d.Material()
Material65.setEmissiveColor([1,1,1])

Appearance64.setMaterial(Material65)

Shape63.setAppearance(Appearance64)
IndexedLineSet66 = x3d.IndexedLineSet()
IndexedLineSet66.setDEF("MC1toCMC1")
IndexedLineSet66.setCoordIndex([0,1])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet66.setCoord(Coordinate67)

Shape63.setGeometry(IndexedLineSet66)

HAnimSegment52.addChildren(Shape63)

HAnimJoint51.addChildren(HAnimSegment52)
#thumb finger
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.setName("l_carpometacarpal_1")
HAnimJoint68.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint68.setCenter([0.2,0.15,0])
HAnimSegment69 = x3d.HAnimSegment()
HAnimSegment69.setName("l_metacarpal_1")
HAnimSegment69.setDEF("hanim_l_metacarpal_1")
Transform70 = x3d.Transform()
Transform70.setTranslation([0.2,0.15,0])
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimJointShape")

Transform70.addChildren(Shape71)

HAnimSegment69.addChildren(Transform70)
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setEmissiveColor([1,1,1])

Appearance73.setMaterial(Material74)

Shape72.setAppearance(Appearance73)
IndexedLineSet75 = x3d.IndexedLineSet()
IndexedLineSet75.setDEF("CMC1toMCP1")
IndexedLineSet75.setCoordIndex([0,1])
Coordinate76 = x3d.Coordinate()
Coordinate76.setPoint([0.2,0.15,0,0.3,0.3,0])

IndexedLineSet75.setCoord(Coordinate76)

Shape72.setGeometry(IndexedLineSet75)

HAnimSegment69.addChildren(Shape72)

HAnimJoint68.addChildren(HAnimSegment69)
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.setName("l_metacarpophalangeal_1")
HAnimJoint77.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint77.setCenter([0.3,0.3,0])
HAnimSegment78 = x3d.HAnimSegment()
HAnimSegment78.setName("l_carpal_proximal_phalanx_1")
HAnimSegment78.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform79 = x3d.Transform()
Transform79.setTranslation([0.3,0.3,0])
Shape80 = x3d.Shape()
Shape80.setUSE("HAnimJointShape")

Transform79.addChildren(Shape80)

HAnimSegment78.addChildren(Transform79)
Shape81 = x3d.Shape()
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.setEmissiveColor([1,1,1])

Appearance82.setMaterial(Material83)

Shape81.setAppearance(Appearance82)
IndexedLineSet84 = x3d.IndexedLineSet()
IndexedLineSet84.setDEF("MCP11toIP1")
IndexedLineSet84.setCoordIndex([0,1])
Coordinate85 = x3d.Coordinate()
Coordinate85.setPoint([0.3,0.3,0,0.35,0.4,0])

IndexedLineSet84.setCoord(Coordinate85)

Shape81.setGeometry(IndexedLineSet84)

HAnimSegment78.addChildren(Shape81)

HAnimJoint77.addChildren(HAnimSegment78)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.setName("l_carpal_interphalangeal_1")
HAnimJoint86.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint86.setCenter([0.35,0.4,0])
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.setName("l_carpal_distal_phalanx_1")
HAnimSegment87.setDEF("hanim_l_carpal_distal_phalanx_1")
Transform88 = x3d.Transform()
Transform88.setTranslation([0.35,0.4,0])
Shape89 = x3d.Shape()
Shape89.setUSE("HAnimJointShape")

Transform88.addChildren(Shape89)

HAnimSegment87.addChildren(Transform88)
Shape90 = x3d.Shape()
Appearance91 = x3d.Appearance()
Material92 = x3d.Material()
Material92.setEmissiveColor([1,1,1])

Appearance91.setMaterial(Material92)

Shape90.setAppearance(Appearance91)
IndexedLineSet93 = x3d.IndexedLineSet()
IndexedLineSet93.setDEF("fingertip_l_carpal_interphalangeal_1")
IndexedLineSet93.setCoordIndex([0,1])
Coordinate94 = x3d.Coordinate()
Coordinate94.setPoint([0.35,0.4,0,0.36,0.45,0])

IndexedLineSet93.setCoord(Coordinate94)

Shape90.setGeometry(IndexedLineSet93)

HAnimSegment87.addChildren(Shape90)

HAnimJoint86.addChildren(HAnimSegment87)

HAnimJoint77.addChildren(HAnimJoint86)

HAnimJoint68.addChildren(HAnimJoint77)

HAnimJoint51.addChildren(HAnimJoint68)

HAnimJoint29.addChildren(HAnimJoint51)
#MC2
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.setName("l_midcarpal_2")
HAnimJoint95.setDEF("hanim_l_midcarpal_2")
HAnimJoint95.setCenter([0.1,0.1,0])
HAnimSegment96 = x3d.HAnimSegment()
HAnimSegment96.setName("l_trapezoid")
HAnimSegment96.setDEF("hanim_l_trapezoid")
Transform97 = x3d.Transform()
Transform97.setTranslation([0.1,0.1,0])
Shape98 = x3d.Shape()
Shape98.setUSE("HAnimNewJointShape")

Transform97.addChildren(Shape98)

HAnimSegment96.addChildren(Transform97)
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.setEmissiveColor([1,1,1])

Appearance100.setMaterial(Material101)

Shape99.setAppearance(Appearance100)
IndexedLineSet102 = x3d.IndexedLineSet()
IndexedLineSet102.setDEF("MC2toCMC2")
IndexedLineSet102.setCoordIndex([0,1])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet102.setCoord(Coordinate103)

Shape99.setGeometry(IndexedLineSet102)

HAnimSegment96.addChildren(Shape99)

HAnimJoint95.addChildren(HAnimSegment96)
#index finger
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setName("l_carpometacarpal_2")
HAnimJoint104.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint104.setCenter([0.1,0.2,0])
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.setName("l_metacarpal_2")
HAnimSegment105.setDEF("hanim_l_metacarpal_2")
Transform106 = x3d.Transform()
Transform106.setTranslation([0.1,0.2,0])
Shape107 = x3d.Shape()
Shape107.setUSE("HAnimJointShape")

Transform106.addChildren(Shape107)

HAnimSegment105.addChildren(Transform106)
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.setEmissiveColor([1,1,1])

Appearance109.setMaterial(Material110)

Shape108.setAppearance(Appearance109)
IndexedLineSet111 = x3d.IndexedLineSet()
IndexedLineSet111.setDEF("CMC2toMCP2")
IndexedLineSet111.setCoordIndex([0,1])
Coordinate112 = x3d.Coordinate()
Coordinate112.setPoint([0.1,0.2,0,0.15,0.5,0])

IndexedLineSet111.setCoord(Coordinate112)

Shape108.setGeometry(IndexedLineSet111)

HAnimSegment105.addChildren(Shape108)

HAnimJoint104.addChildren(HAnimSegment105)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setName("l_metacarpophalangeal_2")
HAnimJoint113.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint113.setCenter([0.15,0.5,0])
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.setName("l_carpal_proximal_phalanx_2")
HAnimSegment114.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform115 = x3d.Transform()
Transform115.setTranslation([0.15,0.5,0])
Shape116 = x3d.Shape()
Shape116.setUSE("HAnimJointShape")

Transform115.addChildren(Shape116)

HAnimSegment114.addChildren(Transform115)
Shape117 = x3d.Shape()
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.setEmissiveColor([1,1,1])

Appearance118.setMaterial(Material119)

Shape117.setAppearance(Appearance118)
IndexedLineSet120 = x3d.IndexedLineSet()
IndexedLineSet120.setDEF("MCP2toPIP2")
IndexedLineSet120.setCoordIndex([0,1])
Coordinate121 = x3d.Coordinate()
Coordinate121.setPoint([0.15,0.5,0,0.2,0.7,0])

IndexedLineSet120.setCoord(Coordinate121)

Shape117.setGeometry(IndexedLineSet120)

HAnimSegment114.addChildren(Shape117)

HAnimJoint113.addChildren(HAnimSegment114)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint122.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint122.setCenter([0.2,0.7,0])
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.setName("l_carpal_middle_phalanx_2")
HAnimSegment123.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform124 = x3d.Transform()
Transform124.setTranslation([0.2,0.7,0])
Shape125 = x3d.Shape()
Shape125.setUSE("HAnimJointShape")

Transform124.addChildren(Shape125)

HAnimSegment123.addChildren(Transform124)
Shape126 = x3d.Shape()
Appearance127 = x3d.Appearance()
Material128 = x3d.Material()
Material128.setEmissiveColor([1,1,1])

Appearance127.setMaterial(Material128)

Shape126.setAppearance(Appearance127)
IndexedLineSet129 = x3d.IndexedLineSet()
IndexedLineSet129.setDEF("PIP2toDIP2")
IndexedLineSet129.setCoordIndex([0,1])
Coordinate130 = x3d.Coordinate()
Coordinate130.setPoint([0.2,0.7,0,0.24,0.87,0])

IndexedLineSet129.setCoord(Coordinate130)

Shape126.setGeometry(IndexedLineSet129)

HAnimSegment123.addChildren(Shape126)

HAnimJoint122.addChildren(HAnimSegment123)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint131.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint131.setCenter([0.24,0.87,0])
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.setName("l_carpal_distal_phalanx_2")
HAnimSegment132.setDEF("hanim_l_carpal_distal_phalanx_2")
Transform133 = x3d.Transform()
Transform133.setTranslation([0.24,0.87,0])
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimJointShape")

Transform133.addChildren(Shape134)

HAnimSegment132.addChildren(Transform133)
Shape135 = x3d.Shape()
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.setEmissiveColor([1,1,1])

Appearance136.setMaterial(Material137)

Shape135.setAppearance(Appearance136)
IndexedLineSet138 = x3d.IndexedLineSet()
IndexedLineSet138.setDEF("fingertip_l_carpal_distal_interphalangeal_2")
IndexedLineSet138.setCoordIndex([0,1])
Coordinate139 = x3d.Coordinate()
Coordinate139.setPoint([0.24,0.87,0,0.26,0.93,0])

IndexedLineSet138.setCoord(Coordinate139)

Shape135.setGeometry(IndexedLineSet138)

HAnimSegment132.addChildren(Shape135)

HAnimJoint131.addChildren(HAnimSegment132)

HAnimJoint122.addChildren(HAnimJoint131)

HAnimJoint113.addChildren(HAnimJoint122)

HAnimJoint104.addChildren(HAnimJoint113)

HAnimJoint95.addChildren(HAnimJoint104)

HAnimJoint29.addChildren(HAnimJoint95)
#MC3
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setName("l_midcarpal_3")
HAnimJoint140.setDEF("hanim_l_midcarpal_3")
HAnimJoint140.setCenter([0,0.07,0])
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.setName("l_capitate")
HAnimSegment141.setDEF("hanim_l_capitate")
Transform142 = x3d.Transform()
Transform142.setTranslation([0,0.07,0])
Shape143 = x3d.Shape()
Shape143.setUSE("HAnimNewJointShape")

Transform142.addChildren(Shape143)

HAnimSegment141.addChildren(Transform142)
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.setEmissiveColor([1,1,1])

Appearance145.setMaterial(Material146)

Shape144.setAppearance(Appearance145)
IndexedLineSet147 = x3d.IndexedLineSet()
IndexedLineSet147.setDEF("MC3toCMC3")
IndexedLineSet147.setCoordIndex([0,1])
Coordinate148 = x3d.Coordinate()
Coordinate148.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet147.setCoord(Coordinate148)

Shape144.setGeometry(IndexedLineSet147)

HAnimSegment141.addChildren(Shape144)

HAnimJoint140.addChildren(HAnimSegment141)
#Middle fingle
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setName("l_carpometacarpal_3")
HAnimJoint149.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint149.setCenter([0,0.2,0])
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.setName("l_metacarpal_3")
HAnimSegment150.setDEF("hanim_l_metacarpal_3")
Transform151 = x3d.Transform()
Transform151.setTranslation([0,0.2,0])
Shape152 = x3d.Shape()
Shape152.setUSE("HAnimJointShape")

Transform151.addChildren(Shape152)

HAnimSegment150.addChildren(Transform151)
Shape153 = x3d.Shape()
Appearance154 = x3d.Appearance()
Material155 = x3d.Material()
Material155.setEmissiveColor([1,1,1])

Appearance154.setMaterial(Material155)

Shape153.setAppearance(Appearance154)
IndexedLineSet156 = x3d.IndexedLineSet()
IndexedLineSet156.setDEF("CMC3toMCP3")
IndexedLineSet156.setCoordIndex([0,1])
Coordinate157 = x3d.Coordinate()
Coordinate157.setPoint([0,0.2,0,0.03,0.5,0])

IndexedLineSet156.setCoord(Coordinate157)

Shape153.setGeometry(IndexedLineSet156)

HAnimSegment150.addChildren(Shape153)

HAnimJoint149.addChildren(HAnimSegment150)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setName("l_metacarpophalangeal_3")
HAnimJoint158.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint158.setCenter([0.03,0.5,0])
HAnimSegment159 = x3d.HAnimSegment()
HAnimSegment159.setName("l_carpal_proximal_phalanx_3")
HAnimSegment159.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform160 = x3d.Transform()
Transform160.setTranslation([0.03,0.5,0])
Shape161 = x3d.Shape()
Shape161.setUSE("HAnimJointShape")

Transform160.addChildren(Shape161)

HAnimSegment159.addChildren(Transform160)
Shape162 = x3d.Shape()
Appearance163 = x3d.Appearance()
Material164 = x3d.Material()
Material164.setEmissiveColor([1,1,1])

Appearance163.setMaterial(Material164)

Shape162.setAppearance(Appearance163)
IndexedLineSet165 = x3d.IndexedLineSet()
IndexedLineSet165.setDEF("MCP3toPIP3")
IndexedLineSet165.setCoordIndex([0,1])
Coordinate166 = x3d.Coordinate()
Coordinate166.setPoint([0.03,0.5,0,0.05,0.75,0])

IndexedLineSet165.setCoord(Coordinate166)

Shape162.setGeometry(IndexedLineSet165)

HAnimSegment159.addChildren(Shape162)

HAnimJoint158.addChildren(HAnimSegment159)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint167.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint167.setCenter([0.05,0.75,0])
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.setName("l_carpal_middle_phalanx_3")
HAnimSegment168.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform169 = x3d.Transform()
Transform169.setTranslation([0.05,0.75,0])
Shape170 = x3d.Shape()
Shape170.setUSE("HAnimJointShape")

Transform169.addChildren(Shape170)

HAnimSegment168.addChildren(Transform169)
Shape171 = x3d.Shape()
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.setEmissiveColor([1,1,1])

Appearance172.setMaterial(Material173)

Shape171.setAppearance(Appearance172)
IndexedLineSet174 = x3d.IndexedLineSet()
IndexedLineSet174.setDEF("PIP3toDIP3")
IndexedLineSet174.setCoordIndex([0,1])
Coordinate175 = x3d.Coordinate()
Coordinate175.setPoint([0.05,0.75,0,0.08,0.96,0])

IndexedLineSet174.setCoord(Coordinate175)

Shape171.setGeometry(IndexedLineSet174)

HAnimSegment168.addChildren(Shape171)

HAnimJoint167.addChildren(HAnimSegment168)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint176.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint176.setCenter([0.08,0.96,0])
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setName("l_carpal_distal_phalanx_3")
HAnimSegment177.setDEF("hanim_l_carpal_distal_phalanx_3")
Transform178 = x3d.Transform()
Transform178.setTranslation([0.08,0.96,0])
Shape179 = x3d.Shape()
Shape179.setUSE("HAnimJointShape")

Transform178.addChildren(Shape179)

HAnimSegment177.addChildren(Transform178)
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
Material182 = x3d.Material()
Material182.setEmissiveColor([1,1,1])

Appearance181.setMaterial(Material182)

Shape180.setAppearance(Appearance181)
IndexedLineSet183 = x3d.IndexedLineSet()
IndexedLineSet183.setDEF("fingertip_l_carpal_distal_interphalangeal_3")
IndexedLineSet183.setCoordIndex([0,1])
Coordinate184 = x3d.Coordinate()
Coordinate184.setPoint([0.08,0.96,0,0.09,1.05,0])

IndexedLineSet183.setCoord(Coordinate184)

Shape180.setGeometry(IndexedLineSet183)

HAnimSegment177.addChildren(Shape180)

HAnimJoint176.addChildren(HAnimSegment177)

HAnimJoint167.addChildren(HAnimJoint176)

HAnimJoint158.addChildren(HAnimJoint167)

HAnimJoint149.addChildren(HAnimJoint158)

HAnimJoint140.addChildren(HAnimJoint149)

HAnimJoint29.addChildren(HAnimJoint140)
#MC45
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setName("l_midcarpal_4_5")
HAnimJoint185.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint185.setCenter([-0.1,0.1,0])
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.setName("l_hamate")
HAnimSegment186.setDEF("hanim_l_hamate")
Transform187 = x3d.Transform()
Transform187.setTranslation([-0.1,0.1,0])
Shape188 = x3d.Shape()
Shape188.setUSE("HAnimNewJointShape")

Transform187.addChildren(Shape188)

HAnimSegment186.addChildren(Transform187)
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.setEmissiveColor([1,1,1])

Appearance190.setMaterial(Material191)

Shape189.setAppearance(Appearance190)
IndexedLineSet192 = x3d.IndexedLineSet()
IndexedLineSet192.setDEF("MC45toCMC4")
IndexedLineSet192.setCoordIndex([0,1])
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet192.setCoord(Coordinate193)

Shape189.setGeometry(IndexedLineSet192)

HAnimSegment186.addChildren(Shape189)
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.setEmissiveColor([1,1,1])

Appearance195.setMaterial(Material196)

Shape194.setAppearance(Appearance195)
IndexedLineSet197 = x3d.IndexedLineSet()
IndexedLineSet197.setDEF("MC45toCMC5")
IndexedLineSet197.setCoordIndex([0,1])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint([-0.1,0.1,0,-0.15,0.17,0])

IndexedLineSet197.setCoord(Coordinate198)

Shape194.setGeometry(IndexedLineSet197)

HAnimSegment186.addChildren(Shape194)

HAnimJoint185.addChildren(HAnimSegment186)
#ring finger
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.setName("l_carpometacarpal_4")
HAnimJoint199.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint199.setCenter([-0.1,0.2,0])
HAnimSegment200 = x3d.HAnimSegment()
HAnimSegment200.setName("l_metacarpal_4")
HAnimSegment200.setDEF("hanim_l_metacarpal_4")
Transform201 = x3d.Transform()
Transform201.setTranslation([-0.1,0.2,0])
Shape202 = x3d.Shape()
Shape202.setUSE("HAnimJointShape")

Transform201.addChildren(Shape202)

HAnimSegment200.addChildren(Transform201)
Shape203 = x3d.Shape()
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()
Material205.setEmissiveColor([1,1,1])

Appearance204.setMaterial(Material205)

Shape203.setAppearance(Appearance204)
IndexedLineSet206 = x3d.IndexedLineSet()
IndexedLineSet206.setDEF("CMC4toMCP4")
IndexedLineSet206.setCoordIndex([0,1])
Coordinate207 = x3d.Coordinate()
Coordinate207.setPoint([-0.1,0.2,0,-0.1,0.47,0])

IndexedLineSet206.setCoord(Coordinate207)

Shape203.setGeometry(IndexedLineSet206)

HAnimSegment200.addChildren(Shape203)

HAnimJoint199.addChildren(HAnimSegment200)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.setName("l_metacarpophalangeal_4")
HAnimJoint208.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint208.setCenter([-0.1,0.47,0])
HAnimSegment209 = x3d.HAnimSegment()
HAnimSegment209.setName("l_carpal_proximal_phalanx_4")
HAnimSegment209.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform210 = x3d.Transform()
Transform210.setTranslation([-0.1,0.47,0])
Shape211 = x3d.Shape()
Shape211.setUSE("HAnimJointShape")

Transform210.addChildren(Shape211)

HAnimSegment209.addChildren(Transform210)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.setEmissiveColor([1,1,1])

Appearance213.setMaterial(Material214)

Shape212.setAppearance(Appearance213)
IndexedLineSet215 = x3d.IndexedLineSet()
IndexedLineSet215.setDEF("MCP4toPIP4")
IndexedLineSet215.setCoordIndex([0,1])
Coordinate216 = x3d.Coordinate()
Coordinate216.setPoint([-0.1,0.47,0,-0.1,0.7,0])

IndexedLineSet215.setCoord(Coordinate216)

Shape212.setGeometry(IndexedLineSet215)

HAnimSegment209.addChildren(Shape212)

HAnimJoint208.addChildren(HAnimSegment209)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint217.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint217.setCenter([-0.1,0.7,0])
HAnimSegment218 = x3d.HAnimSegment()
HAnimSegment218.setName("l_carpal_middle_phalanx_4")
HAnimSegment218.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform219 = x3d.Transform()
Transform219.setTranslation([-0.1,0.7,0])
Shape220 = x3d.Shape()
Shape220.setUSE("HAnimJointShape")

Transform219.addChildren(Shape220)

HAnimSegment218.addChildren(Transform219)
Shape221 = x3d.Shape()
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()
Material223.setEmissiveColor([1,1,1])

Appearance222.setMaterial(Material223)

Shape221.setAppearance(Appearance222)
IndexedLineSet224 = x3d.IndexedLineSet()
IndexedLineSet224.setDEF("PIP4toDIP4")
IndexedLineSet224.setCoordIndex([0,1])
Coordinate225 = x3d.Coordinate()
Coordinate225.setPoint([-0.1,0.7,0,-0.1,0.93,0])

IndexedLineSet224.setCoord(Coordinate225)

Shape221.setGeometry(IndexedLineSet224)

HAnimSegment218.addChildren(Shape221)

HAnimJoint217.addChildren(HAnimSegment218)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint226.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint226.setCenter([-0.1,0.93,0])
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.setName("l_carpal_distal_phalanx_4")
HAnimSegment227.setDEF("hanim_l_carpal_distal_phalanx_4")
Transform228 = x3d.Transform()
Transform228.setTranslation([-0.1,0.93,0])
Shape229 = x3d.Shape()
Shape229.setUSE("HAnimJointShape")

Transform228.addChildren(Shape229)

HAnimSegment227.addChildren(Transform228)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.setEmissiveColor([1,1,1])

Appearance231.setMaterial(Material232)

Shape230.setAppearance(Appearance231)
IndexedLineSet233 = x3d.IndexedLineSet()
IndexedLineSet233.setDEF("fingertip_l_carpal_distal_interphalangeal_4")
IndexedLineSet233.setCoordIndex([0,1])
Coordinate234 = x3d.Coordinate()
Coordinate234.setPoint([-0.1,0.93,0,-0.1,1,0])

IndexedLineSet233.setCoord(Coordinate234)

Shape230.setGeometry(IndexedLineSet233)

HAnimSegment227.addChildren(Shape230)

HAnimJoint226.addChildren(HAnimSegment227)

HAnimJoint217.addChildren(HAnimJoint226)

HAnimJoint208.addChildren(HAnimJoint217)

HAnimJoint199.addChildren(HAnimJoint208)

HAnimJoint185.addChildren(HAnimJoint199)
#pinky finger
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.setName("l_carpometacarpal_5")
HAnimJoint235.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint235.setCenter([-0.15,0.17,0])
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.setName("l_metacarpal_5")
HAnimSegment236.setDEF("hanim_l_metacarpal_5")
Transform237 = x3d.Transform()
Transform237.setTranslation([-0.15,0.17,0])
Shape238 = x3d.Shape()
Shape238.setUSE("HAnimJointShape")

Transform237.addChildren(Shape238)

HAnimSegment236.addChildren(Transform237)
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.setEmissiveColor([1,1,1])

Appearance240.setMaterial(Material241)

Shape239.setAppearance(Appearance240)
IndexedLineSet242 = x3d.IndexedLineSet()
IndexedLineSet242.setDEF("CMC5toMCP5")
IndexedLineSet242.setCoordIndex([0,1])
Coordinate243 = x3d.Coordinate()
Coordinate243.setPoint([-0.15,0.17,0,-0.2,0.4,0])

IndexedLineSet242.setCoord(Coordinate243)

Shape239.setGeometry(IndexedLineSet242)

HAnimSegment236.addChildren(Shape239)

HAnimJoint235.addChildren(HAnimSegment236)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.setName("l_metacarpophalangeal_5")
HAnimJoint244.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint244.setCenter([-0.2,0.4,0])
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.setName("l_carpal_proximal_phalanx_5")
HAnimSegment245.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform246 = x3d.Transform()
Transform246.setTranslation([-0.2,0.4,0])
Shape247 = x3d.Shape()
Shape247.setUSE("HAnimJointShape")

Transform246.addChildren(Shape247)

HAnimSegment245.addChildren(Transform246)
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.setEmissiveColor([1,1,1])

Appearance249.setMaterial(Material250)

Shape248.setAppearance(Appearance249)
IndexedLineSet251 = x3d.IndexedLineSet()
IndexedLineSet251.setDEF("MCP5toPIP5")
IndexedLineSet251.setCoordIndex([0,1])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint([-0.2,0.4,0,-0.23,0.63,0])

IndexedLineSet251.setCoord(Coordinate252)

Shape248.setGeometry(IndexedLineSet251)

HAnimSegment245.addChildren(Shape248)

HAnimJoint244.addChildren(HAnimSegment245)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint253.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint253.setCenter([-0.23,0.63,0])
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.setName("l_carpal_middle_phalanx_5")
HAnimSegment254.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform255 = x3d.Transform()
Transform255.setTranslation([-0.23,0.63,0])
Shape256 = x3d.Shape()
Shape256.setUSE("HAnimJointShape")

Transform255.addChildren(Shape256)

HAnimSegment254.addChildren(Transform255)
Shape257 = x3d.Shape()
Appearance258 = x3d.Appearance()
Material259 = x3d.Material()
Material259.setEmissiveColor([1,1,1])

Appearance258.setMaterial(Material259)

Shape257.setAppearance(Appearance258)
IndexedLineSet260 = x3d.IndexedLineSet()
IndexedLineSet260.setDEF("PIP5toDIP5")
IndexedLineSet260.setCoordIndex([0,1])
Coordinate261 = x3d.Coordinate()
Coordinate261.setPoint([-0.23,0.63,0,-0.25,0.79,0])

IndexedLineSet260.setCoord(Coordinate261)

Shape257.setGeometry(IndexedLineSet260)

HAnimSegment254.addChildren(Shape257)

HAnimJoint253.addChildren(HAnimSegment254)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint262.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint262.setCenter([-0.25,0.79,0])
HAnimSegment263 = x3d.HAnimSegment()
HAnimSegment263.setName("l_carpal_distal_phalanx_5")
HAnimSegment263.setDEF("hanim_l_carpal_distal_phalanx_5")
Transform264 = x3d.Transform()
Transform264.setTranslation([-0.25,0.79,0])
Shape265 = x3d.Shape()
Shape265.setUSE("HAnimJointShape")

Transform264.addChildren(Shape265)

HAnimSegment263.addChildren(Transform264)
Shape266 = x3d.Shape()
Appearance267 = x3d.Appearance()
Material268 = x3d.Material()
Material268.setEmissiveColor([1,1,1])

Appearance267.setMaterial(Material268)

Shape266.setAppearance(Appearance267)
IndexedLineSet269 = x3d.IndexedLineSet()
IndexedLineSet269.setDEF("fingertip_l_carpal_distal_interphalangeal_5")
IndexedLineSet269.setCoordIndex([0,1])
Coordinate270 = x3d.Coordinate()
Coordinate270.setPoint([-0.25,0.79,0,-0.26,0.85,0])

IndexedLineSet269.setCoord(Coordinate270)

Shape266.setGeometry(IndexedLineSet269)

HAnimSegment263.addChildren(Shape266)

HAnimJoint262.addChildren(HAnimSegment263)

HAnimJoint253.addChildren(HAnimJoint262)

HAnimJoint244.addChildren(HAnimJoint253)

HAnimJoint235.addChildren(HAnimJoint244)

HAnimJoint185.addChildren(HAnimJoint235)

HAnimJoint29.addChildren(HAnimJoint185)

HAnimJoint28.addChildren(HAnimJoint29)

HAnimHumanoid25.setSkeleton(HAnimJoint28)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setUSE("hanim_humanoid_root")

HAnimHumanoid25.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid25.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid25.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid25.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid25.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid25.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid25.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid25.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid25.addJoints(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid25.addJoints(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid25.addJoints(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid25.addJoints(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setUSE("hanim_l_radiocarpal")

HAnimHumanoid25.addJoints(HAnimJoint295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setUSE("hanim_l_capitate")

HAnimHumanoid25.addSegments(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setUSE("hanim_l_carpal")

HAnimHumanoid25.addSegments(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid25.addSegments(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setUSE("hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setUSE("hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setUSE("hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment302)
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment303)
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment304)
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment305)
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid25.addSegments(HAnimSegment307)
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment308)
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment309)
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment310)
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setUSE("hanim_l_hamate")

HAnimHumanoid25.addSegments(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid25.addSegments(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid25.addSegments(HAnimSegment314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid25.addSegments(HAnimSegment315)
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid25.addSegments(HAnimSegment316)
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid25.addSegments(HAnimSegment317)
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.setUSE("hanim_l_trapezium")

HAnimHumanoid25.addSegments(HAnimSegment318)
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setUSE("hanim_l_trapezoid")

HAnimHumanoid25.addSegments(HAnimSegment319)

Scene23.addChildren(HAnimHumanoid25)

X3D0.setScene(Scene23)
X3D0.toFileX3D("../data/HAnimModelHandLeft_RoundTrip.x3d")

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
meta3.setContent("HAnimModelHandRight.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Right hand using high-fidelity definitions for HAnim version 2.0")

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
meta20.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d")

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
WorldInfo24.setTitle("HAnimModelHandRight.x3d")

Scene23.addChildren(WorldInfo24)
HAnimHumanoid25 = x3d.HAnimHumanoid()
HAnimHumanoid25.setName("Hand_Right")
HAnimHumanoid25.setDEF("hanim_Hand_Right")
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
HAnimJoint29.setName("r_radiocarpal")
HAnimJoint29.setDEF("hanim_r_radiocarpal")
HAnimJoint29.setDescription("connection joint of hand to leg above")
HAnimSegment30 = x3d.HAnimSegment()
HAnimSegment30.setName("r_carpal")
HAnimSegment30.setDEF("hanim_r_carpal")
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
Coordinate40.setPoint([0,0,0,-0.1,0.1,0])

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
Coordinate50.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet49.setCoord(Coordinate50)

Shape46.setGeometry(IndexedLineSet49)

HAnimSegment30.addChildren(Shape46)

HAnimJoint29.addChildren(HAnimSegment30)
#MC1
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.setName("r_midcarpal_1")
HAnimJoint51.setDEF("hanim_r_midcarpal_1")
HAnimJoint51.setCenter([-0.1,0.1,0])
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.setName("r_trapezium")
HAnimSegment52.setDEF("hanim_r_trapezium")
Transform53 = x3d.Transform()
Transform53.setTranslation([-0.1,0.1,0])
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
Coordinate62.setPoint([-0.1,0.1,0,-0.2,0.15,0])

IndexedLineSet61.setCoord(Coordinate62)

Shape58.setGeometry(IndexedLineSet61)

HAnimSegment52.addChildren(Shape58)

HAnimJoint51.addChildren(HAnimSegment52)
#thumb finger
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.setName("r_carpometacarpal_1")
HAnimJoint63.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint63.setCenter([-0.2,0.15,0])
HAnimSegment64 = x3d.HAnimSegment()
HAnimSegment64.setName("r_metacarpal_1")
HAnimSegment64.setDEF("hanim_r_metacarpal_1")
Transform65 = x3d.Transform()
Transform65.setTranslation([-0.2,0.15,0])
Shape66 = x3d.Shape()
Shape66.setUSE("HAnimJointShape")

Transform65.addChildren(Shape66)

HAnimSegment64.addChildren(Transform65)
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.setEmissiveColor([1,1,1])

Appearance68.setMaterial(Material69)

Shape67.setAppearance(Appearance68)
IndexedLineSet70 = x3d.IndexedLineSet()
IndexedLineSet70.setDEF("CMC1toMCP1xxx")
IndexedLineSet70.setCoordIndex([0,1])
Coordinate71 = x3d.Coordinate()
Coordinate71.setPoint([-0.2,0.15,0,-0.3,0.3,0])

IndexedLineSet70.setCoord(Coordinate71)

Shape67.setGeometry(IndexedLineSet70)

HAnimSegment64.addChildren(Shape67)

HAnimJoint63.addChildren(HAnimSegment64)
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.setName("r_metacarpophalangeal_1")
HAnimJoint72.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint72.setCenter([-0.3,0.3,0])
HAnimSegment73 = x3d.HAnimSegment()
HAnimSegment73.setName("r_carpal_proximal_phalanx_1")
HAnimSegment73.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform74 = x3d.Transform()
Transform74.setTranslation([-0.3,0.3,0])
Shape75 = x3d.Shape()
Shape75.setUSE("HAnimJointShape")

Transform74.addChildren(Shape75)

HAnimSegment73.addChildren(Transform74)
Shape76 = x3d.Shape()
Appearance77 = x3d.Appearance()
Material78 = x3d.Material()
Material78.setEmissiveColor([1,1,1])

Appearance77.setMaterial(Material78)

Shape76.setAppearance(Appearance77)
IndexedLineSet79 = x3d.IndexedLineSet()
IndexedLineSet79.setDEF("MCP11toIP1")
IndexedLineSet79.setCoordIndex([0,1])
Coordinate80 = x3d.Coordinate()
Coordinate80.setPoint([-0.3,0.3,0,-0.35,0.4,0])

IndexedLineSet79.setCoord(Coordinate80)

Shape76.setGeometry(IndexedLineSet79)

HAnimSegment73.addChildren(Shape76)

HAnimJoint72.addChildren(HAnimSegment73)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.setName("r_carpal_interphalangeal_1")
HAnimJoint81.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint81.setCenter([-0.35,0.4,0])
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.setName("r_carpal_distal_phalanx_1")
HAnimSegment82.setDEF("hanim_r_carpal_distal_phalanx_1")
Transform83 = x3d.Transform()
Transform83.setTranslation([-0.35,0.4,0])
Shape84 = x3d.Shape()
Shape84.setUSE("HAnimJointShape")

Transform83.addChildren(Shape84)

HAnimSegment82.addChildren(Transform83)
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance()
Material87 = x3d.Material()
Material87.setEmissiveColor([1,1,1])

Appearance86.setMaterial(Material87)

Shape85.setAppearance(Appearance86)
IndexedLineSet88 = x3d.IndexedLineSet()
IndexedLineSet88.setDEF("fingertip_r_carpal_interphalangeal_1")
IndexedLineSet88.setCoordIndex([0,1])
Coordinate89 = x3d.Coordinate()
Coordinate89.setPoint([-0.35,0.4,0,-0.36,0.45,0])

IndexedLineSet88.setCoord(Coordinate89)

Shape85.setGeometry(IndexedLineSet88)

HAnimSegment82.addChildren(Shape85)

HAnimJoint81.addChildren(HAnimSegment82)

HAnimJoint72.addChildren(HAnimJoint81)

HAnimJoint63.addChildren(HAnimJoint72)

HAnimJoint51.addChildren(HAnimJoint63)

HAnimJoint29.addChildren(HAnimJoint51)
#MC2
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.setName("r_midcarpal_2")
HAnimJoint90.setDEF("hanim_r_midcarpal_2")
HAnimJoint90.setCenter([-0.1,0.1,0])
HAnimSegment91 = x3d.HAnimSegment()
HAnimSegment91.setName("r_trapezoid")
HAnimSegment91.setDEF("hanim_r_trapezoid")
Transform92 = x3d.Transform()
Transform92.setTranslation([-0.1,0.1,0])
Shape93 = x3d.Shape()
Shape93.setUSE("HAnimNewJointShape")

Transform92.addChildren(Shape93)

HAnimSegment91.addChildren(Transform92)
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.setEmissiveColor([1,1,1])

Appearance95.setMaterial(Material96)

Shape94.setAppearance(Appearance95)
IndexedLineSet97 = x3d.IndexedLineSet()
IndexedLineSet97.setDEF("MC12toCMC2")
IndexedLineSet97.setCoordIndex([0,1])
Coordinate98 = x3d.Coordinate()
Coordinate98.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet97.setCoord(Coordinate98)

Shape94.setGeometry(IndexedLineSet97)

HAnimSegment91.addChildren(Shape94)

HAnimJoint90.addChildren(HAnimSegment91)
#index finger
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.setName("r_carpometacarpal_2")
HAnimJoint99.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint99.setCenter([-0.1,0.2,0])
HAnimSegment100 = x3d.HAnimSegment()
HAnimSegment100.setName("r_metacarpal_2")
HAnimSegment100.setDEF("hanim_r_metacarpal_2")
Transform101 = x3d.Transform()
Transform101.setTranslation([-0.1,0.2,0])
Shape102 = x3d.Shape()
Shape102.setUSE("HAnimJointShape")

Transform101.addChildren(Shape102)

HAnimSegment100.addChildren(Transform101)
Shape103 = x3d.Shape()
Appearance104 = x3d.Appearance()
Material105 = x3d.Material()
Material105.setEmissiveColor([1,1,1])

Appearance104.setMaterial(Material105)

Shape103.setAppearance(Appearance104)
IndexedLineSet106 = x3d.IndexedLineSet()
IndexedLineSet106.setDEF("CMC2toMCP2")
IndexedLineSet106.setCoordIndex([0,1])
Coordinate107 = x3d.Coordinate()
Coordinate107.setPoint([-0.1,0.2,0,-0.15,0.5,0])

IndexedLineSet106.setCoord(Coordinate107)

Shape103.setGeometry(IndexedLineSet106)

HAnimSegment100.addChildren(Shape103)

HAnimJoint99.addChildren(HAnimSegment100)
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.setName("r_metacarpophalangeal_2")
HAnimJoint108.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint108.setCenter([-0.15,0.5,0])
HAnimSegment109 = x3d.HAnimSegment()
HAnimSegment109.setName("r_carpal_proximal_phalanx_2")
HAnimSegment109.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform110 = x3d.Transform()
Transform110.setTranslation([-0.15,0.5,0])
Shape111 = x3d.Shape()
Shape111.setUSE("HAnimJointShape")

Transform110.addChildren(Shape111)

HAnimSegment109.addChildren(Transform110)
Shape112 = x3d.Shape()
Appearance113 = x3d.Appearance()
Material114 = x3d.Material()
Material114.setEmissiveColor([1,1,1])

Appearance113.setMaterial(Material114)

Shape112.setAppearance(Appearance113)
IndexedLineSet115 = x3d.IndexedLineSet()
IndexedLineSet115.setDEF("MCP2toPIP2")
IndexedLineSet115.setCoordIndex([0,1])
Coordinate116 = x3d.Coordinate()
Coordinate116.setPoint([-0.15,0.5,0,-0.2,0.7,0])

IndexedLineSet115.setCoord(Coordinate116)

Shape112.setGeometry(IndexedLineSet115)

HAnimSegment109.addChildren(Shape112)

HAnimJoint108.addChildren(HAnimSegment109)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint117.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint117.setCenter([-0.2,0.7,0])
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.setName("r_carpal_middle_phalanx_2")
HAnimSegment118.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform119 = x3d.Transform()
Transform119.setTranslation([-0.2,0.7,0])
Shape120 = x3d.Shape()
Shape120.setUSE("HAnimJointShape")

Transform119.addChildren(Shape120)

HAnimSegment118.addChildren(Transform119)
Shape121 = x3d.Shape()
Appearance122 = x3d.Appearance()
Material123 = x3d.Material()
Material123.setEmissiveColor([1,1,1])

Appearance122.setMaterial(Material123)

Shape121.setAppearance(Appearance122)
IndexedLineSet124 = x3d.IndexedLineSet()
IndexedLineSet124.setDEF("PIP2toDIP2")
IndexedLineSet124.setCoordIndex([0,1])
Coordinate125 = x3d.Coordinate()
Coordinate125.setPoint([-0.2,0.7,0,-0.24,0.87,0])

IndexedLineSet124.setCoord(Coordinate125)

Shape121.setGeometry(IndexedLineSet124)

HAnimSegment118.addChildren(Shape121)

HAnimJoint117.addChildren(HAnimSegment118)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint126.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint126.setCenter([-0.24,0.87,0])
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.setName("r_carpal_distal_phalanx_2")
HAnimSegment127.setDEF("hanim_r_carpal_distal_phalanx_2")
Transform128 = x3d.Transform()
Transform128.setTranslation([-0.24,0.87,0])
Shape129 = x3d.Shape()
Shape129.setUSE("HAnimJointShape")

Transform128.addChildren(Shape129)

HAnimSegment127.addChildren(Transform128)
Shape130 = x3d.Shape()
Appearance131 = x3d.Appearance()
Material132 = x3d.Material()
Material132.setEmissiveColor([1,1,1])

Appearance131.setMaterial(Material132)

Shape130.setAppearance(Appearance131)
IndexedLineSet133 = x3d.IndexedLineSet()
IndexedLineSet133.setDEF("fingertip_r_carpal_distal_interphalangeal_2")
IndexedLineSet133.setCoordIndex([0,1])
Coordinate134 = x3d.Coordinate()
Coordinate134.setPoint([-0.24,0.87,0,-0.26,0.93,0])

IndexedLineSet133.setCoord(Coordinate134)

Shape130.setGeometry(IndexedLineSet133)

HAnimSegment127.addChildren(Shape130)

HAnimJoint126.addChildren(HAnimSegment127)

HAnimJoint117.addChildren(HAnimJoint126)

HAnimJoint108.addChildren(HAnimJoint117)

HAnimJoint99.addChildren(HAnimJoint108)

HAnimJoint90.addChildren(HAnimJoint99)

HAnimJoint29.addChildren(HAnimJoint90)
#MC3
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.setName("r_midcarpal_3")
HAnimJoint135.setDEF("hanim_r_midcarpal_3")
HAnimJoint135.setCenter([0,0.07,0])
HAnimSegment136 = x3d.HAnimSegment()
HAnimSegment136.setName("r_capitate")
HAnimSegment136.setDEF("hanim_r_capitate")
Transform137 = x3d.Transform()
Transform137.setTranslation([0,0.07,0])
Shape138 = x3d.Shape()
Shape138.setUSE("HAnimNewJointShape")

Transform137.addChildren(Shape138)

HAnimSegment136.addChildren(Transform137)
Shape139 = x3d.Shape()
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.setEmissiveColor([1,1,1])

Appearance140.setMaterial(Material141)

Shape139.setAppearance(Appearance140)
IndexedLineSet142 = x3d.IndexedLineSet()
IndexedLineSet142.setDEF("MC3toCMC3")
IndexedLineSet142.setCoordIndex([0,1])
Coordinate143 = x3d.Coordinate()
Coordinate143.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet142.setCoord(Coordinate143)

Shape139.setGeometry(IndexedLineSet142)

HAnimSegment136.addChildren(Shape139)

HAnimJoint135.addChildren(HAnimSegment136)
#Middle fingle
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.setName("r_carpometacarpal_3")
HAnimJoint144.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint144.setCenter([0,0.2,0])
HAnimSegment145 = x3d.HAnimSegment()
HAnimSegment145.setName("r_metacarpal_3")
HAnimSegment145.setDEF("hanim_r_metacarpal_3")
Transform146 = x3d.Transform()
Transform146.setTranslation([0,0.2,0])
Shape147 = x3d.Shape()
Shape147.setUSE("HAnimJointShape")

Transform146.addChildren(Shape147)

HAnimSegment145.addChildren(Transform146)
Shape148 = x3d.Shape()
Appearance149 = x3d.Appearance()
Material150 = x3d.Material()
Material150.setEmissiveColor([1,1,1])

Appearance149.setMaterial(Material150)

Shape148.setAppearance(Appearance149)
IndexedLineSet151 = x3d.IndexedLineSet()
IndexedLineSet151.setDEF("CMC3toMCP3")
IndexedLineSet151.setCoordIndex([0,1])
Coordinate152 = x3d.Coordinate()
Coordinate152.setPoint([0,0.2,0,-0.03,0.5,0])

IndexedLineSet151.setCoord(Coordinate152)

Shape148.setGeometry(IndexedLineSet151)

HAnimSegment145.addChildren(Shape148)

HAnimJoint144.addChildren(HAnimSegment145)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("r_metacarpophalangeal_3")
HAnimJoint153.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint153.setCenter([-0.03,0.5,0])
HAnimSegment154 = x3d.HAnimSegment()
HAnimSegment154.setName("r_carpal_proximal_phalanx_3")
HAnimSegment154.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform155 = x3d.Transform()
Transform155.setTranslation([-0.03,0.5,0])
Shape156 = x3d.Shape()
Shape156.setUSE("HAnimJointShape")

Transform155.addChildren(Shape156)

HAnimSegment154.addChildren(Transform155)
Shape157 = x3d.Shape()
Appearance158 = x3d.Appearance()
Material159 = x3d.Material()
Material159.setEmissiveColor([1,1,1])

Appearance158.setMaterial(Material159)

Shape157.setAppearance(Appearance158)
IndexedLineSet160 = x3d.IndexedLineSet()
IndexedLineSet160.setDEF("MCP3toPIP3")
IndexedLineSet160.setCoordIndex([0,1])
Coordinate161 = x3d.Coordinate()
Coordinate161.setPoint([-0.03,0.5,0,-0.05,0.75,0])

IndexedLineSet160.setCoord(Coordinate161)

Shape157.setGeometry(IndexedLineSet160)

HAnimSegment154.addChildren(Shape157)

HAnimJoint153.addChildren(HAnimSegment154)
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint162.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint162.setCenter([-0.05,0.75,0])
HAnimSegment163 = x3d.HAnimSegment()
HAnimSegment163.setName("r_carpal_middle_phalanx_3")
HAnimSegment163.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform164 = x3d.Transform()
Transform164.setTranslation([-0.05,0.75,0])
Shape165 = x3d.Shape()
Shape165.setUSE("HAnimJointShape")

Transform164.addChildren(Shape165)

HAnimSegment163.addChildren(Transform164)
Shape166 = x3d.Shape()
Appearance167 = x3d.Appearance()
Material168 = x3d.Material()
Material168.setEmissiveColor([1,1,1])

Appearance167.setMaterial(Material168)

Shape166.setAppearance(Appearance167)
IndexedLineSet169 = x3d.IndexedLineSet()
IndexedLineSet169.setDEF("PIP3toDIP3")
IndexedLineSet169.setCoordIndex([0,1])
Coordinate170 = x3d.Coordinate()
Coordinate170.setPoint([-0.05,0.75,0,-0.08,0.96,0])

IndexedLineSet169.setCoord(Coordinate170)

Shape166.setGeometry(IndexedLineSet169)

HAnimSegment163.addChildren(Shape166)

HAnimJoint162.addChildren(HAnimSegment163)
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint171.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint171.setCenter([-0.08,0.96,0])
HAnimSegment172 = x3d.HAnimSegment()
HAnimSegment172.setName("r_carpal_distal_phalanx_3")
HAnimSegment172.setDEF("hanim_r_carpal_distal_phalanx_3")
Transform173 = x3d.Transform()
Transform173.setTranslation([-0.08,0.96,0])
Shape174 = x3d.Shape()
Shape174.setUSE("HAnimJointShape")

Transform173.addChildren(Shape174)

HAnimSegment172.addChildren(Transform173)
Shape175 = x3d.Shape()
Appearance176 = x3d.Appearance()
Material177 = x3d.Material()
Material177.setEmissiveColor([1,1,1])

Appearance176.setMaterial(Material177)

Shape175.setAppearance(Appearance176)
IndexedLineSet178 = x3d.IndexedLineSet()
IndexedLineSet178.setDEF("fingertip_r_carpal_distal_interphalangeal_3")
IndexedLineSet178.setCoordIndex([0,1])
Coordinate179 = x3d.Coordinate()
Coordinate179.setPoint([-0.08,0.96,0,-0.09,1.05,0])

IndexedLineSet178.setCoord(Coordinate179)

Shape175.setGeometry(IndexedLineSet178)

HAnimSegment172.addChildren(Shape175)

HAnimJoint171.addChildren(HAnimSegment172)

HAnimJoint162.addChildren(HAnimJoint171)

HAnimJoint153.addChildren(HAnimJoint162)

HAnimJoint144.addChildren(HAnimJoint153)

HAnimJoint135.addChildren(HAnimJoint144)

HAnimJoint29.addChildren(HAnimJoint135)
#MC4_5
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("r_midcarpal_4_5")
HAnimJoint180.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint180.setCenter([0.1,0.1,0])
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("r_hamate")
HAnimSegment181.setDEF("hanim_r_hamate")
Transform182 = x3d.Transform()
Transform182.setTranslation([0.1,0.1,0])
Shape183 = x3d.Shape()
Shape183.setUSE("HAnimNewJointShape")

Transform182.addChildren(Shape183)

HAnimSegment181.addChildren(Transform182)
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.setEmissiveColor([1,1,1])

Appearance185.setMaterial(Material186)

Shape184.setAppearance(Appearance185)
IndexedLineSet187 = x3d.IndexedLineSet()
IndexedLineSet187.setDEF("MC45toCMC4")
IndexedLineSet187.setCoordIndex([0,1])
Coordinate188 = x3d.Coordinate()
Coordinate188.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet187.setCoord(Coordinate188)

Shape184.setGeometry(IndexedLineSet187)

HAnimSegment181.addChildren(Shape184)
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.setEmissiveColor([1,1,1])

Appearance190.setMaterial(Material191)

Shape189.setAppearance(Appearance190)
IndexedLineSet192 = x3d.IndexedLineSet()
IndexedLineSet192.setDEF("MC45toCMC5")
IndexedLineSet192.setCoordIndex([0,1])
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint([0.1,0.1,0,0.15,0.17,0])

IndexedLineSet192.setCoord(Coordinate193)

Shape189.setGeometry(IndexedLineSet192)

HAnimSegment181.addChildren(Shape189)

HAnimJoint180.addChildren(HAnimSegment181)
#ring finger
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.setName("r_carpometacarpal_4")
HAnimJoint194.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint194.setCenter([0.1,0.2,0])
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.setName("r_metacarpal_4")
HAnimSegment195.setDEF("hanim_r_metacarpal_4")
Transform196 = x3d.Transform()
Transform196.setTranslation([0.1,0.2,0])
Shape197 = x3d.Shape()
Shape197.setUSE("HAnimJointShape")

Transform196.addChildren(Shape197)

HAnimSegment195.addChildren(Transform196)
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance()
Material200 = x3d.Material()
Material200.setEmissiveColor([1,1,1])

Appearance199.setMaterial(Material200)

Shape198.setAppearance(Appearance199)
IndexedLineSet201 = x3d.IndexedLineSet()
IndexedLineSet201.setDEF("CMC4toMCP4")
IndexedLineSet201.setCoordIndex([0,1])
Coordinate202 = x3d.Coordinate()
Coordinate202.setPoint([0.1,0.2,0,0.1,0.47,0])

IndexedLineSet201.setCoord(Coordinate202)

Shape198.setGeometry(IndexedLineSet201)

HAnimSegment195.addChildren(Shape198)

HAnimJoint194.addChildren(HAnimSegment195)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.setName("r_metacarpophalangeal_4")
HAnimJoint203.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint203.setCenter([0.1,0.47,0])
HAnimSegment204 = x3d.HAnimSegment()
HAnimSegment204.setName("r_carpal_proximal_phalanx_4")
HAnimSegment204.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform205 = x3d.Transform()
Transform205.setTranslation([0.1,0.47,0])
Shape206 = x3d.Shape()
Shape206.setUSE("HAnimJointShape")

Transform205.addChildren(Shape206)

HAnimSegment204.addChildren(Transform205)
Shape207 = x3d.Shape()
Appearance208 = x3d.Appearance()
Material209 = x3d.Material()
Material209.setEmissiveColor([1,1,1])

Appearance208.setMaterial(Material209)

Shape207.setAppearance(Appearance208)
IndexedLineSet210 = x3d.IndexedLineSet()
IndexedLineSet210.setDEF("MCP4toPIP4")
IndexedLineSet210.setCoordIndex([0,1])
Coordinate211 = x3d.Coordinate()
Coordinate211.setPoint([0.1,0.47,0,0.1,0.7,0])

IndexedLineSet210.setCoord(Coordinate211)

Shape207.setGeometry(IndexedLineSet210)

HAnimSegment204.addChildren(Shape207)

HAnimJoint203.addChildren(HAnimSegment204)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint212.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint212.setCenter([0.1,0.7,0])
HAnimSegment213 = x3d.HAnimSegment()
HAnimSegment213.setName("r_carpal_middle_phalanx_4")
HAnimSegment213.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform214 = x3d.Transform()
Transform214.setTranslation([0.1,0.7,0])
Shape215 = x3d.Shape()
Shape215.setUSE("HAnimJointShape")

Transform214.addChildren(Shape215)

HAnimSegment213.addChildren(Transform214)
Shape216 = x3d.Shape()
Appearance217 = x3d.Appearance()
Material218 = x3d.Material()
Material218.setEmissiveColor([1,1,1])

Appearance217.setMaterial(Material218)

Shape216.setAppearance(Appearance217)
IndexedLineSet219 = x3d.IndexedLineSet()
IndexedLineSet219.setDEF("PIP4toDIP4")
IndexedLineSet219.setCoordIndex([0,1])
Coordinate220 = x3d.Coordinate()
Coordinate220.setPoint([0.1,0.7,0,0.1,0.93,0])

IndexedLineSet219.setCoord(Coordinate220)

Shape216.setGeometry(IndexedLineSet219)

HAnimSegment213.addChildren(Shape216)

HAnimJoint212.addChildren(HAnimSegment213)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint221.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint221.setCenter([0.1,0.93,0])
HAnimSegment222 = x3d.HAnimSegment()
HAnimSegment222.setName("r_carpal_distal_phalanx_4")
HAnimSegment222.setDEF("hanim_r_carpal_distal_phalanx_4")
Transform223 = x3d.Transform()
Transform223.setTranslation([0.1,0.93,0])
Shape224 = x3d.Shape()
Shape224.setUSE("HAnimJointShape")

Transform223.addChildren(Shape224)

HAnimSegment222.addChildren(Transform223)
Shape225 = x3d.Shape()
Appearance226 = x3d.Appearance()
Material227 = x3d.Material()
Material227.setEmissiveColor([1,1,1])

Appearance226.setMaterial(Material227)

Shape225.setAppearance(Appearance226)
IndexedLineSet228 = x3d.IndexedLineSet()
IndexedLineSet228.setDEF("fingertip_r_carpal_distal_interphalangeal_4")
IndexedLineSet228.setCoordIndex([0,1])
Coordinate229 = x3d.Coordinate()
Coordinate229.setPoint([0.1,0.93,0,0.1,1,0])

IndexedLineSet228.setCoord(Coordinate229)

Shape225.setGeometry(IndexedLineSet228)

HAnimSegment222.addChildren(Shape225)

HAnimJoint221.addChildren(HAnimSegment222)

HAnimJoint212.addChildren(HAnimJoint221)

HAnimJoint203.addChildren(HAnimJoint212)

HAnimJoint194.addChildren(HAnimJoint203)

HAnimJoint180.addChildren(HAnimJoint194)
#pinky finger
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.setName("r_carpometacarpal_5")
HAnimJoint230.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint230.setCenter([0.15,0.17,0])
HAnimSegment231 = x3d.HAnimSegment()
HAnimSegment231.setName("r_metacarpal_5")
HAnimSegment231.setDEF("hanim_r_metacarpal_5")
Transform232 = x3d.Transform()
Transform232.setTranslation([0.15,0.17,0])
Shape233 = x3d.Shape()
Shape233.setUSE("HAnimJointShape")

Transform232.addChildren(Shape233)

HAnimSegment231.addChildren(Transform232)
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
Material236 = x3d.Material()
Material236.setEmissiveColor([1,1,1])

Appearance235.setMaterial(Material236)

Shape234.setAppearance(Appearance235)
IndexedLineSet237 = x3d.IndexedLineSet()
IndexedLineSet237.setDEF("CMC5toMCP5")
IndexedLineSet237.setCoordIndex([0,1])
Coordinate238 = x3d.Coordinate()
Coordinate238.setPoint([0.15,0.17,0,0.2,0.4,0])

IndexedLineSet237.setCoord(Coordinate238)

Shape234.setGeometry(IndexedLineSet237)

HAnimSegment231.addChildren(Shape234)

HAnimJoint230.addChildren(HAnimSegment231)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.setName("r_metacarpophalangeal_5")
HAnimJoint239.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint239.setCenter([0.2,0.4,0])
HAnimSegment240 = x3d.HAnimSegment()
HAnimSegment240.setName("r_carpal_proximal_phalanx_5")
HAnimSegment240.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform241 = x3d.Transform()
Transform241.setTranslation([0.2,0.4,0])
Shape242 = x3d.Shape()
Shape242.setUSE("HAnimJointShape")

Transform241.addChildren(Shape242)

HAnimSegment240.addChildren(Transform241)
Shape243 = x3d.Shape()
Appearance244 = x3d.Appearance()
Material245 = x3d.Material()
Material245.setEmissiveColor([1,1,1])

Appearance244.setMaterial(Material245)

Shape243.setAppearance(Appearance244)
IndexedLineSet246 = x3d.IndexedLineSet()
IndexedLineSet246.setDEF("MCP5toPIP5")
IndexedLineSet246.setCoordIndex([0,1])
Coordinate247 = x3d.Coordinate()
Coordinate247.setPoint([0.2,0.4,0,0.23,0.63,0])

IndexedLineSet246.setCoord(Coordinate247)

Shape243.setGeometry(IndexedLineSet246)

HAnimSegment240.addChildren(Shape243)

HAnimJoint239.addChildren(HAnimSegment240)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint248.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint248.setCenter([0.23,0.63,0])
HAnimSegment249 = x3d.HAnimSegment()
HAnimSegment249.setName("r_carpal_middle_phalanx_5")
HAnimSegment249.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform250 = x3d.Transform()
Transform250.setTranslation([0.23,0.63,0])
Shape251 = x3d.Shape()
Shape251.setUSE("HAnimJointShape")

Transform250.addChildren(Shape251)

HAnimSegment249.addChildren(Transform250)
Shape252 = x3d.Shape()
Appearance253 = x3d.Appearance()
Material254 = x3d.Material()
Material254.setEmissiveColor([1,1,1])

Appearance253.setMaterial(Material254)

Shape252.setAppearance(Appearance253)
IndexedLineSet255 = x3d.IndexedLineSet()
IndexedLineSet255.setDEF("PIP5toDIP5")
IndexedLineSet255.setCoordIndex([0,1])
Coordinate256 = x3d.Coordinate()
Coordinate256.setPoint([0.23,0.63,0,0.25,0.79,0])

IndexedLineSet255.setCoord(Coordinate256)

Shape252.setGeometry(IndexedLineSet255)

HAnimSegment249.addChildren(Shape252)

HAnimJoint248.addChildren(HAnimSegment249)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint257.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint257.setCenter([0.25,0.79,0])
HAnimSegment258 = x3d.HAnimSegment()
HAnimSegment258.setName("r_carpal_distal_phalanx_5")
HAnimSegment258.setDEF("hanim_r_carpal_distal_phalanx_5")
Transform259 = x3d.Transform()
Transform259.setTranslation([0.25,0.79,0])
Shape260 = x3d.Shape()
Shape260.setUSE("HAnimJointShape")

Transform259.addChildren(Shape260)

HAnimSegment258.addChildren(Transform259)
Shape261 = x3d.Shape()
Appearance262 = x3d.Appearance()
Material263 = x3d.Material()
Material263.setEmissiveColor([1,1,1])

Appearance262.setMaterial(Material263)

Shape261.setAppearance(Appearance262)
IndexedLineSet264 = x3d.IndexedLineSet()
IndexedLineSet264.setDEF("fingertip_r_carpal_distal_interphalangeal_5")
IndexedLineSet264.setCoordIndex([0,1])
Coordinate265 = x3d.Coordinate()
Coordinate265.setPoint([0.25,0.79,0,0.26,0.85,0])

IndexedLineSet264.setCoord(Coordinate265)

Shape261.setGeometry(IndexedLineSet264)

HAnimSegment258.addChildren(Shape261)

HAnimJoint257.addChildren(HAnimSegment258)

HAnimJoint248.addChildren(HAnimJoint257)

HAnimJoint239.addChildren(HAnimJoint248)

HAnimJoint230.addChildren(HAnimJoint239)

HAnimJoint180.addChildren(HAnimJoint230)

HAnimJoint29.addChildren(HAnimJoint180)

HAnimJoint28.addChildren(HAnimJoint29)

HAnimHumanoid25.setSkeleton(HAnimJoint28)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.setUSE("hanim_humanoid_root")

HAnimHumanoid25.addJoints(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid25.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid25.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid25.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid25.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid25.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid25.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid25.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid25.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid25.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid25.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid25.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid25.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid25.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid25.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid25.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setUSE("hanim_r_radiocarpal")

HAnimHumanoid25.addJoints(HAnimJoint290)
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.setUSE("hanim_r_capitate")

HAnimHumanoid25.addSegments(HAnimSegment291)
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.setUSE("hanim_r_carpal")

HAnimHumanoid25.addSegments(HAnimSegment292)
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid25.addSegments(HAnimSegment293)
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment294)
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid25.addSegments(HAnimSegment302)
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid25.addSegments(HAnimSegment303)
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid25.addSegments(HAnimSegment304)
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid25.addSegments(HAnimSegment305)
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid25.addSegments(HAnimSegment306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setUSE("hanim_r_hamate")

HAnimHumanoid25.addSegments(HAnimSegment307)
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid25.addSegments(HAnimSegment308)
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid25.addSegments(HAnimSegment309)
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid25.addSegments(HAnimSegment310)
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid25.addSegments(HAnimSegment311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid25.addSegments(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setUSE("hanim_r_trapezium")

HAnimHumanoid25.addSegments(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setUSE("hanim_r_trapezoid")

HAnimHumanoid25.addSegments(HAnimSegment314)

Scene23.addChildren(HAnimHumanoid25)

X3D0.setScene(Scene23)
X3D0.toFileX3D("../data/HAnimModelHandRight_RoundTrip.x3d")

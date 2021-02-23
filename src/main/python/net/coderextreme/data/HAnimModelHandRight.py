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
meta7.setContent("5 July 2020")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("warning")
meta8.setContent("not yet to scale")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("info")
meta10.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("subject")
meta17.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("TODO")
meta18.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("identifier")
meta19.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("generator")
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("license")
meta21.setContent("../license.html")

head1.addMeta(meta21)

X3D0.setHead(head1)
Scene22 = x3d.Scene()
WorldInfo23 = x3d.WorldInfo()
WorldInfo23.setTitle("HAnimModelHandRight.x3d")

Scene22.addChildren(WorldInfo23)
HAnimHumanoid24 = x3d.HAnimHumanoid()
HAnimHumanoid24.setName("Hand_Right")
HAnimHumanoid24.setDEF("hanim_Hand_Right")
HAnimHumanoid24.setVersion("2.0")
#HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet25 = x3d.MetadataSet()
MetadataSet25.setName("HAnimHumanoid.info")
MetadataSet25.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString26 = x3d.MetadataString()
MetadataString26.setName("authorName")
MetadataString26.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet25.setMetadata(MetadataString26)

HAnimHumanoid24.setMetadata(MetadataSet25)
HAnimJoint27 = x3d.HAnimJoint()
HAnimJoint27.setName("humanoid_root")
HAnimJoint27.setDEF("hanim_humanoid_root")
#Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint28 = x3d.HAnimJoint()
HAnimJoint28.setName("r_radiocarpal")
HAnimJoint28.setDEF("hanim_r_radiocarpal")
HAnimJoint28.setDescription("connection joint of hand to leg above")
HAnimSegment29 = x3d.HAnimSegment()
HAnimSegment29.setName("r_wrist")
HAnimSegment29.setDEF("hanim_r_wrist")
HAnimSegment29.setDescription("test diagnostic to compare name with expected HAnimSegment name for parent HAnimJoint")
Transform30 = x3d.Transform()
Shape31 = x3d.Shape()
Shape31.setDEF("HAnimJointShape")
Sphere32 = x3d.Sphere()
Sphere32.setRadius(0.025)

Shape31.setGeometry(Sphere32)
Appearance33 = x3d.Appearance()
Appearance33.setDEF("HAnimJointAppearanceBlue")
Material34 = x3d.Material()
Material34.setDiffuseColor([0,0,1])

Appearance33.setMaterial(Material34)

Shape31.setAppearance(Appearance33)

Transform30.addChildren(Shape31)

HAnimSegment29.addChildren(Transform30)
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.setEmissiveColor([1,1,1])

Appearance36.setMaterial(Material37)

Shape35.setAppearance(Appearance36)
IndexedLineSet38 = x3d.IndexedLineSet()
IndexedLineSet38.setDEF("RCToMC12")
IndexedLineSet38.setCoordIndex([0,1])
Coordinate39 = x3d.Coordinate()
Coordinate39.setPoint([0,0,0,-0.1,0.1,0])

IndexedLineSet38.setCoord(Coordinate39)

Shape35.setGeometry(IndexedLineSet38)

HAnimSegment29.addChildren(Shape35)
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.setEmissiveColor([1,1,1])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
IndexedLineSet43 = x3d.IndexedLineSet()
IndexedLineSet43.setDEF("RCToMC3")
IndexedLineSet43.setCoordIndex([0,1])
Coordinate44 = x3d.Coordinate()
Coordinate44.setPoint([0,0,0,0,0.07,0])

IndexedLineSet43.setCoord(Coordinate44)

Shape40.setGeometry(IndexedLineSet43)

HAnimSegment29.addChildren(Shape40)
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setEmissiveColor([1,1,1])

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
IndexedLineSet48 = x3d.IndexedLineSet()
IndexedLineSet48.setDEF("RCToMC45")
IndexedLineSet48.setCoordIndex([0,1])
Coordinate49 = x3d.Coordinate()
Coordinate49.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet48.setCoord(Coordinate49)

Shape45.setGeometry(IndexedLineSet48)

HAnimSegment29.addChildren(Shape45)

HAnimJoint28.addChildren(HAnimSegment29)
#MC12
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.setName("r_midcarpal_12")
HAnimJoint50.setDEF("hanim_r_midcarpal_12")
HAnimJoint50.setCenter([-0.1,0.1,0])
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.setName("r_trapezoid")
HAnimSegment51.setDEF("hanim_r_trapezoid")
Transform52 = x3d.Transform()
Transform52.setTranslation([-0.1,0.1,0])
Shape53 = x3d.Shape()
Shape53.setDEF("HAnimNewJointShape")
Sphere54 = x3d.Sphere()
Sphere54.setRadius(0.025)

Shape53.setGeometry(Sphere54)
Appearance55 = x3d.Appearance()
Appearance55.setDEF("HAnimJointAppearanceRed")
Material56 = x3d.Material()
Material56.setDiffuseColor([1,0,0])

Appearance55.setMaterial(Material56)

Shape53.setAppearance(Appearance55)

Transform52.addChildren(Shape53)

HAnimSegment51.addChildren(Transform52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setEmissiveColor([1,1,1])

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
IndexedLineSet60 = x3d.IndexedLineSet()
IndexedLineSet60.setDEF("MC12toCMC1")
IndexedLineSet60.setCoordIndex([0,1])
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint([-0.1,0.1,0,-0.2,0.15,0])

IndexedLineSet60.setCoord(Coordinate61)

Shape57.setGeometry(IndexedLineSet60)

HAnimSegment51.addChildren(Shape57)
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setEmissiveColor([1,1,1])

Appearance63.setMaterial(Material64)

Shape62.setAppearance(Appearance63)
IndexedLineSet65 = x3d.IndexedLineSet()
IndexedLineSet65.setDEF("MC12toCMC2")
IndexedLineSet65.setCoordIndex([0,1])
Coordinate66 = x3d.Coordinate()
Coordinate66.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet65.setCoord(Coordinate66)

Shape62.setGeometry(IndexedLineSet65)

HAnimSegment51.addChildren(Shape62)

HAnimJoint50.addChildren(HAnimSegment51)
#thumb finger
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.setName("r_carpometacarpal_1")
HAnimJoint67.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint67.setCenter([-0.2,0.15,0])
HAnimSegment68 = x3d.HAnimSegment()
HAnimSegment68.setName("r_metacarpal_1")
HAnimSegment68.setDEF("hanim_r_metacarpal_1")
Transform69 = x3d.Transform()
Transform69.setTranslation([-0.2,0.15,0])
Shape70 = x3d.Shape()
Shape70.setUSE("HAnimJointShape")

Transform69.addChildren(Shape70)

HAnimSegment68.addChildren(Transform69)
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.setEmissiveColor([1,1,1])

Appearance72.setMaterial(Material73)

Shape71.setAppearance(Appearance72)
IndexedLineSet74 = x3d.IndexedLineSet()
IndexedLineSet74.setDEF("CMC1toMCP1")
IndexedLineSet74.setCoordIndex([0,1])
Coordinate75 = x3d.Coordinate()
Coordinate75.setPoint([-0.2,0.15,0,-0.3,0.3,0])

IndexedLineSet74.setCoord(Coordinate75)

Shape71.setGeometry(IndexedLineSet74)

HAnimSegment68.addChildren(Shape71)

HAnimJoint67.addChildren(HAnimSegment68)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.setName("r_metacarpophalangeal_1")
HAnimJoint76.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint76.setCenter([-0.3,0.3,0])
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.setName("r_carpal_proximal_phalanx_1")
HAnimSegment77.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform78 = x3d.Transform()
Transform78.setTranslation([-0.3,0.3,0])
Shape79 = x3d.Shape()
Shape79.setUSE("HAnimJointShape")

Transform78.addChildren(Shape79)

HAnimSegment77.addChildren(Transform78)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.setEmissiveColor([1,1,1])

Appearance81.setMaterial(Material82)

Shape80.setAppearance(Appearance81)
IndexedLineSet83 = x3d.IndexedLineSet()
IndexedLineSet83.setDEF("MCP11toIP1")
IndexedLineSet83.setCoordIndex([0,1])
Coordinate84 = x3d.Coordinate()
Coordinate84.setPoint([-0.3,0.3,0,-0.35,0.4,0])

IndexedLineSet83.setCoord(Coordinate84)

Shape80.setGeometry(IndexedLineSet83)

HAnimSegment77.addChildren(Shape80)

HAnimJoint76.addChildren(HAnimSegment77)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.setName("r_carpal_interphalangeal_1")
HAnimJoint85.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint85.setCenter([-0.35,0.4,0])
HAnimSegment86 = x3d.HAnimSegment()
HAnimSegment86.setName("r_carpal_distal_phalanx_1")
HAnimSegment86.setDEF("hanim_r_carpal_distal_phalanx_1")
Transform87 = x3d.Transform()
Transform87.setTranslation([-0.35,0.4,0])
Shape88 = x3d.Shape()
Shape88.setUSE("HAnimJointShape")

Transform87.addChildren(Shape88)

HAnimSegment86.addChildren(Transform87)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.setEmissiveColor([1,1,1])

Appearance90.setMaterial(Material91)

Shape89.setAppearance(Appearance90)
IndexedLineSet92 = x3d.IndexedLineSet()
IndexedLineSet92.setDEF("fingertip_r_carpal_interphalangeal_1")
IndexedLineSet92.setCoordIndex([0,1])
Coordinate93 = x3d.Coordinate()
Coordinate93.setPoint([-0.35,0.4,0,-0.36,0.45,0])

IndexedLineSet92.setCoord(Coordinate93)

Shape89.setGeometry(IndexedLineSet92)

HAnimSegment86.addChildren(Shape89)

HAnimJoint85.addChildren(HAnimSegment86)

HAnimJoint76.addChildren(HAnimJoint85)

HAnimJoint67.addChildren(HAnimJoint76)

HAnimJoint50.addChildren(HAnimJoint67)
#index finger
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.setName("r_carpometacarpal_2")
HAnimJoint94.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint94.setCenter([-0.1,0.2,0])
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.setName("r_metacarpal_2")
HAnimSegment95.setDEF("hanim_r_metacarpal_2")
Transform96 = x3d.Transform()
Transform96.setTranslation([-0.1,0.2,0])
Shape97 = x3d.Shape()
Shape97.setUSE("HAnimJointShape")

Transform96.addChildren(Shape97)

HAnimSegment95.addChildren(Transform96)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.setEmissiveColor([1,1,1])

Appearance99.setMaterial(Material100)

Shape98.setAppearance(Appearance99)
IndexedLineSet101 = x3d.IndexedLineSet()
IndexedLineSet101.setDEF("CMC2toMCP2")
IndexedLineSet101.setCoordIndex([0,1])
Coordinate102 = x3d.Coordinate()
Coordinate102.setPoint([-0.1,0.2,0,-0.15,0.5,0])

IndexedLineSet101.setCoord(Coordinate102)

Shape98.setGeometry(IndexedLineSet101)

HAnimSegment95.addChildren(Shape98)

HAnimJoint94.addChildren(HAnimSegment95)
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("r_metacarpophalangeal_2")
HAnimJoint103.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint103.setCenter([-0.15,0.5,0])
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.setName("r_carpal_proximal_phalanx_2")
HAnimSegment104.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform105 = x3d.Transform()
Transform105.setTranslation([-0.15,0.5,0])
Shape106 = x3d.Shape()
Shape106.setUSE("HAnimJointShape")

Transform105.addChildren(Shape106)

HAnimSegment104.addChildren(Transform105)
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.setEmissiveColor([1,1,1])

Appearance108.setMaterial(Material109)

Shape107.setAppearance(Appearance108)
IndexedLineSet110 = x3d.IndexedLineSet()
IndexedLineSet110.setDEF("MCP2toPIP2")
IndexedLineSet110.setCoordIndex([0,1])
Coordinate111 = x3d.Coordinate()
Coordinate111.setPoint([-0.15,0.5,0,-0.2,0.7,0])

IndexedLineSet110.setCoord(Coordinate111)

Shape107.setGeometry(IndexedLineSet110)

HAnimSegment104.addChildren(Shape107)

HAnimJoint103.addChildren(HAnimSegment104)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint112.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint112.setCenter([-0.2,0.7,0])
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.setName("r_carpal_middle_phalanx_2")
HAnimSegment113.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform114 = x3d.Transform()
Transform114.setTranslation([-0.2,0.7,0])
Shape115 = x3d.Shape()
Shape115.setUSE("HAnimJointShape")

Transform114.addChildren(Shape115)

HAnimSegment113.addChildren(Transform114)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setEmissiveColor([1,1,1])

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedLineSet119 = x3d.IndexedLineSet()
IndexedLineSet119.setDEF("PIP2toDIP2")
IndexedLineSet119.setCoordIndex([0,1])
Coordinate120 = x3d.Coordinate()
Coordinate120.setPoint([-0.2,0.7,0,-0.24,0.87,0])

IndexedLineSet119.setCoord(Coordinate120)

Shape116.setGeometry(IndexedLineSet119)

HAnimSegment113.addChildren(Shape116)

HAnimJoint112.addChildren(HAnimSegment113)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint121.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint121.setCenter([-0.24,0.87,0])
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.setName("r_carpal_distal_phalanx_2")
HAnimSegment122.setDEF("hanim_r_carpal_distal_phalanx_2")
Transform123 = x3d.Transform()
Transform123.setTranslation([-0.24,0.87,0])
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimJointShape")

Transform123.addChildren(Shape124)

HAnimSegment122.addChildren(Transform123)
Shape125 = x3d.Shape()
Appearance126 = x3d.Appearance()
Material127 = x3d.Material()
Material127.setEmissiveColor([1,1,1])

Appearance126.setMaterial(Material127)

Shape125.setAppearance(Appearance126)
IndexedLineSet128 = x3d.IndexedLineSet()
IndexedLineSet128.setDEF("fingertip_r_carpal_distal_interphalangeal_2")
IndexedLineSet128.setCoordIndex([0,1])
Coordinate129 = x3d.Coordinate()
Coordinate129.setPoint([-0.24,0.87,0,-0.26,0.93,0])

IndexedLineSet128.setCoord(Coordinate129)

Shape125.setGeometry(IndexedLineSet128)

HAnimSegment122.addChildren(Shape125)

HAnimJoint121.addChildren(HAnimSegment122)

HAnimJoint112.addChildren(HAnimJoint121)

HAnimJoint103.addChildren(HAnimJoint112)

HAnimJoint94.addChildren(HAnimJoint103)

HAnimJoint50.addChildren(HAnimJoint94)

HAnimJoint28.addChildren(HAnimJoint50)
#MC3
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.setName("r_midcarpal_3")
HAnimJoint130.setDEF("hanim_r_midcarpal_3")
HAnimJoint130.setCenter([0,0.07,0])
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.setName("r_capitate")
HAnimSegment131.setDEF("hanim_r_capitate")
Transform132 = x3d.Transform()
Transform132.setTranslation([0,0.07,0])
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimNewJointShape")

Transform132.addChildren(Shape133)

HAnimSegment131.addChildren(Transform132)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.setEmissiveColor([1,1,1])

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
IndexedLineSet137 = x3d.IndexedLineSet()
IndexedLineSet137.setDEF("MC3toCMC3")
IndexedLineSet137.setCoordIndex([0,1])
Coordinate138 = x3d.Coordinate()
Coordinate138.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet137.setCoord(Coordinate138)

Shape134.setGeometry(IndexedLineSet137)

HAnimSegment131.addChildren(Shape134)

HAnimJoint130.addChildren(HAnimSegment131)
#Middle fingle
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.setName("r_carpometacarpal_3")
HAnimJoint139.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint139.setCenter([0,0.2,0])
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.setName("r_metacarpal_3")
HAnimSegment140.setDEF("hanim_r_metacarpal_3")
Transform141 = x3d.Transform()
Transform141.setTranslation([0,0.2,0])
Shape142 = x3d.Shape()
Shape142.setUSE("HAnimJointShape")

Transform141.addChildren(Shape142)

HAnimSegment140.addChildren(Transform141)
Shape143 = x3d.Shape()
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.setEmissiveColor([1,1,1])

Appearance144.setMaterial(Material145)

Shape143.setAppearance(Appearance144)
IndexedLineSet146 = x3d.IndexedLineSet()
IndexedLineSet146.setDEF("CMC3toMCP3")
IndexedLineSet146.setCoordIndex([0,1])
Coordinate147 = x3d.Coordinate()
Coordinate147.setPoint([0,0.2,0,-0.03,0.5,0])

IndexedLineSet146.setCoord(Coordinate147)

Shape143.setGeometry(IndexedLineSet146)

HAnimSegment140.addChildren(Shape143)

HAnimJoint139.addChildren(HAnimSegment140)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("r_metacarpophalangeal_3")
HAnimJoint148.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint148.setCenter([-0.03,0.5,0])
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.setName("r_carpal_proximal_phalanx_3")
HAnimSegment149.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform150 = x3d.Transform()
Transform150.setTranslation([-0.03,0.5,0])
Shape151 = x3d.Shape()
Shape151.setUSE("HAnimJointShape")

Transform150.addChildren(Shape151)

HAnimSegment149.addChildren(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.setEmissiveColor([1,1,1])

Appearance153.setMaterial(Material154)

Shape152.setAppearance(Appearance153)
IndexedLineSet155 = x3d.IndexedLineSet()
IndexedLineSet155.setDEF("MCP3toPIP3")
IndexedLineSet155.setCoordIndex([0,1])
Coordinate156 = x3d.Coordinate()
Coordinate156.setPoint([-0.03,0.5,0,-0.05,0.75,0])

IndexedLineSet155.setCoord(Coordinate156)

Shape152.setGeometry(IndexedLineSet155)

HAnimSegment149.addChildren(Shape152)

HAnimJoint148.addChildren(HAnimSegment149)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint157.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint157.setCenter([-0.05,0.75,0])
HAnimSegment158 = x3d.HAnimSegment()
HAnimSegment158.setName("r_carpal_middle_phalanx_3")
HAnimSegment158.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform159 = x3d.Transform()
Transform159.setTranslation([-0.05,0.75,0])
Shape160 = x3d.Shape()
Shape160.setUSE("HAnimJointShape")

Transform159.addChildren(Shape160)

HAnimSegment158.addChildren(Transform159)
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.setEmissiveColor([1,1,1])

Appearance162.setMaterial(Material163)

Shape161.setAppearance(Appearance162)
IndexedLineSet164 = x3d.IndexedLineSet()
IndexedLineSet164.setDEF("PIP3toDIP3")
IndexedLineSet164.setCoordIndex([0,1])
Coordinate165 = x3d.Coordinate()
Coordinate165.setPoint([-0.05,0.75,0,-0.08,0.96,0])

IndexedLineSet164.setCoord(Coordinate165)

Shape161.setGeometry(IndexedLineSet164)

HAnimSegment158.addChildren(Shape161)

HAnimJoint157.addChildren(HAnimSegment158)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint166.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint166.setCenter([-0.08,0.96,0])
HAnimSegment167 = x3d.HAnimSegment()
HAnimSegment167.setName("r_carpal_distal_phalanx_3")
HAnimSegment167.setDEF("hanim_r_carpal_distal_phalanx_3")
Transform168 = x3d.Transform()
Transform168.setTranslation([-0.08,0.96,0])
Shape169 = x3d.Shape()
Shape169.setUSE("HAnimJointShape")

Transform168.addChildren(Shape169)

HAnimSegment167.addChildren(Transform168)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setEmissiveColor([1,1,1])

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedLineSet173 = x3d.IndexedLineSet()
IndexedLineSet173.setDEF("fingertip_r_carpal_distal_interphalangeal_3")
IndexedLineSet173.setCoordIndex([0,1])
Coordinate174 = x3d.Coordinate()
Coordinate174.setPoint([-0.08,0.96,0,-0.09,1.05,0])

IndexedLineSet173.setCoord(Coordinate174)

Shape170.setGeometry(IndexedLineSet173)

HAnimSegment167.addChildren(Shape170)

HAnimJoint166.addChildren(HAnimSegment167)

HAnimJoint157.addChildren(HAnimJoint166)

HAnimJoint148.addChildren(HAnimJoint157)

HAnimJoint139.addChildren(HAnimJoint148)

HAnimJoint130.addChildren(HAnimJoint139)

HAnimJoint28.addChildren(HAnimJoint130)
#MC45
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setName("r_midcarpal_4_5")
HAnimJoint175.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint175.setCenter([0.1,0.1,0])
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.setName("r_hamate")
HAnimSegment176.setDEF("hanim_r_hamate")
Transform177 = x3d.Transform()
Transform177.setTranslation([0.1,0.1,0])
Shape178 = x3d.Shape()
Shape178.setUSE("HAnimNewJointShape")

Transform177.addChildren(Shape178)

HAnimSegment176.addChildren(Transform177)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setEmissiveColor([1,1,1])

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.setDEF("MC45toCMC4")
IndexedLineSet182.setCoordIndex([0,1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedLineSet182)

HAnimSegment176.addChildren(Shape179)
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.setEmissiveColor([1,1,1])

Appearance185.setMaterial(Material186)

Shape184.setAppearance(Appearance185)
IndexedLineSet187 = x3d.IndexedLineSet()
IndexedLineSet187.setDEF("MC45toCMC5")
IndexedLineSet187.setCoordIndex([0,1])
Coordinate188 = x3d.Coordinate()
Coordinate188.setPoint([0.1,0.1,0,0.15,0.17,0])

IndexedLineSet187.setCoord(Coordinate188)

Shape184.setGeometry(IndexedLineSet187)

HAnimSegment176.addChildren(Shape184)

HAnimJoint175.addChildren(HAnimSegment176)
#ring finger
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setName("r_carpometacarpal_4")
HAnimJoint189.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint189.setCenter([0.1,0.2,0])
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.setName("r_metacarpal_4")
HAnimSegment190.setDEF("hanim_r_metacarpal_4")
Transform191 = x3d.Transform()
Transform191.setTranslation([0.1,0.2,0])
Shape192 = x3d.Shape()
Shape192.setUSE("HAnimJointShape")

Transform191.addChildren(Shape192)

HAnimSegment190.addChildren(Transform191)
Shape193 = x3d.Shape()
Appearance194 = x3d.Appearance()
Material195 = x3d.Material()
Material195.setEmissiveColor([1,1,1])

Appearance194.setMaterial(Material195)

Shape193.setAppearance(Appearance194)
IndexedLineSet196 = x3d.IndexedLineSet()
IndexedLineSet196.setDEF("CMC4toMCP4")
IndexedLineSet196.setCoordIndex([0,1])
Coordinate197 = x3d.Coordinate()
Coordinate197.setPoint([0.1,0.2,0,0.1,0.47,0])

IndexedLineSet196.setCoord(Coordinate197)

Shape193.setGeometry(IndexedLineSet196)

HAnimSegment190.addChildren(Shape193)

HAnimJoint189.addChildren(HAnimSegment190)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.setName("r_metacarpophalangeal_4")
HAnimJoint198.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint198.setCenter([0.1,0.47,0])
HAnimSegment199 = x3d.HAnimSegment()
HAnimSegment199.setName("r_carpal_proximal_phalanx_4")
HAnimSegment199.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform200 = x3d.Transform()
Transform200.setTranslation([0.1,0.47,0])
Shape201 = x3d.Shape()
Shape201.setUSE("HAnimJointShape")

Transform200.addChildren(Shape201)

HAnimSegment199.addChildren(Transform200)
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.setEmissiveColor([1,1,1])

Appearance203.setMaterial(Material204)

Shape202.setAppearance(Appearance203)
IndexedLineSet205 = x3d.IndexedLineSet()
IndexedLineSet205.setDEF("MCP4toPIP4")
IndexedLineSet205.setCoordIndex([0,1])
Coordinate206 = x3d.Coordinate()
Coordinate206.setPoint([0.1,0.47,0,0.1,0.7,0])

IndexedLineSet205.setCoord(Coordinate206)

Shape202.setGeometry(IndexedLineSet205)

HAnimSegment199.addChildren(Shape202)

HAnimJoint198.addChildren(HAnimSegment199)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint207.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint207.setCenter([0.1,0.7,0])
HAnimSegment208 = x3d.HAnimSegment()
HAnimSegment208.setName("r_carpal_middle_phalanx_4")
HAnimSegment208.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform209 = x3d.Transform()
Transform209.setTranslation([0.1,0.7,0])
Shape210 = x3d.Shape()
Shape210.setUSE("HAnimJointShape")

Transform209.addChildren(Shape210)

HAnimSegment208.addChildren(Transform209)
Shape211 = x3d.Shape()
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.setEmissiveColor([1,1,1])

Appearance212.setMaterial(Material213)

Shape211.setAppearance(Appearance212)
IndexedLineSet214 = x3d.IndexedLineSet()
IndexedLineSet214.setDEF("PIP4toDIP4")
IndexedLineSet214.setCoordIndex([0,1])
Coordinate215 = x3d.Coordinate()
Coordinate215.setPoint([0.1,0.7,0,0.1,0.93,0])

IndexedLineSet214.setCoord(Coordinate215)

Shape211.setGeometry(IndexedLineSet214)

HAnimSegment208.addChildren(Shape211)

HAnimJoint207.addChildren(HAnimSegment208)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint216.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint216.setCenter([0.1,0.93,0])
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.setName("r_carpal_distal_phalanx_4")
HAnimSegment217.setDEF("hanim_r_carpal_distal_phalanx_4")
Transform218 = x3d.Transform()
Transform218.setTranslation([0.1,0.93,0])
Shape219 = x3d.Shape()
Shape219.setUSE("HAnimJointShape")

Transform218.addChildren(Shape219)

HAnimSegment217.addChildren(Transform218)
Shape220 = x3d.Shape()
Appearance221 = x3d.Appearance()
Material222 = x3d.Material()
Material222.setEmissiveColor([1,1,1])

Appearance221.setMaterial(Material222)

Shape220.setAppearance(Appearance221)
IndexedLineSet223 = x3d.IndexedLineSet()
IndexedLineSet223.setDEF("fingertip_r_carpal_distal_interphalangeal_4")
IndexedLineSet223.setCoordIndex([0,1])
Coordinate224 = x3d.Coordinate()
Coordinate224.setPoint([0.1,0.93,0,0.1,1,0])

IndexedLineSet223.setCoord(Coordinate224)

Shape220.setGeometry(IndexedLineSet223)

HAnimSegment217.addChildren(Shape220)

HAnimJoint216.addChildren(HAnimSegment217)

HAnimJoint207.addChildren(HAnimJoint216)

HAnimJoint198.addChildren(HAnimJoint207)

HAnimJoint189.addChildren(HAnimJoint198)

HAnimJoint175.addChildren(HAnimJoint189)
#pinky finger
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.setName("r_carpometacarpal_5")
HAnimJoint225.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint225.setCenter([0.15,0.17,0])
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.setName("r_metacarpal_5")
HAnimSegment226.setDEF("hanim_r_metacarpal_5")
Transform227 = x3d.Transform()
Transform227.setTranslation([0.15,0.17,0])
Shape228 = x3d.Shape()
Shape228.setUSE("HAnimJointShape")

Transform227.addChildren(Shape228)

HAnimSegment226.addChildren(Transform227)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.setEmissiveColor([1,1,1])

Appearance230.setMaterial(Material231)

Shape229.setAppearance(Appearance230)
IndexedLineSet232 = x3d.IndexedLineSet()
IndexedLineSet232.setDEF("CMC5toMCP5")
IndexedLineSet232.setCoordIndex([0,1])
Coordinate233 = x3d.Coordinate()
Coordinate233.setPoint([0.15,0.17,0,0.2,0.4,0])

IndexedLineSet232.setCoord(Coordinate233)

Shape229.setGeometry(IndexedLineSet232)

HAnimSegment226.addChildren(Shape229)

HAnimJoint225.addChildren(HAnimSegment226)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.setName("r_metacarpophalangeal_5")
HAnimJoint234.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint234.setCenter([0.2,0.4,0])
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.setName("r_carpal_proximal_phalanx_5")
HAnimSegment235.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform236 = x3d.Transform()
Transform236.setTranslation([0.2,0.4,0])
Shape237 = x3d.Shape()
Shape237.setUSE("HAnimJointShape")

Transform236.addChildren(Shape237)

HAnimSegment235.addChildren(Transform236)
Shape238 = x3d.Shape()
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.setEmissiveColor([1,1,1])

Appearance239.setMaterial(Material240)

Shape238.setAppearance(Appearance239)
IndexedLineSet241 = x3d.IndexedLineSet()
IndexedLineSet241.setDEF("MCP5toPIP5")
IndexedLineSet241.setCoordIndex([0,1])
Coordinate242 = x3d.Coordinate()
Coordinate242.setPoint([0.2,0.4,0,0.23,0.63,0])

IndexedLineSet241.setCoord(Coordinate242)

Shape238.setGeometry(IndexedLineSet241)

HAnimSegment235.addChildren(Shape238)

HAnimJoint234.addChildren(HAnimSegment235)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint243.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint243.setCenter([0.23,0.63,0])
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.setName("r_carpal_middle_phalanx_5")
HAnimSegment244.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform245 = x3d.Transform()
Transform245.setTranslation([0.23,0.63,0])
Shape246 = x3d.Shape()
Shape246.setUSE("HAnimJointShape")

Transform245.addChildren(Shape246)

HAnimSegment244.addChildren(Transform245)
Shape247 = x3d.Shape()
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.setEmissiveColor([1,1,1])

Appearance248.setMaterial(Material249)

Shape247.setAppearance(Appearance248)
IndexedLineSet250 = x3d.IndexedLineSet()
IndexedLineSet250.setDEF("PIP5toDIP5")
IndexedLineSet250.setCoordIndex([0,1])
Coordinate251 = x3d.Coordinate()
Coordinate251.setPoint([0.23,0.63,0,0.25,0.79,0])

IndexedLineSet250.setCoord(Coordinate251)

Shape247.setGeometry(IndexedLineSet250)

HAnimSegment244.addChildren(Shape247)

HAnimJoint243.addChildren(HAnimSegment244)
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint252.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint252.setCenter([0.25,0.79,0])
HAnimSegment253 = x3d.HAnimSegment()
HAnimSegment253.setName("r_carpal_distal_phalanx_5")
HAnimSegment253.setDEF("hanim_r_carpal_distal_phalanx_5")
Transform254 = x3d.Transform()
Transform254.setTranslation([0.25,0.79,0])
Shape255 = x3d.Shape()
Shape255.setUSE("HAnimJointShape")

Transform254.addChildren(Shape255)

HAnimSegment253.addChildren(Transform254)
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.setEmissiveColor([1,1,1])

Appearance257.setMaterial(Material258)

Shape256.setAppearance(Appearance257)
IndexedLineSet259 = x3d.IndexedLineSet()
IndexedLineSet259.setDEF("fingertip_r_carpal_distal_interphalangeal_5")
IndexedLineSet259.setCoordIndex([0,1])
Coordinate260 = x3d.Coordinate()
Coordinate260.setPoint([0.25,0.79,0,0.26,0.85,0])

IndexedLineSet259.setCoord(Coordinate260)

Shape256.setGeometry(IndexedLineSet259)

HAnimSegment253.addChildren(Shape256)

HAnimJoint252.addChildren(HAnimSegment253)

HAnimJoint243.addChildren(HAnimJoint252)

HAnimJoint234.addChildren(HAnimJoint243)

HAnimJoint225.addChildren(HAnimJoint234)

HAnimJoint175.addChildren(HAnimJoint225)

HAnimJoint28.addChildren(HAnimJoint175)

HAnimJoint27.addChildren(HAnimJoint28)

HAnimHumanoid24.setSkeleton(HAnimJoint27)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.setUSE("hanim_humanoid_root")

HAnimHumanoid24.addJoints(HAnimJoint261)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint262)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint264)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid24.addJoints(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid24.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid24.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid24.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid24.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid24.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid24.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid24.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid24.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid24.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid24.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("hanim_r_midcarpal_12")

HAnimHumanoid24.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid24.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid24.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("hanim_r_radiocarpal")

HAnimHumanoid24.addJoints(HAnimJoint284)
HAnimSegment285 = x3d.HAnimSegment()
HAnimSegment285.setUSE("hanim_r_capitate")

HAnimHumanoid24.addSegments(HAnimSegment285)
HAnimSegment286 = x3d.HAnimSegment()
HAnimSegment286.setUSE("hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid24.addSegments(HAnimSegment286)
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.setUSE("hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment287)
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.setUSE("hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment288)
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.setUSE("hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment289)
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setUSE("hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment290)
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment291)
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment292)
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment293)
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment294)
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid24.addSegments(HAnimSegment295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid24.addSegments(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid24.addSegments(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid24.addSegments(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid24.addSegments(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setUSE("hanim_r_hamate")

HAnimHumanoid24.addSegments(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid24.addSegments(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid24.addSegments(HAnimSegment302)
HAnimSegment303 = x3d.HAnimSegment()
HAnimSegment303.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid24.addSegments(HAnimSegment303)
HAnimSegment304 = x3d.HAnimSegment()
HAnimSegment304.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid24.addSegments(HAnimSegment304)
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid24.addSegments(HAnimSegment305)
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setUSE("hanim_r_trapezoid")

HAnimHumanoid24.addSegments(HAnimSegment306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setUSE("hanim_r_wrist")

HAnimHumanoid24.addSegments(HAnimSegment307)

Scene22.addChildren(HAnimHumanoid24)

X3D0.setScene(Scene22)
X3D0.toFileX3D("../data/HAnimModelHandRight_RoundTrip.x3d")

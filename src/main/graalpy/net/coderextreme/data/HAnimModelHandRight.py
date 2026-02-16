import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
meta21.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d")

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
WorldInfo25.setTitle("HAnimModelHandRight.x3d")

Scene24.addChild(WorldInfo25)
HAnimHumanoid26 = x3d.HAnimHumanoid()
HAnimHumanoid26.setName("Hand_Right")
HAnimHumanoid26.setDEF("hanim_Hand_Right")
HAnimHumanoid26.setLoa(4)
HAnimHumanoid26.setVersion("2.0")

HAnimHumanoid26.addComments(x3d.CommentsBlock("""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""))
MetadataSet27 = x3d.MetadataSet()
MetadataSet27.setName("HAnimHumanoid.info")
MetadataSet27.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString28 = x3d.MetadataString()
MetadataString28.setName("authorName")
MetadataString28.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet27.setMetadata(MetadataString28)

HAnimHumanoid26.setMetadata(MetadataSet27)
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.setName("humanoid_root")
HAnimJoint29.setDEF("hanim_humanoid_root")
HAnimJoint29.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint29.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint29.setContainerFieldOverride("skeleton")

HAnimJoint29.addComments(x3d.CommentsBlock("""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model"""))
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("r_radiocarpal")
HAnimJoint30.setDEF("hanim_r_radiocarpal")
HAnimJoint30.setDescription("connection joint of hand to leg above")
HAnimJoint30.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint30.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.setName("r_carpal")
HAnimSegment31.setDEF("hanim_r_carpal")
Transform32 = x3d.Transform()
Shape33 = x3d.Shape()
Shape33.setDEF("HAnimJointShape")
Sphere34 = x3d.Sphere()
Sphere34.setRadius(0.025)

Shape33.setGeometry(Sphere34)
Appearance35 = x3d.Appearance()
Appearance35.setDEF("HAnimJointAppearanceBlue")
Material36 = x3d.Material()
Material36.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance35.setMaterial(Material36)

Shape33.setAppearance(Appearance35)

Transform32.addChild(Shape33)

HAnimSegment31.addChild(Transform32)
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance38.setMaterial(Material39)

Shape37.setAppearance(Appearance38)
IndexedLineSet40 = x3d.IndexedLineSet()
IndexedLineSet40.setDEF("RCToMC12")
IndexedLineSet40.setCoordIndex([0,1])
Coordinate41 = x3d.Coordinate()
Coordinate41.setPoint(x3d.doubleToFloat([0,0,0,-0.1,0.1,0]))

IndexedLineSet40.setCoord(Coordinate41)

Shape37.setGeometry(IndexedLineSet40)

HAnimSegment31.addChild(Shape37)
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
IndexedLineSet45 = x3d.IndexedLineSet()
IndexedLineSet45.setDEF("RCToMC3")
IndexedLineSet45.setCoordIndex([0,1])
Coordinate46 = x3d.Coordinate()
Coordinate46.setPoint(x3d.doubleToFloat([0,0,0,0,0.07,0]))

IndexedLineSet45.setCoord(Coordinate46)

Shape42.setGeometry(IndexedLineSet45)

HAnimSegment31.addChild(Shape42)
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.setDEF("RCToMC45")
IndexedLineSet50.setCoordIndex([0,1])
Coordinate51 = x3d.Coordinate()
Coordinate51.setPoint(x3d.doubleToFloat([0,0,0,0.1,0.1,0]))

IndexedLineSet50.setCoord(Coordinate51)

Shape47.setGeometry(IndexedLineSet50)

HAnimSegment31.addChild(Shape47)

HAnimJoint30.addChild(HAnimSegment31)

HAnimJoint30.addComments(x3d.CommentsBlock("""MC1"""))
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("r_midcarpal_1")
HAnimJoint52.setDEF("hanim_r_midcarpal_1")
HAnimJoint52.setCenter(x3d.doubleToFloat([-0.14,0.09,0]))
HAnimJoint52.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint52.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.setName("r_trapezium")
HAnimSegment53.setDEF("hanim_r_trapezium")
Transform54 = x3d.Transform()
Transform54.setTranslation(x3d.doubleToFloat([-0.14,0.09,0]))
Shape55 = x3d.Shape()
Shape55.setDEF("HAnimNewJointShape")
Sphere56 = x3d.Sphere()
Sphere56.setRadius(0.025)

Shape55.setGeometry(Sphere56)
Appearance57 = x3d.Appearance()
Appearance57.setDEF("HAnimJointAppearanceRed")
Material58 = x3d.Material()
Material58.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Transform54.addChild(Shape55)

HAnimSegment53.addChild(Transform54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
IndexedLineSet62 = x3d.IndexedLineSet()
IndexedLineSet62.setDEF("MC12toCMC1")
IndexedLineSet62.setCoordIndex([0,1])
Coordinate63 = x3d.Coordinate()
Coordinate63.setPoint(x3d.doubleToFloat([-0.1,0.1,0,-0.2,0.15,0]))

IndexedLineSet62.setCoord(Coordinate63)

Shape59.setGeometry(IndexedLineSet62)

HAnimSegment53.addChild(Shape59)

HAnimJoint52.addChild(HAnimSegment53)

HAnimJoint52.addComments(x3d.CommentsBlock("""thumb finger"""))
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.setName("r_carpometacarpal_1")
HAnimJoint64.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint64.setCenter(x3d.doubleToFloat([-0.2,0.15,0]))
HAnimJoint64.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint64.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment65 = x3d.HAnimSegment()
HAnimSegment65.setName("r_metacarpal_1")
HAnimSegment65.setDEF("hanim_r_metacarpal_1")
Transform66 = x3d.Transform()
Transform66.setTranslation(x3d.doubleToFloat([-0.2,0.15,0]))
Shape67 = x3d.Shape()
Shape67.setUSE("HAnimJointShape")

Transform66.addChild(Shape67)

HAnimSegment65.addChild(Transform66)
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance69.setMaterial(Material70)

Shape68.setAppearance(Appearance69)
IndexedLineSet71 = x3d.IndexedLineSet()
IndexedLineSet71.setDEF("CMC1toMCP1xxx")
IndexedLineSet71.setCoordIndex([0,1])
Coordinate72 = x3d.Coordinate()
Coordinate72.setPoint(x3d.doubleToFloat([-0.2,0.15,0,-0.3,0.3,0]))

IndexedLineSet71.setCoord(Coordinate72)

Shape68.setGeometry(IndexedLineSet71)

HAnimSegment65.addChild(Shape68)

HAnimJoint64.addChild(HAnimSegment65)
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.setName("r_metacarpophalangeal_1")
HAnimJoint73.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint73.setCenter(x3d.doubleToFloat([-0.3,0.3,0]))
HAnimJoint73.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint73.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment74 = x3d.HAnimSegment()
HAnimSegment74.setName("r_carpal_proximal_phalanx_1")
HAnimSegment74.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform75 = x3d.Transform()
Transform75.setTranslation(x3d.doubleToFloat([-0.3,0.3,0]))
Shape76 = x3d.Shape()
Shape76.setUSE("HAnimJointShape")

Transform75.addChild(Shape76)

HAnimSegment74.addChild(Transform75)
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material()
Material79.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance78.setMaterial(Material79)

Shape77.setAppearance(Appearance78)
IndexedLineSet80 = x3d.IndexedLineSet()
IndexedLineSet80.setDEF("MCP11toIP1")
IndexedLineSet80.setCoordIndex([0,1])
Coordinate81 = x3d.Coordinate()
Coordinate81.setPoint(x3d.doubleToFloat([-0.3,0.3,0,-0.35,0.4,0]))

IndexedLineSet80.setCoord(Coordinate81)

Shape77.setGeometry(IndexedLineSet80)

HAnimSegment74.addChild(Shape77)

HAnimJoint73.addChild(HAnimSegment74)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.setName("r_carpal_interphalangeal_1")
HAnimJoint82.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint82.setCenter(x3d.doubleToFloat([-0.35,0.4,0]))
HAnimJoint82.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint82.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment83 = x3d.HAnimSegment()
HAnimSegment83.setName("r_carpal_distal_phalanx_1")
HAnimSegment83.setDEF("hanim_r_carpal_distal_phalanx_1")
Transform84 = x3d.Transform()
Transform84.setTranslation(x3d.doubleToFloat([-0.35,0.4,0]))
Shape85 = x3d.Shape()
Shape85.setUSE("HAnimJointShape")

Transform84.addChild(Shape85)

HAnimSegment83.addChild(Transform84)
Shape86 = x3d.Shape()
Appearance87 = x3d.Appearance()
Material88 = x3d.Material()
Material88.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance87.setMaterial(Material88)

Shape86.setAppearance(Appearance87)
IndexedLineSet89 = x3d.IndexedLineSet()
IndexedLineSet89.setDEF("fingertip_r_carpal_interphalangeal_1")
IndexedLineSet89.setCoordIndex([0,1])
Coordinate90 = x3d.Coordinate()
Coordinate90.setPoint(x3d.doubleToFloat([-0.35,0.4,0,-0.36,0.45,0]))

IndexedLineSet89.setCoord(Coordinate90)

Shape86.setGeometry(IndexedLineSet89)

HAnimSegment83.addChild(Shape86)

HAnimJoint82.addChild(HAnimSegment83)

HAnimJoint73.addChild(HAnimJoint82)

HAnimJoint64.addChild(HAnimJoint73)

HAnimJoint52.addChild(HAnimJoint64)

HAnimJoint30.addChild(HAnimJoint52)

HAnimJoint30.addComments(x3d.CommentsBlock("""MC2"""))
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.setName("r_midcarpal_2")
HAnimJoint91.setDEF("hanim_r_midcarpal_2")
HAnimJoint91.setCenter(x3d.doubleToFloat([-0.07,0.07,0]))
HAnimJoint91.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint91.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.setName("r_trapezoid")
HAnimSegment92.setDEF("hanim_r_trapezoid")
Transform93 = x3d.Transform()
Transform93.setTranslation(x3d.doubleToFloat([-0.07,0.07,0]))
Shape94 = x3d.Shape()
Shape94.setUSE("HAnimNewJointShape")

Transform93.addChild(Shape94)

HAnimSegment92.addChild(Transform93)
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
Material97 = x3d.Material()
Material97.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance96.setMaterial(Material97)

Shape95.setAppearance(Appearance96)
IndexedLineSet98 = x3d.IndexedLineSet()
IndexedLineSet98.setDEF("MC12toCMC2")
IndexedLineSet98.setCoordIndex([0,1])
Coordinate99 = x3d.Coordinate()
Coordinate99.setPoint(x3d.doubleToFloat([-0.1,0.1,0,-0.1,0.2,0]))

IndexedLineSet98.setCoord(Coordinate99)

Shape95.setGeometry(IndexedLineSet98)

HAnimSegment92.addChild(Shape95)

HAnimJoint91.addChild(HAnimSegment92)

HAnimJoint91.addComments(x3d.CommentsBlock("""index finger"""))
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.setName("r_carpometacarpal_2")
HAnimJoint100.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint100.setCenter(x3d.doubleToFloat([-0.1,0.2,0]))
HAnimJoint100.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint100.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment101 = x3d.HAnimSegment()
HAnimSegment101.setName("r_metacarpal_2")
HAnimSegment101.setDEF("hanim_r_metacarpal_2")
Transform102 = x3d.Transform()
Transform102.setTranslation(x3d.doubleToFloat([-0.1,0.2,0]))
Shape103 = x3d.Shape()
Shape103.setUSE("HAnimJointShape")

Transform102.addChild(Shape103)

HAnimSegment101.addChild(Transform102)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance105.setMaterial(Material106)

Shape104.setAppearance(Appearance105)
IndexedLineSet107 = x3d.IndexedLineSet()
IndexedLineSet107.setDEF("CMC2toMCP2")
IndexedLineSet107.setCoordIndex([0,1])
Coordinate108 = x3d.Coordinate()
Coordinate108.setPoint(x3d.doubleToFloat([-0.1,0.2,0,-0.15,0.5,0]))

IndexedLineSet107.setCoord(Coordinate108)

Shape104.setGeometry(IndexedLineSet107)

HAnimSegment101.addChild(Shape104)

HAnimJoint100.addChild(HAnimSegment101)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.setName("r_metacarpophalangeal_2")
HAnimJoint109.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint109.setCenter(x3d.doubleToFloat([-0.15,0.5,0]))
HAnimJoint109.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint109.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.setName("r_carpal_proximal_phalanx_2")
HAnimSegment110.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform111 = x3d.Transform()
Transform111.setTranslation(x3d.doubleToFloat([-0.15,0.5,0]))
Shape112 = x3d.Shape()
Shape112.setUSE("HAnimJointShape")

Transform111.addChild(Shape112)

HAnimSegment110.addChild(Transform111)
Shape113 = x3d.Shape()
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()
Material115.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance114.setMaterial(Material115)

Shape113.setAppearance(Appearance114)
IndexedLineSet116 = x3d.IndexedLineSet()
IndexedLineSet116.setDEF("MCP2toPIP2")
IndexedLineSet116.setCoordIndex([0,1])
Coordinate117 = x3d.Coordinate()
Coordinate117.setPoint(x3d.doubleToFloat([-0.15,0.5,0,-0.2,0.7,0]))

IndexedLineSet116.setCoord(Coordinate117)

Shape113.setGeometry(IndexedLineSet116)

HAnimSegment110.addChild(Shape113)

HAnimJoint109.addChild(HAnimSegment110)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint118.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint118.setCenter(x3d.doubleToFloat([-0.2,0.7,0]))
HAnimJoint118.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint118.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.setName("r_carpal_middle_phalanx_2")
HAnimSegment119.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform120 = x3d.Transform()
Transform120.setTranslation(x3d.doubleToFloat([-0.2,0.7,0]))
Shape121 = x3d.Shape()
Shape121.setUSE("HAnimJointShape")

Transform120.addChild(Shape121)

HAnimSegment119.addChild(Transform120)
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance123.setMaterial(Material124)

Shape122.setAppearance(Appearance123)
IndexedLineSet125 = x3d.IndexedLineSet()
IndexedLineSet125.setDEF("PIP2toDIP2")
IndexedLineSet125.setCoordIndex([0,1])
Coordinate126 = x3d.Coordinate()
Coordinate126.setPoint(x3d.doubleToFloat([-0.2,0.7,0,-0.24,0.87,0]))

IndexedLineSet125.setCoord(Coordinate126)

Shape122.setGeometry(IndexedLineSet125)

HAnimSegment119.addChild(Shape122)

HAnimJoint118.addChild(HAnimSegment119)
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint127.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint127.setCenter(x3d.doubleToFloat([-0.24,0.87,0]))
HAnimJoint127.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint127.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment128 = x3d.HAnimSegment()
HAnimSegment128.setName("r_carpal_distal_phalanx_2")
HAnimSegment128.setDEF("hanim_r_carpal_distal_phalanx_2")
Transform129 = x3d.Transform()
Transform129.setTranslation(x3d.doubleToFloat([-0.24,0.87,0]))
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimJointShape")

Transform129.addChild(Shape130)

HAnimSegment128.addChild(Transform129)
Shape131 = x3d.Shape()
Appearance132 = x3d.Appearance()
Material133 = x3d.Material()
Material133.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance132.setMaterial(Material133)

Shape131.setAppearance(Appearance132)
IndexedLineSet134 = x3d.IndexedLineSet()
IndexedLineSet134.setDEF("fingertip_r_carpal_distal_interphalangeal_2")
IndexedLineSet134.setCoordIndex([0,1])
Coordinate135 = x3d.Coordinate()
Coordinate135.setPoint(x3d.doubleToFloat([-0.24,0.87,0,-0.26,0.93,0]))

IndexedLineSet134.setCoord(Coordinate135)

Shape131.setGeometry(IndexedLineSet134)

HAnimSegment128.addChild(Shape131)

HAnimJoint127.addChild(HAnimSegment128)

HAnimJoint118.addChild(HAnimJoint127)

HAnimJoint109.addChild(HAnimJoint118)

HAnimJoint100.addChild(HAnimJoint109)

HAnimJoint91.addChild(HAnimJoint100)

HAnimJoint30.addChild(HAnimJoint91)

HAnimJoint30.addComments(x3d.CommentsBlock("""MC3"""))
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.setName("r_midcarpal_3")
HAnimJoint136.setDEF("hanim_r_midcarpal_3")
HAnimJoint136.setCenter(x3d.doubleToFloat([0,0.07,0]))
HAnimJoint136.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint136.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment137 = x3d.HAnimSegment()
HAnimSegment137.setName("r_capitate")
HAnimSegment137.setDEF("hanim_r_capitate")
Transform138 = x3d.Transform()
Transform138.setTranslation(x3d.doubleToFloat([0,0.07,0]))
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimNewJointShape")

Transform138.addChild(Shape139)

HAnimSegment137.addChild(Transform138)
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance141.setMaterial(Material142)

Shape140.setAppearance(Appearance141)
IndexedLineSet143 = x3d.IndexedLineSet()
IndexedLineSet143.setDEF("MC3toCMC3")
IndexedLineSet143.setCoordIndex([0,1])
Coordinate144 = x3d.Coordinate()
Coordinate144.setPoint(x3d.doubleToFloat([0,0.07,0,0,0.2,0]))

IndexedLineSet143.setCoord(Coordinate144)

Shape140.setGeometry(IndexedLineSet143)

HAnimSegment137.addChild(Shape140)

HAnimJoint136.addChild(HAnimSegment137)

HAnimJoint136.addComments(x3d.CommentsBlock("""Middle fingle"""))
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.setName("r_carpometacarpal_3")
HAnimJoint145.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint145.setCenter(x3d.doubleToFloat([0,0.2,0]))
HAnimJoint145.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint145.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment146 = x3d.HAnimSegment()
HAnimSegment146.setName("r_metacarpal_3")
HAnimSegment146.setDEF("hanim_r_metacarpal_3")
Transform147 = x3d.Transform()
Transform147.setTranslation(x3d.doubleToFloat([0,0.2,0]))
Shape148 = x3d.Shape()
Shape148.setUSE("HAnimJointShape")

Transform147.addChild(Shape148)

HAnimSegment146.addChild(Transform147)
Shape149 = x3d.Shape()
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()
Material151.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance150.setMaterial(Material151)

Shape149.setAppearance(Appearance150)
IndexedLineSet152 = x3d.IndexedLineSet()
IndexedLineSet152.setDEF("CMC3toMCP3")
IndexedLineSet152.setCoordIndex([0,1])
Coordinate153 = x3d.Coordinate()
Coordinate153.setPoint(x3d.doubleToFloat([0,0.2,0,-0.03,0.5,0]))

IndexedLineSet152.setCoord(Coordinate153)

Shape149.setGeometry(IndexedLineSet152)

HAnimSegment146.addChild(Shape149)

HAnimJoint145.addChild(HAnimSegment146)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setName("r_metacarpophalangeal_3")
HAnimJoint154.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint154.setCenter(x3d.doubleToFloat([-0.03,0.5,0]))
HAnimJoint154.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint154.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.setName("r_carpal_proximal_phalanx_3")
HAnimSegment155.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform156 = x3d.Transform()
Transform156.setTranslation(x3d.doubleToFloat([-0.03,0.5,0]))
Shape157 = x3d.Shape()
Shape157.setUSE("HAnimJointShape")

Transform156.addChild(Shape157)

HAnimSegment155.addChild(Transform156)
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
IndexedLineSet161 = x3d.IndexedLineSet()
IndexedLineSet161.setDEF("MCP3toPIP3")
IndexedLineSet161.setCoordIndex([0,1])
Coordinate162 = x3d.Coordinate()
Coordinate162.setPoint(x3d.doubleToFloat([-0.03,0.5,0,-0.05,0.75,0]))

IndexedLineSet161.setCoord(Coordinate162)

Shape158.setGeometry(IndexedLineSet161)

HAnimSegment155.addChild(Shape158)

HAnimJoint154.addChild(HAnimSegment155)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint163.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint163.setCenter(x3d.doubleToFloat([-0.05,0.75,0]))
HAnimJoint163.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint163.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.setName("r_carpal_middle_phalanx_3")
HAnimSegment164.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform165 = x3d.Transform()
Transform165.setTranslation(x3d.doubleToFloat([-0.05,0.75,0]))
Shape166 = x3d.Shape()
Shape166.setUSE("HAnimJointShape")

Transform165.addChild(Shape166)

HAnimSegment164.addChild(Transform165)
Shape167 = x3d.Shape()
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()
Material169.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance168.setMaterial(Material169)

Shape167.setAppearance(Appearance168)
IndexedLineSet170 = x3d.IndexedLineSet()
IndexedLineSet170.setDEF("PIP3toDIP3")
IndexedLineSet170.setCoordIndex([0,1])
Coordinate171 = x3d.Coordinate()
Coordinate171.setPoint(x3d.doubleToFloat([-0.05,0.75,0,-0.08,0.96,0]))

IndexedLineSet170.setCoord(Coordinate171)

Shape167.setGeometry(IndexedLineSet170)

HAnimSegment164.addChild(Shape167)

HAnimJoint163.addChild(HAnimSegment164)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint172.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint172.setCenter(x3d.doubleToFloat([-0.08,0.96,0]))
HAnimJoint172.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint172.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.setName("r_carpal_distal_phalanx_3")
HAnimSegment173.setDEF("hanim_r_carpal_distal_phalanx_3")
Transform174 = x3d.Transform()
Transform174.setTranslation(x3d.doubleToFloat([-0.08,0.96,0]))
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimJointShape")

Transform174.addChild(Shape175)

HAnimSegment173.addChild(Transform174)
Shape176 = x3d.Shape()
Appearance177 = x3d.Appearance()
Material178 = x3d.Material()
Material178.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance177.setMaterial(Material178)

Shape176.setAppearance(Appearance177)
IndexedLineSet179 = x3d.IndexedLineSet()
IndexedLineSet179.setDEF("fingertip_r_carpal_distal_interphalangeal_3")
IndexedLineSet179.setCoordIndex([0,1])
Coordinate180 = x3d.Coordinate()
Coordinate180.setPoint(x3d.doubleToFloat([-0.08,0.96,0,-0.09,1.05,0]))

IndexedLineSet179.setCoord(Coordinate180)

Shape176.setGeometry(IndexedLineSet179)

HAnimSegment173.addChild(Shape176)

HAnimJoint172.addChild(HAnimSegment173)

HAnimJoint163.addChild(HAnimJoint172)

HAnimJoint154.addChild(HAnimJoint163)

HAnimJoint145.addChild(HAnimJoint154)

HAnimJoint136.addChild(HAnimJoint145)

HAnimJoint30.addChild(HAnimJoint136)

HAnimJoint30.addComments(x3d.CommentsBlock("""MC4_5"""))
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setName("r_midcarpal_4_5")
HAnimJoint181.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint181.setCenter(x3d.doubleToFloat([0.1,0.1,0]))
HAnimJoint181.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint181.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.setName("r_hamate")
HAnimSegment182.setDEF("hanim_r_hamate")
Transform183 = x3d.Transform()
Transform183.setTranslation(x3d.doubleToFloat([0.1,0.1,0]))
Shape184 = x3d.Shape()
Shape184.setUSE("HAnimNewJointShape")

Transform183.addChild(Shape184)

HAnimSegment182.addChild(Transform183)
Shape185 = x3d.Shape()
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()
Material187.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance186.setMaterial(Material187)

Shape185.setAppearance(Appearance186)
IndexedLineSet188 = x3d.IndexedLineSet()
IndexedLineSet188.setDEF("MC45toCMC4")
IndexedLineSet188.setCoordIndex([0,1])
Coordinate189 = x3d.Coordinate()
Coordinate189.setPoint(x3d.doubleToFloat([0.1,0.1,0,0.1,0.2,0]))

IndexedLineSet188.setCoord(Coordinate189)

Shape185.setGeometry(IndexedLineSet188)

HAnimSegment182.addChild(Shape185)
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance191.setMaterial(Material192)

Shape190.setAppearance(Appearance191)
IndexedLineSet193 = x3d.IndexedLineSet()
IndexedLineSet193.setDEF("MC45toCMC5")
IndexedLineSet193.setCoordIndex([0,1])
Coordinate194 = x3d.Coordinate()
Coordinate194.setPoint(x3d.doubleToFloat([0.1,0.1,0,0.15,0.17,0]))

IndexedLineSet193.setCoord(Coordinate194)

Shape190.setGeometry(IndexedLineSet193)

HAnimSegment182.addChild(Shape190)

HAnimJoint181.addChild(HAnimSegment182)

HAnimJoint181.addComments(x3d.CommentsBlock("""ring finger"""))
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.setName("r_carpometacarpal_4")
HAnimJoint195.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint195.setCenter(x3d.doubleToFloat([0.1,0.2,0]))
HAnimJoint195.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint195.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.setName("r_metacarpal_4")
HAnimSegment196.setDEF("hanim_r_metacarpal_4")
Transform197 = x3d.Transform()
Transform197.setTranslation(x3d.doubleToFloat([0.1,0.2,0]))
Shape198 = x3d.Shape()
Shape198.setUSE("HAnimJointShape")

Transform197.addChild(Shape198)

HAnimSegment196.addChild(Transform197)
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance200.setMaterial(Material201)

Shape199.setAppearance(Appearance200)
IndexedLineSet202 = x3d.IndexedLineSet()
IndexedLineSet202.setDEF("CMC4toMCP4")
IndexedLineSet202.setCoordIndex([0,1])
Coordinate203 = x3d.Coordinate()
Coordinate203.setPoint(x3d.doubleToFloat([0.1,0.2,0,0.1,0.47,0]))

IndexedLineSet202.setCoord(Coordinate203)

Shape199.setGeometry(IndexedLineSet202)

HAnimSegment196.addChild(Shape199)

HAnimJoint195.addChild(HAnimSegment196)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.setName("r_metacarpophalangeal_4")
HAnimJoint204.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint204.setCenter(x3d.doubleToFloat([0.1,0.47,0]))
HAnimJoint204.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint204.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.setName("r_carpal_proximal_phalanx_4")
HAnimSegment205.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform206 = x3d.Transform()
Transform206.setTranslation(x3d.doubleToFloat([0.1,0.47,0]))
Shape207 = x3d.Shape()
Shape207.setUSE("HAnimJointShape")

Transform206.addChild(Shape207)

HAnimSegment205.addChild(Transform206)
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()
Material210.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance209.setMaterial(Material210)

Shape208.setAppearance(Appearance209)
IndexedLineSet211 = x3d.IndexedLineSet()
IndexedLineSet211.setDEF("MCP4toPIP4")
IndexedLineSet211.setCoordIndex([0,1])
Coordinate212 = x3d.Coordinate()
Coordinate212.setPoint(x3d.doubleToFloat([0.1,0.47,0,0.1,0.7,0]))

IndexedLineSet211.setCoord(Coordinate212)

Shape208.setGeometry(IndexedLineSet211)

HAnimSegment205.addChild(Shape208)

HAnimJoint204.addChild(HAnimSegment205)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint213.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint213.setCenter(x3d.doubleToFloat([0.1,0.7,0]))
HAnimJoint213.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint213.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.setName("r_carpal_middle_phalanx_4")
HAnimSegment214.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform215 = x3d.Transform()
Transform215.setTranslation(x3d.doubleToFloat([0.1,0.7,0]))
Shape216 = x3d.Shape()
Shape216.setUSE("HAnimJointShape")

Transform215.addChild(Shape216)

HAnimSegment214.addChild(Transform215)
Shape217 = x3d.Shape()
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance218.setMaterial(Material219)

Shape217.setAppearance(Appearance218)
IndexedLineSet220 = x3d.IndexedLineSet()
IndexedLineSet220.setDEF("PIP4toDIP4")
IndexedLineSet220.setCoordIndex([0,1])
Coordinate221 = x3d.Coordinate()
Coordinate221.setPoint(x3d.doubleToFloat([0.1,0.7,0,0.1,0.93,0]))

IndexedLineSet220.setCoord(Coordinate221)

Shape217.setGeometry(IndexedLineSet220)

HAnimSegment214.addChild(Shape217)

HAnimJoint213.addChild(HAnimSegment214)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint222.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint222.setCenter(x3d.doubleToFloat([0.1,0.93,0]))
HAnimJoint222.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint222.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment223 = x3d.HAnimSegment()
HAnimSegment223.setName("r_carpal_distal_phalanx_4")
HAnimSegment223.setDEF("hanim_r_carpal_distal_phalanx_4")
Transform224 = x3d.Transform()
Transform224.setTranslation(x3d.doubleToFloat([0.1,0.93,0]))
Shape225 = x3d.Shape()
Shape225.setUSE("HAnimJointShape")

Transform224.addChild(Shape225)

HAnimSegment223.addChild(Transform224)
Shape226 = x3d.Shape()
Appearance227 = x3d.Appearance()
Material228 = x3d.Material()
Material228.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance227.setMaterial(Material228)

Shape226.setAppearance(Appearance227)
IndexedLineSet229 = x3d.IndexedLineSet()
IndexedLineSet229.setDEF("fingertip_r_carpal_distal_interphalangeal_4")
IndexedLineSet229.setCoordIndex([0,1])
Coordinate230 = x3d.Coordinate()
Coordinate230.setPoint(x3d.doubleToFloat([0.1,0.93,0,0.1,1,0]))

IndexedLineSet229.setCoord(Coordinate230)

Shape226.setGeometry(IndexedLineSet229)

HAnimSegment223.addChild(Shape226)

HAnimJoint222.addChild(HAnimSegment223)

HAnimJoint213.addChild(HAnimJoint222)

HAnimJoint204.addChild(HAnimJoint213)

HAnimJoint195.addChild(HAnimJoint204)

HAnimJoint181.addChild(HAnimJoint195)

HAnimJoint181.addComments(x3d.CommentsBlock("""pinky finger"""))
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setName("r_carpometacarpal_5")
HAnimJoint231.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint231.setCenter(x3d.doubleToFloat([0.15,0.17,0]))
HAnimJoint231.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint231.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.setName("r_metacarpal_5")
HAnimSegment232.setDEF("hanim_r_metacarpal_5")
Transform233 = x3d.Transform()
Transform233.setTranslation(x3d.doubleToFloat([0.15,0.17,0]))
Shape234 = x3d.Shape()
Shape234.setUSE("HAnimJointShape")

Transform233.addChild(Shape234)

HAnimSegment232.addChild(Transform233)
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance()
Material237 = x3d.Material()
Material237.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance236.setMaterial(Material237)

Shape235.setAppearance(Appearance236)
IndexedLineSet238 = x3d.IndexedLineSet()
IndexedLineSet238.setDEF("CMC5toMCP5")
IndexedLineSet238.setCoordIndex([0,1])
Coordinate239 = x3d.Coordinate()
Coordinate239.setPoint(x3d.doubleToFloat([0.15,0.17,0,0.2,0.4,0]))

IndexedLineSet238.setCoord(Coordinate239)

Shape235.setGeometry(IndexedLineSet238)

HAnimSegment232.addChild(Shape235)

HAnimJoint231.addChild(HAnimSegment232)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setName("r_metacarpophalangeal_5")
HAnimJoint240.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint240.setCenter(x3d.doubleToFloat([0.2,0.4,0]))
HAnimJoint240.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint240.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.setName("r_carpal_proximal_phalanx_5")
HAnimSegment241.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform242 = x3d.Transform()
Transform242.setTranslation(x3d.doubleToFloat([0.2,0.4,0]))
Shape243 = x3d.Shape()
Shape243.setUSE("HAnimJointShape")

Transform242.addChild(Shape243)

HAnimSegment241.addChild(Transform242)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
IndexedLineSet247 = x3d.IndexedLineSet()
IndexedLineSet247.setDEF("MCP5toPIP5")
IndexedLineSet247.setCoordIndex([0,1])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint(x3d.doubleToFloat([0.2,0.4,0,0.23,0.63,0]))

IndexedLineSet247.setCoord(Coordinate248)

Shape244.setGeometry(IndexedLineSet247)

HAnimSegment241.addChild(Shape244)

HAnimJoint240.addChild(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint249.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint249.setCenter(x3d.doubleToFloat([0.23,0.63,0]))
HAnimJoint249.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint249.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.setName("r_carpal_middle_phalanx_5")
HAnimSegment250.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform251 = x3d.Transform()
Transform251.setTranslation(x3d.doubleToFloat([0.23,0.63,0]))
Shape252 = x3d.Shape()
Shape252.setUSE("HAnimJointShape")

Transform251.addChild(Shape252)

HAnimSegment250.addChild(Transform251)
Shape253 = x3d.Shape()
Appearance254 = x3d.Appearance()
Material255 = x3d.Material()
Material255.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance254.setMaterial(Material255)

Shape253.setAppearance(Appearance254)
IndexedLineSet256 = x3d.IndexedLineSet()
IndexedLineSet256.setDEF("PIP5toDIP5")
IndexedLineSet256.setCoordIndex([0,1])
Coordinate257 = x3d.Coordinate()
Coordinate257.setPoint(x3d.doubleToFloat([0.23,0.63,0,0.25,0.79,0]))

IndexedLineSet256.setCoord(Coordinate257)

Shape253.setGeometry(IndexedLineSet256)

HAnimSegment250.addChild(Shape253)

HAnimJoint249.addChild(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint258.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint258.setCenter(x3d.doubleToFloat([0.25,0.79,0]))
HAnimJoint258.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint258.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.setName("r_carpal_distal_phalanx_5")
HAnimSegment259.setDEF("hanim_r_carpal_distal_phalanx_5")
Transform260 = x3d.Transform()
Transform260.setTranslation(x3d.doubleToFloat([0.25,0.79,0]))
Shape261 = x3d.Shape()
Shape261.setUSE("HAnimJointShape")

Transform260.addChild(Shape261)

HAnimSegment259.addChild(Transform260)
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Material264 = x3d.Material()
Material264.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance263.setMaterial(Material264)

Shape262.setAppearance(Appearance263)
IndexedLineSet265 = x3d.IndexedLineSet()
IndexedLineSet265.setDEF("fingertip_r_carpal_distal_interphalangeal_5")
IndexedLineSet265.setCoordIndex([0,1])
Coordinate266 = x3d.Coordinate()
Coordinate266.setPoint(x3d.doubleToFloat([0.25,0.79,0,0.26,0.85,0]))

IndexedLineSet265.setCoord(Coordinate266)

Shape262.setGeometry(IndexedLineSet265)

HAnimSegment259.addChild(Shape262)

HAnimJoint258.addChild(HAnimSegment259)

HAnimJoint249.addChild(HAnimJoint258)

HAnimJoint240.addChild(HAnimJoint249)

HAnimJoint231.addChild(HAnimJoint240)

HAnimJoint181.addChild(HAnimJoint231)

HAnimJoint30.addChild(HAnimJoint181)

HAnimJoint29.addChild(HAnimJoint30)

HAnimHumanoid26.addSkeleton(HAnimJoint29)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setContainerFieldOverride("joints")
HAnimJoint267.setUSE("hanim_humanoid_root")

HAnimHumanoid26.addJoints(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setContainerFieldOverride("joints")
HAnimJoint268.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setContainerFieldOverride("joints")
HAnimJoint269.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setContainerFieldOverride("joints")
HAnimJoint270.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setContainerFieldOverride("joints")
HAnimJoint271.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setContainerFieldOverride("joints")
HAnimJoint272.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setContainerFieldOverride("joints")
HAnimJoint273.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setContainerFieldOverride("joints")
HAnimJoint274.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setContainerFieldOverride("joints")
HAnimJoint275.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setContainerFieldOverride("joints")
HAnimJoint276.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setContainerFieldOverride("joints")
HAnimJoint277.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setContainerFieldOverride("joints")
HAnimJoint278.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setContainerFieldOverride("joints")
HAnimJoint279.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setContainerFieldOverride("joints")
HAnimJoint280.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid26.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setContainerFieldOverride("joints")
HAnimJoint281.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid26.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setContainerFieldOverride("joints")
HAnimJoint282.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid26.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setContainerFieldOverride("joints")
HAnimJoint283.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid26.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setContainerFieldOverride("joints")
HAnimJoint284.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid26.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setContainerFieldOverride("joints")
HAnimJoint285.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid26.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setContainerFieldOverride("joints")
HAnimJoint286.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid26.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setContainerFieldOverride("joints")
HAnimJoint287.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid26.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setContainerFieldOverride("joints")
HAnimJoint288.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid26.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setContainerFieldOverride("joints")
HAnimJoint289.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid26.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setContainerFieldOverride("joints")
HAnimJoint290.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid26.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setContainerFieldOverride("joints")
HAnimJoint291.setUSE("hanim_r_radiocarpal")

HAnimHumanoid26.addJoints(HAnimJoint291)

Scene24.addChild(HAnimHumanoid26)

X3D0.setScene(Scene24)
X3D0.toFileX3D("../data/HAnimModelHandRight.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimModelHandRight.new.graalpy.x3dj")

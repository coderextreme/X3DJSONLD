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
meta3.setContent("HAnimModelFootRight.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Right foot, using high-fidelity definitions for HAnim version 2.0")

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
meta8.setName("warning")
meta8.setContent("not yet to scale")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("TODO")
meta9.setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("TODO")
meta10.setContent("Add links to figures")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("TODO")
meta11.setContent("Add Viewpoints to enable inspection")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("info")
meta12.setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("warning")
meta13.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/documents/specifications/19774/V2.0")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("subject")
meta20.setContent("X3D HAnim humanoid animation")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("TODO")
meta21.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("identifier")
meta22.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("generator")
meta23.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)

X3D0.setHead(head1)
Scene25 = x3d.Scene()
WorldInfo26 = x3d.WorldInfo()
WorldInfo26.setTitle("HAnimModelFootRight.x3d")

Scene25.addChild(WorldInfo26)
HAnimHumanoid27 = x3d.HAnimHumanoid()
HAnimHumanoid27.setName("Foot_Right")
HAnimHumanoid27.setDEF("hanim_Foot_Right")
HAnimHumanoid27.setLoa(4)
HAnimHumanoid27.setVersion("2.0")

HAnimHumanoid27.addComments(x3d.CommentsBlock("""original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"""))
MetadataSet28 = x3d.MetadataSet()
MetadataSet28.setName("HAnimHumanoid.info")
MetadataSet28.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString29 = x3d.MetadataString()
MetadataString29.setName("authorName")
MetadataString29.setValue(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])

MetadataSet28.setMetadata(MetadataString29)

HAnimHumanoid27.setMetadata(MetadataSet28)
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("humanoid_root")
HAnimJoint30.setDEF("hanim_humanoid_root")
HAnimJoint30.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint30.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint30.setContainerFieldOverride("skeleton")

HAnimJoint30.addComments(x3d.CommentsBlock("""Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model"""))
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.setName("r_talocrural")
HAnimJoint31.setDEF("hanim_r_talocrural")
HAnimJoint31.setDescription("connection joint of foot to leg above")
HAnimJoint31.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint31.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.setName("r_talus")
HAnimSegment32.setDEF("hanim_r_talus")
Transform33 = x3d.Transform()
Shape34 = x3d.Shape()
Shape34.setDEF("HAnimJointShape")
Sphere35 = x3d.Sphere()
Sphere35.setRadius(0.025)

Shape34.setGeometry(Sphere35)
Appearance36 = x3d.Appearance()
Appearance36.setDEF("HAnimJointAppearance")
Material37 = x3d.Material()
Material37.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance36.setMaterial(Material37)

Shape34.setAppearance(Appearance36)

Transform33.addChild(Shape34)

HAnimSegment32.addChild(Transform33)
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
IndexedLineSet41 = x3d.IndexedLineSet()
IndexedLineSet41.setDEF("TCtoTCN")
IndexedLineSet41.setCoordIndex([0,1])
Coordinate42 = x3d.Coordinate()
Coordinate42.setPoint(x3d.doubleToFloat([0,0,0,0,-0.3,0]))

IndexedLineSet41.setCoord(Coordinate42)

Shape38.setGeometry(IndexedLineSet41)

HAnimSegment32.addChild(Shape38)
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance44.setMaterial(Material45)

Shape43.setAppearance(Appearance44)
IndexedLineSet46 = x3d.IndexedLineSet()
IndexedLineSet46.setDEF("TCtoCC")
IndexedLineSet46.setCoordIndex([0,1])
Coordinate47 = x3d.Coordinate()
Coordinate47.setPoint(x3d.doubleToFloat([0,0,0,-0.2,0.3,0]))

IndexedLineSet46.setCoord(Coordinate47)

Shape43.setGeometry(IndexedLineSet46)

HAnimSegment32.addChild(Shape43)

HAnimJoint31.addChild(HAnimSegment32)

HAnimJoint31.addComments(x3d.CommentsBlock("""TCN"""))
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setName("r_talocalcaneonavicular")
HAnimJoint48.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint48.setCenter(x3d.doubleToFloat([0,-0.3,0]))
HAnimJoint48.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint48.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment49 = x3d.HAnimSegment()
HAnimSegment49.setName("r_navicular")
HAnimSegment49.setDEF("hanim_r_navicular")
Transform50 = x3d.Transform()
Transform50.setTranslation(x3d.doubleToFloat([0,-0.3,0]))
Shape51 = x3d.Shape()
Shape51.setUSE("HAnimJointShape")

Transform50.addChild(Shape51)

HAnimSegment49.addChild(Transform50)
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
IndexedLineSet55 = x3d.IndexedLineSet()
IndexedLineSet55.setDEF("TCNtoCN1")
IndexedLineSet55.setCoordIndex([0,1])
Coordinate56 = x3d.Coordinate()
Coordinate56.setPoint(x3d.doubleToFloat([0,-0.3,0,0.1,-0.45,0]))

IndexedLineSet55.setCoord(Coordinate56)

Shape52.setGeometry(IndexedLineSet55)

HAnimSegment49.addChild(Shape52)
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
IndexedLineSet60 = x3d.IndexedLineSet()
IndexedLineSet60.setDEF("TCNtoCN2")
IndexedLineSet60.setCoordIndex([0,1])
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint(x3d.doubleToFloat([0,-0.3,0,0,-0.45,0]))

IndexedLineSet60.setCoord(Coordinate61)

Shape57.setGeometry(IndexedLineSet60)

HAnimSegment49.addChild(Shape57)
Shape62 = x3d.Shape()
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance63.setMaterial(Material64)

Shape62.setAppearance(Appearance63)
IndexedLineSet65 = x3d.IndexedLineSet()
IndexedLineSet65.setDEF("TCNtoCN3")
IndexedLineSet65.setCoordIndex([0,1])
Coordinate66 = x3d.Coordinate()
Coordinate66.setPoint(x3d.doubleToFloat([0,-0.3,0,-0.1,-0.4,0]))

IndexedLineSet65.setCoord(Coordinate66)

Shape62.setGeometry(IndexedLineSet65)

HAnimSegment49.addChild(Shape62)

HAnimJoint48.addChild(HAnimSegment49)

HAnimJoint48.addComments(x3d.CommentsBlock("""CN1"""))
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.setName("r_cuneonavicular_1")
HAnimJoint67.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint67.setCenter(x3d.doubleToFloat([0.1,-0.45,0]))
HAnimJoint67.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint67.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment68 = x3d.HAnimSegment()
HAnimSegment68.setName("r_cuneiform_1")
HAnimSegment68.setDEF("hanim_r_cuneiform_1")
Transform69 = x3d.Transform()
Transform69.setTranslation(x3d.doubleToFloat([0.1,-0.45,0]))
Shape70 = x3d.Shape()
Shape70.setUSE("HAnimJointShape")

Transform69.addChild(Shape70)

HAnimSegment68.addChild(Transform69)
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance72.setMaterial(Material73)

Shape71.setAppearance(Appearance72)
IndexedLineSet74 = x3d.IndexedLineSet()
IndexedLineSet74.setDEF("CN1toTMT1")
IndexedLineSet74.setCoordIndex([0,1])
Coordinate75 = x3d.Coordinate()
Coordinate75.setPoint(x3d.doubleToFloat([0.1,-0.45,0,0.1,-0.6,0]))

IndexedLineSet74.setCoord(Coordinate75)

Shape71.setGeometry(IndexedLineSet74)

HAnimSegment68.addChild(Shape71)

HAnimJoint67.addChild(HAnimSegment68)
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.setName("r_tarsometatarsal_1")
HAnimJoint76.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint76.setCenter(x3d.doubleToFloat([0.1,-0.6,0]))
HAnimJoint76.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint76.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment77 = x3d.HAnimSegment()
HAnimSegment77.setName("r_metatarsal_1")
HAnimSegment77.setDEF("hanim_r_metatarsal_1")
Transform78 = x3d.Transform()
Transform78.setTranslation(x3d.doubleToFloat([0.1,-0.6,0]))
Shape79 = x3d.Shape()
Shape79.setUSE("HAnimJointShape")

Transform78.addChild(Shape79)

HAnimSegment77.addChild(Transform78)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance81.setMaterial(Material82)

Shape80.setAppearance(Appearance81)
IndexedLineSet83 = x3d.IndexedLineSet()
IndexedLineSet83.setDEF("TMT1toMTP1")
IndexedLineSet83.setCoordIndex([0,1])
Coordinate84 = x3d.Coordinate()
Coordinate84.setPoint(x3d.doubleToFloat([0.1,-0.6,0,0.1,-0.9,0]))

IndexedLineSet83.setCoord(Coordinate84)

Shape80.setGeometry(IndexedLineSet83)

HAnimSegment77.addChild(Shape80)

HAnimJoint76.addChild(HAnimSegment77)
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.setName("r_metatarsophalangeal_1")
HAnimJoint85.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint85.setCenter(x3d.doubleToFloat([0.1,-0.9,0]))
HAnimJoint85.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint85.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment86 = x3d.HAnimSegment()
HAnimSegment86.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment86.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform87 = x3d.Transform()
Transform87.setTranslation(x3d.doubleToFloat([0.1,-0.9,0]))
Shape88 = x3d.Shape()
Shape88.setUSE("HAnimJointShape")

Transform87.addChild(Shape88)

HAnimSegment86.addChild(Transform87)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance90.setMaterial(Material91)

Shape89.setAppearance(Appearance90)
IndexedLineSet92 = x3d.IndexedLineSet()
IndexedLineSet92.setDEF("MTP1toIP1")
IndexedLineSet92.setCoordIndex([0,1])
Coordinate93 = x3d.Coordinate()
Coordinate93.setPoint(x3d.doubleToFloat([0.1,-0.9,0,0.1,-1.05,0]))

IndexedLineSet92.setCoord(Coordinate93)

Shape89.setGeometry(IndexedLineSet92)

HAnimSegment86.addChild(Shape89)

HAnimJoint85.addChild(HAnimSegment86)
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.setName("r_tarsal_interphalangeal_1")
HAnimJoint94.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint94.setCenter(x3d.doubleToFloat([0.1,-1.05,0]))
HAnimJoint94.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint94.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment95 = x3d.HAnimSegment()
HAnimSegment95.setName("r_tarsal_distal_phalanx_1")
HAnimSegment95.setDEF("hanim_r_tarsal_distal_phalanx_1")
Transform96 = x3d.Transform()
Transform96.setTranslation(x3d.doubleToFloat([0.1,-1.05,0]))
Shape97 = x3d.Shape()
Shape97.setUSE("HAnimJointShape")

Transform96.addChild(Shape97)

HAnimSegment95.addChild(Transform96)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance99.setMaterial(Material100)

Shape98.setAppearance(Appearance99)
IndexedLineSet101 = x3d.IndexedLineSet()
IndexedLineSet101.setDEF("tiptoe_r_interphalangeal_")
IndexedLineSet101.setCoordIndex([0,1])
Coordinate102 = x3d.Coordinate()
Coordinate102.setPoint(x3d.doubleToFloat([0.1,-1.05,0,0.1,-1.1,0]))

IndexedLineSet101.setCoord(Coordinate102)

Shape98.setGeometry(IndexedLineSet101)

HAnimSegment95.addChild(Shape98)

HAnimJoint94.addChild(HAnimSegment95)

HAnimJoint85.addChild(HAnimJoint94)

HAnimJoint76.addChild(HAnimJoint85)

HAnimJoint67.addChild(HAnimJoint76)

HAnimJoint48.addChild(HAnimJoint67)

HAnimJoint48.addComments(x3d.CommentsBlock("""CN2"""))
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("r_cuneonavicular_2")
HAnimJoint103.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint103.setCenter(x3d.doubleToFloat([0,-0.45,0]))
HAnimJoint103.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint103.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.setName("r_cuneiform_2")
HAnimSegment104.setDEF("hanim_r_cuneiform_2")
Transform105 = x3d.Transform()
Transform105.setTranslation(x3d.doubleToFloat([0,-0.45,0]))
Shape106 = x3d.Shape()
Shape106.setUSE("HAnimJointShape")

Transform105.addChild(Shape106)

HAnimSegment104.addChild(Transform105)
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance108.setMaterial(Material109)

Shape107.setAppearance(Appearance108)
IndexedLineSet110 = x3d.IndexedLineSet()
IndexedLineSet110.setDEF("CN2toTMT2")
IndexedLineSet110.setCoordIndex([0,1])
Coordinate111 = x3d.Coordinate()
Coordinate111.setPoint(x3d.doubleToFloat([0,-0.45,0,-0.05,-0.6,0]))

IndexedLineSet110.setCoord(Coordinate111)

Shape107.setGeometry(IndexedLineSet110)

HAnimSegment104.addChild(Shape107)

HAnimJoint103.addChild(HAnimSegment104)
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.setName("r_tarsometatarsal_2")
HAnimJoint112.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint112.setCenter(x3d.doubleToFloat([-0.05,-0.6,0]))
HAnimJoint112.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint112.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment113 = x3d.HAnimSegment()
HAnimSegment113.setName("r_metatarsal_2")
HAnimSegment113.setDEF("hanim_r_metatarsal_2")
Transform114 = x3d.Transform()
Transform114.setTranslation(x3d.doubleToFloat([-0.05,-0.6,0]))
Shape115 = x3d.Shape()
Shape115.setUSE("HAnimJointShape")

Transform114.addChild(Shape115)

HAnimSegment113.addChild(Transform114)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedLineSet119 = x3d.IndexedLineSet()
IndexedLineSet119.setDEF("TMT2toMTP2")
IndexedLineSet119.setCoordIndex([0,1])
Coordinate120 = x3d.Coordinate()
Coordinate120.setPoint(x3d.doubleToFloat([-0.05,-0.6,0,-0.05,-0.9,0]))

IndexedLineSet119.setCoord(Coordinate120)

Shape116.setGeometry(IndexedLineSet119)

HAnimSegment113.addChild(Shape116)

HAnimJoint112.addChild(HAnimSegment113)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.setName("r_metatarsophalangeal_2")
HAnimJoint121.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint121.setCenter(x3d.doubleToFloat([-0.05,-0.9,0]))
HAnimJoint121.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint121.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment122 = x3d.HAnimSegment()
HAnimSegment122.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment122.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform123 = x3d.Transform()
Transform123.setTranslation(x3d.doubleToFloat([-0.05,-0.9,0]))
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimJointShape")

Transform123.addChild(Shape124)

HAnimSegment122.addChild(Transform123)
Shape125 = x3d.Shape()
Appearance126 = x3d.Appearance()
Material127 = x3d.Material()
Material127.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance126.setMaterial(Material127)

Shape125.setAppearance(Appearance126)
IndexedLineSet128 = x3d.IndexedLineSet()
IndexedLineSet128.setDEF("MTP2toPIP2")
IndexedLineSet128.setCoordIndex([0,1])
Coordinate129 = x3d.Coordinate()
Coordinate129.setPoint(x3d.doubleToFloat([-0.05,-0.9,0,-0.05,-1.05,0]))

IndexedLineSet128.setCoord(Coordinate129)

Shape125.setGeometry(IndexedLineSet128)

HAnimSegment122.addChild(Shape125)

HAnimJoint121.addChild(HAnimSegment122)
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint130.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint130.setCenter(x3d.doubleToFloat([-0.05,-1.05,0]))
HAnimJoint130.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint130.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment131 = x3d.HAnimSegment()
HAnimSegment131.setName("r_tarsal_middle_phalanx_2")
HAnimSegment131.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform132 = x3d.Transform()
Transform132.setTranslation(x3d.doubleToFloat([-0.05,-1.05,0]))
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimJointShape")

Transform132.addChild(Shape133)

HAnimSegment131.addChild(Transform132)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
IndexedLineSet137 = x3d.IndexedLineSet()
IndexedLineSet137.setDEF("PIP2toDIP2")
IndexedLineSet137.setCoordIndex([0,1])
Coordinate138 = x3d.Coordinate()
Coordinate138.setPoint(x3d.doubleToFloat([-0.05,-1.05,0,-0.05,-1.12,0]))

IndexedLineSet137.setCoord(Coordinate138)

Shape134.setGeometry(IndexedLineSet137)

HAnimSegment131.addChild(Shape134)

HAnimJoint130.addChild(HAnimSegment131)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint139.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint139.setCenter(x3d.doubleToFloat([-0.05,-1.12,0]))
HAnimJoint139.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint139.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment140 = x3d.HAnimSegment()
HAnimSegment140.setName("r_tarsal_distal_phalanx_2")
HAnimSegment140.setDEF("hanim_r_tarsal_distal_phalanx_2")
Transform141 = x3d.Transform()
Transform141.setTranslation(x3d.doubleToFloat([-0.05,-1.12,0]))
Shape142 = x3d.Shape()
Shape142.setUSE("HAnimJointShape")

Transform141.addChild(Shape142)

HAnimSegment140.addChild(Transform141)
Shape143 = x3d.Shape()
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance144.setMaterial(Material145)

Shape143.setAppearance(Appearance144)
IndexedLineSet146 = x3d.IndexedLineSet()
IndexedLineSet146.setDEF("tiptoe_r_tarsal_distal_interphalangeal_2")
IndexedLineSet146.setCoordIndex([0,1])
Coordinate147 = x3d.Coordinate()
Coordinate147.setPoint(x3d.doubleToFloat([-0.05,-1.12,0,-0.05,-1.16,0]))

IndexedLineSet146.setCoord(Coordinate147)

Shape143.setGeometry(IndexedLineSet146)

HAnimSegment140.addChild(Shape143)

HAnimJoint139.addChild(HAnimSegment140)

HAnimJoint130.addChild(HAnimJoint139)

HAnimJoint121.addChild(HAnimJoint130)

HAnimJoint112.addChild(HAnimJoint121)

HAnimJoint103.addChild(HAnimJoint112)

HAnimJoint48.addChild(HAnimJoint103)

HAnimJoint48.addComments(x3d.CommentsBlock("""CN3"""))
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("r_cuneonavicular_3")
HAnimJoint148.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint148.setCenter(x3d.doubleToFloat([-0.1,-0.4,0]))
HAnimJoint148.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint148.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.setName("r_cuneiform_3")
HAnimSegment149.setDEF("hanim_r_cuneiform_3")
Transform150 = x3d.Transform()
Transform150.setTranslation(x3d.doubleToFloat([-0.1,-0.4,0]))
Shape151 = x3d.Shape()
Shape151.setUSE("HAnimJointShape")

Transform150.addChild(Shape151)

HAnimSegment149.addChild(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance153.setMaterial(Material154)

Shape152.setAppearance(Appearance153)
IndexedLineSet155 = x3d.IndexedLineSet()
IndexedLineSet155.setDEF("CN3toTMT3")
IndexedLineSet155.setCoordIndex([0,1])
Coordinate156 = x3d.Coordinate()
Coordinate156.setPoint(x3d.doubleToFloat([-0.1,-0.4,0,-0.15,-0.6,0]))

IndexedLineSet155.setCoord(Coordinate156)

Shape152.setGeometry(IndexedLineSet155)

HAnimSegment149.addChild(Shape152)

HAnimJoint148.addChild(HAnimSegment149)
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setName("r_tarsometatarsal_3")
HAnimJoint157.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint157.setCenter(x3d.doubleToFloat([-0.15,-0.6,0]))
HAnimJoint157.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint157.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment158 = x3d.HAnimSegment()
HAnimSegment158.setName("r_metatarsal_3")
HAnimSegment158.setDEF("hanim_r_metatarsal_3")
Transform159 = x3d.Transform()
Transform159.setTranslation(x3d.doubleToFloat([-0.15,-0.6,0]))
Shape160 = x3d.Shape()
Shape160.setUSE("HAnimJointShape")

Transform159.addChild(Shape160)

HAnimSegment158.addChild(Transform159)
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance162.setMaterial(Material163)

Shape161.setAppearance(Appearance162)
IndexedLineSet164 = x3d.IndexedLineSet()
IndexedLineSet164.setDEF("TMT3toMTP3")
IndexedLineSet164.setCoordIndex([0,1])
Coordinate165 = x3d.Coordinate()
Coordinate165.setPoint(x3d.doubleToFloat([-0.15,-0.6,0,-0.15,-0.9,0]))

IndexedLineSet164.setCoord(Coordinate165)

Shape161.setGeometry(IndexedLineSet164)

HAnimSegment158.addChild(Shape161)

HAnimJoint157.addChild(HAnimSegment158)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.setName("r_metatarsophalangeal_3")
HAnimJoint166.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint166.setCenter(x3d.doubleToFloat([-0.15,-0.9,0]))
HAnimJoint166.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint166.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment167 = x3d.HAnimSegment()
HAnimSegment167.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment167.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform168 = x3d.Transform()
Transform168.setTranslation(x3d.doubleToFloat([-0.15,-0.9,0]))
Shape169 = x3d.Shape()
Shape169.setUSE("HAnimJointShape")

Transform168.addChild(Shape169)

HAnimSegment167.addChild(Transform168)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedLineSet173 = x3d.IndexedLineSet()
IndexedLineSet173.setDEF("MTP3toPIP3")
IndexedLineSet173.setCoordIndex([0,1])
Coordinate174 = x3d.Coordinate()
Coordinate174.setPoint(x3d.doubleToFloat([-0.15,-0.9,0,-0.15,-1.05,0]))

IndexedLineSet173.setCoord(Coordinate174)

Shape170.setGeometry(IndexedLineSet173)

HAnimSegment167.addChild(Shape170)

HAnimJoint166.addChild(HAnimSegment167)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint175.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint175.setCenter(x3d.doubleToFloat([-0.15,-1.05,0]))
HAnimJoint175.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint175.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.setName("r_tarsal_middle_phalanx_3")
HAnimSegment176.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform177 = x3d.Transform()
Transform177.setTranslation(x3d.doubleToFloat([-0.15,-1.05,0]))
Shape178 = x3d.Shape()
Shape178.setUSE("HAnimJointShape")

Transform177.addChild(Shape178)

HAnimSegment176.addChild(Transform177)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.setDEF("PIP3toDIP3")
IndexedLineSet182.setCoordIndex([0,1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint(x3d.doubleToFloat([-0.15,-1.05,0,-0.15,-1.13,0]))

IndexedLineSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedLineSet182)

HAnimSegment176.addChild(Shape179)

HAnimJoint175.addChild(HAnimSegment176)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint184.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint184.setCenter(x3d.doubleToFloat([-0.15,-1.13,0]))
HAnimJoint184.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint184.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.setName("r_tarsal_distal_phalanx_3")
HAnimSegment185.setDEF("hanim_r_tarsal_distal_phalanx_3")
Transform186 = x3d.Transform()
Transform186.setTranslation(x3d.doubleToFloat([-0.15,-1.13,0]))
Shape187 = x3d.Shape()
Shape187.setUSE("HAnimJointShape")

Transform186.addChild(Shape187)

HAnimSegment185.addChild(Transform186)
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance189.setMaterial(Material190)

Shape188.setAppearance(Appearance189)
IndexedLineSet191 = x3d.IndexedLineSet()
IndexedLineSet191.setDEF("tiptoe_r_tarsal_distal_interphalangeal_3")
IndexedLineSet191.setCoordIndex([0,1])
Coordinate192 = x3d.Coordinate()
Coordinate192.setPoint(x3d.doubleToFloat([-0.15,-1.13,0,-0.15,-1.16,0]))

IndexedLineSet191.setCoord(Coordinate192)

Shape188.setGeometry(IndexedLineSet191)

HAnimSegment185.addChild(Shape188)

HAnimJoint184.addChild(HAnimSegment185)

HAnimJoint175.addChild(HAnimJoint184)

HAnimJoint166.addChild(HAnimJoint175)

HAnimJoint157.addChild(HAnimJoint166)

HAnimJoint148.addChild(HAnimJoint157)

HAnimJoint48.addChild(HAnimJoint148)

HAnimJoint31.addChild(HAnimJoint48)

HAnimJoint31.addComments(x3d.CommentsBlock("""CC"""))
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.setName("r_calcaneocuboid")
HAnimJoint193.setDEF("hanim_r_calcaneocuboid")
HAnimJoint193.setCenter(x3d.doubleToFloat([-0.2,0.3,0]))
HAnimJoint193.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint193.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.setName("r_calcaneus")
HAnimSegment194.setDEF("hanim_r_calcaneus")
Transform195 = x3d.Transform()
Transform195.setTranslation(x3d.doubleToFloat([-0.2,0.3,0]))
Shape196 = x3d.Shape()
Shape196.setUSE("HAnimJointShape")

Transform195.addChild(Shape196)

HAnimSegment194.addChild(Transform195)
Shape197 = x3d.Shape()
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance198.setMaterial(Material199)

Shape197.setAppearance(Appearance198)
IndexedLineSet200 = x3d.IndexedLineSet()
IndexedLineSet200.setDEF("CCtoTT")
IndexedLineSet200.setCoordIndex([0,1])
Coordinate201 = x3d.Coordinate()
Coordinate201.setPoint(x3d.doubleToFloat([-0.2,0.3,0,-0.21,-0.3,0]))

IndexedLineSet200.setCoord(Coordinate201)

Shape197.setGeometry(IndexedLineSet200)

HAnimSegment194.addChild(Shape197)

HAnimJoint193.addChild(HAnimSegment194)

HAnimJoint193.addComments(x3d.CommentsBlock("""TT"""))
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.setName("r_transversetarsal")
HAnimJoint202.setDEF("hanim_r_transversetarsal")
HAnimJoint202.setCenter(x3d.doubleToFloat([-0.21,-0.3,0]))
HAnimJoint202.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint202.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.setName("r_cuboid")
HAnimSegment203.setDEF("hanim_r_cuboid")
Transform204 = x3d.Transform()
Transform204.setTranslation(x3d.doubleToFloat([-0.21,-0.3,0]))
Shape205 = x3d.Shape()
Shape205.setUSE("HAnimJointShape")

Transform204.addChild(Shape205)

HAnimSegment203.addChild(Transform204)
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance207.setMaterial(Material208)

Shape206.setAppearance(Appearance207)
IndexedLineSet209 = x3d.IndexedLineSet()
IndexedLineSet209.setDEF("TTtoTMT4")
IndexedLineSet209.setCoordIndex([0,1])
Coordinate210 = x3d.Coordinate()
Coordinate210.setPoint(x3d.doubleToFloat([-0.21,-0.3,0,-0.25,-0.58,0]))

IndexedLineSet209.setCoord(Coordinate210)

Shape206.setGeometry(IndexedLineSet209)

HAnimSegment203.addChild(Shape206)
Shape211 = x3d.Shape()
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance212.setMaterial(Material213)

Shape211.setAppearance(Appearance212)
IndexedLineSet214 = x3d.IndexedLineSet()
IndexedLineSet214.setDEF("TTtoTMT5")
IndexedLineSet214.setCoordIndex([0,1])
Coordinate215 = x3d.Coordinate()
Coordinate215.setPoint(x3d.doubleToFloat([-0.21,-0.3,0,-0.33,-0.52,0]))

IndexedLineSet214.setCoord(Coordinate215)

Shape211.setGeometry(IndexedLineSet214)

HAnimSegment203.addChild(Shape211)

HAnimJoint202.addChild(HAnimSegment203)

HAnimJoint202.addComments(x3d.CommentsBlock("""TMT4"""))
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.setName("r_tarsometatarsal_4")
HAnimJoint216.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint216.setCenter(x3d.doubleToFloat([-0.25,-0.58,0]))
HAnimJoint216.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint216.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.setName("r_metatarsal_4")
HAnimSegment217.setDEF("hanim_r_metatarsal_4")
Transform218 = x3d.Transform()
Transform218.setTranslation(x3d.doubleToFloat([-0.25,-0.58,0]))
Shape219 = x3d.Shape()
Shape219.setUSE("HAnimJointShape")

Transform218.addChild(Shape219)

HAnimSegment217.addChild(Transform218)
Shape220 = x3d.Shape()
Appearance221 = x3d.Appearance()
Material222 = x3d.Material()
Material222.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance221.setMaterial(Material222)

Shape220.setAppearance(Appearance221)
IndexedLineSet223 = x3d.IndexedLineSet()
IndexedLineSet223.setDEF("TMT4toMTP4")
IndexedLineSet223.setCoordIndex([0,1])
Coordinate224 = x3d.Coordinate()
Coordinate224.setPoint(x3d.doubleToFloat([-0.25,-0.58,0,-0.25,-0.87,0]))

IndexedLineSet223.setCoord(Coordinate224)

Shape220.setGeometry(IndexedLineSet223)

HAnimSegment217.addChild(Shape220)

HAnimJoint216.addChild(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.setName("r_metatarsophalangeal_4")
HAnimJoint225.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint225.setCenter(x3d.doubleToFloat([-0.25,-0.87,0]))
HAnimJoint225.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint225.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment226.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform227 = x3d.Transform()
Transform227.setTranslation(x3d.doubleToFloat([-0.25,-0.87,0]))
Shape228 = x3d.Shape()
Shape228.setUSE("HAnimJointShape")

Transform227.addChild(Shape228)

HAnimSegment226.addChild(Transform227)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance230.setMaterial(Material231)

Shape229.setAppearance(Appearance230)
IndexedLineSet232 = x3d.IndexedLineSet()
IndexedLineSet232.setDEF("MTP4toPIP4")
IndexedLineSet232.setCoordIndex([0,1])
Coordinate233 = x3d.Coordinate()
Coordinate233.setPoint(x3d.doubleToFloat([-0.25,-0.87,0,-0.25,-1,0]))

IndexedLineSet232.setCoord(Coordinate233)

Shape229.setGeometry(IndexedLineSet232)

HAnimSegment226.addChild(Shape229)

HAnimJoint225.addChild(HAnimSegment226)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint234.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint234.setCenter(x3d.doubleToFloat([-0.25,-1,0]))
HAnimJoint234.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint234.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.setName("r_tarsal_middle_phalanx_4")
HAnimSegment235.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform236 = x3d.Transform()
Transform236.setTranslation(x3d.doubleToFloat([-0.25,-1,0]))
Shape237 = x3d.Shape()
Shape237.setUSE("HAnimJointShape")

Transform236.addChild(Shape237)

HAnimSegment235.addChild(Transform236)
Shape238 = x3d.Shape()
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance239.setMaterial(Material240)

Shape238.setAppearance(Appearance239)
IndexedLineSet241 = x3d.IndexedLineSet()
IndexedLineSet241.setDEF("PIP4toDIP4")
IndexedLineSet241.setCoordIndex([0,1])
Coordinate242 = x3d.Coordinate()
Coordinate242.setPoint(x3d.doubleToFloat([-0.25,-1,0,-0.25,-1.1,0]))

IndexedLineSet241.setCoord(Coordinate242)

Shape238.setGeometry(IndexedLineSet241)

HAnimSegment235.addChild(Shape238)

HAnimJoint234.addChild(HAnimSegment235)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint243.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint243.setCenter(x3d.doubleToFloat([-0.25,-1.1,0]))
HAnimJoint243.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint243.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment244 = x3d.HAnimSegment()
HAnimSegment244.setName("r_tarsal_distal_phalanx_4")
HAnimSegment244.setDEF("hanim_r_tarsal_distal_phalanx_4")
Transform245 = x3d.Transform()
Transform245.setTranslation(x3d.doubleToFloat([-0.25,-1.1,0]))
Shape246 = x3d.Shape()
Shape246.setUSE("HAnimJointShape")

Transform245.addChild(Shape246)

HAnimSegment244.addChild(Transform245)
Shape247 = x3d.Shape()
Appearance248 = x3d.Appearance()
Material249 = x3d.Material()
Material249.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance248.setMaterial(Material249)

Shape247.setAppearance(Appearance248)
IndexedLineSet250 = x3d.IndexedLineSet()
IndexedLineSet250.setDEF("tiptoe_r_tarsal_distal_interphalangeal_4")
IndexedLineSet250.setCoordIndex([0,1])
Coordinate251 = x3d.Coordinate()
Coordinate251.setPoint(x3d.doubleToFloat([-0.25,-1.1,0,-0.25,-1.15,0]))

IndexedLineSet250.setCoord(Coordinate251)

Shape247.setGeometry(IndexedLineSet250)

HAnimSegment244.addChild(Shape247)

HAnimJoint243.addChild(HAnimSegment244)

HAnimJoint234.addChild(HAnimJoint243)

HAnimJoint225.addChild(HAnimJoint234)

HAnimJoint216.addChild(HAnimJoint225)

HAnimJoint202.addChild(HAnimJoint216)

HAnimJoint202.addComments(x3d.CommentsBlock("""TMT5"""))
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.setName("r_tarsometatarsal_5")
HAnimJoint252.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint252.setCenter(x3d.doubleToFloat([-0.33,-0.52,0]))
HAnimJoint252.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint252.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment253 = x3d.HAnimSegment()
HAnimSegment253.setName("r_metatarsal_5")
HAnimSegment253.setDEF("hanim_r_metatarsal_5")
Transform254 = x3d.Transform()
Transform254.setTranslation(x3d.doubleToFloat([-0.33,-0.52,0]))
Shape255 = x3d.Shape()
Shape255.setUSE("HAnimJointShape")

Transform254.addChild(Shape255)

HAnimSegment253.addChild(Transform254)
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance257.setMaterial(Material258)

Shape256.setAppearance(Appearance257)
IndexedLineSet259 = x3d.IndexedLineSet()
IndexedLineSet259.setDEF("TMT5toMTP5")
IndexedLineSet259.setCoordIndex([0,1])
Coordinate260 = x3d.Coordinate()
Coordinate260.setPoint(x3d.doubleToFloat([-0.33,-0.52,0,-0.34,-0.8,0]))

IndexedLineSet259.setCoord(Coordinate260)

Shape256.setGeometry(IndexedLineSet259)

HAnimSegment253.addChild(Shape256)

HAnimJoint252.addChild(HAnimSegment253)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.setName("r_metatarsophalangeal_5")
HAnimJoint261.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint261.setCenter(x3d.doubleToFloat([-0.34,-0.8,0]))
HAnimJoint261.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint261.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment262 = x3d.HAnimSegment()
HAnimSegment262.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment262.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform263 = x3d.Transform()
Transform263.setTranslation(x3d.doubleToFloat([-0.34,-0.8,0]))
Shape264 = x3d.Shape()
Shape264.setUSE("HAnimJointShape")

Transform263.addChild(Shape264)

HAnimSegment262.addChild(Transform263)
Shape265 = x3d.Shape()
Appearance266 = x3d.Appearance()
Material267 = x3d.Material()
Material267.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance266.setMaterial(Material267)

Shape265.setAppearance(Appearance266)
IndexedLineSet268 = x3d.IndexedLineSet()
IndexedLineSet268.setDEF("MTP5toPIP5")
IndexedLineSet268.setCoordIndex([0,1])
Coordinate269 = x3d.Coordinate()
Coordinate269.setPoint(x3d.doubleToFloat([-0.34,-0.8,0,-0.34,-0.95,0]))

IndexedLineSet268.setCoord(Coordinate269)

Shape265.setGeometry(IndexedLineSet268)

HAnimSegment262.addChild(Shape265)

HAnimJoint261.addChild(HAnimSegment262)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint270.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint270.setCenter(x3d.doubleToFloat([-0.34,-0.95,0]))
HAnimJoint270.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint270.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment271 = x3d.HAnimSegment()
HAnimSegment271.setName("r_tarsal_middle_phalanx_5")
HAnimSegment271.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform272 = x3d.Transform()
Transform272.setTranslation(x3d.doubleToFloat([-0.34,-0.95,0]))
Shape273 = x3d.Shape()
Shape273.setUSE("HAnimJointShape")

Transform272.addChild(Shape273)

HAnimSegment271.addChild(Transform272)
Shape274 = x3d.Shape()
Appearance275 = x3d.Appearance()
Material276 = x3d.Material()
Material276.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance275.setMaterial(Material276)

Shape274.setAppearance(Appearance275)
IndexedLineSet277 = x3d.IndexedLineSet()
IndexedLineSet277.setDEF("PIP5toDIP5")
IndexedLineSet277.setCoordIndex([0,1])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint(x3d.doubleToFloat([-0.34,-0.95,0,-0.34,-1.05,0]))

IndexedLineSet277.setCoord(Coordinate278)

Shape274.setGeometry(IndexedLineSet277)

HAnimSegment271.addChild(Shape274)

HAnimJoint270.addChild(HAnimSegment271)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint279.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint279.setCenter(x3d.doubleToFloat([-0.34,-1.05,0]))
HAnimJoint279.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint279.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment280 = x3d.HAnimSegment()
HAnimSegment280.setName("r_tarsal_distal_phalanx_5")
HAnimSegment280.setDEF("hanim_r_tarsal_distal_phalanx_5")
Transform281 = x3d.Transform()
Transform281.setTranslation(x3d.doubleToFloat([-0.34,-1.05,0]))
Shape282 = x3d.Shape()
Shape282.setUSE("HAnimJointShape")

Transform281.addChild(Shape282)

HAnimSegment280.addChild(Transform281)
Shape283 = x3d.Shape()
Appearance284 = x3d.Appearance()
Material285 = x3d.Material()
Material285.setEmissiveColor(x3d.doubleToFloat([1,1,1]))

Appearance284.setMaterial(Material285)

Shape283.setAppearance(Appearance284)
IndexedLineSet286 = x3d.IndexedLineSet()
IndexedLineSet286.setDEF("tiptoe_r_tarsal_distal_interphalangeal_5")
IndexedLineSet286.setCoordIndex([0,1])
Coordinate287 = x3d.Coordinate()
Coordinate287.setPoint(x3d.doubleToFloat([-0.34,-1.05,0,-0.34,-1.08,0]))

IndexedLineSet286.setCoord(Coordinate287)

Shape283.setGeometry(IndexedLineSet286)

HAnimSegment280.addChild(Shape283)

HAnimJoint279.addChild(HAnimSegment280)

HAnimJoint270.addChild(HAnimJoint279)

HAnimJoint261.addChild(HAnimJoint270)

HAnimJoint252.addChild(HAnimJoint261)

HAnimJoint202.addChild(HAnimJoint252)

HAnimJoint193.addChild(HAnimJoint202)

HAnimJoint31.addChild(HAnimJoint193)

HAnimJoint30.addChild(HAnimJoint31)

HAnimHumanoid27.addSkeleton(HAnimJoint30)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setContainerFieldOverride("joints")
HAnimJoint288.setUSE("hanim_humanoid_root")

HAnimHumanoid27.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setContainerFieldOverride("joints")
HAnimJoint289.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid27.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setContainerFieldOverride("joints")
HAnimJoint290.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid27.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setContainerFieldOverride("joints")
HAnimJoint291.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid27.addJoints(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setContainerFieldOverride("joints")
HAnimJoint292.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid27.addJoints(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.setContainerFieldOverride("joints")
HAnimJoint293.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid27.addJoints(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setContainerFieldOverride("joints")
HAnimJoint294.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setContainerFieldOverride("joints")
HAnimJoint295.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setContainerFieldOverride("joints")
HAnimJoint296.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setContainerFieldOverride("joints")
HAnimJoint297.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setContainerFieldOverride("joints")
HAnimJoint298.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid27.addJoints(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setContainerFieldOverride("joints")
HAnimJoint299.setUSE("hanim_r_talocrural")

HAnimHumanoid27.addJoints(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setContainerFieldOverride("joints")
HAnimJoint300.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setContainerFieldOverride("joints")
HAnimJoint301.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.setContainerFieldOverride("joints")
HAnimJoint302.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.setContainerFieldOverride("joints")
HAnimJoint303.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setContainerFieldOverride("joints")
HAnimJoint304.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid27.addJoints(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setContainerFieldOverride("joints")
HAnimJoint305.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid27.addJoints(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setContainerFieldOverride("joints")
HAnimJoint306.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid27.addJoints(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.setContainerFieldOverride("joints")
HAnimJoint307.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid27.addJoints(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.setContainerFieldOverride("joints")
HAnimJoint308.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid27.addJoints(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.setContainerFieldOverride("joints")
HAnimJoint309.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid27.addJoints(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setContainerFieldOverride("joints")
HAnimJoint310.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid27.addJoints(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.setContainerFieldOverride("joints")
HAnimJoint311.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid27.addJoints(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.setContainerFieldOverride("joints")
HAnimJoint312.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid27.addJoints(HAnimJoint312)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.setContainerFieldOverride("joints")
HAnimJoint313.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid27.addJoints(HAnimJoint313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.setContainerFieldOverride("joints")
HAnimJoint314.setUSE("hanim_r_transversetarsal")

HAnimHumanoid27.addJoints(HAnimJoint314)

Scene25.addChild(HAnimHumanoid27)

X3D0.setScene(Scene25)
X3D0.toFileX3D("../data/HAnimModelFootRight.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimModelFootRight.new.graalpy.x3dj")

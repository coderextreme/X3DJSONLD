import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("DesignPatternsApparelMedicalSkinLayers.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Joe D. Williams")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Dick Puk")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("23 December 2022")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("2 July 2023")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("DesignPatternsApparelVariations.txt")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("warning")
meta13.setContent("Under development. This template example does not produce renderable HAnim models.")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setTitle("HAnimHumanoid skin design patterns for apparel, medical")

Scene17.addChildren(WorldInfo18)
Background19 = x3d.Background()
Background19.setSkyColor([0,0.6,0.6])

Scene17.addChildren(Background19)
Group20 = x3d.Group()
Group20.setDEF("MultipleHumanoids")
MetadataString21 = x3d.MetadataString()
MetadataString21.setName("HAnimArchitecture")
MetadataString21.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")
MetadataString21.setValue(["E.4 Multiple humanoids per file"])

Group20.setMetadata(MetadataString21)
#==============================
HAnimHumanoid22 = x3d.HAnimHumanoid()
HAnimHumanoid22.setName("SimpleSkeleton")
HAnimHumanoid22.setDEF("a_SimpleSkeleton")
HAnimHumanoid22.setVersion("2.0")
HAnimJoint23 = x3d.HAnimJoint()
HAnimJoint23.setName("humanoid_root")
HAnimSegment24 = x3d.HAnimSegment()
HAnimSegment24.setName("sacrum")
Shape25 = x3d.Shape()
Shape25.setDEF("JointVisualization")

HAnimSegment24.addChildren(Shape25)
Shape26 = x3d.Shape()
Shape26.setDEF("SegmentVisualization")

HAnimSegment24.addChildren(Shape26)
HAnimSite27 = x3d.HAnimSite()
HAnimSite27.setName("feature01_tip")
HAnimSite27.setDEF("a_feature01_tip")
Shape28 = x3d.Shape()
Shape28.setDEF("SiteVisualization")

HAnimSite27.addChildren(Shape28)

HAnimSegment24.addChildren(HAnimSite27)

HAnimJoint23.addChildren(HAnimSegment24)

HAnimHumanoid22.setSkeleton(HAnimJoint23)

Group20.addChildren(HAnimHumanoid22)
#==============================
HAnimHumanoid29 = x3d.HAnimHumanoid()
HAnimHumanoid29.setName("SimpleSkeletonMesh")
HAnimHumanoid29.setDEF("b_SimpleSkeletonMesh")
HAnimHumanoid29.setVersion("2.0")
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("humanoid_root")
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.setName("sacrum")
Shape32 = x3d.Shape()
IndexedFaceSet33 = x3d.IndexedFaceSet()
IndexedFaceSet33.setDEF("SegmentBoneMesh")

Shape32.setGeometry(IndexedFaceSet33)

HAnimSegment31.addChildren(Shape32)

HAnimJoint30.addChildren(HAnimSegment31)

HAnimHumanoid29.setSkeleton(HAnimJoint30)

Group20.addChildren(HAnimHumanoid29)
#==============================
HAnimHumanoid34 = x3d.HAnimHumanoid()
HAnimHumanoid34.setName("SkinIndexedGeometry")
HAnimHumanoid34.setDEF("c_SkinIndexedGeometry")
HAnimHumanoid34.setVersion("2.0")
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.setName("humanoid_root")
HAnimSegment36 = x3d.HAnimSegment()
HAnimSegment36.setName("sacrum")

HAnimJoint35.addChildren(HAnimSegment36)

HAnimHumanoid34.setSkeleton(HAnimJoint35)
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.setDEF("SkinMeshIFS")

HAnimHumanoid34.setSkin(IndexedFaceSet37)

Group20.addChildren(HAnimHumanoid34)
#==============================
HAnimHumanoid38 = x3d.HAnimHumanoid()
HAnimHumanoid38.setName("SkinShapeIndexedGeometry")
HAnimHumanoid38.setDEF("d_SkinShapeIndexedGeometry")
HAnimHumanoid38.setVersion("2.0")
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setName("humanoid_root")
HAnimSegment40 = x3d.HAnimSegment()
HAnimSegment40.setName("sacrum")

HAnimJoint39.addChildren(HAnimSegment40)

HAnimHumanoid38.setSkeleton(HAnimJoint39)
Shape41 = x3d.Shape()
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.setUSE("SkinMeshIFS")

Shape41.setGeometry(IndexedFaceSet42)

HAnimHumanoid38.setSkin(Shape41)

Group20.addChildren(HAnimHumanoid38)
#==============================
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.setName("SkinSwitchShapeIndexedGeometry")
HAnimHumanoid43.setDEF("e_SkinSwitchShapeIndexedGeometry")
HAnimHumanoid43.setVersion("2.0")
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.setName("humanoid_root")
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.setName("sacrum")

HAnimJoint44.addChildren(HAnimSegment45)

HAnimHumanoid43.setSkeleton(HAnimJoint44)
#TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape46 = x3d.Shape()
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.setDEF("IndexedSkinMeshIFS")
Coordinate48 = x3d.Coordinate()
Coordinate48.setDEF("SkinMeshCoordinate")

IndexedFaceSet47.setCoord(Coordinate48)

Shape46.setGeometry(IndexedFaceSet47)

HAnimHumanoid43.setSkin(Shape46)

Group20.addChildren(HAnimHumanoid43)
#similarly for LOD
#==============================
HAnimHumanoid49 = x3d.HAnimHumanoid()
HAnimHumanoid49.setName("SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid49.setDEF("f_SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid49.setVersion("2.0")
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.setName("humanoid_root")
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.setName("sacrum")

HAnimJoint50.addChildren(HAnimSegment51)

HAnimHumanoid49.setSkeleton(HAnimJoint50)
Shape52 = x3d.Shape()
IndexedFaceSet53 = x3d.IndexedFaceSet()
IndexedFaceSet53.setDEF("TwoPartIndexedSkinMesh")
Coordinate54 = x3d.Coordinate()
Coordinate54.setDEF("TwoPartSkinMesh")

IndexedFaceSet53.setCoord(Coordinate54)

Shape52.setGeometry(IndexedFaceSet53)

HAnimHumanoid49.setSkin(Shape52)

Group20.addChildren(HAnimHumanoid49)
#==============================
HAnimHumanoid55 = x3d.HAnimHumanoid()
HAnimHumanoid55.setName("ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid55.setDEF("g_ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid55.setVersion("2.0")
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.setName("humanoid_root")
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.setName("sacrum")

HAnimJoint56.addChildren(HAnimSegment57)

HAnimHumanoid55.setSkeleton(HAnimJoint56)
Shape58 = x3d.Shape()

HAnimHumanoid55.setSkin(Shape58)
#allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
#TODO proposed for X3D4.1 <Shape containerField='apparel'/>

Group20.addChildren(HAnimHumanoid55)
#==============================
HAnimHumanoid59 = x3d.HAnimHumanoid()
HAnimHumanoid59.setName("AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid59.setDEF("h_AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid59.setVersion("2.0")
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.setName("humanoid_root")
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.setName("sacrum")

HAnimJoint60.addChildren(HAnimSegment61)

HAnimHumanoid59.setSkeleton(HAnimJoint60)
#allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape62 = x3d.Shape()

HAnimHumanoid59.setSkin(Shape62)

Group20.addChildren(HAnimHumanoid59)
#==============================

Scene17.addChildren(Group20)
Viewpoint63 = x3d.Viewpoint()
Viewpoint63.setDEF("ViewHelpText")
Viewpoint63.setDescription("Select text to see website")
Viewpoint63.setPosition([0,0,12])

Scene17.addChildren(Viewpoint63)
#Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor64 = x3d.Anchor()
Anchor64.setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches")
Anchor64.setParameter(["target=blank"])
Anchor64.setUrl(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"])
Shape65 = x3d.Shape()
#TODO adjust Text string and Box size, then set Material transparency='1'
Text66 = x3d.Text()
Text66.setString(["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"])
FontStyle67 = x3d.FontStyle()
FontStyle67.setFamily(["SANS"])
FontStyle67.setJustify(["MIDDLE","MIDDLE"])
FontStyle67.setSize(0.6)
FontStyle67.setStyle("BOLD")

Text66.setFontStyle(FontStyle67)

Shape65.setGeometry(Text66)
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.setDiffuseColor([0.9,0.9,0.9])

Appearance68.setMaterial(Material69)

Shape65.setAppearance(Appearance68)

Anchor64.addChildren(Shape65)
Shape70 = x3d.Shape()
#Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box71 = x3d.Box()
Box71.setSize([11,2,0.001])

Shape70.setGeometry(Box71)
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.setTransparency(1)

Appearance72.setMaterial(Material73)

Shape70.setAppearance(Appearance72)

Anchor64.addChildren(Shape70)

Scene17.addChildren(Anchor64)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3d")
X3D0.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.python.json")

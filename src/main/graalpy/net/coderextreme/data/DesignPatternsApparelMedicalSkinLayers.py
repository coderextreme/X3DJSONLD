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
component2.setLevel(2)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("DesignPatternsApparelMedicalSkinLayers.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Joe D. Williams")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("Dick Puk")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("created")
meta8.setContent("23 December 2022")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("modified")
meta9.setContent("2 July 2023")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("DesignPatternsApparelVariations.txt")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("warning")
meta14.setContent("Under development. This template example does not produce renderable HAnim models.")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("license")
meta17.setContent("../license.html")

head1.addMeta(meta17)

X3D0.setHead(head1)
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.setTitle("HAnimHumanoid skin design patterns for apparel, medical")

Scene18.addChild(WorldInfo19)
Background20 = x3d.Background()
Background20.setSkyColor(x3d.doubleToFloat([0,0.6,0.6]))

Scene18.addChild(Background20)
Group21 = x3d.Group()
Group21.setDEF("MultipleHumanoids")
MetadataString22 = x3d.MetadataString()
MetadataString22.setName("HAnimArchitecture")
MetadataString22.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")
MetadataString22.setValue(["E.4 Multiple humanoids per file"])

Group21.setMetadata(MetadataString22)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid23 = x3d.HAnimHumanoid()
HAnimHumanoid23.setName("SimpleSkeleton")
HAnimHumanoid23.setDEF("a_SimpleSkeleton")
HAnimHumanoid23.setVersion("2.0")
HAnimJoint24 = x3d.HAnimJoint()
HAnimJoint24.setName("humanoid_root")
HAnimJoint24.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint24.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint24.setContainerFieldOverride("skeleton")
HAnimSegment25 = x3d.HAnimSegment()
HAnimSegment25.setName("sacrum")
Shape26 = x3d.Shape()
Shape26.setDEF("JointVisualization")

HAnimSegment25.addChild(Shape26)
Shape27 = x3d.Shape()
Shape27.setDEF("SegmentVisualization")

HAnimSegment25.addChild(Shape27)
HAnimSite28 = x3d.HAnimSite()
HAnimSite28.setName("feature01_tip")
HAnimSite28.setDEF("a_feature01_tip")
Shape29 = x3d.Shape()
Shape29.setDEF("SiteVisualization")

HAnimSite28.addChild(Shape29)

HAnimSegment25.addChild(HAnimSite28)

HAnimJoint24.addChild(HAnimSegment25)

HAnimHumanoid23.addSkeleton(HAnimJoint24)

Group21.addChild(HAnimHumanoid23)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid30 = x3d.HAnimHumanoid()
HAnimHumanoid30.setName("SimpleSkeletonMesh")
HAnimHumanoid30.setDEF("b_SimpleSkeletonMesh")
HAnimHumanoid30.setVersion("2.0")
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.setName("humanoid_root")
HAnimJoint31.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint31.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint31.setContainerFieldOverride("skeleton")
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.setName("sacrum")
Shape33 = x3d.Shape()
IndexedFaceSet34 = x3d.IndexedFaceSet()
IndexedFaceSet34.setDEF("SegmentBoneMesh")

Shape33.setGeometry(IndexedFaceSet34)

HAnimSegment32.addChild(Shape33)

HAnimJoint31.addChild(HAnimSegment32)

HAnimHumanoid30.addSkeleton(HAnimJoint31)

Group21.addChild(HAnimHumanoid30)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid35 = x3d.HAnimHumanoid()
HAnimHumanoid35.setName("SkinIndexedGeometry")
HAnimHumanoid35.setDEF("c_SkinIndexedGeometry")
HAnimHumanoid35.setVersion("2.0")
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.setName("humanoid_root")
HAnimJoint36.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint36.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint36.setContainerFieldOverride("skeleton")
HAnimSegment37 = x3d.HAnimSegment()
HAnimSegment37.setName("sacrum")

HAnimJoint36.addChild(HAnimSegment37)

HAnimHumanoid35.addSkeleton(HAnimJoint36)
IndexedFaceSet38 = x3d.IndexedFaceSet()
IndexedFaceSet38.setDEF("SkinMeshIFS")
IndexedFaceSet38.setContainerFieldOverride("skin")

HAnimHumanoid35.addSkin(IndexedFaceSet38)

Group21.addChild(HAnimHumanoid35)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid39 = x3d.HAnimHumanoid()
HAnimHumanoid39.setName("SkinShapeIndexedGeometry")
HAnimHumanoid39.setDEF("d_SkinShapeIndexedGeometry")
HAnimHumanoid39.setVersion("2.0")
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.setName("humanoid_root")
HAnimJoint40.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint40.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint40.setContainerFieldOverride("skeleton")
HAnimSegment41 = x3d.HAnimSegment()
HAnimSegment41.setName("sacrum")

HAnimJoint40.addChild(HAnimSegment41)

HAnimHumanoid39.addSkeleton(HAnimJoint40)
Shape42 = x3d.Shape()
Shape42.setContainerFieldOverride("skin")
IndexedFaceSet43 = x3d.IndexedFaceSet()
IndexedFaceSet43.setUSE("SkinMeshIFS")

Shape42.setGeometry(IndexedFaceSet43)

HAnimHumanoid39.addSkin(Shape42)

Group21.addChild(HAnimHumanoid39)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid44 = x3d.HAnimHumanoid()
HAnimHumanoid44.setName("SkinSwitchShapeIndexedGeometry")
HAnimHumanoid44.setDEF("e_SkinSwitchShapeIndexedGeometry")
HAnimHumanoid44.setVersion("2.0")
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("humanoid_root")
HAnimJoint45.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint45.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint45.setContainerFieldOverride("skeleton")
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.setName("sacrum")

HAnimJoint45.addChild(HAnimSegment46)

HAnimHumanoid44.addSkeleton(HAnimJoint45)

HAnimHumanoid44.addComments(x3d.CommentsBlock("""TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>"""))
Shape47 = x3d.Shape()
Shape47.setContainerFieldOverride("skin")
IndexedFaceSet48 = x3d.IndexedFaceSet()
IndexedFaceSet48.setDEF("IndexedSkinMeshIFS")
Coordinate49 = x3d.Coordinate()
Coordinate49.setDEF("SkinMeshCoordinate")

IndexedFaceSet48.setCoord(Coordinate49)

Shape47.setGeometry(IndexedFaceSet48)

HAnimHumanoid44.addSkin(Shape47)

Group21.addChild(HAnimHumanoid44)

Group21.addComments(x3d.CommentsBlock("""similarly for LOD"""))

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid50 = x3d.HAnimHumanoid()
HAnimHumanoid50.setName("SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid50.setDEF("f_SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid50.setVersion("2.0")
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.setName("humanoid_root")
HAnimJoint51.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint51.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint51.setContainerFieldOverride("skeleton")
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.setName("sacrum")

HAnimJoint51.addChild(HAnimSegment52)

HAnimHumanoid50.addSkeleton(HAnimJoint51)
Shape53 = x3d.Shape()
Shape53.setContainerFieldOverride("skin")
IndexedFaceSet54 = x3d.IndexedFaceSet()
IndexedFaceSet54.setDEF("TwoPartIndexedSkinMesh")
Coordinate55 = x3d.Coordinate()
Coordinate55.setDEF("TwoPartSkinMesh")

IndexedFaceSet54.setCoord(Coordinate55)

Shape53.setGeometry(IndexedFaceSet54)

HAnimHumanoid50.addSkin(Shape53)

Group21.addChild(HAnimHumanoid50)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid56 = x3d.HAnimHumanoid()
HAnimHumanoid56.setName("ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid56.setDEF("g_ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid56.setVersion("2.0")
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.setName("humanoid_root")
HAnimJoint57.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint57.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint57.setContainerFieldOverride("skeleton")
HAnimSegment58 = x3d.HAnimSegment()
HAnimSegment58.setName("sacrum")

HAnimJoint57.addChild(HAnimSegment58)

HAnimHumanoid56.addSkeleton(HAnimJoint57)
Shape59 = x3d.Shape()
Shape59.setContainerFieldOverride("skin")

HAnimHumanoid56.addSkin(Shape59)

HAnimHumanoid56.addComments(x3d.CommentsBlock("""allow multiple Shape nodes with containerField='apparel', one for each layer of clothing"""))

HAnimHumanoid56.addComments(x3d.CommentsBlock("""TODO proposed for X3D4.1 <Shape containerField='apparel'/>"""))

Group21.addChild(HAnimHumanoid56)

Group21.addComments(x3d.CommentsBlock("""=============================="""))
HAnimHumanoid60 = x3d.HAnimHumanoid()
HAnimHumanoid60.setName("AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid60.setDEF("h_AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid60.setVersion("2.0")
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.setName("humanoid_root")
HAnimJoint61.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint61.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint61.setContainerFieldOverride("skeleton")
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.setName("sacrum")

HAnimJoint61.addChild(HAnimSegment62)

HAnimHumanoid60.addSkeleton(HAnimJoint61)

HAnimHumanoid60.addComments(x3d.CommentsBlock("""allow multiple Shape nodes with containerField='skin', one for each layer of skin"""))
Shape63 = x3d.Shape()
Shape63.setContainerFieldOverride("skin")

HAnimHumanoid60.addSkin(Shape63)

Group21.addChild(HAnimHumanoid60)

Group21.addComments(x3d.CommentsBlock("""=============================="""))

Scene18.addChild(Group21)
Viewpoint64 = x3d.Viewpoint()
Viewpoint64.setDEF("ViewHelpText")
Viewpoint64.setDescription("Select text to see website")
Viewpoint64.setPosition(x3d.doubleToFloat([0,0,12]))

Scene18.addChild(Viewpoint64)

Scene18.addComments(x3d.CommentsBlock("""Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"""))
Anchor65 = x3d.Anchor()
Anchor65.setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches")
Anchor65.setParameter(["target=blank"])
Anchor65.setUrl(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"])
Shape66 = x3d.Shape()

Shape66.addComments(x3d.CommentsBlock("""TODO adjust Text string and Box size, then set Material transparency='1'"""))
Text67 = x3d.Text()
Text67.setString(["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"])
FontStyle68 = x3d.FontStyle()
FontStyle68.setFamily(["SANS"])
FontStyle68.setJustify(["MIDDLE","MIDDLE"])
FontStyle68.setSize(0.6)
FontStyle68.setStyle("BOLD")

Text67.setFontStyle(FontStyle68)

Shape66.setGeometry(Text67)
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.setDiffuseColor(x3d.doubleToFloat([0.9,0.9,0.9]))

Appearance69.setMaterial(Material70)

Shape66.setAppearance(Appearance69)

Anchor65.addChild(Shape66)
Shape71 = x3d.Shape()

Shape71.addComments(x3d.CommentsBlock("""Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."""))
Box72 = x3d.Box()
Box72.setSize(x3d.doubleToFloat([11,2,0.001]))

Shape71.setGeometry(Box72)
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setTransparency(1)

Appearance73.setMaterial(Material74)

Shape71.setAppearance(Appearance73)

Anchor65.addChild(Shape71)

Scene18.addChild(Anchor65)

X3D0.setScene(Scene18)
X3D0.toFileX3D("../data/DesignPatternsApparelMedicalSkinLayers.new.graalpy.x3d")
X3D0.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.graalpy.x3dj")

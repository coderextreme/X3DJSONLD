print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 2

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "DesignPatternsApparelMedicalSkinLayers.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Joe D. Williams"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "Dick Puk"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "created"
meta8.content = "23 December 2022"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "2 July 2023"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "DesignPatternsApparelVariations.txt"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "warning"
meta14.content = "Under development. This template example does not produce renderable HAnim models."

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "license"
meta17.content = "../license.html"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.title = "HAnimHumanoid skin design patterns for apparel, medical"

Scene18.children.append(WorldInfo19)
Background20 = x3d.Background()
Background20.skyColor = [(0, 0.6, 0.6)]

Scene18.children.append(Background20)
Group21 = x3d.Group(DEF="MultipleHumanoids")
MetadataString22 = x3d.MetadataString()
MetadataString22.name = "HAnimArchitecture"
MetadataString22.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"
MetadataString22.value = ["E.4 Multiple humanoids per file"]

Group21.metadata = MetadataString22
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid23 = x3d.HAnimHumanoid(DEF="a_SimpleSkeleton")
HAnimHumanoid23.name = "SimpleSkeleton"
HAnimHumanoid23.version = "2.0"
HAnimJoint24 = x3d.HAnimJoint()
HAnimJoint24.name = "humanoid_root"
HAnimJoint24.ulimit = [0,0,0]
HAnimJoint24.llimit = [0,0,0]
HAnimSegment25 = x3d.HAnimSegment()
HAnimSegment25.name = "sacrum"
Shape26 = x3d.Shape(DEF="JointVisualization")

HAnimSegment25.children.append(Shape26)
Shape27 = x3d.Shape(DEF="SegmentVisualization")

HAnimSegment25.children.append(Shape27)
HAnimSite28 = x3d.HAnimSite(DEF="a_feature01_tip")
HAnimSite28.name = "feature01_tip"
Shape29 = x3d.Shape(DEF="SiteVisualization")

HAnimSite28.children.append(Shape29)

HAnimSegment25.children.append(HAnimSite28)

HAnimJoint24.children.append(HAnimSegment25)

HAnimHumanoid23.skeleton.append(HAnimJoint24)

Group21.children.append(HAnimHumanoid23)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid30 = x3d.HAnimHumanoid(DEF="b_SimpleSkeletonMesh")
HAnimHumanoid30.name = "SimpleSkeletonMesh"
HAnimHumanoid30.version = "2.0"
HAnimJoint31 = x3d.HAnimJoint()
HAnimJoint31.name = "humanoid_root"
HAnimJoint31.ulimit = [0,0,0]
HAnimJoint31.llimit = [0,0,0]
HAnimSegment32 = x3d.HAnimSegment()
HAnimSegment32.name = "sacrum"
Shape33 = x3d.Shape()
IndexedFaceSet34 = x3d.IndexedFaceSet(DEF="SegmentBoneMesh")

Shape33.geometry = IndexedFaceSet34

HAnimSegment32.children.append(Shape33)

HAnimJoint31.children.append(HAnimSegment32)

HAnimHumanoid30.skeleton.append(HAnimJoint31)

Group21.children.append(HAnimHumanoid30)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid35 = x3d.HAnimHumanoid(DEF="c_SkinIndexedGeometry")
HAnimHumanoid35.name = "SkinIndexedGeometry"
HAnimHumanoid35.version = "2.0"
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.name = "humanoid_root"
HAnimJoint36.ulimit = [0,0,0]
HAnimJoint36.llimit = [0,0,0]
HAnimSegment37 = x3d.HAnimSegment()
HAnimSegment37.name = "sacrum"

HAnimJoint36.children.append(HAnimSegment37)

HAnimHumanoid35.skeleton.append(HAnimJoint36)
IndexedFaceSet38 = x3d.IndexedFaceSet(DEF="SkinMeshIFS")

HAnimHumanoid35.skin.append(IndexedFaceSet38)

Group21.children.append(HAnimHumanoid35)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid39 = x3d.HAnimHumanoid(DEF="d_SkinShapeIndexedGeometry")
HAnimHumanoid39.name = "SkinShapeIndexedGeometry"
HAnimHumanoid39.version = "2.0"
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.name = "humanoid_root"
HAnimJoint40.ulimit = [0,0,0]
HAnimJoint40.llimit = [0,0,0]
HAnimSegment41 = x3d.HAnimSegment()
HAnimSegment41.name = "sacrum"

HAnimJoint40.children.append(HAnimSegment41)

HAnimHumanoid39.skeleton.append(HAnimJoint40)
Shape42 = x3d.Shape()
IndexedFaceSet43 = x3d.IndexedFaceSet(USE="SkinMeshIFS")

Shape42.geometry = IndexedFaceSet43

HAnimHumanoid39.skin.append(Shape42)

Group21.children.append(HAnimHumanoid39)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid44 = x3d.HAnimHumanoid(DEF="e_SkinSwitchShapeIndexedGeometry")
HAnimHumanoid44.name = "SkinSwitchShapeIndexedGeometry"
HAnimHumanoid44.version = "2.0"
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "humanoid_root"
HAnimJoint45.ulimit = [0,0,0]
HAnimJoint45.llimit = [0,0,0]
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.name = "sacrum"

HAnimJoint45.children.append(HAnimSegment46)

HAnimHumanoid44.skeleton.append(HAnimJoint45)
HAnimHumanoid44.children.append(x3d.Comment("""TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>"""))
Shape47 = x3d.Shape()
IndexedFaceSet48 = x3d.IndexedFaceSet(DEF="IndexedSkinMeshIFS")
Coordinate49 = x3d.Coordinate(DEF="SkinMeshCoordinate")

IndexedFaceSet48.coord = Coordinate49

Shape47.geometry = IndexedFaceSet48

HAnimHumanoid44.skin.append(Shape47)

Group21.children.append(HAnimHumanoid44)
Group21.children.append(x3d.Comment("""similarly for LOD"""))
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid50 = x3d.HAnimHumanoid(DEF="f_SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid50.name = "SynthesizedSkinShapeIndexedTwoPartGeometry"
HAnimHumanoid50.version = "2.0"
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.name = "humanoid_root"
HAnimJoint51.ulimit = [0,0,0]
HAnimJoint51.llimit = [0,0,0]
HAnimSegment52 = x3d.HAnimSegment()
HAnimSegment52.name = "sacrum"

HAnimJoint51.children.append(HAnimSegment52)

HAnimHumanoid50.skeleton.append(HAnimJoint51)
Shape53 = x3d.Shape()
IndexedFaceSet54 = x3d.IndexedFaceSet(DEF="TwoPartIndexedSkinMesh")
Coordinate55 = x3d.Coordinate(DEF="TwoPartSkinMesh")

IndexedFaceSet54.coord = Coordinate55

Shape53.geometry = IndexedFaceSet54

HAnimHumanoid50.skin.append(Shape53)

Group21.children.append(HAnimHumanoid50)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid56 = x3d.HAnimHumanoid(DEF="g_ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid56.name = "ApparelSkinIndexedGeometryMultipleShapes"
HAnimHumanoid56.version = "2.0"
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.name = "humanoid_root"
HAnimJoint57.ulimit = [0,0,0]
HAnimJoint57.llimit = [0,0,0]
HAnimSegment58 = x3d.HAnimSegment()
HAnimSegment58.name = "sacrum"

HAnimJoint57.children.append(HAnimSegment58)

HAnimHumanoid56.skeleton.append(HAnimJoint57)
Shape59 = x3d.Shape()

HAnimHumanoid56.skin.append(Shape59)
HAnimHumanoid56.children.append(x3d.Comment("""allow multiple Shape nodes with containerField='apparel', one for each layer of clothing"""))
HAnimHumanoid56.children.append(x3d.Comment("""TODO proposed for X3D4.1 <Shape containerField='apparel'/>"""))

Group21.children.append(HAnimHumanoid56)
Group21.children.append(x3d.Comment("""=============================="""))
HAnimHumanoid60 = x3d.HAnimHumanoid(DEF="h_AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid60.name = "AnatomySkinIndexedGeometryMultipleShapes"
HAnimHumanoid60.version = "2.0"
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.name = "humanoid_root"
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]
HAnimSegment62 = x3d.HAnimSegment()
HAnimSegment62.name = "sacrum"

HAnimJoint61.children.append(HAnimSegment62)

HAnimHumanoid60.skeleton.append(HAnimJoint61)
HAnimHumanoid60.children.append(x3d.Comment("""allow multiple Shape nodes with containerField='skin', one for each layer of skin"""))
Shape63 = x3d.Shape()

HAnimHumanoid60.skin.append(Shape63)

Group21.children.append(HAnimHumanoid60)
Group21.children.append(x3d.Comment("""=============================="""))

Scene18.children.append(Group21)
Viewpoint64 = x3d.Viewpoint(DEF="ViewHelpText")
Viewpoint64.description = "Select text to see website"
Viewpoint64.position = [0,0,12]

Scene18.children.append(Viewpoint64)
Scene18.children.append(x3d.Comment("""Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"""))
Anchor65 = x3d.Anchor()
Anchor65.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"
Anchor65.parameter = ["target=blank"]
Anchor65.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]
Shape66 = x3d.Shape()
Shape66.children.append(x3d.Comment("""TODO adjust Text string and Box size, then set Material transparency='1'"""))
Text67 = x3d.Text()
Text67.string = ["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]
FontStyle68 = x3d.FontStyle()
FontStyle68.family = ["SANS"]
FontStyle68.justify = ["MIDDLE","MIDDLE"]
FontStyle68.size = 0.6
FontStyle68.style = "BOLD"

Text67.fontStyle = FontStyle68

Shape66.geometry = Text67
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.diffuseColor = [0.9,0.9,0.9]

Appearance69.material = Material70

Shape66.appearance = Appearance69

Anchor65.children.append(Shape66)
Shape71 = x3d.Shape()
Shape71.children.append(x3d.Comment("""Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."""))
Box72 = x3d.Box()
Box72.size = [11,2,0.001]

Shape71.geometry = Box72
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.transparency = 1

Appearance73.material = Material74

Shape71.appearance = Appearance73

Anchor65.children.append(Shape71)

Scene18.children.append(Anchor65)

X3D0.Scene = Scene18
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

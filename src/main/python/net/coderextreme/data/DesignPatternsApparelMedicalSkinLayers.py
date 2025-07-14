print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "DesignPatternsApparelMedicalSkinLayers.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Joe D. Williams"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "creator"
meta6.content = "Dick Puk"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "23 December 2022"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "2 July 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "DesignPatternsApparelVariations.txt"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "warning"
meta13.content = "Under development. This template example does not produce renderable HAnim models."

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "../license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.title = "HAnimHumanoid skin design patterns for apparel, medical"

Scene17.children.append(WorldInfo18)
Background19 = x3d.Background()

Scene17.children.append(Background19)
Group20 = x3d.Group()
Group20.DEF = "MultipleHumanoids"
MetadataString21 = x3d.MetadataString()
MetadataString21.name = "HAnimArchitecture"
MetadataString21.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"
MetadataString21.value = ["E.4 Multiple humanoids per file"]

Group20.metadata = MetadataString21
"""=============================="""
HAnimHumanoid22 = x3d.HAnimHumanoid()
HAnimHumanoid22.name = "SimpleSkeleton"
HAnimHumanoid22.DEF = "a_SimpleSkeleton"
HAnimHumanoid22.version = "2.0"
HAnimJoint23 = x3d.HAnimJoint()
HAnimJoint23.name = "humanoid_root"
HAnimJoint23.ulimit = [0,0,0]
HAnimJoint23.llimit = [0,0,0]
HAnimSegment24 = x3d.HAnimSegment()
HAnimSegment24.name = "sacrum"
Shape25 = x3d.Shape()
Shape25.DEF = "JointVisualization"

HAnimSegment24.children.append(Shape25)
Shape26 = x3d.Shape()
Shape26.DEF = "SegmentVisualization"

HAnimSegment24.children.append(Shape26)
HAnimSite27 = x3d.HAnimSite()
HAnimSite27.name = "feature01_tip"
HAnimSite27.DEF = "a_feature01_tip"
Shape28 = x3d.Shape()
Shape28.DEF = "SiteVisualization"

HAnimSite27.children.append(Shape28)

HAnimSegment24.children.append(HAnimSite27)

HAnimJoint23.children.append(HAnimSegment24)

HAnimHumanoid22.skeleton.append(HAnimJoint23)

Group20.children.append(HAnimHumanoid22)
"""=============================="""
HAnimHumanoid29 = x3d.HAnimHumanoid()
HAnimHumanoid29.name = "SimpleSkeletonMesh"
HAnimHumanoid29.DEF = "b_SimpleSkeletonMesh"
HAnimHumanoid29.version = "2.0"
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.name = "humanoid_root"
HAnimJoint30.ulimit = [0,0,0]
HAnimJoint30.llimit = [0,0,0]
HAnimSegment31 = x3d.HAnimSegment()
HAnimSegment31.name = "sacrum"
Shape32 = x3d.Shape()
IndexedFaceSet33 = x3d.IndexedFaceSet()
IndexedFaceSet33.DEF = "SegmentBoneMesh"

Shape32.geometry = IndexedFaceSet33

HAnimSegment31.children.append(Shape32)

HAnimJoint30.children.append(HAnimSegment31)

HAnimHumanoid29.skeleton.append(HAnimJoint30)

Group20.children.append(HAnimHumanoid29)
"""=============================="""
HAnimHumanoid34 = x3d.HAnimHumanoid()
HAnimHumanoid34.name = "SkinIndexedGeometry"
HAnimHumanoid34.DEF = "c_SkinIndexedGeometry"
HAnimHumanoid34.version = "2.0"
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.name = "humanoid_root"
HAnimJoint35.ulimit = [0,0,0]
HAnimJoint35.llimit = [0,0,0]
HAnimSegment36 = x3d.HAnimSegment()
HAnimSegment36.name = "sacrum"

HAnimJoint35.children.append(HAnimSegment36)

HAnimHumanoid34.skeleton.append(HAnimJoint35)
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.DEF = "SkinMeshIFS"

HAnimHumanoid34.skin.append(IndexedFaceSet37)

Group20.children.append(HAnimHumanoid34)
"""=============================="""
HAnimHumanoid38 = x3d.HAnimHumanoid()
HAnimHumanoid38.name = "SkinShapeIndexedGeometry"
HAnimHumanoid38.DEF = "d_SkinShapeIndexedGeometry"
HAnimHumanoid38.version = "2.0"
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.name = "humanoid_root"
HAnimJoint39.ulimit = [0,0,0]
HAnimJoint39.llimit = [0,0,0]
HAnimSegment40 = x3d.HAnimSegment()
HAnimSegment40.name = "sacrum"

HAnimJoint39.children.append(HAnimSegment40)

HAnimHumanoid38.skeleton.append(HAnimJoint39)
Shape41 = x3d.Shape()
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.USE = "SkinMeshIFS"

Shape41.geometry = IndexedFaceSet42

HAnimHumanoid38.skin.append(Shape41)

Group20.children.append(HAnimHumanoid38)
"""=============================="""
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.name = "SkinSwitchShapeIndexedGeometry"
HAnimHumanoid43.DEF = "e_SkinSwitchShapeIndexedGeometry"
HAnimHumanoid43.version = "2.0"
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.name = "humanoid_root"
HAnimJoint44.ulimit = [0,0,0]
HAnimJoint44.llimit = [0,0,0]
HAnimSegment45 = x3d.HAnimSegment()
HAnimSegment45.name = "sacrum"

HAnimJoint44.children.append(HAnimSegment45)

HAnimHumanoid43.skeleton.append(HAnimJoint44)
"""TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>"""
Shape46 = x3d.Shape()
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.DEF = "IndexedSkinMeshIFS"
Coordinate48 = x3d.Coordinate()
Coordinate48.DEF = "SkinMeshCoordinate"

IndexedFaceSet47.coord = Coordinate48

Shape46.geometry = IndexedFaceSet47

HAnimHumanoid43.skin.append(Shape46)

Group20.children.append(HAnimHumanoid43)
"""similarly for LOD"""
"""=============================="""
HAnimHumanoid49 = x3d.HAnimHumanoid()
HAnimHumanoid49.name = "SynthesizedSkinShapeIndexedTwoPartGeometry"
HAnimHumanoid49.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry"
HAnimHumanoid49.version = "2.0"
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.name = "humanoid_root"
HAnimJoint50.ulimit = [0,0,0]
HAnimJoint50.llimit = [0,0,0]
HAnimSegment51 = x3d.HAnimSegment()
HAnimSegment51.name = "sacrum"

HAnimJoint50.children.append(HAnimSegment51)

HAnimHumanoid49.skeleton.append(HAnimJoint50)
Shape52 = x3d.Shape()
IndexedFaceSet53 = x3d.IndexedFaceSet()
IndexedFaceSet53.DEF = "TwoPartIndexedSkinMesh"
Coordinate54 = x3d.Coordinate()
Coordinate54.DEF = "TwoPartSkinMesh"

IndexedFaceSet53.coord = Coordinate54

Shape52.geometry = IndexedFaceSet53

HAnimHumanoid49.skin.append(Shape52)

Group20.children.append(HAnimHumanoid49)
"""=============================="""
HAnimHumanoid55 = x3d.HAnimHumanoid()
HAnimHumanoid55.name = "ApparelSkinIndexedGeometryMultipleShapes"
HAnimHumanoid55.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes"
HAnimHumanoid55.version = "2.0"
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.name = "humanoid_root"
HAnimJoint56.ulimit = [0,0,0]
HAnimJoint56.llimit = [0,0,0]
HAnimSegment57 = x3d.HAnimSegment()
HAnimSegment57.name = "sacrum"

HAnimJoint56.children.append(HAnimSegment57)

HAnimHumanoid55.skeleton.append(HAnimJoint56)
Shape58 = x3d.Shape()

HAnimHumanoid55.skin.append(Shape58)
"""allow multiple Shape nodes with containerField='apparel', one for each layer of clothing"""
"""TODO proposed for X3D4.1 <Shape containerField='apparel'/>"""

Group20.children.append(HAnimHumanoid55)
"""=============================="""
HAnimHumanoid59 = x3d.HAnimHumanoid()
HAnimHumanoid59.name = "AnatomySkinIndexedGeometryMultipleShapes"
HAnimHumanoid59.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes"
HAnimHumanoid59.version = "2.0"
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.name = "humanoid_root"
HAnimJoint60.ulimit = [0,0,0]
HAnimJoint60.llimit = [0,0,0]
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.name = "sacrum"

HAnimJoint60.children.append(HAnimSegment61)

HAnimHumanoid59.skeleton.append(HAnimJoint60)
"""allow multiple Shape nodes with containerField='skin', one for each layer of skin"""
Shape62 = x3d.Shape()

HAnimHumanoid59.skin.append(Shape62)

Group20.children.append(HAnimHumanoid59)
"""=============================="""

Scene17.children.append(Group20)
Viewpoint63 = x3d.Viewpoint()
Viewpoint63.DEF = "ViewHelpText"
Viewpoint63.description = "Select text to see website"
Viewpoint63.position = [0,0,12]

Scene17.children.append(Viewpoint63)
"""Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"""
Anchor64 = x3d.Anchor()
Anchor64.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"
Anchor64.parameter = ["target=blank"]
Anchor64.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]
Shape65 = x3d.Shape()
"""TODO adjust Text string and Box size, then set Material transparency='1'"""
Text66 = x3d.Text()
Text66.string = ["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]
FontStyle67 = x3d.FontStyle()
FontStyle67.family = ["SANS"]
FontStyle67.justify = ["MIDDLE","MIDDLE"]
FontStyle67.size = 0.6
FontStyle67.style = "BOLD"

Text66.fontStyle = FontStyle67

Shape65.geometry = Text66
Appearance68 = x3d.Appearance()
Material69 = x3d.Material()
Material69.diffuseColor = [0.9,0.9,0.9]

Appearance68.material = Material69

Shape65.appearance = Appearance68

Anchor64.children.append(Shape65)
Shape70 = x3d.Shape()
"""Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."""
Box71 = x3d.Box()
Box71.size = [11,2,0.001]

Shape70.geometry = Box71
Appearance72 = x3d.Appearance()
Material73 = x3d.Material()
Material73.transparency = 1

Appearance72.material = Material73

Shape70.appearance = Appearance72

Anchor64.children.append(Shape70)

Scene17.children.append(Anchor64)

X3D0.Scene = Scene17
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

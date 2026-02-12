print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta9.content = "Mon, 09 Feb 2026 12:23:01 GMT"

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

X3D0.head = head1
Scene16 = x3d.Scene()
WorldInfo17 = x3d.WorldInfo()
WorldInfo17.title = "HAnimHumanoid skin design patterns for apparel, medical"

Scene16.children.append(WorldInfo17)
Background18 = x3d.Background()
Background18.skyColor = [(0, 0.6, 0.6)]

Scene16.children.append(Background18)
Group19 = x3d.Group(DEF="MultipleHumanoids")
MetadataString20 = x3d.MetadataString()
MetadataString20.name = "HAnimArchitecture"
MetadataString20.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"
MetadataString20.value = ["E.4 Multiple humanoids per file"]

Group19.metadata = MetadataString20
HAnimHumanoid21 = x3d.HAnimHumanoid(DEF="a_SimpleSkeleton")
HAnimHumanoid21.name = "SimpleSkeleton"
HAnimHumanoid21.version = "2.0"
HAnimJoint22 = x3d.HAnimJoint()
HAnimJoint22.name = "humanoid_root"
HAnimSegment23 = x3d.HAnimSegment()
HAnimSegment23.name = "sacrum"
Shape24 = x3d.Shape(DEF="JointVisualization")

HAnimSegment23.children.append(Shape24)
Shape25 = x3d.Shape(DEF="SegmentVisualization")

HAnimSegment23.children.append(Shape25)
HAnimSite26 = x3d.HAnimSite(DEF="a_feature01_tip")
HAnimSite26.name = "feature01_tip"
Shape27 = x3d.Shape(DEF="SiteVisualization")

HAnimSite26.children.append(Shape27)

HAnimSegment23.children.append(HAnimSite26)

HAnimJoint22.children.append(HAnimSegment23)

HAnimHumanoid21.skeleton.append(HAnimJoint22)

Group19.children.append(HAnimHumanoid21)
HAnimHumanoid28 = x3d.HAnimHumanoid(DEF="b_SimpleSkeletonMesh")
HAnimHumanoid28.name = "SimpleSkeletonMesh"
HAnimHumanoid28.version = "2.0"
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.name = "humanoid_root"
HAnimSegment30 = x3d.HAnimSegment()
HAnimSegment30.name = "sacrum"
Shape31 = x3d.Shape()
IndexedFaceSet32 = x3d.IndexedFaceSet(DEF="SegmentBoneMesh")

Shape31.geometry = IndexedFaceSet32

HAnimSegment30.children.append(Shape31)

HAnimJoint29.children.append(HAnimSegment30)

HAnimHumanoid28.skeleton.append(HAnimJoint29)

Group19.children.append(HAnimHumanoid28)
HAnimHumanoid33 = x3d.HAnimHumanoid(DEF="c_SkinIndexedGeometry")
HAnimHumanoid33.name = "SkinIndexedGeometry"
HAnimHumanoid33.version = "2.0"
HAnimJoint34 = x3d.HAnimJoint()
HAnimJoint34.name = "humanoid_root"
HAnimSegment35 = x3d.HAnimSegment()
HAnimSegment35.name = "sacrum"

HAnimJoint34.children.append(HAnimSegment35)

HAnimHumanoid33.skeleton.append(HAnimJoint34)
IndexedFaceSet36 = x3d.IndexedFaceSet(DEF="SkinMeshIFS")

HAnimHumanoid33.skin.append(IndexedFaceSet36)

Group19.children.append(HAnimHumanoid33)
HAnimHumanoid37 = x3d.HAnimHumanoid(DEF="d_SkinShapeIndexedGeometry")
HAnimHumanoid37.name = "SkinShapeIndexedGeometry"
HAnimHumanoid37.version = "2.0"
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.name = "humanoid_root"
HAnimSegment39 = x3d.HAnimSegment()
HAnimSegment39.name = "sacrum"

HAnimJoint38.children.append(HAnimSegment39)

HAnimHumanoid37.skeleton.append(HAnimJoint38)
Shape40 = x3d.Shape()
IndexedFaceSet41 = x3d.IndexedFaceSet(USE="SkinMeshIFS")

Shape40.geometry = IndexedFaceSet41

HAnimHumanoid37.skin.append(Shape40)

Group19.children.append(HAnimHumanoid37)
HAnimHumanoid42 = x3d.HAnimHumanoid(DEF="e_SkinSwitchShapeIndexedGeometry")
HAnimHumanoid42.name = "SkinSwitchShapeIndexedGeometry"
HAnimHumanoid42.version = "2.0"
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.name = "humanoid_root"
HAnimSegment44 = x3d.HAnimSegment()
HAnimSegment44.name = "sacrum"

HAnimJoint43.children.append(HAnimSegment44)

HAnimHumanoid42.skeleton.append(HAnimJoint43)
Shape45 = x3d.Shape()
IndexedFaceSet46 = x3d.IndexedFaceSet(DEF="IndexedSkinMeshIFS")
Coordinate47 = x3d.Coordinate(DEF="SkinMeshCoordinate")

IndexedFaceSet46.coord = Coordinate47

Shape45.geometry = IndexedFaceSet46

HAnimHumanoid42.skin.append(Shape45)

Group19.children.append(HAnimHumanoid42)
HAnimHumanoid48 = x3d.HAnimHumanoid(DEF="f_SynthesizedSkinShapeIndexedTwoPartGeometry")
HAnimHumanoid48.name = "SynthesizedSkinShapeIndexedTwoPartGeometry"
HAnimHumanoid48.version = "2.0"
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.name = "humanoid_root"
HAnimSegment50 = x3d.HAnimSegment()
HAnimSegment50.name = "sacrum"

HAnimJoint49.children.append(HAnimSegment50)

HAnimHumanoid48.skeleton.append(HAnimJoint49)
Shape51 = x3d.Shape()
IndexedFaceSet52 = x3d.IndexedFaceSet(DEF="TwoPartIndexedSkinMesh")
Coordinate53 = x3d.Coordinate(DEF="TwoPartSkinMesh")

IndexedFaceSet52.coord = Coordinate53

Shape51.geometry = IndexedFaceSet52

HAnimHumanoid48.skin.append(Shape51)

Group19.children.append(HAnimHumanoid48)
HAnimHumanoid54 = x3d.HAnimHumanoid(DEF="g_ApparelSkinIndexedGeometryMultipleShapes")
HAnimHumanoid54.name = "ApparelSkinIndexedGeometryMultipleShapes"
HAnimHumanoid54.version = "2.0"
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.name = "humanoid_root"
HAnimSegment56 = x3d.HAnimSegment()
HAnimSegment56.name = "sacrum"

HAnimJoint55.children.append(HAnimSegment56)

HAnimHumanoid54.skeleton.append(HAnimJoint55)
Shape57 = x3d.Shape()

HAnimHumanoid54.skin.append(Shape57)

Group19.children.append(HAnimHumanoid54)
HAnimHumanoid58 = x3d.HAnimHumanoid(DEF="h_AnatomySkinIndexedGeometryMultipleShapes")
HAnimHumanoid58.name = "AnatomySkinIndexedGeometryMultipleShapes"
HAnimHumanoid58.version = "2.0"
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.name = "humanoid_root"
HAnimSegment60 = x3d.HAnimSegment()
HAnimSegment60.name = "sacrum"

HAnimJoint59.children.append(HAnimSegment60)

HAnimHumanoid58.skeleton.append(HAnimJoint59)
Shape61 = x3d.Shape()

HAnimHumanoid58.skin.append(Shape61)

Group19.children.append(HAnimHumanoid58)

Scene16.children.append(Group19)
Viewpoint62 = x3d.Viewpoint(DEF="ViewHelpText")
Viewpoint62.description = "Select text to see website"
Viewpoint62.position = [0,0,12]

Scene16.children.append(Viewpoint62)
Anchor63 = x3d.Anchor()
Anchor63.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"
Anchor63.url = ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]
Anchor63.parameter = ["target=blank"]
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.diffuseColor = [0.9,0.9,0.9]

Appearance65.material = Material66

Shape64.appearance = Appearance65
Text67 = x3d.Text()
Text67.string = ["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]
FontStyle68 = x3d.FontStyle()
FontStyle68.family = ["SANS"]
FontStyle68.style = "BOLD"
FontStyle68.size = 0.6
FontStyle68.justify = ["MIDDLE","MIDDLE"]

Text67.fontStyle = FontStyle68

Shape64.geometry = Text67

Anchor63.children.append(Shape64)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.transparency = 1

Appearance70.material = Material71

Shape69.appearance = Appearance70
Box72 = x3d.Box()
Box72.size = [11,2,0.001]

Shape69.geometry = Box72

Anchor63.children.append(Shape69)

Scene16.children.append(Anchor63)

X3D0.Scene = Scene16
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DesignPatternsApparelMedicalSkinLayers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()

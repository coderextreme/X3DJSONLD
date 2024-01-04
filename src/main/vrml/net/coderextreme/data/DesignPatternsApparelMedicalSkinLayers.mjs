let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "creator";
meta6.content = "Dick Puk";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "23 December 2022";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "Sat, 30 Dec 2023 07:36:02 GMT";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "DesignPatternsApparelVariations.txt";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "warning";
meta13.content = "Under development. This template example does not produce renderable HAnim models.";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[12] = meta14;

head = head1;

let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "HAnimHumanoid skin design patterns for apparel, medical";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new MFColor(new float[0,0.6,0.6]);
browser.currentScene.children[1] = Background17;

let Group18 = browser.currentScene.createNode("Group");
Group18.DEF = "MultipleHumanoids";
let MetadataString19 = browser.currentScene.createNode("MetadataString");
MetadataString19.name = "HAnimArchitecture";
MetadataString19.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString19.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group18.metadata = MetadataString19;

let HAnimHumanoid20 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid20.DEF = "a_SimpleSkeleton";
HAnimHumanoid20.name = "SimpleSkeleton";
let HAnimJoint21 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint21.name = "humanoid_root";
let HAnimSegment22 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment22.name = "sacrum";
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "JointVisualization";
HAnimSegment22.children = new MFNode();

HAnimSegment22.children[0] = Shape23;

let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "SegmentVisualization";
HAnimSegment22.children[1] = Shape24;

let HAnimSite25 = browser.currentScene.createNode("HAnimSite");
HAnimSite25.DEF = "a_feature01_tip";
HAnimSite25.name = "feature01_tip";
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.DEF = "SiteVisualization";
HAnimSite25.children = new MFNode();

HAnimSite25.children[0] = Shape26;

HAnimSegment22.children[2] = HAnimSite25;

HAnimJoint21.children = new MFNode();

HAnimJoint21.children[0] = HAnimSegment22;

HAnimHumanoid20.joints = new MFNode();

HAnimHumanoid20.joints[0] = HAnimJoint21;

Group18.children = new MFNode();

Group18.children[0] = HAnimHumanoid20;

let HAnimHumanoid27 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid27.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid27.name = "SimpleSkeletonMesh";
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "humanoid_root";
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "sacrum";
let Shape30 = browser.currentScene.createNode("Shape");
let IndexedFaceSet31 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "SegmentBoneMesh";
Shape30.geometry = IndexedFaceSet31;

HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = Shape30;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

HAnimHumanoid27.joints = new MFNode();

HAnimHumanoid27.joints[0] = HAnimJoint28;

Group18.children[1] = HAnimHumanoid27;

let HAnimHumanoid32 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid32.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid32.name = "SkinIndexedGeometry";
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "humanoid_root";
let HAnimSegment34 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment34.name = "sacrum";
HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimSegment34;

HAnimHumanoid32.joints = new MFNode();

HAnimHumanoid32.joints[0] = HAnimJoint33;

let IndexedFaceSet35 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet35.DEF = "SkinMeshIFS";
HAnimHumanoid32.skin[1] = IndexedFaceSet35;

Group18.children[2] = HAnimHumanoid32;

let HAnimHumanoid36 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid36.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid36.name = "SkinShapeIndexedGeometry";
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "humanoid_root";
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.name = "sacrum";
HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

HAnimHumanoid36.joints = new MFNode();

HAnimHumanoid36.joints[0] = HAnimJoint37;

let Shape39 = browser.currentScene.createNode("Shape");
let IndexedFaceSet40 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet40.USE = "SkinMeshIFS";
Shape39.geometry = IndexedFaceSet40;

HAnimHumanoid36.skin[1] = Shape39;

Group18.children[3] = HAnimHumanoid36;

let HAnimHumanoid41 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid41.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid41.name = "SkinSwitchShapeIndexedGeometry";
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "humanoid_root";
let HAnimSegment43 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment43.name = "sacrum";
HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

HAnimHumanoid41.joints = new MFNode();

HAnimHumanoid41.joints[0] = HAnimJoint42;

let Shape44 = browser.currentScene.createNode("Shape");
let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.DEF = "IndexedSkinMeshIFS";
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.DEF = "SkinMeshCoordinate";
IndexedFaceSet45.coord = Coordinate46;

Shape44.geometry = IndexedFaceSet45;

HAnimHumanoid41.skin[1] = Shape44;

Group18.children[4] = HAnimHumanoid41;

let HAnimHumanoid47 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid47.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid47.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "humanoid_root";
let HAnimSegment49 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment49.name = "sacrum";
HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

HAnimHumanoid47.joints = new MFNode();

HAnimHumanoid47.joints[0] = HAnimJoint48;

let Shape50 = browser.currentScene.createNode("Shape");
let IndexedFaceSet51 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet51.DEF = "TwoPartIndexedSkinMesh";
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.DEF = "TwoPartSkinMesh";
IndexedFaceSet51.coord = Coordinate52;

Shape50.geometry = IndexedFaceSet51;

HAnimHumanoid47.skin[1] = Shape50;

Group18.children[5] = HAnimHumanoid47;

let HAnimHumanoid53 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid53.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid53.name = "ApparelSkinIndexedGeometryMultipleShapes";
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "humanoid_root";
let HAnimSegment55 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment55.name = "sacrum";
HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimSegment55;

HAnimHumanoid53.joints = new MFNode();

HAnimHumanoid53.joints[0] = HAnimJoint54;

let Shape56 = browser.currentScene.createNode("Shape");
HAnimHumanoid53.skin[1] = Shape56;

Group18.children[6] = HAnimHumanoid53;

let HAnimHumanoid57 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid57.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid57.name = "AnatomySkinIndexedGeometryMultipleShapes";
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "humanoid_root";
let HAnimSegment59 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment59.name = "sacrum";
HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimSegment59;

HAnimHumanoid57.joints = new MFNode();

HAnimHumanoid57.joints[0] = HAnimJoint58;

let Shape60 = browser.currentScene.createNode("Shape");
HAnimHumanoid57.skin[1] = Shape60;

Group18.children[7] = HAnimHumanoid57;

browser.currentScene.children[2] = Group18;

let Viewpoint61 = browser.currentScene.createNode("Viewpoint");
Viewpoint61.DEF = "ViewHelpText";
Viewpoint61.description = "Select text to see website";
Viewpoint61.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[3] = Viewpoint61;

let Anchor62 = browser.currentScene.createNode("Anchor");
Anchor62.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor62.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
Anchor62.parameter = new MFString(new java.lang.String["target=blank"]);
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let Text66 = browser.currentScene.createNode("Text");
Text66.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.family = new MFString(new java.lang.String["SANS"]);
FontStyle67.style = "BOLD";
FontStyle67.size = 0.6;
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text66.fontStyle = FontStyle67;

Shape63.geometry = Text66;

Anchor62.children = new MFNode();

Anchor62.children[0] = Shape63;

let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.transparency = 1;
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

let Box71 = browser.currentScene.createNode("Box");
Box71.size = new SFVec3f(new float[11,2,0.001]);
Shape68.geometry = Box71;

Anchor62.children[1] = Shape68;

browser.currentScene.children[4] = Anchor62;


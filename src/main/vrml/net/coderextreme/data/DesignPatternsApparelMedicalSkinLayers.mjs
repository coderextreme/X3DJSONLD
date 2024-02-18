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
meta8.content = "2 July 2023";
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

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "HAnimHumanoid skin design patterns for apparel, medical";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.skyColor = new MFColor(new float[0,0.6,0.6]);
browser.currentScene.children[1] = Background19;

let Group20 = browser.currentScene.createNode("Group");
Group20.DEF = "MultipleHumanoids";
let MetadataString21 = browser.currentScene.createNode("MetadataString");
MetadataString21.name = "HAnimArchitecture";
MetadataString21.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString21.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group20.metadata = MetadataString21;

//==============================
let HAnimHumanoid22 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid22.name = "SimpleSkeleton";
HAnimHumanoid22.DEF = "a_SimpleSkeleton";
HAnimHumanoid22.version = "2.0";
let HAnimJoint23 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint23.name = "humanoid_root";
HAnimJoint23.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint23.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment24 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment24.name = "sacrum";
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "JointVisualization";
HAnimSegment24.children = new MFNode();

HAnimSegment24.children[0] = Shape25;

let Shape26 = browser.currentScene.createNode("Shape");
Shape26.DEF = "SegmentVisualization";
HAnimSegment24.children[1] = Shape26;

let HAnimSite27 = browser.currentScene.createNode("HAnimSite");
HAnimSite27.name = "feature01_tip";
HAnimSite27.DEF = "a_feature01_tip";
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "SiteVisualization";
HAnimSite27.children = new MFNode();

HAnimSite27.children[0] = Shape28;

HAnimSegment24.children[2] = HAnimSite27;

HAnimJoint23.children = new MFNode();

HAnimJoint23.children[0] = HAnimSegment24;

HAnimHumanoid22.joints = new MFNode();

HAnimHumanoid22.joints[0] = HAnimJoint23;

Group20.children = new MFNode();

Group20.children[0] = HAnimHumanoid22;

//==============================
let HAnimHumanoid29 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid29.name = "SimpleSkeletonMesh";
HAnimHumanoid29.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid29.version = "2.0";
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "sacrum";
let Shape32 = browser.currentScene.createNode("Shape");
let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "SegmentBoneMesh";
Shape32.geometry = IndexedFaceSet33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Shape32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

HAnimHumanoid29.joints = new MFNode();

HAnimHumanoid29.joints[0] = HAnimJoint30;

Group20.children[1] = HAnimHumanoid29;

//==============================
let HAnimHumanoid34 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid34.name = "SkinIndexedGeometry";
HAnimHumanoid34.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid34.version = "2.0";
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint35.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment36 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment36.name = "sacrum";
HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimSegment36;

HAnimHumanoid34.joints = new MFNode();

HAnimHumanoid34.joints[0] = HAnimJoint35;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "SkinMeshIFS";
HAnimHumanoid34.skin[1] = IndexedFaceSet37;

Group20.children[2] = HAnimHumanoid34;

//==============================
let HAnimHumanoid38 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid38.name = "SkinShapeIndexedGeometry";
HAnimHumanoid38.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid38.version = "2.0";
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "humanoid_root";
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment40 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment40.name = "sacrum";
HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimSegment40;

HAnimHumanoid38.joints = new MFNode();

HAnimHumanoid38.joints[0] = HAnimJoint39;

let Shape41 = browser.currentScene.createNode("Shape");
let IndexedFaceSet42 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet42.USE = "SkinMeshIFS";
Shape41.geometry = IndexedFaceSet42;

HAnimHumanoid38.skin[1] = Shape41;

Group20.children[3] = HAnimHumanoid38;

//==============================
let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.name = "SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.version = "2.0";
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint44;

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
let Shape46 = browser.currentScene.createNode("Shape");
let IndexedFaceSet47 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet47.DEF = "IndexedSkinMeshIFS";
let Coordinate48 = browser.currentScene.createNode("Coordinate");
Coordinate48.DEF = "SkinMeshCoordinate";
IndexedFaceSet47.coord = Coordinate48;

Shape46.geometry = IndexedFaceSet47;

HAnimHumanoid43.skin[1] = Shape46;

Group20.children[4] = HAnimHumanoid43;

//similarly for LOD
//==============================
let HAnimHumanoid49 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid49.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.version = "2.0";
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "sacrum";
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimHumanoid49.joints = new MFNode();

HAnimHumanoid49.joints[0] = HAnimJoint50;

let Shape52 = browser.currentScene.createNode("Shape");
let IndexedFaceSet53 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet53.DEF = "TwoPartIndexedSkinMesh";
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.DEF = "TwoPartSkinMesh";
IndexedFaceSet53.coord = Coordinate54;

Shape52.geometry = IndexedFaceSet53;

HAnimHumanoid49.skin[1] = Shape52;

Group20.children[5] = HAnimHumanoid49;

//==============================
let HAnimHumanoid55 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid55.name = "ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.version = "2.0";
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "humanoid_root";
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment57 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment57.name = "sacrum";
HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimSegment57;

HAnimHumanoid55.joints = new MFNode();

HAnimHumanoid55.joints[0] = HAnimJoint56;

let Shape58 = browser.currentScene.createNode("Shape");
HAnimHumanoid55.skin[1] = Shape58;

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20.children[6] = HAnimHumanoid55;

//==============================
let HAnimHumanoid59 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid59.name = "AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.version = "2.0";
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "humanoid_root";
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "sacrum";
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimHumanoid59.joints = new MFNode();

HAnimHumanoid59.joints[0] = HAnimJoint60;

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
let Shape62 = browser.currentScene.createNode("Shape");
HAnimHumanoid59.skin[1] = Shape62;

Group20.children[7] = HAnimHumanoid59;

//==============================
browser.currentScene.children[2] = Group20;

let Viewpoint63 = browser.currentScene.createNode("Viewpoint");
Viewpoint63.DEF = "ViewHelpText";
Viewpoint63.description = "Select text to see website";
Viewpoint63.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[3] = Viewpoint63;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
let Anchor64 = browser.currentScene.createNode("Anchor");
Anchor64.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor64.parameter = new MFString(new java.lang.String["target=blank"]);
Anchor64.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
let Shape65 = browser.currentScene.createNode("Shape");
//TODO adjust Text string and Box size, then set Material transparency='1'
let Text66 = browser.currentScene.createNode("Text");
Text66.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.family = new MFString(new java.lang.String["SANS"]);
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle67.size = 0.6;
FontStyle67.style = "BOLD";
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance68.material = Material69;

Shape65.appearance = Appearance68;

Anchor64.children = new MFNode();

Anchor64.children[0] = Shape65;

let Shape70 = browser.currentScene.createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
let Box71 = browser.currentScene.createNode("Box");
Box71.size = new SFVec3f(new float[11,2,0.001]);
Shape70.geometry = Box71;

let Appearance72 = browser.currentScene.createNode("Appearance");
let Material73 = browser.currentScene.createNode("Material");
Material73.transparency = 1;
Appearance72.material = Material73;

Shape70.appearance = Appearance72;

Anchor64.children[1] = Shape70;

browser.currentScene.children[4] = Anchor64;


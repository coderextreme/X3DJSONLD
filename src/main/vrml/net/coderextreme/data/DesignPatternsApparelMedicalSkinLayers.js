const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "DesignPatternsApparelMedicalSkinLayers.x3d");
scene.addMetaData("description", "Design patterns for skin and apparel using HAnim2 standard in X3D4");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("creator", "Dick Puk");
scene.addMetaData("created", "23 December 2022");
scene.addMetaData("modified", "2 July 2023");
scene.addMetaData("reference", "DesignPatternsApparelVariations.txt");
scene.addMetaData("reference", "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject");
scene.addMetaData("reference", "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
scene.addMetaData("reference", "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid");
scene.addMetaData("warning", "Under development. This template example does not produce renderable HAnim models.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "HAnimHumanoid skin design patterns for apparel, medical";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.skyColor = new X3D.MFColor([0,0.6,0.6]);
browser.currentScene.children[1] = Background19;

let Group20 = browser.currentScene.createNode("Group");
Group20.DEF = "MultipleHumanoids";
let MetadataString21 = browser.currentScene.createNode("MetadataString");
MetadataString21.name = "HAnimArchitecture";
MetadataString21.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString21.value = new X3D.MFString([new X3D.SFString("E.4 Multiple humanoids per file")]);
metadata = MetadataString21;

//==============================
let HAnimHumanoid22 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid22.name = "SimpleSkeleton";
HAnimHumanoid22.DEF = "a_SimpleSkeleton";
HAnimHumanoid22.version = "2.0";
let HAnimJoint23 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint23.name = "humanoid_root";
HAnimJoint23.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint23.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment24 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment24.name = "sacrum";
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "JointVisualization";
HAnimSegment24YYY.children = new X3D.MFNode();

HAnimSegment24ZZZ.children[0] = Shape25;

let Shape26 = browser.currentScene.createNode("Shape");
Shape26.DEF = "SegmentVisualization";
HAnimSegment24ZZZ.children[1] = Shape26;

let HAnimSite27 = browser.currentScene.createNode("HAnimSite");
HAnimSite27.name = "feature01_tip";
HAnimSite27.DEF = "a_feature01_tip";
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "SiteVisualization";
HAnimSite27YYY.children = new X3D.MFNode();

HAnimSite27ZZZ.children[0] = Shape28;

HAnimSegment24ZZZ.children[2] = HAnimSite27;

HAnimJoint23YYY.children = new X3D.MFNode();

HAnimJoint23ZZZ.children[0] = HAnimSegment24;

HAnimHumanoid22.joints = new X3D.MFNode();

HAnimHumanoid22XXX.joints[0] = HAnimJoint23;

Group20YYY.children = new X3D.MFNode();

Group20ZZZ.children[0] = HAnimHumanoid22;

//==============================
let HAnimHumanoid29 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid29.name = "SimpleSkeletonMesh";
HAnimHumanoid29.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid29.version = "2.0";
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "sacrum";
let Shape32 = browser.currentScene.createNode("Shape");
let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "SegmentBoneMesh";
geometry = IndexedFaceSet33;

HAnimSegment31YYY.children = new X3D.MFNode();

HAnimSegment31ZZZ.children[0] = Shape32;

HAnimJoint30YYY.children = new X3D.MFNode();

HAnimJoint30ZZZ.children[0] = HAnimSegment31;

HAnimHumanoid29.joints = new X3D.MFNode();

HAnimHumanoid29XXX.joints[0] = HAnimJoint30;

Group20ZZZ.children[1] = HAnimHumanoid29;

//==============================
let HAnimHumanoid34 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid34.name = "SkinIndexedGeometry";
HAnimHumanoid34.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid34.version = "2.0";
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint35.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment36 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment36.name = "sacrum";
HAnimJoint35YYY.children = new X3D.MFNode();

HAnimJoint35ZZZ.children[0] = HAnimSegment36;

HAnimHumanoid34.joints = new X3D.MFNode();

HAnimHumanoid34XXX.joints[0] = HAnimJoint35;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "SkinMeshIFS";
skin[1] = IndexedFaceSet37;

Group20ZZZ.children[2] = HAnimHumanoid34;

//==============================
let HAnimHumanoid38 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid38.name = "SkinShapeIndexedGeometry";
HAnimHumanoid38.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid38.version = "2.0";
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "humanoid_root";
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment40 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment40.name = "sacrum";
HAnimJoint39YYY.children = new X3D.MFNode();

HAnimJoint39ZZZ.children[0] = HAnimSegment40;

HAnimHumanoid38.joints = new X3D.MFNode();

HAnimHumanoid38XXX.joints[0] = HAnimJoint39;

let Shape41 = browser.currentScene.createNode("Shape");
let IndexedFaceSet42 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet42.USE = "SkinMeshIFS";
geometry = IndexedFaceSet42;

skin[1] = Shape41;

Group20ZZZ.children[3] = HAnimHumanoid38;

//==============================
let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.name = "SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.version = "2.0";
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimSegment45;

HAnimHumanoid43.joints = new X3D.MFNode();

HAnimHumanoid43XXX.joints[0] = HAnimJoint44;

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
let Shape46 = browser.currentScene.createNode("Shape");
let IndexedFaceSet47 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet47.DEF = "IndexedSkinMeshIFS";
let Coordinate48 = browser.currentScene.createNode("Coordinate");
Coordinate48.DEF = "SkinMeshCoordinate";
coord = Coordinate48;

geometry = IndexedFaceSet47;

skin[1] = Shape46;

Group20ZZZ.children[4] = HAnimHumanoid43;

//similarly for LOD
//==============================
let HAnimHumanoid49 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid49.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.version = "2.0";
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "sacrum";
HAnimJoint50YYY.children = new X3D.MFNode();

HAnimJoint50ZZZ.children[0] = HAnimSegment51;

HAnimHumanoid49.joints = new X3D.MFNode();

HAnimHumanoid49XXX.joints[0] = HAnimJoint50;

let Shape52 = browser.currentScene.createNode("Shape");
let IndexedFaceSet53 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet53.DEF = "TwoPartIndexedSkinMesh";
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.DEF = "TwoPartSkinMesh";
coord = Coordinate54;

geometry = IndexedFaceSet53;

skin[1] = Shape52;

Group20ZZZ.children[5] = HAnimHumanoid49;

//==============================
let HAnimHumanoid55 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid55.name = "ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.version = "2.0";
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "humanoid_root";
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment57 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment57.name = "sacrum";
HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimSegment57;

HAnimHumanoid55.joints = new X3D.MFNode();

HAnimHumanoid55XXX.joints[0] = HAnimJoint56;

let Shape58 = browser.currentScene.createNode("Shape");
skin[1] = Shape58;

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20ZZZ.children[6] = HAnimHumanoid55;

//==============================
let HAnimHumanoid59 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid59.name = "AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.version = "2.0";
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "humanoid_root";
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "sacrum";
HAnimJoint60YYY.children = new X3D.MFNode();

HAnimJoint60ZZZ.children[0] = HAnimSegment61;

HAnimHumanoid59.joints = new X3D.MFNode();

HAnimHumanoid59XXX.joints[0] = HAnimJoint60;

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
let Shape62 = browser.currentScene.createNode("Shape");
skin[1] = Shape62;

Group20ZZZ.children[7] = HAnimHumanoid59;

//==============================
browser.currentScene.children[2] = Group20;

let Viewpoint63 = browser.currentScene.createNode("Viewpoint");
Viewpoint63.DEF = "ViewHelpText";
Viewpoint63.description = "Select text to see website";
Viewpoint63.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[3] = Viewpoint63;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
let Anchor64 = browser.currentScene.createNode("Anchor");
Anchor64.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor64.parameter = new X3D.MFString([new X3D.SFString("target=blank")]);
Anchor64.url = new X3D.MFString([new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")]);
let Shape65 = browser.currentScene.createNode("Shape");
//TODO adjust Text string and Box size, then set Material transparency='1'
let Text66 = browser.currentScene.createNode("Text");
Text66.string = new X3D.MFString([new X3D.SFString("DesignPatternsApparelMedicalSkinLayers.x3d"), new X3D.SFString(""), new X3D.SFString("explores potential apparel approaches")]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle67.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle67.size = 0.6;
FontStyle67.style = "BOLD";
fontStyle = FontStyle67;

geometry = Text66;

let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new X3D.SFColor([0.9,0.9,0.9]);
material = Material69;

appearance = Appearance68;

Anchor64YYY.children = new X3D.MFNode();

Anchor64ZZZ.children[0] = Shape65;

let Shape70 = browser.currentScene.createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
let Box71 = browser.currentScene.createNode("Box");
Box71.size = new X3D.SFVec3f([11,2,0.001]);
geometry = Box71;

let Appearance72 = browser.currentScene.createNode("Appearance");
let Material73 = browser.currentScene.createNode("Material");
Material73.transparency = 1;
material = Material73;

appearance = Appearance72;

Anchor64ZZZ.children[1] = Shape70;

browser.currentScene.children[4] = Anchor64;

}
main ();

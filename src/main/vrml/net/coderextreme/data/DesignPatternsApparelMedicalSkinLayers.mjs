const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 2));
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
let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "HAnimHumanoid skin design patterns for apparel, medical";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo19;

let Background20 = browser.currentScene.createNode("Background");
Background20.skyColor = new X3D.MFColor([0,0.6,0.6]);
browser.currentScene.children[1] = Background20;

let Group21 = browser.currentScene.createNode("Group");
Group21.DEF = "MultipleHumanoids";
let MetadataString22 = browser.currentScene.createNode("MetadataString");
MetadataString22.name = "HAnimArchitecture";
MetadataString22.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString22.value = new X3D.MFString([new X3D.SFString("E.4 Multiple humanoids per file")]);
metadata = MetadataString22;

//==============================
let HAnimHumanoid23 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid23.name = "SimpleSkeleton";
HAnimHumanoid23.DEF = "a_SimpleSkeleton";
HAnimHumanoid23.version = "2.0";
let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "humanoid_root";
HAnimJoint24.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint24.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "sacrum";
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.DEF = "JointVisualization";
HAnimSegment25YYY.children = new X3D.MFNode();

HAnimSegment25ZZZ.children[0] = Shape26;

let Shape27 = browser.currentScene.createNode("Shape");
Shape27.DEF = "SegmentVisualization";
HAnimSegment25ZZZ.children[1] = Shape27;

let HAnimSite28 = browser.currentScene.createNode("HAnimSite");
HAnimSite28.name = "feature01_tip";
HAnimSite28.DEF = "a_feature01_tip";
let Shape29 = browser.currentScene.createNode("Shape");
Shape29.DEF = "SiteVisualization";
HAnimSite28YYY.children = new X3D.MFNode();

HAnimSite28ZZZ.children[0] = Shape29;

HAnimSegment25ZZZ.children[2] = HAnimSite28;

HAnimJoint24YYY.children = new X3D.MFNode();

HAnimJoint24ZZZ.children[0] = HAnimSegment25;

HAnimHumanoid23.joints = new X3D.MFNode();

HAnimHumanoid23XXX.joints[0] = HAnimJoint24;

Group21YYY.children = new X3D.MFNode();

Group21ZZZ.children[0] = HAnimHumanoid23;

//==============================
let HAnimHumanoid30 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid30.name = "SimpleSkeletonMesh";
HAnimHumanoid30.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid30.version = "2.0";
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "humanoid_root";
HAnimJoint31.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint31.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment32 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment32.name = "sacrum";
let Shape33 = browser.currentScene.createNode("Shape");
let IndexedFaceSet34 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet34.DEF = "SegmentBoneMesh";
geometry = IndexedFaceSet34;

HAnimSegment32YYY.children = new X3D.MFNode();

HAnimSegment32ZZZ.children[0] = Shape33;

HAnimJoint31YYY.children = new X3D.MFNode();

HAnimJoint31ZZZ.children[0] = HAnimSegment32;

HAnimHumanoid30.joints = new X3D.MFNode();

HAnimHumanoid30XXX.joints[0] = HAnimJoint31;

Group21ZZZ.children[1] = HAnimHumanoid30;

//==============================
let HAnimHumanoid35 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid35.name = "SkinIndexedGeometry";
HAnimHumanoid35.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid35.version = "2.0";
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint36.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment37 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment37.name = "sacrum";
HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimSegment37;

HAnimHumanoid35.joints = new X3D.MFNode();

HAnimHumanoid35XXX.joints[0] = HAnimJoint36;

let IndexedFaceSet38 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet38.DEF = "SkinMeshIFS";
skin[1] = IndexedFaceSet38;

Group21ZZZ.children[2] = HAnimHumanoid35;

//==============================
let HAnimHumanoid39 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid39.name = "SkinShapeIndexedGeometry";
HAnimHumanoid39.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid39.version = "2.0";
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "humanoid_root";
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment41 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment41.name = "sacrum";
HAnimJoint40YYY.children = new X3D.MFNode();

HAnimJoint40ZZZ.children[0] = HAnimSegment41;

HAnimHumanoid39.joints = new X3D.MFNode();

HAnimHumanoid39XXX.joints[0] = HAnimJoint40;

let Shape42 = browser.currentScene.createNode("Shape");
let IndexedFaceSet43 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet43.USE = "SkinMeshIFS";
geometry = IndexedFaceSet43;

skin[1] = Shape42;

Group21ZZZ.children[3] = HAnimHumanoid39;

//==============================
let HAnimHumanoid44 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid44.name = "SkinSwitchShapeIndexedGeometry";
HAnimHumanoid44.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid44.version = "2.0";
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimSegment46;

HAnimHumanoid44.joints = new X3D.MFNode();

HAnimHumanoid44XXX.joints[0] = HAnimJoint45;

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
let Shape47 = browser.currentScene.createNode("Shape");
let IndexedFaceSet48 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet48.DEF = "IndexedSkinMeshIFS";
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.DEF = "SkinMeshCoordinate";
coord = Coordinate49;

geometry = IndexedFaceSet48;

skin[1] = Shape47;

Group21ZZZ.children[4] = HAnimHumanoid44;

//similarly for LOD
//==============================
let HAnimHumanoid50 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid50.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid50.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid50.version = "2.0";
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "humanoid_root";
HAnimJoint51.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint51.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.name = "sacrum";
HAnimJoint51YYY.children = new X3D.MFNode();

HAnimJoint51ZZZ.children[0] = HAnimSegment52;

HAnimHumanoid50.joints = new X3D.MFNode();

HAnimHumanoid50XXX.joints[0] = HAnimJoint51;

let Shape53 = browser.currentScene.createNode("Shape");
let IndexedFaceSet54 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet54.DEF = "TwoPartIndexedSkinMesh";
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.DEF = "TwoPartSkinMesh";
coord = Coordinate55;

geometry = IndexedFaceSet54;

skin[1] = Shape53;

Group21ZZZ.children[5] = HAnimHumanoid50;

//==============================
let HAnimHumanoid56 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid56.name = "ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid56.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid56.version = "2.0";
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "humanoid_root";
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment58 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment58.name = "sacrum";
HAnimJoint57YYY.children = new X3D.MFNode();

HAnimJoint57ZZZ.children[0] = HAnimSegment58;

HAnimHumanoid56.joints = new X3D.MFNode();

HAnimHumanoid56XXX.joints[0] = HAnimJoint57;

let Shape59 = browser.currentScene.createNode("Shape");
skin[1] = Shape59;

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group21ZZZ.children[6] = HAnimHumanoid56;

//==============================
let HAnimHumanoid60 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid60.name = "AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid60.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid60.version = "2.0";
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "humanoid_root";
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.name = "sacrum";
HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimSegment62;

HAnimHumanoid60.joints = new X3D.MFNode();

HAnimHumanoid60XXX.joints[0] = HAnimJoint61;

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
let Shape63 = browser.currentScene.createNode("Shape");
skin[1] = Shape63;

Group21ZZZ.children[7] = HAnimHumanoid60;

//==============================
browser.currentScene.children[2] = Group21;

let Viewpoint64 = browser.currentScene.createNode("Viewpoint");
Viewpoint64.DEF = "ViewHelpText";
Viewpoint64.description = "Select text to see website";
Viewpoint64.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[3] = Viewpoint64;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
let Anchor65 = browser.currentScene.createNode("Anchor");
Anchor65.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor65.parameter = new X3D.MFString([new X3D.SFString("target=blank")]);
Anchor65.url = new X3D.MFString([new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")]);
let Shape66 = browser.currentScene.createNode("Shape");
//TODO adjust Text string and Box size, then set Material transparency='1'
let Text67 = browser.currentScene.createNode("Text");
Text67.string = new X3D.MFString([new X3D.SFString("DesignPatternsApparelMedicalSkinLayers.x3d"), new X3D.SFString(""), new X3D.SFString("explores potential apparel approaches")]);
let FontStyle68 = browser.currentScene.createNode("FontStyle");
FontStyle68.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle68.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle68.size = 0.6;
FontStyle68.style = "BOLD";
fontStyle = FontStyle68;

geometry = Text67;

let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.diffuseColor = new X3D.SFColor([0.9,0.9,0.9]);
material = Material70;

appearance = Appearance69;

Anchor65YYY.children = new X3D.MFNode();

Anchor65ZZZ.children[0] = Shape66;

let Shape71 = browser.currentScene.createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
let Box72 = browser.currentScene.createNode("Box");
Box72.size = new X3D.SFVec3f([11,2,0.001]);
geometry = Box72;

let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.transparency = 1;
material = Material74;

appearance = Appearance73;

Anchor65ZZZ.children[1] = Shape71;

browser.currentScene.children[4] = Anchor65;

}
main ();

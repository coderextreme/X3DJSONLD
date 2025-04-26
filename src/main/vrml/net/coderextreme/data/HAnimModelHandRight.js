const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimModelHandRight.x3d");
scene.addMetaData("description", "Right hand using high-fidelity definitions for HAnim version 2.0");
scene.addMetaData("creator", "Kwan-Hee YOO, Don Brutzman and Joe Williams");
scene.addMetaData("created", "26 January 2015");
scene.addMetaData("modified", "23 December 2021");
scene.addMetaData("TODO", "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2");
scene.addMetaData("Image", "HAnimModelHandRightSegmentVisualizationError.png");
scene.addMetaData("error", "not yet to scale, also relatively flat");
scene.addMetaData("warning", "TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
scene.addMetaData("info", "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
scene.addMetaData("reference", "https://www.web3d.org/working-groups/humanoid-animation-HAnim");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
scene.addMetaData("reference", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
scene.addMetaData("subject", "X3D HAnim humanoid animation");
scene.addMetaData("TODO", "Integrate and confirm Segment/Joint names, Viewpoints.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HAnimModelHandRight.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo25;

let HAnimHumanoid26 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid26.name = "Hand_Right";
HAnimHumanoid26.DEF = "hanim_Hand_Right";
HAnimHumanoid26.loa = 4;
HAnimHumanoid26.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet27 = browser.currentScene.createNode("MetadataSet");
MetadataSet27.name = "HAnimHumanoid.info";
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "authorName";
MetadataString28.value = new X3D.MFString([new X3D.SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")]);
MetadataSet27.value = new X3D.MFNode();

MetadataSet27XXX.value[0] = MetadataString28;

HAnimHumanoid26.metadata = new X3D.SFNode();

HAnimHumanoid26XXX.metadata[0] = MetadataSet27;

let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "humanoid_root";
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint29.llimit = new X3D.MFFloat([0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "r_radiocarpal";
HAnimJoint30.DEF = "hanim_r_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "r_carpal";
HAnimSegment31.DEF = "hanim_r_carpal";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "HAnimJointShape";
let Sphere34 = browser.currentScene.createNode("Sphere");
Sphere34.radius = 0.025;
geometry = Sphere34;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "HAnimJointAppearanceBlue";
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material36;

appearance = Appearance35;

Transform32YYY.child = new X3D.undefined();

Transform32ZZZ.child[0] = Shape33;

HAnimSegment31YYY.children = new X3D.MFNode();

HAnimSegment31ZZZ.children[0] = Transform32;

let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material39;

appearance = Appearance38;

let IndexedLineSet40 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet40.DEF = "RCToMC12";
IndexedLineSet40.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.point = new X3D.MFVec3f([0,0,0,-0.1,0.1,0]);
coord = Coordinate41;

geometry = IndexedLineSet40;

HAnimSegment31ZZZ.children[1] = Shape37;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material44;

appearance = Appearance43;

let IndexedLineSet45 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet45.DEF = "RCToMC3";
IndexedLineSet45.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new X3D.MFVec3f([0,0,0,0,0.07,0]);
coord = Coordinate46;

geometry = IndexedLineSet45;

HAnimSegment31ZZZ.children[2] = Shape42;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material49;

appearance = Appearance48;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.DEF = "RCToMC45";
IndexedLineSet50.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new X3D.MFVec3f([0,0,0,0.1,0.1,0]);
coord = Coordinate51;

geometry = IndexedLineSet50;

HAnimSegment31ZZZ.children[3] = Shape47;

HAnimJoint30YYY.children = new X3D.MFNode();

HAnimJoint30ZZZ.children[0] = HAnimSegment31;

//MC1
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "r_midcarpal_1";
HAnimJoint52.DEF = "hanim_r_midcarpal_1";
HAnimJoint52.center = new X3D.SFVec3f([-0.14,0.09,0]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "r_trapezium";
HAnimSegment53.DEF = "hanim_r_trapezium";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([-0.14,0.09,0]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "HAnimNewJointShape";
let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.025;
geometry = Sphere56;

let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.DEF = "HAnimJointAppearanceRed";
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material58;

appearance = Appearance57;

Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

HAnimSegment53YYY.children = new X3D.MFNode();

HAnimSegment53ZZZ.children[0] = Transform54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material61;

appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "MC12toCMC1";
IndexedLineSet62.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new X3D.MFVec3f([-0.1,0.1,0,-0.2,0.15,0]);
coord = Coordinate63;

geometry = IndexedLineSet62;

HAnimSegment53ZZZ.children[1] = Shape59;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimSegment53;

//thumb finger
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_carpometacarpal_1";
HAnimJoint64.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint64.center = new X3D.SFVec3f([-0.2,0.15,0]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "r_metacarpal_1";
HAnimSegment65.DEF = "hanim_r_metacarpal_1";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([-0.2,0.15,0]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66YYY.child = new X3D.undefined();

Transform66ZZZ.child[0] = Shape67;

HAnimSegment65YYY.children = new X3D.MFNode();

HAnimSegment65ZZZ.children[0] = Transform66;

let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material70;

appearance = Appearance69;

let IndexedLineSet71 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet71.DEF = "CMC1toMCP1xxx";
IndexedLineSet71.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new X3D.MFVec3f([-0.2,0.15,0,-0.3,0.3,0]);
coord = Coordinate72;

geometry = IndexedLineSet71;

HAnimSegment65ZZZ.children[1] = Shape68;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimSegment65;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "r_metacarpophalangeal_1";
HAnimJoint73.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint73.center = new X3D.SFVec3f([-0.3,0.3,0]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "r_carpal_proximal_phalanx_1";
HAnimSegment74.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new X3D.SFVec3f([-0.3,0.3,0]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimJointShape";
Transform75YYY.child = new X3D.undefined();

Transform75ZZZ.child[0] = Shape76;

HAnimSegment74YYY.children = new X3D.MFNode();

HAnimSegment74ZZZ.children[0] = Transform75;

let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
let Material79 = browser.currentScene.createNode("Material");
Material79.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material79;

appearance = Appearance78;

let IndexedLineSet80 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet80.DEF = "MCP11toIP1";
IndexedLineSet80.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new X3D.MFVec3f([-0.3,0.3,0,-0.35,0.4,0]);
coord = Coordinate81;

geometry = IndexedLineSet80;

HAnimSegment74ZZZ.children[1] = Shape77;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimSegment74;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "r_carpal_interphalangeal_1";
HAnimJoint82.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint82.center = new X3D.SFVec3f([-0.35,0.4,0]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "r_carpal_distal_phalanx_1";
HAnimSegment83.DEF = "hanim_r_carpal_distal_phalanx_1";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new X3D.SFVec3f([-0.35,0.4,0]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "HAnimJointShape";
Transform84YYY.child = new X3D.undefined();

Transform84ZZZ.child[0] = Shape85;

HAnimSegment83YYY.children = new X3D.MFNode();

HAnimSegment83ZZZ.children[0] = Transform84;

let Shape86 = browser.currentScene.createNode("Shape");
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material88;

appearance = Appearance87;

let IndexedLineSet89 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet89.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet89.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new X3D.MFVec3f([-0.35,0.4,0,-0.36,0.45,0]);
coord = Coordinate90;

geometry = IndexedLineSet89;

HAnimSegment83ZZZ.children[1] = Shape86;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimSegment83;

HAnimJoint73ZZZ.children[1] = HAnimJoint82;

HAnimJoint64ZZZ.children[1] = HAnimJoint73;

HAnimJoint52ZZZ.children[1] = HAnimJoint64;

HAnimJoint30ZZZ.children[1] = HAnimJoint52;

//MC2
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "r_midcarpal_2";
HAnimJoint91.DEF = "hanim_r_midcarpal_2";
HAnimJoint91.center = new X3D.SFVec3f([-0.07,0.07,0]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "r_trapezoid";
HAnimSegment92.DEF = "hanim_r_trapezoid";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new X3D.SFVec3f([-0.07,0.07,0]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimNewJointShape";
Transform93YYY.child = new X3D.undefined();

Transform93ZZZ.child[0] = Shape94;

HAnimSegment92YYY.children = new X3D.MFNode();

HAnimSegment92ZZZ.children[0] = Transform93;

let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
let Material97 = browser.currentScene.createNode("Material");
Material97.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material97;

appearance = Appearance96;

let IndexedLineSet98 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet98.DEF = "MC12toCMC2";
IndexedLineSet98.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new X3D.MFVec3f([-0.1,0.1,0,-0.1,0.2,0]);
coord = Coordinate99;

geometry = IndexedLineSet98;

HAnimSegment92ZZZ.children[1] = Shape95;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimSegment92;

//index finger
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_carpometacarpal_2";
HAnimJoint100.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint100.center = new X3D.SFVec3f([-0.1,0.2,0]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "r_metacarpal_2";
HAnimSegment101.DEF = "hanim_r_metacarpal_2";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new X3D.SFVec3f([-0.1,0.2,0]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimJointShape";
Transform102YYY.child = new X3D.undefined();

Transform102ZZZ.child[0] = Shape103;

HAnimSegment101YYY.children = new X3D.MFNode();

HAnimSegment101ZZZ.children[0] = Transform102;

let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material106;

appearance = Appearance105;

let IndexedLineSet107 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet107.DEF = "CMC2toMCP2";
IndexedLineSet107.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new X3D.MFVec3f([-0.1,0.2,0,-0.15,0.5,0]);
coord = Coordinate108;

geometry = IndexedLineSet107;

HAnimSegment101ZZZ.children[1] = Shape104;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimSegment101;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_metacarpophalangeal_2";
HAnimJoint109.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint109.center = new X3D.SFVec3f([-0.15,0.5,0]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "r_carpal_proximal_phalanx_2";
HAnimSegment110.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new X3D.SFVec3f([-0.15,0.5,0]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform111YYY.child = new X3D.undefined();

Transform111ZZZ.child[0] = Shape112;

HAnimSegment110YYY.children = new X3D.MFNode();

HAnimSegment110ZZZ.children[0] = Transform111;

let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material115;

appearance = Appearance114;

let IndexedLineSet116 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet116.DEF = "MCP2toPIP2";
IndexedLineSet116.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new X3D.MFVec3f([-0.15,0.5,0,-0.2,0.7,0]);
coord = Coordinate117;

geometry = IndexedLineSet116;

HAnimSegment110ZZZ.children[1] = Shape113;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimSegment110;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint118.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint118.center = new X3D.SFVec3f([-0.2,0.7,0]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "r_carpal_middle_phalanx_2";
HAnimSegment119.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new X3D.SFVec3f([-0.2,0.7,0]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimJointShape";
Transform120YYY.child = new X3D.undefined();

Transform120ZZZ.child[0] = Shape121;

HAnimSegment119YYY.children = new X3D.MFNode();

HAnimSegment119ZZZ.children[0] = Transform120;

let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material124;

appearance = Appearance123;

let IndexedLineSet125 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet125.DEF = "PIP2toDIP2";
IndexedLineSet125.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new X3D.MFVec3f([-0.2,0.7,0,-0.24,0.87,0]);
coord = Coordinate126;

geometry = IndexedLineSet125;

HAnimSegment119ZZZ.children[1] = Shape122;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimSegment119;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint127.center = new X3D.SFVec3f([-0.24,0.87,0]);
HAnimJoint127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "r_carpal_distal_phalanx_2";
HAnimSegment128.DEF = "hanim_r_carpal_distal_phalanx_2";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new X3D.SFVec3f([-0.24,0.87,0]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129YYY.child = new X3D.undefined();

Transform129ZZZ.child[0] = Shape130;

HAnimSegment128YYY.children = new X3D.MFNode();

HAnimSegment128ZZZ.children[0] = Transform129;

let Shape131 = browser.currentScene.createNode("Shape");
let Appearance132 = browser.currentScene.createNode("Appearance");
let Material133 = browser.currentScene.createNode("Material");
Material133.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material133;

appearance = Appearance132;

let IndexedLineSet134 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet134.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet134.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new X3D.MFVec3f([-0.24,0.87,0,-0.26,0.93,0]);
coord = Coordinate135;

geometry = IndexedLineSet134;

HAnimSegment128ZZZ.children[1] = Shape131;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimSegment128;

HAnimJoint118ZZZ.children[1] = HAnimJoint127;

HAnimJoint109ZZZ.children[1] = HAnimJoint118;

HAnimJoint100ZZZ.children[1] = HAnimJoint109;

HAnimJoint91ZZZ.children[1] = HAnimJoint100;

HAnimJoint30ZZZ.children[2] = HAnimJoint91;

//MC3
let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "r_midcarpal_3";
HAnimJoint136.DEF = "hanim_r_midcarpal_3";
HAnimJoint136.center = new X3D.SFVec3f([0,0.07,0]);
HAnimJoint136.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint136.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "r_capitate";
HAnimSegment137.DEF = "hanim_r_capitate";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([0,0.07,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimNewJointShape";
Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

HAnimSegment137YYY.children = new X3D.MFNode();

HAnimSegment137ZZZ.children[0] = Transform138;

let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
let Material142 = browser.currentScene.createNode("Material");
Material142.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material142;

appearance = Appearance141;

let IndexedLineSet143 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet143.DEF = "MC3toCMC3";
IndexedLineSet143.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.point = new X3D.MFVec3f([0,0.07,0,0,0.2,0]);
coord = Coordinate144;

geometry = IndexedLineSet143;

HAnimSegment137ZZZ.children[1] = Shape140;

HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimSegment137;

//Middle fingle
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "r_carpometacarpal_3";
HAnimJoint145.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint145.center = new X3D.SFVec3f([0,0.2,0]);
HAnimJoint145.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint145.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.name = "r_metacarpal_3";
HAnimSegment146.DEF = "hanim_r_metacarpal_3";
let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147YYY.child = new X3D.undefined();

Transform147ZZZ.child[0] = Shape148;

HAnimSegment146YYY.children = new X3D.MFNode();

HAnimSegment146ZZZ.children[0] = Transform147;

let Shape149 = browser.currentScene.createNode("Shape");
let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
Material151.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material151;

appearance = Appearance150;

let IndexedLineSet152 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet152.DEF = "CMC3toMCP3";
IndexedLineSet152.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new X3D.MFVec3f([0,0.2,0,-0.03,0.5,0]);
coord = Coordinate153;

geometry = IndexedLineSet152;

HAnimSegment146ZZZ.children[1] = Shape149;

HAnimJoint145YYY.children = new X3D.MFNode();

HAnimJoint145ZZZ.children[0] = HAnimSegment146;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "r_metacarpophalangeal_3";
HAnimJoint154.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint154.center = new X3D.SFVec3f([-0.03,0.5,0]);
HAnimJoint154.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "r_carpal_proximal_phalanx_3";
HAnimSegment155.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new X3D.SFVec3f([-0.03,0.5,0]);
let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "HAnimJointShape";
Transform156YYY.child = new X3D.undefined();

Transform156ZZZ.child[0] = Shape157;

HAnimSegment155YYY.children = new X3D.MFNode();

HAnimSegment155ZZZ.children[0] = Transform156;

let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material160;

appearance = Appearance159;

let IndexedLineSet161 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet161.DEF = "MCP3toPIP3";
IndexedLineSet161.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new X3D.MFVec3f([-0.03,0.5,0,-0.05,0.75,0]);
coord = Coordinate162;

geometry = IndexedLineSet161;

HAnimSegment155ZZZ.children[1] = Shape158;

HAnimJoint154YYY.children = new X3D.MFNode();

HAnimJoint154ZZZ.children[0] = HAnimSegment155;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint163.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint163.center = new X3D.SFVec3f([-0.05,0.75,0]);
HAnimJoint163.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint163.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "r_carpal_middle_phalanx_3";
HAnimSegment164.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new X3D.SFVec3f([-0.05,0.75,0]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimJointShape";
Transform165YYY.child = new X3D.undefined();

Transform165ZZZ.child[0] = Shape166;

HAnimSegment164YYY.children = new X3D.MFNode();

HAnimSegment164ZZZ.children[0] = Transform165;

let Shape167 = browser.currentScene.createNode("Shape");
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material169;

appearance = Appearance168;

let IndexedLineSet170 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet170.DEF = "PIP3toDIP3";
IndexedLineSet170.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new X3D.MFVec3f([-0.05,0.75,0,-0.08,0.96,0]);
coord = Coordinate171;

geometry = IndexedLineSet170;

HAnimSegment164ZZZ.children[1] = Shape167;

HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint172.center = new X3D.SFVec3f([-0.08,0.96,0]);
HAnimJoint172.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint172.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "r_carpal_distal_phalanx_3";
HAnimSegment173.DEF = "hanim_r_carpal_distal_phalanx_3";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new X3D.SFVec3f([-0.08,0.96,0]);
let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174YYY.child = new X3D.undefined();

Transform174ZZZ.child[0] = Shape175;

HAnimSegment173YYY.children = new X3D.MFNode();

HAnimSegment173ZZZ.children[0] = Transform174;

let Shape176 = browser.currentScene.createNode("Shape");
let Appearance177 = browser.currentScene.createNode("Appearance");
let Material178 = browser.currentScene.createNode("Material");
Material178.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material178;

appearance = Appearance177;

let IndexedLineSet179 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet179.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet179.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new X3D.MFVec3f([-0.08,0.96,0,-0.09,1.05,0]);
coord = Coordinate180;

geometry = IndexedLineSet179;

HAnimSegment173ZZZ.children[1] = Shape176;

HAnimJoint172YYY.children = new X3D.MFNode();

HAnimJoint172ZZZ.children[0] = HAnimSegment173;

HAnimJoint163ZZZ.children[1] = HAnimJoint172;

HAnimJoint154ZZZ.children[1] = HAnimJoint163;

HAnimJoint145ZZZ.children[1] = HAnimJoint154;

HAnimJoint136ZZZ.children[1] = HAnimJoint145;

HAnimJoint30ZZZ.children[3] = HAnimJoint136;

//MC4_5
let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "r_midcarpal_4_5";
HAnimJoint181.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint181.center = new X3D.SFVec3f([0.1,0.1,0]);
HAnimJoint181.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint181.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "r_hamate";
HAnimSegment182.DEF = "hanim_r_hamate";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new X3D.SFVec3f([0.1,0.1,0]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimNewJointShape";
Transform183YYY.child = new X3D.undefined();

Transform183ZZZ.child[0] = Shape184;

HAnimSegment182YYY.children = new X3D.MFNode();

HAnimSegment182ZZZ.children[0] = Transform183;

let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material187;

appearance = Appearance186;

let IndexedLineSet188 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet188.DEF = "MC45toCMC4";
IndexedLineSet188.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new X3D.MFVec3f([0.1,0.1,0,0.1,0.2,0]);
coord = Coordinate189;

geometry = IndexedLineSet188;

HAnimSegment182ZZZ.children[1] = Shape185;

let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material192;

appearance = Appearance191;

let IndexedLineSet193 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC5";
IndexedLineSet193.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new X3D.MFVec3f([0.1,0.1,0,0.15,0.17,0]);
coord = Coordinate194;

geometry = IndexedLineSet193;

HAnimSegment182ZZZ.children[2] = Shape190;

HAnimJoint181YYY.children = new X3D.MFNode();

HAnimJoint181ZZZ.children[0] = HAnimSegment182;

//ring finger
let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "r_carpometacarpal_4";
HAnimJoint195.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint195.center = new X3D.SFVec3f([0.1,0.2,0]);
HAnimJoint195.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint195.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.name = "r_metacarpal_4";
HAnimSegment196.DEF = "hanim_r_metacarpal_4";
let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new X3D.SFVec3f([0.1,0.2,0]);
let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "HAnimJointShape";
Transform197YYY.child = new X3D.undefined();

Transform197ZZZ.child[0] = Shape198;

HAnimSegment196YYY.children = new X3D.MFNode();

HAnimSegment196ZZZ.children[0] = Transform197;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material201;

appearance = Appearance200;

let IndexedLineSet202 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet202.DEF = "CMC4toMCP4";
IndexedLineSet202.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new X3D.MFVec3f([0.1,0.2,0,0.1,0.47,0]);
coord = Coordinate203;

geometry = IndexedLineSet202;

HAnimSegment196ZZZ.children[1] = Shape199;

HAnimJoint195YYY.children = new X3D.MFNode();

HAnimJoint195ZZZ.children[0] = HAnimSegment196;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "r_metacarpophalangeal_4";
HAnimJoint204.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint204.center = new X3D.SFVec3f([0.1,0.47,0]);
HAnimJoint204.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint204.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "r_carpal_proximal_phalanx_4";
HAnimSegment205.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new X3D.SFVec3f([0.1,0.47,0]);
let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "HAnimJointShape";
Transform206YYY.child = new X3D.undefined();

Transform206ZZZ.child[0] = Shape207;

HAnimSegment205YYY.children = new X3D.MFNode();

HAnimSegment205ZZZ.children[0] = Transform206;

let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material210;

appearance = Appearance209;

let IndexedLineSet211 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet211.DEF = "MCP4toPIP4";
IndexedLineSet211.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new X3D.MFVec3f([0.1,0.47,0,0.1,0.7,0]);
coord = Coordinate212;

geometry = IndexedLineSet211;

HAnimSegment205ZZZ.children[1] = Shape208;

HAnimJoint204YYY.children = new X3D.MFNode();

HAnimJoint204ZZZ.children[0] = HAnimSegment205;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint213.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint213.center = new X3D.SFVec3f([0.1,0.7,0]);
HAnimJoint213.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint213.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "r_carpal_middle_phalanx_4";
HAnimSegment214.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new X3D.SFVec3f([0.1,0.7,0]);
let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimJointShape";
Transform215YYY.child = new X3D.undefined();

Transform215ZZZ.child[0] = Shape216;

HAnimSegment214YYY.children = new X3D.MFNode();

HAnimSegment214ZZZ.children[0] = Transform215;

let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material219;

appearance = Appearance218;

let IndexedLineSet220 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet220.DEF = "PIP4toDIP4";
IndexedLineSet220.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new X3D.MFVec3f([0.1,0.7,0,0.1,0.93,0]);
coord = Coordinate221;

geometry = IndexedLineSet220;

HAnimSegment214ZZZ.children[1] = Shape217;

HAnimJoint213YYY.children = new X3D.MFNode();

HAnimJoint213ZZZ.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint222.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint222.center = new X3D.SFVec3f([0.1,0.93,0]);
HAnimJoint222.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint222.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "r_carpal_distal_phalanx_4";
HAnimSegment223.DEF = "hanim_r_carpal_distal_phalanx_4";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new X3D.SFVec3f([0.1,0.93,0]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224YYY.child = new X3D.undefined();

Transform224ZZZ.child[0] = Shape225;

HAnimSegment223YYY.children = new X3D.MFNode();

HAnimSegment223ZZZ.children[0] = Transform224;

let Shape226 = browser.currentScene.createNode("Shape");
let Appearance227 = browser.currentScene.createNode("Appearance");
let Material228 = browser.currentScene.createNode("Material");
Material228.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material228;

appearance = Appearance227;

let IndexedLineSet229 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet229.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet229.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new X3D.MFVec3f([0.1,0.93,0,0.1,1,0]);
coord = Coordinate230;

geometry = IndexedLineSet229;

HAnimSegment223ZZZ.children[1] = Shape226;

HAnimJoint222YYY.children = new X3D.MFNode();

HAnimJoint222ZZZ.children[0] = HAnimSegment223;

HAnimJoint213ZZZ.children[1] = HAnimJoint222;

HAnimJoint204ZZZ.children[1] = HAnimJoint213;

HAnimJoint195ZZZ.children[1] = HAnimJoint204;

HAnimJoint181ZZZ.children[1] = HAnimJoint195;

//pinky finger
let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "r_carpometacarpal_5";
HAnimJoint231.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint231.center = new X3D.SFVec3f([0.15,0.17,0]);
HAnimJoint231.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint231.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "r_metacarpal_5";
HAnimSegment232.DEF = "hanim_r_metacarpal_5";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new X3D.SFVec3f([0.15,0.17,0]);
let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233YYY.child = new X3D.undefined();

Transform233ZZZ.child[0] = Shape234;

HAnimSegment232YYY.children = new X3D.MFNode();

HAnimSegment232ZZZ.children[0] = Transform233;

let Shape235 = browser.currentScene.createNode("Shape");
let Appearance236 = browser.currentScene.createNode("Appearance");
let Material237 = browser.currentScene.createNode("Material");
Material237.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material237;

appearance = Appearance236;

let IndexedLineSet238 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet238.DEF = "CMC5toMCP5";
IndexedLineSet238.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new X3D.MFVec3f([0.15,0.17,0,0.2,0.4,0]);
coord = Coordinate239;

geometry = IndexedLineSet238;

HAnimSegment232ZZZ.children[1] = Shape235;

HAnimJoint231YYY.children = new X3D.MFNode();

HAnimJoint231ZZZ.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "r_metacarpophalangeal_5";
HAnimJoint240.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint240.center = new X3D.SFVec3f([0.2,0.4,0]);
HAnimJoint240.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint240.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "r_carpal_proximal_phalanx_5";
HAnimSegment241.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([0.2,0.4,0]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242YYY.child = new X3D.undefined();

Transform242ZZZ.child[0] = Shape243;

HAnimSegment241YYY.children = new X3D.MFNode();

HAnimSegment241ZZZ.children[0] = Transform242;

let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material246;

appearance = Appearance245;

let IndexedLineSet247 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet247.DEF = "MCP5toPIP5";
IndexedLineSet247.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new X3D.MFVec3f([0.2,0.4,0,0.23,0.63,0]);
coord = Coordinate248;

geometry = IndexedLineSet247;

HAnimSegment241ZZZ.children[1] = Shape244;

HAnimJoint240YYY.children = new X3D.MFNode();

HAnimJoint240ZZZ.children[0] = HAnimSegment241;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint249.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint249.center = new X3D.SFVec3f([0.23,0.63,0]);
HAnimJoint249.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint249.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "r_carpal_middle_phalanx_5";
HAnimSegment250.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new X3D.SFVec3f([0.23,0.63,0]);
let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251YYY.child = new X3D.undefined();

Transform251ZZZ.child[0] = Shape252;

HAnimSegment250YYY.children = new X3D.MFNode();

HAnimSegment250ZZZ.children[0] = Transform251;

let Shape253 = browser.currentScene.createNode("Shape");
let Appearance254 = browser.currentScene.createNode("Appearance");
let Material255 = browser.currentScene.createNode("Material");
Material255.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material255;

appearance = Appearance254;

let IndexedLineSet256 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet256.DEF = "PIP5toDIP5";
IndexedLineSet256.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new X3D.MFVec3f([0.23,0.63,0,0.25,0.79,0]);
coord = Coordinate257;

geometry = IndexedLineSet256;

HAnimSegment250ZZZ.children[1] = Shape253;

HAnimJoint249YYY.children = new X3D.MFNode();

HAnimJoint249ZZZ.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint258.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint258.center = new X3D.SFVec3f([0.25,0.79,0]);
HAnimJoint258.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint258.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "r_carpal_distal_phalanx_5";
HAnimSegment259.DEF = "hanim_r_carpal_distal_phalanx_5";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new X3D.SFVec3f([0.25,0.79,0]);
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260YYY.child = new X3D.undefined();

Transform260ZZZ.child[0] = Shape261;

HAnimSegment259YYY.children = new X3D.MFNode();

HAnimSegment259ZZZ.children[0] = Transform260;

let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
let Material264 = browser.currentScene.createNode("Material");
Material264.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material264;

appearance = Appearance263;

let IndexedLineSet265 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet265.DEF = "fingertip_r_carpal_distal_interphalangeal_5";
IndexedLineSet265.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new X3D.MFVec3f([0.25,0.79,0,0.26,0.85,0]);
coord = Coordinate266;

geometry = IndexedLineSet265;

HAnimSegment259ZZZ.children[1] = Shape262;

HAnimJoint258YYY.children = new X3D.MFNode();

HAnimJoint258ZZZ.children[0] = HAnimSegment259;

HAnimJoint249ZZZ.children[1] = HAnimJoint258;

HAnimJoint240ZZZ.children[1] = HAnimJoint249;

HAnimJoint231ZZZ.children[1] = HAnimJoint240;

HAnimJoint181ZZZ.children[2] = HAnimJoint231;

HAnimJoint30ZZZ.children[4] = HAnimJoint181;

HAnimJoint29YYY.children = new X3D.MFNode();

HAnimJoint29ZZZ.children[0] = HAnimJoint30;

joints[1] = HAnimJoint29;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[3] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[4] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[5] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[6] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_r_carpal_interphalangeal_1";
joints[7] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[8] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[9] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[10] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[11] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_r_carpometacarpal_1";
joints[12] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_r_carpometacarpal_2";
joints[13] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_r_carpometacarpal_3";
joints[14] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_r_carpometacarpal_4";
joints[15] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_r_carpometacarpal_5";
joints[16] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_metacarpophalangeal_1";
joints[17] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_r_metacarpophalangeal_2";
joints[18] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_metacarpophalangeal_3";
joints[19] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_r_metacarpophalangeal_4";
joints[20] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_metacarpophalangeal_5";
joints[21] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_r_midcarpal_1";
joints[22] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_r_midcarpal_2";
joints[23] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_midcarpal_3";
joints[24] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_midcarpal_4_5";
joints[25] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_radiocarpal";
joints[26] = HAnimJoint291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_capitate";
segments[27] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_carpal";
segments[28] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_carpal_distal_phalanx_1";
segments[29] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_carpal_distal_phalanx_2";
segments[30] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_carpal_distal_phalanx_3";
segments[31] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_carpal_distal_phalanx_4";
segments[32] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_carpal_distal_phalanx_5";
segments[33] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_carpal_middle_phalanx_2";
segments[34] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_carpal_middle_phalanx_3";
segments[35] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_carpal_middle_phalanx_4";
segments[36] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_carpal_middle_phalanx_5";
segments[37] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[38] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[39] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[40] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[41] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[42] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_hamate";
segments[43] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_metacarpal_1";
segments[44] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_metacarpal_2";
segments[45] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_metacarpal_3";
segments[46] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_r_metacarpal_4";
segments[47] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_r_metacarpal_5";
segments[48] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_r_trapezium";
segments[49] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_r_trapezoid";
segments[50] = HAnimSegment315;

browser.currentScene.children[1] = HAnimHumanoid26;

}
main ();

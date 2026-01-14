const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimModelHandLeft.x3d");
scene.addMetaData("description", "Left hand, using high-fidelity definitions for HAnim version 2.0");
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
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo25;

let HAnimHumanoid26 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid26.name = "Hand_Left";
HAnimHumanoid26.DEF = "hanim_Hand_Left";
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
HAnimJoint30.name = "l_radiocarpal";
HAnimJoint30.DEF = "hanim_l_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "l_carpal";
HAnimSegment31.DEF = "hanim_l_carpal";
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
Coordinate41.point = new X3D.MFVec3f([0,0,0,0.1,0.1,0]);
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
Coordinate51.point = new X3D.MFVec3f([0,0,0,-0.1,0.1,0]);
coord = Coordinate51;

geometry = IndexedLineSet50;

HAnimSegment31ZZZ.children[3] = Shape47;

HAnimJoint30YYY.children = new X3D.MFNode();

HAnimJoint30ZZZ.children[0] = HAnimSegment31;

//MC1
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_midcarpal_1";
HAnimJoint52.DEF = "hanim_l_midcarpal_1";
HAnimJoint52.center = new X3D.SFVec3f([0.14,0.09,0]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "l_trapezium";
HAnimSegment53.DEF = "hanim_l_trapezium";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0.14,0.09,0]);
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
Coordinate63.point = new X3D.MFVec3f([0.1,0.1,0,0.2,0.15,0]);
coord = Coordinate63;

geometry = IndexedLineSet62;

HAnimSegment53ZZZ.children[1] = Shape59;

let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material66;

appearance = Appearance65;

let IndexedLineSet67 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet67.DEF = "MC1toCMC1";
IndexedLineSet67.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate68 = browser.currentScene.createNode("Coordinate");
Coordinate68.point = new X3D.MFVec3f([0.1,0.1,0,0.1,0.2,0]);
coord = Coordinate68;

geometry = IndexedLineSet67;

HAnimSegment53ZZZ.children[2] = Shape64;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimSegment53;

//thumb finger
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_carpometacarpal_1";
HAnimJoint69.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint69.center = new X3D.SFVec3f([0.2,0.15,0]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.name = "l_metacarpal_1";
HAnimSegment70.DEF = "hanim_l_metacarpal_1";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new X3D.SFVec3f([0.2,0.15,0]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "HAnimJointShape";
Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

HAnimSegment70YYY.children = new X3D.MFNode();

HAnimSegment70ZZZ.children[0] = Transform71;

let Shape73 = browser.currentScene.createNode("Shape");
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material75;

appearance = Appearance74;

let IndexedLineSet76 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet76.DEF = "CMC1toMCP1";
IndexedLineSet76.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate77 = browser.currentScene.createNode("Coordinate");
Coordinate77.point = new X3D.MFVec3f([0.2,0.15,0,0.3,0.3,0]);
coord = Coordinate77;

geometry = IndexedLineSet76;

HAnimSegment70ZZZ.children[1] = Shape73;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimSegment70;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_metacarpophalangeal_1";
HAnimJoint78.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint78.center = new X3D.SFVec3f([0.3,0.3,0]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "l_carpal_proximal_phalanx_1";
HAnimSegment79.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new X3D.SFVec3f([0.3,0.3,0]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "HAnimJointShape";
Transform80YYY.child = new X3D.undefined();

Transform80ZZZ.child[0] = Shape81;

HAnimSegment79YYY.children = new X3D.MFNode();

HAnimSegment79ZZZ.children[0] = Transform80;

let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
let Material84 = browser.currentScene.createNode("Material");
Material84.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material84;

appearance = Appearance83;

let IndexedLineSet85 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet85.DEF = "MCP11toIP1";
IndexedLineSet85.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new X3D.MFVec3f([0.3,0.3,0,0.35,0.4,0]);
coord = Coordinate86;

geometry = IndexedLineSet85;

HAnimSegment79ZZZ.children[1] = Shape82;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimSegment79;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_carpal_interphalangeal_1";
HAnimJoint87.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint87.center = new X3D.SFVec3f([0.35,0.4,0]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.name = "l_carpal_distal_phalanx_1";
HAnimSegment88.DEF = "hanim_l_carpal_distal_phalanx_1";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new X3D.SFVec3f([0.35,0.4,0]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimJointShape";
Transform89YYY.child = new X3D.undefined();

Transform89ZZZ.child[0] = Shape90;

HAnimSegment88YYY.children = new X3D.MFNode();

HAnimSegment88ZZZ.children[0] = Transform89;

let Shape91 = browser.currentScene.createNode("Shape");
let Appearance92 = browser.currentScene.createNode("Appearance");
let Material93 = browser.currentScene.createNode("Material");
Material93.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material93;

appearance = Appearance92;

let IndexedLineSet94 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet94.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet94.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.point = new X3D.MFVec3f([0.35,0.4,0,0.36,0.45,0]);
coord = Coordinate95;

geometry = IndexedLineSet94;

HAnimSegment88ZZZ.children[1] = Shape91;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimSegment88;

HAnimJoint78ZZZ.children[1] = HAnimJoint87;

HAnimJoint69ZZZ.children[1] = HAnimJoint78;

HAnimJoint52ZZZ.children[1] = HAnimJoint69;

HAnimJoint30ZZZ.children[1] = HAnimJoint52;

//MC2
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_midcarpal_2";
HAnimJoint96.DEF = "hanim_l_midcarpal_2";
HAnimJoint96.center = new X3D.SFVec3f([0.07,0.07,0]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "l_trapezoid";
HAnimSegment97.DEF = "hanim_l_trapezoid";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new X3D.SFVec3f([0.07,0.07,0]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimNewJointShape";
Transform98YYY.child = new X3D.undefined();

Transform98ZZZ.child[0] = Shape99;

HAnimSegment97YYY.children = new X3D.MFNode();

HAnimSegment97ZZZ.children[0] = Transform98;

let Shape100 = browser.currentScene.createNode("Shape");
let Appearance101 = browser.currentScene.createNode("Appearance");
let Material102 = browser.currentScene.createNode("Material");
Material102.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material102;

appearance = Appearance101;

let IndexedLineSet103 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet103.DEF = "MC2toCMC2";
IndexedLineSet103.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new X3D.MFVec3f([-0.1,0.1,0,-0.1,0.2,0]);
coord = Coordinate104;

geometry = IndexedLineSet103;

HAnimSegment97ZZZ.children[1] = Shape100;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimSegment97;

//index finger
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "l_carpometacarpal_2";
HAnimJoint105.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint105.center = new X3D.SFVec3f([0.1,0.2,0]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment106.name = "l_metacarpal_2";
HAnimSegment106.DEF = "hanim_l_metacarpal_2";
let Transform107 = browser.currentScene.createNode("Transform");
Transform107.translation = new X3D.SFVec3f([0.1,0.2,0]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107YYY.child = new X3D.undefined();

Transform107ZZZ.child[0] = Shape108;

HAnimSegment106YYY.children = new X3D.MFNode();

HAnimSegment106ZZZ.children[0] = Transform107;

let Shape109 = browser.currentScene.createNode("Shape");
let Appearance110 = browser.currentScene.createNode("Appearance");
let Material111 = browser.currentScene.createNode("Material");
Material111.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material111;

appearance = Appearance110;

let IndexedLineSet112 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet112.DEF = "CMC2toMCP2";
IndexedLineSet112.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate113 = browser.currentScene.createNode("Coordinate");
Coordinate113.point = new X3D.MFVec3f([0.1,0.2,0,0.15,0.5,0]);
coord = Coordinate113;

geometry = IndexedLineSet112;

HAnimSegment106ZZZ.children[1] = Shape109;

HAnimJoint105YYY.children = new X3D.MFNode();

HAnimJoint105ZZZ.children[0] = HAnimSegment106;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "l_metacarpophalangeal_2";
HAnimJoint114.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint114.center = new X3D.SFVec3f([0.15,0.5,0]);
HAnimJoint114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint114.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment115.name = "l_carpal_proximal_phalanx_2";
HAnimSegment115.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.translation = new X3D.SFVec3f([0.15,0.5,0]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "HAnimJointShape";
Transform116YYY.child = new X3D.undefined();

Transform116ZZZ.child[0] = Shape117;

HAnimSegment115YYY.children = new X3D.MFNode();

HAnimSegment115ZZZ.children[0] = Transform116;

let Shape118 = browser.currentScene.createNode("Shape");
let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material120;

appearance = Appearance119;

let IndexedLineSet121 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet121.DEF = "MCP2toPIP2";
IndexedLineSet121.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate122 = browser.currentScene.createNode("Coordinate");
Coordinate122.point = new X3D.MFVec3f([0.15,0.5,0,0.2,0.7,0]);
coord = Coordinate122;

geometry = IndexedLineSet121;

HAnimSegment115ZZZ.children[1] = Shape118;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimSegment115;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint123.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint123.center = new X3D.SFVec3f([0.2,0.7,0]);
HAnimJoint123.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint123.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "l_carpal_middle_phalanx_2";
HAnimSegment124.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new X3D.SFVec3f([0.2,0.7,0]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimJointShape";
Transform125YYY.child = new X3D.undefined();

Transform125ZZZ.child[0] = Shape126;

HAnimSegment124YYY.children = new X3D.MFNode();

HAnimSegment124ZZZ.children[0] = Transform125;

let Shape127 = browser.currentScene.createNode("Shape");
let Appearance128 = browser.currentScene.createNode("Appearance");
let Material129 = browser.currentScene.createNode("Material");
Material129.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material129;

appearance = Appearance128;

let IndexedLineSet130 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet130.DEF = "PIP2toDIP2";
IndexedLineSet130.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate131 = browser.currentScene.createNode("Coordinate");
Coordinate131.point = new X3D.MFVec3f([0.2,0.7,0,0.24,0.87,0]);
coord = Coordinate131;

geometry = IndexedLineSet130;

HAnimSegment124ZZZ.children[1] = Shape127;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimSegment124;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint132.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint132.center = new X3D.SFVec3f([0.24,0.87,0]);
HAnimJoint132.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint132.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.name = "l_carpal_distal_phalanx_2";
HAnimSegment133.DEF = "hanim_l_carpal_distal_phalanx_2";
let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new X3D.SFVec3f([0.24,0.87,0]);
let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimJointShape";
Transform134YYY.child = new X3D.undefined();

Transform134ZZZ.child[0] = Shape135;

HAnimSegment133YYY.children = new X3D.MFNode();

HAnimSegment133ZZZ.children[0] = Transform134;

let Shape136 = browser.currentScene.createNode("Shape");
let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
Material138.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material138;

appearance = Appearance137;

let IndexedLineSet139 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet139.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet139.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new X3D.MFVec3f([0.24,0.87,0,0.26,0.93,0]);
coord = Coordinate140;

geometry = IndexedLineSet139;

HAnimSegment133ZZZ.children[1] = Shape136;

HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimSegment133;

HAnimJoint123ZZZ.children[1] = HAnimJoint132;

HAnimJoint114ZZZ.children[1] = HAnimJoint123;

HAnimJoint105ZZZ.children[1] = HAnimJoint114;

HAnimJoint96ZZZ.children[1] = HAnimJoint105;

HAnimJoint30ZZZ.children[2] = HAnimJoint96;

//MC3
let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_midcarpal_3";
HAnimJoint141.DEF = "hanim_l_midcarpal_3";
HAnimJoint141.center = new X3D.SFVec3f([0,0.07,0]);
HAnimJoint141.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint141.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "l_capitate";
HAnimSegment142.DEF = "hanim_l_capitate";
let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new X3D.SFVec3f([0,0.07,0]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "HAnimNewJointShape";
Transform143YYY.child = new X3D.undefined();

Transform143ZZZ.child[0] = Shape144;

HAnimSegment142YYY.children = new X3D.MFNode();

HAnimSegment142ZZZ.children[0] = Transform143;

let Shape145 = browser.currentScene.createNode("Shape");
let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material147;

appearance = Appearance146;

let IndexedLineSet148 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet148.DEF = "MC3toCMC3";
IndexedLineSet148.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new X3D.MFVec3f([0,0.07,0,0,0.2,0]);
coord = Coordinate149;

geometry = IndexedLineSet148;

HAnimSegment142ZZZ.children[1] = Shape145;

HAnimJoint141YYY.children = new X3D.MFNode();

HAnimJoint141ZZZ.children[0] = HAnimSegment142;

//Middle fingle
let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "l_carpometacarpal_3";
HAnimJoint150.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint150.center = new X3D.SFVec3f([0,0.2,0]);
HAnimJoint150.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint150.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.name = "l_metacarpal_3";
HAnimSegment151.DEF = "hanim_l_metacarpal_3";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape153 = browser.currentScene.createNode("Shape");
Shape153.USE = "HAnimJointShape";
Transform152YYY.child = new X3D.undefined();

Transform152ZZZ.child[0] = Shape153;

HAnimSegment151YYY.children = new X3D.MFNode();

HAnimSegment151ZZZ.children[0] = Transform152;

let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Material156.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material156;

appearance = Appearance155;

let IndexedLineSet157 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet157.DEF = "CMC3toMCP3";
IndexedLineSet157.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new X3D.MFVec3f([0,0.2,0,0.03,0.5,0]);
coord = Coordinate158;

geometry = IndexedLineSet157;

HAnimSegment151ZZZ.children[1] = Shape154;

HAnimJoint150YYY.children = new X3D.MFNode();

HAnimJoint150ZZZ.children[0] = HAnimSegment151;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_metacarpophalangeal_3";
HAnimJoint159.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint159.center = new X3D.SFVec3f([0.03,0.5,0]);
HAnimJoint159.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint159.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_carpal_proximal_phalanx_3";
HAnimSegment160.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform161 = browser.currentScene.createNode("Transform");
Transform161.translation = new X3D.SFVec3f([0.03,0.5,0]);
let Shape162 = browser.currentScene.createNode("Shape");
Shape162.USE = "HAnimJointShape";
Transform161YYY.child = new X3D.undefined();

Transform161ZZZ.child[0] = Shape162;

HAnimSegment160YYY.children = new X3D.MFNode();

HAnimSegment160ZZZ.children[0] = Transform161;

let Shape163 = browser.currentScene.createNode("Shape");
let Appearance164 = browser.currentScene.createNode("Appearance");
let Material165 = browser.currentScene.createNode("Material");
Material165.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material165;

appearance = Appearance164;

let IndexedLineSet166 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet166.DEF = "MCP3toPIP3";
IndexedLineSet166.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate167 = browser.currentScene.createNode("Coordinate");
Coordinate167.point = new X3D.MFVec3f([0.03,0.5,0,0.05,0.75,0]);
coord = Coordinate167;

geometry = IndexedLineSet166;

HAnimSegment160ZZZ.children[1] = Shape163;

HAnimJoint159YYY.children = new X3D.MFNode();

HAnimJoint159ZZZ.children[0] = HAnimSegment160;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint168.center = new X3D.SFVec3f([0.05,0.75,0]);
HAnimJoint168.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint168.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.name = "l_carpal_middle_phalanx_3";
HAnimSegment169.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new X3D.SFVec3f([0.05,0.75,0]);
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "HAnimJointShape";
Transform170YYY.child = new X3D.undefined();

Transform170ZZZ.child[0] = Shape171;

HAnimSegment169YYY.children = new X3D.MFNode();

HAnimSegment169ZZZ.children[0] = Transform170;

let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material174;

appearance = Appearance173;

let IndexedLineSet175 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet175.DEF = "PIP3toDIP3";
IndexedLineSet175.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new X3D.MFVec3f([0.05,0.75,0,0.08,0.96,0]);
coord = Coordinate176;

geometry = IndexedLineSet175;

HAnimSegment169ZZZ.children[1] = Shape172;

HAnimJoint168YYY.children = new X3D.MFNode();

HAnimJoint168ZZZ.children[0] = HAnimSegment169;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint177.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint177.center = new X3D.SFVec3f([0.08,0.96,0]);
HAnimJoint177.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint177.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.name = "l_carpal_distal_phalanx_3";
HAnimSegment178.DEF = "hanim_l_carpal_distal_phalanx_3";
let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new X3D.SFVec3f([0.08,0.96,0]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179YYY.child = new X3D.undefined();

Transform179ZZZ.child[0] = Shape180;

HAnimSegment178YYY.children = new X3D.MFNode();

HAnimSegment178ZZZ.children[0] = Transform179;

let Shape181 = browser.currentScene.createNode("Shape");
let Appearance182 = browser.currentScene.createNode("Appearance");
let Material183 = browser.currentScene.createNode("Material");
Material183.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material183;

appearance = Appearance182;

let IndexedLineSet184 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet184.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet184.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new X3D.MFVec3f([0.08,0.96,0,0.09,1.05,0]);
coord = Coordinate185;

geometry = IndexedLineSet184;

HAnimSegment178ZZZ.children[1] = Shape181;

HAnimJoint177YYY.children = new X3D.MFNode();

HAnimJoint177ZZZ.children[0] = HAnimSegment178;

HAnimJoint168ZZZ.children[1] = HAnimJoint177;

HAnimJoint159ZZZ.children[1] = HAnimJoint168;

HAnimJoint150ZZZ.children[1] = HAnimJoint159;

HAnimJoint141ZZZ.children[1] = HAnimJoint150;

HAnimJoint30ZZZ.children[3] = HAnimJoint141;

//MC45
let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "l_midcarpal_4_5";
HAnimJoint186.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint186.center = new X3D.SFVec3f([-0.1,0.1,0]);
HAnimJoint186.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint186.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.name = "l_hamate";
HAnimSegment187.DEF = "hanim_l_hamate";
let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new X3D.SFVec3f([-0.1,0.1,0]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "HAnimNewJointShape";
Transform188YYY.child = new X3D.undefined();

Transform188ZZZ.child[0] = Shape189;

HAnimSegment187YYY.children = new X3D.MFNode();

HAnimSegment187ZZZ.children[0] = Transform188;

let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material192;

appearance = Appearance191;

let IndexedLineSet193 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC4";
IndexedLineSet193.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new X3D.MFVec3f([-0.1,0.1,0,-0.1,0.2,0]);
coord = Coordinate194;

geometry = IndexedLineSet193;

HAnimSegment187ZZZ.children[1] = Shape190;

let Shape195 = browser.currentScene.createNode("Shape");
let Appearance196 = browser.currentScene.createNode("Appearance");
let Material197 = browser.currentScene.createNode("Material");
Material197.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material197;

appearance = Appearance196;

let IndexedLineSet198 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet198.DEF = "MC45toCMC5";
IndexedLineSet198.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new X3D.MFVec3f([-0.1,0.1,0,-0.15,0.17,0]);
coord = Coordinate199;

geometry = IndexedLineSet198;

HAnimSegment187ZZZ.children[2] = Shape195;

HAnimJoint186YYY.children = new X3D.MFNode();

HAnimJoint186ZZZ.children[0] = HAnimSegment187;

//ring finger
let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.name = "l_carpometacarpal_4";
HAnimJoint200.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint200.center = new X3D.SFVec3f([-0.1,0.2,0]);
HAnimJoint200.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint200.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.name = "l_metacarpal_4";
HAnimSegment201.DEF = "hanim_l_metacarpal_4";
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new X3D.SFVec3f([-0.1,0.2,0]);
let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "HAnimJointShape";
Transform202YYY.child = new X3D.undefined();

Transform202ZZZ.child[0] = Shape203;

HAnimSegment201YYY.children = new X3D.MFNode();

HAnimSegment201ZZZ.children[0] = Transform202;

let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material206;

appearance = Appearance205;

let IndexedLineSet207 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet207.DEF = "CMC4toMCP4";
IndexedLineSet207.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new X3D.MFVec3f([-0.1,0.2,0,-0.1,0.47,0]);
coord = Coordinate208;

geometry = IndexedLineSet207;

HAnimSegment201ZZZ.children[1] = Shape204;

HAnimJoint200YYY.children = new X3D.MFNode();

HAnimJoint200ZZZ.children[0] = HAnimSegment201;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.name = "l_metacarpophalangeal_4";
HAnimJoint209.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint209.center = new X3D.SFVec3f([-0.1,0.47,0]);
HAnimJoint209.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint209.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.name = "l_carpal_proximal_phalanx_4";
HAnimSegment210.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new X3D.SFVec3f([-0.1,0.47,0]);
let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimJointShape";
Transform211YYY.child = new X3D.undefined();

Transform211ZZZ.child[0] = Shape212;

HAnimSegment210YYY.children = new X3D.MFNode();

HAnimSegment210ZZZ.children[0] = Transform211;

let Shape213 = browser.currentScene.createNode("Shape");
let Appearance214 = browser.currentScene.createNode("Appearance");
let Material215 = browser.currentScene.createNode("Material");
Material215.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material215;

appearance = Appearance214;

let IndexedLineSet216 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet216.DEF = "MCP4toPIP4";
IndexedLineSet216.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new X3D.MFVec3f([-0.1,0.47,0,-0.1,0.7,0]);
coord = Coordinate217;

geometry = IndexedLineSet216;

HAnimSegment210ZZZ.children[1] = Shape213;

HAnimJoint209YYY.children = new X3D.MFNode();

HAnimJoint209ZZZ.children[0] = HAnimSegment210;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint218.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint218.center = new X3D.SFVec3f([-0.1,0.7,0]);
HAnimJoint218.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint218.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_carpal_middle_phalanx_4";
HAnimSegment219.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([-0.1,0.7,0]);
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220YYY.child = new X3D.undefined();

Transform220ZZZ.child[0] = Shape221;

HAnimSegment219YYY.children = new X3D.MFNode();

HAnimSegment219ZZZ.children[0] = Transform220;

let Shape222 = browser.currentScene.createNode("Shape");
let Appearance223 = browser.currentScene.createNode("Appearance");
let Material224 = browser.currentScene.createNode("Material");
Material224.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material224;

appearance = Appearance223;

let IndexedLineSet225 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet225.DEF = "PIP4toDIP4";
IndexedLineSet225.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new X3D.MFVec3f([-0.1,0.7,0,-0.1,0.93,0]);
coord = Coordinate226;

geometry = IndexedLineSet225;

HAnimSegment219ZZZ.children[1] = Shape222;

HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint227.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint227.center = new X3D.SFVec3f([-0.1,0.93,0]);
HAnimJoint227.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint227.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_carpal_distal_phalanx_4";
HAnimSegment228.DEF = "hanim_l_carpal_distal_phalanx_4";
let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new X3D.SFVec3f([-0.1,0.93,0]);
let Shape230 = browser.currentScene.createNode("Shape");
Shape230.USE = "HAnimJointShape";
Transform229YYY.child = new X3D.undefined();

Transform229ZZZ.child[0] = Shape230;

HAnimSegment228YYY.children = new X3D.MFNode();

HAnimSegment228ZZZ.children[0] = Transform229;

let Shape231 = browser.currentScene.createNode("Shape");
let Appearance232 = browser.currentScene.createNode("Appearance");
let Material233 = browser.currentScene.createNode("Material");
Material233.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material233;

appearance = Appearance232;

let IndexedLineSet234 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet234.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet234.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new X3D.MFVec3f([-0.1,0.93,0,-0.1,1,0]);
coord = Coordinate235;

geometry = IndexedLineSet234;

HAnimSegment228ZZZ.children[1] = Shape231;

HAnimJoint227YYY.children = new X3D.MFNode();

HAnimJoint227ZZZ.children[0] = HAnimSegment228;

HAnimJoint218ZZZ.children[1] = HAnimJoint227;

HAnimJoint209ZZZ.children[1] = HAnimJoint218;

HAnimJoint200ZZZ.children[1] = HAnimJoint209;

HAnimJoint186ZZZ.children[1] = HAnimJoint200;

//pinky finger
let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_carpometacarpal_5";
HAnimJoint236.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint236.center = new X3D.SFVec3f([-0.15,0.17,0]);
HAnimJoint236.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint236.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.name = "l_metacarpal_5";
HAnimSegment237.DEF = "hanim_l_metacarpal_5";
let Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new X3D.SFVec3f([-0.15,0.17,0]);
let Shape239 = browser.currentScene.createNode("Shape");
Shape239.USE = "HAnimJointShape";
Transform238YYY.child = new X3D.undefined();

Transform238ZZZ.child[0] = Shape239;

HAnimSegment237YYY.children = new X3D.MFNode();

HAnimSegment237ZZZ.children[0] = Transform238;

let Shape240 = browser.currentScene.createNode("Shape");
let Appearance241 = browser.currentScene.createNode("Appearance");
let Material242 = browser.currentScene.createNode("Material");
Material242.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material242;

appearance = Appearance241;

let IndexedLineSet243 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet243.DEF = "CMC5toMCP5";
IndexedLineSet243.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new X3D.MFVec3f([-0.15,0.17,0,-0.2,0.4,0]);
coord = Coordinate244;

geometry = IndexedLineSet243;

HAnimSegment237ZZZ.children[1] = Shape240;

HAnimJoint236YYY.children = new X3D.MFNode();

HAnimJoint236ZZZ.children[0] = HAnimSegment237;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.name = "l_metacarpophalangeal_5";
HAnimJoint245.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint245.center = new X3D.SFVec3f([-0.2,0.4,0]);
HAnimJoint245.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint245.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment246.name = "l_carpal_proximal_phalanx_5";
HAnimSegment246.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new X3D.SFVec3f([-0.2,0.4,0]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "HAnimJointShape";
Transform247YYY.child = new X3D.undefined();

Transform247ZZZ.child[0] = Shape248;

HAnimSegment246YYY.children = new X3D.MFNode();

HAnimSegment246ZZZ.children[0] = Transform247;

let Shape249 = browser.currentScene.createNode("Shape");
let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Material251.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material251;

appearance = Appearance250;

let IndexedLineSet252 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet252.DEF = "MCP5toPIP5";
IndexedLineSet252.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new X3D.MFVec3f([-0.2,0.4,0,-0.23,0.63,0]);
coord = Coordinate253;

geometry = IndexedLineSet252;

HAnimSegment246ZZZ.children[1] = Shape249;

HAnimJoint245YYY.children = new X3D.MFNode();

HAnimJoint245ZZZ.children[0] = HAnimSegment246;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint254.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint254.center = new X3D.SFVec3f([-0.23,0.63,0]);
HAnimJoint254.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint254.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment255.name = "l_carpal_middle_phalanx_5";
HAnimSegment255.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new X3D.SFVec3f([-0.23,0.63,0]);
let Shape257 = browser.currentScene.createNode("Shape");
Shape257.USE = "HAnimJointShape";
Transform256YYY.child = new X3D.undefined();

Transform256ZZZ.child[0] = Shape257;

HAnimSegment255YYY.children = new X3D.MFNode();

HAnimSegment255ZZZ.children[0] = Transform256;

let Shape258 = browser.currentScene.createNode("Shape");
let Appearance259 = browser.currentScene.createNode("Appearance");
let Material260 = browser.currentScene.createNode("Material");
Material260.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material260;

appearance = Appearance259;

let IndexedLineSet261 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet261.DEF = "PIP5toDIP5";
IndexedLineSet261.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.point = new X3D.MFVec3f([-0.23,0.63,0,-0.25,0.79,0]);
coord = Coordinate262;

geometry = IndexedLineSet261;

HAnimSegment255ZZZ.children[1] = Shape258;

HAnimJoint254YYY.children = new X3D.MFNode();

HAnimJoint254ZZZ.children[0] = HAnimSegment255;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint263.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint263.center = new X3D.SFVec3f([-0.25,0.79,0]);
HAnimJoint263.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint263.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.name = "l_carpal_distal_phalanx_5";
HAnimSegment264.DEF = "hanim_l_carpal_distal_phalanx_5";
let Transform265 = browser.currentScene.createNode("Transform");
Transform265.translation = new X3D.SFVec3f([-0.25,0.79,0]);
let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimJointShape";
Transform265YYY.child = new X3D.undefined();

Transform265ZZZ.child[0] = Shape266;

HAnimSegment264YYY.children = new X3D.MFNode();

HAnimSegment264ZZZ.children[0] = Transform265;

let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
let Material269 = browser.currentScene.createNode("Material");
Material269.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material269;

appearance = Appearance268;

let IndexedLineSet270 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet270.DEF = "fingertip_l_carpal_distal_interphalangeal_5";
IndexedLineSet270.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate271 = browser.currentScene.createNode("Coordinate");
Coordinate271.point = new X3D.MFVec3f([-0.25,0.79,0,-0.26,0.85,0]);
coord = Coordinate271;

geometry = IndexedLineSet270;

HAnimSegment264ZZZ.children[1] = Shape267;

HAnimJoint263YYY.children = new X3D.MFNode();

HAnimJoint263ZZZ.children[0] = HAnimSegment264;

HAnimJoint254ZZZ.children[1] = HAnimJoint263;

HAnimJoint245ZZZ.children[1] = HAnimJoint254;

HAnimJoint236ZZZ.children[1] = HAnimJoint245;

HAnimJoint186ZZZ.children[2] = HAnimJoint236;

HAnimJoint30ZZZ.children[4] = HAnimJoint186;

HAnimJoint29YYY.children = new X3D.MFNode();

HAnimJoint29ZZZ.children[0] = HAnimJoint30;

joints[1] = HAnimJoint29;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[3] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[4] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[5] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[6] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_carpal_interphalangeal_1";
joints[7] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[8] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[9] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[10] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[11] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_carpometacarpal_1";
joints[12] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_carpometacarpal_2";
joints[13] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_carpometacarpal_3";
joints[14] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpometacarpal_4";
joints[15] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_carpometacarpal_5";
joints[16] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_metacarpophalangeal_1";
joints[17] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_metacarpophalangeal_2";
joints[18] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_metacarpophalangeal_3";
joints[19] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metacarpophalangeal_4";
joints[20] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metacarpophalangeal_5";
joints[21] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_midcarpal_1";
joints[22] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_midcarpal_2";
joints[23] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_midcarpal_3";
joints[24] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_midcarpal_4_5";
joints[25] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_radiocarpal";
joints[26] = HAnimJoint296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_capitate";
segments[27] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_carpal";
segments[28] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_carpal_distal_phalanx_1";
segments[29] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_carpal_distal_phalanx_2";
segments[30] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_carpal_distal_phalanx_3";
segments[31] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_carpal_distal_phalanx_4";
segments[32] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_carpal_distal_phalanx_5";
segments[33] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_carpal_middle_phalanx_2";
segments[34] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_carpal_middle_phalanx_3";
segments[35] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_carpal_middle_phalanx_4";
segments[36] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_carpal_middle_phalanx_5";
segments[37] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[38] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[39] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[40] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[41] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[42] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_l_hamate";
segments[43] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_l_metacarpal_1";
segments[44] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_l_metacarpal_2";
segments[45] = HAnimSegment315;

let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_l_metacarpal_3";
segments[46] = HAnimSegment316;

let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_l_metacarpal_4";
segments[47] = HAnimSegment317;

let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_l_metacarpal_5";
segments[48] = HAnimSegment318;

let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_l_trapezium";
segments[49] = HAnimSegment319;

let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_l_trapezoid";
segments[50] = HAnimSegment320;

browser.currentScene.children[1] = HAnimHumanoid26;

}
main ();

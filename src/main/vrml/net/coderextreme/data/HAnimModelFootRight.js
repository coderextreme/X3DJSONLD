const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimModelFootRight.x3d");
scene.addMetaData("description", "Right foot, using high-fidelity definitions for HAnim version 2.0");
scene.addMetaData("creator", "Kwan-Hee YOO, Don Brutzman and Joe Williams");
scene.addMetaData("created", "26 January 2015");
scene.addMetaData("modified", "23 December 2021");
scene.addMetaData("warning", "not yet to scale");
scene.addMetaData("TODO", "Update all values to match HAnim2 A.7 Level of articulation four LOA-4");
scene.addMetaData("TODO", "Add links to figures");
scene.addMetaData("TODO", "Add Viewpoints to enable inspection");
scene.addMetaData("info", "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
scene.addMetaData("warning", "TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
scene.addMetaData("reference", "https://www.web3d.org/working-groups/humanoid-animation-HAnim");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
scene.addMetaData("reference", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
scene.addMetaData("subject", "X3D HAnim humanoid animation");
scene.addMetaData("TODO", "Integrate and confirm Segment/Joint names, Viewpoints.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo26 = browser.currentScene.createNode("WorldInfo");
WorldInfo26.title = "HAnimModelFootRight.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo26;

let HAnimHumanoid27 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid27.name = "Foot_Right";
HAnimHumanoid27.DEF = "hanim_Foot_Right";
HAnimHumanoid27.loa = 4;
HAnimHumanoid27.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet28 = browser.currentScene.createNode("MetadataSet");
MetadataSet28.name = "HAnimHumanoid.info";
MetadataSet28.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString29 = browser.currentScene.createNode("MetadataString");
MetadataString29.name = "authorName";
MetadataString29.value = new X3D.MFString([new X3D.SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")]);
MetadataSet28.value = new X3D.MFNode();

MetadataSet28XXX.value[0] = MetadataString29;

HAnimHumanoid27.metadata = new X3D.SFNode();

HAnimHumanoid27XXX.metadata[0] = MetadataSet28;

let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.DEF = "hanim_humanoid_root";
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "r_talocrural";
HAnimJoint31.DEF = "hanim_r_talocrural";
HAnimJoint31.description = "connection joint of foot to leg above";
HAnimJoint31.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint31.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment32 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment32.name = "r_talus";
HAnimSegment32.DEF = "hanim_r_talus";
let Transform33 = browser.currentScene.createNode("Transform");
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "HAnimJointShape";
let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 0.025;
geometry = Sphere35;

let Appearance36 = browser.currentScene.createNode("Appearance");
Appearance36.DEF = "HAnimJointAppearance";
let Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material37;

appearance = Appearance36;

Transform33YYY.child = new X3D.undefined();

Transform33ZZZ.child[0] = Shape34;

HAnimSegment32YYY.children = new X3D.MFNode();

HAnimSegment32ZZZ.children[0] = Transform33;

let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material40;

appearance = Appearance39;

let IndexedLineSet41 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet41.DEF = "TCtoTCN";
IndexedLineSet41.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.point = new X3D.MFVec3f([0,0,0,0,-0.3,0]);
coord = Coordinate42;

geometry = IndexedLineSet41;

HAnimSegment32ZZZ.children[1] = Shape38;

let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material45;

appearance = Appearance44;

let IndexedLineSet46 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet46.DEF = "TCtoCC";
IndexedLineSet46.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new X3D.MFVec3f([0,0,0,-0.2,0.3,0]);
coord = Coordinate47;

geometry = IndexedLineSet46;

HAnimSegment32ZZZ.children[2] = Shape43;

HAnimJoint31YYY.children = new X3D.MFNode();

HAnimJoint31ZZZ.children[0] = HAnimSegment32;

//TCN
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "r_talocalcaneonavicular";
HAnimJoint48.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint48.center = new X3D.SFVec3f([0,-0.3,0]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment49 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment49.name = "r_navicular";
HAnimSegment49.DEF = "hanim_r_navicular";
let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new X3D.SFVec3f([0,-0.3,0]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "HAnimJointShape";
Transform50YYY.child = new X3D.undefined();

Transform50ZZZ.child[0] = Shape51;

HAnimSegment49YYY.children = new X3D.MFNode();

HAnimSegment49ZZZ.children[0] = Transform50;

let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material54;

appearance = Appearance53;

let IndexedLineSet55 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet55.DEF = "TCNtoCN1";
IndexedLineSet55.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new X3D.MFVec3f([0,-0.3,0,0.1,-0.45,0]);
coord = Coordinate56;

geometry = IndexedLineSet55;

HAnimSegment49ZZZ.children[1] = Shape52;

let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material59;

appearance = Appearance58;

let IndexedLineSet60 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet60.DEF = "TCNtoCN2";
IndexedLineSet60.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new X3D.MFVec3f([0,-0.3,0,0,-0.45,0]);
coord = Coordinate61;

geometry = IndexedLineSet60;

HAnimSegment49ZZZ.children[2] = Shape57;

let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material64;

appearance = Appearance63;

let IndexedLineSet65 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet65.DEF = "TCNtoCN3";
IndexedLineSet65.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate66 = browser.currentScene.createNode("Coordinate");
Coordinate66.point = new X3D.MFVec3f([0,-0.3,0,-0.1,-0.4,0]);
coord = Coordinate66;

geometry = IndexedLineSet65;

HAnimSegment49ZZZ.children[3] = Shape62;

HAnimJoint48YYY.children = new X3D.MFNode();

HAnimJoint48ZZZ.children[0] = HAnimSegment49;

//CN1
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_cuneonavicular_1";
HAnimJoint67.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint67.center = new X3D.SFVec3f([0.1,-0.45,0]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "r_cuneiform_1";
HAnimSegment68.DEF = "hanim_r_cuneiform_1";
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new X3D.SFVec3f([0.1,-0.45,0]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "HAnimJointShape";
Transform69YYY.child = new X3D.undefined();

Transform69ZZZ.child[0] = Shape70;

HAnimSegment68YYY.children = new X3D.MFNode();

HAnimSegment68ZZZ.children[0] = Transform69;

let Shape71 = browser.currentScene.createNode("Shape");
let Appearance72 = browser.currentScene.createNode("Appearance");
let Material73 = browser.currentScene.createNode("Material");
Material73.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material73;

appearance = Appearance72;

let IndexedLineSet74 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet74.DEF = "CN1toTMT1";
IndexedLineSet74.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new X3D.MFVec3f([0.1,-0.45,0,0.1,-0.6,0]);
coord = Coordinate75;

geometry = IndexedLineSet74;

HAnimSegment68ZZZ.children[1] = Shape71;

HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimSegment68;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "r_tarsometatarsal_1";
HAnimJoint76.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint76.center = new X3D.SFVec3f([0.1,-0.6,0]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.name = "r_metatarsal_1";
HAnimSegment77.DEF = "hanim_r_metatarsal_1";
let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new X3D.SFVec3f([0.1,-0.6,0]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "HAnimJointShape";
Transform78YYY.child = new X3D.undefined();

Transform78ZZZ.child[0] = Shape79;

HAnimSegment77YYY.children = new X3D.MFNode();

HAnimSegment77ZZZ.children[0] = Transform78;

let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material82;

appearance = Appearance81;

let IndexedLineSet83 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet83.DEF = "TMT1toMTP1";
IndexedLineSet83.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new X3D.MFVec3f([0.1,-0.6,0,0.1,-0.9,0]);
coord = Coordinate84;

geometry = IndexedLineSet83;

HAnimSegment77ZZZ.children[1] = Shape80;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimSegment77;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_metatarsophalangeal_1";
HAnimJoint85.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint85.center = new X3D.SFVec3f([0.1,-0.9,0]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment86 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment86.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment86.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new X3D.SFVec3f([0.1,-0.9,0]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "HAnimJointShape";
Transform87YYY.child = new X3D.undefined();

Transform87ZZZ.child[0] = Shape88;

HAnimSegment86YYY.children = new X3D.MFNode();

HAnimSegment86ZZZ.children[0] = Transform87;

let Shape89 = browser.currentScene.createNode("Shape");
let Appearance90 = browser.currentScene.createNode("Appearance");
let Material91 = browser.currentScene.createNode("Material");
Material91.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material91;

appearance = Appearance90;

let IndexedLineSet92 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet92.DEF = "MTP1toIP1";
IndexedLineSet92.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new X3D.MFVec3f([0.1,-0.9,0,0.1,-1.05,0]);
coord = Coordinate93;

geometry = IndexedLineSet92;

HAnimSegment86ZZZ.children[1] = Shape89;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimSegment86;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "r_tarsal_interphalangeal_1";
HAnimJoint94.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint94.center = new X3D.SFVec3f([0.1,-1.05,0]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.name = "r_tarsal_distal_phalanx_1";
HAnimSegment95.DEF = "hanim_r_tarsal_distal_phalanx_1";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.translation = new X3D.SFVec3f([0.1,-1.05,0]);
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "HAnimJointShape";
Transform96YYY.child = new X3D.undefined();

Transform96ZZZ.child[0] = Shape97;

HAnimSegment95YYY.children = new X3D.MFNode();

HAnimSegment95ZZZ.children[0] = Transform96;

let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material100;

appearance = Appearance99;

let IndexedLineSet101 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet101.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet101.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.point = new X3D.MFVec3f([0.1,-1.05,0,0.1,-1.1,0]);
coord = Coordinate102;

geometry = IndexedLineSet101;

HAnimSegment95ZZZ.children[1] = Shape98;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimSegment95;

HAnimJoint85ZZZ.children[1] = HAnimJoint94;

HAnimJoint76ZZZ.children[1] = HAnimJoint85;

HAnimJoint67ZZZ.children[1] = HAnimJoint76;

HAnimJoint48ZZZ.children[1] = HAnimJoint67;

//CN2
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_cuneonavicular_2";
HAnimJoint103.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint103.center = new X3D.SFVec3f([0,-0.45,0]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment104.name = "r_cuneiform_2";
HAnimSegment104.DEF = "hanim_r_cuneiform_2";
let Transform105 = browser.currentScene.createNode("Transform");
Transform105.translation = new X3D.SFVec3f([0,-0.45,0]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimJointShape";
Transform105YYY.child = new X3D.undefined();

Transform105ZZZ.child[0] = Shape106;

HAnimSegment104YYY.children = new X3D.MFNode();

HAnimSegment104ZZZ.children[0] = Transform105;

let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material109;

appearance = Appearance108;

let IndexedLineSet110 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet110.DEF = "CN2toTMT2";
IndexedLineSet110.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.point = new X3D.MFVec3f([0,-0.45,0,-0.05,-0.6,0]);
coord = Coordinate111;

geometry = IndexedLineSet110;

HAnimSegment104ZZZ.children[1] = Shape107;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimSegment104;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_tarsometatarsal_2";
HAnimJoint112.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint112.center = new X3D.SFVec3f([-0.05,-0.6,0]);
HAnimJoint112.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint112.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.name = "r_metatarsal_2";
HAnimSegment113.DEF = "hanim_r_metatarsal_2";
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new X3D.SFVec3f([-0.05,-0.6,0]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "HAnimJointShape";
Transform114YYY.child = new X3D.undefined();

Transform114ZZZ.child[0] = Shape115;

HAnimSegment113YYY.children = new X3D.MFNode();

HAnimSegment113ZZZ.children[0] = Transform114;

let Shape116 = browser.currentScene.createNode("Shape");
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material118;

appearance = Appearance117;

let IndexedLineSet119 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet119.DEF = "TMT2toMTP2";
IndexedLineSet119.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new X3D.MFVec3f([-0.05,-0.6,0,-0.05,-0.9,0]);
coord = Coordinate120;

geometry = IndexedLineSet119;

HAnimSegment113ZZZ.children[1] = Shape116;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimSegment113;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "r_metatarsophalangeal_2";
HAnimJoint121.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint121.center = new X3D.SFVec3f([-0.05,-0.9,0]);
HAnimJoint121.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint121.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment122.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new X3D.SFVec3f([-0.05,-0.9,0]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimJointShape";
Transform123YYY.child = new X3D.undefined();

Transform123ZZZ.child[0] = Shape124;

HAnimSegment122YYY.children = new X3D.MFNode();

HAnimSegment122ZZZ.children[0] = Transform123;

let Shape125 = browser.currentScene.createNode("Shape");
let Appearance126 = browser.currentScene.createNode("Appearance");
let Material127 = browser.currentScene.createNode("Material");
Material127.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material127;

appearance = Appearance126;

let IndexedLineSet128 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet128.DEF = "MTP2toPIP2";
IndexedLineSet128.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new X3D.MFVec3f([-0.05,-0.9,0,-0.05,-1.05,0]);
coord = Coordinate129;

geometry = IndexedLineSet128;

HAnimSegment122ZZZ.children[1] = Shape125;

HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimSegment122;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint130.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint130.center = new X3D.SFVec3f([-0.05,-1.05,0]);
HAnimJoint130.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint130.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment131.name = "r_tarsal_middle_phalanx_2";
HAnimSegment131.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform132 = browser.currentScene.createNode("Transform");
Transform132.translation = new X3D.SFVec3f([-0.05,-1.05,0]);
let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimJointShape";
Transform132YYY.child = new X3D.undefined();

Transform132ZZZ.child[0] = Shape133;

HAnimSegment131YYY.children = new X3D.MFNode();

HAnimSegment131ZZZ.children[0] = Transform132;

let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material136;

appearance = Appearance135;

let IndexedLineSet137 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet137.DEF = "PIP2toDIP2";
IndexedLineSet137.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.point = new X3D.MFVec3f([-0.05,-1.05,0,-0.05,-1.12,0]);
coord = Coordinate138;

geometry = IndexedLineSet137;

HAnimSegment131ZZZ.children[1] = Shape134;

HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimSegment131;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint139.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint139.center = new X3D.SFVec3f([-0.05,-1.12,0]);
HAnimJoint139.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint139.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.name = "r_tarsal_distal_phalanx_2";
HAnimSegment140.DEF = "hanim_r_tarsal_distal_phalanx_2";
let Transform141 = browser.currentScene.createNode("Transform");
Transform141.translation = new X3D.SFVec3f([-0.05,-1.12,0]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimJointShape";
Transform141YYY.child = new X3D.undefined();

Transform141ZZZ.child[0] = Shape142;

HAnimSegment140YYY.children = new X3D.MFNode();

HAnimSegment140ZZZ.children[0] = Transform141;

let Shape143 = browser.currentScene.createNode("Shape");
let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material145;

appearance = Appearance144;

let IndexedLineSet146 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet146.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet146.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate147 = browser.currentScene.createNode("Coordinate");
Coordinate147.point = new X3D.MFVec3f([-0.05,-1.12,0,-0.05,-1.16,0]);
coord = Coordinate147;

geometry = IndexedLineSet146;

HAnimSegment140ZZZ.children[1] = Shape143;

HAnimJoint139YYY.children = new X3D.MFNode();

HAnimJoint139ZZZ.children[0] = HAnimSegment140;

HAnimJoint130ZZZ.children[1] = HAnimJoint139;

HAnimJoint121ZZZ.children[1] = HAnimJoint130;

HAnimJoint112ZZZ.children[1] = HAnimJoint121;

HAnimJoint103ZZZ.children[1] = HAnimJoint112;

HAnimJoint48ZZZ.children[2] = HAnimJoint103;

//CN3
let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "r_cuneonavicular_3";
HAnimJoint148.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint148.center = new X3D.SFVec3f([-0.1,-0.4,0]);
HAnimJoint148.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint148.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.name = "r_cuneiform_3";
HAnimSegment149.DEF = "hanim_r_cuneiform_3";
let Transform150 = browser.currentScene.createNode("Transform");
Transform150.translation = new X3D.SFVec3f([-0.1,-0.4,0]);
let Shape151 = browser.currentScene.createNode("Shape");
Shape151.USE = "HAnimJointShape";
Transform150YYY.child = new X3D.undefined();

Transform150ZZZ.child[0] = Shape151;

HAnimSegment149YYY.children = new X3D.MFNode();

HAnimSegment149ZZZ.children[0] = Transform150;

let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Material154.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material154;

appearance = Appearance153;

let IndexedLineSet155 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet155.DEF = "CN3toTMT3";
IndexedLineSet155.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.point = new X3D.MFVec3f([-0.1,-0.4,0,-0.15,-0.6,0]);
coord = Coordinate156;

geometry = IndexedLineSet155;

HAnimSegment149ZZZ.children[1] = Shape152;

HAnimJoint148YYY.children = new X3D.MFNode();

HAnimJoint148ZZZ.children[0] = HAnimSegment149;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "r_tarsometatarsal_3";
HAnimJoint157.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint157.center = new X3D.SFVec3f([-0.15,-0.6,0]);
HAnimJoint157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint157.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.name = "r_metatarsal_3";
HAnimSegment158.DEF = "hanim_r_metatarsal_3";
let Transform159 = browser.currentScene.createNode("Transform");
Transform159.translation = new X3D.SFVec3f([-0.15,-0.6,0]);
let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "HAnimJointShape";
Transform159YYY.child = new X3D.undefined();

Transform159ZZZ.child[0] = Shape160;

HAnimSegment158YYY.children = new X3D.MFNode();

HAnimSegment158ZZZ.children[0] = Transform159;

let Shape161 = browser.currentScene.createNode("Shape");
let Appearance162 = browser.currentScene.createNode("Appearance");
let Material163 = browser.currentScene.createNode("Material");
Material163.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material163;

appearance = Appearance162;

let IndexedLineSet164 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet164.DEF = "TMT3toMTP3";
IndexedLineSet164.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new X3D.MFVec3f([-0.15,-0.6,0,-0.15,-0.9,0]);
coord = Coordinate165;

geometry = IndexedLineSet164;

HAnimSegment158ZZZ.children[1] = Shape161;

HAnimJoint157YYY.children = new X3D.MFNode();

HAnimJoint157ZZZ.children[0] = HAnimSegment158;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "r_metatarsophalangeal_3";
HAnimJoint166.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint166.center = new X3D.SFVec3f([-0.15,-0.9,0]);
HAnimJoint166.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint166.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment167.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new X3D.SFVec3f([-0.15,-0.9,0]);
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168YYY.child = new X3D.undefined();

Transform168ZZZ.child[0] = Shape169;

HAnimSegment167YYY.children = new X3D.MFNode();

HAnimSegment167ZZZ.children[0] = Transform168;

let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Material172.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material172;

appearance = Appearance171;

let IndexedLineSet173 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet173.DEF = "MTP3toPIP3";
IndexedLineSet173.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new X3D.MFVec3f([-0.15,-0.9,0,-0.15,-1.05,0]);
coord = Coordinate174;

geometry = IndexedLineSet173;

HAnimSegment167ZZZ.children[1] = Shape170;

HAnimJoint166YYY.children = new X3D.MFNode();

HAnimJoint166ZZZ.children[0] = HAnimSegment167;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint175.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint175.center = new X3D.SFVec3f([-0.15,-1.05,0]);
HAnimJoint175.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint175.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.name = "r_tarsal_middle_phalanx_3";
HAnimSegment176.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform177 = browser.currentScene.createNode("Transform");
Transform177.translation = new X3D.SFVec3f([-0.15,-1.05,0]);
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177YYY.child = new X3D.undefined();

Transform177ZZZ.child[0] = Shape178;

HAnimSegment176YYY.children = new X3D.MFNode();

HAnimSegment176ZZZ.children[0] = Transform177;

let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material181;

appearance = Appearance180;

let IndexedLineSet182 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet182.DEF = "PIP3toDIP3";
IndexedLineSet182.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new X3D.MFVec3f([-0.15,-1.05,0,-0.15,-1.13,0]);
coord = Coordinate183;

geometry = IndexedLineSet182;

HAnimSegment176ZZZ.children[1] = Shape179;

HAnimJoint175YYY.children = new X3D.MFNode();

HAnimJoint175ZZZ.children[0] = HAnimSegment176;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint184.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint184.center = new X3D.SFVec3f([-0.15,-1.13,0]);
HAnimJoint184.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint184.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.name = "r_tarsal_distal_phalanx_3";
HAnimSegment185.DEF = "hanim_r_tarsal_distal_phalanx_3";
let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new X3D.SFVec3f([-0.15,-1.13,0]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186YYY.child = new X3D.undefined();

Transform186ZZZ.child[0] = Shape187;

HAnimSegment185YYY.children = new X3D.MFNode();

HAnimSegment185ZZZ.children[0] = Transform186;

let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material190;

appearance = Appearance189;

let IndexedLineSet191 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet191.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet191.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new X3D.MFVec3f([-0.15,-1.13,0,-0.15,-1.16,0]);
coord = Coordinate192;

geometry = IndexedLineSet191;

HAnimSegment185ZZZ.children[1] = Shape188;

HAnimJoint184YYY.children = new X3D.MFNode();

HAnimJoint184ZZZ.children[0] = HAnimSegment185;

HAnimJoint175ZZZ.children[1] = HAnimJoint184;

HAnimJoint166ZZZ.children[1] = HAnimJoint175;

HAnimJoint157ZZZ.children[1] = HAnimJoint166;

HAnimJoint148ZZZ.children[1] = HAnimJoint157;

HAnimJoint48ZZZ.children[3] = HAnimJoint148;

HAnimJoint31ZZZ.children[1] = HAnimJoint48;

//CC
let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.name = "r_calcaneocuboid";
HAnimJoint193.DEF = "hanim_r_calcaneocuboid";
HAnimJoint193.center = new X3D.SFVec3f([-0.2,0.3,0]);
HAnimJoint193.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint193.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.name = "r_calcaneus";
HAnimSegment194.DEF = "hanim_r_calcaneus";
let Transform195 = browser.currentScene.createNode("Transform");
Transform195.translation = new X3D.SFVec3f([-0.2,0.3,0]);
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195YYY.child = new X3D.undefined();

Transform195ZZZ.child[0] = Shape196;

HAnimSegment194YYY.children = new X3D.MFNode();

HAnimSegment194ZZZ.children[0] = Transform195;

let Shape197 = browser.currentScene.createNode("Shape");
let Appearance198 = browser.currentScene.createNode("Appearance");
let Material199 = browser.currentScene.createNode("Material");
Material199.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material199;

appearance = Appearance198;

let IndexedLineSet200 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet200.DEF = "CCtoTT";
IndexedLineSet200.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new X3D.MFVec3f([-0.2,0.3,0,-0.21,-0.3,0]);
coord = Coordinate201;

geometry = IndexedLineSet200;

HAnimSegment194ZZZ.children[1] = Shape197;

HAnimJoint193YYY.children = new X3D.MFNode();

HAnimJoint193ZZZ.children[0] = HAnimSegment194;

//TT
let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.name = "r_transversetarsal";
HAnimJoint202.DEF = "hanim_r_transversetarsal";
HAnimJoint202.center = new X3D.SFVec3f([-0.21,-0.3,0]);
HAnimJoint202.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint202.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.name = "r_cuboid";
HAnimSegment203.DEF = "hanim_r_cuboid";
let Transform204 = browser.currentScene.createNode("Transform");
Transform204.translation = new X3D.SFVec3f([-0.21,-0.3,0]);
let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "HAnimJointShape";
Transform204YYY.child = new X3D.undefined();

Transform204ZZZ.child[0] = Shape205;

HAnimSegment203YYY.children = new X3D.MFNode();

HAnimSegment203ZZZ.children[0] = Transform204;

let Shape206 = browser.currentScene.createNode("Shape");
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Material208.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material208;

appearance = Appearance207;

let IndexedLineSet209 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet209.DEF = "TTtoTMT4";
IndexedLineSet209.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate210 = browser.currentScene.createNode("Coordinate");
Coordinate210.point = new X3D.MFVec3f([-0.21,-0.3,0,-0.25,-0.58,0]);
coord = Coordinate210;

geometry = IndexedLineSet209;

HAnimSegment203ZZZ.children[1] = Shape206;

let Shape211 = browser.currentScene.createNode("Shape");
let Appearance212 = browser.currentScene.createNode("Appearance");
let Material213 = browser.currentScene.createNode("Material");
Material213.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material213;

appearance = Appearance212;

let IndexedLineSet214 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet214.DEF = "TTtoTMT5";
IndexedLineSet214.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new X3D.MFVec3f([-0.21,-0.3,0,-0.33,-0.52,0]);
coord = Coordinate215;

geometry = IndexedLineSet214;

HAnimSegment203ZZZ.children[2] = Shape211;

HAnimJoint202YYY.children = new X3D.MFNode();

HAnimJoint202ZZZ.children[0] = HAnimSegment203;

//TMT4
let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.name = "r_tarsometatarsal_4";
HAnimJoint216.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint216.center = new X3D.SFVec3f([-0.25,-0.58,0]);
HAnimJoint216.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint216.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.name = "r_metatarsal_4";
HAnimSegment217.DEF = "hanim_r_metatarsal_4";
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new X3D.SFVec3f([-0.25,-0.58,0]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "HAnimJointShape";
Transform218YYY.child = new X3D.undefined();

Transform218ZZZ.child[0] = Shape219;

HAnimSegment217YYY.children = new X3D.MFNode();

HAnimSegment217ZZZ.children[0] = Transform218;

let Shape220 = browser.currentScene.createNode("Shape");
let Appearance221 = browser.currentScene.createNode("Appearance");
let Material222 = browser.currentScene.createNode("Material");
Material222.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material222;

appearance = Appearance221;

let IndexedLineSet223 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet223.DEF = "TMT4toMTP4";
IndexedLineSet223.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new X3D.MFVec3f([-0.25,-0.58,0,-0.25,-0.87,0]);
coord = Coordinate224;

geometry = IndexedLineSet223;

HAnimSegment217ZZZ.children[1] = Shape220;

HAnimJoint216YYY.children = new X3D.MFNode();

HAnimJoint216ZZZ.children[0] = HAnimSegment217;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.name = "r_metatarsophalangeal_4";
HAnimJoint225.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint225.center = new X3D.SFVec3f([-0.25,-0.87,0]);
HAnimJoint225.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint225.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment226.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform227 = browser.currentScene.createNode("Transform");
Transform227.translation = new X3D.SFVec3f([-0.25,-0.87,0]);
let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimJointShape";
Transform227YYY.child = new X3D.undefined();

Transform227ZZZ.child[0] = Shape228;

HAnimSegment226YYY.children = new X3D.MFNode();

HAnimSegment226ZZZ.children[0] = Transform227;

let Shape229 = browser.currentScene.createNode("Shape");
let Appearance230 = browser.currentScene.createNode("Appearance");
let Material231 = browser.currentScene.createNode("Material");
Material231.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material231;

appearance = Appearance230;

let IndexedLineSet232 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet232.DEF = "MTP4toPIP4";
IndexedLineSet232.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new X3D.MFVec3f([-0.25,-0.87,0,-0.25,-1,0]);
coord = Coordinate233;

geometry = IndexedLineSet232;

HAnimSegment226ZZZ.children[1] = Shape229;

HAnimJoint225YYY.children = new X3D.MFNode();

HAnimJoint225ZZZ.children[0] = HAnimSegment226;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint234.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint234.center = new X3D.SFVec3f([-0.25,-1,0]);
HAnimJoint234.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint234.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.name = "r_tarsal_middle_phalanx_4";
HAnimSegment235.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new X3D.SFVec3f([-0.25,-1,0]);
let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236YYY.child = new X3D.undefined();

Transform236ZZZ.child[0] = Shape237;

HAnimSegment235YYY.children = new X3D.MFNode();

HAnimSegment235ZZZ.children[0] = Transform236;

let Shape238 = browser.currentScene.createNode("Shape");
let Appearance239 = browser.currentScene.createNode("Appearance");
let Material240 = browser.currentScene.createNode("Material");
Material240.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material240;

appearance = Appearance239;

let IndexedLineSet241 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet241.DEF = "PIP4toDIP4";
IndexedLineSet241.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate242 = browser.currentScene.createNode("Coordinate");
Coordinate242.point = new X3D.MFVec3f([-0.25,-1,0,-0.25,-1.1,0]);
coord = Coordinate242;

geometry = IndexedLineSet241;

HAnimSegment235ZZZ.children[1] = Shape238;

HAnimJoint234YYY.children = new X3D.MFNode();

HAnimJoint234ZZZ.children[0] = HAnimSegment235;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint243.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint243.center = new X3D.SFVec3f([-0.25,-1.1,0]);
HAnimJoint243.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint243.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.name = "r_tarsal_distal_phalanx_4";
HAnimSegment244.DEF = "hanim_r_tarsal_distal_phalanx_4";
let Transform245 = browser.currentScene.createNode("Transform");
Transform245.translation = new X3D.SFVec3f([-0.25,-1.1,0]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245YYY.child = new X3D.undefined();

Transform245ZZZ.child[0] = Shape246;

HAnimSegment244YYY.children = new X3D.MFNode();

HAnimSegment244ZZZ.children[0] = Transform245;

let Shape247 = browser.currentScene.createNode("Shape");
let Appearance248 = browser.currentScene.createNode("Appearance");
let Material249 = browser.currentScene.createNode("Material");
Material249.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material249;

appearance = Appearance248;

let IndexedLineSet250 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet250.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet250.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate251 = browser.currentScene.createNode("Coordinate");
Coordinate251.point = new X3D.MFVec3f([-0.25,-1.1,0,-0.25,-1.15,0]);
coord = Coordinate251;

geometry = IndexedLineSet250;

HAnimSegment244ZZZ.children[1] = Shape247;

HAnimJoint243YYY.children = new X3D.MFNode();

HAnimJoint243ZZZ.children[0] = HAnimSegment244;

HAnimJoint234ZZZ.children[1] = HAnimJoint243;

HAnimJoint225ZZZ.children[1] = HAnimJoint234;

HAnimJoint216ZZZ.children[1] = HAnimJoint225;

HAnimJoint202ZZZ.children[1] = HAnimJoint216;

//TMT5
let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.name = "r_tarsometatarsal_5";
HAnimJoint252.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint252.center = new X3D.SFVec3f([-0.33,-0.52,0]);
HAnimJoint252.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint252.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment253.name = "r_metatarsal_5";
HAnimSegment253.DEF = "hanim_r_metatarsal_5";
let Transform254 = browser.currentScene.createNode("Transform");
Transform254.translation = new X3D.SFVec3f([-0.33,-0.52,0]);
let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "HAnimJointShape";
Transform254YYY.child = new X3D.undefined();

Transform254ZZZ.child[0] = Shape255;

HAnimSegment253YYY.children = new X3D.MFNode();

HAnimSegment253ZZZ.children[0] = Transform254;

let Shape256 = browser.currentScene.createNode("Shape");
let Appearance257 = browser.currentScene.createNode("Appearance");
let Material258 = browser.currentScene.createNode("Material");
Material258.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material258;

appearance = Appearance257;

let IndexedLineSet259 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet259.DEF = "TMT5toMTP5";
IndexedLineSet259.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new X3D.MFVec3f([-0.33,-0.52,0,-0.34,-0.8,0]);
coord = Coordinate260;

geometry = IndexedLineSet259;

HAnimSegment253ZZZ.children[1] = Shape256;

HAnimJoint252YYY.children = new X3D.MFNode();

HAnimJoint252ZZZ.children[0] = HAnimSegment253;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "r_metatarsophalangeal_5";
HAnimJoint261.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint261.center = new X3D.SFVec3f([-0.34,-0.8,0]);
HAnimJoint261.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint261.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment262.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new X3D.SFVec3f([-0.34,-0.8,0]);
let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "HAnimJointShape";
Transform263YYY.child = new X3D.undefined();

Transform263ZZZ.child[0] = Shape264;

HAnimSegment262YYY.children = new X3D.MFNode();

HAnimSegment262ZZZ.children[0] = Transform263;

let Shape265 = browser.currentScene.createNode("Shape");
let Appearance266 = browser.currentScene.createNode("Appearance");
let Material267 = browser.currentScene.createNode("Material");
Material267.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material267;

appearance = Appearance266;

let IndexedLineSet268 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet268.DEF = "MTP5toPIP5";
IndexedLineSet268.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate269 = browser.currentScene.createNode("Coordinate");
Coordinate269.point = new X3D.MFVec3f([-0.34,-0.8,0,-0.34,-0.95,0]);
coord = Coordinate269;

geometry = IndexedLineSet268;

HAnimSegment262ZZZ.children[1] = Shape265;

HAnimJoint261YYY.children = new X3D.MFNode();

HAnimJoint261ZZZ.children[0] = HAnimSegment262;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint270.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint270.center = new X3D.SFVec3f([-0.34,-0.95,0]);
HAnimJoint270.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint270.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.name = "r_tarsal_middle_phalanx_5";
HAnimSegment271.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new X3D.SFVec3f([-0.34,-0.95,0]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272YYY.child = new X3D.undefined();

Transform272ZZZ.child[0] = Shape273;

HAnimSegment271YYY.children = new X3D.MFNode();

HAnimSegment271ZZZ.children[0] = Transform272;

let Shape274 = browser.currentScene.createNode("Shape");
let Appearance275 = browser.currentScene.createNode("Appearance");
let Material276 = browser.currentScene.createNode("Material");
Material276.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material276;

appearance = Appearance275;

let IndexedLineSet277 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet277.DEF = "PIP5toDIP5";
IndexedLineSet277.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate278 = browser.currentScene.createNode("Coordinate");
Coordinate278.point = new X3D.MFVec3f([-0.34,-0.95,0,-0.34,-1.05,0]);
coord = Coordinate278;

geometry = IndexedLineSet277;

HAnimSegment271ZZZ.children[1] = Shape274;

HAnimJoint270YYY.children = new X3D.MFNode();

HAnimJoint270ZZZ.children[0] = HAnimSegment271;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint279.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint279.center = new X3D.SFVec3f([-0.34,-1.05,0]);
HAnimJoint279.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint279.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.name = "r_tarsal_distal_phalanx_5";
HAnimSegment280.DEF = "hanim_r_tarsal_distal_phalanx_5";
let Transform281 = browser.currentScene.createNode("Transform");
Transform281.translation = new X3D.SFVec3f([-0.34,-1.05,0]);
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281YYY.child = new X3D.undefined();

Transform281ZZZ.child[0] = Shape282;

HAnimSegment280YYY.children = new X3D.MFNode();

HAnimSegment280ZZZ.children[0] = Transform281;

let Shape283 = browser.currentScene.createNode("Shape");
let Appearance284 = browser.currentScene.createNode("Appearance");
let Material285 = browser.currentScene.createNode("Material");
Material285.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material285;

appearance = Appearance284;

let IndexedLineSet286 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet286.DEF = "tiptoe_r_tarsal_distal_interphalangeal_5";
IndexedLineSet286.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate287 = browser.currentScene.createNode("Coordinate");
Coordinate287.point = new X3D.MFVec3f([-0.34,-1.05,0,-0.34,-1.08,0]);
coord = Coordinate287;

geometry = IndexedLineSet286;

HAnimSegment280ZZZ.children[1] = Shape283;

HAnimJoint279YYY.children = new X3D.MFNode();

HAnimJoint279ZZZ.children[0] = HAnimSegment280;

HAnimJoint270ZZZ.children[1] = HAnimJoint279;

HAnimJoint261ZZZ.children[1] = HAnimJoint270;

HAnimJoint252ZZZ.children[1] = HAnimJoint261;

HAnimJoint202ZZZ.children[2] = HAnimJoint252;

HAnimJoint193ZZZ.children[1] = HAnimJoint202;

HAnimJoint31ZZZ.children[2] = HAnimJoint193;

HAnimJoint30YYY.children = new X3D.MFNode();

HAnimJoint30ZZZ.children[0] = HAnimJoint31;

joints[1] = HAnimJoint30;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_calcaneocuboid";
joints[3] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_cuneonavicular_1";
joints[4] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_cuneonavicular_2";
joints[5] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_r_cuneonavicular_3";
joints[6] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_r_metatarsophalangeal_1";
joints[7] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_r_metatarsophalangeal_2";
joints[8] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_r_metatarsophalangeal_3";
joints[9] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_metatarsophalangeal_4";
joints[10] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_metatarsophalangeal_5";
joints[11] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_talocalcaneonavicular";
joints[12] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_talocrural";
joints[13] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[14] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_tarsal_distal_interphalangeal_3";
joints[15] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_tarsal_distal_interphalangeal_4";
joints[16] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_tarsal_distal_interphalangeal_5";
joints[17] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_tarsal_interphalangeal_1";
joints[18] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
joints[19] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
joints[20] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
joints[21] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
joints[22] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_tarsometatarsal_1";
joints[23] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_tarsometatarsal_2";
joints[24] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_tarsometatarsal_3";
joints[25] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_tarsometatarsal_4";
joints[26] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_tarsometatarsal_5";
joints[27] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_transversetarsal";
joints[28] = HAnimJoint314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_r_calcaneus";
segments[29] = HAnimSegment315;

let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_r_cuboid";
segments[30] = HAnimSegment316;

let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_r_cuneiform_1";
segments[31] = HAnimSegment317;

let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_r_cuneiform_2";
segments[32] = HAnimSegment318;

let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_r_cuneiform_3";
segments[33] = HAnimSegment319;

let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_r_metatarsal_1";
segments[34] = HAnimSegment320;

let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.USE = "hanim_r_metatarsal_2";
segments[35] = HAnimSegment321;

let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.USE = "hanim_r_metatarsal_3";
segments[36] = HAnimSegment322;

let HAnimSegment323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment323.USE = "hanim_r_metatarsal_4";
segments[37] = HAnimSegment323;

let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.USE = "hanim_r_metatarsal_5";
segments[38] = HAnimSegment324;

let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.USE = "hanim_r_navicular";
segments[39] = HAnimSegment325;

let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.USE = "hanim_r_talus";
segments[40] = HAnimSegment326;

let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.USE = "hanim_r_tarsal_distal_phalanx_1";
segments[41] = HAnimSegment327;

let HAnimSegment328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment328.USE = "hanim_r_tarsal_distal_phalanx_2";
segments[42] = HAnimSegment328;

let HAnimSegment329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment329.USE = "hanim_r_tarsal_distal_phalanx_3";
segments[43] = HAnimSegment329;

let HAnimSegment330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment330.USE = "hanim_r_tarsal_distal_phalanx_4";
segments[44] = HAnimSegment330;

let HAnimSegment331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment331.USE = "hanim_r_tarsal_distal_phalanx_5";
segments[45] = HAnimSegment331;

let HAnimSegment332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment332.USE = "hanim_r_tarsal_middle_phalanx_2";
segments[46] = HAnimSegment332;

let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.USE = "hanim_r_tarsal_middle_phalanx_3";
segments[47] = HAnimSegment333;

let HAnimSegment334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment334.USE = "hanim_r_tarsal_middle_phalanx_4";
segments[48] = HAnimSegment334;

let HAnimSegment335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment335.USE = "hanim_r_tarsal_middle_phalanx_5";
segments[49] = HAnimSegment335;

let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.USE = "hanim_r_tarsal_proximal_phalanx_1";
segments[50] = HAnimSegment336;

let HAnimSegment337 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment337.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[51] = HAnimSegment337;

let HAnimSegment338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment338.USE = "hanim_r_tarsal_proximal_phalanx_3";
segments[52] = HAnimSegment338;

let HAnimSegment339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment339.USE = "hanim_r_tarsal_proximal_phalanx_4";
segments[53] = HAnimSegment339;

let HAnimSegment340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment340.USE = "hanim_r_tarsal_proximal_phalanx_5";
segments[54] = HAnimSegment340;

browser.currentScene.children[1] = HAnimHumanoid27;

}
main ();

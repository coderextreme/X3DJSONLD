const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimModelFootLeft.x3d");
scene.addMetaData("description", "Left foot, using high-fidelity definitions for HAnim version 2.0");
scene.addMetaData("creator", "Kwan-Hee YOO, Don Brutzman and Joe Williams");
scene.addMetaData("created", "26 January 2015");
scene.addMetaData("modified", "23 December 2021");
scene.addMetaData("warning", "not yet to scale");
scene.addMetaData("warning", "TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
scene.addMetaData("info", "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
scene.addMetaData("reference", "https://www.web3d.org/working-groups/humanoid-animation-HAnim");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
scene.addMetaData("reference", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
scene.addMetaData("subject", "X3D HAnim humanoid animation");
scene.addMetaData("TODO", "Integrate and confirm Segment/Joint names, Viewpoints.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo23 = browser.currentScene.createNode("WorldInfo");
WorldInfo23.title = "HAnimModelFootLeft.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo23;

let HAnimHumanoid24 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid24.name = "Foot_Left";
HAnimHumanoid24.DEF = "hanim_Foot_Left";
HAnimHumanoid24.loa = 4;
HAnimHumanoid24.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet25 = browser.currentScene.createNode("MetadataSet");
MetadataSet25.name = "HAnimHumanoid.info";
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "authorName";
MetadataString26.value = new X3D.MFString([new X3D.SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")]);
MetadataSet25.value = new X3D.MFNode();

MetadataSet25XXX.value[0] = MetadataString26;

HAnimHumanoid24.metadata = new X3D.SFNode();

HAnimHumanoid24XXX.metadata[0] = MetadataSet25;

let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "humanoid_root";
HAnimJoint27.DEF = "hanim_humanoid_root";
HAnimJoint27.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint27.llimit = new X3D.MFFloat([0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "l_talocrural";
HAnimJoint28.DEF = "hanim_l_talocrural";
HAnimJoint28.description = "connection joint of foot to leg above";
HAnimJoint28.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint28.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "l_talus";
HAnimSegment29.DEF = "hanim_l_talus";
let Transform30 = browser.currentScene.createNode("Transform");
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "HAnimJointShape";
let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.025;
geometry = Sphere32;

let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearance";
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material34;

appearance = Appearance33;

Transform30YYY.child = new X3D.undefined();

Transform30ZZZ.child[0] = Shape31;

HAnimSegment29YYY.children = new X3D.MFNode();

HAnimSegment29ZZZ.children[0] = Transform30;

let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material37;

appearance = Appearance36;

let IndexedLineSet38 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet38.DEF = "TCtoTCN";
IndexedLineSet38.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new X3D.MFVec3f([0,0,0,0,-0.3,0]);
coord = Coordinate39;

geometry = IndexedLineSet38;

HAnimSegment29ZZZ.children[1] = Shape35;

let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material42;

appearance = Appearance41;

let IndexedLineSet43 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet43.DEF = "TCtoCC";
IndexedLineSet43.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new X3D.MFVec3f([0,0,0,0.2,0.3,0]);
coord = Coordinate44;

geometry = IndexedLineSet43;

HAnimSegment29ZZZ.children[2] = Shape40;

HAnimJoint28YYY.children = new X3D.MFNode();

HAnimJoint28ZZZ.children[0] = HAnimSegment29;

//TCN
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_talocalcaneonavicular";
HAnimJoint45.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint45.center = new X3D.SFVec3f([0,-0.3,0]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "l_navicular";
HAnimSegment46.DEF = "hanim_l_navicular";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new X3D.SFVec3f([0,-0.3,0]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "HAnimJointShape";
Transform47YYY.child = new X3D.undefined();

Transform47ZZZ.child[0] = Shape48;

HAnimSegment46YYY.children = new X3D.MFNode();

HAnimSegment46ZZZ.children[0] = Transform47;

let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material51;

appearance = Appearance50;

let IndexedLineSet52 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet52.DEF = "TCNtoCN1";
IndexedLineSet52.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new X3D.MFVec3f([0,-0.3,0,-0.1,-0.45,0]);
coord = Coordinate53;

geometry = IndexedLineSet52;

HAnimSegment46ZZZ.children[1] = Shape49;

let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material56;

appearance = Appearance55;

let IndexedLineSet57 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet57.DEF = "TCNtoCN2";
IndexedLineSet57.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new X3D.MFVec3f([0,-0.3,0,0,-0.45,0]);
coord = Coordinate58;

geometry = IndexedLineSet57;

HAnimSegment46ZZZ.children[2] = Shape54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material61;

appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "TCNtoCN3";
IndexedLineSet62.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new X3D.MFVec3f([0,-0.3,0,0.1,-0.4,0]);
coord = Coordinate63;

geometry = IndexedLineSet62;

HAnimSegment46ZZZ.children[3] = Shape59;

HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimSegment46;

//CN1
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_cuneonavicular_1";
HAnimJoint64.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint64.center = new X3D.SFVec3f([-0.1,-0.45,0]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "l_cuneiform_1";
HAnimSegment65.DEF = "hanim_l_cuneiform_1";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([-0.1,-0.45,0]);
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
IndexedLineSet71.DEF = "CN1toTMT1";
IndexedLineSet71.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new X3D.MFVec3f([-0.1,-0.45,0,-0.1,-0.6,0]);
coord = Coordinate72;

geometry = IndexedLineSet71;

HAnimSegment65ZZZ.children[1] = Shape68;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimSegment65;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_tarsometatarsal_1";
HAnimJoint73.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint73.center = new X3D.SFVec3f([-0.1,-0.6,0]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_metatarsal_1";
HAnimSegment74.DEF = "hanim_l_metatarsal_1";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new X3D.SFVec3f([-0.1,-0.6,0]);
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
IndexedLineSet80.DEF = "TMT1toMTP1";
IndexedLineSet80.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new X3D.MFVec3f([-0.1,-0.6,0,-0.1,-0.9,0]);
coord = Coordinate81;

geometry = IndexedLineSet80;

HAnimSegment74ZZZ.children[1] = Shape77;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimSegment74;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_metatarsophalangeal_1";
HAnimJoint82.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint82.center = new X3D.SFVec3f([-0.1,-0.9,0]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment83.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new X3D.SFVec3f([-0.1,-0.9,0]);
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
IndexedLineSet89.DEF = "MTP1toIP1";
IndexedLineSet89.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new X3D.MFVec3f([-0.1,-0.9,0,-0.1,-1.05,0]);
coord = Coordinate90;

geometry = IndexedLineSet89;

HAnimSegment83ZZZ.children[1] = Shape86;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimSegment83;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_tarsal_interphalangeal_1";
HAnimJoint91.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint91.center = new X3D.SFVec3f([-0.1,-1.05,0]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "l_tarsal_distal_phalanx_1";
HAnimSegment92.DEF = "hanim_l_tarsal_distal_phalanx_1";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new X3D.SFVec3f([-0.1,-1.05,0]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimJointShape";
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
IndexedLineSet98.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet98.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new X3D.MFVec3f([-0.1,-1.05,0,-0.1,-1.1,0]);
coord = Coordinate99;

geometry = IndexedLineSet98;

HAnimSegment92ZZZ.children[1] = Shape95;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimSegment92;

HAnimJoint82ZZZ.children[1] = HAnimJoint91;

HAnimJoint73ZZZ.children[1] = HAnimJoint82;

HAnimJoint64ZZZ.children[1] = HAnimJoint73;

HAnimJoint45ZZZ.children[1] = HAnimJoint64;

//CN2
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_cuneonavicular_2";
HAnimJoint100.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint100.center = new X3D.SFVec3f([0,-0.45,0]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "l_cuneiform_2";
HAnimSegment101.DEF = "hanim_l_cuneiform_2";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new X3D.SFVec3f([0,-0.45,0]);
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
IndexedLineSet107.DEF = "CN2toTMT2";
IndexedLineSet107.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new X3D.MFVec3f([0,-0.45,0,0.05,-0.6,0]);
coord = Coordinate108;

geometry = IndexedLineSet107;

HAnimSegment101ZZZ.children[1] = Shape104;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimSegment101;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "l_tarsometatarsal_2";
HAnimJoint109.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint109.center = new X3D.SFVec3f([0.05,-0.6,0]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "l_metatarsal_2";
HAnimSegment110.DEF = "hanim_l_metatarsal_2";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new X3D.SFVec3f([0.05,-0.6,0]);
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
IndexedLineSet116.DEF = "TMT2toMTP2";
IndexedLineSet116.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new X3D.MFVec3f([0.05,-0.6,0,0.05,-0.9,0]);
coord = Coordinate117;

geometry = IndexedLineSet116;

HAnimSegment110ZZZ.children[1] = Shape113;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimSegment110;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_metatarsophalangeal_2";
HAnimJoint118.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint118.center = new X3D.SFVec3f([0.05,-0.9,0]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment119.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new X3D.SFVec3f([0.05,-0.9,0]);
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
IndexedLineSet125.DEF = "MTP2toPIP2";
IndexedLineSet125.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new X3D.MFVec3f([0.05,-0.9,0,0.05,-1.05,0]);
coord = Coordinate126;

geometry = IndexedLineSet125;

HAnimSegment119ZZZ.children[1] = Shape122;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimSegment119;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.center = new X3D.SFVec3f([0.05,-1.05,0]);
HAnimJoint127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "l_tarsal_middle_phalanx_2";
HAnimSegment128.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new X3D.SFVec3f([0.05,-1.05,0]);
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
IndexedLineSet134.DEF = "PIP2toDIP2";
IndexedLineSet134.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new X3D.MFVec3f([0.05,-1.05,0,0.05,-1.12,0]);
coord = Coordinate135;

geometry = IndexedLineSet134;

HAnimSegment128ZZZ.children[1] = Shape131;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimSegment128;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint136.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint136.center = new X3D.SFVec3f([0.05,-1.12,0]);
HAnimJoint136.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint136.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "l_tarsal_distal_phalanx_2";
HAnimSegment137.DEF = "hanim_l_tarsal_distal_phalanx_2";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([0.05,-1.12,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimJointShape";
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
IndexedLineSet143.DEF = "tiptoe_l_tarsal_distal_phalanx_2";
IndexedLineSet143.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.point = new X3D.MFVec3f([0.05,-1.12,0,0.05,-1.16,0]);
coord = Coordinate144;

geometry = IndexedLineSet143;

HAnimSegment137ZZZ.children[1] = Shape140;

HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimSegment137;

HAnimJoint127ZZZ.children[1] = HAnimJoint136;

HAnimJoint118ZZZ.children[1] = HAnimJoint127;

HAnimJoint109ZZZ.children[1] = HAnimJoint118;

HAnimJoint100ZZZ.children[1] = HAnimJoint109;

HAnimJoint45ZZZ.children[2] = HAnimJoint100;

//CN3
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_cuneonavicular_3";
HAnimJoint145.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint145.center = new X3D.SFVec3f([0.1,-0.4,0]);
HAnimJoint145.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint145.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.name = "l_cuneiform_3";
HAnimSegment146.DEF = "hanim_l_cuneiform_3";
let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new X3D.SFVec3f([0.1,-0.4,0]);
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
IndexedLineSet152.DEF = "CN3toTMT3";
IndexedLineSet152.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new X3D.MFVec3f([0.1,-0.4,0,0.15,-0.6,0]);
coord = Coordinate153;

geometry = IndexedLineSet152;

HAnimSegment146ZZZ.children[1] = Shape149;

HAnimJoint145YYY.children = new X3D.MFNode();

HAnimJoint145ZZZ.children[0] = HAnimSegment146;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_tarsometatarsal_3";
HAnimJoint154.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint154.center = new X3D.SFVec3f([0.15,-0.6,0]);
HAnimJoint154.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "l_metatarsal_3";
HAnimSegment155.DEF = "hanim_l_metatarsal_3";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new X3D.SFVec3f([0.15,-0.6,0]);
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
IndexedLineSet161.DEF = "TMT3toMTP3";
IndexedLineSet161.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new X3D.MFVec3f([0.15,-0.6,0,0.15,-0.9,0]);
coord = Coordinate162;

geometry = IndexedLineSet161;

HAnimSegment155ZZZ.children[1] = Shape158;

HAnimJoint154YYY.children = new X3D.MFNode();

HAnimJoint154ZZZ.children[0] = HAnimSegment155;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_metatarsophalangeal_3";
HAnimJoint163.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint163.center = new X3D.SFVec3f([0.15,-0.9,0]);
HAnimJoint163.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint163.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment164.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new X3D.SFVec3f([0.15,-0.9,0]);
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
IndexedLineSet170.DEF = "MTP3toPIP3";
IndexedLineSet170.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new X3D.MFVec3f([0.15,-0.9,0,0.15,-1.05,0]);
coord = Coordinate171;

geometry = IndexedLineSet170;

HAnimSegment164ZZZ.children[1] = Shape167;

HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.center = new X3D.SFVec3f([0.15,-1.05,0]);
HAnimJoint172.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint172.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "l_tarsal_middle_phalanx_3";
HAnimSegment173.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new X3D.SFVec3f([0.15,-1.05,0]);
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
IndexedLineSet179.DEF = "PIP3toDIP3";
IndexedLineSet179.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new X3D.MFVec3f([0.15,-1.05,0,0.15,-1.13,0]);
coord = Coordinate180;

geometry = IndexedLineSet179;

HAnimSegment173ZZZ.children[1] = Shape176;

HAnimJoint172YYY.children = new X3D.MFNode();

HAnimJoint172ZZZ.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint181.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint181.center = new X3D.SFVec3f([0.15,-1.13,0]);
HAnimJoint181.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint181.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_tarsal_distal_phalanx_3";
HAnimSegment182.DEF = "hanim_l_tarsal_distal_phalanx_3";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new X3D.SFVec3f([0.15,-1.13,0]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
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
IndexedLineSet188.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet188.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new X3D.MFVec3f([0.15,-1.13,0,0.15,-1.16,0]);
coord = Coordinate189;

geometry = IndexedLineSet188;

HAnimSegment182ZZZ.children[1] = Shape185;

HAnimJoint181YYY.children = new X3D.MFNode();

HAnimJoint181ZZZ.children[0] = HAnimSegment182;

HAnimJoint172ZZZ.children[1] = HAnimJoint181;

HAnimJoint163ZZZ.children[1] = HAnimJoint172;

HAnimJoint154ZZZ.children[1] = HAnimJoint163;

HAnimJoint145ZZZ.children[1] = HAnimJoint154;

HAnimJoint45ZZZ.children[3] = HAnimJoint145;

HAnimJoint28ZZZ.children[1] = HAnimJoint45;

//CC
let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "l_calcaneocuboid";
HAnimJoint190.DEF = "hanim_l_calcaneocuboid";
HAnimJoint190.center = new X3D.SFVec3f([0.2,0.3,0]);
HAnimJoint190.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint190.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "l_calcaneus";
HAnimSegment191.DEF = "hanim_l_calcaneus";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new X3D.SFVec3f([0.2,0.3,0]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192YYY.child = new X3D.undefined();

Transform192ZZZ.child[0] = Shape193;

HAnimSegment191YYY.children = new X3D.MFNode();

HAnimSegment191ZZZ.children[0] = Transform192;

let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material196;

appearance = Appearance195;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.DEF = "CCtoTT";
IndexedLineSet197.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new X3D.MFVec3f([0.2,0.3,0,0.21,-0.3,0]);
coord = Coordinate198;

geometry = IndexedLineSet197;

HAnimSegment191ZZZ.children[1] = Shape194;

HAnimJoint190YYY.children = new X3D.MFNode();

HAnimJoint190ZZZ.children[0] = HAnimSegment191;

//TT
let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "l_transversetarsal";
HAnimJoint199.DEF = "hanim_l_transversetarsal";
HAnimJoint199.center = new X3D.SFVec3f([0.21,-0.3,0]);
HAnimJoint199.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint199.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.name = "l_cuboid";
HAnimSegment200.DEF = "hanim_l_cuboid";
let Transform201 = browser.currentScene.createNode("Transform");
Transform201.translation = new X3D.SFVec3f([0.21,-0.3,0]);
let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201YYY.child = new X3D.undefined();

Transform201ZZZ.child[0] = Shape202;

HAnimSegment200YYY.children = new X3D.MFNode();

HAnimSegment200ZZZ.children[0] = Transform201;

let Shape203 = browser.currentScene.createNode("Shape");
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material205;

appearance = Appearance204;

let IndexedLineSet206 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet206.DEF = "TTtoTMT4";
IndexedLineSet206.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new X3D.MFVec3f([0.21,-0.3,0,0.25,-0.58,0]);
coord = Coordinate207;

geometry = IndexedLineSet206;

HAnimSegment200ZZZ.children[1] = Shape203;

let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material210;

appearance = Appearance209;

let IndexedLineSet211 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet211.DEF = "TTtoTMT5";
IndexedLineSet211.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new X3D.MFVec3f([0.21,-0.3,0,0.33,-0.52,0]);
coord = Coordinate212;

geometry = IndexedLineSet211;

HAnimSegment200ZZZ.children[2] = Shape208;

HAnimJoint199YYY.children = new X3D.MFNode();

HAnimJoint199ZZZ.children[0] = HAnimSegment200;

//TMT4
let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsometatarsal_4";
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint213.center = new X3D.SFVec3f([0.25,-0.58,0]);
HAnimJoint213.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint213.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_metatarsal_4";
HAnimSegment214.DEF = "hanim_l_metatarsal_4";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new X3D.SFVec3f([0.25,-0.58,0]);
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
IndexedLineSet220.DEF = "TMT4toMTP4";
IndexedLineSet220.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new X3D.MFVec3f([0.25,-0.58,0,0.25,-0.87,0]);
coord = Coordinate221;

geometry = IndexedLineSet220;

HAnimSegment214ZZZ.children[1] = Shape217;

HAnimJoint213YYY.children = new X3D.MFNode();

HAnimJoint213ZZZ.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_metatarsophalangeal_4";
HAnimJoint222.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint222.center = new X3D.SFVec3f([0.25,-0.87,0]);
HAnimJoint222.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint222.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment223.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new X3D.SFVec3f([0.25,-0.87,0]);
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
IndexedLineSet229.DEF = "MTP4toPIP4";
IndexedLineSet229.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new X3D.MFVec3f([0.25,-0.87,0,0.25,-1,0]);
coord = Coordinate230;

geometry = IndexedLineSet229;

HAnimSegment223ZZZ.children[1] = Shape226;

HAnimJoint222YYY.children = new X3D.MFNode();

HAnimJoint222ZZZ.children[0] = HAnimSegment223;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.center = new X3D.SFVec3f([0.25,-1,0]);
HAnimJoint231.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint231.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_tarsal_middle_phalanx_4";
HAnimSegment232.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new X3D.SFVec3f([0.25,-1,0]);
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
IndexedLineSet238.DEF = "PIP4toDIP4";
IndexedLineSet238.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new X3D.MFVec3f([0.25,-1,0,0.25,-1.1,0]);
coord = Coordinate239;

geometry = IndexedLineSet238;

HAnimSegment232ZZZ.children[1] = Shape235;

HAnimJoint231YYY.children = new X3D.MFNode();

HAnimJoint231ZZZ.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint240.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint240.center = new X3D.SFVec3f([0.25,-1.1,0]);
HAnimJoint240.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint240.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_tarsal_distal_phalanx_4";
HAnimSegment241.DEF = "hanim_l_tarsal_distal_phalanx_4";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([0.25,-1.1,0]);
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
IndexedLineSet247.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet247.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new X3D.MFVec3f([0.25,-1.1,0,0.25,-1.15,0]);
coord = Coordinate248;

geometry = IndexedLineSet247;

HAnimSegment241ZZZ.children[1] = Shape244;

HAnimJoint240YYY.children = new X3D.MFNode();

HAnimJoint240ZZZ.children[0] = HAnimSegment241;

HAnimJoint231ZZZ.children[1] = HAnimJoint240;

HAnimJoint222ZZZ.children[1] = HAnimJoint231;

HAnimJoint213ZZZ.children[1] = HAnimJoint222;

HAnimJoint199ZZZ.children[1] = HAnimJoint213;

//TMT5
let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsometatarsal_5";
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint249.center = new X3D.SFVec3f([0.33,-0.52,0]);
HAnimJoint249.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint249.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "l_metatarsal_5";
HAnimSegment250.DEF = "hanim_l_metatarsal_5";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new X3D.SFVec3f([0.33,-0.52,0]);
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
IndexedLineSet256.DEF = "TMT5toMTP5";
IndexedLineSet256.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new X3D.MFVec3f([0.33,-0.52,0,0.34,-0.8,0]);
coord = Coordinate257;

geometry = IndexedLineSet256;

HAnimSegment250ZZZ.children[1] = Shape253;

HAnimJoint249YYY.children = new X3D.MFNode();

HAnimJoint249ZZZ.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_metatarsophalangeal_5";
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint258.center = new X3D.SFVec3f([0.34,-0.8,0]);
HAnimJoint258.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint258.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new X3D.SFVec3f([0.34,-0.8,0]);
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
IndexedLineSet265.DEF = "MTP5toPIP5";
IndexedLineSet265.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new X3D.MFVec3f([0.34,-0.8,0,0.34,-0.95,0]);
coord = Coordinate266;

geometry = IndexedLineSet265;

HAnimSegment259ZZZ.children[1] = Shape262;

HAnimJoint258YYY.children = new X3D.MFNode();

HAnimJoint258ZZZ.children[0] = HAnimSegment259;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.center = new X3D.SFVec3f([0.34,-0.95,0]);
HAnimJoint267.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint267.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.name = "l_tarsal_middle_phalanx_5";
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new X3D.SFVec3f([0.34,-0.95,0]);
let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "HAnimJointShape";
Transform269YYY.child = new X3D.undefined();

Transform269ZZZ.child[0] = Shape270;

HAnimSegment268YYY.children = new X3D.MFNode();

HAnimSegment268ZZZ.children[0] = Transform269;

let Shape271 = browser.currentScene.createNode("Shape");
let Appearance272 = browser.currentScene.createNode("Appearance");
let Material273 = browser.currentScene.createNode("Material");
Material273.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material273;

appearance = Appearance272;

let IndexedLineSet274 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet274.DEF = "PIP5toDIP5";
IndexedLineSet274.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new X3D.MFVec3f([0.34,-0.95,0,0.34,-1.05,0]);
coord = Coordinate275;

geometry = IndexedLineSet274;

HAnimSegment268ZZZ.children[1] = Shape271;

HAnimJoint267YYY.children = new X3D.MFNode();

HAnimJoint267ZZZ.children[0] = HAnimSegment268;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint276.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint276.center = new X3D.SFVec3f([0.34,-1.05,0]);
HAnimJoint276.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint276.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.name = "l_tarsal_distal_phalanx_5";
HAnimSegment277.DEF = "hanim_l_tarsal_distal_phalanx_5";
let Transform278 = browser.currentScene.createNode("Transform");
Transform278.translation = new X3D.SFVec3f([0.34,-1.05,0]);
let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "HAnimJointShape";
Transform278YYY.child = new X3D.undefined();

Transform278ZZZ.child[0] = Shape279;

HAnimSegment277YYY.children = new X3D.MFNode();

HAnimSegment277ZZZ.children[0] = Transform278;

let Shape280 = browser.currentScene.createNode("Shape");
let Appearance281 = browser.currentScene.createNode("Appearance");
let Material282 = browser.currentScene.createNode("Material");
Material282.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material282;

appearance = Appearance281;

let IndexedLineSet283 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet283.DEF = "tiptoe_l_tarsal_distal_interphalangeal_5";
IndexedLineSet283.coordIndex = new X3D.MFInt32([0,1]);
let Coordinate284 = browser.currentScene.createNode("Coordinate");
Coordinate284.point = new X3D.MFVec3f([0.34,-1.05,0,0.34,-1.08,0]);
coord = Coordinate284;

geometry = IndexedLineSet283;

HAnimSegment277ZZZ.children[1] = Shape280;

HAnimJoint276YYY.children = new X3D.MFNode();

HAnimJoint276ZZZ.children[0] = HAnimSegment277;

HAnimJoint267ZZZ.children[1] = HAnimJoint276;

HAnimJoint258ZZZ.children[1] = HAnimJoint267;

HAnimJoint249ZZZ.children[1] = HAnimJoint258;

HAnimJoint199ZZZ.children[2] = HAnimJoint249;

HAnimJoint190ZZZ.children[1] = HAnimJoint199;

HAnimJoint28ZZZ.children[2] = HAnimJoint190;

HAnimJoint27YYY.children = new X3D.MFNode();

HAnimJoint27ZZZ.children[0] = HAnimJoint28;

joints[1] = HAnimJoint27;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_calcaneocuboid";
joints[3] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_cuneonavicular_1";
joints[4] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_cuneonavicular_2";
joints[5] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_cuneonavicular_3";
joints[6] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metatarsophalangeal_1";
joints[7] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metatarsophalangeal_2";
joints[8] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_metatarsophalangeal_3";
joints[9] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_metatarsophalangeal_4";
joints[10] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_metatarsophalangeal_5";
joints[11] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_talocalcaneonavicular";
joints[12] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_talocrural";
joints[13] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[14] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_tarsal_distal_interphalangeal_3";
joints[15] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_tarsal_distal_interphalangeal_4";
joints[16] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_tarsal_distal_interphalangeal_5";
joints[17] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_tarsal_interphalangeal_1";
joints[18] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
joints[19] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
joints[20] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
joints[21] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
joints[22] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_tarsometatarsal_1";
joints[23] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_tarsometatarsal_2";
joints[24] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_tarsometatarsal_3";
joints[25] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_tarsometatarsal_4";
joints[26] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_tarsometatarsal_5";
joints[27] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_transversetarsal";
joints[28] = HAnimJoint311;

browser.currentScene.children[1] = HAnimHumanoid24;

}
main ();

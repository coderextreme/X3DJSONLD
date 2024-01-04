let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelFootLeft.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Left foot, using high-fidelity definitions for HAnim version 2.0";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "26 January 2015";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 30 Dec 2023 07:42:37 GMT";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "warning";
meta7.content = "not yet to scale";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "warning";
meta8.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "info";
meta9.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "subject";
meta16.content = "X3D HAnim humanoid animation";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "TODO";
meta17.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "identifier";
meta18.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d";
head1.meta[16] = meta18;

let component19 = browser.currentScene.createNode("component");
component19.name = "HAnim";
component19.level = 1;
head1.component[17] = component19;

head = head1;

let WorldInfo21 = browser.currentScene.createNode("WorldInfo");
WorldInfo21.title = "HAnimModelFootLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo21;

let HAnimHumanoid22 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid22.DEF = "hanim_Foot_Left";
HAnimHumanoid22.name = "Foot_Left";
HAnimHumanoid22.loa = 4;
let MetadataSet23 = browser.currentScene.createNode("MetadataSet");
MetadataSet23.name = "HAnimHumanoid.info";
MetadataSet23.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString24 = browser.currentScene.createNode("MetadataString");
MetadataString24.name = "authorName";
MetadataSet23.value = new MFNode();

MetadataSet23.value[0] = MetadataString24;

HAnimHumanoid22.metadata = new SFNode();

HAnimHumanoid22.metadata[0] = MetadataSet23;

let HAnimJoint25 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint25.DEF = "hanim_humanoid_root";
HAnimJoint25.name = "humanoid_root";
let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.DEF = "hanim_l_talocrural";
HAnimJoint26.description = "connection joint of foot to leg above";
HAnimJoint26.name = "l_talocrural";
let HAnimSegment27 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment27.DEF = "hanim_l_talus";
HAnimSegment27.name = "l_talus";
let Transform28 = browser.currentScene.createNode("Transform");
let Shape29 = browser.currentScene.createNode("Shape");
Shape29.DEF = "HAnimJointShape";
let Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.DEF = "HAnimJointAppearance";
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[0,0,1]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.025;
Shape29.geometry = Sphere32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

HAnimSegment27.children = new MFNode();

HAnimSegment27.children[0] = Transform28;

let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.emissiveColor = new SFColor(new float[1,1,1]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let IndexedLineSet36 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet36.DEF = "TCtoTCN";
IndexedLineSet36.coordIndex = new MFInt32(new int[0,1]);
let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet36.coord = Coordinate37;

Shape33.geometry = IndexedLineSet36;

HAnimSegment27.children[1] = Shape33;

let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.emissiveColor = new SFColor(new float[1,1,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let IndexedLineSet41 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet41.DEF = "TCtoCC";
IndexedLineSet41.coordIndex = new MFInt32(new int[0,1]);
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,0,0,0.2,0.3,0]);
IndexedLineSet41.coord = Coordinate42;

Shape38.geometry = IndexedLineSet41;

HAnimSegment27.children[2] = Shape38;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimSegment27;

let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint43.name = "l_talocalcaneonavicular";
HAnimJoint43.center = new SFVec3f(new float[0,-0.3,0]);
let HAnimSegment44 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment44.DEF = "hanim_l_navicular";
HAnimSegment44.name = "l_navicular";
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "HAnimJointShape";
Transform45.child = new undefined();

Transform45.child[0] = Shape46;

HAnimSegment44.children = new MFNode();

HAnimSegment44.children[0] = Transform45;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.DEF = "TCNtoCN1";
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.45,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment44.children[1] = Shape47;

let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.emissiveColor = new SFColor(new float[1,1,1]);
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let IndexedLineSet55 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet55.DEF = "TCNtoCN2";
IndexedLineSet55.coordIndex = new MFInt32(new int[0,1]);
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet55.coord = Coordinate56;

Shape52.geometry = IndexedLineSet55;

HAnimSegment44.children[2] = Shape52;

let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.emissiveColor = new SFColor(new float[1,1,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let IndexedLineSet60 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet60.DEF = "TCNtoCN3";
IndexedLineSet60.coordIndex = new MFInt32(new int[0,1]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.4,0]);
IndexedLineSet60.coord = Coordinate61;

Shape57.geometry = IndexedLineSet60;

HAnimSegment44.children[3] = Shape57;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint62.name = "l_cuneonavicular_1";
HAnimJoint62.center = new SFVec3f(new float[-0.1,-0.45,0]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.DEF = "hanim_l_cuneiform_1";
HAnimSegment63.name = "l_cuneiform_1";
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[-0.1,-0.45,0]);
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "HAnimJointShape";
Transform64.child = new undefined();

Transform64.child[0] = Shape65;

HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = Transform64;

let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.emissiveColor = new SFColor(new float[1,1,1]);
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let IndexedLineSet69 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet69.DEF = "CN1toTMT1";
IndexedLineSet69.coordIndex = new MFInt32(new int[0,1]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[-0.1,-0.45,0,-0.1,-0.6,0]);
IndexedLineSet69.coord = Coordinate70;

Shape66.geometry = IndexedLineSet69;

HAnimSegment63.children[1] = Shape66;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint71.name = "l_tarsometatarsal_1";
HAnimJoint71.center = new SFVec3f(new float[-0.1,-0.6,0]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.DEF = "hanim_l_metatarsal_1";
HAnimSegment72.name = "l_metatarsal_1";
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new SFVec3f(new float[-0.1,-0.6,0]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "HAnimJointShape";
Transform73.child = new undefined();

Transform73.child[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

let Shape75 = browser.currentScene.createNode("Shape");
let Appearance76 = browser.currentScene.createNode("Appearance");
let Material77 = browser.currentScene.createNode("Material");
Material77.emissiveColor = new SFColor(new float[1,1,1]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

let IndexedLineSet78 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet78.DEF = "TMT1toMTP1";
IndexedLineSet78.coordIndex = new MFInt32(new int[0,1]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[-0.1,-0.6,0,-0.1,-0.9,0]);
IndexedLineSet78.coord = Coordinate79;

Shape75.geometry = IndexedLineSet78;

HAnimSegment72.children[1] = Shape75;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint80.name = "l_metatarsophalangeal_1";
HAnimJoint80.center = new SFVec3f(new float[-0.1,-0.9,0]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment81.name = "l_tarsal_proximal_phalanx_1";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new SFVec3f(new float[-0.1,-0.9,0]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "HAnimJointShape";
Transform82.child = new undefined();

Transform82.child[0] = Shape83;

HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = Transform82;

let Shape84 = browser.currentScene.createNode("Shape");
let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.emissiveColor = new SFColor(new float[1,1,1]);
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

let IndexedLineSet87 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet87.DEF = "MTP1toIP1";
IndexedLineSet87.coordIndex = new MFInt32(new int[0,1]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[-0.1,-0.9,0,-0.1,-1.05,0]);
IndexedLineSet87.coord = Coordinate88;

Shape84.geometry = IndexedLineSet87;

HAnimSegment81.children[1] = Shape84;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint89.name = "l_tarsal_interphalangeal_1";
HAnimJoint89.center = new SFVec3f(new float[-0.1,-1.05,0]);
let HAnimSegment90 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment90.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimSegment90.name = "l_tarsal_distal_phalanx_1";
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new SFVec3f(new float[-0.1,-1.05,0]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimJointShape";
Transform91.child = new undefined();

Transform91.child[0] = Shape92;

HAnimSegment90.children = new MFNode();

HAnimSegment90.children[0] = Transform91;

let Shape93 = browser.currentScene.createNode("Shape");
let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.emissiveColor = new SFColor(new float[1,1,1]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

let IndexedLineSet96 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet96.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet96.coordIndex = new MFInt32(new int[0,1]);
let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[-0.1,-1.05,0,-0.1,-1.1,0]);
IndexedLineSet96.coord = Coordinate97;

Shape93.geometry = IndexedLineSet96;

HAnimSegment90.children[1] = Shape93;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimSegment90;

HAnimJoint80.children[1] = HAnimJoint89;

HAnimJoint71.children[1] = HAnimJoint80;

HAnimJoint62.children[1] = HAnimJoint71;

HAnimJoint43.children[1] = HAnimJoint62;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint98.name = "l_cuneonavicular_2";
HAnimJoint98.center = new SFVec3f(new float[0,-0.45,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.DEF = "hanim_l_cuneiform_2";
HAnimSegment99.name = "l_cuneiform_2";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "HAnimJointShape";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

let Shape102 = browser.currentScene.createNode("Shape");
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.emissiveColor = new SFColor(new float[1,1,1]);
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

let IndexedLineSet105 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet105.DEF = "CN2toTMT2";
IndexedLineSet105.coordIndex = new MFInt32(new int[0,1]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,-0.45,0,0.05,-0.6,0]);
IndexedLineSet105.coord = Coordinate106;

Shape102.geometry = IndexedLineSet105;

HAnimSegment99.children[1] = Shape102;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint107.name = "l_tarsometatarsal_2";
HAnimJoint107.center = new SFVec3f(new float[0.05,-0.6,0]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.DEF = "hanim_l_metatarsal_2";
HAnimSegment108.name = "l_metatarsal_2";
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[0.05,-0.6,0]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimJointShape";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

HAnimSegment108.children = new MFNode();

HAnimSegment108.children[0] = Transform109;

let Shape111 = browser.currentScene.createNode("Shape");
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Material113.emissiveColor = new SFColor(new float[1,1,1]);
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

let IndexedLineSet114 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet114.DEF = "TMT2toMTP2";
IndexedLineSet114.coordIndex = new MFInt32(new int[0,1]);
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0.05,-0.6,0,0.05,-0.9,0]);
IndexedLineSet114.coord = Coordinate115;

Shape111.geometry = IndexedLineSet114;

HAnimSegment108.children[1] = Shape111;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint116.name = "l_metatarsophalangeal_2";
HAnimJoint116.center = new SFVec3f(new float[0.05,-0.9,0]);
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment117.name = "l_tarsal_proximal_phalanx_2";
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.translation = new SFVec3f(new float[0.05,-0.9,0]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "HAnimJointShape";
Transform118.child = new undefined();

Transform118.child[0] = Shape119;

HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = Transform118;

let Shape120 = browser.currentScene.createNode("Shape");
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.emissiveColor = new SFColor(new float[1,1,1]);
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

let IndexedLineSet123 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet123.DEF = "MTP2toPIP2";
IndexedLineSet123.coordIndex = new MFInt32(new int[0,1]);
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[0.05,-0.9,0,0.05,-1.05,0]);
IndexedLineSet123.coord = Coordinate124;

Shape120.geometry = IndexedLineSet123;

HAnimSegment117.children[1] = Shape120;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint125.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint125.center = new SFVec3f(new float[0.05,-1.05,0]);
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment126.name = "l_tarsal_middle_phalanx_2";
let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[0.05,-1.05,0]);
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimJointShape";
Transform127.child = new undefined();

Transform127.child[0] = Shape128;

HAnimSegment126.children = new MFNode();

HAnimSegment126.children[0] = Transform127;

let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.emissiveColor = new SFColor(new float[1,1,1]);
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

let IndexedLineSet132 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet132.DEF = "PIP2toDIP2";
IndexedLineSet132.coordIndex = new MFInt32(new int[0,1]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0.05,-1.05,0,0.05,-1.12,0]);
IndexedLineSet132.coord = Coordinate133;

Shape129.geometry = IndexedLineSet132;

HAnimSegment126.children[1] = Shape129;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint134.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint134.center = new SFVec3f(new float[0.05,-1.12,0]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment135.name = "l_tarsal_distal_phalanx_2";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.05,-1.12,0]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimJointShape";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSegment135.children = new MFNode();

HAnimSegment135.children[0] = Transform136;

let Shape138 = browser.currentScene.createNode("Shape");
let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.emissiveColor = new SFColor(new float[1,1,1]);
Appearance139.material = Material140;

Shape138.appearance = Appearance139;

let IndexedLineSet141 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet141.DEF = "tiptoe_l_tarsal_distal_phalanx_2";
IndexedLineSet141.coordIndex = new MFInt32(new int[0,1]);
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0.05,-1.12,0,0.05,-1.16,0]);
IndexedLineSet141.coord = Coordinate142;

Shape138.geometry = IndexedLineSet141;

HAnimSegment135.children[1] = Shape138;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint125.children[1] = HAnimJoint134;

HAnimJoint116.children[1] = HAnimJoint125;

HAnimJoint107.children[1] = HAnimJoint116;

HAnimJoint98.children[1] = HAnimJoint107;

HAnimJoint43.children[2] = HAnimJoint98;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint143.name = "l_cuneonavicular_3";
HAnimJoint143.center = new SFVec3f(new float[0.1,-0.4,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.DEF = "hanim_l_cuneiform_3";
HAnimSegment144.name = "l_cuneiform_3";
let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.1,-0.4,0]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.child = new undefined();

Transform145.child[0] = Shape146;

HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = Transform145;

let Shape147 = browser.currentScene.createNode("Shape");
let Appearance148 = browser.currentScene.createNode("Appearance");
let Material149 = browser.currentScene.createNode("Material");
Material149.emissiveColor = new SFColor(new float[1,1,1]);
Appearance148.material = Material149;

Shape147.appearance = Appearance148;

let IndexedLineSet150 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet150.DEF = "CN3toTMT3";
IndexedLineSet150.coordIndex = new MFInt32(new int[0,1]);
let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.1,-0.4,0,0.15,-0.6,0]);
IndexedLineSet150.coord = Coordinate151;

Shape147.geometry = IndexedLineSet150;

HAnimSegment144.children[1] = Shape147;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint152.name = "l_tarsometatarsal_3";
HAnimJoint152.center = new SFVec3f(new float[0.15,-0.6,0]);
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.DEF = "hanim_l_metatarsal_3";
HAnimSegment153.name = "l_metatarsal_3";
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.15,-0.6,0]);
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimJointShape";
Transform154.child = new undefined();

Transform154.child[0] = Shape155;

HAnimSegment153.children = new MFNode();

HAnimSegment153.children[0] = Transform154;

let Shape156 = browser.currentScene.createNode("Shape");
let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Material158.emissiveColor = new SFColor(new float[1,1,1]);
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

let IndexedLineSet159 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet159.DEF = "TMT3toMTP3";
IndexedLineSet159.coordIndex = new MFInt32(new int[0,1]);
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.15,-0.6,0,0.15,-0.9,0]);
IndexedLineSet159.coord = Coordinate160;

Shape156.geometry = IndexedLineSet159;

HAnimSegment153.children[1] = Shape156;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint161.name = "l_metatarsophalangeal_3";
HAnimJoint161.center = new SFVec3f(new float[0.15,-0.9,0]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment162.name = "l_tarsal_proximal_phalanx_3";
let Transform163 = browser.currentScene.createNode("Transform");
Transform163.translation = new SFVec3f(new float[0.15,-0.9,0]);
let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "HAnimJointShape";
Transform163.child = new undefined();

Transform163.child[0] = Shape164;

HAnimSegment162.children = new MFNode();

HAnimSegment162.children[0] = Transform163;

let Shape165 = browser.currentScene.createNode("Shape");
let Appearance166 = browser.currentScene.createNode("Appearance");
let Material167 = browser.currentScene.createNode("Material");
Material167.emissiveColor = new SFColor(new float[1,1,1]);
Appearance166.material = Material167;

Shape165.appearance = Appearance166;

let IndexedLineSet168 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet168.DEF = "MTP3toPIP3";
IndexedLineSet168.coordIndex = new MFInt32(new int[0,1]);
let Coordinate169 = browser.currentScene.createNode("Coordinate");
Coordinate169.point = new MFVec3f(new float[0.15,-0.9,0,0.15,-1.05,0]);
IndexedLineSet168.coord = Coordinate169;

Shape165.geometry = IndexedLineSet168;

HAnimSegment162.children[1] = Shape165;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint170.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint170.center = new SFVec3f(new float[0.15,-1.05,0]);
let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment171.name = "l_tarsal_middle_phalanx_3";
let Transform172 = browser.currentScene.createNode("Transform");
Transform172.translation = new SFVec3f(new float[0.15,-1.05,0]);
let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "HAnimJointShape";
Transform172.child = new undefined();

Transform172.child[0] = Shape173;

HAnimSegment171.children = new MFNode();

HAnimSegment171.children[0] = Transform172;

let Shape174 = browser.currentScene.createNode("Shape");
let Appearance175 = browser.currentScene.createNode("Appearance");
let Material176 = browser.currentScene.createNode("Material");
Material176.emissiveColor = new SFColor(new float[1,1,1]);
Appearance175.material = Material176;

Shape174.appearance = Appearance175;

let IndexedLineSet177 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet177.DEF = "PIP3toDIP3";
IndexedLineSet177.coordIndex = new MFInt32(new int[0,1]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.15,-1.05,0,0.15,-1.13,0]);
IndexedLineSet177.coord = Coordinate178;

Shape174.geometry = IndexedLineSet177;

HAnimSegment171.children[1] = Shape174;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimSegment171;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint179.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint179.center = new SFVec3f(new float[0.15,-1.13,0]);
let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimSegment180.name = "l_tarsal_distal_phalanx_3";
let Transform181 = browser.currentScene.createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.15,-1.13,0]);
let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "HAnimJointShape";
Transform181.child = new undefined();

Transform181.child[0] = Shape182;

HAnimSegment180.children = new MFNode();

HAnimSegment180.children[0] = Transform181;

let Shape183 = browser.currentScene.createNode("Shape");
let Appearance184 = browser.currentScene.createNode("Appearance");
let Material185 = browser.currentScene.createNode("Material");
Material185.emissiveColor = new SFColor(new float[1,1,1]);
Appearance184.material = Material185;

Shape183.appearance = Appearance184;

let IndexedLineSet186 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet186.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet186.coordIndex = new MFInt32(new int[0,1]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.15,-1.13,0,0.15,-1.16,0]);
IndexedLineSet186.coord = Coordinate187;

Shape183.geometry = IndexedLineSet186;

HAnimSegment180.children[1] = Shape183;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint170.children[1] = HAnimJoint179;

HAnimJoint161.children[1] = HAnimJoint170;

HAnimJoint152.children[1] = HAnimJoint161;

HAnimJoint143.children[1] = HAnimJoint152;

HAnimJoint43.children[3] = HAnimJoint143;

HAnimJoint26.children[1] = HAnimJoint43;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.DEF = "hanim_l_calcaneocuboid";
HAnimJoint188.name = "l_calcaneocuboid";
HAnimJoint188.center = new SFVec3f(new float[0.2,0.3,0]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.DEF = "hanim_l_calcaneus";
HAnimSegment189.name = "l_calcaneus";
let Transform190 = browser.currentScene.createNode("Transform");
Transform190.translation = new SFVec3f(new float[0.2,0.3,0]);
let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "HAnimJointShape";
Transform190.child = new undefined();

Transform190.child[0] = Shape191;

HAnimSegment189.children = new MFNode();

HAnimSegment189.children[0] = Transform190;

let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
let Material194 = browser.currentScene.createNode("Material");
Material194.emissiveColor = new SFColor(new float[1,1,1]);
Appearance193.material = Material194;

Shape192.appearance = Appearance193;

let IndexedLineSet195 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet195.DEF = "CCtoTT";
IndexedLineSet195.coordIndex = new MFInt32(new int[0,1]);
let Coordinate196 = browser.currentScene.createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0.2,0.3,0,0.21,-0.3,0]);
IndexedLineSet195.coord = Coordinate196;

Shape192.geometry = IndexedLineSet195;

HAnimSegment189.children[1] = Shape192;

HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.DEF = "hanim_l_transversetarsal";
HAnimJoint197.name = "l_transversetarsal";
HAnimJoint197.center = new SFVec3f(new float[0.21,-0.3,0]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.DEF = "hanim_l_cuboid";
HAnimSegment198.name = "l_cuboid";
let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.21,-0.3,0]);
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = Transform199;

let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Material203.emissiveColor = new SFColor(new float[1,1,1]);
Appearance202.material = Material203;

Shape201.appearance = Appearance202;

let IndexedLineSet204 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet204.DEF = "TTtoTMT4";
IndexedLineSet204.coordIndex = new MFInt32(new int[0,1]);
let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0.21,-0.3,0,0.25,-0.58,0]);
IndexedLineSet204.coord = Coordinate205;

Shape201.geometry = IndexedLineSet204;

HAnimSegment198.children[1] = Shape201;

let Shape206 = browser.currentScene.createNode("Shape");
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Material208.emissiveColor = new SFColor(new float[1,1,1]);
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

let IndexedLineSet209 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet209.DEF = "TTtoTMT5";
IndexedLineSet209.coordIndex = new MFInt32(new int[0,1]);
let Coordinate210 = browser.currentScene.createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[0.21,-0.3,0,0.33,-0.52,0]);
IndexedLineSet209.coord = Coordinate210;

Shape206.geometry = IndexedLineSet209;

HAnimSegment198.children[2] = Shape206;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint211.name = "l_tarsometatarsal_4";
HAnimJoint211.center = new SFVec3f(new float[0.25,-0.58,0]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.DEF = "hanim_l_metatarsal_4";
HAnimSegment212.name = "l_metatarsal_4";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[0.25,-0.58,0]);
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimJointShape";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

let Shape215 = browser.currentScene.createNode("Shape");
let Appearance216 = browser.currentScene.createNode("Appearance");
let Material217 = browser.currentScene.createNode("Material");
Material217.emissiveColor = new SFColor(new float[1,1,1]);
Appearance216.material = Material217;

Shape215.appearance = Appearance216;

let IndexedLineSet218 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet218.DEF = "TMT4toMTP4";
IndexedLineSet218.coordIndex = new MFInt32(new int[0,1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[0.25,-0.58,0,0.25,-0.87,0]);
IndexedLineSet218.coord = Coordinate219;

Shape215.geometry = IndexedLineSet218;

HAnimSegment212.children[1] = Shape215;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint220.name = "l_metatarsophalangeal_4";
HAnimJoint220.center = new SFVec3f(new float[0.25,-0.87,0]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment221.name = "l_tarsal_proximal_phalanx_4";
let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.25,-0.87,0]);
let Shape223 = browser.currentScene.createNode("Shape");
Shape223.USE = "HAnimJointShape";
Transform222.child = new undefined();

Transform222.child[0] = Shape223;

HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = Transform222;

let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.emissiveColor = new SFColor(new float[1,1,1]);
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

let IndexedLineSet227 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet227.DEF = "MTP4toPIP4";
IndexedLineSet227.coordIndex = new MFInt32(new int[0,1]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[0.25,-0.87,0,0.25,-1,0]);
IndexedLineSet227.coord = Coordinate228;

Shape224.geometry = IndexedLineSet227;

HAnimSegment221.children[1] = Shape224;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint229.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint229.center = new SFVec3f(new float[0.25,-1,0]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment230.name = "l_tarsal_middle_phalanx_4";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.25,-1,0]);
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

let Shape233 = browser.currentScene.createNode("Shape");
let Appearance234 = browser.currentScene.createNode("Appearance");
let Material235 = browser.currentScene.createNode("Material");
Material235.emissiveColor = new SFColor(new float[1,1,1]);
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

let IndexedLineSet236 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet236.DEF = "PIP4toDIP4";
IndexedLineSet236.coordIndex = new MFInt32(new int[0,1]);
let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.25,-1,0,0.25,-1.1,0]);
IndexedLineSet236.coord = Coordinate237;

Shape233.geometry = IndexedLineSet236;

HAnimSegment230.children[1] = Shape233;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint238.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint238.center = new SFVec3f(new float[0.25,-1.1,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimSegment239.name = "l_tarsal_distal_phalanx_4";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.25,-1.1,0]);
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

let Shape242 = browser.currentScene.createNode("Shape");
let Appearance243 = browser.currentScene.createNode("Appearance");
let Material244 = browser.currentScene.createNode("Material");
Material244.emissiveColor = new SFColor(new float[1,1,1]);
Appearance243.material = Material244;

Shape242.appearance = Appearance243;

let IndexedLineSet245 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet245.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet245.coordIndex = new MFInt32(new int[0,1]);
let Coordinate246 = browser.currentScene.createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[0.25,-1.1,0,0.25,-1.15,0]);
IndexedLineSet245.coord = Coordinate246;

Shape242.geometry = IndexedLineSet245;

HAnimSegment239.children[1] = Shape242;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint229.children[1] = HAnimJoint238;

HAnimJoint220.children[1] = HAnimJoint229;

HAnimJoint211.children[1] = HAnimJoint220;

HAnimJoint197.children[1] = HAnimJoint211;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint247.name = "l_tarsometatarsal_5";
HAnimJoint247.center = new SFVec3f(new float[0.33,-0.52,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_l_metatarsal_5";
HAnimSegment248.name = "l_metatarsal_5";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.33,-0.52,0]);
let Shape250 = browser.currentScene.createNode("Shape");
Shape250.USE = "HAnimJointShape";
Transform249.child = new undefined();

Transform249.child[0] = Shape250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

let Shape251 = browser.currentScene.createNode("Shape");
let Appearance252 = browser.currentScene.createNode("Appearance");
let Material253 = browser.currentScene.createNode("Material");
Material253.emissiveColor = new SFColor(new float[1,1,1]);
Appearance252.material = Material253;

Shape251.appearance = Appearance252;

let IndexedLineSet254 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet254.DEF = "TMT5toMTP5";
IndexedLineSet254.coordIndex = new MFInt32(new int[0,1]);
let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.33,-0.52,0,0.34,-0.8,0]);
IndexedLineSet254.coord = Coordinate255;

Shape251.geometry = IndexedLineSet254;

HAnimSegment248.children[1] = Shape251;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint256.name = "l_metatarsophalangeal_5";
HAnimJoint256.center = new SFVec3f(new float[0.34,-0.8,0]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment257.name = "l_tarsal_proximal_phalanx_5";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.34,-0.8,0]);
let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "HAnimJointShape";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

let Shape260 = browser.currentScene.createNode("Shape");
let Appearance261 = browser.currentScene.createNode("Appearance");
let Material262 = browser.currentScene.createNode("Material");
Material262.emissiveColor = new SFColor(new float[1,1,1]);
Appearance261.material = Material262;

Shape260.appearance = Appearance261;

let IndexedLineSet263 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet263.DEF = "MTP5toPIP5";
IndexedLineSet263.coordIndex = new MFInt32(new int[0,1]);
let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.34,-0.8,0,0.34,-0.95,0]);
IndexedLineSet263.coord = Coordinate264;

Shape260.geometry = IndexedLineSet263;

HAnimSegment257.children[1] = Shape260;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint265.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint265.center = new SFVec3f(new float[0.34,-0.95,0]);
let HAnimSegment266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment266.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimSegment266.name = "l_tarsal_middle_phalanx_5";
let Transform267 = browser.currentScene.createNode("Transform");
Transform267.translation = new SFVec3f(new float[0.34,-0.95,0]);
let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimJointShape";
Transform267.child = new undefined();

Transform267.child[0] = Shape268;

HAnimSegment266.children = new MFNode();

HAnimSegment266.children[0] = Transform267;

let Shape269 = browser.currentScene.createNode("Shape");
let Appearance270 = browser.currentScene.createNode("Appearance");
let Material271 = browser.currentScene.createNode("Material");
Material271.emissiveColor = new SFColor(new float[1,1,1]);
Appearance270.material = Material271;

Shape269.appearance = Appearance270;

let IndexedLineSet272 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet272.DEF = "PIP5toDIP5";
IndexedLineSet272.coordIndex = new MFInt32(new int[0,1]);
let Coordinate273 = browser.currentScene.createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0.34,-0.95,0,0.34,-1.05,0]);
IndexedLineSet272.coord = Coordinate273;

Shape269.geometry = IndexedLineSet272;

HAnimSegment266.children[1] = Shape269;

HAnimJoint265.children = new MFNode();

HAnimJoint265.children[0] = HAnimSegment266;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint274.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint274.center = new SFVec3f(new float[0.34,-1.05,0]);
let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimSegment275.name = "l_tarsal_distal_phalanx_5";
let Transform276 = browser.currentScene.createNode("Transform");
Transform276.translation = new SFVec3f(new float[0.34,-1.05,0]);
let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "HAnimJointShape";
Transform276.child = new undefined();

Transform276.child[0] = Shape277;

HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = Transform276;

let Shape278 = browser.currentScene.createNode("Shape");
let Appearance279 = browser.currentScene.createNode("Appearance");
let Material280 = browser.currentScene.createNode("Material");
Material280.emissiveColor = new SFColor(new float[1,1,1]);
Appearance279.material = Material280;

Shape278.appearance = Appearance279;

let IndexedLineSet281 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet281.DEF = "tiptoe_l_tarsal_distal_interphalangeal_5";
IndexedLineSet281.coordIndex = new MFInt32(new int[0,1]);
let Coordinate282 = browser.currentScene.createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[0.34,-1.05,0,0.34,-1.08,0]);
IndexedLineSet281.coord = Coordinate282;

Shape278.geometry = IndexedLineSet281;

HAnimSegment275.children[1] = Shape278;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

HAnimJoint265.children[1] = HAnimJoint274;

HAnimJoint256.children[1] = HAnimJoint265;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint197.children[2] = HAnimJoint247;

HAnimJoint188.children[1] = HAnimJoint197;

HAnimJoint26.children[2] = HAnimJoint188;

HAnimJoint25.children = new MFNode();

HAnimJoint25.children[0] = HAnimJoint26;

HAnimHumanoid22.joints[1] = HAnimJoint25;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_l_calcaneus";
HAnimHumanoid22.segments[2] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_cuboid";
HAnimHumanoid22.segments[3] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_cuneiform_1";
HAnimHumanoid22.segments[4] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_cuneiform_2";
HAnimHumanoid22.segments[5] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_cuneiform_3";
HAnimHumanoid22.segments[6] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_metatarsal_1";
HAnimHumanoid22.segments[7] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metatarsal_2";
HAnimHumanoid22.segments[8] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metatarsal_3";
HAnimHumanoid22.segments[9] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metatarsal_4";
HAnimHumanoid22.segments[10] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metatarsal_5";
HAnimHumanoid22.segments[11] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_navicular";
HAnimHumanoid22.segments[12] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_talus";
HAnimHumanoid22.segments[13] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid22.segments[14] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid22.segments[15] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid22.segments[16] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid22.segments[17] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid22.segments[18] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid22.segments[19] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid22.segments[20] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid22.segments[21] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid22.segments[22] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid22.segments[23] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid22.segments[24] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid22.segments[25] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid22.segments[26] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid22.segments[27] = HAnimSegment308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_humanoid_root";
HAnimHumanoid22.joints[28] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid22.joints[29] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid22.joints[30] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid22.joints[31] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid22.joints[32] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid22.joints[33] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid22.joints[34] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid22.joints[35] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid22.joints[36] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid22.joints[37] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid22.joints[38] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_l_talocrural";
HAnimHumanoid22.joints[39] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid22.joints[40] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid22.joints[41] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid22.joints[42] = HAnimJoint323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid22.joints[43] = HAnimJoint324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid22.joints[44] = HAnimJoint325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid22.joints[45] = HAnimJoint326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid22.joints[46] = HAnimJoint327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid22.joints[47] = HAnimJoint328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid22.joints[48] = HAnimJoint329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid22.joints[49] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid22.joints[50] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid22.joints[51] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid22.joints[52] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid22.joints[53] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_l_transversetarsal";
HAnimHumanoid22.joints[54] = HAnimJoint335;

browser.currentScene.children[1] = HAnimHumanoid22;


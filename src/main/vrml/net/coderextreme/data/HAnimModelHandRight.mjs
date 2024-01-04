let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelHandRight.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Right hand using high-fidelity definitions for HAnim version 2.0";
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
meta6.content = "Sat, 30 Dec 2023 07:43:09 GMT";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "TODO";
meta7.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "TODO";
meta8.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "HAnimModelHandRightSegmentVisualizationError.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "error";
meta10.content = "not yet to scale, also relatively flat";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "warning";
meta11.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "info";
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "subject";
meta19.content = "X3D HAnim humanoid animation";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "identifier";
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d";
head1.meta[18] = meta20;

let component21 = browser.currentScene.createNode("component");
component21.name = "HAnim";
component21.level = 1;
head1.component[19] = component21;

head = head1;

let WorldInfo23 = browser.currentScene.createNode("WorldInfo");
WorldInfo23.title = "HAnimModelHandRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo23;

let HAnimHumanoid24 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid24.DEF = "hanim_Hand_Right";
HAnimHumanoid24.name = "Hand_Right";
HAnimHumanoid24.loa = 4;
let MetadataSet25 = browser.currentScene.createNode("MetadataSet");
MetadataSet25.name = "HAnimHumanoid.info";
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "authorName";
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataString26;

HAnimHumanoid24.metadata = new SFNode();

HAnimHumanoid24.metadata[0] = MetadataSet25;

let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.DEF = "hanim_humanoid_root";
HAnimJoint27.name = "humanoid_root";
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.DEF = "hanim_r_radiocarpal";
HAnimJoint28.description = "connection joint of hand to leg above";
HAnimJoint28.name = "r_radiocarpal";
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.DEF = "hanim_r_carpal";
HAnimSegment29.name = "r_carpal";
let Transform30 = browser.currentScene.createNode("Transform");
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "HAnimJointShape";
let Appearance32 = browser.currentScene.createNode("Appearance");
Appearance32.DEF = "HAnimJointAppearanceBlue";
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new SFColor(new float[0,0,1]);
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let Sphere34 = browser.currentScene.createNode("Sphere");
Sphere34.radius = 0.025;
Shape31.geometry = Sphere34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = Transform30;

let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.emissiveColor = new SFColor(new float[1,1,1]);
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let IndexedLineSet38 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet38.DEF = "RCToMC12";
IndexedLineSet38.coordIndex = new MFInt32(new int[0,1]);
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet38.coord = Coordinate39;

Shape35.geometry = IndexedLineSet38;

HAnimSegment29.children[1] = Shape35;

let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.emissiveColor = new SFColor(new float[1,1,1]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let IndexedLineSet43 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet43.DEF = "RCToMC3";
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet43.coord = Coordinate44;

Shape40.geometry = IndexedLineSet43;

HAnimSegment29.children[2] = Shape40;

let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.emissiveColor = new SFColor(new float[1,1,1]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let IndexedLineSet48 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet48.DEF = "RCToMC45";
IndexedLineSet48.coordIndex = new MFInt32(new int[0,1]);
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

HAnimSegment29.children[3] = Shape45;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_r_midcarpal_1";
HAnimJoint50.name = "r_midcarpal_1";
HAnimJoint50.center = new SFVec3f(new float[-0.14,0.09,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_r_trapezium";
HAnimSegment51.name = "r_trapezium";
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[-0.14,0.09,0]);
let Shape53 = browser.currentScene.createNode("Shape");
Shape53.DEF = "HAnimNewJointShape";
let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.DEF = "HAnimJointAppearanceRed";
let Material55 = browser.currentScene.createNode("Material");
Material55.diffuseColor = new SFColor(new float[1,0,0]);
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.025;
Shape53.geometry = Sphere56;

Transform52.child = new undefined();

Transform52.child[0] = Shape53;

HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = Transform52;

let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.emissiveColor = new SFColor(new float[1,1,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let IndexedLineSet60 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet60.DEF = "MC12toCMC1";
IndexedLineSet60.coordIndex = new MFInt32(new int[0,1]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[-0.1,0.1,0,-0.2,0.15,0]);
IndexedLineSet60.coord = Coordinate61;

Shape57.geometry = IndexedLineSet60;

HAnimSegment51.children[1] = Shape57;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint62.name = "r_carpometacarpal_1";
HAnimJoint62.center = new SFVec3f(new float[-0.2,0.15,0]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.DEF = "hanim_r_metacarpal_1";
HAnimSegment63.name = "r_metacarpal_1";
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[-0.2,0.15,0]);
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
IndexedLineSet69.DEF = "CMC1toMCP1xxx";
IndexedLineSet69.coordIndex = new MFInt32(new int[0,1]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[-0.2,0.15,0,-0.3,0.3,0]);
IndexedLineSet69.coord = Coordinate70;

Shape66.geometry = IndexedLineSet69;

HAnimSegment63.children[1] = Shape66;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint71.name = "r_metacarpophalangeal_1";
HAnimJoint71.center = new SFVec3f(new float[-0.3,0.3,0]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment72.name = "r_carpal_proximal_phalanx_1";
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new SFVec3f(new float[-0.3,0.3,0]);
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
IndexedLineSet78.DEF = "MCP11toIP1";
IndexedLineSet78.coordIndex = new MFInt32(new int[0,1]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[-0.3,0.3,0,-0.35,0.4,0]);
IndexedLineSet78.coord = Coordinate79;

Shape75.geometry = IndexedLineSet78;

HAnimSegment72.children[1] = Shape75;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint80.name = "r_carpal_interphalangeal_1";
HAnimJoint80.center = new SFVec3f(new float[-0.35,0.4,0]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment81.name = "r_carpal_distal_phalanx_1";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new SFVec3f(new float[-0.35,0.4,0]);
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
IndexedLineSet87.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet87.coordIndex = new MFInt32(new int[0,1]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[-0.35,0.4,0,-0.36,0.45,0]);
IndexedLineSet87.coord = Coordinate88;

Shape84.geometry = IndexedLineSet87;

HAnimSegment81.children[1] = Shape84;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

HAnimJoint71.children[1] = HAnimJoint80;

HAnimJoint62.children[1] = HAnimJoint71;

HAnimJoint50.children[1] = HAnimJoint62;

HAnimJoint28.children[1] = HAnimJoint50;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.DEF = "hanim_r_midcarpal_2";
HAnimJoint89.name = "r_midcarpal_2";
HAnimJoint89.center = new SFVec3f(new float[-0.07,0.07,0]);
let HAnimSegment90 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment90.DEF = "hanim_r_trapezoid";
HAnimSegment90.name = "r_trapezoid";
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new SFVec3f(new float[-0.07,0.07,0]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimNewJointShape";
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
IndexedLineSet96.DEF = "MC12toCMC2";
IndexedLineSet96.coordIndex = new MFInt32(new int[0,1]);
let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet96.coord = Coordinate97;

Shape93.geometry = IndexedLineSet96;

HAnimSegment90.children[1] = Shape93;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimSegment90;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint98.name = "r_carpometacarpal_2";
HAnimJoint98.center = new SFVec3f(new float[-0.1,0.2,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.DEF = "hanim_r_metacarpal_2";
HAnimSegment99.name = "r_metacarpal_2";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[-0.1,0.2,0]);
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
IndexedLineSet105.DEF = "CMC2toMCP2";
IndexedLineSet105.coordIndex = new MFInt32(new int[0,1]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[-0.1,0.2,0,-0.15,0.5,0]);
IndexedLineSet105.coord = Coordinate106;

Shape102.geometry = IndexedLineSet105;

HAnimSegment99.children[1] = Shape102;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint107.name = "r_metacarpophalangeal_2";
HAnimJoint107.center = new SFVec3f(new float[-0.15,0.5,0]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment108.name = "r_carpal_proximal_phalanx_2";
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[-0.15,0.5,0]);
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
IndexedLineSet114.DEF = "MCP2toPIP2";
IndexedLineSet114.coordIndex = new MFInt32(new int[0,1]);
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[-0.15,0.5,0,-0.2,0.7,0]);
IndexedLineSet114.coord = Coordinate115;

Shape111.geometry = IndexedLineSet114;

HAnimSegment108.children[1] = Shape111;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint116.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint116.center = new SFVec3f(new float[-0.2,0.7,0]);
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment117.name = "r_carpal_middle_phalanx_2";
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.translation = new SFVec3f(new float[-0.2,0.7,0]);
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
IndexedLineSet123.DEF = "PIP2toDIP2";
IndexedLineSet123.coordIndex = new MFInt32(new int[0,1]);
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[-0.2,0.7,0,-0.24,0.87,0]);
IndexedLineSet123.coord = Coordinate124;

Shape120.geometry = IndexedLineSet123;

HAnimSegment117.children[1] = Shape120;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint125.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint125.center = new SFVec3f(new float[-0.24,0.87,0]);
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment126.name = "r_carpal_distal_phalanx_2";
let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[-0.24,0.87,0]);
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
IndexedLineSet132.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet132.coordIndex = new MFInt32(new int[0,1]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[-0.24,0.87,0,-0.26,0.93,0]);
IndexedLineSet132.coord = Coordinate133;

Shape129.geometry = IndexedLineSet132;

HAnimSegment126.children[1] = Shape129;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

HAnimJoint116.children[1] = HAnimJoint125;

HAnimJoint107.children[1] = HAnimJoint116;

HAnimJoint98.children[1] = HAnimJoint107;

HAnimJoint89.children[1] = HAnimJoint98;

HAnimJoint28.children[2] = HAnimJoint89;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.DEF = "hanim_r_midcarpal_3";
HAnimJoint134.name = "r_midcarpal_3";
HAnimJoint134.center = new SFVec3f(new float[0,0.07,0]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.DEF = "hanim_r_capitate";
HAnimSegment135.name = "r_capitate";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new SFVec3f(new float[0,0.07,0]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimNewJointShape";
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
IndexedLineSet141.DEF = "MC3toCMC3";
IndexedLineSet141.coordIndex = new MFInt32(new int[0,1]);
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet141.coord = Coordinate142;

Shape138.geometry = IndexedLineSet141;

HAnimSegment135.children[1] = Shape138;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint143.name = "r_carpometacarpal_3";
HAnimJoint143.center = new SFVec3f(new float[0,0.2,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.DEF = "hanim_r_metacarpal_3";
HAnimSegment144.name = "r_metacarpal_3";
let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0,0.2,0]);
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
IndexedLineSet150.DEF = "CMC3toMCP3";
IndexedLineSet150.coordIndex = new MFInt32(new int[0,1]);
let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0,0.2,0,-0.03,0.5,0]);
IndexedLineSet150.coord = Coordinate151;

Shape147.geometry = IndexedLineSet150;

HAnimSegment144.children[1] = Shape147;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint152.name = "r_metacarpophalangeal_3";
HAnimJoint152.center = new SFVec3f(new float[-0.03,0.5,0]);
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment153.name = "r_carpal_proximal_phalanx_3";
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[-0.03,0.5,0]);
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
IndexedLineSet159.DEF = "MCP3toPIP3";
IndexedLineSet159.coordIndex = new MFInt32(new int[0,1]);
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[-0.03,0.5,0,-0.05,0.75,0]);
IndexedLineSet159.coord = Coordinate160;

Shape156.geometry = IndexedLineSet159;

HAnimSegment153.children[1] = Shape156;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint161.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint161.center = new SFVec3f(new float[-0.05,0.75,0]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment162.name = "r_carpal_middle_phalanx_3";
let Transform163 = browser.currentScene.createNode("Transform");
Transform163.translation = new SFVec3f(new float[-0.05,0.75,0]);
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
IndexedLineSet168.DEF = "PIP3toDIP3";
IndexedLineSet168.coordIndex = new MFInt32(new int[0,1]);
let Coordinate169 = browser.currentScene.createNode("Coordinate");
Coordinate169.point = new MFVec3f(new float[-0.05,0.75,0,-0.08,0.96,0]);
IndexedLineSet168.coord = Coordinate169;

Shape165.geometry = IndexedLineSet168;

HAnimSegment162.children[1] = Shape165;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint170.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint170.center = new SFVec3f(new float[-0.08,0.96,0]);
let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment171.name = "r_carpal_distal_phalanx_3";
let Transform172 = browser.currentScene.createNode("Transform");
Transform172.translation = new SFVec3f(new float[-0.08,0.96,0]);
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
IndexedLineSet177.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet177.coordIndex = new MFInt32(new int[0,1]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[-0.08,0.96,0,-0.09,1.05,0]);
IndexedLineSet177.coord = Coordinate178;

Shape174.geometry = IndexedLineSet177;

HAnimSegment171.children[1] = Shape174;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimSegment171;

HAnimJoint161.children[1] = HAnimJoint170;

HAnimJoint152.children[1] = HAnimJoint161;

HAnimJoint143.children[1] = HAnimJoint152;

HAnimJoint134.children[1] = HAnimJoint143;

HAnimJoint28.children[3] = HAnimJoint134;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint179.name = "r_midcarpal_4_5";
HAnimJoint179.center = new SFVec3f(new float[0.1,0.1,0]);
let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.DEF = "hanim_r_hamate";
HAnimSegment180.name = "r_hamate";
let Transform181 = browser.currentScene.createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.1,0.1,0]);
let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "HAnimNewJointShape";
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
IndexedLineSet186.DEF = "MC45toCMC4";
IndexedLineSet186.coordIndex = new MFInt32(new int[0,1]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet186.coord = Coordinate187;

Shape183.geometry = IndexedLineSet186;

HAnimSegment180.children[1] = Shape183;

let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.emissiveColor = new SFColor(new float[1,1,1]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

let IndexedLineSet191 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet191.DEF = "MC45toCMC5";
IndexedLineSet191.coordIndex = new MFInt32(new int[0,1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0.1,0.1,0,0.15,0.17,0]);
IndexedLineSet191.coord = Coordinate192;

Shape188.geometry = IndexedLineSet191;

HAnimSegment180.children[2] = Shape188;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint193.name = "r_carpometacarpal_4";
HAnimJoint193.center = new SFVec3f(new float[0.1,0.2,0]);
let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.DEF = "hanim_r_metacarpal_4";
HAnimSegment194.name = "r_metacarpal_4";
let Transform195 = browser.currentScene.createNode("Transform");
Transform195.translation = new SFVec3f(new float[0.1,0.2,0]);
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195.child = new undefined();

Transform195.child[0] = Shape196;

HAnimSegment194.children = new MFNode();

HAnimSegment194.children[0] = Transform195;

let Shape197 = browser.currentScene.createNode("Shape");
let Appearance198 = browser.currentScene.createNode("Appearance");
let Material199 = browser.currentScene.createNode("Material");
Material199.emissiveColor = new SFColor(new float[1,1,1]);
Appearance198.material = Material199;

Shape197.appearance = Appearance198;

let IndexedLineSet200 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet200.DEF = "CMC4toMCP4";
IndexedLineSet200.coordIndex = new MFInt32(new int[0,1]);
let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.1,0.2,0,0.1,0.47,0]);
IndexedLineSet200.coord = Coordinate201;

Shape197.geometry = IndexedLineSet200;

HAnimSegment194.children[1] = Shape197;

HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint202.name = "r_metacarpophalangeal_4";
HAnimJoint202.center = new SFVec3f(new float[0.1,0.47,0]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment203.name = "r_carpal_proximal_phalanx_4";
let Transform204 = browser.currentScene.createNode("Transform");
Transform204.translation = new SFVec3f(new float[0.1,0.47,0]);
let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "HAnimJointShape";
Transform204.child = new undefined();

Transform204.child[0] = Shape205;

HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = Transform204;

let Shape206 = browser.currentScene.createNode("Shape");
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Material208.emissiveColor = new SFColor(new float[1,1,1]);
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

let IndexedLineSet209 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet209.DEF = "MCP4toPIP4";
IndexedLineSet209.coordIndex = new MFInt32(new int[0,1]);
let Coordinate210 = browser.currentScene.createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[0.1,0.47,0,0.1,0.7,0]);
IndexedLineSet209.coord = Coordinate210;

Shape206.geometry = IndexedLineSet209;

HAnimSegment203.children[1] = Shape206;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint211.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint211.center = new SFVec3f(new float[0.1,0.7,0]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment212.name = "r_carpal_middle_phalanx_4";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[0.1,0.7,0]);
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
IndexedLineSet218.DEF = "PIP4toDIP4";
IndexedLineSet218.coordIndex = new MFInt32(new int[0,1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[0.1,0.7,0,0.1,0.93,0]);
IndexedLineSet218.coord = Coordinate219;

Shape215.geometry = IndexedLineSet218;

HAnimSegment212.children[1] = Shape215;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint220.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint220.center = new SFVec3f(new float[0.1,0.93,0]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment221.name = "r_carpal_distal_phalanx_4";
let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.1,0.93,0]);
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
IndexedLineSet227.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet227.coordIndex = new MFInt32(new int[0,1]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[0.1,0.93,0,0.1,1,0]);
IndexedLineSet227.coord = Coordinate228;

Shape224.geometry = IndexedLineSet227;

HAnimSegment221.children[1] = Shape224;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint211.children[1] = HAnimJoint220;

HAnimJoint202.children[1] = HAnimJoint211;

HAnimJoint193.children[1] = HAnimJoint202;

HAnimJoint179.children[1] = HAnimJoint193;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint229.name = "r_carpometacarpal_5";
HAnimJoint229.center = new SFVec3f(new float[0.15,0.17,0]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_r_metacarpal_5";
HAnimSegment230.name = "r_metacarpal_5";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.15,0.17,0]);
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
IndexedLineSet236.DEF = "CMC5toMCP5";
IndexedLineSet236.coordIndex = new MFInt32(new int[0,1]);
let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.15,0.17,0,0.2,0.4,0]);
IndexedLineSet236.coord = Coordinate237;

Shape233.geometry = IndexedLineSet236;

HAnimSegment230.children[1] = Shape233;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint238.name = "r_metacarpophalangeal_5";
HAnimJoint238.center = new SFVec3f(new float[0.2,0.4,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment239.name = "r_carpal_proximal_phalanx_5";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.2,0.4,0]);
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
IndexedLineSet245.DEF = "MCP5toPIP5";
IndexedLineSet245.coordIndex = new MFInt32(new int[0,1]);
let Coordinate246 = browser.currentScene.createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[0.2,0.4,0,0.23,0.63,0]);
IndexedLineSet245.coord = Coordinate246;

Shape242.geometry = IndexedLineSet245;

HAnimSegment239.children[1] = Shape242;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint247.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint247.center = new SFVec3f(new float[0.23,0.63,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimSegment248.name = "r_carpal_middle_phalanx_5";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.23,0.63,0]);
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
IndexedLineSet254.DEF = "PIP5toDIP5";
IndexedLineSet254.coordIndex = new MFInt32(new int[0,1]);
let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.23,0.63,0,0.25,0.79,0]);
IndexedLineSet254.coord = Coordinate255;

Shape251.geometry = IndexedLineSet254;

HAnimSegment248.children[1] = Shape251;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint256.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint256.center = new SFVec3f(new float[0.25,0.79,0]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment257.name = "r_carpal_distal_phalanx_5";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.25,0.79,0]);
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
IndexedLineSet263.DEF = "fingertip_r_carpal_distal_interphalangeal_5";
IndexedLineSet263.coordIndex = new MFInt32(new int[0,1]);
let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.25,0.79,0,0.26,0.85,0]);
IndexedLineSet263.coord = Coordinate264;

Shape260.geometry = IndexedLineSet263;

HAnimSegment257.children[1] = Shape260;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint229.children[1] = HAnimJoint238;

HAnimJoint179.children[2] = HAnimJoint229;

HAnimJoint28.children[4] = HAnimJoint179;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimJoint28;

HAnimHumanoid24.joints[1] = HAnimJoint27;

let HAnimSegment265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment265.USE = "hanim_r_capitate";
HAnimHumanoid24.segments[2] = HAnimSegment265;

let HAnimSegment266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment266.USE = "hanim_r_carpal";
HAnimHumanoid24.segments[3] = HAnimSegment266;

let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid24.segments[4] = HAnimSegment267;

let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid24.segments[5] = HAnimSegment268;

let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid24.segments[6] = HAnimSegment269;

let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid24.segments[7] = HAnimSegment270;

let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid24.segments[8] = HAnimSegment271;

let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid24.segments[9] = HAnimSegment272;

let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid24.segments[10] = HAnimSegment273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid24.segments[11] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid24.segments[12] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid24.segments[13] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid24.segments[14] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid24.segments[15] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid24.segments[16] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid24.segments[17] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_r_hamate";
HAnimHumanoid24.segments[18] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_r_metacarpal_1";
HAnimHumanoid24.segments[19] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_r_metacarpal_2";
HAnimHumanoid24.segments[20] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_r_metacarpal_3";
HAnimHumanoid24.segments[21] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_r_metacarpal_4";
HAnimHumanoid24.segments[22] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_r_metacarpal_5";
HAnimHumanoid24.segments[23] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_trapezium";
HAnimHumanoid24.segments[24] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_trapezoid";
HAnimHumanoid24.segments[25] = HAnimSegment288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_humanoid_root";
HAnimHumanoid24.joints[26] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid24.joints[27] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid24.joints[28] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid24.joints[29] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid24.joints[30] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid24.joints[31] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid24.joints[32] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid24.joints[33] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid24.joints[34] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid24.joints[35] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid24.joints[36] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid24.joints[37] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid24.joints[38] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid24.joints[39] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid24.joints[40] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid24.joints[41] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid24.joints[42] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid24.joints[43] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid24.joints[44] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid24.joints[45] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_midcarpal_1";
HAnimHumanoid24.joints[46] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_midcarpal_2";
HAnimHumanoid24.joints[47] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_midcarpal_3";
HAnimHumanoid24.joints[48] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid24.joints[49] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_radiocarpal";
HAnimHumanoid24.joints[50] = HAnimJoint313;

browser.currentScene.children[1] = HAnimHumanoid24;


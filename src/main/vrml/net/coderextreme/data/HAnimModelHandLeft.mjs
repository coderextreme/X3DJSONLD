let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelHandLeft.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Left hand, using high-fidelity definitions for HAnim version 2.0";
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
meta6.content = "Sat, 30 Dec 2023 07:42:59 GMT";
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
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d";
head1.meta[18] = meta20;

let component21 = browser.currentScene.createNode("component");
component21.name = "HAnim";
component21.level = 1;
head1.component[19] = component21;

head = head1;

let WorldInfo23 = browser.currentScene.createNode("WorldInfo");
WorldInfo23.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo23;

let HAnimHumanoid24 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid24.DEF = "hanim_Hand_Left";
HAnimHumanoid24.name = "Hand_Left";
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
HAnimJoint28.DEF = "hanim_l_radiocarpal";
HAnimJoint28.description = "connection joint of hand to leg above";
HAnimJoint28.name = "l_radiocarpal";
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.DEF = "hanim_l_carpal";
HAnimSegment29.name = "l_carpal";
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
Coordinate39.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
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
Coordinate49.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

HAnimSegment29.children[3] = Shape45;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_l_midcarpal_1";
HAnimJoint50.name = "l_midcarpal_1";
HAnimJoint50.center = new SFVec3f(new float[0.14,0.09,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_l_trapezium";
HAnimSegment51.name = "l_trapezium";
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[0.14,0.09,0]);
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
Coordinate61.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet60.coord = Coordinate61;

Shape57.geometry = IndexedLineSet60;

HAnimSegment51.children[1] = Shape57;

let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.emissiveColor = new SFColor(new float[1,1,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let IndexedLineSet65 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet65.DEF = "MC1toCMC1";
IndexedLineSet65.coordIndex = new MFInt32(new int[0,1]);
let Coordinate66 = browser.currentScene.createNode("Coordinate");
Coordinate66.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet65.coord = Coordinate66;

Shape62.geometry = IndexedLineSet65;

HAnimSegment51.children[2] = Shape62;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint67.name = "l_carpometacarpal_1";
HAnimJoint67.center = new SFVec3f(new float[0.2,0.15,0]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.DEF = "hanim_l_metacarpal_1";
HAnimSegment68.name = "l_metacarpal_1";
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new SFVec3f(new float[0.2,0.15,0]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "HAnimJointShape";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Transform69;

let Shape71 = browser.currentScene.createNode("Shape");
let Appearance72 = browser.currentScene.createNode("Appearance");
let Material73 = browser.currentScene.createNode("Material");
Material73.emissiveColor = new SFColor(new float[1,1,1]);
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

let IndexedLineSet74 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet74.DEF = "CMC1toMCP1";
IndexedLineSet74.coordIndex = new MFInt32(new int[0,1]);
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet74.coord = Coordinate75;

Shape71.geometry = IndexedLineSet74;

HAnimSegment68.children[1] = Shape71;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint76.name = "l_metacarpophalangeal_1";
HAnimJoint76.center = new SFVec3f(new float[0.3,0.3,0]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment77.name = "l_carpal_proximal_phalanx_1";
let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new SFVec3f(new float[0.3,0.3,0]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "HAnimJointShape";
Transform78.child = new undefined();

Transform78.child[0] = Shape79;

HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = Transform78;

let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.emissiveColor = new SFColor(new float[1,1,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

let IndexedLineSet83 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet83.DEF = "MCP11toIP1";
IndexedLineSet83.coordIndex = new MFInt32(new int[0,1]);
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet83.coord = Coordinate84;

Shape80.geometry = IndexedLineSet83;

HAnimSegment77.children[1] = Shape80;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint85.name = "l_carpal_interphalangeal_1";
HAnimJoint85.center = new SFVec3f(new float[0.35,0.4,0]);
let HAnimSegment86 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment86.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment86.name = "l_carpal_distal_phalanx_1";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new SFVec3f(new float[0.35,0.4,0]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "HAnimJointShape";
Transform87.child = new undefined();

Transform87.child[0] = Shape88;

HAnimSegment86.children = new MFNode();

HAnimSegment86.children[0] = Transform87;

let Shape89 = browser.currentScene.createNode("Shape");
let Appearance90 = browser.currentScene.createNode("Appearance");
let Material91 = browser.currentScene.createNode("Material");
Material91.emissiveColor = new SFColor(new float[1,1,1]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

let IndexedLineSet92 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet92.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet92.coordIndex = new MFInt32(new int[0,1]);
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0.35,0.4,0,0.36,0.45,0]);
IndexedLineSet92.coord = Coordinate93;

Shape89.geometry = IndexedLineSet92;

HAnimSegment86.children[1] = Shape89;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimSegment86;

HAnimJoint76.children[1] = HAnimJoint85;

HAnimJoint67.children[1] = HAnimJoint76;

HAnimJoint50.children[1] = HAnimJoint67;

HAnimJoint28.children[1] = HAnimJoint50;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "hanim_l_midcarpal_2";
HAnimJoint94.name = "l_midcarpal_2";
HAnimJoint94.center = new SFVec3f(new float[0.07,0.07,0]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.DEF = "hanim_l_trapezoid";
HAnimSegment95.name = "l_trapezoid";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.07,0.07,0]);
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "HAnimNewJointShape";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.emissiveColor = new SFColor(new float[1,1,1]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

let IndexedLineSet101 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet101.DEF = "MC2toCMC2";
IndexedLineSet101.coordIndex = new MFInt32(new int[0,1]);
let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet101.coord = Coordinate102;

Shape98.geometry = IndexedLineSet101;

HAnimSegment95.children[1] = Shape98;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint103.name = "l_carpometacarpal_2";
HAnimJoint103.center = new SFVec3f(new float[0.1,0.2,0]);
let HAnimSegment104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment104.DEF = "hanim_l_metacarpal_2";
HAnimSegment104.name = "l_metacarpal_2";
let Transform105 = browser.currentScene.createNode("Transform");
Transform105.translation = new SFVec3f(new float[0.1,0.2,0]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimJointShape";
Transform105.child = new undefined();

Transform105.child[0] = Shape106;

HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = Transform105;

let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.emissiveColor = new SFColor(new float[1,1,1]);
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

let IndexedLineSet110 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet110.DEF = "CMC2toMCP2";
IndexedLineSet110.coordIndex = new MFInt32(new int[0,1]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet110.coord = Coordinate111;

Shape107.geometry = IndexedLineSet110;

HAnimSegment104.children[1] = Shape107;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint112.name = "l_metacarpophalangeal_2";
HAnimJoint112.center = new SFVec3f(new float[0.15,0.5,0]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment113.name = "l_carpal_proximal_phalanx_2";
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new SFVec3f(new float[0.15,0.5,0]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "HAnimJointShape";
Transform114.child = new undefined();

Transform114.child[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

let Shape116 = browser.currentScene.createNode("Shape");
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.emissiveColor = new SFColor(new float[1,1,1]);
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

let IndexedLineSet119 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet119.DEF = "MCP2toPIP2";
IndexedLineSet119.coordIndex = new MFInt32(new int[0,1]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet119.coord = Coordinate120;

Shape116.geometry = IndexedLineSet119;

HAnimSegment113.children[1] = Shape116;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint121.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint121.center = new SFVec3f(new float[0.2,0.7,0]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment122.name = "l_carpal_middle_phalanx_2";
let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new SFVec3f(new float[0.2,0.7,0]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimJointShape";
Transform123.child = new undefined();

Transform123.child[0] = Shape124;

HAnimSegment122.children = new MFNode();

HAnimSegment122.children[0] = Transform123;

let Shape125 = browser.currentScene.createNode("Shape");
let Appearance126 = browser.currentScene.createNode("Appearance");
let Material127 = browser.currentScene.createNode("Material");
Material127.emissiveColor = new SFColor(new float[1,1,1]);
Appearance126.material = Material127;

Shape125.appearance = Appearance126;

let IndexedLineSet128 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet128.DEF = "PIP2toDIP2";
IndexedLineSet128.coordIndex = new MFInt32(new int[0,1]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet128.coord = Coordinate129;

Shape125.geometry = IndexedLineSet128;

HAnimSegment122.children[1] = Shape125;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint130.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint130.center = new SFVec3f(new float[0.24,0.87,0]);
let HAnimSegment131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment131.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment131.name = "l_carpal_distal_phalanx_2";
let Transform132 = browser.currentScene.createNode("Transform");
Transform132.translation = new SFVec3f(new float[0.24,0.87,0]);
let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimJointShape";
Transform132.child = new undefined();

Transform132.child[0] = Shape133;

HAnimSegment131.children = new MFNode();

HAnimSegment131.children[0] = Transform132;

let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.emissiveColor = new SFColor(new float[1,1,1]);
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

let IndexedLineSet137 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet137.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet137.coordIndex = new MFInt32(new int[0,1]);
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.point = new MFVec3f(new float[0.24,0.87,0,0.26,0.93,0]);
IndexedLineSet137.coord = Coordinate138;

Shape134.geometry = IndexedLineSet137;

HAnimSegment131.children[1] = Shape134;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint121.children[1] = HAnimJoint130;

HAnimJoint112.children[1] = HAnimJoint121;

HAnimJoint103.children[1] = HAnimJoint112;

HAnimJoint94.children[1] = HAnimJoint103;

HAnimJoint28.children[2] = HAnimJoint94;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.DEF = "hanim_l_midcarpal_3";
HAnimJoint139.name = "l_midcarpal_3";
HAnimJoint139.center = new SFVec3f(new float[0,0.07,0]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.DEF = "hanim_l_capitate";
HAnimSegment140.name = "l_capitate";
let Transform141 = browser.currentScene.createNode("Transform");
Transform141.translation = new SFVec3f(new float[0,0.07,0]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimNewJointShape";
Transform141.child = new undefined();

Transform141.child[0] = Shape142;

HAnimSegment140.children = new MFNode();

HAnimSegment140.children[0] = Transform141;

let Shape143 = browser.currentScene.createNode("Shape");
let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.emissiveColor = new SFColor(new float[1,1,1]);
Appearance144.material = Material145;

Shape143.appearance = Appearance144;

let IndexedLineSet146 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet146.DEF = "MC3toCMC3";
IndexedLineSet146.coordIndex = new MFInt32(new int[0,1]);
let Coordinate147 = browser.currentScene.createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet146.coord = Coordinate147;

Shape143.geometry = IndexedLineSet146;

HAnimSegment140.children[1] = Shape143;

HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint148.name = "l_carpometacarpal_3";
HAnimJoint148.center = new SFVec3f(new float[0,0.2,0]);
let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.DEF = "hanim_l_metacarpal_3";
HAnimSegment149.name = "l_metacarpal_3";
let Transform150 = browser.currentScene.createNode("Transform");
Transform150.translation = new SFVec3f(new float[0,0.2,0]);
let Shape151 = browser.currentScene.createNode("Shape");
Shape151.USE = "HAnimJointShape";
Transform150.child = new undefined();

Transform150.child[0] = Shape151;

HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = Transform150;

let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Material154.emissiveColor = new SFColor(new float[1,1,1]);
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

let IndexedLineSet155 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet155.DEF = "CMC3toMCP3";
IndexedLineSet155.coordIndex = new MFInt32(new int[0,1]);
let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet155.coord = Coordinate156;

Shape152.geometry = IndexedLineSet155;

HAnimSegment149.children[1] = Shape152;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint157.name = "l_metacarpophalangeal_3";
HAnimJoint157.center = new SFVec3f(new float[0.03,0.5,0]);
let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment158.name = "l_carpal_proximal_phalanx_3";
let Transform159 = browser.currentScene.createNode("Transform");
Transform159.translation = new SFVec3f(new float[0.03,0.5,0]);
let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "HAnimJointShape";
Transform159.child = new undefined();

Transform159.child[0] = Shape160;

HAnimSegment158.children = new MFNode();

HAnimSegment158.children[0] = Transform159;

let Shape161 = browser.currentScene.createNode("Shape");
let Appearance162 = browser.currentScene.createNode("Appearance");
let Material163 = browser.currentScene.createNode("Material");
Material163.emissiveColor = new SFColor(new float[1,1,1]);
Appearance162.material = Material163;

Shape161.appearance = Appearance162;

let IndexedLineSet164 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet164.DEF = "MCP3toPIP3";
IndexedLineSet164.coordIndex = new MFInt32(new int[0,1]);
let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet164.coord = Coordinate165;

Shape161.geometry = IndexedLineSet164;

HAnimSegment158.children[1] = Shape161;

HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimSegment158;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint166.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint166.center = new SFVec3f(new float[0.05,0.75,0]);
let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment167.name = "l_carpal_middle_phalanx_3";
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.05,0.75,0]);
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Material172.emissiveColor = new SFColor(new float[1,1,1]);
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

let IndexedLineSet173 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet173.DEF = "PIP3toDIP3";
IndexedLineSet173.coordIndex = new MFInt32(new int[0,1]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet173.coord = Coordinate174;

Shape170.geometry = IndexedLineSet173;

HAnimSegment167.children[1] = Shape170;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint175.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint175.center = new SFVec3f(new float[0.08,0.96,0]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment176.name = "l_carpal_distal_phalanx_3";
let Transform177 = browser.currentScene.createNode("Transform");
Transform177.translation = new SFVec3f(new float[0.08,0.96,0]);
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.emissiveColor = new SFColor(new float[1,1,1]);
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

let IndexedLineSet182 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet182.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet182.coordIndex = new MFInt32(new int[0,1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0.08,0.96,0,0.09,1.05,0]);
IndexedLineSet182.coord = Coordinate183;

Shape179.geometry = IndexedLineSet182;

HAnimSegment176.children[1] = Shape179;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint166.children[1] = HAnimJoint175;

HAnimJoint157.children[1] = HAnimJoint166;

HAnimJoint148.children[1] = HAnimJoint157;

HAnimJoint139.children[1] = HAnimJoint148;

HAnimJoint28.children[3] = HAnimJoint139;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint184.name = "l_midcarpal_4_5";
HAnimJoint184.center = new SFVec3f(new float[-0.1,0.1,0]);
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.DEF = "hanim_l_hamate";
HAnimSegment185.name = "l_hamate";
let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimNewJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = Transform186;

let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.emissiveColor = new SFColor(new float[1,1,1]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

let IndexedLineSet191 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet191.DEF = "MC45toCMC4";
IndexedLineSet191.coordIndex = new MFInt32(new int[0,1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet191.coord = Coordinate192;

Shape188.geometry = IndexedLineSet191;

HAnimSegment185.children[1] = Shape188;

let Shape193 = browser.currentScene.createNode("Shape");
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.emissiveColor = new SFColor(new float[1,1,1]);
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

let IndexedLineSet196 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet196.DEF = "MC45toCMC5";
IndexedLineSet196.coordIndex = new MFInt32(new int[0,1]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet196.coord = Coordinate197;

Shape193.geometry = IndexedLineSet196;

HAnimSegment185.children[2] = Shape193;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint198.name = "l_carpometacarpal_4";
HAnimJoint198.center = new SFVec3f(new float[-0.1,0.2,0]);
let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.DEF = "hanim_l_metacarpal_4";
HAnimSegment199.name = "l_metacarpal_4";
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape201 = browser.currentScene.createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200.child = new undefined();

Transform200.child[0] = Shape201;

HAnimSegment199.children = new MFNode();

HAnimSegment199.children[0] = Transform200;

let Shape202 = browser.currentScene.createNode("Shape");
let Appearance203 = browser.currentScene.createNode("Appearance");
let Material204 = browser.currentScene.createNode("Material");
Material204.emissiveColor = new SFColor(new float[1,1,1]);
Appearance203.material = Material204;

Shape202.appearance = Appearance203;

let IndexedLineSet205 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet205.DEF = "CMC4toMCP4";
IndexedLineSet205.coordIndex = new MFInt32(new int[0,1]);
let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet205.coord = Coordinate206;

Shape202.geometry = IndexedLineSet205;

HAnimSegment199.children[1] = Shape202;

HAnimJoint198.children = new MFNode();

HAnimJoint198.children[0] = HAnimSegment199;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint207.name = "l_metacarpophalangeal_4";
HAnimJoint207.center = new SFVec3f(new float[-0.1,0.47,0]);
let HAnimSegment208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment208.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment208.name = "l_carpal_proximal_phalanx_4";
let Transform209 = browser.currentScene.createNode("Transform");
Transform209.translation = new SFVec3f(new float[-0.1,0.47,0]);
let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimJointShape";
Transform209.child = new undefined();

Transform209.child[0] = Shape210;

HAnimSegment208.children = new MFNode();

HAnimSegment208.children[0] = Transform209;

let Shape211 = browser.currentScene.createNode("Shape");
let Appearance212 = browser.currentScene.createNode("Appearance");
let Material213 = browser.currentScene.createNode("Material");
Material213.emissiveColor = new SFColor(new float[1,1,1]);
Appearance212.material = Material213;

Shape211.appearance = Appearance212;

let IndexedLineSet214 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet214.DEF = "MCP4toPIP4";
IndexedLineSet214.coordIndex = new MFInt32(new int[0,1]);
let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet214.coord = Coordinate215;

Shape211.geometry = IndexedLineSet214;

HAnimSegment208.children[1] = Shape211;

HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint216.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint216.center = new SFVec3f(new float[-0.1,0.7,0]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment217.name = "l_carpal_middle_phalanx_4";
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new SFVec3f(new float[-0.1,0.7,0]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "HAnimJointShape";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = Transform218;

let Shape220 = browser.currentScene.createNode("Shape");
let Appearance221 = browser.currentScene.createNode("Appearance");
let Material222 = browser.currentScene.createNode("Material");
Material222.emissiveColor = new SFColor(new float[1,1,1]);
Appearance221.material = Material222;

Shape220.appearance = Appearance221;

let IndexedLineSet223 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet223.DEF = "PIP4toDIP4";
IndexedLineSet223.coordIndex = new MFInt32(new int[0,1]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet223.coord = Coordinate224;

Shape220.geometry = IndexedLineSet223;

HAnimSegment217.children[1] = Shape220;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint225.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint225.center = new SFVec3f(new float[-0.1,0.93,0]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment226.name = "l_carpal_distal_phalanx_4";
let Transform227 = browser.currentScene.createNode("Transform");
Transform227.translation = new SFVec3f(new float[-0.1,0.93,0]);
let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimJointShape";
Transform227.child = new undefined();

Transform227.child[0] = Shape228;

HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = Transform227;

let Shape229 = browser.currentScene.createNode("Shape");
let Appearance230 = browser.currentScene.createNode("Appearance");
let Material231 = browser.currentScene.createNode("Material");
Material231.emissiveColor = new SFColor(new float[1,1,1]);
Appearance230.material = Material231;

Shape229.appearance = Appearance230;

let IndexedLineSet232 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet232.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet232.coordIndex = new MFInt32(new int[0,1]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[-0.1,0.93,0,-0.1,1,0]);
IndexedLineSet232.coord = Coordinate233;

Shape229.geometry = IndexedLineSet232;

HAnimSegment226.children[1] = Shape229;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint216.children[1] = HAnimJoint225;

HAnimJoint207.children[1] = HAnimJoint216;

HAnimJoint198.children[1] = HAnimJoint207;

HAnimJoint184.children[1] = HAnimJoint198;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint234.name = "l_carpometacarpal_5";
HAnimJoint234.center = new SFVec3f(new float[-0.15,0.17,0]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.DEF = "hanim_l_metacarpal_5";
HAnimSegment235.name = "l_metacarpal_5";
let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new SFVec3f(new float[-0.15,0.17,0]);
let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236.child = new undefined();

Transform236.child[0] = Shape237;

HAnimSegment235.children = new MFNode();

HAnimSegment235.children[0] = Transform236;

let Shape238 = browser.currentScene.createNode("Shape");
let Appearance239 = browser.currentScene.createNode("Appearance");
let Material240 = browser.currentScene.createNode("Material");
Material240.emissiveColor = new SFColor(new float[1,1,1]);
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

let IndexedLineSet241 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet241.DEF = "CMC5toMCP5";
IndexedLineSet241.coordIndex = new MFInt32(new int[0,1]);
let Coordinate242 = browser.currentScene.createNode("Coordinate");
Coordinate242.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet241.coord = Coordinate242;

Shape238.geometry = IndexedLineSet241;

HAnimSegment235.children[1] = Shape238;

HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint243.name = "l_metacarpophalangeal_5";
HAnimJoint243.center = new SFVec3f(new float[-0.2,0.4,0]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment244.name = "l_carpal_proximal_phalanx_5";
let Transform245 = browser.currentScene.createNode("Transform");
Transform245.translation = new SFVec3f(new float[-0.2,0.4,0]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = Transform245;

let Shape247 = browser.currentScene.createNode("Shape");
let Appearance248 = browser.currentScene.createNode("Appearance");
let Material249 = browser.currentScene.createNode("Material");
Material249.emissiveColor = new SFColor(new float[1,1,1]);
Appearance248.material = Material249;

Shape247.appearance = Appearance248;

let IndexedLineSet250 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet250.DEF = "MCP5toPIP5";
IndexedLineSet250.coordIndex = new MFInt32(new int[0,1]);
let Coordinate251 = browser.currentScene.createNode("Coordinate");
Coordinate251.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet250.coord = Coordinate251;

Shape247.geometry = IndexedLineSet250;

HAnimSegment244.children[1] = Shape247;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint252.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint252.center = new SFVec3f(new float[-0.23,0.63,0]);
let HAnimSegment253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment253.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimSegment253.name = "l_carpal_middle_phalanx_5";
let Transform254 = browser.currentScene.createNode("Transform");
Transform254.translation = new SFVec3f(new float[-0.23,0.63,0]);
let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "HAnimJointShape";
Transform254.child = new undefined();

Transform254.child[0] = Shape255;

HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = Transform254;

let Shape256 = browser.currentScene.createNode("Shape");
let Appearance257 = browser.currentScene.createNode("Appearance");
let Material258 = browser.currentScene.createNode("Material");
Material258.emissiveColor = new SFColor(new float[1,1,1]);
Appearance257.material = Material258;

Shape256.appearance = Appearance257;

let IndexedLineSet259 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet259.DEF = "PIP5toDIP5";
IndexedLineSet259.coordIndex = new MFInt32(new int[0,1]);
let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet259.coord = Coordinate260;

Shape256.geometry = IndexedLineSet259;

HAnimSegment253.children[1] = Shape256;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint261.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint261.center = new SFVec3f(new float[-0.25,0.79,0]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment262.name = "l_carpal_distal_phalanx_5";
let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new SFVec3f(new float[-0.25,0.79,0]);
let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "HAnimJointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment262.children = new MFNode();

HAnimSegment262.children[0] = Transform263;

let Shape265 = browser.currentScene.createNode("Shape");
let Appearance266 = browser.currentScene.createNode("Appearance");
let Material267 = browser.currentScene.createNode("Material");
Material267.emissiveColor = new SFColor(new float[1,1,1]);
Appearance266.material = Material267;

Shape265.appearance = Appearance266;

let IndexedLineSet268 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet268.DEF = "fingertip_l_carpal_distal_interphalangeal_5";
IndexedLineSet268.coordIndex = new MFInt32(new int[0,1]);
let Coordinate269 = browser.currentScene.createNode("Coordinate");
Coordinate269.point = new MFVec3f(new float[-0.25,0.79,0,-0.26,0.85,0]);
IndexedLineSet268.coord = Coordinate269;

Shape265.geometry = IndexedLineSet268;

HAnimSegment262.children[1] = Shape265;

HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

HAnimJoint252.children[1] = HAnimJoint261;

HAnimJoint243.children[1] = HAnimJoint252;

HAnimJoint234.children[1] = HAnimJoint243;

HAnimJoint184.children[2] = HAnimJoint234;

HAnimJoint28.children[4] = HAnimJoint184;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimJoint28;

HAnimHumanoid24.joints[1] = HAnimJoint27;

let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.USE = "hanim_l_capitate";
HAnimHumanoid24.segments[2] = HAnimSegment270;

let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_l_carpal";
HAnimHumanoid24.segments[3] = HAnimSegment271;

let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid24.segments[4] = HAnimSegment272;

let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid24.segments[5] = HAnimSegment273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid24.segments[6] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid24.segments[7] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid24.segments[8] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid24.segments[9] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid24.segments[10] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid24.segments[11] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid24.segments[12] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid24.segments[13] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid24.segments[14] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid24.segments[15] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid24.segments[16] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid24.segments[17] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_hamate";
HAnimHumanoid24.segments[18] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_metacarpal_1";
HAnimHumanoid24.segments[19] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_metacarpal_2";
HAnimHumanoid24.segments[20] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metacarpal_3";
HAnimHumanoid24.segments[21] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metacarpal_4";
HAnimHumanoid24.segments[22] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metacarpal_5";
HAnimHumanoid24.segments[23] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_trapezium";
HAnimHumanoid24.segments[24] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_trapezoid";
HAnimHumanoid24.segments[25] = HAnimSegment293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_humanoid_root";
HAnimHumanoid24.joints[26] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid24.joints[27] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid24.joints[28] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid24.joints[29] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid24.joints[30] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid24.joints[31] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid24.joints[32] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid24.joints[33] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid24.joints[34] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid24.joints[35] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid24.joints[36] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid24.joints[37] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid24.joints[38] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid24.joints[39] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid24.joints[40] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid24.joints[41] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid24.joints[42] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid24.joints[43] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid24.joints[44] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid24.joints[45] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_midcarpal_1";
HAnimHumanoid24.joints[46] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_midcarpal_2";
HAnimHumanoid24.joints[47] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_midcarpal_3";
HAnimHumanoid24.joints[48] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid24.joints[49] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_radiocarpal";
HAnimHumanoid24.joints[50] = HAnimJoint318;

browser.currentScene.children[1] = HAnimHumanoid24;


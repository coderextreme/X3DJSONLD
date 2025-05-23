let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnimModelHandLeft.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Left hand, using high-fidelity definitions for HAnim version 2.0";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "26 January 2015";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "23 December 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "TODO";
meta8.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2";
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
meta20.name = "TODO";
meta20.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "identifier";
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "generator";
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "license";
meta23.content = "../license.html";
head1.meta[21] = meta23;

head = head1;

let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new MFNode();

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
MetadataString28.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

HAnimHumanoid26.metadata = new SFNode();

HAnimHumanoid26.metadata[0] = MetadataSet27;

let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "humanoid_root";
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "l_radiocarpal";
HAnimJoint30.DEF = "hanim_l_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "l_carpal";
HAnimSegment31.DEF = "hanim_l_carpal";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "HAnimJointShape";
let Sphere34 = browser.currentScene.createNode("Sphere");
Sphere34.radius = 0.025;
Shape33.geometry = Sphere34;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "HAnimJointAppearanceBlue";
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0,0,1]);
Appearance35.material = Material36;

Shape33.appearance = Appearance35;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Transform32;

let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.emissiveColor = new SFColor(new float[1,1,1]);
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let IndexedLineSet40 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet40.DEF = "RCToMC12";
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1]);
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet40.coord = Coordinate41;

Shape37.geometry = IndexedLineSet40;

HAnimSegment31.children[1] = Shape37;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.emissiveColor = new SFColor(new float[1,1,1]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedLineSet45 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet45.DEF = "RCToMC3";
IndexedLineSet45.coordIndex = new MFInt32(new int[0,1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet45.coord = Coordinate46;

Shape42.geometry = IndexedLineSet45;

HAnimSegment31.children[2] = Shape42;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.DEF = "RCToMC45";
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment31.children[3] = Shape47;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

//MC1
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_midcarpal_1";
HAnimJoint52.DEF = "hanim_l_midcarpal_1";
HAnimJoint52.center = new SFVec3f(new float[0.14,0.09,0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "l_trapezium";
HAnimSegment53.DEF = "hanim_l_trapezium";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.14,0.09,0]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "HAnimNewJointShape";
let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.025;
Shape55.geometry = Sphere56;

let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.DEF = "HAnimJointAppearanceRed";
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,0,0]);
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "MC12toCMC1";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment53.children[1] = Shape59;

let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.emissiveColor = new SFColor(new float[1,1,1]);
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

let IndexedLineSet67 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet67.DEF = "MC1toCMC1";
IndexedLineSet67.coordIndex = new MFInt32(new int[0,1]);
let Coordinate68 = browser.currentScene.createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet67.coord = Coordinate68;

Shape64.geometry = IndexedLineSet67;

HAnimSegment53.children[2] = Shape64;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

//thumb finger
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_carpometacarpal_1";
HAnimJoint69.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint69.center = new SFVec3f(new float[0.2,0.15,0]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.name = "l_metacarpal_1";
HAnimSegment70.DEF = "hanim_l_metacarpal_1";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.2,0.15,0]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "HAnimJointShape";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

let Shape73 = browser.currentScene.createNode("Shape");
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.emissiveColor = new SFColor(new float[1,1,1]);
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

let IndexedLineSet76 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet76.DEF = "CMC1toMCP1";
IndexedLineSet76.coordIndex = new MFInt32(new int[0,1]);
let Coordinate77 = browser.currentScene.createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet76.coord = Coordinate77;

Shape73.geometry = IndexedLineSet76;

HAnimSegment70.children[1] = Shape73;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_metacarpophalangeal_1";
HAnimJoint78.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint78.center = new SFVec3f(new float[0.3,0.3,0]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "l_carpal_proximal_phalanx_1";
HAnimSegment79.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.3,0.3,0]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "HAnimJointShape";
Transform80.child = new undefined();

Transform80.child[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
let Material84 = browser.currentScene.createNode("Material");
Material84.emissiveColor = new SFColor(new float[1,1,1]);
Appearance83.material = Material84;

Shape82.appearance = Appearance83;

let IndexedLineSet85 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet85.DEF = "MCP11toIP1";
IndexedLineSet85.coordIndex = new MFInt32(new int[0,1]);
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet85.coord = Coordinate86;

Shape82.geometry = IndexedLineSet85;

HAnimSegment79.children[1] = Shape82;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_carpal_interphalangeal_1";
HAnimJoint87.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint87.center = new SFVec3f(new float[0.35,0.4,0]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.name = "l_carpal_distal_phalanx_1";
HAnimSegment88.DEF = "hanim_l_carpal_distal_phalanx_1";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new SFVec3f(new float[0.35,0.4,0]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimJointShape";
Transform89.child = new undefined();

Transform89.child[0] = Shape90;

HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = Transform89;

let Shape91 = browser.currentScene.createNode("Shape");
let Appearance92 = browser.currentScene.createNode("Appearance");
let Material93 = browser.currentScene.createNode("Material");
Material93.emissiveColor = new SFColor(new float[1,1,1]);
Appearance92.material = Material93;

Shape91.appearance = Appearance92;

let IndexedLineSet94 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet94.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet94.coordIndex = new MFInt32(new int[0,1]);
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0.35,0.4,0,0.36,0.45,0]);
IndexedLineSet94.coord = Coordinate95;

Shape91.geometry = IndexedLineSet94;

HAnimSegment88.children[1] = Shape91;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

HAnimJoint78.children[1] = HAnimJoint87;

HAnimJoint69.children[1] = HAnimJoint78;

HAnimJoint52.children[1] = HAnimJoint69;

HAnimJoint30.children[1] = HAnimJoint52;

//MC2
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_midcarpal_2";
HAnimJoint96.DEF = "hanim_l_midcarpal_2";
HAnimJoint96.center = new SFVec3f(new float[0.07,0.07,0]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "l_trapezoid";
HAnimSegment97.DEF = "hanim_l_trapezoid";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new SFVec3f(new float[0.07,0.07,0]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimNewJointShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

let Shape100 = browser.currentScene.createNode("Shape");
let Appearance101 = browser.currentScene.createNode("Appearance");
let Material102 = browser.currentScene.createNode("Material");
Material102.emissiveColor = new SFColor(new float[1,1,1]);
Appearance101.material = Material102;

Shape100.appearance = Appearance101;

let IndexedLineSet103 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet103.DEF = "MC2toCMC2";
IndexedLineSet103.coordIndex = new MFInt32(new int[0,1]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet103.coord = Coordinate104;

Shape100.geometry = IndexedLineSet103;

HAnimSegment97.children[1] = Shape100;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

//index finger
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "l_carpometacarpal_2";
HAnimJoint105.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint105.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment106.name = "l_metacarpal_2";
HAnimSegment106.DEF = "hanim_l_metacarpal_2";
let Transform107 = browser.currentScene.createNode("Transform");
Transform107.translation = new SFVec3f(new float[0.1,0.2,0]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107.child = new undefined();

Transform107.child[0] = Shape108;

HAnimSegment106.children = new MFNode();

HAnimSegment106.children[0] = Transform107;

let Shape109 = browser.currentScene.createNode("Shape");
let Appearance110 = browser.currentScene.createNode("Appearance");
let Material111 = browser.currentScene.createNode("Material");
Material111.emissiveColor = new SFColor(new float[1,1,1]);
Appearance110.material = Material111;

Shape109.appearance = Appearance110;

let IndexedLineSet112 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet112.DEF = "CMC2toMCP2";
IndexedLineSet112.coordIndex = new MFInt32(new int[0,1]);
let Coordinate113 = browser.currentScene.createNode("Coordinate");
Coordinate113.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet112.coord = Coordinate113;

Shape109.geometry = IndexedLineSet112;

HAnimSegment106.children[1] = Shape109;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "l_metacarpophalangeal_2";
HAnimJoint114.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint114.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment115.name = "l_carpal_proximal_phalanx_2";
HAnimSegment115.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.translation = new SFVec3f(new float[0.15,0.5,0]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "HAnimJointShape";
Transform116.child = new undefined();

Transform116.child[0] = Shape117;

HAnimSegment115.children = new MFNode();

HAnimSegment115.children[0] = Transform116;

let Shape118 = browser.currentScene.createNode("Shape");
let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.emissiveColor = new SFColor(new float[1,1,1]);
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

let IndexedLineSet121 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet121.DEF = "MCP2toPIP2";
IndexedLineSet121.coordIndex = new MFInt32(new int[0,1]);
let Coordinate122 = browser.currentScene.createNode("Coordinate");
Coordinate122.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet121.coord = Coordinate122;

Shape118.geometry = IndexedLineSet121;

HAnimSegment115.children[1] = Shape118;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimSegment115;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint123.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint123.center = new SFVec3f(new float[0.2,0.7,0]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "l_carpal_middle_phalanx_2";
HAnimSegment124.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new SFVec3f(new float[0.2,0.7,0]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimJointShape";
Transform125.child = new undefined();

Transform125.child[0] = Shape126;

HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = Transform125;

let Shape127 = browser.currentScene.createNode("Shape");
let Appearance128 = browser.currentScene.createNode("Appearance");
let Material129 = browser.currentScene.createNode("Material");
Material129.emissiveColor = new SFColor(new float[1,1,1]);
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

let IndexedLineSet130 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet130.DEF = "PIP2toDIP2";
IndexedLineSet130.coordIndex = new MFInt32(new int[0,1]);
let Coordinate131 = browser.currentScene.createNode("Coordinate");
Coordinate131.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet130.coord = Coordinate131;

Shape127.geometry = IndexedLineSet130;

HAnimSegment124.children[1] = Shape127;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint132.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint132.center = new SFVec3f(new float[0.24,0.87,0]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.name = "l_carpal_distal_phalanx_2";
HAnimSegment133.DEF = "hanim_l_carpal_distal_phalanx_2";
let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.24,0.87,0]);
let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimJointShape";
Transform134.child = new undefined();

Transform134.child[0] = Shape135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

let Shape136 = browser.currentScene.createNode("Shape");
let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
Material138.emissiveColor = new SFColor(new float[1,1,1]);
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

let IndexedLineSet139 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet139.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet139.coordIndex = new MFInt32(new int[0,1]);
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.24,0.87,0,0.26,0.93,0]);
IndexedLineSet139.coord = Coordinate140;

Shape136.geometry = IndexedLineSet139;

HAnimSegment133.children[1] = Shape136;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint123.children[1] = HAnimJoint132;

HAnimJoint114.children[1] = HAnimJoint123;

HAnimJoint105.children[1] = HAnimJoint114;

HAnimJoint96.children[1] = HAnimJoint105;

HAnimJoint30.children[2] = HAnimJoint96;

//MC3
let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_midcarpal_3";
HAnimJoint141.DEF = "hanim_l_midcarpal_3";
HAnimJoint141.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "l_capitate";
HAnimSegment142.DEF = "hanim_l_capitate";
let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[0,0.07,0]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "HAnimNewJointShape";
Transform143.child = new undefined();

Transform143.child[0] = Shape144;

HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = Transform143;

let Shape145 = browser.currentScene.createNode("Shape");
let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.emissiveColor = new SFColor(new float[1,1,1]);
Appearance146.material = Material147;

Shape145.appearance = Appearance146;

let IndexedLineSet148 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet148.DEF = "MC3toCMC3";
IndexedLineSet148.coordIndex = new MFInt32(new int[0,1]);
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet148.coord = Coordinate149;

Shape145.geometry = IndexedLineSet148;

HAnimSegment142.children[1] = Shape145;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

//Middle fingle
let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "l_carpometacarpal_3";
HAnimJoint150.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint150.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.name = "l_metacarpal_3";
HAnimSegment151.DEF = "hanim_l_metacarpal_3";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.translation = new SFVec3f(new float[0,0.2,0]);
let Shape153 = browser.currentScene.createNode("Shape");
Shape153.USE = "HAnimJointShape";
Transform152.child = new undefined();

Transform152.child[0] = Shape153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Material156.emissiveColor = new SFColor(new float[1,1,1]);
Appearance155.material = Material156;

Shape154.appearance = Appearance155;

let IndexedLineSet157 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet157.DEF = "CMC3toMCP3";
IndexedLineSet157.coordIndex = new MFInt32(new int[0,1]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet157.coord = Coordinate158;

Shape154.geometry = IndexedLineSet157;

HAnimSegment151.children[1] = Shape154;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_metacarpophalangeal_3";
HAnimJoint159.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint159.center = new SFVec3f(new float[0.03,0.5,0]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_carpal_proximal_phalanx_3";
HAnimSegment160.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform161 = browser.currentScene.createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.03,0.5,0]);
let Shape162 = browser.currentScene.createNode("Shape");
Shape162.USE = "HAnimJointShape";
Transform161.child = new undefined();

Transform161.child[0] = Shape162;

HAnimSegment160.children = new MFNode();

HAnimSegment160.children[0] = Transform161;

let Shape163 = browser.currentScene.createNode("Shape");
let Appearance164 = browser.currentScene.createNode("Appearance");
let Material165 = browser.currentScene.createNode("Material");
Material165.emissiveColor = new SFColor(new float[1,1,1]);
Appearance164.material = Material165;

Shape163.appearance = Appearance164;

let IndexedLineSet166 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet166.DEF = "MCP3toPIP3";
IndexedLineSet166.coordIndex = new MFInt32(new int[0,1]);
let Coordinate167 = browser.currentScene.createNode("Coordinate");
Coordinate167.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet166.coord = Coordinate167;

Shape163.geometry = IndexedLineSet166;

HAnimSegment160.children[1] = Shape163;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint168.center = new SFVec3f(new float[0.05,0.75,0]);
HAnimJoint168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint168.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.name = "l_carpal_middle_phalanx_3";
HAnimSegment169.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.05,0.75,0]);
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "HAnimJointShape";
Transform170.child = new undefined();

Transform170.child[0] = Shape171;

HAnimSegment169.children = new MFNode();

HAnimSegment169.children[0] = Transform170;

let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.emissiveColor = new SFColor(new float[1,1,1]);
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

let IndexedLineSet175 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet175.DEF = "PIP3toDIP3";
IndexedLineSet175.coordIndex = new MFInt32(new int[0,1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet175.coord = Coordinate176;

Shape172.geometry = IndexedLineSet175;

HAnimSegment169.children[1] = Shape172;

HAnimJoint168.children = new MFNode();

HAnimJoint168.children[0] = HAnimSegment169;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint177.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint177.center = new SFVec3f(new float[0.08,0.96,0]);
HAnimJoint177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint177.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.name = "l_carpal_distal_phalanx_3";
HAnimSegment178.DEF = "hanim_l_carpal_distal_phalanx_3";
let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new SFVec3f(new float[0.08,0.96,0]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.child = new undefined();

Transform179.child[0] = Shape180;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Transform179;

let Shape181 = browser.currentScene.createNode("Shape");
let Appearance182 = browser.currentScene.createNode("Appearance");
let Material183 = browser.currentScene.createNode("Material");
Material183.emissiveColor = new SFColor(new float[1,1,1]);
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

let IndexedLineSet184 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet184.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet184.coordIndex = new MFInt32(new int[0,1]);
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.08,0.96,0,0.09,1.05,0]);
IndexedLineSet184.coord = Coordinate185;

Shape181.geometry = IndexedLineSet184;

HAnimSegment178.children[1] = Shape181;

HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimSegment178;

HAnimJoint168.children[1] = HAnimJoint177;

HAnimJoint159.children[1] = HAnimJoint168;

HAnimJoint150.children[1] = HAnimJoint159;

HAnimJoint141.children[1] = HAnimJoint150;

HAnimJoint30.children[3] = HAnimJoint141;

//MC45
let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "l_midcarpal_4_5";
HAnimJoint186.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint186.center = new SFVec3f(new float[-0.1,0.1,0]);
HAnimJoint186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint186.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.name = "l_hamate";
HAnimSegment187.DEF = "hanim_l_hamate";
let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "HAnimNewJointShape";
Transform188.child = new undefined();

Transform188.child[0] = Shape189;

HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = Transform188;

let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.emissiveColor = new SFColor(new float[1,1,1]);
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

let IndexedLineSet193 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC4";
IndexedLineSet193.coordIndex = new MFInt32(new int[0,1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet193.coord = Coordinate194;

Shape190.geometry = IndexedLineSet193;

HAnimSegment187.children[1] = Shape190;

let Shape195 = browser.currentScene.createNode("Shape");
let Appearance196 = browser.currentScene.createNode("Appearance");
let Material197 = browser.currentScene.createNode("Material");
Material197.emissiveColor = new SFColor(new float[1,1,1]);
Appearance196.material = Material197;

Shape195.appearance = Appearance196;

let IndexedLineSet198 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet198.DEF = "MC45toCMC5";
IndexedLineSet198.coordIndex = new MFInt32(new int[0,1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet198.coord = Coordinate199;

Shape195.geometry = IndexedLineSet198;

HAnimSegment187.children[2] = Shape195;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

//ring finger
let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.name = "l_carpometacarpal_4";
HAnimJoint200.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint200.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint200.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint200.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.name = "l_metacarpal_4";
HAnimSegment201.DEF = "hanim_l_metacarpal_4";
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "HAnimJointShape";
Transform202.child = new undefined();

Transform202.child[0] = Shape203;

HAnimSegment201.children = new MFNode();

HAnimSegment201.children[0] = Transform202;

let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.emissiveColor = new SFColor(new float[1,1,1]);
Appearance205.material = Material206;

Shape204.appearance = Appearance205;

let IndexedLineSet207 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet207.DEF = "CMC4toMCP4";
IndexedLineSet207.coordIndex = new MFInt32(new int[0,1]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet207.coord = Coordinate208;

Shape204.geometry = IndexedLineSet207;

HAnimSegment201.children[1] = Shape204;

HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.name = "l_metacarpophalangeal_4";
HAnimJoint209.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint209.center = new SFVec3f(new float[-0.1,0.47,0]);
HAnimJoint209.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint209.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.name = "l_carpal_proximal_phalanx_4";
HAnimSegment210.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new SFVec3f(new float[-0.1,0.47,0]);
let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimJointShape";
Transform211.child = new undefined();

Transform211.child[0] = Shape212;

HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = Transform211;

let Shape213 = browser.currentScene.createNode("Shape");
let Appearance214 = browser.currentScene.createNode("Appearance");
let Material215 = browser.currentScene.createNode("Material");
Material215.emissiveColor = new SFColor(new float[1,1,1]);
Appearance214.material = Material215;

Shape213.appearance = Appearance214;

let IndexedLineSet216 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet216.DEF = "MCP4toPIP4";
IndexedLineSet216.coordIndex = new MFInt32(new int[0,1]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet216.coord = Coordinate217;

Shape213.geometry = IndexedLineSet216;

HAnimSegment210.children[1] = Shape213;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint218.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint218.center = new SFVec3f(new float[-0.1,0.7,0]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_carpal_middle_phalanx_4";
HAnimSegment219.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new SFVec3f(new float[-0.1,0.7,0]);
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.child = new undefined();

Transform220.child[0] = Shape221;

HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = Transform220;

let Shape222 = browser.currentScene.createNode("Shape");
let Appearance223 = browser.currentScene.createNode("Appearance");
let Material224 = browser.currentScene.createNode("Material");
Material224.emissiveColor = new SFColor(new float[1,1,1]);
Appearance223.material = Material224;

Shape222.appearance = Appearance223;

let IndexedLineSet225 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet225.DEF = "PIP4toDIP4";
IndexedLineSet225.coordIndex = new MFInt32(new int[0,1]);
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet225.coord = Coordinate226;

Shape222.geometry = IndexedLineSet225;

HAnimSegment219.children[1] = Shape222;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint227.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint227.center = new SFVec3f(new float[-0.1,0.93,0]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_carpal_distal_phalanx_4";
HAnimSegment228.DEF = "hanim_l_carpal_distal_phalanx_4";
let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new SFVec3f(new float[-0.1,0.93,0]);
let Shape230 = browser.currentScene.createNode("Shape");
Shape230.USE = "HAnimJointShape";
Transform229.child = new undefined();

Transform229.child[0] = Shape230;

HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = Transform229;

let Shape231 = browser.currentScene.createNode("Shape");
let Appearance232 = browser.currentScene.createNode("Appearance");
let Material233 = browser.currentScene.createNode("Material");
Material233.emissiveColor = new SFColor(new float[1,1,1]);
Appearance232.material = Material233;

Shape231.appearance = Appearance232;

let IndexedLineSet234 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet234.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet234.coordIndex = new MFInt32(new int[0,1]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[-0.1,0.93,0,-0.1,1,0]);
IndexedLineSet234.coord = Coordinate235;

Shape231.geometry = IndexedLineSet234;

HAnimSegment228.children[1] = Shape231;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint218.children[1] = HAnimJoint227;

HAnimJoint209.children[1] = HAnimJoint218;

HAnimJoint200.children[1] = HAnimJoint209;

HAnimJoint186.children[1] = HAnimJoint200;

//pinky finger
let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_carpometacarpal_5";
HAnimJoint236.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint236.center = new SFVec3f(new float[-0.15,0.17,0]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.name = "l_metacarpal_5";
HAnimSegment237.DEF = "hanim_l_metacarpal_5";
let Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new SFVec3f(new float[-0.15,0.17,0]);
let Shape239 = browser.currentScene.createNode("Shape");
Shape239.USE = "HAnimJointShape";
Transform238.child = new undefined();

Transform238.child[0] = Shape239;

HAnimSegment237.children = new MFNode();

HAnimSegment237.children[0] = Transform238;

let Shape240 = browser.currentScene.createNode("Shape");
let Appearance241 = browser.currentScene.createNode("Appearance");
let Material242 = browser.currentScene.createNode("Material");
Material242.emissiveColor = new SFColor(new float[1,1,1]);
Appearance241.material = Material242;

Shape240.appearance = Appearance241;

let IndexedLineSet243 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet243.DEF = "CMC5toMCP5";
IndexedLineSet243.coordIndex = new MFInt32(new int[0,1]);
let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet243.coord = Coordinate244;

Shape240.geometry = IndexedLineSet243;

HAnimSegment237.children[1] = Shape240;

HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.name = "l_metacarpophalangeal_5";
HAnimJoint245.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint245.center = new SFVec3f(new float[-0.2,0.4,0]);
HAnimJoint245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint245.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment246.name = "l_carpal_proximal_phalanx_5";
HAnimSegment246.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new SFVec3f(new float[-0.2,0.4,0]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "HAnimJointShape";
Transform247.child = new undefined();

Transform247.child[0] = Shape248;

HAnimSegment246.children = new MFNode();

HAnimSegment246.children[0] = Transform247;

let Shape249 = browser.currentScene.createNode("Shape");
let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Material251.emissiveColor = new SFColor(new float[1,1,1]);
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

let IndexedLineSet252 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet252.DEF = "MCP5toPIP5";
IndexedLineSet252.coordIndex = new MFInt32(new int[0,1]);
let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet252.coord = Coordinate253;

Shape249.geometry = IndexedLineSet252;

HAnimSegment246.children[1] = Shape249;

HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint254.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint254.center = new SFVec3f(new float[-0.23,0.63,0]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment255.name = "l_carpal_middle_phalanx_5";
HAnimSegment255.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new SFVec3f(new float[-0.23,0.63,0]);
let Shape257 = browser.currentScene.createNode("Shape");
Shape257.USE = "HAnimJointShape";
Transform256.child = new undefined();

Transform256.child[0] = Shape257;

HAnimSegment255.children = new MFNode();

HAnimSegment255.children[0] = Transform256;

let Shape258 = browser.currentScene.createNode("Shape");
let Appearance259 = browser.currentScene.createNode("Appearance");
let Material260 = browser.currentScene.createNode("Material");
Material260.emissiveColor = new SFColor(new float[1,1,1]);
Appearance259.material = Material260;

Shape258.appearance = Appearance259;

let IndexedLineSet261 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet261.DEF = "PIP5toDIP5";
IndexedLineSet261.coordIndex = new MFInt32(new int[0,1]);
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet261.coord = Coordinate262;

Shape258.geometry = IndexedLineSet261;

HAnimSegment255.children[1] = Shape258;

HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint263.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint263.center = new SFVec3f(new float[-0.25,0.79,0]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.name = "l_carpal_distal_phalanx_5";
HAnimSegment264.DEF = "hanim_l_carpal_distal_phalanx_5";
let Transform265 = browser.currentScene.createNode("Transform");
Transform265.translation = new SFVec3f(new float[-0.25,0.79,0]);
let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimJointShape";
Transform265.child = new undefined();

Transform265.child[0] = Shape266;

HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = Transform265;

let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
let Material269 = browser.currentScene.createNode("Material");
Material269.emissiveColor = new SFColor(new float[1,1,1]);
Appearance268.material = Material269;

Shape267.appearance = Appearance268;

let IndexedLineSet270 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet270.DEF = "fingertip_l_carpal_distal_interphalangeal_5";
IndexedLineSet270.coordIndex = new MFInt32(new int[0,1]);
let Coordinate271 = browser.currentScene.createNode("Coordinate");
Coordinate271.point = new MFVec3f(new float[-0.25,0.79,0,-0.26,0.85,0]);
IndexedLineSet270.coord = Coordinate271;

Shape267.geometry = IndexedLineSet270;

HAnimSegment264.children[1] = Shape267;

HAnimJoint263.children = new MFNode();

HAnimJoint263.children[0] = HAnimSegment264;

HAnimJoint254.children[1] = HAnimJoint263;

HAnimJoint245.children[1] = HAnimJoint254;

HAnimJoint236.children[1] = HAnimJoint245;

HAnimJoint186.children[2] = HAnimJoint236;

HAnimJoint30.children[4] = HAnimJoint186;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimJoint30;

HAnimHumanoid26.joints[1] = HAnimJoint29;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[2] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid26.joints[3] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid26.joints[4] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid26.joints[5] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid26.joints[6] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid26.joints[7] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[8] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[9] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[10] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid26.joints[11] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid26.joints[12] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid26.joints[13] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid26.joints[14] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid26.joints[15] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid26.joints[16] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid26.joints[17] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid26.joints[18] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid26.joints[19] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid26.joints[20] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid26.joints[21] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_midcarpal_1";
HAnimHumanoid26.joints[22] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_midcarpal_2";
HAnimHumanoid26.joints[23] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_midcarpal_3";
HAnimHumanoid26.joints[24] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid26.joints[25] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_radiocarpal";
HAnimHumanoid26.joints[26] = HAnimJoint296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_capitate";
HAnimHumanoid26.segments[27] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_carpal";
HAnimHumanoid26.segments[28] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid26.segments[29] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid26.segments[30] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid26.segments[31] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid26.segments[32] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid26.segments[33] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid26.segments[34] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid26.segments[35] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid26.segments[36] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid26.segments[37] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid26.segments[38] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid26.segments[39] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid26.segments[40] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid26.segments[41] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid26.segments[42] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_l_hamate";
HAnimHumanoid26.segments[43] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_l_metacarpal_1";
HAnimHumanoid26.segments[44] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_l_metacarpal_2";
HAnimHumanoid26.segments[45] = HAnimSegment315;

let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_l_metacarpal_3";
HAnimHumanoid26.segments[46] = HAnimSegment316;

let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_l_metacarpal_4";
HAnimHumanoid26.segments[47] = HAnimSegment317;

let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_l_metacarpal_5";
HAnimHumanoid26.segments[48] = HAnimSegment318;

let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_l_trapezium";
HAnimHumanoid26.segments[49] = HAnimSegment319;

let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_l_trapezoid";
HAnimHumanoid26.segments[50] = HAnimSegment320;

browser.currentScene.children[1] = HAnimHumanoid26;


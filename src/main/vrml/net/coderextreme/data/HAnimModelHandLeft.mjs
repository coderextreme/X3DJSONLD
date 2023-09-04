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
meta6.content = "23 December 2021";
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

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "generator";
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[19] = meta21;

let component22 = browser.currentScene.createNode("component");
component22.name = "HAnim";
component22.level = 1;
head1.component[20] = component22;

head = head1;

let WorldInfo24 = browser.currentScene.createNode("WorldInfo");
WorldInfo24.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo24;

let HAnimHumanoid25 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid25.DEF = "hanim_Hand_Left";
HAnimHumanoid25.version = "2.0";
HAnimHumanoid25.name = "Hand_Left";
HAnimHumanoid25.loa = 4;
let MetadataSet26 = browser.currentScene.createNode("MetadataSet");
MetadataSet26.name = "HAnimHumanoid.info";
MetadataSet26.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString27 = browser.currentScene.createNode("MetadataString");
MetadataString27.name = "authorName";
MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataString27;

HAnimHumanoid25.metadata = new SFNode();

HAnimHumanoid25.metadata[0] = MetadataSet26;

let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.DEF = "hanim_humanoid_root";
HAnimJoint28.name = "humanoid_root";
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.DEF = "hanim_l_radiocarpal";
HAnimJoint29.description = "connection joint of hand to leg above";
HAnimJoint29.name = "l_radiocarpal";
let HAnimSegment30 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment30.DEF = "hanim_l_carpal";
HAnimSegment30.name = "l_carpal";
let Transform31 = browser.currentScene.createNode("Transform");
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.DEF = "HAnimJointShape";
let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearanceBlue";
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,0,1]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 0.025;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

HAnimSegment30.children = new MFNode();

HAnimSegment30.children[0] = Transform31;

let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.emissiveColor = new SFColor(new float[1,1,1]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let IndexedLineSet39 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet39.DEF = "RCToMC12";
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet39.coord = Coordinate40;

Shape36.geometry = IndexedLineSet39;

HAnimSegment30.children[1] = Shape36;

let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.emissiveColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let IndexedLineSet44 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet44.DEF = "RCToMC3";
IndexedLineSet44.coordIndex = new MFInt32(new int[0,1]);
let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet44.coord = Coordinate45;

Shape41.geometry = IndexedLineSet44;

HAnimSegment30.children[2] = Shape41;

let Shape46 = browser.currentScene.createNode("Shape");
let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.emissiveColor = new SFColor(new float[1,1,1]);
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

let IndexedLineSet49 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet49.DEF = "RCToMC45";
IndexedLineSet49.coordIndex = new MFInt32(new int[0,1]);
let Coordinate50 = browser.currentScene.createNode("Coordinate");
Coordinate50.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet49.coord = Coordinate50;

Shape46.geometry = IndexedLineSet49;

HAnimSegment30.children[3] = Shape46;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.DEF = "hanim_l_midcarpal_1";
HAnimJoint51.name = "l_midcarpal_1";
HAnimJoint51.center = new SFVec3f(new float[0.14,0.09,0]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.DEF = "hanim_l_trapezium";
HAnimSegment52.name = "l_trapezium";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.14,0.09,0]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.DEF = "HAnimNewJointShape";
let Appearance55 = browser.currentScene.createNode("Appearance");
Appearance55.DEF = "HAnimJointAppearanceRed";
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new SFColor(new float[1,0,0]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let Sphere57 = browser.currentScene.createNode("Sphere");
Sphere57.radius = 0.025;
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment52.children = new MFNode();

HAnimSegment52.children[0] = Transform53;

let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.emissiveColor = new SFColor(new float[1,1,1]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let IndexedLineSet61 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet61.DEF = "MC12toCMC1";
IndexedLineSet61.coordIndex = new MFInt32(new int[0,1]);
let Coordinate62 = browser.currentScene.createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet61.coord = Coordinate62;

Shape58.geometry = IndexedLineSet61;

HAnimSegment52.children[1] = Shape58;

let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.emissiveColor = new SFColor(new float[1,1,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let IndexedLineSet66 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet66.DEF = "MC1toCMC1";
IndexedLineSet66.coordIndex = new MFInt32(new int[0,1]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet66.coord = Coordinate67;

Shape63.geometry = IndexedLineSet66;

HAnimSegment52.children[2] = Shape63;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint68.name = "l_carpometacarpal_1";
HAnimJoint68.center = new SFVec3f(new float[0.2,0.15,0]);
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.DEF = "hanim_l_metacarpal_1";
HAnimSegment69.name = "l_metacarpal_1";
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new SFVec3f(new float[0.2,0.15,0]);
let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimJointShape";
Transform70.child = new undefined();

Transform70.child[0] = Shape71;

HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = Transform70;

let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.emissiveColor = new SFColor(new float[1,1,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let IndexedLineSet75 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet75.DEF = "CMC1toMCP1";
IndexedLineSet75.coordIndex = new MFInt32(new int[0,1]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet75.coord = Coordinate76;

Shape72.geometry = IndexedLineSet75;

HAnimSegment69.children[1] = Shape72;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint77.name = "l_metacarpophalangeal_1";
HAnimJoint77.center = new SFVec3f(new float[0.3,0.3,0]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment78.name = "l_carpal_proximal_phalanx_1";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[0.3,0.3,0]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimJointShape";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

let Shape81 = browser.currentScene.createNode("Shape");
let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.emissiveColor = new SFColor(new float[1,1,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

let IndexedLineSet84 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet84.DEF = "MCP11toIP1";
IndexedLineSet84.coordIndex = new MFInt32(new int[0,1]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet84.coord = Coordinate85;

Shape81.geometry = IndexedLineSet84;

HAnimSegment78.children[1] = Shape81;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint86.name = "l_carpal_interphalangeal_1";
HAnimJoint86.center = new SFVec3f(new float[0.35,0.4,0]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment87.name = "l_carpal_distal_phalanx_1";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new SFVec3f(new float[0.35,0.4,0]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "HAnimJointShape";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = Transform88;

let Shape90 = browser.currentScene.createNode("Shape");
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.emissiveColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let IndexedLineSet93 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet93.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet93.coordIndex = new MFInt32(new int[0,1]);
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0.35,0.4,0,0.36,0.45,0]);
IndexedLineSet93.coord = Coordinate94;

Shape90.geometry = IndexedLineSet93;

HAnimSegment87.children[1] = Shape90;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

HAnimJoint77.children[1] = HAnimJoint86;

HAnimJoint68.children[1] = HAnimJoint77;

HAnimJoint51.children[1] = HAnimJoint68;

HAnimJoint29.children[1] = HAnimJoint51;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_l_midcarpal_2";
HAnimJoint95.name = "l_midcarpal_2";
HAnimJoint95.center = new SFVec3f(new float[0.07,0.07,0]);
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_l_trapezoid";
HAnimSegment96.name = "l_trapezoid";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new SFVec3f(new float[0.07,0.07,0]);
let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "HAnimNewJointShape";
Transform97.child = new undefined();

Transform97.child[0] = Shape98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

let Shape99 = browser.currentScene.createNode("Shape");
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.emissiveColor = new SFColor(new float[1,1,1]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

let IndexedLineSet102 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet102.DEF = "MC2toCMC2";
IndexedLineSet102.coordIndex = new MFInt32(new int[0,1]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet102.coord = Coordinate103;

Shape99.geometry = IndexedLineSet102;

HAnimSegment96.children[1] = Shape99;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint104.name = "l_carpometacarpal_2";
HAnimJoint104.center = new SFVec3f(new float[0.1,0.2,0]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.DEF = "hanim_l_metacarpal_2";
HAnimSegment105.name = "l_metacarpal_2";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0.1,0.2,0]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "HAnimJointShape";
Transform106.child = new undefined();

Transform106.child[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

let Shape108 = browser.currentScene.createNode("Shape");
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.emissiveColor = new SFColor(new float[1,1,1]);
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

let IndexedLineSet111 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet111.DEF = "CMC2toMCP2";
IndexedLineSet111.coordIndex = new MFInt32(new int[0,1]);
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet111.coord = Coordinate112;

Shape108.geometry = IndexedLineSet111;

HAnimSegment105.children[1] = Shape108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint113.name = "l_metacarpophalangeal_2";
HAnimJoint113.center = new SFVec3f(new float[0.15,0.5,0]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment114.name = "l_carpal_proximal_phalanx_2";
let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[0.15,0.5,0]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimJointShape";
Transform115.child = new undefined();

Transform115.child[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

let Shape117 = browser.currentScene.createNode("Shape");
let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.emissiveColor = new SFColor(new float[1,1,1]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

let IndexedLineSet120 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet120.DEF = "MCP2toPIP2";
IndexedLineSet120.coordIndex = new MFInt32(new int[0,1]);
let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet120.coord = Coordinate121;

Shape117.geometry = IndexedLineSet120;

HAnimSegment114.children[1] = Shape117;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint122.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint122.center = new SFVec3f(new float[0.2,0.7,0]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment123.name = "l_carpal_middle_phalanx_2";
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new SFVec3f(new float[0.2,0.7,0]);
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimJointShape";
Transform124.child = new undefined();

Transform124.child[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Material128.emissiveColor = new SFColor(new float[1,1,1]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let IndexedLineSet129 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet129.DEF = "PIP2toDIP2";
IndexedLineSet129.coordIndex = new MFInt32(new int[0,1]);
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet129.coord = Coordinate130;

Shape126.geometry = IndexedLineSet129;

HAnimSegment123.children[1] = Shape126;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint131.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint131.center = new SFVec3f(new float[0.24,0.87,0]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment132.name = "l_carpal_distal_phalanx_2";
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[0.24,0.87,0]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimJointShape";
Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

let Shape135 = browser.currentScene.createNode("Shape");
let Appearance136 = browser.currentScene.createNode("Appearance");
let Material137 = browser.currentScene.createNode("Material");
Material137.emissiveColor = new SFColor(new float[1,1,1]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

let IndexedLineSet138 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet138.DEF = "fingertip_l_carpal_distal_interphalangeal_1";
IndexedLineSet138.coordIndex = new MFInt32(new int[0,1]);
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[0.24,0.87,0,0.26,0.93,0]);
IndexedLineSet138.coord = Coordinate139;

Shape135.geometry = IndexedLineSet138;

HAnimSegment132.children[1] = Shape135;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

HAnimJoint122.children[1] = HAnimJoint131;

HAnimJoint113.children[1] = HAnimJoint122;

HAnimJoint104.children[1] = HAnimJoint113;

HAnimJoint95.children[1] = HAnimJoint104;

HAnimJoint29.children[2] = HAnimJoint95;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_l_midcarpal_3";
HAnimJoint140.name = "l_midcarpal_3";
HAnimJoint140.center = new SFVec3f(new float[0,0.07,0]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_l_capitate";
HAnimSegment141.name = "l_capitate";
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new SFVec3f(new float[0,0.07,0]);
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimNewJointShape";
Transform142.child = new undefined();

Transform142.child[0] = Shape143;

HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = Transform142;

let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.emissiveColor = new SFColor(new float[1,1,1]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

let IndexedLineSet147 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet147.DEF = "MC3toCMC3";
IndexedLineSet147.coordIndex = new MFInt32(new int[0,1]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

HAnimSegment141.children[1] = Shape144;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint149.name = "l_carpometacarpal_3";
HAnimJoint149.center = new SFVec3f(new float[0,0.2,0]);
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_l_metacarpal_3";
HAnimSegment150.name = "l_metacarpal_3";
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new SFVec3f(new float[0,0.2,0]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "HAnimJointShape";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.emissiveColor = new SFColor(new float[1,1,1]);
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let IndexedLineSet156 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet156.DEF = "CMC3toMCP3";
IndexedLineSet156.coordIndex = new MFInt32(new int[0,1]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet156.coord = Coordinate157;

Shape153.geometry = IndexedLineSet156;

HAnimSegment150.children[1] = Shape153;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint158.name = "l_metacarpophalangeal_3";
HAnimJoint158.center = new SFVec3f(new float[0.03,0.5,0]);
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment159.name = "l_carpal_proximal_phalanx_3";
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.03,0.5,0]);
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimJointShape";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Transform160;

let Shape162 = browser.currentScene.createNode("Shape");
let Appearance163 = browser.currentScene.createNode("Appearance");
let Material164 = browser.currentScene.createNode("Material");
Material164.emissiveColor = new SFColor(new float[1,1,1]);
Appearance163.material = Material164;

Shape162.appearance = Appearance163;

let IndexedLineSet165 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet165.DEF = "MCP3toPIP3";
IndexedLineSet165.coordIndex = new MFInt32(new int[0,1]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet165.coord = Coordinate166;

Shape162.geometry = IndexedLineSet165;

HAnimSegment159.children[1] = Shape162;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint167.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint167.center = new SFVec3f(new float[0.05,0.75,0]);
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment168.name = "l_carpal_middle_phalanx_3";
let Transform169 = browser.currentScene.createNode("Transform");
Transform169.translation = new SFVec3f(new float[0.05,0.75,0]);
let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimJointShape";
Transform169.child = new undefined();

Transform169.child[0] = Shape170;

HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = Transform169;

let Shape171 = browser.currentScene.createNode("Shape");
let Appearance172 = browser.currentScene.createNode("Appearance");
let Material173 = browser.currentScene.createNode("Material");
Material173.emissiveColor = new SFColor(new float[1,1,1]);
Appearance172.material = Material173;

Shape171.appearance = Appearance172;

let IndexedLineSet174 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet174.DEF = "PIP3toDIP3";
IndexedLineSet174.coordIndex = new MFInt32(new int[0,1]);
let Coordinate175 = browser.currentScene.createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet174.coord = Coordinate175;

Shape171.geometry = IndexedLineSet174;

HAnimSegment168.children[1] = Shape171;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint176.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint176.center = new SFVec3f(new float[0.08,0.96,0]);
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment177.name = "l_carpal_distal_phalanx_3";
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.08,0.96,0]);
let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "HAnimJointShape";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

let Shape180 = browser.currentScene.createNode("Shape");
let Appearance181 = browser.currentScene.createNode("Appearance");
let Material182 = browser.currentScene.createNode("Material");
Material182.emissiveColor = new SFColor(new float[1,1,1]);
Appearance181.material = Material182;

Shape180.appearance = Appearance181;

let IndexedLineSet183 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet183.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet183.coordIndex = new MFInt32(new int[0,1]);
let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new MFVec3f(new float[0.08,0.96,0,0.09,1.05,0]);
IndexedLineSet183.coord = Coordinate184;

Shape180.geometry = IndexedLineSet183;

HAnimSegment177.children[1] = Shape180;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint167.children[1] = HAnimJoint176;

HAnimJoint158.children[1] = HAnimJoint167;

HAnimJoint149.children[1] = HAnimJoint158;

HAnimJoint140.children[1] = HAnimJoint149;

HAnimJoint29.children[3] = HAnimJoint140;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_midcarpal_4_1";
HAnimJoint185.name = "l_midcarpal_4_5";
HAnimJoint185.center = new SFVec3f(new float[-0.1,0.1,0]);
let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_hamate";
HAnimSegment186.name = "l_hamate";
let Transform187 = browser.currentScene.createNode("Transform");
Transform187.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape188 = browser.currentScene.createNode("Shape");
Shape188.USE = "HAnimNewJointShape";
Transform187.child = new undefined();

Transform187.child[0] = Shape188;

HAnimSegment186.children = new MFNode();

HAnimSegment186.children[0] = Transform187;

let Shape189 = browser.currentScene.createNode("Shape");
let Appearance190 = browser.currentScene.createNode("Appearance");
let Material191 = browser.currentScene.createNode("Material");
Material191.emissiveColor = new SFColor(new float[1,1,1]);
Appearance190.material = Material191;

Shape189.appearance = Appearance190;

let IndexedLineSet192 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet192.DEF = "MC45toCMC4";
IndexedLineSet192.coordIndex = new MFInt32(new int[0,1]);
let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet192.coord = Coordinate193;

Shape189.geometry = IndexedLineSet192;

HAnimSegment186.children[1] = Shape189;

let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.DEF = "MC45toCMC5";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment186.children[2] = Shape194;

HAnimJoint185.children = new MFNode();

HAnimJoint185.children[0] = HAnimSegment186;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint199.name = "l_carpometacarpal_4";
HAnimJoint199.center = new SFVec3f(new float[-0.1,0.2,0]);
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.DEF = "hanim_l_metacarpal_4";
HAnimSegment200.name = "l_metacarpal_4";
let Transform201 = browser.currentScene.createNode("Transform");
Transform201.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.child = new undefined();

Transform201.child[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

let Shape203 = browser.currentScene.createNode("Shape");
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

let IndexedLineSet206 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet206.DEF = "CMC4toMCP4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint208.name = "l_metacarpophalangeal_4";
HAnimJoint208.center = new SFVec3f(new float[-0.1,0.47,0]);
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment209.name = "l_carpal_proximal_phalanx_4";
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new SFVec3f(new float[-0.1,0.47,0]);
let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform210.child = new undefined();

Transform210.child[0] = Shape211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.emissiveColor = new SFColor(new float[1,1,1]);
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

let IndexedLineSet215 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet215.DEF = "MCP4toPIP4";
IndexedLineSet215.coordIndex = new MFInt32(new int[0,1]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet215.coord = Coordinate216;

Shape212.geometry = IndexedLineSet215;

HAnimSegment209.children[1] = Shape212;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint217.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint217.center = new SFVec3f(new float[-0.1,0.7,0]);
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment218.name = "l_carpal_middle_phalanx_4";
let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new SFVec3f(new float[-0.1,0.7,0]);
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

let Shape221 = browser.currentScene.createNode("Shape");
let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
Material223.emissiveColor = new SFColor(new float[1,1,1]);
Appearance222.material = Material223;

Shape221.appearance = Appearance222;

let IndexedLineSet224 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet224.DEF = "PIP4toDIP4";
IndexedLineSet224.coordIndex = new MFInt32(new int[0,1]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet224.coord = Coordinate225;

Shape221.geometry = IndexedLineSet224;

HAnimSegment218.children[1] = Shape221;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint226.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint226.center = new SFVec3f(new float[-0.1,0.93,0]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment227.name = "l_carpal_distal_phalanx_4";
let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new SFVec3f(new float[-0.1,0.93,0]);
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.child = new undefined();

Transform228.child[0] = Shape229;

HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = Transform228;

let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.emissiveColor = new SFColor(new float[1,1,1]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

let IndexedLineSet233 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet233.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet233.coordIndex = new MFInt32(new int[0,1]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[-0.1,0.93,0,-0.1,1,0]);
IndexedLineSet233.coord = Coordinate234;

Shape230.geometry = IndexedLineSet233;

HAnimSegment227.children[1] = Shape230;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

HAnimJoint217.children[1] = HAnimJoint226;

HAnimJoint208.children[1] = HAnimJoint217;

HAnimJoint199.children[1] = HAnimJoint208;

HAnimJoint185.children[1] = HAnimJoint199;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint235.name = "l_carpometacarpal_5";
HAnimJoint235.center = new SFVec3f(new float[-0.15,0.17,0]);
let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.DEF = "hanim_l_metacarpal_5";
HAnimSegment236.name = "l_metacarpal_5";
let Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = new SFVec3f(new float[-0.15,0.17,0]);
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimJointShape";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

HAnimSegment236.children = new MFNode();

HAnimSegment236.children[0] = Transform237;

let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.emissiveColor = new SFColor(new float[1,1,1]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

let IndexedLineSet242 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet242.DEF = "CMC5toMCP5";
IndexedLineSet242.coordIndex = new MFInt32(new int[0,1]);
let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet242.coord = Coordinate243;

Shape239.geometry = IndexedLineSet242;

HAnimSegment236.children[1] = Shape239;

HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint244.name = "l_metacarpophalangeal_5";
HAnimJoint244.center = new SFVec3f(new float[-0.2,0.4,0]);
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment245.name = "l_carpal_proximal_phalanx_5";
let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new SFVec3f(new float[-0.2,0.4,0]);
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.child = new undefined();

Transform246.child[0] = Shape247;

HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = Transform246;

let Shape248 = browser.currentScene.createNode("Shape");
let Appearance249 = browser.currentScene.createNode("Appearance");
let Material250 = browser.currentScene.createNode("Material");
Material250.emissiveColor = new SFColor(new float[1,1,1]);
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

let IndexedLineSet251 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet251.DEF = "MCP5toPIP5";
IndexedLineSet251.coordIndex = new MFInt32(new int[0,1]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet251.coord = Coordinate252;

Shape248.geometry = IndexedLineSet251;

HAnimSegment245.children[1] = Shape248;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint253.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint253.center = new SFVec3f(new float[-0.23,0.63,0]);
let HAnimSegment254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment254.name = "l_carpal_middle_phalanx_5";
let Transform255 = browser.currentScene.createNode("Transform");
Transform255.translation = new SFVec3f(new float[-0.23,0.63,0]);
let Shape256 = browser.currentScene.createNode("Shape");
Shape256.USE = "HAnimJointShape";
Transform255.child = new undefined();

Transform255.child[0] = Shape256;

HAnimSegment254.children = new MFNode();

HAnimSegment254.children[0] = Transform255;

let Shape257 = browser.currentScene.createNode("Shape");
let Appearance258 = browser.currentScene.createNode("Appearance");
let Material259 = browser.currentScene.createNode("Material");
Material259.emissiveColor = new SFColor(new float[1,1,1]);
Appearance258.material = Material259;

Shape257.appearance = Appearance258;

let IndexedLineSet260 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet260.DEF = "PIP5toDIP5";
IndexedLineSet260.coordIndex = new MFInt32(new int[0,1]);
let Coordinate261 = browser.currentScene.createNode("Coordinate");
Coordinate261.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet260.coord = Coordinate261;

Shape257.geometry = IndexedLineSet260;

HAnimSegment254.children[1] = Shape257;

HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint262.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint262.center = new SFVec3f(new float[-0.25,0.79,0]);
let HAnimSegment263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment263.name = "l_carpal_distal_phalanx_5";
let Transform264 = browser.currentScene.createNode("Transform");
Transform264.translation = new SFVec3f(new float[-0.25,0.79,0]);
let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimJointShape";
Transform264.child = new undefined();

Transform264.child[0] = Shape265;

HAnimSegment263.children = new MFNode();

HAnimSegment263.children[0] = Transform264;

let Shape266 = browser.currentScene.createNode("Shape");
let Appearance267 = browser.currentScene.createNode("Appearance");
let Material268 = browser.currentScene.createNode("Material");
Material268.emissiveColor = new SFColor(new float[1,1,1]);
Appearance267.material = Material268;

Shape266.appearance = Appearance267;

let IndexedLineSet269 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet269.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet269.coordIndex = new MFInt32(new int[0,1]);
let Coordinate270 = browser.currentScene.createNode("Coordinate");
Coordinate270.point = new MFVec3f(new float[-0.25,0.79,0,-0.26,0.85,0]);
IndexedLineSet269.coord = Coordinate270;

Shape266.geometry = IndexedLineSet269;

HAnimSegment263.children[1] = Shape266;

HAnimJoint262.children = new MFNode();

HAnimJoint262.children[0] = HAnimSegment263;

HAnimJoint253.children[1] = HAnimJoint262;

HAnimJoint244.children[1] = HAnimJoint253;

HAnimJoint235.children[1] = HAnimJoint244;

HAnimJoint185.children[2] = HAnimJoint235;

HAnimJoint29.children[4] = HAnimJoint185;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimHumanoid25.joints[1] = HAnimJoint28;

let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_l_capitate";
HAnimHumanoid25.segments[2] = HAnimSegment271;

let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_l_carpal";
HAnimHumanoid25.segments[3] = HAnimSegment272;

let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid25.segments[4] = HAnimSegment273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid25.segments[5] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid25.segments[6] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid25.segments[7] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid25.segments[8] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid25.segments[9] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid25.segments[10] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid25.segments[11] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid25.segments[12] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid25.segments[13] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid25.segments[14] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid25.segments[15] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid25.segments[16] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid25.segments[17] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_hamate";
HAnimHumanoid25.segments[18] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_metacarpal_1";
HAnimHumanoid25.segments[19] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metacarpal_2";
HAnimHumanoid25.segments[20] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metacarpal_3";
HAnimHumanoid25.segments[21] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metacarpal_4";
HAnimHumanoid25.segments[22] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metacarpal_5";
HAnimHumanoid25.segments[23] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_trapezium";
HAnimHumanoid25.segments[24] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_trapezoid";
HAnimHumanoid25.segments[25] = HAnimSegment294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_humanoid_root";
HAnimHumanoid25.joints[26] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid25.joints[27] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid25.joints[28] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid25.joints[29] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid25.joints[30] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid25.joints[31] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid25.joints[32] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid25.joints[33] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid25.joints[34] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid25.joints[35] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid25.joints[36] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid25.joints[37] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid25.joints[38] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid25.joints[39] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid25.joints[40] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid25.joints[41] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid25.joints[42] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid25.joints[43] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid25.joints[44] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid25.joints[45] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_midcarpal_1";
HAnimHumanoid25.joints[46] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_midcarpal_2";
HAnimHumanoid25.joints[47] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_midcarpal_3";
HAnimHumanoid25.joints[48] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_midcarpal_4_1";
HAnimHumanoid25.joints[49] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_l_radiocarpal";
HAnimHumanoid25.joints[50] = HAnimJoint319;

browser.currentScene.children[1] = HAnimHumanoid25;


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
meta6.content = "23 December 2021";
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

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

let component20 = browser.currentScene.createNode("component");
component20.name = "HAnim";
component20.level = 1;
head1.component[18] = component20;

head = head1;

let WorldInfo22 = browser.currentScene.createNode("WorldInfo");
WorldInfo22.title = "HAnimModelFootLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo22;

let HAnimHumanoid23 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid23.DEF = "hanim_Foot_Left";
HAnimHumanoid23.version = "2.0";
HAnimHumanoid23.name = "Foot_Left";
HAnimHumanoid23.loa = 4;
let MetadataSet24 = browser.currentScene.createNode("MetadataSet");
MetadataSet24.name = "HAnimHumanoid.info";
MetadataSet24.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString25 = browser.currentScene.createNode("MetadataString");
MetadataString25.name = "authorName";
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataString25;

HAnimHumanoid23.metadata = new SFNode();

HAnimHumanoid23.metadata[0] = MetadataSet24;

let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.DEF = "hanim_humanoid_root";
HAnimJoint26.name = "humanoid_root";
let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.DEF = "hanim_l_talocrural";
HAnimJoint27.description = "connection joint of foot to leg above";
HAnimJoint27.name = "l_talocrural";
let HAnimSegment28 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment28.DEF = "hanim_l_talus";
HAnimSegment28.name = "l_talus";
let Transform29 = browser.currentScene.createNode("Transform");
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimJointShape";
let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.DEF = "HAnimJointAppearance";
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[0,0,1]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let Sphere33 = browser.currentScene.createNode("Sphere");
Sphere33.radius = 0.025;
Shape30.geometry = Sphere33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

HAnimSegment28.children = new MFNode();

HAnimSegment28.children[0] = Transform29;

let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.emissiveColor = new SFColor(new float[1,1,1]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedLineSet37 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet37.DEF = "TCtoTCN";
IndexedLineSet37.coordIndex = new MFInt32(new int[0,1]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet37.coord = Coordinate38;

Shape34.geometry = IndexedLineSet37;

HAnimSegment28.children[1] = Shape34;

let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.emissiveColor = new SFColor(new float[1,1,1]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let IndexedLineSet42 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet42.DEF = "TCtoCC";
IndexedLineSet42.coordIndex = new MFInt32(new int[0,1]);
let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[0,0,0,0.2,0.3,0]);
IndexedLineSet42.coord = Coordinate43;

Shape39.geometry = IndexedLineSet42;

HAnimSegment28.children[2] = Shape39;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimSegment28;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint44.name = "l_talocalcaneonavicular";
HAnimJoint44.center = new SFVec3f(new float[0,-0.3,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_l_navicular";
HAnimSegment45.name = "l_navicular";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "HAnimJointShape";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.emissiveColor = new SFColor(new float[1,1,1]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let IndexedLineSet51 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet51.DEF = "TCNtoCN1";
IndexedLineSet51.coordIndex = new MFInt32(new int[0,1]);
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.45,0]);
IndexedLineSet51.coord = Coordinate52;

Shape48.geometry = IndexedLineSet51;

HAnimSegment45.children[1] = Shape48;

let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.emissiveColor = new SFColor(new float[1,1,1]);
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

let IndexedLineSet56 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet56.DEF = "TCNtoCN2";
IndexedLineSet56.coordIndex = new MFInt32(new int[0,1]);
let Coordinate57 = browser.currentScene.createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet56.coord = Coordinate57;

Shape53.geometry = IndexedLineSet56;

HAnimSegment45.children[2] = Shape53;

let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.emissiveColor = new SFColor(new float[1,1,1]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let IndexedLineSet61 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet61.DEF = "TCNtoCN3";
IndexedLineSet61.coordIndex = new MFInt32(new int[0,1]);
let Coordinate62 = browser.currentScene.createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.4,0]);
IndexedLineSet61.coord = Coordinate62;

Shape58.geometry = IndexedLineSet61;

HAnimSegment45.children[3] = Shape58;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint63.name = "l_cuneonavicular_1";
HAnimJoint63.center = new SFVec3f(new float[-0.1,-0.45,0]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_cuneiform_1";
HAnimSegment64.name = "l_cuneiform_1";
let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new SFVec3f(new float[-0.1,-0.45,0]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65.child = new undefined();

Transform65.child[0] = Shape66;

HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = Transform65;

let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.emissiveColor = new SFColor(new float[1,1,1]);
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

let IndexedLineSet70 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet70.DEF = "CN1toTMT1";
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1]);
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[-0.1,-0.45,0,-0.1,-0.6,0]);
IndexedLineSet70.coord = Coordinate71;

Shape67.geometry = IndexedLineSet70;

HAnimSegment64.children[1] = Shape67;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint72.name = "l_tarsometatarsal_1";
HAnimJoint72.center = new SFVec3f(new float[-0.1,-0.6,0]);
let HAnimSegment73 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment73.DEF = "hanim_l_metatarsal_1";
HAnimSegment73.name = "l_metatarsal_1";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.translation = new SFVec3f(new float[-0.1,-0.6,0]);
let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "HAnimJointShape";
Transform74.child = new undefined();

Transform74.child[0] = Shape75;

HAnimSegment73.children = new MFNode();

HAnimSegment73.children[0] = Transform74;

let Shape76 = browser.currentScene.createNode("Shape");
let Appearance77 = browser.currentScene.createNode("Appearance");
let Material78 = browser.currentScene.createNode("Material");
Material78.emissiveColor = new SFColor(new float[1,1,1]);
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

let IndexedLineSet79 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet79.DEF = "TMT1toMTP1";
IndexedLineSet79.coordIndex = new MFInt32(new int[0,1]);
let Coordinate80 = browser.currentScene.createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[-0.1,-0.6,0,-0.1,-0.9,0]);
IndexedLineSet79.coord = Coordinate80;

Shape76.geometry = IndexedLineSet79;

HAnimSegment73.children[1] = Shape76;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint81.name = "l_metatarsophalangeal_1";
HAnimJoint81.center = new SFVec3f(new float[-0.1,-0.9,0]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment82.name = "l_tarsal_proximal_phalanx_1";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new SFVec3f(new float[-0.1,-0.9,0]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "HAnimJointShape";
Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

let Shape85 = browser.currentScene.createNode("Shape");
let Appearance86 = browser.currentScene.createNode("Appearance");
let Material87 = browser.currentScene.createNode("Material");
Material87.emissiveColor = new SFColor(new float[1,1,1]);
Appearance86.material = Material87;

Shape85.appearance = Appearance86;

let IndexedLineSet88 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet88.DEF = "MTP1toIP1";
IndexedLineSet88.coordIndex = new MFInt32(new int[0,1]);
let Coordinate89 = browser.currentScene.createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[-0.1,-0.9,0,-0.1,-1.05,0]);
IndexedLineSet88.coord = Coordinate89;

Shape85.geometry = IndexedLineSet88;

HAnimSegment82.children[1] = Shape85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint90.name = "l_tarsal_interphalangeal_1";
HAnimJoint90.center = new SFVec3f(new float[-0.1,-1.05,0]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimSegment91.name = "l_tarsal_distal_phalanx_1";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new SFVec3f(new float[-0.1,-1.05,0]);
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "HAnimJointShape";
Transform92.child = new undefined();

Transform92.child[0] = Shape93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.emissiveColor = new SFColor(new float[1,1,1]);
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

let IndexedLineSet97 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet97.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet97.coordIndex = new MFInt32(new int[0,1]);
let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[-0.1,-1.05,0,-0.1,-1.1,0]);
IndexedLineSet97.coord = Coordinate98;

Shape94.geometry = IndexedLineSet97;

HAnimSegment91.children[1] = Shape94;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint81.children[1] = HAnimJoint90;

HAnimJoint72.children[1] = HAnimJoint81;

HAnimJoint63.children[1] = HAnimJoint72;

HAnimJoint44.children[1] = HAnimJoint63;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint99.name = "l_cuneonavicular_2";
HAnimJoint99.center = new SFVec3f(new float[0,-0.45,0]);
let HAnimSegment100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment100.DEF = "hanim_l_cuneiform_2";
HAnimSegment100.name = "l_cuneiform_2";
let Transform101 = browser.currentScene.createNode("Transform");
Transform101.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "HAnimJointShape";
Transform101.child = new undefined();

Transform101.child[0] = Shape102;

HAnimSegment100.children = new MFNode();

HAnimSegment100.children[0] = Transform101;

let Shape103 = browser.currentScene.createNode("Shape");
let Appearance104 = browser.currentScene.createNode("Appearance");
let Material105 = browser.currentScene.createNode("Material");
Material105.emissiveColor = new SFColor(new float[1,1,1]);
Appearance104.material = Material105;

Shape103.appearance = Appearance104;

let IndexedLineSet106 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet106.DEF = "CN2toTMT2";
IndexedLineSet106.coordIndex = new MFInt32(new int[0,1]);
let Coordinate107 = browser.currentScene.createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,-0.45,0,0.05,-0.6,0]);
IndexedLineSet106.coord = Coordinate107;

Shape103.geometry = IndexedLineSet106;

HAnimSegment100.children[1] = Shape103;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimSegment100;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint108.name = "l_tarsometatarsal_2";
HAnimJoint108.center = new SFVec3f(new float[0.05,-0.6,0]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.DEF = "hanim_l_metatarsal_2";
HAnimSegment109.name = "l_metatarsal_2";
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.translation = new SFVec3f(new float[0.05,-0.6,0]);
let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "HAnimJointShape";
Transform110.child = new undefined();

Transform110.child[0] = Shape111;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

let Shape112 = browser.currentScene.createNode("Shape");
let Appearance113 = browser.currentScene.createNode("Appearance");
let Material114 = browser.currentScene.createNode("Material");
Material114.emissiveColor = new SFColor(new float[1,1,1]);
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

let IndexedLineSet115 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet115.DEF = "TMT2toMTP2";
IndexedLineSet115.coordIndex = new MFInt32(new int[0,1]);
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.05,-0.6,0,0.05,-0.9,0]);
IndexedLineSet115.coord = Coordinate116;

Shape112.geometry = IndexedLineSet115;

HAnimSegment109.children[1] = Shape112;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint117.name = "l_metatarsophalangeal_2";
HAnimJoint117.center = new SFVec3f(new float[0.05,-0.9,0]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment118.name = "l_tarsal_proximal_phalanx_2";
let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new SFVec3f(new float[0.05,-0.9,0]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimJointShape";
Transform119.child = new undefined();

Transform119.child[0] = Shape120;

HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = Transform119;

let Shape121 = browser.currentScene.createNode("Shape");
let Appearance122 = browser.currentScene.createNode("Appearance");
let Material123 = browser.currentScene.createNode("Material");
Material123.emissiveColor = new SFColor(new float[1,1,1]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

let IndexedLineSet124 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet124.DEF = "MTP2toPIP2";
IndexedLineSet124.coordIndex = new MFInt32(new int[0,1]);
let Coordinate125 = browser.currentScene.createNode("Coordinate");
Coordinate125.point = new MFVec3f(new float[0.05,-0.9,0,0.05,-1.05,0]);
IndexedLineSet124.coord = Coordinate125;

Shape121.geometry = IndexedLineSet124;

HAnimSegment118.children[1] = Shape121;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.DEF = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimJoint126.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint126.center = new SFVec3f(new float[0.05,-1.05,0]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.DEF = "hanim_l_tarsal_middle_phalanx_1";
HAnimSegment127.name = "l_tarsal_middle_phalanx_2";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.05,-1.05,0]);
let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "HAnimJointShape";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

let Shape130 = browser.currentScene.createNode("Shape");
let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
Material132.emissiveColor = new SFColor(new float[1,1,1]);
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

let IndexedLineSet133 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet133.DEF = "PIP2toDIP2";
IndexedLineSet133.coordIndex = new MFInt32(new int[0,1]);
let Coordinate134 = browser.currentScene.createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[0.05,-1.05,0,0.05,-1.12,0]);
IndexedLineSet133.coord = Coordinate134;

Shape130.geometry = IndexedLineSet133;

HAnimSegment127.children[1] = Shape130;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint135.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint135.center = new SFVec3f(new float[0.05,-1.12,0]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment136.name = "l_tarsal_distal_phalanx_2";
let Transform137 = browser.currentScene.createNode("Transform");
Transform137.translation = new SFVec3f(new float[0.05,-1.12,0]);
let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimJointShape";
Transform137.child = new undefined();

Transform137.child[0] = Shape138;

HAnimSegment136.children = new MFNode();

HAnimSegment136.children[0] = Transform137;

let Shape139 = browser.currentScene.createNode("Shape");
let Appearance140 = browser.currentScene.createNode("Appearance");
let Material141 = browser.currentScene.createNode("Material");
Material141.emissiveColor = new SFColor(new float[1,1,1]);
Appearance140.material = Material141;

Shape139.appearance = Appearance140;

let IndexedLineSet142 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet142.DEF = "tiptoe_l_tarsal_distal_phalanx_1";
IndexedLineSet142.coordIndex = new MFInt32(new int[0,1]);
let Coordinate143 = browser.currentScene.createNode("Coordinate");
Coordinate143.point = new MFVec3f(new float[0.05,-1.12,0,0.05,-1.16,0]);
IndexedLineSet142.coord = Coordinate143;

Shape139.geometry = IndexedLineSet142;

HAnimSegment136.children[1] = Shape139;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

HAnimJoint126.children[1] = HAnimJoint135;

HAnimJoint117.children[1] = HAnimJoint126;

HAnimJoint108.children[1] = HAnimJoint117;

HAnimJoint99.children[1] = HAnimJoint108;

HAnimJoint44.children[2] = HAnimJoint99;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint144.name = "l_cuneonavicular_3";
HAnimJoint144.center = new SFVec3f(new float[0.1,-0.4,0]);
let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.DEF = "hanim_l_cuneiform_3";
HAnimSegment145.name = "l_cuneiform_3";
let Transform146 = browser.currentScene.createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.1,-0.4,0]);
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = Transform146;

let Shape148 = browser.currentScene.createNode("Shape");
let Appearance149 = browser.currentScene.createNode("Appearance");
let Material150 = browser.currentScene.createNode("Material");
Material150.emissiveColor = new SFColor(new float[1,1,1]);
Appearance149.material = Material150;

Shape148.appearance = Appearance149;

let IndexedLineSet151 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet151.DEF = "CN3toTMT3";
IndexedLineSet151.coordIndex = new MFInt32(new int[0,1]);
let Coordinate152 = browser.currentScene.createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.1,-0.4,0,0.15,-0.6,0]);
IndexedLineSet151.coord = Coordinate152;

Shape148.geometry = IndexedLineSet151;

HAnimSegment145.children[1] = Shape148;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint153.name = "l_tarsometatarsal_3";
HAnimJoint153.center = new SFVec3f(new float[0.15,-0.6,0]);
let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.DEF = "hanim_l_metatarsal_3";
HAnimSegment154.name = "l_metatarsal_3";
let Transform155 = browser.currentScene.createNode("Transform");
Transform155.translation = new SFVec3f(new float[0.15,-0.6,0]);
let Shape156 = browser.currentScene.createNode("Shape");
Shape156.USE = "HAnimJointShape";
Transform155.child = new undefined();

Transform155.child[0] = Shape156;

HAnimSegment154.children = new MFNode();

HAnimSegment154.children[0] = Transform155;

let Shape157 = browser.currentScene.createNode("Shape");
let Appearance158 = browser.currentScene.createNode("Appearance");
let Material159 = browser.currentScene.createNode("Material");
Material159.emissiveColor = new SFColor(new float[1,1,1]);
Appearance158.material = Material159;

Shape157.appearance = Appearance158;

let IndexedLineSet160 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet160.DEF = "TMT3toMTP3";
IndexedLineSet160.coordIndex = new MFInt32(new int[0,1]);
let Coordinate161 = browser.currentScene.createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.15,-0.6,0,0.15,-0.9,0]);
IndexedLineSet160.coord = Coordinate161;

Shape157.geometry = IndexedLineSet160;

HAnimSegment154.children[1] = Shape157;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint162.name = "l_metatarsophalangeal_3";
HAnimJoint162.center = new SFVec3f(new float[0.15,-0.9,0]);
let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment163.name = "l_tarsal_proximal_phalanx_3";
let Transform164 = browser.currentScene.createNode("Transform");
Transform164.translation = new SFVec3f(new float[0.15,-0.9,0]);
let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "HAnimJointShape";
Transform164.child = new undefined();

Transform164.child[0] = Shape165;

HAnimSegment163.children = new MFNode();

HAnimSegment163.children[0] = Transform164;

let Shape166 = browser.currentScene.createNode("Shape");
let Appearance167 = browser.currentScene.createNode("Appearance");
let Material168 = browser.currentScene.createNode("Material");
Material168.emissiveColor = new SFColor(new float[1,1,1]);
Appearance167.material = Material168;

Shape166.appearance = Appearance167;

let IndexedLineSet169 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet169.DEF = "MTP3toPIP3";
IndexedLineSet169.coordIndex = new MFInt32(new int[0,1]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.15,-0.9,0,0.15,-1.05,0]);
IndexedLineSet169.coord = Coordinate170;

Shape166.geometry = IndexedLineSet169;

HAnimSegment163.children[1] = Shape166;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint171.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint171.center = new SFVec3f(new float[0.15,-1.05,0]);
let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment172.name = "l_tarsal_middle_phalanx_3";
let Transform173 = browser.currentScene.createNode("Transform");
Transform173.translation = new SFVec3f(new float[0.15,-1.05,0]);
let Shape174 = browser.currentScene.createNode("Shape");
Shape174.USE = "HAnimJointShape";
Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = Transform173;

let Shape175 = browser.currentScene.createNode("Shape");
let Appearance176 = browser.currentScene.createNode("Appearance");
let Material177 = browser.currentScene.createNode("Material");
Material177.emissiveColor = new SFColor(new float[1,1,1]);
Appearance176.material = Material177;

Shape175.appearance = Appearance176;

let IndexedLineSet178 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet178.DEF = "PIP3toDIP3";
IndexedLineSet178.coordIndex = new MFInt32(new int[0,1]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.15,-1.05,0,0.15,-1.13,0]);
IndexedLineSet178.coord = Coordinate179;

Shape175.geometry = IndexedLineSet178;

HAnimSegment172.children[1] = Shape175;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint180.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint180.center = new SFVec3f(new float[0.15,-1.13,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimSegment181.name = "l_tarsal_distal_phalanx_3";
let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.15,-1.13,0]);
let Shape183 = browser.currentScene.createNode("Shape");
Shape183.USE = "HAnimJointShape";
Transform182.child = new undefined();

Transform182.child[0] = Shape183;

HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = Transform182;

let Shape184 = browser.currentScene.createNode("Shape");
let Appearance185 = browser.currentScene.createNode("Appearance");
let Material186 = browser.currentScene.createNode("Material");
Material186.emissiveColor = new SFColor(new float[1,1,1]);
Appearance185.material = Material186;

Shape184.appearance = Appearance185;

let IndexedLineSet187 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet187.DEF = "tiptoe_l_tarsal_distal_interphalangeal_2";
IndexedLineSet187.coordIndex = new MFInt32(new int[0,1]);
let Coordinate188 = browser.currentScene.createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.15,-1.13,0,0.15,-1.16,0]);
IndexedLineSet187.coord = Coordinate188;

Shape184.geometry = IndexedLineSet187;

HAnimSegment181.children[1] = Shape184;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint171.children[1] = HAnimJoint180;

HAnimJoint162.children[1] = HAnimJoint171;

HAnimJoint153.children[1] = HAnimJoint162;

HAnimJoint144.children[1] = HAnimJoint153;

HAnimJoint44.children[3] = HAnimJoint144;

HAnimJoint27.children[1] = HAnimJoint44;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.DEF = "hanim_l_calcaneocuboid";
HAnimJoint189.name = "l_calcaneocuboid";
HAnimJoint189.center = new SFVec3f(new float[0.2,0.3,0]);
let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.DEF = "hanim_l_calcaneus";
HAnimSegment190.name = "l_calcaneus";
let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.2,0.3,0]);
let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "HAnimJointShape";
Transform191.child = new undefined();

Transform191.child[0] = Shape192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = Transform191;

let Shape193 = browser.currentScene.createNode("Shape");
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.emissiveColor = new SFColor(new float[1,1,1]);
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

let IndexedLineSet196 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet196.DEF = "CCtoTT";
IndexedLineSet196.coordIndex = new MFInt32(new int[0,1]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.2,0.3,0,0.21,-0.3,0]);
IndexedLineSet196.coord = Coordinate197;

Shape193.geometry = IndexedLineSet196;

HAnimSegment190.children[1] = Shape193;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.DEF = "hanim_l_transversetarsal";
HAnimJoint198.name = "l_transversetarsal";
HAnimJoint198.center = new SFVec3f(new float[0.21,-0.3,0]);
let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.DEF = "hanim_l_cuboid";
HAnimSegment199.name = "l_cuboid";
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.21,-0.3,0]);
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
IndexedLineSet205.DEF = "TTtoTMT4";
IndexedLineSet205.coordIndex = new MFInt32(new int[0,1]);
let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.21,-0.3,0,0.25,-0.58,0]);
IndexedLineSet205.coord = Coordinate206;

Shape202.geometry = IndexedLineSet205;

HAnimSegment199.children[1] = Shape202;

let Shape207 = browser.currentScene.createNode("Shape");
let Appearance208 = browser.currentScene.createNode("Appearance");
let Material209 = browser.currentScene.createNode("Material");
Material209.emissiveColor = new SFColor(new float[1,1,1]);
Appearance208.material = Material209;

Shape207.appearance = Appearance208;

let IndexedLineSet210 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet210.DEF = "TTtoTMT5";
IndexedLineSet210.coordIndex = new MFInt32(new int[0,1]);
let Coordinate211 = browser.currentScene.createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0.21,-0.3,0,0.33,-0.52,0]);
IndexedLineSet210.coord = Coordinate211;

Shape207.geometry = IndexedLineSet210;

HAnimSegment199.children[2] = Shape207;

HAnimJoint198.children = new MFNode();

HAnimJoint198.children[0] = HAnimSegment199;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint212.name = "l_tarsometatarsal_4";
HAnimJoint212.center = new SFVec3f(new float[0.25,-0.58,0]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.DEF = "hanim_l_metatarsal_4";
HAnimSegment213.name = "l_metatarsal_4";
let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new SFVec3f(new float[0.25,-0.58,0]);
let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "HAnimJointShape";
Transform214.child = new undefined();

Transform214.child[0] = Shape215;

HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = Transform214;

let Shape216 = browser.currentScene.createNode("Shape");
let Appearance217 = browser.currentScene.createNode("Appearance");
let Material218 = browser.currentScene.createNode("Material");
Material218.emissiveColor = new SFColor(new float[1,1,1]);
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

let IndexedLineSet219 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet219.DEF = "TMT4toMTP4";
IndexedLineSet219.coordIndex = new MFInt32(new int[0,1]);
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.25,-0.58,0,0.25,-0.87,0]);
IndexedLineSet219.coord = Coordinate220;

Shape216.geometry = IndexedLineSet219;

HAnimSegment213.children[1] = Shape216;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint221.name = "l_metatarsophalangeal_4";
HAnimJoint221.center = new SFVec3f(new float[0.25,-0.87,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment222.name = "l_tarsal_proximal_phalanx_4";
let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.25,-0.87,0]);
let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "HAnimJointShape";
Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = Transform223;

let Shape225 = browser.currentScene.createNode("Shape");
let Appearance226 = browser.currentScene.createNode("Appearance");
let Material227 = browser.currentScene.createNode("Material");
Material227.emissiveColor = new SFColor(new float[1,1,1]);
Appearance226.material = Material227;

Shape225.appearance = Appearance226;

let IndexedLineSet228 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet228.DEF = "MTP4toPIP4";
IndexedLineSet228.coordIndex = new MFInt32(new int[0,1]);
let Coordinate229 = browser.currentScene.createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[0.25,-0.87,0,0.25,-1,0]);
IndexedLineSet228.coord = Coordinate229;

Shape225.geometry = IndexedLineSet228;

HAnimSegment222.children[1] = Shape225;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint230.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint230.center = new SFVec3f(new float[0.25,-1,0]);
let HAnimSegment231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment231.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment231.name = "l_tarsal_middle_phalanx_4";
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.25,-1,0]);
let Shape233 = browser.currentScene.createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

HAnimSegment231.children = new MFNode();

HAnimSegment231.children[0] = Transform232;

let Shape234 = browser.currentScene.createNode("Shape");
let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.emissiveColor = new SFColor(new float[1,1,1]);
Appearance235.material = Material236;

Shape234.appearance = Appearance235;

let IndexedLineSet237 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet237.DEF = "PIP4toDIP4";
IndexedLineSet237.coordIndex = new MFInt32(new int[0,1]);
let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.25,-1,0,0.25,-1.1,0]);
IndexedLineSet237.coord = Coordinate238;

Shape234.geometry = IndexedLineSet237;

HAnimSegment231.children[1] = Shape234;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint239.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint239.center = new SFVec3f(new float[0.25,-1.1,0]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimSegment240.name = "l_tarsal_distal_phalanx_4";
let Transform241 = browser.currentScene.createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.25,-1.1,0]);
let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

HAnimSegment240.children = new MFNode();

HAnimSegment240.children[0] = Transform241;

let Shape243 = browser.currentScene.createNode("Shape");
let Appearance244 = browser.currentScene.createNode("Appearance");
let Material245 = browser.currentScene.createNode("Material");
Material245.emissiveColor = new SFColor(new float[1,1,1]);
Appearance244.material = Material245;

Shape243.appearance = Appearance244;

let IndexedLineSet246 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet246.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet246.coordIndex = new MFInt32(new int[0,1]);
let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0.25,-1.1,0,0.25,-1.15,0]);
IndexedLineSet246.coord = Coordinate247;

Shape243.geometry = IndexedLineSet246;

HAnimSegment240.children[1] = Shape243;

HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

HAnimJoint230.children[1] = HAnimJoint239;

HAnimJoint221.children[1] = HAnimJoint230;

HAnimJoint212.children[1] = HAnimJoint221;

HAnimJoint198.children[1] = HAnimJoint212;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint248.name = "l_tarsometatarsal_5";
HAnimJoint248.center = new SFVec3f(new float[0.33,-0.52,0]);
let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_metatarsal_5";
HAnimSegment249.name = "l_metatarsal_5";
let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.33,-0.52,0]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSegment249.children = new MFNode();

HAnimSegment249.children[0] = Transform250;

let Shape252 = browser.currentScene.createNode("Shape");
let Appearance253 = browser.currentScene.createNode("Appearance");
let Material254 = browser.currentScene.createNode("Material");
Material254.emissiveColor = new SFColor(new float[1,1,1]);
Appearance253.material = Material254;

Shape252.appearance = Appearance253;

let IndexedLineSet255 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet255.DEF = "TMT5toMTP5";
IndexedLineSet255.coordIndex = new MFInt32(new int[0,1]);
let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.33,-0.52,0,0.34,-0.8,0]);
IndexedLineSet255.coord = Coordinate256;

Shape252.geometry = IndexedLineSet255;

HAnimSegment249.children[1] = Shape252;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint257.name = "l_metatarsophalangeal_5";
HAnimJoint257.center = new SFVec3f(new float[0.34,-0.8,0]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment258.name = "l_tarsal_proximal_phalanx_5";
let Transform259 = browser.currentScene.createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.34,-0.8,0]);
let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = Transform259;

let Shape261 = browser.currentScene.createNode("Shape");
let Appearance262 = browser.currentScene.createNode("Appearance");
let Material263 = browser.currentScene.createNode("Material");
Material263.emissiveColor = new SFColor(new float[1,1,1]);
Appearance262.material = Material263;

Shape261.appearance = Appearance262;

let IndexedLineSet264 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet264.DEF = "MTP5toPIP5";
IndexedLineSet264.coordIndex = new MFInt32(new int[0,1]);
let Coordinate265 = browser.currentScene.createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[0.34,-0.8,0,0.34,-0.95,0]);
IndexedLineSet264.coord = Coordinate265;

Shape261.geometry = IndexedLineSet264;

HAnimSegment258.children[1] = Shape261;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint266.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint266.center = new SFVec3f(new float[0.34,-0.95,0]);
let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment267.name = "l_tarsal_middle_phalanx_5";
let Transform268 = browser.currentScene.createNode("Transform");
Transform268.translation = new SFVec3f(new float[0.34,-0.95,0]);
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "HAnimJointShape";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

HAnimSegment267.children = new MFNode();

HAnimSegment267.children[0] = Transform268;

let Shape270 = browser.currentScene.createNode("Shape");
let Appearance271 = browser.currentScene.createNode("Appearance");
let Material272 = browser.currentScene.createNode("Material");
Material272.emissiveColor = new SFColor(new float[1,1,1]);
Appearance271.material = Material272;

Shape270.appearance = Appearance271;

let IndexedLineSet273 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet273.DEF = "PIP5toDIP5";
IndexedLineSet273.coordIndex = new MFInt32(new int[0,1]);
let Coordinate274 = browser.currentScene.createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0.34,-0.95,0,0.34,-1.05,0]);
IndexedLineSet273.coord = Coordinate274;

Shape270.geometry = IndexedLineSet273;

HAnimSegment267.children[1] = Shape270;

HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint275.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint275.center = new SFVec3f(new float[0.34,-1.05,0]);
let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimSegment276.name = "l_tarsal_distal_phalanx_5";
let Transform277 = browser.currentScene.createNode("Transform");
Transform277.translation = new SFVec3f(new float[0.34,-1.05,0]);
let Shape278 = browser.currentScene.createNode("Shape");
Shape278.USE = "HAnimJointShape";
Transform277.child = new undefined();

Transform277.child[0] = Shape278;

HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = Transform277;

let Shape279 = browser.currentScene.createNode("Shape");
let Appearance280 = browser.currentScene.createNode("Appearance");
let Material281 = browser.currentScene.createNode("Material");
Material281.emissiveColor = new SFColor(new float[1,1,1]);
Appearance280.material = Material281;

Shape279.appearance = Appearance280;

let IndexedLineSet282 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet282.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet282.coordIndex = new MFInt32(new int[0,1]);
let Coordinate283 = browser.currentScene.createNode("Coordinate");
Coordinate283.point = new MFVec3f(new float[0.34,-1.05,0,0.34,-1.08,0]);
IndexedLineSet282.coord = Coordinate283;

Shape279.geometry = IndexedLineSet282;

HAnimSegment276.children[1] = Shape279;

HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

HAnimJoint266.children[1] = HAnimJoint275;

HAnimJoint257.children[1] = HAnimJoint266;

HAnimJoint248.children[1] = HAnimJoint257;

HAnimJoint198.children[2] = HAnimJoint248;

HAnimJoint189.children[1] = HAnimJoint198;

HAnimJoint27.children[2] = HAnimJoint189;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimJoint27;

HAnimHumanoid23.joints[1] = HAnimJoint26;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_calcaneus";
HAnimHumanoid23.segments[2] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_cuboid";
HAnimHumanoid23.segments[3] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_cuneiform_1";
HAnimHumanoid23.segments[4] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_cuneiform_2";
HAnimHumanoid23.segments[5] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_cuneiform_3";
HAnimHumanoid23.segments[6] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metatarsal_1";
HAnimHumanoid23.segments[7] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metatarsal_2";
HAnimHumanoid23.segments[8] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metatarsal_3";
HAnimHumanoid23.segments[9] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metatarsal_4";
HAnimHumanoid23.segments[10] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_metatarsal_5";
HAnimHumanoid23.segments[11] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_navicular";
HAnimHumanoid23.segments[12] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_l_talus";
HAnimHumanoid23.segments[13] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid23.segments[14] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[15] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid23.segments[16] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid23.segments[17] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid23.segments[18] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_tarsal_middle_phalanx_1";
HAnimHumanoid23.segments[19] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid23.segments[20] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid23.segments[21] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid23.segments[22] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid23.segments[23] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[24] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid23.segments[25] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid23.segments[26] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid23.segments[27] = HAnimSegment309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_humanoid_root";
HAnimHumanoid23.joints[28] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid23.joints[29] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid23.joints[30] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid23.joints[31] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid23.joints[32] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid23.joints[33] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid23.joints[34] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid23.joints[35] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid23.joints[36] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid23.joints[37] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid23.joints[38] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_l_talocrural";
HAnimHumanoid23.joints[39] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid23.joints[40] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[41] = HAnimJoint323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid23.joints[42] = HAnimJoint324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid23.joints[43] = HAnimJoint325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid23.joints[44] = HAnimJoint326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimHumanoid23.joints[45] = HAnimJoint327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[46] = HAnimJoint328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[47] = HAnimJoint329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[48] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid23.joints[49] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid23.joints[50] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid23.joints[51] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid23.joints[52] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid23.joints[53] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_l_transversetarsal";
HAnimHumanoid23.joints[54] = HAnimJoint336;

browser.currentScene.children[1] = HAnimHumanoid23;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelFootRight.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Right foot, using high-fidelity definitions for HAnim version 2.0";
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
meta9.name = "TODO";
meta9.content = "Update all values to match HAnim2 A.7 Level of articulation four LOA-4";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "TODO";
meta10.content = "Add links to figures";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "TODO";
meta11.content = "Add Viewpoints to enable inspection";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "TODO";
meta12.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "info";
meta13.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "subject";
meta20.content = "X3D HAnim humanoid animation";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "identifier";
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "generator";
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[20] = meta22;

let component23 = browser.currentScene.createNode("component");
component23.name = "HAnim";
component23.level = 1;
head1.component[21] = component23;

head = head1;

let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HAnimModelFootRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo25;

let HAnimHumanoid26 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid26.DEF = "hanim_Foot_Right";
HAnimHumanoid26.version = "2.0";
HAnimHumanoid26.name = "Foot_Right";
HAnimHumanoid26.loa = 4;
let MetadataSet27 = browser.currentScene.createNode("MetadataSet");
MetadataSet27.name = "HAnimHumanoid.info";
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "authorName";
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

HAnimHumanoid26.metadata = new SFNode();

HAnimHumanoid26.metadata[0] = MetadataSet27;

let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.name = "humanoid_root";
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.DEF = "hanim_r_talocrural";
HAnimJoint30.description = "connection joint of foot to leg above";
HAnimJoint30.name = "r_talocrural";
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.DEF = "hanim_r_talus";
HAnimSegment31.name = "r_talus";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "HAnimJointShape";
let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.DEF = "HAnimJointAppearance";
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[0,0,1]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.025;
Shape33.geometry = Sphere36;

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
IndexedLineSet40.DEF = "TCtoTCN";
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1]);
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
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
IndexedLineSet45.DEF = "TCtoCC";
IndexedLineSet45.coordIndex = new MFInt32(new int[0,1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet45.coord = Coordinate46;

Shape42.geometry = IndexedLineSet45;

HAnimSegment31.children[2] = Shape42;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint47.name = "r_talocalcaneonavicular";
HAnimJoint47.center = new SFVec3f(new float[0,-0.3,0]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.DEF = "hanim_r_navicular";
HAnimSegment48.name = "r_navicular";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "HAnimJointShape";
Transform49.child = new undefined();

Transform49.child[0] = Shape50;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Transform49;

let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.emissiveColor = new SFColor(new float[1,1,1]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let IndexedLineSet54 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet54.DEF = "TCNtoCN1";
IndexedLineSet54.coordIndex = new MFInt32(new int[0,1]);
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet54.coord = Coordinate55;

Shape51.geometry = IndexedLineSet54;

HAnimSegment48.children[1] = Shape51;

let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.emissiveColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let IndexedLineSet59 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet59.DEF = "TCNtoCN2";
IndexedLineSet59.coordIndex = new MFInt32(new int[0,1]);
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet59.coord = Coordinate60;

Shape56.geometry = IndexedLineSet59;

HAnimSegment48.children[2] = Shape56;

let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.emissiveColor = new SFColor(new float[1,1,1]);
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let IndexedLineSet64 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet64.DEF = "TCNtoCN3";
IndexedLineSet64.coordIndex = new MFInt32(new int[0,1]);
let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet64.coord = Coordinate65;

Shape61.geometry = IndexedLineSet64;

HAnimSegment48.children[3] = Shape61;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint66.name = "r_cuneonavicular_1";
HAnimJoint66.center = new SFVec3f(new float[0.1,-0.45,0]);
let HAnimSegment67 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment67.DEF = "hanim_r_cuneiform_1";
HAnimSegment67.name = "r_cuneiform_1";
let Transform68 = browser.currentScene.createNode("Transform");
Transform68.translation = new SFVec3f(new float[0.1,-0.45,0]);
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "HAnimJointShape";
Transform68.child = new undefined();

Transform68.child[0] = Shape69;

HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = Transform68;

let Shape70 = browser.currentScene.createNode("Shape");
let Appearance71 = browser.currentScene.createNode("Appearance");
let Material72 = browser.currentScene.createNode("Material");
Material72.emissiveColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

let IndexedLineSet73 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet73.DEF = "CN1toTMT1";
IndexedLineSet73.coordIndex = new MFInt32(new int[0,1]);
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet73.coord = Coordinate74;

Shape70.geometry = IndexedLineSet73;

HAnimSegment67.children[1] = Shape70;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint75.name = "r_tarsometatarsal_1";
HAnimJoint75.center = new SFVec3f(new float[0.1,-0.6,0]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.DEF = "hanim_r_metatarsal_1";
HAnimSegment76.name = "r_metatarsal_1";
let Transform77 = browser.currentScene.createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.1,-0.6,0]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimJointShape";
Transform77.child = new undefined();

Transform77.child[0] = Shape78;

HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = Transform77;

let Shape79 = browser.currentScene.createNode("Shape");
let Appearance80 = browser.currentScene.createNode("Appearance");
let Material81 = browser.currentScene.createNode("Material");
Material81.emissiveColor = new SFColor(new float[1,1,1]);
Appearance80.material = Material81;

Shape79.appearance = Appearance80;

let IndexedLineSet82 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet82.DEF = "TMT1toMTP1";
IndexedLineSet82.coordIndex = new MFInt32(new int[0,1]);
let Coordinate83 = browser.currentScene.createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet82.coord = Coordinate83;

Shape79.geometry = IndexedLineSet82;

HAnimSegment76.children[1] = Shape79;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint84.name = "r_metatarsophalangeal_1";
HAnimJoint84.center = new SFVec3f(new float[0.1,-0.9,0]);
let HAnimSegment85 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment85.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment85.name = "r_tarsal_proximal_phalanx_1";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new SFVec3f(new float[0.1,-0.9,0]);
let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "HAnimJointShape";
Transform86.child = new undefined();

Transform86.child[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = Transform86;

let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.emissiveColor = new SFColor(new float[1,1,1]);
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

let IndexedLineSet91 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet91.DEF = "MTP1toIP1";
IndexedLineSet91.coordIndex = new MFInt32(new int[0,1]);
let Coordinate92 = browser.currentScene.createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet91.coord = Coordinate92;

Shape88.geometry = IndexedLineSet91;

HAnimSegment85.children[1] = Shape88;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint93.name = "r_tarsal_interphalangeal_1";
HAnimJoint93.center = new SFVec3f(new float[0.1,-1.05,0]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimSegment94.name = "r_tarsal_distal_phalanx_1";
let Transform95 = browser.currentScene.createNode("Transform");
Transform95.translation = new SFVec3f(new float[0.1,-1.05,0]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "HAnimJointShape";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = Transform95;

let Shape97 = browser.currentScene.createNode("Shape");
let Appearance98 = browser.currentScene.createNode("Appearance");
let Material99 = browser.currentScene.createNode("Material");
Material99.emissiveColor = new SFColor(new float[1,1,1]);
Appearance98.material = Material99;

Shape97.appearance = Appearance98;

let IndexedLineSet100 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet100.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet100.coordIndex = new MFInt32(new int[0,1]);
let Coordinate101 = browser.currentScene.createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[0.1,-1.05,0,0.1,-1.1,0]);
IndexedLineSet100.coord = Coordinate101;

Shape97.geometry = IndexedLineSet100;

HAnimSegment94.children[1] = Shape97;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint84.children[1] = HAnimJoint93;

HAnimJoint75.children[1] = HAnimJoint84;

HAnimJoint66.children[1] = HAnimJoint75;

HAnimJoint47.children[1] = HAnimJoint66;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint102.name = "r_cuneonavicular_2";
HAnimJoint102.center = new SFVec3f(new float[0,-0.45,0]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_r_cuneiform_2";
HAnimSegment103.name = "r_cuneiform_2";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "HAnimJointShape";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

let Shape106 = browser.currentScene.createNode("Shape");
let Appearance107 = browser.currentScene.createNode("Appearance");
let Material108 = browser.currentScene.createNode("Material");
Material108.emissiveColor = new SFColor(new float[1,1,1]);
Appearance107.material = Material108;

Shape106.appearance = Appearance107;

let IndexedLineSet109 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet109.DEF = "CN2toTMT2";
IndexedLineSet109.coordIndex = new MFInt32(new int[0,1]);
let Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet109.coord = Coordinate110;

Shape106.geometry = IndexedLineSet109;

HAnimSegment103.children[1] = Shape106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint111.name = "r_tarsometatarsal_2";
HAnimJoint111.center = new SFVec3f(new float[-0.05,-0.6,0]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.DEF = "hanim_r_metatarsal_2";
HAnimSegment112.name = "r_metatarsal_2";
let Transform113 = browser.currentScene.createNode("Transform");
Transform113.translation = new SFVec3f(new float[-0.05,-0.6,0]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "HAnimJointShape";
Transform113.child = new undefined();

Transform113.child[0] = Shape114;

HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = Transform113;

let Shape115 = browser.currentScene.createNode("Shape");
let Appearance116 = browser.currentScene.createNode("Appearance");
let Material117 = browser.currentScene.createNode("Material");
Material117.emissiveColor = new SFColor(new float[1,1,1]);
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

let IndexedLineSet118 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet118.DEF = "TMT2toMTP2";
IndexedLineSet118.coordIndex = new MFInt32(new int[0,1]);
let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet118.coord = Coordinate119;

Shape115.geometry = IndexedLineSet118;

HAnimSegment112.children[1] = Shape115;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint120.name = "r_metatarsophalangeal_2";
HAnimJoint120.center = new SFVec3f(new float[-0.05,-0.9,0]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment121.name = "r_tarsal_proximal_phalanx_2";
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new SFVec3f(new float[-0.05,-0.9,0]);
let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimJointShape";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = Transform122;

let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.emissiveColor = new SFColor(new float[1,1,1]);
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

let IndexedLineSet127 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet127.DEF = "MTP2toPIP2";
IndexedLineSet127.coordIndex = new MFInt32(new int[0,1]);
let Coordinate128 = browser.currentScene.createNode("Coordinate");
Coordinate128.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet127.coord = Coordinate128;

Shape124.geometry = IndexedLineSet127;

HAnimSegment121.children[1] = Shape124;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.DEF = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimJoint129.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint129.center = new SFVec3f(new float[-0.05,-1.05,0]);
let HAnimSegment130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment130.DEF = "hanim_r_tarsal_middle_phalanx_1";
HAnimSegment130.name = "r_tarsal_middle_phalanx_2";
let Transform131 = browser.currentScene.createNode("Transform");
Transform131.translation = new SFVec3f(new float[-0.05,-1.05,0]);
let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "HAnimJointShape";
Transform131.child = new undefined();

Transform131.child[0] = Shape132;

HAnimSegment130.children = new MFNode();

HAnimSegment130.children[0] = Transform131;

let Shape133 = browser.currentScene.createNode("Shape");
let Appearance134 = browser.currentScene.createNode("Appearance");
let Material135 = browser.currentScene.createNode("Material");
Material135.emissiveColor = new SFColor(new float[1,1,1]);
Appearance134.material = Material135;

Shape133.appearance = Appearance134;

let IndexedLineSet136 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet136.DEF = "PIP2toDIP2";
IndexedLineSet136.coordIndex = new MFInt32(new int[0,1]);
let Coordinate137 = browser.currentScene.createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet136.coord = Coordinate137;

Shape133.geometry = IndexedLineSet136;

HAnimSegment130.children[1] = Shape133;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint138.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint138.center = new SFVec3f(new float[-0.05,-1.12,0]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment139.name = "r_tarsal_distal_phalanx_2";
let Transform140 = browser.currentScene.createNode("Transform");
Transform140.translation = new SFVec3f(new float[-0.05,-1.12,0]);
let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimJointShape";
Transform140.child = new undefined();

Transform140.child[0] = Shape141;

HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = Transform140;

let Shape142 = browser.currentScene.createNode("Shape");
let Appearance143 = browser.currentScene.createNode("Appearance");
let Material144 = browser.currentScene.createNode("Material");
Material144.emissiveColor = new SFColor(new float[1,1,1]);
Appearance143.material = Material144;

Shape142.appearance = Appearance143;

let IndexedLineSet145 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet145.DEF = "tiptoe_r_tarsal_distal_interphalangeal_1";
IndexedLineSet145.coordIndex = new MFInt32(new int[0,1]);
let Coordinate146 = browser.currentScene.createNode("Coordinate");
Coordinate146.point = new MFVec3f(new float[-0.05,-1.12,0,-0.05,-1.16,0]);
IndexedLineSet145.coord = Coordinate146;

Shape142.geometry = IndexedLineSet145;

HAnimSegment139.children[1] = Shape142;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint129.children[1] = HAnimJoint138;

HAnimJoint120.children[1] = HAnimJoint129;

HAnimJoint111.children[1] = HAnimJoint120;

HAnimJoint102.children[1] = HAnimJoint111;

HAnimJoint47.children[2] = HAnimJoint102;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint147.name = "r_cuneonavicular_3";
HAnimJoint147.center = new SFVec3f(new float[-0.1,-0.4,0]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_r_cuneiform_3";
HAnimSegment148.name = "r_cuneiform_3";
let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new SFVec3f(new float[-0.1,-0.4,0]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "HAnimJointShape";
Transform149.child = new undefined();

Transform149.child[0] = Shape150;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = Transform149;

let Shape151 = browser.currentScene.createNode("Shape");
let Appearance152 = browser.currentScene.createNode("Appearance");
let Material153 = browser.currentScene.createNode("Material");
Material153.emissiveColor = new SFColor(new float[1,1,1]);
Appearance152.material = Material153;

Shape151.appearance = Appearance152;

let IndexedLineSet154 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet154.DEF = "CN3toTMT3";
IndexedLineSet154.coordIndex = new MFInt32(new int[0,1]);
let Coordinate155 = browser.currentScene.createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet154.coord = Coordinate155;

Shape151.geometry = IndexedLineSet154;

HAnimSegment148.children[1] = Shape151;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint156.name = "r_tarsometatarsal_3";
HAnimJoint156.center = new SFVec3f(new float[-0.15,-0.6,0]);
let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.DEF = "hanim_r_metatarsal_3";
HAnimSegment157.name = "r_metatarsal_3";
let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new SFVec3f(new float[-0.15,-0.6,0]);
let Shape159 = browser.currentScene.createNode("Shape");
Shape159.USE = "HAnimJointShape";
Transform158.child = new undefined();

Transform158.child[0] = Shape159;

HAnimSegment157.children = new MFNode();

HAnimSegment157.children[0] = Transform158;

let Shape160 = browser.currentScene.createNode("Shape");
let Appearance161 = browser.currentScene.createNode("Appearance");
let Material162 = browser.currentScene.createNode("Material");
Material162.emissiveColor = new SFColor(new float[1,1,1]);
Appearance161.material = Material162;

Shape160.appearance = Appearance161;

let IndexedLineSet163 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet163.DEF = "TMT3toMTP3";
IndexedLineSet163.coordIndex = new MFInt32(new int[0,1]);
let Coordinate164 = browser.currentScene.createNode("Coordinate");
Coordinate164.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet163.coord = Coordinate164;

Shape160.geometry = IndexedLineSet163;

HAnimSegment157.children[1] = Shape160;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint165.name = "r_metatarsophalangeal_3";
HAnimJoint165.center = new SFVec3f(new float[-0.15,-0.9,0]);
let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment166.name = "r_tarsal_proximal_phalanx_3";
let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new SFVec3f(new float[-0.15,-0.9,0]);
let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "HAnimJointShape";
Transform167.child = new undefined();

Transform167.child[0] = Shape168;

HAnimSegment166.children = new MFNode();

HAnimSegment166.children[0] = Transform167;

let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
let Material171 = browser.currentScene.createNode("Material");
Material171.emissiveColor = new SFColor(new float[1,1,1]);
Appearance170.material = Material171;

Shape169.appearance = Appearance170;

let IndexedLineSet172 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet172.DEF = "MTP3toPIP3";
IndexedLineSet172.coordIndex = new MFInt32(new int[0,1]);
let Coordinate173 = browser.currentScene.createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet172.coord = Coordinate173;

Shape169.geometry = IndexedLineSet172;

HAnimSegment166.children[1] = Shape169;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint174.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint174.center = new SFVec3f(new float[-0.15,-1.05,0]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment175.name = "r_tarsal_middle_phalanx_3";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new SFVec3f(new float[-0.15,-1.05,0]);
let Shape177 = browser.currentScene.createNode("Shape");
Shape177.USE = "HAnimJointShape";
Transform176.child = new undefined();

Transform176.child[0] = Shape177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

let Shape178 = browser.currentScene.createNode("Shape");
let Appearance179 = browser.currentScene.createNode("Appearance");
let Material180 = browser.currentScene.createNode("Material");
Material180.emissiveColor = new SFColor(new float[1,1,1]);
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

let IndexedLineSet181 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet181.DEF = "PIP3toDIP3";
IndexedLineSet181.coordIndex = new MFInt32(new int[0,1]);
let Coordinate182 = browser.currentScene.createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet181.coord = Coordinate182;

Shape178.geometry = IndexedLineSet181;

HAnimSegment175.children[1] = Shape178;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint183.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint183.center = new SFVec3f(new float[-0.15,-1.13,0]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimSegment184.name = "r_tarsal_distal_phalanx_3";
let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[-0.15,-1.13,0]);
let Shape186 = browser.currentScene.createNode("Shape");
Shape186.USE = "HAnimJointShape";
Transform185.child = new undefined();

Transform185.child[0] = Shape186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

let Shape187 = browser.currentScene.createNode("Shape");
let Appearance188 = browser.currentScene.createNode("Appearance");
let Material189 = browser.currentScene.createNode("Material");
Material189.emissiveColor = new SFColor(new float[1,1,1]);
Appearance188.material = Material189;

Shape187.appearance = Appearance188;

let IndexedLineSet190 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet190.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet190.coordIndex = new MFInt32(new int[0,1]);
let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[-0.15,-1.13,0,-0.15,-1.16,0]);
IndexedLineSet190.coord = Coordinate191;

Shape187.geometry = IndexedLineSet190;

HAnimSegment184.children[1] = Shape187;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint165.children[1] = HAnimJoint174;

HAnimJoint156.children[1] = HAnimJoint165;

HAnimJoint147.children[1] = HAnimJoint156;

HAnimJoint47.children[3] = HAnimJoint147;

HAnimJoint30.children[1] = HAnimJoint47;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.DEF = "hanim_r_calcaneocuboid";
HAnimJoint192.name = "r_calcaneocuboid";
HAnimJoint192.center = new SFVec3f(new float[-0.2,0.3,0]);
let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.DEF = "hanim_r_calcaneus";
HAnimSegment193.name = "r_calcaneus";
let Transform194 = browser.currentScene.createNode("Transform");
Transform194.translation = new SFVec3f(new float[-0.2,0.3,0]);
let Shape195 = browser.currentScene.createNode("Shape");
Shape195.USE = "HAnimJointShape";
Transform194.child = new undefined();

Transform194.child[0] = Shape195;

HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = Transform194;

let Shape196 = browser.currentScene.createNode("Shape");
let Appearance197 = browser.currentScene.createNode("Appearance");
let Material198 = browser.currentScene.createNode("Material");
Material198.emissiveColor = new SFColor(new float[1,1,1]);
Appearance197.material = Material198;

Shape196.appearance = Appearance197;

let IndexedLineSet199 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet199.DEF = "CCtoTT";
IndexedLineSet199.coordIndex = new MFInt32(new int[0,1]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet199.coord = Coordinate200;

Shape196.geometry = IndexedLineSet199;

HAnimSegment193.children[1] = Shape196;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_r_transversetarsal";
HAnimJoint201.name = "r_transversetarsal";
HAnimJoint201.center = new SFVec3f(new float[-0.21,-0.3,0]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_r_cuboid";
HAnimSegment202.name = "r_cuboid";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new SFVec3f(new float[-0.21,-0.3,0]);
let Shape204 = browser.currentScene.createNode("Shape");
Shape204.USE = "HAnimJointShape";
Transform203.child = new undefined();

Transform203.child[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

let Shape205 = browser.currentScene.createNode("Shape");
let Appearance206 = browser.currentScene.createNode("Appearance");
let Material207 = browser.currentScene.createNode("Material");
Material207.emissiveColor = new SFColor(new float[1,1,1]);
Appearance206.material = Material207;

Shape205.appearance = Appearance206;

let IndexedLineSet208 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet208.DEF = "TTtoTMT4";
IndexedLineSet208.coordIndex = new MFInt32(new int[0,1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet208.coord = Coordinate209;

Shape205.geometry = IndexedLineSet208;

HAnimSegment202.children[1] = Shape205;

let Shape210 = browser.currentScene.createNode("Shape");
let Appearance211 = browser.currentScene.createNode("Appearance");
let Material212 = browser.currentScene.createNode("Material");
Material212.emissiveColor = new SFColor(new float[1,1,1]);
Appearance211.material = Material212;

Shape210.appearance = Appearance211;

let IndexedLineSet213 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet213.DEF = "TTtoTMT5";
IndexedLineSet213.coordIndex = new MFInt32(new int[0,1]);
let Coordinate214 = browser.currentScene.createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet213.coord = Coordinate214;

Shape210.geometry = IndexedLineSet213;

HAnimSegment202.children[2] = Shape210;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint215.name = "r_tarsometatarsal_4";
HAnimJoint215.center = new SFVec3f(new float[-0.25,-0.58,0]);
let HAnimSegment216 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment216.DEF = "hanim_r_metatarsal_4";
HAnimSegment216.name = "r_metatarsal_4";
let Transform217 = browser.currentScene.createNode("Transform");
Transform217.translation = new SFVec3f(new float[-0.25,-0.58,0]);
let Shape218 = browser.currentScene.createNode("Shape");
Shape218.USE = "HAnimJointShape";
Transform217.child = new undefined();

Transform217.child[0] = Shape218;

HAnimSegment216.children = new MFNode();

HAnimSegment216.children[0] = Transform217;

let Shape219 = browser.currentScene.createNode("Shape");
let Appearance220 = browser.currentScene.createNode("Appearance");
let Material221 = browser.currentScene.createNode("Material");
Material221.emissiveColor = new SFColor(new float[1,1,1]);
Appearance220.material = Material221;

Shape219.appearance = Appearance220;

let IndexedLineSet222 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet222.DEF = "TMT4toMTP4";
IndexedLineSet222.coordIndex = new MFInt32(new int[0,1]);
let Coordinate223 = browser.currentScene.createNode("Coordinate");
Coordinate223.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet222.coord = Coordinate223;

Shape219.geometry = IndexedLineSet222;

HAnimSegment216.children[1] = Shape219;

HAnimJoint215.children = new MFNode();

HAnimJoint215.children[0] = HAnimSegment216;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint224.name = "r_metatarsophalangeal_4";
HAnimJoint224.center = new SFVec3f(new float[-0.25,-0.87,0]);
let HAnimSegment225 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment225.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment225.name = "r_tarsal_proximal_phalanx_4";
let Transform226 = browser.currentScene.createNode("Transform");
Transform226.translation = new SFVec3f(new float[-0.25,-0.87,0]);
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

HAnimSegment225.children = new MFNode();

HAnimSegment225.children[0] = Transform226;

let Shape228 = browser.currentScene.createNode("Shape");
let Appearance229 = browser.currentScene.createNode("Appearance");
let Material230 = browser.currentScene.createNode("Material");
Material230.emissiveColor = new SFColor(new float[1,1,1]);
Appearance229.material = Material230;

Shape228.appearance = Appearance229;

let IndexedLineSet231 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet231.DEF = "MTP4toPIP4";
IndexedLineSet231.coordIndex = new MFInt32(new int[0,1]);
let Coordinate232 = browser.currentScene.createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet231.coord = Coordinate232;

Shape228.geometry = IndexedLineSet231;

HAnimSegment225.children[1] = Shape228;

HAnimJoint224.children = new MFNode();

HAnimJoint224.children[0] = HAnimSegment225;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint233.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint233.center = new SFVec3f(new float[-0.25,-1,0]);
let HAnimSegment234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment234.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment234.name = "r_tarsal_middle_phalanx_4";
let Transform235 = browser.currentScene.createNode("Transform");
Transform235.translation = new SFVec3f(new float[-0.25,-1,0]);
let Shape236 = browser.currentScene.createNode("Shape");
Shape236.USE = "HAnimJointShape";
Transform235.child = new undefined();

Transform235.child[0] = Shape236;

HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = Transform235;

let Shape237 = browser.currentScene.createNode("Shape");
let Appearance238 = browser.currentScene.createNode("Appearance");
let Material239 = browser.currentScene.createNode("Material");
Material239.emissiveColor = new SFColor(new float[1,1,1]);
Appearance238.material = Material239;

Shape237.appearance = Appearance238;

let IndexedLineSet240 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet240.DEF = "PIP4toDIP4";
IndexedLineSet240.coordIndex = new MFInt32(new int[0,1]);
let Coordinate241 = browser.currentScene.createNode("Coordinate");
Coordinate241.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet240.coord = Coordinate241;

Shape237.geometry = IndexedLineSet240;

HAnimSegment234.children[1] = Shape237;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint242.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint242.center = new SFVec3f(new float[-0.25,-1.1,0]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimSegment243.name = "r_tarsal_distal_phalanx_4";
let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new SFVec3f(new float[-0.25,-1.1,0]);
let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = Transform244;

let Shape246 = browser.currentScene.createNode("Shape");
let Appearance247 = browser.currentScene.createNode("Appearance");
let Material248 = browser.currentScene.createNode("Material");
Material248.emissiveColor = new SFColor(new float[1,1,1]);
Appearance247.material = Material248;

Shape246.appearance = Appearance247;

let IndexedLineSet249 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet249.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet249.coordIndex = new MFInt32(new int[0,1]);
let Coordinate250 = browser.currentScene.createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[-0.25,-1.1,0,-0.25,-1.15,0]);
IndexedLineSet249.coord = Coordinate250;

Shape246.geometry = IndexedLineSet249;

HAnimSegment243.children[1] = Shape246;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint233.children[1] = HAnimJoint242;

HAnimJoint224.children[1] = HAnimJoint233;

HAnimJoint215.children[1] = HAnimJoint224;

HAnimJoint201.children[1] = HAnimJoint215;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint251.name = "r_tarsometatarsal_5";
HAnimJoint251.center = new SFVec3f(new float[-0.33,-0.52,0]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.DEF = "hanim_r_metatarsal_5";
HAnimSegment252.name = "r_metatarsal_5";
let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new SFVec3f(new float[-0.33,-0.52,0]);
let Shape254 = browser.currentScene.createNode("Shape");
Shape254.USE = "HAnimJointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = Transform253;

let Shape255 = browser.currentScene.createNode("Shape");
let Appearance256 = browser.currentScene.createNode("Appearance");
let Material257 = browser.currentScene.createNode("Material");
Material257.emissiveColor = new SFColor(new float[1,1,1]);
Appearance256.material = Material257;

Shape255.appearance = Appearance256;

let IndexedLineSet258 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet258.DEF = "TMT5toMTP5";
IndexedLineSet258.coordIndex = new MFInt32(new int[0,1]);
let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet258.coord = Coordinate259;

Shape255.geometry = IndexedLineSet258;

HAnimSegment252.children[1] = Shape255;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint260.name = "r_metatarsophalangeal_5";
HAnimJoint260.center = new SFVec3f(new float[-0.34,-0.8,0]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment261.name = "r_tarsal_proximal_phalanx_5";
let Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new SFVec3f(new float[-0.34,-0.8,0]);
let Shape263 = browser.currentScene.createNode("Shape");
Shape263.USE = "HAnimJointShape";
Transform262.child = new undefined();

Transform262.child[0] = Shape263;

HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = Transform262;

let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let Material266 = browser.currentScene.createNode("Material");
Material266.emissiveColor = new SFColor(new float[1,1,1]);
Appearance265.material = Material266;

Shape264.appearance = Appearance265;

let IndexedLineSet267 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet267.DEF = "MTP5toPIP5";
IndexedLineSet267.coordIndex = new MFInt32(new int[0,1]);
let Coordinate268 = browser.currentScene.createNode("Coordinate");
Coordinate268.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet267.coord = Coordinate268;

Shape264.geometry = IndexedLineSet267;

HAnimSegment261.children[1] = Shape264;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint269.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint269.center = new SFVec3f(new float[-0.34,-0.95,0]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment270.name = "r_tarsal_middle_phalanx_5";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.34,-0.95,0]);
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

let Shape273 = browser.currentScene.createNode("Shape");
let Appearance274 = browser.currentScene.createNode("Appearance");
let Material275 = browser.currentScene.createNode("Material");
Material275.emissiveColor = new SFColor(new float[1,1,1]);
Appearance274.material = Material275;

Shape273.appearance = Appearance274;

let IndexedLineSet276 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet276.DEF = "PIP5toDIP5";
IndexedLineSet276.coordIndex = new MFInt32(new int[0,1]);
let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet276.coord = Coordinate277;

Shape273.geometry = IndexedLineSet276;

HAnimSegment270.children[1] = Shape273;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint278.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint278.center = new SFVec3f(new float[-0.34,-1.05,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimSegment279.name = "r_tarsal_distal_phalanx_5";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.34,-1.05,0]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "HAnimJointShape";
Transform280.child = new undefined();

Transform280.child[0] = Shape281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

let Shape282 = browser.currentScene.createNode("Shape");
let Appearance283 = browser.currentScene.createNode("Appearance");
let Material284 = browser.currentScene.createNode("Material");
Material284.emissiveColor = new SFColor(new float[1,1,1]);
Appearance283.material = Material284;

Shape282.appearance = Appearance283;

let IndexedLineSet285 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet285.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet285.coordIndex = new MFInt32(new int[0,1]);
let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[-0.34,-1.05,0,-0.34,-1.08,0]);
IndexedLineSet285.coord = Coordinate286;

Shape282.geometry = IndexedLineSet285;

HAnimSegment279.children[1] = Shape282;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint260.children[1] = HAnimJoint269;

HAnimJoint251.children[1] = HAnimJoint260;

HAnimJoint201.children[2] = HAnimJoint251;

HAnimJoint192.children[1] = HAnimJoint201;

HAnimJoint30.children[2] = HAnimJoint192;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimJoint30;

HAnimHumanoid26.joints[1] = HAnimJoint29;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_calcaneus";
HAnimHumanoid26.segments[2] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_cuboid";
HAnimHumanoid26.segments[3] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_r_cuneiform_1";
HAnimHumanoid26.segments[4] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_r_cuneiform_2";
HAnimHumanoid26.segments[5] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_r_cuneiform_3";
HAnimHumanoid26.segments[6] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_metatarsal_1";
HAnimHumanoid26.segments[7] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_metatarsal_2";
HAnimHumanoid26.segments[8] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_metatarsal_3";
HAnimHumanoid26.segments[9] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_metatarsal_4";
HAnimHumanoid26.segments[10] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_metatarsal_5";
HAnimHumanoid26.segments[11] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_navicular";
HAnimHumanoid26.segments[12] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_talus";
HAnimHumanoid26.segments[13] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid26.segments[14] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid26.segments[15] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid26.segments[16] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid26.segments[17] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid26.segments[18] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_tarsal_middle_phalanx_1";
HAnimHumanoid26.segments[19] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid26.segments[20] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid26.segments[21] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid26.segments[22] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid26.segments[23] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid26.segments[24] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid26.segments[25] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid26.segments[26] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid26.segments[27] = HAnimSegment312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[28] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid26.joints[29] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid26.joints[30] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid26.joints[31] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid26.joints[32] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid26.joints[33] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid26.joints[34] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid26.joints[35] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid26.joints[36] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid26.joints[37] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid26.joints[38] = HAnimJoint323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_r_talocrural";
HAnimHumanoid26.joints[39] = HAnimJoint324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid26.joints[40] = HAnimJoint325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid26.joints[41] = HAnimJoint326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid26.joints[42] = HAnimJoint327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid26.joints[43] = HAnimJoint328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid26.joints[44] = HAnimJoint329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimHumanoid26.joints[45] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[46] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[47] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[48] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid26.joints[49] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid26.joints[50] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid26.joints[51] = HAnimJoint336;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid26.joints[52] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid26.joints[53] = HAnimJoint338;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_r_transversetarsal";
HAnimHumanoid26.joints[54] = HAnimJoint339;

browser.currentScene.children[1] = HAnimHumanoid26;


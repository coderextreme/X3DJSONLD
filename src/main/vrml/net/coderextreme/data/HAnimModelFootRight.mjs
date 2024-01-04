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
meta6.content = "Sat, 30 Dec 2023 07:42:48 GMT";
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

let component22 = browser.currentScene.createNode("component");
component22.name = "HAnim";
component22.level = 1;
head1.component[20] = component22;

head = head1;

let WorldInfo24 = browser.currentScene.createNode("WorldInfo");
WorldInfo24.title = "HAnimModelFootRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo24;

let HAnimHumanoid25 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid25.DEF = "hanim_Foot_Right";
HAnimHumanoid25.name = "Foot_Right";
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
HAnimJoint29.DEF = "hanim_r_talocrural";
HAnimJoint29.description = "connection joint of foot to leg above";
HAnimJoint29.name = "r_talocrural";
let HAnimSegment30 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment30.DEF = "hanim_r_talus";
HAnimSegment30.name = "r_talus";
let Transform31 = browser.currentScene.createNode("Transform");
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.DEF = "HAnimJointShape";
let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearance";
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
IndexedLineSet39.DEF = "TCtoTCN";
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
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
IndexedLineSet44.DEF = "TCtoCC";
IndexedLineSet44.coordIndex = new MFInt32(new int[0,1]);
let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet44.coord = Coordinate45;

Shape41.geometry = IndexedLineSet44;

HAnimSegment30.children[2] = Shape41;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint46.name = "r_talocalcaneonavicular";
HAnimJoint46.center = new SFVec3f(new float[0,-0.3,0]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.DEF = "hanim_r_navicular";
HAnimSegment47.name = "r_navicular";
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "HAnimJointShape";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Transform48;

let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.emissiveColor = new SFColor(new float[1,1,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let IndexedLineSet53 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet53.DEF = "TCNtoCN1";
IndexedLineSet53.coordIndex = new MFInt32(new int[0,1]);
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet53.coord = Coordinate54;

Shape50.geometry = IndexedLineSet53;

HAnimSegment47.children[1] = Shape50;

let Shape55 = browser.currentScene.createNode("Shape");
let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.emissiveColor = new SFColor(new float[1,1,1]);
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

let IndexedLineSet58 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet58.DEF = "TCNtoCN2";
IndexedLineSet58.coordIndex = new MFInt32(new int[0,1]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet58.coord = Coordinate59;

Shape55.geometry = IndexedLineSet58;

HAnimSegment47.children[2] = Shape55;

let Shape60 = browser.currentScene.createNode("Shape");
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.emissiveColor = new SFColor(new float[1,1,1]);
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

let IndexedLineSet63 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet63.DEF = "TCNtoCN3";
IndexedLineSet63.coordIndex = new MFInt32(new int[0,1]);
let Coordinate64 = browser.currentScene.createNode("Coordinate");
Coordinate64.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet63.coord = Coordinate64;

Shape60.geometry = IndexedLineSet63;

HAnimSegment47.children[3] = Shape60;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint65.name = "r_cuneonavicular_1";
HAnimJoint65.center = new SFVec3f(new float[0.1,-0.45,0]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.DEF = "hanim_r_cuneiform_1";
HAnimSegment66.name = "r_cuneiform_1";
let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[0.1,-0.45,0]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "HAnimJointShape";
Transform67.child = new undefined();

Transform67.child[0] = Shape68;

HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = Transform67;

let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.emissiveColor = new SFColor(new float[1,1,1]);
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

let IndexedLineSet72 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet72.DEF = "CN1toTMT1";
IndexedLineSet72.coordIndex = new MFInt32(new int[0,1]);
let Coordinate73 = browser.currentScene.createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet72.coord = Coordinate73;

Shape69.geometry = IndexedLineSet72;

HAnimSegment66.children[1] = Shape69;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint74.name = "r_tarsometatarsal_1";
HAnimJoint74.center = new SFVec3f(new float[0.1,-0.6,0]);
let HAnimSegment75 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment75.DEF = "hanim_r_metatarsal_1";
HAnimSegment75.name = "r_metatarsal_1";
let Transform76 = browser.currentScene.createNode("Transform");
Transform76.translation = new SFVec3f(new float[0.1,-0.6,0]);
let Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "HAnimJointShape";
Transform76.child = new undefined();

Transform76.child[0] = Shape77;

HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = Transform76;

let Shape78 = browser.currentScene.createNode("Shape");
let Appearance79 = browser.currentScene.createNode("Appearance");
let Material80 = browser.currentScene.createNode("Material");
Material80.emissiveColor = new SFColor(new float[1,1,1]);
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

let IndexedLineSet81 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet81.DEF = "TMT1toMTP1";
IndexedLineSet81.coordIndex = new MFInt32(new int[0,1]);
let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet81.coord = Coordinate82;

Shape78.geometry = IndexedLineSet81;

HAnimSegment75.children[1] = Shape78;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint83.name = "r_metatarsophalangeal_1";
HAnimJoint83.center = new SFVec3f(new float[0.1,-0.9,0]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment84.name = "r_tarsal_proximal_phalanx_1";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = new SFVec3f(new float[0.1,-0.9,0]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "HAnimJointShape";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = Transform85;

let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
let Material89 = browser.currentScene.createNode("Material");
Material89.emissiveColor = new SFColor(new float[1,1,1]);
Appearance88.material = Material89;

Shape87.appearance = Appearance88;

let IndexedLineSet90 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet90.DEF = "MTP1toIP1";
IndexedLineSet90.coordIndex = new MFInt32(new int[0,1]);
let Coordinate91 = browser.currentScene.createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet90.coord = Coordinate91;

Shape87.geometry = IndexedLineSet90;

HAnimSegment84.children[1] = Shape87;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint92.name = "r_tarsal_interphalangeal_1";
HAnimJoint92.center = new SFVec3f(new float[0.1,-1.05,0]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimSegment93.name = "r_tarsal_distal_phalanx_1";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new SFVec3f(new float[0.1,-1.05,0]);
let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "HAnimJointShape";
Transform94.child = new undefined();

Transform94.child[0] = Shape95;

HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = Transform94;

let Shape96 = browser.currentScene.createNode("Shape");
let Appearance97 = browser.currentScene.createNode("Appearance");
let Material98 = browser.currentScene.createNode("Material");
Material98.emissiveColor = new SFColor(new float[1,1,1]);
Appearance97.material = Material98;

Shape96.appearance = Appearance97;

let IndexedLineSet99 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet99.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet99.coordIndex = new MFInt32(new int[0,1]);
let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[0.1,-1.05,0,0.1,-1.1,0]);
IndexedLineSet99.coord = Coordinate100;

Shape96.geometry = IndexedLineSet99;

HAnimSegment93.children[1] = Shape96;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint83.children[1] = HAnimJoint92;

HAnimJoint74.children[1] = HAnimJoint83;

HAnimJoint65.children[1] = HAnimJoint74;

HAnimJoint46.children[1] = HAnimJoint65;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint101.name = "r_cuneonavicular_2";
HAnimJoint101.center = new SFVec3f(new float[0,-0.45,0]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.DEF = "hanim_r_cuneiform_2";
HAnimSegment102.name = "r_cuneiform_2";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "HAnimJointShape";
Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment102.children = new MFNode();

HAnimSegment102.children[0] = Transform103;

let Shape105 = browser.currentScene.createNode("Shape");
let Appearance106 = browser.currentScene.createNode("Appearance");
let Material107 = browser.currentScene.createNode("Material");
Material107.emissiveColor = new SFColor(new float[1,1,1]);
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

let IndexedLineSet108 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet108.DEF = "CN2toTMT2";
IndexedLineSet108.coordIndex = new MFInt32(new int[0,1]);
let Coordinate109 = browser.currentScene.createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet108.coord = Coordinate109;

Shape105.geometry = IndexedLineSet108;

HAnimSegment102.children[1] = Shape105;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint110.name = "r_tarsometatarsal_2";
HAnimJoint110.center = new SFVec3f(new float[-0.05,-0.6,0]);
let HAnimSegment111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment111.DEF = "hanim_r_metatarsal_2";
HAnimSegment111.name = "r_metatarsal_2";
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.translation = new SFVec3f(new float[-0.05,-0.6,0]);
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimJointShape";
Transform112.child = new undefined();

Transform112.child[0] = Shape113;

HAnimSegment111.children = new MFNode();

HAnimSegment111.children[0] = Transform112;

let Shape114 = browser.currentScene.createNode("Shape");
let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.emissiveColor = new SFColor(new float[1,1,1]);
Appearance115.material = Material116;

Shape114.appearance = Appearance115;

let IndexedLineSet117 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet117.DEF = "TMT2toMTP2";
IndexedLineSet117.coordIndex = new MFInt32(new int[0,1]);
let Coordinate118 = browser.currentScene.createNode("Coordinate");
Coordinate118.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet117.coord = Coordinate118;

Shape114.geometry = IndexedLineSet117;

HAnimSegment111.children[1] = Shape114;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimSegment111;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint119.name = "r_metatarsophalangeal_2";
HAnimJoint119.center = new SFVec3f(new float[-0.05,-0.9,0]);
let HAnimSegment120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment120.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment120.name = "r_tarsal_proximal_phalanx_2";
let Transform121 = browser.currentScene.createNode("Transform");
Transform121.translation = new SFVec3f(new float[-0.05,-0.9,0]);
let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "HAnimJointShape";
Transform121.child = new undefined();

Transform121.child[0] = Shape122;

HAnimSegment120.children = new MFNode();

HAnimSegment120.children[0] = Transform121;

let Shape123 = browser.currentScene.createNode("Shape");
let Appearance124 = browser.currentScene.createNode("Appearance");
let Material125 = browser.currentScene.createNode("Material");
Material125.emissiveColor = new SFColor(new float[1,1,1]);
Appearance124.material = Material125;

Shape123.appearance = Appearance124;

let IndexedLineSet126 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet126.DEF = "MTP2toPIP2";
IndexedLineSet126.coordIndex = new MFInt32(new int[0,1]);
let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet126.coord = Coordinate127;

Shape123.geometry = IndexedLineSet126;

HAnimSegment120.children[1] = Shape123;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint128.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint128.center = new SFVec3f(new float[-0.05,-1.05,0]);
let HAnimSegment129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment129.name = "r_tarsal_middle_phalanx_2";
let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new SFVec3f(new float[-0.05,-1.05,0]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimJointShape";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSegment129.children = new MFNode();

HAnimSegment129.children[0] = Transform130;

let Shape132 = browser.currentScene.createNode("Shape");
let Appearance133 = browser.currentScene.createNode("Appearance");
let Material134 = browser.currentScene.createNode("Material");
Material134.emissiveColor = new SFColor(new float[1,1,1]);
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

let IndexedLineSet135 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet135.DEF = "PIP2toDIP2";
IndexedLineSet135.coordIndex = new MFInt32(new int[0,1]);
let Coordinate136 = browser.currentScene.createNode("Coordinate");
Coordinate136.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet135.coord = Coordinate136;

Shape132.geometry = IndexedLineSet135;

HAnimSegment129.children[1] = Shape132;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint137.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint137.center = new SFVec3f(new float[-0.05,-1.12,0]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment138.name = "r_tarsal_distal_phalanx_2";
let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new SFVec3f(new float[-0.05,-1.12,0]);
let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "HAnimJointShape";
Transform139.child = new undefined();

Transform139.child[0] = Shape140;

HAnimSegment138.children = new MFNode();

HAnimSegment138.children[0] = Transform139;

let Shape141 = browser.currentScene.createNode("Shape");
let Appearance142 = browser.currentScene.createNode("Appearance");
let Material143 = browser.currentScene.createNode("Material");
Material143.emissiveColor = new SFColor(new float[1,1,1]);
Appearance142.material = Material143;

Shape141.appearance = Appearance142;

let IndexedLineSet144 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet144.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet144.coordIndex = new MFInt32(new int[0,1]);
let Coordinate145 = browser.currentScene.createNode("Coordinate");
Coordinate145.point = new MFVec3f(new float[-0.05,-1.12,0,-0.05,-1.16,0]);
IndexedLineSet144.coord = Coordinate145;

Shape141.geometry = IndexedLineSet144;

HAnimSegment138.children[1] = Shape141;

HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

HAnimJoint128.children[1] = HAnimJoint137;

HAnimJoint119.children[1] = HAnimJoint128;

HAnimJoint110.children[1] = HAnimJoint119;

HAnimJoint101.children[1] = HAnimJoint110;

HAnimJoint46.children[2] = HAnimJoint101;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint146.name = "r_cuneonavicular_3";
HAnimJoint146.center = new SFVec3f(new float[-0.1,-0.4,0]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_r_cuneiform_3";
HAnimSegment147.name = "r_cuneiform_3";
let Transform148 = browser.currentScene.createNode("Transform");
Transform148.translation = new SFVec3f(new float[-0.1,-0.4,0]);
let Shape149 = browser.currentScene.createNode("Shape");
Shape149.USE = "HAnimJointShape";
Transform148.child = new undefined();

Transform148.child[0] = Shape149;

HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = Transform148;

let Shape150 = browser.currentScene.createNode("Shape");
let Appearance151 = browser.currentScene.createNode("Appearance");
let Material152 = browser.currentScene.createNode("Material");
Material152.emissiveColor = new SFColor(new float[1,1,1]);
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

let IndexedLineSet153 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet153.DEF = "CN3toTMT3";
IndexedLineSet153.coordIndex = new MFInt32(new int[0,1]);
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet153.coord = Coordinate154;

Shape150.geometry = IndexedLineSet153;

HAnimSegment147.children[1] = Shape150;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint155.name = "r_tarsometatarsal_3";
HAnimJoint155.center = new SFVec3f(new float[-0.15,-0.6,0]);
let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.DEF = "hanim_r_metatarsal_3";
HAnimSegment156.name = "r_metatarsal_3";
let Transform157 = browser.currentScene.createNode("Transform");
Transform157.translation = new SFVec3f(new float[-0.15,-0.6,0]);
let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "HAnimJointShape";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

HAnimSegment156.children = new MFNode();

HAnimSegment156.children[0] = Transform157;

let Shape159 = browser.currentScene.createNode("Shape");
let Appearance160 = browser.currentScene.createNode("Appearance");
let Material161 = browser.currentScene.createNode("Material");
Material161.emissiveColor = new SFColor(new float[1,1,1]);
Appearance160.material = Material161;

Shape159.appearance = Appearance160;

let IndexedLineSet162 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet162.DEF = "TMT3toMTP3";
IndexedLineSet162.coordIndex = new MFInt32(new int[0,1]);
let Coordinate163 = browser.currentScene.createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet162.coord = Coordinate163;

Shape159.geometry = IndexedLineSet162;

HAnimSegment156.children[1] = Shape159;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint164.name = "r_metatarsophalangeal_3";
HAnimJoint164.center = new SFVec3f(new float[-0.15,-0.9,0]);
let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment165.name = "r_tarsal_proximal_phalanx_3";
let Transform166 = browser.currentScene.createNode("Transform");
Transform166.translation = new SFVec3f(new float[-0.15,-0.9,0]);
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform166.child = new undefined();

Transform166.child[0] = Shape167;

HAnimSegment165.children = new MFNode();

HAnimSegment165.children[0] = Transform166;

let Shape168 = browser.currentScene.createNode("Shape");
let Appearance169 = browser.currentScene.createNode("Appearance");
let Material170 = browser.currentScene.createNode("Material");
Material170.emissiveColor = new SFColor(new float[1,1,1]);
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

let IndexedLineSet171 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet171.DEF = "MTP3toPIP3";
IndexedLineSet171.coordIndex = new MFInt32(new int[0,1]);
let Coordinate172 = browser.currentScene.createNode("Coordinate");
Coordinate172.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet171.coord = Coordinate172;

Shape168.geometry = IndexedLineSet171;

HAnimSegment165.children[1] = Shape168;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimSegment165;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint173.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint173.center = new SFVec3f(new float[-0.15,-1.05,0]);
let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment174.name = "r_tarsal_middle_phalanx_3";
let Transform175 = browser.currentScene.createNode("Transform");
Transform175.translation = new SFVec3f(new float[-0.15,-1.05,0]);
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

HAnimSegment174.children = new MFNode();

HAnimSegment174.children[0] = Transform175;

let Shape177 = browser.currentScene.createNode("Shape");
let Appearance178 = browser.currentScene.createNode("Appearance");
let Material179 = browser.currentScene.createNode("Material");
Material179.emissiveColor = new SFColor(new float[1,1,1]);
Appearance178.material = Material179;

Shape177.appearance = Appearance178;

let IndexedLineSet180 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet180.DEF = "PIP3toDIP3";
IndexedLineSet180.coordIndex = new MFInt32(new int[0,1]);
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet180.coord = Coordinate181;

Shape177.geometry = IndexedLineSet180;

HAnimSegment174.children[1] = Shape177;

HAnimJoint173.children = new MFNode();

HAnimJoint173.children[0] = HAnimSegment174;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint182.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint182.center = new SFVec3f(new float[-0.15,-1.13,0]);
let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimSegment183.name = "r_tarsal_distal_phalanx_3";
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new SFVec3f(new float[-0.15,-1.13,0]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = Transform184;

let Shape186 = browser.currentScene.createNode("Shape");
let Appearance187 = browser.currentScene.createNode("Appearance");
let Material188 = browser.currentScene.createNode("Material");
Material188.emissiveColor = new SFColor(new float[1,1,1]);
Appearance187.material = Material188;

Shape186.appearance = Appearance187;

let IndexedLineSet189 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet189.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet189.coordIndex = new MFInt32(new int[0,1]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[-0.15,-1.13,0,-0.15,-1.16,0]);
IndexedLineSet189.coord = Coordinate190;

Shape186.geometry = IndexedLineSet189;

HAnimSegment183.children[1] = Shape186;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint173.children[1] = HAnimJoint182;

HAnimJoint164.children[1] = HAnimJoint173;

HAnimJoint155.children[1] = HAnimJoint164;

HAnimJoint146.children[1] = HAnimJoint155;

HAnimJoint46.children[3] = HAnimJoint146;

HAnimJoint29.children[1] = HAnimJoint46;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.DEF = "hanim_r_calcaneocuboid";
HAnimJoint191.name = "r_calcaneocuboid";
HAnimJoint191.center = new SFVec3f(new float[-0.2,0.3,0]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.DEF = "hanim_r_calcaneus";
HAnimSegment192.name = "r_calcaneus";
let Transform193 = browser.currentScene.createNode("Transform");
Transform193.translation = new SFVec3f(new float[-0.2,0.3,0]);
let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "HAnimJointShape";
Transform193.child = new undefined();

Transform193.child[0] = Shape194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

let Shape195 = browser.currentScene.createNode("Shape");
let Appearance196 = browser.currentScene.createNode("Appearance");
let Material197 = browser.currentScene.createNode("Material");
Material197.emissiveColor = new SFColor(new float[1,1,1]);
Appearance196.material = Material197;

Shape195.appearance = Appearance196;

let IndexedLineSet198 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet198.DEF = "CCtoTT";
IndexedLineSet198.coordIndex = new MFInt32(new int[0,1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet198.coord = Coordinate199;

Shape195.geometry = IndexedLineSet198;

HAnimSegment192.children[1] = Shape195;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.DEF = "hanim_r_transversetarsal";
HAnimJoint200.name = "r_transversetarsal";
HAnimJoint200.center = new SFVec3f(new float[-0.21,-0.3,0]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.DEF = "hanim_r_cuboid";
HAnimSegment201.name = "r_cuboid";
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new SFVec3f(new float[-0.21,-0.3,0]);
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
IndexedLineSet207.DEF = "TTtoTMT4";
IndexedLineSet207.coordIndex = new MFInt32(new int[0,1]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet207.coord = Coordinate208;

Shape204.geometry = IndexedLineSet207;

HAnimSegment201.children[1] = Shape204;

let Shape209 = browser.currentScene.createNode("Shape");
let Appearance210 = browser.currentScene.createNode("Appearance");
let Material211 = browser.currentScene.createNode("Material");
Material211.emissiveColor = new SFColor(new float[1,1,1]);
Appearance210.material = Material211;

Shape209.appearance = Appearance210;

let IndexedLineSet212 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet212.DEF = "TTtoTMT5";
IndexedLineSet212.coordIndex = new MFInt32(new int[0,1]);
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet212.coord = Coordinate213;

Shape209.geometry = IndexedLineSet212;

HAnimSegment201.children[2] = Shape209;

HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint214.name = "r_tarsometatarsal_4";
HAnimJoint214.center = new SFVec3f(new float[-0.25,-0.58,0]);
let HAnimSegment215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment215.DEF = "hanim_r_metatarsal_4";
HAnimSegment215.name = "r_metatarsal_4";
let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new SFVec3f(new float[-0.25,-0.58,0]);
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = Transform216;

let Shape218 = browser.currentScene.createNode("Shape");
let Appearance219 = browser.currentScene.createNode("Appearance");
let Material220 = browser.currentScene.createNode("Material");
Material220.emissiveColor = new SFColor(new float[1,1,1]);
Appearance219.material = Material220;

Shape218.appearance = Appearance219;

let IndexedLineSet221 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet221.DEF = "TMT4toMTP4";
IndexedLineSet221.coordIndex = new MFInt32(new int[0,1]);
let Coordinate222 = browser.currentScene.createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet221.coord = Coordinate222;

Shape218.geometry = IndexedLineSet221;

HAnimSegment215.children[1] = Shape218;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint223.name = "r_metatarsophalangeal_4";
HAnimJoint223.center = new SFVec3f(new float[-0.25,-0.87,0]);
let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment224.name = "r_tarsal_proximal_phalanx_4";
let Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = new SFVec3f(new float[-0.25,-0.87,0]);
let Shape226 = browser.currentScene.createNode("Shape");
Shape226.USE = "HAnimJointShape";
Transform225.child = new undefined();

Transform225.child[0] = Shape226;

HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = Transform225;

let Shape227 = browser.currentScene.createNode("Shape");
let Appearance228 = browser.currentScene.createNode("Appearance");
let Material229 = browser.currentScene.createNode("Material");
Material229.emissiveColor = new SFColor(new float[1,1,1]);
Appearance228.material = Material229;

Shape227.appearance = Appearance228;

let IndexedLineSet230 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet230.DEF = "MTP4toPIP4";
IndexedLineSet230.coordIndex = new MFInt32(new int[0,1]);
let Coordinate231 = browser.currentScene.createNode("Coordinate");
Coordinate231.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet230.coord = Coordinate231;

Shape227.geometry = IndexedLineSet230;

HAnimSegment224.children[1] = Shape227;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint232.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint232.center = new SFVec3f(new float[-0.25,-1,0]);
let HAnimSegment233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment233.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment233.name = "r_tarsal_middle_phalanx_4";
let Transform234 = browser.currentScene.createNode("Transform");
Transform234.translation = new SFVec3f(new float[-0.25,-1,0]);
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimJointShape";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

HAnimSegment233.children = new MFNode();

HAnimSegment233.children[0] = Transform234;

let Shape236 = browser.currentScene.createNode("Shape");
let Appearance237 = browser.currentScene.createNode("Appearance");
let Material238 = browser.currentScene.createNode("Material");
Material238.emissiveColor = new SFColor(new float[1,1,1]);
Appearance237.material = Material238;

Shape236.appearance = Appearance237;

let IndexedLineSet239 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet239.DEF = "PIP4toDIP4";
IndexedLineSet239.coordIndex = new MFInt32(new int[0,1]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet239.coord = Coordinate240;

Shape236.geometry = IndexedLineSet239;

HAnimSegment233.children[1] = Shape236;

HAnimJoint232.children = new MFNode();

HAnimJoint232.children[0] = HAnimSegment233;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint241.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint241.center = new SFVec3f(new float[-0.25,-1.1,0]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimSegment242.name = "r_tarsal_distal_phalanx_4";
let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new SFVec3f(new float[-0.25,-1.1,0]);
let Shape244 = browser.currentScene.createNode("Shape");
Shape244.USE = "HAnimJointShape";
Transform243.child = new undefined();

Transform243.child[0] = Shape244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

let Shape245 = browser.currentScene.createNode("Shape");
let Appearance246 = browser.currentScene.createNode("Appearance");
let Material247 = browser.currentScene.createNode("Material");
Material247.emissiveColor = new SFColor(new float[1,1,1]);
Appearance246.material = Material247;

Shape245.appearance = Appearance246;

let IndexedLineSet248 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet248.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet248.coordIndex = new MFInt32(new int[0,1]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[-0.25,-1.1,0,-0.25,-1.15,0]);
IndexedLineSet248.coord = Coordinate249;

Shape245.geometry = IndexedLineSet248;

HAnimSegment242.children[1] = Shape245;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint232.children[1] = HAnimJoint241;

HAnimJoint223.children[1] = HAnimJoint232;

HAnimJoint214.children[1] = HAnimJoint223;

HAnimJoint200.children[1] = HAnimJoint214;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint250.name = "r_tarsometatarsal_5";
HAnimJoint250.center = new SFVec3f(new float[-0.33,-0.52,0]);
let HAnimSegment251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment251.DEF = "hanim_r_metatarsal_5";
HAnimSegment251.name = "r_metatarsal_5";
let Transform252 = browser.currentScene.createNode("Transform");
Transform252.translation = new SFVec3f(new float[-0.33,-0.52,0]);
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252.child = new undefined();

Transform252.child[0] = Shape253;

HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = Transform252;

let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.emissiveColor = new SFColor(new float[1,1,1]);
Appearance255.material = Material256;

Shape254.appearance = Appearance255;

let IndexedLineSet257 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet257.DEF = "TMT5toMTP5";
IndexedLineSet257.coordIndex = new MFInt32(new int[0,1]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet257.coord = Coordinate258;

Shape254.geometry = IndexedLineSet257;

HAnimSegment251.children[1] = Shape254;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint259.name = "r_metatarsophalangeal_5";
HAnimJoint259.center = new SFVec3f(new float[-0.34,-0.8,0]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment260.name = "r_tarsal_proximal_phalanx_5";
let Transform261 = browser.currentScene.createNode("Transform");
Transform261.translation = new SFVec3f(new float[-0.34,-0.8,0]);
let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimJointShape";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = Transform261;

let Shape263 = browser.currentScene.createNode("Shape");
let Appearance264 = browser.currentScene.createNode("Appearance");
let Material265 = browser.currentScene.createNode("Material");
Material265.emissiveColor = new SFColor(new float[1,1,1]);
Appearance264.material = Material265;

Shape263.appearance = Appearance264;

let IndexedLineSet266 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet266.DEF = "MTP5toPIP5";
IndexedLineSet266.coordIndex = new MFInt32(new int[0,1]);
let Coordinate267 = browser.currentScene.createNode("Coordinate");
Coordinate267.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet266.coord = Coordinate267;

Shape263.geometry = IndexedLineSet266;

HAnimSegment260.children[1] = Shape263;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint268.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint268.center = new SFVec3f(new float[-0.34,-0.95,0]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimSegment269.name = "r_tarsal_middle_phalanx_5";
let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.34,-0.95,0]);
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "HAnimJointShape";
Transform270.child = new undefined();

Transform270.child[0] = Shape271;

HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = Transform270;

let Shape272 = browser.currentScene.createNode("Shape");
let Appearance273 = browser.currentScene.createNode("Appearance");
let Material274 = browser.currentScene.createNode("Material");
Material274.emissiveColor = new SFColor(new float[1,1,1]);
Appearance273.material = Material274;

Shape272.appearance = Appearance273;

let IndexedLineSet275 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet275.DEF = "PIP5toDIP5";
IndexedLineSet275.coordIndex = new MFInt32(new int[0,1]);
let Coordinate276 = browser.currentScene.createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet275.coord = Coordinate276;

Shape272.geometry = IndexedLineSet275;

HAnimSegment269.children[1] = Shape272;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint277.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint277.center = new SFVec3f(new float[-0.34,-1.05,0]);
let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimSegment278.name = "r_tarsal_distal_phalanx_5";
let Transform279 = browser.currentScene.createNode("Transform");
Transform279.translation = new SFVec3f(new float[-0.34,-1.05,0]);
let Shape280 = browser.currentScene.createNode("Shape");
Shape280.USE = "HAnimJointShape";
Transform279.child = new undefined();

Transform279.child[0] = Shape280;

HAnimSegment278.children = new MFNode();

HAnimSegment278.children[0] = Transform279;

let Shape281 = browser.currentScene.createNode("Shape");
let Appearance282 = browser.currentScene.createNode("Appearance");
let Material283 = browser.currentScene.createNode("Material");
Material283.emissiveColor = new SFColor(new float[1,1,1]);
Appearance282.material = Material283;

Shape281.appearance = Appearance282;

let IndexedLineSet284 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet284.DEF = "tiptoe_r_tarsal_distal_interphalangeal_5";
IndexedLineSet284.coordIndex = new MFInt32(new int[0,1]);
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.34,-1.05,0,-0.34,-1.08,0]);
IndexedLineSet284.coord = Coordinate285;

Shape281.geometry = IndexedLineSet284;

HAnimSegment278.children[1] = Shape281;

HAnimJoint277.children = new MFNode();

HAnimJoint277.children[0] = HAnimSegment278;

HAnimJoint268.children[1] = HAnimJoint277;

HAnimJoint259.children[1] = HAnimJoint268;

HAnimJoint250.children[1] = HAnimJoint259;

HAnimJoint200.children[2] = HAnimJoint250;

HAnimJoint191.children[1] = HAnimJoint200;

HAnimJoint29.children[2] = HAnimJoint191;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimHumanoid25.joints[1] = HAnimJoint28;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_r_calcaneus";
HAnimHumanoid25.segments[2] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_cuboid";
HAnimHumanoid25.segments[3] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_cuneiform_1";
HAnimHumanoid25.segments[4] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_r_cuneiform_2";
HAnimHumanoid25.segments[5] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_r_cuneiform_3";
HAnimHumanoid25.segments[6] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_r_metatarsal_1";
HAnimHumanoid25.segments[7] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_metatarsal_2";
HAnimHumanoid25.segments[8] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_metatarsal_3";
HAnimHumanoid25.segments[9] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_metatarsal_4";
HAnimHumanoid25.segments[10] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_metatarsal_5";
HAnimHumanoid25.segments[11] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_navicular";
HAnimHumanoid25.segments[12] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_talus";
HAnimHumanoid25.segments[13] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid25.segments[14] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid25.segments[15] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid25.segments[16] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid25.segments[17] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid25.segments[18] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid25.segments[19] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid25.segments[20] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid25.segments[21] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid25.segments[22] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid25.segments[23] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid25.segments[24] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid25.segments[25] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid25.segments[26] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid25.segments[27] = HAnimSegment311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_humanoid_root";
HAnimHumanoid25.joints[28] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid25.joints[29] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid25.joints[30] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid25.joints[31] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid25.joints[32] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid25.joints[33] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid25.joints[34] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid25.joints[35] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid25.joints[36] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid25.joints[37] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid25.joints[38] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_talocrural";
HAnimHumanoid25.joints[39] = HAnimJoint323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid25.joints[40] = HAnimJoint324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid25.joints[41] = HAnimJoint325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid25.joints[42] = HAnimJoint326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid25.joints[43] = HAnimJoint327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid25.joints[44] = HAnimJoint328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid25.joints[45] = HAnimJoint329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid25.joints[46] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid25.joints[47] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid25.joints[48] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid25.joints[49] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid25.joints[50] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid25.joints[51] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid25.joints[52] = HAnimJoint336;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid25.joints[53] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_r_transversetarsal";
HAnimHumanoid25.joints[54] = HAnimJoint338;

browser.currentScene.children[1] = HAnimHumanoid25;


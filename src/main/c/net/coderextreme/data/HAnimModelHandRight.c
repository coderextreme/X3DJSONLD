#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelHandRight.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Right hand using high-fidelity definitions for HAnim version 2.0";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "26 January 2015";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "23 December 2021";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "TODO";
meta7.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "HAnimModelHandRightSegmentVisualizationError.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "error";
meta10.content = "not yet to scale, also relatively flat";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "warning";
meta11.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "info";
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "subject";
meta19.content = "X3D HAnim humanoid animation";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "identifier";
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[19] = meta21;

component component22 = createNode("component");
component22.name = "HAnim";
component22.level = 1;
head1.component[20] = component22;

head = head1;

WorldInfo WorldInfo24 = createNode("WorldInfo");
WorldInfo24.title = "HAnimModelHandRight.x3d";
children = new MFNode();

children[0] = WorldInfo24;

HAnimHumanoid HAnimHumanoid25 = createNode("HAnimHumanoid");
HAnimHumanoid25.DEF = "hanim_Hand_Right";
HAnimHumanoid25.version = "2.0";
HAnimHumanoid25.name = "Hand_Right";
HAnimHumanoid25.loa = 4;
MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "HAnimHumanoid.info";
MetadataSet26.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString27 = createNode("MetadataString");
MetadataString27.name = "authorName";
MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataString27;

HAnimHumanoid25.metadata = new SFNode();

HAnimHumanoid25.metadata[0] = MetadataSet26;

HAnimJoint HAnimJoint28 = createNode("HAnimJoint");
HAnimJoint28.DEF = "hanim_humanoid_root";
HAnimJoint28.name = "humanoid_root";
HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.DEF = "hanim_r_radiocarpal";
HAnimJoint29.description = "connection joint of hand to leg above";
HAnimJoint29.name = "r_radiocarpal";
HAnimSegment HAnimSegment30 = createNode("HAnimSegment");
HAnimSegment30.DEF = "hanim_r_carpal";
HAnimSegment30.name = "r_carpal";
Transform Transform31 = createNode("Transform");
Shape Shape32 = createNode("Shape");
Shape32.DEF = "HAnimJointShape";
Appearance Appearance33 = createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearanceBlue";
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,0,1]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Sphere Sphere35 = createNode("Sphere");
Sphere35.radius = 0.025;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

HAnimSegment30.children = new MFNode();

HAnimSegment30.children[0] = Transform31;

Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.emissiveColor = new SFColor(new float[1,1,1]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

IndexedLineSet IndexedLineSet39 = createNode("IndexedLineSet");
IndexedLineSet39.DEF = "RCToMC12";
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet39.coord = Coordinate40;

Shape36.geometry = IndexedLineSet39;

HAnimSegment30.children[1] = Shape36;

Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.emissiveColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

IndexedLineSet IndexedLineSet44 = createNode("IndexedLineSet");
IndexedLineSet44.DEF = "RCToMC3";
IndexedLineSet44.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate45 = createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet44.coord = Coordinate45;

Shape41.geometry = IndexedLineSet44;

HAnimSegment30.children[2] = Shape41;

Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.emissiveColor = new SFColor(new float[1,1,1]);
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

IndexedLineSet IndexedLineSet49 = createNode("IndexedLineSet");
IndexedLineSet49.DEF = "RCToMC45";
IndexedLineSet49.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate50 = createNode("Coordinate");
Coordinate50.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet49.coord = Coordinate50;

Shape46.geometry = IndexedLineSet49;

HAnimSegment30.children[3] = Shape46;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.DEF = "hanim_r_midcarpal_1";
HAnimJoint51.name = "r_midcarpal_1";
HAnimJoint51.center = new SFVec3f(new float[-0.14,0.09,0]);
HAnimSegment HAnimSegment52 = createNode("HAnimSegment");
HAnimSegment52.DEF = "hanim_r_trapezium";
HAnimSegment52.name = "r_trapezium";
Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[-0.14,0.09,0]);
Shape Shape54 = createNode("Shape");
Shape54.DEF = "HAnimNewJointShape";
Appearance Appearance55 = createNode("Appearance");
Appearance55.DEF = "HAnimJointAppearanceRed";
Material Material56 = createNode("Material");
Material56.diffuseColor = new SFColor(new float[1,0,0]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Sphere Sphere57 = createNode("Sphere");
Sphere57.radius = 0.025;
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment52.children = new MFNode();

HAnimSegment52.children[0] = Transform53;

Shape Shape58 = createNode("Shape");
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.emissiveColor = new SFColor(new float[1,1,1]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

IndexedLineSet IndexedLineSet61 = createNode("IndexedLineSet");
IndexedLineSet61.DEF = "MC12toCMC1";
IndexedLineSet61.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[-0.1,0.1,0,-0.2,0.15,0]);
IndexedLineSet61.coord = Coordinate62;

Shape58.geometry = IndexedLineSet61;

HAnimSegment52.children[1] = Shape58;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint63.name = "r_carpometacarpal_1";
HAnimJoint63.center = new SFVec3f(new float[-0.2,0.15,0]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_r_metacarpal_1";
HAnimSegment64.name = "r_metacarpal_1";
Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[-0.2,0.15,0]);
Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65.child = new undefined();

Transform65.child[0] = Shape66;

HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = Transform65;

Shape Shape67 = createNode("Shape");
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.emissiveColor = new SFColor(new float[1,1,1]);
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

IndexedLineSet IndexedLineSet70 = createNode("IndexedLineSet");
IndexedLineSet70.DEF = "CMC1toMCP1xxx";
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[-0.2,0.15,0,-0.3,0.3,0]);
IndexedLineSet70.coord = Coordinate71;

Shape67.geometry = IndexedLineSet70;

HAnimSegment64.children[1] = Shape67;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint72.name = "r_metacarpophalangeal_1";
HAnimJoint72.center = new SFVec3f(new float[-0.3,0.3,0]);
HAnimSegment HAnimSegment73 = createNode("HAnimSegment");
HAnimSegment73.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment73.name = "r_carpal_proximal_phalanx_1";
Transform Transform74 = createNode("Transform");
Transform74.translation = new SFVec3f(new float[-0.3,0.3,0]);
Shape Shape75 = createNode("Shape");
Shape75.USE = "HAnimJointShape";
Transform74.child = new undefined();

Transform74.child[0] = Shape75;

HAnimSegment73.children = new MFNode();

HAnimSegment73.children[0] = Transform74;

Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.emissiveColor = new SFColor(new float[1,1,1]);
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

IndexedLineSet IndexedLineSet79 = createNode("IndexedLineSet");
IndexedLineSet79.DEF = "MCP11toIP1";
IndexedLineSet79.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate80 = createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[-0.3,0.3,0,-0.35,0.4,0]);
IndexedLineSet79.coord = Coordinate80;

Shape76.geometry = IndexedLineSet79;

HAnimSegment73.children[1] = Shape76;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint81.name = "r_carpal_interphalangeal_1";
HAnimJoint81.center = new SFVec3f(new float[-0.35,0.4,0]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment82.name = "r_carpal_distal_phalanx_1";
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[-0.35,0.4,0]);
Shape Shape84 = createNode("Shape");
Shape84.USE = "HAnimJointShape";
Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

Shape Shape85 = createNode("Shape");
Appearance Appearance86 = createNode("Appearance");
Material Material87 = createNode("Material");
Material87.emissiveColor = new SFColor(new float[1,1,1]);
Appearance86.material = Material87;

Shape85.appearance = Appearance86;

IndexedLineSet IndexedLineSet88 = createNode("IndexedLineSet");
IndexedLineSet88.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet88.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate89 = createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[-0.35,0.4,0,-0.36,0.45,0]);
IndexedLineSet88.coord = Coordinate89;

Shape85.geometry = IndexedLineSet88;

HAnimSegment82.children[1] = Shape85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint72.children[1] = HAnimJoint81;

HAnimJoint63.children[1] = HAnimJoint72;

HAnimJoint51.children[1] = HAnimJoint63;

HAnimJoint29.children[1] = HAnimJoint51;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.DEF = "hanim_r_midcarpal_2";
HAnimJoint90.name = "r_midcarpal_2";
HAnimJoint90.center = new SFVec3f(new float[-0.07,0.07,0]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.DEF = "hanim_r_trapezoid";
HAnimSegment91.name = "r_trapezoid";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[-0.07,0.07,0]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "HAnimNewJointShape";
Transform92.child = new undefined();

Transform92.child[0] = Shape93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

Shape Shape94 = createNode("Shape");
Appearance Appearance95 = createNode("Appearance");
Material Material96 = createNode("Material");
Material96.emissiveColor = new SFColor(new float[1,1,1]);
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

IndexedLineSet IndexedLineSet97 = createNode("IndexedLineSet");
IndexedLineSet97.DEF = "MC12toCMC2";
IndexedLineSet97.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet97.coord = Coordinate98;

Shape94.geometry = IndexedLineSet97;

HAnimSegment91.children[1] = Shape94;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint99.name = "r_carpometacarpal_2";
HAnimJoint99.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimSegment HAnimSegment100 = createNode("HAnimSegment");
HAnimSegment100.DEF = "hanim_r_metacarpal_2";
HAnimSegment100.name = "r_metacarpal_2";
Transform Transform101 = createNode("Transform");
Transform101.translation = new SFVec3f(new float[-0.1,0.2,0]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "HAnimJointShape";
Transform101.child = new undefined();

Transform101.child[0] = Shape102;

HAnimSegment100.children = new MFNode();

HAnimSegment100.children[0] = Transform101;

Shape Shape103 = createNode("Shape");
Appearance Appearance104 = createNode("Appearance");
Material Material105 = createNode("Material");
Material105.emissiveColor = new SFColor(new float[1,1,1]);
Appearance104.material = Material105;

Shape103.appearance = Appearance104;

IndexedLineSet IndexedLineSet106 = createNode("IndexedLineSet");
IndexedLineSet106.DEF = "CMC2toMCP2";
IndexedLineSet106.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[-0.1,0.2,0,-0.15,0.5,0]);
IndexedLineSet106.coord = Coordinate107;

Shape103.geometry = IndexedLineSet106;

HAnimSegment100.children[1] = Shape103;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimSegment100;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint108.name = "r_metacarpophalangeal_2";
HAnimJoint108.center = new SFVec3f(new float[-0.15,0.5,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment109.name = "r_carpal_proximal_phalanx_2";
Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[-0.15,0.5,0]);
Shape Shape111 = createNode("Shape");
Shape111.USE = "HAnimJointShape";
Transform110.child = new undefined();

Transform110.child[0] = Shape111;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Material Material114 = createNode("Material");
Material114.emissiveColor = new SFColor(new float[1,1,1]);
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

IndexedLineSet IndexedLineSet115 = createNode("IndexedLineSet");
IndexedLineSet115.DEF = "MCP2toPIP2";
IndexedLineSet115.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[-0.15,0.5,0,-0.2,0.7,0]);
IndexedLineSet115.coord = Coordinate116;

Shape112.geometry = IndexedLineSet115;

HAnimSegment109.children[1] = Shape112;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint117.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint117.center = new SFVec3f(new float[-0.2,0.7,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment118.name = "r_carpal_middle_phalanx_2";
Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[-0.2,0.7,0]);
Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimJointShape";
Transform119.child = new undefined();

Transform119.child[0] = Shape120;

HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = Transform119;

Shape Shape121 = createNode("Shape");
Appearance Appearance122 = createNode("Appearance");
Material Material123 = createNode("Material");
Material123.emissiveColor = new SFColor(new float[1,1,1]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

IndexedLineSet IndexedLineSet124 = createNode("IndexedLineSet");
IndexedLineSet124.DEF = "PIP2toDIP2";
IndexedLineSet124.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate125 = createNode("Coordinate");
Coordinate125.point = new MFVec3f(new float[-0.2,0.7,0,-0.24,0.87,0]);
IndexedLineSet124.coord = Coordinate125;

Shape121.geometry = IndexedLineSet124;

HAnimSegment118.children[1] = Shape121;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint126.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint126.center = new SFVec3f(new float[-0.24,0.87,0]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment127.name = "r_carpal_distal_phalanx_2";
Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[-0.24,0.87,0]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "HAnimJointShape";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

Shape Shape130 = createNode("Shape");
Appearance Appearance131 = createNode("Appearance");
Material Material132 = createNode("Material");
Material132.emissiveColor = new SFColor(new float[1,1,1]);
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

IndexedLineSet IndexedLineSet133 = createNode("IndexedLineSet");
IndexedLineSet133.DEF = "fingertip_r_carpal_distal_interphalangeal_1";
IndexedLineSet133.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[-0.24,0.87,0,-0.26,0.93,0]);
IndexedLineSet133.coord = Coordinate134;

Shape130.geometry = IndexedLineSet133;

HAnimSegment127.children[1] = Shape130;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint117.children[1] = HAnimJoint126;

HAnimJoint108.children[1] = HAnimJoint117;

HAnimJoint99.children[1] = HAnimJoint108;

HAnimJoint90.children[1] = HAnimJoint99;

HAnimJoint29.children[2] = HAnimJoint90;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.DEF = "hanim_r_midcarpal_3";
HAnimJoint135.name = "r_midcarpal_3";
HAnimJoint135.center = new SFVec3f(new float[0,0.07,0]);
HAnimSegment HAnimSegment136 = createNode("HAnimSegment");
HAnimSegment136.DEF = "hanim_r_capitate";
HAnimSegment136.name = "r_capitate";
Transform Transform137 = createNode("Transform");
Transform137.translation = new SFVec3f(new float[0,0.07,0]);
Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimNewJointShape";
Transform137.child = new undefined();

Transform137.child[0] = Shape138;

HAnimSegment136.children = new MFNode();

HAnimSegment136.children[0] = Transform137;

Shape Shape139 = createNode("Shape");
Appearance Appearance140 = createNode("Appearance");
Material Material141 = createNode("Material");
Material141.emissiveColor = new SFColor(new float[1,1,1]);
Appearance140.material = Material141;

Shape139.appearance = Appearance140;

IndexedLineSet IndexedLineSet142 = createNode("IndexedLineSet");
IndexedLineSet142.DEF = "MC3toCMC3";
IndexedLineSet142.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate143 = createNode("Coordinate");
Coordinate143.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet142.coord = Coordinate143;

Shape139.geometry = IndexedLineSet142;

HAnimSegment136.children[1] = Shape139;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint144.name = "r_carpometacarpal_3";
HAnimJoint144.center = new SFVec3f(new float[0,0.2,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.DEF = "hanim_r_metacarpal_3";
HAnimSegment145.name = "r_metacarpal_3";
Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = Transform146;

Shape Shape148 = createNode("Shape");
Appearance Appearance149 = createNode("Appearance");
Material Material150 = createNode("Material");
Material150.emissiveColor = new SFColor(new float[1,1,1]);
Appearance149.material = Material150;

Shape148.appearance = Appearance149;

IndexedLineSet IndexedLineSet151 = createNode("IndexedLineSet");
IndexedLineSet151.DEF = "CMC3toMCP3";
IndexedLineSet151.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0,0.2,0,-0.03,0.5,0]);
IndexedLineSet151.coord = Coordinate152;

Shape148.geometry = IndexedLineSet151;

HAnimSegment145.children[1] = Shape148;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint153.name = "r_metacarpophalangeal_3";
HAnimJoint153.center = new SFVec3f(new float[-0.03,0.5,0]);
HAnimSegment HAnimSegment154 = createNode("HAnimSegment");
HAnimSegment154.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment154.name = "r_carpal_proximal_phalanx_3";
Transform Transform155 = createNode("Transform");
Transform155.translation = new SFVec3f(new float[-0.03,0.5,0]);
Shape Shape156 = createNode("Shape");
Shape156.USE = "HAnimJointShape";
Transform155.child = new undefined();

Transform155.child[0] = Shape156;

HAnimSegment154.children = new MFNode();

HAnimSegment154.children[0] = Transform155;

Shape Shape157 = createNode("Shape");
Appearance Appearance158 = createNode("Appearance");
Material Material159 = createNode("Material");
Material159.emissiveColor = new SFColor(new float[1,1,1]);
Appearance158.material = Material159;

Shape157.appearance = Appearance158;

IndexedLineSet IndexedLineSet160 = createNode("IndexedLineSet");
IndexedLineSet160.DEF = "MCP3toPIP3";
IndexedLineSet160.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[-0.03,0.5,0,-0.05,0.75,0]);
IndexedLineSet160.coord = Coordinate161;

Shape157.geometry = IndexedLineSet160;

HAnimSegment154.children[1] = Shape157;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint162.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint162.center = new SFVec3f(new float[-0.05,0.75,0]);
HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment163.name = "r_carpal_middle_phalanx_3";
Transform Transform164 = createNode("Transform");
Transform164.translation = new SFVec3f(new float[-0.05,0.75,0]);
Shape Shape165 = createNode("Shape");
Shape165.USE = "HAnimJointShape";
Transform164.child = new undefined();

Transform164.child[0] = Shape165;

HAnimSegment163.children = new MFNode();

HAnimSegment163.children[0] = Transform164;

Shape Shape166 = createNode("Shape");
Appearance Appearance167 = createNode("Appearance");
Material Material168 = createNode("Material");
Material168.emissiveColor = new SFColor(new float[1,1,1]);
Appearance167.material = Material168;

Shape166.appearance = Appearance167;

IndexedLineSet IndexedLineSet169 = createNode("IndexedLineSet");
IndexedLineSet169.DEF = "PIP3toDIP3";
IndexedLineSet169.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate170 = createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[-0.05,0.75,0,-0.08,0.96,0]);
IndexedLineSet169.coord = Coordinate170;

Shape166.geometry = IndexedLineSet169;

HAnimSegment163.children[1] = Shape166;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint171.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint171.center = new SFVec3f(new float[-0.08,0.96,0]);
HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment172.name = "r_carpal_distal_phalanx_3";
Transform Transform173 = createNode("Transform");
Transform173.translation = new SFVec3f(new float[-0.08,0.96,0]);
Shape Shape174 = createNode("Shape");
Shape174.USE = "HAnimJointShape";
Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = Transform173;

Shape Shape175 = createNode("Shape");
Appearance Appearance176 = createNode("Appearance");
Material Material177 = createNode("Material");
Material177.emissiveColor = new SFColor(new float[1,1,1]);
Appearance176.material = Material177;

Shape175.appearance = Appearance176;

IndexedLineSet IndexedLineSet178 = createNode("IndexedLineSet");
IndexedLineSet178.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet178.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[-0.08,0.96,0,-0.09,1.05,0]);
IndexedLineSet178.coord = Coordinate179;

Shape175.geometry = IndexedLineSet178;

HAnimSegment172.children[1] = Shape175;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint162.children[1] = HAnimJoint171;

HAnimJoint153.children[1] = HAnimJoint162;

HAnimJoint144.children[1] = HAnimJoint153;

HAnimJoint135.children[1] = HAnimJoint144;

HAnimJoint29.children[3] = HAnimJoint135;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_r_midcarpal_4_1";
HAnimJoint180.name = "r_midcarpal_4_5";
HAnimJoint180.center = new SFVec3f(new float[0.1,0.1,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_r_hamate";
HAnimSegment181.name = "r_hamate";
Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.1,0.1,0]);
Shape Shape183 = createNode("Shape");
Shape183.USE = "HAnimNewJointShape";
Transform182.child = new undefined();

Transform182.child[0] = Shape183;

HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = Transform182;

Shape Shape184 = createNode("Shape");
Appearance Appearance185 = createNode("Appearance");
Material Material186 = createNode("Material");
Material186.emissiveColor = new SFColor(new float[1,1,1]);
Appearance185.material = Material186;

Shape184.appearance = Appearance185;

IndexedLineSet IndexedLineSet187 = createNode("IndexedLineSet");
IndexedLineSet187.DEF = "MC45toCMC4";
IndexedLineSet187.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate188 = createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet187.coord = Coordinate188;

Shape184.geometry = IndexedLineSet187;

HAnimSegment181.children[1] = Shape184;

Shape Shape189 = createNode("Shape");
Appearance Appearance190 = createNode("Appearance");
Material Material191 = createNode("Material");
Material191.emissiveColor = new SFColor(new float[1,1,1]);
Appearance190.material = Material191;

Shape189.appearance = Appearance190;

IndexedLineSet IndexedLineSet192 = createNode("IndexedLineSet");
IndexedLineSet192.DEF = "MC45toCMC5";
IndexedLineSet192.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.1,0.1,0,0.15,0.17,0]);
IndexedLineSet192.coord = Coordinate193;

Shape189.geometry = IndexedLineSet192;

HAnimSegment181.children[2] = Shape189;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint194.name = "r_carpometacarpal_4";
HAnimJoint194.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.DEF = "hanim_r_metacarpal_4";
HAnimSegment195.name = "r_metacarpal_4";
Transform Transform196 = createNode("Transform");
Transform196.translation = new SFVec3f(new float[0.1,0.2,0]);
Shape Shape197 = createNode("Shape");
Shape197.USE = "HAnimJointShape";
Transform196.child = new undefined();

Transform196.child[0] = Shape197;

HAnimSegment195.children = new MFNode();

HAnimSegment195.children[0] = Transform196;

Shape Shape198 = createNode("Shape");
Appearance Appearance199 = createNode("Appearance");
Material Material200 = createNode("Material");
Material200.emissiveColor = new SFColor(new float[1,1,1]);
Appearance199.material = Material200;

Shape198.appearance = Appearance199;

IndexedLineSet IndexedLineSet201 = createNode("IndexedLineSet");
IndexedLineSet201.DEF = "CMC4toMCP4";
IndexedLineSet201.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.1,0.2,0,0.1,0.47,0]);
IndexedLineSet201.coord = Coordinate202;

Shape198.geometry = IndexedLineSet201;

HAnimSegment195.children[1] = Shape198;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimSegment195;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint203.name = "r_metacarpophalangeal_4";
HAnimJoint203.center = new SFVec3f(new float[0.1,0.47,0]);
HAnimSegment HAnimSegment204 = createNode("HAnimSegment");
HAnimSegment204.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment204.name = "r_carpal_proximal_phalanx_4";
Transform Transform205 = createNode("Transform");
Transform205.translation = new SFVec3f(new float[0.1,0.47,0]);
Shape Shape206 = createNode("Shape");
Shape206.USE = "HAnimJointShape";
Transform205.child = new undefined();

Transform205.child[0] = Shape206;

HAnimSegment204.children = new MFNode();

HAnimSegment204.children[0] = Transform205;

Shape Shape207 = createNode("Shape");
Appearance Appearance208 = createNode("Appearance");
Material Material209 = createNode("Material");
Material209.emissiveColor = new SFColor(new float[1,1,1]);
Appearance208.material = Material209;

Shape207.appearance = Appearance208;

IndexedLineSet IndexedLineSet210 = createNode("IndexedLineSet");
IndexedLineSet210.DEF = "MCP4toPIP4";
IndexedLineSet210.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0.1,0.47,0,0.1,0.7,0]);
IndexedLineSet210.coord = Coordinate211;

Shape207.geometry = IndexedLineSet210;

HAnimSegment204.children[1] = Shape207;

HAnimJoint203.children = new MFNode();

HAnimJoint203.children[0] = HAnimSegment204;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint212.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint212.center = new SFVec3f(new float[0.1,0.7,0]);
HAnimSegment HAnimSegment213 = createNode("HAnimSegment");
HAnimSegment213.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment213.name = "r_carpal_middle_phalanx_4";
Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0.1,0.7,0]);
Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimJointShape";
Transform214.child = new undefined();

Transform214.child[0] = Shape215;

HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = Transform214;

Shape Shape216 = createNode("Shape");
Appearance Appearance217 = createNode("Appearance");
Material Material218 = createNode("Material");
Material218.emissiveColor = new SFColor(new float[1,1,1]);
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

IndexedLineSet IndexedLineSet219 = createNode("IndexedLineSet");
IndexedLineSet219.DEF = "PIP4toDIP4";
IndexedLineSet219.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate220 = createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.1,0.7,0,0.1,0.93,0]);
IndexedLineSet219.coord = Coordinate220;

Shape216.geometry = IndexedLineSet219;

HAnimSegment213.children[1] = Shape216;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint221.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint221.center = new SFVec3f(new float[0.1,0.93,0]);
HAnimSegment HAnimSegment222 = createNode("HAnimSegment");
HAnimSegment222.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment222.name = "r_carpal_distal_phalanx_4";
Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.1,0.93,0]);
Shape Shape224 = createNode("Shape");
Shape224.USE = "HAnimJointShape";
Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = Transform223;

Shape Shape225 = createNode("Shape");
Appearance Appearance226 = createNode("Appearance");
Material Material227 = createNode("Material");
Material227.emissiveColor = new SFColor(new float[1,1,1]);
Appearance226.material = Material227;

Shape225.appearance = Appearance226;

IndexedLineSet IndexedLineSet228 = createNode("IndexedLineSet");
IndexedLineSet228.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet228.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[0.1,0.93,0,0.1,1,0]);
IndexedLineSet228.coord = Coordinate229;

Shape225.geometry = IndexedLineSet228;

HAnimSegment222.children[1] = Shape225;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

HAnimJoint212.children[1] = HAnimJoint221;

HAnimJoint203.children[1] = HAnimJoint212;

HAnimJoint194.children[1] = HAnimJoint203;

HAnimJoint180.children[1] = HAnimJoint194;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint230.name = "r_carpometacarpal_5";
HAnimJoint230.center = new SFVec3f(new float[0.15,0.17,0]);
HAnimSegment HAnimSegment231 = createNode("HAnimSegment");
HAnimSegment231.DEF = "hanim_r_metacarpal_5";
HAnimSegment231.name = "r_metacarpal_5";
Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.15,0.17,0]);
Shape Shape233 = createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

HAnimSegment231.children = new MFNode();

HAnimSegment231.children[0] = Transform232;

Shape Shape234 = createNode("Shape");
Appearance Appearance235 = createNode("Appearance");
Material Material236 = createNode("Material");
Material236.emissiveColor = new SFColor(new float[1,1,1]);
Appearance235.material = Material236;

Shape234.appearance = Appearance235;

IndexedLineSet IndexedLineSet237 = createNode("IndexedLineSet");
IndexedLineSet237.DEF = "CMC5toMCP5";
IndexedLineSet237.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.15,0.17,0,0.2,0.4,0]);
IndexedLineSet237.coord = Coordinate238;

Shape234.geometry = IndexedLineSet237;

HAnimSegment231.children[1] = Shape234;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint239.name = "r_metacarpophalangeal_5";
HAnimJoint239.center = new SFVec3f(new float[0.2,0.4,0]);
HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment240.name = "r_carpal_proximal_phalanx_5";
Transform Transform241 = createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.2,0.4,0]);
Shape Shape242 = createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

HAnimSegment240.children = new MFNode();

HAnimSegment240.children[0] = Transform241;

Shape Shape243 = createNode("Shape");
Appearance Appearance244 = createNode("Appearance");
Material Material245 = createNode("Material");
Material245.emissiveColor = new SFColor(new float[1,1,1]);
Appearance244.material = Material245;

Shape243.appearance = Appearance244;

IndexedLineSet IndexedLineSet246 = createNode("IndexedLineSet");
IndexedLineSet246.DEF = "MCP5toPIP5";
IndexedLineSet246.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0.2,0.4,0,0.23,0.63,0]);
IndexedLineSet246.coord = Coordinate247;

Shape243.geometry = IndexedLineSet246;

HAnimSegment240.children[1] = Shape243;

HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint248.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint248.center = new SFVec3f(new float[0.23,0.63,0]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment249.name = "r_carpal_middle_phalanx_5";
Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.23,0.63,0]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSegment249.children = new MFNode();

HAnimSegment249.children[0] = Transform250;

Shape Shape252 = createNode("Shape");
Appearance Appearance253 = createNode("Appearance");
Material Material254 = createNode("Material");
Material254.emissiveColor = new SFColor(new float[1,1,1]);
Appearance253.material = Material254;

Shape252.appearance = Appearance253;

IndexedLineSet IndexedLineSet255 = createNode("IndexedLineSet");
IndexedLineSet255.DEF = "PIP5toDIP5";
IndexedLineSet255.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.23,0.63,0,0.25,0.79,0]);
IndexedLineSet255.coord = Coordinate256;

Shape252.geometry = IndexedLineSet255;

HAnimSegment249.children[1] = Shape252;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint257.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint257.center = new SFVec3f(new float[0.25,0.79,0]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment258.name = "r_carpal_distal_phalanx_5";
Transform Transform259 = createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.25,0.79,0]);
Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = Transform259;

Shape Shape261 = createNode("Shape");
Appearance Appearance262 = createNode("Appearance");
Material Material263 = createNode("Material");
Material263.emissiveColor = new SFColor(new float[1,1,1]);
Appearance262.material = Material263;

Shape261.appearance = Appearance262;

IndexedLineSet IndexedLineSet264 = createNode("IndexedLineSet");
IndexedLineSet264.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet264.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[0.25,0.79,0,0.26,0.85,0]);
IndexedLineSet264.coord = Coordinate265;

Shape261.geometry = IndexedLineSet264;

HAnimSegment258.children[1] = Shape261;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint248.children[1] = HAnimJoint257;

HAnimJoint239.children[1] = HAnimJoint248;

HAnimJoint230.children[1] = HAnimJoint239;

HAnimJoint180.children[2] = HAnimJoint230;

HAnimJoint29.children[4] = HAnimJoint180;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimHumanoid25.joints[1] = HAnimJoint28;

HAnimSegment HAnimSegment266 = createNode("HAnimSegment");
HAnimSegment266.USE = "hanim_r_capitate";
HAnimHumanoid25.segments[2] = HAnimSegment266;

HAnimSegment HAnimSegment267 = createNode("HAnimSegment");
HAnimSegment267.USE = "hanim_r_carpal";
HAnimHumanoid25.segments[3] = HAnimSegment267;

HAnimSegment HAnimSegment268 = createNode("HAnimSegment");
HAnimSegment268.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid25.segments[4] = HAnimSegment268;

HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid25.segments[5] = HAnimSegment269;

HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid25.segments[6] = HAnimSegment270;

HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid25.segments[7] = HAnimSegment271;

HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid25.segments[8] = HAnimSegment272;

HAnimSegment HAnimSegment273 = createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid25.segments[9] = HAnimSegment273;

HAnimSegment HAnimSegment274 = createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid25.segments[10] = HAnimSegment274;

HAnimSegment HAnimSegment275 = createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid25.segments[11] = HAnimSegment275;

HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid25.segments[12] = HAnimSegment276;

HAnimSegment HAnimSegment277 = createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid25.segments[13] = HAnimSegment277;

HAnimSegment HAnimSegment278 = createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid25.segments[14] = HAnimSegment278;

HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid25.segments[15] = HAnimSegment279;

HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid25.segments[16] = HAnimSegment280;

HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid25.segments[17] = HAnimSegment281;

HAnimSegment HAnimSegment282 = createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_r_hamate";
HAnimHumanoid25.segments[18] = HAnimSegment282;

HAnimSegment HAnimSegment283 = createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_r_metacarpal_1";
HAnimHumanoid25.segments[19] = HAnimSegment283;

HAnimSegment HAnimSegment284 = createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_r_metacarpal_2";
HAnimHumanoid25.segments[20] = HAnimSegment284;

HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_r_metacarpal_3";
HAnimHumanoid25.segments[21] = HAnimSegment285;

HAnimSegment HAnimSegment286 = createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_r_metacarpal_4";
HAnimHumanoid25.segments[22] = HAnimSegment286;

HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_metacarpal_5";
HAnimHumanoid25.segments[23] = HAnimSegment287;

HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_trapezium";
HAnimHumanoid25.segments[24] = HAnimSegment288;

HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_r_trapezoid";
HAnimHumanoid25.segments[25] = HAnimSegment289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_humanoid_root";
HAnimHumanoid25.joints[26] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid25.joints[27] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid25.joints[28] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid25.joints[29] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid25.joints[30] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid25.joints[31] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid25.joints[32] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid25.joints[33] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid25.joints[34] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid25.joints[35] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid25.joints[36] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid25.joints[37] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid25.joints[38] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid25.joints[39] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid25.joints[40] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid25.joints[41] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid25.joints[42] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid25.joints[43] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid25.joints[44] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid25.joints[45] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_midcarpal_1";
HAnimHumanoid25.joints[46] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_midcarpal_2";
HAnimHumanoid25.joints[47] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_midcarpal_3";
HAnimHumanoid25.joints[48] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_midcarpal_4_1";
HAnimHumanoid25.joints[49] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_radiocarpal";
HAnimHumanoid25.joints[50] = HAnimJoint314;

children[1] = HAnimHumanoid25;

}

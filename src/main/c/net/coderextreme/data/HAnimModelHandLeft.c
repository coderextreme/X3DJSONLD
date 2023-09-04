#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelHandLeft.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Left hand, using high-fidelity definitions for HAnim version 2.0";
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
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d";
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
WorldInfo24.title = "HAnimModelHandLeft.x3d";
children = new MFNode();

children[0] = WorldInfo24;

HAnimHumanoid HAnimHumanoid25 = createNode("HAnimHumanoid");
HAnimHumanoid25.DEF = "hanim_Hand_Left";
HAnimHumanoid25.version = "2.0";
HAnimHumanoid25.name = "Hand_Left";
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
HAnimJoint29.DEF = "hanim_l_radiocarpal";
HAnimJoint29.description = "connection joint of hand to leg above";
HAnimJoint29.name = "l_radiocarpal";
HAnimSegment HAnimSegment30 = createNode("HAnimSegment");
HAnimSegment30.DEF = "hanim_l_carpal";
HAnimSegment30.name = "l_carpal";
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
Coordinate40.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
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
Coordinate50.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet49.coord = Coordinate50;

Shape46.geometry = IndexedLineSet49;

HAnimSegment30.children[3] = Shape46;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.DEF = "hanim_l_midcarpal_1";
HAnimJoint51.name = "l_midcarpal_1";
HAnimJoint51.center = new SFVec3f(new float[0.14,0.09,0]);
HAnimSegment HAnimSegment52 = createNode("HAnimSegment");
HAnimSegment52.DEF = "hanim_l_trapezium";
HAnimSegment52.name = "l_trapezium";
Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.14,0.09,0]);
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
Coordinate62.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet61.coord = Coordinate62;

Shape58.geometry = IndexedLineSet61;

HAnimSegment52.children[1] = Shape58;

Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.emissiveColor = new SFColor(new float[1,1,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

IndexedLineSet IndexedLineSet66 = createNode("IndexedLineSet");
IndexedLineSet66.DEF = "MC1toCMC1";
IndexedLineSet66.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate67 = createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet66.coord = Coordinate67;

Shape63.geometry = IndexedLineSet66;

HAnimSegment52.children[2] = Shape63;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint68.name = "l_carpometacarpal_1";
HAnimJoint68.center = new SFVec3f(new float[0.2,0.15,0]);
HAnimSegment HAnimSegment69 = createNode("HAnimSegment");
HAnimSegment69.DEF = "hanim_l_metacarpal_1";
HAnimSegment69.name = "l_metacarpal_1";
Transform Transform70 = createNode("Transform");
Transform70.translation = new SFVec3f(new float[0.2,0.15,0]);
Shape Shape71 = createNode("Shape");
Shape71.USE = "HAnimJointShape";
Transform70.child = new undefined();

Transform70.child[0] = Shape71;

HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = Transform70;

Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.emissiveColor = new SFColor(new float[1,1,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

IndexedLineSet IndexedLineSet75 = createNode("IndexedLineSet");
IndexedLineSet75.DEF = "CMC1toMCP1";
IndexedLineSet75.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet75.coord = Coordinate76;

Shape72.geometry = IndexedLineSet75;

HAnimSegment69.children[1] = Shape72;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint77.name = "l_metacarpophalangeal_1";
HAnimJoint77.center = new SFVec3f(new float[0.3,0.3,0]);
HAnimSegment HAnimSegment78 = createNode("HAnimSegment");
HAnimSegment78.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment78.name = "l_carpal_proximal_phalanx_1";
Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[0.3,0.3,0]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "HAnimJointShape";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.emissiveColor = new SFColor(new float[1,1,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

IndexedLineSet IndexedLineSet84 = createNode("IndexedLineSet");
IndexedLineSet84.DEF = "MCP11toIP1";
IndexedLineSet84.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet84.coord = Coordinate85;

Shape81.geometry = IndexedLineSet84;

HAnimSegment78.children[1] = Shape81;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint86.name = "l_carpal_interphalangeal_1";
HAnimJoint86.center = new SFVec3f(new float[0.35,0.4,0]);
HAnimSegment HAnimSegment87 = createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment87.name = "l_carpal_distal_phalanx_1";
Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0.35,0.4,0]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "HAnimJointShape";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = Transform88;

Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
Material Material92 = createNode("Material");
Material92.emissiveColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

IndexedLineSet IndexedLineSet93 = createNode("IndexedLineSet");
IndexedLineSet93.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet93.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate94 = createNode("Coordinate");
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

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_l_midcarpal_2";
HAnimJoint95.name = "l_midcarpal_2";
HAnimJoint95.center = new SFVec3f(new float[0.07,0.07,0]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_l_trapezoid";
HAnimSegment96.name = "l_trapezoid";
Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[0.07,0.07,0]);
Shape Shape98 = createNode("Shape");
Shape98.USE = "HAnimNewJointShape";
Transform97.child = new undefined();

Transform97.child[0] = Shape98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

Shape Shape99 = createNode("Shape");
Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.emissiveColor = new SFColor(new float[1,1,1]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

IndexedLineSet IndexedLineSet102 = createNode("IndexedLineSet");
IndexedLineSet102.DEF = "MC2toCMC2";
IndexedLineSet102.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet102.coord = Coordinate103;

Shape99.geometry = IndexedLineSet102;

HAnimSegment96.children[1] = Shape99;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint104.name = "l_carpometacarpal_2";
HAnimJoint104.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.DEF = "hanim_l_metacarpal_2";
HAnimSegment105.name = "l_metacarpal_2";
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0.1,0.2,0]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "HAnimJointShape";
Transform106.child = new undefined();

Transform106.child[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

Shape Shape108 = createNode("Shape");
Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Material110.emissiveColor = new SFColor(new float[1,1,1]);
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

IndexedLineSet IndexedLineSet111 = createNode("IndexedLineSet");
IndexedLineSet111.DEF = "CMC2toMCP2";
IndexedLineSet111.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate112 = createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet111.coord = Coordinate112;

Shape108.geometry = IndexedLineSet111;

HAnimSegment105.children[1] = Shape108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint113.name = "l_metacarpophalangeal_2";
HAnimJoint113.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimSegment HAnimSegment114 = createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment114.name = "l_carpal_proximal_phalanx_2";
Transform Transform115 = createNode("Transform");
Transform115.translation = new SFVec3f(new float[0.15,0.5,0]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "HAnimJointShape";
Transform115.child = new undefined();

Transform115.child[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

Shape Shape117 = createNode("Shape");
Appearance Appearance118 = createNode("Appearance");
Material Material119 = createNode("Material");
Material119.emissiveColor = new SFColor(new float[1,1,1]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

IndexedLineSet IndexedLineSet120 = createNode("IndexedLineSet");
IndexedLineSet120.DEF = "MCP2toPIP2";
IndexedLineSet120.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate121 = createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet120.coord = Coordinate121;

Shape117.geometry = IndexedLineSet120;

HAnimSegment114.children[1] = Shape117;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint122.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint122.center = new SFVec3f(new float[0.2,0.7,0]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment123.name = "l_carpal_middle_phalanx_2";
Transform Transform124 = createNode("Transform");
Transform124.translation = new SFVec3f(new float[0.2,0.7,0]);
Shape Shape125 = createNode("Shape");
Shape125.USE = "HAnimJointShape";
Transform124.child = new undefined();

Transform124.child[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

Shape Shape126 = createNode("Shape");
Appearance Appearance127 = createNode("Appearance");
Material Material128 = createNode("Material");
Material128.emissiveColor = new SFColor(new float[1,1,1]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

IndexedLineSet IndexedLineSet129 = createNode("IndexedLineSet");
IndexedLineSet129.DEF = "PIP2toDIP2";
IndexedLineSet129.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate130 = createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet129.coord = Coordinate130;

Shape126.geometry = IndexedLineSet129;

HAnimSegment123.children[1] = Shape126;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint131.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint131.center = new SFVec3f(new float[0.24,0.87,0]);
HAnimSegment HAnimSegment132 = createNode("HAnimSegment");
HAnimSegment132.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment132.name = "l_carpal_distal_phalanx_2";
Transform Transform133 = createNode("Transform");
Transform133.translation = new SFVec3f(new float[0.24,0.87,0]);
Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimJointShape";
Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

Shape Shape135 = createNode("Shape");
Appearance Appearance136 = createNode("Appearance");
Material Material137 = createNode("Material");
Material137.emissiveColor = new SFColor(new float[1,1,1]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

IndexedLineSet IndexedLineSet138 = createNode("IndexedLineSet");
IndexedLineSet138.DEF = "fingertip_l_carpal_distal_interphalangeal_1";
IndexedLineSet138.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate139 = createNode("Coordinate");
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

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_l_midcarpal_3";
HAnimJoint140.name = "l_midcarpal_3";
HAnimJoint140.center = new SFVec3f(new float[0,0.07,0]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_l_capitate";
HAnimSegment141.name = "l_capitate";
Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[0,0.07,0]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "HAnimNewJointShape";
Transform142.child = new undefined();

Transform142.child[0] = Shape143;

HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = Transform142;

Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.emissiveColor = new SFColor(new float[1,1,1]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

IndexedLineSet IndexedLineSet147 = createNode("IndexedLineSet");
IndexedLineSet147.DEF = "MC3toCMC3";
IndexedLineSet147.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

HAnimSegment141.children[1] = Shape144;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint149.name = "l_carpometacarpal_3";
HAnimJoint149.center = new SFVec3f(new float[0,0.2,0]);
HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_l_metacarpal_3";
HAnimSegment150.name = "l_metacarpal_3";
Transform Transform151 = createNode("Transform");
Transform151.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "HAnimJointShape";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

Shape Shape153 = createNode("Shape");
Appearance Appearance154 = createNode("Appearance");
Material Material155 = createNode("Material");
Material155.emissiveColor = new SFColor(new float[1,1,1]);
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

IndexedLineSet IndexedLineSet156 = createNode("IndexedLineSet");
IndexedLineSet156.DEF = "CMC3toMCP3";
IndexedLineSet156.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet156.coord = Coordinate157;

Shape153.geometry = IndexedLineSet156;

HAnimSegment150.children[1] = Shape153;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint158.name = "l_metacarpophalangeal_3";
HAnimJoint158.center = new SFVec3f(new float[0.03,0.5,0]);
HAnimSegment HAnimSegment159 = createNode("HAnimSegment");
HAnimSegment159.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment159.name = "l_carpal_proximal_phalanx_3";
Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.03,0.5,0]);
Shape Shape161 = createNode("Shape");
Shape161.USE = "HAnimJointShape";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Transform160;

Shape Shape162 = createNode("Shape");
Appearance Appearance163 = createNode("Appearance");
Material Material164 = createNode("Material");
Material164.emissiveColor = new SFColor(new float[1,1,1]);
Appearance163.material = Material164;

Shape162.appearance = Appearance163;

IndexedLineSet IndexedLineSet165 = createNode("IndexedLineSet");
IndexedLineSet165.DEF = "MCP3toPIP3";
IndexedLineSet165.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet165.coord = Coordinate166;

Shape162.geometry = IndexedLineSet165;

HAnimSegment159.children[1] = Shape162;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint167.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint167.center = new SFVec3f(new float[0.05,0.75,0]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment168.name = "l_carpal_middle_phalanx_3";
Transform Transform169 = createNode("Transform");
Transform169.translation = new SFVec3f(new float[0.05,0.75,0]);
Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimJointShape";
Transform169.child = new undefined();

Transform169.child[0] = Shape170;

HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = Transform169;

Shape Shape171 = createNode("Shape");
Appearance Appearance172 = createNode("Appearance");
Material Material173 = createNode("Material");
Material173.emissiveColor = new SFColor(new float[1,1,1]);
Appearance172.material = Material173;

Shape171.appearance = Appearance172;

IndexedLineSet IndexedLineSet174 = createNode("IndexedLineSet");
IndexedLineSet174.DEF = "PIP3toDIP3";
IndexedLineSet174.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate175 = createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet174.coord = Coordinate175;

Shape171.geometry = IndexedLineSet174;

HAnimSegment168.children[1] = Shape171;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint176.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint176.center = new SFVec3f(new float[0.08,0.96,0]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment177.name = "l_carpal_distal_phalanx_3";
Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.08,0.96,0]);
Shape Shape179 = createNode("Shape");
Shape179.USE = "HAnimJointShape";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

Shape Shape180 = createNode("Shape");
Appearance Appearance181 = createNode("Appearance");
Material Material182 = createNode("Material");
Material182.emissiveColor = new SFColor(new float[1,1,1]);
Appearance181.material = Material182;

Shape180.appearance = Appearance181;

IndexedLineSet IndexedLineSet183 = createNode("IndexedLineSet");
IndexedLineSet183.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet183.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate184 = createNode("Coordinate");
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

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_midcarpal_4_1";
HAnimJoint185.name = "l_midcarpal_4_5";
HAnimJoint185.center = new SFVec3f(new float[-0.1,0.1,0]);
HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_hamate";
HAnimSegment186.name = "l_hamate";
Transform Transform187 = createNode("Transform");
Transform187.translation = new SFVec3f(new float[-0.1,0.1,0]);
Shape Shape188 = createNode("Shape");
Shape188.USE = "HAnimNewJointShape";
Transform187.child = new undefined();

Transform187.child[0] = Shape188;

HAnimSegment186.children = new MFNode();

HAnimSegment186.children[0] = Transform187;

Shape Shape189 = createNode("Shape");
Appearance Appearance190 = createNode("Appearance");
Material Material191 = createNode("Material");
Material191.emissiveColor = new SFColor(new float[1,1,1]);
Appearance190.material = Material191;

Shape189.appearance = Appearance190;

IndexedLineSet IndexedLineSet192 = createNode("IndexedLineSet");
IndexedLineSet192.DEF = "MC45toCMC4";
IndexedLineSet192.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet192.coord = Coordinate193;

Shape189.geometry = IndexedLineSet192;

HAnimSegment186.children[1] = Shape189;

Shape Shape194 = createNode("Shape");
Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

IndexedLineSet IndexedLineSet197 = createNode("IndexedLineSet");
IndexedLineSet197.DEF = "MC45toCMC5";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment186.children[2] = Shape194;

HAnimJoint185.children = new MFNode();

HAnimJoint185.children[0] = HAnimSegment186;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint199.name = "l_carpometacarpal_4";
HAnimJoint199.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.DEF = "hanim_l_metacarpal_4";
HAnimSegment200.name = "l_metacarpal_4";
Transform Transform201 = createNode("Transform");
Transform201.translation = new SFVec3f(new float[-0.1,0.2,0]);
Shape Shape202 = createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.child = new undefined();

Transform201.child[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

Shape Shape203 = createNode("Shape");
Appearance Appearance204 = createNode("Appearance");
Material Material205 = createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

IndexedLineSet IndexedLineSet206 = createNode("IndexedLineSet");
IndexedLineSet206.DEF = "CMC4toMCP4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate207 = createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint208.name = "l_metacarpophalangeal_4";
HAnimJoint208.center = new SFVec3f(new float[-0.1,0.47,0]);
HAnimSegment HAnimSegment209 = createNode("HAnimSegment");
HAnimSegment209.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment209.name = "l_carpal_proximal_phalanx_4";
Transform Transform210 = createNode("Transform");
Transform210.translation = new SFVec3f(new float[-0.1,0.47,0]);
Shape Shape211 = createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform210.child = new undefined();

Transform210.child[0] = Shape211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

Shape Shape212 = createNode("Shape");
Appearance Appearance213 = createNode("Appearance");
Material Material214 = createNode("Material");
Material214.emissiveColor = new SFColor(new float[1,1,1]);
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

IndexedLineSet IndexedLineSet215 = createNode("IndexedLineSet");
IndexedLineSet215.DEF = "MCP4toPIP4";
IndexedLineSet215.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate216 = createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet215.coord = Coordinate216;

Shape212.geometry = IndexedLineSet215;

HAnimSegment209.children[1] = Shape212;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint217.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint217.center = new SFVec3f(new float[-0.1,0.7,0]);
HAnimSegment HAnimSegment218 = createNode("HAnimSegment");
HAnimSegment218.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment218.name = "l_carpal_middle_phalanx_4";
Transform Transform219 = createNode("Transform");
Transform219.translation = new SFVec3f(new float[-0.1,0.7,0]);
Shape Shape220 = createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

Shape Shape221 = createNode("Shape");
Appearance Appearance222 = createNode("Appearance");
Material Material223 = createNode("Material");
Material223.emissiveColor = new SFColor(new float[1,1,1]);
Appearance222.material = Material223;

Shape221.appearance = Appearance222;

IndexedLineSet IndexedLineSet224 = createNode("IndexedLineSet");
IndexedLineSet224.DEF = "PIP4toDIP4";
IndexedLineSet224.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate225 = createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet224.coord = Coordinate225;

Shape221.geometry = IndexedLineSet224;

HAnimSegment218.children[1] = Shape221;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint226.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint226.center = new SFVec3f(new float[-0.1,0.93,0]);
HAnimSegment HAnimSegment227 = createNode("HAnimSegment");
HAnimSegment227.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment227.name = "l_carpal_distal_phalanx_4";
Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[-0.1,0.93,0]);
Shape Shape229 = createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.child = new undefined();

Transform228.child[0] = Shape229;

HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = Transform228;

Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.emissiveColor = new SFColor(new float[1,1,1]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

IndexedLineSet IndexedLineSet233 = createNode("IndexedLineSet");
IndexedLineSet233.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet233.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate234 = createNode("Coordinate");
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

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint235.name = "l_carpometacarpal_5";
HAnimJoint235.center = new SFVec3f(new float[-0.15,0.17,0]);
HAnimSegment HAnimSegment236 = createNode("HAnimSegment");
HAnimSegment236.DEF = "hanim_l_metacarpal_5";
HAnimSegment236.name = "l_metacarpal_5";
Transform Transform237 = createNode("Transform");
Transform237.translation = new SFVec3f(new float[-0.15,0.17,0]);
Shape Shape238 = createNode("Shape");
Shape238.USE = "HAnimJointShape";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

HAnimSegment236.children = new MFNode();

HAnimSegment236.children[0] = Transform237;

Shape Shape239 = createNode("Shape");
Appearance Appearance240 = createNode("Appearance");
Material Material241 = createNode("Material");
Material241.emissiveColor = new SFColor(new float[1,1,1]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

IndexedLineSet IndexedLineSet242 = createNode("IndexedLineSet");
IndexedLineSet242.DEF = "CMC5toMCP5";
IndexedLineSet242.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate243 = createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet242.coord = Coordinate243;

Shape239.geometry = IndexedLineSet242;

HAnimSegment236.children[1] = Shape239;

HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint244.name = "l_metacarpophalangeal_5";
HAnimJoint244.center = new SFVec3f(new float[-0.2,0.4,0]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment245.name = "l_carpal_proximal_phalanx_5";
Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[-0.2,0.4,0]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.child = new undefined();

Transform246.child[0] = Shape247;

HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = Transform246;

Shape Shape248 = createNode("Shape");
Appearance Appearance249 = createNode("Appearance");
Material Material250 = createNode("Material");
Material250.emissiveColor = new SFColor(new float[1,1,1]);
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

IndexedLineSet IndexedLineSet251 = createNode("IndexedLineSet");
IndexedLineSet251.DEF = "MCP5toPIP5";
IndexedLineSet251.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate252 = createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet251.coord = Coordinate252;

Shape248.geometry = IndexedLineSet251;

HAnimSegment245.children[1] = Shape248;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint253.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint253.center = new SFVec3f(new float[-0.23,0.63,0]);
HAnimSegment HAnimSegment254 = createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment254.name = "l_carpal_middle_phalanx_5";
Transform Transform255 = createNode("Transform");
Transform255.translation = new SFVec3f(new float[-0.23,0.63,0]);
Shape Shape256 = createNode("Shape");
Shape256.USE = "HAnimJointShape";
Transform255.child = new undefined();

Transform255.child[0] = Shape256;

HAnimSegment254.children = new MFNode();

HAnimSegment254.children[0] = Transform255;

Shape Shape257 = createNode("Shape");
Appearance Appearance258 = createNode("Appearance");
Material Material259 = createNode("Material");
Material259.emissiveColor = new SFColor(new float[1,1,1]);
Appearance258.material = Material259;

Shape257.appearance = Appearance258;

IndexedLineSet IndexedLineSet260 = createNode("IndexedLineSet");
IndexedLineSet260.DEF = "PIP5toDIP5";
IndexedLineSet260.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate261 = createNode("Coordinate");
Coordinate261.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet260.coord = Coordinate261;

Shape257.geometry = IndexedLineSet260;

HAnimSegment254.children[1] = Shape257;

HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint262.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint262.center = new SFVec3f(new float[-0.25,0.79,0]);
HAnimSegment HAnimSegment263 = createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment263.name = "l_carpal_distal_phalanx_5";
Transform Transform264 = createNode("Transform");
Transform264.translation = new SFVec3f(new float[-0.25,0.79,0]);
Shape Shape265 = createNode("Shape");
Shape265.USE = "HAnimJointShape";
Transform264.child = new undefined();

Transform264.child[0] = Shape265;

HAnimSegment263.children = new MFNode();

HAnimSegment263.children[0] = Transform264;

Shape Shape266 = createNode("Shape");
Appearance Appearance267 = createNode("Appearance");
Material Material268 = createNode("Material");
Material268.emissiveColor = new SFColor(new float[1,1,1]);
Appearance267.material = Material268;

Shape266.appearance = Appearance267;

IndexedLineSet IndexedLineSet269 = createNode("IndexedLineSet");
IndexedLineSet269.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet269.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate270 = createNode("Coordinate");
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

HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_l_capitate";
HAnimHumanoid25.segments[2] = HAnimSegment271;

HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_l_carpal";
HAnimHumanoid25.segments[3] = HAnimSegment272;

HAnimSegment HAnimSegment273 = createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid25.segments[4] = HAnimSegment273;

HAnimSegment HAnimSegment274 = createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid25.segments[5] = HAnimSegment274;

HAnimSegment HAnimSegment275 = createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid25.segments[6] = HAnimSegment275;

HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid25.segments[7] = HAnimSegment276;

HAnimSegment HAnimSegment277 = createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid25.segments[8] = HAnimSegment277;

HAnimSegment HAnimSegment278 = createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid25.segments[9] = HAnimSegment278;

HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid25.segments[10] = HAnimSegment279;

HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid25.segments[11] = HAnimSegment280;

HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid25.segments[12] = HAnimSegment281;

HAnimSegment HAnimSegment282 = createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid25.segments[13] = HAnimSegment282;

HAnimSegment HAnimSegment283 = createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid25.segments[14] = HAnimSegment283;

HAnimSegment HAnimSegment284 = createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid25.segments[15] = HAnimSegment284;

HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid25.segments[16] = HAnimSegment285;

HAnimSegment HAnimSegment286 = createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid25.segments[17] = HAnimSegment286;

HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_hamate";
HAnimHumanoid25.segments[18] = HAnimSegment287;

HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_metacarpal_1";
HAnimHumanoid25.segments[19] = HAnimSegment288;

HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metacarpal_2";
HAnimHumanoid25.segments[20] = HAnimSegment289;

HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metacarpal_3";
HAnimHumanoid25.segments[21] = HAnimSegment290;

HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metacarpal_4";
HAnimHumanoid25.segments[22] = HAnimSegment291;

HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metacarpal_5";
HAnimHumanoid25.segments[23] = HAnimSegment292;

HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_trapezium";
HAnimHumanoid25.segments[24] = HAnimSegment293;

HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_trapezoid";
HAnimHumanoid25.segments[25] = HAnimSegment294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_humanoid_root";
HAnimHumanoid25.joints[26] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid25.joints[27] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid25.joints[28] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid25.joints[29] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid25.joints[30] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid25.joints[31] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid25.joints[32] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid25.joints[33] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid25.joints[34] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid25.joints[35] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid25.joints[36] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid25.joints[37] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid25.joints[38] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid25.joints[39] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid25.joints[40] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid25.joints[41] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid25.joints[42] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid25.joints[43] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid25.joints[44] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid25.joints[45] = HAnimJoint314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_midcarpal_1";
HAnimHumanoid25.joints[46] = HAnimJoint315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_midcarpal_2";
HAnimHumanoid25.joints[47] = HAnimJoint316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_midcarpal_3";
HAnimHumanoid25.joints[48] = HAnimJoint317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_midcarpal_4_1";
HAnimHumanoid25.joints[49] = HAnimJoint318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_l_radiocarpal";
HAnimHumanoid25.joints[50] = HAnimJoint319;

children[1] = HAnimHumanoid25;

}

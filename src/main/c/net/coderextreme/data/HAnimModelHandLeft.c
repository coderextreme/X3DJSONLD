#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnimModelHandLeft.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Left hand, using high-fidelity definitions for HAnim version 2.0";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "26 January 2015";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "23 December 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2";
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
meta20.name = "TODO";
meta20.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "identifier";
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "generator";
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "license";
meta23.content = "../license.html";
head1.meta[21] = meta23;

head = head1;

WorldInfo WorldInfo25 = createNode("WorldInfo");
WorldInfo25.title = "HAnimModelHandLeft.x3d";
children = new MFNode();

children[0] = WorldInfo25;

HAnimHumanoid HAnimHumanoid26 = createNode("HAnimHumanoid");
HAnimHumanoid26.name = "Hand_Left";
HAnimHumanoid26.DEF = "hanim_Hand_Left";
HAnimHumanoid26.loa = 4;
HAnimHumanoid26.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "HAnimHumanoid.info";
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString28 = createNode("MetadataString");
MetadataString28.name = "authorName";
MetadataString28.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

HAnimHumanoid26.metadata = MetadataSet27;

HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.name = "humanoid_root";
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "l_radiocarpal";
HAnimJoint30.DEF = "hanim_l_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.name = "l_carpal";
HAnimSegment31.DEF = "hanim_l_carpal";
Transform Transform32 = createNode("Transform");
Shape Shape33 = createNode("Shape");
Shape33.DEF = "HAnimJointShape";
Sphere Sphere34 = createNode("Sphere");
Sphere34.radius = 0.025;
Shape33.geometry = Sphere34;

Appearance Appearance35 = createNode("Appearance");
Appearance35.DEF = "HAnimJointAppearanceBlue";
Material Material36 = createNode("Material");
Material36.diffuseColor = new SFColor(new float[0,0,1]);
Appearance35.material = Material36;

Shape33.appearance = Appearance35;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Transform32;

Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.emissiveColor = new SFColor(new float[1,1,1]);
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

IndexedLineSet IndexedLineSet40 = createNode("IndexedLineSet");
IndexedLineSet40.DEF = "RCToMC12";
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet40.coord = Coordinate41;

Shape37.geometry = IndexedLineSet40;

HAnimSegment31.children[1] = Shape37;

Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.emissiveColor = new SFColor(new float[1,1,1]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

IndexedLineSet IndexedLineSet45 = createNode("IndexedLineSet");
IndexedLineSet45.DEF = "RCToMC3";
IndexedLineSet45.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet45.coord = Coordinate46;

Shape42.geometry = IndexedLineSet45;

HAnimSegment31.children[2] = Shape42;

Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

IndexedLineSet IndexedLineSet50 = createNode("IndexedLineSet");
IndexedLineSet50.DEF = "RCToMC45";
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment31.children[3] = Shape47;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

//MC1
HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "l_midcarpal_1";
HAnimJoint52.DEF = "hanim_l_midcarpal_1";
HAnimJoint52.center = new SFVec3f(new float[0.14,0.09,0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "l_trapezium";
HAnimSegment53.DEF = "hanim_l_trapezium";
Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.14,0.09,0]);
Shape Shape55 = createNode("Shape");
Shape55.DEF = "HAnimNewJointShape";
Sphere Sphere56 = createNode("Sphere");
Sphere56.radius = 0.025;
Shape55.geometry = Sphere56;

Appearance Appearance57 = createNode("Appearance");
Appearance57.DEF = "HAnimJointAppearanceRed";
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,0,0]);
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

IndexedLineSet IndexedLineSet62 = createNode("IndexedLineSet");
IndexedLineSet62.DEF = "MC12toCMC1";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate63 = createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment53.children[1] = Shape59;

Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Material66.emissiveColor = new SFColor(new float[1,1,1]);
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

IndexedLineSet IndexedLineSet67 = createNode("IndexedLineSet");
IndexedLineSet67.DEF = "MC1toCMC1";
IndexedLineSet67.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate68 = createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet67.coord = Coordinate68;

Shape64.geometry = IndexedLineSet67;

HAnimSegment53.children[2] = Shape64;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

//thumb finger
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.name = "l_carpometacarpal_1";
HAnimJoint69.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint69.center = new SFVec3f(new float[0.2,0.15,0]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment70 = createNode("HAnimSegment");
HAnimSegment70.name = "l_metacarpal_1";
HAnimSegment70.DEF = "hanim_l_metacarpal_1";
Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.2,0.15,0]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "HAnimJointShape";
Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

Shape Shape73 = createNode("Shape");
Appearance Appearance74 = createNode("Appearance");
Material Material75 = createNode("Material");
Material75.emissiveColor = new SFColor(new float[1,1,1]);
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

IndexedLineSet IndexedLineSet76 = createNode("IndexedLineSet");
IndexedLineSet76.DEF = "CMC1toMCP1";
IndexedLineSet76.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate77 = createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet76.coord = Coordinate77;

Shape73.geometry = IndexedLineSet76;

HAnimSegment70.children[1] = Shape73;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "l_metacarpophalangeal_1";
HAnimJoint78.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint78.center = new SFVec3f(new float[0.3,0.3,0]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "l_carpal_proximal_phalanx_1";
HAnimSegment79.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.3,0.3,0]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "HAnimJointShape";
Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
Material Material84 = createNode("Material");
Material84.emissiveColor = new SFColor(new float[1,1,1]);
Appearance83.material = Material84;

Shape82.appearance = Appearance83;

IndexedLineSet IndexedLineSet85 = createNode("IndexedLineSet");
IndexedLineSet85.DEF = "MCP11toIP1";
IndexedLineSet85.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet85.coord = Coordinate86;

Shape82.geometry = IndexedLineSet85;

HAnimSegment79.children[1] = Shape82;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "l_carpal_interphalangeal_1";
HAnimJoint87.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint87.center = new SFVec3f(new float[0.35,0.4,0]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment88 = createNode("HAnimSegment");
HAnimSegment88.name = "l_carpal_distal_phalanx_1";
HAnimSegment88.DEF = "hanim_l_carpal_distal_phalanx_1";
Transform Transform89 = createNode("Transform");
Transform89.translation = new SFVec3f(new float[0.35,0.4,0]);
Shape Shape90 = createNode("Shape");
Shape90.USE = "HAnimJointShape";
Transform89.children = new MFNode();

Transform89.children[0] = Shape90;

HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = Transform89;

Shape Shape91 = createNode("Shape");
Appearance Appearance92 = createNode("Appearance");
Material Material93 = createNode("Material");
Material93.emissiveColor = new SFColor(new float[1,1,1]);
Appearance92.material = Material93;

Shape91.appearance = Appearance92;

IndexedLineSet IndexedLineSet94 = createNode("IndexedLineSet");
IndexedLineSet94.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet94.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate95 = createNode("Coordinate");
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
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "l_midcarpal_2";
HAnimJoint96.DEF = "hanim_l_midcarpal_2";
HAnimJoint96.center = new SFVec3f(new float[0.07,0.07,0]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.name = "l_trapezoid";
HAnimSegment97.DEF = "hanim_l_trapezoid";
Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0.07,0.07,0]);
Shape Shape99 = createNode("Shape");
Shape99.USE = "HAnimNewJointShape";
Transform98.children = new MFNode();

Transform98.children[0] = Shape99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

Shape Shape100 = createNode("Shape");
Appearance Appearance101 = createNode("Appearance");
Material Material102 = createNode("Material");
Material102.emissiveColor = new SFColor(new float[1,1,1]);
Appearance101.material = Material102;

Shape100.appearance = Appearance101;

IndexedLineSet IndexedLineSet103 = createNode("IndexedLineSet");
IndexedLineSet103.DEF = "MC2toCMC2";
IndexedLineSet103.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet103.coord = Coordinate104;

Shape100.geometry = IndexedLineSet103;

HAnimSegment97.children[1] = Shape100;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

//index finger
HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "l_carpometacarpal_2";
HAnimJoint105.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint105.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment106 = createNode("HAnimSegment");
HAnimSegment106.name = "l_metacarpal_2";
HAnimSegment106.DEF = "hanim_l_metacarpal_2";
Transform Transform107 = createNode("Transform");
Transform107.translation = new SFVec3f(new float[0.1,0.2,0]);
Shape Shape108 = createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

HAnimSegment106.children = new MFNode();

HAnimSegment106.children[0] = Transform107;

Shape Shape109 = createNode("Shape");
Appearance Appearance110 = createNode("Appearance");
Material Material111 = createNode("Material");
Material111.emissiveColor = new SFColor(new float[1,1,1]);
Appearance110.material = Material111;

Shape109.appearance = Appearance110;

IndexedLineSet IndexedLineSet112 = createNode("IndexedLineSet");
IndexedLineSet112.DEF = "CMC2toMCP2";
IndexedLineSet112.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate113 = createNode("Coordinate");
Coordinate113.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet112.coord = Coordinate113;

Shape109.geometry = IndexedLineSet112;

HAnimSegment106.children[1] = Shape109;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.name = "l_metacarpophalangeal_2";
HAnimJoint114.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint114.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment115 = createNode("HAnimSegment");
HAnimSegment115.name = "l_carpal_proximal_phalanx_2";
HAnimSegment115.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform116 = createNode("Transform");
Transform116.translation = new SFVec3f(new float[0.15,0.5,0]);
Shape Shape117 = createNode("Shape");
Shape117.USE = "HAnimJointShape";
Transform116.children = new MFNode();

Transform116.children[0] = Shape117;

HAnimSegment115.children = new MFNode();

HAnimSegment115.children[0] = Transform116;

Shape Shape118 = createNode("Shape");
Appearance Appearance119 = createNode("Appearance");
Material Material120 = createNode("Material");
Material120.emissiveColor = new SFColor(new float[1,1,1]);
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

IndexedLineSet IndexedLineSet121 = createNode("IndexedLineSet");
IndexedLineSet121.DEF = "MCP2toPIP2";
IndexedLineSet121.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate122 = createNode("Coordinate");
Coordinate122.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet121.coord = Coordinate122;

Shape118.geometry = IndexedLineSet121;

HAnimSegment115.children[1] = Shape118;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimSegment115;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint123.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint123.center = new SFVec3f(new float[0.2,0.7,0]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment124 = createNode("HAnimSegment");
HAnimSegment124.name = "l_carpal_middle_phalanx_2";
HAnimSegment124.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform125 = createNode("Transform");
Transform125.translation = new SFVec3f(new float[0.2,0.7,0]);
Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimJointShape";
Transform125.children = new MFNode();

Transform125.children[0] = Shape126;

HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = Transform125;

Shape Shape127 = createNode("Shape");
Appearance Appearance128 = createNode("Appearance");
Material Material129 = createNode("Material");
Material129.emissiveColor = new SFColor(new float[1,1,1]);
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

IndexedLineSet IndexedLineSet130 = createNode("IndexedLineSet");
IndexedLineSet130.DEF = "PIP2toDIP2";
IndexedLineSet130.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate131 = createNode("Coordinate");
Coordinate131.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet130.coord = Coordinate131;

Shape127.geometry = IndexedLineSet130;

HAnimSegment124.children[1] = Shape127;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint132.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint132.center = new SFVec3f(new float[0.24,0.87,0]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.name = "l_carpal_distal_phalanx_2";
HAnimSegment133.DEF = "hanim_l_carpal_distal_phalanx_2";
Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.24,0.87,0]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "HAnimJointShape";
Transform134.children = new MFNode();

Transform134.children[0] = Shape135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Material138.emissiveColor = new SFColor(new float[1,1,1]);
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

IndexedLineSet IndexedLineSet139 = createNode("IndexedLineSet");
IndexedLineSet139.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet139.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate140 = createNode("Coordinate");
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
HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "l_midcarpal_3";
HAnimJoint141.DEF = "hanim_l_midcarpal_3";
HAnimJoint141.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.name = "l_capitate";
HAnimSegment142.DEF = "hanim_l_capitate";
Transform Transform143 = createNode("Transform");
Transform143.translation = new SFVec3f(new float[0,0.07,0]);
Shape Shape144 = createNode("Shape");
Shape144.USE = "HAnimNewJointShape";
Transform143.children = new MFNode();

Transform143.children[0] = Shape144;

HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = Transform143;

Shape Shape145 = createNode("Shape");
Appearance Appearance146 = createNode("Appearance");
Material Material147 = createNode("Material");
Material147.emissiveColor = new SFColor(new float[1,1,1]);
Appearance146.material = Material147;

Shape145.appearance = Appearance146;

IndexedLineSet IndexedLineSet148 = createNode("IndexedLineSet");
IndexedLineSet148.DEF = "MC3toCMC3";
IndexedLineSet148.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate149 = createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet148.coord = Coordinate149;

Shape145.geometry = IndexedLineSet148;

HAnimSegment142.children[1] = Shape145;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

//Middle fingle
HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.name = "l_carpometacarpal_3";
HAnimJoint150.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint150.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment151 = createNode("HAnimSegment");
HAnimSegment151.name = "l_metacarpal_3";
HAnimSegment151.DEF = "hanim_l_metacarpal_3";
Transform Transform152 = createNode("Transform");
Transform152.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape153 = createNode("Shape");
Shape153.USE = "HAnimJointShape";
Transform152.children = new MFNode();

Transform152.children[0] = Shape153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

Shape Shape154 = createNode("Shape");
Appearance Appearance155 = createNode("Appearance");
Material Material156 = createNode("Material");
Material156.emissiveColor = new SFColor(new float[1,1,1]);
Appearance155.material = Material156;

Shape154.appearance = Appearance155;

IndexedLineSet IndexedLineSet157 = createNode("IndexedLineSet");
IndexedLineSet157.DEF = "CMC3toMCP3";
IndexedLineSet157.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet157.coord = Coordinate158;

Shape154.geometry = IndexedLineSet157;

HAnimSegment151.children[1] = Shape154;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "l_metacarpophalangeal_3";
HAnimJoint159.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint159.center = new SFVec3f(new float[0.03,0.5,0]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment160 = createNode("HAnimSegment");
HAnimSegment160.name = "l_carpal_proximal_phalanx_3";
HAnimSegment160.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform161 = createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.03,0.5,0]);
Shape Shape162 = createNode("Shape");
Shape162.USE = "HAnimJointShape";
Transform161.children = new MFNode();

Transform161.children[0] = Shape162;

HAnimSegment160.children = new MFNode();

HAnimSegment160.children[0] = Transform161;

Shape Shape163 = createNode("Shape");
Appearance Appearance164 = createNode("Appearance");
Material Material165 = createNode("Material");
Material165.emissiveColor = new SFColor(new float[1,1,1]);
Appearance164.material = Material165;

Shape163.appearance = Appearance164;

IndexedLineSet IndexedLineSet166 = createNode("IndexedLineSet");
IndexedLineSet166.DEF = "MCP3toPIP3";
IndexedLineSet166.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate167 = createNode("Coordinate");
Coordinate167.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet166.coord = Coordinate167;

Shape163.geometry = IndexedLineSet166;

HAnimSegment160.children[1] = Shape163;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint168.center = new SFVec3f(new float[0.05,0.75,0]);
HAnimJoint168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint168.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment169 = createNode("HAnimSegment");
HAnimSegment169.name = "l_carpal_middle_phalanx_3";
HAnimSegment169.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.05,0.75,0]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "HAnimJointShape";
Transform170.children = new MFNode();

Transform170.children[0] = Shape171;

HAnimSegment169.children = new MFNode();

HAnimSegment169.children[0] = Transform170;

Shape Shape172 = createNode("Shape");
Appearance Appearance173 = createNode("Appearance");
Material Material174 = createNode("Material");
Material174.emissiveColor = new SFColor(new float[1,1,1]);
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

IndexedLineSet IndexedLineSet175 = createNode("IndexedLineSet");
IndexedLineSet175.DEF = "PIP3toDIP3";
IndexedLineSet175.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate176 = createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet175.coord = Coordinate176;

Shape172.geometry = IndexedLineSet175;

HAnimSegment169.children[1] = Shape172;

HAnimJoint168.children = new MFNode();

HAnimJoint168.children[0] = HAnimSegment169;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint177.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint177.center = new SFVec3f(new float[0.08,0.96,0]);
HAnimJoint177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint177.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.name = "l_carpal_distal_phalanx_3";
HAnimSegment178.DEF = "hanim_l_carpal_distal_phalanx_3";
Transform Transform179 = createNode("Transform");
Transform179.translation = new SFVec3f(new float[0.08,0.96,0]);
Shape Shape180 = createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.children = new MFNode();

Transform179.children[0] = Shape180;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Transform179;

Shape Shape181 = createNode("Shape");
Appearance Appearance182 = createNode("Appearance");
Material Material183 = createNode("Material");
Material183.emissiveColor = new SFColor(new float[1,1,1]);
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

IndexedLineSet IndexedLineSet184 = createNode("IndexedLineSet");
IndexedLineSet184.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet184.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate185 = createNode("Coordinate");
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
HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.name = "l_midcarpal_4_5";
HAnimJoint186.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint186.center = new SFVec3f(new float[-0.1,0.1,0]);
HAnimJoint186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint186.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.name = "l_hamate";
HAnimSegment187.DEF = "hanim_l_hamate";
Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[-0.1,0.1,0]);
Shape Shape189 = createNode("Shape");
Shape189.USE = "HAnimNewJointShape";
Transform188.children = new MFNode();

Transform188.children[0] = Shape189;

HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = Transform188;

Shape Shape190 = createNode("Shape");
Appearance Appearance191 = createNode("Appearance");
Material Material192 = createNode("Material");
Material192.emissiveColor = new SFColor(new float[1,1,1]);
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

IndexedLineSet IndexedLineSet193 = createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC4";
IndexedLineSet193.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet193.coord = Coordinate194;

Shape190.geometry = IndexedLineSet193;

HAnimSegment187.children[1] = Shape190;

Shape Shape195 = createNode("Shape");
Appearance Appearance196 = createNode("Appearance");
Material Material197 = createNode("Material");
Material197.emissiveColor = new SFColor(new float[1,1,1]);
Appearance196.material = Material197;

Shape195.appearance = Appearance196;

IndexedLineSet IndexedLineSet198 = createNode("IndexedLineSet");
IndexedLineSet198.DEF = "MC45toCMC5";
IndexedLineSet198.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet198.coord = Coordinate199;

Shape195.geometry = IndexedLineSet198;

HAnimSegment187.children[2] = Shape195;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

//ring finger
HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.name = "l_carpometacarpal_4";
HAnimJoint200.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint200.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint200.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint200.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment201 = createNode("HAnimSegment");
HAnimSegment201.name = "l_metacarpal_4";
HAnimSegment201.DEF = "hanim_l_metacarpal_4";
Transform Transform202 = createNode("Transform");
Transform202.translation = new SFVec3f(new float[-0.1,0.2,0]);
Shape Shape203 = createNode("Shape");
Shape203.USE = "HAnimJointShape";
Transform202.children = new MFNode();

Transform202.children[0] = Shape203;

HAnimSegment201.children = new MFNode();

HAnimSegment201.children[0] = Transform202;

Shape Shape204 = createNode("Shape");
Appearance Appearance205 = createNode("Appearance");
Material Material206 = createNode("Material");
Material206.emissiveColor = new SFColor(new float[1,1,1]);
Appearance205.material = Material206;

Shape204.appearance = Appearance205;

IndexedLineSet IndexedLineSet207 = createNode("IndexedLineSet");
IndexedLineSet207.DEF = "CMC4toMCP4";
IndexedLineSet207.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate208 = createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet207.coord = Coordinate208;

Shape204.geometry = IndexedLineSet207;

HAnimSegment201.children[1] = Shape204;

HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.name = "l_metacarpophalangeal_4";
HAnimJoint209.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint209.center = new SFVec3f(new float[-0.1,0.47,0]);
HAnimJoint209.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint209.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment210 = createNode("HAnimSegment");
HAnimSegment210.name = "l_carpal_proximal_phalanx_4";
HAnimSegment210.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform211 = createNode("Transform");
Transform211.translation = new SFVec3f(new float[-0.1,0.47,0]);
Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimJointShape";
Transform211.children = new MFNode();

Transform211.children[0] = Shape212;

HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = Transform211;

Shape Shape213 = createNode("Shape");
Appearance Appearance214 = createNode("Appearance");
Material Material215 = createNode("Material");
Material215.emissiveColor = new SFColor(new float[1,1,1]);
Appearance214.material = Material215;

Shape213.appearance = Appearance214;

IndexedLineSet IndexedLineSet216 = createNode("IndexedLineSet");
IndexedLineSet216.DEF = "MCP4toPIP4";
IndexedLineSet216.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate217 = createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet216.coord = Coordinate217;

Shape213.geometry = IndexedLineSet216;

HAnimSegment210.children[1] = Shape213;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint218.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint218.center = new SFVec3f(new float[-0.1,0.7,0]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.name = "l_carpal_middle_phalanx_4";
HAnimSegment219.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[-0.1,0.7,0]);
Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = Transform220;

Shape Shape222 = createNode("Shape");
Appearance Appearance223 = createNode("Appearance");
Material Material224 = createNode("Material");
Material224.emissiveColor = new SFColor(new float[1,1,1]);
Appearance223.material = Material224;

Shape222.appearance = Appearance223;

IndexedLineSet IndexedLineSet225 = createNode("IndexedLineSet");
IndexedLineSet225.DEF = "PIP4toDIP4";
IndexedLineSet225.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet225.coord = Coordinate226;

Shape222.geometry = IndexedLineSet225;

HAnimSegment219.children[1] = Shape222;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint227.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint227.center = new SFVec3f(new float[-0.1,0.93,0]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l_carpal_distal_phalanx_4";
HAnimSegment228.DEF = "hanim_l_carpal_distal_phalanx_4";
Transform Transform229 = createNode("Transform");
Transform229.translation = new SFVec3f(new float[-0.1,0.93,0]);
Shape Shape230 = createNode("Shape");
Shape230.USE = "HAnimJointShape";
Transform229.children = new MFNode();

Transform229.children[0] = Shape230;

HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = Transform229;

Shape Shape231 = createNode("Shape");
Appearance Appearance232 = createNode("Appearance");
Material Material233 = createNode("Material");
Material233.emissiveColor = new SFColor(new float[1,1,1]);
Appearance232.material = Material233;

Shape231.appearance = Appearance232;

IndexedLineSet IndexedLineSet234 = createNode("IndexedLineSet");
IndexedLineSet234.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet234.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate235 = createNode("Coordinate");
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
HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.name = "l_carpometacarpal_5";
HAnimJoint236.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint236.center = new SFVec3f(new float[-0.15,0.17,0]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment237 = createNode("HAnimSegment");
HAnimSegment237.name = "l_metacarpal_5";
HAnimSegment237.DEF = "hanim_l_metacarpal_5";
Transform Transform238 = createNode("Transform");
Transform238.translation = new SFVec3f(new float[-0.15,0.17,0]);
Shape Shape239 = createNode("Shape");
Shape239.USE = "HAnimJointShape";
Transform238.children = new MFNode();

Transform238.children[0] = Shape239;

HAnimSegment237.children = new MFNode();

HAnimSegment237.children[0] = Transform238;

Shape Shape240 = createNode("Shape");
Appearance Appearance241 = createNode("Appearance");
Material Material242 = createNode("Material");
Material242.emissiveColor = new SFColor(new float[1,1,1]);
Appearance241.material = Material242;

Shape240.appearance = Appearance241;

IndexedLineSet IndexedLineSet243 = createNode("IndexedLineSet");
IndexedLineSet243.DEF = "CMC5toMCP5";
IndexedLineSet243.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate244 = createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet243.coord = Coordinate244;

Shape240.geometry = IndexedLineSet243;

HAnimSegment237.children[1] = Shape240;

HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.name = "l_metacarpophalangeal_5";
HAnimJoint245.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint245.center = new SFVec3f(new float[-0.2,0.4,0]);
HAnimJoint245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint245.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment246 = createNode("HAnimSegment");
HAnimSegment246.name = "l_carpal_proximal_phalanx_5";
HAnimSegment246.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform247 = createNode("Transform");
Transform247.translation = new SFVec3f(new float[-0.2,0.4,0]);
Shape Shape248 = createNode("Shape");
Shape248.USE = "HAnimJointShape";
Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

HAnimSegment246.children = new MFNode();

HAnimSegment246.children[0] = Transform247;

Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
Material Material251 = createNode("Material");
Material251.emissiveColor = new SFColor(new float[1,1,1]);
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

IndexedLineSet IndexedLineSet252 = createNode("IndexedLineSet");
IndexedLineSet252.DEF = "MCP5toPIP5";
IndexedLineSet252.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate253 = createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet252.coord = Coordinate253;

Shape249.geometry = IndexedLineSet252;

HAnimSegment246.children[1] = Shape249;

HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint254.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint254.center = new SFVec3f(new float[-0.23,0.63,0]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment255 = createNode("HAnimSegment");
HAnimSegment255.name = "l_carpal_middle_phalanx_5";
HAnimSegment255.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform256 = createNode("Transform");
Transform256.translation = new SFVec3f(new float[-0.23,0.63,0]);
Shape Shape257 = createNode("Shape");
Shape257.USE = "HAnimJointShape";
Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

HAnimSegment255.children = new MFNode();

HAnimSegment255.children[0] = Transform256;

Shape Shape258 = createNode("Shape");
Appearance Appearance259 = createNode("Appearance");
Material Material260 = createNode("Material");
Material260.emissiveColor = new SFColor(new float[1,1,1]);
Appearance259.material = Material260;

Shape258.appearance = Appearance259;

IndexedLineSet IndexedLineSet261 = createNode("IndexedLineSet");
IndexedLineSet261.DEF = "PIP5toDIP5";
IndexedLineSet261.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate262 = createNode("Coordinate");
Coordinate262.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet261.coord = Coordinate262;

Shape258.geometry = IndexedLineSet261;

HAnimSegment255.children[1] = Shape258;

HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint263.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint263.center = new SFVec3f(new float[-0.25,0.79,0]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment264 = createNode("HAnimSegment");
HAnimSegment264.name = "l_carpal_distal_phalanx_5";
HAnimSegment264.DEF = "hanim_l_carpal_distal_phalanx_5";
Transform Transform265 = createNode("Transform");
Transform265.translation = new SFVec3f(new float[-0.25,0.79,0]);
Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimJointShape";
Transform265.children = new MFNode();

Transform265.children[0] = Shape266;

HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = Transform265;

Shape Shape267 = createNode("Shape");
Appearance Appearance268 = createNode("Appearance");
Material Material269 = createNode("Material");
Material269.emissiveColor = new SFColor(new float[1,1,1]);
Appearance268.material = Material269;

Shape267.appearance = Appearance268;

IndexedLineSet IndexedLineSet270 = createNode("IndexedLineSet");
IndexedLineSet270.DEF = "fingertip_l_carpal_distal_interphalangeal_5";
IndexedLineSet270.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate271 = createNode("Coordinate");
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

HAnimHumanoid26.joints = new MFNode();

HAnimHumanoid26.joints[0] = HAnimJoint29;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[1] = HAnimJoint272;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid26.joints[2] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid26.joints[3] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid26.joints[4] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid26.joints[5] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid26.joints[6] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[7] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[8] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[9] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid26.joints[10] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid26.joints[11] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid26.joints[12] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid26.joints[13] = HAnimJoint284;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid26.joints[14] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid26.joints[15] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid26.joints[16] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid26.joints[17] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid26.joints[18] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid26.joints[19] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid26.joints[20] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_midcarpal_1";
HAnimHumanoid26.joints[21] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_midcarpal_2";
HAnimHumanoid26.joints[22] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_midcarpal_3";
HAnimHumanoid26.joints[23] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid26.joints[24] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_radiocarpal";
HAnimHumanoid26.joints[25] = HAnimJoint296;

HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_capitate";
HAnimHumanoid26.segments[26] = HAnimSegment297;

HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_carpal";
HAnimHumanoid26.segments[27] = HAnimSegment298;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid26.segments[28] = HAnimSegment299;

HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid26.segments[29] = HAnimSegment300;

HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid26.segments[30] = HAnimSegment301;

HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid26.segments[31] = HAnimSegment302;

HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid26.segments[32] = HAnimSegment303;

HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid26.segments[33] = HAnimSegment304;

HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid26.segments[34] = HAnimSegment305;

HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid26.segments[35] = HAnimSegment306;

HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid26.segments[36] = HAnimSegment307;

HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid26.segments[37] = HAnimSegment308;

HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid26.segments[38] = HAnimSegment309;

HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid26.segments[39] = HAnimSegment310;

HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid26.segments[40] = HAnimSegment311;

HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid26.segments[41] = HAnimSegment312;

HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_l_hamate";
HAnimHumanoid26.segments[42] = HAnimSegment313;

HAnimSegment HAnimSegment314 = createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_l_metacarpal_1";
HAnimHumanoid26.segments[43] = HAnimSegment314;

HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_l_metacarpal_2";
HAnimHumanoid26.segments[44] = HAnimSegment315;

HAnimSegment HAnimSegment316 = createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_l_metacarpal_3";
HAnimHumanoid26.segments[45] = HAnimSegment316;

HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_l_metacarpal_4";
HAnimHumanoid26.segments[46] = HAnimSegment317;

HAnimSegment HAnimSegment318 = createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_l_metacarpal_5";
HAnimHumanoid26.segments[47] = HAnimSegment318;

HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_l_trapezium";
HAnimHumanoid26.segments[48] = HAnimSegment319;

HAnimSegment HAnimSegment320 = createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_l_trapezoid";
HAnimHumanoid26.segments[49] = HAnimSegment320;

children[1] = HAnimHumanoid26;

}

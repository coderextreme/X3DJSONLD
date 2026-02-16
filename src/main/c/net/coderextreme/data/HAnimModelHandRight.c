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
meta3.content = "HAnimModelHandRight.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Right hand using high-fidelity definitions for HAnim version 2.0";
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
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d";
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
WorldInfo25.title = "HAnimModelHandRight.x3d";
children = new MFNode();

children[0] = WorldInfo25;

HAnimHumanoid HAnimHumanoid26 = createNode("HAnimHumanoid");
HAnimHumanoid26.name = "Hand_Right";
HAnimHumanoid26.DEF = "hanim_Hand_Right";
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

HAnimHumanoid26.metadata = new SFNode();

HAnimHumanoid26.metadata[0] = MetadataSet27;

HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.name = "humanoid_root";
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "r_radiocarpal";
HAnimJoint30.DEF = "hanim_r_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.name = "r_carpal";
HAnimSegment31.DEF = "hanim_r_carpal";
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

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

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
Coordinate41.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
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
Coordinate51.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment31.children[3] = Shape47;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

//MC1
HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "r_midcarpal_1";
HAnimJoint52.DEF = "hanim_r_midcarpal_1";
HAnimJoint52.center = new SFVec3f(new float[-0.14,0.09,0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "r_trapezium";
HAnimSegment53.DEF = "hanim_r_trapezium";
Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[-0.14,0.09,0]);
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

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

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
Coordinate63.point = new MFVec3f(new float[-0.1,0.1,0,-0.2,0.15,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment53.children[1] = Shape59;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

//thumb finger
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "r_carpometacarpal_1";
HAnimJoint64.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint64.center = new SFVec3f(new float[-0.2,0.15,0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.name = "r_metacarpal_1";
HAnimSegment65.DEF = "hanim_r_metacarpal_1";
Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[-0.2,0.15,0]);
Shape Shape67 = createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.child = new undefined();

Transform66.child[0] = Shape67;

HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = Transform66;

Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.emissiveColor = new SFColor(new float[1,1,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

IndexedLineSet IndexedLineSet71 = createNode("IndexedLineSet");
IndexedLineSet71.DEF = "CMC1toMCP1xxx";
IndexedLineSet71.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[-0.2,0.15,0,-0.3,0.3,0]);
IndexedLineSet71.coord = Coordinate72;

Shape68.geometry = IndexedLineSet71;

HAnimSegment65.children[1] = Shape68;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "r_metacarpophalangeal_1";
HAnimJoint73.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint73.center = new SFVec3f(new float[-0.3,0.3,0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment74 = createNode("HAnimSegment");
HAnimSegment74.name = "r_carpal_proximal_phalanx_1";
HAnimSegment74.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.3,0.3,0]);
Shape Shape76 = createNode("Shape");
Shape76.USE = "HAnimJointShape";
Transform75.child = new undefined();

Transform75.child[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.emissiveColor = new SFColor(new float[1,1,1]);
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

IndexedLineSet IndexedLineSet80 = createNode("IndexedLineSet");
IndexedLineSet80.DEF = "MCP11toIP1";
IndexedLineSet80.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.3,0.3,0,-0.35,0.4,0]);
IndexedLineSet80.coord = Coordinate81;

Shape77.geometry = IndexedLineSet80;

HAnimSegment74.children[1] = Shape77;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "r_carpal_interphalangeal_1";
HAnimJoint82.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint82.center = new SFVec3f(new float[-0.35,0.4,0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment83 = createNode("HAnimSegment");
HAnimSegment83.name = "r_carpal_distal_phalanx_1";
HAnimSegment83.DEF = "hanim_r_carpal_distal_phalanx_1";
Transform Transform84 = createNode("Transform");
Transform84.translation = new SFVec3f(new float[-0.35,0.4,0]);
Shape Shape85 = createNode("Shape");
Shape85.USE = "HAnimJointShape";
Transform84.child = new undefined();

Transform84.child[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

Shape Shape86 = createNode("Shape");
Appearance Appearance87 = createNode("Appearance");
Material Material88 = createNode("Material");
Material88.emissiveColor = new SFColor(new float[1,1,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

IndexedLineSet IndexedLineSet89 = createNode("IndexedLineSet");
IndexedLineSet89.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[-0.35,0.4,0,-0.36,0.45,0]);
IndexedLineSet89.coord = Coordinate90;

Shape86.geometry = IndexedLineSet89;

HAnimSegment83.children[1] = Shape86;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint73.children[1] = HAnimJoint82;

HAnimJoint64.children[1] = HAnimJoint73;

HAnimJoint52.children[1] = HAnimJoint64;

HAnimJoint30.children[1] = HAnimJoint52;

//MC2
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "r_midcarpal_2";
HAnimJoint91.DEF = "hanim_r_midcarpal_2";
HAnimJoint91.center = new SFVec3f(new float[-0.07,0.07,0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment92 = createNode("HAnimSegment");
HAnimSegment92.name = "r_trapezoid";
HAnimSegment92.DEF = "hanim_r_trapezoid";
Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[-0.07,0.07,0]);
Shape Shape94 = createNode("Shape");
Shape94.USE = "HAnimNewJointShape";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.emissiveColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

IndexedLineSet IndexedLineSet98 = createNode("IndexedLineSet");
IndexedLineSet98.DEF = "MC12toCMC2";
IndexedLineSet98.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet98.coord = Coordinate99;

Shape95.geometry = IndexedLineSet98;

HAnimSegment92.children[1] = Shape95;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

//index finger
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "r_carpometacarpal_2";
HAnimJoint100.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint100.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment101 = createNode("HAnimSegment");
HAnimSegment101.name = "r_metacarpal_2";
HAnimSegment101.DEF = "hanim_r_metacarpal_2";
Transform Transform102 = createNode("Transform");
Transform102.translation = new SFVec3f(new float[-0.1,0.2,0]);
Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimJointShape";
Transform102.child = new undefined();

Transform102.child[0] = Shape103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.emissiveColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedLineSet IndexedLineSet107 = createNode("IndexedLineSet");
IndexedLineSet107.DEF = "CMC2toMCP2";
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate108 = createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[-0.1,0.2,0,-0.15,0.5,0]);
IndexedLineSet107.coord = Coordinate108;

Shape104.geometry = IndexedLineSet107;

HAnimSegment101.children[1] = Shape104;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "r_metacarpophalangeal_2";
HAnimJoint109.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint109.center = new SFVec3f(new float[-0.15,0.5,0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.name = "r_carpal_proximal_phalanx_2";
HAnimSegment110.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[-0.15,0.5,0]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

Shape Shape113 = createNode("Shape");
Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Material115.emissiveColor = new SFColor(new float[1,1,1]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

IndexedLineSet IndexedLineSet116 = createNode("IndexedLineSet");
IndexedLineSet116.DEF = "MCP2toPIP2";
IndexedLineSet116.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate117 = createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[-0.15,0.5,0,-0.2,0.7,0]);
IndexedLineSet116.coord = Coordinate117;

Shape113.geometry = IndexedLineSet116;

HAnimSegment110.children[1] = Shape113;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint118.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.7,0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment119 = createNode("HAnimSegment");
HAnimSegment119.name = "r_carpal_middle_phalanx_2";
HAnimSegment119.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform120 = createNode("Transform");
Transform120.translation = new SFVec3f(new float[-0.2,0.7,0]);
Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimJointShape";
Transform120.child = new undefined();

Transform120.child[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.emissiveColor = new SFColor(new float[1,1,1]);
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

IndexedLineSet IndexedLineSet125 = createNode("IndexedLineSet");
IndexedLineSet125.DEF = "PIP2toDIP2";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[-0.2,0.7,0,-0.24,0.87,0]);
IndexedLineSet125.coord = Coordinate126;

Shape122.geometry = IndexedLineSet125;

HAnimSegment119.children[1] = Shape122;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint127.center = new SFVec3f(new float[-0.24,0.87,0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment128 = createNode("HAnimSegment");
HAnimSegment128.name = "r_carpal_distal_phalanx_2";
HAnimSegment128.DEF = "hanim_r_carpal_distal_phalanx_2";
Transform Transform129 = createNode("Transform");
Transform129.translation = new SFVec3f(new float[-0.24,0.87,0]);
Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.child = new undefined();

Transform129.child[0] = Shape130;

HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = Transform129;

Shape Shape131 = createNode("Shape");
Appearance Appearance132 = createNode("Appearance");
Material Material133 = createNode("Material");
Material133.emissiveColor = new SFColor(new float[1,1,1]);
Appearance132.material = Material133;

Shape131.appearance = Appearance132;

IndexedLineSet IndexedLineSet134 = createNode("IndexedLineSet");
IndexedLineSet134.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet134.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate135 = createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[-0.24,0.87,0,-0.26,0.93,0]);
IndexedLineSet134.coord = Coordinate135;

Shape131.geometry = IndexedLineSet134;

HAnimSegment128.children[1] = Shape131;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

HAnimJoint118.children[1] = HAnimJoint127;

HAnimJoint109.children[1] = HAnimJoint118;

HAnimJoint100.children[1] = HAnimJoint109;

HAnimJoint91.children[1] = HAnimJoint100;

HAnimJoint30.children[2] = HAnimJoint91;

//MC3
HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "r_midcarpal_3";
HAnimJoint136.DEF = "hanim_r_midcarpal_3";
HAnimJoint136.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.name = "r_capitate";
HAnimSegment137.DEF = "hanim_r_capitate";
Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0,0.07,0]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimNewJointShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

Shape Shape140 = createNode("Shape");
Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.emissiveColor = new SFColor(new float[1,1,1]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

IndexedLineSet IndexedLineSet143 = createNode("IndexedLineSet");
IndexedLineSet143.DEF = "MC3toCMC3";
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate144 = createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet143.coord = Coordinate144;

Shape140.geometry = IndexedLineSet143;

HAnimSegment137.children[1] = Shape140;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

//Middle fingle
HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "r_carpometacarpal_3";
HAnimJoint145.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint145.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment146 = createNode("HAnimSegment");
HAnimSegment146.name = "r_metacarpal_3";
HAnimSegment146.DEF = "hanim_r_metacarpal_3";
Transform Transform147 = createNode("Transform");
Transform147.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.child = new undefined();

Transform147.child[0] = Shape148;

HAnimSegment146.children = new MFNode();

HAnimSegment146.children[0] = Transform147;

Shape Shape149 = createNode("Shape");
Appearance Appearance150 = createNode("Appearance");
Material Material151 = createNode("Material");
Material151.emissiveColor = new SFColor(new float[1,1,1]);
Appearance150.material = Material151;

Shape149.appearance = Appearance150;

IndexedLineSet IndexedLineSet152 = createNode("IndexedLineSet");
IndexedLineSet152.DEF = "CMC3toMCP3";
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate153 = createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0,0.2,0,-0.03,0.5,0]);
IndexedLineSet152.coord = Coordinate153;

Shape149.geometry = IndexedLineSet152;

HAnimSegment146.children[1] = Shape149;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "r_metacarpophalangeal_3";
HAnimJoint154.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint154.center = new SFVec3f(new float[-0.03,0.5,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.name = "r_carpal_proximal_phalanx_3";
HAnimSegment155.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[-0.03,0.5,0]);
Shape Shape157 = createNode("Shape");
Shape157.USE = "HAnimJointShape";
Transform156.child = new undefined();

Transform156.child[0] = Shape157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.emissiveColor = new SFColor(new float[1,1,1]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

IndexedLineSet IndexedLineSet161 = createNode("IndexedLineSet");
IndexedLineSet161.DEF = "MCP3toPIP3";
IndexedLineSet161.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[-0.03,0.5,0,-0.05,0.75,0]);
IndexedLineSet161.coord = Coordinate162;

Shape158.geometry = IndexedLineSet161;

HAnimSegment155.children[1] = Shape158;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint163.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint163.center = new SFVec3f(new float[-0.05,0.75,0]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "r_carpal_middle_phalanx_3";
HAnimSegment164.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform165 = createNode("Transform");
Transform165.translation = new SFVec3f(new float[-0.05,0.75,0]);
Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimJointShape";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

Shape Shape167 = createNode("Shape");
Appearance Appearance168 = createNode("Appearance");
Material Material169 = createNode("Material");
Material169.emissiveColor = new SFColor(new float[1,1,1]);
Appearance168.material = Material169;

Shape167.appearance = Appearance168;

IndexedLineSet IndexedLineSet170 = createNode("IndexedLineSet");
IndexedLineSet170.DEF = "PIP3toDIP3";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate171 = createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[-0.05,0.75,0,-0.08,0.96,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment164.children[1] = Shape167;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint172.center = new SFVec3f(new float[-0.08,0.96,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.name = "r_carpal_distal_phalanx_3";
HAnimSegment173.DEF = "hanim_r_carpal_distal_phalanx_3";
Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[-0.08,0.96,0]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.child = new undefined();

Transform174.child[0] = Shape175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

Shape Shape176 = createNode("Shape");
Appearance Appearance177 = createNode("Appearance");
Material Material178 = createNode("Material");
Material178.emissiveColor = new SFColor(new float[1,1,1]);
Appearance177.material = Material178;

Shape176.appearance = Appearance177;

IndexedLineSet IndexedLineSet179 = createNode("IndexedLineSet");
IndexedLineSet179.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet179.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate180 = createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[-0.08,0.96,0,-0.09,1.05,0]);
IndexedLineSet179.coord = Coordinate180;

Shape176.geometry = IndexedLineSet179;

HAnimSegment173.children[1] = Shape176;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint163.children[1] = HAnimJoint172;

HAnimJoint154.children[1] = HAnimJoint163;

HAnimJoint145.children[1] = HAnimJoint154;

HAnimJoint136.children[1] = HAnimJoint145;

HAnimJoint30.children[3] = HAnimJoint136;

//MC4_5
HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "r_midcarpal_4_5";
HAnimJoint181.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint181.center = new SFVec3f(new float[0.1,0.1,0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.name = "r_hamate";
HAnimSegment182.DEF = "hanim_r_hamate";
Transform Transform183 = createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.1,0.1,0]);
Shape Shape184 = createNode("Shape");
Shape184.USE = "HAnimNewJointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

Shape Shape185 = createNode("Shape");
Appearance Appearance186 = createNode("Appearance");
Material Material187 = createNode("Material");
Material187.emissiveColor = new SFColor(new float[1,1,1]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

IndexedLineSet IndexedLineSet188 = createNode("IndexedLineSet");
IndexedLineSet188.DEF = "MC45toCMC4";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate189 = createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet188.coord = Coordinate189;

Shape185.geometry = IndexedLineSet188;

HAnimSegment182.children[1] = Shape185;

Shape Shape190 = createNode("Shape");
Appearance Appearance191 = createNode("Appearance");
Material Material192 = createNode("Material");
Material192.emissiveColor = new SFColor(new float[1,1,1]);
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

IndexedLineSet IndexedLineSet193 = createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC5";
IndexedLineSet193.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1,0.1,0,0.15,0.17,0]);
IndexedLineSet193.coord = Coordinate194;

Shape190.geometry = IndexedLineSet193;

HAnimSegment182.children[2] = Shape190;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

//ring finger
HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.name = "r_carpometacarpal_4";
HAnimJoint195.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint195.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint195.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.name = "r_metacarpal_4";
HAnimSegment196.DEF = "hanim_r_metacarpal_4";
Transform Transform197 = createNode("Transform");
Transform197.translation = new SFVec3f(new float[0.1,0.2,0]);
Shape Shape198 = createNode("Shape");
Shape198.USE = "HAnimJointShape";
Transform197.child = new undefined();

Transform197.child[0] = Shape198;

HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = Transform197;

Shape Shape199 = createNode("Shape");
Appearance Appearance200 = createNode("Appearance");
Material Material201 = createNode("Material");
Material201.emissiveColor = new SFColor(new float[1,1,1]);
Appearance200.material = Material201;

Shape199.appearance = Appearance200;

IndexedLineSet IndexedLineSet202 = createNode("IndexedLineSet");
IndexedLineSet202.DEF = "CMC4toMCP4";
IndexedLineSet202.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1,0.2,0,0.1,0.47,0]);
IndexedLineSet202.coord = Coordinate203;

Shape199.geometry = IndexedLineSet202;

HAnimSegment196.children[1] = Shape199;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "r_metacarpophalangeal_4";
HAnimJoint204.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint204.center = new SFVec3f(new float[0.1,0.47,0]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.name = "r_carpal_proximal_phalanx_4";
HAnimSegment205.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.1,0.47,0]);
Shape Shape207 = createNode("Shape");
Shape207.USE = "HAnimJointShape";
Transform206.child = new undefined();

Transform206.child[0] = Shape207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

Shape Shape208 = createNode("Shape");
Appearance Appearance209 = createNode("Appearance");
Material Material210 = createNode("Material");
Material210.emissiveColor = new SFColor(new float[1,1,1]);
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

IndexedLineSet IndexedLineSet211 = createNode("IndexedLineSet");
IndexedLineSet211.DEF = "MCP4toPIP4";
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.1,0.47,0,0.1,0.7,0]);
IndexedLineSet211.coord = Coordinate212;

Shape208.geometry = IndexedLineSet211;

HAnimSegment205.children[1] = Shape208;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint213.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint213.center = new SFVec3f(new float[0.1,0.7,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "r_carpal_middle_phalanx_4";
HAnimSegment214.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1,0.7,0]);
Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimJointShape";
Transform215.child = new undefined();

Transform215.child[0] = Shape216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.emissiveColor = new SFColor(new float[1,1,1]);
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

IndexedLineSet IndexedLineSet220 = createNode("IndexedLineSet");
IndexedLineSet220.DEF = "PIP4toDIP4";
IndexedLineSet220.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate221 = createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0.1,0.7,0,0.1,0.93,0]);
IndexedLineSet220.coord = Coordinate221;

Shape217.geometry = IndexedLineSet220;

HAnimSegment214.children[1] = Shape217;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint222.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint222.center = new SFVec3f(new float[0.1,0.93,0]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.name = "r_carpal_distal_phalanx_4";
HAnimSegment223.DEF = "hanim_r_carpal_distal_phalanx_4";
Transform Transform224 = createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.1,0.93,0]);
Shape Shape225 = createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224.child = new undefined();

Transform224.child[0] = Shape225;

HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = Transform224;

Shape Shape226 = createNode("Shape");
Appearance Appearance227 = createNode("Appearance");
Material Material228 = createNode("Material");
Material228.emissiveColor = new SFColor(new float[1,1,1]);
Appearance227.material = Material228;

Shape226.appearance = Appearance227;

IndexedLineSet IndexedLineSet229 = createNode("IndexedLineSet");
IndexedLineSet229.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[0.1,0.93,0,0.1,1,0]);
IndexedLineSet229.coord = Coordinate230;

Shape226.geometry = IndexedLineSet229;

HAnimSegment223.children[1] = Shape226;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint213.children[1] = HAnimJoint222;

HAnimJoint204.children[1] = HAnimJoint213;

HAnimJoint195.children[1] = HAnimJoint204;

HAnimJoint181.children[1] = HAnimJoint195;

//pinky finger
HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.name = "r_carpometacarpal_5";
HAnimJoint231.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint231.center = new SFVec3f(new float[0.15,0.17,0]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.name = "r_metacarpal_5";
HAnimSegment232.DEF = "hanim_r_metacarpal_5";
Transform Transform233 = createNode("Transform");
Transform233.translation = new SFVec3f(new float[0.15,0.17,0]);
Shape Shape234 = createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.child = new undefined();

Transform233.child[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

Shape Shape235 = createNode("Shape");
Appearance Appearance236 = createNode("Appearance");
Material Material237 = createNode("Material");
Material237.emissiveColor = new SFColor(new float[1,1,1]);
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

IndexedLineSet IndexedLineSet238 = createNode("IndexedLineSet");
IndexedLineSet238.DEF = "CMC5toMCP5";
IndexedLineSet238.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.15,0.17,0,0.2,0.4,0]);
IndexedLineSet238.coord = Coordinate239;

Shape235.geometry = IndexedLineSet238;

HAnimSegment232.children[1] = Shape235;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "r_metacarpophalangeal_5";
HAnimJoint240.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint240.center = new SFVec3f(new float[0.2,0.4,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "r_carpal_proximal_phalanx_5";
HAnimSegment241.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.2,0.4,0]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.child = new undefined();

Transform242.child[0] = Shape243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Material Material246 = createNode("Material");
Material246.emissiveColor = new SFColor(new float[1,1,1]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

IndexedLineSet IndexedLineSet247 = createNode("IndexedLineSet");
IndexedLineSet247.DEF = "MCP5toPIP5";
IndexedLineSet247.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.2,0.4,0,0.23,0.63,0]);
IndexedLineSet247.coord = Coordinate248;

Shape244.geometry = IndexedLineSet247;

HAnimSegment241.children[1] = Shape244;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint249.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint249.center = new SFVec3f(new float[0.23,0.63,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "r_carpal_middle_phalanx_5";
HAnimSegment250.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform251 = createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.23,0.63,0]);
Shape Shape252 = createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.child = new undefined();

Transform251.child[0] = Shape252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

Shape Shape253 = createNode("Shape");
Appearance Appearance254 = createNode("Appearance");
Material Material255 = createNode("Material");
Material255.emissiveColor = new SFColor(new float[1,1,1]);
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

IndexedLineSet IndexedLineSet256 = createNode("IndexedLineSet");
IndexedLineSet256.DEF = "PIP5toDIP5";
IndexedLineSet256.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.23,0.63,0,0.25,0.79,0]);
IndexedLineSet256.coord = Coordinate257;

Shape253.geometry = IndexedLineSet256;

HAnimSegment250.children[1] = Shape253;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint258.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint258.center = new SFVec3f(new float[0.25,0.79,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "r_carpal_distal_phalanx_5";
HAnimSegment259.DEF = "hanim_r_carpal_distal_phalanx_5";
Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.25,0.79,0]);
Shape Shape261 = createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.child = new undefined();

Transform260.child[0] = Shape261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

Shape Shape262 = createNode("Shape");
Appearance Appearance263 = createNode("Appearance");
Material Material264 = createNode("Material");
Material264.emissiveColor = new SFColor(new float[1,1,1]);
Appearance263.material = Material264;

Shape262.appearance = Appearance263;

IndexedLineSet IndexedLineSet265 = createNode("IndexedLineSet");
IndexedLineSet265.DEF = "fingertip_r_carpal_distal_interphalangeal_5";
IndexedLineSet265.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0.25,0.79,0,0.26,0.85,0]);
IndexedLineSet265.coord = Coordinate266;

Shape262.geometry = IndexedLineSet265;

HAnimSegment259.children[1] = Shape262;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint240.children[1] = HAnimJoint249;

HAnimJoint231.children[1] = HAnimJoint240;

HAnimJoint181.children[2] = HAnimJoint231;

HAnimJoint30.children[4] = HAnimJoint181;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimJoint30;

HAnimHumanoid26.joints[1] = HAnimJoint29;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[2] = HAnimJoint267;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid26.joints[3] = HAnimJoint268;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid26.joints[4] = HAnimJoint269;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid26.joints[5] = HAnimJoint270;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid26.joints[6] = HAnimJoint271;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid26.joints[7] = HAnimJoint272;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[8] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[9] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[10] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid26.joints[11] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid26.joints[12] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid26.joints[13] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid26.joints[14] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid26.joints[15] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid26.joints[16] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid26.joints[17] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid26.joints[18] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid26.joints[19] = HAnimJoint284;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid26.joints[20] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid26.joints[21] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_r_midcarpal_1";
HAnimHumanoid26.joints[22] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_r_midcarpal_2";
HAnimHumanoid26.joints[23] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_midcarpal_3";
HAnimHumanoid26.joints[24] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid26.joints[25] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_radiocarpal";
HAnimHumanoid26.joints[26] = HAnimJoint291;

children[1] = HAnimHumanoid26;

}
